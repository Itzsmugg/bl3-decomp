// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1422341f0 GetWorldSettings body=40 status=ok
// SIG undefined GetWorldSettings(void)

void AActor::GetWorldSettings(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    UWorld::GetWorldSettings(lVar1,0,1);
    return;
  }
  return;
}



// FUNCTION 142234220 GetWorldTimerManager body=49 status=ok
// SIG undefined GetWorldTimerManager(void)

undefined8 AActor::GetWorldTimerManager(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (*(longlong *)(lVar1 + 400) != 0) {
    return *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
  }
  return *(undefined8 *)(lVar1 + 0x3f8);
}



// FUNCTION 142234260 HandleInteriorVolumes body=694 status=ok
// SIG undefined HandleInteriorVolumes(void)

void FActiveSound::HandleInteriorVolumes(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58 [2];
  uint local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  if (((*(byte *)(param_1 + 0x9a) & 0x20) == 0) ||
     (fVar1 = *(float *)(param_3 + 0x30) - *(float *)(param_1 + 0x168),
     fVar2 = *(float *)(param_3 + 0x34) - *(float *)(param_1 + 0x16c),
     fVar3 = *(float *)(param_3 + 0x38) - *(float *)(param_1 + 0x170),
     0.0001 < fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3)) {
    local_50 = local_50 | 1;
    local_48 = 0;
    uStack_40 = 0;
    local_34 = 0x40000000;
    local_38 = 0x3f000000;
    local_4c = 0;
    FInteriorSettings::FInteriorSettings(&local_30);
    local_68 = *(undefined4 *)(param_3 + 0x30);
    local_64 = *(undefined4 *)(param_3 + 0x34);
    local_60 = *(undefined4 *)(param_3 + 0x38);
    FUN_1422cad20(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 8),&local_68,local_58);
    *(byte *)(param_1 + 0x9a) = *(byte *)(param_1 + 0x9a) | 0x20;
    *(undefined8 *)(param_1 + 0x420) = local_30;
    *(undefined8 *)(param_1 + 0x428) = uStack_28;
    *(undefined8 *)(param_1 + 0x430) = local_20;
    *(undefined8 *)(param_1 + 0x438) = uStack_18;
    *(undefined4 *)(param_1 + 0x440) = local_10;
    *(undefined4 *)(param_1 + 0x444) = local_58[0];
  }
  if (*(double *)(param_1 + 0x448) <= *(double *)(param_2 + 0x68) &&
      *(double *)(param_2 + 0x68) != *(double *)(param_1 + 0x448)) {
    *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x458);
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x45c);
    *(undefined8 *)(param_1 + 0x448) = DAT_1468b5a78;
  }
  if ((*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x444)) ||
     ((*(byte *)(param_1 + 0x98) & 2) == 0)) {
    fVar1 = (1.0 - *(float *)(param_1 + 0x450)) * *(float *)(param_2 + 0x90) +
            *(float *)(param_1 + 0x450);
    *(float *)(param_1 + 0x458) = fVar1;
    *(float *)(param_3 + 0x74) = fVar1;
    fVar1 = *(float *)(param_1 + 0x454);
    fVar2 = (20000.0 - fVar1) * *(float *)(param_2 + 0x94);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x450);
    if ((*(byte *)(param_1 + 0x420) & 1) == 0) {
      fVar1 = (*(float *)(param_1 + 0x434) - fVar1) * *(float *)(param_2 + 0x90) + fVar1;
      *(float *)(param_1 + 0x458) = fVar1;
      fVar1 = fVar1 * ((*(float *)(param_2 + 0x40) - *(float *)(param_1 + 0x450)) *
                       *(float *)(param_2 + 0x98) + *(float *)(param_1 + 0x450));
      *(float *)(param_1 + 0x458) = fVar1;
      *(float *)(param_3 + 0x74) = fVar1;
      fVar1 = *(float *)(param_1 + 0x454);
      fVar2 = (*(float *)(param_1 + 0x43c) - fVar1) * *(float *)(param_2 + 0x94) + fVar1;
      fVar1 = (*(float *)(param_2 + 0x48) - fVar1) * *(float *)(param_2 + 0x9c) + fVar1;
      if (fVar1 <= fVar2) {
        fVar2 = fVar1;
      }
      goto LAB_1422344f1;
    }
    fVar1 = (*(float *)(param_2 + 0x40) - fVar1) * *(float *)(param_2 + 0x98) + fVar1;
    *(float *)(param_1 + 0x458) = fVar1;
    *(float *)(param_3 + 0x74) = fVar1;
    fVar1 = *(float *)(param_1 + 0x454);
    fVar2 = (*(float *)(param_2 + 0x48) - fVar1) * *(float *)(param_2 + 0x9c);
  }
  fVar2 = fVar2 + fVar1;
LAB_1422344f1:
  *(float *)(param_1 + 0x45c) = fVar2;
  *(float *)(param_3 + 0x198) = fVar2;
  return;
}



// FUNCTION 142234520 FUN_142234520 body=640 status=ok
// SIG undefined FUN_142234520(void)

ulonglong FUN_142234520(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
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
  
  puVar7 = (undefined1 *)register0x00000020;
  if ((*(byte *)(param_1 + 0x92) & 1) != 0) {
    plVar2 = (longlong *)(param_1 + 0x2b0);
    uStack_84 = 1;
    uVar3 = *(uint *)(param_1 + 0x2d8);
    puVar1 = (uint *)(param_1 + 0x2c0);
    local_88 = 0;
    uStack_74 = 0;
    iStack_70 = 0;
    if (uVar3 != 0) {
      puVar15 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar4 = *puVar15;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar4 == 0) {
        lVar13 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        iVar10 = local_88 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar10;
        if (bVar5) goto LAB_1422345fd;
        uVar4 = puVar15[lVar13 + 1];
      }
      uStack_84 = uVar4 - 1 & uVar4 ^ uVar4;
      iVar10 = 0x1f;
      if (uStack_84 != 0) {
        for (; uStack_84 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_84 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_74 = (iStack_70 - iVar10) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_1422345fd:
        uStack_74 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x2d8);
    uStack_50 = 0xffffffff;
    uStack_4c = uStack_74;
    local_48 = CONCAT44(uStack_6c,iStack_70);
    uStack_38 = CONCAT44(uStack_84,local_88);
    uVar9 = 0;
    uVar14 = uVar4 & 0xffffffe0;
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
      puVar15 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5;
      uVar12 = puVar15[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar10 = (int)uVar4 >> 5;
      uVar9 = (ulonglong)uVar6;
      while (uVar12 == 0) {
        uVar11 = (ulonglong)iVar10;
        uVar14 = uVar14 + 0x20;
        if ((int)uVar6 <= iVar10) goto LAB_1422346d5;
        iVar10 = iVar10 + 1;
        uVar9 = uVar11;
        uVar12 = puVar15[uVar11 + 1];
      }
      uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
      iVar10 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_74 = (uVar14 - iVar10) + 0x1f;
      uVar9 = (ulonglong)uStack_74;
      if ((int)uVar3 < (int)uStack_74) {
LAB_1422346d5:
        uStack_74 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      puVar7 = (undefined1 *)CONCAT71((int7)(uVar9 >> 8),!bVar5);
      if (bVar5) break;
      lVar13 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
      if (lVar13 != 0) {
        lVar8 = FUN_14290f3e0();
        iVar10 = *(int *)(lVar8 + 0x90);
        uVar9 = (longlong)iVar10;
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < iVar10) ||
           (uVar9 = *(ulonglong *)(*(longlong *)(lVar13 + 0x10) + 0x88),
           *(longlong *)(uVar9 + (longlong)iVar10 * 8) != lVar8 + 0x88)) {
          uVar9 = uVar9 & 0xffffffffffffff00;
          bVar5 = false;
        }
        else {
          uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
          bVar5 = true;
        }
        if ((bVar5) && ((*(byte *)(lVar13 + 0xba) & 4) != 0)) {
          return CONCAT71((int7)(uVar9 >> 8),1);
        }
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      uVar9 = TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    }
  }
  return (ulonglong)puVar7 & 0xffffffffffffff00;
}



// FUNCTION 1422347a0 FUN_1422347a0 body=649 status=ok
// SIG undefined FUN_1422347a0(void)

ulonglong FUN_1422347a0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
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
  
  puVar7 = (undefined1 *)register0x00000020;
  if ((*(byte *)(param_1 + 0x92) & 1) != 0) {
    plVar2 = (longlong *)(param_1 + 0x2b0);
    uStack_84 = 1;
    uVar3 = *(uint *)(param_1 + 0x2d8);
    puVar1 = (uint *)(param_1 + 0x2c0);
    local_88 = 0;
    uStack_74 = 0;
    iStack_70 = 0;
    if (uVar3 != 0) {
      puVar15 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar4 = *puVar15;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar4 == 0) {
        lVar13 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        iVar10 = local_88 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar10;
        if (bVar5) goto LAB_14223487d;
        uVar4 = puVar15[lVar13 + 1];
      }
      uStack_84 = uVar4 - 1 & uVar4 ^ uVar4;
      iVar10 = 0x1f;
      if (uStack_84 != 0) {
        for (; uStack_84 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_84 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_74 = (iStack_70 - iVar10) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_14223487d:
        uStack_74 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x2d8);
    uStack_50 = 0xffffffff;
    uStack_4c = uStack_74;
    local_48 = CONCAT44(uStack_6c,iStack_70);
    uStack_38 = CONCAT44(uStack_84,local_88);
    uVar9 = 0;
    uVar14 = uVar4 & 0xffffffe0;
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
      puVar15 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5;
      uVar12 = puVar15[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar10 = (int)uVar4 >> 5;
      uVar9 = (ulonglong)uVar6;
      while (uVar12 == 0) {
        uVar11 = (ulonglong)iVar10;
        uVar14 = uVar14 + 0x20;
        if ((int)uVar6 <= iVar10) goto LAB_142234955;
        iVar10 = iVar10 + 1;
        uVar9 = uVar11;
        uVar12 = puVar15[uVar11 + 1];
      }
      uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
      iVar10 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_74 = (uVar14 - iVar10) + 0x1f;
      uVar9 = (ulonglong)uStack_74;
      if ((int)uVar3 < (int)uStack_74) {
LAB_142234955:
        uStack_74 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      puVar7 = (undefined1 *)CONCAT71((int7)(uVar9 >> 8),!bVar5);
      if (bVar5) break;
      lVar13 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
      if (lVar13 != 0) {
        lVar8 = FUN_14290f3e0();
        iVar10 = *(int *)(lVar8 + 0x90);
        uVar9 = (longlong)iVar10;
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < iVar10) ||
           (uVar9 = *(ulonglong *)(*(longlong *)(lVar13 + 0x10) + 0x88),
           *(longlong *)(uVar9 + (longlong)iVar10 * 8) != lVar8 + 0x88)) {
          uVar9 = uVar9 & 0xffffffffffffff00;
          bVar5 = false;
        }
        else {
          uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
          bVar5 = true;
        }
        if (((bVar5) && ((*(byte *)(lVar13 + 0xba) & 4) != 0)) &&
           ((*(byte *)(lVar13 + 0x2e8) & 8) != 0)) {
          return CONCAT71((int7)(uVar9 >> 8),1);
        }
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      uVar9 = TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    }
  }
  return (ulonglong)puVar7 & 0xffffffffffffff00;
}



// FUNCTION 142234a30 FUN_142234a30 body=151 status=ok
// SIG undefined FUN_142234a30(void)

undefined8 FUN_142234a30(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 0;
  }
  lVar4 = UNavAreaBase::GetPrivateStaticClass();
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar2 = lVar1;
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if (lVar2 == lVar4) break;
    lVar2 = *(longlong *)(lVar2 + 0x30);
  }
  if (lVar1 == 0) {
    return 0;
  }
  if (lVar1 != 0) {
    plVar5 = (longlong *)UNavAreaBase::GetPrivateStaticClass();
    plVar7 = *(longlong **)(param_1 + 0x28);
    for (plVar6 = plVar7; plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[6]) {
      if (plVar6 == plVar5) goto LAB_142234a93;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_142234a93:
  plVar6 = (longlong *)plVar7[0x1f];
  if (plVar6 == (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    plVar6 = (longlong *)plVar7[0x1f];
  }
  cVar3 = (**(code **)(*plVar6 + 0x280))();
  if (cVar3 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 142234b20 FUN_142234b20 body=972 status=ok
// SIG undefined FUN_142234b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_142234b20(longlong *param_1,int param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  ulonglong uVar13;
  code *pcVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_1a8 [32];
  char local_188 [4];
  int local_184;
  code *local_178;
  char *pcStack_170;
  undefined1 local_168 [8];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  iVar10 = 0x7fffffff;
  if (param_2 != 0) {
    iVar10 = param_2;
  }
  local_184 = iVar10;
  uVar5 = (**(code **)(*param_1 + 0x148))();
  iVar12 = 0;
  local_160 = uVar5;
  if (((((*(byte *)((longlong)param_1 + 0x91) & 8) != 0) ||
       (cVar3 = UWorld::IsGameWorld(uVar5), cVar3 == '\0')) &&
      (cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30), cVar3 == '\0')) &&
     ((*(byte *)((longlong)param_1 + 0x93) & 0x10) == 0)) {
    pcStack_170 = local_188;
    local_188[0] = '\0';
    local_178 = FUN_142224910;
    lVar6 = FUN_1415d8310(&local_178,&DAT_1465318e0);
    (**(code **)(*param_1 + 0x540))(param_1,1);
    *(byte *)((longlong)param_1 + 0x93) = *(byte *)((longlong)param_1 + 0x93) | 0x10;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    iVar10 = local_184;
  }
  plVar1 = (longlong *)param_1[0x2d];
  if (((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 0x17) & 1) == 0)) &&
     ((*(byte *)((longlong)plVar1 + 0xb9) & 4) != 0)) {
    (**(code **)(*plVar1 + 0x70))(plVar1,0);
    FUN_14234b270(param_1[0x2d],uVar5);
  }
  uVar13 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  uVar18 = 0;
  FUN_140a4ca80(param_1,local_108,0);
  uVar15 = local_40 & 0xffffffff;
  local_158 = 0;
  local_150 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0xffffffff;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  puVar16 = local_48;
  uVar17 = uVar13;
  uVar19 = uVar13;
  uVar4 = (uint)local_40;
  if (0 < (int)(uint)local_40) {
    do {
      uVar4 = (uint)uVar15;
      pcVar14 = (code *)0x0;
      uVar18 = (uint)uVar19;
      if (iVar10 <= (int)uVar13) break;
      puVar7 = local_108;
      if (puVar16 != (undefined1 *)0x0) {
        puVar7 = puVar16;
      }
      pcVar11 = *(code **)(puVar7 + uVar17);
      if ((((byte)pcVar11[0xb8] & 1) == 0) && (((byte)pcVar11[0xb9] & 4) != 0)) {
        iVar10 = *(int *)(pcVar11 + 0xc);
        pcVar8 = pcVar14;
        if (iVar10 < (int)DAT_1469e91c4) {
          uVar9 = iVar10 >> 0x1f & 0xffff;
          uVar4 = iVar10 + uVar9;
          pcVar8 = (code *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                           (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18);
        }
        if ((*(uint *)(pcVar8 + 8) >> 0x1d & 1) == 0) {
          lVar6 = FUN_1429ff160();
          if ((*(int *)(*(longlong *)(pcVar11 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pcVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          pcVar8 = pcVar11;
          if (bVar2) {
            while (((pcVar8 = *(code **)(pcVar8 + 400), pcVar8 != (code *)0x0 &&
                    (*(longlong *)(pcVar8 + 0x118) == *(longlong *)(pcVar11 + 0x118))) &&
                   (((byte)pcVar8[0xb8] & 1) == 0))) {
              if (((byte)pcVar8[0xb9] & 4) != 0) {
                uVar4 = *(uint *)(pcVar8 + 0xc);
                if ((int)uVar4 < (int)DAT_1469e91c4) {
                  uVar9 = uVar4 & 0xffff;
                  if ((int)uVar4 < 0) {
                    uVar4 = uVar4 + 0xffff;
                    uVar9 = uVar9 - 0x10000;
                  }
                  lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                          (longlong)(int)uVar9 * 0x18;
                }
                else {
                  lVar6 = 0;
                }
                if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
                  pcVar14 = pcVar8;
                }
              }
            }
            if (pcVar14 != (code *)0x0) {
              local_188[0] = '\0';
              local_178 = pcVar14;
              FUN_14058c5a0(&local_158,local_168,&local_178,local_188);
              if (local_188[0] != '\0') {
                uVar4 = (uint)local_40;
                break;
              }
              iVar12 = iVar12 + -1;
              uVar17 = uVar17 - 8;
              uVar18 = uVar18 - 1;
              pcVar11 = pcVar14;
            }
          }
          (**(code **)(*(longlong *)pcVar11 + 0x70))(pcVar11,0);
          FUN_14234b270(pcVar11,local_160);
          uVar15 = local_40 & 0xffffffff;
          uVar13 = (ulonglong)((int)uVar13 + 1);
          puVar16 = local_48;
        }
      }
      uVar18 = uVar18 + 1;
      uVar19 = (ulonglong)uVar18;
      iVar12 = iVar12 + 1;
      uVar17 = uVar17 + 8;
      uVar4 = (uint)uVar15;
      iVar10 = local_184;
    } while (iVar12 < (int)uVar4);
  }
  if (uVar4 == uVar18) {
    (**(code **)(*param_1 + 0x4d0))(param_1);
  }
  local_110 = 0;
  if (local_118 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_158);
  if (local_48 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return uVar4 == uVar18;
}



// FUNCTION 142234ef0 InitializeAreaClass body=67 status=ok
// SIG undefined InitializeAreaClass(void)

void FNavigationLinkBase::InitializeAreaClass(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = UNavAreaBase::GetPrivateStaticClass();
    lVar3 = *(longlong *)(param_1 + 0x28);
    for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_142234f22;
    }
  }
  lVar3 = 0;
LAB_142234f22:
  FWeakObjectPtr::operator=(param_1 + 0x30,lVar3);
  return;
}



// FUNCTION 142234f40 InitializeAreaClass body=220 status=ok
// SIG undefined InitializeAreaClass(void)

void UNavLinkDefinition::InitializeAreaClass(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if ((*(uint *)(param_1 + 0x48) & 1) == 0) {
    iVar5 = 0;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 1;
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(lVar1 + 0x28 + lVar6) != 0) {
          lVar3 = UNavAreaBase::GetPrivateStaticClass();
          lVar4 = *(longlong *)(lVar1 + 0x28 + lVar6);
          for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
            if (lVar2 == lVar3) goto LAB_142234fa0;
          }
        }
        lVar4 = 0;
LAB_142234fa0:
        FWeakObjectPtr::operator=(lVar1 + 0x30 + lVar6,lVar4);
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x50;
      } while (iVar5 < *(int *)(param_1 + 0x30));
    }
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x38);
        if (*(longlong *)(lVar1 + 0x28 + lVar6) != 0) {
          lVar3 = UNavAreaBase::GetPrivateStaticClass();
          lVar4 = *(longlong *)(lVar1 + 0x28 + lVar6);
          for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
            if (lVar2 == lVar3) goto LAB_142234ff0;
          }
        }
        lVar4 = 0;
LAB_142234ff0:
        FWeakObjectPtr::operator=(lVar1 + 0x30 + lVar6,lVar4);
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x68;
      } while (iVar5 < *(int *)(param_1 + 0x40));
    }
  }
  return;
}



// FUNCTION 142235020 FUN_142235020 body=292 status=ok
// SIG undefined FUN_142235020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142235020(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_108 [32];
  longlong local_e8 [24];
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar4 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140a4ca80(param_1,local_e8,0);
  plVar3 = local_e8;
  if (local_28 != (longlong *)0x0) {
    plVar3 = local_28;
  }
  uVar5 = (longlong)(int)local_20 & 0x1fffffffffffffff;
  if (plVar3 + (int)local_20 < plVar3) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*plVar3;
      if ((*(byte *)(plVar1 + 0x17) & 1) != 0) {
        if (((*(byte *)((longlong)plVar1 + 0xba) & 2) != 0) &&
           (cVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1), cVar2 == '\0')) {
          (**(code **)(*plVar1 + 0x280))(plVar1,1);
        }
        if ((*(byte *)(plVar1 + 0x19) & 0x11) == 1) {
          (**(code **)(*plVar1 + 0x330))(plVar1);
        }
      }
      plVar3 = plVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar5);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142235150 FUN_142235150 body=224 status=ok
// SIG undefined FUN_142235150(void)

undefined8 FUN_142235150(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfd;
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 4;
  FUN_14288e3d0(param_1 + 0x28,0);
  *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x128) = 0x103;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(byte *)(param_1 + 0x92) = *(byte *)(param_1 + 0x92) & 0xbf;
  *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) & 0xdf;
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 0x80;
  *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) | 0x42;
  *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) & 0xfe;
  *(undefined8 *)(param_1 + 0x120) = 0x11a;
  *(undefined4 *)(param_1 + 0x148) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x140) = 0x42c80000;
  *(byte *)(param_1 + 0x92) = *(byte *)(param_1 + 0x92) & 0xdd | 1;
  *(undefined4 *)(param_1 + 0x144) = 0x40000000;
  *(undefined4 *)(param_1 + 0x138) = 0x4d5693a4;
  *(byte *)(param_1 + 0x400) = *(byte *)(param_1 + 0x400) | 1;
  *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) & 0xdf | 0x81;
  *(undefined1 *)(param_1 + 0x12a) = 1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return 0;
}



// FUNCTION 142235230 FUN_142235230 body=129 status=ok
// SIG undefined FUN_142235230(void)

undefined8 FUN_142235230(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = 0;
  if (param_1[0x24] == 0x11a) {
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x38);
    }
  }
  else {
    lVar2 = FUN_142873bb0(DAT_146b17150,lVar1);
  }
  if ((lVar2 == 0) && ((lVar1 == 0 || (lVar2 = *(longlong *)(lVar1 + 0x108), lVar2 == 0)))) {
    return 0;
  }
  uVar3 = UNetDriver::GetNetMode(lVar2);
  return uVar3;
}



// FUNCTION 1422352c0 FUN_1422352c0 body=521 status=ok
// SIG undefined FUN_1422352c0(void)

float FUN_1422352c0(undefined8 param_1,float param_2,longlong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar7 = (longlong)*(int *)(param_3 + 0x38);
  fVar12 = 3.4028235e+38;
  if (lVar7 < 4) {
    lVar6 = 0;
  }
  else {
    fVar8 = *(float *)(param_3 + 0x24);
    pfVar4 = (float *)(*(longlong *)(param_3 + 0x30) + 0x28);
    fVar9 = *(float *)(param_3 + 0x28);
    lVar5 = (lVar7 - 4U >> 2) + 1;
    fVar10 = *(float *)(param_3 + 0x2c);
    lVar6 = lVar5 * 4;
    do {
      fVar11 = (pfVar4[-2] - fVar8) * (pfVar4[-2] - fVar8) +
               (pfVar4[-1] - fVar9) * (pfVar4[-1] - fVar9) + (*pfVar4 - fVar10) * (*pfVar4 - fVar10)
      ;
      if (fVar12 <= fVar11) {
        fVar11 = fVar12;
      }
      pfVar1 = pfVar4 + 0x6b;
      fVar12 = (pfVar4[0x23] - fVar9) * (pfVar4[0x23] - fVar9) +
               (pfVar4[0x22] - fVar8) * (pfVar4[0x22] - fVar8) +
               (pfVar4[0x24] - fVar10) * (pfVar4[0x24] - fVar10);
      if (fVar11 <= fVar12) {
        fVar12 = fVar11;
      }
      pfVar2 = pfVar4 + 0x6a;
      fVar11 = (pfVar4[0x47] - fVar9) * (pfVar4[0x47] - fVar9) +
               (pfVar4[0x46] - fVar8) * (pfVar4[0x46] - fVar8) +
               (pfVar4[0x48] - fVar10) * (pfVar4[0x48] - fVar10);
      pfVar3 = pfVar4 + 0x6c;
      pfVar4 = pfVar4 + 0x90;
      if (fVar12 <= fVar11) {
        fVar11 = fVar12;
      }
      fVar12 = (*pfVar1 - fVar9) * (*pfVar1 - fVar9) + (*pfVar2 - fVar8) * (*pfVar2 - fVar8) +
               (*pfVar3 - fVar10) * (*pfVar3 - fVar10);
      if (fVar11 <= fVar12) {
        fVar12 = fVar11;
      }
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (lVar6 < lVar7) {
    pfVar4 = (float *)(*(longlong *)(param_3 + 0x30) + 0x28 + lVar6 * 0x90);
    lVar7 = lVar7 - lVar6;
    do {
      fVar10 = pfVar4[-1] - *(float *)(param_3 + 0x28);
      fVar9 = pfVar4[-2] - *(float *)(param_3 + 0x24);
      fVar8 = *pfVar4 - *(float *)(param_3 + 0x2c);
      pfVar4 = pfVar4 + 0x24;
      fVar8 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
      if (fVar12 <= fVar8) {
        fVar8 = fVar12;
      }
      lVar7 = lVar7 + -1;
      fVar12 = fVar8;
    } while (lVar7 != 0);
  }
  fVar12 = (float)FRadialDamageParams::GetDamageScale(param_3 + 0x10);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  return (param_2 - *(float *)(param_3 + 0x14)) * fVar12 + *(float *)(param_3 + 0x14);
}



// FUNCTION 1422354d0 FUN_1422354d0 body=546 status=ok
// SIG undefined FUN_1422354d0(void)

void FUN_1422354d0(longlong param_1,undefined1 param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
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
  
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 0x2b0);
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
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar6) goto LAB_1422355ad;
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
LAB_1422355ad:
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
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142235673;
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
LAB_142235673:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    plVar5 = *(longlong **)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if ((plVar5 != (longlong *)0x0) && ((*(byte *)(plVar5 + 0x17) & 1) != 0)) {
      (**(code **)(*plVar5 + 0x370))(plVar5,1,param_2);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 142235700 IsActorTickEnabled body=8 status=ok
// SIG undefined IsActorTickEnabled(void)

bool AActor::IsActorTickEnabled(longlong param_1)

{
  return *(char *)(param_1 + 0x37) != '\0';
}



// FUNCTION 142235710 FUN_142235710 body=104 status=ok
// SIG undefined FUN_142235710(void)

ulonglong FUN_142235710(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    in_RAX = 0;
    if ((((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) &&
        (in_RAX = *(ulonglong *)(param_1 + 0x10), -1 < *(int *)(in_RAX + 0xb4))) &&
       ((*(byte *)(param_1 + 0x94) & 1) == 0)) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1422357b0 FUN_1422357b0 body=10 status=ok
// SIG undefined FUN_1422357b0(void)

void FUN_1422357b0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001422357b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x528))();
  return;
}



// FUNCTION 1422357c0 IsChildActor body=12 status=ok
// SIG undefined IsChildActor(void)

void AActor::IsChildActor(longlong param_1)

{
  FWeakObjectPtr::IsValid(param_1 + 0x198);
  return;
}



// FUNCTION 1422357e0 IsInLevel body=49 status=ok
// SIG undefined IsInLevel(void)

bool AActor::IsInLevel(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1429a0270();
  lVar2 = UObjectBaseUtility::GetTypedOuter(param_1,uVar1);
  return lVar2 == param_2;
}



// FUNCTION 142235820 FUN_142235820 body=200 status=ok
// SIG undefined FUN_142235820(void)

undefined8 FUN_142235820(longlong *param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = FUN_1429a0270();
  lVar4 = UObjectBaseUtility::GetTypedOuter(param_1,uVar3);
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 == *(longlong *)(lVar5 + 0x30)) {
    return 1;
  }
  if (((param_2 != '\0') && (0 < *(int *)(lVar5 + 0x90))) &&
     (lVar1 = **(longlong **)(lVar5 + 0x88), lVar1 != 0)) {
    lVar6 = ULevelStreamingPersistent::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(**(longlong **)(lVar5 + 0x88) + 0x120) == lVar4)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1422358f0 FUN_1422358f0 body=108 status=ok
// SIG undefined FUN_1422358f0(void)

undefined8 FUN_1422358f0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_1 + 0x178))); iVar3 = iVar3 + 1) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar3 * 8);
    if (lVar2 != 0) {
      lVar2 = FUN_1424efe60(lVar2,param_1);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x28) != 0)) {
        cVar1 = UInterpGroup::HasMoveTrack();
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142235980 FUN_142235980 body=655 status=ok
// SIG undefined FUN_142235980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142235980(longlong param_1,longlong param_2,longlong param_3,float *param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined8 local_18;
  float local_10;
  
  lVar6 = param_1;
  if ((*(byte *)(param_1 + 0x90) & 8) != 0) {
    return 1;
  }
  do {
    if (lVar6 == param_3) {
      return 1;
    }
    plVar5 = (longlong *)(lVar6 + 0x118);
    lVar4 = param_1;
    lVar6 = *plVar5;
  } while (*plVar5 != 0);
  do {
    if (lVar4 == param_2) {
      return 1;
    }
    plVar5 = (longlong *)(lVar4 + 0x118);
    lVar4 = *plVar5;
  } while (*plVar5 != 0);
  if (param_1 == param_3) {
    return 1;
  }
  if (param_3 == *(longlong *)(param_1 + 0x150)) {
    return 1;
  }
  if (((*(byte *)(param_1 + 0x91) & 1) != 0) &&
     (plVar5 = *(longlong **)(param_1 + 0x118), plVar5 != (longlong *)0x0)) {
    uVar3 = (**(code **)(*plVar5 + 0x468))(plVar5,param_2);
    return uVar3;
  }
  if ((*(byte *)(param_1 + 0x90) & 4) == 0) {
    plVar5 = *(longlong **)(param_1 + 0x168);
    if (((plVar5 != (longlong *)0x0) && (lVar6 = plVar5[0x32], lVar6 != 0)) &&
       (*(longlong *)(lVar6 + 0x118) != 0)) {
      if (lVar6 != 0) {
        lVar4 = FUN_142a07000();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          plVar5 = *(longlong **)(param_1 + 0x168);
          goto LAB_142235abf;
        }
      }
      plVar5 = *(longlong **)(param_1 + 0x168);
      if (*(longlong *)(plVar5[0x32] + 0x118) == *(longlong *)(param_1 + 0x118)) {
LAB_142235abf:
        uVar3 = (**(code **)(**(longlong **)(plVar5[0x32] + 0x118) + 0x468))
                          (*(longlong **)(plVar5[0x32] + 0x118),param_2,param_3,param_4);
        return uVar3;
      }
    }
    if ((((*(byte *)(param_1 + 0x80) & 1) == 0) ||
        ((plVar5 != (longlong *)0x0 && (iVar2 = (**(code **)(*plVar5 + 0x4e8))(plVar5), iVar2 != 0))
        )) && (*(longlong *)(param_1 + 0x168) != 0)) {
      plVar5 = (longlong *)FUN_14293b120();
      lVar6 = plVar5[0x1f];
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x368))(plVar5);
        lVar6 = plVar5[0x1f];
      }
      if (*(char *)(lVar6 + 0x4d5) != '\0') {
        lVar6 = *(longlong *)(param_1 + 0x168);
        if (lVar6 == 0) {
          local_18 = _DAT_1468b5d90;
          local_10 = DAT_1468b5d98;
        }
        else {
          local_18 = *(undefined8 *)(lVar6 + 0x220);
          local_10 = *(float *)(lVar6 + 0x228);
        }
        fVar8 = (float)((ulonglong)local_18 >> 0x20) - param_4[1];
        fVar7 = (float)local_18 - *param_4;
        if (*(float *)(param_1 + 0x138) <=
            fVar8 * fVar8 + fVar7 * fVar7 + (local_10 - param_4[2]) * (local_10 - param_4[2])) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142235c10 IsWaitingOnRemotePlayerdata body=12 status=ok
// SIG undefined IsWaitingOnRemotePlayerdata(void)

byte UAbilityTask::IsWaitingOnRemotePlayerdata(longlong param_1)

{
  return *(byte *)(param_1 + 0x90) >> 1 & 1;
}



// FUNCTION 142235c20 FUN_142235c20 body=649 status=ok
// SIG undefined FUN_142235c20(void)

undefined8 FUN_142235c20(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
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
  
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar4 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar8 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar8;
      if (bVar5) goto LAB_142235cfd;
      uVar4 = puVar12[lVar10 + 1];
    }
    uStack_84 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar8 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_74 = (iStack_70 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142235cfd:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar11 = uVar4 & 0xffffffe0;
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
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar8 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_142235dd5;
      uVar9 = puVar12[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar9 = uVar9 - 1 & uVar9 ^ uVar9;
    iVar8 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_74 = (uVar11 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142235dd5:
      uStack_74 = uVar3;
    }
  }
  do {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      return 0;
    }
    lVar10 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (lVar10 != 0) {
      lVar7 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (((bVar5) && (0 < *(int *)(lVar10 + 0x3a8))) &&
         (cVar6 = FUN_142390930(lVar10,param_2), cVar6 != '\0')) {
        return 1;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  } while( true );
}



// FUNCTION 142235eb0 GetCastShadowAsMasked body=10 status=ok
// SIG undefined GetCastShadowAsMasked(void)

byte UMaterialInterface::GetCastShadowAsMasked(longlong param_1)

{
  return *(byte *)(param_1 + 0x94) & 1;
}



// FUNCTION 142235ec0 FUN_142235ec0 body=26 status=ok
// SIG undefined FUN_142235ec0(void)

bool FUN_142235ec0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FRenderCommandFence::IsFenceComplete(param_1 + 0x3a8);
  return cVar1 != '\0';
}



// FUNCTION 142235ef0 FUN_142235ef0 body=52 status=ok
// SIG undefined FUN_142235ef0(void)

undefined8 FUN_142235ef0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 0x17) & 1) != 0)) {
    iVar2 = (**(code **)(*plVar1 + 0x4e8))();
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142235f30 FUN_142235f30 body=27 status=ok
// SIG undefined FUN_142235f30(void)

longlong FUN_142235f30(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x24e) == '\x02')) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 142235f50 FUN_142235f50 body=27 status=ok
// SIG undefined FUN_142235f50(void)

longlong FUN_142235f50(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x24e) == '\0')) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 142235f70 FUN_142235f70 body=156 status=ok
// SIG undefined FUN_142235f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_142235f70(longlong param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined8 local_18;
  float local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x220);
    local_10 = *(float *)(lVar1 + 0x228);
  }
  fVar3 = (float)((ulonglong)local_18 >> 0x20) - param_2[1];
  fVar2 = (float)local_18 - *param_2;
  return CONCAT31((int3)((uint)local_10 >> 8),
                  fVar3 * fVar3 + fVar2 * fVar2 + (local_10 - param_2[2]) * (local_10 - param_2[2])
                  < *(float *)(param_1 + 0x138));
}



// FUNCTION 142236010 FUN_142236010 body=140 status=ok
// SIG undefined FUN_142236010(void)

void FUN_142236010(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  lVar1 = 0;
  if ((char)param_3 != '\0') {
    lVar1 = param_4;
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    local_a0 = *(undefined4 *)(param_2 + 1);
    local_a8 = *param_2;
    FUN_142380500(*(longlong *)(param_1 + 0x168),&local_a8,param_3,lVar1,param_5);
    return;
  }
  if (lVar1 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    FUN_140729f20(lVar1,local_98);
  }
  return;
}



// FUNCTION 1422360a0 FUN_1422360a0 body=140 status=ok
// SIG undefined FUN_1422360a0(void)

void FUN_1422360a0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  lVar1 = 0;
  if ((char)param_3 != '\0') {
    lVar1 = param_4;
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    local_a0 = *(undefined4 *)(param_2 + 1);
    local_a8 = *param_2;
    FUN_1423809e0(*(longlong *)(param_1 + 0x168),&local_a8,param_3,lVar1,param_5);
    return;
  }
  if (lVar1 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    FUN_140729f20(lVar1,local_98);
  }
  return;
}



// FUNCTION 142236130 FUN_142236130 body=120 status=ok
// SIG undefined FUN_142236130(void)

void FUN_142236130(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  lVar1 = 0;
  if ((char)param_3 != '\0') {
    lVar1 = param_4;
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_142380bd0(*(longlong *)(param_1 + 0x168),param_2,param_3,lVar1);
    return;
  }
  if (lVar1 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    FUN_140729f20(lVar1,local_98);
  }
  return;
}



// FUNCTION 1422361b0 FUN_1422361b0 body=140 status=ok
// SIG undefined FUN_1422361b0(void)

void FUN_1422361b0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  lVar1 = 0;
  if ((char)param_3 != '\0') {
    lVar1 = param_4;
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    local_a0 = *(undefined4 *)(param_2 + 1);
    local_a8 = *param_2;
    FUN_142381410(*(longlong *)(param_1 + 0x168),&local_a8,param_3,lVar1,param_5);
    return;
  }
  if (lVar1 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    FUN_140729f20(lVar1,local_98);
  }
  return;
}



// FUNCTION 142236240 FUN_142236240 body=140 status=ok
// SIG undefined FUN_142236240(void)

void FUN_142236240(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  lVar1 = 0;
  if ((char)param_3 != '\0') {
    lVar1 = param_4;
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    local_a0 = *(undefined4 *)(param_2 + 1);
    local_a8 = *param_2;
    FUN_142381550(*(longlong *)(param_1 + 0x168),&local_a8,param_3,lVar1,param_5);
    return;
  }
  if (lVar1 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    FUN_140729f20(lVar1,local_98);
  }
  return;
}



// FUNCTION 1422362d0 FUN_1422362d0 body=120 status=ok
// SIG undefined FUN_1422362d0(void)

void FUN_1422362d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  lVar1 = 0;
  if ((char)param_3 != '\0') {
    lVar1 = param_4;
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_142381650(*(longlong *)(param_1 + 0x168),param_2,param_3,lVar1);
    return;
  }
  if (lVar1 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    FUN_140729f20(lVar1,local_98);
  }
  return;
}



// FUNCTION 142236350 FUN_142236350 body=32 status=ok
// SIG undefined FUN_142236350(void)

void FUN_142236350(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x168) != 0) && (param_2 != 0)) {
    USceneComponent::AttachTo();
    return;
  }
  return;
}



// FUNCTION 142236370 FUN_142236370 body=102 status=ok
// SIG undefined FUN_142236370(void)

void FUN_142236370(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x168) != 0) && (param_2 != (longlong *)0x0)) {
    lVar1 = (**(code **)(*param_2 + 0x3b8))(param_2);
    if (lVar1 != 0) {
      USceneComponent::AttachTo(*(undefined8 *)(param_1 + 0x168),lVar1,param_3,param_4,param_5);
    }
  }
  return;
}



// FUNCTION 1422363e0 FUN_1422363e0 body=114 status=ok
// SIG undefined FUN_1422363e0(void)

void FUN_1422363e0(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  longlong lVar1;
  undefined1 local_res20;
  undefined1 local_res21;
  undefined1 local_res22;
  undefined1 local_res23;
  
  local_res21 = param_5;
  local_res22 = param_6;
  local_res23 = param_7;
  if ((*(longlong *)(param_1 + 0x168) != 0) && (param_2 != (longlong *)0x0)) {
    local_res20 = param_4;
    lVar1 = (**(code **)(*param_2 + 0x3b8))(param_2);
    if (lVar1 != 0) {
      FUN_142382f60(*(undefined8 *)(param_1 + 0x168),lVar1,&local_res20,param_3);
    }
  }
  return;
}



// FUNCTION 142236460 K2_AttachToComponent body=71 status=ok
// SIG undefined K2_AttachToComponent(void)

void AActor::K2_AttachToComponent
               (longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
               undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined1 local_res20;
  undefined1 local_res21;
  undefined1 local_res22;
  undefined1 local_res23;
  
  local_res21 = param_5;
  local_res22 = param_6;
  local_res23 = param_7;
  if ((*(longlong *)(param_1 + 0x168) != 0) && (param_2 != 0)) {
    local_res20 = param_4;
    FUN_142382f60(*(longlong *)(param_1 + 0x168),param_2,&local_res20,param_3);
  }
  return;
}



// FUNCTION 1422364b0 FUN_1422364b0 body=33 status=ok
// SIG undefined FUN_1422364b0(void)

void FUN_1422364b0(longlong param_1,longlong *param_2)

{
  if ((param_2 != (longlong *)0x0) && (param_2[0x23] == param_1)) {
                    /* WARNING: Could not recover jumptable at 0x0001422364c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x3b0))(param_2,0);
    return;
  }
  return;
}



// FUNCTION 1422364e0 FUN_1422364e0 body=54 status=ok
// SIG undefined FUN_1422364e0(void)

void FUN_1422364e0(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  undefined1 local_res13;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  local_res13 = 1;
  if (plVar1 != (longlong *)0x0) {
    local_res10 = param_2;
    local_res11 = param_3;
    local_res12 = param_4;
    (**(code **)(*plVar1 + 0x418))(plVar1,&local_res10);
  }
  return;
}



// FUNCTION 142236520 FUN_142236520 body=264 status=ok
// SIG undefined FUN_142236520(void)

ulonglong FUN_142236520(longlong param_1,float *param_2,char param_3,longlong param_4,
                       undefined1 param_5)

{
  longlong *plVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong lVar3;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  lVar3 = 0;
  if (param_3 != '\0') {
    lVar3 = param_4;
  }
  if (plVar1 != (longlong *)0x0) {
    local_b8 = *param_2 - *(float *)(plVar1 + 0x44);
    local_b4 = param_2[1] - *(float *)((longlong)plVar1 + 0x224);
    local_b0 = param_2[2] - *(float *)(plVar1 + 0x45);
    local_a8 = (undefined4)plVar1[0x42];
    local_a4 = *(undefined4 *)((longlong)plVar1 + 0x214);
    local_a0 = (undefined4)plVar1[0x43];
    local_9c = *(undefined4 *)((longlong)plVar1 + 0x21c);
    uVar2 = (**(code **)(*plVar1 + 0x490))(plVar1,&local_b8,&local_a8,param_3,lVar3,0,param_5);
    return uVar2;
  }
  if (lVar3 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    in_RAX = FUN_140729f20(lVar3,local_98);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142236630 FUN_142236630 body=247 status=ok
// SIG undefined FUN_142236630(void)

ulonglong FUN_142236630(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                       longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  float local_c8;
  float fStack_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  local_a8 = *param_3;
  local_a0 = *(undefined4 *)(param_3 + 1);
  lVar1 = *(longlong *)(param_1 + 0x168);
  lVar3 = 0;
  if (param_4 != '\0') {
    lVar3 = param_5;
  }
  uVar2 = (ulonglong)(uint)*(float *)(param_2 + 1);
  if (lVar1 != 0) {
    local_c8 = (float)*param_2;
    fStack_c4 = (float)((ulonglong)*param_2 >> 0x20);
    local_b8 = local_c8 - *(float *)(lVar1 + 0x220);
    local_b4 = fStack_c4 - *(float *)(lVar1 + 0x224);
    local_b0 = *(float *)(param_2 + 1) - *(float *)(lVar1 + 0x228);
    uVar2 = FUN_142391970(lVar1,&local_b8,&local_a8,*(float *)(lVar1 + 0x228),lVar3,0,param_6);
    return uVar2;
  }
  if (lVar3 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    uVar2 = FUN_140729f20(lVar3,local_98);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 142236730 FUN_142236730 body=58 status=ok
// SIG undefined FUN_142236730(void)

void FUN_142236730(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  uVar1 = 0;
  if (param_3 != '\0') {
    uVar1 = param_4;
  }
  FUN_14223cb00(local_18,&local_18,param_3,uVar1,param_5);
  return;
}



// FUNCTION 142236770 FUN_142236770 body=140 status=ok
// SIG undefined FUN_142236770(void)

void FUN_142236770(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  lVar1 = 0;
  if ((char)param_3 != '\0') {
    lVar1 = param_4;
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    local_a0 = *(undefined4 *)(param_2 + 1);
    local_a8 = *param_2;
    FUN_142398470(*(longlong *)(param_1 + 0x168),&local_a8,param_3,lVar1,param_5);
    return;
  }
  if (lVar1 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    FUN_140729f20(lVar1,local_98);
  }
  return;
}



// FUNCTION 142236800 FUN_142236800 body=120 status=ok
// SIG undefined FUN_142236800(void)

void FUN_142236800(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  lVar1 = 0;
  if ((char)param_3 != '\0') {
    lVar1 = param_4;
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_142398770(*(longlong *)(param_1 + 0x168),param_2,param_3,lVar1);
    return;
  }
  if (lVar1 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    FUN_140729f20(lVar1,local_98);
  }
  return;
}



// FUNCTION 142236880 K2_SetActorRotation body=81 status=ok
// SIG undefined K2_SetActorRotation(void)

longlong AActor::K2_SetActorRotation(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  if (*(longlong *)(param_1 + 0x168) != 0) {
    lVar1 = FUN_142391970(*(longlong *)(param_1 + 0x168),&DAT_1468b5d90,&local_18,1,0,0,param_3);
    return lVar1;
  }
  return (ulonglong)(uint3)((uint)local_10 >> 8) << 8;
}



// FUNCTION 1422368e0 FUN_1422368e0 body=263 status=ok
// SIG undefined FUN_1422368e0(void)

undefined8
FUN_1422368e0(longlong param_1,longlong param_2,char param_3,longlong param_4,undefined1 param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  lVar3 = 0;
  if (param_3 != '\0') {
    lVar3 = param_4;
  }
  if (*(longlong *)(param_1 + 0x168) == 0) {
    if (lVar3 != 0) {
      _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
      local_8c = 0x3f800000;
      FUN_140729f20(lVar3,local_98);
    }
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_140618120(param_2);
    if (((cVar1 == '\0') && (cVar1 = FUN_140618120(param_2 + 0x10), cVar1 == '\0')) &&
       (cVar1 = FUN_140618120(param_2 + 0x20), cVar1 == '\0')) {
      FUN_142399d60(*(undefined8 *)(param_1 + 0x168),param_2,param_3,lVar3,param_5);
      return 1;
    }
    if (lVar3 != 0) {
      _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
      local_8c = 0x3f800000;
      FUN_140729f20(lVar3,local_98);
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1422369f0 FUN_1422369f0 body=300 status=ok
// SIG undefined FUN_1422369f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422369f0(longlong param_1,undefined4 param_2,longlong param_3,float *param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  float local_24;
  
  if (param_3 == 0) {
    param_3 = *(longlong *)(param_1 + 0x150);
  }
  iVar2 = FUN_142235230();
  if ((iVar2 != 3) && (param_3 != 0)) {
    if ((*param_4 == 0.0) && ((param_4[1] == 0.0 && (param_4[2] == 0.0)))) {
      lVar1 = *(longlong *)(param_1 + 0x168);
      if (lVar1 == 0) {
        local_38 = _DAT_1468b5d90;
        local_30 = DAT_1468b5d98;
      }
      else {
        local_38 = *(undefined8 *)(lVar1 + 0x220);
        local_30 = *(float *)(lVar1 + 0x228);
      }
      puVar4 = &local_2c;
      local_2c = local_38;
      local_24 = local_30;
    }
    else {
      local_38 = *(undefined8 *)param_4;
      puVar4 = &local_38;
      local_30 = param_4[2];
    }
    plVar3 = (longlong *)0x0;
    if (DAT_146aeea38 != 0) {
      plVar3 = DAT_146aeea30;
    }
    (**(code **)(*plVar3 + 0x38))(param_5,param_1,param_2,param_3,puVar4,param_5,param_6);
  }
  return;
}



// FUNCTION 142236b20 FUN_142236b20 body=79 status=ok
// SIG undefined FUN_142236b20(void)

void FUN_142236b20(undefined8 param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_3 + 0x6f8))(param_3);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3f8))(plVar1,param_1,param_2,param_4);
  }
  return;
}



// FUNCTION 142236b70 FUN_142236b70 body=340 status=ok
// SIG undefined FUN_142236b70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142236b70(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  ulonglong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  undefined1 *puVar8;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  puVar5 = (undefined1 *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  if (param_1 != 0) {
    FUN_140a4ca80(param_1,local_f8,0);
  }
  puVar8 = local_f8;
  if (local_38 != 0) {
    puVar8 = puVar5;
  }
  plVar7 = (longlong *)((ulonglong)puVar8 | local_38);
  puVar8 = (undefined1 *)((longlong)local_30 & 0x1fffffffffffffff);
  if (plVar7 + local_30 < plVar7) {
    puVar8 = puVar5;
  }
  puVar6 = puVar5;
  if (puVar8 != (undefined1 *)0x0) {
    do {
      plVar1 = (longlong *)*plVar7;
      (**(code **)(*plVar1 + 0x3c0))(plVar1,1);
      uVar2 = *(uint *)((longlong)plVar1 + 0xc);
      puVar3 = puVar5;
      if ((int)uVar2 < (int)DAT_1469e91c4) {
        uVar4 = uVar2 & 0xffff;
        if ((int)uVar2 < 0) {
          uVar2 = uVar2 + 0xffff;
          uVar4 = uVar4 - 0x10000;
        }
        puVar3 = (undefined1 *)
                 (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                 (longlong)(int)uVar4 * 0x18);
      }
      *(uint *)(puVar3 + 8) = *(uint *)(puVar3 + 8) | 0x20000000;
      plVar7 = plVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar8);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142236cd0 FUN_142236cd0 body=637 status=ok
// SIG undefined FUN_142236cd0(void)

void FUN_142236cd0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
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
  
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 0x2b0);
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
      if (bVar5) goto LAB_142236d9d;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_84 = uVar4 - 1 & uVar4 ^ uVar4;
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
LAB_142236d9d:
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
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142236e75;
      uVar8 = puVar11[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = uVar8 - 1 & uVar8 ^ uVar8;
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
LAB_142236e75:
      uStack_74 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) break;
    lVar9 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0xb8) & 1) != 0)) {
      FUN_1423424e0(lVar9);
      lVar6 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (*(longlong *)(lVar9 + 0x2d8) != 0)) {
        FUN_142236cd0();
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 142236f50 FUN_142236f50 body=380 status=ok
// SIG undefined FUN_142236f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142236f50(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [192];
  undefined1 *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar8 = 0;
  local_28 = (undefined1 *)0x0;
  local_20 = 0;
  FUN_140725150(param_1,local_e8,0);
  uVar3 = local_20 & 0xffffffff;
  puVar5 = local_28;
  uVar7 = uVar8;
  uVar9 = uVar8;
  if (0 < (int)local_20) {
    do {
      puVar2 = local_e8;
      if (puVar5 != (undefined1 *)0x0) {
        puVar2 = puVar5;
      }
      lVar1 = *(longlong *)(puVar2 + uVar9);
      if (((*(byte *)(lVar1 + 0xb8) & 1) != 0) &&
         (((*(byte *)(lVar1 + 0x2f0) & 0x60) != 0 || (*(int *)(lVar1 + 0x6b8) != 0)))) {
        FUN_1423424e0();
        uVar3 = local_20 & 0xffffffff;
        puVar5 = local_28;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar9 = uVar9 + 8;
    } while ((int)uVar6 < (int)uVar3);
  }
  uVar7 = uVar8;
  uVar9 = uVar8;
  if (0 < *(int *)(param_1 + 0x160)) {
    do {
      lVar1 = *(longlong *)(uVar9 + *(longlong *)(param_1 + 0x158));
      if (lVar1 != 0) {
        uVar6 = *(uint *)(lVar1 + 0xc);
        uVar3 = uVar8;
        if ((int)uVar6 < (int)DAT_1469e91c4) {
          uVar4 = uVar6 & 0xffff;
          if ((int)uVar6 < 0) {
            uVar6 = uVar6 + 0xffff;
            uVar4 = uVar4 - 0x10000;
          }
          uVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                  (longlong)(int)uVar4 * 0x18;
        }
        if ((*(uint *)(uVar3 + 8) >> 0x1d & 1) == 0) {
          FUN_142236f50(lVar1);
        }
      }
      uVar6 = (int)uVar7 + 1;
      puVar5 = local_28;
      uVar7 = (ulonglong)uVar6;
      uVar9 = uVar9 + 8;
    } while ((int)uVar6 < *(int *)(param_1 + 0x160));
  }
  if (puVar5 != (undefined1 *)0x0) {
    FMemory::Free(puVar5);
  }
  return;
}



// FUNCTION 1422370d0 FUN_1422370d0 body=597 status=ok
// SIG undefined FUN_1422370d0(void)

ulonglong FUN_1422370d0(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *local_58;
  uint local_50;
  uint local_4c;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  uVar5 = UObject::CanModify();
  if ((char)uVar5 == '\0') {
    return uVar5;
  }
  plVar11 = (longlong *)0x0;
  iVar9 = 0;
  local_58 = (longlong *)0x0;
  local_4c = 0;
  plVar12 = plVar11;
  if (DAT_1468b6150 != 0) {
    local_48 = *(longlong *)(param_1 + 0x10);
    if (local_48 == 0) {
      local_40 = (longlong *)0x0;
    }
    else {
      local_40 = *(longlong **)(local_48 + 0x38);
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    FUN_140cbbe70(&local_48);
    plVar12 = (longlong *)0x0;
    plVar10 = plVar11;
    plVar8 = plVar11;
    plVar2 = local_40;
    while (local_40 = plVar2, plVar2 != (longlong *)0x0) {
      if ((((ulonglong)plVar2[7] >> 0x22 & 1) == 0) &&
         (lVar6 = (**(code **)(*plVar2 + 0x378))(plVar2,*(int *)((longlong)plVar2 + 0x44) + param_1)
         , lVar6 != 0)) {
        lVar7 = FUN_1428e7a40();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (cVar3 = FUN_142340f60(lVar6), cVar3 != '\0')) {
          plVar2[7] = plVar2[7] | 0x400000000;
          iVar9 = (int)plVar10;
          local_50 = iVar9 + 1;
          if ((int)plVar8 < (int)local_50) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,plVar10);
            plVar8 = (longlong *)(ulonglong)local_4c;
            plVar12 = local_58;
          }
          plVar10 = (longlong *)(ulonglong)local_50;
          plVar12[iVar9] = (longlong)plVar2;
        }
      }
      iVar9 = (int)plVar10;
      local_40 = (longlong *)plVar2[5];
      FUN_140cbbe70(&local_48);
      plVar2 = local_40;
    }
  }
  bVar4 = FUN_14175d020(param_1,param_2);
  plVar10 = (longlong *)((ulonglong)((longlong)(plVar12 + iVar9) + (7 - (longlong)plVar12)) >> 3);
  if (plVar12 + iVar9 < plVar12) {
    plVar10 = plVar11;
  }
  plVar8 = plVar12;
  if (plVar10 != (longlong *)0x0) {
    do {
      *(ulonglong *)(*plVar8 + 0x38) = *(ulonglong *)(*plVar8 + 0x38) & 0xfffffffbffffffff;
      plVar11 = (longlong *)((longlong)plVar11 + 1);
      plVar8 = plVar8 + 1;
    } while (plVar11 != plVar10);
  }
  if (((*(longlong *)(param_1 + 0x168) != 0) && (cVar3 = FUN_142340f60(), cVar3 == '\0')) &&
     ((cVar3 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x70))
                         (*(longlong **)(param_1 + 0x168),param_2), cVar3 != '\0' || (bVar4 != 0))))
  {
    bVar4 = 1;
  }
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  return (ulonglong)bVar4;
}



// FUNCTION 142237340 thunk_FUN_1428e0030 body=5 status=ok
// SIG undefined thunk_FUN_1428e0030(void)

void thunk_FUN_1428e0030(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStackX_8;
  
  lVar1 = *param_1;
  uStackX_8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b19c10);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStackX_8);
  return;
}



// FUNCTION 142237360 thunk_FUN_1428e00b0 body=5 status=ok
// SIG undefined thunk_FUN_1428e00b0(void)

void thunk_FUN_1428e00b0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStackX_8;
  
  lVar1 = *param_1;
  uStackX_8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b19c20);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStackX_8);
  return;
}



// FUNCTION 142237370 FUN_142237370 body=125 status=ok
// SIG undefined FUN_142237370(void)

void FUN_142237370(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  local_28 = *param_2;
  local_20 = param_2[1];
  local_18 = param_2[2];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_1428e00f0(param_1,&local_28);
  plVar4 = (longlong *)param_2[2];
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
  return;
}



// FUNCTION 142237430 FUN_142237430 body=125 status=ok
// SIG undefined FUN_142237430(void)

void FUN_142237430(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  local_28 = *param_2;
  local_20 = param_2[1];
  local_18 = param_2[2];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_1428e02c0(param_1,&local_28);
  plVar4 = (longlong *)param_2[2];
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
  return;
}



// FUNCTION 1422374b0 NotifyHit body=146 status=ok
// SIG undefined NotifyHit(void)

void AActor::NotifyHit(void)

{
  FUN_1428e04b0();
  return;
}



// FUNCTION 142237550 FUN_142237550 body=156 status=ok
// SIG undefined FUN_142237550(void)

void FUN_142237550(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x434) = *(int *)(param_1 + 0x434) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x434);
  iVar5 = *(int *)(param_1 + 0x428) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x420);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1422375ad:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))();
        if (cVar4 == '\0') goto LAB_1422375ad;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x434);
  }
  *(int *)(param_1 + 0x434) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x420),0);
    return;
  }
  return;
}



// FUNCTION 1422375f0 FUN_1422375f0 body=416 status=ok
// SIG undefined FUN_1422375f0(void)

void FUN_1422375f0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined1 uVar11;
  byte *pbVar12;
  undefined1 local_res10;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined7 uStack_67;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  pbVar12 = *(byte **)(param_2 + 0x100);
  uVar11 = 0;
  pbVar10 = pbVar12 + (longlong)*(int *)(param_2 + 0x108) * 0x90;
  do {
    if (pbVar12 == pbVar10) {
LAB_142237636:
      if (DAT_146531848 != DAT_146531874) {
        lVar8 = *param_1;
        puVar6 = DAT_146531880;
        if (DAT_146531880 == (undefined *)0x0) {
          puVar6 = &DAT_146531878;
        }
        iVar2 = *(int *)(puVar6 + (longlong)
                                  (int)((int)((ulonglong)lVar8 >> 0x20) * 0x17 + (int)lVar8 &
                                       DAT_146531888 - 1U) * 4);
        if (iVar2 != -1) {
          while( true ) {
            lVar7 = (longlong)iVar2 * 0x20;
            if (lVar8 == *(longlong *)(lVar7 + DAT_146531840)) break;
            iVar2 = *(int *)(lVar7 + 0x18 + DAT_146531840);
            if (iVar2 == -1) {
              return;
            }
          }
          if (iVar2 != -1) {
            puVar1 = (undefined4 *)((longlong)iVar2 * 0x20 + 8 + DAT_146531840);
            uVar3 = *puVar1;
            uVar4 = puVar1[2];
            uVar5 = puVar1[3];
            TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
            ::Remove(&DAT_146531840);
            lVar8 = FUN_1428742d0(DAT_146b17150);
            if ((lVar8 != 0) &&
               (lVar8 = FAudioDeviceManager::GetAudioDevice(lVar8,uVar3), lVar8 != 0)) {
              local_28 = 0;
              local_18 = 0;
              puVar9 = (undefined8 *)FUN_140438ef0(0x20,local_48);
              if (puVar9 != (undefined8 *)0x0) {
                local_78 = (undefined4)lVar8;
                uStack_74 = (undefined4)((ulonglong)lVar8 >> 0x20);
                *(undefined4 *)(puVar9 + 1) = local_78;
                *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_74;
                *(undefined4 *)(puVar9 + 2) = uVar4;
                *(undefined4 *)((longlong)puVar9 + 0x14) = uVar5;
                *puVar9 = &PTR_FUN_143f4d0b0;
                puVar9[3] = CONCAT71(uStack_67,uVar11);
              }
              local_58[0] = &LAB_142224990;
              FUN_1422f8a30(local_58,local_res10);
            }
          }
        }
      }
      return;
    }
    if ((*pbVar12 & 1) != 0) {
      uVar11 = 1;
      goto LAB_142237636;
    }
    pbVar12 = pbVar12 + 0x90;
  } while( true );
}



// FUNCTION 142237790 FUN_142237790 body=312 status=ok
// SIG undefined FUN_142237790(void)

void FUN_142237790(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)param_1[0x2d];
  if (param_1[0x1b] == 0) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x418))(plVar1,&DAT_146532190);
    }
    if ((*(byte *)(param_1 + 0x12) & 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001422378c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x428))(param_1);
      return;
    }
  }
  else if ((plVar1 != (longlong *)0x0) &&
          ((lVar3 = param_1[0x22], lVar3 != 0 ||
           (lVar3 = *(longlong *)(param_1[0x1b] + 0x168), lVar3 != 0)))) {
    *(longlong *)((longlong)plVar1 + 0x1ec) = param_1[0x1c];
    *(int *)((longlong)plVar1 + 500) = (int)param_1[0x1d];
    lVar2 = param_1[0x2d];
    *(longlong *)(lVar2 + 0x1f8) = param_1[0x1f];
    *(int *)(lVar2 + 0x200) = (int)param_1[0x20];
    lVar2 = param_1[0x2d];
    *(undefined8 *)(lVar2 + 0x204) = *(undefined8 *)((longlong)param_1 + 0xec);
    *(undefined4 *)(lVar2 + 0x20c) = *(undefined4 *)((longlong)param_1 + 0xf4);
    lVar2 = param_1[0x2d];
    if ((lVar3 == *(longlong *)(lVar2 + 400)) && (param_1[0x21] == *(longlong *)(lVar2 + 0x198))) {
      FUN_140942fb0(lVar2,0,1);
      lVar2 = param_1[0x2d];
    }
    FUN_142382f60(lVar2,lVar3,&DAT_146af29ec,param_1[0x21]);
  }
  return;
}



// FUNCTION 1422378d0 FUN_1422378d0 body=233 status=ok
// SIG undefined FUN_1422378d0(void)

void FUN_1422378d0(longlong *param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_1[0x2d];
  if (lVar5 != 0) {
    bVar1 = *(byte *)(param_1 + 0x19);
    if (DAT_146aee956 != (bVar1 >> 1 & 1)) {
      FUN_14223fa00(param_1);
      bVar1 = *(byte *)(param_1 + 0x19);
      lVar5 = param_1[0x2d];
    }
    if ((bVar1 & 2) != 0) {
      if (lVar5 != 0) {
        lVar4 = FUN_1429f11d0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (cVar3 = FUN_142390bd0(lVar5), cVar3 != '\0')) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142237975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x440))(param_1);
      return;
    }
    if ((*(longlong *)(lVar5 + 400) == 0) && ((char)param_1[0x25] == '\x01')) {
      (**(code **)(*param_1 + 0x438))(param_1,param_1 + 0x13);
      (**(code **)(*param_1 + 0x430))(param_1);
    }
  }
  return;
}



// FUNCTION 1422379c0 OnSubobjectCreatedFromReplication body=91 status=ok
// SIG undefined OnSubobjectCreatedFromReplication(void)

void AActor::OnSubobjectCreatedFromReplication(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_1428e7a40();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14234b150(param_2);
      FUN_142350b20(param_2,1);
    }
  }
  return;
}



// FUNCTION 142237a20 FUN_142237a20 body=87 status=ok
// SIG undefined FUN_142237a20(void)

void FUN_142237a20(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1428e7a40();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_2 + 0x3b0))(param_2,0);
    }
  }
  return;
}



// FUNCTION 142237a80 FUN_142237a80 body=253 status=ok
// SIG undefined FUN_142237a80(void)

void FUN_142237a80(longlong param_1,int param_2,float param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x60) == *(int *)(param_1 + 0x8c)) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x98) == 0) {
    lVar3 = param_1 + 0x90;
  }
  iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0xa0) - 1U & (longlong)param_2) * 4);
  if (iVar2 == -1) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x58);
  while (lVar5 = (longlong)iVar2, *(int *)(lVar3 + lVar5 * 0x48) != param_2) {
    iVar2 = *(int *)(lVar3 + 0x40 + lVar5 * 0x48);
    if (iVar2 == -1) {
      return;
    }
  }
  if (iVar2 == -1) {
    return;
  }
  lVar3 = lVar3 + lVar5 * 0x48;
  if (lVar3 == 0) {
    return;
  }
  if (lVar3 == -4) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    lVar4 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142237b60;
  }
  lVar5 = 0;
LAB_142237b60:
  *(float *)(lVar3 + 0x2c) = param_3 + *(float *)(lVar5 + 0x790);
  return;
}



// FUNCTION 142237b80 FUN_142237b80 body=2053 status=ok
// SIG undefined FUN_142237b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142237b80(longlong *param_1)

{
  float *pfVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_198 [32];
  undefined2 *local_178;
  undefined4 local_170;
  undefined1 local_168;
  char local_158;
  undefined8 local_150;
  float local_148;
  longlong local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  longlong local_118;
  float fStack_110;
  float fStack_10c;
  longlong local_108 [24];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar13 = (**(code **)(*param_1 + 0x148))();
  if ((lVar13 == 0) || (cVar8 = FUN_1428c5cc0(lVar13), cVar8 == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    (**(code **)(*param_1 + 0x480))(param_1);
  }
  if (((*(byte *)(param_1 + 0x12) & 0x40) == 0) ||
     (local_158 = '\x01', *(char *)((longlong)param_1 + 0x95) != '\x03')) {
    local_158 = '\0';
  }
  uVar24 = 0;
  if (!bVar7) {
    iVar11 = *(int *)((longlong)param_1 + 0xc);
    uVar17 = uVar24;
    if (iVar11 < (int)DAT_1469e91c4) {
      uVar20 = iVar11 >> 0x1f & 0xffff;
      uVar12 = iVar11 + uVar20;
      uVar17 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar12 >> 0x10) * 8) +
               (longlong)(int)((uVar12 & 0xffff) - uVar20) * 0x18;
    }
    *(uint *)(uVar17 + 8) = *(uint *)(uVar17 + 8) | 0x20000000;
    (**(code **)(*param_1 + 0x70))(param_1,0);
    iVar11 = *(int *)((longlong)param_1 + 0xc);
    uVar17 = uVar24;
    if (iVar11 < (int)DAT_1469e91c4) {
      uVar20 = iVar11 >> 0x1f & 0xffff;
      uVar12 = iVar11 + uVar20;
      uVar17 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar12 >> 0x10) * 8) +
               (longlong)(int)((uVar12 & 0xffff) - uVar20) * 0x18;
    }
    *(uint *)(uVar17 + 8) = *(uint *)(uVar17 + 8) & 0xdfffffff;
    cVar8 = local_158;
    goto LAB_1422382ff;
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_140a4ca80(param_1,local_108,0);
  plVar16 = local_108;
  if (local_48 != (longlong *)0x0) {
    plVar16 = local_48;
  }
  plVar14 = plVar16 + (int)local_40;
  uVar17 = (longlong)(int)local_40 & 0x1fffffffffffffff;
  if (plVar14 < plVar16) {
    uVar17 = uVar24;
  }
  uVar23 = uVar24;
  if (uVar17 != 0) {
    do {
      plVar2 = (longlong *)*plVar16;
      if ((*(byte *)(plVar2 + 0x17) & 1) != 0) {
        if (((*(byte *)((longlong)plVar2 + 0xba) & 2) != 0) &&
           (cVar8 = (**(code **)(*plVar2 + 0x2a0))(plVar2), cVar8 == '\0')) {
          (**(code **)(*plVar2 + 0x280))(plVar2,1);
        }
        plVar14 = (longlong *)(ulonglong)(*(byte *)(plVar2 + 0x19) & 0x11);
        if ((*(byte *)(plVar2 + 0x19) & 0x11) == 1) {
          plVar14 = (longlong *)(**(code **)(*plVar2 + 0x330))(plVar2);
        }
      }
      plVar16 = plVar16 + 1;
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar17);
  }
  uVar10 = SUB84(plVar14,0);
  if (local_48 != (longlong *)0x0) {
    uVar10 = FMemory::Free();
  }
  if (lVar13 != 0) {
    cVar8 = *(char *)((longlong)param_1 + 0x12a);
    uVar25 = (undefined4)DAT_1468b5da0;
    uVar26 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    if (cVar8 == '\x02') {
      lVar19 = param_1[0x2d];
      if (lVar19 == 0) {
        local_130 = DAT_1468b5d98;
        plVar16 = &local_138;
        local_138 = _DAT_1468b5d90;
      }
      else {
        plVar16 = &local_150;
        local_148 = *(float *)(lVar19 + 0x228);
        local_150 = *(longlong *)(lVar19 + 0x220);
      }
      local_128 = *plVar16;
      local_120 = *(float *)(plVar16 + 1);
      fStack_110 = DAT_1468b5da8;
      if (lVar19 != 0) {
        fVar6 = *(float *)(lVar19 + 0x210);
        local_118 = *(longlong *)(lVar19 + 0x210);
        fStack_110 = *(float *)(lVar19 + 0x218);
        fStack_10c = *(float *)(lVar19 + 0x21c);
        auVar5._4_4_ = -(uint)(*(float *)(lVar19 + 0x254) != *(float *)(lVar19 + 0x214));
        auVar5._0_4_ = -(uint)(*(float *)(lVar19 + 0x250) != fVar6);
        auVar5._8_4_ = -(uint)(*(float *)(lVar19 + 600) != fStack_110);
        auVar5._12_4_ = -(uint)(*(float *)(lVar19 + 0x25c) != fStack_10c);
        iVar11 = movmskps(local_120,auVar5);
        if (iVar11 != 0) {
          *(float *)(lVar19 + 0x250) = fVar6;
          *(float *)(lVar19 + 0x254) = *(float *)(lVar19 + 0x214);
          *(float *)(lVar19 + 600) = fStack_110;
          *(float *)(lVar19 + 0x25c) = fStack_10c;
          puVar15 = (undefined8 *)FQuat::Rotator(&local_118,&local_138);
          *(undefined8 *)(lVar19 + 0x260) = *puVar15;
          *(undefined4 *)(lVar19 + 0x268) = *(undefined4 *)(puVar15 + 1);
        }
        uVar25 = (undefined4)*(undefined8 *)(lVar19 + 0x260);
        uVar26 = (undefined4)((ulonglong)*(undefined8 *)(lVar19 + 0x260) >> 0x20);
        fStack_110 = *(float *)(lVar19 + 0x268);
      }
      local_138 = CONCAT44(uVar26,uVar25);
      local_130 = fStack_110;
      local_118 = local_138;
      cVar8 = FUN_142546cc0(lVar13,param_1,&local_128,&local_118);
      if (cVar8 != '\0') {
LAB_142238053:
        lVar19 = param_1[0x2d];
        fStack_110 = local_130;
        local_118 = local_138;
        if (lVar19 != 0) {
          local_168 = 1;
          local_170 = 0;
          local_178 = (undefined2 *)0x0;
          local_148 = local_120 - *(float *)(lVar19 + 0x228);
          local_150 = CONCAT44(local_128._4_4_ - *(float *)(lVar19 + 0x224),
                               (float)local_128 - *(float *)(lVar19 + 0x220));
          FUN_142391970(lVar19,&local_150,&local_118,0);
        }
      }
    }
    else if (cVar8 == '\x03') {
      lVar19 = param_1[0x2d];
      if (lVar19 == 0) {
        local_130 = DAT_1468b5d98;
        plVar16 = &local_138;
        local_138 = _DAT_1468b5d90;
      }
      else {
        plVar16 = &local_150;
        local_148 = *(float *)(lVar19 + 0x228);
        local_150 = *(longlong *)(lVar19 + 0x220);
      }
      local_128 = *plVar16;
      local_120 = *(float *)(plVar16 + 1);
      fStack_110 = DAT_1468b5da8;
      if (lVar19 != 0) {
        fVar6 = *(float *)(lVar19 + 0x210);
        local_118 = *(longlong *)(lVar19 + 0x210);
        fStack_110 = *(float *)(lVar19 + 0x218);
        fStack_10c = *(float *)(lVar19 + 0x21c);
        auVar4._4_4_ = -(uint)(*(float *)(lVar19 + 0x254) != *(float *)(lVar19 + 0x214));
        auVar4._0_4_ = -(uint)(*(float *)(lVar19 + 0x250) != fVar6);
        auVar4._8_4_ = -(uint)(*(float *)(lVar19 + 600) != fStack_110);
        auVar4._12_4_ = -(uint)(*(float *)(lVar19 + 0x25c) != fStack_10c);
        iVar11 = movmskps(local_120,auVar4);
        if (iVar11 != 0) {
          *(float *)(lVar19 + 0x250) = fVar6;
          *(float *)(lVar19 + 0x254) = *(float *)(lVar19 + 0x214);
          *(float *)(lVar19 + 600) = fStack_110;
          *(float *)(lVar19 + 0x25c) = fStack_10c;
          puVar15 = (undefined8 *)FQuat::Rotator(&local_118,&local_138);
          *(undefined8 *)(lVar19 + 0x260) = *puVar15;
          *(undefined4 *)(lVar19 + 0x268) = *(undefined4 *)(puVar15 + 1);
        }
        uVar25 = (undefined4)*(undefined8 *)(lVar19 + 0x260);
        uVar26 = (undefined4)((ulonglong)*(undefined8 *)(lVar19 + 0x260) >> 0x20);
        fStack_110 = *(float *)(lVar19 + 0x268);
      }
      local_138 = CONCAT44(uVar26,uVar25);
      local_130 = fStack_110;
      local_118 = local_138;
      cVar8 = FUN_142546cc0(lVar13,param_1,&local_128,&local_118);
      if (cVar8 != '\0') goto LAB_142238053;
      FUN_142227350(param_1,0,1);
    }
    else if (cVar8 == '\x04') {
      lVar19 = param_1[0x2d];
      fStack_110 = DAT_1468b5da8;
      if (lVar19 != 0) {
        fVar6 = *(float *)(lVar19 + 0x210);
        local_118 = *(longlong *)(lVar19 + 0x210);
        fStack_110 = *(float *)(lVar19 + 0x218);
        fStack_10c = *(float *)(lVar19 + 0x21c);
        auVar3._4_4_ = -(uint)(*(float *)(lVar19 + 0x254) != *(float *)(lVar19 + 0x214));
        auVar3._0_4_ = -(uint)(*(float *)(lVar19 + 0x250) != fVar6);
        auVar3._8_4_ = -(uint)(*(float *)(lVar19 + 600) != fStack_110);
        auVar3._12_4_ = -(uint)(*(float *)(lVar19 + 0x25c) != fStack_10c);
        iVar11 = movmskps(uVar10,auVar3);
        lVar18 = lVar19;
        if (iVar11 != 0) {
          *(float *)(lVar19 + 0x250) = fVar6;
          *(float *)(lVar19 + 0x254) = *(float *)(lVar19 + 0x214);
          *(float *)(lVar19 + 600) = fStack_110;
          *(float *)(lVar19 + 0x25c) = fStack_10c;
          puVar15 = (undefined8 *)FQuat::Rotator(&local_118,&local_138);
          *(undefined8 *)(lVar19 + 0x260) = *puVar15;
          *(undefined4 *)(lVar19 + 0x268) = *(undefined4 *)(puVar15 + 1);
          lVar18 = param_1[0x2d];
        }
        uVar25 = (undefined4)*(undefined8 *)(lVar19 + 0x260);
        uVar26 = (undefined4)((ulonglong)*(undefined8 *)(lVar19 + 0x260) >> 0x20);
        pfVar1 = (float *)(lVar19 + 0x268);
        lVar19 = lVar18;
        fStack_110 = *pfVar1;
      }
      local_148 = fStack_110;
      local_118 = CONCAT44(uVar26,uVar25);
      local_150 = local_118;
      if (lVar19 == 0) {
        local_148 = DAT_1468b5d98;
        plVar16 = &local_150;
        local_150 = _DAT_1468b5d90;
      }
      else {
        plVar16 = &local_128;
        local_120 = *(float *)(lVar19 + 0x228);
        local_128 = *(longlong *)(lVar19 + 0x220);
      }
      local_138 = *plVar16;
      local_130 = *(float *)(plVar16 + 1);
      local_178 = (undefined2 *)0x0;
      cVar8 = FUN_142543f80(lVar13,param_1,&local_138,&local_118);
      if (cVar8 != '\0') {
        FUN_142227350(param_1,0,1);
      }
    }
  }
  iVar11 = *(int *)((longlong)param_1 + 0xc);
  uVar17 = uVar24;
  if (iVar11 < (int)DAT_1469e91c4) {
    uVar20 = iVar11 >> 0x1f & 0xffff;
    uVar12 = iVar11 + uVar20;
    uVar17 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar12 >> 0x10) * 8) +
             (longlong)(int)((uVar12 & 0xffff) - uVar20) * 0x18;
  }
  cVar8 = local_158;
  if ((*(uint *)(uVar17 + 8) >> 0x1d & 1) == 0) {
    (**(code **)(*param_1 + 0x488))(param_1);
    iVar11 = *(int *)((longlong)param_1 + 0xc);
    uVar17 = uVar24;
    if (iVar11 < (int)DAT_1469e91c4) {
      uVar20 = iVar11 >> 0x1f & 0xffff;
      uVar12 = iVar11 + uVar20;
      uVar17 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar12 >> 0x10) * 8) +
               (longlong)(int)((uVar12 & 0xffff) - uVar20) * 0x18;
    }
    cVar8 = local_158;
    if ((*(uint *)(uVar17 + 8) >> 0x1d & 1) == 0) {
      if ((*(byte *)((longlong)param_1 + 0x93) & 8) == 0) {
        puVar15 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,&local_138,0);
        puVar21 = &DAT_143f3eda8;
        if (*(int *)(puVar15 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar15;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0xc85,
                   L"%s failed to route PostInitializeComponents.  Please call Super::PostInitializeComponents() in your <className>::PostInitializeComponents() function. "
                   ,puVar22);
        if (local_138 != 0) {
          FMemory::Free();
        }
        puVar15 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,&local_138,0);
        if (*(int *)(puVar15 + 1) != 0) {
          puVar21 = (undefined2 *)*puVar15;
        }
        local_178 = puVar21;
        FDebug::AssertFailed
                  (&DAT_14500d15c,"Unknown",0xc85,
                   L"%s failed to route PostInitializeComponents.  Please call Super::PostInitializeComponents() in your <className>::PostInitializeComponents() function. "
                  );
        if (local_138 != 0) {
          FMemory::Free();
        }
      }
      cVar8 = local_158;
      if (((local_158 == '\0') &&
          ((DAT_146aee950 != 0 || (cVar9 = FUN_1428cdc10(lVar13), cVar9 != '\0')))) &&
         ((lVar13 = FWeakObjectPtr::Get(param_1 + 0x33), lVar13 == 0 ||
          ((*(longlong *)(lVar13 + 0x118) == 0 ||
           (((*(byte *)(*(longlong *)(lVar13 + 0x118) + 0x94) & 0x18) - 8 & 0xf7) == 0)))))) {
        FUN_142227cf0(param_1);
      }
    }
  }
LAB_1422382ff:
  iVar11 = *(int *)((longlong)param_1 + 0xc);
  if (iVar11 < (int)DAT_1469e91c4) {
    uVar20 = iVar11 >> 0x1f & 0xffff;
    uVar12 = iVar11 + uVar20;
    uVar24 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar12 >> 0x10) * 8) +
             (longlong)(int)((uVar12 & 0xffff) - uVar20) * 0x18;
  }
  if ((((*(uint *)(uVar24 + 8) >> 0x1d & 1) == 0) && (cVar8 == '\0')) &&
     (plVar16 = (longlong *)param_1[0x2d], plVar16 != (longlong *)0x0)) {
    (**(code **)(*plVar16 + 0x488))(plVar16,0,1,0);
  }
  return;
}



// FUNCTION 142238390 FUN_142238390 body=85 status=ok
// SIG undefined FUN_142238390(void)

void FUN_142238390(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0xca) = 2;
    iVar1 = *(int *)(param_1 + 0x328);
    *(int *)(param_1 + 0x328) = iVar1 + 1;
    if (*(int *)(param_1 + 0x32c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 800),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 800) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 1422383f0 FUN_1422383f0 body=61 status=ok
// SIG undefined FUN_1422383f0(void)

void FUN_1422383f0(longlong param_1)

{
  FUN_1417931d0();
  *(byte *)(param_1 + 0x95) = *(byte *)(param_1 + 0x92) >> 6 & 1;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    FUN_14223bbb0(param_1);
    return;
  }
  return;
}



// FUNCTION 142238430 FUN_142238430 body=110 status=ok
// SIG undefined FUN_142238430(void)

void FUN_142238430(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar4 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar4;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 8;
    FUN_142251cc0(param_1);
    FUN_142240ef0(param_1);
    return;
  }
  return;
}



// FUNCTION 1422384a0 FUN_1422384a0 body=160 status=ok
// SIG undefined FUN_1422384a0(void)

void FUN_1422384a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  UObject::PostLoad();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0x160);
    *(int *)(lVar1 + 0x160) = iVar2 + 1;
    if (*(int *)(lVar1 + 0x164) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar1 + 0x158,iVar2);
    }
    *(longlong *)(*(longlong *)(lVar1 + 0x158) + (longlong)iVar2 * 8) = param_1;
  }
  iVar2 = UObjectBaseUtility::GetLinkerUE4Version();
  if (iVar2 < 0x156) {
    *(byte *)(param_1 + 0x92) = *(byte *)(param_1 + 0x92) & 0xbf;
    *(byte *)(param_1 + 0x92) =
         *(byte *)(param_1 + 0x92) | -(*(char *)(param_1 + 0x95) != '\0') & 0x40U;
  }
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xbf;
  }
  return;
}



// FUNCTION 142238540 FUN_142238540 body=691 status=ok
// SIG undefined FUN_142238540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142238540(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_68;
  undefined4 local_60;
  
  lVar7 = 0;
  lVar6 = lVar7;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    cVar2 = UObjectBaseUtility::IsTemplate(*(longlong *)(param_1 + 0x168),0x30);
    cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if ((cVar2 == cVar3) && (lVar6 = *(longlong *)(param_1 + 0x168), lVar6 != 0)) {
      lVar7 = *(longlong *)(lVar6 + 400);
    }
  }
  if (lVar6 == 0) {
    uVar10 = (undefined4)local_68;
    uVar11 = (undefined4)((ulonglong)local_68 >> 0x20);
    uVar12 = uVar10;
    uVar13 = uVar11;
    uVar14 = uVar10;
    uVar15 = uVar11;
    uVar9 = local_60;
    uVar8 = local_60;
  }
  else {
    uVar10 = (undefined4)*(undefined8 *)(lVar6 + 0x1f8);
    uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x1f8) >> 0x20);
    local_60 = *(undefined4 *)(lVar6 + 0x200);
    uVar12 = (int)*(undefined8 *)(lVar6 + 0x1ec);
    uVar13 = (int)((ulonglong)*(undefined8 *)(lVar6 + 0x1ec) >> 0x20);
    uVar14 = (int)*(undefined8 *)(lVar6 + 0x204);
    uVar15 = (int)((ulonglong)*(undefined8 *)(lVar6 + 0x204) >> 0x20);
    uVar9 = *(undefined4 *)(lVar6 + 500);
    uVar8 = *(undefined4 *)(lVar6 + 0x20c);
  }
  UObject::PostLoadSubobjects(param_1,param_2);
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if ((cVar2 == '\0') && (lVar5 = *(longlong *)(param_1 + 0x10), lVar5 != 0)) {
    lVar4 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && ((*(byte *)(lVar5 + 0x204) & 1) != 0)) {
      FUN_1422e75d0(param_1);
    }
  }
  FUN_14223bbb0(param_1);
  if ((((*(longlong *)(param_1 + 0x168) != 0) && (lVar6 != 0)) &&
      (lVar6 != *(longlong *)(param_1 + 0x168))) &&
     (cVar2 = UObjectBaseUtility::IsIn(lVar6,param_1), cVar2 != '\0')) {
    lVar5 = *(longlong *)(param_1 + 0x168);
    *(ulonglong *)(lVar5 + 0x1f8) = CONCAT44(uVar11,uVar10);
    *(undefined4 *)(lVar5 + 0x200) = local_60;
    lVar5 = *(longlong *)(param_1 + 0x168);
    *(ulonglong *)(lVar5 + 0x1ec) = CONCAT44(uVar13,uVar12);
    *(undefined4 *)(lVar5 + 500) = uVar9;
    lVar5 = *(longlong *)(param_1 + 0x168);
    *(ulonglong *)(lVar5 + 0x204) = CONCAT44(uVar15,uVar14);
    *(undefined4 *)(lVar5 + 0x20c) = uVar8;
    lVar5 = *(longlong *)(lVar6 + 400);
    if ((lVar5 != 0) && (lVar5 != *(longlong *)(param_1 + 0x168))) {
      FUN_142399e30(*(longlong *)(param_1 + 0x168),lVar5,0);
      lVar5 = *(longlong *)(lVar6 + 400);
    }
    if ((lVar5 == lVar7) && (lVar5 != *(longlong *)(param_1 + 0x168))) {
      FUN_142399e30(lVar6,*(longlong *)(param_1 + 0x168),0);
    }
    *(undefined8 *)(lVar6 + 0x1f8) = DAT_1468b5da0;
    *(undefined4 *)(lVar6 + 0x200) = DAT_1468b5da8;
    *(undefined8 *)(lVar6 + 0x1ec) = _DAT_1468b5d90;
    *(undefined4 *)(lVar6 + 500) = DAT_1468b5d98;
    *(undefined8 *)(lVar6 + 0x204) = 0x3f8000003f800000;
    *(undefined4 *)(lVar6 + 0x20c) = 0x3f800000;
  }
  return;
}



// FUNCTION 142238800 FUN_142238800 body=97 status=ok
// SIG undefined FUN_142238800(void)

void FUN_142238800(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if ((*(byte *)((longlong)param_1 + 0x94) & 0x18) != 0x10) {
    lVar3 = (**(code **)(*param_1 + 0x148))();
    if (lVar3 != 0) {
      cVar2 = FUN_1428cdc10(lVar3);
      if (cVar2 != '\0') {
        FUN_142227cf0(param_1);
      }
    }
  }
  plVar1 = (longlong *)param_1[0x2d];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142238854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x488))(plVar1,0,1,0);
    return;
  }
  return;
}



// FUNCTION 142238870 FUN_142238870 body=186 status=ok
// SIG undefined FUN_142238870(void)

void FUN_142238870(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  
  if ((*(byte *)((longlong)param_1 + 0x93) & 2) == 0) {
    FUN_14223fa00();
    DAT_146aee956 = *(byte *)(param_1 + 0x19) >> 1 & 1;
    *(byte *)((longlong)param_1 + 0x93) = *(byte *)((longlong)param_1 + 0x93) | 2;
  }
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar3 = bVar1 ^ DAT_146aee955;
  bVar4 = bVar1 & 1;
  DAT_146aee955 = bVar4;
  *(byte *)(param_1 + 0x10) = bVar3 & 1 ^ bVar1;
  lVar2 = param_1[0x23];
  param_1[0x23] = DAT_146aeea70;
  DAT_146aeea70 = lVar2;
  if ((*(byte *)(param_1 + 0x10) & 1) != bVar4) {
    (**(code **)(*param_1 + 0x310))(param_1,bVar4);
  }
  if (param_1[0x23] != DAT_146aeea70) {
                    /* WARNING: Could not recover jumptable at 0x00014223891d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x448))(param_1);
    return;
  }
  return;
}



// FUNCTION 142238930 FUN_142238930 body=400 status=ok
// SIG undefined FUN_142238930(void)

void FUN_142238930(longlong param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  float local_38;
  float local_34;
  float local_30;
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  undefined8 local_18;
  float fStack_10;
  undefined4 uStack_c;
  
  uVar3 = FUN_142436ac0(&local_38,param_1 + 0xb0,param_1);
  lVar6 = *(longlong *)(param_1 + 0x168);
  if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0xb8) & 1) != 0)) {
    local_18 = *(undefined8 *)(lVar6 + 0x220);
    fStack_10 = *(float *)(lVar6 + 0x228);
    uStack_c = *(undefined4 *)(lVar6 + 0x22c);
    if ((local_38 == *(float *)(lVar6 + 0x220)) &&
       ((local_34 == *(float *)(lVar6 + 0x224) && (local_30 == fStack_10)))) {
      fVar2 = *(float *)(lVar6 + 0x210);
      local_28 = *(undefined8 *)(lVar6 + 0x210);
      fStack_20 = *(float *)(lVar6 + 0x218);
      fStack_1c = *(float *)(lVar6 + 0x21c);
      auVar1._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != *(float *)(lVar6 + 0x214));
      auVar1._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != fVar2);
      auVar1._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_20);
      auVar1._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_1c);
      iVar4 = movmskps(uVar3,auVar1);
      if (iVar4 != 0) {
        *(float *)(lVar6 + 0x250) = fVar2;
        *(float *)(lVar6 + 0x254) = *(float *)(lVar6 + 0x214);
        *(float *)(lVar6 + 600) = fStack_20;
        *(float *)(lVar6 + 0x25c) = fStack_1c;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_28,&local_18);
        *(undefined8 *)(lVar6 + 0x260) = *puVar5;
        *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar5 + 1);
      }
      if ((((float)*(undefined8 *)(lVar6 + 0x260) == *(float *)(param_1 + 0xbc)) &&
          (local_28._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x260) >> 0x20),
          local_28._4_4_ == *(float *)(param_1 + 0xc0))) &&
         (*(float *)(lVar6 + 0x268) == *(float *)(param_1 + 0xc4))) {
        return;
      }
      lVar6 = *(longlong *)(param_1 + 0x168);
    }
    local_18 = *(undefined8 *)(param_1 + 0xbc);
    fStack_10 = *(float *)(param_1 + 0xc4);
    if (lVar6 != 0) {
      fStack_20 = local_30 - *(float *)(lVar6 + 0x228);
      local_28 = CONCAT44(local_34 - *(float *)(lVar6 + 0x224),local_38 - *(float *)(lVar6 + 0x220))
      ;
      FUN_142391970(lVar6,&local_28,&local_18,0,0,0,0);
    }
  }
  return;
}



// FUNCTION 142238ac0 FUN_142238ac0 body=303 status=ok
// SIG undefined FUN_142238ac0(void)

void FUN_142238ac0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  byte local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    lVar3 = FUN_1429f11d0();
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
      local_38 = 0;
      uStack_30 = 0x3f80000000000000;
      local_28 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      local_48 = 0;
      local_40 = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      local_10 = 0;
      puVar4 = (undefined8 *)FUN_142436ac0(local_58,param_1 + 0xb0,param_1);
      local_48 = *puVar4;
      local_40 = *(undefined4 *)(puVar4 + 1);
      puVar4 = (undefined8 *)FRotator::Quaternion(param_1 + 0xbc,local_58);
      local_28 = *(undefined8 *)(param_1 + 0x98);
      local_38 = *puVar4;
      uStack_30 = puVar4[1];
      uStack_20 = *(undefined4 *)(param_1 + 0xa0);
      uStack_14 = *(undefined4 *)(param_1 + 0xac);
      local_10 = *(byte *)(param_1 + 200) & 1 | 2;
      uStack_1c = (undefined4)*(undefined8 *)(param_1 + 0xa4);
      uStack_18 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0xa4) >> 0x20);
      FUN_142718320(lVar1,&local_48,0);
    }
  }
  return;
}



// FUNCTION 142238bf0 FUN_142238bf0 body=106 status=ok
// SIG undefined FUN_142238bf0(void)

void FUN_142238bf0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    plVar1 = *(longlong **)(lVar2 + 0x38);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x340))(plVar1,param_1,param_3);
    }
    plVar1 = *(longlong **)(lVar2 + 0x108);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x340))(plVar1,param_1,param_3);
    }
  }
  return;
}



// FUNCTION 142238c60 FUN_142238c60 body=34 status=ok
// SIG undefined FUN_142238c60(void)

void FUN_142238c60(longlong param_1,longlong param_2)

{
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(int *)(param_2 + 0x40) < 0x1de)) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffff0000;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | *(ushort *)(param_1 + 0x1c) | 0x80000000
    ;
  }
  return;
}



// FUNCTION 142238c90 FUN_142238c90 body=2484 status=ok
// SIG undefined FUN_142238c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142238c90(longlong *param_1,float *param_2,undefined8 param_3,longlong *param_4,
                  char param_5,char param_6,char param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  float fVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
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
  float fVar51;
  undefined1 auStack_2a8 [32];
  undefined1 local_288;
  undefined4 local_278 [4];
  undefined8 local_268;
  float fStack_260;
  float fStack_25c;
  longlong *local_258;
  longlong **local_250;
  float *local_248;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 local_1f8;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined1 local_1d8 [8];
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  longlong local_1b8 [24];
  longlong *local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_258 = param_4;
  local_1f8 = param_3;
  lVar12 = (**(code **)(*param_1 + 0x148))();
  if (lVar12 == 0) {
    uVar9 = 0;
  }
  else {
    FUN_1428c5cc0(lVar12);
    uVar9 = *(undefined4 *)(lVar12 + 0x790);
  }
  bVar7 = *(byte *)(param_1 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar9;
  if ((bVar7 & 0x40) == 0) {
    if (param_5 != '\0') {
      plVar14 = (longlong *)((longlong)param_1 + 0x95);
      plVar4 = param_1 + 0x25;
      if (plVar4 != plVar14) {
        lVar12 = *plVar4;
        *(undefined1 *)plVar4 = *(undefined1 *)plVar14;
        *(char *)plVar14 = (char)lVar12;
        bVar7 = *(byte *)(param_1 + 0x12);
      }
    }
    *(byte *)(param_1 + 0x12) = bVar7 | 0x40;
  }
  lVar12 = param_1[0x2d];
  uVar19 = 0;
  lVar16 = lVar12;
  if (lVar12 == 0) {
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    FUN_140749cd0(param_1,local_1b8,0);
    if (0 < (int)local_f0) {
      plVar14 = local_1b8;
      if (local_f8 != (longlong *)0x0) {
        plVar14 = local_f8;
      }
      plVar4 = plVar14 + (int)local_f0;
      for (; lVar16 = lVar12, plVar14 != plVar4; plVar14 = plVar14 + 1) {
        lVar16 = *plVar14;
        if (((lVar16 != 0) && (*(longlong *)(lVar16 + 400) == 0)) &&
           (*(char *)(lVar16 + 0xca) == '\0')) {
          FUN_14223f010(param_1);
          break;
        }
      }
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free(local_f8);
    }
    if (lVar16 == 0) goto LAB_142239451;
  }
  local_268 = *(undefined8 *)(lVar16 + 0x1ec);
  fStack_260 = *(float *)(lVar16 + 500);
  local_250 = *(longlong ***)(lVar16 + 0x1f8);
  local_248 = (float *)CONCAT44(local_248._4_4_,*(undefined4 *)(lVar16 + 0x200));
  lVar12 = FUN_14178ca30(lVar16);
  lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + 0x10);
  if (lVar12 == 0) {
LAB_142238ecf:
    fVar36 = (float)local_268;
    fVar39 = local_268._4_4_;
    fVar42 = fStack_260;
  }
  else {
    lVar13 = UDynamicClass::GetPrivateStaticClass();
    lVar12 = *(longlong *)(lVar12 + 0x10);
    if ((*(int *)(lVar12 + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar12 + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
        lVar13 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_142238ecf;
    local_250 = DAT_1468b5da0;
    local_248 = (float *)CONCAT44(local_248._4_4_,DAT_1468b5da8);
    fVar36 = DAT_1468b5d90;
    fVar39 = DAT_1468b5d94;
    fVar42 = DAT_1468b5d98;
  }
  uVar9 = FRotator::Quaternion(&local_250,&local_268);
  fVar32 = fRam0000000146aee968;
  fVar31 = fRam0000000146aee964;
  fVar43 = _DAT_146aee960;
  fVar1 = *(float *)(lVar16 + 0x20c);
  fVar2 = *(float *)*(undefined1 (*) [12])(lVar16 + 0x204);
  auVar21 = *(undefined1 (*) [16])(param_2 + 8);
  local_1c8 = auVar21._0_4_;
  fStack_1c4 = auVar21._4_4_;
  fStack_1c0 = auVar21._8_4_;
  fStack_1bc = auVar21._12_4_;
  fVar23 = *param_2;
  fVar28 = param_2[1];
  fVar26 = param_2[2];
  fVar29 = param_2[3];
  fVar3 = *(float *)(lVar16 + 0x208);
  auVar20._12_4_ = 0;
  auVar20._0_12_ = *(undefined1 (*) [12])(lVar16 + 0x204);
  auVar21 = minps(auVar20,auVar21);
  auVar22._4_4_ = -(uint)(auVar21._4_4_ < fRam0000000146aee9f4);
  auVar22._0_4_ = -(uint)(auVar21._0_4_ < _DAT_146aee9f0);
  auVar22._8_4_ = -(uint)(auVar21._8_4_ < fRam0000000146aee9f8);
  auVar22._12_4_ = -(uint)(auVar21._12_4_ < fRam0000000146aee9fc);
  iVar10 = movmskps(uVar9,auVar22);
  if (iVar10 == 0) {
    fVar36 = local_1c8 * fVar36;
    fVar39 = fStack_1c4 * fVar39;
    fVar42 = fStack_1c0 * fVar42;
    fVar44 = fStack_1bc * 0.0;
    local_1e8 = fVar23 * fStack_25c * _DAT_146aee9b0 + fVar29 * (float)local_268 +
                fVar28 * fStack_260 * _DAT_146aee9a0 + fVar26 * local_268._4_4_ * _DAT_146aee990;
    fStack_1e4 = fVar23 * fStack_260 * fRam0000000146aee9b4 + fVar29 * local_268._4_4_ +
                 fVar28 * fStack_25c * fRam0000000146aee9a4 +
                 fVar26 * (float)local_268 * fRam0000000146aee994;
    fStack_1e0 = fVar23 * local_268._4_4_ * fRam0000000146aee9b8 + fVar29 * fStack_260 +
                 fVar28 * (float)local_268 * fRam0000000146aee9a8 +
                 fVar26 * fStack_25c * fRam0000000146aee998;
    fStack_1dc = fVar23 * (float)local_268 * fRam0000000146aee9bc + fVar29 * fStack_25c +
                 fVar28 * local_268._4_4_ * fRam0000000146aee9ac +
                 fVar26 * fStack_260 * fRam0000000146aee99c;
    fVar43 = fVar42 * fVar28 - fVar39 * fVar26;
    fVar31 = fVar36 * fVar26 - fVar42 * fVar23;
    fVar32 = fVar39 * fVar23 - fVar36 * fVar28;
    fVar33 = fVar44 * fVar29 - fVar44 * fVar29;
    fVar43 = fVar43 + fVar43;
    fVar31 = fVar31 + fVar31;
    fVar32 = fVar32 + fVar32;
    fVar33 = fVar33 + fVar33;
    local_1d8._4_4_ = (fVar43 * fVar26 - fVar32 * fVar23) + fVar31 * fVar29 + fVar39 + param_2[5];
    local_1d8._0_4_ = (fVar32 * fVar28 - fVar31 * fVar26) + fVar43 * fVar29 + fVar36 + param_2[4];
    fStack_1d0 = (fVar31 * fVar23 - fVar43 * fVar28) + fVar32 * fVar29 + fVar42 + param_2[6];
    fStack_1cc = (fVar33 * fVar29 - fVar33 * fVar29) + fVar33 * fVar29 + fVar44 + param_2[7];
  }
  else {
    fVar33 = param_2[4];
    fVar44 = param_2[5];
    fVar5 = param_2[6];
    fVar25 = fVar28 + fVar28;
    fVar27 = fVar26 + fVar26;
    fVar30 = (fVar23 + fVar23) * fVar23;
    fVar46 = fVar29 * (fVar23 + fVar23);
    fVar49 = (fVar29 * fVar27 + fVar23 * fVar25) * local_1c8;
    fVar50 = (fVar46 + fVar28 * fVar27) * fStack_1c4;
    fVar51 = (fVar29 * fVar25 + fVar23 * fVar27) * fStack_1c0;
    fVar34 = fStack_1c4 * (fVar23 * fVar25 - fVar29 * fVar27);
    fVar37 = fStack_1c0 * (fVar28 * fVar27 - fVar46);
    fVar40 = local_1c8 * (fVar23 * fVar27 - fVar29 * fVar25);
    fVar23 = (float)((uint)((_DAT_146aee960 - (fVar27 * fVar26 + fVar25 * fVar28)) * local_1c8) &
                    _DAT_146aee970);
    fVar26 = (float)((uint)((fRam0000000146aee964 - (fVar27 * fVar26 + fVar30)) * fStack_1c4) &
                    uRam0000000146aee974);
    fVar25 = (float)((uint)((fRam0000000146aee968 - (fVar25 * fVar28 + fVar30)) * fStack_1c0) &
                    uRam0000000146aee978);
    fVar30 = (float)((uint)((fRam0000000146aee96c - (fVar30 + fVar30)) * fStack_1bc) &
                    uRam0000000146aee97c);
    fVar27 = local_268._4_4_ + local_268._4_4_;
    fVar29 = fStack_260 + fStack_260;
    fVar46 = ((float)local_268 + (float)local_268) * (float)local_268;
    fVar28 = ((float)local_268 + (float)local_268) * fStack_25c;
    fVar45 = (fVar29 * fStack_25c + fVar27 * (float)local_268) * fVar2;
    fVar47 = (fVar28 + fVar29 * local_268._4_4_) * fVar3;
    fVar48 = (fVar27 * fStack_25c + fVar29 * (float)local_268) * fVar1;
    fVar35 = fVar3 * (fVar27 * (float)local_268 - fVar29 * fStack_25c);
    fVar38 = fVar1 * (fVar29 * local_268._4_4_ - fVar28);
    fVar41 = fVar2 * (fVar29 * (float)local_268 - fVar27 * fStack_25c);
    fVar28 = (float)((uint)((_DAT_146aee960 - (fVar29 * fStack_260 + fVar27 * local_268._4_4_)) *
                           fVar2) & _DAT_146aee970);
    fVar29 = (float)((uint)((fRam0000000146aee964 - (fVar29 * fStack_260 + fVar46)) * fVar3) &
                    uRam0000000146aee974);
    fVar27 = (float)((uint)((fRam0000000146aee968 - (fVar27 * local_268._4_4_ + fVar46)) * fVar1) &
                    uRam0000000146aee978);
    fVar46 = (float)((uint)((fRam0000000146aee96c - (fVar46 + fVar46)) * 0.0) & uRam0000000146aee97c
                    );
    local_238 = fVar45 * fVar34 + fVar28 * fVar23 + fVar41 * fVar51 + fVar46 * fVar33;
    fStack_234 = fVar45 * fVar26 + fVar28 * fVar49 + fVar41 * fVar37 + fVar46 * fVar44;
    fStack_230 = fVar45 * fVar50 + fVar28 * fVar40 + fVar41 * fVar25 + fVar46 * fVar5;
    fStack_22c = fVar45 * fVar30 + fVar28 * fVar30 + fVar41 * fVar30 + fVar46 * fRam0000000146aee96c
    ;
    local_228 = fVar29 * fVar34 + fVar35 * fVar23 + fVar47 * fVar51 + fVar46 * fVar33;
    fStack_224 = fVar29 * fVar26 + fVar35 * fVar49 + fVar47 * fVar37 + fVar46 * fVar44;
    fStack_220 = fVar29 * fVar50 + fVar35 * fVar40 + fVar47 * fVar25 + fVar46 * fVar5;
    fStack_21c = fVar29 * fVar30 + fVar35 * fVar30 + fVar47 * fVar30 + fVar46 * fRam0000000146aee96c
    ;
    local_218 = fVar38 * fVar34 + fVar48 * fVar23 + fVar27 * fVar51 + fVar46 * fVar33;
    fStack_214 = fVar38 * fVar26 + fVar48 * fVar49 + fVar27 * fVar37 + fVar46 * fVar44;
    fStack_210 = fVar38 * fVar50 + fVar48 * fVar40 + fVar27 * fVar25 + fVar46 * fVar5;
    fStack_20c = fVar38 * fVar30 + fVar48 * fVar30 + fVar27 * fVar30 + fVar46 * fRam0000000146aee96c
    ;
    local_208 = fVar39 * fVar34 + fVar36 * fVar23 + fVar42 * fVar51 + fRam0000000146aee96c * fVar33;
    fStack_204 = fVar39 * fVar26 + fVar36 * fVar49 + fVar42 * fVar37 + fRam0000000146aee96c * fVar44
    ;
    fStack_200 = fVar39 * fVar50 + fVar36 * fVar40 + fVar42 * fVar25 + fRam0000000146aee96c * fVar5;
    fStack_1fc = fVar39 * fVar30 + fVar36 * fVar30 + fVar42 * fVar30 +
                 fRam0000000146aee96c * fRam0000000146aee96c;
    FMatrix::RemoveScaling(&local_238);
    fVar36 = (float)(-(uint)(_DAT_146aee9f0 <= local_1c8 * fVar2) & (_DAT_146aee9e0 ^ (uint)fVar43)
                    ^ _DAT_146aee9e0);
    fVar39 = (float)(-(uint)(fRam0000000146aee9f4 <= fStack_1c4 * fVar3) &
                     (uRam0000000146aee9e4 ^ (uint)fVar31) ^ uRam0000000146aee9e4);
    fVar42 = (float)(-(uint)(fRam0000000146aee9f8 <= fStack_1c0 * fVar1) &
                     (uRam0000000146aee9e8 ^ (uint)fVar32) ^ uRam0000000146aee9e8);
    local_238 = local_238 * fVar36;
    fStack_234 = fStack_234 * fVar36;
    fStack_230 = fStack_230 * fVar36;
    fStack_220 = fStack_220 * fVar39;
    fStack_224 = fStack_224 * fVar39;
    local_228 = local_228 * fVar39;
    fStack_210 = fStack_210 * fVar42;
    local_218 = local_218 * fVar42;
    fStack_214 = fStack_214 * fVar42;
    FQuat::FQuat(&local_268,&local_238);
    local_278[0] = 0x322bcc77;
    auVar24._0_4_ = (float)local_268 * (float)local_268 + fStack_260 * fStack_260;
    auVar24._4_4_ = local_268._4_4_ * local_268._4_4_ + fStack_25c * fStack_25c;
    auVar24._8_4_ = fStack_260 * fStack_260 + (float)local_268 * (float)local_268;
    auVar24._12_4_ = fStack_25c * fStack_25c + local_268._4_4_ * local_268._4_4_;
    fVar28 = auVar24._4_4_ + auVar24._0_4_;
    fVar26 = auVar24._8_4_ + auVar24._4_4_;
    fVar29 = auVar24._12_4_ + auVar24._8_4_;
    fVar43 = auVar24._0_4_ + auVar24._12_4_;
    auVar21._4_4_ = fVar26;
    auVar21._0_4_ = fVar28;
    auVar21._8_4_ = fVar29;
    auVar21._12_4_ = fVar43;
    auVar21 = rsqrtps(auVar24,auVar21);
    fVar36 = auVar21._0_4_;
    fVar39 = auVar21._4_4_;
    fVar42 = auVar21._8_4_;
    fVar23 = auVar21._12_4_;
    fVar36 = (_DAT_146aee9d0 - fVar36 * fVar36 * fVar28 * _DAT_146aee9d0) * fVar36 + fVar36;
    fVar39 = (fRam0000000146aee9d4 - fVar39 * fVar39 * fVar26 * fRam0000000146aee9d4) * fVar39 +
             fVar39;
    fVar42 = (fRam0000000146aee9d8 - fVar42 * fVar42 * fVar29 * fRam0000000146aee9d8) * fVar42 +
             fVar42;
    fVar23 = (fRam0000000146aee9dc - fVar23 * fVar23 * fVar43 * fRam0000000146aee9dc) * fVar23 +
             fVar23;
    local_1d8._4_4_ = fStack_204;
    local_1d8._0_4_ = local_208;
    fStack_1d0 = fStack_200;
    local_1e8 = (float)(((uint)(((_DAT_146aee9d0 - fVar36 * fVar36 * fVar28 * _DAT_146aee9d0) *
                                 fVar36 + fVar36) * (float)local_268) ^ _DAT_146aee9c0) &
                        -(uint)(1e-08 <= fVar28) ^ _DAT_146aee9c0);
    fStack_1e4 = (float)(((uint)(((fRam0000000146aee9d4 -
                                  fVar39 * fVar39 * fVar26 * fRam0000000146aee9d4) * fVar39 + fVar39
                                 ) * local_268._4_4_) ^ uRam0000000146aee9c4) &
                         -(uint)(1e-08 <= fVar26) ^ uRam0000000146aee9c4);
    fStack_1e0 = (float)(((uint)(((fRam0000000146aee9d8 -
                                  fVar42 * fVar42 * fVar29 * fRam0000000146aee9d8) * fVar42 + fVar42
                                 ) * fStack_260) ^ uRam0000000146aee9c8) & -(uint)(1e-08 <= fVar29)
                        ^ uRam0000000146aee9c8);
    fStack_1dc = (float)(((uint)(((fRam0000000146aee9dc -
                                  fVar23 * fVar23 * fVar43 * fRam0000000146aee9dc) * fVar23 + fVar23
                                 ) * fStack_25c) ^ uRam0000000146aee9cc) & -(uint)(1e-08 <= fVar43)
                        ^ uRam0000000146aee9cc);
    fStack_1cc = 0.0;
  }
  fStack_1bc = fStack_1bc * 0.0;
  fStack_1c0 = fStack_1c0 * fVar1;
  fStack_1c4 = fStack_1c4 * fVar3;
  local_1c8 = local_1c8 * fVar2;
  local_288 = 0;
  FUN_142399d60(lVar16,&local_1e8,0,0);
LAB_142239451:
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  FUN_140a4ca80(param_1,local_1b8,0);
  plVar14 = local_1b8;
  if (local_f8 != (longlong *)0x0) {
    plVar14 = local_f8;
  }
  uVar17 = (longlong)(int)local_f0 & 0x1fffffffffffffff;
  if (plVar14 + (int)local_f0 < plVar14) {
    uVar17 = uVar19;
  }
  uVar18 = uVar19;
  if (uVar17 != 0) {
    do {
      plVar4 = (longlong *)*plVar14;
      if ((plVar4 != (longlong *)0x0) && ((*(byte *)(plVar4 + 0x19) & 8) == 0)) {
        (**(code **)(*plVar4 + 0x3b8))();
      }
      plVar14 = plVar14 + 1;
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar17);
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar12 = param_1[2];
  if (((lVar12 != 0) && (cVar8 = UObjectBaseUtility::IsA<UBlueprintGeneratedClass>(), cVar8 != '\0')
      ) && ((*(byte *)(lVar12 + 0x204) & 1) != 0)) {
    FUN_1422e75d0();
  }
  if (((lVar16 == 0) && (param_1[2] != 0)) &&
     (cVar8 = UObjectBaseUtility::IsA<UBlueprintGeneratedClass>(), cVar8 != '\0')) {
    bVar7 = 0x20;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)param_1 + 0x93) = *(byte *)((longlong)param_1 + 0x93) & 0xdf | bVar7;
  if (bVar7 == 0) {
    (**(code **)(*param_1 + 0x4c0))(param_1);
  }
  (**(code **)(*param_1 + 0x448))(param_1,local_1f8);
  param_1[0x2a] = (longlong)local_258;
  iVar10 = *(int *)((longlong)param_1 + 0xc);
  if (iVar10 < (int)DAT_1469e91c4) {
    uVar15 = iVar10 >> 0x1f & 0xffff;
    uVar11 = iVar10 + uVar15;
    uVar19 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar11 >> 0x10) * 8) +
             (longlong)(int)((uVar11 & 0xffff) - uVar15) * 0x18;
  }
  if (((*(uint *)(uVar19 + 8) >> 0x1d & 1) == 0) || (param_6 != '\0')) {
    (**(code **)(*param_1 + 0x410))(param_1);
    if (param_7 == '\0') {
      FUN_14222b9f0(param_1,param_2,1,0);
    }
    else if (lVar16 != 0) {
      local_250 = &local_258;
      local_258 = param_1;
      local_248 = param_2;
      FUN_14221e6d0(&DAT_146531890,local_278,&local_250,0);
    }
  }
  return;
}



// FUNCTION 142239650 FUN_142239650 body=101 status=ok
// SIG undefined FUN_142239650(void)

void FUN_142239650(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)((longlong)param_1 + 299);
  if (bVar1 != 0) {
    lVar2 = UGameplayStatics::GetPlayerController(param_1,bVar1 - 1);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014223968c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2f8))(param_1,lVar2);
      return;
    }
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_142534df0(*(undefined8 *)(lVar2 + 0x30),param_1,bVar1 - 1);
  }
  return;
}



// FUNCTION 1422396c0 FUN_1422396c0 body=47 status=ok
// SIG undefined FUN_1422396c0(void)

void FUN_1422396c0(longlong param_1)

{
  DAT_146aee955 = *(byte *)(param_1 + 0x80) & 1;
  DAT_146aeea70 = *(undefined8 *)(param_1 + 0x118);
  DAT_146aee956 = *(byte *)(param_1 + 200) >> 1 & 1;
  return;
}



// FUNCTION 1422396f0 FUN_1422396f0 body=718 status=ok
// SIG undefined FUN_1422396f0(void)

void FUN_1422396f0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 local_res8 [8];
  
  iVar7 = 0;
  param_1[0x1b] = 0;
  (**(code **)(*param_1 + 0x3b0))();
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar8 < DAT_146aeeab8) && (_Init_thread_header(&DAT_146aeeab8), DAT_146aeeab8 == -1)) {
    uVar4 = FUN_1428dfc70();
    FUN_1428dfc70();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"ReplicatedMovement",1);
    DAT_146aeeab0 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146aeeab8);
  }
  iVar6 = iVar7;
  if (0 < *(int *)(DAT_146aeeab0 + 0x30)) {
    do {
      (**(code **)*param_2)
                (param_2,*(short *)(DAT_146aeeab0 + 0x40) + (short)iVar6,
                 *(byte *)(param_1 + 0x12) >> 4 & 1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(DAT_146aeeab0 + 0x30));
  }
  if ((*piVar8 < DAT_146aeeac8) && (_Init_thread_header(&DAT_146aeeac8), DAT_146aeeac8 == -1)) {
    uVar4 = FUN_1428dfc70();
    FUN_1428dfc70();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"AttachmentReplication",1);
    DAT_146aeeac0 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146aeeac8);
  }
  iVar6 = iVar7;
  if (0 < *(int *)(DAT_146aeeac0 + 0x30)) {
    do {
      if ((param_1[0x2d] == 0) || ((*(byte *)(param_1[0x2d] + 0xb8) & 8) != 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      (**(code **)*param_2)(param_2,*(short *)(DAT_146aeeac0 + 0x40) + (short)iVar6,uVar4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(DAT_146aeeac0 + 0x30));
  }
  if ((*piVar8 < DAT_146aeead8) && (_Init_thread_header(&DAT_146aeead8), DAT_146aeead8 == -1)) {
    uVar4 = FUN_1428dfc70();
    FUN_1428dfc70();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"bHidden",1);
    DAT_146aeead0 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146aeead8);
  }
  if (0 < *(int *)(DAT_146aeead0 + 0x30)) {
    do {
      (**(code **)*param_2)
                (param_2,*(short *)(DAT_146aeead0 + 0x40) + (short)iVar7,
                 *(byte *)(param_1 + 0x80) & 1);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(DAT_146aeead0 + 0x30));
  }
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x378))(plVar1,param_1,param_2);
    }
  }
  return;
}



// FUNCTION 1422399c0 FUN_1422399c0 body=10 status=ok
// SIG undefined FUN_1422399c0(void)

void FUN_1422399c0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001422399c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3b0))();
  return;
}



// FUNCTION 1422399d0 FUN_1422399d0 body=310 status=ok
// SIG undefined FUN_1422399d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422399d0(float param_1,float param_2,char param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong uVar5;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  fVar8 = 0.0;
  if ((param_3 != '\0') && (param_1 = ABS(param_2), fVar8 = param_2, param_1 <= 1e-08)) {
    fVar8 = 2.592e+06;
  }
  uVar5 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  FUN_1412596f0(param_1,local_108,0);
  uVar7 = local_40 & 0xffffffff;
  puVar3 = local_48;
  uVar6 = uVar5;
  if (0 < (int)local_40) {
    do {
      puVar2 = local_108;
      if (puVar3 != (undefined1 *)0x0) {
        puVar2 = puVar3;
      }
      plVar1 = *(longlong **)(puVar2 + uVar6);
      if ((*(byte *)(plVar1 + 0x17) & 1) != 0) {
        (**(code **)(*plVar1 + 0x918))(plVar1,fVar8,0,param_4);
        uVar7 = local_40 & 0xffffffff;
        puVar3 = local_48;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 8;
    } while ((int)uVar4 < (int)uVar7);
  }
  if (puVar3 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142239b10 ProcessEvent body=121 status=ok
// SIG undefined ProcessEvent(void)

void AActor::ProcessEvent(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = DAT_1468b6147;
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (((lVar3 == 0) || ((cVar1 = FUN_1428c5cc0(lVar3), cVar1 == '\0' && (cVar2 == '\0')))) &&
     ((*(uint *)(param_1 + 1) >> 4 & 1) == 0)) {
    return;
  }
  cVar2 = IsGarbageCollecting();
  if (cVar2 == '\0') {
    FUN_141793ba0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 142239b90 FUN_142239b90 body=756 status=ok
// SIG undefined FUN_142239b90(void)

void FUN_142239b90(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
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
  
  *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 0x40;
  FUN_1428e0a60();
  *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) & 0xbf;
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  uStack_84 = 1;
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar4 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar10 = local_88 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar10;
      if (bVar6) goto LAB_142239c7b;
      uVar4 = puVar12[lVar9 + 1];
    }
    uStack_84 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar10 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_74 = (iStack_70 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142239c7b:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar11 = uVar4 & 0xffffffe0;
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
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar8 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar10 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_142239d47;
      uVar8 = puVar12[(longlong)iVar10 + 1];
      iVar10 = iVar10 + 1;
    }
    uVar8 = uVar8 - 1 & uVar8 ^ uVar8;
    iVar10 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_74 = (uVar11 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142239d47:
      uStack_74 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) break;
    plVar5 = *(longlong **)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (plVar5 != (longlong *)0x0) {
      lVar9 = FUN_1429ff160();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((((bVar6) && (plVar5 != *(longlong **)(param_1 + 0x168))) && (plVar5[0x32] != 0)) &&
         (*(byte *)((longlong)plVar5 + 0x24e) < *(byte *)(plVar5[0x32] + 0x24e))) {
        lVar9 = FUN_142a232e0();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          uVar7 = 2;
        }
        else {
          uVar7 = *(undefined1 *)(plVar5[0x32] + 0x24e);
        }
        (**(code **)(*plVar5 + 0x500))(plVar5,uVar7);
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 142239e90 FUN_142239e90 body=494 status=ok
// SIG undefined FUN_142239e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte FUN_142239e90(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150;
  int local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [192];
  undefined1 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  bVar11 = 0;
  iVar4 = *(int *)(param_2 + 8);
  uVar8 = 0;
  local_138 = param_5;
  local_140 = param_6;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  local_148 = iVar4;
  local_130 = param_4;
  FUN_140725150(param_1,local_128,1);
  uVar10 = uVar8;
  if (0 < (int)local_60) {
    do {
      puVar5 = local_128;
      if (local_68 != (undefined1 *)0x0) {
        puVar5 = local_68;
      }
      plVar2 = *(longlong **)(puVar5 + uVar8);
      if (((*(byte *)(plVar2 + 0x17) & 1) != 0) &&
         (iVar4 = (**(code **)(*plVar2 + 0x4e8))(plVar2), iVar4 != 0)) {
        iVar4 = *(int *)((longlong)plVar2 + 0xc);
        uVar6 = FUN_142311640(param_7);
        piVar7 = (int *)((ulonglong)(*(longlong *)(uVar6 + 0x20) != 0) - 1 & uVar6 |
                        *(ulonglong *)(uVar6 + 0x20));
        piVar1 = piVar7 + *(int *)(uVar6 + 0x28);
        for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
          if (*piVar7 == iVar4) goto LAB_142239fe7;
        }
        local_150 = 0;
        local_158 = param_7;
        local_160 = local_140;
        local_168 = local_138;
        bVar3 = (**(code **)(*plVar2 + 0x8a8))(plVar2,param_2,param_3,local_130);
        bVar11 = bVar11 | bVar3;
      }
LAB_142239fe7:
      uVar9 = (int)uVar10 + 1;
      uVar8 = uVar8 + 8;
      uVar10 = (ulonglong)uVar9;
      iVar4 = local_148;
    } while ((int)uVar9 < (int)local_60);
  }
  if ((param_8 != '\0') && (iVar4 < *(int *)(param_2 + 8))) {
    FUN_1423560b0(param_2);
  }
  if (local_68 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return bVar11;
}



// FUNCTION 14223a080 FUN_14223a080 body=573 status=ok
// SIG undefined FUN_14223a080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14223a080(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,char param_7)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulonglong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined8 local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined1 local_1b8 [12];
  float local_1ac;
  undefined1 local_128 [192];
  undefined1 *local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong uVar10;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  uVar10 = 0;
  local_1d8 = param_5;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  local_1d0 = param_4;
  local_1c8 = param_3;
  FUN_140725150(param_1,local_128);
  uVar13 = 0;
  uVar2 = *(undefined4 *)(param_3 + 1);
  uVar7 = local_60 & 0xffffffff;
  *(undefined8 *)(param_2 + 0x44) = *param_3;
  *(undefined4 *)(param_2 + 0x4c) = uVar2;
  uVar2 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(param_2 + 0x50) = *param_4;
  *(undefined4 *)(param_2 + 0x58) = uVar2;
  puVar8 = local_68;
  uVar11 = uVar10;
  if (0 < (int)local_60) {
    do {
      puVar6 = local_128;
      if (puVar8 != (undefined1 *)0x0) {
        puVar6 = puVar8;
      }
      plVar3 = *(longlong **)(puVar6 + uVar11);
      if ((*(byte *)(plVar3 + 0x17) & 1) != 0) {
        iVar5 = (**(code **)(*plVar3 + 0x4e8))(plVar3);
        if (iVar5 != 0) {
          iVar5 = *(int *)((longlong)plVar3 + 0xc);
          uVar7 = FUN_142311640(param_6);
          piVar12 = (int *)((ulonglong)(*(longlong *)(uVar7 + 0x20) != 0) - 1 & uVar7 |
                           *(ulonglong *)(uVar7 + 0x20));
          piVar1 = piVar12 + *(int *)(uVar7 + 0x28);
          for (; piVar12 != piVar1; piVar12 = piVar12 + 1) {
            if (*piVar12 == iVar5) goto LAB_14223a233;
          }
          _guard_xfg_dispatch_icall_nop(local_1b8,0,0x90);
          local_1ac = 1.0;
          local_1e8 = 0;
          local_1f0 = param_6;
          local_1f8 = local_1d8;
          cVar4 = (**(code **)(*plVar3 + 0x8a0))(plVar3,local_1b8,local_1c8,local_1d0);
          if ((cVar4 != '\0') && (local_1ac < *(float *)(param_2 + 0xc))) {
            uVar13 = 1;
            FUN_140729f20(param_2,local_1b8);
            puVar8 = local_68;
            if (param_7 != '\0') break;
          }
        }
LAB_14223a233:
        uVar7 = local_60 & 0xffffffff;
        puVar8 = local_68;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 8;
    } while ((int)uVar9 < (int)uVar7);
  }
  if (puVar8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return uVar13;
}



// FUNCTION 14223a2c0 FUN_14223a2c0 body=170 status=ok
// SIG undefined FUN_14223a2c0(void)

void FUN_14223a2c0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *puStack_10;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x35) != '\0') {
      FTickFunction::UnRegisterTickFunction(param_1 + 0x28);
    }
  }
  else if ((*(byte *)(param_1 + 0x34) & 2) != 0) {
    *(longlong *)(param_1 + 0x78) = param_1;
    if (((*(byte *)(param_1 + 0x34) & 4) == 0) && (*(char *)(param_1 + 0x37) == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    FUN_14288e3d0(param_1 + 0x28,uVar1);
    uVar1 = FUN_1429a0270();
    uVar1 = UObjectBaseUtility::GetTypedOuter(param_1,uVar1);
    FTickFunction::RegisterTickFunction(param_1 + 0x28,uVar1);
  }
  puStack_10 = local_res10;
  local_res10[0] = 0;
  local_18 = FUN_142224910;
  lVar2 = FUN_1415d8310(&local_18,&DAT_1465318e0);
  *(longlong *)(lVar2 + 0x18) = param_1;
  return;
}



// FUNCTION 14223a370 FUN_14223a370 body=676 status=ok
// SIG undefined FUN_14223a370(void)

void FUN_14223a370(longlong *param_1,byte param_2,char param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 local_res20 [8];
  undefined8 local_98;
  uint *puStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  cVar6 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar6 == '\0') {
    if ((*(byte *)((longlong)param_1 + 0x93) >> 4 & 1) != param_2) {
      puStack_90 = (uint *)local_res20;
      local_res20[0] = 0;
      local_98 = FUN_142224910;
      lVar7 = FUN_1415d8310(&local_98,&DAT_1465318e0);
      (**(code **)(*param_1 + 0x540))(param_1,param_2);
      *(byte *)((longlong)param_1 + 0x93) =
           *(byte *)((longlong)param_1 + 0x93) & 0xef | param_2 << 4;
      *(undefined8 *)(lVar7 + 0x18) = 0;
    }
    if (param_3 != '\0') {
      plVar2 = param_1 + 0x56;
      uVar3 = *(uint *)(param_1 + 0x5b);
      puVar1 = (uint *)(param_1 + 0x58);
      local_98._0_4_ = 0;
      local_98._4_4_ = 1;
      uStack_84 = 0;
      iStack_80 = 0;
      if (uVar3 != 0) {
        puVar10 = (uint *)param_1[0x5a];
        if ((uint *)param_1[0x5a] == (uint *)0x0) {
          puVar10 = puVar1;
        }
        uVar4 = *puVar10;
        iStack_80 = 0;
        local_98._0_4_ = 0;
        while (uVar4 == 0) {
          lVar7 = (longlong)(int)local_98;
          iStack_80 = iStack_80 + 0x20;
          iVar8 = (int)local_98 + 1;
          bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
          local_98._0_4_ = iVar8;
          if (bVar5) goto LAB_14223a4dc;
          uVar4 = puVar10[lVar7 + 1];
        }
        local_98._4_4_ = -uVar4 & uVar4;
        iVar8 = 0x1f;
        if (local_98._4_4_ != 0) {
          for (; local_98._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (local_98._4_4_ == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_84 = (iStack_80 - iVar8) + 0x1f;
        if ((int)uVar3 < (int)uStack_84) {
LAB_14223a4dc:
          uStack_84 = uVar3;
        }
      }
      uVar4 = *(uint *)(param_1 + 0x5b);
      uStack_60 = 0xffffffff;
      uStack_5c = uStack_84;
      local_58 = CONCAT44(uStack_7c,iStack_80);
      local_88 = -1 << ((byte)uVar4 & 0x1f);
      iStack_48 = (int)local_98;
      uStack_44 = local_98._4_4_;
      uVar11 = uVar4 & 0xffffffe0;
      iStack_70 = (int)local_98;
      uStack_6c = local_98._4_4_;
      puStack_90 = puVar1;
      uStack_84 = uVar4;
      local_68 = puVar1;
      local_50 = plVar2;
      puStack_40 = puVar1;
      uStack_30 = local_58;
      local_78 = plVar2;
      uStack_38 = uStack_60;
      uStack_34 = uStack_5c;
      if (uVar4 != uVar3) {
        puVar10 = (uint *)param_1[0x5a];
        if ((uint *)param_1[0x5a] == (uint *)0x0) {
          puVar10 = puVar1;
        }
        uVar9 = puVar10[(int)uVar4 >> 5] & local_88;
        iVar8 = (int)uVar4 >> 5;
        while (uVar9 == 0) {
          uVar11 = uVar11 + 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
          goto LAB_14223a5a1;
          uVar9 = puVar10[(longlong)iVar8 + 1];
          local_88 = 0xffffffff;
          iVar8 = iVar8 + 1;
        }
        uVar9 = -uVar9 & uVar9;
        iVar8 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uVar9 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_84 = (uVar11 - iVar8) + 0x1f;
        uVar4 = uStack_84;
        if ((int)uVar3 < (int)uStack_84) {
LAB_14223a5a1:
          uStack_84 = uVar3;
          uVar4 = uVar3;
        }
      }
      while (((uStack_5c != uVar4 || (local_68 != puVar1)) || (local_78 != plVar2))) {
        lVar7 = *(longlong *)(*local_78 + (longlong)(int)uStack_5c * 0x10);
        if (lVar7 != 0) {
          FUN_14234b0f0(lVar7,param_2);
        }
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      }
    }
  }
  return;
}



// FUNCTION 14223a620 FUN_14223a620 body=41 status=ok
// SIG undefined FUN_14223a620(void)

void FUN_14223a620(longlong *param_1)

{
  (**(code **)(*param_1 + 0x4c8))();
  FUN_142234b20(param_1,0);
  *(byte *)((longlong)param_1 + 0x93) = *(byte *)((longlong)param_1 + 0x93) & 0xdf;
  return;
}



// FUNCTION 14223a650 RegisterMovementComponent body=258 status=ok
// SIG undefined RegisterMovementComponent(void)

undefined8
UAvoidanceManager::RegisterMovementComponent(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 local_58 [80];
  
  if (param_2 != 0) {
    uVar5 = URVOAvoidanceInterface::GetPrivateStaticClass();
    plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar5);
    if (plVar6 != (longlong *)0x0) {
      iVar8 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x8c);
      iVar1 = *(int *)(param_1 + 0xb0);
      if (iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0xa8);
        iVar9 = iVar1 + -1;
        iVar7 = *(int *)(param_1 + 0xb0);
        iVar8 = *(int *)(lVar2 + (longlong)iVar9 * 4);
        iVar3 = (iVar7 - iVar9) + -1;
        if (iVar3 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar2 + (longlong)iVar9 * 4),(void *)(lVar2 + (longlong)iVar1 * 4),
                     (longlong)iVar3 << 2);
          iVar7 = *(int *)(param_1 + 0xb0);
        }
        *(int *)(param_1 + 0xb0) = iVar7 + -1;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6,iVar8);
      (**(code **)(*plVar6 + 0x20))(plVar6,param_3);
      FUN_14223b2e0(param_1);
      FNavAvoidanceData::FNavAvoidanceData(local_58,param_1,plVar6);
      uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
      UpdateRVO_Internal(param_1,uVar4,local_58);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14223a760 Rehash body=529 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_14223a89f;
        uVar8 = puVar12[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_14223a89f:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar12 = (uint *)((longlong)iStack_1c * 0x50 + *param_1);
        uVar8 = (puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[0x11] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[0x10] =
             *(uint *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 14223a980 Remove body=361 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint local_res8;
  uint local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar7 = (longlong)(int)((param_2[1] ^ *param_2) & (int)param_1[9] - 1U);
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  piVar1 = (int *)((longlong)plVar5 + lVar7 * 4);
  iVar2 = *(int *)((longlong)plVar5 + lVar7 * 4);
  while( true ) {
    if (iVar2 == -1) {
      return 0;
    }
    local_res8 = *param_2;
    local_resc = param_2[1];
    puVar8 = (undefined4 *)((longlong)iVar2 * 0x50 + *param_1);
    local_res18 = *puVar8;
    local_res1c = puVar8[1];
    cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res18,&local_res8);
    if (cVar4 != '\0') break;
    iVar2 = puVar8[0x10];
    piVar1 = puVar8 + 0x10;
  }
  lVar7 = (longlong)*piVar1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar6 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar3 + 0x44 + lVar7 * 0x50));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar9 = (int *)((longlong)plVar5 + lVar6 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar6 * 4);
    while (iVar2 != -1) {
      if (iVar2 == *piVar1) {
        *piVar9 = *(int *)(lVar3 + 0x40 + lVar7 * 0x50);
        break;
      }
      piVar9 = (int *)(lVar3 + 0x40 + (longlong)iVar2 * 0x50);
      iVar2 = *piVar9;
    }
  }
  TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,lVar7,1);
  return 1;
}



// FUNCTION 14223aaf0 Remove body=144 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar4 = (longlong)
            (int)((int)param_1[9] - 1U & *(uint *)(lVar2 + 0x44 + (longlong)param_2 * 0x50));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar2 + 0x40 + (longlong)param_2 * 0x50);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x40 + (longlong)iVar1 * 0x50);
      iVar1 = *piVar5;
    }
  }
  TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 14223ab80 FUN_14223ab80 body=214 status=ok
// SIG undefined FUN_14223ab80(void)

void FUN_14223ab80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FTickFunction::RemovePrerequisite(*(longlong *)(param_1 + 0x168) + 0x30,param_2,param_2 + 0x28);
  }
  FTickFunction::RemovePrerequisite(param_1 + 0x28,param_2,param_2 + 0x28);
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x178);
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x170);
      if (*(longlong *)(lVar5 + lVar1) == param_2) {
        iVar2 = (iVar3 - iVar4) + -1;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar1 + (longlong)iVar4 * 8),
                     (void *)(lVar1 + (longlong)(iVar3 - iVar2) * 8),(longlong)iVar2 << 3);
          iVar3 = *(int *)(param_1 + 0x178);
        }
        *(int *)(param_1 + 0x178) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x170));
        iVar3 = *(int *)(param_1 + 0x178);
        iVar4 = iVar4 + -1;
        lVar5 = lVar5 + -8;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < iVar3);
  }
  return;
}



// FUNCTION 14223ac60 FUN_14223ac60 body=31 status=ok
// SIG undefined FUN_14223ac60(void)

void FUN_14223ac60(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x310,local_res10);
  return;
}



// FUNCTION 14223ac80 RemoveOutdatedObjects body=716 status=ok
// SIG undefined RemoveOutdatedObjects(void)

void UAvoidanceManager::RemoveOutdatedObjects(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  bool bVar10;
  bool bVar11;
  int *piVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  float fVar18;
  int local_b8;
  uint uStack_b4;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_90;
  uint uStack_8c;
  uint *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) & 0xfffffffe;
  plVar1 = (longlong *)(param_1 + 0x58);
  uVar5 = *(uint *)(param_1 + 0x80);
  puVar3 = (uint *)(param_1 + 0x68);
  local_b8 = 0;
  bVar11 = false;
  uStack_b4 = 1;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar5 != 0) {
    puVar17 = *(uint **)(param_1 + 0x78);
    if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
      puVar17 = puVar3;
    }
    uVar6 = *puVar17;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar6 == 0) {
      lVar14 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar15 = local_b8 + 1;
      bVar10 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar15;
      if (bVar10) goto LAB_14223ad6a;
      uVar6 = puVar17[lVar14 + 1];
    }
    uStack_b4 = -uVar6 & uVar6;
    iVar15 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    uStack_a4 = (iStack_a0 - iVar15) + 0x1f;
    if ((int)uVar5 < (int)uStack_a4) {
LAB_14223ad6a:
      uStack_a4 = uVar5;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x80);
  uStack_80 = 0xffffffff;
  uStack_7c = uStack_a4;
  local_78 = CONCAT44(uStack_9c,iStack_a0);
  uStack_68 = CONCAT44(uStack_b4,local_b8);
  uVar16 = uVar6 & 0xffffffe0;
  iStack_90 = local_b8;
  uStack_8c = uStack_b4;
  local_88 = puVar3;
  local_70 = plVar1;
  puStack_60 = puVar3;
  uStack_50 = local_78;
  uStack_58 = uStack_80;
  uStack_54 = uStack_7c;
  uStack_a4 = uVar6;
  if (uVar6 != uVar5) {
    puVar17 = *(uint **)(param_1 + 0x78);
    if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
      puVar17 = puVar3;
    }
    uVar13 = puVar17[(int)uVar6 >> 5] & -1 << ((byte)uVar6 & 0x1f);
    iVar15 = (int)uVar6 >> 5;
    while (uVar13 == 0) {
      uVar16 = uVar16 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar15)
      goto LAB_14223ae32;
      uVar13 = puVar17[(longlong)iVar15 + 1];
      iVar15 = iVar15 + 1;
    }
    uVar13 = -uVar13 & uVar13;
    iVar15 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    uStack_a4 = (uVar16 - iVar15) + 0x1f;
    if ((int)uVar5 < (int)uStack_a4) {
LAB_14223ae32:
      uStack_a4 = uVar5;
    }
  }
  do {
    lVar14 = (longlong)(int)uStack_7c;
    if ((uStack_7c == uStack_a4) && (local_88 == puVar3)) {
      if (bVar11) {
        FUN_14223b2e0(param_1);
      }
      return;
    }
    lVar8 = *plVar1;
    fVar18 = *(float *)(param_1 + 0x30) * 0.5;
    fVar4 = *(float *)(lVar8 + 0x1c + lVar14 * 0x48);
    if (fVar4 <= fVar18) {
      if (0.0 < fVar4) {
        iVar15 = *(int *)(lVar8 + lVar14 * 0x48);
        plVar2 = (longlong *)(param_1 + 0xa8);
        *(undefined4 *)(lVar8 + 0x1c + lVar14 * 0x48) = 0;
        piVar9 = (int *)*plVar2;
        iVar7 = *(int *)(param_1 + 0xb0);
        for (piVar12 = piVar9; piVar12 != piVar9 + iVar7; piVar12 = piVar12 + 1) {
          if (*piVar12 == iVar15) {
            if ((int)((longlong)piVar12 - (longlong)piVar9 >> 2) != -1) goto LAB_14223aefd;
            break;
          }
        }
        *(int *)(param_1 + 0xb0) = iVar7 + 1;
        if (*(int *)(param_1 + 0xb4) < iVar7 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2,iVar7);
        }
        *(int *)(*plVar2 + (longlong)iVar7 * 4) = iVar15;
      }
    }
    else {
      bVar11 = true;
      *(float *)(lVar8 + 0x1c + lVar14 * 0x48) = fVar4 - fVar18;
    }
LAB_14223aefd:
    uStack_80 = uStack_80 & ~uStack_8c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
  } while( true );
}



// FUNCTION 14223af50 FUN_14223af50 body=131 status=ok
// SIG undefined FUN_14223af50(void)

void FUN_14223af50(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  (**(code **)(*param_1 + 0x70))(param_1,0);
  iVar3 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                    (param_1 + 0x56,param_2);
  if (0 < iVar3) {
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x60,local_res10);
    lVar1 = local_res10[0];
    cVar2 = FUN_142340f60(local_res10[0]);
    if (cVar2 == '\0') {
      if (*(char *)(lVar1 + 0xca) != '\x03') {
        return;
      }
      param_1 = param_1 + 0x62;
    }
    else {
      param_1 = param_1 + 100;
    }
    TArray<AOnlineBeaconClient_*,FDefaultAllocator>::RemoveSingleSwap(param_1,local_res10,1);
  }
  return;
}



// FUNCTION 14223b020 FUN_14223b020 body=458 status=ok
// SIG undefined FUN_14223b020(void)

undefined1 FUN_14223b020(longlong *param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *local_res18;
  
  if ((param_3 == 0) || (param_3 == param_1[4])) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((param_4 >> 1 & 1) == 0) && (bVar2)) {
    FUN_14223a370(param_1,0,1);
    (**(code **)(*param_1 + 0x4d8))(param_1,0);
    uVar4 = FUN_1429a0270();
    lVar5 = UObjectBaseUtility::GetTypedOuter(param_1,uVar4);
    if (lVar5 != 0) {
      puVar1 = *(undefined8 **)(lVar5 + 0xa0);
      for (puVar7 = puVar1; puVar7 != puVar1 + *(int *)(lVar5 + 0xa8); puVar7 = puVar7 + 1) {
        if ((longlong *)*puVar7 == param_1) {
          iVar6 = (int)((longlong)puVar7 - (longlong)puVar1 >> 3);
          if (iVar6 != -1) {
            puVar1[iVar6] = 0;
            local_res18 = param_1;
            TArray<FName,FDefaultAllocator>::Remove(lVar5 + 0xb0,&local_res18);
          }
          break;
        }
      }
    }
  }
  uVar3 = FUN_14175ed80(param_1,param_2,param_3,param_4 & 0xffffffff);
  if (((param_4 >> 1 & 1) == 0) && (bVar2)) {
    uVar4 = FUN_1429a0270();
    lVar5 = UObjectBaseUtility::GetTypedOuter(param_1,uVar4);
    if (lVar5 != 0) {
      iVar6 = *(int *)(lVar5 + 0xa8);
      *(int *)(lVar5 + 0xa8) = iVar6 + 1;
      if (*(int *)(lVar5 + 0xac) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar5 + 0xa0,iVar6);
      }
      *(longlong **)(*(longlong *)(lVar5 + 0xa0) + (longlong)iVar6 * 8) = param_1;
      iVar6 = *(int *)(lVar5 + 0xb8);
      *(int *)(lVar5 + 0xb8) = iVar6 + 1;
      if (*(int *)(lVar5 + 0xbc) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar5 + 0xb0,iVar6);
      }
      *(longlong **)(*(longlong *)(lVar5 + 0xb0) + (longlong)iVar6 * 8) = param_1;
      lVar5 = ULevel::GetWorld(lVar5);
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0x6f8) != '\0')) {
        (**(code **)(*param_1 + 0x4c0))(param_1);
      }
      FUN_14223a370(param_1,1);
    }
  }
  return uVar3;
}



// FUNCTION 14223b1f0 FUN_14223b1f0 body=226 status=ok
// SIG undefined FUN_14223b1f0(void)

byte FUN_14223b1f0(longlong param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  byte bVar8;
  
  uVar5 = 0;
  plVar6 = *(longlong **)(param_1 + 0x300);
  bVar8 = 0;
  uVar7 = (longlong)*(int *)(param_1 + 0x308) & 0x1fffffffffffffff;
  if (plVar6 + *(int *)(param_1 + 0x308) < plVar6) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    do {
      plVar1 = (longlong *)*plVar6;
      if (((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 0x17) & 8) != 0)) &&
         (((*param_4 & 2) != 0 ||
          ((cVar2 = FUN_142341160(plVar1,param_2), cVar2 != '\0' ||
           (cVar2 = FUN_1423e7c10(param_2,plVar1), cVar2 == '\0')))))) {
        bVar3 = (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,param_3,param_4);
        bVar4 = FUN_1423fb1a0(param_2,plVar1,param_3,param_4);
        bVar8 = bVar8 | bVar3 | bVar4;
      }
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar7);
  }
  return bVar8;
}



// FUNCTION 14223b2e0 FUN_14223b2e0 body=563 status=ok
// SIG undefined FUN_14223b2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14223b2e0(longlong param_1)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
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
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    lVar3 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14223b34b;
  }
  lVar5 = 0;
LAB_14223b34b:
  if (((*(uint *)(param_1 + 0xd8) & 1) == 0) && (lVar5 != 0)) {
    *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
    local_a8 = UAvoidanceManager::RemoveOutdatedObjects;
    uStack_a0 = 0;
    if (*(longlong *)(lVar5 + 400) == 0) {
      uVar6 = *(undefined8 *)(lVar5 + 0x3f8);
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
    }
    fVar1 = *(float *)(param_1 + 0x30);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar4 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_9c;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar6,param_1 + 0x50,&local_98,fVar1 * 0.5);
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
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar5 = FMemory::Realloc(plVar4,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
  }
  return;
}



// FUNCTION 14223b520 ReregisterAllComponents body=38 status=ok
// SIG undefined ReregisterAllComponents(void)

void AActor::ReregisterAllComponents(longlong *param_1)

{
  (**(code **)(*param_1 + 0x4d8))(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00014223b53f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4c0))(param_1);
  return;
}



// FUNCTION 14223b550 FUN_14223b550 body=1610 status=ok
// SIG undefined FUN_14223b550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14223b550(longlong *param_1)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  char *pcVar14;
  byte bVar15;
  longlong *plVar16;
  ulonglong uVar17;
  char *pcVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_128;
  undefined1 local_127 [7];
  uint local_120;
  char *local_118;
  uint local_110;
  int local_10c;
  longlong local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_b8 = param_1;
  FEditorScriptExecutionGuard::FEditorScriptExecutionGuard();
  uVar13 = 0;
  bVar15 = *(byte *)((longlong)param_1 + 0x92) & 0x20;
  if (bVar15 == 0) {
    iVar12 = *(int *)((longlong)param_1 + 0xc);
    uVar8 = uVar13;
    if (iVar12 < (int)DAT_1469e91c4) {
      uVar10 = iVar12 >> 0x1f & 0xffff;
      uVar6 = iVar12 + uVar10;
      uVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
    }
    if (((*(uint *)(uVar8 + 8) >> 0x1d & 1) != 0) || ((*(uint *)(param_1 + 1) & 0x18000) != 0))
    goto LAB_14223b5de;
    bVar4 = true;
  }
  else {
LAB_14223b5de:
    bVar4 = false;
  }
  if ((((bVar15 == 0) || (DAT_146b17150 == 0)) || ((*(byte *)(DAT_146b17150 + 0x10c8) & 1) == 0)) &&
     (bVar4)) {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x33);
    if (cVar5 != '\0') {
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x33);
      if (*(longlong **)(lVar7 + 0x118) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar7 + 0x118) + 0x530))();
        goto LAB_14223bb79;
      }
    }
    local_128 = DAT_1468b6169;
    local_88 = _DAT_1468b5b80;
    uStack_80 = uRam00000001468b5b88;
    iVar12 = 0;
    local_d8 = _DAT_1464aa810;
    uStack_d0 = _DAT_1464aa818;
    local_98 = _DAT_1468b5b70;
    uStack_90 = uRam00000001468b5b78;
    local_a8 = DAT_1468b6150;
    local_c8 = DAT_1468b5da0;
    DAT_1468b6169 = 1;
    DAT_1468b6150 = 0;
    local_78 = CONCAT44(uRam00000001468b5b94,_DAT_1468b5b90);
    uStack_70 = CONCAT44(uRam00000001468b5b9c,uRam00000001468b5b98);
    uStack_c0 = DAT_1468b5da8;
    local_108 = 0;
    local_e8 = (longlong *)0x0;
    local_b0 = 0;
    local_118 = (char *)0x0;
    local_10c = 0;
    lVar7 = operator_new(0x60);
    if (lVar7 == 0) {
      local_f0 = 0;
    }
    else {
      local_f0 = FUN_142325450(lVar7,param_1);
    }
    local_100 = (longlong *)0x0;
    local_f8 = 0;
    FUN_14222e300(param_1,&local_100);
    uVar8 = (ulonglong)((longlong)(local_100 + (int)local_f8) + (7 - (longlong)local_100)) >> 3;
    if (local_100 + (int)local_f8 < local_100) {
      uVar8 = uVar13;
    }
    plVar16 = local_100;
    uVar17 = uVar13;
    uVar19 = uVar13;
    if (uVar8 != 0) {
      do {
        plVar2 = (longlong *)*plVar16;
        cVar5 = FWeakObjectPtr::IsValid(plVar2 + 0x33);
        if (((cVar5 == '\0') && (plVar3 = (longlong *)plVar2[0x2d], plVar3 != (longlong *)0x0)) &&
           ((plVar3[0x32] != 0 &&
            (cVar5 = FUN_142340f60(), uVar6 = uRam0000000146aee96c, cVar5 != '\0')))) {
          local_120 = (int)uVar13 + 1;
          uVar10 = _DAT_146aee960 & _DAT_146aee970;
          uVar20 = uRam0000000146aee964 & uRam0000000146aee974;
          uVar21 = uRam0000000146aee968 & uRam0000000146aee978;
          uVar22 = uRam0000000146aee96c & uRam0000000146aee97c;
          lVar7 = plVar3[0x33];
          local_110 = local_120;
          if (local_10c < (int)local_120) {
            TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(&local_118,uVar13);
          }
          plVar11 = (longlong *)(local_118 + (longlong)(int)uVar13 * 0x50);
          *plVar11 = (longlong)plVar2;
          plVar11[1] = lVar7;
          *(char *)(plVar11 + 2) = '\0';
          *(undefined4 *)(plVar11 + 4) = 0;
          pcVar18 = (char *)((longlong)plVar11 + 0x24);
          pcVar18[0] = '\0';
          pcVar18[1] = '\0';
          pcVar18[2] = '\0';
          pcVar18[3] = '\0';
          *(undefined4 *)(plVar11 + 5) = 0;
          *(uint *)((longlong)plVar11 + 0x2c) = uVar6;
          plVar11[6] = 0;
          plVar11[7] = 0;
          *(uint *)(plVar11 + 8) = uVar10;
          *(uint *)((longlong)plVar11 + 0x44) = uVar20;
          *(uint *)(plVar11 + 9) = uVar21;
          *(uint *)((longlong)plVar11 + 0x4c) = uVar22;
          local_120 = local_110;
          (**(code **)(*plVar2 + 0x70))(plVar2,CONCAT71((int7)((ulonglong)plVar11 >> 8),1));
          (**(code **)(*plVar3 + 0x418))(plVar3,&DAT_146532190);
          uVar13 = (ulonglong)local_120;
        }
        iVar12 = (int)uVar13;
        uVar19 = uVar19 + 1;
        param_1 = local_b8;
        plVar16 = plVar16 + 1;
        uVar17 = local_b0;
      } while (uVar19 != uVar8);
    }
    lVar7 = local_108;
    if (param_1[0x2d] != 0) {
      if ((*(longlong *)(param_1[0x2d] + 400) != 0) &&
         (cVar5 = FUN_142340f60(), lVar7 = local_108, cVar5 != '\0')) {
        plVar16 = (longlong *)param_1[0x2d];
        uVar17 = plVar16[0x32];
        lVar7 = plVar16[0x33];
        plVar2 = *(longlong **)(uVar17 + 0x118);
        (**(code **)(*plVar16 + 0x418))(plVar16,&DAT_146532190);
        local_e8 = (longlong *)0x0;
        if (plVar2 != param_1) {
          local_e8 = plVar2;
        }
      }
      FUN_140942fb0(param_1[0x2d],0,0);
      lVar9 = param_1[0x2d];
      local_98 = *(undefined8 *)(lVar9 + 0x210);
      uStack_90 = *(undefined8 *)(lVar9 + 0x218);
      local_88 = *(undefined8 *)(lVar9 + 0x220);
      uStack_80 = *(undefined8 *)(lVar9 + 0x228);
      local_78 = *(undefined8 *)(lVar9 + 0x230);
      uStack_70 = *(undefined8 *)(lVar9 + 0x238);
      local_d8 = *(undefined8 *)(lVar9 + 0x270);
      uStack_d0 = *(undefined8 *)(lVar9 + 0x278);
      local_c8 = *(undefined8 *)(lVar9 + 0x280);
      uStack_c0 = *(undefined4 *)(lVar9 + 0x288);
      uStack_bc = *(undefined4 *)(lVar9 + 0x28c);
    }
    if (local_100 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_142227440(param_1);
    FUN_14223bcd0(param_1);
    lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    if (((lVar9 != 0) && (cVar5 = FUN_1428cfb70(lVar9), cVar5 == '\0')) &&
       (bVar15 = *(byte *)(param_1 + 0x12), (bVar15 & 0x40) == 0)) {
      plVar16 = (longlong *)((longlong)param_1 + 0x95);
      plVar2 = param_1 + 0x25;
      if (plVar2 != plVar16) {
        lVar9 = *plVar2;
        *(undefined1 *)plVar2 = *(undefined1 *)plVar16;
        *(char *)plVar16 = (char)lVar9;
        bVar15 = *(byte *)(param_1 + 0x12);
      }
      *(byte *)(param_1 + 0x12) = bVar15 | 0x40;
    }
    lVar9 = local_f0;
    local_138 = 0;
    FUN_14222a400(param_1,&local_98,&local_d8,local_f0);
    if (local_e8 != (longlong *)0x0) {
      if (uVar17 == 0) {
        uVar17 = local_e8[0x2d];
      }
      if ((param_1[0x2d] != 0) && (uVar17 != 0)) {
        FUN_142382f60(param_1[0x2d],uVar17,&DAT_146532180,lVar7);
      }
    }
    pcVar18 = local_118 + (longlong)iVar12 * 0x50;
    if (local_118 != pcVar18) {
      pcVar14 = local_118 + 0x10;
      do {
        uVar6 = *(uint *)(*(longlong *)(pcVar14 + -0x10) + 0xc);
        if ((int)uVar6 < (int)DAT_1469e91c4) {
          uVar10 = uVar6 & 0xffff;
          if ((int)uVar6 < 0) {
            uVar6 = uVar6 + 0xffff;
            uVar10 = uVar10 - 0x10000;
          }
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                  (longlong)(int)uVar10 * 0x18;
        }
        else {
          lVar7 = 0;
        }
        if (((((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) &&
             (lVar7 = *(longlong *)(*(longlong *)(pcVar14 + -0x10) + 0x168), lVar7 != 0)) &&
            ((*(longlong *)(lVar7 + 400) == 0 ||
             (*(longlong *)(*(longlong *)(lVar7 + 400) + 0x118) == 0)))) &&
           ((lVar7 != 0 && (*(longlong *)(lVar7 + 400) != param_1[0x2d])))) {
          FUN_142382f60(lVar7,param_1[0x2d],&DAT_146532180,*(undefined8 *)(pcVar14 + -8));
          if (*pcVar14 != '\0') {
            local_138 = 0;
            FUN_142398770(lVar7,pcVar14 + 0x10,0,0);
          }
          FUN_140942fb0(lVar7,0,0);
        }
        pcVar1 = pcVar14 + 0x40;
        pcVar14 = pcVar14 + 0x50;
      } while (pcVar1 != pcVar18);
    }
    pcVar18 = local_118;
    DAT_1468b6150 = local_a8;
    if (lVar9 != 0) {
      FComponentInstanceDataCache::~FComponentInstanceDataCache(lVar9);
      FMemory::operator_delete(lVar9,0x60);
    }
    if (pcVar18 != (char *)0x0) {
      FMemory::Free(pcVar18);
    }
    DAT_1468b6169 = local_128;
  }
LAB_14223bb79:
  FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard(local_127);
  return;
}



// FUNCTION 14223bba0 thunk_FUN_1428dfda0 body=5 status=ok
// SIG undefined thunk_FUN_1428dfda0(void)

void thunk_FUN_1428dfda0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b19c00);
                    /* WARNING: Could not recover jumptable at 0x0001428dfdd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 14223bbb0 FUN_14223bbb0 body=280 status=ok
// SIG undefined FUN_14223bbb0(void)

void FUN_14223bbb0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong local_res8;
  undefined1 *local_18;
  longlong *plStack_10;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 700)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x2b0,0);
  }
  *(undefined4 *)(param_1 + 0x2e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  iVar1 = *(int *)(param_1 + 0x2d8) + 0x1f;
  _Dst = *(void **)(param_1 + 0x2d0);
  if (*(void **)(param_1 + 0x2d0) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x2c0);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x2f8)) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x2f8);
    do {
      lVar3 = *(longlong *)(param_1 + 0x2f0);
      if (*(longlong *)(param_1 + 0x2f0) == 0) {
        lVar3 = param_1 + 0x2e8;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x2f8) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x308) = 0;
  if ((*(int *)(param_1 + 0x30c) < 0) && (*(int *)(param_1 + 0x30c) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x300,0);
  }
  plStack_10 = &local_res8;
  local_18 = &LAB_142224970;
  local_res8 = param_1;
  FUN_1417a4830(param_1,&local_18,1,0,0x20000000);
  return;
}



// FUNCTION 14223bcd0 FUN_14223bcd0 body=701 status=ok
// SIG undefined FUN_14223bcd0(void)

void FUN_14223bcd0(longlong *param_1)

{
  void *_Src;
  void *_Dst;
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_res8;
  longlong *local_40;
  
  plVar1 = (longlong *)param_1[2];
  lVar11 = plVar1[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar11 = plVar1[0x1f];
  }
  FName::FName(&local_res8,L"RandomStream",1);
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar10 = AWarriorSkills1AIController::GetPrivateStaticClass();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
      lVar10 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((lVar9 == 0) || (cVar8 = UWorld::IsPlayInEditor(lVar9), cVar8 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (param_1[2] == 0) {
    local_40 = (longlong *)0x0;
  }
  else {
    local_40 = *(longlong **)(param_1[2] + 0x38);
  }
  FUN_140472e10();
  while (local_40 != (longlong *)0x0) {
    lVar9 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(local_40[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(local_40[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (local_40[0xe] != 0)) && (*(longlong *)(local_40[0xe] + 0x18) == local_res8)) {
      *(undefined4 *)((longlong)*(int *)((longlong)local_40 + 0x44) + 4 + (longlong)param_1) =
           *(undefined4 *)((longlong)*(int *)((longlong)local_40 + 0x44) + (longlong)param_1);
    }
    else if ((!bVar4) && (uVar2 = local_40[7], (uVar2 & 0x8000080000) == 0)) {
      if ((bVar5) && ((uVar2 & 0x1000000000000) != 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (((uVar2 >> 0x10 & 1) == 0) && ((uVar2 & 1) != 0)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (((uVar2 & 4) == 0) || ((uVar2 & 0x10) != 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (((!bVar3) && (!bVar6)) && (bVar7)) {
        lVar9 = UDelegateProperty::GetPrivateStaticClass();
        if ((*(int *)(local_40[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(local_40[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
            != lVar9 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          lVar9 = UMulticastDelegateProperty::GetPrivateStaticClass();
          if ((*(int *)(local_40[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(local_40[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
              lVar9 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            _Src = (void *)(*(int *)((longlong)local_40 + 0x44) + lVar11);
            _Dst = (void *)((longlong)*(int *)((longlong)local_40 + 0x44) + (longlong)param_1);
            if (_Dst != _Src) {
              if ((*(uint *)(local_40 + 7) >> 0x1e & 1) == 0) {
                (**(code **)(*local_40 + 0x2e8))(local_40,_Dst,_Src,(int)local_40[6]);
              }
              else {
                _guard_xfg_dispatch_icall_nop
                          (_Dst,_Src,
                           (longlong)(*(int *)((longlong)local_40 + 0x34) * (int)local_40[6]));
              }
            }
          }
        }
      }
    }
    local_40 = (longlong *)local_40[5];
    FUN_140472e10();
  }
  return;
}



// FUNCTION 14223bf90 FUN_14223bf90 body=276 status=ok
// SIG undefined FUN_14223bf90(void)

void FUN_14223bf90(void *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    if (param_2 < 4) {
      uVar5 = 3;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0xa0,0);
      uVar5 = (uint)(uVar2 / 0xa0);
      if ((int)uVar5 < (int)param_2) {
        uVar5 = 0x7fffffff;
      }
    }
  }
  if (uVar5 == *(uint *)((longlong)param_1 + 0x1ec)) {
    return;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x1e8);
  *(uint *)((longlong)param_1 + 0x1ec) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x1e0);
  if (uVar5 < 4) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)iVar1 * 0xa0);
    pvVar3 = *(void **)((longlong)param_1 + 0x1e0);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0xa0,0);
        *(void **)((longlong)param_1 + 0x1e0) = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)iVar1 * 0xa0);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0xa0;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x1e0) = uVar4;
  return;
}



// FUNCTION 14223c0b0 FUN_14223c0b0 body=101 status=ok
// SIG undefined FUN_14223c0b0(void)

void FUN_14223c0b0(longlong *param_1,float param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (((*(byte *)(param_1 + 0x80) & 4) != 0) && (0.0 < param_2)) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x970);
    }
    if (lVar1 != 0) {
      FUN_1424aee70(lVar1,param_2,param_1,param_3);
    }
  }
  return;
}



// FUNCTION 14223c120 FUN_14223c120 body=799 status=ok
// SIG undefined FUN_14223c120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14223c120(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_328 [32];
  longlong local_308 [24];
  longlong *local_248;
  undefined8 local_240;
  undefined1 local_238 [480];
  undefined1 *local_58;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  puVar8 = (undefined1 *)0x0;
  if ((*(byte *)((longlong)param_1 + 0x93) & 8) != 0) {
    if ((*(byte *)((longlong)param_1 + 0x94) & 0x18) == 0x10) {
      (**(code **)(*param_1 + 0x518))();
    }
    if (param_2 == 3) {
      local_248 = (longlong *)0x0;
      local_240 = 0;
      FUN_140725150(param_1,local_308,0);
      local_58 = (undefined1 *)0x0;
      plVar6 = local_308;
      if (local_248 != (longlong *)0x0) {
        plVar6 = local_248;
      }
      local_50 = 0;
      local_4c = 0;
      plVar1 = plVar6 + (int)local_240;
      puVar4 = puVar8;
      puVar9 = puVar8;
      if (plVar6 != plVar1) {
        do {
          lVar3 = *plVar6;
          local_50 = 0;
          if (((int)puVar4 < 0) && ((int)puVar4 != 0)) {
            FUN_14223bf90(local_238,0);
            puVar4 = (undefined1 *)(ulonglong)local_4c;
            puVar9 = local_58;
          }
          iVar2 = *(int *)(lVar3 + 0x3a8);
          if (iVar2 != 0) {
            if ((int)puVar4 < local_50 + iVar2) {
              FUN_14223bf90(local_238,local_50 + iVar2);
              puVar9 = local_58;
            }
            puVar4 = local_238;
            if (puVar9 != (undefined1 *)0x0) {
              puVar4 = puVar9;
            }
            _guard_xfg_dispatch_icall_nop
                      (puVar4 + (longlong)local_50 * 0xa0,*(void **)(lVar3 + 0x3a0),
                       (longlong)iVar2 * 0xa0);
            puVar4 = (undefined1 *)(ulonglong)local_4c;
            local_50 = local_50 + iVar2;
            puVar9 = local_58;
          }
          puVar5 = local_238;
          if (puVar9 != (undefined1 *)0x0) {
            puVar5 = puVar9;
          }
          puVar7 = puVar5 + (longlong)local_50 * 0xa0;
          if (puVar5 != puVar7) {
            do {
              FUN_142389e30(lVar3,puVar5,1,0);
              puVar5 = puVar5 + 0xa0;
            } while (puVar5 != puVar7);
            puVar4 = (undefined1 *)(ulonglong)local_4c;
            puVar9 = local_58;
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar1);
        if (puVar9 != (undefined1 *)0x0) {
          FMemory::Free(puVar9);
        }
      }
      if (local_248 != (longlong *)0x0) {
        FMemory::Free();
      }
      *(byte *)((longlong)param_1 + 0x93) = *(byte *)((longlong)param_1 + 0x93) & 0xf7;
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar3 != 0) {
        FUN_1428d4e50(lVar3,param_1);
      }
    }
    if (param_1[0x30] != 0) {
      (**(code **)(*param_1 + 0x3a0))(param_1,0);
    }
    FUN_142251cf0(param_1);
  }
  local_248 = (longlong *)0x0;
  local_240 = 0;
  FUN_140a4ca80(param_1,local_308,0);
  plVar6 = local_308;
  if (local_248 != (longlong *)0x0) {
    plVar6 = local_248;
  }
  puVar4 = (undefined1 *)((longlong)(int)local_240 & 0x1fffffffffffffff);
  if (plVar6 + (int)local_240 < plVar6) {
    puVar4 = puVar8;
  }
  if (puVar4 != (undefined1 *)0x0) {
    do {
      if ((*(byte *)((longlong *)*plVar6 + 0x19) & 0x10) != 0) {
        (**(code **)(*(longlong *)*plVar6 + 0x348))();
      }
      plVar6 = plVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar4);
  }
  if (local_248 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14223c440 FUN_14223c440 body=12 status=ok
// SIG undefined FUN_14223c440(void)

void FUN_14223c440(longlong param_1)

{
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x3b0);
  return;
}



// FUNCTION 14223c450 FUN_14223c450 body=12 status=ok
// SIG undefined FUN_14223c450(void)

void FUN_14223c450(longlong param_1)

{
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x3c8);
  return;
}



// FUNCTION 14223c460 FUN_14223c460 body=245 status=ok
// SIG undefined FUN_14223c460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14223c460(longlong param_1,byte param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [192];
  undefined1 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(byte *)(param_1 + 0x93) >> 7 != param_2) {
    *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) & 0x7f | param_2 << 7;
    uVar2 = 0;
    local_28 = (undefined1 *)0x0;
    local_20 = 0;
    FUN_140a4ca80(param_1,local_e8,0);
    uVar4 = uVar2;
    if (0 < (int)local_20) {
      do {
        puVar1 = local_e8;
        if (local_28 != (undefined1 *)0x0) {
          puVar1 = local_28;
        }
        (**(code **)(**(longlong **)(puVar1 + uVar2) + 0x390))();
        uVar3 = (int)uVar4 + 1;
        uVar2 = uVar2 + 8;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < (int)local_20);
    }
    if (local_28 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14223c560 FUN_14223c560 body=147 status=ok
// SIG undefined FUN_14223c560(void)

void FUN_14223c560(longlong *param_1,byte param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != param_2) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe | param_2;
    FUN_142236cd0(param_1);
  }
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0x7f);
    param_1[0x7f] = 0;
    *(byte *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7e) & 0xfe;
  }
  return;
}



// FUNCTION 14223c600 FUN_14223c600 body=581 status=ok
// SIG undefined FUN_14223c600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14223c600(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
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
  if (((*(byte *)(param_1 + 0x7e) & 1) == 0) && ((*(byte *)((longlong)param_1 + 0x93) & 4) == 0)) {
    (**(code **)(*param_1 + 0x310))(param_1,1);
    *(byte *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7e) | 1;
    if (((char)param_1[0x25] == '\x03') || ((*(byte *)(param_1 + 0x12) & 0x20) != 0)) {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      lVar3 = 0;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar6;
        lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
      }
      if (((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) &&
         (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) {
        uVar4 = AActor::GetWorldTimerManager(param_1);
        plVar5 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar5 + 1,param_1);
          plVar5[2] = (longlong)&LAB_142234b10;
          lVar3 = FDelegateHandle::GenerateNewID();
          plVar5[4] = lVar3;
          *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
        }
        local_88 = 0;
        local_80 = 0;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x30))(plVar5,&local_88);
        }
        FWeakObjectPtr::operator=(local_78,0);
        local_90 = 0xbf800000;
        local_98 = 0;
        local_70 = 0;
        local_38 = (longlong *)0x0;
        local_28 = 0;
        local_68 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar4,param_1 + 0x7f,&local_88,0x3f800000);
        if (local_28 != 0) {
          plVar7 = local_58;
          if (local_38 != (longlong *)0x0) {
            plVar7 = local_38;
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,0);
          }
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          lVar3 = FMemory::Realloc(plVar5,0,0);
          if (lVar3 != 0) {
            FMemory::Free(lVar3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14223c850 FUN_14223c850 body=258 status=ok
// SIG undefined FUN_14223c850(void)

ulonglong FUN_14223c850(longlong param_1,float *param_2,undefined1 param_3,longlong param_4,
                       undefined1 param_5)

{
  longlong *plVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    local_b8 = *param_2 - *(float *)(plVar1 + 0x44);
    local_b4 = param_2[1] - *(float *)((longlong)plVar1 + 0x224);
    local_b0 = param_2[2] - *(float *)(plVar1 + 0x45);
    local_a8 = (undefined4)plVar1[0x42];
    local_a4 = *(undefined4 *)((longlong)plVar1 + 0x214);
    local_a0 = (undefined4)plVar1[0x43];
    local_9c = *(undefined4 *)((longlong)plVar1 + 0x21c);
    uVar2 = (**(code **)(*plVar1 + 0x490))(plVar1,&local_b8,&local_a8,param_3,param_4,0,param_5);
    return uVar2;
  }
  if (param_4 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    in_RAX = FUN_140729f20(param_4,local_98);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14223c960 FUN_14223c960 body=208 status=ok
// SIG undefined FUN_14223c960(void)

ulonglong FUN_14223c960(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,undefined1 param_6)

{
  longlong *plVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    local_a8 = *param_2 - *(float *)(plVar1 + 0x44);
    local_a4 = param_2[1] - *(float *)((longlong)plVar1 + 0x224);
    local_a0 = param_2[2] - *(float *)(plVar1 + 0x45);
    uVar2 = (**(code **)(*plVar1 + 0x490))
                      (plVar1,&local_a8,local_a0,*(float *)(plVar1 + 0x45),param_5,0,param_6);
    return uVar2;
  }
  if (param_5 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    in_RAX = FUN_140729f20(param_5,local_98);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14223ca30 FUN_14223ca30 body=203 status=ok
// SIG undefined FUN_14223ca30(void)

ulonglong FUN_14223ca30(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    local_a8 = *param_2 - *(float *)(lVar1 + 0x220);
    local_a4 = param_2[1] - *(float *)(lVar1 + 0x224);
    local_a0 = param_2[2] - *(float *)(lVar1 + 0x228);
    uVar2 = FUN_142391970(lVar1,&local_a8,local_a0,*(float *)(lVar1 + 0x228),param_5,0,param_6);
    return uVar2;
  }
  if (param_5 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    in_RAX = FUN_140729f20(param_5,local_98);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14223cb00 FUN_14223cb00 body=423 status=ok
// SIG undefined FUN_14223cb00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14223cb00(longlong param_1,undefined8 *param_2,undefined1 param_3,longlong param_4,
                  undefined1 param_5)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  lVar2 = *(longlong *)(param_1 + 0x168);
  if (lVar2 == 0) {
    if (param_4 != 0) {
      _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
      local_8c = 0x3f800000;
      FUN_140729f20(param_4,local_98);
    }
  }
  else {
    local_b8 = *param_2;
    pfVar1 = (float *)(lVar2 + 0x280);
    local_b0 = *(undefined4 *)(param_2 + 1);
    if (((*(float *)(lVar2 + 0x1f8) != *pfVar1) ||
        (*(float *)(lVar2 + 0x1fc) != *(float *)(lVar2 + 0x284))) ||
       (*(float *)(lVar2 + 0x200) != *(float *)(lVar2 + 0x288))) {
      local_c8 = *(undefined8 *)*(undefined1 (*) [12])(lVar2 + 0x1f8);
      auVar8._12_4_ = 0;
      auVar8._0_12_ = *(undefined1 (*) [12])(lVar2 + 0x1f8);
      fVar3 = (float)DAT_146aeea50;
      fVar4 = DAT_146aeea50._4_4_;
      fVar5 = DAT_146aeea50._8_4_;
      auVar8 = divps(auVar8,_DAT_146aeea50);
      fVar10 = (float)local_c8 - (float)(int)auVar8._0_4_ * fVar3;
      fVar11 = (float)((ulonglong)local_c8 >> 0x20) - (float)(int)auVar8._4_4_ * fVar4;
      fVar12 = *(float *)(lVar2 + 0x200) - (float)(int)auVar8._8_4_ * fVar5;
      fVar10 = (float)(((uint)(fVar10 + fVar3) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                      (uint)(fVar10 + fVar3));
      fVar11 = (float)(((uint)(fVar11 + fVar4) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                      (uint)(fVar11 + fVar4));
      fVar12 = (float)(((uint)(fVar12 + fVar5) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar12 + fVar5));
      uVar9 = ((uint)(fVar12 - fVar5) ^ (uint)fVar12) & -(uint)(fRam0000000146aeea48 < fVar12) ^
              (uint)fVar12;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar9);
      *(ulonglong *)pfVar1 =
           CONCAT44(((uint)(fVar11 - fVar4) ^ (uint)fVar11) & -(uint)(fRam0000000146aeea44 < fVar11)
                    ^ (uint)fVar11,
                    ((uint)(fVar10 - fVar3) ^ (uint)fVar10) & -(uint)(_DAT_146aeea40 < fVar10) ^
                    (uint)fVar10);
      *(uint *)(lVar2 + 0x288) = uVar9;
      puVar7 = (undefined8 *)FRotator::Quaternion(pfVar1,local_a8);
      uVar6 = puVar7[1];
      *(undefined8 *)(lVar2 + 0x270) = *puVar7;
      *(undefined8 *)(lVar2 + 0x278) = uVar6;
    }
    local_c8 = *(undefined8 *)(lVar2 + 0x270);
    uStack_c0 = *(undefined8 *)(lVar2 + 0x278);
    FUN_142397be0(lVar2,&local_b8,&local_c8,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 14223ccb0 FUN_14223ccb0 body=131 status=ok
// SIG undefined FUN_14223ccb0(void)

void FUN_14223ccb0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    local_a0 = *(undefined4 *)(param_2 + 1);
    local_a8 = *param_2;
    FUN_142398470(*(longlong *)(param_1 + 0x168),&local_a8,param_3,param_4,param_5);
    return;
  }
  if (param_4 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    FUN_140729f20(param_4,local_98);
  }
  return;
}



// FUNCTION 14223cd40 FUN_14223cd40 body=934 status=ok
// SIG undefined FUN_14223cd40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14223cd40(longlong param_1,float *param_2)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_198 [32];
  double local_178;
  undefined4 *local_168;
  ulonglong *puStack_160;
  undefined1 local_158 [8];
  undefined8 local_150;
  longlong local_148;
  longlong local_140 [3];
  undefined4 *local_128;
  ulonglong *puStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [16];
  undefined1 local_a0 [40];
  undefined1 local_78 [24];
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30 [3];
  
  local_30[0] = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    fVar3 = *param_2;
    iVar6 = _finite((double)fVar3);
    if (((iVar6 == 0) || (iVar6 = _finite((double)param_2[1]), iVar6 == 0)) ||
       (iVar6 = _finite((double)param_2[2]), iVar6 == 0)) {
      FName::FName(local_158,"Blueprint",1);
      local_178 = (double)param_2[2];
      FString::PrintfImpl(local_140,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)fVar3,(double)param_2[1]);
      lVar7 = FText::FromString(local_78,local_140);
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_c8,L"Scale \'{0}\' is not valid.",L"Actor",L"InvalidScale");
      puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_b0,uVar8);
      local_60[0] = 4;
      FText::FText(local_50,lVar7);
      local_150 = *puVar9;
      local_168 = local_60;
      puStack_160 = local_30;
      local_148 = puVar9[1];
      local_38 = '\x01';
      if (local_148 != 0) {
        LOCK();
        *(int *)(local_148 + 8) = *(int *)(local_148 + 8) + 1;
        UNLOCK();
      }
      local_128 = local_168;
      puStack_120 = puStack_160;
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_118,&local_128);
      uVar8 = FText::Format(local_e0,&local_150,uVar8);
      FText::FText(local_f8,uVar8);
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_d8 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar1 = (int *)((longlong)local_d8 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_d8 + 8))(local_d8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_118);
      if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_48 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      plVar4 = (longlong *)puVar9[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar4)(plVar4);
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
      plVar4 = *(longlong **)(lVar7 + 8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar4)(plVar4);
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
      uVar8 = FUN_14161fb50(local_a0,local_158);
      FMessageLog::Warning(uVar8,local_108,local_f8);
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_100 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)local_100 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_100 + 8))(local_100,1);
          }
        }
      }
      FMessageLog::~FMessageLog(local_a0);
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_f0 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)local_f0 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_c0 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
      if (local_140[0] != 0) {
        FMemory::Free();
      }
    }
    else {
      local_168 = *(undefined4 **)param_2;
      puStack_160 = (ulonglong *)CONCAT44(puStack_160._4_4_,param_2[2]);
      (**(code **)(**(longlong **)(param_1 + 0x168) + 0x3f8))
                (*(longlong **)(param_1 + 0x168),&local_168);
    }
  }
  return;
}



// FUNCTION 14223d0f0 FUN_14223d0f0 body=111 status=ok
// SIG undefined FUN_14223d0f0(void)

void FUN_14223d0f0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_142398770();
    return;
  }
  if (param_4 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    FUN_140729f20(param_4,local_98);
  }
  return;
}



// FUNCTION 14223d160 FUN_14223d160 body=68 status=ok
// SIG undefined FUN_14223d160(void)

ulonglong FUN_14223d160(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x490))(plVar1,&DAT_1468b5d90,param_2,1,0,0,param_3);
    return uVar2;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14223d1b0 SetActorRotation body=62 status=ok
// SIG undefined SetActorRotation(void)

ulonglong AActor::SetActorRotation(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    uVar1 = FUN_142391970(*(longlong *)(param_1 + 0x168),&DAT_1468b5d90,param_2,1,0,0,param_3);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14223d1f0 SetActorScale3D body=48 status=ok
// SIG undefined SetActorScale3D(void)

void AActor::SetActorScale3D(longlong param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    local_18 = *param_2;
    local_10 = *(undefined4 *)(param_2 + 1);
    FUN_142399c30(*(longlong *)(param_1 + 0x168),&local_18);
  }
  return;
}



// FUNCTION 14223d220 SetActorTickEnabled body=60 status=ok
// SIG undefined SetActorTickEnabled(void)

void AActor::SetActorTickEnabled(longlong param_1,undefined1 param_2)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x34) & 2) != 0) {
    cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if (cVar1 == '\0') {
      FUN_14288e3d0(param_1 + 0x28,param_2);
    }
  }
  return;
}



// FUNCTION 14223d260 SetActorTickInterval body=6 status=ok
// SIG undefined SetActorTickInterval(void)

void AActor::SetActorTickInterval(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}



// FUNCTION 14223d270 FUN_14223d270 body=257 status=ok
// SIG undefined FUN_14223d270(void)

undefined8
FUN_14223d270(longlong param_1,longlong param_2,undefined1 param_3,longlong param_4,
             undefined1 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  if (*(longlong *)(param_1 + 0x168) == 0) {
    if (param_4 != 0) {
      _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
      local_8c = 0x3f800000;
      FUN_140729f20(param_4,local_98);
    }
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_140618120(param_2);
    if (((cVar1 == '\0') && (cVar1 = FUN_140618120(param_2 + 0x10), cVar1 == '\0')) &&
       (cVar1 = FUN_140618120(param_2 + 0x20), cVar1 == '\0')) {
      FUN_142399d60(*(undefined8 *)(param_1 + 0x168),param_2,param_3,param_4,param_5);
      return 1;
    }
    if (param_4 != 0) {
      _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
      local_8c = 0x3f800000;
      FUN_140729f20(param_4,local_98);
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14223d380 FUN_14223d380 body=205 status=ok
// SIG undefined FUN_14223d380(void)

void FUN_14223d380(longlong param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x94) & 2) == 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    lVar3 = 0;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar4 = iVar2 >> 0x1f & 0xffff;
      uVar1 = iVar2 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
              (longlong)(int)((uVar1 & 0xffff) - uVar4) * 0x18;
    }
    if (((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) &&
       ((*(byte *)(param_1 + 0x90) >> 3 & 1) != param_2)) {
      *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xf7 | param_2 << 3;
      iVar2 = FUN_142235230(param_1);
      if ((iVar2 != 3) && (lVar3 = FUN_1422325e0(param_1), lVar3 != 0)) {
        FUN_1425c5060(lVar3,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14223d450 FUN_14223d450 body=35 status=ok
// SIG undefined FUN_14223d450(void)

void FUN_14223d450(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  *(longlong *)(param_1 + 1000) = param_2;
  uVar1 = *(uint *)(param_1 + 8) | 0x40000000;
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 8) & 0xbfffffff;
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}



// FUNCTION 14223d480 FUN_14223d480 body=71 status=ok
// SIG undefined FUN_14223d480(void)

void FUN_14223d480(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  
  lVar1 = *param_2;
  *(longlong *)(param_1 + 1000) = lVar1;
  bVar2 = *(byte *)(param_1 + 0x3e0) | 1;
  if (lVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 0x3e0) & 0xfe;
  }
  *(byte *)(param_1 + 0x3e0) = bVar2;
  uVar3 = *(uint *)(param_1 + 8) | 0x40000000;
  if (lVar1 == 0) {
    uVar3 = *(uint *)(param_1 + 8) & 0xbfffffff;
  }
  *(uint *)(param_1 + 8) = uVar3;
  return;
}



// FUNCTION 14223d4d0 FUN_14223d4d0 body=235 status=ok
// SIG undefined FUN_14223d4d0(void)

void FUN_14223d4d0(uint *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    lVar2 = UNavAreaBase::GetPrivateStaticClass();
    lVar6 = param_2;
    do {
      if (lVar6 == lVar2) goto LAB_14223d502;
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  param_2 = 0;
LAB_14223d502:
  FWeakObjectPtr::operator=(param_1 + 3,param_2);
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 3);
  plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 5);
  if (plVar3 != (longlong *)0x0) {
    plVar5 = (longlong *)plVar3[0x1f];
    if (plVar5 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      plVar5 = (longlong *)plVar3[0x1f];
      if (plVar5 == (longlong *)0x0) goto LAB_14223d55c;
    }
    cVar1 = (**(code **)(*plVar5 + 0x280))();
    if (cVar1 != '\0') goto LAB_14223d592;
  }
LAB_14223d55c:
  if (plVar4 != (longlong *)0x0) {
    plVar3 = (longlong *)plVar4[0x1f];
    if (plVar3 == (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      plVar3 = (longlong *)plVar4[0x1f];
      if (plVar3 == (longlong *)0x0) goto LAB_14223d5a8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x280))();
    if (cVar1 != '\0') {
LAB_14223d592:
      *param_1 = *param_1 & 0xfffffffe;
      *param_1 = *param_1 | 1;
      return;
    }
  }
LAB_14223d5a8:
  *param_1 = *param_1 & 0xfffffffe;
  return;
}



// FUNCTION 14223d5c0 SetAreaClass body=45 status=ok
// SIG undefined SetAreaClass(void)

void FNavigationLinkBase::SetAreaClass(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(param_1 + 0x30);
    *(longlong *)(param_1 + 0x28) = param_2;
  }
  return;
}



// FUNCTION 14223d5f0 FUN_14223d5f0 body=73 status=ok
// SIG undefined FUN_14223d5f0(void)

void FUN_14223d5f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x6b0);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x2f8);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x18);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar1 + 0xc);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar1 + 0x18);
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 14223d640 FUN_14223d640 body=38 status=ok
// SIG undefined FUN_14223d640(void)

void FUN_14223d640(longlong *param_1,char param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(byte *)((longlong)param_1 + 0x92) & 0x40) != 0) {
    cVar1 = *(char *)((longlong)param_1 + 0x95);
    *(char *)((longlong)param_1 + 0x95) = param_2 + '\x01';
    if ((param_3 != '\0') && ((char)(param_2 + '\x01') != cVar1)) {
      iVar2 = FUN_142235230(param_1);
      if ((iVar2 != 3) && ((*(byte *)((longlong)param_1 + 0x92) & 0x40) != 0)) {
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar4 = FUN_1422325e0(param_1);
        if (lVar4 != 0) {
          FUN_1425be9a0(lVar4,param_1);
          lVar3 = *(longlong *)(lVar3 + 0x108);
          if ((lVar3 != 0) && (lVar3 != lVar4)) {
            FUN_1425be9a0(lVar3,param_1);
          }
        }
      }
      return;
    }
  }
  return;
}



// FUNCTION 14223d670 SetBoolParameter body=189 status=ok
// SIG undefined SetBoolParameter(void)

void FActiveSound::SetBoolParameter(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x518);
    plVar4 = (longlong *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x520);
    lVar6 = (longlong)iVar3;
    plVar2 = plVar4 + lVar6 * 4;
    for (; plVar4 != plVar2; plVar4 = plVar4 + 4) {
      if (*plVar4 == param_2) {
        *(undefined1 *)((longlong)plVar4 + 0xc) = param_3;
        return;
      }
    }
    *(int *)(param_1 + 0x520) = iVar3 + 1;
    if (*(int *)(param_1 + 0x524) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar3);
    }
    puVar5 = (undefined8 *)(lVar6 * 0x20 + *plVar1);
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    puVar5[3] = 0;
    *(longlong *)(lVar6 * 0x20 + *plVar1) = param_2;
    *(undefined1 *)(lVar6 * 0x20 + 0xc + *plVar1) = param_3;
  }
  return;
}



// FUNCTION 14223d730 SetBox body=1307 status=ok
// SIG undefined SetBox(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FAreaNavModifier::SetBox(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  float fVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_d8;
  float local_d4;
  float local_d0;
  longlong local_c8;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  uint local_b0;
  
  fVar22 = *param_2;
  lVar19 = 0;
  fVar1 = param_2[1];
  uVar21 = 0;
  fVar23 = param_2[2];
  fVar27 = param_2[3];
  fVar2 = param_2[4];
  fVar3 = param_2[5];
  fVar16 = 0.0;
  uVar18 = 0;
  local_c8 = 0;
  fStack_bc = 0.0;
  do {
    fVar6 = *param_3;
    fVar7 = param_3[1];
    fVar8 = param_3[2];
    fVar9 = param_3[3];
    lVar20 = (longlong)(int)uVar21;
    iVar13 = -1;
    if ((uVar18 & 4) != 0) {
      iVar13 = 1;
    }
    fStack_c0 = (float)(uVar21 + 1);
    iVar14 = -1;
    if ((uVar18 & 2) != 0) {
      iVar14 = 1;
    }
    fVar28 = ((float)iVar13 * (fVar27 - fVar22) * 0.5 + (fVar22 + fVar27) * 0.5) * param_3[8];
    fVar29 = ((float)iVar14 * (fVar2 - fVar1) * 0.5 + (fVar1 + fVar2) * 0.5) * param_3[9];
    fVar30 = ((float)(int)((uVar18 & 1) * 2 + -1) * (fVar3 - fVar23) * 0.5 + (fVar23 + fVar3) * 0.5)
             * param_3[10];
    fVar24 = fVar30 * fVar7 - fVar29 * fVar8;
    fVar25 = fVar28 * fVar8 - fVar30 * fVar6;
    fVar26 = fVar29 * fVar6 - fVar28 * fVar7;
    fVar24 = fVar24 + fVar24;
    fVar25 = fVar25 + fVar25;
    fVar26 = fVar26 + fVar26;
    fVar10 = param_3[4];
    fVar11 = param_3[5];
    fVar12 = param_3[6];
    if ((int)fVar16 < (int)fStack_c0) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_c8,uVar21);
      lVar19 = local_c8;
      fVar16 = fStack_bc;
    }
    uVar21 = (uint)fStack_c0;
    uVar18 = uVar18 + 1;
    *(ulonglong *)(lVar19 + lVar20 * 0xc) =
         CONCAT44((fVar24 * fVar8 - fVar26 * fVar6) + fVar9 * fVar25 + fVar29 + fVar11,
                  (fVar26 * fVar7 - fVar25 * fVar8) + fVar9 * fVar24 + fVar28 + fVar10);
    *(float *)(lVar19 + 8 + lVar20 * 0xc) =
         (fVar25 * fVar6 - fVar24 * fVar7) + fVar9 * fVar26 + fVar30 + fVar12;
  } while ((int)uVar18 < 8);
  local_c8 = *(longlong *)param_3;
  fStack_c0 = param_3[2];
  fStack_bc = param_3[3];
  FQuat::Rotator(&local_c8,&local_d8);
  fVar1 = DAT_1468b5d98;
  local_d8 = ABS(local_d8);
  fVar22 = (float)(int)(local_d8 * 0.011111111) * 90.0;
  if (local_d8 < ABS(fVar22)) {
    fVar22 = local_d8;
  }
  local_d4 = ABS(local_d4);
  fVar23 = (float)(int)(local_d4 * 0.011111111) * 90.0;
  if (local_d4 < ABS(fVar23)) {
    fVar23 = local_d4;
  }
  local_d0 = ABS(local_d0);
  fVar27 = (float)(int)(local_d0 * 0.011111111) * 90.0;
  if (local_d0 < ABS(fVar27)) {
    fVar27 = local_d0;
  }
  if ((((1.0 <= local_d8 - fVar22) && (local_d8 - fVar22 <= 89.0)) ||
      ((1.0 <= local_d4 - fVar23 && (local_d4 - fVar23 <= 89.0)))) ||
     ((1.0 <= local_d0 - fVar27 && (local_d0 - fVar27 <= 89.0)))) {
    FUN_14223dc50(param_1,lVar19,0,uVar21,0,&DAT_1468b5b70);
  }
  else {
    fStack_bc = (float)_DAT_1468b5d90;
    uStack_b8 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
    fStack_c0 = DAT_1468b5d98;
    fStack_b4 = DAT_1468b5d98;
    local_b0 = local_b0 & 0xffffff00;
    auVar5._8_4_ = DAT_1468b5d98;
    auVar5._0_8_ = _DAT_1468b5d90;
    auVar5._12_4_ = fStack_bc;
    *(undefined1 (*) [16])(param_1 + 0x1c) = auVar5;
    *(ulonglong *)(param_1 + 0x2c) = CONCAT44(fVar1,uStack_b8);
    *(uint *)(param_1 + 0x34) = local_b0;
    if (0 < (int)uVar21) {
      pfVar15 = (float *)(lVar19 + 8);
      uVar17 = (ulonglong)uVar21;
      do {
        if (*(char *)(param_1 + 0x34) == '\0') {
          *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(pfVar15 + -2);
          fVar22 = *pfVar15;
          *(float *)(param_1 + 0x30) = fVar22;
          *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x28);
          *(float *)(param_1 + 0x24) = fVar22;
          *(undefined1 *)(param_1 + 0x34) = 1;
        }
        else {
          fVar22 = *(float *)(param_1 + 0x1c);
          if (pfVar15[-2] <= *(float *)(param_1 + 0x1c)) {
            fVar22 = pfVar15[-2];
          }
          *(float *)(param_1 + 0x1c) = fVar22;
          fVar22 = *(float *)(param_1 + 0x20);
          if (pfVar15[-1] <= *(float *)(param_1 + 0x20)) {
            fVar22 = pfVar15[-1];
          }
          *(float *)(param_1 + 0x20) = fVar22;
          fVar22 = *pfVar15;
          if (*(float *)(param_1 + 0x24) <= *pfVar15) {
            fVar22 = *(float *)(param_1 + 0x24);
          }
          *(float *)(param_1 + 0x24) = fVar22;
          fVar22 = *(float *)(param_1 + 0x28);
          if (*(float *)(param_1 + 0x28) <= pfVar15[-2]) {
            fVar22 = pfVar15[-2];
          }
          *(float *)(param_1 + 0x28) = fVar22;
          fVar22 = *(float *)(param_1 + 0x2c);
          if (*(float *)(param_1 + 0x2c) <= pfVar15[-1]) {
            fVar22 = pfVar15[-1];
          }
          *(float *)(param_1 + 0x2c) = fVar22;
          fVar22 = *(float *)(param_1 + 0x30);
          if (*(float *)(param_1 + 0x30) <= *pfVar15) {
            fVar22 = *pfVar15;
          }
          *(float *)(param_1 + 0x30) = fVar22;
        }
        pfVar15 = pfVar15 + 3;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    iVar13 = *(int *)(param_1 + 0x40);
    if (iVar13 < 2) {
      *(undefined4 *)(param_1 + 0x40) = 2;
      if (*(int *)(param_1 + 0x44) < 2) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar13);
      }
    }
    else if ((2 < iVar13) && (iVar13 + -2 != 0)) {
      *(int *)(param_1 + 0x40) = iVar13 - (iVar13 + -2);
      TArray<FVector,FDefaultAllocator>::ResizeShrink(param_1 + 0x38);
    }
    fVar22 = *(float *)(param_1 + 0x30);
    fVar1 = *(float *)(param_1 + 0x24);
    puVar4 = *(undefined8 **)(param_1 + 0x38);
    *puVar4 = CONCAT44((*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x20)) * 0.5,
                       (*(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x28)) * 0.5);
    *(float *)(puVar4 + 1) = (fVar22 + fVar1) * 0.5;
    fVar22 = *(float *)(param_1 + 0x30);
    fVar1 = *(float *)(param_1 + 0x24);
    lVar20 = *(longlong *)(param_1 + 0x38);
    *(ulonglong *)(lVar20 + 0xc) =
         CONCAT44((*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x20)) * 0.5,
                  (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x1c)) * 0.5);
    *(float *)(lVar20 + 0x14) = (fVar22 - fVar1) * 0.5;
    *(undefined1 *)(param_1 + 0x48) = 2;
  }
  if (lVar19 != 0) {
    FMemory::Free(lVar19);
  }
  return;
}



// FUNCTION 14223dc50 FUN_14223dc50 body=1561 status=ok
// SIG undefined FUN_14223dc50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14223dc50(longlong param_1,longlong param_2,int param_3,int param_4,undefined4 param_5,
                  float *param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  void *pvVar10;
  float *pfVar11;
  undefined1 *puVar12;
  float *pfVar13;
  float *pfVar14;
  longlong lVar15;
  int iVar16;
  float *pfVar17;
  void *_Src;
  int iVar18;
  int iVar19;
  uint uVar20;
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
  undefined1 auStack_1b8 [32];
  float local_198;
  float fStack_194;
  undefined4 local_190;
  ulonglong local_188;
  void *local_180;
  uint local_178;
  int local_174;
  float local_170;
  float local_16c;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  uint local_150;
  longlong local_140;
  void *local_138;
  undefined1 local_130 [32];
  undefined1 *local_110;
  undefined8 local_108;
  float local_f8 [24];
  float *local_98;
  undefined8 local_90;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  pvVar10 = (void *)0x0;
  fVar31 = -3.4028235e+38;
  fVar32 = 3.4028235e+38;
  local_170 = 3.4028235e+38;
  local_16c = -3.4028235e+38;
  lVar15 = (longlong)param_3;
  local_138 = (void *)0x0;
  local_180 = (void *)0x0;
  local_188 = local_188 & 0xffffffff00000000;
  local_174 = 0;
  local_98 = (float *)0x0;
  local_90 = 0;
  local_140 = param_1;
  FUN_141ddd6a0(local_f8,8);
  pfVar11 = (float *)FUN_14224f410(param_5);
  _Src = pvVar10;
  if (lVar15 < param_4) {
    pfVar14 = (float *)(param_2 + 8 + lVar15 * 0xc);
    lVar15 = param_4 - lVar15;
    local_190 = 0;
    pfVar17 = local_98;
    iVar18 = (int)local_90;
    do {
      fVar22 = *pfVar11;
      fVar24 = pfVar11[1];
      fVar26 = pfVar11[2];
      fVar27 = pfVar11[3];
      fVar28 = pfVar14[-2] * pfVar11[8];
      fVar29 = pfVar14[-1] * pfVar11[9];
      fVar30 = *pfVar14 * pfVar11[10];
      fVar21 = fVar30 * fVar24 - fVar29 * fVar26;
      fVar23 = fVar28 * fVar26 - fVar30 * fVar22;
      fVar25 = fVar29 * fVar22 - fVar28 * fVar24;
      fVar21 = fVar21 + fVar21;
      fVar23 = fVar23 + fVar23;
      fVar25 = fVar25 + fVar25;
      fVar2 = *param_6;
      fVar3 = param_6[1];
      fVar4 = param_6[2];
      fVar5 = param_6[3];
      fVar28 = ((fVar25 * fVar24 - fVar23 * fVar26) + fVar27 * fVar21 + fVar28 + pfVar11[4]) *
               param_6[8];
      fVar29 = ((fVar21 * fVar26 - fVar25 * fVar22) + fVar27 * fVar23 + fVar29 + pfVar11[5]) *
               param_6[9];
      fVar27 = ((fVar23 * fVar22 - fVar21 * fVar24) + fVar27 * fVar25 + fVar30 + pfVar11[6]) *
               param_6[10];
      fVar22 = fVar27 * fVar3 - fVar29 * fVar4;
      fVar24 = fVar28 * fVar4 - fVar27 * fVar2;
      fVar26 = fVar29 * fVar2 - fVar28 * fVar3;
      fVar22 = fVar22 + fVar22;
      fVar24 = fVar24 + fVar24;
      fVar26 = fVar26 + fVar26;
      local_198 = (fVar26 * fVar3 - fVar24 * fVar4) + fVar5 * fVar22 + fVar28 + param_6[4];
      fStack_194 = (fVar22 * fVar4 - fVar26 * fVar2) + fVar5 * fVar24 + fVar29 + param_6[5];
      fVar22 = (fVar24 * fVar2 - fVar22 * fVar3) + fVar5 * fVar26 + fVar27 + param_6[6];
      if (fVar22 < fVar32) {
        fVar32 = fVar22;
      }
      if (fVar31 < fVar22) {
        fVar31 = fVar22;
      }
      pfVar13 = local_f8;
      if (pfVar17 != (float *)0x0) {
        pfVar13 = pfVar17;
      }
      pfVar1 = pfVar13 + (longlong)iVar18 * 3;
      for (; pfVar13 != pfVar1; pfVar13 = pfVar13 + 3) {
        if ((fStack_194 - pfVar13[1]) * (fStack_194 - pfVar13[1]) +
            (local_198 - *pfVar13) * (local_198 - *pfVar13) + -pfVar13[2] * -pfVar13[2] < 16.0)
        goto LAB_14223df32;
      }
      local_90 = CONCAT44(local_90._4_4_,iVar18 + 1);
      if (local_90._4_4_ < iVar18 + 1) {
        TArray<FVector,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(local_f8,iVar18);
        pfVar17 = local_98;
      }
      pfVar13 = local_f8;
      if (pfVar17 != (float *)0x0) {
        pfVar13 = pfVar17;
      }
      *(ulonglong *)(pfVar13 + (longlong)iVar18 * 3) = CONCAT44(fStack_194,local_198);
      pfVar13[(longlong)iVar18 * 3 + 2] = 0.0;
      pfVar17 = local_98;
      iVar18 = (int)local_90;
LAB_14223df32:
      pfVar14 = pfVar14 + 3;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    pvVar10 = (void *)(local_188 & 0xffffffff);
    _Src = local_138;
    param_1 = local_140;
    local_170 = fVar32;
    local_16c = fVar31;
  }
  iVar18 = 0;
  local_110 = (undefined1 *)0x0;
  local_108 = 0;
  FUN_141f62110(local_130,8);
  FUN_14221e190(local_f8,local_130);
  uVar8 = DAT_1468b5d98;
  uVar7 = DAT_1468b5d94;
  uVar6 = DAT_1468b5d90;
  if ((int)local_108 == 0) {
    uVar9 = 0;
  }
  else {
    uStack_15c = DAT_1468b5d90;
    uStack_158 = DAT_1468b5d94;
    uStack_160 = DAT_1468b5d98;
    uStack_154 = DAT_1468b5d98;
    local_150 = local_150 & 0xffffff00;
    *(undefined4 *)(param_1 + 0x1c) = DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x20) = uVar7;
    *(undefined4 *)(param_1 + 0x24) = uVar8;
    *(undefined4 *)(param_1 + 0x28) = uVar6;
    *(ulonglong *)(param_1 + 0x2c) = CONCAT44(uVar8,uVar7);
    *(uint *)(param_1 + 0x34) = local_150;
    uVar20 = (uint)pvVar10;
    if (0 < (int)local_108) {
      local_188 = 0;
      iVar16 = local_174;
      do {
        puVar12 = local_130;
        if (local_110 != (undefined1 *)0x0) {
          puVar12 = local_110;
        }
        lVar15 = (longlong)*(int *)(puVar12 + local_188);
        pfVar11 = local_f8;
        if (local_98 != (float *)0x0) {
          pfVar11 = local_98;
        }
        iVar19 = (int)pvVar10;
        local_178 = iVar19 + 1;
        if (iVar16 < (int)local_178) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_180,pvVar10);
          _Src = local_180;
          iVar16 = local_174;
        }
        pvVar10 = (void *)(ulonglong)local_178;
        *(undefined8 *)((longlong)_Src + (longlong)iVar19 * 0xc) =
             *(undefined8 *)(pfVar11 + lVar15 * 3);
        *(float *)((longlong)_Src + (longlong)iVar19 * 0xc + 8) = pfVar11[lVar15 * 3 + 2];
        if (*(char *)(param_1 + 0x34) == '\0') {
          *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(pfVar11 + lVar15 * 3);
          fVar31 = pfVar11[lVar15 * 3 + 2];
          *(float *)(param_1 + 0x30) = fVar31;
          *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x28);
          *(float *)(param_1 + 0x24) = fVar31;
          *(undefined1 *)(param_1 + 0x34) = 1;
        }
        else {
          fVar31 = pfVar11[lVar15 * 3];
          if (*(float *)(param_1 + 0x1c) <= pfVar11[lVar15 * 3]) {
            fVar31 = *(float *)(param_1 + 0x1c);
          }
          *(float *)(param_1 + 0x1c) = fVar31;
          fVar31 = *(float *)(param_1 + 0x20);
          if (pfVar11[lVar15 * 3 + 1] <= *(float *)(param_1 + 0x20)) {
            fVar31 = pfVar11[lVar15 * 3 + 1];
          }
          *(float *)(param_1 + 0x20) = fVar31;
          fVar31 = *(float *)(param_1 + 0x24);
          if (pfVar11[lVar15 * 3 + 2] <= *(float *)(param_1 + 0x24)) {
            fVar31 = pfVar11[lVar15 * 3 + 2];
          }
          *(float *)(param_1 + 0x24) = fVar31;
          fVar31 = *(float *)(param_1 + 0x28);
          if (*(float *)(param_1 + 0x28) <= pfVar11[lVar15 * 3]) {
            fVar31 = pfVar11[lVar15 * 3];
          }
          *(float *)(param_1 + 0x28) = fVar31;
          fVar31 = pfVar11[lVar15 * 3 + 1];
          if (pfVar11[lVar15 * 3 + 1] <= *(float *)(param_1 + 0x2c)) {
            fVar31 = *(float *)(param_1 + 0x2c);
          }
          *(float *)(param_1 + 0x2c) = fVar31;
          fVar31 = pfVar11[lVar15 * 3 + 2];
          if (pfVar11[lVar15 * 3 + 2] <= *(float *)(param_1 + 0x30)) {
            fVar31 = *(float *)(param_1 + 0x30);
          }
          *(float *)(param_1 + 0x30) = fVar31;
        }
        local_188 = local_188 + 4;
        iVar18 = iVar18 + 1;
        fVar31 = local_16c;
        fVar32 = local_170;
        uVar20 = local_178;
      } while (iVar18 < (int)local_108);
    }
    *(float *)(param_1 + 0x24) = fVar32;
    *(float *)(param_1 + 0x30) = fVar31;
    if (uVar20 == 0) {
      iVar18 = *(int *)(param_1 + 0x40);
    }
    else {
      iVar18 = *(int *)(param_1 + 0x40);
      if (*(int *)(param_1 + 0x44) < (int)(uVar20 + iVar18)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0x38);
        iVar18 = *(int *)(param_1 + 0x40);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar18 * 0xc),_Src,
                 (longlong)(int)uVar20 * 0xc);
      iVar18 = *(int *)(param_1 + 0x40) + uVar20;
    }
    local_190 = 0;
    *(int *)(param_1 + 0x40) = iVar18 + 1;
    local_198 = fVar32;
    fStack_194 = fVar31;
    if (*(int *)(param_1 + 0x44) < iVar18 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar18);
    }
    lVar15 = *(longlong *)(param_1 + 0x38);
    *(ulonglong *)(lVar15 + (longlong)iVar18 * 0xc) = CONCAT44(fStack_194,local_198);
    *(undefined4 *)(lVar15 + 8 + (longlong)iVar18 * 0xc) = local_190;
    uVar9 = 3;
  }
  *(undefined1 *)(param_1 + 0x48) = uVar9;
  if (local_110 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  if (local_98 != (float *)0x0) {
    FMemory::Free();
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 14223e270 SetFloatParameter body=193 status=ok
// SIG undefined SetFloatParameter(void)

void FActiveSound::SetFloatParameter(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x518);
    plVar4 = (longlong *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x520);
    lVar6 = (longlong)iVar3;
    plVar2 = plVar4 + lVar6 * 4;
    for (; plVar4 != plVar2; plVar4 = plVar4 + 4) {
      if (*plVar4 == param_2) {
        *(undefined4 *)(plVar4 + 1) = param_3;
        return;
      }
    }
    *(int *)(param_1 + 0x520) = iVar3 + 1;
    if (*(int *)(param_1 + 0x524) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar3);
    }
    puVar5 = (undefined8 *)(lVar6 * 0x20 + *plVar1);
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    puVar5[3] = 0;
    *(longlong *)(lVar6 * 0x20 + *plVar1) = param_2;
    *(undefined4 *)(lVar6 * 0x20 + 8 + *plVar1) = param_3;
  }
  return;
}



// FUNCTION 14223e340 SetIntParameter body=188 status=ok
// SIG undefined SetIntParameter(void)

void FActiveSound::SetIntParameter(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x518);
    plVar4 = (longlong *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x520);
    lVar6 = (longlong)iVar3;
    plVar2 = plVar4 + lVar6 * 4;
    for (; plVar4 != plVar2; plVar4 = plVar4 + 4) {
      if (*plVar4 == param_2) {
        *(undefined4 *)(plVar4 + 2) = param_3;
        return;
      }
    }
    *(int *)(param_1 + 0x520) = iVar3 + 1;
    if (*(int *)(param_1 + 0x524) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar3);
    }
    puVar5 = (undefined8 *)(lVar6 * 0x20 + *plVar1);
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    puVar5[3] = 0;
    *(longlong *)(lVar6 * 0x20 + *plVar1) = param_2;
    *(undefined4 *)(lVar6 * 0x20 + 0x10 + *plVar1) = param_3;
  }
  return;
}



// FUNCTION 14223e400 FUN_14223e400 body=191 status=ok
// SIG undefined FUN_14223e400(void)

void FUN_14223e400(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *local_18;
  undefined8 local_10;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x2d8) = param_3;
    FUN_1423424e0(param_2);
  }
  uVar2 = 0;
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  FUN_14044f0b0(param_1,&local_18,0);
  puVar1 = local_18;
  uVar3 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
  if (local_18 + (int)local_10 < local_18) {
    uVar3 = uVar2;
  }
  puVar4 = local_18;
  if (uVar3 != 0) {
    do {
      FUN_142397730(*puVar4,param_2);
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar2 != uVar3);
  }
  if (puVar1 != (undefined8 *)0x0) {
    FMemory::Free(puVar1);
  }
  return;
}



// FUNCTION 14223e4c0 FUN_14223e4c0 body=633 status=ok
// SIG undefined FUN_14223e4c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14223e4c0(longlong *param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(float *)((longlong)param_1 + 0xcc) = param_2;
  if (((char)param_1[0x25] == '\x03') || ((*(byte *)(param_1 + 0x12) & 0x21) != 0)) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    lVar3 = 0;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar6;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      if (param_2 <= 0.0) {
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        FUN_142880530(uVar5,param_1 + 0x30);
        param_1[0x30] = 0;
      }
      else {
        lVar3 = (**(code **)(*param_1 + 0x148))();
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar4 + 1,param_1);
          plVar4[2] = (longlong)&LAB_142221650;
          lVar3 = FDelegateHandle::GenerateNewID();
          plVar4[4] = lVar3;
          *plVar4 = (longlong)&PTR_FUN_143f4d1b8;
        }
        local_a8 = 0;
        local_a0 = 0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_b0 = 0xbf800000;
        local_b8 = 0;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar5,param_1 + 0x30,&local_a8,param_2);
        if (local_48 != 0) {
          plVar7 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar7 = local_58;
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          lVar3 = FMemory::Realloc(plVar4,0,0);
          if (lVar3 != 0) {
            FMemory::Free(lVar3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14223e740 SetLinks body=223 status=ok
// SIG undefined SetLinks(void)

void FSimpleLinkNavModifier::SetLinks(uint *param_1,uint *param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  puVar1 = param_1 + 2;
  if (puVar1 != param_2) {
    FUN_14221e520(puVar1,*(undefined8 *)param_2,param_2[2],param_1[5],0);
  }
  param_1[0x19] = param_1[0x19] & 0xfffffffd;
  iVar5 = 0;
  uVar3 = param_1[0x19];
  if (0 < (int)param_1[4]) {
    lVar6 = 0;
    do {
      lVar4 = lVar6 * 0x50 + *(longlong *)puVar1;
      bVar2 = FUN_142234a30(lVar4);
      uVar3 = param_1[0x19];
      lVar6 = lVar6 + 1;
      uVar3 = (((uint)bVar2 * 2 | uVar3) ^ uVar3) & 2 ^ uVar3;
      param_1[0x19] = uVar3;
      iVar5 = iVar5 + 1;
      uVar3 = ((0.0 < *(float *)(lVar4 + 4) | uVar3) ^ uVar3) & 1 ^ uVar3;
      param_1[0x19] = uVar3;
    } while (iVar5 < (int)param_1[4]);
  }
  if (((uVar3 & 4) == 0) && ((uVar3 & 2) == 0)) {
    *param_1 = *param_1 & 0xfffffffe;
    return;
  }
  *param_1 = *param_1 & 0xfffffffe;
  *param_1 = *param_1 | 1;
  return;
}



// FUNCTION 14223e820 SetMakeNoiseDelegate body=145 status=ok
// SIG undefined SetMakeNoiseDelegate(void)

void AActor::SetMakeNoiseDelegate(longlong *param_1)

{
  char cVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((cVar1 != '\0') && ((longlong **)param_1 != &DAT_146aeea30)) {
      if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014223e863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)*param_1 + 0x30))();
        return;
      }
      if ((DAT_146aeea38 != 0) && (DAT_146aeea30 != (longlong *)0x0)) {
        (**(code **)(*DAT_146aeea30 + 0x28))(DAT_146aeea30,0);
        if (DAT_146aeea30 != (longlong *)0x0) {
          DAT_146aeea30 = (longlong *)FMemory::Realloc(DAT_146aeea30,0,0);
        }
        DAT_146aeea38 = 0;
      }
    }
  }
  return;
}



// FUNCTION 14223e8c0 FUN_14223e8c0 body=182 status=ok
// SIG undefined FUN_14223e8c0(void)

void FUN_14223e8c0(longlong param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x94) & 2) == 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    lVar3 = 0;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar4 = iVar2 >> 0x1f & 0xffff;
      uVar1 = iVar2 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
              (longlong)(int)((uVar1 & 0xffff) - uVar4) * 0x18;
    }
    if (((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) && (param_2 != *(float *)(param_1 + 0x138))) {
      *(float *)(param_1 + 0x138) = param_2;
      iVar2 = FUN_142235230(param_1);
      if ((iVar2 != 3) && (lVar3 = FUN_1422325e0(param_1), lVar3 != 0)) {
        FUN_1425c5800(lVar3,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14223e980 FUN_14223e980 body=300 status=ok
// SIG undefined FUN_14223e980(void)

void FUN_14223e980(longlong *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar4 = 0;
  iVar2 = FUN_142235230();
  if ((iVar2 != 3) && ((*(byte *)((longlong)param_1 + 0x94) & 2) == 0)) {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar6 = iVar2 >> 0x1f & 0xffff;
      uVar3 = iVar2 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar5 = FUN_142873bb0(DAT_146b17150,lVar4,param_1[0x24]);
      if (lVar5 != 0) {
        bVar1 = *(byte *)((longlong)param_1 + 0x129);
        *(char *)((longlong)param_1 + 0x129) = (char)param_2;
        if (bVar1 != param_2) {
          FUN_1425c5520(lVar5,param_1);
        }
        if ((int)param_2 < 2) {
          FUN_1428c4d10(lVar4,param_1);
          FUN_1425bdd80(lVar5,param_1,0);
          lVar4 = *(longlong *)(lVar4 + 0x108);
          if ((lVar4 != 0) && (lVar4 != lVar5)) {
            FUN_1425bdd80(lVar4,param_1,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14223eab0 FUN_14223eab0 body=97 status=ok
// SIG undefined FUN_14223eab0(void)

void FUN_14223eab0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != param_1[0x24]) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      FUN_1428d4e50(lVar1,param_1);
    }
    param_1[0x24] = param_2;
    if (lVar1 != 0) {
      FUN_1428c4d10(lVar1,param_1);
    }
  }
  return;
}



// FUNCTION 14223eb20 FUN_14223eb20 body=198 status=ok
// SIG undefined FUN_14223eb20(void)

void FUN_14223eb20(longlong param_1,float param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x94) & 2) == 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    lVar3 = 0;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar4 = iVar2 >> 0x1f & 0xffff;
      uVar1 = iVar2 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
              (longlong)(int)((uVar1 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      if (0.0 <= param_3) {
        *(float *)(param_1 + 0x144) = param_3;
      }
      if (param_2 != *(float *)(param_1 + 0x140)) {
        *(float *)(param_1 + 0x140) = param_2;
        iVar2 = FUN_142235230(param_1);
        if ((iVar2 != 3) && (lVar3 = FUN_1422325e0(param_1), lVar3 != 0)) {
          FUN_1425c5880(lVar3,param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14223ebf0 SetNetUpdateTime body=81 status=ok
// SIG undefined SetNetUpdateTime(void)

void AActor::SetNetUpdateTime(longlong *param_1,float param_2)

{
  longlong lVar1;
  double dVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
    lVar1 = FUN_1425bd3e0(*(longlong *)(lVar1 + 0x38),param_1);
    if (lVar1 != 0) {
      dVar2 = (double)param_2;
      if (*(double *)(lVar1 + 0x10) <= (double)param_2) {
        dVar2 = *(double *)(lVar1 + 0x10);
      }
      *(double *)(lVar1 + 0x10) = dVar2;
    }
  }
  return;
}



// FUNCTION 14223ec50 FUN_14223ec50 body=198 status=ok
// SIG undefined FUN_14223ec50(void)

void FUN_14223ec50(longlong param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x94) & 2) == 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    lVar3 = 0;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar4 = iVar2 >> 0x1f & 0xffff;
      uVar1 = iVar2 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
              (longlong)(int)((uVar1 & 0xffff) - uVar4) * 0x18;
    }
    if (((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) && ((*(byte *)(param_1 + 0x91) & 1) != param_2)) {
      *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) & 0xfe | param_2;
      iVar2 = FUN_142235230(param_1);
      if ((iVar2 != 3) && (lVar3 = FUN_1422325e0(param_1), lVar3 != 0)) {
        FUN_1425c5bb0(lVar3,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14223ed20 FUN_14223ed20 body=205 status=ok
// SIG undefined FUN_14223ed20(void)

void FUN_14223ed20(longlong param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x94) & 2) == 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    lVar3 = 0;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar4 = iVar2 >> 0x1f & 0xffff;
      uVar1 = iVar2 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
              (longlong)(int)((uVar1 & 0xffff) - uVar4) * 0x18;
    }
    if (((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) &&
       ((*(byte *)(param_1 + 0x90) >> 2 & 1) != param_2)) {
      *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xfb | param_2 << 2;
      iVar2 = FUN_142235230(param_1);
      if ((iVar2 != 3) && (lVar3 = FUN_1422325e0(param_1), lVar3 != 0)) {
        FUN_1425c5980(lVar3,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14223edf0 FUN_14223edf0 body=321 status=ok
// SIG undefined FUN_14223edf0(void)

void FUN_14223edf0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong *local_res8;
  
  plVar2 = (longlong *)param_1[0x23];
  if (plVar2 != param_2) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    plVar3 = param_2;
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[0x23]) {
        if (plVar3 == param_1) {
          return;
        }
      }
      lVar6 = 0;
      if (plVar2 != (longlong *)0x0) {
        local_res8 = param_1;
        TArray<FName,FDefaultAllocator>::Remove(plVar2 + 0x2b,&local_res8);
        lVar6 = param_1[0x23];
      }
      param_1[0x23] = (longlong)param_2;
      lVar7 = FUN_1422325e0(param_1);
      if (lVar7 != 0) {
        FUN_1425c5900(lVar7,param_1,lVar6);
      }
      lVar6 = param_1[0x23];
      if (lVar6 != 0) {
        iVar1 = *(int *)(lVar6 + 0x160);
        *(int *)(lVar6 + 0x160) = iVar1 + 1;
        if (*(int *)(lVar6 + 0x164) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar6 + 0x158,iVar1);
        }
        *(longlong **)(*(longlong *)(lVar6 + 0x158) + (longlong)iVar1 * 8) = param_1;
      }
      if (((*(byte *)(param_1 + 0x12) & 4) != 0) && (cVar4 = FUN_1407cd900(param_1), cVar4 == '\0'))
      {
        (**(code **)(*param_1 + 0x600))(param_1);
      }
      FUN_142236f50(param_1);
    }
  }
  return;
}



// FUNCTION 14223ef40 SetOwner body=35 status=ok
// SIG undefined SetOwner(void)

void FActiveSound::SetOwner(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x18);
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 14223ef70 EnableToolTipForceField body=17 status=ok
// SIG undefined EnableToolTipForceField(void)

void SWidget::EnableToolTipForceField(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xef;
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | param_2 << 4;
  return;
}



// FUNCTION 14223ef90 FUN_14223ef90 body=127 status=ok
// SIG undefined FUN_14223ef90(void)

void FUN_14223ef90(longlong *param_1,byte param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if ((char)param_1[0x25] == '\x03') {
    bVar1 = *(byte *)((longlong)param_1 + 0x92);
    *(byte *)((longlong)param_1 + 0x95) = param_2;
    *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) & 0xbf;
    *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | param_2 << 6;
    if ((bVar1 >> 6 & 1) != param_2) {
      lVar2 = (**(code **)(*param_1 + 0x148))();
      if (lVar2 != 0) {
        if ((*(byte *)((longlong)param_1 + 0x92) & 0x40) != 0) {
          FUN_1428c4d10();
          FUN_14222cb50(param_1);
          return;
        }
        FUN_1428d4e50(lVar2,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14223f010 FUN_14223f010 body=71 status=ok
// SIG undefined FUN_14223f010(void)

undefined8 FUN_14223f010(longlong *param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(longlong **)(param_2 + 0x118) != param_1)) {
    return 0;
  }
  (**(code **)(*param_1 + 0x70))(param_1,1);
  param_1[0x2d] = param_2;
  return 1;
}



// FUNCTION 14223f060 SetSegmentLinks body=231 status=ok
// SIG undefined SetSegmentLinks(void)

void FSimpleLinkNavModifier::SetSegmentLinks(uint *param_1,uint *param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  puVar1 = param_1 + 6;
  if (puVar1 != param_2) {
    TArray<FNavigationSegmentLink,FDefaultAllocator>::CopyToEmpty<FNavigationSegmentLink>
              (puVar1,*(undefined8 *)param_2,param_2[2],param_1[9],0);
  }
  param_1[0x19] = param_1[0x19] & 0xfffffffb;
  iVar6 = 0;
  uVar3 = param_1[0x19];
  if (0 < (int)param_1[8]) {
    lVar5 = 0;
    do {
      lVar4 = lVar5 * 0x68 + *(longlong *)puVar1;
      *(uint *)(lVar4 + 0xc) = param_1[0x18];
      bVar2 = FUN_142234a30(lVar4);
      uVar3 = param_1[0x19];
      uVar3 = (((uint)bVar2 * 4 | uVar3) ^ uVar3) & 4 ^ uVar3;
      param_1[0x19] = uVar3;
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 1;
      uVar3 = ((0.0 < *(float *)(lVar4 + 4) | uVar3) ^ uVar3) & 1 ^ uVar3;
      param_1[0x19] = uVar3;
    } while (iVar6 < (int)param_1[8]);
  }
  if (((uVar3 & 4) == 0) && ((uVar3 & 2) == 0)) {
    *param_1 = *param_1 & 0xfffffffe;
    return;
  }
  *param_1 = *param_1 & 0xfffffffe;
  *param_1 = *param_1 | 1;
  return;
}



// FUNCTION 14223f150 FUN_14223f150 body=91 status=ok
// SIG undefined FUN_14223f150(void)

void FUN_14223f150(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  *(longlong **)(param_1 + 0x10) = param_2;
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x58) + 0x4c) & 2) != 0)) {
LAB_14223f181:
    *(byte *)(param_1 + 0x9a) = *(byte *)(param_1 + 0x9a) & 0xbf;
    *(byte *)(param_1 + 0x9a) = *(byte *)(param_1 + 0x9a) | 0x40;
    return;
  }
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x2c0))(param_2);
    if (cVar1 != '\0') goto LAB_14223f181;
  }
  *(byte *)(param_1 + 0x9a) = *(byte *)(param_1 + 0x9a) & 0xbf;
  *(undefined1 *)(param_1 + 0x9a) = *(undefined1 *)(param_1 + 0x9a);
  return;
}



// FUNCTION 14223f1b0 FUN_14223f1b0 body=88 status=ok
// SIG undefined FUN_14223f1b0(void)

void FUN_14223f1b0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  *(longlong *)(param_1 + 0x58) = param_2;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x4c) & 2) != 0)) {
LAB_14223f1de:
    *(byte *)(param_1 + 0x9a) = *(byte *)(param_1 + 0x9a) & 0xbf;
    *(byte *)(param_1 + 0x9a) = *(byte *)(param_1 + 0x9a) | 0x40;
    return;
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x2c0))();
    if (cVar1 != '\0') goto LAB_14223f1de;
  }
  *(byte *)(param_1 + 0x9a) = *(byte *)(param_1 + 0x9a) & 0xbf;
  *(undefined1 *)(param_1 + 0x9a) = *(undefined1 *)(param_1 + 0x9a);
  return;
}



// FUNCTION 14223f210 SetSoundParameter body=162 status=ok
// SIG undefined SetSoundParameter(void)

void FActiveSound::SetSoundParameter(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x518);
    plVar6 = (longlong *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x520);
    lVar7 = (longlong)iVar3 * 0x20;
    plVar2 = plVar6 + (longlong)iVar3 * 4;
    for (; plVar6 != plVar2; plVar6 = plVar6 + 4) {
      if (*plVar6 == *param_2) {
        lVar7 = param_2[1];
        *plVar6 = *param_2;
        plVar6[1] = lVar7;
        lVar7 = param_2[3];
        plVar6[2] = param_2[2];
        plVar6[3] = lVar7;
        return;
      }
    }
    *(int *)(param_1 + 0x520) = iVar3 + 1;
    if (*(int *)(param_1 + 0x524) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1);
    }
    lVar4 = *plVar1;
    lVar5 = param_2[1];
    plVar1 = (longlong *)(lVar4 + lVar7);
    *plVar1 = *param_2;
    plVar1[1] = lVar5;
    lVar5 = param_2[3];
    plVar1 = (longlong *)(lVar4 + 0x10 + lVar7);
    *plVar1 = param_2[2];
    plVar1[1] = lVar5;
  }
  return;
}



// FUNCTION 14223f2c0 SetSubmixSend body=128 status=ok
// SIG undefined SetSubmixSend(void)

void FActiveSound::SetSubmixSend(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  plVar1 = (longlong *)(param_1 + 0x68);
  puVar6 = (undefined4 *)*plVar1;
  iVar4 = *(int *)(param_1 + 0x70);
  puVar2 = puVar6 + (longlong)iVar4 * 4;
  if (puVar6 != puVar2) {
    do {
      if (*(longlong *)(puVar6 + 2) == param_2[1]) {
        *puVar6 = *(undefined4 *)param_2;
        return;
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar2);
  }
  *(int *)(param_1 + 0x70) = iVar4 + 1;
  if (*(int *)(param_1 + 0x74) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
  }
  uVar5 = param_2[1];
  puVar3 = (undefined8 *)(*plVar1 + (longlong)iVar4 * 0x10);
  *puVar3 = *param_2;
  puVar3[1] = uVar5;
  return;
}



// FUNCTION 14223f340 FUN_14223f340 body=39 status=ok
// SIG undefined FUN_14223f340(void)

void FUN_14223f340(longlong param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x340) >> 2 & 1) != param_2) {
    *(byte *)(param_1 + 0x340) = *(byte *)(param_1 + 0x340) & 0xfb | param_2 << 2;
  }
  return;
}



// FUNCTION 14223f370 SetTickableWhenPaused body=8 status=ok
// SIG undefined SetTickableWhenPaused(void)

void AActor::SetTickableWhenPaused(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfe;
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | param_2;
  return;
}



// FUNCTION 14223f380 SetWaveParameter body=189 status=ok
// SIG undefined SetWaveParameter(void)

void FActiveSound::SetWaveParameter(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x518);
    plVar4 = (longlong *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x520);
    lVar6 = (longlong)iVar3;
    plVar2 = plVar4 + lVar6 * 4;
    for (; plVar4 != plVar2; plVar4 = plVar4 + 4) {
      if (*plVar4 == param_2) {
        plVar4[3] = param_3;
        return;
      }
    }
    *(int *)(param_1 + 0x520) = iVar3 + 1;
    if (*(int *)(param_1 + 0x524) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar3);
    }
    puVar5 = (undefined8 *)(lVar6 * 0x20 + *plVar1);
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    puVar5[3] = 0;
    *(longlong *)(lVar6 * 0x20 + *plVar1) = param_2;
    *(longlong *)(lVar6 * 0x20 + 0x18 + *plVar1) = param_3;
  }
  return;
}



// FUNCTION 14223f440 SetWorld body=61 status=ok
// SIG undefined SetWorld(void)

void FActiveSound::SetWorld(longlong param_1,longlong param_2)

{
  FWeakObjectPtr::operator=();
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14223f480 Setup body=83 status=ok
// SIG undefined Setup(void)

void UNavCollisionBase::Setup(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavCollisionBase.h"
             ,0x33,L"Pure virtual not implemented (%s)",L"UNavCollisionBase::Setup");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavCollisionBase.h"
             ,0x33,L"Pure virtual not implemented (%s)",L"UNavCollisionBase::Setup");
  return;
}



// FUNCTION 14223f4e0 FUN_14223f4e0 body=162 status=ok
// SIG undefined FUN_14223f4e0(void)

ulonglong FUN_14223f4e0(int param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)FUN_1428e6120();
  lVar5 = plVar2[0x1f];
  if (lVar5 == 0) {
    uVar3 = (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar5 = plVar2[0x1f];
    if (lVar5 == 0) goto LAB_14223f570;
  }
  lVar4 = FUN_1428e6120();
  iVar1 = *(int *)(lVar4 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar1) ||
     (uVar3 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  if (((char)uVar3 != '\0') && ((*(char *)(lVar5 + 0x48) == '\x01' || (param_1 != 3)))) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
LAB_14223f570:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 14223f590 FUN_14223f590 body=84 status=ok
// SIG undefined FUN_14223f590(void)

void FUN_14223f590(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x168) != 0) && (param_2 != (longlong *)0x0)) {
    lVar1 = (**(code **)(*param_2 + 0x3b8))(param_2);
    if (lVar1 != 0) {
      FUN_142382f60(*(undefined8 *)(param_1 + 0x168),lVar1,&DAT_146532184,param_3);
    }
  }
  return;
}



// FUNCTION 14223f5f0 FUN_14223f5f0 body=981 status=ok
// SIG undefined FUN_14223f5f0(void)

void FUN_14223f5f0(longlong param_1,char param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  longlong lVar16;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  uint uStack_a0;
  int iStack_9c;
  undefined1 local_98 [16];
  code *local_88;
  undefined2 local_80;
  code *local_78;
  uint uStack_70;
  uint uStack_6c;
  uint *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_38;
  
  lVar12 = *(longlong *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x9b);
  if ((lVar12 != 0) && ((bVar2 & 0x10) == 0)) {
    iVar10 = *(int *)(lVar12 + 0x34) + -1;
    iVar7 = 0;
    if (-1 < iVar10) {
      iVar7 = iVar10;
    }
    *(int *)(lVar12 + 0x34) = iVar7;
  }
  pcVar1 = (code *)(param_1 + 0x468);
  iVar7 = *(int *)(param_1 + 0x490);
  puStack_68 = (uint *)(param_1 + 0x478);
  local_b8 = 0;
  uStack_b4 = 1;
  local_a8._4_4_ = 0;
  uStack_a0 = 0;
  if (iVar7 != 0) {
    puVar15 = *(uint **)(param_1 + 0x488);
    if (*(uint **)(param_1 + 0x488) == (uint *)0x0) {
      puVar15 = puStack_68;
    }
    uVar11 = *puVar15;
    local_b8 = 0;
    uStack_a0 = 0;
    while (uVar11 == 0) {
      lVar12 = (longlong)(int)local_b8;
      uStack_a0 = uStack_a0 + 0x20;
      uVar11 = local_b8 + 1;
      bVar4 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_b8;
      local_b8 = uVar11;
      if (bVar4) goto LAB_14223f6ef;
      uVar11 = puVar15[lVar12 + 1];
    }
    uStack_b4 = -uVar11 & uVar11;
    iVar10 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    local_a8._4_4_ = (uStack_a0 - iVar10) + 0x1f;
    if (iVar7 < local_a8._4_4_) {
LAB_14223f6ef:
      local_a8._4_4_ = iVar7;
    }
  }
  uStack_60 = CONCAT44(local_a8._4_4_,0xffffffff);
  auVar5._8_4_ = uStack_a0;
  auVar5._0_8_ = uStack_60;
  auVar5._12_4_ = iStack_9c;
  local_50._0_4_ = SUB84(pcVar1,0);
  local_50._4_4_ = (undefined4)((ulonglong)pcVar1 >> 0x20);
  uStack_70 = local_b8;
  uStack_6c = uStack_b4;
  local_80 = 0;
  uStack_a0 = 0xffffffff;
  iStack_9c = local_a8._4_4_;
  uStack_b0 = local_b8;
  uStack_ac = uStack_b4;
  uStack_58 = auVar5._8_8_;
  local_98._8_4_ = (undefined4)local_50;
  local_98._0_8_ = uStack_58;
  local_98._12_4_ = local_50._4_4_;
  bVar4 = local_a8._4_4_ < *(int *)(param_1 + 0x490);
  local_88 = pcVar1;
  local_78 = pcVar1;
  local_a8 = puStack_68;
  local_50 = pcVar1;
  if (bVar4) {
    do {
      lVar12 = *(longlong *)pcVar1 + (longlong)iStack_9c * 0x18;
      plVar8 = (longlong *)
               FAudioDevice::GetSoundSource
                         (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar12 + 8));
      if (plVar8 != (longlong *)0x0) {
        if (((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x358) & 0x30) == 0x30) &&
           ((param_2 != '\0' || (*(int *)(*(longlong *)(param_1 + 0x40) + 0x150) == 0)))) {
          (**(code **)(*plVar8 + 0x40))(plVar8);
        }
        else {
          (**(code **)(*plVar8 + 0x38))(plVar8);
        }
      }
      if ((*(byte *)(param_1 + 0x9b) & 0x10) == 0) {
        uVar3 = *(undefined8 *)(lVar12 + 8);
        local_48 = 0;
        local_38 = 0;
        puVar9 = (undefined8 *)FUN_140438ef0(0x10,&puStack_68);
        if (puVar9 != (undefined8 *)0x0) {
          puVar9[1] = uVar3;
          *puVar9 = &PTR_FUN_143f77b70;
        }
        local_78 = UE4Function_Private::
                   TFunctionRefCaller<<lambda_d9682d1287380040cd80883dc908dd76>,void___cdecl(void)>
                   ::Call;
        FUN_1422f8d80(&local_78,bVar2);
      }
      if (plVar8 == (longlong *)0x0) {
        lVar16 = *(longlong *)(lVar12 + 8);
        if (lVar16 != 0) {
          FRichCurve::~FRichCurve(lVar16 + 0x118);
          if (*(longlong *)(lVar16 + 0x50) != 0) {
            FMemory::Free();
          }
          lVar13 = 2;
          lVar14 = lVar16 + 0x48;
          do {
            plVar8 = (longlong *)(lVar14 + -0x10);
            lVar14 = lVar14 + -0x10;
            lVar13 = lVar13 + -1;
            if (*plVar8 != 0) {
              FMemory::Free();
            }
          } while (lVar13 != 0);
LAB_14223f8ea:
          if (*(longlong *)(lVar16 + 0x18) != 0) {
            FMemory::Free();
          }
          FMemory::operator_delete(lVar16,0x1a8);
        }
LAB_14223f905:
        *(undefined8 *)(lVar12 + 8) = 0;
      }
      else {
        cVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
        if (cVar6 == '\0') {
          (**(code **)(*plVar8 + 0x40))(plVar8);
          lVar16 = *(longlong *)(lVar12 + 8);
          if (lVar16 != 0) {
            FRichCurve::~FRichCurve(lVar16 + 0x118);
            if (*(longlong *)(lVar16 + 0x50) != 0) {
              FMemory::Free();
            }
            lVar13 = 2;
            lVar14 = lVar16 + 0x48;
            do {
              plVar8 = (longlong *)(lVar14 + -0x10);
              lVar14 = lVar14 + -0x10;
              lVar13 = lVar13 + -1;
              if (*plVar8 != 0) {
                FMemory::Free();
              }
            } while (lVar13 != 0);
            goto LAB_14223f8ea;
          }
          goto LAB_14223f905;
        }
        *(byte *)(param_1 + 0x9b) = *(byte *)(param_1 + 0x9b) | 0x10;
      }
      uStack_a0 = uStack_a0 & ~uStack_ac;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
    } while (iStack_9c < (int)local_a8[6]);
    if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
      TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_88,*(int *)(local_88 + 8) - *(int *)(local_88 + 0x34),1);
    }
  }
  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x9b) = *(byte *)(param_1 + 0x9b) & 0xef;
  }
  if ((*(byte *)(param_1 + 0x9b) & 0x10) == 0) {
    TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0x468,0);
  }
  if ((bVar2 & 0x10) == 0) {
    FAudioDevice::RemoveActiveSound(*(undefined8 *)(param_1 + 0x40),param_1);
  }
  return;
}



// FUNCTION 14223f9d0 FUN_14223f9d0 body=38 status=ok
// SIG undefined FUN_14223f9d0(void)

void FUN_14223f9d0(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  
  puVar1 = (undefined1 *)(param_1 + 0x95);
  puVar2 = (undefined1 *)(param_1 + 0x128);
  if (puVar2 != puVar1) {
    uVar3 = *puVar2;
    *puVar2 = *puVar1;
    *puVar1 = uVar3;
  }
  FUN_14222cb50();
  return;
}



// FUNCTION 14223fa00 FUN_14223fa00 body=244 status=ok
// SIG undefined FUN_14223fa00(void)

void FUN_14223fa00(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  byte bVar3;
  longlong lVar4;
  
  if (((((*(byte *)(param_1 + 0x12) & 0x10) != 0) &&
       (plVar1 = (longlong *)param_1[0x2d], plVar1 != (longlong *)0x0)) &&
      (bVar3 = (**(code **)(*plVar1 + 0x400))(plVar1,0),
      bVar3 != (*(byte *)(param_1 + 0x19) >> 1 & 1))) &&
     (plVar1 = (longlong *)param_1[0x2d], plVar1 != (longlong *)0x0)) {
    lVar4 = FUN_1429f11d0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) &&
        ((**(code **)(*plVar1 + 0x5b8))(plVar1,*(byte *)(param_1 + 0x19) >> 1 & 1),
        (*(byte *)(param_1 + 0x19) & 2) == 0)) &&
       ((lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0 &&
        ((*(longlong *)(lVar4 + 0x218) != 0 &&
         (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x218) + 0x58), lVar4 != 0)))))) {
      FPhysicsReplication::RemoveReplicatedTarget(lVar4,plVar1);
    }
  }
  return;
}



// FUNCTION 14223fb00 FUN_14223fb00 body=1495 status=ok
// SIG undefined FUN_14223fb00(void)

undefined8
FUN_14223fb00(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong **pplVar10;
  byte *pbVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  longlong local_res18;
  longlong local_348;
  undefined4 local_340;
  undefined8 local_338;
  undefined4 local_330;
  longlong local_328;
  undefined4 local_320;
  longlong *local_318;
  float local_310;
  longlong local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  byte local_2f0 [4];
  undefined4 local_2ec;
  uint local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined8 local_2dc;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c4;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2ac;
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 local_268;
  longlong *local_260;
  undefined8 local_258;
  longlong *local_248;
  float local_240;
  longlong local_238;
  longlong *local_230;
  undefined8 local_228;
  longlong *local_218;
  float local_210;
  undefined4 local_20c;
  longlong *local_208;
  longlong local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_188 [144];
  undefined1 local_f8 [208];
  
  plVar8 = (longlong *)0x0;
  fVar14 = (float)param_2;
  uVar16 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (param_3[1] != 0) {
    lVar5 = UDamageType::GetPrivateStaticClass();
    lVar2 = param_3[1];
    lVar12 = lVar2;
    if (lVar2 != 0) {
LAB_14223fb60:
      if (lVar12 != lVar5) goto code_r0x00014223fb69;
      if (lVar2 != 0) {
        plVar6 = plVar8;
        if (lVar2 != 0) {
          plVar9 = (longlong *)UDamageType::GetPrivateStaticClass();
          for (plVar3 = (longlong *)param_3[1];
              (plVar6 = plVar8, plVar3 != (longlong *)0x0 &&
              (plVar6 = (longlong *)param_3[1], plVar3 != plVar9)); plVar3 = (longlong *)plVar3[6])
          {
          }
        }
        local_res18 = plVar6[0x1f];
        if (local_res18 != 0) goto LAB_14223fba7;
        (**(code **)(*plVar6 + 0x368))(plVar6);
        goto LAB_14223fb99;
      }
    }
  }
LAB_14223fb72:
  plVar6 = (longlong *)UDamageType::GetPrivateStaticClass();
  local_res18 = plVar6[0x1f];
  if (local_res18 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
LAB_14223fb99:
    local_res18 = plVar6[0x1f];
  }
LAB_14223fba7:
  cVar4 = (**(code **)(*param_3 + 0x10))(param_3,1);
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(*param_3 + 0x10))(param_3);
    if (cVar4 != '\0') {
      uVar15 = (**(code **)(*param_1 + 0x5a8))(param_1,param_2,param_3,param_4,param_5);
      fVar14 = (float)uVar15;
      uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
      if (fVar14 == 0.0) {
        return uVar15;
      }
      if ((int)param_3[7] < 1) {
        _guard_xfg_dispatch_icall_nop(&local_218,0,0x90);
        pplVar10 = &local_218;
        local_20c = 0x3f800000;
      }
      else {
        pplVar10 = (longlong **)FUN_140729f20(local_f8,param_3[6]);
      }
      FUN_140729f20(local_188,pplVar10);
      local_340 = *(undefined4 *)((longlong)param_3 + 0x2c);
      local_348 = *(longlong *)((longlong)param_3 + 0x24);
      FUN_1428e0850(param_1,uVar15,local_res18,&local_348,local_188,param_4,param_5);
      uVar15 = *(undefined8 *)((longlong)param_3 + 0x24);
      uVar1 = *(undefined4 *)((longlong)param_3 + 0x2c);
      FUN_140729f20(local_f8,local_188);
      pbVar11 = (byte *)FUN_140729f20(&local_218);
      _guard_xfg_dispatch_icall_nop(local_2f0,0,0x90);
      local_2e4 = *(undefined4 *)(pbVar11 + 0xc);
      local_2e0 = *(undefined4 *)(pbVar11 + 0x10);
      local_308 = local_res18;
      local_2ec = *(undefined4 *)(pbVar11 + 4);
      local_2f0[0] = local_2f0[0] ^ (*pbVar11 ^ local_2f0[0]) & 3;
      local_2dc = *(undefined8 *)(pbVar11 + 0x14);
      local_2d0 = *(undefined8 *)(pbVar11 + 0x20);
      local_2c4 = *(undefined8 *)(pbVar11 + 0x2c);
      local_2b8 = *(undefined8 *)(pbVar11 + 0x38);
      local_2ac = *(undefined8 *)(pbVar11 + 0x44);
      local_2e8 = local_2e8 ^ (*(uint *)(pbVar11 + 8) ^ local_2e8) & 1;
      local_2a0 = *(undefined8 *)(pbVar11 + 0x50);
      local_2d4 = *(undefined4 *)(pbVar11 + 0x1c);
      local_2c8 = *(undefined4 *)(pbVar11 + 0x28);
      local_2bc = *(undefined4 *)(pbVar11 + 0x34);
      local_2b0 = *(undefined4 *)(pbVar11 + 0x40);
      local_2a4 = *(undefined4 *)(pbVar11 + 0x4c);
      local_298 = *(undefined4 *)(pbVar11 + 0x58);
      local_294 = *(undefined4 *)(pbVar11 + 0x5c);
      local_290 = *(undefined4 *)(pbVar11 + 0x60);
      local_28c = *(undefined4 *)(pbVar11 + 100);
      local_288 = *(undefined4 *)(pbVar11 + 0x68);
      local_284 = *(undefined4 *)(pbVar11 + 0x6c);
      local_280 = *(undefined4 *)(pbVar11 + 0x70);
      local_27c = *(undefined4 *)(pbVar11 + 0x74);
      local_278 = *(undefined4 *)(pbVar11 + 0x78);
      local_270 = *(undefined8 *)(pbVar11 + 0x80);
      local_268 = *(undefined8 *)(pbVar11 + 0x88);
      local_258 = param_5;
      local_318 = param_1;
      local_310 = fVar14;
      local_300 = uVar15;
      local_2f8 = uVar1;
      local_260 = param_4;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x3a,&local_318);
      if (0 < (int)param_3[7]) {
        do {
          plVar6 = (longlong *)FWeakObjectPtr::Get((longlong)(int)plVar8 * 0x90 + param_3[6] + 0x74)
          ;
          if ((plVar6 != (longlong *)0x0) && ((longlong *)plVar6[0x23] == param_1)) {
            (**(code **)(*plVar6 + 0x6f8))(plVar6,param_2,param_3,param_4,param_5);
          }
          uVar13 = (int)plVar8 + 1;
          plVar8 = (longlong *)(ulonglong)uVar13;
        } while ((int)uVar13 < (int)param_3[7]);
      }
    }
  }
  else {
    uVar15 = (**(code **)(*param_1 + 0x5b0))(param_1,param_2,param_3,param_4,param_5);
    fVar14 = (float)uVar15;
    uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
    if (fVar14 == 0.0) {
      return uVar15;
    }
    local_338 = *(undefined8 *)((longlong)param_3 + 0x14);
    local_330 = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_348 = param_3[8];
    local_320 = (undefined4)param_3[0xc];
    local_328 = param_3[0xb];
    local_340 = (undefined4)param_3[9];
    uVar7 = FWeakObjectPtr::Get((longlong)param_3 + 0x94);
    FUN_1428e0670(param_1,uVar15,local_res18,&local_348,&local_328,uVar7,param_3[0x14],&local_338,
                  param_4,param_5,param_3 + 4);
    local_200 = param_3[8];
    local_1f8 = (undefined4)param_3[9];
    uVar15 = *(undefined8 *)((longlong)param_3 + 0x14);
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_218 = param_1;
    local_210 = fVar14;
    local_208 = param_4;
    local_1f0 = FWeakObjectPtr::Get((longlong)param_3 + 0x94);
    local_1e8 = param_3[0x14];
    local_1d0 = local_res18;
    local_1c8 = param_5;
    local_1e0 = uVar15;
    local_1d8 = uVar1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x38,&local_218);
    plVar8 = (longlong *)FWeakObjectPtr::Get((longlong)param_3 + 0x94);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x6f8))(plVar8,param_2,param_3,param_4,param_5);
    }
  }
  if (fVar14 != 0.0) {
    FUN_1428e0390(param_1,CONCAT44(uVar16,fVar14),local_res18,param_4,param_5);
    local_238 = local_res18;
    local_228 = param_5;
    local_248 = param_1;
    local_240 = fVar14;
    local_230 = param_4;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x36,&local_248);
    if (param_4 != (longlong *)0x0) {
      (**(code **)(*param_4 + 0x790))(param_4,CONCAT44(uVar16,fVar14),local_res18,param_1,param_5);
    }
  }
  return CONCAT44(uVar16,fVar14);
code_r0x00014223fb69:
  plVar6 = (longlong *)(lVar12 + 0x30);
  lVar12 = *plVar6;
  if (*plVar6 == 0) goto LAB_14223fb72;
  goto LAB_14223fb60;
}



// FUNCTION 1422400e0 FUN_1422400e0 body=350 status=ok
// SIG undefined FUN_1422400e0(void)

void FUN_1422400e0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *local_18;
  undefined8 local_10;
  
  iVar2 = FUN_142235230();
  if (iVar2 - 1U < 2) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 0x20;
    lVar5 = param_1[0x24];
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar7 = (longlong *)0x0;
    if (lVar5 == 0x11a) {
      plVar4 = plVar7;
      if (lVar3 != 0) {
        plVar4 = *(longlong **)(lVar3 + 0x38);
      }
    }
    else {
      plVar4 = (longlong *)FUN_142873bb0(DAT_146b17150,lVar3,lVar5);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x350))(plVar4,param_1);
    }
    if ((*(byte *)(param_1 + 0x80) & 4) != 0) {
      *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) & 0xfb;
      lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x970) != 0)) {
        if ((*(byte *)(param_1 + 0x80) & 4) == 0) {
          FUN_1424af600(*(longlong *)(lVar5 + 0x970),param_1);
        }
        else {
          FUN_1424a97c0();
        }
        local_18 = (undefined8 *)0x0;
        local_10 = 0;
        FUN_14044f0b0(param_1,&local_18,0);
        puVar1 = local_18;
        plVar4 = (longlong *)
                 ((ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3)
        ;
        if (local_18 + (int)local_10 < local_18) {
          plVar4 = plVar7;
        }
        puVar6 = local_18;
        if (plVar4 != (longlong *)0x0) {
          do {
            (**(code **)(*(longlong *)*puVar6 + 0x8c8))();
            plVar7 = (longlong *)((longlong)plVar7 + 1);
            puVar6 = puVar6 + 1;
          } while (plVar7 != plVar4);
        }
        if (puVar1 != (undefined8 *)0x0) {
          FMemory::Free(puVar1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142240240 FUN_142240240 body=1160 status=ok
// SIG undefined FUN_142240240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142240240(longlong *param_1,float *param_2,longlong *param_3,char param_4,char param_5
                       )

{
  longlong *plVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint in_stack_ffffffffffffff70;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  
  if ((param_1[0x2d] == 0) ||
     ((uVar5 = (**(code **)(*param_1 + 0x148))(), *(char *)(param_1[0x2d] + 0x24e) == '\0' &&
      (in_RAX = FUN_1428c5cc0(uVar5), (char)in_RAX != '\0')))) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (param_4 != '\0') {
    lVar7 = param_1[0x2d];
    if (lVar7 == 0) {
      local_58 = _DAT_1468b5d90;
      puVar6 = &local_58;
      local_50 = DAT_1468b5d98;
    }
    else {
      puVar6 = &local_68;
      local_60 = (float)*(undefined4 *)(lVar7 + 0x228);
      local_68 = *(undefined8 *)(lVar7 + 0x220);
    }
    if ((((float)*puVar6 == *param_2) &&
        (local_68._4_4_ = (float)((ulonglong)*puVar6 >> 0x20), local_68._4_4_ == param_2[1])) &&
       (*(float *)(puVar6 + 1) == param_2[2])) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      return (ulonglong)CONCAT31((int3)((uint)*(float *)(puVar6 + 1) >> 8),1);
    }
  }
  plVar1 = (longlong *)param_1[0x2d];
  if (plVar1 == (longlong *)0x0) {
    local_58 = _DAT_1468b5d90;
    local_50 = DAT_1468b5d98;
  }
  else {
    local_58 = plVar1[0x44];
    local_50 = *(float *)(plVar1 + 0x45);
  }
  local_78 = *(longlong *)param_2;
  local_70 = param_2[2];
  bVar3 = 1;
  local_68 = local_58;
  local_60 = local_50;
  if (plVar1 != (longlong *)0x0) {
    lVar7 = FUN_1429f11d0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((param_5 == '\0') &&
         ((iVar4 = (**(code **)(*plVar1 + 0x4e8))(plVar1), (iVar4 - 1U & 0xfffffffd) == 0 ||
          (iVar4 = FUN_142235230(param_1), iVar4 != 3)))) {
        lVar7 = param_1[0x2d];
        local_50 = *(float *)(param_3 + 1);
        fVar11 = *(float *)(lVar7 + 0x1d8) - local_60;
        fVar9 = *(float *)(lVar7 + 0x1d0) - (float)local_68;
        fVar10 = *(float *)(lVar7 + 0x1d4) - local_68._4_4_;
        local_70 = fVar11 + local_70;
        local_78._4_4_ = fVar10 + local_78._4_4_;
        local_58 = *param_3;
        local_78._0_4_ = fVar9 + (float)local_78;
        bVar3 = FUN_142546cc0(uVar5,param_1,&local_78,&local_58);
        fVar9 = (float)local_78 - fVar9;
        local_70 = local_70 - fVar11;
        local_78 = CONCAT44(local_78._4_4_ - fVar10,fVar9);
      }
      else {
        fVar9 = (float)local_78;
      }
      iVar4 = _finite((double)fVar9);
      if (iVar4 == 0) {
LAB_142240525:
        bVar2 = true;
      }
      else {
        iVar4 = _finite((double)local_78._4_4_);
        if ((iVar4 == 0) || (iVar4 = _finite((double)local_70), iVar4 == 0)) goto LAB_142240525;
        bVar2 = false;
      }
      if (bVar2) {
        return 0;
      }
      iVar4 = _finite((double)(float)local_68);
      if (iVar4 == 0) {
LAB_142240569:
        bVar2 = true;
      }
      else {
        iVar4 = _finite((double)local_68._4_4_);
        if ((iVar4 == 0) || (iVar4 = _finite((double)local_60), iVar4 == 0)) goto LAB_142240569;
        bVar2 = false;
      }
      if (bVar2) {
        return 0;
      }
      bVar8 = 0;
      if (bVar3 != 0) {
        if ((param_4 == '\0') && (param_5 == '\0')) {
          local_50 = local_70 - local_60;
          local_58 = CONCAT44(local_78._4_4_ - local_68._4_4_,(float)local_78 - (float)local_68);
          bVar3 = FUN_142391970(plVar1,&local_58,param_3,0,0,0,1);
        }
        else {
          local_50 = *(float *)(param_3 + 1);
          local_58 = *param_3;
          local_60 = local_70;
          local_68 = local_78;
          FUN_142399680(plVar1,&local_68,&local_58,0,0,in_stack_ffffffffffffff70 & 0xffffff00);
        }
        bVar8 = 0;
        if (bVar3 != 0) {
          (**(code **)(*param_1 + 0x508))(param_1,param_4);
          return (ulonglong)bVar3;
        }
      }
      goto LAB_14224069b;
    }
  }
  bVar8 = bVar3;
  if (param_1[0x2d] != 0) {
    local_50 = (float)param_3[1];
    local_58 = *param_3;
    local_68 = local_78;
    local_60 = local_70;
    FUN_142399680(param_1[0x2d],&local_68,&local_58,0,0,1);
  }
LAB_14224069b:
  return (ulonglong)bVar8;
}



// FUNCTION 1422406d0 FUN_1422406d0 body=709 status=ok
// SIG undefined FUN_1422406d0(void)

void FUN_1422406d0(longlong *param_1,undefined4 param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  lVar8 = (**(code **)(*param_1 + 0x148))();
  if ((lVar8 != 0) && (lVar8 = UWorld::GetWorldSettings(lVar8,0,1), lVar8 != 0)) {
    FUN_1428e09f0(param_1,param_2);
  }
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*(longlong *)(lVar8 + 400) == 0) {
    lVar10 = lVar8 + 0x400;
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(lVar8 + 400) + 0x98);
  }
  FUN_1425328c0(lVar10,param_1,*(undefined4 *)(lVar8 + 0x7b0));
  if ((*(byte *)((longlong)param_1 + 0x91) & 0x10) != 0) {
    plVar2 = param_1 + 0x56;
    puVar1 = (uint *)(param_1 + 0x58);
    uVar3 = *(uint *)(param_1 + 0x5b);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar3 != 0) {
      puVar13 = (uint *)param_1[0x5a];
      if ((uint *)param_1[0x5a] == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar4 = *puVar13;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar4 == 0) {
        lVar8 = (longlong)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar9 = local_98 + 1;
        bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar9;
        if (bVar6) goto LAB_14224083d;
        uVar4 = puVar13[lVar8 + 1];
      }
      uStack_94 = -uVar4 & uVar4;
      iVar9 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_84 = (iStack_80 - iVar9) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_14224083d:
        uStack_84 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x5b);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,iStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar12 = uVar4 & 0xffffffe0;
    iStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar1;
    local_50 = plVar2;
    puStack_40 = puVar1;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_84 = uVar4;
    if (uVar4 != uVar3) {
      puVar13 = (uint *)param_1[0x5a];
      if ((uint *)param_1[0x5a] == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar9 = (int)uVar4 >> 5;
      while (uVar11 == 0) {
        uVar12 = uVar12 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_142240904;
        uVar11 = puVar13[(longlong)iVar9 + 1];
        iVar9 = iVar9 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar9 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_84 = (uVar12 - iVar9) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_142240904:
        uStack_84 = uVar3;
      }
    }
    while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
      plVar5 = *(longlong **)(*plVar2 + (longlong)(int)uStack_5c * 0x10);
      if ((plVar5 != (longlong *)0x0) && (cVar7 = (**(code **)(*plVar5 + 0x368))(), cVar7 == '\0'))
      {
        return;
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
    FUN_142227350(param_1,0,1);
  }
  return;
}



// FUNCTION 1422409a0 FUN_1422409a0 body=127 status=ok
// SIG undefined FUN_1422409a0(void)

void FUN_1422409a0(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar4 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar4;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar3 != 0) {
      (**(code **)(*param_1 + 0x458))(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 142240a20 FUN_142240a20 body=965 status=ok
// SIG undefined FUN_142240a20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142240a20(longlong param_1,float *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar14;
  uint *puVar15;
  float fVar16;
  float fVar17;
  undefined8 local_c8;
  float local_c0;
  int local_b8;
  uint uStack_b4;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_90;
  uint uStack_8c;
  uint *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined7 uVar13;
  
  if ((*(byte *)(param_1 + 0x340) & 4) != 0) {
    return;
  }
  lVar11 = *(longlong *)(param_1 + 0x168);
  if (lVar11 == 0) {
    local_c8 = _DAT_1468b5d90;
    local_c0 = DAT_1468b5d98;
  }
  else {
    local_c8 = *(undefined8 *)(lVar11 + 0x220);
    local_c0 = *(float *)(lVar11 + 0x228);
  }
  fVar16 = (float)local_c8 - *param_2;
  fVar17 = (float)((ulonglong)local_c8 >> 0x20) - param_2[1];
  fVar16 = fVar17 * fVar17 + fVar16 * fVar16 + (local_c0 - param_2[2]) * (local_c0 - param_2[2]);
  if (*(char *)(param_1 + 0x398) != '\0') {
    if (*(char *)(param_1 + 0x3a0) == '\0') {
      if (*(char *)(param_1 + 0x37) == '\0') goto LAB_142240b32;
      fVar17 = 0.0;
    }
    else {
      fVar17 = 100.0;
    }
    fVar17 = *(float *)(param_1 + 0x39c) - fVar17;
    fVar17 = fVar17 * fVar17;
    bVar6 = fVar17 < fVar16;
    if ((bool)*(char *)(param_1 + 0x3a0) != bVar6) {
      *(bool *)(param_1 + 0x3a0) = bVar6;
      AActor::SetActorTickEnabled(fVar17,CONCAT71((int7)((ulonglong)param_2 >> 8),bVar6) ^ 1);
    }
  }
LAB_142240b32:
  plVar1 = (longlong *)(param_1 + 0x348);
  uStack_b4 = 1;
  uVar3 = *(uint *)(param_1 + 0x370);
  puVar2 = (uint *)(param_1 + 0x358);
  local_b8 = 0;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar3 != 0) {
    puVar15 = *(uint **)(param_1 + 0x368);
    if (*(uint **)(param_1 + 0x368) == (uint *)0x0) {
      puVar15 = puVar2;
    }
    uVar4 = *puVar15;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar4 == 0) {
      lVar11 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar9 = local_b8 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar9;
      if (bVar6) goto LAB_142240bec;
      uVar4 = puVar15[lVar11 + 1];
    }
    uStack_b4 = -uVar4 & uVar4;
    iVar9 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_a4 = (iStack_a0 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_a4) {
LAB_142240bec:
      uStack_a4 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x370);
  uVar12 = (ulonglong)uVar4;
  uStack_58 = CONCAT44(uStack_a4,0xffffffff);
  local_78 = CONCAT44(uStack_9c,iStack_a0);
  uStack_68 = CONCAT44(uStack_b4,local_b8);
  uVar14 = uVar4 & 0xffffffe0;
  iStack_90 = local_b8;
  uStack_8c = uStack_b4;
  uStack_80 = 0xffffffff;
  uStack_7c = uStack_a4;
  local_70 = plVar1;
  puStack_60 = puVar2;
  uStack_50 = local_78;
  local_88 = puVar2;
  uStack_a4 = uVar4;
  if (uVar4 != uVar3) {
    puVar15 = *(uint **)(param_1 + 0x368);
    if (*(uint **)(param_1 + 0x368) == (uint *)0x0) {
      puVar15 = puVar2;
    }
    uVar10 = puVar15[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar9 = (int)uVar4 >> 5;
    while (uVar12 = (ulonglong)uVar10, uVar10 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_142240cb2;
      uVar10 = puVar15[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar9 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_a4 = (uVar14 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_a4) {
LAB_142240cb2:
      uStack_a4 = uVar3;
    }
  }
  do {
    if ((uStack_7c == uStack_a4) && (local_88 == puVar2)) {
      return;
    }
    plVar5 = *(longlong **)(*plVar1 + (longlong)(int)uStack_7c * 0x10);
    if (plVar5 != (longlong *)0x0) {
      if ((char)plVar5[0x14] == '\0') {
        cVar7 = UActorComponent::IsComponentTickEnabled(plVar5);
        bVar6 = false;
        if (cVar7 != '\0') goto LAB_142240d04;
      }
      else {
LAB_142240d04:
        bVar6 = true;
      }
      if (*(char *)((longlong)plVar5 + 0x99) == '\0') {
        if (bVar6) {
          if ((char)plVar5[0x14] == '\0') {
            fVar17 = 0.0;
          }
          else {
            fVar17 = 100.0;
          }
          fVar17 = *(float *)((longlong)plVar5 + 0x9c) - fVar17;
          bVar6 = fVar17 * fVar17 < fVar16;
          uVar13 = (undefined7)(uVar12 >> 8);
          uVar12 = CONCAT71(uVar13,bVar6);
          if ((bool)(char)plVar5[0x14] != bVar6) {
            *(bool *)(plVar5 + 0x14) = bVar6;
            uVar12 = CONCAT71(uVar13,bVar6) ^ 1;
            goto LAB_142240d78;
          }
        }
      }
      else if (bVar6) {
        cVar7 = *(char *)(param_1 + 0x37);
        cVar8 = UActorComponent::IsComponentTickEnabled(plVar5);
        if ((bool)cVar8 != (cVar7 != '\0')) {
          uVar12 = (ulonglong)(cVar7 != '\0');
          *(bool *)(plVar5 + 0x14) = cVar7 == '\0';
LAB_142240d78:
          (**(code **)(*plVar5 + 0x358))(plVar5,uVar12);
        }
      }
    }
    uStack_80 = uStack_80 & ~uStack_8c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
  } while( true );
}



// FUNCTION 142240df0 FUN_142240df0 body=241 status=ok
// SIG undefined FUN_142240df0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142240df0(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined1 auStack_118 [32];
  longlong local_f8 [24];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar1 = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140a4ca80(param_1,local_f8,0);
  plVar3 = local_f8;
  if (local_38 != (longlong *)0x0) {
    plVar3 = local_38;
  }
  uVar2 = (longlong)(int)local_30 & 0x1fffffffffffffff;
  if (plVar3 + (int)local_30 < plVar3) {
    uVar2 = uVar1;
  }
  if (uVar2 != 0) {
    do {
      if (((*(byte *)(*plVar3 + 0xb8) & 1) != 0) &&
         ((param_2 == '\0' || ((*(byte *)(*plVar3 + 0xb9) & 8) != 0)))) {
        FUN_142359580();
      }
      plVar3 = plVar3 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 != uVar2);
  }
  (**(code **)(*param_1 + 0x4e0))(param_1);
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142240ef0 FUN_142240ef0 body=580 status=ok
// SIG undefined FUN_142240ef0(void)

void FUN_142240ef0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  longlong *plVar11;
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
  
  plVar2 = (longlong *)(param_1 + 0x300);
  *(undefined4 *)(param_1 + 0x308) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x30c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2,0);
  }
  plVar11 = (longlong *)(param_1 + 0x2b0);
  uStack_84 = 1;
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar9 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar4 = *puVar9;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar6 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar6;
      if (bVar5) goto LAB_142240fdc;
      uVar4 = puVar9[lVar8 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (iStack_70 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142240fdc:
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
  local_40 = plVar11;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar9 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar7 = puVar9[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1422410a1;
      uVar7 = puVar9[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar10 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1422410a1:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    lVar8 = *(longlong *)(*plVar11 + (longlong)(int)uStack_4c * 0x10);
    if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0xb8) & 8) != 0)) {
      iVar6 = *(int *)(param_1 + 0x308);
      *(int *)(param_1 + 0x308) = iVar6 + 1;
      if (*(int *)(param_1 + 0x30c) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar6);
      }
      *(longlong *)(*plVar2 + (longlong)iVar6 * 8) = lVar8;
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 142241140 FUN_142241140 body=32 status=ok
// SIG undefined FUN_142241140(void)

void FUN_142241140(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142241158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x488))(plVar1,0,param_2,0);
    return;
  }
  return;
}



// FUNCTION 142241160 UpdateRVO body=96 status=ok
// SIG undefined UpdateRVO(void)

void UAvoidanceManager::UpdateRVO(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 local_48 [64];
  
  if (param_2 != 0) {
    uVar1 = URVOAvoidanceInterface::GetPrivateStaticClass();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    if (plVar3 != (longlong *)0x0) {
      FNavAvoidanceData::FNavAvoidanceData(local_48,param_1,plVar3);
      uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
      UpdateRVO_Internal(param_1,uVar2,local_48);
    }
  }
  return;
}



// FUNCTION 1422411c0 UpdateRVO_Internal body=237 status=ok
// SIG undefined UpdateRVO_Internal(void)

void UAvoidanceManager::UpdateRVO_Internal(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int *local_18;
  undefined8 *local_10;
  
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar4 = *(longlong *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x98) == 0) {
      lVar4 = param_1 + 0x90;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0xa0) - 1U & (longlong)param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x58);
      do {
        puVar5 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x48);
        if (*(int *)(lVar4 + (longlong)iVar3 * 0x48) == param_2) {
          if (iVar3 != -1) goto LAB_142241233;
          break;
        }
        iVar3 = *(int *)(puVar5 + 8);
      } while (iVar3 != -1);
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_142241233:
  puVar6 = (undefined8 *)((longlong)puVar5 + 4);
  if (puVar5 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  if (puVar6 == (undefined8 *)0x0) {
    local_18 = local_res10;
    local_res10[0] = param_2;
    local_10 = param_3;
    FUN_14221e8d0((longlong *)(param_1 + 0x58),local_res8,&local_18,0);
    return;
  }
  uVar2 = param_3[1];
  uVar1 = *(undefined4 *)(puVar6 + 5);
  *puVar6 = *param_3;
  puVar6[1] = uVar2;
  uVar2 = param_3[3];
  puVar6[2] = param_3[2];
  puVar6[3] = uVar2;
  uVar2 = param_3[5];
  puVar6[4] = param_3[4];
  puVar6[5] = uVar2;
  puVar6[6] = param_3[6];
  *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(param_3 + 7);
  *(undefined4 *)(puVar6 + 5) = uVar1;
  return;
}



// FUNCTION 1422412b0 FUN_1422412b0 body=50 status=ok
// SIG undefined FUN_1422412b0(void)

void FUN_1422412b0(longlong param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  if ((*(byte *)(param_2 + 0xb8) & 8) != 0) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>();
    return;
  }
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x300,local_res10);
  return;
}



// FUNCTION 1422412f0 UpdateStoppingSources body=613 status=ok
// SIG undefined UpdateStoppingSources(void)

bool FActiveSound::UpdateStoppingSources(longlong param_1,undefined4 param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  bool bVar10;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  if ((*(byte *)(param_1 + 0x9b) & 0x10) == 0) {
    return true;
  }
  *(byte *)(param_1 + 0x9b) = *(byte *)(param_1 + 0x9b) & 0xef;
  plVar1 = (longlong *)(param_1 + 0x468);
  iVar2 = *(int *)(param_1 + 0x490);
  puStack_48 = (uint *)(param_1 + 0x478);
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 0x488);
    if (*(uint **)(param_1 + 0x488) == (uint *)0x0) {
      puVar9 = puStack_48;
    }
    uVar7 = *puVar9;
    local_98 = 0;
    uStack_80 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)(int)local_98;
      uStack_80 = uStack_80 + 0x20;
      uVar7 = local_98 + 1;
      bVar10 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98 = uVar7;
      if (bVar10) goto LAB_1422413ef;
      uVar7 = puVar9[lVar8 + 1];
    }
    uStack_94 = -uVar7 & uVar7;
    iVar5 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_88._4_4_ = (uStack_80 - iVar5) + 0x1f;
    if (iVar2 < local_88._4_4_) {
LAB_1422413ef:
      local_88._4_4_ = iVar2;
    }
  }
  auStack_40._4_4_ = local_88._4_4_;
  auStack_40._0_4_ = 0xffffffff;
  auStack_40._8_4_ = uStack_80;
  auStack_40._12_4_ = iStack_7c;
  uStack_50 = local_98;
  uStack_4c = uStack_94;
  local_60 = 0;
  local_30._0_4_ = SUB84(plVar1,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  uStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = auStack_40._8_8_;
  local_78._12_4_ = local_30._4_4_;
  bVar10 = local_88._4_4_ < *(int *)(param_1 + 0x490);
  local_68 = plVar1;
  local_58 = plVar1;
  local_30 = plVar1;
  local_88 = puStack_48;
  if (bVar10) {
    do {
      lVar8 = *plVar1 + (longlong)iStack_7c * 0x18;
      if (*(longlong *)(*plVar1 + 8 + (longlong)iStack_7c * 0x18) != 0) {
        plVar6 = (longlong *)FAudioDevice::GetSoundSource(*(undefined8 *)(param_1 + 0x40));
        if (plVar6 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar6 + 0x50))(plVar6);
          if ((cVar4 == '\0') && (param_3 == '\0')) {
            *(undefined4 *)(plVar6 + 8) = param_2;
            *(undefined4 *)((longlong)plVar6 + 0x44) = param_2;
            *(byte *)(param_1 + 0x9b) = *(byte *)(param_1 + 0x9b) | 0x10;
            goto LAB_1422414d1;
          }
          (**(code **)(*plVar6 + 0x40))(plVar6);
        }
        lVar3 = *(longlong *)(lVar8 + 8);
        if (lVar3 != 0) {
          FUN_1422216b0(lVar3,1);
        }
        *(undefined8 *)(lVar8 + 8) = 0;
      }
LAB_1422414d1:
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  bVar10 = (*(byte *)(param_1 + 0x9b) & 0x10) == 0;
  if (bVar10) {
    TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
    ::Reset(plVar1);
  }
  return bVar10;
}



// FUNCTION 142241560 FUN_142241560 body=5705 status=ok
// SIG undefined FUN_142241560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142241560(longlong param_1,longlong *param_2,float param_3)

{
  undefined1 auVar1 [16];
  byte bVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  longlong *plVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 *puVar21;
  ulonglong uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar33 [16];
  float fVar40;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
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
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auStack_358 [32];
  longlong *local_338;
  undefined8 *local_330;
  int local_328;
  undefined1 local_320;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined8 local_308;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  undefined8 local_2d8;
  float fStack_2d0;
  float fStack_2cc;
  undefined4 local_2c8;
  undefined8 local_2b8;
  float fStack_2b0;
  float fStack_2ac;
  undefined8 local_2a8;
  float fStack_2a0;
  float fStack_29c;
  int local_298;
  undefined4 uStack_294;
  longlong local_288;
  undefined8 local_280;
  ulonglong local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  float local_224;
  float local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  float local_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  ulonglong local_1f0;
  undefined4 *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8 [2];
  undefined1 local_1b8 [4];
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined1 local_1a0 [120];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  uint local_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  *(byte *)(param_1 + 0x9b) = *(byte *)(param_1 + 0x9b) & 0xf7;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
    return;
  }
  cVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x278))();
  if (cVar8 == '\0') {
    return;
  }
  plVar18 = (longlong *)(*(longlong *)(param_1 + 0x40) + 0x128);
  uVar22 = 0;
  local_328 = 0;
  local_2b8 = plVar18;
  if (1 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x130)) {
    local_328 = FAudioDevice::FindClosestListenerIndex(param_1 + 0x130,plVar18);
  }
  *(longlong *)(param_1 + 0x528) = (longlong)local_328 * 0xb0 + *plVar18;
  cVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x288))();
  if ((((cVar8 == '\0') &&
       (((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x368) & 4) == 0 ||
        ((cVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x280))(), cVar8 == '\0' &&
         ((*(byte *)(param_1 + 0x99) & 0xc) != 0xc)))))) &&
      (((*(byte *)(param_1 + 0x98) & 4) == 0 ||
       ((*(float *)(param_1 + 0x338) == 1.0 && (*(float *)(param_1 + 0x33c) == 1.0)))))) &&
     ((lVar12 = FAudioDevice::GetGlobalFocusSettings(*(undefined8 *)(param_1 + 0x40)),
      *(float *)(lVar12 + 8) == 1.0 && (*(float *)(lVar12 + 0xc) == 1.0)))) {
    fVar25 = *(float *)(param_1 + 0x128);
    fVar43 = *(float *)(param_1 + 0x118);
    cVar8 = USoundBase::IsVirtualizeWhenSilent(*(undefined8 *)(param_1 + 0x10));
    if (cVar8 == '\0') {
      lVar12 = *(longlong *)(param_1 + 0x528);
      local_318 = *(float *)(lVar12 + 0x10);
      fStack_314 = *(float *)(lVar12 + 0x14);
      fStack_310 = *(float *)(lVar12 + 0x18);
      cVar8 = FUN_1422d1a70(*(undefined8 *)(param_1 + 0x40),&local_318,fVar25 * fVar43);
      if (cVar8 == '\0') {
        return;
      }
    }
  }
  local_248 = (float)((uint)_DAT_146aee960 & _DAT_146aee970);
  fStack_244 = (float)((uint)fRam0000000146aee964 & uRam0000000146aee974);
  fStack_240 = (float)((uint)fRam0000000146aee968 & uRam0000000146aee978);
  fStack_23c = (float)((uint)fRam0000000146aee96c & uRam0000000146aee97c);
  local_268 = 0;
  uStack_260 = (ulonglong)(uint)fRam0000000146aee96c << 0x20;
  local_238 = 0;
  uStack_230 = 0x3f80000000000000;
  local_208 = 0xbf800000;
  uStack_200 = 0;
  fVar67 = 0.0;
  local_1a4 = 0x3e4ccccd;
  local_288 = 0;
  local_280 = 0;
  local_278 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_228 = 0x3f800000;
  local_224 = 1.0;
  local_220 = 1.0;
  local_21c = 10;
  local_218 = 100;
  local_214 = 0x3f800000;
  local_20c = 1.0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = (undefined4 *)0x0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8[0] = 0;
  local_1c8[1] = 0;
  local_1b8[0] = 0;
  local_1b4 = 0;
  local_1ac = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(local_1a0,0);
  fVar25 = *(float *)(param_1 + 0xb4);
  local_ec = local_ec & 0xffffff80;
  local_128 = 0;
  local_120 = 0;
  local_108 = 0;
  local_100 = 0x469c4000;
  local_fc = 0x469c4000;
  local_f4 = 0x469c4000;
  local_f0 = 0x469c4000;
  fVar43 = param_3;
  if (0.5 <= param_3) {
    fVar43 = 0.5;
  }
  local_f8 = 0x41a00000;
  local_258 = *(undefined8 *)(param_1 + 0x140);
  uStack_250 = *(undefined8 *)(param_1 + 0x148);
  local_118 = 0;
  uStack_110 = 0;
  local_268 = *(undefined8 *)(param_1 + 0x130);
  uStack_260 = *(undefined8 *)(param_1 + 0x138);
  local_208 = CONCAT44(local_208._4_4_,*(undefined4 *)(param_1 + 0xb0));
  local_248 = (float)*(undefined8 *)(param_1 + 0x150);
  fStack_244 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x150) >> 0x20);
  fStack_240 = (float)*(undefined8 *)(param_1 + 0x158);
  fStack_23c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x158) >> 0x20);
  fVar24 = *(float *)(param_1 + 0xb8);
  fVar31 = fVar24;
  if (fVar24 <= fVar25) {
    fVar31 = fVar25;
  }
  fVar41 = fVar24;
  if (fVar25 <= fVar24) {
    fVar41 = fVar25;
  }
  if (*(float *)(param_1 + 0xa8) < *(float *)(param_1 + 0xbc)) {
    fVar24 = ((fVar24 - fVar25) * fVar43) /
             (*(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xa8)) + fVar25;
  }
  if ((fVar41 <= fVar24) && (fVar41 = fVar31, fVar24 <= fVar31)) {
    fVar41 = fVar24;
  }
  *(float *)(param_1 + 0xb4) = fVar41;
  if ((*(byte *)(param_1 + 0x9a) & 0x10) == 0) {
    local_220 = *(float *)(*(longlong *)(param_1 + 0x40) + 0xb4) * DAT_1464a97d8;
  }
  fVar25 = (float)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x2a8))();
  local_224 = fVar25 * *(float *)(param_1 + 0xc0) * *(float *)(param_1 + 0xb4) *
              *(float *)(param_1 + 0x104);
  local_210 = *(undefined4 *)(param_1 + 0x110);
  fVar25 = (float)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x2b0))();
  local_20c = local_20c * fVar25 * *(float *)(param_1 + 0xc4);
  auVar33 = ZEXT416((uint)local_20c);
  local_ec = *(byte *)(param_1 + 0x9a) >> 4 & 0xffffff8 | local_ec & 0xfffffff7;
  local_100 = *(undefined4 *)(param_1 + 200);
  uVar13 = *(ulonglong *)(param_1 + 0x58);
  if ((*(ulonglong *)(param_1 + 0x58) == 0) &&
     (uVar13 = uVar22, *(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    uVar13 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x2d8))();
  }
  local_ec = local_ec ^ (*(byte *)(param_1 + 0x98) >> 1 ^ local_ec) & 0x20;
  uVar14 = *(ulonglong *)(param_1 + 0x60);
  local_278 = uVar13;
  if ((*(ulonglong *)(param_1 + 0x60) == 0) &&
     (uVar14 = uVar22, *(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    uVar14 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x2e0))();
  }
  local_1f0 = uVar14;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    USoundBase::GetSoundSubmixSends(*(longlong *)(param_1 + 0x10),&local_1e8);
    pauVar19 = *(undefined1 (**) [16])(param_1 + 0x68);
    pauVar20 = pauVar19 + *(int *)(param_1 + 0x70);
    uVar13 = local_1e0;
    for (; local_1e0 = uVar13, pauVar19 != pauVar20; pauVar19 = pauVar19 + 1) {
      local_1e0._0_4_ = (int)uVar13;
      lVar12 = (longlong)(int)local_1e0;
      if (local_1e8 != local_1e8 + lVar12 * 4) {
        puVar16 = local_1e8;
        do {
          if (*(longlong *)(puVar16 + 2) == *(longlong *)(*pauVar19 + 8)) {
            *puVar16 = *(undefined4 *)*pauVar19;
            goto LAB_142241acb;
          }
          puVar16 = puVar16 + 4;
        } while (puVar16 != local_1e8 + lVar12 * 4);
      }
      local_1e0._0_4_ = (int)local_1e0 + 1;
      local_1e0._4_4_ = (int)(uVar13 >> 0x20);
      if (local_1e0._4_4_ < (int)local_1e0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1e8,uVar13 & 0xffffffff);
      }
      *(undefined1 (*) [16])(local_1e8 + lVar12 * 4) = *pauVar19;
LAB_142241acb:
      uVar13 = local_1e0;
    }
  }
  plVar18 = &local_1d8;
  local_ec = local_ec ^ (*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) >> 2 ^ local_ec) & 1;
  do {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      uVar13 = uVar22 & 0xff;
      USoundBase::GetSoundSourceBusSends(*(longlong *)(param_1 + 0x10),uVar13,plVar18);
      pauVar19 = *(undefined1 (**) [16])(param_1 + 0x78 + uVar13 * 0x10);
      pauVar20 = pauVar19 + *(int *)(param_1 + 0x80 + uVar13 * 0x10);
      for (; pauVar19 != pauVar20; pauVar19 = pauVar19 + 1) {
        puVar17 = (undefined4 *)*plVar18;
        iVar9 = (int)plVar18[1];
        puVar16 = puVar17 + (longlong)iVar9 * 4;
        if (puVar17 != puVar16) {
          do {
            if (*(longlong *)(puVar17 + 2) == *(longlong *)(*pauVar19 + 8)) {
              *puVar17 = *(undefined4 *)*pauVar19;
              goto LAB_142241b94;
            }
            puVar17 = puVar17 + 4;
          } while (puVar17 != puVar16);
        }
        *(int *)(plVar18 + 1) = iVar9 + 1;
        if (*(int *)((longlong)plVar18 + 0xc) < iVar9 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar18,iVar9);
        }
        *(undefined1 (*) [16])(*plVar18 + (longlong)iVar9 * 0x10) = *pauVar19;
LAB_142241b94:
      }
    }
    uVar23 = (int)uVar22 + 1;
    uVar22 = (ulonglong)uVar23;
    plVar18 = plVar18 + 2;
  } while ((int)uVar23 < 2);
  local_108 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x80);
  local_21c = *(undefined4 *)(param_1 + 0x460);
  local_218 = *(undefined4 *)(param_1 + 0x464);
  if ((*(byte *)(param_1 + 0x9a) & 0x40) != 0) {
    FActiveSound::HandleInteriorVolumes(param_1,*(undefined8 *)(param_1 + 0x528),&local_288);
  }
  if (0.0 < param_3) {
    param_3 = 1.0 / param_3;
    local_238 = CONCAT44((local_258._4_4_ - *(float *)(param_1 + 0x16c)) * param_3,
                         ((float)local_258 - *(float *)(param_1 + 0x168)) * param_3);
    fStack_310 = (float)uStack_250;
    auVar33._4_4_ = local_258._4_4_;
    auVar33._0_4_ = local_258._4_4_;
    auVar33._8_4_ = local_258._4_4_;
    auVar33._12_4_ = local_258._4_4_;
    uStack_230 = CONCAT44(uStack_230._4_4_,
                          ((float)uStack_250 - *(float *)(param_1 + 0x170)) * param_3);
    *(float *)(param_1 + 0x168) = (float)local_258;
    *(float *)(param_1 + 0x16c) = local_258._4_4_;
    *(float *)(param_1 + 0x170) = (float)uStack_250;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeea88) {
    _Init_thread_header(&DAT_146aeea88);
    if (DAT_146aeea88 == -1) {
      atexit((_func_5014 *)&LAB_143ea7f80);
      _Init_thread_footer(&DAT_146aeea88);
    }
  }
  uVar22 = 0;
  DAT_146aeea80 = 0;
  fVar25 = (float)local_258;
  fVar43 = local_258._4_4_;
  fVar24 = (float)uStack_250;
  fVar31 = uStack_250._4_4_;
  if ((DAT_146aeea84 < 0) && (DAT_146aeea84 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146aeea78,0);
    fVar25 = (float)local_258;
    fVar43 = local_258._4_4_;
    fVar24 = (float)uStack_250;
    fVar31 = uStack_250._4_4_;
  }
  bVar2 = *(byte *)(param_1 + 0x98);
  *(byte *)(param_1 + 0x98) = bVar2 | 0x20;
  if (((bVar2 & 0x10) == 0) || (*(float *)(param_1 + 0xa8) <= *(float *)(param_1 + 0xbc))) {
    if ((bVar2 & 4) == 0) {
      lVar12 = *(longlong *)(param_1 + 0x40);
      local_1b8[0] = 2;
      local_1a4 = *(undefined4 *)(lVar12 + 0x2dc);
    }
    else {
      lVar12 = FActiveSound::ApplyAttenuation(param_1,&local_288,*(undefined8 *)(param_1 + 0x528),0)
      ;
      fVar25 = (float)local_258;
      fVar43 = local_258._4_4_;
      fVar24 = (float)uStack_250;
      fVar31 = uStack_250._4_4_;
    }
    fVar66 = fRam0000000146aee9f8;
    fVar65 = fRam0000000146aee9f4;
    fVar47 = _DAT_146aee9f0;
    fVar39 = fRam0000000146aee9dc;
    fVar37 = fRam0000000146aee9d8;
    fVar32 = fRam0000000146aee9d4;
    fVar56 = _DAT_146aee9d0;
    fVar45 = fRam0000000146aee968;
    fVar42 = fRam0000000146aee964;
    fVar41 = _DAT_146aee960;
    if (local_328 != 0) {
      pfVar3 = *(float **)(param_1 + 0x528);
      auVar1 = *(undefined1 (*) [16])(pfVar3 + 8);
      fVar44 = auVar1._0_4_;
      fVar46 = auVar1._4_4_;
      fVar48 = auVar1._8_4_;
      fVar49 = auVar1._12_4_;
      pfVar4 = (float *)*local_2b8;
      auVar26._4_4_ = -(uint)(fRam0000000146aeea14 < (float)((uint)fVar46 & uRam0000000146aeea24));
      auVar26._0_4_ = -(uint)(_DAT_146aeea10 < (float)((uint)fVar44 & _DAT_146aeea20));
      auVar26._8_4_ = -(uint)(fRam0000000146aeea18 < (float)((uint)fVar48 & uRam0000000146aeea28));
      auVar26._12_4_ = -(uint)(fRam0000000146aeea1c < (float)((uint)fVar49 & uRam0000000146aeea2c));
      iVar9 = movmskps((int)lVar12,auVar26);
      fVar54 = _DAT_1468b5b70;
      fVar57 = fRam00000001468b5b74;
      fVar59 = fRam00000001468b5b78;
      fVar61 = fRam00000001468b5b7c;
      fVar30 = _DAT_1468b5b90;
      fVar36 = fRam00000001468b5b94;
      fVar38 = fRam00000001468b5b98;
      fVar40 = fRam00000001468b5b9c;
      fVar50 = _DAT_1468b5b80;
      fVar51 = fRam00000001468b5b84;
      fVar52 = fRam00000001468b5b88;
      fVar53 = fRam00000001468b5b8c;
      if (iVar9 != 0) {
        fVar54 = *pfVar3 * _DAT_146aeea00;
        fVar57 = pfVar3[1] * fRam0000000146aeea04;
        fVar59 = pfVar3[2] * fRam0000000146aeea08;
        fVar61 = pfVar3[3] * fRam0000000146aeea0c;
        auVar33 = rcpps(auVar33,auVar1);
        fVar30 = auVar33._0_4_;
        fVar36 = auVar33._4_4_;
        fVar38 = auVar33._8_4_;
        fVar40 = auVar33._12_4_;
        fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar44;
        fVar36 = (fVar36 + fVar36) - fVar36 * fVar36 * fVar46;
        fVar38 = (fVar38 + fVar38) - fVar38 * fVar38 * fVar48;
        fVar40 = (fVar40 + fVar40) - fVar40 * fVar40 * fVar49;
        fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar44;
        fVar36 = (fVar36 + fVar36) - fVar36 * fVar36 * fVar46;
        fVar38 = (fVar38 + fVar38) - fVar38 * fVar38 * fVar48;
        fVar40 = (fVar40 + fVar40) - fVar40 * fVar40 * fVar49;
        fVar30 = (float)((-(uint)((float)((uint)fVar44 & _DAT_146aeea20) <= _DAT_146aeea10) &
                          (uint)fVar30 ^ (uint)fVar30) & _DAT_146aee970);
        fVar36 = (float)((-(uint)((float)((uint)fVar46 & uRam0000000146aeea24) <=
                                 fRam0000000146aeea14) & (uint)fVar36 ^ (uint)fVar36) &
                        uRam0000000146aee974);
        fVar38 = (float)((-(uint)((float)((uint)fVar48 & uRam0000000146aeea28) <=
                                 fRam0000000146aeea18) & (uint)fVar38 ^ (uint)fVar38) &
                        uRam0000000146aee978);
        fVar40 = (float)((-(uint)((float)((uint)fVar49 & uRam0000000146aeea2c) <=
                                 fRam0000000146aeea1c) & (uint)fVar40 ^ (uint)fVar40) &
                        uRam0000000146aee97c);
        fVar50 = pfVar3[4] * fVar30;
        fVar51 = pfVar3[5] * fVar36;
        fVar52 = pfVar3[6] * fVar38;
        fVar53 = pfVar3[7] * fVar40;
        fVar44 = fVar52 * fVar57 - fVar51 * fVar59;
        fVar46 = fVar50 * fVar59 - fVar52 * fVar54;
        fVar48 = fVar51 * fVar54 - fVar50 * fVar57;
        fVar49 = fVar53 * fVar61 - fVar53 * fVar61;
        fVar44 = fVar44 + fVar44;
        fVar46 = fVar46 + fVar46;
        fVar48 = fVar48 + fVar48;
        fVar49 = fVar49 + fVar49;
        fVar50 = (float)((uint)(0.0 - ((fVar48 * fVar57 - fVar46 * fVar59) +
                                      fVar61 * fVar44 + fVar50)) & _DAT_146aee970);
        fVar51 = (float)((uint)(0.0 - ((fVar44 * fVar59 - fVar48 * fVar54) +
                                      fVar61 * fVar46 + fVar51)) & uRam0000000146aee974);
        fVar52 = (float)((uint)(0.0 - ((fVar46 * fVar54 - fVar44 * fVar57) +
                                      fVar61 * fVar48 + fVar52)) & uRam0000000146aee978);
        fVar53 = (float)((uint)(0.0 - ((fVar49 * fVar61 - fVar49 * fVar61) +
                                      fVar61 * fVar49 + fVar53)) & uRam0000000146aee97c);
      }
      auVar7._4_4_ = fStack_244;
      auVar7._0_4_ = local_248;
      auVar7._8_4_ = fStack_240;
      auVar7._12_4_ = fStack_23c;
      auVar1._4_4_ = fVar36;
      auVar1._0_4_ = fVar30;
      auVar1._8_4_ = fVar38;
      auVar1._12_4_ = fVar40;
      auVar33 = minps(auVar7,auVar1);
      auVar27._4_4_ = -(uint)(auVar33._4_4_ < fRam0000000146aee9f4);
      auVar27._0_4_ = -(uint)(auVar33._0_4_ < _DAT_146aee9f0);
      auVar27._8_4_ = -(uint)(auVar33._8_4_ < fRam0000000146aee9f8);
      auVar27._12_4_ = -(uint)(auVar33._12_4_ < fRam0000000146aee9fc);
      iVar9 = movmskps(iVar9,auVar27);
      local_2b8 = (longlong *)CONCAT44(fRam0000000146aee9f4,_DAT_146aee9f0);
      fStack_2b0 = fRam0000000146aee9f8;
      fStack_2ac = fRam0000000146aee9fc;
      if (iVar9 == 0) {
        fVar25 = fVar30 * fVar25;
        fVar43 = fVar36 * fVar43;
        fVar24 = fVar38 * fVar24;
        fVar31 = fVar40 * fVar31;
        fVar30 = fVar30 * local_248;
        fVar36 = fVar36 * fStack_244;
        fVar38 = fVar38 * fStack_240;
        fVar40 = fVar40 * fStack_23c;
        fVar65 = fVar54 * uStack_260._4_4_ * _DAT_146aee9b0 + (float)local_268 * fVar61 +
                 fVar57 * (float)uStack_260 * _DAT_146aee9a0 +
                 fVar59 * local_268._4_4_ * _DAT_146aee990;
        fVar66 = fVar54 * (float)uStack_260 * fRam0000000146aee9b4 + local_268._4_4_ * fVar61 +
                 fVar57 * uStack_260._4_4_ * fRam0000000146aee9a4 +
                 fVar59 * (float)local_268 * fRam0000000146aee994;
        fVar44 = fVar54 * local_268._4_4_ * fRam0000000146aee9b8 + (float)uStack_260 * fVar61 +
                 fVar57 * (float)local_268 * fRam0000000146aee9a8 +
                 fVar59 * uStack_260._4_4_ * fRam0000000146aee998;
        fVar46 = fVar54 * (float)local_268 * fRam0000000146aee9bc + uStack_260._4_4_ * fVar61 +
                 fVar57 * local_268._4_4_ * fRam0000000146aee9ac +
                 fVar59 * (float)uStack_260 * fRam0000000146aee99c;
        fVar41 = fVar24 * fVar57 - fVar43 * fVar59;
        fVar42 = fVar25 * fVar59 - fVar24 * fVar54;
        fVar45 = fVar43 * fVar54 - fVar25 * fVar57;
        fVar47 = fVar31 * fVar61 - fVar31 * fVar61;
        fVar41 = fVar41 + fVar41;
        fVar42 = fVar42 + fVar42;
        fVar45 = fVar45 + fVar45;
        fVar47 = fVar47 + fVar47;
        fVar50 = (fVar45 * fVar57 - fVar42 * fVar59) + fVar41 * fVar61 + fVar25 + fVar50;
        fVar51 = (fVar41 * fVar59 - fVar45 * fVar54) + fVar42 * fVar61 + fVar43 + fVar51;
        fVar52 = (fVar42 * fVar54 - fVar41 * fVar57) + fVar45 * fVar61 + fVar24 + fVar52;
        fVar53 = (fVar47 * fVar61 - fVar47 * fVar61) + fVar47 * fVar61 + fVar31 + fVar53;
        uVar10 = 0;
        local_318 = fVar30;
        fStack_314 = fVar36;
        fStack_310 = fVar38;
        fStack_30c = fVar40;
      }
      else {
        fVar44 = fVar57 + fVar57;
        fVar48 = fVar59 + fVar59;
        local_318 = fVar30 * local_248;
        fStack_314 = fVar36 * fStack_244;
        fStack_310 = fVar38 * fStack_240;
        fStack_30c = fVar40 * fStack_23c;
        fVar49 = (fVar54 + fVar54) * fVar54;
        fVar53 = fVar61 * (fVar54 + fVar54);
        fVar62 = (fVar61 * fVar48 + fVar54 * fVar44) * fVar30;
        fVar63 = (fVar53 + fVar57 * fVar48) * fVar36;
        fVar64 = (fVar61 * fVar44 + fVar54 * fVar48) * fVar38;
        fVar31 = (float)((uint)((_DAT_146aee960 - (fVar48 * fVar59 + fVar44 * fVar57)) * fVar30) &
                        _DAT_146aee970);
        fVar46 = (float)((uint)((fRam0000000146aee964 - (fVar48 * fVar59 + fVar49)) * fVar36) &
                        uRam0000000146aee974);
        fVar59 = (float)((uint)((fRam0000000146aee968 - (fVar44 * fVar57 + fVar49)) * fVar38) &
                        uRam0000000146aee978);
        fVar40 = (float)((uint)((fRam0000000146aee96c - (fVar49 + fVar49)) * fVar40) &
                        uRam0000000146aee97c);
        fVar36 = fVar36 * (fVar54 * fVar44 - fVar61 * fVar48);
        fVar38 = fVar38 * (fVar57 * fVar48 - fVar53);
        fVar30 = fVar30 * (fVar54 * fVar48 - fVar61 * fVar44);
        fVar48 = local_268._4_4_ + local_268._4_4_;
        fVar49 = (float)uStack_260 + (float)uStack_260;
        fVar54 = ((float)local_268 + (float)local_268) * (float)local_268;
        fVar44 = uStack_260._4_4_ * ((float)local_268 + (float)local_268);
        fVar55 = (uStack_260._4_4_ * fVar49 + (float)local_268 * fVar48) * local_248;
        fVar58 = (fVar44 + local_268._4_4_ * fVar49) * fStack_244;
        fVar60 = (uStack_260._4_4_ * fVar48 + (float)local_268 * fVar49) * fStack_240;
        fVar57 = fStack_244 * ((float)local_268 * fVar48 - uStack_260._4_4_ * fVar49);
        fVar61 = fStack_240 * (local_268._4_4_ * fVar49 - fVar44);
        fVar53 = local_248 * ((float)local_268 * fVar49 - uStack_260._4_4_ * fVar48);
        fVar44 = (float)((uint)((_DAT_146aee960 -
                                (fVar49 * (float)uStack_260 + fVar48 * local_268._4_4_)) * local_248
                               ) & _DAT_146aee970);
        fVar49 = (float)((uint)((fRam0000000146aee964 - (fVar49 * (float)uStack_260 + fVar54)) *
                               fStack_244) & uRam0000000146aee974);
        fVar48 = (float)((uint)((fRam0000000146aee968 - (fVar48 * local_268._4_4_ + fVar54)) *
                               fStack_240) & uRam0000000146aee978);
        fVar54 = (float)((uint)((fRam0000000146aee96c - (fVar54 + fVar54)) * fStack_23c) &
                        uRam0000000146aee97c);
        local_308._0_4_ = fVar55 * fVar36 + fVar44 * fVar31 + fVar53 * fVar64 + fVar54 * fVar50;
        local_308._4_4_ = fVar55 * fVar46 + fVar44 * fVar62 + fVar53 * fVar38 + fVar54 * fVar51;
        fStack_300 = fVar55 * fVar63 + fVar44 * fVar30 + fVar53 * fVar59 + fVar54 * fVar52;
        fStack_2fc = fVar55 * fVar40 + fVar44 * fVar40 + fVar53 * fVar40 +
                     fVar54 * fRam0000000146aee96c;
        local_2f8 = fVar49 * fVar36 + fVar57 * fVar31 + fVar58 * fVar64 + fVar54 * fVar50;
        fStack_2f4 = fVar49 * fVar46 + fVar57 * fVar62 + fVar58 * fVar38 + fVar54 * fVar51;
        fStack_2f0 = fVar49 * fVar63 + fVar57 * fVar30 + fVar58 * fVar59 + fVar54 * fVar52;
        fStack_2ec = fVar49 * fVar40 + fVar57 * fVar40 + fVar58 * fVar40 +
                     fVar54 * fRam0000000146aee96c;
        local_2e8 = fVar61 * fVar36 + fVar60 * fVar31 + fVar48 * fVar64 + fVar54 * fVar50;
        fStack_2e4 = fVar61 * fVar46 + fVar60 * fVar62 + fVar48 * fVar38 + fVar54 * fVar51;
        fStack_2e0 = fVar61 * fVar63 + fVar60 * fVar30 + fVar48 * fVar59 + fVar54 * fVar52;
        fStack_2dc = fVar61 * fVar40 + fVar60 * fVar40 + fVar48 * fVar40 +
                     fVar54 * fRam0000000146aee96c;
        fStack_2d0 = fVar43 * fVar63 + fVar25 * fVar30 + fVar24 * fVar59 +
                     fRam0000000146aee96c * fVar52;
        fStack_2cc = fVar43 * fVar40 + fVar25 * fVar40 + fVar24 * fVar40 +
                     fRam0000000146aee96c * fRam0000000146aee96c;
        local_2d8 = CONCAT44(fVar43 * fVar46 + fVar25 * fVar62 + fVar24 * fVar38 +
                             fRam0000000146aee96c * fVar51,
                             fVar43 * fVar36 + fVar25 * fVar31 + fVar24 * fVar64 +
                             fRam0000000146aee96c * fVar50);
        FMatrix::RemoveScaling(&local_308);
        fVar40 = fStack_30c;
        fVar38 = fStack_310;
        fVar36 = fStack_314;
        fVar30 = local_318;
        fVar25 = (float)(-(uint)(fVar47 <= local_318) & (_DAT_146aee9e0 ^ (uint)fVar41) ^
                        _DAT_146aee9e0);
        fVar43 = (float)(-(uint)(fVar65 <= fStack_314) & (uRam0000000146aee9e4 ^ (uint)fVar42) ^
                        uRam0000000146aee9e4);
        fVar24 = (float)(-(uint)(fVar66 <= fStack_310) & (uRam0000000146aee9e8 ^ (uint)fVar45) ^
                        uRam0000000146aee9e8);
        fStack_300 = fStack_300 * fVar25;
        fStack_2f0 = fStack_2f0 * fVar43;
        local_308 = (undefined1 *)CONCAT44(local_308._4_4_ * fVar25,(float)local_308 * fVar25);
        fStack_2f4 = fStack_2f4 * fVar43;
        local_2f8 = local_2f8 * fVar43;
        fStack_2e0 = fStack_2e0 * fVar24;
        local_2e8 = local_2e8 * fVar24;
        fStack_2e4 = fStack_2e4 * fVar24;
        uVar10 = FQuat::FQuat(&local_2b8,&local_308);
        fVar25 = (float)local_2b8;
        fVar43 = local_2b8._4_4_;
        local_328 = 0x322bcc77;
        auVar34._0_4_ = (float)local_2b8 * (float)local_2b8 + fStack_2b0 * fStack_2b0;
        auVar34._4_4_ = local_2b8._4_4_ * local_2b8._4_4_ + fStack_2ac * fStack_2ac;
        auVar34._8_4_ = fStack_2b0 * fStack_2b0 + (float)local_2b8 * (float)local_2b8;
        auVar34._12_4_ = fStack_2ac * fStack_2ac + local_2b8._4_4_ * local_2b8._4_4_;
        fVar45 = auVar34._4_4_ + auVar34._0_4_;
        fVar47 = auVar34._8_4_ + auVar34._4_4_;
        fVar44 = auVar34._12_4_ + auVar34._8_4_;
        fVar46 = auVar34._0_4_ + auVar34._12_4_;
        auVar5._4_4_ = fVar47;
        auVar5._0_4_ = fVar45;
        auVar5._8_4_ = fVar44;
        auVar5._12_4_ = fVar46;
        auVar33 = rsqrtps(auVar34,auVar5);
        fVar24 = auVar33._0_4_;
        fVar31 = auVar33._4_4_;
        fVar41 = auVar33._8_4_;
        fVar42 = auVar33._12_4_;
        fVar24 = (fVar56 - fVar24 * fVar24 * fVar45 * fVar56) * fVar24 + fVar24;
        fVar31 = (fVar32 - fVar31 * fVar31 * fVar47 * fVar32) * fVar31 + fVar31;
        fVar41 = (fVar37 - fVar41 * fVar41 * fVar44 * fVar37) * fVar41 + fVar41;
        fVar42 = (fVar39 - fVar42 * fVar42 * fVar46 * fVar39) * fVar42 + fVar42;
        local_2b8 = (longlong *)CONCAT44(fRam0000000146aee9f4,_DAT_146aee9f0);
        fVar65 = (float)(((uint)(((fVar56 - fVar24 * fVar24 * fVar45 * fVar56) * fVar24 + fVar24) *
                                fVar25) ^ _DAT_146aee9c0) & -(uint)(1e-08 <= fVar45) ^
                        _DAT_146aee9c0);
        fVar66 = (float)(((uint)(((fVar32 - fVar31 * fVar31 * fVar47 * fVar32) * fVar31 + fVar31) *
                                fVar43) ^ uRam0000000146aee9c4) & -(uint)(1e-08 <= fVar47) ^
                        uRam0000000146aee9c4);
        fVar44 = (float)(((uint)(((fVar37 - fVar41 * fVar41 * fVar44 * fVar37) * fVar41 + fVar41) *
                                fStack_2b0) ^ uRam0000000146aee9c8) & -(uint)(1e-08 <= fVar44) ^
                        uRam0000000146aee9c8);
        fVar46 = (float)(((uint)(((fVar39 - fVar42 * fVar42 * fVar46 * fVar39) * fVar42 + fVar42) *
                                fStack_2ac) ^ uRam0000000146aee9cc) & -(uint)(1e-08 <= fVar46) ^
                        uRam0000000146aee9cc);
        fVar53 = 0.0;
        fVar50 = (float)local_2d8;
        fVar51 = local_2d8._4_4_;
        fVar52 = fStack_2d0;
      }
      fVar54 = fRam0000000146aee968;
      fVar49 = fRam0000000146aee964;
      fVar48 = _DAT_146aee960;
      auVar33 = *(undefined1 (*) [16])(pfVar4 + 8);
      fVar25 = auVar33._0_4_;
      fVar43 = auVar33._4_4_;
      fVar24 = auVar33._8_4_;
      fVar31 = auVar33._12_4_;
      auVar28._4_4_ = fVar36;
      auVar28._0_4_ = fVar30;
      auVar28._8_4_ = fVar38;
      auVar28._12_4_ = fVar40;
      fVar41 = *pfVar4;
      fVar42 = pfVar4[1];
      fVar45 = pfVar4[2];
      fVar47 = pfVar4[3];
      auVar33 = minps(auVar28,auVar33);
      auVar29._4_4_ = -(uint)(auVar33._4_4_ < fRam0000000146aee9f4);
      auVar29._0_4_ = -(uint)(auVar33._0_4_ < _DAT_146aee9f0);
      auVar29._8_4_ = -(uint)(auVar33._8_4_ < fRam0000000146aee9f8);
      auVar29._12_4_ = -(uint)(auVar33._12_4_ < fRam0000000146aee9fc);
      iVar9 = movmskps(uVar10,auVar29);
      fStack_2b0 = fRam0000000146aee9f8;
      fStack_2ac = fRam0000000146aee9fc;
      if (iVar9 == 0) {
        fVar50 = fVar25 * fVar50;
        fVar51 = fVar43 * fVar51;
        fVar52 = fVar24 * fVar52;
        fVar53 = fVar31 * fVar53;
        fVar25 = fVar25 * fVar30;
        fVar43 = fVar43 * fVar36;
        fVar24 = fVar24 * fVar38;
        fVar31 = fVar31 * fVar40;
        fVar48 = fVar46 * fVar41 * _DAT_146aee9b0 + fVar47 * fVar65 +
                 fVar44 * fVar42 * _DAT_146aee9a0 + fVar66 * fVar45 * _DAT_146aee990;
        fVar49 = fVar44 * fVar41 * fRam0000000146aee9b4 + fVar47 * fVar66 +
                 fVar46 * fVar42 * fRam0000000146aee9a4 + fVar65 * fVar45 * fRam0000000146aee994;
        fVar30 = fVar66 * fVar41 * fRam0000000146aee9b8 + fVar47 * fVar44 +
                 fVar65 * fVar42 * fRam0000000146aee9a8 + fVar46 * fVar45 * fRam0000000146aee998;
        fVar66 = fVar65 * fVar41 * fRam0000000146aee9bc + fVar47 * fVar46 +
                 fVar66 * fVar42 * fRam0000000146aee9ac + fVar44 * fVar45 * fRam0000000146aee99c;
        fVar32 = fVar52 * fVar42 - fVar51 * fVar45;
        fVar37 = fVar50 * fVar45 - fVar52 * fVar41;
        fVar39 = fVar51 * fVar41 - fVar50 * fVar42;
        fVar65 = fVar53 * fVar47 - fVar53 * fVar47;
        fVar32 = fVar32 + fVar32;
        fVar37 = fVar37 + fVar37;
        fVar39 = fVar39 + fVar39;
        fVar65 = fVar65 + fVar65;
        fVar56 = (fVar39 * fVar42 - fVar37 * fVar45) + fVar47 * fVar32 + fVar50 + pfVar4[4];
        fVar45 = (fVar32 * fVar45 - fVar39 * fVar41) + fVar47 * fVar37 + fVar51 + pfVar4[5];
        fVar41 = (fVar37 * fVar41 - fVar32 * fVar42) + fVar47 * fVar39 + fVar52 + pfVar4[6];
        fVar42 = (fVar65 * fVar47 - fVar65 * fVar47) + fVar47 * fVar65 + fVar53 + pfVar4[7];
      }
      else {
        fVar59 = fVar42 + fVar42;
        fVar61 = fVar45 + fVar45;
        fStack_2a0 = fVar24 * fVar38;
        fStack_29c = fVar31 * fVar40;
        fVar38 = pfVar4[4];
        fVar40 = pfVar4[5];
        fVar57 = pfVar4[6];
        fVar53 = fVar41 * (fVar41 + fVar41);
        local_2a8 = CONCAT44(fVar43 * fVar36,fVar25 * fVar30);
        fVar30 = (fVar41 + fVar41) * fVar47;
        fVar62 = (fVar61 * fVar47 + fVar59 * fVar41) * fVar25;
        fVar63 = (fVar30 + fVar61 * fVar42) * fVar43;
        fVar64 = (fVar59 * fVar47 + fVar61 * fVar41) * fVar24;
        fVar36 = fVar43 * (fVar59 * fVar41 - fVar61 * fVar47);
        fVar55 = fVar24 * (fVar61 * fVar42 - fVar30);
        fVar58 = fVar25 * (fVar61 * fVar41 - fVar59 * fVar47);
        fVar25 = (float)((uint)((_DAT_146aee960 - (fVar45 * fVar61 + fVar42 * fVar59)) * fVar25) &
                        _DAT_146aee970);
        fVar41 = (float)((uint)((fRam0000000146aee964 - (fVar45 * fVar61 + fVar53)) * fVar43) &
                        uRam0000000146aee974);
        fVar42 = (float)((uint)((fRam0000000146aee968 - (fVar42 * fVar59 + fVar53)) * fVar24) &
                        uRam0000000146aee978);
        fVar45 = (float)((uint)((fRam0000000146aee96c - (fVar53 + fVar53)) * fVar31) &
                        uRam0000000146aee97c);
        fVar24 = fVar66 + fVar66;
        fVar31 = fVar44 + fVar44;
        fVar47 = (fVar65 + fVar65) * fVar65;
        fVar43 = fVar46 * (fVar65 + fVar65);
        fVar61 = (fVar46 * fVar31 + fVar65 * fVar24) * local_318;
        fVar53 = (fVar43 + fVar66 * fVar31) * fStack_314;
        fVar60 = (fVar46 * fVar24 + fVar65 * fVar31) * fStack_310;
        fVar30 = fStack_314 * (fVar65 * fVar24 - fVar46 * fVar31);
        fVar59 = fStack_310 * (fVar66 * fVar31 - fVar43);
        fVar65 = local_318 * (fVar65 * fVar31 - fVar46 * fVar24);
        fVar43 = (float)((uint)((_DAT_146aee960 - (fVar31 * fVar44 + fVar24 * fVar66)) * local_318)
                        & _DAT_146aee970);
        fVar31 = (float)((uint)((fRam0000000146aee964 - (fVar31 * fVar44 + fVar47)) * fStack_314) &
                        uRam0000000146aee974);
        fVar24 = (float)((uint)((fRam0000000146aee968 - (fVar24 * fVar66 + fVar47)) * fStack_310) &
                        uRam0000000146aee978);
        fVar47 = (float)((uint)((fRam0000000146aee96c - (fVar47 + fVar47)) * fStack_30c) &
                        uRam0000000146aee97c);
        local_308._0_4_ = fVar61 * fVar36 + fVar43 * fVar25 + fVar65 * fVar64 + fVar47 * fVar38;
        local_308._4_4_ = fVar61 * fVar41 + fVar43 * fVar62 + fVar65 * fVar55 + fVar47 * fVar40;
        fStack_300 = fVar61 * fVar63 + fVar43 * fVar58 + fVar65 * fVar42 + fVar47 * fVar57;
        fStack_2fc = fVar61 * fVar45 + fVar43 * fVar45 + fVar65 * fVar45 +
                     fVar47 * fRam0000000146aee96c;
        local_2f8 = fVar31 * fVar36 + fVar30 * fVar25 + fVar53 * fVar64 + fVar47 * fVar38;
        fStack_2f4 = fVar31 * fVar41 + fVar30 * fVar62 + fVar53 * fVar55 + fVar47 * fVar40;
        fStack_2f0 = fVar31 * fVar63 + fVar30 * fVar58 + fVar53 * fVar42 + fVar47 * fVar57;
        fStack_2ec = fVar31 * fVar45 + fVar30 * fVar45 + fVar53 * fVar45 +
                     fVar47 * fRam0000000146aee96c;
        local_2e8 = fVar59 * fVar36 + fVar60 * fVar25 + fVar24 * fVar64 + fVar47 * fVar38;
        fStack_2e4 = fVar59 * fVar41 + fVar60 * fVar62 + fVar24 * fVar55 + fVar47 * fVar40;
        fStack_2e0 = fVar59 * fVar63 + fVar60 * fVar58 + fVar24 * fVar42 + fVar47 * fVar57;
        fStack_2dc = fVar59 * fVar45 + fVar60 * fVar45 + fVar24 * fVar45 +
                     fVar47 * fRam0000000146aee96c;
        fStack_2d0 = fVar51 * fVar63 + fVar50 * fVar58 + fVar52 * fVar42 +
                     fRam0000000146aee96c * fVar57;
        fStack_2cc = fVar51 * fVar45 + fVar50 * fVar45 + fVar52 * fVar45 +
                     fRam0000000146aee96c * fRam0000000146aee96c;
        local_2d8 = CONCAT44(fVar51 * fVar41 + fVar50 * fVar62 + fVar52 * fVar55 +
                             fRam0000000146aee96c * fVar40,
                             fVar51 * fVar36 + fVar50 * fVar25 + fVar52 * fVar64 +
                             fRam0000000146aee96c * fVar38);
        FMatrix::RemoveScaling(&local_308);
        fVar31 = fStack_29c;
        fVar24 = fStack_2a0;
        fVar25 = (float)local_2a8;
        fVar43 = local_2a8._4_4_;
        fVar41 = (float)(-(uint)((float)local_2b8 <= (float)local_2a8) &
                         (_DAT_146aee9e0 ^ (uint)fVar48) ^ _DAT_146aee9e0);
        fVar42 = (float)(-(uint)(local_2b8._4_4_ <= local_2a8._4_4_) &
                         (uRam0000000146aee9e4 ^ (uint)fVar49) ^ uRam0000000146aee9e4);
        fVar45 = (float)(-(uint)(fStack_2b0 <= fStack_2a0) & (uRam0000000146aee9e8 ^ (uint)fVar54) ^
                        uRam0000000146aee9e8);
        fStack_300 = fStack_300 * fVar41;
        fStack_2f0 = fStack_2f0 * fVar42;
        local_308 = (undefined1 *)CONCAT44(local_308._4_4_ * fVar41,(float)local_308 * fVar41);
        fStack_2f4 = fStack_2f4 * fVar42;
        local_2f8 = local_2f8 * fVar42;
        fStack_2e0 = fStack_2e0 * fVar45;
        local_2e8 = local_2e8 * fVar45;
        fStack_2e4 = fStack_2e4 * fVar45;
        FQuat::FQuat(&local_2a8,&local_308);
        local_328 = 0x322bcc77;
        auVar35._0_4_ = (float)local_2a8 * (float)local_2a8 + fStack_2a0 * fStack_2a0;
        auVar35._4_4_ = local_2a8._4_4_ * local_2a8._4_4_ + fStack_29c * fStack_29c;
        auVar35._8_4_ = fStack_2a0 * fStack_2a0 + (float)local_2a8 * (float)local_2a8;
        auVar35._12_4_ = fStack_29c * fStack_29c + local_2a8._4_4_ * local_2a8._4_4_;
        fVar65 = auVar35._4_4_ + auVar35._0_4_;
        fVar66 = auVar35._8_4_ + auVar35._4_4_;
        fVar44 = auVar35._12_4_ + auVar35._8_4_;
        fVar46 = auVar35._0_4_ + auVar35._12_4_;
        auVar6._4_4_ = fVar66;
        auVar6._0_4_ = fVar65;
        auVar6._8_4_ = fVar44;
        auVar6._12_4_ = fVar46;
        auVar33 = rsqrtps(auVar35,auVar6);
        fVar41 = auVar33._0_4_;
        fVar42 = auVar33._4_4_;
        fVar45 = auVar33._8_4_;
        fVar47 = auVar33._12_4_;
        fVar41 = (fVar56 - fVar41 * fVar41 * fVar65 * fVar56) * fVar41 + fVar41;
        fVar42 = (fVar32 - fVar42 * fVar42 * fVar66 * fVar32) * fVar42 + fVar42;
        fVar45 = (fVar37 - fVar45 * fVar45 * fVar44 * fVar37) * fVar45 + fVar45;
        fVar47 = (fVar39 - fVar47 * fVar47 * fVar46 * fVar39) * fVar47 + fVar47;
        fVar48 = (float)(((uint)(((fVar56 - fVar41 * fVar41 * fVar65 * fVar56) * fVar41 + fVar41) *
                                (float)local_2a8) ^ _DAT_146aee9c0) & -(uint)(1e-08 <= fVar65) ^
                        _DAT_146aee9c0);
        fVar49 = (float)(((uint)(((fVar32 - fVar42 * fVar42 * fVar66 * fVar32) * fVar42 + fVar42) *
                                local_2a8._4_4_) ^ uRam0000000146aee9c4) & -(uint)(1e-08 <= fVar66)
                        ^ uRam0000000146aee9c4);
        fVar30 = (float)(((uint)(((fVar37 - fVar45 * fVar45 * fVar44 * fVar37) * fVar45 + fVar45) *
                                fStack_2a0) ^ uRam0000000146aee9c8) & -(uint)(1e-08 <= fVar44) ^
                        uRam0000000146aee9c8);
        fVar66 = (float)(((uint)(((fVar39 - fVar47 * fVar47 * fVar46 * fVar39) * fVar47 + fVar47) *
                                fStack_29c) ^ uRam0000000146aee9cc) & -(uint)(1e-08 <= fVar46) ^
                        uRam0000000146aee9cc);
        fVar42 = 0.0;
        fVar56 = (float)local_2d8;
        fVar45 = local_2d8._4_4_;
        fVar41 = fStack_2d0;
      }
      local_268 = CONCAT44(fVar49,fVar48);
      uStack_260 = CONCAT44(fVar66,fVar30);
      local_258 = CONCAT44(fVar45,fVar56);
      uStack_250 = CONCAT44(fVar42,fVar41);
      local_248 = fVar25;
      fStack_244 = fVar43;
      fStack_240 = fVar24;
      fStack_23c = fVar31;
    }
    local_338 = &local_288;
    local_330 = &DAT_146aeea78;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x2d0))
              (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x40),0,param_1);
    if (local_20c < *(float *)(param_1 + 0xac)) {
      *(float *)(param_1 + 0xac) = local_20c;
    }
  }
  if ((*(byte *)(param_1 + 0x98) & 0x20) != 0) {
    FAudioDevice::StopActiveSound(*(undefined8 *)(param_1 + 0x40),param_1);
    goto LAB_142242a6e;
  }
  if (DAT_146aeea80 < 1) goto LAB_142242a6e;
  if ((*(byte *)(param_1 + 0x9b) & 0x10) != 0) {
    uVar13 = (ulonglong)((longlong)(DAT_146aeea78 + DAT_146aeea80) + (7 - (longlong)DAT_146aeea78))
             >> 3;
    if (DAT_146aeea78 + DAT_146aeea80 < DAT_146aeea78) {
      uVar13 = uVar22;
    }
    plVar18 = DAT_146aeea78;
    uVar14 = uVar22;
    if (uVar13 != 0) {
      do {
        uVar14 = uVar14 + 1;
        *(uint *)(*plVar18 + 0xa4) = *(uint *)(*plVar18 + 0xa4) | 0x10000;
        plVar18 = plVar18 + 1;
      } while (uVar14 != uVar13);
    }
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar12 = USoundBase::GetSoundConcurrencySettingsToApply();
      goto LAB_142242914;
    }
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x50) + 0x28;
LAB_142242914:
    if ((lVar12 != 0) && (*(char *)(lVar12 + 8) == '\x05')) {
      *(undefined4 *)(param_1 + 0x11c) = 0;
      uVar13 = (ulonglong)
               ((longlong)(DAT_146aeea78 + DAT_146aeea80) + (7 - (longlong)DAT_146aeea78)) >> 3;
      if (DAT_146aeea78 + DAT_146aeea80 < DAT_146aeea78) {
        uVar13 = uVar22;
      }
      plVar18 = DAT_146aeea78;
      uVar14 = uVar22;
      if (uVar13 != 0) {
        do {
          fVar25 = (float)FWaveInstance::GetVolumeWithDistanceAttenuation(*plVar18);
          if (*(float *)(param_1 + 0x11c) <= fVar25 && fVar25 != *(float *)(param_1 + 0x11c)) {
            *(float *)(param_1 + 0x11c) = fVar25;
          }
          plVar18 = plVar18 + 1;
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar13);
      }
    }
  }
  if (((*(byte *)(param_1 + 0x9b) & 4) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    fStack_29c = 0.0;
    uVar13 = (ulonglong)((longlong)(DAT_146aeea78 + DAT_146aeea80) + (7 - (longlong)DAT_146aeea78))
             >> 3;
    if (DAT_146aeea78 + DAT_146aeea80 < DAT_146aeea78) {
      uVar13 = uVar22;
    }
    plVar18 = DAT_146aeea78;
    fVar25 = fStack_29c;
    if (uVar13 != 0) {
      do {
        lVar12 = *plVar18;
        uVar22 = uVar22 + 1;
        plVar18 = plVar18 + 1;
        fStack_29c = *(float *)(lVar12 + 0x78);
        fVar67 = fVar67 + fStack_29c;
        if (fStack_29c <= fVar25) {
          fStack_29c = fVar25;
        }
        fVar25 = fStack_29c;
      } while (uVar22 != uVar13);
    }
    local_2d8 = 0;
    local_2c8 = 0;
    fStack_2a0 = fVar67 / (float)DAT_146aeea80;
    local_2a8 = *(longlong *)(param_1 + 0x18);
    local_298 = DAT_146aeea80;
    puVar15 = (undefined8 *)FUN_140438ef0(0x20,&local_2f8);
    if (puVar15 != (undefined8 *)0x0) {
      puVar15[1] = local_2a8;
      puVar15[2] = CONCAT44(fStack_29c,fStack_2a0);
      *puVar15 = &PTR_FUN_143f4d0b0;
      puVar15[3] = CONCAT44(uStack_294,local_298);
    }
    local_308 = &LAB_142224a00;
    FUN_1422f8d80(&local_308,local_320);
  }
LAB_142242a6e:
  iVar9 = DAT_146aeea80;
  if (DAT_146aeea80 != 0) {
    iVar11 = (int)param_2[1];
    if (*(int *)((longlong)param_2 + 0xc) < iVar11 + DAT_146aeea80) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
      iVar11 = (int)param_2[1];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_2 + (longlong)iVar11 * 8),DAT_146aeea78,(longlong)iVar9 << 3);
    *(int *)(param_2 + 1) = (int)param_2[1] + iVar9;
  }
  FRichCurve::~FRichCurve(local_1a0);
  lVar12 = 2;
  puVar21 = local_1b8;
  do {
    plVar18 = (longlong *)(puVar21 + -0x10);
    puVar21 = puVar21 + -0x10;
    lVar12 = lVar12 + -1;
    if (*plVar18 != 0) {
      FMemory::Free();
    }
  } while (lVar12 != 0);
  if (local_1e8 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  if (local_288 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142242bb0 FUN_142242bb0 body=130 status=ok
// SIG undefined FUN_142242bb0(void)

bool FUN_142242bb0(longlong *param_1,float param_2)

{
  longlong lVar1;
  float extraout_XMM0_Da;
  float fVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    fVar2 = *(float *)(lVar1 + 0x7b0);
    (**(code **)(*param_1 + 0x5f0))(param_1);
    fVar2 = fVar2 + 0.0001;
    if (fVar2 <= param_2) {
      fVar2 = param_2;
    }
    return *(float *)(lVar1 + 0x790) - extraout_XMM0_Da <= fVar2;
  }
  return false;
}



// FUNCTION 142242c40 FUN_142242c40 body=58 status=ok
// SIG undefined FUN_142242c40(void)

void FUN_142242c40(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145013a80;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145013ac8;
  }
  return;
}



// FUNCTION 142242c80 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145013b10;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 142242cb0 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145013b50;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 142242ce0 Execute body=26 status=ok
// SIG undefined Execute(void)

undefined8 *
TBaseFunctorDelegateInstance<TSubclassOf<UNavAreaBase>___cdecl(void),<lambda_cde539bbbb5873e5f3f7a220806a0252>_>
::Execute(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UNavAreaBase::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 142242d00 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145013b90;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 142242d30 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145013bd0;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 142242d60 FUN_142242d60 body=26 status=ok
// SIG undefined FUN_142242d60(void)

undefined8 * FUN_142242d60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1428dfc70();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 142242d80 BlendPosePerBone<1> body=277 status=ok
// SIG undefined BlendPosePerBone<1>(void)

void BlendPosePerBone<1>(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
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
  float local_res10;
  
  fVar4 = *(float *)(param_2 + 0x10);
  fVar21 = 0.0;
  if ((0.0 <= fVar4) && (fVar21 = fVar4, 1.0 <= fVar4)) {
    fVar21 = 1.0;
  }
  if (*(uint *)(param_4 + 1) != 0) {
    lVar10 = 0;
    uVar12 = (ulonglong)*(uint *)(param_4 + 1);
    lVar11 = lVar10;
    do {
      iVar5 = *(int *)(lVar11 + *param_1);
      local_res10 = fVar21;
      if ((-1 < iVar5) && (iVar5 < *(int *)(param_2 + 0x38))) {
        local_res10 = *(float *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar5 * 4);
      }
      lVar6 = *param_3;
      lVar7 = *param_4;
      lVar11 = lVar11 + 4;
      pfVar1 = (float *)(lVar10 + lVar6);
      pfVar2 = (float *)(lVar10 + lVar7);
      fVar17 = *pfVar2 * local_res10;
      fVar18 = pfVar2[1] * local_res10;
      fVar19 = pfVar2[2] * local_res10;
      fVar20 = pfVar2[3] * local_res10;
      fVar13 = *pfVar1 * fVar17 + pfVar1[2] * fVar19;
      fVar14 = pfVar1[1] * fVar18 + pfVar1[3] * fVar20;
      fVar15 = pfVar1[2] * fVar19 + *pfVar1 * fVar17;
      fVar16 = pfVar1[3] * fVar20 + pfVar1[1] * fVar18;
      pfVar1 = (float *)(lVar10 + lVar6);
      fVar4 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = (float *)(lVar10 + lVar6);
      *pfVar2 = (float)(-(uint)(0.0 <= fVar14 + fVar13) & ((uint)(0.0 - fVar17) ^ (uint)fVar17) ^
                       (uint)(0.0 - fVar17)) + *pfVar1;
      pfVar2[1] = (float)(-(uint)(0.0 <= fVar15 + fVar14) & ((uint)(0.0 - fVar18) ^ (uint)fVar18) ^
                         (uint)(0.0 - fVar18)) + fVar4;
      pfVar2[2] = (float)(-(uint)(0.0 <= fVar16 + fVar15) & ((uint)(0.0 - fVar19) ^ (uint)fVar19) ^
                         (uint)(0.0 - fVar19)) + fVar8;
      pfVar2[3] = (float)(-(uint)(0.0 <= fVar13 + fVar16) & ((uint)(0.0 - fVar20) ^ (uint)fVar20) ^
                         (uint)(0.0 - fVar20)) + fVar9;
      pfVar1 = (float *)(lVar10 + 0x10 + lVar7);
      fVar4 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = (float *)(lVar10 + 0x10 + lVar6);
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      pfVar3 = (float *)(lVar10 + 0x10 + lVar6);
      *pfVar3 = *pfVar1 * local_res10 + *pfVar2;
      pfVar3[1] = fVar4 * local_res10 + fVar13;
      pfVar3[2] = fVar8 * local_res10 + fVar14;
      pfVar3[3] = fVar9 * local_res10 + fVar15;
      pfVar1 = (float *)(lVar10 + 0x20 + lVar7);
      fVar4 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = (float *)(lVar10 + 0x20 + lVar6);
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      pfVar3 = (float *)(lVar10 + 0x20 + lVar6);
      *pfVar3 = *pfVar1 * local_res10 + *pfVar2;
      pfVar3[1] = fVar4 * local_res10 + fVar13;
      pfVar3[2] = fVar8 * local_res10 + fVar14;
      pfVar3[3] = fVar9 * local_res10 + fVar15;
      lVar10 = lVar10 + 0x30;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}



// FUNCTION 142242ea0 FUN_142242ea0 body=310 status=ok
// SIG undefined FUN_142242ea0(void)

void FUN_142242ea0(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  int *piVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    piVar3 = (int *)(param_2 + 0x38);
    do {
      *param_1 = *(undefined8 *)(piVar3 + -0xe);
      param_1[1] = 0;
      TArray<FBakedStateExitTransition,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<FBakedStateExitTransition,int>
                (param_1 + 1,*(undefined8 *)(piVar3 + -0xc),piVar3[-10],0,0);
      *(int *)(param_1 + 3) = piVar3[-8];
      *(int *)((longlong)param_1 + 0x1c) = piVar3[-7];
      *(int *)(param_1 + 4) = piVar3[-6];
      *(int *)((longlong)param_1 + 0x24) = piVar3[-5];
      *(char *)(param_1 + 5) = (char)piVar3[-4];
      *(int *)((longlong)param_1 + 0x2c) = piVar3[-3];
      param_1[6] = 0;
      iVar2 = *piVar3;
      _Src = *(void **)(piVar3 + -2);
      *(int *)(param_1 + 7) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 6,iVar2,0);
        _guard_xfg_dispatch_icall_nop((void *)param_1[6],_Src,(longlong)iVar2 << 2);
      }
      *(char *)(param_1 + 8) = (char)piVar3[2];
      param_1[9] = *(undefined8 *)(piVar3 + 4);
      piVar1 = piVar3 + 6;
      piVar3 = piVar3 + 0x16;
      param_1[10] = *(undefined8 *)piVar1;
      param_1 = param_1 + 0xb;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142242fe0 CopyToEmpty<FBakedStateExitTransition,int> body=249 status=ok
// SIG undefined CopyToEmpty<FBakedStateExitTransition,int>(void)

void TArray<FBakedStateExitTransition,TSizedDefaultAllocator<32>_>::
     CopyToEmpty<FBakedStateExitTransition,int>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar3 = (undefined4 *)*param_1;
  if (param_3 != 0) {
    puVar4 = (undefined4 *)(param_2 + 4);
    puVar2 = puVar3 + 7;
    do {
      *puVar3 = puVar4[-1];
      puVar2[-6] = *puVar4;
      puVar2[-5] = puVar4[1];
      *(undefined1 *)(puVar2 + -4) = *(undefined1 *)(puVar4 + 2);
      *(undefined1 *)((longlong)puVar2 + -0xf) = *(undefined1 *)((longlong)puVar4 + 9);
      *(undefined8 *)(puVar2 + -3) = 0;
      iVar1 = puVar4[5];
      _Src = *(void **)(puVar4 + 3);
      puVar2[-1] = iVar1;
      if (iVar1 == 0) {
        *puVar2 = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(puVar2 + -3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop(*(void **)(puVar2 + -3),_Src,(longlong)iVar1 << 2);
      }
      puVar3 = puVar3 + 8;
      puVar2 = puVar2 + 8;
      puVar4 = puVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1422430e0 FUN_1422430e0 body=196 status=ok
// SIG undefined FUN_1422430e0(void)

undefined8 * FUN_1422430e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_145014940;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AudioComponent0",1);
  uVar1 = *puVar2;
  uVar3 = FUN_1429003e0();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = lVar4;
  *(byte *)(lVar4 + 0xba) = *(byte *)(lVar4 + 0xba) | 2;
  *(byte *)(param_1[0x8b] + 0x2f0) = *(byte *)(param_1[0x8b] + 0x2f0) | 2;
  *(byte *)(param_1[0x8b] + 0x2f0) = *(byte *)(param_1[0x8b] + 0x2f0) | 4;
  *(undefined1 *)(param_1[0x8b] + 0x24e) = 2;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) & 0xbf;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  param_1[0x2d] = param_1[0x8b];
  return param_1;
}



// FUNCTION 1422431b0 FAlphaBlend body=53 status=ok
// SIG undefined FAlphaBlend(void)

undefined1 * FAlphaBlend::FAlphaBlend(undefined1 *param_1,undefined1 *param_2,undefined4 param_3)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  Reset();
  return param_1;
}



// FUNCTION 1422431f0 FAlphaBlend body=47 status=ok
// SIG undefined FAlphaBlend(void)

undefined1 * FAlphaBlend::FAlphaBlend(undefined1 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  Reset();
  return param_1;
}



// FUNCTION 142243220 FUN_142243220 body=3074 status=ok
// SIG undefined FUN_142243220(void)

longlong ** FUN_142243220(longlong **param_1)

{
  longlong **pplVar1;
  longlong **pplVar2;
  longlong **pplVar3;
  longlong **pplVar4;
  longlong **pplVar5;
  longlong **pplVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *local_38;
  int local_30;
  
  pplVar1 = param_1 + 2;
  *param_1 = (longlong *)0x0;
  pplVar2 = param_1 + 4;
  *(undefined4 *)(param_1 + 1) = 0;
  pplVar3 = param_1 + 6;
  *pplVar1 = (longlong *)0x0;
  pplVar4 = param_1 + 8;
  *(undefined4 *)(param_1 + 3) = 0;
  pplVar5 = param_1 + 10;
  *pplVar2 = (longlong *)0x0;
  pplVar6 = param_1 + 0xc;
  *(undefined4 *)(param_1 + 5) = 0;
  *pplVar3 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 7) = 0;
  *pplVar4 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 9) = 0;
  *pplVar5 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *pplVar6 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  plVar8 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_GetPoolName_145013a80;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[2] = lVar9;
    *plVar8 = (longlong)&PTR_GetPoolName_145013ac8;
  }
  if (&local_38 != param_1) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 1) != 0) && (plVar12 = *param_1, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*param_1 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*param_1,0,0);
          *param_1 = plVar12;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x30))(plVar8,param_1);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar9 = FMemory::Realloc(plVar8,0,0);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  plVar8 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_GetPoolName_145013a80;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[2] = lVar9;
    *plVar8 = (longlong)&PTR_GetPoolName_145013ac8;
  }
  if (&local_38 != pplVar1) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 3) != 0) && (plVar12 = *pplVar1, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar12;
        }
        *(undefined4 *)(param_1 + 3) = 0;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x30))(plVar8,pplVar1);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar9 = FMemory::Realloc(plVar8,0,0);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  plVar8 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_GetPoolName_145013a80;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[2] = lVar9;
    *plVar8 = (longlong)&PTR_GetPoolName_145013ac8;
  }
  if (&local_38 != pplVar2) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 5) != 0) && (plVar12 = *pplVar2, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar12;
        }
        *(undefined4 *)(param_1 + 5) = 0;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x30))(plVar8,pplVar2);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar9 = FMemory::Realloc(plVar8,0,0);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  plVar8 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_GetPoolName_145013a80;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[2] = lVar9;
    *plVar8 = (longlong)&PTR_GetPoolName_145013ac8;
  }
  if (&local_38 != pplVar3) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 7) != 0) && (plVar12 = *pplVar3, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar3 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
          *pplVar3 = plVar12;
        }
        *(undefined4 *)(param_1 + 7) = 0;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x30))(plVar8,pplVar3);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar9 = FMemory::Realloc(plVar8,0,0);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  plVar8 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_GetPoolName_145013a80;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[2] = lVar9;
    *plVar8 = (longlong)&PTR_GetPoolName_145013ac8;
  }
  if (&local_38 != pplVar4) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 9) != 0) && (plVar12 = *pplVar4, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar4 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar4,0,0);
          *pplVar4 = plVar12;
        }
        *(undefined4 *)(param_1 + 9) = 0;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x30))(plVar8,pplVar4);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar9 = FMemory::Realloc(plVar8,0,0);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  plVar8 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_GetPoolName_145013a80;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[2] = lVar9;
    *plVar8 = (longlong)&PTR_GetPoolName_145013ac8;
  }
  if (&local_38 != pplVar5) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0xb) != 0) && (plVar12 = *pplVar5, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar5 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar5,0,0);
          *pplVar5 = plVar12;
        }
        *(undefined4 *)(param_1 + 0xb) = 0;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x30))(plVar8,pplVar5);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar9 = FMemory::Realloc(plVar8,0,0);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  plVar8 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_GetPoolName_145013a80;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[2] = lVar9;
    *plVar8 = (longlong)&PTR_GetPoolName_145013ac8;
  }
  if (&local_38 != pplVar6) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0xd) != 0) && (plVar12 = *pplVar6, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar6 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar6,0,0);
          *pplVar6 = plVar12;
        }
        *(undefined4 *)(param_1 + 0xd) = 0;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x30))(plVar8,pplVar6);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar9 = FMemory::Realloc(plVar8,0,0);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  plVar8 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_GetPoolName_145013a80;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[2] = lVar9;
    *plVar8 = (longlong)&PTR_GetPoolName_145013ac8;
  }
  pplVar1 = param_1 + 0xe;
  if (&local_38 != pplVar1) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0xf) != 0) && (plVar12 = *pplVar1, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar12;
        }
        *(undefined4 *)(param_1 + 0xf) = 0;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x30))(plVar8,pplVar1);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar9 = FMemory::Realloc(plVar8,0,0);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  local_38 = (longlong *)0x0;
  local_30 = 0;
  puVar10 = (undefined8 *)operator_new(0x18,&local_38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_145013a80;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &PTR_GetPoolName_145013ac8;
  }
  iVar7 = local_30;
  plVar8 = local_38;
  pplVar1 = param_1 + 0x10;
  if (&local_38 != pplVar1) {
    if ((local_30 == 0) || (local_38 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x11) != 0) && (plVar12 = *pplVar1, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar12;
        }
        *(undefined4 *)(param_1 + 0x11) = 0;
      }
    }
    else {
      (**(code **)(*local_38 + 0x30))(local_38,pplVar1);
    }
  }
  if (iVar7 != 0) {
    if (plVar8 == (longlong *)0x0) goto LAB_1422439a6;
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    plVar8 = (longlong *)FMemory::Realloc(plVar8,0,0);
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
LAB_1422439a6:
  local_38 = (longlong *)0x0;
  local_30 = 0;
  puVar10 = (undefined8 *)operator_new(0x18,&local_38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_145013a80;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &PTR_GetPoolName_145013ac8;
  }
  pplVar1 = param_1 + 0x12;
  if (&local_38 != pplVar1) {
    if ((local_30 == 0) || (local_38 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x13) != 0) && (plVar8 = *pplVar1, plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar8 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar8;
        }
        *(undefined4 *)(param_1 + 0x13) = 0;
      }
    }
    else {
      (**(code **)(*local_38 + 0x30))(local_38,pplVar1);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  puVar10 = (undefined8 *)operator_new(0x18,&local_38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_145013a80;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &PTR_GetPoolName_145013ac8;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x14,&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  puVar10 = (undefined8 *)operator_new(0x18,&local_38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_145013a80;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &PTR_GetPoolName_145013ac8;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x16,&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  puVar10 = (undefined8 *)operator_new(0x18,&local_38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_145013b10;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x18,&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  puVar10 = (undefined8 *)operator_new(0x18,&local_38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_145013b10;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x1a,&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  puVar10 = (undefined8 *)operator_new(0x18,&local_38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_145013b50;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x1c,&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  puVar10 = (undefined8 *)operator_new(0x20,&local_38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d72168;
    puVar10[1] = FUN_14224f510;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[3] = uVar11;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x1e,&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  puVar10 = (undefined8 *)operator_new(0x18,&local_38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_145013a80;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &PTR_GetPoolName_145013ac8;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x20,&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  puVar10 = (undefined8 *)operator_new(0x18,&local_38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_145013a80;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &PTR_GetPoolName_145013ac8;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x22,&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  puVar10 = (undefined8 *)operator_new(0x18,&local_38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_145013b90;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x24,&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  puVar10 = (undefined8 *)operator_new(0x18,&local_38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_145013bd0;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x26,&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  puVar10 = (undefined8 *)operator_new(0x18,&local_38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_145013a80;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &PTR_GetPoolName_145013ac8;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x28,&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  puVar10 = (undefined8 *)operator_new(0x18,&local_38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_145013a80;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &PTR_GetPoolName_145013ac8;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2a,&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  return param_1;
}



// FUNCTION 142243e30 FNavAgentProperties body=66 status=ok
// SIG undefined FNavAgentProperties(void)

uint * FNavAgentProperties::FNavAgentProperties(uint *param_1,longlong param_2)

{
  *param_1 = *param_1 & 0xffffffe0;
  param_1[1] = *(uint *)(param_2 + 4);
  param_1[2] = *(uint *)(param_2 + 8);
  param_1[3] = *(uint *)(param_2 + 0xc);
  param_1[4] = *(uint *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 0x18);
  FString::FString(param_1 + 8,param_2 + 0x20);
  return param_1;
}



// FUNCTION 142243e80 FNavAgentSelector body=10 status=ok
// SIG undefined FNavAgentSelector(void)

undefined4 * FNavAgentSelector::FNavAgentSelector(undefined4 *param_1)

{
  *param_1 = 0x7fffffff;
  return param_1;
}



// FUNCTION 142243e90 FNavDataConfig body=167 status=ok
// SIG undefined FNavDataConfig(void)

uint * FNavDataConfig::FNavDataConfig(uint *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_1 & 0xffffffe0;
  param_1[1] = *(uint *)(param_2 + 4);
  param_1[2] = *(uint *)(param_2 + 8);
  param_1[3] = *(uint *)(param_2 + 0xc);
  param_1[4] = *(uint *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 0x18);
  FString::FString(param_1 + 8,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x30);
  param_1[0xe] = *(uint *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0xf) = *(undefined8 *)(param_2 + 0x3c);
  param_1[0x11] = *(uint *)(param_2 + 0x44);
  lVar3 = *(longlong *)(param_2 + 0x48);
  *(longlong *)(param_1 + 0x12) = lVar3;
  if (lVar3 != 0) {
    lVar2 = FUN_1428dfc70();
    lVar3 = *(longlong *)(param_1 + 0x12);
    for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_142243f20;
    }
  }
  lVar3 = 0;
LAB_142243f20:
  FSoftObjectPath::FSoftObjectPath(param_1 + 0x14,lVar3);
  return param_1;
}



// FUNCTION 142243f40 FUN_142243f40 body=138 status=ok
// SIG undefined FUN_142243f40(void)

uint * FUN_142243f40(uint *param_1,uint param_2,uint param_3)

{
  *param_1 = *param_1 & 0xffffffe0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0xbf800000;
  param_1[4] = 0x3f000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FName::FName(param_1 + 0xc,L"Default",1);
  *(undefined2 *)((longlong)param_1 + 0x39) = 0x8cff;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 0xa4;
  param_1[0xf] = 0x42480000;
  param_1[0x10] = 0x42480000;
  param_1[0x11] = 0x437a0000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FSoftObjectPath::FSoftObjectPath(param_1 + 0x14,0);
  return param_1;
}



// FUNCTION 142243fd0 FNavHeightfieldSamples body=21 status=ok
// SIG undefined FNavHeightfieldSamples(void)

undefined8 * FNavHeightfieldSamples::FNavHeightfieldSamples(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 142243ff0 FUN_142243ff0 body=76 status=ok
// SIG undefined FUN_142243ff0(void)

undefined8 * FUN_142243ff0(undefined8 *param_1)

{
  FUN_1422a1f30();
  *(undefined1 *)(param_1 + 0x11) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__145015348;
  param_1[5] = &PTR_LAB_1450152e8;
  param_1[6] = &PTR_LAB_145015318;
  param_1[0x10] = &PTR_GetPerBoneInterpolationIndex_145015340;
  return param_1;
}



// FUNCTION 142244040 FUN_142244040 body=76 status=ok
// SIG undefined FUN_142244040(void)

undefined8 * FUN_142244040(undefined8 *param_1)

{
  FUN_1422a1f80();
  *(undefined1 *)(param_1 + 0x11) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__145015028;
  param_1[5] = &PTR_LAB_1450152e8;
  param_1[6] = &PTR_LAB_145015318;
  param_1[0x10] = &PTR_GetPerBoneInterpolationIndex_145015340;
  return param_1;
}



// FUNCTION 142244090 UAnimBlueprintGeneratedClass body=129 status=ok
// SIG undefined UAnimBlueprintGeneratedClass(void)

undefined8 * UAnimBlueprintGeneratedClass::UAnimBlueprintGeneratedClass(undefined8 *param_1)

{
  FUN_1422e0db0();
  *param_1 = &PTR__scalar_deleting_destructor__145016010;
  param_1[0x5c] = &PTR_LAB_145016390;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0xffffffff;
  return param_1;
}



// FUNCTION 142244120 FUN_142244120 body=71 status=ok
// SIG undefined FUN_142244120(void)

undefined8 * FUN_142244120(undefined8 *param_1)

{
  FUN_1422a1c80();
  *param_1 = &PTR__scalar_deleting_destructor__1450163e8;
  param_1[5] = &PTR_LAB_145016750;
  param_1[6] = &PTR_LAB_145016780;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return param_1;
}



// FUNCTION 142244170 FUN_142244170 body=55 status=ok
// SIG undefined FUN_142244170(void)

undefined8 * FUN_142244170(undefined8 *param_1)

{
  FUN_1422a1c80();
  *param_1 = &PTR_FUN_1450141f8;
  param_1[5] = &PTR_LAB_145014560;
  param_1[6] = &PTR_LAB_145014590;
  return param_1;
}



// FUNCTION 1422441b0 FUN_1422441b0 body=180 status=ok
// SIG undefined FUN_1422441b0(void)

undefined8 * FUN_1422441b0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_141781840();
  *param_1 = &PTR_FUN_144108d88;
  param_1[5] = 0;
  param_1[6] = 0;
  if ((undefined *)param_1[5] != &DAT_145011ef8) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,5);
    iVar2 = *(int *)(param_1 + 6);
    iVar1 = iVar2 + 5;
    *(int *)(param_1 + 6) = iVar1;
    if (*(int *)((longlong)param_1 + 0x34) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar2);
    }
    puVar3 = (undefined8 *)param_1[5];
    *puVar3 = 0x65006e006f004e;
    *(undefined2 *)(puVar3 + 1) = 0;
  }
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0x100;
  plVar4 = (longlong *)FUN_1428e5be0();
  lVar5 = plVar4[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar5 = plVar4[0x1f];
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar5 + 0x5c);
  return param_1;
}



// FUNCTION 142244270 FUN_142244270 body=287 status=ok
// SIG undefined FUN_142244270(void)

undefined8 * FUN_142244270(undefined8 *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_1422441b0();
  *param_1 = &PTR_FUN_145015d98;
  if ((wchar_t *)param_1[5] != L"Automatic") {
    iVar3 = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,10);
      iVar3 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar3 + 10;
    if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"Automatic",10);
  }
  plVar1 = (longlong *)FUN_1428e5be0();
  lVar4 = plVar1[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar4 = plVar1[0x1f];
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar4 + 0x60);
  *(uint *)((longlong)param_1 + 0x4c) =
       *(uint *)((longlong)param_1 + 0x4c) ^
       ((uint)*(byte *)(lVar4 + 0x69) ^ *(uint *)((longlong)param_1 + 0x4c)) & 1;
  uVar2 = ((uint)*(byte *)(lVar4 + 0x6a) * 2 ^ *(uint *)((longlong)param_1 + 0x4c)) & 2 ^
          *(uint *)((longlong)param_1 + 0x4c);
  *(uint *)((longlong)param_1 + 0x4c) = uVar2;
  uVar2 = ((uint)*(byte *)(lVar4 + 0x6b) << 2 ^ uVar2) & 4 ^ uVar2;
  *(uint *)((longlong)param_1 + 0x4c) = uVar2;
  uVar2 = ((uint)*(byte *)(lVar4 + 0x6c) << 3 ^ uVar2) & 8 ^ uVar2;
  *(uint *)((longlong)param_1 + 0x4c) = uVar2;
  uVar2 = ((uint)*(byte *)(lVar4 + 0x67) << 4 ^ uVar2) & 0x10 ^ uVar2;
  *(uint *)((longlong)param_1 + 0x4c) = uVar2;
  uVar2 = ((uint)*(byte *)(lVar4 + 0x66) << 5 ^ uVar2) & 0x20 ^ uVar2;
  *(uint *)((longlong)param_1 + 0x4c) = uVar2;
  *(uint *)((longlong)param_1 + 0x4c) = ((uint)*(byte *)(lVar4 + 0x68) << 6 ^ uVar2) & 0x40 ^ uVar2;
  return param_1;
}



// FUNCTION 142244390 UAnimCompress_BitwiseCompressOnly body=150 status=ok
// SIG undefined UAnimCompress_BitwiseCompressOnly(void)

undefined8 *
UAnimCompress_BitwiseCompressOnly::UAnimCompress_BitwiseCompressOnly(undefined8 *param_1)

{
  int iVar1;
  
  FUN_1422441b0();
  *param_1 = &PTR_FUN_144108d88;
  if ((wchar_t *)param_1[5] != L"Bitwise Compress Only") {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0x16) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x16);
      iVar1 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar1 + 0x16;
    if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 0x16) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"Bitwise Compress Only",0x16);
  }
  return param_1;
}



// FUNCTION 142244430 FUN_142244430 body=143 status=ok
// SIG undefined FUN_142244430(void)

undefined8 * FUN_142244430(undefined8 *param_1)

{
  int iVar1;
  
  FUN_1422441b0();
  *param_1 = &PTR_FUN_144108d88;
  if ((wchar_t *)param_1[5] != L"Least Destructive") {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0x12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x12);
      iVar1 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar1 + 0x12;
    if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 0x12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"Least Destructive",0x12);
  }
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  return param_1;
}



// FUNCTION 1422444c0 FUN_1422444c0 body=836 status=ok
// SIG undefined FUN_1422444c0(void)

undefined8 * FUN_1422444c0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  
  FUN_1422441b0();
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
  *param_1 = &PTR__scalar_deleting_destructor__1450158a8;
  iVar4 = 0;
  iVar5 = 0;
  if ((wchar_t *)param_1[5] != L"Remove Linear Keys") {
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0x13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x13);
      iVar4 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar4 + 0x13;
    if (*(int *)((longlong)param_1 + 0x34) < iVar4 + 0x13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"Remove Linear Keys",0x13);
  }
  *(uint *)((longlong)param_1 + 100) = *(uint *)((longlong)param_1 + 100) | 3;
  *param_1 = &PTR__scalar_deleting_destructor__145015b20;
  plVar1 = param_1 + 0x11;
  *(undefined4 *)(param_1 + 9) = 0x3a83126f;
  plVar2 = param_1 + 0x13;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3a449ba6;
  *(undefined4 *)(param_1 + 10) = 0x358637bd;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0xb) = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0xc) = 0x40000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *plVar1 = 0;
  param_1[0x12] = 0;
  *plVar2 = 0;
  param_1[0x14] = 0;
  if ((undefined *)param_1[5] != &DAT_145012830) {
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0x22) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x22);
      iVar5 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar5 + 0x22;
    if (*(int *)((longlong)param_1 + 0x34) < iVar5 + 0x22) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar5);
    }
    puVar3 = (undefined8 *)param_1[5];
    *puVar3 = 0x70006d006f0043;
    puVar3[1] = 0x73007300650072;
    puVar3[2] = 0x63006100650020;
    puVar3[3] = 0x72007400200068;
    *(undefined4 *)(puVar3 + 4) = 0x630061;
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0x20006b;
    *(undefined4 *)(puVar3 + 5) = 0x6e0069;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = 0x650064;
    puVar3[6] = 0x64006e00650070;
    puVar3[7] = 0x6c0074006e0065;
    *(undefined4 *)(puVar3 + 8) = 0x79;
  }
  *(uint *)(param_1 + 0x15) = *(uint *)(param_1 + 0x15) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 100) = *(uint *)((longlong)param_1 + 100) & 0xfffffffc;
  *(uint *)((longlong)param_1 + 0xb4) = *(uint *)((longlong)param_1 + 0xb4) & 0xfffffffc;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3be56042;
  *(undefined4 *)(param_1 + 0xe) = 0x3b03126f;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3a378034;
  *(undefined4 *)(param_1 + 0xd) = 0x3951b717;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x41700000;
  *(undefined4 *)(param_1 + 0x16) = 10;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x17) = 1;
  *(undefined4 *)(param_1 + 0x19) = 0x3f4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x1a) = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x1b) = 0x3a83126f;
  iVar4 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x84) < iVar4 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0xf,iVar4);
  }
  *(undefined1 *)((longlong)iVar4 + param_1[0xf]) = 6;
  iVar4 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x84) < iVar4 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0xf,iVar4);
  }
  *(undefined1 *)((longlong)iVar4 + param_1[0xf]) = 2;
  iVar4 = *(int *)(param_1 + 0x12);
  *(int *)(param_1 + 0x12) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x94) < iVar4 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  *(undefined1 *)((longlong)iVar4 + *plVar1) = 6;
  iVar4 = *(int *)(param_1 + 0x12);
  *(int *)(param_1 + 0x12) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x94) < iVar4 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  *(undefined1 *)((longlong)iVar4 + *plVar1) = 3;
  iVar4 = *(int *)(param_1 + 0x12);
  *(int *)(param_1 + 0x12) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x94) < iVar4 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  *(undefined1 *)((longlong)iVar4 + *plVar1) = 2;
  iVar4 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xa4) < iVar4 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
  }
  *(undefined1 *)((longlong)iVar4 + *plVar2) = 6;
  iVar4 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xa4) < iVar4 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
  }
  *(undefined1 *)((longlong)iVar4 + *plVar2) = 3;
  iVar4 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xa4) < iVar4 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
  }
  *(undefined1 *)((longlong)iVar4 + *plVar2) = 2;
  return param_1;
}



// FUNCTION 142244810 FUN_142244810 body=146 status=ok
// SIG undefined FUN_142244810(void)

undefined8 * FUN_142244810(undefined8 *param_1)

{
  int iVar1;
  
  FUN_1422441b0();
  *param_1 = &PTR_FUN_145015d98;
  if ((wchar_t *)param_1[5] != L"Remove Every Second Key") {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0x18) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x18);
      iVar1 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar1 + 0x18;
    if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 0x18) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"Remove Every Second Key",0x18);
  }
  *(undefined4 *)(param_1 + 9) = 10;
  return param_1;
}



// FUNCTION 1422448b0 FUN_1422448b0 body=205 status=ok
// SIG undefined FUN_1422448b0(void)

undefined8 * FUN_1422448b0(undefined8 *param_1)

{
  int iVar1;
  
  FUN_1422441b0();
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
  *param_1 = &PTR__scalar_deleting_destructor__1450158a8;
  if ((wchar_t *)param_1[5] != L"Remove Linear Keys") {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0x13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x13);
      iVar1 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar1 + 0x13;
    if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 0x13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"Remove Linear Keys",0x13);
  }
  *(uint *)((longlong)param_1 + 100) = *(uint *)((longlong)param_1 + 100) | 3;
  *(undefined4 *)(param_1 + 9) = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3a449ba6;
  *(undefined4 *)(param_1 + 10) = 0x358637bd;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0xb) = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0xc) = 0x40000000;
  return param_1;
}



// FUNCTION 142244980 FUN_142244980 body=820 status=ok
// SIG undefined FUN_142244980(void)

undefined8 * FUN_142244980(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  undefined8 local_28;
  undefined8 local_20;
  
  UDeveloperSettings::UDeveloperSettings();
  *(undefined4 *)(param_1 + 7) = 2;
  *param_1 = &PTR_FUN_145015610;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar2 = FUN_1428e99d0();
  param_1[10] = uVar2;
  *(undefined2 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x1000000;
  *(undefined4 *)(param_1 + 0xd) = 0x1010100;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6f) = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  FName::FName(&local_res8,L"Animation",1);
  param_1[6] = local_res8;
  local_28 = 0;
  local_20 = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_145011f1c,6);
  iVar1 = *(int *)(param_1 + 9);
  *(int *)(param_1 + 9) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x4c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[8]);
  local_28 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_145011f28,8);
  iVar1 = *(int *)(param_1 + 9);
  *(int *)(param_1 + 9) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x4c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[8]);
  local_28 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
  local_20 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"weapon",0xe);
  iVar1 = *(int *)(param_1 + 9);
  *(int *)(param_1 + 9) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x4c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[8]);
  local_28 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
  local_20 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"hand",10);
  iVar1 = *(int *)(param_1 + 9);
  *(int *)(param_1 + 9) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x4c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[8]);
  local_28 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
  local_20 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"attach",0xe);
  iVar1 = *(int *)(param_1 + 9);
  *(int *)(param_1 + 9) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x4c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[8]);
  local_28 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
  local_20 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"camera",0xe);
  iVar1 = *(int *)(param_1 + 9);
  *(int *)(param_1 + 9) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x4c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[8]);
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
  return param_1;
}



// FUNCTION 142244cc0 UNavAreaBase body=37 status=ok
// SIG undefined UNavAreaBase(void)

undefined8 * UNavAreaBase::UNavAreaBase(undefined8 *param_1)

{
  FUN_141781840();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
  *param_1 = &PTR_FUN_145013c10;
  return param_1;
}



// FUNCTION 142244cf0 FUN_142244cf0 body=43 status=ok
// SIG undefined FUN_142244cf0(void)

undefined8 * FUN_142244cf0(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__145013f80;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142244d20 FUN_142244d20 body=111 status=ok
// SIG undefined FUN_142244d20(void)

undefined8 * FUN_142244d20(undefined8 *param_1)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450146c0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (DAT_146b17150 != 0) {
    local_28 = *(undefined8 *)(DAT_146b17150 + 0x198);
    FString::FString(local_20,DAT_146b17150 + 0x1a0);
    FSoftObjectPath::operator=(param_1 + 5,&local_28);
  }
  return param_1;
}



// FUNCTION 142244d90 FUN_142244d90 body=175 status=ok
// SIG undefined FUN_142244d90(void)

undefined8 * FUN_142244d90(undefined8 *param_1)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450146c0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (DAT_146b17150 != 0) {
    local_28 = *(undefined8 *)(DAT_146b17150 + 0x198);
    FString::FString(local_20,DAT_146b17150 + 0x1a0);
    FSoftObjectPath::operator=(param_1 + 5,&local_28);
  }
  *param_1 = &PTR__scalar_deleting_destructor__1450146c0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x3c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if ((undefined2 *)param_1[6] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[6] = 0;
  }
  return param_1;
}



// FUNCTION 142244e40 FUN_142244e40 body=104 status=ok
// SIG undefined FUN_142244e40(void)

void FUN_142244e40(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        FMemory::Free();
      }
      FUN_140590de0(lVar1);
      lVar1 = lVar1 + 0x58;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142244eb0 ~TArray<FBakedAnimationStateMachine,FDefaultAllocator> body=104 status=ok
// SIG undefined ~TArray<FBakedAnimationStateMachine,FDefaultAllocator>(void)

void TArray<FBakedAnimationStateMachine,FDefaultAllocator>::
     ~TArray<FBakedAnimationStateMachine,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x10;
    do {
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        FMemory::Free();
      }
      FUN_142244e40(lVar1);
      lVar1 = lVar1 + 0x38;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142244f20 ~TArray<FNavDataConfig,FDefaultAllocator> body=109 status=ok
// SIG undefined ~TArray<FNavDataConfig,FDefaultAllocator>(void)

void TArray<FNavDataConfig,FDefaultAllocator>::~TArray<FNavDataConfig,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
    do {
      if (plVar2[7] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xd;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142244f90 FUN_142244f90 body=403 status=ok
// SIG undefined FUN_142244f90(void)

void FUN_142244f90(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(param_1 + 0xa8);
  iVar5 = *(int *)(param_1 + 0xb0);
  if (iVar5 != 0) {
    lVar3 = lVar3 + 0x300;
    do {
      lVar2 = 3;
      lVar4 = lVar3 + 0x170;
      do {
        lVar4 = lVar4 + -0x70;
        FRichCurve::~FRichCurve(lVar4);
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      lVar2 = 3;
      lVar4 = lVar3;
      do {
        lVar4 = lVar4 + -0x70;
        FRichCurve::~FRichCurve(lVar4);
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      lVar2 = 3;
      lVar4 = lVar3 + -0x170;
      do {
        lVar4 = lVar4 + -0x70;
        FRichCurve::~FRichCurve(lVar4);
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      lVar3 = lVar3 + 0x470;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar3 = *(longlong *)(param_1 + 0xa8);
  }
  if (lVar3 != 0) {
    FMemory::Free();
  }
  iVar5 = *(int *)(param_1 + 0xa0);
  lVar3 = *(longlong *)(param_1 + 0x98);
  if (iVar5 != 0) {
    lVar3 = lVar3 + 0x20;
    do {
      FRichCurve::~FRichCurve(lVar3);
      lVar3 = lVar3 + 0x90;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar3 = *(longlong *)(param_1 + 0x98);
  }
  if (lVar3 != 0) {
    FMemory::Free();
  }
  iVar5 = *(int *)(param_1 + 0x88);
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  if (iVar5 != 0) {
    do {
      puVar1[0xc] = &PTR_FUN_14410b0e0;
      *puVar1 = &PTR_FUN_14410b0e0;
      puVar1 = puVar1 + 0x15;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
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



// FUNCTION 142245130 ~UBlendSpaceBase body=182 status=ok
// SIG undefined ~UBlendSpaceBase(void)

void UBlendSpaceBase::~UBlendSpaceBase(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x148;
  lVar2 = 3;
  do {
    plVar1 = (longlong *)(lVar3 + -0x20);
    lVar3 = lVar3 + -0x20;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
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



// FUNCTION 1422451f0 FUN_1422451f0 body=465 status=ok
// SIG undefined FUN_1422451f0(void)

longlong * FUN_1422451f0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    lVar3 = *param_1 + 0x10;
    do {
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        FMemory::Free();
      }
      FUN_142244e40(lVar3);
      lVar3 = lVar3 + 0x38;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = (int)param_2[1];
  lVar3 = *param_2;
  *(int *)(param_1 + 1) = iVar6;
  if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(param_1,iVar6);
    puVar8 = (undefined8 *)*param_1;
    if (iVar6 != 0) {
      piVar4 = (int *)(lVar3 + 0x28);
      puVar7 = (undefined4 *)((longlong)puVar8 + 0x2c);
      do {
        *puVar8 = *(undefined8 *)(piVar4 + -10);
        puVar7[-9] = piVar4[-8];
        *(undefined8 *)(puVar7 + -7) = 0;
        FUN_142242ea0(puVar7 + -7,*(undefined8 *)(piVar4 + -6),piVar4[-4],0,0);
        *(undefined8 *)(puVar7 + -3) = 0;
        iVar5 = *piVar4;
        lVar3 = *(longlong *)(piVar4 + -2);
        puVar7[-1] = iVar5;
        if (iVar5 == 0) {
          *puVar7 = 0;
        }
        else {
          TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(puVar7 + -3,iVar5,0);
          puVar1 = *(undefined8 **)(puVar7 + -3);
          puVar2 = (undefined4 *)(lVar3 + 0xc);
          do {
            *puVar1 = *(undefined8 *)(puVar2 + -3);
            *(undefined4 *)(puVar1 + 1) = puVar2[-1];
            *(undefined4 *)((longlong)puVar1 + 0xc) = *puVar2;
            *(undefined4 *)(puVar1 + 2) = puVar2[1];
            *(undefined4 *)((longlong)puVar1 + 0x14) = puVar2[2];
            *(undefined4 *)(puVar1 + 3) = puVar2[3];
            *(undefined4 *)((longlong)puVar1 + 0x1c) = puVar2[4];
            *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar2 + 5);
            puVar1[5] = *(undefined8 *)(puVar2 + 7);
            puVar1[6] = *(undefined8 *)(puVar2 + 9);
            *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(puVar2 + 0xb);
            *(undefined1 *)((longlong)puVar1 + 0x39) = *(undefined1 *)((longlong)puVar2 + 0x2d);
            *(undefined1 *)((longlong)puVar1 + 0x3a) = *(undefined1 *)((longlong)puVar2 + 0x2e);
            *(undefined1 *)((longlong)puVar1 + 0x3b) = *(undefined1 *)((longlong)puVar2 + 0x2f);
            iVar5 = iVar5 + -1;
            puVar1 = puVar1 + 8;
            puVar2 = puVar2 + 0x10;
          } while (iVar5 != 0);
        }
        puVar8 = puVar8 + 7;
        puVar7[1] = piVar4[2];
        piVar4 = piVar4 + 0xe;
        puVar7 = puVar7 + 0xe;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return param_1;
}



// FUNCTION 1422453d0 FUN_1422453d0 body=155 status=ok
// SIG undefined FUN_1422453d0(void)

undefined8 * FUN_1422453d0(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x78);
  if (puVar2 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar2 + 2,0,0x68);
    *puVar2 = &PTR_FUN_1440104d0;
    puVar2[1] = 0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(puVar2 + 2) = DVar1;
    *puVar2 = &PTR__scalar_deleting_destructor__145015608;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1422454c0 `scalar_deleting_destructor' body=47 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FAnimNotifyEvent::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  param_1[0xc] = &PTR_FUN_14410b0e0;
  *param_1 = &PTR_FUN_14410b0e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1422454f0 `scalar_deleting_destructor' body=142 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FCRSimPointContainer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142245580 `scalar_deleting_destructor' body=158 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FNavigationQueryFilter::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x18);
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
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142245620 FUN_142245620 body=43 status=ok
// SIG undefined FUN_142245620(void)

undefined8 * FUN_142245620(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145013eb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142245650 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UAimOffsetBlendSpace1D::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  UBlendSpaceBase::~UBlendSpaceBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 142245690 `scalar_deleting_destructor' body=199 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAnimBlueprintGeneratedClass::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x308);
  puVar2 = *(undefined8 **)(param_1 + 0x300);
  if (iVar1 != 0) {
    do {
      puVar2[0xc] = &PTR_FUN_14410b0e0;
      *puVar2 = &PTR_FUN_14410b0e0;
      puVar2 = puVar2 + 0x15;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    puVar2 = *(undefined8 **)(param_1 + 0x300);
  }
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  TArray<FBakedAnimationStateMachine,FDefaultAllocator>::
  ~TArray<FBakedAnimationStateMachine,FDefaultAllocator>(param_1 + 0x2e8);
  *(undefined ***)(param_1 + 0x2e0) = &PTR_FUN_1441b49f8;
  FUN_140701820(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 142245760 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FDuplicateDataWriter::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  FUN_142244f90(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 1422457b0 FUN_1422457b0 body=52 status=ok
// SIG undefined FUN_1422457b0(void)

undefined8 FUN_1422457b0(undefined8 param_1,ulonglong param_2)

{
  FUN_142244f90();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1422457f0 FUN_1422457f0 body=70 status=ok
// SIG undefined FUN_1422457f0(void)

longlong FUN_1422457f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142245840 `scalar_deleting_destructor' body=118 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAnimCompress_PerTrackCompression::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

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
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1422458c0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAnimCompress_RemoveLinearKeys::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142245910 FUN_142245910 body=162 status=ok
// SIG undefined FUN_142245910(void)

longlong FUN_142245910(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 0x70);
  iVar2 = *(int *)(param_1 + 0x48);
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x40);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1422459c0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UNavigationSystem::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FNavDataConfig,FDefaultAllocator>::~TArray<FNavDataConfig,FDefaultAllocator>
            (param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142245a00 Accumulate body=103 status=ok
// SIG undefined Accumulate(void)

void FBaseBlendedCurve<TMemStackAllocator<0>_>::Accumulate
               (longlong *param_1,longlong *param_2,float param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if ((1e-05 < param_3) && (iVar4 = 0, 0 < (int)param_1[1])) {
    lVar3 = *param_2;
    lVar2 = 0;
    do {
      if ((*(char *)(lVar2 + 4 + *param_1) == '\0') && (*(char *)(lVar2 + 4 + lVar3) == '\0')) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      *(undefined1 *)(lVar2 + 4 + *param_1) = uVar1;
      iVar4 = iVar4 + 1;
      lVar3 = *param_2;
      *(float *)(lVar2 + *param_1) =
           param_3 * *(float *)(lVar2 + lVar3) + *(float *)(lVar2 + *param_1);
      lVar2 = lVar2 + 8;
    } while (iVar4 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 142245a70 FUN_142245a70 body=1540 status=ok
// SIG undefined FUN_142245a70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142245a70(char *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined4 in_EAX;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar15 [16];
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
  
  fVar28 = fRam0000000146aeeec8;
  fVar21 = fRam0000000146aeeec4;
  fVar20 = _DAT_146aeeec0;
  fVar47 = fRam0000000146aeee58;
  fVar46 = fRam0000000146aeee54;
  fVar45 = _DAT_146aeee50;
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    uVar10 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x18) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0x28) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x38) = uVar10;
    auVar9._4_4_ = DAT_146531a94;
    auVar9._0_4_ = DAT_146531a90;
    auVar9._8_4_ = DAT_146531a98;
    auVar9._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x30) = auVar9;
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = -0x80;
    param_1[7] = '?';
    return;
  }
  auVar12 = *(undefined1 (*) [16])(param_1 + 0x30);
  fVar2 = auVar12._0_4_;
  fVar4 = auVar12._4_4_;
  fVar6 = auVar12._8_4_;
  fVar8 = auVar12._12_4_;
  auVar1 = *(undefined1 (*) [16])(param_2 + 8);
  fVar3 = auVar1._0_4_;
  fVar5 = auVar1._4_4_;
  fVar7 = auVar1._8_4_;
  auVar12 = minps(auVar1,auVar12);
  auVar13._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146aeeec4);
  auVar13._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146aeeec0);
  auVar13._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146aeeec8);
  auVar13._12_4_ = -(uint)(auVar12._12_4_ < fRam0000000146aeeecc);
  iVar11 = movmskps(in_EAX,auVar13);
  if (iVar11 == 0) {
    fVar45 = *(float *)(param_1 + 0x10);
    fVar46 = *(float *)(param_1 + 0x14);
    fVar47 = *(float *)(param_1 + 0x18);
    fVar20 = *(float *)(param_1 + 0x1c);
    fVar21 = *param_2;
    fVar28 = param_2[1];
    fVar29 = param_2[2];
    fVar30 = param_2[3];
    fVar31 = param_2[4] * fVar2;
    fVar14 = param_2[5] * fVar4;
    fVar24 = param_2[6] * fVar6;
    fVar25 = param_2[7] * fVar8;
    fVar38 = fVar30 * fVar45 * _DAT_146aeee90 + fVar20 * fVar21 + fVar46 * fVar29 * _DAT_146aeee80 +
             fVar47 * fVar28 * _DAT_146aeee70;
    fVar22 = fVar29 * fVar45 * fRam0000000146aeee94 + fVar20 * fVar28 +
             fVar46 * fVar30 * fRam0000000146aeee84 + fVar47 * fVar21 * fRam0000000146aeee74;
    fVar16 = fVar28 * fVar45 * fRam0000000146aeee98 + fVar20 * fVar29 +
             fVar46 * fVar21 * fRam0000000146aeee88 + fVar47 * fVar30 * fRam0000000146aeee78;
    fVar17 = fVar21 * fVar45 * fRam0000000146aeee9c + fVar20 * fVar30 +
             fVar46 * fVar28 * fRam0000000146aeee8c + fVar47 * fVar29 * fRam0000000146aeee7c;
    fVar21 = fVar24 * fVar46 - fVar14 * fVar47;
    fVar28 = fVar31 * fVar47 - fVar24 * fVar45;
    fVar29 = fVar14 * fVar45 - fVar31 * fVar46;
    fVar30 = fVar25 * fVar20 - fVar25 * fVar20;
    fVar21 = fVar21 + fVar21;
    fVar28 = fVar28 + fVar28;
    fVar29 = fVar29 + fVar29;
    fVar30 = fVar30 + fVar30;
    local_b8 = (fVar29 * fVar46 - fVar28 * fVar47) + fVar20 * fVar21 + fVar31 +
               *(float *)(param_1 + 0x20);
    fStack_b4 = (fVar21 * fVar47 - fVar29 * fVar45) + fVar20 * fVar28 + fVar14 +
                *(float *)(param_1 + 0x24);
    fStack_b0 = (fVar28 * fVar45 - fVar21 * fVar46) + fVar20 * fVar29 + fVar24 +
                *(float *)(param_1 + 0x28);
    fVar45 = (fVar30 * fVar20 - fVar30 * fVar20) + fVar20 * fVar30 + fVar25 +
             *(float *)(param_1 + 0x2c);
  }
  else {
    fVar29 = *(float *)(param_1 + 0x10);
    fVar30 = *(float *)(param_1 + 0x14);
    fVar31 = *(float *)(param_1 + 0x18);
    fVar14 = *(float *)(param_1 + 0x1c);
    fVar16 = fVar30 + fVar30;
    fVar17 = fVar31 + fVar31;
    fVar24 = *(float *)(param_1 + 0x20);
    fVar25 = *(float *)(param_1 + 0x24);
    fVar38 = *(float *)(param_1 + 0x28);
    fVar26 = fVar29 * (fVar29 + fVar29);
    fVar22 = fVar14 * (fVar29 + fVar29);
    fVar32 = fVar4 * (fVar16 * fVar29 - fVar14 * fVar17);
    fVar34 = fVar6 * (fVar17 * fVar30 - fVar22);
    fVar36 = fVar2 * (fVar17 * fVar29 - fVar14 * fVar16);
    fVar42 = (fVar14 * fVar17 + fVar16 * fVar29) * fVar2;
    fVar43 = (fVar22 + fVar17 * fVar30) * fVar4;
    fVar44 = (fVar14 * fVar16 + fVar17 * fVar29) * fVar6;
    fVar22 = (float)((uint)((_DAT_146aeee50 - (fVar31 * fVar17 + fVar30 * fVar16)) * fVar2) &
                    _DAT_146aeee60);
    fVar17 = (float)((uint)((fRam0000000146aeee54 - (fVar31 * fVar17 + fVar26)) * fVar4) &
                    uRam0000000146aeee64);
    fVar18 = (float)((uint)((fRam0000000146aeee58 - (fVar30 * fVar16 + fVar26)) * fVar6) &
                    uRam0000000146aeee68);
    fVar19 = (float)((uint)((fRam0000000146aeee5c - (fVar26 + fVar26)) * fVar8) &
                    uRam0000000146aeee6c);
    fVar29 = *param_2;
    fVar30 = param_2[1];
    fVar31 = param_2[2];
    fVar14 = param_2[3];
    fVar26 = fVar30 + fVar30;
    fVar23 = fVar31 + fVar31;
    fVar27 = fVar29 * (fVar29 + fVar29);
    fVar16 = (fVar29 + fVar29) * fVar14;
    fVar39 = (fVar23 * fVar14 + fVar26 * fVar29) * fVar3;
    fVar40 = (fVar16 + fVar23 * fVar30) * fVar5;
    fVar41 = (fVar26 * fVar14 + fVar23 * fVar29) * fVar7;
    fVar33 = fVar5 * (fVar26 * fVar29 - fVar23 * fVar14);
    fVar35 = fVar7 * (fVar23 * fVar30 - fVar16);
    fVar37 = fVar3 * (fVar23 * fVar29 - fVar26 * fVar14);
    fVar14 = (float)((uint)((_DAT_146aeee50 - (fVar31 * fVar23 + fVar30 * fVar26)) * fVar3) &
                    _DAT_146aeee60);
    fVar16 = (float)((uint)((fRam0000000146aeee54 - (fVar31 * fVar23 + fVar27)) * fVar5) &
                    uRam0000000146aeee64);
    fVar26 = (float)((uint)((fRam0000000146aeee58 - (fVar30 * fVar26 + fVar27)) * fVar7) &
                    uRam0000000146aeee68);
    fVar23 = (float)((uint)((fRam0000000146aeee5c - (fVar27 + fVar27)) * auVar1._12_4_) &
                    uRam0000000146aeee6c);
    fVar29 = param_2[4];
    fVar30 = param_2[5];
    fVar31 = param_2[6];
    local_e8 = fVar39 * fVar32 + fVar14 * fVar22 + fVar37 * fVar44 + fVar23 * fVar24;
    fStack_e4 = fVar39 * fVar17 + fVar14 * fVar42 + fVar37 * fVar34 + fVar23 * fVar25;
    fStack_e0 = fVar39 * fVar43 + fVar14 * fVar36 + fVar37 * fVar18 + fVar23 * fVar38;
    fStack_dc = fVar39 * fVar19 + fVar14 * fVar19 + fVar37 * fVar19 + fVar23 * fRam0000000146aeee5c;
    local_d8 = fVar16 * fVar32 + fVar33 * fVar22 + fVar40 * fVar44 + fVar23 * fVar24;
    fStack_d4 = fVar16 * fVar17 + fVar33 * fVar42 + fVar40 * fVar34 + fVar23 * fVar25;
    fStack_d0 = fVar16 * fVar43 + fVar33 * fVar36 + fVar40 * fVar18 + fVar23 * fVar38;
    fStack_cc = fVar16 * fVar19 + fVar33 * fVar19 + fVar40 * fVar19 + fVar23 * fRam0000000146aeee5c;
    local_c8 = fVar35 * fVar32 + fVar41 * fVar22 + fVar26 * fVar44 + fVar23 * fVar24;
    fStack_c4 = fVar35 * fVar17 + fVar41 * fVar42 + fVar26 * fVar34 + fVar23 * fVar25;
    fStack_c0 = fVar35 * fVar43 + fVar41 * fVar36 + fVar26 * fVar18 + fVar23 * fVar38;
    fStack_bc = fVar35 * fVar19 + fVar41 * fVar19 + fVar26 * fVar19 + fVar23 * fRam0000000146aeee5c;
    local_b8 = fVar30 * fVar32 + fVar29 * fVar22 + fVar31 * fVar44 + fRam0000000146aeee5c * fVar24;
    fStack_b4 = fVar30 * fVar17 + fVar29 * fVar42 + fVar31 * fVar34 + fRam0000000146aeee5c * fVar25;
    fStack_b0 = fVar30 * fVar43 + fVar29 * fVar36 + fVar31 * fVar18 + fRam0000000146aeee5c * fVar38;
    fStack_ac = fVar30 * fVar19 + fVar29 * fVar19 + fVar31 * fVar19 +
                fRam0000000146aeee5c * fRam0000000146aeee5c;
    FMatrix::RemoveScaling(&local_e8);
    fVar45 = (float)(-(uint)(fVar20 <= fVar2 * fVar3) & (_DAT_146aeeeb0 ^ (uint)fVar45) ^
                    _DAT_146aeeeb0);
    fVar46 = (float)(-(uint)(fVar21 <= fVar4 * fVar5) & (uRam0000000146aeeeb4 ^ (uint)fVar46) ^
                    uRam0000000146aeeeb4);
    fVar47 = (float)(-(uint)(fVar28 <= fVar6 * fVar7) & (uRam0000000146aeeeb8 ^ (uint)fVar47) ^
                    uRam0000000146aeeeb8);
    local_e8 = local_e8 * fVar45;
    fStack_e4 = fStack_e4 * fVar45;
    fStack_e0 = fStack_e0 * fVar45;
    fStack_d4 = fStack_d4 * fVar46;
    fStack_d0 = fStack_d0 * fVar46;
    local_d8 = local_d8 * fVar46;
    fStack_c4 = fStack_c4 * fVar47;
    fStack_c0 = fStack_c0 * fVar47;
    local_c8 = local_c8 * fVar47;
    FQuat::FQuat(&local_f8,&local_e8);
    auVar15._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
    auVar15._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
    auVar15._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
    auVar15._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
    fVar28 = auVar15._4_4_ + auVar15._0_4_;
    fVar29 = auVar15._8_4_ + auVar15._4_4_;
    fVar30 = auVar15._12_4_ + auVar15._8_4_;
    fVar31 = auVar15._0_4_ + auVar15._12_4_;
    auVar12._4_4_ = fVar29;
    auVar12._0_4_ = fVar28;
    auVar12._8_4_ = fVar30;
    auVar12._12_4_ = fVar31;
    auVar12 = rsqrtps(auVar15,auVar12);
    fVar46 = auVar12._0_4_;
    fVar47 = auVar12._4_4_;
    fVar20 = auVar12._8_4_;
    fVar21 = auVar12._12_4_;
    fVar46 = (_DAT_146aeee30 - fVar46 * fVar46 * fVar28 * _DAT_146aeee30) * fVar46 + fVar46;
    fVar47 = (fRam0000000146aeee34 - fVar47 * fVar47 * fVar29 * fRam0000000146aeee34) * fVar47 +
             fVar47;
    fVar20 = (fRam0000000146aeee38 - fVar20 * fVar20 * fVar30 * fRam0000000146aeee38) * fVar20 +
             fVar20;
    fVar21 = (fRam0000000146aeee3c - fVar21 * fVar21 * fVar31 * fRam0000000146aeee3c) * fVar21 +
             fVar21;
    fVar45 = 0.0;
    fVar38 = (float)(((uint)(((_DAT_146aeee30 - fVar46 * fVar46 * fVar28 * _DAT_146aeee30) * fVar46
                             + fVar46) * local_f8) ^ _DAT_146aeee20) & -(uint)(1e-08 <= fVar28) ^
                    _DAT_146aeee20);
    fVar22 = (float)(((uint)(((fRam0000000146aeee34 -
                              fVar47 * fVar47 * fVar29 * fRam0000000146aeee34) * fVar47 + fVar47) *
                            fStack_f4) ^ uRam0000000146aeee24) & -(uint)(1e-08 <= fVar29) ^
                    uRam0000000146aeee24);
    fVar16 = (float)(((uint)(((fRam0000000146aeee38 -
                              fVar20 * fVar20 * fVar30 * fRam0000000146aeee38) * fVar20 + fVar20) *
                            fStack_f0) ^ uRam0000000146aeee28) & -(uint)(1e-08 <= fVar30) ^
                    uRam0000000146aeee28);
    fVar17 = (float)(((uint)(((fRam0000000146aeee3c -
                              fVar21 * fVar21 * fVar31 * fRam0000000146aeee3c) * fVar21 + fVar21) *
                            fStack_ec) ^ uRam0000000146aeee2c) & -(uint)(1e-08 <= fVar31) ^
                    uRam0000000146aeee2c);
  }
  *(float *)(param_1 + 0x10) = fVar38;
  *(float *)(param_1 + 0x14) = fVar22;
  *(float *)(param_1 + 0x18) = fVar16;
  *(float *)(param_1 + 0x1c) = fVar17;
  *(float *)(param_1 + 0x20) = local_b8;
  *(float *)(param_1 + 0x24) = fStack_b4;
  *(float *)(param_1 + 0x28) = fStack_b0;
  *(float *)(param_1 + 0x2c) = fVar45;
  *(float *)(param_1 + 0x30) = fVar2 * fVar3;
  *(float *)(param_1 + 0x34) = fVar4 * fVar5;
  *(float *)(param_1 + 0x38) = fVar6 * fVar7;
  *(float *)(param_1 + 0x3c) = fVar8 * auVar1._12_4_;
  auVar1._4_4_ = DAT_146531a94;
  auVar1._0_4_ = DAT_146531a90;
  auVar1._8_4_ = DAT_146531a98;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar1;
  return;
}



// FUNCTION 142246080 AccumulateAdditivePose body=99 status=ok
// SIG undefined AccumulateAdditivePose(void)

void FAnimationRuntime::AccumulateAdditivePose
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,int param_6)

{
  if (param_6 == 2) {
    AccumulateMeshSpaceRotationAdditiveToLocalPoseInternal();
  }
  else {
    FUN_1422460f0(param_1,param_2,param_5);
  }
  FBaseBlendedCurve<TMemStackAllocator<0>_>::Accumulate(param_3,param_4,param_5);
  FUN_141fac440(param_1);
  return;
}



// FUNCTION 1422460f0 FUN_1422460f0 body=820 status=ok
// SIG undefined FUN_1422460f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422460f0(longlong *param_1,longlong *param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
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
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
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
  
  fVar22 = fRam0000000146aeeeac;
  fVar21 = fRam0000000146aeeea8;
  fVar20 = fRam0000000146aeeea4;
  fVar19 = _DAT_146aeeea0;
  fVar30 = fRam0000000146aeee9c;
  fVar29 = fRam0000000146aeee98;
  fVar28 = fRam0000000146aeee94;
  fVar27 = _DAT_146aeee90;
  fVar26 = fRam0000000146aeee8c;
  fVar25 = fRam0000000146aeee88;
  fVar24 = fRam0000000146aeee84;
  fVar23 = _DAT_146aeee80;
  fVar18 = fRam0000000146aeee7c;
  fVar17 = fRam0000000146aeee78;
  fVar16 = fRam0000000146aeee74;
  fVar15 = _DAT_146aeee70;
  fVar10 = fRam0000000146aeee3c;
  fVar9 = fRam0000000146aeee38;
  fVar8 = fRam0000000146aeee34;
  fVar7 = _DAT_146aeee30;
  if (1e-05 < param_3) {
    uVar3 = *(uint *)(param_1 + 1);
    uVar33 = (ulonglong)uVar3;
    if (param_3 < 0.99999) {
      if (uVar3 != 0) {
        lVar32 = 0;
        do {
          lVar4 = *param_2;
          pfVar1 = (float *)(lVar32 + lVar4);
          pfVar2 = (float *)(lVar32 + 0x10 + lVar4);
          fVar15 = *pfVar2;
          fVar16 = pfVar2[1];
          fVar17 = pfVar2[2];
          fVar18 = pfVar2[3];
          pfVar2 = (float *)(lVar32 + 0x20 + lVar4);
          fVar19 = *pfVar2;
          fVar20 = pfVar2[1];
          fVar21 = pfVar2[2];
          fVar22 = pfVar2[3];
          lVar4 = *param_1;
          fVar44 = (float)(-(uint)(0.0 <= *pfVar1) &
                           ((uint)(0.0 - _DAT_146aeee20) ^ (uint)_DAT_146aeee20) ^
                          (uint)(0.0 - _DAT_146aeee20)) * (_DAT_146aeee50 - param_3) +
                   *pfVar1 * param_3;
          fVar45 = (float)(-(uint)(0.0 <= pfVar1[1]) &
                           ((uint)(0.0 - fRam0000000146aeee24) ^ (uint)fRam0000000146aeee24) ^
                          (uint)(0.0 - fRam0000000146aeee24)) * (fRam0000000146aeee54 - param_3) +
                   pfVar1[1] * param_3;
          fVar46 = (float)(-(uint)(0.0 <= pfVar1[2]) &
                           ((uint)(0.0 - fRam0000000146aeee28) ^ (uint)fRam0000000146aeee28) ^
                          (uint)(0.0 - fRam0000000146aeee28)) * (fRam0000000146aeee58 - param_3) +
                   pfVar1[2] * param_3;
          fVar47 = (float)(-(uint)(0.0 <= pfVar1[3]) &
                           ((uint)(0.0 - fRam0000000146aeee2c) ^ (uint)fRam0000000146aeee2c) ^
                          (uint)(0.0 - fRam0000000146aeee2c)) * (fRam0000000146aeee5c - param_3) +
                   pfVar1[3] * param_3;
          auVar34._0_4_ = fVar44 * fVar44 + fVar46 * fVar46;
          auVar34._4_4_ = fVar45 * fVar45 + fVar47 * fVar47;
          auVar34._8_4_ = fVar46 * fVar46 + fVar44 * fVar44;
          auVar34._12_4_ = fVar47 * fVar47 + fVar45 * fVar45;
          fVar37 = auVar34._4_4_ + auVar34._0_4_;
          fVar39 = auVar34._8_4_ + auVar34._4_4_;
          fVar41 = auVar34._12_4_ + auVar34._8_4_;
          fVar43 = auVar34._0_4_ + auVar34._12_4_;
          auVar35._4_4_ = fVar39;
          auVar35._0_4_ = fVar37;
          auVar35._8_4_ = fVar41;
          auVar35._12_4_ = fVar43;
          auVar35 = rsqrtps(auVar34,auVar35);
          fVar36 = auVar35._0_4_;
          fVar38 = auVar35._4_4_;
          fVar40 = auVar35._8_4_;
          fVar42 = auVar35._12_4_;
          fVar36 = (fVar7 - fVar36 * fVar36 * fVar37 * fVar7) * fVar36 + fVar36;
          fVar38 = (fVar8 - fVar38 * fVar38 * fVar39 * fVar8) * fVar38 + fVar38;
          fVar40 = (fVar9 - fVar40 * fVar40 * fVar41 * fVar9) * fVar40 + fVar40;
          fVar42 = (fVar10 - fVar42 * fVar42 * fVar43 * fVar10) * fVar42 + fVar42;
          pfVar1 = (float *)(lVar32 + lVar4);
          fVar11 = *pfVar1;
          fVar12 = pfVar1[1];
          fVar13 = pfVar1[2];
          fVar14 = pfVar1[3];
          fVar37 = (float)(((uint)(((fVar7 - fVar36 * fVar36 * fVar37 * fVar7) * fVar36 + fVar36) *
                                  fVar44) ^ (uint)_DAT_146aeee20) &
                           -(uint)(_DAT_146aeee40 <= fVar37) ^ (uint)_DAT_146aeee20);
          fVar39 = (float)(((uint)(((fVar8 - fVar38 * fVar38 * fVar39 * fVar8) * fVar38 + fVar38) *
                                  fVar45) ^ (uint)fRam0000000146aeee24) &
                           -(uint)(fRam0000000146aeee44 <= fVar39) ^ (uint)fRam0000000146aeee24);
          fVar41 = (float)(((uint)(((fVar9 - fVar40 * fVar40 * fVar41 * fVar9) * fVar40 + fVar40) *
                                  fVar46) ^ (uint)fRam0000000146aeee28) &
                           -(uint)(fRam0000000146aeee48 <= fVar41) ^ (uint)fRam0000000146aeee28);
          fVar42 = (float)(((uint)(((fVar10 - fVar42 * fVar42 * fVar43 * fVar10) * fVar42 + fVar42)
                                  * fVar47) ^ (uint)fRam0000000146aeee2c) &
                           -(uint)(fRam0000000146aeee4c <= fVar43) ^ (uint)fRam0000000146aeee2c);
          fVar36 = fVar11 * fVar41 * fRam0000000146aeee74;
          fVar38 = fVar14 * fVar41 * fRam0000000146aeee78;
          fVar40 = fVar13 * fVar41 * fRam0000000146aeee7c;
          pfVar1 = (float *)(lVar32 + lVar4);
          *pfVar1 = fVar14 * fVar37 * fVar27 + fVar42 * fVar11 + fVar13 * fVar39 * fVar23 +
                    fVar12 * fVar41 * _DAT_146aeee70;
          pfVar1[1] = fVar13 * fVar37 * fVar28 + fVar42 * fVar12 + fVar14 * fVar39 * fVar24 + fVar36
          ;
          pfVar1[2] = fVar12 * fVar37 * fVar29 + fVar42 * fVar13 + fVar11 * fVar39 * fVar25 + fVar38
          ;
          pfVar1[3] = fVar11 * fVar37 * fVar30 + fVar42 * fVar14 + fVar12 * fVar39 * fVar26 + fVar40
          ;
          pfVar1 = (float *)(lVar32 + 0x10 + lVar4);
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = (float *)(lVar32 + 0x10 + lVar4);
          *pfVar2 = (fVar15 - 0.0) * param_3 + 0.0 + *pfVar1;
          pfVar2[1] = (fVar16 - 0.0) * param_3 + 0.0 + fVar11;
          pfVar2[2] = (fVar17 - 0.0) * param_3 + 0.0 + fVar12;
          pfVar2[3] = (fVar18 - 0.0) * param_3 + 0.0 + fVar13;
          pfVar1 = (float *)(lVar32 + 0x20 + lVar4);
          fVar15 = pfVar1[1];
          fVar16 = pfVar1[2];
          fVar17 = pfVar1[3];
          pfVar2 = (float *)(lVar32 + 0x20 + lVar4);
          *pfVar2 = ((fVar19 - 0.0) * param_3 + 0.0 + 1.0) * *pfVar1;
          pfVar2[1] = ((fVar20 - 0.0) * param_3 + 0.0 + 1.0) * fVar15;
          pfVar2[2] = ((fVar21 - 0.0) * param_3 + 0.0 + 1.0) * fVar16;
          pfVar2[3] = ((fVar22 - 0.0) * param_3 + 0.0 + 0.0) * fVar17;
          lVar32 = lVar32 + 0x30;
          uVar33 = uVar33 - 1;
        } while (uVar33 != 0);
      }
    }
    else if (uVar3 != 0) {
      lVar32 = 0;
      do {
        lVar4 = *param_2;
        lVar5 = *param_1;
        pfVar1 = (float *)(lVar32 + lVar4);
        pfVar2 = (float *)(lVar32 + 0x20 + lVar4);
        fVar7 = *pfVar2;
        fVar8 = pfVar2[1];
        fVar9 = pfVar2[2];
        fVar10 = pfVar2[3];
        pfVar2 = (float *)(lVar32 + 0x10 + lVar4);
        fVar11 = *pfVar2;
        fVar12 = pfVar2[1];
        fVar13 = pfVar2[2];
        fVar14 = pfVar2[3];
        fVar36 = *pfVar1 * param_3;
        fVar38 = pfVar1[1] * param_3;
        fVar40 = pfVar1[2] * param_3;
        fVar42 = pfVar1[3] * param_3;
        auVar6._4_4_ = -(uint)(fVar42 * fVar42 < fVar20);
        auVar6._0_4_ = -(uint)(fVar42 * fVar42 < fVar19);
        auVar6._8_4_ = -(uint)(fVar42 * fVar42 < fVar21);
        auVar6._12_4_ = -(uint)(fVar42 * fVar42 < fVar22);
        iVar31 = movmskps((int)lVar4,auVar6);
        if (iVar31 != 0) {
          pfVar1 = (float *)(lVar32 + lVar5);
          fVar37 = *pfVar1;
          fVar39 = pfVar1[1];
          fVar41 = pfVar1[2];
          fVar43 = pfVar1[3];
          pfVar1 = (float *)(lVar32 + lVar5);
          *pfVar1 = fVar43 * fVar36 * fVar27 + fVar37 * fVar42 + fVar41 * fVar38 * fVar23 +
                    fVar39 * fVar40 * fVar15;
          pfVar1[1] = fVar41 * fVar36 * fVar28 + fVar39 * fVar42 + fVar43 * fVar38 * fVar24 +
                      fVar37 * fVar40 * fVar16;
          pfVar1[2] = fVar39 * fVar36 * fVar29 + fVar41 * fVar42 + fVar37 * fVar38 * fVar25 +
                      fVar43 * fVar40 * fVar17;
          pfVar1[3] = fVar37 * fVar36 * fVar30 + fVar43 * fVar42 + fVar39 * fVar38 * fVar26 +
                      fVar41 * fVar40 * fVar18;
        }
        pfVar1 = (float *)(lVar32 + 0x10 + lVar5);
        fVar36 = pfVar1[1];
        fVar38 = pfVar1[2];
        fVar40 = pfVar1[3];
        pfVar2 = (float *)(lVar32 + 0x20 + lVar5);
        fVar42 = *pfVar2;
        fVar37 = pfVar2[1];
        fVar39 = pfVar2[2];
        fVar41 = pfVar2[3];
        pfVar2 = (float *)(lVar32 + 0x10 + lVar5);
        *pfVar2 = *pfVar1 + fVar11 * param_3;
        pfVar2[1] = fVar36 + fVar12 * param_3;
        pfVar2[2] = fVar38 + fVar13 * param_3;
        pfVar2[3] = fVar40 + fVar14 * param_3;
        pfVar1 = (float *)(lVar32 + 0x20 + lVar5);
        *pfVar1 = (fVar7 * param_3 + 1.0) * fVar42;
        pfVar1[1] = (fVar8 * param_3 + 1.0) * fVar37;
        pfVar1[2] = (fVar9 * param_3 + 1.0) * fVar39;
        pfVar1[3] = (fVar10 * param_3 + 0.0) * fVar41;
        lVar32 = lVar32 + 0x30;
        uVar33 = uVar33 - 1;
      } while (uVar33 != 0);
    }
  }
  return;
}



// FUNCTION 142246430 AccumulateMeshSpaceRotationAdditiveToLocalPoseInternal body=510 status=ok
// SIG undefined AccumulateMeshSpaceRotationAdditiveToLocalPoseInternal(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FAnimationRuntime::AccumulateMeshSpaceRotationAdditiveToLocalPoseInternal
               (longlong *param_1,undefined8 param_2,float param_3)

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
  int local_res18 [2];
  int local_res20 [2];
  
  if (1e-05 < param_3) {
    local_res18[0] = 1;
    if (1 < (int)param_1[1]) {
      do {
        FBoneContainer::GetParentBoneIndex(param_1[2],local_res20,local_res18);
        lVar2 = *param_1;
        pfVar1 = (float *)(lVar2 + (longlong)local_res18[0] * 0x30);
        fVar3 = *pfVar1;
        fVar4 = pfVar1[1];
        fVar5 = pfVar1[2];
        fVar6 = pfVar1[3];
        pfVar1 = (float *)(lVar2 + (longlong)local_res20[0] * 0x30);
        fVar7 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar11 = pfVar1[3];
        fVar14 = fVar5 * fVar7 * fRam0000000146aeee94;
        fVar15 = fVar4 * fVar7 * fRam0000000146aeee98;
        fVar16 = fVar3 * fVar7 * fRam0000000146aeee9c;
        fVar10 = fVar6 * fVar8 * fRam0000000146aeee84;
        fVar12 = fVar3 * fVar8 * fRam0000000146aeee88;
        fVar13 = fVar4 * fVar8 * fRam0000000146aeee8c;
        fVar17 = fVar3 * fVar9 * fRam0000000146aeee74;
        fVar18 = fVar6 * fVar9 * fRam0000000146aeee78;
        fVar19 = fVar5 * fVar9 * fRam0000000146aeee7c;
        pfVar1 = (float *)(lVar2 + (longlong)local_res18[0] * 0x30);
        *pfVar1 = fVar6 * fVar7 * _DAT_146aeee90 + fVar11 * fVar3 + fVar5 * fVar8 * _DAT_146aeee80 +
                  fVar4 * fVar9 * _DAT_146aeee70;
        pfVar1[1] = fVar14 + fVar11 * fVar4 + fVar10 + fVar17;
        pfVar1[2] = fVar15 + fVar11 * fVar5 + fVar12 + fVar18;
        pfVar1[3] = fVar16 + fVar11 * fVar6 + fVar13 + fVar19;
        local_res18[0] = local_res18[0] + 1;
      } while (local_res18[0] < (int)param_1[1]);
    }
    FUN_1422460f0(param_1,param_2,param_3);
    local_res18[0] = (int)param_1[1];
    while (local_res18[0] = local_res18[0] + -1, 0 < local_res18[0]) {
      FBoneContainer::GetParentBoneIndex(param_1[2],local_res20,local_res18);
      lVar2 = *param_1;
      pfVar1 = (float *)(lVar2 + (longlong)local_res18[0] * 0x30);
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar1 = (float *)(lVar2 + (longlong)local_res20[0] * 0x30);
      fVar7 = pfVar1[3];
      fVar16 = -*pfVar1;
      fVar8 = -pfVar1[1];
      fVar9 = -pfVar1[2];
      fVar13 = fVar5 * fVar16 * fRam0000000146aeee94;
      fVar14 = fVar4 * fVar16 * fRam0000000146aeee98;
      fVar15 = fVar3 * fVar16 * fRam0000000146aeee9c;
      fVar11 = fVar6 * fVar8 * fRam0000000146aeee84;
      fVar10 = fVar3 * fVar8 * fRam0000000146aeee88;
      fVar12 = fVar4 * fVar8 * fRam0000000146aeee8c;
      fVar17 = fVar3 * fVar9 * fRam0000000146aeee74;
      fVar18 = fVar6 * fVar9 * fRam0000000146aeee78;
      fVar19 = fVar5 * fVar9 * fRam0000000146aeee7c;
      pfVar1 = (float *)(lVar2 + (longlong)local_res18[0] * 0x30);
      *pfVar1 = fVar6 * fVar16 * _DAT_146aeee90 + fVar7 * fVar3 + fVar5 * fVar8 * _DAT_146aeee80 +
                fVar4 * fVar9 * _DAT_146aeee70;
      pfVar1[1] = fVar13 + fVar7 * fVar4 + fVar11 + fVar17;
      pfVar1[2] = fVar14 + fVar7 * fVar5 + fVar10 + fVar18;
      pfVar1[3] = fVar15 + fVar7 * fVar6 + fVar12 + fVar19;
    }
  }
  return;
}



// FUNCTION 142246630 FUN_142246630 body=374 status=ok
// SIG undefined FUN_142246630(void)

void FUN_142246630(longlong param_1,char param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (((*(longlong *)(param_1 + 0x138) == 0) &&
      (lVar2 = UWorld::GetWorldSettings(param_1,0,1), lVar2 != 0)) &&
     (plVar4 = *(longlong **)(lVar2 + 0x468), plVar4 != (longlong *)0x0)) {
    uVar3 = (**(code **)(*plVar4 + 0x278))(plVar4,param_1);
    FUN_1428d7bc0(param_1,uVar3);
  }
  if (param_3 != '\0') {
    plVar4 = *(longlong **)(param_1 + 0x138);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001422466b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x2a8))(plVar4,param_1,param_2);
      return;
    }
    if (param_2 == '\x02') {
      plVar4 = (longlong *)UDynamicEntryBox::GetAllEntries(param_1);
      plVar7 = (longlong *)*plVar4;
      plVar4 = plVar7 + (int)plVar4[1];
      if (plVar7 != plVar4) {
        uVar8 = 0;
        do {
          lVar2 = *plVar7;
          plVar9 = *(longlong **)(lVar2 + 0x108);
          uVar11 = (longlong)*(int *)(lVar2 + 0x110) & 0x1fffffffffffffff;
          if (plVar9 + *(int *)(lVar2 + 0x110) < plVar9) {
            uVar11 = uVar8;
          }
          uVar10 = uVar8;
          if (uVar11 != 0) {
            do {
              if (*plVar9 != 0) {
                uVar1 = *(uint *)(*plVar9 + 0xc);
                uVar5 = uVar8;
                if ((int)uVar1 < (int)DAT_1469e91c4) {
                  uVar6 = uVar1 & 0xffff;
                  if ((int)uVar1 < 0) {
                    uVar1 = uVar1 + 0xffff;
                    uVar6 = uVar6 - 0x10000;
                  }
                  uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
                          (longlong)(int)uVar6 * 0x18;
                }
                *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) | 0x20000000;
              }
              plVar9 = plVar9 + 1;
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar11);
          }
          *(undefined4 *)(lVar2 + 0x110) = 0;
          if (*(int *)(lVar2 + 0x114) != 0) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(lVar2 + 0x108,0);
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar4);
      }
    }
  }
  return;
}



// FUNCTION 1422467b0 FUN_1422467b0 body=17 status=ok
// SIG undefined FUN_1422467b0(void)

void FUN_1422467b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 uStackX_8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *apcStack_78 [2];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  undefined4 uStack_38;
  
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 == 0) {
    return;
  }
  if ((*(byte *)(lVar1 + 0xba) & 4) != 0) {
    lVar3 = FUN_14233c7a0();
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x6b0);
      uStack_48 = 0;
      uStack_38 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x20,auStack_68);
      if (puVar4 != (undefined8 *)0x0) {
        uStack_98 = (undefined4)lVar3;
        uStack_94 = (undefined4)((ulonglong)lVar3 >> 0x20);
        uStack_90 = (undefined4)uVar2;
        uStack_8c = (undefined4)((ulonglong)uVar2 >> 0x20);
        *(undefined4 *)(puVar4 + 1) = uStack_98;
        *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_94;
        *(undefined4 *)(puVar4 + 2) = uStack_90;
        *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_8c;
        *puVar4 = &PTR_FUN_143f4d0b0;
        puVar4[3] = CONCAT44(param_3,param_2);
      }
      apcStack_78[0] = FUN_1423327e0;
      FUN_1422f8a30(apcStack_78,uStackX_8);
    }
  }
  return;
}


