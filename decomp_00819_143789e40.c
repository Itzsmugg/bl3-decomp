// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143789e40 FUN_143789e40 body=284 status=ok
// SIG undefined FUN_143789e40(void)

undefined4 * FUN_143789e40(longlong param_1,undefined4 *param_2,undefined8 param_3,float *param_4)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 local_res8 [8];
  
  uVar4 = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)param_4;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  fVar2 = param_4[7];
  fVar3 = param_4[3];
  fVar10 = param_4[4] - *param_4;
  fVar14 = param_4[5] - param_4[1];
  fVar16 = param_4[6] - param_4[2];
  bVar8 = 1;
  *(float *)(param_1 + 0x40) = fVar10;
  *(float *)(param_1 + 0x44) = fVar14;
  *(float *)(param_1 + 0x48) = fVar16;
  *(float *)(param_1 + 0x4c) = fVar2 - fVar3;
  fVar11 = fVar10 * fVar10;
  fVar15 = fVar14 * fVar14;
  auVar12._8_4_ = fVar16 * fVar16;
  auVar12._4_4_ = auVar12._8_4_;
  auVar12._0_4_ = auVar12._8_4_;
  auVar12._12_4_ = auVar12._8_4_;
  fVar19 = fVar15 + fVar11 + auVar12._8_4_;
  fVar20 = fVar15 + fVar11 + auVar12._8_4_;
  fVar21 = fVar15 + fVar11 + auVar12._8_4_;
  fVar22 = fVar15 + fVar11 + auVar12._8_4_;
  auVar13._4_4_ = fVar20;
  auVar13._0_4_ = fVar19;
  auVar13._8_4_ = fVar21;
  auVar13._12_4_ = fVar22;
  auVar13 = rsqrtps(auVar12,auVar13);
  fVar11 = auVar13._0_4_;
  fVar15 = auVar13._4_4_;
  fVar17 = auVar13._8_4_;
  fVar18 = auVar13._12_4_;
  *(float *)(param_1 + 0x40) =
       (float)(~-(uint)(fVar19 <= 0.0) & (uint)((3.0 - fVar19 * fVar11 * fVar11) * fVar11 * 0.5)) *
       fVar10;
  *(float *)(param_1 + 0x44) =
       (float)(~-(uint)(fVar20 <= 0.0) & (uint)((3.0 - fVar20 * fVar15 * fVar15) * fVar15 * 0.5)) *
       fVar14;
  *(float *)(param_1 + 0x48) =
       (float)(~-(uint)(fVar21 <= 0.0) & (uint)((3.0 - fVar21 * fVar17 * fVar17) * fVar17 * 0.5)) *
       fVar16;
  *(float *)(param_1 + 0x4c) =
       (float)(~-(uint)(fVar22 <= 0.0) & (uint)((3.0 - fVar22 * fVar18 * fVar18) * fVar18 * 0.5)) *
       (fVar2 - fVar3);
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x18));
      puVar6 = (undefined4 *)(**(code **)(*plVar1 + 0x80))(plVar1,local_res8,param_3,param_4);
      iVar9 = iVar9 + 1;
      lVar7 = lVar7 + 8;
      bVar8 = bVar8 & ((byte)((uint)*puVar6 >> 0x1f) ^ 1);
    } while (iVar9 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar5 = 0x80040200;
  if (bVar8 != 0) {
    uVar5 = 0;
  }
  *param_2 = uVar5;
  return param_2;
}



// FUNCTION 143789f60 FUN_143789f60 body=184 status=ok
// SIG undefined FUN_143789f60(void)

undefined4 *
FUN_143789f60(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  bVar5 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x58))(plVar1,local_res8,param_3,param_4);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar5 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14378a020 FUN_14378a020 body=184 status=ok
// SIG undefined FUN_14378a020(void)

undefined4 *
FUN_14378a020(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  bVar5 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x60))(plVar1,local_res8,param_3,param_4);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar5 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14378a0e0 FUN_14378a0e0 body=184 status=ok
// SIG undefined FUN_14378a0e0(void)

undefined4 *
FUN_14378a0e0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  bVar5 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x70))(plVar1,local_res8,param_3,param_4);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0x80040200;
  if (bVar5 != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14378a1a0 FUN_14378a1a0 body=42 status=ok
// SIG undefined FUN_14378a1a0(void)

undefined1 FUN_14378a1a0(longlong param_1)

{
  char *pcVar1;
  undefined1 local_res8 [32];
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    pcVar1 = (char *)FUN_143763ef0(*(longlong *)(param_1 + 0x10),local_res8);
    if (*pcVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14378a1d0 FUN_14378a1d0 body=222 status=ok
// SIG undefined FUN_14378a1d0(void)

undefined4 * FUN_14378a1d0(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  uVar1 = local_38;
  if ((local_38 & 1) != 0) {
    FUN_1437329e0(local_38 & 0xfffffffffffffffe);
  }
  local_28 = local_40;
  local_30 = local_48;
  local_20 = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  iVar2 = FUN_14378d4f0(&local_30,param_3);
  if (iVar2 < 0) {
    *param_2 = 0x80040200;
  }
  else {
    (**(code **)(*param_1 + 0x58))(param_1,param_3);
    *param_2 = 0;
  }
  if ((uVar1 & 1) != 0) {
    FUN_143733a60(uVar1 & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14378a2c0 FUN_14378a2c0 body=120 status=ok
// SIG undefined FUN_14378a2c0(void)

undefined8 FUN_14378a2c0(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x38);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_14378a340(lVar2);
    }
    if (lVar2 != *param_1) {
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 14378a340 FUN_14378a340 body=143 status=ok
// SIG undefined FUN_14378a340(void)

undefined8 * FUN_14378a340(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkProcessFactory::vftable;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_14370d870(lVar2,2000);
    param_1[6] = uVar3;
    return param_1;
  }
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 14378a3d0 FUN_14378a3d0 body=243 status=ok
// SIG undefined FUN_14378a3d0(void)

void FUN_14378a3d0(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPVOID pvVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  *param_1 = hkProcessFactory::vftable;
  FUN_14378a560();
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[6];
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    FWindowsCriticalSection::~FWindowsCriticalSection(lpCriticalSection);
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar1 + 0x58),lpCriticalSection,0x28);
  }
  uVar2 = FUN_143703a50();
  lVar4 = (longlong)(*(int *)(param_1 + 5) + -1);
  if (-1 < *(int *)(param_1 + 5) + -1) {
    puVar3 = (ulonglong *)(param_1[4] + 0x30 + lVar4 * 0x38);
    do {
      if ((*puVar3 & 1) != 0) {
        FUN_143733a60(*puVar3 & 0xfffffffffffffffe);
      }
      FUN_143716650(puVar3 + -6);
      puVar3 = puVar3 + -7;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar2,param_1[4],0x38,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14378a4d0 FUN_14378a4d0 body=139 status=ok
// SIG undefined FUN_14378a4d0(void)

longlong FUN_14378a4d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14378a3d0();
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



// FUNCTION 14378a560 FUN_14378a560 body=66 status=ok
// SIG undefined FUN_14378a560(void)

void FUN_14378a560(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = (longlong)*(int *)(param_1 + 0x28) * 0x38 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x38) {
    FUN_1437428e0(lVar1 + 0x20,3,1);
  }
  return;
}



// FUNCTION 14378a5b0 FUN_14378a5b0 body=154 status=ok
// SIG undefined FUN_14378a5b0(void)

longlong FUN_14378a5b0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x28) < 1) {
    return 0;
  }
  lVar4 = 0;
  do {
    uVar2 = *(ulonglong *)(lVar4 + *(longlong *)(param_1 + 0x20)) & 0xfffffffffffffffe;
    if (uVar2 == 0) {
      iVar1 = -(uint)(param_2 != 0);
LAB_14378a605:
      if (iVar1 == 0) {
        return (longlong)iVar3 * 0x38 + *(longlong *)(param_1 + 0x20);
      }
    }
    else if (param_2 != 0) {
      iVar1 = hkString::strCmp(uVar2,param_2);
      goto LAB_14378a605;
    }
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + 0x38;
    if (*(int *)(param_1 + 0x28) <= iVar3) {
      return 0;
    }
  } while( true );
}



// FUNCTION 14378a650 FUN_14378a650 body=277 status=ok
// SIG undefined FUN_14378a650(void)

/* WARNING: Removing unreachable block (ram,0x00014378a6f3) */

undefined4 FUN_14378a650(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x30));
  lVar3 = FUN_14378a5b0(param_1,param_2,param_3,0);
  if (lVar3 == 0) {
    uVar4 = FUN_143703a50();
    iVar1 = *(int *)(param_1 + 0x28);
    uVar5 = *(uint *)(param_1 + 0x2c) & 0x3fffffff;
    iVar7 = iVar1 + 1;
    if ((int)uVar5 < iVar7) {
      iVar2 = uVar5 * 2;
      if (iVar7 < iVar2) {
        iVar7 = iVar2;
      }
      FUN_14370c310(uVar4,param_1 + 0x20,iVar7,0x38);
    }
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(param_1 + 0x28) * 0x38 + *(longlong *)(param_1 + 0x20));
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    lVar3 = (longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x20);
    FUN_1437166c0(lVar3,param_2);
    *(undefined8 *)(lVar3 + 8) = param_3;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    if ((*(byte *)(lVar3 + 0x30) & 1) != 0) {
      FUN_143733a60(*(ulonglong *)(lVar3 + 0x30) & 0xfffffffffffffffe);
    }
    *(undefined8 *)(lVar3 + 0x30) = 0;
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x30));
  return *(undefined4 *)(lVar3 + 0x18);
}



// FUNCTION 14378a770 FUN_14378a770 body=578 status=ok
// SIG undefined FUN_14378a770(void)

undefined4 *
FUN_14378a770(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined1 (*param_4) [12],
             undefined4 param_5,undefined4 param_6)

{
  undefined1 (*pauVar1) [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  int local_res20 [2];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  
  uVar8 = *(undefined4 *)(*param_4 + 8);
  pauVar1 = (undefined1 (*) [12])(param_4[1] + 4);
  uVar2 = *(undefined4 *)*pauVar1;
  uVar3 = *(undefined4 *)param_4[2];
  uVar4 = *(undefined4 *)(param_4[1] + 8);
  uVar5 = *(undefined4 *)*param_4;
  uVar6 = *(undefined4 *)(*param_4 + 4);
  local_238._12_4_ = 0;
  local_238._0_12_ = *param_4;
  local_218._12_4_ = 0;
  local_218._0_12_ = *param_4;
  local_1f8._12_4_ = 0;
  local_1f8._0_12_ = *param_4;
  local_1d8._12_4_ = 0;
  local_1d8._0_12_ = *pauVar1;
  local_1b8._12_4_ = 0;
  local_1b8._0_12_ = *pauVar1;
  local_198._12_4_ = 0;
  local_198._0_12_ = *pauVar1;
  local_188._4_4_ = uVar6;
  local_188._0_4_ = uVar2;
  local_188._8_4_ = uVar3;
  local_188._12_4_ = 0;
  local_e8._4_4_ = uVar6;
  local_e8._0_4_ = uVar2;
  local_e8._8_4_ = uVar3;
  local_e8._12_4_ = 0;
  local_d8._4_4_ = uVar6;
  local_d8._0_4_ = uVar2;
  local_d8._8_4_ = uVar3;
  local_d8._12_4_ = 0;
  local_228._4_4_ = uVar4;
  local_228._0_4_ = uVar5;
  local_228._8_4_ = uVar8;
  local_228._12_4_ = 0;
  local_208._8_4_ = uVar3;
  local_208._0_8_ = *(undefined8 *)*param_4;
  local_208._12_4_ = 0;
  local_1e8._4_4_ = uVar6;
  local_1e8._0_4_ = uVar2;
  local_1e8._8_4_ = uVar8;
  local_1e8._12_4_ = 0;
  local_1c8._8_4_ = uVar8;
  local_1c8._0_8_ = *(undefined8 *)*pauVar1;
  local_1c8._12_4_ = 0;
  local_1a8._4_4_ = uVar4;
  local_1a8._0_4_ = uVar5;
  local_1a8._8_4_ = uVar3;
  local_1a8._12_4_ = 0;
  local_178._4_4_ = uVar4;
  local_178._0_4_ = uVar5;
  local_178._8_4_ = uVar8;
  local_178._12_4_ = 0;
  local_168._8_4_ = uVar8;
  local_168._0_8_ = *(undefined8 *)*pauVar1;
  local_168._12_4_ = 0;
  local_158._4_4_ = uVar4;
  local_158._0_4_ = uVar5;
  local_158._8_4_ = uVar8;
  local_158._12_4_ = 0;
  local_148._4_4_ = uVar4;
  local_148._0_4_ = uVar5;
  local_148._8_4_ = uVar3;
  local_148._12_4_ = 0;
  local_138._8_4_ = uVar8;
  local_138._0_8_ = *(undefined8 *)*pauVar1;
  local_138._12_4_ = 0;
  local_128._4_4_ = uVar6;
  local_128._0_4_ = uVar2;
  local_128._8_4_ = uVar8;
  local_128._12_4_ = 0;
  local_118._4_4_ = uVar4;
  local_118._0_4_ = uVar5;
  local_118._8_4_ = uVar3;
  local_118._12_4_ = 0;
  local_108._8_4_ = uVar3;
  local_108._0_8_ = *(undefined8 *)*param_4;
  local_108._12_4_ = 0;
  local_f8._8_4_ = uVar3;
  local_f8._0_8_ = *(undefined8 *)*param_4;
  local_f8._12_4_ = 0;
  local_c8._4_4_ = uVar6;
  local_c8._0_4_ = uVar2;
  local_c8._8_4_ = uVar8;
  local_c8._12_4_ = 0;
  puVar9 = local_238;
  bVar7 = true;
  lVar10 = 0xc;
  do {
    (**(code **)(*param_1 + 0xa0))(param_1,local_res20,param_3,puVar9,puVar9 + 0x10,param_5,param_6)
    ;
    puVar9 = puVar9 + 0x20;
    bVar7 = (bool)(bVar7 & -1 < local_res20[0]);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  uVar8 = 0x80040200;
  if (bVar7) {
    uVar8 = 0;
  }
  *param_2 = uVar8;
  return param_2;
}



// FUNCTION 14378a9c0 FUN_14378a9c0 body=516 status=ok
// SIG undefined FUN_14378a9c0(void)

undefined4 *
FUN_14378a9c0(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             uint param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 local_a8 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
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
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  local_a8 = ZEXT816(0);
  FUN_1437137a0(&local_98,param_4,local_a8);
  local_a8 = ZEXT416(param_5);
  FUN_1437137a0(&local_88,param_4,local_a8);
  local_a8 = ZEXT416(param_5) << 0x20;
  FUN_1437137a0(&local_78,param_4,local_a8);
  local_a8 = ZEXT416(param_5) << 0x40;
  FUN_1437137a0(&local_68,param_4,local_a8);
  uVar2 = param_7;
  local_58 = local_88 - local_98;
  fStack_54 = fStack_84 - fStack_94;
  fStack_50 = fStack_80 - fStack_90;
  fStack_4c = fStack_7c - fStack_8c;
  puVar1 = (undefined4 *)CONCAT44(param_6._4_4_,(int)param_6);
  local_38 = local_68 - local_98;
  fStack_34 = fStack_64 - fStack_94;
  fStack_30 = fStack_60 - fStack_90;
  fStack_2c = fStack_5c - fStack_8c;
  local_48 = local_78 - local_98;
  fStack_44 = fStack_74 - fStack_94;
  fStack_40 = fStack_70 - fStack_90;
  fStack_3c = fStack_6c - fStack_8c;
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0xffff0000;
  }
  else {
    uVar3 = *puVar1;
  }
  (**(code **)(*param_1 + 0xa8))(param_1,&param_6,param_3,&local_98,&local_58,uVar3,1,0,param_7);
  bVar4 = -1 < (int)param_6;
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0xff008000;
  }
  else {
    uVar3 = *puVar1;
  }
  (**(code **)(*param_1 + 0xa8))(param_1,&param_6,param_3,&local_98,&local_48,uVar3,1,0,uVar2);
  bVar5 = -1 < (int)param_6;
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0xff0000ff;
  }
  else {
    uVar3 = *puVar1;
  }
  (**(code **)(*param_1 + 0xa8))(param_1,&param_6,param_3,&local_98,&local_38,uVar3,1,0,uVar2);
  uVar2 = 0x80040200;
  if ((bVar4 && bVar5) && -1 < (int)param_6) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14378abd0 FUN_14378abd0 body=685 status=ok
// SIG undefined FUN_14378abd0(void)

undefined4 *
FUN_14378abd0(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int local_res8 [2];
  int local_res10 [2];
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4 [3];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  FUN_143df96d0(param_4,local_a8);
  (**(code **)(*param_1 + 0xa0))(param_1,local_b4,param_3,local_a8,local_98,param_5,param_6);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_b8,param_3,local_98,local_88,param_5,param_6);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_bc,param_3,local_88,local_78,param_5,param_6);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_c0,param_3,local_78,local_a8,param_5,param_6);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_c4,param_3,local_68,local_58,param_5,param_6);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_c8,param_3,local_58,local_48,param_5,param_6);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_cc,param_3,local_48,local_38,param_5,param_6);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_d0,param_3,local_38,local_68,param_5,param_6);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_d4,param_3,local_a8,local_68,param_5,param_6);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_d8,param_3,local_98,local_58,param_5,param_6);
  (**(code **)(*param_1 + 0xa0))(param_1,local_res10,param_3,local_88,local_48,param_5,param_6);
  (**(code **)(*param_1 + 0xa0))(param_1,local_res8,param_3,local_78,local_38,param_5,param_6);
  uVar1 = 0x80040200;
  if (-1 < local_b4[0] &&
      ((((((((((-1 < local_res8[0] && -1 < local_res10[0]) && -1 < local_d8) && -1 < local_d4) &&
            -1 < local_d0) && -1 < local_cc) && -1 < local_c8) && -1 < local_c4) && -1 < local_c0)
       && -1 < local_bc) && -1 < local_b8)) {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 14378ae80 FUN_14378ae80 body=342 status=ok
// SIG undefined FUN_14378ae80(void)

undefined4 *
FUN_14378ae80(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar3 = param_8;
  iVar2 = param_6;
  iVar5 = 0;
  bVar1 = true;
  if (0 < param_6) {
    do {
      puVar4 = (undefined4 *)((longlong)(*(int *)((longlong)param_4 + 0xc) * iVar5) + *param_4);
      if (*(int *)((longlong)param_4 + 0xc) < 0x10) {
        uStack_2c = 0;
      }
      else {
        uStack_2c = puVar4[3];
      }
      local_38 = *puVar4;
      uStack_34 = puVar4[1];
      uStack_30 = puVar4[2];
      puVar4 = (undefined4 *)((longlong)(*(int *)((longlong)param_5 + 0xc) * iVar5) + *param_5);
      if (*(int *)((longlong)param_5 + 0xc) < 0x10) {
        uStack_3c = 0;
      }
      else {
        uStack_3c = puVar4[3];
      }
      local_48 = *puVar4;
      uStack_44 = puVar4[1];
      uStack_40 = puVar4[2];
      (**(code **)(*param_1 + 0xa0))(param_1,&param_6,param_3,&local_38,&local_48,param_7,uVar3);
      iVar5 = iVar5 + 1;
      bVar1 = (bool)(bVar1 & -1 < param_6);
    } while (iVar5 < iVar2);
    if (!bVar1) {
      *param_2 = 0x80040200;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14378afe0 FUN_14378afe0 body=915 status=ok
// SIG undefined FUN_14378afe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_14378afe0(longlong *param_1,undefined4 *param_2,undefined8 param_3,float *param_4,float *param_5
             ,float *param_6,uint param_7,undefined4 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 in_EAX;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
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
  undefined1 in_XMM5 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 unaff_XMM6 [16];
  
  fVar17 = (param_6[1] - param_4[1]) * (*param_5 - *param_4) -
           (param_5[1] - param_4[1]) * (*param_6 - *param_4);
  fVar18 = (param_6[2] - param_4[2]) * (param_5[1] - param_4[1]) -
           (param_5[2] - param_4[2]) * (param_6[1] - param_4[1]);
  fVar19 = (*param_6 - *param_4) * (param_5[2] - param_4[2]) -
           (*param_5 - *param_4) * (param_6[2] - param_4[2]);
  fVar9 = fVar18 * fVar18;
  fVar12 = fVar19 * fVar19;
  auVar10._8_4_ = fVar17 * fVar17;
  auVar10._4_4_ = auVar10._8_4_;
  auVar10._0_4_ = auVar10._8_4_;
  auVar10._12_4_ = auVar10._8_4_;
  fVar13 = fVar12 + fVar9 + auVar10._8_4_;
  fVar14 = fVar12 + fVar9 + auVar10._8_4_;
  fVar15 = fVar12 + fVar9 + auVar10._8_4_;
  fVar9 = fVar12 + fVar9 + auVar10._8_4_;
  auVar11._4_4_ = fVar14;
  auVar11._0_4_ = fVar13;
  auVar11._8_4_ = fVar15;
  auVar11._12_4_ = fVar9;
  auVar11 = rsqrtps(auVar10,auVar11);
  uVar6 = -(uint)(0.0 - fVar13 < 0.0);
  uVar7 = -(uint)(0.0 - fVar14 < 0.0);
  uVar8 = -(uint)(0.0 - fVar15 < 0.0);
  auVar1._4_4_ = uVar7;
  auVar1._0_4_ = uVar6;
  auVar1._8_4_ = uVar8;
  auVar1._12_4_ = -(uint)(0.0 - fVar9 < 0.0);
  iVar4 = movmskps(in_EAX,auVar1);
  fVar9 = auVar11._0_4_;
  fVar12 = auVar11._4_4_;
  fVar16 = auVar11._8_4_;
  fVar9 = (float)((uint)((float)(~-(uint)(fVar13 <= 0.0) &
                                (uint)((3.0 - fVar13 * fVar9 * fVar9) * fVar9 * 0.5)) * fVar18) &
                  uVar6 | ~uVar6 & (uint)fVar18);
  fVar12 = (float)((uint)((float)(~-(uint)(fVar14 <= 0.0) &
                                 (uint)((3.0 - fVar14 * fVar12 * fVar12) * fVar12 * 0.5)) * fVar19)
                   & uVar7 | ~uVar7 & (uint)fVar19);
  fVar16 = (float)((uint)((float)(~-(uint)(fVar15 <= 0.0) &
                                 (uint)((3.0 - fVar15 * fVar16 * fVar16) * fVar16 * 0.5)) * fVar17)
                   & uVar8 | ~uVar8 & (uint)fVar17);
  if (iVar4 == 0) {
    *param_2 = 0x80040200;
  }
  else {
    fVar15 = (float)(param_7 >> 0x10 & 0xff) * 0.003921569;
    fVar14 = (float)(param_7 >> 8 & 0xff) * 0.003921569;
    auVar2._8_4_ = 0x40a80000;
    auVar2._0_8_ = 0x40a8000040a80000;
    auVar2._12_4_ = 0x40a80000;
    auVar11 = rsqrtps(in_XMM5,auVar2);
    fVar17 = auVar11._0_4_;
    fVar18 = auVar11._4_4_;
    fVar19 = auVar11._8_4_;
    auVar3._8_4_ = 0x41600000;
    auVar3._0_8_ = 0x4160000041600000;
    auVar3._12_4_ = 0x41600000;
    auVar11 = rsqrtps(unaff_XMM6,auVar3);
    fVar13 = (float)(param_7 & 0xff) * 0.003921569;
    fVar21 = auVar11._0_4_;
    fVar22 = auVar11._4_4_;
    fVar23 = auVar11._8_4_;
    fVar17 = (3.0 - fVar17 * 5.25 * fVar17) * fVar17 * 0.5 * 0.5 * 0.9 * fVar9;
    fVar18 = (3.0 - fVar18 * 5.25 * fVar18) * fVar18 * 0.5 * 2.0 * 0.9 * fVar12;
    fVar19 = (3.0 - fVar19 * 5.25 * fVar19) * fVar19 * 0.5 * 1.0 * 0.9 * fVar16;
    fVar9 = (3.0 - fVar21 * 14.0 * fVar21) * fVar21 * 0.5 * -3.0 * 0.9 * fVar9;
    fVar12 = (3.0 - fVar22 * 14.0 * fVar22) * fVar22 * 0.5 * -2.0 * 0.9 * fVar12;
    fVar16 = (3.0 - fVar23 * 14.0 * fVar23) * fVar23 * 0.5 * -1.0 * 0.9 * fVar16;
    auVar20._0_4_ =
         ((fVar18 + fVar17 + fVar19) * _DAT_1467f07e0 + _DAT_1467f07e0) * fVar15 * 0.75 +
         ((fVar12 + fVar9 + fVar16) * _DAT_1467f07e0 + _DAT_1467f07e0) * fVar15 * 0.0 +
         fVar15 * 0.05;
    auVar20._4_4_ =
         ((fVar18 + fVar17 + fVar19) * fRam00000001467f07e4 + fRam00000001467f07e4) * fVar14 * 0.75
         + ((fVar12 + fVar9 + fVar16) * fRam00000001467f07e4 + fRam00000001467f07e4) * fVar14 * 0.05
         + fVar14 * 0.05;
    auVar20._8_4_ =
         ((fVar18 + fVar17 + fVar19) * fRam00000001467f07e8 + fRam00000001467f07e8) * fVar13 * 0.75
         + ((fVar12 + fVar9 + fVar16) * fRam00000001467f07e8 + fRam00000001467f07e8) * fVar13 * 0.08
         + fVar13 * 0.05;
    auVar20._12_4_ =
         ((fVar18 + fVar17 + fVar19) * fRam00000001467f07ec + fRam00000001467f07ec) * 0.0 +
         ((fVar12 + fVar9 + fVar16) * fRam00000001467f07ec + fRam00000001467f07ec) * 0.0 + 0.0;
    auVar11 = maxps(auVar20,_DAT_1467f06e0);
    auVar11 = minps(auVar11,_DAT_1467f06f0);
    uVar5 = FUN_14375fd30(auVar11._0_4_,param_2,auVar11._8_4_,(float)(param_7 >> 0x18) * 0.003921569
                         );
    (**(code **)(*param_1 + 0xb0))(param_1,param_2,param_3,param_4,param_5,param_6,uVar5,param_8);
  }
  return param_2;
}



// FUNCTION 14378b380 FUN_14378b380 body=1136 status=ok
// SIG undefined FUN_14378b380(void)

void FUN_14378b380(longlong *param_1,undefined4 *param_2,undefined8 param_3,ushort param_4,
                  short *param_5,longlong param_6,longlong param_7,undefined4 param_8,
                  undefined4 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined1 in_XMM2 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [16];
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8 [2];
  ulonglong local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  
  bVar6 = true;
  if (0 < (short)param_4) {
    pfVar11 = (float *)(param_6 + 0x10);
    local_d0 = (ulonglong)param_4;
    do {
      FUN_1437137a0(&local_118,param_7,pfVar11 + -4);
      fVar17 = 1.0;
      if (*param_5 == -1) {
        local_f8 = ZEXT816(0);
        FUN_1437137a0(local_f8,param_7,local_f8);
        (**(code **)(*param_1 + 0xa0))
                  (param_1,&local_e8,param_3,&local_118,local_f8,param_8,param_9);
        bVar12 = local_e8 < 0;
      }
      else {
        FUN_1437137a0(&local_b8,param_7,(longlong)*param_5 * 0x30 + param_6);
        (**(code **)(*param_1 + 0xa0))
                  (param_1,&local_e4,param_3,&local_118,&local_b8,param_8,param_9);
        bVar12 = local_e4 < 0;
        fVar17 = (local_118 - local_b8) * (local_118 - local_b8);
        fVar13 = (fStack_114 - fStack_b4) * (fStack_114 - fStack_b4);
        fVar14 = (fStack_110 - fStack_b0) * (fStack_110 - fStack_b0);
        fVar16 = fVar13 + fVar17 + fVar14;
        auVar15._4_4_ = fVar13 + fVar17 + fVar14;
        auVar15._0_4_ = fVar16;
        auVar15._8_4_ = fVar13 + fVar17 + fVar14;
        auVar15._12_4_ = fVar13 + fVar17 + fVar14;
        auVar15 = rsqrtps(in_XMM2,auVar15);
        fVar17 = auVar15._0_4_;
        fVar17 = (float)(~-(uint)(fVar16 <= 0.0) &
                        (uint)((3.0 - fVar16 * fVar17 * fVar17) * fVar17 * 0.5 * fVar16));
        if (10.0 <= fVar17) {
          fVar17 = 10.0;
        }
        if (fVar17 <= 0.1) {
          fVar17 = 0.1;
        }
      }
      fVar10 = fStack_10c;
      fVar9 = fStack_110;
      fVar8 = fStack_114;
      fVar7 = local_118;
      fVar13 = *pfVar11;
      fVar14 = pfVar11[1];
      fVar16 = pfVar11[2];
      fVar1 = pfVar11[3];
      fVar2 = *(float *)(param_7 + 0x10);
      fVar3 = *(float *)(param_7 + 0x14);
      fVar4 = *(float *)(param_7 + 0x18);
      fVar5 = *(float *)(param_7 + 0x1c);
      fVar17 = fVar17 * 0.25;
      local_c8 = (fVar16 * fVar3 - fVar4 * fVar14) + fVar13 * fVar5 + fVar2 * fVar1;
      fStack_c4 = (fVar13 * fVar4 - fVar2 * fVar16) + fVar14 * fVar5 + fVar3 * fVar1;
      fStack_c0 = (fVar14 * fVar2 - fVar3 * fVar13) + fVar16 * fVar5 + fVar4 * fVar1;
      fStack_bc = fVar1 * fVar5 - (fVar3 * fVar14 + fVar2 * fVar13 + fVar4 * fVar16);
      local_f8 = ZEXT416((uint)fVar17);
      FUN_143713650(&local_108,&local_c8,local_f8);
      local_108 = local_108 + local_118;
      fStack_104 = fStack_104 + fStack_114;
      fStack_100 = fStack_100 + fStack_110;
      fStack_fc = fStack_fc + fStack_10c;
      (**(code **)(*param_1 + 0xa0))
                (param_1,local_d8,param_3,&local_118,&local_108,0x7fff0000,param_9);
      local_f8 = ZEXT416((uint)fVar17) << 0x20;
      local_118 = fVar7;
      fStack_114 = fVar8;
      fStack_110 = fVar9;
      fStack_10c = fVar10;
      FUN_143713650(&local_108,&local_c8,local_f8);
      local_108 = local_108 + local_118;
      fStack_104 = fStack_104 + fStack_114;
      fStack_100 = fStack_100 + fStack_110;
      fStack_fc = fStack_fc + fStack_10c;
      (**(code **)(*param_1 + 0xa0))
                (param_1,&local_dc,param_3,&local_118,&local_108,0x7f00ff00,param_9);
      in_XMM2 = ZEXT416((uint)fVar17) << 0x40;
      local_118 = fVar7;
      fStack_114 = fVar8;
      fStack_110 = fVar9;
      fStack_10c = fVar10;
      local_f8 = in_XMM2;
      FUN_143713650(&local_108,&local_c8,local_f8);
      local_108 = local_108 + local_118;
      fStack_104 = fStack_104 + fStack_114;
      fStack_100 = fStack_100 + fStack_110;
      fStack_fc = fStack_fc + fStack_10c;
      (**(code **)(*param_1 + 0xa0))
                (param_1,&local_e0,param_3,&local_118,&local_108,0x7f0000ff,param_9);
      param_5 = param_5 + 1;
      pfVar11 = pfVar11 + 0xc;
      bVar6 = (bool)(bVar6 & (((-1 < local_e0 && -1 < local_dc) && -1 < local_d8[0]) && !bVar12));
      local_d0 = local_d0 - 1;
    } while (local_d0 != 0);
    if (!bVar6) {
      *param_2 = 0x80040200;
      return;
    }
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14378b7f0 FUN_14378b7f0 body=778 status=ok
// SIG undefined FUN_14378b7f0(void)

undefined4 *
FUN_14378b7f0(longlong *param_1,undefined4 *param_2,undefined8 param_3,float *param_4,float *param_5
             ,float param_6,undefined4 param_7,undefined4 param_8)

{
  byte bVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_b8 [5];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  uVar3 = param_8;
  uVar6 = param_7;
  fVar2 = param_6;
  fVar10 = *param_4;
  fVar14 = param_4[1];
  fVar16 = param_4[2];
  fVar29 = param_4[3];
  fVar21 = ABS(fVar10);
  fVar23 = ABS(fVar14);
  fVar25 = ABS(fVar16);
  auVar17._0_8_ = CONCAT44(fVar14,fVar14) & 0x7fffffff7fffffff;
  auVar17._8_4_ = fVar23;
  auVar17._12_4_ = fVar23;
  auVar11._0_8_ = CONCAT44(fVar16,fVar16) & 0x7fffffff7fffffff;
  auVar11._8_4_ = fVar25;
  auVar11._12_4_ = fVar25;
  local_b8[0] = 0.0;
  local_b8[1] = 0.0;
  local_b8[2] = 0.0;
  local_b8[3] = 0.0;
  auVar18._0_8_ = CONCAT44(fVar10,fVar10) & 0x7fffffff7fffffff;
  auVar18._8_4_ = fVar21;
  auVar18._12_4_ = fVar21;
  auVar18 = maxps(auVar17,auVar18);
  auVar18 = maxps(auVar11,auVar18);
  auVar12._4_4_ = -(uint)(auVar18._4_4_ <= fVar23);
  auVar12._0_4_ = -(uint)(auVar18._0_4_ <= fVar21);
  auVar12._8_4_ = -(uint)(auVar18._8_4_ <= fVar25);
  auVar12._12_4_ = -(uint)(auVar18._12_4_ <= ABS(fVar29));
  fVar21 = (0.0 - fVar29) * fVar10 + *param_5;
  fVar23 = (0.0 - fVar29) * fVar14 + param_5[1];
  fVar25 = (0.0 - fVar29) * fVar16 + param_5[2];
  fVar27 = (0.0 - fVar29) * fVar29 + param_5[3];
  uVar4 = movmskps((int)param_5,auVar12);
  iVar7 = (char)(&DAT_145ba0900)[uVar4 & 7] + 1;
  local_98 = fVar21;
  fStack_94 = fVar23;
  fStack_90 = fVar25;
  fStack_8c = fVar27;
  local_b8[iVar7 + (iVar7 / 3 + (iVar7 >> 0x1f) +
                   (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                   -3] = 1.0;
  fVar22 = local_b8[1] * fVar10 - fVar14 * local_b8[0];
  fVar24 = local_b8[2] * fVar14 - fVar16 * local_b8[1];
  fVar26 = local_b8[0] * fVar16 - fVar10 * local_b8[2];
  fVar9 = fVar24 * fVar24;
  fVar13 = fVar26 * fVar26;
  fVar15 = fVar22 * fVar22;
  auVar19._0_4_ = fVar13 + fVar9 + fVar15;
  auVar19._4_4_ = fVar13 + fVar9 + fVar15;
  auVar19._8_4_ = fVar13 + fVar9 + fVar15;
  auVar19._12_4_ = fVar13 + fVar9 + fVar15;
  auVar18 = rsqrtps(ZEXT416((uint)param_6),auVar19);
  fVar24 = (float)(~-(uint)(auVar19._0_4_ <= 0.0) & auVar18._0_4_) * fVar24 * param_6;
  fVar26 = (float)(~-(uint)(auVar19._4_4_ <= 0.0) & auVar18._4_4_) * fVar26 * param_6;
  fVar22 = (float)(~-(uint)(auVar19._8_4_ <= 0.0) & auVar18._8_4_) * fVar22 * param_6;
  fVar28 = (float)(~-(uint)(auVar19._12_4_ <= 0.0) & auVar18._12_4_) *
           (local_b8[3] * fVar29 - fVar29 * local_b8[3]) * param_6;
  fVar9 = fVar14 * fVar24 - fVar26 * fVar10;
  fVar13 = fVar16 * fVar26 - fVar22 * fVar14;
  fVar15 = fVar10 * fVar22 - fVar24 * fVar16;
  fVar10 = fVar13 * fVar13;
  fVar14 = fVar15 * fVar15;
  fVar16 = fVar9 * fVar9;
  auVar8._4_4_ = fVar10;
  auVar8._0_4_ = fVar10;
  auVar8._8_4_ = fVar10;
  auVar8._12_4_ = fVar10;
  bVar1 = 1;
  uVar4 = 0;
  auVar20._0_4_ = fVar14 + fVar10 + fVar16;
  auVar20._4_4_ = fVar14 + fVar10 + fVar16;
  auVar20._8_4_ = fVar14 + fVar10 + fVar16;
  auVar20._12_4_ = fVar14 + fVar10 + fVar16;
  auVar18 = rsqrtps(auVar8,auVar20);
  fVar10 = (float)(~-(uint)(auVar20._0_4_ <= 0.0) & auVar18._0_4_) * fVar13 * param_6;
  fVar14 = (float)(~-(uint)(auVar20._4_4_ <= 0.0) & auVar18._4_4_) * fVar15 * param_6;
  fVar16 = (float)(~-(uint)(auVar20._8_4_ <= 0.0) & auVar18._8_4_) * fVar9 * param_6;
  fVar29 = (float)(~-(uint)(auVar20._12_4_ <= 0.0) & auVar18._12_4_) *
           (fVar29 * fVar28 - fVar28 * fVar29) * param_6;
  do {
    if ((uVar4 & 2) == 0) {
      local_b8[4] = fVar10 + fVar21;
      fStack_a4 = fVar14 + fVar23;
      fStack_a0 = fVar16 + fVar25;
      fStack_9c = fVar29 + fVar27;
    }
    else {
      local_b8[4] = fVar21 - fVar10;
      fStack_a4 = fVar23 - fVar14;
      fStack_a0 = fVar25 - fVar16;
      fStack_9c = fVar27 - fVar29;
    }
    uVar5 = uVar4 + 1 & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    if ((int)uVar5 / 2 == 0) {
      local_b8[4] = local_b8[4] + fVar24;
      fStack_a4 = fStack_a4 + fVar26;
      fStack_a0 = fStack_a0 + fVar22;
      fStack_9c = fStack_9c + fVar28;
      fVar21 = fVar21 + fVar10;
      fVar23 = fVar23 + fVar14;
      fVar25 = fVar25 + fVar16;
      fVar27 = fVar27 + fVar29;
    }
    else {
      local_b8[4] = local_b8[4] - fVar24;
      fStack_a4 = fStack_a4 - fVar26;
      fStack_a0 = fStack_a0 - fVar22;
      fStack_9c = fStack_9c - fVar28;
      fVar21 = fVar21 - fVar10;
      fVar23 = fVar23 - fVar14;
      fVar25 = fVar25 - fVar16;
      fVar27 = fVar27 - fVar29;
    }
    uVar5 = uVar4 + 2 & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    if ((int)uVar5 / 2 == 0) {
      local_b8[0] = fVar21 + fVar24;
      local_b8[1] = fVar23 + fVar26;
      local_b8[2] = fVar25 + fVar22;
      local_b8[3] = fVar27 + fVar28;
    }
    else {
      local_b8[0] = fVar21 - fVar24;
      local_b8[1] = fVar23 - fVar26;
      local_b8[2] = fVar25 - fVar22;
      local_b8[3] = fVar27 - fVar28;
    }
    (**(code **)(*param_1 + 0xa0))(param_1,&param_5,param_3,local_b8 + 4,local_b8,uVar6,uVar3);
    uVar4 = uVar4 + 1;
    bVar1 = bVar1 & -1 < (int)param_5;
    fVar21 = local_98;
    fVar23 = fStack_94;
    fVar25 = fStack_90;
    fVar27 = fStack_8c;
  } while ((int)uVar4 < 4);
  local_88 = *param_4 * fVar2;
  fStack_84 = param_4[1] * fVar2;
  fStack_80 = param_4[2] * fVar2;
  fStack_7c = param_4[3] * fVar2;
  (**(code **)(*param_1 + 0xa8))(param_1,&param_5,param_3,&local_98,&local_88,uVar6,1,0,uVar3);
  uVar6 = 0x80040200;
  if ((bool)(bVar1 & -1 < (int)param_5)) {
    uVar6 = 0;
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 14378bb00 FUN_14378bb00 body=380 status=ok
// SIG undefined FUN_14378bb00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_14378bb00(longlong *param_1,undefined4 *param_2,undefined8 param_3,float *param_4,float *param_5
             ,float *param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  uVar9 = param_8;
  uVar8 = param_7;
  pfVar7 = param_6;
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar4 = *param_5;
  fVar5 = param_5[1];
  fVar6 = param_5[2];
  fVar10 = *param_6 - fVar1;
  fVar11 = param_6[1] - fVar2;
  fVar12 = param_6[2] - fVar3;
  fVar13 = fVar11 * (fVar4 - fVar1) - (fVar5 - fVar2) * fVar10;
  fVar11 = fVar12 * (fVar5 - fVar2) - (fVar6 - fVar3) * fVar11;
  fVar10 = fVar10 * (fVar6 - fVar3) - (fVar4 - fVar1) * fVar12;
  fVar13 = fVar13 * fVar13;
  if (1e-06 <= fVar10 * fVar10 + fVar11 * fVar11 + fVar13) {
    local_28 = (fVar4 + *param_6) * _DAT_1467f07e0;
    fStack_24 = (fVar5 + param_6[1]) * fRam00000001467f07e4;
    fStack_20 = (fVar6 + param_6[2]) * fRam00000001467f07e8;
    fStack_1c = (param_5[3] + param_6[3]) * fRam00000001467f07ec;
    local_38 = (fVar4 + fVar1) * _DAT_1467f07e0;
    fStack_34 = (fVar5 + fVar2) * fRam00000001467f07e4;
    fStack_30 = (fVar6 + fVar3) * fRam00000001467f07e8;
    fStack_2c = (param_5[3] + param_4[3]) * fRam00000001467f07ec;
    local_48 = (local_28 + local_38) * _DAT_1467f07e0;
    fStack_44 = (fStack_24 + fStack_34) * fRam00000001467f07e4;
    fStack_40 = (fStack_20 + fStack_30) * fRam00000001467f07e8;
    fStack_3c = (fStack_1c + fStack_2c) * fRam00000001467f07ec;
    (**(code **)(*param_1 + 0x158))
              (param_1,&param_6,fVar13,local_48,&local_38,&local_48,param_7,param_8);
    (**(code **)(*param_1 + 0x158))(param_1,&param_6,param_3,&local_48,&local_28,pfVar7,uVar8,uVar9)
    ;
  }
  else {
    (**(code **)(*param_1 + 0xa0))();
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14378bc80 FUN_14378bc80 body=526 status=ok
// SIG undefined FUN_14378bc80(void)

undefined4 *
FUN_14378bc80(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             uint param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_res8 [2];
  int local_res10 [2];
  int local_88;
  int local_84;
  int local_80 [2];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  local_78 = ZEXT816(0);
  FUN_143713830(local_68,param_4,local_78);
  local_78 = ZEXT416(param_5);
  FUN_143713830(local_58,param_4,local_78);
  local_78 = ZEXT416(param_5) << 0x20;
  FUN_143713830(local_38,param_4,local_78);
  local_78 = ZEXT416(param_5) << 0x40;
  FUN_143713830(local_48,param_4,local_78);
  uVar2 = param_7;
  puVar1 = (undefined4 *)CONCAT44(param_6._4_4_,(int)param_6);
  (**(code **)(*param_1 + 0xa0))(param_1,local_80,param_3,local_68,local_58,*puVar1,param_7);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_84,param_3,local_68,local_38,*puVar1,uVar2);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_88,param_3,local_68,local_48,*puVar1,uVar2);
  (**(code **)(*param_1 + 0xa0))(param_1,local_res10,param_3,local_58,local_38,*puVar1,uVar2);
  (**(code **)(*param_1 + 0xa0))(param_1,local_res8,param_3,local_58,local_48,*puVar1,uVar2);
  (**(code **)(*param_1 + 0xa0))(param_1,&param_6,param_3,local_38,local_48,*puVar1,uVar2);
  uVar2 = 0x80040200;
  if (-1 < local_80[0] &&
      ((((-1 < (int)param_6 && -1 < local_res8[0]) && -1 < local_res10[0]) && -1 < local_88) &&
      -1 < local_84)) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14378be90 FUN_14378be90 body=945 status=ok
// SIG undefined FUN_14378be90(void)

undefined4 *
FUN_14378be90(longlong *param_1,undefined4 *param_2,undefined8 param_3,float *param_4,float *param_5
             ,undefined4 param_6,undefined4 param_7)

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
  float fVar18;
  undefined4 uVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  uint uVar23;
  float fVar24;
  int local_res8 [2];
  int local_res10 [2];
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114 [3];
  float local_108 [4];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
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
  
  fVar1 = param_4[4];
  fVar2 = param_4[5];
  fVar3 = param_4[6];
  fVar4 = param_4[7];
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  fVar8 = param_4[3];
  uVar23 = 0;
  fVar9 = param_4[8];
  fVar10 = param_4[9];
  fVar11 = param_4[10];
  fVar12 = param_4[0xb];
  fVar13 = param_4[0xc];
  fVar14 = param_4[0xd];
  fVar15 = param_4[0xe];
  fVar16 = param_4[0xf];
  pfVar22 = local_108;
  do {
    if ((uVar23 & 4) == 0) {
      local_78 = param_5[2];
      fStack_74 = local_78;
      fStack_70 = local_78;
      fStack_6c = local_78;
      pfVar21 = &local_78;
    }
    else {
      local_88 = param_5[6];
      fStack_84 = local_88;
      fStack_80 = local_88;
      fStack_7c = local_88;
      pfVar21 = &local_88;
    }
    if ((uVar23 & 2) == 0) {
      local_58 = param_5[1];
      pfVar20 = &local_58;
      fStack_54 = local_58;
      fStack_50 = local_58;
      fStack_4c = local_58;
    }
    else {
      local_68 = param_5[5];
      pfVar20 = &local_68;
      fStack_64 = local_68;
      fStack_60 = local_68;
      fStack_5c = local_68;
    }
    if ((uVar23 & 1) == 0) {
      fVar24 = *param_5;
    }
    else {
      fVar24 = param_5[4];
    }
    fVar17 = *pfVar21;
    uVar23 = uVar23 + 1;
    fVar18 = *pfVar20;
    *pfVar22 = fVar24 * fVar5 + fVar18 * fVar1 + fVar17 * fVar9 + fVar13;
    pfVar22[1] = fVar24 * fVar6 + fVar18 * fVar2 + fVar17 * fVar10 + fVar14;
    pfVar22[2] = fVar24 * fVar7 + fVar18 * fVar3 + fVar17 * fVar11 + fVar15;
    pfVar22[3] = fVar24 * fVar8 + fVar18 * fVar4 + fVar17 * fVar12 + fVar16;
    pfVar22 = pfVar22 + 4;
  } while ((int)uVar23 < 8);
  (**(code **)(*param_1 + 0xa0))
            (param_1,local_114,fVar17 * fVar9,local_108,local_f8,param_6,param_7);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_118,param_3,local_f8,local_d8,param_6,param_7);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_11c,param_3,local_d8,local_e8,param_6,param_7);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_120,param_3,local_e8,local_108,param_6,param_7);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_124,param_3,local_c8,local_b8,param_6,param_7);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_128,param_3,local_b8,local_98,param_6,param_7);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_12c,param_3,local_98,local_a8,param_6,param_7);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_130,param_3,local_a8,local_c8,param_6,param_7);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_134,param_3,local_108,local_c8,param_6,param_7);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_138,param_3,local_f8,local_b8,param_6,param_7);
  (**(code **)(*param_1 + 0xa0))(param_1,local_res10,param_3,local_e8,local_a8,param_6,param_7);
  (**(code **)(*param_1 + 0xa0))(param_1,local_res8,param_3,local_d8,local_98,param_6,param_7);
  uVar19 = 0x80040200;
  if (-1 < local_114[0] &&
      ((((((((((-1 < local_res8[0] && -1 < local_res10[0]) && -1 < local_138) && -1 < local_134) &&
            -1 < local_130) && -1 < local_12c) && -1 < local_128) && -1 < local_124) &&
        -1 < local_120) && -1 < local_11c) && -1 < local_118)) {
    uVar19 = 0;
  }
  *param_2 = uVar19;
  return param_2;
}



// FUNCTION 14378c250 FUN_14378c250 body=42 status=ok
// SIG undefined FUN_14378c250(void)

/* WARNING: Removing unreachable block (ram,0x00014378c26a) */

undefined8 * FUN_14378c250(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14378c280 FUN_14378c280 body=26 status=ok
// SIG undefined FUN_14378c280(void)

undefined8
FUN_14378c280(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)*param_1)(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 14378c2a0 FUN_14378c2a0 body=48 status=ok
// SIG undefined FUN_14378c2a0(void)

void FUN_14378c2a0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined4 *)(param_2 + -0x10);
  plVar2 = (longlong *)FUN_143703a50();
                    /* WARNING: Could not recover jumptable at 0x00014378c2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2 + -0x10,uVar1);
  return;
}



// FUNCTION 14378c2d0 FUN_14378c2d0 body=694 status=ok
// SIG undefined FUN_14378c2d0(void)

undefined8 FUN_14378c2d0(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined4 local_90;
  ulonglong local_88;
  ulonglong *puStack_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  
  uVar6 = 0;
  uVar2 = uVar6;
  if (param_4 != 0) {
    uVar2 = FUN_1437151a0(param_4);
  }
  if ((uVar2 & 1) != 0) {
    FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
  }
  if ((uVar2 & 1) != 0) {
    FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
  }
  local_d8 = param_3;
  local_d0 = param_4;
  local_c8 = uVar2;
  if ((((uVar2 & 1) != 0) && (FUN_1437329e0(uVar2 & 0xfffffffffffffffe), (uVar2 & 1) != 0)) &&
     (FUN_143733a60(uVar2 & 0xfffffffffffffffe), (uVar2 & 1) != 0)) {
    FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
  }
  local_a8 = param_3;
  local_a0 = param_4;
  local_98 = uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
  }
  bVar7 = 0;
  local_90 = 0;
  local_78 = 0;
  local_88 = 0;
  puStack_80 = (ulonglong *)0x0;
  uVar9 = param_3;
  uVar10 = uVar2;
  if (param_4 != 0) {
    puVar3 = (undefined8 *)FUN_143714490(param_4,1);
    if (puVar3 != (undefined8 *)0x0) {
      bVar7 = (byte)*puVar3;
    }
    local_88 = uVar6;
    if ((bVar7 & 0xf) == 7) {
      local_88 = param_4;
    }
    FUN_14378d240(&local_a8);
    uVar9 = local_a8;
    uVar10 = local_98;
  }
  if ((uVar2 & 1) != 0) {
    FUN_143733a60(uVar2 & 0xfffffffffffffffe);
  }
  lVar4 = FUN_14378d810(&local_d8,local_70);
  if ((local_88 != *(ulonglong *)(lVar4 + 0x20)) ||
     (uVar8 = 1, puStack_80 != *(ulonglong **)(lVar4 + 0x28))) {
    uVar8 = uVar6;
  }
  if ((local_60 & 1) != 0) {
    FUN_143733a60(local_60 & 0xfffffffffffffffe);
  }
  local_c0 = param_3;
  local_b8 = param_4;
  local_b0 = uVar2;
  if ((char)uVar8 == '\0') {
    uVar5 = uVar6;
    uVar8 = uVar6;
    if (local_88 != 0) {
      uVar8 = *puStack_80;
      iVar1 = FUN_143715270(puStack_80);
      uVar5 = (longlong)iVar1 + uVar9;
      if (uVar8 != 0) {
        uVar6 = FUN_1437151a0(uVar8);
      }
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      if (((uVar6 & 1) != 0) && (FUN_1437329e0(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
        FUN_143733a60(uVar6 & 0xfffffffffffffffe);
      }
    }
    local_d8 = uVar5;
    local_d0 = uVar8;
    local_c8 = uVar6;
    if ((uVar2 & 1) != 0) {
      FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
    }
    FUN_1437328d0(param_2,&local_c0,&local_d8,0);
  }
  else {
    if ((uVar2 & 1) != 0) {
      FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
    }
    FUN_14378d060(param_2,&local_c0);
  }
  if ((local_98 & 1) != 0) {
    FUN_143733a60(uVar10 & 0xfffffffffffffffe);
  }
  if (((uVar2 & 1) != 0) && (FUN_143733a60(uVar2 & 0xfffffffffffffffe), (uVar2 & 1) != 0)) {
    FUN_143733a60(uVar2 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14378c590 FUN_14378c590 body=844 status=ok
// SIG undefined FUN_14378c590(void)

void FUN_14378c590(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  longlong lVar16;
  byte bVar17;
  ulonglong uVar18;
  int iVar19;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong local_c0;
  undefined4 local_b8;
  longlong local_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  ulonglong local_78;
  undefined4 local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  if (param_2[6] != -1) {
    uVar1 = param_2[2];
    iVar19 = *(int *)(param_2 + 6) + 1;
    uVar15 = *param_2;
    lVar16 = param_2[1];
    local_90 = uVar15;
    if ((uVar1 & 1) != 0) {
      FUN_1437329e0();
    }
    local_50 = uVar15;
    local_48 = lVar16;
    local_40 = uVar1;
    if ((((uVar1 & 1) != 0) && (FUN_1437329e0(), (uVar1 & 1) != 0)) &&
       (FUN_143733a60(), (uVar1 & 1) != 0)) {
      FUN_1437329e0();
    }
    local_d0 = uVar15;
    local_c8 = lVar16;
    local_c0 = uVar1;
    if ((uVar1 & 1) != 0) {
      FUN_1437329e0();
    }
    local_b8 = 0;
    local_a0 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    uVar14 = uVar1;
    local_88 = uVar15;
    if (lVar16 != 0) {
      puVar13 = (undefined8 *)FUN_143714490(lVar16,1);
      if (puVar13 == (undefined8 *)0x0) {
        bVar17 = 0;
      }
      else {
        bVar17 = (byte)*puVar13;
      }
      local_b0 = 0;
      if ((bVar17 & 0xf) == 7) {
        local_b0 = lVar16;
      }
      FUN_14378d240(&local_d0);
      local_90 = local_d0;
      uVar14 = local_c0;
      local_88 = local_d0;
      lVar16 = local_c8;
    }
    uVar2 = local_a0;
    uVar8 = local_b8;
    if ((uVar1 & 1) != 0) {
      FUN_143733a60(uVar1 & 0xfffffffffffffffe);
    }
    uVar6 = local_c0 & 1;
    iVar7 = iVar19;
    uVar18 = uVar14;
    local_98 = uStack_a8;
    uVar9 = uStack_a8;
    lVar10 = local_b0;
    uVar11 = uStack_a8;
    uVar12 = uVar2;
    uVar15 = local_90;
    local_80 = lVar16;
    local_78 = uVar14;
    if ((local_c0 & 1) != 0) {
      FUN_1437329e0(uVar14 & 0xfffffffffffffffe);
      local_98 = uStack_a8;
      uVar9 = uStack_a8;
      lVar10 = local_b0;
      uVar11 = uStack_a8;
      uVar15 = local_90;
    }
    while ((uVar4 = uStack_a8, local_70 = uVar8, local_68 = lVar10, local_60 = uVar9,
           local_58 = uVar12, 0 < iVar7 &&
           (uVar15 = local_88, uVar18 = local_78, lVar16 = local_80, uStack_a8 != uVar2))) {
      uStack_a8 = uVar11;
      FUN_14378d240(&local_88);
      iVar7 = iVar7 + -1;
      uVar18 = local_78;
      lVar16 = local_80;
      uVar8 = local_70;
      uVar9 = local_60;
      lVar10 = local_68;
      uVar11 = uStack_a8;
      uVar12 = local_58;
      uVar15 = local_88;
      uStack_a8 = uVar4;
    }
    uVar2 = local_78 & 1;
    uVar4 = local_78 & 1;
    uVar5 = local_78 & 1;
    local_d0 = uVar15;
    local_c8 = lVar16;
    uStack_a8 = uVar11;
    if ((local_78 & 1) != 0) {
      FUN_1437329e0(uVar18 & 0xfffffffffffffffe);
    }
    if (uVar6 != 0) {
      FUN_143733a60(uVar14 & 0xfffffffffffffffe);
    }
    local_c0 = uVar18;
    local_b8 = uVar8;
    local_b0 = lVar10;
    uStack_a8 = uVar9;
    local_a0 = uVar12;
    if (uVar2 != 0) {
      FUN_143733a60(uVar18 & 0xfffffffffffffffe);
    }
    lVar16 = FUN_14378d810(&local_50,&local_88);
    if (((lVar10 == 0) || (*(longlong *)(lVar16 + 0x20) != 0)) &&
       ((lVar10 != *(longlong *)(lVar16 + 0x20) || (*(ulonglong *)(lVar16 + 0x28) <= uVar9)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((local_78 & 1) != 0) {
      FUN_143733a60(local_78 & 0xfffffffffffffffe);
    }
    if (bVar3) {
      puVar13 = (undefined8 *)FUN_14378d160(&local_d0,&local_50);
      param_2[3] = *puVar13;
      param_2[4] = puVar13[1];
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_143733a60(param_2[5] & 0xfffffffffffffffe);
      }
      param_2[5] = puVar13[2];
      puVar13[2] = 0;
      if ((local_40 & 1) != 0) {
        FUN_143733a60(local_40 & 0xfffffffffffffffe);
      }
      param_2[6] = (longlong)iVar19;
      if (uVar4 != 0) {
        FUN_143733a60(uVar18 & 0xfffffffffffffffe);
      }
      if ((uVar1 & 1) == 0) {
        return;
      }
      FUN_143733a60(uVar1 & 0xfffffffffffffffe);
      return;
    }
    if (uVar5 != 0) {
      FUN_143733a60(uVar18 & 0xfffffffffffffffe);
    }
    if ((uVar1 & 1) != 0) {
      FUN_143733a60(uVar1 & 0xfffffffffffffffe);
    }
  }
  param_2[6] = 0xffffffffffffffff;
  return;
}



// FUNCTION 14378c8e0 FUN_14378c8e0 body=43 status=ok
// SIG undefined FUN_14378c8e0(void)

undefined4 *
FUN_14378c8e0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14378ce90(param_3,param_4);
  *param_2 = 0;
  *param_5 = uVar1;
  return param_2;
}



// FUNCTION 14378c910 FUN_14378c910 body=150 status=ok
// SIG undefined FUN_14378c910(void)

undefined8 * FUN_14378c910(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar3 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    puVar2 = &local_18;
    local_18 = 0;
    uStack_10 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_14371d5c0(&local_18,param_2,&DAT_1467f7870);
  }
  lVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    uVar3 = FUN_1437151a0();
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    FUN_143733a60(param_1[2] & 0xfffffffffffffffe);
  }
  param_1[2] = uVar3;
  return param_1;
}



// FUNCTION 14378c9b0 FUN_14378c9b0 body=1242 status=ok
// SIG undefined FUN_14378c9b0(void)

undefined4 *
FUN_14378c9b0(undefined8 param_1,undefined4 *param_2,longlong *param_3,char *param_4,
             undefined8 param_5,char *param_6,undefined8 *param_7)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  char **ppcVar9;
  char *pcVar10;
  byte bVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 *local_res10;
  longlong *local_res18;
  char *local_78;
  uint local_70;
  undefined4 uStack_6c;
  char *local_68;
  char *local_60;
  char *pcStack_58;
  char *local_50;
  char *local_48;
  char *pcStack_40;
  char *local_38;
  char *local_30;
  char *local_28;
  
  pcVar13 = (char *)0x0;
  local_70 = 0;
  *param_2 = 0x80040200;
  local_res10 = param_2;
  local_res18 = param_3;
  cVar3 = hkString::isNullOrEmpty(param_6);
  bVar11 = 0;
  if (cVar3 != '\0') {
    cVar3 = FUN_14378d990();
    if (cVar3 != '\0') {
      puVar6 = (undefined8 *)FUN_143714490(param_4,1);
      if (puVar6 != (undefined8 *)0x0) {
        bVar11 = (byte)*puVar6;
      }
      if ((bVar11 & 0xf) == 3) {
        pcVar13 = param_4;
      }
      if (pcVar13 == (char *)0x0) {
        local_60 = (char *)*local_res18;
        pcStack_58 = (char *)local_res18[1];
        local_50 = (char *)local_res18[2];
        if (((ulonglong)local_50 & 1) != 0) {
          FUN_1437329e0((ulonglong)local_50 & 0xfffffffffffffffe);
        }
        FUN_1437420f0(&local_60,&local_res10,*param_7);
        if (((ulonglong)local_50 & 1) != 0) {
          FUN_143733a60((ulonglong)local_50 & 0xfffffffffffffffe);
        }
        *param_2 = local_res10._0_4_;
      }
    }
    goto LAB_14378ce5d;
  }
  puVar6 = (undefined8 *)FUN_143714490(param_4,1);
  bVar8 = bVar11;
  if (puVar6 != (undefined8 *)0x0) {
    bVar8 = (byte)*puVar6;
  }
  pcVar10 = pcVar13;
  if ((bVar8 & 0xf) == 7) {
    pcVar10 = param_4;
  }
  if (pcVar10 == (char *)0x0) {
    puVar6 = (undefined8 *)FUN_143714490(param_4,1);
    bVar8 = bVar11;
    if (puVar6 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar6;
    }
    local_28 = pcVar13;
    if ((bVar8 & 0xf) == 8) {
      local_28 = param_4;
    }
    param_2 = local_res10;
    if (local_28 == (char *)0x0) goto LAB_14378ce5d;
    puVar6 = (undefined8 *)FUN_143714420(local_28,1);
    pcVar10 = pcVar13;
    if (puVar6 != (undefined8 *)0x0) {
      pcVar10 = (char *)*puVar6;
    }
    param_2 = local_res10;
    if (((int)((ulonglong)pcVar10 >> 8) == 0) ||
       (cVar3 = hkString::isNullOrEmpty(param_6), param_2 = local_res10, cVar3 != '\0'))
    goto LAB_14378ce5d;
    cVar3 = *param_6;
    pcVar10 = param_6;
    while (('/' < cVar3 && (cVar3 < ':'))) {
      pcVar12 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
      cVar3 = *pcVar12;
    }
    if ((*pcVar10 != '/') && (*pcVar10 != '\0')) goto LAB_14378ce5d;
    local_50 = (char *)0x0;
    local_48 = (char *)0x0;
    pcStack_40 = (char *)0x0;
    pcVar12 = (char *)0x0;
    local_60 = (char *)0x0;
    pcStack_58 = (char *)0x0;
    if (local_res18[1] == 0) {
LAB_14378cda3:
      local_68 = local_48;
      pcVar14 = pcStack_40;
    }
    else {
      puVar6 = (undefined8 *)FUN_143714490(local_res18[1],1);
      plVar2 = local_res18;
      if (puVar6 != (undefined8 *)0x0) {
        bVar11 = (byte)*puVar6;
      }
      if ((bVar11 & 0xf) == 8) {
        local_60 = (char *)*local_res18;
        pcStack_58 = (char *)local_res18[1];
        if ((*(byte *)(local_res18 + 2) & 1) != 0) {
          FUN_1437329e0(local_res18[2] & 0xfffffffffffffffe);
        }
        if (((ulonglong)local_50 & 1) != 0) {
          FUN_143733a60((ulonglong)local_50 & 0xfffffffffffffffe);
        }
        local_50 = (char *)plVar2[2];
      }
      if (local_60 == (char *)0x0) goto LAB_14378cda3;
      iVar4 = hkString::atoi(param_6);
      puVar6 = (undefined8 *)FUN_143741d50(&local_60,&local_48,iVar4);
      local_68 = (char *)*puVar6;
      pcVar14 = (char *)puVar6[1];
      pcVar12 = (char *)puVar6[2];
      puVar6[2] = 0;
      if (((ulonglong)local_38 & 1) != 0) {
        FUN_143733a60((ulonglong)local_38 & 0xfffffffffffffffe);
      }
    }
    if (((ulonglong)local_50 & 1) != 0) {
      FUN_143733a60((ulonglong)local_50 & 0xfffffffffffffffe);
    }
    local_30 = pcVar13;
    if (*pcVar10 != '\0') {
      local_30 = pcVar10 + 1;
    }
    puVar6 = (undefined8 *)FUN_143714420(local_28,2);
    if (puVar6 != (undefined8 *)0x0) {
      pcVar13 = (char *)*puVar6;
    }
    bVar11 = (byte)pcVar12;
    local_48 = local_68;
    pcVar10 = pcVar13;
    pcVar13 = local_30;
    pcStack_40 = pcVar14;
    local_38 = pcVar12;
    if (((ulonglong)pcVar12 & 1) != 0) {
      FUN_1437329e0((ulonglong)pcVar12 & 0xfffffffffffffffe);
      pcVar13 = local_30;
    }
  }
  else {
    cVar3 = hkString::isNullOrEmpty(param_6);
    param_2 = local_res10;
    if (cVar3 != '\0') goto LAB_14378ce5d;
    iVar4 = FUN_14370c680(param_6,0x2f,0,0x7fffffff);
    if (iVar4 == -1) {
      local_78 = (char *)0x0;
    }
    else {
      local_78 = param_6 + iVar4;
      if (local_78 != (char *)0x0) {
        *local_78 = '\0';
      }
    }
    FUN_143714a90(param_4,&local_30,param_6,1);
    if (local_78 != (char *)0x0) {
      *local_78 = '/';
    }
    FUN_143714040(&local_70,local_30);
    FUN_143714060(&local_68,CONCAT44(uStack_6c,local_70));
    pcVar10 = local_68;
    param_2 = local_res10;
    if (local_68 < (char *)0x2) goto LAB_14378ce5d;
    lVar1 = *local_res18;
    if (lVar1 == 0) {
      local_38 = (char *)0x0;
      local_48 = (char *)0x0;
      pcStack_40 = (char *)0x0;
      ppcVar9 = &local_48;
      uVar5 = 2;
    }
    else {
      iVar4 = FUN_143715270(&local_68);
      pcStack_58 = pcVar10;
      local_60 = (char *)(iVar4 + lVar1);
      local_50 = pcVar13;
      if (pcVar10 != (char *)0x0) {
        local_50 = (char *)FUN_1437151a0(pcVar10);
      }
      if (((ulonglong)local_50 & 1) != 0) {
        FUN_1437329e0((ulonglong)local_50 & 0xfffffffffffffffe);
      }
      ppcVar9 = &local_60;
      uVar5 = 1;
    }
    local_28 = *ppcVar9;
    pcVar14 = ppcVar9[1];
    pcVar12 = ppcVar9[2];
    ppcVar9[2] = (char *)0x0;
    if (((uVar5 & 2) != 0) &&
       (local_70 = uVar5 & 0xfffffffd, uVar5 = local_70, ((ulonglong)local_38 & 1) != 0)) {
      FUN_143733a60((ulonglong)local_38 & 0xfffffffffffffffe);
      uVar5 = local_70;
    }
    if (((uVar5 & 1) != 0) && (((ulonglong)local_50 & 1) != 0)) {
      FUN_143733a60((ulonglong)local_50 & 0xfffffffffffffffe);
    }
    pcVar10 = local_68;
    bVar11 = (byte)pcVar12;
    if (local_78 != (char *)0x0) {
      pcVar13 = local_78 + 1;
    }
    local_48 = local_28;
    pcStack_40 = pcVar14;
    local_38 = pcVar12;
    if (((ulonglong)pcVar12 & 1) != 0) {
      FUN_1437329e0((ulonglong)pcVar12 & 0xfffffffffffffffe);
    }
  }
  puVar7 = (undefined4 *)FUN_14378c9b0(param_1,&local_70,&local_48,pcVar10,param_5,pcVar13,param_7);
  *local_res10 = *puVar7;
  param_2 = local_res10;
  if ((bVar11 & 1) != 0) {
    FUN_143733a60((ulonglong)pcVar12 & 0xfffffffffffffffe);
    param_2 = local_res10;
  }
LAB_14378ce5d:
  if ((*(byte *)(local_res18 + 2) & 1) != 0) {
    FUN_143733a60(local_res18[2] & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14378ce90 FUN_14378ce90 body=152 status=ok
// SIG undefined FUN_14378ce90(void)

longlong FUN_14378ce90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong local_res10;
  
  FUN_1437140a0(&local_res10);
  if (1 < local_res10) {
    if (local_res10 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_143714de0();
    }
    iVar1 = FUN_14378cf30(param_2,0xffffffff);
    iVar2 = FUN_143715270(&local_res10);
    iVar3 = FUN_1437152f0(uVar4);
    return (ulonglong)*(ushort *)((longlong)iVar3 + (longlong)iVar1 * 2 + -iVar2 + param_1) +
           -iVar2 + param_1;
  }
  return 0;
}



// FUNCTION 14378cf30 FUN_14378cf30 body=82 status=ok
// SIG undefined FUN_14378cf30(void)

undefined4 FUN_14378cf30(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  puVar2 = (undefined8 *)FUN_1437149e0(param_1,local_28,&DAT_1467f7870);
  puVar1 = (undefined4 *)*puVar2;
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  if (puVar1 != (undefined4 *)0x0) {
    return *puVar1;
  }
  return param_2;
}



// FUNCTION 14378cf90 FUN_14378cf90 body=182 status=ok
// SIG undefined FUN_14378cf90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14378cf90(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b84698) {
    _Init_thread_header(&DAT_146b84698);
    if (DAT_146b84698 == -1) {
      _DAT_146b846e0 = FUN_14378e820;
      _DAT_146b846d8 = FUN_14378e820;
      _DAT_146b846d0 = FUN_14378e820;
      _DAT_146b846c8 = FUN_14378e960;
      _DAT_146b846c0 = FUN_14378e960;
      _DAT_146b846b8 = FUN_14378e960;
      _DAT_146b846b0 = FUN_14378e960;
      _DAT_146b846a8 = &LAB_14378e950;
      DAT_146b846a0 = FUN_14378e9e0;
      _Init_thread_footer(&DAT_146b84698);
    }
  }
  return param_1;
}



// FUNCTION 14378d050 ToString body=14 status=ok
// SIG undefined ToString(void)

undefined8 * hkVdb::Detail::ToString::ToString(undefined8 *param_1)

{
  *param_1 = FUN_14378dd90;
  return param_1;
}



// FUNCTION 14378d060 FUN_14378d060 body=118 status=ok
// SIG undefined FUN_14378d060(void)

/* WARNING: Removing unreachable block (ram,0x00014378d0a6) */

undefined8 * FUN_14378d060(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 14378d0e0 FUN_14378d0e0 body=128 status=ok
// SIG undefined FUN_14378d0e0(void)

void FUN_14378d0e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 3) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) {
    FUN_143702e10(uVar1,param_1[2],8,*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,2,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 14378d160 FUN_14378d160 body=220 status=ok
// SIG undefined FUN_14378d160(void)

/* WARNING: Removing unreachable block (ram,0x00014378d227) */

longlong * FUN_14378d160(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (param_1[4] == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    lVar1 = *param_1;
    lVar2 = *(longlong *)param_1[5];
    iVar3 = FUN_143715270();
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1437151a0(lVar2);
    }
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    *param_2 = iVar3 + lVar1;
    param_2[1] = lVar2;
    param_2[2] = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    if ((uVar4 & 1) != 0) {
      FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 14378d240 FUN_14378d240 body=250 status=ok
// SIG undefined FUN_14378d240(void)

longlong FUN_14378d240(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  undefined1 local_18 [16];
  
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return param_1;
  }
  do {
    if (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(param_1 + 0x30)) {
      do {
        cVar2 = FUN_14378d990(**(undefined8 **)(param_1 + 0x28));
        if (cVar2 != '\0') break;
        bVar6 = 0;
        if (*(int *)(param_1 + 0x18) != 0) {
          lVar5 = **(longlong **)(param_1 + 0x28);
          puVar3 = (undefined8 *)FUN_143714490(lVar5,1);
          if (puVar3 != (undefined8 *)0x0) {
            bVar6 = (byte)*puVar3;
          }
          lVar4 = 0;
          if ((bVar6 & 0xf) == 6) {
            lVar4 = lVar5;
          }
          if (lVar4 != 0) break;
        }
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
      } while (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(param_1 + 0x30));
    }
    if (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(param_1 + 0x30)) {
      return param_1;
    }
    if (*(ulonglong *)(param_1 + 0x30) == 0) {
      lVar5 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar5 = hkReflect::RecordType::getParentRecord(*(undefined8 *)(param_1 + 0x20));
    }
    *(longlong *)(param_1 + 0x20) = lVar5;
    if (lVar5 == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      puVar3 = (undefined8 *)FUN_143714d80(lVar5,local_18);
      uVar1 = puVar3[1];
      *(undefined8 *)(param_1 + 0x28) = *puVar3;
      *(undefined8 *)(param_1 + 0x30) = uVar1;
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return param_1;
    }
  } while( true );
}



// FUNCTION 14378d340 FUN_14378d340 body=418 status=ok
// SIG undefined FUN_14378d340(void)

undefined4 *
FUN_14378d340(longlong *param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulonglong *puVar6;
  byte bVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  if (*param_1 == 0) {
    *param_2 = 0x80040200;
    return param_2;
  }
  puVar2 = (ulonglong *)*param_4;
  bVar7 = 1;
  lVar3 = param_4[1];
  if (puVar2 != puVar2 + (longlong)(int)lVar3 * 4) {
    puVar6 = puVar2 + 3;
    do {
      FUN_1437165f0(&local_48,puVar6 + -3);
      local_30 = *puVar6;
      local_40 = puVar6[-2];
      local_38 = puVar6[-1];
      if ((local_30 & 1) != 0) {
        FUN_1437329e0(local_30 & 0xfffffffffffffffe);
      }
      local_78 = local_40;
      local_70 = local_38;
      local_68 = local_30;
      if ((local_30 & 1) != 0) {
        FUN_1437329e0(local_30 & 0xfffffffffffffffe);
      }
      local_60 = *param_3;
      local_50 = param_3[2];
      uVar8 = local_48 & 0xfffffffffffffffe;
      local_58 = param_3[1];
      if ((local_50 & 1) != 0) {
        FUN_1437329e0(local_50 & 0xfffffffffffffffe);
      }
      puVar5 = (undefined4 *)FUN_14378d540(param_1,local_res8,&local_60,uVar8,&local_78);
      bVar7 = bVar7 & ((byte)((uint)*puVar5 >> 0x1f) ^ 1);
      if ((local_30 & 1) != 0) {
        FUN_143733a60(local_30 & 0xfffffffffffffffe);
      }
      FUN_143716650(&local_48);
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 4;
    } while (puVar1 != puVar2 + (longlong)(int)lVar3 * 4);
    if (bVar7 == 0) {
      uVar4 = 0x80040200;
      goto LAB_14378d4b6;
    }
  }
  uVar4 = 0;
LAB_14378d4b6:
  *param_2 = uVar4;
  return param_2;
}



// FUNCTION 14378d4f0 FUN_14378d4f0 body=77 status=ok
// SIG undefined FUN_14378d4f0(void)

undefined4 FUN_14378d4f0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_res18 [2];
  
  local_res18[0] = *(undefined8 *)(param_1 + 8);
  puVar2 = (undefined4 *)FUN_14378d340(local_res18,local_res8,param_1,param_2);
  uVar1 = *puVar2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return uVar1;
}



// FUNCTION 14378d540 FUN_14378d540 body=423 status=ok
// SIG undefined FUN_14378d540(void)

undefined8
FUN_14378d540(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             longlong param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_ac;
  
  FUN_143745310(&local_b8,param_4);
  uVar5 = local_b8;
  uVar1 = param_3[2];
  uVar2 = *param_3;
  uVar3 = param_3[1];
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    if ((uVar1 & 1) != 0) {
      FUN_143733a60(uVar1 & 0xfffffffffffffffe);
    }
  }
  local_f8 = uVar3;
  local_f0 = uVar2;
  local_e8 = uVar3;
  local_e0 = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    if ((uVar1 & 1) != 0) {
      FUN_143733a60(uVar1 & 0xfffffffffffffffe);
    }
  }
  lVar4 = param_5;
  local_d8 = local_f0;
  local_d0 = local_e8;
  local_c8 = local_e0;
  if ((local_e0 & 1) != 0) {
    FUN_1437329e0(local_e0 & 0xfffffffffffffffe);
  }
  FUN_14378c9b0(&local_f8,param_2,&local_d8,local_f8,uVar5,uVar5,&param_5);
  if ((local_e0 & 1) != 0) {
    FUN_143733a60(local_e0 & 0xfffffffffffffffe);
  }
  local_b0 = 0;
  if (-1 < (int)local_ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_b8,1,local_ac & 0x3fffffff);
  }
  local_b8 = 0;
  local_ac = 0x80000000;
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    FUN_143733a60(param_3[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(lVar4 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14378d6f0 FUN_14378d6f0 body=166 status=ok
// SIG undefined FUN_14378d6f0(void)

void FUN_14378d6f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  LPVOID pvVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_3 + 3)) {
    lVar3 = 0;
    do {
      FUN_143744e50(*(undefined8 *)(param_3[2] + lVar3));
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_3 + 3));
  }
  FUN_143737c10(param_1,param_2,(longlong)*(int *)*param_3);
  FUN_14378d0e0(param_3);
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
                    /* WARNING: Could not recover jumptable at 0x00014378d792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
            (*(longlong **)((longlong)pvVar1 + 0x58),param_3,0x20);
  return;
}



// FUNCTION 14378d7a0 FUN_14378d7a0 body=108 status=ok
// SIG undefined FUN_14378d7a0(void)

void FUN_14378d7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined8 *)FUN_143714490(param_2,1);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*puVar1;
  }
                    /* WARNING: Jumptable at 0x00014378d809 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_146b846a0)[uVar2 & 0xf])(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14378d810 FUN_14378d810 body=369 status=ok
// SIG undefined FUN_14378d810(void)

/* WARNING: Removing unreachable block (ram,0x00014378d865) */

undefined8 * FUN_14378d810(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  
  lVar1 = param_1[1];
  puVar5 = (undefined8 *)FUN_143714490(lVar1,1);
  lVar9 = 0;
  bVar7 = 0;
  bVar8 = bVar7;
  if (puVar5 != (undefined8 *)0x0) {
    bVar8 = (byte)*puVar5;
  }
  lVar6 = lVar9;
  if ((bVar8 & 0xf) == 7) {
    lVar6 = lVar1;
  }
  if (lVar6 == 0) {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    param_2[1] = uVar3;
    *param_2 = uVar2;
    param_2[2] = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    lVar1 = param_2[1];
    *(undefined4 *)(param_2 + 3) = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)FUN_143714490(lVar1,1);
      if (puVar5 != (undefined8 *)0x0) {
        bVar7 = (byte)*puVar5;
      }
      if ((bVar7 & 0xf) == 7) {
        lVar9 = lVar1;
      }
      param_2[4] = lVar9;
      FUN_14378d240(param_2);
    }
    if ((uVar4 & 1) != 0) {
      FUN_143733a60(uVar4 & 0xfffffffffffffffe);
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    lVar1 = param_2[1];
    *(undefined4 *)(param_2 + 3) = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)FUN_143714490(lVar1,1);
      if (puVar5 != (undefined8 *)0x0) {
        bVar7 = (byte)*puVar5;
      }
      if ((bVar7 & 0xf) == 7) {
        lVar9 = lVar1;
      }
      param_2[4] = lVar9;
      FUN_14378d240(param_2);
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 14378d990 FUN_14378d990 body=194 status=ok
// SIG undefined FUN_14378d990(void)

undefined8 FUN_14378d990(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_1 != 0) {
    FUN_14378cf90(&local_28);
    local_20 = 1;
    local_18 = 0;
    local_28 = param_1;
    puVar2 = (undefined8 *)FUN_143714490(param_1,1);
    lVar4 = local_28;
    uVar1 = 0;
    bVar5 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      bVar5 = (byte)*puVar2;
    }
    lVar3 = 0;
    if ((bVar5 & 0xf) == 7) {
      lVar3 = param_1;
    }
    if ((lVar3 != 0) || ((int)local_20 != 0)) {
      puVar2 = (undefined8 *)FUN_143714490(local_28,1);
      if (puVar2 != (undefined8 *)0x0) {
        uVar1 = (uint)*puVar2;
      }
      lVar4 = (*(code *)(&DAT_146b846a0)[uVar1 & 0xf])(&local_28,lVar4,0,0,0);
      if ((lVar4 != 0) && ((int)local_18 == 0)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14378da60 FUN_14378da60 body=806 status=ok
// SIG undefined FUN_14378da60(void)

longlong FUN_14378da60(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                      LPCRITICAL_SECTION param_5)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_res18 [16];
  longlong local_148;
  undefined8 local_140;
  ulonglong uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  uint local_11c;
  longlong local_118 [2];
  longlong local_108;
  longlong local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined **local_d8 [22];
  
  if (param_3 != 0) {
    local_128 = 0;
    uVar10 = 0;
    local_120 = 0;
    local_11c = 0x80000000;
    Audio::FDelayStereo::FDelayStereo(local_118);
    local_e8 = 0;
    uStack_e0 = 0;
    pcVar3 = (char *)(**(code **)(*param_1 + 0x30))(param_1,local_res18);
    if (*pcVar3 == '\0') {
      uVar7 = FUN_143703a50();
      if ((local_11c & 0x3fffffff) < 1000) {
        uVar2 = (local_11c & 0x3fffffff) * 2;
        uVar9 = 1000;
        if (1000 < uVar2) {
          uVar9 = uVar2;
        }
        FUN_14370c310(uVar7,&local_128,uVar9,1);
      }
      local_148 = 0;
      lVar4 = AActor::GetLevel(&local_128);
    }
    else {
      local_148 = 0;
      lVar4 = FUN_143747dd0(param_1);
    }
    if (lVar4 != 0) {
      FUN_14370c030(lVar4);
    }
    if (local_148 != 0) {
      FUN_14370c150();
    }
    local_130 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_148 = lVar4;
    FUN_143747cb0(local_118,&local_148);
    if (local_148 != 0) {
      FUN_14370c150();
    }
    FUN_143734d40(local_d8,param_2,local_118);
    local_d8[0] = `struct_hkResult___cdecl_hkVdbSerialize::serializeType(hkStreamWriter&___ptr64,hkVdbSerialize::TypeSave&___ptr64,hkReflect::Type_const*___ptr64,hkVdbReflect::TypeInfo&___ptr64,hkCriticalSection*___ptr64)'
                  ::__l11::NoPointersIdFromVar::vftable;
    local_148 = param_3;
    puVar5 = (undefined8 *)FUN_143714490(param_3,1);
    if (puVar5 != (undefined8 *)0x0) {
      uVar10 = (uint)*puVar5;
    }
    local_140 = FUN_1437157a0(uVar10 & 0xf);
    uStack_138 = FUN_1437151a0(local_140);
    if ((uStack_138 & 1) != 0) {
      FUN_1437329e0(uStack_138 & 0xfffffffffffffffe);
    }
    FUN_1437353b0(local_d8,&local_148);
    if ((uStack_138 & 1) != 0) {
      FUN_143733a60(uStack_138 & 0xfffffffffffffffe);
    }
    FUN_143734fb0(local_d8);
    if ((local_f8 - local_108) + local_118[0] == 0) {
      lVar4 = 0x80040200;
    }
    else {
      FUN_14378cf90(&local_148);
      local_140 = 0;
      uStack_138 = 0;
      *(undefined4 *)(param_4 + 8) = 0;
      *(undefined4 *)(param_4 + 0x18) = 0;
      local_148 = param_3;
      puVar5 = (undefined8 *)FUN_143714490(param_3,1);
      lVar4 = local_148;
      uVar10 = 0;
      bVar8 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        bVar8 = (byte)*puVar5;
      }
      lVar6 = 0;
      if ((bVar8 & 0xf) == 7) {
        lVar6 = param_3;
      }
      if ((lVar6 != 0) || ((int)local_140 != 0)) {
        puVar5 = (undefined8 *)FUN_143714490(local_148,1);
        if (puVar5 != (undefined8 *)0x0) {
          uVar10 = (uint)*puVar5;
        }
        (*(code *)(&DAT_146b846a0)[uVar10 & 0xf])(&local_148,lVar4,param_4,0,0);
      }
      if (param_5 != (LPCRITICAL_SECTION)0x0) {
        EnterCriticalSection(param_5);
      }
      FUN_143747e50(local_118);
      if (local_120 != 0) {
        (**(code **)(*param_1 + 0x20))(param_1,local_128);
      }
      pcVar3 = (char *)(**(code **)(*param_1 + 0x18))(param_1,local_res18);
      cVar1 = *pcVar3;
      if (param_5 != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(param_5);
      }
      lVar4 = 0x80040200;
      if (cVar1 != '\0') {
        lVar4 = 0;
      }
    }
    UParticleModuleSubUV::PostLoad(local_118);
    uVar7 = FUN_143703a50();
    local_120 = 0;
    if (-1 < (int)local_11c) {
      FUN_143702e10(uVar7,local_128,1,local_11c & 0x3fffffff);
    }
    return lVar4;
  }
  return 0x80040200;
}



// FUNCTION 14378dd90 FUN_14378dd90 body=89 status=ok
// SIG undefined FUN_14378dd90(void)

void FUN_14378dd90(undefined8 *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1437152f0(param_1[1]);
  if (iVar1 == 8) {
    hkStringBuf::printf(param_2,"%#018llx",*(undefined8 *)*param_1);
    return;
  }
  hkStringBuf::printf(param_2,"%#010x",(ulonglong)*(uint *)*param_1);
  return;
}



// FUNCTION 14378ddf0 FUN_14378ddf0 body=403 status=ok
// SIG undefined FUN_14378ddf0(void)

undefined8
FUN_14378ddf0(longlong param_1,undefined *param_2,longlong param_3,longlong param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_1f8 [96];
  ulonglong local_198;
  longlong local_188;
  
  if (param_5 < 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (uint)(*(int *)(param_1 + 0xc) == 0);
  }
  else {
    puVar1 = (undefined8 *)FUN_143714420(param_2,1);
    uVar3 = 0;
    uVar2 = uVar3;
    if (puVar1 != (undefined8 *)0x0) {
      uVar2 = *puVar1;
    }
    if ((int)((ulonglong)uVar2 >> 8) != 0) {
      puVar1 = (undefined8 *)FUN_143714420(param_2,2);
      if (puVar1 != (undefined8 *)0x0) {
        uVar3 = *puVar1;
      }
      local_188 = FUN_14378d7a0(param_1,uVar3,param_3,param_4,param_5);
      if (param_4 == 0) {
        if (local_188 != 0) {
          param_4 = 0;
          goto LAB_14378df61;
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (uint)(*(int *)(param_1 + 0xc) == 0);
        param_4 = 0;
        goto LAB_14378df5a;
      }
      if (local_188 != 0) {
        FUN_143737060(local_1f8);
        FUN_143737b00(local_1f8,param_2,0xffffffff);
        FUN_143737560(local_1f8,0);
        local_198 = local_198 | 2;
        uVar3 = FUN_143737a80(local_1f8,param_4);
        uVar2 = FUN_143703a50();
        if (*(uint *)(param_3 + 0x18) == (*(uint *)(param_3 + 0x1c) & 0x3fffffff)) {
          FUN_14370c460(uVar2,param_3 + 0x10,8);
        }
        *(undefined8 *)(*(longlong *)(param_3 + 0x10) + (longlong)*(int *)(param_3 + 0x18) * 8) =
             uVar3;
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
        FUN_143737160(local_1f8);
        return uVar3;
      }
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (uint)(*(int *)(param_1 + 0xc) == 0);
  }
LAB_14378df5a:
  param_2 = &DAT_1467df8b8;
LAB_14378df61:
  uVar3 = FUN_14378e570(param_1,param_2,param_3,param_4);
  return uVar3;
}



// FUNCTION 14378df90 FUN_14378df90 body=436 status=ok
// SIG undefined FUN_14378df90(void)

undefined8 FUN_14378df90(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  LPVOID pvVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 local_218;
  longlong local_210;
  ulonglong uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 local_1e8 [96];
  ulonglong local_188;
  undefined *local_170;
  
  uVar5 = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (uint)(*(int *)(param_1 + 0xc) == 0);
  if (param_4 != 0) {
    FUN_143737060(local_1e8);
    FUN_143737b00(local_1e8,param_2,0xffffffff);
    local_188 = local_188 | 4;
    local_170 = &DAT_146b84688;
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),8);
    uVar3 = uVar5;
    if (lVar2 != 0) {
      uVar3 = hkVdb::Detail::ToString::ToString(lVar2);
    }
    local_210 = 0;
    uStack_208 = 0;
    if (uVar3 == 0) {
      local_200 = 0;
      uStack_1f8 = 0;
      puVar4 = &local_200;
    }
    else {
      puVar4 = (undefined8 *)FUN_14371d5c0(&local_200,uVar3,&DAT_1467f79b0);
    }
    local_218 = *puVar4;
    local_210 = puVar4[1];
    if (local_210 != 0) {
      uVar5 = FUN_1437151a0();
    }
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    if ((uStack_208 & 1) != 0) {
      FUN_143733a60(uStack_208 & 0xfffffffffffffffe);
    }
    uStack_208 = uVar5;
    FUN_143737490(local_1e8,&local_218);
    if ((uStack_208 & 1) != 0) {
      FUN_143733a60(uStack_208 & 0xfffffffffffffffe);
    }
    FUN_143737560(local_1e8,0);
    param_2 = FUN_143737a80(local_1e8,param_4);
    uVar6 = FUN_143703a50();
    if (*(uint *)(param_3 + 0x18) == (*(uint *)(param_3 + 0x1c) & 0x3fffffff)) {
      FUN_14370c460(uVar6,param_3 + 0x10,8);
    }
    *(undefined8 *)(*(longlong *)(param_3 + 0x10) + (longlong)*(int *)(param_3 + 0x18) * 8) =
         param_2;
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
    FUN_143737160(local_1e8);
  }
  return param_2;
}



// FUNCTION 14378e150 FUN_14378e150 body=1052 status=ok
// SIG undefined FUN_14378e150(void)

longlong FUN_14378e150(longlong *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                      int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  LPVOID pvVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined4 local_res20;
  undefined4 uStackX_24;
  longlong in_stack_fffffffffffffda8;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined1 local_218 [88];
  undefined8 local_1c0;
  ulonglong local_1b8;
  undefined *local_1a0;
  undefined **local_100;
  undefined8 local_e0;
  
  if (param_4 == 0) {
    lVar8 = hkReflect::RecordType::getParentRecord(param_2);
    if (lVar8 != 0) {
      in_stack_fffffffffffffda8 =
           CONCAT44((int)((ulonglong)in_stack_fffffffffffffda8 >> 0x20),param_5);
      FUN_14378d7a0(param_1,lVar8,param_3,0,in_stack_fffffffffffffda8);
    }
    FUN_143714d80(param_2,&local_240);
    iVar3 = 0;
    if (0 < (int)(local_238 - local_240 >> 3)) {
      do {
        uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffda8 >> 0x20);
        FUN_143714060(&local_res20,*(undefined8 *)(local_240 + (longlong)iVar3 * 8));
        iVar5 = FUN_143715270(&local_res20);
        uVar9 = *(undefined8 *)(CONCAT44(uStackX_24,local_res20) + 8);
        puVar10 = (undefined8 *)FUN_143714490(uVar9,1);
        if (puVar10 == (undefined8 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = (uint)*puVar10;
        }
        in_stack_fffffffffffffda8 = CONCAT44(uVar4,param_5 + iVar5);
        (*(code *)(&DAT_146b846a0)[uVar11 & 0xf])(param_1,uVar9,param_3,0,in_stack_fffffffffffffda8)
        ;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(local_238 - local_240 >> 3));
    }
  }
  else {
    FUN_143737060(local_218);
    FUN_143737b00(local_218,param_2,0xffffffff);
    puVar10 = (undefined8 *)0x0;
    if (param_2 == *param_1) {
      local_1b8 = local_1b8 | 0x400000;
      local_100 = &PTR_vftable_1467f6f00;
      pvVar6 = TlsGetValue(DAT_146b7bf70);
      if (pvVar6 == (LPVOID)0x0) {
        pvVar6 = DAT_146b7bf68;
      }
      puVar7 = (undefined8 *)
               (**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 8))
                         (*(longlong **)((longlong)pvVar6 + 0x58),0x20);
      param_3 = puVar10;
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[1] = 0;
        puVar7[3] = 0;
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 1) = 0;
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0x80000000;
        puVar7[2] = 0;
        *(undefined4 *)(puVar7 + 3) = 0;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = 0x80000000;
        param_3 = puVar7;
      }
      FUN_143737550(local_218,FUN_14378d6f0,param_3);
    }
    else {
      FUN_143737560(local_218,0);
    }
    lVar8 = hkReflect::RecordType::getParentRecord(param_2);
    if (lVar8 != 0) {
      in_stack_fffffffffffffda8 =
           CONCAT44((int)((ulonglong)in_stack_fffffffffffffda8 >> 0x20),param_5);
      local_1c0 = FUN_14378d7a0(param_1,lVar8,param_3,param_4,in_stack_fffffffffffffda8);
    }
    local_1b8 = local_1b8 | 0x4000000;
    local_e0 = 0;
    FUN_143714d80(param_2,&local_240);
    if (0 < (int)(local_238 - local_240 >> 3)) {
      do {
        uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffda8 >> 0x20);
        FUN_143714060(&local_248,*(undefined8 *)(local_240 + (longlong)(int)puVar10 * 8));
        local_228 = FUN_1437151c0(&local_248);
        iVar3 = FUN_143715270(&local_248);
        FUN_143714f30(&local_248,&local_res20);
        local_230 = *(undefined8 *)(local_248 + 8);
        puVar7 = (undefined8 *)FUN_143714490(local_230,1);
        uVar11 = 0;
        if (puVar7 != (undefined8 *)0x0) {
          uVar11 = (uint)*puVar7;
        }
        in_stack_fffffffffffffda8 =
             (*(code *)(&DAT_146b846a0)[uVar11 & 0xf])
                       (param_1,local_230,param_3,param_4,CONCAT44(uVar4,param_5 + iVar3));
        if (in_stack_fffffffffffffda8 == 0) {
          *(uint *)(param_1 + 2) = (int)param_1[2] + (uint)(*(int *)((longlong)param_1 + 0xc) == 0);
          in_stack_fffffffffffffda8 = FUN_14378e570(param_1,&DAT_1467df8b8,param_3,param_4);
        }
        FUN_143737600(local_218,local_228,iVar3,local_res20,in_stack_fffffffffffffda8);
        uVar11 = (int)puVar10 + 1;
        puVar10 = (undefined8 *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)(local_238 - local_240 >> 3));
    }
    local_1b8 = local_1b8 | 4;
    local_1a0 = &DAT_146b84668;
    lVar8 = FUN_143737a80(local_218,param_4);
    if (param_2 == *param_1) {
      uVar9 = FUN_143703a50();
      uVar11 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
      if (uVar11 < 2) {
        uVar11 = uVar11 * 2;
        uVar2 = 2;
        if (2 < uVar11) {
          uVar2 = uVar11;
        }
        FUN_14370c310(uVar9,param_3,uVar2,2);
      }
      *(undefined4 *)(param_3 + 1) = 2;
      puVar1 = (undefined4 *)*param_3;
      uVar4 = hkReflect::TypeBuilder::getTotalNeededMemory(local_218);
      *puVar1 = uVar4;
      FUN_143737160(local_218);
      param_2 = lVar8;
    }
    else {
      uVar9 = FUN_143703a50();
      if (*(uint *)(param_3 + 3) == (*(uint *)((longlong)param_3 + 0x1c) & 0x3fffffff)) {
        FUN_14370c460(uVar9,param_3 + 2,8);
      }
      *(longlong *)(param_3[2] + (longlong)*(int *)(param_3 + 3) * 8) = lVar8;
      *(int *)(param_3 + 3) = *(int *)(param_3 + 3) + 1;
      FUN_143737160(local_218);
      param_2 = lVar8;
    }
  }
  return param_2;
}



// FUNCTION 14378e570 FUN_14378e570 body=178 status=ok
// SIG undefined FUN_14378e570(void)

undefined8 FUN_14378e570(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 local_1e8 [480];
  
  if (param_4 != 0) {
    FUN_143737060(local_1e8);
    FUN_143737b00(local_1e8,param_2,0xffffffff);
    FUN_143737560(local_1e8,0);
    param_2 = FUN_143737a80(local_1e8,param_4);
    uVar1 = FUN_143703a50();
    if (*(uint *)(param_3 + 0x18) == (*(uint *)(param_3 + 0x1c) & 0x3fffffff)) {
      FUN_14370c460(uVar1,param_3 + 0x10,8);
    }
    *(undefined8 *)(*(longlong *)(param_3 + 0x10) + (longlong)*(int *)(param_3 + 0x18) * 8) =
         param_2;
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
    FUN_143737160(local_1e8);
  }
  return param_2;
}



// FUNCTION 14378e630 FUN_14378e630 body=496 status=ok
// SIG undefined FUN_14378e630(void)

undefined8
FUN_14378e630(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,int param_5)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 local_208 [16];
  ulonglong local_1f8;
  undefined1 local_1e8 [96];
  ulonglong local_188;
  undefined *local_170;
  
  if (param_5 < 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (uint)(*(int *)(param_1 + 0xc) == 0);
    param_2 = FUN_14378e570(param_1,&DAT_1467df8b8);
  }
  else if (param_4 == 0) {
    if (param_3 != (longlong *)0x0) {
      uVar3 = FUN_143703a50();
      if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar3,param_3,2);
      }
      *(short *)(*param_3 + (longlong)(int)param_3[1] * 2) = (short)param_5;
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      uVar3 = FUN_143703a50();
      if (*(uint *)(param_3 + 3) == (*(uint *)((longlong)param_3 + 0x1c) & 0x3fffffff)) {
        FUN_14370c460(uVar3,param_3 + 2,8);
      }
      *(undefined8 *)(param_3[2] + (longlong)(int)param_3[3] * 8) = param_2;
      *(int *)(param_3 + 3) = (int)param_3[3] + 1;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
  }
  else {
    FUN_143737060(local_1e8);
    FUN_143737b00(local_1e8,param_2,0xffffffff);
    local_188 = local_188 | 4;
    local_170 = &DAT_146b84678;
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    puVar2 = (undefined4 *)
             (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar1 + 0x58),4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
    }
    *puVar2 = *(undefined4 *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    FUN_14378c910(local_208,puVar2,(undefined1)param_5);
    FUN_143737490(local_1e8,local_208);
    if ((local_1f8 & 1) != 0) {
      FUN_143733a60(local_1f8 & 0xfffffffffffffffe);
    }
    FUN_143737560(local_1e8,0);
    param_2 = FUN_143737a80(local_1e8,param_4);
    uVar3 = FUN_143703a50();
    if (*(uint *)(param_3 + 3) == (*(uint *)((longlong)param_3 + 0x1c) & 0x3fffffff)) {
      FUN_14370c460(uVar3,param_3 + 2,8);
    }
    *(undefined8 *)(param_3[2] + (longlong)(int)param_3[3] * 8) = param_2;
    *(int *)(param_3 + 3) = (int)param_3[3] + 1;
    FUN_143737160(local_1e8);
  }
  return param_2;
}



// FUNCTION 14378e820 FUN_14378e820 body=304 status=ok
// SIG undefined FUN_14378e820(void)

void FUN_14378e820(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  puVar3 = (undefined8 *)FUN_143714490(param_2,1);
  lVar5 = 0;
  uVar6 = 0;
  uVar2 = uVar6;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = (int)*puVar3;
  }
  lVar4 = lVar5;
  if (((byte)uVar2 & 0xf) == 8) {
    lVar4 = param_2;
  }
  if (lVar4 == 0) {
    puVar3 = (undefined8 *)FUN_143714490(param_2,1);
    bVar1 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar3;
    }
    lVar4 = lVar5;
    if ((bVar1 & 0xf) == 7) {
      lVar4 = param_2;
    }
    if (lVar4 == 0) {
      puVar3 = (undefined8 *)FUN_143714490(param_2,1);
      if (puVar3 != (undefined8 *)0x0) {
        uVar6 = (undefined4)*puVar3;
      }
      if (((byte)uVar6 & 0xf) == 6) {
        lVar5 = param_2;
      }
      if (lVar5 == 0) {
        *(uint *)(param_1 + 2) = (int)param_1[2] + (uint)(*(int *)((longlong)param_1 + 0xc) == 0);
        FUN_14378e570(param_1,&DAT_1467df8b8,param_3,param_4);
      }
      else {
        FUN_14378df90();
      }
    }
    else {
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
      if ((param_2 != *param_1) || ((int)param_1[1] != 0)) {
        uVar6 = 1;
      }
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
      FUN_14378e150(param_1,lVar4,param_3,param_4,param_5);
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
    }
  }
  else {
    FUN_14378ddf0(param_1,lVar4,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 14378e960 FUN_14378e960 body=127 status=ok
// SIG undefined FUN_14378e960(void)

void FUN_14378e960(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined8 *)FUN_143714490(param_2);
  if (puVar2 == (undefined8 *)0x0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (byte)*puVar2;
  }
  lVar3 = 0;
  if ((bVar1 & 0xf) == 3) {
    lVar3 = param_2;
  }
  if (lVar3 == 0) {
    FUN_14378e570(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_14378e630();
  }
  return;
}



// FUNCTION 14378e9e0 FUN_14378e9e0 body=145 status=ok
// SIG undefined FUN_14378e9e0(void)

void FUN_14378e9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = FUN_143755360(0x75a2b2b5,"Serialize\\hkVdbSerialize.cpp",0x1c3,
                        "`anonymous-namespace\'::VdbObjectTypeBuilder::visit",&DAT_145af3922,
                        "Not implemented",&DAT_145b909f0,0);
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_14378e570(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14378ea80 FUN_14378ea80 body=12 status=ok
// SIG undefined FUN_14378ea80(void)

void FUN_14378ea80(undefined8 param_1)

{
  FUN_143747d50(param_1,&PTR_vftable_1467f0638);
  return;
}



// FUNCTION 14378ea90 FUN_14378ea90 body=81 status=ok
// SIG undefined FUN_14378ea90(void)

void FUN_14378ea90(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  FUN_143df9480(param_1,0xf5);
  FUN_143df9450(param_1,param_2);
  FUN_143df9450(param_1,*(undefined4 *)(param_3 + 1));
  FUN_14379af70(param_1,*param_3,*(undefined4 *)(param_3 + 1));
  return;
}



// FUNCTION 14378eaf0 FUN_14378eaf0 body=267 status=ok
// SIG undefined FUN_14378eaf0(void)

void FUN_14378eaf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined8 local_48;
  int local_40;
  uint local_3c;
  longlong local_38 [4];
  
  if (param_1 != 0) {
    local_3c = 0x80000000;
    local_48 = 0;
    local_40 = 0;
    local_38[0] = 0;
    lVar1 = FUN_14378ea80(&local_48);
    if (lVar1 != 0) {
      FUN_14370c030(lVar1);
    }
    if (local_38[0] != 0) {
      FUN_14370c150();
    }
    local_38[3] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[0] = lVar1;
    FUN_14371c600(param_2,local_res8,param_3,local_38);
    if (local_38[0] != 0) {
      FUN_14370c150();
    }
    FUN_143df9450(param_1,local_40 + 9);
    FUN_14378ea90(param_1,param_4,&local_48);
    local_40 = 0;
    if (-1 < (int)local_3c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_48,1,local_3c & 0x3fffffff);
    }
  }
  return;
}



// FUNCTION 14378ec00 FUN_14378ec00 body=213 status=ok
// SIG undefined FUN_14378ec00(void)

undefined1 FUN_14378ec00(longlong param_1,undefined8 param_2)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  undefined8 local_res18;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x78);
  EnterCriticalSection(lpCriticalSection);
  uVar6 = 0xffffffffffffffff;
  local_res8[0] = 0xffffffff;
  puVar3 = (undefined8 *)FUN_14374a2a0(param_2);
  if (puVar3 == (undefined8 *)0x0) {
    local_res18 = 0xffffffffffffffff;
  }
  else {
    local_res18 = *puVar3;
  }
  piVar4 = (int *)FUN_14372d420(param_1 + 0x90,&local_res18,local_res8);
  iVar1 = *piVar4;
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x88) <= iVar1)) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    lVar5 = (longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x80);
    LeaveCriticalSection(lpCriticalSection);
    if (lVar5 != 0) {
      return *(undefined1 *)(lVar5 + 0x24);
    }
  }
  puVar3 = (undefined8 *)FUN_14374a2a0(param_2);
  if (puVar3 != (undefined8 *)0x0) {
    uVar6 = *puVar3;
  }
  lVar5 = FUN_14378ece0(param_1,uVar6,param_2);
  uVar2 = 0;
  if (lVar5 != 0) {
    uVar2 = *(undefined1 *)(lVar5 + 0x24);
  }
  return uVar2;
}



// FUNCTION 14378ece0 FUN_14378ece0 body=816 status=ok
// SIG undefined FUN_14378ece0(void)

longlong FUN_14378ece0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  int local_res8 [2];
  undefined8 local_res10;
  undefined1 local_78 [24];
  undefined8 *local_60;
  
  local_res10 = param_2;
  uVar5 = hkReflect::TypeDetail::skipDecorators(param_3);
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x78);
  EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)(param_1 + 0x88);
  local_res8[0] = iVar2;
  uVar6 = FUN_143703a50();
  uVar6 = FUN_14372aa90(param_1 + 0x90,uVar6,&local_res10,local_res8);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x90) + 8 + (longlong)(int)uVar6 * 0x10);
  if (iVar4 == iVar2) {
    plVar1 = (longlong *)(param_1 + 0x80);
    uVar7 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x88) == (*(uint *)(param_1 + 0x8c) & 0x3fffffff)) {
      FUN_14370c460(uVar7,plVar1,0x30);
    }
    puVar10 = (undefined8 *)((longlong)*(int *)(param_1 + 0x88) * 0x30 + *plVar1);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 1) = 0;
      *(undefined4 *)((longlong)puVar10 + 0xc) = 0x80000000;
      puVar10[2] = 0;
      *(undefined4 *)(puVar10 + 3) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = 0x80000000;
    }
    iVar3 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = iVar3 + 1;
    lVar12 = (longlong)iVar3 * 0x30 + *plVar1;
    *(int *)(lVar12 + 0x20) = iVar4;
    *(undefined1 *)(lVar12 + 0x24) = *(undefined1 *)(param_1 + 0x88);
    *(undefined8 *)(lVar12 + 0x28) = uVar5;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_14376ed10(local_78);
      iVar3 = FUN_14378da60(local_78,*(undefined8 *)(param_1 + 0xa0),uVar5,lVar12,0);
      if (iVar3 < 0) {
        FUN_14372f930(param_1 + 0x90,uVar6);
        uVar5 = FUN_143703a50();
        uVar9 = *(uint *)(param_1 + 0x8c) & 0x3fffffff;
        if ((int)uVar9 < iVar2) {
          iVar3 = uVar9 * 2;
          iVar4 = iVar2;
          if (iVar2 < iVar3) {
            iVar4 = iVar3;
          }
          FUN_14370c310(uVar5,plVar1,iVar4,0x30);
        }
        iVar4 = (*(int *)(param_1 + 0x88) - iVar2) + -1;
        lVar12 = (longlong)iVar4;
        if (-1 < iVar4) {
          puVar13 = (uint *)((longlong)iVar2 * 0x30 + *plVar1 + 0x1c + lVar12 * 0x30);
          do {
            uVar5 = FUN_143703a50();
            puVar13[-1] = 0;
            if (-1 < (int)*puVar13) {
              FUN_143702e10(uVar5,*(undefined8 *)(puVar13 + -3),8,*puVar13 & 0x3fffffff);
            }
            puVar13[-3] = 0;
            puVar13[-2] = 0;
            *puVar13 = 0x80000000;
            uVar5 = FUN_143703a50();
            puVar13[-5] = 0;
            if (-1 < (int)puVar13[-4]) {
              FUN_143702e10(uVar5,*(undefined8 *)(puVar13 + -7),2,puVar13[-4] & 0x3fffffff);
            }
            puVar13[-7] = 0;
            puVar13[-6] = 0;
            puVar13[-4] = 0x80000000;
            puVar13 = puVar13 + -0xc;
            lVar12 = lVar12 + -1;
          } while (-1 < lVar12);
        }
        lVar12 = 0;
        iVar4 = iVar2 - *(int *)(param_1 + 0x88);
        lVar11 = (longlong)iVar4;
        if (0 < iVar4) {
          puVar8 = (undefined4 *)((longlong)*(int *)(param_1 + 0x88) * 0x30 + *plVar1 + 0x1c);
          do {
            if ((undefined8 *)(puVar8 + -7) != (undefined8 *)0x0) {
              *(undefined8 *)(puVar8 + -7) = 0;
              puVar8[-5] = 0;
              puVar8[-4] = 0x80000000;
              *(undefined8 *)(puVar8 + -3) = 0;
              puVar8[-1] = 0;
              *puVar8 = 0x80000000;
            }
            puVar8 = puVar8 + 0xc;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        *(int *)(param_1 + 0x88) = iVar2;
        FUN_14376eda0(local_78);
      }
      else {
        EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x70));
        FUN_143df9450(*(undefined8 *)(param_1 + 0x28),*(int *)(local_60 + 1) + 5);
        FUN_143df9480(*(undefined8 *)(param_1 + 0x28),0x1f);
        FUN_143df9450(*(undefined8 *)(param_1 + 0x28),iVar4);
        FUN_14379af70(*(undefined8 *)(param_1 + 0x28),*local_60,*(undefined4 *)(local_60 + 1));
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x70));
        FUN_14376eda0(local_78);
      }
    }
  }
  else {
    lVar12 = (longlong)iVar4 * 0x30 + *(longlong *)(param_1 + 0x80);
  }
  LeaveCriticalSection(lpCriticalSection);
  return lVar12;
}



// FUNCTION 14378f010 FUN_14378f010 body=60 status=ok
// SIG undefined FUN_14378f010(void)

void FUN_14378f010(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14378f780(param_1,1);
      }
      param_1 = param_1 + 0x370;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14378f050 FUN_14378f050 body=57 status=ok
// SIG undefined FUN_14378f050(void)

void FUN_14378f050(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143790350(param_1,1);
      }
      param_1 = param_1 + 0x48;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14378f090 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkVdb::Detail::ToString>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        hkVdb::Detail::ToString::ToString(param_1);
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14378f0d0 FUN_14378f0d0 body=317 status=ok
// SIG undefined FUN_14378f0d0(void)

void FUN_14378f0d0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  longlong lVar7;
  int local_res18 [2];
  
  if (0 < param_3) {
    piVar6 = (int *)(param_1 + 0x24);
    lVar7 = (longlong)param_3;
    do {
      if (piVar6 + -9 != (int *)0x0) {
        *(undefined1 **)(piVar6 + -9) = &DAT_145b0a5bc;
        FUN_143716620(piVar6 + -7,&DAT_145b0a5bc);
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        puVar3 = (undefined8 *)
                 (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                           (*(longlong **)((longlong)pvVar2 + 0x58),0x18);
        puVar5 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[2] = 0;
          puVar3[1] = 0;
          *(undefined4 *)(puVar3 + 2) = 0x1ffff;
          *puVar3 = TestReferencedObject::vftable;
          puVar5 = puVar3;
        }
        *(undefined8 **)(piVar6 + -5) = puVar5;
        piVar6[-3] = 0;
        piVar6[-2] = 0;
        piVar6[-1] = 0;
        *piVar6 = -0x80000000;
        local_res18[0] = 1;
        uVar4 = FUN_143703a50();
        iVar1 = local_res18[0];
        puVar5 = (undefined8 *)0x0;
        if (local_res18[0] != 0) {
          puVar5 = (undefined8 *)FUN_143702d60(uVar4,1,local_res18);
        }
        *(undefined8 **)(piVar6 + -3) = puVar5;
        piVar6[-1] = iVar1;
        iVar1 = -0x80000000;
        if (local_res18[0] != 0) {
          iVar1 = local_res18[0];
        }
        *piVar6 = iVar1;
        *(undefined1 *)puVar5 = 1;
      }
      piVar6 = piVar6 + 10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 14378f210 FUN_14378f210 body=60 status=ok
// SIG undefined FUN_14378f210(void)

void FUN_14378f210(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14378fe40(param_1,1);
      }
      param_1 = param_1 + 0x318;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14378f250 FUN_14378f250 body=47 status=ok
// SIG undefined FUN_14378f250(void)

undefined1 FUN_14378f250(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143704060();
  if (cVar1 != '\0') {
    cVar1 = FUN_143704060(param_1 + 0x28);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14378f280 FUN_14378f280 body=594 status=ok
// SIG undefined FUN_14378f280(void)

void FUN_14378f280(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint *puVar4;
  longlong lVar5;
  
  if (0 < param_3) {
    lVar5 = (longlong)param_3;
    do {
      if (param_1 != (undefined8 *)0x0) {
        FUN_143790350(param_1 + 1,1);
        FUN_143790350(param_1 + 0xc,1);
        FUN_143790350(param_1 + 0x15,1);
        FUN_143790350(param_1 + 0x1e,1);
        lVar2 = 10;
        puVar3 = param_1 + 0x28;
        do {
          FUN_143790350(puVar3,1);
          puVar3 = puVar3 + 9;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
        lVar2 = 10;
        puVar3 = param_1 + 0x84;
        do {
          FUN_143790350(puVar3,1);
          FUN_143790350(puVar3 + 9,1);
          FUN_143790350(puVar3 + 0x12,1);
          puVar3 = puVar3 + 0x1b;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
        *param_1 = 1;
        uVar1 = FUN_143703a50();
        *(undefined4 *)(param_1 + 9) = 0;
        if (-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) {
          FUN_143702e10(uVar1,param_1[8],1,*(uint *)((longlong)param_1 + 0x4c) & 0x3fffffff);
        }
        param_1[8] = 0;
        *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
        if (param_1[7] != 0) {
          FUN_14370c150();
        }
        if (param_1 + 1 != (undefined8 *)0x0) {
          FUN_143790350(param_1 + 1,1);
        }
        puVar3 = param_1 + 0xc;
        FUN_143790480(puVar3);
        if (puVar3 != (undefined8 *)0x0) {
          FUN_143790350(puVar3,1);
          FUN_143790350(param_1 + 0x15,1);
          FUN_143790350(param_1 + 0x1e,1);
        }
        puVar3 = param_1 + 0x28;
        lVar2 = 10;
        puVar4 = (uint *)((longlong)param_1 + 0x184);
        do {
          uVar1 = FUN_143703a50();
          puVar4[-1] = 0;
          if (-1 < (int)*puVar4) {
            FUN_143702e10(uVar1,*(undefined8 *)(puVar4 + -3),1,*puVar4 & 0x3fffffff);
          }
          puVar4[-3] = 0;
          puVar4[-2] = 0;
          *puVar4 = 0x80000000;
          if (*(longlong *)(puVar4 + -5) != 0) {
            FUN_14370c150();
          }
          if (puVar3 != (undefined8 *)0x0) {
            FUN_143790350(puVar3,1);
          }
          puVar3 = puVar3 + 9;
          puVar4 = puVar4 + 0x12;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
        puVar3 = param_1 + 0x84;
        lVar2 = 10;
        do {
          FUN_143790480(puVar3);
          if (puVar3 != (undefined8 *)0x0) {
            FUN_143790350(puVar3,1);
            FUN_143790350(puVar3 + 9,1);
            FUN_143790350(puVar3 + 0x12,1);
          }
          puVar3 = puVar3 + 0x1b;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      param_1 = param_1 + 0x194;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14378f4e0 FUN_14378f4e0 body=9 status=ok
// SIG undefined FUN_14378f4e0(void)

void FUN_14378f4e0(longlong param_1)

{
  FUN_14370b790(param_1 + 0x38);
  return;
}



// FUNCTION 14378f500 thunk_FUN_14378f4e0 body=5 status=ok
// SIG undefined thunk_FUN_14378f4e0(void)

void thunk_FUN_14378f4e0(longlong param_1)

{
  FUN_14370b790(param_1 + 0x38);
  return;
}



// FUNCTION 14378f510 FUN_14378f510 body=63 status=ok
// SIG undefined FUN_14378f510(void)

undefined1 FUN_14378f510(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14378f4e0();
  if (cVar1 != '\0') {
    cVar1 = thunk_FUN_14378f4e0(param_1 + 0x48);
    if (cVar1 != '\0') {
      cVar1 = FUN_14378f4e0(param_1 + 0x90);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14378f550 FUN_14378f550 body=356 status=ok
// SIG undefined FUN_14378f550(void)

void FUN_14378f550(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  longlong lVar7;
  int local_res18 [2];
  
  if (0 < param_3) {
    piVar6 = (int *)(param_1 + 0x44);
    lVar7 = (longlong)param_3;
    do {
      if (piVar6 + -0x11 != (int *)0x0) {
        *(undefined1 *)(piVar6 + -0x11) = 1;
        *(undefined2 *)((longlong)piVar6 + -0x43) = 0x101;
        *(undefined1 *)((longlong)piVar6 + -0x41) = 1;
        piVar6[-0x10] = 0x10001;
        piVar6[-0xf] = 1;
        piVar6[-0xe] = 1;
        piVar6[-0xd] = 1;
        piVar6[-0xc] = 0;
        piVar6[-0xb] = 1;
        piVar6[-10] = 0;
        piVar6[-9] = 0;
        piVar6[-8] = 0x3ff00000;
        piVar6[-7] = 0x3f800000;
        piVar6[-6] = 0x3f800000;
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        puVar3 = (undefined8 *)
                 (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                           (*(longlong **)((longlong)pvVar2 + 0x58),0x18);
        puVar5 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[2] = 0;
          puVar3[1] = 0;
          *(undefined4 *)(puVar3 + 2) = 0x1ffff;
          *puVar3 = TestReferencedObject::vftable;
          puVar5 = puVar3;
        }
        *(undefined8 **)(piVar6 + -5) = puVar5;
        piVar6[-3] = 0;
        piVar6[-2] = 0;
        piVar6[-1] = 0;
        *piVar6 = -0x80000000;
        local_res18[0] = 1;
        uVar4 = FUN_143703a50();
        iVar1 = local_res18[0];
        puVar5 = (undefined8 *)0x0;
        if (local_res18[0] != 0) {
          puVar5 = (undefined8 *)FUN_143702d60(uVar4,1,local_res18);
        }
        *(undefined8 **)(piVar6 + -3) = puVar5;
        piVar6[-1] = iVar1;
        iVar1 = -0x80000000;
        if (local_res18[0] != 0) {
          iVar1 = local_res18[0];
        }
        *piVar6 = iVar1;
        *(undefined1 *)puVar5 = 1;
      }
      piVar6 = piVar6 + 0x12;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 14378f6c0 FUN_14378f6c0 body=101 status=ok
// SIG undefined FUN_14378f6c0(void)

void FUN_14378f6c0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143790350(param_1,1);
        FUN_143790350(param_1 + 0x48,1);
        FUN_143790350(param_1 + 0x90,1);
      }
      param_1 = param_1 + 0xd8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14378f730 FUN_14378f730 body=68 status=ok
// SIG undefined FUN_14378f730(void)

void FUN_14378f730(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14378fd30(param_1,1);
        FUN_14378fd30(param_1 + 0x28,1);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14378f780 FUN_14378f780 body=1450 status=ok
// SIG undefined FUN_14378f780(void)

/* WARNING: Removing unreachable block (ram,0x00014378fabd) */
/* WARNING: Removing unreachable block (ram,0x00014378fc69) */

undefined8 * FUN_14378f780(undefined8 *param_1,char param_2)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined *puVar10;
  int *piVar11;
  longlong *plVar12;
  char *pcVar13;
  uint *puVar14;
  longlong lVar15;
  int local_res18 [2];
  int local_res20;
  
  puVar4 = (undefined8 *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = &DAT_145b0a5bc;
  FUN_143716620(param_1 + 6);
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x18);
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0x1ffff;
    *puVar2 = TestReferencedObject::vftable;
    puVar5 = puVar2;
  }
  param_1[7] = puVar5;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  local_res18[0] = 1;
  uVar3 = FUN_143703a50();
  iVar9 = local_res18[0];
  if (local_res18[0] != 0) {
    puVar4 = (undefined8 *)FUN_143702d60(uVar3,1,local_res18);
  }
  param_1[8] = puVar4;
  *(int *)(param_1 + 9) = iVar9;
  iVar9 = -0x80000000;
  if (local_res18[0] != 0) {
    iVar9 = local_res18[0];
  }
  *(int *)((longlong)param_1 + 0x4c) = iVar9;
  puVar5 = param_1 + 0x28;
  *(undefined1 *)puVar4 = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  lVar7 = 10;
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
  do {
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0x80000000;
    puVar5 = puVar5 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = 10;
  puVar4 = param_1 + 0x3c;
  piVar11 = (int *)((longlong)param_1 + 0x204);
  do {
    *puVar4 = &DAT_145b0a5bc;
    lVar7 = lVar7 + -1;
    FUN_143716620(piVar11 + -7,&DAT_145b0a5bc);
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    puVar5 = (undefined8 *)(**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))();
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[2] = 0;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0x1ffff;
      *puVar5 = TestReferencedObject::vftable;
    }
    *(undefined8 **)(piVar11 + -5) = puVar5;
    piVar11[-3] = 0;
    piVar11[-2] = 0;
    piVar11[-1] = 0;
    *piVar11 = -0x80000000;
    local_res18[0] = 1;
    uVar3 = FUN_143703a50();
    local_res20 = local_res18[0];
    if (local_res18[0] == 0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      puVar6 = (undefined1 *)FUN_143702d60(uVar3,1,local_res18);
    }
    piVar11[-1] = local_res20;
    iVar9 = -0x80000000;
    if (local_res18[0] != 0) {
      iVar9 = local_res18[0];
    }
    *(undefined1 **)(piVar11 + -3) = puVar6;
    *piVar11 = iVar9;
    puVar4 = puVar4 + 5;
    piVar11 = piVar11 + 10;
    *puVar6 = 1;
  } while (lVar7 != 0);
  puVar10 = &DAT_145b0a5b8;
  if (param_2 != '\0') {
    puVar10 = &DAT_145b0a5bc;
  }
  *param_1 = puVar10;
  FUN_1437166c0(param_1 + 1,puVar10);
  if (param_2 != '\0') {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    puVar4 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar1 + 0x58),0x18);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[2] = 0;
      puVar4[1] = 0;
      *puVar4 = TestReferencedObject::vftable;
      *(undefined4 *)(puVar4 + 2) = 0x1ffff;
      goto LAB_14378fa63;
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_14378fa63:
  plVar12 = param_1 + 0x1e;
  puVar5 = param_1 + 0x14;
  if (param_1[2] != 0) {
    FUN_14370c150();
  }
  param_1[2] = puVar4;
  uVar3 = FUN_143703a50();
  if ((*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff) == 0) {
    FUN_14370c310(uVar3,param_1 + 3,1,1);
  }
  iVar9 = 1 - *(int *)(param_1 + 4);
  if (0 < iVar9) {
    pcVar13 = (char *)(param_1[3] + (longlong)*(int *)(param_1 + 4));
    for (lVar7 = (longlong)iVar9; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pcVar13 = param_2;
      pcVar13 = pcVar13 + 1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 1;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 9) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) {
    FUN_143702e10(uVar3,param_1[8],1,*(uint *)((longlong)param_1 + 0x4c) & 0x3fffffff);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  if (param_1[7] != 0) {
    FUN_14370c150();
  }
  FUN_143716650(param_1 + 6);
  if (param_1 + 5 != (undefined8 *)0x0) {
    FUN_14378fd30(param_1 + 5,param_2);
  }
  param_1[10] = puVar10;
  lVar7 = 10;
  param_1[0xb] = puVar10;
  param_1[0xc] = puVar10;
  param_1[0xd] = puVar10;
  param_1[0xe] = puVar10;
  param_1[0xf] = puVar10;
  param_1[0x10] = puVar10;
  param_1[0x11] = puVar10;
  param_1[0x12] = puVar10;
  param_1[0x13] = puVar10;
  do {
    FUN_1437166c0(puVar5,puVar10);
    puVar5 = puVar5 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = 10;
  do {
    if (param_2 == '\0') {
LAB_14378fc09:
      puVar4 = (undefined8 *)0x0;
    }
    else {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      puVar4 = (undefined8 *)
               (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                         (*(longlong **)((longlong)pvVar1 + 0x58),0x18);
      if (puVar4 == (undefined8 *)0x0) goto LAB_14378fc09;
      puVar4[2] = 0;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0x1ffff;
      *puVar4 = TestReferencedObject::vftable;
    }
    if (*plVar12 != 0) {
      FUN_14370c150();
    }
    *plVar12 = (longlong)puVar4;
    plVar12 = plVar12 + 1;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      lVar15 = 10;
      lVar7 = 10;
      piVar11 = (int *)(param_1 + 0x29);
      puVar4 = param_1 + 0x3c;
      do {
        uVar3 = FUN_143703a50();
        if ((piVar11[1] & 0x3fffffffU) == 0) {
          FUN_14370c310(uVar3,piVar11 + -2,1,1);
        }
        iVar9 = 1 - *piVar11;
        if (0 < iVar9) {
          pcVar13 = (char *)(*(longlong *)(piVar11 + -2) + (longlong)*piVar11);
          for (lVar8 = (longlong)iVar9; lVar8 != 0; lVar8 = lVar8 + -1) {
            *pcVar13 = param_2;
            pcVar13 = pcVar13 + 1;
          }
        }
        *piVar11 = 1;
        piVar11 = piVar11 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      puVar14 = (uint *)((longlong)param_1 + 0x204);
      do {
        uVar3 = FUN_143703a50();
        puVar14[-1] = 0;
        if (-1 < (int)*puVar14) {
          FUN_143702e10(uVar3,*(undefined8 *)(puVar14 + -3),1,*puVar14 & 0x3fffffff);
        }
        puVar14[-3] = 0;
        puVar14[-2] = 0;
        *puVar14 = 0x80000000;
        if (*(longlong *)(puVar14 + -5) != 0) {
          FUN_14370c150();
        }
        FUN_143716650(puVar14 + -7);
        if (puVar4 != (undefined8 *)0x0) {
          FUN_14378fd30(puVar4,param_2);
        }
        puVar4 = puVar4 + 5;
        puVar14 = puVar14 + 10;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      return param_1;
    }
  } while( true );
}



// FUNCTION 14378fd30 FUN_14378fd30 body=261 status=ok
// SIG undefined FUN_14378fd30(void)

undefined8 * FUN_14378fd30(undefined8 *param_1,char param_2)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  int local_res10 [2];
  
  puVar5 = &DAT_145b0a5b8;
  if (param_2 != '\0') {
    puVar5 = &DAT_145b0a5bc;
  }
  *param_1 = puVar5;
  FUN_143716620(param_1 + 1);
  if (param_2 != '\0') {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    puVar2 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar1 + 0x58),0x18);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[2] = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0x1ffff;
      *puVar2 = TestReferencedObject::vftable;
      goto LAB_14378fdc7;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_14378fdc7:
  pcVar4 = (char *)0x0;
  param_1[2] = puVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  local_res10[0] = 1;
  uVar3 = FUN_143703a50();
  iVar6 = local_res10[0];
  if (local_res10[0] != 0) {
    pcVar4 = (char *)FUN_143702d60(uVar3,1,local_res10);
  }
  param_1[3] = pcVar4;
  *(int *)(param_1 + 4) = iVar6;
  iVar6 = -0x80000000;
  if (local_res10[0] != 0) {
    iVar6 = local_res10[0];
  }
  *(int *)((longlong)param_1 + 0x24) = iVar6;
  *pcVar4 = param_2;
  return param_1;
}



// FUNCTION 14378fe40 FUN_14378fe40 body=1294 status=ok
// SIG undefined FUN_14378fe40(void)

/* WARNING: Removing unreachable block (ram,0x00014378ffc0) */
/* WARNING: Removing unreachable block (ram,0x0001437902f5) */

undefined2 * FUN_14378fe40(undefined2 *param_1,byte param_2)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  float fVar13;
  double dVar14;
  
  plVar5 = (longlong *)(param_1 + 0x114);
  lVar10 = 10;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  puVar2 = (undefined8 *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x80000000;
  lVar4 = 10;
  *plVar5 = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  do {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x80000000;
    puVar2 = puVar2 + 2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *param_1 = 0x101;
  *(byte *)(param_1 + 1) = param_2;
  *(byte *)((longlong)param_1 + 3) = param_2;
  param_1[2] = (ushort)param_2;
  param_1[3] = (ushort)param_2;
  *(uint *)(param_1 + 4) = (uint)param_2;
  *(uint *)(param_1 + 6) = (uint)param_2;
  uVar9 = (ulonglong)param_2;
  *(ulonglong *)(param_1 + 8) = uVar9;
  *(ulonglong *)(param_1 + 0xc) = uVar9;
  uVar11 = (uint)param_2;
  fVar13 = (float)uVar11;
  dVar14 = (double)uVar11;
  *(float *)(param_1 + 0x14) = fVar13;
  *(double *)(param_1 + 0x10) = dVar14;
  *(float *)(param_1 + 0x16) = fVar13;
  if (param_2 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    puVar2 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar1 + 0x58),0x18);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = TestReferencedObject::vftable;
      *(undefined4 *)(puVar2 + 2) = 0x1ffff;
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14370c150();
  }
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  uVar3 = FUN_143703a50();
  if ((*(uint *)(param_1 + 0x22) & 0x3fffffff) == 0) {
    FUN_14370c310(uVar3,param_1 + 0x1c,1,1);
  }
  iVar8 = 1 - *(int *)(param_1 + 0x20);
  if (0 < iVar8) {
    pbVar7 = (byte *)((longlong)*(int *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x1c));
    for (lVar4 = (longlong)iVar8; lVar4 != 0; lVar4 = lVar4 + -1) {
      *pbVar7 = param_2;
      pbVar7 = pbVar7 + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0x1010101;
  *(undefined4 *)(param_1 + 0x26) = 0x1010101;
  *(undefined4 *)(param_1 + 0x28) = 0x1010101;
  *(undefined4 *)(param_1 + 0x2a) = 0x1010101;
  *(undefined4 *)(param_1 + 0x2c) = 0x1010101;
  *(byte *)(param_1 + 0x2e) = param_2;
  *(byte *)((longlong)param_1 + 0x5d) = param_2;
  *(byte *)(param_1 + 0x2f) = param_2;
  *(byte *)((longlong)param_1 + 0x5f) = param_2;
  *(byte *)(param_1 + 0x30) = param_2;
  *(byte *)((longlong)param_1 + 0x61) = param_2;
  *(byte *)(param_1 + 0x31) = param_2;
  *(byte *)((longlong)param_1 + 99) = param_2;
  *(byte *)(param_1 + 0x32) = param_2;
  *(byte *)((longlong)param_1 + 0x65) = param_2;
  *(byte *)(param_1 + 0x33) = param_2;
  *(byte *)((longlong)param_1 + 0x67) = param_2;
  *(byte *)(param_1 + 0x34) = param_2;
  *(byte *)((longlong)param_1 + 0x69) = param_2;
  *(byte *)(param_1 + 0x35) = param_2;
  *(byte *)((longlong)param_1 + 0x6b) = param_2;
  *(byte *)(param_1 + 0x36) = param_2;
  *(byte *)((longlong)param_1 + 0x6d) = param_2;
  *(byte *)(param_1 + 0x37) = param_2;
  *(byte *)((longlong)param_1 + 0x6f) = param_2;
  uVar12 = (ushort)param_2;
  param_1[0x38] = uVar12;
  param_1[0x39] = uVar12;
  param_1[0x3a] = uVar12;
  param_1[0x3b] = uVar12;
  uVar12 = (ushort)param_2;
  param_1[0x3c] = uVar12;
  param_1[0x3d] = uVar12;
  param_1[0x3e] = uVar12;
  param_1[0x3f] = uVar12;
  param_1[0x40] = uVar12;
  param_1[0x41] = uVar12;
  param_1[0x42] = uVar12;
  param_1[0x43] = uVar12;
  uVar12 = (ushort)param_2;
  param_1[0x44] = uVar12;
  param_1[0x45] = uVar12;
  param_1[0x46] = uVar12;
  param_1[0x47] = uVar12;
  param_1[0x48] = uVar12;
  param_1[0x49] = uVar12;
  param_1[0x4a] = uVar12;
  param_1[0x4b] = uVar12;
  *(uint *)(param_1 + 0x4c) = uVar11;
  *(uint *)(param_1 + 0x4e) = uVar11;
  uVar11 = (uint)param_2;
  *(uint *)(param_1 + 0x50) = uVar11;
  *(uint *)(param_1 + 0x52) = uVar11;
  *(uint *)(param_1 + 0x54) = uVar11;
  *(uint *)(param_1 + 0x56) = uVar11;
  *(uint *)(param_1 + 0x58) = uVar11;
  *(uint *)(param_1 + 0x5a) = uVar11;
  *(uint *)(param_1 + 0x5c) = uVar11;
  *(uint *)(param_1 + 0x5e) = uVar11;
  uVar11 = (uint)param_2;
  *(uint *)(param_1 + 0x60) = uVar11;
  *(uint *)(param_1 + 0x62) = uVar11;
  *(uint *)(param_1 + 100) = uVar11;
  *(uint *)(param_1 + 0x66) = uVar11;
  *(uint *)(param_1 + 0x68) = uVar11;
  *(uint *)(param_1 + 0x6a) = uVar11;
  *(uint *)(param_1 + 0x6c) = uVar11;
  *(uint *)(param_1 + 0x6e) = uVar11;
  *(uint *)(param_1 + 0x70) = uVar11;
  *(uint *)(param_1 + 0x72) = uVar11;
  *(ulonglong *)(param_1 + 0x74) = uVar9;
  *(ulonglong *)(param_1 + 0x78) = uVar9;
  *(ulonglong *)(param_1 + 0x7c) = uVar9;
  *(ulonglong *)(param_1 + 0x80) = uVar9;
  *(ulonglong *)(param_1 + 0x84) = uVar9;
  *(ulonglong *)(param_1 + 0x88) = uVar9;
  *(ulonglong *)(param_1 + 0x8c) = uVar9;
  *(ulonglong *)(param_1 + 0x90) = uVar9;
  *(ulonglong *)(param_1 + 0x94) = uVar9;
  *(ulonglong *)(param_1 + 0x98) = uVar9;
  *(ulonglong *)(param_1 + 0x9c) = uVar9;
  *(ulonglong *)(param_1 + 0xa0) = uVar9;
  *(ulonglong *)(param_1 + 0xa4) = uVar9;
  *(ulonglong *)(param_1 + 0xa8) = uVar9;
  *(ulonglong *)(param_1 + 0xac) = uVar9;
  lVar4 = 10;
  *(ulonglong *)(param_1 + 0xb0) = uVar9;
  *(ulonglong *)(param_1 + 0xb4) = uVar9;
  *(ulonglong *)(param_1 + 0xb8) = uVar9;
  *(ulonglong *)(param_1 + 0xbc) = uVar9;
  *(ulonglong *)(param_1 + 0xc0) = uVar9;
  *(float *)(param_1 + 0xec) = fVar13;
  *(float *)(param_1 + 0xee) = fVar13;
  *(float *)(param_1 + 0xf0) = fVar13;
  *(float *)(param_1 + 0xf2) = fVar13;
  *(float *)(param_1 + 0xf4) = fVar13;
  *(float *)(param_1 + 0xf6) = fVar13;
  *(float *)(param_1 + 0xf8) = fVar13;
  *(float *)(param_1 + 0xfa) = fVar13;
  *(float *)(param_1 + 0xfc) = fVar13;
  *(float *)(param_1 + 0xfe) = fVar13;
  *(float *)(param_1 + 0x100) = fVar13;
  *(float *)(param_1 + 0x102) = fVar13;
  *(double *)(param_1 + 0xc4) = dVar14;
  *(double *)(param_1 + 200) = dVar14;
  *(double *)(param_1 + 0xcc) = dVar14;
  *(double *)(param_1 + 0xd0) = dVar14;
  *(double *)(param_1 + 0xd4) = dVar14;
  *(double *)(param_1 + 0xd8) = dVar14;
  *(double *)(param_1 + 0xdc) = dVar14;
  *(double *)(param_1 + 0xe0) = dVar14;
  *(double *)(param_1 + 0xe4) = dVar14;
  *(double *)(param_1 + 0xe8) = dVar14;
  *(float *)(param_1 + 0x104) = fVar13;
  *(float *)(param_1 + 0x106) = fVar13;
  *(float *)(param_1 + 0x108) = fVar13;
  *(float *)(param_1 + 0x10a) = fVar13;
  *(float *)(param_1 + 0x10c) = fVar13;
  *(float *)(param_1 + 0x10e) = fVar13;
  *(float *)(param_1 + 0x110) = fVar13;
  *(float *)(param_1 + 0x112) = fVar13;
  do {
    if (param_2 == 0) {
LAB_1437902a2:
      puVar2 = (undefined8 *)0x0;
    }
    else {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      puVar2 = (undefined8 *)
               (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                         (*(longlong **)((longlong)pvVar1 + 0x58),0x18);
      if (puVar2 == (undefined8 *)0x0) goto LAB_1437902a2;
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = TestReferencedObject::vftable;
      *(undefined4 *)(puVar2 + 2) = 0x1ffff;
    }
    if (*plVar5 != 0) {
      FUN_14370c150();
    }
    *plVar5 = (longlong)puVar2;
    plVar5 = plVar5 + 1;
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      piVar6 = (int *)(param_1 + 0x140);
      do {
        uVar3 = FUN_143703a50();
        if ((piVar6[1] & 0x3fffffffU) == 0) {
          FUN_14370c310(uVar3,piVar6 + -2,1,1);
        }
        iVar8 = 1 - *piVar6;
        if (0 < iVar8) {
          pbVar7 = (byte *)(*(longlong *)(piVar6 + -2) + (longlong)*piVar6);
          for (lVar4 = (longlong)iVar8; lVar4 != 0; lVar4 = lVar4 + -1) {
            *pbVar7 = param_2;
            pbVar7 = pbVar7 + 1;
          }
        }
        *piVar6 = 1;
        piVar6 = piVar6 + 4;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      return param_1;
    }
  } while( true );
}



// FUNCTION 143790350 FUN_143790350 body=304 status=ok
// SIG undefined FUN_143790350(void)

byte * FUN_143790350(byte *param_1,byte param_2)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int local_res10 [2];
  
  *param_1 = param_2;
  param_1[1] = param_2;
  uVar6 = (uint)param_2;
  *(ushort *)(param_1 + 4) = (ushort)param_2;
  *(ushort *)(param_1 + 6) = (ushort)param_2;
  param_1[2] = param_2;
  param_1[3] = param_2;
  *(uint *)(param_1 + 8) = uVar6;
  *(uint *)(param_1 + 0xc) = uVar6;
  *(ulonglong *)(param_1 + 0x10) = (ulonglong)param_2;
  *(ulonglong *)(param_1 + 0x18) = (ulonglong)param_2;
  *(float *)(param_1 + 0x28) = (float)uVar6;
  *(double *)(param_1 + 0x20) = (double)uVar6;
  *(float *)(param_1 + 0x2c) = (float)uVar6;
  if (param_2 != 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    puVar2 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar1 + 0x58),0x18);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[2] = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0x1ffff;
      *puVar2 = TestReferencedObject::vftable;
      goto LAB_143790412;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_143790412:
  pbVar4 = (byte *)0x0;
  *(undefined8 **)(param_1 + 0x30) = puVar2;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0x80;
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
  local_res10[0] = 1;
  uVar3 = FUN_143703a50();
  iVar5 = local_res10[0];
  if (local_res10[0] != 0) {
    pbVar4 = (byte *)FUN_143702d60(uVar3,1,local_res10);
  }
  *(byte **)(param_1 + 0x38) = pbVar4;
  *(int *)(param_1 + 0x40) = iVar5;
  iVar5 = -0x80000000;
  if (local_res10[0] != 0) {
    iVar5 = local_res10[0];
  }
  *(int *)(param_1 + 0x44) = iVar5;
  *pbVar4 = param_2;
  return param_1;
}



// FUNCTION 143790480 FUN_143790480 body=258 status=ok
// SIG undefined FUN_143790480(void)

void FUN_143790480(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xd4)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 200),1,*(uint *)(param_1 + 0xd4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0x80000000;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x8c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x80),1,*(uint *)(param_1 + 0x8c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x80000000;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x38),1,*(uint *)(param_1 + 0x44) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14370c150();
  }
  return;
}



// FUNCTION 143790590 FUN_143790590 body=80 status=ok
// SIG undefined FUN_143790590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143790590(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = hkDisplayGeometry::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 0xc) = 6;
  uVar1 = uRam00000001467f0898;
  param_1[4] = _DAT_1467f0890;
  param_1[5] = uVar1;
  uVar1 = uRam00000001467f08a8;
  param_1[6] = _DAT_1467f08a0;
  param_1[7] = uVar1;
  uVar1 = uRam00000001467f08b8;
  param_1[8] = _DAT_1467f08b0;
  param_1[9] = uVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 1437905e0 FUN_1437905e0 body=54 status=ok
// SIG undefined FUN_1437905e0(void)

void FUN_1437905e0(undefined8 *param_1)

{
  *param_1 = hkDisplayGeometry::vftable;
  if (param_1[3] != 0) {
    FUN_14370c150();
    param_1[3] = 0;
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143790620 FUN_143790620 body=139 status=ok
// SIG undefined FUN_143790620(void)

longlong FUN_143790620(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437905e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x70;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
    }
  }
  return param_1;
}



// FUNCTION 1437906b0 FUN_1437906b0 body=523 status=ok
// SIG undefined FUN_1437906b0(void)

void FUN_1437906b0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_1[3] == 0) {
    (**(code **)(*param_1 + 0x18))();
  }
  iVar6 = *(int *)(param_1[3] + 0x30) + -1;
  lVar7 = (longlong)iVar6;
  if (-1 < iVar6) {
    lVar12 = lVar7 << 4;
    do {
      lVar9 = *(longlong *)(param_1[3] + 0x28);
      lVar11 = *(longlong *)(param_1[3] + 0x18);
      iVar6 = *(int *)(lVar9 + 8 + lVar12);
      iVar1 = *(int *)(lVar9 + 4 + lVar12);
      lVar9 = (longlong)*(int *)(lVar9 + lVar12) * 0x10;
      if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(param_3,param_2,0x10);
      }
      puVar10 = (undefined4 *)(lVar11 + lVar9);
      uVar2 = puVar10[1];
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      puVar5 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
      lVar8 = (longlong)iVar1 * 0x10;
      *puVar5 = *puVar10;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar11 = *(longlong *)(param_1[3] + 0x18);
      if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(param_3,param_2,0x10);
      }
      puVar10 = (undefined4 *)(lVar11 + lVar8);
      uVar2 = puVar10[1];
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      puVar5 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
      *puVar5 = *puVar10;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      puVar10 = (undefined4 *)(lVar9 + *(longlong *)(param_1[3] + 0x18));
      if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(param_3,param_2,0x10);
      }
      uVar2 = puVar10[1];
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      puVar5 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
      lVar11 = (longlong)iVar6 * 0x10;
      *puVar5 = *puVar10;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar9 = *(longlong *)(param_1[3] + 0x18);
      if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(param_3,param_2,0x10);
      }
      puVar10 = (undefined4 *)(lVar9 + lVar11);
      uVar2 = puVar10[1];
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      puVar5 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
      *puVar5 = *puVar10;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      puVar10 = (undefined4 *)(lVar8 + *(longlong *)(param_1[3] + 0x18));
      if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(param_3,param_2,0x10);
      }
      uVar2 = puVar10[1];
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      puVar5 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
      *puVar5 = *puVar10;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      puVar10 = (undefined4 *)(lVar11 + *(longlong *)(param_1[3] + 0x18));
      if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(param_3,param_2,0x10);
      }
      lVar12 = lVar12 + -0x10;
      uVar2 = puVar10[1];
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      puVar5 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
      *puVar5 = *puVar10;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  return;
}



// FUNCTION 1437908c0 FUN_1437908c0 body=99 status=ok
// SIG undefined FUN_1437908c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1437908c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = hkDisplayGeometry::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0xc) = 3;
  uVar1 = uRam00000001467f0898;
  param_1[4] = _DAT_1467f0890;
  param_1[5] = uVar1;
  uVar1 = uRam00000001467f08a8;
  param_1[6] = _DAT_1467f08a0;
  param_1[7] = uVar1;
  uVar1 = uRam00000001467f08b8;
  param_1[8] = _DAT_1467f08b0;
  param_1[9] = uVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = hkDisplayAABB::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 143790930 FUN_143790930 body=139 status=ok
// SIG undefined FUN_143790930(void)

longlong FUN_143790930(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437905e0();
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



// FUNCTION 1437909c0 FUN_1437909c0 body=1182 status=ok
// SIG undefined FUN_1437909c0(void)

void FUN_1437909c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  LPVOID pvVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  
  pvVar12 = TlsGetValue(DAT_146b7bf70);
  if (pvVar12 == (LPVOID)0x0) {
    pvVar12 = DAT_146b7bf68;
  }
  puVar13 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar12 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar12 + 0x58),0x38);
  puVar14 = (undefined8 *)0x0;
  if (puVar13 != (undefined8 *)0x0) {
    puVar13[1] = 0;
    *puVar13 = hkGeometry::vftable;
    *(undefined4 *)(puVar13 + 2) = 0x1ffff;
    puVar13[3] = 0;
    *(undefined4 *)(puVar13 + 4) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x24) = 0x80000000;
    puVar13[5] = 0;
    *(undefined4 *)(puVar13 + 6) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x34) = 0x80000000;
    puVar14 = puVar13;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar14;
  uVar15 = FUN_143703a50();
  uVar17 = *(uint *)((longlong)puVar14 + 0x24) & 0x3fffffff;
  if (uVar17 < 8) {
    uVar17 = uVar17 * 2;
    uVar11 = 8;
    if (8 < uVar17) {
      uVar11 = uVar17;
    }
    FUN_14370c310(uVar15,puVar14 + 3,uVar11,0x10);
  }
  *(undefined4 *)(puVar14 + 4) = 8;
  auVar3._12_4_ = 0;
  auVar3._0_12_ = *(undefined1 (*) [12])(param_1 + 0x70);
  **(undefined1 (**) [16])(*(longlong *)(param_1 + 0x18) + 0x18) = auVar3;
  auVar4._8_4_ = *(undefined4 *)(param_1 + 0x88);
  auVar4._0_8_ = *(undefined8 *)(param_1 + 0x70);
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x10) = auVar4;
  auVar5._4_4_ = *(undefined4 *)(param_1 + 0x74);
  auVar5._0_4_ = *(undefined4 *)(param_1 + 0x80);
  auVar5._8_4_ = *(undefined4 *)(param_1 + 0x88);
  auVar5._12_4_ = 0;
  *(undefined1 (*) [16])(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x20) = auVar5;
  auVar6._4_4_ = *(undefined4 *)(param_1 + 0x74);
  auVar6._0_4_ = *(undefined4 *)(param_1 + 0x80);
  auVar6._8_4_ = *(undefined4 *)(param_1 + 0x78);
  auVar6._12_4_ = 0;
  *(undefined1 (*) [16])(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x30) = auVar6;
  auVar7._4_4_ = *(undefined4 *)(param_1 + 0x84);
  auVar7._0_4_ = *(undefined4 *)(param_1 + 0x70);
  auVar7._8_4_ = *(undefined4 *)(param_1 + 0x78);
  auVar7._12_4_ = 0;
  *(undefined1 (*) [16])(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x40) = auVar7;
  auVar8._4_4_ = *(undefined4 *)(param_1 + 0x84);
  auVar8._0_4_ = *(undefined4 *)(param_1 + 0x70);
  auVar8._8_4_ = *(undefined4 *)(param_1 + 0x88);
  auVar8._12_4_ = 0;
  *(undefined1 (*) [16])(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x50) = auVar8;
  auVar9._12_4_ = 0;
  auVar9._0_12_ = *(undefined1 (*) [12])(param_1 + 0x80);
  *(undefined1 (*) [16])(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x60) = auVar9;
  auVar10._8_4_ = *(undefined4 *)(param_1 + 0x78);
  auVar10._0_8_ = *(undefined8 *)(param_1 + 0x80);
  auVar10._12_4_ = 0;
  *(undefined1 (*) [16])(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x70) = auVar10;
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar15 = FUN_143703a50();
  uVar17 = *(uint *)(lVar2 + 0x34) & 0x3fffffff;
  if (uVar17 < 0xc) {
    uVar17 = uVar17 * 2;
    uVar11 = 0xc;
    if (0xc < uVar17) {
      uVar11 = uVar17;
    }
    FUN_14370c310(uVar15,lVar2 + 0x28,uVar11,0x10);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar2 + 0x30);
  *(int *)(lVar2 + 0x30) = iVar1 + 1;
  puVar16 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x28));
  *puVar16 = 0;
  puVar16[1] = 3;
  puVar16[2] = 1;
  puVar16[3] = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar2 + 0x30);
  *(int *)(lVar2 + 0x30) = iVar1 + 1;
  puVar16 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x28));
  *puVar16 = 1;
  puVar16[1] = 3;
  puVar16[2] = 2;
  puVar16[3] = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar2 + 0x30);
  *(int *)(lVar2 + 0x30) = iVar1 + 1;
  puVar16 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x28));
  *puVar16 = 2;
  puVar16[1] = 6;
  puVar16[2] = 5;
  puVar16[3] = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar2 + 0x30);
  *(int *)(lVar2 + 0x30) = iVar1 + 1;
  puVar16 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x28));
  *puVar16 = 5;
  puVar16[1] = 1;
  puVar16[2] = 2;
  puVar16[3] = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar2 + 0x30);
  *(int *)(lVar2 + 0x30) = iVar1 + 1;
  puVar16 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x28));
  *puVar16 = 5;
  puVar16[1] = 6;
  puVar16[2] = 4;
  puVar16[3] = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar2 + 0x30);
  *(int *)(lVar2 + 0x30) = iVar1 + 1;
  puVar16 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x28));
  *puVar16 = 4;
  puVar16[1] = 6;
  puVar16[2] = 7;
  puVar16[3] = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar2 + 0x30);
  *(int *)(lVar2 + 0x30) = iVar1 + 1;
  puVar16 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x28));
  *puVar16 = 7;
  *(undefined8 *)(puVar16 + 1) = 3;
  puVar16[3] = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar2 + 0x30);
  *(int *)(lVar2 + 0x30) = iVar1 + 1;
  puVar16 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x28));
  *puVar16 = 0;
  puVar16[1] = 4;
  puVar16[2] = 7;
  puVar16[3] = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar2 + 0x30);
  *(int *)(lVar2 + 0x30) = iVar1 + 1;
  puVar16 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x28));
  puVar16[1] = 1;
  *puVar16 = 0;
  puVar16[2] = 4;
  puVar16[3] = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar2 + 0x30);
  *(int *)(lVar2 + 0x30) = iVar1 + 1;
  puVar16 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x28));
  puVar16[1] = 1;
  *puVar16 = 4;
  puVar16[2] = 5;
  puVar16[3] = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar2 + 0x30);
  *(int *)(lVar2 + 0x30) = iVar1 + 1;
  puVar16 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x28));
  *puVar16 = 2;
  puVar16[1] = 3;
  puVar16[2] = 6;
  puVar16[3] = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar2 + 0x30);
  *(int *)(lVar2 + 0x30) = iVar1 + 1;
  puVar16 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x28));
  *puVar16 = 6;
  puVar16[1] = 3;
  puVar16[2] = 7;
  puVar16[3] = 0xffffffff;
  return;
}



// FUNCTION 143790e60 FUN_143790e60 body=220 status=ok
// SIG undefined FUN_143790e60(void)

void FUN_143790e60(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  
  uVar13 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if (uVar13 < 0x18) {
    uVar13 = uVar13 * 2;
    uVar3 = 0x18;
    if (0x18 < uVar13) {
      uVar3 = uVar13;
    }
    FUN_14370c310(param_3,param_2,uVar3,0x10);
  }
  *(undefined4 *)(param_2 + 1) = 0x18;
  uVar15 = 0;
  uVar13 = *(uint *)(param_1 + 0x70);
  uVar3 = *(uint *)(param_1 + 0x74);
  uVar4 = *(uint *)(param_1 + 0x78);
  uVar5 = *(uint *)(param_1 + 0x7c);
  lVar17 = 0;
  uVar6 = *(uint *)(param_1 + 0x80);
  uVar7 = *(uint *)(param_1 + 0x84);
  uVar8 = *(uint *)(param_1 + 0x88);
  uVar9 = *(uint *)(param_1 + 0x8c);
  puVar18 = (uint *)&DAT_145b8de60;
  do {
    uVar14 = 1;
    lVar16 = lVar17 << 4;
    do {
      if ((int)uVar15 < (int)(uVar14 ^ uVar15)) {
        uVar10 = puVar18[1];
        uVar11 = puVar18[2];
        uVar12 = puVar18[3];
        lVar17 = lVar17 + 2;
        puVar2 = (uint *)(lVar16 + *param_2);
        *puVar2 = uVar6 & *puVar18 | ~*puVar18 & uVar13;
        puVar2[1] = uVar7 & uVar10 | ~uVar10 & uVar3;
        puVar2[2] = uVar8 & uVar11 | ~uVar11 & uVar4;
        puVar2[3] = uVar9 & uVar12 | ~uVar12 & uVar5;
        lVar1 = (longlong)(int)((uVar14 ^ uVar15) * 4) * 4;
        uVar10 = *(uint *)(&UNK_145b8de64 + lVar1);
        uVar11 = *(uint *)(&UNK_145b8de68 + lVar1);
        uVar12 = *(uint *)(&UNK_145b8de6c + lVar1);
        puVar2 = (uint *)(lVar16 + 0x10 + *param_2);
        *puVar2 = *(uint *)(&DAT_145b8de60 + lVar1) & uVar6 |
                  ~*(uint *)(&DAT_145b8de60 + lVar1) & uVar13;
        puVar2[1] = uVar10 & uVar7 | ~uVar10 & uVar3;
        puVar2[2] = uVar11 & uVar8 | ~uVar11 & uVar4;
        puVar2[3] = uVar12 & uVar9 | ~uVar12 & uVar5;
        lVar16 = lVar16 + 0x20;
      }
      uVar14 = uVar14 * 2;
    } while ((int)uVar14 < 8);
    uVar15 = uVar15 + 1;
    puVar18 = puVar18 + 4;
  } while ((int)uVar15 < 7);
  return;
}



// FUNCTION 143790f40 FUN_143790f40 body=19 status=ok
// SIG undefined FUN_143790f40(void)

void FUN_143790f40(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x80) = *param_3;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return;
}



// FUNCTION 143790f60 FUN_143790f60 body=135 status=ok
// SIG undefined FUN_143790f60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_143790f60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = hkDisplayGeometry::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0xc) = 8;
  uVar1 = uRam00000001467f0898;
  param_1[4] = _DAT_1467f0890;
  param_1[5] = uVar1;
  uVar1 = uRam00000001467f08a8;
  param_1[6] = _DAT_1467f08a0;
  param_1[7] = uVar1;
  uVar1 = uRam00000001467f08b8;
  param_1[8] = _DAT_1467f08b0;
  param_1[9] = uVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = hkDisplayCapsule::vftable;
  *(undefined4 *)((longlong)param_1 + 0x94) = param_5;
  *(undefined4 *)(param_1 + 0x13) = param_6;
  uVar1 = param_2[1];
  param_1[0xe] = *param_2;
  param_1[0xf] = uVar1;
  uVar1 = param_3[1];
  param_1[0x10] = *param_3;
  param_1[0x11] = uVar1;
  *(undefined4 *)(param_1 + 0x12) = param_4;
  return param_1;
}



// FUNCTION 143790ff0 FUN_143790ff0 body=139 status=ok
// SIG undefined FUN_143790ff0(void)

longlong FUN_143790ff0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437905e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0xa0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
    }
  }
  return param_1;
}



// FUNCTION 143791080 FUN_143791080 body=176 status=ok
// SIG undefined FUN_143791080(void)

void FUN_143791080(longlong param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x38);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = hkGeometry::vftable;
    *(undefined4 *)(puVar2 + 2) = 0x1ffff;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0x80000000;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0x80000000;
    puVar3 = puVar2;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar3;
  FUN_143797000(param_1 + 0x70,param_1 + 0x80,*(undefined4 *)(param_1 + 0x90),
                *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x94),&DAT_1467f0890,
                puVar3);
  return;
}



// FUNCTION 143791130 FUN_143791130 body=667 status=ok
// SIG undefined FUN_143791130(void)

void FUN_143791130(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int local_res8;
  longlong local_res10;
  undefined **local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined4 local_58;
  uint local_54;
  longlong local_50;
  int local_48;
  uint local_44;
  
  local_70 = 0;
  local_78 = hkGeometry::vftable;
  local_68 = 0x1ffff;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0x80000000;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0x80000000;
  FUN_143797000(param_1 + 0x70,param_1 + 0x80,*(undefined4 *)(param_1 + 0x90),
                *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x94),&DAT_1467f0890,
                &local_78);
  uVar6 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  iVar10 = local_48 * 3 + (int)param_2[1];
  if ((int)uVar6 < iVar10) {
    iVar7 = uVar6 * 2;
    if (iVar10 < iVar7) {
      iVar10 = iVar7;
    }
    FUN_14370c310(param_3,param_2,iVar10,0x10);
  }
  local_res8 = 0;
  if (0 < local_48) {
    local_res10 = 0;
    do {
      iVar10 = 0;
      piVar11 = (int *)(local_50 + local_res10);
      piVar8 = piVar11;
      do {
        iVar10 = iVar10 + 1;
        iVar7 = iVar10 + (iVar10 / 3 + (iVar10 >> 0x1f) +
                         (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >>
                              0x1f)) * -3;
        if (*piVar8 < piVar11[iVar7]) {
          puVar9 = (undefined4 *)((longlong)*piVar8 * 0x10 + local_60);
          if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(param_3,param_2,0x10);
          }
          uVar1 = puVar9[1];
          uVar2 = puVar9[2];
          uVar3 = puVar9[3];
          puVar4 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
          *puVar4 = *puVar9;
          puVar4[1] = uVar1;
          puVar4[2] = uVar2;
          puVar4[3] = uVar3;
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
          puVar9 = (undefined4 *)((longlong)piVar11[iVar7] * 0x10 + local_60);
          if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(param_3,param_2,0x10);
          }
          uVar1 = puVar9[1];
          uVar2 = puVar9[2];
          uVar3 = puVar9[3];
          puVar4 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
          *puVar4 = *puVar9;
          puVar4[1] = uVar1;
          puVar4[2] = uVar2;
          puVar4[3] = uVar3;
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        }
        piVar8 = piVar8 + 1;
      } while (iVar10 < 3);
      local_res8 = local_res8 + 1;
      local_res10 = local_res10 + 0x10;
    } while (local_res8 < local_48);
  }
  local_78 = hkGeometry::vftable;
  uVar5 = FUN_143703a50();
  local_48 = 0;
  if (-1 < (int)local_44) {
    FUN_143702e10(uVar5,local_50,0x10,local_44 & 0x3fffffff);
  }
  local_50 = 0;
  local_44 = 0x80000000;
  uVar5 = FUN_143703a50();
  local_58 = 0;
  if (-1 < (int)local_54) {
    FUN_143702e10(uVar5,local_60,0x10,local_54 & 0x3fffffff);
  }
  local_60 = 0;
  local_54 = 0x80000000;
  FUN_14370c000(&local_78);
  return;
}



// FUNCTION 1437913d0 FUN_1437913d0 body=160 status=ok
// SIG undefined FUN_1437913d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1437913d0(undefined8 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *param_1 = hkDisplayGeometry::vftable;
  *(undefined2 *)((longlong)param_1 + 0x12) = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[3] = 0;
  uVar4 = uRam00000001467f0898;
  param_1[4] = _DAT_1467f0890;
  param_1[5] = uVar4;
  uVar4 = uRam00000001467f08a8;
  param_1[6] = _DAT_1467f08a0;
  param_1[7] = uVar4;
  uVar4 = uRam00000001467f08b8;
  param_1[8] = _DAT_1467f08b0;
  param_1[9] = uVar4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = hkDisplaySphere::vftable;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0xe) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0xf) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  FUN_143716430(param_1 + 4,&DAT_1467f08c0);
  uVar4 = uRam00000001467f06e8;
  param_1[10] = _DAT_1467f06e0;
  param_1[0xb] = uVar4;
  return param_1;
}



// FUNCTION 143791470 FUN_143791470 body=150 status=ok
// SIG undefined FUN_143791470(void)

void FUN_143791470(longlong param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x38);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = hkGeometry::vftable;
    *(undefined4 *)(puVar2 + 2) = 0x1ffff;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0x80000000;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0x80000000;
    puVar3 = puVar2;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar3;
  FUN_143797e50(param_1 + 0x70,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
                puVar3,0xffffffff);
  return;
}



// FUNCTION 143791510 FUN_143791510 body=629 status=ok
// SIG undefined FUN_143791510(void)

void FUN_143791510(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int local_res8;
  longlong local_res10;
  undefined **local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined4 local_58;
  uint local_54;
  longlong local_50;
  int local_48;
  uint local_44;
  
  local_70 = 0;
  local_78 = hkGeometry::vftable;
  local_68 = 0x1ffff;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0x80000000;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0x80000000;
  FUN_143797e50(param_1 + 0x70,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
                &local_78,0xffffffff);
  uVar6 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  iVar10 = local_48 * 3 + (int)param_2[1];
  if ((int)uVar6 < iVar10) {
    iVar7 = uVar6 * 2;
    if (iVar10 < iVar7) {
      iVar10 = iVar7;
    }
    FUN_14370c310(param_3,param_2,iVar10,0x10);
  }
  local_res8 = 0;
  if (0 < local_48) {
    local_res10 = 0;
    do {
      iVar10 = 0;
      piVar11 = (int *)(local_50 + local_res10);
      piVar8 = piVar11;
      do {
        iVar10 = iVar10 + 1;
        iVar7 = iVar10 + (iVar10 / 3 + (iVar10 >> 0x1f) +
                         (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >>
                              0x1f)) * -3;
        if (*piVar8 < piVar11[iVar7]) {
          puVar9 = (undefined4 *)((longlong)*piVar8 * 0x10 + local_60);
          if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(param_3,param_2,0x10);
          }
          uVar1 = puVar9[1];
          uVar2 = puVar9[2];
          uVar3 = puVar9[3];
          puVar4 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
          *puVar4 = *puVar9;
          puVar4[1] = uVar1;
          puVar4[2] = uVar2;
          puVar4[3] = uVar3;
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
          puVar9 = (undefined4 *)((longlong)piVar11[iVar7] * 0x10 + local_60);
          if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(param_3,param_2,0x10);
          }
          uVar1 = puVar9[1];
          uVar2 = puVar9[2];
          uVar3 = puVar9[3];
          puVar4 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
          *puVar4 = *puVar9;
          puVar4[1] = uVar1;
          puVar4[2] = uVar2;
          puVar4[3] = uVar3;
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        }
        piVar8 = piVar8 + 1;
      } while (iVar10 < 3);
      local_res8 = local_res8 + 1;
      local_res10 = local_res10 + 0x10;
    } while (local_res8 < local_48);
  }
  local_78 = hkGeometry::vftable;
  uVar5 = FUN_143703a50();
  local_48 = 0;
  if (-1 < (int)local_44) {
    FUN_143702e10(uVar5,local_50,0x10,local_44 & 0x3fffffff);
  }
  local_50 = 0;
  local_44 = 0x80000000;
  uVar5 = FUN_143703a50();
  local_58 = 0;
  if (-1 < (int)local_54) {
    FUN_143702e10(uVar5,local_60,0x10,local_54 & 0x3fffffff);
  }
  local_60 = 0;
  local_54 = 0x80000000;
  FUN_14370c000(&local_78);
  return;
}



// FUNCTION 143791790 FUN_143791790 body=106 status=ok
// SIG undefined FUN_143791790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143791790(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = hkDisplayGeometry::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined4 *)(param_1 + 0xc) = 0xc;
  uVar1 = uRam00000001467f0898;
  param_1[4] = _DAT_1467f0890;
  param_1[5] = uVar1;
  uVar1 = uRam00000001467f08a8;
  param_1[6] = _DAT_1467f08a0;
  param_1[7] = uVar1;
  uVar1 = uRam00000001467f08b8;
  param_1[8] = _DAT_1467f08b0;
  param_1[9] = uVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = hkDisplayWireframe::vftable;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 143791800 FUN_143791800 body=203 status=ok
// SIG undefined FUN_143791800(void)

longlong FUN_143791800(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x7c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x70),0x10,*(uint *)(param_1 + 0x7c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x80000000;
  FUN_1437905e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        sVar3 = 0x80;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
    }
  }
  return param_1;
}



// FUNCTION 1437918d0 FUN_1437918d0 body=154 status=ok
// SIG undefined FUN_1437918d0(void)

void FUN_1437918d0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar2 = *(int *)(param_1 + 0x78);
  lVar9 = (longlong)iVar2;
  iVar8 = (int)param_2[1] + iVar2;
  lVar7 = *(longlong *)(param_1 + 0x70);
  uVar5 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if (((int)uVar5 < iVar8) && ((int)uVar5 < iVar8)) {
    iVar3 = iVar8;
    if (iVar8 < (int)(uVar5 * 2)) {
      iVar3 = uVar5 * 2;
    }
    FUN_14370c310(param_3,param_2,iVar3,0x10);
  }
  puVar6 = (undefined8 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
  if (0 < iVar2) {
    lVar7 = lVar7 - (longlong)puVar6;
    do {
      puVar1 = (undefined8 *)(lVar7 + (longlong)puVar6);
      uVar4 = puVar1[1];
      *puVar6 = *puVar1;
      puVar6[1] = uVar4;
      puVar6 = puVar6 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *(int *)(param_2 + 1) = iVar8;
  return;
}



// FUNCTION 143791970 FUN_143791970 body=88 status=ok
// SIG undefined FUN_143791970(void)

char * FUN_143791970(int param_1)

{
  if (param_1 == -0xfff6) {
    return "Invalid Product";
  }
  if (param_1 == -0xfff5) {
    return "Empty Keycode";
  }
  if (param_1 == -0xfff4) {
    return "Invalid Keycode Format";
  }
  if (param_1 != -0xfff3) {
    if (param_1 != -0xff01) {
      return "Unknown Error";
    }
    return "Base System Is Still Initializing... Continue And Retry";
  }
  return "Mismatched Product Against Keycode";
}



// FUNCTION 1437919d0 FUN_1437919d0 body=115 status=ok
// SIG undefined FUN_1437919d0(void)

char * FUN_1437919d0(undefined1 param_1)

{
  switch(param_1) {
  case 0:
    return "Physics";
  case 1:
    return "Destruction";
  case 2:
    return "Ai";
  case 3:
    return "Cloth";
  case 4:
    return "Animation";
  case 5:
    return "Behavior";
  case 6:
    return "Convex_Decomposition";
  case 7:
    return "Physics_2012";
  case 8:
    return "Destruction_2012";
  case 9:
    return "Fx";
  default:
    return "Invalid";
  }
}



// FUNCTION 143791a70 FUN_143791a70 body=609 status=ok
// SIG undefined FUN_143791a70(void)

int FUN_143791a70(byte param_1,undefined8 *param_2,int param_3)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  int local_res20 [2];
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  char *pcStack_70;
  undefined1 local_68 [64];
  
  if (DAT_146b850f8 == 0) {
    return -0xff01;
  }
  iVar3 = 0;
  pcVar1 = (char *)*param_2;
  if (pcVar1 != (char *)0x0) {
    iVar3 = FUN_14370c910(pcVar1);
    iVar3 = iVar3 + (int)pcVar1;
  }
  lVar2 = DAT_146b850f8;
  iVar3 = iVar3 - (int)pcVar1;
  iVar5 = 0;
  if (0 < iVar3) {
    pcVar4 = pcVar1;
    do {
      if ((*pcVar4 - 0x20U & 0xfd) != 0) break;
      pcVar4 = pcVar4 + 1;
      iVar5 = iVar5 + 1;
    } while ((longlong)pcVar4 - (longlong)pcVar1 < (longlong)iVar3);
  }
  iVar3 = iVar3 + -1;
  lVar6 = (longlong)iVar5;
  if (lVar6 < iVar3) {
    pcVar4 = pcVar1 + iVar3;
    do {
      if ((*pcVar4 - 0x20U & 0xfd) != 0) break;
      pcVar4 = pcVar4 + -1;
      iVar3 = iVar3 + -1;
    } while (lVar6 < (longlong)pcVar4 - (longlong)pcVar1);
  }
  pcVar1 = pcVar1 + lVar6;
  pcStack_70 = pcVar1 + ((iVar3 - iVar5) + 1);
  local_78._0_4_ = (int)pcVar1;
  iVar3 = (int)local_78;
  iVar5 = (int)pcStack_70;
  local_78 = pcVar1;
  FUN_1404cf770(DAT_146b850f8,local_res20,param_1,&local_78);
  if (-1 < local_res20[0]) {
    FUN_14370c720((ulonglong)param_1 * 0x101 + 0x18 + lVar2,0,0x101);
    FUN_14370c700((ulonglong)param_1 * 0x101 + 0x18 + lVar2,pcVar1,iVar5 - iVar3);
    if (-1 < local_res20[0]) {
      return local_res20[0];
    }
  }
  if (-1 < param_3) {
    FUN_14373a730(local_68,&DAT_146b85080,2);
    FUN_14373bbd0(local_68,"------------------------------------------------------------------",
                  &DAT_145b909f0,0);
    FUN_14373a950(local_68);
    FUN_14373a730(local_68,&DAT_146b85080,2);
    FUN_14373bbd0(local_68," Invalid Havok License Keys:",&DAT_145b909f0,0);
    FUN_14373a950(local_68);
  }
  local_88 = FUN_143791970(local_res20[0]);
  local_80 = *param_2;
  local_78 = (char *)FUN_1437919d0(param_1);
  FUN_14373a730(local_68,&DAT_146b85080,2);
  FUN_14373bbd0(local_68,"  {0,-16} : {} ({})",&DAT_145b9a740,&local_78,&local_80,&local_88,0);
  FUN_14373a950(local_68);
  return local_res20[0];
}



// FUNCTION 143791ce0 FUN_143791ce0 body=139 status=ok
// SIG undefined FUN_143791ce0(void)

longlong FUN_143791ce0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0xa28;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa28);
    }
  }
  return param_1;
}



// FUNCTION 143791d70 FUN_143791d70 body=158 status=ok
// SIG undefined FUN_143791d70(void)

undefined8 FUN_143791d70(longlong *param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    puVar2 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar1 + 0x58),0xa28);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0x1ffff;
      *puVar2 = hkKeycodeData::vftable;
      FUN_14370c720(puVar2 + 3,0,0xa0a);
    }
    if (puVar2 != (undefined8 *)*param_1) {
      if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      *param_1 = (longlong)puVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 143791e10 FUN_143791e10 body=55 status=ok
// SIG undefined FUN_143791e10(void)

void FUN_143791e10(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14379b040(param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143791e50 FUN_143791e50 body=18 status=ok
// SIG undefined FUN_143791e50(void)

undefined8 * FUN_143791e50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467f9210;
  return param_2;
}



// FUNCTION 143791e70 FUN_143791e70 body=64 status=ok
// SIG undefined FUN_143791e70(void)

undefined1 FUN_143791e70(longlong param_1)

{
  char cVar1;
  
  cVar1 = thunk_FUN_14370b790(param_1 + 0x10);
  if (cVar1 != '\0') {
    cVar1 = FUN_1437967b0(param_1 + 0x20);
    if (cVar1 != '\0') {
      cVar1 = FUN_1437967a0(param_1 + 0x28);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143791ec0 FUN_143791ec0 body=78 status=ok
// SIG undefined FUN_143791ec0(void)

void FUN_143791ec0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_14379bdd0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x104;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143791f10 FUN_143791f10 body=368 status=ok
// SIG undefined FUN_143791f10(void)

void FUN_143791f10(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int local_res20 [2];
  
  if (0 < param_4) {
    piVar6 = (int *)(param_1 + 0x28);
    param_2 = param_2 - param_1;
    lVar7 = (longlong)param_4;
    do {
      piVar1 = piVar6 + -10;
      if (piVar1 != (int *)0x0) {
        *(undefined ***)piVar1 = hkReferencedObject::vftable;
        FUN_143718270(piVar6 + -8,param_2 + -0x20 + (longlong)piVar6);
        piVar6[-6] = 0x1ffff;
        *(undefined ***)piVar1 = hkMemoryMeshTexture::vftable;
        FUN_1437165f0(piVar6 + -4,param_2 + -0x10 + (longlong)piVar6);
        piVar6[-2] = 0;
        piVar6[-1] = 0;
        *piVar6 = 0;
        piVar6[1] = -0x80000000;
        iVar2 = *(int *)(param_2 + (longlong)piVar6);
        lVar8 = (longlong)iVar2;
        local_res20[0] = iVar2;
        uVar3 = FUN_143703a50();
        iVar5 = local_res20[0];
        puVar4 = (undefined1 *)0x0;
        if (local_res20[0] != 0) {
          puVar4 = (undefined1 *)FUN_143702d60(uVar3,1,local_res20);
        }
        *(undefined1 **)(piVar6 + -2) = puVar4;
        *piVar6 = iVar5;
        iVar5 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar5 = local_res20[0];
        }
        piVar6[1] = iVar5;
        if (0 < iVar2) {
          lVar9 = *(longlong *)(param_2 + -8 + (longlong)piVar6) - (longlong)puVar4;
          do {
            *puVar4 = puVar4[lVar9];
            puVar4 = puVar4 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        *(undefined1 *)(piVar6 + 2) = *(undefined1 *)(param_2 + 8 + (longlong)piVar6);
        *(undefined1 *)((longlong)piVar6 + 9) = *(undefined1 *)(param_2 + 9 + (longlong)piVar6);
        *(undefined1 *)((longlong)piVar6 + 10) = *(undefined1 *)(param_2 + 10 + (longlong)piVar6);
        *(undefined1 *)((longlong)piVar6 + 0xb) = *(undefined1 *)(param_2 + 0xb + (longlong)piVar6);
        piVar6[3] = *(int *)(param_2 + 0xc + (longlong)piVar6);
      }
      piVar6 = piVar6 + 0xe;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 143792080 FUN_143792080 body=77 status=ok
// SIG undefined FUN_143792080(void)

undefined1 FUN_143792080(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x38);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x48);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1437920d0 func body=58 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavMeshInstanceData>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14379c160(param_1);
      }
      param_1 = param_1 + 0x1f0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143792110 FUN_143792110 body=139 status=ok
// SIG undefined FUN_143792110(void)

longlong FUN_143792110(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14379a790();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x80;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
    }
  }
  return param_1;
}



// FUNCTION 1437921d0 FUN_1437921d0 body=595 status=ok
// SIG undefined FUN_1437921d0(void)

void FUN_1437921d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int local_res20 [2];
  int local_38 [2];
  int local_30 [2];
  
  if (0 < param_4) {
    piVar11 = (int *)(param_1 + 0x30);
    param_2 = param_2 - param_1;
    puVar15 = (undefined8 *)0x0;
    lVar12 = (longlong)param_4;
    do {
      piVar1 = piVar11 + -0xc;
      if (piVar1 != (int *)0x0) {
        *(undefined ***)piVar1 = hkReferencedObject::vftable;
        FUN_143718270(piVar11 + -10,param_2 + -0x28 + (longlong)piVar11);
        piVar11[-8] = 0x1ffff;
        *(undefined ***)piVar1 = hkDefaultCompoundMeshShape::vftable;
        piVar11[-6] = 0;
        piVar11[-5] = 0;
        piVar11[-4] = 0;
        piVar11[-3] = -0x80000000;
        iVar3 = *(int *)(param_2 + -0x10 + (longlong)piVar11);
        lVar13 = (longlong)iVar3;
        local_res20[0] = iVar3;
        uVar8 = FUN_143703a50();
        iVar7 = local_res20[0];
        puVar9 = puVar15;
        if (local_res20[0] != 0) {
          puVar9 = (undefined8 *)FUN_143702d60(uVar8,8,local_res20);
        }
        *(undefined8 **)(piVar11 + -6) = puVar9;
        piVar11[-4] = iVar7;
        iVar7 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar7 = local_res20[0];
        }
        piVar11[-3] = iVar7;
        if (0 < iVar3) {
          lVar14 = *(longlong *)(param_2 + -0x18 + (longlong)piVar11) - (longlong)puVar9;
          do {
            *puVar9 = *(undefined8 *)(lVar14 + (longlong)puVar9);
            puVar9 = puVar9 + 1;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        piVar11[-2] = 0;
        piVar11[-1] = 0;
        *piVar11 = 0;
        piVar11[1] = -0x80000000;
        iVar3 = *(int *)(param_2 + (longlong)piVar11);
        lVar13 = (longlong)iVar3;
        local_38[0] = iVar3;
        uVar8 = FUN_143703a50();
        iVar7 = local_38[0];
        puVar9 = puVar15;
        if (local_38[0] != 0) {
          puVar9 = (undefined8 *)FUN_143702d60(uVar8,0x40,local_38);
        }
        *(undefined8 **)(piVar11 + -2) = puVar9;
        *piVar11 = iVar7;
        iVar7 = -0x80000000;
        if (local_38[0] != 0) {
          iVar7 = local_38[0];
        }
        piVar11[1] = iVar7;
        if (0 < iVar3) {
          puVar10 = puVar9 + 2;
          lVar14 = *(longlong *)(param_2 + -8 + (longlong)piVar11) - (longlong)puVar9;
          do {
            puVar9 = (undefined8 *)(lVar14 + -0x10 + (longlong)puVar10);
            uVar8 = puVar9[1];
            puVar10[-2] = *puVar9;
            puVar10[-1] = uVar8;
            uVar8 = ((undefined8 *)(lVar14 + (longlong)puVar10))[1];
            *puVar10 = *(undefined8 *)(lVar14 + (longlong)puVar10);
            puVar10[1] = uVar8;
            puVar2 = (undefined4 *)(lVar14 + 0x10 + (longlong)puVar10);
            uVar4 = puVar2[1];
            uVar5 = puVar2[2];
            uVar6 = puVar2[3];
            *(undefined4 *)(puVar10 + 2) = *puVar2;
            *(undefined4 *)((longlong)puVar10 + 0x14) = uVar4;
            *(undefined4 *)(puVar10 + 3) = uVar5;
            *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
            puVar9 = (undefined8 *)(lVar14 + 0x20 + (longlong)puVar10);
            uVar8 = puVar9[1];
            puVar10[4] = *puVar9;
            puVar10[5] = uVar8;
            puVar10 = puVar10 + 8;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = -0x80000000;
        iVar3 = *(int *)(param_2 + 0x10 + (longlong)piVar11);
        lVar13 = (longlong)iVar3;
        local_30[0] = iVar3;
        uVar8 = FUN_143703a50();
        iVar7 = local_30[0];
        puVar9 = puVar15;
        if (local_30[0] != 0) {
          puVar9 = (undefined8 *)FUN_143702d60(uVar8,8,local_30);
        }
        *(undefined8 **)(piVar11 + 2) = puVar9;
        piVar11[4] = iVar7;
        iVar7 = -0x80000000;
        if (local_30[0] != 0) {
          iVar7 = local_30[0];
        }
        piVar11[5] = iVar7;
        if (0 < iVar3) {
          lVar14 = *(longlong *)(param_2 + 8 + (longlong)piVar11) - (longlong)puVar9;
          do {
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = *(undefined8 *)(lVar14 + (longlong)puVar9);
            }
            puVar9 = puVar9 + 1;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
      }
      piVar11 = piVar11 + 0x12;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 143792430 FUN_143792430 body=139 status=ok
// SIG undefined FUN_143792430(void)

longlong FUN_143792430(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143798ba0();
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



// FUNCTION 1437924c0 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiNavMeshInstanceData>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x1f0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x3e;
      plVar2 = plVar2 + -0x3e;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143792530 FUN_143792530 body=103 status=ok
// SIG undefined FUN_143792530(void)

void FUN_143792530(undefined8 *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar1 = (longlong)param_4;
    do {
      if ((param_1 != (undefined8 *)0x0) &&
         (*param_1 = 0, param_1 != (undefined8 *)(param_2 + (longlong)param_1))) {
        FUN_143716660(param_1);
        *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8 + (longlong)param_1);
      }
      param_1 = param_1 + 2;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1437925a0 FUN_1437925a0 body=73 status=ok
// SIG undefined FUN_1437925a0(void)

void FUN_1437925a0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      thunk_FUN_14379bfb0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x104;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437925f0 func body=73 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<512,hkaiNavMeshInstanceData>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_14379c260(param_1,param_2 + param_1);
      param_1 = param_1 + 0x1f0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143792640 FUN_143792640 body=212 status=ok
// SIG undefined FUN_143792640(void)

longlong FUN_143792640(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),1,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  FUN_143716650(param_1 + 0x18);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        sVar3 = 0x38;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
    }
  }
  return param_1;
}



// FUNCTION 143792720 FUN_143792720 body=108 status=ok
// SIG undefined FUN_143792720(void)

void FUN_143792720(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar3 = (longlong)param_4;
    lVar2 = param_2 - param_1;
    param_1 = param_1 - param_2;
    do {
      lVar1 = param_1 + param_2;
      if (lVar1 != param_2) {
        FUN_143716660(lVar1,param_2);
        lVar1 = param_1 + param_2;
        *(undefined1 *)(lVar1 + 8) = *(undefined1 *)(lVar1 + 8 + lVar2);
      }
      param_2 = param_2 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143792790 FUN_143792790 body=18 status=ok
// SIG undefined FUN_143792790(void)

undefined8 * FUN_143792790(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467f92f0;
  return param_2;
}



// FUNCTION 1437927b0 FUN_1437927b0 body=18 status=ok
// SIG undefined FUN_1437927b0(void)

undefined8 * FUN_1437927b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467f9360;
  return param_2;
}



// FUNCTION 1437927d0 FUN_1437927d0 body=18 status=ok
// SIG undefined FUN_1437927d0(void)

undefined8 * FUN_1437927d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467f93c0;
  return param_2;
}



// FUNCTION 1437927f0 FUN_1437927f0 body=74 status=ok
// SIG undefined FUN_1437927f0(void)

void FUN_1437927f0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143795a20(param_1,local_res18);
      }
      param_1 = param_1 + 0x48;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143792840 FUN_143792840 body=12 status=ok
// SIG undefined FUN_143792840(void)

undefined8 FUN_143792840(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)param_2 * 8);
}



// FUNCTION 143792850 FUN_143792850 body=14 status=ok
// SIG undefined FUN_143792850(void)

undefined4 FUN_143792850(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x20);
  }
  return 0;
}



// FUNCTION 143792860 FUN_143792860 body=9 status=ok
// SIG undefined FUN_143792860(void)

void FUN_143792860(longlong param_1)

{
  FUN_14379bc10(*(undefined8 *)(param_1 + 0x60));
  return;
}



// FUNCTION 143792870 FUN_143792870 body=9 status=ok
// SIG undefined FUN_143792870(void)

void FUN_143792870(longlong param_1)

{
  FUN_14379bb80(*(undefined8 *)(param_1 + 0x60));
  return;
}



// FUNCTION 143792880 FUN_143792880 body=78 status=ok
// SIG undefined FUN_143792880(void)

void FUN_143792880(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_14379cdc0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x168;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437928d0 FUN_1437928d0 body=9 status=ok
// SIG undefined FUN_1437928d0(void)

void FUN_1437928d0(longlong param_1)

{
  FUN_14379baf0(*(undefined8 *)(param_1 + 0x60));
  return;
}



// FUNCTION 1437928e0 FUN_1437928e0 body=9 status=ok
// SIG undefined FUN_1437928e0(void)

undefined8 FUN_1437928e0(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x38);
}



// FUNCTION 1437928f0 FUN_1437928f0 body=9 status=ok
// SIG undefined FUN_1437928f0(void)

undefined8 FUN_1437928f0(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48);
}



// FUNCTION 143792950 FUN_143792950 body=9 status=ok
// SIG undefined FUN_143792950(void)

undefined8 FUN_143792950(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x58);
}



// FUNCTION 143792960 FUN_143792960 body=14 status=ok
// SIG undefined FUN_143792960(void)

undefined4 FUN_143792960(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x60);
}



// FUNCTION 143792970 FUN_143792970 body=9 status=ok
// SIG undefined FUN_143792970(void)

void FUN_143792970(longlong param_1)

{
  FUN_1437166c0(param_1 + 0x80);
  return;
}



// FUNCTION 143792980 FUN_143792980 body=12 status=ok
// SIG undefined FUN_143792980(void)

undefined2 * FUN_143792980(undefined8 param_1,undefined2 *param_2)

{
  *param_2 = 0xffff;
  return param_2;
}



// FUNCTION 143792990 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiNavMeshCutter>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x168 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x2d;
      plVar2 = plVar2 + -0x2d;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437929f0 FUN_1437929f0 body=136 status=ok
// SIG undefined FUN_1437929f0(void)

longlong FUN_1437929f0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143799800();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x18;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143792a80 FUN_143792a80 body=9 status=ok
// SIG undefined FUN_143792a80(void)

ulonglong FUN_143792a80(longlong param_1)

{
  return *(ulonglong *)(param_1 + 0x48) & 0xfffffffffffffffe;
}



// FUNCTION 143792a90 FUN_143792a90 body=9 status=ok
// SIG undefined FUN_143792a90(void)

void FUN_143792a90(longlong param_1)

{
  FUN_1437166c0(param_1 + 0x48);
  return;
}



// FUNCTION 143792aa0 FUN_143792aa0 body=57 status=ok
// SIG undefined FUN_143792aa0(void)

void FUN_143792aa0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14379a710(param_1,0);
      }
      param_1 = param_1 + 0x80;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143792ae0 FUN_143792ae0 body=51 status=ok
// SIG undefined FUN_143792ae0(void)

undefined1 FUN_143792ae0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x30);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143792b20 FUN_143792b20 body=77 status=ok
// SIG undefined FUN_143792b20(void)

void FUN_143792b20(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143795b70(param_1,local_res18);
      }
      param_1 = param_1 + 0x168;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143792b70 FUN_143792b70 body=430 status=ok
// SIG undefined FUN_143792b70(void)

void FUN_143792b70(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  int local_res20 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    piVar10 = (int *)(param_1 + 0x28);
    lVar11 = (longlong)param_4;
    do {
      piVar2 = piVar10 + -10;
      if (piVar2 != (int *)0x0) {
        *(undefined ***)piVar2 = hkReferencedObject::vftable;
        FUN_143718270(piVar10 + -8,param_2 + -0x20 + (longlong)piVar10);
        piVar10[-6] = 0x1ffff;
        *(undefined ***)piVar2 = hkMemoryMeshMaterial::vftable;
        FUN_1437165f0(piVar10 + -4,param_2 + -0x10 + (longlong)piVar10);
        piVar10[-2] = 0;
        piVar10[-1] = 0;
        *piVar10 = 0;
        piVar10[1] = -0x80000000;
        local_res20[0] = *(int *)(param_2 + (longlong)piVar10);
        lVar9 = (longlong)local_res20[0];
        uVar7 = FUN_143703a50();
        iVar6 = local_res20[0];
        plVar8 = (longlong *)0x0;
        if (local_res20[0] != 0) {
          plVar8 = (longlong *)FUN_143702d60(uVar7,8,local_res20);
        }
        *(longlong **)(piVar10 + -2) = plVar8;
        *piVar10 = iVar6;
        iVar6 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar6 = local_res20[0];
        }
        piVar10[1] = iVar6;
        if (0 < lVar9) {
          lVar12 = *(longlong *)((longlong)piVar10 + param_2 + -8) - (longlong)plVar8;
          do {
            if ((plVar8 != (longlong *)0x0) &&
               (lVar3 = *(longlong *)(lVar12 + (longlong)plVar8), *plVar8 = lVar3, lVar3 != 0)) {
              FUN_14370c030();
            }
            plVar8 = plVar8 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        puVar1 = (undefined8 *)(param_2 + 8 + (longlong)piVar10);
        uVar7 = puVar1[1];
        *(undefined8 *)(piVar10 + 2) = *puVar1;
        *(undefined8 *)(piVar10 + 4) = uVar7;
        puVar1 = (undefined8 *)(param_2 + 0x18 + (longlong)piVar10);
        uVar7 = puVar1[1];
        *(undefined8 *)(piVar10 + 6) = *puVar1;
        *(undefined8 *)(piVar10 + 8) = uVar7;
        puVar1 = (undefined8 *)(param_2 + 0x28 + (longlong)piVar10);
        uVar7 = puVar1[1];
        *(undefined8 *)(piVar10 + 10) = *puVar1;
        *(undefined8 *)(piVar10 + 0xc) = uVar7;
        piVar2 = (int *)(param_2 + 0x38 + (longlong)piVar10);
        iVar6 = piVar2[1];
        iVar4 = piVar2[2];
        iVar5 = piVar2[3];
        piVar10[0xe] = *piVar2;
        piVar10[0xf] = iVar6;
        piVar10[0x10] = iVar4;
        piVar10[0x11] = iVar5;
        *(undefined8 *)(piVar10 + 0x12) = *(undefined8 *)(param_2 + 0x48 + (longlong)piVar10);
        piVar10[0x14] = *(int *)(param_2 + 0x50 + (longlong)piVar10);
        piVar10[0x15] = *(int *)(param_2 + 0x54 + (longlong)piVar10);
      }
      piVar10 = piVar10 + 0x20;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 143792d60 func body=77 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiVolumeNavigator::NavigatorSettings>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x80 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x10;
      plVar2 = plVar2 + -0x10;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143792db0 FUN_143792db0 body=403 status=ok
// SIG undefined FUN_143792db0(void)

void FUN_143792db0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int local_res20 [2];
  
  if (0 < param_4) {
    piVar7 = (int *)(param_1 + 0x20);
    param_2 = param_2 - param_1;
    lVar8 = (longlong)param_4;
    do {
      piVar1 = piVar7 + -8;
      if (piVar1 != (int *)0x0) {
        *(undefined ***)piVar1 = hkReferencedObject::vftable;
        FUN_143718270(piVar7 + -6,param_2 + -0x18 + (longlong)piVar7);
        piVar7[-4] = 0x1ffff;
        *(undefined ***)piVar1 = hkDefaultCompoundMeshBody::vftable;
        piVar7[-2] = 0;
        piVar7[-1] = 0;
        *piVar7 = 0;
        piVar7[1] = -0x80000000;
        iVar2 = *(int *)(param_2 + (longlong)piVar7);
        lVar9 = (longlong)iVar2;
        local_res20[0] = iVar2;
        uVar4 = FUN_143703a50();
        iVar6 = local_res20[0];
        puVar5 = (undefined8 *)0x0;
        if (local_res20[0] != 0) {
          puVar5 = (undefined8 *)FUN_143702d60(uVar4,8,local_res20);
        }
        *(undefined8 **)(piVar7 + -2) = puVar5;
        *piVar7 = iVar6;
        iVar6 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar6 = local_res20[0];
        }
        piVar7[1] = iVar6;
        if (0 < iVar2) {
          lVar10 = *(longlong *)(param_2 + -8 + (longlong)piVar7) - (longlong)puVar5;
          do {
            *puVar5 = *(undefined8 *)(lVar10 + (longlong)puVar5);
            puVar5 = puVar5 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        puVar5 = (undefined8 *)(param_2 + 0x10 + (longlong)piVar7);
        uVar4 = puVar5[1];
        *(undefined8 *)(piVar7 + 4) = *puVar5;
        *(undefined8 *)(piVar7 + 6) = uVar4;
        puVar5 = (undefined8 *)(param_2 + 0x20 + (longlong)piVar7);
        uVar4 = puVar5[1];
        *(undefined8 *)(piVar7 + 8) = *puVar5;
        *(undefined8 *)(piVar7 + 10) = uVar4;
        piVar1 = (int *)(param_2 + 0x30 + (longlong)piVar7);
        iVar2 = piVar1[1];
        iVar6 = piVar1[2];
        iVar3 = piVar1[3];
        piVar7[0xc] = *piVar1;
        piVar7[0xd] = iVar2;
        piVar7[0xe] = iVar6;
        piVar7[0xf] = iVar3;
        piVar1 = (int *)(param_2 + 0x40 + (longlong)piVar7);
        iVar2 = piVar1[1];
        iVar6 = piVar1[2];
        iVar3 = piVar1[3];
        piVar7[0x10] = *piVar1;
        piVar7[0x11] = iVar2;
        piVar7[0x12] = iVar6;
        piVar7[0x13] = iVar3;
        *(undefined8 *)(piVar7 + 0x14) = *(undefined8 *)(param_2 + 0x50 + (longlong)piVar7);
        lVar9 = *(longlong *)(param_2 + 0x58 + (longlong)piVar7);
        *(longlong *)(piVar7 + 0x16) = lVar9;
        if (lVar9 != 0) {
          FUN_14370c030();
        }
        *(undefined1 *)(piVar7 + 0x18) = *(undefined1 *)(param_2 + 0x60 + (longlong)piVar7);
        *(undefined1 *)((longlong)piVar7 + 0x61) =
             *(undefined1 *)(param_2 + 0x61 + (longlong)piVar7);
      }
      piVar7 = piVar7 + 0x24;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 143792f50 func body=70 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<512,hkaiTraversalAnnotationLibrary>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_14379a840(param_1,param_2 + param_1);
      param_1 = param_1 + 0x80;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143792fa0 FUN_143792fa0 body=18 status=ok
// SIG undefined FUN_143792fa0(void)

undefined8 * FUN_143792fa0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467f9680;
  return param_2;
}



// FUNCTION 143792ff0 FUN_143792ff0 body=77 status=ok
// SIG undefined FUN_143792ff0(void)

void FUN_143792ff0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437959f0(param_1,local_res18);
      }
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143793040 FUN_143793040 body=139 status=ok
// SIG undefined FUN_143793040(void)

longlong FUN_143793040(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14379a340();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x50;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
    }
  }
  return param_1;
}



// FUNCTION 1437930d0 FUN_1437930d0 body=139 status=ok
// SIG undefined FUN_1437930d0(void)

longlong FUN_1437930d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143798c60();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x48;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
    }
  }
  return param_1;
}



// FUNCTION 143793160 FUN_143793160 body=139 status=ok
// SIG undefined FUN_143793160(void)

longlong FUN_143793160(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437961f0();
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



// FUNCTION 143793200 FUN_143793200 body=18 status=ok
// SIG undefined FUN_143793200(void)

undefined8 * FUN_143793200(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467f9930;
  return param_2;
}



// FUNCTION 143793270 FUN_143793270 body=1045 status=ok
// SIG undefined FUN_143793270(void)

void FUN_143793270(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int local_res20 [2];
  longlong local_b8;
  int *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    piVar15 = (int *)(param_1 + 0x30);
    local_58 = param_2 + 8;
    lVar17 = param_2 + 0x10;
    local_40 = param_2 + -0x28;
    lVar14 = (longlong)param_4;
    lVar12 = param_2 + -0x10;
    lVar18 = param_2 + -8;
    lVar19 = param_2 + 0x18;
    lVar16 = param_2 + -0x18;
    local_70 = lVar19;
    local_68 = lVar17;
    local_60 = lVar18;
    local_50 = lVar16;
    local_48 = lVar12;
    do {
      piVar1 = piVar15 + -0xc;
      if (piVar1 != (int *)0x0) {
        *(undefined ***)piVar1 = hkReferencedObject::vftable;
        local_b8 = lVar14;
        local_b0 = piVar15;
        FUN_143718270(piVar15 + -10);
        piVar15[-8] = 0x1ffff;
        *(undefined ***)piVar1 = hkMemoryMeshShape::vftable;
        piVar15[-6] = 0;
        piVar15[-5] = 0;
        piVar15[-4] = 0;
        piVar15[-3] = -0x80000000;
        iVar2 = *(int *)(lVar12 + (longlong)piVar15);
        lVar12 = (longlong)iVar2;
        local_res20[0] = iVar2;
        uVar5 = FUN_143703a50();
        iVar4 = local_res20[0];
        if (local_res20[0] == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = FUN_143702d60(uVar5,0x38,local_res20);
        }
        *(longlong *)(piVar15 + -6) = lVar6;
        piVar15[-4] = iVar4;
        iVar4 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar4 = local_res20[0];
        }
        piVar15[-3] = iVar4;
        if (0 < iVar2) {
          lVar7 = *(longlong *)((longlong)piVar15 + lVar16) - lVar6;
          puVar13 = (uint *)(lVar6 + 0x1c);
          local_a8 = lVar7 + 4;
          local_a0 = lVar7 + 8;
          local_98 = lVar7 + 0xc;
          local_90 = lVar7 + 0x10;
          local_88 = lVar7 + 0x14;
          local_80 = lVar7 + 0x18;
          lVar16 = lVar7 + -0xc;
          local_78 = lVar16;
          do {
            if (puVar13 + -7 != (uint *)0x0) {
              lVar17 = *(longlong *)((longlong)puVar13 + lVar7 + -0x1c);
              *(longlong *)(puVar13 + -7) = lVar17;
              if (lVar17 != 0) {
                FUN_14370c030();
              }
              lVar17 = *(longlong *)(lVar7 + -0x14 + (longlong)puVar13);
              *(longlong *)(puVar13 + -5) = lVar17;
              if (lVar17 != 0) {
                FUN_14370c030();
              }
              *puVar13 = 0x80000000;
              puVar13[-3] = 0;
              puVar13[-2] = 0;
              puVar13[-1] = 0;
              uVar3 = *(uint *)(lVar7 + -4 + (longlong)puVar13);
              uVar5 = *(undefined8 *)((longlong)puVar13 + lVar16);
              uVar8 = FUN_143703a50();
              if ((int)(*puVar13 & 0x3fffffff) < (int)uVar3) {
                FUN_14370c310(uVar8,puVar13 + -3,uVar3,2);
              }
              FUN_143795730(*(undefined8 *)(puVar13 + -3),uVar5,uVar3);
              puVar13[-1] = uVar3;
              *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(local_a8 + (longlong)puVar13);
              puVar13[2] = *(uint *)(local_a0 + (longlong)puVar13);
              *(undefined1 *)(puVar13 + 3) = *(undefined1 *)(local_98 + (longlong)puVar13);
              puVar13[4] = *(uint *)(local_90 + (longlong)puVar13);
              puVar13[5] = *(uint *)(local_88 + (longlong)puVar13);
              puVar13[6] = *(uint *)(local_80 + (longlong)puVar13);
              lVar16 = local_78;
            }
            puVar13 = puVar13 + 0xe;
            lVar12 = lVar12 + -1;
            lVar14 = local_b8;
            piVar15 = local_b0;
            lVar17 = local_68;
            lVar18 = local_60;
            lVar19 = local_70;
          } while (lVar12 != 0);
        }
        puVar10 = (undefined4 *)0x0;
        piVar15[-2] = 0;
        piVar15[-1] = 0;
        *piVar15 = 0;
        piVar15[1] = -0x80000000;
        iVar2 = *(int *)(param_2 + (longlong)piVar15);
        lVar12 = (longlong)iVar2;
        local_b8 = CONCAT44(local_b8._4_4_,iVar2);
        uVar5 = FUN_143703a50();
        iVar4 = (int)local_b8;
        if ((int)local_b8 == 0) {
          iVar11 = 0;
          puVar9 = puVar10;
        }
        else {
          puVar9 = (undefined4 *)FUN_143702d60(uVar5,2,&local_b8);
          iVar11 = (int)local_b8;
        }
        *(undefined4 **)(piVar15 + -2) = puVar9;
        *piVar15 = iVar4;
        iVar4 = -0x80000000;
        if (iVar11 != 0) {
          iVar4 = iVar11;
        }
        piVar15[1] = iVar4;
        if (0 < iVar2) {
          lVar16 = *(longlong *)((longlong)piVar15 + lVar18) - (longlong)puVar9;
          do {
            *(undefined2 *)puVar9 = *(undefined2 *)(lVar16 + (longlong)puVar9);
            puVar9 = (undefined4 *)((longlong)puVar9 + 2);
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        piVar15[2] = 0;
        piVar15[3] = 0;
        piVar15[4] = 0;
        piVar15[5] = -0x80000000;
        iVar2 = *(int *)(lVar17 + (longlong)piVar15);
        lVar12 = (longlong)iVar2;
        local_b0 = (int *)CONCAT44(local_b0._4_4_,iVar2);
        uVar5 = FUN_143703a50();
        iVar4 = (int)local_b0;
        if ((int)local_b0 == 0) {
          iVar11 = 0;
        }
        else {
          puVar10 = (undefined4 *)FUN_143702d60(uVar5,4,&local_b0);
          iVar11 = (int)local_b0;
        }
        *(undefined4 **)(piVar15 + 2) = puVar10;
        piVar15[4] = iVar4;
        iVar4 = -0x80000000;
        if (iVar11 != 0) {
          iVar4 = iVar11;
        }
        piVar15[5] = iVar4;
        if (0 < iVar2) {
          lVar16 = *(longlong *)(local_58 + (longlong)piVar15) - (longlong)puVar10;
          do {
            *puVar10 = *(undefined4 *)(lVar16 + (longlong)puVar10);
            puVar10 = puVar10 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        FUN_1437165f0(piVar15 + 6,(longlong)piVar15 + lVar19);
        lVar12 = local_48;
        lVar16 = local_50;
      }
      piVar15 = piVar15 + 0x14;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 143793690 FUN_143793690 body=14 status=ok
// SIG undefined FUN_143793690(void)

undefined4 FUN_143793690(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x20);
  }
  return 0;
}



// FUNCTION 1437936a0 FUN_1437936a0 body=9 status=ok
// SIG undefined FUN_1437936a0(void)

void FUN_1437936a0(longlong param_1)

{
  FUN_14379bb80(*(undefined8 *)(param_1 + 0x78));
  return;
}



// FUNCTION 1437936b0 FUN_1437936b0 body=9 status=ok
// SIG undefined FUN_1437936b0(void)

void FUN_1437936b0(longlong param_1)

{
  FUN_14379baf0(*(undefined8 *)(param_1 + 0x78));
  return;
}



// FUNCTION 1437936c0 FUN_1437936c0 body=416 status=ok
// SIG undefined FUN_1437936c0(void)

void FUN_1437936c0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar5 = (uint *)(param_1 + 0x1c);
    lVar6 = (longlong)param_4;
    do {
      if (puVar5 + -7 != (uint *)0x0) {
        lVar2 = *(longlong *)((longlong)puVar5 + param_2 + -0x1c);
        *(longlong *)(puVar5 + -7) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
        lVar2 = *(longlong *)(param_2 + -0x14 + (longlong)puVar5);
        *(longlong *)(puVar5 + -5) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
        puVar5[-3] = 0;
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0x80000000;
        uVar1 = *(uint *)((longlong)puVar5 + param_2 + -4);
        uVar3 = *(undefined8 *)(param_2 + -0xc + (longlong)puVar5);
        uVar4 = FUN_143703a50();
        if ((int)(*puVar5 & 0x3fffffff) < (int)uVar1) {
          FUN_14370c310(uVar4,puVar5 + -3,uVar1,2);
        }
        FUN_143795730(*(undefined8 *)(puVar5 + -3),uVar3,uVar1);
        puVar5[-1] = uVar1;
        *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(param_2 + 4 + (longlong)puVar5);
        puVar5[2] = *(uint *)(param_2 + 8 + (longlong)puVar5);
        *(undefined1 *)(puVar5 + 3) = *(undefined1 *)(param_2 + 0xc + (longlong)puVar5);
        *(undefined8 *)(puVar5 + 5) = *(undefined8 *)(param_2 + 0x14 + (longlong)puVar5);
        puVar5[7] = *(uint *)(param_2 + 0x1c + (longlong)puVar5);
        puVar5[8] = *(uint *)(param_2 + 0x20 + (longlong)puVar5);
      }
      puVar5 = puVar5 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143793860 FUN_143793860 body=153 status=ok
// SIG undefined FUN_143793860(void)

void FUN_143793860(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar2 = (uint *)(param_1 + 0x1c + lVar3 * 0x40);
    do {
      uVar1 = FUN_143703a50();
      puVar2[-1] = 0;
      if (-1 < (int)*puVar2) {
        FUN_143702e10(uVar1,*(undefined8 *)(puVar2 + -3),2,*puVar2 & 0x3fffffff);
      }
      puVar2[-3] = 0;
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      if (*(longlong *)(puVar2 + -5) != 0) {
        FUN_14370c150();
      }
      if (*(longlong *)(puVar2 + -7) != 0) {
        FUN_14370c150();
      }
      puVar2 = puVar2 + -0x10;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 143793930 FUN_143793930 body=83 status=ok
// SIG undefined FUN_143793930(void)

void FUN_143793930(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14379adc0(param_1,0,0,0,0);
      }
      param_1 = param_1 + 0x40;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143793990 FUN_143793990 body=18 status=ok
// SIG undefined FUN_143793990(void)

undefined8 * FUN_143793990(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467f9ad0;
  return param_2;
}



// FUNCTION 1437939b0 FUN_1437939b0 body=74 status=ok
// SIG undefined FUN_1437939b0(void)

void FUN_1437939b0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143795b20(param_1,local_res18);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143793a00 FUN_143793a00 body=201 status=ok
// SIG undefined FUN_143793a00(void)

void FUN_143793a00(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*(longlong *)(param_2 + -8 + (longlong)plVar1) != 0) {
        FUN_14370c030();
      }
      if (plVar1[-1] != 0) {
        FUN_14370c150();
      }
      plVar1[-1] = *(longlong *)(param_2 + -8 + (longlong)plVar1);
      if (*(longlong *)(param_2 + (longlong)plVar1) != 0) {
        FUN_14370c030();
      }
      if (*plVar1 != 0) {
        FUN_14370c150();
      }
      *plVar1 = *(longlong *)(param_2 + (longlong)plVar1);
      FUN_143796480(plVar1 + 1,param_2 + 8 + (longlong)plVar1);
      *(undefined1 *)(plVar1 + 3) = *(undefined1 *)(param_2 + 0x18 + (longlong)plVar1);
      *(undefined4 *)((longlong)plVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c + (longlong)plVar1);
      *(undefined1 *)(plVar1 + 4) = *(undefined1 *)(param_2 + 0x20 + (longlong)plVar1);
      plVar1[5] = *(longlong *)(param_2 + 0x28 + (longlong)plVar1);
      *(undefined4 *)(plVar1 + 6) = *(undefined4 *)(param_2 + 0x30 + (longlong)plVar1);
      *(undefined4 *)((longlong)plVar1 + 0x34) = *(undefined4 *)(param_2 + 0x34 + (longlong)plVar1);
      plVar1 = plVar1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143793ad0 FUN_143793ad0 body=96 status=ok
// SIG undefined FUN_143793ad0(void)

void FUN_143793ad0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined2 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined2 *)(param_1 + 8);
    do {
      if (puVar1 + -4 != (undefined2 *)0x0) {
        FUN_1437165f0(puVar1 + -4,param_2 + -8 + (longlong)puVar1);
        *puVar1 = *(undefined2 *)(param_2 + (longlong)puVar1);
        puVar1[1] = *(undefined2 *)(param_2 + 2 + (longlong)puVar1);
      }
      puVar1 = puVar1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143793b30 FUN_143793b30 body=520 status=ok
// SIG undefined FUN_143793b30(void)

void FUN_143793b30(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong lVar15;
  uint local_res20 [2];
  uint local_38 [4];
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar14 = (uint *)(param_1 + 0x38);
    lVar15 = (longlong)param_4;
    do {
      puVar1 = puVar14 + -0xe;
      if (puVar1 != (uint *)0x0) {
        *(undefined ***)puVar1 = hkReferencedObject::vftable;
        FUN_143718270(puVar14 + -0xc,param_2 + -0x30 + (longlong)puVar14);
        puVar14[-10] = 0x1ffff;
        *(undefined ***)puVar1 = hkSkinBinding::vftable;
        lVar10 = *(longlong *)(param_2 + -0x20 + (longlong)puVar14);
        *(longlong *)(puVar14 + -8) = lVar10;
        if (lVar10 != 0) {
          FUN_14370c030();
        }
        puVar14[-6] = 0;
        puVar14[-5] = 0;
        puVar14[-4] = 0;
        puVar14[-3] = 0x80000000;
        uVar4 = *(uint *)(param_2 + -0x10 + (longlong)puVar14);
        lVar12 = (longlong)(int)uVar4;
        local_res20[0] = uVar4;
        uVar9 = FUN_143703a50();
        uVar8 = local_res20[0];
        lVar10 = 0;
        if (local_res20[0] != 0) {
          lVar10 = FUN_143702d60(uVar9,0x40,local_res20);
        }
        *(longlong *)(puVar14 + -6) = lVar10;
        puVar14[-4] = uVar8;
        uVar8 = 0x80000000;
        if (local_res20[0] != 0) {
          uVar8 = local_res20[0];
        }
        puVar14[-3] = uVar8;
        if (0 < (int)uVar4) {
          puVar11 = (undefined8 *)(lVar10 + 0x10);
          lVar10 = *(longlong *)(param_2 + -0x18 + (longlong)puVar14) - lVar10;
          do {
            puVar2 = (undefined8 *)(lVar10 + -0x10 + (longlong)puVar11);
            uVar9 = puVar2[1];
            puVar11[-2] = *puVar2;
            puVar11[-1] = uVar9;
            uVar9 = ((undefined8 *)(lVar10 + (longlong)puVar11))[1];
            *puVar11 = *(undefined8 *)(lVar10 + (longlong)puVar11);
            puVar11[1] = uVar9;
            puVar3 = (undefined4 *)(lVar10 + 0x10 + (longlong)puVar11);
            uVar5 = puVar3[1];
            uVar6 = puVar3[2];
            uVar7 = puVar3[3];
            *(undefined4 *)(puVar11 + 2) = *puVar3;
            *(undefined4 *)((longlong)puVar11 + 0x14) = uVar5;
            *(undefined4 *)(puVar11 + 3) = uVar6;
            *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar7;
            puVar2 = (undefined8 *)(lVar10 + 0x20 + (longlong)puVar11);
            uVar9 = puVar2[1];
            puVar11[4] = *puVar2;
            puVar11[5] = uVar9;
            puVar11 = puVar11 + 8;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        puVar14[-2] = 0;
        puVar14[-1] = 0;
        *puVar14 = 0;
        puVar14[1] = 0x80000000;
        uVar4 = *(uint *)(param_2 + (longlong)puVar14);
        uVar13 = (ulonglong)uVar4;
        local_38[0] = uVar4;
        uVar9 = FUN_143703a50();
        uVar8 = local_38[0];
        lVar10 = 0;
        if (local_38[0] != 0) {
          lVar10 = FUN_143702d60(uVar9,8,local_38);
        }
        *(longlong *)(puVar14 + -2) = lVar10;
        *puVar14 = uVar8;
        uVar8 = 0x80000000;
        if (local_38[0] != 0) {
          uVar8 = local_38[0];
        }
        puVar14[1] = uVar8;
        if (0 < (int)uVar4) {
          lVar12 = *(longlong *)(param_2 + -8 + (longlong)puVar14) - lVar10;
          do {
            if (lVar10 != 0) {
              FUN_1437165f0(lVar10,lVar12 + lVar10);
            }
            lVar10 = lVar10 + 8;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      puVar14 = puVar14 + 0x10;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}



// FUNCTION 143793d40 func body=77 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkcdPlanarSolid::NodeStorage>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x40 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -8;
      plVar2 = plVar2 + -8;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143793d90 FUN_143793d90 body=6 status=ok
// SIG undefined FUN_143793d90(void)

undefined4 FUN_143793d90(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// FUNCTION 143793da0 FUN_143793da0 body=6 status=ok
// SIG undefined FUN_143793da0(void)

void FUN_143793da0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x78) = param_2;
  return;
}



// FUNCTION 143793db0 FUN_143793db0 body=74 status=ok
// SIG undefined FUN_143793db0(void)

void FUN_143793db0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143795c00(param_1,local_res18);
      }
      param_1 = param_1 + 0x40;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143793e00 FUN_143793e00 body=64 status=ok
// SIG undefined FUN_143793e00(void)

undefined1 FUN_143793e00(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x38);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143793e40 FUN_143793e40 body=474 status=ok
// SIG undefined FUN_143793e40(void)

void FUN_143793e40(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int local_res20 [2];
  int local_38 [4];
  
  if (0 < param_4) {
    piVar10 = (int *)(param_1 + 0x38);
    param_2 = param_2 - param_1;
    lVar11 = (longlong)param_4;
    do {
      piVar1 = piVar10 + -0xe;
      if (piVar1 != (int *)0x0) {
        *(undefined ***)piVar1 = hkReferencedObject::vftable;
        FUN_143718270(piVar10 + -0xc,param_2 + -0x30 + (longlong)piVar10);
        piVar10[-10] = 0x1ffff;
        *(undefined ***)piVar1 = hkSkinnedRefMeshShape::vftable;
        lVar12 = *(longlong *)((longlong)piVar10 + param_2 + -0x20);
        *(longlong *)(piVar10 + -8) = lVar12;
        if (lVar12 != 0) {
          FUN_14370c030();
        }
        piVar10[-6] = 0;
        piVar10[-5] = 0;
        piVar10[-4] = 0;
        piVar10[-3] = -0x80000000;
        iVar3 = *(int *)(param_2 + -0x10 + (longlong)piVar10);
        lVar12 = (longlong)iVar3;
        local_res20[0] = iVar3;
        uVar8 = FUN_143703a50();
        iVar7 = local_res20[0];
        puVar9 = (undefined4 *)0x0;
        if (local_res20[0] != 0) {
          puVar9 = (undefined4 *)FUN_143702d60(uVar8,2,local_res20);
        }
        *(undefined4 **)(piVar10 + -6) = puVar9;
        piVar10[-4] = iVar7;
        iVar7 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar7 = local_res20[0];
        }
        piVar10[-3] = iVar7;
        if (0 < iVar3) {
          lVar13 = *(longlong *)((longlong)piVar10 + param_2 + -0x18) - (longlong)puVar9;
          do {
            *(undefined2 *)puVar9 = *(undefined2 *)(lVar13 + (longlong)puVar9);
            puVar9 = (undefined4 *)((longlong)puVar9 + 2);
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        piVar10[-2] = 0;
        piVar10[-1] = 0;
        *piVar10 = 0;
        piVar10[1] = -0x80000000;
        iVar3 = *(int *)(param_2 + (longlong)piVar10);
        lVar12 = (longlong)iVar3;
        local_38[0] = iVar3;
        uVar8 = FUN_143703a50();
        iVar7 = local_38[0];
        puVar9 = (undefined4 *)0x0;
        if (local_38[0] != 0) {
          puVar9 = (undefined4 *)FUN_143702d60(uVar8,0x10,local_38);
        }
        *(undefined4 **)(piVar10 + -2) = puVar9;
        *piVar10 = iVar7;
        iVar7 = -0x80000000;
        if (local_38[0] != 0) {
          iVar7 = local_38[0];
        }
        piVar10[1] = iVar7;
        if (0 < iVar3) {
          lVar13 = *(longlong *)(param_2 + -8 + (longlong)piVar10) - (longlong)puVar9;
          do {
            puVar2 = (undefined4 *)(lVar13 + (longlong)puVar9);
            uVar4 = puVar2[1];
            uVar5 = puVar2[2];
            uVar6 = puVar2[3];
            *puVar9 = *puVar2;
            puVar9[1] = uVar4;
            puVar9[2] = uVar5;
            puVar9[3] = uVar6;
            puVar9 = puVar9 + 4;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        FUN_1437165f0(piVar10 + 2,param_2 + 8 + (longlong)piVar10);
      }
      piVar10 = piVar10 + 0x12;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 143794020 FUN_143794020 body=18 status=ok
// SIG undefined FUN_143794020(void)

undefined8 * FUN_143794020(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467f9c20;
  return param_2;
}



// FUNCTION 143794060 FUN_143794060 body=55 status=ok
// SIG undefined FUN_143794060(void)

void FUN_143794060(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437997a0(param_1);
      }
      param_1 = param_1 + 0x60;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437940d0 FUN_1437940d0 body=74 status=ok
// SIG undefined FUN_1437940d0(void)

void FUN_1437940d0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143795c40(param_1,local_res18);
      }
      param_1 = param_1 + 0x48;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143794120 FUN_143794120 body=794 status=ok
// SIG undefined FUN_143794120(void)

void FUN_143794120(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  undefined8 *puVar16;
  int local_res20 [2];
  int local_48 [2];
  int local_40 [2];
  int local_38 [4];
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    piVar14 = (int *)(param_1 + 0x30);
    puVar16 = (undefined8 *)0x0;
    lVar13 = (longlong)param_4;
    do {
      piVar1 = piVar14 + -0xc;
      if (piVar1 != (int *)0x0) {
        *(undefined ***)piVar1 = hkReferencedObject::vftable;
        FUN_143718270(piVar14 + -10,param_2 + -0x28 + (longlong)piVar14);
        piVar14[-8] = 0x1ffff;
        *(undefined ***)piVar1 = hkStorageSkinnedMeshShape::vftable;
        piVar14[-6] = 0;
        piVar14[-5] = 0;
        piVar14[-4] = 0;
        piVar14[-3] = -0x80000000;
        iVar3 = *(int *)(param_2 + -0x10 + (longlong)piVar14);
        lVar11 = (longlong)iVar3;
        local_res20[0] = iVar3;
        uVar9 = FUN_143703a50();
        iVar8 = local_res20[0];
        puVar10 = puVar16;
        if (local_res20[0] != 0) {
          puVar10 = (undefined8 *)FUN_143702d60(uVar9,2,local_res20);
        }
        *(undefined8 **)(piVar14 + -6) = puVar10;
        piVar14[-4] = iVar8;
        iVar8 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar8 = local_res20[0];
        }
        piVar14[-3] = iVar8;
        if (0 < iVar3) {
          lVar15 = *(longlong *)(param_2 + -0x18 + (longlong)piVar14) - (longlong)puVar10;
          do {
            *(undefined2 *)puVar10 = *(undefined2 *)(lVar15 + (longlong)puVar10);
            puVar10 = (undefined8 *)((longlong)puVar10 + 2);
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        piVar14[-2] = 0;
        piVar14[-1] = 0;
        *piVar14 = 0;
        piVar14[1] = -0x80000000;
        iVar3 = *(int *)(param_2 + (longlong)piVar14);
        lVar11 = (longlong)iVar3;
        local_48[0] = iVar3;
        uVar9 = FUN_143703a50();
        iVar8 = local_48[0];
        puVar10 = puVar16;
        if (local_48[0] != 0) {
          puVar10 = (undefined8 *)FUN_143702d60(uVar9,4,local_48);
        }
        *(undefined8 **)(piVar14 + -2) = puVar10;
        *piVar14 = iVar8;
        iVar8 = -0x80000000;
        if (local_48[0] != 0) {
          iVar8 = local_48[0];
        }
        piVar14[1] = iVar8;
        if (0 < iVar3) {
          lVar15 = *(longlong *)(param_2 + -8 + (longlong)piVar14) - (longlong)puVar10;
          do {
            if (puVar10 != (undefined8 *)0x0) {
              *(undefined4 *)puVar10 = *(undefined4 *)(lVar15 + (longlong)puVar10);
            }
            puVar10 = (undefined8 *)((longlong)puVar10 + 4);
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        piVar14[2] = 0;
        piVar14[3] = 0;
        piVar14[4] = 0;
        piVar14[5] = -0x80000000;
        iVar3 = *(int *)(param_2 + 0x10 + (longlong)piVar14);
        lVar11 = (longlong)iVar3;
        local_40[0] = iVar3;
        uVar9 = FUN_143703a50();
        iVar8 = local_40[0];
        puVar10 = puVar16;
        if (local_40[0] != 0) {
          puVar10 = (undefined8 *)FUN_143702d60(uVar9,0x10,local_40);
        }
        piVar14[4] = iVar8;
        *(undefined8 **)(piVar14 + 2) = puVar10;
        iVar8 = -0x80000000;
        if (local_40[0] != 0) {
          iVar8 = local_40[0];
        }
        piVar14[5] = iVar8;
        if (0 < iVar3) {
          puVar12 = puVar10 + 1;
          lVar15 = *(longlong *)(param_2 + 8 + (longlong)piVar14) - (longlong)puVar10;
          do {
            if (puVar12 + -1 != (longlong *)0x0) {
              lVar4 = *(longlong *)(lVar15 + -8 + (longlong)puVar12);
              puVar12[-1] = lVar4;
              if (lVar4 != 0) {
                FUN_14370c030();
              }
              *(undefined2 *)puVar12 = *(undefined2 *)(lVar15 + (longlong)puVar12);
              *(undefined2 *)((longlong)puVar12 + 2) =
                   *(undefined2 *)(lVar15 + 2 + (longlong)puVar12);
            }
            puVar12 = puVar12 + 2;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        piVar14[6] = 0;
        piVar14[7] = 0;
        piVar14[8] = 0;
        piVar14[9] = -0x80000000;
        iVar3 = *(int *)(param_2 + 0x20 + (longlong)piVar14);
        lVar11 = (longlong)iVar3;
        local_38[0] = iVar3;
        uVar9 = FUN_143703a50();
        iVar8 = local_38[0];
        puVar10 = puVar16;
        if (local_38[0] != 0) {
          puVar10 = (undefined8 *)FUN_143702d60(uVar9,0x30,local_38);
        }
        *(undefined8 **)(piVar14 + 6) = puVar10;
        piVar14[8] = iVar8;
        iVar8 = -0x80000000;
        if (local_38[0] != 0) {
          iVar8 = local_38[0];
        }
        piVar14[9] = iVar8;
        if (0 < iVar3) {
          lVar15 = *(longlong *)(param_2 + 0x18 + (longlong)piVar14) - (longlong)puVar10;
          do {
            if (puVar10 != (undefined8 *)0x0) {
              uVar9 = ((undefined8 *)(lVar15 + (longlong)puVar10))[1];
              *puVar10 = *(undefined8 *)(lVar15 + (longlong)puVar10);
              puVar10[1] = uVar9;
              puVar12 = (undefined8 *)(lVar15 + 0x10 + (longlong)puVar10);
              uVar9 = puVar12[1];
              puVar10[2] = *puVar12;
              puVar10[3] = uVar9;
              puVar2 = (undefined4 *)(lVar15 + 0x20 + (longlong)puVar10);
              uVar5 = puVar2[1];
              uVar6 = puVar2[2];
              uVar7 = puVar2[3];
              *(undefined4 *)(puVar10 + 4) = *puVar2;
              *(undefined4 *)((longlong)puVar10 + 0x24) = uVar5;
              *(undefined4 *)(puVar10 + 5) = uVar6;
              *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar7;
            }
            puVar10 = puVar10 + 6;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        FUN_1437165f0(piVar14 + 10,param_2 + 0x28 + (longlong)piVar14);
      }
      piVar14 = piVar14 + 0x18;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 143794440 FUN_143794440 body=101 status=ok
// SIG undefined FUN_143794440(void)

void FUN_143794440(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    puVar2 = (undefined8 *)(param_1 + 8);
    do {
      if (puVar2 + -1 != (longlong *)0x0) {
        lVar1 = *(longlong *)(param_2 + -8 + (longlong)puVar2);
        puVar2[-1] = lVar1;
        if (lVar1 != 0) {
          FUN_14370c030();
        }
        *puVar2 = *(undefined8 *)(param_2 + (longlong)puVar2);
        *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 8 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1437944b0 func body=88 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiSmoothPath::CompleteEdgePath>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x60 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xc;
      plVar2 = plVar2 + -0xc;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143794510 FUN_143794510 body=66 status=ok
// SIG undefined FUN_143794510(void)

void FUN_143794510(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(param_1 + lVar1 * 0x18);
    do {
      if (*plVar2 != 0) {
        FUN_14370c150();
      }
      plVar2 = plVar2 + -3;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 143794560 FUN_143794560 body=112 status=ok
// SIG undefined FUN_143794560(void)

void FUN_143794560(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      if (*(longlong *)(param_2 + -8 + (longlong)puVar1) != 0) {
        FUN_14370c030();
      }
      if (puVar1[-1] != 0) {
        FUN_14370c150();
      }
      puVar1[-1] = *(undefined8 *)(param_2 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_2 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 8 + (longlong)puVar1);
      puVar1 = puVar1 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1437945d0 FUN_1437945d0 body=90 status=ok
// SIG undefined FUN_1437945d0(void)

undefined1 FUN_1437945d0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x38);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x48);
        if (cVar1 != '\0') {
          cVar1 = FUN_14370b790(param_1 + 0x58);
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143794640 FUN_143794640 body=73 status=ok
// SIG undefined FUN_143794640(void)

undefined1 FUN_143794640(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x120);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x138);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x148);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143794750 FUN_143794750 body=18 status=ok
// SIG undefined FUN_143794750(void)

undefined8 * FUN_143794750(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467f9ea0;
  return param_2;
}



// FUNCTION 143794770 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavVolumeDebugUtils::GeometryBuildSettings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143799770(param_1);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437947d0 FUN_1437947d0 body=1589 status=ok
// SIG undefined FUN_1437947d0(void)

void FUN_1437947d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  uint *puVar19;
  
  lVar6 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar19 = (uint *)(param_1 + 0x4c);
    do {
      puVar1 = puVar19 + -0x13;
      if (puVar1 != (uint *)0x0) {
        *(undefined ***)puVar1 = hkReferencedObject::vftable;
        FUN_143718270(puVar19 + -0x11,param_2 + -0x44 + (longlong)puVar19);
        puVar19[-0xf] = 0x1ffff;
        *(undefined ***)puVar1 = hkaSkeleton::vftable;
        puVar1 = puVar19 + -0xd;
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar19[-0xb] = 0;
        puVar19[-10] = 0;
        puVar19[-9] = 0;
        puVar19[-8] = 0x80000000;
        puVar19[-7] = 0;
        puVar19[-6] = 0;
        puVar19[-5] = 0;
        puVar19[-4] = 0x80000000;
        puVar19[-3] = 0;
        puVar19[-2] = 0;
        puVar19[-1] = 0;
        *puVar19 = 0x80000000;
        puVar19[1] = 0;
        puVar19[2] = 0;
        puVar19[3] = 0;
        puVar19[4] = 0x80000000;
        puVar19[5] = 0;
        puVar19[6] = 0;
        puVar19[7] = 0;
        puVar19[8] = 0x80000000;
        puVar19[9] = 0;
        puVar19[10] = 0;
        puVar19[0xb] = 0;
        puVar19[0xc] = 0x80000000;
        puVar19[0xd] = 0;
        puVar19[0xe] = 0;
        puVar19[0xf] = 0;
        puVar19[0x10] = 0x80000000;
        FUN_143716660(puVar1,param_2 + -0x34 + (longlong)puVar19);
        uVar4 = *(uint *)(param_2 + -0x24 + (longlong)puVar19);
        uVar8 = *(undefined8 *)(param_2 + -0x2c + (longlong)puVar19);
        uVar7 = FUN_143703a50();
        if ((int)(puVar19[-8] & 0x3fffffff) < (int)uVar4) {
          FUN_14370c310(uVar7,puVar19 + -0xb,uVar4,2);
        }
        FUN_143795730(*(undefined8 *)(puVar19 + -0xb),uVar8,uVar4);
        puVar19[-9] = uVar4;
        uVar4 = *(uint *)(param_2 + -0x14 + (longlong)puVar19);
        lVar16 = *(longlong *)(param_2 + -0x1c + (longlong)puVar19);
        uVar8 = FUN_143703a50();
        if ((int)(puVar19[-4] & 0x3fffffff) < (int)uVar4) {
          FUN_14370c310(uVar8,puVar19 + -7,uVar4,0x10);
        }
        iVar9 = (puVar19[-5] - uVar4) + -1;
        if (-1 < iVar9) {
          lVar18 = (longlong)iVar9 * 0x10 +
                   (longlong)(int)uVar4 * 0x10 + *(longlong *)(puVar19 + -7);
          do {
            FUN_143716650(lVar18);
            lVar18 = lVar18 + -0x10;
            iVar9 = iVar9 + -1;
          } while (-1 < iVar9);
        }
        uVar17 = uVar4;
        if ((int)puVar19[-5] < (int)uVar4) {
          uVar17 = puVar19[-5];
        }
        FUN_143795980(*(undefined8 *)(puVar19 + -7),lVar16,uVar17);
        lVar18 = (longlong)(int)uVar17 * 0x10;
        puVar10 = (undefined8 *)(*(longlong *)(puVar19 + -7) + lVar18);
        lVar15 = (longlong)(int)(uVar4 - uVar17);
        if (0 < (int)(uVar4 - uVar17)) {
          puVar11 = puVar10;
          do {
            if (puVar11 != (undefined8 *)0x0) {
              puVar2 = (undefined8 *)((lVar16 - (longlong)puVar10) + lVar18 + (longlong)puVar11);
              *puVar11 = 0;
              if (puVar11 != puVar2) {
                FUN_143716660(puVar11,puVar2);
                *(undefined1 *)
                 ((longlong)puVar2 +
                 (longlong)puVar10 + ((longlong)(int)uVar17 * -0x10 - lVar16) + 8) =
                     *(undefined1 *)(puVar2 + 1);
              }
            }
            puVar11 = puVar11 + 2;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        puVar19[-5] = uVar4;
        uVar4 = *(uint *)(param_2 + -4 + (longlong)puVar19);
        uVar8 = *(undefined8 *)(param_2 + -0xc + (longlong)puVar19);
        uVar7 = FUN_143703a50();
        if ((int)(*puVar19 & 0x3fffffff) < (int)uVar4) {
          FUN_14370c310(uVar7,puVar19 + -3,uVar4,0x30);
        }
        FUN_1437958f0(*(undefined8 *)(puVar19 + -3),uVar8,uVar4);
        puVar19[-1] = uVar4;
        uVar4 = *(uint *)(param_2 + 0xc + (longlong)puVar19);
        uVar8 = *(undefined8 *)(param_2 + 4 + (longlong)puVar19);
        uVar7 = FUN_143703a50();
        if ((int)(puVar19[4] & 0x3fffffff) < (int)uVar4) {
          FUN_14370c310(uVar7,puVar19 + 1,uVar4,4);
        }
        FUN_143795760(*(undefined8 *)(puVar19 + 1),uVar8,uVar4);
        puVar1 = puVar19 + 5;
        puVar19[3] = uVar4;
        uVar4 = *(uint *)(param_2 + 0x1c + (longlong)puVar19);
        lVar16 = *(longlong *)(param_2 + 0x14 + (longlong)puVar19);
        uVar8 = FUN_143703a50();
        if ((int)(puVar19[8] & 0x3fffffff) < (int)uVar4) {
          FUN_14370c310(uVar8,puVar1,uVar4,8);
        }
        iVar9 = (puVar19[7] - uVar4) + -1;
        if (-1 < iVar9) {
          lVar18 = *(longlong *)puVar1 + (longlong)(int)uVar4 * 8 + (longlong)iVar9 * 8;
          do {
            FUN_143716650(lVar18);
            lVar18 = lVar18 + -8;
            iVar9 = iVar9 + -1;
          } while (-1 < iVar9);
        }
        uVar17 = uVar4;
        if ((int)puVar19[7] < (int)uVar4) {
          uVar17 = puVar19[7];
        }
        FUN_143795930(*(undefined8 *)puVar1,lVar16,uVar17);
        lVar18 = *(longlong *)puVar1 + (longlong)(int)uVar17 * 8;
        if (0 < (int)(uVar4 - uVar17)) {
          lVar16 = lVar16 - lVar18;
          uVar12 = (ulonglong)(uVar4 - uVar17);
          do {
            if (lVar18 != 0) {
              FUN_1437165f0(lVar18,lVar16 + (longlong)(int)uVar17 * 8 + lVar18);
            }
            lVar18 = lVar18 + 8;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar19[7] = uVar4;
        uVar4 = *(uint *)(param_2 + 0x2c + (longlong)puVar19);
        lVar16 = *(longlong *)(param_2 + 0x24 + (longlong)puVar19);
        uVar8 = FUN_143703a50();
        if ((int)(puVar19[0xc] & 0x3fffffff) < (int)uVar4) {
          FUN_14370c310(uVar8,puVar19 + 9,uVar4,0x10);
        }
        iVar9 = (puVar19[0xb] - uVar4) + -1;
        lVar18 = (longlong)iVar9;
        if (-1 < iVar9) {
          plVar13 = (longlong *)
                    (lVar18 * 0x10 + (longlong)(int)uVar4 * 0x10 + *(longlong *)(puVar19 + 9));
          do {
            if (*plVar13 != 0) {
              FUN_14370c150();
            }
            plVar13 = plVar13 + -2;
            lVar18 = lVar18 + -1;
          } while (-1 < lVar18);
        }
        uVar17 = uVar4;
        if ((int)puVar19[0xb] < (int)uVar4) {
          uVar17 = puVar19[0xb];
        }
        FUN_143795800(*(undefined8 *)(puVar19 + 9),lVar16,uVar17);
        lVar18 = *(longlong *)(puVar19 + 9);
        lVar15 = (longlong)(int)(uVar4 - uVar17);
        if (0 < (int)(uVar4 - uVar17)) {
          plVar13 = (longlong *)(lVar16 + (longlong)(int)uVar17 * 0x10);
          do {
            plVar3 = (longlong *)((lVar18 - lVar16) + (longlong)plVar13);
            if (plVar3 != (longlong *)0x0) {
              lVar5 = *plVar13;
              *plVar3 = lVar5;
              if (lVar5 != 0) {
                FUN_14370c030();
              }
              *(short *)((lVar18 - lVar16) + 8 + (longlong)plVar13) = (short)plVar13[1];
            }
            plVar13 = plVar13 + 2;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        puVar19[0xb] = uVar4;
        uVar4 = *(uint *)(param_2 + 0x3c + (longlong)puVar19);
        lVar16 = *(longlong *)(param_2 + 0x34 + (longlong)puVar19);
        uVar8 = FUN_143703a50();
        if ((int)(puVar19[0x10] & 0x3fffffff) < (int)uVar4) {
          FUN_14370c310(uVar8,puVar19 + 0xd,uVar4,0x10);
        }
        iVar9 = (puVar19[0xf] - uVar4) + -1;
        if (-1 < iVar9) {
          lVar18 = (longlong)iVar9 * 0x10 +
                   (longlong)(int)uVar4 * 0x10 + *(longlong *)(puVar19 + 0xd);
          do {
            FUN_143716650(lVar18);
            lVar18 = lVar18 + -0x10;
            iVar9 = iVar9 + -1;
          } while (-1 < iVar9);
        }
        uVar17 = uVar4;
        if ((int)puVar19[0xf] < (int)uVar4) {
          uVar17 = puVar19[0xf];
        }
        FUN_143795880(*(undefined8 *)(puVar19 + 0xd),lVar16,uVar17);
        lVar18 = (longlong)(int)(uVar4 - uVar17);
        if (0 < (int)(uVar4 - uVar17)) {
          lVar15 = *(longlong *)(puVar19 + 0xd) - lVar16;
          puVar14 = (undefined2 *)((longlong)(int)uVar17 * 0x10 + 10 + lVar16);
          do {
            lVar16 = lVar15 + -10 + (longlong)puVar14;
            if (lVar16 != 0) {
              FUN_1437165f0(lVar16,puVar14 + -5);
              *(undefined2 *)(lVar15 + -2 + (longlong)puVar14) = puVar14[-1];
              *(undefined2 *)(lVar15 + (longlong)puVar14) = *puVar14;
            }
            puVar14 = puVar14 + 8;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
        puVar19[0xf] = uVar4;
      }
      puVar19 = puVar19 + 0x24;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143794e10 FUN_143794e10 body=139 status=ok
// SIG undefined FUN_143794e10(void)

longlong FUN_143794e10(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143798a80();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x48;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
    }
  }
  return param_1;
}



// FUNCTION 143794ea0 FUN_143794ea0 body=102 status=ok
// SIG undefined FUN_143794ea0(void)

void FUN_143794ea0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    puVar2 = (undefined2 *)(param_1 + 8);
    do {
      if ((longlong *)(puVar2 + -4) != (longlong *)0x0) {
        lVar1 = *(longlong *)(param_2 + -8 + (longlong)puVar2);
        *(longlong *)(puVar2 + -4) = lVar1;
        if (lVar1 != 0) {
          FUN_14370c030();
        }
        *puVar2 = *(undefined2 *)(param_2 + (longlong)puVar2);
        puVar2[1] = *(undefined2 *)(param_2 + 2 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143794f10 FUN_143794f10 body=398 status=ok
// SIG undefined FUN_143794f10(void)

void FUN_143794f10(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int local_res20 [2];
  
  if (0 < param_4) {
    piVar7 = (int *)(param_1 + 0x78);
    param_2 = param_2 - param_1;
    lVar8 = (longlong)param_4;
    do {
      piVar1 = piVar7 + -0x1e;
      if (piVar1 != (int *)0x0) {
        *(undefined ***)piVar1 = hkReferencedObject::vftable;
        FUN_143718270(piVar7 + -0x1c,param_2 + -0x70 + (longlong)piVar7);
        piVar7[-0x1a] = 0x1ffff;
        *(undefined ***)piVar1 = hkMemoryMeshBody::vftable;
        puVar5 = (undefined8 *)(param_2 + -0x58 + (longlong)piVar7);
        uVar4 = puVar5[1];
        *(undefined8 *)(piVar7 + -0x16) = *puVar5;
        *(undefined8 *)(piVar7 + -0x14) = uVar4;
        puVar5 = (undefined8 *)(param_2 + -0x48 + (longlong)piVar7);
        uVar4 = puVar5[1];
        *(undefined8 *)(piVar7 + -0x12) = *puVar5;
        *(undefined8 *)(piVar7 + -0x10) = uVar4;
        piVar1 = (int *)(param_2 + -0x38 + (longlong)piVar7);
        iVar2 = piVar1[1];
        iVar6 = piVar1[2];
        iVar3 = piVar1[3];
        piVar7[-0xe] = *piVar1;
        piVar7[-0xd] = iVar2;
        piVar7[-0xc] = iVar6;
        piVar7[-0xb] = iVar3;
        piVar1 = (int *)(param_2 + -0x28 + (longlong)piVar7);
        iVar2 = piVar1[1];
        iVar6 = piVar1[2];
        iVar3 = piVar1[3];
        piVar7[-10] = *piVar1;
        piVar7[-9] = iVar2;
        piVar7[-8] = iVar6;
        piVar7[-7] = iVar3;
        lVar9 = *(longlong *)(param_2 + -0x18 + (longlong)piVar7);
        *(longlong *)(piVar7 + -6) = lVar9;
        if (lVar9 != 0) {
          FUN_14370c030();
        }
        lVar9 = *(longlong *)(param_2 + -0x10 + (longlong)piVar7);
        *(longlong *)(piVar7 + -4) = lVar9;
        if (lVar9 != 0) {
          FUN_14370c030();
        }
        piVar7[-2] = 0;
        piVar7[-1] = 0;
        *piVar7 = 0;
        piVar7[1] = -0x80000000;
        iVar2 = *(int *)(param_2 + (longlong)piVar7);
        lVar9 = (longlong)iVar2;
        local_res20[0] = iVar2;
        uVar4 = FUN_143703a50();
        iVar6 = local_res20[0];
        puVar5 = (undefined8 *)0x0;
        if (local_res20[0] != 0) {
          puVar5 = (undefined8 *)FUN_143702d60(uVar4,8,local_res20);
        }
        *(undefined8 **)(piVar7 + -2) = puVar5;
        *piVar7 = iVar6;
        iVar6 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar6 = local_res20[0];
        }
        piVar7[1] = iVar6;
        if (0 < iVar2) {
          lVar10 = *(longlong *)(param_2 + -8 + (longlong)piVar7) - (longlong)puVar5;
          do {
            *puVar5 = *(undefined8 *)(lVar10 + (longlong)puVar5);
            puVar5 = puVar5 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        FUN_1437165f0(piVar7 + 2,param_2 + 8 + (longlong)piVar7);
      }
      piVar7 = piVar7 + 0x24;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 1437950a0 FUN_1437950a0 body=77 status=ok
// SIG undefined FUN_1437950a0(void)

undefined1 FUN_1437950a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_143796790(param_1 + 0x30);
    if (cVar1 != '\0') {
      cVar1 = FUN_143796780(param_1 + 0x32);
      if (cVar1 != '\0') {
        cVar1 = FUN_1437967c0(param_1 + 0x33);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1437950f0 FUN_1437950f0 body=113 status=ok
// SIG undefined FUN_1437950f0(void)

void FUN_1437950f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined2 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined2 *)(param_1 + 8);
    do {
      if (*(longlong *)(param_2 + -8 + (longlong)puVar1) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar1 + -4) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar1 + -4) = *(undefined8 *)(param_2 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined2 *)(param_2 + (longlong)puVar1);
      puVar1[1] = *(undefined2 *)(param_2 + 2 + (longlong)puVar1);
      puVar1 = puVar1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143795180 FUN_143795180 body=204 status=ok
// SIG undefined FUN_143795180(void)

void FUN_143795180(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    puVar5 = (uint *)(param_1 + 0xc);
    lVar6 = (longlong)param_4;
    do {
      puVar1 = puVar5 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0x80000000;
        uVar2 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar5);
        uVar3 = *(undefined8 *)((param_2 - param_1) + -0xc + (longlong)puVar5);
        uVar4 = FUN_143703a50();
        if ((int)(*puVar5 & 0x3fffffff) < (int)uVar2) {
          FUN_14370c310(uVar4,puVar1,uVar2,2);
        }
        FUN_143795730(*(undefined8 *)puVar1,uVar3,uVar2);
        puVar5[-1] = uVar2;
      }
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143795260 FUN_143795260 body=77 status=ok
// SIG undefined FUN_143795260(void)

void FUN_143795260(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143795ae0(param_1,local_res18);
      }
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437952b0 FUN_1437952b0 body=230 status=ok
// SIG undefined FUN_1437952b0(void)

void FUN_1437952b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (0 < param_4) {
    piVar6 = (int *)(param_1 + 8);
    lVar7 = (longlong)param_4;
    do {
      *piVar6 = 0;
      iVar1 = *(int *)((longlong)piVar6 + (param_2 - param_1));
      lVar10 = (longlong)iVar1;
      lVar9 = *(longlong *)((param_2 - param_1) + -8 + (longlong)piVar6);
      uVar3 = FUN_143703a50();
      uVar5 = piVar6[1] & 0x3fffffff;
      iVar8 = *piVar6 + iVar1;
      if (((int)uVar5 < iVar8) && ((int)uVar5 < iVar8)) {
        iVar2 = iVar8;
        if (iVar8 < (int)(uVar5 * 2)) {
          iVar2 = uVar5 * 2;
        }
        FUN_14370c310(uVar3,piVar6 + -2,iVar2,2);
      }
      puVar4 = (undefined2 *)(*(longlong *)(piVar6 + -2) + (longlong)*piVar6 * 2);
      if (0 < iVar1) {
        lVar9 = lVar9 - (longlong)puVar4;
        do {
          *puVar4 = *(undefined2 *)(lVar9 + (longlong)puVar4);
          puVar4 = puVar4 + 1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      *piVar6 = iVar8;
      piVar6 = piVar6 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 1437953a0 FUN_1437953a0 body=139 status=ok
// SIG undefined FUN_1437953a0(void)

longlong FUN_1437953a0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14379bff0();
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



// FUNCTION 143795430 func body=77 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiConvexSilhouetteSet>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x70 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xe;
      plVar2 = plVar2 + -0xe;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143795480 FUN_143795480 body=18 status=ok
// SIG undefined FUN_143795480(void)

undefined8 * FUN_143795480(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fa1f0;
  return param_2;
}



// FUNCTION 1437954a0 FUN_1437954a0 body=47 status=ok
// SIG undefined FUN_1437954a0(void)

undefined1 FUN_1437954a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1437967b0();
  if (cVar1 != '\0') {
    cVar1 = FUN_1437967a0(param_1 + 0x14);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437954d0 FUN_1437954d0 body=139 status=ok
// SIG undefined FUN_1437954d0(void)

longlong FUN_1437954d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143795fb0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x40;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
    }
  }
  return param_1;
}



// FUNCTION 143795560 FUN_143795560 body=74 status=ok
// SIG undefined FUN_143795560(void)

void FUN_143795560(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143795a70(param_1,local_res18);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437955c0 FUN_1437955c0 body=18 status=ok
// SIG undefined FUN_1437955c0(void)

undefined8 * FUN_1437955c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fa260;
  return param_2;
}



// FUNCTION 1437955f0 FUN_1437955f0 body=60 status=ok
// SIG undefined FUN_1437955f0(void)

undefined1 FUN_1437955f0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143796760();
  if (cVar1 != '\0') {
    cVar1 = FUN_143796770(param_1 + 2);
    if (cVar1 != '\0') {
      cVar1 = BuildSettings::IsPromotedBuild(param_1 + 4);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143795630 FUN_143795630 body=139 status=ok
// SIG undefined FUN_143795630(void)

longlong FUN_143795630(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143796090();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x60;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
    }
  }
  return param_1;
}



// FUNCTION 1437956f0 FUN_1437956f0 body=58 status=ok
// SIG undefined FUN_1437956f0(void)

void FUN_1437956f0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14379bdf0(param_1);
      }
      param_1 = param_1 + 0x104;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143795730 FUN_143795730 body=34 status=ok
// SIG undefined FUN_143795730(void)

void FUN_143795730(undefined2 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3;
  if (0 < param_3) {
    param_2 = param_2 - (longlong)param_1;
    do {
      *param_1 = *(undefined2 *)(param_2 + (longlong)param_1);
      param_1 = param_1 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 143795760 FUN_143795760 body=149 status=ok
// SIG undefined FUN_143795760(void)

void FUN_143795760(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = (longlong)param_3;
  lVar2 = 0;
  if (3 < lVar3) {
    lVar4 = param_2 - param_1;
    lVar5 = (lVar3 - 4U >> 2) + 1;
    puVar1 = (undefined4 *)(param_1 + 4);
    lVar2 = lVar5 * 4;
    do {
      puVar1[-1] = *(undefined4 *)(lVar4 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(lVar4 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(lVar4 + 4 + (longlong)puVar1);
      puVar1[2] = *(undefined4 *)(lVar4 + 8 + (longlong)puVar1);
      puVar1 = puVar1 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (lVar2 < lVar3) {
    puVar1 = (undefined4 *)(param_1 + lVar2 * 4);
    lVar3 = lVar3 - lVar2;
    do {
      *puVar1 = *(undefined4 *)((longlong)puVar1 + (param_2 - param_1));
      puVar1 = puVar1 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143795800 FUN_143795800 body=126 status=ok
// SIG undefined FUN_143795800(void)

void FUN_143795800(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    lVar3 = (longlong)param_3;
    lVar2 = param_1 - (longlong)param_2;
    plVar1 = param_2;
    do {
      if (*plVar1 != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(lVar2 + (longlong)plVar1) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar2 + (longlong)plVar1) = *plVar1;
      *(undefined2 *)((longlong)plVar1 + lVar2 + 8) =
           *(undefined2 *)((longlong)param_2 + (longlong)plVar1 + ((lVar2 + 8) - param_1));
      lVar3 = lVar3 + -1;
      plVar1 = plVar1 + 2;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143795880 FUN_143795880 body=106 status=ok
// SIG undefined FUN_143795880(void)

void FUN_143795880(longlong param_1,longlong param_2,int param_3)

{
  undefined2 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_3;
    puVar1 = (undefined2 *)(param_1 + 8);
    do {
      FUN_143716660(puVar1 + -4,param_2 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined2 *)(param_2 + (longlong)puVar1);
      puVar1[1] = *(undefined2 *)(param_2 + 2 + (longlong)puVar1);
      puVar1 = puVar1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1437958f0 FUN_1437958f0 body=52 status=ok
// SIG undefined FUN_1437958f0(void)

void FUN_1437958f0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_3;
  if (0 < param_3) {
    puVar3 = (undefined8 *)(param_1 + 0x10);
    param_2 = param_2 - param_1;
    do {
      puVar1 = (undefined8 *)(param_2 + -0x10 + (longlong)puVar3);
      uVar2 = puVar1[1];
      puVar3[-2] = *puVar1;
      puVar3[-1] = uVar2;
      uVar2 = ((undefined8 *)(param_2 + (longlong)puVar3))[1];
      *puVar3 = *(undefined8 *)(param_2 + (longlong)puVar3);
      puVar3[1] = uVar2;
      puVar1 = (undefined8 *)(param_2 + 0x10 + (longlong)puVar3);
      uVar2 = puVar1[1];
      puVar3[2] = *puVar1;
      puVar3[3] = uVar2;
      puVar3 = puVar3 + 6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143795930 FUN_143795930 body=70 status=ok
// SIG undefined FUN_143795930(void)

void FUN_143795930(longlong param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_3;
    do {
      FUN_143716660(param_1,param_2 + param_1);
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143795980 FUN_143795980 body=108 status=ok
// SIG undefined FUN_143795980(void)

void FUN_143795980(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    lVar3 = (longlong)param_3;
    lVar2 = param_2 - param_1;
    param_1 = param_1 - param_2;
    do {
      lVar1 = param_1 + param_2;
      if (lVar1 != param_2) {
        FUN_143716660(lVar1,param_2);
        lVar1 = param_1 + param_2;
        *(undefined1 *)(lVar1 + 8) = *(undefined1 *)(lVar1 + 8 + lVar2);
      }
      param_2 = param_2 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1437959f0 FUN_1437959f0 body=45 status=ok
// SIG undefined FUN_1437959f0(void)

undefined8 * FUN_1437959f0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkDefaultCompoundMeshBody::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 143795a20 FUN_143795a20 body=69 status=ok
// SIG undefined FUN_143795a20(void)

undefined8 * FUN_143795a20(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkDefaultCompoundMeshShape::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  return param_1;
}



// FUNCTION 143795a70 FUN_143795a70 body=97 status=ok
// SIG undefined FUN_143795a70(void)

undefined8 * FUN_143795a70(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkIndexedTransformSet::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  return param_1;
}



// FUNCTION 143795ae0 FUN_143795ae0 body=56 status=ok
// SIG undefined FUN_143795ae0(void)

undefined8 * FUN_143795ae0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkMemoryMeshBody::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 143795b20 FUN_143795b20 body=73 status=ok
// SIG undefined FUN_143795b20(void)

undefined8 * FUN_143795b20(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkMemoryMeshShape::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 143795b70 FUN_143795b70 body=135 status=ok
// SIG undefined FUN_143795b70(void)

undefined8 * FUN_143795b70(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkMultipleVertexBuffer::vftable;
  FUN_14379bdf0(param_1 + 3);
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x80000000;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x80000000;
  return param_1;
}



// FUNCTION 143795c00 FUN_143795c00 body=59 status=ok
// SIG undefined FUN_143795c00(void)

undefined8 * FUN_143795c00(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkSkinBinding::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  return param_1;
}



// FUNCTION 143795c40 FUN_143795c40 body=63 status=ok
// SIG undefined FUN_143795c40(void)

undefined8 * FUN_143795c40(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkSkinnedRefMeshShape::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 143795c80 FUN_143795c80 body=470 status=ok
// SIG undefined FUN_143795c80(void)

void FUN_143795c80(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x60) + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x58) + 0xc + lVar5 * 0x10);
    do {
      uVar2 = FUN_143703a50();
      puVar4[-1] = 0;
      if (-1 < (int)*puVar4) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar4 + -3),2,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -4;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (-1 < (int)*(uint *)(param_1 + 100)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x58),0x10,*(uint *)(param_1 + 100) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x50) + -1;
  if (-1 < iVar3) {
    lVar5 = *(longlong *)(param_1 + 0x48) + (longlong)iVar3 * 8;
    do {
      FUN_143716650(lVar5);
      lVar5 = lVar5 + -8;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x54)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x48),8,*(uint *)(param_1 + 0x54) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x38),2,*(uint *)(param_1 + 0x44) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),0x40,*(uint *)(param_1 + 0x34) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x40,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143795e60 FUN_143795e60 body=331 status=ok
// SIG undefined FUN_143795e60(void)

void FUN_143795e60(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x150) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x148) + lVar3 * 0x18);
    do {
      if (*plVar4 != 0) {
        FUN_14370c150();
      }
      plVar4 = plVar4 + -3;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x154)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x148),0x18,
                  *(uint *)(param_1 + 0x154) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x144)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x138),2,*(uint *)(param_1 + 0x144) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0x80000000;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (-1 < (int)*(uint *)(param_1 + 300)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x120),7,*(uint *)(param_1 + 300) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 300) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143795fb0 FUN_143795fb0 body=211 status=ok
// SIG undefined FUN_143795fb0(void)

void FUN_143795fb0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x38) + -1;
  if (-1 < iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 8;
    do {
      FUN_143716650(lVar3);
      lVar3 = lVar3 + -8;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x30),8,*(uint *)(param_1 + 0x3c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),0x40,*(uint *)(param_1 + 0x2c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143796090 FUN_143796090 body=342 status=ok
// SIG undefined FUN_143796090(void)

void FUN_143796090(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_143716650(param_1 + 0x58);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x54)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x48),0x30,*(uint *)(param_1 + 0x54) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x40) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    plVar4 = (longlong *)(lVar3 * 0x10 + *(longlong *)(param_1 + 0x38));
    do {
      if (*plVar4 != 0) {
        FUN_14370c150();
      }
      plVar4 = plVar4 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x38),0x10,*(uint *)(param_1 + 0x44) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),4,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),2,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_143799800(param_1);
  return;
}



// FUNCTION 1437961f0 FUN_1437961f0 body=643 status=ok
// SIG undefined FUN_1437961f0(void)

void FUN_1437961f0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x88) + -1;
  if (-1 < iVar2) {
    lVar3 = (longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x80);
    do {
      FUN_143716650(lVar3);
      lVar3 = lVar3 + -0x10;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x8c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x80),0x10,*(uint *)(param_1 + 0x8c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x78) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    plVar4 = (longlong *)(lVar3 * 0x10 + *(longlong *)(param_1 + 0x70));
    do {
      if (*plVar4 != 0) {
        FUN_14370c150();
      }
      plVar4 = plVar4 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x7c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x70),0x10,*(uint *)(param_1 + 0x7c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x68) + -1;
  if (-1 < iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 8;
    do {
      FUN_143716650(lVar3);
      lVar3 = lVar3 + -8;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x6c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x60),8,*(uint *)(param_1 + 0x6c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x5c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x50),4,*(uint *)(param_1 + 0x5c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x40),0x30,*(uint *)(param_1 + 0x4c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x38) + -1;
  if (-1 < iVar2) {
    lVar3 = (longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x30);
    do {
      FUN_143716650(lVar3);
      lVar3 = lVar3 + -0x10;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x30),0x10,*(uint *)(param_1 + 0x3c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),2,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  FUN_143716650(param_1 + 0x18);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143796480 FUN_143796480 body=170 status=ok
// SIG undefined FUN_143796480(void)

void FUN_143796480(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(undefined4 *)(param_1 + 1) = 0;
  iVar1 = (int)param_2[1];
  lVar8 = (longlong)iVar1;
  lVar7 = *param_2;
  uVar3 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar6 = (int)param_1[1] + iVar1;
  if (((int)uVar5 < iVar6) && ((int)uVar5 < iVar6)) {
    iVar2 = iVar6;
    if (iVar6 < (int)(uVar5 * 2)) {
      iVar2 = uVar5 * 2;
    }
    FUN_14370c310(uVar3,param_1,iVar2,2);
  }
  puVar4 = (undefined2 *)(*param_1 + (longlong)(int)param_1[1] * 2);
  if (0 < iVar1) {
    lVar7 = lVar7 - (longlong)puVar4;
    do {
      *puVar4 = *(undefined2 *)(lVar7 + (longlong)puVar4);
      puVar4 = puVar4 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *(int *)(param_1 + 1) = iVar6;
  return;
}



// FUNCTION 143796530 FUN_143796530 body=139 status=ok
// SIG undefined FUN_143796530(void)

longlong FUN_143796530(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143795c80();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x70;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
    }
  }
  return param_1;
}



// FUNCTION 1437965c0 FUN_1437965c0 body=139 status=ok
// SIG undefined FUN_1437965c0(void)

longlong FUN_1437965c0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143795e60();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x168;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x168);
    }
  }
  return param_1;
}



// FUNCTION 143796650 FUN_143796650 body=18 status=ok
// SIG undefined FUN_143796650(void)

undefined8 * FUN_143796650(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467f9740;
  return param_2;
}



// FUNCTION 143796670 FUN_143796670 body=18 status=ok
// SIG undefined FUN_143796670(void)

undefined8 * FUN_143796670(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467f9bb0;
  return param_2;
}



// FUNCTION 143796690 FUN_143796690 body=18 status=ok
// SIG undefined FUN_143796690(void)

undefined8 * FUN_143796690(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467f9e30;
  return param_2;
}



// FUNCTION 1437966b0 FUN_1437966b0 body=7 status=ok
// SIG undefined FUN_1437966b0(void)

undefined4 FUN_1437966b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x158);
}



// FUNCTION 1437966c0 FUN_1437966c0 body=15 status=ok
// SIG undefined FUN_1437966c0(void)

void FUN_1437966c0(longlong param_1,undefined8 param_2)

{
  thunk_FUN_14379bfb0(param_2,param_1 + 0x18);
  return;
}



// FUNCTION 1437966d0 FUN_1437966d0 body=11 status=ok
// SIG undefined FUN_1437966d0(void)

bool FUN_1437966d0(longlong param_1)

{
  return *(char *)(param_1 + 0x165) != '\0';
}



// FUNCTION 1437966e0 FUN_1437966e0 body=119 status=ok
// SIG undefined FUN_1437966e0(void)

undefined1 FUN_1437966e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x30);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x40);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x50);
        if (cVar1 != '\0') {
          cVar1 = FUN_14370b790(param_1 + 0x60);
          if (cVar1 != '\0') {
            cVar1 = FUN_14370b790(param_1 + 0x70);
            if (cVar1 != '\0') {
              cVar1 = FUN_14370b790(param_1 + 0x80);
              if (cVar1 != '\0') {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143796760 FUN_143796760 body=15 status=ok
// SIG undefined FUN_143796760(void)

void FUN_143796760(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145ba5ac0,*param_1);
  return;
}



// FUNCTION 143796770 FUN_143796770 body=15 status=ok
// SIG undefined FUN_143796770(void)

void FUN_143796770(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145ba5ca8,*param_1);
  return;
}



// FUNCTION 143796780 FUN_143796780 body=15 status=ok
// SIG undefined FUN_143796780(void)

void FUN_143796780(char *param_1)

{
  thunk_FUN_143744fb0(&DAT_145ba3e98,(int)*param_1);
  return;
}



// FUNCTION 143796790 FUN_143796790 body=15 status=ok
// SIG undefined FUN_143796790(void)

void FUN_143796790(char *param_1)

{
  thunk_FUN_143744fb0(&DAT_145ba3e20,(int)*param_1);
  return;
}



// FUNCTION 1437967a0 FUN_1437967a0 body=15 status=ok
// SIG undefined FUN_1437967a0(void)

void FUN_1437967a0(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145ba4fb0,*param_1);
  return;
}



// FUNCTION 1437967b0 FUN_1437967b0 body=15 status=ok
// SIG undefined FUN_1437967b0(void)

void FUN_1437967b0(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145ba5130,*param_1);
  return;
}



// FUNCTION 1437967c0 FUN_1437967c0 body=15 status=ok
// SIG undefined FUN_1437967c0(void)

void FUN_1437967c0(char *param_1)

{
  thunk_FUN_143744fb0(&DAT_145ba3ef0,(int)*param_1);
  return;
}



// FUNCTION 1437967d0 FUN_1437967d0 body=145 status=ok
// SIG undefined FUN_1437967d0(void)

void FUN_1437967d0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x1a4)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x198),0x40,
                  *(uint *)(param_1 + 0x1a4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x54)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x48),0x40,*(uint *)(param_1 + 0x54) & 0x3fffffff)
    ;
  }
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 143796870 FUN_143796870 body=883 status=ok
// SIG undefined FUN_143796870(void)

void FUN_143796870(longlong param_1,int param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uVar15;
  int *piVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  longlong lVar22;
  undefined4 *puVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  float fVar28;
  float fVar29;
  undefined1 in_XMM2 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint local_78;
  ulonglong local_68;
  
  if (param_4 != 0) {
    fVar29 = in_XMM2._0_4_;
    plVar1 = (longlong *)(param_1 + 0x28);
    lVar13 = (longlong)param_2 * 0x10;
    local_68 = (ulonglong)param_4;
    auVar30 = in_XMM2;
    do {
      local_78 = param_4 - 1;
      iVar4 = *(int *)(param_1 + 0x20);
      iVar5 = *(int *)(param_1 + 0x30);
      uVar14 = FUN_143703a50();
      iVar20 = *(int *)(param_1 + 0x20) + 3;
      uVar15 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
      if ((int)uVar15 < iVar20) {
        iVar18 = uVar15 * 2;
        if (iVar20 < iVar18) {
          iVar20 = iVar18;
        }
        FUN_14370c310(uVar14,(longlong *)(param_1 + 0x18),iVar20,0x10);
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 3;
      uVar14 = FUN_143703a50();
      iVar20 = *(int *)(param_1 + 0x30) + 3;
      uVar15 = *(uint *)(param_1 + 0x34) & 0x3fffffff;
      if ((int)uVar15 < iVar20) {
        iVar18 = uVar15 * 2;
        if (iVar20 < iVar18) {
          iVar20 = iVar18;
        }
        FUN_14370c310(uVar14,plVar1,iVar20,0x10);
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 3;
      lVar7 = *(longlong *)(param_1 + 0x18);
      lVar8 = *plVar1;
      iVar19 = iVar4 + 2;
      lVar17 = (longlong)*(int *)(lVar13 + 4 + lVar8);
      iVar20 = *(int *)(lVar13 + lVar8);
      lVar22 = (longlong)*(int *)(lVar13 + 8 + lVar8);
      pfVar2 = (float *)(lVar7 + lVar17 * 0x10);
      fVar11 = pfVar2[3];
      iVar18 = iVar4 + 1;
      pfVar3 = (float *)(lVar7 + (longlong)iVar20 * 0x10);
      fVar12 = pfVar3[3];
      fVar36 = *pfVar2 + *pfVar3;
      fVar37 = pfVar2[1] + pfVar3[1];
      fVar38 = pfVar2[2] + pfVar3[2];
      pfVar2 = (float *)(lVar7 + (longlong)iVar4 * 0x10);
      *pfVar2 = fVar36;
      pfVar2[1] = fVar37;
      pfVar2[2] = fVar38;
      pfVar2[3] = fVar11 + fVar12;
      fVar24 = fVar36 * fVar36;
      fVar26 = fVar37 * fVar37;
      fVar27 = fVar38 * fVar38;
      fVar32 = fVar26 + fVar24 + fVar27;
      fVar34 = fVar26 + fVar24 + fVar27;
      fVar35 = fVar26 + fVar24 + fVar27;
      fVar27 = fVar26 + fVar24 + fVar27;
      auVar9._4_4_ = fVar34;
      auVar9._0_4_ = fVar32;
      auVar9._8_4_ = fVar35;
      auVar9._12_4_ = fVar27;
      auVar30 = rsqrtps(auVar30,auVar9);
      fVar24 = auVar30._0_4_;
      fVar26 = auVar30._4_4_;
      fVar28 = auVar30._8_4_;
      fVar33 = auVar30._12_4_;
      pfVar2 = (float *)(lVar7 + (longlong)iVar4 * 0x10);
      *pfVar2 = (float)(~-(uint)(fVar32 <= 0.0) &
                       (uint)((3.0 - fVar24 * fVar32 * fVar24) * fVar24 * 0.5)) * fVar36 * fVar29;
      pfVar2[1] = (float)(~-(uint)(fVar34 <= 0.0) &
                         (uint)((3.0 - fVar26 * fVar34 * fVar26) * fVar26 * 0.5)) * fVar37 * fVar29;
      pfVar2[2] = (float)(~-(uint)(fVar35 <= 0.0) &
                         (uint)((3.0 - fVar28 * fVar35 * fVar28) * fVar28 * 0.5)) * fVar38 * fVar29;
      pfVar2[3] = (float)(~-(uint)(fVar27 <= 0.0) &
                         (uint)((3.0 - fVar33 * fVar27 * fVar33) * fVar33 * 0.5)) *
                  (fVar11 + fVar12) * fVar29;
      pfVar2 = (float *)(lVar7 + lVar22 * 0x10);
      fVar11 = pfVar2[3];
      pfVar3 = (float *)(lVar7 + lVar17 * 0x10);
      fVar12 = pfVar3[3];
      fVar36 = *pfVar2 + *pfVar3;
      fVar37 = pfVar2[1] + pfVar3[1];
      fVar38 = pfVar2[2] + pfVar3[2];
      pfVar2 = (float *)(lVar7 + (longlong)iVar18 * 0x10);
      *pfVar2 = fVar36;
      pfVar2[1] = fVar37;
      pfVar2[2] = fVar38;
      pfVar2[3] = fVar11 + fVar12;
      fVar24 = fVar36 * fVar36;
      fVar26 = fVar37 * fVar37;
      auVar25._8_4_ = fVar38 * fVar38;
      auVar25._4_4_ = auVar25._8_4_;
      auVar25._0_4_ = auVar25._8_4_;
      auVar25._12_4_ = auVar25._8_4_;
      fVar33 = fVar26 + fVar24 + auVar25._8_4_;
      fVar32 = fVar26 + fVar24 + auVar25._8_4_;
      fVar34 = fVar26 + fVar24 + auVar25._8_4_;
      fVar35 = fVar26 + fVar24 + auVar25._8_4_;
      auVar30._4_4_ = fVar32;
      auVar30._0_4_ = fVar33;
      auVar30._8_4_ = fVar34;
      auVar30._12_4_ = fVar35;
      auVar30 = rsqrtps(auVar25,auVar30);
      fVar24 = auVar30._0_4_;
      fVar26 = auVar30._4_4_;
      fVar27 = auVar30._8_4_;
      fVar28 = auVar30._12_4_;
      auVar31._0_4_ =
           (float)(~-(uint)(fVar33 <= 0.0) & (uint)((3.0 - fVar33 * fVar24 * fVar24) * fVar24 * 0.5)
                  ) * fVar36 * fVar29;
      auVar31._4_4_ =
           (float)(~-(uint)(fVar32 <= 0.0) & (uint)((3.0 - fVar32 * fVar26 * fVar26) * fVar26 * 0.5)
                  ) * fVar37 * fVar29;
      auVar31._8_4_ =
           (float)(~-(uint)(fVar34 <= 0.0) & (uint)((3.0 - fVar34 * fVar27 * fVar27) * fVar27 * 0.5)
                  ) * fVar38 * fVar29;
      auVar31._12_4_ =
           (float)(~-(uint)(fVar35 <= 0.0) & (uint)((3.0 - fVar35 * fVar28 * fVar28) * fVar28 * 0.5)
                  ) * (fVar11 + fVar12) * fVar29;
      *(undefined1 (*) [16])(lVar7 + (longlong)iVar18 * 0x10) = auVar31;
      pfVar2 = (float *)(lVar7 + lVar22 * 0x10);
      fVar11 = pfVar2[3];
      pfVar3 = (float *)(lVar7 + (longlong)iVar20 * 0x10);
      fVar12 = pfVar3[3];
      fVar36 = *pfVar2 + *pfVar3;
      fVar37 = pfVar2[1] + pfVar3[1];
      fVar38 = pfVar2[2] + pfVar3[2];
      pfVar2 = (float *)(lVar7 + (longlong)iVar19 * 0x10);
      *pfVar2 = fVar36;
      pfVar2[1] = fVar37;
      pfVar2[2] = fVar38;
      pfVar2[3] = fVar11 + fVar12;
      fVar24 = fVar36 * fVar36;
      fVar26 = fVar37 * fVar37;
      fVar27 = fVar38 * fVar38;
      fVar32 = fVar26 + fVar24 + fVar27;
      fVar34 = fVar26 + fVar24 + fVar27;
      fVar35 = fVar26 + fVar24 + fVar27;
      fVar27 = fVar26 + fVar24 + fVar27;
      auVar10._4_4_ = fVar34;
      auVar10._0_4_ = fVar32;
      auVar10._8_4_ = fVar35;
      auVar10._12_4_ = fVar27;
      auVar30 = rsqrtps(auVar31,auVar10);
      fVar24 = auVar30._0_4_;
      fVar26 = auVar30._4_4_;
      fVar28 = auVar30._8_4_;
      fVar33 = auVar30._12_4_;
      pfVar2 = (float *)(lVar7 + (longlong)iVar19 * 0x10);
      *pfVar2 = (float)(~-(uint)(fVar32 <= 0.0) &
                       (uint)((3.0 - fVar24 * fVar32 * fVar24) * fVar24 * 0.5)) * fVar36 * fVar29;
      pfVar2[1] = (float)(~-(uint)(fVar34 <= 0.0) &
                         (uint)((3.0 - fVar26 * fVar34 * fVar26) * fVar26 * 0.5)) * fVar37 * fVar29;
      pfVar2[2] = (float)(~-(uint)(fVar35 <= 0.0) &
                         (uint)((3.0 - fVar28 * fVar35 * fVar28) * fVar28 * 0.5)) * fVar38 * fVar29;
      pfVar2[3] = (float)(~-(uint)(fVar27 <= 0.0) &
                         (uint)((3.0 - fVar33 * fVar27 * fVar33) * fVar33 * 0.5)) *
                  (fVar11 + fVar12) * fVar29;
      lVar7 = *plVar1;
      puVar23 = (undefined4 *)((longlong)iVar5 * 0x10 + lVar7);
      piVar21 = (int *)((longlong)(iVar5 + 1) * 0x10 + lVar7);
      piVar16 = (int *)((longlong)(iVar5 + 2) * 0x10 + lVar7);
      uVar6 = *(undefined4 *)(lVar13 + lVar8);
      puVar23[2] = iVar19;
      *puVar23 = uVar6;
      puVar23[1] = iVar4;
      *piVar21 = iVar4;
      iVar20 = *(int *)(lVar13 + 4 + lVar8);
      piVar21[2] = iVar18;
      piVar21[1] = iVar20;
      *piVar16 = iVar19;
      piVar16[1] = iVar18;
      piVar16[2] = *(int *)(lVar13 + 8 + lVar8);
      *(int *)(lVar13 + 8 + lVar8) = iVar19;
      *(int *)(lVar13 + 4 + lVar8) = iVar18;
      *(int *)(lVar13 + lVar8) = iVar4;
      FUN_143796870(param_1,iVar5,piVar21,local_78);
      FUN_143796870(param_1,iVar5 + 1);
      auVar30 = in_XMM2;
      FUN_143796870(param_1,iVar5 + 2);
      local_68 = local_68 - 1;
      param_4 = local_78;
    } while (local_68 != 0);
  }
  return;
}



// FUNCTION 143796bf0 FUN_143796bf0 body=1030 status=ok
// SIG undefined FUN_143796bf0(void)

void FUN_143796bf0(longlong param_1,undefined4 param_2,char param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong local_70;
  uint local_68;
  uint local_64;
  longlong local_60;
  int local_58;
  uint local_54;
  
  iVar13 = *(int *)(param_1 + 0x30);
  iVar15 = *(int *)(param_1 + 0x20);
  uVar9 = FUN_143703a50();
  uVar11 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
  if ((int)uVar11 < iVar15) {
    iVar4 = uVar11 * 2;
    iVar3 = iVar15;
    if (iVar15 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_14370c310(uVar9,param_4,iVar3,4);
  }
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *(int *)(param_4 + 1) = iVar15;
  FUN_143798510(puVar1,param_6,param_4,param_7,param_8,param_9,param_2);
  iVar15 = (int)param_6[1];
  uVar14 = 0;
  if (param_3 == '\0') {
    lVar12 = *param_6;
    uVar9 = FUN_143703a50();
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < iVar15) {
      FUN_14370c310(uVar9,puVar1,iVar15,0x10);
    }
    FUN_142ba3370(*puVar1,lVar12,iVar15);
    *(int *)(param_1 + 0x20) = iVar15;
  }
  else {
    local_70 = 0;
    local_68 = 0;
    local_64 = 0x80000000;
    uVar9 = FUN_143703a50();
    if ((int)(local_64 & 0x3fffffff) < iVar15) {
      iVar3 = (local_64 & 0x3fffffff) * 2;
      if (iVar15 < iVar3) {
        iVar15 = iVar3;
      }
      FUN_14370c310(uVar9,&local_70,iVar15,0x10);
    }
    iVar15 = (int)param_6[1];
    local_60 = 0;
    local_58 = 0;
    local_54 = 0x80000000;
    uVar9 = FUN_143703a50();
    if ((int)(local_54 & 0x3fffffff) < iVar15) {
      iVar4 = (local_54 & 0x3fffffff) * 2;
      iVar3 = iVar15;
      if (iVar15 < iVar4) {
        iVar3 = iVar4;
      }
      FUN_14370c310(uVar9,&local_60,iVar3,4);
    }
    if (0 < iVar15 - local_58) {
      puVar17 = (undefined4 *)(local_60 + (longlong)local_58 * 4);
      for (lVar12 = (longlong)(iVar15 - local_58); lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar17 = 0xffffffff;
        puVar17 = puVar17 + 1;
      }
    }
    uVar18 = uVar14;
    uVar20 = uVar14;
    local_58 = iVar15;
    if (0 < (int)param_4[1]) {
      do {
        uVar19 = local_68;
        lVar12 = (longlong)*(int *)(uVar20 + *param_4);
        uVar11 = *(uint *)(local_60 + lVar12 * 4);
        if (uVar11 == 0xffffffff) {
          *(uint *)(local_60 + lVar12 * 4) = local_68;
          puVar17 = (undefined4 *)(lVar12 * 0x10 + *param_6);
          uVar9 = FUN_143703a50();
          if (local_68 == (local_64 & 0x3fffffff)) {
            FUN_14370c460(uVar9,&local_70,0x10);
          }
          uVar16 = puVar17[1];
          uVar5 = puVar17[2];
          uVar6 = puVar17[3];
          puVar10 = (undefined4 *)((longlong)(int)local_68 * 0x10 + local_70);
          *puVar10 = *puVar17;
          puVar10[1] = uVar16;
          puVar10[2] = uVar5;
          puVar10[3] = uVar6;
          local_68 = local_68 + 1;
          uVar11 = uVar19;
        }
        uVar19 = (int)uVar18 + 1;
        *(uint *)(uVar20 + *param_4) = uVar11;
        uVar18 = (ulonglong)uVar19;
        uVar20 = uVar20 + 4;
      } while ((int)uVar19 < (int)param_4[1]);
    }
    uVar11 = local_68;
    lVar12 = local_70;
    uVar9 = FUN_143703a50();
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < (int)uVar11) {
      FUN_14370c310(uVar9,puVar1,uVar11,0x10);
    }
    FUN_142ba3370(*puVar1,lVar12,uVar11);
    *(uint *)(param_1 + 0x20) = uVar11;
    uVar9 = FUN_143703a50();
    local_58 = 0;
    if (-1 < (int)local_54) {
      FUN_143702e10(uVar9,local_60,4,local_54 & 0x3fffffff);
    }
    local_60 = 0;
    local_54 = 0x80000000;
    uVar9 = FUN_143703a50();
    local_68 = 0;
    if (-1 < (int)local_64) {
      FUN_143702e10(uVar9,local_70,0x10,local_64 & 0x3fffffff);
    }
  }
  lVar21 = (longlong)iVar13;
  uVar18 = uVar14;
  lVar12 = lVar21;
  if (0 < iVar13) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x28);
      *(undefined4 *)(uVar18 + lVar2) =
           *(undefined4 *)(*param_4 + (longlong)*(int *)(uVar18 + lVar2) * 4);
      *(undefined4 *)(uVar18 + 4 + lVar2) =
           *(undefined4 *)(*param_4 + (longlong)*(int *)(uVar18 + 4 + lVar2) * 4);
      *(undefined4 *)(uVar18 + 8 + lVar2) =
           *(undefined4 *)(*param_4 + (longlong)*(int *)(uVar18 + 8 + lVar2) * 4);
      lVar12 = lVar12 + -1;
      uVar18 = uVar18 + 0x10;
    } while (lVar12 != 0);
  }
  uVar9 = FUN_143703a50();
  uVar11 = *(uint *)((longlong)param_5 + 0xc) & 0x3fffffff;
  if ((int)uVar11 < iVar13) {
    iVar3 = uVar11 * 2;
    iVar15 = iVar13;
    if (iVar13 < iVar3) {
      iVar15 = iVar3;
    }
    FUN_14370c310(uVar9,param_5,iVar15,4);
  }
  *(int *)(param_5 + 1) = iVar13;
  puVar17 = *(undefined4 **)(param_1 + 0x28);
  uVar18 = uVar14;
  if (0 < lVar21) {
    do {
      lVar12 = *(longlong *)(param_1 + 0x28);
      uVar16 = 0xffffffff;
      puVar10 = (undefined4 *)(lVar12 + uVar18);
      cVar8 = FUN_1437984f0();
      if (cVar8 == '\0') {
        uVar5 = puVar10[1];
        uVar6 = puVar10[2];
        uVar7 = puVar10[3];
        uVar16 = (undefined4)((longlong)puVar17 - lVar12 >> 4);
        *puVar17 = *puVar10;
        puVar17[1] = uVar5;
        puVar17[2] = uVar6;
        puVar17[3] = uVar7;
        puVar17 = puVar17 + 4;
      }
      *(undefined4 *)(*param_5 + uVar14 * 4) = uVar16;
      uVar14 = uVar14 + 1;
      uVar18 = uVar18 + 0x10;
    } while ((longlong)uVar14 < lVar21);
  }
  uVar14 = (longlong)puVar17 - *(longlong *)(param_1 + 0x28) >> 4;
  uVar9 = FUN_143703a50();
  uVar11 = *(uint *)(param_1 + 0x34) & 0x3fffffff;
  iVar13 = (int)uVar14;
  if ((int)uVar11 < iVar13) {
    uVar11 = uVar11 * 2;
    uVar14 = uVar14 & 0xffffffff;
    if (iVar13 < (int)uVar11) {
      uVar14 = (ulonglong)uVar11;
    }
    FUN_14370c310(uVar9,param_1 + 0x28,uVar14,0x10);
  }
  *(int *)(param_1 + 0x30) = iVar13;
  return;
}



// FUNCTION 143797000 FUN_143797000 body=3658 status=ok
// SIG undefined FUN_143797000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143797000(float *param_1,float *param_2,undefined8 param_3,int param_4,uint param_5,
                  float *param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar32;
  float fVar33;
  undefined1 in_XMM2 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar34;
  undefined1 auVar31 [16];
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
  float fVar57;
  float fVar58;
  float fVar59;
  longlong local_1e8;
  uint local_1e0;
  uint local_1dc;
  longlong local_1d8;
  uint local_1d0;
  uint local_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  longlong local_1a0;
  int local_198;
  uint local_194;
  longlong local_190;
  uint local_188;
  uint local_184;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
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
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 auVar18 [16];
  
  uVar4 = param_5;
  fVar50 = in_XMM2._0_4_;
  uVar10 = (ulonglong)param_5;
  uVar13 = 0;
  iVar15 = (int)param_5 >> 1;
  fVar51 = *param_2 - *param_1;
  fVar52 = param_2[1] - param_1[1];
  fVar53 = param_2[2] - param_1[2];
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 0x80000000;
  fVar40 = fVar51 * fVar51;
  fVar41 = fVar52 * fVar52;
  fVar42 = fVar53 * fVar53;
  fVar35 = fVar41 + fVar40 + fVar42;
  fVar36 = fVar41 + fVar40 + fVar42;
  fVar37 = fVar41 + fVar40 + fVar42;
  fVar39 = fVar41 + fVar40 + fVar42;
  auVar29._4_4_ = fVar36;
  auVar29._0_4_ = fVar35;
  auVar29._8_4_ = fVar37;
  auVar29._12_4_ = fVar39;
  auVar29 = rsqrtps(in_XMM2,auVar29);
  fVar38 = auVar29._0_4_;
  fVar20 = auVar29._4_4_;
  fVar25 = auVar29._8_4_;
  fVar27 = auVar29._12_4_;
  auVar19._0_4_ = (3.0 - fVar35 * fVar38 * fVar38) * fVar38 * 0.5 * fVar35;
  auVar19._4_4_ = (3.0 - fVar36 * fVar20 * fVar20) * fVar20 * 0.5 * fVar36;
  auVar19._8_4_ = (3.0 - fVar37 * fVar25 * fVar25) * fVar25 * 0.5 * fVar37;
  auVar19._12_4_ = (3.0 - fVar39 * fVar27 * fVar27) * fVar27 * 0.5 * fVar39;
  local_e8 = (float)(~-(uint)(fVar35 <= 0.0) & (uint)auVar19._0_4_);
  fStack_e4 = (float)(~-(uint)(fVar36 <= 0.0) & (uint)auVar19._4_4_);
  fStack_e0 = (float)(~-(uint)(fVar37 <= 0.0) & (uint)auVar19._8_4_);
  fStack_dc = (float)(~-(uint)(fVar39 <= 0.0) & (uint)auVar19._12_4_);
  fVar38 = fRam00000001467f08a4;
  if (local_e8 <= 0.0) {
    fVar20 = fRam00000001467f08b8;
    fVar25 = fRam00000001467f08a8;
    fVar27 = fRam00000001467f06e8 - fRam00000001467f0898;
    fVar35 = DAT_1467f08c8;
    fVar36 = fRam00000001467f08b4;
    fVar37 = fRam00000001467f06e4 - fRam00000001467f0894;
    fVar39 = DAT_1467f08c4;
    fVar42 = _DAT_1467f08b0;
    fVar40 = _DAT_1467f08a0;
    fVar41 = _DAT_1467f06e0 - _DAT_1467f0890;
    fVar55 = DAT_1467f08c0;
  }
  else {
    fVar36 = fVar41 + fVar40 + fVar42;
    fVar37 = fVar41 + fVar40 + fVar42;
    fVar39 = fVar41 + fVar40 + fVar42;
    fVar42 = fVar41 + fVar40 + fVar42;
    auVar1._4_4_ = fVar37;
    auVar1._0_4_ = fVar36;
    auVar1._8_4_ = fVar39;
    auVar1._12_4_ = fVar42;
    auVar29 = rsqrtps(auVar19,auVar1);
    fVar20 = auVar29._0_4_;
    fVar25 = auVar29._4_4_;
    fVar27 = auVar29._8_4_;
    fVar35 = auVar29._12_4_;
    param_5 = 0x3f7fff58;
    fVar51 = fVar51 * (float)(~-(uint)(fVar36 <= 0.0) &
                             (uint)((3.0 - fVar36 * fVar20 * fVar20) * fVar20 * 0.5));
    fVar52 = fVar52 * (float)(~-(uint)(fVar37 <= 0.0) &
                             (uint)((3.0 - fVar37 * fVar25 * fVar25) * fVar25 * 0.5));
    fVar53 = fVar53 * (float)(~-(uint)(fVar39 <= 0.0) &
                             (uint)((3.0 - fVar39 * fVar27 * fVar27) * fVar27 * 0.5));
    fVar54 = (param_2[3] - param_1[3]) *
             (float)(~-(uint)(fVar42 <= 0.0) &
                    (uint)((3.0 - fVar42 * fVar35 * fVar35) * fVar35 * 0.5));
    fVar20 = _DAT_1467f08b0;
    fVar25 = fRam00000001467f08b4;
    fVar27 = fRam00000001467f08b8;
    fVar35 = fRam00000001467f08bc;
    fVar36 = _DAT_1467f08a0;
    fVar37 = fRam00000001467f08a8;
    fVar39 = fRam00000001467f08ac;
    fVar42 = _DAT_1467f0890;
    fVar40 = fRam00000001467f0894;
    fVar41 = fRam00000001467f0898;
    fVar55 = fRam00000001467f089c;
    if (ABS(fVar52 * fRam00000001467f08b4 + fVar51 * _DAT_1467f08b0 + fVar53 * fRam00000001467f08b8)
        < 0.99999) {
      fVar37 = fRam00000001467f08b4 * fVar51 - fVar52 * _DAT_1467f08b0;
      fVar36 = fRam00000001467f08b8 * fVar52 - fVar53 * fRam00000001467f08b4;
      fVar38 = _DAT_1467f08b0 * fVar53 - fVar51 * fRam00000001467f08b8;
      fVar20 = fVar36 * fVar36;
      fVar25 = fVar38 * fVar38;
      fVar27 = fVar37 * fVar37;
      auVar17._4_4_ = fVar20;
      auVar17._0_4_ = fVar20;
      auVar17._8_4_ = fVar20;
      auVar17._12_4_ = fVar20;
      auVar30._0_4_ = fVar25 + fVar20 + fVar27;
      auVar30._4_4_ = fVar25 + fVar20 + fVar27;
      auVar30._8_4_ = fVar25 + fVar20 + fVar27;
      auVar30._12_4_ = fVar25 + fVar20 + fVar27;
      auVar29 = rsqrtps(auVar17,auVar30);
      fVar20 = auVar29._0_4_;
      fVar25 = auVar29._4_4_;
      fVar27 = auVar29._8_4_;
      fVar35 = auVar29._12_4_;
      fVar36 = (float)(~-(uint)(auVar30._0_4_ <= 0.0) &
                      (uint)((3.0 - auVar30._0_4_ * fVar20 * fVar20) * fVar20 * 0.5)) * fVar36;
      fVar38 = (float)(~-(uint)(auVar30._4_4_ <= 0.0) &
                      (uint)((3.0 - auVar30._4_4_ * fVar25 * fVar25) * fVar25 * 0.5)) * fVar38;
      fVar37 = (float)(~-(uint)(auVar30._8_4_ <= 0.0) &
                      (uint)((3.0 - auVar30._8_4_ * fVar27 * fVar27) * fVar27 * 0.5)) * fVar37;
      fVar39 = (float)(~-(uint)(auVar30._12_4_ <= 0.0) &
                      (uint)((3.0 - auVar30._12_4_ * fVar35 * fVar35) * fVar35 * 0.5)) *
               (fRam00000001467f08bc * fVar54 - fVar54 * fRam00000001467f08bc);
      fVar20 = fVar51;
      fVar25 = fVar52;
      fVar27 = fVar53;
      fVar35 = fVar54;
      fVar42 = fVar38 * fVar53 - fVar37 * fVar52;
      fVar40 = fVar37 * fVar51 - fVar36 * fVar53;
      fVar41 = fVar36 * fVar52 - fVar38 * fVar51;
      fVar55 = fVar39 * fVar54 - fVar39 * fVar54;
    }
  }
  local_f8 = _DAT_1467f08a0 * _DAT_1467f06d0;
  fStack_f4 = fRam00000001467f08a4 * fRam00000001467f06d4;
  fStack_f0 = fRam00000001467f08a8 * fRam00000001467f06d8;
  fStack_ec = fRam00000001467f08ac * fRam00000001467f06dc;
  iVar14 = param_4 + iVar15 * 2;
  local_128 = _DAT_1467f08b0;
  fStack_124 = fRam00000001467f08b4;
  fStack_120 = fRam00000001467f08b8;
  fStack_11c = fRam00000001467f08bc;
  iVar11 = (iVar14 + -1) * uVar4 + 2;
  fVar56 = (*param_2 + *param_1) * _DAT_1467f07e0;
  fVar57 = (param_2[1] + param_1[1]) * fRam00000001467f07e4;
  fVar58 = (param_2[2] + param_1[2]) * fRam00000001467f07e8;
  fVar59 = (param_2[3] + param_1[3]) * fRam00000001467f07ec;
  fVar51 = (0.0 - local_e8) * _DAT_1467f07e0 * _DAT_1467f08b0;
  fVar52 = (0.0 - fStack_e4) * fRam00000001467f07e4 * fRam00000001467f08b4;
  fVar53 = (0.0 - fStack_e0) * fRam00000001467f07e8 * fRam00000001467f08b8;
  fStack_1bc = (0.0 - fStack_dc) * fRam00000001467f07ec * fRam00000001467f08bc;
  fVar54 = -fVar53;
  fStack_10c = -fStack_1bc;
  local_118 = -fVar51;
  fStack_114 = -fVar52;
  local_148 = -fVar51 - fVar51;
  fStack_144 = -fVar52 - fVar52;
  fStack_140 = fVar54 - fVar53;
  fStack_13c = fStack_10c - fStack_1bc;
  local_1c8 = fVar51;
  fStack_1c4 = fVar52;
  fStack_1c0 = fVar53;
  fStack_110 = fVar54;
  uVar5 = FUN_143703a50();
  if ((int)(local_1dc & 0x3fffffff) < iVar11) {
    FUN_14370c310(uVar5,&local_1e8,iVar11,0x10);
  }
  fVar21 = (local_e8 * _DAT_1467f07e0 + fVar50) * _DAT_1467f08b0;
  fVar26 = (fStack_e4 * fRam00000001467f07e4 + fVar50) * fRam00000001467f08b4;
  fVar28 = (fStack_e0 * fRam00000001467f07e8 + fVar50) * fRam00000001467f08b8;
  uVar5 = FUN_143703a50();
  auVar18._8_8_ = extraout_XMM0_Qb;
  auVar18._0_8_ = extraout_XMM0_Qa;
  if (local_1e0 == (local_1dc & 0x3fffffff)) {
    auVar18._0_8_ = FUN_14370c460(uVar5,&local_1e8,0x10);
    auVar18._8_8_ = extraout_XMM0_Qb_00;
  }
  pfVar6 = (float *)((longlong)(int)local_1e0 * 0x10 + local_1e8);
  auVar22._0_4_ = (float)iVar15;
  *pfVar6 = fVar26 * fVar36 + fVar21 * fVar42 + fVar28 * fVar20 + fVar56;
  pfVar6[1] = fVar26 * fVar38 + fVar21 * fVar40 + fVar28 * fVar25 + fVar57;
  pfVar6[2] = fVar26 * fVar37 + fVar21 * fVar41 + fVar28 * fVar27 + fVar58;
  pfVar6[3] = fVar26 * fVar39 + fVar21 * fVar55 + fVar28 * fVar35 + fVar59;
  local_1e0 = local_1e0 + 1;
  auVar22._4_4_ = auVar22._0_4_;
  auVar22._8_4_ = auVar22._0_4_;
  auVar22._12_4_ = auVar22._0_4_;
  auVar29 = rcpps(auVar18,auVar22);
  auVar23._0_4_ = (float)(int)uVar4;
  auVar23._4_4_ = auVar23._0_4_;
  auVar23._8_4_ = auVar23._0_4_;
  auVar23._12_4_ = auVar23._0_4_;
  auVar19 = rcpps(auVar29,auVar23);
  local_108 = (2.0 - auVar22._0_4_ * auVar29._0_4_) * auVar29._0_4_ * _DAT_1467f0a00;
  fStack_104 = (2.0 - auVar22._0_4_ * auVar29._4_4_) * auVar29._4_4_ * fRam00000001467f0a04;
  fStack_100 = (2.0 - auVar22._0_4_ * auVar29._8_4_) * auVar29._8_4_ * fRam00000001467f0a08;
  fStack_fc = (2.0 - auVar22._0_4_ * auVar29._12_4_) * auVar29._12_4_ * fRam00000001467f0a0c;
  auVar24._0_4_ = auVar23._0_4_ * auVar19._0_4_;
  auVar24._4_4_ = auVar23._0_4_ * auVar19._4_4_;
  auVar24._8_4_ = auVar23._0_4_ * auVar19._8_4_;
  auVar24._12_4_ = auVar23._0_4_ * auVar19._12_4_;
  fVar28 = (2.0 - auVar24._0_4_) * auVar19._0_4_ * _DAT_1467f0a30;
  fVar32 = (2.0 - auVar24._4_4_) * auVar19._4_4_ * fRam00000001467f0a34;
  fVar33 = (2.0 - auVar24._8_4_) * auVar19._8_4_ * fRam00000001467f0a38;
  fVar34 = (2.0 - auVar24._12_4_) * auVar19._12_4_ * fRam00000001467f0a3c;
  fVar21 = -fVar51;
  fVar26 = -fVar52;
  local_138 = fVar28;
  fStack_134 = fVar32;
  fStack_130 = fVar33;
  fStack_12c = fVar34;
  iVar11 = iVar15;
  while (iVar11 = iVar11 + -1, -1 < iVar11) {
    fStack_16c = (float)iVar11;
    local_178 = fStack_16c * local_108;
    fStack_174 = fStack_16c * fStack_104;
    fStack_170 = fStack_16c * fStack_100;
    fStack_16c = fStack_16c * fStack_fc;
    FUN_14375e8d0(&local_168,&local_f8,&local_178);
    fVar51 = local_168 * _DAT_1467f0890;
    fVar52 = fStack_164 * fRam00000001467f0894;
    auVar24._8_4_ = fStack_160 * fRam00000001467f0898;
    auVar24._4_4_ = auVar24._8_4_;
    auVar24._0_4_ = auVar24._8_4_;
    auVar24._12_4_ = auVar24._8_4_;
    fVar44 = (fVar52 + fVar51 + auVar24._8_4_) * local_168 +
             (fStack_15c * fStack_15c - _DAT_1467f07e0) * _DAT_1467f0890 +
             (fRam00000001467f0898 * fStack_164 - fStack_160 * fRam00000001467f0894) * fStack_15c;
    fVar45 = (fVar52 + fVar51 + auVar24._8_4_) * fStack_164 +
             (fStack_15c * fStack_15c - fRam00000001467f07e4) * fRam00000001467f0894 +
             (_DAT_1467f0890 * fStack_160 - local_168 * fRam00000001467f0898) * fStack_15c;
    fVar46 = (fVar52 + fVar51 + auVar24._8_4_) * fStack_160 +
             (fStack_15c * fStack_15c - fRam00000001467f07e8) * fRam00000001467f0898 +
             (fRam00000001467f0894 * local_168 - fStack_164 * _DAT_1467f0890) * fStack_15c;
    fVar44 = fVar44 + fVar44;
    fVar45 = fVar45 + fVar45;
    fVar46 = fVar46 + fVar46;
    uVar8 = uVar13;
    fVar51 = local_1c8;
    fVar52 = fStack_1c4;
    fVar53 = fStack_1c0;
    if (0 < (int)uVar4) {
      do {
        fStack_16c = (float)(int)uVar8;
        local_178 = fStack_16c * fVar28;
        fStack_174 = fStack_16c * fVar32;
        fStack_170 = fStack_16c * fVar33;
        fStack_16c = fStack_16c * fVar34;
        FUN_14375e8d0(&local_158,&local_128,&local_178);
        fVar51 = local_158 * fVar44;
        fVar52 = fStack_154 * fVar45;
        auVar24._8_4_ = fStack_150 * fVar46;
        auVar24._4_4_ = auVar24._8_4_;
        auVar24._0_4_ = auVar24._8_4_;
        auVar24._12_4_ = auVar24._8_4_;
        fVar53 = (fVar52 + fVar51 + auVar24._8_4_) * local_158 +
                 (fStack_14c * fStack_14c - _DAT_1467f07e0) * fVar44 +
                 (fVar46 * fStack_154 - fStack_150 * fVar45) * fStack_14c;
        fVar43 = (fVar52 + fVar51 + auVar24._8_4_) * fStack_154 +
                 (fStack_14c * fStack_14c - fRam00000001467f07e4) * fVar45 +
                 (fVar44 * fStack_150 - local_158 * fVar46) * fStack_14c;
        fVar51 = (fVar52 + fVar51 + auVar24._8_4_) * fStack_150 +
                 (fStack_14c * fStack_14c - fRam00000001467f07e8) * fVar46 +
                 (fVar45 * local_158 - fStack_154 * fVar44) * fStack_14c;
        fVar21 = (fVar53 + fVar53) * fVar50 + fVar21;
        fVar26 = (fVar43 + fVar43) * fVar50 + fVar26;
        fVar54 = (fVar51 + fVar51) * fVar50 + fVar54;
        uVar5 = FUN_143703a50();
        if (local_1e0 == (local_1dc & 0x3fffffff)) {
          FUN_14370c460(uVar5,&local_1e8,0x10);
        }
        uVar12 = (int)uVar8 + 1;
        pfVar6 = (float *)((longlong)(int)local_1e0 * 0x10 + local_1e8);
        *pfVar6 = fVar26 * fVar36 + fVar21 * fVar42 + fVar54 * fVar20 + fVar56;
        pfVar6[1] = fVar26 * fVar38 + fVar21 * fVar40 + fVar54 * fVar25 + fVar57;
        pfVar6[2] = fVar26 * fVar37 + fVar21 * fVar41 + fVar54 * fVar27 + fVar58;
        pfVar6[3] = fVar26 * fVar39 + fVar21 * fVar55 + fVar54 * fVar35 + fVar59;
        local_1e0 = local_1e0 + 1;
        uVar8 = (ulonglong)uVar12;
        fVar21 = local_118;
        fVar26 = fStack_114;
        fVar54 = fStack_110;
        fVar51 = local_1c8;
        fVar52 = fStack_1c4;
        fVar53 = fStack_1c0;
      } while ((int)uVar12 < (int)uVar4);
    }
  }
  auVar31._0_4_ = (float)param_4;
  auVar31._4_4_ = auVar31._0_4_;
  auVar31._8_4_ = auVar31._0_4_;
  auVar31._12_4_ = auVar31._0_4_;
  auVar29 = rcpps(auVar24,auVar31);
  local_178 = (2.0 - auVar29._0_4_ * auVar31._0_4_) * auVar29._0_4_;
  fStack_174 = (2.0 - auVar29._4_4_ * auVar31._0_4_) * auVar29._4_4_;
  fStack_170 = (2.0 - auVar29._8_4_ * auVar31._0_4_) * auVar29._8_4_;
  fStack_16c = (2.0 - auVar29._12_4_ * auVar31._0_4_) * auVar29._12_4_;
  fVar54 = local_178;
  fVar21 = fStack_174;
  fVar26 = fStack_170;
  fVar28 = local_1c8;
  fVar32 = fStack_1c4;
  fVar33 = fStack_1c0;
  while (fVar3 = fStack_12c, fVar2 = fStack_130, fVar43 = fStack_134, fVar46 = local_138,
        fVar45 = fVar53, fVar44 = fVar52, fVar34 = fVar51, param_4 = param_4 + -1,
        local_1c8 = fVar28, fStack_1c4 = fVar32, fStack_1c0 = fVar33, local_138 = fVar46,
        fStack_134 = fVar43, fStack_130 = fVar2, fStack_12c = fVar3, 0 < param_4) {
    fVar51 = fVar28;
    fVar52 = fVar32;
    fVar53 = fVar33;
    if (0 < (int)uVar4) {
      fVar51 = (float)param_4;
      fVar47 = fVar51 * fVar54 * local_148;
      fVar48 = fVar51 * fVar21 * fStack_144;
      fVar49 = fVar51 * fVar26 * fStack_140;
      uVar8 = uVar13;
      do {
        fStack_14c = (float)(int)uVar8;
        local_158 = fStack_14c * fVar46;
        fStack_154 = fStack_14c * fVar43;
        fStack_150 = fStack_14c * fVar2;
        fStack_14c = fStack_14c * fVar3;
        FUN_14375e8d0(&local_168,&local_128,&local_158);
        fVar51 = local_168 * _DAT_1467f0890;
        fVar52 = fStack_164 * fRam00000001467f0894;
        fVar53 = fStack_160 * fRam00000001467f0898;
        fVar54 = (fVar52 + fVar51 + fVar53) * local_168 +
                 (fStack_15c * fStack_15c - _DAT_1467f07e0) * _DAT_1467f0890 +
                 (fRam00000001467f0898 * fStack_164 - fStack_160 * fRam00000001467f0894) *
                 fStack_15c;
        fVar21 = (fVar52 + fVar51 + fVar53) * fStack_164 +
                 (fStack_15c * fStack_15c - fRam00000001467f07e4) * fRam00000001467f0894 +
                 (_DAT_1467f0890 * fStack_160 - local_168 * fRam00000001467f0898) * fStack_15c;
        fVar53 = (fVar52 + fVar51 + fVar53) * fStack_160 +
                 (fStack_15c * fStack_15c - fRam00000001467f07e8) * fRam00000001467f0898 +
                 (fRam00000001467f0894 * local_168 - fStack_164 * _DAT_1467f0890) * fStack_15c;
        fVar51 = (fVar54 + fVar54) * fVar50 + fVar47 + fVar34;
        fVar52 = (fVar21 + fVar21) * fVar50 + fVar48 + fVar44;
        fVar53 = (fVar53 + fVar53) * fVar50 + fVar49 + fVar45;
        uVar5 = FUN_143703a50();
        if (local_1e0 == (local_1dc & 0x3fffffff)) {
          FUN_14370c460(uVar5,&local_1e8,0x10);
        }
        uVar12 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar12;
        pfVar6 = (float *)((longlong)(int)local_1e0 * 0x10 + local_1e8);
        *pfVar6 = fVar52 * fVar36 + fVar51 * fVar42 + fVar53 * fVar20 + fVar56;
        pfVar6[1] = fVar52 * fVar38 + fVar51 * fVar40 + fVar53 * fVar25 + fVar57;
        pfVar6[2] = fVar52 * fVar37 + fVar51 * fVar41 + fVar53 * fVar27 + fVar58;
        pfVar6[3] = fVar52 * fVar39 + fVar51 * fVar55 + fVar53 * fVar35 + fVar59;
        local_1e0 = local_1e0 + 1;
        fVar54 = local_178;
        fVar21 = fStack_174;
        fVar26 = fStack_170;
        fVar51 = local_1c8;
        fVar52 = fStack_1c4;
        fVar53 = fStack_1c0;
        fVar28 = local_1c8;
        fVar32 = fStack_1c4;
        fVar33 = fStack_1c0;
      } while ((int)uVar12 < (int)uVar4);
    }
  }
  uVar8 = uVar13;
  if (0 < iVar15) {
    do {
      fVar51 = (float)(int)uVar8;
      local_148 = (0.0 - fVar51) * local_108;
      fStack_144 = (0.0 - fVar51) * fStack_104;
      fStack_140 = (0.0 - fVar51) * fStack_100;
      fStack_13c = (0.0 - fVar51) * fStack_fc;
      FUN_14375e8d0(&local_158,&local_f8,&local_148);
      fVar51 = local_158 * _DAT_1467f0890;
      fVar52 = fStack_154 * fRam00000001467f0894;
      fVar53 = fStack_150 * fRam00000001467f0898;
      fVar54 = (fVar52 + fVar51 + fVar53) * local_158 +
               (fStack_14c * fStack_14c - _DAT_1467f07e0) * _DAT_1467f0890 +
               (fRam00000001467f0898 * fStack_154 - fStack_150 * fRam00000001467f0894) * fStack_14c;
      fVar21 = (fVar52 + fVar51 + fVar53) * fStack_154 +
               (fStack_14c * fStack_14c - fRam00000001467f07e4) * fRam00000001467f0894 +
               (_DAT_1467f0890 * fStack_150 - local_158 * fRam00000001467f0898) * fStack_14c;
      fVar51 = (fVar52 + fVar51 + fVar53) * fStack_150 +
               (fStack_14c * fStack_14c - fRam00000001467f07e8) * fRam00000001467f0898 +
               (fRam00000001467f0894 * local_158 - fStack_154 * _DAT_1467f0890) * fStack_14c;
      fVar54 = fVar54 + fVar54;
      fVar21 = fVar21 + fVar21;
      fVar51 = fVar51 + fVar51;
      uVar9 = uVar13;
      if (0 < (int)uVar4) {
        do {
          fStack_13c = (float)(int)uVar9;
          local_148 = fStack_13c * local_138;
          fStack_144 = fStack_13c * fStack_134;
          fStack_140 = fStack_13c * fStack_130;
          fStack_13c = fStack_13c * fStack_12c;
          FUN_14375e8d0(&local_168,&local_128,&local_148);
          fVar52 = local_168 * fVar54;
          fVar53 = fStack_164 * fVar21;
          fVar26 = fStack_160 * fVar51;
          fVar34 = (fVar53 + fVar52 + fVar26) * local_168 +
                   (fStack_15c * fStack_15c - _DAT_1467f07e0) * fVar54 +
                   (fVar51 * fStack_164 - fStack_160 * fVar21) * fStack_15c;
          fVar44 = (fVar53 + fVar52 + fVar26) * fStack_164 +
                   (fStack_15c * fStack_15c - fRam00000001467f07e4) * fVar21 +
                   (fVar54 * fStack_160 - local_168 * fVar51) * fStack_15c;
          fVar26 = (fVar53 + fVar52 + fVar26) * fStack_160 +
                   (fStack_15c * fStack_15c - fRam00000001467f07e8) * fVar51 +
                   (fVar21 * local_168 - fStack_164 * fVar54) * fStack_15c;
          fVar52 = (fVar34 + fVar34) * fVar50 + fVar28;
          fVar53 = (fVar44 + fVar44) * fVar50 + fVar32;
          fVar26 = (fVar26 + fVar26) * fVar50 + fVar33;
          uVar5 = FUN_143703a50();
          if (local_1e0 == (local_1dc & 0x3fffffff)) {
            FUN_14370c460(uVar5,&local_1e8,0x10);
          }
          uVar12 = (int)uVar9 + 1;
          pfVar6 = (float *)((longlong)(int)local_1e0 * 0x10 + local_1e8);
          *pfVar6 = fVar53 * fVar36 + fVar52 * fVar42 + fVar26 * fVar20 + fVar56;
          pfVar6[1] = fVar53 * fVar38 + fVar52 * fVar40 + fVar26 * fVar25 + fVar57;
          pfVar6[2] = fVar53 * fVar37 + fVar52 * fVar41 + fVar26 * fVar27 + fVar58;
          pfVar6[3] = fVar53 * fVar39 + fVar52 * fVar55 + fVar26 * fVar35 + fVar59;
          local_1e0 = local_1e0 + 1;
          uVar9 = (ulonglong)uVar12;
        } while ((int)uVar12 < (int)uVar4);
      }
      uVar12 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar12;
    } while ((int)uVar12 < iVar15);
  }
  fVar51 = (0.0 - (local_e8 * _DAT_1467f07e0 + fVar50)) * _DAT_1467f08b0;
  fVar52 = (0.0 - (fStack_e4 * fRam00000001467f07e4 + fVar50)) * fRam00000001467f08b4;
  fVar50 = (0.0 - (fStack_e0 * fRam00000001467f07e8 + fVar50)) * fRam00000001467f08b8;
  uVar5 = FUN_143703a50();
  if (local_1e0 == (local_1dc & 0x3fffffff)) {
    FUN_14370c460(uVar5,&local_1e8,0x10);
  }
  pfVar6 = (float *)((longlong)(int)local_1e0 * 0x10 + local_1e8);
  *pfVar6 = fVar52 * fVar36 + fVar51 * fVar42 + fVar50 * fVar20 + fVar56;
  pfVar6[1] = fVar52 * fVar38 + fVar51 * fVar40 + fVar50 * fVar25 + fVar57;
  pfVar6[2] = fVar52 * fVar37 + fVar51 * fVar41 + fVar50 * fVar27 + fVar58;
  pfVar6[3] = fVar52 * fVar39 + fVar51 * fVar55 + fVar50 * fVar35 + fVar59;
  local_1e0 = local_1e0 + 1;
  uVar8 = uVar13;
  uVar9 = uVar13;
  if (0 < (int)local_1e0) {
    do {
      uVar12 = (int)uVar9 + 1;
      pfVar6 = (float *)(local_1e8 + uVar8);
      fVar38 = *pfVar6;
      fVar50 = pfVar6[1];
      fVar20 = pfVar6[2];
      fVar25 = param_6[5];
      fVar27 = param_6[6];
      fVar35 = param_6[7];
      fVar36 = param_6[1];
      fVar37 = param_6[2];
      fVar39 = param_6[3];
      fVar42 = param_6[9];
      fVar40 = param_6[10];
      fVar41 = param_6[0xb];
      fVar51 = param_6[0xd];
      fVar52 = param_6[0xe];
      fVar53 = param_6[0xf];
      pfVar6 = (float *)(local_1e8 + uVar8);
      *pfVar6 = fVar50 * param_6[4] + fVar38 * *param_6 + fVar20 * param_6[8] + param_6[0xc];
      pfVar6[1] = fVar50 * fVar25 + fVar38 * fVar36 + fVar20 * fVar42 + fVar51;
      pfVar6[2] = fVar50 * fVar27 + fVar38 * fVar37 + fVar20 * fVar40 + fVar52;
      pfVar6[3] = fVar50 * fVar35 + fVar38 * fVar39 + fVar20 * fVar41 + fVar53;
      uVar8 = uVar8 + 0x10;
      uVar9 = (ulonglong)uVar12;
    } while ((int)uVar12 < (int)local_1e0);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 0x80000000;
  fVar38 = 1.4013e-45;
  fStack_1bc = -NAN;
  uVar8 = uVar13;
  if (0 < (int)uVar4) {
    fVar50 = 1.4013e-45;
    uVar9 = uVar10;
    do {
      local_1c8 = 0.0;
      fStack_1c0 = (float)((int)fVar50 % (int)uVar4 + 1);
      fStack_1c4 = fVar50;
      uVar5 = FUN_143703a50();
      if (local_1d0 == (local_1cc & 0x3fffffff)) {
        FUN_14370c460(uVar5,&local_1d8,0x10);
      }
      fVar50 = (float)((int)fVar50 + 1);
      puVar7 = (undefined8 *)((longlong)(int)local_1d0 * 0x10 + local_1d8);
      *puVar7 = CONCAT44(fStack_1c4,local_1c8);
      puVar7[1] = CONCAT44(fStack_1bc,fStack_1c0);
      local_1d0 = local_1d0 + 1;
      uVar8 = (ulonglong)local_1d0;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  local_188 = (uint)uVar8;
  uVar12 = iVar14 - 2;
  uVar9 = (ulonglong)uVar12;
  if (0 < (int)uVar12) {
    uVar12 = -uVar4;
    param_5 = uVar12;
    fVar38 = 1.4013e-45;
    do {
      if (0 < (int)uVar4) {
        uVar16 = uVar10;
        fVar50 = fVar38;
        do {
          iVar15 = (int)uVar13 + (int)fVar50;
          fStack_1c4 = (float)(iVar15 + (int)fVar38 + uVar4 + -1);
          iVar15 = iVar15 % (int)uVar4;
          fStack_1c0 = (float)(iVar15 + (int)fVar38 + uVar4);
          local_1c8 = fVar50;
          uVar5 = FUN_143703a50();
          if (local_1d0 == (local_1cc & 0x3fffffff)) {
            FUN_14370c460(uVar5,&local_1d8,0x10);
          }
          puVar7 = (undefined8 *)((longlong)(int)local_1d0 * 0x10 + local_1d8);
          *puVar7 = CONCAT44(fStack_1c4,local_1c8);
          puVar7[1] = CONCAT44(fStack_1bc,fStack_1c0);
          local_1d0 = local_1d0 + 1;
          local_1c8 = (float)(iVar15 + (int)fVar38);
          fStack_1c0 = (float)((int)local_1c8 + uVar4);
          fStack_1c4 = fVar50;
          uVar5 = FUN_143703a50();
          if (local_1d0 == (local_1cc & 0x3fffffff)) {
            FUN_14370c460(uVar5,&local_1d8,0x10);
          }
          fVar50 = (float)((int)fVar50 + 1);
          puVar7 = (undefined8 *)((longlong)(int)local_1d0 * 0x10 + local_1d8);
          *puVar7 = CONCAT44(fStack_1c4,local_1c8);
          puVar7[1] = CONCAT44(fStack_1bc,fStack_1c0);
          local_1d0 = local_1d0 + 1;
          uVar8 = (ulonglong)local_1d0;
          uVar16 = uVar16 - 1;
          uVar12 = param_5;
        } while (uVar16 != 0);
      }
      local_188 = (uint)uVar8;
      fVar38 = (float)((int)fVar38 + uVar4);
      uVar13 = (ulonglong)((int)uVar13 + uVar12);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (0 < (int)uVar4) {
    iVar15 = 1;
    do {
      fStack_1c4 = (float)((int)fVar38 + -1 + iVar15);
      local_1c8 = (float)(iVar15 % (int)uVar4 + (int)fVar38);
      fStack_1c0 = (float)((int)fVar38 + uVar4);
      uVar5 = FUN_143703a50();
      if (local_1d0 == (local_1cc & 0x3fffffff)) {
        FUN_14370c460(uVar5,&local_1d8,0x10);
      }
      iVar15 = iVar15 + 1;
      puVar7 = (undefined8 *)((longlong)(int)local_1d0 * 0x10 + local_1d8);
      *puVar7 = CONCAT44(fStack_1c4,local_1c8);
      puVar7[1] = CONCAT44(fStack_1bc,fStack_1c0);
      local_1d0 = local_1d0 + 1;
      uVar10 = uVar10 - 1;
      local_188 = local_1d0;
    } while (uVar10 != 0);
  }
  local_1a0 = local_1e8;
  local_198 = local_1e0;
  local_194 = local_1dc;
  local_190 = local_1d8;
  local_184 = local_1cc;
  local_1cc = 0x80000000;
  local_1b0 = 0;
  local_1a8 = 0x1ffff;
  local_1b8 = hkGeometry::vftable;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 0x80000000;
  local_1d8 = 0;
  local_1d0 = 0;
  FUN_1437170a0(param_7,&param_5,&local_1b8,0);
  local_1b8 = hkGeometry::vftable;
  uVar5 = FUN_143703a50();
  local_188 = 0;
  if (-1 < (int)local_184) {
    FUN_143702e10(uVar5,local_190,0x10,local_184 & 0x3fffffff);
  }
  local_190 = 0;
  local_184 = 0x80000000;
  uVar5 = FUN_143703a50();
  local_198 = 0;
  if (-1 < (int)local_194) {
    FUN_143702e10(uVar5,local_1a0,0x10,local_194 & 0x3fffffff);
  }
  local_1a0 = 0;
  local_194 = 0x80000000;
  FUN_14370c000(&local_1b8);
  uVar5 = FUN_143703a50();
  local_1d0 = 0;
  if (-1 < (int)local_1cc) {
    FUN_143702e10(uVar5,local_1d8,0x10,local_1cc & 0x3fffffff);
  }
  local_1d8 = 0;
  local_1cc = 0x80000000;
  uVar5 = FUN_143703a50();
  local_1e0 = 0;
  if (-1 < (int)local_1dc) {
    FUN_143702e10(uVar5,local_1e8,0x10,local_1dc & 0x3fffffff);
  }
  return;
}



// FUNCTION 143797e50 FUN_143797e50 body=439 status=ok
// SIG undefined FUN_143797e50(void)

void FUN_143797e50(float *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  int local_58;
  uint local_54;
  longlong local_50;
  int local_48;
  uint local_44;
  
  uVar12 = 0;
  local_70 = 0;
  local_68 = 0x1ffff;
  local_78 = hkGeometry::vftable;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0x80000000;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0x80000000;
  local_88 = param_2;
  uStack_84 = param_2;
  uStack_80 = param_2;
  uStack_7c = param_2;
  FUN_143798010(&local_78,&local_88);
  iVar9 = local_48;
  uVar11 = uVar12;
  if (0 < local_48) {
    do {
      FUN_143796870(&local_78,uVar11,param_2,param_3);
      uVar14 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar14;
    } while ((int)uVar14 < iVar9);
  }
  lVar13 = (longlong)local_58;
  uVar11 = uVar12;
  if (0 < lVar13) {
    do {
      fVar3 = param_1[1];
      fVar4 = param_1[2];
      fVar5 = param_1[3];
      pfVar1 = (float *)(uVar11 + local_60);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      pfVar2 = (float *)(uVar11 + local_60);
      *pfVar2 = *param_1 + *pfVar1;
      pfVar2[1] = fVar3 + fVar6;
      pfVar2[2] = fVar4 + fVar7;
      pfVar2[3] = fVar5 + fVar8;
      lVar13 = lVar13 + -1;
      uVar11 = uVar11 + 0x10;
    } while (lVar13 != 0);
  }
  if ((param_5 != -1) && (uVar11 = uVar12, 0 < local_48)) {
    do {
      uVar14 = (int)uVar11 + 1;
      *(int *)(uVar12 + 0xc + local_50) = param_5;
      uVar12 = uVar12 + 0x10;
      uVar11 = (ulonglong)uVar14;
    } while ((int)uVar14 < local_48);
  }
  FUN_1437170a0(param_4,&param_5,&local_78,0);
  local_78 = hkGeometry::vftable;
  uVar10 = FUN_143703a50();
  local_48 = 0;
  if (-1 < (int)local_44) {
    FUN_143702e10(uVar10,local_50,0x10,local_44 & 0x3fffffff);
  }
  local_50 = 0;
  local_44 = 0x80000000;
  uVar10 = FUN_143703a50();
  local_58 = 0;
  if (-1 < (int)local_54) {
    FUN_143702e10(uVar10,local_60,0x10,local_54 & 0x3fffffff);
  }
  local_60 = 0;
  local_54 = 0x80000000;
  FUN_14370c000(&local_78);
  return;
}



// FUNCTION 143798010 FUN_143798010 body=1240 status=ok
// SIG undefined FUN_143798010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143798010(longlong param_1,float *param_2)

{
  float *pfVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  float fVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar5 = _DAT_1467f06e0;
  fVar10 = *param_2 * 0.8506508;
  fVar11 = *param_2 * 0.5257311;
  uVar6 = FUN_143703a50();
  uVar7 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  if (uVar7 < 0xc) {
    uVar7 = uVar7 * 2;
    uVar4 = 0xc;
    if (0xc < uVar7) {
      uVar4 = uVar7;
    }
    FUN_14370c310(uVar6,param_1 + 0x18,uVar4,0x10);
  }
  pfVar1 = *(float **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = 0xc;
  fVar9 = 0.0 - fVar10;
  fVar8 = 0.0 - fVar11;
  *pfVar1 = fVar8;
  pfVar1[1] = fVar5;
  pfVar1[2] = fVar10;
  pfVar1[3] = fVar5;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(float *)(lVar2 + 0x10) = fVar11;
  *(float *)(lVar2 + 0x14) = fVar5;
  *(float *)(lVar2 + 0x18) = fVar10;
  *(float *)(lVar2 + 0x1c) = fVar5;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(float *)(lVar2 + 0x20) = fVar8;
  *(float *)(lVar2 + 0x24) = fVar5;
  *(float *)(lVar2 + 0x28) = fVar9;
  *(float *)(lVar2 + 0x2c) = fVar5;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(float *)(lVar2 + 0x30) = fVar11;
  *(float *)(lVar2 + 0x34) = fVar5;
  *(float *)(lVar2 + 0x38) = fVar9;
  *(float *)(lVar2 + 0x3c) = fVar5;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(float *)(lVar2 + 0x40) = fVar5;
  *(float *)(lVar2 + 0x44) = fVar10;
  *(float *)(lVar2 + 0x48) = fVar11;
  *(float *)(lVar2 + 0x4c) = fVar5;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(float *)(lVar2 + 0x50) = fVar5;
  *(float *)(lVar2 + 0x54) = fVar10;
  *(float *)(lVar2 + 0x58) = fVar8;
  *(float *)(lVar2 + 0x5c) = fVar5;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(float *)(lVar2 + 0x60) = fVar5;
  *(float *)(lVar2 + 100) = fVar9;
  *(float *)(lVar2 + 0x68) = fVar11;
  *(float *)(lVar2 + 0x6c) = fVar5;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(float *)(lVar2 + 0x70) = fVar5;
  *(float *)(lVar2 + 0x74) = fVar9;
  *(float *)(lVar2 + 0x78) = fVar8;
  *(float *)(lVar2 + 0x7c) = fVar5;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(float *)(lVar2 + 0x80) = fVar10;
  *(float *)(lVar2 + 0x84) = fVar11;
  *(float *)(lVar2 + 0x88) = fVar5;
  *(float *)(lVar2 + 0x8c) = fVar5;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(float *)(lVar2 + 0x90) = fVar9;
  *(float *)(lVar2 + 0x94) = fVar11;
  *(float *)(lVar2 + 0x98) = fVar5;
  *(float *)(lVar2 + 0x9c) = fVar5;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(float *)(lVar2 + 0xa0) = fVar10;
  *(float *)(lVar2 + 0xa4) = fVar8;
  *(float *)(lVar2 + 0xa8) = fVar5;
  *(float *)(lVar2 + 0xac) = fVar5;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(float *)(lVar2 + 0xb0) = fVar9;
  *(float *)(lVar2 + 0xb4) = fVar8;
  *(float *)(lVar2 + 0xb8) = fVar5;
  *(float *)(lVar2 + 0xbc) = fVar5;
  uVar6 = FUN_143703a50();
  uVar7 = *(uint *)(param_1 + 0x34) & 0x3fffffff;
  if (uVar7 < 0x14) {
    uVar7 = uVar7 * 2;
    uVar4 = 0x14;
    if (0x14 < uVar7) {
      uVar4 = uVar7;
    }
    FUN_14370c310(uVar6,param_1 + 0x28,uVar4,0x10);
  }
  puVar3 = *(undefined4 **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 0x14;
  *puVar3 = 1;
  *(undefined8 *)(puVar3 + 1) = 4;
  puVar3[3] = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x10) = 4;
  *(undefined8 *)(lVar2 + 0x14) = 9;
  *(undefined4 *)(lVar2 + 0x1c) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x20) = 4;
  *(undefined4 *)(lVar2 + 0x24) = 5;
  *(undefined4 *)(lVar2 + 0x28) = 9;
  *(undefined4 *)(lVar2 + 0x2c) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x30) = 8;
  *(undefined4 *)(lVar2 + 0x34) = 5;
  *(undefined4 *)(lVar2 + 0x38) = 4;
  *(undefined4 *)(lVar2 + 0x3c) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x40) = 1;
  *(undefined4 *)(lVar2 + 0x44) = 8;
  *(undefined4 *)(lVar2 + 0x48) = 4;
  *(undefined4 *)(lVar2 + 0x4c) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x50) = 1;
  *(undefined4 *)(lVar2 + 0x54) = 10;
  *(undefined4 *)(lVar2 + 0x58) = 8;
  *(undefined4 *)(lVar2 + 0x5c) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x60) = 10;
  *(undefined4 *)(lVar2 + 100) = 3;
  *(undefined4 *)(lVar2 + 0x68) = 8;
  *(undefined4 *)(lVar2 + 0x6c) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x70) = 8;
  *(undefined4 *)(lVar2 + 0x74) = 3;
  *(undefined4 *)(lVar2 + 0x78) = 5;
  *(undefined4 *)(lVar2 + 0x7c) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x80) = 3;
  *(undefined4 *)(lVar2 + 0x84) = 2;
  *(undefined4 *)(lVar2 + 0x88) = 5;
  *(undefined4 *)(lVar2 + 0x8c) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x90) = 3;
  *(undefined4 *)(lVar2 + 0x94) = 7;
  *(undefined4 *)(lVar2 + 0x98) = 2;
  *(undefined4 *)(lVar2 + 0x9c) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0xa0) = 3;
  *(undefined4 *)(lVar2 + 0xa4) = 10;
  *(undefined4 *)(lVar2 + 0xa8) = 7;
  *(undefined4 *)(lVar2 + 0xac) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0xb0) = 10;
  *(undefined4 *)(lVar2 + 0xb4) = 6;
  *(undefined4 *)(lVar2 + 0xb8) = 7;
  *(undefined4 *)(lVar2 + 0xbc) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0xc0) = 6;
  *(undefined4 *)(lVar2 + 0xc4) = 0xb;
  *(undefined4 *)(lVar2 + 200) = 7;
  *(undefined4 *)(lVar2 + 0xcc) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(lVar2 + 0xd0) = 6;
  *(undefined4 *)(lVar2 + 0xd8) = 0xb;
  *(undefined4 *)(lVar2 + 0xdc) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0xe0) = 6;
  *(undefined8 *)(lVar2 + 0xe4) = 1;
  *(undefined4 *)(lVar2 + 0xec) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0xf0) = 10;
  *(undefined4 *)(lVar2 + 0xf4) = 1;
  *(undefined4 *)(lVar2 + 0xf8) = 6;
  *(undefined4 *)(lVar2 + 0xfc) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(lVar2 + 0x100) = 0xb;
  *(undefined4 *)(lVar2 + 0x108) = 9;
  *(undefined4 *)(lVar2 + 0x10c) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x110) = 2;
  *(undefined4 *)(lVar2 + 0x114) = 0xb;
  *(undefined4 *)(lVar2 + 0x118) = 9;
  *(undefined4 *)(lVar2 + 0x11c) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x120) = 5;
  *(undefined4 *)(lVar2 + 0x124) = 2;
  *(undefined4 *)(lVar2 + 0x128) = 9;
  *(undefined4 *)(lVar2 + 300) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x130) = 0xb;
  *(undefined4 *)(lVar2 + 0x134) = 2;
  *(undefined4 *)(lVar2 + 0x138) = 7;
  *(undefined4 *)(lVar2 + 0x13c) = 0xffffffff;
  return;
}



// FUNCTION 1437984f0 FUN_1437984f0 body=29 status=ok
// SIG undefined FUN_1437984f0(void)

undefined8 FUN_1437984f0(int *param_1)

{
  if (*param_1 != param_1[1]) {
    if ((*param_1 != param_1[2]) && (param_1[1] != param_1[2])) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143798510 FUN_143798510 body=687 status=ok
// SIG undefined FUN_143798510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143798510(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6,float param_7)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong local_res18;
  float local_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  iVar3 = (int)param_1[1];
  lVar14 = (longlong)iVar3;
  uVar6 = FUN_143703a50();
  uVar10 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  if ((int)uVar10 < iVar3) {
    iVar5 = uVar10 * 2;
    iVar4 = iVar3;
    if (iVar3 < iVar5) {
      iVar4 = iVar5;
    }
    FUN_14370c310(uVar6,param_3,iVar4,4);
  }
  uVar12 = 0;
  *(int *)(param_3 + 1) = iVar3;
  fVar17 = param_7 * _DAT_1467f07e0;
  fVar18 = param_7 * fRam00000001467f07e4;
  fVar19 = param_7 * fRam00000001467f07e8;
  fVar20 = param_7 * fRam00000001467f07ec;
  *(int *)(param_4 + 1) = iVar3 + 4;
  lVar11 = lVar14;
  uVar9 = uVar12;
  uVar16 = uVar12;
  if (0 < iVar3) {
    do {
      pfVar15 = (float *)(*param_1 + uVar16);
      local_78 = *pfVar15 - fVar17;
      fStack_74 = pfVar15[1] - fVar18;
      uStack_70 = CONCAT44(pfVar15[3] - fVar20,pfVar15[2] - fVar19);
      pfVar15 = (float *)(*param_1 + uVar16);
      local_68 = CONCAT44(fVar18 + pfVar15[1],fVar17 + *pfVar15);
      uStack_60 = CONCAT44(fVar20 + pfVar15[3],fVar19 + pfVar15[2]);
      FUN_143df9900((longlong)(int)uVar9 * 0x20 + *param_4,&local_78,uVar9);
      lVar11 = lVar11 + -1;
      uVar9 = (ulonglong)((int)uVar9 + 1);
      uVar16 = uVar16 + 0x10;
    } while (lVar11 != 0);
  }
  puVar7 = (undefined4 *)(lVar14 * 0x20 + *param_4);
  fStack_74 = NAN;
  uStack_70 = 0x7fffffff;
  local_68 = 0;
  uStack_60 = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  local_78 = -NAN;
  *puVar7 = 0xffffffff;
  puVar7[1] = 0x7fffffff;
  puVar7[2] = 0x7fffffff;
  puVar7[3] = 0;
  puVar7[8] = 0xffffffff;
  puVar7[9] = 0x7fffffff;
  puVar7[10] = 0x7fffffff;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0xffffffff;
  puVar7[0x11] = 0x7fffffff;
  puVar7[0x12] = 0x7fffffff;
  puVar7[0x13] = 0;
  puVar7[0x14] = 0;
  puVar7[0x15] = 0;
  puVar7[0x16] = 0;
  puVar7[0x17] = 0;
  puVar7[0x18] = 0xffffffff;
  puVar7[0x19] = 0x7fffffff;
  puVar7[0x1a] = 0x7fffffff;
  puVar7[0x1b] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1f] = 0;
  FUN_143df9b50(*param_4,iVar3,param_5,param_6);
  if (0 < lVar14) {
    lVar11 = 1;
    local_res18 = lVar14;
    do {
      iVar3 = *(int *)(*param_4 + 0xc + uVar12);
      if (iVar3 != -1) {
        pfVar15 = (float *)((longlong)iVar3 * 0x10 + *param_1);
        lVar2 = (longlong)iVar3 * 4;
        *(int *)(lVar2 + *param_3) = (int)param_2[1];
        uVar6 = FUN_143703a50();
        if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar6,param_2,0x10);
        }
        fVar17 = pfVar15[1];
        fVar18 = pfVar15[2];
        fVar19 = pfVar15[3];
        pfVar8 = (float *)((longlong)(int)param_2[1] * 0x10 + *param_2);
        *pfVar8 = *pfVar15;
        pfVar8[1] = fVar17;
        pfVar8[2] = fVar18;
        pfVar8[3] = fVar19;
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        uVar9 = uVar12;
        for (lVar13 = lVar11; lVar13 < lVar14; lVar13 = lVar13 + 1) {
          uVar9 = uVar9 + 0x20;
          puVar1 = (uint *)(*param_4 + uVar9);
          if (*(uint *)(*param_4 + 0x10 + uVar12) < *puVar1) break;
          uVar10 = puVar1[3];
          if ((uVar10 != 0xffffffff) &&
             (pfVar8 = (float *)(*param_1 + (longlong)(int)uVar10 * 0x10),
             (pfVar15[1] - pfVar8[1]) * (pfVar15[1] - pfVar8[1]) +
             (*pfVar15 - *pfVar8) * (*pfVar15 - *pfVar8) +
             (pfVar15[2] - pfVar8[2]) * (pfVar15[2] - pfVar8[2]) <= param_7 * param_7)) {
            *(undefined4 *)(*param_3 + (longlong)(int)uVar10 * 4) =
                 *(undefined4 *)(lVar2 + *param_3);
            *(undefined4 *)(*param_4 + 0xc + uVar9) = 0xffffffff;
          }
        }
      }
      lVar11 = lVar11 + 1;
      uVar12 = uVar12 + 0x20;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  return;
}



// FUNCTION 1437987c0 FUN_1437987c0 body=697 status=ok
// SIG undefined FUN_1437987c0(void)

void FUN_1437987c0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint local_res8 [2];
  undefined8 local_78;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  undefined4 local_40;
  uint local_3c;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  undefined8 local_28;
  uint local_20;
  uint local_1c;
  
  uVar4 = 0;
  local_res8[0] = *(int *)(param_1 + 0x20) + 4;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0x80000000;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0x80000000;
  uVar2 = FUN_143703a50();
  local_20 = local_res8[0];
  local_28 = uVar4;
  if (local_res8[0] != 0) {
    local_28 = FUN_143702d60(uVar2,0x20,local_res8);
  }
  local_1c = 0x80000000;
  if (local_res8[0] != 0) {
    local_1c = local_res8[0];
  }
  local_68 = 0;
  local_res8[0] = *(int *)(param_1 + 0x20) + 4;
  local_60 = 0;
  local_5c = 0x80000000;
  uVar3 = FUN_143703a50();
  uVar1 = local_res8[0];
  uVar2 = uVar4;
  if (local_res8[0] != 0) {
    uVar2 = FUN_143702d60(uVar3,8,local_res8);
  }
  local_60 = uVar1;
  local_5c = 0x80000000;
  if (local_res8[0] != 0) {
    local_5c = local_res8[0];
  }
  local_78 = 0;
  local_res8[0] = *(int *)(param_1 + 0x20) + 4;
  local_70 = 0;
  local_6c = 0x80000000;
  local_68 = uVar2;
  uVar2 = FUN_143703a50();
  uVar1 = local_res8[0];
  if (local_res8[0] != 0) {
    uVar4 = FUN_143702d60(uVar2,0x20,local_res8);
  }
  local_70 = uVar1;
  local_6c = 0x80000000;
  if (local_res8[0] != 0) {
    local_6c = local_res8[0];
  }
  local_78 = uVar4;
  FUN_143796bf0(param_1,param_2,0,&local_38,&local_48,&local_58,&local_28,&local_68,&local_78);
  uVar2 = FUN_143703a50();
  local_70 = 0;
  if (-1 < (int)local_6c) {
    FUN_143702e10(uVar2,local_78,0x20,local_6c & 0x3fffffff);
  }
  local_78 = 0;
  local_6c = 0x80000000;
  uVar2 = FUN_143703a50();
  local_60 = 0;
  if (-1 < (int)local_5c) {
    FUN_143702e10(uVar2,local_68,8,local_5c & 0x3fffffff);
  }
  local_68 = 0;
  local_5c = 0x80000000;
  uVar2 = FUN_143703a50();
  if (-1 < (int)local_1c) {
    FUN_143702e10(uVar2,local_28,0x20,local_1c & 0x3fffffff);
  }
  uVar2 = FUN_143703a50();
  local_50 = 0;
  if (-1 < (int)local_4c) {
    FUN_143702e10(uVar2,local_58,0x10,local_4c & 0x3fffffff);
  }
  local_58 = 0;
  local_4c = 0x80000000;
  uVar2 = FUN_143703a50();
  local_40 = 0;
  if (-1 < (int)local_3c) {
    FUN_143702e10(uVar2,local_48,4,local_3c & 0x3fffffff);
  }
  local_48 = 0;
  local_3c = 0x80000000;
  uVar2 = FUN_143703a50();
  local_30 = 0;
  if (-1 < (int)local_2c) {
    FUN_143702e10(uVar2,local_38,4,local_2c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143798a80 FUN_143798a80 body=241 status=ok
// SIG undefined FUN_143798a80(void)

void FUN_143798a80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = hkSkinnedRefMeshShape::vftable;
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  param_1[3] = 0;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar1,param_1[4],2,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_143716650(param_1 + 8);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 7) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) {
    FUN_143702e10(uVar1,param_1[6],0x10,*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar1,param_1[4],2,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143798b80 FUN_143798b80 body=9 status=ok
// SIG undefined FUN_143798b80(void)

ulonglong FUN_143798b80(longlong param_1)

{
  return *(ulonglong *)(param_1 + 0x40) & 0xfffffffffffffffe;
}



// FUNCTION 143798b90 FUN_143798b90 body=9 status=ok
// SIG undefined FUN_143798b90(void)

void FUN_143798b90(longlong param_1)

{
  FUN_1437166c0(param_1 + 0x40);
  return;
}


