// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14080dcb0 FUN_14080dcb0 body=70 status=ok
// SIG undefined FUN_14080dcb0(void)

longlong FUN_14080dcb0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14080dd00 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCustomMeshComponent::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x750) != 0) {
    FMemory::Free();
  }
  FUN_14080d1e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x760);
  }
  return param_1;
}



// FUNCTION 14080dd50 FUN_14080dd50 body=107 status=ok
// SIG undefined FUN_14080dd50(void)

longlong FUN_14080dd50(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x728) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FMemory::Free();
  }
  FUN_14080d1e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x750);
  }
  return param_1;
}



// FUNCTION 14080ddc0 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPaperSprite::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_1440facf0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14080de40 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 APaperCharacter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14080d1e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x740);
  }
  return param_1;
}



// FUNCTION 14080de80 FUN_14080de80 body=136 status=ok
// SIG undefined FUN_14080de80(void)

longlong FUN_14080de80(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x740);
  lVar1 = *(longlong *)(param_1 + 0x738);
  if (iVar2 != 0) {
    do {
      TArray<FSpriteDrawCallRecord,FDefaultAllocator>::
      ~TArray<FSpriteDrawCallRecord,FDefaultAllocator>(lVar1);
      lVar1 = lVar1 + 0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x738);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x750);
  }
  return param_1;
}



// FUNCTION 14080df10 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPaperTerrainMaterial::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FPaperTerrainMaterialRule,FDefaultAllocator>::
  ~TArray<FPaperTerrainMaterialRule,FDefaultAllocator>(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14080df50 FUN_14080df50 body=67 status=ok
// SIG undefined FUN_14080df50(void)

longlong FUN_14080df50(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x7d8);
  FUN_14080d280(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7f0);
  }
  return param_1;
}



// FUNCTION 14080dfa0 `scalar_deleting_destructor' body=163 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPaperTileLayer::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14080e050 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPaperTileMap::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14080e0b0 FUN_14080e0b0 body=73 status=ok
// SIG undefined FUN_14080e0b0(void)

longlong FUN_14080e0b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  FUN_14080d1e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x770);
  }
  return param_1;
}



// FUNCTION 14080e100 `scalar_deleting_destructor' body=208 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPaperTileSet::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x90);
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (iVar3 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar1 = *(longlong **)(param_1 + 0x88);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar3 = *(int *)(param_1 + 0x80);
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (iVar3 != 0) {
    lVar2 = lVar2 + 8;
    do {
      TArray<FSpriteGeometryShape,FDefaultAllocator>::
      ~TArray<FSpriteGeometryShape,FDefaultAllocator>(lVar2);
      lVar2 = lVar2 + 0x40;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar2 = *(longlong *)(param_1 + 0x78);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14080e1d0 FUN_14080e1d0 body=1035 status=ok
// SIG undefined FUN_14080e1d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14080e1d0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  undefined8 local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined4 local_e8;
  
  pcVar6 = (char *)*param_2;
  pcVar7 = pcVar6 + (longlong)*(int *)(param_2 + 1) * 0x30;
  if (pcVar6 != pcVar7) {
    do {
      if (*pcVar6 == '\0') {
        local_108 = *(undefined8 *)(pcVar6 + 0x20);
        (**(code **)(*param_1 + 0x10))(param_1,&local_res20,&local_108);
        (**(code **)(*param_1 + 0x18))(param_1,&local_res18,pcVar6 + 0x18);
        fVar16 = *(float *)(param_1 + 2);
        fVar8 = local_res1c * fVar16;
        fVar13 = local_res18 * fVar16;
        fVar14 = local_res20 * fVar16;
        fVar16 = local_res24 * fVar16;
        if (*(int *)((longlong)param_1 + 0x1c) == 2) {
          fVar9 = *(float *)(param_1 + 3);
          lVar2 = param_1[1];
          iVar1 = *(int *)(lVar2 + 0x40);
          fVar12 = fVar13 * DAT_146267224;
          local_100 = fVar14 * DAT_146267220 + fVar16 * DAT_146267230 + fVar9 * DAT_146267240;
          fVar11 = *(float *)((longlong)param_1 + 0x14);
          local_f8 = fVar14 * DAT_146267228 + fVar16 * DAT_146267238 + fVar9 * DAT_146267248;
          fStack_fc = fVar14 * DAT_146267224 + fVar16 * DAT_146267234 + fVar9 * DAT_146267244;
          fVar16 = fVar8 * DAT_146267230;
          fVar9 = fVar11 * DAT_146267240;
          fVar15 = fVar13 * DAT_146267220;
          fVar13 = fVar13 * DAT_146267228;
          fVar14 = fVar8 * DAT_146267234;
          fVar8 = fVar8 * DAT_146267238;
          fVar10 = fVar11 * DAT_146267244;
          fVar11 = fVar11 * DAT_146267248;
          *(int *)(lVar2 + 0x40) = iVar1 + 1;
          if (*(int *)(lVar2 + 0x44) < iVar1 + 1) {
            FUN_140822570(lVar2 + 0x38,iVar1);
          }
          puVar4 = (undefined8 *)((longlong)iVar1 * 0xe0 + *(longlong *)(lVar2 + 0x38));
          puVar5 = (undefined8 *)0x0;
          if (puVar4 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar4 + 1) = 0;
            puVar4[2] = 0;
            *(byte *)((longlong)puVar4 + 0x1c) = *(byte *)((longlong)puVar4 + 0x1c) | 1;
            *(undefined4 *)(puVar4 + 3) = 1;
            *(undefined4 *)(puVar4 + 4) = 6;
            puVar4[5] = puVar4;
            *(undefined1 *)(puVar4 + 6) = 3;
            puVar4[7] = 0;
            puVar4[9] = 0;
            puVar4[10] = 0;
            puVar4[0xb] = 0;
            *puVar4 = &PTR_FUN_1440fbd78;
            *(undefined4 *)(puVar4 + 0x14) = DAT_1464aa810;
            *(undefined4 *)((longlong)puVar4 + 0xa4) = DAT_1464aa814;
            *(undefined4 *)(puVar4 + 0x15) = DAT_1464aa818;
            *(undefined4 *)((longlong)puVar4 + 0xac) = DAT_1464aa81c;
            puVar4[0x16] = _DAT_1468b5d90;
            *(undefined4 *)(puVar4 + 0x17) = DAT_1468b5d98;
            *(undefined8 *)((longlong)puVar4 + 0xbc) = DAT_1468b5da0;
            uVar3 = DAT_1468b5da8;
            *(float *)(puVar4 + 0x19) = ABS(fVar15 + fVar16 + fVar9);
            *(float *)((longlong)puVar4 + 0xcc) = ABS(fVar12 + fVar14 + fVar10);
            *(float *)(puVar4 + 0x1a) = ABS(fVar13 + fVar8 + fVar11);
            *(undefined4 *)((longlong)puVar4 + 0xc4) = uVar3;
            puVar5 = puVar4;
          }
          puVar5[0x16] = CONCAT44(fStack_fc,local_100);
          *(float *)(puVar5 + 0x17) = local_f8;
          *(ulonglong *)((longlong)puVar5 + 0xbc) = (ulonglong)*(uint *)(pcVar6 + 0x28);
          *(undefined4 *)((longlong)puVar5 + 0xc4) = 0;
          local_e8 = 0;
        }
      }
      pcVar6 = pcVar6 + 0x30;
    } while (pcVar6 != pcVar7);
  }
  return;
}



// FUNCTION 14080e5e0 FUN_14080e5e0 body=625 status=ok
// SIG undefined FUN_14080e5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14080e5e0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  
  pcVar7 = (char *)*param_2;
  pcVar6 = pcVar7 + (longlong)*(int *)(param_2 + 1) * 0x30;
  if (pcVar7 != pcVar6) {
    do {
      if (*pcVar7 == '\x01') {
        (**(code **)(*param_1 + 0x10))(param_1,&local_res18,pcVar7 + 0x20);
        (**(code **)(*param_1 + 0x18))(param_1,&local_res10,pcVar7 + 0x18);
        fVar10 = *(float *)(param_1 + 2);
        fVar9 = local_res14 * fVar10;
        fVar8 = local_res10 * fVar10;
        fVar12 = local_res18 * fVar10;
        fVar10 = local_res1c * fVar10;
        if (*(int *)((longlong)param_1 + 0x1c) == 2) {
          lVar2 = param_1[1];
          iVar1 = *(int *)(lVar2 + 0x30);
          *(int *)(lVar2 + 0x30) = iVar1 + 1;
          if (*(int *)(lVar2 + 0x34) < iVar1 + 1) {
            TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow
                      (lVar2 + 0x28,iVar1);
          }
          puVar4 = (undefined8 *)((longlong)iVar1 * 0xb0 + *(longlong *)(lVar2 + 0x28));
          puVar5 = (undefined8 *)0x0;
          if (puVar4 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar4 + 1) = 0;
            puVar4[2] = 0;
            *(byte *)((longlong)puVar4 + 0x1c) = *(byte *)((longlong)puVar4 + 0x1c) | 1;
            *(undefined4 *)(puVar4 + 3) = 0;
            *(undefined4 *)(puVar4 + 4) = 6;
            puVar4[5] = puVar4;
            *(undefined1 *)(puVar4 + 6) = 3;
            puVar4[7] = 0;
            puVar4[9] = 0;
            puVar4[10] = 0;
            puVar4[0xb] = 0;
            *puVar4 = &PTR_FUN_1440fbd88;
            puVar4[0x14] = _DAT_1468b5d90;
            uVar3 = DAT_1468b5d98;
            *(float *)((longlong)puVar4 + 0xac) = (ABS(fVar9) + ABS(fVar8)) * 0.25;
            *(undefined4 *)(puVar4 + 0x15) = uVar3;
            puVar5 = puVar4;
          }
          fVar8 = *(float *)(param_1 + 3);
          fVar11 = fVar10 * DAT_146267238;
          fVar13 = fVar12 * DAT_146267228;
          fVar9 = fVar8 * DAT_146267248;
          puVar5[0x14] = CONCAT44(fVar10 * DAT_146267234 + fVar12 * DAT_146267224 +
                                  fVar8 * DAT_146267244,
                                  fVar10 * DAT_146267230 + fVar12 * DAT_146267220 +
                                  fVar8 * DAT_146267240);
          *(float *)(puVar5 + 0x15) = fVar11 + fVar13 + fVar9;
        }
      }
      pcVar7 = pcVar7 + 0x30;
    } while (pcVar7 != pcVar6);
  }
  return;
}



// FUNCTION 14080e860 FUN_14080e860 body=49 status=ok
// SIG undefined FUN_14080e860(void)

void FUN_14080e860(longlong *param_1)

{
  (**(code **)(*param_1 + 0x928))();
  return;
}



// FUNCTION 14080e8a0 FUN_14080e8a0 body=394 status=ok
// SIG undefined FUN_14080e8a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_14080e8a0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             char param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
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
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined4 *)(param_1 + 0x730);
  if (param_5 == '\0') {
    local_a8 = *param_2;
    uStack_a4 = param_2[1];
    uStack_a0 = param_2[2];
    uStack_9c = param_2[3];
    puVar7 = &local_78;
    local_68 = *(undefined8 *)(param_2 + 4);
    uStack_60 = *(undefined8 *)(param_2 + 6);
    local_58 = *(undefined8 *)(param_2 + 8);
    uStack_50 = *(undefined8 *)(param_2 + 10);
    local_78 = local_a8;
    uStack_74 = uStack_a4;
    uStack_70 = uStack_a0;
    uStack_6c = uStack_9c;
  }
  else {
    puVar7 = (undefined4 *)FUN_14162bcf0(param_2,&local_78,param_1 + 0x210);
    local_a8 = *puVar7;
    uStack_a4 = puVar7[1];
    uStack_a0 = puVar7[2];
    uStack_9c = puVar7[3];
  }
  local_98 = puVar7[4];
  uStack_94 = puVar7[5];
  uStack_90 = puVar7[6];
  uStack_8c = puVar7[7];
  local_88 = puVar7[8];
  uStack_84 = puVar7[9];
  uStack_80 = puVar7[10];
  uStack_7c = puVar7[0xb];
  iVar2 = *(int *)(param_1 + 0x730);
  *(int *)(param_1 + 0x730) = iVar2 + 1;
  if (*(int *)(param_1 + 0x734) < iVar2 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x728,iVar2);
  }
  uVar3 = _DAT_1464aa7d8;
  puVar8 = (undefined8 *)((longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x728));
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar8 = _DAT_1464aa7d0;
    puVar8[1] = uVar3;
    uVar3 = _DAT_1464aa7e8;
    puVar8[2] = _DAT_1464aa7e0;
    puVar8[3] = uVar3;
    uVar6 = uRam00000001464aa7fc;
    uVar5 = DAT_1464aa7f8;
    uVar4 = DAT_1464aa7f4;
    *(undefined4 *)(puVar8 + 4) = DAT_1464aa7f0;
    *(undefined4 *)((longlong)puVar8 + 0x24) = uVar4;
    *(undefined4 *)(puVar8 + 5) = uVar5;
    *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar6;
    uVar3 = uRam00000001464aa808;
    puVar8[6] = _DAT_1464aa800;
    puVar8[7] = uVar3;
    puVar8[8] = 0;
    *(undefined4 *)(puVar8 + 9) = DAT_1464aa730;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = 0xffffffff;
  }
  local_c8 = FLinearColor::ToFColor(param_6,local_b8,0);
  local_d8 = param_3;
  local_d0 = param_4;
  FUN_1408240c0(param_1,puVar8,uVar1,&local_a8);
  FUN_1423424e0(param_1);
  FUN_142252d00(param_1);
  return uVar1;
}



// FUNCTION 14080ea30 AddNewLayer body=344 status=ok
// SIG undefined AddNewLayer(void)

longlong UPaperTileMap::AddNewLayer(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  void *_Src;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = UPaperTileLayer::GetPrivateStaticClass();
  lVar6 = FUN_1417985e0(uVar5,param_1,0,0,0,0,0,0,0);
  *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 8;
  UPaperTileLayer::DestructiveAllocateMap
            (lVar6,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  uVar5 = GenerateNewLayerName(local_38,param_1);
  FText::operator=(lVar6 + 0x28,uVar5);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x80) <= param_2)) {
    iVar3 = *(int *)(param_1 + 0x80);
    *(int *)(param_1 + 0x80) = iVar3 + 1;
    if (*(int *)(param_1 + 0x84) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x78,iVar3);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar3 * 8) = lVar6;
  }
  else {
    plVar2 = (longlong *)(param_1 + 0x78);
    iVar3 = *(int *)(param_1 + 0x80);
    *(int *)(param_1 + 0x80) = iVar3 + 1;
    if (*(int *)(param_1 + 0x84) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar3);
    }
    _Src = (void *)(*plVar2 + (longlong)param_2 * 8);
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar3 - param_2) << 3);
    *(longlong *)((longlong)param_2 * 8 + *plVar2) = lVar6;
  }
  return lVar6;
}



// FUNCTION 14080eb90 FUN_14080eb90 body=95 status=ok
// SIG undefined FUN_14080eb90(void)

undefined8 FUN_14080eb90(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[0xec];
  if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x20) == param_1)) {
    uVar2 = UPaperTileMap::AddNewLayer(lVar1,0xffffffff);
    FUN_1423424e0(param_1);
    FUN_14234b040(param_1);
    (**(code **)(*param_1 + 0x4b8))(param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14080ebf0 FUN_14080ebf0 body=1067 status=ok
// SIG undefined FUN_14080ebf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14080ebf0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  float *pfVar13;
  float *pfVar14;
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
  ulonglong local_res8;
  float *local_98;
  undefined8 local_90;
  
  local_98 = (float *)0x0;
  local_90 = 0;
  FSpriteGeometryCollection::Triangulate(param_2,&local_98,0);
  pfVar14 = local_98;
  iVar1 = (int)local_90;
  pfVar13 = local_98 + (longlong)(int)local_90 * 2;
  for (pfVar9 = local_98; pfVar9 != pfVar13; pfVar9 = pfVar9 + 2) {
    fVar24 = *(float *)(param_1 + 2);
    pfVar7 = (float *)(**(code **)(*param_1 + 0x10))(param_1,&local_res8,pfVar9);
    fVar22 = pfVar7[1];
    *pfVar9 = fVar24 * *pfVar7;
    pfVar9[1] = fVar24 * fVar22;
  }
  if (*(int *)((longlong)param_1 + 0x1c) == 2) {
    fVar24 = *(float *)((longlong)param_1 + 0x14);
    lVar2 = param_1[1];
    uVar8 = iVar1 / 3 + (iVar1 >> 0x1f) +
            (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f);
    fVar22 = DAT_146267240 * 0.5 * fVar24;
    fVar23 = DAT_146267244 * 0.5 * fVar24;
    fVar24 = DAT_146267248 * 0.5 * fVar24;
    if (0 < (int)uVar8) {
      local_res8 = (ulonglong)uVar8;
      do {
        puVar10 = (undefined8 *)0x0;
        iVar1 = *(int *)(lVar2 + 0x60);
        *(int *)(lVar2 + 0x60) = iVar1 + 1;
        if (*(int *)(lVar2 + 100) < iVar1 + 1) {
          TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(lVar2 + 0x58,iVar1);
        }
        puVar12 = (undefined8 *)((longlong)iVar1 * 0xd0 + *(longlong *)(lVar2 + 0x58));
        if (puVar12 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar12 + 1) = 0;
          puVar12[2] = 0;
          *(byte *)((longlong)puVar12 + 0x1c) = *(byte *)((longlong)puVar12 + 0x1c) | 1;
          *(undefined4 *)(puVar12 + 3) = 3;
          *(undefined4 *)(puVar12 + 4) = 6;
          puVar12[5] = puVar12;
          *(undefined1 *)(puVar12 + 6) = 3;
          puVar12[7] = 0;
          puVar12[9] = 0;
          puVar12[10] = 0;
          puVar12[0xb] = 0;
          *puVar12 = &PTR_FUN_1440fbd68;
          puVar12[0xc] = 0;
          puVar12[0xd] = 0;
          *(undefined8 *)((longlong)puVar12 + 0x7c) = _DAT_1468b5d90;
          uVar4 = DAT_1468b5d98;
          *(undefined4 *)((longlong)puVar12 + 0x84) = DAT_1468b5d98;
          puVar12[0xe] = *(undefined8 *)((longlong)puVar12 + 0x7c);
          *(undefined4 *)(puVar12 + 0xf) = uVar4;
          *(undefined1 *)(puVar12 + 0x11) = 0;
          uVar3 = uRam00000001468b5b78;
          puVar12[0x12] = _DAT_1468b5b70;
          puVar12[0x13] = uVar3;
          uVar3 = uRam00000001468b5b88;
          puVar12[0x14] = _DAT_1468b5b80;
          puVar12[0x15] = uVar3;
          uVar6 = uRam00000001468b5b9c;
          uVar5 = uRam00000001468b5b98;
          uVar4 = uRam00000001468b5b94;
          *(undefined4 *)(puVar12 + 0x16) = _DAT_1468b5b90;
          *(undefined4 *)((longlong)puVar12 + 0xb4) = uVar4;
          *(undefined4 *)(puVar12 + 0x17) = uVar5;
          *(undefined4 *)((longlong)puVar12 + 0xbc) = uVar6;
          puVar12[0x18] = 0;
          puVar12[0x19] = 0;
          puVar10 = puVar12;
        }
        *(undefined4 *)(puVar10 + 0xd) = 0;
        if (*(int *)((longlong)puVar10 + 0x6c) != 6) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(puVar10 + 0xc,6);
        }
        lVar11 = 3;
        pfVar13 = pfVar14;
        do {
          fVar18 = *(float *)(param_1 + 3);
          iVar1 = *(int *)(puVar10 + 0xd);
          fVar16 = pfVar13[1];
          fVar20 = *pfVar13;
          fVar21 = fVar20 * DAT_146267224;
          fVar19 = fVar20 * DAT_146267228;
          fVar17 = fVar16 * DAT_146267238;
          fVar15 = fVar16 * DAT_146267234;
          fVar20 = fVar20 * DAT_146267220 + fVar16 * DAT_146267230 + fVar18 * DAT_146267240;
          fVar16 = fVar18 * DAT_146267244;
          fVar18 = fVar18 * DAT_146267248;
          *(int *)(puVar10 + 0xd) = iVar1 + 1;
          fVar18 = fVar19 + fVar17 + fVar18;
          fVar16 = fVar21 + fVar15 + fVar16;
          if (*(int *)((longlong)puVar10 + 0x6c) < iVar1 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(puVar10 + 0xc,iVar1);
          }
          pfVar9 = (float *)(puVar10[0xc] + (longlong)iVar1 * 0xc);
          if (pfVar9 != (float *)0x0) {
            *pfVar9 = fVar20 - fVar22;
            pfVar9[1] = fVar16 - fVar23;
            pfVar9[2] = fVar18 - fVar24;
          }
          iVar1 = *(int *)(puVar10 + 0xd);
          *(int *)(puVar10 + 0xd) = iVar1 + 1;
          if (*(int *)((longlong)puVar10 + 0x6c) < iVar1 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(puVar10 + 0xc,iVar1);
          }
          pfVar9 = (float *)(puVar10[0xc] + (longlong)iVar1 * 0xc);
          if (pfVar9 != (float *)0x0) {
            *pfVar9 = fVar20 + fVar22;
            pfVar9[1] = fVar23 + fVar16;
            pfVar9[2] = fVar18 + fVar24;
          }
          lVar11 = lVar11 + -1;
          pfVar13 = pfVar13 + 2;
        } while (lVar11 != 0);
        FUN_142321610(puVar10);
        local_res8 = local_res8 - 1;
        pfVar14 = pfVar14 + 6;
      } while (local_res8 != 0);
      local_res8 = 0;
      pfVar14 = local_98;
    }
  }
  if (pfVar14 != (float *)0x0) {
    FMemory::Free(pfVar14);
  }
  return;
}



// FUNCTION 14080f090 Append body=112 status=ok
// SIG undefined Append(void)

void TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::Append
               (longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x70) = iVar1 + param_3;
  if (*(int *)(param_1 + 0x74) < iVar1 + param_3) {
    ResizeGrow(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar2 = param_1;
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(lVar2 + (longlong)iVar1 * 0x10),param_2,(longlong)param_3 << 4);
  return;
}



// FUNCTION 14080f100 ArePolygonsValid body=625 status=ok
// SIG undefined ArePolygonsValid(void)

undefined8 PaperGeomTools::ArePolygonsValid(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  char cVar11;
  char cVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  iVar5 = *(int *)(param_1 + 1);
  if (0 < iVar5) {
    plVar19 = (longlong *)*param_1;
    lVar15 = 0;
    do {
      cVar11 = IsPolygonWindingCCW();
      lVar15 = lVar15 + 1;
      plVar10 = plVar19;
      for (lVar18 = lVar15; lVar18 < iVar5; lVar18 = lVar18 + 1) {
        if ((cVar11 == '\0') || (cVar12 = IsPolygonWindingCCW(), cVar12 == '\0')) {
          iVar6 = (int)plVar19[1];
          lVar17 = 0;
          if (0 < iVar6) {
            lVar8 = *plVar19;
            iVar14 = 1;
            iVar7 = (int)plVar10[3];
            do {
              fVar1 = *(float *)(lVar8 + lVar17 * 8);
              fVar2 = *(float *)(lVar8 + 4 + lVar17 * 8);
              lVar13 = 0;
              fVar24 = *(float *)(lVar8 + (longlong)(iVar14 % iVar6) * 8) - fVar1;
              fVar25 = *(float *)(lVar8 + 4 + (longlong)(iVar14 % iVar6) * 8) - fVar2;
              if (0 < iVar7) {
                lVar9 = plVar10[2];
                iVar16 = 1;
                do {
                  fVar3 = *(float *)(lVar9 + 4 + lVar13 * 8);
                  fVar4 = *(float *)(lVar9 + lVar13 * 8);
                  fVar22 = *(float *)(lVar9 + 4 + (longlong)(iVar16 % iVar7) * 8) - fVar3;
                  fVar20 = *(float *)(lVar9 + (longlong)(iVar16 % iVar7) * 8) - fVar4;
                  fVar23 = fVar22 * fVar24 - fVar20 * fVar25;
                  fVar21 = fVar20 * fVar25 - fVar22 * fVar24;
                  if ((fVar23 != 0.0) && (fVar21 != 0.0)) {
                    fVar23 = (((fVar2 * fVar20 - fVar20 * fVar3) - fVar1 * fVar22) + fVar22 * fVar4)
                             / fVar23;
                    fVar21 = (((fVar3 * fVar24 - fVar2 * fVar24) - fVar25 * fVar4) + fVar1 * fVar25)
                             / fVar21;
                    if ((0.0 <= fVar23) && (((fVar23 <= 1.0 && (0.0 <= fVar21)) && (fVar21 <= 1.0)))
                       ) {
                      return 0;
                    }
                  }
                  iVar16 = iVar16 + 1;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < iVar7);
              }
              iVar14 = iVar14 + 1;
              lVar17 = lVar17 + 1;
            } while (lVar17 < iVar6);
          }
        }
        plVar10 = plVar10 + 2;
      }
      plVar19 = plVar19 + 2;
    } while (lVar15 < iVar5);
  }
  return 1;
}



// FUNCTION 14080f380 FUN_14080f380 body=906 status=ok
// SIG undefined FUN_14080f380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14080f380(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined **local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  float local_80;
  float local_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar9 = *(uint *)(param_1 + 0x48);
  if ((uVar9 & 2) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    fVar13 = (float)*(int *)(lVar3 + 0x30);
    fVar14 = (float)*(int *)(lVar3 + 0x34);
    if ((uVar9 & 8) != 0) {
      param_3 = *(undefined4 *)(param_1 + 0x50);
    }
    if ((uVar9 & 4) == 0) {
      local_c4 = *(undefined4 *)(lVar3 + 0x88);
    }
    else {
      local_c4 = *(undefined4 *)(param_1 + 0x4c);
    }
    local_d8 = &PTR_FUN_1440feaf0;
    uVar11 = 0;
    local_c8 = 1.0 / *(float *)(lVar3 + 0x38);
    local_bc = (uint)*(byte *)(lVar3 + 0x8c);
    uVar9 = uVar11;
    uVar12 = uVar11;
    local_d0 = param_2;
    local_c0 = param_3;
    if (0 < *(int *)(param_1 + 0x44)) {
      do {
        iVar4 = *(int *)(param_1 + 0x40);
        uVar10 = uVar11;
        if (0 < iVar4) {
          do {
            if (((((int)uVar10 < 0) || (iVar4 <= (int)uVar10)) || (0 < (int)uVar12)) ||
               (*(int *)(param_1 + 0x44) <= (int)uVar9)) {
              local_108 = 0;
              plVar6 = &local_108;
              local_100 = 0xffffffff;
            }
            else {
              plVar1 = (longlong *)
                       (*(longlong *)(param_1 + 0x70) +
                       (longlong)(int)(iVar4 * uVar9 + uVar10) * 0x10);
              plVar6 = &local_f8;
              local_f8 = *plVar1;
              lStack_f0 = plVar1[1];
            }
            local_e8 = *plVar6;
            lStack_e0 = plVar6[1];
            if (((local_e8 != 0) && ((uint)lStack_e0 != 0xffffffff)) &&
               (((int)((uint)lStack_e0 & 0x1fffffff) < *(int *)(local_e8 + 0x80) &&
                (lVar8 = (ulonglong)((uint)lStack_e0 & 0x1fffffff) * 0x40 +
                         *(longlong *)(local_e8 + 0x78), lVar8 != 0)))) {
              uVar7 = (ulonglong)((uint)lStack_e0 >> 0x1d);
              bVar2 = *(byte *)(lVar3 + 0x8d);
              if (bVar2 == 1) {
                local_80 = (float)(int)uVar10 * fVar13 * 0.5 - (float)(int)uVar9 * fVar13 * 0.5;
                local_7c = (float)(int)uVar10 * fVar14 * -0.5 - (float)(int)uVar9 * fVar14 * 0.5;
              }
              else if ((bVar2 < 2) || (3 < bVar2)) {
                local_80 = (float)(int)uVar10 * fVar13;
                local_7c = (float)(int)uVar12 * fVar14;
              }
              else {
                uVar5 = uVar9 & 0x80000001;
                if ((int)uVar5 < 0) {
                  uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
                }
                local_80 = (float)(int)uVar5 * fVar13 * 0.5 + (float)(int)uVar10 * fVar13;
                local_7c = fVar14 * 0.5 * (float)(int)uVar12;
              }
              local_b8 = *(undefined8 *)(&DAT_14685e430 + uVar7 * 0x30);
              uStack_b0 = *(undefined8 *)(uVar7 * 0x30 + 0x14685e438);
              lVar8 = lVar8 + 8;
              local_a8 = *(undefined1 (*) [16])(&DAT_14685e440 + uVar7 * 0x30);
              local_98 = *(undefined1 (*) [16])(&DAT_14685e450 + uVar7 * 0x30);
              FUN_14080e1d0(&local_d8,lVar8);
              FUN_14080ebf0(&local_d8,lVar8);
              FUN_14080e5e0(&local_d8,lVar8);
            }
            iVar4 = *(int *)(param_1 + 0x40);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < iVar4);
        }
        uVar9 = uVar9 + 1;
        uVar12 = uVar12 - 1;
      } while ((int)uVar9 < *(int *)(param_1 + 0x44));
    }
  }
  return;
}



// FUNCTION 14080f710 BreakTile body=62 status=ok
// SIG undefined BreakTile(void)

void UTileMapBlueprintLibrary::BreakTile
               (undefined8 *param_1,uint *param_2,undefined8 *param_3,byte *param_4,byte *param_5,
               byte *param_6)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  *param_2 = uVar1 & 0x1fffffff;
  *param_3 = *param_1;
  bVar2 = (byte)(uVar1 >> 0x18);
  *param_4 = bVar2 >> 7;
  *param_5 = bVar2 >> 6 & 1;
  *param_6 = bVar2 >> 5 & 1;
  return;
}



// FUNCTION 14080f750 BuildFromSprite body=202 status=ok
// SIG undefined BuildFromSprite(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FSpriteDrawCallRecord::BuildFromSprite(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *_Dst;
  
  if (param_2 != 0) {
    *param_1 = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 1) = DAT_1468b5d98;
    lVar2 = *(longlong *)(param_2 + 0x70);
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(param_2 + 0x48);
    }
    param_1[2] = lVar2;
    TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::operator=<FDefaultAllocator>
              (param_1 + 3,param_2 + 0x50);
    *(undefined4 *)(param_1 + 9) = DAT_1464aa730;
    iVar1 = *(int *)(param_2 + 0xb8);
    _Src = *(void **)(param_2 + 0xb0);
    *(int *)(param_1 + 0x18) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
      return;
    }
    TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeForCopy(param_1 + 10,iVar1);
    _Dst = (undefined8 *)param_1[0x16];
    if ((undefined8 *)param_1[0x16] == (undefined8 *)0x0) {
      _Dst = param_1 + 10;
    }
    ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 << 4);
  }
  return;
}



// FUNCTION 14080f820 FUN_14080f820 body=568 status=ok
// SIG undefined FUN_14080f820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14080f820(longlong param_1,undefined4 *param_2,longlong param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  char local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_6c;
  float local_64;
  float local_60;
  undefined1 local_5c [84];
  
  if (*(longlong *)(param_1 + 0x718) == 0) {
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    uVar3 = *(undefined4 *)(param_3 + 0x14);
    uVar4 = *(undefined4 *)(param_3 + 0x18);
    param_2[6] = 0;
    *param_2 = uVar2;
    param_2[1] = uVar3;
    uVar5 = _DAT_1468b5d90;
    param_2[2] = uVar4;
    uVar2 = DAT_1468b5d98;
    *(undefined8 *)(param_2 + 3) = uVar5;
    param_2[5] = uVar2;
  }
  else {
    uVar5 = UPaperFlipbook::GetRenderBounds(*(longlong *)(param_1 + 0x718),&local_78);
    FBoxSphereBounds::TransformBy(uVar5,&local_b8,param_3);
    if (*(longlong *)(param_1 + 0x748) != 0) {
      FUN_1423036c0(*(longlong *)(param_1 + 0x748) + 0x28,&local_98,param_3,0);
      if (local_80 != '\0') {
        local_84 = local_84 - local_90;
        local_88 = local_88 - local_94;
        local_8c = local_8c - local_98;
        local_64 = local_84 * 0.5;
        local_70 = local_64 + local_90;
        local_6c = CONCAT44(local_88 * 0.5,local_8c * 0.5);
        local_78 = CONCAT44(local_88 * 0.5 + local_94,local_8c * 0.5 + local_98);
        local_60 = SQRT((local_8c * local_8c + local_88 * local_88 + local_84 * local_84) * 0.25);
        puVar6 = (undefined8 *)Union(local_5c,&local_b8,&local_78);
        local_b8 = *puVar6;
        uStack_b0 = puVar6[1];
        local_a8 = puVar6[2];
        local_a0 = *(float *)(puVar6 + 3);
      }
    }
    fVar1 = *(float *)(param_1 + 0x364);
    *param_2 = (undefined4)local_b8;
    param_2[1] = local_b8._4_4_;
    param_2[2] = (undefined4)uStack_b0;
    param_2[3] = uStack_b0._4_4_ * fVar1;
    *(ulonglong *)(param_2 + 4) = CONCAT44(local_a8._4_4_ * fVar1,(float)local_a8 * fVar1);
    param_2[6] = local_a0 * fVar1;
  }
  return param_2;
}



// FUNCTION 14080fa60 FUN_14080fa60 body=1614 status=ok
// SIG undefined FUN_14080fa60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14080fa60(longlong param_1,undefined8 *param_2,float *param_3)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188;
  float fStack_184;
  float local_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float local_160;
  float local_150;
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
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  bVar1 = false;
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  local_188 = 0.0;
  fStack_184 = 0.0;
  local_198 = 0;
  uStack_190 = 0;
  local_180 = 0.0;
  if (0 < *(int *)(param_1 + 0x730)) {
    fVar9 = *param_3;
    fVar10 = param_3[1];
    fVar8 = param_3[2];
    fVar6 = param_3[3];
    fVar26 = param_3[4];
    fVar27 = param_3[5];
    fVar28 = param_3[6];
    pfVar2 = *(float **)(param_1 + 0x728);
    fVar4 = fVar10 + fVar10;
    fVar5 = fVar8 + fVar8;
    fVar12 = fVar9 * (fVar9 + fVar9);
    pfVar3 = pfVar2 + (longlong)*(int *)(param_1 + 0x730) * 0x14;
    fVar11 = fVar6 * (fVar9 + fVar9);
    fVar7 = param_3[8];
    fVar24 = param_3[9];
    fVar25 = param_3[10];
    fVar21 = (fVar6 * fVar5 + fVar9 * fVar4) * fVar7;
    fVar22 = (fVar11 + fVar10 * fVar5) * fVar24;
    fVar23 = (fVar6 * fVar4 + fVar9 * fVar5) * fVar25;
    fVar13 = fVar24 * (fVar9 * fVar4 - fVar6 * fVar5);
    fVar11 = fVar25 * (fVar10 * fVar5 - fVar11);
    fVar14 = fVar7 * (fVar9 * fVar5 - fVar6 * fVar4);
    fStack_10c = fRam000000014685e32c;
    fVar6 = (float)((uint)((_DAT_14685e320 - (fVar8 * fVar5 + fVar10 * fVar4)) * fVar7) &
                   _DAT_14685e330);
    fVar8 = (float)((uint)((fRam000000014685e324 - (fVar8 * fVar5 + fVar12)) * fVar24) &
                   uRam000000014685e334);
    fVar9 = (float)((uint)((fRam000000014685e328 - (fVar10 * fVar4 + fVar12)) * fVar25) &
                   uRam000000014685e338);
    fVar10 = (float)((uint)((fRam000000014685e32c - (fVar12 + fVar12)) * param_3[0xb]) &
                    uRam000000014685e33c);
    if (pfVar2 != pfVar3) {
      fVar7 = 0.0;
      fVar24 = fVar10;
      fVar25 = fVar10;
      fVar4 = fRam000000014685e32c;
      local_148 = fVar23;
      fStack_144 = fVar11;
      fStack_140 = fVar9;
      fStack_13c = fVar10;
      local_138 = fVar6;
      fStack_134 = fVar21;
      fStack_130 = fVar14;
      fStack_12c = fVar10;
      local_128 = fVar13;
      fStack_124 = fVar8;
      fStack_120 = fVar22;
      fStack_11c = fVar10;
      local_118 = fVar26;
      fStack_114 = fVar27;
      fStack_110 = fVar28;
      fVar5 = local_188;
      fVar12 = fStack_184;
      do {
        if (*(longlong *)(pfVar2 + 0x10) != 0) {
          UPaperSprite::GetRenderBounds(*(longlong *)(pfVar2 + 0x10),&local_1b8);
          fVar15 = *pfVar2;
          fVar16 = pfVar2[1];
          fVar17 = pfVar2[2];
          fVar18 = pfVar2[3];
          local_108 = fVar16 * fVar13 + fVar15 * fVar6 + fVar17 * fVar23 + fVar18 * fVar26;
          fStack_104 = fVar16 * fVar8 + fVar15 * fVar21 + fVar17 * fVar11 + fVar18 * fVar27;
          fStack_100 = fVar16 * fVar22 + fVar15 * fVar14 + fVar17 * fVar9 + fVar18 * fVar28;
          fStack_fc = fVar16 * fVar25 + fVar15 * fVar24 + fVar17 * fVar10 + fVar18 * fVar4;
          fVar15 = pfVar2[4];
          fVar16 = pfVar2[5];
          fVar17 = pfVar2[6];
          fVar18 = pfVar2[7];
          local_f8 = fVar16 * fVar13 + fVar15 * fVar6 + fVar17 * fVar23 + fVar18 * fVar26;
          fStack_f4 = fVar16 * fVar8 + fVar15 * fVar21 + fVar17 * fVar11 + fVar18 * fVar27;
          fStack_f0 = fVar16 * fVar22 + fVar15 * fVar14 + fVar17 * fVar9 + fVar18 * fVar28;
          fStack_ec = fVar16 * fVar25 + fVar15 * fVar24 + fVar17 * fVar10 + fVar18 * fVar4;
          fVar15 = pfVar2[8];
          fVar16 = pfVar2[9];
          fVar17 = pfVar2[10];
          fVar18 = pfVar2[0xb];
          local_e8 = fVar16 * fVar13 + fVar15 * fVar6 + fVar17 * fVar23 + fVar18 * fVar26;
          fStack_e4 = fVar16 * fVar8 + fVar15 * fVar21 + fVar17 * fVar11 + fVar18 * fVar27;
          fStack_e0 = fVar16 * fVar22 + fVar15 * fVar14 + fVar17 * fVar9 + fVar18 * fVar28;
          fStack_dc = fVar16 * fVar25 + fVar15 * fVar24 + fVar17 * fVar10 + fVar18 * fVar4;
          fVar15 = pfVar2[0xc];
          fVar16 = pfVar2[0xd];
          fVar17 = pfVar2[0xe];
          fVar18 = pfVar2[0xf];
          local_d8 = fVar16 * fVar13 + fVar15 * fVar6 + fVar17 * fVar23 + fVar18 * fVar26;
          fStack_d4 = fVar16 * fVar8 + fVar15 * fVar21 + fVar17 * fVar11 + fVar18 * fVar27;
          fStack_d0 = fVar16 * fVar22 + fVar15 * fVar14 + fVar17 * fVar9 + fVar18 * fVar28;
          fStack_cc = fVar16 * fVar25 + fVar15 * fVar24 + fVar17 * fVar10 + fVar18 * fVar4;
          FBoxSphereBounds::TransformBy(&local_1b8,&local_178,&local_108);
          if (bVar1) {
            fVar8 = (float)local_198 - uStack_190._4_4_;
            fVar9 = local_198._4_4_ - fVar19;
            fVar10 = (float)uStack_190 - fVar20;
            uStack_190._4_4_ = uStack_190._4_4_ + (float)local_198;
            fVar19 = fVar19 + local_198._4_4_;
            fVar20 = fVar20 + (float)uStack_190;
            fVar15 = fVar8;
            if (uStack_190._4_4_ < fVar8) {
              fVar15 = uStack_190._4_4_;
            }
            fVar16 = fVar9;
            if (fVar19 < fVar9) {
              fVar16 = fVar19;
            }
            fVar17 = fVar10;
            if (fVar20 < fVar10) {
              fVar17 = fVar20;
            }
            if (fVar8 < uStack_190._4_4_) {
              fVar8 = uStack_190._4_4_;
            }
            if (fVar9 < fVar19) {
              fVar9 = fVar19;
            }
            if (fVar10 < fVar20) {
              fVar10 = fVar20;
            }
            fVar19 = local_178 - fStack_16c;
            fVar18 = fStack_174 - local_168;
            fVar20 = fStack_170 - fStack_164;
            if (fVar19 < fVar15) {
              fVar15 = fVar19;
            }
            if (fVar18 < fVar16) {
              fVar16 = fVar18;
            }
            if (fVar20 < fVar17) {
              fVar17 = fVar20;
            }
            if (fVar8 < fVar19) {
              fVar8 = fVar19;
            }
            if (fVar9 < fVar18) {
              fVar9 = fVar18;
            }
            if (fVar10 < fVar20) {
              fVar10 = fVar20;
            }
            fVar20 = fStack_16c + local_178;
            fVar18 = local_168 + fStack_174;
            fVar19 = fStack_164 + fStack_170;
            if (fVar20 < fVar15) {
              fVar15 = fVar20;
            }
            if (fVar18 < fVar16) {
              fVar16 = fVar18;
            }
            if (fVar19 < fVar17) {
              fVar17 = fVar19;
            }
            if (fVar8 < fVar20) {
              fVar8 = fVar20;
            }
            if (fVar9 < fVar18) {
              fVar9 = fVar18;
            }
            if (fVar10 < fVar19) {
              fVar10 = fVar19;
            }
            fVar9 = fVar9 - fVar16;
            fVar8 = fVar8 - fVar15;
            fVar10 = fVar10 - fVar17;
            fStack_1a8 = fVar9 * 0.5;
            fVar18 = fVar8 * 0.5;
            fStack_1a4 = fVar10 * 0.5;
            fVar16 = fVar16 + fStack_1a8;
            fVar15 = fVar15 + fVar18;
            fVar17 = fVar17 + fStack_1a4;
            fVar5 = SQRT((fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10) * 0.25);
            fVar7 = SQRT((local_198._4_4_ - fVar16) * (local_198._4_4_ - fVar16) +
                         ((float)local_198 - fVar15) * ((float)local_198 - fVar15) +
                         ((float)uStack_190 - fVar17) * ((float)uStack_190 - fVar17)) + local_180;
            fVar19 = SQRT((fStack_174 - fVar16) * (fStack_174 - fVar16) +
                          (local_178 - fVar15) * (local_178 - fVar15) +
                          (fStack_170 - fVar17) * (fStack_170 - fVar17)) + local_160;
            if (fVar7 <= fVar19) {
              fVar7 = fVar19;
            }
            fVar23 = local_148;
            fVar11 = fStack_144;
            fVar9 = fStack_140;
            fVar10 = fStack_13c;
            fVar6 = local_138;
            fVar21 = fStack_134;
            fVar14 = fStack_130;
            fVar24 = fStack_12c;
            fVar13 = local_128;
            fVar8 = fStack_124;
            fVar22 = fStack_120;
            fVar25 = fStack_11c;
            fVar26 = local_118;
            fVar27 = fStack_114;
            fVar28 = fStack_110;
            fVar4 = fStack_10c;
            local_1b8 = fVar15;
            fStack_1b4 = fVar16;
            fStack_1b0 = fVar17;
            fStack_1ac = fVar18;
            local_1a0 = fVar7;
            local_150 = fStack_1a4;
            fVar19 = fStack_1a8;
            fVar20 = fStack_1a4;
            if (fVar5 <= fVar7) {
              fVar7 = fVar5;
              local_1a0 = fVar5;
            }
          }
          else {
            bVar1 = true;
            fVar15 = local_178;
            fVar16 = fStack_174;
            fVar17 = fStack_170;
            fVar18 = fStack_16c;
            fVar7 = local_160;
            fVar19 = local_168;
            fVar20 = fStack_164;
          }
          local_198 = CONCAT44(fVar16,fVar15);
          uStack_190 = CONCAT44(fVar18,fVar17);
          local_180 = fVar7;
          fVar5 = fVar19;
          fVar12 = fVar20;
          local_188 = fVar19;
          fStack_184 = fVar20;
        }
        pfVar2 = pfVar2 + 0x14;
      } while (pfVar2 != pfVar3);
      local_1b8 = fVar15;
      fStack_1b4 = fVar16;
      fStack_1b0 = fVar17;
      fStack_1ac = fVar18;
      fStack_1a8 = fVar5;
      fStack_1a4 = fVar12;
      local_1a0 = fVar7;
      if (bVar1) goto LAB_140810053;
    }
  }
  local_1a0 = 0.0;
  fStack_1ac = (float)_DAT_1468b5d90;
  fStack_1a8 = (float)((ulonglong)_DAT_1468b5d90 >> 0x20);
  fStack_1a4 = DAT_1468b5d98;
  local_1b8 = param_3[4];
  fStack_1b4 = param_3[5];
  fStack_1b0 = param_3[6];
LAB_140810053:
  *param_2 = CONCAT44(fStack_1b4,local_1b8);
  param_2[1] = CONCAT44(fStack_1ac,fStack_1b0);
  param_2[2] = CONCAT44(fStack_1a4,fStack_1a8);
  *(float *)(param_2 + 3) = local_1a0;
  return param_2;
}



// FUNCTION 1408100b0 FUN_1408100b0 body=575 status=ok
// SIG undefined FUN_1408100b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1408100b0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  char local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_6c;
  float local_64;
  float local_60;
  undefined1 local_5c [84];
  
  if (*(longlong *)(param_1 + 0x718) == 0) {
    uVar3 = *(undefined4 *)(param_3 + 0x10);
    uVar4 = *(undefined4 *)(param_3 + 0x14);
    uVar5 = *(undefined4 *)(param_3 + 0x18);
    param_2[6] = 0;
    *param_2 = uVar3;
    param_2[1] = uVar4;
    uVar6 = _DAT_1468b5d90;
    param_2[2] = uVar5;
    uVar3 = DAT_1468b5d98;
    *(undefined8 *)(param_2 + 3) = uVar6;
    param_2[5] = uVar3;
  }
  else {
    uVar6 = UPaperSprite::GetRenderBounds(*(longlong *)(param_1 + 0x718),&local_78);
    FBoxSphereBounds::TransformBy(uVar6,&local_b8,param_3);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0xa0);
    if (lVar2 != 0) {
      FUN_1423036c0(lVar2 + 0x28,&local_98,param_3,0);
      if (local_80 != '\0') {
        local_84 = local_84 - local_90;
        local_88 = local_88 - local_94;
        local_8c = local_8c - local_98;
        local_64 = local_84 * 0.5;
        local_70 = local_64 + local_90;
        local_6c = CONCAT44(local_88 * 0.5,local_8c * 0.5);
        local_78 = CONCAT44(local_88 * 0.5 + local_94,local_8c * 0.5 + local_98);
        local_60 = SQRT((local_8c * local_8c + local_88 * local_88 + local_84 * local_84) * 0.25);
        puVar7 = (undefined8 *)Union(local_5c,&local_b8,&local_78);
        local_b8 = *puVar7;
        uStack_b0 = puVar7[1];
        local_a8 = puVar7[2];
        local_a0 = *(float *)(puVar7 + 3);
      }
    }
    fVar1 = *(float *)(param_1 + 0x364);
    *param_2 = (undefined4)local_b8;
    param_2[1] = local_b8._4_4_;
    param_2[2] = (undefined4)uStack_b0;
    param_2[3] = uStack_b0._4_4_ * fVar1;
    *(ulonglong *)(param_2 + 4) = CONCAT44(local_a8._4_4_ * fVar1,(float)local_a8 * fVar1);
    param_2[6] = local_a0 * fVar1;
  }
  return param_2;
}



// FUNCTION 1408102f0 FUN_1408102f0 body=1200 status=ok
// SIG undefined FUN_1408102f0(void)

undefined8 * FUN_1408102f0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  float fVar1;
  undefined8 uVar2;
  bool bVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float *pfVar6;
  longlong *plVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_10c;
  float local_104;
  float local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  float local_e0;
  undefined1 local_d8 [192];
  
  bVar3 = false;
  plVar7 = *(longlong **)(param_1 + 0x738);
  plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x740) * 4;
  fVar15 = DAT_1468b5d90;
  local_138 = DAT_1468b5d90;
  fVar16 = DAT_1468b5d94;
  fStack_134 = DAT_1468b5d94;
  fVar17 = DAT_1468b5d98;
  fStack_130 = DAT_1468b5d98;
  for (; plVar7 != plVar8; plVar7 = plVar7 + 4) {
    lVar10 = *plVar7;
    lVar11 = (longlong)(int)plVar7[1] * 0xd0 + lVar10;
    if (lVar10 != lVar11) {
      piVar9 = (int *)(lVar10 + 0xc0);
      do {
        pfVar6 = *(float **)(piVar9 + -4);
        if (*(float **)(piVar9 + -4) == (float *)0x0) {
          pfVar6 = (float *)(piVar9 + -0x1c);
        }
        pfVar4 = pfVar6 + (longlong)*piVar9 * 4;
        for (; pfVar6 != pfVar4; pfVar6 = pfVar6 + 4) {
          fVar14 = pfVar6[1];
          fVar1 = *pfVar6;
          fVar13 = fVar14 * DAT_146267230 + fVar1 * DAT_146267220;
          fVar12 = fVar14 * DAT_146267238 + fVar1 * DAT_146267228;
          fVar14 = fVar14 * DAT_146267234 + fVar1 * DAT_146267224;
          if (bVar3) {
            if (fVar13 <= local_138) {
              local_138 = fVar13;
            }
            if (fVar14 <= fStack_134) {
              fStack_134 = fVar14;
            }
            if (fVar12 <= fStack_130) {
              fStack_130 = fVar12;
            }
            if (fVar15 <= fVar13) {
              fVar15 = fVar13;
            }
            if (fVar16 <= fVar14) {
              fVar16 = fVar14;
            }
            if (fVar17 <= fVar12) {
              fVar17 = fVar12;
            }
          }
          else {
            bVar3 = true;
            fVar15 = fVar13;
            fVar16 = fVar14;
            fVar17 = fVar12;
            local_138 = fVar13;
            fStack_134 = fVar14;
            fStack_130 = fVar12;
          }
        }
        lVar10 = lVar10 + 0xd0;
        piVar9 = piVar9 + 0x34;
      } while (lVar10 != lVar11);
    }
  }
  local_138 = local_138 - DAT_146267240 * 0.5;
  fStack_134 = fStack_134 - DAT_146267244 * 0.5;
  fStack_130 = fStack_130 - DAT_146267248 * 0.5;
  fVar14 = (DAT_146267240 * 0.5 + fVar15) - local_138;
  fVar15 = (DAT_146267244 * 0.5 + fVar16) - fStack_134;
  fVar16 = (DAT_146267248 * 0.5 + fVar17) - fStack_130;
  fStack_12c = fVar14 * 0.5;
  fStack_128 = fVar15 * 0.5;
  fStack_124 = fVar16 * 0.5;
  local_138 = fStack_12c + local_138;
  fStack_134 = fStack_128 + fStack_134;
  fStack_130 = fStack_124 + fStack_130;
  local_120 = SQRT((fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16) * 0.25);
  local_e8 = CONCAT44(fStack_124,fStack_128);
  local_f8 = local_138;
  fStack_f4 = fStack_134;
  fStack_f0 = fStack_130;
  fStack_ec = fStack_12c;
  local_e0 = local_120;
  FBoxSphereBounds::TransformBy(&local_f8,param_2,param_3);
  if (*(longlong *)(param_1 + 0x730) != 0) {
    FUN_1423036c0(*(longlong *)(param_1 + 0x730) + 0x28,&local_138,param_3,0);
    if (local_120._0_1_ != '\0') {
      fVar17 = fStack_12c - local_138;
      fVar16 = fStack_128 - fStack_134;
      fVar15 = fStack_124 - fStack_130;
      local_10c = CONCAT44(fVar16 * 0.5,fVar17 * 0.5);
      local_104 = fVar15 * 0.5;
      local_118 = CONCAT44(fStack_134 + fVar16 * 0.5,local_138 + fVar17 * 0.5);
      local_110 = fStack_130 + local_104;
      local_100 = SQRT((fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15) * 0.25);
      puVar5 = (undefined8 *)Union(local_d8,param_2,&local_118);
      uVar2 = puVar5[1];
      *param_2 = *puVar5;
      param_2[1] = uVar2;
      param_2[2] = puVar5[2];
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(puVar5 + 3);
    }
  }
  fVar15 = *(float *)(param_1 + 0x364);
  *(float *)((longlong)param_2 + 0xc) = fVar15 * *(float *)((longlong)param_2 + 0xc);
  *(float *)(param_2 + 2) = fVar15 * *(float *)(param_2 + 2);
  *(float *)((longlong)param_2 + 0x14) = fVar15 * *(float *)((longlong)param_2 + 0x14);
  *(float *)(param_2 + 3) = *(float *)(param_2 + 3) * *(float *)(param_1 + 0x364);
  return param_2;
}



// FUNCTION 1408107a0 FUN_1408107a0 body=575 status=ok
// SIG undefined FUN_1408107a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1408107a0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  char local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_6c;
  float local_64;
  float local_60;
  undefined1 local_5c [84];
  
  if (*(longlong *)(param_1 + 0x760) == 0) {
    uVar3 = *(undefined4 *)(param_3 + 0x10);
    uVar4 = *(undefined4 *)(param_3 + 0x14);
    uVar5 = *(undefined4 *)(param_3 + 0x18);
    param_2[6] = 0;
    *param_2 = uVar3;
    param_2[1] = uVar4;
    uVar6 = _DAT_1468b5d90;
    param_2[2] = uVar5;
    uVar3 = DAT_1468b5d98;
    *(undefined8 *)(param_2 + 3) = uVar6;
    param_2[5] = uVar3;
  }
  else {
    uVar6 = UPaperTileMap::GetRenderBounds(*(longlong *)(param_1 + 0x760),&local_78);
    FBoxSphereBounds::TransformBy(uVar6,&local_b8,param_3);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x760) + 0x98);
    if (lVar2 != 0) {
      FUN_1423036c0(lVar2 + 0x28,&local_98,param_3,0);
      if (local_80 != '\0') {
        local_84 = local_84 - local_90;
        local_88 = local_88 - local_94;
        local_8c = local_8c - local_98;
        local_64 = local_84 * 0.5;
        local_70 = local_64 + local_90;
        local_6c = CONCAT44(local_88 * 0.5,local_8c * 0.5);
        local_78 = CONCAT44(local_88 * 0.5 + local_94,local_8c * 0.5 + local_98);
        local_60 = SQRT((local_8c * local_8c + local_88 * local_88 + local_84 * local_84) * 0.25);
        puVar7 = (undefined8 *)Union(local_5c,&local_b8,&local_78);
        local_b8 = *puVar7;
        uStack_b0 = puVar7[1];
        local_a8 = puVar7[2];
        local_a0 = *(float *)(puVar7 + 3);
      }
    }
    fVar1 = *(float *)(param_1 + 0x364);
    *param_2 = (undefined4)local_b8;
    param_2[1] = local_b8._4_4_;
    param_2[2] = (undefined4)uStack_b0;
    param_2[3] = uStack_b0._4_4_ * fVar1;
    *(ulonglong *)(param_2 + 4) = CONCAT44(local_a8._4_4_ * fVar1,(float)local_a8 * fVar1);
    param_2[6] = local_a0 * fVar1;
  }
  return param_2;
}



// FUNCTION 1408109e0 FUN_1408109e0 body=245 status=ok
// SIG undefined FUN_1408109e0(void)

void FUN_1408109e0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  float fVar8;
  
  lVar2 = param_1[0xe3];
  iVar1 = *(int *)((longlong)param_1 + 0x734);
  if (lVar2 != 0) {
    fVar8 = 0.0;
    if (0.0 <= *(float *)(param_1 + 0xe6)) {
      uVar4 = 0;
      iVar5 = *(int *)(lVar2 + 0x38);
      if (*(float *)(lVar2 + 0x28) <= 0.0) {
        iVar3 = (0 < iVar5) - 1;
      }
      else {
        if (0 < iVar5) {
          piVar6 = (int *)(*(longlong *)(lVar2 + 0x30) + 8);
          uVar7 = uVar4;
          do {
            iVar3 = (int)uVar4;
            fVar8 = fVar8 + (float)*piVar6 * (1.0 / *(float *)(lVar2 + 0x28));
            if (*(float *)(param_1 + 0xe6) <= fVar8) goto LAB_140810a79;
            uVar4 = (ulonglong)(iVar3 + 1);
            uVar7 = uVar7 + 1;
            piVar6 = piVar6 + 4;
          } while ((longlong)uVar7 < (longlong)iVar5);
          iVar5 = *(int *)(lVar2 + 0x38);
        }
        iVar3 = iVar5 + -1;
      }
      goto LAB_140810a79;
    }
  }
  iVar3 = -1;
LAB_140810a79:
  *(int *)((longlong)param_1 + 0x734) = iVar3;
  if (iVar3 != iVar1) {
    FUN_14239b420(param_1,0,0,1);
    if ((param_1[0xe3] != 0) && (*(char *)(param_1[0xe3] + 0x48) == '\x02')) {
      FUN_14234b040(param_1);
      (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
    }
    FUN_1423424c0(param_1);
    return;
  }
  return;
}



// FUNCTION 140810af0 FUN_140810af0 body=188 status=ok
// SIG undefined FUN_140810af0(void)

void FUN_140810af0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  plVar3 = *(longlong **)(param_1 + 0x738);
  uVar4 = (longlong)*(int *)(param_1 + 0x740) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x740) < plVar3) {
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    do {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        FUN_1426adfd0(lVar1);
        FUN_14061f570(lVar1);
        FMemory::operator_delete(lVar1,0x1b0);
      }
      plVar3 = plVar3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar4);
  }
  *(undefined4 *)(param_1 + 0x740) = 0;
  if (*(int *)(param_1 + 0x744) == 0) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo((ulonglong *)(param_1 + 0x738),0);
  return;
}



// FUNCTION 140810bb0 FUN_140810bb0 body=65 status=ok
// SIG undefined FUN_140810bb0(void)

void FUN_140810bb0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x730) = 0;
  if (*(int *)(param_1 + 0x734) != 0) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1 + 0x728,0);
  }
  FUN_140810af0(param_1);
  FUN_1423424e0(param_1);
  FUN_142252d00(param_1);
  return;
}



// FUNCTION 140810c00 FUN_140810c00 body=384 status=ok
// SIG undefined FUN_140810c00(void)

void FUN_140810c00(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x700);
  if (lVar1 != 0) {
    lVar5 = (longlong)*(int *)(lVar1 + 0x6f8);
    bVar2 = false;
    lVar7 = 0;
    if (3 < lVar5) {
      lVar3 = 0;
      lVar6 = (lVar5 - 4U >> 2) + 1;
      lVar7 = lVar6 * 4;
      do {
        lVar4 = *(longlong *)(lVar1 + 0x6f0);
        if (((*(float *)(lVar3 + 0x14 + lVar4) != 0.0) || (*(float *)(lVar3 + 0x20 + lVar4) != 0.0))
           || (*(float *)(lVar3 + 8 + lVar4) != 0.0)) {
          *(undefined4 *)(lVar3 + 0x14 + lVar4) = 0;
          bVar2 = true;
          *(undefined4 *)(lVar3 + 0x20 + lVar4) = 0;
          *(undefined4 *)(lVar3 + 8 + lVar4) = 0;
          lVar4 = *(longlong *)(lVar1 + 0x6f0);
        }
        if (((*(float *)(lVar3 + 0x40 + lVar4) != 0.0) || (*(float *)(lVar3 + 0x4c + lVar4) != 0.0))
           || (*(float *)(lVar3 + 0x34 + lVar4) != 0.0)) {
          *(undefined4 *)(lVar3 + 0x40 + lVar4) = 0;
          bVar2 = true;
          *(undefined4 *)(lVar3 + 0x4c + lVar4) = 0;
          *(undefined4 *)(lVar3 + 0x34 + lVar4) = 0;
          lVar4 = *(longlong *)(lVar1 + 0x6f0);
        }
        if (((*(float *)(lVar3 + 0x6c + lVar4) != 0.0) || (*(float *)(lVar3 + 0x78 + lVar4) != 0.0))
           || (*(float *)(lVar3 + 0x60 + lVar4) != 0.0)) {
          *(undefined4 *)(lVar3 + 0x6c + lVar4) = 0;
          bVar2 = true;
          *(undefined4 *)(lVar3 + 0x78 + lVar4) = 0;
          *(undefined4 *)(lVar3 + 0x60 + lVar4) = 0;
          lVar4 = *(longlong *)(lVar1 + 0x6f0);
        }
        if (((*(float *)(lVar3 + 0x98 + lVar4) != 0.0) || (*(float *)(lVar3 + 0xa4 + lVar4) != 0.0))
           || (*(float *)(lVar3 + 0x8c + lVar4) != 0.0)) {
          *(undefined4 *)(lVar3 + 0x98 + lVar4) = 0;
          bVar2 = true;
          *(undefined4 *)(lVar3 + 0xa4 + lVar4) = 0;
          *(undefined4 *)(lVar3 + 0x8c + lVar4) = 0;
        }
        lVar3 = lVar3 + 0xb0;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar7 < lVar5) {
      lVar3 = lVar7 * 0x2c;
      lVar5 = lVar5 - lVar7;
      do {
        lVar7 = *(longlong *)(lVar1 + 0x6f0);
        if (((*(float *)(lVar3 + 0x14 + lVar7) != 0.0) || (*(float *)(lVar3 + 0x20 + lVar7) != 0.0))
           || (*(float *)(lVar3 + 8 + lVar7) != 0.0)) {
          *(undefined4 *)(lVar3 + 0x14 + lVar7) = 0;
          bVar2 = true;
          *(undefined4 *)(lVar3 + 0x20 + lVar7) = 0;
          *(undefined4 *)(lVar3 + 8 + lVar7) = 0;
        }
        lVar3 = lVar3 + 0x2c;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (bVar2) {
      FUN_1423c1a10(*(undefined8 *)(param_1 + 0x700));
      return;
    }
  }
  return;
}



// FUNCTION 140810d80 ConvertTextureSpaceToPivotSpace body=330 status=ok
// SIG undefined ConvertTextureSpaceToPivotSpace(void)

float * FPaperTileLayerToBodySetupBuilder::ConvertTextureSpaceToPivotSpace
                  (longlong param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_3[1];
  fVar2 = *param_3;
  fVar4 = *(float *)(param_1 + 0x20);
  fVar5 = *(float *)(param_1 + 0x24);
  fVar6 = *(float *)(param_1 + 0x28);
  fVar7 = *(float *)(param_1 + 0x2c);
  fVar8 = (DAT_146267220 * fVar2 - DAT_146267230 * fVar1) * *(float *)(param_1 + 0x40);
  fVar9 = (DAT_146267224 * fVar2 - DAT_146267234 * fVar1) * *(float *)(param_1 + 0x44);
  fVar10 = (DAT_146267228 * fVar2 - DAT_146267238 * fVar1) * *(float *)(param_1 + 0x48);
  fVar1 = fVar10 * fVar5 - fVar9 * fVar6;
  fVar2 = fVar8 * fVar6 - fVar10 * fVar4;
  fVar3 = fVar9 * fVar4 - fVar8 * fVar5;
  fVar1 = fVar1 + fVar1;
  fVar2 = fVar2 + fVar2;
  fVar3 = fVar3 + fVar3;
  fVar8 = (fVar3 * fVar5 - fVar2 * fVar6) + fVar7 * fVar1 + fVar8 + *(float *)(param_1 + 0x30);
  fVar6 = (fVar1 * fVar6 - fVar3 * fVar4) + fVar7 * fVar2 + fVar9 + *(float *)(param_1 + 0x34);
  fVar7 = (fVar2 * fVar4 - fVar1 * fVar5) + fVar7 * fVar3 + fVar10 + *(float *)(param_1 + 0x38);
  fVar5 = fVar8 * DAT_146267230;
  fVar4 = fVar6 * DAT_146267234;
  fVar2 = fVar7 * DAT_146267238;
  fVar1 = *(float *)(param_1 + 0x5c);
  *param_2 = fVar8 * DAT_146267220 + fVar6 * DAT_146267224 + fVar7 * DAT_146267228 +
             *(float *)(param_1 + 0x58);
  param_2[1] = fVar5 + fVar4 + fVar2 + fVar1;
  return param_2;
}



// FUNCTION 140810ed0 FUN_140810ed0 body=316 status=ok
// SIG undefined FUN_140810ed0(void)

float * FUN_140810ed0(longlong param_1,float *param_2,float *param_3)

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
  
  fVar2 = param_3[1];
  fVar3 = *param_3;
  fVar5 = *(float *)(param_1 + 0x20);
  fVar7 = *(float *)(param_1 + 0x24);
  fVar6 = *(float *)(param_1 + 0x28);
  fVar1 = *(float *)(param_1 + 0x2c);
  fVar8 = (DAT_146267220 * fVar3 + DAT_146267230 * fVar2) * *(float *)(param_1 + 0x40);
  fVar9 = (DAT_146267224 * fVar3 + DAT_146267234 * fVar2) * *(float *)(param_1 + 0x44);
  fVar10 = (DAT_146267228 * fVar3 + DAT_146267238 * fVar2) * *(float *)(param_1 + 0x48);
  fVar2 = fVar10 * fVar7 - fVar9 * fVar6;
  fVar3 = fVar8 * fVar6 - fVar10 * fVar5;
  fVar4 = fVar9 * fVar5 - fVar8 * fVar7;
  fVar2 = fVar2 + fVar2;
  fVar3 = fVar3 + fVar3;
  fVar4 = fVar4 + fVar4;
  fVar8 = (fVar4 * fVar7 - fVar3 * fVar6) + fVar1 * fVar2 + fVar8;
  fVar6 = (fVar2 * fVar6 - fVar4 * fVar5) + fVar1 * fVar3 + fVar9;
  fVar7 = (fVar3 * fVar5 - fVar2 * fVar7) + fVar1 * fVar4 + fVar10;
  fVar5 = fVar8 * DAT_146267230;
  fVar3 = fVar6 * DAT_146267234;
  fVar2 = fVar7 * DAT_146267238;
  *param_2 = fVar8 * DAT_146267220 + fVar6 * DAT_146267224 + fVar7 * DAT_146267228;
  param_2[1] = fVar5 + fVar3 + fVar2;
  return param_2;
}



// FUNCTION 140811010 CorrectPolygonWinding body=249 status=ok
// SIG undefined CorrectPolygonWinding(void)

void PaperGeomTools::CorrectPolygonWinding(longlong *param_1,longlong *param_2,char param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar2 = (int)param_2[1];
  if (iVar2 < 3) {
    return;
  }
  cVar3 = IsPolygonWindingCCW(param_2);
  if (param_3 == '\0') {
    if (cVar3 == '\0') {
LAB_1408110bc:
      lVar7 = (longlong)(iVar2 + -1);
      if (iVar2 + -1 < 0) {
        return;
      }
      do {
        iVar2 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
        }
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = *(undefined8 *)(*param_2 + lVar7 * 8);
        }
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      return;
    }
  }
  else if (cVar3 != '\0') goto LAB_1408110bc;
  uVar4 = 0;
  uVar6 = uVar4;
  if (0 < iVar2) {
    do {
      iVar2 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
      }
      puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *(undefined8 *)(*param_2 + uVar4);
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 140811110 FUN_140811110 body=201 status=ok
// SIG undefined FUN_140811110(void)

void FUN_140811110(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0();
  }
  uVar4 = *(undefined8 *)(lVar5 + 0x218);
  plVar1 = (longlong *)(param_1 + 0x738);
  iVar2 = *(int *)(param_1 + 0x730);
  iVar3 = *(int *)(param_1 + 0x740);
  if (iVar3 < iVar2) {
    *(int *)(param_1 + 0x740) = iVar2;
    if (*(int *)(param_1 + 0x744) < iVar2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
  }
  else if ((iVar2 < iVar3) && (iVar2 != iVar3)) {
    *(int *)(param_1 + 0x740) = iVar2;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  uVar7 = 0;
  uVar8 = uVar7;
  if (0 < iVar2) {
    do {
      uVar6 = FUN_14081b3a0(param_1,uVar8,
                            (longlong)(int)uVar8 * 0x50 + *(longlong *)(param_1 + 0x728),uVar4);
      *(undefined8 *)(*plVar1 + uVar7 * 8) = uVar6;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while ((longlong)uVar7 < (longlong)iVar2);
  }
  return;
}



// FUNCTION 1408111e0 CreateExtrudedConvexHull body=817 status=ok
// SIG undefined CreateExtrudedConvexHull(void)

void CreateExtrudedConvexHull(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  ulonglong local_d0;
  uint local_c8;
  uint uStack_c4;
  
  uVar3 = *(uint *)(param_2 + 1);
  uVar6 = (ulonglong)uVar3;
  uVar7 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0;
  if (0 < (int)uVar3) {
    iVar11 = 1;
    uVar9 = uVar7;
    uVar12 = uVar7;
    uVar14 = uVar7;
    do {
      lVar4 = *param_2;
      fVar1 = *(float *)(lVar4 + uVar12 * 8);
      fVar2 = *(float *)(lVar4 + 4 + uVar12 * 8);
      lVar10 = (longlong)(iVar11 % (int)uVar6);
      fVar19 = fVar1 - *(float *)(lVar4 + lVar10 * 8);
      fVar18 = *(float *)(lVar4 + 4 + lVar10 * 8) - fVar2;
      fVar15 = fVar19 * fVar19 + fVar18 * fVar18;
      if (fVar15 <= 1e-08) {
        fVar18 = 0.0;
        fVar19 = 0.0;
      }
      else {
        auVar17 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
        fVar16 = auVar17._0_4_;
        fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
        fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
        fVar18 = fVar18 * fVar16;
        fVar19 = fVar19 * fVar16;
      }
      iVar5 = (int)uVar14;
      local_c8 = iVar5 + 1;
      fVar18 = fVar18 * *(float *)(*param_3 + uVar12 * 4);
      fVar19 = fVar19 * *(float *)(*param_3 + uVar12 * 4);
      uVar8 = local_c8;
      if ((int)uVar9 < (int)local_c8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d0,uVar14);
        uVar9 = (ulonglong)uStack_c4;
        uVar7 = local_d0;
        uVar8 = local_c8;
      }
      local_c8 = uVar8 + 1;
      *(float *)(uVar7 + (longlong)iVar5 * 8) = fVar18 + fVar1;
      *(float *)(uVar7 + 4 + (longlong)iVar5 * 8) = fVar19 + fVar2;
      fVar1 = *(float *)(lVar4 + uVar12 * 8);
      fVar2 = *(float *)(lVar4 + 4 + uVar12 * 8);
      uVar13 = local_c8;
      if ((int)uVar9 < (int)local_c8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d0,uVar8);
        uVar9 = (ulonglong)uStack_c4;
        uVar7 = local_d0;
        uVar13 = local_c8;
      }
      local_c8 = uVar13 + 1;
      *(float *)(uVar7 + (longlong)(int)uVar8 * 8) = fVar1 - fVar18;
      *(float *)(uVar7 + 4 + (longlong)(int)uVar8 * 8) = fVar2 - fVar19;
      fVar1 = *(float *)(lVar4 + lVar10 * 8);
      fVar2 = *(float *)(lVar4 + 4 + lVar10 * 8);
      uVar8 = local_c8;
      if ((int)uVar9 < (int)local_c8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d0,uVar13);
        uVar9 = (ulonglong)uStack_c4;
        uVar7 = local_d0;
        uVar8 = local_c8;
      }
      local_c8 = uVar8 + 1;
      *(float *)(uVar7 + (longlong)(int)uVar13 * 8) = fVar18 + fVar1;
      *(float *)(uVar7 + 4 + (longlong)(int)uVar13 * 8) = fVar19 + fVar2;
      fVar1 = *(float *)(lVar4 + lVar10 * 8);
      fVar2 = *(float *)(lVar4 + 4 + lVar10 * 8);
      if ((int)uVar9 < (int)local_c8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d0,uVar8);
        uVar9 = (ulonglong)uStack_c4;
        uVar7 = local_d0;
      }
      uVar14 = (ulonglong)local_c8;
      uVar6 = (ulonglong)(int)uVar3;
      iVar11 = iVar11 + 1;
      uVar12 = uVar12 + 1;
      *(float *)(uVar7 + (longlong)(int)uVar8 * 8) = fVar1 - fVar18;
      *(float *)(uVar7 + 4 + (longlong)(int)uVar8 * 8) = fVar2 - fVar19;
    } while ((longlong)uVar12 < (longlong)uVar6);
  }
  PaperGeomTools::GenerateConvexHullFromPoints(param_1,&local_d0);
  if (uVar7 != 0) {
    FMemory::Free(uVar7);
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140811520 FUN_140811520 body=226 status=ok
// SIG undefined FUN_140811520(void)

void FUN_140811520(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,char param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x24e);
  *(undefined1 *)((longlong)param_1 + 0x24e) = 2;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = UPaperTileMap::GetPrivateStaticClass();
  lVar3 = FUN_1417985e0(uVar2,param_1,0,0,0,0,0,0,0);
  *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 8;
  *(undefined4 *)(lVar3 + 0x38) = param_6;
  *(undefined4 *)(lVar3 + 0x28) = param_2;
  *(undefined4 *)(lVar3 + 0x2c) = param_3;
  *(undefined4 *)(lVar3 + 0x30) = param_4;
  *(undefined4 *)(lVar3 + 0x34) = param_5;
  if (param_7 != '\0') {
    UPaperTileMap::AddNewLayer(lVar3,0xffffffff);
  }
  (**(code **)(*param_1 + 0x928))(param_1,lVar3);
  *(undefined1 *)((longlong)param_1 + 0x24e) = uVar1;
  return;
}



// FUNCTION 140811610 FUN_140811610 body=453 status=ok
// SIG undefined FUN_140811610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140811610(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_38;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  puVar4 = (undefined8 *)operator_new(0x420);
  puVar8 = (undefined8 *)0x0;
  puVar6 = puVar8;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_14080bb70(puVar4,param_1);
    *puVar4 = &PTR_FUN_1440fd380;
    uVar5 = (**(code **)(*param_1 + 0x560))(param_1,0);
    puVar4[0x7a] = uVar5;
    puVar6 = (undefined8 *)FUN_14236ce60(param_1,local_f8,*(undefined4 *)(puVar4[0x26] + 8));
    *(undefined8 *)((longlong)puVar4 + 0x3ec) = *puVar6;
    puVar6 = puVar4;
  }
  FUN_1408109e0(param_1);
  lVar3 = param_1[0xe3];
  puVar4 = puVar8;
  if (lVar3 != 0) {
    iVar2 = *(int *)((longlong)param_1 + 0x734);
    if ((-1 < iVar2) && (puVar4 = (undefined8 *)0x0, iVar2 < *(int *)(lVar3 + 0x38))) {
      puVar4 = *(undefined8 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 0x10);
    }
  }
  local_a0 = DAT_1464aa730;
  local_d8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_38 = 0;
  local_28 = 0;
  FSpriteDrawCallRecord::BuildFromSprite(local_e8,puVar4);
  puVar7 = (undefined4 *)FLinearColor::ToFColor(param_1 + 0xe7,local_f8,0);
  plVar1 = puVar6 + 0x78;
  local_a0 = *puVar7;
  TArray<FSpriteDrawCallRecord,FDefaultAllocator>::Empty(plVar1,0);
  iVar2 = *(int *)(puVar6 + 0x79);
  *(int *)(puVar6 + 0x79) = iVar2 + 1;
  if (*(int *)((longlong)puVar6 + 0x3cc) < iVar2 + 1) {
    TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  puVar4 = (undefined8 *)((longlong)iVar2 * 0xd0 + *plVar1);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[2] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *(undefined4 *)(puVar4 + 9) = DAT_1464aa730;
    puVar4[0x16] = 0;
    puVar4[0x18] = 0;
    puVar8 = puVar4;
  }
  FSpriteDrawCallRecord::operator=(puVar8,local_e8);
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  return puVar6;
}



// FUNCTION 1408117e0 FUN_1408117e0 body=57 status=ok
// SIG undefined FUN_1408117e0(void)

undefined8 FUN_1408117e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (0 < *(int *)(param_1 + 0x730)) {
    lVar1 = operator_new(0x460);
    if (lVar1 != 0) {
      uVar2 = FUN_14080ae70(lVar1,param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140811820 FUN_140811820 body=538 status=ok
// SIG undefined FUN_140811820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140811820(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined2 local_117;
  undefined1 local_115;
  undefined1 local_114;
  undefined2 local_113;
  undefined1 local_111;
  undefined1 local_110;
  undefined2 local_10f;
  undefined1 local_10d;
  undefined1 local_10c [16];
  undefined1 local_fc [20];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_38;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  puVar1 = (undefined8 *)operator_new(0x440);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_14080bb70(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440fe1e0;
    uVar2 = (**(code **)(*param_1 + 0x6b8))(param_1);
    puVar1[0x85] = uVar2;
    puVar1[0x86] = 0;
    puVar1[0x87] = 0;
    if (*(char *)((longlong)param_1 + 0x24e) == '\0') {
      local_113 = 0xff;
      puVar6 = &local_114;
      local_114 = 0xff;
      local_111 = 0xff;
    }
    else if ((*(byte *)(param_1 + 0x78) & 8) == 0) {
      local_117 = 0xff00;
      puVar6 = &local_118;
      local_118 = 0xff;
      local_115 = 0xff;
    }
    else {
      local_10f = 0xff;
      puVar6 = &local_110;
      local_110 = 0x80;
      local_10d = 0xff;
    }
    FLinearColor::FLinearColor(local_10c,puVar6);
    lVar3 = (**(code **)(*param_1 + 0x560))(param_1,0);
    puVar1[0x7a] = lVar3;
    if (lVar3 == 0) {
      uVar2 = UMaterial::GetDefaultMaterial(0);
      puVar1[0x7a] = uVar2;
    }
    lVar3 = (**(code **)(*param_1 + 0x560))(param_1,1);
    puVar1[0x83] = lVar3;
    if (lVar3 == 0) {
      uVar2 = UMaterial::GetDefaultMaterial(0);
      puVar1[0x83] = uVar2;
    }
    *(undefined4 *)(puVar1 + 0x84) = 0xffffffff;
    puVar4 = (undefined8 *)FUN_14236ce60(param_1,local_fc,*(undefined4 *)(puVar1[0x26] + 8));
    *(undefined8 *)((longlong)puVar1 + 0x3ec) = *puVar4;
  }
  if (param_1[0xe3] != 0) {
    local_a0 = DAT_1464aa730;
    local_d8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_38 = 0;
    local_28 = 0;
    FSpriteDrawCallRecord::BuildFromSprite(local_e8);
    puVar5 = (undefined4 *)FLinearColor::ToFColor(param_1 + 0xe5,&local_118,0);
    local_a0 = *puVar5;
    FUN_140823820(puVar1,local_e8,*(undefined4 *)(param_1[0xe3] + 0xa8));
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_b0 != 0) {
      FMemory::Free();
    }
  }
  return puVar1;
}



// FUNCTION 140811a40 FUN_140811a40 body=386 status=ok
// SIG undefined FUN_140811a40(void)

undefined8 * FUN_140811a40(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined1 local_res10 [8];
  
  puVar2 = (undefined8 *)operator_new(0x430);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_14080bb70(puVar2,param_1);
    plVar1 = puVar2 + 0x83;
    *puVar2 = &PTR_FUN_144101570;
    *plVar1 = 0;
    puVar2[0x84] = 0;
    if (plVar1 != (longlong *)(param_1 + 0x738)) {
      iVar9 = *(int *)(param_1 + 0x740);
      lVar6 = *(longlong *)(param_1 + 0x738);
      *(int *)(puVar2 + 0x84) = iVar9;
      if (iVar9 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0x424) = 0;
      }
      else {
        TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(plVar1,iVar9,0);
        puVar7 = (undefined8 *)*plVar1;
        puVar5 = (undefined8 *)(lVar6 + 0x10);
        do {
          *puVar7 = 0;
          TArray<FSpriteDrawCallRecord,FDefaultAllocator>::CopyToEmpty<FSpriteDrawCallRecord>
                    (puVar7,puVar5[-2],*(undefined4 *)(puVar5 + -1),0,0);
          puVar7[2] = *puVar5;
          *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(puVar5 + 1);
          puVar7 = puVar7 + 4;
          iVar9 = iVar9 + -1;
          puVar5 = puVar5 + 4;
        } while (iVar9 != 0);
      }
    }
    lVar6 = *plVar1;
    lVar8 = (longlong)*(int *)(puVar2 + 0x84) * 0x20 + lVar6;
    for (; lVar6 != lVar8; lVar6 = lVar6 + 0x20) {
      lVar3 = *(longlong *)(lVar6 + 0x10);
      if (lVar3 == 0) {
        lVar3 = UMaterial::GetDefaultMaterial(0);
      }
      pbVar4 = (byte *)FUN_1425920e0(lVar3,local_res10,*(undefined4 *)(puVar2[0x26] + 8));
      *(byte *)((longlong)puVar2 + 0x3ec) = *(byte *)((longlong)puVar2 + 0x3ec) | *pbVar4;
      *(byte *)((longlong)puVar2 + 0x3ed) = *(byte *)((longlong)puVar2 + 0x3ed) | pbVar4[1];
      *(byte *)((longlong)puVar2 + 0x3ee) = *(byte *)((longlong)puVar2 + 0x3ee) | pbVar4[2];
      *(byte *)((longlong)puVar2 + 0x3ef) = *(byte *)((longlong)puVar2 + 0x3ef) | pbVar4[3];
      *(byte *)(puVar2 + 0x7e) = *(byte *)(puVar2 + 0x7e) | pbVar4[4];
      *(byte *)((longlong)puVar2 + 0x3f1) = *(byte *)((longlong)puVar2 + 0x3f1) | pbVar4[5];
      *(byte *)((longlong)puVar2 + 0x3f2) = *(byte *)((longlong)puVar2 + 0x3f2) | pbVar4[6];
      *(byte *)((longlong)puVar2 + 0x3f3) = *(byte *)((longlong)puVar2 + 0x3f3) | pbVar4[7];
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140811bd0 FUN_140811bd0 body=233 status=ok
// SIG undefined FUN_140811bd0(void)

undefined8 * FUN_140811bd0(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [24];
  
  puVar2 = (undefined8 *)operator_new(0x430);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FUN_14080bb70(puVar2,param_1);
    puVar2[0x83] = 0;
    *puVar2 = &PTR_FUN_1440ff4c8;
    if (*(char *)((longlong)param_1 + 0x75c) == '\0') {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (undefined4)param_1[0xeb];
    }
    *(undefined4 *)(puVar2 + 0x84) = uVar1;
    *(undefined4 *)((longlong)puVar2 + 0x424) = 0x38d1b717;
    puVar2[0x83] = param_1[0xec];
    lVar3 = (**(code **)(*param_1 + 0x560))(param_1,0);
    puVar2[0x7a] = lVar3;
    if (lVar3 == 0) {
      uVar4 = UMaterial::GetDefaultMaterial(0);
      puVar2[0x7a] = uVar4;
    }
    puVar5 = (undefined8 *)FUN_14236ce60(param_1,local_res10,*(undefined4 *)(puVar2[0x26] + 8));
    *(undefined8 *)((longlong)puVar2 + 0x3ec) = *puVar5;
  }
  FUN_140820060(param_1,puVar2 + 0x74,puVar2 + 0x76);
  return puVar2;
}



// FUNCTION 140811cc0 FUN_140811cc0 body=568 status=ok
// SIG undefined FUN_140811cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140811cc0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  byte bVar8;
  float fVar9;
  undefined1 auStack_f8 [32];
  bool local_d8;
  undefined1 local_d0;
  byte local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_88 [48];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  fVar9 = (float)FMatrix::Determinant(param_6);
  if (1e-08 <= ABS(fVar9)) {
    FUN_140487e30(local_88,param_6);
    if (param_8 == '\0') {
      lVar2 = *(longlong *)(param_1 + 0x3d8);
      bVar8 = (byte)(*(uint *)(param_1 + 0x1c) >> 0x14);
      local_d8 = true;
      uVar7 = FUN_14270d9c0(&local_a0,param_7,(*(uint *)(param_1 + 0x18) & 0x300) != 0,
                            *(uint *)(param_1 + 0x18) >> 10 & 0xffffff01);
      puVar6 = (undefined4 *)FLinearColor::ToFColor(uVar7,&local_a8,1);
      local_d8 = lVar2 == 0;
      local_d0 = 0;
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)operator_new(0x158);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        uVar7 = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
        uVar3 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
        local_a8 = 0x3e;
        uVar5 = (**(code **)(**(longlong **)(DAT_146b17150 + 0x470) + 0x2a8))
                          (*(longlong **)(DAT_146b17150 + 0x470),
                           (*(uint *)(param_1 + 0x18) & 0x300) != 0,
                           *(uint *)(param_1 + 0x18) >> 10 & 0xffffff01);
        FUN_14257dfd0(puVar4);
        puVar4[0x27] = uVar5;
        *puVar4 = &PTR__scalar_deleting_destructor__1440fad20;
        puVar4[0x28] = uVar7;
        puVar4[0x29] = uVar3;
        puVar4[0x2a] = local_a8;
      }
      iVar1 = *(int *)(param_4 + 0xc0);
      *(int *)(param_4 + 0xc0) = iVar1 + 1;
      if (*(int *)(param_4 + 0xc4) < iVar1 + 1) {
        FUN_140822430(param_4 + 0xb8,iVar1);
      }
      *(undefined8 **)(*(longlong *)(param_4 + 0xb8) + (longlong)iVar1 * 8) = puVar4;
      bVar8 = (byte)(*(uint *)(param_1 + 0x1c) >> 0x14);
      local_a0 = DAT_1464aa6c0;
      uStack_9c = DAT_1464aa6c4;
      uStack_98 = DAT_1464aa6c8;
      uStack_94 = DAT_1464aa6cc;
      puVar6 = (undefined4 *)FLinearColor::ToFColor(&local_a0,&local_a8,1);
      local_d0 = 1;
      local_d8 = false;
    }
    local_c8 = bVar8 & 1;
    local_c0 = param_3;
    local_b8 = param_4;
    FUN_1426c0e10(param_5 + 0x28,local_88,*puVar6,puVar4);
  }
  return;
}



// FUNCTION 140811f00 FUN_140811f00 body=551 status=ok
// SIG undefined FUN_140811f00(void)

void FUN_140811f00(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

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
  float fVar20;
  float fVar21;
  float fVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  undefined1 local_res8;
  undefined2 local_res9;
  undefined1 local_resb;
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
  
  iVar24 = 0;
  if (0 < *(int *)(param_1 + 0x450)) {
    lVar25 = 0;
    do {
      lVar23 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x448) + (longlong)iVar24 * 8);
      if (lVar23 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x438);
        fVar3 = *(float *)(param_1 + 0x90);
        fVar4 = *(float *)(param_1 + 0x94);
        fVar5 = *(float *)(param_1 + 0x98);
        fVar6 = *(float *)(param_1 + 0x9c);
        fVar7 = *(float *)(param_1 + 0x80);
        fVar8 = *(float *)(param_1 + 0x84);
        fVar9 = *(float *)(param_1 + 0x88);
        fVar10 = *(float *)(param_1 + 0x8c);
        fVar11 = *(float *)(param_1 + 0xa0);
        fVar12 = *(float *)(param_1 + 0xa4);
        fVar13 = *(float *)(param_1 + 0xa8);
        fVar14 = *(float *)(param_1 + 0xac);
        fVar15 = *(float *)(param_1 + 0xb0);
        fVar16 = *(float *)(param_1 + 0xb4);
        fVar17 = *(float *)(param_1 + 0xb8);
        fVar18 = *(float *)(param_1 + 0xbc);
        local_res9 = 0x9d95;
        local_res8 = 0xdf;
        local_resb = 0xff;
        pfVar1 = (float *)(lVar25 + lVar2);
        fVar19 = *pfVar1;
        fVar20 = pfVar1[1];
        fVar21 = pfVar1[2];
        fVar22 = pfVar1[3];
        local_98 = fVar19 * fVar7 + fVar20 * fVar3 + fVar21 * fVar11 + fVar22 * fVar15;
        fStack_94 = fVar19 * fVar8 + fVar20 * fVar4 + fVar21 * fVar12 + fVar22 * fVar16;
        fStack_90 = fVar19 * fVar9 + fVar20 * fVar5 + fVar21 * fVar13 + fVar22 * fVar17;
        fStack_8c = fVar19 * fVar10 + fVar20 * fVar6 + fVar21 * fVar14 + fVar22 * fVar18;
        pfVar1 = (float *)(lVar25 + 0x10 + lVar2);
        fVar19 = *pfVar1;
        fVar20 = pfVar1[1];
        fVar21 = pfVar1[2];
        fVar22 = pfVar1[3];
        local_88 = fVar19 * fVar7 + fVar20 * fVar3 + fVar21 * fVar11 + fVar22 * fVar15;
        fStack_84 = fVar19 * fVar8 + fVar20 * fVar4 + fVar21 * fVar12 + fVar22 * fVar16;
        fStack_80 = fVar19 * fVar9 + fVar20 * fVar5 + fVar21 * fVar13 + fVar22 * fVar17;
        fStack_7c = fVar19 * fVar10 + fVar20 * fVar6 + fVar21 * fVar14 + fVar22 * fVar18;
        pfVar1 = (float *)(lVar25 + 0x20 + lVar2);
        fVar19 = *pfVar1;
        fVar20 = pfVar1[1];
        fVar21 = pfVar1[2];
        fVar22 = pfVar1[3];
        local_78 = fVar19 * fVar7 + fVar20 * fVar3 + fVar21 * fVar11 + fVar22 * fVar15;
        fStack_74 = fVar19 * fVar8 + fVar20 * fVar4 + fVar21 * fVar12 + fVar22 * fVar16;
        fStack_70 = fVar19 * fVar9 + fVar20 * fVar5 + fVar21 * fVar13 + fVar22 * fVar17;
        fStack_6c = fVar19 * fVar10 + fVar20 * fVar6 + fVar21 * fVar14 + fVar22 * fVar18;
        pfVar1 = (float *)(lVar25 + 0x30 + lVar2);
        fVar19 = *pfVar1;
        fVar20 = pfVar1[1];
        fVar21 = pfVar1[2];
        fVar22 = pfVar1[3];
        local_68 = fVar19 * fVar7 + fVar20 * fVar3 + fVar21 * fVar11 + fVar22 * fVar15;
        fStack_64 = fVar19 * fVar8 + fVar20 * fVar4 + fVar21 * fVar12 + fVar22 * fVar16;
        fStack_60 = fVar19 * fVar9 + fVar20 * fVar5 + fVar21 * fVar13 + fVar22 * fVar17;
        fStack_5c = fVar19 * fVar10 + fVar20 * fVar6 + fVar21 * fVar14 + fVar22 * fVar18;
        FLinearColor::FLinearColor(local_a8,&local_res8);
        FUN_140811cc0(param_1,param_2,param_3,param_4,lVar23,&local_98,local_a8,param_5);
      }
      iVar24 = iVar24 + 1;
      lVar25 = lVar25 + 0x40;
    } while (iVar24 < *(int *)(param_1 + 0x450));
  }
  return;
}



// FUNCTION 140812130 FUN_140812130 body=158 status=ok
// SIG undefined FUN_140812130(void)

void FUN_140812130(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 local_res8;
  undefined2 local_res9;
  undefined1 local_resb;
  undefined1 local_18 [16];
  
  if (param_1[0x7c] != 0) {
    local_res9 = 0x9d95;
    local_res8 = 0xdf;
    local_resb = 0xff;
    FLinearColor::FLinearColor(local_18,&local_res8);
    (**(code **)(*param_1 + 0x188))
              (param_1,param_2,param_3,param_4,param_1[0x7c],param_1 + 0x10,local_18,param_5);
  }
  return;
}



// FUNCTION 1408121d0 DestructiveAllocateMap body=185 status=ok
// SIG undefined DestructiveAllocateMap(void)

void UPaperTileLayer::DestructiveAllocateMap(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x40) = param_2;
  *(int *)(param_1 + 0x44) = param_3;
  iVar2 = param_2 * param_3;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != iVar2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x70,iVar2);
    iVar3 = *(int *)(param_1 + 0x78);
  }
  *(int *)(param_1 + 0x78) = iVar3 + iVar2;
  if (*(int *)(param_1 + 0x7c) < iVar3 + iVar2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x70,iVar3);
  }
  puVar1 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x70));
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    puVar1 = puVar1 + 2;
  }
  *(int *)(param_1 + 0x68) = param_3;
  *(int *)(param_1 + 100) = param_2;
  return;
}



// FUNCTION 140812290 FUN_140812290 body=387 status=ok
// SIG undefined FUN_140812290(void)

ulonglong FUN_140812290(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar3 = 0;
  plVar4 = *(longlong **)(param_1 + 0x738);
  plVar2 = plVar4 + *(int *)(param_1 + 0x740);
  uVar5 = (longlong)*(int *)(param_1 + 0x740) & 0x1fffffffffffffff;
  if (plVar2 < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      if ((*plVar4 != 0) && (lVar1 = FWeakObjectPtr::Get(*plVar4 + 0x140), lVar1 != 0)) {
        (**(code **)(*param_2 + 0x30))(param_2,lVar1,&DAT_1468b5b70);
      }
      local_38 = FUN_140815bb0;
      uStack_30 = 0;
      local_48 = (longlong *)0x0;
      local_40 = 0;
      plVar2 = (longlong *)FMemory::Realloc(0,0x30);
      local_40 = 3;
      local_48 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_FUN_144012f30;
        FWeakObjectPtr::operator=(plVar2 + 1,param_1);
        *(undefined4 *)(plVar2 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar2 + 0x14) = local_38._4_4_;
        *(undefined4 *)(plVar2 + 3) = uStack_30;
        *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar2[5] = lVar1;
        *plVar2 = (longlong)&PTR_FUN_144012f78;
      }
      plVar2 = (longlong *)(**(code **)(*param_2 + 0x48))(param_2,&local_48);
      if (local_40 == 0) {
LAB_1408123d5:
        plVar2 = (longlong *)0x0;
        if (local_48 != (longlong *)0x0) {
          plVar2 = (longlong *)FMemory::Free(local_48);
        }
      }
      else if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x28))(local_48,0);
        if (local_48 != (longlong *)0x0) {
          local_48 = (longlong *)FMemory::Realloc(local_48,0);
        }
        local_40 = 0;
        goto LAB_1408123d5;
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 1408124c0 Empty body=121 status=ok
// SIG undefined Empty(void)

void TArray<FSpriteDrawCallRecord,FDefaultAllocator>::Empty(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x38);
    do {
      if (plVar1[0xf] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x1a;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 140812540 Eval body=806 status=ok
// SIG undefined Eval(void)

float * FInterpCurve<FVector>::Eval
                  (undefined8 *param_1,float *param_2,float param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  iVar9 = *(int *)(param_1 + 1);
  uVar13 = (ulonglong)iVar9;
  uVar12 = iVar9 - 1;
  if (iVar9 == 0) {
    fVar21 = *(float *)(param_4 + 1);
    *(undefined8 *)param_2 = *param_4;
    param_2[2] = fVar21;
    return param_2;
  }
  pfVar6 = (float *)*param_1;
  uVar14 = iVar9 - 1;
  if (*pfVar6 <= param_3) {
    lVar10 = uVar13 - 1;
    if (param_3 < pfVar6[lVar10 * 0xb]) {
      uVar14 = 0;
      while (1 < iVar9) {
        uVar8 = (int)((int)uVar13 + uVar14) / 2;
        uVar13 = uVar13 & 0xffffffff;
        if (param_3 < pfVar6[(longlong)(int)uVar8 * 0xb]) {
          uVar13 = (ulonglong)uVar8;
          uVar8 = uVar14;
        }
        uVar14 = uVar8;
        iVar9 = (int)uVar13 - uVar8;
      }
    }
    if (uVar14 != 0xffffffff) {
      if (uVar14 == uVar12) {
        if (*(char *)(param_1 + 2) == '\0') {
          fVar21 = pfVar6[lVar10 * 0xb + 3];
          *(undefined8 *)param_2 = *(undefined8 *)(pfVar6 + lVar10 * 0xb + 1);
          param_2[2] = fVar21;
          return param_2;
        }
        if (*(float *)((longlong)param_1 + 0x14) + pfVar6[lVar10 * 0xb] <= param_3)
        goto LAB_14081284e;
      }
      if ((*(char *)(param_1 + 2) == '\0') || (uVar14 != uVar12)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      lVar10 = (longlong)(int)uVar14;
      iVar9 = 0;
      if (!bVar7) {
        iVar9 = uVar14 + 1;
      }
      pfVar11 = pfVar6 + (longlong)iVar9 * 0xb;
      if (bVar7) {
        fVar21 = *(float *)((longlong)param_1 + 0x14);
      }
      else {
        fVar21 = *pfVar11 - pfVar6[lVar10 * 0xb];
      }
      if ((0.0 < fVar21) && (*(char *)(pfVar6 + lVar10 * 0xb + 10) != '\x02')) {
        fVar20 = (param_3 - pfVar6[lVar10 * 0xb]) / fVar21;
        if (*(char *)(pfVar6 + lVar10 * 0xb + 10) == '\0') {
          fVar21 = pfVar11[2];
          fVar1 = pfVar6[lVar10 * 0xb + 2];
          fVar15 = pfVar6[lVar10 * 0xb + 2];
          *param_2 = (pfVar11[1] - pfVar6[lVar10 * 0xb + 1]) * fVar20 + pfVar6[lVar10 * 0xb + 1];
          fVar18 = pfVar11[3];
          fVar2 = pfVar6[lVar10 * 0xb + 3];
          param_2[1] = (fVar21 - fVar1) * fVar20 + fVar15;
          param_2[2] = (fVar18 - fVar2) * fVar20 + pfVar6[lVar10 * 0xb + 3];
          return param_2;
        }
        fVar15 = fVar20 * fVar20;
        fVar1 = pfVar6[lVar10 * 0xb + 8];
        fVar18 = fVar15 * fVar20;
        fVar16 = fVar18 - fVar15;
        fVar19 = fVar15 * 3.0 - (fVar18 + fVar18);
        fVar17 = ((fVar18 + fVar18) - fVar15 * 3.0) + 1.0;
        fVar20 = (fVar18 - (fVar15 + fVar15)) + fVar20;
        fVar15 = pfVar11[5];
        fVar18 = pfVar6[lVar10 * 0xb + 3];
        fVar2 = pfVar6[lVar10 * 0xb + 2];
        *param_2 = fVar21 * pfVar6[lVar10 * 0xb + 7] * fVar20 + fVar17 * pfVar6[lVar10 * 0xb + 1] +
                   fVar21 * pfVar11[4] * fVar16 + fVar19 * pfVar11[1];
        fVar3 = pfVar11[3];
        fVar4 = pfVar6[lVar10 * 0xb + 9];
        fVar5 = pfVar11[6];
        param_2[1] = fVar21 * fVar1 * fVar20 + fVar17 * fVar2 + fVar21 * fVar15 * fVar16 +
                     fVar19 * pfVar11[2];
        param_2[2] = fVar21 * fVar4 * fVar20 + fVar17 * fVar18 + fVar21 * fVar5 * fVar16 +
                     fVar19 * fVar3;
        return param_2;
      }
      fVar21 = pfVar6[lVar10 * 0xb + 3];
      *(undefined8 *)param_2 = *(undefined8 *)(pfVar6 + lVar10 * 0xb + 1);
      param_2[2] = fVar21;
      return param_2;
    }
  }
LAB_14081284e:
  fVar21 = pfVar6[3];
  *(undefined8 *)param_2 = *(undefined8 *)(pfVar6 + 1);
  param_2[2] = fVar21;
  return param_2;
}



// FUNCTION 140812870 EvalDerivative body=1140 status=ok
// SIG undefined EvalDerivative(void)

float * FInterpCurve<FVector>::EvalDerivative
                  (undefined8 *param_1,float *param_2,float param_3,undefined8 *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  iVar10 = *(int *)(param_1 + 1);
  uVar14 = (ulonglong)iVar10;
  uVar13 = iVar10 - 1;
  if (iVar10 == 0) {
    fVar21 = *(float *)(param_4 + 1);
    *(undefined8 *)param_2 = *param_4;
    param_2[2] = fVar21;
    return param_2;
  }
  pfVar11 = (float *)*param_1;
  uVar15 = iVar10 - 1;
  if (*pfVar11 <= param_3) {
    lVar1 = uVar14 - 1;
    if (param_3 < pfVar11[lVar1 * 0xb]) {
      uVar15 = 0;
      while (1 < iVar10) {
        uVar9 = (int)((int)uVar14 + uVar15) / 2;
        uVar14 = uVar14 & 0xffffffff;
        if (param_3 < pfVar11[(longlong)(int)uVar9 * 0xb]) {
          uVar14 = (ulonglong)uVar9;
          uVar9 = uVar15;
        }
        uVar15 = uVar9;
        iVar10 = (int)uVar14 - uVar9;
      }
    }
    if (uVar15 != 0xffffffff) {
      if (uVar15 == uVar13) {
        if (*(char *)(param_1 + 2) == '\0') {
          fVar21 = pfVar11[lVar1 * 0xb + 6];
          *(undefined8 *)param_2 = *(undefined8 *)(pfVar11 + lVar1 * 0xb + 4);
          param_2[2] = fVar21;
          return param_2;
        }
        if (*(float *)((longlong)param_1 + 0x14) + pfVar11[lVar1 * 0xb] <= param_3) {
          fVar21 = pfVar11[6];
          *(undefined8 *)param_2 = *(undefined8 *)(pfVar11 + 4);
          param_2[2] = fVar21;
          return param_2;
        }
      }
      if ((*(char *)(param_1 + 2) == '\0') || (uVar15 != uVar13)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      pfVar12 = pfVar11 + (longlong)(int)uVar15 * 0xb;
      iVar10 = 0;
      if (!bVar8) {
        iVar10 = uVar15 + 1;
      }
      pfVar11 = pfVar11 + (longlong)iVar10 * 0xb;
      if (bVar8) {
        fVar21 = *(float *)((longlong)param_1 + 0x14);
      }
      else {
        fVar21 = *pfVar11 - *pfVar12;
      }
      if ((0.0 < fVar21) && (*(char *)(pfVar12 + 10) != '\x02')) {
        fVar18 = 1.0 / fVar21;
        if (*(char *)(pfVar12 + 10) == '\0') {
          fVar21 = pfVar11[2];
          fVar2 = pfVar12[2];
          *param_2 = (pfVar11[1] - pfVar12[1]) * fVar18;
          fVar3 = pfVar11[3];
          fVar4 = pfVar12[3];
          param_2[1] = (fVar21 - fVar2) * fVar18;
          param_2[2] = (fVar3 - fVar4) * fVar18;
          return param_2;
        }
        fVar19 = fVar21 * pfVar12[8];
        fVar16 = fVar21 * pfVar12[7];
        fVar2 = pfVar12[3];
        fVar17 = fVar21 * pfVar12[9];
        fVar3 = pfVar11[3];
        fVar22 = fVar21 + fVar21;
        fVar4 = pfVar11[6];
        fVar20 = (param_3 - *pfVar12) / fVar21;
        fVar5 = pfVar12[1];
        fVar6 = pfVar11[1];
        fVar23 = fVar20 * fVar20;
        fVar7 = pfVar11[4];
        param_2[1] = ((((pfVar12[2] * -6.0 - fVar19 * 4.0) - fVar22 * pfVar11[5]) + pfVar11[2] * 6.0
                      ) * fVar20 +
                      (((pfVar11[5] * fVar21 + fVar19) * 3.0 + pfVar12[2] * 6.0) - pfVar11[2] * 6.0)
                      * fVar23 + fVar19) * fVar18;
        param_2[2] = ((((fVar2 * -6.0 - fVar17 * 4.0) - fVar22 * fVar4) + fVar3 * 6.0) * fVar20 +
                      (((fVar4 * fVar21 + fVar17) * 3.0 + fVar2 * 6.0) - fVar3 * 6.0) * fVar23 +
                     fVar17) * fVar18;
        *param_2 = ((((fVar5 * -6.0 - fVar16 * 4.0) - fVar22 * fVar7) + fVar6 * 6.0) * fVar20 +
                    (((fVar7 * fVar21 + fVar16) * 3.0 + fVar5 * 6.0) - fVar6 * 6.0) * fVar23 +
                   fVar16) * fVar18;
        return param_2;
      }
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      return param_2;
    }
  }
  fVar21 = pfVar11[9];
  *(undefined8 *)param_2 = *(undefined8 *)(pfVar11 + 7);
  param_2[2] = fVar21;
  return param_2;
}



// FUNCTION 140812cf0 EvalSecondDerivative body=938 status=ok
// SIG undefined EvalSecondDerivative(void)

float * FInterpCurve<FVector>::EvalSecondDerivative
                  (undefined8 *param_1,float *param_2,float param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  iVar11 = *(int *)(param_1 + 1);
  uVar15 = (ulonglong)iVar11;
  uVar14 = iVar11 - 1;
  if (iVar11 == 0) {
    fVar17 = *(float *)(param_4 + 1);
    *(undefined8 *)param_2 = *param_4;
    param_2[2] = fVar17;
  }
  else {
    pfVar12 = (float *)*param_1;
    if (*pfVar12 <= param_3) {
      lVar9 = uVar15 * 0xb;
      uVar10 = uVar14;
      uVar8 = 0;
      if (param_3 < pfVar12[lVar9 + -0xb]) {
        while (uVar10 = uVar8, 1 < iVar11) {
          uVar10 = (int)((int)uVar15 + uVar8) / 2;
          uVar15 = uVar15 & 0xffffffff;
          if (param_3 < pfVar12[(longlong)(int)uVar10 * 0xb]) {
            uVar15 = (ulonglong)uVar10;
            uVar10 = uVar8;
          }
          uVar8 = uVar10;
          iVar11 = (int)uVar15 - uVar10;
        }
      }
      if ((uVar10 != 0xffffffff) &&
         ((uVar10 != uVar14 ||
          ((*(char *)(param_1 + 2) != '\0' &&
           (param_3 < pfVar12[lVar9 + -0xb] + *(float *)((longlong)param_1 + 0x14))))))) {
        if ((*(char *)(param_1 + 2) == '\0') || (uVar10 != uVar14)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pfVar13 = pfVar12 + (longlong)(int)uVar10 * 0xb;
        uVar14 = 0;
        if (!bVar7) {
          uVar14 = uVar10 + 1;
        }
        pfVar12 = pfVar12 + (longlong)(int)uVar14 * 0xb;
        if (bVar7) {
          fVar17 = *(float *)((longlong)param_1 + 0x14);
        }
        else {
          fVar17 = *pfVar12 - *pfVar13;
        }
        if (((0.0 < fVar17) && (*(char *)(pfVar13 + 10) != '\x02')) &&
           (*(char *)(pfVar13 + 10) != '\0')) {
          fVar1 = pfVar13[9];
          fVar2 = pfVar13[2];
          fVar3 = pfVar12[2];
          fVar4 = pfVar13[8];
          fVar16 = (param_3 - *pfVar13) / fVar17;
          fVar5 = pfVar12[5];
          fVar18 = fVar17 + fVar17;
          fVar19 = 1.0 / (fVar17 * fVar17);
          fVar6 = pfVar12[6];
          *param_2 = ((((pfVar12[4] * fVar17 + fVar17 * pfVar13[7]) * 6.0 + pfVar13[1] * 12.0) -
                      pfVar12[1] * 12.0) * fVar16 +
                     ((pfVar13[1] * -6.0 - fVar17 * pfVar13[7] * 4.0) - pfVar12[4] * fVar18) +
                     pfVar12[1] * 6.0) * fVar19;
          param_2[1] = ((((fVar5 * fVar17 + fVar17 * fVar4) * 6.0 + fVar2 * 12.0) - fVar3 * 12.0) *
                        fVar16 + ((fVar2 * -6.0 - fVar17 * fVar4 * 4.0) - fVar5 * fVar18) +
                                 fVar3 * 6.0) * fVar19;
          param_2[2] = ((((fVar6 * fVar17 + fVar17 * fVar1) * 6.0 + pfVar13[3] * 12.0) -
                        pfVar12[3] * 12.0) * fVar16 +
                       ((pfVar13[3] * -6.0 - fVar17 * fVar1 * 4.0) - fVar6 * fVar18) +
                       pfVar12[3] * 6.0) * fVar19;
          return param_2;
        }
      }
    }
    param_2[2] = 0.0;
    param_2[0] = 0.0;
    param_2[1] = 0.0;
  }
  return param_2;
}



// FUNCTION 1408130a0 FUN_1408130a0 body=138 status=ok
// SIG undefined FUN_1408130a0(void)

void FUN_1408130a0(undefined8 *param_1)

{
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_1408233d0(param_1[2],param_1 + 4);
  *(undefined8 *)(param_1[2] + 0x3e0) = param_1[0x1e];
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x000140813127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 140813130 FUN_140813130 body=127 status=ok
// SIG undefined FUN_140813130(void)

void FUN_140813130(undefined8 *param_1)

{
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_140823820(param_1[2],param_1 + 4,*(undefined4 *)(param_1 + 0x1e));
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001408131ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 1408131b0 Finalize body=41 status=ok
// SIG undefined Finalize(void)

void FSpriteGeometryCollisionBuilderBase::Finalize(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x290))();
                    /* WARNING: Could not recover jumptable at 0x0001408131d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x278))();
  return;
}



// FUNCTION 1408131e0 FUN_1408131e0 body=1555 status=ok
// SIG undefined FUN_1408131e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408131e0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  void *_Src_00;
  longlong lVar16;
  int iVar17;
  float *pfVar18;
  longlong lVar19;
  float *pfVar20;
  float fVar21;
  undefined1 auStack_1f8 [32];
  void *local_1d8;
  int local_1d0;
  int local_1cc;
  longlong *local_1c8;
  ulonglong local_1c0;
  int local_1b8;
  float *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  longlong *local_1a0;
  void *local_198;
  int local_190;
  undefined4 local_18c;
  undefined4 *local_188;
  ulonglong local_180;
  longlong *local_178;
  longlong *local_170;
  longlong local_168;
  longlong *local_160;
  undefined **local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  byte local_13c;
  undefined4 local_138;
  undefined ***local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  if ((*(longlong *)(param_1 + 0x730) != 0) && (2 < *(int *)(param_4 + 8))) {
    local_1c8 = (longlong *)0x0;
    local_1c0 = 0;
    local_178 = param_2;
    local_170 = param_3;
    local_168 = param_1;
    PaperGeomTools::GenerateConvexPolygonsFromTriangles(&local_1c8,param_4);
    uVar15 = (ulonglong)(int)local_1c0;
    local_1d8 = (void *)0x0;
    local_160 = local_1c8 + uVar15 * 2;
    local_1cc = 0;
    local_1a0 = local_1c8;
    if (local_1c8 != local_160) {
      do {
        iVar7 = local_1cc;
        _Src_00 = local_1d8;
        local_1a8 = (int)local_1a0[1];
        lVar19 = (longlong)local_1a8;
        pfVar20 = (float *)0x0;
        _Src = (void *)*local_1a0;
        local_1b0 = (float *)0x0;
        if (local_1a8 == 0) {
          local_1a4 = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_1b0,local_1a8,0);
          pfVar20 = local_1b0;
          _guard_xfg_dispatch_icall_nop(local_1b0,_Src,lVar19 << 3);
        }
        iVar5 = local_1a8;
        iVar11 = 0;
        local_1d0 = 0;
        if (iVar7 != local_1a8) {
          TArray<float,FDefaultAllocator>::ResizeTo(&local_1d8,local_1a8);
          _Src_00 = local_1d8;
        }
        pfVar18 = pfVar20;
        iVar7 = local_1d0;
        if (0 < iVar5) {
          do {
            lVar19 = 0;
            local_1b8 = iVar11 + 1;
            lVar16 = (longlong)(local_1b8 % iVar5);
            iVar11 = (int)local_178[1];
            if (0 < iVar11) {
              lVar3 = *local_178;
              iVar17 = 1;
              pfVar8 = (float *)(lVar3 + 4);
              do {
                iVar9 = iVar17 % iVar11;
                if ((ABS(*pfVar18 - pfVar8[-1]) <= 2e-05) && (ABS(pfVar18[1] - *pfVar8) <= 2e-05)) {
                  fVar21 = pfVar20[lVar16 * 2];
                  if ((2e-05 < ABS(fVar21 - *(float *)(lVar3 + (longlong)iVar9 * 8))) ||
                     (2e-05 < ABS(pfVar20[lVar16 * 2 + 1] -
                                  *(float *)(lVar3 + 4 + (longlong)iVar9 * 8)))) goto LAB_14081343d;
LAB_1408133fd:
                  lVar16 = *local_170;
                  local_1d0 = iVar7 + 1;
                  if (local_1cc < local_1d0) {
                    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1d8,iVar7);
                  }
                  *(undefined4 *)((longlong)local_1d8 + (longlong)iVar7 * 4) =
                       *(undefined4 *)(lVar16 + lVar19 * 4);
                  _Src_00 = local_1d8;
                  goto LAB_1408134ca;
                }
                fVar21 = pfVar20[lVar16 * 2];
LAB_14081343d:
                if ((((ABS(fVar21 - pfVar8[-1]) <= 2e-05) &&
                     (ABS(pfVar20[lVar16 * 2 + 1] - *pfVar8) <= 2e-05)) &&
                    (ABS(*pfVar18 - *(float *)(lVar3 + (longlong)iVar9 * 8)) <= 2e-05)) &&
                   (ABS(pfVar18[1] - *(float *)(lVar3 + 4 + (longlong)iVar9 * 8)) <= 2e-05))
                goto LAB_1408133fd;
                iVar17 = iVar17 + 1;
                lVar19 = lVar19 + 1;
                pfVar8 = pfVar8 + 2;
              } while (lVar19 < iVar11);
            }
            local_1d0 = iVar7 + 1;
            if (local_1cc < local_1d0) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1d8,iVar7);
              _Src_00 = local_1d8;
            }
            *(undefined4 *)((longlong)_Src_00 + (longlong)iVar7 * 4) = 0;
LAB_1408134ca:
            param_1 = local_168;
            pfVar18 = pfVar18 + 2;
            iVar7 = local_1d0;
            iVar11 = local_1b8;
          } while (local_1b8 < iVar5);
        }
        iVar7 = local_1d0;
        local_188 = (undefined4 *)0x0;
        local_180 = 0;
        local_198 = (void *)0x0;
        local_190 = local_1d0;
        if (local_1d0 == 0) {
          local_18c = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(&local_198,local_1d0,0);
          _guard_xfg_dispatch_icall_nop(local_198,_Src_00,(longlong)iVar7 << 2);
        }
        CreateExtrudedConvexHull(&local_188,&local_1b0);
        puVar6 = local_188;
        local_130 = &local_158;
        local_13c = local_13c | 1;
        local_158 = &PTR_FUN_1440fbd68;
        local_dc = _DAT_1468b5d90;
        local_e8 = _DAT_1468b5d90;
        local_d4 = DAT_1468b5d98;
        local_e0 = DAT_1468b5d98;
        local_c8 = _DAT_1468b5b70;
        uStack_c0 = uRam00000001468b5b78;
        local_b8 = _DAT_1468b5b80;
        uStack_b0 = uRam00000001468b5b88;
        local_150 = 0;
        local_148 = 0;
        local_140 = 3;
        local_138 = 6;
        local_128 = 3;
        local_120 = 0;
        local_110 = 0;
        local_108 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_d0 = 0;
        local_a8 = _DAT_1468b5b90;
        uStack_a4 = uRam00000001468b5b94;
        uStack_a0 = uRam00000001468b5b98;
        uStack_9c = uRam00000001468b5b9c;
        local_98 = 0;
        uStack_90 = 0;
        if (0 < (int)local_180) {
          uVar15 = local_180 & 0xffffffff;
          puVar12 = local_188;
          do {
            lVar19 = (longlong)(int)local_f0;
            iVar7 = (int)local_f0 + 1;
            if (local_f0._4_4_ < iVar7) {
              uVar10 = local_f0 & 0xffffffff;
              local_f0._0_4_ = iVar7;
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_f8,uVar10);
              iVar7 = (int)local_f0;
            }
            local_f0._0_4_ = iVar7;
            iVar7 = (int)local_f0;
            puVar1 = (undefined4 *)(local_f8 + lVar19 * 0xc);
            if (puVar1 != (undefined4 *)0x0) {
              fVar21 = *(float *)(param_1 + 0x728);
              uVar2 = puVar12[1];
              *puVar1 = *puVar12;
              puVar1[2] = uVar2;
              puVar1[1] = fVar21 * -0.5;
            }
            lVar19 = (longlong)(int)local_f0;
            local_f0._0_4_ = (int)local_f0 + 1;
            if (local_f0._4_4_ < (int)local_f0) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_f8,iVar7);
            }
            puVar1 = (undefined4 *)(local_f8 + lVar19 * 0xc);
            if (puVar1 != (undefined4 *)0x0) {
              fVar21 = *(float *)(param_1 + 0x728);
              uVar2 = puVar12[1];
              *puVar1 = *puVar12;
              puVar1[2] = uVar2;
              puVar1[1] = fVar21 * 0.5;
            }
            puVar12 = puVar12 + 2;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        FUN_142321610(&local_158);
        lVar19 = *(longlong *)(param_1 + 0x730);
        iVar7 = *(int *)(lVar19 + 0x60);
        *(int *)(lVar19 + 0x60) = iVar7 + 1;
        if (*(int *)(lVar19 + 100) < iVar7 + 1) {
          TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(lVar19 + 0x58,iVar7);
        }
        FUN_14080b9e0((longlong)iVar7 * 0xd0 + *(longlong *)(lVar19 + 0x58),&local_158);
        if (local_f8 != 0) {
          FMemory::Free();
        }
        local_158 = &PTR__scalar_deleting_destructor__1440fbd58;
        if (local_108 != 0) {
          FMemory::Free();
        }
        if (puVar6 != (undefined4 *)0x0) {
          FMemory::Free(puVar6);
        }
        if (pfVar20 != (float *)0x0) {
          FMemory::Free(pfVar20);
        }
        local_1a0 = local_1a0 + 2;
      } while (local_1a0 != local_160);
      if (local_1d8 != (void *)0x0) {
        FMemory::Free();
      }
      uVar15 = local_1c0 & 0xffffffff;
    }
    plVar4 = local_1c8;
    uVar14 = (uint)uVar15;
    plVar13 = local_1c8;
    while (uVar14 != 0) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 2;
      uVar14 = (int)uVar15 - 1;
      uVar15 = (ulonglong)uVar14;
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
  }
  return;
}



// FUNCTION 140813800 GenerateConvexHullFromPoints body=1419 status=ok
// SIG undefined GenerateConvexHullFromPoints(void)

void PaperGeomTools::GenerateConvexHullFromPoints(longlong *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  uint uVar16;
  int *piVar17;
  longlong lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  longlong local_res10;
  int local_res18;
  int local_res20;
  int *local_a0;
  undefined8 local_98;
  int *local_90;
  int local_88;
  int local_84;
  
  iVar19 = (int)param_2[1];
  lVar18 = (longlong)iVar19;
  if (2 < iVar19) {
    piVar14 = (int *)0x1;
    piVar9 = (int *)0x0;
    iVar13 = 0;
    pfVar4 = (float *)*param_2;
    local_res18 = 0;
    iVar10 = local_res18;
    local_res18 = 0;
    pfVar7 = pfVar4;
    if (1 < lVar18) {
      lVar6 = 1;
      piVar17 = piVar9;
      local_res18 = iVar10;
      if (4 < lVar18) {
        uVar16 = 3;
        do {
          fVar21 = pfVar4[1];
          if ((pfVar7[lVar6 * 2 + 1] < fVar21) ||
             ((pfVar7[lVar6 * 2 + 1] == fVar21 &&
              (pfVar7[lVar6 * 2] <= *pfVar4 && *pfVar4 != pfVar7[lVar6 * 2])))) {
            *(undefined8 *)pfVar4 = *(undefined8 *)(pfVar7 + lVar6 * 2);
            pfVar7 = (float *)*param_2;
            fVar21 = pfVar4[1];
            piVar17 = piVar14;
          }
          if ((pfVar7[lVar6 * 2 + 3] < fVar21) ||
             ((pfVar7[lVar6 * 2 + 3] == fVar21 &&
              (pfVar7[lVar6 * 2 + 2] <= *pfVar4 && *pfVar4 != pfVar7[lVar6 * 2 + 2])))) {
            piVar17 = (int *)(ulonglong)(uVar16 - 1);
            *(undefined8 *)pfVar4 = *(undefined8 *)(pfVar7 + lVar6 * 2 + 2);
            pfVar7 = (float *)*param_2;
            fVar21 = pfVar4[1];
          }
          if ((pfVar7[lVar6 * 2 + 5] < fVar21) ||
             ((pfVar7[lVar6 * 2 + 5] == fVar21 &&
              (pfVar7[lVar6 * 2 + 4] <= *pfVar4 && *pfVar4 != pfVar7[lVar6 * 2 + 4])))) {
            piVar17 = (int *)(ulonglong)uVar16;
            *(undefined8 *)pfVar4 = *(undefined8 *)(pfVar7 + lVar6 * 2 + 4);
            pfVar7 = (float *)*param_2;
            fVar21 = pfVar4[1];
          }
          if ((pfVar7[lVar6 * 2 + 7] < fVar21) ||
             ((pfVar7[lVar6 * 2 + 7] == fVar21 &&
              (pfVar7[lVar6 * 2 + 6] <= *pfVar4 && *pfVar4 != pfVar7[lVar6 * 2 + 6])))) {
            piVar17 = (int *)(ulonglong)(uVar16 + 1);
            *(undefined8 *)pfVar4 = *(undefined8 *)(pfVar7 + lVar6 * 2 + 6);
            pfVar7 = (float *)*param_2;
          }
          local_res18 = (int)piVar17;
          piVar14 = (int *)(ulonglong)((int)piVar14 + 4);
          uVar16 = uVar16 + 4;
          lVar6 = lVar6 + 4;
        } while (lVar6 < lVar18 + -3);
      }
      iVar13 = (int)piVar17;
      if (lVar6 < lVar18) {
        pfVar7 = (float *)*param_2;
        do {
          if ((pfVar7[lVar6 * 2 + 1] < pfVar4[1]) ||
             ((pfVar7[lVar6 * 2 + 1] == pfVar4[1] &&
              (pfVar7[lVar6 * 2] <= *pfVar4 && *pfVar4 != pfVar7[lVar6 * 2])))) {
            *(undefined8 *)pfVar4 = *(undefined8 *)(pfVar7 + lVar6 * 2);
            pfVar7 = (float *)*param_2;
            piVar17 = piVar14;
          }
          iVar13 = (int)piVar17;
          piVar14 = (int *)(ulonglong)((int)piVar14 + 1);
          lVar6 = lVar6 + 1;
          local_res18 = iVar13;
        } while (lVar6 < lVar18);
      }
    }
    local_a0 = (int *)(longlong)iVar13;
    local_90 = (int *)0x0;
    local_84 = 0;
    local_res20 = 0;
    local_88 = 0;
    piVar14 = piVar9;
    if (iVar19 != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(&local_90,iVar19);
      local_res20 = local_88;
      piVar14 = local_90;
      iVar10 = local_84;
      if (0 < iVar19) {
        do {
          iVar13 = (int)piVar9;
          if (iVar13 != local_res18) {
            local_88 = local_res20 + 1;
            if (iVar10 < local_88) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_90,local_res20);
              piVar14 = local_90;
              iVar10 = local_84;
            }
            piVar14[local_res20] = iVar13;
            local_res20 = local_88;
          }
          piVar9 = (int *)(ulonglong)(iVar13 + 1U);
        } while ((int)(iVar13 + 1U) < iVar19);
      }
    }
    piVar9 = local_a0;
    if (0 < local_res20) {
      local_res10 = 1;
      lVar18 = local_res10;
      piVar17 = piVar14;
      lVar6 = (longlong)local_res20;
      do {
        for (; lVar18 < local_res20; lVar18 = lVar18 + 1) {
          lVar5 = *param_2;
          fVar21 = *(float *)(lVar5 + (longlong)piVar14[lVar18] * 8);
          fVar1 = *(float *)(lVar5 + 4 + (longlong)piVar14[lVar18] * 8);
          fVar2 = pfVar7[(longlong)piVar9 * 2];
          fVar3 = pfVar7[(longlong)piVar9 * 2 + 1];
          fVar20 = (float)FGenericPlatformMath::Atan2
                                    (*(float *)(lVar5 + 4 + (longlong)*piVar17 * 8) -
                                     pfVar7[(longlong)piVar9 * 2 + 1],
                                     *(float *)(lVar5 + (longlong)*piVar17 * 8) -
                                     pfVar7[(longlong)piVar9 * 2]);
          fVar21 = (float)FGenericPlatformMath::Atan2(fVar1 - fVar3,fVar21 - fVar2);
          if (fVar21 < fVar20) {
            iVar19 = *piVar17;
            *piVar17 = piVar14[lVar18];
            piVar14[lVar18] = iVar19;
          }
        }
        lVar18 = local_res10 + 1;
        piVar17 = piVar17 + 1;
        lVar6 = lVar6 + -1;
        local_res10 = lVar18;
      } while (lVar6 != 0);
    }
    lVar18 = 0;
    local_98 = 1;
    local_a0 = (int *)0x0;
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a0,0);
    piVar9 = local_a0;
    iVar19 = local_res20 + 1;
    *local_a0 = local_res18;
    local_88 = iVar19;
    if (local_84 < iVar19) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_90,local_res20);
      piVar14 = local_90;
    }
    uVar15 = local_98 & 0xffffffff;
    piVar14[local_res20] = local_res18;
    iVar10 = (int)local_98;
    if (0 < iVar19) {
      do {
        iVar13 = piVar14[lVar18];
        lVar6 = *param_2;
        iVar12 = (int)uVar15;
        while (1 < iVar12) {
          lVar5 = *param_2;
          iVar12 = (int)uVar15;
          iVar10 = iVar12 + -1;
          lVar8 = (longlong)piVar9[iVar12 + -2];
          if (0.0 <= (*(float *)(lVar5 + (longlong)piVar9[iVar10] * 8) -
                     *(float *)(lVar5 + lVar8 * 8)) *
                     (*(float *)(lVar6 + 4 + (longlong)iVar13 * 8) -
                     *(float *)(lVar5 + 4 + lVar8 * 8)) -
                     (*(float *)(lVar5 + 4 + (longlong)piVar9[iVar10] * 8) -
                     *(float *)(lVar5 + 4 + lVar8 * 8)) *
                     (*(float *)(lVar6 + (longlong)iVar13 * 8) - *(float *)(lVar5 + lVar8 * 8)))
          break;
          iVar11 = (iVar12 - iVar10) + -1;
          if (iVar11 != 0) {
            ::_guard_xfg_dispatch_icall_nop(piVar9 + iVar10,piVar9 + iVar12,(longlong)iVar11 << 2);
          }
          local_98 = CONCAT44(local_98._4_4_,iVar10);
          TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&local_a0);
          uVar15 = local_98 & 0xffffffff;
          piVar9 = local_a0;
          iVar12 = (int)local_98;
        }
        uVar16 = iVar12 + 1;
        uVar15 = (ulonglong)uVar16;
        local_98._4_4_ = (int)(local_98 >> 0x20);
        local_98 = CONCAT44(local_98._4_4_,uVar16);
        if (local_98._4_4_ < (int)uVar16) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a0,iVar12);
          uVar15 = local_98 & 0xffffffff;
          piVar9 = local_a0;
        }
        iVar10 = (int)uVar15;
        lVar18 = lVar18 + 1;
        piVar9[iVar12] = iVar13;
      } while (lVar18 < iVar19);
    }
    iVar19 = iVar10 + -1;
    iVar13 = (iVar10 - iVar19) + -1;
    if (iVar13 != 0) {
      ::_guard_xfg_dispatch_icall_nop(piVar9 + iVar19,piVar9 + iVar10,(longlong)iVar13 << 2);
    }
    local_98 = CONCAT44(local_98._4_4_,iVar19);
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&local_a0);
    iVar19 = (int)local_98;
    lVar18 = (longlong)(int)local_98;
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != (int)local_98) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,local_98 & 0xffffffff);
    }
    piVar9 = local_a0;
    if (0 < iVar19) {
      lVar6 = 0;
      do {
        iVar19 = (int)param_1[1];
        iVar10 = piVar9[lVar6];
        lVar5 = *param_2;
        *(int *)(param_1 + 1) = iVar19 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar19 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar19);
        }
        lVar6 = lVar6 + 1;
        *(undefined8 *)(*param_1 + (longlong)iVar19 * 8) =
             *(undefined8 *)(lVar5 + (longlong)iVar10 * 8);
        piVar14 = local_90;
      } while (lVar6 < lVar18);
    }
    if (piVar9 != (int *)0x0) {
      FMemory::Free(piVar9);
    }
    if (piVar14 != (int *)0x0) {
      FMemory::Free(piVar14);
    }
  }
  return;
}



// FUNCTION 140813d90 GenerateConvexPolygonsFromTriangles body=792 status=ok
// SIG undefined GenerateConvexPolygonsFromTriangles(void)

void PaperGeomTools::GenerateConvexPolygonsFromTriangles(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *_Src;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  int local_68;
  int iStack_64;
  undefined8 *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  uint local_40;
  uint local_3c;
  
  uVar7 = 0;
  local_48 = 0;
  local_3c = 0;
  uVar11 = uVar7;
  uVar13 = uVar7;
  uVar15 = uVar7;
  if (0 < (int)param_2[1]) {
    do {
      local_40 = (int)uVar11 + 1;
      if ((int)uVar13 < (int)local_40) {
        TArray<`PaperGeomTools::GenerateConvexPolygonsFromTriangles'::`2'::FLocalTriangle,FDefaultAllocator>
        ::ResizeGrow(&local_48,uVar11);
        uVar13 = (ulonglong)local_3c;
        uVar15 = local_48;
      }
      uVar12 = (ulonglong)local_40;
      piVar1 = (int *)(uVar15 + (longlong)(int)uVar11 * 0xc);
      iVar5 = (int)uVar7;
      *piVar1 = iVar5;
      piVar1[2] = iVar5 + 2;
      uVar7 = (ulonglong)(iVar5 + 3U);
      piVar1[1] = iVar5 + 1;
      uVar11 = uVar12;
      uVar14 = local_40;
    } while ((int)(iVar5 + 3U) < (int)param_2[1]);
    while (0 < (int)uVar14) {
      local_58 = (undefined8 *)0x0;
      local_4c = 0;
      iVar6 = (int)uVar12;
      uVar14 = iVar6 - 1;
      uVar2 = *(undefined8 *)(uVar15 + (longlong)(int)uVar14 * 0xc);
      iVar5 = *(int *)(uVar15 + 8 + (longlong)(int)uVar14 * 0xc);
      iVar10 = (iVar6 - uVar14) + -1;
      if (iVar10 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(uVar15 + (longlong)(int)uVar14 * 0xc),
                   (void *)(uVar15 + (longlong)iVar6 * 0xc),(longlong)iVar10 * 0xc);
      }
      local_68 = (int)uVar2;
      lVar3 = *param_2;
      uVar12 = (ulonglong)uVar14;
      local_50 = 1;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,0);
      iVar6 = local_50;
      lVar9 = (longlong)local_50;
      iStack_64 = (int)((ulonglong)uVar2 >> 0x20);
      local_50 = local_50 + 1;
      *local_58 = *(undefined8 *)(lVar3 + (longlong)local_68 * 8);
      lVar3 = *param_2;
      iVar10 = local_50;
      if (local_4c < local_50) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,iVar6);
        iVar10 = local_50;
      }
      local_50 = iVar10 + 1;
      local_58[lVar9] = *(undefined8 *)(lVar3 + (longlong)iStack_64 * 8);
      lVar3 = *param_2;
      if (local_4c < local_50) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,iVar10);
      }
      lVar9 = 0;
      iVar6 = 0;
      local_58[iVar10] = *(undefined8 *)(lVar3 + (longlong)iVar5 * 8);
      if (0 < (int)uVar14) {
        do {
          lVar3 = *param_2;
          piVar1 = (int *)(uVar15 + lVar9 * 0xc);
          cVar4 = MergeTriangleIntoPolygon
                            (&local_58,lVar3 + (longlong)*piVar1 * 8,lVar3 + (longlong)piVar1[1] * 8
                             ,lVar3 + (longlong)piVar1[2] * 8,1);
          if (cVar4 != '\0') {
            iVar10 = (int)uVar12;
            iVar5 = (iVar10 - iVar6) + -1;
            if (0 < iVar5) {
              iVar5 = 1;
            }
            if (iVar5 != 0) {
              ::_guard_xfg_dispatch_icall_nop
                        ((void *)(uVar15 + (longlong)iVar6 * 0xc),
                         (void *)(uVar15 + (longlong)(iVar10 - iVar5) * 0xc),(longlong)iVar5 * 0xc);
            }
            local_40 = iVar10 - 1;
            TArray<`PaperGeomTools::GenerateConvexPolygonsFromTriangles'::`2'::FLocalTriangle,FDefaultAllocator>
            ::ResizeShrink(&local_48);
            uVar12 = (ulonglong)local_40;
            iVar6 = -1;
            lVar9 = -1;
            uVar15 = local_48;
          }
          iVar6 = iVar6 + 1;
          lVar9 = lVar9 + 1;
        } while (iVar6 < (int)uVar12);
      }
      iVar5 = local_50;
      _Src = local_58;
      lVar3 = param_1[1];
      iVar6 = (int)lVar3 + 1;
      *(int *)(param_1 + 1) = iVar6;
      if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1);
      }
      puVar8 = (undefined8 *)((longlong)(int)lVar3 * 0x10 + *param_1);
      *puVar8 = 0;
      *(int *)(puVar8 + 1) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar8,iVar5,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src,(longlong)iVar5 << 3);
      }
      if (_Src != (undefined8 *)0x0) {
        FMemory::Free(_Src);
      }
      uVar14 = (uint)uVar12;
    }
    if (uVar15 != 0) {
      FMemory::Free(uVar15);
    }
  }
  return;
}



// FUNCTION 1408140b0 GenerateNewLayerName body=988 status=ok
// SIG undefined GenerateNewLayerName(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 UPaperTileMap::GenerateNewLayerName(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  ulonglong *puStack_180;
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  undefined8 local_170;
  longlong *plStack_168;
  undefined4 *local_158;
  ulonglong *puStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48 [4];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar10 = 0;
  plVar7 = *(longlong **)(param_2 + 0x78);
  local_c8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0xffffffff;
  local_94 = 0;
  uVar9 = (longlong)*(int *)(param_2 + 0x80) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_2 + 0x80) < plVar7) {
    uVar9 = uVar10;
  }
  local_88 = 0;
  local_80 = 0;
  if (uVar9 != 0) {
    do {
      uVar5 = FText::ToString(*plVar7 + 0x28);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&local_c8,local_178,uVar5,0);
      uVar10 = uVar10 + 1;
      plVar7 = plVar7 + 1;
    } while (uVar10 != uVar9);
  }
  FText::FText(param_1);
  local_188 = local_78;
  puStack_180 = local_48;
  do {
    *(int *)(param_2 + 0xa0) = *(int *)(param_2 + 0xa0) + 1;
    local_170 = 0;
    plStack_168 = (longlong *)0x0;
    uVar5 = FUN_141601df0();
    lVar6 = FText::AsNumber(local_e0,*(undefined4 *)(param_2 + 0xa0),uVar5,&local_170);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_108,L"Layer {0}",L"Paper2D",L"NewLayerNameFormatString");
    plVar7 = (longlong *)FTextFormat::FTextFormat(local_f0,uVar5);
    local_78[0] = 4;
    FText::FText(local_68,lVar6);
    puStack_180 = (ulonglong *)plVar7[1];
    local_188 = (undefined4 *)*plVar7;
    local_50 = '\x01';
    if (puStack_180 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(puStack_180 + 1) = (int)puStack_180[1] + 1;
      UNLOCK();
    }
    local_158 = local_78;
    puStack_150 = local_48;
    uVar5 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_148,&local_158);
    uVar5 = FText::Format(local_120,&local_188,uVar5);
    FText::FText(local_138,uVar5);
    plVar2 = local_118;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_118 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar8 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_148);
    plVar2 = local_60;
    if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar8 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    plVar7 = (longlong *)plVar7[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar8 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    plVar7 = *(longlong **)(lVar6 + 8);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar8 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    FText::operator=(param_1,local_138);
    plVar7 = local_130;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_130 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar8 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    plVar7 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_100 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar8 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    plVar7 = plStack_168;
    if (plStack_168 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_168 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_168)(plStack_168);
        LOCK();
        piVar8 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    uVar5 = FText::ToString(param_1);
    piVar8 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                              (&local_c8,local_174,uVar5);
  } while (*piVar8 != -1);
  local_80 = 0;
  if (local_88 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_c8);
  return param_1;
}



// FUNCTION 1408144a0 FUN_1408144a0 body=1833 status=ok
// SIG undefined FUN_1408144a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408144a0(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  undefined4 param_5,longlong param_6)

{
  ulonglong *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  ulonglong uVar12;
  bool bVar13;
  uint5 uVar14;
  unkbyte9 Var15;
  undefined1 auVar16 [13];
  undefined1 auVar17 [13];
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  float *pfVar28;
  int *piVar29;
  undefined1 *_Src;
  undefined8 *puVar30;
  longlong *plVar31;
  undefined8 *puVar32;
  uint uVar33;
  ulonglong uVar34;
  int *piVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 uVar42;
  float fVar41;
  float fVar43;
  float fVar44;
  undefined1 local_res20 [8];
  undefined1 *in_stack_fffffffffffffe58;
  undefined1 local_178;
  undefined1 uStack_177;
  undefined1 uStack_176;
  undefined1 uStack_175;
  undefined1 uStack_174;
  undefined1 uStack_173;
  undefined1 local_172;
  uint local_170;
  undefined8 local_168;
  float local_160;
  float local_158;
  float fStack_154;
  float local_150;
  undefined8 *local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined8 *local_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  int local_f8;
  undefined4 local_f4;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined *local_d8;
  undefined1 *puStack_d0;
  undefined1 local_c8 [136];
  
  local_170 = *(uint *)(param_1 + 0x18);
  if ((local_170 >> 0xb & 1) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x120);
    for (plVar31 = plVar6; plVar31 != plVar6 + *(int *)(param_1 + 0x128); plVar31 = plVar31 + 1) {
      if (*plVar31 == *(longlong *)(param_2 + 0x350)) {
        if ((int)((longlong)plVar31 - (longlong)plVar6 >> 3) != -1) {
          local_170 = local_170 >> 0x10;
          goto LAB_140814508;
        }
        break;
      }
    }
  }
  local_170 = local_170 >> 0xd;
LAB_140814508:
  puVar30 = (undefined8 *)*param_4;
  local_170 = local_170 & 0xffffff07;
  local_128 = puVar30 + (longlong)*(int *)(param_4 + 1) * 0x1a;
  if (puVar30 != local_128) {
    piVar35 = (int *)(puVar30 + 8);
    do {
      puVar25 = (undefined8 *)0x0;
      if (((piVar35[0x20] < 1) || (*(longlong *)(piVar35 + -0xc) == 0)) ||
         (*(longlong *)(*(longlong *)(piVar35 + -0xc) + 0x60) == 0)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if (bVar13) {
        local_160 = *(float *)(puVar30 + 1);
        local_168 = *puVar30;
        iVar4 = piVar35[2];
        local_d8 = &DAT_14060d670;
        puStack_e0 = local_res20;
        local_e8 = &DAT_14060d670;
        local_res20[0] = 0;
        local_148 = puVar30;
        puStack_d0 = puStack_e0;
        lVar22 = FUN_1415d8310(&local_e8,&DAT_146216a38);
        puVar32 = (undefined8 *)(*(longlong *)(lVar22 + 0x18) + 0xfU & 0xfffffffffffffff0);
        puVar1 = (ulonglong *)(lVar22 + 0x18);
        puVar23 = puVar32 + 3;
        if (*(undefined8 **)(lVar22 + 0x20) < puVar23) {
          FMemStackBase::AllocateNewChunk(puVar1,0x28);
          puVar32 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar23 = puVar32 + 3;
        }
        *puVar1 = (ulonglong)puVar23;
        if (puVar32 != (undefined8 *)0x0) {
          *puVar32 = &PTR_FUN_1440fd5a0;
          puVar32[1] = 0;
          puVar32[2] = 0;
          puVar25 = puVar32;
        }
        iVar5 = *(int *)(param_6 + 0xd0);
        *(int *)(param_6 + 0xd0) = iVar5 + 1;
        if (*(int *)(param_6 + 0xd4) < iVar5 + 1) {
          FUN_140822430((longlong *)(param_6 + 200),iVar5);
        }
        *(undefined8 **)(*(longlong *)(param_6 + 200) + (longlong)iVar5 * 8) = puVar25;
        plVar6 = puVar25 + 1;
        iVar5 = piVar35[0x20];
        *(undefined4 *)(puVar25 + 2) = 0;
        if (*(int *)((longlong)puVar25 + 0x14) != iVar5) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(plVar6);
        }
        fVar20 = local_160;
        uVar27 = 0;
        if (0 < piVar35[0x20]) {
          fVar19 = local_168._4_4_;
          fVar18 = (float)local_168;
          uVar34 = uVar27;
          do {
            iVar5 = *(int *)(puVar25 + 2);
            piVar29 = *(int **)(piVar35 + 0x1c);
            if (*(int **)(piVar35 + 0x1c) == (int *)0x0) {
              piVar29 = piVar35 + 4;
            }
            pfVar28 = (float *)((longlong)piVar29 + uVar34);
            iVar21 = iVar5 + 1;
            fVar2 = pfVar28[1];
            fVar3 = *pfVar28;
            fVar41 = fVar3 * DAT_146267224;
            fVar44 = fVar3 * DAT_146267228;
            fVar43 = fVar2 * DAT_146267238;
            fVar36 = fVar2 * DAT_146267234;
            local_158 = fVar3 * DAT_146267220 + fVar2 * DAT_146267230 + fVar18;
            fVar2 = pfVar28[2];
            fVar3 = pfVar28[3];
            *(int *)(puVar25 + 2) = iVar21;
            local_150 = fVar44 + fVar43 + fVar20;
            fStack_154 = fVar41 + fVar36 + fVar19;
            if (*(int *)((longlong)puVar25 + 0x14) < iVar21) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(plVar6);
            }
            puVar30 = (undefined8 *)((longlong)iVar5 * 0x5c + *plVar6);
            if (puVar30 != (undefined8 *)0x0) {
              auVar8[0xc] = (char)(DAT_14626722c >> 0x18);
              auVar8._0_12_ = ZEXT712(0);
              uVar14 = CONCAT32(auVar8._10_3_,(ushort)(byte)(DAT_14626722c >> 0x10));
              auVar17._5_8_ = 0;
              auVar17._0_5_ = uVar14;
              Var15 = CONCAT72(SUB137(auVar17 << 0x40,6),(ushort)(byte)(DAT_14626722c >> 8));
              auVar38._0_4_ = DAT_14626722c & 0xff;
              auVar38._4_9_ = Var15;
              auVar38._13_3_ = 0;
              uVar42 = (undefined1)((uint)DAT_14626719c >> 8);
              uVar12 = (ulonglong)CONCAT12(uVar42,(short)DAT_14626719c) & 0xffffffffffff00ff;
              auVar37._0_4_ = -(uint)(0x7f < auVar38._0_4_);
              auVar37._4_4_ = -(uint)(0x7f < (uint)Var15);
              auVar37._8_4_ = -(uint)(0x7f < (int)uVar14);
              auVar37._12_4_ = -(uint)(0x7f < (uint3)(auVar8._10_3_ >> 0x10));
              auVar38 = auVar37 & _DAT_144101760 | auVar38;
              auVar9._8_4_ = 0;
              auVar9._0_8_ = uVar12;
              auVar9[0xc] = (char)((uint)DAT_14626719c >> 0x18);
              auVar10[8] = (char)((uint)DAT_14626719c >> 0x10);
              auVar10._0_8_ = uVar12;
              auVar10[9] = 0;
              auVar10._10_3_ = auVar9._10_3_;
              auVar16._5_8_ = 0;
              auVar16._0_5_ = auVar10._8_5_;
              auVar11[4] = uVar42;
              auVar11._0_4_ = (uint)uVar12;
              auVar11[5] = 0;
              auVar11._6_7_ = SUB137(auVar16 << 0x40,6);
              auVar40._0_4_ = (uint)uVar12 & 0xffff;
              auVar40._4_9_ = auVar11._4_9_;
              auVar40._13_3_ = 0;
              local_134 = (float)auVar38._0_4_ * 0.007874016;
              local_130 = (float)auVar38._4_4_ * 0.007874016;
              local_12c = (float)auVar38._8_4_ * 0.007874016;
              auVar39._0_4_ = -(uint)(0x7f < auVar40._0_4_);
              auVar39._4_4_ = -(uint)(0x7f < auVar11._4_4_);
              auVar39._8_4_ = -(uint)(0x7f < auVar10._8_4_);
              auVar39._12_4_ = -(uint)(0x7f < (uint3)(auVar9._10_3_ >> 0x10));
              auVar40 = auVar39 & _DAT_144101760 | auVar40;
              local_140 = (float)auVar40._0_4_ * 0.007874016;
              local_13c = (float)auVar40._4_4_ * 0.007874016;
              local_138 = (float)auVar40._8_4_ * 0.007874016;
              *puVar30 = CONCAT44(fStack_154,local_158);
              *(float *)(puVar30 + 1) = local_150;
              FPackedNormal::FPackedNormal((longlong)puVar30 + 0x4c,&local_140);
              FPackedNormal::FPackedNormal(puVar30 + 10);
              piVar29 = (int *)((longlong)puVar30 + 0x54);
              lVar22 = 2;
              if (piVar29 <= (int *)((longlong)puVar30 + 0x5cU)) {
                for (; lVar22 != 0; lVar22 = lVar22 + -1) {
                  *piVar29 = iVar4;
                  piVar29 = piVar29 + 1;
                }
              }
              *(undefined1 *)((longlong)puVar30 + 0x53) = 0x7f;
              *(float *)((longlong)puVar30 + 0xc) = fVar2;
              *(float *)(puVar30 + 2) = fVar3;
              *(float *)((longlong)puVar30 + 0x14) = fVar2;
              *(float *)(puVar30 + 3) = fVar3;
              *(float *)((longlong)puVar30 + 0x1c) = fVar2;
              *(float *)(puVar30 + 4) = fVar3;
              *(float *)((longlong)puVar30 + 0x24) = fVar2;
              *(float *)(puVar30 + 5) = fVar3;
              *(float *)((longlong)puVar30 + 0x2c) = fVar2;
              *(float *)(puVar30 + 6) = fVar3;
              *(float *)((longlong)puVar30 + 0x34) = fVar2;
              *(float *)(puVar30 + 7) = fVar3;
              *(float *)((longlong)puVar30 + 0x3c) = fVar2;
              *(float *)(puVar30 + 8) = fVar3;
              *(float *)((longlong)puVar30 + 0x44) = fVar2;
              *(float *)(puVar30 + 9) = fVar3;
            }
            uVar33 = (int)uVar27 + 1;
            uVar27 = (ulonglong)uVar33;
            uVar34 = uVar34 + 0x10;
            puVar30 = local_148;
          } while ((int)uVar33 < piVar35[0x20]);
        }
        FUN_1424290d0(local_c8,*(undefined4 *)(param_2 + 0x1a38),1,0,
                      (ulonglong)in_stack_fffffffffffffe58 & 0xffffffffffffff00);
        FUN_14242c440(local_c8,plVar6);
        local_178 = 1;
        uStack_177 = 0;
        uStack_176 = 0;
        uStack_175 = 1;
        uStack_174 = 1;
        uStack_173 = 1;
        local_172 = (*(uint *)(param_1 + 0x18) & 0x300) != 0;
        uVar24 = (**(code **)(*param_3 + 0x2a8))
                           (param_3,0,(byte)(*(uint *)(param_1 + 0x18) >> 10) & 1);
        puVar25 = (undefined8 *)operator_new(0x180);
        if (puVar25 == (undefined8 *)0x0) {
          puVar25 = (undefined8 *)0x0;
        }
        else {
          local_f8 = *piVar35;
          lVar22 = (longlong)local_f8;
          piVar29 = *(int **)(piVar35 + -2);
          local_100 = (undefined1 *)0x0;
          if (local_f8 == 0) {
            local_f4 = 0;
          }
          else {
            TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
                      (local_120,local_f8,0);
            if (piVar29 == (int *)0x0) {
              piVar29 = piVar35 + -10;
            }
            puVar26 = local_120;
            if (local_100 != (undefined1 *)0x0) {
              puVar26 = local_100;
            }
            _guard_xfg_dispatch_icall_nop(puVar26,piVar29,lVar22 << 3);
          }
          uVar7 = *(undefined8 *)(piVar35 + -0xc);
          *puVar25 = &PTR__purecall_1440fb050;
          FUN_14257dfd0(puVar25 + 1);
          puVar26 = local_100;
          puVar25[0x28] = uVar24;
          *puVar25 = &PTR_StartProfileThreadUsage_1440fd520;
          puVar25[0x29] = uVar7;
          puVar25[1] = &PTR_LAB_1440fd530;
          puVar25[0x2e] = 0;
          lVar22 = (longlong)local_f8;
          *(int *)(puVar25 + 0x2f) = local_f8;
          if (local_f8 == 0) {
            *(undefined4 *)((longlong)puVar25 + 0x17c) = 0;
          }
          else {
            TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
                      (puVar25 + 0x2a,local_f8,0);
            _Src = local_120;
            if (puVar26 != (undefined1 *)0x0) {
              _Src = puVar26;
            }
            puVar23 = (undefined8 *)puVar25[0x2e];
            if ((undefined8 *)puVar25[0x2e] == (undefined8 *)0x0) {
              puVar23 = puVar25 + 0x2a;
            }
            _guard_xfg_dispatch_icall_nop(puVar23,_Src,lVar22 << 3);
          }
          if (local_100 != (undefined1 *)0x0) {
            FMemory::Free();
          }
        }
        puVar23 = puVar25 + 1;
        if (puVar25 == (undefined8 *)0x0) {
          puVar23 = (undefined8 *)0x0;
        }
        iVar4 = *(int *)(param_6 + 0xc0);
        *(int *)(param_6 + 0xc0) = iVar4 + 1;
        if (*(int *)(param_6 + 0xc4) < iVar4 + 1) {
          FUN_140822430(param_6 + 0xb8,iVar4);
        }
        *(undefined8 **)(*(longlong *)(param_6 + 0xb8) + (longlong)iVar4 * 8) = puVar23;
        uStack_177 = *(undefined1 *)(param_1 + 1000);
        local_178 = *(undefined1 *)(param_1 + 0x3e9);
        in_stack_fffffffffffffe58 = &local_178;
        uStack_175 = 1;
        uStack_174 = 1;
        FUN_142433260(local_c8,param_1 + 0x80,puVar23,(undefined1)local_170,
                      in_stack_fffffffffffffe58,0,param_5,param_6,0xffffffff);
        FDynamicMeshBuilder::~FDynamicMeshBuilder(local_c8);
      }
      puVar30 = puVar30 + 0x1a;
      piVar35 = piVar35 + 0x34;
    } while (puVar30 != local_128);
  }
  return;
}



// FUNCTION 140814c80 FUN_140814c80 body=100 status=ok
// SIG undefined FUN_140814c80(void)

byte FUN_140814c80(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((uVar1 >> 0xb & 1) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x120);
    for (plVar3 = plVar2; plVar3 != plVar2 + *(int *)(param_1 + 0x128); plVar3 = plVar3 + 1) {
      if (*plVar3 == *(longlong *)(param_2 + 0x350)) {
        if ((int)((longlong)plVar3 - (longlong)plVar2 >> 3) != -1) {
          return (byte)(uVar1 >> 0x10) & 7;
        }
        break;
      }
    }
  }
  return (byte)(uVar1 >> 0xd) & 7;
}



// FUNCTION 140814cf0 GetDynamicMeshElements body=166 status=ok
// SIG undefined GetDynamicMeshElements(void)

void FPaperRenderSceneProxy::GetDynamicMeshElements
               (longlong *param_1,longlong *param_2,undefined8 param_3,uint param_4,
               undefined8 param_5)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_2 + 1);
  iVar5 = 0;
  uVar3 = 1;
  if (0 < (int)uVar1) {
    lVar4 = 0;
    do {
      if ((param_4 & uVar3) != 0) {
        (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_2 + lVar4),iVar5,param_5);
      }
      uVar1 = *(uint *)(param_2 + 1);
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      lVar4 = lVar4 + 8;
    } while (iVar5 < (int)uVar1);
  }
  uVar2 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    do {
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 140814da0 GetDynamicMeshElements body=52 status=ok
// SIG undefined GetDynamicMeshElements(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FPaperSpriteSceneProxy::GetDynamicMeshElements(void)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_28 = in_stack_00000028;
  FPaperRenderSceneProxy::GetDynamicMeshElements();
  return;
}



// FUNCTION 140814de0 FUN_140814de0 body=266 status=ok
// SIG undefined FUN_140814de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140814de0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = 0;
  local_48 = param_3;
  if (0 < *(int *)(param_2 + 8)) {
    uVar1 = 1;
    do {
      if (((param_4 & uVar1) != 0) && (*(longlong *)(param_1 + 0x418) != 0)) {
        local_58 = CONCAT71(local_58._1_7_,(*(uint *)(param_1 + 0x18) & 0x300) != 0);
        AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
      }
      iVar2 = iVar2 + 1;
      uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    } while (iVar2 < *(int *)(param_2 + 8));
  }
  local_58 = param_5;
  FPaperRenderSceneProxy::GetDynamicMeshElements(param_1,param_2,local_48,param_4);
  return;
}



// FUNCTION 140814ef0 FUN_140814ef0 body=102 status=ok
// SIG undefined FUN_140814ef0(void)

void FUN_140814ef0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FUN_1408144a0();
  }
  FUN_1408161d0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140814f60 FUN_140814f60 body=134 status=ok
// SIG undefined FUN_140814f60(void)

void FUN_140814f60(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FUN_1408144a0();
  }
  if ((*(longlong *)(param_1 + 0x418) != 0) && (0 < *(int *)(param_1 + 0x438))) {
    FUN_1408144a0(param_1,param_2,*(longlong *)(param_1 + 0x418),param_1 + 0x430,param_3,param_4);
  }
  return;
}



// FUNCTION 140814ff0 FUN_140814ff0 body=131 status=ok
// SIG undefined FUN_140814ff0(void)

void FUN_140814ff0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x418);
  lVar2 = (longlong)*(int *)(param_1 + 0x420) * 0x20 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    if (*(longlong *)(lVar1 + 0x10) != 0) {
      FUN_1408144a0(param_1,param_2,*(longlong *)(lVar1 + 0x10),lVar1,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 140815080 FUN_140815080 body=27 status=ok
// SIG undefined FUN_140815080(void)

undefined4 FUN_140815080(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x718) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x718) + 0x28);
  }
  return 0x41700000;
}



// FUNCTION 1408150a0 FUN_1408150a0 body=60 status=ok
// SIG undefined FUN_1408150a0(void)

void FUN_1408150a0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x718) != 0) &&
     (*(float *)(*(longlong *)(param_1 + 0x718) + 0x28) != 0.0)) {
    UPaperFlipbook::GetNumFrames();
  }
  return;
}



// FUNCTION 1408150e0 FUN_1408150e0 body=19 status=ok
// SIG undefined FUN_1408150e0(void)

ulonglong FUN_1408150e0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x718);
  if (lVar1 == 0) {
    return 0;
  }
  uVar12 = *(uint *)(lVar1 + 0x38);
  lVar13 = (longlong)(int)uVar12;
  uVar8 = 0;
  uVar7 = 0;
  uVar2 = uVar8;
  uVar9 = uVar7;
  if ((0 < (int)uVar12) && (uVar2 = 0, 7 < uVar12)) {
    lVar11 = *(longlong *)(lVar1 + 0x30);
    iVar14 = 0;
    iVar16 = 0;
    iVar18 = 0;
    iVar20 = 0;
    iVar15 = 0;
    iVar17 = 0;
    iVar19 = 0;
    iVar21 = 0;
    uVar4 = uVar12 & 0x80000007;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
    }
    uVar2 = uVar8;
    uVar5 = uVar8;
    uVar10 = uVar8;
    do {
      uVar9 = (int)uVar10 + 8;
      uVar10 = (ulonglong)uVar9;
      uVar2 = uVar2 + 8;
      iVar14 = *(int *)(uVar5 + 8 + lVar11) + iVar14;
      iVar16 = *(int *)(uVar5 + 0x18 + lVar11) + iVar16;
      iVar18 = *(int *)(uVar5 + 0x28 + lVar11) + iVar18;
      iVar20 = *(int *)(uVar5 + 0x38 + lVar11) + iVar20;
      iVar15 = *(int *)(uVar5 + 0x48 + lVar11) + iVar15;
      iVar17 = *(int *)(uVar5 + 0x58 + lVar11) + iVar17;
      iVar19 = *(int *)(uVar5 + 0x68 + lVar11) + iVar19;
      iVar21 = *(int *)(uVar5 + 0x78 + lVar11) + iVar21;
      uVar5 = uVar5 + 0x80;
    } while ((longlong)uVar2 < (longlong)(int)(uVar12 - uVar4));
    uVar2 = (ulonglong)(uint)(iVar15 + iVar14 + iVar19 + iVar18 + iVar17 + iVar16 + iVar21 + iVar20)
    ;
  }
  lVar11 = (longlong)(int)uVar9;
  uVar12 = 0;
  iVar14 = (int)uVar2;
  if (lVar13 <= lVar11) {
    return uVar2;
  }
  if (1 < lVar13 - lVar11) {
    lVar6 = lVar11 << 4;
    lVar3 = ((lVar13 - lVar11) - 2U >> 1) + 1;
    lVar11 = lVar11 + lVar3 * 2;
    uVar2 = uVar8;
    do {
      uVar7 = (int)uVar8 + *(int *)(lVar6 + 8 + *(longlong *)(lVar1 + 0x30));
      uVar8 = (ulonglong)uVar7;
      uVar12 = (int)uVar2 + *(int *)(lVar6 + 0x18 + *(longlong *)(lVar1 + 0x30));
      uVar2 = (ulonglong)uVar12;
      lVar6 = lVar6 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar11 < lVar13) {
    iVar14 = iVar14 + *(int *)(*(longlong *)(lVar1 + 0x30) + 8 + lVar11 * 0x10);
  }
  return (ulonglong)(uVar12 + uVar7 + iVar14);
}



// FUNCTION 140815100 GetForcedLOD body=7 status=ok
// SIG undefined GetForcedLOD(void)

undefined4 USkinnedMeshComponent::GetForcedLOD(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x730);
}



// FUNCTION 140815110 FUN_140815110 body=1507 status=ok
// SIG undefined FUN_140815110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

BADSPACEBASE * FUN_140815110(longlong param_1,int param_2,float *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
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
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x730))) {
    uVar11 = FUN_140487e30(&local_e8,(longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x728));
    fVar10 = fStack_bc;
    fVar9 = fStack_c0;
    fVar8 = fStack_c4;
    fVar7 = local_c8;
    auVar13._4_4_ = fStack_c4;
    auVar13._0_4_ = local_c8;
    auVar13._8_4_ = fStack_c0;
    auVar13._12_4_ = fStack_bc;
    param_3[4] = local_d8;
    param_3[5] = fStack_d4;
    param_3[6] = fStack_d0;
    param_3[7] = fStack_cc;
    *param_3 = local_e8;
    param_3[1] = fStack_e4;
    param_3[2] = fStack_e0;
    param_3[3] = fStack_dc;
    *(undefined1 (*) [16])(param_3 + 8) = auVar13;
    fVar32 = fRam000000014685e388;
    fVar29 = fRam000000014685e384;
    fVar24 = _DAT_14685e380;
    fVar49 = fRam000000014685e328;
    fVar48 = fRam000000014685e324;
    fVar47 = _DAT_14685e320;
    if (param_4 != '\0') {
      fVar21 = *(float *)(param_1 + 0x210);
      fVar22 = *(float *)(param_1 + 0x214);
      fVar23 = *(float *)(param_1 + 0x218);
      fVar15 = *(float *)(param_1 + 0x21c);
      auVar14 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar1 = auVar14._0_4_;
      fVar2 = auVar14._4_4_;
      fVar3 = auVar14._8_4_;
      fVar4 = auVar14._12_4_;
      auVar13 = minps(auVar13,auVar14);
      auVar14._4_4_ = -(uint)(auVar13._4_4_ < fRam000000014685e384);
      auVar14._0_4_ = -(uint)(auVar13._0_4_ < _DAT_14685e380);
      auVar14._8_4_ = -(uint)(auVar13._8_4_ < fRam000000014685e388);
      auVar14._12_4_ = -(uint)(auVar13._12_4_ < fRam000000014685e38c);
      iVar12 = movmskps(uVar11,auVar14);
      if (iVar12 == 0) {
        local_d8 = fVar1 * local_d8;
        fStack_d4 = fVar2 * fStack_d4;
        fStack_d0 = fVar3 * fStack_d0;
        fStack_cc = fVar4 * fStack_cc;
        fVar29 = fVar21 * fStack_dc * _DAT_14685e360 + fVar15 * local_e8 +
                 fVar22 * fStack_e0 * _DAT_14685e350 + fVar23 * fStack_e4 * _DAT_14685e340;
        fVar32 = fVar21 * fStack_e0 * fRam000000014685e364 + fVar15 * fStack_e4 +
                 fVar22 * fStack_dc * fRam000000014685e354 +
                 fVar23 * local_e8 * fRam000000014685e344;
        fVar39 = fVar21 * fStack_e4 * fRam000000014685e368 + fVar15 * fStack_e0 +
                 fVar22 * local_e8 * fRam000000014685e358 +
                 fVar23 * fStack_dc * fRam000000014685e348;
        fVar40 = fVar21 * local_e8 * fRam000000014685e36c + fVar15 * fStack_dc +
                 fVar22 * fStack_e4 * fRam000000014685e35c +
                 fVar23 * fStack_e0 * fRam000000014685e34c;
        fVar47 = fStack_d0 * fVar22 - fStack_d4 * fVar23;
        fVar48 = local_d8 * fVar23 - fStack_d0 * fVar21;
        fVar49 = fStack_d4 * fVar21 - local_d8 * fVar22;
        fVar24 = fStack_cc * fVar15 - fStack_cc * fVar15;
        fVar47 = fVar47 + fVar47;
        fVar48 = fVar48 + fVar48;
        fVar49 = fVar49 + fVar49;
        fVar24 = fVar24 + fVar24;
        local_b8 = (fVar49 * fVar22 - fVar48 * fVar23) + fVar15 * fVar47 + local_d8 +
                   *(float *)(param_1 + 0x220);
        fStack_b4 = (fVar47 * fVar23 - fVar49 * fVar21) + fVar15 * fVar48 + fStack_d4 +
                    *(float *)(param_1 + 0x224);
        fStack_b0 = (fVar48 * fVar21 - fVar47 * fVar22) + fVar15 * fVar49 + fStack_d0 +
                    *(float *)(param_1 + 0x228);
        fVar47 = (fVar24 * fVar15 - fVar24 * fVar15) + fVar15 * fVar24 + fStack_cc +
                 *(float *)(param_1 + 0x22c);
      }
      else {
        fVar17 = fVar22 + fVar22;
        fVar18 = fVar23 + fVar23;
        fVar39 = *(float *)(param_1 + 0x220);
        fVar40 = *(float *)(param_1 + 0x224);
        fVar6 = *(float *)(param_1 + 0x228);
        fVar25 = fVar21 * (fVar21 + fVar21);
        fVar35 = fVar15 * (fVar21 + fVar21);
        fVar44 = fVar1 * local_c8;
        fVar45 = fVar2 * fStack_c4;
        fVar46 = fVar3 * fStack_c0;
        fVar41 = (fVar15 * fVar18 + fVar21 * fVar17) * fVar1;
        fVar42 = (fVar35 + fVar22 * fVar18) * fVar2;
        fVar43 = (fVar15 * fVar17 + fVar21 * fVar18) * fVar3;
        fVar27 = fVar2 * (fVar21 * fVar17 - fVar15 * fVar18);
        fVar30 = fVar3 * (fVar22 * fVar18 - fVar35);
        fVar33 = fVar1 * (fVar21 * fVar18 - fVar15 * fVar17);
        fVar15 = (float)((uint)((_DAT_14685e320 - (fVar23 * fVar18 + fVar22 * fVar17)) * fVar1) &
                        _DAT_14685e330);
        fVar18 = (float)((uint)((fRam000000014685e324 - (fVar23 * fVar18 + fVar25)) * fVar2) &
                        uRam000000014685e334);
        fVar35 = (float)((uint)((fRam000000014685e328 - (fVar22 * fVar17 + fVar25)) * fVar3) &
                        uRam000000014685e338);
        fVar20 = (float)((uint)((fRam000000014685e32c - (fVar25 + fVar25)) * fVar4) &
                        uRam000000014685e33c);
        fVar21 = fStack_e4 + fStack_e4;
        fVar23 = fStack_e0 + fStack_e0;
        fVar26 = (local_e8 + local_e8) * local_e8;
        fVar22 = (local_e8 + local_e8) * fStack_dc;
        fVar36 = (fVar23 * fStack_dc + fVar21 * local_e8) * local_c8;
        fVar37 = (fVar22 + fVar23 * fStack_e4) * fStack_c4;
        fVar38 = (fVar21 * fStack_dc + fVar23 * local_e8) * fStack_c0;
        fVar28 = fStack_c4 * (fVar21 * local_e8 - fVar23 * fStack_dc);
        fVar31 = fStack_c0 * (fVar23 * fStack_e4 - fVar22);
        fVar34 = local_c8 * (fVar23 * local_e8 - fVar21 * fStack_dc);
        fVar17 = (float)((uint)((_DAT_14685e320 - (fVar23 * fStack_e0 + fVar21 * fStack_e4)) *
                               local_c8) & _DAT_14685e330);
        fVar25 = (float)((uint)((fRam000000014685e324 - (fVar23 * fStack_e0 + fVar26)) * fStack_c4)
                        & uRam000000014685e334);
        fVar19 = (float)((uint)((fRam000000014685e328 - (fVar21 * fStack_e4 + fVar26)) * fStack_c0)
                        & uRam000000014685e338);
        fVar26 = (float)((uint)((fRam000000014685e32c - (fVar26 + fVar26)) * fStack_bc) &
                        uRam000000014685e33c);
        fVar21 = param_3[4];
        fVar22 = param_3[5];
        fVar23 = param_3[6];
        local_e8 = fVar36 * fVar27 + fVar17 * fVar15 + fVar34 * fVar43 + fVar26 * fVar39;
        fStack_e4 = fVar36 * fVar18 + fVar17 * fVar41 + fVar34 * fVar30 + fVar26 * fVar40;
        fStack_e0 = fVar36 * fVar42 + fVar17 * fVar33 + fVar34 * fVar35 + fVar26 * fVar6;
        fStack_dc = fVar36 * fVar20 + fVar17 * fVar20 + fVar34 * fVar20 +
                    fVar26 * fRam000000014685e32c;
        local_d8 = fVar25 * fVar27 + fVar28 * fVar15 + fVar37 * fVar43 + fVar26 * fVar39;
        fStack_d4 = fVar25 * fVar18 + fVar28 * fVar41 + fVar37 * fVar30 + fVar26 * fVar40;
        fStack_d0 = fVar25 * fVar42 + fVar28 * fVar33 + fVar37 * fVar35 + fVar26 * fVar6;
        fStack_cc = fVar25 * fVar20 + fVar28 * fVar20 + fVar37 * fVar20 +
                    fVar26 * fRam000000014685e32c;
        local_c8 = fVar31 * fVar27 + fVar38 * fVar15 + fVar19 * fVar43 + fVar26 * fVar39;
        fStack_c4 = fVar31 * fVar18 + fVar38 * fVar41 + fVar19 * fVar30 + fVar26 * fVar40;
        fStack_c0 = fVar31 * fVar42 + fVar38 * fVar33 + fVar19 * fVar35 + fVar26 * fVar6;
        fStack_bc = fVar31 * fVar20 + fVar38 * fVar20 + fVar19 * fVar20 +
                    fVar26 * fRam000000014685e32c;
        local_b8 = fVar22 * fVar27 + fVar21 * fVar15 + fVar23 * fVar43 +
                   fRam000000014685e32c * fVar39;
        fStack_b4 = fVar22 * fVar18 + fVar21 * fVar41 + fVar23 * fVar30 +
                    fRam000000014685e32c * fVar40;
        fStack_b0 = fVar22 * fVar42 + fVar21 * fVar33 + fVar23 * fVar35 +
                    fRam000000014685e32c * fVar6;
        fStack_ac = fVar22 * fVar20 + fVar21 * fVar20 + fVar23 * fVar20 +
                    fRam000000014685e32c * fRam000000014685e32c;
        FMatrix::RemoveScaling(&local_e8);
        fVar47 = (float)(-(uint)(fVar24 <= fVar44) & (_DAT_14685e370 ^ (uint)fVar47) ^
                        _DAT_14685e370);
        fVar48 = (float)(-(uint)(fVar29 <= fVar45) & (uRam000000014685e374 ^ (uint)fVar48) ^
                        uRam000000014685e374);
        fVar49 = (float)(-(uint)(fVar32 <= fVar46) & (uRam000000014685e378 ^ (uint)fVar49) ^
                        uRam000000014685e378);
        local_e8 = local_e8 * fVar47;
        fStack_e0 = fStack_e0 * fVar47;
        fStack_e4 = fStack_e4 * fVar47;
        fStack_d0 = fStack_d0 * fVar48;
        fStack_d4 = fStack_d4 * fVar48;
        local_d8 = local_d8 * fVar48;
        fStack_c0 = fStack_c0 * fVar49;
        local_c8 = local_c8 * fVar49;
        fStack_c4 = fStack_c4 * fVar49;
        FQuat::FQuat(&local_f8,&local_e8);
        auVar16._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
        auVar16._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
        auVar16._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
        auVar16._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
        fVar29 = auVar16._4_4_ + auVar16._0_4_;
        fVar32 = auVar16._8_4_ + auVar16._4_4_;
        fVar22 = auVar16._12_4_ + auVar16._8_4_;
        fVar23 = auVar16._0_4_ + auVar16._12_4_;
        auVar5._4_4_ = fVar32;
        auVar5._0_4_ = fVar29;
        auVar5._8_4_ = fVar22;
        auVar5._12_4_ = fVar23;
        auVar13 = rsqrtps(auVar16,auVar5);
        fVar48 = auVar13._0_4_;
        fVar49 = auVar13._4_4_;
        fVar24 = auVar13._8_4_;
        fVar21 = auVar13._12_4_;
        fVar48 = (_DAT_14685e310 - fVar48 * fVar48 * fVar29 * _DAT_14685e310) * fVar48 + fVar48;
        fVar49 = (fRam000000014685e314 - fVar49 * fVar49 * fVar32 * fRam000000014685e314) * fVar49 +
                 fVar49;
        fVar24 = (fRam000000014685e318 - fVar24 * fVar24 * fVar22 * fRam000000014685e318) * fVar24 +
                 fVar24;
        fVar21 = (fRam000000014685e31c - fVar21 * fVar21 * fVar23 * fRam000000014685e31c) * fVar21 +
                 fVar21;
        fVar47 = 0.0;
        fVar29 = (float)(((uint)(((_DAT_14685e310 - fVar48 * fVar48 * fVar29 * _DAT_14685e310) *
                                  fVar48 + fVar48) * local_f8) ^ _DAT_14685e300) &
                         -(uint)(1e-08 <= fVar29) ^ _DAT_14685e300);
        fVar32 = (float)(((uint)(((fRam000000014685e314 -
                                  fVar49 * fVar49 * fVar32 * fRam000000014685e314) * fVar49 + fVar49
                                 ) * fStack_f4) ^ uRam000000014685e304) & -(uint)(1e-08 <= fVar32) ^
                        uRam000000014685e304);
        fVar39 = (float)(((uint)(((fRam000000014685e318 -
                                  fVar24 * fVar24 * fVar22 * fRam000000014685e318) * fVar24 + fVar24
                                 ) * fStack_f0) ^ uRam000000014685e308) & -(uint)(1e-08 <= fVar22) ^
                        uRam000000014685e308);
        fVar40 = (float)(((uint)(((fRam000000014685e31c -
                                  fVar21 * fVar21 * fVar23 * fRam000000014685e31c) * fVar21 + fVar21
                                 ) * fStack_ec) ^ uRam000000014685e30c) & -(uint)(1e-08 <= fVar23) ^
                        uRam000000014685e30c);
      }
      *param_3 = fVar29;
      param_3[1] = fVar32;
      param_3[2] = fVar39;
      param_3[3] = fVar40;
      param_3[4] = local_b8;
      param_3[5] = fStack_b4;
      param_3[6] = fStack_b0;
      param_3[7] = fVar47;
      param_3[8] = fVar1 * fVar7;
      param_3[9] = fVar2 * fVar8;
      param_3[10] = fVar3 * fVar9;
      param_3[0xb] = fVar4 * fVar10;
    }
    register0x00000020 = (BADSPACEBASE *)0x1;
  }
  return register0x00000020;
}



// FUNCTION 140815700 GetKeyFrameIndexAtTime body=112 status=ok
// SIG undefined GetKeyFrameIndexAtTime(void)

ulonglong UPaperFlipbook::GetKeyFrameIndexAtTime(longlong param_1,float param_2,char param_3)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  ulonglong uVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if ((param_2 < 0.0) && (param_3 == '\0')) {
    return 0xffffffff;
  }
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  if (*(float *)(param_1 + 0x28) <= 0.0) {
    return (ulonglong)((0 < iVar1) - 1);
  }
  if (0 < iVar1) {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    uVar4 = uVar2;
    do {
      fVar5 = fVar5 + (float)*piVar3 * (1.0 / *(float *)(param_1 + 0x28));
      if (param_2 <= fVar5) {
        return uVar2;
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 4;
    } while ((longlong)uVar4 < (longlong)iVar1);
  }
  return (ulonglong)(iVar1 - 1);
}



// FUNCTION 140815770 FUN_140815770 body=66 status=ok
// SIG undefined FUN_140815770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140815770(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = _DAT_1464aa6c8;
  lVar1 = *(longlong *)(param_1 + 0x760);
  if (((lVar1 != 0) && (-1 < param_3)) && (param_3 < *(int *)(lVar1 + 0x80))) {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x78) + (longlong)param_3 * 8);
    uVar2 = *(undefined8 *)(lVar1 + 0x5c);
    *param_2 = *(undefined8 *)(lVar1 + 0x54);
    param_2[1] = uVar2;
    return param_2;
  }
  *param_2 = _DAT_1464aa6c0;
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 1408157c0 FUN_1408157c0 body=232 status=ok
// SIG undefined FUN_1408157c0(void)

void FUN_1408157c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14238b980();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14685e5e0) && (_Init_thread_header(&DAT_14685e5e0), DAT_14685e5e0 == -1))
  {
    uVar1 = APaperCharacter::StaticClass();
    APaperCharacter::StaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SourceFlipbook",1);
    DAT_14685e5d8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14685e5e0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_14685e5d8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_14685e5d8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14685e5d8 + 0x30));
  }
  return;
}



// FUNCTION 1408158b0 FUN_1408158b0 body=68 status=ok
// SIG undefined FUN_1408158b0(void)

void FUN_1408158b0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (*(longlong *)(param_1 + 0x760) != 0) {
    *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 0x760) + 0x28);
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0x760) + 0x2c);
    *param_4 = *(undefined4 *)(*(longlong *)(param_1 + 0x760) + 0x80);
    return;
  }
  *param_2 = 1;
  *param_3 = 1;
  *param_4 = 1;
  return;
}



// FUNCTION 140815a10 FUN_140815a10 body=102 status=ok
// SIG undefined FUN_140815a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140815a10(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14685e600) {
    _Init_thread_header(&DAT_14685e600);
    if (DAT_14685e600 == -1) {
      _DAT_14685e5f0 = 0;
      _DAT_14685e5f8 = 0;
      _Init_thread_footer(&DAT_14685e600);
    }
  }
  return &DAT_14685e5f0;
}



// FUNCTION 140815aa0 FUN_140815aa0 body=258 status=ok
// SIG undefined FUN_140815aa0(void)

void FUN_140815aa0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = 0;
  local_18 = FUN_140815bb0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_144012f30;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1 + -0x2d0);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_144012f78;
  }
  plVar4 = (longlong *)(param_2 + 0x50);
  if (&local_18 != plVar4) {
    if (plVar2 == (longlong *)0x0) {
      if ((*(int *)(param_2 + 0x58) != 0) &&
         (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*plVar4 != 0) {
          lVar3 = FMemory::Realloc(*plVar4,0,0);
          *plVar4 = lVar3;
        }
        *(undefined4 *)(param_2 + 0x58) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar4);
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



// FUNCTION 140815bb0 FUN_140815bb0 body=1568 status=ok
// SIG undefined FUN_140815bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140815bb0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
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
  
  lVar13 = *(longlong *)(param_1 + 0x728);
  lVar14 = (longlong)*(int *)(param_1 + 0x730) * 0x50 + lVar13;
  for (; lVar13 != lVar14; lVar13 = lVar13 + 0x50) {
    uVar10 = FUN_140487e30(&local_f8,lVar13);
    fVar9 = fStack_cc;
    fVar8 = fStack_d0;
    fVar7 = fStack_d4;
    fVar6 = local_d8;
    fVar31 = fRam000000014685e388;
    fVar29 = fRam000000014685e384;
    fVar22 = _DAT_14685e380;
    fVar49 = fRam000000014685e328;
    fVar48 = fRam000000014685e324;
    fVar47 = _DAT_14685e320;
    auVar15._4_4_ = fStack_d4;
    auVar15._0_4_ = local_d8;
    auVar15._8_4_ = fStack_d0;
    auVar15._12_4_ = fStack_cc;
    if (((local_d8 != 0.0) || (fStack_d4 != 0.0)) || (fStack_d0 != 0.0)) {
      auVar16 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar1 = auVar16._0_4_;
      fVar2 = auVar16._4_4_;
      fVar3 = auVar16._8_4_;
      fVar4 = auVar16._12_4_;
      fVar17 = *(float *)(param_1 + 0x210);
      fVar24 = *(float *)(param_1 + 0x214);
      fVar20 = *(float *)(param_1 + 0x218);
      fVar25 = *(float *)(param_1 + 0x21c);
      auVar15 = minps(auVar15,auVar16);
      auVar16._4_4_ = -(uint)(auVar15._4_4_ < fRam000000014685e384);
      auVar16._0_4_ = -(uint)(auVar15._0_4_ < _DAT_14685e380);
      auVar16._8_4_ = -(uint)(auVar15._8_4_ < fRam000000014685e388);
      auVar16._12_4_ = -(uint)(auVar15._12_4_ < fRam000000014685e38c);
      iVar11 = movmskps(uVar10,auVar16);
      if (iVar11 == 0) {
        fVar47 = local_e8 * fVar1;
        fVar48 = fStack_e4 * fVar2;
        fVar26 = fStack_e0 * fVar3;
        fVar27 = fStack_dc * fVar4;
        fVar38 = fStack_ec * fVar17 * _DAT_14685e360 + fVar25 * local_f8 +
                 fStack_f0 * fVar24 * _DAT_14685e350 + fStack_f4 * fVar20 * _DAT_14685e340;
        fVar19 = fStack_f0 * fVar17 * fRam000000014685e364 + fVar25 * fStack_f4 +
                 fStack_ec * fVar24 * fRam000000014685e354 +
                 local_f8 * fVar20 * fRam000000014685e344;
        fVar21 = fStack_f4 * fVar17 * fRam000000014685e368 + fVar25 * fStack_f0 +
                 local_f8 * fVar24 * fRam000000014685e358 +
                 fStack_ec * fVar20 * fRam000000014685e348;
        fVar23 = local_f8 * fVar17 * fRam000000014685e36c + fVar25 * fStack_ec +
                 fStack_f4 * fVar24 * fRam000000014685e35c +
                 fStack_f0 * fVar20 * fRam000000014685e34c;
        fVar49 = fVar26 * fVar24 - fVar48 * fVar20;
        fVar22 = fVar47 * fVar20 - fVar26 * fVar17;
        fVar29 = fVar48 * fVar17 - fVar47 * fVar24;
        fVar31 = fVar27 * fVar25 - fVar27 * fVar25;
        fVar49 = fVar49 + fVar49;
        fVar22 = fVar22 + fVar22;
        fVar29 = fVar29 + fVar29;
        fVar31 = fVar31 + fVar31;
        fVar47 = (fVar29 * fVar24 - fVar22 * fVar20) + fVar25 * fVar49 + fVar47 +
                 *(float *)(param_1 + 0x220);
        fVar48 = (fVar49 * fVar20 - fVar29 * fVar17) + fVar25 * fVar22 + fVar48 +
                 *(float *)(param_1 + 0x224);
        fVar49 = (fVar22 * fVar17 - fVar49 * fVar24) + fVar25 * fVar29 + fVar26 +
                 *(float *)(param_1 + 0x228);
        fVar22 = (fVar31 * fVar25 - fVar31 * fVar25) + fVar25 * fVar31 + fVar27 +
                 *(float *)(param_1 + 0x22c);
      }
      else {
        fVar26 = *(float *)(param_1 + 0x220);
        fVar27 = *(float *)(param_1 + 0x224);
        fVar38 = *(float *)(param_1 + 0x228);
        fVar19 = fVar24 + fVar24;
        fVar21 = fVar20 + fVar20;
        fVar44 = fVar1 * local_d8;
        fVar45 = fVar2 * fStack_d4;
        fVar46 = fVar3 * fStack_d0;
        fVar23 = fVar17 * (fVar17 + fVar17);
        fVar34 = fVar25 * (fVar17 + fVar17);
        fVar41 = (fVar25 * fVar21 + fVar17 * fVar19) * fVar1;
        fVar42 = (fVar34 + fVar24 * fVar21) * fVar2;
        fVar43 = (fVar25 * fVar19 + fVar17 * fVar21) * fVar3;
        fVar28 = fVar2 * (fVar17 * fVar19 - fVar25 * fVar21);
        fVar30 = fVar3 * (fVar24 * fVar21 - fVar34);
        fVar32 = fVar1 * (fVar17 * fVar21 - fVar25 * fVar19);
        fVar17 = (float)((uint)((_DAT_14685e320 - (fVar20 * fVar21 + fVar24 * fVar19)) * fVar1) &
                        _DAT_14685e330);
        fVar20 = (float)((uint)((fRam000000014685e324 - (fVar20 * fVar21 + fVar23)) * fVar2) &
                        uRam000000014685e334);
        fVar19 = (float)((uint)((fRam000000014685e328 - (fVar24 * fVar19 + fVar23)) * fVar3) &
                        uRam000000014685e338);
        fVar23 = (float)((uint)((fRam000000014685e32c - (fVar23 + fVar23)) * fVar4) &
                        uRam000000014685e33c);
        fVar21 = fStack_f4 + fStack_f4;
        fVar25 = fStack_f0 + fStack_f0;
        fVar34 = local_f8 * (local_f8 + local_f8);
        fVar24 = (local_f8 + local_f8) * fStack_ec;
        fVar37 = (fVar25 * fStack_ec + fVar21 * local_f8) * local_d8;
        fVar39 = (fVar24 + fVar25 * fStack_f4) * fStack_d4;
        fVar40 = (fVar21 * fStack_ec + fVar25 * local_f8) * fStack_d0;
        fVar33 = fStack_d4 * (fVar21 * local_f8 - fVar25 * fStack_ec);
        fVar35 = fStack_d0 * (fVar25 * fStack_f4 - fVar24);
        fVar36 = local_d8 * (fVar25 * local_f8 - fVar21 * fStack_ec);
        fVar24 = (float)((uint)((_DAT_14685e320 - (fStack_f0 * fVar25 + fStack_f4 * fVar21)) *
                               local_d8) & _DAT_14685e330);
        fVar25 = (float)((uint)((fRam000000014685e324 - (fStack_f0 * fVar25 + fVar34)) * fStack_d4)
                        & uRam000000014685e334);
        fVar21 = (float)((uint)((fRam000000014685e328 - (fStack_f4 * fVar21 + fVar34)) * fStack_d0)
                        & uRam000000014685e338);
        fVar34 = (float)((uint)((fRam000000014685e32c - (fVar34 + fVar34)) * fStack_cc) &
                        uRam000000014685e33c);
        local_f8 = fVar37 * fVar28 + fVar24 * fVar17 + fVar36 * fVar43 + fVar34 * fVar26;
        fStack_f4 = fVar37 * fVar20 + fVar24 * fVar41 + fVar36 * fVar30 + fVar34 * fVar27;
        fStack_f0 = fVar37 * fVar42 + fVar24 * fVar32 + fVar36 * fVar19 + fVar34 * fVar38;
        fStack_ec = fVar37 * fVar23 + fVar24 * fVar23 + fVar36 * fVar23 +
                    fVar34 * fRam000000014685e32c;
        fStack_dc = fVar25 * fVar23 + fVar33 * fVar23 + fVar39 * fVar23 +
                    fVar34 * fRam000000014685e32c;
        local_d8 = fVar35 * fVar28 + fVar40 * fVar17 + fVar21 * fVar43 + fVar34 * fVar26;
        fStack_d4 = fVar35 * fVar20 + fVar40 * fVar41 + fVar21 * fVar30 + fVar34 * fVar27;
        fStack_d0 = fVar35 * fVar42 + fVar40 * fVar32 + fVar21 * fVar19 + fVar34 * fVar38;
        fStack_cc = fVar35 * fVar23 + fVar40 * fVar23 + fVar21 * fVar23 +
                    fVar34 * fRam000000014685e32c;
        local_c8 = fStack_e4 * fVar28 + local_e8 * fVar17 + fStack_e0 * fVar43 +
                   fRam000000014685e32c * fVar26;
        fStack_c4 = fStack_e4 * fVar20 + local_e8 * fVar41 + fStack_e0 * fVar30 +
                    fRam000000014685e32c * fVar27;
        fStack_c0 = fStack_e4 * fVar42 + local_e8 * fVar32 + fStack_e0 * fVar19 +
                    fRam000000014685e32c * fVar38;
        fStack_bc = fStack_e4 * fVar23 + local_e8 * fVar23 + fStack_e0 * fVar23 +
                    fRam000000014685e32c * fRam000000014685e32c;
        local_e8 = fVar25 * fVar28 + fVar33 * fVar17 + fVar39 * fVar43 + fVar34 * fVar26;
        fStack_e4 = fVar25 * fVar20 + fVar33 * fVar41 + fVar39 * fVar30 + fVar34 * fVar27;
        fStack_e0 = fVar25 * fVar42 + fVar33 * fVar32 + fVar39 * fVar19 + fVar34 * fVar38;
        FMatrix::RemoveScaling(&local_f8);
        fVar47 = (float)(-(uint)(fVar22 <= fVar44) & (_DAT_14685e370 ^ (uint)fVar47) ^
                        _DAT_14685e370);
        fVar48 = (float)(-(uint)(fVar29 <= fVar45) & (uRam000000014685e374 ^ (uint)fVar48) ^
                        uRam000000014685e374);
        fVar49 = (float)(-(uint)(fVar31 <= fVar46) & (uRam000000014685e378 ^ (uint)fVar49) ^
                        uRam000000014685e378);
        local_f8 = local_f8 * fVar47;
        fStack_f4 = fStack_f4 * fVar47;
        fStack_f0 = fStack_f0 * fVar47;
        fStack_e0 = fStack_e0 * fVar48;
        fStack_e4 = fStack_e4 * fVar48;
        local_e8 = local_e8 * fVar48;
        fStack_d0 = fStack_d0 * fVar49;
        local_d8 = local_d8 * fVar49;
        fStack_d4 = fStack_d4 * fVar49;
        FQuat::FQuat(&local_108,&local_f8);
        auVar18._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
        auVar18._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
        auVar18._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
        auVar18._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
        fVar29 = auVar18._4_4_ + auVar18._0_4_;
        fVar31 = auVar18._8_4_ + auVar18._4_4_;
        fVar17 = auVar18._12_4_ + auVar18._8_4_;
        fVar24 = auVar18._0_4_ + auVar18._12_4_;
        auVar5._4_4_ = fVar31;
        auVar5._0_4_ = fVar29;
        auVar5._8_4_ = fVar17;
        auVar5._12_4_ = fVar24;
        auVar15 = rsqrtps(auVar18,auVar5);
        fVar47 = auVar15._0_4_;
        fVar48 = auVar15._4_4_;
        fVar49 = auVar15._8_4_;
        fVar22 = auVar15._12_4_;
        fVar47 = (_DAT_14685e310 - fVar47 * fVar47 * fVar29 * _DAT_14685e310) * fVar47 + fVar47;
        fVar48 = (fRam000000014685e314 - fVar48 * fVar48 * fVar31 * fRam000000014685e314) * fVar48 +
                 fVar48;
        fVar49 = (fRam000000014685e318 - fVar49 * fVar49 * fVar17 * fRam000000014685e318) * fVar49 +
                 fVar49;
        fVar22 = (fRam000000014685e31c - fVar22 * fVar22 * fVar24 * fRam000000014685e31c) * fVar22 +
                 fVar22;
        fVar38 = (float)(((uint)(((_DAT_14685e310 - fVar47 * fVar47 * fVar29 * _DAT_14685e310) *
                                  fVar47 + fVar47) * local_108) ^ _DAT_14685e300) &
                         -(uint)(1e-08 <= fVar29) ^ _DAT_14685e300);
        fVar19 = (float)(((uint)(((fRam000000014685e314 -
                                  fVar48 * fVar48 * fVar31 * fRam000000014685e314) * fVar48 + fVar48
                                 ) * fStack_104) ^ uRam000000014685e304) & -(uint)(1e-08 <= fVar31)
                        ^ uRam000000014685e304);
        fVar21 = (float)(((uint)(((fRam000000014685e318 -
                                  fVar49 * fVar49 * fVar17 * fRam000000014685e318) * fVar49 + fVar49
                                 ) * fStack_100) ^ uRam000000014685e308) & -(uint)(1e-08 <= fVar17)
                        ^ uRam000000014685e308);
        fVar23 = (float)(((uint)(((fRam000000014685e31c -
                                  fVar22 * fVar22 * fVar24 * fRam000000014685e31c) * fVar22 + fVar22
                                 ) * fStack_fc) ^ uRam000000014685e30c) & -(uint)(1e-08 <= fVar24) ^
                        uRam000000014685e30c);
        fVar22 = 0.0;
        fVar47 = local_c8;
        fVar48 = fStack_c4;
        fVar49 = fStack_c0;
        local_108 = fVar38;
        fStack_104 = fVar19;
        fStack_100 = fVar21;
        fStack_fc = fVar23;
      }
      iVar11 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar11 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_3,iVar11);
      }
      pfVar12 = (float *)((longlong)iVar11 * 0x30 + *param_3);
      *pfVar12 = fVar38;
      pfVar12[1] = fVar19;
      pfVar12[2] = fVar21;
      pfVar12[3] = fVar23;
      pfVar12[4] = fVar47;
      pfVar12[5] = fVar48;
      pfVar12[6] = fVar49;
      pfVar12[7] = fVar22;
      pfVar12[8] = fVar1 * fVar6;
      pfVar12[9] = fVar2 * fVar7;
      pfVar12[10] = fVar3 * fVar8;
      pfVar12[0xb] = fVar4 * fVar9;
    }
  }
  return;
}



// FUNCTION 1408161d0 FUN_1408161d0 body=694 status=ok
// SIG undefined FUN_1408161d0(void)

void FUN_1408161d0(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *_Dst;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong in_stack_ffffffffffffff28;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  longlong *local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 *local_48;
  int local_40;
  undefined4 local_3c;
  
  if ((*(int *)(param_1 + 0x3a8) != 0) && (uVar3 = FUN_140814c80(), *(int *)(param_1 + 0x3b8) != 0))
  {
    FUN_1424290d0(local_88,*(undefined4 *)(param_2 + 0x1a38),1,0,
                  in_stack_ffffffffffffff28 & 0xffffffffffffff00);
    FUN_14242c440(local_88,param_1 + 0x3b0);
    plVar9 = *(longlong **)(param_1 + 0x3a0);
    plVar6 = plVar9 + (longlong)*(int *)(param_1 + 0x3a8) * 9;
    local_a0 = plVar6;
    if (plVar9 != plVar6) {
      plVar7 = plVar9 + 6;
      do {
        lVar8 = 0;
        plVar2 = (longlong *)*plVar9;
        if ((((plVar2 != (longlong *)0x0) && (0 < *(int *)((longlong)plVar7 + 0x14))) &&
            (plVar6 = local_a0, plVar7[-5] != 0)) && (*(longlong *)(plVar7[-5] + 0x60) != 0)) {
          uVar4 = (**(code **)(*plVar2 + 0x2a8))
                            (plVar2,0,*(uint *)(param_1 + 0x18) >> 10 & 0xffffff01);
          local_a2 = (*(uint *)(param_1 + 0x18) & 0x300) != 0;
          local_a8 = 0x1000001;
          local_a4 = 0x101;
          lVar5 = operator_new(0x180);
          if (lVar5 != 0) {
            plVar6 = (longlong *)*plVar7;
            local_48 = (undefined1 *)0x0;
            local_40 = (int)plVar7[1];
            lVar8 = (longlong)local_40;
            if (local_40 == 0) {
              local_3c = 0;
            }
            else {
              TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
                        (local_68,local_40,0);
              if (plVar6 == (longlong *)0x0) {
                plVar6 = plVar7 + -4;
              }
              _Dst = local_68;
              if (local_48 != (undefined1 *)0x0) {
                _Dst = local_48;
              }
              _guard_xfg_dispatch_icall_nop(_Dst,plVar6,lVar8 << 3);
            }
            lVar8 = FUN_14080bea0(lVar5,uVar4,plVar7[-5],local_68);
          }
          lVar5 = lVar8 + 8;
          if (lVar8 == 0) {
            lVar5 = 0;
          }
          iVar1 = *(int *)(param_4 + 0xc0);
          *(int *)(param_4 + 0xc0) = iVar1 + 1;
          if (*(int *)(param_4 + 0xc4) < iVar1 + 1) {
            FUN_140822430(param_4 + 0xb8,iVar1);
          }
          *(longlong *)(*(longlong *)(param_4 + 0xb8) + (longlong)iVar1 * 8) = lVar5;
          local_a8._0_2_ =
               CONCAT11(*(undefined1 *)(param_1 + 1000),*(undefined1 *)(param_1 + 0x3e9));
          local_98 = (int)plVar7[2];
          local_90 = local_98 + *(int *)((longlong)plVar7 + 0x14);
          iVar1 = *(int *)((longlong)plVar7 + 0x14);
          local_8c = iVar1 / 3 + (iVar1 >> 0x1f) +
                     (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f);
          local_94 = local_98;
          FUN_142433260(local_88,param_1 + 0x80,lVar5,uVar3,&local_a8,&local_98,param_3,param_4,
                        0xffffffff);
          plVar6 = local_a0;
        }
        plVar9 = plVar9 + 9;
        plVar7 = plVar7 + 9;
      } while (plVar9 != plVar6);
    }
    FDynamicMeshBuilder::~FDynamicMeshBuilder(local_88);
  }
  return;
}



// FUNCTION 140816490 GetNumFrames body=345 status=ok
// SIG undefined GetNumFrames(void)

ulonglong UPaperFlipbook::GetNumFrames(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar9;
  
  uVar11 = *(uint *)(param_1 + 0x38);
  lVar12 = (longlong)(int)uVar11;
  uVar7 = 0;
  uVar6 = 0;
  uVar1 = uVar7;
  uVar8 = uVar6;
  if ((0 < (int)uVar11) && (uVar1 = 0, 7 < uVar11)) {
    lVar10 = *(longlong *)(param_1 + 0x30);
    iVar13 = 0;
    iVar15 = 0;
    iVar17 = 0;
    iVar19 = 0;
    iVar14 = 0;
    iVar16 = 0;
    iVar18 = 0;
    iVar20 = 0;
    uVar3 = uVar11 & 0x80000007;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
    }
    uVar1 = uVar7;
    uVar4 = uVar7;
    uVar9 = uVar7;
    do {
      uVar8 = (int)uVar9 + 8;
      uVar9 = (ulonglong)uVar8;
      uVar1 = uVar1 + 8;
      iVar13 = *(int *)(uVar4 + 8 + lVar10) + iVar13;
      iVar15 = *(int *)(uVar4 + 0x18 + lVar10) + iVar15;
      iVar17 = *(int *)(uVar4 + 0x28 + lVar10) + iVar17;
      iVar19 = *(int *)(uVar4 + 0x38 + lVar10) + iVar19;
      iVar14 = *(int *)(uVar4 + 0x48 + lVar10) + iVar14;
      iVar16 = *(int *)(uVar4 + 0x58 + lVar10) + iVar16;
      iVar18 = *(int *)(uVar4 + 0x68 + lVar10) + iVar18;
      iVar20 = *(int *)(uVar4 + 0x78 + lVar10) + iVar20;
      uVar4 = uVar4 + 0x80;
    } while ((longlong)uVar1 < (longlong)(int)(uVar11 - uVar3));
    uVar1 = (ulonglong)(uint)(iVar14 + iVar13 + iVar18 + iVar17 + iVar16 + iVar15 + iVar20 + iVar19)
    ;
  }
  lVar10 = (longlong)(int)uVar8;
  uVar11 = 0;
  iVar13 = (int)uVar1;
  if (lVar12 <= lVar10) {
    return uVar1;
  }
  if (1 < lVar12 - lVar10) {
    lVar5 = lVar10 << 4;
    lVar2 = ((lVar12 - lVar10) - 2U >> 1) + 1;
    lVar10 = lVar10 + lVar2 * 2;
    uVar1 = uVar7;
    do {
      uVar6 = (int)uVar7 + *(int *)(lVar5 + 8 + *(longlong *)(param_1 + 0x30));
      uVar7 = (ulonglong)uVar6;
      uVar11 = (int)uVar1 + *(int *)(lVar5 + 0x18 + *(longlong *)(param_1 + 0x30));
      uVar1 = (ulonglong)uVar11;
      lVar5 = lVar5 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (lVar10 < lVar12) {
    iVar13 = iVar13 + *(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar10 * 0x10);
  }
  return (ulonglong)(uVar11 + uVar6 + iVar13);
}



// FUNCTION 140816680 GetDiffuseBoost body=9 status=ok
// SIG undefined GetDiffuseBoost(void)

undefined4 UStaticMeshComponent::GetDiffuseBoost(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x728);
}



// FUNCTION 140816690 FUN_140816690 body=9 status=ok
// SIG undefined FUN_140816690(void)

undefined4 FUN_140816690(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x730);
}



// FUNCTION 1408166a0 FUN_1408166a0 body=102 status=ok
// SIG undefined FUN_1408166a0(void)

int FUN_1408166a0(longlong param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x718) != 0) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x718) + 0x28);
    iVar3 = UPaperFlipbook::GetNumFrames();
    if (0 < iVar3) {
      iVar4 = (int)(fVar1 * *(float *)(param_1 + 0x730));
      if (-1 < iVar4) {
        iVar2 = iVar3 + -1;
        if (iVar4 < iVar3 + -1) {
          iVar2 = iVar4;
        }
        return iVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140816710 GetRenderBounds body=950 status=ok
// SIG undefined GetRenderBounds(void)

float * UPaperFlipbook::GetRenderBounds(longlong param_1,float *param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  
  bVar1 = false;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  plVar3 = *(longlong **)(param_1 + 0x30);
  plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0x38) * 2;
  for (; plVar3 != plVar2; plVar3 = plVar3 + 2) {
    if (*plVar3 != 0) {
      UPaperSprite::GetRenderBounds(*plVar3,&local_f8);
      if (bVar1) {
        fVar5 = *param_2;
        fVar6 = param_2[2];
        fVar7 = param_2[1];
        fVar12 = fVar5 - param_2[3];
        fVar10 = param_2[3] + fVar5;
        fVar13 = fVar7 - param_2[4];
        fVar11 = fVar6 - param_2[5];
        fVar4 = param_2[4] + fVar7;
        fVar8 = param_2[5] + fVar6;
        local_d8 = fVar12;
        if (fVar10 < fVar12) {
          local_d8 = fVar10;
        }
        fStack_d4 = fVar13;
        if (fVar4 < fVar13) {
          fStack_d4 = fVar4;
        }
        fStack_d0 = fVar11;
        if (fVar8 < fVar11) {
          fStack_d0 = fVar8;
        }
        if (fVar12 < fVar10) {
          fVar12 = fVar10;
        }
        if (fVar13 < fVar4) {
          fVar13 = fVar4;
        }
        if (fVar11 < fVar8) {
          fVar11 = fVar8;
        }
        fVar8 = local_f8 - fStack_ec;
        fVar4 = fStack_f4 - local_e8;
        fVar10 = fStack_f0 - fStack_e4;
        if (fVar8 < local_d8) {
          local_d8 = fVar8;
        }
        if (fVar4 < fStack_d4) {
          fStack_d4 = fVar4;
        }
        if (fVar10 < fStack_d0) {
          fStack_d0 = fVar10;
        }
        if (fVar12 < fVar8) {
          fVar12 = fVar8;
        }
        if (fVar13 < fVar4) {
          fVar13 = fVar4;
        }
        if (fVar11 < fVar10) {
          fVar11 = fVar10;
        }
        fVar10 = fStack_ec + local_f8;
        fVar4 = local_e8 + fStack_f4;
        fVar8 = fStack_e4 + fStack_f0;
        if (fVar10 < local_d8) {
          local_d8 = fVar10;
        }
        if (fVar4 < fStack_d4) {
          fStack_d4 = fVar4;
        }
        if (fVar8 < fStack_d0) {
          fStack_d0 = fVar8;
        }
        if (fVar12 < fVar10) {
          fVar12 = fVar10;
        }
        if (fVar13 < fVar4) {
          fVar13 = fVar4;
        }
        if (fVar11 < fVar8) {
          fVar11 = fVar8;
        }
        fVar12 = fVar12 - local_d8;
        fVar11 = fVar11 - fStack_d0;
        fVar13 = fVar13 - fStack_d4;
        fStack_cc = fVar12 * 0.5;
        fStack_c4 = fVar11 * 0.5;
        fStack_c8 = fVar13 * 0.5;
        local_d8 = fStack_cc + local_d8;
        fStack_d0 = fStack_c4 + fStack_d0;
        fStack_d4 = fStack_c8 + fStack_d4;
        fVar12 = SQRT((fVar12 * fVar12 + fVar13 * fVar13 + fVar11 * fVar11) * 0.25);
        local_c0 = SQRT((fVar7 - fStack_d4) * (fVar7 - fStack_d4) +
                        (fVar5 - local_d8) * (fVar5 - local_d8) +
                        (fVar6 - fStack_d0) * (fVar6 - fStack_d0)) + param_2[6];
        fVar5 = SQRT((fStack_f4 - fStack_d4) * (fStack_f4 - fStack_d4) +
                     (local_f8 - local_d8) * (local_f8 - local_d8) +
                     (fStack_f0 - fStack_d0) * (fStack_f0 - fStack_d0)) + local_e0;
        if (local_c0 <= fVar5) {
          local_c0 = fVar5;
        }
        fVar5 = local_d8;
        fVar6 = fStack_d4;
        fVar7 = fStack_d0;
        fVar11 = fStack_cc;
        if (local_c0 < fVar12) {
          uVar9 = CONCAT44(fStack_c4,fStack_c8);
          fVar12 = local_c0;
        }
        else {
          uVar9 = CONCAT44(fStack_c4,fStack_c8);
          local_c0 = fVar12;
        }
      }
      else {
        bVar1 = true;
        uVar9 = CONCAT44(fStack_e4,local_e8);
        fVar5 = local_f8;
        fVar6 = fStack_f4;
        fVar7 = fStack_f0;
        fVar11 = fStack_ec;
        fVar12 = local_e0;
      }
      *param_2 = fVar5;
      param_2[1] = fVar6;
      param_2[2] = fVar7;
      param_2[3] = fVar11;
      *(undefined8 *)(param_2 + 4) = uVar9;
      param_2[6] = fVar12;
    }
  }
  return param_2;
}



// FUNCTION 140816ad0 GetRenderBounds body=752 status=ok
// SIG undefined GetRenderBounds(void)

undefined8 * UPaperSprite::GetRenderBounds(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar3 = (longlong)*(int *)(param_1 + 0xb8);
  bVar1 = false;
  fVar11 = DAT_1468b5d94;
  fVar12 = DAT_1468b5d90;
  fVar13 = DAT_1468b5d98;
  fVar14 = DAT_1468b5d98;
  fVar16 = DAT_1468b5d94;
  fVar18 = DAT_1468b5d90;
  if (0 < lVar3) {
    pfVar2 = *(float **)(param_1 + 0xb0);
    do {
      fVar9 = pfVar2[1];
      fVar4 = *pfVar2;
      fVar5 = DAT_146267220 * fVar4 + DAT_146267230 * fVar9;
      fVar7 = DAT_146267224 * fVar4 + DAT_146267234 * fVar9;
      fVar9 = DAT_146267228 * fVar4 + DAT_146267238 * fVar9;
      if (bVar1) {
        if (fVar5 < fVar18) {
          fVar18 = fVar5;
        }
        if (fVar7 < fVar16) {
          fVar16 = fVar7;
        }
        if (fVar9 < fVar14) {
          fVar14 = fVar9;
        }
        if (fVar12 < fVar5) {
          fVar12 = fVar5;
        }
        if (fVar11 < fVar7) {
          fVar11 = fVar7;
        }
        if (fVar13 < fVar9) goto LAB_140816c0d;
      }
      else {
        bVar1 = true;
        fVar11 = fVar7;
        fVar12 = fVar5;
        fVar14 = fVar9;
        fVar16 = fVar7;
        fVar18 = fVar5;
LAB_140816c0d:
        fVar13 = fVar9;
      }
      pfVar2 = pfVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  fVar4 = DAT_146267240 * 0.5;
  fVar9 = DAT_146267244 * 0.5;
  fVar20 = DAT_146267248 * 0.5;
  fVar6 = -fVar4;
  fVar8 = -fVar9;
  fVar10 = -fVar20;
  fVar5 = fVar8;
  fVar7 = fVar6;
  fVar15 = fVar10;
  fVar17 = fVar8;
  fVar19 = fVar6;
  if (bVar1) {
    fVar19 = fVar18;
    if (fVar6 < fVar18) {
      fVar19 = fVar6;
    }
    fVar17 = fVar16;
    if (fVar8 < fVar16) {
      fVar17 = fVar8;
    }
    fVar15 = fVar14;
    if (fVar10 < fVar14) {
      fVar15 = fVar10;
    }
    fVar7 = fVar12;
    if (fVar12 < fVar6) {
      fVar7 = fVar6;
    }
    fVar5 = fVar11;
    if (fVar11 < fVar8) {
      fVar5 = fVar8;
    }
    if (fVar10 <= fVar13) goto LAB_140816cc8;
  }
  fVar13 = fVar10;
LAB_140816cc8:
  if (fVar4 < fVar19) {
    fVar19 = fVar4;
  }
  if (fVar9 < fVar17) {
    fVar17 = fVar9;
  }
  if (fVar20 < fVar15) {
    fVar15 = fVar20;
  }
  if (fVar4 <= fVar7) {
    fVar4 = fVar7;
  }
  if (fVar9 <= fVar5) {
    fVar9 = fVar5;
  }
  if (fVar20 <= fVar13) {
    fVar20 = fVar13;
  }
  *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44((fVar9 - fVar17) * 0.5,(fVar4 - fVar19) * 0.5);
  *(float *)((longlong)param_2 + 0x14) = (fVar20 - fVar15) * 0.5;
  *param_2 = CONCAT44(fVar17 + *(float *)(param_2 + 2),fVar19 + *(float *)((longlong)param_2 + 0xc))
  ;
  *(float *)(param_2 + 1) = fVar15 + *(float *)((longlong)param_2 + 0x14);
  *(float *)(param_2 + 3) =
       SQRT(*(float *)((longlong)param_2 + 0xc) * *(float *)((longlong)param_2 + 0xc) +
            *(float *)(param_2 + 2) * *(float *)(param_2 + 2) +
            *(float *)((longlong)param_2 + 0x14) * *(float *)((longlong)param_2 + 0x14));
  return param_2;
}



// FUNCTION 140816dc0 GetRenderBounds body=793 status=ok
// SIG undefined GetRenderBounds(void)

undefined8 * UPaperTileMap::GetRenderBounds(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_40;
  
  fVar3 = 1.0 / *(float *)(param_1 + 0x38);
  bVar1 = *(byte *)(param_1 + 0x8d);
  fVar6 = (float)(*(int *)(param_1 + 0x80) + -1) * *(float *)(param_1 + 0x44);
  fVar5 = (float)*(int *)(param_1 + 0x30) * fVar3;
  fVar3 = (float)*(int *)(param_1 + 0x34) * fVar3;
  if (bVar1 == 1) {
    iVar2 = *(int *)(param_1 + 0x2c);
    fVar5 = (float)*(int *)(param_1 + 0x28) * fVar5;
    fVar4 = (float)-iVar2;
    fVar7 = fVar5 * -0.5;
    local_40 = fVar4 * fVar3;
    *(ulonglong *)((longlong)param_2 + 0xc) =
         CONCAT44((2.0 - (-2.0 - fVar6)) * 0.5,((fVar7 + fVar5) - fVar7) * 0.5);
    *(float *)((longlong)param_2 + 0x14) = (((float)(iVar2 + 1) + fVar4) * fVar3 - local_40) * 0.5;
    local_40 = local_40 + *(float *)((longlong)param_2 + 0x14);
    *param_2 = CONCAT44((-2.0 - fVar6) + *(float *)(param_2 + 2),
                        fVar7 + *(float *)((longlong)param_2 + 0xc));
  }
  else {
    if ((1 < bVar1) && (bVar1 < 4)) {
      iVar2 = (*(int *)(param_1 + 0x2c) + 1) / 2;
      fVar4 = (float)-iVar2;
      fVar7 = fVar4 * fVar3;
      *(ulonglong *)((longlong)param_2 + 0xc) =
           CONCAT44((2.0 - (-2.0 - fVar6)) * 0.5,
                    ((float)*(int *)(param_1 + 0x28) * fVar5 - fVar5 * -0.5) * 0.5);
      *(float *)((longlong)param_2 + 0x14) = (((float)iVar2 + 1.0 + fVar4) * fVar3 - fVar7) * 0.5;
      *param_2 = CONCAT44((-2.0 - fVar6) + *(float *)(param_2 + 2),
                          fVar5 * -0.5 + *(float *)((longlong)param_2 + 0xc));
      *(float *)(param_2 + 1) = fVar7 + *(float *)((longlong)param_2 + 0x14);
      *(float *)(param_2 + 3) =
           SQRT(*(float *)((longlong)param_2 + 0xc) * *(float *)((longlong)param_2 + 0xc) +
                *(float *)(param_2 + 2) * *(float *)(param_2 + 2) +
                *(float *)((longlong)param_2 + 0x14) * *(float *)((longlong)param_2 + 0x14));
      return param_2;
    }
    iVar2 = *(int *)(param_1 + 0x2c);
    local_40 = ((float)iVar2 - 0.5) * fVar3;
    *(ulonglong *)((longlong)param_2 + 0xc) =
         CONCAT44((2.0 - (-2.0 - fVar6)) * 0.5,
                  (((float)*(int *)(param_1 + 0x28) - 0.5) * fVar5 - fVar5 * -0.5) * 0.5);
    *(float *)((longlong)param_2 + 0x14) = (((float)iVar2 * fVar3 - local_40) + local_40) * 0.5;
    local_40 = *(float *)((longlong)param_2 + 0x14) - local_40;
    *param_2 = CONCAT44((-2.0 - fVar6) + *(float *)(param_2 + 2),
                        fVar5 * -0.5 + *(float *)((longlong)param_2 + 0xc));
  }
  *(float *)(param_2 + 1) = local_40;
  *(float *)(param_2 + 3) =
       SQRT(*(float *)((longlong)param_2 + 0xc) * *(float *)((longlong)param_2 + 0xc) +
            *(float *)(param_2 + 2) * *(float *)(param_2 + 2) +
            *(float *)((longlong)param_2 + 0x14) * *(float *)((longlong)param_2 + 0x14));
  return param_2;
}



// FUNCTION 1408171c0 FUN_1408171c0 body=2961 status=ok
// SIG undefined FUN_1408171c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1408171c0(longlong param_1,float *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  float *pfVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar32;
  undefined1 auVar23 [16];
  float fVar30;
  float fVar31;
  undefined1 auVar24 [16];
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
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  fVar43 = fRam000000014685e388;
  fVar41 = fRam000000014685e384;
  fVar36 = _DAT_14685e380;
  fVar37 = fRam000000014685e32c;
  fVar55 = fRam000000014685e328;
  fVar54 = fRam000000014685e324;
  fVar53 = _DAT_14685e320;
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar1 = *(longlong *)(param_1 + 0x718);
  if (lVar1 != 0) {
    lVar17 = 0;
    iVar14 = *(int *)(param_1 + 0x734);
    if (*(int *)(param_1 + 0x734) == -1) {
      iVar14 = 0;
    }
    if ((((-1 < iVar14) && (iVar14 < *(int *)(lVar1 + 0x38))) && (local_158 = 0, param_3 != 0)) &&
       ((lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar14 * 0x10), lVar1 != 0 &&
        (0 < *(int *)(lVar1 + 0x90))))) {
      pfVar15 = *(float **)(lVar1 + 0x88);
      do {
        if (*(longlong *)(pfVar15 + 0xc) == param_3) {
          fVar22 = *pfVar15;
          fVar29 = pfVar15[1];
          fVar27 = pfVar15[2];
          fVar32 = pfVar15[3];
          auVar18 = *(undefined1 (*) [16])(pfVar15 + 8);
          fVar2 = auVar18._0_4_;
          fVar3 = auVar18._4_4_;
          fVar4 = auVar18._8_4_;
          fVar6 = auVar18._12_4_;
          fVar38 = 1.0 / *(float *)(lVar1 + 0x9c);
          fVar57 = pfVar15[4] * fVar38;
          fVar58 = pfVar15[5] * fVar38;
          fVar38 = pfVar15[6] * fVar38;
          fVar59 = pfVar15[7] * 0.0;
          if (param_4 == 0) {
            param_2[4] = 0.0;
            param_2[5] = 0.0;
            param_2[6] = 0.0;
            uVar13 = uRam000000014685e33c;
            uVar12 = uRam000000014685e338;
            uVar11 = uRam000000014685e334;
            uVar10 = _DAT_14685e330;
            param_2[7] = 0.0;
            *param_2 = 0.0;
            param_2[1] = 0.0;
            param_2[2] = 0.0;
            param_2[3] = fVar37;
            fVar53 = (float)((uint)fRam000000014685e324 & uVar11);
            fVar54 = (float)((uint)fRam000000014685e328 & uVar12);
            fVar55 = (float)((uint)fRam000000014685e32c & uVar13);
            param_2[8] = (float)((uint)_DAT_14685e320 & uVar10);
            param_2[9] = fVar53;
            param_2[10] = fVar54;
            param_2[0xb] = fVar55;
            fVar21 = fRam000000014685e328;
            fVar7 = fRam000000014685e324;
            fVar5 = _DAT_14685e320;
            fVar36 = *(float *)(param_1 + 0x210);
            fVar41 = *(float *)(param_1 + 0x214);
            fVar43 = *(float *)(param_1 + 0x218);
            fVar31 = *(float *)(param_1 + 0x21c);
            auVar20 = *(undefined1 (*) [16])(param_1 + 0x230);
            fVar53 = auVar20._0_4_;
            fVar54 = auVar20._4_4_;
            fVar55 = auVar20._8_4_;
            fVar37 = auVar20._12_4_;
            auVar18 = minps(auVar18,auVar20);
            auVar20._4_4_ = -(uint)(auVar18._4_4_ < fRam000000014685e384);
            auVar20._0_4_ = -(uint)(auVar18._0_4_ < _DAT_14685e380);
            auVar20._8_4_ = -(uint)(auVar18._8_4_ < fRam000000014685e388);
            auVar20._12_4_ = -(uint)(auVar18._12_4_ < fRam000000014685e38c);
            iVar14 = movmskps((int)pfVar15,auVar20);
            if (iVar14 != 0) {
              fVar28 = fVar41 + fVar41;
              fVar30 = fVar43 + fVar43;
              fVar59 = *(float *)(param_1 + 0x220);
              fVar26 = *(float *)(param_1 + 0x224);
              fVar25 = *(float *)(param_1 + 0x228);
              fVar34 = fVar36 * (fVar36 + fVar36);
              fVar48 = fVar31 * (fVar36 + fVar36);
              fVar46 = (fVar31 * fVar30 + fVar36 * fVar28) * fVar53;
              fVar47 = (fVar48 + fVar41 * fVar30) * fVar54;
              fVar49 = (fVar31 * fVar28 + fVar36 * fVar30) * fVar55;
              fVar35 = fVar54 * (fVar36 * fVar28 - fVar31 * fVar30);
              fVar39 = fVar55 * (fVar41 * fVar30 - fVar48);
              fVar42 = fVar53 * (fVar36 * fVar30 - fVar31 * fVar28);
              fVar48 = fVar29 + fVar29;
              fVar33 = fVar27 + fVar27;
              fVar36 = (float)((uint)((_DAT_14685e320 - (fVar43 * fVar30 + fVar41 * fVar28)) *
                                     fVar53) & uVar10);
              fVar43 = (float)((uint)((fRam000000014685e324 - (fVar43 * fVar30 + fVar34)) * fVar54)
                              & uVar11);
              fVar31 = (float)((uint)((fRam000000014685e328 - (fVar41 * fVar28 + fVar34)) * fVar55)
                              & uVar12);
              fVar28 = (float)((uint)((fRam000000014685e32c - (fVar34 + fVar34)) * fVar37) & uVar13)
              ;
              fVar30 = (fVar22 + fVar22) * fVar22;
              fVar41 = (fVar22 + fVar22) * fVar32;
              fVar56 = (fVar33 * fVar32 + fVar48 * fVar22) * fVar2;
              fVar44 = (fVar41 + fVar33 * fVar29) * fVar3;
              fVar45 = (fVar48 * fVar32 + fVar33 * fVar22) * fVar4;
              fVar34 = fVar3 * (fVar48 * fVar22 - fVar33 * fVar32);
              fVar40 = fVar4 * (fVar33 * fVar29 - fVar41);
              fVar32 = fVar2 * (fVar33 * fVar22 - fVar48 * fVar32);
              fVar41 = (float)((uint)((_DAT_14685e320 - (fVar33 * fVar27 + fVar48 * fVar29)) * fVar2
                                     ) & uVar10);
              fVar22 = (float)((uint)((fRam000000014685e324 - (fVar33 * fVar27 + fVar30)) * fVar3) &
                              uVar11);
              fVar29 = (float)((uint)((fRam000000014685e328 - (fVar48 * fVar29 + fVar30)) * fVar4) &
                              uVar12);
              fVar27 = (float)((uint)((fRam000000014685e32c - (fVar30 + fVar30)) * fVar6) & uVar13);
              local_138._0_4_ =
                   fVar56 * fVar35 + fVar41 * fVar36 + fVar32 * fVar49 + fVar27 * fVar59;
              local_138._4_4_ =
                   fVar56 * fVar43 + fVar41 * fVar46 + fVar32 * fVar39 + fVar27 * fVar26;
              uStack_130._0_4_ =
                   fVar56 * fVar47 + fVar41 * fVar42 + fVar32 * fVar31 + fVar27 * fVar25;
              uStack_130._4_4_ =
                   fVar56 * fVar28 + fVar41 * fVar28 + fVar32 * fVar28 +
                   fVar27 * fRam000000014685e32c;
              local_128._0_4_ =
                   fVar22 * fVar35 + fVar34 * fVar36 + fVar44 * fVar49 + fVar27 * fVar59;
              local_128._4_4_ =
                   fVar22 * fVar43 + fVar34 * fVar46 + fVar44 * fVar39 + fVar27 * fVar26;
              uStack_120._0_4_ =
                   fVar22 * fVar47 + fVar34 * fVar42 + fVar44 * fVar31 + fVar27 * fVar25;
              uStack_120._4_4_ =
                   fVar22 * fVar28 + fVar34 * fVar28 + fVar44 * fVar28 +
                   fVar27 * fRam000000014685e32c;
              local_118._0_4_ =
                   fVar40 * fVar35 + fVar45 * fVar36 + fVar29 * fVar49 + fVar27 * fVar59;
              local_118._4_4_ =
                   fVar40 * fVar43 + fVar45 * fVar46 + fVar29 * fVar39 + fVar27 * fVar26;
              uStack_110._0_4_ =
                   fVar40 * fVar47 + fVar45 * fVar42 + fVar29 * fVar31 + fVar27 * fVar25;
              uStack_110._4_4_ =
                   fVar40 * fVar28 + fVar45 * fVar28 + fVar29 * fVar28 +
                   fVar27 * fRam000000014685e32c;
              local_108 = fVar58 * fVar35 + fVar57 * fVar36 + fVar38 * fVar49 +
                          fRam000000014685e32c * fVar59;
              fStack_104 = fVar58 * fVar43 + fVar57 * fVar46 + fVar38 * fVar39 +
                           fRam000000014685e32c * fVar26;
              fStack_100 = fVar58 * fVar47 + fVar57 * fVar42 + fVar38 * fVar31 +
                           fRam000000014685e32c * fVar25;
              fStack_fc = fVar58 * fVar28 + fVar57 * fVar28 + fVar38 * fVar28 +
                          fRam000000014685e32c * fRam000000014685e32c;
              FMatrix::RemoveScaling(&local_138);
              fVar36 = (float)(-(uint)(_DAT_14685e380 <= fVar2 * fVar53) &
                               (_DAT_14685e370 ^ (uint)fVar5) ^ _DAT_14685e370);
              fVar41 = (float)(-(uint)(fRam000000014685e384 <= fVar3 * fVar54) &
                               (uRam000000014685e374 ^ (uint)fVar7) ^ uRam000000014685e374);
              fVar43 = (float)(-(uint)(fRam000000014685e388 <= fVar4 * fVar55) &
                               (uRam000000014685e378 ^ (uint)fVar21) ^ uRam000000014685e378);
              local_138 = CONCAT44(local_138._4_4_ * fVar36,(float)local_138 * fVar36);
              uStack_130 = CONCAT44(uStack_130._4_4_,(float)uStack_130 * fVar36);
              uStack_120 = CONCAT44(uStack_120._4_4_,(float)uStack_120 * fVar41);
              uStack_110 = CONCAT44(uStack_110._4_4_,(float)uStack_110 * fVar43);
              local_128 = CONCAT44(local_128._4_4_ * fVar41,(float)local_128 * fVar41);
              local_118 = CONCAT44(local_118._4_4_ * fVar43,(float)local_118 * fVar43);
              FQuat::FQuat(&local_148,&local_138);
              auVar24._0_4_ = local_148 * local_148 + fStack_140 * fStack_140;
              auVar24._4_4_ = fStack_144 * fStack_144 + fStack_13c * fStack_13c;
              auVar24._8_4_ = fStack_140 * fStack_140 + local_148 * local_148;
              auVar24._12_4_ = fStack_13c * fStack_13c + fStack_144 * fStack_144;
              fVar29 = auVar24._4_4_ + auVar24._0_4_;
              fVar27 = auVar24._8_4_ + auVar24._4_4_;
              fVar32 = auVar24._12_4_ + auVar24._8_4_;
              fVar38 = auVar24._0_4_ + auVar24._12_4_;
              auVar9._4_4_ = fVar27;
              auVar9._0_4_ = fVar29;
              auVar9._8_4_ = fVar32;
              auVar9._12_4_ = fVar38;
              auVar18 = rsqrtps(auVar24,auVar9);
              fVar36 = auVar18._0_4_;
              fVar41 = auVar18._4_4_;
              fVar43 = auVar18._8_4_;
              fVar22 = auVar18._12_4_;
              fVar36 = (_DAT_14685e310 - fVar36 * fVar36 * fVar29 * _DAT_14685e310) * fVar36 +
                       fVar36;
              fVar41 = (fRam000000014685e314 - fVar41 * fVar41 * fVar27 * fRam000000014685e314) *
                       fVar41 + fVar41;
              fVar43 = (fRam000000014685e318 - fVar43 * fVar43 * fVar32 * fRam000000014685e318) *
                       fVar43 + fVar43;
              fVar22 = (fRam000000014685e31c - fVar22 * fVar22 * fVar38 * fRam000000014685e31c) *
                       fVar22 + fVar22;
              auVar18._4_4_ = fStack_104;
              auVar18._0_4_ = local_108;
              auVar18._8_4_ = fStack_100;
              fVar36 = (float)(((uint)(((_DAT_14685e310 - fVar36 * fVar36 * fVar29 * _DAT_14685e310)
                                        * fVar36 + fVar36) * local_148) ^ _DAT_14685e300) &
                               -(uint)(1e-08 <= fVar29) ^ _DAT_14685e300);
              fVar41 = (float)(((uint)(((fRam000000014685e314 -
                                        fVar41 * fVar41 * fVar27 * fRam000000014685e314) * fVar41 +
                                       fVar41) * fStack_144) ^ uRam000000014685e304) &
                               -(uint)(1e-08 <= fVar27) ^ uRam000000014685e304);
              fVar43 = (float)(((uint)(((fRam000000014685e318 -
                                        fVar43 * fVar43 * fVar32 * fRam000000014685e318) * fVar43 +
                                       fVar43) * fStack_140) ^ uRam000000014685e308) &
                               -(uint)(1e-08 <= fVar32) ^ uRam000000014685e308);
              fVar22 = (float)(((uint)(((fRam000000014685e31c -
                                        fVar22 * fVar22 * fVar38 * fRam000000014685e31c) * fVar22 +
                                       fVar22) * fStack_13c) ^ uRam000000014685e30c) &
                               -(uint)(1e-08 <= fVar38) ^ uRam000000014685e30c);
              auVar18._12_4_ = 0;
              *(undefined1 (*) [16])(param_2 + 4) = auVar18;
              param_2[8] = fVar2 * fVar53;
              param_2[9] = fVar3 * fVar54;
              param_2[10] = fVar4 * fVar55;
              param_2[0xb] = fVar6 * fVar37;
              *param_2 = fVar36;
              param_2[1] = fVar41;
              param_2[2] = fVar43;
              param_2[3] = fVar22;
              return param_2;
            }
            fVar5 = *(float *)(param_1 + 0x220);
            fVar7 = *(float *)(param_1 + 0x224);
            fVar21 = *(float *)(param_1 + 0x228);
            fVar26 = *(float *)(param_1 + 0x22c);
            fVar57 = fVar57 * fVar53;
            fVar58 = fVar58 * fVar54;
            fVar38 = fVar38 * fVar55;
            fVar59 = fVar59 * fVar37;
            fVar33 = fVar36 * fVar32 * _DAT_14685e360;
            fVar34 = fVar36 * fVar27 * fRam000000014685e364;
            fVar35 = fVar36 * fVar29 * fRam000000014685e368;
            fVar39 = fVar36 * fVar22 * fRam000000014685e36c;
            fVar25 = fVar41 * fVar27 * _DAT_14685e350;
            fVar28 = fVar41 * fVar32 * fRam000000014685e354;
            fVar30 = fVar41 * fVar22 * fRam000000014685e358;
            fVar48 = fVar41 * fVar29 * fRam000000014685e35c;
            param_2[8] = fVar2 * fVar53;
            param_2[9] = fVar3 * fVar54;
            param_2[10] = fVar4 * fVar55;
            param_2[0xb] = fVar6 * fVar37;
            fVar53 = fVar43 * fVar22 * fRam000000014685e344;
            fVar54 = fVar43 * fVar32 * fRam000000014685e348;
            fVar55 = fVar43 * fVar27 * fRam000000014685e34c;
            *param_2 = fVar33 + fVar31 * fVar22 + fVar25 + fVar43 * fVar29 * _DAT_14685e340;
            param_2[1] = fVar34 + fVar31 * fVar29 + fVar28 + fVar53;
            param_2[2] = fVar35 + fVar31 * fVar27 + fVar30 + fVar54;
            param_2[3] = fVar39 + fVar31 * fVar32 + fVar48 + fVar55;
            fVar53 = fVar38 * fVar41 - fVar58 * fVar43;
            fVar54 = fVar57 * fVar43 - fVar38 * fVar36;
            fVar55 = fVar58 * fVar36 - fVar57 * fVar41;
            fVar37 = fVar59 * fVar31 - fVar59 * fVar31;
            fVar53 = fVar53 + fVar53;
            fVar54 = fVar54 + fVar54;
            fVar55 = fVar55 + fVar55;
            fVar37 = fVar37 + fVar37;
            param_2[4] = (fVar55 * fVar41 - fVar54 * fVar43) + fVar31 * fVar53 + fVar57 + fVar5;
            param_2[5] = (fVar53 * fVar43 - fVar55 * fVar36) + fVar31 * fVar54 + fVar58 + fVar7;
            param_2[6] = (fVar54 * fVar36 - fVar53 * fVar41) + fVar31 * fVar55 + fVar38 + fVar21;
            param_2[7] = (fVar37 * fVar31 - fVar37 * fVar31) + fVar31 * fVar37 + fVar59 + fVar26;
            return param_2;
          }
          if (param_4 == 1) {
            lVar1 = *(longlong *)(param_1 + 0x118);
            if (lVar1 != 0) {
              auVar20 = *(undefined1 (*) [16])(param_1 + 0x230);
              fVar37 = auVar20._0_4_;
              fVar31 = auVar20._4_4_;
              fVar5 = auVar20._8_4_;
              fVar7 = auVar20._12_4_;
              fVar21 = *(float *)(param_1 + 0x210);
              fVar26 = *(float *)(param_1 + 0x214);
              fVar25 = *(float *)(param_1 + 0x218);
              fVar28 = *(float *)(param_1 + 0x21c);
              auVar18 = minps(auVar18,auVar20);
              auVar19._4_4_ = -(uint)(auVar18._4_4_ < fRam000000014685e384);
              auVar19._0_4_ = -(uint)(auVar18._0_4_ < _DAT_14685e380);
              auVar19._8_4_ = -(uint)(auVar18._8_4_ < fRam000000014685e388);
              auVar19._12_4_ = -(uint)(auVar18._12_4_ < fRam000000014685e38c);
              iVar14 = movmskps((int)pfVar15,auVar19);
              if (iVar14 == 0) {
                fVar57 = fVar57 * fVar37;
                fVar58 = fVar58 * fVar31;
                fVar38 = fVar38 * fVar5;
                fVar59 = fVar59 * fVar7;
                local_f8 = fVar21 * fVar32 * _DAT_14685e360 + fVar28 * fVar22 +
                           fVar26 * fVar27 * _DAT_14685e350 + fVar25 * fVar29 * _DAT_14685e340;
                fStack_f4 = fVar21 * fVar27 * fRam000000014685e364 + fVar28 * fVar29 +
                            fVar26 * fVar32 * fRam000000014685e354 +
                            fVar25 * fVar22 * fRam000000014685e344;
                fStack_f0 = fVar21 * fVar29 * fRam000000014685e368 + fVar28 * fVar27 +
                            fVar26 * fVar22 * fRam000000014685e358 +
                            fVar25 * fVar32 * fRam000000014685e348;
                fStack_ec = fVar21 * fVar22 * fRam000000014685e36c + fVar28 * fVar32 +
                            fVar26 * fVar29 * fRam000000014685e35c +
                            fVar25 * fVar27 * fRam000000014685e34c;
                fVar53 = fVar38 * fVar26 - fVar58 * fVar25;
                fVar54 = fVar57 * fVar25 - fVar38 * fVar21;
                fVar55 = fVar58 * fVar21 - fVar57 * fVar26;
                fVar36 = fVar59 * fVar28 - fVar59 * fVar28;
                fVar53 = fVar53 + fVar53;
                fVar54 = fVar54 + fVar54;
                fVar55 = fVar55 + fVar55;
                fVar36 = fVar36 + fVar36;
                local_e8._4_4_ =
                     (fVar53 * fVar25 - fVar55 * fVar21) + fVar28 * fVar54 + fVar58 +
                     *(float *)(param_1 + 0x224);
                local_e8._0_4_ =
                     (fVar55 * fVar26 - fVar54 * fVar25) + fVar28 * fVar53 + fVar57 +
                     *(float *)(param_1 + 0x220);
                fStack_e0 = (fVar54 * fVar21 - fVar53 * fVar26) + fVar28 * fVar55 + fVar38 +
                            *(float *)(param_1 + 0x228);
                fStack_dc = (fVar36 * fVar28 - fVar36 * fVar28) + fVar28 * fVar36 + fVar59 +
                            *(float *)(param_1 + 0x22c);
              }
              else {
                fVar59 = *(float *)(param_1 + 0x220);
                fVar30 = *(float *)(param_1 + 0x224);
                fVar48 = *(float *)(param_1 + 0x228);
                fVar33 = fVar26 + fVar26;
                fVar35 = fVar25 + fVar25;
                fVar39 = (fVar21 + fVar21) * fVar21;
                fVar34 = (fVar21 + fVar21) * fVar28;
                fVar50 = (fVar35 * fVar28 + fVar33 * fVar21) * fVar37;
                fVar51 = (fVar34 + fVar35 * fVar26) * fVar31;
                fVar52 = (fVar33 * fVar28 + fVar35 * fVar21) * fVar5;
                fVar40 = fVar31 * (fVar33 * fVar21 - fVar35 * fVar28);
                fVar42 = fVar5 * (fVar35 * fVar26 - fVar34);
                fVar44 = fVar37 * (fVar35 * fVar21 - fVar33 * fVar28);
                fVar21 = (float)((uint)((_DAT_14685e320 - (fVar35 * fVar25 + fVar33 * fVar26)) *
                                       fVar37) & _DAT_14685e330);
                fVar25 = (float)((uint)((fRam000000014685e324 - (fVar35 * fVar25 + fVar39)) * fVar31
                                       ) & uRam000000014685e334);
                fVar28 = (float)((uint)((fRam000000014685e328 - (fVar33 * fVar26 + fVar39)) * fVar5)
                                & uRam000000014685e338);
                fVar34 = (float)((uint)((fRam000000014685e32c - (fVar39 + fVar39)) * fVar7) &
                                uRam000000014685e33c);
                fVar26 = fVar29 + fVar29;
                fVar33 = fVar27 + fVar27;
                fVar35 = fVar22 * (fVar22 + fVar22);
                fVar56 = fVar32 * (fVar22 + fVar22);
                fVar46 = (fVar32 * fVar33 + fVar22 * fVar26) * fVar2;
                fVar47 = (fVar56 + fVar29 * fVar33) * fVar3;
                fVar49 = (fVar32 * fVar26 + fVar22 * fVar33) * fVar4;
                fVar39 = fVar3 * (fVar22 * fVar26 - fVar32 * fVar33);
                fVar56 = fVar4 * (fVar29 * fVar33 - fVar56);
                fVar45 = fVar2 * (fVar22 * fVar33 - fVar32 * fVar26);
                fVar22 = (float)((uint)((_DAT_14685e320 - (fVar27 * fVar33 + fVar29 * fVar26)) *
                                       fVar2) & _DAT_14685e330);
                fVar27 = (float)((uint)((fRam000000014685e324 - (fVar27 * fVar33 + fVar35)) * fVar3)
                                & uRam000000014685e334);
                fVar29 = (float)((uint)((fRam000000014685e328 - (fVar29 * fVar26 + fVar35)) * fVar4)
                                & uRam000000014685e338);
                fVar32 = (float)((uint)((fRam000000014685e32c - (fVar35 + fVar35)) * fVar6) &
                                uRam000000014685e33c);
                local_138._0_4_ =
                     fVar46 * fVar40 + fVar22 * fVar21 + fVar45 * fVar52 + fVar32 * fVar59;
                local_138._4_4_ =
                     fVar46 * fVar25 + fVar22 * fVar50 + fVar45 * fVar42 + fVar32 * fVar30;
                uStack_130._0_4_ =
                     fVar46 * fVar51 + fVar22 * fVar44 + fVar45 * fVar28 + fVar32 * fVar48;
                uStack_130._4_4_ =
                     fVar46 * fVar34 + fVar22 * fVar34 + fVar45 * fVar34 +
                     fVar32 * fRam000000014685e32c;
                local_128._0_4_ =
                     fVar27 * fVar40 + fVar39 * fVar21 + fVar47 * fVar52 + fVar32 * fVar59;
                local_128._4_4_ =
                     fVar27 * fVar25 + fVar39 * fVar50 + fVar47 * fVar42 + fVar32 * fVar30;
                uStack_120._0_4_ =
                     fVar27 * fVar51 + fVar39 * fVar44 + fVar47 * fVar28 + fVar32 * fVar48;
                uStack_120._4_4_ =
                     fVar27 * fVar34 + fVar39 * fVar34 + fVar47 * fVar34 +
                     fVar32 * fRam000000014685e32c;
                local_118._0_4_ =
                     fVar56 * fVar40 + fVar49 * fVar21 + fVar29 * fVar52 + fVar32 * fVar59;
                local_118._4_4_ =
                     fVar56 * fVar25 + fVar49 * fVar50 + fVar29 * fVar42 + fVar32 * fVar30;
                uStack_110._0_4_ =
                     fVar56 * fVar51 + fVar49 * fVar44 + fVar29 * fVar28 + fVar32 * fVar48;
                uStack_110._4_4_ =
                     fVar56 * fVar34 + fVar49 * fVar34 + fVar29 * fVar34 +
                     fVar32 * fRam000000014685e32c;
                local_108 = fVar58 * fVar40 + fVar57 * fVar21 + fVar38 * fVar52 +
                            fRam000000014685e32c * fVar59;
                fStack_104 = fVar58 * fVar25 + fVar57 * fVar50 + fVar38 * fVar42 +
                             fRam000000014685e32c * fVar30;
                fStack_100 = fVar58 * fVar51 + fVar57 * fVar44 + fVar38 * fVar28 +
                             fRam000000014685e32c * fVar48;
                fStack_fc = fVar58 * fVar34 + fVar57 * fVar34 + fVar38 * fVar34 +
                            fRam000000014685e32c * fRam000000014685e32c;
                FMatrix::RemoveScaling(&local_138);
                fVar53 = (float)(-(uint)(fVar36 <= fVar2 * fVar37) & (_DAT_14685e370 ^ (uint)fVar53)
                                ^ _DAT_14685e370);
                fVar54 = (float)(-(uint)(fVar41 <= fVar3 * fVar31) &
                                 (uRam000000014685e374 ^ (uint)fVar54) ^ uRam000000014685e374);
                fVar55 = (float)(-(uint)(fVar43 <= fVar4 * fVar5) &
                                 (uRam000000014685e378 ^ (uint)fVar55) ^ uRam000000014685e378);
                local_138 = CONCAT44(local_138._4_4_ * fVar53,(float)local_138 * fVar53);
                uStack_130 = CONCAT44(uStack_130._4_4_,(float)uStack_130 * fVar53);
                uStack_120 = CONCAT44(uStack_120._4_4_,(float)uStack_120 * fVar54);
                uStack_110 = CONCAT44(uStack_110._4_4_,(float)uStack_110 * fVar55);
                local_128 = CONCAT44(local_128._4_4_ * fVar54,(float)local_128 * fVar54);
                local_118 = CONCAT44(local_118._4_4_ * fVar55,(float)local_118 * fVar55);
                FQuat::FQuat(&local_148,&local_138);
                local_158 = CONCAT44(local_158._4_4_,0x322bcc77);
                auVar23._0_4_ = local_148 * local_148 + fStack_140 * fStack_140;
                auVar23._4_4_ = fStack_144 * fStack_144 + fStack_13c * fStack_13c;
                auVar23._8_4_ = fStack_140 * fStack_140 + local_148 * local_148;
                auVar23._12_4_ = fStack_13c * fStack_13c + fStack_144 * fStack_144;
                fVar41 = auVar23._4_4_ + auVar23._0_4_;
                fVar43 = auVar23._8_4_ + auVar23._4_4_;
                fVar22 = auVar23._12_4_ + auVar23._8_4_;
                fVar29 = auVar23._0_4_ + auVar23._12_4_;
                auVar8._4_4_ = fVar43;
                auVar8._0_4_ = fVar41;
                auVar8._8_4_ = fVar22;
                auVar8._12_4_ = fVar29;
                auVar18 = rsqrtps(auVar23,auVar8);
                fVar53 = auVar18._0_4_;
                fVar54 = auVar18._4_4_;
                fVar55 = auVar18._8_4_;
                fVar36 = auVar18._12_4_;
                fVar53 = (_DAT_14685e310 - fVar53 * fVar53 * fVar41 * _DAT_14685e310) * fVar53 +
                         fVar53;
                fVar54 = (fRam000000014685e314 - fVar54 * fVar54 * fVar43 * fRam000000014685e314) *
                         fVar54 + fVar54;
                fVar55 = (fRam000000014685e318 - fVar55 * fVar55 * fVar22 * fRam000000014685e318) *
                         fVar55 + fVar55;
                fVar36 = (fRam000000014685e31c - fVar36 * fVar36 * fVar29 * fRam000000014685e31c) *
                         fVar36 + fVar36;
                local_e8._4_4_ = fStack_104;
                local_e8._0_4_ = local_108;
                fStack_e0 = fStack_100;
                local_f8 = (float)(((uint)(((_DAT_14685e310 -
                                            fVar53 * fVar53 * fVar41 * _DAT_14685e310) * fVar53 +
                                           fVar53) * local_148) ^ _DAT_14685e300) &
                                   -(uint)(1e-08 <= fVar41) ^ _DAT_14685e300);
                fStack_f4 = (float)(((uint)(((fRam000000014685e314 -
                                             fVar54 * fVar54 * fVar43 * fRam000000014685e314) *
                                             fVar54 + fVar54) * fStack_144) ^ uRam000000014685e304)
                                    & -(uint)(1e-08 <= fVar43) ^ uRam000000014685e304);
                fStack_f0 = (float)(((uint)(((fRam000000014685e318 -
                                             fVar55 * fVar55 * fVar22 * fRam000000014685e318) *
                                             fVar55 + fVar55) * fStack_140) ^ uRam000000014685e308)
                                    & -(uint)(1e-08 <= fVar22) ^ uRam000000014685e308);
                fStack_ec = (float)(((uint)(((fRam000000014685e31c -
                                             fVar36 * fVar36 * fVar29 * fRam000000014685e31c) *
                                             fVar36 + fVar36) * fStack_13c) ^ uRam000000014685e30c)
                                    & -(uint)(1e-08 <= fVar29) ^ uRam000000014685e30c);
                fStack_dc = 0.0;
              }
              fStack_cc = fVar6 * fVar7;
              fStack_d0 = fVar4 * fVar5;
              fStack_d4 = fVar3 * fVar31;
              local_d8 = fVar2 * fVar37;
              lVar1 = *(longlong *)(lVar1 + 0x168);
              if (lVar1 == 0) {
                puVar16 = (undefined8 *)&DAT_1468b5b70;
              }
              else {
                puVar16 = (undefined8 *)(lVar1 + 0x210);
              }
              local_138 = *puVar16;
              uStack_130 = puVar16[1];
              local_128 = puVar16[2];
              uStack_120 = puVar16[3];
              local_118 = puVar16[4];
              uStack_110 = puVar16[5];
              FUN_14162bcf0(&local_f8,param_2,&local_138);
              return param_2;
            }
          }
          else if (param_4 - 2U < 2) {
            *param_2 = fVar22;
            param_2[1] = fVar29;
            param_2[2] = fVar27;
            param_2[3] = fVar32;
            param_2[4] = fVar57;
            param_2[5] = fVar58;
            param_2[6] = fVar38;
            param_2[7] = fVar59;
            *(undefined1 (*) [16])(param_2 + 8) = auVar18;
            return param_2;
          }
          break;
        }
        lVar17 = lVar17 + 1;
        pfVar15 = pfVar15 + 0x10;
      } while (lVar17 < *(int *)(lVar1 + 0x90));
    }
  }
  FUN_14238d570(param_1,param_2);
  return param_2;
}



// FUNCTION 140817d60 FUN_140817d60 body=2895 status=ok
// SIG undefined FUN_140817d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140817d60(longlong param_1,float *param_2,float param_3,int param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float *pfVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong in_R8;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar33;
  undefined1 auVar24 [16];
  float fVar29;
  float fVar32;
  undefined1 auVar25 [16];
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
  undefined1 auStack_178 [32];
  undefined4 local_158;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  uVar12 = uRam000000014685e33c;
  uVar11 = uRam000000014685e338;
  uVar10 = uRam000000014685e334;
  uVar9 = _DAT_14685e330;
  fVar37 = fRam000000014685e32c;
  fVar45 = fRam000000014685e328;
  fVar42 = fRam000000014685e324;
  fVar40 = _DAT_14685e320;
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar1 = *(longlong *)(param_1 + 0x718);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x90))) {
    lVar16 = 0;
    pfVar14 = *(float **)(lVar1 + 0x88);
    do {
      if (*(longlong *)(pfVar14 + 0xc) == in_R8) {
        fVar21 = *pfVar14;
        fVar31 = pfVar14[1];
        fVar28 = pfVar14[2];
        fVar33 = pfVar14[3];
        auVar17 = *(undefined1 (*) [16])(pfVar14 + 8);
        fVar2 = auVar17._0_4_;
        fVar3 = auVar17._4_4_;
        fVar4 = auVar17._8_4_;
        fVar5 = auVar17._12_4_;
        param_3 = 1.0 / *(float *)(lVar1 + 0x9c);
        fVar52 = param_3 * pfVar14[4];
        fVar53 = param_3 * pfVar14[5];
        fVar54 = param_3 * pfVar14[6];
        fVar55 = pfVar14[7] * 0.0;
        if (param_4 == 0) {
          param_2[4] = 0.0;
          param_2[5] = 0.0;
          param_2[6] = 0.0;
          param_2[7] = 0.0;
          *param_2 = 0.0;
          param_2[1] = 0.0;
          param_2[2] = 0.0;
          param_2[3] = fVar37;
          fVar40 = (float)((uint)fRam000000014685e324 & uVar10);
          fVar42 = (float)((uint)fRam000000014685e328 & uVar11);
          fVar45 = (float)((uint)fRam000000014685e32c & uVar12);
          param_2[8] = (float)((uint)_DAT_14685e320 & uVar9);
          param_2[9] = fVar40;
          param_2[10] = fVar42;
          param_2[0xb] = fVar45;
          fVar30 = fRam000000014685e328;
          fVar26 = fRam000000014685e324;
          fVar27 = _DAT_14685e320;
          fVar22 = *(float *)(param_1 + 0x210);
          fVar32 = *(float *)(param_1 + 0x214);
          fVar29 = *(float *)(param_1 + 0x218);
          fVar20 = *(float *)(param_1 + 0x21c);
          auVar19 = *(undefined1 (*) [16])(param_1 + 0x230);
          fVar40 = auVar19._0_4_;
          fVar42 = auVar19._4_4_;
          fVar45 = auVar19._8_4_;
          fVar37 = auVar19._12_4_;
          auVar17 = minps(auVar17,auVar19);
          auVar19._4_4_ = -(uint)(auVar17._4_4_ < fRam000000014685e384);
          auVar19._0_4_ = -(uint)(auVar17._0_4_ < _DAT_14685e380);
          auVar19._8_4_ = -(uint)(auVar17._8_4_ < fRam000000014685e388);
          auVar19._12_4_ = -(uint)(auVar17._12_4_ < fRam000000014685e38c);
          iVar13 = movmskps((int)pfVar14,auVar19);
          if (iVar13 != 0) {
            fVar34 = fVar32 + fVar32;
            fVar35 = fVar29 + fVar29;
            fVar55 = *(float *)(param_1 + 0x220);
            fVar8 = *(float *)(param_1 + 0x224);
            fVar23 = *(float *)(param_1 + 0x228);
            fVar39 = fVar22 * (fVar22 + fVar22);
            fVar36 = fVar20 * (fVar22 + fVar22);
            fVar49 = (fVar20 * fVar35 + fVar22 * fVar34) * fVar40;
            fVar50 = (fVar36 + fVar32 * fVar35) * fVar42;
            fVar51 = (fVar20 * fVar34 + fVar22 * fVar35) * fVar45;
            fVar41 = fVar42 * (fVar22 * fVar34 - fVar20 * fVar35);
            fVar56 = fVar45 * (fVar32 * fVar35 - fVar36);
            fVar43 = fVar40 * (fVar22 * fVar35 - fVar20 * fVar34);
            fVar36 = fVar31 + fVar31;
            fVar38 = fVar28 + fVar28;
            fVar22 = (float)((uint)((_DAT_14685e320 - (fVar29 * fVar35 + fVar32 * fVar34)) * fVar40)
                            & uVar9);
            fVar29 = (float)((uint)((fRam000000014685e324 - (fVar29 * fVar35 + fVar39)) * fVar42) &
                            uVar10);
            fVar32 = (float)((uint)((fRam000000014685e328 - (fVar32 * fVar34 + fVar39)) * fVar45) &
                            uVar11);
            fVar20 = (float)((uint)((fRam000000014685e32c - (fVar39 + fVar39)) * fVar37) & uVar12);
            fVar35 = (fVar21 + fVar21) * fVar21;
            fVar34 = (fVar21 + fVar21) * fVar33;
            fVar46 = (fVar38 * fVar33 + fVar36 * fVar21) * fVar2;
            fVar47 = (fVar34 + fVar38 * fVar31) * fVar3;
            fVar48 = (fVar36 * fVar33 + fVar38 * fVar21) * fVar4;
            fVar39 = fVar3 * (fVar36 * fVar21 - fVar38 * fVar33);
            fVar34 = fVar4 * (fVar38 * fVar31 - fVar34);
            fVar44 = fVar2 * (fVar38 * fVar21 - fVar36 * fVar33);
            fVar21 = (float)((uint)((_DAT_14685e320 - (fVar38 * fVar28 + fVar36 * fVar31)) * fVar2)
                            & uVar9);
            fVar28 = (float)((uint)((fRam000000014685e324 - (fVar38 * fVar28 + fVar35)) * fVar3) &
                            uVar10);
            fVar31 = (float)((uint)((fRam000000014685e328 - (fVar36 * fVar31 + fVar35)) * fVar4) &
                            uVar11);
            fVar33 = (float)((uint)((fRam000000014685e32c - (fVar35 + fVar35)) * fVar5) & uVar12);
            local_138._0_4_ = fVar46 * fVar41 + fVar21 * fVar22 + fVar44 * fVar51 + fVar33 * fVar55;
            local_138._4_4_ = fVar46 * fVar29 + fVar21 * fVar49 + fVar44 * fVar56 + fVar33 * fVar8;
            uStack_130._0_4_ = fVar46 * fVar50 + fVar21 * fVar43 + fVar44 * fVar32 + fVar33 * fVar23
            ;
            uStack_130._4_4_ =
                 fVar46 * fVar20 + fVar21 * fVar20 + fVar44 * fVar20 + fVar33 * fRam000000014685e32c
            ;
            local_128._0_4_ = fVar28 * fVar41 + fVar39 * fVar22 + fVar47 * fVar51 + fVar33 * fVar55;
            local_128._4_4_ = fVar28 * fVar29 + fVar39 * fVar49 + fVar47 * fVar56 + fVar33 * fVar8;
            uStack_120._0_4_ = fVar28 * fVar50 + fVar39 * fVar43 + fVar47 * fVar32 + fVar33 * fVar23
            ;
            uStack_120._4_4_ =
                 fVar28 * fVar20 + fVar39 * fVar20 + fVar47 * fVar20 + fVar33 * fRam000000014685e32c
            ;
            local_118._0_4_ = fVar34 * fVar41 + fVar48 * fVar22 + fVar31 * fVar51 + fVar33 * fVar55;
            local_118._4_4_ = fVar34 * fVar29 + fVar48 * fVar49 + fVar31 * fVar56 + fVar33 * fVar8;
            uStack_110._0_4_ = fVar34 * fVar50 + fVar48 * fVar43 + fVar31 * fVar32 + fVar33 * fVar23
            ;
            uStack_110._4_4_ =
                 fVar34 * fVar20 + fVar48 * fVar20 + fVar31 * fVar20 + fVar33 * fRam000000014685e32c
            ;
            local_108 = fVar53 * fVar41 + fVar52 * fVar22 + fVar54 * fVar51 +
                        fRam000000014685e32c * fVar55;
            fStack_104 = fVar53 * fVar29 + fVar52 * fVar49 + fVar54 * fVar56 +
                         fRam000000014685e32c * fVar8;
            fStack_100 = fVar53 * fVar50 + fVar52 * fVar43 + fVar54 * fVar32 +
                         fRam000000014685e32c * fVar23;
            fStack_fc = fVar53 * fVar20 + fVar52 * fVar20 + fVar54 * fVar20 +
                        fRam000000014685e32c * fRam000000014685e32c;
            FMatrix::RemoveScaling(&local_138);
            fVar21 = (float)(-(uint)(_DAT_14685e380 <= fVar2 * fVar40) &
                             (_DAT_14685e370 ^ (uint)fVar27) ^ _DAT_14685e370);
            fVar31 = (float)(-(uint)(fRam000000014685e384 <= fVar3 * fVar42) &
                             (uRam000000014685e374 ^ (uint)fVar26) ^ uRam000000014685e374);
            fVar28 = (float)(-(uint)(fRam000000014685e388 <= fVar4 * fVar45) &
                             (uRam000000014685e378 ^ (uint)fVar30) ^ uRam000000014685e378);
            local_138 = CONCAT44(local_138._4_4_ * fVar21,(float)local_138 * fVar21);
            uStack_130 = CONCAT44(uStack_130._4_4_,(float)uStack_130 * fVar21);
            uStack_120 = CONCAT44(uStack_120._4_4_,(float)uStack_120 * fVar31);
            uStack_110 = CONCAT44(uStack_110._4_4_,(float)uStack_110 * fVar28);
            local_128 = CONCAT44(local_128._4_4_ * fVar31,(float)local_128 * fVar31);
            local_118 = CONCAT44(local_118._4_4_ * fVar28,(float)local_118 * fVar28);
            FQuat::FQuat(&local_148,&local_138);
            auVar25._0_4_ = local_148 * local_148 + fStack_140 * fStack_140;
            auVar25._4_4_ = fStack_144 * fStack_144 + fStack_13c * fStack_13c;
            auVar25._8_4_ = fStack_140 * fStack_140 + local_148 * local_148;
            auVar25._12_4_ = fStack_13c * fStack_13c + fStack_144 * fStack_144;
            fVar52 = auVar25._4_4_ + auVar25._0_4_;
            fVar53 = auVar25._8_4_ + auVar25._4_4_;
            fVar54 = auVar25._12_4_ + auVar25._8_4_;
            fVar55 = auVar25._0_4_ + auVar25._12_4_;
            auVar7._4_4_ = fVar53;
            auVar7._0_4_ = fVar52;
            auVar7._8_4_ = fVar54;
            auVar7._12_4_ = fVar55;
            auVar17 = rsqrtps(auVar25,auVar7);
            fVar21 = auVar17._0_4_;
            fVar31 = auVar17._4_4_;
            fVar28 = auVar17._8_4_;
            fVar33 = auVar17._12_4_;
            fVar21 = (_DAT_14685e310 - fVar21 * fVar21 * fVar52 * _DAT_14685e310) * fVar21 + fVar21;
            fVar31 = (fRam000000014685e314 - fVar31 * fVar31 * fVar53 * fRam000000014685e314) *
                     fVar31 + fVar31;
            fVar28 = (fRam000000014685e318 - fVar28 * fVar28 * fVar54 * fRam000000014685e318) *
                     fVar28 + fVar28;
            fVar33 = (fRam000000014685e31c - fVar33 * fVar33 * fVar55 * fRam000000014685e31c) *
                     fVar33 + fVar33;
            auVar17._4_4_ = fStack_104;
            auVar17._0_4_ = local_108;
            auVar17._8_4_ = fStack_100;
            fVar21 = (float)(((uint)(((_DAT_14685e310 - fVar21 * fVar21 * fVar52 * _DAT_14685e310) *
                                      fVar21 + fVar21) * local_148) ^ _DAT_14685e300) &
                             -(uint)(1e-08 <= fVar52) ^ _DAT_14685e300);
            fVar31 = (float)(((uint)(((fRam000000014685e314 -
                                      fVar31 * fVar31 * fVar53 * fRam000000014685e314) * fVar31 +
                                     fVar31) * fStack_144) ^ uRam000000014685e304) &
                             -(uint)(1e-08 <= fVar53) ^ uRam000000014685e304);
            fVar28 = (float)(((uint)(((fRam000000014685e318 -
                                      fVar28 * fVar28 * fVar54 * fRam000000014685e318) * fVar28 +
                                     fVar28) * fStack_140) ^ uRam000000014685e308) &
                             -(uint)(1e-08 <= fVar54) ^ uRam000000014685e308);
            fVar33 = (float)(((uint)(((fRam000000014685e31c -
                                      fVar33 * fVar33 * fVar55 * fRam000000014685e31c) * fVar33 +
                                     fVar33) * fStack_13c) ^ uRam000000014685e30c) &
                             -(uint)(1e-08 <= fVar55) ^ uRam000000014685e30c);
            auVar17._12_4_ = 0;
            *(undefined1 (*) [16])(param_2 + 4) = auVar17;
            param_2[8] = fVar2 * fVar40;
            param_2[9] = fVar3 * fVar42;
            param_2[10] = fVar4 * fVar45;
            param_2[0xb] = fVar5 * fVar37;
            *param_2 = fVar21;
            param_2[1] = fVar31;
            param_2[2] = fVar28;
            param_2[3] = fVar33;
            return param_2;
          }
          fVar27 = *(float *)(param_1 + 0x220);
          fVar26 = *(float *)(param_1 + 0x224);
          fVar30 = *(float *)(param_1 + 0x228);
          fVar8 = *(float *)(param_1 + 0x22c);
          fVar52 = fVar52 * fVar40;
          fVar53 = fVar53 * fVar42;
          fVar54 = fVar54 * fVar45;
          fVar55 = fVar55 * fVar37;
          fVar38 = fVar22 * fVar33 * _DAT_14685e360;
          fVar39 = fVar22 * fVar28 * fRam000000014685e364;
          fVar41 = fVar22 * fVar31 * fRam000000014685e368;
          fVar56 = fVar22 * fVar21 * fRam000000014685e36c;
          fVar23 = fVar32 * fVar28 * _DAT_14685e350;
          fVar34 = fVar32 * fVar33 * fRam000000014685e354;
          fVar35 = fVar32 * fVar21 * fRam000000014685e358;
          fVar36 = fVar32 * fVar31 * fRam000000014685e35c;
          param_2[8] = fVar2 * fVar40;
          param_2[9] = fVar3 * fVar42;
          param_2[10] = fVar4 * fVar45;
          param_2[0xb] = fVar5 * fVar37;
          fVar40 = fVar29 * fVar21 * fRam000000014685e344;
          fVar42 = fVar29 * fVar33 * fRam000000014685e348;
          fVar45 = fVar29 * fVar28 * fRam000000014685e34c;
          *param_2 = fVar38 + fVar20 * fVar21 + fVar23 + fVar29 * fVar31 * _DAT_14685e340;
          param_2[1] = fVar39 + fVar20 * fVar31 + fVar34 + fVar40;
          param_2[2] = fVar41 + fVar20 * fVar28 + fVar35 + fVar42;
          param_2[3] = fVar56 + fVar20 * fVar33 + fVar36 + fVar45;
          fVar40 = fVar54 * fVar32 - fVar53 * fVar29;
          fVar42 = fVar52 * fVar29 - fVar54 * fVar22;
          fVar45 = fVar53 * fVar22 - fVar52 * fVar32;
          fVar37 = fVar55 * fVar20 - fVar55 * fVar20;
          fVar40 = fVar40 + fVar40;
          fVar42 = fVar42 + fVar42;
          fVar45 = fVar45 + fVar45;
          fVar37 = fVar37 + fVar37;
          param_2[4] = (fVar45 * fVar32 - fVar42 * fVar29) + fVar20 * fVar40 + fVar52 + fVar27;
          param_2[5] = (fVar40 * fVar29 - fVar45 * fVar22) + fVar20 * fVar42 + fVar53 + fVar26;
          param_2[6] = (fVar42 * fVar22 - fVar40 * fVar32) + fVar20 * fVar45 + fVar54 + fVar30;
          param_2[7] = (fVar37 * fVar20 - fVar37 * fVar20) + fVar20 * fVar37 + fVar55 + fVar8;
          return param_2;
        }
        if (param_4 == 1) {
          lVar1 = *(longlong *)(param_1 + 0x118);
          if (lVar1 != 0) {
            auVar19 = *(undefined1 (*) [16])(param_1 + 0x230);
            fVar37 = auVar19._0_4_;
            fVar22 = auVar19._4_4_;
            fVar32 = auVar19._8_4_;
            fVar29 = auVar19._12_4_;
            fVar20 = *(float *)(param_1 + 0x210);
            fVar27 = *(float *)(param_1 + 0x214);
            fVar26 = *(float *)(param_1 + 0x218);
            fVar30 = *(float *)(param_1 + 0x21c);
            auVar17 = minps(auVar17,auVar19);
            auVar18._4_4_ = -(uint)(auVar17._4_4_ < fRam000000014685e384);
            auVar18._0_4_ = -(uint)(auVar17._0_4_ < _DAT_14685e380);
            auVar18._8_4_ = -(uint)(auVar17._8_4_ < fRam000000014685e388);
            auVar18._12_4_ = -(uint)(auVar17._12_4_ < fRam000000014685e38c);
            iVar13 = movmskps((int)pfVar14,auVar18);
            if (iVar13 == 0) {
              fVar52 = fVar52 * fVar37;
              fVar53 = fVar53 * fVar22;
              fVar54 = fVar54 * fVar32;
              fVar55 = fVar55 * fVar29;
              local_f8 = fVar20 * fVar33 * _DAT_14685e360 + fVar21 * fVar30 +
                         fVar27 * fVar28 * _DAT_14685e350 + fVar26 * fVar31 * _DAT_14685e340;
              fStack_f4 = fVar20 * fVar28 * fRam000000014685e364 + fVar31 * fVar30 +
                          fVar27 * fVar33 * fRam000000014685e354 +
                          fVar26 * fVar21 * fRam000000014685e344;
              fStack_f0 = fVar20 * fVar31 * fRam000000014685e368 + fVar28 * fVar30 +
                          fVar27 * fVar21 * fRam000000014685e358 +
                          fVar26 * fVar33 * fRam000000014685e348;
              fStack_ec = fVar20 * fVar21 * fRam000000014685e36c + fVar33 * fVar30 +
                          fVar27 * fVar31 * fRam000000014685e35c +
                          fVar26 * fVar28 * fRam000000014685e34c;
              fVar40 = fVar54 * fVar27 - fVar53 * fVar26;
              fVar42 = fVar52 * fVar26 - fVar54 * fVar20;
              fVar45 = fVar53 * fVar20 - fVar52 * fVar27;
              fVar21 = fVar55 * fVar30 - fVar55 * fVar30;
              fVar40 = fVar40 + fVar40;
              fVar42 = fVar42 + fVar42;
              fVar45 = fVar45 + fVar45;
              fVar21 = fVar21 + fVar21;
              local_e8._4_4_ =
                   (fVar40 * fVar26 - fVar45 * fVar20) + fVar30 * fVar42 + fVar53 +
                   *(float *)(param_1 + 0x224);
              local_e8._0_4_ =
                   (fVar45 * fVar27 - fVar42 * fVar26) + fVar30 * fVar40 + fVar52 +
                   *(float *)(param_1 + 0x220);
              fStack_e0 = (fVar42 * fVar20 - fVar40 * fVar27) + fVar30 * fVar45 + fVar54 +
                          *(float *)(param_1 + 0x228);
              fStack_dc = (fVar21 * fVar30 - fVar21 * fVar30) + fVar30 * fVar21 + fVar55 +
                          *(float *)(param_1 + 0x22c);
            }
            else {
              fVar34 = fVar27 + fVar27;
              fVar36 = fVar26 + fVar26;
              fVar55 = *(float *)(param_1 + 0x220);
              fVar8 = *(float *)(param_1 + 0x224);
              fVar23 = *(float *)(param_1 + 0x228);
              fVar38 = (fVar20 + fVar20) * fVar20;
              fVar35 = (fVar20 + fVar20) * fVar30;
              fVar49 = (fVar36 * fVar30 + fVar34 * fVar20) * fVar37;
              fVar50 = (fVar35 + fVar36 * fVar27) * fVar22;
              fVar51 = (fVar34 * fVar30 + fVar36 * fVar20) * fVar32;
              fVar39 = fVar22 * (fVar34 * fVar20 - fVar36 * fVar30);
              fVar41 = fVar32 * (fVar36 * fVar27 - fVar35);
              fVar43 = fVar37 * (fVar36 * fVar20 - fVar34 * fVar30);
              fVar20 = (float)((uint)((_DAT_14685e320 - (fVar36 * fVar26 + fVar34 * fVar27)) *
                                     fVar37) & _DAT_14685e330);
              fVar26 = (float)((uint)((fRam000000014685e324 - (fVar36 * fVar26 + fVar38)) * fVar22)
                              & uRam000000014685e334);
              fVar30 = (float)((uint)((fRam000000014685e328 - (fVar34 * fVar27 + fVar38)) * fVar32)
                              & uRam000000014685e338);
              fVar35 = (float)((uint)((fRam000000014685e32c - (fVar38 + fVar38)) * fVar29) &
                              uRam000000014685e33c);
              fVar27 = fVar31 + fVar31;
              fVar34 = fVar28 + fVar28;
              fVar36 = fVar21 * (fVar21 + fVar21);
              fVar56 = fVar33 * (fVar21 + fVar21);
              fVar46 = (fVar33 * fVar34 + fVar21 * fVar27) * fVar2;
              fVar47 = (fVar56 + fVar31 * fVar34) * fVar3;
              fVar48 = (fVar33 * fVar27 + fVar21 * fVar34) * fVar4;
              fVar38 = fVar3 * (fVar21 * fVar27 - fVar33 * fVar34);
              fVar56 = fVar4 * (fVar31 * fVar34 - fVar56);
              fVar44 = fVar2 * (fVar21 * fVar34 - fVar33 * fVar27);
              fVar21 = (float)((uint)((_DAT_14685e320 - (fVar28 * fVar34 + fVar31 * fVar27)) * fVar2
                                     ) & _DAT_14685e330);
              fVar28 = (float)((uint)((fRam000000014685e324 - (fVar28 * fVar34 + fVar36)) * fVar3) &
                              uRam000000014685e334);
              fVar31 = (float)((uint)((fRam000000014685e328 - (fVar31 * fVar27 + fVar36)) * fVar4) &
                              uRam000000014685e338);
              fVar33 = (float)((uint)((fRam000000014685e32c - (fVar36 + fVar36)) * fVar5) &
                              uRam000000014685e33c);
              local_138._0_4_ =
                   fVar46 * fVar39 + fVar21 * fVar20 + fVar44 * fVar51 + fVar33 * fVar55;
              local_138._4_4_ = fVar46 * fVar26 + fVar21 * fVar49 + fVar44 * fVar41 + fVar33 * fVar8
              ;
              uStack_130._0_4_ =
                   fVar46 * fVar50 + fVar21 * fVar43 + fVar44 * fVar30 + fVar33 * fVar23;
              uStack_130._4_4_ =
                   fVar46 * fVar35 + fVar21 * fVar35 + fVar44 * fVar35 +
                   fVar33 * fRam000000014685e32c;
              local_128._0_4_ =
                   fVar28 * fVar39 + fVar38 * fVar20 + fVar47 * fVar51 + fVar33 * fVar55;
              local_128._4_4_ = fVar28 * fVar26 + fVar38 * fVar49 + fVar47 * fVar41 + fVar33 * fVar8
              ;
              uStack_120._0_4_ =
                   fVar28 * fVar50 + fVar38 * fVar43 + fVar47 * fVar30 + fVar33 * fVar23;
              uStack_120._4_4_ =
                   fVar28 * fVar35 + fVar38 * fVar35 + fVar47 * fVar35 +
                   fVar33 * fRam000000014685e32c;
              local_118._0_4_ =
                   fVar56 * fVar39 + fVar48 * fVar20 + fVar31 * fVar51 + fVar33 * fVar55;
              local_118._4_4_ = fVar56 * fVar26 + fVar48 * fVar49 + fVar31 * fVar41 + fVar33 * fVar8
              ;
              uStack_110._0_4_ =
                   fVar56 * fVar50 + fVar48 * fVar43 + fVar31 * fVar30 + fVar33 * fVar23;
              uStack_110._4_4_ =
                   fVar56 * fVar35 + fVar48 * fVar35 + fVar31 * fVar35 +
                   fVar33 * fRam000000014685e32c;
              local_108 = fVar53 * fVar39 + fVar52 * fVar20 + fVar54 * fVar51 +
                          fRam000000014685e32c * fVar55;
              fStack_104 = fVar53 * fVar26 + fVar52 * fVar49 + fVar54 * fVar41 +
                           fRam000000014685e32c * fVar8;
              fStack_100 = fVar53 * fVar50 + fVar52 * fVar43 + fVar54 * fVar30 +
                           fRam000000014685e32c * fVar23;
              fStack_fc = fVar53 * fVar35 + fVar52 * fVar35 + fVar54 * fVar35 +
                          fRam000000014685e32c * fRam000000014685e32c;
              FMatrix::RemoveScaling(&local_138);
              fVar40 = (float)(-(uint)(_DAT_14685e380 <= fVar2 * fVar37) &
                               (_DAT_14685e370 ^ (uint)fVar40) ^ _DAT_14685e370);
              fVar42 = (float)(-(uint)(fRam000000014685e384 <= fVar3 * fVar22) &
                               (uRam000000014685e374 ^ (uint)fVar42) ^ uRam000000014685e374);
              fVar45 = (float)(-(uint)(fRam000000014685e388 <= fVar4 * fVar32) &
                               (uRam000000014685e378 ^ (uint)fVar45) ^ uRam000000014685e378);
              local_138 = CONCAT44(local_138._4_4_ * fVar40,(float)local_138 * fVar40);
              uStack_130 = CONCAT44(uStack_130._4_4_,(float)uStack_130 * fVar40);
              uStack_120 = CONCAT44(uStack_120._4_4_,(float)uStack_120 * fVar42);
              uStack_110 = CONCAT44(uStack_110._4_4_,(float)uStack_110 * fVar45);
              local_128 = CONCAT44(local_128._4_4_ * fVar42,(float)local_128 * fVar42);
              local_118 = CONCAT44(local_118._4_4_ * fVar45,(float)local_118 * fVar45);
              FQuat::FQuat(&local_148,&local_138);
              local_158 = 0x322bcc77;
              auVar24._0_4_ = local_148 * local_148 + fStack_140 * fStack_140;
              auVar24._4_4_ = fStack_144 * fStack_144 + fStack_13c * fStack_13c;
              auVar24._8_4_ = fStack_140 * fStack_140 + local_148 * local_148;
              auVar24._12_4_ = fStack_13c * fStack_13c + fStack_144 * fStack_144;
              fVar31 = auVar24._4_4_ + auVar24._0_4_;
              fVar28 = auVar24._8_4_ + auVar24._4_4_;
              fVar33 = auVar24._12_4_ + auVar24._8_4_;
              fVar52 = auVar24._0_4_ + auVar24._12_4_;
              auVar6._4_4_ = fVar28;
              auVar6._0_4_ = fVar31;
              auVar6._8_4_ = fVar33;
              auVar6._12_4_ = fVar52;
              auVar17 = rsqrtps(auVar24,auVar6);
              fVar40 = auVar17._0_4_;
              fVar42 = auVar17._4_4_;
              fVar45 = auVar17._8_4_;
              fVar21 = auVar17._12_4_;
              fVar40 = (_DAT_14685e310 - fVar40 * fVar40 * fVar31 * _DAT_14685e310) * fVar40 +
                       fVar40;
              fVar42 = (fRam000000014685e314 - fVar42 * fVar42 * fVar28 * fRam000000014685e314) *
                       fVar42 + fVar42;
              fVar45 = (fRam000000014685e318 - fVar45 * fVar45 * fVar33 * fRam000000014685e318) *
                       fVar45 + fVar45;
              fVar21 = (fRam000000014685e31c - fVar21 * fVar21 * fVar52 * fRam000000014685e31c) *
                       fVar21 + fVar21;
              local_e8._4_4_ = fStack_104;
              local_e8._0_4_ = local_108;
              fStack_e0 = fStack_100;
              local_f8 = (float)(((uint)(((_DAT_14685e310 -
                                          fVar40 * fVar40 * fVar31 * _DAT_14685e310) * fVar40 +
                                         fVar40) * local_148) ^ _DAT_14685e300) &
                                 -(uint)(1e-08 <= fVar31) ^ _DAT_14685e300);
              fStack_f4 = (float)(((uint)(((fRam000000014685e314 -
                                           fVar42 * fVar42 * fVar28 * fRam000000014685e314) * fVar42
                                          + fVar42) * fStack_144) ^ uRam000000014685e304) &
                                  -(uint)(1e-08 <= fVar28) ^ uRam000000014685e304);
              fStack_f0 = (float)(((uint)(((fRam000000014685e318 -
                                           fVar45 * fVar45 * fVar33 * fRam000000014685e318) * fVar45
                                          + fVar45) * fStack_140) ^ uRam000000014685e308) &
                                  -(uint)(1e-08 <= fVar33) ^ uRam000000014685e308);
              fStack_ec = (float)(((uint)(((fRam000000014685e31c -
                                           fVar21 * fVar21 * fVar52 * fRam000000014685e31c) * fVar21
                                          + fVar21) * fStack_13c) ^ uRam000000014685e30c) &
                                  -(uint)(1e-08 <= fVar52) ^ uRam000000014685e30c);
              fStack_dc = 0.0;
            }
            fStack_cc = fVar5 * fVar29;
            fStack_d0 = fVar4 * fVar32;
            fStack_d4 = fVar3 * fVar22;
            local_d8 = fVar2 * fVar37;
            lVar1 = *(longlong *)(lVar1 + 0x168);
            if (lVar1 == 0) {
              puVar15 = (undefined8 *)&DAT_1468b5b70;
            }
            else {
              puVar15 = (undefined8 *)(lVar1 + 0x210);
            }
            local_138 = *puVar15;
            uStack_130 = puVar15[1];
            local_128 = puVar15[2];
            uStack_120 = puVar15[3];
            local_118 = puVar15[4];
            uStack_110 = puVar15[5];
            FUN_14162bcf0(&local_f8,param_2,&local_138);
            return param_2;
          }
        }
        else if (param_4 - 2U < 2) {
          *param_2 = fVar21;
          param_2[1] = fVar31;
          param_2[2] = fVar28;
          param_2[3] = fVar33;
          param_2[4] = fVar52;
          param_2[5] = fVar53;
          param_2[6] = fVar54;
          param_2[7] = fVar55;
          *(undefined1 (*) [16])(param_2 + 8) = auVar17;
          return param_2;
        }
        break;
      }
      lVar16 = lVar16 + 1;
      pfVar14 = pfVar14 + 0x10;
    } while (lVar16 < *(int *)(lVar1 + 0x90));
  }
  FUN_14238d570(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1408188b0 GetSpriteAtFrame body=27 status=ok
// SIG undefined GetSpriteAtFrame(void)

undefined8 UPaperFlipbook::GetSpriteAtFrame(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x38))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)param_2 * 0x10);
  }
  return 0;
}



// FUNCTION 1408188d0 GetSpriteAtTime body=51 status=ok
// SIG undefined GetSpriteAtTime(void)

undefined8 UPaperFlipbook::GetSpriteAtTime(longlong param_1)

{
  int iVar1;
  
  iVar1 = GetKeyFrameIndexAtTime();
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x38))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x10);
  }
  return 0;
}



// FUNCTION 140818920 GetTextureSpaceVertices body=693 status=ok
// SIG undefined GetTextureSpaceVertices(void)

void FSpriteGeometryShape::GetTextureSpaceVertices(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(int *)((longlong)param_2 + 0xc) < *(int *)(param_1 + 0x10) + (int)param_2[1]) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  pfVar7 = *(float **)(param_1 + 8);
  pfVar1 = pfVar7 + (longlong)*(int *)(param_1 + 0x10) * 2;
  for (; pfVar7 != pfVar1; pfVar7 = pfVar7 + 2) {
    fVar10 = *(float *)(param_1 + 0x28) * -0.017453292;
    if (fVar10 < 0.0) {
      fVar8 = fVar10 * 0.15915494 - 0.5;
    }
    else {
      fVar8 = fVar10 * 0.15915494 + 0.5;
    }
    fVar10 = fVar10 - (float)(int)fVar8 * 6.2831855;
    if (fVar10 <= 1.5707964) {
      if (-1.5707964 <= fVar10) {
        fVar8 = 1.0;
      }
      else {
        fVar8 = -1.0;
        fVar10 = -3.1415927 - fVar10;
      }
    }
    else {
      fVar8 = -1.0;
      fVar10 = 3.1415927 - fVar10;
    }
    fVar2 = pfVar7[1];
    iVar5 = (int)param_2[1];
    fVar9 = fVar10 * fVar10;
    fVar10 = (((((2.7525562e-06 - fVar9 * 2.3889859e-08) * fVar9 - 0.00019840874) * fVar9 +
               0.008333331) * fVar9 - 0.16666667) * fVar9 + 1.0) * fVar10;
    fVar3 = *pfVar7;
    fVar8 = (((((2.4760495e-05 - fVar9 * 2.6051615e-07) * fVar9 - 0.0013888378) * fVar9 +
              0.041666638) * fVar9 - 0.5) * fVar9 + 1.0) * fVar8;
    fVar9 = *(float *)(param_1 + 0x20);
    fVar4 = *(float *)(param_1 + 0x24);
    *(int *)(param_2 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
    }
    lVar6 = *param_2;
    *(float *)(lVar6 + (longlong)iVar5 * 8) = (fVar3 * fVar8 - fVar2 * fVar10) + fVar9;
    *(float *)(lVar6 + 4 + (longlong)iVar5 * 8) = fVar2 * fVar8 + fVar3 * fVar10 + fVar4;
  }
  return;
}



// FUNCTION 140818c50 FUN_140818c50 body=164 status=ok
// SIG undefined FUN_140818c50(void)

undefined8 * FUN_140818c50(longlong param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uStack_10;
  
  lVar2 = *(longlong *)(param_1 + 0x760);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  if (lVar2 != 0) {
    if ((-1 < param_5) && (param_5 < *(int *)(lVar2 + 0x80))) {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x78) + (longlong)param_5 * 8);
      if ((-1 < param_3) &&
         (((param_3 < *(int *)(lVar2 + 0x40) && (-1 < param_4)) &&
          (param_4 < *(int *)(lVar2 + 0x44))))) {
        puVar1 = (undefined8 *)
                 (*(longlong *)(lVar2 + 0x70) +
                 (longlong)(*(int *)(lVar2 + 0x40) * param_4 + param_3) * 0x10);
        uVar3 = puVar1[1];
        *param_2 = *puVar1;
        param_2[1] = uVar3;
        return param_2;
      }
      uStack_10 = CONCAT44(uStack_10._4_4_,0xffffffff);
      *param_2 = 0;
      param_2[1] = uStack_10;
    }
  }
  return param_2;
}



// FUNCTION 140818d00 GetTileCenterInLocalSpace body=325 status=ok
// SIG undefined GetTileCenterInLocalSpace(void)

float * UPaperTileMap::GetTileCenterInLocalSpace
                  (longlong param_1,float *param_2,float param_3,float param_4,undefined4 param_5)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_38 [48];
  
  if (*(byte *)(param_1 + 0x8d) != 1) {
    iVar3 = *(byte *)(param_1 + 0x8d) - 2;
    if ((iVar3 == 0) || (iVar3 == 1)) {
      fVar4 = 1.0 / *(float *)(param_1 + 0x38);
      fVar9 = (float)*(int *)(param_1 + 0x30) * fVar4;
      fVar10 = (float)*(int *)(param_1 + 0x34) * fVar4;
      pfVar2 = (float *)GetTilePositionInLocalSpace(fVar4,local_38,iVar3,param_4,param_5);
      fVar5 = DAT_146267238 * fVar10;
      fVar8 = DAT_146267228 * fVar9;
      fVar7 = DAT_146267220 * fVar9;
      fVar4 = pfVar2[2];
      fVar6 = DAT_146267230 * fVar10;
      fVar1 = *pfVar2;
      param_2[1] = (DAT_146267224 * fVar9 * 0.5 - DAT_146267234 * fVar10 * 0.5) + pfVar2[1];
      param_2[2] = (fVar8 * 0.5 - fVar5 * 0.5) + fVar4;
      *param_2 = (fVar7 * 0.5 - fVar6 * 0.5) + fVar1;
      return param_2;
    }
  }
  GetTilePositionInLocalSpace(param_1,param_2,param_3 + 0.5,param_4 + 0.5,param_5);
  return param_2;
}



// FUNCTION 140818e50 FUN_140818e50 body=285 status=ok
// SIG undefined FUN_140818e50(void)

float * FUN_140818e50(longlong param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,char param_6)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_28 [32];
  
  lVar2 = *(longlong *)(param_1 + 0x760);
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (lVar2 != 0) {
    puVar7 = (undefined8 *)
             UPaperTileMap::GetTileCenterInLocalSpace(lVar2,local_28,param_3,param_4,param_5);
    fVar1 = *(float *)(puVar7 + 1);
    *(undefined8 *)param_2 = *puVar7;
    param_2[2] = fVar1;
  }
  if (param_6 != '\0') {
    fVar1 = *(float *)(param_1 + 0x210);
    fVar3 = *(float *)(param_1 + 0x214);
    fVar4 = *(float *)(param_1 + 0x218);
    fVar5 = *(float *)(param_1 + 0x21c);
    fVar11 = *param_2 * *(float *)(param_1 + 0x230);
    fVar12 = param_2[1] * *(float *)(param_1 + 0x234);
    fVar13 = param_2[2] * *(float *)(param_1 + 0x238);
    fVar8 = fVar13 * fVar3 - fVar12 * fVar4;
    fVar9 = fVar11 * fVar4 - fVar13 * fVar1;
    fVar10 = fVar12 * fVar1 - fVar11 * fVar3;
    fVar8 = fVar8 + fVar8;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    fVar6 = *(float *)(param_1 + 0x228);
    *(ulonglong *)param_2 =
         CONCAT44((fVar8 * fVar4 - fVar10 * fVar1) + fVar5 * fVar9 + fVar12 +
                  *(float *)(param_1 + 0x224),
                  (fVar10 * fVar3 - fVar9 * fVar4) + fVar5 * fVar8 + fVar11 +
                  *(float *)(param_1 + 0x220));
    param_2[2] = (fVar9 * fVar1 - fVar8 * fVar3) + fVar5 * fVar10 + fVar13 + fVar6;
  }
  return param_2;
}



// FUNCTION 140818f70 FUN_140818f70 body=285 status=ok
// SIG undefined FUN_140818f70(void)

float * FUN_140818f70(longlong param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,char param_6)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_28 [32];
  
  lVar2 = *(longlong *)(param_1 + 0x760);
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (lVar2 != 0) {
    puVar7 = (undefined8 *)
             UPaperTileMap::GetTilePositionInLocalSpace(lVar2,local_28,param_3,param_4,param_5);
    fVar1 = *(float *)(puVar7 + 1);
    *(undefined8 *)param_2 = *puVar7;
    param_2[2] = fVar1;
  }
  if (param_6 != '\0') {
    fVar1 = *(float *)(param_1 + 0x210);
    fVar3 = *(float *)(param_1 + 0x214);
    fVar4 = *(float *)(param_1 + 0x218);
    fVar5 = *(float *)(param_1 + 0x21c);
    fVar11 = *param_2 * *(float *)(param_1 + 0x230);
    fVar12 = param_2[1] * *(float *)(param_1 + 0x234);
    fVar13 = param_2[2] * *(float *)(param_1 + 0x238);
    fVar8 = fVar13 * fVar3 - fVar12 * fVar4;
    fVar9 = fVar11 * fVar4 - fVar13 * fVar1;
    fVar10 = fVar12 * fVar1 - fVar11 * fVar3;
    fVar8 = fVar8 + fVar8;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    fVar6 = *(float *)(param_1 + 0x228);
    *(ulonglong *)param_2 =
         CONCAT44((fVar8 * fVar4 - fVar10 * fVar1) + fVar5 * fVar9 + fVar12 +
                  *(float *)(param_1 + 0x224),
                  (fVar10 * fVar3 - fVar9 * fVar4) + fVar5 * fVar8 + fVar11 +
                  *(float *)(param_1 + 0x220));
    param_2[2] = (fVar9 * fVar1 - fVar8 * fVar3) + fVar5 * fVar10 + fVar13 + fVar6;
  }
  return param_2;
}



// FUNCTION 140819090 FUN_140819090 body=14 status=ok
// SIG undefined FUN_140819090(void)

undefined8 * FUN_140819090(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x750);
  *param_2 = *(undefined8 *)(param_1 + 0x748);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1408190a0 GetTilePolygon body=2270 status=ok
// SIG undefined GetTilePolygon(void)

void UPaperTileMap::GetTilePolygon
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               longlong *param_5)

{
  int iVar1;
  undefined8 *puVar2;
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
  float local_148;
  float fStack_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float fStack_11c;
  float local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  
  if (*(char *)(param_1 + 0x8d) == '\x02') {
    fVar8 = 1.0 / *(float *)(param_1 + 0x38);
    fVar9 = (float)*(int *)(param_1 + 0x30) * fVar8;
    fVar8 = (float)*(int *)(param_1 + 0x34) * fVar8;
    pfVar3 = (float *)GetTilePositionInLocalSpace(param_1,&local_120,param_3,param_4,param_4);
    iVar1 = (int)param_5[1];
    fVar7 = DAT_146267220 * fVar9 * 0.5 + *pfVar3;
    fVar10 = DAT_146267224 * fVar9 * 0.5 + pfVar3[1];
    fVar6 = DAT_146267228 * fVar9 * 0.5 + pfVar3[2];
    *(int *)(param_5 + 1) = iVar1 + 1;
    local_148 = fVar7;
    fStack_144 = fVar10;
    local_140 = fVar6;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
    }
    lVar5 = *param_5;
    *(ulonglong *)(lVar5 + (longlong)iVar1 * 0xc) = CONCAT44(fStack_144,local_148);
    *(float *)(lVar5 + 8 + (longlong)iVar1 * 0xc) = local_140;
    iVar1 = (int)param_5[1];
    local_148 = (DAT_146267220 * fVar9 * 0.5 + fVar7) - DAT_146267230 * fVar8 * 0.5;
    fVar12 = DAT_146267228 * fVar9;
    fStack_144 = (DAT_146267224 * fVar9 * 0.5 + fVar10) - DAT_146267234 * fVar8 * 0.5;
    fVar11 = DAT_146267238 * fVar8;
    *(int *)(param_5 + 1) = iVar1 + 1;
    local_140 = (fVar12 * 0.5 + fVar6) - fVar11 * 0.5;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
    }
    lVar5 = *param_5;
    *(ulonglong *)(lVar5 + (longlong)iVar1 * 0xc) = CONCAT44(fStack_144,local_148);
    *(float *)(lVar5 + 8 + (longlong)iVar1 * 0xc) = local_140;
    iVar1 = (int)param_5[1];
    fStack_144 = DAT_146267234 * fVar8;
    local_148 = fVar7 - DAT_146267230 * fVar8;
    local_140 = DAT_146267238 * fVar8;
    *(int *)(param_5 + 1) = iVar1 + 1;
    fStack_144 = fVar10 - fStack_144;
    local_140 = fVar6 - local_140;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
    }
    lVar5 = *param_5;
    *(ulonglong *)(lVar5 + (longlong)iVar1 * 0xc) = CONCAT44(fStack_144,local_148);
    *(float *)(lVar5 + 8 + (longlong)iVar1 * 0xc) = local_140;
    local_148 = (fVar7 - DAT_146267220 * fVar9 * 0.5) - DAT_146267230 * fVar8 * 0.5;
    fStack_144 = (fVar10 - DAT_146267224 * fVar9 * 0.5) - DAT_146267234 * fVar8 * 0.5;
    local_140 = (fVar6 - DAT_146267228 * fVar9 * 0.5) - DAT_146267238 * fVar8 * 0.5;
  }
  else {
    if (*(char *)(param_1 + 0x8d) != '\x03') {
      puVar2 = (undefined8 *)GetTilePositionInLocalSpace(param_1,&local_148,param_3,param_4,param_4)
      ;
      iVar1 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
      }
      lVar5 = *param_5;
      *(undefined8 *)(lVar5 + (longlong)iVar1 * 0xc) = *puVar2;
      *(undefined4 *)(lVar5 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(puVar2 + 1);
      puVar2 = (undefined8 *)GetTilePositionInLocalSpace(param_1,&local_148);
      iVar1 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
      }
      lVar5 = *param_5;
      *(undefined8 *)(lVar5 + (longlong)iVar1 * 0xc) = *puVar2;
      *(undefined4 *)(lVar5 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(puVar2 + 1);
      puVar2 = (undefined8 *)GetTilePositionInLocalSpace(param_1,&local_148);
      iVar1 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
      }
      lVar5 = *param_5;
      *(undefined8 *)(lVar5 + (longlong)iVar1 * 0xc) = *puVar2;
      *(undefined4 *)(lVar5 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(puVar2 + 1);
      puVar2 = (undefined8 *)GetTilePositionInLocalSpace(param_1,&local_148);
      iVar1 = (int)param_5[1];
      lVar5 = (longlong)iVar1;
      *(int *)(param_5 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
      }
      lVar4 = *param_5;
      *(undefined8 *)(lVar4 + lVar5 * 0xc) = *puVar2;
      local_140 = *(float *)(puVar2 + 1);
      goto LAB_140819945;
    }
    fVar6 = 1.0 / *(float *)(param_1 + 0x38);
    fVar8 = (float)*(int *)(param_1 + 0x30) * fVar6;
    fVar9 = fVar8 * DAT_146267228 * 0.5;
    fVar11 = (float)*(int *)(param_1 + 0x34) * fVar6;
    fVar12 = fVar8 * DAT_146267220 * 0.5;
    fVar13 = fVar8 * DAT_146267224 * 0.5;
    local_138 = fVar9;
    local_12c = fVar11;
    pfVar3 = (float *)GetTilePositionInLocalSpace(param_1,&local_148,param_3,param_4,param_4);
    fVar10 = DAT_146267238;
    fVar7 = DAT_146267234;
    fVar8 = DAT_146267230;
    fVar9 = fVar9 + pfVar3[2];
    local_128 = fVar12 + *pfVar3;
    local_134 = fVar13 + pfVar3[1];
    fVar11 = fVar11 * 0.5;
    local_130 = (float)*(int *)(param_1 + 0x90) * fVar6 * 0.5;
    fVar6 = fVar11 - local_130;
    local_110 = local_128 - local_130 * DAT_146267230;
    fStack_10c = local_134 - local_130 * DAT_146267234;
    fStack_144 = fVar6 * DAT_146267234;
    local_108 = fVar9 - local_130 * DAT_146267238;
    local_140 = fVar6 * DAT_146267238;
    local_100 = (local_128 + fVar12) - fVar6 * DAT_146267230;
    fStack_fc = (local_134 + fVar13) - fStack_144;
    local_f8 = (fVar9 + local_138) - local_140;
    fVar11 = fVar11 + local_130;
    iVar1 = (int)param_5[1];
    local_148 = (local_128 - fVar12) - fVar6 * DAT_146267230;
    fStack_11c = fVar11 * DAT_146267234;
    *(int *)(param_5 + 1) = iVar1 + 1;
    fStack_ec = (local_134 + fVar13) - fStack_11c;
    fStack_11c = (local_134 - fVar13) - fStack_11c;
    fStack_144 = (local_134 - fVar13) - fStack_144;
    local_140 = (fVar9 - local_138) - local_140;
    local_120 = fVar11 * fVar8;
    fVar11 = fVar11 * fVar10;
    local_f0 = (local_128 + fVar12) - local_120;
    local_120 = (local_128 - fVar12) - local_120;
    local_118 = (fVar9 - local_138) - fVar11;
    local_e8 = (fVar9 + local_138) - fVar11;
    fVar6 = local_12c - local_130;
    local_e0 = local_128 - fVar6 * fVar8;
    local_d8 = fVar9 - fVar6 * fVar10;
    fStack_dc = local_134 - fVar6 * fVar7;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
    }
    lVar5 = *param_5;
    *(ulonglong *)(lVar5 + (longlong)iVar1 * 0xc) = CONCAT44(fStack_10c,local_110);
    *(float *)(lVar5 + 8 + (longlong)iVar1 * 0xc) = local_108;
    iVar1 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
    }
    lVar5 = *param_5;
    *(ulonglong *)(lVar5 + (longlong)iVar1 * 0xc) = CONCAT44(fStack_fc,local_100);
    *(float *)(lVar5 + 8 + (longlong)iVar1 * 0xc) = local_f8;
    iVar1 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
    }
    lVar5 = *param_5;
    *(ulonglong *)(lVar5 + (longlong)iVar1 * 0xc) = CONCAT44(fStack_ec,local_f0);
    *(float *)(lVar5 + 8 + (longlong)iVar1 * 0xc) = local_e8;
    iVar1 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
    }
    lVar5 = *param_5;
    *(ulonglong *)(lVar5 + (longlong)iVar1 * 0xc) = CONCAT44(fStack_dc,local_e0);
    *(float *)(lVar5 + 8 + (longlong)iVar1 * 0xc) = local_d8;
    iVar1 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
    }
    lVar5 = *param_5;
    *(ulonglong *)(lVar5 + (longlong)iVar1 * 0xc) = CONCAT44(fStack_11c,local_120);
    *(float *)(lVar5 + 8 + (longlong)iVar1 * 0xc) = local_118;
  }
  iVar1 = (int)param_5[1];
  lVar5 = (longlong)iVar1;
  *(int *)(param_5 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
  }
  lVar4 = *param_5;
  *(ulonglong *)(lVar4 + lVar5 * 0xc) = CONCAT44(fStack_144,local_148);
LAB_140819945:
  *(float *)(lVar4 + 8 + lVar5 * 0xc) = local_140;
  return;
}



// FUNCTION 140819980 FUN_140819980 body=333 status=ok
// SIG undefined FUN_140819980(void)

void FUN_140819980(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5,char param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  *(undefined4 *)(param_4 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_4 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_4,0);
  }
  if (*(longlong *)(param_1 + 0x760) != 0) {
    UPaperTileMap::GetTilePolygon(*(longlong *)(param_1 + 0x760),param_2,param_3,param_5,param_4);
  }
  if (param_6 != '\0') {
    pfVar7 = (float *)*param_4;
    pfVar1 = pfVar7 + (longlong)*(int *)(param_4 + 1) * 3;
    for (; pfVar7 != pfVar1; pfVar7 = pfVar7 + 3) {
      fVar2 = *(float *)(param_1 + 0x210);
      fVar3 = *(float *)(param_1 + 0x214);
      fVar4 = *(float *)(param_1 + 0x218);
      fVar5 = *(float *)(param_1 + 0x21c);
      fVar11 = *pfVar7 * *(float *)(param_1 + 0x230);
      fVar12 = pfVar7[1] * *(float *)(param_1 + 0x234);
      fVar13 = pfVar7[2] * *(float *)(param_1 + 0x238);
      fVar8 = fVar13 * fVar3 - fVar12 * fVar4;
      fVar9 = fVar11 * fVar4 - fVar13 * fVar2;
      fVar10 = fVar12 * fVar2 - fVar11 * fVar3;
      fVar8 = fVar8 + fVar8;
      fVar9 = fVar9 + fVar9;
      fVar10 = fVar10 + fVar10;
      fVar6 = *(float *)(param_1 + 0x228);
      *(ulonglong *)pfVar7 =
           CONCAT44((fVar8 * fVar4 - fVar10 * fVar2) + fVar5 * fVar9 + fVar12 +
                    *(float *)(param_1 + 0x224),
                    (fVar10 * fVar3 - fVar9 * fVar4) + fVar5 * fVar8 + fVar11 +
                    *(float *)(param_1 + 0x220));
      pfVar7[2] = (fVar9 * fVar2 - fVar8 * fVar3) + fVar5 * fVar10 + fVar13 + fVar6;
    }
  }
  return;
}



// FUNCTION 140819ad0 GetTilePositionInLocalSpace body=391 status=ok
// SIG undefined GetTilePositionInLocalSpace(void)

float * UPaperTileMap::GetTilePositionInLocalSpace
                  (longlong param_1,float *param_2,float param_3,float param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  
  GetTileToLocalParameters(param_1,&local_78,&local_48,&local_58,&local_68);
  if ((1 < *(byte *)(param_1 + 0x8d)) && (*(byte *)(param_1 + 0x8d) < 4)) {
    fVar1 = (float)((int)param_4 & 1);
    local_74 = local_64 * fVar1 + local_74;
    local_78 = fVar1 * local_68 + local_78;
    local_70 = local_60 * fVar1 + local_70;
  }
  fVar2 = (float)param_5 * *(float *)(param_1 + 0x44) + param_3 * *(float *)(param_1 + 0x3c) +
          param_4 * *(float *)(param_1 + 0x40);
  fVar1 = DAT_146267244 * fVar2;
  *param_2 = local_58 * param_4 + local_48 * param_3 + DAT_146267240 * fVar2 + local_78;
  fVar2 = DAT_146267248 * fVar2;
  param_2[1] = local_54 * param_4 + local_44 * param_3 + fVar1 + local_74;
  param_2[2] = local_50 * param_4 + local_40 * param_3 + fVar2 + local_70;
  return param_2;
}



// FUNCTION 140819c60 GetTileToLocalParameters body=1107 status=ok
// SIG undefined GetTileToLocalParameters(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UPaperTileMap::GetTileToLocalParameters
               (longlong param_1,undefined8 *param_2,undefined8 *param_3,ulonglong *param_4,
               undefined8 *param_5)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_30;
  
  fVar2 = 1.0 / *(float *)(param_1 + 0x38);
  bVar1 = *(byte *)(param_1 + 0x8d);
  fVar7 = (float)*(int *)(param_1 + 0x30) * fVar2;
  fVar2 = (float)*(int *)(param_1 + 0x34) * fVar2;
  if (bVar1 == 1) {
    fVar3 = DAT_146267238 * fVar2;
    *param_2 = CONCAT44(DAT_146267234 * fVar2 * 0.5,DAT_146267230 * fVar2 * 0.5);
    *(float *)(param_2 + 1) = fVar3 * 0.5;
    *param_5 = _DAT_1468b5d90;
    *(undefined4 *)(param_5 + 1) = DAT_1468b5d98;
    fVar5 = DAT_146267228 * fVar7;
    fVar3 = DAT_146267238 * fVar2;
    *param_3 = CONCAT44(DAT_146267224 * fVar7 * 0.5 - DAT_146267234 * fVar2 * 0.5,
                        DAT_146267220 * fVar7 * 0.5 - DAT_146267230 * fVar2 * 0.5);
    *(float *)(param_3 + 1) = fVar5 * 0.5 - fVar3 * 0.5;
    local_30 = DAT_146267228 * fVar7 * -0.5 - DAT_146267238 * fVar2 * 0.5;
    uVar4 = CONCAT44(DAT_146267224 * fVar7 * -0.5 - DAT_146267234 * fVar2 * 0.5,
                     DAT_146267220 * fVar7 * -0.5 - DAT_146267230 * fVar2 * 0.5);
  }
  else if ((bVar1 < 2) || (3 < bVar1)) {
    fVar5 = DAT_146267228 * fVar7;
    fVar3 = DAT_146267238 * fVar2;
    *param_2 = CONCAT44(DAT_146267224 * fVar7 * -0.5 + DAT_146267234 * fVar2 * 0.5,
                        DAT_146267220 * fVar7 * -0.5 + DAT_146267230 * fVar2 * 0.5);
    *(float *)(param_2 + 1) = fVar5 * -0.5 + fVar3 * 0.5;
    *param_5 = _DAT_1468b5d90;
    *(undefined4 *)(param_5 + 1) = DAT_1468b5d98;
    fVar3 = DAT_146267228 * fVar7;
    *param_3 = CONCAT44(DAT_146267224 * fVar7,DAT_146267220 * fVar7);
    *(float *)(param_3 + 1) = fVar3;
    local_30 = -(DAT_146267238 * fVar2);
    uVar4 = CONCAT44(DAT_146267234 * fVar2,DAT_146267230 * fVar2) ^ 0x8000000080000000;
  }
  else {
    fVar5 = DAT_146267228 * fVar7;
    fVar3 = DAT_146267238 * fVar2;
    *param_2 = CONCAT44(DAT_146267224 * fVar7 * -0.5 + DAT_146267234 * fVar2 * 0.5,
                        DAT_146267220 * fVar7 * -0.5 + DAT_146267230 * fVar2 * 0.5);
    fVar6 = fVar7 * 0.5;
    *(float *)(param_2 + 1) = fVar5 * -0.5 + fVar3 * 0.5;
    fVar3 = fVar6 * DAT_146267228;
    *param_5 = CONCAT44(fVar6 * DAT_146267224,fVar6 * DAT_146267220);
    *(float *)(param_5 + 1) = fVar3;
    fVar3 = DAT_146267228 * fVar7;
    *param_3 = CONCAT44(DAT_146267224 * fVar7,DAT_146267220 * fVar7);
    *(float *)(param_3 + 1) = fVar3;
    local_30 = DAT_146267238 * -0.5 * fVar2;
    uVar4 = CONCAT44(DAT_146267234 * -0.5 * fVar2,DAT_146267230 * -0.5 * fVar2);
  }
  *param_4 = uVar4;
  *(float *)(param_4 + 1) = local_30;
  return;
}



// FUNCTION 14081a0c0 GetTileTransform body=50 status=ok
// SIG undefined GetTileTransform(void)

undefined8 * UTileMapBlueprintLibrary::GetTileTransform(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(*(uint *)(param_2 + 8) >> 0x1d);
  uVar1 = *(undefined8 *)(uVar4 * 0x30 + 0x14685e438);
  uVar2 = *(undefined8 *)(&DAT_14685e440 + uVar4 * 0x30);
  uVar3 = *(undefined8 *)(uVar4 * 0x30 + 0x14685e448);
  *param_1 = *(undefined8 *)(&DAT_14685e430 + uVar4 * 0x30);
  param_1[1] = uVar1;
  uVar1 = *(undefined8 *)(uVar4 * 0x30 + 0x14685e458);
  param_1[4] = *(undefined8 *)(&DAT_14685e450 + uVar4 * 0x30);
  param_1[5] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return param_1;
}



// FUNCTION 14081a100 GetTileUserData body=54 status=ok
// SIG undefined GetTileUserData(void)

undefined8 * UTileMapBlueprintLibrary::GetTileUserData(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_2;
  if (((lVar1 != 0) && ((int)(*(uint *)(param_2 + 1) & 0x1fffffff) < *(int *)(lVar1 + 0x80))) &&
     (puVar2 = (undefined8 *)
               ((ulonglong)(*(uint *)(param_2 + 1) & 0x1fffffff) * 0x40 +
               *(longlong *)(lVar1 + 0x78)), puVar2 != (undefined8 *)0x0)) {
    *param_1 = *puVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14081a140 GetTotalDuration body=48 status=ok
// SIG undefined GetTotalDuration(void)

void UPaperFlipbook::GetTotalDuration(longlong param_1)

{
  if (*(float *)(param_1 + 0x28) != 0.0) {
    GetNumFrames();
  }
  return;
}



// FUNCTION 14081a170 FUN_14081a170 body=2264 status=ok
// SIG undefined FUN_14081a170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14081a170(longlong param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  longlong lVar3;
  undefined4 uVar4;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  undefined1 auVar26 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
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
  
  FUN_1423b1370(*(undefined8 *)(param_1 + 0x700));
  lVar3 = *(longlong *)(param_1 + 0x700);
  uVar4 = FInterpCurve<float>::Eval(lVar3 + 0x738);
  lVar3 = lVar3 + 0x6f0;
  FInterpCurve<FVector>::Eval(lVar3,&local_108,uVar4,&DAT_1468b5d90);
  local_118 = 1.0;
  fStack_114 = 0.0;
  fStack_110 = 0.0;
  pfVar2 = (float *)FInterpCurve<FVector>::EvalDerivative(lVar3,&local_f8,uVar4,&local_118);
  fVar14 = pfVar2[1];
  fVar25 = *pfVar2;
  fVar27 = pfVar2[2];
  fVar13 = fVar25 * fVar25 + fVar14 * fVar14 + fVar27 * fVar27;
  if (fVar13 == 1.0) {
    local_118 = (float)*(undefined8 *)pfVar2;
    fVar17 = pfVar2[2];
    fVar15 = local_118;
    fVar10 = (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20);
  }
  else {
    fVar17 = DAT_1468b5d98;
    fVar15 = DAT_1468b5d90;
    fVar10 = DAT_1468b5d94;
    if (1e-08 <= fVar13) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      fVar10 = auVar6._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar13 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar13 * 0.5 * fVar10 * fVar10);
      fVar15 = fVar25 * fVar10;
      fVar17 = fVar27 * fVar10;
      fVar10 = fVar14 * fVar10;
    }
  }
  local_118 = 0.0;
  fStack_114 = 1.0;
  fStack_110 = 0.0;
  pfVar2 = (float *)FInterpCurve<FVector>::EvalSecondDerivative(lVar3,&local_f8,uVar4,&local_118);
  fVar14 = *pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1] + pfVar2[2] * pfVar2[2];
  if ((fVar14 != 1.0) && (1e-08 <= fVar14)) {
    rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
  }
  fStack_dc = 0.0;
  fStack_cc = 0.0;
  fStack_bc = 0.0;
  fStack_ac = 1.0;
  local_c8 = fVar17 * DAT_146267244 - fVar10 * DAT_146267248;
  local_d8 = DAT_146267240;
  fStack_c4 = fVar15 * DAT_146267248 - fVar17 * DAT_146267240;
  fStack_d4 = DAT_146267244;
  fStack_d0 = DAT_146267248;
  fStack_c0 = fVar10 * DAT_146267240 - fVar15 * DAT_146267244;
  local_b8 = (float)local_108;
  fStack_b0 = (float)local_100;
  fStack_b4 = (float)local_104;
  local_e8 = fVar15;
  fStack_e4 = fVar10;
  fStack_e0 = fVar17;
  FUN_140487e30(param_2,&local_e8);
  local_104 = 0x43340000;
  local_108 = 0;
  local_100 = 0;
  uVar4 = FRotator::Quaternion(&local_108,&local_f8);
  fVar18 = fRam000000014685e328;
  fVar16 = fRam000000014685e324;
  fVar19 = _DAT_14685e320;
  auVar6 = *(undefined1 (*) [16])(param_2 + 8);
  fVar14 = auVar6._0_4_;
  fVar25 = auVar6._4_4_;
  fVar27 = auVar6._8_4_;
  fVar13 = auVar6._12_4_;
  fVar17 = *param_2;
  fVar15 = param_2[1];
  fVar10 = param_2[2];
  fVar22 = param_2[3];
  auVar5._4_4_ = DAT_1464aa788._4_4_;
  auVar5._0_4_ = (float)DAT_1464aa788;
  auVar5._8_4_ = DAT_1464aa790;
  auVar5._12_4_ = 0;
  auVar6 = minps(auVar5,auVar6);
  auVar7._4_4_ = -(uint)(auVar6._4_4_ < fRam000000014685e384);
  auVar7._0_4_ = -(uint)(auVar6._0_4_ < _DAT_14685e380);
  auVar7._8_4_ = -(uint)(auVar6._8_4_ < fRam000000014685e388);
  auVar7._12_4_ = -(uint)(auVar6._12_4_ < fRam000000014685e38c);
  iVar1 = movmskps(uVar4,auVar7);
  if (iVar1 == 0) {
    fVar23 = fVar14 * DAT_1468b5d90;
    fVar24 = fVar25 * DAT_1468b5d94;
    fVar8 = fVar27 * DAT_1468b5d98;
    fVar9 = fVar13 * 0.0;
    fVar14 = fVar14 * (float)DAT_1464aa788;
    fVar25 = fVar25 * DAT_1464aa788._4_4_;
    fVar27 = fVar27 * DAT_1464aa790;
    fVar13 = fVar13 * 0.0;
    fVar11 = fVar17 * fStack_ec * _DAT_14685e360 + fVar22 * local_f8 +
             fVar15 * fStack_f0 * _DAT_14685e350 + fVar10 * fStack_f4 * _DAT_14685e340;
    fVar12 = fVar17 * fStack_f0 * fRam000000014685e364 + fVar22 * fStack_f4 +
             fVar15 * fStack_ec * fRam000000014685e354 + fVar10 * local_f8 * fRam000000014685e344;
    fVar21 = fVar17 * fStack_f4 * fRam000000014685e368 + fVar22 * fStack_f0 +
             fVar15 * local_f8 * fRam000000014685e358 + fVar10 * fStack_ec * fRam000000014685e348;
    fVar28 = fVar17 * local_f8 * fRam000000014685e36c + fVar22 * fStack_ec +
             fVar15 * fStack_f4 * fRam000000014685e35c + fVar10 * fStack_f0 * fRam000000014685e34c;
    fVar19 = fVar8 * fVar15 - fVar24 * fVar10;
    fVar16 = fVar23 * fVar10 - fVar8 * fVar17;
    fVar18 = fVar24 * fVar17 - fVar23 * fVar15;
    fVar20 = fVar9 * fVar22 - fVar9 * fVar22;
    fVar19 = fVar19 + fVar19;
    fVar16 = fVar16 + fVar16;
    fVar18 = fVar18 + fVar18;
    fVar20 = fVar20 + fVar20;
    local_b8 = (fVar18 * fVar15 - fVar16 * fVar10) + fVar19 * fVar22 + fVar23 + param_2[4];
    fStack_b4 = (fVar19 * fVar10 - fVar18 * fVar17) + fVar16 * fVar22 + fVar24 + param_2[5];
    fStack_b0 = (fVar16 * fVar17 - fVar19 * fVar15) + fVar18 * fVar22 + fVar8 + param_2[6];
    fVar17 = (fVar20 * fVar22 - fVar20 * fVar22) + fVar20 * fVar22 + fVar9 + param_2[7];
  }
  else {
    fVar9 = fVar15 + fVar15;
    fVar11 = fVar10 + fVar10;
    local_118 = fVar14 * (float)DAT_1464aa788;
    fStack_114 = fVar25 * DAT_1464aa788._4_4_;
    fStack_110 = fVar27 * DAT_1464aa790;
    fStack_10c = fVar13 * 0.0;
    fVar21 = fVar17 * (fVar17 + fVar17);
    fVar28 = fVar22 * (fVar17 + fVar17);
    fVar32 = (fVar22 * fVar11 + fVar17 * fVar9) * fVar14;
    fVar33 = (fVar28 + fVar15 * fVar11) * fVar25;
    fVar34 = (fVar22 * fVar9 + fVar17 * fVar11) * fVar27;
    fVar20 = param_2[4];
    fVar23 = param_2[5];
    fVar24 = param_2[6];
    fVar8 = (float)((uint)((_DAT_14685e320 - (fVar10 * fVar11 + fVar15 * fVar9)) * fVar14) &
                   _DAT_14685e330);
    fVar10 = (float)((uint)((fRam000000014685e324 - (fVar10 * fVar11 + fVar21)) * fVar25) &
                    uRam000000014685e334);
    fVar12 = (float)((uint)((fRam000000014685e328 - (fVar15 * fVar9 + fVar21)) * fVar27) &
                    uRam000000014685e338);
    fVar21 = (float)((uint)((fRam000000014685e32c - (fVar21 + fVar21)) * fVar13) &
                    uRam000000014685e33c);
    fVar25 = fVar25 * (fVar17 * fVar9 - fVar22 * fVar11);
    fVar27 = fVar27 * (fVar15 * fVar11 - fVar28);
    fVar14 = fVar14 * (fVar17 * fVar11 - fVar22 * fVar9);
    fVar15 = fStack_f4 + fStack_f4;
    fVar17 = fStack_f0 + fStack_f0;
    fVar22 = (local_f8 + local_f8) * local_f8;
    fVar13 = (local_f8 + local_f8) * fStack_ec;
    fVar29 = (fVar17 * fStack_ec + fVar15 * local_f8) * (float)DAT_1464aa788;
    fVar30 = (fVar13 + fVar17 * fStack_f4) * DAT_1464aa788._4_4_;
    fVar31 = (fVar15 * fStack_ec + fVar17 * local_f8) * DAT_1464aa790;
    fVar9 = DAT_1464aa788._4_4_ * (fVar15 * local_f8 - fVar17 * fStack_ec);
    fVar11 = DAT_1464aa790 * (fVar17 * fStack_f4 - fVar13);
    fVar28 = (float)DAT_1464aa788 * (fVar17 * local_f8 - fVar15 * fStack_ec);
    fVar13 = (float)((uint)((_DAT_14685e320 - (fVar17 * fStack_f0 + fVar15 * fStack_f4)) *
                           (float)DAT_1464aa788) & _DAT_14685e330);
    fVar17 = (float)((uint)((fRam000000014685e324 - (fVar17 * fStack_f0 + fVar22)) *
                           DAT_1464aa788._4_4_) & uRam000000014685e334);
    fVar15 = (float)((uint)((fRam000000014685e328 - (fVar15 * fStack_f4 + fVar22)) * DAT_1464aa790)
                    & uRam000000014685e338);
    fVar22 = (float)((uint)((fRam000000014685e32c - (fVar22 + fVar22)) * 0.0) & uRam000000014685e33c
                    );
    local_e8 = fVar29 * fVar25 + fVar13 * fVar8 + fVar28 * fVar34 + fVar22 * fVar20;
    fStack_e4 = fVar29 * fVar10 + fVar13 * fVar32 + fVar28 * fVar27 + fVar22 * fVar23;
    fStack_e0 = fVar29 * fVar33 + fVar13 * fVar14 + fVar28 * fVar12 + fVar22 * fVar24;
    fStack_dc = fVar29 * fVar21 + fVar13 * fVar21 + fVar28 * fVar21 + fVar22 * fRam000000014685e32c;
    local_d8 = fVar17 * fVar25 + fVar9 * fVar8 + fVar30 * fVar34 + fVar22 * fVar20;
    fStack_d4 = fVar17 * fVar10 + fVar9 * fVar32 + fVar30 * fVar27 + fVar22 * fVar23;
    fStack_d0 = fVar17 * fVar33 + fVar9 * fVar14 + fVar30 * fVar12 + fVar22 * fVar24;
    fStack_cc = fVar17 * fVar21 + fVar9 * fVar21 + fVar30 * fVar21 + fVar22 * fRam000000014685e32c;
    local_c8 = fVar11 * fVar25 + fVar31 * fVar8 + fVar15 * fVar34 + fVar22 * fVar20;
    fStack_c4 = fVar11 * fVar10 + fVar31 * fVar32 + fVar15 * fVar27 + fVar22 * fVar23;
    fStack_c0 = fVar11 * fVar33 + fVar31 * fVar14 + fVar15 * fVar12 + fVar22 * fVar24;
    fStack_bc = fVar11 * fVar21 + fVar31 * fVar21 + fVar15 * fVar21 + fVar22 * fRam000000014685e32c;
    local_b8 = DAT_1468b5d94 * fVar25 + DAT_1468b5d90 * fVar8 + DAT_1468b5d98 * fVar34 +
               fRam000000014685e32c * fVar20;
    fStack_b4 = DAT_1468b5d94 * fVar10 + DAT_1468b5d90 * fVar32 + DAT_1468b5d98 * fVar27 +
                fRam000000014685e32c * fVar23;
    fStack_b0 = DAT_1468b5d94 * fVar33 + DAT_1468b5d90 * fVar14 + DAT_1468b5d98 * fVar12 +
                fRam000000014685e32c * fVar24;
    fStack_ac = DAT_1468b5d94 * fVar21 + DAT_1468b5d90 * fVar21 + DAT_1468b5d98 * fVar21 +
                fRam000000014685e32c * fRam000000014685e32c;
    FMatrix::RemoveScaling(&local_e8);
    fVar13 = fStack_10c;
    fVar27 = fStack_110;
    fVar25 = fStack_114;
    fVar14 = local_118;
    fVar17 = (float)(-(uint)(_DAT_14685e380 <= local_118) & (_DAT_14685e370 ^ (uint)fVar19) ^
                    _DAT_14685e370);
    fVar15 = (float)(-(uint)(fRam000000014685e384 <= fStack_114) &
                     (uRam000000014685e374 ^ (uint)fVar16) ^ uRam000000014685e374);
    fVar10 = (float)(-(uint)(fRam000000014685e388 <= fStack_110) &
                     (uRam000000014685e378 ^ (uint)fVar18) ^ uRam000000014685e378);
    local_e8 = local_e8 * fVar17;
    fStack_e4 = fStack_e4 * fVar17;
    fStack_e0 = fStack_e0 * fVar17;
    fStack_d0 = fStack_d0 * fVar15;
    fStack_d4 = fStack_d4 * fVar15;
    local_d8 = local_d8 * fVar15;
    fStack_c0 = fStack_c0 * fVar10;
    local_c8 = local_c8 * fVar10;
    fStack_c4 = fStack_c4 * fVar10;
    FQuat::FQuat(&local_118,&local_e8);
    auVar6._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
    auVar6._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
    auVar6._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
    auVar6._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
    auVar26._0_4_ = auVar6._4_4_ + auVar6._0_4_;
    auVar26._4_4_ = auVar6._8_4_ + auVar6._4_4_;
    auVar26._8_4_ = auVar6._12_4_ + auVar6._8_4_;
    auVar26._12_4_ = auVar6._0_4_ + auVar6._12_4_;
    auVar6 = rsqrtps(auVar6,auVar26);
    fVar15 = auVar6._0_4_;
    fVar10 = auVar6._4_4_;
    fVar22 = auVar6._8_4_;
    fVar19 = auVar6._12_4_;
    fVar15 = (_DAT_14685e310 - fVar15 * fVar15 * auVar26._0_4_ * _DAT_14685e310) * fVar15 + fVar15;
    fVar10 = (fRam000000014685e314 - fVar10 * fVar10 * auVar26._4_4_ * fRam000000014685e314) *
             fVar10 + fVar10;
    fVar22 = (fRam000000014685e318 - fVar22 * fVar22 * auVar26._8_4_ * fRam000000014685e318) *
             fVar22 + fVar22;
    fVar19 = (fRam000000014685e31c - fVar19 * fVar19 * auVar26._12_4_ * fRam000000014685e31c) *
             fVar19 + fVar19;
    fVar17 = 0.0;
    fVar11 = (float)(((uint)(((_DAT_14685e310 - fVar15 * fVar15 * auVar26._0_4_ * _DAT_14685e310) *
                              fVar15 + fVar15) * local_118) ^ _DAT_14685e300) &
                     -(uint)(1e-08 <= auVar26._0_4_) ^ _DAT_14685e300);
    fVar12 = (float)(((uint)(((fRam000000014685e314 -
                              fVar10 * fVar10 * auVar26._4_4_ * fRam000000014685e314) * fVar10 +
                             fVar10) * fStack_114) ^ uRam000000014685e304) &
                     -(uint)(1e-08 <= auVar26._4_4_) ^ uRam000000014685e304);
    fVar21 = (float)(((uint)(((fRam000000014685e318 -
                              fVar22 * fVar22 * auVar26._8_4_ * fRam000000014685e318) * fVar22 +
                             fVar22) * fStack_110) ^ uRam000000014685e308) &
                     -(uint)(1e-08 <= auVar26._8_4_) ^ uRam000000014685e308);
    fVar28 = (float)(((uint)(((fRam000000014685e31c -
                              fVar19 * fVar19 * auVar26._12_4_ * fRam000000014685e31c) * fVar19 +
                             fVar19) * fStack_10c) ^ uRam000000014685e30c) &
                     -(uint)(1e-08 <= auVar26._12_4_) ^ uRam000000014685e30c);
  }
  *param_2 = fVar11;
  param_2[1] = fVar12;
  param_2[2] = fVar21;
  param_2[3] = fVar28;
  param_2[4] = local_b8;
  param_2[5] = fStack_b4;
  param_2[6] = fStack_b0;
  param_2[7] = fVar17;
  param_2[8] = fVar14;
  param_2[9] = fVar25;
  param_2[10] = fVar27;
  param_2[0xb] = fVar13;
  return param_2;
}



// FUNCTION 14081aac0 FUN_14081aac0 body=262 status=ok
// SIG undefined FUN_14081aac0(void)

void FUN_14081aac0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x718);
  if ((lVar3 != 0) && (iVar6 = 0, 0 < *(int *)(lVar3 + 0x38))) {
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar7 + *(longlong *)(lVar3 + 0x30));
      if ((lVar3 != 0) &&
         ((lVar5 = *(longlong *)(lVar3 + 0x70), lVar5 != 0 ||
          (lVar5 = *(longlong *)(lVar3 + 0x48), lVar5 != 0)))) {
        plVar2 = (longlong *)*param_2;
        iVar1 = (int)param_2[1];
        for (plVar4 = plVar2; plVar4 != plVar2 + iVar1; plVar4 = plVar4 + 1) {
          if (*plVar4 == lVar5) {
            if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1) goto LAB_14081ab86;
            break;
          }
        }
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
        }
        *(longlong *)((longlong)iVar1 * 8 + *param_2) = lVar5;
      }
LAB_14081ab86:
      lVar3 = *(longlong *)(param_1 + 0x718);
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar6 < *(int *)(lVar3 + 0x38));
  }
  FUN_14238dc10(param_1,param_2,param_3);
  return;
}



// FUNCTION 14081abd0 FUN_14081abd0 body=598 status=ok
// SIG undefined FUN_14081abd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14081abd0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  void *_Src;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar11 = *(longlong *)(param_1 + 0x728);
  lVar10 = (longlong)*(int *)(param_1 + 0x730) * 0x50 + lVar11;
  local_80 = param_1;
  local_88 = param_3;
  do {
    if (lVar11 == lVar10) {
      FUN_14238dc10(local_80,param_2,local_88);
      return;
    }
    puVar8 = (undefined1 *)0x0;
    lVar2 = *(longlong *)(lVar11 + 0x40);
    if (lVar2 != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x70);
      if ((lVar7 != 0) || (lVar7 = *(longlong *)(lVar2 + 0x48), lVar7 != 0)) {
        plVar9 = (longlong *)*param_2;
        iVar6 = (int)param_2[1];
        for (plVar4 = plVar9; plVar4 != plVar9 + iVar6; plVar4 = plVar4 + 1) {
          if (*plVar4 == lVar7) {
            if ((int)((longlong)plVar4 - (longlong)plVar9 >> 3) != -1) goto LAB_14081acba;
            break;
          }
        }
        *(int *)(param_2 + 1) = iVar6 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
        }
        *(longlong *)((longlong)iVar6 * 8 + *param_2) = lVar7;
      }
LAB_14081acba:
      local_58 = (undefined1 *)0x0;
      uVar1 = *(uint *)(*(longlong *)(lVar11 + 0x40) + 0x58);
      _Src = *(void **)(*(longlong *)(lVar11 + 0x40) + 0x50);
      local_50 = (ulonglong)uVar1;
      iVar6 = 0;
      if (uVar1 != 0) {
        TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy(local_78,uVar1,0);
        puVar5 = local_78;
        if (local_58 != (undefined1 *)0x0) {
          puVar5 = local_58;
        }
        _guard_xfg_dispatch_icall_nop(puVar5,_Src,(longlong)(int)uVar1 << 3);
        iVar6 = (int)local_50;
      }
      puVar5 = local_78;
      if (local_58 != (undefined1 *)0x0) {
        puVar5 = puVar8;
      }
      plVar9 = (longlong *)((ulonglong)puVar5 | (ulonglong)local_58);
      puVar5 = (undefined1 *)((longlong)iVar6 & 0x1fffffffffffffff);
      if (plVar9 + iVar6 < plVar9) {
        puVar5 = puVar8;
      }
      if (puVar5 != (undefined1 *)0x0) {
        do {
          lVar2 = *plVar9;
          if (lVar2 != 0) {
            plVar4 = (longlong *)*param_2;
            iVar6 = (int)param_2[1];
            for (plVar3 = plVar4; plVar3 != plVar4 + iVar6; plVar3 = plVar3 + 1) {
              if (*plVar3 == lVar2) {
                if ((int)((longlong)plVar3 - (longlong)plVar4 >> 3) != -1) goto LAB_14081adad;
                break;
              }
            }
            *(int *)(param_2 + 1) = iVar6 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
            }
            *(longlong *)((longlong)iVar6 * 8 + *param_2) = lVar2;
          }
LAB_14081adad:
          plVar9 = plVar9 + 1;
          puVar8 = puVar8 + 1;
        } while (puVar8 != puVar5);
      }
      if (local_58 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
    lVar11 = lVar11 + 0x50;
  } while( true );
}



// FUNCTION 14081ae30 FUN_14081ae30 body=524 status=ok
// SIG undefined FUN_14081ae30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14081ae30(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70 [32];
  undefined1 *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar6 = *(longlong *)(param_1 + 0x718);
  local_78 = param_3;
  if (lVar6 != 0) {
    lVar5 = *(longlong *)(lVar6 + 0x70);
    if ((lVar5 != 0) || (lVar5 = *(longlong *)(lVar6 + 0x48), lVar5 != 0)) {
      plVar8 = (longlong *)*param_2;
      iVar1 = (int)param_2[1];
      for (plVar3 = plVar8; plVar3 != plVar8 + iVar1; plVar3 = plVar3 + 1) {
        if (*plVar3 == lVar5) {
          if ((int)((longlong)plVar3 - (longlong)plVar8 >> 3) != -1) goto LAB_14081aeea;
          break;
        }
      }
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)((longlong)iVar1 * 8 + *param_2) = lVar5;
    }
LAB_14081aeea:
    puVar7 = (undefined1 *)0x0;
    local_44 = 0;
    local_50 = (undefined1 *)0x0;
    local_48 = *(int *)(*(longlong *)(param_1 + 0x718) + 0x58);
    lVar6 = (longlong)local_48;
    _Src = *(void **)(*(longlong *)(param_1 + 0x718) + 0x50);
    if (local_48 != 0) {
      TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy(local_70,local_48,0);
      puVar4 = local_70;
      if (local_50 != (undefined1 *)0x0) {
        puVar4 = local_50;
      }
      _guard_xfg_dispatch_icall_nop(puVar4,_Src,lVar6 << 3);
    }
    puVar4 = local_70;
    if (local_50 != (undefined1 *)0x0) {
      puVar4 = puVar7;
    }
    plVar8 = (longlong *)((ulonglong)puVar4 | (ulonglong)local_50);
    puVar4 = (undefined1 *)((longlong)local_48 & 0x1fffffffffffffff);
    if (plVar8 + local_48 < plVar8) {
      puVar4 = puVar7;
    }
    if (puVar4 != (undefined1 *)0x0) {
      do {
        lVar6 = *plVar8;
        if (lVar6 != 0) {
          plVar3 = (longlong *)*param_2;
          iVar1 = (int)param_2[1];
          for (plVar2 = plVar3; plVar2 != plVar3 + iVar1; plVar2 = plVar2 + 1) {
            if (*plVar2 == lVar6) {
              if ((int)((longlong)plVar2 - (longlong)plVar3 >> 3) != -1) goto LAB_14081afdd;
              break;
            }
          }
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(longlong *)((longlong)iVar1 * 8 + *param_2) = lVar6;
        }
LAB_14081afdd:
        plVar8 = plVar8 + 1;
        puVar7 = puVar7 + 1;
        param_3 = local_78;
      } while (puVar7 != puVar4);
    }
    if (local_50 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_14238dc10(param_1,param_2,param_3);
  return;
}



// FUNCTION 14081b040 FUN_14081b040 body=500 status=ok
// SIG undefined FUN_14081b040(void)

void FUN_14081b040(longlong param_1,longlong *param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong local_res8;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  
  lVar5 = *(longlong *)(param_1 + 0x760);
  if (lVar5 != 0) {
    plVar10 = *(longlong **)(lVar5 + 0x78);
    local_res8 = 0;
    uVar6 = (longlong)*(int *)(lVar5 + 0x80) & 0x1fffffffffffffff;
    if (plVar10 + *(int *)(lVar5 + 0x80) < plVar10) {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      do {
        iVar7 = 0;
        lVar2 = *plVar10;
        lVar9 = lVar5;
        if (0 < *(int *)(lVar5 + 0x2c)) {
          do {
            iVar8 = 0;
            if (0 < *(int *)(lVar5 + 0x28)) {
              do {
                if ((((iVar8 < 0) || (*(int *)(lVar2 + 0x40) <= iVar8)) || (iVar7 < 0)) ||
                   (*(int *)(lVar2 + 0x44) <= iVar7)) {
                  local_68 = 0;
                  plVar3 = &local_68;
                  local_60 = 0xffffffff;
                }
                else {
                  plVar4 = (longlong *)
                           (*(longlong *)(lVar2 + 0x70) +
                           (longlong)(*(int *)(lVar2 + 0x40) * iVar7 + iVar8) * 0x10);
                  plVar3 = &local_58;
                  local_58 = *plVar4;
                  lStack_50 = plVar4[1];
                }
                local_48 = *plVar3;
                lStack_40 = plVar3[1];
                if (((local_48 != 0) && ((int)lStack_40 != -1)) &&
                   (lVar5 = *(longlong *)(local_48 + 0x30), lVar5 != 0)) {
                  plVar3 = (longlong *)*param_2;
                  iVar1 = (int)param_2[1];
                  for (plVar4 = plVar3; plVar4 != plVar3 + iVar1; plVar4 = plVar4 + 1) {
                    if (*plVar4 == lVar5) {
                      if ((int)((longlong)plVar4 - (longlong)plVar3 >> 3) != -1) goto LAB_14081b1ad;
                      break;
                    }
                  }
                  *(int *)(param_2 + 1) = iVar1 + 1;
                  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
                  }
                  *(longlong *)((longlong)iVar1 * 8 + *param_2) = lVar5;
                }
LAB_14081b1ad:
                lVar5 = *(longlong *)(param_1 + 0x760);
                iVar8 = iVar8 + 1;
                lVar9 = lVar5;
              } while (iVar8 < *(int *)(lVar5 + 0x28));
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(lVar5 + 0x2c));
        }
        local_res8 = local_res8 + 1;
        plVar10 = plVar10 + 1;
        lVar5 = lVar9;
      } while (local_res8 != uVar6);
      param_3 = param_3 & 0xffffffff;
    }
  }
  FUN_14238dc10(param_1,param_2,param_3);
  return;
}



// FUNCTION 14081b250 FUN_14081b250 body=237 status=ok
// SIG undefined FUN_14081b250(void)

undefined8 * FUN_14081b250(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  cVar2 = FUN_142730ad0(param_1,param_3);
  if ((cVar2 == '\0') || (uVar4 = 0x400, (*(uint *)(lVar1 + 0x2c) & 0x10000000) == 0)) {
    uVar4 = 0;
  }
  uVar4 = *(uint *)((longlong)param_2 + 4) & 0xfffffbff | uVar4;
  *(uint *)((longlong)param_2 + 4) = uVar4;
  uVar4 = ((*(uint *)(param_1 + 0x20) >> 1 & 0xff) << 0xc ^ uVar4) & 0x1000 ^ uVar4;
  *(uint *)((longlong)param_2 + 4) = uVar4;
  uVar4 = ((*(uint *)(param_1 + 0x18) >> 0x15 & 0xff) << 0xd ^ uVar4) & 0x2000 ^ uVar4;
  *(uint *)((longlong)param_2 + 4) = uVar4;
  uVar5 = 0;
  if (*(char *)(param_1 + 0x2c) != '\x01') {
    uVar5 = 0x100000;
  }
  *(uint *)((longlong)param_2 + 4) = uVar5 | uVar4 & 0xffefffff;
  bVar3 = FUN_142730880(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffff7ff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | (uint)bVar3 << 0xb;
  FUN_1425a2630(param_1 + 0x3ec,param_2);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x200;
  return param_2;
}



// FUNCTION 14081b3a0 FUN_14081b3a0 body=1617 status=ok
// SIG undefined FUN_14081b3a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14081b3a0(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
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
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
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
  undefined4 local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  puVar11 = (undefined4 *)0x0;
  if ((*(longlong *)(param_3 + 0x40) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x40) + 0xa0), lVar1 != 0)) {
    lVar10 = operator_new(0x1b0);
    if (lVar10 != 0) {
      puVar11 = (undefined4 *)FUN_1426852e0(lVar10);
    }
    thunk_FUN_142686190(puVar11,param_1 + 0x3b0);
    *(byte *)(puVar11 + 4) = *(byte *)(puVar11 + 4) & 0xb7;
    *puVar11 = param_2;
    uVar8 = FUN_140487e30(&local_178,param_3);
    fVar7 = fStack_14c;
    fVar6 = fStack_150;
    fVar5 = fStack_154;
    fVar4 = local_158;
    fVar27 = fRam000000014685e388;
    fVar24 = fRam000000014685e384;
    fVar31 = _DAT_14685e380;
    fVar29 = fRam000000014685e328;
    fVar26 = fRam000000014685e324;
    fVar23 = _DAT_14685e320;
    auVar3._4_4_ = fStack_154;
    auVar3._0_4_ = local_158;
    auVar3._8_4_ = fStack_150;
    auVar3._12_4_ = fStack_14c;
    auVar12 = *(undefined1 (*) [16])(param_1 + 0x230);
    local_f8 = auVar12._0_4_;
    fStack_f4 = auVar12._4_4_;
    fStack_f0 = auVar12._8_4_;
    fStack_ec = auVar12._12_4_;
    fVar14 = *(float *)(param_1 + 0x210);
    fVar20 = *(float *)(param_1 + 0x214);
    fVar17 = *(float *)(param_1 + 0x218);
    fVar21 = *(float *)(param_1 + 0x21c);
    auVar12 = minps(auVar3,auVar12);
    auVar13._4_4_ = -(uint)(auVar12._4_4_ < fRam000000014685e384);
    auVar13._0_4_ = -(uint)(auVar12._0_4_ < _DAT_14685e380);
    auVar13._8_4_ = -(uint)(auVar12._8_4_ < fRam000000014685e388);
    auVar13._12_4_ = -(uint)(auVar12._12_4_ < fRam000000014685e38c);
    iVar9 = movmskps(uVar8,auVar13);
    if (iVar9 == 0) {
      fVar24 = local_168 * local_f8;
      fVar27 = fStack_164 * fStack_f4;
      fVar30 = fStack_160 * fStack_f0;
      fVar32 = fStack_15c * fStack_ec;
      local_118 = fStack_16c * fVar14 * _DAT_14685e360 + fVar21 * local_178 +
                  fStack_170 * fVar20 * _DAT_14685e350 + fStack_174 * fVar17 * _DAT_14685e340;
      fStack_114 = fStack_170 * fVar14 * fRam000000014685e364 + fVar21 * fStack_174 +
                   fStack_16c * fVar20 * fRam000000014685e354 +
                   local_178 * fVar17 * fRam000000014685e344;
      fStack_110 = fStack_174 * fVar14 * fRam000000014685e368 + fVar21 * fStack_170 +
                   local_178 * fVar20 * fRam000000014685e358 +
                   fStack_16c * fVar17 * fRam000000014685e348;
      fStack_10c = local_178 * fVar14 * fRam000000014685e36c + fVar21 * fStack_16c +
                   fStack_174 * fVar20 * fRam000000014685e35c +
                   fStack_170 * fVar17 * fRam000000014685e34c;
      fVar23 = fVar30 * fVar20 - fVar27 * fVar17;
      fVar26 = fVar24 * fVar17 - fVar30 * fVar14;
      fVar29 = fVar27 * fVar14 - fVar24 * fVar20;
      fVar31 = fVar32 * fVar21 - fVar32 * fVar21;
      fVar23 = fVar23 + fVar23;
      fVar26 = fVar26 + fVar26;
      fVar29 = fVar29 + fVar29;
      fVar31 = fVar31 + fVar31;
      local_108._4_4_ =
           (fVar23 * fVar17 - fVar29 * fVar14) + fVar21 * fVar26 + fVar27 +
           *(float *)(param_1 + 0x224);
      local_108._0_4_ =
           (fVar29 * fVar20 - fVar26 * fVar17) + fVar21 * fVar23 + fVar24 +
           *(float *)(param_1 + 0x220);
      fStack_100 = (fVar26 * fVar14 - fVar23 * fVar20) + fVar21 * fVar29 + fVar30 +
                   *(float *)(param_1 + 0x228);
      fStack_fc = (fVar31 * fVar21 - fVar31 * fVar21) + fVar21 * fVar31 + fVar32 +
                  *(float *)(param_1 + 0x22c);
    }
    else {
      fVar16 = fVar20 + fVar20;
      fVar18 = fVar17 + fVar17;
      fVar30 = *(float *)(param_1 + 0x220);
      fVar32 = *(float *)(param_1 + 0x224);
      fVar2 = *(float *)(param_1 + 0x228);
      fVar19 = fVar14 * (fVar14 + fVar14);
      fVar36 = fVar21 * (fVar14 + fVar14);
      fVar43 = local_f8 * local_158;
      fVar44 = fStack_f4 * fStack_154;
      fVar45 = fStack_f0 * fStack_150;
      fVar40 = (fVar21 * fVar18 + fVar14 * fVar16) * local_f8;
      fVar41 = (fVar36 + fVar20 * fVar18) * fStack_f4;
      fVar42 = (fVar21 * fVar16 + fVar14 * fVar18) * fStack_f0;
      fVar22 = fStack_f4 * (fVar14 * fVar16 - fVar21 * fVar18);
      fVar25 = fStack_f0 * (fVar20 * fVar18 - fVar36);
      fVar28 = local_f8 * (fVar14 * fVar18 - fVar21 * fVar16);
      fVar14 = (float)((uint)((_DAT_14685e320 - (fVar17 * fVar18 + fVar20 * fVar16)) * local_f8) &
                      _DAT_14685e330);
      fVar17 = (float)((uint)((fRam000000014685e324 - (fVar17 * fVar18 + fVar19)) * fStack_f4) &
                      uRam000000014685e334);
      fVar16 = (float)((uint)((fRam000000014685e328 - (fVar20 * fVar16 + fVar19)) * fStack_f0) &
                      uRam000000014685e338);
      fVar19 = (float)((uint)((fRam000000014685e32c - (fVar19 + fVar19)) * fStack_ec) &
                      uRam000000014685e33c);
      fVar18 = fStack_174 + fStack_174;
      fVar21 = fStack_170 + fStack_170;
      fVar36 = local_178 * (local_178 + local_178);
      fVar20 = (local_178 + local_178) * fStack_16c;
      fVar37 = (fVar21 * fStack_16c + fVar18 * local_178) * local_158;
      fVar38 = (fVar20 + fVar21 * fStack_174) * fStack_154;
      fVar39 = (fVar18 * fStack_16c + fVar21 * local_178) * fStack_150;
      fVar33 = fStack_154 * (fVar18 * local_178 - fVar21 * fStack_16c);
      fVar34 = fStack_150 * (fVar21 * fStack_174 - fVar20);
      fVar35 = local_158 * (fVar21 * local_178 - fVar18 * fStack_16c);
      fVar20 = (float)((uint)((_DAT_14685e320 - (fStack_170 * fVar21 + fStack_174 * fVar18)) *
                             local_158) & _DAT_14685e330);
      fVar21 = (float)((uint)((fRam000000014685e324 - (fStack_170 * fVar21 + fVar36)) * fStack_154)
                      & uRam000000014685e334);
      fVar18 = (float)((uint)((fRam000000014685e328 - (fStack_174 * fVar18 + fVar36)) * fStack_150)
                      & uRam000000014685e338);
      fVar36 = (float)((uint)((fRam000000014685e32c - (fVar36 + fVar36)) * fStack_14c) &
                      uRam000000014685e33c);
      local_178 = fVar37 * fVar22 + fVar20 * fVar14 + fVar35 * fVar42 + fVar36 * fVar30;
      fStack_174 = fVar37 * fVar17 + fVar20 * fVar40 + fVar35 * fVar25 + fVar36 * fVar32;
      fStack_170 = fVar37 * fVar41 + fVar20 * fVar28 + fVar35 * fVar16 + fVar36 * fVar2;
      fStack_16c = fVar37 * fVar19 + fVar20 * fVar19 + fVar35 * fVar19 +
                   fVar36 * fRam000000014685e32c;
      fStack_15c = fVar21 * fVar19 + fVar33 * fVar19 + fVar38 * fVar19 +
                   fVar36 * fRam000000014685e32c;
      local_158 = fVar34 * fVar22 + fVar39 * fVar14 + fVar18 * fVar42 + fVar36 * fVar30;
      fStack_154 = fVar34 * fVar17 + fVar39 * fVar40 + fVar18 * fVar25 + fVar36 * fVar32;
      fStack_150 = fVar34 * fVar41 + fVar39 * fVar28 + fVar18 * fVar16 + fVar36 * fVar2;
      fStack_14c = fVar34 * fVar19 + fVar39 * fVar19 + fVar18 * fVar19 +
                   fVar36 * fRam000000014685e32c;
      local_148 = fStack_164 * fVar22 + local_168 * fVar14 + fStack_160 * fVar42 +
                  fRam000000014685e32c * fVar30;
      fStack_144 = fStack_164 * fVar17 + local_168 * fVar40 + fStack_160 * fVar25 +
                   fRam000000014685e32c * fVar32;
      fStack_140 = fStack_164 * fVar41 + local_168 * fVar28 + fStack_160 * fVar16 +
                   fRam000000014685e32c * fVar2;
      fStack_13c = fStack_164 * fVar19 + local_168 * fVar19 + fStack_160 * fVar19 +
                   fRam000000014685e32c * fRam000000014685e32c;
      local_168 = fVar21 * fVar22 + fVar33 * fVar14 + fVar38 * fVar42 + fVar36 * fVar30;
      fStack_164 = fVar21 * fVar17 + fVar33 * fVar40 + fVar38 * fVar25 + fVar36 * fVar32;
      fStack_160 = fVar21 * fVar41 + fVar33 * fVar28 + fVar38 * fVar16 + fVar36 * fVar2;
      FMatrix::RemoveScaling(&local_178);
      fVar14 = (float)(-(uint)(fVar31 <= fVar43) & (_DAT_14685e370 ^ (uint)fVar23) ^ _DAT_14685e370)
      ;
      fVar20 = (float)(-(uint)(fVar24 <= fVar44) & (uRam000000014685e374 ^ (uint)fVar26) ^
                      uRam000000014685e374);
      fVar17 = (float)(-(uint)(fVar27 <= fVar45) & (uRam000000014685e378 ^ (uint)fVar29) ^
                      uRam000000014685e378);
      local_178 = local_178 * fVar14;
      fStack_174 = fStack_174 * fVar14;
      fStack_170 = fStack_170 * fVar14;
      fStack_164 = fStack_164 * fVar20;
      fStack_160 = fStack_160 * fVar20;
      local_168 = local_168 * fVar20;
      fStack_154 = fStack_154 * fVar17;
      fStack_150 = fStack_150 * fVar17;
      local_158 = local_158 * fVar17;
      FQuat::FQuat(&local_128,&local_178);
      local_138 = 0x322bcc77;
      auVar15._0_4_ = local_128 * local_128 + fStack_120 * fStack_120;
      auVar15._4_4_ = fStack_124 * fStack_124 + fStack_11c * fStack_11c;
      auVar15._8_4_ = fStack_120 * fStack_120 + local_128 * local_128;
      auVar15._12_4_ = fStack_11c * fStack_11c + fStack_124 * fStack_124;
      fVar23 = auVar15._4_4_ + auVar15._0_4_;
      fVar26 = auVar15._8_4_ + auVar15._4_4_;
      fVar29 = auVar15._12_4_ + auVar15._8_4_;
      fVar31 = auVar15._0_4_ + auVar15._12_4_;
      auVar12._4_4_ = fVar26;
      auVar12._0_4_ = fVar23;
      auVar12._8_4_ = fVar29;
      auVar12._12_4_ = fVar31;
      auVar12 = rsqrtps(auVar15,auVar12);
      fVar14 = auVar12._0_4_;
      fVar20 = auVar12._4_4_;
      fVar17 = auVar12._8_4_;
      fVar21 = auVar12._12_4_;
      fVar14 = (_DAT_14685e310 - fVar14 * fVar14 * fVar23 * _DAT_14685e310) * fVar14 + fVar14;
      fVar20 = (fRam000000014685e314 - fVar20 * fVar20 * fVar26 * fRam000000014685e314) * fVar20 +
               fVar20;
      fVar17 = (fRam000000014685e318 - fVar17 * fVar17 * fVar29 * fRam000000014685e318) * fVar17 +
               fVar17;
      fVar21 = (fRam000000014685e31c - fVar21 * fVar21 * fVar31 * fRam000000014685e31c) * fVar21 +
               fVar21;
      local_108._4_4_ = fStack_144;
      local_108._0_4_ = local_148;
      fStack_100 = fStack_140;
      local_118 = (float)(((uint)(((_DAT_14685e310 - fVar14 * fVar14 * fVar23 * _DAT_14685e310) *
                                   fVar14 + fVar14) * local_128) ^ _DAT_14685e300) &
                          -(uint)(1e-08 <= fVar23) ^ _DAT_14685e300);
      fStack_114 = (float)(((uint)(((fRam000000014685e314 -
                                    fVar20 * fVar20 * fVar26 * fRam000000014685e314) * fVar20 +
                                   fVar20) * fStack_124) ^ uRam000000014685e304) &
                           -(uint)(1e-08 <= fVar26) ^ uRam000000014685e304);
      fStack_110 = (float)(((uint)(((fRam000000014685e318 -
                                    fVar17 * fVar17 * fVar29 * fRam000000014685e318) * fVar17 +
                                   fVar17) * fStack_120) ^ uRam000000014685e308) &
                           -(uint)(1e-08 <= fVar29) ^ uRam000000014685e308);
      fStack_10c = (float)(((uint)(((fRam000000014685e31c -
                                    fVar21 * fVar21 * fVar31 * fRam000000014685e31c) * fVar21 +
                                   fVar21) * fStack_11c) ^ uRam000000014685e30c) &
                           -(uint)(1e-08 <= fVar31) ^ uRam000000014685e30c);
      fStack_fc = 0.0;
    }
    fStack_ec = fStack_ec * fVar7;
    fStack_f0 = fStack_f0 * fVar6;
    fStack_f4 = fStack_f4 * fVar5;
    local_f8 = local_f8 * fVar4;
    local_180 = FUN_142685570(&local_128,param_1);
    local_188 = param_4;
    FUN_14269a1d0(puVar11,lVar1,&local_118,param_1);
  }
  return puVar11;
}



// FUNCTION 14081ba00 FUN_14081ba00 body=39 status=ok
// SIG undefined FUN_14081ba00(void)

void FUN_14081ba00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1440fac70;
    return;
  }
  return;
}



// FUNCTION 14081ba30 FUN_14081ba30 body=130 status=ok
// SIG undefined FUN_14081ba30(void)

int FUN_14081ba30(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_3 * 8);
  _guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 8),_Src,(longlong)(iVar1 - param_3) << 3);
  *(undefined8 *)((longlong)param_3 * 8 + *param_1) = *param_2;
  return param_3;
}



// FUNCTION 14081bac0 FUN_14081bac0 body=1455 status=ok
// SIG undefined FUN_14081bac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14081bac0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 uVar4;
  void *_Src;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  float *_Src_00;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  int local_1a0;
  int local_19c;
  undefined8 *local_198;
  uint local_190;
  undefined4 local_18c;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  ulonglong local_170;
  undefined4 *local_168;
  uint local_160;
  undefined4 local_15c;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined **local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  byte local_11c;
  undefined4 local_118;
  undefined ***local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if (*(longlong *)(param_1 + 0x730) != 0) {
    local_190 = *(uint *)(param_2 + 1);
    lVar12 = (longlong)(int)local_190;
    if (2 < (int)local_190) {
      _Src_00 = (float *)*param_2;
      iVar7 = 0;
      local_158 = 0;
      local_150 = 0;
      local_198 = (undefined8 *)0x0;
      if (local_190 == 0) {
        local_18c = 0;
        iVar11 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (&local_198,local_190,0);
        _guard_xfg_dispatch_icall_nop(local_198,_Src_00,lVar12 << 3);
        iVar11 = *(int *)(param_2 + 1);
        _Src_00 = (float *)*param_2;
      }
      SimplifyPolygon(&local_198,&local_158,
                      SQRT((_Src_00[1] - _Src_00[(longlong)iVar11 * 2 + -1]) *
                           (_Src_00[1] - _Src_00[(longlong)iVar11 * 2 + -1]) +
                           (*_Src_00 - _Src_00[(longlong)iVar11 * 2 + -2]) *
                           (*_Src_00 - _Src_00[(longlong)iVar11 * 2 + -2])) * 0.5);
      uVar16 = local_190;
      uVar17 = (ulonglong)local_190;
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 0;
      iVar11 = 0;
      if (2 < (int)local_190) {
        cVar5 = PaperGeomTools::IsPolygonWindingCCW(&local_198);
        iVar11 = 0;
        if (cVar5 == '\0') {
          iVar6 = uVar16 - 1;
          lVar12 = (longlong)iVar6;
          if (-1 < iVar6) {
            puVar14 = local_198 + lVar12;
            lVar9 = local_1a8;
            iVar11 = iVar7;
            do {
              local_1a0 = iVar7 + 1;
              if (iVar11 < local_1a0) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1a8,iVar7);
                lVar9 = local_1a8;
                iVar11 = local_19c;
              }
              puVar1 = (undefined8 *)(lVar9 + (longlong)iVar7 * 8);
              if (puVar1 != (undefined8 *)0x0) {
                *puVar1 = *puVar14;
              }
              puVar14 = puVar14 + -1;
              lVar12 = lVar12 + -1;
              iVar7 = local_1a0;
            } while (-1 < lVar12);
          }
        }
        else {
          lVar12 = local_1a8;
          puVar14 = local_198;
          iVar6 = iVar7;
          if (0 < (int)uVar16) {
            do {
              local_1a0 = iVar7 + 1;
              iVar11 = iVar6;
              if (iVar6 < local_1a0) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1a8,iVar7);
                lVar12 = local_1a8;
                iVar11 = local_19c;
              }
              puVar1 = (undefined8 *)(lVar12 + (longlong)iVar7 * 8);
              if (puVar1 != (undefined8 *)0x0) {
                *puVar1 = *puVar14;
              }
              uVar17 = uVar17 - 1;
              puVar14 = puVar14 + 1;
              iVar7 = local_1a0;
              iVar6 = iVar11;
            } while (uVar17 != 0);
          }
        }
      }
      local_188 = 0;
      local_180 = 0;
      cVar5 = PaperGeomTools::TriangulatePoly(&local_188,&local_1a8,0);
      if (cVar5 == '\0') {
        local_1a0 = 0;
        if (iVar11 != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_1a8,0);
        }
        PaperGeomTools::CorrectPolygonWinding(&local_1a8,param_2,0);
        bVar19 = local_180._4_4_ != 0;
        local_180 = (ulonglong)local_180._4_4_ << 0x20;
        if (bVar19) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_188,0);
        }
        PaperGeomTools::TriangulatePoly(&local_188,&local_1a8,0);
      }
      local_178 = (longlong *)0x0;
      local_170 = 0;
      PaperGeomTools::GenerateConvexPolygonsFromTriangles(&local_178,&local_188);
      uVar17 = (ulonglong)(int)local_170;
      plVar15 = local_178 + uVar17 * 2;
      plVar18 = local_178;
      local_148 = plVar15;
      if (local_178 != plVar15) {
        do {
          local_160 = *(uint *)(plVar18 + 1);
          lVar12 = (longlong)(int)local_160;
          puVar8 = (undefined4 *)0x0;
          _Src = (void *)*plVar18;
          local_168 = (undefined4 *)0x0;
          if (local_160 == 0) {
            local_15c = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (&local_168,local_160,0);
            puVar8 = local_168;
            _guard_xfg_dispatch_icall_nop(local_168,_Src,lVar12 << 3);
          }
          local_110 = &local_138;
          local_11c = local_11c | 1;
          local_bc = _DAT_1468b5d90;
          local_c8 = _DAT_1468b5d90;
          local_a8 = _DAT_1468b5b70;
          uStack_a0 = uRam00000001468b5b78;
          local_98 = _DAT_1468b5b80;
          uStack_90 = uRam00000001468b5b88;
          local_138 = &PTR_FUN_1440fbd68;
          local_88 = _DAT_1468b5b90;
          uStack_84 = uRam00000001468b5b94;
          uStack_80 = uRam00000001468b5b98;
          uStack_7c = uRam00000001468b5b9c;
          local_130 = 0;
          local_128 = 0;
          local_120 = 3;
          local_118 = 6;
          local_108 = 3;
          local_100 = 0;
          local_f0 = 0;
          local_e8 = 0;
          local_e0 = 0;
          local_d8 = 0;
          local_d0 = 0;
          local_b4 = DAT_1468b5d98;
          local_c0 = DAT_1468b5d98;
          local_b0 = 0;
          local_78 = 0;
          uStack_70 = 0;
          if (0 < (int)local_160) {
            uVar17 = (ulonglong)local_160;
            puVar13 = puVar8;
            do {
              lVar12 = (longlong)(int)local_d0;
              iVar7 = (int)local_d0 + 1;
              if (local_d0._4_4_ < iVar7) {
                uVar10 = local_d0 & 0xffffffff;
                local_d0._0_4_ = iVar7;
                TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_d8,uVar10);
                iVar7 = (int)local_d0;
              }
              local_d0._0_4_ = iVar7;
              iVar7 = (int)local_d0;
              puVar2 = (undefined4 *)(local_d8 + lVar12 * 0xc);
              if (puVar2 != (undefined4 *)0x0) {
                fVar3 = *(float *)(param_1 + 0x728);
                uVar4 = puVar13[1];
                *puVar2 = *puVar13;
                puVar2[2] = uVar4;
                puVar2[1] = fVar3 * -0.5;
              }
              lVar12 = (longlong)(int)local_d0;
              local_d0._0_4_ = (int)local_d0 + 1;
              if (local_d0._4_4_ < (int)local_d0) {
                TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_d8,iVar7);
              }
              puVar2 = (undefined4 *)(local_d8 + lVar12 * 0xc);
              if (puVar2 != (undefined4 *)0x0) {
                fVar3 = *(float *)(param_1 + 0x728);
                uVar4 = puVar13[1];
                *puVar2 = *puVar13;
                puVar2[2] = uVar4;
                puVar2[1] = fVar3 * 0.5;
              }
              puVar13 = puVar13 + 2;
              uVar17 = uVar17 - 1;
              plVar15 = local_148;
            } while (uVar17 != 0);
          }
          FUN_142321610(&local_138);
          lVar12 = *(longlong *)(param_1 + 0x730);
          iVar7 = *(int *)(lVar12 + 0x60);
          *(int *)(lVar12 + 0x60) = iVar7 + 1;
          if (*(int *)(lVar12 + 100) < iVar7 + 1) {
            TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(lVar12 + 0x58,iVar7);
          }
          FUN_14080b9e0((longlong)iVar7 * 0xd0 + *(longlong *)(lVar12 + 0x58),&local_138);
          if (local_d8 != 0) {
            FMemory::Free();
          }
          local_138 = &PTR__scalar_deleting_destructor__1440fbd58;
          if (local_e8 != 0) {
            FMemory::Free();
          }
          if (puVar8 != (undefined4 *)0x0) {
            FMemory::Free();
          }
          plVar18 = plVar18 + 2;
        } while (plVar18 != plVar15);
        uVar17 = local_170 & 0xffffffff;
      }
      plVar18 = local_178;
      uVar16 = (uint)uVar17;
      plVar15 = local_178;
      while (uVar16 != 0) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
        uVar16 = (int)uVar17 - 1;
        uVar17 = (ulonglong)uVar16;
      }
      if (plVar18 != (longlong *)0x0) {
        FMemory::Free(plVar18);
      }
      if (local_188 != 0) {
        FMemory::Free();
      }
      if (local_1a8 != 0) {
        FMemory::Free(local_1a8);
      }
      if (local_198 != (undefined8 *)0x0) {
        FMemory::Free(local_198);
      }
      if (local_158 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14081c070 FUN_14081c070 body=10 status=ok
// SIG undefined FUN_14081c070(void)

byte FUN_14081c070(longlong param_1)

{
  return *(byte *)(param_1 + 0x72c) & 1;
}



// FUNCTION 14081c080 FUN_14081c080 body=12 status=ok
// SIG undefined FUN_14081c080(void)

uint FUN_14081c080(longlong param_1)

{
  return *(uint *)(param_1 + 0x72c) >> 2 & 0xffffff01;
}



// FUNCTION 14081c090 IsPointInPolygon body=453 status=ok
// SIG undefined IsPointInPolygon(void)

bool IsPointInPolygon(float *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar3 = (int)param_2[1];
  fVar12 = 0.0;
  if (0 < iVar3) {
    lVar5 = 0;
    lVar4 = *param_2;
    iVar6 = 0;
    fVar1 = *param_1;
    fVar2 = param_1[1];
    do {
      iVar6 = iVar6 + 1;
      fVar11 = *(float *)(lVar4 + lVar5 * 8) - fVar1;
      fVar9 = *(float *)(lVar4 + 4 + lVar5 * 8) - fVar2;
      fVar10 = *(float *)(lVar4 + (longlong)(iVar6 % iVar3) * 8) - fVar1;
      fVar8 = *(float *)(lVar4 + 4 + (longlong)(iVar6 % iVar3) * 8) - fVar2;
      fVar7 = fVar11 * fVar8 - fVar9 * fVar10;
      if (fVar7 <= 0.0) {
        if (0.0 <= fVar7) {
          fVar7 = 0.0;
        }
        else {
          fVar7 = -1.0;
        }
      }
      else {
        fVar7 = 1.0;
      }
      fVar8 = (fVar9 * fVar8 + fVar11 * fVar10) /
              SQRT((fVar8 * fVar8 + fVar10 * fVar10) * (fVar9 * fVar9 + fVar11 * fVar11));
      if (-1.0 <= fVar8) {
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
        fVar9 = -1.0;
        if (-1.0 <= fVar8) goto LAB_14081c1b3;
      }
      else {
        fVar8 = -1.0;
LAB_14081c1b3:
        fVar9 = fVar8;
        if (1.0 <= fVar8) {
          fVar9 = 1.0;
        }
      }
      fVar8 = _guard_xfg_dispatch_icall_nop(fVar9);
      lVar5 = lVar5 + 1;
      fVar12 = fVar12 + fVar8 * fVar7;
    } while (lVar5 < iVar3);
  }
  return 0.001 < ABS(fVar12);
}



// FUNCTION 14081c260 IsPolygonWindingCCW body=347 status=ok
// SIG undefined IsPolygonWindingCCW(void)

bool PaperGeomTools::IsPolygonWindingCCW(longlong *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  
  iVar9 = (int)param_1[1];
  lVar21 = (longlong)iVar9;
  iVar19 = 0;
  fVar22 = 0.0;
  lVar20 = 0;
  if (3 < lVar21) {
    lVar10 = *param_1;
    lVar17 = (lVar21 - 4U >> 2) + 1;
    iVar18 = 2;
    pfVar15 = (float *)(lVar10 + 0x14);
    iVar19 = (int)lVar17 * 4;
    lVar20 = lVar17 * 4;
    do {
      pfVar1 = pfVar15 + -4;
      lVar12 = (longlong)((iVar18 + -1) % iVar9);
      pfVar2 = pfVar15 + -5;
      iVar16 = iVar18 % iVar9;
      pfVar3 = pfVar15 + -2;
      pfVar4 = pfVar15 + -3;
      lVar13 = (longlong)((iVar18 + 1) % iVar9);
      iVar11 = iVar18 + 2;
      pfVar5 = pfVar15 + -1;
      fVar8 = *pfVar15;
      iVar18 = iVar18 + 4;
      lVar14 = (longlong)(iVar11 % iVar9);
      pfVar6 = pfVar15 + 2;
      pfVar7 = pfVar15 + 1;
      pfVar15 = pfVar15 + 8;
      fVar22 = fVar22 + (*pfVar1 + *(float *)(lVar10 + 4 + lVar12 * 8)) *
                        (*(float *)(lVar10 + lVar12 * 8) - *pfVar2) +
               (*pfVar3 + *(float *)(lVar10 + 4 + (longlong)iVar16 * 8)) *
               (*(float *)(lVar10 + (longlong)iVar16 * 8) - *pfVar4) +
               (*(float *)(lVar10 + lVar13 * 8) - *pfVar5) *
               (*(float *)(lVar10 + 4 + lVar13 * 8) + fVar8) +
               (*pfVar6 + *(float *)(lVar10 + 4 + lVar14 * 8)) *
               (*(float *)(lVar10 + lVar14 * 8) - *pfVar7);
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (lVar20 < lVar21) {
    lVar10 = *param_1;
    do {
      iVar19 = iVar19 + 1;
      lVar12 = lVar20 * 8;
      lVar17 = lVar20 * 8;
      lVar20 = lVar20 + 1;
      fVar22 = fVar22 + (*(float *)(lVar10 + 4 + lVar12) +
                        *(float *)(lVar10 + 4 + (longlong)(iVar19 % iVar9) * 8)) *
                        (*(float *)(lVar10 + (longlong)(iVar19 % iVar9) * 8) -
                        *(float *)(lVar10 + lVar17));
    } while (lVar20 < lVar21);
  }
  return fVar22 < 0.0;
}



// FUNCTION 14081c3c0 FUN_14081c3c0 body=15 status=ok
// SIG undefined FUN_14081c3c0(void)

bool FUN_14081c3c0(longlong param_1)

{
  return ((byte)*(undefined4 *)(param_1 + 0x72c) & 6) == 6;
}



// FUNCTION 14081c3d0 JoinMutuallyVisible body=2081 status=ok
// SIG undefined JoinMutuallyVisible(void)

void JoinMutuallyVisible(longlong *param_1,undefined8 *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  ulonglong uVar4;
  float *pfVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
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
  float local_104;
  float local_100;
  float local_fc;
  undefined8 local_f8 [23];
  
  lVar8 = (longlong)*(int *)(param_2 + 1);
  iVar2 = (int)param_1[1];
  if (*(int *)(param_2 + 1) != 0) {
    uVar12 = 1;
    pfVar3 = (float *)*param_2;
    uVar17 = 0;
    uVar7 = 0;
    fVar31 = *pfVar3;
    if (1 < lVar8) {
      lVar10 = 1;
      uVar20 = uVar17;
      if (4 < lVar8) {
        pfVar11 = pfVar3 + 6;
        lVar14 = (lVar8 - 5U >> 2) + 1;
        lVar10 = lVar14 * 4 + 1;
        do {
          fVar26 = pfVar11[-4];
          fVar21 = pfVar11[-2];
          fVar29 = *pfVar11;
          fVar25 = fVar26;
          if (fVar26 <= fVar31) {
            fVar25 = fVar31;
          }
          fVar22 = pfVar11[2];
          pfVar11 = pfVar11 + 8;
          fVar24 = fVar25;
          if (fVar25 <= fVar21) {
            fVar24 = fVar21;
          }
          uVar7 = uVar12;
          if (fVar26 <= fVar31) {
            uVar7 = (uint)uVar20;
          }
          fVar26 = fVar24;
          if (fVar24 <= fVar29) {
            fVar26 = fVar29;
          }
          uVar19 = uVar12 + 1;
          if (fVar21 <= fVar25) {
            uVar19 = uVar7;
          }
          fVar31 = fVar22;
          if (fVar22 <= fVar26) {
            fVar31 = fVar26;
          }
          uVar7 = uVar12 + 2;
          if (fVar29 <= fVar24) {
            uVar7 = uVar19;
          }
          uVar19 = uVar12 + 3;
          if (fVar22 <= fVar26) {
            uVar19 = uVar7;
          }
          uVar20 = (ulonglong)uVar19;
          uVar12 = uVar12 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      uVar7 = (uint)uVar20;
      for (; lVar10 < lVar8; lVar10 = lVar10 + 1) {
        uVar7 = uVar12;
        fVar26 = pfVar3[lVar10 * 2];
        if (pfVar3[lVar10 * 2] <= fVar31) {
          uVar7 = (uint)uVar20;
          fVar26 = fVar31;
        }
        fVar31 = fVar26;
        uVar12 = uVar12 + 1;
        uVar20 = (ulonglong)uVar7;
      }
    }
    bVar6 = false;
    local_100 = 3.4028235e+38;
    local_104 = 3.4028235e+38;
    local_fc = pfVar3[(longlong)(int)uVar7 * 2 + 1];
    fVar31 = pfVar3[(longlong)(int)uVar7 * 2];
    uVar20 = uVar17;
    uVar16 = uVar17;
    uVar15 = uVar17;
    if (3 < iVar2) {
      lVar8 = *param_1;
      uVar12 = 2;
      pfVar11 = (float *)(lVar8 + 0x14);
      do {
        fVar26 = pfVar11[-4];
        uVar4 = (longlong)(int)(uVar12 - 1) % (longlong)iVar2;
        fVar29 = *(float *)(lVar8 + 4 + (longlong)(int)uVar4 * 8) - fVar26;
        fVar21 = *(float *)(lVar8 + (longlong)(int)uVar4 * 8) - pfVar11[-5];
        iVar18 = (int)uVar15;
        if (0.0 < fVar29) {
          fVar25 = (fVar26 - local_fc) * (-1.0 / fVar29);
          fVar29 = (((local_fc * fVar21 - fVar21 * fVar26) - fVar31 * fVar29) + fVar29 * pfVar11[-5]
                   ) / fVar29;
          if ((((0.0 <= fVar29) && (0.0 <= fVar25)) && (fVar25 <= 1.0)) &&
             (fVar29 = fVar31 + fVar29, fVar29 < local_100)) {
            uVar20 = uVar4 & 0xffffffff;
            local_100 = fVar29;
            if (1.1920929e-07 <= fVar25) {
              uVar16 = uVar15;
              if (fVar25 <= 0.9999999) goto LAB_14081c652;
              uVar15 = uVar4 & 0xffffffff;
            }
            bVar6 = true;
            uVar16 = uVar15;
          }
        }
LAB_14081c652:
        fVar26 = pfVar11[-2];
        uVar15 = (longlong)(int)uVar12 % (longlong)iVar2;
        fVar29 = *(float *)(lVar8 + 4 + (longlong)(int)uVar15 * 8) - fVar26;
        fVar21 = *(float *)(lVar8 + (longlong)(int)uVar15 * 8) - pfVar11[-3];
        if (0.0 < fVar29) {
          fVar25 = (fVar26 - local_fc) * (-1.0 / fVar29);
          fVar29 = (((local_fc * fVar21 - fVar21 * fVar26) - fVar31 * fVar29) + fVar29 * pfVar11[-3]
                   ) / fVar29;
          if (((0.0 <= fVar29) && (0.0 <= fVar25)) &&
             ((fVar25 <= 1.0 && (fVar29 = fVar31 + fVar29, fVar29 < local_100)))) {
            uVar16 = (ulonglong)(uVar12 - 1);
            uVar20 = uVar15 & 0xffffffff;
            local_100 = fVar29;
            if (1.1920929e-07 <= fVar25) {
              if (fVar25 <= 0.9999999) goto LAB_14081c6f4;
              uVar16 = uVar15 & 0xffffffff;
            }
            bVar6 = true;
          }
        }
LAB_14081c6f4:
        fVar26 = *pfVar11;
        uVar15 = (longlong)(int)(uVar12 + 1) % (longlong)iVar2;
        fVar29 = *(float *)(lVar8 + 4 + (longlong)(int)uVar15 * 8) - fVar26;
        fVar21 = *(float *)(lVar8 + (longlong)(int)uVar15 * 8) - pfVar11[-1];
        if (0.0 < fVar29) {
          fVar25 = (fVar26 - local_fc) * (-1.0 / fVar29);
          fVar29 = (((local_fc * fVar21 - fVar21 * fVar26) - fVar31 * fVar29) + pfVar11[-1] * fVar29
                   ) / fVar29;
          if (((0.0 <= fVar29) && (0.0 <= fVar25)) &&
             ((fVar25 <= 1.0 && (fVar29 = fVar31 + fVar29, fVar29 < local_100)))) {
            uVar16 = (ulonglong)uVar12;
            uVar20 = uVar15 & 0xffffffff;
            local_100 = fVar29;
            if (1.1920929e-07 <= fVar25) {
              if (fVar25 <= 0.9999999) goto LAB_14081c792;
              uVar16 = uVar15 & 0xffffffff;
            }
            bVar6 = true;
          }
        }
LAB_14081c792:
        fVar26 = pfVar11[2];
        uVar15 = (longlong)(int)(uVar12 + 2) % (longlong)iVar2;
        fVar29 = *(float *)(lVar8 + 4 + (longlong)(int)uVar15 * 8) - fVar26;
        fVar21 = *(float *)(lVar8 + (longlong)(int)uVar15 * 8) - pfVar11[1];
        if (0.0 < fVar29) {
          fVar25 = (fVar26 - local_fc) * (-1.0 / fVar29);
          fVar29 = (((local_fc * fVar21 - fVar21 * fVar26) - fVar31 * fVar29) + fVar29 * pfVar11[1])
                   / fVar29;
          if ((((0.0 <= fVar29) && (0.0 <= fVar25)) && (fVar25 <= 1.0)) &&
             (fVar29 = fVar31 + fVar29, fVar29 < local_100)) {
            uVar16 = (ulonglong)(uVar12 + 1);
            uVar20 = uVar15 & 0xffffffff;
            local_100 = fVar29;
            if (1.1920929e-07 <= fVar25) {
              if (fVar25 <= 0.9999999) goto LAB_14081c835;
              uVar16 = uVar15 & 0xffffffff;
            }
            bVar6 = true;
          }
        }
LAB_14081c835:
        pfVar11 = pfVar11 + 8;
        uVar19 = iVar18 + 4;
        uVar15 = (ulonglong)uVar19;
        uVar12 = uVar12 + 4;
      } while ((int)uVar19 < iVar2 + -3);
    }
    iVar18 = (int)uVar20;
    if ((int)uVar15 < iVar2) {
      lVar8 = *param_1;
      pfVar11 = (float *)(lVar8 + (longlong)(int)uVar15 * 8);
      do {
        fVar26 = pfVar11[1];
        uVar12 = (int)uVar15 + 1;
        uVar4 = (longlong)(int)uVar12 % (longlong)iVar2;
        fVar29 = *(float *)(lVar8 + 4 + (longlong)(int)uVar4 * 8) - fVar26;
        fVar21 = *(float *)(lVar8 + (longlong)(int)uVar4 * 8) - *pfVar11;
        if (0.0 < fVar29) {
          fVar21 = (((local_fc * fVar21 - fVar26 * fVar21) - fVar31 * fVar29) + fVar29 * *pfVar11) /
                   fVar29;
          fVar26 = (fVar26 - local_fc) * (-1.0 / fVar29);
          if (((0.0 <= fVar21) && (0.0 <= fVar26)) &&
             ((fVar26 <= 1.0 && (fVar21 = fVar31 + fVar21, fVar21 < local_100)))) {
            uVar20 = uVar4 & 0xffffffff;
            local_100 = fVar21;
            if (1.1920929e-07 <= fVar26) {
              uVar16 = uVar15;
              if (fVar26 <= 0.9999999) goto LAB_14081c90f;
              uVar15 = uVar4 & 0xffffffff;
            }
            bVar6 = true;
            uVar16 = uVar15;
          }
        }
LAB_14081c90f:
        iVar18 = (int)uVar20;
        pfVar11 = pfVar11 + 2;
        uVar15 = (ulonglong)uVar12;
      } while ((int)uVar12 < iVar2);
    }
    if (bVar6) {
      JoinSubtractiveToAdditive(param_1,param_2,uVar16,uVar7);
    }
    else {
      pfVar11 = (float *)*param_1;
      fVar26 = 0.0;
      if (pfVar11[(longlong)iVar18 * 2] < pfVar11[(longlong)(int)uVar16 * 2]) {
        iVar18 = (int)uVar16;
      }
      local_f8[0] = *(undefined8 *)(pfVar11 + (longlong)iVar18 * 2);
      pfVar9 = &local_100;
      pfVar5 = (float *)local_f8;
      if (local_fc <= (float)((ulonglong)*(undefined8 *)(pfVar11 + (longlong)iVar18 * 2) >> 0x20)) {
        pfVar9 = (float *)local_f8;
        pfVar5 = &local_100;
      }
      uVar20 = 0xffffffff;
      iVar13 = -1;
      fVar21 = *pfVar9;
      fVar29 = pfVar9[1];
      uVar16 = uVar17;
      fVar25 = fVar29;
      fVar22 = fVar21;
      if (0 < iVar2) {
        do {
          fVar24 = fVar25;
          fVar23 = fVar22;
          if (uVar17 != (longlong)iVar18) {
            fVar1 = pfVar11[1];
            fVar32 = *pfVar11;
            fVar27 = fVar1 - local_fc;
            fVar33 = fVar32 - *pfVar5;
            fVar28 = fVar32 - fVar31;
            fVar30 = fVar1 - pfVar5[1];
            fVar24 = fVar29;
            fVar23 = fVar21;
            if (((0.0 < (*pfVar5 - fVar31) * fVar27 -
                        (pfVar5[1] - pfVar3[(longlong)(int)uVar7 * 2 + 1]) * fVar28) &&
                (0.0 < fVar28 * (fVar25 - local_fc) - fVar27 * (fVar22 - fVar31))) &&
               ((0.0 < fVar30 * (fVar22 - *pfVar5) - fVar33 * (fVar25 - pfVar5[1]) &&
                ((fVar25 = fVar27 * fVar27 + fVar28 * fVar28, 2.0 <= fVar25 &&
                 (2.0 <= fVar30 * fVar30 + fVar33 * fVar33)))))) {
              fVar24 = pfVar9[1];
              fVar32 = fVar32 - *pfVar9;
              fVar23 = *pfVar9;
              if ((2.0 <= (fVar1 - fVar24) * (fVar1 - fVar24) + fVar32 * fVar32) &&
                 ((fVar28 = fVar28 / SQRT(fVar25), fVar26 < fVar28 ||
                  ((fVar23 = fVar21, fVar28 == fVar26 && (fVar25 < local_104)))))) {
                uVar20 = uVar16;
                fVar26 = fVar28;
                local_104 = fVar25;
                fVar23 = fVar21;
              }
            }
          }
          iVar13 = (int)uVar20;
          uVar12 = (int)uVar16 + 1;
          uVar17 = uVar17 + 1;
          pfVar11 = pfVar11 + 2;
          uVar16 = (ulonglong)uVar12;
          fVar25 = fVar24;
          fVar22 = fVar23;
        } while ((int)uVar12 < iVar2);
      }
      if (iVar13 == -1) {
        iVar13 = iVar18;
      }
      JoinSubtractiveToAdditive(param_1,param_2,iVar13,uVar7);
    }
  }
  return;
}



// FUNCTION 14081cc00 JoinSubtractiveToAdditive body=599 status=ok
// SIG undefined JoinSubtractiveToAdditive(void)

void JoinSubtractiveToAdditive(void **param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Src;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int local_res8;
  longlong local_68;
  void *local_48;
  int local_40;
  int local_3c;
  
  _Src = (void *)0x0;
  iVar9 = 0;
  lVar10 = (longlong)param_4;
  local_48 = (void *)0x0;
  local_3c = 0;
  local_res8 = 0;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 1)) {
    local_68 = 0;
    local_40 = 0;
    do {
      pvVar3 = *param_1;
      lVar5 = (longlong)local_40;
      iVar7 = local_40 + 1;
      if (iVar9 < iVar7) {
        iVar9 = local_40;
        local_40 = iVar7;
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,iVar9);
        _Src = local_48;
        iVar9 = local_3c;
        iVar7 = local_40;
      }
      local_40 = iVar7;
      *(undefined8 *)((longlong)_Src + lVar5 * 8) = *(undefined8 *)(local_68 * 8 + (longlong)pvVar3)
      ;
      if (local_68 == param_3) {
        if (param_4 < (int)param_2[1]) {
          lVar5 = lVar10 * 8;
          iVar7 = param_4;
          do {
            lVar4 = *param_2;
            lVar6 = (longlong)local_40;
            iVar8 = local_40 + 1;
            if (iVar9 < iVar8) {
              iVar9 = local_40;
              local_40 = iVar8;
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,iVar9);
              _Src = local_48;
              iVar9 = local_3c;
              iVar8 = local_40;
            }
            local_40 = iVar8;
            puVar2 = (undefined8 *)(lVar4 + lVar5);
            iVar7 = iVar7 + 1;
            lVar5 = lVar5 + 8;
            *(undefined8 *)((longlong)_Src + lVar6 * 8) = *puVar2;
          } while (iVar7 < (int)param_2[1]);
        }
        lVar5 = 0;
        if (-1 < lVar10) {
          do {
            lVar4 = *param_2;
            lVar6 = (longlong)local_40;
            iVar7 = local_40 + 1;
            if (iVar9 < iVar7) {
              iVar9 = local_40;
              local_40 = iVar7;
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,iVar9);
              _Src = local_48;
              iVar9 = local_3c;
              iVar7 = local_40;
            }
            local_40 = iVar7;
            lVar1 = lVar5 * 8;
            lVar5 = lVar5 + 1;
            *(undefined8 *)((longlong)_Src + lVar6 * 8) = *(undefined8 *)(lVar4 + lVar1);
          } while (lVar5 <= lVar10);
        }
        pvVar3 = *param_1;
        lVar5 = (longlong)local_40;
        iVar7 = local_40 + 1;
        if (iVar9 < iVar7) {
          iVar9 = local_40;
          local_40 = iVar7;
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,iVar9);
          _Src = local_48;
          iVar9 = local_3c;
          iVar7 = local_40;
        }
        local_40 = iVar7;
        *(undefined8 *)((longlong)_Src + lVar5 * 8) =
             *(undefined8 *)(local_68 * 8 + (longlong)pvVar3);
      }
      local_68 = local_68 + 1;
      local_res8 = local_res8 + 1;
      iVar7 = local_40;
    } while (local_res8 < *(int *)(param_1 + 1));
  }
  if (param_1 != &local_48) {
    *(int *)(param_1 + 1) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1,iVar7);
      _guard_xfg_dispatch_icall_nop(*param_1,_Src,(longlong)iVar7 << 3);
    }
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 14081ce60 FUN_14081ce60 body=640 status=ok
// SIG undefined FUN_14081ce60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14081ce60(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uStackX_14;
  longlong *local_170;
  undefined **local_168;
  float local_160;
  float local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  byte local_e8;
  longlong *local_d8 [2];
  float local_c8;
  float local_c4;
  undefined **local_c0 [8];
  longlong *local_80;
  longlong *local_48;
  
  if (param_2 == 0) {
    uVar6 = FSlateNoResource::FSlateNoResource(local_c0,&DAT_1468b5d88);
    FUN_14080bc50(param_1,uVar6);
    local_c0[0] = &PTR__scalar_deleting_destructor__143f489a8;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_80 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  else {
    (**(code **)(*(longlong *)(param_2 + 0x30) + 0x10))((longlong *)(param_2 + 0x30),local_d8);
    if (local_d8[0] == (longlong *)0x0) {
      fVar8 = 0.0;
      fVar7 = 0.0;
    }
    else {
      fVar7 = (float)(**(code **)(*local_d8[0] + 0x2b8))();
      fVar7 = fVar7 * local_c4;
      fVar8 = (float)(**(code **)(*local_d8[0] + 0x2b0))();
      fVar8 = fVar8 * local_c8;
    }
    local_e8 = local_e8 & 0xfc;
    local_168 = &PTR__scalar_deleting_destructor__143f489a8;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = _DAT_1464aa6c0;
    uStack_140 = _DAT_1464aa6c8;
    uStackX_14 = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
    local_104 = uStackX_14;
    local_10c = uStackX_14;
    local_110 = (undefined4)DAT_1468b5d88;
    local_160 = 32.0;
    local_15c = 32.0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    local_118 = 0;
    local_100 = 0;
    local_fc = 3;
    local_f0 = 0;
    local_170 = (longlong *)0x0;
    local_f8 = 0;
    local_120 = param_2;
    local_108 = local_110;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_f0,&local_170);
    plVar3 = local_170;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_170 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
    if (0 < param_3) {
      fVar8 = (float)param_3;
    }
    if (0 < param_4) {
      fVar7 = (float)param_4;
    }
    local_160 = (float)(int)fVar8;
    local_15c = (float)(int)fVar7;
    FUN_14080bc50(param_1,&local_168);
    FSlateBrush::~FSlateBrush(&local_168);
  }
  return param_1;
}



// FUNCTION 14081d0e0 MakeTile body=106 status=ok
// SIG undefined MakeTile(void)

longlong *
UTileMapBlueprintLibrary::MakeTile
          (longlong *param_1,uint param_2,longlong param_3,char param_4,char param_5,char param_6)

{
  *param_1 = param_3;
  *(uint *)(param_1 + 1) = param_2;
  if (param_3 != 0) {
    if (param_2 != 0xffffffff) {
      if (param_4 == '\0') {
        param_2 = param_2 & 0x7fffffff;
      }
      else {
        param_2 = param_2 | 0x80000000;
      }
      *(uint *)(param_1 + 1) = param_2;
    }
    if (param_3 != 0) {
      if (param_2 != 0xffffffff) {
        if (param_5 == '\0') {
          param_2 = param_2 & 0xbfffffff;
        }
        else {
          param_2 = param_2 | 0x40000000;
        }
        *(uint *)(param_1 + 1) = param_2;
      }
      if ((param_3 != 0) && (param_2 != 0xffffffff)) {
        if (param_6 != '\0') {
          *(uint *)(param_1 + 1) = param_2 | 0x20000000;
          return param_1;
        }
        *(uint *)(param_1 + 1) = param_2 & 0xdfffffff;
        return param_1;
      }
    }
  }
  return param_1;
}



// FUNCTION 14081d150 FUN_14081d150 body=95 status=ok
// SIG undefined FUN_14081d150(void)

void FUN_14081d150(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[0xec];
  if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x20) != param_1)) {
    uVar2 = FUN_1417987a0(lVar1,param_1,0,0xefffffff,0,0,0xff800000);
                    /* WARNING: Could not recover jumptable at 0x00014081d1a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x928))(param_1,uVar2);
    return;
  }
  return;
}



// FUNCTION 14081d1b0 MergeTriangleIntoPolygon body=836 status=ok
// SIG undefined MergeTriangleIntoPolygon(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
MergeTriangleIntoPolygon
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          char param_5)

{
  undefined8 *_Src;
  void *_Src_00;
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  void *pvVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_e8 [40];
  void *local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b0 = 0;
  local_a0 = *param_2;
  iVar7 = *(int *)(param_1 + 1);
  local_98 = *param_3;
  local_90 = *param_4;
  if (0 < iVar7) {
    do {
      uVar2 = (longlong)(local_b0 + 1) % (longlong)iVar7;
      lVar9 = (longlong)local_b0;
      uVar12 = 0;
      iVar7 = (int)uVar2;
      lVar11 = (longlong)iVar7;
      local_b0 = local_b0 + 1;
      local_a8 = lVar9;
      do {
        _Src_00 = (void *)*param_1;
        iVar3 = (int)uVar12;
        uVar5 = (ulonglong)((iVar3 + 1U) % 3);
        if ((((ABS(*(float *)((longlong)_Src_00 + lVar9 * 8) - *(float *)(&local_a0 + uVar5)) <=
               2e-05) &&
             (ABS(*(float *)((longlong)_Src_00 + lVar9 * 8 + 4) -
                  *(float *)((longlong)&local_a0 + uVar5 * 8 + 4)) <= 2e-05)) &&
            (ABS(*(float *)((longlong)_Src_00 + lVar11 * 8) - *(float *)(&local_a0 + uVar12)) <=
             2e-05)) &&
           (ABS(*(float *)((longlong)_Src_00 + lVar11 * 8 + 4) -
                *(float *)((longlong)&local_a0 + uVar12 * 8 + 4)) <= 2e-05)) {
          if (param_5 == '\0') {
LAB_14081d4c5:
            FUN_14081ba30(param_1,&local_a0 + (int)((iVar3 + 2U) % 3),uVar2 & 0xffffffff);
            return 1;
          }
          local_b8 = *(int *)(param_1 + 1);
          lVar9 = (longlong)local_b8;
          pvVar8 = (void *)0x0;
          local_c0 = (void *)0x0;
          if (local_b8 == 0) {
            local_b4 = 0;
            iVar10 = local_b8;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (&local_c0,local_b8,0);
            pvVar8 = local_c0;
            _guard_xfg_dispatch_icall_nop(local_c0,_Src_00,lVar9 << 3);
            iVar10 = local_b8;
          }
          local_b8 = iVar10 + 1;
          if (local_b4 < local_b8) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_c0,iVar10);
            pvVar8 = local_c0;
          }
          iVar4 = local_b8;
          _Src = (undefined8 *)((longlong)pvVar8 + lVar11 * 8);
          _guard_xfg_dispatch_icall_nop(_Src + 1,_Src,(longlong)(iVar10 - iVar7) << 3);
          lVar9 = 0;
          *_Src = (&local_a0)[(int)((iVar3 + 2U) % 3)];
          if (0 < iVar4) {
            iVar10 = 2;
            fVar14 = 0.0;
            do {
              lVar6 = (longlong)((iVar10 + -1) % iVar4);
              fVar15 = *(float *)((longlong)pvVar8 + lVar6 * 8);
              fVar13 = *(float *)((longlong)pvVar8 + lVar6 * 8 + 4);
              fVar15 = (fVar15 - *(float *)((longlong)pvVar8 + lVar9 * 8)) *
                       (*(float *)((longlong)pvVar8 + (longlong)(iVar10 % iVar4) * 8 + 4) - fVar13)
                       - (fVar13 - *(float *)((longlong)pvVar8 + lVar9 * 8 + 4)) *
                         (*(float *)((longlong)pvVar8 + (longlong)(iVar10 % iVar4) * 8) - fVar15);
              if (fVar15 <= 0.0) {
                fVar13 = fVar14;
                if (fVar15 < 0.0) {
                  fVar13 = -1.0;
                  goto LAB_14081d421;
                }
              }
              else {
                fVar13 = 1.0;
LAB_14081d421:
                if ((fVar14 != 0.0) && (bVar1 = fVar14 != fVar13, fVar13 = fVar14, bVar1)) {
                  bVar1 = false;
                  goto LAB_14081d441;
                }
              }
              iVar10 = iVar10 + 1;
              lVar9 = lVar9 + 1;
              fVar14 = fVar13;
            } while (lVar9 < iVar4);
          }
          bVar1 = true;
LAB_14081d441:
          if (pvVar8 != (void *)0x0) {
            FMemory::Free(pvVar8);
          }
          lVar9 = local_a8;
          if (bVar1) goto LAB_14081d4c5;
        }
        uVar12 = (ulonglong)(iVar3 + 1U);
      } while (iVar3 + 1U < 3);
      iVar7 = *(int *)(param_1 + 1);
    } while (local_b0 < iVar7);
  }
  return 0;
}



// FUNCTION 14081d500 FUN_14081d500 body=27 status=ok
// SIG undefined FUN_14081d500(void)

void FUN_14081d500(undefined8 param_1)

{
  FUN_140811110();
  FUN_1423437b0(param_1);
  return;
}



// FUNCTION 14081d520 FUN_14081d520 body=27 status=ok
// SIG undefined FUN_14081d520(void)

void FUN_14081d520(undefined8 param_1)

{
  UActorComponent::OnDestroyPhysicsState();
  FUN_140810af0(param_1);
  return;
}



// FUNCTION 14081d540 FUN_14081d540 body=288 status=ok
// SIG undefined FUN_14081d540(void)

void FUN_14081d540(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_1423937b0();
  if (*(longlong *)(param_1 + 0x700) != 0) {
    local_18 = FUN_14081d690;
    uStack_10 = 0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_18._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_10;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    lVar3 = *(longlong *)(param_1 + 0x700);
    plVar5 = (longlong *)(lVar3 + 0x7d8);
    if (&local_18 != plVar5) {
      if (plVar2 == (longlong *)0x0) {
        if ((*(int *)(lVar3 + 0x7e0) != 0) &&
           (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar5 != 0) {
            lVar4 = FMemory::Realloc(*plVar5,0,0);
            *plVar5 = lVar4;
          }
          *(undefined4 *)(lVar3 + 0x7e0) = 0;
        }
      }
      else {
        (**(code **)(*plVar2 + 0x30))(plVar2,plVar5);
      }
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar3 = FMemory::Realloc(plVar2,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
  }
  FUN_14081d690(param_1);
  return;
}



// FUNCTION 14081d660 FUN_14081d660 body=37 status=ok
// SIG undefined FUN_14081d660(void)

void FUN_14081d660(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0xe3];
  if (param_2 != lVar1) {
    param_1[0xe3] = 0;
                    /* WARNING: Could not recover jumptable at 0x00014081d67d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x928))(param_1,lVar1);
    return;
  }
  return;
}



// FUNCTION 14081d690 FUN_14081d690 body=4289 status=ok
// SIG undefined FUN_14081d690(void)

void FUN_14081d690(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  longlong *plVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  float *pfVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
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
  char local_res10 [8];
  undefined8 *local_res18;
  uint local_res20 [2];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 *local_158;
  undefined8 local_150;
  float *local_148;
  undefined8 *local_140;
  ulonglong local_138;
  float *local_130;
  ulonglong local_128;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  uint local_108;
  longlong local_100;
  
  FUN_140810c00();
  pfVar17 = (float *)0x0;
  pfVar6 = pfVar17;
  if (*(char *)(param_1 + 0x724) == '\x02') {
    pfVar6 = (float *)FUN_14080a7b0(param_1);
  }
  *(float **)(param_1 + 0x730) = pfVar6;
  lVar15 = *(longlong *)(param_1 + 0x738);
  for (iVar19 = *(int *)(param_1 + 0x740); iVar19 != 0; iVar19 = iVar19 + -1) {
    TArray<FSpriteDrawCallRecord,FDefaultAllocator>::
    ~TArray<FSpriteDrawCallRecord,FDefaultAllocator>(lVar15);
    lVar15 = lVar15 + 0x20;
  }
  *(undefined4 *)(param_1 + 0x740) = 0;
  if (*(int *)(param_1 + 0x744) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x738,0);
  }
  lVar15 = *(longlong *)(param_1 + 0x700);
  if ((lVar15 != 0) && (*(longlong *)(param_1 + 0x6f0) != 0)) {
    if (*(int *)(lVar15 + 0x7b4) != *(int *)(param_1 + 0x720)) {
      *(int *)(lVar15 + 0x7b4) = *(int *)(param_1 + 0x720);
      FUN_1423c1a10(*(undefined8 *)(param_1 + 0x700));
      lVar15 = *(longlong *)(param_1 + 0x700);
    }
    local_res20[0] = *(uint *)(param_1 + 0x708);
    fVar26 = (float)FUN_1423b1370(lVar15);
    local_168 = (float *)0x0;
    local_res18 = (undefined8 *)CONCAT44(local_res18._4_4_,fVar26);
    local_160 = 1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(&local_168,0);
    if (local_168 != (float *)0x0) {
      local_168[2] = 0.0;
      local_168[3] = 0.0;
      local_168[4] = 0.0;
      local_168[5] = 0.0;
      local_168[6] = 0.0;
      local_168[7] = 0.0;
      pfVar17 = local_168;
    }
    *pfVar17 = 0.0;
    fVar36 = 0.0;
    pfVar17[1] = fVar26;
    pfVar6 = local_168;
    iVar19 = (int)(float)local_160;
    if (0.0 < fVar26) {
      do {
        lVar15 = 0;
        FUN_14081a170(param_1,&local_118,fVar36);
        fVar26 = fStack_114 * 0.0 - fStack_110 * 0.0;
        fVar31 = fStack_110 * 1.0 - local_118 * 0.0;
        fVar32 = local_118 * 0.0 - fStack_114 * 1.0;
        fVar26 = fVar26 + fVar26;
        fVar31 = fVar31 + fVar31;
        fVar32 = fVar32 + fVar32;
        fVar34 = (fVar32 * fStack_114 - fVar31 * fStack_110) + fStack_10c * fVar26 + 1.0;
        fVar35 = (fVar26 * fStack_110 - fVar32 * local_118) + fStack_10c * fVar31 + 0.0;
        fVar26 = (fVar31 * local_118 - fVar26 * fStack_114) + fStack_10c * fVar32 + 0.0;
        fVar26 = (float)FGenericPlatformMath::Atan2
                                  (CONCAT44(fVar35,fVar35 * DAT_146267234 + fVar34 * DAT_146267230 +
                                                   fVar26 * DAT_146267238),
                                   fVar35 * DAT_146267224 + fVar34 * DAT_146267220 +
                                   fVar26 * DAT_146267228);
        for (fVar26 = fVar26 * 57.295776; 180.0 < fVar26; fVar26 = fVar26 + -360.0) {
        }
        for (; fVar26 < -180.0; fVar26 = fVar26 + 360.0) {
        }
        fVar26 = fVar26 + 360.0;
        fVar31 = (float)(int)(fVar26 * 0.0027777778) * 360.0;
        if (ABS(fVar26) < ABS(fVar31)) {
          fVar31 = fVar26;
        }
        lVar13 = *(longlong *)(param_1 + 0x6f0);
        if (0 < *(int *)(lVar13 + 0x38)) {
          lVar15 = *(longlong *)(lVar13 + 0x30);
        }
        lVar11 = *(longlong *)(lVar13 + 0x30);
        lVar13 = (longlong)*(int *)(lVar13 + 0x38) * 0x38 + lVar11;
        for (; lVar11 != lVar13; lVar11 = lVar11 + 0x38) {
          if ((*(float *)(lVar11 + 0x20) <= fVar26 - fVar31) &&
             (fVar26 - fVar31 < *(float *)(lVar11 + 0x24))) {
            lVar15 = lVar11;
          }
        }
        if (*(longlong *)(pfVar17 + 2) == lVar15) {
LAB_14081da1d:
        }
        else {
          if (*(longlong *)(pfVar17 + 2) == 0) {
            *(longlong *)(pfVar17 + 2) = lVar15;
            goto LAB_14081da1d;
          }
          pfVar17[1] = fVar36;
          iVar9 = iVar19;
          if (fVar36 < *(float *)(param_1 + 0x70c) + *(float *)(param_1 + 0x70c) + *pfVar17) {
            iVar9 = iVar19 + -1;
            lVar11 = (longlong)iVar9;
            lVar13 = *(longlong *)(pfVar6 + lVar11 * 8 + 4);
            (pfVar6 + lVar11 * 8 + 4)[0] = 0.0;
            (pfVar6 + lVar11 * 8 + 4)[1] = 0.0;
            (pfVar6 + lVar11 * 8 + 6)[0] = 0.0;
            (pfVar6 + lVar11 * 8 + 6)[1] = 0.0;
            if (*(longlong *)(pfVar6 + lVar11 * 8 + 4) != 0) {
              FMemory::Free();
            }
            iVar18 = (iVar19 - iVar9) + -1;
            if (iVar18 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (pfVar6 + lVar11 * 8,pfVar6 + (longlong)iVar19 * 8,(longlong)iVar18 << 5);
            }
            if (lVar13 != 0) {
              FMemory::Free(lVar13);
            }
          }
          pfVar17 = (float *)0x0;
          iVar19 = iVar9 + 1;
          local_160 = CONCAT44(local_160._4_4_,iVar19);
          if (local_160._4_4_ < iVar19) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(&local_168,iVar9);
            pfVar6 = local_168;
            iVar19 = (int)(float)local_160;
          }
          pfVar25 = pfVar6 + (longlong)iVar9 * 8;
          if (pfVar25 != (float *)0x0) {
            pfVar25[4] = 0.0;
            pfVar25[5] = 0.0;
            pfVar25[6] = 0.0;
            pfVar25[7] = 0.0;
            pfVar17 = pfVar25;
          }
          pfVar17[1] = local_res18._0_4_;
          *pfVar17 = fVar36;
          *(longlong *)(pfVar17 + 2) = lVar15;
        }
        fVar36 = fVar36 + 10.0;
      } while (fVar36 < local_res18._0_4_);
      fVar26 = local_res18._0_4_;
    }
    local_148 = pfVar6 + (longlong)iVar19 * 8;
    for (pfVar17 = pfVar6; pfVar17 != local_148; pfVar17 = pfVar17 + 8) {
      *pfVar17 = *pfVar17 - *(float *)(param_1 + 0x70c);
      pfVar17[1] = *(float *)(param_1 + 0x70c) + pfVar17[1];
    }
    if (pfVar6 != local_148) {
      pfVar6 = pfVar6 + 6;
      do {
        `UPaperTerrainComponent::OnSplineEdited'::`10'::FTerrainRuleHelper::FTerrainRuleHelper();
        uVar2 = local_108;
        fVar32 = fStack_114;
        fVar31 = local_118;
        fVar36 = local_118 + pfVar6[-6];
        fVar34 = (pfVar6[-5] - fStack_114) - fVar36;
        if ((fVar34 <= 0.0) || ((int)local_108 < 1)) {
          cVar3 = '\0';
        }
        else {
          cVar3 = '\x01';
        }
        local_res10[0] = cVar3;
        if (0.0 < local_118) {
          fVar35 = *pfVar6;
          fVar4 = (float)((int)fVar35 + 1);
          *pfVar6 = fVar4;
          if ((int)pfVar6[1] < (int)fVar4) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(pfVar6 + -2);
          }
          lVar15 = *(longlong *)(pfVar6 + -2) + (longlong)(int)fVar35 * 0x18;
          if (lVar15 != 0) {
            FTerrainSpriteStamp::FTerrainSpriteStamp
                      (lVar15,**(undefined8 **)(pfVar6 + -4),fVar31 * 0.5 + pfVar6[-6],cVar3);
          }
        }
        lVar13 = local_100;
        lVar15 = CONCAT44(fStack_10c,fStack_110);
        if (cVar3 != '\0') {
          iVar19 = 0;
          for (fVar31 = fVar34; 0.0 < fVar31; fVar31 = fVar31 - fVar35) {
            local_res20[0] = local_res20[0] * 0xbb38435 + 0x3619636b;
            lVar11 = *(longlong *)(lVar15 + (longlong)(int)(local_res20[0] % uVar2) * 8);
            fVar35 = *(float *)(lVar13 + (longlong)(int)(local_res20[0] % uVar2) * 4);
            if ((0 < iVar19) && (cVar3 = local_res10[0], fVar31 < fVar35 * 0.5)) break;
            fVar4 = *pfVar6;
            fVar5 = (float)((int)fVar4 + 1);
            *pfVar6 = fVar5;
            if ((int)pfVar6[1] < (int)fVar5) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(pfVar6 + -2);
            }
            plVar16 = (longlong *)(*(longlong *)(pfVar6 + -2) + (longlong)(int)fVar4 * 0x18);
            if (plVar16 != (longlong *)0x0) {
              *plVar16 = lVar11;
              *(undefined4 *)(plVar16 + 2) = 0x3f800000;
              bVar1 = false;
              *(undefined1 *)((longlong)plVar16 + 0x14) = 1;
              *(float *)((longlong)plVar16 + 0xc) = fVar35 * 0.5 + fVar36;
              pfVar17 = *(float **)(lVar11 + 0xb0);
              pfVar25 = pfVar17 + (longlong)*(int *)(lVar11 + 0xb8) * 4;
              fVar4 = (float)DAT_1468b5d88;
              fVar5 = (float)DAT_1468b5d88;
              fVar37 = DAT_1468b5d88._4_4_;
              fVar38 = DAT_1468b5d88._4_4_;
              for (; pfVar17 != pfVar25; pfVar17 = pfVar17 + 4) {
                fVar29 = pfVar17[1];
                fVar27 = *pfVar17;
                fVar30 = fVar29;
                fVar33 = fVar27;
                if (bVar1) {
                  if (fVar4 <= fVar27) {
                    fVar33 = fVar4;
                  }
                  if (fVar38 <= fVar29) {
                    fVar30 = fVar38;
                  }
                  if (fVar27 <= fVar5) {
                    fVar27 = fVar5;
                  }
                  if (fVar29 <= fVar37) {
                    fVar29 = fVar37;
                  }
                }
                else {
                  bVar1 = true;
                }
                fVar4 = fVar33;
                fVar5 = fVar27;
                fVar37 = fVar29;
                fVar38 = fVar30;
              }
              fVar5 = fVar5 - fVar4;
              if (fVar5 <= 1.0) {
                fVar5 = 1.0;
              }
              *(float *)(plVar16 + 1) = fVar5;
            }
            iVar19 = iVar19 + 1;
            fVar36 = fVar36 + fVar35;
            cVar3 = local_res10[0];
          }
          iVar9 = 0;
          fVar36 = 0.0;
          fVar34 = fVar34 / (fVar34 - fVar31);
          if (3 < iVar19) {
            fVar31 = fVar34 - 1.0;
            do {
              lVar7 = (longlong)((iVar9 - iVar19) + (int)*pfVar6);
              lVar11 = *(longlong *)(pfVar6 + -2);
              if (iVar9 == 0) {
                fVar35 = 0.5;
              }
              else {
                fVar35 = 1.0;
              }
              *(float *)(lVar11 + 0x10 + lVar7 * 0x18) = fVar34;
              fVar36 = fVar36 + fVar35 * fVar31 * *(float *)(lVar11 + 8 + lVar7 * 0x18);
              *(float *)(lVar11 + 0xc + lVar7 * 0x18) =
                   fVar36 + *(float *)(lVar11 + 0xc + lVar7 * 0x18);
              lVar11 = *(longlong *)(pfVar6 + -2);
              lVar7 = (longlong)((iVar9 - iVar19) + (int)*pfVar6) + 1;
              if (iVar9 == -1) {
                fVar35 = 0.5;
              }
              else {
                fVar35 = 1.0;
              }
              *(float *)(lVar11 + 0x10 + lVar7 * 0x18) = fVar34;
              fVar36 = fVar36 + fVar35 * fVar31 * *(float *)(lVar11 + 8 + lVar7 * 0x18);
              *(float *)(lVar11 + 0xc + lVar7 * 0x18) =
                   fVar36 + *(float *)(lVar11 + 0xc + lVar7 * 0x18);
              lVar11 = *(longlong *)(pfVar6 + -2);
              lVar7 = (longlong)((iVar9 - iVar19) + (int)*pfVar6) + 2;
              if (iVar9 == -2) {
                fVar35 = 0.5;
              }
              else {
                fVar35 = 1.0;
              }
              *(float *)(lVar11 + 0x10 + lVar7 * 0x18) = fVar34;
              fVar36 = fVar36 + fVar35 * fVar31 * *(float *)(lVar11 + 8 + lVar7 * 0x18);
              *(float *)(lVar11 + 0xc + lVar7 * 0x18) =
                   fVar36 + *(float *)(lVar11 + 0xc + lVar7 * 0x18);
              lVar11 = *(longlong *)(pfVar6 + -2);
              lVar7 = (longlong)((iVar9 - iVar19) + (int)*pfVar6) + 3;
              if (iVar9 == -3) {
                fVar35 = 0.5;
              }
              else {
                fVar35 = 1.0;
              }
              iVar9 = iVar9 + 4;
              *(float *)(lVar11 + 0x10 + lVar7 * 0x18) = fVar34;
              fVar36 = fVar36 + fVar35 * fVar31 * *(float *)(lVar11 + 8 + lVar7 * 0x18);
              *(float *)(lVar11 + 0xc + lVar7 * 0x18) =
                   fVar36 + *(float *)(lVar11 + 0xc + lVar7 * 0x18);
            } while (iVar9 < iVar19 + -3);
          }
          if (iVar9 < iVar19) {
            do {
              lVar7 = (longlong)((iVar9 - iVar19) + (int)*pfVar6);
              lVar11 = *(longlong *)(pfVar6 + -2);
              if (iVar9 == 0) {
                fVar31 = 0.5;
              }
              else {
                fVar31 = 1.0;
              }
              iVar9 = iVar9 + 1;
              *(float *)(lVar11 + 0x10 + lVar7 * 0x18) = fVar34;
              fVar36 = fVar36 + fVar31 * (fVar34 - 1.0) * *(float *)(lVar11 + 8 + lVar7 * 0x18);
              *(float *)(lVar11 + 0xc + lVar7 * 0x18) =
                   fVar36 + *(float *)(lVar11 + 0xc + lVar7 * 0x18);
            } while (iVar9 < iVar19);
          }
        }
        if (0.0 < fVar32) {
          fVar36 = *pfVar6;
          *pfVar6 = (float)((int)fVar36 + 1);
          if ((int)pfVar6[1] < (int)fVar36 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(pfVar6 + -2,fVar36);
          }
          lVar11 = *(longlong *)(pfVar6 + -2) + (longlong)(int)fVar36 * 0x18;
          if (lVar11 != 0) {
            FTerrainSpriteStamp::FTerrainSpriteStamp
                      (lVar11,*(undefined8 *)(*(longlong *)(pfVar6 + -4) + 0x18),
                       pfVar6[-5] - fVar32 * 0.5,cVar3);
          }
        }
        if (lVar13 != 0) {
          FMemory::Free(lVar13);
        }
        if (lVar15 != 0) {
          FMemory::Free(lVar15);
        }
        pfVar17 = pfVar6 + 2;
        pfVar6 = pfVar6 + 8;
      } while (pfVar17 != local_148);
    }
    puVar24 = (undefined8 *)0x0;
    if ((*(char *)(param_1 + 0x6f8) == '\0') || (*(char *)(param_1 + 0x6f9) == '\0')) {
      uVar20 = 1;
    }
    else {
      uVar20 = 0;
    }
    FUN_140824bd0(param_1,&local_168,uVar20);
    iVar19 = (int)(float)local_160;
    local_148 = local_168;
    if ((*(char *)(param_1 + 0x6f8) != '\0') && (*(char *)(param_1 + 0x6f9) != '\0')) {
      local_res10[0] = '\0';
      local_158 = (undefined8 *)0x0;
      local_150 = 0;
      local_140 = (undefined8 *)0x0;
      local_138 = 0;
      fVar36 = 0.0;
      if (0.0 < fVar26) {
        fVar26 = local_res18._0_4_;
        local_res20[0] = 0;
        puVar22 = puVar24;
        puVar12 = puVar24;
        fVar31 = DAT_1468b5d88._4_4_;
        fVar32 = (float)DAT_1468b5d88;
        fVar34 = DAT_1468b5d88._4_4_;
        fVar35 = (float)DAT_1468b5d88;
        iVar9 = 0;
        iVar18 = 0;
        do {
          local_res18 = (undefined8 *)CONCAT44(local_res18._4_4_,fVar31);
          lVar15 = *(longlong *)(param_1 + 0x700);
          uVar28 = FInterpCurve<float>::Eval(lVar15 + 0x738,fVar36,local_res20);
          FInterpCurve<FVector>::Eval(lVar15 + 0x6f0,&local_168,uVar28,&DAT_1468b5d90);
          fVar37 = (float)local_168 * DAT_146267220 + local_168._4_4_ * DAT_146267224 +
                   (float)local_160 * DAT_146267228;
          fVar38 = (float)local_168 * DAT_146267230 + local_168._4_4_ * DAT_146267234 +
                   (float)local_160 * DAT_146267238;
          fVar31 = fVar38;
          fVar4 = fVar37;
          fVar5 = fVar38;
          if (local_res10[0] == '\0') {
            local_res10[0] = '\x01';
            fVar35 = fVar37;
          }
          else {
            if (local_res18._0_4_ <= fVar38) {
              fVar31 = local_res18._0_4_;
            }
            if (fVar37 <= fVar35) {
              fVar35 = fVar37;
            }
            if (fVar37 <= fVar32) {
              fVar4 = fVar32;
            }
            if (fVar38 <= fVar34) {
              fVar5 = fVar34;
            }
          }
          iVar23 = iVar9 + 1;
          local_150 = CONCAT44(local_150._4_4_,iVar23);
          if (local_150._4_4_ < iVar23) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_158,iVar9);
            puVar12 = local_158;
            iVar23 = (int)local_150;
          }
          iVar10 = 0;
          *(float *)(puVar12 + iVar9) = fVar37;
          *(float *)((longlong)puVar12 + (longlong)iVar9 * 8 + 4) = fVar38;
          fVar32 = 0.0;
          pfVar6 = local_148;
          if (0 < iVar19) {
            do {
              if ((*pfVar6 <= fVar36) && (fVar36 < pfVar6[1] || fVar36 == pfVar6[1])) {
                if (*(longlong *)(pfVar6 + 2) == 0) {
                  fVar32 = 0.0;
                }
                else {
                  fVar32 = *(float *)(*(longlong *)(pfVar6 + 2) + 0x2c) * 0.25;
                }
                break;
              }
              iVar10 = iVar10 + 1;
              pfVar6 = pfVar6 + 8;
            } while (iVar10 < iVar19);
          }
          iVar10 = iVar18 + 1;
          local_138 = CONCAT44(local_138._4_4_,iVar10);
          if ((int)puVar22 < iVar10) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_140,iVar18);
            puVar22 = (undefined8 *)(local_138 >> 0x20);
            puVar24 = local_140;
            iVar10 = (int)local_138;
          }
          fVar36 = fVar36 + 100.0;
          *(float *)((longlong)puVar24 + (longlong)iVar18 * 4) = fVar32;
          fVar32 = fVar4;
          fVar34 = fVar5;
          iVar9 = iVar23;
          iVar18 = iVar10;
        } while (fVar36 < fVar26);
      }
      SimplifyPolygon(&local_158,&local_140,0x41200000);
      puVar24 = local_158;
      iVar9 = (int)local_150;
      uVar21 = local_150 & 0xffffffff;
      pfVar6 = (float *)0x0;
      iVar23 = 0;
      iVar18 = 0;
      local_168 = (float *)0x0;
      local_160 = 0;
      local_res18 = local_158;
      if (2 < (int)local_150) {
        cVar3 = PaperGeomTools::IsPolygonWindingCCW(&local_158);
        if (cVar3 == '\0') {
          iVar9 = iVar9 + -1;
          lVar15 = (longlong)iVar9;
          if (-1 < iVar9) {
            puVar24 = puVar24 + lVar15;
            do {
              iVar9 = iVar23 + 1;
              local_160 = CONCAT44(local_160._4_4_,iVar9);
              if (iVar18 < iVar9) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar23)
                ;
                pfVar6 = local_168;
                iVar18 = local_160._4_4_;
                iVar9 = (int)(float)local_160;
              }
              if (pfVar6 + (longlong)iVar23 * 2 != (float *)0x0) {
                *(undefined8 *)(pfVar6 + (longlong)iVar23 * 2) = *puVar24;
              }
              puVar24 = puVar24 + -1;
              lVar15 = lVar15 + -1;
              iVar23 = iVar9;
            } while (-1 < lVar15);
          }
        }
        else if (0 < iVar9) {
          do {
            iVar9 = iVar23 + 1;
            local_160 = CONCAT44(local_160._4_4_,iVar9);
            if (iVar18 < iVar9) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar23);
              pfVar6 = local_168;
              iVar18 = local_160._4_4_;
              iVar9 = (int)(float)local_160;
            }
            if (pfVar6 + (longlong)iVar23 * 2 != (float *)0x0) {
              *(undefined8 *)(pfVar6 + (longlong)iVar23 * 2) = *puVar24;
            }
            puVar24 = puVar24 + 1;
            uVar21 = uVar21 - 1;
            iVar23 = iVar9;
          } while (uVar21 != 0);
        }
      }
      local_130 = (float *)0x0;
      local_128 = 0;
      PaperGeomTools::TriangulatePoly(&local_130,&local_168,0);
      FUN_1408131e0(param_1,&local_158,&local_140,&local_130);
      pfVar17 = local_130;
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x40);
      if (lVar15 != 0) {
        iVar9 = *(int *)(param_1 + 0x740);
        *(int *)(param_1 + 0x740) = iVar9 + 1;
        if (*(int *)(param_1 + 0x744) < iVar9 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_1 + 0x738,iVar9);
        }
        plVar16 = (longlong *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x738));
        if (plVar16 == (longlong *)0x0) {
          plVar16 = (longlong *)0x0;
        }
        else {
          plVar16[2] = 0;
          plVar16[3] = 0;
          *plVar16 = 0;
          plVar16[1] = 0;
        }
        plVar16[2] = *(longlong *)(lVar15 + 0x78);
        iVar9 = (int)plVar16[1];
        *(int *)(plVar16 + 1) = iVar9 + 1;
        if (*(int *)((longlong)plVar16 + 0xc) < iVar9 + 1) {
          TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(plVar16,iVar9);
        }
        puVar24 = (undefined8 *)((longlong)iVar9 * 0xd0 + *plVar16);
        if (puVar24 == (undefined8 *)0x0) {
          puVar24 = (undefined8 *)0x0;
        }
        else {
          puVar24[2] = 0;
          puVar24[7] = 0;
          puVar24[8] = 0;
          *(undefined4 *)(puVar24 + 9) = DAT_1464aa730;
          puVar24[0x16] = 0;
          puVar24[0x18] = 0;
        }
        FSpriteDrawCallRecord::BuildFromSprite(puVar24,lVar15);
        puVar22 = puVar24 + 10;
        *(undefined4 *)(puVar24 + 0x18) = 0;
        if (*(int *)((longlong)puVar24 + 0xc4) != 0) {
          TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeTo(puVar22,0);
        }
        puVar8 = (undefined4 *)FLinearColor::ToFColor(param_1 + 0x710,local_res10,0);
        *(undefined4 *)(puVar24 + 9) = *puVar8;
        bVar1 = false;
        fVar26 = DAT_146267248 * 0.1;
        local_160 = CONCAT44(local_160._4_4_,fVar26);
        *puVar24 = CONCAT44(DAT_146267244 * 0.1,DAT_146267240 * 0.1);
        *(float *)(puVar24 + 1) = fVar26;
        pfVar25 = *(float **)(lVar15 + 0xb0);
        pfVar14 = pfVar25 + (longlong)*(int *)(lVar15 + 0xb8) * 4;
        fVar26 = (float)DAT_1468b5d88;
        fVar36 = (float)DAT_1468b5d88;
        fVar31 = DAT_1468b5d88._4_4_;
        fVar32 = DAT_1468b5d88._4_4_;
        fVar34 = DAT_1468b5d88._4_4_;
        for (; pfVar25 != pfVar14; pfVar25 = pfVar25 + 4) {
          fVar35 = pfVar25[1];
          fVar4 = *pfVar25;
          fVar34 = fVar35;
          if (bVar1) {
            if (fVar31 <= fVar35) {
              fVar34 = fVar31;
            }
            if (fVar35 <= fVar31) {
              fVar31 = fVar35;
            }
            if (fVar4 <= fVar26) {
              fVar26 = fVar4;
            }
            if (fVar36 <= fVar4) {
              fVar36 = fVar4;
            }
            if (fVar32 <= fVar35) {
              fVar32 = fVar35;
            }
          }
          else {
            bVar1 = true;
            fVar31 = fVar35;
            fVar26 = fVar4;
            fVar32 = fVar35;
            fVar36 = fVar4;
          }
        }
        fVar31 = 1.0 / *(float *)(lVar15 + 0x9c);
        if (2 < (int)local_128) {
          uVar21 = local_128 & 0xffffffff;
          pfVar25 = pfVar17;
          do {
            iVar9 = *(int *)(puVar24 + 0x18);
            *(int *)(puVar24 + 0x18) = iVar9 + 1;
            if (*(int *)((longlong)puVar24 + 0xc4) < iVar9 + 1) {
              TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(puVar22,iVar9);
            }
            puVar12 = (undefined8 *)puVar24[0x16];
            if ((undefined8 *)puVar24[0x16] == (undefined8 *)0x0) {
              puVar12 = puVar22;
            }
            pfVar14 = (float *)(puVar12 + (longlong)iVar9 * 2);
            if (pfVar14 != (float *)0x0) {
              fVar35 = *pfVar25;
              fVar4 = pfVar25[1];
              *pfVar14 = fVar35;
              pfVar14[1] = fVar4;
              pfVar14[2] = fVar35 / ((fVar36 - fVar26) * fVar31);
              pfVar14[3] = (-1.0 / ((fVar32 - fVar34) * fVar31)) * fVar4;
            }
            pfVar25 = pfVar25 + 2;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
      }
      if (pfVar17 != (float *)0x0) {
        FMemory::Free(pfVar17);
      }
      if (pfVar6 != (float *)0x0) {
        FMemory::Free(pfVar6);
      }
      if (local_140 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      if (local_res18 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
    pfVar6 = local_148;
    if (iVar19 != 0) {
      pfVar17 = local_148 + 4;
      do {
        if (*(longlong *)pfVar17 != 0) {
          FMemory::Free();
        }
        pfVar17 = pfVar17 + 8;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    if (pfVar6 != (float *)0x0) {
      FMemory::Free(pfVar6);
    }
  }
  if (*(longlong **)(param_1 + 0x730) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x730) + 0x290))();
    (**(code **)(**(longlong **)(param_1 + 0x730) + 0x278))();
  }
  FUN_14234b090(param_1);
  return;
}



// FUNCTION 14081e760 FUN_14081e760 body=100 status=ok
// SIG undefined FUN_14081e760(void)

void FUN_14081e760(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  FUN_142393f60();
  lVar1 = *(longlong *)(param_1 + 0x700);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 0x7e0) != 0)) &&
     (plVar2 = *(longlong **)(lVar1 + 0x7d8), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    if (*(longlong *)(lVar1 + 0x7d8) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(lVar1 + 0x7d8),0,0);
      *(undefined8 *)(lVar1 + 0x7d8) = uVar3;
    }
    *(undefined4 *)(lVar1 + 0x7e0) = 0;
  }
  return;
}



// FUNCTION 14081e7d0 FUN_14081e7d0 body=1632 status=ok
// SIG undefined FUN_14081e7d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14081e7d0(longlong *param_1,byte param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar18;
  undefined1 auVar17 [16];
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
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined1 local_160;
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
  undefined4 local_118;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (((*(byte *)(param_1 + 0x17) & 4) != 0) && ((~param_2 & 1) != 0)) {
    iVar13 = 0;
    if (0 < (int)param_1[0xe6]) {
      do {
        uVar11 = FUN_140487e30(&local_158,(longlong)iVar13 * 0x50 + param_1[0xe5]);
        fVar10 = fStack_12c;
        fVar9 = fStack_130;
        fVar8 = fStack_134;
        fVar7 = local_138;
        fVar30 = fRam000000014685e388;
        fVar27 = fRam000000014685e384;
        fVar34 = _DAT_14685e380;
        fVar32 = fRam000000014685e328;
        fVar29 = fRam000000014685e324;
        fVar26 = _DAT_14685e320;
        auVar6._4_4_ = fStack_134;
        auVar6._0_4_ = local_138;
        auVar6._8_4_ = fStack_130;
        auVar6._12_4_ = fStack_12c;
        auVar14 = *(undefined1 (*) [16])(param_1 + 0x46);
        fVar1 = auVar14._0_4_;
        fVar2 = auVar14._4_4_;
        fVar3 = auVar14._8_4_;
        fVar4 = auVar14._12_4_;
        fVar16 = *(float *)(param_1 + 0x42);
        fVar23 = *(float *)((longlong)param_1 + 0x214);
        fVar18 = *(float *)(param_1 + 0x43);
        fVar24 = *(float *)((longlong)param_1 + 0x21c);
        local_f8 = 0.0;
        fStack_f4 = 0.0;
        fStack_f0 = 0.0;
        fStack_ec = fRam000000014685e32c;
        local_d8 = (float)((uint)_DAT_14685e320 & _DAT_14685e330);
        fStack_d4 = (float)((uint)fRam000000014685e324 & uRam000000014685e334);
        fStack_d0 = (float)((uint)fRam000000014685e328 & uRam000000014685e338);
        fStack_cc = (float)((uint)fRam000000014685e32c & uRam000000014685e33c);
        _local_e8 = ZEXT816(0);
        auVar14 = minps(auVar6,auVar14);
        auVar15._4_4_ = -(uint)(auVar14._4_4_ < fRam000000014685e384);
        auVar15._0_4_ = -(uint)(auVar14._0_4_ < _DAT_14685e380);
        auVar15._8_4_ = -(uint)(auVar14._8_4_ < fRam000000014685e388);
        auVar15._12_4_ = -(uint)(auVar14._12_4_ < fRam000000014685e38c);
        iVar12 = movmskps(uVar11,auVar15);
        if (iVar12 == 0) {
          fVar27 = local_148 * fVar1;
          fVar30 = fStack_144 * fVar2;
          fVar33 = fStack_140 * fVar3;
          fVar35 = fStack_13c * fVar4;
          local_f8 = fStack_14c * fVar16 * _DAT_14685e360 + fVar24 * local_158 +
                     fStack_150 * fVar23 * _DAT_14685e350 + fStack_154 * fVar18 * _DAT_14685e340;
          fStack_f4 = fStack_150 * fVar16 * fRam000000014685e364 + fVar24 * fStack_154 +
                      fStack_14c * fVar23 * fRam000000014685e354 +
                      local_158 * fVar18 * fRam000000014685e344;
          fStack_f0 = fStack_154 * fVar16 * fRam000000014685e368 + fVar24 * fStack_150 +
                      local_158 * fVar23 * fRam000000014685e358 +
                      fStack_14c * fVar18 * fRam000000014685e348;
          fStack_ec = local_158 * fVar16 * fRam000000014685e36c + fVar24 * fStack_14c +
                      fStack_154 * fVar23 * fRam000000014685e35c +
                      fStack_150 * fVar18 * fRam000000014685e34c;
          fVar26 = fVar33 * fVar23 - fVar30 * fVar18;
          fVar29 = fVar27 * fVar18 - fVar33 * fVar16;
          fVar32 = fVar30 * fVar16 - fVar27 * fVar23;
          fVar34 = fVar35 * fVar24 - fVar35 * fVar24;
          fVar26 = fVar26 + fVar26;
          fVar29 = fVar29 + fVar29;
          fVar32 = fVar32 + fVar32;
          fVar34 = fVar34 + fVar34;
          local_e8._4_4_ =
               (fVar26 * fVar18 - fVar32 * fVar16) + fVar24 * fVar29 + fVar30 +
               *(float *)((longlong)param_1 + 0x224);
          local_e8._0_4_ =
               (fVar32 * fVar23 - fVar29 * fVar18) + fVar24 * fVar26 + fVar27 +
               *(float *)(param_1 + 0x44);
          fStack_e0 = (fVar29 * fVar16 - fVar26 * fVar23) + fVar24 * fVar32 + fVar33 +
                      *(float *)(param_1 + 0x45);
          fStack_dc = (fVar34 * fVar24 - fVar34 * fVar24) + fVar24 * fVar34 + fVar35 +
                      *(float *)((longlong)param_1 + 0x22c);
        }
        else {
          fVar33 = *(float *)(param_1 + 0x44);
          fVar35 = *(float *)((longlong)param_1 + 0x224);
          fVar5 = *(float *)(param_1 + 0x45);
          fVar19 = fVar23 + fVar23;
          fVar21 = fVar18 + fVar18;
          fVar45 = fVar1 * local_138;
          fVar46 = fVar2 * fStack_134;
          fVar47 = fVar3 * fStack_130;
          fVar22 = (fVar16 + fVar16) * fVar16;
          fVar20 = (fVar16 + fVar16) * fVar24;
          fVar42 = (fVar21 * fVar24 + fVar19 * fVar16) * fVar1;
          fVar43 = (fVar20 + fVar21 * fVar23) * fVar2;
          fVar44 = (fVar19 * fVar24 + fVar21 * fVar16) * fVar3;
          fVar25 = fVar2 * (fVar19 * fVar16 - fVar21 * fVar24);
          fVar28 = fVar3 * (fVar21 * fVar23 - fVar20);
          fVar31 = fVar1 * (fVar21 * fVar16 - fVar19 * fVar24);
          fVar16 = (float)((uint)((_DAT_14685e320 - (fVar21 * fVar18 + fVar19 * fVar23)) * fVar1) &
                          _DAT_14685e330);
          fVar18 = (float)((uint)((fRam000000014685e324 - (fVar21 * fVar18 + fVar22)) * fVar2) &
                          uRam000000014685e334);
          fVar19 = (float)((uint)((fRam000000014685e328 - (fVar19 * fVar23 + fVar22)) * fVar3) &
                          uRam000000014685e338);
          fVar21 = (float)((uint)((fRam000000014685e32c - (fVar22 + fVar22)) * fVar4) &
                          uRam000000014685e33c);
          fVar20 = fStack_154 + fStack_154;
          fVar24 = fStack_150 + fStack_150;
          fVar22 = (local_158 + local_158) * local_158;
          fVar23 = (local_158 + local_158) * fStack_14c;
          fVar39 = (fVar24 * fStack_14c + fVar20 * local_158) * local_138;
          fVar40 = (fVar23 + fVar24 * fStack_154) * fStack_134;
          fVar41 = (fVar20 * fStack_14c + fVar24 * local_158) * fStack_130;
          fVar36 = fStack_134 * (fVar20 * local_158 - fVar24 * fStack_14c);
          fVar37 = fStack_130 * (fVar24 * fStack_154 - fVar23);
          fVar38 = local_138 * (fVar24 * local_158 - fVar20 * fStack_14c);
          fVar23 = (float)((uint)((_DAT_14685e320 - (fVar24 * fStack_150 + fVar20 * fStack_154)) *
                                 local_138) & _DAT_14685e330);
          fVar24 = (float)((uint)((fRam000000014685e324 - (fVar24 * fStack_150 + fVar22)) *
                                 fStack_134) & uRam000000014685e334);
          fVar20 = (float)((uint)((fRam000000014685e328 - (fVar20 * fStack_154 + fVar22)) *
                                 fStack_130) & uRam000000014685e338);
          fVar22 = (float)((uint)((fRam000000014685e32c - (fVar22 + fVar22)) * fStack_12c) &
                          uRam000000014685e33c);
          local_158 = fVar39 * fVar25 + fVar23 * fVar16 + fVar38 * fVar44 + fVar22 * fVar33;
          fStack_154 = fVar39 * fVar18 + fVar23 * fVar42 + fVar38 * fVar28 + fVar22 * fVar35;
          fStack_150 = fVar39 * fVar43 + fVar23 * fVar31 + fVar38 * fVar19 + fVar22 * fVar5;
          fStack_14c = fVar39 * fVar21 + fVar23 * fVar21 + fVar38 * fVar21 +
                       fVar22 * fRam000000014685e32c;
          fStack_13c = fVar24 * fVar21 + fVar36 * fVar21 + fVar40 * fVar21 +
                       fVar22 * fRam000000014685e32c;
          local_138 = fVar37 * fVar25 + fVar41 * fVar16 + fVar20 * fVar44 + fVar22 * fVar33;
          fStack_134 = fVar37 * fVar18 + fVar41 * fVar42 + fVar20 * fVar28 + fVar22 * fVar35;
          fStack_130 = fVar37 * fVar43 + fVar41 * fVar31 + fVar20 * fVar19 + fVar22 * fVar5;
          fStack_12c = fVar37 * fVar21 + fVar41 * fVar21 + fVar20 * fVar21 +
                       fVar22 * fRam000000014685e32c;
          local_128 = fStack_144 * fVar25 + local_148 * fVar16 + fStack_140 * fVar44 +
                      fRam000000014685e32c * fVar33;
          fStack_124 = fStack_144 * fVar18 + local_148 * fVar42 + fStack_140 * fVar28 +
                       fRam000000014685e32c * fVar35;
          fStack_120 = fStack_144 * fVar43 + local_148 * fVar31 + fStack_140 * fVar19 +
                       fRam000000014685e32c * fVar5;
          fStack_11c = fStack_144 * fVar21 + local_148 * fVar21 + fStack_140 * fVar21 +
                       fRam000000014685e32c * fRam000000014685e32c;
          local_148 = fVar24 * fVar25 + fVar36 * fVar16 + fVar40 * fVar44 + fVar22 * fVar33;
          fStack_144 = fVar24 * fVar18 + fVar36 * fVar42 + fVar40 * fVar28 + fVar22 * fVar35;
          fStack_140 = fVar24 * fVar43 + fVar36 * fVar31 + fVar40 * fVar19 + fVar22 * fVar5;
          FMatrix::RemoveScaling(&local_158);
          fVar16 = (float)(-(uint)(fVar34 <= fVar45) & (_DAT_14685e370 ^ (uint)fVar26) ^
                          _DAT_14685e370);
          fVar23 = (float)(-(uint)(fVar27 <= fVar46) & (uRam000000014685e374 ^ (uint)fVar29) ^
                          uRam000000014685e374);
          fVar18 = (float)(-(uint)(fVar30 <= fVar47) & (uRam000000014685e378 ^ (uint)fVar32) ^
                          uRam000000014685e378);
          local_158 = local_158 * fVar16;
          fStack_154 = fStack_154 * fVar16;
          fStack_150 = fStack_150 * fVar16;
          fStack_144 = fStack_144 * fVar23;
          fStack_140 = fStack_140 * fVar23;
          local_148 = local_148 * fVar23;
          fStack_134 = fStack_134 * fVar18;
          fStack_130 = fStack_130 * fVar18;
          local_138 = local_138 * fVar18;
          FQuat::FQuat(&local_108,&local_158);
          local_118 = 0x322bcc77;
          auVar17._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
          auVar17._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
          auVar17._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
          auVar17._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
          fVar26 = auVar17._4_4_ + auVar17._0_4_;
          fVar29 = auVar17._8_4_ + auVar17._4_4_;
          fVar32 = auVar17._12_4_ + auVar17._8_4_;
          fVar34 = auVar17._0_4_ + auVar17._12_4_;
          auVar14._4_4_ = fVar29;
          auVar14._0_4_ = fVar26;
          auVar14._8_4_ = fVar32;
          auVar14._12_4_ = fVar34;
          auVar14 = rsqrtps(auVar17,auVar14);
          fVar16 = auVar14._0_4_;
          fVar23 = auVar14._4_4_;
          fVar18 = auVar14._8_4_;
          fVar24 = auVar14._12_4_;
          fVar16 = (_DAT_14685e310 - fVar16 * fVar16 * fVar26 * _DAT_14685e310) * fVar16 + fVar16;
          fVar23 = (fRam000000014685e314 - fVar23 * fVar23 * fVar29 * fRam000000014685e314) * fVar23
                   + fVar23;
          fVar18 = (fRam000000014685e318 - fVar18 * fVar18 * fVar32 * fRam000000014685e318) * fVar18
                   + fVar18;
          fVar24 = (fRam000000014685e31c - fVar24 * fVar24 * fVar34 * fRam000000014685e31c) * fVar24
                   + fVar24;
          local_e8._4_4_ = fStack_124;
          local_e8._0_4_ = local_128;
          fStack_e0 = fStack_120;
          local_108 = (float)(((uint)(((_DAT_14685e310 - fVar16 * fVar16 * fVar26 * _DAT_14685e310)
                                       * fVar16 + fVar16) * local_108) ^ _DAT_14685e300) &
                              -(uint)(1e-08 <= fVar26) ^ _DAT_14685e300);
          fStack_104 = (float)(((uint)(((fRam000000014685e314 -
                                        fVar23 * fVar23 * fVar29 * fRam000000014685e314) * fVar23 +
                                       fVar23) * fStack_104) ^ uRam000000014685e304) &
                               -(uint)(1e-08 <= fVar29) ^ uRam000000014685e304);
          fStack_100 = (float)(((uint)(((fRam000000014685e318 -
                                        fVar18 * fVar18 * fVar32 * fRam000000014685e318) * fVar18 +
                                       fVar18) * fStack_100) ^ uRam000000014685e308) &
                               -(uint)(1e-08 <= fVar32) ^ uRam000000014685e308);
          fStack_fc = (float)(((uint)(((fRam000000014685e31c -
                                       fVar24 * fVar24 * fVar34 * fRam000000014685e31c) * fVar24 +
                                      fVar24) * fStack_fc) ^ uRam000000014685e30c) &
                              -(uint)(1e-08 <= fVar34) ^ uRam000000014685e30c);
          fStack_dc = 0.0;
          local_f8 = local_108;
          fStack_f4 = fStack_104;
          fStack_f0 = fStack_100;
          fStack_ec = fStack_fc;
        }
        fStack_cc = fVar4 * fVar10;
        fStack_d0 = fVar3 * fVar9;
        fStack_d4 = fVar2 * fVar8;
        local_d8 = fVar1 * fVar7;
        local_168 = 0;
        local_160 = param_3 == '\x01';
        (**(code **)(*param_1 + 0x930))(param_1,iVar13,&local_f8,1);
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)param_1[0xe6]);
    }
  }
  return;
}



// FUNCTION 14081ee30 FUN_14081ee30 body=24 status=ok
// SIG undefined FUN_14081ee30(void)

longlong FUN_14081ee30(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x760);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x20) == param_1)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 14081ee50 FUN_14081ee50 body=40 status=ok
// SIG undefined FUN_14081ee50(void)

void FUN_14081ee50(longlong *param_1)

{
  (**(code **)(*param_1 + 0x280))(param_1,0);
  *(uint *)((longlong)param_1 + 0x72c) = *(uint *)((longlong)param_1 + 0x72c) & 0xfffffffd;
  *(uint *)((longlong)param_1 + 0x72c) = *(uint *)((longlong)param_1 + 0x72c) | 4;
  return;
}



// FUNCTION 14081ee80 FUN_14081ee80 body=74 status=ok
// SIG undefined FUN_14081ee80(void)

void FUN_14081ee80(longlong *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0xe6);
  *(undefined4 *)(param_1 + 0xe6) = 0;
  if (fVar1 != 0.0) {
    FUN_1408109e0();
  }
  (**(code **)(*param_1 + 0x280))(param_1,0);
  *(uint *)((longlong)param_1 + 0x72c) = *(uint *)((longlong)param_1 + 0x72c) & 0xfffffffd;
  *(uint *)((longlong)param_1 + 0x72c) = *(uint *)((longlong)param_1 + 0x72c) | 4;
  return;
}



// FUNCTION 14081eed0 FUN_14081eed0 body=128 status=ok
// SIG undefined FUN_14081eed0(void)

void FUN_14081eed0(longlong param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = UPaperTileMap::GetPrivateStaticClass();
  lVar3 = FUN_1417985e0(uVar2,param_1,0,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0x760) = lVar3;
  *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 8;
  if ((*(uint *)(param_1 + 8) & 0x30) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x760) + 8);
    *puVar1 = *puVar1 | *(uint *)(param_1 + 8) & 0x69;
  }
  FUN_142394440(param_1);
  return;
}



// FUNCTION 14081ef50 FUN_14081ef50 body=135 status=ok
// SIG undefined FUN_14081ef50(void)

void FUN_14081ef50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  FUN_142317410();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar5;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  if (((((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) &&
       (lVar4 = *(longlong *)(param_1 + 0x8b0), lVar4 != 0)) && ((*(byte *)(lVar4 + 0x3c) & 2) != 0)
      ) && (lVar2 = *(longlong *)(param_1 + 0x4c8), lVar2 != 0)) {
    FTickFunction::AddPrerequisite(lVar4 + 0x30,lVar2,lVar2 + 0x30);
    return;
  }
  return;
}



// FUNCTION 14081efe0 PostLoad body=54 status=ok
// SIG undefined PostLoad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UPaperFlipbook::PostLoad(longlong param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  UObject::PostLoad();
  local_18 = _DAT_146267260;
  uStack_14 = uRam0000000146267264;
  uStack_10 = uRam0000000146267268;
  uStack_c = uRam000000014626726c;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_18);
  if (iVar1 < 7) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  }
  return;
}



// FUNCTION 14081f020 FUN_14081f020 body=220 status=ok
// SIG undefined FUN_14081f020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14081f020(longlong *param_1)

{
  int iVar1;
  byte local_res10;
  byte local_res11;
  byte local_res12;
  byte local_res13;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_1423945d0();
  local_18 = _DAT_146267260;
  uStack_14 = uRam0000000146267264;
  uStack_10 = uRam0000000146267268;
  uStack_c = uRam000000014626726c;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_18);
  if ((iVar1 < 10) && (param_1[0xe4] != 0)) {
    (**(code **)(*param_1 + 0x568))(param_1,0);
  }
  if (iVar1 < 0x11) {
    FLinearColor::ToFColor(param_1 + 0xe7,&local_res10,1);
    *(float *)(param_1 + 0xe7) = (float)local_res12 * 0.003921569;
    *(float *)((longlong)param_1 + 0x73c) = (float)local_res11 * 0.003921569;
    *(float *)(param_1 + 0xe8) = (float)local_res10 * 0.003921569;
    *(float *)((longlong)param_1 + 0x744) = (float)local_res13 * 0.003921569;
  }
  return;
}



// FUNCTION 14081f100 PostLoad body=45 status=ok
// SIG undefined PostLoad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UPaperSprite::PostLoad(undefined8 param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  UObject::PostLoad();
  local_18 = _DAT_146267260;
  uStack_14 = uRam0000000146267264;
  uStack_10 = uRam0000000146267268;
  uStack_c = uRam000000014626726c;
  UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_18);
  return;
}



// FUNCTION 14081f130 FUN_14081f130 body=220 status=ok
// SIG undefined FUN_14081f130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14081f130(longlong *param_1)

{
  int iVar1;
  byte local_res10;
  byte local_res11;
  byte local_res12;
  byte local_res13;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_1423945d0();
  local_18 = _DAT_146267260;
  uStack_14 = uRam0000000146267264;
  uStack_10 = uRam0000000146267268;
  uStack_c = uRam000000014626726c;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_18);
  if ((iVar1 < 8) && (param_1[0xe4] != 0)) {
    (**(code **)(*param_1 + 0x568))(param_1,0);
  }
  if (iVar1 < 0x11) {
    FLinearColor::ToFColor(param_1 + 0xe5,&local_res10,1);
    *(float *)(param_1 + 0xe5) = (float)local_res12 * 0.003921569;
    *(float *)((longlong)param_1 + 0x72c) = (float)local_res11 * 0.003921569;
    *(float *)(param_1 + 0xe6) = (float)local_res10 * 0.003921569;
    *(float *)((longlong)param_1 + 0x734) = (float)local_res13 * 0.003921569;
  }
  return;
}



// FUNCTION 14081f210 FUN_14081f210 body=177 status=ok
// SIG undefined FUN_14081f210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14081f210(longlong param_1)

{
  int iVar1;
  byte local_res10;
  byte local_res11;
  byte local_res12;
  byte local_res13;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_1423945d0();
  local_18 = _DAT_146267260;
  uStack_14 = uRam0000000146267264;
  uStack_10 = uRam0000000146267268;
  uStack_c = uRam000000014626726c;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_18);
  if (iVar1 < 0x11) {
    FLinearColor::ToFColor(param_1 + 0x710,&local_res10,1);
    *(float *)(param_1 + 0x710) = (float)local_res12 * 0.003921569;
    *(float *)(param_1 + 0x714) = (float)local_res11 * 0.003921569;
    *(float *)(param_1 + 0x718) = (float)local_res10 * 0.003921569;
    *(float *)(param_1 + 0x71c) = (float)local_res13 * 0.003921569;
  }
  return;
}



// FUNCTION 14081f2d0 PostLoad body=296 status=ok
// SIG undefined PostLoad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UPaperTileMap::PostLoad(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  byte local_res8;
  byte local_res9;
  byte local_resa;
  byte local_resb;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  UObject::PostLoad();
  local_38 = _DAT_146267260;
  fStack_34 = fRam0000000146267264;
  fStack_30 = fRam0000000146267268;
  fStack_2c = fRam000000014626726c;
  iVar3 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_38);
  plVar4 = *(longlong **)(param_1 + 0x78);
  plVar1 = plVar4 + *(int *)(param_1 + 0x80);
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    lVar2 = *plVar4;
    FUN_1417510e0(lVar2);
    UPaperTileLayer::ResizeMap
              (lVar2,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    if (iVar3 < 0x11) {
      local_38 = *(float *)(lVar2 + 0x54);
      fStack_34 = *(float *)(lVar2 + 0x58);
      fStack_30 = *(float *)(lVar2 + 0x5c);
      fStack_2c = *(float *)(lVar2 + 0x60);
      FLinearColor::ToFColor(&local_38,&local_res8,1);
      local_38 = (float)local_resa * 0.003921569;
      fStack_34 = (float)local_res9 * 0.003921569;
      fStack_30 = (float)local_res8 * 0.003921569;
      fStack_2c = (float)local_resb * 0.003921569;
      *(float *)(lVar2 + 0x54) = local_38;
      *(float *)(lVar2 + 0x58) = fStack_34;
      *(float *)(lVar2 + 0x5c) = fStack_30;
      *(float *)(lVar2 + 0x60) = fStack_2c;
    }
  }
  return;
}



// FUNCTION 14081f400 FUN_14081f400 body=909 status=ok
// SIG undefined FUN_14081f400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14081f400(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 local_res10;
  int local_res18;
  longlong *local_res20;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [32];
  
  FUN_1423945d0();
  local_68 = _DAT_146267260;
  uStack_64 = uRam0000000146267264;
  uStack_60 = uRam0000000146267268;
  uStack_5c = uRam000000014626726c;
  iVar4 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_68);
  local_res18 = iVar4;
  if (iVar4 < 3) {
    lVar5 = NewObject<UPaperTileMap>(param_1);
    *(longlong *)(param_1 + 0x760) = lVar5;
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 8;
    *(undefined4 *)(*(longlong *)(param_1 + 0x760) + 0x28) = *(undefined4 *)(param_1 + 0x718);
    *(undefined4 *)(*(longlong *)(param_1 + 0x760) + 0x2c) = *(undefined4 *)(param_1 + 0x71c);
    *(undefined4 *)(*(longlong *)(param_1 + 0x760) + 0x30) = *(undefined4 *)(param_1 + 0x720);
    *(undefined4 *)(*(longlong *)(param_1 + 0x760) + 0x34) = *(undefined4 *)(param_1 + 0x724);
    *(undefined4 *)(*(longlong *)(param_1 + 0x760) + 0x38) = 0x3f800000;
    lVar5 = *(longlong *)(param_1 + 0x728);
    lVar2 = *(longlong *)(param_1 + 0x760);
    if (lVar5 == 0) {
      *(undefined4 *)(lVar2 + 0x48) = 0xffffffff;
      *(undefined4 *)(lVar2 + 0x4c) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      local_res10 = 0;
      *(undefined4 *)(lVar2 + 0x68) = 0;
      if ((*(int *)(lVar2 + 0x6c) < 0) && (*(int *)(lVar2 + 0x6c) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar2 + 0x60,0);
      }
      if (*(undefined2 **)(lVar2 + 0x60) != (undefined2 *)0x0) {
        **(undefined2 **)(lVar2 + 0x60) = 0;
      }
      *(undefined4 *)(lVar2 + 0x50) = 0;
    }
    else {
      uVar6 = FSoftObjectPath::FSoftObjectPath(local_58,lVar5);
      FSoftObjectPath::operator=(lVar2 + 0x58,uVar6);
      FWeakObjectPtr::operator=(lVar2 + 0x48,lVar5);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar2 + 0x50) = DAT_1464b56f4;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x70) = *(undefined8 *)(param_1 + 0x730);
    lVar5 = *(longlong *)(param_1 + 0x760);
    puVar9 = (undefined8 *)(lVar5 + 0x78);
    if (puVar9 != (undefined8 *)(param_1 + 0x738)) {
      iVar1 = *(int *)(param_1 + 0x740);
      _Src = *(void **)(param_1 + 0x738);
      *(int *)(lVar5 + 0x80) = iVar1;
      if ((iVar1 == 0) && (*(int *)(lVar5 + 0x84) == 0)) {
        *(undefined4 *)(lVar5 + 0x84) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar9,iVar1);
        _guard_xfg_dispatch_icall_nop((void *)*puVar9,_Src,(longlong)iVar1 << 3);
      }
    }
    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x760) + 0x78);
    local_res20 = plVar11 + *(int *)(*(longlong *)(param_1 + 0x760) + 0x80);
    if (plVar11 != local_res20) {
      do {
        plVar3 = (longlong *)*plVar11;
        (**(code **)(*plVar3 + 0x138))(plVar3,0,*(undefined8 *)(param_1 + 0x760),0x11);
        *(undefined4 *)(plVar3 + 0xf) = 0;
        if (*(int *)((longlong)plVar3 + 0x7c) != (int)plVar3[0x12]) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar3 + 0xe);
        }
        iVar4 = (int)plVar3[0xd] * *(int *)((longlong)plVar3 + 100);
        plVar10 = (longlong *)0x0;
        if (0 < iVar4) {
          do {
            iVar1 = (int)plVar3[0xf];
            *(int *)(plVar3 + 0xf) = iVar1 + 1;
            if (*(int *)((longlong)plVar3 + 0x7c) < iVar1 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3 + 0xe,iVar1);
            }
            plVar7 = (longlong *)((longlong)iVar1 * 0x10 + plVar3[0xe]);
            plVar8 = (longlong *)0x0;
            if (plVar7 != (longlong *)0x0) {
              *plVar7 = 0;
              *(undefined4 *)(plVar7 + 1) = 0xffffffff;
              plVar8 = plVar7;
            }
            *plVar8 = plVar3[0x10];
            plVar7 = (longlong *)((longlong)plVar10 + 1);
            *(undefined4 *)(plVar8 + 1) = *(undefined4 *)(plVar3[0x11] + (longlong)plVar10 * 4);
            plVar10 = plVar7;
          } while ((longlong)plVar7 < (longlong)iVar4);
        }
        plVar11 = plVar11 + 1;
        iVar4 = local_res18;
      } while (plVar11 != local_res20);
    }
    *(undefined8 *)(param_1 + 0x728) = 0;
    *(undefined8 *)(param_1 + 0x730) = 0;
    *(undefined4 *)(param_1 + 0x740) = 0;
    if (*(int *)(param_1 + 0x744) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x738,0);
    }
  }
  if (iVar4 < 0x11) {
    FLinearColor::ToFColor(param_1 + 0x748,&local_res10,1);
    *(float *)(param_1 + 0x748) = (float)local_res10._2_1_ * 0.003921569;
    *(float *)(param_1 + 0x74c) = (float)local_res10._1_1_ * 0.003921569;
    *(float *)(param_1 + 0x750) = (float)(byte)local_res10 * 0.003921569;
    *(float *)(param_1 + 0x754) = (float)local_res10._3_1_ * 0.003921569;
  }
  return;
}



// FUNCTION 14081f790 PostLoad body=218 status=ok
// SIG undefined PostLoad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UPaperTileSet::PostLoad(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_146267260;
  uStack_14 = uRam0000000146267264;
  uStack_10 = uRam0000000146267268;
  uStack_c = uRam000000014626726c;
  iVar2 = UObjectBaseUtility::GetLinkerCustomVersion(_DAT_146267260,&local_18);
  if (iVar2 < 0xf) {
    local_18 = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0x48) = local_18;
    *(undefined4 *)(param_1 + 0x4c) = local_18;
    *(undefined4 *)(param_1 + 0x50) = local_18;
    *(undefined4 *)(param_1 + 0x54) = local_18;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x9c);
    uStack_14 = local_18;
    uStack_10 = local_18;
    uStack_c = local_18;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1417510e0();
    lVar1 = *(longlong *)(param_1 + 0x30);
    iVar2 = 0;
    if (lVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (((*(int *)(lVar1 + 200) - *(int *)(param_1 + 0x50)) - *(int *)(param_1 + 0x48)) +
              *(int *)(param_1 + 0x58)) / (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x58));
    }
    *(int *)(param_1 + 0x68) = iVar3;
    if (lVar1 != 0) {
      iVar2 = ((((int)((ulonglong)*(undefined8 *)(lVar1 + 200) >> 0x20) - *(int *)(param_1 + 0x54))
               - *(int *)(param_1 + 0x4c)) + *(int *)(param_1 + 0x5c)) /
              (*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x5c));
    }
    *(int *)(param_1 + 0x6c) = iVar2;
    ReallocateAndCopyTileData(param_1);
  }
  UObject::PostLoad(param_1);
  return;
}



// FUNCTION 14081f870 FUN_14081f870 body=53 status=ok
// SIG undefined FUN_14081f870(void)

void FUN_14081f870(undefined8 param_1,undefined8 param_2)

{
  FUN_14080e1d0();
  FUN_14080ebf0(param_1,param_2);
  FUN_14080e5e0(param_1,param_2);
  return;
}



// FUNCTION 14081f8b0 QuerySupportedSockets body=678 status=ok
// SIG undefined QuerySupportedSockets(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UPaperFlipbook::QuerySupportedSockets(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  longlong local_50;
  longlong *local_48;
  int local_40;
  ulonglong local_38;
  ulonglong uVar9;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar10 = (longlong *)0x0;
  plVar14 = *(longlong **)(param_1 + 0x30);
  plVar15 = plVar14 + (longlong)*(int *)(param_1 + 0x38) * 2;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  plVar3 = plVar10;
  plVar11 = plVar10;
  plVar12 = plVar10;
  local_a8 = plVar14;
  local_98 = plVar15;
  if (plVar14 != plVar15) {
    do {
      uVar9 = 0;
      lVar7 = *plVar14;
      if (lVar7 != 0) {
        uVar6 = uVar9;
        local_a8 = plVar14;
        if (((int)plVar10 < 0) &&
           (local_b0 = local_b0 & 0xffffffff00000000, uVar6 = 0, (int)plVar10 != 0)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_b8,0);
          uVar6 = local_b0 & 0xffffffff;
          plVar10 = (longlong *)(local_b0 >> 0x20);
          lVar7 = *plVar14;
          plVar3 = local_88;
          plVar11 = local_48;
          plVar12 = local_b8;
        }
        uVar5 = (uint)uVar6;
        uVar13 = uVar9;
        if (0 < *(int *)(lVar7 + 0x90)) {
          do {
            lVar1 = *(longlong *)(lVar7 + 0x88);
            iVar4 = (int)uVar6;
            uVar5 = iVar4 + 1;
            local_b0 = CONCAT44(local_b0._4_4_,uVar5);
            if ((int)plVar10 < (int)uVar5) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_b8,uVar6);
              plVar10 = (longlong *)(local_b0 >> 0x20);
              plVar12 = local_b8;
              uVar5 = (uint)local_b0;
            }
            uVar6 = (ulonglong)uVar5;
            plVar14 = plVar12 + (longlong)iVar4 * 2;
            if (plVar14 != (longlong *)0x0) {
              *plVar14 = *(longlong *)(lVar1 + 0x30 + uVar13);
              *(undefined1 *)(plVar14 + 1) = 2;
            }
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
            plVar3 = local_88;
            plVar11 = local_48;
            plVar14 = local_a8;
            uVar13 = uVar13 + 0x40;
            plVar15 = local_98;
          } while ((int)uVar8 < *(int *)(lVar7 + 0x90));
        }
        for (plVar10 = plVar12; plVar10 != plVar12 + (longlong)(int)uVar5 * 2; plVar10 = plVar10 + 2
            ) {
          lVar7 = *plVar10;
          if ((int)local_80 != local_54) {
            plVar2 = &local_50;
            if (plVar11 != (longlong *)0x0) {
              plVar2 = plVar11;
            }
            for (iVar4 = *(int *)((longlong)plVar2 +
                                 (longlong)
                                 (int)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7 & local_40 - 1U)
                                 * 4); iVar4 != -1; iVar4 = (int)plVar3[(longlong)iVar4 * 2 + 1]) {
              if (plVar3[(longlong)iVar4 * 2] == lVar7) {
                if (iVar4 != -1) goto LAB_14081fabd;
                break;
              }
            }
          }
          FUN_140800100(&local_88,local_a0,plVar10,0);
          iVar4 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar4);
          }
          plVar3 = (longlong *)((longlong)iVar4 * 0x10 + *param_2);
          *plVar3 = *plVar10;
          *(char *)(plVar3 + 1) = (char)plVar10[1];
          plVar3 = local_88;
          plVar11 = local_48;
LAB_14081fabd:
        }
      }
      plVar10 = (longlong *)(local_b0 >> 0x20);
      plVar14 = plVar14 + 2;
    } while (plVar14 != plVar15);
    plVar10 = plVar11;
    local_a8 = plVar14;
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
      plVar10 = local_48;
    }
  }
  local_40 = 0;
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  return;
}



// FUNCTION 14081fb80 QuerySupportedSockets body=143 status=ok
// SIG undefined QuerySupportedSockets(void)

void UPaperSprite::QuerySupportedSockets(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar5 = 0;
    do {
      iVar1 = (int)param_2[1];
      lVar2 = *(longlong *)(param_1 + 0x88);
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
      }
      puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *(undefined8 *)(lVar2 + 0x30 + lVar5);
        *(undefined1 *)(puVar3 + 1) = 2;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x40;
    } while (iVar4 < *(int *)(param_1 + 0x90));
  }
  return;
}



// FUNCTION 14081fc30 ReallocateAndCopyTileData body=1000 status=ok
// SIG undefined ReallocateAndCopyTileData(void)

void UPaperTileSet::ReallocateAndCopyTileData(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  int local_res20;
  longlong local_b0;
  int local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  
  iVar12 = *(int *)(param_1 + 0x70);
  iVar14 = *(int *)(param_1 + 0x68);
  if ((iVar12 != iVar14) || (*(int *)(param_1 + 0x74) != *(int *)(param_1 + 0x6c))) {
    iVar1 = *(int *)(param_1 + 0x74);
    lVar6 = *(longlong *)(param_1 + 0x78);
    plVar13 = (longlong *)(param_1 + 0x78);
    iVar7 = *(int *)(param_1 + 0x80);
    local_b0 = 0;
    iVar8 = 0;
    local_a8 = iVar7;
    local_a0 = plVar13;
    if (iVar7 != 0) {
      TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(&local_b0,iVar7,0);
      lVar6 = lVar6 - local_b0;
      puVar3 = (undefined4 *)(local_b0 + 0x1c);
      do {
        *(undefined8 *)(puVar3 + -7) = *(undefined8 *)(lVar6 + -0x1c + (longlong)puVar3);
        *(undefined8 *)(puVar3 + -5) = 0;
        TArray<FSpriteGeometryShape,FDefaultAllocator>::CopyToEmpty<FSpriteGeometryShape>
                  (puVar3 + -5,*(undefined8 *)(lVar6 + -0x14 + (longlong)puVar3),
                   *(undefined4 *)(lVar6 + -0xc + (longlong)puVar3),0,0);
        *(undefined1 *)(puVar3 + -1) = *(undefined1 *)(lVar6 + -4 + (longlong)puVar3);
        *puVar3 = *(undefined4 *)(lVar6 + (longlong)puVar3);
        puVar3[1] = *(undefined4 *)(lVar6 + 4 + (longlong)puVar3);
        *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(lVar6 + 8 + (longlong)puVar3);
        puVar3[3] = *(undefined4 *)(lVar6 + 0xc + (longlong)puVar3);
        puVar3[4] = *(undefined4 *)(lVar6 + 0x10 + (longlong)puVar3);
        puVar3[5] = *(undefined4 *)(lVar6 + 0x14 + (longlong)puVar3);
        puVar3[7] = *(undefined4 *)(lVar6 + 0x1c + (longlong)puVar3);
        puVar3 = puVar3 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar14 = *(int *)(param_1 + 0x68);
      iVar8 = *(int *)(param_1 + 0x80);
    }
    iVar9 = local_a8;
    iVar7 = *(int *)(param_1 + 0x6c);
    uVar5 = iVar14 * iVar7;
    if (iVar8 != 0) {
      lVar6 = *plVar13 + 8;
      do {
        TArray<FSpriteGeometryShape,FDefaultAllocator>::
        ~TArray<FSpriteGeometryShape,FDefaultAllocator>(lVar6);
        lVar6 = lVar6 + 0x40;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(uint *)(param_1 + 0x84) != uVar5) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(plVar13,uVar5);
    }
    if (0 < (int)uVar5) {
      uVar10 = (ulonglong)uVar5;
      do {
        iVar8 = *(int *)(param_1 + 0x80);
        local_88 = 0;
        local_6c = 0x20;
        local_68 = 0x20;
        local_64 = 0;
        local_60 = 0;
        local_5c = 0x3f000000;
        local_58 = 0x40000000;
        local_70 = 3;
        local_50 = 0xffffffff;
        *(int *)(param_1 + 0x80) = iVar8 + 1;
        if (*(int *)(param_1 + 0x84) < iVar8 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar13,iVar8);
        }
        puVar2 = (undefined8 *)((longlong)iVar8 * 0x40 + *plVar13);
        local_80 = 0;
        local_78 = 0;
        *puVar2 = local_88;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *(undefined1 *)(puVar2 + 3) = 3;
        *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x20;
        *(undefined4 *)(puVar2 + 4) = 0x20;
        *(undefined1 *)((longlong)puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 5) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x3f000000;
        *(undefined4 *)(puVar2 + 6) = 0x40000000;
        *(undefined4 *)(puVar2 + 7) = local_50;
        TArray<FSpriteGeometryShape,FDefaultAllocator>::
        ~TArray<FSpriteGeometryShape,FDefaultAllocator>(&local_80);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    local_res20 = 0;
    *(int *)(param_1 + 0x70) = iVar14;
    iVar14 = iVar12;
    if (*(int *)(param_1 + 0x68) <= iVar12) {
      iVar14 = *(int *)(param_1 + 0x68);
    }
    *(int *)(param_1 + 0x74) = iVar7;
    if (*(int *)(param_1 + 0x6c) <= iVar1) {
      iVar1 = *(int *)(param_1 + 0x6c);
    }
    if (0 < iVar1) {
      lVar6 = (longlong)iVar12 << 6;
      local_90 = (undefined1 *)(local_b0 + 0x18);
      local_98 = lVar6;
      do {
        iVar12 = 0;
        puVar11 = local_90;
        if (0 < iVar14) {
          do {
            puVar2 = (undefined8 *)
                     ((longlong)(*(int *)(param_1 + 0x68) * local_res20 + iVar12) * 0x40 + *plVar13)
            ;
            plVar13 = puVar2 + 1;
            *puVar2 = *(undefined8 *)(puVar11 + -0x18);
            if (plVar13 != (longlong *)(puVar11 + -0x10)) {
              iVar7 = *(int *)(puVar2 + 2);
              if (iVar7 != 0) {
                plVar4 = (longlong *)(*plVar13 + 8);
                do {
                  if (*plVar4 != 0) {
                    FMemory::Free();
                  }
                  plVar4 = plVar4 + 6;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
              TArray<FSpriteGeometryShape,FDefaultAllocator>::CopyToEmpty<FSpriteGeometryShape>
                        (plVar13,*(longlong *)(puVar11 + -0x10),*(undefined4 *)(puVar11 + -8),
                         *(undefined4 *)((longlong)puVar2 + 0x14),0);
            }
            iVar12 = iVar12 + 1;
            *(undefined1 *)(puVar2 + 3) = *puVar11;
            *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)(puVar11 + 4);
            *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar11 + 8);
            *(undefined1 *)((longlong)puVar2 + 0x24) = puVar11[0xc];
            *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(puVar11 + 0x10);
            *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)(puVar11 + 0x14);
            *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(puVar11 + 0x18);
            *(undefined1 *)(puVar2 + 7) = puVar11[0x20];
            *(undefined1 *)((longlong)puVar2 + 0x39) = puVar11[0x21];
            *(undefined1 *)((longlong)puVar2 + 0x3a) = puVar11[0x22];
            *(undefined1 *)((longlong)puVar2 + 0x3b) = puVar11[0x23];
            puVar11 = puVar11 + 0x40;
            lVar6 = local_98;
            plVar13 = local_a0;
          } while (iVar12 < iVar14);
        }
        local_res20 = local_res20 + 1;
        local_90 = local_90 + lVar6;
      } while (local_res20 < iVar1);
    }
    if (iVar9 != 0) {
      lVar6 = local_b0 + 8;
      do {
        TArray<FSpriteGeometryShape,FDefaultAllocator>::
        ~TArray<FSpriteGeometryShape,FDefaultAllocator>(lVar6);
        lVar6 = lVar6 + 0x40;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (local_b0 != 0) {
      FMemory::Free(local_b0);
    }
  }
  return;
}



// FUNCTION 140820020 FUN_140820020 body=62 status=ok
// SIG undefined FUN_140820020(void)

void FUN_140820020(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0xec];
  if ((plVar1 != (longlong *)0x0) && ((longlong *)plVar1[4] == param_1)) {
    (**(code **)(*plVar1 + 0x278))();
  }
  FUN_14234b040(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140820057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4b8))(param_1);
  return;
}



// FUNCTION 140820060 FUN_140820060 body=5496 status=ok
// SIG undefined FUN_140820060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140820060(longlong *param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  void *_Src;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *_Src_00;
  longlong *plVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *puVar17;
  float *pfVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  uint uVar22;
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
  undefined1 auStack_348 [32];
  float *local_328;
  undefined4 local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  int local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2d8;
  float fStack_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  uint local_2c4;
  int local_2c0;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_298;
  float local_294;
  float local_290;
  int local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  longlong local_270;
  longlong *local_268;
  float local_260;
  int local_25c;
  float local_258;
  float fStack_254;
  float local_250;
  float local_248;
  float fStack_244;
  float local_240;
  float local_238;
  float fStack_234;
  float local_230;
  float local_228;
  float fStack_224;
  float local_220;
  float local_218;
  float fStack_214;
  float local_210;
  float local_208;
  float fStack_204;
  float local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  float local_1e0;
  float local_1dc;
  longlong *local_1d8;
  int local_1d0;
  undefined4 local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  longlong *local_118;
  undefined8 local_110;
  float local_108 [4];
  float local_f8 [4];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  lVar15 = param_1[0xec];
  if (lVar15 != 0) {
    local_328 = &local_1c8;
    local_268 = param_1;
    local_118 = param_2;
    UPaperTileMap::GetTileToLocalParameters(lVar15);
    fVar26 = DAT_1468b5d98;
    iVar16 = 0;
    fVar35 = 0.0;
    fVar36 = 0.0;
    local_314 = DAT_1468b5d90;
    iVar19 = *(int *)(lVar15 + 0x80) + -1;
    local_2fc = DAT_1468b5d94;
    local_2f8 = 1.0;
    local_300 = 1.0;
    local_30c = 1.0;
    local_308 = 1.0;
    local_2d0 = 1.0 / *(float *)(lVar15 + 0x38);
    local_270 = 0;
    lVar20 = (longlong)iVar19;
    local_2ec = DAT_1468b5d98;
    local_2f4 = 0.0;
    local_2d8 = 0.0;
    local_2f0 = 0.0;
    fStack_2d4 = 0.0;
    if (-1 < iVar19) {
      plVar14 = (longlong *)(*(longlong *)(lVar15 + 0x78) + lVar20 * 8);
      iVar16 = 0;
      do {
        lVar15 = *plVar14;
        if ((lVar15 != 0) &&
           ((*(char *)((longlong)param_1 + 0x75c) == '\0' || (iVar19 == (int)param_1[0xeb])))) {
          plVar21 = *(longlong **)(lVar15 + 0x70);
          plVar12 = plVar21 + (longlong)*(int *)(lVar15 + 0x78) * 2;
          iVar2 = 0;
          for (; plVar21 != plVar12; plVar21 = plVar21 + 2) {
            if ((*plVar21 == 0) || ((int)plVar21[1] == -1)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            iVar9 = iVar2 + 1;
            if (!bVar8) {
              iVar9 = iVar2;
            }
            iVar2 = iVar9;
          }
          iVar16 = iVar16 + iVar2 * 6;
        }
        iVar19 = iVar19 + -1;
        plVar14 = plVar14 + -1;
        lVar20 = lVar20 + -1;
      } while (-1 < lVar20);
    }
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != iVar16) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_3,iVar16);
    }
    local_1f0 = (**(code **)(*param_1 + 0x560))(param_1,0);
    if (local_1f0 == 0) {
      local_1f0 = UMaterial::GetDefaultMaterial(0);
    }
    iVar16 = *(int *)(param_1[0xec] + 0x80) + -1;
    if (-1 < iVar16) {
      local_1f8 = (longlong)iVar16;
      fVar28 = local_290;
      fVar30 = local_294;
      fVar31 = local_298;
      fVar32 = local_2a8;
      fVar25 = local_2b4;
      fVar23 = local_2b0;
      do {
        lVar15 = *(longlong *)(*(longlong *)(param_1[0xec] + 0x78) + local_1f8 * 8);
        if ((lVar15 != 0) &&
           ((*(char *)((longlong)param_1 + 0x75c) == '\0' || (iVar16 == (int)param_1[0xeb])))) {
          local_128 = *(float *)(lVar15 + 0x54) * *(float *)(param_1 + 0xe9);
          local_124 = *(float *)(lVar15 + 0x58) * *(float *)((longlong)param_1 + 0x74c);
          local_120 = *(float *)(lVar15 + 0x5c) * *(float *)(param_1 + 0xea);
          local_11c = *(float *)(lVar15 + 0x60) * *(float *)((longlong)param_1 + 0x754);
          local_2c0 = iVar16;
          FLinearColor::ToFColor(&local_128,&local_318,0);
          lVar20 = param_1[0xec];
          plVar12 = (longlong *)0x0;
          plVar14 = *(longlong **)(lVar15 + 0x70);
          local_2c4 = 0;
          plVar21 = plVar12;
          if (0 < *(int *)(lVar20 + 0x2c)) {
            do {
              bVar1 = *(byte *)(lVar20 + 0x8d);
              uVar22 = (uint)plVar12;
              if (bVar1 == 1) {
                fVar24 = (fVar31 - local_2b8 * 0.5) + fVar32 * 0.5;
                fVar27 = (fVar30 - fVar25 * 0.5) + local_2a4 * 0.5;
                fVar29 = (fVar28 - fVar23 * 0.5) + local_2a0 * 0.5;
              }
              else {
                fVar24 = fVar31;
                fVar27 = fVar30;
                fVar29 = fVar28;
                if ((1 < bVar1) && (bVar1 < 4)) {
                  fVar29 = (float)(uVar22 & 1);
                  fVar24 = fVar29 * local_1c8 + fVar31;
                  fVar27 = fVar29 * local_1c4 + fVar30;
                  fVar29 = fVar29 * local_1c0 + fVar28;
                }
              }
              local_304 = 0;
              local_2e8 = fVar29;
              local_2e4 = fVar24;
              local_2e0 = fVar27;
              if (0 < *(int *)(lVar20 + 0x28)) {
                local_260 = (float)(int)uVar22;
                fVar33 = local_260 * fVar32;
                local_27c = local_260 * local_2a0;
                fVar34 = local_260 * local_2a4;
                local_278 = (float)iVar16;
                local_284 = fVar33;
                local_280 = fVar34;
                do {
                  plVar12 = local_118;
                  local_288 = *(int *)(lVar20 + 0x30);
                  local_25c = *(int *)(lVar20 + 0x34);
                  local_1e8 = plVar14 + 2;
                  fVar30 = (float)local_304;
                  lVar15 = *plVar14;
                  fVar28 = local_278 * *(float *)(lVar20 + 0x44) +
                           fVar30 * *(float *)(lVar20 + 0x3c) +
                           local_260 * *(float *)(lVar20 + 0x40);
                  fVar32 = fVar30 * local_2b8 + fVar33 + fVar24 + fVar28 * DAT_146267240;
                  fVar31 = fVar30 * fVar25 + fVar34 + fVar27 + fVar28 * DAT_146267244;
                  fVar28 = fVar30 * fVar23 + local_27c + fVar29 + fVar28 * DAT_146267248;
                  if (lVar15 != 0) {
                    lVar7 = *(longlong *)(lVar15 + 0x30);
                    uVar22 = *(uint *)(plVar14 + 1) & 0x1fffffff;
                    if (lVar7 == 0) {
                      iVar16 = 0;
                    }
                    else {
                      iVar16 = (((((int)((ulonglong)*(undefined8 *)(lVar7 + 200) >> 0x20) -
                                  *(int *)(lVar15 + 0x54)) - *(int *)(lVar15 + 0x4c)) +
                                *(int *)(lVar15 + 0x5c)) /
                               (*(int *)(lVar15 + 0x2c) + *(int *)(lVar15 + 0x5c))) *
                               ((*(int *)(lVar15 + 0x58) +
                                (((int)*(undefined8 *)(lVar7 + 200) - *(int *)(lVar15 + 0x50)) -
                                *(int *)(lVar15 + 0x48))) /
                               (*(int *)(lVar15 + 0x28) + *(int *)(lVar15 + 0x58)));
                    }
                    iVar19 = 0;
                    param_1 = local_268;
                    if ((int)uVar22 < iVar16) {
                      iVar16 = *(int *)(lVar15 + 0x48);
                      iVar2 = *(int *)(lVar15 + 0x58);
                      if (lVar7 == 0) {
                        iVar9 = *(int *)(lVar15 + 0x28);
                      }
                      else {
                        iVar9 = *(int *)(lVar15 + 0x28);
                        iVar19 = (((*(int *)(lVar7 + 200) - *(int *)(lVar15 + 0x50)) - iVar16) +
                                 iVar2) / (iVar2 + iVar9);
                      }
                      iVar3 = *(int *)(lVar15 + 0x5c);
                      iVar4 = *(int *)(lVar15 + 0x2c);
                      iVar5 = *(int *)(lVar15 + 0x4c);
                      fVar25 = local_2b4;
                      fVar23 = local_2b0;
                      if (lVar7 != 0) {
                        if ((lVar7 != local_270) || (plVar21 == (longlong *)0x0)) {
                          iVar6 = (int)local_118[1];
                          *(int *)(local_118 + 1) = iVar6 + 1;
                          if (*(int *)((longlong)local_118 + 0xc) < iVar6 + 1) {
                            TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow
                                      (local_118,iVar6);
                          }
                          plVar12 = (longlong *)(*plVar12 + (longlong)iVar6 * 0x48);
                          _Src_00 = (longlong *)0x0;
                          plVar21 = _Src_00;
                          if (plVar12 != (longlong *)0x0) {
                            *plVar12 = 0;
                            plVar12[6] = 0;
                            plVar12[7] = 0;
                            *(undefined4 *)(plVar12 + 8) = 0xffffffff;
                            *(undefined4 *)((longlong)plVar12 + 0x44) = 0;
                            plVar21 = plVar12;
                          }
                          plVar21[1] = lVar7;
                          local_1d8 = (longlong *)0x0;
                          iVar6 = *(int *)(*plVar14 + 0x40);
                          _Src = *(void **)(*plVar14 + 0x38);
                          local_1d0 = iVar6;
                          if (iVar6 == 0) {
                            local_1cc = 0;
                          }
                          else {
                            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                                      (&local_1d8,iVar6,0);
                            _Src_00 = local_1d8;
                            _guard_xfg_dispatch_icall_nop(local_1d8,_Src,(longlong)iVar6 << 3);
                          }
                          iVar6 = local_1d0;
                          *(int *)(plVar21 + 7) = local_1d0;
                          if ((local_1d0 == 0) && (*(int *)((longlong)plVar21 + 0x3c) == 0)) {
                            *(undefined4 *)((longlong)plVar21 + 0x3c) = 0;
                          }
                          else {
                            TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
                                      (plVar21 + 2,local_1d0);
                            plVar12 = (longlong *)plVar21[6];
                            if ((longlong *)plVar21[6] == (longlong *)0x0) {
                              plVar12 = plVar21 + 2;
                            }
                            _guard_xfg_dispatch_icall_nop(plVar12,_Src_00,(longlong)iVar6 << 3);
                          }
                          if (_Src_00 != (longlong *)0x0) {
                            FMemory::Free(_Src_00);
                          }
                          *plVar21 = local_1f0;
                          *(int *)(plVar21 + 8) = (int)param_3[1];
                          local_2c8 = (fVar32 * DAT_146267240 + fVar31 * DAT_146267244 +
                                      fVar28 * DAT_146267248) /
                                      (DAT_146267240 * DAT_146267240 + DAT_146267244 * DAT_146267244
                                      + DAT_146267248 * DAT_146267248);
                          local_2cc = local_2c8 * DAT_146267240;
                          local_310 = local_2c8 * DAT_146267244;
                          local_2c8 = local_2c8 * DAT_146267248;
                        }
                        if (lVar7 != local_270) {
                          lVar15 = *plVar14;
                          local_2f8 = 1.0 / (float)(int)*(undefined8 *)(lVar7 + 200);
                          local_300 = 1.0 / (float)(int)((ulonglong)*(undefined8 *)(lVar7 + 200) >>
                                                        0x20);
                          if (lVar15 == 0) {
                            local_314 = DAT_1468b5d90;
                            local_2fc = DAT_1468b5d94;
                            fVar26 = DAT_1468b5d98;
                            iVar6 = local_288;
                            iVar11 = local_25c;
                          }
                          else {
                            iVar11 = (int)((ulonglong)*(undefined8 *)(lVar15 + 0x28) >> 0x20);
                            fVar35 = (float)(int)*(undefined8 *)(lVar15 + 0x60) * local_2d0;
                            fVar26 = (float)((iVar11 - (int)((ulonglong)
                                                             *(undefined8 *)(lVar15 + 0x60) >> 0x20)
                                             ) - local_25c) * local_2d0;
                            local_314 = fVar35 * DAT_146267220 + fVar26 * DAT_146267230;
                            local_2fc = fVar35 * DAT_146267224 + fVar26 * DAT_146267234;
                            fVar26 = fVar35 * DAT_146267228 + fVar26 * DAT_146267238;
                            iVar6 = (int)*(undefined8 *)(lVar15 + 0x28);
                          }
                          fVar36 = (float)iVar11 * local_2d0;
                          fVar35 = (float)iVar6 * local_2d0;
                          local_30c = (float)iVar6 * local_2f8;
                          local_308 = (float)iVar11 * local_300;
                          local_2f4 = fVar35;
                          local_2f0 = fVar36;
                          local_2ec = fVar26;
                          local_2d8 = fVar35;
                          fStack_2d4 = fVar36;
                          local_270 = lVar7;
                        }
                        fVar31 = fVar31 + local_2fc;
                        fVar32 = fVar32 + local_314;
                        fVar28 = fVar28 + fVar26;
                        local_108[0] = (float)((iVar2 + iVar9) *
                                               (int)((longlong)(ulonglong)uVar22 % (longlong)iVar19)
                                              + iVar16) * local_2f8;
                        uVar10 = (ulonglong)(*(uint *)(plVar14 + 1) >> 0x1d);
                        local_f8[2] = (float)((iVar3 + iVar4) *
                                              (int)((longlong)(ulonglong)uVar22 / (longlong)iVar19)
                                             + iVar5) * local_300;
                        fVar30 = fVar31 * DAT_146267224 + fVar32 * DAT_146267220 +
                                 fVar28 * DAT_146267228;
                        fVar26 = fVar31 * DAT_146267234 + fVar32 * DAT_146267230 +
                                 fVar28 * DAT_146267238;
                        if ((*(uint *)(plVar14 + 1) >> 0x1d & 1) == 0) {
                          pfVar18 = (float *)&local_110;
                          local_110 = CONCAT44(fStack_2d4,local_2d8);
                        }
                        else {
                          local_1e0 = fVar36;
                          pfVar18 = &local_1e0;
                          local_1dc = fVar35;
                        }
                        fVar33 = *pfVar18 + fVar30;
                        fVar34 = fVar26 - pfVar18[1];
                        bVar1 = (&DAT_1440ff65b)[uVar10 * 4];
                        iVar16 = (int)param_3[1];
                        local_108[1] = local_30c + local_108[0];
                        local_108[2] = local_30c + local_108[0];
                        local_f8[0] = local_308 + local_f8[2];
                        local_f8[1] = local_308 + local_f8[2];
                        local_108[3] = local_108[0];
                        fVar23 = fVar34 * DAT_146267234;
                        fVar35 = local_108[(byte)(&DAT_1440ff658)[uVar10 * 4]];
                        local_258 = fVar33 * DAT_146267220 + fVar34 * DAT_146267230 + local_2cc;
                        fVar36 = local_108[(byte)(&DAT_1440ff659)[uVar10 * 4]];
                        fVar28 = local_108[(byte)(&DAT_1440ff65a)[uVar10 * 4]];
                        local_f8[3] = local_f8[2];
                        fVar31 = local_f8[(byte)(&DAT_1440ff658)[uVar10 * 4]];
                        fVar32 = local_f8[(byte)(&DAT_1440ff659)[uVar10 * 4]];
                        fVar25 = local_f8[(byte)(&DAT_1440ff65a)[uVar10 * 4]];
                        fVar29 = fVar33 * DAT_146267224;
                        fVar27 = fVar33 * DAT_146267228;
                        fVar24 = fVar34 * DAT_146267238;
                        *(int *)(param_3 + 1) = iVar16 + 1;
                        fStack_254 = fVar29 + fVar23 + local_310;
                        local_250 = fVar27 + fVar24 + local_2c8;
                        if (*(int *)((longlong)param_3 + 0xc) < iVar16 + 1) {
                          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
                          ::ResizeGrow(param_3,iVar16);
                        }
                        puVar17 = (undefined8 *)((longlong)iVar16 * 0x5c + *param_3);
                        if (puVar17 != (undefined8 *)0x0) {
                          *puVar17 = CONCAT44(fStack_254,local_258);
                          *(float *)(puVar17 + 1) = local_250;
                          local_1b8 = 0x3f800000;
                          local_1b0 = 0;
                          FPackedNormal::FPackedNormal((longlong)puVar17 + 0x4c,&local_1b8);
                          local_1ac = 0;
                          local_1a4 = 0x3f800000;
                          FPackedNormal::FPackedNormal(puVar17 + 10,&local_1ac);
                          lVar15 = 0;
                          puVar13 = (undefined4 *)((longlong)puVar17 + 0x54);
                          if (puVar13 <= (undefined4 *)((longlong)puVar17 + 0x5cU)) {
                            do {
                              lVar15 = lVar15 + 1;
                              *puVar13 = local_318;
                              puVar13 = puVar13 + 1;
                            } while (lVar15 != 2);
                          }
                          *(undefined1 *)((longlong)puVar17 + 0x53) = 0x7f;
                          *(float *)((longlong)puVar17 + 0xc) = fVar36;
                          *(float *)(puVar17 + 2) = fVar32;
                          *(float *)((longlong)puVar17 + 0x14) = fVar36;
                          *(float *)(puVar17 + 3) = fVar32;
                          *(float *)((longlong)puVar17 + 0x1c) = fVar36;
                          *(float *)(puVar17 + 4) = fVar32;
                          *(float *)((longlong)puVar17 + 0x24) = fVar36;
                          *(float *)(puVar17 + 5) = fVar32;
                          *(float *)((longlong)puVar17 + 0x2c) = fVar36;
                          *(float *)(puVar17 + 6) = fVar32;
                          *(float *)((longlong)puVar17 + 0x34) = fVar36;
                          *(float *)(puVar17 + 7) = fVar32;
                          *(float *)((longlong)puVar17 + 0x3c) = fVar36;
                          *(float *)(puVar17 + 8) = fVar32;
                          *(float *)((longlong)puVar17 + 0x44) = fVar36;
                          *(float *)(puVar17 + 9) = fVar32;
                        }
                        fVar32 = local_2c8;
                        fVar36 = local_2cc;
                        lVar15 = 0;
                        *(int *)((longlong)plVar21 + 0x44) = *(int *)((longlong)plVar21 + 0x44) + 1;
                        iVar16 = (int)param_3[1];
                        fVar29 = fVar33 * DAT_146267224;
                        fVar23 = fVar26 * DAT_146267234;
                        local_248 = fVar33 * DAT_146267220 + fVar26 * DAT_146267230 + local_2cc;
                        fVar24 = fVar26 * DAT_146267238;
                        fVar27 = fVar33 * DAT_146267228;
                        *(int *)(param_3 + 1) = iVar16 + 1;
                        fStack_244 = fVar29 + fVar23 + local_310;
                        local_240 = fVar27 + fVar24 + local_2c8;
                        if (*(int *)((longlong)param_3 + 0xc) < iVar16 + 1) {
                          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
                          ::ResizeGrow(param_3,iVar16);
                        }
                        puVar17 = (undefined8 *)((longlong)iVar16 * 0x5c + *param_3);
                        if (puVar17 != (undefined8 *)0x0) {
                          *puVar17 = CONCAT44(fStack_244,local_248);
                          *(float *)(puVar17 + 1) = local_240;
                          local_1a0 = 0x3f800000;
                          local_198 = 0;
                          FPackedNormal::FPackedNormal((longlong)puVar17 + 0x4c,&local_1a0);
                          local_194 = 0;
                          local_18c = 0x3f800000;
                          FPackedNormal::FPackedNormal(puVar17 + 10,&local_194);
                          puVar13 = (undefined4 *)((longlong)puVar17 + 0x54);
                          lVar20 = lVar15;
                          if (puVar13 <= (undefined4 *)((longlong)puVar17 + 0x5cU)) {
                            do {
                              lVar20 = lVar20 + 1;
                              *puVar13 = local_318;
                              puVar13 = puVar13 + 1;
                            } while (lVar20 != 2);
                          }
                          *(undefined1 *)((longlong)puVar17 + 0x53) = 0x7f;
                          *(float *)((longlong)puVar17 + 0xc) = fVar28;
                          *(float *)(puVar17 + 2) = fVar25;
                          *(float *)((longlong)puVar17 + 0x14) = fVar28;
                          *(float *)(puVar17 + 3) = fVar25;
                          *(float *)((longlong)puVar17 + 0x1c) = fVar28;
                          *(float *)(puVar17 + 4) = fVar25;
                          *(float *)((longlong)puVar17 + 0x24) = fVar28;
                          *(float *)(puVar17 + 5) = fVar25;
                          *(float *)((longlong)puVar17 + 0x2c) = fVar28;
                          *(float *)(puVar17 + 6) = fVar25;
                          *(float *)((longlong)puVar17 + 0x34) = fVar28;
                          *(float *)(puVar17 + 7) = fVar25;
                          *(float *)((longlong)puVar17 + 0x3c) = fVar28;
                          *(float *)(puVar17 + 8) = fVar25;
                          *(float *)((longlong)puVar17 + 0x44) = fVar28;
                          *(float *)(puVar17 + 9) = fVar25;
                        }
                        *(int *)((longlong)plVar21 + 0x44) = *(int *)((longlong)plVar21 + 0x44) + 1;
                        iVar16 = (int)param_3[1];
                        fVar29 = fVar34 * DAT_146267234;
                        fVar23 = fVar30 * DAT_146267224;
                        local_238 = fVar34 * DAT_146267230 + fVar30 * DAT_146267220 + fVar36;
                        fVar24 = fVar30 * DAT_146267228;
                        fVar27 = fVar34 * DAT_146267238;
                        *(int *)(param_3 + 1) = iVar16 + 1;
                        fStack_234 = fVar29 + fVar23 + local_310;
                        local_230 = fVar27 + fVar24 + fVar32;
                        if (*(int *)((longlong)param_3 + 0xc) < iVar16 + 1) {
                          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
                          ::ResizeGrow(param_3,iVar16);
                        }
                        puVar17 = (undefined8 *)((longlong)iVar16 * 0x5c + *param_3);
                        if (puVar17 != (undefined8 *)0x0) {
                          *puVar17 = CONCAT44(fStack_234,local_238);
                          *(float *)(puVar17 + 1) = local_230;
                          local_188 = 0x3f800000;
                          local_180 = 0;
                          FPackedNormal::FPackedNormal((longlong)puVar17 + 0x4c,&local_188);
                          local_17c = 0;
                          local_174 = 0x3f800000;
                          FPackedNormal::FPackedNormal(puVar17 + 10,&local_17c);
                          puVar13 = (undefined4 *)((longlong)puVar17 + 0x54);
                          lVar20 = lVar15;
                          if (puVar13 <= (undefined4 *)((longlong)puVar17 + 0x5cU)) {
                            do {
                              lVar20 = lVar20 + 1;
                              *puVar13 = local_318;
                              puVar13 = puVar13 + 1;
                            } while (lVar20 != 2);
                          }
                          *(undefined1 *)((longlong)puVar17 + 0x53) = 0x7f;
                          *(float *)((longlong)puVar17 + 0xc) = fVar35;
                          *(float *)(puVar17 + 2) = fVar31;
                          *(float *)((longlong)puVar17 + 0x14) = fVar35;
                          *(float *)(puVar17 + 3) = fVar31;
                          *(float *)((longlong)puVar17 + 0x1c) = fVar35;
                          *(float *)(puVar17 + 4) = fVar31;
                          *(float *)((longlong)puVar17 + 0x24) = fVar35;
                          *(float *)(puVar17 + 5) = fVar31;
                          *(float *)((longlong)puVar17 + 0x2c) = fVar35;
                          *(float *)(puVar17 + 6) = fVar31;
                          *(float *)((longlong)puVar17 + 0x34) = fVar35;
                          *(float *)(puVar17 + 7) = fVar31;
                          *(float *)((longlong)puVar17 + 0x3c) = fVar35;
                          *(float *)(puVar17 + 8) = fVar31;
                          *(float *)((longlong)puVar17 + 0x44) = fVar35;
                          *(float *)(puVar17 + 9) = fVar31;
                        }
                        *(int *)((longlong)plVar21 + 0x44) = *(int *)((longlong)plVar21 + 0x44) + 1;
                        iVar16 = (int)param_3[1];
                        fVar27 = fVar33 * DAT_146267224;
                        fVar29 = fVar33 * DAT_146267228;
                        fVar23 = fVar26 * DAT_146267234;
                        local_228 = fVar33 * DAT_146267220 + fVar26 * DAT_146267230 + fVar36;
                        fVar24 = fVar26 * DAT_146267238;
                        *(int *)(param_3 + 1) = iVar16 + 1;
                        fStack_224 = fVar27 + fVar23 + local_310;
                        local_220 = fVar29 + fVar24 + fVar32;
                        if (*(int *)((longlong)param_3 + 0xc) < iVar16 + 1) {
                          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
                          ::ResizeGrow(param_3,iVar16);
                        }
                        puVar17 = (undefined8 *)((longlong)iVar16 * 0x5c + *param_3);
                        if (puVar17 != (undefined8 *)0x0) {
                          *puVar17 = CONCAT44(fStack_224,local_228);
                          *(float *)(puVar17 + 1) = local_220;
                          local_170 = 0x3f800000;
                          local_168 = 0;
                          FPackedNormal::FPackedNormal((longlong)puVar17 + 0x4c,&local_170);
                          local_164 = 0;
                          local_15c = 0x3f800000;
                          FPackedNormal::FPackedNormal(puVar17 + 10,&local_164);
                          puVar13 = (undefined4 *)((longlong)puVar17 + 0x54);
                          lVar20 = lVar15;
                          if (puVar13 <= (undefined4 *)((longlong)puVar17 + 0x5cU)) {
                            do {
                              lVar20 = lVar20 + 1;
                              *puVar13 = local_318;
                              puVar13 = puVar13 + 1;
                            } while (lVar20 != 2);
                          }
                          *(undefined1 *)((longlong)puVar17 + 0x53) = 0x7f;
                          *(float *)((longlong)puVar17 + 0xc) = fVar28;
                          *(float *)(puVar17 + 2) = fVar25;
                          *(float *)((longlong)puVar17 + 0x14) = fVar28;
                          *(float *)(puVar17 + 3) = fVar25;
                          *(float *)((longlong)puVar17 + 0x1c) = fVar28;
                          *(float *)(puVar17 + 4) = fVar25;
                          *(float *)((longlong)puVar17 + 0x24) = fVar28;
                          *(float *)(puVar17 + 5) = fVar25;
                          *(float *)((longlong)puVar17 + 0x2c) = fVar28;
                          *(float *)(puVar17 + 6) = fVar25;
                          *(float *)((longlong)puVar17 + 0x34) = fVar28;
                          *(float *)(puVar17 + 7) = fVar25;
                          *(float *)((longlong)puVar17 + 0x3c) = fVar28;
                          *(float *)(puVar17 + 8) = fVar25;
                          *(float *)((longlong)puVar17 + 0x44) = fVar28;
                          *(float *)(puVar17 + 9) = fVar25;
                        }
                        fVar28 = local_310;
                        *(int *)((longlong)plVar21 + 0x44) = *(int *)((longlong)plVar21 + 0x44) + 1;
                        iVar16 = (int)param_3[1];
                        fVar23 = fVar30 * DAT_146267224;
                        fVar24 = fVar26 * DAT_146267238;
                        fVar25 = fVar26 * DAT_146267234;
                        local_218 = fVar30 * DAT_146267220 + fVar26 * DAT_146267230 + fVar36;
                        fVar26 = fVar30 * DAT_146267228;
                        *(int *)(param_3 + 1) = iVar16 + 1;
                        fStack_214 = fVar23 + fVar25 + local_310;
                        local_210 = fVar26 + fVar24 + fVar32;
                        if (*(int *)((longlong)param_3 + 0xc) < iVar16 + 1) {
                          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
                          ::ResizeGrow(param_3,iVar16);
                        }
                        puVar17 = (undefined8 *)((longlong)iVar16 * 0x5c + *param_3);
                        if (puVar17 != (undefined8 *)0x0) {
                          *puVar17 = CONCAT44(fStack_214,local_218);
                          *(float *)(puVar17 + 1) = local_210;
                          local_158 = 0x3f800000;
                          local_150 = 0;
                          FPackedNormal::FPackedNormal((longlong)puVar17 + 0x4c,&local_158);
                          local_14c = 0;
                          local_144 = 0x3f800000;
                          FPackedNormal::FPackedNormal(puVar17 + 10,&local_14c);
                          puVar13 = (undefined4 *)((longlong)puVar17 + 0x54);
                          lVar20 = lVar15;
                          if (puVar13 <= (undefined4 *)((longlong)puVar17 + 0x5cU)) {
                            do {
                              lVar20 = lVar20 + 1;
                              *puVar13 = local_318;
                              puVar13 = puVar13 + 1;
                            } while (lVar20 != 2);
                          }
                          fVar26 = local_108[bVar1];
                          fVar25 = local_f8[bVar1];
                          *(undefined1 *)((longlong)puVar17 + 0x53) = 0x7f;
                          *(float *)((longlong)puVar17 + 0xc) = fVar26;
                          *(float *)(puVar17 + 2) = fVar25;
                          *(float *)((longlong)puVar17 + 0x14) = fVar26;
                          *(float *)(puVar17 + 3) = fVar25;
                          *(float *)((longlong)puVar17 + 0x1c) = fVar26;
                          *(float *)(puVar17 + 4) = fVar25;
                          *(float *)((longlong)puVar17 + 0x24) = fVar26;
                          *(float *)(puVar17 + 5) = fVar25;
                          *(float *)((longlong)puVar17 + 0x2c) = fVar26;
                          *(float *)(puVar17 + 6) = fVar25;
                          *(float *)((longlong)puVar17 + 0x34) = fVar26;
                          *(float *)(puVar17 + 7) = fVar25;
                          *(float *)((longlong)puVar17 + 0x3c) = fVar26;
                          *(float *)(puVar17 + 8) = fVar25;
                          *(float *)((longlong)puVar17 + 0x44) = fVar26;
                          *(float *)(puVar17 + 9) = fVar25;
                        }
                        *(int *)((longlong)plVar21 + 0x44) = *(int *)((longlong)plVar21 + 0x44) + 1;
                        fVar23 = fVar34 * DAT_146267230;
                        iVar16 = (int)param_3[1];
                        fVar24 = fVar34 * DAT_146267234;
                        fVar26 = fVar30 * DAT_146267220;
                        fVar34 = fVar34 * DAT_146267238;
                        fVar25 = fVar30 * DAT_146267224;
                        fVar30 = fVar30 * DAT_146267228;
                        *(int *)(param_3 + 1) = iVar16 + 1;
                        local_208 = fVar23 + fVar26 + fVar36;
                        fStack_204 = fVar24 + fVar25 + fVar28;
                        local_200 = fVar34 + fVar30 + fVar32;
                        if (*(int *)((longlong)param_3 + 0xc) < iVar16 + 1) {
                          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
                          ::ResizeGrow(param_3,iVar16);
                        }
                        puVar17 = (undefined8 *)((longlong)iVar16 * 0x5c + *param_3);
                        if (puVar17 != (undefined8 *)0x0) {
                          *puVar17 = CONCAT44(fStack_204,local_208);
                          *(float *)(puVar17 + 1) = local_200;
                          local_140 = 0x3f800000;
                          local_138 = 0;
                          FPackedNormal::FPackedNormal((longlong)puVar17 + 0x4c,&local_140);
                          local_134 = 0;
                          local_12c = 0x3f800000;
                          FPackedNormal::FPackedNormal(puVar17 + 10,&local_134);
                          puVar13 = (undefined4 *)((longlong)puVar17 + 0x54);
                          if (puVar13 <= (undefined4 *)((longlong)puVar17 + 0x5cU)) {
                            do {
                              lVar15 = lVar15 + 1;
                              *puVar13 = local_318;
                              puVar13 = puVar13 + 1;
                            } while (lVar15 != 2);
                          }
                          *(undefined1 *)((longlong)puVar17 + 0x53) = 0x7f;
                          *(float *)((longlong)puVar17 + 0xc) = fVar35;
                          *(float *)(puVar17 + 2) = fVar31;
                          *(float *)((longlong)puVar17 + 0x14) = fVar35;
                          *(float *)(puVar17 + 3) = fVar31;
                          *(float *)((longlong)puVar17 + 0x1c) = fVar35;
                          *(float *)(puVar17 + 4) = fVar31;
                          *(float *)((longlong)puVar17 + 0x24) = fVar35;
                          *(float *)(puVar17 + 5) = fVar31;
                          *(float *)((longlong)puVar17 + 0x2c) = fVar35;
                          *(float *)(puVar17 + 6) = fVar31;
                          *(float *)((longlong)puVar17 + 0x34) = fVar35;
                          *(float *)(puVar17 + 7) = fVar31;
                          *(float *)((longlong)puVar17 + 0x3c) = fVar35;
                          *(float *)(puVar17 + 8) = fVar31;
                          *(float *)((longlong)puVar17 + 0x44) = fVar35;
                          *(float *)(puVar17 + 9) = fVar31;
                        }
                        *(int *)((longlong)plVar21 + 0x44) = *(int *)((longlong)plVar21 + 0x44) + 1;
                        lVar20 = local_268[0xec];
                        param_1 = local_268;
                        fVar24 = local_2e4;
                        fVar27 = local_2e0;
                        fVar33 = local_284;
                        fVar34 = local_280;
                        fVar35 = local_2f4;
                        fVar36 = local_2f0;
                        fVar29 = local_2e8;
                        fVar25 = local_2b4;
                        fVar26 = local_2ec;
                        fVar23 = local_2b0;
                      }
                    }
                  }
                  local_304 = local_304 + 1;
                  plVar14 = local_1e8;
                  fVar28 = local_290;
                  fVar30 = local_294;
                  fVar31 = local_298;
                  fVar32 = local_2a8;
                  iVar16 = local_2c0;
                  uVar22 = local_2c4;
                } while (local_304 < *(int *)(lVar20 + 0x28));
              }
              local_2c4 = uVar22 + 1;
              plVar12 = (longlong *)(ulonglong)local_2c4;
            } while ((int)local_2c4 < *(int *)(lVar20 + 0x2c));
          }
        }
        iVar16 = iVar16 + -1;
        local_1f8 = local_1f8 + -1;
      } while (-1 < iVar16);
    }
  }
  return;
}



// FUNCTION 1408215e0 ReducePolygons body=1476 status=ok
// SIG undefined ReducePolygons(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * PaperGeomTools::ReducePolygons(longlong *param_1,longlong *param_2,longlong *param_3)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int *piVar14;
  void *pvVar15;
  int *piVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  int *piVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int *piVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  int *piVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint local_res20;
  longlong local_c0;
  longlong local_b8;
  int *local_a0;
  uint local_98;
  uint local_94;
  void *local_90;
  int local_88;
  undefined4 local_84;
  ulonglong local_80;
  uint local_78;
  uint local_74;
  
  uVar25 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = (longlong)(int)param_2[1];
  local_80 = 0;
  local_74 = 0;
  uVar24 = uVar25;
  uVar13 = uVar25;
  uVar21 = uVar25;
  uVar28 = uVar25;
  lVar29 = lVar7;
  if (0 < lVar7) {
    do {
      lVar17 = *param_2;
      auVar33._0_12_ = ZEXT812(0xff7fc99e);
      auVar33._12_4_ = 0;
      uVar22 = *(uint *)(uVar13 + 8 + lVar17);
      lVar19 = (longlong)(int)uVar22;
      uVar8 = uVar25;
      if ((0 < (int)uVar22) && (7 < uVar22)) {
        lVar3 = *(longlong *)(uVar13 + lVar17);
        uVar9 = uVar22 & 0x80000007;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
        }
        lVar20 = 0x10;
        auVar33 = _DAT_144101750;
        auVar34 = _DAT_144101750;
        do {
          uVar8 = uVar8 + 8;
          auVar4._4_4_ = *(undefined4 *)(lVar20 + -8 + lVar3);
          auVar4._0_4_ = *(undefined4 *)(lVar20 + -0x10 + lVar3);
          auVar4._8_4_ = *(undefined4 *)(lVar20 + lVar3);
          auVar4._12_4_ = *(undefined4 *)(lVar20 + 8 + lVar3);
          auVar33 = maxps(auVar33,auVar4);
          auVar5._4_4_ = *(undefined4 *)(lVar20 + 0x18 + lVar3);
          auVar5._0_4_ = *(undefined4 *)(lVar20 + 0x10 + lVar3);
          auVar5._8_4_ = *(undefined4 *)(lVar20 + 0x20 + lVar3);
          auVar5._12_4_ = *(undefined4 *)(lVar20 + 0x28 + lVar3);
          auVar34 = maxps(auVar34,auVar5);
          lVar20 = lVar20 + 0x40;
        } while ((longlong)uVar8 < (longlong)(int)(uVar22 - uVar9));
        auVar33 = maxps(auVar33,auVar34);
        auVar34._8_8_ = auVar33._8_8_;
        auVar34._0_8_ = auVar33._8_8_;
        auVar33 = maxps(auVar34,auVar33);
        if (auVar33._0_4_ <= auVar33._4_4_) {
          auVar33._0_4_ = auVar33._4_4_;
        }
      }
      if ((longlong)uVar8 < lVar19) {
        if (3 < (longlong)(lVar19 - uVar8)) {
          lVar3 = *(longlong *)(uVar13 + lVar17);
          do {
            fVar31 = *(float *)(lVar3 + uVar8 * 8);
            if (auVar33._0_4_ <= fVar31) {
              auVar33._0_4_ = fVar31;
            }
            fVar31 = *(float *)(lVar3 + 8 + uVar8 * 8);
            fVar32 = *(float *)(lVar3 + 0x10 + uVar8 * 8);
            if (fVar31 <= auVar33._0_4_) {
              fVar31 = auVar33._0_4_;
            }
            if (fVar32 <= fVar31) {
              fVar32 = fVar31;
            }
            fVar31 = *(float *)(lVar3 + 0x18 + uVar8 * 8);
            uVar8 = uVar8 + 4;
            if (fVar31 <= fVar32) {
              fVar31 = fVar32;
            }
            auVar33 = ZEXT416((uint)fVar31);
          } while ((longlong)uVar8 < lVar19 + -3);
        }
        if ((longlong)uVar8 < lVar19) {
          do {
            fVar31 = *(float *)(*(longlong *)(uVar13 + lVar17) + uVar8 * 8);
            uVar8 = uVar8 + 1;
            if (fVar31 <= auVar33._0_4_) {
              fVar31 = auVar33._0_4_;
            }
            auVar33 = ZEXT416((uint)fVar31);
          } while ((longlong)uVar8 < lVar19);
        }
      }
      local_78 = (int)uVar21 + 1;
      if ((int)uVar28 < (int)local_78) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_80,uVar21);
        uVar28 = (ulonglong)local_74;
        uVar24 = local_80;
      }
      *(int *)(uVar24 + (longlong)(int)uVar21 * 4) = auVar33._0_4_;
      lVar29 = lVar29 + -1;
      uVar13 = uVar13 + 0x10;
      uVar21 = (ulonglong)local_78;
    } while (lVar29 != 0);
    local_c0 = 0;
    local_b8 = 0;
    do {
      piVar10 = (int *)0x0;
      if (*(char *)(local_c0 + *param_3) == '\0') {
        local_90 = (void *)0x0;
        local_88 = *(int *)(local_b8 + 8 + *param_2);
        lVar29 = (longlong)local_88;
        pvVar15 = *(void **)(local_b8 + *param_2);
        if (local_88 == 0) {
          local_84 = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_90,local_88,0);
          ::_guard_xfg_dispatch_icall_nop(local_90,pvVar15,lVar29 << 3);
        }
        iVar12 = local_88;
        local_a0 = (int *)0x0;
        local_94 = 0;
        piVar14 = piVar10;
        piVar16 = piVar10;
        piVar23 = piVar10;
        piVar26 = piVar10;
        piVar30 = piVar10;
        do {
          if ((*(char *)((longlong)piVar16 + *param_3) != '\0') &&
             (cVar6 = IsPointInPolygon(*(undefined8 *)(*param_2 + (longlong)piVar26),&local_90),
             cVar6 != '\0')) {
            iVar11 = (int)piVar14;
            local_98 = iVar11 + 1;
            if ((int)piVar10 < (int)local_98) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a0,piVar14);
              piVar10 = (int *)(ulonglong)local_94;
              piVar30 = local_a0;
            }
            piVar14 = (int *)(ulonglong)local_98;
            piVar30[iVar11] = (int)piVar23;
          }
          iVar11 = (int)piVar14;
          piVar23 = (int *)(ulonglong)((int)piVar23 + 1);
          piVar16 = (int *)((longlong)piVar16 + 1);
          piVar26 = piVar26 + 4;
        } while ((longlong)piVar16 < lVar7);
        uVar24 = 0;
        lVar29 = 0;
        local_res20 = 0;
        if (0 < iVar11) {
          do {
            iVar27 = 0;
            lVar17 = 0;
            iVar11 = (int)piVar14;
            uVar22 = (uint)uVar24;
            if (0 < iVar11) {
              iVar2 = piVar30[lVar29];
              lVar19 = *param_2;
              do {
                if ((lVar29 != lVar17) &&
                   (cVar6 = IsPointInPolygon(*(undefined8 *)((longlong)iVar2 * 0x10 + lVar19),
                                             (longlong)piVar30[lVar17] * 0x10 + lVar19),
                   cVar6 != '\0')) {
                  uVar24 = (ulonglong)(int)local_res20;
                  iVar27 = (iVar11 - local_res20) + -1;
                  if (iVar27 != 0) {
                    ::_guard_xfg_dispatch_icall_nop
                              (piVar30 + uVar24,piVar30 + (int)(local_res20 + 1),
                               (longlong)iVar27 << 2);
                  }
                  local_98 = iVar11 - 1;
                  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&local_a0);
                  piVar14 = (int *)(ulonglong)local_98;
                  piVar30 = local_a0;
                  goto LAB_14082194e;
                }
                iVar27 = iVar27 + 1;
                lVar17 = lVar17 + 1;
                uVar22 = local_res20;
              } while (iVar27 < iVar11);
            }
            local_res20 = uVar22 + 1;
            uVar24 = (ulonglong)local_res20;
            lVar29 = lVar29 + 1;
LAB_14082194e:
            iVar11 = (int)piVar14;
          } while ((int)uVar24 < iVar11);
        }
        lVar29 = (longlong)iVar11;
        if (0 < lVar29) {
          lVar19 = 1;
          piVar10 = piVar30;
          lVar17 = lVar29;
          do {
            lVar17 = lVar17 + -1;
            if (lVar19 < lVar29) {
              lVar3 = lVar19;
              if (3 < lVar17) {
                piVar14 = piVar10 + 3;
                lVar20 = ((lVar29 - lVar19) - 4U >> 2) + 1;
                lVar3 = lVar19 + lVar20 * 4;
                do {
                  iVar11 = *piVar10;
                  fVar31 = *(float *)(local_80 + (longlong)piVar14[-2] * 4);
                  pfVar1 = (float *)(local_80 + (longlong)iVar11 * 4);
                  if (*pfVar1 <= fVar31 && fVar31 != *pfVar1) {
                    *piVar10 = piVar14[-2];
                    piVar14[-2] = iVar11;
                  }
                  iVar11 = *piVar10;
                  fVar31 = *(float *)(local_80 + (longlong)piVar14[-1] * 4);
                  pfVar1 = (float *)(local_80 + (longlong)iVar11 * 4);
                  if (*pfVar1 <= fVar31 && fVar31 != *pfVar1) {
                    *piVar10 = piVar14[-1];
                    piVar14[-1] = iVar11;
                  }
                  iVar11 = *piVar10;
                  fVar31 = *(float *)(local_80 + (longlong)*piVar14 * 4);
                  pfVar1 = (float *)(local_80 + (longlong)iVar11 * 4);
                  if (*pfVar1 <= fVar31 && fVar31 != *pfVar1) {
                    *piVar10 = *piVar14;
                    *piVar14 = iVar11;
                  }
                  iVar11 = *piVar10;
                  fVar31 = *(float *)(local_80 + (longlong)piVar14[1] * 4);
                  pfVar1 = (float *)(local_80 + (longlong)iVar11 * 4);
                  if (*pfVar1 <= fVar31 && fVar31 != *pfVar1) {
                    *piVar10 = piVar14[1];
                    piVar14[1] = iVar11;
                  }
                  piVar14 = piVar14 + 4;
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
              }
              for (; lVar3 < lVar29; lVar3 = lVar3 + 1) {
                    /* WARNING: Read-only address (ram,0x000144101750) is written */
                iVar11 = *piVar10;
                fVar31 = *(float *)(local_80 + (longlong)piVar30[lVar3] * 4);
                pfVar1 = (float *)(local_80 + (longlong)iVar11 * 4);
                if (*pfVar1 <= fVar31 && fVar31 != *pfVar1) {
                  *piVar10 = piVar30[lVar3];
                  piVar30[lVar3] = iVar11;
                }
              }
            }
            lVar19 = lVar19 + 1;
            piVar10 = piVar10 + 1;
          } while (lVar19 <= lVar29);
        }
        lVar17 = 0;
        if (0 < lVar29) {
          do {
            JoinMutuallyVisible(&local_90,(longlong)piVar30[lVar17] * 0x10 + *param_2);
            lVar17 = lVar17 + 1;
            iVar12 = local_88;
          } while (lVar17 < lVar29);
        }
        uVar24 = local_80;
        iVar11 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar11 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar11);
        }
        puVar18 = (undefined8 *)((longlong)iVar11 * 0x10 + *param_1);
        *puVar18 = 0;
        *(int *)(puVar18 + 1) = iVar12;
        if (iVar12 == 0) {
          *(undefined4 *)((longlong)puVar18 + 0xc) = 0;
          pvVar15 = local_90;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar18,iVar12,0);
          pvVar15 = local_90;
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar18,local_90,(longlong)iVar12 << 3);
        }
        if (piVar30 != (int *)0x0) {
          FMemory::Free(piVar30);
        }
        if (pvVar15 != (void *)0x0) {
          FMemory::Free(pvVar15);
        }
      }
      local_c0 = local_c0 + 1;
      local_b8 = local_b8 + 0x10;
    } while (local_c0 < lVar7);
    if (uVar24 != 0) {
      FMemory::Free(uVar24);
    }
  }
  return param_1;
}



// FUNCTION 140821bd0 FUN_140821bd0 body=189 status=ok
// SIG undefined FUN_140821bd0(void)

undefined8 FUN_140821bd0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x730))) {
    FUN_142252d00();
    plVar1 = (longlong *)(param_1 + 0x728);
    iVar3 = *(int *)(param_1 + 0x730);
    iVar2 = (iVar3 - param_2) + -1;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x50 + *plVar1),
                 (void *)((longlong)(param_2 + 1) * 0x50 + *plVar1),(longlong)iVar2 * 0x50);
      iVar3 = *(int *)(param_1 + 0x730);
    }
    *(int *)(param_1 + 0x730) = iVar3 + -1;
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(plVar1);
    if ((*(byte *)(param_1 + 0xb8) & 4) != 0) {
      FUN_140810af0(param_1);
      FUN_140811110(param_1);
    }
    FUN_1423424e0(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 140821c90 RemoveRedundantTriangles body=1245 status=ok
// SIG undefined RemoveRedundantTriangles(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void PaperGeomTools::RemoveRedundantTriangles(longlong *param_1,longlong *param_2)

{
  undefined8 *_Src;
  void *_Src_00;
  longlong *plVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  int local_c0;
  int local_bc;
  ulonglong local_b8;
  uint local_b0;
  uint local_ac;
  int local_a8;
  longlong *local_a0;
  longlong local_98;
  void *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  float local_68 [5];
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar4 = 0;
  local_b8 = 0;
  local_ac = 0;
  uVar9 = uVar4;
  uVar10 = uVar4;
  uVar13 = uVar4;
  local_a0 = param_2;
  local_80 = param_1;
  if (0 < (int)param_2[1]) {
    do {
      lVar6 = (longlong)(int)uVar13;
      local_b0 = (int)uVar13 + 1;
      if ((int)uVar9 < (int)local_b0) {
        TArray<`PaperGeomTools::GenerateConvexPolygonsFromTriangles'::`2'::FLocalTriangle,FDefaultAllocator>
        ::ResizeGrow(&local_b8,uVar13);
        uVar9 = (ulonglong)local_ac;
        uVar10 = local_b8;
      }
      uVar13 = (ulonglong)local_b0;
      iVar3 = (int)uVar4;
      *(int *)(uVar10 + lVar6 * 0xc) = iVar3;
      *(int *)(uVar10 + 8 + lVar6 * 0xc) = iVar3 + 2;
      uVar4 = (ulonglong)(iVar3 + 3U);
      *(int *)(uVar10 + 4 + lVar6 * 0xc) = iVar3 + 1;
      uVar5 = local_b0;
    } while ((int)(iVar3 + 3U) < (int)param_2[1]);
    while (0 < (int)uVar5) {
      local_c8 = (undefined8 *)0x0;
      local_bc = 0;
      iVar2 = (int)uVar13;
      uVar5 = iVar2 - 1;
      local_78 = *(undefined8 *)(uVar10 + (longlong)(int)uVar5 * 0xc);
      iVar3 = *(int *)(uVar10 + 8 + (longlong)(int)uVar5 * 0xc);
      iVar12 = (iVar2 - uVar5) + -1;
      if (iVar12 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(uVar10 + (longlong)(int)uVar5 * 0xc),
                   (void *)(uVar10 + (longlong)iVar2 * 0xc),(longlong)iVar12 * 0xc);
      }
      lVar7 = (longlong)(int)local_78;
      lVar6 = *param_2;
      local_c0 = 1;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      iVar2 = local_c0;
      lVar11 = (longlong)local_c0;
      lVar14 = (longlong)local_78._4_4_;
      local_c0 = local_c0 + 1;
      *local_c8 = *(undefined8 *)(lVar6 + lVar7 * 8);
      lVar6 = *local_a0;
      iVar12 = local_c0;
      if (local_bc < local_c0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_c8,iVar2);
        iVar12 = local_c0;
      }
      local_c0 = iVar12 + 1;
      local_c8[lVar11] = *(undefined8 *)(lVar6 + lVar14 * 8);
      lVar6 = *local_a0;
      if (local_bc < local_c0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_c8,iVar12);
      }
      uVar13 = (ulonglong)uVar5;
      local_a8 = 0;
      local_c8[iVar12] = *(undefined8 *)(lVar6 + (longlong)iVar3 * 8);
      local_98 = 0;
      puVar8 = local_c8;
      uVar10 = local_b8;
      iVar3 = local_c0;
      if (0 < (int)uVar5) {
        do {
          lVar6 = *local_a0;
          lVar7 = (longlong)*(int *)(uVar10 + local_98 * 0xc);
          lVar11 = (longlong)*(int *)(uVar10 + 4 + local_98 * 0xc);
          local_68[0] = *(float *)(lVar6 + lVar7 * 8);
          local_68[1] = (float)*(undefined4 *)(lVar6 + 4 + lVar7 * 8);
          lVar7 = (longlong)*(int *)(uVar10 + 8 + local_98 * 0xc);
          local_68[2] = (float)*(undefined4 *)(lVar6 + lVar11 * 8);
          local_68[3] = (float)*(undefined4 *)(lVar6 + 4 + lVar11 * 8);
          local_68[4] = (float)*(undefined4 *)(lVar6 + lVar7 * 8);
          local_54 = *(undefined4 *)(lVar6 + 4 + lVar7 * 8);
          iVar2 = 0;
          if (0 < iVar3) {
            do {
              iVar12 = iVar2 + 1;
              uVar10 = 0;
              lVar6 = (longlong)(iVar12 % iVar3);
              do {
                uVar5 = (int)uVar10 + 1;
                if ((((ABS(*(float *)(puVar8 + iVar2) - local_68[(ulonglong)(uVar5 % 3) * 2]) <=
                       2e-05) &&
                     (ABS(*(float *)((longlong)puVar8 + (longlong)iVar2 * 8 + 4) -
                          local_68[(ulonglong)(uVar5 % 3) * 2 + 1]) <= 2e-05)) &&
                    (ABS(*(float *)(puVar8 + lVar6) - local_68[uVar10 * 2]) <= 2e-05)) &&
                   (ABS(*(float *)((longlong)puVar8 + lVar6 * 8 + 4) - local_68[uVar10 * 2 + 1]) <=
                    2e-05)) {
                  local_c0 = iVar3 + 1;
                  if (local_bc < local_c0) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_c8,iVar3);
                    puVar8 = local_c8;
                  }
                  iVar2 = local_c0;
                  _Src = puVar8 + lVar6;
                  ::_guard_xfg_dispatch_icall_nop
                            (_Src + 1,_Src,(longlong)(iVar3 - iVar12 % iVar3) << 3);
                  iVar12 = (int)uVar13;
                  iVar3 = (iVar12 - local_a8) + -1;
                  if (0 < iVar3) {
                    iVar3 = 1;
                  }
                  *_Src = *(undefined8 *)(local_68 + (longlong)(int)(((int)uVar10 + 2U) % 3) * 2);
                  if (iVar3 != 0) {
                    ::_guard_xfg_dispatch_icall_nop
                              ((void *)(local_b8 + (longlong)local_a8 * 0xc),
                               (void *)(local_b8 + (longlong)(iVar12 - iVar3) * 0xc),
                               (longlong)iVar3 * 0xc);
                  }
                  local_b0 = iVar12 - 1;
                  TArray<`PaperGeomTools::GenerateConvexPolygonsFromTriangles'::`2'::FLocalTriangle,FDefaultAllocator>
                  ::ResizeShrink(&local_b8);
                  uVar13 = (ulonglong)local_b0;
                  local_98 = -1;
                  local_a8 = -1;
                  uVar10 = local_b8;
                  iVar3 = iVar2;
                  goto LAB_140821f9d;
                }
                uVar10 = (ulonglong)uVar5;
              } while (uVar5 < 3);
              uVar10 = local_b8;
              iVar2 = iVar12;
            } while (iVar12 < iVar3);
          }
LAB_140821f9d:
          local_a8 = local_a8 + 1;
          local_98 = local_98 + 1;
        } while (local_a8 < (int)uVar13);
      }
      local_90 = (void *)0x0;
      local_88 = 0;
      TriangulatePoly(&local_90,&local_c8,0);
      plVar1 = local_80;
      _Src_00 = local_90;
      iVar3 = (int)local_88;
      lVar6 = (longlong)(int)local_88;
      if ((int)local_88 != 0) {
        iVar2 = (int)local_80[1];
        if (*(int *)((longlong)local_80 + 0xc) < (int)local_88 + iVar2) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(local_80);
          iVar2 = (int)plVar1[1];
        }
        ::_guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar2 * 8),_Src_00,lVar6 << 3);
        *(int *)(plVar1 + 1) = (int)plVar1[1] + iVar3;
      }
      if (_Src_00 != (void *)0x0) {
        FMemory::Free(_Src_00);
      }
      if (puVar8 != (undefined8 *)0x0) {
        FMemory::Free(puVar8);
      }
      uVar10 = local_b8;
      param_2 = local_a0;
      uVar5 = (uint)uVar13;
    }
    if (uVar10 != 0) {
      FMemory::Free(uVar10);
    }
  }
  return;
}



// FUNCTION 140822170 ResizeAllocation body=149 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<6,FDefaultAllocator>::ForElementType<FVector4>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x60);
  if (param_3 < 7) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0x60);
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
        *(void **)((longlong)param_1 + 0x60) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x60) = uVar2;
  return;
}



// FUNCTION 140822210 ResizeForCopy body=139 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
               (longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      uVar2 = 4;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      uVar2 = (uint)(uVar3 >> 3);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (uVar2 < 5) {
      if (lVar1 == 0) goto LAB_140822288;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_140822288;
      lVar5 = (longlong)(int)uVar2 << 3;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
  }
LAB_140822288:
  *(uint *)(param_1 + 0x2c) = uVar2;
  return;
}



// FUNCTION 1408222a0 ResizeForCopy body=130 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xd0,0);
    iVar3 = (int)(uVar1 / 0xd0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xd0,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 140822330 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FPlayerReservation,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x50,0);
    iVar3 = (int)(uVar1 / 0x50);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x50,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1408223c0 ResizeForCopy body=112 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeForCopy
               (longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 7) {
      iVar1 = 6;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != param_3) {
    TInlineAllocator<6,FDefaultAllocator>::ForElementType<FVector4>::ResizeAllocation
              (param_1,0,iVar1,0x10);
  }
  *(int *)(param_1 + 0x74) = iVar1;
  return;
}



// FUNCTION 140822430 FUN_140822430 body=311 status=ok
// SIG undefined FUN_140822430(void)

void FUN_140822430(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  uVar2 = *(uint *)(param_1 + 1);
  iVar6 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar2)) {
    iVar6 = uVar2 + 0x10 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3);
  }
  if (iVar6 < (int)uVar2) {
    iVar6 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  _Src = (void *)*param_1;
  if (iVar6 != 0) {
    puStack_30 = local_res8;
    iVar8 = iVar6 * 8;
    local_38 = &DAT_14060d670;
    local_res8[0] = 0;
    lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
    uVar5 = 8;
    uVar2 = uVar5;
    if (0xf < iVar8) {
      uVar2 = 0x10;
    }
    uVar7 = (ulonglong)uVar2;
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    _Dst = (void *)(*(longlong *)(lVar3 + 0x18) + -1 + uVar7 & ~(uVar7 - 1));
    uVar4 = (longlong)iVar8 + (longlong)_Dst;
    if (*(ulonglong *)(lVar3 + 0x20) < uVar4) {
      if (0xf < iVar8) {
        uVar5 = 0x10;
      }
      FMemStackBase::AllocateNewChunk(puVar1,uVar5 + iVar8);
      _Dst = (void *)((*puVar1 - 1) + uVar7 & ~(uVar7 - 1));
      uVar4 = (longlong)iVar8 + (longlong)_Dst;
    }
    *puVar1 = uVar4;
    *param_1 = _Dst;
    if ((_Src != (void *)0x0) && (param_2 != 0)) {
      if (iVar6 <= param_2) {
        param_2 = iVar6;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(param_2 << 3));
    }
  }
  return;
}



// FUNCTION 140822570 FUN_140822570 body=151 status=ok
// SIG undefined FUN_140822570(void)

void FUN_140822570(longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0xe0,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 7);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0xe0,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 140822610 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0xd0,0);
  iVar4 = (int)(uVar3 / 0xd0);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xd0,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1408226a0 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<`PaperGeomTools::GenerateConvexPolygonsFromTriangles'::`2'::FLocalTriangle,FDefaultAllocator>
     ::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0xc,0);
  iVar4 = (int)(uVar3 / 0xc);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xc,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140822730 ResizeGrow body=128 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  if (uVar1 < 7) {
    iVar2 = 6;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x74) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x74) = iVar2;
  TInlineAllocator<6,FDefaultAllocator>::ForElementType<FVector4>::ResizeAllocation
            (param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 1408227b0 ResizeMap body=280 status=ok
// SIG undefined ResizeMap(void)

void UPaperTileLayer::ResizeMap(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *local_28;
  int local_20;
  
  if ((*(int *)(param_1 + 0x40) != (int)param_2) || (*(int *)(param_1 + 0x44) != (int)param_3)) {
    iVar2 = *(int *)(param_1 + 0x68);
    puVar10 = (undefined4 *)0x0;
    *(int *)(param_1 + 0x40) = (int)param_2;
    *(int *)(param_1 + 0x44) = (int)param_3;
    local_20 = *(int *)(param_1 + 0x78);
    lVar11 = (longlong)local_20;
    iVar3 = *(int *)(param_1 + 100);
    _Src = *(void **)(param_1 + 0x70);
    local_28 = (undefined4 *)0x0;
    if (local_20 != 0) {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
      puVar10 = local_28;
      ::_guard_xfg_dispatch_icall_nop(local_28,_Src,lVar11 << 4);
      param_3 = (ulonglong)*(uint *)(param_1 + 0x44);
      param_2 = (ulonglong)*(uint *)(param_1 + 0x40);
    }
    DestructiveAllocateMap(param_1,param_2,param_3);
    iVar4 = iVar3;
    if (*(int *)(param_1 + 0x40) <= iVar3) {
      iVar4 = *(int *)(param_1 + 0x40);
    }
    if (*(int *)(param_1 + 0x44) <= iVar2) {
      iVar2 = *(int *)(param_1 + 0x44);
    }
    iVar13 = 0;
    puVar14 = puVar10;
    if (0 < iVar2) {
      do {
        iVar8 = 0;
        puVar12 = puVar14;
        if (0 < iVar4) {
          do {
            uVar5 = puVar12[1];
            uVar6 = puVar12[2];
            uVar7 = puVar12[3];
            iVar9 = iVar13 * *(int *)(param_1 + 0x40) + iVar8;
            iVar8 = iVar8 + 1;
            puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x10);
            *puVar1 = *puVar12;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            puVar12 = puVar12 + 4;
          } while (iVar8 < iVar4);
        }
        iVar13 = iVar13 + 1;
        puVar14 = puVar14 + (longlong)iVar3 * 4;
      } while (iVar13 < iVar2);
    }
    if (puVar10 != (undefined4 *)0x0) {
      FMemory::Free(puVar10);
    }
  }
  return;
}



// FUNCTION 1408228d0 FUN_1408228d0 body=198 status=ok
// SIG undefined FUN_1408228d0(void)

void FUN_1408228d0(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = param_1[0xec];
  if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x20) == param_1)) {
    iVar3 = 1;
    if (0 < param_2) {
      iVar3 = param_2;
    }
    *(int *)(lVar1 + 0x28) = iVar3;
    iVar3 = 1;
    if (0 < param_3) {
      iVar3 = param_3;
    }
    iVar4 = 0;
    *(int *)(lVar1 + 0x2c) = iVar3;
    if (0 < *(int *)(lVar1 + 0x80)) {
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(lVar5 + *(longlong *)(lVar1 + 0x78));
        (**(code **)(*plVar2 + 0x70))(plVar2,1);
        UPaperTileLayer::ResizeMap
                  (plVar2,*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c));
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 8;
      } while (iVar4 < *(int *)(lVar1 + 0x80));
    }
    FUN_1423424e0(param_1);
    FUN_14234b040(param_1);
    (**(code **)(*param_1 + 0x4b8))(param_1);
  }
  return;
}



// FUNCTION 1408229a0 ResizeShrink body=168 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<`PaperGeomTools::GenerateConvexPolygonsFromTriangles'::`2'::FLocalTriangle,FDefaultAllocator>
          ::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0xc) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0xc,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
        iVar4 = (int)(uVar3 / 0xc);
      }
      goto LAB_140822a16;
    }
    if (iVar4 == 0) goto LAB_140822a16;
  }
  iVar4 = iVar5;
LAB_140822a16:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xc,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 140822a50 ResizeTo body=124 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
     ResizeTo(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x5c,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 6);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x5c,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 140822ad0 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xd0,0);
    iVar3 = (int)(uVar1 / 0xd0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xd0,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140822b50 ResizeTo body=101 status=ok
// SIG undefined ResizeTo(void)

void TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 7) {
      iVar1 = 6;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x74)) {
    *(int *)(param_1 + 0x74) = iVar1;
    TInlineAllocator<6,FDefaultAllocator>::ForElementType<FVector4>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x70),iVar1,0x10);
  }
  return;
}



// FUNCTION 140822bc0 FUN_140822bc0 body=33 status=ok
// SIG undefined FUN_140822bc0(void)

void FUN_140822bc0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x280))(param_1,0);
  *(uint *)((longlong)param_1 + 0x72c) = *(uint *)((longlong)param_1 + 0x72c) | 6;
  return;
}



// FUNCTION 140822bf0 FUN_140822bf0 body=116 status=ok
// SIG undefined FUN_140822bf0(void)

void FUN_140822bf0(longlong *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if ((param_1[0xe3] != 0) && (fVar1 = *(float *)(param_1[0xe3] + 0x28), fVar1 != 0.0)) {
    iVar2 = UPaperFlipbook::GetNumFrames();
    fVar3 = (float)iVar2 / fVar1;
  }
  fVar1 = *(float *)(param_1 + 0xe6);
  *(float *)(param_1 + 0xe6) = fVar3;
  if (fVar1 != fVar3) {
    FUN_1408109e0(param_1);
  }
  (**(code **)(*param_1 + 0x280))(param_1,0);
  *(uint *)((longlong)param_1 + 0x72c) = *(uint *)((longlong)param_1 + 0x72c) | 6;
  return;
}



// FUNCTION 140822c70 FUN_140822c70 body=753 status=ok
// SIG undefined FUN_140822c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140822e65) */
/* WARNING: Removing unreachable block (ram,0x000140822e72) */
/* WARNING: Removing unreachable block (ram,0x000140822e7e) */

void FUN_140822c70(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  DWORD DVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_248 [36];
  undefined4 local_224;
  longlong local_220;
  longlong local_218;
  LARGE_INTEGER local_210;
  LARGE_INTEGER local_208;
  undefined8 local_200;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  longlong local_138;
  undefined8 local_128;
  longlong local_118;
  undefined1 local_108 [56];
  longlong local_d0;
  longlong local_58;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  puVar11 = (undefined8 *)0x0;
  local_224 = 0;
  if (*(longlong *)(param_1 + 0x640) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x718);
    puVar10 = puVar11;
    if (lVar3 != 0) {
      iVar2 = *(int *)(param_1 + 0x734);
      puVar10 = (undefined8 *)0x0;
      if ((-1 < iVar2) && (iVar2 < *(int *)(lVar3 + 0x38))) {
        puVar10 = *(undefined8 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 0x10);
      }
    }
    local_1a0 = DAT_1464aa730;
    local_1d8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_138 = 0;
    local_128 = 0;
    FSpriteDrawCallRecord::BuildFromSprite(local_1e8,puVar10);
    puVar8 = (undefined4 *)FLinearColor::ToFColor(param_1 + 0x738,&local_224,0);
    local_1a0 = *puVar8;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
      local_118 = *(longlong *)(param_1 + 0x640);
      uVar4 = *(undefined8 *)(param_1 + 0x748);
      FSpriteDrawCallRecord::FSpriteDrawCallRecord(local_108,local_1e8);
      local_38 = uVar4;
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_208);
      FUN_1408233d0(local_118,local_108);
      *(undefined8 *)(local_118 + 0x3e0) = local_38;
      QueryPerformanceCounter(&local_210);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_210.s.LowPart - local_208._0_4_);
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_d0 != 0) {
        FMemory::Free();
      }
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x640);
      puVar9 = (undefined8 *)operator_new(0x110);
      puVar10 = puVar11;
      if (puVar9 != (undefined8 *)0x0) {
        local_200 = 0;
        *puVar9 = &PTR_FUN_143f3edd8;
        local_220 = 0;
        *(undefined4 *)(puVar9 + 1) = 0xff;
        *(undefined4 *)((longlong)puVar9 + 0xc) = 1;
        *(undefined1 *)(puVar9 + 0x20) = 0;
        *puVar9 = &PTR_FUN_1440fd510;
        puVar9[0x21] = 0;
        puVar11 = (undefined8 *)&DAT_00000004;
        puVar10 = puVar9;
      }
      if ((puVar11 != (undefined8 *)0x0) && (local_220 != 0)) {
        LOCK();
        piVar1 = (int *)(local_220 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(local_220);
        }
      }
      uVar5 = *(undefined8 *)(param_1 + 0x748);
      puVar10[2] = uVar4;
      FSpriteDrawCallRecord::FSpriteDrawCallRecord(puVar10 + 4,local_1e8);
      puVar10[0x1e] = uVar5;
      lVar3 = puVar10[0x21];
      piVar1 = (int *)(lVar3 + 0x48);
      if (lVar3 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_218 = lVar3;
      FUN_140824270(puVar10,0,0xff,1);
      if (lVar3 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(local_218);
        }
      }
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
    if (local_1b0 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140822f70 FUN_140822f70 body=707 status=ok
// SIG undefined FUN_140822f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014082313f) */
/* WARNING: Removing unreachable block (ram,0x00014082314c) */
/* WARNING: Removing unreachable block (ram,0x000140823158) */

void FUN_140822f70(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined1 auStack_248 [36];
  undefined4 local_224;
  longlong local_220;
  longlong local_218;
  LARGE_INTEGER local_210;
  LARGE_INTEGER local_208;
  undefined8 local_200;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  longlong local_138;
  undefined8 local_128;
  undefined8 local_118;
  undefined1 local_108 [56];
  longlong local_d0;
  longlong local_58;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  puVar9 = (undefined8 *)0x0;
  local_224 = 0;
  if (*(longlong *)(param_1 + 0x640) != 0) {
    local_1d8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = DAT_1464aa730;
    local_138 = 0;
    local_128 = 0;
    FSpriteDrawCallRecord::BuildFromSprite(local_1e8,*(undefined8 *)(param_1 + 0x718));
    puVar7 = (undefined4 *)FLinearColor::ToFColor(param_1 + 0x728,&local_224,0);
    uVar10 = 0xffffffff;
    local_1a0 = *puVar7;
    if (*(longlong *)(param_1 + 0x718) != 0) {
      uVar10 = *(undefined4 *)(*(longlong *)(param_1 + 0x718) + 0xa8);
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
      local_118 = *(undefined8 *)(param_1 + 0x640);
      FSpriteDrawCallRecord::FSpriteDrawCallRecord(local_108,local_1e8);
      local_38 = uVar10;
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_208);
      FUN_140823820(local_118,local_108,local_38);
      QueryPerformanceCounter(&local_210);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_210.s.LowPart - local_208._0_4_);
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_d0 != 0) {
        FMemory::Free();
      }
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x640);
      puVar8 = (undefined8 *)operator_new(0x110);
      puVar11 = puVar9;
      if (puVar8 != (undefined8 *)0x0) {
        local_200 = 0;
        *puVar8 = &PTR_FUN_143f3edd8;
        local_220 = 0;
        *(undefined4 *)(puVar8 + 1) = 0xff;
        *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
        *(undefined1 *)(puVar8 + 0x20) = 0;
        *puVar8 = &PTR_FUN_1440fe370;
        puVar8[0x21] = 0;
        puVar9 = (undefined8 *)&DAT_00000004;
        puVar11 = puVar8;
      }
      if ((puVar9 != (undefined8 *)0x0) && (local_220 != 0)) {
        LOCK();
        piVar1 = (int *)(local_220 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(local_220);
        }
      }
      puVar11[2] = uVar3;
      FSpriteDrawCallRecord::FSpriteDrawCallRecord(puVar11 + 4,local_1e8);
      *(undefined4 *)(puVar11 + 0x1e) = uVar10;
      lVar4 = puVar11[0x21];
      piVar1 = (int *)(lVar4 + 0x48);
      if (lVar4 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_218 = lVar4;
      FUN_140824270(puVar11,0,0xff,1);
      if (lVar4 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(local_218);
        }
      }
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
    if (local_1b0 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140823240 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_146267260);
  return;
}



// FUNCTION 140823270 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  FUN_142396660();
  FArchive::UsingCustomVersion(param_2,&DAT_146267260);
  return;
}



// FUNCTION 1408232a0 Serialize body=63 status=ok
// SIG undefined Serialize(void)

void UPaperSprite::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_146267260);
  if (*(char *)(param_1 + 0x98) == '\x01') {
    *(undefined1 *)(param_1 + 0x98) = 2;
  }
  return;
}



// FUNCTION 1408232e0 FUN_1408232e0 body=63 status=ok
// SIG undefined FUN_1408232e0(void)

void FUN_1408232e0(longlong param_1,undefined8 param_2)

{
  FUN_142396660();
  FArchive::UsingCustomVersion(param_2,&DAT_146267260);
  if (*(char *)(param_1 + 0x724) == '\x01') {
    *(undefined1 *)(param_1 + 0x724) = 2;
  }
  return;
}



// FUNCTION 140823320 Serialize body=63 status=ok
// SIG undefined Serialize(void)

void UPaperTileMap::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_146267260);
  if (*(char *)(param_1 + 0x8c) == '\x01') {
    *(undefined1 *)(param_1 + 0x8c) = 2;
  }
  return;
}



// FUNCTION 140823360 FUN_140823360 body=99 status=ok
// SIG undefined FUN_140823360(void)

void FUN_140823360(longlong *param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_1[0xec];
  if (((lVar1 != 0) && (*(longlong **)(lVar1 + 0x20) == param_1)) &&
     (*(undefined4 *)(lVar1 + 0x88) = param_2, param_3 != '\0')) {
    plVar2 = (longlong *)param_1[0xec];
    if ((plVar2 != (longlong *)0x0) && ((longlong *)plVar2[4] == param_1)) {
      (**(code **)(*plVar2 + 0x278))();
    }
    FUN_14234b040(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001408233b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x4b8))(param_1);
    return;
  }
  return;
}



// FUNCTION 1408233d0 FUN_1408233d0 body=138 status=ok
// SIG undefined FUN_1408233d0(void)

void FUN_1408233d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x3c0);
  TArray<FSpriteDrawCallRecord,FDefaultAllocator>::Empty(plVar1);
  iVar2 = *(int *)(param_1 + 0x3c8);
  iVar3 = iVar2 + 1;
  *(int *)(param_1 + 0x3c8) = iVar3;
  if (*(int *)(param_1 + 0x3cc) < iVar3) {
    TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  lVar4 = (longlong)iVar2 * 0xd0 + *plVar1;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined4 *)(lVar4 + 0x48) = DAT_1464aa730;
    *(undefined8 *)(lVar4 + 0xb0) = 0;
    *(undefined8 *)(lVar4 + 0xc0) = 0;
  }
  FSpriteDrawCallRecord::operator=(lVar4,param_2);
  return;
}



// FUNCTION 140823460 FUN_140823460 body=182 status=ok
// SIG undefined FUN_140823460(void)

undefined8 FUN_140823460(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (param_2 == param_1[0xe3]) {
    return 0;
  }
  if ((((param_1[0x23] != 0) && (cVar1 = FUN_142341170(), cVar1 == '\0')) &&
      ((*(byte *)(param_1 + 0x17) & 1) != 0)) && (*(char *)((longlong)param_1 + 0x24e) == '\0')) {
    return 0;
  }
  param_1[0xe3] = param_2;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  FUN_1408109e0(param_1);
  FUN_1423424e0(param_1);
  FUN_14234b040(param_1);
  (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
  plVar2 = (longlong *)IStreamingManager::Get();
  (**(code **)(*plVar2 + 0x70))(plVar2,param_1);
  (**(code **)(*param_1 + 0x4b8))(param_1);
  return 1;
}



// FUNCTION 140823520 FUN_140823520 body=117 status=ok
// SIG undefined FUN_140823520(void)

void FUN_140823520(longlong param_1,int param_2,byte param_3,byte param_4,undefined4 param_5,
                  byte param_6,undefined8 param_7,char param_8)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x760);
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x20) == param_1)) && (-1 < param_2)) &&
     (param_2 < *(int *)(lVar1 + 0x80))) {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x78) + (longlong)param_2 * 8);
    *(uint *)(lVar1 + 0x48) = *(uint *)(lVar1 + 0x48) & 0xfffffff9;
    *(undefined4 *)(lVar1 + 0x4c) = param_5;
    *(undefined4 *)(lVar1 + 0x50) = param_5;
    *(uint *)(lVar1 + 0x48) =
         (param_3 & 0xfffffff9 | (uint)param_6 << 2) * 2 |
         ((uint)param_4 << 2 | *(uint *)(lVar1 + 0x48)) & 0xfffffff7;
    if (param_8 != '\0') {
      FUN_140820020(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1408235a0 FUN_1408235a0 body=66 status=ok
// SIG undefined FUN_1408235a0(void)

void FUN_1408235a0(longlong param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x760);
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x20) == param_1)) && (-1 < param_3)) &&
     (param_3 < *(int *)(lVar1 + 0x80))) {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x78) + (longlong)param_3 * 8);
    *(undefined4 *)(lVar1 + 0x54) = *param_2;
    *(undefined4 *)(lVar1 + 0x58) = uVar2;
    *(undefined4 *)(lVar1 + 0x5c) = uVar3;
    *(undefined4 *)(lVar1 + 0x60) = uVar4;
    FUN_1423424e0(param_1);
    return;
  }
  return;
}



// FUNCTION 1408235f0 FUN_1408235f0 body=17 status=ok
// SIG undefined FUN_1408235f0(void)

void FUN_1408235f0(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x72c) = *(uint *)(param_1 + 0x72c) & 0xfffffffe;
  *(uint *)(param_1 + 0x72c) = *(uint *)(param_1 + 0x72c) | (uint)param_2;
  return;
}



// FUNCTION 140823610 FUN_140823610 body=26 status=ok
// SIG undefined FUN_140823610(void)

void FUN_140823610(longlong *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  float fVar8;
  
  fVar8 = *(float *)(param_1 + 0xe6);
  *(float *)(param_1 + 0xe6) = param_2;
  if (fVar8 == param_2) {
    return;
  }
  lVar2 = param_1[0xe3];
  iVar1 = *(int *)((longlong)param_1 + 0x734);
  if (lVar2 != 0) {
    fVar8 = 0.0;
    if (0.0 <= *(float *)(param_1 + 0xe6)) {
      uVar4 = 0;
      iVar5 = *(int *)(lVar2 + 0x38);
      if (*(float *)(lVar2 + 0x28) <= 0.0) {
        iVar3 = (0 < iVar5) - 1;
      }
      else {
        if (0 < iVar5) {
          piVar6 = (int *)(*(longlong *)(lVar2 + 0x30) + 8);
          uVar7 = uVar4;
          do {
            iVar3 = (int)uVar4;
            fVar8 = fVar8 + (float)*piVar6 * (1.0 / *(float *)(lVar2 + 0x28));
            if (*(float *)(param_1 + 0xe6) <= fVar8) goto LAB_140810a79;
            uVar4 = (ulonglong)(iVar3 + 1);
            uVar7 = uVar7 + 1;
            piVar6 = piVar6 + 4;
          } while ((longlong)uVar7 < (longlong)iVar5);
          iVar5 = *(int *)(lVar2 + 0x38);
        }
        iVar3 = iVar5 + -1;
      }
      goto LAB_140810a79;
    }
  }
  iVar3 = -1;
LAB_140810a79:
  *(int *)((longlong)param_1 + 0x734) = iVar3;
  if (iVar3 != iVar1) {
    FUN_14239b420(param_1,0,0,1);
    if ((param_1[0xe3] != 0) && (*(char *)(param_1[0xe3] + 0x48) == '\x02')) {
      FUN_14234b040(param_1);
      (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
    }
    FUN_1423424c0(param_1);
    return;
  }
  return;
}



// FUNCTION 140823630 FUN_140823630 body=9 status=ok
// SIG undefined FUN_140823630(void)

void FUN_140823630(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x728) = param_2;
  return;
}



// FUNCTION 140823640 FUN_140823640 body=72 status=ok
// SIG undefined FUN_140823640(void)

void FUN_140823640(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  
  if (param_1[0xe3] == 0) {
    fVar8 = 15.0;
  }
  else {
    fVar8 = *(float *)(param_1[0xe3] + 0x28);
  }
  fVar9 = 0.0;
  if (0.0 < fVar8) {
    fVar9 = (float)param_2 / fVar8;
  }
  fVar8 = *(float *)(param_1 + 0xe6);
  *(float *)(param_1 + 0xe6) = fVar9;
  if (fVar8 == fVar9) {
    return;
  }
  lVar2 = param_1[0xe3];
  iVar1 = *(int *)((longlong)param_1 + 0x734);
  if (lVar2 != 0) {
    fVar8 = 0.0;
    if (0.0 <= *(float *)(param_1 + 0xe6)) {
      uVar4 = 0;
      iVar5 = *(int *)(lVar2 + 0x38);
      if (*(float *)(lVar2 + 0x28) <= 0.0) {
        iVar3 = (0 < iVar5) - 1;
      }
      else {
        if (0 < iVar5) {
          piVar6 = (int *)(*(longlong *)(lVar2 + 0x30) + 8);
          uVar7 = uVar4;
          do {
            iVar3 = (int)uVar4;
            fVar8 = fVar8 + (float)*piVar6 * (1.0 / *(float *)(lVar2 + 0x28));
            if (*(float *)(param_1 + 0xe6) <= fVar8) goto LAB_140810a79;
            uVar4 = (ulonglong)(iVar3 + 1);
            uVar7 = uVar7 + 1;
            piVar6 = piVar6 + 4;
          } while ((longlong)uVar7 < (longlong)iVar5);
          iVar5 = *(int *)(lVar2 + 0x38);
        }
        iVar3 = iVar5 + -1;
      }
      goto LAB_140810a79;
    }
  }
  iVar3 = -1;
LAB_140810a79:
  *(int *)((longlong)param_1 + 0x734) = iVar3;
  if (iVar3 != iVar1) {
    FUN_14239b420(param_1,0,0,1);
    if ((param_1[0xe3] != 0) && (*(char *)(param_1[0xe3] + 0x48) == '\x02')) {
      FUN_14234b040(param_1);
      (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
    }
    FUN_1423424c0(param_1);
    return;
  }
  return;
}



// FUNCTION 140823690 FUN_140823690 body=140 status=ok
// SIG undefined FUN_140823690(void)

undefined8 FUN_140823690(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (param_2 == param_1[0xe3]) {
    return 0;
  }
  if ((((param_1[0x23] != 0) && (cVar1 = FUN_142341170(), cVar1 == '\0')) &&
      ((*(byte *)(param_1 + 0x17) & 1) != 0)) && (*(char *)((longlong)param_1 + 0x24e) == '\0')) {
    return 0;
  }
  param_1[0xe3] = param_2;
  FUN_1423424e0(param_1);
  FUN_14234b040(param_1);
  plVar2 = (longlong *)IStreamingManager::Get();
  (**(code **)(*plVar2 + 0x70))(plVar2,param_1);
  (**(code **)(*param_1 + 0x4b8))(param_1);
  return 1;
}



// FUNCTION 140823720 FUN_140823720 body=126 status=ok
// SIG undefined FUN_140823720(void)

void FUN_140823720(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  
  cVar4 = FUN_142341170();
  if ((((cVar4 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) &&
     (((*param_2 != *(float *)(param_1 + 0x738) || (param_2[1] != *(float *)(param_1 + 0x73c))) ||
      ((param_2[2] != *(float *)(param_1 + 0x740) || (param_2[3] != *(float *)(param_1 + 0x744))))))
     ) {
    fVar1 = param_2[1];
    fVar2 = param_2[2];
    fVar3 = param_2[3];
    *(float *)(param_1 + 0x738) = *param_2;
    *(float *)(param_1 + 0x73c) = fVar1;
    *(float *)(param_1 + 0x740) = fVar2;
    *(float *)(param_1 + 0x744) = fVar3;
    FUN_1423424c0(param_1);
  }
  return;
}



// FUNCTION 1408237a0 FUN_1408237a0 body=126 status=ok
// SIG undefined FUN_1408237a0(void)

void FUN_1408237a0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  
  cVar4 = FUN_142341170();
  if ((((cVar4 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) &&
     (((*param_2 != *(float *)(param_1 + 0x728) || (param_2[1] != *(float *)(param_1 + 0x72c))) ||
      ((param_2[2] != *(float *)(param_1 + 0x730) || (param_2[3] != *(float *)(param_1 + 0x734))))))
     ) {
    fVar1 = param_2[1];
    fVar2 = param_2[2];
    fVar3 = param_2[3];
    *(float *)(param_1 + 0x728) = *param_2;
    *(float *)(param_1 + 0x72c) = fVar1;
    *(float *)(param_1 + 0x730) = fVar2;
    *(float *)(param_1 + 0x734) = fVar3;
    FUN_1423424c0(param_1);
  }
  return;
}



// FUNCTION 140823820 FUN_140823820 body=537 status=ok
// SIG undefined FUN_140823820(void)

void FUN_140823820(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  plVar1 = (longlong *)(param_1 + 0x3c0);
  TArray<FSpriteDrawCallRecord,FDefaultAllocator>::Empty(plVar1,0);
  plVar4 = (longlong *)(param_1 + 0x430);
  TArray<FSpriteDrawCallRecord,FDefaultAllocator>::Empty(plVar4,0);
  if (param_3 == -1) {
    iVar2 = *(int *)(param_1 + 0x3c8);
    *(int *)(param_1 + 0x3c8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x3cc) < iVar2 + 1) {
      TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    lVar3 = (longlong)iVar2 * 0xd0 + *plVar1;
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x38) = 0;
      *(undefined8 *)(lVar3 + 0x40) = 0;
      *(undefined4 *)(lVar3 + 0x48) = DAT_1464aa730;
      *(undefined8 *)(lVar3 + 0xb0) = 0;
      *(undefined8 *)(lVar3 + 0xc0) = 0;
    }
    FSpriteDrawCallRecord::operator=(lVar3,param_2);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x3c8);
    *(int *)(param_1 + 0x3c8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x3cc) < iVar2 + 1) {
      TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar7 = (undefined8 *)((longlong)iVar2 * 0xd0 + *plVar1);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7[2] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      *(undefined4 *)(puVar7 + 9) = DAT_1464aa730;
      puVar7[0x16] = 0;
      puVar7[0x18] = 0;
    }
    puVar6 = (undefined8 *)0x0;
    iVar2 = *(int *)(param_1 + 0x438);
    *(int *)(param_1 + 0x438) = iVar2 + 1;
    if (*(int *)(param_1 + 0x43c) < iVar2 + 1) {
      TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(plVar4,iVar2);
    }
    puVar5 = (undefined8 *)((longlong)iVar2 * 0xd0 + *plVar4);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[2] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      *(undefined4 *)(puVar5 + 9) = DAT_1464aa730;
      puVar5[0x16] = 0;
      puVar5[0x18] = 0;
      puVar6 = puVar5;
    }
    *(undefined4 *)(puVar7 + 9) = *(undefined4 *)(param_2 + 9);
    *puVar7 = *param_2;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_2 + 1);
    puVar7[2] = param_2[2];
    TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::operator=(puVar7 + 3,param_2 + 3);
    puVar5 = (undefined8 *)param_2[0x16];
    if ((undefined8 *)param_2[0x16] == (undefined8 *)0x0) {
      puVar5 = param_2 + 10;
    }
    TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::Append(puVar7 + 10,puVar5,param_3);
    *(undefined4 *)(puVar6 + 9) = *(undefined4 *)(param_2 + 9);
    *puVar6 = *param_2;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_2 + 1);
    puVar6[2] = param_2[2];
    TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::operator=(puVar6 + 3,param_2 + 3);
    puVar7 = (undefined8 *)param_2[0x16];
    if ((undefined8 *)param_2[0x16] == (undefined8 *)0x0) {
      puVar7 = param_2 + 10;
    }
    TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::Append
              (puVar6 + 10,puVar7 + (longlong)param_3 * 2,*(int *)(param_2 + 0x18) - param_3);
  }
  return;
}



// FUNCTION 140823a40 SetTangentsFromPaperAxes body=1170 status=ok
// SIG undefined SetTangentsFromPaperAxes(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FPaperSpriteTangents::SetTangentsFromPaperAxes(void)

{
  undefined1 auVar1 [13];
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  ulonglong uVar8;
  uint5 uVar9;
  unkbyte9 Var10;
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 uVar26;
  uint uVar25;
  undefined1 local_res8 [2];
  undefined1 uStackX_a;
  undefined1 local_res10 [2];
  undefined1 uStackX_12;
  undefined1 local_res18 [2];
  undefined1 uStackX_1a;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar14 = (int)ROUND(DAT_146267220 * 127.0 + DAT_146267220 * 127.0 + 0.5) >> 1;
  if (iVar14 < -0x80) {
    DAT_14626719c._0_1_ = 0x80;
  }
  else {
    DAT_14626719c._0_1_ = 0x7f;
    if (iVar14 < 0x7f) {
      DAT_14626719c._0_1_ = (char)iVar14;
    }
  }
  iVar15 = (int)ROUND(DAT_146267224 * 127.0 + DAT_146267224 * 127.0 + 0.5) >> 1;
  if (iVar15 < -0x80) {
    DAT_14626719c._1_1_ = 0x80;
  }
  else {
    DAT_14626719c._1_1_ = 0x7f;
    if (iVar15 < 0x7f) {
      DAT_14626719c._1_1_ = (char)iVar15;
    }
  }
  iVar16 = (int)ROUND(DAT_146267228 * 127.0 + DAT_146267228 * 127.0 + 0.5) >> 1;
  if (iVar16 < -0x80) {
    DAT_14626719c._2_1_ = 0x80;
  }
  else {
    DAT_14626719c._2_1_ = 0x7f;
    if (iVar16 < 0x7f) {
      DAT_14626719c._2_1_ = (char)iVar16;
    }
  }
  DAT_14626719c._3_1_ = 0x7f;
  iVar17 = (int)ROUND(DAT_146267240 * -127.0 + DAT_146267240 * -127.0 + 0.5) >> 1;
  if (iVar17 < -0x80) {
    DAT_14626722c._0_1_ = 0x80;
  }
  else {
    DAT_14626722c._0_1_ = 0x7f;
    if (iVar17 < 0x7f) {
      DAT_14626722c._0_1_ = (char)iVar17;
    }
  }
  iVar17 = (int)ROUND(-DAT_146267244 * 127.0 + -DAT_146267244 * 127.0 + 0.5) >> 1;
  if (iVar17 < -0x80) {
    DAT_14626722c._1_1_ = 0x80;
  }
  else {
    DAT_14626722c._1_1_ = 0x7f;
    if (iVar17 < 0x7f) {
      DAT_14626722c._1_1_ = (char)iVar17;
    }
  }
  iVar17 = (int)ROUND(-DAT_146267248 * 127.0 + -DAT_146267248 * 127.0 + 0.5) >> 1;
  if (iVar17 < -0x80) {
    DAT_14626722c._2_1_ = 0x80;
  }
  else {
    DAT_14626722c._2_1_ = 0x7f;
    if (iVar17 < 0x7f) {
      DAT_14626722c._2_1_ = (char)iVar17;
    }
  }
  iVar17 = (int)ROUND(DAT_146267240 * 127.0 + DAT_146267240 * 127.0 + 0.5) >> 1;
  if (iVar17 < -0x80) {
    local_res8[0] = 0x80;
  }
  else {
    local_res8[0] = 0x7f;
    if (iVar17 < 0x7f) {
      local_res8[0] = (char)iVar17;
    }
  }
  iVar17 = (int)ROUND(DAT_146267244 * 127.0 + DAT_146267244 * 127.0 + 0.5) >> 1;
  if (iVar17 < -0x80) {
    local_res8[1] = 0x80;
  }
  else {
    local_res8[1] = 0x7f;
    if (iVar17 < 0x7f) {
      local_res8[1] = (char)iVar17;
    }
  }
  iVar17 = (int)ROUND(DAT_146267248 * 127.0 + DAT_146267248 * 127.0 + 0.5) >> 1;
  if (iVar17 < -0x80) {
    _local_res8 = CONCAT12(0x80,local_res8);
  }
  else {
    uVar26 = 0x7f;
    if (iVar17 < 0x7f) {
      uVar26 = (char)iVar17;
    }
    _local_res8 = CONCAT12(uVar26,local_res8);
  }
  iVar17 = (int)ROUND(DAT_146267230 * 127.0 + DAT_146267230 * 127.0 + 0.5) >> 1;
  if (iVar17 < -0x80) {
    local_res10[0] = 0x80;
  }
  else {
    local_res10[0] = 0x7f;
    if (iVar17 < 0x7f) {
      local_res10[0] = (char)iVar17;
    }
  }
  iVar17 = (int)ROUND(DAT_146267234 * 127.0 + DAT_146267234 * 127.0 + 0.5) >> 1;
  if (iVar17 < -0x80) {
    local_res10[1] = 0x80;
  }
  else {
    local_res10[1] = 0x7f;
    if (iVar17 < 0x7f) {
      local_res10[1] = (char)iVar17;
    }
  }
  iVar17 = (int)ROUND(DAT_146267238 * 127.0 + DAT_146267238 * 127.0 + 0.5) >> 1;
  if (iVar17 < -0x80) {
    _local_res10 = CONCAT12(0x80,local_res10);
  }
  else {
    uVar26 = 0x7f;
    if (iVar17 < 0x7f) {
      uVar26 = (char)iVar17;
    }
    _local_res10 = CONCAT12(uVar26,local_res10);
  }
  if (iVar14 < -0x80) {
    local_res18[0] = 0x80;
  }
  else {
    local_res18[0] = 0x7f;
    if (iVar14 < 0x7f) {
      local_res18[0] = (char)iVar14;
    }
  }
  if (iVar15 < -0x80) {
    local_res18[1] = 0x80;
  }
  else {
    local_res18[1] = 0x7f;
    if (iVar15 < 0x7f) {
      local_res18[1] = (char)iVar15;
    }
  }
  if (iVar16 < -0x80) {
    _local_res18 = CONCAT12(0x80,local_res18);
  }
  else {
    uVar26 = 0x7f;
    if (iVar16 < 0x7f) {
      uVar26 = (char)iVar16;
    }
    _local_res18 = CONCAT12(uVar26,local_res18);
  }
  auVar1[0xc] = 0x7f;
  auVar1._0_12_ = ZEXT712(0);
  uVar9 = CONCAT32(auVar1._10_3_,(ushort)(byte)((uint3)_local_res8 >> 0x10));
  auVar13._5_8_ = 0;
  auVar13._0_5_ = uVar9;
  Var10 = CONCAT72(SUB137(auVar13 << 0x40,6),(ushort)(byte)((uint3)_local_res8 >> 8));
  auVar20._0_4_ = CONCAT31(0,(byte)_local_res8);
  auVar20._4_9_ = Var10;
  auVar20._13_3_ = 0;
  auVar19._0_4_ = -(uint)(0x7f < auVar20._0_4_);
  auVar19._4_4_ = -(uint)(0x7f < (uint)Var10);
  auVar19._8_4_ = -(uint)(0x7f < (int)uVar9);
  auVar19._12_4_ = -(uint)(0x7f < (uint3)(auVar1._10_3_ >> 0x10));
  local_6c = 0;
  local_5c = 0;
  auVar20 = auVar19 & _DAT_144101760 | auVar20;
  local_4c = 0;
  uVar26 = (undefined1)((uint3)_local_res10 >> 8);
  uVar8 = (ulonglong)CONCAT12(uVar26,(short)_local_res10) & 0xffffffffffff00ff;
  auVar2._8_4_ = 0;
  auVar2._0_8_ = uVar8;
  auVar2[0xc] = 0x7f;
  auVar3[8] = (char)((uint3)_local_res10 >> 0x10);
  auVar3._0_8_ = uVar8;
  auVar3[9] = 0;
  auVar3._10_3_ = auVar2._10_3_;
  auVar11._5_8_ = 0;
  auVar11._0_5_ = auVar3._8_5_;
  auVar4[4] = uVar26;
  auVar4._0_4_ = (uint)uVar8;
  auVar4[5] = 0;
  auVar4._6_7_ = SUB137(auVar11 << 0x40,6);
  auVar22._0_4_ = (uint)uVar8 & 0xffff;
  auVar22._4_9_ = auVar4._4_9_;
  auVar22._13_3_ = 0;
  local_58 = (float)auVar20._0_4_ * 0.007874016;
  local_54 = (float)auVar20._4_4_ * 0.007874016;
  local_50 = (float)auVar20._8_4_ * 0.007874016;
  auVar21._0_4_ = -(uint)(0x7f < auVar22._0_4_);
  auVar21._4_4_ = -(uint)(0x7f < auVar4._4_4_);
  auVar21._8_4_ = -(uint)(0x7f < auVar3._8_4_);
  auVar21._12_4_ = -(uint)(0x7f < (uint3)(auVar2._10_3_ >> 0x10));
  auVar22 = auVar21 & _DAT_144101760 | auVar22;
  uVar26 = (undefined1)((uint3)_local_res18 >> 8);
  local_68 = (float)auVar22._0_4_ * 0.007874016;
  local_64 = (float)auVar22._4_4_ * 0.007874016;
  local_60 = (float)auVar22._8_4_ * 0.007874016;
  auVar5[0xc] = 0x7f;
  auVar5._0_12_ = ZEXT812(0);
  auVar6._10_3_ = auVar5._10_3_;
  auVar6._0_10_ = (unkuint10)(byte)((uint3)_local_res18 >> 0x10) << 0x40;
  auVar12._5_8_ = 0;
  auVar12._0_5_ = auVar6._8_5_;
  uVar25 = CONCAT13(0,CONCAT12(uVar26,(ushort)(byte)_local_res18));
  auVar7[4] = uVar26;
  auVar7._0_4_ = uVar25;
  auVar7[5] = 0;
  auVar7._6_7_ = SUB137(auVar12 << 0x40,6);
  auVar24._0_4_ = uVar25 & 0xffff;
  auVar24._4_9_ = auVar7._4_9_;
  auVar24._13_3_ = 0;
  auVar23._0_4_ = -(uint)(0x7f < auVar24._0_4_);
  auVar23._4_4_ = -(uint)(0x7f < auVar7._4_4_);
  auVar23._8_4_ = -(uint)(0x7f < auVar6._8_4_);
  auVar23._12_4_ = -(uint)(0x7f < (uint3)(auVar5._10_3_ >> 0x10));
  auVar24 = auVar23 & _DAT_144101760 | auVar24;
  local_78 = (float)auVar24._0_4_ * 0.007874016;
  local_74 = (float)auVar24._4_4_ * 0.007874016;
  local_70 = (float)auVar24._8_4_ * 0.007874016;
  local_48 = 0;
  uStack_40 = 0x3f80000000000000;
  fVar18 = (float)FMatrix::Determinant(&local_78);
  if (0.0 <= fVar18) {
    fVar18 = 1.0;
  }
  else {
    fVar18 = -1.0;
  }
  DAT_14626722c._3_1_ = 0x7f;
  if (fVar18 < 0.0) {
    DAT_14626722c._3_1_ = 0x81;
  }
  return;
}



// FUNCTION 140823ee0 FUN_140823ee0 body=223 status=ok
// SIG undefined FUN_140823ee0(void)

void FUN_140823ee0(longlong param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 local_res18 [4];
  
  cVar5 = FUN_142341170();
  if ((((cVar5 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) &&
     (((pfVar1 = (float *)(param_1 + 0x710), *param_2 != *pfVar1 ||
       (param_2[1] != *(float *)(param_1 + 0x714))) ||
      ((param_2[2] != *(float *)(param_1 + 0x718) || (param_2[3] != *(float *)(param_1 + 0x71c))))))
     ) {
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    fVar4 = param_2[3];
    *pfVar1 = *param_2;
    *(float *)(param_1 + 0x714) = fVar2;
    *(float *)(param_1 + 0x718) = fVar3;
    *(float *)(param_1 + 0x71c) = fVar4;
    FLinearColor::ToFColor(pfVar1,local_res18,0);
    plVar8 = *(longlong **)(param_1 + 0x738);
    plVar9 = plVar8 + (longlong)*(int *)(param_1 + 0x740) * 4;
    for (; plVar8 != plVar9; plVar8 = plVar8 + 4) {
      lVar6 = *plVar8;
      lVar7 = (longlong)(int)plVar8[1] * 0xd0 + lVar6;
      for (; lVar6 != lVar7; lVar6 = lVar6 + 0xd0) {
        *(undefined4 *)(lVar6 + 0x48) = local_res18[0];
      }
    }
    FUN_14234b090(param_1);
  }
  return;
}



// FUNCTION 140823fc0 FUN_140823fc0 body=111 status=ok
// SIG undefined FUN_140823fc0(void)

void FUN_140823fc0(longlong param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x760);
  if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x20) == param_1)) && (-1 < param_4)) &&
     (param_4 < *(int *)(lVar2 + 0x80))) {
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x78) + (longlong)param_4 * 8);
    if (((-1 < param_2) && (param_2 < *(int *)(lVar2 + 0x40))) &&
       ((-1 < param_3 && (param_3 < *(int *)(lVar2 + 0x44))))) {
      uVar3 = param_5[1];
      uVar4 = param_5[2];
      uVar5 = param_5[3];
      puVar1 = (undefined4 *)
               (*(longlong *)(lVar2 + 0x70) +
               (longlong)(*(int *)(lVar2 + 0x40) * param_3 + param_2) * 0x10);
      *puVar1 = *param_5;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
    }
    FUN_1423424e0(param_1);
    return;
  }
  return;
}



// FUNCTION 140824030 FUN_140824030 body=122 status=ok
// SIG undefined FUN_140824030(void)

undefined8 FUN_140824030(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 == param_1[0xec]) {
    return 0;
  }
  if ((((param_1[0x23] != 0) && (cVar1 = FUN_142341170(), cVar1 == '\0')) &&
      ((*(byte *)(param_1 + 0x17) & 1) != 0)) && (*(char *)((longlong)param_1 + 0x24e) == '\0')) {
    return 0;
  }
  param_1[0xec] = param_2;
  FUN_1423424e0(param_1);
  FUN_14234b040(param_1);
  (**(code **)(*param_1 + 0x4b8))(param_1);
  return 1;
}



// FUNCTION 1408240b0 FUN_1408240b0 body=15 status=ok
// SIG undefined FUN_1408240b0(void)

void FUN_1408240b0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x748) = *param_2;
  *(undefined4 *)(param_1 + 0x74c) = uVar1;
  *(undefined4 *)(param_1 + 0x750) = uVar2;
  *(undefined4 *)(param_1 + 0x754) = uVar3;
  FUN_1423424e0();
  return;
}



// FUNCTION 1408240c0 FUN_1408240c0 body=432 status=ok
// SIG undefined FUN_1408240c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408240c0(longlong param_1,uint *param_2,int param_3,float *param_4,longlong param_5,
                  undefined8 param_6,uint *param_7)

{
  int iVar1;
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
  longlong lVar12;
  undefined8 uVar13;
  void *_Src;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar11 = fRam000000014685e32c;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = param_4[3];
  fVar18 = fVar3 + fVar3;
  fVar20 = fVar4 + fVar4;
  fVar21 = fVar2 * (fVar2 + fVar2);
  fVar19 = (fVar2 + fVar2) * fVar5;
  fVar6 = param_4[8];
  fVar7 = param_4[9];
  fVar8 = param_4[10];
  uVar15 = (uint)((fRam000000014685e324 - (fVar4 * fVar20 + fVar21)) * fVar7) & uRam000000014685e334
  ;
  uVar16 = (uint)((fRam000000014685e328 - (fVar3 * fVar18 + fVar21)) * fVar8) & uRam000000014685e338
  ;
  uVar17 = (uint)((fRam000000014685e32c - (fVar21 + fVar21)) * param_4[0xb]) & uRam000000014685e33c;
  fVar21 = param_4[4];
  fVar9 = param_4[5];
  fVar10 = param_4[6];
  *param_2 = (uint)((_DAT_14685e320 - (fVar4 * fVar20 + fVar3 * fVar18)) * fVar6) & _DAT_14685e330;
  param_2[1] = (uint)((fVar20 * fVar5 + fVar18 * fVar2) * fVar6);
  param_2[2] = (uint)(fVar6 * (fVar20 * fVar2 - fVar18 * fVar5));
  param_2[3] = uVar17;
  *(longlong *)(param_2 + 0x10) = param_5;
  param_2[4] = (uint)(fVar7 * (fVar18 * fVar2 - fVar20 * fVar5));
  param_2[5] = uVar15;
  param_2[6] = (uint)((fVar19 + fVar20 * fVar3) * fVar7);
  param_2[7] = uVar17;
  param_2[8] = (uint)((fVar18 * fVar5 + fVar20 * fVar2) * fVar8);
  param_2[9] = (uint)(fVar8 * (fVar20 * fVar3 - fVar19));
  param_2[10] = uVar16;
  param_2[0xb] = uVar17;
  param_2[0xc] = (uint)fVar21;
  param_2[0xd] = (uint)fVar9;
  param_2[0xe] = (uint)fVar10;
  param_2[0xf] = (uint)fVar11;
  param_2[0x12] = *param_7;
  uVar15 = FUN_140827290(param_1,param_5,param_6);
  param_2[0x13] = uVar15;
  if ((((*(byte *)(param_1 + 0xb8) & 4) != 0) && (param_5 != 0)) &&
     (*(longlong *)(param_5 + 0xa0) != 0)) {
    lVar12 = *(longlong *)(param_1 + 0x120);
    if (lVar12 == 0) {
      lVar12 = FUN_1423407b0(param_1);
    }
    uVar13 = FUN_14081b3a0(param_1,param_3,param_2,*(undefined8 *)(lVar12 + 0x218));
    plVar14 = (longlong *)(param_1 + 0x738);
    iVar1 = *(int *)(param_1 + 0x740);
    *(int *)(param_1 + 0x740) = iVar1 + 1;
    if (*(int *)(param_1 + 0x744) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar1);
    }
    _Src = (void *)(*plVar14 + (longlong)param_3 * 8);
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar1 - param_3) << 3);
    *(undefined8 *)((longlong)param_3 * 8 + *plVar14) = uVar13;
  }
  return;
}



// FUNCTION 140824270 FUN_140824270 body=611 status=ok
// SIG undefined FUN_140824270(void)

void FUN_140824270(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x100) = 1;
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
          goto LAB_140824427;
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
LAB_140824427:
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



// FUNCTION 1408244e0 FUN_1408244e0 body=49 status=ok
// SIG undefined FUN_1408244e0(void)

undefined8 FUN_1408244e0(longlong *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
    return 0;
  }
  if ((-1 < *(char *)((longlong)param_1 + 0x2ee)) &&
     (iVar1 = (**(code **)(*param_1 + 0x4e8))(), iVar1 == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 140824520 SimplifyPolygon body=908 status=ok
// SIG undefined SimplifyPolygon(void)

void SimplifyPolygon(longlong *param_1,longlong *param_2,float param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong local_res10;
  longlong local_88;
  
  iVar5 = (int)param_1[1];
  iVar1 = (int)param_2[1];
  if (0 < iVar5) {
    local_88 = 0;
    local_res10 = 0;
    iVar9 = iVar5;
    iVar6 = 0;
    while (3 < iVar9) {
      lVar2 = *param_1;
      iVar4 = iVar6 + 1;
      lVar10 = (longlong)iVar4 % (longlong)iVar9;
      iVar7 = (int)lVar10;
      if (iVar1 == iVar5) {
        fVar20 = *(float *)(local_88 + *param_2);
      }
      else {
        fVar20 = 0.0;
      }
      iVar8 = iVar9;
      iVar13 = iVar6;
      if (iVar6 < iVar9) {
        do {
          iVar14 = (int)lVar10;
          lVar10 = (longlong)((iVar13 + 2) % iVar9);
          if (iVar1 == iVar5) {
            fVar15 = *(float *)(*param_2 + lVar10 * 4);
          }
          else {
            fVar15 = 0.0;
          }
          bVar3 = fVar20 != fVar15;
          iVar11 = iVar6;
          do {
            if ((iVar13 < iVar11) || (bVar3)) goto LAB_1408246eb;
            iVar8 = (int)param_1[1];
            iVar11 = iVar11 + 1;
            lVar12 = (longlong)(iVar11 % iVar8);
            if (iVar1 == iVar5) {
              fVar15 = *(float *)(*param_2 + lVar12 * 4);
            }
            else {
              fVar15 = 0.0;
            }
            if (fVar20 != fVar15) goto LAB_140824719;
            fVar18 = *(float *)(lVar2 + 4 + lVar12 * 8) - *(float *)(lVar2 + 4 + local_res10);
            fVar16 = *(float *)(lVar2 + lVar10 * 8) - *(float *)(lVar2 + local_res10);
            fVar19 = *(float *)(lVar2 + lVar12 * 8) - *(float *)(lVar2 + local_res10);
            fVar17 = *(float *)(lVar2 + 4 + lVar10 * 8) - *(float *)(lVar2 + 4 + local_res10);
            fVar15 = (fVar18 * fVar17 + fVar19 * fVar16) / (fVar17 * fVar17 + fVar16 * fVar16);
            fVar18 = fVar18 - fVar15 * fVar17;
            fVar19 = fVar19 - fVar15 * fVar16;
          } while (fVar18 * fVar18 + fVar19 * fVar19 <= param_3 * param_3);
          bVar3 = true;
LAB_1408246eb:
          if (bVar3) break;
          iVar13 = iVar13 + 1;
          lVar10 = (longlong)(iVar14 + 1) % (longlong)iVar9;
          iVar14 = (int)lVar10;
        } while (iVar13 < iVar8);
LAB_140824719:
        if (iVar7 < iVar14) {
          iVar9 = iVar14 - iVar7;
          if (iVar9 != 0) {
            iVar6 = (iVar8 - iVar9) - iVar7;
            if (iVar6 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar2 + (longlong)iVar7 * 8),
                         (void *)(lVar2 + (longlong)iVar14 * 8),(longlong)iVar6 << 3);
              iVar8 = (int)param_1[1];
            }
            *(int *)(param_1 + 1) = iVar8 - iVar9;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
          }
          if ((iVar1 == iVar5) && (iVar9 != 0)) {
            iVar6 = (int)param_2[1];
            iVar8 = (iVar6 - iVar9) - iVar7;
            if (iVar8 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*param_2 + (longlong)iVar7 * 4),
                         (void *)(*param_2 + (longlong)iVar14 * 4),(longlong)iVar8 << 2);
              iVar6 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = iVar6 - iVar9;
            TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_2);
          }
        }
        else if (iVar14 < iVar7) {
          if (iVar8 != iVar7) {
            *(int *)(param_1 + 1) = iVar7;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
          }
          if (iVar14 != 0) {
            iVar9 = (int)param_1[1];
            if (iVar9 - iVar14 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)*param_1,(void *)(*param_1 + (longlong)iVar14 * 8),
                         (longlong)(iVar9 - iVar14) << 3);
              iVar9 = (int)param_1[1];
            }
            *(int *)(param_1 + 1) = iVar9 - iVar14;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
          }
          if (iVar1 != iVar5) {
            return;
          }
          if ((int)param_2[1] != iVar7) {
            *(int *)(param_2 + 1) = iVar7;
            TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_2);
          }
          if (iVar14 == 0) {
            return;
          }
          iVar5 = (int)param_2[1];
          if (iVar5 - iVar14 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)*param_2,(void *)(*param_2 + (longlong)iVar14 * 4),
                       (longlong)(iVar5 - iVar14) << 2);
            iVar5 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar5 - iVar14;
          TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_2);
          return;
        }
      }
      local_res10 = local_res10 + 8;
      local_88 = local_88 + 4;
      iVar9 = (int)param_1[1];
      iVar6 = iVar4;
      if (iVar9 <= iVar4) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 1408248b0 FUN_1408248b0 body=799 status=ok
// SIG undefined FUN_1408248b0(void)

void FUN_1408248b0(longlong param_1,float *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *_Src;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  longlong lVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 local_res8 [8];
  int *local_78;
  uint local_70;
  int local_6c;
  int *piVar19;
  
  piVar23 = (int *)0x0;
  local_78 = (int *)0x0;
  local_6c = 0;
  local_70 = 0;
  iVar15 = 0;
  piVar17 = piVar23;
  if (*(int *)(param_1 + 0x730) != 0) {
    FUN_140485d90(&local_78,*(int *)(param_1 + 0x730));
    iVar15 = *(int *)(param_1 + 0x730);
    piVar17 = (int *)(ulonglong)local_70;
  }
  piVar21 = local_78;
  uVar16 = (uint)piVar17;
  if (0 < iVar15) {
    fVar3 = *param_2;
    fVar4 = param_2[1];
    fVar5 = param_2[2];
    piVar19 = piVar23;
    piVar22 = piVar23;
    do {
      fVar7 = *(float *)(param_1 + 0x210);
      fVar8 = *(float *)(param_1 + 0x214);
      fVar9 = *(float *)(param_1 + 0x218);
      fVar10 = *(float *)(param_1 + 0x21c);
      lVar20 = *(longlong *)(param_1 + 0x728);
      iVar15 = (int)piVar17;
      local_70 = iVar15 + 1;
      fVar27 = *(float *)((longlong)piVar22 + lVar20 + 0x30) * *(float *)(param_1 + 0x230);
      fVar28 = *(float *)((longlong)piVar22 + lVar20 + 0x34) * *(float *)(param_1 + 0x234);
      fVar29 = *(float *)((longlong)piVar22 + lVar20 + 0x38) * *(float *)(param_1 + 0x238);
      fVar24 = fVar29 * fVar8 - fVar28 * fVar9;
      fVar25 = fVar27 * fVar9 - fVar29 * fVar7;
      fVar26 = fVar28 * fVar7 - fVar27 * fVar8;
      fVar24 = fVar24 + fVar24;
      fVar25 = fVar25 + fVar25;
      fVar26 = fVar26 + fVar26;
      fVar11 = *(float *)(param_1 + 0x220);
      fVar12 = *(float *)(param_1 + 0x224);
      fVar13 = *(float *)(param_1 + 0x228);
      if (local_6c < (int)local_70) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,piVar17);
        piVar21 = local_78;
      }
      piVar17 = (int *)(ulonglong)local_70;
      piVar21[(longlong)iVar15 * 2] = (int)piVar19;
      piVar22 = piVar22 + 0x14;
      uVar18 = (int)piVar19 + 1;
      piVar19 = (int *)(ulonglong)uVar18;
      piVar21[(longlong)iVar15 * 2 + 1] =
           (int)(fVar3 * ((fVar26 * fVar8 - fVar25 * fVar9) + fVar10 * fVar24 + fVar27 + fVar11) +
                 fVar4 * ((fVar24 * fVar9 - fVar26 * fVar7) + fVar10 * fVar25 + fVar28 + fVar12) +
                fVar5 * ((fVar25 * fVar7 - fVar24 * fVar8) + fVar10 * fVar26 + fVar29 + fVar13));
      uVar16 = local_70;
    } while ((int)uVar18 < *(int *)(param_1 + 0x730));
  }
  local_res8[0] = 0;
  AlgoImpl::
  IntroSortInternal<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::_2_::FSortStruct,FIdentityFunctor,TDereferenceWrapper<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::_2_::FSortStruct,<lambda_0b5751454068de2c8abd456d4666ec4f>_>_>
            (piVar21,(longlong)(int)uVar16,0,local_res8);
  plVar1 = (longlong *)(param_1 + 0x728);
  local_78 = (int *)0x0;
  local_70 = *(int *)(param_1 + 0x730);
  lVar20 = (longlong)(int)local_70;
  _Src = (void *)*plVar1;
  if (local_70 != 0) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
    piVar23 = local_78;
    _guard_xfg_dispatch_icall_nop(local_78,_Src,lVar20 * 0x50);
  }
  *(undefined4 *)(param_1 + 0x730) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x734)) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  for (piVar17 = piVar21; piVar17 != piVar21 + (longlong)(int)uVar16 * 2; piVar17 = piVar17 + 2) {
    iVar15 = *(int *)(param_1 + 0x730);
    lVar20 = (longlong)iVar15;
    piVar19 = piVar23 + (longlong)*piVar17 * 0x14;
    *(int *)(param_1 + 0x730) = iVar15 + 1;
    if (*(int *)(param_1 + 0x734) < iVar15 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar1,iVar15);
    }
    uVar14 = *(undefined8 *)(piVar19 + 2);
    lVar6 = *plVar1;
    puVar2 = (undefined8 *)(lVar6 + lVar20 * 0x50);
    *puVar2 = *(undefined8 *)piVar19;
    puVar2[1] = uVar14;
    uVar14 = *(undefined8 *)(piVar19 + 6);
    puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar20 * 0x50);
    *puVar2 = *(undefined8 *)(piVar19 + 4);
    puVar2[1] = uVar14;
    uVar14 = *(undefined8 *)(piVar19 + 10);
    puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar20 * 0x50);
    *puVar2 = *(undefined8 *)(piVar19 + 8);
    puVar2[1] = uVar14;
    uVar14 = *(undefined8 *)(piVar19 + 0xe);
    puVar2 = (undefined8 *)(lVar6 + 0x30 + lVar20 * 0x50);
    *puVar2 = *(undefined8 *)(piVar19 + 0xc);
    puVar2[1] = uVar14;
    uVar14 = *(undefined8 *)(piVar19 + 0x12);
    puVar2 = (undefined8 *)(lVar6 + 0x40 + lVar20 * 0x50);
    *puVar2 = *(undefined8 *)(piVar19 + 0x10);
    puVar2[1] = uVar14;
  }
  if ((*(byte *)(param_1 + 0xb8) & 4) != 0) {
    FUN_140810af0(param_1);
    FUN_140811110(param_1);
  }
  FUN_1423424e0(param_1);
  if (piVar23 != (int *)0x0) {
    FMemory::Free(piVar23);
  }
  if (piVar21 != (int *)0x0) {
    FMemory::Free(piVar21);
  }
  return;
}



// FUNCTION 140824bd0 FUN_140824bd0 body=3717 status=ok
// SIG undefined FUN_140824bd0(void)

void FUN_140824bd0(longlong param_1,longlong *param_2,char param_3)

{
  void *pvVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  float *pfVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
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
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  char local_1d8 [8];
  longlong local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  float local_1bc;
  longlong *local_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  longlong local_198;
  longlong local_190;
  longlong local_188;
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
  undefined1 local_148 [8];
  longlong local_140;
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
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  
  lVar6 = 0;
  iVar8 = 0;
  local_188 = *param_2;
  local_140 = (longlong)(int)param_2[1] * 0x20 + local_188;
  local_1d0 = 0;
  local_1c8 = 0;
  fVar39 = local_1c0;
  fVar28 = local_1c0;
  local_1d8[0] = param_3;
  iVar4 = 0;
  if (local_188 != local_140) {
    do {
      iVar8 = iVar4;
      plVar11 = *(longlong **)(local_188 + 0x10);
      plVar9 = plVar11 + (longlong)*(int *)(local_188 + 0x18) * 3;
      local_1b0 = plVar9;
      if (plVar11 != plVar9) {
        do {
          lVar13 = *plVar11;
          local_1bc = *(float *)((longlong)plVar11 + 0xc);
          fVar35 = *(float *)(plVar11 + 2);
          lVar12 = *(longlong *)(local_188 + 8);
          fVar16 = *(float *)(plVar11 + 1);
          local_1c0 = fVar35;
          local_198 = lVar12;
          local_190 = lVar13;
          if (((param_3 != '\0') && (*(char *)(lVar12 + 0x28) != '\0')) &&
             (*(longlong *)(param_1 + 0x730) != 0)) {
            FUN_14081a170(param_1,&local_138,local_1bc);
            fVar33 = ABS(*(float *)(lVar12 + 0x2c) * 0.5);
            if (fVar33 <= 1.0) {
              fVar33 = 1.0;
            }
            fVar35 = fVar16 * 0.5 * fVar35;
            fVar33 = fVar33 * 0.5;
            fVar24 = fVar35 * local_118;
            fVar25 = fStack_114 * 0.0;
            fVar26 = fVar33 * fStack_110;
            fVar27 = fStack_10c * 0.0;
            fVar15 = fVar26 * fStack_134 - fVar25 * fStack_130;
            fVar18 = fVar24 * fStack_130 - fVar26 * local_138;
            fVar20 = fVar25 * local_138 - fVar24 * fStack_134;
            fVar23 = fVar27 * fStack_12c - fVar27 * fStack_12c;
            fVar15 = fVar15 + fVar15;
            fVar18 = fVar18 + fVar18;
            fVar20 = fVar20 + fVar20;
            fVar23 = fVar23 + fVar23;
            local_178 = (fVar20 * fStack_134 - fVar18 * fStack_130) + fStack_12c * fVar15 + fVar24 +
                        local_128;
            fStack_174 = (fVar15 * fStack_130 - fVar20 * local_138) + fStack_12c * fVar18 + fVar25 +
                         fStack_124;
            fStack_170 = (fVar18 * local_138 - fVar15 * fStack_134) + fStack_12c * fVar20 + fVar26 +
                         fStack_120;
            fStack_16c = (fVar23 * fStack_12c - fVar23 * fStack_12c) + fStack_12c * fVar23 + fVar27
                         + fStack_11c;
            fVar24 = -fVar35 * local_118;
            fVar25 = fStack_114 * 0.0;
            fVar26 = fVar33 * fStack_110;
            fVar27 = fStack_10c * 0.0;
            fVar15 = fVar26 * fStack_134 - fVar25 * fStack_130;
            fVar18 = fVar24 * fStack_130 - fVar26 * local_138;
            fVar20 = fVar25 * local_138 - fVar24 * fStack_134;
            fVar23 = fVar27 * fStack_12c - fVar27 * fStack_12c;
            fVar15 = fVar15 + fVar15;
            fVar18 = fVar18 + fVar18;
            fVar20 = fVar20 + fVar20;
            fVar23 = fVar23 + fVar23;
            local_1a8 = (fVar20 * fStack_134 - fVar18 * fStack_130) + fStack_12c * fVar15 + fVar24 +
                        local_128;
            fStack_1a4 = (fVar15 * fStack_130 - fVar20 * local_138) + fStack_12c * fVar18 + fVar25 +
                         fStack_124;
            fStack_1a0 = (fVar18 * local_138 - fVar15 * fStack_134) + fStack_12c * fVar20 + fVar26 +
                         fStack_120;
            fStack_19c = (fVar23 * fStack_12c - fVar23 * fStack_12c) + fStack_12c * fVar23 + fVar27
                         + fStack_11c;
            fVar24 = -fVar35 * local_118;
            fVar25 = fStack_114 * 0.0;
            fVar26 = -fVar33 * fStack_110;
            fVar27 = fStack_10c * 0.0;
            fVar15 = fVar26 * fStack_134 - fVar25 * fStack_130;
            fVar18 = fVar24 * fStack_130 - fVar26 * local_138;
            fVar20 = fVar25 * local_138 - fVar24 * fStack_134;
            fVar23 = fVar27 * fStack_12c - fVar27 * fStack_12c;
            fVar15 = fVar15 + fVar15;
            fVar18 = fVar18 + fVar18;
            fVar20 = fVar20 + fVar20;
            fVar23 = fVar23 + fVar23;
            local_168 = (fVar20 * fStack_134 - fVar18 * fStack_130) + fStack_12c * fVar15 + fVar24 +
                        local_128;
            fStack_164 = (fVar15 * fStack_130 - fVar20 * local_138) + fStack_12c * fVar18 + fVar25 +
                         fStack_124;
            fStack_160 = (fVar18 * local_138 - fVar15 * fStack_134) + fStack_12c * fVar20 + fVar26 +
                         fStack_120;
            fStack_15c = (fVar23 * fStack_12c - fVar23 * fStack_12c) + fStack_12c * fVar23 + fVar27
                         + fStack_11c;
            fVar35 = fVar35 * local_118;
            fVar23 = fStack_114 * 0.0;
            fVar24 = -fVar33 * fStack_110;
            fVar25 = fStack_10c * 0.0;
            fVar33 = fVar24 * fStack_134 - fVar23 * fStack_130;
            fVar15 = fVar35 * fStack_130 - fVar24 * local_138;
            fVar18 = fVar23 * local_138 - fVar35 * fStack_134;
            fVar20 = fVar25 * fStack_12c - fVar25 * fStack_12c;
            fVar33 = fVar33 + fVar33;
            fVar15 = fVar15 + fVar15;
            fVar18 = fVar18 + fVar18;
            fVar20 = fVar20 + fVar20;
            local_158 = (fVar18 * fStack_134 - fVar15 * fStack_130) + fStack_12c * fVar33 + fVar35 +
                        local_128;
            fStack_154 = (fVar33 * fStack_130 - fVar18 * local_138) + fStack_12c * fVar15 + fVar23 +
                         fStack_124;
            fStack_150 = (fVar15 * local_138 - fVar33 * fStack_134) + fStack_12c * fVar18 + fVar24 +
                         fStack_120;
            fStack_14c = (fVar20 * fStack_12c - fVar20 * fStack_12c) + fStack_12c * fVar20 + fVar25
                         + fStack_11c;
            if (iVar8 < 4) {
              local_1c8._0_4_ = iVar8 + 1;
              iVar4 = (int)local_1c8;
              if (local_1c8._4_4_ < (int)local_1c8) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1d0,iVar8);
                lVar6 = local_1d0;
                iVar4 = (int)local_1c8;
              }
              fVar35 = fStack_170;
              fVar28 = local_178;
              local_1c8._0_4_ = iVar4 + 1;
              *(float *)(lVar6 + (longlong)iVar8 * 8) = local_178;
              *(float *)(lVar6 + 4 + (longlong)iVar8 * 8) = fStack_170;
              iVar7 = (int)local_1c8;
              if (local_1c8._4_4_ < (int)local_1c8) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1d0,iVar4);
                lVar6 = local_1d0;
                iVar7 = (int)local_1c8;
              }
              fVar39 = fStack_1a0;
              fVar33 = local_1a8;
              local_1c8._0_4_ = iVar7 + 1;
              *(float *)(lVar6 + (longlong)iVar4 * 8) = local_1a8;
              *(float *)(lVar6 + 4 + (longlong)iVar4 * 8) = fStack_1a0;
              iVar4 = (int)local_1c8;
              if (local_1c8._4_4_ < (int)local_1c8) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1d0,iVar7);
                lVar6 = local_1d0;
                iVar4 = (int)local_1c8;
              }
              iVar8 = iVar4 + 1;
              local_1c8 = CONCAT44(local_1c8._4_4_,iVar8);
              *(float *)(lVar6 + (longlong)iVar7 * 8) = local_168;
              *(float *)(lVar6 + 4 + (longlong)iVar7 * 8) = fStack_160;
              if (local_1c8._4_4_ < iVar8) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1d0,iVar4);
                lVar6 = local_1d0;
                iVar8 = (int)local_1c8;
              }
              fVar33 = fVar33 - fVar28;
              fVar39 = fVar39 - fVar35;
              *(float *)(lVar6 + 4 + (longlong)iVar4 * 8) = fStack_150;
              *(float *)(lVar6 + (longlong)iVar4 * 8) = local_158;
              fVar35 = fVar33 * fVar33 + fVar39 * fVar39;
              plVar9 = local_1b0;
              if (fVar35 <= 1e-08) {
                fVar28 = 0.0;
                fVar39 = 0.0;
              }
              else {
                auVar30 = rsqrtss(ZEXT416((uint)fVar35),ZEXT416((uint)fVar35));
                fVar28 = auVar30._0_4_;
                fVar28 = fVar28 + fVar28 * (0.5 - fVar35 * 0.5 * fVar28 * fVar28);
                fVar28 = fVar28 * (0.5 - fVar35 * 0.5 * fVar28 * fVar28) + fVar28;
                fVar39 = fVar28 * fVar39;
                fVar28 = fVar28 * fVar33;
              }
            }
            else {
              fVar23 = local_1a8 - local_178;
              fVar24 = fStack_1a0 - fStack_170;
              iVar4 = iVar8 / 2;
              lVar12 = (longlong)iVar4;
              fVar35 = local_178 - *(float *)(lVar6 + -8 + lVar12 * 8);
              fVar18 = fStack_170 - *(float *)(lVar6 + -4 + lVar12 * 8);
              fVar15 = fStack_150 - *(float *)(lVar6 + 4 + lVar12 * 8);
              fVar33 = local_158 - *(float *)(lVar6 + lVar12 * 8);
              fVar20 = fVar24 * fVar24 + fVar23 * fVar23;
              if (fVar20 <= 1e-08) {
                fVar26 = 0.0;
                fVar25 = 0.0;
              }
              else {
                auVar30 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
                fVar25 = auVar30._0_4_;
                fVar25 = fVar25 + fVar25 * (0.5 - fVar20 * 0.5 * fVar25 * fVar25);
                fVar25 = fVar25 + fVar25 * (0.5 - fVar20 * 0.5 * fVar25 * fVar25);
                fVar26 = fVar23 * fVar25;
                fVar25 = fVar24 * fVar25;
              }
              if ((100.0 <= fVar18 * fVar18 + fVar35 * fVar35) ||
                 (100.0 <= fVar15 * fVar15 + fVar33 * fVar33)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if ((fVar25 * fVar39 + fVar26 * fVar28 <= 0.0) || (!bVar2)) {
                FUN_14081bac0(param_1,&local_1d0);
                uVar3 = local_1c8 >> 0x20;
                local_1c8 = local_1c8 & 0xffffffff00000000;
                iVar8 = 0;
                if ((int)uVar3 != 0) {
                  TArray<void_*,FDefaultAllocator>::ResizeTo(&local_1d0,0);
                  iVar8 = (int)local_1c8;
                }
                iVar4 = iVar8 + 1;
                if (local_1c8._4_4_ < iVar4) {
                  local_1c8._0_4_ = iVar4;
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_1d0,iVar8);
                  iVar4 = (int)local_1c8;
                }
                local_1c8._0_4_ = iVar4 + 1;
                *(float *)(local_1d0 + (longlong)iVar8 * 8) = local_178;
                *(float *)(local_1d0 + 4 + (longlong)iVar8 * 8) = fStack_170;
                iVar7 = (int)local_1c8;
                if (local_1c8._4_4_ < (int)local_1c8) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_1d0,iVar4);
                  iVar7 = (int)local_1c8;
                }
                local_1c8._0_4_ = iVar7 + 1;
                *(float *)(local_1d0 + (longlong)iVar4 * 8) = local_1a8;
                *(float *)(local_1d0 + 4 + (longlong)iVar4 * 8) = fStack_1a0;
                iVar4 = (int)local_1c8;
                if (local_1c8._4_4_ < (int)local_1c8) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_1d0,iVar7);
                  iVar4 = (int)local_1c8;
                }
                iVar8 = iVar4 + 1;
                local_1c8 = CONCAT44(local_1c8._4_4_,iVar8);
                *(float *)(local_1d0 + (longlong)iVar7 * 8) = local_168;
                *(float *)(local_1d0 + 4 + (longlong)iVar7 * 8) = fStack_160;
                if (local_1c8._4_4_ < iVar8) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_1d0,iVar4);
                  iVar8 = (int)local_1c8;
                }
                *(float *)(local_1d0 + (longlong)iVar4 * 8) = local_158;
                *(float *)(local_1d0 + 4 + (longlong)iVar4 * 8) = fStack_150;
                plVar9 = local_1b0;
                lVar6 = local_1d0;
                lVar12 = local_198;
                if (fVar20 <= 1e-08) {
                  fVar28 = 0.0;
                  fVar39 = 0.0;
                }
                else {
                  auVar30 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
                  fVar28 = auVar30._0_4_;
                  fVar28 = fVar28 + fVar28 * (0.5 - fVar20 * 0.5 * fVar28 * fVar28);
                  fVar28 = fVar28 * (0.5 - fVar20 * 0.5 * fVar28 * fVar28) + fVar28;
                  fVar39 = fVar28 * fVar24;
                  fVar28 = fVar28 * fVar23;
                }
              }
              else {
                local_1c8._0_4_ = iVar8 + 1;
                if (local_1c8._4_4_ < (int)local_1c8) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_1d0,iVar8);
                  lVar6 = local_1d0;
                }
                iVar7 = (int)local_1c8;
                pvVar1 = (void *)(lVar6 + lVar12 * 8);
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)pvVar1 + 8),pvVar1,(longlong)(iVar8 - iVar4) << 3);
                iVar8 = iVar7 + 1;
                *(float *)(lVar6 + lVar12 * 8) = local_168;
                *(float *)(lVar6 + 4 + lVar12 * 8) = fStack_160;
                local_1c8 = CONCAT44(local_1c8._4_4_,iVar8);
                if (local_1c8._4_4_ < iVar8) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_1d0,iVar7);
                  lVar6 = local_1d0;
                  iVar8 = (int)local_1c8;
                }
                pvVar1 = (void *)(lVar6 + lVar12 * 8);
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)pvVar1 + 8),pvVar1,(longlong)(iVar7 - iVar4) << 3);
                *(float *)(lVar6 + lVar12 * 8) = local_1a8;
                *(float *)(lVar6 + 4 + lVar12 * 8) = fStack_1a0;
                plVar9 = local_1b0;
                lVar12 = local_198;
                lVar13 = local_190;
              }
            }
          }
          fVar33 = local_1bc;
          fVar35 = local_1c0;
          if (lVar13 != 0) {
            iVar4 = *(int *)(param_1 + 0x740);
            *(int *)(param_1 + 0x740) = iVar4 + 1;
            if (*(int *)(param_1 + 0x744) < iVar4 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(param_1 + 0x738,iVar4);
            }
            plVar9 = (longlong *)(*(longlong *)(param_1 + 0x738) + (longlong)iVar4 * 0x20);
            if (plVar9 == (longlong *)0x0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9[2] = 0;
              plVar9[3] = 0;
              *plVar9 = 0;
              plVar9[1] = 0;
            }
            plVar9[2] = *(longlong *)(local_190 + 0x78);
            *(undefined4 *)(plVar9 + 3) = *(undefined4 *)(lVar12 + 0x30);
            iVar4 = (int)plVar9[1];
            *(int *)(plVar9 + 1) = iVar4 + 1;
            if (*(int *)((longlong)plVar9 + 0xc) < iVar4 + 1) {
              TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(plVar9,iVar4);
            }
            lVar13 = (longlong)iVar4 * 0xd0 + *plVar9;
            if (lVar13 == 0) {
              lVar13 = 0;
            }
            else {
              *(undefined8 *)(lVar13 + 0x10) = 0;
              *(undefined8 *)(lVar13 + 0x38) = 0;
              *(undefined8 *)(lVar13 + 0x40) = 0;
              *(undefined4 *)(lVar13 + 0x48) = DAT_1464aa730;
              *(undefined8 *)(lVar13 + 0xb0) = 0;
              *(undefined8 *)(lVar13 + 0xc0) = 0;
            }
            FSpriteDrawCallRecord::BuildFromSprite(lVar13,local_190);
            puVar5 = (undefined4 *)FLinearColor::ToFColor(param_1 + 0x710,local_148,0);
            *(undefined4 *)(lVar13 + 0x48) = *puVar5;
            fVar35 = fVar16 * 0.5 * fVar35;
            FUN_14081a170(param_1,&local_138,fVar33 - fVar35);
            fVar20 = local_118 * 1.0;
            fVar23 = fStack_114 * 0.0;
            fVar24 = fStack_110 * 0.0;
            fVar16 = fVar24 * fStack_134 - fVar23 * fStack_130;
            fVar15 = fVar20 * fStack_130 - fVar24 * local_138;
            fVar18 = fVar23 * local_138 - fVar20 * fStack_134;
            fVar16 = fVar16 + fVar16;
            fVar15 = fVar15 + fVar15;
            fVar18 = fVar18 + fVar18;
            fVar25 = (fVar18 * fStack_134 - fVar15 * fStack_130) + fStack_12c * fVar16 + fVar20;
            fVar23 = (fVar16 * fStack_130 - fVar18 * local_138) + fStack_12c * fVar15 + fVar23;
            fVar24 = (fVar15 * local_138 - fVar16 * fStack_134) + fStack_12c * fVar18 + fVar24;
            fVar20 = fVar23 * fVar23 + fVar25 * fVar25 + fVar24 * fVar24;
            fVar16 = fVar25;
            fVar15 = fVar23;
            fVar18 = fVar24;
            if ((fVar20 != 1.0) &&
               (fVar16 = DAT_1468b5d90, fVar15 = DAT_1468b5d94, fVar18 = DAT_1468b5d98,
               1e-08 <= fVar20)) {
              auVar30 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
              fVar18 = auVar30._0_4_;
              fVar18 = fVar18 + fVar18 * (0.5 - fVar20 * 0.5 * fVar18 * fVar18);
              fVar18 = fVar18 + fVar18 * (0.5 - fVar20 * 0.5 * fVar18 * fVar18);
              fVar16 = fVar25 * fVar18;
              fVar15 = fVar23 * fVar18;
              fVar18 = fVar24 * fVar18;
            }
            FUN_14081a170(param_1,&local_108,fVar35 + fVar33);
            fVar25 = fStack_fc;
            fVar24 = fStack_100;
            fVar23 = fStack_104;
            fVar20 = local_108;
            fVar33 = local_1bc;
            fVar35 = local_1c0;
            fVar36 = local_e8 * 1.0;
            fVar37 = fStack_e4 * 0.0;
            fVar38 = fStack_e0 * 0.0;
            fVar26 = fVar38 * fStack_104 - fVar37 * fStack_100;
            fVar27 = fVar36 * fStack_100 - fVar38 * local_108;
            fVar21 = fVar37 * local_108 - fVar36 * fStack_104;
            fVar26 = fVar26 + fVar26;
            fVar27 = fVar27 + fVar27;
            fVar21 = fVar21 + fVar21;
            fVar34 = (fVar21 * fStack_104 - fVar27 * fStack_100) + fStack_fc * fVar26 + fVar36;
            fVar37 = (fVar26 * fStack_100 - fVar21 * local_108) + fStack_fc * fVar27 + fVar37;
            fVar38 = (fVar27 * local_108 - fVar26 * fStack_104) + fStack_fc * fVar21 + fVar38;
            fVar36 = fVar37 * fVar37 + fVar34 * fVar34 + fVar38 * fVar38;
            fVar26 = fVar34;
            fVar27 = fVar37;
            fVar21 = fVar38;
            if ((fVar36 != 1.0) &&
               (fVar26 = DAT_1468b5d90, fVar27 = DAT_1468b5d94, fVar21 = DAT_1468b5d98,
               1e-08 <= fVar36)) {
              auVar30 = rsqrtss(ZEXT416((uint)fVar36),ZEXT416((uint)fVar36));
              fVar21 = auVar30._0_4_;
              fVar21 = fVar21 + fVar21 * (0.5 - fVar36 * 0.5 * fVar21 * fVar21);
              fVar21 = fVar21 + fVar21 * (0.5 - fVar36 * 0.5 * fVar21 * fVar21);
              fVar26 = fVar34 * fVar21;
              fVar27 = fVar37 * fVar21;
              fVar21 = fVar38 * fVar21;
            }
            pfVar10 = *(float **)(lVar13 + 0xb0);
            if (*(float **)(lVar13 + 0xb0) == (float *)0x0) {
              pfVar10 = (float *)(lVar13 + 0x50);
            }
            pfVar14 = pfVar10 + (longlong)*(int *)(lVar13 + 0xc0) * 4;
            plVar9 = local_1b0;
            for (; local_1b0 = plVar9, pfVar10 != pfVar14; pfVar10 = pfVar10 + 4) {
              FUN_14081a170(param_1,&local_138,fVar35 * *pfVar10 + fVar33);
              fVar36 = local_138;
              fVar34 = fStack_134;
              fVar37 = fStack_130;
              fVar38 = fStack_12c;
              if (fVar16 * fVar26 + fVar15 * fVar27 + fVar18 * fVar21 < 0.0) {
                fVar36 = fVar20;
                fVar34 = fVar23;
                fVar37 = fVar24;
                fVar38 = fVar25;
              }
              fVar17 = pfVar10[1];
              fVar29 = fVar17 * DAT_146267230 * local_118;
              fVar31 = fVar17 * DAT_146267234 * fStack_114;
              fVar32 = fVar17 * DAT_146267238 * fStack_110;
              fVar17 = fVar32 * fVar34 - fVar31 * fVar37;
              fVar19 = fVar29 * fVar37 - fVar32 * fVar36;
              fVar22 = fVar31 * fVar36 - fVar29 * fVar34;
              fVar17 = fVar17 + fVar17;
              fVar19 = fVar19 + fVar19;
              fVar22 = fVar22 + fVar22;
              fVar29 = (fVar22 * fVar34 - fVar19 * fVar37) + fVar38 * fVar17 + fVar29 + local_128;
              fVar31 = (fVar17 * fVar37 - fVar22 * fVar36) + fVar38 * fVar19 + fVar31 + fStack_124;
              fVar38 = (fVar19 * fVar36 - fVar17 * fVar34) + fVar38 * fVar22 + fVar32 + fStack_120;
              fVar34 = fVar31 * DAT_146267224;
              fVar37 = fVar29 * DAT_146267220;
              fVar36 = fVar38 * DAT_146267228;
              pfVar10[1] = fVar31 * DAT_146267234 + fVar29 * DAT_146267230 + fVar38 * DAT_146267238;
              *pfVar10 = fVar34 + fVar37 + fVar36;
              plVar9 = local_1b0;
            }
          }
          plVar11 = plVar11 + 3;
          param_3 = local_1d8[0];
        } while (plVar11 != plVar9);
      }
      local_188 = local_188 + 0x20;
      iVar4 = iVar8;
    } while (local_188 != local_140);
  }
  local_1d8[0] = '\0';
  AlgoImpl::
  IntroSortInternal<FPaperTerrainSpriteGeometry,FIdentityFunctor,TDereferenceWrapper<FPaperTerrainSpriteGeometry,<lambda_f8dc4bd9f0d268533a0c07abbe333f58>_>_>
            (*(undefined8 *)(param_1 + 0x738),(longlong)*(int *)(param_1 + 0x740),0,local_1d8);
  if (0 < iVar8) {
    FUN_14081bac0(param_1,&local_1d0);
    lVar6 = local_1d0;
  }
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
  return;
}



// FUNCTION 140825a70 FUN_140825a70 body=27 status=ok
// SIG undefined FUN_140825a70(void)

void FUN_140825a70(undefined8 param_1)

{
  FUN_140825a90();
  FUN_1408109e0(param_1);
  return;
}



// FUNCTION 140825a90 FUN_140825a90 body=455 status=ok
// SIG undefined FUN_140825a90(void)

void FUN_140825a90(longlong param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar2 = *(uint *)(param_1 + 0x72c);
  bVar3 = false;
  if ((uVar2 & 4) == 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x718) == 0) ||
     (fVar8 = *(float *)(*(longlong *)(param_1 + 0x718) + 0x28), fVar8 == 0.0)) {
    fVar8 = 0.0;
  }
  else {
    iVar5 = UPaperFlipbook::GetNumFrames();
    fVar8 = (float)iVar5 / fVar8;
  }
  fVar6 = *(float *)(param_1 + 0x728);
  if ((uVar2 & 2) != 0) {
    fVar6 = -fVar6;
  }
  fVar1 = *(float *)(param_1 + 0x730);
  fVar7 = fVar1 + fVar6 * param_2;
  bVar4 = false;
  if (fVar6 * param_2 <= 0.0) {
    if (0.0 <= fVar7) goto LAB_140825c01;
    if ((uVar2 & 1) == 0) {
      *(uint *)(param_1 + 0x72c) = uVar2 & 0xfffffffb;
      bVar4 = true;
    }
    else {
      *(undefined4 *)(param_1 + 0x730) = 0;
      fVar6 = 0.0;
      if (fVar1 != 0.0) {
        FUN_1408109e0(param_1);
        fVar6 = *(float *)(param_1 + 0x730);
      }
      *(float *)(param_1 + 0x730) = fVar8;
      if (fVar6 != fVar8) {
        FUN_1408109e0(param_1);
      }
      if (0.0 < fVar8) {
        do {
          fVar7 = fVar7 + fVar8;
        } while (fVar7 < 0.0);
        goto LAB_140825c01;
      }
    }
  }
  else {
    if (fVar7 <= fVar8) goto LAB_140825c01;
    if ((uVar2 & 1) == 0) {
      *(uint *)(param_1 + 0x72c) = uVar2 & 0xfffffffb;
      bVar3 = true;
      fVar7 = fVar8;
      goto LAB_140825c01;
    }
    *(float *)(param_1 + 0x730) = fVar8;
    fVar6 = fVar8;
    if (fVar1 != fVar8) {
      FUN_1408109e0(param_1);
      fVar6 = *(float *)(param_1 + 0x730);
    }
    *(undefined4 *)(param_1 + 0x730) = 0;
    if (fVar6 != 0.0) {
      FUN_1408109e0(param_1);
    }
    if (0.0 < fVar8) {
      do {
        fVar7 = fVar7 - fVar8;
      } while (fVar8 < fVar7);
      goto LAB_140825c01;
    }
  }
  bVar3 = bVar4;
  fVar7 = 0.0;
LAB_140825c01:
  fVar8 = *(float *)(param_1 + 0x730);
  *(float *)(param_1 + 0x730) = fVar7;
  if (fVar8 != fVar7) {
    FUN_1408109e0(param_1);
  }
  if (bVar3) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x750,0);
  }
  return;
}



// FUNCTION 140825c60 Triangulate body=1139 status=ok
// SIG undefined Triangulate(void)

void FSpriteGeometryCollection::Triangulate(longlong *param_1,longlong *param_2,char param_3)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong **pplVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  void *pvVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  bool bVar16;
  uint local_res20;
  longlong *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  int local_58;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar6 = (longlong *)0x0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_a0 = (longlong *)0x0;
  local_80 = (longlong *)0x0;
  local_78 = (longlong *)(ulonglong)(uint)local_78;
  iVar4 = 0;
  if ((int)param_1[1] != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo();
    iVar4 = (int)param_1[1];
  }
  local_res20 = 0;
  uVar13 = 0;
  local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000);
  iVar3 = 0;
  plVar14 = plVar6;
  if (iVar4 != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
    uVar13 = (ulonglong)local_78 & 0xffffffff;
    iVar3 = (int)param_1[1];
    local_a0 = local_80;
    local_res20 = (uint)local_78;
    plVar14 = local_80;
  }
  uVar12 = 0;
  bVar16 = false;
  uVar15 = uVar12;
  if (0 < iVar3) {
    do {
      lVar7 = uVar12 + *param_1;
      cVar2 = *(char *)(uVar12 + *param_1);
      if ((cVar2 == '\x02') || ((param_3 != '\0' && (cVar2 == '\0')))) {
        if (2 < *(int *)(lVar7 + 0x10)) {
          local_a0 = (longlong *)0x0;
          local_98 = 0;
          FSpriteGeometryShape::GetTextureSpaceVertices(lVar7,&local_a0);
          iVar4 = (int)uVar13;
          uVar11 = iVar4 + 1;
          local_78 = (longlong *)CONCAT44(local_78._4_4_,uVar11);
          if (local_78._4_4_ < (int)uVar11) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_80,uVar13);
            plVar14 = local_80;
            uVar11 = (uint)local_78;
          }
          uVar13 = (ulonglong)uVar11;
          plVar6 = plVar14 + (longlong)iVar4 * 2;
          if (plVar6 == (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          else {
            *plVar6 = 0;
            plVar6[1] = 0;
          }
          PaperGeomTools::CorrectPolygonWinding(plVar6,&local_a0,*(undefined1 *)(lVar7 + 0x2c));
          uVar1 = local_68;
          lVar9 = (longlong)(int)local_68;
          iVar4 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar4);
          if (local_68._4_4_ < iVar4) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_70,uVar1 & 0xffffffff);
          }
          *(undefined1 *)(lVar9 + local_70) = *(undefined1 *)(lVar7 + 0x2c);
          if (local_a0 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        if (*(char *)(lVar7 + 0x2c) != '\0') {
          bVar16 = true;
        }
      }
      uVar11 = (int)uVar15 + 1;
      uVar12 = uVar12 + 0x30;
      uVar15 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)param_1[1]);
    plVar6 = (longlong *)(local_88 & 0xffffffff);
    local_res20 = (uint)uVar13;
    local_a0 = plVar14;
  }
  cVar2 = PaperGeomTools::ArePolygonsValid(&local_80);
  pvVar10 = local_90;
  if (cVar2 != '\0') {
    pplVar5 = (longlong **)PaperGeomTools::ReducePolygons(&local_60,&local_80,&local_70);
    plVar8 = local_60;
    iVar4 = local_58;
    if (&local_80 != pplVar5) {
      uVar11 = (uint)uVar13;
      plVar8 = plVar14;
      while (uVar11 != 0) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
        uVar11 = (int)uVar13 - 1;
        uVar13 = (ulonglong)uVar11;
      }
      if (plVar14 != (longlong *)0x0) {
        FMemory::Free(plVar14);
      }
      local_a0 = *pplVar5;
      *pplVar5 = (longlong *)0x0;
      local_res20 = *(uint *)(pplVar5 + 1);
      uVar13 = (ulonglong)local_res20;
      pplVar5[1] = (longlong *)0x0;
      plVar8 = local_60;
      iVar4 = local_58;
      plVar14 = local_a0;
    }
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_60 != (longlong *)0x0) {
      FMemory::Free(local_60);
    }
    pvVar10 = local_90;
    if (0 < (int)uVar13) {
      do {
        local_80 = (longlong *)0x0;
        local_78 = (longlong *)0x0;
        cVar2 = PaperGeomTools::TriangulatePoly
                          (&local_80,plVar14,*(undefined1 *)((longlong)param_1 + 0x1c));
        plVar8 = local_80;
        if (cVar2 != '\0') {
          iVar4 = (uint)local_78;
          lVar7 = (longlong)(int)(uint)local_78;
          if ((uint)local_78 != 0) {
            iVar3 = (int)plVar6;
            if ((int)local_88._4_4_ < (int)((uint)local_78 + (int)plVar6)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(&local_90);
              pvVar10 = local_90;
              iVar3 = (int)local_88;
            }
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)pvVar10 + (longlong)iVar3 * 8),plVar8,lVar7 << 3);
            plVar6 = (longlong *)(ulonglong)(uint)(iVar3 + iVar4);
            local_88 = CONCAT44(local_88._4_4_,iVar3 + iVar4);
          }
        }
        if (plVar8 != (longlong *)0x0) {
          FMemory::Free(plVar8);
        }
        plVar14 = plVar14 + 2;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      uVar13 = (ulonglong)local_res20;
      plVar14 = local_a0;
    }
    iVar4 = (int)plVar6;
    if ((((!bVar16) && (*(char *)((longlong)param_1 + 0x1c) == '\0')) && (1 < (int)uVar13)) &&
       (1 < iVar4)) {
      plVar8 = (longlong *)0x0;
      local_78 = (longlong *)CONCAT44(local_78._4_4_,iVar4);
      local_80 = (longlong *)0x0;
      if (iVar4 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_80,plVar6,0);
        plVar8 = local_80;
        ::_guard_xfg_dispatch_icall_nop(local_80,local_90,(longlong)iVar4 << 3);
        plVar6 = local_78;
      }
      local_78 = plVar6;
      bVar16 = local_88._4_4_ != 0;
      local_88 = (ulonglong)local_88._4_4_ << 0x20;
      if (bVar16) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_90,0);
      }
      PaperGeomTools::RemoveRedundantTriangles(&local_90,&local_80);
      if (plVar8 != (longlong *)0x0) {
        FMemory::Free(plVar8);
      }
      iVar4 = (int)local_88;
    }
    pvVar10 = local_90;
    if (iVar4 != 0) {
      iVar3 = (int)param_2[1];
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + iVar4) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
        iVar3 = (int)param_2[1];
      }
      pvVar10 = local_90;
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_2 + (longlong)iVar3 * 8),local_90,(longlong)iVar4 << 3);
      *(int *)(param_2 + 1) = (int)param_2[1] + iVar4;
    }
  }
  uVar11 = (uint)uVar13;
  plVar6 = plVar14;
  while (uVar11 != 0) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
    uVar11 = (int)uVar13 - 1;
    uVar13 = (ulonglong)uVar11;
  }
  if (plVar14 != (longlong *)0x0) {
    FMemory::Free(plVar14);
  }
  if (local_70 != 0) {
    FMemory::Free(local_70);
  }
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  return;
}



// FUNCTION 1408260e0 TriangulatePoly body=1692 status=ok
// SIG undefined TriangulatePoly(void)

undefined8 PaperGeomTools::TriangulatePoly(longlong *param_1,undefined8 *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *_Src;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  longlong lVar17;
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
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  
  local_e0 = *(int *)(param_2 + 1);
  lVar17 = (longlong)local_e0;
  if (local_e0 < 3) {
    return 1;
  }
  pvVar9 = (void *)0x0;
  _Src = (void *)*param_2;
  local_e8 = (void *)0x0;
  if (local_e0 == 0) {
    local_dc = 0;
    iVar16 = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_e8,local_e0,0);
    pvVar9 = local_e8;
    ::_guard_xfg_dispatch_icall_nop(local_e8,_Src,lVar17 << 3);
    iVar16 = local_e0;
  }
LAB_1408261e3:
  if ((param_3 == '\0') && (iVar14 = 0, 0 < iVar16)) {
    iVar12 = 2;
    iVar10 = 1;
    do {
      iVar8 = iVar10 % iVar16;
      pfVar7 = (float *)((longlong)pvVar9 + (longlong)iVar8 * 8);
      fVar1 = *(float *)((longlong)pvVar9 + (longlong)(iVar14 % iVar16) * 8);
      fVar2 = *(float *)((longlong)pvVar9 + (longlong)(iVar14 % iVar16) * 8 + 4);
      fVar23 = *(float *)((longlong)pvVar9 + (longlong)(iVar12 % iVar16) * 8) - fVar1;
      fVar22 = *(float *)((longlong)pvVar9 + (longlong)(iVar12 % iVar16) * 8 + 4) - fVar2;
      fVar25 = fVar22 * fVar22 + fVar23 * fVar23;
      if (fVar25 <= 1e-05) {
LAB_1408262d4:
        iVar5 = (iVar16 - iVar8) + -1;
        if (iVar5 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    (pfVar7,(void *)((longlong)pvVar9 + (longlong)(iVar8 + 1) * 8),
                     (longlong)iVar5 << 3);
        }
        local_e0 = iVar16 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_e8);
        iVar14 = iVar14 + -1;
        iVar10 = iVar10 + -1;
        iVar12 = iVar12 + -1;
        pvVar9 = local_e8;
        iVar16 = local_e0;
      }
      else {
        fVar25 = ((pfVar7[1] - fVar2) * fVar22 + (*pfVar7 - fVar1) * fVar23) / fVar25;
        if ((ABS((fVar25 * fVar23 + fVar1) - *pfVar7) <= 2e-05) &&
           (ABS((fVar25 * fVar22 + fVar2) - pfVar7[1]) <= 2e-05)) goto LAB_1408262d4;
      }
      iVar14 = iVar14 + 1;
      iVar10 = iVar10 + 1;
      iVar12 = iVar12 + 1;
    } while (iVar14 < iVar16);
  }
  if (iVar16 < 3) {
    uVar15 = 1;
  }
  else {
    lVar17 = 0;
    iVar14 = 0;
    if (0 < iVar16) {
      do {
        iVar10 = iVar16;
        if (iVar14 != 0) {
          iVar10 = iVar14;
        }
        fVar1 = *(float *)((longlong)pvVar9 + lVar17 * 8);
        iVar12 = iVar14 + 1;
        fVar2 = *(float *)((longlong)pvVar9 + lVar17 * 8 + 4);
        pfVar7 = (float *)((longlong)pvVar9 + 4);
        lVar13 = (longlong)(iVar10 + -1);
        lVar11 = (longlong)(iVar12 % iVar16);
        if ((uint)((*(float *)((longlong)pvVar9 + lVar11 * 8 + 4) -
                   *(float *)((longlong)pvVar9 + lVar13 * 8 + 4)) *
                   (fVar1 - *(float *)((longlong)pvVar9 + lVar13 * 8)) -
                  (fVar2 - *(float *)((longlong)pvVar9 + lVar13 * 8 + 4)) *
                  (*(float *)((longlong)pvVar9 + lVar11 * 8) -
                  *(float *)((longlong)pvVar9 + lVar13 * 8))) < 0x80000000) {
          iVar10 = 0;
          lVar6 = 0;
          do {
            if (((lVar6 != lVar13) && (lVar6 != lVar17)) && (lVar6 != lVar11)) {
              fVar25 = pfVar7[-1];
              fVar22 = *(float *)((longlong)pvVar9 + lVar13 * 8);
              if ((((fVar25 != fVar22) || (*(float *)((longlong)pvVar9 + lVar13 * 8 + 4) != *pfVar7)
                   ) && ((fVar25 != fVar1 || (fVar2 != *pfVar7)))) &&
                 ((fVar23 = *(float *)((longlong)pvVar9 + lVar11 * 8), fVar25 != fVar23 ||
                  (*(float *)((longlong)pvVar9 + lVar11 * 8 + 4) != *pfVar7)))) {
                fVar3 = *(float *)((longlong)pvVar9 + lVar13 * 8 + 4);
                fVar4 = *pfVar7;
                fVar19 = (fVar2 - fVar3) * (fVar25 - fVar22) - (fVar4 - fVar3) * (fVar1 - fVar22);
                if (fVar19 <= 0.0) {
                  if (0.0 <= fVar19) {
                    fVar19 = 0.0;
                  }
                  else {
                    fVar19 = -1.0;
                  }
                }
                else {
                  fVar19 = 1.0;
                }
                fVar26 = *(float *)((longlong)pvVar9 + lVar11 * 8 + 4);
                fVar20 = (fVar26 - fVar2) * (fVar25 - fVar1) - (fVar23 - fVar1) * (fVar4 - fVar2);
                if (fVar20 <= 0.0) {
                  if (0.0 <= fVar20) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = -1.0;
                  }
                }
                else {
                  fVar20 = 1.0;
                }
                fVar18 = fVar3 - fVar26;
                fVar27 = fVar22 - fVar23;
                fVar28 = (fVar25 - fVar23) * fVar18;
                fVar21 = (fVar4 - fVar26) * fVar27;
                fVar24 = fVar28 - fVar21;
                if (fVar24 <= 0.0) {
                  if (0.0 <= fVar24) {
                    fVar24 = 0.0;
                  }
                  else {
                    fVar24 = -1.0;
                  }
                }
                else {
                  fVar24 = 1.0;
                }
                if ((fVar19 == fVar20) && (fVar20 == fVar24)) break;
                fVar19 = fVar23;
                if (fVar22 <= fVar23) {
                  fVar19 = fVar22;
                }
                if (fVar19 <= fVar25) {
                  if (fVar23 <= fVar22) {
                    fVar23 = fVar22;
                  }
                  if (fVar25 <= fVar23) {
                    fVar25 = fVar26;
                    if (fVar3 <= fVar26) {
                      fVar25 = fVar3;
                    }
                    if (fVar25 <= fVar4) {
                      if (fVar26 <= fVar3) {
                        fVar26 = fVar3;
                      }
                      if ((fVar4 <= fVar26) &&
                         (ABS(fVar21 - fVar28) < (fVar18 * fVar18 + fVar27 * fVar27) * 0.01)) break;
                    }
                  }
                }
              }
            }
            iVar10 = iVar10 + 1;
            lVar6 = lVar6 + 1;
            pfVar7 = pfVar7 + 2;
            if (iVar16 <= iVar10) {
              lVar6 = param_1[1];
              iVar10 = (int)lVar6 + 1;
              *(int *)(param_1 + 1) = iVar10;
              if (*(int *)((longlong)param_1 + 0xc) < iVar10) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
              }
              *(undefined8 *)(*param_1 + (longlong)(int)lVar6 * 8) =
                   *(undefined8 *)((longlong)pvVar9 + lVar13 * 8);
              lVar13 = param_1[1];
              iVar10 = (int)lVar13 + 1;
              *(int *)(param_1 + 1) = iVar10;
              if (*(int *)((longlong)param_1 + 0xc) < iVar10) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
              }
              *(undefined8 *)(*param_1 + (longlong)(int)lVar13 * 8) =
                   *(undefined8 *)((longlong)pvVar9 + lVar17 * 8);
              lVar17 = param_1[1];
              iVar10 = (int)lVar17 + 1;
              *(int *)(param_1 + 1) = iVar10;
              if (*(int *)((longlong)param_1 + 0xc) < iVar10) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
              }
              *(undefined8 *)(*param_1 + (longlong)(int)lVar17 * 8) =
                   *(undefined8 *)((longlong)pvVar9 + lVar11 * 8);
              iVar10 = (iVar16 - iVar14) + -1;
              if (iVar10 != 0) {
                ::_guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)pvVar9 + (longlong)iVar14 * 8),
                           (void *)((longlong)pvVar9 + (longlong)(iVar14 + 1) * 8),
                           (longlong)iVar10 << 3);
              }
              local_e0 = iVar16 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_e8);
              pvVar9 = local_e8;
              iVar16 = local_e0;
              goto LAB_1408261e3;
            }
          } while( true );
        }
        lVar17 = lVar17 + 1;
        iVar14 = iVar12;
      } while (iVar12 < iVar16);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
    }
    uVar15 = 0;
  }
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  return uVar15;
}



// FUNCTION 140826780 Union body=651 status=ok
// SIG undefined Union(void)

float * Union(float *param_1,float *param_2,float *param_3)

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
  
  fVar9 = param_2[2] - param_2[5];
  fVar4 = param_2[5] + param_2[2];
  fVar10 = param_2[1] - param_2[4];
  fVar5 = param_2[4] + param_2[1];
  fVar11 = *param_2 - param_2[3];
  fVar6 = param_2[3] + *param_2;
  fVar1 = fVar9;
  if (fVar9 <= fVar4) {
    fVar1 = fVar4;
  }
  if (fVar4 <= fVar9) {
    fVar9 = fVar4;
  }
  fVar4 = fVar10;
  if (fVar10 <= fVar5) {
    fVar4 = fVar5;
  }
  if (fVar5 <= fVar10) {
    fVar10 = fVar5;
  }
  fVar5 = fVar11;
  if (fVar11 <= fVar6) {
    fVar5 = fVar6;
  }
  if (fVar6 <= fVar11) {
    fVar11 = fVar6;
  }
  fVar6 = param_3[2] - param_3[5];
  fVar8 = param_3[5] + param_3[2];
  fVar3 = *param_3 - param_3[3];
  fVar2 = param_3[1] - param_3[4];
  fVar7 = param_3[3] + *param_3;
  if (fVar1 <= fVar6) {
    fVar1 = fVar6;
  }
  if (fVar6 <= fVar9) {
    fVar9 = fVar6;
  }
  if (fVar5 <= fVar3) {
    fVar5 = fVar3;
  }
  if (fVar3 <= fVar11) {
    fVar11 = fVar3;
  }
  if (fVar4 <= fVar2) {
    fVar4 = fVar2;
  }
  if (fVar2 <= fVar10) {
    fVar10 = fVar2;
  }
  fVar6 = param_3[4] + param_3[1];
  if (fVar5 <= fVar7) {
    fVar5 = fVar7;
  }
  if (fVar7 <= fVar11) {
    fVar11 = fVar7;
  }
  if (fVar8 <= fVar9) {
    fVar9 = fVar8;
  }
  if (fVar1 <= fVar8) {
    fVar1 = fVar8;
  }
  if (fVar6 <= fVar10) {
    fVar10 = fVar6;
  }
  if (fVar4 <= fVar6) {
    fVar4 = fVar6;
  }
  *(ulonglong *)(param_1 + 3) = CONCAT44((fVar4 - fVar10) * 0.5,(fVar5 - fVar11) * 0.5);
  param_1[5] = (fVar1 - fVar9) * 0.5;
  *(ulonglong *)param_1 = CONCAT44(fVar10 + param_1[4],fVar11 + param_1[3]);
  param_1[2] = fVar9 + param_1[5];
  fVar10 = SQRT(param_1[3] * param_1[3] + param_1[4] * param_1[4] + param_1[5] * param_1[5]);
  param_1[6] = fVar10;
  fVar1 = SQRT((param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
               (*param_2 - *param_1) * (*param_2 - *param_1) +
               (param_2[2] - param_1[2]) * (param_2[2] - param_1[2])) + param_2[6];
  fVar9 = SQRT((param_3[1] - param_1[1]) * (param_3[1] - param_1[1]) +
               (*param_3 - *param_1) * (*param_3 - *param_1) +
               (param_3[2] - param_1[2]) * (param_3[2] - param_1[2])) + param_3[6];
  if (fVar9 <= fVar1) {
    fVar9 = fVar1;
  }
  if (fVar10 <= fVar9) {
    fVar9 = fVar10;
  }
  param_1[6] = fVar9;
  return param_1;
}



// FUNCTION 140826a10 FUN_140826a10 body=194 status=ok
// SIG undefined FUN_140826a10(void)

void FUN_140826a10(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x8c) == '\0') {
    *(undefined8 *)(param_1 + 0x98) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x8c) == '\x02') {
    uVar1 = FUN_14080a7b0();
    *(undefined8 *)(param_1 + 0x98) = uVar1;
  }
  iVar3 = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x98) + 0x9c) = 2;
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar2 = 0;
    do {
      FUN_14080f380(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + lVar2),
                    *(undefined8 *)(param_1 + 0x98),(float)iVar3 * *(float *)(param_1 + 0x44));
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x80));
  }
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x290))();
                    /* WARNING: Could not recover jumptable at 0x000140826ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x278))();
  return;
}



// FUNCTION 140826ae0 FUN_140826ae0 body=135 status=ok
// SIG undefined FUN_140826ae0(void)

undefined8 FUN_140826ae0(longlong param_1,int param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 local_res10 [8];
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x730))) {
    lVar1 = *(longlong *)(param_1 + 0x728);
    puVar2 = (undefined4 *)FLinearColor::ToFColor(param_3,local_res10,0);
    *(undefined4 *)(lVar1 + 0x48 + (longlong)param_2 * 0x50) = *puVar2;
    if (param_4 != '\0') {
      FUN_1423424e0(param_1);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 140826b70 FUN_140826b70 body=1816 status=ok
// SIG undefined FUN_140826b70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140826b70(longlong param_1,int param_2,float *param_3,char param_4,char param_5,
             undefined1 param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  undefined8 uVar13;
  uint *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar20 [16];
  uint uVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  float fVar32;
  uint uVar33;
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
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auStack_188 [32];
  undefined4 local_168;
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
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x730) <= param_2)) {
    uVar13 = 0;
  }
  else {
    FUN_142252d00();
    puVar14 = (uint *)((longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x728));
    if (param_4 == '\0') {
      fVar30 = *param_3;
      fVar39 = param_3[1];
      fVar41 = param_3[2];
      fVar18 = param_3[3];
      pfVar12 = &local_108;
      local_f8 = *(undefined8 *)(param_3 + 4);
      uStack_f0 = *(undefined8 *)(param_3 + 6);
      local_e8 = *(undefined8 *)(param_3 + 8);
      uStack_e0 = *(undefined8 *)(param_3 + 10);
      local_108 = fVar30;
      fStack_104 = fVar39;
      fStack_100 = fVar41;
      fStack_fc = fVar18;
    }
    else {
      pfVar12 = (float *)FUN_14162bcf0(param_3,&local_108,param_1 + 0x210);
      fVar30 = *pfVar12;
      fVar39 = pfVar12[1];
      fVar41 = pfVar12[2];
      fVar18 = pfVar12[3];
    }
    uVar10 = uRam000000014685e33c;
    uVar9 = uRam000000014685e338;
    uVar8 = uRam000000014685e334;
    uVar7 = _DAT_14685e330;
    fVar36 = fRam000000014685e32c;
    auVar15 = *(undefined1 (*) [16])(pfVar12 + 8);
    fVar19 = auVar15._0_4_;
    fVar22 = auVar15._4_4_;
    fVar25 = auVar15._8_4_;
    fVar27 = auVar15._12_4_;
    fVar17 = fVar30 + fVar30;
    fVar21 = fVar39 + fVar39;
    fVar23 = fVar41 + fVar41;
    fVar42 = pfVar12[4];
    fVar49 = pfVar12[5];
    fVar50 = pfVar12[6];
    fVar32 = pfVar12[7];
    fVar34 = fVar30 * fVar17;
    fVar53 = fVar41 * fVar23 + fVar39 * fVar21;
    fVar54 = fVar41 * fVar23 + fVar34;
    fVar55 = fVar39 * fVar21 + fVar34;
    local_158 = fVar18 * fVar23 + fVar30 * fVar21;
    fStack_154 = fVar18 * fVar17 + fVar39 * fVar23;
    fStack_150 = fVar18 * fVar21 + fVar30 * fVar23;
    fStack_14c = fVar18 * fVar17 + fVar30 * fVar17;
    fVar51 = fVar22 * (fVar30 * fVar21 - fVar18 * fVar23);
    fVar52 = fVar25 * (fVar39 * fVar23 - fVar18 * fVar17);
    fVar23 = fVar19 * (fVar30 * fVar23 - fVar18 * fVar21);
    uVar28 = (uint)((fRam000000014685e324 - fVar54) * fVar22) & uRam000000014685e334;
    uVar31 = (uint)((fRam000000014685e328 - fVar55) * fVar25) & uRam000000014685e338;
    uVar33 = (uint)((fRam000000014685e32c - (fVar34 + fVar34)) * fVar27) & uRam000000014685e33c;
    *puVar14 = (uint)((_DAT_14685e320 - fVar53) * fVar19) & _DAT_14685e330;
    puVar14[1] = (uint)(fVar19 * local_158);
    puVar14[2] = (uint)fVar23;
    puVar14[3] = uVar33;
    puVar14[4] = (uint)fVar51;
    puVar14[5] = uVar28;
    puVar14[6] = (uint)(fVar22 * fStack_154);
    puVar14[7] = uVar33;
    puVar14[8] = (uint)(fVar25 * fStack_150);
    puVar14[9] = (uint)fVar52;
    puVar14[10] = uVar31;
    puVar14[0xb] = uVar33;
    puVar14[0xc] = (uint)fVar42;
    puVar14[0xd] = (uint)fVar49;
    puVar14[0xe] = (uint)fVar50;
    puVar14[0xf] = (uint)fVar36;
    fVar21 = fRam000000014685e328;
    fVar17 = fRam000000014685e324;
    fVar36 = _DAT_14685e320;
    if ((*(byte *)(param_1 + 0xb8) & 4) != 0) {
      if (param_4 == '\0') {
        auVar16 = *(undefined1 (*) [16])(param_1 + 0x230);
        fVar24 = auVar16._0_4_;
        fVar26 = auVar16._4_4_;
        fVar2 = auVar16._8_4_;
        fVar3 = auVar16._12_4_;
        fVar40 = *(float *)(param_1 + 0x210);
        fVar4 = *(float *)(param_1 + 0x214);
        fVar5 = *(float *)(param_1 + 0x218);
        fVar6 = *(float *)(param_1 + 0x21c);
        auVar15 = minps(auVar15,auVar16);
        fVar56 = fVar19 * fVar24;
        fVar57 = fVar22 * fVar26;
        fVar58 = fVar25 * fVar2;
        fVar59 = fVar27 * fVar3;
        auVar16._4_4_ = -(uint)(auVar15._4_4_ < fRam000000014685e384);
        auVar16._0_4_ = -(uint)(auVar15._0_4_ < _DAT_14685e380);
        auVar16._8_4_ = -(uint)(auVar15._8_4_ < fRam000000014685e388);
        auVar16._12_4_ = -(uint)(auVar15._12_4_ < fRam000000014685e38c);
        iVar11 = movmskps((int)pfVar12,auVar16);
        if (iVar11 == 0) {
          fVar42 = fVar42 * fVar24;
          fVar49 = fVar49 * fVar26;
          fVar50 = fVar50 * fVar2;
          fVar32 = fVar32 * fVar3;
          fVar19 = fVar50 * fVar4 - fVar49 * fVar5;
          fVar27 = fVar42 * fVar5 - fVar50 * fVar40;
          fVar36 = fVar49 * fVar40 - fVar42 * fVar4;
          fVar17 = fVar32 * fVar6 - fVar32 * fVar6;
          fVar19 = fVar19 + fVar19;
          fVar27 = fVar27 + fVar27;
          fVar36 = fVar36 + fVar36;
          fVar17 = fVar17 + fVar17;
          fVar22 = (fVar36 * fVar4 - fVar27 * fVar5) + fVar19 * fVar6 + fVar42 +
                   *(float *)(param_1 + 0x220);
          fVar25 = (fVar19 * fVar5 - fVar36 * fVar40) + fVar27 * fVar6 + fVar49 +
                   *(float *)(param_1 + 0x224);
          fVar27 = (fVar27 * fVar40 - fVar19 * fVar4) + fVar36 * fVar6 + fVar50 +
                   *(float *)(param_1 + 0x228);
          fVar19 = (fVar17 * fVar6 - fVar17 * fVar6) + fVar17 * fVar6 + fVar32 +
                   *(float *)(param_1 + 0x22c);
          local_108 = fVar18 * fVar40 * _DAT_14685e360 + fVar30 * fVar6 +
                      fVar41 * fVar4 * _DAT_14685e350 + fVar39 * fVar5 * _DAT_14685e340;
          fStack_104 = fVar41 * fVar40 * fRam000000014685e364 + fVar39 * fVar6 +
                       fVar18 * fVar4 * fRam000000014685e354 + fVar30 * fVar5 * fRam000000014685e344
          ;
          fStack_100 = fVar39 * fVar40 * fRam000000014685e368 + fVar41 * fVar6 +
                       fVar30 * fVar4 * fRam000000014685e358 + fVar18 * fVar5 * fRam000000014685e348
          ;
          fStack_fc = fVar30 * fVar40 * fRam000000014685e36c + fVar18 * fVar6 +
                      fVar39 * fVar4 * fRam000000014685e35c + fVar41 * fVar5 * fRam000000014685e34c;
        }
        else {
          fVar29 = fVar4 + fVar4;
          fVar32 = fVar5 + fVar5;
          fVar35 = fVar40 * (fVar40 + fVar40);
          fVar30 = (fVar40 + fVar40) * fVar6;
          fVar43 = fVar19 * local_158;
          fVar44 = fVar22 * fStack_154;
          fVar45 = fVar25 * fStack_150;
          fVar46 = (fVar32 * fVar6 + fVar29 * fVar40) * fVar24;
          fVar47 = (fVar30 + fVar32 * fVar4) * fVar26;
          fVar48 = (fVar29 * fVar6 + fVar32 * fVar40) * fVar2;
          fVar37 = fVar26 * (fVar29 * fVar40 - fVar32 * fVar6);
          fVar38 = fVar2 * (fVar32 * fVar4 - fVar30);
          fVar40 = fVar24 * (fVar32 * fVar40 - fVar29 * fVar6);
          fVar30 = *(float *)(param_1 + 0x220);
          fVar39 = *(float *)(param_1 + 0x224);
          fVar41 = *(float *)(param_1 + 0x228);
          fVar18 = (float)((uint)((_DAT_14685e320 - (fVar5 * fVar32 + fVar4 * fVar29)) * fVar24) &
                          uVar7);
          fVar32 = (float)((uint)((fRam000000014685e324 - (fVar5 * fVar32 + fVar35)) * fVar26) &
                          uVar8);
          fVar24 = (float)((uint)((fRam000000014685e328 - (fVar4 * fVar29 + fVar35)) * fVar2) &
                          uVar9);
          fVar26 = (float)((uint)((fRam000000014685e32c - (fVar35 + fVar35)) * fVar3) & uVar10);
          fVar19 = (float)((uint)((_DAT_14685e320 - fVar53) * fVar19) & _DAT_14685e330);
          fVar22 = (float)((uint)((fRam000000014685e324 - fVar54) * fVar22) & uRam000000014685e334);
          fVar25 = (float)((uint)((fRam000000014685e328 - fVar55) * fVar25) & uRam000000014685e338);
          fVar27 = (float)((uint)((fRam000000014685e32c - (fVar34 + fVar34)) * fVar27) &
                          uRam000000014685e33c);
          local_148 = fVar43 * fVar37 + fVar19 * fVar18 + fVar23 * fVar48 + fVar27 * fVar30;
          fStack_144 = fVar43 * fVar32 + fVar19 * fVar46 + fVar23 * fVar38 + fVar27 * fVar39;
          fStack_140 = fVar43 * fVar47 + fVar19 * fVar40 + fVar23 * fVar24 + fVar27 * fVar41;
          fStack_13c = fVar43 * fVar26 + fVar19 * fVar26 + fVar23 * fVar26 +
                       fVar27 * fRam000000014685e32c;
          local_138 = fVar22 * fVar37 + fVar51 * fVar18 + fVar44 * fVar48 + fVar27 * fVar30;
          fStack_134 = fVar22 * fVar32 + fVar51 * fVar46 + fVar44 * fVar38 + fVar27 * fVar39;
          fStack_130 = fVar22 * fVar47 + fVar51 * fVar40 + fVar44 * fVar24 + fVar27 * fVar41;
          fStack_12c = fVar22 * fVar26 + fVar51 * fVar26 + fVar44 * fVar26 +
                       fVar27 * fRam000000014685e32c;
          local_128 = fVar52 * fVar37 + fVar45 * fVar18 + fVar25 * fVar48 + fVar27 * fVar30;
          fStack_124 = fVar52 * fVar32 + fVar45 * fVar46 + fVar25 * fVar38 + fVar27 * fVar39;
          fStack_120 = fVar52 * fVar47 + fVar45 * fVar40 + fVar25 * fVar24 + fVar27 * fVar41;
          fStack_11c = fVar52 * fVar26 + fVar45 * fVar26 + fVar25 * fVar26 +
                       fVar27 * fRam000000014685e32c;
          local_118 = fVar49 * fVar37 + fVar42 * fVar18 + fVar50 * fVar48 +
                      fRam000000014685e32c * fVar30;
          fStack_114 = fVar49 * fVar32 + fVar42 * fVar46 + fVar50 * fVar38 +
                       fRam000000014685e32c * fVar39;
          fStack_110 = fVar49 * fVar47 + fVar42 * fVar40 + fVar50 * fVar24 +
                       fRam000000014685e32c * fVar41;
          fStack_10c = fVar49 * fVar26 + fVar42 * fVar26 + fVar50 * fVar26 +
                       fRam000000014685e32c * fRam000000014685e32c;
          FMatrix::RemoveScaling(&local_148);
          fVar30 = (float)(-(uint)(_DAT_14685e380 <= fVar56) & (_DAT_14685e370 ^ (uint)fVar36) ^
                          _DAT_14685e370);
          fVar39 = (float)(-(uint)(fRam000000014685e384 <= fVar57) &
                           (uRam000000014685e374 ^ (uint)fVar17) ^ uRam000000014685e374);
          fVar41 = (float)(-(uint)(fRam000000014685e388 <= fVar58) &
                           (uRam000000014685e378 ^ (uint)fVar21) ^ uRam000000014685e378);
          local_148 = local_148 * fVar30;
          fStack_144 = fStack_144 * fVar30;
          fStack_140 = fStack_140 * fVar30;
          fStack_134 = fStack_134 * fVar39;
          fStack_130 = fStack_130 * fVar39;
          local_138 = local_138 * fVar39;
          fStack_124 = fStack_124 * fVar41;
          fStack_120 = fStack_120 * fVar41;
          local_128 = local_128 * fVar41;
          FQuat::FQuat(&local_158,&local_148);
          local_168 = 0x322bcc77;
          auVar20._0_4_ = local_158 * local_158 + fStack_150 * fStack_150;
          auVar20._4_4_ = fStack_154 * fStack_154 + fStack_14c * fStack_14c;
          auVar20._8_4_ = fStack_150 * fStack_150 + local_158 * local_158;
          auVar20._12_4_ = fStack_14c * fStack_14c + fStack_154 * fStack_154;
          fVar22 = auVar20._4_4_ + auVar20._0_4_;
          fVar25 = auVar20._8_4_ + auVar20._4_4_;
          fVar27 = auVar20._12_4_ + auVar20._8_4_;
          fVar42 = auVar20._0_4_ + auVar20._12_4_;
          auVar15._4_4_ = fVar25;
          auVar15._0_4_ = fVar22;
          auVar15._8_4_ = fVar27;
          auVar15._12_4_ = fVar42;
          auVar15 = rsqrtps(auVar20,auVar15);
          fVar30 = auVar15._0_4_;
          fVar39 = auVar15._4_4_;
          fVar41 = auVar15._8_4_;
          fVar18 = auVar15._12_4_;
          fVar30 = (_DAT_14685e310 - fVar30 * fVar30 * fVar22 * _DAT_14685e310) * fVar30 + fVar30;
          fVar39 = (fRam000000014685e314 - fVar39 * fVar39 * fVar25 * fRam000000014685e314) * fVar39
                   + fVar39;
          fVar41 = (fRam000000014685e318 - fVar41 * fVar41 * fVar27 * fRam000000014685e318) * fVar41
                   + fVar41;
          fVar18 = (fRam000000014685e31c - fVar18 * fVar18 * fVar42 * fRam000000014685e31c) * fVar18
                   + fVar18;
          fVar19 = 0.0;
          local_108 = (float)(((uint)(((_DAT_14685e310 - fVar30 * fVar30 * fVar22 * _DAT_14685e310)
                                       * fVar30 + fVar30) * local_158) ^ _DAT_14685e300) &
                              -(uint)(1e-08 <= fVar22) ^ _DAT_14685e300);
          fStack_104 = (float)(((uint)(((fRam000000014685e314 -
                                        fVar39 * fVar39 * fVar25 * fRam000000014685e314) * fVar39 +
                                       fVar39) * fStack_154) ^ uRam000000014685e304) &
                               -(uint)(1e-08 <= fVar25) ^ uRam000000014685e304);
          fStack_100 = (float)(((uint)(((fRam000000014685e318 -
                                        fVar41 * fVar41 * fVar27 * fRam000000014685e318) * fVar41 +
                                       fVar41) * fStack_150) ^ uRam000000014685e308) &
                               -(uint)(1e-08 <= fVar27) ^ uRam000000014685e308);
          fStack_fc = (float)(((uint)(((fRam000000014685e31c -
                                       fVar18 * fVar18 * fVar42 * fRam000000014685e31c) * fVar18 +
                                      fVar18) * fStack_14c) ^ uRam000000014685e30c) &
                              -(uint)(1e-08 <= fVar42) ^ uRam000000014685e30c);
          fVar22 = local_118;
          fVar25 = fStack_114;
          fVar27 = fStack_110;
        }
      }
      else {
        local_108 = *param_3;
        fStack_104 = param_3[1];
        fStack_100 = param_3[2];
        fStack_fc = param_3[3];
        fVar19 = param_3[7];
        fVar56 = param_3[8];
        fVar57 = param_3[9];
        fVar58 = param_3[10];
        fVar59 = param_3[0xb];
        fVar22 = param_3[4];
        fVar25 = param_3[5];
        fVar27 = param_3[6];
      }
      local_e8 = CONCAT44(fVar57,fVar56);
      uStack_e0 = CONCAT44(fVar59,fVar58);
      local_f8 = CONCAT44(fVar25,fVar22);
      uStack_f0 = CONCAT44(fVar19,fVar27);
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x738) + (longlong)param_2 * 8);
      if (lVar1 != 0) {
        FUN_1426a89c0(lVar1,&local_108,param_6);
        local_158 = (float)local_e8;
        fStack_150 = (float)uStack_e0;
        fStack_154 = local_e8._4_4_;
        FUN_1426aef60(lVar1,&local_158,0);
      }
    }
    FUN_142252d00(param_1);
    if (param_5 != '\0') {
      FUN_1423424e0(param_1);
    }
    uVar13 = 1;
  }
  return uVar13;
}



// FUNCTION 140827290 FUN_140827290 body=210 status=ok
// SIG undefined FUN_140827290(void)

ulonglong FUN_140827290(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  uVar5 = 0xffffffff;
  if (param_2 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x78);
    if (lVar3 != 0) {
      plVar1 = param_1 + 0xe3;
      plVar4 = (longlong *)*plVar1;
      uVar2 = *(uint *)(param_1 + 0xe4);
      for (plVar6 = plVar4; plVar6 != plVar4 + (int)uVar2; plVar6 = plVar6 + 1) {
        if (*plVar6 == lVar3) {
          uVar5 = (longlong)plVar6 - (longlong)plVar4 >> 3;
          if ((int)uVar5 != -1) goto LAB_14082733a;
          break;
        }
      }
      *(uint *)(param_1 + 0xe4) = uVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x724) < (int)(uVar2 + 1)) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,uVar2);
      }
      uVar5 = (ulonglong)uVar2;
      *(longlong *)((longlong)(int)uVar2 * 8 + *plVar1) = lVar3;
    }
LAB_14082733a:
    if (param_3 != 0) {
      (**(code **)(*param_1 + 0x568))(param_1,uVar5 & 0xffffffff,param_3);
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 140827370 FUN_140827370 body=162 status=ok
// SIG undefined FUN_140827370(void)

longlong FUN_140827370(void)

{
  if (DAT_14685e9b8 == 0) {
    FUN_14171ccd0(L"/Script/Paper2D",L"PaperGroupedSpriteComponent",&DAT_14685e9b8,FUN_14082ab20,
                  0x750,0x10000000,0,L"Engine",&LAB_140829680,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1429bed90,&LAB_140447700,0);
  }
  return DAT_14685e9b8;
}



// FUNCTION 140827420 FUN_140827420 body=162 status=ok
// SIG undefined FUN_140827420(void)

longlong FUN_140827420(void)

{
  if (DAT_14685ea88 == 0) {
    FUN_14171ccd0(L"/Script/Paper2D",L"PaperTerrainComponent",&DAT_14685ea88,FUN_14082abb0,0x750,
                  0x10000000,0,L"Engine",&LAB_140829720,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_14685ea88;
}



// FUNCTION 1408274d0 FUN_1408274d0 body=47 status=ok
// SIG undefined FUN_1408274d0(void)

longlong FUN_1408274d0(void)

{
  if (DAT_14685ea80 == 0) {
    FUN_141786440(&DAT_14685ea80,&PTR_FUN_144101a10);
  }
  return DAT_14685ea80;
}



// FUNCTION 140827500 FUN_140827500 body=47 status=ok
// SIG undefined FUN_140827500(void)

longlong FUN_140827500(void)

{
  if (DAT_14685ea78 == 0) {
    FUN_141786a30(&DAT_14685ea78,&PTR_FUN_14626a440);
  }
  return DAT_14685ea78;
}



// FUNCTION 140827530 FUN_140827530 body=47 status=ok
// SIG undefined FUN_140827530(void)

longlong FUN_140827530(void)

{
  if (DAT_14685e860 == 0) {
    FUN_141786440(&DAT_14685e860,&PTR_GetPrivateStaticClass_144102160);
  }
  return DAT_14685e860;
}



// FUNCTION 140827560 FUN_140827560 body=47 status=ok
// SIG undefined FUN_140827560(void)

longlong FUN_140827560(void)

{
  if (DAT_14685e828 == 0) {
    FUN_141786a30(&DAT_14685e828,&PTR_FUN_146267680);
  }
  return DAT_14685e828;
}



// FUNCTION 140827590 FUN_140827590 body=47 status=ok
// SIG undefined FUN_140827590(void)

longlong FUN_140827590(void)

{
  if (DAT_14685e830 == 0) {
    FUN_141786a30(&DAT_14685e830,&PTR_FUN_146267700);
  }
  return DAT_14685e830;
}



// FUNCTION 1408275c0 FUN_1408275c0 body=47 status=ok
// SIG undefined FUN_1408275c0(void)

longlong FUN_1408275c0(void)

{
  if (DAT_14685e838 == 0) {
    FUN_141786a30(&DAT_14685e838,&PTR_FUN_146267780);
  }
  return DAT_14685e838;
}



// FUNCTION 1408275f0 FUN_1408275f0 body=47 status=ok
// SIG undefined FUN_1408275f0(void)

longlong FUN_1408275f0(void)

{
  if (DAT_14685e840 == 0) {
    FUN_141786a30(&DAT_14685e840,&PTR_FUN_146267840);
  }
  return DAT_14685e840;
}



// FUNCTION 140827620 FUN_140827620 body=47 status=ok
// SIG undefined FUN_140827620(void)

longlong FUN_140827620(void)

{
  if (DAT_14685e848 == 0) {
    FUN_141786a30(&DAT_14685e848,&PTR_FUN_146267940);
  }
  return DAT_14685e848;
}



// FUNCTION 140827650 FUN_140827650 body=47 status=ok
// SIG undefined FUN_140827650(void)

longlong FUN_140827650(void)

{
  if (DAT_14685e850 == 0) {
    FUN_141786a30(&DAT_14685e850,&PTR_FUN_1462679c0);
  }
  return DAT_14685e850;
}



// FUNCTION 140827680 FUN_140827680 body=47 status=ok
// SIG undefined FUN_140827680(void)

longlong FUN_140827680(void)

{
  if (DAT_14685e858 == 0) {
    FUN_141786a30(&DAT_14685e858,&PTR_FUN_146267a80);
  }
  return DAT_14685e858;
}



// FUNCTION 1408276b0 FUN_1408276b0 body=53 status=ok
// SIG undefined FUN_1408276b0(void)

void FUN_1408276b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1441076a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140827710 FUN_140827710 body=47 status=ok
// SIG undefined FUN_140827710(void)

longlong FUN_140827710(void)

{
  if (DAT_14685e9b0 == 0) {
    FUN_141786440(&DAT_14685e9b0,&PTR_FUN_1441027c0);
  }
  return DAT_14685e9b0;
}



// FUNCTION 140827740 FUN_140827740 body=47 status=ok
// SIG undefined FUN_140827740(void)

longlong FUN_140827740(void)

{
  if (DAT_14685e970 == 0) {
    FUN_141786a30(&DAT_14685e970,&PTR_FUN_146268e10);
  }
  return DAT_14685e970;
}



// FUNCTION 140827770 FUN_140827770 body=47 status=ok
// SIG undefined FUN_140827770(void)

longlong FUN_140827770(void)

{
  if (DAT_14685e978 == 0) {
    FUN_141786a30(&DAT_14685e978,&PTR_FUN_146268e50);
  }
  return DAT_14685e978;
}



// FUNCTION 1408277a0 FUN_1408277a0 body=47 status=ok
// SIG undefined FUN_1408277a0(void)

longlong FUN_1408277a0(void)

{
  if (DAT_14685e980 == 0) {
    FUN_141786a30(&DAT_14685e980,&PTR_FUN_146268ed0);
  }
  return DAT_14685e980;
}



// FUNCTION 1408277d0 FUN_1408277d0 body=47 status=ok
// SIG undefined FUN_1408277d0(void)

longlong FUN_1408277d0(void)

{
  if (DAT_14685e988 == 0) {
    FUN_141786a30(&DAT_14685e988,&PTR_FUN_146269030);
  }
  return DAT_14685e988;
}



// FUNCTION 140827800 FUN_140827800 body=47 status=ok
// SIG undefined FUN_140827800(void)

longlong FUN_140827800(void)

{
  if (DAT_14685e990 == 0) {
    FUN_141786a30(&DAT_14685e990,&PTR_FUN_1462690f0);
  }
  return DAT_14685e990;
}



// FUNCTION 140827830 FUN_140827830 body=47 status=ok
// SIG undefined FUN_140827830(void)

longlong FUN_140827830(void)

{
  if (DAT_14685e998 == 0) {
    FUN_141786a30(&DAT_14685e998,&PTR_FUN_146269170);
  }
  return DAT_14685e998;
}



// FUNCTION 140827860 FUN_140827860 body=47 status=ok
// SIG undefined FUN_140827860(void)

longlong FUN_140827860(void)

{
  if (DAT_14685e9a0 == 0) {
    FUN_141786a30(&DAT_14685e9a0,&PTR_FUN_1462692d0);
  }
  return DAT_14685e9a0;
}



// FUNCTION 140827890 FUN_140827890 body=47 status=ok
// SIG undefined FUN_140827890(void)

longlong FUN_140827890(void)

{
  if (DAT_14685e9a8 == 0) {
    FUN_141786a30(&DAT_14685e9a8,&PTR_FUN_1462694d0);
  }
  return DAT_14685e9a8;
}



// FUNCTION 1408278c0 FUN_1408278c0 body=53 status=ok
// SIG undefined FUN_1408278c0(void)

void FUN_1408278c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_1441079a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 140827900 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPaperTerrainMaterial::GetPrivateStaticClass(void)

{
  if (DAT_14685eaa8 == 0) {
    FUN_14171ccd0(L"/Script/Paper2D",L"PaperTerrainMaterial",&DAT_14685eaa8,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",&LAB_140829740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685eaa8;
}



// FUNCTION 1408279c0 FUN_1408279c0 body=162 status=ok
// SIG undefined FUN_1408279c0(void)

longlong FUN_1408279c0(void)

{
  if (DAT_14685e878 == 0) {
    FUN_14171ccd0(L"/Script/Paper2D",L"PaperFlipbookActor",&DAT_14685e878,FUN_140447710,0x460,
                  0x10000000,0,L"Engine",&LAB_140829580,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14685e878;
}



// FUNCTION 140827a70 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryTest_Cover::StaticClass(void)

{
  if (DAT_14685e7f0 == 0) {
    FUN_14171ccd0(L"/Script/Paper2D",L"MaterialExpressionSpriteTextureSampler",&DAT_14685e7f0,
                  FUN_140447710,0x1f8,0x10000000,0,L"Engine",&LAB_140829620,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimSequence::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685e7f0;
}



// FUNCTION 140827b20 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCheckBox::GetPrivateStaticClass(void)

{
  if (DAT_14685eba8 == 0) {
    FUN_14171ccd0(L"/Script/Paper2D",L"PaperTileMapComponent",&DAT_14685eba8,
                  UKismetArrayLibrary::StaticRegisterNativesUKismetArrayLibrary,0x770,0x10000000,0,
                  L"Engine",&LAB_1408297c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1429bed90,&LAB_140447700,0);
  }
  return DAT_14685eba8;
}



// FUNCTION 140827c00 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UPaperRuntimeSettings::StaticClass(void)

{
  if (DAT_14685e9c8 == 0) {
    FUN_14171ccd0(L"/Script/Paper2D",L"PaperRuntimeSettings",&DAT_14685e9c8,FUN_140447710,0x30,
                  0x10000006,0,L"Engine",&LAB_1408296a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14685e9c8;
}



// FUNCTION 140827ca0 FUN_140827ca0 body=47 status=ok
// SIG undefined FUN_140827ca0(void)

longlong FUN_140827ca0(void)

{
  if (DAT_14685eba0 == 0) {
    FUN_141786440(&DAT_14685eba0,&PTR_GetPrivateStaticClass_144103890);
  }
  return DAT_14685eba0;
}



// FUNCTION 140827cd0 FUN_140827cd0 body=47 status=ok
// SIG undefined FUN_140827cd0(void)

longlong FUN_140827cd0(void)

{
  if (DAT_14685eb08 == 0) {
    FUN_141786a30(&DAT_14685eb08,&PTR_FUN_14626b5c0);
  }
  return DAT_14685eb08;
}



// FUNCTION 140827d00 FUN_140827d00 body=47 status=ok
// SIG undefined FUN_140827d00(void)

longlong FUN_140827d00(void)

{
  if (DAT_14685eb10 == 0) {
    FUN_141786a30(&DAT_14685eb10,&PTR_FUN_14626b760);
  }
  return DAT_14685eb10;
}



// FUNCTION 140827d30 FUN_140827d30 body=47 status=ok
// SIG undefined FUN_140827d30(void)

longlong FUN_140827d30(void)

{
  if (DAT_14685eb18 == 0) {
    FUN_141786a30(&DAT_14685eb18,&PTR_FUN_14626b820);
  }
  return DAT_14685eb18;
}



// FUNCTION 140827d60 FUN_140827d60 body=47 status=ok
// SIG undefined FUN_140827d60(void)

longlong FUN_140827d60(void)

{
  if (DAT_14685eb20 == 0) {
    FUN_141786a30(&DAT_14685eb20,&PTR_FUN_14626b910);
  }
  return DAT_14685eb20;
}



// FUNCTION 140827d90 FUN_140827d90 body=47 status=ok
// SIG undefined FUN_140827d90(void)

longlong FUN_140827d90(void)

{
  if (DAT_14685eb28 == 0) {
    FUN_141786a30(&DAT_14685eb28,&PTR_FUN_14626ba40);
  }
  return DAT_14685eb28;
}



// FUNCTION 140827dc0 FUN_140827dc0 body=47 status=ok
// SIG undefined FUN_140827dc0(void)

longlong FUN_140827dc0(void)

{
  if (DAT_14685eb30 == 0) {
    FUN_141786a30(&DAT_14685eb30,&PTR_FUN_14626bbb0);
  }
  return DAT_14685eb30;
}



// FUNCTION 140827df0 FUN_140827df0 body=47 status=ok
// SIG undefined FUN_140827df0(void)

longlong FUN_140827df0(void)

{
  if (DAT_14685eb38 == 0) {
    FUN_141786a30(&DAT_14685eb38,&PTR_FUN_14626bd20);
  }
  return DAT_14685eb38;
}



// FUNCTION 140827e20 FUN_140827e20 body=47 status=ok
// SIG undefined FUN_140827e20(void)

longlong FUN_140827e20(void)

{
  if (DAT_14685eb40 == 0) {
    FUN_141786a30(&DAT_14685eb40,&PTR_FUN_14626bda0);
  }
  return DAT_14685eb40;
}


