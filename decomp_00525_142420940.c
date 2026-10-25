// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142420940 FUN_142420940 body=279 status=ok
// SIG undefined FUN_142420940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142420940(undefined4 *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_44;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x2a8))(param_2), cVar1 != '\0')) {
    local_48 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_44 = 0;
    FUN_1424006e0(&local_48,param_2);
    ScaleLookupTableByLookupTable(param_1,&local_48);
    if (local_38 == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  iVar2 = 0;
  local_20 = 0;
  local_18 = 0;
  param_1[6] = 0;
  if (param_1[7] != 3) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 4,3);
    iVar2 = param_1[6];
  }
  param_1[6] = iVar2 + 3;
  if ((int)param_1[7] < iVar2 + 3) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 4);
  }
  *param_1 = 0x30101;
  *(undefined8 *)(param_1 + 1) = 0;
  **(undefined4 **)(param_1 + 4) = (undefined4)local_20;
  *(undefined4 *)(*(longlong *)(param_1 + 4) + 4) = local_20._4_4_;
  *(undefined4 *)(*(longlong *)(param_1 + 4) + 8) = (undefined4)local_18;
  return;
}



// FUNCTION 142420a60 ScaleLookupTableByLookupTable body=2015 status=ok
// SIG undefined ScaleLookupTableByLookupTable(void)

void ScaleLookupTableByLookupTable(char *param_1,char *param_2)

{
  longlong *plVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  float *pfVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  int iVar30;
  void *pvVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  char local_res8;
  int local_res20;
  int local_f4;
  longlong local_e8;
  void *local_c0;
  int local_b8;
  longlong local_a8;
  
  bVar8 = param_1[1];
  plVar1 = (longlong *)(param_1 + 0x10);
  local_res8 = *param_1;
  bVar9 = param_1[2];
  bVar10 = param_1[3];
  local_b8 = *(int *)(param_1 + 0x18);
  lVar21 = (longlong)local_b8;
  fVar5 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_1 + 8);
  pvVar31 = (void *)*plVar1;
  local_c0 = (void *)0x0;
  if (local_b8 != 0) {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_c0,local_b8,0);
    _guard_xfg_dispatch_icall_nop(local_c0,pvVar31,lVar21 << 2);
  }
  if (fVar5 == 0.0) {
    fVar33 = 0.0;
  }
  else {
    fVar33 = 1.0 / fVar5;
  }
  if (*(float *)(param_2 + 4) == 0.0) {
    fVar34 = 0.0;
  }
  else {
    fVar34 = 1.0 / *(float *)(param_2 + 4);
  }
  fVar35 = *(float *)(param_2 + 8);
  fVar36 = fVar35;
  if (fVar6 <= fVar35) {
    fVar36 = fVar6;
  }
  uVar16 = (uint)bVar9;
  fVar35 = (float)(int)((byte)param_2[1] - 1) * fVar34 + fVar35;
  fVar33 = (float)(int)(bVar8 - 1) * fVar33 + fVar6;
  if (fVar35 <= fVar33) {
    fVar35 = fVar33;
  }
  iVar20 = (int)(float)(int)(uVar16 - bVar10);
  iVar32 = (int)(float)(int)((uint)(byte)param_2[2] - (uint)(byte)param_2[3]);
  if (local_res8 == '\x01') {
    local_res8 = *param_2;
  }
  *param_1 = local_res8;
  iVar11 = iVar20 * 2;
  param_1[1] = -0x80;
  cVar12 = (char)iVar20;
  if (local_res8 == '\x01') {
    cVar12 = '\0';
    iVar11 = iVar20;
  }
  param_1[2] = (char)iVar11;
  param_1[3] = cVar12;
  fVar33 = (fVar35 - fVar36) * 0.007874016;
  if (fVar33 <= 0.0) {
    fVar34 = 0.0;
  }
  else {
    fVar34 = 1.0 / fVar33;
  }
  *(float *)(param_1 + 4) = fVar34;
  *(float *)(param_1 + 8) = fVar36;
  iVar17 = 0;
  iVar22 = iVar11 * 0x80;
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  if (*(int *)(param_1 + 0x1c) != iVar22) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar17 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x18) = iVar17 + iVar22;
  if (*(int *)(param_1 + 0x1c) < iVar17 + iVar22) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar17 * 4),0,(longlong)iVar22 << 2);
  uVar24 = bVar8 - 1;
  local_a8 = (longlong)iVar11 * 4;
  local_f4 = 0;
  local_res20 = 0;
  local_e8 = 8;
  do {
    fVar35 = (float)local_f4 * fVar33 + fVar36;
    fVar34 = (fVar35 - fVar6) * fVar5;
    if (fVar34 < 0.0) {
      fVar34 = 0.0;
    }
    fVar35 = (fVar35 - *(float *)(param_2 + 8)) * *(float *)(param_2 + 4);
    uVar13 = (uint)fVar34;
    uVar28 = uVar24;
    if (uVar13 <= uVar24) {
      uVar28 = uVar13;
    }
    iVar17 = uVar28 * uVar16;
    fVar34 = fVar34 - (float)(int)fVar34;
    uVar28 = uVar24;
    if (uVar13 + 1 <= uVar24) {
      uVar28 = uVar13 + 1;
    }
    pvVar31 = (void *)((longlong)local_c0 + (longlong)(int)(uVar28 * uVar16) * 4);
    if (fVar35 < 0.0) {
      fVar35 = 0.0;
    }
    uVar28 = (byte)param_2[1] - 1;
    uVar18 = (uint)fVar35;
    uVar13 = uVar28;
    if (uVar18 <= uVar28) {
      uVar13 = uVar18;
    }
    if (uVar18 + 1 <= uVar28) {
      uVar28 = uVar18 + 1;
    }
    iVar22 = 0;
    lVar25 = 0;
    fVar35 = fVar35 - (float)(int)fVar35;
    lVar21 = *(longlong *)(param_2 + 0x10) + (longlong)(int)(uVar13 * (byte)param_2[2]) * 4;
    lVar23 = *(longlong *)(param_2 + 0x10) + (longlong)(int)(uVar28 * (byte)param_2[2]) * 4;
    if (3 < iVar20) {
      pfVar26 = (float *)((longlong)pvVar31 + 4);
      lVar27 = (longlong)local_c0 + ((longlong)iVar17 * 4 - (longlong)pvVar31);
      iVar30 = 2;
      lVar25 = (ulonglong)((iVar20 - 4U >> 2) + 1) << 2;
      lVar29 = local_e8;
      iVar19 = iVar22;
      do {
        iVar22 = iVar19 + 4;
        lVar14 = (longlong)(iVar19 % iVar32);
        *(float *)(*plVar1 + -8 + lVar29) =
             ((*(float *)(lVar23 + lVar14 * 4) - *(float *)(lVar21 + lVar14 * 4)) * fVar35 +
             *(float *)(lVar21 + lVar14 * 4)) *
             ((pfVar26[-1] - *(float *)(lVar27 + -4 + (longlong)pfVar26)) * fVar34 +
             *(float *)(lVar27 + -4 + (longlong)pfVar26));
        lVar14 = (longlong)((iVar30 + -1) % iVar32);
        *(float *)(*plVar1 + -4 + lVar29) =
             ((*(float *)(lVar23 + lVar14 * 4) - *(float *)(lVar21 + lVar14 * 4)) * fVar35 +
             *(float *)(lVar21 + lVar14 * 4)) *
             ((*pfVar26 - *(float *)(lVar27 + (longlong)pfVar26)) * fVar34 +
             *(float *)(lVar27 + (longlong)pfVar26));
        lVar14 = (longlong)(iVar30 % iVar32);
        *(float *)(*plVar1 + lVar29) =
             ((*(float *)(lVar23 + lVar14 * 4) - *(float *)(lVar21 + lVar14 * 4)) * fVar35 +
             *(float *)(lVar21 + lVar14 * 4)) *
             ((pfVar26[1] - *(float *)(lVar27 + 4 + (longlong)pfVar26)) * fVar34 +
             *(float *)(lVar27 + 4 + (longlong)pfVar26));
        iVar19 = iVar30 + 1;
        pfVar2 = pfVar26 + 2;
        pfVar3 = (float *)(lVar27 + 8 + (longlong)pfVar26);
        iVar30 = iVar30 + 4;
        lVar14 = (longlong)(iVar19 % iVar32);
        pfVar4 = (float *)(lVar27 + 8 + (longlong)pfVar26);
        pfVar26 = pfVar26 + 4;
        *(float *)(*plVar1 + 4 + lVar29) =
             ((*(float *)(lVar23 + lVar14 * 4) - *(float *)(lVar21 + lVar14 * 4)) * fVar35 +
             *(float *)(lVar21 + lVar14 * 4)) * ((*pfVar2 - *pfVar3) * fVar34 + *pfVar4);
        lVar29 = lVar29 + 0x10;
        iVar19 = iVar22;
      } while (iVar22 < iVar20 + -3);
    }
    if (iVar22 < iVar20) {
      pfVar26 = (float *)((longlong)pvVar31 + lVar25 * 4);
      lVar25 = (longlong)(local_res20 + iVar22) << 2;
      lVar29 = (longlong)local_c0 + ((longlong)iVar17 * 4 - (longlong)pvVar31);
      do {
        fVar7 = *pfVar26;
        pfVar2 = (float *)(lVar29 + (longlong)pfVar26);
        iVar30 = iVar22 + 1;
        lVar27 = (longlong)(iVar22 % iVar32);
        pfVar3 = (float *)(lVar29 + (longlong)pfVar26);
        pfVar26 = pfVar26 + 1;
        *(float *)(lVar25 + *plVar1) =
             ((*(float *)(lVar23 + lVar27 * 4) - *(float *)(lVar21 + lVar27 * 4)) * fVar35 +
             *(float *)(lVar21 + lVar27 * 4)) * ((fVar7 - *pfVar2) * fVar34 + *pfVar3);
        lVar25 = lVar25 + 4;
        iVar22 = iVar30;
      } while (iVar30 < iVar20);
    }
    if (local_res8 != '\x01') {
      iVar22 = 0;
      lVar25 = (ulonglong)bVar10 * 4;
      lVar29 = 0;
      pvVar31 = (void *)((longlong)pvVar31 + lVar25);
      lVar25 = lVar25 + (longlong)iVar17 * 4;
      lVar21 = lVar21 + (ulonglong)(byte)param_2[3] * 4;
      lVar23 = lVar23 + (ulonglong)(byte)param_2[3] * 4;
      if (3 < iVar20) {
        lVar14 = (longlong)local_c0 + (lVar25 - (longlong)pvVar31);
        pfVar26 = (float *)((longlong)pvVar31 + 4);
        iVar17 = 2;
        lVar27 = local_e8 + (longlong)iVar20 * 4;
        lVar29 = (ulonglong)((iVar20 - 4U >> 2) + 1) << 2;
        iVar30 = iVar22;
        do {
          iVar22 = iVar30 + 4;
          lVar15 = (longlong)(iVar30 % iVar32);
          *(float *)(*plVar1 + -8 + lVar27) =
               ((*(float *)(lVar23 + lVar15 * 4) - *(float *)(lVar21 + lVar15 * 4)) * fVar35 +
               *(float *)(lVar21 + lVar15 * 4)) *
               ((pfVar26[-1] - *(float *)(lVar14 + -4 + (longlong)pfVar26)) * fVar34 +
               *(float *)(lVar14 + -4 + (longlong)pfVar26));
          lVar15 = (longlong)((iVar17 + -1) % iVar32);
          *(float *)(*plVar1 + -4 + lVar27) =
               ((*(float *)(lVar23 + lVar15 * 4) - *(float *)(lVar21 + lVar15 * 4)) * fVar35 +
               *(float *)(lVar21 + lVar15 * 4)) *
               ((*pfVar26 - *(float *)(lVar14 + (longlong)pfVar26)) * fVar34 +
               *(float *)(lVar14 + (longlong)pfVar26));
          lVar15 = (longlong)(iVar17 % iVar32);
          *(float *)(*plVar1 + lVar27) =
               ((*(float *)(lVar23 + lVar15 * 4) - *(float *)(lVar21 + lVar15 * 4)) * fVar35 +
               *(float *)(lVar21 + lVar15 * 4)) *
               ((pfVar26[1] - *(float *)(lVar14 + 4 + (longlong)pfVar26)) * fVar34 +
               *(float *)(lVar14 + 4 + (longlong)pfVar26));
          iVar30 = iVar17 + 1;
          pfVar2 = pfVar26 + 2;
          pfVar3 = (float *)(lVar14 + 8 + (longlong)pfVar26);
          iVar17 = iVar17 + 4;
          lVar15 = (longlong)(iVar30 % iVar32);
          pfVar4 = (float *)(lVar14 + 8 + (longlong)pfVar26);
          pfVar26 = pfVar26 + 4;
          *(float *)(*plVar1 + 4 + lVar27) =
               ((*(float *)(lVar23 + lVar15 * 4) - *(float *)(lVar21 + lVar15 * 4)) * fVar35 +
               *(float *)(lVar21 + lVar15 * 4)) * ((*pfVar2 - *pfVar3) * fVar34 + *pfVar4);
          lVar27 = lVar27 + 0x10;
          iVar30 = iVar22;
        } while (iVar22 < iVar20 + -3);
      }
      if (iVar22 < iVar20) {
        pfVar26 = (float *)((longlong)pvVar31 + lVar29 * 4);
        lVar29 = (longlong)(local_res20 + iVar22 + iVar20) << 2;
        lVar25 = (longlong)local_c0 + (lVar25 - (longlong)pvVar31);
        do {
          fVar7 = *pfVar26;
          pfVar2 = (float *)((longlong)pfVar26 + lVar25);
          iVar17 = iVar22 + 1;
          lVar27 = (longlong)(iVar22 % iVar32);
          pfVar3 = (float *)((longlong)pfVar26 + lVar25);
          pfVar26 = pfVar26 + 1;
          *(float *)(lVar29 + *plVar1) =
               ((*(float *)(lVar23 + lVar27 * 4) - *(float *)(lVar21 + lVar27 * 4)) * fVar35 +
               *(float *)(lVar21 + lVar27 * 4)) * ((fVar7 - *pfVar2) * fVar34 + *pfVar3);
          lVar29 = lVar29 + 4;
          iVar22 = iVar17;
        } while (iVar17 < iVar20);
      }
    }
    local_e8 = local_e8 + local_a8;
    local_f4 = local_f4 + 1;
    local_res20 = local_res20 + iVar11;
  } while (local_f4 < 0x80);
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}



// FUNCTION 142421240 FUN_142421240 body=162 status=ok
// SIG undefined FUN_142421240(void)

void FUN_142421240(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(int *)(param_2 + 0x40) < 0x1e3) && (lVar1 = *(longlong *)(param_1 + 0x458), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0x204) = 0x4380000043000000;
    *(undefined4 *)(lVar1 + 0x20c) = 0x43800000;
  }
  AActor::Serialize(param_1);
  if ((*(int *)(param_2 + 0x40) < 0x1e3) && (lVar1 = *(longlong *)(param_1 + 0x458), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0x70c) = 0x3f8000003f800000;
    *(undefined4 *)(lVar1 + 0x714) = 0x3f800000;
  }
  return;
}



// FUNCTION 1424212f0 FUN_1424212f0 body=234 status=ok
// SIG undefined FUN_1424212f0(void)

void FUN_1424212f0(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char local_res10 [24];
  longlong local_18 [2];
  
  FUN_141763960();
  *(byte *)((longlong)param_2 + 0x29) = *(byte *)((longlong)param_2 + 0x29) | 8;
  local_res10[0] = param_2[0xe] != 0;
  (**(code **)(*param_2 + 8))(param_2,local_res10);
  if ((local_res10[0] == '\0') && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    puVar1 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_18,0);
    puVar2 = &DAT_143f3eda8;
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x20d,
               L"This platform requires cooked packages, and audio data was not cooked into %s.",
               puVar3);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    puVar1 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_18,0);
    if (*(int *)(puVar1 + 1) != 0) {
      puVar2 = (undefined2 *)*puVar1;
    }
    FDebug::AssertFailed
              (&DAT_14508a0c3,"Unknown",0x20d,
               L"This platform requires cooked packages, and audio data was not cooked into %s.",
               puVar2);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1424213e0 FUN_1424213e0 body=1299 status=ok
// SIG undefined FUN_1424213e0(void)

void FUN_1424213e0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  byte local_res10 [8];
  int local_res18 [2];
  int local_res20;
  uint local_158;
  uint uStack_154;
  int iStack_144;
  uint uStack_140;
  uint local_130;
  uint uStack_12c;
  int iStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_100;
  uint *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  longlong *local_d8;
  undefined2 local_d0;
  longlong *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined2 local_90;
  int local_88;
  undefined8 local_80;
  longlong local_78 [2];
  longlong *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  plVar9 = (longlong *)*param_2;
  uVar13 = 0;
  local_f8 = (uint *)(plVar9 + 2);
  local_res18[0] = 0;
  iVar11 = (int)plVar9[5];
  local_130 = 0;
  uStack_12c = 1;
  iStack_11c = 0;
  uStack_118 = 0;
  if (iVar11 != 0) {
    puVar15 = (uint *)plVar9[4];
    if ((uint *)plVar9[4] == (uint *)0x0) {
      puVar15 = local_f8;
    }
    uVar14 = *puVar15;
    local_130 = uVar13;
    uStack_118 = uVar13;
    while (uVar14 == 0) {
      lVar12 = (longlong)(int)local_130;
      uStack_118 = uStack_118 + 0x20;
      uVar14 = local_130 + 1;
      bVar3 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_130;
      local_130 = uVar14;
      if (bVar3) goto LAB_1424214c6;
      uVar14 = puVar15[lVar12 + 1];
    }
    uStack_12c = -uVar14 & uVar14;
    local_res20 = 0x1f;
    if (uStack_12c != 0) {
      for (; uStack_12c >> local_res20 == 0; local_res20 = local_res20 + -1) {
      }
    }
    if (uStack_12c == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - local_res20;
    }
    iStack_11c = (uStack_118 - iVar7) + 0x1f;
    if (iVar11 < iStack_11c) {
LAB_1424214c6:
      iStack_11c = iVar11;
    }
  }
  uStack_f0 = CONCAT44(iStack_11c,0xffffffff);
  auVar5._8_4_ = uStack_118;
  auVar5._0_8_ = uStack_f0;
  auVar5._12_4_ = uStack_114;
  uStack_40 = SUB84(plVar9,0);
  uStack_3c = (undefined4)((ulonglong)plVar9 >> 0x20);
  uStack_100 = CONCAT44(uStack_12c,local_130);
  local_d0 = 0;
  uStack_48 = auVar5._8_8_;
  local_e8._8_4_ = uStack_40;
  local_e8._0_8_ = uStack_48;
  local_e8._12_4_ = uStack_3c;
  iVar11 = iStack_11c;
  local_d8 = plVar9;
  if (iStack_11c < (int)plVar9[5]) {
    do {
      lVar12 = (longlong)iVar11 * 0x40 + *plVar9;
      cVar6 = FUN_14044aea0(lVar12 + 8,0);
      if (cVar6 == '\0') {
        plVar8 = (longlong *)FWeakObjectPtr::Get(lVar12 + 8);
        cVar6 = (**(code **)(*plVar8 + 0x1b8))(plVar8);
        if (cVar6 != '\0') {
          local_res18[0] = local_res18[0] + 1;
        }
      }
      uStack_f0 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0 & ~uStack_100._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
      iVar11 = uStack_f0._4_4_;
    } while (uStack_f0._4_4_ < (int)local_f8[6]);
    if (((char)local_d0 != '\0') && (local_d0._1_1_ != '\0')) {
      TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_d8,(int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34),1);
    }
  }
  plVar9 = (longlong *)param_3[1];
  if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
    (**(code **)(*param_3 + 0x50))(param_3,local_res18,4);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_3,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(int *)*plVar9;
    *plVar9 = *plVar9 + 4;
  }
  local_c8 = (longlong *)*param_2;
  iVar11 = (int)local_c8[5];
  local_b8 = (uint *)(local_c8 + 2);
  local_158 = 0;
  uStack_154 = 1;
  iStack_144 = 0;
  uStack_140 = 0;
  if (iVar11 != 0) {
    puVar15 = (uint *)local_c8[4];
    if ((uint *)local_c8[4] == (uint *)0x0) {
      puVar15 = local_b8;
    }
    uVar14 = *puVar15;
    uStack_140 = uVar13;
    local_158 = uVar13;
    while (uVar14 == 0) {
      lVar12 = (longlong)(int)local_158;
      uStack_140 = uStack_140 + 0x20;
      uVar13 = local_158 + 1;
      bVar3 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_158;
      local_158 = uVar13;
      if (bVar3) goto LAB_1424216b1;
      uVar14 = puVar15[lVar12 + 1];
    }
    uStack_154 = -uVar14 & uVar14;
    local_88 = 0x1f;
    if (uStack_154 != 0) {
      for (; uStack_154 >> local_88 == 0; local_88 = local_88 + -1) {
      }
    }
    if (uStack_154 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - local_88;
    }
    iStack_144 = (uStack_140 - iVar7) + 0x1f;
    if (iVar11 < iStack_144) {
LAB_1424216b1:
      iStack_144 = iVar11;
    }
  }
  uStack_b0 = CONCAT44(iStack_144,0xffffffff);
  auVar4._8_4_ = uStack_140;
  auVar4._0_8_ = uStack_b0;
  auVar4._12_4_ = iStack_11c;
  uStack_40 = SUB84(local_c8,0);
  uStack_3c = (undefined4)((ulonglong)local_c8 >> 0x20);
  uStack_48 = auVar4._8_8_;
  uStack_60 = local_158;
  uStack_5c = uStack_154;
  local_90 = 0;
  uStack_c0 = local_158;
  uStack_bc = uStack_154;
  local_a8._8_4_ = uStack_40;
  local_a8._0_8_ = uStack_48;
  local_a8._12_4_ = uStack_3c;
  local_98 = local_c8;
  local_68 = local_c8;
  puStack_58 = local_b8;
  uStack_50 = uStack_b0;
  if (iStack_144 < (int)local_c8[5]) {
    do {
      lVar12 = (longlong)iStack_144 * 0x40 + *local_c8;
      cVar6 = FUN_14044aea0(lVar12 + 8,0);
      if (cVar6 == '\0') {
        plVar9 = (longlong *)FWeakObjectPtr::Get(lVar12 + 8);
        cVar6 = (**(code **)(*plVar9 + 0x1b8))(plVar9);
        if (cVar6 != '\0') {
          lVar10 = FWeakObjectPtr::Get(lVar12 + 8);
          local_80 = *(undefined8 *)(lVar10 + 0x18);
          FName::ToString(&local_80,local_78);
          (**(code **)(*DAT_146b17150 + 0x400))(DAT_146b17150,param_1,local_78,0);
          (**(code **)(*param_3 + 0x68))(param_3,lVar12);
          (**(code **)(*param_3 + 0x68))(param_3,lVar12 + 0x10);
          FUN_14158ce90(param_3,local_78);
          puVar2 = *(undefined4 **)param_3[1];
          if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar2 + 1) {
            (**(code **)(*param_3 + 0x50))(param_3,lVar12 + 0x20,4);
            if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_3,lVar12 + 0x20,4);
            }
          }
          else {
            *(undefined4 *)(lVar12 + 0x20) = *puVar2;
            *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
          }
          local_res10[0] = *(byte *)(lVar12 + 0x30) & 2 | *(byte *)(lVar12 + 0x30) & 1;
          plVar9 = (longlong *)param_3[1];
          if ((byte *)plVar9[1] < (byte *)*plVar9 + 1) {
            (**(code **)(*param_3 + 0x50))(param_3,local_res10,1);
          }
          else {
            local_res10[0] = *(byte *)*plVar9;
            *plVar9 = *plVar9 + 1;
          }
          if (local_78[0] != 0) {
            FMemory::Free();
          }
        }
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_bc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
      iStack_144 = uStack_b0._4_4_;
    } while (uStack_b0._4_4_ < (int)local_b8[6]);
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar12 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 142421900 FUN_142421900 body=17 status=ok
// SIG undefined FUN_142421900(void)

void FUN_142421900(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x458) == 0) {
    return;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x458) + 0x6f0) = param_2;
  FUN_1423424e0();
  return;
}



// FUNCTION 142421920 SetKeyIn body=273 status=ok
// SIG undefined SetKeyIn(void)

ulonglong UDistributionFloatConstantCurve::SetKeyIn(longlong param_1,int param_2,undefined4 param_3)

{
  void *_Dst;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 local_res10 [2];
  
  uVar7 = (ulonglong)param_2;
  if (-1 < param_2) {
    iVar6 = *(int *)(param_1 + 0x18);
    if (param_2 < iVar6) {
      lVar4 = *(longlong *)(param_1 + 0x10);
      local_res10[0] = *(undefined4 *)(lVar4 + 4 + uVar7 * 0x14);
      _Dst = (void *)(lVar4 + uVar7 * 0x14);
      uVar3 = *(undefined1 *)((longlong)_Dst + 0x10);
      uVar1 = *(undefined4 *)((longlong)_Dst + 8);
      uVar2 = *(undefined4 *)((longlong)_Dst + 0xc);
      iVar5 = (iVar6 - param_2) + -1;
      if (iVar5 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  (_Dst,(void *)(lVar4 + (longlong)(param_2 + 1) * 0x14),(longlong)iVar5 * 0x14);
        iVar6 = *(int *)(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x18) = iVar6 + -1;
      TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
      iVar6 = FInterpCurve<float>::AddPoint(param_1 + 0x10,param_3,local_res10);
      uVar7 = (ulonglong)iVar6;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x10 + uVar7 * 0x14) = uVar3;
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8 + uVar7 * 0x14) = uVar1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar7 * 0x14) = uVar2;
    }
  }
  FInterpCurve<float>::AutoSetTangents(param_1 + 0x10,0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return uVar7 & 0xffffffff;
}



// FUNCTION 142421a40 SetKeyIn body=323 status=ok
// SIG undefined SetKeyIn(void)

ulonglong UDistributionFloatUniformCurve::SetKeyIn(longlong param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 local_res8;
  
  uVar10 = (ulonglong)param_2;
  if ((-1 < param_2) && (iVar8 = *(int *)(param_1 + 0x18), param_2 < iVar8)) {
    _Dst = (void *)(uVar10 * 0x20 + *(longlong *)(param_1 + 0x10));
    local_res8 = *(undefined8 *)((longlong)_Dst + 4);
    uVar5 = *(undefined1 *)((longlong)_Dst + 0x1c);
    uVar1 = *(undefined4 *)((longlong)_Dst + 0xc);
    uVar2 = *(undefined4 *)((longlong)_Dst + 0x10);
    uVar3 = *(undefined4 *)((longlong)_Dst + 0x14);
    uVar4 = *(undefined4 *)((longlong)_Dst + 0x18);
    iVar7 = (iVar8 - param_2) + -1;
    if (iVar7 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                (_Dst,(void *)((longlong)(param_2 + 1) * 0x20 + *(longlong *)(param_1 + 0x10)),
                 (longlong)iVar7 << 5);
      iVar8 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x18) = iVar8 + -1;
    TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
    iVar8 = FInterpCurve<FVector2D>::AddPoint(param_1 + 0x10,param_3,&local_res8);
    uVar10 = (ulonglong)iVar8;
    lVar9 = uVar10 * 0x20;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x1c + lVar9) = uVar5;
    lVar6 = *(longlong *)(param_1 + 0x10);
    *(undefined4 *)(lVar6 + 0xc + lVar9) = uVar1;
    *(undefined4 *)(lVar6 + 0x10 + lVar9) = uVar2;
    lVar6 = *(longlong *)(param_1 + 0x10);
    *(undefined4 *)(lVar6 + 0x14 + lVar9) = uVar3;
    *(undefined4 *)(lVar6 + 0x18 + lVar9) = uVar4;
  }
  FInterpCurve<FVector2D>::AutoSetTangents(param_1 + 0x10,0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return uVar10 & 0xffffffff;
}



// FUNCTION 142421b90 SetKeyIn body=303 status=ok
// SIG undefined SetKeyIn(void)

ulonglong UDistributionVectorConstantCurve::SetKeyIn
                    (longlong param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 local_58;
  undefined4 local_50;
  
  uVar10 = (ulonglong)param_2;
  if (-1 < param_2) {
    iVar8 = *(int *)(param_1 + 0x18);
    if (param_2 < iVar8) {
      _Dst = (void *)(uVar10 * 0x2c + *(longlong *)(param_1 + 0x10));
      local_58 = *(undefined8 *)((longlong)_Dst + 4);
      uVar3 = *(undefined1 *)((longlong)_Dst + 0x28);
      uVar1 = *(undefined8 *)((longlong)_Dst + 0x10);
      uVar4 = *(undefined4 *)((longlong)_Dst + 0x18);
      uVar2 = *(undefined8 *)((longlong)_Dst + 0x1c);
      uVar5 = *(undefined4 *)((longlong)_Dst + 0x24);
      local_50 = *(undefined4 *)((longlong)_Dst + 0xc);
      iVar7 = (iVar8 - param_2) + -1;
      if (iVar7 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  (_Dst,(void *)((longlong)(param_2 + 1) * 0x2c + *(longlong *)(param_1 + 0x10)),
                   (longlong)iVar7 * 0x2c);
        iVar8 = *(int *)(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x18) = iVar8 + -1;
      TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
      iVar8 = FInterpCurve<FVector>::AddPoint(param_1 + 0x10,param_3,&local_58);
      uVar10 = (ulonglong)iVar8;
      lVar9 = uVar10 * 0x2c;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x28 + lVar9) = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(lVar6 + 0x10 + lVar9) = uVar1;
      *(undefined4 *)(lVar6 + 0x18 + lVar9) = uVar4;
      lVar6 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(lVar6 + 0x1c + lVar9) = uVar2;
      *(undefined4 *)(lVar6 + 0x24 + lVar9) = uVar5;
    }
  }
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x10,0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return uVar10 & 0xffffffff;
}



// FUNCTION 142421cc0 SetKeyIn body=343 status=ok
// SIG undefined SetKeyIn(void)

ulonglong UDistributionVectorUniformCurve::SetKeyIn(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  void *_Dst;
  ulonglong uVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  uVar12 = (ulonglong)param_2;
  if (-1 < param_2) {
    iVar11 = *(int *)(param_1 + 0x18);
    if (param_2 < iVar11) {
      _Dst = (void *)(uVar12 * 0x50 + *(longlong *)(param_1 + 0x10));
      local_78 = *(undefined4 *)((longlong)_Dst + 4);
      uStack_74 = *(undefined4 *)((longlong)_Dst + 8);
      uStack_70 = *(undefined4 *)((longlong)_Dst + 0xc);
      uStack_6c = *(undefined4 *)((longlong)_Dst + 0x10);
      uVar4 = *(undefined1 *)((longlong)_Dst + 0x4c);
      local_68 = *(undefined8 *)((longlong)_Dst + 0x14);
      uVar6 = *(undefined8 *)((longlong)_Dst + 0x1c);
      uVar7 = *(undefined8 *)((longlong)_Dst + 0x24);
      uVar2 = *(undefined8 *)((longlong)_Dst + 0x2c);
      uVar8 = *(undefined8 *)((longlong)_Dst + 0x34);
      uVar9 = *(undefined8 *)((longlong)_Dst + 0x3c);
      uVar3 = *(undefined8 *)((longlong)_Dst + 0x44);
      iVar10 = (iVar11 - param_2) + -1;
      if (iVar10 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  (_Dst,(void *)((longlong)(param_2 + 1) * 0x50 + *(longlong *)(param_1 + 0x10)),
                   (longlong)iVar10 * 0x50);
        iVar11 = *(int *)(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x18) = iVar11 + -1;
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
      iVar11 = FInterpCurve<FTwoVectors>::AddPoint(param_1 + 0x10,param_3,&local_78);
      uVar12 = (ulonglong)iVar11;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x4c + uVar12 * 0x50) = uVar4;
      lVar5 = *(longlong *)(param_1 + 0x10);
      puVar1 = (undefined8 *)(lVar5 + 0x1c + uVar12 * 0x50);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined8 *)(lVar5 + 0x2c + uVar12 * 0x50) = uVar2;
      lVar5 = *(longlong *)(param_1 + 0x10);
      puVar1 = (undefined8 *)(lVar5 + 0x34 + uVar12 * 0x50);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      *(undefined8 *)(lVar5 + 0x44 + uVar12 * 0x50) = uVar3;
    }
  }
  FInterpCurve<FTwoVectors>::AutoSetTangents(param_1 + 0x10,0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return uVar12 & 0xffffffff;
}



// FUNCTION 142421e20 SetKeyInterpMode body=49 status=ok
// SIG undefined SetKeyInterpMode(void)

void UDistributionFloatConstantCurve::SetKeyInterpMode
               (longlong param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x10 + (longlong)param_2 * 0x14) = param_3;
  FInterpCurve<float>::AutoSetTangents((longlong *)(param_1 + 0x10),0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 142421e60 SetKeyInterpMode body=50 status=ok
// SIG undefined SetKeyInterpMode(void)

void UDistributionFloatUniformCurve::SetKeyInterpMode
               (longlong param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)((longlong)param_2 * 0x20 + 0x1c + *(longlong *)(param_1 + 0x10)) = param_3;
  FInterpCurve<FVector2D>::AutoSetTangents(param_1 + 0x10,0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 142421ea0 SetKeyInterpMode body=50 status=ok
// SIG undefined SetKeyInterpMode(void)

void UDistributionVectorConstantCurve::SetKeyInterpMode
               (longlong param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)((longlong)param_2 * 0x2c + 0x28 + *(longlong *)(param_1 + 0x10)) = param_3;
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x10,0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 142421ee0 SetKeyInterpMode body=52 status=ok
// SIG undefined SetKeyInterpMode(void)

void UDistributionVectorUniformCurve::SetKeyInterpMode
               (longlong param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x4c + (longlong)param_2 * 0x50) = param_3;
  FInterpCurve<FTwoVectors>::AutoSetTangents((longlong *)(param_1 + 0x10),0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 142421f30 SetKeyOut body=50 status=ok
// SIG undefined SetKeyOut(void)

void UDistributionFloatConstantCurve::SetKeyOut
               (longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4 + (longlong)param_3 * 0x14) = param_4;
  FInterpCurve<float>::AutoSetTangents((longlong *)(param_1 + 0x10),0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 142421fa0 SetKeyOut body=60 status=ok
// SIG undefined SetKeyOut(void)

void UDistributionFloatUniformCurve::SetKeyOut
               (longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 0x20 + *(longlong *)(param_1 + 0x10);
  if (param_2 == 0) {
    *(undefined4 *)(lVar1 + 4) = param_4;
  }
  else {
    *(undefined4 *)(lVar1 + 8) = param_4;
  }
  FInterpCurve<FVector2D>::AutoSetTangents((longlong *)(param_1 + 0x10),0,1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 142422010 SetKeyOut body=78 status=ok
// SIG undefined SetKeyOut(void)

void UDistributionVectorConstantCurve::SetKeyOut
               (longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_3 * 0x2c;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (param_2 == 0) {
    *(undefined4 *)(lVar2 + 4 + lVar1) = param_4;
  }
  else if (param_2 == 1) {
    *(undefined4 *)(lVar2 + 8 + lVar1) = param_4;
  }
  else {
    *(undefined4 *)(lVar2 + 0xc + lVar1) = param_4;
  }
  FInterpCurve<FVector>::AutoSetTangents
            ((longlong *)(param_1 + 0x10),0,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 1424220f0 SetKeyOut body=183 status=ok
// SIG undefined SetKeyOut(void)

void UDistributionVectorUniformCurve::SetKeyOut
               (longlong param_1,int param_2,int param_3,float param_4)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = (longlong)param_3 * 0x50 + *(longlong *)(param_1 + 0x10);
  if (param_2 == 0) {
    fVar2 = *(float *)(lVar1 + 0x10);
    if (*(float *)(lVar1 + 0x10) <= param_4) {
      fVar2 = param_4;
    }
    *(float *)(lVar1 + 4) = fVar2;
  }
  else if (param_2 == 1) {
    fVar2 = *(float *)(lVar1 + 4);
    if (param_4 <= *(float *)(lVar1 + 4)) {
      fVar2 = param_4;
    }
    *(float *)(lVar1 + 0x10) = fVar2;
  }
  else if (param_2 == 2) {
    fVar2 = *(float *)(lVar1 + 0x14);
    if (*(float *)(lVar1 + 0x14) <= param_4) {
      fVar2 = param_4;
    }
    *(float *)(lVar1 + 8) = fVar2;
  }
  else if (param_2 == 3) {
    fVar2 = *(float *)(lVar1 + 8);
    if (param_4 <= *(float *)(lVar1 + 8)) {
      fVar2 = param_4;
    }
    *(float *)(lVar1 + 0x14) = fVar2;
  }
  else if (param_2 == 4) {
    fVar2 = *(float *)(lVar1 + 0x18);
    if (*(float *)(lVar1 + 0x18) <= param_4) {
      fVar2 = param_4;
    }
    *(float *)(lVar1 + 0xc) = fVar2;
  }
  else if (param_2 == 5) {
    fVar2 = *(float *)(lVar1 + 0xc);
    if (param_4 <= *(float *)(lVar1 + 0xc)) {
      fVar2 = param_4;
    }
    *(float *)(lVar1 + 0x18) = fVar2;
  }
  FInterpCurve<FTwoVectors>::AutoSetTangents
            ((longlong *)(param_1 + 0x10),0,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 1424221b0 FUN_1424221b0 body=745 status=ok
// SIG undefined FUN_1424221b0(void)

void FUN_1424221b0(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 local_res10;
  void *local_38;
  int local_30;
  int local_2c;
  void *local_28;
  int local_20;
  
  if (*(char *)(DAT_146af2458 + 0xa8) == '\0') {
    return;
  }
  UDeviceProfileManager::GetActiveProfileName(&local_28);
  if (param_1 < 1) {
LAB_1424223fb:
    lVar4 = UDeviceProfileManager::FindProfile(DAT_146af2458,&local_28,1);
    pvVar5 = local_28;
  }
  else {
    if (param_1 < 3) {
      local_30 = local_20;
      local_38 = (void *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_38,(7 - (uint)(local_20 != 0)) + local_20,0);
      pvVar6 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,local_28,(longlong)local_20 * 2);
      iVar2 = local_30;
      lVar4 = (longlong)local_30;
      local_30 = (7 - (uint)(local_30 != 0)) + local_30;
      if (local_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar2);
        pvVar6 = local_38;
      }
      puVar1 = (undefined8 *)((longlong)pvVar6 + (lVar4 - (ulonglong)(iVar2 != 0)) * 2);
      *puVar1 = 0x6c007000730040;
      *(undefined4 *)(puVar1 + 1) = 0x740069;
      *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
      pvVar5 = local_28;
    }
    else if (param_1 < 7) {
      local_30 = local_20;
      local_38 = (void *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_38,(9 - (uint)(local_20 != 0)) + local_20,0);
      pvVar6 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,local_28,(longlong)local_20 * 2);
      iVar2 = local_30;
      lVar4 = (longlong)local_30;
      local_30 = (9 - (uint)(local_30 != 0)) + local_30;
      if (local_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar2);
        pvVar6 = local_38;
      }
      lVar4 = lVar4 - (ulonglong)(iVar2 != 0);
      builtin_wcsncpy((wchar_t *)((longlong)pvVar6 + lVar4 * 2),L"@split3p",8);
      *(undefined2 *)((longlong)pvVar6 + lVar4 * 2 + 0x10) = 0;
      pvVar5 = local_28;
    }
    else {
      if (param_1 != 7) goto LAB_1424223fb;
      local_30 = local_20;
      local_38 = (void *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_38,(9 - (uint)(local_20 != 0)) + local_20,0);
      pvVar6 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,local_28,(longlong)local_20 * 2);
      iVar2 = local_30;
      lVar4 = (longlong)local_30;
      local_30 = (9 - (uint)(local_30 != 0)) + local_30;
      if (local_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar2);
        pvVar6 = local_38;
      }
      lVar4 = lVar4 - (ulonglong)(iVar2 != 0);
      builtin_wcsncpy((wchar_t *)((longlong)pvVar6 + lVar4 * 2),L"@split4p",8);
      *(undefined2 *)((longlong)pvVar6 + lVar4 * 2 + 0x10) = 0;
      pvVar5 = local_28;
    }
    local_28 = pvVar6;
    local_20 = local_30;
    lVar4 = UDeviceProfileManager::FindProfile(DAT_146af2458,&local_28,0);
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((lVar4 != 0) && (lVar4 != *(longlong *)(DAT_146af2458 + 0x50))) {
    *(longlong *)(DAT_146af2458 + 0x50) = lVar4;
    local_res10 = *(undefined8 *)(lVar4 + 0x18);
    FName::ToString(&local_res10,&local_28);
    uVar3 = FUN_14168db40();
    FCsvProfiler::SetDeviceProfileName(uVar3,&local_28);
    FUN_142414670(0);
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    (**(code **)(*DAT_1468b1f88 + 0x38))();
  }
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  return;
}



// FUNCTION 1424226d0 FUN_1424226d0 body=497 status=ok
// SIG undefined FUN_1424226d0(void)

void FUN_1424226d0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  undefined1 *local_18;
  undefined4 uStack_10;
  
  if ((*(byte *)(param_1 + 0x4e0) & 1) != 0) {
    FUN_1424156f0();
    local_18 = &LAB_142406d2c;
    uStack_10 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res8,"DefaultPawn_MoveForward",1);
    FUN_1424002d0(param_2,*puVar1,param_1,&local_18);
    local_18 = &LAB_142406d38;
    uStack_10 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res8,"DefaultPawn_MoveRight",1);
    FUN_1424002d0(param_2,*puVar1,param_1,&local_18);
    local_18 = &LAB_142406d44;
    uStack_10 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res8,"DefaultPawn_MoveUp",1);
    FUN_1424002d0(param_2,*puVar1,param_1,&local_18);
    local_18 = &LAB_142406d74;
    uStack_10 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res8,"DefaultPawn_Turn",1);
    FUN_1424002d0(param_2,*puVar1,param_1,&local_18);
    local_18 = &LAB_142406d50;
    uStack_10 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res8,"DefaultPawn_TurnRate",1);
    FUN_1424002d0(param_2,*puVar1,param_1,&local_18);
    local_18 = &LAB_142406d68;
    uStack_10 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res8,"DefaultPawn_LookUp",1);
    FUN_1424002d0(param_2,*puVar1,param_1,&local_18);
    local_18 = &LAB_142406d5c;
    uStack_10 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res8,"DefaultPawn_LookUpRate",1);
    FUN_1424002d0(param_2,*puVar1,param_1,&local_18);
  }
  return;
}



// FUNCTION 1424228f0 FUN_1424228f0 body=122 status=ok
// SIG undefined FUN_1424228f0(void)

undefined8 FUN_1424228f0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  lVar1 = DAT_146af2718;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar4 = 4;
      goto LAB_142422938;
    }
  }
  lVar4 = 0;
LAB_142422938:
  if ((*(int *)(lVar4 + lVar1) != 0) &&
     ((*(char *)(param_1 + 0x89c) != '\0' || (*(char *)(param_1 + 0x899) != '\0')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1424229c0 FUN_1424229c0 body=114 status=ok
// SIG undefined FUN_1424229c0(void)

undefined8 FUN_1424229c0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (((*(char *)(param_1 + 0x89c) != '\0') || (*(char *)(param_1 + 0x89a) != '\0')) &&
     (param_2 != 0)) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = UAbilityTask::IsWaitingOnRemotePlayerdata(param_2);
      if (cVar2 != '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 142422a40 FUN_142422a40 body=117 status=ok
// SIG undefined FUN_142422a40(void)

bool FUN_142422a40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  lVar1 = DAT_146af2640;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar4 = 4;
      goto LAB_142422a88;
    }
  }
  lVar4 = 0;
LAB_142422a88:
  return (double)*(float *)(lVar4 + lVar1) <
         (double)*(float *)(param_1 + 0x548) - *(double *)(param_1 + 0x748);
}



// FUNCTION 142422ac0 FUN_142422ac0 body=109 status=ok
// SIG undefined FUN_142422ac0(void)

undefined1 FUN_142422ac0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  lVar1 = DAT_146af25e0;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar4 = 4;
      goto LAB_142422b08;
    }
  }
  lVar4 = 0;
LAB_142422b08:
  if (*(int *)(lVar4 + lVar1) != 0) {
    return *(undefined1 *)(param_1 + 0x899);
  }
  return 0;
}



// FUNCTION 142422b30 FUN_142422b30 body=146 status=ok
// SIG undefined FUN_142422b30(void)

undefined8 FUN_142422b30(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  if (DAT_146b17150 == (longlong *)0x0) {
    return 0;
  }
  cVar2 = (**(code **)(*DAT_146b17150 + 0x4c0))();
  lVar1 = DAT_146af2688;
  if (cVar2 != '\0') {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar4 = 4;
    }
    else {
      lVar4 = 0;
    }
    if (((*(int *)(lVar4 + lVar1) != 0) && (*(longlong *)(param_1 + 0xd0) != 0)) &&
       (cVar2 = FUN_1428cfb20(), cVar2 != '\0')) {
      return 1;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 142422bd0 Shutdown body=116 status=ok
// SIG undefined Shutdown(void)

void FDistanceFieldAsyncQueue::Shutdown(longlong param_1)

{
  bool bVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  bVar1 = false;
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x28) != '\0') {
    do {
      if (!bVar1) {
        bVar1 = true;
      }
      FUN_1416b1760(0x3c23d70a);
    } while (*(char *)(*(longlong *)(param_1 + 0x10) + 0x28) != '\0');
  }
  return;
}



// FUNCTION 142422c50 FUN_142422c50 body=1015 status=ok
// SIG undefined FUN_142422c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142422c50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [44];
  uint local_9c;
  undefined4 local_98 [2];
  undefined8 local_90;
  longlong local_88;
  char local_74;
  longlong local_68;
  longlong local_60;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  cVar3 = FURL::HasOption(param_3,L"SkipSpawnSpectatorController");
  if (cVar3 != '\0') {
    return;
  }
  lVar7 = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x148);
  }
  plVar9 = (longlong *)0x0;
  if (lVar7 != 0) {
    plVar9 = *(longlong **)(lVar7 + 0x458);
  }
  if (plVar9 != (longlong *)0x0) {
    plVar6 = (longlong *)UFadeInOutViewportClient::GetPrivateStaticClass();
    plVar13 = plVar9;
    do {
      if (plVar13 == plVar6) goto LAB_142422d15;
      plVar13 = (longlong *)plVar13[6];
    } while (plVar13 != (longlong *)0x0);
  }
  lVar7 = FURL::GetOption(param_3,L"game=",0);
  if (lVar7 != 0) {
    uVar8 = UFadeInOutViewportClient::GetPrivateStaticClass();
    local_120 = 0;
    local_128 = (undefined1 *)((ulonglong)local_128 & 0xffffffff00000000);
    plVar9 = (longlong *)FUN_141799830(uVar8,0,lVar7,0);
  }
LAB_142422d15:
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  lVar7 = plVar9[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar7 = plVar9[0x1f];
    if (lVar7 == 0) {
      return;
    }
  }
  lVar7 = *(longlong *)(lVar7 + 0x4a0);
  if (lVar7 == 0) {
    return;
  }
  lVar10 = FUN_1429e18b0();
  lVar11 = lVar7;
  while (lVar11 != lVar10) {
    lVar11 = *(longlong *)(lVar11 + 0x30);
    if (lVar11 == 0) {
      return;
    }
  }
  FActorSpawnParameters::FActorSpawnParameters(local_c8);
  local_128 = local_c8;
  local_9c = local_9c | 0x40;
  lVar7 = UWorld::SpawnActor(*(undefined8 *)(param_1 + 0xd0),lVar7,0,0);
  *(longlong *)(param_1 + 0x560) = lVar7;
  if (lVar7 == 0) {
    return;
  }
  *(uint *)(lVar7 + 0x640) = *(uint *)(lVar7 + 0x640) & 0xfffffff7;
  FUN_14223eab0(*(undefined8 *)(param_1 + 0x560),*(undefined8 *)(param_1 + 0x120));
  if (((*(longlong *)(*(longlong *)(param_1 + 0x560) + 0x460) == 0) &&
      (*(longlong *)(param_1 + 0xd0) != 0)) && (cVar3 = FUN_1428cfb20(), cVar3 != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0x560) + 0x798))();
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x560) + 0x460);
  if (lVar7 != 0) {
    puVar1 = (uint *)(lVar7 + 0x484);
    *puVar1 = *puVar1 | 2;
  }
  uVar8 = *(undefined8 *)(param_1 + 0xd0);
  local_108 = FUN_1428dfc70();
  local_98[0] = 5;
  local_40 = '\0';
  local_118 = uVar8;
  FUN_14044bc80(&local_90,&local_118,&local_108);
  FUN_14045a130(local_98);
  do {
    if (local_74 != '\0') {
LAB_142422fbf:
      if (local_40 != '\0') {
        local_40 = '\0';
        UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
        if (local_60 != 0) {
          FMemory::Free();
        }
        if (local_88 != 0) {
          FMemory::Free();
        }
      }
      FUN_14223ef90(*(undefined8 *)(param_1 + 0x560),1);
      FUN_14223d640(*(undefined8 *)(param_1 + 0x560),1);
      (**(code **)(**(longlong **)(param_1 + 0x560) + 0xd18))
                (*(longlong **)(param_1 + 0x560),param_2);
      return;
    }
    lVar11 = UUGRichTextBlock::GetPrivateStaticClass();
    iVar5 = *(int *)(lVar11 + 0x90);
    lVar7 = (longlong)iVar5;
    if ((*(int *)(*(longlong *)(local_68 + 0x10) + 0x90) < iVar5) ||
       (lVar7 = *(longlong *)(*(longlong *)(local_68 + 0x10) + 0x88),
       *(longlong *)(lVar7 + (longlong)iVar5 * 8) != lVar11 + 0x88)) {
      uVar4 = (uint)lVar7 & 0xffffff00;
    }
    else {
      uVar4 = (uint)CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
    }
    if ((char)uVar4 != '\0') {
      lVar7 = *(longlong *)(local_68 + 0x168);
      if (lVar7 == 0) {
        uVar14 = (undefined4)DAT_1468b5da0;
        uVar15 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_100 = DAT_1468b5da8;
      }
      else {
        local_e8 = *(float *)(lVar7 + 0x210);
        fStack_e4 = *(float *)(lVar7 + 0x214);
        fStack_e0 = *(float *)(lVar7 + 0x218);
        fStack_dc = *(float *)(lVar7 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != fStack_e4);
        auVar2._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != local_e8);
        auVar2._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_e0);
        auVar2._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_dc);
        iVar5 = movmskps(uVar4,auVar2);
        if (iVar5 != 0) {
          *(float *)(lVar7 + 0x250) = local_e8;
          *(float *)(lVar7 + 0x254) = fStack_e4;
          *(float *)(lVar7 + 600) = fStack_e0;
          *(float *)(lVar7 + 0x25c) = fStack_dc;
          puVar12 = (undefined8 *)FQuat::Rotator(&local_e8,local_d8);
          *(undefined8 *)(lVar7 + 0x260) = *puVar12;
          *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar12 + 1);
        }
        uVar14 = (undefined4)*(undefined8 *)(lVar7 + 0x260);
        uVar15 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x260) >> 0x20);
        local_100 = *(undefined4 *)(lVar7 + 0x268);
      }
      local_108 = CONCAT44(uVar15,uVar14);
      lVar7 = *(longlong *)(local_68 + 0x168);
      if (lVar7 == 0) {
        local_118 = _DAT_1468b5d90;
        local_110 = DAT_1468b5d98;
      }
      else {
        local_118 = *(undefined8 *)(lVar7 + 0x220);
        local_110 = *(undefined4 *)(lVar7 + 0x228);
      }
      local_f8 = local_118;
      local_f0 = local_110;
      (**(code **)(**(longlong **)(param_1 + 0x560) + 0x730))
                (*(longlong **)(param_1 + 0x560),&local_f8,&local_108);
      goto LAB_142422fbf;
    }
    FUN_14045a130(local_98);
  } while( true );
}



// FUNCTION 142423050 FUN_142423050 body=362 status=ok
// SIG undefined FUN_142423050(void)

void FUN_142423050(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong local_res8;
  code *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar1 == '\0') {
    return;
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
  if (*(int *)(lVar2 + 0x8b8) < 1) {
    local_res8 = 0;
    plVar3 = &local_res8;
  }
  else {
    plVar3 = (longlong *)
             (**(code **)(*(longlong *)**(undefined8 **)(lVar2 + 0x8b0) + 0x18))
                       ((longlong *)**(undefined8 **)(lVar2 + 0x8b0),&local_res8);
  }
  if (*plVar3 == DAT_146af2778) {
    *(undefined1 *)(param_1 + 0x24) = 1;
    return;
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
  iStack_20 = 0;
  *(int *)(param_1 + 0x20) = (int)(longlong)(*(float *)(lVar2 + 0xad8) * 1000.0);
  local_28 = FUN_142408e00;
  local_18 = 0x42408e00;
  uStack_14 = 1;
  uStack_10 = 0;
  uStack_c = uStack_1c;
  uVar4 = FUN_1418c8b70(&local_28,param_1,&local_18);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x38,uVar4);
  if (iStack_20 != 0) {
    if (local_28 == (code *)0x0) goto LAB_142423175;
    (**(code **)(*(longlong *)local_28 + 0x28))(local_28,0);
    if (local_28 != (code *)0x0) {
      local_28 = (code *)FMemory::Realloc(local_28,0,0);
    }
    iStack_20 = 0;
  }
  if (local_28 != (code *)0x0) {
    FMemory::Free(local_28);
  }
LAB_142423175:
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
  (**(code **)(**(longlong **)(lVar2 + 0x568) + 0x58))
            (*(longlong **)(lVar2 + 0x568),*(undefined4 *)(param_1 + 0x20),param_1 + 0x38);
  uVar4 = FWeakObjectPtr::Get(param_1 + 0x18);
  FUN_14241a8a0(uVar4,1);
  return;
}



// FUNCTION 1424231c0 FUN_1424231c0 body=408 status=ok
// SIG undefined FUN_1424231c0(void)

void FUN_1424231c0(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  code *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar3 == '\0') {
    return;
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar4 + 0x548);
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x18);
  *(undefined4 *)(lVar4 + 0x548) = *(undefined4 *)(param_1 + 0x24);
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x18);
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x18);
  fVar1 = *(float *)(lVar5 + 0x548);
  fVar7 = 0.0;
  if ((0.0 <= fVar1) && (fVar7 = *(float *)(lVar4 + 0x544) - 0.01, fVar1 <= fVar7)) {
    fVar7 = fVar1;
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x18);
  iStack_30 = 0;
  *(float *)(lVar4 + 0x548) = fVar7;
  local_38 = FUN_142408e70;
  local_28 = 0x42408e70;
  uStack_24 = 1;
  uStack_20 = 0;
  uStack_1c = uStack_2c;
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x18);
  plVar2 = *(longlong **)(lVar4 + 0x568);
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x18);
  lVar4 = *plVar2;
  uVar6 = FUN_1418c8b70(&local_38,param_1,&local_28);
  (**(code **)(lVar4 + 0x58))(plVar2,(longlong)(*(float *)(lVar5 + 0x548) * 1000.0),uVar6);
  if (iStack_30 != 0) {
    if (local_38 == (code *)0x0) goto LAB_142423339;
    (**(code **)(*(longlong *)local_38 + 0x28))(local_38,0);
    if (local_38 != (code *)0x0) {
      local_38 = (code *)FMemory::Realloc(local_38,0,0);
    }
    iStack_30 = 0;
  }
  if (local_38 != (code *)0x0) {
    FMemory::Free(local_38);
  }
LAB_142423339:
  uVar6 = FWeakObjectPtr::Get(param_1 + 0x18);
  FUN_14241a8a0(uVar6,1);
  return;
}



// FUNCTION 142423360 FUN_142423360 body=512 status=ok
// SIG undefined FUN_142423360(void)

void FUN_142423360(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 local_38;
  longlong *local_30;
  longlong local_28 [2];
  
  if ((((*(int *)(param_1 + 0xa0) < 1) || (**(longlong **)(param_1 + 0x98) == 0)) ||
      (*(int *)(**(longlong **)(param_1 + 0x98) + 300) == 1)) &&
     (*(char *)(param_1 + 0x89c) == '\0')) {
    if (*(longlong *)(param_1 + 0x90) == 0) {
      return;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x90) + 300) == 1) {
      return;
    }
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x780);
  plVar6 = *(longlong **)(param_1 + 0x90);
  if (plVar6 == (longlong *)0x0) {
    if ((*(int *)(param_1 + 0xa0) < 1) ||
       (plVar6 = (longlong *)**(longlong **)(param_1 + 0x98), plVar6 == (longlong *)0x0))
    goto LAB_142423426;
  }
  else {
    (**(code **)(*plVar6 + 0x2c8))(plVar6,0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 300) = 1;
    plVar6 = *(longlong **)(param_1 + 0x90);
  }
  (**(code **)(*plVar6 + 0x2f8))();
LAB_142423426:
  (**(code **)(**(longlong **)(param_1 + 0x568) + 0x20))();
  iVar7 = *(int *)(param_1 + 0x8b8);
  if (iVar7 != 0) {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x8b0) + 8);
    do {
      plVar4 = (longlong *)*plVar6;
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
      plVar6 = plVar6 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x8b8) = 0;
  if (*(int *)(param_1 + 0x8bc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x8b0,0);
  }
  local_30 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x8c0) != &local_38) {
    *(undefined8 *)(param_1 + 0x8c0) = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x8c8,&local_30);
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  plVar6 = (longlong *)(param_1 + 0xb68);
  if (plVar6 != local_28) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    *plVar6 = 0;
    *(undefined8 *)(param_1 + 0xb70) = 0;
  }
  FUN_14241e3e0(param_1);
  return;
}



// FUNCTION 142423560 FUN_142423560 body=890 status=ok
// SIG undefined FUN_142423560(void)

void FUN_142423560(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  short sVar1;
  short sVar2;
  void *_Src;
  short *psVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 local_res10;
  undefined2 *local_78;
  int local_70;
  int local_6c;
  longlong *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  local_60 = 1;
  local_68 = (longlong *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_68,0);
  plVar10 = local_68;
  FString::FString(local_68,param_1);
  local_70 = *(int *)(param_2 + 1);
  lVar7 = (longlong)local_70;
  _Src = (void *)*param_2;
  local_78 = (undefined2 *)0x0;
  if (local_70 == 0) {
    local_6c = 0;
    iVar8 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
    _guard_xfg_dispatch_icall_nop(local_78,_Src,lVar7 * 2);
    iVar8 = local_70;
  }
  iVar9 = (int)local_60;
  puVar4 = local_78;
joined_r0x0001424235f4:
  do {
    local_78 = puVar4;
    if (iVar8 < 2) {
      plVar6 = plVar10;
      if (puVar4 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      }
      if (plVar10 != (longlong *)0x0) {
        FMemory::Free(plVar10);
      }
      return;
    }
    puVar5 = (undefined2 *)0x0;
    local_58 = (undefined2 *)0x0;
    local_50 = iVar8;
    if (iVar8 == 0) {
      local_4c = 0;
      iVar8 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar8,0);
      puVar5 = local_58;
      _guard_xfg_dispatch_icall_nop(local_58,puVar4,(longlong)iVar8 * 2);
      iVar8 = local_70;
    }
    for (plVar6 = plVar10; plVar6 != plVar10 + (longlong)iVar9 * 2; plVar6 = plVar6 + 2) {
      puVar4 = &DAT_143f3eda8;
      if (local_50 != 0) {
        puVar4 = puVar5;
      }
      if ((int)plVar6[1] == 0) {
        psVar3 = &DAT_143f3eda8;
      }
      else {
        psVar3 = (short *)*plVar6;
      }
      lVar7 = (longlong)puVar4 - (longlong)psVar3;
      do {
        sVar1 = *psVar3;
        sVar2 = *(short *)((longlong)psVar3 + lVar7);
        if (sVar1 != sVar2) break;
        psVar3 = psVar3 + 1;
      } while (sVar2 != 0);
      if (sVar1 == sVar2) {
        if (puVar5 != (undefined2 *)0x0) {
          FMemory::Free(puVar5);
          iVar8 = local_70;
        }
        puVar4 = &DAT_143f3eda8;
        if (iVar8 != 0) {
          puVar4 = local_78;
        }
        if (*(int *)(param_1 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*param_1;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x106,L"Device Profile %s has a circular dependency on %s",puVar5,
                   puVar4);
        puVar4 = &DAT_143f3eda8;
        if (local_70 != 0) {
          puVar4 = local_78;
        }
        if (*(int *)(param_1 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*param_1;
        }
        FDebug::AssertFailed
                  (&DAT_1450898d6,"Unknown",0x106,
                   L"Device Profile %s has a circular dependency on %s",puVar5,puVar4);
        puVar4 = local_78;
        iVar8 = local_70;
        goto joined_r0x0001424235f4;
      }
    }
    if (puVar5 != (undefined2 *)0x0) {
      FMemory::Free(puVar5);
    }
    iVar8 = iVar9 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar8);
    if (local_60._4_4_ < iVar8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_68,iVar9);
      plVar10 = local_68;
      iVar8 = (int)local_60;
    }
    puVar4 = local_78;
    plVar6 = plVar10 + (longlong)iVar9 * 2;
    *plVar6 = 0;
    lVar7 = (longlong)local_70;
    *(int *)(plVar6 + 1) = local_70;
    if (local_70 == 0) {
      *(undefined4 *)((longlong)plVar6 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar6,local_70,0);
      _guard_xfg_dispatch_icall_nop((void *)*plVar6,puVar4,lVar7 * 2);
    }
    lVar7 = UDeviceProfile::GetPrivateStaticClass();
    local_res10 = *(undefined8 *)(lVar7 + 0x18);
    FName::ToString(&local_res10,&local_48);
    puVar4 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar4 = local_48;
    }
    puVar5 = &DAT_143f3eda8;
    if (local_70 != 0) {
      puVar5 = local_78;
    }
    FString::PrintfImpl(&local_38,L"%s %s",puVar5,puVar4);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_70 = 0;
    if ((local_6c < 0) && (local_6c != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78,0);
    }
    if (local_78 != (undefined2 *)0x0) {
      *local_78 = 0;
    }
    puVar4 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar4 = local_38;
    }
    FConfigFile::GetString(param_3,puVar4,L"BaseProfileName",&local_78);
    iVar9 = iVar8;
    puVar4 = local_78;
    iVar8 = local_70;
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
      puVar4 = local_78;
      iVar8 = local_70;
    }
  } while( true );
}



// FUNCTION 1424238e0 FUN_1424238e0 body=153 status=ok
// SIG undefined FUN_1424238e0(void)

undefined8 FUN_1424238e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(char *)(param_1 + 0x24) == '\0') && (*(longlong *)(param_1 + 0x30) != -2)) {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return 0;
    }
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x18);
    if (cVar1 != '\0') {
      if (0 < *(longlong *)(param_1 + 0x30)) {
        lVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
        cVar1 = (**(code **)(**(longlong **)(lVar2 + 0x568) + 0x88))
                          (*(longlong **)(lVar2 + 0x568),
                           *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30));
        if (cVar1 == '\0') {
          return 0;
        }
      }
      uVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
      uVar3 = FUN_14240bc50(uVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      return uVar3;
    }
  }
  return 1;
}



// FUNCTION 142423980 FUN_142423980 body=134 status=ok
// SIG undefined FUN_142423980(void)

undefined8 FUN_142423980(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0x30) != -2) &&
     (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x18), cVar1 != '\0')) {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return 0;
    }
    if (0 < *(longlong *)(param_1 + 0x30)) {
      lVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
      cVar1 = (**(code **)(**(longlong **)(lVar2 + 0x568) + 0x78))();
      if (cVar1 == '\0') {
        return 0;
      }
    }
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
    uVar3 = FUN_142417170(uVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    return uVar3;
  }
  return 1;
}



// FUNCTION 142423a10 FUN_142423a10 body=209 status=ok
// SIG undefined FUN_142423a10(void)

undefined8 FUN_142423a10(longlong param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  LARGE_INTEGER local_res8;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x18);
    cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x568) + 0x158))();
    if (cVar2 != '\0') {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x18);
      iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x568) + 0x70))();
      iVar1 = *(int *)(param_1 + 0x20);
      QueryPerformanceCounter(&local_res8);
      if ((iVar3 == iVar1) &&
         (((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) - *(double *)(param_1 + 0x28) <
          15.0)) {
        return 0;
      }
      uVar5 = FWeakObjectPtr::Get(param_1 + 0x18);
      FUN_142416fb0(uVar5);
    }
  }
  return 1;
}



// FUNCTION 142423af0 FUN_142423af0 body=1696 status=ok
// SIG undefined FUN_142423af0(void)

void FUN_142423af0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 *puVar19;
  float fVar20;
  undefined4 uVar21;
  LARGE_INTEGER local_res8;
  uint local_res10;
  uint uStackX_14;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  
  if ((*(int *)(param_1 + 0x5a0) != 0) &&
     (plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x568) + 0x38))(),
     plVar9 != (longlong *)0x0)) {
    QueryPerformanceCounter(&local_res18);
    dVar6 = (double)local_res18.QuadPart * DAT_1468b02f8;
    fVar20 = (float)FUN_14240df30(param_1);
    plVar4 = (longlong *)**(longlong **)(param_1 + 0x98);
    *(int *)(param_1 + 0x740) = *(int *)(param_1 + 0x740) + 1;
    (**(code **)(*plVar4 + 0x2c8))(plVar4,0);
    local_a8 = plVar4[0xd];
    UPackageMapClient::OverridePackageMapExportAckStatus(local_a8,param_1 + 0x648);
    if (*(longlong *)(param_1 + 0xd0) == 0) {
      plVar17 = (longlong *)0x0;
    }
    else {
      plVar17 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x148);
    }
    if (plVar17 == (longlong *)0x0) {
      uVar21 = 0xbf800000;
    }
    else {
      uVar21 = *(undefined4 *)((longlong)plVar17 + 0x484);
      (**(code **)(*plVar17 + 0x760))(plVar17);
    }
    local_res8.s.LowPart._0_1_ = (undefined1)plVar4[0x2fd];
    puVar11 = (undefined8 *)0x0;
    *(undefined1 *)(plVar4 + 0x2fd) = 1;
    if (*(char *)(param_1 + 0xae0) != '\0') {
      uVar3 = **(undefined4 **)(param_1 + 0xb38);
      lVar10 = operator_new(0x18);
      if (lVar10 == 0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        puVar11 = (undefined8 *)FUN_142404060(lVar10,plVar4,uVar3);
      }
    }
    bVar7 = true;
    puVar2 = (undefined8 *)(param_1 + 0x598);
    while ((puVar19 = puVar11, 0 < *(int *)(param_1 + 0x5a0) && (bVar7))) {
      uVar12 = FWeakObjectPtr::Get(*puVar2);
      iVar8 = *(int *)(param_1 + 0x5a0);
      if (iVar8 + -1 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)*puVar2,(void *)((longlong)*puVar2 + 8),(longlong)(iVar8 + -1) << 3);
        iVar8 = *(int *)(param_1 + 0x5a0);
      }
      *(int *)(param_1 + 0x5a0) = iVar8 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(puVar2);
      FWeakObjectPtr::operator=(&local_res10);
      if ((int)plVar4[0x2c1] != *(int *)((longlong)plVar4 + 0x1634)) {
        plVar13 = (longlong *)plVar4[0x2c8];
        if ((longlong *)plVar4[0x2c8] == (longlong *)0x0) {
          plVar13 = plVar4 + 0x2c7;
        }
        iVar8 = *(int *)((longlong)plVar13 +
                        ((longlong)(int)(uStackX_14 ^ local_res10) &
                        (longlong)(int)plVar4[0x2c9] - 1U) * 4);
        if (iVar8 != -1) {
          lVar10 = plVar4[0x2c0];
          do {
            lVar18 = (longlong)iVar8;
            if ((*(uint *)(lVar10 + lVar18 * 0x18) == local_res10) &&
               (*(uint *)(lVar10 + 4 + lVar18 * 0x18) == uStackX_14)) {
              if ((iVar8 != -1) &&
                 ((lVar10 = lVar10 + lVar18 * 0x18, lVar10 != 0 && (*(longlong *)(lVar10 + 8) != 0))
                 )) {
                FUN_142224a10(uVar12,param_1);
                FUN_14240a400(param_1,uVar12,plVar4,1);
                QueryPerformanceCounter(&local_res20);
                if ((0.0 < (double)fVar20 * 0.001) &&
                   ((double)fVar20 * 0.001 < (double)local_res20.QuadPart * DAT_1468b02f8 - dVar6))
                {
                  bVar7 = false;
                  goto LAB_142423d65;
                }
              }
              break;
            }
            iVar8 = *(int *)(lVar10 + 0x10 + lVar18 * 0x18);
          } while (iVar8 != -1);
        }
      }
      bVar7 = true;
LAB_142423d65:
      puVar11 = puVar19;
      if (puVar19 != (undefined8 *)0x0) {
        plVar13 = (longlong *)(param_1 + 0xb38);
        piVar1 = (int *)(*plVar13 + 4);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          iVar8 = *(int *)(param_1 + 0xb40);
          if (iVar8 + -1 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)*plVar13,(void *)(*plVar13 + 8),(longlong)(iVar8 + -1) << 3);
            iVar8 = *(int *)(param_1 + 0xb40);
          }
          *(int *)(param_1 + 0xb40) = iVar8 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar13);
          if ((bVar7) && (0 < *(int *)(param_1 + 0xb40))) {
            lVar10 = operator_new(0x18);
            puVar11 = (undefined8 *)0x0;
            if (lVar10 != 0) {
              puVar11 = (undefined8 *)FUN_142404060(lVar10);
            }
            if (puVar19 != (undefined8 *)0x0) {
              (**(code **)(*(longlong *)*puVar19 + 0x2c8))((longlong *)*puVar19,0);
              plVar13 = (longlong *)puVar19[1];
              uVar16 = (ulonglong)*(int *)((longlong)puVar19 + 0x14);
              if (*(int *)((longlong)puVar19 + 0x14) < (int)plVar13[1]) {
                lVar10 = uVar16 * 0x18;
                do {
                  lVar10 = lVar10 + 0x18;
                  uVar15 = (int)uVar16 + 1;
                  uVar16 = (ulonglong)uVar15;
                  *(undefined4 *)(*plVar13 + -4 + lVar10) = *(undefined4 *)(puVar19 + 2);
                  plVar13 = (longlong *)puVar19[1];
                } while ((int)uVar15 < (int)plVar13[1]);
              }
              FMemory::operator_delete(puVar19);
            }
          }
        }
      }
    }
    if (plVar17 != (longlong *)0x0) {
      *(undefined4 *)((longlong)plVar17 + 0x484) = uVar21;
    }
    (**(code **)(*plVar4 + 0x2c8))(plVar4,0);
    lVar10 = local_a8;
    UPackageMapClient::OverridePackageMapExportAckStatus(local_a8,0);
    if (puVar19 != (undefined8 *)0x0) {
      (**(code **)(*(longlong *)*puVar19 + 0x2c8))((longlong *)*puVar19,0);
      plVar17 = (longlong *)puVar19[1];
      uVar16 = (ulonglong)*(int *)((longlong)puVar19 + 0x14);
      if (*(int *)((longlong)puVar19 + 0x14) < (int)plVar17[1]) {
        lVar18 = uVar16 * 0x18;
        do {
          uVar15 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar15;
          *(undefined4 *)(lVar18 + 0x14 + *plVar17) = *(undefined4 *)(puVar19 + 2);
          plVar17 = (longlong *)puVar19[1];
          lVar18 = lVar18 + 0x18;
        } while ((int)uVar15 < (int)plVar17[1]);
      }
      FMemory::operator_delete(puVar19,0x18);
    }
    *(undefined1 *)(plVar4 + 0x2fd) = local_res8.s.LowPart._0_1_;
    QueryPerformanceCounter(&local_res8);
    *(double *)(param_1 + 0x738) =
         ((double)CONCAT71(local_res8.QuadPart._1_7_,local_res8.s.LowPart._0_1_) * DAT_1468b02f8 -
         dVar6) + *(double *)(param_1 + 0x738);
    if (*(int *)(param_1 + 0x5a0) == 0) {
      if ((*(char *)(param_1 + 0xae0) == '\0') || (lVar18 = operator_new(0x10), lVar18 == 0)) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_1424040b0(lVar18,plVar9);
      }
      puVar5 = *(undefined4 **)plVar9[1];
      if ((undefined4 *)((undefined8 *)plVar9[1])[1] < puVar5 + 1) {
        (**(code **)(*plVar9 + 0x50))(plVar9,param_1 + 0x558,4);
        if ((*(byte *)((longlong)plVar9 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar9,param_1 + 0x558,4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x558) = *puVar5;
        *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
      }
      FUN_1424067d0(plVar9,param_1 + 0x5a8);
      if ((*(byte *)(plVar9 + 5) & 1) != 0) {
        if (*(longlong *)(param_1 + 0x5e8) != 0) {
          uVar14 = FMemory::Realloc(*(longlong *)(param_1 + 0x5e8),0,0);
          *(undefined8 *)(param_1 + 0x5e8) = uVar14;
        }
        *(undefined4 *)(param_1 + 0x5f0) = 0;
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::ConditionalRehash
                  (param_1 + 0x5a8,*(int *)(param_1 + 0x5b0) - *(int *)(param_1 + 0x5dc),0);
      }
      local_a0 = *(undefined8 *)(param_1 + 0xe0);
      local_98 = *(longlong *)(param_1 + 0xe8);
      if (local_98 != 0) {
        LOCK();
        *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
        UNLOCK();
      }
      FUN_1424213e0(param_1,&local_a0,plVar9);
      FUN_1425f1e00(lVar10,plVar9,1);
      FUN_142406c60(&local_a8,uVar12);
      (**(code **)(*plVar9 + 0x98))(plVar9);
      uVar21 = *(undefined4 *)(param_1 + 0xb48);
      *(undefined4 *)(param_1 + 0xb48) = *(undefined4 *)(param_1 + 0xa70);
      FUN_142427bd0(param_1,plVar9,plVar4 + 0x330,(float)*(double *)(param_1 + 0x748));
      (**(code **)(*plVar9 + 0x98))(plVar9);
      lVar10 = (**(code **)(*plVar9 + 0x98))(plVar9);
      if (0 < lVar10) {
        (**(code **)(**(longlong **)(param_1 + 0x568) + 0x40))
                  (*(longlong **)(param_1 + 0x568),(longlong)(*(double *)(param_1 + 0x748) * 1000.0)
                  );
      }
      *(undefined4 *)(param_1 + 0xb48) = uVar21;
    }
  }
  return;
}



// FUNCTION 142424190 FUN_142424190 body=1543 status=ok
// SIG undefined FUN_142424190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142424190(longlong param_1,float param_2)

{
  float fVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 uVar11;
  float fVar12;
  ulonglong in_stack_ffffffffffffff98;
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  if ((*(longlong *)(param_1 + 0xd0) != 0) && (cVar4 = UWorld::IsInSeamlessTravel(), cVar4 != '\0'))
  {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af28e0) && (_Init_thread_header(&DAT_146af28e0), DAT_146af28e0 == -1))
  {
    local_58.QuadPart = 0;
    uStack_50 = 0;
    uVar8 = FCommandLine::Get();
    cVar4 = FParse::Value(uVar8,L"-csvdemostarttime=",(longlong)&local_58 + 4);
    local_58.s.LowPart._0_1_ = cVar4;
    if (cVar4 != '\0') {
      uVar8 = FCommandLine::Get();
      cVar4 = FParse::Value(uVar8,L"-csvdemoendtime=",&uStack_50);
      uVar11 = (undefined4)uStack_50;
      if (cVar4 == '\0') {
        uVar11 = 0xffffffff;
      }
      uStack_50._0_4_ = uVar11;
      uVar8 = FCommandLine::Get();
      cVar4 = FParse::Value(uVar8,L"-csvdemoframecount=",(longlong)&uStack_50 + 4);
      if (cVar4 == '\0') {
        uStack_50._4_4_ = 0xffffffff;
      }
    }
    _DAT_146af28d0 = local_58;
    _DAT_146af28d8 = uStack_50;
    _Init_thread_footer(&DAT_146af28e0);
  }
  uVar8 = FUN_14168db40();
  if (DAT_146af28d0 == '\0') goto LAB_1424242f0;
  if ((*(char *)(param_1 + 0x89c) == '\0') &&
     ((*(longlong *)(param_1 + 0x90) == 0 || (*(int *)(*(longlong *)(param_1 + 0x90) + 300) == 1))))
  {
LAB_142424271:
    cVar4 = '\0';
  }
  else {
    if ((*(float *)(param_1 + 0x548) < (float)DAT_146af28d4) ||
       (((float)DAT_146af28d8 < *(float *)(param_1 + 0x548) && (-1 < DAT_146af28d8))))
    goto LAB_142424271;
    cVar4 = '\x01';
  }
  if (-1 < _DAT_146af28d8) {
    iVar6 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(uVar8);
    if (DAT_146af28dc <= iVar6) {
      cVar4 = '\0';
    }
  }
  cVar5 = FUN_140583fc0(uVar8);
  if (cVar4 != cVar5) {
    if (cVar4 == '\0') {
      FCsvProfiler::EndCapture(uVar8);
    }
    else {
      local_48 = 0;
      local_40 = 0;
      local_58.QuadPart = 0;
      uStack_50 = 0;
      FCsvProfiler::BeginCapture
                (uVar8,0xffffffff,&local_58,&local_48,in_stack_ffffffffffffff98 & 0xffffffffffffff00
                );
      if (local_58.QuadPart != 0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
  }
LAB_1424242f0:
  if (((*(char *)(param_1 + 0x89c) != '\0') ||
      ((*(longlong *)(param_1 + 0x90) != 0 && (*(int *)(*(longlong *)(param_1 + 0x90) + 300) != 1)))
      ) && (*(char *)(param_1 + 0xb60) == '\0')) {
    FNetGUIDCache::SetAsyncLoadMode(*(undefined8 *)(param_1 + 0xe0),0 < *DAT_146af26a0);
    if (0.0 <= *DAT_146af25b0) {
      local_48 = 0;
      local_40 = local_40 & 0xffffffff00000000;
      FUN_142412840(param_1,*DAT_146af25b0,&local_48);
      (**(code **)(*DAT_146af25a8 + 0x60))(DAT_146af25a8,&DAT_14508a264,0x9000000);
    }
    if (0.0 < ABS(*DAT_146af2580)) {
      local_48 = 0;
      local_40 = local_40 & 0xffffffff00000000;
      FUN_142412840(param_1,*DAT_146af2580 + *(float *)(param_1 + 0x548),&local_48);
      (**(code **)(*DAT_146af2578 + 0x60))(DAT_146af2578,&DAT_14508a044,0x9000000);
    }
    FUN_14241aec0(param_1);
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x70))();
    if (iVar6 != 0) {
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x70))();
      *(float *)(param_1 + 0x544) = (float)uVar7 * 0.001;
    }
    cVar4 = FUN_14241b8c0(param_1);
    if (cVar4 != '\0') {
      plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x568) + 0x30))();
      if (plVar9 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar9 + 0xa0))(plVar9);
        if ((cVar4 == '\0') ||
           ((*(int *)(param_1 + 0x7f0) != 0 &&
            (param_2 + *(float *)(param_1 + 0x548) < *(float *)(param_1 + 0x544))))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x158))();
        if ((cVar4 == '\0') && (bVar3)) {
          TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x768);
          uVar8 = FCommandLine::Get();
          cVar4 = FParse::Param(uVar8,L"ExitAfterReplay");
          if (cVar4 != '\0') {
            FUN_1416a8180(0);
          }
          if (0 < *DAT_146af2700) {
            local_48 = 0;
            local_40 = local_40 & 0xffffffff00000000;
            FUN_142412840(param_1,0,&local_48);
          }
        }
      }
      lVar10 = UWorld::GetWorldSettings(*(undefined8 *)(param_1 + 0xd0),0,1);
      if (*(longlong *)(lVar10 + 0x600) == 0) {
        *(float *)(param_1 + 0x548) = param_2 + *(float *)(param_1 + 0x548);
      }
      fVar1 = *(float *)(param_1 + 0x548);
      fVar12 = 0.0;
      if ((0.0 <= fVar1) && (fVar12 = *(float *)(param_1 + 0x544) - 0.01, fVar1 <= fVar12)) {
        fVar12 = fVar1;
      }
      *(float *)(param_1 + 0x548) = fVar12;
      if ((*(char *)(param_1 + 0x554) == '\0') &&
         ((*(int *)(param_1 + 0x7f0) != 0 ||
          (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x78))(), cVar4 != '\0')))) {
        QueryPerformanceCounter(&local_58);
        dVar2 = (double)local_58.QuadPart * DAT_1468b02f8;
        do {
          uVar8 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x30))();
          if (0 < *(int *)(param_1 + 0x7f0)) {
            fVar1 = *(float *)((longlong)*(int *)(param_1 + 0x7f0) * 0x20 + -0x10 +
                              *(longlong *)(param_1 + 0x7e8));
            if ((*(float *)(param_1 + 0x548) < fVar1) && (5.0 < fVar1 - *(float *)(param_1 + 0x548))
               ) break;
          }
          cVar4 = FUN_14241c620(param_1,uVar8,param_1 + 0x7e8,0,0);
        } while (cVar4 != '\0');
        iVar6 = *(int *)(param_1 + 0xb4c);
        while ((-1 < iVar6 && (iVar6 < *(int *)(param_1 + 0x7f0)))) {
          lVar10 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x7e8);
          if (*(float *)(param_1 + 0x548) <= *(float *)(lVar10 + 0x10) &&
              *(float *)(lVar10 + 0x10) != *(float *)(param_1 + 0x548)) goto LAB_142424684;
          if (*(int *)(lVar10 + 0x14) != *(int *)(param_1 + 0x558)) {
            (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xd0) + 400) + 0x2d0))();
            *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(lVar10 + 0x14);
            FUN_14241bb10(param_1);
            goto LAB_142424684;
          }
          cVar4 = FUN_14241b670(param_1,lVar10);
          iVar6 = *(int *)(param_1 + 0xb4c) + 1;
          *(int *)(param_1 + 0xb4c) = iVar6;
          if (cVar4 == '\0') goto LAB_142424684;
          *(int *)(param_1 + 0x540) = *(int *)(param_1 + 0x540) + 1;
        }
        FUN_14241a8a0(param_1,1);
LAB_142424684:
        FUN_14241dcf0(param_1 + 0x7e8,0,*(undefined4 *)(param_1 + 0xb4c),1);
        *(undefined4 *)(param_1 + 0xb4c) = 0;
        if (*(char *)(param_1 + 0x899) != '\0') {
          FUN_14240cb20(param_1,SUB84(dVar2 + 16777216.0,0));
        }
      }
      else {
        FUN_14241a8a0(param_1,1);
      }
    }
  }
  return;
}



// FUNCTION 1424247a0 FUN_1424247a0 body=5243 status=ok
// SIG undefined FUN_1424247a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1424247a0(longlong *param_1,float param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong *******ppppppplVar7;
  char cVar8;
  int iVar9;
  DWORD DVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int *piVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  longlong *****ppppplVar21;
  uint *puVar22;
  longlong ******pppppplVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong ****pppplVar28;
  ulonglong uVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  longlong *****ppppplVar32;
  longlong lVar33;
  uint *puVar34;
  uint uVar35;
  uint *puVar36;
  longlong *****ppppplVar37;
  longlong ****pppplVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  undefined4 uVar43;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  uint *local_280;
  float local_278;
  char local_268 [4];
  uint local_264;
  int local_260 [2];
  longlong *******local_258;
  undefined4 local_250;
  longlong *******local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  uint uStack_220;
  int iStack_21c;
  int local_218;
  int iStack_214;
  longlong *******local_210;
  LARGE_INTEGER local_208;
  undefined8 local_200;
  uint *puStack_1f8;
  undefined4 local_1f0;
  int iStack_1ec;
  uint uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  longlong *local_1d8 [2];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  longlong ******local_198;
  undefined2 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  int local_178;
  uint local_174;
  longlong *******local_170;
  undefined8 uStack_168;
  uint *local_160;
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  longlong ******local_140;
  undefined4 local_138;
  longlong ******local_130;
  undefined4 local_128;
  longlong local_120;
  longlong local_118;
  longlong ******local_108;
  undefined8 local_100;
  uint local_f8 [4];
  ulonglong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  if ((int)param_1[0x14] < 1) {
    return;
  }
  if (*(longlong *)param_1[0x13] == 0) {
    return;
  }
  if (*(int *)(*(longlong *)param_1[0x13] + 300) == 1) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x9f9) != '\0') {
    return;
  }
  local_1e0 = DAT_1468e3590;
  local_188 = param_1;
  uVar14 = FUN_14168db40();
  FCsvProfiler::BeginStat(uVar14,"DemoRecordTime",local_1e0);
  plVar15 = (longlong *)UWorld::GetWorldSettings(param_1[0x1a],0,1);
  fVar39 = (float)(**(code **)(*plVar15 + 0x6f8))
                            (plVar15,param_2 * *(float *)((longlong)plVar15 + 0x5e4) *
                                               *(float *)(plVar15 + 0xbc) *
                                               *(float *)(plVar15 + 0xbd),param_2);
  fVar40 = *(float *)(param_1 + 0xa9);
  *(float *)(param_1 + 0xa9) = fVar39 + fVar40;
  (**(code **)(*(longlong *)param_1[0xad] + 0x68))
            ((longlong *)param_1[0xad],(longlong)((fVar39 + fVar40) * 1000.0));
  if ((int)param_1[0xb4] != 0) {
    FUN_142423af0(param_1);
    goto LAB_142425be0;
  }
  local_118 = (**(code **)(*(longlong *)param_1[0xad] + 0x30))();
  if (local_118 == 0) goto LAB_142425be0;
  QueryPerformanceCounter(&local_208);
  uVar26 = 0;
  dVar4 = (double)local_208.QuadPart * DAT_1468b02f8 + 16777216.0;
  if ((char)param_1[0x15c] == '\0') {
    plVar15 = *(longlong **)(param_1[0x1a] + 0x88);
    uVar16 = (ulonglong)*(int *)(param_1[0x1a] + 0x90);
    uVar19 = uVar16 & 0x1fffffffffffffff;
    if (plVar15 + uVar16 < plVar15) {
      uVar19 = uVar26;
    }
    uVar16 = uVar26;
    if (uVar19 != 0) {
      do {
        plVar30 = (longlong *)*plVar15;
        if (((plVar30 != (longlong *)0x0) &&
            (cVar8 = (**(code **)(*plVar30 + 0x280))(plVar30), cVar8 != '\0')) &&
           (cVar8 = (**(code **)(*plVar30 + 0x290))(plVar30), cVar8 == '\0')) {
          local_248 = (longlong *******)0xffffffff;
          FWeakObjectPtr::operator=(&local_248,plVar30);
          local_208.QuadPart = (LONGLONG)local_248;
          piVar17 = (int *)TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                           ::FindId(param_1 + 0xff,local_260,&local_208);
          if (*piVar17 == -1) {
            TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                      (param_1 + 0xff,&local_264,&local_248);
            TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                      (param_1 + 0x109,local_1d8,&local_248);
          }
        }
        plVar15 = plVar15 + 1;
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar19);
    }
  }
  *(int *)(param_1 + 0xa8) = (int)param_1[0xa8] + 1;
  *(int *)(param_1 + 0x6a) = (int)param_1[0x6a] + 1;
  plVar15 = *(longlong **)param_1[0x13];
  local_1d8[0] = plVar15;
  (**(code **)(*plVar15 + 0x2c8))(plVar15,0);
  fVar40 = (float)(**(code **)(*DAT_146b17150 + 0x2b8))(DAT_146b17150,param_2,1);
  if (fVar40 != 0.0) {
    param_2 = 1.0 / fVar40;
  }
  plVar30 = param_1 + 0x13d;
  iVar9 = *(int *)(param_1[0xa5] + 0x58);
  iVar12 = *(int *)(param_1[0xa5] + 0x84);
  *(undefined4 *)(param_1 + 0x13e) = 0;
  if (*(int *)((longlong)param_1 + 0x9f4) < iVar9 - iVar12) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar30);
  }
  local_130 = _DAT_1468b5d90;
  local_140 = _DAT_1468b5d90;
  local_128 = DAT_1468b5d98;
  local_138 = DAT_1468b5d98;
  local_208.QuadPart = FWeakObjectPtr::Get(param_1 + 0x13c);
  if (((longlong *******)local_208.QuadPart == (longlong *******)0x0) &&
     (local_208.QuadPart = UPlayer::GetPlayerController(plVar15,param_1[0x1a]),
     (longlong *******)local_208.QuadPart == (longlong *******)0x0)) {
    local_120 = 0;
  }
  else {
    local_120 = (*(code *)(*(longlong *******)local_208)[0xeb])(local_208.QuadPart);
    if (local_120 != 0) {
      lVar33 = *(longlong *)(local_120 + 0x168);
      if (lVar33 == 0) {
        local_258 = (longlong *******)_DAT_1468b5d90;
        local_250 = DAT_1468b5d98;
      }
      else {
        local_258 = *(longlong ********)(lVar33 + 0x220);
        local_250 = *(undefined4 *)(lVar33 + 0x228);
      }
      local_130 = (longlong ******)local_258;
      local_128 = local_250;
      lVar33 = *(longlong *)(local_120 + 0x168);
      if (lVar33 == 0) {
        uVar41 = (undefined4)DAT_1468b5da0;
        uVar43 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_250 = DAT_1468b5da8;
      }
      else {
        fVar40 = *(float *)(lVar33 + 0x210);
        local_238 = *(longlong ********)(lVar33 + 0x210);
        fVar39 = *(float *)(lVar33 + 0x218);
        uStack_230 = *(longlong ******)(lVar33 + 0x218);
        auVar2._4_4_ = -(uint)(*(float *)(lVar33 + 0x254) != *(float *)(lVar33 + 0x214));
        auVar2._0_4_ = -(uint)(*(float *)(lVar33 + 0x250) != fVar40);
        auVar2._8_4_ = -(uint)(*(float *)(lVar33 + 600) != fVar39);
        auVar2._12_4_ = -(uint)(*(float *)(lVar33 + 0x25c) != *(float *)(lVar33 + 0x21c));
        iVar9 = movmskps(local_250,auVar2);
        if (iVar9 != 0) {
          *(float *)(lVar33 + 0x250) = fVar40;
          *(float *)(lVar33 + 0x254) = *(float *)(lVar33 + 0x214);
          *(float *)(lVar33 + 600) = fVar39;
          *(float *)(lVar33 + 0x25c) = *(float *)(lVar33 + 0x21c);
          puVar18 = (undefined8 *)FQuat::Rotator(&local_238,&local_180);
          *(undefined8 *)(lVar33 + 0x260) = *puVar18;
          *(undefined4 *)(lVar33 + 0x268) = *(undefined4 *)(puVar18 + 1);
        }
        uVar41 = (undefined4)*(undefined8 *)(lVar33 + 0x260);
        uVar43 = (undefined4)((ulonglong)*(undefined8 *)(lVar33 + 0x260) >> 0x20);
        local_250 = *(undefined4 *)(lVar33 + 0x268);
      }
      local_258 = (longlong *******)CONCAT44(uVar43,uVar41);
      local_248 = local_258;
      local_240 = local_250;
      puVar18 = (undefined8 *)FRotator::Vector(&local_248,&local_200);
      local_140 = (longlong ******)*puVar18;
      local_138 = *(undefined4 *)(puVar18 + 1);
    }
  }
  lVar33 = DAT_146af26b8;
  local_180 = (undefined8 *)0x0;
  local_260[0] = 0;
  local_174 = 0;
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar10 = GetCurrentThreadId();
    uVar19 = 4;
    if (DVar10 == DAT_1468c21c0) goto LAB_142424cb1;
  }
  else {
LAB_142424cb1:
    uVar19 = uVar26;
  }
  if (((*(int *)(uVar19 + lVar33) < 1) || (*(longlong **)(param_1[0x1a] + 0x38) == (longlong *)0x0))
     || (cVar8 = (**(code **)(**(longlong **)(param_1[0x1a] + 0x38) + 0x368))(), cVar8 == '\0')) {
    local_268[0] = '\0';
  }
  else {
    local_268[0] = '\x01';
    uVar16 = (ulonglong)*(int *)(*(longlong *)(param_1[0x1a] + 0x38) + 0xa0);
    puVar18 = *(undefined8 **)(*(longlong *)(param_1[0x1a] + 0x38) + 0x98);
    uVar29 = 0;
    uVar19 = uVar16 & 0x1fffffffffffffff;
    if (puVar18 + uVar16 < puVar18) {
      uVar19 = uVar29;
    }
    iVar9 = local_260[0];
    if (uVar19 != 0) {
      do {
        uVar14 = *puVar18;
        FUN_142403f80(&local_1c8,uVar14);
        if (uStack_1c0 != (longlong *****)0x0) {
          puVar20 = (undefined4 *)FUN_142403f80(&local_238,uVar14);
          local_178 = iVar9 + 1;
          if ((int)uVar26 < local_178) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(&local_180,iVar9);
            uVar26 = (ulonglong)local_174;
          }
          uVar41 = puVar20[1];
          uVar43 = puVar20[2];
          uVar5 = puVar20[3];
          puVar31 = local_180 + (longlong)iVar9 * 4;
          *(undefined4 *)puVar31 = *puVar20;
          *(undefined4 *)((longlong)puVar31 + 4) = uVar41;
          *(undefined4 *)(puVar31 + 1) = uVar43;
          *(undefined4 *)((longlong)puVar31 + 0xc) = uVar5;
          uVar14 = *(undefined8 *)(puVar20 + 6);
          local_180[(longlong)iVar9 * 4 + 2] = *(undefined8 *)(puVar20 + 4);
          (local_180 + (longlong)iVar9 * 4 + 2)[1] = uVar14;
          iVar9 = local_178;
        }
        puVar18 = puVar18 + 1;
        uVar29 = uVar29 + 1;
        param_1 = local_188;
      } while (uVar29 != uVar19);
    }
    local_260[0] = iVar9;
    plVar30 = param_1 + 0x13d;
  }
  lVar33 = DAT_146af26d0;
  ppppplVar32 = (longlong *****)0x0;
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar8 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar10 = GetCurrentThreadId(), ppppplVar21 = (longlong *****)&DAT_00000004,
     DVar10 == DAT_1468c21c0)) {
    ppppplVar21 = ppppplVar32;
  }
  lVar25 = DAT_146af26e8;
  fVar40 = *(float *)(lVar33 + (longlong)ppppplVar21);
  if (fVar40 <= 0.0) {
    fVar40 = 0.0;
  }
  else {
    fVar40 = fVar40 * fVar40;
  }
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar8 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar10 = GetCurrentThreadId(), ppppplVar21 = (longlong *****)&DAT_00000004,
     DVar10 == DAT_1468c21c0)) {
    ppppplVar21 = ppppplVar32;
  }
  if (*(float *)(lVar25 + (longlong)ppppplVar21) <= 0.0) {
    fVar39 = 0.5;
  }
  else {
    fVar39 = 1.0 / *(float *)(lVar25 + (longlong)ppppplVar21);
  }
  lVar33 = param_1[0xa5];
  local_248 = (longlong *******)(lVar33 + 0x50);
  local_200 = (longlong *****)0x0;
  iVar9 = *(int *)(lVar33 + 0x78);
  uStack_230 = (longlong *****)(lVar33 + 0x60);
  local_264 = 0;
  puStack_1f8 = (uint *)((ulonglong)puStack_1f8 & 0xffffffff);
  local_238 = (longlong *******)0x100000000;
  local_228._4_4_ = 0;
  uStack_220 = 0;
  if (iVar9 != 0) {
    puVar22 = *(uint **)(lVar33 + 0x70);
    if (*(uint **)(lVar33 + 0x70) == (uint *)0x0) {
      puVar22 = (uint *)uStack_230;
    }
    uVar11 = *puVar22;
    iVar12 = 0;
    while (uVar11 == 0) {
      uStack_220 = uStack_220 + 0x20;
      local_238._4_4_ = (undefined4)((ulonglong)local_238 >> 0x20);
      local_238 = (longlong *******)CONCAT44(local_238._4_4_,iVar12 + 1);
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar12) goto LAB_142424f31;
      uVar11 = puVar22[(longlong)iVar12 + 1];
      iVar12 = iVar12 + 1;
    }
    uVar11 = -uVar11 & uVar11;
    iVar12 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    local_238 = (longlong *******)CONCAT44(uVar11,(undefined4)local_238);
    if (uVar11 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    local_228._4_4_ = (uStack_220 - iVar12) + 0x1f;
    if (iVar9 < local_228._4_4_) {
LAB_142424f31:
      local_228._4_4_ = iVar9;
    }
  }
  local_228._0_4_ = 0xffffffff;
  uVar11 = *(uint *)(lVar33 + 0x78);
  uVar24 = *(uint *)(lVar33 + 0x78);
  uStack_1b0 = CONCAT44(local_228._4_4_,0xffffffff);
  uStack_1c0 = (longlong *****)local_238;
  uVar27 = -1 << ((byte)uVar11 & 0x1f);
  auStack_1a8._0_8_ = CONCAT44(iStack_21c,uStack_220);
  uVar35 = uVar11 & 0xffffffe0;
  uStack_1b8 = (uint *)CONCAT44(uVar11,uVar27);
  uStack_168 = (longlong *****)local_238;
  auStack_158._8_8_ = CONCAT44(iStack_21c,uStack_220);
  auStack_158._0_8_ = uStack_1b0;
  if (uVar11 != uVar24) {
    lVar25 = *(longlong *)(lVar33 + 0x70);
    if (*(longlong *)(lVar33 + 0x70) == 0) {
      lVar25 = lVar33 + 0x60;
    }
    uVar27 = *(uint *)(lVar25 + (longlong)((int)uVar11 >> 5) * 4) & uVar27;
    iVar9 = (int)uVar11 >> 5;
    while (uVar27 == 0) {
      uVar35 = uVar35 + 0x20;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
      goto LAB_142425005;
      uVar27 = *(uint *)(lVar25 + 4 + (longlong)iVar9 * 4);
      uStack_1b8 = (uint *)0xffffffff;
      iVar9 = iVar9 + 1;
    }
    uVar27 = -uVar27 & uVar27;
    iVar9 = 0x1f;
    if (uVar27 != 0) {
      for (; uVar27 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar27 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iVar9 = (uVar35 - iVar9) + 0x1f;
    uStack_1b8 = (uint *)CONCAT44(iVar9,(undefined4)uStack_1b8);
    if ((int)uVar24 < iVar9) {
LAB_142425005:
      uStack_1b8 = (uint *)CONCAT44(uVar24,(undefined4)uStack_1b8);
    }
  }
  local_258 = (longlong *******)((ulonglong)uStack_1b8 >> 0x20);
  ppppplVar21 = ppppplVar32;
  ppppplVar37 = ppppplVar32;
  local_1c8 = local_248;
  local_170 = local_248;
  local_160 = (uint *)uStack_230;
  while( true ) {
    iVar9 = (int)ppppplVar37;
    if (((auStack_158._4_4_ == (int)local_258) && ((longlong *****)local_160 == uStack_230)) &&
       (local_170 == local_248)) break;
    ppppplVar21 = (*local_170)[(longlong)(int)auStack_158._4_4_ * 3];
    if ((double)ppppplVar21[2] <= (double)*(float *)(param_1 + 0xa9) &&
        (double)*(float *)(param_1 + 0xa9) != (double)ppppplVar21[2]) {
      pppplVar28 = *ppppplVar21;
      uVar11 = *(uint *)((longlong)pppplVar28 + 0xc);
      if ((int)uVar11 < (int)DAT_1469e91c4) {
        uVar24 = uVar11 & 0xffff;
        if ((int)uVar11 < 0) {
          uVar11 = uVar11 + 0xffff;
          uVar24 = uVar24 - 0x10000;
        }
        lVar33 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar11 >> 0x10) * 8) +
                 (longlong)(int)uVar24 * 0x18;
      }
      else {
        lVar33 = 0;
      }
      if ((((*(uint *)(lVar33 + 8) >> 0x1d & 1) == 0) &&
          ((*(char *)((longlong)pppplVar28 + 0x95) != '\0' ||
           (((ulonglong)pppplVar28[0x12] & 0x20) != 0)))) &&
         ((*(char *)((longlong)pppplVar28 + 0x129) != '\x04' ||
          (cVar8 = UAbilityTask::IsWaitingOnRemotePlayerdata(pppplVar28), cVar8 == '\0')))) {
        if ((*(float *)((longlong)ppppplVar21 + 0x24) < 0.0001) ||
           (*(float *)(param_1 + 0x2e) - *(float *)((longlong)ppppplVar21 + 0x24) <
            *(float *)(param_1 + 0xe))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((((local_268[0] == '\0') || (((ulonglong)pppplVar28[0x12] & 8) != 0)) ||
            (pppplVar28 == (longlong ****)local_1d8[0][6])) ||
           (uVar11 = *(uint *)(ppppplVar21 + 5), (uVar11 & 2) != 0)) {
          uVar11 = *(uint *)(ppppplVar21 + 5);
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        *(uint *)(ppppplVar21 + 5) = uVar11 & 0xfffffffd;
        if (!bVar6) {
          puVar31 = local_180 + (longlong)local_260[0] * 4;
          for (puVar18 = local_180; puVar18 != puVar31; puVar18 = puVar18 + 4) {
            uVar26 = (ulonglong)local_288 >> 0x20;
            local_288 = CONCAT44((int)uVar26,fVar40);
            cVar8 = (*(code *)(*pppplVar28)[0x8e])(pppplVar28,*puVar18,puVar18[1]);
            if (cVar8 != '\0') {
              bVar6 = true;
              goto LAB_1424251fa;
            }
          }
          if (!bVar1) {
            ppppplVar37 = (longlong *****)(ulonglong)local_264;
            plVar30 = param_1 + 0x13d;
            ppppplVar21[2] = (longlong ****)(double)(fVar39 + *(float *)(param_1 + 0xa9));
            goto LAB_142425394;
          }
        }
LAB_1424251fa:
        FWeakObjectPtr::operator=(&local_188,pppplVar28);
        puVar22 = (uint *)0x0;
        if ((int)local_1d8[0][0x2c1] != *(int *)((longlong)local_1d8[0] + 0x1634)) {
          plVar15 = (longlong *)local_1d8[0][0x2c8];
          if ((longlong *)local_1d8[0][0x2c8] == (longlong *)0x0) {
            plVar15 = local_1d8[0] + 0x2c7;
          }
          iVar9 = *(int *)((longlong)plVar15 +
                          ((longlong)(int)(local_188._4_4_ ^ (uint)local_188) &
                          (longlong)(int)local_1d8[0][0x2c9] - 1U) * 4);
          if (iVar9 != -1) {
            lVar33 = local_1d8[0][0x2c0];
            do {
              lVar25 = (longlong)iVar9;
              if ((*(uint *)(lVar33 + lVar25 * 0x18) == (uint)local_188) &&
                 (*(uint *)(lVar33 + 4 + lVar25 * 0x18) == local_188._4_4_)) {
                if ((((iVar9 != -1) &&
                     ((lVar33 = lVar33 + lVar25 * 0x18, lVar33 != 0 &&
                      (puVar22 = *(uint **)(lVar33 + 8), puVar22 != (uint *)0x0)))) &&
                    (1 < *(byte *)((longlong)pppplVar28 + 0x129))) && ((puVar22[0xc] & 0x84) == 0))
                {
                  (**(code **)(*(longlong *)puVar22 + 0x2d8))(puVar22);
                }
                break;
              }
              iVar9 = *(int *)(lVar33 + 0x10 + lVar25 * 0x18);
            } while (iVar9 != -1);
          }
        }
        local_1c8 = (longlong *******)((ulonglong)local_1c8 & 0xffffffff00000000);
        uStack_1b0 = 0;
        uStack_1c0 = ppppplVar21;
        uStack_1b8 = puVar22;
        if ((char)param_1[0x13f] != '\0') {
          if (puVar22 == (uint *)0x0) {
            dVar3 = (double)*(float *)((longlong)param_1 + 0x6c);
          }
          else {
            dVar3 = (double)*(float *)(param_1 + 0x2e) - *(double *)(puVar22 + 0x20);
          }
          local_278 = (float)dVar3;
          local_288 = local_120;
          local_280 = puVar22;
          fVar42 = (float)(*(code *)(*pppplVar28)[0x7b])(pppplVar28,&local_130,&local_140);
          local_1c8 = (longlong *******)
                      CONCAT44(local_1c8._4_4_,
                               (int)ROUND(fVar42 * 65536.0 + fVar42 * 65536.0 + 0.5) >> 1);
        }
        plVar30 = param_1 + 0x13d;
        iVar9 = (int)param_1[0x13e];
        *(int *)(param_1 + 0x13e) = iVar9 + 1;
        if (*(int *)((longlong)param_1 + 0x9f4) < iVar9 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(plVar30,iVar9);
        }
        lVar33 = *plVar30;
        ppppplVar37 = (longlong *****)(ulonglong)local_264;
        puVar20 = (undefined4 *)((longlong)iVar9 * 0x20 + lVar33);
        *puVar20 = (undefined4)local_1c8;
        puVar20[1] = local_1c8._4_4_;
        puVar20[2] = (undefined4)uStack_1c0;
        puVar20[3] = uStack_1c0._4_4_;
        plVar15 = (longlong *)((longlong)iVar9 * 0x20 + 0x10 + lVar33);
        *plVar15 = (longlong)uStack_1b8;
        plVar15[1] = uStack_1b0;
        if (bVar6) {
          *(int *)((longlong)ppppplVar21 + 0x24) = (int)param_1[0x2e];
        }
      }
      else {
        local_264 = iVar9 + 1;
        puStack_1f8 = (uint *)CONCAT44(puStack_1f8._4_4_,local_264);
        if ((int)ppppplVar32 < (int)local_264) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_200,ppppplVar37);
          local_264 = (uint)puStack_1f8;
        }
        ppppplVar37 = (longlong *****)(ulonglong)local_264;
        local_200[iVar9] = pppplVar28;
        plVar30 = param_1 + 0x13d;
      }
    }
LAB_142425394:
    ppppplVar21 = local_200;
    auStack_158._0_4_ = auStack_158._0_4_ & ~uStack_168._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_168);
    ppppplVar32 = (longlong *****)((ulonglong)puStack_1f8 >> 0x20);
  }
  local_210 = (longlong *******)(local_1d8[0] + 0x2cb);
  iVar12 = (int)local_1d8[0][0x2d0];
  local_160 = (uint *)(local_1d8[0] + 0x2cd);
  local_238 = (longlong *******)0x100000000;
  local_228._4_4_ = 0;
  uStack_220 = 0;
  if (iVar12 != 0) {
    puVar22 = (uint *)local_1d8[0][0x2cf];
    if ((uint *)local_1d8[0][0x2cf] == (uint *)0x0) {
      puVar22 = local_160;
    }
    uVar11 = *puVar22;
    iVar13 = 0;
    while (uVar11 == 0) {
      uStack_220 = uStack_220 + 0x20;
      local_238._4_4_ = (undefined4)((ulonglong)local_238 >> 0x20);
      local_238 = (longlong *******)CONCAT44(local_238._4_4_,iVar13 + 1);
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar13) goto LAB_142425491;
      uVar11 = puVar22[(longlong)iVar13 + 1];
      iVar13 = iVar13 + 1;
    }
    uVar11 = -uVar11 & uVar11;
    iVar13 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    local_238 = (longlong *******)CONCAT44(uVar11,(undefined4)local_238);
    if (uVar11 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    local_228._4_4_ = (uStack_220 - iVar13) + 0x1f;
    if (iVar12 < local_228._4_4_) {
LAB_142425491:
      local_228._4_4_ = iVar12;
    }
  }
  auStack_158._4_4_ = local_228._4_4_;
  auStack_158._0_4_ = 0xffffffff;
  auStack_158._8_4_ = uStack_220;
  auStack_158._12_4_ = iStack_21c;
  uStack_168 = (longlong *****)local_238;
  uStack_230 = (longlong *****)local_238;
  local_218 = uStack_220;
  iStack_214 = iStack_21c;
  uStack_220 = 0xffffffff;
  iStack_21c = local_228._4_4_;
  bVar1 = local_228._4_4_ < iVar12;
  local_238 = local_210;
  local_170 = local_210;
  local_228 = local_160;
  if (bVar1) {
    do {
      if ((int)param_1[0x4d] != *(int *)((longlong)param_1 + 0x294)) {
        iVar12 = *(int *)((longlong)*local_238 + (longlong)iStack_21c * 0xc);
        plVar15 = (longlong *)param_1[0x54];
        if ((longlong *)param_1[0x54] == (longlong *)0x0) {
          plVar15 = param_1 + 0x53;
        }
        iVar13 = *(int *)((longlong)plVar15 +
                         ((longlong)(int)param_1[0x55] - 1U & (longlong)iVar12) * 4);
        if (iVar13 != -1) {
          do {
            lVar33 = param_1[0x4c] + (longlong)iVar13 * 0x18;
            if (*(int *)(param_1[0x4c] + (longlong)iVar13 * 0x18) == iVar12) {
              if (iVar13 != -1) goto LAB_142425573;
              break;
            }
            iVar13 = *(int *)(lVar33 + 0x10);
          } while (iVar13 != -1);
        }
      }
      lVar33 = 0;
LAB_142425573:
      uStack_1b0 = *(longlong *)(lVar33 + 8);
      iVar12 = (int)plVar30[1];
      local_1c8 = (longlong *******)((ulonglong)local_1c8 & 0xffffffff00000000);
      uStack_1c0 = (longlong *****)0x0;
      uStack_1b8 = (uint *)0x0;
      *(int *)(plVar30 + 1) = iVar12 + 1;
      if (*(int *)((longlong)plVar30 + 0xc) < iVar12 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar30,iVar12);
      }
      lVar33 = *plVar30;
      puVar20 = (undefined4 *)((longlong)iVar12 * 0x20 + lVar33);
      *puVar20 = (undefined4)local_1c8;
      puVar20[1] = local_1c8._4_4_;
      puVar20[2] = (undefined4)uStack_1c0;
      puVar20[3] = uStack_1c0._4_4_;
      puVar20 = (undefined4 *)((longlong)iVar12 * 0x20 + 0x10 + lVar33);
      *puVar20 = (undefined4)uStack_1b8;
      puVar20[1] = uStack_1b8._4_4_;
      puVar20[2] = (uint)uStack_1b0;
      puVar20[3] = uStack_1b0._4_4_;
      uStack_220 = uStack_220 & ~uStack_230._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_230);
    } while (iStack_21c < (int)local_228[6]);
  }
  plVar15 = local_1d8[0];
  uVar19 = 0;
  uVar26 = (ulonglong)((longlong)(ppppplVar21 + iVar9) + (7 - (longlong)ppppplVar21)) >> 3;
  if (ppppplVar21 + iVar9 < ppppplVar21) {
    uVar26 = uVar19;
  }
  uVar16 = uVar19;
  ppppplVar32 = ppppplVar21;
  if (uVar26 != 0) {
    do {
      FUN_1425cb270(param_1,*ppppplVar32);
      uVar16 = uVar16 + 1;
      ppppplVar32 = ppppplVar32 + 1;
    } while (uVar16 != uVar26);
  }
  if ((char)param_1[0x13f] != '\0') {
    AlgoImpl::
    IntroSortInternal<FActorPriority,FIdentityFunctor,TDereferenceWrapper<FActorPriority,FCompareFActorPriority>_>
              (param_1[0x13d],(longlong)(int)param_1[0x13e],local_268[0],local_268);
  }
  if (ppppplVar21 != (longlong *****)0x0) {
    FMemory::Free(ppppplVar21);
  }
  if (local_180 != (undefined8 *)0x0) {
    FMemory::Free(local_180);
  }
  lVar33 = DAT_146af2610;
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  uVar26 = uVar19;
  if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar10 = GetCurrentThreadId();
    if (DVar10 != DAT_1468c21c0) {
      uVar26 = 4;
    }
  }
  lVar25 = DAT_146af2550;
  local_238 = (longlong *******)CONCAT71(local_238._1_7_,0 < *(int *)(uVar26 + lVar33));
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar10 = GetCurrentThreadId();
    uVar26 = 4;
    if (DVar10 == DAT_1468c21c0) goto LAB_1424256f5;
  }
  else {
LAB_1424256f5:
    uVar26 = uVar19;
  }
  lVar33 = DAT_146af24a8;
  fVar40 = *(float *)(uVar26 + lVar25);
  local_238 = (longlong *******)CONCAT44(fVar40,(undefined4)local_238);
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar10 = GetCurrentThreadId();
    uVar26 = 4;
    if (DVar10 == DAT_1468c21c0) goto LAB_142425739;
  }
  else {
LAB_142425739:
    uVar26 = uVar19;
  }
  fVar39 = *(float *)(uVar26 + lVar33);
  if (fVar39 < fVar40) {
    local_238 = (longlong *******)CONCAT44(fVar39,(undefined4)local_238);
    fVar39 = fVar40;
  }
  uStack_230 = (longlong *****)CONCAT44(param_2,fVar39);
  pppplVar28 = (longlong ****)param_1[0x13d];
  if ((char)param_1[0x15c] == '\0') {
    pppplVar38 = pppplVar28 + (longlong)(int)param_1[0x13e] * 4;
    local_228 = (uint *)dVar4;
    for (; pppplVar28 != pppplVar38; pppplVar28 = pppplVar28 + 4) {
      cVar8 = FUN_14241e000(param_1,pppplVar28,&local_238);
      if (cVar8 == '\0') break;
    }
  }
  else {
    local_108 = (longlong ******)0x0;
    local_100 = 0;
    local_e0 = 0;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    pppplVar38 = pppplVar28 + (longlong)(int)param_1[0x13e] * 4;
    local_e8 = 0;
    local_d8 = 0xffffffff;
    local_e0._0_4_ = 0;
    if (pppplVar28 != pppplVar38) {
      do {
        local_228 = (uint *)dVar4;
        if (pppplVar28[3] == (longlong ***)0x0) {
          local_258 = (longlong *******)AActor::GetLevel(*pppplVar28[1]);
        }
        else {
          local_258 = (longlong *******)FWeakObjectPtr::Get();
        }
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(&local_108,local_260,local_258);
        if ((local_260[0] == -1) ||
           (pppppplVar23 = local_108 + (longlong)local_260[0] * 4,
           pppppplVar23 == (longlong ******)0x0)) {
          local_208.QuadPart = (LONGLONG)&local_258;
          FUN_1407b9130(&local_108,&local_264,&local_208,0);
          pppppplVar23 = local_108 + (longlong)(int)local_264 * 4;
        }
        iVar9 = *(int *)(pppppplVar23 + 2);
        *(int *)(pppppplVar23 + 2) = iVar9 + 1;
        dVar4 = (double)local_228;
        if (*(int *)((longlong)pppppplVar23 + 0x14) < iVar9 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(pppppplVar23 + 1,iVar9);
          dVar4 = (double)local_228;
        }
        pppppplVar23[1][iVar9] = pppplVar28;
        pppplVar28 = pppplVar28 + 4;
      } while (pppplVar28 != pppplVar38);
    }
    puVar22 = (uint *)0x0;
    local_200 = (longlong *****)0x100000000;
    puStack_1f8 = local_f8;
    cVar8 = '\x01';
    iStack_1ec = 0;
    uStack_1e8 = 0;
    if ((int)local_e0 != 0) {
      puVar36 = local_f8;
      if (local_e8 != 0) {
        puVar36 = puVar22;
      }
      uVar11 = *(uint *)((ulonglong)puVar36 | local_e8);
      puVar34 = puVar22;
      while (uVar11 == 0) {
        iVar9 = (int)puVar22;
        uStack_1e8 = (int)puVar34 + 0x20;
        puVar34 = (uint *)(ulonglong)uStack_1e8;
        puVar22 = (uint *)(ulonglong)(iVar9 + 1U);
        uVar26 = (ulonglong)local_200 >> 0x20;
        local_200 = (longlong *****)CONCAT44((int)uVar26,iVar9 + 1U);
        iStack_1ec = (int)local_e0;
        if ((int)((int)local_e0 + -1 + ((int)local_e0 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_142425957;
        uVar11 = ((uint *)((ulonglong)puVar36 | local_e8))[(longlong)iVar9 + 1];
      }
      uVar11 = -uVar11 & uVar11;
      iVar9 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      local_200 = (longlong *****)CONCAT44(uVar11,SUB84(local_200,0));
      if (uVar11 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_1ec = (uStack_1e8 - iVar9) + 0x1f;
      if ((int)local_e0 < iStack_1ec) {
        iStack_1ec = (int)local_e0;
      }
    }
LAB_142425957:
    local_1f0 = 0xffffffff;
    uStack_1b0 = CONCAT44(iStack_1ec,0xffffffff);
    auStack_158._8_4_ = uStack_1e8;
    auStack_158._0_8_ = uStack_1b0;
    auStack_158._12_4_ = uStack_1e4;
    local_1c8 = &local_108;
    local_190 = 0;
    uStack_168 = local_200;
    local_198 = (longlong ******)&local_108;
    uStack_148._0_4_ = SUB84(&local_108,0);
    uStack_148._4_4_ = (undefined4)((ulonglong)&local_108 >> 0x20);
    uStack_1c0 = local_200;
    auStack_1a8._8_4_ = (undefined4)uStack_148;
    auStack_1a8._0_8_ = auStack_158._8_8_;
    auStack_1a8._12_4_ = uStack_148._4_4_;
    iVar9 = iStack_1ec;
    uStack_1b8 = puStack_1f8;
    local_170 = local_1c8;
    local_160 = puStack_1f8;
    uStack_148 = (longlong ******)&local_108;
    local_228 = (uint *)dVar4;
    if (iStack_1ec < (int)local_e0) {
      do {
        ppppppplVar7 = local_1c8;
        local_228 = (uint *)dVar4;
        if (cVar8 == '\0') break;
        lVar33 = (longlong)iVar9;
        FUN_142409610(param_1,&local_258,(*local_1c8)[lVar33 * 4]);
        cVar8 = '\x01';
        ppppplVar21 = (*ppppppplVar7)[lVar33 * 4 + 1];
        ppppplVar32 = ppppplVar21 + *(int *)(*ppppppplVar7 + lVar33 * 4 + 2);
        for (; ppppplVar21 != ppppplVar32; ppppplVar21 = ppppplVar21 + 1) {
          cVar8 = FUN_14241e000(param_1,*ppppplVar21,&local_238);
          if (cVar8 == '\0') break;
        }
        ppppppplVar7 = local_258;
        if (local_258 != (longlong *******)0x0) {
          (*(code *)(**local_258)[0x59])(*local_258,0);
          pppppplVar23 = ppppppplVar7[1];
          uVar26 = (ulonglong)*(int *)((longlong)ppppppplVar7 + 0x14);
          if (*(int *)((longlong)ppppppplVar7 + 0x14) < *(int *)(pppppplVar23 + 1)) {
            lVar33 = uVar26 * 0x18;
            do {
              uVar11 = (int)uVar26 + 1;
              uVar26 = (ulonglong)uVar11;
              *(undefined4 *)((longlong)*pppppplVar23 + lVar33 + 0x14) =
                   *(undefined4 *)(ppppppplVar7 + 2);
              pppppplVar23 = ppppppplVar7[1];
              lVar33 = lVar33 + 0x18;
            } while ((int)uVar11 < *(int *)(pppppplVar23 + 1));
          }
          FMemory::operator_delete(ppppppplVar7,0x18);
        }
        uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(uint)uStack_1b0 & ~uStack_1c0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1c0);
        iVar9 = uStack_1b0._4_4_;
        dVar4 = (double)local_228;
      } while (uStack_1b0._4_4_ < (int)uStack_1b8[6]);
      if (((char)local_190 != '\0') && (local_190._1_1_ != '\0')) {
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_198,*(int *)(local_198 + 1) - *(int *)((longlong)local_198 + 0x34)
                            ,1);
      }
    }
    local_c0 = 0;
    if (local_c8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_108);
  }
  (**(code **)(*plVar15 + 0x2c8))(plVar15,0);
  FUN_142427bd0(param_1,local_118,plVar15 + 0x32e,(int)param_1[0xa9]);
  lVar33 = DAT_146af2598;
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar10 = GetCurrentThreadId();
    lVar25 = 4;
    if (DVar10 == DAT_1468c21c0) goto LAB_142425ba6;
  }
  else {
LAB_142425ba6:
    lVar25 = 0;
  }
  if (*(int *)(lVar33 + lVar25) == 1) {
    cVar8 = (**(code **)(*param_1 + 0x408))(param_1);
    if (cVar8 != '\0') {
      FUN_14241f400(param_1);
    }
  }
LAB_142425be0:
  uVar14 = FUN_14168db40();
  FCsvProfiler::EndStat(uVar14,"DemoRecordTime",local_1e0);
  return;
}



// FUNCTION 142425c20 FUN_142425c20 body=811 status=ok
// SIG undefined FUN_142425c20(void)

void FUN_142425c20(longlong param_1,float param_2)

{
  byte *pbVar1;
  float fVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined1 local_38 [48];
  
  lVar8 = *(longlong *)(param_1 + 0xd0);
  if (lVar8 != 0) {
    lVar11 = *(longlong *)(lVar8 + 0x170);
    for (lVar7 = lVar11; lVar7 != (longlong)*(int *)(lVar8 + 0x178) * 0x80 + lVar11;
        lVar7 = lVar7 + 0x80) {
      if (*(longlong *)(lVar7 + 0x18) == param_1) {
        uVar13 = (undefined4)(lVar7 - lVar11 >> 7);
        goto LAB_142425c74;
      }
    }
  }
  uVar13 = 0xffffffff;
LAB_142425c74:
  FScopedLevelCollectionContextSwitch::FScopedLevelCollectionContextSwitch(local_38,uVar13);
  FUN_1425d2d00(param_1,param_2);
  if ((*(char *)(param_1 + 0x89c) == '\0') &&
     ((*(longlong *)(param_1 + 0x90) == 0 || (*(int *)(*(longlong *)(param_1 + 0x90) + 300) == 1))))
  {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar4) && (*(char *)(param_1 + 0xb61) == '\0')) {
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x1c0))();
    if ((iVar6 == 0) &&
       (lVar8 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x30))(), lVar8 != 0)) {
      if (*(char *)(param_1 + 0xae0) == '\0') {
        plVar12 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x88);
        plVar10 = plVar12 + *(int *)(*(longlong *)(param_1 + 0xd0) + 0x90);
        for (; plVar12 != plVar10; plVar12 = plVar12 + 1) {
          plVar3 = (longlong *)*plVar12;
          if ((plVar3 != (longlong *)0x0) &&
             (cVar5 = (**(code **)(*plVar3 + 0x280))(plVar3), cVar5 != '\0')) {
            if (plVar3[0x24] == 0) goto LAB_142425f27;
            uVar9 = UObjectBaseUtility::GetOutermost();
            cVar5 = UPackage::IsFullyLoaded(uVar9);
            if ((cVar5 == '\0') || (cVar5 = ULevelStreaming::IsLevelVisible(plVar3), cVar5 == '\0'))
            goto LAB_142425f27;
          }
        }
      }
      fVar2 = *DAT_146af2568;
      if (0.0 <= fVar2) {
        lVar8 = UWorld::GetWorldSettings(*(undefined8 *)(param_1 + 0xd0),0,1);
        *(float *)(lVar8 + 0x5e8) = fVar2;
      }
      plVar10 = (longlong *)UWorld::GetWorldSettings(*(undefined8 *)(param_1 + 0xd0),0,1);
      uVar13 = (**(code **)(*plVar10 + 0x6f8))
                         (plVar10,*(float *)((longlong)plVar10 + 0x5e4) * *(float *)(plVar10 + 0xbc)
                                  * *(float *)(plVar10 + 0xbd) * param_2,param_2);
      if (*(longlong *)(param_1 + 0x560) != 0) {
        lVar8 = UWorld::GetWorldSettings(*(undefined8 *)(param_1 + 0xd0),0,1);
        if (*(float *)(lVar8 + 0x5e8) <= 0.0001) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x560) + 0xd0) = 0x3f800000;
        }
        else {
          lVar8 = UWorld::GetWorldSettings(*(undefined8 *)(param_1 + 0xd0),0,1);
          *(float *)(*(longlong *)(param_1 + 0x560) + 0xd0) = 1.0 / *(float *)(lVar8 + 0x5e8);
        }
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x560) + 0x7b8);
        if (lVar8 != 0) {
          *(undefined4 *)(lVar8 + 0xd0) = *(undefined4 *)(*(longlong *)(param_1 + 0x560) + 0xd0);
          pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x560) + 0x7b8) + 0x34);
          *pbVar1 = *pbVar1 | 1;
          lVar8 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x560) + 0x7b8) + 0x6e8))();
          if (lVar8 != 0) {
            lVar11 = UUGPlayerInputComponent::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              *(byte *)(lVar8 + 0x3c) = *(byte *)(lVar8 + 0x3c) | 1;
            }
          }
        }
      }
      FUN_142424190(param_1,uVar13);
      uVar13 = FEngineVersionBase::GetChangelist(param_1 + 0x990);
      FUN_142409750(uVar13,*(undefined4 *)(param_1 + 0xad8));
    }
    else {
      FUN_142419e60(param_1,0);
    }
  }
LAB_142425f27:
  FScopedLevelCollectionContextSwitch::~FScopedLevelCollectionContextSwitch(local_38);
  return;
}



// FUNCTION 142425f50 TickFlush body=48 status=ok
// SIG undefined TickFlush(void)

void UDemoNetDriver::TickFlush(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_142422b30();
  if (cVar1 == '\0') {
    FUN_142425fb0(param_1,param_2);
  }
  return;
}



// FUNCTION 142425f80 TickFlushAsyncEndOfFrame body=48 status=ok
// SIG undefined TickFlushAsyncEndOfFrame(void)

void UDemoNetDriver::TickFlushAsyncEndOfFrame(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_142422b30();
  if (cVar1 != '\0') {
    FUN_142425fb0(param_1,param_2);
  }
  return;
}



// FUNCTION 142425fb0 FUN_142425fb0 body=652 status=ok
// SIG undefined FUN_142425fb0(void)

void FUN_142425fb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  double dVar10;
  LARGE_INTEGER local_res8 [4];
  undefined1 local_58 [80];
  
  DAT_146af2460 = 0.0;
  QueryPerformanceCounter(local_res8);
  lVar8 = *(longlong *)(param_1 + 0xd0);
  dVar3 = (double)local_res8[0].QuadPart * DAT_1468b02f8;
  if (lVar8 != 0) {
    lVar1 = *(longlong *)(lVar8 + 0x170);
    for (lVar7 = lVar1; lVar7 != (longlong)*(int *)(lVar8 + 0x178) * 0x80 + lVar1;
        lVar7 = lVar7 + 0x80) {
      if (*(longlong *)(lVar7 + 0x18) == param_1) {
        uVar6 = (undefined4)(lVar7 - lVar1 >> 7);
        goto LAB_14242603a;
      }
    }
  }
  uVar6 = 0xffffffff;
LAB_14242603a:
  FScopedLevelCollectionContextSwitch::FScopedLevelCollectionContextSwitch(local_58,uVar6);
  FUN_1425d2db0(param_1,param_2);
  if ((((*(int *)(param_1 + 0xa0) < 1) || (**(longlong **)(param_1 + 0x98) == 0)) ||
      (*(int *)(**(longlong **)(param_1 + 0x98) + 300) == 1)) ||
     (*(char *)(param_1 + 0xb61) != '\0')) goto LAB_1424261e4;
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x1c0))();
  if (iVar5 == 0) {
    if (*(char *)(param_1 + 0x9f9) != '\0') goto LAB_1424261e4;
    lVar8 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x30))();
    if (lVar8 != 0) {
      QueryPerformanceCounter(local_res8);
      dVar2 = (double)local_res8[0].QuadPart * DAT_1468b02f8;
      FUN_1424247a0(param_1,param_2);
      QueryPerformanceCounter(local_res8);
      dVar4 = (double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0;
      dVar2 = dVar4 - (dVar2 + 16777216.0);
      uVar9 = FEngineVersion::Current();
      uVar6 = FEngineVersionBase::GetChangelist(uVar9);
      FUN_142409750(uVar6,*(undefined4 *)(param_1 + 0x548));
      dVar10 = *(double *)(param_1 + 0x588);
      if (*(double *)(param_1 + 0x588) <= dVar2) {
        dVar10 = dVar2;
      }
      iVar5 = *(int *)(param_1 + 0x590) + 1;
      *(int *)(param_1 + 0x590) = iVar5;
      *(double *)(param_1 + 0x588) = dVar10;
      *(double *)(param_1 + 0x578) = dVar2 + *(double *)(param_1 + 0x578);
      if ((2.0 < dVar4 - *(double *)(param_1 + 0x580)) && (0 < iVar5)) {
        *(double *)(param_1 + 0x580) = dVar4;
        *(undefined8 *)(param_1 + 0x578) = 0;
        *(undefined8 *)(param_1 + 0x588) = 0;
        *(undefined4 *)(param_1 + 0x590) = 0;
      }
      goto LAB_1424261e4;
    }
  }
  FUN_142423360(param_1);
LAB_1424261e4:
  FScopedLevelCollectionContextSwitch::~FScopedLevelCollectionContextSwitch(local_58);
  QueryPerformanceCounter(local_res8);
  DAT_146af2460 = DAT_146af2460 + ((double)local_res8[0].QuadPart * DAT_1468b02f8 - dVar3);
  return;
}



// FUNCTION 142426240 ToString body=59 status=ok
// SIG undefined ToString(void)

wchar_t * EDemoPlayFailure::ToString(int param_1)

{
  if (param_1 == 0) {
    return L"Gneric";
  }
  if (param_1 == 1) {
    return L"DemoNotFound";
  }
  if (param_1 == 2) {
    return L"Corrupt";
  }
  if (param_1 != 3) {
    return L"Unknown EDemoPlayFailure error occurred.";
  }
  return L"InvalidVersion";
}



// FUNCTION 142426280 TrackActor body=97 status=ok
// SIG undefined TrackActor(void)

void `UDemoNetDriver::FastForwardLevels'::`2'::FDynamicActorTracker::TrackActor
               (longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  if (param_2 != 0) {
    uVar1 = AActor::GetLevel(param_2);
    piVar2 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                              (param_1 + 8,local_res10,uVar1);
    if (*piVar2 != -1) {
      FWeakObjectPtr::operator=(local_res18,param_2);
      FUN_142400b00(*(undefined8 *)(param_1 + 0x58),local_res10,local_res18,0);
    }
  }
  return;
}



// FUNCTION 1424262f0 TryGetDistributionObjectFromRawDistributionProperty body=63 status=ok
// SIG undefined TryGetDistributionObjectFromRawDistributionProperty(void)

undefined8
FRawDistribution::TryGetDistributionObjectFromRawDistributionProperty
          (longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
  if (lVar1 == 0x194) {
    return *(undefined8 *)((longlong)*(int *)(param_1 + 0x44) + 0x30 + param_2);
  }
  if (lVar1 == 0x195) {
    return *(undefined8 *)((longlong)*(int *)(param_1 + 0x44) + 0x48 + param_2);
  }
  return 0;
}



// FUNCTION 142426330 FUN_142426330 body=76 status=ok
// SIG undefined FUN_142426330(void)

void FUN_142426330(longlong *param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
                    /* WARNING: Could not recover jumptable at 0x000142426375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x800))
            (param_1,param_2 * *(float *)(param_1 + 0x98) * *(float *)(lVar1 + 0x7b0) *
                     *(float *)(param_1 + 0x1a));
  return;
}



// FUNCTION 142426380 FUN_142426380 body=3580 status=ok
// SIG undefined FUN_142426380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142426380(LARGE_INTEGER param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined2 uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  bool bVar24;
  undefined1 auStack_2e8 [32];
  undefined4 *local_2c8;
  undefined4 *local_2c0;
  int local_2b8;
  longlong *local_2b0;
  undefined4 local_2a8;
  undefined8 *local_2a0;
  undefined1 local_298;
  undefined1 local_297 [3];
  int local_294;
  undefined8 local_288;
  int local_278;
  longlong local_270;
  int local_268;
  int local_264;
  longlong local_260;
  longlong *local_258;
  undefined8 local_250;
  int local_248;
  int local_244;
  int local_240;
  longlong *local_238;
  longlong local_230;
  LARGE_INTEGER local_228 [2];
  LARGE_INTEGER local_218;
  LARGE_INTEGER local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  DWORD local_1e8;
  int local_1e4;
  int local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8 [48];
  int local_178;
  int local_174;
  longlong local_170;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined8 local_c8 [15];
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  if ((*(int *)(param_1.QuadPart + 0xe0) < 1) && (DAT_146af2468 == 0)) {
    return;
  }
  local_218 = param_1;
  QueryPerformanceCounter(&local_208);
  plVar17 = (longlong *)(param_1.QuadPart + 0xd8);
  local_1b0 = plVar17;
  AlgoImpl::
  IntroSortInternal<FDistanceFieldVolumeTexture_*,FIdentityFunctor,TDereferenceWrapper<FDistanceFieldVolumeTexture_*,FCompareVolumeAllocation>_>
            (*plVar17,(longlong)*(int *)(param_1.QuadPart + 0xe0),local_298,&local_298);
  uVar13 = 0;
  if (0 < *(int *)(param_1.QuadPart + 0xe0)) {
    lVar21 = 0;
    uVar22 = uVar13;
    iVar19 = 0;
    do {
      iVar11 = (int)uVar22;
      plVar9 = *(longlong **)(lVar21 + *plVar17);
      local_2b8 = *(int *)(*plVar9 + 0x20);
      local_288 = *(longlong *)(*plVar9 + 0x18);
      local_2c0 = (undefined4 *)CONCAT44(local_2c0._4_4_,(int)((ulonglong)local_288 >> 0x20));
      local_2c8 = (undefined4 *)CONCAT44(local_2c8._4_4_,(int)local_288);
      cVar4 = FTextureLayout3d::AddElement
                        (param_1.QuadPart + 0x40,plVar9 + 1,(longlong)plVar9 + 0xc,plVar9 + 2);
      iVar12 = iVar19 + 1;
      if (cVar4 == '\0') {
        iVar12 = *(int *)(param_1.QuadPart + 0xe0);
        iVar5 = (iVar12 - iVar11) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar17 + (longlong)iVar11 * 8),
                     (void *)(*plVar17 + (longlong)(iVar19 + 1) * 8),(longlong)iVar5 << 3);
          iVar12 = *(int *)(param_1.QuadPart + 0xe0);
        }
        *(int *)(param_1.QuadPart + 0xe0) = iVar12 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar17);
        iVar11 = iVar11 + -1;
        lVar21 = lVar21 + -8;
        iVar12 = iVar19;
      }
      uVar22 = (ulonglong)(iVar11 + 1U);
      lVar21 = lVar21 + 8;
      iVar19 = iVar12;
    } while ((int)(iVar11 + 1U) < *(int *)(param_1.QuadPart + 0xe0));
  }
  lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar21 + 0x38) < DAT_146af2990) &&
     (_Init_thread_header(&DAT_146af2990), DAT_146af2990 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DistanceFieldBuild.Compress");
    uVar22 = uVar13;
    if (plVar9 != (longlong *)0x0) {
      uVar22 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146af2988 = uVar22;
    _Init_thread_footer(&DAT_146af2990);
  }
  uVar22 = DAT_146af2988;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    uVar7 = 4;
    if (DVar6 == DAT_1468c21c0) goto LAB_142426531;
  }
  else {
LAB_142426531:
    uVar7 = uVar13;
  }
  local_248 = *(int *)(uVar7 + uVar22);
  local_294 = (&DAT_1464ca1c4)[(longlong)*(int *)(param_1.QuadPart + 0x30) * 10];
  lVar10 = *(longlong *)(param_1.QuadPart + 0x38);
  if ((((lVar10 != 0) && (*(uint *)(param_1.QuadPart + 0x40) <= *(uint *)(lVar10 + 0x60))) &&
      (*(uint *)(param_1.QuadPart + 0x44) <= *(uint *)(lVar10 + 100))) &&
     ((*(uint *)(param_1.QuadPart + 0x48) <= *(uint *)(lVar10 + 0x68) && (DAT_146af2468 == 0)))) {
    if (0 < *(int *)(param_1.QuadPart + 0xe0)) {
      lVar21 = 0;
      do {
        local_238 = *(longlong **)(lVar21 + *plVar17);
        local_1f8 = (undefined4)local_238[2];
        local_228[0] = (LARGE_INTEGER)*(LARGE_INTEGER *)&((LARGE_INTEGER *)(*local_238 + 0x18))->s;
        local_1e0 = *(int *)(*local_238 + 0x20);
        uVar2 = local_228[0].s.LowPart;
        local_1e4 = local_228[0].s.HighPart;
        local_288 = local_238[1];
        local_200 = (int)local_288;
        local_1fc = (undefined4)((ulonglong)local_288 >> 0x20);
        local_1f4 = (undefined4)_DAT_1468b5ca8;
        local_1f0 = (undefined4)((ulonglong)_DAT_1468b5ca8 >> 0x20);
        local_1ec = DAT_1468b5cb0;
        local_1e8 = local_228[0].s.LowPart;
        iVar19 = local_1e4 * local_1e0 * local_228[0].s.LowPart * local_294;
        local_218 = local_228[0];
        if (local_248 == 0) {
          local_2b0 = *(longlong **)(*local_238 + 8);
          local_2c8 = &local_200;
          local_2b8 = local_1e4 * local_228[0].s.LowPart * local_294;
          local_2c0 = (undefined4 *)CONCAT44(local_2c0._4_4_,local_228[0].s.LowPart * local_294);
          (**(code **)(*DAT_146ab6358 + 0x5b8))
                    (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1.QuadPart + 0x38),0);
        }
        else {
          iVar11 = 0;
          local_258 = (longlong *)0x0;
          local_250 = 0;
          iVar12 = 0;
          if (iVar19 != 0) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_258,iVar19);
            iVar11 = (int)local_250;
            iVar12 = local_250._4_4_;
          }
          local_250 = CONCAT44(local_250._4_4_,iVar11 + iVar19);
          if (iVar12 < iVar11 + iVar19) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_258);
          }
          plVar9 = local_258;
          local_2b8 = 0xf;
          local_2c0 = (undefined4 *)((ulonglong)local_2c0 & 0xffffffffffffff00);
          local_2c8 = (undefined4 *)CONCAT44(local_2c8._4_4_,*(undefined4 *)(*local_238 + 0x10));
          FUN_14165b8a0(1,local_258,iVar19,*(undefined8 *)(*local_238 + 8));
          local_2b8 = local_228[0].s.HighPart * uVar2 * local_294;
          local_2c8 = &local_200;
          local_2c0 = (undefined4 *)CONCAT44(local_2c0._4_4_,uVar2 * local_294);
          local_2b0 = plVar9;
          (**(code **)(*DAT_146ab6358 + 0x5b8))
                    (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1.QuadPart + 0x38),0);
          if (plVar9 != (longlong *)0x0) {
            FMemory::Free(plVar9);
          }
        }
        uVar23 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar23;
        lVar21 = lVar21 + 8;
      } while ((int)uVar23 < *(int *)(param_1.QuadPart + 0xe0));
    }
    goto LAB_142426f7d;
  }
  if (0 < *(int *)(param_1.QuadPart + 0xf0)) {
    if ((*(int *)(lVar21 + 0x38) < DAT_146af29a0) &&
       (_Init_thread_header(&DAT_146af29a0), DAT_146af29a0 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar9 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DistanceFields.AtlasSizeXY");
      uVar22 = uVar13;
      if (plVar9 != (longlong *)0x0) {
        uVar22 = (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      DAT_146af2998 = uVar22;
      _Init_thread_footer(&DAT_146af29a0);
    }
    uVar22 = DAT_146af2998;
    cVar4 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar6 = GetCurrentThreadId();
      uVar7 = 4;
      if (DVar6 == DAT_1468c21c0) goto LAB_1424267e9;
    }
    else {
LAB_1424267e9:
      uVar7 = uVar13;
    }
    uVar2 = *(undefined4 *)(uVar7 + uVar22);
    if ((*(int *)(lVar21 + 0x38) < DAT_146af29b0) &&
       (_Init_thread_header(&DAT_146af29b0), DAT_146af29b0 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar9 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DistanceFields.AtlasSizeZ");
      uVar22 = uVar13;
      if (plVar9 != (longlong *)0x0) {
        uVar22 = (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      DAT_146af29a8 = uVar22;
      _Init_thread_footer(&DAT_146af29b0);
    }
    uVar22 = DAT_146af29a8;
    cVar4 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar6 = GetCurrentThreadId(), uVar7 = 4, DVar6 == DAT_1468c21c0)) {
      uVar7 = uVar13;
    }
    uVar3 = *(undefined4 *)(uVar22 + uVar7);
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 0;
    local_50 = (undefined8 *)0x0;
    local_48 = 1;
    TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::
    ResizeGrow(local_c8,0);
    puVar8 = local_c8;
    if (local_50 != (undefined8 *)0x0) {
      puVar8 = local_50;
    }
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0xffffffffffffffff;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined2 *)((longlong)puVar8 + 0xc) = 0;
      uVar18 = (undefined2)uVar2;
      *(undefined2 *)((longlong)puVar8 + 0xe) = uVar18;
      *(undefined2 *)(puVar8 + 2) = uVar18;
      *(short *)((longlong)puVar8 + 0x12) = (short)uVar3;
      *(undefined1 *)((longlong)puVar8 + 0x14) = 0;
    }
    puVar8 = local_50;
    *(undefined4 *)(param_1.QuadPart + 0x40) = (undefined4)local_d8;
    *(undefined4 *)(param_1.QuadPart + 0x44) = local_d8._4_4_;
    *(undefined4 *)(param_1.QuadPart + 0x48) = local_d0;
    *(undefined1 *)(param_1.QuadPart + 0x4c) = (undefined1)local_cc;
    *(undefined1 *)(param_1.QuadPart + 0x4d) = local_cc._1_1_;
    if ((undefined8 *)(param_1.QuadPart + 0x50) == local_c8) {
      if (local_50 != (undefined8 *)0x0) {
        FMemory::Free(local_50);
      }
    }
    else {
      if (local_50 == (undefined8 *)0x0) {
        _guard_xfg_dispatch_icall_nop((undefined8 *)(param_1.QuadPart + 0x50),local_c8,0x78);
      }
      if (*(longlong *)(param_1.QuadPart + 200) != 0) {
        FMemory::Free();
        puVar8 = local_50;
      }
      *(undefined8 **)(param_1.QuadPart + 200) = puVar8;
      *(undefined4 *)(param_1.QuadPart + 0xd0) = (undefined4)local_48;
      *(undefined4 *)(param_1.QuadPart + 0xd4) = local_48._4_4_;
    }
    *(int *)(param_1.QuadPart + 0xf8) = *(int *)(param_1.QuadPart + 0xf8) + 1;
    iVar19 = *(int *)(param_1.QuadPart + 0xf0);
    if (iVar19 != 0) {
      iVar12 = *(int *)(param_1.QuadPart + 0xe0);
      if (*(int *)(param_1.QuadPart + 0xe4) < iVar19 + iVar12) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar17);
        iVar12 = *(int *)(param_1.QuadPart + 0xe0);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar17 + (longlong)iVar12 * 8),*(void **)(param_1.QuadPart + 0xe8),
                 (longlong)iVar19 << 3);
      *(int *)(param_1.QuadPart + 0xe0) = *(int *)(param_1.QuadPart + 0xe0) + iVar19;
    }
    uVar13 = 0;
    *(undefined4 *)(param_1.QuadPart + 0xf0) = 0;
    if (*(int *)(param_1.QuadPart + 0xf4) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1.QuadPart + 0xe8,0);
    }
    AlgoImpl::
    IntroSortInternal<FDistanceFieldVolumeTexture_*,FIdentityFunctor,TDereferenceWrapper<FDistanceFieldVolumeTexture_*,FCompareVolumeAllocation>_>
              (*plVar17,(longlong)*(int *)(param_1.QuadPart + 0xe0),local_297[0],local_297);
    if (0 < *(int *)(param_1.QuadPart + 0xe0)) {
      iVar19 = 1;
      uVar22 = uVar13;
      do {
        iVar12 = (int)uVar13;
        plVar9 = *(longlong **)(uVar22 + *plVar17);
        local_2b8 = *(int *)(*plVar9 + 0x20);
        local_288 = *(longlong *)(*plVar9 + 0x18);
        local_2c0 = (undefined4 *)CONCAT44(local_2c0._4_4_,(int)((ulonglong)local_288 >> 0x20));
        local_2c8 = (undefined4 *)CONCAT44(local_2c8._4_4_,(int)local_288);
        cVar4 = FTextureLayout3d::AddElement
                          (param_1.QuadPart + 0x40,plVar9 + 1,(longlong)plVar9 + 0xc,plVar9 + 2);
        if (cVar4 == '\0') {
          iVar11 = *(int *)(param_1.QuadPart + 0xe0);
          iVar5 = (iVar11 - iVar12) + -1;
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar17 + (longlong)iVar12 * 8),
                       (void *)(*plVar17 + (longlong)iVar19 * 8),(longlong)iVar5 << 3);
            iVar11 = *(int *)(param_1.QuadPart + 0xe0);
          }
          *(int *)(param_1.QuadPart + 0xe0) = iVar11 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar17);
          iVar12 = iVar12 + -1;
          iVar19 = iVar19 + -1;
          uVar22 = uVar22 - 8;
        }
        uVar13 = (ulonglong)(iVar12 + 1U);
        iVar19 = iVar19 + 1;
        uVar22 = uVar22 + 8;
      } while ((int)(iVar12 + 1U) < *(int *)(param_1.QuadPart + 0xe0));
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1.QuadPart + 0x38,0);
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  FUN_141ec65b0();
  FUN_141ec6070(0);
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  }
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  (**(code **)(*DAT_146ab6358 + 0x380))();
  lVar21 = 0;
  uVar23 = *(uint *)(param_1.QuadPart + 0x40);
  uVar14 = *(uint *)(param_1.QuadPart + 0x44);
  uVar20 = *(uint *)(param_1.QuadPart + 0x48);
  local_104 = _DAT_1468b5d78;
  uStack_100 = uRam00000001468b5d7c;
  uStack_fc = uRam00000001468b5d80;
  uStack_f8 = uRam00000001468b5d84;
  local_108 = 1;
  local_118 = 0;
  uStack_110 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  iVar19 = (**(code **)(*DAT_146af28a0 + 0x68))();
  if (iVar19 != 0) {
    lVar10 = *(longlong *)(param_1.QuadPart + 200);
    if (*(longlong *)(param_1.QuadPart + 200) == 0) {
      lVar10 = param_1.QuadPart + 0x50;
    }
    uVar23 = (uint)*(ushort *)(lVar10 + 0xe);
    uVar14 = (uint)*(ushort *)(lVar10 + 0x10);
    uVar20 = (uint)*(ushort *)(lVar10 + 0x12);
  }
  local_2a0 = &local_118;
  local_2a8 = 8;
  local_2b0 = (longlong *)CONCAT44(local_2b0._4_4_,1);
  local_2b8 = CONCAT31(local_2b8._1_3_,*(undefined1 *)(param_1.QuadPart + 0x30));
  local_2c0 = (undefined4 *)CONCAT44(local_2c0._4_4_,uVar20);
  local_2c8 = (undefined4 *)CONCAT44(local_2c8._4_4_,uVar14);
  (**(code **)(*DAT_146ab6358 + 0x5f8))(DAT_146ab6358,&local_260,&DAT_146ab6e78,uVar23);
  plVar9 = (longlong *)(param_1.QuadPart + 0x38);
  if (plVar9 != &local_260) {
    puVar8 = (undefined8 *)*plVar9;
    *plVar9 = local_260;
    local_260 = 0;
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar8 + 1);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        if ((*(char *)(puVar8 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar24 = *(int *)((longlong)puVar8 + 0xc) == 0;
          if (bVar24) {
            *(int *)((longlong)puVar8 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar24) {
            uVar23 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar23 != 0) {
              lVar21 = (&DAT_1468a81f8)[uVar23 >> 0xe] + (ulonglong)(uVar23 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar21 + 8) = puVar8;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_260);
  local_1bc = *(undefined4 *)(param_1.QuadPart + 0x44);
  local_1c0 = *(undefined4 *)(param_1.QuadPart + 0x40);
  local_288 = *(longlong *)(param_1.QuadPart + 0x40);
  local_1b8 = *(undefined4 *)(param_1.QuadPart + 0x48);
  local_1d0 = DAT_1468b5cb0;
  local_1c4 = DAT_1468b5cb0;
  local_1d8 = (undefined4)_DAT_1468b5ca8;
  local_2c0 = &local_1d8;
  local_1d4 = (undefined4)((ulonglong)_DAT_1468b5ca8 >> 0x20);
  local_2c8 = (undefined4 *)((ulonglong)local_2c8 & 0xffffffff00000000);
  local_1cc = local_1d8;
  local_1c8 = local_1d4;
  (**(code **)(*DAT_146ab6358 + 0x5a8))(DAT_146ab6358,local_1a8,&DAT_146ab6e78,*plVar9);
  local_270 = 0;
  local_264 = 0;
  local_268 = 0;
  local_278 = 0;
  if (0 < *(int *)(param_1.QuadPart + 0xe0)) {
    local_230 = 0;
    iVar19 = local_294;
    do {
      plVar9 = *(longlong **)(local_230 + *plVar17);
      lVar21 = *plVar9;
      iVar12 = *(int *)(lVar21 + 0x20);
      local_288 = *(longlong *)(lVar21 + 0x18);
      iVar11 = (int)local_288;
      iVar5 = (int)((ulonglong)local_288 >> 0x20) * iVar12 * (int)local_288 * iVar19;
      local_240 = iVar12;
      if (local_248 == 0) {
        local_258 = (longlong *)(lVar21 + 8);
      }
      else {
        iVar19 = 0;
        if ((local_264 < iVar5) && (local_268 = 0, iVar19 = 0, iVar5 != local_264)) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_270,iVar5);
          iVar19 = local_268;
        }
        local_268 = iVar19 + iVar5;
        if (local_264 < local_268) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_270);
        }
        local_2b8 = 0xf;
        local_2c0 = (undefined4 *)((ulonglong)local_2c0 & 0xffffffffffffff00);
        local_2c8 = (undefined4 *)CONCAT44(local_2c8._4_4_,*(undefined4 *)(*plVar9 + 0x10));
        FUN_14165b8a0(1,local_270,iVar5,*(undefined8 *)(*plVar9 + 8));
        local_258 = &local_270;
        iVar19 = local_294;
      }
      iVar11 = iVar11 * iVar19;
      local_244 = 0;
      local_260 = CONCAT44(local_260._4_4_,iVar11);
      if (0 < iVar12) {
        iVar12 = local_288._4_4_;
        local_238 = (longlong *)0x0;
        local_208 = (LARGE_INTEGER)(longlong)(iVar11 * local_288._4_4_);
        do {
          plVar17 = local_258;
          iVar5 = 0;
          lVar21 = plVar9[1];
          iVar15 = ((int)plVar9[2] + local_244) * local_174;
          if (0 < iVar12) {
            plVar16 = local_238;
            do {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(((*(int *)((longlong)plVar9 + 0xc) + iVar5) * local_178 +
                                  iVar15 + (int)lVar21 * iVar19) + local_170),
                         (void *)(*plVar17 + (longlong)plVar16),(longlong)iVar11);
              iVar5 = iVar5 + 1;
              plVar16 = (longlong *)((longlong)plVar16 + (longlong)iVar11);
            } while (iVar5 < iVar12);
            iVar11 = (int)local_260;
            iVar19 = local_294;
          }
          local_238 = (longlong *)((longlong)local_238 + local_208.QuadPart);
          local_244 = local_244 + 1;
          plVar17 = local_1b0;
          param_1 = local_218;
        } while (local_244 < local_240);
      }
      local_278 = local_278 + 1;
      local_230 = local_230 + 8;
    } while (local_278 < *(int *)(param_1.QuadPart + 0xe0));
  }
  local_268 = 0;
  if (local_264 != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_270,0);
  }
  (**(code **)(*DAT_146ab6358 + 0x5b0))(DAT_146ab6358,&DAT_146ab6e78,local_1a8);
  if (local_270 != 0) {
    FMemory::Free();
  }
LAB_142426f7d:
  iVar19 = (int)plVar17[1];
  if (iVar19 != 0) {
    iVar12 = *(int *)(param_1.QuadPart + 0xf0);
    if (*(int *)(param_1.QuadPart + 0xf4) < iVar19 + iVar12) {
      TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(param_1.QuadPart + 0xe8));
      iVar12 = *(int *)(param_1.QuadPart + 0xf0);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1.QuadPart + 0xe8) + (longlong)iVar12 * 8),
               (void *)*plVar17,(longlong)iVar19 << 3);
    *(int *)(param_1.QuadPart + 0xf0) = *(int *)(param_1.QuadPart + 0xf0) + iVar19;
  }
  *(undefined4 *)(plVar17 + 1) = 0;
  if (*(int *)((longlong)plVar17 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar17,0);
  }
  QueryPerformanceCounter(local_228);
  DAT_146af2468 = 0;
  return;
}



// FUNCTION 142427180 FUN_142427180 body=1203 status=ok
// SIG undefined FUN_142427180(void)

void FUN_142427180(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  void *pvVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  longlong local_c8;
  int local_c0;
  int local_bc;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined4 local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  int local_70;
  int iStack_6c;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  iVar13 = 0;
  if (*(longlong *)(param_2 + 0x18) == 0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    return;
  }
  lVar11 = *(longlong *)(param_2 + 0x30);
  if (lVar11 == 0) {
    uVar9 = GetTransientPackage();
    FUN_1417846f0(uVar9,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar10 = UDialogueSoundWaveProxy::GetPrivateStaticClass();
    lVar11 = FUN_1417985e0(uVar10,uVar9,0,0,0,0,0,0,0);
    *(longlong *)(param_2 + 0x30) = lVar11;
    if (lVar11 == 0) {
      return;
    }
  }
  *(undefined8 *)(lVar11 + 0xa8) = *(undefined8 *)(param_2 + 0x18);
  FUN_142869970(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x30),0x101000100010100);
  FText::FText(local_b8);
  local_a0 = 0;
  FUN_141682af0(param_1 + 0x60,&local_88,0);
  FDialogueContextMapping::GetLocalizationKey(param_2,&local_98);
  puVar17 = &DAT_143f3eda8;
  if (local_90 != 0) {
    puVar17 = local_98;
  }
  puVar16 = &DAT_143f3eda8;
  if (local_80 != 0) {
    puVar16 = local_88;
  }
  FString::PrintfImpl(&local_c8,L"%s_%s",puVar16,puVar17);
  if (local_98 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar4 = local_c0;
  pvVar7 = DAT_146532028;
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    if (DAT_146532030 != 0) {
      iVar13 = DAT_146532030 + -1;
    }
    if (iVar13 != 0) {
      lVar11 = (longlong)local_c0;
      local_c0 = (uint)(local_c0 == 0) + local_c0 + iVar13;
      if (local_bc < local_c0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar4);
      }
      pvVar3 = (void *)(local_c8 + (lVar11 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar3,pvVar7,(longlong)iVar13 * 2);
      *(undefined2 *)((longlong)iVar13 * 2 + (longlong)pvVar3) = 0;
    }
  }
  cVar8 = FUN_141606040(&DAT_146532008,&local_c8,local_b8,0);
  if (cVar8 == '\0') {
    FUN_141682af0(param_1 + 0x60,&local_78,0);
    if (local_c8 != 0) {
      FMemory::Free();
    }
    pvVar7 = DAT_146532028;
    local_c8 = local_78;
    local_c0 = local_70;
    local_bc = iStack_6c;
    if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
      iVar13 = 0;
      if (DAT_146532030 != 0) {
        iVar13 = DAT_146532030 + -1;
      }
      if (iVar13 != 0) {
        local_c0 = (uint)(local_70 == 0) + local_70 + iVar13;
        if (iStack_6c < local_c0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,local_70);
        }
        pvVar3 = (void *)(local_c8 + ((longlong)local_70 - (ulonglong)(local_70 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar3,pvVar7,(longlong)iVar13 * 2);
        *(undefined2 *)((longlong)iVar13 * 2 + (longlong)pvVar3) = 0;
      }
    }
    cVar8 = FUN_141606040(&DAT_146532008,&local_c8,local_b8,0);
    if (cVar8 == '\0') {
      uVar15 = *(uint *)(param_1 + 0x28) & 2;
      lVar11 = 0x40;
      if (uVar15 == 0) {
        lVar11 = 0x30;
      }
      puVar12 = local_68;
      if (uVar15 != 0) {
        puVar12 = local_50;
      }
      uVar9 = FText::FromString(puVar12,lVar11 + param_1);
      FText::operator=(local_b8,uVar9);
      if (((2U - (uVar15 != 0) & 2) != 0) && (local_60 != (longlong *)0x0)) {
        LOCK();
        plVar14 = local_60 + 1;
        lVar11 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      if ((uVar15 != 0) && (local_48 != (longlong *)0x0)) {
        LOCK();
        plVar14 = local_48 + 1;
        lVar11 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
    }
  }
  lVar11 = *(longlong *)(param_2 + 0x30);
  local_a0 = 0;
  iVar13 = *(int *)(lVar11 + 0xb8);
  if (iVar13 != 0) {
    plVar14 = (longlong *)(*(longlong *)(lVar11 + 0xb0) + 8);
    do {
      plVar5 = (longlong *)*plVar14;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar14 = plVar14 + 4;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  *(undefined4 *)(lVar11 + 0xb8) = 0;
  if (*(int *)(lVar11 + 0xbc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (lVar11 + 0xb0,0);
  }
  lVar11 = *(longlong *)(param_2 + 0x30);
  iVar13 = *(int *)(lVar11 + 0xb8);
  *(int *)(lVar11 + 0xb8) = iVar13 + 1;
  if (*(int *)(lVar11 + 0xbc) < iVar13 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(lVar11 + 0xb0,iVar13);
  }
  lVar11 = (longlong)iVar13 * 0x20 + *(longlong *)(lVar11 + 0xb0);
  FText::FText(lVar11,local_b8);
  *(undefined4 *)(lVar11 + 0x18) = local_a0;
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_b0 + 1;
    lVar11 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  return;
}



// FUNCTION 142427640 FUN_142427640 body=1411 status=ok
// SIG undefined FUN_142427640(void)

void FUN_142427640(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 local_res8 [8];
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  local_res8[0] = 0;
  AlgoImpl::
  IntroSortInternal<FTextureLODGroup,FIdentityFunctor,TDereferenceWrapper<FTextureLODGroup,<lambda_ca7c2040311208138d81214d43c595ab>_>_>
            (*(undefined8 *)(param_1 + 0x28),(longlong)*(int *)(param_1 + 0x30),0,local_res8);
  lVar3 = 0;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    if (1 < *(int *)(param_1 + 0x50)) {
      if (*(int *)(param_1 + 0x50) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = *(undefined2 **)(param_1 + 0x48);
      }
      uVar1 = GetTransientPackage();
      uVar2 = UDeviceProfile::GetPrivateStaticClass();
      lVar3 = FUN_141799410(uVar2,uVar1,puVar8,0);
      if (lVar3 != 0) goto LAB_1424276f1;
    }
    plVar4 = (longlong *)UDeviceProfile::GetPrivateStaticClass();
    lVar3 = plVar4[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar3 = plVar4[0x1f];
    }
  }
LAB_1424276f1:
  lVar7 = 0;
  iVar6 = 0;
  do {
    iVar10 = iVar6 + 1;
    if ((*(int *)(param_1 + 0x30) < iVar10) ||
       (iVar6 < (int)(uint)*(byte *)(lVar7 + *(longlong *)(param_1 + 0x28)))) {
      if ((lVar3 == 0) || (*(int *)(lVar3 + 0x30) <= iVar6)) {
        local_74 = 0xc00000000;
        uStack_6c = 0xffffffff00000000;
        local_78[0] = 0;
        local_54 = 0x100000000001;
        uStack_4c = 0xffffffffffffffff;
        local_64 = 0xffffffff;
        local_5c = 0xffffffff;
        local_58 = 1;
        local_44 = 0x100000000000;
        uStack_3c = 0xc;
        uStack_38 = 0x12e;
        uStack_34 = 0;
        local_30 = 0x12d;
        FTextureLODGroup::SetupGroup(local_78);
        TArray<FTextureLODGroup,FDefaultAllocator>::InsertUninitialized(param_1 + 0x28,iVar6,1);
        puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x28) + lVar7);
        *puVar5 = local_78[0];
        *(undefined4 *)(puVar5 + 4) = (undefined4)local_74;
        *(undefined4 *)(puVar5 + 8) = local_74._4_4_;
        *(undefined4 *)(puVar5 + 0xc) = (undefined4)uStack_6c;
        *(undefined4 *)(puVar5 + 0x10) = uStack_6c._4_4_;
        *(undefined4 *)(puVar5 + 0x14) = local_64;
        puVar5[0x18] = local_60;
        *(undefined4 *)(puVar5 + 0x1c) = local_5c;
        puVar5[0x20] = local_58;
        *(undefined4 *)(puVar5 + 0x24) = (undefined4)local_54;
        *(undefined4 *)(puVar5 + 0x28) = local_54._4_4_;
        *(undefined4 *)(puVar5 + 0x2c) = (undefined4)uStack_4c;
        *(undefined4 *)(puVar5 + 0x30) = uStack_4c._4_4_;
        *(undefined4 *)(puVar5 + 0x34) = (undefined4)local_44;
        *(undefined4 *)(puVar5 + 0x38) = local_44._4_4_;
        *(undefined4 *)(puVar5 + 0x3c) = uStack_3c;
        *(ulonglong *)(puVar5 + 0x40) = CONCAT44(uStack_34,uStack_38);
        uVar1 = local_30;
      }
      else {
        puVar9 = (undefined1 *)(*(longlong *)(lVar3 + 0x28) + lVar7);
        TArray<FTextureLODGroup,FDefaultAllocator>::InsertUninitialized(param_1 + 0x28,iVar6,1);
        puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x28) + lVar7);
        *puVar5 = *puVar9;
        *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar9 + 4);
        *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(puVar9 + 8);
        *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(puVar9 + 0xc);
        *(undefined4 *)(puVar5 + 0x10) = *(undefined4 *)(puVar9 + 0x10);
        *(undefined4 *)(puVar5 + 0x14) = *(undefined4 *)(puVar9 + 0x14);
        puVar5[0x18] = puVar9[0x18];
        *(undefined4 *)(puVar5 + 0x1c) = *(undefined4 *)(puVar9 + 0x1c);
        puVar5[0x20] = puVar9[0x20];
        *(undefined4 *)(puVar5 + 0x24) = *(undefined4 *)(puVar9 + 0x24);
        *(undefined4 *)(puVar5 + 0x28) = *(undefined4 *)(puVar9 + 0x28);
        *(undefined4 *)(puVar5 + 0x2c) = *(undefined4 *)(puVar9 + 0x2c);
        *(undefined4 *)(puVar5 + 0x30) = *(undefined4 *)(puVar9 + 0x30);
        *(undefined4 *)(puVar5 + 0x34) = *(undefined4 *)(puVar9 + 0x34);
        *(undefined4 *)(puVar5 + 0x38) = *(undefined4 *)(puVar9 + 0x38);
        *(undefined4 *)(puVar5 + 0x3c) = *(undefined4 *)(puVar9 + 0x3c);
        *(undefined8 *)(puVar5 + 0x40) = *(undefined8 *)(puVar9 + 0x40);
        uVar1 = *(undefined8 *)(puVar9 + 0x48);
      }
      *(undefined8 *)(puVar5 + 0x48) = uVar1;
      *(char *)(lVar7 + *(longlong *)(param_1 + 0x28)) = (char)iVar6;
    }
    lVar7 = lVar7 + 0x50;
    iVar6 = iVar10;
  } while (iVar10 < 0x3b);
  UTextureLODSettings::SetupLODGroup(param_1,0);
  UTextureLODSettings::SetupLODGroup(param_1,1);
  UTextureLODSettings::SetupLODGroup(param_1,2);
  UTextureLODSettings::SetupLODGroup(param_1,3);
  UTextureLODSettings::SetupLODGroup(param_1,4);
  UTextureLODSettings::SetupLODGroup(param_1,5);
  UTextureLODSettings::SetupLODGroup(param_1,6);
  UTextureLODSettings::SetupLODGroup(param_1,7);
  UTextureLODSettings::SetupLODGroup(param_1,8);
  UTextureLODSettings::SetupLODGroup(param_1,9);
  UTextureLODSettings::SetupLODGroup(param_1,10);
  UTextureLODSettings::SetupLODGroup(param_1,0xb);
  UTextureLODSettings::SetupLODGroup(param_1,0xc);
  UTextureLODSettings::SetupLODGroup(param_1,0xd);
  UTextureLODSettings::SetupLODGroup(param_1,0xe);
  UTextureLODSettings::SetupLODGroup(param_1,0xf);
  UTextureLODSettings::SetupLODGroup(param_1,0x10);
  UTextureLODSettings::SetupLODGroup(param_1,0x11);
  UTextureLODSettings::SetupLODGroup(param_1,0x12);
  UTextureLODSettings::SetupLODGroup(param_1,0x13);
  UTextureLODSettings::SetupLODGroup(param_1,0x14);
  UTextureLODSettings::SetupLODGroup(param_1,0x15);
  UTextureLODSettings::SetupLODGroup(param_1,0x16);
  UTextureLODSettings::SetupLODGroup(param_1,0x17);
  UTextureLODSettings::SetupLODGroup(param_1,0x18);
  UTextureLODSettings::SetupLODGroup(param_1,0x19);
  UTextureLODSettings::SetupLODGroup(param_1,0x1a);
  UTextureLODSettings::SetupLODGroup(param_1,0x1b);
  UTextureLODSettings::SetupLODGroup(param_1,0x1c);
  UTextureLODSettings::SetupLODGroup(param_1,0x1d);
  UTextureLODSettings::SetupLODGroup(param_1,0x1e);
  UTextureLODSettings::SetupLODGroup(param_1,0x1f);
  UTextureLODSettings::SetupLODGroup(param_1,0x20);
  UTextureLODSettings::SetupLODGroup(param_1,0x21);
  UTextureLODSettings::SetupLODGroup(param_1,0x22);
  UTextureLODSettings::SetupLODGroup(param_1,0x23);
  UTextureLODSettings::SetupLODGroup(param_1,0x24);
  UTextureLODSettings::SetupLODGroup(param_1,0x25);
  UTextureLODSettings::SetupLODGroup(param_1,0x26);
  UTextureLODSettings::SetupLODGroup(param_1,0x27);
  UTextureLODSettings::SetupLODGroup(param_1,0x28);
  UTextureLODSettings::SetupLODGroup(param_1,0x29);
  UTextureLODSettings::SetupLODGroup(param_1,0x2a);
  UTextureLODSettings::SetupLODGroup(param_1,0x2b);
  UTextureLODSettings::SetupLODGroup(param_1,0x2c);
  UTextureLODSettings::SetupLODGroup(param_1,0x2d);
  UTextureLODSettings::SetupLODGroup(param_1,0x2e);
  UTextureLODSettings::SetupLODGroup(param_1,0x2f);
  UTextureLODSettings::SetupLODGroup(param_1,0x30);
  UTextureLODSettings::SetupLODGroup(param_1,0x31);
  UTextureLODSettings::SetupLODGroup(param_1,0x32);
  UTextureLODSettings::SetupLODGroup(param_1,0x33);
  UTextureLODSettings::SetupLODGroup(param_1,0x34);
  UTextureLODSettings::SetupLODGroup(param_1,0x35);
  UTextureLODSettings::SetupLODGroup(param_1,0x36);
  UTextureLODSettings::SetupLODGroup(param_1,0x37);
  UTextureLODSettings::SetupLODGroup(param_1,0x38);
  UTextureLODSettings::SetupLODGroup(param_1,0x39);
  UTextureLODSettings::SetupLODGroup(param_1,0x3a);
  return;
}



// FUNCTION 142427bd0 FUN_142427bd0 body=1257 status=ok
// SIG undefined FUN_142427bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142427bd0(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  
  puVar1 = *(undefined4 **)param_2[1];
  local_res20[0] = param_4;
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x558,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x558,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x558) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  plVar2 = (longlong *)param_2[1];
  if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res20,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res20,4);
    }
  }
  else {
    local_res20[0] = *(undefined4 *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  FUN_1425dbf20(*(undefined8 *)(**(longlong **)(param_1 + 0x98) + 0x68),param_2);
  if (*(char *)(param_1 + 0xae0) == '\0') {
    local_res8[0] = *(int *)(param_1 + 0x850) - *(int *)(param_1 + 0x87c);
    (**(code **)(*param_2 + 0x68))(param_2,local_res8);
    uVar6 = 0;
    if (local_res8[0] != 0) {
      do {
        lVar4 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x88) + (longlong)(int)uVar6 * 8);
        ULevelStreaming::GetWorldAssetPackageName(lVar4,local_48);
        FName::ToString(lVar4 + 0x50,local_58);
        FUN_14158ce90(param_2,local_48);
        FUN_14158ce90(param_2,local_58);
        puVar9 = (undefined4 *)(lVar4 + 0x80);
        puVar1 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,puVar9,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,puVar9,4);
          }
        }
        else {
          *puVar9 = *puVar1;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        puVar1 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,lVar4 + 0x84,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,lVar4 + 0x84,4);
          }
        }
        else {
          *(undefined4 *)(lVar4 + 0x84) = *puVar1;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        puVar1 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,lVar4 + 0x88,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,lVar4 + 0x88,4);
          }
        }
        else {
          *(undefined4 *)(lVar4 + 0x88) = *puVar1;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        puVar1 = *(undefined4 **)param_2[1];
        if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,lVar4 + 0x8c,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,lVar4 + 0x8c,4);
          }
        }
        else {
          *(undefined4 *)(lVar4 + 0x8c) = *puVar1;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
        FUN_1406da970(param_2,lVar4 + 0x90);
        FUN_1406da970(param_2,lVar4 + 0xa0);
        if ((*(byte *)(param_2 + 5) & 1) != 0) {
          uVar8 = *(uint *)(lVar4 + 0x90) & _DAT_146af2530;
          uVar11 = *(uint *)(lVar4 + 0x94) & uRam0000000146af2534;
          uVar12 = *(uint *)(lVar4 + 0x98) & uRam0000000146af2538;
          uVar13 = *(uint *)(lVar4 + 0x9c) & uRam0000000146af253c;
          uVar14 = uRam0000000146af2534 & *(uint *)(lVar4 + 0xa4);
          uVar15 = uRam0000000146af2538 & *(uint *)(lVar4 + 0xa8);
          uVar16 = uRam0000000146af253c & *(uint *)(lVar4 + 0xac);
          *(uint *)(lVar4 + 0xa0) = _DAT_146af2530 & *(uint *)(lVar4 + 0xa0);
          *(uint *)(lVar4 + 0xa4) = uVar14;
          *(uint *)(lVar4 + 0xa8) = uVar15;
          *(uint *)(lVar4 + 0xac) = uVar16;
          *(uint *)(lVar4 + 0x90) = uVar8;
          *(uint *)(lVar4 + 0x94) = uVar11;
          *(uint *)(lVar4 + 0x98) = uVar12;
          *(uint *)(lVar4 + 0x9c) = uVar13;
        }
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_res8[0]);
    }
    TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0x848,0);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0xa70);
    (**(code **)(*param_2 + 0x68))(param_2,param_1 + 0xb48);
    for (uVar8 = uVar6 - *(int *)(param_1 + 0xb48); uVar8 < uVar6; uVar8 = uVar8 + 1) {
      FUN_14158ce90(param_2,*(longlong *)(param_1 + 0xa68) + (longlong)(int)uVar8 * 0x18);
    }
    *(undefined4 *)(param_1 + 0xb48) = 0;
  }
  uVar5 = 0;
  if ((*(char *)(param_1 + 0xae0) != '\0') && (lVar4 = operator_new(0x10), lVar4 != 0)) {
    uVar5 = FUN_1424040b0(lVar4,param_2);
  }
  FUN_14241ffb0(param_1,param_2);
  FUN_142406c60(local_res8,uVar5);
  plVar10 = (longlong *)*param_3;
  uVar7 = (ulonglong)(int)param_3[1];
  plVar2 = plVar10 + uVar7 * 3;
  if (plVar10 != plVar2) {
    do {
      if (*(char *)(param_1 + 0xae0) != '\0') {
        (**(code **)(*param_2 + 0x68))(param_2,(longlong)plVar10 + 0x14);
      }
      plVar3 = (longlong *)param_2[1];
      local_res8[0] = *(uint *)(plVar10 + 1);
      lVar4 = *plVar10;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res8,4);
        }
      }
      else {
        local_res8[0] = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,lVar4,(longlong)(int)local_res8[0]);
      plVar10 = plVar10 + 3;
    } while (plVar10 != plVar2);
    uVar7 = (ulonglong)*(uint *)(param_3 + 1);
    plVar10 = (longlong *)*param_3;
  }
  uVar6 = (uint)uVar7;
  while (uVar6 != 0) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 3;
    uVar6 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar6;
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_3,0);
  }
  if (*(char *)(param_1 + 0xae0) != '\0') {
    local_res8[0] = 0;
    (**(code **)(*param_2 + 0x68))(param_2,local_res8);
  }
  plVar2 = (longlong *)param_2[1];
  local_res10[0] = 0;
  if ((ulonglong)plVar2[1] < *plVar2 + 4U) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    *plVar2 = *plVar2 + 4;
  }
  return;
}



// FUNCTION 1424280c0 FUN_1424280c0 body=416 status=ok
// SIG undefined FUN_1424280c0(void)

undefined8 FUN_1424280c0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  uint local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)param_1[0xad] + 0x28))();
  if (plVar2 == (longlong *)0x0) {
    if ((int)param_1[0x125] == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)param_1[0x124];
    }
    FString::PrintfImpl(&local_78,L"Couldn\'t open demo file %s for writing",puVar5);
    if (param_2 == &local_78) {
      if (local_78 != 0) {
        FMemory::Free();
      }
      uVar3 = 0;
    }
    else {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = local_78;
      *(undefined4 *)(param_2 + 1) = local_70;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_6c;
      uVar3 = 0;
    }
  }
  else {
    local_68 = 0x2cf5a13d;
    local_64 = 0xb;
    local_60 = FUN_1416727f0(1);
    local_5c = FUN_1416722f0();
    local_58 = FUN_141672630();
    uVar3 = FEngineVersion::Current();
    local_54 = FEngineVersionBase::GetChangelist(uVar3);
    puVar4 = (undefined8 *)FEngineVersion::Current();
    local_50 = *puVar4;
    local_48 = *(undefined4 *)(puVar4 + 1);
    FString::FString(local_40,puVar4 + 2);
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    TArray<FLevelNameAndTime,FDefaultAllocator>::operator=(&local_28,param_1 + 0x140);
    (**(code **)(*param_1 + 0x418))(param_1,&local_18);
    if ((param_1[0x1a] != 0) && (cVar1 = FUN_1428cfb20(), cVar1 != '\0')) {
      local_30 = local_30 | 1;
    }
    if ((char)param_1[0x15c] != '\0') {
      local_30 = local_30 | 2;
    }
    FUN_142406100(plVar2,&local_68);
    (**(code **)(*plVar2 + 0xe0))(plVar2);
    FNetworkDemoHeader::~FNetworkDemoHeader(&local_68);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 142428260 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x410);
  }
  return param_1;
}



// FUNCTION 1424282a0 Tick body=560 status=ok
// SIG undefined Tick(void)

void TRenderResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
     Tick(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_res18 [2];
  
  IsInRenderingThread();
  iVar7 = 100;
  lVar11 = 0x10;
  lVar2 = (longlong)(int)((DAT_1464aaa90 + 1U) % 3);
  plVar8 = (longlong *)((lVar2 + -3) * 0x100 + param_1);
  lVar12 = 0;
  do {
    iVar9 = (int)plVar8[1];
    if (iVar9 != 0) {
      iVar10 = (int)plVar8[lVar2 * -0x20 + -0x1f];
      if (*(int *)((longlong)plVar8 + lVar2 * -0x100 + -0xf4) < iVar10 + iVar9) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar8 + lVar2 * -0x20 + -0x20);
        iVar10 = (int)plVar8[lVar2 * -0x20 + -0x1f];
      }
      plVar5 = (longlong *)*plVar8;
      plVar4 = (longlong *)((longlong)iVar10 * 0x10 + plVar8[lVar2 * -0x20 + -0x20]);
      iVar10 = iVar9;
      do {
        lVar6 = *plVar5;
        *plVar4 = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        *(int *)(plVar4 + 1) = (int)plVar5[1];
        puVar1 = (undefined4 *)((longlong)plVar5 + 0xc);
        plVar5 = plVar5 + 2;
        *(undefined4 *)((longlong)plVar4 + 0xc) = *puVar1;
        plVar4 = plVar4 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      *(int *)(plVar8 + lVar2 * -0x20 + -0x1f) = (int)plVar8[lVar2 * -0x20 + -0x1f] + iVar9;
    }
    iVar9 = *(int *)((longlong)plVar8 + 0xc);
    lVar6 = *plVar8;
    iVar10 = (int)plVar8[1];
    if (iVar9 < 0) {
      if (iVar10 != 0) {
        do {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6);
          lVar6 = lVar6 + 0x10;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar9 = *(int *)((longlong)plVar8 + 0xc);
      }
      *(undefined4 *)(plVar8 + 1) = 0;
      if (iVar9 != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar8,0);
      }
    }
    else {
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6);
        lVar6 = lVar6 + 0x10;
      }
      *(undefined4 *)(plVar8 + 1) = 0;
    }
    plVar8 = plVar8 + 2;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  plVar8 = (longlong *)(param_1 + -0x400);
  do {
    iVar9 = (int)plVar8[1] + -1;
    if (-1 < iVar9) {
      lVar2 = (longlong)iVar9 << 4;
      do {
        if (10 < (uint)(DAT_1464aaa90 - *(int *)(*plVar8 + 0xc + lVar2))) {
          local_res18[0] = *(longlong *)(*plVar8 + lVar2);
          if (local_res18[0] != 0) {
            LOCK();
            *(int *)(local_res18[0] + 8) = *(int *)(local_res18[0] + 8) + 1;
            UNLOCK();
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                    (*plVar8 + (longlong)iVar9 * 0x10);
          iVar10 = (int)plVar8[1];
          iVar3 = (iVar10 - iVar9) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar8 + (longlong)iVar9 * 0x10),
                       (void *)((longlong)(iVar10 - iVar3) * 0x10 + *plVar8),(longlong)iVar3 << 4);
            iVar10 = (int)plVar8[1];
          }
          *(int *)(plVar8 + 1) = iVar10 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar8);
          iVar7 = iVar7 + -1;
          if (iVar7 == 0) {
            return;
          }
        }
        lVar2 = lVar2 + -0x10;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
    if (iVar7 == 0) {
      return;
    }
    lVar12 = lVar12 + 1;
    plVar8 = plVar8 + 2;
  } while (lVar12 < 0x10);
  return;
}



// FUNCTION 1424284e0 ReleaseRHI body=501 status=ok
// SIG undefined ReleaseRHI(void)

void TRenderResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
     ReleaseRHI(longlong param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_res8;
  
  FTickableObjectRenderThread::Unregister(param_1 + -0x10);
  lVar8 = -0x100;
  plVar7 = (longlong *)(param_1 + -0x310);
  lVar11 = 0x10;
  do {
    lVar12 = 0x10;
    do {
      iVar9 = (int)plVar7[1];
      if (iVar9 != 0) {
        iVar10 = *(int *)((longlong)plVar7 + lVar8 + 8);
        if (*(int *)((longlong)plVar7 + lVar8 + 0xc) < iVar10 + iVar9) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong)plVar7 + lVar8);
          iVar10 = *(int *)((longlong)plVar7 + lVar8 + 8);
        }
        plVar5 = (longlong *)*plVar7;
        plVar4 = (longlong *)((longlong)iVar10 * 0x10 + *(longlong *)((longlong)plVar7 + lVar8));
        iVar10 = iVar9;
        do {
          lVar6 = *plVar5;
          *plVar4 = lVar6;
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            UNLOCK();
          }
          *(int *)(plVar4 + 1) = (int)plVar5[1];
          puVar1 = (undefined4 *)((longlong)plVar5 + 0xc);
          plVar5 = plVar5 + 2;
          *(undefined4 *)((longlong)plVar4 + 0xc) = *puVar1;
          plVar4 = plVar4 + 2;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        piVar2 = (int *)((longlong)plVar7 + lVar8 + 8);
        *piVar2 = *piVar2 + iVar9;
      }
      iVar9 = *(int *)((longlong)plVar7 + 0xc);
      lVar6 = *plVar7;
      iVar10 = (int)plVar7[1];
      if (iVar9 < 0) {
        if (iVar10 != 0) {
          do {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6);
            lVar6 = lVar6 + 0x10;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          iVar9 = *(int *)((longlong)plVar7 + 0xc);
        }
        *(undefined4 *)(plVar7 + 1) = 0;
        if (iVar9 != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar7,0);
        }
      }
      else {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6);
          lVar6 = lVar6 + 0x10;
        }
        *(undefined4 *)(plVar7 + 1) = 0;
      }
      plVar7 = plVar7 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar8 = lVar8 + -0x100;
  } while (-0x400 < lVar8);
  plVar7 = (longlong *)(param_1 + -0x410);
  do {
    iVar9 = (int)plVar7[1] + -1;
    if (-1 < iVar9) {
      lVar12 = (longlong)iVar9 << 4;
      lVar8 = lVar12;
      do {
        local_res8 = *(longlong *)(lVar12 + *plVar7);
        if (local_res8 != 0) {
          LOCK();
          *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
          UNLOCK();
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(*plVar7 + lVar8);
        iVar10 = (int)plVar7[1];
        iVar3 = (iVar10 - iVar9) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar7 + lVar8),(void *)((longlong)(iVar10 - iVar3) * 0x10 + *plVar7)
                     ,(longlong)iVar3 << 4);
          iVar10 = (int)plVar7[1];
        }
        *(int *)(plVar7 + 1) = iVar10 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar7);
        lVar8 = lVar8 + -0x10;
        lVar12 = lVar12 + -0x10;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
    plVar7 = plVar7 + 2;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  return;
}



// FUNCTION 1424286e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TRenderResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TRenderResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x450);
  }
  return param_1;
}



// FUNCTION 142428720 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FGlobalDynamicMeshIndexPool::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14509d0e0;
  param_1[0x82] = &PTR_LAB_14509d0e8;
  param_1[0x84] = &PTR_LAB_14509d110;
  TRenderResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
  ~TRenderResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x450);
  }
  return param_1;
}



// FUNCTION 142428780 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TGlobalResource<FGlobalDynamicMeshIndexPool>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TGlobalResource<FGlobalDynamicMeshIndexPool>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x450);
  }
  return param_1;
}



// FUNCTION 142428800 FUN_142428800 body=677 status=ok
// SIG undefined FUN_142428800(void)

/* WARNING: Removing unreachable block (ram,0x000142428987) */
/* WARNING: Removing unreachable block (ram,0x000142428994) */
/* WARNING: Removing unreachable block (ram,0x0001424289a0) */

void FUN_142428800(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  DWORD DVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong local_res20;
  LARGE_INTEGER local_1f0;
  LARGE_INTEGER local_1e8;
  undefined8 local_1e0;
  undefined8 local_1c8;
  undefined8 local_1b8 [52];
  
  puVar19 = (undefined8 *)0x0;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar14 = FUN_1415ad720(&DAT_1468e2448), cVar14 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar15 = GetCurrentThreadId(), DVar15 == DAT_1468c21c0)))) {
    lVar17 = 3;
    puVar19 = local_1b8;
    do {
      puVar16 = param_2;
      puVar20 = puVar19;
      uVar10 = puVar16[1];
      uVar11 = puVar16[2];
      uVar12 = puVar16[3];
      *puVar20 = *puVar16;
      puVar20[1] = uVar10;
      uVar10 = puVar16[4];
      uVar13 = puVar16[5];
      puVar20[2] = uVar11;
      puVar20[3] = uVar12;
      uVar11 = puVar16[6];
      uVar12 = puVar16[7];
      puVar20[4] = uVar10;
      puVar20[5] = uVar13;
      uVar10 = puVar16[8];
      uVar13 = puVar16[9];
      puVar20[6] = uVar11;
      puVar20[7] = uVar12;
      uVar11 = puVar16[10];
      uVar12 = puVar16[0xb];
      puVar20[8] = uVar10;
      puVar20[9] = uVar13;
      uVar10 = puVar16[0xc];
      uVar13 = puVar16[0xd];
      puVar20[10] = uVar11;
      puVar20[0xb] = uVar12;
      uVar11 = puVar16[0xe];
      uVar12 = puVar16[0xf];
      puVar20[0xc] = uVar10;
      puVar20[0xd] = uVar13;
      puVar20[0xe] = uVar11;
      puVar20[0xf] = uVar12;
      lVar17 = lVar17 + -1;
      puVar19 = puVar20 + 0x10;
      param_2 = puVar16 + 0x10;
    } while (lVar17 != 0);
    uVar3 = *(undefined4 *)((longlong)puVar16 + 0x84);
    uVar4 = *(undefined4 *)(puVar16 + 0x11);
    uVar5 = *(undefined4 *)((longlong)puVar16 + 0x8c);
    uVar6 = *(undefined4 *)(puVar16 + 0x12);
    uVar7 = *(undefined4 *)((longlong)puVar16 + 0x94);
    uVar8 = *(undefined4 *)(puVar16 + 0x13);
    uVar9 = *(undefined4 *)((longlong)puVar16 + 0x9c);
    *(undefined4 *)(puVar20 + 0x10) = *(undefined4 *)(puVar16 + 0x10);
    *(undefined4 *)((longlong)puVar20 + 0x84) = uVar3;
    *(undefined4 *)(puVar20 + 0x11) = uVar4;
    *(undefined4 *)((longlong)puVar20 + 0x8c) = uVar5;
    *(undefined4 *)(puVar20 + 0x12) = uVar6;
    *(undefined4 *)((longlong)puVar20 + 0x94) = uVar7;
    *(undefined4 *)(puVar20 + 0x13) = uVar8;
    *(undefined4 *)((longlong)puVar20 + 0x9c) = uVar9;
    local_1c8 = param_1;
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_1e8);
    FUN_142439a50(param_1,local_1b8);
    QueryPerformanceCounter(&local_1f0);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_1f0.s.LowPart - local_1e8._0_4_);
    return;
  }
  puVar16 = (undefined8 *)operator_new(0x1d0);
  puVar20 = puVar19;
  if (puVar16 != (undefined8 *)0x0) {
    local_1e0 = 0;
    *puVar16 = &PTR_FUN_143f3edd8;
    local_res20 = 0;
    *(undefined4 *)(puVar16 + 1) = 0xff;
    *(undefined4 *)((longlong)puVar16 + 0xc) = 1;
    *(undefined1 *)(puVar16 + 0x38) = 0;
    *puVar16 = &PTR__scalar_deleting_destructor__14509f170;
    puVar16[0x39] = 0;
    puVar19 = puVar16;
    puVar20 = (undefined8 *)&DAT_00000004;
  }
  if ((puVar20 != (undefined8 *)0x0) && (local_res20 != 0)) {
    LOCK();
    piVar1 = (int *)(local_res20 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  puVar19[2] = param_1;
  lVar17 = 3;
  puVar20 = puVar19 + 4;
  do {
    puVar18 = param_2;
    puVar16 = puVar20;
    uVar10 = puVar18[1];
    *puVar16 = *puVar18;
    puVar16[1] = uVar10;
    uVar10 = puVar18[3];
    puVar16[2] = puVar18[2];
    puVar16[3] = uVar10;
    uVar10 = puVar18[5];
    puVar16[4] = puVar18[4];
    puVar16[5] = uVar10;
    uVar10 = puVar18[7];
    puVar16[6] = puVar18[6];
    puVar16[7] = uVar10;
    uVar10 = puVar18[9];
    puVar16[8] = puVar18[8];
    puVar16[9] = uVar10;
    uVar10 = puVar18[0xb];
    puVar16[10] = puVar18[10];
    puVar16[0xb] = uVar10;
    uVar10 = puVar18[0xd];
    puVar16[0xc] = puVar18[0xc];
    puVar16[0xd] = uVar10;
    uVar10 = puVar18[0xf];
    puVar16[0xe] = puVar18[0xe];
    puVar16[0xf] = uVar10;
    lVar17 = lVar17 + -1;
    puVar20 = puVar16 + 0x10;
    param_2 = puVar18 + 0x10;
  } while (lVar17 != 0);
  uVar3 = *(undefined4 *)((longlong)puVar18 + 0x84);
  uVar4 = *(undefined4 *)(puVar18 + 0x11);
  uVar5 = *(undefined4 *)((longlong)puVar18 + 0x8c);
  *(undefined4 *)(puVar16 + 0x10) = *(undefined4 *)(puVar18 + 0x10);
  *(undefined4 *)((longlong)puVar16 + 0x84) = uVar3;
  *(undefined4 *)(puVar16 + 0x11) = uVar4;
  *(undefined4 *)((longlong)puVar16 + 0x8c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)puVar18 + 0x94);
  uVar4 = *(undefined4 *)(puVar18 + 0x13);
  uVar5 = *(undefined4 *)((longlong)puVar18 + 0x9c);
  *(undefined4 *)(puVar16 + 0x12) = *(undefined4 *)(puVar18 + 0x12);
  *(undefined4 *)((longlong)puVar16 + 0x94) = uVar3;
  *(undefined4 *)(puVar16 + 0x13) = uVar4;
  *(undefined4 *)((longlong)puVar16 + 0x9c) = uVar5;
  lVar17 = puVar19[0x39];
  piVar1 = (int *)(lVar17 + 0x48);
  if (lVar17 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_142439b70(puVar19,0,0xff,1);
  if (lVar17 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar17);
    }
  }
  return;
}



// FUNCTION 142428ab0 RemoveAll<<lambda_3478abcf20efb15d793cd06aa9b700e0>_> body=486 status=ok
// SIG undefined RemoveAll<<lambda_3478abcf20efb15d793cd06aa9b700e0>_>(void)

int TArray<FEngineSessionManager::FSessionRecord,FDefaultAllocator>::
    RemoveAll<<lambda_3478abcf20efb15d793cd06aa9b700e0>_>(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  
  iVar1 = (int)param_1[1];
  lVar6 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar11 = 0;
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = *(undefined2 **)*param_2;
  }
  if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = *(undefined2 **)*param_1;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
  bVar12 = iVar2 != 0;
  lVar10 = 0;
  iVar2 = 0;
  do {
    iVar9 = iVar2 + 1;
    lVar10 = lVar10 + 1;
    if (lVar10 < lVar6) {
      lVar7 = lVar10 * 0x60;
      do {
        if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)*param_2;
        }
        if (*(int *)(lVar7 + 8 + *param_1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = *(undefined2 **)(lVar7 + *param_1);
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
        if (bVar12 != (iVar3 != 0)) break;
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 1;
        lVar7 = lVar7 + 0x60;
      } while (lVar10 < lVar6);
    }
    iVar3 = iVar9 - iVar2;
    if (bVar12 == false) {
      plVar8 = (longlong *)((longlong)iVar2 * 0x60 + *param_1);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (plVar8[9] != 0) {
          FMemory::Free();
        }
        if (plVar8[5] != 0) {
          FMemory::Free();
        }
        if (plVar8[3] != 0) {
          FMemory::Free();
        }
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 0xc;
      }
    }
    else {
      if (iVar11 != iVar2) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 * 0x60 + *param_1),
                   (void *)((longlong)iVar2 * 0x60 + *param_1),(longlong)iVar3 * 0x60);
      }
      iVar11 = iVar11 + iVar3;
    }
    bVar12 = (bool)(bVar12 ^ 1);
    iVar2 = iVar9;
    if (lVar6 <= lVar10) {
      *(int *)(param_1 + 1) = iVar11;
      return iVar1 - iVar11;
    }
  } while( true );
}



// FUNCTION 142428ca0 TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int> body=870 status=ok
// SIG undefined TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>(void)

undefined8 *
TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
          (undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__14509d068;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
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
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
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
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  return param_1;
}



// FUNCTION 142429010 ADocumentationActor body=112 status=ok
// SIG undefined ADocumentationActor(void)

undefined8 * ADocumentationActor::ADocumentationActor(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SceneComp",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 142429080 FUN_142429080 body=66 status=ok
// SIG undefined FUN_142429080(void)

undefined8 * FUN_142429080(undefined8 *param_1)

{
  FUN_1424de090();
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 4;
  *param_1 = &PTR__scalar_deleting_destructor__14509e798;
  *(undefined2 *)(param_1 + 0x8b) = 0x101;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  return param_1;
}



// FUNCTION 1424290d0 FUN_1424290d0 body=435 status=ok
// SIG undefined FUN_1424290d0(void)

undefined8 *
FUN_1424290d0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 3) = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = (undefined8 *)operator_new(0x1b8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 4;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    *puVar1 = &PTR_LAB_14509dc48;
    puVar1[1] = &PTR_LAB_14509dc98;
    *(undefined4 *)(puVar1 + 8) = 4;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[7] = &PTR_FUN_143f48ad0;
    *(undefined1 *)(puVar1 + 0xc) = 0;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 4;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0xe] = &PTR_FUN_143f48ad0;
    *(undefined1 *)(puVar1 + 0x13) = 0;
    puVar1[0x14] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 4;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x15] = &PTR_FUN_143f48ad0;
    *(undefined1 *)(puVar1 + 0x1a) = 0;
    puVar1[0x1b] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    *(undefined4 *)(puVar1 + 0x35) = param_3;
    *(undefined4 *)((longlong)puVar1 + 0x1ac) = 1;
    *(undefined4 *)(puVar1 + 0x36) = param_4;
    *(undefined1 *)((longlong)puVar1 + 0x1b4) = param_5;
    puVar2 = puVar1;
  }
  param_1[2] = puVar2;
  puVar2 = (undefined8 *)operator_new(0x58);
  if (puVar2 == (undefined8 *)0x0) {
    param_1[1] = 0;
  }
  else {
    *(undefined4 *)(puVar2 + 2) = 4;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *puVar2 = &PTR_LAB_14509dc48;
    puVar2[1] = &PTR_LAB_14509dc58;
    puVar2[9] = 0;
    puVar2[10] = 0;
    param_1[1] = puVar2;
  }
  return param_1;
}



// FUNCTION 142429290 FUN_142429290 body=98 status=ok
// SIG undefined FUN_142429290(void)

undefined8 * FUN_142429290(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FWeakObjectPtr::operator=(param_1 + 2,0);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FWeakObjectPtr::operator=(param_1 + 9,0);
  *(undefined2 *)(param_1 + 10) = 0;
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) & 0xf0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  return param_1;
}



// FUNCTION 142429300 FEngineService body=1546 status=ok
// SIG undefined FEngineService(void)

longlong * FEngineService::FEngineService(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  void *_Src;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined8 local_108;
  longlong *local_100;
  undefined1 local_f8;
  undefined8 *local_f0;
  int local_e8;
  int local_e4;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  puVar11 = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  _Src = DAT_1468b5d30;
  local_b8 = (undefined8 *)0x0;
  iVar13 = (int)DAT_1468b5d38;
  local_b0 = iVar13;
  if (iVar13 == 0) {
    local_ac = 0;
    puVar8 = puVar11;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,DAT_1468b5d38 & 0xffffffff,0);
    puVar8 = local_b8;
    ::_guard_xfg_dispatch_icall_nop(local_b8,_Src,(longlong)iVar13 * 2);
  }
  uVar6 = local_ac;
  iVar15 = local_b0;
  iVar13 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar13 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar13);
  }
  puVar7 = (undefined8 *)((longlong)iVar13 * 0x10 + *param_1);
  *puVar7 = puVar8;
  *(int *)(puVar7 + 1) = iVar15;
  *(undefined4 *)((longlong)puVar7 + 0xc) = uVar6;
  FName::FName(&local_res10,"FEngineService",1);
  puVar8 = (undefined8 *)FName::FName(local_res20,"Messaging",1);
  uVar3 = *puVar8;
  uVar9 = FUN_14168dc80();
  plVar10 = (longlong *)FUN_141690010(uVar9,uVar3);
  puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x50))(plVar10,local_58);
  local_108 = *puVar8;
  local_100 = (longlong *)puVar8[1];
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_100 + 0xc) = *(int *)((longlong)local_100 + 0xc) + 1;
    UNLOCK();
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_50 + 1;
    lVar14 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  local_d8 = local_res10;
  local_f8 = 0;
  local_f0 = (undefined8 *)0x0;
  local_e4 = 0;
  local_e0 = 0;
  plVar10 = (longlong *)FTaskGraphInterface::Get();
  local_d0 = (**(code **)(*plVar10 + 0x10))(plVar10,0);
  puVar8 = (undefined8 *)operator_new(0x18);
  local_a8 = puVar11;
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = param_1;
    *puVar8 = &PTR_FUN_14509f100;
    puVar8[2] = FUN_1424346e0;
    local_a8 = puVar8;
  }
  puVar8 = (undefined8 *)operator_new(0x18);
  local_a0 = puVar11;
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 1) = 1;
    *puVar8 = &PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
    puVar8[2] = local_a8;
    local_a0 = puVar8;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_a8,local_a8,local_a8);
  local_e8 = 1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_f0,0);
  puVar8 = local_f0;
  *local_f0 = local_a8;
  local_f0[1] = local_a0;
  local_a0 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)operator_new(0x18);
  local_98 = puVar11;
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = param_1;
    *puVar7 = &PTR_FUN_14509f110;
    puVar7[2] = HandleAuthGrantMessage;
    local_98 = puVar7;
  }
  puVar7 = (undefined8 *)operator_new(0x18);
  local_90 = puVar11;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
    puVar7[2] = local_98;
    local_90 = puVar7;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
  iVar13 = local_e8;
  lVar14 = (longlong)local_e8;
  local_e8 = local_e8 + 1;
  if (local_e4 < local_e8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_f0,iVar13);
    puVar8 = local_f0;
  }
  iVar15 = local_e4;
  iVar13 = local_e8;
  puVar8[lVar14 * 2] = local_98;
  puVar8[lVar14 * 2 + 1] = local_90;
  local_90 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)operator_new(0x18);
  local_88 = puVar11;
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = param_1;
    *puVar7 = &PTR_FUN_14509f120;
    puVar7[2] = FUN_1424348b0;
    local_88 = puVar7;
  }
  puVar7 = (undefined8 *)operator_new(0x18);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
    puVar7[2] = local_88;
    puVar11 = puVar7;
  }
  local_80 = puVar11;
  SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
  local_e8 = iVar13 + 1;
  if (iVar15 < local_e8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_f0,iVar13);
    puVar8 = local_f0;
    iVar15 = local_e4;
  }
  iVar4 = local_e8;
  puVar11 = (undefined8 *)0x0;
  puVar8[(longlong)iVar13 * 2] = local_88;
  puVar8[(longlong)iVar13 * 2 + 1] = local_80;
  local_80 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)operator_new(0x18);
  local_78 = puVar11;
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = param_1;
    *puVar7 = &PTR_HandleMessage_14509f130;
    puVar7[2] = &LAB_142434cf0;
    local_78 = puVar7;
  }
  puVar7 = (undefined8 *)operator_new(0x18);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
    puVar7[2] = local_78;
    puVar11 = puVar7;
  }
  local_70 = puVar11;
  SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
  local_e8 = iVar4 + 1;
  if (iVar15 < local_e8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_f0,iVar4);
    puVar8 = local_f0;
    iVar15 = local_e4;
  }
  iVar13 = local_e8;
  puVar11 = (undefined8 *)0x0;
  puVar8[(longlong)iVar4 * 2] = local_78;
  puVar8[(longlong)iVar4 * 2 + 1] = local_70;
  local_70 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)operator_new(0x18);
  local_68 = puVar11;
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = param_1;
    *puVar7 = &PTR_FUN_14509f140;
    puVar7[2] = HandleTerminateMessage;
    local_68 = puVar7;
  }
  puVar7 = (undefined8 *)operator_new(0x18);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
    puVar7[2] = local_68;
    puVar11 = puVar7;
  }
  local_60 = puVar11;
  SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
  local_e8 = iVar13 + 1;
  if (iVar15 < local_e8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_f0,iVar13);
    puVar8 = local_f0;
  }
  local_d0 = 2;
  puVar8[(longlong)iVar13 * 2] = local_68;
  puVar8[(longlong)iVar13 * 2 + 1] = local_60;
  local_60 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  FMessageEndpointBuilder::Build(&local_108,&local_c8);
  plVar10 = param_1 + 2;
  if (plVar10 != &local_c8) {
    *plVar10 = local_c8;
    local_c8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 3,&local_c0);
  }
  plVar5 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c0 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_f0);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_100 + 0xc);
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      (**(code **)(*local_100 + 8))(local_100,1);
    }
  }
  lVar14 = *plVar10;
  if (lVar14 != 0) {
    local_res8[0] = 0x20001;
    lVar12 = FLiveLinkHeartbeatMessage::StaticStruct();
    local_res18 = *(undefined8 *)(lVar12 + 0x18);
    FMessageEndpoint::Subscribe(lVar14,&local_res18,local_res8);
  }
  return param_1;
}



// FUNCTION 142429940 FUN_142429940 body=252 status=ok
// SIG undefined FUN_142429940(void)

undefined4 * FUN_142429940(undefined4 *param_1)

{
  *param_1 = 0x400;
  param_1[1] = 0x400;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0x40800000;
  param_1[4] = 0x1010102;
  *(undefined2 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0x3f000000;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0x3f000000;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0x400;
  param_1[0x13] = 0x400;
  param_1[0x14] = 0x400;
  param_1[0x15] = 0x400;
  param_1[0x16] = 0x400;
  param_1[0x17] = 0x400;
  param_1[0x18] = 0x400;
  param_1[0x19] = 0x400;
  param_1[0x1a] = 0x400;
  param_1[0x1b] = 0x400;
  param_1[0x1c] = 0x400;
  param_1[0x1d] = 0x400;
  param_1[0x1e] = 0x400;
  param_1[0x1f] = 0x400;
  param_1[0x20] = 0x400;
  param_1[0x21] = 0x400;
  param_1[0x22] = 0x400;
  param_1[0x23] = 0x400;
  *(undefined2 *)(param_1 + 0x24) = 0;
  return param_1;
}



// FUNCTION 142429a40 FUN_142429a40 body=116 status=ok
// SIG undefined FUN_142429a40(void)

undefined4 * FUN_142429a40(undefined4 *param_1)

{
  param_1[2] = 0x3f800000;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0x43960000;
  *(undefined8 *)(param_1 + 5) = 0x41000000;
  param_1[7] = 0x3030303;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0x42a00000;
  *(undefined4 *)((longlong)param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  FUN_142429d10(param_1 + 0xc);
  FUN_142429940(param_1 + 0x2c);
  param_1[0x51] = 0;
  return param_1;
}



// FUNCTION 142429ac0 FPinConnectionResponse body=112 status=ok
// SIG undefined FPinConnectionResponse(void)

longlong FPinConnectionResponse::FPinConnectionResponse
                   (longlong param_1,undefined1 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FText::FText(param_1,param_3);
  *(undefined1 *)(param_1 + 0x18) = param_2;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfe;
  plVar4 = *(longlong **)(param_3 + 8);
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
  return param_1;
}



// FUNCTION 142429b30 FUN_142429b30 body=282 status=ok
// SIG undefined FUN_142429b30(void)

undefined8 * FUN_142429b30(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 2) = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[0x67] = 0;
  puVar2 = param_1 + 0xed;
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined1 *)((longlong)param_1 + 0x342) = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0xea) = 0;
  param_1[0xec] = 0;
  lVar1 = 2;
  if (param_1 + 0xee < puVar2) {
    lVar1 = 0;
  }
  param_1[0xeb] = param_1 + 0xcc;
  *(undefined1 *)((longlong)param_1 + 0x341) = 1;
  if (puVar2 <= param_1 + 0xee) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined4 *)puVar2 = 0xffffffff;
      puVar2 = (undefined8 *)((longlong)puVar2 + 4);
    }
  }
  *param_1 = &PTR_LAB_14509dc48;
  param_1[1] = &PTR_LAB_14509dcd8;
  param_1[0xef] = param_3;
  return param_1;
}



// FUNCTION 142429c50 FRepMovement body=40 status=ok
// SIG undefined FRepMovement(void)

undefined8 * FRepMovement::FRepMovement(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfc;
  *(undefined2 *)((longlong)param_1 + 0x31) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 0;
  return param_1;
}



// FUNCTION 142429c80 FSessionRecord body=144 status=ok
// SIG undefined FSessionRecord(void)

longlong FEngineSessionManager::FSessionRecord::FSessionRecord(longlong param_1,longlong param_2)

{
  FString::FString();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FString::FString(param_1 + 0x18,param_2 + 0x18);
  FString::FString(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x43);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(param_2 + 0x45);
  FString::FString(param_1 + 0x48,param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  return param_1;
}



// FUNCTION 142429d10 FUN_142429d10 body=958 status=ok
// SIG undefined FUN_142429d10(void)

undefined4 * FUN_142429d10(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  longlong local_38 [2];
  undefined4 *local_28;
  longlong *local_20;
  
  *param_1 = 0x3000100;
  local_28 = local_res8;
  *(undefined2 *)(param_1 + 1) = 0x103;
  param_1[2] = 4;
  *(undefined2 *)(param_1 + 3) = 3;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  local_20 = local_38;
  param_1[0x1c] = 0;
  local_res8[0] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_140b953f0(param_1 + 10,local_res10,&local_28,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_28 = local_res8;
  local_res8[0] = 1;
  local_20 = local_38;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_140b953f0(param_1 + 10,local_res10,&local_28,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_28 = local_res8;
  local_res8[0] = 2;
  local_20 = local_38;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_140b953f0(param_1 + 10,local_res10,&local_28,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_28 = local_res8;
  local_res8[0] = 3;
  local_20 = local_38;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_140b953f0(param_1 + 10,local_res10,&local_28,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  iVar1 = param_1[6];
  param_1[6] = iVar1 + 1;
  if ((int)param_1[7] < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4,iVar1);
  }
  puVar2 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 4));
  *puVar2 = 0x1000107;
  puVar2[1] = 8;
  puVar2[2] = 0x1000001;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 4) + -0xe + (longlong)(int)param_1[6] * 0x10) = 1;
  iVar1 = param_1[6];
  param_1[6] = iVar1 + 1;
  if ((int)param_1[7] < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4,iVar1);
  }
  puVar2 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 4));
  *puVar2 = 0x1000102;
  puVar2[1] = 8;
  puVar2[2] = 0x1000001;
  *(undefined1 *)(puVar2 + 3) = 0;
  iVar1 = param_1[6];
  param_1[6] = iVar1 + 1;
  if ((int)param_1[7] < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4,iVar1);
  }
  puVar2 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 4));
  *puVar2 = 0x1000108;
  puVar2[1] = 8;
  puVar2[2] = 0x1000001;
  *(undefined1 *)(puVar2 + 3) = 0;
  iVar1 = param_1[6];
  param_1[6] = iVar1 + 1;
  if ((int)param_1[7] < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4,iVar1);
  }
  puVar2 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 4));
  *puVar2 = 0x1000109;
  puVar2[1] = 8;
  puVar2[2] = 0x1000001;
  *(undefined1 *)(puVar2 + 3) = 0;
  iVar1 = param_1[6];
  param_1[6] = iVar1 + 1;
  if ((int)param_1[7] < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4,iVar1);
  }
  puVar2 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 4));
  *puVar2 = 0x1000205;
  puVar2[1] = 8;
  puVar2[2] = 0x1000001;
  *(undefined1 *)(puVar2 + 3) = 0;
  iVar1 = param_1[6];
  param_1[6] = iVar1 + 1;
  if ((int)param_1[7] < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4,iVar1);
  }
  puVar2 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 4));
  *puVar2 = 0x1000303;
  puVar2[1] = 8;
  puVar2[2] = 0x1000001;
  *(undefined1 *)(puVar2 + 3) = 0;
  iVar1 = param_1[6];
  param_1[6] = iVar1 + 1;
  if ((int)param_1[7] < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4,iVar1);
  }
  puVar2 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 4));
  *puVar2 = 0x1000104;
  puVar2[1] = 8;
  puVar2[2] = 0x1000001;
  *(undefined1 *)(puVar2 + 3) = 0;
  iVar1 = param_1[6];
  param_1[6] = iVar1 + 1;
  if ((int)param_1[7] < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4,iVar1);
  }
  puVar2 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 4));
  *puVar2 = 0x100010a;
  puVar2[1] = 8;
  puVar2[2] = 0x1000001;
  *(undefined1 *)(puVar2 + 3) = 0;
  iVar1 = param_1[6];
  param_1[6] = iVar1 + 1;
  if ((int)param_1[7] < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4,iVar1);
  }
  puVar2 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 4));
  *puVar2 = 0x100030c;
  puVar2[1] = 8;
  puVar2[2] = 0x1000001;
  *(undefined1 *)(puVar2 + 3) = 0;
  return param_1;
}



// FUNCTION 14242a0d0 FUN_14242a0d0 body=217 status=ok
// SIG undefined FUN_14242a0d0(void)

byte * FUN_14242a0d0(byte *param_1,longlong *param_2,byte param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  
  param_1[0] = 0;
  param_1[1] = 0;
  if (param_4 <= (int)param_2[8]) {
    if ((longlong *)param_2[0xe] != (longlong *)0x0) {
      cVar2 = (**(code **)(*(longlong *)param_2[0xe] + 0x68))();
      *param_1 = *param_1 | cVar2 == '\0';
      cVar2 = (**(code **)(*(longlong *)param_2[0xe] + 0x88))();
      param_1[1] = param_3;
      *param_1 = *param_1 | -(cVar2 != '\0') & 2U;
    }
    pbVar1 = *(byte **)param_2[1];
    if ((byte *)((undefined8 *)param_2[1])[1] < pbVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1,1);
    }
    else {
      *param_1 = *pbVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    pbVar1 = *(byte **)param_2[1];
    if ((byte *)((undefined8 *)param_2[1])[1] < pbVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 1,1);
    }
    else {
      param_1[1] = *pbVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
  }
  return param_1;
}



// FUNCTION 14242a1b0 FUN_14242a1b0 body=33 status=ok
// SIG undefined FUN_14242a1b0(void)

undefined8 * FUN_14242a1b0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_14509e520;
  return param_1;
}



// FUNCTION 14242a1e0 UDynamicBlueprintBinding body=33 status=ok
// SIG undefined UDynamicBlueprintBinding(void)

undefined8 * UDynamicBlueprintBinding::UDynamicBlueprintBinding(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_14509d9b8;
  return param_1;
}



// FUNCTION 14242a210 UEdGraph body=67 status=ok
// SIG undefined UEdGraph(void)

undefined8 * UEdGraph::UEdGraph(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14509d6d0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 3;
  return param_1;
}



// FUNCTION 14242a260 UEdGraphNode body=99 status=ok
// SIG undefined UEdGraphNode(void)

undefined8 * UEdGraphNode::UEdGraphNode(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14509d1c0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) & 0x18 | 4;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 14242a2d0 FUN_14242a2d0 body=378 status=ok
// SIG undefined FUN_14242a2d0(void)

undefined8 * FUN_14242a2d0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  FUN_141781840();
  iVar3 = 0;
  iVar4 = 0;
  plVar1 = param_1 + 0x14;
  param_1[5] = 0;
  plVar2 = param_1 + 0x16;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) & 0x18 | 4;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_14509e288;
  *plVar1 = 0;
  param_1[0x15] = 0;
  *plVar2 = 0;
  param_1[0x17] = 0;
  if ((wchar_t *)*plVar1 != L"Shared/GraphNodes/Blueprint") {
    *(undefined4 *)(param_1 + 0x15) = 0;
    if (*(int *)((longlong)param_1 + 0xac) != 0x1c) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,0x1c);
      iVar3 = *(int *)(param_1 + 0x15);
    }
    *(int *)(param_1 + 0x15) = iVar3 + 0x1c;
    if (*(int *)((longlong)param_1 + 0xac) < iVar3 + 0x1c) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    builtin_wcsncpy((wchar_t *)*plVar1,L"Shared/GraphNodes/Blueprint",0x1c);
  }
  if ((wchar_t *)*plVar2 != L"UEdGraphNode_Documentation") {
    *(undefined4 *)(param_1 + 0x17) = 0;
    if (*(int *)((longlong)param_1 + 0xbc) != 0x1b) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar2,0x1b);
      iVar4 = *(int *)(param_1 + 0x17);
    }
    *(int *)(param_1 + 0x17) = iVar4 + 0x1b;
    if (*(int *)((longlong)param_1 + 0xbc) < iVar4 + 0x1b) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
    }
    builtin_wcsncpy((wchar_t *)*plVar2,L"UEdGraphNode_Documentation",0x1b);
  }
  return param_1;
}



// FUNCTION 14242a450 FUN_14242a450 body=137 status=ok
// SIG undefined FUN_14242a450(void)

undefined8 * FUN_14242a450(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14509d458;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_142429290(param_1 + 10);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FText::FText(param_1 + 0x1b);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 14242a4e0 FUN_14242a4e0 body=33 status=ok
// SIG undefined FUN_14242a4e0(void)

undefined8 * FUN_14242a4e0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_14509ddf0;
  return param_1;
}



// FUNCTION 14242a510 UEngineMessage body=114 status=ok
// SIG undefined UEngineMessage(void)

undefined8 * UEngineMessage::UEngineMessage(undefined8 *param_1)

{
  ULocalMessage::ULocalMessage();
  *param_1 = &PTR__scalar_deleting_destructor__14509ee80;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 14242a590 ~TArray<FDefaultDynamicResolutionStateProxy::InFlightFrameQueries,FDefaultAllocator> body=108 status=ok
// SIG undefined ~TArray<FDefaultDynamicResolutionStateProxy::InFlightFrameQueries,FDefaultAllocator>(void)

void TArray<FDefaultDynamicResolutionStateProxy::InFlightFrameQueries,FDefaultAllocator>::
     ~TArray<FDefaultDynamicResolutionStateProxy::InFlightFrameQueries,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    do {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x18);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1);
      lVar1 = lVar1 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 14242a600 FUN_14242a600 body=136 status=ok
// SIG undefined FUN_14242a600(void)

void FUN_14242a600(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar1 = (undefined8 *)param_1[0xe];
  iVar3 = *(int *)(param_1 + 0xf);
  puVar2 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = param_1;
  }
  if (iVar3 != 0) {
    do {
      *puVar2 = &PTR_FUN_143f48ad0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar2 + 6);
      FUN_141edd2d0(puVar2);
      puVar2 = puVar2 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar1 = (undefined8 *)param_1[0xe];
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14242a690 ~TGlobalResource<FGlobalDynamicMeshIndexPool> body=119 status=ok
// SIG undefined ~TGlobalResource<FGlobalDynamicMeshIndexPool>(void)

void TGlobalResource<FGlobalDynamicMeshIndexPool>::~TGlobalResource<FGlobalDynamicMeshIndexPool>
               (undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__14509d150;
  param_1[0x82] = &PTR_LAB_14509d158;
  param_1[0x84] = &PTR_LAB_14509d180;
  FRenderResource::ReleaseResource(param_1 + 0x84);
  *param_1 = &PTR__scalar_deleting_destructor__14509d0e0;
  param_1[0x82] = &PTR_LAB_14509d0e8;
  param_1[0x84] = &PTR_LAB_14509d110;
  TRenderResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
  ~TRenderResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
            (param_1);
  return;
}



// FUNCTION 14242a710 ~TRenderResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int> body=103 status=ok
// SIG undefined ~TRenderResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>(void)

void TRenderResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
     ~TRenderResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
               (undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__14509d070;
  param_1[0x82] = &PTR_LAB_14509d078;
  param_1[0x84] = &PTR_LAB_14509d0a0;
  FUN_141edd2d0();
  param_1[0x82] = &PTR__scalar_deleting_destructor__1444d8080;
  FTickableObjectRenderThread::Unregister(param_1 + 0x82);
  TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
  ~TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>(param_1);
  return;
}



// FUNCTION 14242a780 ~TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int> body=652 status=ok
// SIG undefined ~TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>(void)

void TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
     ~TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
               (longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_res18;
  
  lVar11 = 0x100;
  lVar10 = 0x10;
  *param_1 = (longlong)&PTR__scalar_deleting_destructor__14509d068;
  do {
    lVar6 = 0x10;
    plVar7 = param_1 + 3;
    do {
      iVar8 = *(int *)(lVar11 + (longlong)plVar7);
      if (iVar8 != 0) {
        iVar9 = (int)*plVar7;
        if (*(int *)((longlong)plVar7 + 4) < iVar9 + iVar8) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar7 + -1);
          iVar9 = (int)*plVar7;
        }
        plVar4 = *(longlong **)(lVar11 + -8 + (longlong)plVar7);
        plVar3 = (longlong *)((longlong)iVar9 * 0x10 + plVar7[-1]);
        iVar9 = iVar8;
        do {
          lVar5 = *plVar4;
          *plVar3 = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          *(int *)(plVar3 + 1) = (int)plVar4[1];
          puVar1 = (undefined4 *)((longlong)plVar4 + 0xc);
          plVar4 = plVar4 + 2;
          *(undefined4 *)((longlong)plVar3 + 0xc) = *puVar1;
          plVar3 = plVar3 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        *(int *)plVar7 = (int)*plVar7 + iVar8;
      }
      iVar8 = *(int *)(lVar11 + 4 + (longlong)plVar7);
      puVar1 = (undefined4 *)(lVar11 + (longlong)plVar7);
      lVar5 = *(longlong *)(puVar1 + -2);
      iVar9 = *(int *)(lVar11 + (longlong)plVar7);
      if (iVar8 < 0) {
        if (iVar9 != 0) {
          do {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar5);
            lVar5 = lVar5 + 0x10;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          iVar8 = puVar1[1];
        }
        *puVar1 = 0;
        if (iVar8 != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(puVar1 + -2,0);
        }
      }
      else {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar5);
          lVar5 = lVar5 + 0x10;
        }
        *puVar1 = 0;
      }
      plVar7 = plVar7 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar11 = lVar11 + 0x100;
  } while (lVar11 < 0x400);
  lVar11 = 0x10;
  plVar7 = param_1;
  do {
    plVar4 = plVar7 + 2;
    iVar8 = (int)plVar7[3] + -1;
    if (-1 < iVar8) {
      lVar5 = (longlong)iVar8 << 4;
      lVar6 = lVar5;
      do {
        local_res18 = *(longlong *)(lVar5 + *plVar4);
        if (local_res18 != 0) {
          LOCK();
          *(int *)(local_res18 + 8) = *(int *)(local_res18 + 8) + 1;
          UNLOCK();
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(*plVar4 + lVar6);
        iVar9 = (int)plVar7[3];
        iVar2 = (iVar9 - iVar8) + -1;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar6 + *plVar4),(void *)((longlong)(iVar9 - iVar2) * 0x10 + *plVar4),
                     (longlong)iVar2 << 4);
          iVar9 = (int)plVar7[3];
        }
        *(int *)(plVar7 + 3) = iVar9 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar4);
        lVar6 = lVar6 + -0x10;
        lVar5 = lVar5 + -0x10;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
    lVar11 = lVar11 + -1;
    plVar7 = plVar4;
  } while (lVar11 != 0);
  lVar11 = 0x30;
  plVar7 = param_1 + 0x82;
  do {
    iVar8 = (int)plVar7[-1];
    plVar7 = plVar7 + -2;
    lVar6 = *plVar7;
    lVar11 = lVar11 + -1;
    if (iVar8 != 0) {
      do {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6);
        lVar6 = lVar6 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      lVar6 = *plVar7;
    }
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  } while (lVar11 != 0);
  param_1 = param_1 + 0x22;
  do {
    iVar8 = (int)param_1[-1];
    param_1 = param_1 + -2;
    lVar11 = *param_1;
    lVar10 = lVar10 + -1;
    if (iVar8 != 0) {
      do {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar11);
        lVar11 = lVar11 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      lVar11 = *param_1;
    }
    if (lVar11 != 0) {
      FMemory::Free(lVar11);
    }
  } while (lVar10 != 0);
  return;
}



// FUNCTION 14242aa10 ~TSparseArray<TSetElement<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> body=205 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)((longlong)local_1c * 0x30 + *local_38 + 0x18) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14242aae0 ~FDynamicMeshBuilder body=69 status=ok
// SIG undefined ~FDynamicMeshBuilder(void)

void FDynamicMeshBuilder::~FDynamicMeshBuilder(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014242ab1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
    return;
  }
  return;
}



// FUNCTION 14242ab30 FUN_14242ab30 body=773 status=ok
// SIG undefined FUN_14242ab30(void)

longlong * FUN_14242ab30(longlong *param_1,undefined8 *param_2)

{
  wchar_t wVar1;
  wint_t wVar2;
  wint_t wVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464b0088);
  iVar4 = FArchive::CustomVer(param_1,&DAT_1464b0088);
  if (0x1e < iVar4) {
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
    (**(code **)(*param_1 + 0x40))(param_1,param_2 + 1);
    goto LAB_14242adc7;
  }
  iVar4 = 0;
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FUN_14158ce90(param_1,&local_48);
  if ((int)param_1[8] < 0x202) {
    pwVar7 = L"asset";
    pwVar6 = L"";
    if ((int)local_40 != 0) {
      pwVar6 = local_48;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)(pwVar6 + -0xa284ded4) + (longlong)pwVar7);
      if ((wVar1 == L'\0') && (*pwVar7 == L'\0')) goto LAB_14242ac1e;
      if (wVar1 != *pwVar7) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar7);
        if (wVar2 != wVar3) goto LAB_14242ac13;
      }
      pwVar7 = pwVar7 + 1;
    } while( true );
  }
  goto LAB_14242ad42;
LAB_14242acd4:
  if (wVar2 == wVar3) {
LAB_14242acdf:
    if (local_48 != L"softclass") {
      uVar5 = local_40._4_4_;
      local_40 = (ulonglong)local_40._4_4_ << 0x20;
      if (uVar5 != 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,10);
        iVar4 = (int)local_40;
        uVar5 = local_40._4_4_;
      }
      local_40 = CONCAT44(local_40._4_4_,iVar4 + 10);
      if ((int)uVar5 < iVar4 + 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
      }
      builtin_wcsncpy(local_48,L"softclass",10);
    }
  }
  goto LAB_14242ad42;
LAB_14242ac13:
  if (wVar2 != wVar3) {
    pwVar7 = L"assetclass";
    pwVar6 = L"";
    if ((int)local_40 != 0) {
      pwVar6 = local_48;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)(pwVar6 + -0xa284de5c) + (longlong)pwVar7);
      if ((wVar1 == L'\0') && (*pwVar7 == L'\0')) goto LAB_14242acdf;
      if (wVar1 != *pwVar7) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar7);
        if (wVar2 != wVar3) goto LAB_14242acd4;
      }
      pwVar7 = pwVar7 + 1;
    } while( true );
  }
LAB_14242ac1e:
  if (local_48 != L"softobject") {
    uVar5 = local_40._4_4_;
    local_40 = (ulonglong)local_40._4_4_ << 0x20;
    if (uVar5 != 0xb) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,0xb);
      iVar4 = (int)local_40;
      uVar5 = local_40._4_4_;
    }
    local_40 = CONCAT44(local_40._4_4_,iVar4 + 0xb);
    if ((int)uVar5 < iVar4 + 0xb) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
    }
    builtin_wcsncpy(local_48,L"softobject",0xb);
  }
LAB_14242ad42:
  pwVar6 = L"";
  if ((int)local_40 != 0) {
    pwVar6 = local_48;
  }
  FName::FName(&local_res8,pwVar6,1);
  *param_2 = local_res8;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_14158ce90(param_1,&local_38);
  puVar8 = (undefined8 *)&DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar8 = local_38;
  }
  FName::FName(&local_res8,puVar8,1);
  param_2[1] = local_res8;
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free();
  }
LAB_14242adc7:
  if ((((*(byte *)((longlong)param_1 + 0x2a) & 8) == 0) ||
      ((*(byte *)((longlong)param_1 + 0x2a) & 0x10) != 0)) || ((*(byte *)(param_1 + 5) & 0x40) != 0)
     ) {
    local_res8 = FWeakObjectPtr::Get(param_2 + 2,1);
    (**(code **)(*param_1 + 0x30))(param_1,&local_res8);
    if (((*(byte *)(param_1 + 5) & 1) != 0) || ((*(byte *)((longlong)param_1 + 0x2a) & 0x10) != 0))
    {
      FWeakObjectPtr::operator=(param_2 + 2,local_res8);
    }
  }
  (**(code **)(*param_1 + 8))(param_1,param_2 + 3);
  (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0x19);
  return param_1;
}



// FUNCTION 14242ae40 FUN_14242ae40 body=853 status=ok
// SIG undefined FUN_14242ae40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14242ae40(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  char cVar12;
  undefined1 auStack_158 [32];
  char local_138;
  int local_134;
  longlong local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined4 uStack_f8;
  char acStack_f4 [52];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar6 = param_1[1];
  local_58[0] = 0;
  local_58[1] = 0;
  local_40 = 0;
  local_130 = lVar6 + 0x38;
  local_78 = 0;
  local_124 = 0x30c00;
  local_120 = 0;
  uVar8 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  local_128 = 0;
  local_44 = *(undefined4 *)(lVar6 + 0x1a8);
  local_48 = *(undefined4 *)(lVar6 + 0x1b0);
  local_68 = *(undefined8 *)(lVar6 + 0x160);
  local_60 = *(undefined8 *)(lVar6 + 0x168);
  iVar4 = *(int *)(lVar6 + 0x188);
  if (1 < iVar4) {
    iVar4 = 2;
  }
  if (0 < iVar4) {
    uVar10 = 0;
    do {
      lVar9 = *(longlong *)(lVar6 + 0x180);
      if (*(longlong *)(lVar6 + 0x180) == 0) {
        lVar9 = lVar6 + 0x170;
      }
      local_58[uVar10] = *(undefined8 *)(lVar9 + uVar10 * 8);
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)iVar4);
  }
  uVar10 = 0;
  uStack_70 = *(undefined8 *)(lVar6 + 400);
  local_138 = *(char *)(lVar6 + 0x1b4);
  iVar4 = 4;
  if (local_138 == '\0') {
    iVar4 = 8;
  }
  local_134 = iVar4 * *(int *)(lVar6 + 0x1a8);
  if (0 < *(int *)(lVar6 + 0x1a8) + -1) {
    uVar10 = 0;
    iVar11 = 0xd;
    if (local_138 == '\0') {
      uVar10 = 0;
      iVar11 = 4;
    }
    do {
      uVar1 = local_c0;
      lVar9 = (longlong)(int)local_c0;
      cVar12 = (char)uVar10;
      iVar2 = (int)local_c0 + 1;
      local_c0 = CONCAT44(local_c0._4_4_,iVar2);
      if (local_c0._4_4_ < iVar2) {
        TArray<FVertexStreamComponent,TFixedAllocator<4>_>::ResizeGrow
                  (&local_100,uVar1 & 0xffffffff);
      }
      uVar8 = (int)uVar10 + 2;
      uVar10 = (ulonglong)uVar8;
      acStack_f4[lVar9 * 0x10] = (char)iVar4 * cVar12;
      acStack_f4[lVar9 * 0x10 + 1] = (char)local_134;
      (&local_100)[lVar9 * 2] = lVar6 + 0xa8;
      (&uStack_f8)[lVar9 * 4] = 0;
      acStack_f4[lVar9 * 0x10 + 2] = (char)iVar11;
      acStack_f4[lVar9 * 0x10 + 3] = '\x04';
      lVar6 = param_1[1];
    } while ((int)uVar8 < *(int *)(lVar6 + 0x1a8) + -1);
    uVar10 = local_80 & 0xffffffff;
  }
  uVar1 = local_c0;
  iVar11 = local_134;
  iVar2 = 0;
  if ((int)uVar8 < *(int *)(lVar6 + 0x1a8)) {
    lVar9 = (longlong)(int)local_c0;
    iVar3 = (int)local_c0 + 1;
    cVar12 = '\f';
    if (local_138 == '\0') {
      cVar12 = '\x02';
    }
    local_c0 = CONCAT44(local_c0._4_4_,iVar3);
    if (local_c0._4_4_ < iVar3) {
      TArray<FVertexStreamComponent,TFixedAllocator<4>_>::ResizeGrow(&local_100,uVar1 & 0xffffffff);
    }
    (&local_100)[lVar9 * 2] = lVar6 + 0xa8;
    (&uStack_f8)[lVar9 * 4] = 0;
    acStack_f4[lVar9 * 0x10] = (char)uVar8 * (char)iVar4;
    acStack_f4[lVar9 * 0x10 + 1] = (char)iVar11;
    acStack_f4[lVar9 * 0x10 + 2] = cVar12;
    acStack_f4[lVar9 * 0x10 + 3] = '\x04';
    lVar6 = param_1[1];
    uVar10 = local_80 & 0xffffffff;
  }
  local_120 = lVar6 + 0x70;
  local_118 = 0x405080000000000;
  local_108 = 0x405080400000000;
  local_110 = local_120;
  if (0 < (int)uVar10) {
    do {
      lVar6 = *(longlong *)(param_1[1] + 0x150);
      if (lVar6 == 0) {
        lVar6 = param_1[1] + 0xe0;
      }
      lVar9 = (longlong)iVar2;
      iVar4 = (int)uVar10 + 1;
      local_80 = CONCAT44(local_80._4_4_,iVar4);
      if (local_80._4_4_ < iVar4) {
        TArray<TSharedPtr<FCachedTypefaceData,0>,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
                  (local_a8,uVar10);
      }
      puVar7 = local_a8;
      if (local_88 != (undefined1 *)0x0) {
        puVar7 = local_88;
      }
      iVar2 = iVar2 + 1;
      lVar5 = (longlong)(int)uVar10;
      *(longlong *)(puVar7 + lVar5 * 0x10) = lVar6 + lVar9 * 0x38;
      *(undefined4 *)(puVar7 + lVar5 * 0x10 + 8) = 0;
      *(undefined4 *)(puVar7 + lVar5 * 0x10 + 0xc) = 0x4085c54;
      uVar10 = local_80 & 0xffffffff;
    } while (iVar2 < (int)local_80);
  }
  FUN_142578240(*param_1,&local_130);
  if (local_88 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14242b1a0 FUN_14242b1a0 body=297 status=ok
// SIG undefined FUN_14242b1a0(void)

void FUN_14242b1a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  lVar3 = *param_1;
  cVar2 = (char)param_1[1];
  if (*(char *)(lVar3 + 0x44) != '\0') {
    puVar5 = (undefined8 *)0x0;
    lVar1 = *(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar3 + 0x40) * 0x28;
    if (cVar2 == '\x01') {
      puVar5 = (undefined8 *)(lVar1 + 8);
    }
    else if (cVar2 == '\x02') {
      puVar5 = (undefined8 *)(lVar1 + 0x10);
    }
    else if (cVar2 == '\x03') {
      puVar5 = (undefined8 *)(lVar1 + 0x18);
    }
    (**(code **)(*DAT_146ab6358 + 0x670))(DAT_146ab6358,local_res8,&DAT_146ab6e78,2);
    TRefCountPtr<FRHIIndexBuffer>::operator=(puVar5,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    uVar4 = *puVar5;
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    puVar6[2] = uVar4;
    *puVar6 = &PTR_LAB_143f59490;
  }
  if (cVar2 == '\x03') {
    *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
    *(undefined1 *)(lVar3 + 0x44) = 0;
  }
  return;
}



// FUNCTION 14242b2d0 FUN_14242b2d0 body=153 status=ok
// SIG undefined FUN_14242b2d0(void)

void FUN_14242b2d0(int *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  
  if ((*param_1 != 0) || (cVar4 = (**(code **)(*param_2 + 0x180))(param_2), cVar4 == '\0')) {
    if (*param_1 != 1) {
      return;
    }
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
  }
  plVar2 = *(longlong **)(param_1 + 2);
  iVar1 = (int)plVar2[1];
  *(int *)(plVar2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
  }
  *(longlong **)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 14242b370 operator() body=119 status=ok
// SIG undefined operator()(void)

void <lambda_d579f6d3927cad775059d0ae9c1a6fd5>::operator()(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x10) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x14) = 0;
  *(undefined4 *)(lVar1 + 8) = 0;
  if (0x7fffffff < *(uint *)(lVar1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (lVar1,0);
  }
  *(undefined4 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x20) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0x1c) = 1;
  lVar2 = *(longlong *)(lVar1 + 0x30);
  lVar1 = lVar2 + (longlong)*(int *)(lVar1 + 0x38) * 0x28;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    *(undefined8 *)(lVar2 + 0x20) = 0xffffffffffffffff;
  }
  return;
}



// FUNCTION 14242b420 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`BeginSetUniformBufferContents<FPrimitiveUniformShaderParameters>'::`2'::SetUniformBufferContentsName,<lambda_f47d7766be7860e20b4421e6ae4cbb06>_>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__14509f170;
  if (param_1[0x39] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x39] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 14242b490 FUN_14242b490 body=97 status=ok
// SIG undefined FUN_14242b490(void)

undefined8 * FUN_14242b490(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14509f180;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14242b500 FUN_14242b500 body=97 status=ok
// SIG undefined FUN_14242b500(void)

undefined8 * FUN_14242b500(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14509f1a0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14242b570 FUN_14242b570 body=97 status=ok
// SIG undefined FUN_14242b570(void)

undefined8 * FUN_14242b570(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14509f1b0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14242b5e0 FUN_14242b5e0 body=97 status=ok
// SIG undefined FUN_14242b5e0(void)

undefined8 * FUN_14242b5e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14509f190;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14242b650 FUN_14242b650 body=97 status=ok
// SIG undefined FUN_14242b650(void)

undefined8 * FUN_14242b650(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14509f160;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14242b6c0 FUN_14242b6c0 body=89 status=ok
// SIG undefined FUN_14242b6c0(void)

undefined8 * FUN_14242b6c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14509d958;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14242b720 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FMeshParticleVertexFactory::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x520);
  }
  return param_1;
}



// FUNCTION 14242b760 FUN_14242b760 body=312 status=ok
// SIG undefined FUN_14242b760(void)

undefined8 * FUN_14242b760(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  longlong *plVar10;
  undefined1 local_28 [32];
  
  plVar3 = (longlong *)param_1[1];
  *param_1 = &PTR_FUN_14509dda8;
  if (((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) &&
     ((DAT_146ac3ac5 != '\0' ||
      (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 == '\0' && (DAT_1468c21ae != '\0')) &&
       (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)))))) {
    plVar10 = (longlong *)FUN_14242ef00(local_28,0,0xff);
    *(longlong **)(*plVar10 + 0x10) = plVar3;
    lVar4 = *plVar10;
    lVar7 = plVar10[2];
    lVar5 = plVar10[1];
    lVar6 = *(longlong *)(lVar4 + 0x20);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
      UNLOCK();
    }
    FUN_14048a3d0(lVar4,lVar5,(int)lVar7,1);
    if (lVar6 != 0) {
      LOCK();
      piVar1 = (int *)(lVar6 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar6);
      }
    }
  }
  else {
    FBaseGraphTask::GetSmallTaskAllocator();
    FUN_142434440(plVar3,1);
    if (plVar3 != (longlong *)0x0) {
      TArray<FDefaultDynamicResolutionStateProxy::InFlightFrameQueries,FDefaultAllocator>::
      ~TArray<FDefaultDynamicResolutionStateProxy::InFlightFrameQueries,FDefaultAllocator>
                (plVar3 + 6);
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(plVar3,0x48);
    }
  }
  *param_1 = &PTR_FUN_143f74a00;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14242b8a0 `scalar_deleting_destructor' body=101 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FDynamicMeshPrimitiveUniformBuffer::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14509d958;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x40);
  FUN_141edd2d0(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14242b910 FUN_14242b910 body=250 status=ok
// SIG undefined FUN_14242b910(void)

undefined8 * FUN_14242b910(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14509d9b0;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 8) + 0x30))(lVar1 + 8);
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
    }
  }
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x50) != 0)) {
    (**(code **)(*(longlong *)(lVar1 + 8) + 0x30))(lVar1 + 8);
    lVar1 = param_1[2];
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
    }
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 8) + 0x30))(lVar1 + 8);
    lVar1 = param_1[3];
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
    }
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 8) + 0x30))(lVar1 + 8);
    lVar1 = param_1[4];
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
    }
  }
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14242ba10 FUN_14242ba10 body=110 status=ok
// SIG undefined FUN_14242ba10(void)

longlong FUN_14242ba10(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 8) = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x40);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  FUN_141edd2d0(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14242ba80 FUN_14242ba80 body=239 status=ok
// SIG undefined FUN_14242ba80(void)

longlong FUN_14242ba80(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 400);
  TArray<TRefCountPtr<FRHITexture2D>,TInlineAllocator<2,FDefaultAllocator>_>::
  ~TArray<TRefCountPtr<FRHITexture2D>,TInlineAllocator<2,FDefaultAllocator>_>(param_1 + 0x170);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x168);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x160);
  FUN_14242a600(param_1 + 0xe0);
  *(undefined ***)(param_1 + 0xa8) = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xd8);
  FUN_141edd2d0(param_1 + 0xa8);
  *(undefined ***)(param_1 + 0x70) = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xa0);
  FUN_141edd2d0(param_1 + 0x70);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x68);
  FUN_141edd2d0(param_1 + 0x38);
  FUN_141edd2d0(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 14242bb70 FUN_14242bb70 body=120 status=ok
// SIG undefined FUN_14242bb70(void)

longlong FUN_14242bb70(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x760);
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x658);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x650);
  FUN_141edd2d0(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x780);
  }
  return param_1;
}



// FUNCTION 14242bbf0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UEdGraph::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14242bc40 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UEdGraphNode::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14242bcb0 FUN_14242bcb0 body=146 status=ok
// SIG undefined FUN_14242bcb0(void)

longlong FUN_14242bcb0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14242bd50 `scalar_deleting_destructor' body=231 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UEdGraphPin_Deprecated::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xe0);
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
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 14242be40 `scalar_deleting_destructor' body=174 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UEngineMessage::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14242bf10 FUN_14242bf10 body=174 status=ok
// SIG undefined FUN_14242bf10(void)

void FUN_14242bf10(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x50);
  *(int *)(lVar2 + 0x50) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x54) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar2 + 0x48,iVar1);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x48) + (longlong)iVar1 * 4) = param_2;
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x50);
  *(int *)(lVar2 + 0x50) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x54) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar2 + 0x48,iVar1);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x48) + (longlong)iVar1 * 4) = param_3;
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x50);
  *(int *)(lVar2 + 0x50) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x54) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar2 + 0x48,iVar1);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x48) + (longlong)iVar1 * 4) = param_4;
  return;
}



// FUNCTION 14242bfc0 FUN_14242bfc0 body=98 status=ok
// SIG undefined FUN_14242bfc0(void)

void FUN_14242bfc0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 1);
  lVar2 = *(longlong *)(param_1 + 8);
  if (iVar1 != 0) {
    iVar3 = *(int *)(lVar2 + 0x50);
    if (*(int *)(lVar2 + 0x54) < iVar3 + iVar1) {
      TArray<float,FDefaultAllocator>::ResizeTo(lVar2 + 0x48);
      iVar3 = *(int *)(lVar2 + 0x50);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(lVar2 + 0x48) + (longlong)iVar3 * 4),(void *)*param_2,
               (longlong)iVar1 << 2);
    *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + iVar1;
  }
  return;
}



// FUNCTION 14242c030 FUN_14242c030 body=151 status=ok
// SIG undefined FUN_14242c030(void)

undefined4 FUN_14242c030(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(lVar3 + 0x1a0);
  iVar2 = *(int *)(lVar3 + 0x1a0);
  *(int *)(lVar3 + 0x1a0) = iVar2 + 1;
  if (*(int *)(lVar3 + 0x1a4) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow((longlong *)(lVar3 + 0x198),iVar2);
  }
  puVar5 = (undefined8 *)((longlong)iVar2 * 0x5c + *(longlong *)(lVar3 + 0x198));
  if (puVar5 != (undefined8 *)0x0) {
    uVar4 = param_2[1];
    *puVar5 = *param_2;
    puVar5[1] = uVar4;
    uVar4 = param_2[3];
    puVar5[2] = param_2[2];
    puVar5[3] = uVar4;
    uVar4 = param_2[5];
    puVar5[4] = param_2[4];
    puVar5[5] = uVar4;
    uVar4 = param_2[7];
    puVar5[6] = param_2[6];
    puVar5[7] = uVar4;
    uVar4 = param_2[9];
    puVar5[8] = param_2[8];
    puVar5[9] = uVar4;
    puVar5[10] = param_2[10];
    *(undefined4 *)(puVar5 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  }
  return uVar1;
}



// FUNCTION 14242c0d0 FUN_14242c0d0 body=869 status=ok
// SIG undefined FUN_14242c0d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_14242c0d0(longlong param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
             undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  ulonglong uVar9;
  float *pfVar10;
  uint5 uVar11;
  unkbyte9 Var12;
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  longlong lVar20;
  undefined1 uVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar30;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  lVar20 = *(longlong *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(lVar20 + 0x1a0);
  iVar18 = *(int *)(lVar20 + 0x1a0);
  *(int *)(lVar20 + 0x1a0) = iVar18 + 1;
  if (*(int *)(lVar20 + 0x1a4) < iVar18 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow((longlong *)(lVar20 + 0x198),iVar18);
  }
  puVar22 = (undefined8 *)((longlong)iVar18 * 0x5c + *(longlong *)(lVar20 + 0x198));
  if (puVar22 == (undefined8 *)0x0) {
    puVar22 = (undefined8 *)0x0;
  }
  else {
    *(undefined8 *)((longlong)puVar22 + 0x4c) = 0;
  }
  lVar20 = 0;
  *puVar22 = *param_2;
  *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((longlong)puVar22 + 0xc) = *param_3;
  iVar16 = (int)ROUND(*param_4 * 127.0 + *param_4 * 127.0 + 0.5) >> 1;
  iVar18 = -0x80;
  if ((-0x81 < iVar16) && (iVar18 = 0x7f, iVar16 < 0x7f)) {
    iVar18 = iVar16;
  }
  *(char *)((longlong)puVar22 + 0x4c) = (char)iVar18;
  iVar17 = (int)ROUND(param_4[1] * 127.0 + param_4[1] * 127.0 + 0.5) >> 1;
  iVar16 = -0x80;
  iVar18 = iVar16;
  if ((-0x81 < iVar17) && (iVar18 = 0x7f, iVar17 < 0x7f)) {
    iVar18 = iVar17;
  }
  *(char *)((longlong)puVar22 + 0x4d) = (char)iVar18;
  iVar18 = (int)ROUND(param_4[2] * 127.0 + param_4[2] * 127.0 + 0.5) >> 1;
  if ((-0x81 < iVar18) && (iVar16 = 0x7f, iVar18 < 0x7f)) {
    iVar16 = iVar18;
  }
  pfVar10 = (float *)CONCAT44(param_6._4_4_,(uint)param_6);
  *(char *)((longlong)puVar22 + 0x4e) = (char)iVar16;
  *(undefined1 *)((longlong)puVar22 + 0x4f) = 0x7f;
  iVar17 = (int)ROUND(*pfVar10 * 127.0 + *pfVar10 * 127.0 + 0.5) >> 1;
  iVar16 = -0x80;
  iVar18 = iVar16;
  if ((-0x81 < iVar17) && (iVar18 = 0x7f, iVar17 < 0x7f)) {
    iVar18 = iVar17;
  }
  *(char *)(puVar22 + 10) = (char)iVar18;
  iVar18 = (int)ROUND(pfVar10[1] * 127.0 + pfVar10[1] * 127.0 + 0.5) >> 1;
  if ((-0x81 < iVar18) && (iVar16 = 0x7f, iVar18 < 0x7f)) {
    iVar16 = iVar18;
  }
  *(char *)((longlong)puVar22 + 0x51) = (char)iVar16;
  iVar16 = (int)ROUND(pfVar10[2] * 127.0 + pfVar10[2] * 127.0 + 0.5) >> 1;
  iVar18 = -0x80;
  if ((-0x81 < iVar16) && (iVar18 = 0x7f, iVar16 < 0x7f)) {
    iVar18 = iVar16;
  }
  *(char *)((longlong)puVar22 + 0x52) = (char)iVar18;
  *(undefined1 *)((longlong)puVar22 + 0x53) = 0x7f;
  FPackedNormal::FPackedNormal(&param_6,pfVar10);
  FPackedNormal::FPackedNormal(local_res8,param_5);
  FPackedNormal::FPackedNormal(local_res10,param_4);
  auVar2[0xc] = (char)((uint)param_6 >> 0x18);
  auVar2._0_12_ = ZEXT712(0);
  uVar11 = CONCAT32(auVar2._10_3_,(ushort)(byte)((uint)param_6 >> 0x10));
  auVar15._5_8_ = 0;
  auVar15._0_5_ = uVar11;
  Var12 = CONCAT72(SUB137(auVar15 << 0x40,6),(ushort)(byte)((uint)param_6 >> 8));
  auVar25._0_4_ = (uint)param_6 & 0xff;
  auVar25._4_9_ = Var12;
  auVar25._13_3_ = 0;
  local_7c = 0;
  auVar24._0_4_ = -(uint)(0x7f < auVar25._0_4_);
  auVar24._4_4_ = -(uint)(0x7f < (uint)Var12);
  auVar24._8_4_ = -(uint)(0x7f < (int)uVar11);
  auVar24._12_4_ = -(uint)(0x7f < (uint3)(auVar2._10_3_ >> 0x10));
  local_6c = 0;
  local_5c = 0;
  auVar25 = auVar24 & _DAT_144101760 | auVar25;
  uVar9 = (ulonglong)CONCAT12(SUB41(local_res8._0_4_,1),(short)local_res8._0_4_) &
          0xffffffffffff00ff;
  auVar3._8_4_ = 0;
  auVar3._0_8_ = uVar9;
  auVar3[0xc] = SUB41(local_res8._0_4_,3);
  auVar4[8] = SUB41(local_res8._0_4_,2);
  auVar4._0_8_ = uVar9;
  auVar4[9] = 0;
  auVar4._10_3_ = auVar3._10_3_;
  auVar13._5_8_ = 0;
  auVar13._0_5_ = auVar4._8_5_;
  auVar5[4] = SUB41(local_res8._0_4_,1);
  auVar5._0_4_ = (uint)uVar9;
  auVar5[5] = 0;
  auVar5._6_7_ = SUB137(auVar13 << 0x40,6);
  auVar27._0_4_ = (uint)uVar9 & 0xffff;
  auVar27._4_9_ = auVar5._4_9_;
  auVar27._13_3_ = 0;
  local_68 = (float)auVar25._0_4_ * 0.007874016;
  local_64 = (float)auVar25._4_4_ * 0.007874016;
  local_60 = (float)auVar25._8_4_ * 0.007874016;
  auVar26._0_4_ = -(uint)(0x7f < auVar27._0_4_);
  auVar26._4_4_ = -(uint)(0x7f < auVar5._4_4_);
  auVar26._8_4_ = -(uint)(0x7f < auVar4._8_4_);
  auVar26._12_4_ = -(uint)(0x7f < (uint3)(auVar3._10_3_ >> 0x10));
  auVar27 = auVar26 & _DAT_144101760 | auVar27;
  local_78 = (float)auVar27._0_4_ * 0.007874016;
  local_74 = (float)auVar27._4_4_ * 0.007874016;
  local_70 = (float)auVar27._8_4_ * 0.007874016;
  auVar6[0xc] = SUB41(local_res10._0_4_,3);
  auVar6._0_12_ = ZEXT812(0);
  auVar7._10_3_ = auVar6._10_3_;
  auVar7._0_10_ = (unkuint10)SUB41(local_res10._0_4_,2) << 0x40;
  auVar14._5_8_ = 0;
  auVar14._0_5_ = auVar7._8_5_;
  uVar30 = CONCAT13(0,CONCAT12(SUB41(local_res10._0_4_,1),(ushort)(byte)local_res10._0_4_));
  auVar8[4] = SUB41(local_res10._0_4_,1);
  auVar8._0_4_ = uVar30;
  auVar8[5] = 0;
  auVar8._6_7_ = SUB137(auVar14 << 0x40,6);
  auVar29._0_4_ = uVar30 & 0xffff;
  auVar29._4_9_ = auVar8._4_9_;
  auVar29._13_3_ = 0;
  auVar28._0_4_ = -(uint)(0x7f < auVar29._0_4_);
  auVar28._4_4_ = -(uint)(0x7f < auVar8._4_4_);
  auVar28._8_4_ = -(uint)(0x7f < auVar7._8_4_);
  auVar28._12_4_ = -(uint)(0x7f < (uint3)(auVar6._10_3_ >> 0x10));
  auVar29 = auVar28 & _DAT_144101760 | auVar29;
  local_88 = (float)auVar29._0_4_ * 0.007874016;
  local_84 = (float)auVar29._4_4_ * 0.007874016;
  local_80 = (float)auVar29._8_4_ * 0.007874016;
  local_58 = 0;
  uStack_50 = 0x3f80000000000000;
  fVar23 = (float)FMatrix::Determinant(&local_88);
  if (0.0 <= fVar23) {
    fVar23 = 1.0;
  }
  else {
    fVar23 = -1.0;
  }
  puVar19 = (undefined4 *)((longlong)puVar22 + 0x54);
  uVar21 = 0x7f;
  if (fVar23 < 0.0) {
    uVar21 = 0x81;
  }
  *(undefined1 *)((longlong)puVar22 + 0x53) = uVar21;
  if (puVar19 <= (undefined4 *)((longlong)puVar22 + 0x5cU)) {
    do {
      lVar20 = lVar20 + 1;
      *puVar19 = *param_7;
      puVar19 = puVar19 + 1;
    } while (lVar20 != 2);
  }
  return uVar1;
}



// FUNCTION 14242c440 FUN_14242c440 body=120 status=ok
// SIG undefined FUN_14242c440(void)

undefined4 FUN_14242c440(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *(undefined4 *)(lVar3 + 0x1a0);
  if (iVar1 != 0) {
    iVar4 = *(int *)(lVar3 + 0x1a0);
    if (*(int *)(lVar3 + 0x1a4) < iVar4 + iVar1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo((longlong *)(lVar3 + 0x198));
      iVar4 = *(int *)(lVar3 + 0x1a0);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar4 * 0x5c + *(longlong *)(lVar3 + 0x198)),(void *)*param_2,
               (longlong)iVar1 * 0x5c);
    *(int *)(lVar3 + 0x1a0) = *(int *)(lVar3 + 0x1a0) + iVar1;
  }
  return uVar2;
}



// FUNCTION 14242c4c0 FUN_14242c4c0 body=244 status=ok
// SIG undefined FUN_14242c4c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14242c4c0(undefined8 *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar1 = param_3 * param_2;
  *param_1 = 0;
  if (DAT_14653217c < uVar1) {
    local_80 = &local_68;
    local_58 = 1;
    local_54 = _DAT_1468b5d78;
    uStack_50 = uRam00000001468b5d7c;
    uStack_4c = uRam00000001468b5d80;
    uStack_48 = uRam00000001468b5d84;
    local_44 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_88 = 0x204;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_78,&DAT_146ab6e78,uVar1);
  }
  else {
    IsInRenderingThread();
    if (DAT_146af3288 == '\0') {
      local_78[0] = 0;
    }
    else {
      FUN_14242ed20(&DAT_146af2e40,local_78,uVar1);
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,local_78);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
  return param_1;
}



// FUNCTION 14242c5c0 FUN_14242c5c0 body=757 status=ok
// SIG undefined FUN_14242c5c0(void)

void FUN_14242c5c0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined1 local_res8 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar8 = (ulonglong)DAT_146ac3ad4;
  fVar14 = (float)(DAT_1468b02f8 * 1000.0 * (double)uVar8);
  if ((DAT_146ab62df == '\0') || (*(int *)(DAT_146af33c0 + 4) != 1)) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  *(char *)((longlong)param_1 + 0x44) = cVar3;
  if (cVar3 == '\0') {
    uVar5 = (**(code **)(*DAT_146ab6358 + 0x3a0))();
    fVar13 = (float)(DAT_1468b02f8 * 1000.0 * (double)uVar5);
    uVar8 = FDynamicResolutionHeuristicProxy::CreateNewPreviousFrameTimings_RenderThread
                      (param_1,param_3,fVar14);
    bVar12 = DAT_146ab62e2 == '\0';
    if ((uVar8 != 0xffffffffffffffff) &&
       ((ulonglong)(param_1[5] - (longlong)*(int *)((longlong)param_1 + 0x14)) < uVar8)) {
      lVar11 = (longlong)
               ((((int)param_1[2] - (int)param_1[5]) + (int)param_1[1] + (int)uVar8) %
               (int)param_1[1]);
      *(float *)(*param_1 + 0xc + lVar11 * 0x18) = fVar13;
      *(float *)(*param_1 + 0x10 + lVar11 * 0x18) = fVar13;
      *(bool *)(*param_1 + 0x14 + lVar11 * 0x18) = bVar12;
    }
    FUN_142436d30(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    FUN_142434440((double)uVar8,0);
    iVar1 = (int)param_1[7];
    iVar4 = 0;
    if (0 < iVar1) {
      plVar9 = (longlong *)param_1[6];
      do {
        if (*plVar9 == 0) {
          *(int *)(param_1 + 8) = iVar4;
          break;
        }
        iVar4 = iVar4 + 1;
        plVar9 = plVar9 + 5;
      } while (iVar4 < iVar1);
    }
    iVar4 = (int)param_1[8];
    if (iVar4 == -1) {
      *(int *)(param_1 + 8) = iVar1;
      iVar1 = (int)param_1[7];
      lVar11 = (longlong)iVar1;
      local_58 = 0xffffffffffffffff;
      *(int *)(param_1 + 7) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x3c) < iVar1 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 6,iVar1);
      }
      lVar2 = param_1[6];
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      *(undefined8 *)(lVar2 + lVar11 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 8 + lVar11 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x10 + lVar11 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x18 + lVar11 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x20 + lVar11 * 0x28) = 0xffffffffffffffff;
      local_60 = 0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_60);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_68);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_70);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_78);
      iVar4 = (int)param_1[8];
    }
    puVar7 = (undefined8 *)(param_1[6] + (longlong)iVar4 * 0x28);
    uVar6 = FDynamicResolutionHeuristicProxy::CreateNewPreviousFrameTimings_RenderThread
                      (param_1,param_3,fVar14);
    puVar7[4] = uVar6;
    (**(code **)(*DAT_146ab6358 + 0x670))(DAT_146ab6358,local_res8,&DAT_146ab6e78,2);
    TRefCountPtr<FRHIIndexBuffer>::operator=(puVar7,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    uVar6 = *puVar7;
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar10 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59490;
    puVar10[2] = uVar6;
  }
  return;
}



// FUNCTION 14242c8c0 FUN_14242c8c0 body=111 status=ok
// SIG undefined FUN_14242c8c0(void)

void FUN_14242c8c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_142223710();
  if ((*(longlong *)(param_1 + 0x120) == 0) || (*(longlong *)(param_1 + 0x120) == 0x11a)) {
    iVar1 = FUN_142235230(param_1);
  }
  else {
    iVar1 = FUN_142235230(param_1);
  }
  if (iVar1 != 3) {
    AActor::SetActorTickEnabled(param_1,0);
    return;
  }
  lVar2 = FUN_1422325e0(param_1);
  *(undefined1 *)(lVar2 + 0x182) = 1;
  return;
}



// FUNCTION 14242c930 BeginReadWriteRecords body=3363 status=ok
// SIG undefined BeginReadWriteRecords(void)

undefined8 FEngineSessionManager::BeginReadWriteRecords(longlong param_1)

{
  wchar_t *pwVar1;
  longlong *plVar2;
  void *pvVar3;
  bool bVar4;
  char cVar5;
  wchar_t _C;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  void **ppvVar16;
  void **ppvVar17;
  wchar_t *pwVar18;
  wchar_t *_Str;
  undefined1 local_res10 [8];
  longlong local_1c8 [2];
  undefined2 *local_1b8;
  ulonglong local_1b0;
  undefined2 *local_1a8;
  ulonglong local_1a0;
  void *local_198;
  ulonglong local_190;
  uint local_188;
  void *local_180;
  undefined8 local_178;
  void *local_170;
  int local_168;
  int local_164;
  longlong local_160;
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156;
  undefined1 local_155;
  undefined1 local_154;
  undefined1 local_153;
  void *local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined1 local_13f;
  undefined2 *local_138;
  int local_130;
  undefined4 local_12c;
  undefined2 *local_128;
  int local_120;
  undefined4 local_11c;
  undefined2 *local_118;
  int local_110;
  undefined4 local_10c;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  undefined2 *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined2 *local_e8;
  int local_e0;
  undefined4 local_dc;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined2 *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined2 *local_b8;
  int local_b0;
  undefined4 local_ac;
  void **local_a8;
  ulonglong local_a0;
  void *local_98;
  ulonglong local_90;
  void *local_88;
  ulonglong local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 local_50;
  longlong local_48 [2];
  
  plVar2 = (longlong *)(param_1 + 0x80);
  TArray<FEngineSessionManager::FSessionRecord,FDefaultAllocator>::Empty(plVar2,0);
  pvVar3 = DAT_1465323e0;
  local_1a8 = (undefined2 *)0x0;
  iVar7 = (int)DAT_1465323e8;
  local_1a0 = CONCAT44(local_1a0._4_4_,iVar7);
  if (iVar7 == 0) {
    local_1a0 = DAT_1465323e8 & 0xffffffff;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1a8,DAT_1465323e8 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_1a8,pvVar3,(longlong)iVar7 * 2);
  }
  GetStoreSectionString(param_1,local_48,&local_1a8);
  local_58 = 0;
  local_50 = 0;
  local_1b8 = (undefined2 *)0x0;
  local_1b0 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
  FGenericPlatformString::Memcpy(local_1b8,L"SessionList",0x18);
  FWindowsPlatformMisc::GetStoredValue(&DAT_146532370,local_48,&local_1b8,&local_58);
  if (local_1b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_a8 = (void **)0x0;
  local_a0 = 0;
  FUN_141594550(&local_58,&local_a8,&DAT_145099d04,1);
  uVar13 = (ulonglong)(int)local_a0;
  ppvVar17 = local_a8 + uVar13 * 2;
  ppvVar16 = local_a8;
  if (local_a8 != ppvVar17) {
    do {
      local_70 = *(int *)(ppvVar16 + 1);
      lVar14 = (longlong)local_70;
      pvVar3 = *ppvVar16;
      local_78 = (void *)0x0;
      if (local_70 == 0) {
        local_6c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
        ::_guard_xfg_dispatch_icall_nop(local_78,pvVar3,lVar14 * 2);
      }
      GetStoreSectionString(param_1,local_1c8,&local_78);
      local_1a8 = (undefined2 *)0x0;
      local_1a0 = 0;
      local_88 = (void *)0x0;
      local_80 = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_1b8 = (undefined2 *)0x0;
      local_1b0 = 0;
      cVar5 = FWindowsPlatformMisc::GetStoredValue
                        (&DAT_146532370,local_1c8,&DAT_146532470,&local_1a8);
      if ((((cVar5 == '\0') ||
           (cVar5 = FWindowsPlatformMisc::GetStoredValue
                              (&DAT_146532370,local_1c8,&DAT_1465324c0,&local_88), cVar5 == '\0'))
          || (cVar5 = FWindowsPlatformMisc::GetStoredValue
                                (&DAT_146532370,local_1c8,&DAT_1465324d0,&local_98), cVar5 == '\0'))
         || (cVar5 = FWindowsPlatformMisc::GetStoredValue
                               (&DAT_146532370,local_1c8,&DAT_146532510,&local_1b8),
            puVar11 = local_1b8, cVar5 == '\0')) {
        FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_1c8,&DAT_146532440);
        FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_1c8,&DAT_146532450);
        FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_1c8,&DAT_146532470);
        FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_1c8,&DAT_146532480);
        FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_1c8,&DAT_1465324c0);
        FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_1c8,&DAT_1465324d0);
        FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_1c8,&DAT_146532510);
        FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_1c8,&DAT_146532520);
        FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_1c8,&DAT_146532490);
        FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_1c8,&DAT_1465324a0);
        FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_1c8,&DAT_146532530);
        FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_1c8,&DAT_146532540);
        FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_1c8);
      }
      else {
        lVar14 = (longlong)(int)local_1b0;
        local_b8 = (undefined2 *)0x0;
        local_b0 = (int)local_1b0;
        if ((int)local_1b0 == 0) {
          local_ac = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_1b0 & 0xffffffff,0);
          ::_guard_xfg_dispatch_icall_nop(local_b8,puVar11,lVar14 * 2);
        }
        FWindowsPlatformMisc::GetStoredValue(&DAT_146532370,local_1c8,&DAT_146532520,&local_b8);
        puVar11 = DAT_146532580;
        lVar14 = (longlong)DAT_146532588;
        local_c8 = (undefined2 *)0x0;
        local_c0 = DAT_146532588;
        if (DAT_146532588 == 0) {
          local_bc = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,DAT_146532588,0);
          ::_guard_xfg_dispatch_icall_nop(local_c8,puVar11,lVar14 * 2);
        }
        FWindowsPlatformMisc::GetStoredValue(&DAT_146532370,local_1c8,&DAT_146532440,&local_c8);
        pvVar3 = DAT_1465325a0;
        lVar14 = (longlong)DAT_1465325a8;
        local_d8 = (void *)0x0;
        local_d0 = DAT_1465325a8;
        if (DAT_1465325a8 == 0) {
          local_cc = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,DAT_1465325a8,0);
          ::_guard_xfg_dispatch_icall_nop(local_d8,pvVar3,lVar14 * 2);
        }
        FWindowsPlatformMisc::GetStoredValue(&DAT_146532370,local_1c8,&DAT_146532450,&local_d8);
        pvVar3 = DAT_146532560;
        lVar14 = (longlong)DAT_146532568;
        local_e8 = (undefined2 *)0x0;
        local_e0 = DAT_146532568;
        if (DAT_146532568 == 0) {
          local_dc = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,DAT_146532568,0);
          ::_guard_xfg_dispatch_icall_nop(local_e8,pvVar3,lVar14 * 2);
        }
        FWindowsPlatformMisc::GetStoredValue(&DAT_146532370,local_1c8,&DAT_146532490,&local_e8);
        pvVar3 = DAT_146532560;
        lVar14 = (longlong)DAT_146532568;
        local_f8 = (undefined2 *)0x0;
        local_f0 = DAT_146532568;
        if (DAT_146532568 == 0) {
          local_ec = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,DAT_146532568,0);
          ::_guard_xfg_dispatch_icall_nop(local_f8,pvVar3,lVar14 * 2);
        }
        FWindowsPlatformMisc::GetStoredValue(&DAT_146532370,local_1c8,&DAT_1465324a0,&local_f8);
        pvVar3 = DAT_146532360;
        lVar14 = (longlong)DAT_146532368;
        local_108 = (void *)0x0;
        local_100 = DAT_146532368;
        if (DAT_146532368 == 0) {
          local_fc = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,DAT_146532368,0);
          ::_guard_xfg_dispatch_icall_nop(local_108,pvVar3,lVar14 * 2);
        }
        FWindowsPlatformMisc::GetStoredValue(&DAT_146532370,local_1c8,&DAT_146532530,&local_108);
        pvVar3 = DAT_146532560;
        lVar14 = (longlong)DAT_146532568;
        local_118 = (undefined2 *)0x0;
        local_110 = DAT_146532568;
        if (DAT_146532568 == 0) {
          local_10c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,DAT_146532568,0);
          ::_guard_xfg_dispatch_icall_nop(local_118,pvVar3,lVar14 * 2);
        }
        FWindowsPlatformMisc::GetStoredValue(&DAT_146532370,local_1c8,&DAT_146532540,&local_118);
        pvVar3 = DAT_146532560;
        lVar14 = (longlong)DAT_146532568;
        local_128 = (undefined2 *)0x0;
        local_120 = DAT_146532568;
        if (DAT_146532568 == 0) {
          local_11c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,DAT_146532568,0);
          ::_guard_xfg_dispatch_icall_nop(local_128,pvVar3,lVar14 * 2);
        }
        FWindowsPlatformMisc::GetStoredValue(&DAT_146532370,local_1c8,&DAT_146532480,&local_128);
        pvVar3 = DAT_146532560;
        lVar14 = (longlong)DAT_146532568;
        local_138 = (undefined2 *)0x0;
        local_130 = DAT_146532568;
        if (DAT_146532568 == 0) {
          local_12c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_138,DAT_146532568,0);
          ::_guard_xfg_dispatch_icall_nop(local_138,pvVar3,lVar14 * 2);
        }
        FWindowsPlatformMisc::GetStoredValue(&DAT_146532370,local_1c8,&DAT_1465324b0,&local_138);
        local_198 = (void *)0x0;
        local_190 = 0;
        local_180 = (void *)0x0;
        local_178 = 0;
        local_170 = (void *)0x0;
        local_168 = 0;
        local_164 = 0;
        local_150 = (void *)0x0;
        local_148 = 0;
        iVar7 = 0;
        if (&local_198 != ppvVar16) {
          uVar12 = *(uint *)(ppvVar16 + 1);
          pvVar3 = *ppvVar16;
          local_190 = (ulonglong)uVar12;
          iVar7 = 0;
          if (uVar12 != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_198,uVar12,0);
            ::_guard_xfg_dispatch_icall_nop(local_198,pvVar3,(longlong)(int)uVar12 * 2);
            iVar7 = local_178._4_4_;
          }
        }
        iVar8 = local_164;
        puVar11 = &DAT_143f3eda8;
        if (DAT_146532588 != 0) {
          puVar11 = DAT_146532580;
        }
        puVar10 = &DAT_143f3eda8;
        if (local_c0 != 0) {
          puVar10 = local_c8;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
        pvVar3 = local_d8;
        lVar14 = (longlong)local_d0;
        local_178 = CONCAT44(local_178._4_4_,local_d0);
        local_188 = (uint)(iVar6 != 0);
        if ((local_d0 == 0) && (iVar7 == 0)) {
          local_178 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_180,local_d0,iVar7);
          ::_guard_xfg_dispatch_icall_nop(local_180,pvVar3,lVar14 * 2);
          iVar8 = local_164;
        }
        pvVar3 = local_88;
        pwVar18 = (wchar_t *)0x0;
        lVar14 = (longlong)(int)local_80;
        local_168 = (int)local_80;
        if (((int)local_80 == 0) && (iVar8 == 0)) {
          local_164 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_170,local_80 & 0xffffffff,iVar8);
          ::_guard_xfg_dispatch_icall_nop(local_170,pvVar3,lVar14 * 2);
        }
        pvVar3 = local_98;
        lVar14 = (longlong)(int)local_90;
        local_68 = (wchar_t *)0x0;
        local_60 = (int)local_90;
        if ((int)local_90 == 0) {
          local_5c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_90 & 0xffffffff,0);
          pwVar18 = local_68;
          ::_guard_xfg_dispatch_icall_nop(local_68,pvVar3,lVar14 * 2);
        }
        _Str = L"";
        if (local_60 != 0) {
          _Str = pwVar18;
        }
        _C = *_Str;
        if ((_C == L'-') || (pwVar15 = _Str, _C == L'+')) {
          _C = _Str[1];
          pwVar15 = _Str + 1;
        }
        bVar4 = false;
        while (_C != L'\0') {
          if (_C == L'.') {
            if (bVar4) {
LAB_14242d250:
              if (pwVar18 != (wchar_t *)0x0) {
                FMemory::Free(pwVar18);
              }
              lVar14 = 0;
              goto LAB_14242d108;
            }
            bVar4 = true;
          }
          else {
            iVar7 = iswdigit(_C);
            if (iVar7 == 0) goto LAB_14242d250;
          }
          pwVar1 = pwVar15 + 1;
          pwVar15 = pwVar15 + 1;
          _C = *pwVar1;
        }
        lVar14 = _wtoi64(_Str);
        plVar9 = (longlong *)FDateTime::FDateTime(local_res10,0x7b2,1,1,0,0,0,0);
        lVar14 = lVar14 * 10000000 + *plVar9;
        if (pwVar18 != (wchar_t *)0x0) {
          FMemory::Free(pwVar18);
        }
LAB_14242d108:
        puVar11 = &DAT_143f3eda8;
        if (DAT_146532578 != 0) {
          puVar11 = DAT_146532570;
        }
        puVar10 = &DAT_143f3eda8;
        if ((int)local_1a0 != 0) {
          puVar10 = local_1a8;
        }
        local_160 = lVar14;
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
        local_158 = iVar7 == 0;
        puVar11 = &DAT_143f3eda8;
        if (DAT_146532578 != 0) {
          puVar11 = DAT_146532570;
        }
        puVar10 = &DAT_143f3eda8;
        if (local_120 != 0) {
          puVar10 = local_128;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
        local_157 = iVar7 == 0;
        puVar11 = &DAT_143f3eda8;
        if (DAT_146532578 != 0) {
          puVar11 = DAT_146532570;
        }
        puVar10 = &DAT_143f3eda8;
        if ((int)local_1b0 != 0) {
          puVar10 = local_1b8;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
        local_156 = iVar7 == 0;
        puVar11 = &DAT_143f3eda8;
        if (DAT_146532578 != 0) {
          puVar11 = DAT_146532570;
        }
        puVar10 = &DAT_143f3eda8;
        if (local_b0 != 0) {
          puVar10 = local_b8;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
        local_155 = iVar7 == 0;
        puVar11 = &DAT_143f3eda8;
        if (DAT_146532578 != 0) {
          puVar11 = DAT_146532570;
        }
        puVar10 = &DAT_143f3eda8;
        if (local_e0 != 0) {
          puVar10 = local_e8;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
        local_154 = iVar7 == 0;
        puVar11 = &DAT_143f3eda8;
        if (DAT_146532578 != 0) {
          puVar11 = DAT_146532570;
        }
        puVar10 = &DAT_143f3eda8;
        if (local_f0 != 0) {
          puVar10 = local_f8;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
        pvVar3 = local_108;
        lVar14 = (longlong)local_100;
        local_153 = iVar7 == 0;
        local_148 = CONCAT44(local_148._4_4_,local_100);
        if ((local_100 == 0) && (local_148._4_4_ == 0)) {
          local_148 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_150,local_100,local_148._4_4_);
          ::_guard_xfg_dispatch_icall_nop(local_150,pvVar3,lVar14 * 2);
        }
        puVar11 = &DAT_143f3eda8;
        if (DAT_146532578 != 0) {
          puVar11 = DAT_146532570;
        }
        puVar10 = &DAT_143f3eda8;
        if (local_110 != 0) {
          puVar10 = local_118;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
        local_140 = iVar7 == 0;
        puVar11 = &DAT_143f3eda8;
        if (DAT_146532578 != 0) {
          puVar11 = DAT_146532570;
        }
        puVar10 = &DAT_143f3eda8;
        if (local_130 != 0) {
          puVar10 = local_138;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
        iVar7 = *(int *)(param_1 + 0x88);
        local_13f = iVar8 == 0;
        *(int *)(param_1 + 0x88) = iVar7 + 1;
        if (*(int *)(param_1 + 0x8c) < iVar7 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar2,iVar7);
        }
        lVar14 = (longlong)iVar7 * 0x60 + *plVar2;
        FString::FString(lVar14,&local_198);
        *(uint *)(lVar14 + 0x10) = local_188;
        FString::FString(lVar14 + 0x18,&local_180);
        FString::FString(lVar14 + 0x28,&local_170);
        *(longlong *)(lVar14 + 0x38) = local_160;
        *(undefined1 *)(lVar14 + 0x40) = local_158;
        *(undefined1 *)(lVar14 + 0x41) = local_157;
        *(undefined1 *)(lVar14 + 0x42) = local_156;
        *(undefined1 *)(lVar14 + 0x43) = local_155;
        *(undefined1 *)(lVar14 + 0x44) = local_154;
        *(undefined1 *)(lVar14 + 0x45) = local_153;
        FString::FString(lVar14 + 0x48,&local_150);
        *(undefined1 *)(lVar14 + 0x58) = local_140;
        *(undefined1 *)(lVar14 + 0x59) = local_13f;
        if (local_150 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_170 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_180 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_198 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_138 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_128 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_118 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_108 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_f8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_e8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_d8 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_c8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_b8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      if (local_1b8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_1a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_1c8[0] != 0) {
        FMemory::Free();
      }
      ppvVar16 = ppvVar16 + 2;
    } while (ppvVar16 != ppvVar17);
    uVar13 = local_a0 & 0xffffffff;
  }
  uVar12 = (uint)uVar13;
  ppvVar16 = local_a8;
  while (uVar12 != 0) {
    if (*ppvVar16 != (void *)0x0) {
      FMemory::Free();
    }
    ppvVar16 = ppvVar16 + 2;
    uVar12 = (int)uVar13 - 1;
    uVar13 = (ulonglong)uVar12;
  }
  if (local_a8 != (void **)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 14242d660 BreakAllPinLinks body=207 status=ok
// SIG undefined BreakAllPinLinks(void)

void UEdGraphPin::BreakAllPinLinks(longlong param_1)

{
  void *_Src;
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *local_18;
  int local_10;
  
  local_10 = *(int *)(param_1 + 0xe0);
  lVar3 = (longlong)local_10;
  puVar1 = (undefined8 *)0x0;
  _Src = *(void **)(param_1 + 0xd8);
  local_18 = (undefined8 *)0x0;
  puVar5 = puVar1;
  if (local_10 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,local_10,0);
    puVar5 = local_18;
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 << 3);
  }
  puVar2 = (undefined8 *)((ulonglong)((longlong)(puVar5 + local_10) + (7 - (longlong)puVar5)) >> 3);
  if (puVar5 + local_10 < puVar5) {
    puVar2 = puVar1;
  }
  puVar4 = puVar5;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      BreakLinkTo(param_1,*puVar4);
      puVar1 = (undefined8 *)((longlong)puVar1 + 1);
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar2);
  }
  if (puVar5 != (undefined8 *)0x0) {
    FMemory::Free(puVar5);
  }
  return;
}



// FUNCTION 14242d730 BreakLinkTo body=171 status=ok
// SIG undefined BreakLinkTo(void)

void UEdGraphPin::BreakLinkTo(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *local_res8;
  longlong *local_res10;
  
  plVar2 = (longlong *)*param_1;
  local_res10 = param_2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x70))(plVar2,1);
  }
  if (param_2 != (longlong *)0x0) {
    plVar2 = (longlong *)*param_2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x70))(plVar2,1);
    }
    puVar3 = (undefined8 *)param_1[0x1b];
    puVar1 = puVar3 + (int)param_1[0x1c];
    if (puVar3 != puVar1) {
      while ((longlong *)*puVar3 != param_2) {
        puVar3 = puVar3 + 1;
        if (puVar3 == puVar1) {
          return;
        }
      }
      local_res8 = param_1;
      TArray<FName,FDefaultAllocator>::Remove(param_2 + 0x1b,&local_res8);
      TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x1b,&local_res10);
    }
  }
  return;
}



// FUNCTION 14242d820 CanCreateConnection body=105 status=ok
// SIG undefined CanCreateConnection(void)

longlong UEdGraphSchema::CanCreateConnection(undefined8 param_1,longlong param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x1f;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Not implemented by this schema",0x3e);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_2 + 0x18) = 1;
  *(byte *)(param_2 + 0x19) = *(byte *)(param_2 + 0x19) & 0xfe;
  return param_2;
}



// FUNCTION 14242d890 CanCreateNewNodes body=42 status=ok
// SIG undefined CanCreateNewNodes(void)

longlong UEdGraphSchema::CanCreateNewNodes(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1404b03b0();
  FText::FText(param_2,uVar1);
  *(undefined1 *)(param_2 + 0x18) = 0;
  *(byte *)(param_2 + 0x19) = *(byte *)(param_2 + 0x19) & 0xfe;
  return param_2;
}



// FUNCTION 14242d8c0 FUN_14242d8c0 body=1201 status=ok
// SIG undefined FUN_14242d8c0(void)

void FUN_14242d8c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined *local_58;
  int local_50;
  uint local_4c;
  undefined *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  
  local_50 = (int)param_2[4];
  lVar8 = (longlong)local_50;
  uVar14 = 0;
  _Src = (void *)param_2[3];
  local_58 = (undefined *)0x0;
  if (local_50 == 0) {
    local_4c = 0;
    uVar10 = uVar14;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar8 * 2);
    uVar10 = (ulonglong)local_4c;
  }
  if (local_50 < 2) {
    iVar1 = (int)param_2[2];
    if (iVar1 == 1) {
      if (param_2[5] == 0) {
        FString::operator=(&local_58,param_1 + 0x88);
      }
      else {
        puVar9 = &DAT_143f3eda8;
        if (*(int *)(param_1 + 0x50) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = *(undefined2 **)(param_1 + 0x48);
        }
        puVar4 = (undefined8 *)FUN_14270d290(param_2[5],local_28);
        if (*(int *)(puVar4 + 1) != 0) {
          puVar9 = (undefined2 *)*puVar4;
        }
        FString::PrintfImpl(&local_48,L"%s%s",puVar9,puVar11);
        if (local_58 != (undefined *)0x0) {
          FMemory::Free();
        }
LAB_14242dbc2:
        local_58 = local_48;
        local_50 = (int)local_40;
        local_4c = local_40._4_4_;
        local_40 = 0;
        local_48 = (undefined *)0x0;
LAB_14242dbde:
        if (local_28[0] != 0) {
          FMemory::Free();
        }
      }
    }
    else {
      if (iVar1 == 2) {
        if (param_2[5] != 0) {
          puVar4 = (undefined8 *)FUN_14270d290(param_2[5],local_28);
          puVar9 = &DAT_143f3eda8;
          if (*(int *)(puVar4 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*puVar4;
          }
          if (*(int *)(param_1 + 0x70) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = *(undefined2 **)(param_1 + 0x68);
          }
          puVar4 = (undefined8 *)
                   (**(code **)(*(longlong *)param_2[5] + 0x748))((longlong *)param_2[5],local_38);
          if (*(int *)(puVar4 + 1) != 0) {
            puVar9 = (undefined2 *)*puVar4;
          }
          FString::PrintfImpl(&local_48,L"%s %s %s",puVar9,puVar12,puVar11);
          if (local_58 != (undefined *)0x0) {
            FMemory::Free();
          }
          local_58 = local_48;
          local_50 = (int)local_40;
          local_4c = local_40._4_4_;
          local_40 = 0;
          local_48 = (undefined *)0x0;
          if (local_38[0] != 0) {
            FMemory::Free();
          }
          goto LAB_14242dbde;
        }
        puVar5 = &DAT_14509b2c4;
      }
      else {
        if (iVar1 != 4) {
          if (iVar1 == 7) {
            if (&local_58 != (undefined **)(param_1 + 0x38)) {
              local_50 = *(int *)(param_1 + 0x40);
              lVar8 = (longlong)local_50;
              puVar5 = *(undefined **)(param_1 + 0x38);
              if ((local_50 == 0) && ((int)uVar10 == 0)) {
                local_4c = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50);
                _guard_xfg_dispatch_icall_nop(local_58,puVar5,lVar8 * 2);
              }
            }
          }
          else if (iVar1 == 0x10) {
            if (param_2[5] != 0) {
              puVar9 = &DAT_143f3eda8;
              if (*(int *)(param_1 + 0x80) == 0) {
                puVar11 = &DAT_143f3eda8;
              }
              else {
                puVar11 = *(undefined2 **)(param_1 + 0x78);
              }
              puVar4 = (undefined8 *)FUN_14270d290(param_2[5],local_38);
              if (*(int *)(puVar4 + 1) != 0) {
                puVar9 = (undefined2 *)*puVar4;
              }
              pwVar7 = L"%s%s";
              goto LAB_14242d9aa;
            }
            FString::operator=(&local_58,param_1 + 0x98);
          }
          goto LAB_14242dbe8;
        }
        if (param_2[5] != 0) {
          puVar9 = &DAT_143f3eda8;
          if (*(int *)(param_1 + 0x60) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = *(undefined2 **)(param_1 + 0x58);
          }
          puVar4 = (undefined8 *)FUN_14270d290(param_2[5],local_38);
          if (*(int *)(puVar4 + 1) != 0) {
            puVar9 = (undefined2 *)*puVar4;
          }
          pwVar7 = L"%s%s";
LAB_14242d9aa:
          FString::PrintfImpl(&local_48,pwVar7,puVar9,puVar11);
          local_28[0] = local_38[0];
          if (local_58 != (undefined *)0x0) {
            FMemory::Free();
            local_28[0] = local_38[0];
          }
          goto LAB_14242dbc2;
        }
        puVar5 = &DAT_14509b2dc;
      }
      if (local_58 != puVar5) {
        local_50 = 0;
        uVar13 = 0;
        if ((int)uVar10 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,0);
          uVar13 = local_4c;
        }
        if ((int)uVar13 < local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
        }
      }
    }
LAB_14242dbe8:
    if (local_50 < 2) goto LAB_14242dd49;
  }
  if ((*param_2 == 0) || (lVar8 = *(longlong *)(*param_2 + 0x508), lVar8 == 0)) goto LAB_14242dd49;
  lVar6 = ULocalPlayer::GetPrivateStaticClass();
  lVar8 = *(longlong *)(lVar8 + 0x10);
  if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_14242dd49;
  uVar10 = *(ulonglong *)(*param_2 + 0x508);
  if (uVar10 == 0) {
LAB_14242dc8d:
    uVar10 = uVar14;
  }
  else {
    lVar8 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14242dc8d;
  }
  if (*(longlong *)(uVar10 + 0x70) == 0) goto LAB_14242dd49;
  uVar10 = *(ulonglong *)(*param_2 + 0x508);
  if (uVar10 == 0) {
LAB_14242dcdf:
    uVar10 = uVar14;
  }
  else {
    lVar8 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14242dcdf;
  }
  if (*(longlong *)(*(longlong *)(uVar10 + 0x70) + 0x50) == 0) goto LAB_14242dd49;
  uVar10 = *(ulonglong *)(*param_2 + 0x508);
  if (uVar10 == 0) {
LAB_14242dd31:
    uVar10 = uVar14;
  }
  else {
    lVar8 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14242dd31;
  }
  plVar2 = *(longlong **)(*(longlong *)(uVar10 + 0x70) + 0x50);
  (**(code **)(*plVar2 + 0x298))(plVar2,&local_58);
LAB_14242dd49:
  if (local_58 != (undefined *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14242dd80 FUN_14242dd80 body=90 status=ok
// SIG undefined FUN_14242dd80(void)

void FUN_14242dd80(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x28) & 0x1000000) != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    fVar3 = (float)FUN_142433bb0();
    fVar4 = *(float *)(lVar2 + 0x20);
    iVar1 = 0;
    if (fVar3 <= fVar4) {
      fVar4 = fVar3;
    }
    if (0 < (int)param_2[1]) {
      lVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        *(float *)(lVar2 + *param_2) = fVar4;
        lVar2 = lVar2 + 4;
      } while (iVar1 < (int)param_2[1]);
    }
  }
  return;
}



// FUNCTION 14242dde0 ConstructBasicPinTooltip body=33 status=ok
// SIG undefined ConstructBasicPinTooltip(void)

void UEdGraphSchema::ConstructBasicPinTooltip
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FText::ToString(param_3);
  FString::operator=(param_4,uVar1);
  return;
}



// FUNCTION 14242de10 FUN_14242de10 body=239 status=ok
// SIG undefined FUN_14242de10(void)

void FUN_14242de10(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if (((param_1 != (longlong *)0x0) && ((*(byte *)((longlong)param_1 + 0x5b) & 1) == 0)) &&
     (*(char *)((longlong)param_1 + 0x59) == '\x01')) {
    (**(code **)(*param_1 + 0x70))(param_1,1);
    *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) & 0xfe;
    *(undefined1 *)((longlong)param_1 + 0x59) = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    if (*(int *)((longlong)param_1 + 0x6c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xc,0);
    }
    plVar5 = (longlong *)param_1[5];
    plVar1 = plVar5 + (int)param_1[6];
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      puVar3 = *(undefined8 **)(*plVar5 + 0xd8);
      uVar2 = (ulonglong)*(int *)(*plVar5 + 0xe0);
      uVar4 = uVar2 & 0x1fffffffffffffff;
      if (puVar3 + uVar2 < puVar3) {
        uVar4 = 0;
      }
      uVar2 = 0;
      if (uVar4 != 0) {
        do {
          FUN_14242de10(*(undefined8 *)*puVar3);
          uVar2 = uVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar2 != uVar4);
      }
    }
  }
  return;
}



// FUNCTION 14242df00 ConvertToCollisionChannel body=31 status=ok
// SIG undefined ConvertToCollisionChannel(void)

void UEngineTypes::ConvertToCollisionChannel(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UCollisionProfile::Get();
  UCollisionProfile::ConvertToCollisionChannel(uVar1,0,param_1);
  return;
}



// FUNCTION 14242df20 ConvertToCollisionChannel body=31 status=ok
// SIG undefined ConvertToCollisionChannel(void)

void UEngineTypes::ConvertToCollisionChannel(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UCollisionProfile::Get();
  UCollisionProfile::ConvertToCollisionChannel(uVar1,1,param_1);
  return;
}



// FUNCTION 14242df40 ConvertToTraceType body=28 status=ok
// SIG undefined ConvertToTraceType(void)

void UEngineTypes::ConvertToTraceType(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UCollisionProfile::Get();
  FUN_142309cd0(uVar1,param_1);
  return;
}



// FUNCTION 14242df60 ConvertToTraceType body=28 status=ok
// SIG undefined ConvertToTraceType(void)

void UEngineTypes::ConvertToTraceType(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UCollisionProfile::Get();
  FUN_142309d10(uVar1,param_1);
  return;
}



// FUNCTION 14242df80 FUN_14242df80 body=359 status=ok
// SIG undefined FUN_14242df80(void)

longlong FUN_14242df80(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 local_58 [24];
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  byte local_27;
  
  uVar6 = FText::FText(local_58);
  FPinConnectionResponse::FPinConnectionResponse(param_2,0,uVar6);
  iVar7 = 0;
  if (0 < *(int *)(param_3 + 0xe0)) {
    lVar8 = 0;
    do {
      uVar6 = *(undefined8 *)(lVar8 + *(longlong *)(param_3 + 0xd8));
      (**(code **)(*param_1 + 0x288))(param_1,local_40,param_4,uVar6);
      if (local_28 == '\0') {
        FUN_142436300(param_4,uVar6);
      }
      else {
        FText::operator=(param_2,local_40);
        *(char *)(param_2 + 0x18) = local_28;
        *(byte *)(param_2 + 0x19) = *(byte *)(param_2 + 0x19) & 0xfe;
        *(byte *)(param_2 + 0x19) = *(byte *)(param_2 + 0x19) | local_27 & 1;
      }
      plVar5 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar7 < *(int *)(param_3 + 0xe0));
  }
  FString::operator=(param_4 + 0x98,param_3 + 0x98);
  *(undefined8 *)(param_4 + 0xb8) = *(undefined8 *)(param_3 + 0xb8);
  FText::operator=(param_4 + 0xc0,param_3 + 0xc0);
  return param_2;
}



// FUNCTION 14242e0f0 FUN_14242e0f0 body=2043 status=ok
// SIG undefined FUN_14242e0f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14242e0f0(undefined4 *param_1)

{
  longlong *plVar1;
  void **ppvVar2;
  void *pvVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  void *pvVar11;
  longlong lVar12;
  void *_Src;
  undefined4 uVar13;
  int iVar14;
  char local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 in_stack_ffffffffffffff08;
  uint uVar15;
  undefined8 in_stack_ffffffffffffff10;
  uint uVar16;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  
  uVar15 = (uint)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  uVar16 = (uint)((ulonglong)in_stack_ffffffffffffff10 >> 0x20);
  pvVar11 = (void *)0x0;
  local_58 = 0;
  local_50 = 0;
  uVar6 = (**(code **)(*DAT_146af3408 + 0x10))(DAT_146af3408,&local_d8);
  cVar4 = FUN_141678c50(uVar6,&local_58);
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)(param_1 + 4);
  if (cVar4 == '\0') {
    plVar7 = (longlong *)(**(code **)(*DAT_146af3408 + 0x10))(DAT_146af3408,&local_d8);
  }
  else {
    plVar7 = (longlong *)FUN_141682af0(&local_58,&local_d8,1);
  }
  if (plVar1 != plVar7) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar7;
    *plVar7 = 0;
    param_1[6] = (int)plVar7[1];
    param_1[7] = *(undefined4 *)((longlong)plVar7 + 0xc);
    plVar7[1] = 0;
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
  }
  plVar7 = (longlong *)UGeneralProjectSettings::GetPrivateStaticClass();
  lVar12 = plVar7[0x1f];
  if (lVar12 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar12 = plVar7[0x1f];
  }
  param_1[8] = *param_1;
  FString::operator=(param_1 + 10,lVar12 + 0xa8);
  uVar6 = FEngineVersion::Current();
  plVar8 = (longlong *)FEngineVersion::ToString(uVar6,&local_d8,3);
  plVar7 = (longlong *)(param_1 + 0xe);
  if (plVar7 != plVar8) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    *plVar7 = *plVar8;
    *plVar8 = 0;
    param_1[0x10] = (int)plVar8[1];
    param_1[0x11] = *(undefined4 *)((longlong)plVar8 + 0xc);
    plVar8[1] = 0;
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
  }
  puVar9 = (undefined8 *)FDateTime::UtcNow(local_res10);
  local_d8 = (void *)0x0;
  *(undefined8 *)(param_1 + 0x12) = *puVar9;
  *(undefined2 *)((longlong)param_1 + 0x52) = 0;
  iVar14 = DAT_146b188d0;
  _Src = DAT_146b188c8;
  pvVar3 = DAT_146532360;
  uVar13 = 0;
  if (DAT_146b188d0 < 2) {
    iVar14 = (int)_DAT_146532368;
    local_d0 = CONCAT44(local_d0._4_4_,iVar14);
    if (iVar14 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,_DAT_146532368 & 0xffffffff,0);
      _Src = pvVar3;
LAB_14242e2c3:
      pvVar11 = local_d8;
      _guard_xfg_dispatch_icall_nop(local_d8,_Src,(longlong)iVar14 * 2);
      uVar13 = local_d0._4_4_;
    }
  }
  else {
    local_d0 = CONCAT44(local_d0._4_4_,DAT_146b188d0);
    pvVar11 = (void *)0x0;
    if (DAT_146b188d0 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,DAT_146b188d0,0);
      goto LAB_14242e2c3;
    }
  }
  ppvVar2 = (void **)(param_1 + 0x16);
  if (ppvVar2 == &local_d8) {
    if (pvVar11 != (void *)0x0) {
      FMemory::Free(pvVar11);
    }
  }
  else {
    if (*ppvVar2 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar2 = pvVar11;
    param_1[0x18] = (undefined4)local_d0;
    param_1[0x19] = uVar13;
  }
  if ((DAT_146b17150 == 0) || (*(char *)(DAT_146b17150 + 0xc14) == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0x1a) = uVar5;
  uVar6 = FString::FString(local_48,plVar1);
  plVar10 = (longlong *)FEngineSessionManager::GetStoreSectionString(param_1,&local_d8,uVar6);
  plVar8 = (longlong *)(param_1 + 0x1c);
  if (plVar8 != plVar10) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    *plVar8 = *plVar10;
    *plVar10 = 0;
    param_1[0x1e] = (int)plVar10[1];
    param_1[0x1f] = *(undefined4 *)((longlong)plVar10 + 0xc);
    plVar10[1] = 0;
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
  }
  puVar9 = &DAT_146532590;
  local_c8 = (void *)0x0;
  if (param_1[8] == 0) {
    puVar9 = &DAT_146532580;
  }
  local_c0 = *(int *)(puVar9 + 1);
  lVar12 = (longlong)local_c0;
  pvVar11 = (void *)*puVar9;
  if (local_c0 == 0) {
    local_bc = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_c0,0);
    _guard_xfg_dispatch_icall_nop(local_c8,pvVar11,lVar12 * 2);
  }
  puVar9 = &DAT_146532560;
  local_68 = (void *)0x0;
  if (*(char *)((longlong)param_1 + 0x52) != '\0') {
    puVar9 = &DAT_146532570;
  }
  local_60 = *(int *)(puVar9 + 1);
  lVar12 = (longlong)local_60;
  pvVar11 = (void *)*puVar9;
  if (local_60 == 0) {
    local_5c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
    _guard_xfg_dispatch_icall_nop(local_68,pvVar11,lVar12 * 2);
  }
  puVar9 = &DAT_146532560;
  local_78 = (void *)0x0;
  if (*(char *)((longlong)param_1 + 0x53) != '\0') {
    puVar9 = &DAT_146532570;
  }
  local_70 = *(int *)(puVar9 + 1);
  lVar12 = (longlong)local_70;
  pvVar11 = (void *)*puVar9;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
    _guard_xfg_dispatch_icall_nop(local_78,pvVar11,lVar12 * 2);
  }
  puVar9 = &DAT_146532560;
  local_88 = (void *)0x0;
  if (*(char *)(param_1 + 0x15) != '\0') {
    puVar9 = &DAT_146532570;
  }
  local_80 = *(int *)(puVar9 + 1);
  lVar12 = (longlong)local_80;
  pvVar11 = (void *)*puVar9;
  if (local_80 == 0) {
    local_7c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
    _guard_xfg_dispatch_icall_nop(local_88,pvVar11,lVar12 * 2);
  }
  puVar9 = &DAT_146532560;
  local_98 = (void *)0x0;
  if (*(char *)((longlong)param_1 + 0x55) != '\0') {
    puVar9 = &DAT_146532570;
  }
  local_90 = *(int *)(puVar9 + 1);
  lVar12 = (longlong)local_90;
  pvVar11 = (void *)*puVar9;
  if (local_90 == 0) {
    local_8c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
    _guard_xfg_dispatch_icall_nop(local_98,pvVar11,lVar12 * 2);
  }
  puVar9 = &DAT_146532560;
  local_a8 = (void *)0x0;
  if (*(char *)(param_1 + 0x1a) != '\0') {
    puVar9 = &DAT_146532570;
  }
  local_a0 = *(int *)(puVar9 + 1);
  lVar12 = (longlong)local_a0;
  pvVar11 = (void *)*puVar9;
  if (local_a0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_a0,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar11,lVar12 * 2);
  }
  puVar9 = &DAT_146532560;
  local_b8 = (void *)0x0;
  if (*(char *)((longlong)param_1 + 0x69) != '\0') {
    puVar9 = &DAT_146532570;
  }
  local_b0 = *(int *)(puVar9 + 1);
  lVar12 = (longlong)local_b0;
  pvVar11 = (void *)*puVar9;
  if (local_b0 == 0) {
    local_ac = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,0);
    _guard_xfg_dispatch_icall_nop(local_b8,pvVar11,lVar12 * 2);
  }
  FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar8,&DAT_146532440,&local_c8);
  FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar8,&DAT_146532450,param_1 + 10);
  FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar8,&DAT_146532470,&DAT_146532560);
  FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar8,&DAT_1465324c0,plVar7);
  lVar12 = *(longlong *)(param_1 + 0x12);
  plVar10 = (longlong *)
            FDateTime::FDateTime
                      (local_res10,0x7b2,1,1,(ulonglong)uVar15 << 0x20,(ulonglong)uVar16 << 0x20,0,0
                      );
  lVar12 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar12 - *plVar10),8) + (lVar12 - *plVar10)
  ;
  FString::PrintfImpl(&local_d8,L"%lld",(lVar12 >> 0x17) - (lVar12 >> 0x3f));
  FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar8,&DAT_1465324d0,&local_d8);
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
  }
  FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar8,&DAT_146532510,&local_68);
  FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar8,&DAT_146532520,&local_78);
  FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar8,&DAT_146532490,&local_88);
  FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar8,&DAT_1465324a0,&local_98);
  FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar8,&DAT_146532530,ppvVar2);
  FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar8,&DAT_146532540,&local_a8);
  FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar8,&DAT_1465324b0,&local_b8);
  iVar14 = param_1[0x22];
  param_1[0x22] = iVar14 + 1;
  if ((int)param_1[0x23] < iVar14 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar14);
  }
  FEngineSessionManager::FSessionRecord::FSessionRecord
            ((longlong)iVar14 * 0x60 + *(longlong *)(param_1 + 0x20),plVar1);
  local_res8[0] = '\0';
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"EngineSessionManager",L"UseWatchdogMTBF",local_res8,&DAT_1468e2360);
  if ((*(char *)((longlong)param_1 + 0x53) == '\0') && (local_res8[0] != '\0')) {
    uVar6 = FCommandLine::Get();
    cVar4 = FParse::Param(uVar6,L"NoWatchdog");
    if (cVar4 != '\0') goto LAB_14242e7ee;
  }
  else {
LAB_14242e7ee:
    uVar6 = FCommandLine::Get();
    cVar4 = FParse::Param(uVar6,L"ForceWatchdog");
    if (cVar4 == '\0') goto LAB_14242e86e;
  }
  local_d0 = 0x10;
  local_d8 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_d8,0x10,"WindowsNoEditor",0x10,0x3f);
  FUN_14243a1f0(param_1,&local_c8,param_1 + 10,&local_d8,plVar1,plVar7);
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
  }
LAB_14242e86e:
  if (local_b8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14242e8f0 CreateDefaultState body=361 status=ok
// SIG undefined CreateDefaultState(void)

undefined8 * FDynamicResolutionHeuristicProxy::CreateDefaultState(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_14509dda8;
    puVar2 = (undefined8 *)operator_new(0x48);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1[1] = 0;
      *(undefined2 *)(puVar1 + 2) = 0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[5] = 0;
      *(undefined4 *)(puVar2 + 2) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      if ((*(int *)((longlong)puVar2 + 0xc) < 0) && (*(int *)((longlong)puVar2 + 0xc) != 0)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (puVar2,0);
      }
      *(undefined4 *)(puVar2 + 3) = 0;
      iVar4 = 4;
      *(undefined4 *)(puVar2 + 4) = 0x3f800000;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 1;
      puVar2[6] = 0;
      puVar2[7] = 4;
      if (*(int *)((longlong)puVar2 + 0x3c) < 4) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(puVar2 + 6,0);
      }
      puVar3 = (undefined8 *)puVar2[6];
      do {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0xffffffffffffffff;
        puVar3 = puVar3 + 5;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *(undefined4 *)(puVar2 + 8) = 0xffffffff;
      *(undefined1 *)((longlong)puVar2 + 0x44) = 0;
      puVar1[1] = puVar2;
      *(undefined2 *)(puVar1 + 2) = 0;
    }
  }
  puVar2 = (undefined8 *)0x0;
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = puVar1;
    puVar2 = puVar3;
  }
  *param_1 = puVar1;
  param_1[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar1,puVar1);
  return param_1;
}



// FUNCTION 14242ea60 CreateNewPreviousFrameTimings_RenderThread body=202 status=ok
// SIG undefined CreateNewPreviousFrameTimings_RenderThread(void)

longlong FDynamicResolutionHeuristicProxy::CreateNewPreviousFrameTimings_RenderThread
                   (longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uStack_34;
  
  if (0 < *(int *)((longlong)param_1 + 0x1c)) {
    *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + -1;
    return -1;
  }
  ResizeHistoryIfNeeded();
  iVar5 = ((int)param_1[2] + 1) % (int)param_1[1];
  uStack_34 = CONCAT31(uStack_34._1_3_,1);
  lVar4 = (longlong)iVar5;
  lVar2 = *param_1;
  puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x18);
  *puVar1 = 0xbf8000003f800000;
  puVar1[1] = 0xbf800000bf800000;
  *(ulonglong *)(lVar2 + 0x10 + lVar4 * 0x18) = CONCAT44(uStack_34,0xbf800000);
  *(int *)(*param_1 + lVar4 * 0x18) = (int)param_1[4];
  *(undefined4 *)(*param_1 + 4 + lVar4 * 0x18) = param_2;
  *(undefined4 *)(*param_1 + 8 + lVar4 * 0x18) = param_3;
  iVar3 = *(int *)((longlong)param_1 + 0x14) + 1;
  *(int *)(param_1 + 2) = iVar5;
  iVar5 = (int)param_1[1];
  if (iVar3 <= (int)param_1[1]) {
    iVar5 = iVar3;
  }
  lVar2 = param_1[5];
  *(int *)((longlong)param_1 + 0x14) = iVar5;
  param_1[5] = lVar2 + 1;
  return lVar2 + 1;
}



// FUNCTION 14242eb30 FUN_14242eb30 body=489 status=ok
// SIG undefined FUN_14242eb30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14242eb30(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar11 = 0;
  uVar12 = 0x10;
  uVar9 = 0x10;
  uVar10 = uVar11;
  do {
    uVar8 = uVar9 + (int)uVar10 >> 1;
    if (*(uint *)(&DAT_146532140 + (ulonglong)(uVar8 - 1) * 4) < param_3) {
      uVar10 = (ulonglong)uVar8;
      uVar8 = uVar9;
    }
    uVar9 = uVar8;
  } while (1 < uVar9 - (int)uVar10);
  plVar7 = (longlong *)(param_1 + (uVar10 + 1) * 0x10);
  lVar4 = (longlong)(int)plVar7[1];
  if ((int)plVar7[1] < 1) {
    do {
      uVar9 = uVar12 + (int)uVar11 >> 1;
      if (*(uint *)(&DAT_146532140 + (ulonglong)(uVar9 - 1) * 4) < param_3) {
        uVar11 = (ulonglong)uVar9;
        uVar9 = uVar12;
      }
      uVar12 = uVar9;
    } while (1 < uVar12 - (int)uVar11);
    local_a8 = *(undefined4 *)(&DAT_146532140 + uVar11 * 4);
    local_98 = &local_78;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 1;
    local_54 = 0;
    local_64 = _DAT_1468b5d78;
    uStack_60 = uRam00000001468b5d7c;
    uStack_5c = uRam00000001468b5d80;
    uStack_58 = uRam00000001468b5d84;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_a0 = 1;
    (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,param_2,&DAT_146ab6e78,4);
  }
  else {
    lVar1 = *plVar7;
    uVar2 = *(undefined8 *)(lVar1 + -0x10 + lVar4 * 0x10);
    *(undefined8 *)(lVar1 + -0x10 + lVar4 * 0x10) = 0;
    local_80 = *(undefined4 *)(lVar1 + -8 + lVar4 * 0x10);
    lVar3 = plVar7[1];
    local_7c = *(undefined4 *)(lVar1 + -4 + lVar4 * 0x10);
    iVar6 = (int)lVar3 + -1;
    lVar4 = (longlong)iVar6 * 0x10;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(*plVar7 + lVar4);
    iVar5 = (int)plVar7[1];
    iVar6 = (iVar5 - iVar6) + -1;
    if (iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar4 + *plVar7),(void *)((longlong)(int)lVar3 * 0x10 + *plVar7),
                 (longlong)iVar6 << 4);
      iVar5 = (int)plVar7[1];
    }
    *(int *)(plVar7 + 1) = iVar5 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar7);
    *param_2 = uVar2;
    local_88 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
  }
  return param_2;
}



// FUNCTION 14242ed20 FUN_14242ed20 body=473 status=ok
// SIG undefined FUN_14242ed20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14242ed20(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar11 = 0;
  uVar12 = 0x10;
  uVar9 = 0x10;
  uVar10 = uVar11;
  do {
    uVar8 = uVar9 + (int)uVar10 >> 1;
    if (*(uint *)(&DAT_146532140 + (ulonglong)(uVar8 - 1) * 4) < param_3) {
      uVar10 = (ulonglong)uVar8;
      uVar8 = uVar9;
    }
    uVar9 = uVar8;
  } while (1 < uVar9 - (int)uVar10);
  plVar7 = (longlong *)(param_1 + (uVar10 + 1) * 0x10);
  lVar4 = (longlong)(int)plVar7[1];
  if ((int)plVar7[1] < 1) {
    do {
      uVar9 = uVar12 + (int)uVar11 >> 1;
      if (*(uint *)(&DAT_146532140 + (ulonglong)(uVar9 - 1) * 4) < param_3) {
        uVar11 = (ulonglong)uVar9;
        uVar9 = uVar12;
      }
      uVar12 = uVar9;
    } while (1 < uVar12 - (int)uVar11);
    local_90 = &local_78;
    local_64 = _DAT_1468b5d78;
    uStack_60 = uRam00000001468b5d7c;
    uStack_5c = uRam00000001468b5d80;
    uStack_58 = uRam00000001468b5d84;
    local_68 = 1;
    local_78 = 0;
    uStack_70 = 0;
    local_54 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_98 = 0x204;
    (**(code **)(*DAT_146ab6358 + 0x490))
              (DAT_146ab6358,param_2,&DAT_146ab6e78,*(undefined4 *)(&DAT_146532140 + uVar11 * 4));
  }
  else {
    lVar1 = *plVar7;
    uVar2 = *(undefined8 *)(lVar1 + -0x10 + lVar4 * 0x10);
    *(undefined8 *)(lVar1 + -0x10 + lVar4 * 0x10) = 0;
    local_80 = *(undefined4 *)(lVar1 + -8 + lVar4 * 0x10);
    lVar3 = plVar7[1];
    local_7c = *(undefined4 *)(lVar1 + -4 + lVar4 * 0x10);
    iVar6 = (int)lVar3 + -1;
    lVar4 = (longlong)iVar6 * 0x10;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(*plVar7 + lVar4);
    iVar5 = (int)plVar7[1];
    iVar6 = (iVar5 - iVar6) + -1;
    if (iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar4 + *plVar7),(void *)((longlong)(int)lVar3 * 0x10 + *plVar7),
                 (longlong)iVar6 << 4);
      iVar5 = (int)plVar7[1];
    }
    *(int *)(plVar7 + 1) = iVar5 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar7);
    *param_2 = uVar2;
    local_88 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
  }
  return param_2;
}



// FUNCTION 14242ef00 FUN_14242ef00 body=332 status=ok
// SIG undefined FUN_14242ef00(void)

undefined8 * FUN_14242ef00(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_14509f180;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14242f050 FUN_14242f050 body=332 status=ok
// SIG undefined FUN_14242f050(void)

undefined8 * FUN_14242f050(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_14509f1a0;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14242f1a0 FUN_14242f1a0 body=332 status=ok
// SIG undefined FUN_14242f1a0(void)

undefined8 * FUN_14242f1a0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_14509f1b0;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14242f2f0 FUN_14242f2f0 body=332 status=ok
// SIG undefined FUN_14242f2f0(void)

undefined8 * FUN_14242f2f0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_14509f190;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14242f440 FUN_14242f440 body=332 status=ok
// SIG undefined FUN_14242f440(void)

undefined8 * FUN_14242f440(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_14509f160;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14242f590 DeleteStoredRecord body=529 status=ok
// SIG undefined DeleteStoredRecord(void)

void FEngineSessionManager::DeleteStoredRecord(longlong param_1,undefined8 *param_2)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  void **local_res8;
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_30 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_30;
  pvVar1 = (void *)*param_2;
  local_38 = (void *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    ::_guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar3 * 2);
  }
  iVar2 = local_30;
  pvVar1 = local_38;
  local_28 = (void *)0x0;
  local_20 = local_30;
  if (local_30 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_30,0);
    ::_guard_xfg_dispatch_icall_nop(local_28,pvVar1,(longlong)iVar2 * 2);
  }
  GetStoreSectionString(param_1,local_48,&local_28);
  FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_48,&DAT_146532440);
  FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_48,&DAT_146532450);
  FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_48,&DAT_146532470);
  FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_48,&DAT_146532480);
  FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_48,&DAT_1465324c0);
  FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_48,&DAT_1465324d0);
  FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_48,&DAT_146532510);
  FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_48,&DAT_146532520);
  FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_48,&DAT_146532490);
  FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_48,&DAT_1465324a0);
  FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_48,&DAT_146532530);
  FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_48,&DAT_146532540);
  FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,local_48,&DAT_1465324b0);
  local_res8 = &local_38;
  TArray<FEngineSessionManager::FSessionRecord,FDefaultAllocator>::
  RemoveAll<<lambda_3478abcf20efb15d793cd06aa9b700e0>_>(param_1 + 0x80,&local_res8);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14242f7b0 FUN_14242f7b0 body=78 status=ok
// SIG undefined FUN_14242f7b0(void)

void FUN_14242f7b0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_142235230(param_1);
  if (iVar1 == 3) {
    lVar2 = FUN_1422325e0(param_1);
    *(undefined1 *)(lVar2 + 0x182) = 0;
  }
  FUN_142227880(param_1);
  return;
}



// FUNCTION 14242f800 DoesDefaultValueMatchAutogenerated body=462 status=ok
// SIG undefined DoesDefaultValueMatchAutogenerated(void)

undefined1 UEdGraphSchema::DoesDefaultValueMatchAutogenerated(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FText::FText(local_38);
  lVar8 = param_2 + 0xc0;
  cVar3 = FText::IsEmpty(lVar8);
  if (cVar3 == '\0') {
    if (*(int *)(param_2 + 0xb0) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(param_2 + 0xa8);
    }
    cVar3 = FTextStringHelper::ReadFromString(puVar6,local_38,0,0,0,0,2);
    if (cVar3 != '\0') {
      uVar4 = UTextProperty::Identical_Implementation(local_38,lVar8,0);
      goto LAB_14242f978;
    }
  }
  if (*(longlong *)(param_2 + 0xb8) == 0) {
    cVar3 = FText::IsEmpty(lVar8);
    if (cVar3 == '\0') {
      local_48 = (undefined2 *)0x0;
      local_40 = 0;
      FUN_14161b800(&local_48,lVar8,0);
      local_58 = local_48;
      local_50 = (int)local_40;
      local_4c = local_40._4_4_;
      local_40 = 0;
      local_48 = (undefined2 *)0x0;
    }
    else {
      local_50 = *(int *)(param_2 + 0xa0);
      lVar8 = (longlong)local_50;
      _Src = *(void **)(param_2 + 0x98);
      local_58 = (undefined2 *)0x0;
      if (local_50 == 0) {
        local_4c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
        ::_guard_xfg_dispatch_icall_nop(local_58,_Src,lVar8 * 2);
      }
    }
  }
  else {
    UObjectBaseUtility::GetPathName(*(longlong *)(param_2 + 0xb8),&local_58,0);
  }
  if (*(int *)(param_2 + 0xb0) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = *(undefined2 **)(param_2 + 0xa8);
  }
  puVar7 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar7 = local_58;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar6);
  uVar4 = iVar5 == 0;
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_14242f978:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return uVar4;
}



// FUNCTION 14242f9d0 FUN_14242f9d0 body=1075 status=ok
// SIG undefined FUN_14242f9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14242f9d0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  byte param_5,byte param_6,undefined1 param_7,undefined4 param_8)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined1 auStack_418 [32];
  undefined8 *local_3f8;
  undefined1 local_3f0;
  undefined1 local_3e8;
  undefined1 local_3e0;
  undefined1 local_3d8;
  undefined1 local_3d0;
  undefined1 local_3c8;
  undefined1 local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b0;
  undefined8 *local_3a8;
  longlong local_398;
  longlong local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined8 local_35c;
  undefined8 uStack_354;
  undefined8 local_34c;
  undefined4 local_344;
  undefined4 local_338;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [416];
  undefined8 local_118 [15];
  undefined8 *local_a0;
  uint local_8c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_418;
  if ((0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x1a0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x50))) {
    local_398 = param_4;
    local_390 = param_3;
    (**(code **)(*param_2 + 0x18))(param_2);
    if ((*(longlong *)(param_1 + 8) != 0) && (*(int *)(*(longlong *)(param_1 + 8) + 0x50) != 0)) {
      (**(code **)(*param_2 + 0x18))(param_2);
    }
    lVar5 = operator_new(0x780);
    puVar11 = (undefined8 *)0x0;
    puVar6 = puVar11;
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)
               FUN_142429b30(lVar5,*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
    }
    (**(code **)(*param_2 + 0x18))(param_2,puVar6);
    puVar7 = (undefined8 *)operator_new(0x50);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      *(undefined4 *)(puVar7 + 2) = 4;
      puVar7[3] = 0;
      puVar7[4] = 0;
      *(undefined1 *)(puVar7 + 6) = 0;
      *(undefined4 *)(puVar7 + 7) = 2;
      puVar7[8] = 0;
      puVar7[9] = 0;
      *puVar7 = &PTR_LAB_14509dc48;
      puVar7[1] = &PTR_LAB_14509dd48;
      puVar11 = puVar7;
    }
    local_380 = *(undefined4 *)(param_3 + 0x38);
    local_388 = *(undefined8 *)(param_3 + 0x30);
    local_3a8 = &local_328;
    local_3b0 = 0x3f800000;
    local_3b8 = 1;
    local_3c0 = 0;
    local_3c8 = 0;
    local_3d0 = 0;
    local_328 = _DAT_1464aa7d0;
    uStack_320 = _DAT_1464aa7d8;
    local_3d8 = 0;
    local_318 = _DAT_1464aa7e0;
    uStack_310 = _DAT_1464aa7e8;
    local_308 = _DAT_1464aa7f0;
    uStack_300 = _DAT_1464aa7f8;
    local_3e0 = 0;
    local_3e8 = 0;
    local_3f0 = param_7;
    local_3f8 = &local_378;
    local_2f8 = _DAT_1464aa800;
    uStack_2f0 = uRam00000001464aa808;
    local_2e8 = 0x3f80000000000000;
    uStack_2e0 = 0x3f8000003f800000;
    local_2d8 = 0;
    local_2d0 = 0x3f800000;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_378 = 0;
    uStack_370 = 0;
    local_368 = 0;
    local_360 = 0;
    local_35c = 0;
    uStack_354 = 0;
    local_34c = 0;
    local_344 = 0;
    local_338 = local_380;
    FUN_1408c7250(local_2b8,param_3,&local_388,&local_35c);
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      FUN_142439a50(puVar11 + 1,local_2b8);
    }
    else {
      FUN_142428800(puVar11 + 1,local_2b8);
    }
    puVar7 = puVar11 + 1;
    (**(code **)(*param_2 + 0x18))(param_2,puVar11);
    if ((*(longlong *)(param_1 + 8) == 0) || (*(int *)(*(longlong *)(param_1 + 8) + 0x50) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    FUN_1408bb700(local_118);
    puVar12 = local_118;
    if (local_a0 != (undefined8 *)0x0) {
      puVar12 = local_a0;
    }
    if (bVar2) {
      lVar5 = *(longlong *)(param_1 + 8);
    }
    else {
      lVar5 = 0;
    }
    lVar8 = lVar5 + 8;
    if (lVar5 == 0) {
      lVar8 = 0;
    }
    puVar12[2] = lVar8;
    if (puVar6 == (undefined8 *)0x0) {
      local_78 = (undefined8 *)0x0;
    }
    else {
      local_78 = puVar6 + 1;
    }
    if (puVar11 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    local_70 = local_398;
    *puVar12 = puVar7;
    if (bVar2) {
      iVar9 = *(int *)(*(longlong *)(param_1 + 8) + 0x50);
    }
    else {
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x1a0);
    }
    iVar1 = *(int *)(puVar12 + 7);
    local_398 = (ulonglong)
                (uint)(iVar9 / 3 + (iVar9 >> 0x1f) +
                      (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)
                      ) << 0x20;
    *(int *)(puVar12 + 7) = iVar1 + 1;
    if (*(int *)((longlong)puVar12 + 0x3c) < iVar1 + 1) {
      TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
      ::ResizeGrow(puVar12 + 5,iVar1);
    }
    puVar11 = (undefined8 *)puVar12[6];
    if ((undefined8 *)puVar12[6] == (undefined8 *)0x0) {
      puVar11 = puVar12 + 5;
    }
    puVar11[iVar1] = local_398;
    *(undefined4 *)(puVar12 + 9) = 0;
    *(int *)((longlong)puVar12 + 0x4c) = *(int *)(*(longlong *)(param_1 + 0x10) + 0x1a0) + -1;
    local_68 = param_8;
    fVar13 = (float)FMatrix::Determinant(local_390);
    uVar10 = 0;
    if (fVar13 < 0.0) {
      uVar10 = 8;
    }
    local_8c = (uVar10 | (uint)param_6 << 4 | local_8c & 0xffe00fe7) & 0xfffffdff |
               (param_5 & 7) << 0x12;
    (**(code **)(*param_2 + 0x48))(param_2,local_118);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_1408bbda0(local_118);
  }
  return;
}



// FUNCTION 14242fe10 Empty body=142 status=ok
// SIG undefined Empty(void)

void TArray<FEngineSessionManager::FSessionRecord,FDefaultAllocator>::Empty
               (undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (plVar1[9] != 0) {
      FMemory::Free();
    }
    if (plVar1[5] != 0) {
      FMemory::Free();
    }
    if (plVar1[3] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 0xc;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 14242fea0 EndReadWriteRecords body=744 status=ok
// SIG undefined EndReadWriteRecords(void)

void FEngineSessionManager::EndReadWriteRecords(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong local_58;
  int local_50;
  int local_4c;
  void *local_48;
  ulonglong local_40;
  longlong local_38 [2];
  
  local_50 = 0;
  local_4c = 0;
  local_58 = 0;
  if (*(int *)(param_1 + 0x88) < 1) goto LAB_14243009c;
  puVar5 = *(undefined8 **)(param_1 + 0x80);
  puVar6 = puVar5 + (longlong)*(int *)(param_1 + 0x88) * 0xc;
  if (puVar5 == puVar6) {
LAB_142430050:
    iVar3 = 0;
  }
  else {
    do {
      iVar3 = local_50;
      pvVar2 = (void *)*puVar5;
      iVar7 = *(int *)(puVar5 + 1) + -1;
      if (*(int *)(puVar5 + 1) == 0) {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        local_50 = (uint)(local_50 == 0) + local_50 + iVar7;
        if (local_4c < local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar3);
        }
        pvVar1 = (void *)(local_58 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
      }
      local_48 = (void *)0x0;
      local_40 = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      pvVar2 = local_48;
      FGenericPlatformString::Memcpy(local_48,&DAT_145099dac,4);
      iVar3 = local_50;
      if (((int)local_40 != 0) && (iVar7 = (int)local_40 + -1, iVar7 != 0)) {
        lVar4 = (longlong)local_50;
        local_50 = (uint)(local_50 == 0) + local_50 + iVar7;
        if (local_4c < local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar3);
        }
        pvVar1 = (void *)(local_58 + (lVar4 - (ulonglong)(iVar3 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
      }
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      puVar5 = puVar5 + 0xc;
    } while (puVar5 != puVar6);
    if (local_50 == 0) goto LAB_142430050;
    iVar3 = local_50 + -1;
  }
  iVar7 = (local_50 - (iVar3 + -1)) + -1;
  if (iVar7 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(local_58 + (longlong)(iVar3 + -1) * 2),
               (void *)(local_58 + (longlong)iVar3 * 2),(longlong)iVar7 * 2);
  }
  local_50 = local_50 + -1;
  TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_58);
LAB_14243009c:
  pvVar2 = DAT_1465323e0;
  local_48 = (void *)0x0;
  iVar3 = (int)DAT_1465323e8;
  local_40 = CONCAT44(local_40._4_4_,iVar3);
  if (iVar3 == 0) {
    local_40 = DAT_1465323e8 & 0xffffffff;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,DAT_1465323e8 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_48,pvVar2,(longlong)iVar3 * 2);
  }
  GetStoreSectionString(param_1,local_38,&local_48);
  local_48 = (void *)0x0;
  local_40 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"SessionList",0x18);
  FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,local_38,&local_48,&local_58);
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  TArray<FEngineSessionManager::FSessionRecord,FDefaultAllocator>::Empty(param_1 + 0x80,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142430190 FUN_142430190 body=89 status=ok
// SIG undefined FUN_142430190(void)

void FUN_142430190(undefined8 *param_1)

{
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_142439a50(param_1[2],param_1 + 4);
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  *(undefined1 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001424301e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 1424301f0 ExecuteTask body=281 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FDefaultDynamicResolutionState::~FDefaultDynamicResolutionState'::`2'::DeleteDynamicResolutionProxyName,<lambda_97b3a55389ff0a7675f3030f7eba74f9>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  FUN_142434440(param_1[2],1);
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    TArray<FDefaultDynamicResolutionStateProxy::InFlightFrameQueries,FDefaultAllocator>::
    ~TArray<FDefaultDynamicResolutionStateProxy::InFlightFrameQueries,FDefaultAllocator>(plVar5 + 6)
    ;
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar5,0x48);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14509f180;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142430310 ExecuteTask body=243 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FDefaultDynamicResolutionState::ProcessEvent'::`13'::DynamicResolutionBeginFrameName,<lambda_39d7e6cfaa0ae58ff356693759561a8d>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_14242c5c0(param_1[3],uVar3,*(undefined4 *)(param_1 + 2));
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_14509f1a0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142430410 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::`2'::WaitRHIThreadFenceForDynamicDataName,<lambda_0cb6192001671644349c60973fa33477>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_14242b1a0(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_14509f1b0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142430500 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FDefaultDynamicResolutionState::ResetHistory'::`2'::DynamicResolutionResetHistoryName,<lambda_d579f6d3927cad775059d0ae9c1a6fd5>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  <lambda_d579f6d3927cad775059d0ae9c1a6fd5>::operator()(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14509f190;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
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
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1424305f0 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::`2'::WaitRHIThreadFenceForDynamicDataName,<lambda_0cb6192001671644349c60973fa33477>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_14242ae40(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_14509f160;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1424306e0 FUN_1424306e0 body=669 status=ok
// SIG undefined FUN_1424306e0(void)

undefined1 FUN_1424306e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined2 **ppuStack_60;
  longlong local_58 [2];
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  ulonglong uVar10;
  
  cVar2 = FPackageName::IsValidLongPackageName(param_1,1,0);
  if (cVar2 != '\0') {
    uVar10 = 0;
    local_78 = (undefined2 *)0x0;
    local_70 = 0;
    FUN_1416fecc0(local_58,param_1,&local_78);
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_88 = (longlong *)0x0;
    local_80 = 0;
    FPackageName::FindPackagesInDirectory(&local_88,local_58);
    iVar11 = (int)local_80 + -1;
    if (-1 < iVar11) {
      lVar7 = (longlong)iVar11 << 4;
      lVar9 = (longlong)(int)local_80 << 4;
      do {
        FUN_141672300(&local_78,(longlong)local_88 + lVar7,1);
        puVar6 = &DAT_143f3eda8;
        if ((int)DAT_1464b4440 != 0) {
          puVar6 = DAT_1464b4438;
        }
        puVar5 = &DAT_143f3eda8;
        if ((int)local_70 != 0) {
          puVar5 = local_78;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
        if (iVar3 == 0) {
          if (*(longlong *)(lVar7 + (longlong)local_88) != 0) {
            FMemory::Free();
          }
          iVar3 = ((int)local_80 - iVar11) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar7 + (longlong)local_88),(void *)(lVar9 + (longlong)local_88),
                       (longlong)iVar3 << 4);
          }
          local_80 = CONCAT44(local_80._4_4_,(int)local_80 + -1);
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_88);
        }
        if (local_78 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        lVar9 = lVar9 + -0x10;
        lVar7 = lVar7 + -0x10;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
    uVar13 = uVar10;
    iVar11 = (int)local_80;
    plVar1 = local_88;
    if (0 < (int)local_80) {
      do {
        puVar12 = (undefined8 *)((longlong)local_88 + uVar13);
        puVar4 = (undefined8 *)FUN_1416f4630(local_48,puVar12);
        if (*(int *)(puVar4 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*puVar4;
        }
        lVar7 = FUN_14178ae20(0,puVar6);
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        if (lVar7 == 0) {
          if (*(int *)(puVar12 + 1) == 0) {
            puVar6 = &DAT_143f3eda8;
          }
          else {
            puVar6 = (undefined2 *)*puVar12;
          }
          lVar7 = LoadPackage(0,puVar6,0,0);
        }
        else {
          UPackage::FullyLoad(lVar7);
        }
        if (lVar7 != 0) {
          ppuStack_60 = &local_78;
          local_78 = (undefined2 *)CONCAT44(local_78._4_4_,param_3);
          local_68 = &LAB_14242d810;
          local_38 = 0x4242d810;
          uStack_34 = 1;
          local_70 = param_2;
          uStack_30 = ppuStack_60;
          FUN_1417a4830(lVar7,&local_38,1,0,0);
        }
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
        uVar13 = uVar13 + 0x10;
        iVar11 = (int)local_80;
        plVar1 = local_88;
      } while ((int)uVar8 < (int)local_80);
    }
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142430980 Fork_GameThread body=75 status=ok
// SIG undefined Fork_GameThread(void)

void FDefaultDynamicResolutionDriver::Fork_GameThread(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *puVar2 = &PTR_FUN_14509dd88;
    puVar2[1] = uVar1;
    puVar2[2] = param_2;
    return;
  }
  return;
}



// FUNCTION 1424309d0 GetAssetsGraphHoverMessage body=55 status=ok
// SIG undefined GetAssetsGraphHoverMessage(void)

void UEdGraphSchema::GetAssetsGraphHoverMessage(void)

{
  longlong *in_R9;
  undefined1 *in_stack_00000028;
  longlong local_18 [2];
  
  if (in_R9 != local_18) {
    if (*in_R9 != 0) {
      FMemory::Free();
    }
    *in_R9 = 0;
    in_R9[1] = 0;
  }
  *in_stack_00000028 = 0;
  return;
}



// FUNCTION 142430a10 FUN_142430a10 body=773 status=ok
// SIG undefined FUN_142430a10(void)

void FUN_142430a10(undefined8 param_1,longlong param_2,longlong param_3,byte *param_4,
                  ulonglong *param_5)

{
  ulonglong uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined8 local_58;
  float local_50;
  
  if (param_2 == 0) {
    return;
  }
  FWeakObjectPtr::operator=(param_4 + 0x6c);
  *param_4 = *param_4 | 1;
  param_4[0x80] = 0;
  param_4[0x81] = 0;
  param_4[0x82] = 0;
  param_4[0x83] = 0;
  param_4[0x84] = 0;
  param_4[0x85] = 0;
  param_4[0x86] = 0;
  param_4[0x87] = 0;
  lVar4 = *(longlong *)(param_2 + 0x168);
  if (lVar4 != 0) {
    lVar3 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142430a9d;
  }
  lVar4 = 0;
LAB_142430a9d:
  FWeakObjectPtr::operator=(param_4 + 0x74,lVar4);
  lVar4 = *(longlong *)(param_2 + 0x168);
  if (lVar4 == 0) {
    local_58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_50 = DAT_1468b5d98;
  }
  else {
    local_58 = *(undefined8 *)(lVar4 + 0x220);
    local_50 = *(float *)(lVar4 + 0x228);
  }
  *(ulonglong *)(param_4 + 0x20) = local_58;
  *(ulonglong *)(param_4 + 0x14) = local_58;
  *(float *)(param_4 + 0x28) = local_50;
  *(float *)(param_4 + 0x1c) = local_50;
  if (param_3 == 0) {
    local_58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_50 = DAT_1468b5d98;
  }
  else {
    lVar4 = *(longlong *)(param_3 + 0x168);
    if (lVar4 == 0) {
      local_58._0_4_ = DAT_1468b5d90;
      local_58._4_4_ = DAT_1468b5d94;
      local_50 = DAT_1468b5d98;
    }
    else {
      local_58._0_4_ = *(float *)(lVar4 + 0x220);
      local_58._4_4_ = *(float *)(lVar4 + 0x224);
      local_50 = *(float *)(lVar4 + 0x228);
    }
    local_58._0_4_ = *(float *)(param_4 + 0x20) - (float)local_58;
    local_58._4_4_ = *(float *)(param_4 + 0x24) - local_58._4_4_;
    local_50 = *(float *)(param_4 + 0x28) - local_50;
    fVar6 = (float)local_58 * (float)local_58 + local_58._4_4_ * local_58._4_4_ +
            local_50 * local_50;
    if (fVar6 == 1.0) {
    }
    else {
      if (1e-08 <= fVar6) {
        auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar7 = auVar8._0_4_;
        fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
        fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
        local_58._0_4_ = fVar7 * (float)local_58;
        local_50 = fVar7 * local_50;
        fVar7 = fVar7 * local_58._4_4_;
      }
      else {
        local_50 = DAT_1468b5d98;
        fVar7 = DAT_1468b5d94;
        local_58._0_4_ = DAT_1468b5d90;
      }
      local_58 = CONCAT44(fVar7,(float)local_58);
    }
  }
  *param_5 = local_58;
  *(float *)(param_5 + 1) = local_50;
  uVar1 = *param_5;
  uVar5 = (uint)param_5[1] ^ 0x80000000;
  *(ulonglong *)(param_4 + 0x38) = uVar1 ^ 0x8000000080000000;
  *(ulonglong *)(param_4 + 0x2c) = uVar1 ^ 0x8000000080000000;
  *(uint *)(param_4 + 0x40) = uVar5;
  *(uint *)(param_4 + 0x34) = uVar5;
  return;
}



// FUNCTION 142430d20 GetBestHitInfo body=47 status=ok
// SIG undefined GetBestHitInfo(void)

void FPointDamageEvent::GetBestHitInfo
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  FUN_140729f20(param_4,param_1 + 0x20);
  *param_5 = *(undefined8 *)(param_1 + 0x14);
  *(undefined4 *)(param_5 + 1) = *(undefined4 *)(param_1 + 0x1c);
  return;
}



// FUNCTION 142430d50 FUN_142430d50 body=343 status=ok
// SIG undefined FUN_142430d50(void)

void FUN_142430d50(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float local_48;
  float fStack_44;
  float local_40;
  
  FUN_140729f20(param_4,*(undefined8 *)(param_1 + 0x30));
  local_48 = *(float *)(param_4 + 0x20) - *(float *)(param_1 + 0x24);
  fStack_44 = *(float *)(param_4 + 0x24) - *(float *)(param_1 + 0x28);
  local_40 = *(float *)(param_4 + 0x28) - *(float *)(param_1 + 0x2c);
  fVar1 = fStack_44 * fStack_44 + local_48 * local_48 + local_40 * local_40;
  if (fVar1 != 1.0) {
    if (fVar1 < 1e-08) {
      local_48 = DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
      fStack_44 = DAT_1468b5d94;
    }
    else {
      auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
      fVar2 = auVar3._0_4_;
      fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
      fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
      local_48 = local_48 * fVar2;
      fStack_44 = fStack_44 * fVar2;
      local_40 = local_40 * fVar2;
    }
  }
  *param_5 = CONCAT44(fStack_44,local_48);
  *(float *)(param_5 + 1) = local_40;
  return;
}



// FUNCTION 142430eb0 FUN_142430eb0 body=373 status=ok
// SIG undefined FUN_142430eb0(void)

longlong FUN_142430eb0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 2);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 2);
    return lVar3;
  }
  if (*param_1 != 0) {
    param_2 = *param_1;
  }
  if (param_2 != 0) {
    lVar3 = param_1[1];
    if (lVar3 == 0) {
      return *(longlong *)(param_2 + 0x168);
    }
    local_28 = *(longlong *)(param_2 + 0x10);
    if (((int)lVar3 == 0) && ((int)((ulonglong)lVar3 >> 0x20) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      if (local_28 == 0) {
        local_20 = (longlong *)0x0;
      }
      else {
        local_20 = *(longlong **)(local_28 + 0x38);
      }
      local_18 = 0xffffffff;
      local_14 = 0x101;
      local_12 = 0;
      FUN_140c49360(&local_28);
      while (local_20 != (longlong *)0x0) {
        if (local_20[3] == lVar3) {
          lVar3 = (**(code **)(*local_20 + 0x378))
                            (local_20,*(int *)((longlong)local_20 + 0x44) + param_2);
          if (lVar3 == 0) {
            return 0;
          }
          lVar4 = FUN_1429ff160();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) {
            return 0;
          }
          return lVar3;
        }
        local_20 = (longlong *)local_20[5];
        FUN_140c49360(&local_28);
      }
    }
  }
  return 0;
}



// FUNCTION 142431030 GetDamageScale body=86 status=ok
// SIG undefined GetDamageScale(void)

float FRadialDamageParams::GetDamageScale(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 8);
  fVar1 = 0.0;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  fVar3 = *(float *)(param_1 + 0xc);
  if (*(float *)(param_1 + 0xc) <= fVar2) {
    fVar3 = fVar2;
  }
  if (param_2 < fVar3) {
    if ((*(float *)(param_1 + 0x10) != 0.0) && (fVar2 < param_2)) {
      fVar2 = ::_guard_xfg_dispatch_icall_nop
                        (1.0 - (param_2 - fVar2) / (fVar3 - fVar2),*(float *)(param_1 + 0x10));
      return fVar2;
    }
    fVar1 = 1.0;
  }
  return fVar1;
}



// FUNCTION 142431090 GetGraphDisplayInformation body=167 status=ok
// SIG undefined GetGraphDisplayInformation(void)

void UEdGraphSchema::GetGraphDisplayInformation
               (undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_res10;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_res10 = *(undefined8 *)(param_2 + 0x18);
  FName::ToString(&local_res10,local_38);
  uVar5 = FText::FromString(local_28,local_38);
  FText::operator=(param_3,uVar5);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  FText::operator=(param_3 + 0x18,param_3);
  return;
}



// FUNCTION 142431140 FUN_142431140 body=8476 status=ok
// SIG undefined FUN_142431140(void)

void FUN_142431140(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146af34b8) && (_Init_thread_header(&DAT_146af34b8), DAT_146af34b8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Channels",1);
    DAT_146af34b0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af34b8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af34b0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af34b0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af34b0 + 0x30));
  }
  if ((*piVar5 < DAT_146af34c8) && (_Init_thread_header(&DAT_146af34c8), DAT_146af34c8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InRate",1);
    DAT_146af34c0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af34c8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af34c0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af34c0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af34c0 + 0x30));
  }
  if ((*piVar5 < DAT_146af34d8) && (_Init_thread_header(&DAT_146af34d8), DAT_146af34d8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OutRate",1);
    DAT_146af34d0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af34d8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af34d0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af34d0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af34d0 + 0x30));
  }
  if ((*piVar5 < DAT_146af34e8) && (_Init_thread_header(&DAT_146af34e8), DAT_146af34e8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OutSaturation",1);
    DAT_146af34e0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af34e8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af34e0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af34e0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af34e0 + 0x30));
  }
  if ((*piVar5 < DAT_146af34f8) && (_Init_thread_header(&DAT_146af34f8), DAT_146af34f8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxPacketOverhead",1);
    DAT_146af34f0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af34f8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af34f0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af34f0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af34f0 + 0x30));
  }
  if ((*piVar5 < DAT_146af3508) && (_Init_thread_header(&DAT_146af3508), DAT_146af3508 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InRateClientMax",1);
    DAT_146af3500 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3508);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3500 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3500 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3500 + 0x30));
  }
  if ((*piVar5 < DAT_146af3518) && (_Init_thread_header(&DAT_146af3518), DAT_146af3518 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InRateClientMin",1);
    DAT_146af3510 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3518);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3510 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3510 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3510 + 0x30));
  }
  if ((*piVar5 < DAT_146af3528) && (_Init_thread_header(&DAT_146af3528), DAT_146af3528 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InRateClientAvg",1);
    DAT_146af3520 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3528);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3520 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3520 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3520 + 0x30));
  }
  if ((*piVar5 < DAT_146af3538) && (_Init_thread_header(&DAT_146af3538), DAT_146af3538 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InPacketsClientMax",1);
    DAT_146af3530 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3538);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3530 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3530 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3530 + 0x30));
  }
  if ((*piVar5 < DAT_146af3548) && (_Init_thread_header(&DAT_146af3548), DAT_146af3548 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InPacketsClientMin",1);
    DAT_146af3540 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3548);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3540 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3540 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3540 + 0x30));
  }
  if ((*piVar5 < DAT_146af3558) && (_Init_thread_header(&DAT_146af3558), DAT_146af3558 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InPacketsClientAvg",1);
    DAT_146af3550 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3558);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3550 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3550 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3550 + 0x30));
  }
  if ((*piVar5 < DAT_146af3568) && (_Init_thread_header(&DAT_146af3568), DAT_146af3568 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OutRateClientMax",1);
    DAT_146af3560 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3568);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3560 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3560 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3560 + 0x30));
  }
  if ((*piVar5 < DAT_146af3578) && (_Init_thread_header(&DAT_146af3578), DAT_146af3578 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OutRateClientMin",1);
    DAT_146af3570 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3578);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3570 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3570 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3570 + 0x30));
  }
  if ((*piVar5 < DAT_146af3588) && (_Init_thread_header(&DAT_146af3588), DAT_146af3588 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OutRateClientAvg",1);
    DAT_146af3580 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3588);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3580 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3580 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3580 + 0x30));
  }
  if ((*piVar5 < DAT_146af3598) && (_Init_thread_header(&DAT_146af3598), DAT_146af3598 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OutPacketsClientMax",1);
    DAT_146af3590 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3598);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3590 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3590 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3590 + 0x30));
  }
  if ((*piVar5 < DAT_146af35a8) && (_Init_thread_header(&DAT_146af35a8), DAT_146af35a8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OutPacketsClientMin",1);
    DAT_146af35a0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af35a8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af35a0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af35a0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af35a0 + 0x30));
  }
  if ((*piVar5 < DAT_146af35b8) && (_Init_thread_header(&DAT_146af35b8), DAT_146af35b8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OutPacketsClientAvg",1);
    DAT_146af35b0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af35b8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af35b0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af35b0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af35b0 + 0x30));
  }
  if ((*piVar5 < DAT_146af35c8) && (_Init_thread_header(&DAT_146af35c8), DAT_146af35c8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NetNumClients",1);
    DAT_146af35c0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af35c8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af35c0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af35c0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af35c0 + 0x30));
  }
  if ((*piVar5 < DAT_146af35d8) && (_Init_thread_header(&DAT_146af35d8), DAT_146af35d8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InPackets",1);
    DAT_146af35d0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af35d8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af35d0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af35d0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af35d0 + 0x30));
  }
  if ((*piVar5 < DAT_146af35e8) && (_Init_thread_header(&DAT_146af35e8), DAT_146af35e8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OutPackets",1);
    DAT_146af35e0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af35e8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af35e0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af35e0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af35e0 + 0x30));
  }
  if ((*piVar5 < DAT_146af35f8) && (_Init_thread_header(&DAT_146af35f8), DAT_146af35f8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InBunches",1);
    DAT_146af35f0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af35f8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af35f0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af35f0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af35f0 + 0x30));
  }
  if ((*piVar5 < DAT_146af3608) && (_Init_thread_header(&DAT_146af3608), DAT_146af3608 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OutBunches",1);
    DAT_146af3600 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3608);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3600 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3600 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3600 + 0x30));
  }
  if ((*piVar5 < DAT_146af3618) && (_Init_thread_header(&DAT_146af3618), DAT_146af3618 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OutLoss",1);
    DAT_146af3610 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3618);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3610 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3610 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3610 + 0x30));
  }
  if ((*piVar5 < DAT_146af3628) && (_Init_thread_header(&DAT_146af3628), DAT_146af3628 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InLoss",1);
    DAT_146af3620 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3628);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3620 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3620 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3620 + 0x30));
  }
  if ((*piVar5 < DAT_146af3638) && (_Init_thread_header(&DAT_146af3638), DAT_146af3638 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"VoiceBytesSent",1);
    DAT_146af3630 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3638);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3630 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3630 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3630 + 0x30));
  }
  if ((*piVar5 < DAT_146af3648) && (_Init_thread_header(&DAT_146af3648), DAT_146af3648 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"VoiceBytesRecv",1);
    DAT_146af3640 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3648);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3640 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3640 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3640 + 0x30));
  }
  if ((*piVar5 < DAT_146af3658) && (_Init_thread_header(&DAT_146af3658), DAT_146af3658 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"VoicePacketsSent",1);
    DAT_146af3650 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3658);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3650 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3650 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3650 + 0x30));
  }
  if ((*piVar5 < DAT_146af3668) && (_Init_thread_header(&DAT_146af3668), DAT_146af3668 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"VoicePacketsRecv",1);
    DAT_146af3660 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3668);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3660 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3660 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3660 + 0x30));
  }
  if ((*piVar5 < DAT_146af3678) && (_Init_thread_header(&DAT_146af3678), DAT_146af3678 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PercentInVoice",1);
    DAT_146af3670 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3678);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3670 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3670 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3670 + 0x30));
  }
  if ((*piVar5 < DAT_146af3688) && (_Init_thread_header(&DAT_146af3688), DAT_146af3688 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PercentOutVoice",1);
    DAT_146af3680 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3688);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3680 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3680 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3680 + 0x30));
  }
  if ((*piVar5 < DAT_146af3698) && (_Init_thread_header(&DAT_146af3698), DAT_146af3698 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumActorChannels",1);
    DAT_146af3690 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3698);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3690 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3690 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3690 + 0x30));
  }
  if ((*piVar5 < DAT_146af36a8) && (_Init_thread_header(&DAT_146af36a8), DAT_146af36a8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumConsideredActors",1);
    DAT_146af36a0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af36a8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af36a0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af36a0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af36a0 + 0x30));
  }
  if ((*piVar5 < DAT_146af36b8) && (_Init_thread_header(&DAT_146af36b8), DAT_146af36b8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PrioritizedActors",1);
    DAT_146af36b0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af36b8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af36b0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af36b0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af36b0 + 0x30));
  }
  if ((*piVar5 < DAT_146af36c8) && (_Init_thread_header(&DAT_146af36c8), DAT_146af36c8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumRelevantActors",1);
    DAT_146af36c0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af36c8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af36c0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af36c0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af36c0 + 0x30));
  }
  if ((*piVar5 < DAT_146af36d8) && (_Init_thread_header(&DAT_146af36d8), DAT_146af36d8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumRelevantDeletedActors",1);
    DAT_146af36d0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af36d8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af36d0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af36d0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af36d0 + 0x30));
  }
  if ((*piVar5 < DAT_146af36e8) && (_Init_thread_header(&DAT_146af36e8), DAT_146af36e8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumReplicatedActorAttempts",1);
    DAT_146af36e0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af36e8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af36e0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af36e0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af36e0 + 0x30));
  }
  if ((*piVar5 < DAT_146af36f8) && (_Init_thread_header(&DAT_146af36f8), DAT_146af36f8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumReplicatedActors",1);
    DAT_146af36f0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af36f8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af36f0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af36f0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af36f0 + 0x30));
  }
  if ((*piVar5 < DAT_146af3708) && (_Init_thread_header(&DAT_146af3708), DAT_146af3708 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumActors",1);
    DAT_146af3700 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3708);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3700 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3700 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3700 + 0x30));
  }
  if ((*piVar5 < DAT_146af3718) && (_Init_thread_header(&DAT_146af3718), DAT_146af3718 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumNetActors",1);
    DAT_146af3710 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3718);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3710 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3710 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3710 + 0x30));
  }
  if ((*piVar5 < DAT_146af3728) && (_Init_thread_header(&DAT_146af3728), DAT_146af3728 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumDormantActors",1);
    DAT_146af3720 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3728);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3720 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3720 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3720 + 0x30));
  }
  if ((*piVar5 < DAT_146af3738) && (_Init_thread_header(&DAT_146af3738), DAT_146af3738 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumInitiallyDormantActors",1);
    DAT_146af3730 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3738);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3730 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3730 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3730 + 0x30));
  }
  if ((*piVar5 < DAT_146af3748) && (_Init_thread_header(&DAT_146af3748), DAT_146af3748 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumNetGUIDsAckd",1);
    DAT_146af3740 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3748);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3740 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3740 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3740 + 0x30));
  }
  if ((*piVar5 < DAT_146af3758) && (_Init_thread_header(&DAT_146af3758), DAT_146af3758 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumNetGUIDsPending",1);
    DAT_146af3750 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3758);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3750 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3750 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3750 + 0x30));
  }
  if ((*piVar5 < DAT_146af3768) && (_Init_thread_header(&DAT_146af3768), DAT_146af3768 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumNetGUIDsUnAckd",1);
    DAT_146af3760 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3768);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3760 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3760 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3760 + 0x30));
  }
  if ((*piVar5 < DAT_146af3778) && (_Init_thread_header(&DAT_146af3778), DAT_146af3778 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ObjPathBytes",1);
    DAT_146af3770 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3778);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3770 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3770 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3770 + 0x30));
  }
  if ((*piVar5 < DAT_146af3788) && (_Init_thread_header(&DAT_146af3788), DAT_146af3788 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NetGUIDOutRate",1);
    DAT_146af3780 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3788);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3780 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3780 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3780 + 0x30));
  }
  if ((*piVar5 < DAT_146af3798) && (_Init_thread_header(&DAT_146af3798), DAT_146af3798 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NetGUIDInRate",1);
    DAT_146af3790 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af3798);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146af3790 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af3790 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af3790 + 0x30));
  }
  if ((*piVar5 < DAT_146af37a8) && (_Init_thread_header(&DAT_146af37a8), DAT_146af37a8 == -1)) {
    uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    AGeometryCollectionActor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NetSaturated",1);
    DAT_146af37a0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af37a8);
  }
  if (0 < *(int *)(DAT_146af37a0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146af37a0 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146af37a0 + 0x30));
  }
  return;
}



// FUNCTION 142433260 FUN_142433260 body=1688 status=ok
// SIG undefined FUN_142433260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142433260(longlong *param_1,longlong param_2,longlong param_3,byte param_4,byte *param_5,
                  uint *param_6,undefined4 param_7,longlong *param_8,undefined4 param_9)

{
  ulonglong *puVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  float fVar17;
  longlong *local_res8;
  longlong local_res10;
  longlong local_res18;
  byte local_res20;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined *local_2a8;
  longlong **pplStack_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [440];
  
  lVar8 = param_1[2];
  if (((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x1a0))) || (param_6 != (uint *)0x0)) {
    puVar15 = (undefined8 *)0x0;
    uVar14 = 0;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if ((lVar8 != 0) || (param_1[1] != 0)) {
      pplStack_2a0 = &local_res8;
      local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffffffffff00);
      local_2a8 = &DAT_14060d670;
      lVar8 = FUN_1415d8310(&local_2a8,&DAT_146216a38);
      puVar13 = (undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0xfU & 0xfffffffffffffff0);
      puVar1 = (ulonglong *)(lVar8 + 0x18);
      puVar9 = puVar13 + 5;
      if (*(undefined8 **)(lVar8 + 0x20) < puVar9) {
        FMemStackBase::AllocateNewChunk(puVar1,0x38);
        puVar13 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar9 = puVar13 + 5;
      }
      *puVar1 = (ulonglong)puVar9;
      puVar9 = puVar15;
      if (puVar13 != (undefined8 *)0x0) {
        puVar13[1] = 0;
        *puVar13 = &PTR_FUN_14509d9b0;
        puVar13[2] = 0;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar9 = puVar13;
      }
      iVar7 = (int)param_8[0x1a];
      *(int *)(param_8 + 0x1a) = iVar7 + 1;
      if (*(int *)((longlong)param_8 + 0xd4) < iVar7 + 1) {
        FUN_140822430(param_8 + 0x19,iVar7);
      }
      *(undefined8 **)(param_8[0x19] + (longlong)iVar7 * 8) = puVar9;
      *param_1 = (longlong)puVar9;
      puVar9[1] = param_1[2];
      *(longlong *)(*param_1 + 0x10) = param_1[1];
      lVar8 = *param_1;
      lVar2 = *(longlong *)(lVar8 + 8);
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + 8) + 0x28))(lVar2 + 8);
        lVar8 = *param_1;
      }
      lVar8 = *(longlong *)(lVar8 + 0x10);
      if ((lVar8 != 0) && (*(int *)(param_1[1] + 0x50) != 0)) {
        (**(code **)(*(longlong *)(lVar8 + 8) + 0x28))(lVar8 + 8);
      }
      lVar8 = operator_new(0x780);
      puVar9 = puVar15;
      if (lVar8 != 0) {
        puVar9 = (undefined8 *)FUN_142429b30(lVar8,(int)param_1[3],param_1[2]);
      }
      *(undefined8 **)(*param_1 + 0x18) = puVar9;
      (**(code **)(*(longlong *)(*(longlong *)(*param_1 + 0x18) + 8) + 0x28))
                (*(longlong *)(*param_1 + 0x18) + 8);
      puVar13 = (undefined8 *)operator_new(0x50);
      puVar9 = puVar15;
      if (puVar13 != (undefined8 *)0x0) {
        puVar13[2] = 0;
        puVar13[5] = 0;
        puVar13[6] = 0;
        puVar13[7] = 0;
        *(undefined4 *)(puVar13 + 2) = 4;
        puVar13[3] = 0;
        puVar13[4] = 0;
        *(undefined1 *)(puVar13 + 6) = 0;
        *(undefined4 *)(puVar13 + 7) = 2;
        puVar13[8] = 0;
        puVar13[9] = 0;
        *puVar13 = &PTR_LAB_14509dc48;
        puVar13[1] = &PTR_LAB_14509dd48;
        puVar9 = puVar13;
      }
      local_218 = 0;
      local_210 = 0x3f800000;
      *(undefined8 **)(*param_1 + 0x20) = puVar9;
      local_2b0 = *(undefined4 *)(param_2 + 0x38);
      local_2b8 = *(undefined8 *)(param_2 + 0x30);
      local_268 = _DAT_1464aa7d0;
      uStack_260 = _DAT_1464aa7d8;
      local_258 = _DAT_1464aa7e0;
      uStack_250 = _DAT_1464aa7e8;
      local_248 = _DAT_1464aa7f0;
      uStack_240 = _DAT_1464aa7f8;
      local_238 = _DAT_1464aa800;
      uStack_230 = uRam00000001464aa808;
      local_228 = 0x3f80000000000000;
      uStack_220 = 0x3f8000003f800000;
      local_208 = 0;
      uStack_200 = 0;
      local_2a8 = (undefined *)0x0;
      pplStack_2a0 = (longlong **)0x0;
      local_298 = 0;
      local_290 = 0;
      local_288 = 0;
      uStack_280 = 0;
      local_278 = 0;
      local_270 = 0;
      FUN_1408c7250(local_1f8,param_2,&local_2b8,&local_288,&local_2a8,param_5[3],0,0,0,0,0,0,1,
                    0x3f800000,&local_268);
      cVar5 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_142428800();
      }
      else {
        FUN_142439a50(*(longlong *)(*param_1 + 0x20) + 8,local_1f8);
      }
      (**(code **)(*(longlong *)(*(longlong *)(*param_1 + 0x20) + 8) + 0x28))
                (*(longlong *)(*param_1 + 0x20) + 8);
      param_1[2] = 0;
      param_1[1] = 0;
    }
    lVar8 = *(longlong *)(*param_1 + 0x10);
    if ((lVar8 == 0) || (*(int *)(lVar8 + 0x50) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    lVar8 = *(longlong *)(*param_1 + 8);
    if ((lVar8 == 0) || (*(int *)(lVar8 + 0x1a0) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    iVar7 = FUN_1408bed80(param_8,1);
    local_res8 = (longlong *)
                 (*(longlong *)(*param_8 + (longlong)(iVar7 / 0x59) * 8) +
                 (ulonglong)(uint)(iVar7 % 0x59) * 0xb8);
    plVar16 = (longlong *)local_res8[0xf];
    if ((longlong *)local_res8[0xf] == (longlong *)0x0) {
      plVar16 = local_res8;
    }
    puVar9 = puVar15;
    if (bVar3) {
      puVar9 = *(undefined8 **)(*param_1 + 0x10);
    }
    puVar13 = puVar9 + 1;
    if (puVar9 == (undefined8 *)0x0) {
      puVar13 = puVar15;
    }
    plVar16[2] = (longlong)puVar13;
    puVar9 = (undefined8 *)(*(longlong *)(*param_1 + 0x18) + 8);
    if (*(longlong *)(*param_1 + 0x18) == 0) {
      puVar9 = puVar15;
    }
    local_res8[0x14] = (longlong)puVar9;
    local_res8[0x15] = local_res18;
    puVar9 = (undefined8 *)(*(longlong *)(*param_1 + 0x20) + 8);
    if (*(longlong *)(*param_1 + 0x20) == 0) {
      puVar9 = puVar15;
    }
    *plVar16 = (longlong)puVar9;
    *(uint *)((longlong)local_res8 + 0x8c) =
         *(uint *)((longlong)local_res8 + 0x8c) ^
         ((uint)*param_5 << 5 ^ *(uint *)((longlong)local_res8 + 0x8c)) & 0x20;
    uVar10 = ((uint)param_5[2] << 8 ^ *(uint *)((longlong)local_res8 + 0x8c)) & 0x100 ^
             *(uint *)((longlong)local_res8 + 0x8c);
    *(uint *)((longlong)local_res8 + 0x8c) = uVar10;
    uVar10 = ((uint)param_5[5] << 0x15 ^ uVar10) & 0x200000 ^ uVar10;
    *(uint *)((longlong)local_res8 + 0x8c) = uVar10;
    uVar10 = ((uint)param_5[6] << 0x16 ^ uVar10) & 0x400000 ^ uVar10;
    *(uint *)((longlong)local_res8 + 0x8c) = uVar10;
    fVar17 = (float)FMatrix::Determinant(local_res10);
    uVar11 = uVar14;
    if (fVar17 < 0.0) {
      uVar11 = 8;
    }
    *(uint *)((longlong)local_res8 + 0x8c) = uVar11 | uVar10 & 0xfffffff7;
    uVar11 = ((local_res20 & 7) << 0xe | param_5[1] & 1) << 4 | uVar11 | uVar10 & 0xffe00fe7;
    *(uint *)((longlong)local_res8 + 0x8c) = uVar11;
    *(uint *)((longlong)local_res8 + 0x8c) = ((uint)param_5[4] << 0x17 ^ uVar11) & 0x800000 ^ uVar11
    ;
    *(undefined4 *)(local_res8 + 0x16) = param_9;
    if (param_6 == (uint *)0x0) {
      puVar9 = (undefined8 *)0x0;
      if (bVar3) {
        iVar7 = *(int *)(*(longlong *)(*param_1 + 0x10) + 0x50);
        uVar11 = iVar7 / 3 + (iVar7 >> 0x1f) +
                 (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f);
        puVar9 = puVar15;
      }
      else if (bVar4) {
        iVar7 = *(int *)(*(longlong *)(*param_1 + 8) + 0x1a0);
        uVar11 = iVar7 / 3 + (iVar7 >> 0x1f) +
                 (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f);
      }
      else {
        uVar11 = 0;
      }
    }
    else {
      uVar11 = param_6[3];
      puVar9 = (undefined8 *)(ulonglong)*param_6;
    }
    iVar7 = (int)plVar16[7];
    local_2b8 = CONCAT44(uVar11,(int)puVar9);
    *(int *)(plVar16 + 7) = iVar7 + 1;
    if (*(int *)((longlong)plVar16 + 0x3c) < iVar7 + 1) {
      TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
      ::ResizeGrow(plVar16 + 5,iVar7);
    }
    plVar12 = (longlong *)plVar16[6];
    if ((longlong *)plVar16[6] == (longlong *)0x0) {
      plVar12 = plVar16 + 5;
    }
    plVar12[iVar7] = local_2b8;
    uVar11 = uVar14;
    if (param_6 != (uint *)0x0) {
      uVar11 = param_6[1];
    }
    *(uint *)(plVar16 + 9) = uVar11;
    if (param_6 == (uint *)0x0) {
      if (bVar4) {
        uVar14 = *(int *)(*(longlong *)(*param_1 + 8) + 0x1a0) - 1;
      }
    }
    else {
      uVar14 = param_6[2];
    }
    *(uint *)((longlong)plVar16 + 0x4c) = uVar14;
    FUN_142747330(param_8,param_7,local_res8);
  }
  return;
}



// FUNCTION 142433900 GetMesh body=157 status=ok
// SIG undefined GetMesh(void)

void FDynamicMeshBuilder::GetMesh(undefined8 param_1)

{
  FUN_142433260(param_1);
  return;
}



// FUNCTION 1424339a0 GetMesh body=111 status=ok
// SIG undefined GetMesh(void)

void FDynamicMeshBuilder::GetMesh(void)

{
  FUN_142433260();
  return;
}



// FUNCTION 142433a10 FUN_142433a10 body=237 status=ok
// SIG undefined FUN_142433a10(void)

undefined1 FUN_142433a10(void)

{
  void *_Src;
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  DWORD DVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  void *_Src_00;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  lVar1 = DAT_146af3480;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != DAT_1468c21c0) {
      lVar5 = 0x10;
      goto LAB_142433a55;
    }
  }
  lVar5 = 0;
LAB_142433a55:
  local_10 = *(int *)(lVar5 + 8 + lVar1);
  lVar7 = (longlong)local_10;
  _Src = *(void **)(lVar5 + lVar1);
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    _Src_00 = (void *)0x0;
    iVar6 = local_10;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    _Src_00 = local_18;
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar7 * 2);
    iVar6 = local_10;
  }
  local_18 = (void *)0x0;
  local_10 = iVar6;
  if (iVar6 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,iVar6,0);
    _guard_xfg_dispatch_icall_nop(local_18,_Src_00,(longlong)iVar6 * 2);
  }
  uVar3 = FUN_14243b040(&local_18);
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return uVar3;
}



// FUNCTION 142433b20 GetRendererModule body=78 status=ok
// SIG undefined GetRendererModule(void)

void GetRendererModule(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res8 [32];
  
  if (DAT_146af29e0 == 0) {
    puVar2 = (undefined8 *)FName::FName(local_res8,L"Renderer",1);
    uVar1 = *puVar2;
    uVar3 = FUN_14168dc80();
    DAT_146af29e0 = FUN_141690010(uVar3,uVar1);
  }
  return;
}



// FUNCTION 142433b70 FUN_142433b70 body=36 status=ok
// SIG undefined FUN_142433b70(void)

float FUN_142433b70(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  fVar2 = (float)FUN_142433bb0(lVar1);
  fVar3 = *(float *)(lVar1 + 0x20);
  if (fVar2 <= fVar3) {
    fVar3 = fVar2;
  }
  return fVar3;
}



// FUNCTION 142433bb0 FUN_142433bb0 body=101 status=ok
// SIG undefined FUN_142433bb0(void)

float FUN_142433bb0(void)

{
  float *pfVar1;
  char cVar2;
  DWORD DVar3;
  
  pfVar1 = DAT_146af32b8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return pfVar1[1] * 0.01;
    }
  }
  return *pfVar1 * 0.01;
}



// FUNCTION 142433c20 GetStoreSectionString body=276 status=ok
// SIG undefined GetStoreSectionString(void)

undefined8
FEngineSessionManager::GetStoreSectionString(int *param_1,undefined8 param_2,longlong *param_3)

{
  undefined2 *puVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  if (*param_1 == 0) {
    if ((int)param_3[1] == 0) {
      puVar1 = &DAT_143f3eda8;
    }
    else {
      puVar1 = (undefined2 *)*param_3;
    }
    puVar3 = &DAT_143f3eda8;
    if (DAT_146532428 != 0) {
      puVar3 = DAT_146532420;
    }
    puVar5 = &DAT_143f3eda8;
    if (DAT_1465323f8 != 0) {
      puVar5 = DAT_1465323f0;
    }
    FString::PrintfImpl(param_2,L"%s%s/%s",puVar5,puVar3,puVar1);
  }
  else {
    plVar2 = (longlong *)UGeneralProjectSettings::GetPrivateStaticClass();
    lVar4 = plVar2[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar4 = plVar2[0x1f];
    }
    if ((int)param_3[1] == 0) {
      puVar1 = &DAT_143f3eda8;
    }
    else {
      puVar1 = (undefined2 *)*param_3;
    }
    if (*(int *)(lVar4 + 0xb0) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = *(undefined2 **)(lVar4 + 0xa8);
    }
    puVar5 = &DAT_143f3eda8;
    if (DAT_146532428 != 0) {
      puVar5 = DAT_146532420;
    }
    puVar6 = &DAT_143f3eda8;
    if (DAT_146532408 != 0) {
      puVar6 = DAT_146532400;
    }
    FString::PrintfImpl(param_2,L"%s%s/%s/%s",puVar6,puVar5,puVar3,puVar1);
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142433d40 FUN_142433d40 body=1525 status=ok
// SIG undefined FUN_142433d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_142433d40(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_2d8 [32];
  undefined4 *local_2b8;
  ulonglong local_2b0;
  undefined4 local_2a8;
  undefined1 local_298 [8];
  ulonglong local_290;
  longlong local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined1 local_25c;
  undefined1 local_258 [8];
  float local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  float local_228;
  longlong *local_220;
  int local_218;
  undefined4 local_210;
  undefined8 local_20c;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_180 [24];
  undefined1 local_168 [12];
  undefined4 local_15c;
  undefined1 local_fc [8];
  undefined1 local_f4 [28];
  undefined1 local_d8 [72];
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  uVar13 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_290 = local_290 & 0xffffffff00000000;
  local_288 = param_2;
  local_1b0 = FUN_142876210(DAT_146b17150);
  if (*(int *)((longlong)param_1 + 0xc) < *(int *)(param_2 + 0x90) + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1);
  }
  uStack_1e0 = 0;
  local_1d8 = 0;
  lVar6 = UObjectBaseUtility::GetOutermost(param_2);
  iVar5 = (int)param_1[1];
  uStack_1e0._0_4_ = 5;
  uStack_1e0._4_4_ = 0xffffffff;
  local_1e8 = *(undefined8 *)(lVar6 + 0x18);
  *(int *)(param_1 + 1) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar5);
  }
  lVar6 = *param_1;
  puVar1 = (undefined4 *)(lVar6 + (longlong)iVar5 * 0x18);
  *puVar1 = (undefined4)local_1e8;
  puVar1[1] = local_1e8._4_4_;
  puVar1[2] = (undefined4)uStack_1e0;
  puVar1[3] = uStack_1e0._4_4_;
  *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar5 * 0x18) = local_1d8;
  plVar11 = *(longlong **)(param_2 + 0x88);
  local_1b8 = plVar11 + *(int *)(param_2 + 0x90);
  uVar15 = uVar13;
  if (plVar11 != local_1b8) {
    do {
      lVar6 = *plVar11;
      if (lVar6 == 0) {
LAB_142433eb5:
        bVar2 = false;
      }
      else {
        local_290 = 0;
        if (*(longlong *)(lVar6 + 0x38) == 0) goto LAB_142433eb5;
        local_1f8 = 0;
        local_1f0 = 0;
        local_210 = 0xffffffff;
        local_20c = 0;
        local_268 = 0;
        local_200 = 0;
        uVar7 = FSoftObjectPath::FSoftObjectPath(local_180,param_2);
        FSoftObjectPath::operator=(&local_200,uVar7);
        FWeakObjectPtr::operator=(&local_210,param_2);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_20c = CONCAT44(DAT_1464b56f4,(undefined4)local_20c);
        uVar15 = 1;
        cVar4 = FSoftObjectPath::operator==((longlong *)(lVar6 + 0x38),&local_200);
        if (cVar4 != '\0') goto LAB_142433eb5;
        bVar2 = true;
      }
      if ((uVar15 != 0) && (uVar15 = 0, local_1f8 != 0)) {
        FMemory::Free();
      }
      if (bVar2) {
        uStack_278 = 0;
        local_270 = 0;
        puVar8 = (undefined8 *)ULevelStreaming::GetWorldAssetPackageFName(lVar6,local_258);
        param_2 = local_288;
        lVar10 = *(longlong *)(lVar6 + 0x120);
        uVar7 = *puVar8;
        local_280 = uVar7;
        uStack_278._4_4_ = *(undefined4 *)(lVar6 + 0xb0);
        if (lVar10 == 0) {
          uVar9 = UPackage::GetPrivateStaticClass();
          local_2a8 = 0;
          local_2b0 = local_2b0 & 0xffffffff00000000;
          local_2b8 = (undefined4 *)((ulonglong)local_2b8 & 0xffffffffffffff00);
          lVar10 = FUN_141799680(uVar9,0,uVar7,0);
          if ((lVar10 == 0) || (lVar10 = UWorld::FindWorldInPackage(lVar10), lVar10 == 0)) {
            param_2 = local_288;
            iVar5 = 0;
            if (*(char *)(lVar6 + 0xb4) == '\x03') {
              iVar5 = 2;
            }
            goto LAB_142433f97;
          }
          uStack_278 = CONCAT44(uStack_278._4_4_,1);
          param_2 = local_288;
        }
        else {
          cVar4 = UWorld::ContainsLevel(local_288,lVar10);
          if (cVar4 == '\x01') {
            iVar5 = (*(longlong *)(param_2 + 0xf8) != lVar10) + 4;
LAB_142433f97:
            uStack_278 = CONCAT44(uStack_278._4_4_,iVar5);
          }
          else {
            uStack_278 = CONCAT44(uStack_278._4_4_,3);
          }
        }
        iVar5 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1,iVar5);
        }
        lVar6 = *param_1;
        puVar1 = (undefined4 *)(lVar6 + (longlong)iVar5 * 0x18);
        *puVar1 = (undefined4)local_280;
        puVar1[1] = local_280._4_4_;
        puVar1[2] = (undefined4)uStack_278;
        puVar1[3] = uStack_278._4_4_;
        *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar5 * 0x18) = local_270;
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != local_1b8);
  }
  lVar6 = local_1b0;
  uVar15 = uVar13;
  if (0 < *(int *)(local_1b0 + 0x1e8)) {
    do {
      iVar5 = (int)param_1[1];
      local_1c0 = 0;
      local_1d0 = *(undefined8 *)(uVar15 + *(longlong *)(lVar6 + 0x1e0));
      uStack_1c8 = 0xffffffff00000006;
      *(int *)(param_1 + 1) = iVar5 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1,iVar5);
      }
      lVar10 = *param_1;
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      puVar1 = (undefined4 *)(lVar10 + (longlong)iVar5 * 0x18);
      *puVar1 = (undefined4)local_1d0;
      puVar1[1] = local_1d0._4_4_;
      puVar1[2] = (undefined4)uStack_1c8;
      puVar1[3] = uStack_1c8._4_4_;
      *(undefined8 *)(lVar10 + 0x10 + (longlong)iVar5 * 0x18) = local_1c0;
      uVar15 = uVar15 + 8;
    } while ((int)uVar12 < *(int *)(lVar6 + 0x1e8));
  }
  UWorld::GetPlayerControllerIterator(param_2);
  pvVar3 = ThreadLocalStoragePointer;
  uVar13 = (ulonglong)_tls_index;
  do {
    while( true ) {
      if ((local_218 < 0) || ((int)local_220[1] <= local_218)) {
        return param_1;
      }
      plVar11 = (longlong *)FWeakObjectPtr::Get(*local_220 + (longlong)local_218 * 8);
      if ((plVar11 != (longlong *)0x0) && (lVar6 = plVar11[0x91], lVar6 != 0)) break;
LAB_1424342b0:
      local_218 = local_218 + 1;
    }
    _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
    local_15c = 0x3f800000;
    if ((*(int *)(*(longlong *)((longlong)pvVar3 + uVar13 * 8) + 0x38) < DAT_146af37d0) &&
       (_Init_thread_header(&DAT_146af37d0), DAT_146af37d0 == -1)) {
      FName::FName(&DAT_146af37c8,"FindLevel",1);
      _Init_thread_footer(&DAT_146af37d0);
    }
    lVar10 = *(longlong *)(lVar6 + 0x168);
    local_260 = 1;
    local_25c = 0;
    if (lVar10 == 0) {
      local_1a8 = _DAT_1468b5d90;
      puVar8 = &local_1a8;
      local_1a0 = DAT_1468b5d98;
    }
    else {
      puVar8 = (undefined8 *)&local_248;
      local_248 = *(undefined4 *)(lVar10 + 0x220);
      local_240 = *(undefined4 *)(lVar10 + 0x228);
      uStack_244 = *(undefined4 *)(lVar10 + 0x224);
    }
    local_250 = *(float *)(puVar8 + 1);
    local_22c = (int)((ulonglong)*puVar8 >> 0x20);
    local_230 = (int)*puVar8;
    local_228 = local_250 - 256.0;
    if (lVar10 == 0) {
      local_19c = _DAT_1468b5d90;
      puVar8 = &local_19c;
      local_194 = DAT_1468b5d98;
    }
    else {
      puVar8 = (undefined8 *)&local_23c;
      local_23c = *(undefined4 *)(lVar10 + 0x220);
      local_234 = *(undefined4 *)(lVar10 + 0x228);
      uStack_238 = *(undefined4 *)(lVar10 + 0x224);
    }
    local_190 = *puVar8;
    local_188 = *(undefined4 *)(puVar8 + 1);
    local_2b8 = (undefined4 *)lVar6;
    uVar15 = FUN_1422ffb20(local_d8,DAT_146af37c8,local_298,1);
    uVar7 = (**(code **)(*plVar11 + 0x148))(plVar11);
    local_2b8 = &local_260;
    local_2b0 = uVar15;
    UWorld::LineTraceSingleByObjectType(uVar7,local_168,&local_190,&local_230);
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (local_90 != 0) {
      FMemory::Free();
    }
    lVar6 = FWeakObjectPtr::Get(local_fc);
    if (lVar6 == 0) {
      lVar6 = FWeakObjectPtr::Get(local_f4);
      if (lVar6 == 0) goto LAB_1424342b0;
      lVar6 = FUN_14233ccd0(lVar6);
    }
    else {
      lVar6 = AActor::GetLevel(lVar6);
    }
    if (lVar6 == 0) goto LAB_1424342b0;
    lVar6 = UObjectBaseUtility::GetOutermost(lVar6);
    plVar14 = (longlong *)*param_1;
    plVar11 = plVar14 + (longlong)(int)param_1[1] * 3;
    if (plVar14 == plVar11) goto LAB_1424342b0;
    do {
      if (*plVar14 == *(longlong *)(lVar6 + 0x18)) {
        *(undefined1 *)((longlong)plVar14 + 0x11) = 1;
        goto LAB_1424342b0;
      }
      plVar14 = plVar14 + 3;
    } while (plVar14 != plVar11);
    local_218 = local_218 + 1;
  } while( true );
}



// FUNCTION 142434340 FUN_142434340 body=255 status=ok
// SIG undefined FUN_142434340(void)

undefined8 FUN_142434340(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  double dVar4;
  uint uVar5;
  longlong lVar6;
  uint7 uVar7;
  int local_res8;
  undefined4 uStackX_c;
  
  FDateTime::Now(&local_res8);
  iVar1 = *param_2;
  iVar2 = param_2[1];
  dVar4 = ((double)(CONCAT44(uStackX_c,local_res8) % 864000000000) * 1e-07 * (double)iVar1) /
          (double)iVar2;
  lVar6 = (longlong)dVar4;
  if ((lVar6 != -0x8000000000000000) && ((double)lVar6 != dVar4)) {
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = dVar4;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    uVar5 = movmskpd(0,auVar3);
    dVar4 = (double)(longlong)(lVar6 - (ulonglong)(uVar5 & 1));
  }
  local_res8 = (int)dVar4;
  uVar7 = (uint7)(uint3)((uint)iVar1 >> 8);
  if ((((iVar1 == 24000) && (iVar2 == 0x3e9)) || ((iVar1 == 30000 && (iVar2 == 0x3e9)))) ||
     ((iVar1 == 60000 && (iVar2 == 0x3e9)))) {
    lVar6 = CONCAT71(uVar7,1);
  }
  else {
    lVar6 = (ulonglong)uVar7 << 8;
  }
  FTimecode::FromFrameNumber(param_1,&local_res8,param_2,lVar6);
  return param_1;
}



// FUNCTION 142434440 FUN_142434440 body=670 status=ok
// SIG undefined FUN_142434440(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142434440(longlong *param_1,undefined1 param_2)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  longlong local_res18;
  longlong local_res20;
  longlong local_98;
  longlong local_90 [11];
  
  bVar10 = false;
  uVar7 = 0;
  bVar2 = false;
  uVar9 = uVar7;
  if (0 < (int)param_1[7]) {
    do {
      cVar3 = false;
      if ((int)uVar7 != (int)param_1[8]) {
        plVar5 = (longlong *)(param_1[6] + uVar9);
        local_90[0] = 0;
        local_res20 = 0;
        local_res18 = 0;
        local_98 = 0;
        if (*plVar5 != 0) {
          cVar3 = (**(code **)(*DAT_146ab6358 + 0x340))(DAT_146ab6358,*plVar5,local_90,param_2);
          cVar3 = cVar3 != '\0';
        }
        if (plVar5[1] != 0) {
          cVar4 = (**(code **)(*DAT_146ab6358 + 0x340))
                            (DAT_146ab6358,plVar5[1],&local_res20,param_2);
          cVar3 = cVar3 + (cVar4 != '\0');
        }
        if (plVar5[2] != 0) {
          cVar4 = (**(code **)(*DAT_146ab6358 + 0x340))
                            (DAT_146ab6358,plVar5[2],&local_res18,param_2);
          cVar3 = cVar3 + (cVar4 != '\0');
        }
        if (plVar5[3] != 0) {
          cVar4 = (**(code **)(*DAT_146ab6358 + 0x340))(DAT_146ab6358,plVar5[3],&local_98,param_2);
          cVar3 = cVar3 + (cVar4 != '\0');
        }
        bVar10 = bVar2;
        if (cVar3 == '\x04') {
          bVar10 = DAT_146ab62e1 == '\0';
          fVar11 = (float)(local_res18 - local_res20);
          if (local_res18 - local_res20 < 0) {
            fVar11 = fVar11 + 1.8446744e+19;
          }
          uVar1 = plVar5[4];
          if ((uVar1 != 0xffffffffffffffff) &&
             ((ulonglong)(param_1[5] - (longlong)*(int *)((longlong)param_1 + 0x14)) < uVar1)) {
            lVar6 = (longlong)
                    ((((int)param_1[2] - (int)param_1[5]) + (int)param_1[1] + (int)uVar1) %
                    (int)param_1[1]);
            fVar12 = (float)(local_98 - local_90[0]);
            if (local_98 - local_90[0] < 0) {
              fVar12 = fVar12 + 1.8446744e+19;
            }
            *(float *)(*param_1 + 0xc + lVar6 * 0x18) = fVar12 * 0.001;
            *(float *)(*param_1 + 0x10 + lVar6 * 0x18) = fVar11 * 0.001;
            *(bool *)(*param_1 + 0x14 + lVar6 * 0x18) = bVar10;
          }
          local_90[5] = -1;
          local_90[1] = 0;
          local_90[2] = 0;
          local_90[3] = 0;
          local_90[4] = 0;
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar5,local_90 + 1);
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar5 + 1,local_90 + 2);
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar5 + 2,local_90 + 3);
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar5 + 3,local_90 + 4);
          plVar5[4] = local_90[5];
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_90 + 4);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_90 + 3);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_90 + 2);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_90 + 1);
          bVar2 = true;
          bVar10 = bVar2;
        }
      }
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
      uVar9 = uVar9 + 0x28;
    } while ((int)uVar8 < (int)param_1[7]);
    if (bVar10) {
      FUN_142436d30(param_1);
    }
  }
  return;
}



// FUNCTION 1424346e0 FUN_1424346e0 body=292 status=ok
// SIG undefined FUN_1424346e0(void)

void FUN_1424346e0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  int iVar8;
  
  cVar1 = TArray<FString,FDefaultAllocator>::Contains<FString>();
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    FUN_142438dd0(param_1,L"You are not authorized to grant or deny remote access to other users.",
                  uVar3);
    return;
  }
  iVar8 = 0;
  if (0 < (int)param_1[1]) {
    lVar7 = 0;
    do {
      if (*(int *)(param_2 + 0x18) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = *(undefined2 **)(param_2 + 0x10);
      }
      if (*(int *)(lVar7 + 8 + *param_1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = *(undefined2 **)(lVar7 + *param_1);
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
      if (iVar2 == 0) {
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x10) != 0) {
          FMemory::Free();
        }
        iVar2 = (int)param_1[1];
        iVar4 = (iVar2 - iVar8) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_1 + (longlong)iVar8 * 0x10),
                     (void *)((longlong)(iVar2 - iVar4) * 0x10 + *param_1),(longlong)iVar4 << 4);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
        iVar8 = iVar8 + -1;
        lVar7 = lVar7 + -0x10;
      }
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar8 < (int)param_1[1]);
    return;
  }
  return;
}



// FUNCTION 142434810 HandleAuthGrantMessage body=152 status=ok
// SIG undefined HandleAuthGrantMessage(void)

void FEngineService::HandleAuthGrantMessage(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = TArray<FString,FDefaultAllocator>::Contains<FString>();
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    FUN_142438dd0(param_1,L"You are not authorized to grant or deny remote access to other users.",
                  uVar3);
  }
  else {
    iVar2 = TArray<FString,FDefaultAllocator>::Find(param_1,param_2 + 0x10);
    if (iVar2 == -1) {
      iVar2 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
      }
      FString::FString((longlong)iVar2 * 0x10 + *param_1,param_2 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 1424348b0 FUN_1424348b0 body=206 status=ok
// SIG undefined FUN_1424348b0(void)

void FUN_1424348b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  cVar3 = TArray<FString,FDefaultAllocator>::Contains<FString>(param_1,param_2 + 0x10);
  lVar2 = DAT_146b17150;
  if (cVar3 != '\0') {
    if (DAT_146b17150 == 0) {
      uVar4 = (**(code **)(*(longlong *)*param_3 + 0x40))();
      FUN_142438dd0(param_1,
                    L"The command could not be executed because the Engine has not started up yet.",
                    uVar4);
    }
    else {
      iVar1 = *(int *)(DAT_146b17150 + 0x7c0);
      *(int *)(DAT_146b17150 + 0x7c0) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x7c4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x7b8,iVar1);
      }
      FString::FString((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x7b8),param_2);
    }
    return;
  }
  uVar4 = (**(code **)(*(longlong *)*param_3 + 0x40))();
  FUN_142438dd0(param_1,L"You are not authorized to execute console commands.",uVar4);
  return;
}



// FUNCTION 142434980 FUN_142434980 body=161 status=ok
// SIG undefined FUN_142434980(void)

void FUN_142434980(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_1421cffe0();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_1424349f1;
    }
  }
  lVar4 = 0;
LAB_1424349f1:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 142434a30 FUN_142434a30 body=161 status=ok
// SIG undefined FUN_142434a30(void)

void FUN_142434a30(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_1421d0060();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_142434aa1;
    }
  }
  lVar4 = 0;
LAB_142434aa1:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 142434ae0 FUN_142434ae0 body=161 status=ok
// SIG undefined FUN_142434ae0(void)

void FUN_142434ae0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_1421d00e0();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_142434b51;
    }
  }
  lVar4 = 0;
LAB_142434b51:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 142434b90 HandleMessage body=161 status=ok
// SIG undefined HandleMessage(void)

void TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource>::HandleMessage
               (longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FLiveLinkHeartbeatMessage::StaticStruct();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_142434c01;
    }
  }
  lVar4 = 0;
LAB_142434c01:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 142434c40 FUN_142434c40 body=161 status=ok
// SIG undefined FUN_142434c40(void)

void FUN_142434c40(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_1421d02e0();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_142434cb1;
    }
  }
  lVar4 = 0;
LAB_142434cb1:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 142434d00 HandleTerminateMessage body=206 status=ok
// SIG undefined HandleTerminateMessage(void)

void FEngineService::HandleTerminateMessage
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  
  cVar2 = TArray<FString,FDefaultAllocator>::Contains<FString>();
  if (cVar2 == '\0') {
    uVar3 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    pwVar4 = L"You are not authorized to terminate this instance.";
  }
  else {
    if (DAT_146b17150 != 0) {
      cVar2 = FOutputDevice::CanBeUsedOnAnyThread();
      lVar1 = *(longlong *)(DAT_146b17150 + 0x28);
      if (cVar2 != '\0') {
        uVar3 = FUN_141672640();
                    /* WARNING: Could not recover jumptable at 0x000142434d67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 8))(DAT_146b17150 + 0x28,0,L"QUIT_EDITOR",uVar3);
        return;
      }
      uVar3 = FUN_141672640();
                    /* WARNING: Could not recover jumptable at 0x000142434d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 8))(DAT_146b17150 + 0x28,0,L"QUIT",uVar3);
      return;
    }
    uVar3 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    pwVar4 = L"Termination failed because the Engine has not started up yet or is unavailable.";
  }
  FUN_142438dd0(param_1,pwVar4,uVar3);
  return;
}



// FUNCTION 142434de0 FUN_142434de0 body=294 status=ok
// SIG undefined FUN_142434de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142434de0(longlong param_1)

{
  void *_Dst;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = 1;
  local_34 = 0;
  local_78 = &local_58;
  local_80 = 1;
  local_58 = 0;
  uStack_50 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = *(int *)(param_1 + 0x48) * 2;
  (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_68,&DAT_146ab6e78,2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  local_88 = *(int *)(param_1 + 0x48) * 2;
  local_80 = 1;
  _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x4f8))
                           (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30),0);
  _guard_xfg_dispatch_icall_nop
            (_Dst,*(void **)(param_1 + 0x40),(longlong)*(int *)(param_1 + 0x48) * 2);
  (**(code **)(*DAT_146ab6358 + 0x500))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 142434f10 FUN_142434f10 body=301 status=ok
// SIG undefined FUN_142434f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142434f10(longlong param_1)

{
  void *_Dst;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = 1;
  local_34 = 0;
  local_78 = &local_58;
  local_80 = 1;
  local_58 = 0;
  uStack_50 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = *(int *)(param_1 + 0x48) << 2;
  (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_68,&DAT_146ab6e78,4);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  local_80 = 1;
  local_88 = *(int *)(param_1 + 0x48) * 4;
  _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x4f8))
                           (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30),0);
  _guard_xfg_dispatch_icall_nop
            (_Dst,*(void **)(param_1 + 0x40),(longlong)*(int *)(param_1 + 0x48) << 2);
  (**(code **)(*DAT_146ab6358 + 0x500))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 142435040 FUN_142435040 body=363 status=ok
// SIG undefined FUN_142435040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142435040(longlong param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  uint uVar2;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar2 = *(int *)(param_1 + 0x48) << 2;
  if (DAT_14653217c < uVar2) {
    local_78 = &local_58;
    local_48 = 1;
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_34 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_80 = 4;
    local_88 = uVar2;
    (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_68,&DAT_146ab6e78,4);
  }
  else {
    IsInRenderingThread();
    if (DAT_146af2e38 == '\0') {
      local_68[0] = 0;
    }
    else {
      FUN_14242eb30(&DAT_146af29f0,local_68,uVar2);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x30);
  TRefCountPtr<FRHIIndexBuffer>::operator=(puVar1,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  local_80 = 1;
  local_88 = *(int *)(param_1 + 0x48) * 4;
  _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x4f8))(DAT_146ab6358,&DAT_146ab6e78,*puVar1,0);
  _guard_xfg_dispatch_icall_nop
            (_Dst,*(void **)(param_1 + 0x40),(longlong)*(int *)(param_1 + 0x48) << 2);
  (**(code **)(*DAT_146ab6358 + 0x500))(DAT_146ab6358,&DAT_146ab6e78,*puVar1);
  return;
}



// FUNCTION 1424351b0 FUN_1424351b0 body=3103 status=ok
// SIG undefined FUN_1424351b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424351b0(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 **ppuVar13;
  undefined1 *puVar14;
  ushort uVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  ushort uVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  int iVar27;
  undefined8 *puVar28;
  bool bVar29;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined4 local_b0;
  char local_a8;
  uint local_a4;
  undefined8 *local_a0;
  undefined8 *local_98;
  longlong local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar2 = *(char *)(param_1 + 0x1ac);
  uVar5 = 4;
  if (cVar2 == '\0') {
    uVar5 = 8;
  }
  local_a8 = cVar2;
  local_a4 = uVar5;
  uVar7 = FUN_14242c4c0(local_68,0xc,*(undefined4 *)(param_1 + 0x198));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x60,uVar7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  uVar7 = FUN_14242c4c0(local_60,4,*(int *)(param_1 + 0x198) * 2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x98,uVar7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_60);
  uVar7 = FUN_14242c4c0(&local_88,uVar5,*(int *)(param_1 + 0x1a0) * *(int *)(param_1 + 0x198));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xd0,uVar7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
  iVar20 = *(int *)(param_1 + 0x1a4);
  iVar24 = *(int *)(param_1 + 0x154);
  puVar17 = *(undefined8 **)(param_1 + 0x148);
  puVar25 = (undefined8 *)0x0;
  iVar27 = *(int *)(param_1 + 0x150);
  if (iVar24 < iVar20) {
    if (puVar17 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)(param_1 + 0xd8);
    }
    if (iVar27 != 0) {
      do {
        *puVar17 = &PTR_FUN_143f48ad0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar17 + 6);
        FUN_141edd2d0(puVar17);
        puVar17 = puVar17 + 7;
        iVar27 = iVar27 + -1;
      } while (iVar27 != 0);
      iVar24 = *(int *)(param_1 + 0x154);
    }
    *(undefined4 *)(param_1 + 0x150) = 0;
    if (iVar24 != iVar20) {
      FUN_142437e10(param_1 + 0xd8,iVar20);
    }
  }
  else {
    if (puVar17 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)(param_1 + 0xd8);
    }
    for (; iVar27 != 0; iVar27 = iVar27 + -1) {
      *puVar17 = &PTR_FUN_143f48ad0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar17 + 6);
      FUN_141edd2d0(puVar17);
      puVar17 = puVar17 + 7;
    }
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  iVar20 = *(int *)(param_1 + 0x1a4);
  if (iVar20 != 0) {
    iVar24 = *(int *)(param_1 + 0x150);
    *(int *)(param_1 + 0x150) = iVar24 + iVar20;
    if (*(int *)(param_1 + 0x154) < iVar24 + iVar20) {
      FUN_142437b20(param_1 + 0xd8,iVar24);
    }
    lVar21 = *(longlong *)(param_1 + 0x148);
    if (*(longlong *)(param_1 + 0x148) == 0) {
      lVar21 = param_1 + 0xd8;
    }
    puVar17 = (undefined8 *)(lVar21 + (longlong)iVar24 * 0x38);
    for (; iVar20 != 0; iVar20 = iVar20 + -1) {
      *(undefined4 *)(puVar17 + 1) = 4;
      puVar17[2] = 0;
      puVar17[3] = 0;
      *(undefined1 *)(puVar17 + 5) = 0;
      *puVar17 = &PTR_FUN_143f48ad0;
      puVar17[6] = 0;
      puVar17 = puVar17 + 7;
    }
    if (0 < *(int *)(param_1 + 0x150)) {
      puVar17 = puVar25;
      puVar26 = puVar25;
      do {
        lVar21 = *(longlong *)(param_1 + 0x148);
        plVar8 = (longlong *)FUN_14242c4c0(&local_80,4,*(undefined4 *)(param_1 + 0x198));
        if (lVar21 == 0) {
          lVar21 = param_1 + 0xd8;
        }
        plVar18 = (longlong *)((longlong)puVar26 + lVar21 + 0x30);
        if (plVar18 != plVar8) {
          puVar28 = (undefined8 *)*plVar18;
          *plVar18 = *plVar8;
          *plVar8 = 0;
          if (puVar28 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar28 + 1);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              if ((*(char *)(puVar28 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar2 = FOutputDevice::CanBeUsedOnAnyThread(), cVar2 == '\0')))) {
                LOCK();
                bVar29 = *(int *)((longlong)puVar28 + 0xc) == 0;
                if (bVar29) {
                  *(int *)((longlong)puVar28 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar29) {
                  uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  puVar9 = puVar25;
                  if (uVar5 != 0) {
                    puVar9 = (undefined8 *)
                             ((&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18);
                  }
                  puVar9[1] = puVar28;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar28)(puVar28,1);
              }
            }
          }
        }
        puVar28 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_80 + 1);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            if ((*(char *)(local_80 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar2 = FOutputDevice::CanBeUsedOnAnyThread(), cVar2 == '\0')))) {
              LOCK();
              bVar29 = *(int *)((longlong)puVar28 + 0xc) == 0;
              if (bVar29) {
                *(int *)((longlong)puVar28 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar29) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                puVar9 = puVar25;
                if (uVar5 != 0) {
                  puVar9 = (undefined8 *)
                           ((&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18);
                }
                puVar9[1] = puVar28;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar28)(puVar28,1);
            }
          }
        }
        uVar5 = (int)puVar17 + 1;
        puVar17 = (undefined8 *)(ulonglong)uVar5;
        puVar26 = puVar26 + 7;
        cVar2 = local_a8;
      } while ((int)uVar5 < *(int *)(param_1 + 0x150));
    }
  }
  if (((0x1d < DAT_146ab62cc) || ((0x25e2efcaU >> (DAT_146ab62cc & 0x1f) & 1) == 0)) &&
     ((0x1b < DAT_146ab62cc ||
      (((0x8051000U >> (DAT_146ab62cc & 0x1f) & 1) == 0 ||
       (uVar5 = RHIGetShaderLanguageVersion(), 1 < uVar5)))))) {
    local_b0._0_1_ = 0x3d;
    local_b8 = 4;
    (**(code **)(*DAT_146ab6358 + 0x4a8))
              (DAT_146ab6358,local_78,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x98));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x158,local_78);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
    uVar3 = 0xf;
    if (cVar2 == '\0') {
      uVar3 = 0x11;
    }
    local_b0 = CONCAT31(local_b0._1_3_,uVar3);
    local_b8 = local_a4;
    (**(code **)(*DAT_146ab6358 + 0x4a8))
              (DAT_146ab6358,local_70,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0xd0));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x160,local_70);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_70);
    iVar20 = *(int *)(param_1 + 0x150);
    lVar21 = param_1 + 0x168;
    iVar24 = *(int *)(param_1 + 0x180);
    if (iVar24 < iVar20) {
      *(int *)(param_1 + 0x180) = iVar20;
      if (*(int *)(param_1 + 0x184) < iVar20) {
        TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
        ::ResizeGrow(lVar21,iVar24);
      }
      lVar12 = *(longlong *)(param_1 + 0x178);
      if (*(longlong *)(param_1 + 0x178) == 0) {
        lVar12 = lVar21;
      }
      if (iVar20 - iVar24 != 0) {
        puVar17 = (undefined8 *)(lVar12 + (longlong)iVar24 * 8);
        for (uVar11 = (ulonglong)(uint)(iVar20 - iVar24); uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
      }
    }
    else if (iVar20 < iVar24) {
      FUN_142437790(lVar21,iVar20,iVar24 - iVar20,1);
    }
    puVar17 = puVar25;
    puVar26 = puVar25;
    puVar28 = puVar25;
    if (0 < *(int *)(param_1 + 0x150)) {
      do {
        local_b0 = CONCAT31(local_b0._1_3_,0x25);
        local_b8 = 4;
        lVar12 = *(longlong *)(param_1 + 0x148);
        if (*(longlong *)(param_1 + 0x148) == 0) {
          lVar12 = param_1 + 0xd8;
        }
        (**(code **)(*DAT_146ab6358 + 0x4a8))
                  (DAT_146ab6358,&local_a0,&DAT_146ab6e78,
                   *(undefined8 *)(lVar12 + 0x30 + (longlong)puVar17));
        lVar12 = *(longlong *)(param_1 + 0x178);
        if (*(longlong *)(param_1 + 0x178) == 0) {
          lVar12 = lVar21;
        }
        ppuVar13 = (undefined8 **)(lVar12 + (longlong)puVar28);
        if (ppuVar13 == &local_a0) {
LAB_1424357c8:
          puVar9 = local_a0;
          if (local_a0 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_a0 + 1);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              if ((*(char *)(local_a0 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar2 = FOutputDevice::CanBeUsedOnAnyThread(), cVar2 == '\0')))) {
                LOCK();
                bVar29 = *(int *)((longlong)puVar9 + 0xc) == 0;
                if (bVar29) {
                  *(int *)((longlong)puVar9 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar29) {
                  uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  puVar10 = puVar25;
                  if (uVar5 != 0) {
                    puVar10 = (undefined8 *)
                              ((&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18);
                  }
                  puVar10[1] = puVar9;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar9)(puVar9,1);
              }
            }
          }
        }
        else {
          puVar9 = *ppuVar13;
          *ppuVar13 = local_a0;
          local_a0 = (undefined8 *)0x0;
          if (puVar9 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar9 + 1);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              if ((*(char *)(puVar9 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar2 = FOutputDevice::CanBeUsedOnAnyThread(), cVar2 == '\0')))) {
                LOCK();
                bVar29 = *(int *)((longlong)puVar9 + 0xc) == 0;
                if (bVar29) {
                  *(int *)((longlong)puVar9 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar29) {
                  uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  puVar10 = puVar25;
                  if (uVar5 != 0) {
                    puVar10 = (undefined8 *)
                              ((&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18);
                  }
                  puVar10[1] = puVar9;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar9)(puVar9,1);
              }
            }
            goto LAB_1424357c8;
          }
        }
        uVar5 = (int)puVar26 + 1;
        puVar17 = puVar17 + 7;
        puVar26 = (undefined8 *)(ulonglong)uVar5;
        puVar28 = puVar28 + 1;
      } while ((int)uVar5 < *(int *)(param_1 + 0x150));
    }
    local_b0 = CONCAT31(local_b0._1_3_,0xd);
    local_b8 = 4;
    (**(code **)(*DAT_146ab6358 + 0x4a8))
              (DAT_146ab6358,&local_90,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x60));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x188,&local_90);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
  }
  local_b0 = 1;
  local_b8 = local_a4 * *(int *)(param_1 + 0x1a0) * *(int *)(param_1 + 0x198);
  puVar17 = (undefined8 *)
            (**(code **)(*DAT_146ab6358 + 0x4b0))
                      (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0xd0),0);
  bVar29 = *(char *)(param_1 + 0x1ac) == '\0';
  local_88 = puVar25;
  if (bVar29) {
    local_88 = puVar17;
  }
  local_b0 = 1;
  puVar26 = puVar25;
  if (!bVar29) {
    puVar26 = puVar17;
  }
  local_b8 = *(int *)(param_1 + 0x198) * 0xc;
  local_80 = puVar26;
  puVar17 = (undefined8 *)
            (**(code **)(*DAT_146ab6358 + 0x4b0))
                      (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x60),0);
  local_b0 = 1;
  local_b8 = *(int *)(param_1 + 0x198) * 8;
  local_98 = puVar17;
  local_a0 = (undefined8 *)
             (**(code **)(*DAT_146ab6358 + 0x4b0))
                       (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x98),0);
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  if (0 < *(int *)(param_1 + 0x150)) {
    puVar28 = puVar25;
    puVar9 = puVar25;
    do {
      lVar21 = *(longlong *)(param_1 + 0x148);
      if (*(longlong *)(param_1 + 0x148) == 0) {
        lVar21 = param_1 + 0xd8;
      }
      local_b0 = 1;
      local_b8 = *(int *)(param_1 + 0x198) * 4;
      uVar7 = (**(code **)(*DAT_146ab6358 + 0x4b0))
                        (DAT_146ab6358,&DAT_146ab6e78,
                         *(undefined8 *)(lVar21 + 0x30 + (longlong)puVar28),0);
      uVar11 = local_40;
      lVar21 = (longlong)(int)local_40;
      iVar20 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar20);
      if (local_40._4_4_ < iVar20) {
        TArray<FRHITexture_*,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
                  (local_58,uVar11 & 0xffffffff);
      }
      puVar14 = local_58;
      if (local_48 != (undefined1 *)0x0) {
        puVar14 = local_48;
      }
      uVar5 = (int)puVar9 + 1;
      puVar9 = (undefined8 *)(ulonglong)uVar5;
      puVar28 = puVar28 + 7;
      *(undefined8 *)(puVar14 + lVar21 * 8) = uVar7;
      puVar26 = local_80;
      puVar17 = local_98;
    } while ((int)uVar5 < *(int *)(param_1 + 0x150));
  }
  if (0 < *(int *)(param_1 + 0x198)) {
    local_90 = 0;
    puVar28 = puVar25;
    do {
      uVar11 = 0;
      lVar21 = *(longlong *)(param_1 + 400);
      *puVar17 = *(undefined8 *)(lVar21 + (longlong)puVar25);
      *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(lVar21 + 8 + (longlong)puVar25);
      *(undefined4 *)local_a0 =
           *(undefined4 *)(*(longlong *)(param_1 + 400) + 0x4c + (longlong)puVar25);
      *(undefined4 *)((longlong)local_a0 + 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 400) + 0x50 + (longlong)puVar25);
      if (0 < (int)local_40) {
        uVar22 = uVar11;
        lVar21 = (longlong)puVar25 + 0x54;
        uVar23 = uVar11;
        do {
          puVar14 = local_58;
          if (local_48 != (undefined1 *)0x0) {
            puVar14 = local_48;
          }
          uVar5 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar5;
          *(undefined4 *)(local_90 + *(longlong *)(puVar14 + uVar22)) =
               *(undefined4 *)(lVar21 + *(longlong *)(param_1 + 400));
          uVar22 = uVar22 + 8;
          lVar21 = lVar21 + 4;
        } while ((int)uVar5 < (int)local_40);
      }
      uVar5 = *(uint *)(param_1 + 0x1a0);
      iVar20 = (int)puVar28;
      if (uVar5 != 0) {
        do {
          lVar21 = *(longlong *)(param_1 + 400);
          iVar24 = (int)uVar11;
          if (*(char *)(param_1 + 0x1ac) == '\0') {
            local_88[uVar5 * iVar20 + iVar24] =
                 *(undefined8 *)((longlong)puVar25 + lVar21 + uVar11 * 8 + 0xc);
          }
          else {
            uVar6 = *(uint *)((longlong)puVar25 + lVar21 + uVar11 * 8 + 0xc);
            uVar15 = (ushort)(uVar6 >> 0x10);
            uVar19 = uVar15 & 0x8000;
            uVar16 = uVar6 >> 0x17 & 0xff;
            if (uVar16 < 0x71) {
              iVar27 = -uVar16 + 0x7e;
              if ((iVar27 < 0x19) &&
                 (uVar6 = uVar6 & 0x7fffff | 0x800000,
                 uVar19 = (ushort)(uVar6 >> ((byte)iVar27 & 0x1f)) & 0x3ff | uVar19,
                 (uVar6 >> ((char)-uVar16 + 0x7dU & 0x1f) & 1) != 0)) {
                uVar19 = uVar19 + 1;
              }
            }
            else {
              if (uVar16 < 0x8f) {
                uVar15 = (ushort)(uVar6 >> 0xd) & 0x3ff | ((uVar15 >> 7) - 0x10 & 0x1f) << 10;
              }
              else {
                uVar15 = 0x7bff;
              }
              uVar19 = uVar19 | uVar15;
            }
            local_a4 = *(uint *)((longlong)puVar25 + lVar21 + uVar11 * 8 + 0x10);
            uVar4 = (ushort)(local_a4 >> 0x10);
            uVar15 = uVar4 & 0x8000;
            uVar6 = local_a4 >> 0x17 & 0xff;
            if (uVar6 < 0x71) {
              iVar27 = -uVar6 + 0x7e;
              if ((iVar27 < 0x19) &&
                 (uVar16 = local_a4 & 0x7fffff | 0x800000,
                 uVar15 = (ushort)(uVar16 >> ((byte)iVar27 & 0x1f)) & 0x3ff | uVar15,
                 (uVar16 >> ((char)-uVar6 + 0x7dU & 0x1f) & 1) != 0)) {
                uVar15 = uVar15 + 1;
              }
            }
            else {
              if (uVar6 < 0x8f) {
                uVar4 = (ushort)(local_a4 >> 0xd) & 0x3ff | ((uVar4 >> 7) - 0x10 & 0x1f) << 10;
              }
              else {
                uVar4 = 0x7bff;
              }
              uVar15 = uVar15 | uVar4;
            }
            uVar11 = (ulonglong)(uVar5 * iVar20 + iVar24);
            *(ushort *)((longlong)puVar26 + uVar11 * 4) = uVar19;
            *(ushort *)((longlong)puVar26 + uVar11 * 4 + 2) = uVar15;
          }
          uVar5 = *(uint *)(param_1 + 0x1a0);
          uVar11 = (ulonglong)(iVar24 + 1U);
          puVar17 = local_98;
        } while (iVar24 + 1U < uVar5);
      }
      puVar17 = (undefined8 *)((longlong)puVar17 + 0xc);
      local_90 = local_90 + 4;
      local_a0 = local_a0 + 1;
      puVar28 = (undefined8 *)(ulonglong)(iVar20 + 1U);
      puVar25 = (undefined8 *)((longlong)puVar25 + 0x5c);
      local_98 = puVar17;
    } while ((int)(iVar20 + 1U) < *(int *)(param_1 + 0x198));
  }
  uVar11 = 0;
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x60));
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x98));
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0xd0));
  uVar22 = uVar11;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      lVar21 = *(longlong *)(param_1 + 0x148);
      if (*(longlong *)(param_1 + 0x148) == 0) {
        lVar21 = param_1 + 0xd8;
      }
      (**(code **)(*DAT_146ab6358 + 0x4b8))
                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar21 + 0x30 + uVar11));
      uVar5 = (int)uVar22 + 1;
      uVar11 = uVar11 + 0x38;
      uVar22 = (ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x150));
  }
  if (local_48 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142435dd0 FUN_142435dd0 body=156 status=ok
// SIG undefined FUN_142435dd0(void)

void FUN_142435dd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  FRenderResource::InitResource();
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
  (**(code **)(*(longlong *)(param_1 + 0x68) + 0x28))(param_1 + 0x68);
  (**(code **)(*(longlong *)(param_1 + 0xa0) + 0x28))();
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x150)) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x148);
      if (*(longlong *)(param_1 + 0x148) == 0) {
        lVar1 = param_1 + 0xd8;
      }
      (**(code **)(*(longlong *)(lVar1 + lVar2) + 0x28))();
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x38;
    } while (iVar3 < *(int *)(param_1 + 0x150));
  }
  return;
}



// FUNCTION 142435e70 FUN_142435e70 body=333 status=ok
// SIG undefined FUN_142435e70(void)

void FUN_142435e70(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  uStack_40 = *(undefined8 *)(param_1 + 0x770);
  local_48 = param_1;
  if (param_1 == 8) {
    local_48 = 0;
  }
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') {
      uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_14242ae40(&local_48,uVar9);
      FRenderResource::InitResource(param_1);
      return;
    }
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_142435f28;
    }
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_14242ae40(&local_38,uVar9);
    FRenderResource::InitResource(param_1);
    return;
  }
LAB_142435f28:
  plVar10 = (longlong *)FUN_14242f440(local_28,0,0xff);
  lVar3 = *plVar10;
  *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_48;
  *(undefined4 *)(lVar3 + 0x14) = local_48._4_4_;
  *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_40;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_40._4_4_;
  lVar3 = *plVar10;
  lVar6 = plVar10[2];
  lVar4 = plVar10[1];
  lVar5 = *(longlong *)(lVar3 + 0x28);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_141b731c0(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  FRenderResource::InitResource(param_1);
  return;
}



// FUNCTION 142435fc0 InitializeRecords body=697 status=ok
// SIG undefined InitializeRecords(void)

void FEngineSessionManager::InitializeRecords(longlong param_1,char param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined1 local_68 [8];
  ulonglong local_60;
  uint local_58;
  uint local_54;
  ulonglong local_50;
  uint local_48;
  int local_44;
  
  if (DAT_146af3408 != 0) {
    uVar6 = 0;
    local_50 = 0;
    local_44 = 0;
    uVar9 = uVar6;
    if (param_2 != '\0') {
      uVar9 = DAT_146af3458;
    }
    FWindowsSystemWideCriticalSection::FWindowsSystemWideCriticalSection
              (local_res18,&DAT_146532550,uVar9);
    cVar1 = FWindowsSystemWideCriticalSection::IsValid(local_res18);
    uVar9 = uVar6;
    uVar10 = uVar6;
    if ((cVar1 != '\0') && (cVar1 = BeginReadWriteRecords(param_1), uVar9 = 0, cVar1 != '\0')) {
      lVar7 = *(longlong *)(param_1 + 0x80);
      local_60 = 0;
      local_54 = 0;
      local_res20 = (longlong)*(int *)(param_1 + 0x88) * 0x60 + lVar7;
      uVar9 = uVar6;
      uVar8 = uVar6;
      uVar11 = uVar6;
      if (lVar7 != local_res20) {
        do {
          plVar2 = (longlong *)FDateTime::UtcNow(local_68);
          lVar3 = *plVar2 - *(longlong *)(lVar7 + 0x38);
          if (*(char *)(lVar7 + 0x40) == '\0') {
            if (DAT_146af3428 < lVar3) goto LAB_1424360dd;
            if (DAT_146af3450 < lVar3) goto LAB_1424360a8;
          }
          else {
LAB_1424360a8:
            iVar4 = (int)uVar9;
            local_48 = iVar4 + 1;
            if (local_44 < (int)local_48) {
              TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(&local_50,uVar9);
              uVar10 = local_50;
            }
            uVar9 = (ulonglong)local_48;
            FSessionRecord::FSessionRecord((longlong)iVar4 * 0x60 + uVar10,lVar7);
LAB_1424360dd:
            iVar4 = (int)uVar6;
            local_58 = iVar4 + 1;
            if ((int)uVar8 < (int)local_58) {
              TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(&local_60,uVar6);
              uVar8 = (ulonglong)local_54;
              uVar11 = local_60;
            }
            uVar6 = (ulonglong)local_58;
            FSessionRecord::FSessionRecord((longlong)iVar4 * 0x60 + uVar11,lVar7);
          }
          lVar7 = lVar7 + 0x60;
        } while (lVar7 != local_res20);
      }
      for (uVar8 = uVar11; uVar8 != (longlong)(int)uVar6 * 0x60 + uVar11; uVar8 = uVar8 + 0x60) {
        DeleteStoredRecord(param_1,uVar8);
      }
      FUN_14242e0f0(param_1);
      EndReadWriteRecords(param_1);
      *(undefined1 *)(param_1 + 4) = 1;
      if ((int)uVar6 != 0) {
        plVar2 = (longlong *)(uVar11 + 0x28);
        do {
          if (plVar2[4] != 0) {
            FMemory::Free();
          }
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          if (plVar2[-2] != 0) {
            FMemory::Free();
          }
          if (plVar2[-5] != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 0xc;
          uVar5 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 != 0);
      }
      if (uVar11 != 0) {
        FMemory::Free(uVar11);
      }
    }
    FWindowsSystemWideCriticalSection::~FWindowsSystemWideCriticalSection(local_res18);
    for (uVar6 = uVar10; uVar6 != (longlong)(int)uVar9 * 0x60 + uVar10; uVar6 = uVar6 + 0x60) {
      FUN_142437e90(param_1,uVar6);
    }
    if ((int)uVar9 != 0) {
      plVar2 = (longlong *)(uVar10 + 0x28);
      do {
        if (plVar2[4] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        if (plVar2[-2] != 0) {
          FMemory::Free();
        }
        if (plVar2[-5] != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 0xc;
        uVar5 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar5;
      } while (uVar5 != 0);
    }
    if (uVar10 != 0) {
      FMemory::Free(uVar10);
    }
  }
  return;
}



// FUNCTION 142436280 IsPinDefaultValid body=62 status=ok
// SIG undefined IsPinDefaultValid(void)

undefined8 * UEdGraphSchema::IsPinDefaultValid(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Not implemented by this schema",0x3e);
  return param_2;
}



// FUNCTION 1424362c0 FUN_1424362c0 body=51 status=ok
// SIG undefined FUN_1424362c0(void)

ulonglong FUN_1424362c0(void)

{
  ulonglong uVar1;
  
  if (*(undefined8 **)(DAT_146b17150 + 0xab8) != (undefined8 *)0x0) {
    uVar1 = (**(code **)**(undefined8 **)(DAT_146b17150 + 0xab8))();
    if ((char)uVar1 != '\0') {
      return uVar1 & 0xffffffffffffff00;
    }
  }
  return (ulonglong)DAT_146ab6325;
}



// FUNCTION 142436300 FUN_142436300 body=276 status=ok
// SIG undefined FUN_142436300(void)

void FUN_142436300(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x70))(plVar3,1);
  }
  if (param_2 != (longlong *)0x0) {
    plVar3 = (longlong *)*param_2;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,1);
    }
    plVar3 = param_1 + 0x1b;
    puVar6 = (undefined8 *)*plVar3;
    puVar1 = puVar6 + (int)param_1[0x1c];
    for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      if ((longlong *)*puVar6 == param_2) {
        return;
      }
    }
    lVar4 = *param_1;
    uVar7 = FUN_142927d30();
    UObjectBaseUtility::GetTypedOuter(lVar4,uVar7);
    lVar5 = *param_2;
    uVar7 = FUN_142927d30();
    UObjectBaseUtility::GetTypedOuter(lVar5,uVar7);
    iVar2 = (int)param_1[0x1c];
    *(int *)(param_1 + 0x1c) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xe4) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
    }
    *(longlong **)(*plVar3 + (longlong)iVar2 * 8) = param_2;
    iVar2 = (int)param_2[0x1c];
    *(int *)(param_2 + 0x1c) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xe4) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x1b,iVar2);
    }
    *(longlong **)(param_2[0x1b] + (longlong)iVar2 * 8) = param_1;
    FUN_14242de10(lVar4);
    FUN_14242de10(*param_2);
  }
  return;
}



// FUNCTION 142436420 FUN_142436420 body=421 status=ok
// SIG undefined FUN_142436420(void)

longlong FUN_142436420(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *local_68;
  uint local_60;
  undefined1 local_58 [24];
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  byte local_27;
  
  uVar6 = FText::FText(local_58);
  FPinConnectionResponse::FPinConnectionResponse(param_2,0,uVar6);
  local_60 = *(uint *)(param_3 + 0xe0);
  lVar7 = (longlong)(int)local_60;
  puVar9 = (undefined8 *)0x0;
  _Src = *(void **)(param_3 + 0xd8);
  local_68 = (undefined8 *)0x0;
  if (local_60 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_68,local_60,0);
    puVar9 = local_68;
    _guard_xfg_dispatch_icall_nop(local_68,_Src,lVar7 << 3);
  }
  uVar4 = local_60;
  UEdGraphPin::BreakAllPinLinks(param_3,0);
  puVar10 = puVar9;
  if (0 < (int)uVar4) {
    uVar8 = (ulonglong)uVar4;
    do {
      uVar6 = *puVar9;
      (**(code **)(*param_1 + 0x288))(param_1,local_40,param_4,uVar6);
      if (local_28 == '\0') {
        FUN_142436300(param_4,uVar6);
      }
      else {
        FText::operator=(param_2,local_40);
        *(char *)(param_2 + 0x18) = local_28;
        *(byte *)(param_2 + 0x19) = *(byte *)(param_2 + 0x19) & 0xfe;
        *(byte *)(param_2 + 0x19) = *(byte *)(param_2 + 0x19) | local_27 & 1;
      }
      plVar5 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 - 1;
      puVar10 = local_68;
    } while (uVar8 != 0);
  }
  FString::operator=(param_4 + 0x98,param_3 + 0x98);
  *(undefined8 *)(param_4 + 0xb8) = *(undefined8 *)(param_3 + 0xb8);
  FText::operator=(param_4 + 0xc0,param_3 + 0xc0);
  if (puVar10 != (undefined8 *)0x0) {
    FMemory::Free(puVar10);
  }
  return param_2;
}



// FUNCTION 1424365e0 FUN_1424365e0 body=317 status=ok
// SIG undefined FUN_1424365e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424365e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x5c);
  local_98[0] = 0;
  local_90 = 0;
  iVar5 = *(int *)(param_1 + 0x50) + -1;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x48);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_142436692:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,local_98);
        if (cVar4 == '\0') goto LAB_142436692;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x5c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x48),0);
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  return;
}



// FUNCTION 142436740 FUN_142436740 body=704 status=ok
// SIG undefined FUN_142436740(void)

void FUN_142436740(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [24];
  undefined1 local_40 [40];
  
  if (param_2 == '\0') {
    cVar7 = *(char *)(param_1 + 0x10);
    *(char *)(param_1 + 0x11) = cVar7;
  }
  else {
    cVar7 = *(char *)(param_1 + 0x11);
  }
  if (cVar7 != '\0') {
    if (param_2 == '\0') {
      uVar11 = *(undefined8 *)(param_1 + 8);
      fVar12 = (float)(DAT_1468b02f8 * 1000.0 * (double)DAT_146ac3afc);
      local_88 = CONCAT44(local_88._4_4_,fVar12);
      uStack_80 = uVar11;
      if ((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) {
        if ((DAT_146ac3ac5 != '\0') ||
           (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 == '\0' && (DAT_1468c21ae != '\0')) &&
            (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)))) {
          plVar10 = (longlong *)FUN_14242f050(local_58,0,0xff);
          lVar3 = *plVar10;
          *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_88;
          *(undefined4 *)(lVar3 + 0x14) = local_88._4_4_;
          *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_80;
          *(undefined4 *)(lVar3 + 0x1c) = uStack_80._4_4_;
          lVar3 = *plVar10;
          lVar6 = plVar10[2];
          lVar4 = plVar10[1];
          lVar5 = *(longlong *)(lVar3 + 0x28);
          piVar1 = (int *)(lVar5 + 0x48);
          if (lVar5 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          FUN_141b731c0(lVar3,lVar4,(int)lVar6,1);
          if (lVar5 == 0) {
            return;
          }
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 != 1) {
            return;
          }
          FGraphEvent::Recycle(lVar5);
          return;
        }
        local_70 = (undefined4)uStack_80;
        uStack_6c = uStack_80._4_4_;
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
        uVar11 = CONCAT44(uStack_6c,local_70);
      }
      else {
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
      }
      FUN_14242c5c0(uVar11,uVar9,fVar12);
    }
    else {
      local_88 = *(undefined8 *)(param_1 + 8);
      uStack_80 = CONCAT71(uStack_80._1_7_,param_2);
      if ((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) {
        if ((DAT_146ac3ac5 == '\0') &&
           (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
            (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
          local_68 = (undefined4)local_88;
          uStack_64 = local_88._4_4_;
          uStack_60 = (undefined4)uStack_80;
          uStack_5c = uStack_80._4_4_;
          uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
          FUN_14242b1a0(&local_68,uVar11);
        }
        else {
          plVar10 = (longlong *)FUN_14242f1a0(local_40,0,0xff);
          lVar3 = *plVar10;
          *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_88;
          *(undefined4 *)(lVar3 + 0x14) = local_88._4_4_;
          *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_80;
          *(undefined4 *)(lVar3 + 0x1c) = uStack_80._4_4_;
          lVar3 = *plVar10;
          lVar6 = plVar10[2];
          lVar4 = plVar10[1];
          lVar5 = *(longlong *)(lVar3 + 0x28);
          piVar1 = (int *)(lVar5 + 0x48);
          if (lVar5 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          FUN_141b731c0(lVar3,lVar4,(int)lVar6,1);
          if (lVar5 != 0) {
            LOCK();
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              FGraphEvent::Recycle(lVar5);
            }
          }
        }
      }
      else {
        uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_14242b1a0(&local_88,uVar11);
      }
      if (param_2 == '\x03') {
        *(undefined1 *)(param_1 + 0x11) = 0;
        return;
      }
    }
  }
  return;
}



// FUNCTION 142436a00 RebaseOntoLocalOrigin body=188 status=ok
// SIG undefined RebaseOntoLocalOrigin(void)

float * FRepMovement::RebaseOntoLocalOrigin(float *param_1,float *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (**(code **)(*DAT_146af3468 + 0x68))();
  if ((0 < iVar4) &&
     (((*param_3 != DAT_1468b5ca8 || (param_3[1] != DAT_1468b5cac)) || (param_3[2] != DAT_1468b5cb0)
      ))) {
    iVar4 = param_3[1];
    fVar1 = param_2[1];
    fVar2 = param_2[2];
    *param_1 = *param_2 - (float)*param_3;
    iVar3 = param_3[2];
    param_1[1] = fVar1 - (float)iVar4;
    param_1[2] = fVar2 - (float)iVar3;
    return param_1;
  }
  fVar1 = param_2[2];
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  param_1[2] = fVar1;
  return param_1;
}



// FUNCTION 142436ac0 FUN_142436ac0 body=102 status=ok
// SIG undefined FUN_142436ac0(void)

undefined8 * FUN_142436ac0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  
  if ((param_3 != (longlong *)0x0) && (0 < DAT_146af29d8)) {
    lVar1 = (**(code **)(*param_3 + 0x148))(param_3);
    FRepMovement::RebaseOntoLocalOrigin(param_1,param_2,lVar1 + 0x7bc);
    return param_1;
  }
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  return param_1;
}



// FUNCTION 142436b30 FUN_142436b30 body=110 status=ok
// SIG undefined FUN_142436b30(void)

undefined8 * FUN_142436b30(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((param_3 != 0) && (0 < DAT_146af29d8)) {
    lVar1 = *(longlong *)(param_3 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_3);
    }
    FRepMovement::RebaseOntoLocalOrigin(param_1,param_2,lVar1 + 0x7bc);
    return param_1;
  }
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  return param_1;
}



// FUNCTION 142436ba0 RebaseOntoZeroOrigin body=176 status=ok
// SIG undefined RebaseOntoZeroOrigin(void)

float * FRepMovement::RebaseOntoZeroOrigin(float *param_1,float *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*DAT_146af3468 + 0x68))();
  if ((0 < iVar3) &&
     (((*param_3 != DAT_1468b5ca8 || (param_3[1] != DAT_1468b5cac)) || (param_3[2] != DAT_1468b5cb0)
      ))) {
    iVar3 = param_3[1];
    fVar1 = param_2[1];
    *param_1 = (float)*param_3 + *param_2;
    iVar2 = param_3[2];
    param_1[1] = (float)iVar3 + fVar1;
    param_1[2] = (float)iVar2 + param_2[2];
    return param_1;
  }
  fVar1 = param_2[2];
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  param_1[2] = fVar1;
  return param_1;
}



// FUNCTION 142436c50 FUN_142436c50 body=102 status=ok
// SIG undefined FUN_142436c50(void)

undefined8 * FUN_142436c50(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  
  if ((param_3 != (longlong *)0x0) && (0 < DAT_146af29d8)) {
    lVar1 = (**(code **)(*param_3 + 0x148))(param_3);
    FRepMovement::RebaseOntoZeroOrigin(param_1,param_2,lVar1 + 0x7bc);
    return param_1;
  }
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  return param_1;
}



// FUNCTION 142436cc0 FUN_142436cc0 body=110 status=ok
// SIG undefined FUN_142436cc0(void)

undefined8 * FUN_142436cc0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((param_3 != 0) && (0 < DAT_146af29d8)) {
    lVar1 = *(longlong *)(param_3 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_3);
    }
    FRepMovement::RebaseOntoZeroOrigin(param_1,param_2,lVar1 + 0x7bc);
    return param_1;
  }
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  return param_1;
}



// FUNCTION 142436d30 FUN_142436d30 body=1519 status=ok
// SIG undefined FUN_142436d30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142436d30(longlong *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  void *pvVar10;
  char cVar11;
  int iVar12;
  DWORD DVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  float *pfVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int local_res10;
  
  pvVar10 = ThreadLocalStoragePointer;
  bVar8 = false;
  iVar18 = *(int *)((longlong)param_1 + 0x14);
  fVar2 = *(float *)(DAT_146af32d0 + 4);
  fVar29 = *(float *)(DAT_146af33d8 + 4) * 0.01;
  fVar28 = (1.0 - *(float *)(DAT_146af32e8 + 4) * 0.01) * fVar2;
  fVar25 = *(float *)(param_1 + 4);
  if (0 < iVar18) {
    uVar19 = (ulonglong)_tls_index;
    fVar26 = 0.0;
    fVar27 = 1.0;
    fVar30 = 0.0;
    fVar25 = *(float *)(DAT_146af3348 + 4);
    fVar3 = *(float *)(DAT_146af3300 + 4);
    iVar12 = 2;
    if (1 < *(int *)(DAT_146af33a8 + 4)) {
      iVar12 = *(int *)(DAT_146af33a8 + 4);
    }
    iVar21 = 0;
    bVar8 = true;
    iVar20 = 1;
    local_res10 = 0;
    fVar24 = *(float *)(DAT_146af3330 + 4) * fVar2;
    do {
      pfVar17 = (float *)&DAT_146af3490;
      if (!bVar8) break;
      iVar1 = iVar20 + -2;
      if ((iVar1 < 0) || (iVar18 <= iVar1)) {
        if ((*(int *)(*(longlong *)((longlong)pvVar10 + uVar19 * 8) + 0x38) < DAT_146af34a8) &&
           (_Init_thread_header(&DAT_146af34a8), DAT_146af34a8 == -1)) {
          DAT_146af3490 = 0x3f800000;
          DAT_146af3494 = 0xbf800000;
          DAT_146af3498 = 0xbf800000;
          DAT_146af349c = 0xbf800000;
          _DAT_146af34a0 = 0xbf800000;
          DAT_146af34a4 = 1;
          _Init_thread_footer(&DAT_146af34a8);
        }
        iVar18 = *(int *)((longlong)param_1 + 0x14);
        puVar16 = &DAT_146af3490;
      }
      else {
        puVar16 = (undefined4 *)
                  (*param_1 +
                  (longlong)((((int)param_1[2] - iVar1) + (int)param_1[1]) % (int)param_1[1]) * 0x18
                  );
      }
      iVar1 = iVar20 + -1;
      if ((iVar1 < 0) || (iVar18 <= iVar1)) {
        if ((*(int *)(*(longlong *)((longlong)pvVar10 + uVar19 * 8) + 0x38) < DAT_146af34a8) &&
           (_Init_thread_header(&DAT_146af34a8), DAT_146af34a8 == -1)) {
          DAT_146af3490 = 0x3f800000;
          DAT_146af3494 = 0xbf800000;
          DAT_146af3498 = 0xbf800000;
          DAT_146af349c = 0xbf800000;
          _DAT_146af34a0 = 0xbf800000;
          DAT_146af34a4 = 1;
          _Init_thread_footer(&DAT_146af34a8);
        }
        iVar18 = *(int *)((longlong)param_1 + 0x14);
      }
      else {
        pfVar17 = (float *)(*param_1 +
                           (longlong)
                           ((((int)param_1[2] - iVar1) + (int)param_1[1]) % (int)param_1[1]) * 0x18)
        ;
      }
      if ((iVar20 < 0) || (iVar18 <= iVar20)) {
        if ((*(int *)(*(longlong *)((longlong)pvVar10 + uVar19 * 8) + 0x38) < DAT_146af34a8) &&
           (_Init_thread_header(&DAT_146af34a8), DAT_146af34a8 == -1)) {
          DAT_146af3490 = 0x3f800000;
          DAT_146af3494 = 0xbf800000;
          DAT_146af3498 = 0xbf800000;
          DAT_146af349c = 0xbf800000;
          _DAT_146af34a0 = 0xbf800000;
          DAT_146af34a4 = 1;
          _Init_thread_footer(&DAT_146af34a8);
        }
        puVar15 = &DAT_146af3490;
      }
      else {
        puVar15 = (undefined4 *)
                  (*param_1 +
                  (longlong)((((int)param_1[2] - iVar20) + (int)param_1[1]) % (int)param_1[1]) *
                  0x18);
      }
      fVar23 = pfVar17[3];
      if (0.0 <= fVar23) {
        cVar11 = *(char *)(pfVar17 + 5);
        fVar22 = fVar3;
        if (cVar11 == '\0') {
          fVar22 = 0.0;
        }
        bVar4 = fVar28 < fVar22 + pfVar17[2];
        if ((fVar2 < pfVar17[1]) || (bVar4)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if ((cVar11 == '\0') || (!bVar4)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar5) || (fVar23 <= fVar2)) {
          bVar6 = false;
LAB_1424370d5:
          bVar7 = false;
          if (bVar6) goto LAB_1424370df;
          iVar21 = 0;
        }
        else {
          bVar6 = true;
          if (((((iVar21 != 0) || (fVar24 <= 0.0)) || (fVar23 <= fVar24)) ||
              ((0.0 <= (float)puVar16[3] &&
               (((fVar24 <= (float)puVar16[3] ||
                 (fVar24 < (float)puVar16[1] || fVar24 == (float)puVar16[1])) ||
                (fVar24 < (float)puVar16[2] || fVar24 == (float)puVar16[2])))))) ||
             ((0.0 <= (float)puVar15[3] &&
              (((fVar24 <= (float)puVar15[3] ||
                (fVar24 < (float)puVar15[1] || fVar24 == (float)puVar15[1])) ||
               (fVar24 < (float)puVar15[2] || fVar24 == (float)puVar15[2])))))) goto LAB_1424370d5;
          bVar7 = true;
LAB_1424370df:
          iVar21 = iVar21 + 1;
          bVar6 = false;
          if (iVar21 != iVar12) {
            bVar6 = bVar8;
          }
          bVar8 = bVar6;
          if (bVar7) goto LAB_14243710d;
        }
        if ((cVar11 == '\0') || ((!bVar5 && (!bVar4)))) {
          fVar23 = SQRT(fVar28 / fVar23) * *pfVar17;
        }
        else {
          fVar23 = *pfVar17;
          if (fVar29 < *pfVar17) {
            fVar23 = fVar29;
          }
        }
        fVar30 = fVar30 + fVar27;
        fVar23 = fVar23 * fVar27;
        local_res10 = local_res10 + 1;
        fVar27 = fVar27 * fVar25;
        fVar26 = fVar26 + fVar23;
      }
LAB_14243710d:
      iVar18 = *(int *)((longlong)param_1 + 0x14);
      iVar20 = iVar20 + 1;
    } while (iVar20 <= iVar18);
    fVar26 = fVar26 / fVar30;
    if ((local_res10 < 1) || (iVar21 != local_res10)) {
      bVar8 = false;
      if ((*(float *)(DAT_146af3390 + 4) != 0.0) &&
         ((fVar2 = *(float *)(param_1 + 4), fVar2 < fVar26 &&
          (fVar26 < (*(float *)(DAT_146af3390 + 4) * 0.01 + 1.0) * fVar2)))) {
        fVar26 = fVar2;
      }
      fVar2 = *(float *)(param_1 + 4);
      if (fVar2 < fVar26) {
        fVar26 = (fVar26 - fVar2) * *(float *)(DAT_146af3378 + 4) + fVar2;
      }
    }
    else {
      bVar8 = true;
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    lVar9 = DAT_146af32b8;
    fVar25 = *(float *)(DAT_146af32a0 + 4);
    cVar11 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar11 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar13 = GetCurrentThreadId(), DVar13 != DAT_1468c21c0)) {
      lVar14 = 4;
    }
    else {
      lVar14 = 0;
    }
    fVar25 = fVar25 * 0.01;
    if ((fVar25 <= fVar26) && (fVar25 = *(float *)(lVar9 + lVar14) * 0.01, fVar26 <= fVar25)) {
      fVar25 = fVar26;
    }
  }
  if (((fVar25 == *(float *)(param_1 + 4)) || ((int)param_1[3] < *(int *)(DAT_146af3360 + 4))) &&
     (!bVar8)) {
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    return;
  }
  *(float *)(param_1 + 4) = fVar25;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 142437320 FUN_142437320 body=39 status=ok
// SIG undefined FUN_142437320(void)

void FUN_142437320(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  (**(code **)(*(longlong *)(param_1 + 8) + 0x30))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000142437344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,1);
  return;
}



// FUNCTION 142437350 FUN_142437350 body=387 status=ok
// SIG undefined FUN_142437350(void)

void FUN_142437350(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong local_res8;
  longlong local_res10;
  longlong local_28;
  uint local_20;
  uint local_1c;
  
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(uint *)(lVar5 + 0x1c) <= DAT_14653217c) {
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    local_res8 = lVar5;
    IsInRenderingThread();
    if (DAT_146af2e38 != '\0') {
      uVar6 = 0;
      local_28 = 0;
      TRefCountPtr<FRHIIndexBuffer>::operator=(&local_28,lVar5);
      local_1c = DAT_1464aaa90;
      lVar4 = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
        lVar4 = local_res8;
      }
      uVar1 = *(uint *)(lVar4 + 0x1c);
      local_res10 = lVar5;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
      uVar8 = 0x10;
      do {
        uVar7 = uVar8 + (int)uVar6 >> 1;
        if (*(uint *)(&DAT_146532140 + (ulonglong)(uVar7 - 1) * 4) < uVar1) {
          uVar6 = (ulonglong)uVar7;
          uVar7 = uVar8;
        }
        uVar8 = uVar7;
      } while (1 < uVar7 - (int)uVar6);
      lVar5 = ((longlong)(int)(DAT_1464aaa90 % 3) * 0x10 + uVar6) * 0x10;
      iVar2 = *(int *)(&DAT_146af2b08 + lVar5);
      *(int *)(&DAT_146af2b08 + lVar5) = iVar2 + 1;
      local_20 = uVar1;
      if (*(int *)(&DAT_146af2b0c + lVar5) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146af2b00 + lVar5,iVar2);
      }
      plVar3 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(&DAT_146af2b00 + lVar5));
      *plVar3 = local_28;
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      *(uint *)((longlong)plVar3 + 0xc) = local_1c;
      *(uint *)(plVar3 + 1) = uVar1;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_28);
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  return;
}



// FUNCTION 1424374e0 FUN_1424374e0 body=137 status=ok
// SIG undefined FUN_1424374e0(void)

void FUN_1424374e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  FUN_142437610(param_1 + 0x30);
  FUN_142437610(param_1 + 0x68);
  FUN_142437610(param_1 + 0xa0);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x148);
      if (*(longlong *)(param_1 + 0x148) == 0) {
        lVar1 = param_1 + 0xd8;
      }
      FUN_142437610(lVar1 + (longlong)iVar2 * 0x38);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x150));
  }
  return;
}



// FUNCTION 142437570 FUN_142437570 body=156 status=ok
// SIG undefined FUN_142437570(void)

void FUN_142437570(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  FRenderResource::ReleaseResource();
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x30))(param_1 + 0x30);
  (**(code **)(*(longlong *)(param_1 + 0x68) + 0x30))(param_1 + 0x68);
  (**(code **)(*(longlong *)(param_1 + 0xa0) + 0x30))();
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x150)) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x148);
      if (*(longlong *)(param_1 + 0x148) == 0) {
        lVar1 = param_1 + 0xd8;
      }
      (**(code **)(*(longlong *)(lVar1 + lVar2) + 0x30))();
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x38;
    } while (iVar3 < *(int *)(param_1 + 0x150));
  }
  return;
}



// FUNCTION 142437610 FUN_142437610 body=369 status=ok
// SIG undefined FUN_142437610(void)

void FUN_142437610(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong local_res8;
  longlong local_res10;
  longlong local_28;
  uint local_20;
  uint local_1c;
  
  lVar5 = *(longlong *)(param_1 + 0x30);
  if ((lVar5 != 0) && (*(uint *)(lVar5 + 0x18) <= DAT_14653217c)) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    local_res8 = lVar5;
    IsInRenderingThread();
    lVar3 = local_res8;
    if (DAT_146af3288 != '\0') {
      uVar6 = 0;
      local_28 = 0;
      TRefCountPtr<FRHIIndexBuffer>::operator=(&local_28,local_res8);
      local_1c = DAT_1464aaa90;
      local_res10 = lVar3;
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
      uVar1 = *(uint *)(local_res8 + 0x18);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
      uVar8 = 0x10;
      do {
        uVar7 = uVar8 + (int)uVar6 >> 1;
        if (*(uint *)(&DAT_146532140 + (ulonglong)(uVar7 - 1) * 4) < uVar1) {
          uVar6 = (ulonglong)uVar7;
          uVar7 = uVar8;
        }
        uVar8 = uVar7;
      } while (1 < uVar7 - (int)uVar6);
      lVar5 = ((longlong)(int)(DAT_1464aaa90 % 3) * 0x10 + uVar6) * 0x10;
      iVar2 = *(int *)(&DAT_146af2f58 + lVar5);
      *(int *)(&DAT_146af2f58 + lVar5) = iVar2 + 1;
      local_20 = uVar1;
      if (*(int *)(&DAT_146af2f5c + lVar5) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146af2f50 + lVar5,iVar2);
      }
      plVar4 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(&DAT_146af2f50 + lVar5));
      *plVar4 = local_28;
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      *(uint *)((longlong)plVar4 + 0xc) = local_1c;
      *(uint *)(plVar4 + 1) = uVar1;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_28);
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  }
  return;
}



// FUNCTION 142437790 FUN_142437790 body=384 status=ok
// SIG undefined FUN_142437790(void)

void FUN_142437790(longlong param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  
  if (param_3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar5 = param_1;
    }
    plVar8 = (longlong *)(lVar5 + (longlong)param_2 * 8);
    iVar7 = param_3;
    do {
      puVar2 = (undefined8 *)*plVar8;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          if ((*(char *)(puVar2 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
            LOCK();
            bVar9 = *(int *)((longlong)puVar2 + 0xc) == 0;
            if (bVar9) {
              *(int *)((longlong)puVar2 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar9) {
              uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
              lVar5 = 0;
              if (uVar4 != 0) {
                lVar5 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar5 + 8) = puVar2;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
      plVar8 = plVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = *(int *)(param_1 + 0x18);
    iVar6 = (iVar7 - param_2) - param_3;
    if (iVar6 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar5 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 8 + lVar5),
                 (void *)(lVar5 + (longlong)(param_2 + param_3) * 8),(longlong)iVar6 << 3);
      iVar7 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x18) = iVar7 - param_3;
    if (param_4 != '\0') {
      FUN_142437d80(param_1);
    }
  }
  return;
}



// FUNCTION 142437910 FUN_142437910 body=12 status=ok
// SIG undefined FUN_142437910(void)

void FUN_142437910(void)

{
  DAT_146af29e0 = 0;
  return;
}



// FUNCTION 142437920 FUN_142437920 body=365 status=ok
// SIG undefined FUN_142437920(void)

void FUN_142437920(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong local_res8;
  longlong local_res10;
  undefined1 local_28 [32];
  
  lVar3 = *(longlong *)(param_1 + 8);
  if ((DAT_146ac3ac6 == '\0') || (cVar6 = IsInRenderingThread(), cVar6 == '\0')) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
      local_res8 = lVar3;
      uVar8 = FBaseGraphTask::GetSmallTaskAllocator();
      <lambda_d579f6d3927cad775059d0ae9c1a6fd5>::operator()(&local_res8,uVar8);
      return;
    }
    plVar9 = (longlong *)FUN_14242f2f0(local_28,0,0xff);
    *(longlong *)(*plVar9 + 0x10) = lVar3;
    lVar3 = *plVar9;
    lVar5 = plVar9[2];
    lVar10 = plVar9[1];
    lVar4 = *(longlong *)(lVar3 + 0x20);
    piVar1 = (int *)(lVar4 + 0x48);
    if (lVar4 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res10 = lVar4;
    FUN_14048a3d0(lVar3,lVar10,(int)lVar5,1);
    if (lVar4 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(local_res10);
      }
    }
    return;
  }
  FBaseGraphTask::GetSmallTaskAllocator();
  *(undefined4 *)(lVar3 + 0x10) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x14) = 0;
  *(undefined4 *)(lVar3 + 8) = 0;
  if (0x7fffffff < *(uint *)(lVar3 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (lVar3,0);
  }
  *(undefined4 *)(lVar3 + 0x18) = 0;
  *(undefined4 *)(lVar3 + 0x20) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x1c) = 1;
  lVar10 = *(longlong *)(lVar3 + 0x30);
  lVar3 = lVar10 + (longlong)*(int *)(lVar3 + 0x38) * 0x28;
  if (lVar10 == lVar3) {
    return;
  }
  do {
    *(undefined8 *)(lVar10 + 0x20) = 0xffffffffffffffff;
    lVar10 = lVar10 + 0x28;
  } while (lVar10 != lVar3);
  return;
}



// FUNCTION 142437a90 FUN_142437a90 body=143 status=ok
// SIG undefined FUN_142437a90(void)

void FUN_142437a90(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x70);
  if (param_3 < 3) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x38);
    pvVar1 = *(void **)((longlong)param_1 + 0x70);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x70) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x38);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x70) = uVar2;
  return;
}



// FUNCTION 142437b20 FUN_142437b20 body=154 status=ok
// SIG undefined FUN_142437b20(void)

void FUN_142437b20(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  if (uVar1 < 3) {
    uVar5 = 2;
  }
  else {
    lVar3 = 4;
    if ((*(int *)(param_1 + 0x7c) != 0) || (4 < uVar1)) {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar4 = FMemory::QuantizeSize(lVar3 * 0x38,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar4;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
    uVar4 = (uVar4 - lVar3 >> 1) + lVar3 >> 5;
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x7c) = (int)uVar5;
  FUN_142437a90(param_1,param_2,uVar5,0x38);
  return;
}



// FUNCTION 142437bc0 ResizeHistoryIfNeeded body=435 status=ok
// SIG undefined ResizeHistoryIfNeeded(void)

/* WARNING: Removing unreachable block (ram,0x000142437c6d) */

void FDynamicResolutionHeuristicProxy::ResizeHistoryIfNeeded(undefined4 **param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *local_18;
  int local_10;
  undefined4 local_c;
  
  iVar9 = *(int *)(DAT_146af3318 + 4);
  if (*(int *)(DAT_146af3318 + 4) < 2) {
    iVar9 = 1;
  }
  if (*(int *)(param_1 + 1) != iVar9) {
    local_18 = (undefined4 *)0x0;
    local_c = 0;
    if (iVar9 < 1) {
      iVar10 = 0;
      if ((iVar9 < 0) && (iVar9 != 0)) {
        local_10 = iVar9;
        TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(&local_18);
        iVar10 = local_10;
      }
    }
    else {
      local_10 = iVar9;
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_18,0);
      puVar1 = local_18;
      for (; iVar10 = local_10, iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar1 = 0x3f800000;
        puVar1[1] = 0xbf800000;
        puVar1[2] = 0xbf800000;
        puVar1[3] = 0xbf800000;
        puVar1[4] = 0xbf800000;
        *(undefined1 *)(puVar1 + 5) = 1;
        puVar1 = puVar1 + 6;
      }
    }
    puVar1 = local_18;
    iVar9 = iVar10;
    if (*(int *)((longlong)param_1 + 0x14) <= iVar10) {
      iVar9 = *(int *)((longlong)param_1 + 0x14);
    }
    iVar13 = 0;
    lVar11 = (longlong)iVar9;
    if (0 < iVar9) {
      puVar12 = local_18 + lVar11 * 6 + -6;
      do {
        iVar7 = *(int *)(param_1 + 2) - iVar13;
        iVar13 = iVar13 + 1;
        lVar8 = (longlong)(iVar7 % *(int *)(param_1 + 1));
        puVar3 = *param_1;
        puVar2 = puVar3 + lVar8 * 6;
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        *puVar12 = *puVar2;
        puVar12[1] = uVar4;
        puVar12[2] = uVar5;
        puVar12[3] = uVar6;
        *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar3 + lVar8 * 6 + 4);
        lVar11 = lVar11 + -1;
        puVar12 = puVar12 + -6;
      } while (lVar11 != 0);
    }
    if (param_1 != &local_18) {
      *(int *)(param_1 + 1) = iVar10;
      if ((iVar10 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar10);
        ::_guard_xfg_dispatch_icall_nop(*param_1,puVar1,(longlong)iVar10 * 0x18);
      }
    }
    *(int *)(param_1 + 2) = iVar9 + -1;
    *(int *)((longlong)param_1 + 0x14) = iVar9;
    if (puVar1 != (undefined4 *)0x0) {
      FMemory::Free(puVar1);
    }
  }
  return;
}



// FUNCTION 142437d80 FUN_142437d80 body=144 status=ok
// SIG undefined FUN_142437d80(void)

void FUN_142437d80(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (uVar2 < 3) {
    uVar2 = 2;
    goto LAB_142437de9;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 3)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 3,0);
        uVar3 = *(uint *)(param_1 + 0x1c);
        uVar2 = (uint)(uVar1 >> 3);
      }
      goto LAB_142437de9;
    }
    if (uVar2 == 0) goto LAB_142437de9;
  }
  uVar2 = uVar3;
LAB_142437de9:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x1c) = uVar2;
    TInlineAllocator<2,FDefaultAllocator>::
    ForElementType<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x18),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 142437e10 FUN_142437e10 body=123 status=ok
// SIG undefined FUN_142437e10(void)

void FUN_142437e10(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (param_2 != 0) {
    if (param_2 < 3) {
      iVar3 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x38,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2;
      lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
      iVar3 = (int)((uVar2 - lVar4 >> 1) + lVar4 >> 5);
      if (iVar3 < (int)param_2) {
        iVar3 = 0x7fffffff;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x7c)) {
    *(int *)(param_1 + 0x7c) = iVar3;
    FUN_142437a90(param_1,*(undefined4 *)(param_1 + 0x78),iVar3,0x38);
  }
  return;
}



// FUNCTION 142437e90 FUN_142437e90 body=3901 status=ok
// SIG undefined FUN_142437e90(void)

void FUN_142437e90(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void **ppvVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  void *pvVar12;
  undefined8 *puVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  int local_res10;
  longlong local_108 [2];
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  undefined8 local_d0;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  int local_a0;
  void *local_98;
  int local_90;
  void *local_88;
  ulonglong local_80;
  void *local_78;
  int local_70;
  void *local_68;
  int local_60;
  void *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_80 = 0x10;
  local_88 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_88,0x10,"WindowsNoEditor",0x10,0x3f);
  local_c0 = *(int *)(param_2 + 1);
  lVar11 = (longlong)local_c0;
  pvVar14 = (void *)*param_2;
  local_48 = 0;
  local_40 = 0;
  local_c8 = (void *)0x0;
  if (local_c0 == 0) {
    local_bc = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_c0,0);
    _guard_xfg_dispatch_icall_nop(local_c8,pvVar14,lVar11 * 2);
  }
  cVar5 = FUN_141678c50(&local_c8,&local_48);
  if (cVar5 != '\0') {
    ppvVar8 = (void **)FUN_141682af0(&local_48,&local_98,2);
    if (&local_c8 != ppvVar8) {
      if (local_c8 != (void *)0x0) {
        FMemory::Free();
      }
      local_c8 = *ppvVar8;
      *ppvVar8 = (void *)0x0;
      local_c0 = *(int *)(ppvVar8 + 1);
      local_bc = *(undefined4 *)((longlong)ppvVar8 + 0xc);
      ppvVar8[1] = (void *)0x0;
    }
    if (local_98 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (*(char *)(param_2 + 8) == '\0') {
    puVar9 = &DAT_1465323c0;
    if (*(char *)((longlong)param_2 + 0x43) != '\0') {
      puVar9 = &DAT_1465323b0;
    }
  }
  else {
    puVar9 = &DAT_1465323a0;
  }
  local_a0 = *(int *)(puVar9 + 1);
  lVar11 = (longlong)local_a0;
  pvVar14 = (void *)*puVar9;
  local_a8 = (void *)0x0;
  if (local_a0 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_a0,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar14,lVar11 * 2);
  }
  iVar7 = local_a0;
  puVar9 = &DAT_146532590;
  local_98 = (void *)0x0;
  if (*(int *)(param_2 + 2) == 0) {
    puVar9 = &DAT_146532580;
  }
  local_90 = *(int *)(puVar9 + 1);
  lVar11 = (longlong)local_90;
  pvVar14 = (void *)*puVar9;
  if (local_90 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
    _guard_xfg_dispatch_icall_nop(local_98,pvVar14,lVar11 * 2);
  }
  iVar6 = local_90;
  puVar13 = &DAT_146532560;
  puVar9 = &DAT_146532560;
  local_78 = (void *)0x0;
  if (*(char *)(param_2 + 0xb) != '\0') {
    puVar9 = &DAT_146532570;
  }
  local_70 = *(int *)(puVar9 + 1);
  lVar11 = (longlong)local_70;
  pvVar14 = (void *)*puVar9;
  if (local_70 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
    _guard_xfg_dispatch_icall_nop(local_78,pvVar14,lVar11 * 2);
  }
  iVar3 = local_70;
  puVar9 = &DAT_146532560;
  local_68 = (void *)0x0;
  if (*(char *)((longlong)param_2 + 0x43) != '\0') {
    puVar9 = &DAT_146532570;
  }
  local_60 = *(int *)(puVar9 + 1);
  lVar11 = (longlong)local_60;
  pvVar14 = (void *)*puVar9;
  if (local_60 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
    _guard_xfg_dispatch_icall_nop(local_68,pvVar14,lVar11 * 2);
  }
  iVar4 = local_60;
  puVar9 = &DAT_146532560;
  local_58 = (void *)0x0;
  if (*(char *)((longlong)param_2 + 0x41) != '\0') {
    puVar9 = &DAT_146532570;
  }
  iVar1 = *(int *)(puVar9 + 1);
  pvVar14 = (void *)*puVar9;
  local_50 = iVar1;
  if (iVar1 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar1,0);
    _guard_xfg_dispatch_icall_nop(local_58,pvVar14,(longlong)iVar1 * 2);
  }
  iVar1 = local_50;
  local_b8 = (void *)0x0;
  if (*(char *)((longlong)param_2 + 0x59) != '\0') {
    puVar13 = &DAT_146532570;
  }
  local_res10 = *(int *)(puVar13 + 1);
  pvVar14 = (void *)*puVar13;
  local_b0 = CONCAT44(local_b0._4_4_,local_res10);
  if (local_res10 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_res10,0);
    _guard_xfg_dispatch_icall_nop(local_b8,pvVar14,(longlong)local_res10 * 2);
    local_res10 = (int)local_b0;
  }
  local_108[1] = 8;
  local_d8 = 0;
  local_d0 = 0;
  local_108[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy(local_108[0],L"RunType",0x10);
  local_f8 = (void *)0x0;
  local_f0 = iVar6;
  if (iVar6 == 0) {
    local_ec = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,iVar6,0);
    _guard_xfg_dispatch_icall_nop(local_f8,local_98,(longlong)iVar6 * 2);
  }
  uVar2 = local_d0;
  lVar11 = (longlong)(int)local_d0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0;
  iVar6 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar6);
  if (local_d0._4_4_ < iVar6) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar2 & 0xffffffff);
  }
  lVar11 = lVar11 * 0x30 + local_d8;
  FString::FString(lVar11,local_108);
  FString::FString(lVar11 + 0x10,&local_f8);
  *(undefined1 *)(lVar11 + 0x28) = local_e0;
  *(undefined4 *)(lVar11 + 0x2c) = local_dc;
  *(undefined8 *)(lVar11 + 0x20) = local_e8;
  if (local_f8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  local_108[0] = 0;
  local_108[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy(local_108[0],L"ProjectName",0x18);
  FString::FString(&local_f8,param_2 + 3);
  uVar2 = local_d0;
  lVar11 = (longlong)(int)local_d0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0;
  iVar6 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar6);
  if (local_d0._4_4_ < iVar6) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar2 & 0xffffffff);
  }
  lVar11 = lVar11 * 0x30 + local_d8;
  FString::FString(lVar11,local_108);
  FString::FString(lVar11 + 0x10,&local_f8);
  *(undefined1 *)(lVar11 + 0x28) = local_e0;
  *(undefined4 *)(lVar11 + 0x2c) = local_dc;
  *(undefined8 *)(lVar11 + 0x20) = local_e8;
  if (local_f8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  local_108[0] = 0;
  local_108[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy(local_108[0],L"Platform",0x12);
  lVar11 = (longlong)(int)local_80;
  local_f8 = (void *)0x0;
  local_f0 = (int)local_80;
  if ((int)local_80 == 0) {
    local_ec = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,local_80 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_f8,local_88,lVar11 * 2);
  }
  uVar2 = local_d0;
  lVar11 = (longlong)(int)local_d0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0;
  iVar6 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar6);
  if (local_d0._4_4_ < iVar6) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar2 & 0xffffffff);
  }
  lVar11 = lVar11 * 0x30 + local_d8;
  FString::FString(lVar11,local_108);
  FString::FString(lVar11 + 0x10,&local_f8);
  *(undefined1 *)(lVar11 + 0x28) = local_e0;
  *(undefined4 *)(lVar11 + 0x2c) = local_dc;
  *(undefined8 *)(lVar11 + 0x20) = local_e8;
  if (local_f8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  local_108[0] = 0;
  local_108[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy(local_108[0],L"SessionId",0x14);
  pvVar14 = local_c8;
  lVar11 = (longlong)local_c0;
  local_f8 = (void *)0x0;
  local_f0 = local_c0;
  if (local_c0 == 0) {
    local_ec = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,local_c0,0);
    _guard_xfg_dispatch_icall_nop(local_f8,pvVar14,lVar11 * 2);
  }
  uVar2 = local_d0;
  lVar11 = (longlong)(int)local_d0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0;
  iVar6 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar6);
  if (local_d0._4_4_ < iVar6) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar2 & 0xffffffff);
  }
  lVar11 = lVar11 * 0x30 + local_d8;
  FString::FString(lVar11,local_108);
  FString::FString(lVar11 + 0x10,&local_f8);
  *(undefined1 *)(lVar11 + 0x28) = local_e0;
  *(undefined4 *)(lVar11 + 0x2c) = local_dc;
  *(undefined8 *)(lVar11 + 0x20) = local_e8;
  if (local_f8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  local_108[0] = 0;
  local_108[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy(local_108[0],L"EngineVersion",0x1c);
  FString::FString(&local_f8,param_2 + 5);
  uVar2 = local_d0;
  lVar11 = (longlong)(int)local_d0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0;
  iVar6 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar6);
  if (local_d0._4_4_ < iVar6) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar2 & 0xffffffff);
  }
  lVar11 = lVar11 * 0x30 + local_d8;
  FString::FString(lVar11,local_108);
  FString::FString(lVar11 + 0x10,&local_f8);
  *(undefined1 *)(lVar11 + 0x28) = local_e0;
  *(undefined4 *)(lVar11 + 0x2c) = local_dc;
  *(undefined8 *)(lVar11 + 0x20) = local_e8;
  if (local_f8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  local_108[0] = 0;
  local_108[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy(local_108[0],L"ShutdownType",0x1a);
  local_f8 = (void *)0x0;
  local_f0 = iVar7;
  if (iVar7 == 0) {
    local_ec = 0;
    pvVar14 = local_a8;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,iVar7,0);
    pvVar14 = local_a8;
    _guard_xfg_dispatch_icall_nop(local_f8,local_a8,(longlong)iVar7 * 2);
  }
  uVar2 = local_d0;
  lVar11 = (longlong)(int)local_d0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0;
  iVar7 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar7);
  if (local_d0._4_4_ < iVar7) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar2 & 0xffffffff);
  }
  lVar11 = lVar11 * 0x30 + local_d8;
  FString::FString(lVar11,local_108);
  FString::FString(lVar11 + 0x10,&local_f8);
  *(undefined1 *)(lVar11 + 0x28) = local_e0;
  *(undefined4 *)(lVar11 + 0x2c) = local_dc;
  *(undefined8 *)(lVar11 + 0x20) = local_e8;
  if (local_f8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  uVar10 = FDateTime::ToIso8601(param_2 + 7,&local_a8);
  local_108[0] = 0;
  local_108[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy(local_108[0],L"Timestamp",0x14);
  FString::FString(&local_f8,uVar10);
  uVar2 = local_d0;
  lVar11 = (longlong)(int)local_d0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0;
  iVar7 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar7);
  if (local_d0._4_4_ < iVar7) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar2 & 0xffffffff);
  }
  lVar11 = lVar11 * 0x30 + local_d8;
  FString::FString(lVar11,local_108);
  FString::FString(lVar11 + 0x10,&local_f8);
  *(undefined1 *)(lVar11 + 0x28) = local_e0;
  *(undefined4 *)(lVar11 + 0x2c) = local_dc;
  *(undefined8 *)(lVar11 + 0x20) = local_e8;
  if (local_f8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  local_108[0] = 0;
  local_108[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy(local_108[0],L"CurrentUserActivity",0x28);
  FString::FString(&local_f8,param_2 + 9);
  uVar2 = local_d0;
  lVar11 = (longlong)(int)local_d0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0;
  iVar7 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar7);
  if (local_d0._4_4_ < iVar7) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar2 & 0xffffffff);
  }
  lVar11 = lVar11 * 0x30 + local_d8;
  FString::FString(lVar11,local_108);
  FString::FString(lVar11 + 0x10,&local_f8);
  *(undefined1 *)(lVar11 + 0x28) = local_e0;
  *(undefined4 *)(lVar11 + 0x2c) = local_dc;
  *(undefined8 *)(lVar11 + 0x20) = local_e8;
  if (local_f8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  local_108[0] = 0;
  local_108[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy(local_108[0],L"IsVanilla",0x14);
  local_f8 = (void *)0x0;
  local_f0 = iVar3;
  if (iVar3 == 0) {
    local_ec = 0;
    pvVar16 = local_78;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,iVar3,0);
    pvVar16 = local_78;
    _guard_xfg_dispatch_icall_nop(local_f8,local_78,(longlong)iVar3 * 2);
  }
  uVar2 = local_d0;
  lVar11 = (longlong)(int)local_d0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0;
  iVar7 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar7);
  if (local_d0._4_4_ < iVar7) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar2 & 0xffffffff);
  }
  lVar11 = lVar11 * 0x30 + local_d8;
  FString::FString(lVar11,local_108);
  FString::FString(lVar11 + 0x10,&local_f8);
  *(undefined1 *)(lVar11 + 0x28) = local_e0;
  *(undefined4 *)(lVar11 + 0x2c) = local_dc;
  *(undefined8 *)(lVar11 + 0x20) = local_e8;
  if (local_f8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  local_108[0] = 0;
  local_108[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy(local_108[0],L"WasDebugged",0x18);
  local_f8 = (void *)0x0;
  local_f0 = iVar4;
  if (iVar4 == 0) {
    local_ec = 0;
    pvVar15 = local_68;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,iVar4,0);
    pvVar15 = local_68;
    _guard_xfg_dispatch_icall_nop(local_f8,local_68,(longlong)iVar4 * 2);
  }
  uVar2 = local_d0;
  lVar11 = (longlong)(int)local_d0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0;
  iVar7 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar7);
  if (local_d0._4_4_ < iVar7) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar2 & 0xffffffff);
  }
  lVar11 = lVar11 * 0x30 + local_d8;
  FString::FString(lVar11,local_108);
  FString::FString(lVar11 + 0x10,&local_f8);
  *(undefined1 *)(lVar11 + 0x28) = local_e0;
  *(undefined4 *)(lVar11 + 0x2c) = local_dc;
  *(undefined8 *)(lVar11 + 0x20) = local_e8;
  if (local_f8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  local_108[0] = 0;
  local_108[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy(local_108[0],L"GPUCrash",0x12);
  local_f8 = (void *)0x0;
  local_f0 = iVar1;
  if (iVar1 == 0) {
    local_ec = 0;
    pvVar17 = local_58;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,iVar1,0);
    pvVar17 = local_58;
    _guard_xfg_dispatch_icall_nop(local_f8,local_58,(longlong)iVar1 * 2);
  }
  uVar2 = local_d0;
  lVar11 = (longlong)(int)local_d0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0;
  iVar7 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar7);
  if (local_d0._4_4_ < iVar7) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar2 & 0xffffffff);
  }
  lVar11 = lVar11 * 0x30 + local_d8;
  FString::FString(lVar11,local_108);
  FString::FString(lVar11 + 0x10,&local_f8);
  *(undefined1 *)(lVar11 + 0x28) = local_e0;
  *(undefined4 *)(lVar11 + 0x2c) = local_dc;
  *(undefined8 *)(lVar11 + 0x20) = local_e8;
  if (local_f8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  local_108[0] = 0;
  local_108[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy(local_108[0],L"Terminating",0x18);
  local_f8 = (void *)0x0;
  local_f0 = local_res10;
  if (local_res10 == 0) {
    local_ec = 0;
    pvVar12 = local_b8;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,local_res10,0);
    pvVar12 = local_b8;
    _guard_xfg_dispatch_icall_nop(local_f8,local_b8,(longlong)local_res10 * 2);
  }
  uVar2 = local_d0;
  lVar11 = (longlong)(int)local_d0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0;
  iVar7 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar7);
  if (local_d0._4_4_ < iVar7) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar2 & 0xffffffff);
  }
  lVar11 = lVar11 * 0x30 + local_d8;
  FString::FString(lVar11,local_108);
  FString::FString(lVar11 + 0x10,&local_f8);
  *(undefined1 *)(lVar11 + 0x28) = local_e0;
  *(undefined4 *)(lVar11 + 0x2c) = local_dc;
  *(undefined8 *)(lVar11 + 0x20) = local_e8;
  if (local_f8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  local_b8 = (void *)0x0;
  local_b0 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"Engine.AbnormalShutdown",0x30);
  (**(code **)(*DAT_146af3408 + 0x58))(DAT_146af3408,&local_b8,&local_d8);
  if (local_b8 != (void *)0x0) {
    FMemory::Free();
  }
  TArray<FAnimPhysShape,FDefaultAllocator>::~TArray<FAnimPhysShape,FDefaultAllocator>(&local_d8);
  if (pvVar12 != (void *)0x0) {
    FMemory::Free(pvVar12);
  }
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  if (pvVar15 != (void *)0x0) {
    FMemory::Free(pvVar15);
  }
  if (pvVar16 != (void *)0x0) {
    FMemory::Free(pvVar16);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if (pvVar14 != (void *)0x0) {
    FMemory::Free(pvVar14);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}



// FUNCTION 142438dd0 FUN_142438dd0 body=636 status=ok
// SIG undefined FUN_142438dd0(void)

void FUN_142438dd0(LARGE_INTEGER param_1,short *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 *_Src;
  void *_Src_00;
  bool bVar15;
  LARGE_INTEGER local_res8;
  ulonglong local_res20;
  undefined8 local_98;
  void *local_90;
  ulonglong local_88;
  undefined4 *local_80;
  ulonglong local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *plStack_58;
  
  bVar15 = false;
  local_res20 = local_res20 & 0xffffffff00000000;
  if (*(longlong *)(param_1.QuadPart + 0x10) != 0) {
    local_res8 = param_1;
    puVar10 = (undefined8 *)operator_new(0x18);
    lVar13 = -1;
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
      _Src_00 = local_90;
    }
    else {
      _Src_00 = (void *)0x0;
      uVar14 = 0;
      local_90 = (void *)0x0;
      local_88 = 0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        do {
          lVar13 = lVar13 + 1;
        } while (param_2[lVar13] != 0);
        uVar12 = (int)lVar13 + 1;
        local_88 = (ulonglong)uVar12;
        uVar14 = uVar12;
        if (0 < (int)uVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
          uVar14 = (uint)local_88;
        }
        _Src_00 = local_90;
        FGenericPlatformString::Memcpy(local_90,param_2,(longlong)(int)uVar12 * 2);
        param_1 = local_res8;
      }
      QueryPerformanceCounter(&local_res8);
      dVar5 = ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430;
      *puVar10 = 0;
      *(uint *)(puVar10 + 1) = uVar14;
      if (uVar14 == 0) {
        *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar10,uVar14,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar10,_Src_00,(longlong)(int)uVar14 * 2);
      }
      puVar10[2] = dVar5;
      bVar15 = true;
    }
    uVar4 = *(undefined8 *)(param_1.QuadPart + 0x10);
    local_80 = (undefined4 *)0x0;
    local_78 = 1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_80,0);
    _Src = local_80;
    lVar13 = (longlong)(int)local_78;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    *local_80 = *param_3;
    local_80[1] = uVar6;
    local_80[2] = uVar7;
    local_80[3] = uVar8;
    local_70 = (void *)0x0;
    local_68 = (int)local_78;
    if ((int)local_78 == 0) {
      local_64 = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_70,local_78 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_70,_Src,lVar13 << 4);
    }
    local_98 = 0;
    local_60 = 0;
    plStack_58 = (longlong *)0x0;
    local_res20 = 0x2bca2875f4373fff;
    uVar11 = FUN_1421d0160();
    FUN_1408494a0(uVar4,puVar10,uVar11,&local_60,&local_70,&local_98,&local_res20);
    plVar9 = plStack_58;
    if (plStack_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_58 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      _Src = local_80;
      _Src_00 = local_90;
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        _Src = local_80;
        _Src_00 = local_90;
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
          _Src = local_80;
          _Src_00 = local_90;
        }
      }
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free();
    }
    FMemory::Free(_Src);
    if ((bVar15) && (_Src_00 != (void *)0x0)) {
      FMemory::Free(_Src_00);
    }
  }
  return;
}



// FUNCTION 142439050 FUN_142439050 body=1060 status=ok
// SIG undefined FUN_142439050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142439050(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  char *pcVar15;
  longlong lVar16;
  char *pcVar17;
  undefined4 *_Src;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined4 *local_68;
  ulonglong local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_38 [2];
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    pcVar10 = (char *)operator_new(0x50);
    pcVar15 = (char *)0x0;
    pcVar17 = pcVar15;
    if (pcVar10 != (char *)0x0) {
      pcVar10[0x10] = '\0';
      pcVar10[0x11] = '\0';
      pcVar10[0x12] = '\0';
      pcVar10[0x13] = '\0';
      pcVar10[0x14] = '\0';
      pcVar10[0x15] = '\0';
      pcVar10[0x16] = '\0';
      pcVar10[0x17] = '\0';
      pcVar10[0x1c] = '\0';
      pcVar10[0x1d] = '\0';
      pcVar10[0x1e] = '\0';
      pcVar10[0x1f] = '\0';
      pcVar10[0x20] = '\0';
      pcVar10[0x21] = '\0';
      pcVar10[0x22] = '\0';
      pcVar10[0x23] = '\0';
      pcVar10[0x20] = '\0';
      pcVar10[0x21] = '\0';
      pcVar10[0x22] = '\0';
      pcVar10[0x23] = '\0';
      pcVar10[0x24] = '\0';
      pcVar10[0x25] = '\0';
      pcVar10[0x26] = '\0';
      pcVar10[0x27] = '\0';
      pcVar10[0x3c] = '\0';
      pcVar10[0x3d] = '\0';
      pcVar10[0x3e] = '\0';
      pcVar10[0x3f] = '\0';
      pcVar10[0x40] = '\0';
      pcVar10[0x41] = '\0';
      pcVar10[0x42] = '\0';
      pcVar10[0x43] = '\0';
      pcVar10[0x44] = '\0';
      pcVar10[0x45] = '\0';
      pcVar10[0x46] = '\0';
      pcVar10[0x47] = '\0';
      pcVar10[0x48] = '\0';
      pcVar10[0x49] = '\0';
      pcVar10[0x4a] = '\0';
      pcVar10[0x4b] = '\0';
      pcVar10[0x4c] = '\0';
      pcVar10[0x4d] = '\0';
      pcVar10[0x4e] = '\0';
      pcVar10[0x4f] = '\0';
      pcVar10[0] = '\0';
      pcVar10[1] = '\0';
      pcVar10[2] = '\0';
      pcVar10[3] = '\0';
      pcVar10[4] = '\0';
      pcVar10[5] = '\0';
      pcVar10[6] = '\0';
      pcVar10[7] = '\0';
      pcVar10[8] = '\0';
      pcVar10[9] = '\0';
      pcVar10[10] = '\0';
      pcVar10[0xb] = '\0';
      pcVar10[0xc] = '\0';
      pcVar10[0xd] = '\0';
      pcVar10[0xe] = '\0';
      pcVar10[0xf] = '\0';
      pcVar10[0x18] = '\0';
      pcVar10[0x19] = '\0';
      pcVar10[0x1a] = '\0';
      pcVar10[0x1b] = '\0';
      pcVar10[0x1c] = '\0';
      pcVar10[0x1d] = '\0';
      pcVar10[0x1e] = '\0';
      pcVar10[0x1f] = '\0';
      pcVar10[0x24] = '\0';
      pcVar10[0x25] = '\0';
      pcVar10[0x26] = '\0';
      pcVar10[0x27] = '\0';
      pcVar10[0x28] = '\0';
      pcVar10[0x29] = '\0';
      pcVar10[0x2a] = '\0';
      pcVar10[0x2b] = '\0';
      pcVar10[0x2c] = '\0';
      pcVar10[0x2d] = '\0';
      pcVar10[0x2e] = '\0';
      pcVar10[0x2f] = '\0';
      pcVar10[0x30] = '\0';
      pcVar10[0x31] = '\0';
      pcVar10[0x32] = '\0';
      pcVar10[0x33] = '\0';
      pcVar10[0x34] = '\0';
      pcVar10[0x35] = '\0';
      pcVar10[0x36] = '\0';
      pcVar10[0x37] = '\0';
      pcVar10[0x38] = '\0';
      pcVar10[0x39] = '\0';
      pcVar10[0x3a] = '\0';
      pcVar10[0x3b] = '\0';
      pcVar10[0x3c] = '\0';
      pcVar10[0x3d] = '\0';
      pcVar10[0x3e] = '\0';
      pcVar10[0x3f] = '\0';
      pcVar10[0x40] = '\0';
      pcVar10[0x41] = '\0';
      pcVar10[0x42] = '\0';
      pcVar10[0x43] = '\0';
      pcVar10[0x44] = '\0';
      pcVar10[0x45] = '\0';
      pcVar10[0x46] = '\0';
      pcVar10[0x47] = '\0';
      pcVar17 = pcVar10;
    }
    uVar8 = FUN_141672aa0();
    *(undefined4 *)(pcVar17 + 0x10) = uVar8;
    uVar5 = uRam00000001468b5cc4;
    uVar4 = uRam00000001468b5cc0;
    uVar8 = uRam00000001468b5cbc;
    *(undefined4 *)(pcVar17 + 0x18) = _DAT_1468b5cb8;
    *(undefined4 *)(pcVar17 + 0x1c) = uVar8;
    *(undefined4 *)(pcVar17 + 0x20) = uVar4;
    *(undefined4 *)(pcVar17 + 0x24) = uVar5;
    uVar5 = uRam00000001468b5d1c;
    uVar4 = uRam00000001468b5d18;
    uVar8 = uRam00000001468b5d14;
    *(undefined4 *)(pcVar17 + 0x38) = _DAT_1468b5d10;
    *(undefined4 *)(pcVar17 + 0x3c) = uVar8;
    *(undefined4 *)(pcVar17 + 0x40) = uVar4;
    *(undefined4 *)(pcVar17 + 0x44) = uVar5;
    if (DAT_146b17150 == 0) {
      if (*(wchar_t **)(pcVar17 + 0x28) != L"Unknown") {
        pcVar17[0x30] = '\0';
        pcVar17[0x31] = '\0';
        pcVar17[0x32] = '\0';
        pcVar17[0x33] = '\0';
        pcVar10 = pcVar15;
        if (*(int *)(pcVar17 + 0x34) != 8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(pcVar17 + 0x28,8);
          pcVar10 = (char *)(ulonglong)*(uint *)(pcVar17 + 0x30);
        }
        iVar9 = (int)pcVar10 + 8;
        *(int *)(pcVar17 + 0x30) = iVar9;
        if (*(int *)(pcVar17 + 0x34) < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(pcVar17 + 0x28);
        }
        builtin_wcsncpy(*(wchar_t **)(pcVar17 + 0x28),L"Unknown",8);
      }
    }
    else if (DAT_1468b616c == '\0') {
      cVar7 = FOutputDevice::CanBeUsedOnAnyThread(DAT_146b17150);
      if (cVar7 == '\0') {
        if (*(undefined **)(pcVar17 + 0x28) != &DAT_145099ce8) {
          pcVar17[0x30] = '\0';
          pcVar17[0x31] = '\0';
          pcVar17[0x32] = '\0';
          pcVar17[0x33] = '\0';
          pcVar10 = pcVar15;
          if (*(int *)(pcVar17 + 0x34) != 5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(pcVar17 + 0x28,5);
            pcVar10 = (char *)(ulonglong)*(uint *)(pcVar17 + 0x30);
          }
          iVar9 = (int)pcVar10 + 5;
          *(int *)(pcVar17 + 0x30) = iVar9;
          if (*(int *)(pcVar17 + 0x34) < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(pcVar17 + 0x28);
          }
          puVar3 = *(undefined8 **)(pcVar17 + 0x28);
          *puVar3 = 0x65006d00610047;
          *(undefined2 *)(puVar3 + 1) = 0;
        }
      }
      else if (*(wchar_t **)(pcVar17 + 0x28) != L"Editor") {
        pcVar17[0x30] = '\0';
        pcVar17[0x31] = '\0';
        pcVar17[0x32] = '\0';
        pcVar17[0x33] = '\0';
        pcVar10 = pcVar15;
        if (*(int *)(pcVar17 + 0x34) != 7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(pcVar17 + 0x28,7);
          pcVar10 = (char *)(ulonglong)*(uint *)(pcVar17 + 0x30);
        }
        iVar9 = (int)pcVar10 + 7;
        *(int *)(pcVar17 + 0x30) = iVar9;
        if (*(int *)(pcVar17 + 0x34) < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(pcVar17 + 0x28);
        }
        puVar3 = *(undefined8 **)(pcVar17 + 0x28);
        *puVar3 = 0x74006900640045;
        *(undefined4 *)(puVar3 + 1) = 0x72006f;
        *(undefined2 *)((longlong)puVar3 + 0xc) = 0;
      }
    }
    else if (*(wchar_t **)(pcVar17 + 0x28) != L"Commandlet") {
      pcVar17[0x30] = '\0';
      pcVar17[0x31] = '\0';
      pcVar17[0x32] = '\0';
      pcVar17[0x33] = '\0';
      pcVar10 = pcVar15;
      if (*(int *)(pcVar17 + 0x34) != 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(pcVar17 + 0x28,0xb);
        pcVar10 = (char *)(ulonglong)*(uint *)(pcVar17 + 0x30);
      }
      iVar9 = (int)pcVar10 + 0xb;
      *(int *)(pcVar17 + 0x30) = iVar9;
      if (*(int *)(pcVar17 + 0x34) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(pcVar17 + 0x28);
      }
      builtin_wcsncpy(*(wchar_t **)(pcVar17 + 0x28),L"Commandlet",0xb);
    }
    if (DAT_146b17150 != 0) {
      puVar11 = *(undefined8 **)(DAT_146b17150 + 0xc18);
      puVar3 = puVar11 + *(int *)(DAT_146b17150 + 0xc20);
      if (puVar11 != puVar3) {
        do {
          pcVar10 = (char *)*puVar11;
          cVar7 = *pcVar10;
          if (cVar7 == '\x01') break;
          if (cVar7 == '\x03') {
            if ((pcVar15 == (char *)0x0) || (*pcVar15 != '\x03')) {
              pcVar15 = pcVar10;
            }
          }
          else if ((cVar7 == '\x02') && (pcVar15 == (char *)0x0)) {
            pcVar15 = pcVar10;
          }
          puVar11 = puVar11 + 1;
          pcVar10 = pcVar15;
        } while (puVar11 != puVar3);
        if ((pcVar10 != (char *)0x0) && (*(longlong *)(pcVar10 + 0x288) != 0)) {
          uVar12 = FUN_1428cc8c0(*(longlong *)(pcVar10 + 0x288),local_38);
          FString::operator=(pcVar17,uVar12);
          if (local_38[0] != 0) {
            FMemory::Free();
          }
          cVar7 = FUN_1428cdc10(*(undefined8 *)(pcVar10 + 0x288));
          pcVar17[0x14] = cVar7;
          *(undefined4 *)(pcVar17 + 0x48) = *(undefined4 *)(*(longlong *)(pcVar10 + 0x288) + 0x790);
        }
      }
    }
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    puVar13 = (undefined4 *)(**(code **)(*(longlong *)*param_2 + 0x40))();
    local_68 = (undefined4 *)0x0;
    local_60 = 1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_68,0);
    _Src = local_68;
    uVar8 = puVar13[1];
    uVar4 = puVar13[2];
    uVar5 = puVar13[3];
    lVar16 = (longlong)(int)local_60;
    *local_68 = *puVar13;
    local_68[1] = uVar8;
    local_68[2] = uVar4;
    local_68[3] = uVar5;
    local_58 = (void *)0x0;
    local_50 = (int)local_60;
    if ((int)local_60 == 0) {
      local_4c = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,local_60 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar16 << 4);
    }
    local_res18[0] = 0;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    local_res8 = 0x2bca2875f4373fff;
    uVar14 = FUN_1421d0260();
    FUN_1408494a0(uVar12,pcVar17,uVar14,&local_48,&local_58,local_res18,&local_res8);
    plVar6 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar16 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      _Src = local_68;
      if ((int)lVar16 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        _Src = local_68;
        if (iVar9 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
          _Src = local_68;
        }
      }
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 142439480 FUN_142439480 body=415 status=ok
// SIG undefined FUN_142439480(void)

void FUN_142439480(longlong param_1,short *param_2,byte param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong local_18;
  ulonglong local_10;
  
  FStringOutputDevice::Serialize();
  FStringOutputDevice::Serialize(param_1,&DAT_145098c2c,param_3,param_4);
  plVar1 = (longlong *)FUN_141672640();
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    piVar2 = (int *)0x0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146af37e0) &&
       (_Init_thread_header(&DAT_146af37e0), DAT_146af37e0 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar1 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"con.MinLogVerbosity");
      if (plVar1 != (longlong *)0x0) {
        piVar2 = (int *)(**(code **)(*plVar1 + 0x38))(plVar1);
      }
      DAT_146af37d8 = piVar2;
      _Init_thread_footer(&DAT_146af37e0);
    }
    if ((DAT_146af37d8 == (int *)0x0) || (*DAT_146af37d8 < (int)(uint)param_3)) {
      local_18 = 0;
      local_10 = 0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (param_2[lVar4] != 0);
        uVar3 = (int)lVar4 + 1;
        local_10 = (ulonglong)uVar3;
        if (0 < (int)uVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
        }
        FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar3 * 2);
      }
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x298))
                (*(longlong **)(param_1 + 0x20),&local_18);
      if (local_18 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142439620 FUN_142439620 body=1070 status=ok
// SIG undefined FUN_142439620(void)

undefined8 FUN_142439620(ulonglong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  wchar_t *pwVar10;
  ulonglong *puVar11;
  undefined8 local_res10;
  char local_res18 [8];
  char local_res20 [8];
  byte local_68;
  byte local_67;
  byte local_66 [6];
  ulonglong *local_60;
  undefined8 local_58;
  undefined2 *local_50;
  undefined8 local_48;
  undefined2 **local_40;
  longlong **local_38;
  
  if ((int)param_2[8] < 0x144) {
    return 0;
  }
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  iVar5 = FArchive::CustomVer(param_2,&DAT_1464b0088);
  if (iVar5 < 0x1f) {
    local_50 = (undefined2 *)0x0;
    local_48 = 0;
    FUN_14158ce90(param_2,&local_50);
    puVar9 = &DAT_143f3eda8;
    if ((int)local_48 != 0) {
      puVar9 = local_50;
    }
    FName::FName(&local_res10,puVar9,1);
    *param_1 = local_res10;
    local_60 = (ulonglong *)0x0;
    local_58 = 0;
    FUN_14158ce90(param_2,&local_60);
    puVar11 = (ulonglong *)&DAT_143f3eda8;
    if ((int)local_58 != 0) {
      puVar11 = local_60;
    }
    FName::FName(&local_res10,puVar11,1);
    param_1[1] = local_res10;
    if (local_60 != (ulonglong *)0x0) {
      FMemory::Free();
    }
    if (local_50 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    (**(code **)(*param_2 + 0x40))(param_2,param_1);
    (**(code **)(*param_2 + 0x40))(param_2,param_1 + 1);
  }
  if ((int)param_2[8] < 0x202) {
    cVar3 = FName::operator==<wchar_t>(param_1,L"asset");
    if (cVar3 == '\0') {
      cVar3 = FName::operator==<wchar_t>(param_1,L"assetclass");
      if (cVar3 == '\0') goto LAB_142439770;
      pwVar10 = L"softclass";
    }
    else {
      pwVar10 = L"softobject";
    }
    FName::FName(&local_res10,pwVar10,1);
    *param_1 = local_res10;
  }
LAB_142439770:
  if ((((*(byte *)((longlong)param_2 + 0x2a) & 8) == 0) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 0x10) != 0)) || ((*(byte *)(param_2 + 5) & 0x40) != 0)
     ) {
    local_res10 = FWeakObjectPtr::Get(param_1 + 2,1);
    (**(code **)(*param_2 + 0x30))(param_2,&local_res10);
    if (((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2a) & 0x10) != 0))
    {
      FWeakObjectPtr::operator=(param_1 + 2,local_res10);
    }
  }
  iVar5 = FArchive::CustomVer(param_2,&DAT_1464b0088);
  if (iVar5 < 0x1a) {
    local_res10 = local_res10 & 0xffffffffffffff00;
    local_res20[0] = '\0';
    local_res18[0] = '\0';
    FArchive::UsingCustomVersion(param_2,&DAT_1464b0038);
    iVar5 = FArchive::CustomVer(param_2,&DAT_1464b0038);
    if (5 < iVar5) {
      (**(code **)(*param_2 + 8))(param_2,&local_res10);
      if ((char)local_res10 != '\0') {
        FUN_14242ab30(param_2,param_1 + 7);
      }
      (**(code **)(*param_2 + 8))(param_2,local_res20);
    }
    (**(code **)(*param_2 + 8))(param_2,local_res18);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if (local_res18[0] == '\0') {
        if (local_res20[0] == '\0') {
          uVar4 = 0;
          if ((char)local_res10 != '\0') {
            uVar4 = 3;
          }
        }
        else {
          uVar4 = 2;
        }
      }
      else {
        uVar4 = 1;
      }
      *(undefined1 *)(param_1 + 0xb) = uVar4;
    }
  }
  else {
    puVar1 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xb,1);
    }
    else {
      *(undefined1 *)(param_1 + 0xb) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    if ((char)param_1[0xb] == '\x03') {
      FUN_14242ab30(param_2,param_1 + 7);
    }
  }
  local_67 = *(byte *)((longlong)param_1 + 0x59) >> 3 & 1;
  local_66[0] = *(byte *)((longlong)param_1 + 0x59) >> 1 & 1;
  (**(code **)(*param_2 + 8))(param_2,local_66);
  (**(code **)(*param_2 + 8))(param_2,&local_67);
  if ((int)param_2[8] < 0x163) {
    if ((*(byte *)(param_2 + 5) & 0x41) == 0x41) {
      cVar3 = FName::operator==<wchar_t>(param_1,L"delegate");
      if (cVar3 == '\0') {
        cVar3 = FName::operator==<wchar_t>(param_1,L"mcdelegate");
        if (cVar3 == '\0') goto LAB_1424399db;
      }
      lVar6 = FWeakObjectPtr::Get(param_1 + 2);
      if (lVar6 != 0) {
        lVar7 = FUN_14171c5d0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          param_1[4] = *(ulonglong *)(lVar6 + 0x18);
          uVar8 = UField::GetOwnerClass(lVar6);
          param_1[3] = uVar8;
          FWeakObjectPtr::operator=(&local_res10,0);
          *(undefined4 *)(param_1 + 2) = (undefined4)local_res10;
          *(undefined4 *)((longlong)param_1 + 0x14) = local_res10._4_4_;
        }
      }
    }
  }
  else {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 3);
    (**(code **)(*param_2 + 0x40))(param_2,param_1 + 4);
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_50,param_2);
    local_40 = &local_50;
    local_38 = (longlong **)&local_40;
    FUN_141661f40(&local_40,param_1 + 5);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_50);
  }
LAB_1424399db:
  local_68 = *(byte *)((longlong)param_1 + 0x59) >> 2 & 1;
  if (0x1c7 < (int)param_2[8]) {
    (**(code **)(*param_2 + 8))(param_2,&local_68);
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) & 0xf1;
    *(byte *)((longlong)param_1 + 0x59) =
         *(byte *)((longlong)param_1 + 0x59) |
         (((local_67 & 1) * '\x02' | local_68 & 1) * '\x02' | local_66[0] & 1) * '\x02';
  }
  if (0xd < *(int *)((longlong)param_2 + 0x44)) {
    (**(code **)(*param_2 + 8))(param_2,(longlong)param_1 + 0x5a);
  }
  return 1;
}



// FUNCTION 142439a50 FUN_142439a50 body=163 status=ok
// SIG undefined FUN_142439a50(void)

void FUN_142439a50(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  puVar5 = *(undefined8 **)(param_1 + 0x40);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FMemory::Malloc(0x1a0,0x10);
    *(undefined8 **)(param_1 + 0x40) = puVar5;
  }
  lVar7 = 3;
  do {
    puVar8 = param_2;
    puVar6 = puVar5;
    uVar4 = puVar8[1];
    *puVar6 = *puVar8;
    puVar6[1] = uVar4;
    uVar4 = puVar8[3];
    puVar6[2] = puVar8[2];
    puVar6[3] = uVar4;
    uVar4 = puVar8[5];
    puVar6[4] = puVar8[4];
    puVar6[5] = uVar4;
    uVar4 = puVar8[7];
    puVar6[6] = puVar8[6];
    puVar6[7] = uVar4;
    uVar4 = puVar8[9];
    puVar6[8] = puVar8[8];
    puVar6[9] = uVar4;
    uVar4 = puVar8[0xb];
    puVar6[10] = puVar8[10];
    puVar6[0xb] = uVar4;
    uVar4 = puVar8[0xd];
    puVar6[0xc] = puVar8[0xc];
    puVar6[0xd] = uVar4;
    uVar4 = puVar8[0xf];
    puVar6[0xe] = puVar8[0xe];
    puVar6[0xf] = uVar4;
    lVar7 = lVar7 + -1;
    puVar5 = puVar6 + 0x10;
    param_2 = puVar8 + 0x10;
  } while (lVar7 != 0);
  uVar1 = *(undefined4 *)((longlong)puVar8 + 0x84);
  uVar2 = *(undefined4 *)(puVar8 + 0x11);
  uVar3 = *(undefined4 *)((longlong)puVar8 + 0x8c);
  *(undefined4 *)(puVar6 + 0x10) = *(undefined4 *)(puVar8 + 0x10);
  *(undefined4 *)((longlong)puVar6 + 0x84) = uVar1;
  *(undefined4 *)(puVar6 + 0x11) = uVar2;
  *(undefined4 *)((longlong)puVar6 + 0x8c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar8 + 0x94);
  uVar2 = *(undefined4 *)(puVar8 + 0x13);
  uVar3 = *(undefined4 *)((longlong)puVar8 + 0x9c);
  *(undefined4 *)(puVar6 + 0x12) = *(undefined4 *)(puVar8 + 0x12);
  *(undefined4 *)((longlong)puVar6 + 0x94) = uVar1;
  *(undefined4 *)(puVar6 + 0x13) = uVar2;
  *(undefined4 *)((longlong)puVar6 + 0x9c) = uVar3;
  FRenderResource::UpdateRHI(param_1);
  return;
}



// FUNCTION 142439b10 SetupMainViewFamily body=95 status=ok
// SIG undefined SetupMainViewFamily(void)

void FDefaultDynamicResolutionState::SetupMainViewFamily(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    puVar2 = (undefined8 *)operator_new(0x18);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      *puVar2 = &PTR_FUN_14509dd88;
      puVar2[1] = uVar1;
      puVar2[2] = param_2;
      *(undefined8 **)(param_2 + 0xa8) = puVar2;
      return;
    }
    *(undefined8 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 142439b70 FUN_142439b70 body=611 status=ok
// SIG undefined FUN_142439b70(void)

void FUN_142439b70(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_142439d27;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_142439d27:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 142439de0 FUN_142439de0 body=295 status=ok
// SIG undefined FUN_142439de0(void)

void FUN_142439de0(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  if ((DAT_146af3408 != 0) && (DAT_146af3410 != 0)) {
    LOCK();
    if (*(int *)(DAT_146af3410 + 8) == 0) {
      *(int *)(DAT_146af3410 + 8) = 0;
    }
    UNLOCK();
  }
  local_20 = (longlong *)0x0;
  DAT_146af3408 = 0;
  uVar6 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&DAT_146af3410,&local_20,param_3,param_4,0);
  plVar5 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  DAT_146af29d5 = 0;
  if ((DAT_146af3418 != 0) && (param_1 != '\0')) {
    FEngineSessionManager::Shutdown();
    local_10 = (longlong *)0x0;
    DAT_146af3418 = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&DAT_146af3420,&local_10,param_3,param_4,uVar6);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142439f10 Shutdown body=729 status=ok
// SIG undefined Shutdown(void)

void FEngineSessionManager::Shutdown(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_28 [2];
  
  FUN_140483870(&DAT_1464aefe0,param_1);
  FUN_140483870(&DAT_1464af388,param_1);
  FUN_140483870(&DAT_1464af370,param_1);
  FUN_140483870(&DAT_1464af3a0,param_1);
  FUN_140483870(&DAT_1464af3b8,param_1);
  FUN_140483870(&DAT_1464af3d0,param_1);
  FUN_140483870(&DAT_1464af688,param_1);
  FUN_140483870(DAT_1469f4590 + 0x750,param_1);
  if (*(char *)(param_1 + 4) != '\0') {
    if (*(char *)(param_1 + 0x50) == '\0') {
      FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,param_1 + 0x70,&DAT_146532440);
      FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,param_1 + 0x70,&DAT_146532450);
      FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,param_1 + 0x70,&DAT_146532470);
      FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,param_1 + 0x70,&DAT_146532480);
      FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,param_1 + 0x70,&DAT_1465324c0);
      FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,param_1 + 0x70,&DAT_1465324d0);
      FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,param_1 + 0x70,&DAT_146532510);
      FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,param_1 + 0x70,&DAT_146532520);
      FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,param_1 + 0x70,&DAT_146532490);
      FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,param_1 + 0x70,&DAT_1465324a0);
      FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,param_1 + 0x70,&DAT_146532530);
      FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,param_1 + 0x70,&DAT_146532540);
      FWindowsPlatformMisc::DeleteStoredValue(&DAT_146532370,param_1 + 0x70,&DAT_1465324b0);
      if (1 < *(int *)(param_1 + 0x98)) {
        plVar1 = (longlong *)(param_1 + 0x90);
        FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar1,&DAT_146532500,&DAT_146532390);
        plVar2 = (longlong *)FDateTime::UtcNow(local_res8);
        lVar3 = *plVar2;
        plVar2 = (longlong *)FDateTime::FDateTime(local_res10,0x7b2,1,1,0,0,0,0);
        lVar3 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar3 - *plVar2),8) +
                (lVar3 - *plVar2);
        FString::PrintfImpl(local_28,L"%lld",(lVar3 >> 0x17) - (lVar3 >> 0x3f));
        FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar1,&DAT_1465324d0,local_28);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (plVar1 != local_28) {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          *plVar1 = 0;
          *(undefined8 *)(param_1 + 0x98) = 0;
        }
      }
    }
    *(undefined2 *)(param_1 + 4) = 0x100;
  }
  return;
}



// FUNCTION 14243a1f0 FUN_14243a1f0 body=3539 status=ok
// SIG undefined FUN_14243a1f0(void)

void FUN_14243a1f0(longlong param_1,undefined8 *param_2,undefined8 *param_3,ulonglong *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  void *pvVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  short *psVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  wchar_t *pwVar9;
  uint uVar10;
  longlong lVar11;
  undefined *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  int iVar16;
  char local_res10 [8];
  DWORD local_res18;
  ulonglong *local_res20;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 in_stack_fffffffffffffef8;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  void *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  int local_7c;
  longlong local_78 [2];
  undefined2 *local_68;
  int local_60;
  
  uVar10 = (uint)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  local_res20 = param_4;
  local_res18 = FWindowsPlatformProcess::GetCurrentProcessId();
  if (*(int *)((undefined8 *)CONCAT44(param_6._4_4_,(uint)param_6) + 1) == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    puVar14 = *(undefined2 **)CONCAT44(param_6._4_4_,(uint)param_6);
  }
  if (*(int *)(param_5 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_5;
  }
  if ((int)param_4[1] == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_4;
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*param_2;
  }
  iVar15 = 0;
  FString::PrintfImpl(&local_88,
                      L"-PID=%u -RunType=%s -ProjectName=\"%s\" -Platform=%s -SessionId=%s -EngineVersion=%s -SuccessfulRtnCode=%d"
                      ,local_res18,puVar13,puVar3,puVar7,puVar8,puVar14,(ulonglong)uVar10 << 0x20);
  puVar17 = &DAT_1468e2360;
  local_res10[0] = '\0';
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"EngineSessionManager",L"AllowWatchdogDetectHangs",local_res10,
             &DAT_1468e2360);
  if (local_res10[0] != '\0') {
    param_6._0_4_ = 0x78;
    puVar17 = &DAT_1468e2360;
    FConfigCacheIni::GetInt
              (DAT_1468b6148,L"EngineSessionManager",L"WatchdogMinimumHangSeconds",&param_6,
               &DAT_1468e2360);
    FString::PrintfImpl(&local_a8,L" -DetectHangs -HangSeconds=%d",(uint)param_6);
    iVar16 = local_80;
    pvVar1 = local_a8;
    if ((int)local_a0 != 0) {
      iVar15 = (int)local_a0 + -1;
    }
    if (iVar15 != 0) {
      lVar11 = (longlong)local_80;
      local_80 = (uint)(local_80 == 0) + iVar15 + local_80;
      if (local_7c < local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar16);
      }
      puVar8 = local_88 + (lVar11 - (ulonglong)(iVar16 != 0));
      _guard_xfg_dispatch_icall_nop(puVar8,pvVar1,(longlong)iVar15 * 2);
      puVar8[iVar15] = 0;
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  cVar2 = FUN_1416514f0();
  if (cVar2 != '\0') {
    lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar11 + 0x38) < DAT_146855ba8) &&
       (_Init_thread_header(&DAT_146855ba8), DAT_146855ba8 == -1)) {
      uVar4 = FCommandLine::Get();
      DAT_146855ba4 = FParse::Param(uVar4,L"UNATTENDED");
      _Init_thread_footer(&DAT_146855ba8);
    }
    if ((DAT_146855ba4 == '\0') && (DAT_1468c21d9 == '\0')) {
      if ((*(int *)(lVar11 + 0x38) < DAT_1468509e4) &&
         (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
        uVar4 = FCommandLine::Get();
        DAT_1468509e0 = FParse::Param(uVar4,L"nullrhi");
        _Init_thread_footer(&DAT_1468509e4);
      }
      if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
        param_6._0_4_ = (uint)param_6 & 0xffffff00;
        puVar17 = &DAT_1468e2360;
        FConfigCacheIni::GetBool
                  (DAT_1468b6148,L"EngineSessionManager",L"AllowWatchdogDialogs",&param_6,
                   &DAT_1468e2360);
        if ((char)param_6 != '\0') {
          local_a8 = (void *)0x0;
          local_a0 = 0xf;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
          pvVar1 = local_a8;
          FGenericPlatformString::Memcpy(local_a8,L" -AllowDialogs",0x1e);
          iVar15 = local_80;
          if (((int)local_a0 != 0) && (iVar16 = (int)local_a0 + -1, iVar16 != 0)) {
            lVar11 = (longlong)local_80;
            local_80 = (uint)(local_80 == 0) + local_80 + iVar16;
            if (local_7c < local_80) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar15);
            }
            puVar8 = local_88 + (lVar11 - (ulonglong)(iVar15 != 0));
            _guard_xfg_dispatch_icall_nop(puVar8,pvVar1,(longlong)iVar16 * 2);
            puVar8[iVar16] = 0;
          }
          if (pvVar1 != (void *)0x0) {
            FMemory::Free(pvVar1);
          }
        }
      }
    }
  }
  local_90 = 0xf;
  local_98 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"UnrealWatchdog",0x1e);
  uVar4 = FUN_1416adc10(local_78,&local_98,3);
  FPaths::ConvertRelativePathToFull(&local_68,uVar4);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"RunType",0x10);
  FString::FString(&local_c8,param_2);
  uVar18 = local_e0;
  lVar11 = (longlong)(int)local_e0;
  local_b8 = 0;
  local_b0 = 0;
  iVar15 = (int)local_e0 + 1;
  local_ac = 0;
  local_e0 = CONCAT44(local_e0._4_4_,iVar15);
  if (local_e0._4_4_ < iVar15) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_e8,uVar18 & 0xffffffff);
  }
  plVar5 = local_e8 + lVar11 * 6;
  FString::FString(plVar5,&local_d8);
  FString::FString(plVar5 + 2,&local_c8);
  *(undefined1 *)(plVar5 + 5) = local_b0;
  *(undefined4 *)((longlong)plVar5 + 0x2c) = local_ac;
  plVar5[4] = local_b8;
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  local_d8 = 0;
  local_d0 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"ProjectName",0x18);
  FString::FString(&local_c8,param_3);
  uVar18 = local_e0;
  lVar11 = (longlong)(int)local_e0;
  local_b8 = 0;
  local_b0 = 0;
  iVar15 = (int)local_e0 + 1;
  local_ac = 0;
  local_e0 = CONCAT44(local_e0._4_4_,iVar15);
  if (local_e0._4_4_ < iVar15) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_e8,uVar18 & 0xffffffff);
  }
  plVar5 = local_e8 + lVar11 * 6;
  FString::FString(plVar5,&local_d8);
  FString::FString(plVar5 + 2,&local_c8);
  *(undefined1 *)(plVar5 + 5) = local_b0;
  *(undefined4 *)((longlong)plVar5 + 0x2c) = local_ac;
  plVar5[4] = local_b8;
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  local_d8 = 0;
  local_d0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"Platform",0x12);
  FString::FString(&local_c8,local_res20);
  uVar18 = local_e0;
  lVar11 = (longlong)(int)local_e0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  iVar15 = (int)local_e0 + 1;
  local_e0 = CONCAT44(local_e0._4_4_,iVar15);
  if (local_e0._4_4_ < iVar15) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_e8,uVar18 & 0xffffffff);
  }
  plVar5 = local_e8 + lVar11 * 6;
  FString::FString(plVar5,&local_d8);
  FString::FString(plVar5 + 2,&local_c8);
  *(undefined1 *)(plVar5 + 5) = local_b0;
  *(undefined4 *)((longlong)plVar5 + 0x2c) = local_ac;
  plVar5[4] = local_b8;
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  local_d8 = 0;
  local_d0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"SessionId",0x14);
  FString::FString(&local_c8,param_5);
  uVar18 = local_e0;
  lVar11 = (longlong)(int)local_e0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  iVar15 = (int)local_e0 + 1;
  local_e0 = CONCAT44(local_e0._4_4_,iVar15);
  if (local_e0._4_4_ < iVar15) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_e8,uVar18 & 0xffffffff);
  }
  plVar5 = local_e8 + lVar11 * 6;
  FString::FString(plVar5,&local_d8);
  FString::FString(plVar5 + 2,&local_c8);
  *(undefined1 *)(plVar5 + 5) = local_b0;
  *(undefined4 *)((longlong)plVar5 + 0x2c) = local_ac;
  plVar5[4] = local_b8;
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  cVar2 = FUN_1416514f0();
  local_d8 = 0;
  local_d0 = 0x10;
  puVar12 = &DAT_14509b8c8;
  if (cVar2 != '\0') {
    puVar12 = &DAT_14509b8c0;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"IsInternalBuild",0x20);
  LexToString<wchar_t>(&local_c8,puVar12);
  uVar18 = local_e0;
  lVar11 = (longlong)(int)local_e0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  iVar15 = (int)local_e0 + 1;
  local_e0 = CONCAT44(local_e0._4_4_,iVar15);
  if (local_e0._4_4_ < iVar15) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_e8,uVar18 & 0xffffffff);
  }
  plVar5 = local_e8 + lVar11 * 6;
  FString::FString(plVar5,&local_d8);
  FString::FString(plVar5 + 2,&local_c8);
  *(undefined1 *)(plVar5 + 5) = local_b0;
  *(undefined4 *)((longlong)plVar5 + 0x2c) = local_ac;
  plVar5[4] = local_b8;
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  cVar2 = FPaths::FileExists(&local_68);
  if (cVar2 == '\0') {
    local_d8 = 0;
    local_d0 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"Outcome",0x10);
    local_c8 = 0;
    local_c0 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    uVar4 = 0x28;
    pwVar9 = L"MissingBinaryFailed";
  }
  else {
    puVar8 = &DAT_143f3eda8;
    if (local_80 != 0) {
      puVar8 = local_88;
    }
    puVar3 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar3 = local_68;
    }
    uVar22 = (ulonglong)puVar14 & 0xffffffff00000000;
    uVar21 = 0;
    uVar20 = (ulonglong)puVar7 & 0xffffffffffffff00;
    uVar18 = CONCAT71((int7)((ulonglong)puVar17 >> 8),1);
    FUN_1416ad4c0(&local_res20,puVar3,puVar8,1,uVar18,uVar20,0,uVar22,0,0,0);
    if (local_res20 != (ulonglong *)0x0) {
      plVar5 = (longlong *)FDateTime::UtcNow(&param_5);
      lVar11 = *plVar5;
      uVar18 = uVar18 & 0xffffffff00000000;
      plVar5 = (longlong *)
               FDateTime::FDateTime
                         (&param_6,0x7b2,1,1,uVar18,uVar20 & 0xffffffff00000000,
                          uVar21 & 0xffffffff00000000,uVar22 & 0xffffffff00000000);
      uVar19 = (undefined4)(uVar18 >> 0x20);
      lVar11 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar11 - *plVar5),8) +
               (lVar11 - *plVar5);
      FString::PrintfImpl(local_78,L"%lld",(lVar11 >> 0x17) - (lVar11 >> 0x3f));
      puVar17 = &DAT_146532560;
      local_a8 = (void *)0x0;
      if (*(char *)(param_1 + 0x53) != '\0') {
        puVar17 = &DAT_146532570;
      }
      iVar15 = *(int *)(puVar17 + 1);
      pvVar1 = (void *)*puVar17;
      local_a0 = CONCAT44(local_a0._4_4_,iVar15);
      if (iVar15 == 0) {
        local_a0 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,iVar15,0);
        _guard_xfg_dispatch_icall_nop(local_a8,pvVar1,(longlong)iVar15 * 2);
      }
      local_d8 = 0;
      local_d0 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
      FGenericPlatformString::Memcpy(local_d8,L"Outcome",0x10);
      local_c8 = 0;
      local_c0 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      FGenericPlatformString::Memcpy(local_c8,L"Succeeded",0x14);
      uVar18 = local_e0;
      lVar11 = (longlong)(int)local_e0;
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 0;
      iVar15 = (int)local_e0 + 1;
      local_e0 = CONCAT44(local_e0._4_4_,iVar15);
      if (local_e0._4_4_ < iVar15) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_e8,uVar18 & 0xffffffff);
      }
      plVar5 = local_e8 + lVar11 * 6;
      FString::FString(plVar5,&local_d8);
      FString::FString(plVar5 + 2,&local_c8);
      *(undefined1 *)(plVar5 + 5) = local_b0;
      *(undefined4 *)((longlong)plVar5 + 0x2c) = local_ac;
      plVar5[4] = local_b8;
      if (local_c8 != 0) {
        FMemory::Free();
      }
      if (local_d8 != 0) {
        FMemory::Free();
      }
      puVar14 = &DAT_143f3eda8;
      if (DAT_146532438 != 0) {
        puVar14 = DAT_146532430;
      }
      puVar8 = &DAT_143f3eda8;
      if (DAT_146532418 != 0) {
        puVar8 = DAT_146532410;
      }
      FString::PrintfImpl(&local_98,L"%s%s/%u",puVar8,puVar14,CONCAT44(uVar19,local_res18));
      plVar5 = (longlong *)(param_1 + 0x90);
      if (plVar5 == &local_98) {
        if (local_98 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        *plVar5 = local_98;
        *(undefined4 *)(param_1 + 0x98) = (undefined4)local_90;
        *(undefined4 *)(param_1 + 0x9c) = local_90._4_4_;
      }
      psVar6 = (short *)FCommandLine::GetOriginalForLogging();
      local_90 = 0;
      local_98 = 0;
      if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (psVar6[lVar11] != 0);
        uVar10 = (int)lVar11 + 1;
        local_90 = (ulonglong)uVar10;
        if (0 < (int)uVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        }
        FGenericPlatformString::Memcpy(local_98,psVar6,(longlong)(int)uVar10 * 2);
      }
      FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar5,&DAT_146532460,&local_98);
      if (local_98 != 0) {
        FMemory::Free();
      }
      FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar5,&DAT_1465324e0,local_78);
      FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar5,&DAT_1465324d0,local_78);
      FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar5,&DAT_146532500,&DAT_146532380);
      FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar5,&DAT_146532530,param_1 + 0x58);
      FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,plVar5,&DAT_146532520,&local_a8);
      if (local_a8 != (void *)0x0) {
        FMemory::Free();
      }
      goto LAB_14243ae47;
    }
    local_d8 = 0;
    local_d0 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"Outcome",0x10);
    local_c8 = 0;
    local_c0 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    uVar4 = 0x22;
    pwVar9 = L"CreateProcFailed";
  }
  FGenericPlatformString::Memcpy(local_c8,pwVar9,uVar4);
  uVar18 = local_e0;
  lVar11 = (longlong)(int)local_e0;
  local_b8 = 0;
  local_ac = 0;
  local_b0 = 0;
  iVar15 = (int)local_e0 + 1;
  local_e0 = CONCAT44(local_e0._4_4_,iVar15);
  if (local_e0._4_4_ < iVar15) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_e8,uVar18 & 0xffffffff);
  }
  plVar5 = local_e8 + lVar11 * 6;
  FString::FString(plVar5,&local_d8);
  FString::FString(plVar5 + 2,&local_c8);
  *(undefined1 *)(plVar5 + 5) = local_b0;
  *(undefined4 *)((longlong)plVar5 + 0x2c) = local_ac;
  plVar5[4] = local_b8;
  local_78[0] = local_d8;
  if (local_c8 != 0) {
    FMemory::Free();
    local_78[0] = local_d8;
  }
LAB_14243ae47:
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  local_a8 = (void *)0x0;
  local_a0 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"Engine.StartWatchdog",0x2a);
  (**(code **)(*DAT_146af3408 + 0x58))(DAT_146af3408,&local_a8,&local_e8);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  plVar5 = local_e8;
  for (iVar15 = (int)local_e0; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (plVar5[2] != 0) {
      FMemory::Free();
    }
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 6;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14243afd0 FUN_14243afd0 body=112 status=ok
// SIG undefined FUN_14243afd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14243afd0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146af37c0) {
    _Init_thread_header(&DAT_146af37c0);
    if (DAT_146af37c0 == -1) {
      _DAT_146af37b0 = FUN_1424f98f0();
      _DAT_146af37b8 = L"HActor";
      _Init_thread_footer(&DAT_146af37c0);
    }
  }
  return &DAT_146af37b0;
}



// FUNCTION 14243b040 FUN_14243b040 body=349 status=ok
// SIG undefined FUN_14243b040(void)

undefined8 FUN_14243b040(longlong *param_1)

{
  wchar_t _C;
  wint_t wVar1;
  wint_t wVar2;
  wint_t *pwVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  puVar5 = &DAT_143f3eda8;
  if ((int)param_1[1] == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_1;
  }
  pwVar3 = &DAT_14509cf70;
  do {
    wVar1 = *(wint_t *)((longlong)(puVar6 + -0xa284e7b8) + (longlong)pwVar3);
    if ((wVar1 == 0) && (*pwVar3 == 0)) goto LAB_14243b17b;
    if (wVar1 != *pwVar3) {
      wVar1 = towlower(wVar1);
      wVar2 = towlower(*pwVar3);
      if (wVar1 != wVar2) break;
    }
    pwVar3 = pwVar3 + 1;
  } while( true );
  if (wVar1 != wVar2) {
    if ((int)param_1[1] == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_1;
    }
    pwVar4 = L"Medium";
    do {
      _C = *(wchar_t *)((longlong)(puVar6 + -0xa284e7c0) + (longlong)pwVar4);
      if ((_C == L'\0') && (*pwVar4 == L'\0')) goto LAB_14243b10b;
      if (_C != *pwVar4) {
        wVar1 = towlower(_C);
        wVar2 = towlower(*pwVar4);
        if (wVar1 != wVar2) goto LAB_14243b101;
      }
      pwVar4 = pwVar4 + 1;
    } while( true );
  }
  goto LAB_14243b17b;
LAB_14243b101:
  if (wVar1 == wVar2) {
LAB_14243b10b:
    if (*param_1 != 0) {
      FMemory::Free();
    }
    return 1;
  }
  if ((int)param_1[1] != 0) {
    puVar5 = (undefined2 *)*param_1;
  }
  pwVar3 = &DAT_14509cf90;
  do {
    wVar1 = *(wint_t *)((longlong)(puVar5 + -0xa284e7c8) + (longlong)pwVar3);
    if ((wVar1 == 0) && (*pwVar3 == 0)) goto LAB_14243b16a;
    if (wVar1 != *pwVar3) {
      wVar1 = towlower(wVar1);
      wVar2 = towlower(*pwVar3);
      if (wVar1 != wVar2) break;
    }
    pwVar3 = pwVar3 + 1;
  } while( true );
  if (wVar1 == wVar2) {
LAB_14243b16a:
    if (*param_1 != 0) {
      FMemory::Free();
    }
    return 0;
  }
LAB_14243b17b:
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return 2;
}



// FUNCTION 14243b1a0 Subscribe body=444 status=ok
// SIG undefined Subscribe(void)

void FMessageEndpoint::Subscribe(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*(char *)(param_1 + 0x40) != '\0') &&
     (plVar3 = *(longlong **)(param_1 + 0x38), plVar3 != (longlong *)0x0)) {
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar8 = iVar6 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (!bVar8) {
      while( true ) {
        LOCK();
        bVar8 = iVar6 == (int)plVar3[1];
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar8) break;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar8 = iVar6 == 0;
        if (bVar8) {
          *(int *)(plVar3 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar8) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        plVar4 = *(longlong **)(param_1 + 0x30);
        if (plVar4 != (longlong *)0x0) {
          puVar7 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x10,local_28);
          local_48 = *puVar7;
          local_40 = (longlong *)puVar7[1];
          if (local_40 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_40 + 1) = (int)local_40[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar4 + 0x38))(plVar4,local_38,&local_48,param_2,param_3);
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_30 + 1;
            lVar5 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar1 = (int *)((longlong)local_30 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_30 + 8))(local_30,1);
              }
            }
          }
          plVar4 = local_40;
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_40 + 1;
            lVar5 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_20 + 1;
            lVar5 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_20)(local_20);
              LOCK();
              piVar1 = (int *)((longlong)local_20 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_20 + 8))(local_20,1);
              }
            }
          }
        }
        LOCK();
        plVar4 = plVar3 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14243b360 Tick body=21 status=ok
// SIG undefined Tick(void)

void FEngineAnalytics::Tick(undefined4 param_1)

{
  if (DAT_146af3418 != 0) {
    FEngineSessionManager::Tick(DAT_146af3418,param_1);
    return;
  }
  return;
}



// FUNCTION 14243b380 Tick body=539 status=ok
// SIG undefined Tick(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FEngineSessionManager::Tick(longlong param_1,float param_2)

{
  void *_Src;
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  param_2 = param_2 + *(float *)(param_1 + 8);
  *(float *)(param_1 + 8) = param_2;
  if (((60.0 < param_2) && (*(char *)(param_1 + 5) == '\0')) &&
     ((*(undefined4 *)(param_1 + 8) = 0, *(char *)(param_1 + 4) != '\0' ||
      (InitializeRecords(param_1,0), *(char *)(param_1 + 4) != '\0')))) {
    if (*(char *)(param_1 + 0x52) != '\0') {
      *(undefined1 *)(param_1 + 0x52) = 0;
      _Src = DAT_146532560;
      local_18 = (void *)0x0;
      iVar3 = (int)_DAT_146532568;
      local_10 = iVar3;
      if (iVar3 == 0) {
        local_c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,_DAT_146532568 & 0xffffffff,0);
        ::_guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)iVar3 * 2);
      }
      FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,param_1 + 0x70,&DAT_146532510,&local_18);
      if ((*(char *)(param_1 + 0x53) == '\0') && (*(char *)(param_1 + 0x52) != '\0')) {
        *(undefined1 *)(param_1 + 0x53) = 1;
        FWindowsPlatformMisc::SetStoredValue
                  (&DAT_146532370,param_1 + 0x70,&DAT_146532520,&DAT_146532570);
        if (1 < *(int *)(param_1 + 0x98)) {
          FWindowsPlatformMisc::SetStoredValue
                    (&DAT_146532370,param_1 + 0x90,&DAT_146532520,&DAT_146532570);
        }
      }
      if (local_18 != (void *)0x0) {
        FMemory::Free();
      }
    }
    plVar1 = (longlong *)FDateTime::UtcNow(local_res8);
    lVar4 = *plVar1;
    *(longlong *)(param_1 + 0x48) = lVar4;
    plVar1 = (longlong *)FDateTime::FDateTime(local_res8,0x7b2,1,1,0,0,0,0);
    lVar4 = lVar4 - *plVar1;
    lVar4 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar4),8) + lVar4;
    FString::PrintfImpl(&local_18,L"%lld",(lVar4 >> 0x17) - (lVar4 >> 0x3f));
    FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,param_1 + 0x70,&DAT_1465324d0,&local_18);
    if (local_18 != (void *)0x0) {
      FMemory::Free();
    }
    if (1 < *(int *)(param_1 + 0x98)) {
      uVar2 = `anonymous_namespace'::TimestampToString(&local_18,*(undefined8 *)(param_1 + 0x48));
      FWindowsPlatformMisc::SetStoredValue(&DAT_146532370,param_1 + 0x90,&DAT_1465324d0,uVar2);
      if (local_18 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14243b5a0 TimestampToString body=120 status=ok
// SIG undefined TimestampToString(void)

undefined8 `anonymous_namespace'::TimestampToString(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)FDateTime::FDateTime(local_res8,0x7b2,1,1,0,0,0,0);
  lVar2 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(param_2 - *plVar1),8) + (param_2 - *plVar1);
  FString::PrintfImpl(param_1,L"%lld",(lVar2 >> 0x17) - (lVar2 >> 0x3f));
  return param_1;
}



// FUNCTION 14243b620 FUN_14243b620 body=390 status=ok
// SIG undefined FUN_14243b620(void)

undefined1 FUN_14243b620(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  char local_10;
  
  (**(code **)(*param_1 + 0x288))(param_1,local_28,param_2,param_3);
  uVar5 = 0;
  if (local_10 == '\0') {
    plVar3 = (longlong *)*param_2;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,1);
    }
    plVar3 = (longlong *)*param_3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,1);
    }
  }
  else if (local_10 == '\x02') {
    plVar3 = (longlong *)*param_2;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,1);
    }
    plVar3 = (longlong *)*param_3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,1);
    }
    UEdGraphPin::BreakAllPinLinks(param_2,1);
  }
  else if (local_10 == '\x03') {
    plVar3 = (longlong *)*param_2;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,1);
    }
    plVar3 = (longlong *)*param_3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,1);
    }
    UEdGraphPin::BreakAllPinLinks(param_3,1);
  }
  else {
    if (local_10 != '\x04') {
      if (local_10 == '\x05') {
        uVar5 = (**(code **)(*param_1 + 0x2a0))(param_1,param_2,param_3);
      }
      goto LAB_14243b754;
    }
    plVar3 = (longlong *)*param_2;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,1);
    }
    plVar3 = (longlong *)*param_3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,1);
    }
    UEdGraphPin::BreakAllPinLinks(param_2,1);
    UEdGraphPin::BreakAllPinLinks(param_3,1);
  }
  FUN_142436300(param_2,param_3);
  uVar5 = 1;
LAB_14243b754:
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 14243b7e0 FUN_14243b7e0 body=209 status=ok
// SIG undefined FUN_14243b7e0(void)

undefined8 *
FUN_14243b7e0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar3 + 1,param_3);
    plVar3[2] = param_4;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
  }
  *param_2 = 0;
  if (plVar3 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar5;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 14243b8c0 FUN_14243b8c0 body=635 status=ok
// SIG undefined FUN_14243b8c0(void)

int * FUN_14243b8c0(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  void *_Dst;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  bool bVar14;
  int local_res8 [2];
  
  iVar11 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x48);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  uVar6 = ((undefined8 *)*param_3)[1];
  _Src = (undefined8 *)(*param_1 + (longlong)iVar9 * 0x48);
  plVar10 = (longlong *)param_3[1];
  *_Src = *(undefined8 *)*param_3;
  _Src[1] = uVar6;
  lVar3 = *plVar10;
  _Src[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  lVar3 = plVar10[1];
  _Src[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  lVar3 = plVar10[3];
  bVar14 = false;
  _Src[4] = plVar10[2];
  _Src[5] = lVar3;
  uVar4 = *(undefined4 *)((longlong)plVar10 + 0x24);
  lVar3 = plVar10[5];
  uVar5 = *(undefined4 *)((longlong)plVar10 + 0x2c);
  *(int *)(_Src + 6) = (int)plVar10[4];
  *(undefined4 *)((longlong)_Src + 0x34) = uVar4;
  *(int *)(_Src + 7) = (int)lVar3;
  *(undefined4 *)((longlong)_Src + 0x3c) = uVar5;
  *(undefined4 *)(_Src + 8) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar14 = local_res8[0] != -1;
    if (bVar14) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x48);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>((longlong)_Dst + 0x18);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>((longlong)_Dst + 0x10);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x40);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14243bb1b;
    }
  }
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar8 = (uVar12 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar9 = 0x20;
    if (uVar8 != 0) {
      iVar9 = 0x1f - iVar11;
    }
    uVar8 = (uVar12 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar8 == 0) {
      cVar13 = '\0';
    }
    else {
      cVar13 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    iVar11 = *param_2;
    uVar12 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar12 = (int)param_1[9] - 1U & uVar12;
    *(uint *)((longlong)_Src + 0x44) = uVar12;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 8) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14243bb1b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 14243bb40 FUN_14243bb40 body=94 status=ok
// SIG undefined FUN_14243bb40(void)

void FUN_14243bb40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14171bfe0();
  FUN_141799c90(uVar1,param_1,param_2,param_3,param_4,param_5,1);
  return;
}



// FUNCTION 14243bba0 NewIntrusiveReferenceController<SWindow> body=77 status=ok
// SIG undefined NewIntrusiveReferenceController<SWindow>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SWindow>(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x600);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144d503d8;
    if (puVar1 != (undefined8 *)0xfffffffffffffff0) {
      FUN_1417f4890();
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14243bbf0 FUN_14243bbf0 body=146 status=ok
// SIG undefined FUN_14243bbf0(void)

void FUN_14243bbf0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = FUN_142a2f930();
  FUN_1417985e0(uVar1,param_1,param_2,param_3,0,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 14243bc90 FUN_14243bc90 body=1449 status=ok
// SIG undefined FUN_14243bc90(void)

int FUN_14243bc90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  int local_res8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  
  iVar4 = *(int *)(param_1 + 0x88);
  lVar11 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  lVar13 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar13 = param_1;
  }
  local_res8 = 0;
  cVar8 = FUN_1424401a0(param_2,lVar13);
  bVar18 = cVar8 == '\0';
  lVar13 = 0;
  iVar16 = 0;
  do {
    lVar13 = lVar13 + 1;
    iVar17 = iVar16 + 1;
    if (lVar13 < lVar11) {
      lVar15 = lVar13 * 0x10;
      do {
        lVar10 = *(longlong *)(param_1 + 0x80);
        if (*(longlong *)(param_1 + 0x80) == 0) {
          lVar10 = param_1;
        }
        plVar12 = (longlong *)(lVar10 + lVar15);
        lVar10 = *plVar12;
        if (lVar10 == 0) {
LAB_14243c0d2:
          bVar9 = false;
        }
        else {
          if ((*(byte *)(lVar10 + 0x30) & 6) != 0) {
            if ((*(char *)(lVar10 + 0x14) == '\x01') &&
               (lVar6 = *param_2, *(char *)(lVar6 + 0xf8) != '\0')) {
              FUN_142441120(lVar6,lVar10,(int)param_2[1],param_2[2],param_2[3],lVar6 + 0xec);
              lVar10 = *plVar12;
            }
            if (*(char *)(lVar10 + 0x80) == '\x02') {
              fVar22 = *(float *)(lVar10 + 0x90);
              lVar10 = param_2[3];
              if (0.0001 <= fVar22) {
                fVar19 = *(float *)(lVar10 + 400);
                fVar3 = *(float *)(lVar10 + 0x18c);
                fVar20 = fVar3 * fVar3 + fVar19 * fVar19;
                if (fVar20 <= fVar22 * fVar22) {
                  local_a8 = *(undefined8 *)(lVar10 + 0x18c);
                  local_a0 = *(undefined4 *)(lVar10 + 0x194);
                }
                else {
                  auVar23 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
                  fVar21 = auVar23._0_4_;
                  fVar21 = fVar21 + fVar21 * (0.5 - fVar20 * 0.5 * fVar21 * fVar21);
                  local_a0 = *(undefined4 *)(lVar10 + 0x194);
                  fVar22 = (fVar21 + fVar21 * (0.5 - fVar20 * 0.5 * fVar21 * fVar21)) * fVar22;
                  local_a8 = CONCAT44(fVar19 * fVar22,fVar3 * fVar22);
                }
              }
              else {
                local_a0 = *(undefined4 *)(lVar10 + 0x194);
                local_a8 = 0;
              }
              *(undefined8 *)(lVar10 + 0x18c) = local_a8;
              *(undefined4 *)(lVar10 + 0x194) = local_a0;
              fVar22 = *(float *)(param_2[3] + 0x194);
              fVar19 = *(float *)(*plVar12 + 0x90);
              if (fVar22 <= *(float *)(*plVar12 + 0x90)) {
                fVar19 = fVar22;
              }
              *(float *)(param_2[3] + 0x194) = fVar19;
              lVar10 = *param_2;
              if (*(char *)(lVar10 + 0xf8) != '\0') {
                fVar22 = *(float *)(*plVar12 + 0x90);
                if (0.0001 <= fVar22) {
                  fVar19 = *(float *)(lVar10 + 0xf0);
                  fVar3 = *(float *)(lVar10 + 0xec);
                  fVar20 = fVar3 * fVar3 + fVar19 * fVar19;
                  if (fVar20 <= fVar22 * fVar22) {
                    local_9c = *(undefined8 *)(lVar10 + 0xec);
                    local_94 = *(undefined4 *)(lVar10 + 0xf4);
                  }
                  else {
                    auVar23 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
                    fVar21 = auVar23._0_4_;
                    fVar21 = fVar21 + fVar21 * (0.5 - fVar20 * 0.5 * fVar21 * fVar21);
                    local_94 = *(undefined4 *)(lVar10 + 0xf4);
                    fVar22 = (fVar21 + fVar21 * (0.5 - fVar20 * 0.5 * fVar21 * fVar21)) * fVar22;
                    local_9c = CONCAT44(fVar19 * fVar22,fVar3 * fVar22);
                  }
                }
                else {
                  local_94 = *(undefined4 *)(lVar10 + 0xf4);
                  local_9c = 0;
                }
                *(undefined8 *)(lVar10 + 0xec) = local_9c;
                *(undefined4 *)(lVar10 + 0xf4) = local_94;
                fVar22 = *(float *)(*param_2 + 0xf4);
                fVar19 = *(float *)(*plVar12 + 0x90);
                if (fVar22 <= *(float *)(*plVar12 + 0x90)) {
                  fVar19 = fVar22;
                }
                *(float *)(*param_2 + 0xf4) = fVar19;
              }
            }
            else if (*(char *)(lVar10 + 0x80) == '\x01') {
              lVar6 = param_2[3];
              *(undefined8 *)(lVar6 + 0x18c) = *(undefined8 *)(lVar10 + 0x84);
              *(undefined4 *)(lVar6 + 0x194) = *(undefined4 *)(lVar10 + 0x8c);
              lVar10 = *param_2;
              if (*(char *)(lVar10 + 0xf8) != '\0') {
                uVar5 = *(undefined4 *)(*plVar12 + 0x8c);
                *(undefined8 *)(lVar10 + 0xec) = *(undefined8 *)(*plVar12 + 0x84);
                *(undefined4 *)(lVar10 + 0xf4) = uVar5;
              }
            }
            goto LAB_14243c0d2;
          }
          bVar9 = true;
        }
        if (bVar18 != bVar9) break;
        iVar17 = iVar17 + 1;
        lVar13 = lVar13 + 1;
        lVar15 = lVar15 + 0x10;
      } while (lVar13 < lVar11);
    }
    iVar14 = iVar17 - iVar16;
    if (bVar18 == false) {
      lVar15 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar15 = param_1;
      }
      if (iVar14 != 0) {
        plVar12 = (longlong *)(lVar15 + 8 + (longlong)iVar16 * 0x10);
        do {
          plVar7 = (longlong *)*plVar12;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar7 + 1;
            lVar15 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              iVar16 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          plVar12 = plVar12 + 2;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    else {
      if (local_res8 != iVar16) {
        lVar15 = *(longlong *)(param_1 + 0x80);
        if (*(longlong *)(param_1 + 0x80) == 0) {
          lVar15 = param_1;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)local_res8 * 0x10 + lVar15),
                   (void *)((longlong)iVar16 * 0x10 + lVar15),(longlong)iVar14 << 4);
      }
      local_res8 = local_res8 + iVar14;
    }
    bVar18 = (bool)(bVar18 ^ 1);
    iVar16 = iVar17;
    if (lVar11 <= lVar13) {
      *(int *)(param_1 + 0x88) = local_res8;
      return iVar4 - local_res8;
    }
  } while( true );
}



// FUNCTION 14243c240 FUN_14243c240 body=476 status=ok
// SIG undefined FUN_14243c240(void)

int FUN_14243c240(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  int local_res8;
  
  iVar3 = (int)param_1[0x11];
  lVar8 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar9 = 0;
  local_res8 = 0;
  plVar7 = (longlong *)param_1[0x10];
  if ((longlong *)param_1[0x10] == (longlong *)0x0) {
    plVar7 = param_1;
  }
  if ((*plVar7 == 0) || (*(short *)(*plVar7 + 0x12) == 0)) {
    bVar14 = 0;
  }
  else {
    bVar14 = 1;
  }
  lVar11 = 0;
  iVar12 = 0;
  do {
    lVar11 = lVar11 + 1;
    iVar13 = iVar12 + 1;
    if (lVar11 < lVar8) {
      plVar7 = (longlong *)param_1[0x10];
      if ((longlong *)param_1[0x10] == (longlong *)0x0) {
        plVar7 = param_1;
      }
      lVar5 = lVar11 * 0x10;
      do {
        if ((*(longlong *)(lVar5 + (longlong)plVar7) == 0) ||
           (*(short *)(*(longlong *)(lVar5 + (longlong)plVar7) + 0x12) == 0)) {
          bVar6 = 0;
        }
        else {
          bVar6 = 1;
        }
        if (bVar14 != bVar6) break;
        iVar13 = iVar13 + 1;
        lVar11 = lVar11 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar11 < lVar8);
    }
    iVar10 = iVar13 - iVar12;
    if (bVar14 == 0) {
      plVar7 = (longlong *)param_1[0x10];
      if ((longlong *)param_1[0x10] == (longlong *)0x0) {
        plVar7 = param_1;
      }
      if (iVar10 != 0) {
        plVar7 = plVar7 + (longlong)iVar12 * 2 + 1;
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
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4);
              }
            }
          }
          plVar7 = plVar7 + 2;
          iVar10 = iVar10 + -1;
          iVar9 = local_res8;
        } while (iVar10 != 0);
      }
    }
    else {
      if (iVar9 != iVar12) {
        plVar7 = (longlong *)param_1[0x10];
        if ((longlong *)param_1[0x10] == (longlong *)0x0) {
          plVar7 = param_1;
        }
        _guard_xfg_dispatch_icall_nop
                  (plVar7 + (longlong)iVar9 * 2,plVar7 + (longlong)iVar12 * 2,(longlong)iVar10 << 4)
        ;
      }
      local_res8 = iVar9 + iVar10;
      iVar9 = local_res8;
    }
    bVar14 = bVar14 ^ 1;
    iVar12 = iVar13;
    if (lVar8 <= lVar11) {
      *(int *)(param_1 + 0x11) = iVar9;
      return iVar3 - iVar9;
    }
  } while( true );
}



// FUNCTION 14243c420 FUN_14243c420 body=441 status=ok
// SIG undefined FUN_14243c420(void)

int FUN_14243c420(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  int local_res8;
  
  iVar3 = (int)param_1[9];
  lVar8 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar9 = 0;
  local_res8 = 0;
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1;
  }
  if ((*plVar7 == 0) || ((*(byte *)(*plVar7 + 0x30) & 6) != 0)) {
    bVar14 = 0;
  }
  else {
    bVar14 = 1;
  }
  lVar11 = 0;
  iVar12 = 0;
  do {
    lVar11 = lVar11 + 1;
    iVar13 = iVar12 + 1;
    if (lVar11 < lVar8) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1;
      }
      lVar5 = lVar11 * 0x10;
      do {
        if ((*(longlong *)(lVar5 + (longlong)plVar7) == 0) ||
           ((*(byte *)(*(longlong *)(lVar5 + (longlong)plVar7) + 0x30) & 6) != 0)) {
          bVar6 = 0;
        }
        else {
          bVar6 = 1;
        }
        if (bVar14 != bVar6) break;
        iVar13 = iVar13 + 1;
        lVar11 = lVar11 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar11 < lVar8);
    }
    iVar10 = iVar13 - iVar12;
    if (bVar14 == 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1;
      }
      if (iVar10 != 0) {
        plVar7 = plVar7 + (longlong)iVar12 * 2 + 1;
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
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4);
              }
            }
          }
          plVar7 = plVar7 + 2;
          iVar10 = iVar10 + -1;
          iVar9 = local_res8;
        } while (iVar10 != 0);
      }
    }
    else {
      if (iVar9 != iVar12) {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = param_1;
        }
        _guard_xfg_dispatch_icall_nop
                  (plVar7 + (longlong)iVar9 * 2,plVar7 + (longlong)iVar12 * 2,(longlong)iVar10 << 4)
        ;
      }
      local_res8 = iVar9 + iVar10;
      iVar9 = local_res8;
    }
    bVar14 = bVar14 ^ 1;
    iVar12 = iVar13;
    if (lVar8 <= lVar11) {
      *(int *)(param_1 + 9) = iVar9;
      return iVar3 - iVar9;
    }
  } while( true );
}



// FUNCTION 14243c5e0 FUN_14243c5e0 body=1047 status=ok
// SIG undefined FUN_14243c5e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14243c5e0(longlong *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong *local_68;
  longlong local_60;
  longlong lStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar15 = (ulonglong)(int)param_2;
  if (0 < (int)param_2) {
    iVar12 = 1;
    lVar13 = (uVar15 - 1 >> 1) + 1;
    plVar16 = param_1;
    do {
      if ((iVar12 < (int)param_2) &&
         (((plVar16[2] == 0 || (*plVar16 == 0)) ||
          (*(ushort *)(*plVar16 + 0x10) < *(ushort *)(plVar16[2] + 0x10))))) {
        plVar5 = param_1 + (longlong)iVar12 * 2;
        plVar8 = param_1 + (longlong)(iVar12 + -1) * 2;
        if (plVar8 != plVar5) {
          local_60 = *plVar8;
          lStack_58 = plVar8[1];
          uVar18 = *(undefined4 *)((longlong)plVar5 + 4);
          lVar14 = plVar5[1];
          uVar19 = *(undefined4 *)((longlong)plVar5 + 0xc);
          *(int *)plVar8 = (int)*plVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar18;
          *(int *)(plVar8 + 1) = (int)lVar14;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar19;
          *plVar5 = local_60;
          plVar5[1] = lStack_58;
        }
      }
      iVar12 = iVar12 + 2;
      plVar16 = plVar16 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  local_ac = 2;
  uVar6 = uVar15;
  local_a0 = param_2;
  local_70 = uVar15;
  local_68 = param_1;
  if (2 < (int)param_2) {
    do {
      iVar12 = local_ac * 2;
      local_b0 = 0;
      iVar11 = local_ac * 2;
      local_88 = 0;
      lVar13 = (longlong)local_ac * 2;
      lVar14 = (longlong)local_ac << 5;
      plVar16 = local_68;
      local_a4 = iVar12;
      local_9c = iVar11;
      local_80 = lVar14;
      local_78 = lVar13;
      local_b8 = local_ac;
      do {
        local_b4 = (int)uVar6 - local_b0;
        if (iVar12 <= local_b4) {
          local_b4 = iVar12;
        }
        iVar17 = 0;
        if (0 < local_b8) {
          do {
            if (local_b4 <= local_b8) break;
            lVar13 = 0;
            if (local_b8 - iVar17 != 0) {
              uVar15 = (longlong)(local_b8 - iVar17);
              do {
                uVar6 = uVar15 >> 1;
                if ((plVar16[(longlong)local_b8 * 2] == 0) ||
                   (plVar16[((longlong)iVar17 + uVar6 + lVar13) * 2] == 0)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = *(ushort *)(plVar16[((longlong)iVar17 + uVar6 + lVar13) * 2] + 0x10) <
                          *(ushort *)(plVar16[(longlong)local_b8 * 2] + 0x10);
                }
                if (!bVar3) {
                  lVar13 = uVar6 + lVar13 + (ulonglong)((uint)uVar15 & 1);
                }
                uVar15 = uVar6;
              } while (uVar6 != 0);
            }
            iVar17 = iVar17 + (int)lVar13;
            if (local_b8 <= iVar17) break;
            uVar6 = 0;
            uVar15 = (ulonglong)(local_b4 - local_b8);
            if (local_b4 - local_b8 != 0) {
              do {
                uVar9 = uVar15 >> 1;
                if ((plVar16[((longlong)local_b8 + uVar9 + uVar6) * 2] == 0) ||
                   (plVar16[(longlong)iVar17 * 2] == 0)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = *(ushort *)(plVar16[(longlong)iVar17 * 2] + 0x10) <
                          *(ushort *)(plVar16[((longlong)local_b8 + uVar9 + uVar6) * 2] + 0x10);
                }
                if (bVar3) {
                  uVar6 = (ulonglong)((uint)uVar15 & 1) + uVar9 + uVar6;
                }
                uVar15 = uVar9;
              } while (uVar9 != 0);
            }
            iVar12 = (int)uVar6;
            if (iVar12 != 0) {
              uVar6 = uVar6 & 0xffffffff;
              iVar10 = (iVar12 - iVar17) + local_b8;
              iVar11 = iVar10;
              do {
                iVar4 = (int)uVar6;
                uVar7 = iVar11 % iVar4;
                uVar6 = (ulonglong)uVar7;
                iVar11 = iVar4;
              } while (uVar7 != 0);
              uVar6 = 0;
              uVar15 = (longlong)iVar10 / (longlong)iVar4 & 0xffffffff;
              local_a8 = (uint)((longlong)iVar10 / (longlong)iVar4);
              if (0 < iVar4) {
                lVar13 = 0;
                do {
                  plVar5 = plVar16 + (iVar17 + lVar13) * 2;
                  local_98 = *plVar5;
                  uStack_90 = (longlong *)plVar5[1];
                  plVar5[1] = 0;
                  *plVar5 = 0;
                  iVar11 = (int)uVar6;
                  if (0 < (int)uVar15) {
                    local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
                    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
                    do {
                      uVar9 = (longlong)((int)uVar6 + iVar12) % (longlong)iVar10;
                      uVar6 = uVar9 & 0xffffffff;
                      plVar5 = plVar16 + (longlong)((int)uVar9 + iVar17) * 2;
                      uVar18 = (undefined4)local_98;
                      uVar19 = local_98._4_4_;
                      uVar20 = (undefined4)uStack_90;
                      uVar21 = uStack_90._4_4_;
                      if (plVar5 != &local_98) {
                        uVar18 = (undefined4)*plVar5;
                        uVar19 = *(undefined4 *)((longlong)plVar5 + 4);
                        uVar20 = (undefined4)plVar5[1];
                        uVar21 = *(undefined4 *)((longlong)plVar5 + 0xc);
                        *(undefined4 *)plVar5 = (undefined4)local_98;
                        *(undefined4 *)((longlong)plVar5 + 4) = local_98._4_4_;
                        *(undefined4 *)(plVar5 + 1) = (undefined4)uStack_90;
                        *(undefined4 *)((longlong)plVar5 + 0xc) = uStack_90._4_4_;
                        local_50 = uVar18;
                        uStack_4c = uVar19;
                        uStack_48 = uVar20;
                        uStack_44 = uVar21;
                      }
                      uVar15 = uVar15 - 1;
                      local_98._0_4_ = uVar18;
                      local_98._4_4_ = uVar19;
                      uStack_90._0_4_ = uVar20;
                      uStack_90._4_4_ = uVar21;
                    } while (uVar15 != 0);
                    local_98 = CONCAT44(uVar19,uVar18);
                    uStack_90 = (longlong *)CONCAT44(uVar21,uVar20);
                  }
                  plVar5 = uStack_90;
                  if (uStack_90 != (longlong *)0x0) {
                    LOCK();
                    plVar8 = uStack_90 + 1;
                    lVar14 = *plVar8;
                    *(int *)plVar8 = (int)*plVar8 + -1;
                    UNLOCK();
                    if ((int)lVar14 == 1) {
                      (**(code **)*uStack_90)(uStack_90);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar5 + 0xc);
                      iVar2 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar2 == 1) {
                        (**(code **)(*uStack_90 + 8))();
                      }
                    }
                  }
                  uVar15 = (ulonglong)local_a8;
                  uVar7 = iVar11 + 1;
                  uVar6 = (ulonglong)uVar7;
                  lVar13 = lVar13 + 1;
                } while ((int)uVar7 < iVar4);
              }
            }
            local_b8 = local_b8 + iVar12;
            iVar17 = iVar17 + 1 + iVar12;
          } while (iVar17 < local_b8);
          uVar6 = (ulonglong)local_a0;
          uVar15 = local_70;
          lVar13 = local_78;
          lVar14 = local_80;
          iVar12 = local_a4;
          iVar11 = local_9c;
          local_b8 = local_ac;
        }
        local_b0 = local_b0 + iVar11;
        local_88 = local_88 + lVar13;
        plVar16 = (longlong *)((longlong)plVar16 + lVar14);
      } while (local_88 < (longlong)uVar15);
      local_ac = iVar12;
    } while (iVar12 < (int)uVar6);
  }
  return;
}



// FUNCTION 14243ca00 FUN_14243ca00 body=472 status=ok
// SIG undefined FUN_14243ca00(void)

undefined8 * FUN_14243ca00(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"Sprite");
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Sprite",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar1,0,param_2);
  FUN_1424de090(param_1,param_2);
  *param_1 = &PTR__scalar_deleting_destructor__1450aa0a0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  FText::FText(param_1 + 0x99);
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0x7f;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffffd | 4;
  uVar2 = AGenericItem::GetPrivateStaticClass();
  param_1[0x92] = uVar2;
  uVar2 = FUN_1429e18b0();
  param_1[0x8f] = uVar2;
  uVar2 = AFGRailroadVehicle::GetPrivateStaticClass();
  param_1[0x90] = uVar2;
  uVar2 = AGeometryCollectionActor::GetPrivateStaticClass();
  param_1[0x8e] = uVar2;
  uVar2 = FUN_142950fd0();
  param_1[0x91] = uVar2;
  uVar2 = FUN_142948cb0();
  param_1[0x8d] = uVar2;
  uVar2 = AGenericItem::GetPrivateStaticClass();
  param_1[0x93] = uVar2;
  uVar2 = FUN_1429e18b0();
  param_1[0x94] = uVar2;
  uVar2 = AGeometryCollectionActor::GetPrivateStaticClass();
  param_1[0x95] = uVar2;
  *param_1 = &PTR_FUN_1450abf50;
  *(undefined1 *)(param_1 + 0x9f) = 1;
  param_1[0xa0] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  *(uint *)(param_1 + 0xa1) = *(uint *)(param_1 + 0xa1) & 0xfffffffe;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[0xa0] = DAT_146af3918;
  uVar2 = UEngineMessage::GetPrivateStaticClass();
  param_1[0xa4] = uVar2;
  uVar2 = ARemnantQuest::GetPrivateStaticClass();
  param_1[0x8e] = uVar2;
  *(undefined4 *)(param_1 + 0xa3) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa7) = 0x43960000;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0x10;
  return param_1;
}



// FUNCTION 14243cbe0 FUN_14243cbe0 body=352 status=ok
// SIG undefined FUN_14243cbe0(void)

undefined8 * FUN_14243cbe0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"Sprite");
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Sprite",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar1,0,param_2);
  FUN_1424de090(param_1,param_2);
  *param_1 = &PTR__scalar_deleting_destructor__1450aa0a0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  FText::FText(param_1 + 0x99);
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0x7f;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffffd | 4;
  uVar2 = AGenericItem::GetPrivateStaticClass();
  param_1[0x92] = uVar2;
  uVar2 = FUN_1429e18b0();
  param_1[0x8f] = uVar2;
  uVar2 = AFGRailroadVehicle::GetPrivateStaticClass();
  param_1[0x90] = uVar2;
  uVar2 = AGeometryCollectionActor::GetPrivateStaticClass();
  param_1[0x8e] = uVar2;
  uVar2 = FUN_142950fd0();
  param_1[0x91] = uVar2;
  uVar2 = FUN_142948cb0();
  param_1[0x8d] = uVar2;
  uVar2 = AGenericItem::GetPrivateStaticClass();
  param_1[0x93] = uVar2;
  uVar2 = FUN_1429e18b0();
  param_1[0x94] = uVar2;
  uVar2 = AGeometryCollectionActor::GetPrivateStaticClass();
  param_1[0x95] = uVar2;
  *(undefined1 *)(param_1 + 0x9f) = 1;
  return param_1;
}



// FUNCTION 14243cd40 FUN_14243cd40 body=211 status=ok
// SIG undefined FUN_14243cd40(void)

undefined8 * FUN_14243cd40(undefined8 *param_1)

{
  FUN_1424de090();
  *param_1 = &PTR__scalar_deleting_destructor__1450ac950;
  param_1[0x9b] = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0;
  *(undefined2 *)(param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x42280000;
  *(undefined4 *)(param_1 + 0x92) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0x41100000;
  *(undefined4 *)(param_1 + 0x93) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x94) = 0x3e000000;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0x3c87fcb9;
  *(undefined4 *)(param_1 + 0x95) = 0x3cb5dcc6;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x3c87fcb9;
  *(undefined4 *)(param_1 + 0x96) = 10000;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 10;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x99) = 0xbe800000;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x4d4) = 0x100;
  return param_1;
}



// FUNCTION 14243ce20 FUN_14243ce20 body=403 status=ok
// SIG undefined FUN_14243ce20(void)

longlong FUN_14243ce20(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_20;
  undefined4 local_18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = DAT_1469eb218;
  lVar4 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  plVar2 = (longlong *)(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9eec;
  local_20 = 0;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x79) = 1;
  if (((&local_20 != plVar2) && (*(int *)(param_1 + 0x88) != 0)) &&
     (plVar3 = (longlong *)*plVar2, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    if (*plVar2 != 0) {
      lVar4 = FMemory::Realloc(*plVar2,0,0);
      *plVar2 = lVar4;
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 14243cfc0 FFontImportOptionsData body=264 status=ok
// SIG undefined FFontImportOptionsData(void)

undefined8 * FFontImportOptionsData::FFontImportOptionsData(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
  FGenericPlatformString::Convert<char,wchar_t>(*param_1,6,"Arial",6,0x3f);
  *(undefined4 *)(param_1 + 2) = 0x41800000;
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xffffffe1 | 1;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(uint *)((longlong)param_1 + 0x74) = *(uint *)((longlong)param_1 + 0x74) & 0xfffffffe;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffffffe;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0xf) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x100;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined8 *)((longlong)param_1 + 0x84) = 1;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  return param_1;
}


