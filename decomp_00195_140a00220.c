// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140a00220 FUN_140a00220 body=340 status=ok
// SIG undefined FUN_140a00220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a00220(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined4 local_10;
  
  puVar4 = (undefined8 *)operator_new(0x3d0);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_14271d7c0(puVar4,param_1,0);
    *puVar4 = &PTR_FUN_1441d4de8;
    *(uint *)(puVar4 + 0x74) =
         *(uint *)(puVar4 + 0x74) ^
         ((uint)*(byte *)(param_1 + 0x700) ^ *(uint *)(puVar4 + 0x74)) & 1;
    *(undefined8 *)((longlong)puVar4 + 0x3a4) = *(undefined8 *)(param_1 + 0x710);
    *(undefined4 *)((longlong)puVar4 + 0x3ac) = *(undefined4 *)(param_1 + 0x718);
    *(undefined4 *)(puVar4 + 0x76) = *(undefined4 *)(param_1 + 0x6f0);
    *(undefined4 *)((longlong)puVar4 + 0x3b4) = *(undefined4 *)(param_1 + 0x770);
    *(undefined1 *)(puVar4 + 0x77) = *(undefined1 *)(param_1 + 0x774);
    uVar2 = *(undefined4 *)(param_1 + 0x224);
    uVar3 = *(undefined4 *)(param_1 + 0x228);
    *(undefined4 *)((longlong)puVar4 + 0x3bc) = *(undefined4 *)(param_1 + 0x220);
    *(undefined4 *)(puVar4 + 0x78) = uVar2;
    *(undefined4 *)((longlong)puVar4 + 0x3c4) = uVar3;
    *(uint *)((longlong)puVar4 + 0x1c) = *(uint *)((longlong)puVar4 + 0x1c) & 0xfffffffd;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
      if (lVar1 == 0) {
        local_18 = _DAT_1468b5d90;
        local_10 = DAT_1468b5d98;
      }
      else {
        local_18 = *(undefined8 *)(lVar1 + 0x220);
        local_10 = *(undefined4 *)(lVar1 + 0x228);
      }
      *(undefined8 *)((longlong)puVar4 + 0x3bc) = local_18;
      *(undefined4 *)((longlong)puVar4 + 0x3c4) = local_10;
    }
    return puVar4;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140a00380 FUN_140a00380 body=199 status=ok
// SIG undefined FUN_140a00380(void)

void FUN_140a00380(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [32];
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x38), lVar1 != 0)) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((bVar2) && (lVar1 = *(longlong *)(lVar1 + 0x10e0), lVar1 != 0)) &&
        (cVar3 = FUN_140adac80(lVar1), cVar3 != '\0')) && (*(char *)(lVar1 + 0x1338) == '\0')) {
      if (*(char *)(lVar1 + 0x10e6) == '\x01') {
        FUN_140accfa0(lVar1,0);
      }
      uVar5 = FUN_1404b03b0();
      uVar5 = FText::FText(local_28,uVar5);
      FUN_140ad1be0(lVar1,2,uVar5,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140a00440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6f8))(param_1);
  return;
}



// FUNCTION 140a00450 FUN_140a00450 body=222 status=ok
// SIG undefined FUN_140a00450(void)

void FUN_140a00450(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = FUN_14233f450();
  if (iVar2 == 3) {
    if ((char)param_1[0x5a] != '\0') {
      *(undefined1 *)(param_1 + 0x5a) = 0;
      (**(code **)(*param_1 + 0x5b0))(param_1);
    }
    FUN_140a21c80(param_1);
  }
  plVar1 = (longlong *)param_1[0x30];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x830))(plVar1,0,2);
    (**(code **)(*(longlong *)param_1[0x30] + 0x830))((longlong *)param_1[0x30],1,2);
    (**(code **)(*(longlong *)param_1[0x30] + 0x830))((longlong *)param_1[0x30],2,2);
    (**(code **)(*(longlong *)param_1[0x30] + 0x830))((longlong *)param_1[0x30],5,2);
    (**(code **)(*(longlong *)param_1[0x30] + 0x830))((longlong *)param_1[0x30],6,2);
                    /* WARNING: Could not recover jumptable at 0x000140a00521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0x30] + 0x830))((longlong *)param_1[0x30],7,2);
    return;
  }
  return;
}



// FUNCTION 140a00530 FUN_140a00530 body=1252 status=ok
// SIG undefined FUN_140a00530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a00530(longlong param_1,int param_2,longlong param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined1 auStack_4d8 [32];
  code *local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  longlong local_4a8 [2];
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  uint uStack_48c;
  undefined8 local_488;
  undefined8 uStack_480;
  uint local_478;
  uint uStack_474;
  uint uStack_470;
  uint uStack_46c;
  undefined8 local_468;
  longlong lStack_460;
  undefined8 local_458;
  longlong local_450;
  undefined8 local_448;
  undefined2 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined2 local_410;
  undefined4 local_40c;
  undefined2 local_408;
  undefined1 local_406;
  undefined8 local_400;
  undefined1 local_3f8;
  undefined1 local_3f0 [8];
  undefined8 local_3e8;
  undefined1 local_3e0 [8];
  undefined8 local_3d8;
  longlong *local_3d0;
  int local_3c8;
  undefined1 local_3c0 [256];
  undefined8 local_2c0;
  undefined8 local_2b8;
  longlong local_290;
  undefined8 local_288;
  undefined1 local_278 [192];
  undefined1 *local_1b8;
  uint local_1b0;
  uint local_1ac;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  if (*(longlong *)(param_1 + 0x19e8) == 0) {
    return;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x19e8) + 0x128) != '\x03') {
    return;
  }
  puVar6 = (undefined1 *)0x0;
  local_4b8 = param_4;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1900))) {
    lVar8 = *(longlong *)(param_1 + 0x18f8);
    if (*(longlong *)(param_1 + 0x18f8) == 0) {
      lVar8 = param_1 + 0x1478;
    }
    if (*(char *)(lVar8 + 0x14 + (longlong)param_2 * 0x18) != '\0') goto LAB_140a00752;
  }
  if (0 < *(int *)(param_1 + 0x19e4)) {
    local_1b8 = (undefined1 *)0x0;
    local_1b0 = 0;
    lVar8 = *(longlong *)(param_1 + 0x18f8);
    if (*(longlong *)(param_1 + 0x18f8) == 0) {
      lVar8 = param_1 + 0x1478;
    }
    local_1ac = 0;
    lVar12 = lVar8 + (longlong)*(int *)(param_1 + 0x1900) * 0x18;
    puVar10 = puVar6;
    puVar11 = puVar6;
    if (lVar8 != lVar12) {
      do {
        if ((*(char *)(lVar8 + 0x14) != '\0') && (*(char *)(lVar8 + 0x15) == '\0')) {
          local_1b0 = (int)puVar10 + 1;
          if ((int)puVar6 < (int)local_1b0) {
            FUN_140a13110(local_278,puVar10);
            puVar11 = local_1b8;
          }
          puVar6 = local_278;
          if (puVar11 != (undefined1 *)0x0) {
            puVar6 = puVar11;
          }
          *(undefined4 *)(puVar6 + (longlong)(int)puVar10 * 4) = *(undefined4 *)(lVar8 + 8);
          puVar6 = (undefined1 *)(ulonglong)local_1ac;
          puVar10 = (undefined1 *)(ulonglong)local_1b0;
          puVar11 = local_1b8;
        }
        param_4 = local_4b8;
        lVar8 = lVar8 + 0x18;
      } while (lVar8 != lVar12);
      iVar9 = (int)puVar10;
      if (0 < iVar9) {
        iVar1 = rand();
        iVar2 = (int)((float)iVar1 * 3.051851e-05 * (float)iVar9);
        iVar1 = iVar9 + -1;
        if (iVar2 <= iVar9 + -1) {
          iVar1 = iVar2;
        }
        puVar6 = local_278;
        if (local_1b8 != (undefined1 *)0x0) {
          puVar6 = local_1b8;
        }
        param_2 = *(int *)(puVar6 + (longlong)iVar1 * 4);
        puVar11 = local_1b8;
      }
      if (puVar11 != (undefined1 *)0x0) {
        FMemory::Free(puVar11);
      }
    }
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x1900) <= param_2)) {
    iVar9 = *(int *)(param_1 + 0x1900);
    if (iVar9 < 1) {
      return;
    }
    iVar1 = rand();
    iVar1 = (int)((float)iVar1 * 3.051851e-05 * (float)iVar9);
    param_2 = iVar9 + -1;
    if (iVar1 <= iVar9 + -1) {
      param_2 = iVar1;
    }
  }
LAB_140a00752:
  lVar8 = *(longlong *)(param_1 + 0x18f8);
  if (*(longlong *)(param_1 + 0x18f8) == 0) {
    lVar8 = param_1 + 0x1478;
  }
  *(undefined1 *)(lVar8 + 0x15 + (longlong)param_2 * 0x18) = 1;
  local_4a8[0] = 0;
  local_478 = _DAT_1468657f0 & _DAT_146865800;
  uStack_474 = uRam00000001468657f4 & uRam0000000146865804;
  uStack_470 = uRam00000001468657f8 & uRam0000000146865808;
  uStack_46c = uRam00000001468657fc & uRam000000014686580c;
  local_498 = 0;
  uStack_494 = 0;
  uStack_490 = 0;
  uStack_48c = uRam00000001468657fc;
  local_468 = 0;
  lStack_460 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_458 = 0;
  local_450 = 0;
  local_448 = 0;
  local_440 = 0;
  local_428 = 0;
  local_420 = 0;
  local_418 = 1;
  local_410 = 0;
  local_40c = 0;
  local_408 = 0;
  local_406 = 1;
  local_400 = 0;
  local_3f8 = 0;
  FWeakObjectPtr::operator=(local_3f0,0);
  local_3e8 = 0;
  FWeakObjectPtr::operator=(local_3e0,0);
  local_3d8 = 0;
  local_3d0 = (longlong *)0x0;
  local_3c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_290 = 0;
  local_288 = 0;
  lVar12 = 0;
  if (param_3 != 0) {
    lVar3 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    lVar7 = param_3;
    do {
      lVar12 = param_3;
      if (lVar7 == lVar3) break;
      lVar7 = *(longlong *)(lVar7 + 0x30);
      lVar12 = 0;
    } while (lVar7 != 0);
  }
  local_438 = *(undefined8 *)(param_1 + 0x118);
  local_458 = *(undefined8 *)(lVar8 + (longlong)param_2 * 0x18);
  local_4b8 = FUN_140a00a20;
  local_440 = 0x101;
  local_410 = CONCAT11(1,(undefined1)local_410);
  local_3f8 = 1;
  uStack_4b0 = 0;
  local_4a8[0] = lVar12;
  lStack_460 = param_1;
  uStack_430 = local_438;
  plVar4 = (longlong *)FMemory::Realloc(0,0x40);
  if (plVar4 == (longlong *)0x0) {
    if ((local_3c8 != 0) && (local_3d0 != (longlong *)0x0)) {
      (**(code **)(*local_3d0 + 0x28))(local_3d0,0);
      if (local_3d0 != (longlong *)0x0) {
        local_3d0 = (longlong *)FMemory::Realloc(local_3d0,0,0);
      }
      local_3c8 = 0;
    }
  }
  else {
    *plVar4 = (longlong)&PTR_FUN_1441db510;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)local_4b8;
    plVar4[3] = CONCAT44(uStack_4ac,uStack_4b0);
    *(int *)(plVar4 + 4) = param_2;
    plVar4[5] = (longlong)param_4;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar4[6] = lVar8;
    *plVar4 = (longlong)&PTR_FUN_1441db558;
    TBaseUObjectMethodDelegateInstance<0,UVisualComponent,TTypeWrapper<void>___cdecl(void),FName,FName>
    ::CreateCopy(plVar4,&local_3d0);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar8 = FMemory::Realloc(plVar4,0,0);
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x120);
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0(param_1);
  }
  uVar5 = FUN_1409f3990(local_278,local_4a8);
  FUN_1424ad6e0(lVar8,uVar5);
  if (local_290 != 0) {
    FMemory::Free();
  }
  FUN_1409f5970(local_3c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3d0);
  if (local_450 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a00a20 FUN_140a00a20 body=248 status=ok
// SIG undefined FUN_140a00a20(void)

void FUN_140a00a20(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  lVar4 = plVar1[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      local_10 = 0x3f800000;
      local_20 = 0x3f800000;
      local_28 = 0x3f8000003f800000;
      goto LAB_140a00a8a;
    }
  }
  puVar3 = (undefined8 *)FUN_14222dc90(lVar4,local_18);
  local_28 = *puVar3;
  local_20 = *(undefined4 *)(puVar3 + 1);
LAB_140a00a8a:
  AActor::SetActorScale3D(param_2,&local_28);
  lVar4 = UMovieScene3DTransformSection::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
      != lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (*(longlong *)(param_2 + 0x700) != 0) {
      *(undefined8 *)(*(longlong *)(param_2 + 0x700) + 0x2e0) = param_6;
    }
    FUN_140a11950(param_2);
  }
  FUN_140a1d930(param_1,param_5,0,1);
  return;
}



// FUNCTION 140a00b20 FUN_140a00b20 body=1034 status=ok
// SIG undefined FUN_140a00b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a00b20(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_a8;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_88;
  undefined4 local_80;
  
  if (param_2 == 0) {
    return;
  }
  lVar10 = *(longlong *)(param_2 + 0x168);
  if (lVar10 == 0) {
    local_80 = DAT_1468b5d98;
    pfVar8 = (float *)&local_88;
    local_88 = _DAT_1468b5d90;
  }
  else {
    pfVar8 = &local_98;
    local_98 = *(float *)(lVar10 + 0x220);
    local_90 = *(float *)(lVar10 + 0x228);
    fStack_94 = *(float *)(lVar10 + 0x224);
  }
  local_a8 = *(undefined8 *)pfVar8;
  iVar13 = -1;
  plVar3 = *(longlong **)(param_2 + 0x10);
  local_a0 = pfVar8[2];
  fVar17 = 3.4028235e+38;
  lVar10 = plVar3[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar10 = plVar3[0x1f];
    if (lVar10 != 0) goto LAB_140a00bf5;
    local_90 = 1.0;
    local_80 = 0x3f800000;
    local_88 = 0x3f8000003f800000;
  }
  else {
LAB_140a00bf5:
    puVar9 = (undefined8 *)FUN_14222dc90(lVar10,&local_98);
    local_88 = *puVar9;
    local_80 = *(undefined4 *)(puVar9 + 1);
  }
  AActor::SetActorScale3D(param_2,&local_88);
  fVar7 = local_a0;
  puVar9 = (undefined8 *)(param_1 + 0x1478);
  fVar6 = local_a8._4_4_;
  fVar5 = (float)local_a8;
  puVar12 = *(undefined8 **)(param_1 + 0x18f8);
  if (*(undefined8 **)(param_1 + 0x18f8) == (undefined8 *)0x0) {
    puVar12 = puVar9;
  }
  puVar1 = puVar12 + (longlong)*(int *)(param_1 + 0x1900) * 3;
  if (puVar12 != puVar1) {
    do {
      if (*(char *)((longlong)puVar12 + 0x14) != '\0') {
        FUN_1423acae0(param_1,&local_98,*puVar12,0);
        fVar15 = local_98 - fVar5;
        fVar16 = fStack_94 - fVar6;
        fVar14 = local_90 - fVar7;
        fVar14 = fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14;
        if ((fVar14 < fVar17) && (iVar13 = *(int *)(puVar12 + 1), fVar17 = fVar14, fVar14 <= 25.0))
        break;
      }
      puVar12 = puVar12 + 3;
    } while (puVar12 != puVar1);
    if (fVar17 <= 25.0) goto LAB_140a00dd8;
  }
  lVar10 = (longlong)*(int *)(param_1 + 0x19d8);
  if (-1 < *(int *)(param_1 + 0x19d8)) {
    iVar2 = *(int *)(param_1 + 0x19d0);
    for (; lVar10 < iVar2; lVar10 = lVar10 + 1) {
      lVar11 = *(longlong *)(param_1 + 0x19c8);
      if (*(longlong *)(param_1 + 0x19c8) == 0) {
        lVar11 = param_1 + 0x1908;
      }
      puVar12 = *(undefined8 **)(param_1 + 0x18f8);
      if (*(undefined8 **)(param_1 + 0x18f8) == (undefined8 *)0x0) {
        puVar12 = puVar9;
      }
      lVar11 = (longlong)*(int *)(lVar11 + lVar10 * 4);
      FUN_1423acae0(param_1,&local_a8,puVar12[lVar11 * 3],0);
      fVar15 = (float)local_a8 - fVar5;
      fVar16 = local_a8._4_4_ - fVar6;
      fVar14 = local_a0 - fVar7;
      fVar14 = fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14;
      if ((fVar14 < fVar17) &&
         (iVar13 = *(int *)(puVar12 + lVar11 * 3 + 1), fVar17 = fVar14, fVar14 <= 25.0)) break;
    }
  }
LAB_140a00dd8:
  if ((-1 < iVar13) && (iVar13 < *(int *)(param_1 + 0x1900))) {
    puVar12 = *(undefined8 **)(param_1 + 0x18f8);
    if (*(undefined8 **)(param_1 + 0x18f8) == (undefined8 *)0x0) {
      puVar12 = puVar9;
    }
    lVar10 = (longlong)iVar13;
    iVar13 = *(int *)((longlong)puVar12 + lVar10 * 0x18 + 0xc);
    if ((-1 < iVar13) && (iVar13 < *(int *)(param_1 + 0xf78))) {
      lVar11 = (longlong)iVar13 * 0xe8 + *(longlong *)(param_1 + 0xf70);
      FAlphaBlend::SetBlendTime(lVar11 + 0x38,0);
      local_88 = 0;
      local_80 = 0;
      FUN_1422b4680(lVar11,&local_88);
      *(undefined8 *)(lVar11 + 0xb8) = *(undefined8 *)(lVar11 + 0xdc);
      *(undefined8 *)(lVar11 + 0x94) = *(undefined8 *)(lVar11 + 0xdc);
      *(undefined4 *)(lVar11 + 0xc0) = *(undefined4 *)(lVar11 + 0xe4);
      *(undefined4 *)(lVar11 + 0x9c) = *(undefined4 *)(lVar11 + 0xe4);
    }
    iVar13 = *(int *)(param_1 + 0x19e4);
    if (*(char *)((longlong)puVar12 + lVar10 * 0x18 + 0x14) != '\0') {
      *(int *)(param_1 + 0x19e4) = iVar13 + -1;
    }
    *(undefined2 *)((longlong)puVar12 + lVar10 * 0x18 + 0x14) = 0;
    *(undefined4 *)(puVar12 + lVar10 * 3 + 2) = 0;
    iVar2 = *(int *)(param_1 + 0x141c);
    bVar4 = *(int *)(param_1 + 0x19e4) < iVar2;
    if (((iVar13 < iVar2 != bVar4) && (*(longlong **)(param_1 + 0x19e8) != (longlong *)0x0)) &&
       (lVar10 = (**(code **)(**(longlong **)(param_1 + 0x19e8) + 0xa48))(), lVar10 != 0)) {
      FUN_142cd0450(param_1 + 0x1428,lVar10,bVar4);
    }
  }
  return;
}



// FUNCTION 140a00f30 FUN_140a00f30 body=16 status=ok
// SIG undefined FUN_140a00f30(void)

void FUN_140a00f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140a00530(param_1,0xffffffff,param_2,param_3);
  return;
}



// FUNCTION 140a00f40 FUN_140a00f40 body=580 status=ok
// SIG undefined FUN_140a00f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a00f40(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 auStack_138 [32];
  undefined1 local_118 [192];
  undefined1 *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar6 = (ulonglong)param_2;
  if ((*(longlong *)(param_1 + 0x19e8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x19e8) + 0x128) == '\x03')) {
    puVar5 = (undefined1 *)0x0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    lVar9 = *(longlong *)(param_1 + 0x18f8);
    if (*(longlong *)(param_1 + 0x18f8) == 0) {
      lVar9 = param_1 + 0x1478;
    }
    local_4c = 0;
    lVar1 = lVar9 + (longlong)*(int *)(param_1 + 0x1900) * 0x18;
    puVar7 = puVar5;
    puVar10 = puVar5;
    for (; lVar9 != lVar1; lVar9 = lVar9 + 0x18) {
      if ((*(char *)(lVar9 + 0x14) != '\0') && (*(char *)(lVar9 + 0x15) == '\0')) {
        local_50 = (int)puVar7 + 1;
        if ((int)puVar5 < (int)local_50) {
          FUN_140a13110(local_118,puVar7);
          puVar10 = local_58;
        }
        puVar5 = local_118;
        if (puVar10 != (undefined1 *)0x0) {
          puVar5 = puVar10;
        }
        *(undefined4 *)(puVar5 + (longlong)(int)puVar7 * 4) = *(undefined4 *)(lVar9 + 8);
        puVar5 = (undefined1 *)(ulonglong)local_4c;
        puVar7 = (undefined1 *)(ulonglong)local_50;
        puVar10 = local_58;
      }
    }
    if (0 < (int)param_2) {
      while( true ) {
        uVar8 = 0xffffffff;
        iVar4 = (int)puVar7;
        if (0 < iVar4) {
          iVar2 = rand();
          iVar3 = (int)((float)iVar2 * 3.051851e-05 * (float)iVar4);
          iVar2 = iVar4 + -1;
          if (iVar3 <= iVar4 + -1) {
            iVar2 = iVar3;
          }
          puVar5 = local_118;
          if (local_58 != (undefined1 *)0x0) {
            puVar5 = local_58;
          }
          uVar8 = *(undefined4 *)(puVar5 + (longlong)iVar2 * 4);
          iVar4 = (local_50 - iVar2) + -1;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (puVar5 + (longlong)iVar2 * 4,puVar5 + (longlong)(int)(local_50 - iVar4) * 4,
                       (longlong)iVar4 << 2);
          }
          local_50 = local_50 - 1;
        }
        FUN_140a00530(param_1,uVar8,param_3,param_4);
        uVar6 = uVar6 - 1;
        puVar10 = local_58;
        if (uVar6 == 0) break;
        puVar7 = (undefined1 *)(ulonglong)local_50;
      }
    }
    if (puVar10 != (undefined1 *)0x0) {
      FMemory::Free(puVar10);
    }
  }
  return;
}



// FUNCTION 140a01190 FUN_140a01190 body=123 status=ok
// SIG undefined FUN_140a01190(void)

void FUN_140a01190(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    cVar5 = FWeakObjectPtr::IsValid(lVar3 + 0x18);
    if (cVar5 != '\0') {
      uVar6 = FWeakObjectPtr::Get(lVar3 + 0x18);
      FUN_140a1e830(uVar6,*(undefined8 *)(lVar3 + 0x10));
    }
    plVar4 = *(longlong **)(lVar3 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    FMemory::operator_delete(lVar3,0x20);
    return;
  }
  return;
}



// FUNCTION 140a01210 FUN_140a01210 body=93 status=ok
// SIG undefined FUN_140a01210(void)

undefined8 FUN_140a01210(longlong param_1)

{
  ulonglong local_res8 [4];
  
  local_res8[0] = *(ulonglong *)(param_1 + 0x7b8);
  if ((local_res8[0] != 0) && (*(char *)(param_1 + 0x790) != '\0')) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x740,local_res8);
    FUN_142227350(*(undefined8 *)(param_1 + 0x7b8),0,1);
    FUN_140a1a460(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 140a01270 FUN_140a01270 body=269 status=ok
// SIG undefined FUN_140a01270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a01270(longlong param_1,char param_2,undefined1 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [32];
  
  plVar1 = *(longlong **)(param_1 + 0x378);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x6f8))(plVar1);
    }
    FUN_140a0e280(param_1,param_3);
    if (param_2 != '\0') {
      puVar4 = (undefined8 *)FUN_142d979c0(local_38);
      local_58 = *puVar4;
      uStack_50 = puVar4[1];
      local_48 = *(undefined4 *)(puVar4 + 2);
      uStack_44 = *(undefined4 *)((longlong)puVar4 + 0x14);
      uStack_40 = *(undefined4 *)(puVar4 + 3);
      uStack_3c = *(undefined4 *)((longlong)puVar4 + 0x1c);
      local_60 = DAT_1468b5d98;
      local_68 = _DAT_1468b5d90;
      FUN_142d6e9e0(*(undefined8 *)(param_1 + 0x118),param_4,*(undefined8 *)(param_1 + 0x358),
                    &local_68,0,&local_58);
    }
  }
  return;
}



// FUNCTION 140a01380 FUN_140a01380 body=69 status=ok
// SIG undefined FUN_140a01380(void)

undefined1 FUN_140a01380(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x7b8) != 0) && (*(char *)(param_1 + 0x790) != '\0')) {
    FUN_1409fde20();
    FUN_1412e8490(*(undefined8 *)(param_1 + 0x7b8));
    FUN_140a1a460(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 140a013d0 GetShowWaypointMarkers body=8 status=ok
// SIG undefined GetShowWaypointMarkers(void)

undefined1 UIndianaGameUserSettings::GetShowWaypointMarkers(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x790);
}



// FUNCTION 140a013e0 FUN_140a013e0 body=61 status=ok
// SIG undefined FUN_140a013e0(void)

undefined1 FUN_140a013e0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x7b8) != 0) && (*(char *)(param_1 + 0x790) != '\0')) {
    FUN_1409fde20();
    FUN_1412e84f0(*(undefined8 *)(param_1 + 0x7b8));
    return 1;
  }
  return 0;
}



// FUNCTION 140a01420 FUN_140a01420 body=198 status=ok
// SIG undefined FUN_140a01420(void)

void FUN_140a01420(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == 0) goto LAB_140a014d1;
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar3 = UScrollBox::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    if (lVar4 != 0) {
      FUN_142d2b060(lVar4,param_2);
    }
  }
  lVar4 = FUN_142d19640(param_2);
  if (lVar4 == 0) {
LAB_140a014ba:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140a014ba;
  }
  FUN_140b7c2d0(plVar1,lVar4);
LAB_140a014d1:
  FUN_140a199b0(param_1,param_2);
  return;
}



// FUNCTION 140a014f0 FUN_140a014f0 body=85 status=ok
// SIG undefined FUN_140a014f0(void)

undefined1 FUN_140a014f0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h",
             0x36b,L"Pure virtual not implemented (%s)",L"ANavigationData::DoesNodeContainLocation")
  ;
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h",
             0x36b,L"Pure virtual not implemented (%s)",L"ANavigationData::DoesNodeContainLocation")
  ;
  return 0;
}



// FUNCTION 140a01550 FUN_140a01550 body=871 status=ok
// SIG undefined FUN_140a01550(void)

void FUN_140a01550(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4 [4];
  uint local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 *local_90;
  int local_88;
  undefined1 local_80 [64];
  
  iVar4 = *(int *)(param_1 + 0x1900);
  lVar1 = param_1 + 0x1478;
  uVar10 = 0;
  if (iVar4 < 0x30) {
    *(undefined4 *)(param_1 + 0x1900) = 0x30;
    iVar8 = 0x30 - iVar4;
    if (*(int *)(param_1 + 0x1904) < 0x30) {
      FUN_140a133f0(lVar1,iVar4);
    }
    lVar6 = *(longlong *)(param_1 + 0x18f8);
    if (*(longlong *)(param_1 + 0x18f8) == 0) {
      lVar6 = lVar1;
    }
    puVar3 = (undefined8 *)(lVar6 + (longlong)iVar4 * 0x18);
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 3;
    }
  }
  else if ((0x30 < iVar4) && (iVar4 + -0x30 != 0)) {
    *(int *)(param_1 + 0x1900) = iVar4 - (iVar4 + -0x30);
    FUN_140a13800(lVar1);
  }
  plVar2 = (longlong *)(param_1 + 0xf70);
  if (*(int *)(param_1 + 0xf7c) < *(int *)(param_1 + 0xf78) + 0x30) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<232,8>_>,FDefaultAllocator>::ResizeTo
              (plVar2);
  }
  FAlphaBlend::FAlphaBlend(local_80,0);
  FAlphaBlend::SetBlendOption(local_80,0);
  uVar11 = uVar10;
  do {
    iVar4 = (int)uVar10;
    local_b0 = iVar4 + 1;
    FString::PrintfImpl(&local_90,PTR_u_Drone_d_146294ed8,local_b0);
    puVar7 = &DAT_143f3eda8;
    if (local_88 != 0) {
      puVar7 = local_90;
    }
    FName::FName(&local_a8,puVar7,1);
    if (local_90 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar8 = *(int *)(param_1 + 0xf78);
    local_res18[0] = 0;
    local_res20[0] = 0;
    local_b8 = 0;
    local_b7 = 1;
    local_b6 = 1;
    local_b5 = 0;
    local_b4[0] = 0;
    *(int *)(param_1 + 0xf78) = iVar8 + 1;
    if (*(int *)(param_1 + 0xf7c) < iVar8 + 1) {
      FUN_140a131a0(plVar2,iVar8);
    }
    local_res8[0] = 3;
    local_res10[0] = 1;
    FUN_1422a1a10(*plVar2 + (longlong)iVar8 * 0xe8,&local_a8,&local_a8,&DAT_1468b5d90,&DAT_1468b5da0
                  ,&DAT_1468b5d90,local_80,local_b4,&local_b5,&local_b6,&local_b7,&local_b8,
                  local_res20,local_res18,local_res10,local_res8);
    FUN_1422a60f0();
    lVar6 = *(longlong *)(param_1 + 0x18f8);
    if (*(longlong *)(param_1 + 0x18f8) == 0) {
      lVar6 = lVar1;
    }
    *(undefined8 *)(lVar6 + uVar11) = local_a8;
    *(int *)(lVar6 + 8 + uVar11) = iVar4;
    *(int *)(lVar6 + 0xc + uVar11) = iVar8;
    if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x1900))) {
      lVar6 = *(longlong *)(param_1 + 0x18f8);
      if (*(longlong *)(param_1 + 0x18f8) == 0) {
        lVar6 = lVar1;
      }
      iVar4 = *(int *)(lVar6 + 0xc + uVar11);
      if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0xf78))) {
        lVar9 = (longlong)iVar4 * 0xe8 + *plVar2;
        FAlphaBlend::SetBlendTime(lVar9 + 0x38,0);
        local_a0 = 0;
        local_98 = 0;
        FUN_1422b4680(lVar9,&local_a0);
        *(undefined8 *)(lVar9 + 0xb8) = *(undefined8 *)(lVar9 + 0xdc);
        *(undefined8 *)(lVar9 + 0x94) = *(undefined8 *)(lVar9 + 0xdc);
        *(undefined4 *)(lVar9 + 0xc0) = *(undefined4 *)(lVar9 + 0xe4);
        *(undefined4 *)(lVar9 + 0x9c) = *(undefined4 *)(lVar9 + 0xe4);
      }
      iVar4 = *(int *)(param_1 + 0x19e4);
      if (*(char *)(lVar6 + 0x14 + uVar11) != '\0') {
        *(int *)(param_1 + 0x19e4) = iVar4 + -1;
      }
      *(undefined2 *)(lVar6 + 0x14 + uVar11) = 0;
      *(undefined4 *)(lVar6 + 0x10 + uVar11) = 0;
      iVar8 = *(int *)(param_1 + 0x141c);
      bVar5 = *(int *)(param_1 + 0x19e4) < iVar8;
      if (((iVar4 < iVar8 != bVar5) && (*(longlong **)(param_1 + 0x19e8) != (longlong *)0x0)) &&
         (lVar6 = (**(code **)(**(longlong **)(param_1 + 0x19e8) + 0xa48))(), lVar6 != 0)) {
        FUN_142cd0450(param_1 + 0x1428,lVar6,bVar5);
      }
    }
    uVar10 = (ulonglong)local_b0;
    uVar11 = uVar11 + 0x18;
  } while ((int)local_b0 < 0x30);
  FUN_142397540(param_1,0,1);
  return;
}



// FUNCTION 140a018c0 FUN_140a018c0 body=319 status=ok
// SIG undefined FUN_140a018c0(void)

void FUN_140a018c0(longlong param_1,undefined1 param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FUN_1422279d0(*(longlong *)(param_1 + 0x378),&DAT_146532190);
    if (*(char *)(param_1 + 0x318) == '\0') {
      if (param_3 != (longlong *)0x0) {
        uVar3 = (**(code **)(*param_3 + 0x688))(param_3);
        *(undefined8 *)(*(longlong *)(param_1 + 0x378) + 0x150) = uVar3;
      }
      if (*(char *)(param_1 + 0x361) != '\0') {
        FUN_14223c460(*(undefined8 *)(param_1 + 0x378),1);
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x378) + 0x168);
      if (plVar1 != (longlong *)0x0) {
        lVar4 = FUN_1429f11d0();
        lVar5 = plVar1[2];
        if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          (**(code **)(*plVar1 + 0x5b8))(plVar1,CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
          if (*(char *)(param_1 + 0x370) != '\0') {
            (**(code **)(*plVar1 + 0x640))(plVar1,*(undefined8 *)(param_1 + 0x368));
          }
        }
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x378) + 0x6d0))(*(longlong **)(param_1 + 0x378),0);
    }
    if ((*(longlong *)(param_1 + 0x390) != 0) && (*(longlong *)(param_1 + 0x398) != 0)) {
      lVar5 = *(longlong *)(param_1 + 0x398);
      if (*(longlong *)(param_1 + 0x390) == 0) {
        lVar5 = 0;
      }
      FUN_140447710(lVar5);
    }
    FUN_140a0e280(param_1,param_2);
  }
  return;
}



// FUNCTION 140a01a00 FUN_140a01a00 body=2759 status=ok
// SIG undefined FUN_140a01a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a01a00(code *param_1)

{
  code **ppcVar1;
  code cVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  code *pcVar15;
  code **ppcVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined8 uVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auStack_518 [32];
  undefined4 local_4f8;
  char local_4e8;
  code *local_4e0;
  undefined8 local_4d8;
  int local_4d0;
  undefined4 local_4cc;
  longlong local_4c8;
  undefined8 local_4c0;
  code *local_4b8;
  code ***pppcStack_4b0;
  longlong local_4a8;
  code *local_4a0;
  code *local_498;
  code ***pppcStack_490;
  code **local_488;
  code ***pppcStack_480;
  code *local_478;
  code ***pppcStack_470;
  code **local_468;
  int iStack_460;
  undefined4 uStack_45c;
  longlong local_458;
  longlong local_448;
  code *local_440;
  code *local_438;
  code ***pppcStack_430;
  code **local_428;
  int local_420;
  longlong local_418;
  char local_410;
  undefined1 local_408 [960];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_518;
  lVar13 = *(longlong *)(param_1 + 0x118);
  if (lVar13 == 0) {
    return;
  }
  local_448 = lVar13;
  local_440 = param_1;
  iVar6 = FUN_142235230(lVar13);
  if (iVar6 == 3) {
    return;
  }
  lVar10 = *(longlong *)(param_1 + 0x120);
  if (lVar10 == 0) {
    lVar10 = FUN_1423407b0(param_1);
  }
  iVar6 = 0;
  if (lVar10 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x120);
    if (lVar10 == 0) {
      lVar10 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar10 + 400) == 0) {
      uVar19 = *(undefined8 *)(lVar10 + 0x3f8);
    }
    else {
      uVar19 = *(undefined8 *)(*(longlong *)(lVar10 + 400) + 0x90);
    }
    FUN_142880530(uVar19,param_1 + 0x318);
    *(longlong *)(param_1 + 0x318) = 0;
  }
  if (param_1[0x231] == (code)0x1) {
    iVar7 = (**(code **)(*(longlong *)param_1 + 0x408))();
  }
  else {
    iVar7 = (**(code **)(*(longlong *)param_1 + 0x400))(param_1);
  }
  fVar21 = (float)FUN_142c98860(param_1 + 0x238,*(longlong *)(param_1 + 0x118));
  local_4c8 = 0;
  local_4c0 = 0;
  iVar9 = (int)(fVar21 + (float)iVar7);
  if ((int)(fVar21 + (float)iVar7) < 2) {
    iVar9 = 1;
  }
  local_4d0 = iVar9;
  if (((byte)param_1[0x311] & 1) == 0) {
    iVar8 = FUN_140c13370(param_1);
    iVar7 = *(int *)(param_1 + 0x1f0);
    if (iVar8 + -1 < 0) {
LAB_140a01b69:
      if (iVar7 <= iVar6) goto LAB_140a01b71;
      bVar3 = true;
    }
    else {
      iVar6 = iVar7;
      if (iVar8 + -1 < iVar7 + -1) {
        iVar6 = iVar8;
      }
      iVar6 = iVar6 + -1;
      if (-1 < iVar6) goto LAB_140a01b69;
LAB_140a01b71:
      bVar3 = false;
    }
    if (((!bVar3) ||
        (pbVar11 = (byte *)((longlong)iVar6 * 0xb0 + *(longlong *)(param_1 + 0x1e8)),
        pbVar11 == (byte *)0x0)) || (pcVar15 = (code *)(pbVar11 + 0x28), (*pbVar11 & 4) == 0)) {
      pcVar15 = param_1 + 0x270;
    }
    FUN_142ffa740(pcVar15,&local_4c8);
    lVar10 = FUN_14178ca30(param_1);
    if (lVar10 != 0) {
      lVar12 = ALevelScriptActor::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_142ffa740(lVar10 + 0x290,&local_4c8);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x308) == 0) goto LAB_140a01d48;
  lVar10 = *(longlong *)(param_1 + 0x120);
  if (lVar10 == 0) {
    lVar10 = FUN_1423407b0(param_1);
  }
  lVar10 = FUN_1407c74b0(lVar10);
  if (lVar10 != 0) {
    FUN_1407c7790(lVar10,&local_4cc,*(longlong *)(param_1 + 0x118));
    cVar5 = FUN_1407ce070(&local_4cc);
    if ((cVar5 != '\0') && (lVar10 = FUN_1407cb5f0(lVar10,&local_4cc), lVar10 != 0)) {
      cVar2 = param_1[0x310];
      if (cVar2 == (code)0x1) {
        iVar6 = FUN_1407c9e10(lVar10,0,0);
        if (1 < iVar6) goto LAB_140a01d48;
      }
      else if (cVar2 == (code)0x2) {
        cVar5 = FUN_1407c14c0(lVar10,0,0);
        if (cVar5 == '\0') goto LAB_140a01d48;
      }
      else if (cVar2 == (code)0x3) {
        lVar12 = FUN_1414763d0();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (*(char *)(lVar10 + 0x9c0) != '\0') goto LAB_140a01d48;
          iVar7 = rand();
          cVar5 = FUN_1407c14c0(lVar10,0,0);
          iVar6 = 9;
          if ((int)((float)iVar7 * 0.0003051851) < 10) {
            iVar6 = (int)((float)iVar7 * 0.0003051851);
          }
          if ((iVar6 < 5) && (cVar5 == '\0')) goto LAB_140a01d48;
          *(undefined1 *)(lVar10 + 0x9c0) = 1;
        }
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x308) + 0x280))
            (*(longlong **)(param_1 + 0x308),&local_4c8);
LAB_140a01d48:
  cVar5 = FUN_140b81c70(param_1);
  if (cVar5 == '\0') {
    local_468 = &local_4e0;
    local_4e0 = (code *)0x0;
    pppcStack_4b0 = &local_468;
    local_4d8 = 0;
    local_4b8 = FUN_1409fc860;
    local_498 = FUN_1409fc860;
    pppcStack_490 = pppcStack_4b0;
    iStack_460 = iVar9;
    local_458 = lVar13;
    FUN_142ff36a0(&local_4c8,lVar13,&local_498);
    lVar13 = *(longlong *)(param_1 + 0x120);
    if (lVar13 == 0) {
      lVar13 = FUN_1423407b0(param_1);
    }
    lVar13 = FUN_140b5b830(lVar13);
    if (lVar13 != 0) {
      plVar14 = (longlong *)FUN_140b58fc0(lVar13);
      *(undefined1 *)(plVar14 + 10) = 0;
      *plVar14 = *(longlong *)(param_1 + 0x118);
      FUN_1409f6900(plVar14 + 1,&local_4e0);
      plVar14[9] = *(longlong *)(param_1 + 0x2b0);
      plVar14[0xe] = *(longlong *)(param_1 + 0x2b8);
      *(undefined2 *)(plVar14 + 6) = 0x101;
      *(undefined4 *)((longlong)plVar14 + 0x34) = *(undefined4 *)(param_1 + 0x2d8);
      FUN_1409f6880(plVar14 + 0xb,param_1 + 0x2e0);
      pppcStack_4b0 = (code ***)((ulonglong)pppcStack_4b0 & 0xffffffff00000000);
      local_4b8 = FUN_1409f9370;
      local_498 = FUN_1409f9370;
      pppcStack_490 = pppcStack_4b0;
      FUN_14058c4b0(plVar14 + 0xf,param_1,&local_498);
      FUN_140b5a8a0(lVar13,plVar14);
    }
    FUN_1409f5880(&local_4e0);
  }
  else {
    pcVar15 = (code *)FUN_140b823d0(param_1);
    local_4a0 = pcVar15;
    local_4cc = FUN_140b81ea0(pcVar15,iVar9);
    lVar13 = *(longlong *)(param_1 + 0x120);
    if ((lVar13 != 0) || (lVar13 = FUN_1423407b0(param_1), lVar13 != 0)) {
      lVar10 = FUN_140b5b830(lVar13);
      local_4e0 = (code *)0x0;
      local_4d8 = 0;
      local_4a8 = lVar10;
      UWorld::GetPlayerControllerIterator(lVar13,&local_4b8);
      iVar6 = (int)pppcStack_4b0;
      while( true ) {
        if ((iVar6 < 0) || (*(int *)(local_4b8 + 8) <= iVar6)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) break;
        ppcVar16 = (code **)FWeakObjectPtr::Get(*(longlong *)local_4b8 + (longlong)iVar6 * 8);
        local_488 = ppcVar16;
        if (ppcVar16 != (code **)0x0) {
          lVar13 = FUN_14145f370();
          if ((*(int *)(*(longlong *)((longlong)ppcVar16 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90))
             || (*(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)ppcVar16 + 0x10) + 0x88) +
                  (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            cVar5 = '\0';
            local_4e8 = '\0';
            if (ppcVar16 != (code **)pcVar15) {
              iVar9 = local_4d0;
              if (*(longlong *)((longlong)ppcVar16 + 0x848) == 0) goto LAB_140a023ee;
              iVar9 = FUN_140b81930(ppcVar16,local_4cc,local_4d0);
              cVar5 = '\x01';
              local_4e8 = '\x01';
            }
            if ((longlong)local_4d8 < 0) {
              iVar6 = local_4d8._4_4_;
              if ((int)local_4d8 != 0) {
                pcVar15 = local_4e0 + 0x38;
                iVar6 = (int)local_4d8;
                do {
                  if (*(longlong *)(pcVar15 + 0x10) != 0) {
                    FMemory::Free();
                  }
                  if (*(longlong *)pcVar15 != 0) {
                    FMemory::Free();
                  }
                  TArray<FNamedInterfaceDef,FDefaultAllocator>::
                  ~TArray<FNamedInterfaceDef,FDefaultAllocator>(pcVar15 + -0x18);
                  pcVar15 = pcVar15 + 0x60;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
                iVar6 = local_4d8._4_4_;
              }
              local_4d8 = local_4d8 & 0xffffffff00000000;
              if (iVar6 != 0) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>
                ::ResizeTo(&local_4e0,0);
              }
            }
            else {
              if ((int)local_4d8 != 0) {
                pcVar15 = local_4e0 + 0x38;
                iVar6 = (int)local_4d8;
                do {
                  if (*(longlong *)(pcVar15 + 0x10) != 0) {
                    FMemory::Free();
                  }
                  if (*(longlong *)pcVar15 != 0) {
                    FMemory::Free();
                  }
                  TArray<FNamedInterfaceDef,FDefaultAllocator>::
                  ~TArray<FNamedInterfaceDef,FDefaultAllocator>(pcVar15 + -0x18);
                  pcVar15 = pcVar15 + 0x60;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
              }
              local_4d8 = local_4d8 & 0xffffffff00000000;
            }
            pppcStack_470 = &local_428;
            local_428 = &local_4e0;
            local_438 = FUN_1409fc830;
            local_478 = FUN_1409fc830;
            local_418 = local_448;
            pppcStack_430 = pppcStack_470;
            local_420 = iVar9;
            local_410 = cVar5;
            FUN_142ff36a0(&local_4c8,local_448,&local_478);
            pcVar15 = local_4a0;
            iVar9 = local_4d0;
            if (lVar10 != 0) {
              local_478 = param_1;
              if (cVar5 == '\0') {
                iVar6 = (int)local_4d8 + -1;
                local_48 = (undefined1 *)0x0;
                local_40._0_4_ = 0;
                local_40 = 0;
                if (-1 < iVar6) {
                  lVar10 = (longlong)iVar6 * 0x60;
                  lVar12 = (longlong)(int)local_4d8 * 0x60;
                  lVar13 = lVar10;
                  do {
                    pcVar15 = local_4e0 + lVar13;
                    cVar5 = FUN_1430035b0(*(undefined8 *)pcVar15);
                    uVar4 = local_40;
                    if (cVar5 == '\0') {
                      lVar20 = (longlong)(int)local_40;
                      iVar7 = (int)local_40 + 1;
                      local_40 = CONCAT44(local_40._4_4_,iVar7);
                      if (local_40._4_4_ < iVar7) {
                        FUN_140a13530(local_408,uVar4 & 0xffffffff);
                      }
                      puVar17 = local_408;
                      if (local_48 != (undefined1 *)0x0) {
                        puVar17 = local_48;
                      }
                      FUN_1409f3dd0(puVar17 + lVar20 * 0x60,pcVar15);
                      pcVar15 = local_4e0;
                      if (*(longlong *)(local_4e0 + lVar10 + 0x48) != 0) {
                        FMemory::Free();
                      }
                      if (*(longlong *)(pcVar15 + lVar10 + 0x38) != 0) {
                        FMemory::Free();
                      }
                      TArray<FNamedInterfaceDef,FDefaultAllocator>::
                      ~TArray<FNamedInterfaceDef,FDefaultAllocator>(pcVar15 + lVar10 + 0x20);
                      iVar7 = ((int)local_4d8 - iVar6) + -1;
                      if (iVar7 != 0) {
                        _guard_xfg_dispatch_icall_nop
                                  (local_4e0 + lVar10,local_4e0 + lVar12,(longlong)iVar7 * 0x60);
                      }
                      local_4d8 = CONCAT44(local_4d8._4_4_,(int)local_4d8 + -1);
                    }
                    lVar12 = lVar12 + -0x60;
                    lVar10 = lVar10 + -0x60;
                    lVar13 = lVar13 + -0x60;
                    iVar6 = iVar6 + -1;
                  } while (-1 < iVar6);
                  ppcVar16 = local_488;
                  param_1 = local_440;
                  lVar10 = local_4a8;
                  cVar5 = local_4e8;
                }
                puVar17 = local_408;
                if (local_48 != (undefined1 *)0x0) {
                  puVar17 = (undefined1 *)0x0;
                }
                local_488 = (code **)((ulonglong)puVar17 | (ulonglong)local_48);
                pppcStack_480 = (code ***)CONCAT44(uStack_45c,(int)local_40);
                local_468 = local_488;
                iStack_460 = (int)local_40;
                AK::MemoryMgr::StartProfileThreadUsage(0x441d0920);
                if (0 < (int)local_40) {
                  lVar13 = FUN_140b58fc0(lVar10);
                  FUN_1409f70c0(&local_478,lVar13);
                  iVar6 = *(int *)(lVar13 + 0x10);
                  if (iVar6 != 0) {
                    plVar14 = (longlong *)(*(longlong *)(lVar13 + 8) + 0x38);
                    do {
                      if (plVar14[2] != 0) {
                        FMemory::Free();
                      }
                      if (*plVar14 != 0) {
                        FMemory::Free();
                      }
                      TArray<FNamedInterfaceDef,FDefaultAllocator>::
                      ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar14 + -3);
                      plVar14 = plVar14 + 0xc;
                      iVar6 = iVar6 + -1;
                    } while (iVar6 != 0);
                  }
                  puVar17 = local_408;
                  if (local_48 != (undefined1 *)0x0) {
                    puVar17 = local_48;
                  }
                  local_4f8 = 0;
                  FUN_1409f0540(lVar13 + 8,puVar17,local_40 & 0xffffffff,
                                *(undefined4 *)(lVar13 + 0x14));
                  lVar10 = local_4a8;
                  *(undefined1 *)(lVar13 + 0x20) = 1;
                  *(undefined8 *)(lVar13 + 0x28) = 0;
                  FUN_140b5a8a0(local_4a8,lVar13);
                }
                puVar17 = local_408;
                if (local_48 != (undefined1 *)0x0) {
                  puVar17 = local_48;
                }
                if ((int)local_40 != 0) {
                  plVar14 = (longlong *)(puVar17 + 0x38);
                  iVar6 = (int)local_40;
                  do {
                    if (plVar14[2] != 0) {
                      FMemory::Free();
                    }
                    if (*plVar14 != 0) {
                      FMemory::Free();
                    }
                    TArray<FNamedInterfaceDef,FDefaultAllocator>::
                    ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar14 + -3);
                    plVar14 = plVar14 + 0xc;
                    iVar6 = iVar6 + -1;
                  } while (iVar6 != 0);
                }
                if (local_48 != (undefined1 *)0x0) {
                  FMemory::Free();
                }
              }
              lVar18 = 0x441d0990;
              local_498 = local_4e0;
              pppcStack_490 = (code ***)CONCAT44(pppcStack_490._4_4_,(int)local_4d8);
              if (cVar5 == '\0') {
                lVar18 = 0x441d0950;
              }
              local_488 = (code **)local_4e0;
              pppcStack_480 = pppcStack_490;
              AK::MemoryMgr::StartProfileThreadUsage(lVar18);
              pcVar15 = local_4a0;
              iVar9 = local_4d0;
              if (0 < (int)local_4d8) {
                lVar13 = FUN_140b58fc0(lVar10);
                FUN_1409f70c0(&local_478,lVar13);
                ppcVar1 = (code **)(lVar13 + 8);
                if (ppcVar1 != &local_4e0) {
                  iVar6 = *(int *)(lVar13 + 0x10);
                  if (iVar6 != 0) {
                    pcVar15 = *ppcVar1 + 0x38;
                    do {
                      if (*(longlong *)(pcVar15 + 0x10) != 0) {
                        FMemory::Free();
                      }
                      if (*(longlong *)pcVar15 != 0) {
                        FMemory::Free();
                      }
                      TArray<FNamedInterfaceDef,FDefaultAllocator>::
                      ~TArray<FNamedInterfaceDef,FDefaultAllocator>(pcVar15 + -0x18);
                      pcVar15 = pcVar15 + 0x60;
                      iVar6 = iVar6 + -1;
                    } while (iVar6 != 0);
                  }
                  local_4f8 = 0;
                  FUN_1409f0540(ppcVar1,local_4e0,local_4d8 & 0xffffffff,
                                *(undefined4 *)(lVar13 + 0x14));
                }
                lVar10 = local_4a8;
                *(undefined1 *)(lVar13 + 0x20) = 2;
                *(code ***)(lVar13 + 0x28) = ppcVar16;
                FUN_140b5a8a0(local_4a8,lVar13);
                pcVar15 = local_4a0;
                iVar9 = local_4d0;
              }
            }
          }
        }
LAB_140a023ee:
        iVar6 = (int)pppcStack_4b0 + 1;
        pppcStack_4b0 = (code ***)CONCAT44(pppcStack_4b0._4_4_,iVar6);
      }
      if ((int)local_4d8 != 0) {
        pcVar15 = local_4e0 + 0x38;
        iVar6 = (int)local_4d8;
        do {
          if (*(longlong *)(pcVar15 + 0x10) != 0) {
            FMemory::Free();
          }
          if (*(longlong *)pcVar15 != 0) {
            FMemory::Free();
          }
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(pcVar15 + -0x18);
          pcVar15 = pcVar15 + 0x60;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (local_4e0 != (code *)0x0) {
        FMemory::Free();
      }
    }
  }
  if ((int)local_4c0 != 0) {
    plVar14 = (longlong *)(local_4c8 + 0x78);
    iVar6 = (int)local_4c0;
    do {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      plVar14 = plVar14 + 0x11;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (local_4c8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a024d0 FUN_140a024d0 body=181 status=ok
// SIG undefined FUN_140a024d0(void)

void FUN_140a024d0(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = FUN_1409ff790(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 140a02590 Empty body=452 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_140a02661;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_140a02661:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0xa0 + *param_1;
      if (*(longlong *)(lVar5 + 0x20) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x10) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140a02760 FUN_140a02760 body=79 status=ok
// SIG undefined FUN_140a02760(void)

void FUN_140a02760(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  *(byte *)(param_1 + 0x311) = *(byte *)(param_1 + 0x311) | 0x10;
  pbVar2 = *(byte **)(param_1 + 0x2c0);
  pbVar1 = pbVar2 + (longlong)*(int *)(param_1 + 0x2c8) * 0x18;
  do {
    if (pbVar2 == pbVar1) {
LAB_140a02796:
      if ((*(byte *)(param_1 + 0x311) & 8) != 0) {
        *(byte *)(param_1 + 0x311) = *(byte *)(param_1 + 0x311) & 0xf7;
        FUN_140a01a00();
        return;
      }
      return;
    }
    if (*(longlong *)(pbVar2 + 8) == param_2) {
      *pbVar2 = *pbVar2 | 8;
      goto LAB_140a02796;
    }
    pbVar2 = pbVar2 + 0x18;
  } while( true );
}



// FUNCTION 140a027b0 FUN_140a027b0 body=65 status=ok
// SIG undefined FUN_140a027b0(void)

void FUN_140a027b0(longlong param_1,char param_2)

{
  if ((*(longlong *)(param_1 + 0xb30) != 0) && (param_2 != *(char *)(param_1 + 0xc70))) {
    FUN_14123f7d0(*(longlong *)(param_1 + 0xb30),1,param_2);
    *(char *)(param_1 + 0xc70) = param_2;
  }
  return;
}



// FUNCTION 140a02820 FUN_140a02820 body=33 status=ok
// SIG undefined FUN_140a02820(void)

void FUN_140a02820(longlong param_1)

{
  FUN_14126ac70();
                    /* WARNING: Could not recover jumptable at 0x000140a0283d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x6f0) + 0x10))();
  return;
}



// FUNCTION 140a02850 FUN_140a02850 body=71 status=ok
// SIG undefined FUN_140a02850(void)

void FUN_140a02850(longlong param_1,int param_2)

{
  if ((*(longlong **)(param_1 + 0x260) != (longlong *)0x0) && (param_2 == 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x260) + 0x288))();
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 140a028a0 FUN_140a028a0 body=98 status=ok
// SIG undefined FUN_140a028a0(void)

void FUN_140a028a0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 1000) != -1) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    lVar1 = UBehaviorTreeManager::GetCurrent(lVar1);
    if (lVar1 != 0) {
      FUN_142bd8290(lVar1,*(undefined4 *)(param_1 + 1000));
    }
    *(undefined4 *)(param_1 + 1000) = 0xffffffff;
  }
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 140a02910 FUN_140a02910 body=151 status=ok
// SIG undefined FUN_140a02910(void)

void FUN_140a02910(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x610) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x614)) {
    FUN_140a13b90(param_1 + 0x4a8,0);
  }
  if (*(longlong *)(param_1 + 0x628) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x628) + 0x238,param_1);
    *(undefined8 *)(param_1 + 0x628) = 0;
  }
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x630) + 0x198,param_1);
  }
  *(undefined8 *)(param_1 + 0x638) = 0;
  *(undefined8 *)(param_1 + 0x640) = 0;
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 140a029b0 FUN_140a029b0 body=773 status=ok
// SIG undefined FUN_140a029b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a029b0(longlong param_1,longlong param_2,undefined1 param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined8 local_res10;
  code *local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [4];
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  code *local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined1 local_bc [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  code *local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_80 [4];
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined4 local_64;
  code *local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined1 local_48;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (((param_2 != 0) && (plVar1 = *(longlong **)(param_1 + 0x6c8), plVar1 != (longlong *)0x0)) &&
     (lVar2 = *(longlong *)(param_2 + 0x4d8), lVar2 != 0)) {
    uVar6 = ULevelSequencePlayer::GetPrivateStaticClass();
    lVar7 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar6);
    if (lVar7 != 0) {
      FUN_142dafbc0(lVar7 + 0x178,&DAT_146865c48);
    }
    *(longlong *)(param_1 + 0x730) = param_2;
    uStack_100 = (ulonglong)uStack_100._4_4_ << 0x20;
    local_108 = FUN_140a0f940;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&AOakAIController::OnSeatDetachFinished",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    FUN_1407260e0(lVar2 + 0x3e0,param_1,&local_108,local_res10);
    FUN_142ce1dc0(lVar2,*(undefined8 *)(param_1 + 0x6c8),param_3);
    plVar1 = *(longlong **)(param_1 + 0x730);
    uVar6 = URemnantQuestSubQuest::GetPrivateStaticClass();
    uVar6 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar6);
    *(undefined8 *)(param_1 + 0x738) = uVar6;
    local_res10 = *(undefined8 *)(param_1 + 0x730);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x6f8,&local_res10);
    if (param_4 == '\0') {
      FUN_140a02cc0(*(undefined8 *)(param_1 + 0x740));
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x6c8) + 0xe68);
    if (lVar2 != 0) {
      lVar7 = *(longlong *)(param_2 + 0x168);
      local_d0 = DAT_1468b5da8;
      local_d8 = DAT_1468b5da0;
      if (lVar7 != 0) {
        local_38 = *(float *)(lVar7 + 0x210);
        fStack_34 = *(float *)(lVar7 + 0x214);
        fStack_30 = *(float *)(lVar7 + 0x218);
        fStack_2c = *(float *)(lVar7 + 0x21c);
        auVar10._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != fStack_34);
        auVar10._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != local_38);
        auVar10._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_30);
        auVar10._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_2c);
        iVar5 = movmskps((int)*(longlong *)(param_1 + 0x6c8),auVar10);
        if (iVar5 != 0) {
          *(float *)(lVar7 + 0x250) = local_38;
          *(float *)(lVar7 + 0x254) = fStack_34;
          *(float *)(lVar7 + 600) = fStack_30;
          *(float *)(lVar7 + 0x25c) = fStack_2c;
          puVar9 = (undefined8 *)FQuat::Rotator(&local_38,&local_108);
          *(undefined8 *)(lVar7 + 0x260) = *puVar9;
          *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar9 + 1);
        }
        local_d0 = *(undefined4 *)(lVar7 + 0x268);
        local_d8 = *(code **)(lVar7 + 0x260);
      }
      local_7c = 0xffffffff;
      uStack_74 = 0xffffffff;
      uStack_100 = CONCAT44(uStack_100._4_4_,local_d0);
      local_b8 = 0xffffffff;
      uStack_b0 = 0xffffffff;
      local_4c = DAT_1468b5d98;
      local_f4 = 0xffffffff;
      uStack_ec = 0xffffffff;
      local_88 = DAT_1468b5d98;
      local_c4 = DAT_1468b5d98;
      local_80[0] = 6;
      local_6c = 0;
      local_64 = 0;
      local_54 = _DAT_1468b5d90;
      local_48 = 0;
      local_bc[0] = 6;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = _DAT_1468b5d90;
      local_84 = 0;
      local_f8[0] = 6;
      local_e4 = 0;
      local_dc = 0;
      local_cc = _DAT_1468b5d90;
      local_c0 = 0;
      local_108 = local_d8;
      local_9c = local_d8;
      local_94 = local_d0;
      local_60 = local_d8;
      local_58 = local_d0;
      FUN_142cff0b0(lVar2,local_f8,0);
      FUN_142cff0b0(lVar2,local_bc,1);
      FUN_142cff0b0(lVar2,local_80,2);
    }
  }
  return;
}



// FUNCTION 140a02cc0 FUN_140a02cc0 body=258 status=ok
// SIG undefined FUN_140a02cc0(void)

ulonglong FUN_140a02cc0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_18;
  int local_10;
  
  if (*(longlong *)(param_1 + 0x530) != 0) {
    lVar4 = USafeZone::GetPrivateStaticClass();
    lVar5 = *(longlong *)(param_1 + 0x530);
    for (lVar1 = lVar5; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar4) {
        if (lVar5 != 0) goto LAB_140a02d29;
        break;
      }
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x118);
  if ((uVar2 == 0) || (*(longlong *)(uVar2 + 0x730) == 0)) {
    return uVar2 & 0xffffffffffffff00;
  }
  lVar5 = *(longlong *)(*(longlong *)(uVar2 + 0x730) + 0x528);
LAB_140a02d29:
  local_10 = 0;
  local_18 = (longlong *)0x0;
  bVar3 = FUN_14071ba40(param_1,0,lVar5,&local_18,0);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140a02da6;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140a02da6:
  return (ulonglong)bVar3;
}



// FUNCTION 140a02dd0 FUN_140a02dd0 body=579 status=ok
// SIG undefined FUN_140a02dd0(void)

void FUN_140a02dd0(longlong param_1,code *param_2,undefined4 param_3,undefined1 param_4,char param_5
                  )

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 local_res10;
  code *local_28;
  undefined8 uStack_20;
  
  if (param_2 == (code *)0x0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x6c8) == 0) {
    return;
  }
  lVar5 = FUN_1412286a0(param_2,param_3);
  if (lVar5 == 0) {
    return;
  }
  *(code **)(param_1 + 0x718) = param_2;
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  *(code **)(*(longlong *)(param_1 + 0x748) + 0xb30) = param_2;
  *(longlong *)(param_1 + 0x728) = lVar5;
  *(bool *)(param_1 + 0x758) = *(longlong *)(param_2 + 0x668) == lVar5;
  local_28 = FUN_140a0f940;
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&AOakAIController::OnSeatDetachFinished",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  FUN_1407260e0(lVar5 + 0x3e0,param_1,&local_28,local_res10);
  FUN_142ce1dc0(lVar5,*(undefined8 *)(param_1 + 0x6c8),param_4);
  if (*(char *)(param_1 + 0x758) != '\0') {
    FUN_14120db40(param_2,*(undefined8 *)(param_1 + 0x6c8));
  }
  pcVar9 = *(code **)(lVar5 + 0x118);
  if (pcVar9 != (code *)0x0) {
    lVar7 = AGTutorialStepVideo::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pcVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pcVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140a02f44;
  }
  pcVar9 = (code *)0x0;
LAB_140a02f44:
  *(code **)(param_1 + 0x720) = pcVar9;
  if ((pcVar9 != (code *)0x0) || (pcVar9 = param_2, *(char *)(param_1 + 0x758) != '\0')) {
    uVar8 = URemnantQuestSubQuest::GetPrivateStaticClass();
    uVar8 = (**(code **)(*(longlong *)pcVar9 + 0x628))(pcVar9,uVar8);
    *(undefined8 *)(param_1 + 0x738) = uVar8;
  }
  plVar1 = *(longlong **)(param_1 + 0x6c8);
  uVar8 = ULevelSequencePlayer::GetPrivateStaticClass();
  lVar7 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar8);
  if (lVar7 != 0) {
    FUN_142dafbc0(lVar7 + 0x178,&DAT_146865c48);
  }
  *(undefined1 *)(param_1 + 0x759) = *(undefined1 *)(lVar5 + 0x770);
  if (param_5 == '\0') {
    FUN_140a03020(*(undefined8 *)(param_1 + 0x740),*(undefined1 *)(param_1 + 0x758),
                  *(longlong *)(param_1 + 0x738) != 0);
  }
  uStack_20 = CONCAT44(uStack_20._4_4_,param_3);
  local_28 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x6d8,&local_28);
  return;
}



// FUNCTION 140a03020 FUN_140a03020 body=449 status=ok
// SIG undefined FUN_140a03020(void)

undefined1 FUN_140a03020(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *local_18;
  int local_10;
  
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      if (*(longlong *)(param_1 + 0x520) != 0) {
        lVar3 = USafeZone::GetPrivateStaticClass();
        for (lVar1 = *(longlong *)(param_1 + 0x520); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)
            ) {
          if (lVar1 == lVar3) {
            if (*(longlong *)(param_1 + 0x520) != 0) goto LAB_140a0315d;
            break;
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x118) != 0) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x718), lVar1 != 0)) {
        *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(lVar1 + 0xef8);
      }
LAB_140a0315d:
      uVar4 = *(undefined8 *)(param_1 + 0x520);
    }
    else {
      if (*(longlong *)(param_1 + 0x518) != 0) {
        lVar3 = USafeZone::GetPrivateStaticClass();
        for (lVar1 = *(longlong *)(param_1 + 0x518); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)
            ) {
          if (lVar1 == lVar3) {
            if (*(longlong *)(param_1 + 0x518) != 0) goto LAB_140a030fb;
            break;
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x118) != 0) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x718), lVar1 != 0)) {
        *(undefined8 *)(param_1 + 0x518) = *(undefined8 *)(lVar1 + 0xef0);
      }
LAB_140a030fb:
      uVar4 = *(undefined8 *)(param_1 + 0x518);
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x510) != 0) {
      lVar3 = USafeZone::GetPrivateStaticClass();
      for (lVar1 = *(longlong *)(param_1 + 0x510); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30))
      {
        if (lVar1 == lVar3) {
          if (*(longlong *)(param_1 + 0x510) != 0) goto LAB_140a0308b;
          break;
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x118) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x718), lVar1 != 0)) {
      *(undefined8 *)(param_1 + 0x510) = *(undefined8 *)(lVar1 + 0xee8);
    }
LAB_140a0308b:
    uVar4 = *(undefined8 *)(param_1 + 0x510);
  }
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar2 = FUN_14071ba40(param_1,0,uVar4,&local_18,0);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return uVar2;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar2;
}



// FUNCTION 140a031f0 FUN_140a031f0 body=1235 status=ok
// SIG undefined FUN_140a031f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140a031f0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint7 uVar9;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined1 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_76d8 [40];
  longlong *local_76b0;
  byte local_76a8 [8];
  undefined8 local_76a0;
  float local_7698 [2];
  float local_7690;
  float local_7648;
  undefined1 local_7628 [912];
  undefined1 local_7298 [29184];
  undefined1 *local_98;
  int local_90;
  undefined4 local_8c;
  longlong *local_88;
  undefined8 uStack_40;
  
  uStack_40 = 0x140a0320d;
  plVar3 = (longlong *)(DAT_1468387a8 ^ (ulonglong)auStack_76d8);
  if (param_2 == (longlong *)0x0) {
LAB_140a036a0:
    return (ulonglong)plVar3 & 0xffffffffffffff00;
  }
  local_88 = plVar3;
  lVar4 = FUN_1428dfc70();
  iVar13 = *(int *)(lVar4 + 0x90);
  uVar6 = (longlong)iVar13;
  if ((*(int *)(param_2[2] + 0x90) < iVar13) ||
     (uVar6 = *(ulonglong *)(param_2[2] + 0x88),
     *(longlong *)(uVar6 + (longlong)iVar13 * 8) != lVar4 + 0x88)) {
    plVar3 = (longlong *)(uVar6 & 0xffffffffffffff00);
  }
  else {
    plVar3 = (longlong *)CONCAT71((int7)(uVar6 >> 8),1);
  }
  if ((char)plVar3 == '\0') goto LAB_140a036a0;
  lVar4 = (**(code **)(*param_2 + 0x668))(param_2);
  plVar3 = (longlong *)0x0;
  if (lVar4 == 0) goto LAB_140a036a0;
  lVar5 = ARemnantWeaponMod::GetPrivateStaticClass();
  iVar13 = *(int *)(lVar5 + 0x90);
  uVar6 = (longlong)iVar13;
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar13) ||
     (uVar6 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + 0x88),
     *(longlong *)(uVar6 + (longlong)iVar13 * 8) != lVar5 + 0x88)) {
    plVar3 = (longlong *)(uVar6 & 0xffffffffffffff00);
  }
  else {
    plVar3 = (longlong *)CONCAT71((int7)(uVar6 >> 8),1);
  }
  if (((char)plVar3 == '\0') || (lVar5 = *(longlong *)(lVar4 + 0x568), lVar5 == 0))
  goto LAB_140a036a0;
  local_76b0 = (longlong *)0x0;
  plVar3 = (longlong *)FUN_142cc5d60(param_1 + 0x88,lVar5);
  plVar7 = param_2;
  if ((char)plVar3 != '\0') {
    FUN_142dc1ad0(local_7628);
    cVar2 = FUN_142cc5430(param_1 + 0x88,lVar5,local_7628);
    if (cVar2 == '\0') {
      plVar3 = (longlong *)FUN_142cc3a70(param_1 + 0x88,lVar5,&local_76b0);
      if ((char)plVar3 == '\0') goto LAB_140a036a0;
    }
    else {
      plVar3 = (longlong *)FUN_142dd0030(local_7628);
      local_76b0 = plVar3;
    }
    if (local_76b0 == (longlong *)0x0) goto LAB_140a036a0;
    lVar4 = (**(code **)(*local_76b0 + 0x668))();
    plVar3 = (longlong *)0x0;
    if (lVar4 == 0) goto LAB_140a036a0;
    lVar5 = ARemnantWeaponMod::GetPrivateStaticClass();
    uVar9 = (uint7)((ulonglong)(lVar5 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      plVar3 = (longlong *)((ulonglong)uVar9 << 8);
    }
    else {
      plVar3 = (longlong *)CONCAT71(uVar9,1);
    }
    plVar7 = local_76b0;
    if ((char)plVar3 == '\0') goto LAB_140a036a0;
  }
  local_76b0 = plVar7;
  lVar4 = *(longlong *)(lVar4 + 0x5e8);
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x7540) < 1)) goto LAB_140a036a0;
  plVar7 = (longlong *)(**(code **)(*local_76b0 + 0x688))(local_76b0);
  plVar3 = (longlong *)0x0;
  if (plVar7 == (longlong *)0x0) goto LAB_140a036a0;
  lVar5 = FUN_1429d7ab0();
  uVar9 = (uint7)((ulonglong)(lVar5 + 0x88) >> 8);
  if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    plVar3 = (longlong *)((ulonglong)uVar9 << 8);
  }
  else {
    plVar3 = (longlong *)CONCAT71(uVar9,1);
  }
  if ((char)plVar3 == '\0') goto LAB_140a036a0;
  uVar8 = UScrollBox::GetPrivateStaticClass();
  lVar5 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
  plVar3 = (longlong *)0x0;
  if (lVar5 == 0) goto LAB_140a036a0;
  local_98 = (undefined1 *)0x0;
  iVar13 = *(int *)(lVar4 + 0x7540);
  lVar11 = *(longlong *)(lVar4 + 0x7538);
  local_90 = iVar13;
  if (iVar13 == 0) {
    local_8c = 0;
  }
  else {
    FUN_140a13060(local_7298,iVar13,0);
    if (lVar11 == 0) {
      lVar11 = lVar4 + 0x338;
    }
    puVar12 = local_7298;
    if (local_98 != (undefined1 *)0x0) {
      puVar12 = local_98;
    }
    do {
      FUN_140726d20(puVar12,lVar11);
      lVar11 = lVar11 + 0x390;
      iVar13 = iVar13 + -1;
      puVar12 = puVar12 + 0x390;
    } while (iVar13 != 0);
  }
  if (local_90 != 0) {
    fVar15 = (float)FUN_142d1b990(lVar5);
    fVar18 = 0.0;
    if (0.0001 <= fVar15) {
      puVar12 = local_7298;
      if (local_98 != (undefined1 *)0x0) {
        puVar12 = local_98;
      }
      puVar14 = puVar12 + (longlong)local_90 * 0x390;
      for (; puVar12 != puVar14; puVar12 = puVar12 + 0x390) {
        FUN_140772210(local_7698);
        plVar3 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
        lVar4 = plVar3[0x1f];
        if (lVar4 == 0) {
          (**(code **)(*plVar3 + 0x368))(plVar3);
          lVar4 = plVar3[0x1f];
        }
        bVar1 = *(byte *)(lVar4 + 0x48);
        local_76a0 = *(undefined8 *)(lVar4 + 0x50);
        local_76a8[0] = bVar1;
        cVar2 = FUN_14077cd10(local_76a8);
        if ((cVar2 != '\0') && (bVar1 < 8)) {
          if ((0.0 < *(float *)((longlong)(puVar12 + (ulonglong)bVar1 * 0x68 + 0x20) + 8)) &&
             ((*(float *)(puVar12 + (ulonglong)bVar1 * 0x68 + 0x20) < 3.4028235e+38 &&
              ((*(uint *)(puVar12 + (ulonglong)bVar1 * 0x68 + 100) >> 1 & 1) != 0)))) {
            FUN_1407263c0(local_7698);
            fVar17 = local_7648 / fVar15;
            if (0.0 <= fVar17) {
              if (1.0 <= fVar17) {
                fVar17 = 1.0;
              }
            }
            else {
              fVar17 = 0.0;
            }
            fVar16 = local_7698[0];
            if (local_7690 <= 0.0) {
              fVar16 = 3.4028235e+38;
            }
            fVar17 = fVar17 - fVar16 * *(float *)(param_1 + 0x9c);
            if (0.0 <= fVar17) {
              if (1.0 <= fVar17) {
                fVar17 = 1.0;
              }
            }
            else {
              fVar17 = 0.0;
            }
            fVar18 = fVar18 + fVar17;
          }
        }
      }
      bVar10 = *(float *)(param_1 + 0x98) <= fVar18 && fVar18 != *(float *)(param_1 + 0x98);
      goto LAB_140a03678;
    }
  }
  bVar10 = false;
LAB_140a03678:
  if (local_98 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return (ulonglong)bVar10;
}



// FUNCTION 140a036d0 FUN_140a036d0 body=843 status=ok
// SIG undefined FUN_140a036d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140a036d0(longlong param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong in_RAX;
  longlong lVar5;
  longlong lVar6;
  uint7 uVar9;
  longlong lVar7;
  ulonglong uVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_68;
  float local_60;
  float local_58;
  float fStack_54;
  undefined8 local_48;
  float local_40;
  
  if (param_2 != 0) {
    lVar5 = FUN_1428dfc70();
    iVar2 = *(int *)(lVar5 + 0x90);
    uVar8 = (longlong)iVar2;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar2) ||
       (uVar8 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar8 + (longlong)iVar2 * 8) != lVar5 + 0x88)) {
      in_RAX = uVar8 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar8 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      local_res10 = 0xffffffffffffffff;
      lVar5 = FUN_142de7b90(param_1 + 0x88,param_2,&local_res10);
      in_RAX = 0;
      if (lVar5 != 0) {
        lVar6 = FUN_1428dfc70();
        uVar9 = (uint7)((ulonglong)(lVar6 + 0x88) >> 8);
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          in_RAX = (ulonglong)uVar9 << 8;
        }
        else {
          in_RAX = CONCAT71(uVar9,1);
        }
        if ((char)in_RAX != '\0') {
          local_res20 = 0xffffffffffffffff;
          lVar6 = FUN_142de7b90(param_1 + 0x108,param_2,&local_res20);
          in_RAX = 0;
          if (lVar6 != 0) {
            lVar7 = FUN_1428dfc70();
            iVar2 = *(int *)(lVar7 + 0x90);
            uVar8 = (longlong)iVar2;
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar2) ||
               (uVar8 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + 0x88),
               *(longlong *)(uVar8 + (longlong)iVar2 * 8) != lVar7 + 0x88)) {
              in_RAX = uVar8 & 0xffffffffffffff00;
            }
            else {
              in_RAX = CONCAT71((int7)(uVar8 >> 8),1);
            }
            if ((char)in_RAX != '\0') {
              lVar6 = *(longlong *)(param_2 + 0x168);
              if (lVar6 == 0) {
                local_48 = _DAT_1468b5d90;
                local_40 = DAT_1468b5d98;
              }
              else {
                local_48 = *(undefined8 *)(lVar6 + 0x220);
                local_40 = *(float *)(lVar6 + 0x228);
              }
              uVar4 = local_48;
              lVar5 = *(longlong *)(lVar5 + 0x168);
              if (lVar5 == 0) {
                local_68 = _DAT_1468b5d90;
                local_60 = DAT_1468b5d98;
              }
              else {
                local_68 = *(undefined8 *)(lVar5 + 0x220);
                local_60 = *(float *)(lVar5 + 0x228);
              }
              fVar13 = local_60;
              uVar3 = local_68;
              if (lVar6 == 0) {
                local_68 = _DAT_1468b5d90;
                local_60 = DAT_1468b5d98;
              }
              else {
                local_68 = *(undefined8 *)(lVar6 + 0x220);
                local_60 = *(float *)(lVar6 + 0x228);
              }
              fVar15 = (float)local_68;
              in_RAX = (ulonglong)(uint)local_60;
              local_48._0_4_ = (float)uVar3;
              local_48._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
              local_48._0_4_ = (float)local_48 - fVar15;
              local_48._4_4_ = local_48._4_4_ - local_68._4_4_;
              fVar13 = fVar13 - local_60;
              fVar14 = SQRT(local_48._4_4_ * local_48._4_4_ + (float)local_48 * (float)local_48 +
                            fVar13 * fVar13);
              if (0.0001 <= fVar14) {
                local_58 = (float)uVar4;
                fStack_54 = (float)((ulonglong)uVar4 >> 0x20);
                fVar10 = 1.0 / fVar14;
                fVar12 = (fStack_54 - local_68._4_4_) * local_48._4_4_ * fVar10 +
                         (local_58 - fVar15) * (float)local_48 * fVar10 +
                         (local_40 - local_60) * fVar13 * fVar10;
                if (((0.0 <= fVar12) || (*(char *)(param_1 + 0x189) != '\0')) &&
                   ((fVar12 <= fVar14 || (*(char *)(param_1 + 0x188) != '\0')))) {
                  fVar1 = *(float *)(param_1 + 0x18c);
                  if (0.0 < fVar1) {
                    fVar11 = 0.0;
                    if ((0.0 <= fVar12) && (fVar11 = fVar12, fVar14 <= fVar12)) {
                      fVar11 = fVar14;
                    }
                    fStack_54 = (local_48._4_4_ * fVar10 * fVar11 + local_68._4_4_) - fStack_54;
                    local_58 = ((float)local_48 * fVar10 * fVar11 + fVar15) - local_58;
                    local_40 = (fVar13 * fVar10 * fVar11 + local_60) - local_40;
                    if (fVar1 * fVar1 <
                        fStack_54 * fStack_54 + local_58 * local_58 + local_40 * local_40)
                    goto LAB_140a039fa;
                  }
                  return CONCAT71((uint7)(uint3)((uint)local_60 >> 8),1);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_140a039fa:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a03a20 FUN_140a03a20 body=43 status=ok
// SIG undefined FUN_140a03a20(void)

void FUN_140a03a20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140a044d0(*(undefined4 *)(param_1 + 0x270),*(undefined8 *)(param_1 + 0x118),
                        *(undefined8 *)(param_1 + 0x268));
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x26) = 0;
  }
  return;
}



// FUNCTION 140a03a50 FUN_140a03a50 body=58 status=ok
// SIG undefined FUN_140a03a50(void)

void FUN_140a03a50(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_18 [16];
  
  local_res8 = *(undefined4 *)(param_1 + 0x18);
  local_resc = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = FUN_14058f8f0(local_18,param_1 + 0x20);
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10),&local_res8,uVar1);
  return;
}



// FUNCTION 140a03a90 Execute body=51 status=ok
// SIG undefined Execute(void)

void TBaseUFunctionDelegateInstance<UTTLArsenalMovementComponent,TTypeWrapper<void>___cdecl(void)>::
     Execute(longlong param_1)

{
  longlong *plVar1;
  undefined1 local_res8;
  undefined1 local_res9;
  
  local_res9 = 1;
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(param_1 + 8),&local_res8);
  return;
}



// FUNCTION 140a03ad0 Execute body=64 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,TTypeWrapper<void>___cdecl(int,bool)>
     ::Execute(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140a03b0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,*(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 140a03b10 FUN_140a03b10 body=118 status=ok
// SIG undefined FUN_140a03b10(void)

void FUN_140a03b10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4,
             *(undefined4 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 140a03b90 FUN_140a03b90 body=60 status=ok
// SIG undefined FUN_140a03b90(void)

undefined8 FUN_140a03b90(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_18 [16];
  
  local_res8 = *(undefined4 *)(param_1 + 0x18);
  local_resc = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = FUN_14058f8f0(local_18,param_1 + 0x20);
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10),&local_res8,uVar1);
  return 1;
}



// FUNCTION 140a03bd0 ExecuteIfSafe body=88 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUFunctionDelegateInstance<UTTLArsenalMovementComponent,void___cdecl(void)>::ExecuteIfSafe
          (longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_res8;
  undefined1 local_res9;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar1 != '\0') {
    local_res9 = 1;
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
    (**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(param_1 + 8),&local_res8);
    return 1;
  }
  return 0;
}



// FUNCTION 140a03c30 ExecuteIfSafe body=91 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool)>::ExecuteIfSafe
          (longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140a03c90 FUN_140a03c90 body=145 status=ok
// SIG undefined FUN_140a03c90(void)

bool FUN_140a03c90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,
               *(undefined4 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
  return lVar1 != 0;
}



// FUNCTION 140a03d30 FUN_140a03d30 body=447 status=ok
// SIG undefined FUN_140a03d30(void)

ulonglong FUN_140a03d30(longlong *param_1)

{
  undefined8 uVar1;
  float fVar2;
  longlong lVar3;
  ulonglong in_RAX;
  float *pfVar4;
  undefined7 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float local_48;
  float fStack_44;
  undefined8 local_38;
  float local_30;
  
  lVar3 = param_1[1];
  if ((lVar3 == 0) || (*param_1 == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = *(undefined8 *)(lVar3 + 0x774);
  fVar2 = *(float *)(lVar3 + 0x77c);
  pfVar4 = (float *)FUN_142fa2760(lVar3,&local_38);
  fVar8 = pfVar4[1];
  fVar7 = *pfVar4;
  fVar6 = fVar7 * fVar7 + fVar8 * fVar8;
  if (fVar6 == 1.0) {
    if (pfVar4[2] == 0.0) {
      local_38 = *(undefined8 *)pfVar4;
      local_30 = pfVar4[2];
      fVar10 = (float)((ulonglong)local_38 >> 0x20);
      fVar9 = local_30;
      fVar12 = (float)local_38;
      goto LAB_140a03e5d;
    }
  }
  else {
    fVar10 = DAT_1468b5d94;
    fVar9 = DAT_1468b5d98;
    fVar12 = DAT_1468b5d90;
    if (fVar6 < 1e-08) goto LAB_140a03e5d;
    auVar11 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar10 = auVar11._0_4_;
    fVar10 = fVar10 + fVar10 * (0.5 - fVar6 * 0.5 * fVar10 * fVar10);
    fVar10 = fVar10 + fVar10 * (0.5 - fVar6 * 0.5 * fVar10 * fVar10);
    fVar7 = fVar7 * fVar10;
    fVar8 = fVar8 * fVar10;
  }
  fVar10 = fVar8;
  fVar9 = 0.0;
  fVar12 = fVar7;
LAB_140a03e5d:
  local_48 = (float)uVar1;
  fStack_44 = (float)((ulonglong)uVar1 >> 0x20);
  fVar7 = fStack_44 * fVar10 + local_48 * fVar12 + fVar2 * fVar9;
  fVar8 = -1.0;
  if ((-1.0 <= fVar7) && (fVar8 = fVar7, 1.0 <= fVar7)) {
    fVar8 = 1.0;
  }
  fVar8 = _guard_xfg_dispatch_icall_nop(fVar8);
  lVar3 = *(longlong *)(param_1[1] + 0xaf0);
  uVar5 = (undefined7)((ulonglong)param_1[1] >> 8);
  if (lVar3 == 0) {
    return CONCAT71(uVar5,fVar8 * 57.295776 <= 5.0);
  }
  return CONCAT71(uVar5,fVar8 * 57.295776 <= *(float *)(lVar3 + 0x44));
}



// FUNCTION 140a03f10 FUN_140a03f10 body=632 status=ok
// SIG undefined FUN_140a03f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a03f10(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x328) == '\x01') {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
    }
    plVar2 = *(longlong **)(param_1 + 0x118);
    if ((plVar2 != (longlong *)0x0) && (lVar3 != 0)) {
      local_c0 = &LAB_140a0e260;
      uStack_b8 = 0;
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x300);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_c0;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_c0._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_b8;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_b4;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar4[5] = lVar3;
        *plVar4 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_d0 = 0xbf800000;
      local_d8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar5,param_1 + 0x330,&local_a8,uVar1);
      if (local_48 != 0) {
        plVar6 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar6 = local_58;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
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
      if (*(char *)(param_1 + 0x328) != '\x02') {
        *(undefined1 *)(param_1 + 0x328) = 2;
        local_c8[0] = 2;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x1d8,local_c8);
      }
      uVar5 = FUN_141477fa0();
      lVar3 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar5);
      if (lVar3 != 0) {
        FUN_140eaa0c0(lVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 140a04190 FUN_140a04190 body=178 status=ok
// SIG undefined FUN_140a04190(void)

void FUN_140a04190(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  plVar2 = (longlong *)FUN_140a09850();
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x24b) == '\0') {
    uVar5 = *(undefined1 *)(param_1 + 0x24a);
  }
  else {
    plVar3 = (longlong *)FUN_140a09850(param_1);
    if ((((plVar3 == (longlong *)0x0) ||
         (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x950))(plVar3), plVar3 == (longlong *)0x0))
        || (cVar1 = (**(code **)(*plVar3 + 0x780))(plVar3), cVar1 == '\0')) ||
       (cVar1 = (**(code **)(*plVar3 + 0x778))(plVar3), cVar1 == '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  lVar4 = (**(code **)(*plVar2 + 0x900))(plVar2,uVar5,0);
  if (lVar4 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140a04230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x900))(plVar2,0,0);
  return;
}



// FUNCTION 140a04250 FUN_140a04250 body=234 status=ok
// SIG undefined FUN_140a04250(void)

void FUN_140a04250(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  
  if ((*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) &&
     (lVar3 = FUN_1405c6c00(), lVar3 != 0)) {
    lVar4 = FUN_1413ea8c0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(longlong *)(lVar3 + 0x1f8) != 0)) &&
       (cVar2 = FUN_142c48f60(*(longlong *)(lVar3 + 0x1f8),param_3,0), cVar2 != '\0')) {
      TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0xa0,local_res8,param_2);
      if (((local_res8[0] != -1) &&
          (lVar3 = (longlong)local_res8[0] * 0x30 + *(longlong *)(param_1 + 0xa0), lVar3 != 0)) &&
         ((lVar3 != -8 && (*(longlong *)(lVar3 + 0x20) != 0)))) {
        return;
      }
    }
  }
  FUN_1405c6a20(param_1,param_2,param_3);
  return;
}



// FUNCTION 140a04340 FUN_140a04340 body=106 status=ok
// SIG undefined FUN_140a04340(void)

longlong FUN_140a04340(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18f8);
  if (*(longlong **)(param_1 + 0x18f8) == (longlong *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x1478);
  }
  plVar1 = plVar2;
  while( true ) {
    if (plVar1 == plVar2 + (longlong)*(int *)(param_1 + 0x1900) * 3) {
      return 0xffffffff;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 3;
  }
  if (plVar1 == plVar2 + (longlong)*(int *)(param_1 + 0x1900) * 3) {
    return 0xffffffff;
  }
  return ((longlong)plVar1 - (longlong)plVar2) / 0x18;
}



// FUNCTION 140a043b0 FUN_140a043b0 body=275 status=ok
// SIG undefined FUN_140a043b0(void)

int * FUN_140a043b0(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x90) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(*param_1 + 0x88 + (longlong)iVar4 * 0x90);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140a044d0 FUN_140a044d0 body=104 status=ok
// SIG undefined FUN_140a044d0(void)

longlong FUN_140a044d0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 local_res10 [24];
  
  if (((param_2 != (longlong *)0x0) && (param_3 != 0)) &&
     (lVar1 = (**(code **)(*param_2 + 0x148))(param_2), lVar1 != 0)) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      lVar1 = lVar1 + 0x400;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 400) + 0x98);
    }
    lVar1 = FLatentActionManager::
            FindExistingActionWithPredicate<FStreamLevelAction,_FLatentActionManager::FindExistingAction<FStreamLevelAction>_::_2_::FFirstItemPredicate>
                      (lVar1,param_3,param_1,local_res10);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140a04540 FUN_140a04540 body=123 status=ok
// SIG undefined FUN_140a04540(void)

undefined8 FUN_140a04540(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((*(longlong *)(param_1 + 0x718) == 0) || (*(char *)(param_1 + 0x758) != '\0')) {
    uVar4 = FUN_1407593e0();
    return uVar4;
  }
  lVar2 = FUN_14222e250();
  if (lVar2 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a045a1;
  }
  lVar2 = 0;
LAB_140a045a1:
  return *(undefined8 *)(lVar2 + 0x908);
}



// FUNCTION 140a045c0 FUN_140a045c0 body=80 status=ok
// SIG undefined FUN_140a045c0(void)

void FUN_140a045c0(longlong param_1)

{
  if ((((*(char *)(param_1 + 0x3b9) != '\0') && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0'))
     && (DAT_1468536c8 != 0)) {
    FUN_1405ad830(DAT_1468536c8,param_1 + 0x360);
    *(undefined1 *)(param_1 + 0x3b9) = 0;
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 140a04610 FUN_140a04610 body=629 status=ok
// SIG undefined FUN_140a04610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a04610(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  longlong *local_170;
  longlong local_168;
  longlong local_160 [2];
  undefined1 local_150 [24];
  undefined1 local_138 [8];
  longlong local_130 [7];
  longlong *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [8];
  longlong local_d0 [7];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong local_80 [7];
  longlong *local_48;
  int local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  FUN_140a04890();
  FUN_140a09920(param_1,&local_168,1);
  if (local_168 != 0) {
    lVar4 = param_1 + 0x390;
    if (*(longlong *)(param_1 + 0x3a0) == 0) {
      uVar3 = FUN_14058f8f0(local_160,&local_168);
      if (*(longlong *)(param_1 + 0x3a0) != 0) {
        FUN_140a0b040(lVar4);
      }
      FWeakObjectPtr::operator=(param_1 + 0x3b8,param_1);
      FUN_1405913a0(param_1 + 0x3a8,uVar3);
      FUN_140a22850(lVar4);
      FUN_140591060(uVar3);
    }
    else {
      FUN_140a22850(lVar4);
    }
    FUN_140a20f30(param_1,&local_168);
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x370);
    if (cVar1 == '\0') {
      lVar4 = *(longlong *)(param_1 + 0x120);
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
      }
      lVar4 = FUN_14304c8c0(lVar4);
      if (lVar4 != 0) {
        FUN_14303b650(lVar4,local_d8,*(undefined8 *)(param_1 + 0x118));
        FUN_143065860(local_d8,local_138);
        FUN_1430658c0(local_d8,local_88);
        if (local_f0 != local_40) {
          cVar1 = FUN_14303a060(local_88);
          cVar2 = FUN_14303a060(local_138);
          if (cVar2 != cVar1) {
            FWeakObjectPtr::operator=(param_1 + 0x370,local_e8);
          }
        }
        if (local_48 != (longlong *)0x0) {
          (**(code **)(*local_48 + 0x20))
                    (local_48,CONCAT71((int7)((ulonglong)local_80 >> 8),local_48 != local_80));
          local_48 = (longlong *)0x0;
        }
        if (local_f8 != (longlong *)0x0) {
          (**(code **)(*local_f8 + 0x20))
                    (local_f8,CONCAT71((int7)((ulonglong)local_130 >> 8),local_f8 != local_130));
          local_f8 = (longlong *)0x0;
        }
        if (local_98 != (longlong *)0x0) {
          (**(code **)(*local_98 + 0x20))
                    (local_98,CONCAT71((int7)((ulonglong)local_d0 >> 8),local_98 != local_d0));
        }
      }
    }
    cVar1 = FUN_14059ee90(param_1 + 0x378);
    if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x360) != 0)) {
      local_170 = local_160;
      local_178 = 0;
      local_160[0] = 0;
      local_160[1] = 0;
      lVar4 = FUN_1405a2d20(local_168,local_150,*(longlong *)(param_1 + 0x360),0);
      FUN_1405913a0(param_1 + 0x378,lVar4);
      *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(lVar4 + 0x10);
      FUN_140591060(local_150);
      if (local_160[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_168 != 0) {
      FUN_1405a53f0();
    }
  }
  return;
}



// FUNCTION 140a04890 FUN_140a04890 body=182 status=ok
// SIG undefined FUN_140a04890(void)

void FUN_140a04890(longlong param_1)

{
  char cVar1;
  longlong local_res8 [4];
  longlong local_38 [2];
  undefined1 local_28 [16];
  undefined4 local_18;
  
  if ((*(int *)(param_1 + 0x24c) == 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
    FUN_140a09920(param_1,local_res8,1);
    if (local_res8[0] != 0) {
      local_38[0] = 0;
      local_38[1] = 0;
      FUN_1405a2d20(local_res8[0],local_28,*(undefined8 *)(param_1 + 0x1c8),0,0,local_38);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      cVar1 = FUN_14059ee90(local_28);
      if (cVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x24c) = local_18;
      }
      FUN_140591060(local_28);
      if (local_res8[0] != 0) {
        FUN_1405a53f0();
      }
    }
  }
  FUN_1409fd0e0(param_1);
  return;
}



// FUNCTION 140a04950 FUN_140a04950 body=384 status=ok
// SIG undefined FUN_140a04950(void)

void FUN_140a04950(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong local_res8;
  longlong local_res10;
  longlong local_38 [2];
  undefined1 local_28 [32];
  
  FUN_140a04890();
  if ((*(longlong *)(param_1 + 0x380) != 0) &&
     (FUN_140a09920(param_1,&local_res10,0), local_res10 != 0)) {
    if ((*(char *)(param_1 + 0x3b8) == '\0') ||
       ((DAT_1468657a0 != '\0' ||
        (cVar1 = FUN_1405aa990(local_res10,*(undefined4 *)(param_1 + 0x24c),1,
                               *(undefined8 *)(param_1 + 0x380)), cVar1 == '\0')))) {
      FUN_140a09920(param_1,&local_res8,1);
      if (local_res8 != 0) {
        FUN_140a211c0(param_1,&local_res8);
        if (*(longlong *)(param_1 + 0x380) != 0) {
          local_38[0] = 0;
          local_38[1] = 0;
          FUN_1405a2d20(local_res8,local_28,*(longlong *)(param_1 + 0x380),0,0,local_38);
          FUN_140591060(local_28);
          if (local_38[0] != 0) {
            FMemory::Free();
          }
        }
        if (local_res8 != 0) {
          FUN_1405a53f0();
        }
      }
    }
    else {
      FUN_140a04ad0(param_1);
    }
    if (local_res10 != 0) {
      FUN_1405a53f0();
    }
  }
  if (*(char *)(param_1 + 0x368) != '\0') {
    if (*(char *)(param_1 + 0x24b) == '\0') {
      cVar1 = *(char *)(param_1 + 0x24a);
    }
    else {
      plVar2 = (longlong *)FUN_140a09850(param_1);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x950))(plVar2);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      cVar1 = (**(code **)(*plVar2 + 0x780))(plVar2);
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = (**(code **)(*plVar2 + 0x778))(plVar2);
    }
    if (cVar1 != '\0') {
      FUN_140a17ac0(param_1);
    }
  }
  return;
}



// FUNCTION 140a04ad0 FUN_140a04ad0 body=633 status=ok
// SIG undefined FUN_140a04ad0(void)

void FUN_140a04ad0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  BOOL BVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  longlong local_res8;
  undefined1 local_28 [16];
  
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FUN_140a09920(param_1,&local_res8,0);
    if ((DAT_1468536c6 != '\0') || (lVar6 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
      lVar6 = 0;
    }
    if ((((local_res8 != 0) && (lVar6 != 0)) && (*(int *)(param_1 + 0x24c) != 0)) &&
       (0.0001 < *(float *)(param_1 + 0x3bc))) {
      FUN_140a211c0(param_1,&local_res8);
      lVar5 = param_1 + 0x460;
      if (*(longlong *)(param_1 + 0x470) == 0) {
        uVar4 = FUN_14058f8f0(local_28,&local_res8);
        if (*(longlong *)(param_1 + 0x470) != 0) {
          FUN_140a0b040(lVar5);
        }
        FWeakObjectPtr::operator=(param_1 + 0x488,param_1);
        FUN_1405913a0(param_1 + 0x478,uVar4);
        FUN_140a22850(lVar5);
        FUN_140591060(uVar4);
      }
      else {
        FUN_140a22850(lVar5);
      }
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
      }
      lVar5 = 0;
      fVar7 = (float)*(int *)(lVar6 + 0x1d8) * *(float *)(param_1 + 0x3bc);
      if ((9.223372e+18 <= fVar7) && (fVar7 = fVar7 - 9.223372e+18, fVar7 < 9.223372e+18)) {
        lVar5 = -0x8000000000000000;
      }
      *(longlong *)(param_1 + 0x400) = (longlong)fVar7 + lVar5;
      *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(local_res8 + 0xd0);
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x380) + 0x28);
      *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_1 + 0x24c);
      *(undefined4 *)(param_1 + 0x410) = uVar1;
      if (*(char *)(param_1 + 0x3b9) == '\0') {
        iVar2 = *(int *)(lVar6 + 0x1dc);
        *(undefined4 *)(param_1 + 0x418) = 0;
        *(longlong *)(param_1 + 0x3f8) = (longlong)iVar2 * 2;
        *(undefined4 *)(param_1 + 0x448) = 0;
        lVar6 = DAT_1468536c8;
        if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
          iVar2 = *(int *)(DAT_1468536c8 + 0x1dc);
          BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d0));
          if (BVar3 == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d0));
          }
          *(undefined8 *)(param_1 + 0x3c0) = 0;
          *(longlong *)(param_1 + 0x3c8) = (longlong)iVar2;
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d0));
          FUN_1405a3c50(lVar6,param_1 + 0x360);
          *(undefined1 *)(param_1 + 0x3b9) = 1;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
    }
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
    if (local_res8 != 0) {
      FUN_1405a53f0();
    }
  }
  return;
}



// FUNCTION 140a04d60 FUN_140a04d60 body=178 status=ok
// SIG undefined FUN_140a04d60(void)

void FUN_140a04d60(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar1 = (undefined8 *)(param_1 + 600);
  FUN_140a11ee0(puVar1);
  plVar3 = (longlong *)*puVar1;
  uVar5 = (ulonglong)*(int *)(param_1 + 0x260);
  plVar2 = plVar3 + uVar5;
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 != 0) {
        FUN_1405ac930();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x260);
    plVar3 = (longlong *)*puVar1;
  }
  uVar4 = (uint)uVar5;
  while (uVar4 != 0) {
    if (*plVar3 != 0) {
      FUN_1405a53f0();
      *plVar3 = 0;
    }
    plVar3 = plVar3 + 1;
    uVar4 = (int)uVar5 - 1;
    uVar5 = (ulonglong)uVar4;
  }
  *(undefined4 *)(param_1 + 0x260) = 0;
  if (*(int *)(param_1 + 0x264) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar1,0);
  }
  FUN_140a170c0(puVar1,param_1);
  return;
}



// FUNCTION 140a04e20 FUN_140a04e20 body=134 status=ok
// SIG undefined FUN_140a04e20(void)

void FUN_140a04e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong local_res20;
  
  cVar1 = FWeakObjectPtr::IsValid(param_2);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_2);
    (**(code **)(*plVar2 + 0x400))(plVar2);
    FUN_140591060(param_3);
    return;
  }
  cVar1 = FUN_14059f130(param_3);
  if (cVar1 != '\0') {
    FUN_14058f8a0(&local_res20,param_3);
    FUN_1405ac930(local_res20);
    if (local_res20 != 0) {
      FUN_1405a53f0();
    }
  }
  FUN_140591060(param_3);
  return;
}



// FUNCTION 140a04eb0 FUN_140a04eb0 body=142 status=ok
// SIG undefined FUN_140a04eb0(void)

void FUN_140a04eb0(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [16];
  longlong local_res18 [2];
  longlong local_28 [2];
  longlong *local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    local_res18[0] = *(longlong *)(param_1 + 0x18) + 0x330;
    local_28[1] = 0xb;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"HoverQuery",0x16);
    local_18 = local_28;
    local_10 = local_res18;
    FUN_1409f0700(param_2,local_res8,&local_18,0);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140a04f40 FUN_140a04f40 body=296 status=ok
// SIG undefined FUN_140a04f40(void)

void FUN_140a04f40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  if (*(char *)(param_1 + 0x24b) == '\0') {
    local_res8[0] = *(undefined1 *)(param_1 + 0x24a);
  }
  else {
    plVar2 = (longlong *)FUN_140a09850();
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x950))(plVar2);
      if (plVar2 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar2 + 0x780))(plVar2);
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*plVar2 + 0x778))(plVar2);
          if (cVar1 != '\0') {
            local_res8[0] = 1;
            goto LAB_140a04fac;
          }
        }
      }
    }
    local_res8[0] = 0;
  }
LAB_140a04fac:
  if (*(char *)(param_1 + 0x24b) == '\0') {
    local_res10[0] = *(undefined1 *)(param_1 + 0x24a);
  }
  else {
    plVar2 = (longlong *)FUN_140a09850(param_1);
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x950))(plVar2);
      if (plVar2 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar2 + 0x780))(plVar2);
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*plVar2 + 0x778))(plVar2);
          if (cVar1 != '\0') {
            local_res10[0] = 1;
            goto LAB_140a05009;
          }
        }
      }
    }
    local_res10[0] = 0;
  }
LAB_140a05009:
  local_28 = local_res8;
  local_20 = local_res10;
  local_38 = param_2;
  local_30 = param_3;
  FUN_1409f6cf0(&local_38,*(undefined8 *)(param_1 + 0x360));
  FUN_1409f6cf0(&local_38,*(undefined8 *)(param_1 + 0x368));
  FUN_140a05070(param_1,param_2,param_3);
  return;
}



// FUNCTION 140a05070 FUN_140a05070 body=2628 status=ok
// SIG undefined FUN_140a05070(void)

void FUN_140a05070(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  int *piVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong local_res8;
  char local_res10 [8];
  char local_res18 [8];
  longlong local_res20;
  undefined8 local_88;
  char *local_80;
  char *local_78;
  longlong *local_70;
  undefined8 local_68;
  char *local_60;
  char *local_58;
  
  local_res8 = param_1;
  if (*(char *)(param_1 + 0x24b) == '\0') {
    local_res18[0] = *(char *)(param_1 + 0x24a);
  }
  else {
    plVar5 = (longlong *)FUN_140a09850();
    if ((((plVar5 == (longlong *)0x0) ||
         (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x950))(plVar5), plVar5 == (longlong *)0x0))
        || (cVar4 = (**(code **)(*plVar5 + 0x780))(plVar5), cVar4 == '\0')) ||
       (cVar4 = (**(code **)(*plVar5 + 0x778))(plVar5), cVar4 == '\0')) {
      local_res18[0] = '\0';
    }
    else {
      local_res18[0] = '\x01';
    }
  }
  if (*(char *)(param_1 + 0x24b) == '\0') {
    local_res10[0] = *(char *)(param_1 + 0x24a);
  }
  else {
    plVar5 = (longlong *)FUN_140a09850(param_1);
    if (((plVar5 == (longlong *)0x0) ||
        (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x950))(plVar5), plVar5 == (longlong *)0x0)) ||
       ((cVar4 = (**(code **)(*plVar5 + 0x780))(plVar5), cVar4 == '\0' ||
        (cVar4 = (**(code **)(*plVar5 + 0x778))(plVar5), cVar4 == '\0')))) {
      local_res10[0] = '\0';
    }
    else {
      local_res10[0] = '\x01';
    }
  }
  local_60 = local_res18;
  local_58 = local_res10;
  local_80 = local_res18;
  local_78 = local_res10;
  local_88 = param_3;
  local_70 = param_2;
  local_68 = param_3;
  FUN_1409f6f70(&local_88,*(undefined8 *)(param_1 + 0x180));
  lVar12 = *(longlong *)(param_1 + 0x200);
  lVar13 = (longlong)*(int *)(param_1 + 0x208) * 0x10 + lVar12;
  for (; lVar12 != lVar13; lVar12 = lVar12 + 0x10) {
    uVar11 = 0;
    lVar1 = *(longlong *)(lVar12 + 8);
    if (lVar1 != 0) {
      plVar5 = *(longlong **)(lVar1 + 0x50);
      uVar9 = (longlong)*(int *)(lVar1 + 0x58) & 0x1fffffffffffffff;
      if (plVar5 + *(int *)(lVar1 + 0x58) < plVar5) {
        uVar9 = uVar11;
      }
      if (uVar9 != 0) {
        do {
          lVar1 = *plVar5;
          if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x30), local_res20 = lVar1, lVar2 != 0)
             ) {
            if (local_res10[0] == '\0') {
              if (DAT_146865cf0 != DAT_146865cf0 + DAT_146865cf8) {
                piVar6 = DAT_146865cf0;
                do {
                  if (*piVar6 == *(int *)(lVar2 + 0x28)) goto LAB_140a052bb;
                  piVar6 = piVar6 + 1;
                } while (piVar6 != DAT_146865cf0 + DAT_146865cf8);
              }
              for (plVar7 = DAT_146865d00; plVar7 != DAT_146865d00 + DAT_146865d08;
                  plVar7 = plVar7 + 1) {
                if (*plVar7 == CONCAT44(*(undefined4 *)(lVar2 + 0x28),*(undefined4 *)(lVar1 + 0x28))
                   ) goto LAB_140a052bb;
              }
            }
            if ((local_res18[0] == '\0') && (DAT_146865ce0 != DAT_146865ce0 + DAT_146865ce8)) {
              piVar6 = DAT_146865ce0;
              do {
                if (*piVar6 == *(int *)(lVar2 + 0x28)) goto LAB_140a052bb;
                piVar6 = piVar6 + 1;
              } while (piVar6 != DAT_146865ce0 + DAT_146865ce8);
            }
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_3,&local_res20);
          }
LAB_140a052bb:
          plVar5 = plVar5 + 1;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar9);
      }
    }
    param_1 = local_res8;
  }
  FUN_1409f6cf0(&local_70,*(undefined8 *)(param_1 + 0x1c8));
  FUN_1409f6cf0(&local_70,*(undefined8 *)(param_1 + 0x1d0));
  if (*(char *)(param_1 + 0x24b) == '\0') {
    cVar4 = *(char *)(param_1 + 0x24a);
joined_r0x000140a053a4:
    if (cVar4 != '\0') {
      FUN_1409f6cf0(&local_70,*(undefined8 *)(param_1 + 0x1d8));
      FUN_1409f6cf0(&local_70,*(undefined8 *)(param_1 + 0x1e0));
      FUN_1409f6cf0(&local_70,*(undefined8 *)(param_1 + 0x1e8));
    }
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x328);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x118);
      if (plVar5 == (longlong *)0x0) {
LAB_140a05359:
        plVar5 = (longlong *)0x0;
      }
      else {
        lVar12 = FUN_1430b3b80();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
            != lVar12 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_140a05359;
      }
      *(longlong **)(param_1 + 0x328) = plVar5;
      if (plVar5 != (longlong *)0x0) goto LAB_140a05367;
    }
    else {
LAB_140a05367:
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x950))(plVar5);
      if ((plVar5 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar5 + 0x780))(plVar5), cVar4 != '\0')) {
        cVar4 = (**(code **)(*plVar5 + 0x778))(plVar5);
        goto joined_r0x000140a053a4;
      }
    }
  }
  FUN_1409f6cf0(&local_70,*(undefined8 *)(param_1 + 0x1f0));
  FUN_1409f6cf0(&local_70,*(undefined8 *)(param_1 + 0x1f8));
  lVar13 = *(longlong *)(param_1 + 0x1b0);
  lVar12 = lVar13 + (longlong)*(int *)(param_1 + 0x1b8) * 0x28;
  for (; lVar13 != lVar12; lVar13 = lVar13 + 0x28) {
    lVar1 = *(longlong *)(lVar13 + 8);
    if (lVar1 != 0) {
      local_res20 = lVar1;
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,&local_res20);
      uVar9 = 0;
      plVar5 = *(longlong **)(lVar1 + 0x50);
      uVar11 = (longlong)*(int *)(lVar1 + 0x58) & 0x1fffffffffffffff;
      if (plVar5 + *(int *)(lVar1 + 0x58) < plVar5) {
        uVar11 = uVar9;
      }
      if (uVar11 != 0) {
        do {
          local_res20 = *plVar5;
          if ((local_res20 != 0) && (lVar1 = *(longlong *)(local_res20 + 0x30), lVar1 != 0)) {
            if (local_res10[0] == '\0') {
              if (DAT_146865cf0 != DAT_146865cf0 + DAT_146865cf8) {
                piVar6 = DAT_146865cf0;
                do {
                  if (*piVar6 == *(int *)(lVar1 + 0x28)) goto LAB_140a0551b;
                  piVar6 = piVar6 + 1;
                } while (piVar6 != DAT_146865cf0 + DAT_146865cf8);
              }
              for (plVar7 = DAT_146865d00; plVar7 != DAT_146865d00 + DAT_146865d08;
                  plVar7 = plVar7 + 1) {
                if (*plVar7 ==
                    CONCAT44(*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(local_res20 + 0x28)))
                goto LAB_140a0551b;
              }
            }
            if ((local_res18[0] == '\0') && (DAT_146865ce0 != DAT_146865ce0 + DAT_146865ce8)) {
              piVar6 = DAT_146865ce0;
              do {
                if (*piVar6 == *(int *)(lVar1 + 0x28)) goto LAB_140a0551b;
                piVar6 = piVar6 + 1;
              } while (piVar6 != DAT_146865ce0 + DAT_146865ce8);
            }
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_3,&local_res20);
          }
LAB_140a0551b:
          plVar5 = plVar5 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar11);
      }
    }
    lVar1 = *(longlong *)(lVar13 + 0x10);
    local_res20 = lVar1;
    if (lVar1 != 0) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,&local_res20);
      uVar9 = 0;
      plVar5 = *(longlong **)(lVar1 + 0x50);
      uVar11 = (longlong)*(int *)(lVar1 + 0x58) & 0x1fffffffffffffff;
      if (plVar5 + *(int *)(lVar1 + 0x58) < plVar5) {
        uVar11 = uVar9;
      }
      if (uVar11 != 0) {
        do {
          lVar1 = *plVar5;
          if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x30), local_res20 = lVar1, lVar2 != 0)
             ) {
            if (local_res10[0] == '\0') {
              if (DAT_146865cf0 != DAT_146865cf0 + DAT_146865cf8) {
                piVar6 = DAT_146865cf0;
                do {
                  if (*piVar6 == *(int *)(lVar2 + 0x28)) goto LAB_140a0562d;
                  piVar6 = piVar6 + 1;
                } while (piVar6 != DAT_146865cf0 + DAT_146865cf8);
              }
              for (plVar7 = DAT_146865d00; plVar7 != DAT_146865d00 + DAT_146865d08;
                  plVar7 = plVar7 + 1) {
                if (*plVar7 == CONCAT44(*(undefined4 *)(lVar2 + 0x28),*(undefined4 *)(lVar1 + 0x28))
                   ) goto LAB_140a0562d;
              }
            }
            if ((local_res18[0] == '\0') && (DAT_146865ce0 != DAT_146865ce0 + DAT_146865ce8)) {
              piVar6 = DAT_146865ce0;
              do {
                if (*piVar6 == *(int *)(lVar2 + 0x28)) goto LAB_140a0562d;
                piVar6 = piVar6 + 1;
              } while (piVar6 != DAT_146865ce0 + DAT_146865ce8);
            }
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_3,&local_res20);
          }
LAB_140a0562d:
          plVar5 = plVar5 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar11);
      }
    }
    param_1 = local_res8;
  }
  if (*(char *)(param_1 + 0x24b) == '\0') {
    cVar4 = *(char *)(param_1 + 0x24a);
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x328);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x118);
      if (plVar5 == (longlong *)0x0) {
LAB_140a056a9:
        plVar5 = (longlong *)0x0;
      }
      else {
        lVar12 = FUN_1430b3b80();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
            != lVar12 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_140a056a9;
      }
      *(longlong **)(param_1 + 0x328) = plVar5;
      if (plVar5 == (longlong *)0x0) goto LAB_140a05848;
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x950))();
    if ((plVar5 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar5 + 0x780))(), cVar4 == '\0'))
    goto LAB_140a05848;
    cVar4 = (**(code **)(*plVar5 + 0x778))();
  }
  if (cVar4 != '\0') {
    plVar7 = *(longlong **)(param_1 + 0x238);
    plVar5 = plVar7 + *(int *)(param_1 + 0x240);
    for (; plVar7 != plVar5; plVar7 = plVar7 + 1) {
      lVar12 = *plVar7;
      local_res20 = lVar12;
      if (lVar12 != 0) {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,&local_res20);
        uVar9 = 0;
        plVar10 = *(longlong **)(lVar12 + 0x50);
        uVar11 = (longlong)*(int *)(lVar12 + 0x58) & 0x1fffffffffffffff;
        if (plVar10 + *(int *)(lVar12 + 0x58) < plVar10) {
          uVar11 = uVar9;
        }
        if (uVar11 != 0) {
          do {
            lVar12 = *plVar10;
            if ((lVar12 != 0) &&
               (lVar13 = *(longlong *)(lVar12 + 0x30), local_res20 = lVar12, lVar13 != 0)) {
              if (local_res10[0] == '\0') {
                if (DAT_146865cf0 != DAT_146865cf0 + DAT_146865cf8) {
                  piVar6 = DAT_146865cf0;
                  do {
                    if (*piVar6 == *(int *)(lVar13 + 0x28)) goto LAB_140a0582b;
                    piVar6 = piVar6 + 1;
                  } while (piVar6 != DAT_146865cf0 + DAT_146865cf8);
                }
                for (plVar8 = DAT_146865d00; plVar8 != DAT_146865d00 + DAT_146865d08;
                    plVar8 = plVar8 + 1) {
                  if (*plVar8 ==
                      CONCAT44(*(undefined4 *)(lVar13 + 0x28),*(undefined4 *)(lVar12 + 0x28)))
                  goto LAB_140a0582b;
                }
              }
              if ((local_res18[0] == '\0') && (DAT_146865ce0 != DAT_146865ce0 + DAT_146865ce8)) {
                piVar6 = DAT_146865ce0;
                do {
                  if (*piVar6 == *(int *)(lVar13 + 0x28)) goto LAB_140a0582b;
                  piVar6 = piVar6 + 1;
                } while (piVar6 != DAT_146865ce0 + DAT_146865ce8);
              }
              TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
              AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_3,&local_res20);
            }
LAB_140a0582b:
            plVar10 = plVar10 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar11);
        }
      }
    }
  }
LAB_140a05848:
  plVar7 = (longlong *)*param_2;
  plVar5 = plVar7 + (int)param_2[1];
  for (; plVar7 != plVar5; plVar7 = plVar7 + 1) {
    lVar12 = *plVar7;
    if (lVar12 != 0) {
      plVar10 = *(longlong **)(lVar12 + 0x50);
      uVar9 = 0;
      uVar11 = (longlong)*(int *)(lVar12 + 0x58) & 0x1fffffffffffffff;
      if (plVar10 + *(int *)(lVar12 + 0x58) < plVar10) {
        uVar11 = uVar9;
      }
      if (uVar11 != 0) {
        do {
          lVar12 = *plVar10;
          if ((lVar12 != 0) &&
             (lVar13 = *(longlong *)(lVar12 + 0x30), local_res20 = lVar12, lVar13 != 0)) {
            if (local_res10[0] == '\0') {
              if (DAT_146865cf0 != DAT_146865cf0 + DAT_146865cf8) {
                piVar6 = DAT_146865cf0;
                do {
                  if (*piVar6 == *(int *)(lVar13 + 0x28)) goto LAB_140a0595b;
                  piVar6 = piVar6 + 1;
                } while (piVar6 != DAT_146865cf0 + DAT_146865cf8);
              }
              for (plVar8 = DAT_146865d00; plVar8 != DAT_146865d00 + DAT_146865d08;
                  plVar8 = plVar8 + 1) {
                if (*plVar8 ==
                    CONCAT44(*(undefined4 *)(lVar13 + 0x28),*(undefined4 *)(lVar12 + 0x28)))
                goto LAB_140a0595b;
              }
            }
            if ((local_res18[0] == '\0') && (DAT_146865ce0 != DAT_146865ce0 + DAT_146865ce8)) {
              piVar6 = DAT_146865ce0;
              do {
                if (*piVar6 == *(int *)(lVar13 + 0x28)) goto LAB_140a0595b;
                piVar6 = piVar6 + 1;
              } while (piVar6 != DAT_146865ce0 + DAT_146865ce8);
            }
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_3,&local_res20);
          }
LAB_140a0595b:
          plVar10 = plVar10 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar11);
      }
    }
  }
  lVar12 = *(longlong *)(local_res8 + 0x230);
  if (lVar12 != 0) {
    plVar5 = *(longlong **)(lVar12 + 0x2c8);
    uVar11 = 0;
    uVar9 = (longlong)*(int *)(lVar12 + 0x2d0) & 0x1fffffffffffffff;
    if (plVar5 + *(int *)(lVar12 + 0x2d0) < plVar5) {
      uVar9 = 0;
    }
    if (uVar9 != 0) {
      do {
        local_res8 = *plVar5;
        if ((local_res8 != 0) && (lVar12 = *(longlong *)(local_res8 + 0x30), lVar12 != 0)) {
          if (local_res10[0] == '\0') {
            if (DAT_146865cf0 != DAT_146865cf0 + DAT_146865cf8) {
              piVar6 = DAT_146865cf0;
              do {
                if (*piVar6 == *(int *)(lVar12 + 0x28)) goto LAB_140a05a8f;
                piVar6 = piVar6 + 1;
              } while (piVar6 != DAT_146865cf0 + DAT_146865cf8);
            }
            for (plVar7 = DAT_146865d00; plVar7 != DAT_146865d00 + DAT_146865d08;
                plVar7 = plVar7 + 1) {
              if (*plVar7 ==
                  CONCAT44(*(undefined4 *)(lVar12 + 0x28),*(undefined4 *)(local_res8 + 0x28)))
              goto LAB_140a05a8f;
            }
          }
          if ((local_res18[0] == '\0') && (DAT_146865ce0 != DAT_146865ce0 + DAT_146865ce8)) {
            piVar6 = DAT_146865ce0;
            do {
              if (*piVar6 == *(int *)(lVar12 + 0x28)) goto LAB_140a05a8f;
              piVar6 = piVar6 + 1;
            } while (piVar6 != DAT_146865ce0 + DAT_146865ce8);
          }
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_3,&local_res8);
        }
LAB_140a05a8f:
        plVar5 = plVar5 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar9);
    }
  }
  return;
}



// FUNCTION 140a05ac0 FUN_140a05ac0 body=439 status=ok
// SIG undefined FUN_140a05ac0(void)

void FUN_140a05ac0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  if (*(char *)(param_1 + 0x24b) == '\0') {
    local_res8[0] = *(undefined1 *)(param_1 + 0x24a);
  }
  else {
    plVar2 = (longlong *)FUN_140a09850();
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x950))(plVar2);
      if (plVar2 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar2 + 0x780))(plVar2);
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*plVar2 + 0x778))(plVar2);
          if (cVar1 != '\0') {
            local_res8[0] = 1;
            goto LAB_140a05b35;
          }
        }
      }
    }
    local_res8[0] = 0;
  }
LAB_140a05b35:
  if (*(char *)(param_1 + 0x24b) == '\0') {
    local_res10[0] = *(undefined1 *)(param_1 + 0x24a);
  }
  else {
    plVar2 = (longlong *)FUN_140a09850(param_1);
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x950))(plVar2);
      if (plVar2 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar2 + 0x780))(plVar2);
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*plVar2 + 0x778))(plVar2);
          if (cVar1 != '\0') {
            local_res10[0] = 1;
            goto LAB_140a05b92;
          }
        }
      }
    }
    local_res10[0] = 0;
  }
LAB_140a05b92:
  local_28 = local_res8;
  local_20 = local_res10;
  local_38 = param_2;
  local_30 = param_3;
  FUN_1409f6cf0(&local_38,*(undefined8 *)(param_1 + 0x380));
  FUN_140a05070(param_1,param_2,param_3);
  if (*(char *)(param_1 + 0x24b) == '\0') {
    cVar1 = *(char *)(param_1 + 0x24a);
  }
  else {
    plVar2 = (longlong *)FUN_140a09850(param_1);
    if (plVar2 == (longlong *)0x0) goto LAB_140a05c52;
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x950))(plVar2);
    if (plVar2 == (longlong *)0x0) goto LAB_140a05c52;
    cVar1 = (**(code **)(*plVar2 + 0x780))(plVar2);
    if (cVar1 == '\0') goto LAB_140a05c52;
    cVar1 = (**(code **)(*plVar2 + 0x778))(plVar2);
  }
  if (cVar1 != '\0') {
    FUN_1409f6cf0(&local_38,*(undefined8 *)(param_1 + 0x388));
    FUN_1409f6cf0(&local_38,*(undefined8 *)(param_1 + 0x390));
  }
LAB_140a05c52:
  if (*(char *)(param_1 + 0x368) != '\0') {
    FUN_1409f6cf0(&local_38,*(undefined8 *)(param_1 + 0x370));
  }
  return;
}



// FUNCTION 140a05c80 FUN_140a05c80 body=319 status=ok
// SIG undefined FUN_140a05c80(void)

void FUN_140a05c80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  longlong local_28 [2];
  
  plVar1 = (longlong *)(param_1 + 0x410);
  uVar9 = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  if (*(int *)(param_1 + 0x41c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  lVar6 = *(longlong *)(param_1 + 0x420);
  if (lVar6 != 0) {
    plVar7 = *(longlong **)(lVar6 + 0x70);
    plVar2 = plVar7 + (longlong)*(int *)(lVar6 + 0x78) * 3;
    if (plVar7 != plVar2) {
      while (*plVar7 != param_2) {
        plVar7 = plVar7 + 3;
        if (plVar7 == plVar2) {
          return;
        }
      }
      puVar10 = (undefined8 *)plVar7[1];
      uVar11 = (longlong)(int)plVar7[2] & 0x1fffffffffffffff;
      if (puVar10 + (int)plVar7[2] < puVar10) {
        uVar11 = uVar9;
      }
      if (uVar11 != 0) {
        do {
          local_res8 = *puVar10;
          puVar4 = (undefined8 *)FName::ToString(&local_res8,local_28);
          if (*(int *)(puVar4 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar4;
          }
          uVar5 = UObject::GetPrivateStaticClass();
          lVar6 = FUN_141799410(uVar5,0,puVar8,0);
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          if (lVar6 != 0) {
            iVar3 = *(int *)(param_1 + 0x418);
            *(int *)(param_1 + 0x418) = iVar3 + 1;
            if (*(int *)(param_1 + 0x41c) < iVar3 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
            }
            *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar6;
          }
          puVar10 = puVar10 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar11);
      }
    }
  }
  return;
}



// FUNCTION 140a05dc0 FUN_140a05dc0 body=106 status=ok
// SIG undefined FUN_140a05dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_140a05dc0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146865d18) {
    _Init_thread_header(&DAT_146865d18);
    if (DAT_146865d18 == -1) {
      DAT_146865d10 = 0xffffffff;
      _DAT_146865d14 = 1;
      _Init_thread_footer(&DAT_146865d18);
    }
  }
  return &DAT_146865d10;
}



// FUNCTION 140a05e30 FUN_140a05e30 body=54 status=ok
// SIG undefined FUN_140a05e30(void)

undefined8 FUN_140a05e30(void)

{
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    return *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x4f8);
  }
  return 0;
}



// FUNCTION 140a05e70 thunk_FUN_1422ca050 body=5 status=ok
// SIG undefined thunk_FUN_1422ca050(void)

void thunk_FUN_1422ca050(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(DAT_146b17150 + 0x2c0) == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0xbb,L"Cannot use AssetManager if no AssetManagerClassName is defined!");
    FDebug::AssertFailed
              (&DAT_1450279c6,"Unknown",0xbb,
               L"Cannot use AssetManager if no AssetManagerClassName is defined!");
    uVar1 = GetTransientPackage();
    FUN_1417846f0(uVar1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar2 = FUN_1428fbb40();
    FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  }
  return;
}



// FUNCTION 140a05e80 thunk_FUN_142da89b0 body=5 status=ok
// SIG undefined thunk_FUN_142da89b0(void)

undefined8 thunk_FUN_142da89b0(longlong param_1)

{
  if (param_1 != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      return *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0xd0);
    }
  }
  return 0;
}



// FUNCTION 140a05e90 FUN_140a05e90 body=105 status=ok
// SIG undefined FUN_140a05e90(void)

void FUN_140a05e90(longlong param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  
  FUN_1423d0500();
  lVar1 = *(longlong *)(param_1 + 0x738);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x758) == '\0')) {
    *param_3 = *(float *)(lVar1 + 0x210) + *param_3;
    param_3[1] = *(float *)(lVar1 + 0x214) + param_3[1];
    param_3[2] = *(float *)(lVar1 + 0x218) + param_3[2];
  }
  return;
}



// FUNCTION 140a05f00 FUN_140a05f00 body=318 status=ok
// SIG undefined FUN_140a05f00(void)

undefined8 * FUN_140a05f00(longlong *param_1,undefined8 *param_2,float *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_18 [16];
  
  if (((longlong *)param_1[0xda] == (longlong *)0x0) ||
     (cVar2 = (**(code **)(*(longlong *)param_1[0xda] + 0x3f8))(), cVar2 == '\0')) {
    if (param_1[0xbc] == 0) {
      if (param_1[0xe7] == 0) {
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x720))(param_1,local_18);
      }
      else {
        lVar4 = FUN_1430e2e50();
        if (lVar4 == 0) {
          return param_2;
        }
        FUN_142ced030(lVar4,&local_28,1);
        local_38 = local_28 - *param_3;
        local_34 = local_24 - param_3[1];
        local_30 = local_20 - param_3[2];
        puVar3 = (undefined8 *)FVector::Rotation(&local_38,local_18);
      }
    }
    else {
      FUN_142ced030(param_1[0xbc],&local_38,1);
      local_28 = local_38 - *param_3;
      local_24 = local_34 - param_3[1];
      local_20 = local_30 - param_3[2];
      puVar3 = (undefined8 *)FVector::Rotation(&local_28,local_18);
    }
  }
  else {
    puVar3 = (undefined8 *)FUN_14077bd60(param_1[0xda],&local_28);
  }
  uVar1 = *(undefined4 *)(puVar3 + 1);
  *param_2 = *puVar3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140a06040 FUN_140a06040 body=79 status=ok
// SIG undefined FUN_140a06040(void)

longlong FUN_140a06040(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = SThrobber::GetPieceBrush();
  if (lVar1 == 0) {
    if (*(longlong *)(param_1 + 0x718) != 0) {
      lVar1 = FUN_141224040(*(longlong *)(param_1 + 0x718),param_1);
      return lVar1;
    }
    if (*(longlong **)(param_1 + 0x730) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140a06080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x678))();
      return lVar1;
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 140a06090 FUN_140a06090 body=132 status=ok
// SIG undefined FUN_140a06090(void)

void FUN_140a06090(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  lVar1 = FUN_1407c7450(*(undefined8 *)(param_1 + 0x118));
  if (lVar1 != 0) {
    FUN_1407c7790(lVar1,local_res8,*(undefined8 *)(param_1 + 0x118));
    lVar1 = FUN_1407cb5f0(lVar1,local_res8);
    if (lVar1 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(lVar1 + 0x118);
    }
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_142dfdf30();
      lVar1 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar2);
      if (lVar1 != 0) {
        return;
      }
    }
  }
  FUN_142cc1010(param_1);
  return;
}



// FUNCTION 140a06120 FUN_140a06120 body=120 status=ok
// SIG undefined FUN_140a06120(void)

undefined8 * FUN_140a06120(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = FUN_140c13370();
  iVar2 = iVar2 + -1;
  iVar4 = *(int *)(param_1 + 0x1f0) + -1;
  if (iVar2 < 0) {
    iVar4 = 0;
  }
  else {
    if (iVar2 < iVar4) {
      iVar4 = iVar2;
    }
    if (iVar4 < 0) goto LAB_140a06183;
  }
  if ((iVar4 < *(int *)(param_1 + 0x1f0)) &&
     (lVar3 = (longlong)iVar4 * 0xb0 + *(longlong *)(param_1 + 0x1e8), lVar3 != 0)) {
    uVar1 = *(undefined8 *)(lVar3 + 0x98);
    *param_2 = *(undefined8 *)(lVar3 + 0x90);
    param_2[1] = uVar1;
    return param_2;
  }
LAB_140a06183:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140a061a0 FUN_140a061a0 body=457 status=ok
// SIG undefined FUN_140a061a0(void)

longlong * FUN_140a061a0(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  longlong local_38;
  longlong *local_30;
  
  plVar7 = *(longlong **)(param_1 + 0x4a0);
  plVar9 = (longlong *)0x0;
  plVar10 = plVar7 + (longlong)*(int *)(param_1 + 0x4a8) * 2;
  for (; plVar8 = plVar9, plVar7 != plVar10; plVar7 = plVar7 + 2) {
    if ((*plVar7 != 0) && (plVar7[1] != 0)) {
      piVar1 = (int *)(plVar7[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        plVar8 = (longlong *)plVar7[1];
        plVar5 = plVar8;
        plVar6 = plVar9;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          iVar4 = (int)plVar8[1];
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(plVar8 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (plVar5 = plVar9, !bVar11) {
            LOCK();
            bVar11 = iVar4 == (int)plVar8[1];
            if (bVar11) {
              *(int *)(plVar8 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar11) {
              plVar5 = plVar8;
              plVar6 = (longlong *)*plVar7;
              break;
            }
            LOCK();
            iVar4 = (int)plVar8[1];
            bVar11 = iVar4 == 0;
            if (bVar11) {
              *(int *)(plVar8 + 1) = 0;
              iVar4 = 0;
            }
            UNLOCK();
          }
        }
        lVar2 = plVar6[2];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar5 + 1;
          lVar3 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
        plVar8 = plVar7;
        if (lVar2 == param_3) break;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (plVar8 != (longlong *)0x0) {
    local_30 = (longlong *)plVar8[1];
    local_38 = 0;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)local_30[1];
      bVar11 = iVar4 == 0;
      if (bVar11) {
        *(int *)(local_30 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar11) {
        LOCK();
        bVar11 = iVar4 == (int)local_30[1];
        if (bVar11) {
          *(int *)(local_30 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar11) {
          if (local_30 != (longlong *)0x0) {
            local_38 = *plVar8;
          }
          goto LAB_140a062fb;
        }
        LOCK();
        iVar4 = (int)local_30[1];
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(local_30 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
      local_30 = (longlong *)0x0;
    }
LAB_140a062fb:
    if (param_2 != &local_38) {
      *param_2 = local_38;
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_30);
    }
    plVar7 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_30 + 1;
      lVar2 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140a06370 FUN_140a06370 body=150 status=ok
// SIG undefined FUN_140a06370(void)

longlong FUN_140a06370(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
  
  if (*(int *)(param_1 + 0x390) < 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x388) + 0x410))();
  }
  while( true ) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x338,local_res8,lVar2);
    if (((local_res8[0] != -1) &&
        (lVar1 = *(longlong *)(param_1 + 0x338) + (longlong)local_res8[0] * 0x18, lVar1 != 0)) &&
       (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) break;
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = *(longlong *)(lVar2 + 0x50);
  }
  return lVar1;
}



// FUNCTION 140a06410 FUN_140a06410 body=235 status=ok
// SIG undefined FUN_140a06410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a06410(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x68) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x68) + 0x418) == '\x01')) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146865dc8) {
      _Init_thread_header(&DAT_146865dc8);
      if (DAT_146865dc8 == -1) {
        plVar1 = (longlong *)FUN_142df90a0();
        lVar2 = plVar1[0x1f];
        if (lVar2 == 0) {
          (**(code **)(*plVar1 + 0x368))(plVar1);
          lVar2 = plVar1[0x1f];
        }
        DAT_146865db8 = *(char *)(lVar2 + 0x48);
        _DAT_146865dc0 = *(undefined8 *)(lVar2 + 0x50);
        _Init_thread_footer(&DAT_146865dc8);
      }
    }
    if ((DAT_146865db8 == *param_2) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x6d8), lVar2 != 0)) {
      return *(undefined8 *)(lVar2 + 0xd70);
    }
  }
  return 0;
}



// FUNCTION 140a06500 FUN_140a06500 body=51 status=ok
// SIG undefined FUN_140a06500(void)

longlong FUN_140a06500(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 800);
  if (lVar1 == 0) {
    if (param_2 != '\0') {
      lVar1 = FUN_140a19170();
      *(longlong *)(param_1 + 800) = lVar1;
      return lVar1;
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 140a06550 FUN_140a06550 body=47 status=ok
// SIG undefined FUN_140a06550(void)

float FUN_140a06550(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0xaf0) != 0) && (*(longlong *)(param_1 + 0xb30) != 0)) {
    return *(float *)(*(longlong *)(param_1 + 0xb30) + 0xda0) *
           *(float *)(*(longlong *)(param_1 + 0xaf0) + 0x30);
  }
  return 2000.0;
}



// FUNCTION 140a06580 FUN_140a06580 body=69 status=ok
// SIG undefined FUN_140a06580(void)

undefined8 * FUN_140a06580(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x1900))) {
    lVar1 = *(longlong *)(param_1 + 0x18f8);
    if (*(longlong *)(param_1 + 0x18f8) == 0) {
      lVar1 = param_1 + 0x1478;
    }
    *param_2 = *(undefined8 *)(lVar1 + (longlong)param_3 * 0x18);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 140a065d0 FUN_140a065d0 body=178 status=ok
// SIG undefined FUN_140a065d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_140a065d0(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if ((param_3 < 0) || ((int)param_1[800] <= param_3)) {
    lVar1 = param_1[0x43];
    *param_2 = param_1[0x42];
    param_2[1] = lVar1;
    lVar1 = param_1[0x45];
    param_2[2] = param_1[0x44];
    param_2[3] = lVar1;
    lVar1 = param_1[0x47];
    param_2[4] = param_1[0x46];
    param_2[5] = lVar1;
  }
  else {
    plVar2 = (longlong *)param_1[799];
    if ((longlong *)param_1[799] == (longlong *)0x0) {
      plVar2 = param_1 + 0x28f;
    }
    (**(code **)(*param_1 + 0x420))(param_1,&local_48,plVar2[(longlong)param_3 * 3],0);
    *param_2 = local_48;
    param_2[1] = lStack_40;
    param_2[2] = local_38;
    param_2[3] = lStack_30;
    param_2[4] = 0x3f8000003f800000;
    param_2[5] = 0x3f800000;
  }
  return param_2;
}



// FUNCTION 140a06690 FUN_140a06690 body=1127 status=ok
// SIG undefined FUN_140a06690(void)

void FUN_140a06690(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 *in_stack_fffffffffffffe68;
  undefined8 *in_stack_fffffffffffffe70;
  undefined8 *in_stack_fffffffffffffe78;
  float local_158;
  float local_154;
  float local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  iVar5 = 0;
  if (0 < (int)param_2[1]) {
    uVar4 = 1;
    lVar6 = 0;
    do {
      if ((param_4 & uVar4) != 0) {
        lVar3 = *(longlong *)(lVar6 + *param_2);
        FLinearColor::FLinearColor(local_e8,param_1 + 0x3b0);
        uVar1 = *(uint *)(param_1 + 0x18);
        GetViewSelectionColor
                  (&local_f8,local_e8,lVar3,(uVar1 & 0x300) != 0,
                   CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe68 >> 8),(char)(uVar1 >> 10)) &
                   0xffffffffffffff01,(ulonglong)in_stack_fffffffffffffe70 & 0xffffffffffffff00,
                   CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe78 >> 8),(char)(uVar1 >> 9)) &
                   0xffffffffffffff01);
        if (*(char *)(param_1 + 0x3b8) == '\0') {
LAB_140a068f1:
          local_148 = *(undefined4 *)(param_1 + 0xb0);
          local_144 = *(undefined4 *)(param_1 + 0xb4);
          local_140 = *(undefined4 *)(param_1 + 0xb8);
          cVar2 = FUN_140a0acc0(param_1,(float *)(lVar3 + 0x900),lVar3 + 0x90c,&local_148);
          if (cVar2 != '\0') {
            FLinearColor::FLinearColor(&local_d8,&DAT_1464aa73c);
            local_f8 = local_d8;
            uStack_f0 = uStack_d0;
          }
        }
        else {
          fVar10 = *(float *)(param_1 + 0x3bc) - *(float *)(lVar3 + 0x900);
          fVar14 = *(float *)(param_1 + 0x3c0) - *(float *)(lVar3 + 0x904);
          fVar12 = *(float *)(param_1 + 0x3c4) - *(float *)(lVar3 + 0x908);
          fVar7 = fVar14 * fVar14 + fVar10 * fVar10 + fVar12 * fVar12;
          fVar11 = fVar10;
          fVar13 = fVar12;
          fVar8 = fVar14;
          if ((fVar7 != 1.0) &&
             (fVar11 = DAT_1468b5d90, fVar13 = DAT_1468b5d98, fVar8 = DAT_1468b5d94, 1e-08 <= fVar7)
             ) {
            auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
            fVar8 = auVar9._0_4_;
            fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
            fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
            fVar11 = fVar10 * fVar8;
            fVar13 = fVar12 * fVar8;
            fVar8 = fVar14 * fVar8;
          }
          FRotator::Vector(lVar3 + 0x90c,&local_158);
          fVar11 = fVar11 * local_158 + local_154 * fVar8 + fVar13 * local_150;
          if (-1.0 <= fVar11) {
            if (1.0 <= fVar11) {
              fVar11 = 1.0;
            }
          }
          else {
            fVar11 = -1.0;
          }
          fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
          if (fVar11 * 57.295776 < *(float *)(param_1 + 0x3b4) ||
              fVar11 * 57.295776 == *(float *)(param_1 + 0x3b4)) goto LAB_140a068f1;
        }
        local_108 = *(undefined8 *)(param_1 + 0x3a4);
        local_138 = *(undefined4 *)(param_1 + 0xa4);
        local_100 = *(undefined4 *)(param_1 + 0x3ac);
        local_13c = *(undefined4 *)(param_1 + 0xa0);
        local_134 = *(undefined4 *)(param_1 + 0xa8);
        local_130 = *(undefined4 *)(param_1 + 0x90);
        lVar3 = *(longlong *)(param_5 + 0x88);
        if (*(longlong *)(param_5 + 0x88) == 0) {
          lVar3 = param_5 + 0x78;
        }
        local_12c = *(undefined4 *)(param_1 + 0x94);
        local_128 = *(undefined4 *)(param_1 + 0x98);
        local_124 = *(undefined4 *)(param_1 + 0x80);
        local_120 = *(undefined4 *)(param_1 + 0x84);
        in_stack_fffffffffffffe78 = &local_f8;
        in_stack_fffffffffffffe70 = &local_108;
        local_11c = *(undefined4 *)(param_1 + 0x88);
        local_118 = *(undefined4 *)(param_1 + 0xb0);
        in_stack_fffffffffffffe68 = &local_13c;
        local_114 = *(undefined4 *)(param_1 + 0xb4);
        local_110 = *(undefined4 *)(param_1 + 0xb8);
        FUN_142703f30(*(undefined8 *)(lVar3 + lVar6),&local_118,&local_124,&local_130,
                      in_stack_fffffffffffffe68,in_stack_fffffffffffffe70,in_stack_fffffffffffffe78,
                      0,0,0,0);
      }
      iVar5 = iVar5 + 1;
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      lVar6 = lVar6 + 8;
    } while (iVar5 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 140a06b00 FUN_140a06b00 body=166 status=ok
// SIG undefined FUN_140a06b00(void)

ulonglong FUN_140a06b00(longlong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 local_res8 [32];
  
  lVar6 = *(longlong *)(param_1 + 0x7b8);
  if ((lVar6 != 0) && (*(char *)(param_1 + 0x790) != '\0')) {
    lVar2 = UInputKeySelector::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar5 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar1) ||
       (uVar5 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar5 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      plVar3 = (longlong *)UTBScriptedAnimInstance::GetCurrentAnimName(lVar6,local_res8);
      if (*plVar3 != 0) {
        lVar4 = FUN_142e49950();
        lVar6 = *plVar3;
        for (lVar2 = lVar6; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar4) goto LAB_140a06b90;
        }
      }
      lVar6 = 0;
LAB_140a06b90:
      uVar5 = FUN_140a8bbe0(lVar6);
      return uVar5;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a06bb0 FUN_140a06bb0 body=379 status=ok
// SIG undefined FUN_140a06bb0(void)

void FUN_140a06bb0(longlong param_1,byte *param_2,byte *param_3)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar1 = FUN_140c13370();
  iVar6 = 0;
  iVar1 = iVar1 + -1;
  iVar4 = *(int *)(param_1 + 0x1f0) + -1;
  if (-1 < iVar1) {
    iVar6 = iVar4;
    if (iVar1 < iVar4) {
      iVar6 = iVar1;
    }
    if (iVar6 < 0) {
      return;
    }
  }
  if (((iVar6 < *(int *)(param_1 + 0x1f0)) &&
      (pbVar7 = (byte *)((longlong)iVar6 * 0xb0 + *(longlong *)(param_1 + 0x1e8)),
      pbVar7 != (byte *)0x0)) && ((*pbVar7 & 8) != 0)) {
    if (param_2 != pbVar7 + 0x68) {
      lVar2 = *(longlong *)param_2;
      for (iVar4 = *(int *)(param_2 + 8); iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*(longlong *)(lVar2 + 0x10) != 0) {
          FMemory::Free();
        }
        TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
        ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(lVar2);
        lVar2 = lVar2 + 0x20;
      }
      iVar4 = *(int *)(pbVar7 + 0x70);
      lVar2 = *(longlong *)(pbVar7 + 0x68);
      *(int *)(param_2 + 8) = iVar4;
      if ((iVar4 == 0) && (*(int *)(param_2 + 0xc) == 0)) {
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        param_2[0xe] = 0;
        param_2[0xf] = 0;
      }
      else {
        TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_2,iVar4);
        puVar3 = *(undefined8 **)param_2;
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)(lVar2 + 8);
          do {
            *puVar3 = 0;
            FUN_1409f0400(puVar3,*(undefined8 *)(puVar5 + -2),*puVar5,0,0);
            puVar3[2] = 0;
            iVar6 = puVar5[4];
            _Src = *(void **)(puVar5 + 2);
            *(int *)(puVar3 + 3) = iVar6;
            if (iVar6 == 0) {
              *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
            }
            else {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                        (puVar3 + 2,iVar6,0);
              _guard_xfg_dispatch_icall_nop((void *)puVar3[2],_Src,(longlong)iVar6 << 3);
            }
            puVar3 = puVar3 + 4;
            puVar5 = puVar5 + 8;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
    *param_3 = pbVar7[0x78];
  }
  return;
}



// FUNCTION 140a06d30 GetNumPlayerControllers body=7 status=ok
// SIG undefined GetNumPlayerControllers(void)

undefined4 UWorld::GetNumPlayerControllers(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1a8);
}



// FUNCTION 140a06d40 FUN_140a06d40 body=1669 status=ok
// SIG undefined FUN_140a06d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140a06d40(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 (*pauVar5) [16];
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 local_188 [8];
  float local_180;
  float fStack_17c;
  float local_178;
  undefined8 local_170;
  float local_168;
  float local_160;
  float fStack_15c;
  float local_158;
  float local_150;
  float fStack_14c;
  float local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [8];
  float local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined1 auStack_110 [8];
  int local_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong local_b0;
  undefined1 local_98 [128];
  
  lVar2 = param_1[2];
  pauVar5 = (undefined1 (*) [16])(lVar2 + 0x6e8);
  fVar1 = *(float *)(param_1[3] + 0xd8c);
  local_170 = 0;
  local_168 = 0.0;
  local_130 = 0xffffffffffffffff;
  local_138 = 0xffffffffffffffff;
  AREDDF_FigureSkeletalBase::GetFigureRotation_Implementation(pauVar5,local_98);
  FUN_142fa2d40(pauVar5,&local_150);
  if ((*(longlong *)(param_1[2] + 0xb30) == 0) || (*(longlong *)(param_1[2] + 0xb38) == 0)) {
    FUN_142f88c90(local_128);
    _auStack_110 = *pauVar5;
    uStack_f0 = *(undefined8 *)(lVar2 + 0x708);
    local_e8 = *(undefined8 *)(lVar2 + 0x710);
    local_b0 = param_1[1];
    local_11c = *(undefined4 *)((longlong)param_1 + 0xb4);
    uStack_100 = *(undefined8 *)(lVar2 + 0x6f8);
    local_f8 = *(undefined8 *)(lVar2 + 0x700);
    local_120 = local_148;
    uStack_e0 = *(undefined8 *)(lVar2 + 0x718);
    local_d8 = *(undefined8 *)(lVar2 + 0x720);
    uStack_c0 = *(undefined8 *)(lVar2 + 0x738);
    local_b8 = *(longlong *)(lVar2 + 0x740);
    uStack_d0 = *(undefined8 *)(lVar2 + 0x728);
    local_c8 = *(undefined8 *)(lVar2 + 0x730);
    if (auStack_110._12_4_ == -1) {
      uVar4 = FUN_142fa3070(local_b0 + 0x720,*(undefined4 *)*pauVar5,*(undefined4 *)(lVar2 + 0x6ec))
      ;
      uStack_104 = uVar4;
    }
    cVar3 = FUN_142f9b3a0(local_128,&local_170,&local_130);
    if (cVar3 == '\0') {
      *param_2 = DAT_146294aa0;
      uVar4 = DAT_146294aa8;
      *(undefined4 *)(param_2 + 1) = DAT_146294aa8;
      return (ulonglong)(uint3)((uint)uVar4 >> 8) << 8;
    }
  }
  else {
    FUN_142f88ab0(local_128);
    local_118 = *(undefined8 *)*pauVar5;
    _auStack_110 = *(undefined1 (*) [16])(lVar2 + 0x6f0);
    uStack_100 = *(undefined8 *)(lVar2 + 0x700);
    local_b8 = param_1[1];
    local_11c = *(undefined4 *)((longlong)param_1 + 0xb4);
    local_f8 = *(undefined8 *)(lVar2 + 0x708);
    uStack_f0 = *(undefined8 *)(lVar2 + 0x710);
    local_120 = local_148;
    local_e8 = *(undefined8 *)(lVar2 + 0x718);
    uStack_e0 = *(undefined8 *)(lVar2 + 0x720);
    local_d8 = *(undefined8 *)(lVar2 + 0x728);
    uStack_d0 = *(undefined8 *)(lVar2 + 0x730);
    local_c8 = *(undefined8 *)(lVar2 + 0x738);
    uStack_c0 = *(undefined8 *)(lVar2 + 0x740);
    if (*(int *)(lVar2 + 0x6f8) != 0) {
      fVar6 = *(float *)(lVar2 + 0x6ec);
      if (*(float *)(lVar2 + 0x6ec) <= *(float *)*pauVar5) {
        fVar6 = *(float *)*pauVar5;
      }
      uVar4 = FUN_142fa3010(local_b8 + 0x738,fVar6);
      local_108 = uVar4;
    }
    cVar3 = FUN_142f9e4d0(local_128,&local_170,&local_138);
    if (cVar3 == '\0') {
      *param_2 = DAT_146294aa0;
      uVar4 = DAT_146294aa8;
      *(undefined4 *)(param_2 + 1) = DAT_146294aa8;
      return (ulonglong)CONCAT31((int3)((uint)uVar4 >> 8),local_108 != -1);
    }
  }
  lVar2 = param_1[2];
  local_180 = (float)local_170 - local_150;
  fStack_17c = local_170._4_4_ - fStack_14c;
  local_178 = local_168 - local_148;
  if ((*(longlong *)(lVar2 + 0xb30) == 0) || (*(longlong *)(lVar2 + 0xb38) == 0)) {
    fVar6 = fStack_17c * fStack_17c + local_180 * local_180;
    if (fVar6 == 1.0) {
      if (local_178 != 0.0) {
        local_178 = 0.0;
      }
    }
    else if (1e-08 <= fVar6) {
      local_178 = 0.0;
      auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar7 = auVar8._0_4_;
      fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
      fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
      fStack_17c = fStack_17c * fVar7;
      local_180 = local_180 * fVar7;
    }
    else {
      local_180 = DAT_1468b5d90;
      local_178 = DAT_1468b5d98;
      fStack_17c = DAT_1468b5d94;
    }
  }
  else {
    fVar6 = local_180 * local_180 + fStack_17c * fStack_17c + local_178 * local_178;
    if (fVar6 != 1.0) {
      if (1e-08 <= fVar6) {
        auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar7 = auVar8._0_4_;
        fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
        fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
        local_178 = local_178 * fVar7;
        fStack_17c = fStack_17c * fVar7;
        local_180 = local_180 * fVar7;
      }
      else {
        local_180 = DAT_1468b5d90;
        local_178 = DAT_1468b5d98;
        fStack_17c = DAT_1468b5d94;
      }
    }
  }
  fStack_17c = local_170._4_4_ + fStack_17c * 500.0;
  local_168 = local_168 + local_178 * 500.0;
  local_180 = local_180 * 500.0 + (float)local_170;
  if ((*(longlong *)(lVar2 + 0xb30) == 0) || (*(longlong *)(lVar2 + 0xb38) == 0)) {
    local_158 = local_168 + 500.0;
    local_178 = local_168 - 500.0;
    _local_160 = CONCAT44(fStack_17c,local_180);
    local_170._0_4_ = local_180;
    local_170._4_4_ = fStack_17c;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146866038) &&
       (_Init_thread_header(&DAT_146866038), DAT_146866038 == -1)) {
      FUN_1422ffb20(&DAT_146865fc0,DAT_146865c68,local_188,0,0);
      _DAT_146865fd8 = 1;
      atexit(FUN_143e46bf0);
      _Init_thread_footer(&DAT_146866038);
    }
    _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
    local_11c = 0x3f800000;
    cVar3 = UWorld::LineTraceSingleByObjectType
                      (*param_1,local_128,&local_160,&local_180,&DAT_146294ee0,&DAT_146865fc0);
    local_180 = (float)local_170;
    fStack_17c = local_170._4_4_;
    if (cVar3 != '\0') {
      local_180 = local_118._4_4_;
      local_168 = (float)auStack_110._4_4_;
      fStack_17c = (float)auStack_110._0_4_;
    }
  }
  local_168 = fVar1 * 0.5 + local_168;
  *param_2 = CONCAT44(fStack_17c,local_180);
  *(float *)(param_2 + 1) = local_168;
  return CONCAT71((uint7)(uint3)((uint)local_168 >> 8),1);
}



// FUNCTION 140a073d0 FUN_140a073d0 body=408 status=ok
// SIG undefined FUN_140a073d0(void)

undefined8 * FUN_140a073d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 local_38;
  
  uVar2 = DAT_1464aa7b0;
  if (*(longlong *)(param_1 + 0xb40) != 0) {
    FUN_142fa2780(param_1,&local_38);
    fVar4 = local_38._4_4_ * local_38._4_4_ + (float)local_38 * (float)local_38;
    if (1e-08 < fVar4) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      local_38 = CONCAT44(local_38._4_4_ * fVar5,(float)local_38 * fVar5);
    }
    *param_2 = local_38;
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  if ((((*(longlong *)(param_1 + 0xb30) != 0) &&
       (lVar1 = *(longlong *)(param_1 + 0xb48), lVar1 != 0)) && (*(char *)(lVar1 + 0x758) == '\0'))
     && ((*(longlong *)(lVar1 + 0x738) == 0 && (*(longlong *)(lVar1 + 0x720) != 0)))) {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x720) + 0x168);
    if (lVar1 != 0) {
      puVar3 = (undefined8 *)FUN_142369f10(lVar1,&local_38);
      *param_2 = *puVar3;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar3 + 1);
      return param_2;
    }
    *param_2 = DAT_1464aa7a8;
    *(undefined4 *)(param_2 + 1) = uVar2;
    return param_2;
  }
  FUN_142fa2780(param_1,param_2);
  return param_2;
}



// FUNCTION 140a075d0 FUN_140a075d0 body=8 status=ok
// SIG undefined FUN_140a075d0(void)

undefined8 FUN_140a075d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x378);
}



// FUNCTION 140a075e0 FUN_140a075e0 body=35 status=ok
// SIG undefined FUN_140a075e0(void)

undefined1 FUN_140a075e0(longlong param_1)

{
  undefined1 uVar1;
  
  if ((*(longlong *)(param_1 + 0x390) != 0) && (*(longlong *)(param_1 + 0x398) != 0)) {
    uVar1 = FUN_140493780(*(undefined8 *)(param_1 + 0x398));
    return uVar1;
  }
  return 0;
}



// FUNCTION 140a07610 FUN_140a07610 body=232 status=ok
// SIG undefined FUN_140a07610(void)

void FUN_140a07610(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146866048) && (_Init_thread_header(&DAT_146866048), DAT_146866048 == -1))
  {
    uVar1 = AGBattleRoyaleGameState::GetPrivateStaticClass();
    AGBattleRoyaleGameState::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"UseState",1);
    DAT_146866040 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146866048);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146866040 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146866040 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146866040 + 0x30));
  }
  return;
}



// FUNCTION 140a07700 FUN_140a07700 body=232 status=ok
// SIG undefined FUN_140a07700(void)

void FUN_140a07700(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14238b980();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146865d48) && (_Init_thread_header(&DAT_146865d48), DAT_146865d48 == -1))
  {
    uVar1 = UEditableTextBoxWidgetStyle::StaticClass();
    UEditableTextBoxWidgetStyle::StaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ClientData",1);
    DAT_146865d40 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865d48);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146865d40 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146865d40 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865d40 + 0x30));
  }
  return;
}



// FUNCTION 140a077f0 FUN_140a077f0 body=232 status=ok
// SIG undefined FUN_140a077f0(void)

void FUN_140a077f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146865d90) && (_Init_thread_header(&DAT_146865d90), DAT_146865d90 == -1))
  {
    uVar1 = FUN_1413cb880();
    FUN_1413cb880();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedState",1);
    DAT_146865d88 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865d90);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146865d88 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146865d88 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865d88 + 0x30));
  }
  return;
}



// FUNCTION 140a078e0 FUN_140a078e0 body=2351 status=ok
// SIG undefined FUN_140a078e0(void)

void FUN_140a078e0(undefined8 param_1,undefined8 param_2)

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
  if ((*piVar5 < DAT_146865e68) && (_Init_thread_header(&DAT_146865e68), DAT_146865e68 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MovementMode",1);
    DAT_146865e60 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865e68);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865e60 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865e60 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865e60 + 0x30));
  }
  if ((*piVar5 < DAT_146865e78) && (_Init_thread_header(&DAT_146865e78), DAT_146865e78 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FacingMode",1);
    DAT_146865e70 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865e78);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865e70 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865e70 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865e70 + 0x30));
  }
  if ((*piVar5 < DAT_146865e88) && (_Init_thread_header(&DAT_146865e88), DAT_146865e88 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MovementTarget",1);
    DAT_146865e80 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865e88);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865e80 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865e80 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865e80 + 0x30));
  }
  if ((*piVar5 < DAT_146865e98) && (_Init_thread_header(&DAT_146865e98), DAT_146865e98 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FacingTarget",1);
    DAT_146865e90 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865e98);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865e90 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865e90 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865e90 + 0x30));
  }
  if ((*piVar5 < DAT_146865ea8) && (_Init_thread_header(&DAT_146865ea8), DAT_146865ea8 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DroneSpeed",1);
    DAT_146865ea0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865ea8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865ea0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865ea0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865ea0 + 0x30));
  }
  if ((*piVar5 < DAT_146865eb8) && (_Init_thread_header(&DAT_146865eb8), DAT_146865eb8 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HoverSpeed",1);
    DAT_146865eb0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865eb8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865eb0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865eb0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865eb0 + 0x30));
  }
  if ((*piVar5 < DAT_146865ec8) && (_Init_thread_header(&DAT_146865ec8), DAT_146865ec8 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DroneAccelerationTime",1);
    DAT_146865ec0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865ec8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865ec0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865ec0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865ec0 + 0x30));
  }
  if ((*piVar5 < DAT_146865ed8) && (_Init_thread_header(&DAT_146865ed8), DAT_146865ed8 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HoverAltitude",1);
    DAT_146865ed0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865ed8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865ed0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865ed0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865ed0 + 0x30));
  }
  if ((*piVar5 < DAT_146865ee8) && (_Init_thread_header(&DAT_146865ee8), DAT_146865ee8 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HoverAltitudeThreshold",1);
    DAT_146865ee0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865ee8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865ee0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865ee0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865ee0 + 0x30));
  }
  if ((*piVar5 < DAT_146865ef8) && (_Init_thread_header(&DAT_146865ef8), DAT_146865ef8 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HoverRadius",1);
    DAT_146865ef0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865ef8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865ef0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865ef0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865ef0 + 0x30));
  }
  if ((*piVar5 < DAT_146865f08) && (_Init_thread_header(&DAT_146865f08), DAT_146865f08 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HoverRadiusMin",1);
    DAT_146865f00 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865f08);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865f00 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865f00 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865f00 + 0x30));
  }
  if ((*piVar5 < DAT_146865f18) && (_Init_thread_header(&DAT_146865f18), DAT_146865f18 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HoverAngle",1);
    DAT_146865f10 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865f18);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146865f10 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865f10 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146865f10 + 0x30));
  }
  if ((*piVar5 < DAT_146865f28) && (_Init_thread_header(&DAT_146865f28), DAT_146865f28 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"StopHomingDistance",1);
    DAT_146865f20 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146865f28);
  }
  if (0 < *(int *)(DAT_146865f20 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146865f20 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146865f20 + 0x30));
  }
  return;
}



// FUNCTION 140a08210 FUN_140a08210 body=6 status=ok
// SIG undefined FUN_140a08210(void)

undefined8 FUN_140a08210(void)

{
  return 0x7fffffff;
}



// FUNCTION 140a08220 FUN_140a08220 body=105 status=ok
// SIG undefined FUN_140a08220(void)

undefined8 * FUN_140a08220(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxmission\\public\\MissionObjectiveReference.h"
             ,0x2d,L"Pure virtual not implemented (%s)",
             L"FMissionObjectiveReferenceBase::GetMissionClass");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxmission\\public\\MissionObjectiveReference.h"
             ,0x2d,L"Pure virtual not implemented (%s)",
             L"FMissionObjectiveReferenceBase::GetMissionClass");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 140a08290 FUN_140a08290 body=415 status=ok
// SIG undefined FUN_140a08290(void)

undefined8 * FUN_140a08290(longlong param_1,undefined8 *param_2,longlong param_3)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined1 local_78 [16];
  float local_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined7 uStack_1f;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_3 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uStack_54 = 0x3dcccccd;
      local_48 = 0x3f8000003dcccccd;
      uStack_40 = 0x3f00000042c80000;
      uStack_30 = 0x40800000;
      uStack_4c = 0x3c23d70a;
      uStack_24 = 0x40a00000;
      uStack_34 = 0x3fa00000;
      uStack_50 = 0x3f800000;
      local_38 = 0;
      uStack_2c = 0x3f800000;
      local_28 = 0x3f800000;
      uStack_20 = 0;
      UCheatManagerGunfire::GetAllCheats(&local_18);
      fStack_64 = *(float *)(param_3 + 0xd8c) * 0.5;
      local_68 = *(float *)(param_3 + 0xd88);
      puVar4 = (undefined4 *)FUN_141223660(param_3,local_78);
      local_18 = *puVar4;
      uStack_14 = puVar4[1];
      uStack_10 = puVar4[2];
      uStack_c = puVar4[3];
      uStack_5c = FUN_142fa3070(param_1 + 0x720,local_68,fStack_64);
      fVar5 = fStack_64;
      if (fStack_64 <= local_68) {
        fVar5 = local_68;
      }
      uVar2 = FUN_142fa3010(param_1 + 0x738,fVar5);
      *param_2 = CONCAT44(fStack_64,local_68);
      param_2[1] = CONCAT44(uStack_5c,uStack_60);
      param_2[2] = CONCAT44(uStack_54,uVar2);
      param_2[3] = CONCAT44(uStack_4c,uStack_50);
      param_2[4] = local_48;
      param_2[5] = uStack_40;
      param_2[6] = CONCAT44(uStack_34,local_38);
      param_2[7] = CONCAT44(uStack_2c,uStack_30);
      param_2[8] = CONCAT44(uStack_24,local_28);
      param_2[9] = CONCAT71(uStack_1f,uStack_20);
      param_2[10] = CONCAT44(uStack_14,local_18);
      param_2[0xb] = CONCAT44(uStack_c,uStack_10);
      return param_2;
    }
  }
  FUN_142fa3590(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 140a08430 FUN_140a08430 body=2245 status=ok
// SIG undefined FUN_140a08430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a08430(longlong param_1,undefined8 *param_2,longlong param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  longlong *plVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
  uint uVar15;
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
  undefined8 *local_148;
  undefined8 uStack_140;
  float local_138;
  float fStack_134;
  float local_130;
  undefined8 local_128;
  float local_120;
  float local_118;
  undefined8 *local_110;
  float local_108;
  longlong local_100;
  undefined4 local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  
  fVar26 = DAT_146294aa8;
  fVar18 = DAT_146294aa0._4_4_;
  fVar16 = (float)DAT_146294aa0;
  cVar4 = FWeakObjectPtr::IsValid(param_3 + 0x78);
  if (cVar4 == '\0') {
    cVar4 = FWeakObjectPtr::IsValid(param_3 + 0x70);
    if (cVar4 != '\0') {
      lVar5 = FWeakObjectPtr::Get(param_3 + 0x70);
      lVar5 = *(longlong *)(lVar5 + 0x168);
      if (lVar5 == 0) {
        local_120 = DAT_1468b5d98;
        pfVar7 = (float *)&local_128;
        local_128 = _DAT_1468b5d90;
      }
      else {
        pfVar7 = &local_138;
        local_138 = *(float *)(lVar5 + 0x220);
        local_130 = *(float *)(lVar5 + 0x228);
        fStack_134 = *(float *)(lVar5 + 0x224);
      }
      local_128 = *(undefined8 *)pfVar7;
      fVar16 = (float)local_128;
      fVar18 = (float)((ulonglong)local_128 >> 0x20);
      fVar26 = pfVar7[2];
      local_120 = fVar26;
    }
  }
  else {
    lVar5 = FWeakObjectPtr::Get(param_3 + 0x78);
    fVar16 = *(float *)(lVar5 + 0x220);
    fVar18 = *(float *)(lVar5 + 0x224);
    fVar26 = *(float *)(lVar5 + 0x228);
  }
  if (((fVar16 != (float)DAT_146294aa0) || (fVar18 != DAT_146294aa0._4_4_)) ||
     (fVar19 = (float)DAT_146294aa0, fVar21 = DAT_146294aa0._4_4_, fVar14 = DAT_146294aa8,
     fVar26 != DAT_146294aa8)) {
    lVar5 = param_3 + 0x88;
    cVar4 = FWeakObjectPtr::IsValid(lVar5);
    if ((cVar4 == '\0') || (cVar4 = FWeakObjectPtr::IsValid(param_3 + 0x70), cVar4 == '\0')) {
      cVar4 = FWeakObjectPtr::IsValid(param_3 + 0x80);
      if (cVar4 == '\0') {
        local_100 = 0;
      }
      else {
        lVar6 = FWeakObjectPtr::Get(param_3 + 0x80);
        lVar5 = *(longlong *)(lVar6 + 0x168);
        if (lVar5 == 0) {
          uVar13 = (undefined4)DAT_1468b5da0;
          uVar15 = (uint)((ulonglong)DAT_1468b5da0 >> 0x20);
          local_108 = DAT_1468b5da8;
        }
        else {
          fVar19 = *(float *)(lVar5 + 0x210);
          local_148 = *(undefined8 **)(lVar5 + 0x210);
          fVar21 = *(float *)(lVar5 + 0x218);
          uStack_140 = *(undefined8 *)(lVar5 + 0x218);
          auVar2._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != *(float *)(lVar5 + 0x214));
          auVar2._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != fVar19);
          auVar2._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fVar21);
          auVar2._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != *(float *)(lVar5 + 0x21c));
          iVar12 = movmskps((int)lVar6,auVar2);
          if (iVar12 != 0) {
            *(float *)(lVar5 + 0x250) = fVar19;
            *(float *)(lVar5 + 0x254) = *(float *)(lVar5 + 0x214);
            *(float *)(lVar5 + 600) = fVar21;
            *(float *)(lVar5 + 0x25c) = *(float *)(lVar5 + 0x21c);
            puVar9 = (undefined8 *)FQuat::Rotator(&local_148,&local_110);
            *(undefined8 *)(lVar5 + 0x260) = *puVar9;
            *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar9 + 1);
          }
          uVar13 = (undefined4)*(undefined8 *)(lVar5 + 0x260);
          uVar15 = (uint)((ulonglong)*(undefined8 *)(lVar5 + 0x260) >> 0x20);
          local_108 = *(float *)(lVar5 + 0x268);
        }
        local_148 = (undefined8 *)CONCAT44(uVar15,uVar13);
        uStack_140 = CONCAT44(uStack_140._4_4_,local_108);
        local_100 = (ulonglong)uVar15 << 0x20;
        local_110 = local_148;
      }
      local_f8 = 0;
    }
    else {
      lVar6 = FWeakObjectPtr::Get(param_3 + 0x70);
      lVar6 = *(longlong *)(lVar6 + 0x168);
      if (lVar6 == 0) {
        local_120 = DAT_1468b5d98;
        pfVar7 = (float *)&local_128;
        local_128 = _DAT_1468b5d90;
      }
      else {
        pfVar7 = &local_138;
        local_138 = *(float *)(lVar6 + 0x220);
        local_130 = *(float *)(lVar6 + 0x228);
        fStack_134 = *(float *)(lVar6 + 0x224);
      }
      local_148 = *(undefined8 **)pfVar7;
      uStack_140 = CONCAT44(uStack_140._4_4_,pfVar7[2]);
      uVar8 = FWeakObjectPtr::Get(lVar5);
      uVar13 = FUN_1423ac1f0(uVar8,&local_148);
      uVar8 = FWeakObjectPtr::Get(lVar5);
      FUN_1423b14a0(uVar8,&local_110,uVar13,1);
      FVector::Rotation(&local_110,&local_100);
    }
    FRotator::RotateVector(&local_100,&local_f0,param_3 + 0x90);
    fVar14 = local_ec + fVar18;
    fVar17 = local_e8 + fVar26;
    fVar23 = local_f0 + fVar16;
    fVar24 = fVar23;
    fVar25 = fVar14;
    local_118 = fVar17;
    if (*(char *)(param_1 + 0x3c8) != '\0') {
      fVar19 = *(float *)(param_1 + 0x3d0);
      fVar21 = *(float *)(param_3 + 0xa8);
      fVar20 = *(float *)(param_3 + 0xac);
      fVar22 = *(float *)(param_3 + 0xb0);
      lVar5 = FWeakObjectPtr::Get(param_3 + 0x70);
      if (*(longlong *)(lVar5 + 0x168) == 0) {
        uStack_140 = CONCAT44(uStack_140._4_4_,DAT_1464aa7b0);
        ppuVar10 = &local_148;
        local_148 = DAT_1464aa7a8;
      }
      else {
        ppuVar10 = (undefined8 **)FUN_142369f10(*(longlong *)(lVar5 + 0x168),&local_110);
      }
      fVar1 = *(float *)(param_1 + 0x3d4);
      local_148 = (undefined8 *)0x0;
      fVar21 = SUB84(*ppuVar10,0) * fVar1 + fVar19 * fVar21;
      uStack_140 = 1;
      local_120 = *(float *)(ppuVar10 + 1) * fVar1 + fVar19 * fVar22;
      fVar19 = (float)((ulonglong)*ppuVar10 >> 0x20) * fVar1 + fVar19 * fVar20;
      local_108 = local_120 + local_118;
      local_128 = CONCAT44(fVar19,fVar21);
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_148,0);
      *local_148 = CONCAT44(fVar19 + fVar14,fVar21 + fVar23);
      *(float *)(local_148 + 1) = local_108;
      uVar8 = FWeakObjectPtr::Get(param_3 + 0x60);
      cVar4 = FUN_142fbc350(uVar8,&local_148);
      if (local_148 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      if (cVar4 == '\0') {
        if (*(char *)(param_1 + 0x440) != '\0') {
          plVar11 = (longlong *)FWeakObjectPtr::Get(param_3 + 0x70);
          (**(code **)(*plVar11 + 0x148))(plVar11);
          plVar11 = (longlong *)FWeakObjectPtr::Get(param_3 + 0x70);
          (**(code **)(*plVar11 + 0x148))(plVar11);
        }
        fVar19 = 0.0;
        if (((local_f0 * *(float *)(param_3 + 0xac) - local_ec * *(float *)(param_3 + 0xa8)) +
             local_e8 * *(float *)(param_3 + 0xb0) <= 0.0) ||
           (0.0 < local_ec * *(float *)(param_3 + 0xac) + local_f0 * *(float *)(param_3 + 0xa8) +
                  local_e8 * *(float *)(param_3 + 0xb0))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        iVar12 = 0;
        if (0 < *(int *)(param_1 + 0x3d8)) {
          do {
            local_e0 = *(float *)(param_1 + 0x3cc);
            if (!bVar3) {
              local_e0 = -local_e0;
            }
            local_e0 = fVar19 + local_e0;
            FVector::RotateAngleAxis(&local_128,&local_138,local_e0,&DAT_1464aa798);
            fVar21 = fStack_134;
            fVar19 = local_138;
            local_108 = local_130 + local_118;
            local_148 = (undefined8 *)0x0;
            fVar22 = local_138 + fVar23;
            uStack_140 = 1;
            fVar20 = fStack_134 + fVar14;
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_148,0);
            *local_148 = CONCAT44(fVar20,fVar22);
            *(float *)(local_148 + 1) = local_108;
            uVar8 = FWeakObjectPtr::Get(param_3 + 0x60);
            cVar4 = FUN_142fbc350(uVar8,&local_148);
            if (local_148 != (undefined8 *)0x0) {
              FMemory::Free();
            }
            if (cVar4 != '\0') {
              fVar20 = SQRT(*(float *)(param_3 + 0x90) * *(float *)(param_3 + 0x90) +
                            *(float *)(param_3 + 0x94) * *(float *)(param_3 + 0x94) +
                            *(float *)(param_3 + 0x98) * *(float *)(param_3 + 0x98));
              fVar17 = 1.0 / SQRT(fVar19 * fVar19 + fVar21 * fVar21 + local_130 * local_130);
              fVar24 = fVar19 * fVar17 * fVar20 + fVar16;
              fVar25 = fVar21 * fVar17 * fVar20 + fVar18;
              fVar17 = local_130 * fVar17 * fVar20 + fVar26;
              if (*(char *)(param_1 + 0x440) != '\0') {
                plVar11 = (longlong *)FWeakObjectPtr::Get(param_3 + 0x70);
                (**(code **)(*plVar11 + 0x148))(plVar11);
              }
              break;
            }
            if (*(char *)(param_1 + 0x440) != '\0') {
              plVar11 = (longlong *)FWeakObjectPtr::Get(param_3 + 0x70);
              (**(code **)(*plVar11 + 0x148))(plVar11);
              plVar11 = (longlong *)FWeakObjectPtr::Get(param_3 + 0x70);
              (**(code **)(*plVar11 + 0x148))(plVar11);
            }
            iVar12 = iVar12 + 1;
            fVar19 = local_e0;
          } while (iVar12 < *(int *)(param_1 + 0x3d8));
        }
        if ((iVar12 == *(int *)(param_1 + 0x3d8)) &&
           (fVar19 = (float)DAT_146294aa0, fVar21 = DAT_146294aa0._4_4_, fVar24 = fVar23,
           fVar25 = fVar14, fVar17 = local_118, fVar14 = DAT_146294aa8,
           *(char *)(param_1 + 0x3dc) == '\0')) goto LAB_140a08c72;
      }
    }
    if (*(char *)(param_1 + 0x440) != '\0') {
      plVar11 = (longlong *)FWeakObjectPtr::Get(param_3 + 0x70);
      (**(code **)(*plVar11 + 0x148))(plVar11);
    }
    fVar26 = *(float *)(param_1 + 0x3c4);
    fVar19 = fVar24 + fVar26 * *(float *)(param_3 + 0xa8);
    fVar21 = fVar25 + fVar26 * *(float *)(param_3 + 0xac);
    fVar14 = fVar17 + fVar26 * *(float *)(param_3 + 0xb0);
  }
LAB_140a08c72:
  *param_2 = CONCAT44(fVar21,fVar19);
  *(float *)(param_2 + 1) = fVar14;
  return param_2;
}



// FUNCTION 140a08d00 FUN_140a08d00 body=86 status=ok
// SIG undefined FUN_140a08d00(void)

longlong FUN_140a08d00(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405c6c00();
  if (lVar2 != 0) {
    lVar3 = FUN_1413ea8c0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140a08d60 FUN_140a08d60 body=165 status=ok
// SIG undefined FUN_140a08d60(void)

longlong FUN_140a08d60(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x330) != 0) {
    return *(longlong *)(param_1 + 0x330);
  }
  lVar2 = FUN_140a09850();
  if (lVar2 == 0) {
    return *(longlong *)(param_1 + 0x330);
  }
  plVar3 = (longlong *)FUN_140a09850(param_1);
  lVar2 = (**(code **)(*plVar3 + 0x950))(plVar3);
  if (lVar2 != 0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a08dd6;
  }
  lVar2 = 0;
LAB_140a08dd6:
  *(longlong *)(param_1 + 0x330) = lVar2;
  return lVar2;
}



// FUNCTION 140a08e10 FUN_140a08e10 body=140 status=ok
// SIG undefined FUN_140a08e10(void)

undefined8 * FUN_140a08e10(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_3 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      puVar4 = (undefined8 *)FUN_141223660(param_3,local_28);
      goto LAB_140a08e83;
    }
  }
  puVar4 = (undefined8 *)FUN_142fa3ce0(param_1,local_18,param_3);
LAB_140a08e83:
  uVar1 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 140a08ea0 FUN_140a08ea0 body=109 status=ok
// SIG undefined FUN_140a08ea0(void)

undefined8 * FUN_140a08ea0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_1 + 0xb30) == 0) {
    FUN_142fa3d60();
    return param_2;
  }
  if ((*(longlong *)(param_1 + 0xb48) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xb48) + 0x758) != '\0')) {
    puVar2 = (undefined8 *)FUN_141223660(*(longlong *)(param_1 + 0xb30),local_28);
    uVar1 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar1;
    return param_2;
  }
  puVar2 = (undefined8 *)UCheatManagerGunfire::GetAllCheats(local_18);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 140a08f30 GetRandomPoint body=195 status=ok
// SIG undefined GetRandomPoint(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
ANavigationData::GetRandomPoint(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h",
             0x313,L"Pure virtual not implemented (%s)",L"ANavigationData::GetRandomPoint");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h",
             0x313,L"Pure virtual not implemented (%s)",L"ANavigationData::GetRandomPoint");
  uVar6 = DAT_1468b5d98;
  plVar4 = *(longlong **)(param_3 + 8);
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar6;
  param_2[2] = 0;
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
  return param_2;
}



// FUNCTION 140a09000 FUN_140a09000 body=149 status=ok
// SIG undefined FUN_140a09000(void)

undefined8 FUN_140a09000(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_3;
  local_10 = param_3[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x7b0))(param_1,param_2,&local_18);
  plVar4 = (longlong *)param_3[1];
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 140a090a0 FUN_140a090a0 body=169 status=ok
// SIG undefined FUN_140a090a0(void)

undefined1 FUN_140a090a0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong in_stack_00000028;
  
  if (*(longlong *)(in_stack_00000028 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(in_stack_00000028 + 8) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar6 = (**(code **)(*param_1 + 2000))();
  plVar4 = *(longlong **)(in_stack_00000028 + 8);
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
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 140a09150 FUN_140a09150 body=163 status=ok
// SIG undefined FUN_140a09150(void)

ulonglong FUN_140a09150(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong in_stack_00000028;
  
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h",
             0x31e,L"Pure virtual not implemented (%s)",
             L"ANavigationData::GetRandomReachablePointInRadius");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h",
             0x31e,L"Pure virtual not implemented (%s)",
             L"ANavigationData::GetRandomReachablePointInRadius");
  plVar4 = *(longlong **)(in_stack_00000028 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar6 = (int)lVar5 - 1;
    uVar7 = (ulonglong)uVar6;
    if (uVar6 == 0) {
      uVar7 = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar7 = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    return uVar7 & 0xffffffffffffff00;
  }
  return in_stack_00000028 & 0xffffffffffffff00;
}



// FUNCTION 140a09200 FUN_140a09200 body=169 status=ok
// SIG undefined FUN_140a09200(void)

undefined1 FUN_140a09200(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong in_stack_00000028;
  
  if (*(longlong *)(in_stack_00000028 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(in_stack_00000028 + 8) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar6 = (**(code **)(*param_1 + 0x7c0))();
  plVar4 = *(longlong **)(in_stack_00000028 + 8);
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
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 140a092b0 FUN_140a092b0 body=206 status=ok
// SIG undefined FUN_140a092b0(void)

longlong * FUN_140a092b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x188);
  if (lVar1 != 0) {
    lVar3 = FUN_1413e48b0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((bVar2) && (*(longlong *)(lVar1 + 0x718) != 0)) && (*(char *)(lVar1 + 0x758) != '\0')) &&
       (*(longlong *)(param_1 + 0x528) != 0)) {
      lVar4 = USafeZone::GetPrivateStaticClass();
      lVar1 = *(longlong *)(param_1 + 0x528);
      for (lVar3 = lVar1; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar4) {
          if (lVar1 != 0) {
            *param_2 = lVar1;
            return param_2;
          }
          break;
        }
      }
    }
  }
  *param_2 = *(longlong *)(param_1 + 0x270);
  return param_2;
}



// FUNCTION 140a09380 FUN_140a09380 body=30 status=ok
// SIG undefined FUN_140a09380(void)

undefined4 FUN_140a09380(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xaf0) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0xaf0) + 0x10c);
  }
  return 0x40400000;
}



// FUNCTION 140a093a0 FUN_140a093a0 body=30 status=ok
// SIG undefined FUN_140a093a0(void)

undefined4 FUN_140a093a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xaf0) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0xaf0) + 0x110);
  }
  return 0x40400000;
}



// FUNCTION 140a093c0 FUN_140a093c0 body=114 status=ok
// SIG undefined FUN_140a093c0(void)

float FUN_140a093c0(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + 0xaf0) == 0) {
    fVar2 = 4500.0;
  }
  else {
    fVar2 = *(float *)(*(longlong *)(param_1 + 0xaf0) + 0x38);
  }
  fVar1 = (float)FUN_140a09700();
  if (fVar1 <= fVar2) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = 1.0;
  }
  if (0 < *(int *)(param_1 + 0xc58)) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0xc50) + 0x58);
    if (fVar1 <= fVar2) {
      fVar1 = fVar2;
    }
    return fVar1;
  }
  return fVar2;
}



// FUNCTION 140a09440 FUN_140a09440 body=72 status=ok
// SIG undefined FUN_140a09440(void)

void FUN_140a09440(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  uVar2 = UGNewsMenuItem::GetPrivateStaticClass();
                    /* WARNING: Could not recover jumptable at 0x000140a0947c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
  return;
}



// FUNCTION 140a09490 FUN_140a09490 body=33 status=ok
// SIG undefined FUN_140a09490(void)

undefined8 FUN_140a09490(undefined8 param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"Fire Weapon");
  return param_2;
}



// FUNCTION 140a094c0 DescribeSelfForDebugger body=133 status=ok
// SIG undefined DescribeSelfForDebugger(void)

undefined8 AMorAIWaveEncounter::DescribeSelfForDebugger(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  ulonglong local_res8;
  wchar_t *local_18;
  int local_10;
  
  bVar1 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    pwVar2 = L"None";
  }
  else {
    local_res8 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x18);
    FName::ToString(&local_res8,&local_18);
    bVar1 = true;
    pwVar2 = L"";
    if (local_10 != 0) {
      pwVar2 = local_18;
    }
  }
  FString::PrintfImpl(param_2,L"Trigger Dialog: \'%s\'",pwVar2);
  if ((bVar1) && (local_18 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140a09590 DoesObjectiveArrowRotate body=8 status=ok
// SIG undefined DoesObjectiveArrowRotate(void)

undefined1 UMapIconComponent::DoesObjectiveArrowRotate(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x568);
}



// FUNCTION 140a095a0 FUN_140a095a0 body=343 status=ok
// SIG undefined FUN_140a095a0(void)

undefined8 * FUN_140a095a0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)(param_1 + 0x18) & 0x300;
  if (((*(byte *)(param_1 + 0x3a0) & 1) == 0) || (uVar5 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146865d60) && (_Init_thread_header(&DAT_146865d60), DAT_146865d60 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146865d58 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Editor.OverrideDrawOnlyIfSelected");
    _Init_thread_footer(&DAT_146865d60);
  }
  uVar6 = 0;
  if (((DAT_146865d58 != (longlong *)0x0) &&
      (iVar4 = (**(code **)(*DAT_146865d58 + 0x68))(), iVar4 == 1)) && (uVar5 == 0)) {
    bVar1 = false;
  }
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  cVar2 = FUN_142730ad0(param_1,param_3);
  if ((cVar2 != '\0') && (bVar1)) {
    uVar6 = 0x400;
  }
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | uVar6 | 0x200;
  bVar3 = FUN_142730880(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) =
       (*(uint *)((longlong)param_2 + 4) & 0xfffff7ff | (uint)bVar3 << 0xb) & 0xffff7fff;
  return param_2;
}



// FUNCTION 140a09700 FUN_140a09700 body=333 status=ok
// SIG undefined FUN_140a09700(void)

float FUN_140a09700(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined8 local_res8;
  
  if (0 < *(int *)(param_1 + 0xc58)) {
    lVar4 = *(longlong *)(param_1 + 0xc50);
    cVar3 = FWeakObjectPtr::IsValid(lVar4 + 0x10);
    if ((cVar3 == '\0') ||
       ((*(char *)(lVar4 + 0x3c) != '\0' && (lVar4 = FUN_140a09440(lVar4 + 0x10), lVar4 == 0)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      fVar5 = (float)FUN_1409fbe20(param_1,*(float **)(param_1 + 0xc50) + 4);
      return fVar5;
    }
    fVar5 = **(float **)(param_1 + 0xc50);
    if (0.0 <= fVar5) {
      return fVar5;
    }
  }
  bVar1 = false;
  if (0 < *(int *)(param_1 + 0xc58)) {
    if ((*(char *)(*(longlong *)(param_1 + 0xc50) + 6) == '\0') &&
       (*(char *)(*(longlong *)(param_1 + 0xc50) + 7) == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  if ((*(char *)(param_1 + 0xb60) != '\0') || (bVar2 = false, bVar1)) {
    bVar2 = true;
  }
  lVar4 = *(longlong *)(param_1 + 0xaf0);
  if (bVar2) {
    if (lVar4 == 0) {
      fVar5 = 1000.0;
    }
    else {
      fVar5 = *(float *)(lVar4 + 0x3c);
    }
  }
  else if ((lVar4 == 0) || (*(longlong *)(param_1 + 0xb30) == 0)) {
    fVar5 = 2000.0;
  }
  else {
    fVar5 = *(float *)(*(longlong *)(param_1 + 0xb30) + 0xda0) * *(float *)(lVar4 + 0x30);
  }
  if (lVar4 == 0) {
    return fVar5 * 1.0;
  }
  local_res8 = 0xffffffffffffffff;
  fVar6 = (float)FUN_142de77e0(lVar4 + 0x88,*(undefined8 *)(param_1 + 0xb48),
                               *(undefined8 *)(param_1 + 0xb30),&local_res8);
  return fVar6 * fVar5;
}



// FUNCTION 140a09850 FUN_140a09850 body=115 status=ok
// SIG undefined FUN_140a09850(void)

longlong FUN_140a09850(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x328) != 0) {
    return *(longlong *)(param_1 + 0x328);
  }
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    lVar2 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a098ae;
  }
  lVar3 = 0;
LAB_140a098ae:
  *(longlong *)(param_1 + 0x328) = lVar3;
  return lVar3;
}



// FUNCTION 140a098d0 FUN_140a098d0 body=69 status=ok
// SIG undefined FUN_140a098d0(void)

longlong FUN_140a098d0(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  do {
    lVar1 = FUN_14222e2a0(param_1);
    if (lVar1 == 0) {
      return param_1;
    }
    param_1 = FUN_14222e2a0(param_1);
  } while (param_1 != 0);
  return 0;
}



// FUNCTION 140a09920 FUN_140a09920 body=2105 status=ok
// SIG undefined FUN_140a09920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140a09920(longlong param_1,longlong *param_2,char param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [12];
  float fVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  float *pfVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar20 [16];
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
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined4 local_170;
  longlong local_168 [2];
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
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  puVar1 = (undefined8 *)(param_1 + 600);
  FUN_14058f880(local_168,param_1 + 0x268);
  FUN_14058f880(param_2,local_168);
  if (local_168[0] != 0) {
    FUN_1405a53f0();
  }
  if (*param_2 != 0) {
    return param_2;
  }
  if (param_3 == '\0') {
    return param_2;
  }
  if ((*(longlong *)(param_1 + 0x268) == 0) && (0 < *(int *)(param_1 + 0x260))) {
    FUN_140591350(param_1 + 0x268,*puVar1);
    plVar11 = (longlong *)*puVar1;
    if (*plVar11 != 0) {
      FUN_1405a53f0();
      *plVar11 = 0;
    }
    iVar10 = *(int *)(param_1 + 0x260);
    if (iVar10 + -1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)*puVar1,(void *)((longlong)*puVar1 + 8),(longlong)(iVar10 + -1) << 3);
      iVar10 = *(int *)(param_1 + 0x260);
    }
    *(int *)(param_1 + 0x260) = iVar10 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(puVar1);
  }
  FUN_14058f880(&local_118,param_1 + 0x268);
  FUN_14058f880(local_168,&local_118);
  FUN_140591350(param_2,local_168);
  if (local_168[0] != 0) {
    FUN_1405a53f0();
    local_168[0] = 0;
  }
  if (CONCAT44(fStack_114,local_118) != 0) {
    FUN_1405a53f0();
  }
  if (*param_2 == 0) {
    return param_2;
  }
  if (*(char *)(param_1 + 0x24b) == '\0') {
    cVar9 = *(char *)(param_1 + 0x24a);
  }
  else {
    plVar11 = (longlong *)FUN_140a09850(param_1);
    if (((plVar11 == (longlong *)0x0) ||
        (plVar11 = (longlong *)(**(code **)(*plVar11 + 0x950))(plVar11), plVar11 == (longlong *)0x0)
        ) || (cVar9 = (**(code **)(*plVar11 + 0x780))(plVar11), cVar9 == '\0')) goto LAB_140a09ab0;
    cVar9 = (**(code **)(*plVar11 + 0x778))(plVar11);
  }
  if (cVar9 != '\0') {
    *(undefined1 *)(*param_2 + 0x62) = 4;
  }
LAB_140a09ab0:
  lVar12 = FUN_140a09850(param_1);
  if ((lVar12 != 0) &&
     (plVar11 = (longlong *)FUN_140a04190(param_1), fVar8 = fRam00000001468657fc,
     plVar11 != (longlong *)0x0)) {
    fVar2 = *(float *)(param_1 + 0x1a8);
    fVar32 = *(float *)(param_1 + 0x194);
    fVar35 = *(float *)*(undefined1 (*) [12])(param_1 + 400);
    fVar38 = *(float *)(param_1 + 0x198);
    auVar7 = *(undefined1 (*) [12])(param_1 + 400);
    pfVar13 = (float *)(**(code **)(*plVar11 + 0x420))
                                 (plVar11,&local_108,*(undefined8 *)(param_1 + 0x188),0);
    fVar27 = fRam00000001468657f8;
    fVar26 = fRam00000001468657f4;
    fVar40 = _DAT_1468657f0;
    auVar15._4_4_ = fVar2;
    auVar15._0_4_ = fVar2;
    auVar15._8_4_ = fVar2;
    auVar15._12_4_ = 0;
    fVar28 = *pfVar13;
    fVar19 = pfVar13[1];
    fVar22 = pfVar13[2];
    fVar39 = pfVar13[3];
    auVar16 = *(undefined1 (*) [16])(pfVar13 + 8);
    fVar3 = auVar16._0_4_;
    fVar4 = auVar16._4_4_;
    fVar5 = auVar16._8_4_;
    fVar6 = auVar16._12_4_;
    auVar16 = minps(auVar15,auVar16);
    auVar17._4_4_ = -(uint)(auVar16._4_4_ < fRam0000000146865854);
    auVar17._0_4_ = -(uint)(auVar16._0_4_ < _DAT_146865850);
    auVar17._8_4_ = -(uint)(auVar16._8_4_ < fRam0000000146865858);
    auVar17._12_4_ = -(uint)(auVar16._12_4_ < fRam000000014686585c);
    iVar10 = movmskps((int)pfVar13,auVar17);
    if (iVar10 == 0) {
      fVar35 = fVar35 * fVar3;
      fVar32 = fVar32 * fVar4;
      fVar38 = fVar38 * fVar5;
      fVar18 = fVar6 * 0.0;
      local_108 = fVar28 * fVar8 * _DAT_146865830 + fVar39 * 0.0 + fVar19 * 0.0 * _DAT_146865820 +
                  fVar22 * 0.0 * _DAT_146865810;
      fStack_104 = fVar28 * 0.0 * fRam0000000146865834 + fVar39 * 0.0 +
                   fVar19 * fVar8 * fRam0000000146865824 + fVar22 * 0.0 * fRam0000000146865814;
      fStack_100 = fVar28 * 0.0 * fRam0000000146865838 + fVar39 * 0.0 +
                   fVar19 * 0.0 * fRam0000000146865828 + fVar22 * fVar8 * fRam0000000146865818;
      fStack_fc = fVar28 * 0.0 * fRam000000014686583c + fVar8 * fVar39 +
                  fVar19 * 0.0 * fRam000000014686582c + fVar22 * 0.0 * fRam000000014686581c;
      fVar40 = fVar38 * fVar19 - fVar32 * fVar22;
      fVar26 = fVar35 * fVar22 - fVar38 * fVar28;
      fVar27 = fVar32 * fVar28 - fVar35 * fVar19;
      fVar41 = fVar18 * fVar39 - fVar18 * fVar39;
      fVar40 = fVar40 + fVar40;
      fVar26 = fVar26 + fVar26;
      fVar27 = fVar27 + fVar27;
      fVar41 = fVar41 + fVar41;
      local_f8._0_4_ = (fVar27 * fVar19 - fVar26 * fVar22) + fVar40 * fVar39 + fVar35 + pfVar13[4];
      local_f8._4_4_ = (fVar40 * fVar22 - fVar27 * fVar28) + fVar26 * fVar39 + fVar32 + pfVar13[5];
      fStack_f0 = (fVar26 * fVar28 - fVar40 * fVar19) + fVar27 * fVar39 + fVar38 + pfVar13[6];
      fStack_ec = (fVar41 * fVar39 - fVar41 * fVar39) + fVar41 * fVar39 + fVar18 + pfVar13[7];
    }
    else {
      fVar21 = fVar19 + fVar19;
      fVar23 = fVar22 + fVar22;
      fVar29 = fVar28 * (fVar28 + fVar28);
      fVar41 = fVar39 * (fVar28 + fVar28);
      fVar45 = (fVar39 * fVar23 + fVar28 * fVar21) * fVar3;
      fVar46 = (fVar41 + fVar19 * fVar23) * fVar4;
      fVar47 = (fVar39 * fVar21 + fVar28 * fVar23) * fVar5;
      fVar30 = fVar4 * (fVar28 * fVar21 - fVar39 * fVar23);
      fVar33 = fVar5 * (fVar19 * fVar23 - fVar41);
      fVar36 = fVar3 * (fVar28 * fVar23 - fVar39 * fVar21);
      fVar28 = pfVar13[4];
      fVar39 = pfVar13[5];
      fVar41 = pfVar13[6];
      fVar18 = (float)((uint)((_DAT_1468657f0 - (fVar22 * fVar23 + fVar19 * fVar21)) * fVar3) &
                      _DAT_146865800);
      fVar22 = (float)((uint)((fRam00000001468657f4 - (fVar22 * fVar23 + fVar29)) * fVar4) &
                      uRam0000000146865804);
      fVar23 = (float)((uint)((fRam00000001468657f8 - (fVar19 * fVar21 + fVar29)) * fVar5) &
                      uRam0000000146865808);
      fVar24 = (float)((uint)((fRam00000001468657fc - (fVar29 + fVar29)) * fVar6) &
                      uRam000000014686580c);
      fVar42 = (fVar8 * 0.0 + 0.0) * fVar2;
      fVar43 = (fVar8 * 0.0 + 0.0) * fVar2;
      fVar44 = (fVar8 * 0.0 + 0.0) * fVar2;
      fVar31 = fVar2 * (0.0 - fVar8 * 0.0);
      fVar34 = fVar2 * (0.0 - fVar8 * 0.0);
      fVar37 = fVar2 * (0.0 - fVar8 * 0.0);
      fVar19 = (float)((uint)((_DAT_1468657f0 - 0.0) * fVar2) & _DAT_146865800);
      fVar21 = (float)((uint)((fRam00000001468657f4 - 0.0) * fVar2) & uRam0000000146865804);
      fVar29 = (float)((uint)((fRam00000001468657f8 - 0.0) * fVar2) & uRam0000000146865808);
      fVar25 = (float)((uint)((fRam00000001468657fc - 0.0) * 0.0) & uRam000000014686580c);
      local_158 = fVar42 * fVar30 + fVar19 * fVar18 + fVar37 * fVar47 + fVar25 * fVar28;
      fStack_154 = fVar42 * fVar22 + fVar19 * fVar45 + fVar37 * fVar33 + fVar25 * fVar39;
      fStack_150 = fVar42 * fVar46 + fVar19 * fVar36 + fVar37 * fVar23 + fVar25 * fVar41;
      fStack_14c = fVar42 * fVar24 + fVar19 * fVar24 + fVar37 * fVar24 +
                   fVar25 * fRam00000001468657fc;
      local_148 = fVar21 * fVar30 + fVar31 * fVar18 + fVar43 * fVar47 + fVar25 * fVar28;
      fStack_144 = fVar21 * fVar22 + fVar31 * fVar45 + fVar43 * fVar33 + fVar25 * fVar39;
      fStack_140 = fVar21 * fVar46 + fVar31 * fVar36 + fVar43 * fVar23 + fVar25 * fVar41;
      fStack_13c = fVar21 * fVar24 + fVar31 * fVar24 + fVar43 * fVar24 +
                   fVar25 * fRam00000001468657fc;
      local_138 = fVar34 * fVar30 + fVar44 * fVar18 + fVar29 * fVar47 + fVar25 * fVar28;
      fStack_134 = fVar34 * fVar22 + fVar44 * fVar45 + fVar29 * fVar33 + fVar25 * fVar39;
      fStack_130 = fVar34 * fVar46 + fVar44 * fVar36 + fVar29 * fVar23 + fVar25 * fVar41;
      fStack_12c = fVar34 * fVar24 + fVar44 * fVar24 + fVar29 * fVar24 +
                   fVar25 * fRam00000001468657fc;
      local_128 = fVar32 * fVar30 + fVar35 * fVar18 + fVar38 * fVar47 +
                  fRam00000001468657fc * fVar28;
      fStack_124 = fVar32 * fVar22 + fVar35 * fVar45 + fVar38 * fVar33 +
                   fRam00000001468657fc * fVar39;
      fStack_120 = fVar32 * fVar46 + fVar35 * fVar36 + fVar38 * fVar23 +
                   fRam00000001468657fc * fVar41;
      fStack_11c = fVar32 * fVar24 + fVar35 * fVar24 + fVar38 * fVar24 +
                   fRam00000001468657fc * fRam00000001468657fc;
      FMatrix::RemoveScaling(&local_158);
      fVar32 = (float)(-(uint)(_DAT_146865850 <= fVar2 * fVar3) & (_DAT_146865840 ^ (uint)fVar40) ^
                      _DAT_146865840);
      fVar35 = (float)(-(uint)(fRam0000000146865854 <= fVar2 * fVar4) &
                       (uRam0000000146865844 ^ (uint)fVar26) ^ uRam0000000146865844);
      fVar38 = (float)(-(uint)(fRam0000000146865858 <= fVar2 * fVar5) &
                       (uRam0000000146865848 ^ (uint)fVar27) ^ uRam0000000146865848);
      local_158 = local_158 * fVar32;
      fStack_154 = fStack_154 * fVar32;
      fStack_150 = fStack_150 * fVar32;
      fStack_144 = fStack_144 * fVar35;
      fStack_140 = fStack_140 * fVar35;
      local_148 = local_148 * fVar35;
      fStack_134 = fStack_134 * fVar38;
      fStack_130 = fStack_130 * fVar38;
      local_138 = local_138 * fVar38;
      FQuat::FQuat(&local_118,&local_158);
      local_168[0] = CONCAT44(local_168[0]._4_4_,0x322bcc77);
      auVar20._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
      auVar20._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
      auVar20._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
      auVar20._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
      fVar19 = auVar20._4_4_ + auVar20._0_4_;
      fVar22 = auVar20._8_4_ + auVar20._4_4_;
      fVar39 = auVar20._12_4_ + auVar20._8_4_;
      fVar40 = auVar20._0_4_ + auVar20._12_4_;
      auVar16._4_4_ = fVar22;
      auVar16._0_4_ = fVar19;
      auVar16._8_4_ = fVar39;
      auVar16._12_4_ = fVar40;
      auVar16 = rsqrtps(auVar20,auVar16);
      fVar32 = auVar16._0_4_;
      fVar35 = auVar16._4_4_;
      fVar38 = auVar16._8_4_;
      fVar28 = auVar16._12_4_;
      fVar32 = (_DAT_1468657e0 - fVar32 * fVar32 * fVar19 * _DAT_1468657e0) * fVar32 + fVar32;
      fVar35 = (fRam00000001468657e4 - fVar35 * fVar35 * fVar22 * fRam00000001468657e4) * fVar35 +
               fVar35;
      fVar38 = (fRam00000001468657e8 - fVar38 * fVar38 * fVar39 * fRam00000001468657e8) * fVar38 +
               fVar38;
      fVar28 = (fRam00000001468657ec - fVar28 * fVar28 * fVar40 * fRam00000001468657ec) * fVar28 +
               fVar28;
      fStack_ec = 0.0;
      local_108 = (float)(((uint)(((_DAT_1468657e0 - fVar32 * fVar32 * fVar19 * _DAT_1468657e0) *
                                   fVar32 + fVar32) * local_118) ^ _DAT_1468657d0) &
                          -(uint)(1e-08 <= fVar19) ^ _DAT_1468657d0);
      fStack_104 = (float)(((uint)(((fRam00000001468657e4 -
                                    fVar35 * fVar35 * fVar22 * fRam00000001468657e4) * fVar35 +
                                   fVar35) * fStack_114) ^ uRam00000001468657d4) &
                           -(uint)(1e-08 <= fVar22) ^ uRam00000001468657d4);
      fStack_100 = (float)(((uint)(((fRam00000001468657e8 -
                                    fVar38 * fVar38 * fVar39 * fRam00000001468657e8) * fVar38 +
                                   fVar38) * fStack_110) ^ uRam00000001468657d8) &
                           -(uint)(1e-08 <= fVar39) ^ uRam00000001468657d8);
      fStack_fc = (float)(((uint)(((fRam00000001468657ec -
                                   fVar28 * fVar28 * fVar40 * fRam00000001468657ec) * fVar28 +
                                  fVar28) * fStack_10c) ^ uRam00000001468657dc) &
                          -(uint)(1e-08 <= fVar40) ^ uRam00000001468657dc);
      local_f8._0_4_ = local_128;
      local_f8._4_4_ = fStack_124;
      fStack_f0 = fStack_120;
    }
    local_e8._4_4_ = fVar2 * fVar4;
    local_e8._0_4_ = fVar2 * fVar3;
    fStack_e0 = fVar2 * fVar5;
    fStack_dc = fVar6 * 0.0;
    FUN_1405aac00(*param_2,&local_108);
    local_108 = 0.0;
    fStack_104 = 0.0;
    fStack_100 = 0.0;
    fStack_fc = fVar8;
    fStack_ec = 0.0;
    _local_f8 = auVar7;
    local_e8._4_4_ = fVar2;
    local_e8._0_4_ = fVar2;
    fStack_e0 = fVar2;
    fStack_dc = 0.0;
    uVar14 = FUN_14058f8f0(&local_118,param_2);
    FUN_1405a9a30(uVar14,plVar11,*(undefined8 *)(param_1 + 0x188),&local_108);
  }
  if ((*(longlong *)(param_1 + 0x230) != 0) &&
     (*(undefined4 *)(*param_2 + 100) = *(undefined4 *)(*(longlong *)(param_1 + 0x230) + 0xd4),
     *(longlong *)(*(longlong *)(param_1 + 0x230) + 0x2a0) != 0)) {
    iVar10 = rand();
    local_170 = 0;
    local_178 = 4;
    FUN_1405aaa50(*param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0x2a0),
                  (float)iVar10 * 3.051851e-05,0);
  }
  return param_2;
}



// FUNCTION 140a0a170 FUN_140a0a170 body=191 status=ok
// SIG undefined FUN_140a0a170(void)

uint FUN_140a0a170(longlong param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong **)(param_1 + 0x8b0) != (longlong *)0x0) {
    if (-1 < (int)*(uint *)(param_1 + 0x8c0)) {
      return *(uint *)(param_1 + 0x8c0);
    }
    plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x678))();
    if (plVar4 != (longlong *)0x0) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (*(longlong *)(param_1 + 0x8b8) == 0) {
          uVar3 = *(uint *)(param_1 + 0x8c0);
        }
        else {
          bVar2 = (**(code **)(*plVar4 + 0xa68))(plVar4);
          uVar3 = (uint)bVar2;
          *(uint *)(param_1 + 0x8c0) = (uint)bVar2;
        }
        if (-1 < (int)uVar3) {
          return uVar3;
        }
        *(undefined4 *)(param_1 + 0x8c0) = 0;
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 140a0a230 FUN_140a0a230 body=356 status=ok
// SIG undefined FUN_140a0a230(void)

longlong * FUN_140a0a230(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x8b0);
  if (lVar2 == 0) goto LAB_140a0a378;
  lVar5 = *(longlong *)(lVar2 + 0x720);
  cVar6 = '\0';
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(lVar2 + 0x718);
    if ((*(longlong *)(lVar2 + 0x728) == 0) || (*(int *)(*(longlong *)(lVar2 + 0x728) + 0x6c8) == 0)
       ) goto LAB_140a0a311;
LAB_140a0a316:
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x8b0) + 0x730);
    lVar2 = 0;
    if (lVar5 != 0) goto LAB_140a0a32e;
  }
  else {
    lVar2 = AGTutorialStepVideo::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = *(longlong *)(lVar5 + 0x518), lVar2 != 0)) {
      lVar3 = FUN_1414e0f70();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar6 = *(char *)(lVar2 + 0x770);
      }
    }
LAB_140a0a311:
    if (lVar5 == 0) goto LAB_140a0a316;
LAB_140a0a32e:
    uVar4 = UDamageableInterface::GetPrivateStaticClass();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar4);
  }
  if ((cVar6 == '\0') && (lVar2 != 0)) {
    *param_2 = lVar5;
    lVar3 = 0;
    if (lVar5 != 0) {
      lVar3 = lVar2;
    }
    param_2[1] = lVar3;
    return param_2;
  }
LAB_140a0a378:
  FUN_14077c0a0(param_1,param_2);
  return param_2;
}



// FUNCTION 140a0a3a0 FUN_140a0a3a0 body=177 status=ok
// SIG undefined FUN_140a0a3a0(void)

void FUN_140a0a3a0(longlong *param_1,undefined1 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1413cb880();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x188) != 0)) &&
       ((*(longlong *)(lVar2 + 0x1f8) != 0 || (*(longlong *)(lVar2 + 0x200) != 0)))) {
      local_28 = *param_4;
      uStack_20 = param_4[1];
      local_18 = param_4[2];
      local_38 = *param_3;
      uStack_34 = param_3[1];
      uStack_30 = param_3[2];
      uStack_2c = param_3[3];
      FUN_140a193f0(lVar2,0,param_2,&local_38,&local_28);
    }
  }
  return;
}



// FUNCTION 140a0a460 FUN_140a0a460 body=95 status=ok
// SIG undefined FUN_140a0a460(void)

void FUN_140a0a460(longlong param_1,undefined1 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if ((*(longlong *)(param_1 + 0x188) != 0) &&
     ((*(longlong *)(param_1 + 0x1f8) != 0 || (*(longlong *)(param_1 + 0x200) != 0)))) {
    local_28 = *param_4;
    uStack_20 = param_4[1];
    local_18 = param_4[2];
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_140a193f0(local_38,0,param_2,&local_38,&local_28);
  }
  return;
}



// FUNCTION 140a0a4c0 FUN_140a0a4c0 body=364 status=ok
// SIG undefined FUN_140a0a4c0(void)

void FUN_140a0a4c0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x328) != '\x02') {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar3 == 0) {
    return;
  }
  lVar6 = lVar3 + 0xe30;
  lVar2 = FWeakObjectPtr::Get(lVar6);
  lVar7 = 0;
  lVar5 = lVar7;
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar3 + 0xe38)) || (*(longlong *)(lVar3 + 0xe40) == 0))
    goto LAB_140a0a5e5;
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0xe38) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar6);
    if (lVar2 == 0) goto LAB_140a0a5e5;
  }
  lVar3 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar6 = FUN_142e0d0b0();
    lVar3 = lVar2;
    do {
      lVar5 = lVar2;
      if (lVar3 == lVar6) break;
      lVar3 = *(longlong *)(lVar3 + 0x30);
      lVar5 = lVar7;
    } while (lVar3 != 0);
  }
LAB_140a0a5e5:
  lVar3 = *(longlong *)(param_2 + 0x50);
  lVar2 = lVar7;
  if (lVar3 != 0) {
    lVar4 = FUN_142e0d0b0();
    lVar6 = lVar3;
    do {
      lVar2 = lVar3;
      if (lVar6 == lVar4) break;
      lVar6 = *(longlong *)(lVar6 + 0x30);
      lVar2 = lVar7;
    } while (lVar6 != 0);
  }
  if (lVar5 == lVar2) {
    FUN_140a17e10(param_1,0);
  }
  return;
}



// FUNCTION 140a0a630 FUN_140a0a630 body=394 status=ok
// SIG undefined FUN_140a0a630(void)

undefined8 FUN_140a0a630(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar6 = (**(code **)(*(longlong *)*param_2 + 0x690))();
  if (lVar6 != 0) {
    lVar7 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      puVar3 = *(undefined4 **)(param_1 + 0x100);
      iVar2 = *(int *)(param_1 + 0x108);
      if (puVar3 != puVar3 + (longlong)iVar2 * 10) {
        puVar8 = puVar3 + 1;
        do {
          local_80 = puVar8[-1];
          local_7c = *puVar8;
          local_78 = puVar8[1];
          local_98 = *(undefined8 *)(puVar8 + 3);
          local_68[0] = 0;
          local_68[1] = 0;
          local_70 = 0;
          FString::FString(local_90,puVar8 + 5);
          FSoftObjectPath::operator=(&local_70,&local_98);
          local_58 = local_80;
          local_54 = local_7c;
          local_50 = local_78;
          local_98 = local_70;
          local_40 = 0;
          local_38 = 0;
          local_48 = 0;
          FString::FString(local_90,local_68);
          FSoftObjectPath::operator=(&local_48,&local_98);
          cVar5 = FUN_14122ec70(lVar6,&local_58);
          if (cVar5 != '\0') {
            if (local_68[0] != 0) {
              FMemory::Free();
            }
            return 1;
          }
          if (local_68[0] != 0) {
            FMemory::Free();
          }
          puVar1 = puVar8 + 9;
          puVar8 = puVar8 + 10;
        } while (puVar1 != puVar3 + (longlong)iVar2 * 10);
      }
    }
  }
  return 0;
}



// FUNCTION 140a0a7c0 FUN_140a0a7c0 body=30 status=ok
// SIG undefined FUN_140a0a7c0(void)

bool FUN_140a0a7c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 140a0a7e0 FUN_140a0a7e0 body=82 status=ok
// SIG undefined FUN_140a0a7e0(void)

undefined1 FUN_140a0a7e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = USoundWave::IsLocalizedResource();
  if ((((cVar1 == '\0') && (*(longlong *)(param_1 + 0xf8) == 0)) &&
      (*(longlong *)(param_1 + 0x110) == 0)) &&
     (((*(longlong *)(param_1 + 0x128) == 0 && (*(longlong *)(param_1 + 0x158) == 0)) &&
      (*(longlong *)(param_1 + 0x170) == 0)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 140a0a840 FUN_140a0a840 body=213 status=ok
// SIG undefined FUN_140a0a840(void)

void FUN_140a0a840(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  param_1[2] = param_2;
  param_1[3] = param_3;
  if (param_3 != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
      param_2 = param_1[2];
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (lVar1 != 0) {
      *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(lVar1 + 0x414);
      *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(lVar1 + 0x410);
    }
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 0x120);
      if (lVar1 == 0) {
        lVar1 = FUN_1423407b0(param_2);
      }
    }
    *param_1 = lVar1;
    lVar2 = FUN_142f9cfb0(lVar1,0);
    lVar1 = param_1[3];
    param_1[1] = lVar2;
    if (lVar1 != 0) {
      uVar3 = UNavAgentInterface::GetPrivateStaticClass();
      plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_1409f69a0(param_1 + 4,uVar3);
      }
    }
    FWeakObjectPtr::operator=(param_1 + 10,param_1[3]);
  }
  return;
}



// FUNCTION 140a0a920 FUN_140a0a920 body=465 status=ok
// SIG undefined FUN_140a0a920(void)

void FUN_140a0a920(longlong param_1)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar4 = *(longlong **)(param_1 + 0x118);
  plVar6 = (longlong *)0x0;
  if (plVar4 == (longlong *)0x0) {
LAB_140a0a976:
    plVar4 = plVar6;
  }
  else {
    lVar3 = FUN_1413e48b0();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140a0a976;
  }
  *(longlong **)(param_1 + 0xb48) = plVar4;
  if ((plVar4[0xe5] != 0) && (*(char *)(plVar4[0xe5] + 0x418) == '\x03')) {
    return;
  }
  plVar5 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)plVar4[0xe3];
  }
  *(longlong **)(param_1 + 0xb30) = plVar5;
  if ((plVar5 != (longlong *)0x0) &&
     (plVar4 = (longlong *)(**(code **)(*plVar5 + 0x6e8))(), plVar4 != (longlong *)0x0)) {
    lVar3 = FUN_142fbec90();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a0a9fc;
  }
  plVar4 = plVar6;
LAB_140a0a9fc:
  *(longlong **)(param_1 + 0xb38) = plVar4;
  if (*(longlong *)(param_1 + 0xb48) != 0) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xb48) + 0x730);
  }
  *(longlong **)(param_1 + 0xb40) = plVar6;
  FUN_142fa6ef0(param_1);
  *(longlong *)(param_1 + 0xb58) = param_1;
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  *(longlong *)(param_1 + 0xb50) = lVar3;
  if (*(longlong *)(param_1 + 0xb30) == 0) {
    *(undefined4 *)(param_1 + 0x6ac) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x6b0) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x6b4) = 0xbf800000;
  }
  else {
    uVar2 = FUN_141227750();
    *(undefined1 *)(param_1 + 0xc70) = uVar2;
    *(undefined4 *)(param_1 + 0x6ac) = 0x42480000;
    *(undefined4 *)(param_1 + 0x6b0) = 0x42c80000;
    *(undefined4 *)(param_1 + 0x6b4) = 0x3f800000;
    FUN_140a0a840(param_1 + 0xb68,param_1,*(undefined8 *)(param_1 + 0xb30));
    *(undefined1 *)(param_1 + 0xbf9) = 1;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb30) + 0xb78);
    if (lVar3 != 0) {
      *(longlong *)(param_1 + 0xaf0) = lVar3;
      return;
    }
  }
  return;
}



// FUNCTION 140a0ab00 FUN_140a0ab00 body=42 status=ok
// SIG undefined FUN_140a0ab00(void)

void FUN_140a0ab00(longlong param_1)

{
  FUN_142340f20();
  if ((*(byte *)(param_1 + 200) & 0x20) == 0) {
    FUN_1409f8ec0(param_1);
    return;
  }
  return;
}



// FUNCTION 140a0ab30 FUN_140a0ab30 body=138 status=ok
// SIG undefined FUN_140a0ab30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a0ab30(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143050420();
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a0ab83;
  }
  lVar3 = 0;
LAB_140a0ab83:
  *(longlong *)(param_1 + 0x2c8) = lVar3;
  if (*(char *)(param_1 + 0x2d0) != '\0') {
    *(undefined8 *)(param_1 + 0x18c) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x194) = DAT_1468b5d98;
  }
  return;
}



// FUNCTION 140a0abc0 FUN_140a0abc0 body=75 status=ok
// SIG undefined FUN_140a0abc0(void)

void FUN_140a0abc0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if ((char)param_1[0x46] == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x400))();
  }
  else {
    fVar3 = (float)FUN_142c98860(param_1 + 0x3f,param_1[0x23]);
    iVar2 = (int)fVar3;
  }
  iVar1 = 1;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  FUN_142ccf590(param_1,iVar1);
  return;
}



// FUNCTION 140a0ac10 FUN_140a0ac10 body=88 status=ok
// SIG undefined FUN_140a0ac10(void)

void FUN_140a0ac10(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = param_2[1];
  plVar3 = (longlong *)*param_2;
  uVar4 = FUN_141442a00();
  uVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
  FWeakObjectPtr::operator=(lVar1 + lVar2 + 0x60,uVar4);
  return;
}



// FUNCTION 140a0ac70 FUN_140a0ac70 body=69 status=ok
// SIG undefined FUN_140a0ac70(void)

void FUN_140a0ac70(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14059ee90(param_1 + 0x188);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 0x180) = 0;
    FUN_1405ac8f0(param_1 + 0x188,0,4);
  }
  return;
}



// FUNCTION 140a0acc0 FUN_140a0acc0 body=882 status=ok
// SIG undefined FUN_140a0acc0(void)

ulonglong FUN_140a0acc0(longlong param_1,undefined8 *param_2,undefined8 param_3,float *param_4)

{
  uint3 uVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined7 uVar4;
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
  float local_d8;
  float local_d4;
  float local_d0;
  float fStack_c4;
  
  FRotator::Vector(param_3,&local_d8);
  fVar12 = (float)*param_2;
  fVar16 = param_4[1] + *(float *)(param_1 + 0x3a8);
  fVar6 = *(float *)(param_2 + 1);
  fVar15 = param_4[1] - *(float *)(param_1 + 0x3a8);
  fVar17 = *param_4 + *(float *)(param_1 + 0x3a4);
  fVar21 = *param_4 - *(float *)(param_1 + 0x3a4);
  fVar10 = local_d8 * 10000.0 + fVar12;
  fVar14 = param_4[2] + *(float *)(param_1 + 0x3ac);
  fStack_c4 = (float)((ulonglong)*param_2 >> 0x20);
  fVar20 = local_d0 * 10000.0 + fVar6;
  fVar18 = local_d4 * 10000.0 + fStack_c4;
  fVar13 = param_4[2] - *(float *)(param_1 + 0x3ac);
  fVar11 = 3.4e+38;
  fVar7 = fVar10 - fVar12;
  fVar9 = fVar18 - fStack_c4;
  fVar5 = fVar20 - fVar6;
  if (fVar7 == 0.0) {
    fVar8 = 3.4e+38;
  }
  else {
    fVar8 = 1.0 / fVar7;
  }
  if (fVar9 == 0.0) {
    fVar19 = 3.4e+38;
  }
  else {
    fVar19 = 1.0 / fVar9;
  }
  if (fVar5 != 0.0) {
    fVar11 = 1.0 / fVar5;
  }
  uVar1 = (uint3)((uint)fVar6 >> 8);
  uVar3 = (ulonglong)uVar1 << 8;
  bVar2 = false;
  if (fVar21 <= fVar12) {
    if (fVar12 <= fVar17) {
      fVar8 = 0.0;
    }
    else {
      uVar3 = CONCAT71((uint7)uVar1,1);
      bVar2 = true;
      if (fVar17 < fVar10) goto LAB_140a0ae7c;
      fVar8 = (fVar17 - fVar12) * fVar8;
    }
  }
  else {
    uVar3 = CONCAT71((uint7)uVar1,1);
    bVar2 = true;
    if (fVar10 < fVar21) goto LAB_140a0ae7c;
    fVar8 = (fVar21 - fVar12) * fVar8;
  }
  uVar4 = (undefined7)(uVar3 >> 8);
  if (fVar15 <= fStack_c4) {
    if (fStack_c4 <= fVar16) {
      fVar19 = 0.0;
    }
    else {
      uVar3 = CONCAT71(uVar4,1);
      bVar2 = true;
      if (fVar16 < fVar18) goto LAB_140a0ae7c;
      fVar19 = (fVar16 - fStack_c4) * fVar19;
    }
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    bVar2 = true;
    if (fVar18 < fVar15) goto LAB_140a0ae7c;
    fVar19 = (fVar15 - fStack_c4) * fVar19;
  }
  if (fVar13 <= fVar6) {
    if (fVar6 <= fVar14) {
      fVar11 = 0.0;
      if (!bVar2) goto LAB_140a0afed;
    }
    else {
      if (fVar14 < fVar20) goto LAB_140a0ae7c;
      fVar11 = (fVar14 - fVar6) * fVar11;
    }
  }
  else {
    if (fVar20 < fVar13) goto LAB_140a0ae7c;
    fVar11 = (fVar13 - fVar6) * fVar11;
  }
  if (fVar8 <= fVar19) {
    fVar8 = fVar19;
  }
  if (fVar8 <= fVar11) {
    fVar8 = fVar11;
  }
  if ((0.0 <= fVar8) && (fVar8 <= 1.0)) {
    fVar12 = fVar8 * fVar7 + fVar12;
    fVar6 = fVar8 * fVar5 + fVar6;
    fStack_c4 = fVar8 * fVar9 + fStack_c4;
    if (((fVar21 - 0.1 < fVar12) &&
        (((fVar12 < fVar17 + 0.1 && (fVar15 - 0.1 < fStack_c4)) && (fStack_c4 < fVar16 + 0.1)))) &&
       ((fVar13 - 0.1 < fVar6 && (fVar6 < fVar14 + 0.1)))) {
LAB_140a0afed:
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
LAB_140a0ae7c:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140a0b040 FUN_140a0b040 body=189 status=ok
// SIG undefined FUN_140a0b040(void)

void FUN_140a0b040(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 5);
  if ((cVar2 != '\0') && (param_1[2] != 0)) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 5);
    lVar4 = *(longlong *)(lVar3 + 0x120);
    if ((lVar4 != 0) || (lVar4 = FUN_1423407b0(lVar3), lVar4 != 0)) {
      if (*(longlong *)(lVar4 + 400) == 0) {
        uVar5 = *(undefined8 *)(lVar4 + 0x3f8);
      }
      else {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
      }
      FUN_142880530(uVar5,param_1 + 2);
      param_1[2] = 0;
    }
  }
  if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*param_1 != 0) {
      lVar4 = FMemory::Realloc(*param_1,0,0);
      *param_1 = lVar4;
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  param_1[2] = 0;
  return;
}



// FUNCTION 140a0b100 FUN_140a0b100 body=384 status=ok
// SIG undefined FUN_140a0b100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140a0b100(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  char local_58 [80];
  
  if ((*(longlong *)(param_1 + 0x8b0) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x8b0) + 0x738), lVar2 == 0)) {
    uVar5 = FUN_14077c7b0();
    return (bool)uVar5;
  }
  lVar6 = FUN_1430e2e50(lVar2);
  if (lVar6 != 0) {
    FUN_142ced5e0(lVar6,local_58,1);
    if ((local_58[0] == '\t') || (local_58[0] == '\0')) {
      return false;
    }
  }
  fVar1 = *(float *)(param_1 + 0x1c0);
  FUN_1430d5dc0(lVar2,&local_78);
  FUN_1430d5f10(lVar2,&local_68,lVar6);
  fVar3 = (float)DAT_1468657c0;
  fVar4 = DAT_1468657c0._4_4_;
  auVar7._4_4_ = local_74 - local_64;
  auVar7._0_4_ = local_78 - local_68;
  auVar7._8_4_ = local_70 - local_60;
  auVar7._12_4_ = 0;
  auVar7 = divps(auVar7,_DAT_1468657c0);
  fVar8 = (local_78 - local_68) - (float)(int)auVar7._0_4_ * fVar3;
  fVar9 = (local_74 - local_64) - (float)(int)auVar7._4_4_ * fVar4;
  fVar8 = (float)(((uint)(fVar3 + fVar8) ^ (uint)fVar8) & -(uint)(0.0 <= fVar8) ^
                 (uint)(fVar3 + fVar8));
  fVar9 = (float)(((uint)(fVar4 + fVar9) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                 (uint)(fVar4 + fVar9));
  fVar8 = (float)(((uint)(fVar8 - fVar3) ^ (uint)fVar8) & -(uint)(_DAT_1468657b0 < fVar8) ^
                 (uint)fVar8);
  fVar9 = (float)(((uint)(fVar9 - fVar4) ^ (uint)fVar9) & -(uint)(fRam00000001468657b4 < fVar9) ^
                 (uint)fVar9);
  return fVar9 * fVar9 + fVar8 * fVar8 <= fVar1 * fVar1;
}



// FUNCTION 140a0b280 FUN_140a0b280 body=164 status=ok
// SIG undefined FUN_140a0b280(void)

bool FUN_140a0b280(longlong param_1)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  
  puVar1 = (uint *)(param_1 + 0x438);
  if (((int)*puVar1 < 0) && (DAT_1468b6148 != 0)) {
    FConfigCacheIni::GetInt
              (DAT_1468b6148,L"OakGameFinalBaseGameChunk",L"FinalChunk",puVar1,&DAT_1468e2410);
  }
  uVar5 = 0;
  do {
    plVar4 = (longlong *)FWindowsPlatformMisc::GetPlatformChunkInstall();
    bVar2 = true;
    if (((plVar4 != (longlong *)0x0) &&
        (iVar3 = (**(code **)(*plVar4 + 8))(plVar4,uVar5), -1 < iVar3)) && (iVar3 < 2)) {
      bVar2 = false;
    }
  } while ((bVar2) && (uVar5 = uVar5 + 1, uVar5 <= *puVar1));
  return bVar2;
}



// FUNCTION 140a0b330 FUN_140a0b330 body=335 status=ok
// SIG undefined FUN_140a0b330(void)

undefined8 FUN_140a0b330(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  float *pfVar6;
  float fVar7;
  undefined1 local_18 [16];
  
  if (param_1[3] == 0) {
    return 0;
  }
  if (param_1[2] == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  if (*(char *)(param_1[3] + 0xe23) != '\0') {
    if (*(char *)((longlong)param_1 + 0x91) == '\0') {
      return 0;
    }
    cVar4 = FUN_14122ed50();
    if (cVar4 == '\0') {
      lVar1 = param_1[2];
      pfVar6 = (float *)(**(code **)(**(longlong **)(lVar1 + 0xb30) + 0x308))
                                  (*(longlong **)(lVar1 + 0xb30),local_18);
      bVar3 = *pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1] + pfVar6[2] * pfVar6[2] < DAT_146294ec0;
      cVar4 = FUN_142fa84f0(lVar1);
      if ((*(longlong *)(lVar1 + 0xaf0) == 0) ||
         (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xaf0) + 0x80), lVar2 == 0)) {
        cVar5 = '\x01';
      }
      else {
        cVar5 = FUN_142c48f60(lVar2,*(undefined8 *)(lVar1 + 0xb48),*(undefined8 *)(lVar1 + 0xb30));
      }
      if ((*(int *)(lVar1 + 0xc58) < 1) ||
         (fVar7 = *(float *)(*(longlong *)(lVar1 + 0xc50) + 0xc), fVar7 < -1.0)) {
        fVar7 = -2.0;
      }
      if ((((*(char *)(lVar1 + 0xc70) == '\0') && (bVar3)) && (cVar4 == '\0')) &&
         ((cVar5 != '\0' && (fVar7 < -1.0)))) {
        return 1;
      }
      return 0;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 140a0b480 FUN_140a0b480 body=26 status=ok
// SIG undefined FUN_140a0b480(void)

bool FUN_140a0b480(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 140a0b4a0 FUN_140a0b4a0 body=56 status=ok
// SIG undefined FUN_140a0b4a0(void)

ulonglong FUN_140a0b4a0(longlong param_1,int param_2)

{
  ulonglong in_RAX;
  longlong lVar1;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1900))) {
    lVar1 = *(longlong *)(param_1 + 0x18f8);
    if (*(longlong *)(param_1 + 0x18f8) == 0) {
      lVar1 = param_1 + 0x1478;
    }
    return (ulonglong)*(byte *)(lVar1 + 0x14 + (longlong)param_2 * 0x18);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a0b4f0 FUN_140a0b4f0 body=66 status=ok
// SIG undefined FUN_140a0b4f0(void)

longlong FUN_140a0b4f0(longlong param_1,float param_2)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xaf0);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x118) != '\0')) &&
      (*(float *)(lVar1 + 0x128) + *(float *)(param_1 + 0xcac) <= param_2)) &&
     ((*(char *)(param_1 + 0xca8) != '\0' && (*(char *)(param_1 + 0xca9) != '\0')))) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 140a0b540 FUN_140a0b540 body=574 status=ok
// SIG undefined FUN_140a0b540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_140a0b540(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  longlong lVar8;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8 [4];
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar5 = (longlong *)UAssetManager::GetAssetRegistry();
  local_b8 = 0xffffffff;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_68 = 0xffffffff;
  lVar6 = FUN_142a2f930();
  uVar2 = local_f0;
  lVar8 = (longlong)(int)local_f0;
  uVar1 = *(undefined8 *)(lVar6 + 0x18);
  iVar3 = (int)local_f0 + 1;
  local_f0 = CONCAT44(local_f0._4_4_,iVar3);
  if (local_f0._4_4_ < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_f8,uVar2 & 0xffffffff);
  }
  uVar2 = local_120;
  *(undefined8 *)(local_f8 + lVar8 * 8) = uVar1;
  lVar6 = (longlong)(int)local_120;
  iVar3 = (int)local_120 + 1;
  local_120 = CONCAT44(local_120._4_4_,iVar3);
  if (local_120._4_4_ < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_128,uVar2 & 0xffffffff)
    ;
  }
  *(undefined8 *)(local_128 + lVar6 * 8) = *param_2;
  local_138 = 0;
  local_130 = 0;
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_128,&local_138);
  uVar7 = 0;
  if ((int)local_130 == 0) goto LAB_140a0b6bc;
  if (*(int *)(local_138 + 0x40) != 1) {
    uVar7 = 0;
    if (*(int *)(local_138 + 0x40) < 2) {
      uVar7 = 1;
    }
    goto LAB_140a0b6bc;
  }
  iVar3 = **(int **)(local_138 + 0x38);
  uVar4 = (**(code **)(*plVar5 + 0xb8))(plVar5);
  if (uVar4 < 2) {
LAB_140a0b6ad:
    uVar7 = 0;
  }
  else {
    plVar5 = (longlong *)FWindowsPlatformMisc::GetPlatformChunkInstall();
    if (plVar5 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar5 + 8))(plVar5,iVar3 + 1);
      if (uVar4 < 2) goto LAB_140a0b6ad;
    }
    uVar7 = 1;
  }
LAB_140a0b6bc:
  FUN_1404be960(&local_138);
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_98);
  local_a0 = 0;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_e8,0);
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 140a0b790 FUN_140a0b790 body=180 status=ok
// SIG undefined FUN_140a0b790(void)

ulonglong FUN_140a0b790(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong in_RAX;
  uint7 uVar4;
  longlong lVar3;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x388);
    in_RAX = (ulonglong)*(int *)(param_1 + 0x390);
    plVar1 = plVar5 + in_RAX;
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if ((*plVar5 != 0) && (in_RAX = FUN_1405ebf90(), (char)in_RAX != '\0')) {
        lVar3 = *plVar5;
        in_RAX = 0;
        if (lVar3 != 0) {
          if (param_2 != (longlong *)0x0) {
            *param_2 = lVar3;
            lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x1b8) + 0xb0);
            uVar4 = (uint7)((ulonglong)*(longlong *)(lVar3 + 0x1b8) >> 8);
            if ((lVar2 != 0) && (*(char *)(lVar2 + 0x45) != '\0')) {
              *(undefined1 *)(param_2 + 1) = 1;
              return CONCAT71(uVar4,1);
            }
            lVar3 = (ulonglong)uVar4 << 8;
            *(undefined1 *)(param_2 + 1) = 0;
          }
          return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        }
        break;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a0b850 FUN_140a0b850 body=53 status=ok
// SIG undefined FUN_140a0b850(void)

ulonglong FUN_140a0b850(longlong param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  uint7 uVar3;
  
  uVar2 = in_RAX & 0xffffffffffffff00;
  if (0 < *(int *)(param_1 + 0xc58)) {
    lVar1 = *(longlong *)(param_1 + 0xc50);
    uVar3 = (uint7)((ulonglong)lVar1 >> 8);
    if ((*(char *)(lVar1 + 6) == '\0') && (*(char *)(lVar1 + 7) == '\0')) {
      uVar2 = (ulonglong)uVar3 << 8;
    }
    else {
      uVar2 = CONCAT71(uVar3,1);
    }
  }
  if ((*(char *)(param_1 + 0xb60) == '\0') && ((char)uVar2 == '\0')) {
    return uVar2;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 140a0b8a0 IsValidAIRotation body=47 status=ok
// SIG undefined IsValidAIRotation(void)

undefined1 UAIBlueprintHelperLibrary::IsValidAIRotation(float *param_1)

{
  if ((((float)DAT_146294aa0 == *param_1) && (DAT_146294aa0._4_4_ == param_1[1])) &&
     (DAT_146294aa8 == param_1[2])) {
    return 0;
  }
  return 1;
}



// FUNCTION 140a0b8d0 FUN_140a0b8d0 body=298 status=ok
// SIG undefined FUN_140a0b8d0(void)

void FUN_140a0b8d0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  
  *(undefined4 *)(param_1 + 0x19d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19d0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x19d4)) {
    FUN_140a13a90(param_1 + 0x1908,0);
  }
  *(undefined8 *)(param_1 + 0x19dc) = 0;
  iVar7 = 0;
  lVar5 = *(longlong *)(param_1 + 0x18f8);
  if (*(longlong *)(param_1 + 0x18f8) == 0) {
    lVar5 = param_1 + 0x1478;
  }
  lVar1 = lVar5 + (longlong)*(int *)(param_1 + 0x1900) * 0x18;
  do {
    if (lVar5 == lVar1) {
      return;
    }
    cVar6 = param_2;
    if (*(char *)(lVar5 + 0x14) != '\0') {
      uVar2 = *(undefined4 *)(lVar5 + 8);
      if (param_2 != '\0') {
        iVar3 = rand();
        iVar4 = (int)((float)iVar3 * 3.051851e-05 + (float)iVar3 * 3.051851e-05);
        iVar3 = 1;
        if (iVar4 < 2) {
          iVar3 = iVar4;
        }
        if (iVar3 == 1) {
          FUN_140a00530(param_1,*(undefined4 *)(lVar5 + 8),*(undefined8 *)(param_1 + 0x1458),0);
          iVar7 = iVar7 + 1;
          cVar6 = '\0';
          if (iVar7 < *(int *)(param_1 + 0x1450)) {
            cVar6 = param_2;
          }
          goto LAB_140a0b9d3;
        }
      }
      FUN_140a0ba00(param_1,uVar2);
    }
LAB_140a0b9d3:
    lVar5 = lVar5 + 0x18;
    param_2 = cVar6;
  } while( true );
}



// FUNCTION 140a0ba00 FUN_140a0ba00 body=388 status=ok
// SIG undefined FUN_140a0ba00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a0ba00(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
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
  ulonglong local_18;
  
  if (-1 < param_2) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
    if (param_2 < (int)param_1[800]) {
      plVar2 = (longlong *)param_1[799];
      if ((longlong *)param_1[799] == (longlong *)0x0) {
        plVar2 = param_1 + 0x28f;
      }
      (**(code **)(*param_1 + 0x420))(param_1,&local_48,plVar2[(longlong)param_2 * 3],0);
      local_90 = 0x3f800000;
      local_78 = 0x3f800000;
      uStack_74 = 0x3f800000;
      local_58 = local_48;
      uStack_54 = uStack_44;
      uStack_50 = uStack_40;
      uStack_4c = uStack_3c;
      local_70 = 0x3f800000;
      FQuat::Rotator(&local_58,&local_88);
      local_68 = local_88;
      uStack_50 = uStack_30;
      local_60 = local_80;
      local_90 = uStack_30;
      lVar1 = param_1[0x24];
      local_98 = local_38;
      uStack_94 = uStack_34;
      if (lVar1 == 0) {
        lVar1 = FUN_1423407b0(param_1);
      }
      local_b8 = &local_78;
      local_a8 = 0;
      local_b0 = 1;
      FUN_142d928b0(lVar1,param_1[0x289],&local_98,&local_68);
      FUN_140a1d930(param_1,param_2,0,1);
    }
  }
  return;
}



// FUNCTION 140a0bb90 FUN_140a0bb90 body=268 status=ok
// SIG undefined FUN_140a0bb90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a0bb90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  
  lVar2 = *(longlong *)(param_1 + 0x7b8);
  if ((lVar2 == 0) || (*(char *)(param_1 + 0x790) == '\0')) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
    lVar2 = *(longlong *)(param_1 + 0x7b8);
    if (lVar1 == 0) {
      uVar3 = 0;
      goto LAB_140a0bbf2;
    }
  }
  uVar3 = *(undefined4 *)(lVar1 + 0x790);
LAB_140a0bbf2:
  *(undefined4 *)(param_1 + 0x7a0) = param_3;
  *(undefined4 *)(param_1 + 0x7a4) = uVar3;
  *(undefined8 *)(param_1 + 0x798) = param_2;
  lVar2 = *(longlong *)(lVar2 + 0x168);
  if (lVar2 == 0) {
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
  }
  else {
    local_28 = *(undefined8 *)(lVar2 + 0x220);
    local_20 = *(undefined4 *)(lVar2 + 0x228);
  }
  *(undefined8 *)(param_1 + 0x7a8) = local_28;
  *(undefined4 *)(param_1 + 0x7b0) = local_20;
  FUN_14288e3d0(param_1 + 0x30,1);
  return 1;
}



// FUNCTION 140a0bca0 thunk_FUN_140a05c80 body=5 status=ok
// SIG undefined thunk_FUN_140a05c80(void)

void thunk_FUN_140a05c80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uStackX_8;
  longlong alStack_28 [2];
  
  plVar1 = (longlong *)(param_1 + 0x410);
  uVar9 = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  if (*(int *)(param_1 + 0x41c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  lVar6 = *(longlong *)(param_1 + 0x420);
  if (lVar6 != 0) {
    plVar7 = *(longlong **)(lVar6 + 0x70);
    plVar2 = plVar7 + (longlong)*(int *)(lVar6 + 0x78) * 3;
    if (plVar7 != plVar2) {
      while (*plVar7 != param_2) {
        plVar7 = plVar7 + 3;
        if (plVar7 == plVar2) {
          return;
        }
      }
      puVar10 = (undefined8 *)plVar7[1];
      uVar11 = (longlong)(int)plVar7[2] & 0x1fffffffffffffff;
      if (puVar10 + (int)plVar7[2] < puVar10) {
        uVar11 = uVar9;
      }
      if (uVar11 != 0) {
        do {
          uStackX_8 = *puVar10;
          puVar4 = (undefined8 *)FName::ToString(&uStackX_8,alStack_28);
          if (*(int *)(puVar4 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar4;
          }
          uVar5 = UObject::GetPrivateStaticClass();
          lVar6 = FUN_141799410(uVar5,0,puVar8,0);
          if (alStack_28[0] != 0) {
            FMemory::Free();
          }
          if (lVar6 != 0) {
            iVar3 = *(int *)(param_1 + 0x418);
            *(int *)(param_1 + 0x418) = iVar3 + 1;
            if (*(int *)(param_1 + 0x41c) < iVar3 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
            }
            *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar6;
          }
          puVar10 = puVar10 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar11);
      }
    }
  }
  return;
}



// FUNCTION 140a0bcb0 FUN_140a0bcb0 body=108 status=ok
// SIG undefined FUN_140a0bcb0(void)

void FUN_140a0bcb0(longlong param_1)

{
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x400,&DAT_146865c70);
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x400,&DAT_146865c78);
  FUN_142ca5d70(param_1);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    FUN_140b89c10();
  }
  return;
}



// FUNCTION 140a0bd20 FUN_140a0bd20 body=277 status=ok
// SIG undefined FUN_140a0bd20(void)

void FUN_140a0bd20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if ((char)param_1[0x67] == '\0') {
    if ((int)param_1[0x69] == 0) {
      (**(code **)(*param_1 + 0x430))(param_1,param_1 + 0x68,param_1 + 0x6a);
    }
    plVar6 = (longlong *)param_1[0x68];
    plVar1 = plVar6 + (int)param_1[0x69];
    if (plVar6 != plVar1) {
      do {
        lVar2 = *plVar6;
        if (lVar2 != 0) {
          FUN_1405a32b0(lVar2,0,0);
          plVar3 = (longlong *)param_1[0x6a];
          uVar5 = (longlong)(int)param_1[0x6b] & 0x1fffffffffffffff;
          if (plVar3 + (int)param_1[0x6b] < plVar3) {
            uVar5 = 0;
          }
          uVar4 = 0;
          if (uVar5 != 0) {
            do {
              if (*plVar3 != 0) {
                FUN_1405a34b0(lVar2);
              }
              plVar3 = plVar3 + 1;
              uVar4 = uVar4 + 1;
            } while (uVar4 != uVar5);
          }
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
    *(undefined1 *)(param_1 + 0x67) = 1;
  }
  return;
}



// FUNCTION 140a0be40 FUN_140a0be40 body=51 status=ok
// SIG undefined FUN_140a0be40(void)

void FUN_140a0be40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140a044d0(*(undefined4 *)(param_1 + 0x270),*(undefined8 *)(param_1 + 0x118),
                        *(undefined8 *)(param_1 + 0x268));
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined1 *)(lVar1 + 0x24) = 0;
  }
  return;
}



// FUNCTION 140a0be80 FUN_140a0be80 body=61 status=ok
// SIG undefined FUN_140a0be80(void)

void FUN_140a0be80(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x2f0) != '\0') {
    iVar2 = FUN_14233f450();
    if (iVar2 == 3) {
      cVar1 = FUN_1409fcb00(param_1);
      if (cVar1 != '\0') {
        FUN_140a199b0(param_1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a0bec0 FUN_140a0bec0 body=67 status=ok
// SIG undefined FUN_140a0bec0(void)

void FUN_140a0bec0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar1 = FUN_1428cf800(uVar3);
    if (iVar1 == 3) {
      return;
    }
  }
  FUN_140a1e6b0(param_1);
  return;
}



// FUNCTION 140a0bf10 FUN_140a0bf10 body=1188 status=ok
// SIG undefined FUN_140a0bf10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a0bf10(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int *piVar12;
  int *piVar13;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  longlong local_c0 [2];
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  if (param_2 != (longlong *)0x0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
    lVar6 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar6 != 0) {
      lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar6 != 0) {
        uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
        iVar5 = FUN_1428cf800(uVar7);
        if (iVar5 == 3) {
          return;
        }
      }
      FWeakObjectPtr::operator=(param_1 + 0x8d,param_2);
      pwVar8 = _guard_xfg_dispatch_icall_nop
                         (L"&AOakAudioPatchBeneathTheMeridian::MayaVehicleDestroyed",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(local_c0,pwVar3 + 2,1);
      plVar9 = param_2 + 0x52;
      FWeakObjectPtr::operator=(&local_108,0);
      local_100 = 0;
      FWeakObjectPtr::operator=(&local_108,param_1);
      local_100 = local_c0[0];
      local_f8 = 0;
      if ((local_c0[0] != 0) && (lVar6 = FWeakObjectPtr::Get(&local_108), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_100);
      }
      piVar12 = (int *)*plVar9;
      lVar6 = param_2[0x53];
      for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)(int)lVar6 * 4; piVar13 = piVar13 + 4)
      {
        if ((((*piVar13 == (int)local_108) && (piVar13[1] == local_108._4_4_)) ||
            ((cVar4 = FWeakObjectPtr::IsValid(piVar13), cVar4 == '\0' &&
             (cVar4 = FWeakObjectPtr::IsValid(&local_108), cVar4 == '\0')))) &&
           (*(longlong *)(piVar13 + 2) == local_100)) {
          if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_140a0c0fd;
          break;
        }
      }
      iVar5 = (int)param_2[0x53];
      *(int *)(param_2 + 0x53) = iVar5 + 1;
      if (*(int *)((longlong)param_2 + 0x29c) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar5);
      }
      piVar12 = (int *)((longlong)iVar5 * 0x10 + *plVar9);
      *piVar12 = (int)local_108;
      piVar12[1] = local_108._4_4_;
      *(longlong *)(piVar12 + 2) = local_100;
LAB_140a0c0fd:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
      plVar9 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x8d);
      uVar7 = (**(code **)(*plVar9 + 0x148))(plVar9);
      lVar6 = FUN_142f6c9f0(uVar7);
      if (lVar6 != 0) {
        local_e8 = 0;
        local_f0 = &DAT_1441d2800;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0xffffffff;
        local_cc = 0;
        local_c8 = 0;
        uVar7 = FWeakObjectPtr::Get(param_1 + 0x8b);
        FMemFileOut::seekp(&local_f0,uVar7);
        local_e0 = CONCAT44(uRam0000000146294ea4,_DAT_146294ea0);
        uStack_d8 = CONCAT44(uRam0000000146294eac,uRam0000000146294ea8);
        uVar10 = FUN_142f5de00(lVar6,&local_f0,0,param_1);
        if ((uVar10 & 0xfffffffb) != 0) {
          FName::FName(&local_f8,L"TryBeginVehicleMusic",1);
          plVar9 = param_1 + 0x91;
          plVar11 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar11 != (longlong *)0x0) {
            *plVar11 = (longlong)&PTR_LAB_1441db670;
            plVar11[2] = local_f8;
            FWeakObjectPtr::operator=(plVar11 + 3,param_1);
            lVar6 = FDelegateHandle::GenerateNewID();
            plVar11[5] = lVar6;
            uVar7 = FWeakObjectPtr::Get(plVar11 + 3);
            lVar6 = FUN_14178ac60(uVar7,local_f8);
            plVar11[1] = lVar6;
            *plVar11 = (longlong)&PTR_LAB_1441db6b8;
          }
          if (&local_108 != plVar9) {
            if (plVar11 == (longlong *)0x0) {
              if (((int)param_1[0x92] != 0) &&
                 (plVar1 = (longlong *)*plVar9, plVar1 != (longlong *)0x0)) {
                (**(code **)(*plVar1 + 0x28))(plVar1,0);
                if (*plVar9 != 0) {
                  lVar6 = FMemory::Realloc(*plVar9,0,0);
                  *plVar9 = lVar6;
                }
                *(undefined4 *)(param_1 + 0x92) = 0;
              }
            }
            else {
              (**(code **)(*plVar11 + 0x30))(plVar11,plVar9);
            }
          }
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x28))(plVar11,0);
            lVar6 = FMemory::Realloc(plVar11,0,0);
            if (lVar6 != 0) {
              FMemory::Free(lVar6);
            }
          }
          lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
          if (*(longlong *)(lVar6 + 400) == 0) {
            uVar7 = *(undefined8 *)(lVar6 + 0x3f8);
          }
          else {
            uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
          }
          local_c0[1] = 0;
          local_b0 = 0;
          if (((plVar9 != local_c0 + 1) && ((int)param_1[0x92] != 0)) &&
             (plVar9 = (longlong *)*plVar9, plVar9 != (longlong *)0x0)) {
            (**(code **)(*plVar9 + 0x30))(plVar9,local_c0 + 1);
          }
          FWeakObjectPtr::operator=(local_a8,0);
          local_110 = 0xbf800000;
          local_118 = 0;
          local_a0 = 0;
          local_68 = (longlong *)0x0;
          local_58 = 0;
          local_98 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar7,param_1 + 0x93,local_c0 + 1,0x40a00000);
          if (local_58 != 0) {
            plVar9 = local_88;
            if (local_68 != (longlong *)0x0) {
              plVar9 = local_68;
            }
            if (plVar9 != (longlong *)0x0) {
              (**(code **)(*plVar9 + 0x10))(plVar9,0);
            }
          }
          if (local_68 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(local_c0 + 1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a0c400 FUN_140a0c400 body=250 status=ok
// SIG undefined FUN_140a0c400(void)

void FUN_140a0c400(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (param_2 != 0) {
    plVar6 = *(longlong **)(param_2 + 0x118);
  }
  if (plVar6 != (longlong *)0x0) {
    uVar3 = ALevelScriptActor::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar3);
    if (lVar4 != 0) {
      plVar6 = *(longlong **)(param_1 + 0x38);
      plVar8 = (longlong *)((longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff);
      if (plVar6 + *(int *)(param_1 + 0x40) < plVar6) {
        plVar8 = plVar7;
      }
      if (plVar8 != (longlong *)0x0) {
        do {
          lVar2 = *plVar6;
          *(byte *)(lVar4 + 0x311) = *(byte *)(lVar4 + 0x311) | 0x10;
          pbVar5 = *(byte **)(lVar4 + 0x2c0);
          pbVar1 = pbVar5 + (longlong)*(int *)(lVar4 + 0x2c8) * 0x18;
          for (; pbVar5 != pbVar1; pbVar5 = pbVar5 + 0x18) {
            if (*(longlong *)(pbVar5 + 8) == lVar2) {
              *pbVar5 = *pbVar5 | 8;
              break;
            }
          }
          if ((*(byte *)(lVar4 + 0x311) & 8) != 0) {
            *(byte *)(lVar4 + 0x311) = *(byte *)(lVar4 + 0x311) & 0xf7;
            FUN_140a01a00(lVar4);
          }
          plVar6 = plVar6 + 1;
          plVar7 = (longlong *)((longlong)plVar7 + 1);
        } while (plVar7 != plVar8);
      }
    }
  }
  return;
}



// FUNCTION 140a0c500 FUN_140a0c500 body=99 status=ok
// SIG undefined FUN_140a0c500(void)

void FUN_140a0c500(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x3b,param_1 + 0x41);
  param_1[0x3d] = param_1[0x4a];
  *(undefined1 *)(param_1 + 0x3e) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x1f1) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000140a0c55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 140a0c570 FUN_140a0c570 body=638 status=ok
// SIG undefined FUN_140a0c570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a0c570(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  lVar3 = FUN_142f6c9f0(lVar3);
  if (lVar3 != 0) {
    lVar4 = UWebSocketNetDriver::StaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140c1b640(lVar3,param_2);
    }
  }
  if (((*(byte *)(param_1 + 0x2d0) & 1) == 0) || ((*(byte *)(param_1 + 0x311) & 0x10) != 0)) {
    FUN_140a01a00(param_1);
  }
  else {
    *(byte *)(param_1 + 0x311) = *(byte *)(param_1 + 0x311) | 8;
    if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar3 = FUN_1423407b0(param_1), lVar3 == 0)) {
      return;
    }
    local_b8 = FUN_140a01a00;
    lVar3 = *(longlong *)(param_1 + 0x120);
    uStack_b0 = 0;
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x2d4);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar5 + 3) = uStack_b0;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_ac;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar3;
      *plVar5 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_c0 = 0xbf800000;
    local_c8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar6,param_1 + 0x318,&local_a8,uVar1);
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
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar3 = FMemory::Realloc(plVar5,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140a0c800 FUN_140a0c800 body=20 status=ok
// SIG undefined FUN_140a0c800(void)

void FUN_140a0c800(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lStackX_8;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [32];
  
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x2f8) = 3;
    FUN_140a20420();
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x300);
  plVar5 = (longlong *)*plVar1;
  uVar8 = (ulonglong)*(int *)(param_1 + 0x308);
  plVar6 = plVar5 + uVar8 * 5;
  if (plVar5 != plVar6) {
    do {
      if (*plVar5 != 0) {
        FUN_14058f880(&lStackX_8,plVar5);
        cVar2 = FUN_14059ee80(lStackX_8);
        if (cVar2 != '\0') {
          if (plVar5[4] == 0) {
            FUN_1405ac8f0(plVar5 + 1,0,4);
          }
          else {
            lStack_58 = 0;
            uStack_50 = 0;
            FUN_1405a2d20(lStackX_8,auStack_38,plVar5[4],0,0,&lStack_58);
            FUN_140591060(auStack_38);
            if (lStack_58 != 0) {
              FMemory::Free();
            }
          }
        }
        uVar4 = FUN_14058f8f0(auStack_48,&lStackX_8);
        FUN_1405a64e0(uVar4);
        if (lStackX_8 != 0) {
          FUN_1405a53f0();
          lStackX_8 = 0;
        }
      }
      plVar5 = plVar5 + 5;
    } while (plVar5 != plVar6);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x308);
  }
  iVar3 = *(int *)(param_1 + 0x30c);
  plVar6 = (longlong *)*plVar1;
  uVar7 = (uint)uVar8;
  if (iVar3 < 0) {
    if (uVar7 != 0) {
      do {
        FUN_140591060(plVar6 + 1);
        if (*plVar6 != 0) {
          FUN_1405a53f0();
          *plVar6 = 0;
        }
        plVar6 = plVar6 + 5;
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 != 0);
      iVar3 = *(int *)(param_1 + 0x30c);
    }
    *(undefined4 *)(param_1 + 0x308) = 0;
    if (iVar3 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (plVar1,0);
    }
  }
  else {
    while (uVar7 != 0) {
      FUN_140591060(plVar6 + 1);
      if (*plVar6 != 0) {
        FUN_1405a53f0();
        *plVar6 = 0;
      }
      plVar6 = plVar6 + 5;
      uVar7 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar7;
    }
    *(undefined4 *)(param_1 + 0x308) = 0;
  }
  return;
}



// FUNCTION 140a0c820 FUN_140a0c820 body=90 status=ok
// SIG undefined FUN_140a0c820(void)

undefined1 FUN_140a0c820(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1413cb880();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      lVar2 = FUN_140a044d0(*(undefined4 *)(lVar2 + 0x270),*(undefined8 *)(lVar2 + 0x118),
                            *(undefined8 *)(lVar2 + 0x268));
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x24) = 0;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140a0c8a0 FUN_140a0c8a0 body=178 status=ok
// SIG undefined FUN_140a0c8a0(void)

void FUN_140a0c8a0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar1 = (undefined8 *)(param_1 + 600);
  *(undefined1 *)(param_1 + 0x250) = 1;
  FUN_140a11ee0(puVar1);
  plVar3 = (longlong *)*puVar1;
  uVar5 = (ulonglong)*(int *)(param_1 + 0x260);
  plVar2 = plVar3 + uVar5;
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 != 0) {
        FUN_1405ac930();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x260);
    plVar3 = (longlong *)*puVar1;
  }
  uVar4 = (uint)uVar5;
  while (uVar4 != 0) {
    if (*plVar3 != 0) {
      FUN_1405a53f0();
      *plVar3 = 0;
    }
    plVar3 = plVar3 + 1;
    uVar4 = (int)uVar5 - 1;
    uVar5 = (ulonglong)uVar4;
  }
  *(undefined4 *)(param_1 + 0x260) = 0;
  if (*(int *)(param_1 + 0x264) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar1,0);
  }
  FUN_140a1e990(param_1);
  return;
}



// FUNCTION 140a0c960 FUN_140a0c960 body=210 status=ok
// SIG undefined FUN_140a0c960(void)

void FUN_140a0c960(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong local_18;
  ulonglong local_10;
  
  DAT_1468657a0 = DAT_1468657a0 == '\0';
  if (param_2 != (longlong *)0x0) {
    pwVar3 = L"SAWS Enabled";
    if ((bool)DAT_1468657a0) {
      pwVar3 = L"SAWS Disabled";
    }
    local_10 = 0;
    local_18 = 0;
    if (*pwVar3 != L'\0') {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (pwVar3[lVar2] != L'\0');
      uVar1 = (int)lVar2 + 1;
      local_10 = (ulonglong)uVar1;
      if (0 < (int)uVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,pwVar3,(longlong)(int)uVar1 * 2);
    }
    (**(code **)(*param_2 + 0xc60))(param_2,&local_18,0,0);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140a0ca40 FUN_140a0ca40 body=19 status=ok
// SIG undefined FUN_140a0ca40(void)

void FUN_140a0ca40(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x570) = 0;
  return;
}



// FUNCTION 140a0ca60 FUN_140a0ca60 body=151 status=ok
// SIG undefined FUN_140a0ca60(void)

void FUN_140a0ca60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x578) = 1;
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x568) == '\x01')) {
    lVar1 = FUN_142df3580(0);
    if (lVar1 != 0) {
      *(longlong *)(param_1 + 0x558) = lVar1;
    }
    *(undefined1 *)(param_1 + 0x568) = 2;
    FUN_140a0e5b0(param_1);
  }
  lVar1 = FUN_142df3510(param_3);
  if (lVar1 != 0) {
    FUN_142df2ca0(lVar1,*(undefined8 *)(param_1 + 0x558));
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FUN_1407c4f50();
  }
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FUN_140751980(*(longlong *)(param_1 + 0x570),param_3);
  }
  return;
}



// FUNCTION 140a0cb00 FUN_140a0cb00 body=127 status=ok
// SIG undefined FUN_140a0cb00(void)

void FUN_140a0cb00(longlong param_1,longlong param_2)

{
  char cVar1;
  float fVar2;
  
  if ((((param_2 != 0) && (*(longlong *)(param_2 + 0x2b0) != 0)) &&
      (*(char *)(param_1 + 0x328) == '\0')) &&
     (fVar2 = (float)FUN_142d19870(), fVar2 - *(float *)(param_2 + 0x1d8) <= 0.0001)) {
    cVar1 = FUN_1409fcb00(param_1);
    if (cVar1 != '\0') {
      FUN_140a01420(param_1,param_2);
      return;
    }
    FUN_142d8f3b0(*(undefined8 *)(param_1 + 0x118),DAT_146865c28);
  }
  return;
}



// FUNCTION 140a0cb90 FUN_140a0cb90 body=667 status=ok
// SIG undefined FUN_140a0cb90(void)

void FUN_140a0cb90(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  
  if ((char)param_1[0x49] != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  plVar4 = (longlong *)FUN_140a09850();
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*plVar4 + 0x950))(plVar4);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar5 + 0x780))(plVar5), cVar2 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    *(char *)((longlong)param_1 + 0x249) = cVar2;
    if (((cVar2 == '\0') || (plVar5 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*plVar5 + 0x778))(plVar5), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x24a) = uVar3;
    plVar5 = plVar4;
    do {
      lVar6 = FUN_14222e2a0(plVar5);
      if (lVar6 == 0) {
        if (plVar5 != (longlong *)0x0) {
          lVar6 = FUN_1430e5840();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) goto LAB_140a0ccc0;
        }
        break;
      }
      plVar5 = (longlong *)FUN_14222e2a0(plVar5);
    } while (plVar5 != (longlong *)0x0);
    lVar6 = FUN_140a098d0(plVar4);
    if (lVar6 == 0) {
LAB_140a0ccc4:
      uVar3 = 0;
    }
    else {
      lVar7 = FUN_1414d8e60();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140a0ccc4;
LAB_140a0ccc0:
      uVar3 = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x24b) = uVar3;
  }
  FUN_140a0bd20(param_1);
  if (*(char *)((longlong)param_1 + 0x24b) == '\0') {
    cVar2 = *(char *)((longlong)param_1 + 0x249);
LAB_140a0cd12:
    if (cVar2 != '\0') {
      uVar10 = 0;
      goto LAB_140a0cd21;
    }
  }
  else {
    plVar4 = (longlong *)FUN_140a09850(param_1);
    if ((plVar4 != (longlong *)0x0) &&
       (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x950))(plVar4), plVar4 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*plVar4 + 0x780))(plVar4);
      goto LAB_140a0cd12;
    }
  }
  uVar10 = 0x3e4ccccd;
LAB_140a0cd21:
  *(undefined4 *)(param_1 + 0xe) = uVar10;
  (**(code **)(*param_1 + 0x358))(param_1,1);
  FUN_140a170c0(param_1 + 0x4b,param_1);
  *(undefined1 *)(param_1 + 0x5f) = 3;
  FUN_140a149f0(param_1,1);
  FUN_140a119c0(param_1);
  lVar6 = FUN_140a09850(param_1);
  if (((lVar6 != 0) && ((*(byte *)(lVar6 + 0x80) & 1) == 0)) &&
     (cVar2 = FUN_14307eaa0(lVar6,0,param_1), cVar2 != '\0')) {
    plVar4 = (longlong *)param_1[0x44];
    uVar8 = 0;
    uVar9 = (longlong)(int)param_1[0x45] & 0x1fffffffffffffff;
    if (plVar4 + (int)param_1[0x45] < plVar4) {
      uVar9 = uVar8;
    }
    if (uVar9 != 0) {
      do {
        plVar5 = (longlong *)*plVar4;
        if (plVar5 != (longlong *)0x0) {
          if ((plVar5[0x5a] != 0) && (*(longlong *)(plVar5[0x5a] + 0x30) != 0)) {
            FUN_140593a10();
          }
          if ((plVar5[0x5b] != 0) && (*(longlong *)(plVar5[0x5b] + 0x30) != 0)) {
            FUN_140593a10();
          }
          (**(code **)(*plVar5 + 0x280))(plVar5,1);
        }
        plVar4 = plVar4 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar9);
    }
  }
  return;
}



// FUNCTION 140a0ce30 FUN_140a0ce30 body=928 status=ok
// SIG undefined FUN_140a0ce30(void)

void FUN_140a0ce30(longlong param_1)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  int *piVar13;
  int *piVar14;
  byte bVar15;
  longlong local_res18;
  int local_38;
  int local_34;
  longlong local_30;
  
  FUN_140a0cb90();
  plVar6 = (longlong *)FUN_140a09850(param_1);
  if (plVar6 != (longlong *)0x0) {
    bVar15 = 0;
    do {
      cVar5 = FUN_14307eaa0(plVar6,bVar15,param_1);
      if (cVar5 != '\0') {
        uVar7 = FUN_1430bdfe0();
        lVar8 = (**(code **)(*plVar6 + 0x7f8))(plVar6,uVar7,bVar15);
        if (lVar8 != 0) {
          lVar9 = FUN_1430bdfe0();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (*(longlong *)(param_1 + 0x230) != 0)) {
            fVar1 = *(float *)(*(longlong *)(param_1 + 0x230) + 0x2c0);
            if ((0.0001 < fVar1) &&
               ((fVar1 <= *(float *)(lVar8 + 0x21c) && (*(int *)(lVar8 + 0x228) != 1)))) {
              *(undefined1 *)(param_1 + 0x3b8) = 1;
            }
          }
        }
        if (*(char *)(param_1 + 0x24b) == '\0') {
          cVar5 = *(char *)(param_1 + 0x24a);
        }
        else {
          plVar10 = (longlong *)FUN_140a09850(param_1);
          if (((plVar10 == (longlong *)0x0) ||
              (plVar10 = (longlong *)(**(code **)(*plVar10 + 0x950))(plVar10),
              plVar10 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar10 + 0x780))(plVar10), cVar5 == '\0')) goto LAB_140a0cfd8;
          cVar5 = (**(code **)(*plVar10 + 0x778))(plVar10);
        }
        if (cVar5 != '\0') {
          uVar7 = FUN_1430bf3b0();
          pwVar11 = (wchar_t *)(**(code **)(*plVar6 + 0x7f8))(plVar6,uVar7,bVar15);
          if (pwVar11 == (wchar_t *)0x0) {
LAB_140a0cfce:
            pwVar11 = (wchar_t *)0x0;
          }
          else {
            lVar8 = FUN_1430bf3b0();
            if ((*(int *)(*(longlong *)(pwVar11 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(pwVar11 + 8) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_140a0cfce;
          }
          *(wchar_t **)(param_1 + 0x4a8) = pwVar11;
        }
      }
LAB_140a0cfd8:
      bVar15 = bVar15 + 1;
    } while (bVar15 < 8);
    if (*(char *)(param_1 + 0x24b) == '\0') {
      cVar5 = *(char *)(param_1 + 0x24a);
    }
    else {
      plVar10 = (longlong *)FUN_140a09850(param_1);
      if (plVar10 == (longlong *)0x0) {
        return;
      }
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x950))(plVar10);
      if (plVar10 == (longlong *)0x0) {
        return;
      }
      cVar5 = (**(code **)(*plVar10 + 0x780))(plVar10);
      if (cVar5 == '\0') {
        return;
      }
      cVar5 = (**(code **)(*plVar10 + 0x778))(plVar10);
    }
    if ((cVar5 != '\0') &&
       ((*(longlong *)(param_1 + 0x388) != 0 || (*(longlong *)(param_1 + 0x390) != 0)))) {
      pwVar12 = _guard_xfg_dispatch_icall_nop
                          (L"&UOakWeaponAudioProviderComponent::OnTargetLockedStateChange",L"::");
      pwVar11 = (wchar_t *)0x0;
      while (pwVar4 = pwVar12, pwVar4 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar11 = pwVar4;
      }
      FName::FName(&local_res18,pwVar11 + 2,1);
      plVar10 = plVar6 + 0xac;
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = local_res18;
      if ((local_res18 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_38), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_30);
      }
      piVar13 = (int *)*plVar10;
      lVar8 = plVar6[0xad];
      for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)(int)lVar8 * 4; piVar14 = piVar14 + 4)
      {
        if (((*piVar14 == local_38) && (piVar14[1] == local_34)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar14), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) && (*(longlong *)(piVar14 + 2) == local_30)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140a0d1b1;
          break;
        }
      }
      iVar2 = (int)plVar6[0xad];
      *(int *)(plVar6 + 0xad) = iVar2 + 1;
      if (*(int *)((longlong)plVar6 + 0x56c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar2);
      }
      piVar13 = (int *)((longlong)iVar2 * 0x10 + *plVar10);
      *piVar13 = local_38;
      piVar13[1] = local_34;
      *(longlong *)(piVar13 + 2) = local_30;
LAB_140a0d1b1:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
    }
  }
  return;
}



// FUNCTION 140a0d1d0 FUN_140a0d1d0 body=106 status=ok
// SIG undefined FUN_140a0d1d0(void)

void FUN_140a0d1d0(long param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if ((*(longlong *)(param_2 + 0x188) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x188) + 0x488), plVar1 != (longlong *)0x0)) {
    uVar2 = APostProcessVolume::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FWeakObjectPtr::operator=(param_3,lVar3);
      FUN_140784800(lVar3,1);
    }
  }
  return;
}



// FUNCTION 140a0d240 FUN_140a0d240 body=734 status=ok
// SIG undefined FUN_140a0d240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_140a0d240(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined1 auStack_318 [32];
  undefined8 *local_2f8;
  undefined4 local_2f0;
  int *local_2e8;
  int local_2d8 [2];
  longlong local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  undefined1 local_290 [520];
  longlong local_88;
  undefined8 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  local_2d0 = param_2;
  local_2c0 = param_1;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar5 = *(longlong *)(param_1 + 0x70);
  if (((lVar5 != 0) && (*(longlong *)(param_2 + 0x188) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x188) + 0x488), plVar1 != (longlong *)0x0)) {
    uVar9 = 0;
    local_88 = 0;
    local_80 = 0;
    local_290[0] = 0;
    plVar8 = *(longlong **)(lVar5 + 0x40);
    uVar7 = (longlong)*(int *)(lVar5 + 0x48) & 0x1fffffffffffffff;
    if (plVar8 + *(int *)(lVar5 + 0x48) < plVar8) {
      uVar7 = uVar9;
    }
    if (uVar7 != 0) {
      plVar4 = (longlong *)(param_1 + 0x80);
      local_298 = plVar4;
      do {
        lVar5 = *plVar8;
        FUN_140a043b0(plVar4,local_2d8,lVar5);
        if (local_2d8[0] == -1) {
          lVar2 = 0;
        }
        else {
          lVar2 = (longlong)local_2d8[0] * 0x90 + *plVar4;
        }
        lVar6 = lVar2 + 8;
        if (lVar2 == 0) {
          lVar6 = 0;
        }
        if (lVar6 == 0) {
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x48) == '\x01')) {
            local_2f8 = (undefined8 *)((ulonglong)local_2f8 & 0xffffffffffffff00);
            FUN_1405f1370(local_290,lVar5,plVar1,0);
          }
        }
        else {
          local_2a0 = *(undefined8 *)(local_2d0 + 0x180);
          uVar3 = FUN_142de7b90(lVar6,plVar1,&local_2a0);
          local_2c8 = *(undefined8 *)(local_2d0 + 0x180);
          uVar10 = FUN_142de77e0(lVar6,plVar1,0,&local_2c8);
          local_2c8 = *(undefined8 *)(local_2d0 + 0x180);
          fVar11 = (float)FUN_142de77e0(lVar6,plVar1,0,&local_2c8);
          local_2f8 = (undefined8 *)CONCAT71(local_2f8._1_7_,0.5 <= fVar11);
          FUN_1405f1370(local_290,lVar5,uVar3,uVar10);
          plVar4 = local_298;
        }
        plVar8 = plVar8 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar7);
      lVar5 = *(longlong *)(local_2c0 + 0x70);
    }
    local_2a8 = 0;
    local_2d8[1] = 0;
    local_2b8 = 0;
    local_2b0 = 0xffffffff00000000;
    local_2c0 = -0x100000000;
    uVar3 = (**(code **)(*plVar1 + 0x148))(plVar1);
    local_2e8 = local_2d8 + 1;
    local_2f8 = &local_2b0;
    local_2f0 = 0;
    FUN_1405e8890(uVar3,lVar5,local_290,&local_2c0);
    if (local_88 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140a0d520 FUN_140a0d520 body=333 status=ok
// SIG undefined FUN_140a0d520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a0d520(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined4 *local_290;
  undefined8 local_288;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined8 *local_268;
  undefined1 *puStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_240 [8];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [520];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  if (*(longlong *)(param_1 + 0x120) == 0) {
    FUN_1423407b0();
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x4f8);
  }
  if (lVar2 != 0) {
    local_258 = *(undefined8 *)(lVar2 + 0xc0);
    local_250 = *(undefined8 *)(param_1 + 0x118);
    local_268 = &local_258;
    puStack_260 = local_240;
    local_278 = 0;
    local_238 = local_268;
    uStack_230 = puStack_260;
    FUN_1405e1200(local_228,&local_238);
    lVar1 = *(longlong *)(param_1 + 0x120);
    local_274 = 0xffffffff;
    local_270 = 0;
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    local_290 = &local_278;
    local_288 = 0;
    local_298 = 0;
    FUN_1405f8040(&local_268,lVar1,*(undefined8 *)(lVar2 + 0x58),local_228);
    if (local_20 != 0) {
      FMemory::Free();
    }
  }
  FUN_14077d050(param_1);
  return;
}



// FUNCTION 140a0d670 FUN_140a0d670 body=13 status=ok
// SIG undefined FUN_140a0d670(void)

void FUN_140a0d670(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140a0d676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x428))(param_1,param_1);
  return;
}



// FUNCTION 140a0d680 FUN_140a0d680 body=48 status=ok
// SIG undefined FUN_140a0d680(void)

void FUN_140a0d680(long param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  lVar1 = FWeakObjectPtr::Get(param_3);
  if (lVar1 != 0) {
    FUN_140784800(lVar1,0);
    return;
  }
  return;
}



// FUNCTION 140a0d6b0 FUN_140a0d6b0 body=820 status=ok
// SIG undefined FUN_140a0d6b0(void)

void FUN_140a0d6b0(longlong param_1,int param_2)

{
  short sVar1;
  short sVar2;
  longlong *plVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  void *pvVar12;
  short *psVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *local_48;
  int local_40;
  void *local_38;
  int local_30;
  
  FUN_1422d1ee0(param_1,param_2);
  if (*(int *)(param_1 + 0x458) != *(int *)(param_1 + 0x484)) {
    lVar5 = *(longlong *)(param_1 + 0x490);
    if (*(longlong *)(param_1 + 0x490) == 0) {
      lVar5 = param_1 + 0x488;
    }
    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x498) - 1U & (longlong)param_2) * 4);
    if (iVar4 != -1) {
      while (*(int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x450)) != param_2) {
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x450));
        if (iVar4 == -1) {
          return;
        }
      }
      if (iVar4 != -1) {
        lVar5 = FInternationalization::Get();
        plVar3 = *(longlong **)(lVar5 + 0x30);
        uVar6 = *(undefined8 *)(lVar5 + 0x28);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        uVar6 = FCulture::GetName(uVar6);
        uVar7 = FInternationalization::Get();
        FInternationalization::GetPrioritizedCultureNames(uVar7,&local_48,uVar6);
        psVar13 = &DAT_143f3eda8;
        plVar15 = local_48 + (longlong)local_40 * 2;
        for (plVar14 = local_48; plVar14 != plVar15; plVar14 = plVar14 + 2) {
          puVar10 = *(undefined8 **)(param_1 + 0x440);
          puVar11 = puVar10 + (longlong)*(int *)(param_1 + 0x448) * 2;
          if (puVar10 != puVar11) {
LAB_140a0d7d0:
            if (*(int *)(puVar10 + 1) == 0) {
              puVar8 = &DAT_143f3eda8;
            }
            else {
              puVar8 = (undefined2 *)*puVar10;
            }
            iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8);
            if (iVar4 != 0) goto code_r0x000140a0d7f9;
            local_30 = (int)plVar14[1];
            lVar5 = (longlong)local_30;
            pvVar12 = (void *)0x0;
            _Src = (void *)*plVar14;
            local_38 = (void *)0x0;
            plVar14 = local_48;
            if (local_30 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
              pvVar12 = local_38;
              _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar5 * 2);
              plVar14 = local_48;
            }
            for (; local_40 != 0; local_40 = local_40 + -1) {
              if (*plVar14 != 0) {
                FMemory::Free();
              }
              plVar14 = plVar14 + 2;
            }
            goto joined_r0x000140a0d97f;
          }
LAB_140a0d802:
        }
        pvVar12 = (void *)0x0;
        local_38 = (void *)0x0;
        local_30 = 0;
        plVar14 = local_48;
        for (iVar4 = local_40; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar14 != 0) {
            FMemory::Free();
          }
          plVar14 = plVar14 + 2;
        }
joined_r0x000140a0d97f:
        if (local_48 != (longlong *)0x0) {
          FMemory::Free(local_48);
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar3 + 1;
          lVar5 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          pvVar12 = local_38;
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar9 = (int *)((longlong)plVar3 + 0xc);
            iVar4 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            pvVar12 = local_38;
            if (iVar4 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3);
              pvVar12 = local_38;
            }
          }
        }
        if ((local_30 != 0) && (0 < local_30 + -1)) {
          if (*(int *)(param_1 + 0x458) != *(int *)(param_1 + 0x484)) {
            lVar5 = *(longlong *)(param_1 + 0x490);
            if (*(longlong *)(param_1 + 0x490) == 0) {
              lVar5 = param_1 + 0x488;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x498) - 1U & (longlong)param_2)
                                     * 4);
            if (iVar4 != -1) {
              do {
                piVar9 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x450));
                if (*piVar9 == param_2) {
                  if (iVar4 != -1) goto LAB_140a0d994;
                  break;
                }
                iVar4 = piVar9[6];
              } while (iVar4 != -1);
            }
          }
          piVar9 = (int *)0x0;
LAB_140a0d994:
          if (piVar9[4] != 0) {
            psVar13 = *(short **)(piVar9 + 2);
          }
          lVar5 = (longlong)pvVar12 - (longlong)psVar13;
          do {
            sVar1 = *psVar13;
            sVar2 = *(short *)((longlong)psVar13 + lVar5);
            if (sVar1 != sVar2) break;
            psVar13 = psVar13 + 1;
          } while (sVar2 != 0);
          if (sVar1 == sVar2) {
            FInternationalization::Get();
          }
        }
        if (pvVar12 != (void *)0x0) {
          FMemory::Free(pvVar12);
        }
      }
    }
  }
  return;
code_r0x000140a0d7f9:
  puVar10 = puVar10 + 2;
  if (puVar10 == puVar11) goto LAB_140a0d802;
  goto LAB_140a0d7d0;
}



// FUNCTION 140a0d9f0 FUN_140a0d9f0 body=96 status=ok
// SIG undefined FUN_140a0d9f0(void)

void FUN_140a0d9f0(longlong param_1,undefined1 param_2)

{
  if ((((*(char *)(param_1 + 0x3b9) != '\0') && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0'))
     && (DAT_1468536c8 != 0)) {
    FUN_1405ad830(DAT_1468536c8,param_1 + 0x360);
    *(undefined1 *)(param_1 + 0x3b9) = 0;
  }
  FUN_1423437a0(param_1,param_2);
  return;
}



// FUNCTION 140a0da50 FUN_140a0da50 body=124 status=ok
// SIG undefined FUN_140a0da50(void)

void FUN_140a0da50(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_14077d240();
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  if (lVar1 != 0) {
    lVar3 = FUN_1413e48b0();
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
      *(longlong *)(param_1 + 0x8b0) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x8b0) = 0;
  return;
}



// FUNCTION 140a0dad0 FUN_140a0dad0 body=112 status=ok
// SIG undefined FUN_140a0dad0(void)

void FUN_140a0dad0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar2 = (**(code **)(*param_2 + 0x678))(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a0db2a;
  }
  lVar2 = 0;
LAB_140a0db2a:
  FUN_140a20a00(param_1,lVar2);
  return;
}



// FUNCTION 140a0db40 FUN_140a0db40 body=58 status=ok
// SIG undefined FUN_140a0db40(void)

void FUN_140a0db40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x630) + 0x198,param_1);
  }
  *(undefined8 *)(param_1 + 0x640) = 0;
  *(undefined8 *)(param_1 + 0x638) = 0;
  return;
}



// FUNCTION 140a0db80 FUN_140a0db80 body=431 status=ok
// SIG undefined FUN_140a0db80(void)

void FUN_140a0db80(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  
  *(undefined1 *)(param_1 + 0x49) = 0;
  (**(code **)(*param_1 + 0x358))(param_1,0);
  plVar8 = param_1 + 0x4b;
  FUN_140a11ee0(plVar8);
  plVar5 = (longlong *)*plVar8;
  uVar7 = (ulonglong)(int)param_1[0x4c];
  plVar1 = plVar5 + uVar7;
  if (plVar5 != plVar1) {
    do {
      if ((*plVar5 != 0) && (cVar2 = FUN_14059ee80(), cVar2 != '\0')) {
        uVar3 = FUN_14058f880(local_res8,plVar5);
        FUN_14059e7e0(uVar3);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x4c);
    plVar5 = (longlong *)*plVar8;
  }
  uVar9 = 0;
  uVar6 = (uint)uVar7;
  while (uVar6 != 0) {
    if (*plVar5 != 0) {
      FUN_1405a53f0();
      *plVar5 = 0;
    }
    plVar5 = plVar5 + 1;
    uVar6 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar6;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (*(int *)((longlong)param_1 + 0x264) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8,0);
  }
  FUN_140a1eaa0(param_1);
  lVar4 = FUN_140a09850(param_1);
  if (lVar4 != 0) {
    cVar2 = FUN_14307eaa0(lVar4,0,param_1);
    if (cVar2 != '\0') {
      plVar8 = (longlong *)param_1[0x44];
      uVar7 = (longlong)(int)param_1[0x45] & 0x1fffffffffffffff;
      if (plVar8 + (int)param_1[0x45] < plVar8) {
        uVar7 = uVar9;
      }
      if (uVar7 != 0) {
        do {
          plVar1 = (longlong *)*plVar8;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x288))(plVar1);
            if ((plVar1[0x5a] != 0) && (*(longlong *)(plVar1[0x5a] + 0x30) != 0)) {
              FUN_1405a6220();
            }
            if ((plVar1[0x5b] != 0) && (*(longlong *)(plVar1[0x5b] + 0x30) != 0)) {
              FUN_1405a6220();
            }
          }
          plVar8 = plVar8 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar7);
      }
    }
  }
  FUN_140a1a850(param_1);
  *(undefined1 *)(param_1 + 0x5f) = 3;
  FUN_140a149f0(param_1,3);
  FUN_1409fd0e0(param_1);
  FUN_140a1e990(param_1);
  if (*(char *)(param_1[0x23] + 0x129) == '\x02') {
    (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
  }
  return;
}



// FUNCTION 140a0dd30 FUN_140a0dd30 body=514 status=ok
// SIG undefined FUN_140a0dd30(void)

void FUN_140a0dd30(longlong param_1)

{
  undefined8 *puVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  if ((*(int *)(param_1 + 0x3b4) < 0) && (*(int *)(param_1 + 0x3b4) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x3a8,0);
  }
  plVar6 = (longlong *)(param_1 + 0x450);
  puVar8 = (undefined8 *)*plVar6;
  uVar11 = (ulonglong)*(int *)(param_1 + 0x458);
  puVar1 = puVar8 + uVar11 * 3;
  if (puVar8 != puVar1) {
    do {
      cVar4 = FUN_14059f130(puVar8);
      if (cVar4 != '\0') {
        FUN_1405aa990(*puVar8,*(undefined4 *)(puVar8 + 2),0,0);
      }
      puVar8 = puVar8 + 3;
    } while (puVar8 != puVar1);
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x458);
  }
  iVar5 = *(int *)(param_1 + 0x45c);
  lVar9 = *plVar6;
  uVar10 = (uint)uVar11;
  if (iVar5 < 0) {
    if (uVar10 != 0) {
      do {
        FUN_140591060(lVar9);
        lVar9 = lVar9 + 0x18;
        uVar10 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 != 0);
      iVar5 = *(int *)(param_1 + 0x45c);
    }
    *(undefined4 *)(param_1 + 0x458) = 0;
    if (iVar5 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (plVar6,0);
    }
  }
  else {
    while (uVar10 != 0) {
      FUN_140591060(lVar9);
      lVar9 = lVar9 + 0x18;
      uVar10 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar10;
    }
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  lVar9 = FUN_140a09850(param_1);
  if (lVar9 != 0) {
    if (*(char *)(param_1 + 0x24b) == '\0') {
      cVar4 = *(char *)(param_1 + 0x24a);
    }
    else {
      plVar6 = (longlong *)FUN_140a09850(param_1);
      if (((plVar6 == (longlong *)0x0) ||
          (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x950))(plVar6), plVar6 == (longlong *)0x0))
         || (cVar4 = (**(code **)(*plVar6 + 0x780))(plVar6), cVar4 == '\0')) goto LAB_140a0def0;
      cVar4 = (**(code **)(*plVar6 + 0x778))(plVar6);
    }
    if ((cVar4 != '\0') &&
       ((*(longlong *)(param_1 + 0x388) != 0 || (*(longlong *)(param_1 + 0x390) != 0)))) {
      pwVar7 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakWeaponAudioProviderComponent::OnTargetLockedStateChange",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar9 + 0x560,param_1,local_res8);
    }
  }
LAB_140a0def0:
  cVar4 = FUN_14059ee90(param_1 + 0x490);
  if (cVar4 != '\0') {
    FUN_1405ac8f0(param_1 + 0x490,0,4);
  }
  FUN_140a0db80(param_1);
  return;
}



// FUNCTION 140a0df40 FUN_140a0df40 body=642 status=ok
// SIG undefined FUN_140a0df40(void)

void FUN_140a0df40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  
  if ((*(longlong *)(param_1 + 0x630) != 0) &&
     ((lVar5 = *(longlong *)(param_1 + 0x120), lVar5 != 0 || (lVar5 = FUN_1423407b0(), lVar5 != 0)))
     ) {
    fVar8 = *(float *)(lVar5 + 0x8c8);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x630) + 0x1b8);
    fVar7 = fVar8;
    if (lVar2 != 0) {
      fVar6 = (float)FUN_1405e9b40(lVar2,fVar8);
      fVar7 = *(float *)(lVar5 + 0x8c8);
      fVar8 = fVar8 + fVar6;
    }
    iVar1 = *(int *)(param_1 + 0x648);
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    local_res8 = 0xffffffffffffffff;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar7 = (float)FUN_142de77e0(param_1 + 0x308,fVar7,0,&local_res8);
        *(float *)(param_1 + 0x388) = fVar7 + fVar8;
        *(float *)(param_1 + 0x300) = fVar8 + 1.0;
        return;
      }
      if (iVar1 == 3) {
        fVar7 = (float)FUN_142de77e0(param_1 + 0x1f8,fVar7,0,&local_res8);
        *(float *)(param_1 + 0x278) = fVar7 + fVar8;
        return;
      }
      cVar4 = FUN_142d3d1b0(param_1 + 0x618);
      if (cVar4 == '\0') {
        fVar7 = (float)FUN_142de77e0(param_1 + 0x1f8,uVar3,0,&local_res8);
        *(float *)(param_1 + 0x278) = fVar7 + fVar8;
      }
      else {
        fVar7 = (float)FUN_142de77e0(param_1 + 0x308,uVar3,0,&local_res8);
        *(float *)(param_1 + 0x388) = fVar7 + fVar8;
        fVar7 = (float)FUN_142de77e0(param_1 + 0x280,uVar3,0,&local_res8);
        *(float *)(param_1 + 0x300) = fVar7 + fVar8;
      }
      fVar7 = (float)FUN_142de77e0(param_1 + 0x1f8,uVar3,0,&local_res8);
      *(float *)(param_1 + 0x278) = fVar7 + fVar8;
      fVar8 = (float)FUN_142de77e0(param_1 + 0x280,uVar3,0,&local_res8);
      *(float *)(param_1 + 0x300) = fVar8 + *(float *)(param_1 + 0x278);
      fVar8 = (float)FUN_142de77e0(param_1 + 0x308,uVar3,0,&local_res8);
      *(float *)(param_1 + 0x388) = fVar8 + *(float *)(param_1 + 0x278);
      return;
    }
    fVar7 = (float)FUN_142de77e0(param_1 + 0x308,fVar7,0,&local_res8);
    *(float *)(param_1 + 0x388) = fVar7 + fVar8;
    fVar7 = (float)FUN_142de77e0(param_1 + 0x280,uVar3,0,&local_res8);
    *(float *)(param_1 + 0x300) = fVar7 + fVar8;
  }
  return;
}



// FUNCTION 140a0e1d0 FUN_140a0e1d0 body=129 status=ok
// SIG undefined FUN_140a0e1d0(void)

void FUN_140a0e1d0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((param_2 == '\x01') && (*(longlong *)(param_1 + 0x118) != 0)) {
    FUN_1409ffe50();
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
    plVar2 = *(longlong **)(param_1 + 0x118);
    uVar3 = UThrobber::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if ((lVar1 != 0) && (lVar4 != 0)) {
      FUN_1421d3220(lVar4 + 0x188,lVar1 + 0xe20);
    }
  }
  return;
}



// FUNCTION 140a0e280 FUN_140a0e280 body=145 status=ok
// SIG undefined FUN_140a0e280(void)

void FUN_140a0e280(longlong param_1,char param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x378) != 0) {
    iVar1 = FUN_14233f450();
    if ((iVar1 == 3) || (*(longlong *)(param_1 + 0x2d8) == 0)) {
      FUN_142cd0450(param_1 + 800,*(undefined8 *)(param_1 + 0x388),0);
      if (param_2 != '\0') {
        FUN_142cd0450(param_1 + 0x330,*(undefined8 *)(param_1 + 0x388),1);
      }
      *(undefined8 *)(param_1 + 0x378) = 0;
      *(undefined8 *)(param_1 + 0x390) = 0;
      *(undefined8 *)(param_1 + 0x398) = 0;
      FUN_142362d90(param_1);
      FUN_142362db0(param_1);
    }
  }
  return;
}



// FUNCTION 140a0e320 FUN_140a0e320 body=186 status=ok
// SIG undefined FUN_140a0e320(void)

void FUN_140a0e320(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (param_2 != *(longlong *)(param_1 + 0x378))) {
    *(longlong *)(param_1 + 0x378) = param_2;
    FUN_142cd0450(param_1 + 800,*(undefined8 *)(param_1 + 0x388),1);
    FUN_142cd0450(param_1 + 0x330,*(undefined8 *)(param_1 + 0x388),0);
    lVar2 = *(longlong *)(param_1 + 0x378);
    if (lVar2 != 0) {
      uVar1 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      lVar2 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar1);
      if (lVar2 != 0) {
        *(longlong *)(param_1 + 0x390) = *(longlong *)(param_1 + 0x378);
        if (*(longlong *)(param_1 + 0x378) == 0) {
          *(undefined8 *)(param_1 + 0x398) = 0;
        }
        *(longlong *)(param_1 + 0x398) = lVar2;
      }
    }
    if (*(char *)(param_1 + 0x361) != '\0') {
      FUN_14223c460(*(undefined8 *)(param_1 + 0x378),0);
    }
  }
  return;
}



// FUNCTION 140a0e3e0 FUN_140a0e3e0 body=188 status=ok
// SIG undefined FUN_140a0e3e0(void)

void FUN_140a0e3e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_18 [16];
  
  *(undefined4 *)(param_1 + 1000) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x3f0) = DAT_146294aa0;
  *(undefined4 *)(param_1 + 0x3f8) = DAT_146294aa8;
  lVar4 = *param_2;
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x28) != 3)) {
    if (0 < *(int *)(lVar4 + 8)) {
      puVar6 = (undefined8 *)FUN_142be50e0(lVar4,local_18,0);
      *(undefined8 *)(param_1 + 0x3f0) = *puVar6;
      *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(puVar6 + 1);
    }
    FUN_140a21c80(param_1);
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
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
  return;
}



// FUNCTION 140a0e4b0 FUN_140a0e4b0 body=246 status=ok
// SIG undefined FUN_140a0e4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a0e4b0(longlong *param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar2 = FUN_1428cf800(uVar4);
    if (iVar2 == 3) goto LAB_140a0e58c;
  }
  plVar5 = (longlong *)FUN_1404b0440(param_2,local_res8);
  if (*plVar5 != 0) {
    lVar6 = FUN_142f71d80();
    lVar3 = *plVar5;
    for (lVar7 = lVar3; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar6) goto LAB_140a0e530;
    }
  }
  lVar3 = 0;
LAB_140a0e530:
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x8b);
  if ((((lVar3 == lVar7) && (param_3 == '\n')) && (cVar1 = FUN_142f5f6a0(param_2), cVar1 != '\0'))
     && (((*(int *)((longlong)param_2 + 0x14) == _DAT_146294eb4 &&
          *(int *)(param_2 + 3) == _DAT_146294eb8) &&
         *(int *)((longlong)param_2 + 0x1c) == _DAT_146294ebc) &&
         *(int *)(param_2 + 2) == _DAT_146294eb0)) {
    FUN_140a1e6b0(param_1);
  }
LAB_140a0e58c:
  *param_2 = &PTR_FUN_1441d26b8;
  return;
}



// FUNCTION 140a0e5b0 FUN_140a0e5b0 body=400 status=ok
// SIG undefined FUN_140a0e5b0(void)

void FUN_140a0e5b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  longlong local_18;
  ulonglong local_10;
  ulonglong uVar9;
  
  cVar1 = *(char *)(param_1 + 0x568);
  if (cVar1 == '\x01') {
    FUN_140a10c60(param_1,*(undefined8 *)(param_1 + 0x530),param_1 + 0x4f0);
    return;
  }
  if (cVar1 == '\x02') {
    iVar2 = *(int *)(param_1 + 0x548);
    uVar6 = 0;
    if (0 < iVar2) {
      iVar3 = rand();
      iVar4 = (int)((float)iVar3 * 3.051851e-05 * (float)iVar2);
      iVar3 = iVar2 + -1;
      if (iVar4 <= iVar2 + -1) {
        iVar3 = iVar4;
      }
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x540) + (longlong)iVar3 * 8);
    }
    FUN_1414d6740(param_1);
  }
  else {
    if (cVar1 == '\x03') {
      FUN_1414d6700(param_1);
      FUN_140a10c60(param_1,*(undefined8 *)(param_1 + 0x538),param_1 + 0x510);
      return;
    }
    if (cVar1 != '\x04') {
      return;
    }
    lVar5 = FUN_14059b7e0(param_1,0);
    if (lVar5 != 0) {
      FUN_14059d110(lVar5,&local_18);
      lVar5 = local_18 + (longlong)(int)local_10 * 0x18;
      for (lVar7 = local_18; lVar7 != lVar5; lVar7 = lVar7 + 0x18) {
        FUN_1405ac8f0(lVar7,200,4);
      }
      uVar8 = (uint)local_10;
      uVar9 = local_10;
      lVar5 = local_18;
      while (uVar8 != 0) {
        FUN_140591060(lVar5);
        lVar5 = lVar5 + 0x18;
        uVar8 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar8;
      }
      if (local_18 != 0) {
        FMemory::Free(local_18);
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x550);
  }
  FUN_140a10d70(param_1,uVar6);
  return;
}



// FUNCTION 140a0e740 FUN_140a0e740 body=1980 status=ok
// SIG undefined FUN_140a0e740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a0e740(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int *piVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 *puVar18;
  int *piVar19;
  longlong *plVar20;
  longlong *plVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined4 local_190;
  ulonglong local_188;
  float local_180;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  ulonglong uStack_160;
  longlong local_158;
  longlong *local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118 [8];
  undefined8 local_110;
  code *local_108;
  longlong local_f8 [4];
  longlong *local_d8;
  int local_c8;
  ulonglong local_b8;
  
  if (((param_3 != (longlong *)0x0) &&
      (local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_1b8, *(longlong *)(param_1 + 0x7b8) == 0)) &&
     (lVar17 = *(longlong *)(param_1 + 0x118), lVar17 != 0)) {
    plVar21 = *(longlong **)(param_1 + 0x7c0);
    plVar20 = plVar21 + *(int *)(param_1 + 0x7c8);
    for (; plVar21 != plVar20; plVar21 = plVar21 + 1) {
      if ((longlong *)*plVar21 == param_3) {
        return;
      }
    }
    lVar16 = param_3[2];
    if (lVar16 != 0) {
      uVar11 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      cVar9 = UClass::ImplementsInterface(lVar16,uVar11);
      if ((cVar9 != '\0') && (cVar9 = FUN_1412e8420(param_3), cVar9 != '\0')) {
        if (*(char *)(param_1 + 0x774) != '\0') {
          lVar16 = param_3[0x2d];
          if (lVar16 == 0) {
            local_180 = DAT_1468b5d98;
            local_188 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          }
          else {
            local_180 = *(float *)(lVar16 + 0x228);
            local_188 = *(ulonglong *)(lVar16 + 0x220);
          }
          fVar31 = local_180;
          uVar8 = local_188;
          local_170 = local_180;
          lVar17 = *(longlong *)(lVar17 + 0x168);
          local_178 = local_188;
          if (lVar17 == 0) {
            local_180 = DAT_1468b5d98;
            local_188 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          }
          else {
            local_180 = *(float *)(lVar17 + 0x228);
            local_188 = *(ulonglong *)(lVar17 + 0x220);
          }
          local_178._0_4_ = (float)uVar8;
          fVar30 = (float)local_188 - (float)local_178;
          fVar31 = local_180 - fVar31;
          local_178._4_4_ = (float)(uVar8 >> 0x20);
          fVar29 = (float)(local_188 >> 0x20) - local_178._4_4_;
          local_178 = uVar8;
          pfVar12 = (float *)(**(code **)(*param_3 + 0x308))(param_3,&local_178);
          fVar1 = pfVar12[1];
          fVar2 = *pfVar12;
          fVar3 = pfVar12[2];
          fVar24 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
          if (fVar24 == 1.0) {
            local_178 = *(ulonglong *)pfVar12;
            local_170 = pfVar12[2];
            fVar23 = (float)(local_178 >> 0x20);
            fVar25 = local_170;
            fVar28 = (float)local_178;
          }
          else {
            fVar23 = DAT_1468b5d94;
            fVar25 = DAT_1468b5d98;
            fVar28 = DAT_1468b5d90;
            if (1e-08 <= fVar24) {
              auVar26._8_8_ = 0;
              auVar26._0_8_ = CONCAT44(0,fVar24);
              auVar27._8_8_ = 0;
              auVar27._0_8_ = CONCAT44(0,fVar24);
              auVar27 = rsqrtss(auVar26,auVar27);
              fVar25 = auVar27._0_4_;
              fVar25 = fVar25 + fVar25 * (0.5 - fVar24 * 0.5 * fVar25 * fVar25);
              fVar25 = fVar25 + fVar25 * (0.5 - fVar24 * 0.5 * fVar25 * fVar25);
              local_188 = CONCAT44(local_188._4_4_,fVar25);
              fVar28 = fVar2 * fVar25;
              fVar23 = fVar1 * fVar25;
              fVar25 = fVar3 * fVar25;
            }
          }
          fVar31 = fVar23 * fVar29 + fVar28 * fVar30 + fVar25 * fVar31;
          if (-1.0 <= fVar31) {
            if (1.0 <= fVar31) {
              fVar31 = 1.0;
            }
          }
          else {
            fVar31 = -1.0;
          }
          fVar31 = _guard_xfg_dispatch_icall_nop(fVar31);
          if (*(float *)(param_1 + 0x770) <= fVar31 * 57.295776 &&
              fVar31 * 57.295776 != *(float *)(param_1 + 0x770)) {
            return;
          }
        }
        local_158 = *(longlong *)(param_1 + 0x120);
        if (local_158 == 0) {
          local_158 = FUN_1423407b0(param_1);
        }
        local_150 = &local_158;
        local_148 = FUN_14073d760(&local_158,DAT_146865c30);
        plVar20 = local_150;
        local_140 = &local_158;
        local_138 = 0;
        puVar13 = (undefined8 *)FUN_14073d760(local_150,local_148);
        puVar14 = (undefined8 *)FUN_14073d760(local_140,local_138);
        for (; puVar13 != puVar14; puVar13 = (undefined8 *)FUN_14073d760(plVar20,*puVar13)) {
          lVar17 = puVar13[2];
          iVar10 = *(int *)(lVar17 + 0x7c8);
          *(int *)(lVar17 + 0x7c8) = iVar10 + 1;
          if (*(int *)(lVar17 + 0x7cc) < iVar10 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar17 + 0x7c0,iVar10)
            ;
          }
          *(longlong **)(*(longlong *)(lVar17 + 0x7c0) + (longlong)iVar10 * 8) = param_3;
        }
        *(longlong **)(param_1 + 0x7b8) = param_3;
        pwVar15 = _guard_xfg_dispatch_icall_nop
                            (L"&UAIStolenProjectileComponent::ReleaseOnStolenProjectileDestroyed",
                             L"::");
        pwVar7 = (wchar_t *)0x0;
        while (pwVar6 = pwVar15, pwVar6 != (wchar_t *)0x0) {
          pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
          pwVar7 = pwVar6;
        }
        FName::FName(&local_178,pwVar7 + 2,1);
        uVar8 = local_178;
        lVar17 = *(longlong *)(param_1 + 0x7b8);
        plVar20 = (longlong *)(lVar17 + 0x290);
        FWeakObjectPtr::operator=(&local_168,0);
        uStack_160 = 0;
        FWeakObjectPtr::operator=(&local_168,param_1);
        uStack_160 = uVar8;
        local_188 = 0;
        if ((uVar8 != 0) && (lVar16 = FWeakObjectPtr::Get(&local_168), lVar16 != 0)) {
          UObject::FindFunction(lVar16,uStack_160);
        }
        piVar5 = (int *)*plVar20;
        iVar10 = *(int *)(lVar17 + 0x298);
        for (piVar19 = piVar5; piVar19 != piVar5 + (longlong)iVar10 * 4; piVar19 = piVar19 + 4) {
          if ((((*piVar19 == (int)local_168) &&
               (local_168._4_4_ = (int)((ulonglong)local_168 >> 0x20),
               bVar22 = piVar19[1] == local_168._4_4_, bVar22)) ||
              ((cVar9 = FWeakObjectPtr::IsValid(piVar19), cVar9 == '\0' &&
               (cVar9 = FWeakObjectPtr::IsValid(&local_168), cVar9 == '\0')))) &&
             (*(ulonglong *)(piVar19 + 2) == uStack_160)) {
            if ((int)((longlong)piVar19 - (longlong)piVar5 >> 4) != -1) goto LAB_140a0ecd6;
            break;
          }
        }
        iVar10 = *(int *)(lVar17 + 0x298);
        *(int *)(lVar17 + 0x298) = iVar10 + 1;
        if (*(int *)(lVar17 + 0x29c) < iVar10 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar20,iVar10);
        }
        puVar18 = (undefined4 *)((longlong)iVar10 * 0x10 + *plVar20);
        *puVar18 = (int)local_168;
        puVar18[1] = local_168._4_4_;
        *(ulonglong *)(puVar18 + 2) = uStack_160;
LAB_140a0ecd6:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar20);
        FUN_142cd0a60(param_1 + 0x750,*(undefined8 *)(param_1 + 0x7e0),
                      *(undefined8 *)(param_1 + 0x7b8));
        FUN_142cd0450(param_1 + 0x760,*(undefined8 *)(param_1 + 0x7e0),1);
        iVar10 = rand();
        *(bool *)(param_1 + 0x790) =
             (float)iVar10 * 3.051851e-05 < *(float *)(param_1 + 0x778) ||
             (float)iVar10 * 3.051851e-05 == *(float *)(param_1 + 0x778);
        if (((*(char *)(param_1 + 0x788) != '\0') &&
            (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) &&
           (lVar17 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x148))(), lVar17 != 0)) {
          uVar4 = *(undefined4 *)(param_1 + 0x78c);
          local_168 = FUN_140a1a460;
          uStack_160 = uStack_160 & 0xffffffff00000000;
          uVar11 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
          plVar20 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar20 != (longlong *)0x0) {
            *plVar20 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar20 + 1,param_1);
            plVar20[2] = (longlong)local_168;
            plVar20[3] = uStack_160;
            lVar17 = FDelegateHandle::GenerateNewID();
            plVar20[5] = lVar17;
            *plVar20 = (longlong)&PTR_FUN_143f77bd0;
          }
          local_128 = 0;
          local_120 = 0;
          if (plVar20 != (longlong *)0x0) {
            (**(code **)(*plVar20 + 0x30))(plVar20,&local_128);
          }
          FWeakObjectPtr::operator=(local_118,0);
          local_190 = 0xbf800000;
          local_108 = AK::MemoryMgr::StartProfileThreadUsage;
          local_110 = 0;
          local_d8 = (longlong *)0x0;
          local_c8 = 0;
          local_198 = 0;
          FUN_142880850(uVar11,param_1 + 0x810,&local_128,uVar4);
          if (local_c8 != 0) {
            plVar21 = local_f8;
            if (local_d8 != (longlong *)0x0) {
              plVar21 = local_d8;
            }
            if (plVar21 != (longlong *)0x0) {
              (**(code **)(*plVar21 + 0x10))(plVar21,0);
            }
          }
          if (local_d8 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_128);
          if (plVar20 != (longlong *)0x0) {
            (**(code **)(*plVar20 + 0x28))(plVar20,0);
            lVar17 = FMemory::Realloc(plVar20,0,0);
            if (lVar17 != 0) {
              FMemory::Free(lVar17);
            }
          }
        }
        local_178 = *(undefined8 *)(param_1 + 0x7b8);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x720,&local_178);
      }
    }
  }
  return;
}



// FUNCTION 140a0ef00 FUN_140a0ef00 body=28 status=ok
// SIG undefined FUN_140a0ef00(void)

void FUN_140a0ef00(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  longlong lStackX_8;
  undefined8 *puStackX_10;
  longlong *plStackX_18;
  undefined8 *puStackX_20;
  longlong lStack_78;
  longlong *plStack_70;
  undefined8 uStack_68;
  longlong *plStack_60;
  undefined8 uStack_58;
  
  if (((param_3 == 0) || (param_3 != *(longlong *)(param_1 + 0x7b8))) ||
     (*(char *)(param_1 + 0x788) != '\0')) {
    return;
  }
  if (*(longlong *)(param_1 + 0x7b8) != 0) {
    lStackX_8 = param_1;
    FUN_1407665e0(*(longlong *)(param_1 + 0x7b8) + 0x290,param_1);
    lStack_78 = *(longlong *)(param_1 + 0x120);
    lVar1 = *(longlong *)(param_1 + 0x7b8);
    if (lStack_78 == 0) {
      lStack_78 = FUN_1423407b0(param_1);
    }
    plStack_70 = &lStack_78;
    uStack_68 = FUN_14073d760(&lStack_78,DAT_146865c30);
    plStack_60 = &lStack_78;
    plStackX_18 = plStack_70;
    uStack_58 = 0;
    puVar3 = (undefined8 *)FUN_14073d760(plStack_70,uStack_68);
    puStackX_10 = puVar3;
    puStackX_20 = (undefined8 *)FUN_14073d760(plStack_60,uStack_58);
    if (puVar3 != puStackX_20) {
      do {
        lVar2 = puVar3[2];
        lVar4 = (longlong)*(int *)(lVar2 + 0x7c8);
        if (*(int *)(lVar2 + 0x7c8) != 0) {
          iVar9 = 0;
          lVar6 = 0;
          bVar10 = **(longlong **)(lVar2 + 0x7c0) != lVar1;
          iVar7 = 0;
          do {
            lVar6 = lVar6 + 1;
            iVar8 = iVar7 + 1;
            if (lVar6 < lVar4) {
              plVar5 = (longlong *)(*(longlong *)(lVar2 + 0x7c0) + lVar6 * 8);
              do {
                if (bVar10 != (*plVar5 != lVar1)) break;
                iVar8 = iVar8 + 1;
                lVar6 = lVar6 + 1;
                plVar5 = plVar5 + 1;
              } while (lVar6 < lVar4);
            }
            if (bVar10 != false) {
              if (iVar9 != iVar7) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(lVar2 + 0x7c0) + (longlong)iVar9 * 8),
                           (void *)(*(longlong *)(lVar2 + 0x7c0) + (longlong)iVar7 * 8),
                           (longlong)(iVar8 - iVar7) << 3);
              }
              iVar9 = iVar9 + (iVar8 - iVar7);
            }
            bVar10 = (bool)(bVar10 ^ 1);
            iVar7 = iVar8;
          } while (lVar6 < lVar4);
          *(int *)(lVar2 + 0x7c8) = iVar9;
          puVar3 = puStackX_10;
        }
        puVar3 = (undefined8 *)FUN_14073d760(plStackX_18,*puVar3);
        param_1 = lStackX_8;
        puStackX_10 = puVar3;
      } while (puVar3 != puStackX_20);
    }
    *(undefined8 *)(param_1 + 0x7b8) = 0;
    FUN_142cd0a60(param_1 + 0x750,*(undefined8 *)(param_1 + 0x7e0),0);
    FUN_142cd0450(param_1 + 0x760,*(undefined8 *)(param_1 + 0x7e0),0);
    lStackX_8 = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x720,&lStackX_8);
  }
  return;
}



// FUNCTION 140a0ef20 FUN_140a0ef20 body=437 status=ok
// SIG undefined FUN_140a0ef20(void)

void FUN_140a0ef20(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  *(undefined4 *)(param_1 + 0x19d8) = 0xffffffff;
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x19d0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x19d4)) {
    FUN_140a13a90(param_1 + 0x1908,0);
  }
  *(undefined8 *)(param_1 + 0x19dc) = 0;
  iVar5 = FUN_142340f30(param_1);
  if (iVar5 == 3) {
    iVar5 = *(int *)(param_1 + 0x1900);
    if (0 < iVar5) {
      do {
        FUN_140a1d930(param_1,iVar8,0,1);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar5);
    }
    *(undefined1 *)(param_1 + 0x19f0) = 1;
    return;
  }
  bVar3 = true;
  *(undefined4 *)(param_1 + 0x19d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19d0) = 0;
  if ((*(int *)(param_1 + 0x19d4) < 0) && (*(int *)(param_1 + 0x19d4) != 0)) {
    FUN_140a13a90(param_1 + 0x1908,0);
  }
  *(undefined8 *)(param_1 + 0x19dc) = 0;
  lVar7 = *(longlong *)(param_1 + 0x18f8);
  if (*(longlong *)(param_1 + 0x18f8) == 0) {
    lVar7 = param_1 + 0x1478;
  }
  lVar1 = lVar7 + (longlong)*(int *)(param_1 + 0x1900) * 0x18;
  if (lVar7 == lVar1) {
    *(undefined1 *)(param_1 + 0x19f0) = 1;
  }
  else {
    do {
      bVar4 = bVar3;
      if (*(char *)(lVar7 + 0x14) != '\0') {
        uVar2 = *(undefined4 *)(lVar7 + 8);
        if (bVar3) {
          iVar5 = rand();
          iVar6 = (int)((float)iVar5 * 3.051851e-05 + (float)iVar5 * 3.051851e-05);
          iVar5 = 1;
          if (iVar6 < 2) {
            iVar5 = iVar6;
          }
          if (iVar5 == 1) {
            FUN_140a00530(param_1,*(undefined4 *)(lVar7 + 8),*(undefined8 *)(param_1 + 0x1458),0);
            iVar8 = iVar8 + 1;
            bVar4 = false;
            if (iVar8 < *(int *)(param_1 + 0x1450)) {
              bVar4 = bVar3;
            }
            goto LAB_140a0f065;
          }
        }
        FUN_140a0ba00(param_1,uVar2);
      }
LAB_140a0f065:
      bVar3 = bVar4;
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != lVar1);
    *(undefined1 *)(param_1 + 0x19f0) = 1;
  }
  return;
}



// FUNCTION 140a0f0e0 FUN_140a0f0e0 body=677 status=ok
// SIG undefined FUN_140a0f0e0(void)

void FUN_140a0f0e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined1 local_38 [8];
  undefined8 local_30;
  
  if ((param_1[0xc5] != 0) && (plVar2 = (longlong *)param_1[0x23], plVar2 != (longlong *)0x0)) {
    plVar6 = (longlong *)(**(code **)(*plVar2 + 0x148))(plVar2);
    uVar7 = FUN_142df3580(plVar2);
    plVar13 = (longlong *)*param_2;
    plVar2 = plVar13 + (int)param_2[1];
    for (; plVar13 != plVar2; plVar13 = plVar13 + 1) {
      lVar10 = *plVar13;
      if (lVar10 != 0) {
        lVar8 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (*(char *)(lVar10 + 0x13c1) == '\0') {
            uVar9 = FUN_142df3580(lVar10);
            iVar5 = FUN_142df3570(uVar7,uVar9);
            if (iVar5 != 0) goto LAB_140a0f352;
          }
          plVar1 = param_1 + 0x95;
          plVar11 = (longlong *)param_1[0xc1];
          if ((longlong *)param_1[0xc1] == (longlong *)0x0) {
            plVar11 = plVar1;
          }
          plVar12 = (longlong *)((longlong)(int)param_1[0xc2] * 0x2c + (longlong)plVar11);
          for (; plVar11 != plVar12; plVar11 = (longlong *)((longlong)plVar11 + 0x2c)) {
            lVar8 = FWeakObjectPtr::Get(plVar11);
            if (lVar8 == lVar10) goto LAB_140a0f218;
          }
          plVar11 = (longlong *)0x0;
LAB_140a0f218:
          plVar12 = (longlong *)FUN_142df90a0();
          lVar8 = plVar12[0x1f];
          if (lVar8 == 0) {
            (**(code **)(*plVar12 + 0x368))(plVar12);
            lVar8 = plVar12[0x1f];
          }
          local_38[0] = *(undefined1 *)(lVar8 + 0x48);
          local_30 = *(undefined8 *)(lVar8 + 0x50);
          cVar4 = FUN_142c20da0(param_1[0xc5],lVar10,local_38);
          if (cVar4 == '\0') {
            if (plVar11 == (longlong *)0x0) goto LAB_140a0f352;
            if ((plVar6 == (longlong *)0x0) ||
               (lVar10 = (**(code **)(*plVar6 + 0x148))(plVar6), lVar10 == 0)) {
              uVar14 = 0;
            }
            else {
              uVar14 = *(undefined4 *)(lVar10 + 0x8c8);
            }
            uVar9 = 0;
          }
          else {
            if (plVar11 == (longlong *)0x0) {
              if ((int)param_1[0xc2] < 1) {
                (**(code **)(*param_1 + 0x358))(param_1,1);
              }
              iVar5 = (int)param_1[0xc2];
              *(int *)(param_1 + 0xc2) = iVar5 + 1;
              if (*(int *)((longlong)param_1 + 0x614) < iVar5 + 1) {
                FUN_140a13490(plVar1,iVar5);
              }
              plVar11 = (longlong *)param_1[0xc1];
              if ((longlong *)param_1[0xc1] == (longlong *)0x0) {
                plVar11 = plVar1;
              }
              plVar11 = (longlong *)((longlong)plVar11 + (longlong)iVar5 * 0x2c);
              FWeakObjectPtr::operator=(plVar11,lVar10);
              *(undefined4 *)(plVar11 + 1) = 0x7f7fffff;
              FUN_142d2e640((longlong)plVar11 + 0x14);
              FUN_142d2e640(plVar11 + 4);
            }
            if ((plVar6 == (longlong *)0x0) ||
               (lVar10 = (**(code **)(*plVar6 + 0x148))(plVar6), lVar10 == 0)) {
              uVar14 = 0;
              uVar9 = 1;
            }
            else {
              uVar14 = *(undefined4 *)(lVar10 + 0x8c8);
              uVar9 = 1;
            }
          }
          FUN_142d48b30(plVar11 + 4,uVar14,uVar9,0);
        }
      }
LAB_140a0f352:
    }
  }
  return;
}



// FUNCTION 140a0f390 FUN_140a0f390 body=321 status=ok
// SIG undefined FUN_140a0f390(void)

void FUN_140a0f390(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res8;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  FUN_142343b00();
  lVar2 = FUN_1405c6c00();
  if (lVar2 != 0) {
    lVar3 = FUN_1413ea8c0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a0f3f7;
  }
  lVar2 = 0;
LAB_140a0f3f7:
  *(longlong *)(param_1 + 0x230) = lVar2;
  lVar2 = FUN_140a09850(param_1);
  if (lVar2 != 0) {
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FName::FName(&local_res8,"OnAttachWeapon",1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_18 = local_38;
    local_14 = local_34;
    local_30 = local_res8;
    local_10 = local_res8;
    FUN_143088040(lVar2,&local_18);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FName::FName(&local_res8,"OnDetachWeapon",1);
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_18 = local_28;
    local_14 = local_24;
    local_20 = local_res8;
    local_10 = local_res8;
    FUN_143088210(lVar2,&local_18);
  }
  return;
}



// FUNCTION 140a0f4e0 FUN_140a0f4e0 body=333 status=ok
// SIG undefined FUN_140a0f4e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a0f4e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined4 *local_290;
  undefined8 local_288;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined8 *local_268;
  undefined1 *puStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_240 [8];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [520];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  if (*(longlong *)(param_1 + 0x120) == 0) {
    FUN_1423407b0();
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x4f8);
  }
  if (lVar2 != 0) {
    local_258 = *(undefined8 *)(lVar2 + 0xc0);
    local_250 = *(undefined8 *)(param_1 + 0x118);
    local_268 = &local_258;
    puStack_260 = local_240;
    local_278 = 0;
    local_238 = local_268;
    uStack_230 = puStack_260;
    FUN_1405e1200(local_228,&local_238);
    lVar1 = *(longlong *)(param_1 + 0x120);
    local_274 = 0xffffffff;
    local_270 = 0;
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    local_290 = &local_278;
    local_288 = 0;
    local_298 = 0;
    FUN_1405f8040(&local_268,lVar1,*(undefined8 *)(lVar2 + 0x60),local_228);
    if (local_20 != 0) {
      FMemory::Free();
    }
  }
  UVRNotificationsComponent::XRPlayAreaChanged_Handler(param_1);
  return;
}



// FUNCTION 140a0f630 FUN_140a0f630 body=170 status=ok
// SIG undefined FUN_140a0f630(void)

void FUN_140a0f630(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[0xfe];
  if (lVar1 != 0) {
    lVar2 = param_1[0xfd];
    *(undefined1 *)(param_1 + 0xf2) = 1;
    param_1[0xf7] = lVar1;
    if (param_1[0xfa] != 0) {
      FUN_14223c460(lVar1,0);
      FUN_1422232e0(param_1[0xf7],param_1[0xfa],&DAT_146532184,lVar2);
      FUN_1409fde20(param_1);
      if ((param_1[0x23] != 0) && (*(char *)(param_1[0x23] + 0x128) == '\x03')) {
        param_1[0xfe] = param_1[0xf7];
        param_1[0xfd] = lVar2;
        (**(code **)(*param_1 + 0x260))(param_1);
      }
    }
  }
  return;
}



// FUNCTION 140a0f6e0 FUN_140a0f6e0 body=87 status=ok
// SIG undefined FUN_140a0f6e0(void)

void FUN_140a0f6e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_143082290();
  plVar1 = *(longlong **)(param_1 + 0x150);
  if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0x128) != '\x03')) {
    uVar2 = FUN_141443070();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_140a00b20(lVar3,param_1);
    }
  }
  return;
}



// FUNCTION 140a0f740 FUN_140a0f740 body=462 status=ok
// SIG undefined FUN_140a0f740(void)

void FUN_140a0f740(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    if (*(int *)(param_1 + 0x1e0) == *(int *)(param_1 + 0x210)) {
      iVar3 = _guard_xfg_dispatch_icall_nop
                        (*(void **)(param_1 + 0x1d8),*(void **)(param_1 + 0x208),
                         (longlong)*(int *)(param_1 + 0x1e0) << 3);
      if (iVar3 != 0) goto LAB_140a0f79d;
      bVar1 = true;
    }
    else {
LAB_140a0f79d:
      bVar1 = false;
    }
    if (bVar1) goto LAB_140a0f7a8;
    bVar1 = true;
  }
  else {
LAB_140a0f7a8:
    bVar1 = false;
  }
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x208,param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x1e8);
  if (*(char *)((longlong)param_2 + 0x19) != *(char *)(param_1 + 0x1f1)) {
    if (*(char *)(param_1 + 0x1f1) == '\0') {
      if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x260) + 0x288))();
        *(undefined8 *)(param_1 + 0x260) = 0;
      }
    }
    else {
      if (*(longlong **)(param_1 + 0x118) == (longlong *)0x0) {
LAB_140a0f800:
        uVar5 = 0;
      }
      else {
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x678))();
        if (lVar4 == 0) goto LAB_140a0f800;
        uVar5 = *(undefined8 *)(lVar4 + 0x4c0);
      }
      FUN_140a1e790(*(undefined8 *)(param_1 + 0x1b0),uVar5,*(undefined8 *)(param_1 + 0x250),
                    param_1 + 0x260);
    }
  }
  cVar2 = *(char *)(param_1 + 0x1f0);
  if (((char)param_2[3] == cVar2) && (!bVar1)) goto LAB_140a0f8df;
  lVar4 = *(longlong *)(param_1 + 0x118);
  lVar6 = 0;
  if (lVar4 != 0) {
    uVar5 = FUN_142a232e0();
    lVar6 = FUN_14222fa10(lVar4,uVar5,*(undefined8 *)(param_1 + 0x1c8));
    if (lVar6 == 0) {
LAB_140a0f8b5:
      lVar6 = 0;
    }
    else {
      lVar4 = FUN_142a232e0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140a0f8b5;
    }
    cVar2 = *(char *)(param_1 + 0x1f0);
  }
  if (cVar2 == '\0') {
    FUN_140a15d40(lVar6,param_1 + 0x208);
  }
  else {
    FUN_140a15c40(lVar6,*(undefined8 *)(param_1 + 0x1b8));
  }
LAB_140a0f8df:
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140a0f940 FUN_140a0f940 body=865 status=ok
// SIG undefined FUN_140a0f940(void)

void FUN_140a0f940(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  longlong *local_18;
  int local_10;
  
  if (param_2 != *(longlong *)(param_1 + 0x6c8)) {
    return;
  }
  if (param_3 != param_1) {
    return;
  }
  if (*(longlong *)(param_1 + 0x718) == 0) {
    if (*(longlong *)(param_1 + 0x730) == 0) {
      return;
    }
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_14071ba40(*(longlong *)(param_1 + 0x740),0,
                  *(undefined8 *)(*(longlong *)(param_1 + 0x740) + 0x220),&local_18,0);
    if (local_10 != 0) {
      if (local_18 == (longlong *)0x0) goto LAB_140a0fba7;
      (**(code **)(*local_18 + 0x28))(local_18,0);
      if (local_18 != (longlong *)0x0) {
        local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
      }
      local_10 = 0;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
LAB_140a0fba7:
    plVar1 = *(longlong **)(param_1 + 0x6c8);
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    uVar5 = ULevelSequencePlayer::GetPrivateStaticClass();
    lVar6 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
    if (lVar6 != 0) {
      FUN_142dbb5d0(lVar6 + 0x178,&DAT_146865c48);
    }
    if (*(longlong *)(param_1 + 0x730) == 0) {
      return;
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x730) + 0x4d8);
    if (lVar6 != 0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AOakAIController::OnSeatDetachFinished",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x3e0,param_1,local_res8);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x708,0);
    *(undefined8 *)(param_1 + 0x730) = 0;
    *(undefined8 *)(param_1 + 0x738) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x480))();
    return;
  }
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_14071ba40(*(longlong *)(param_1 + 0x740),0,
                *(undefined8 *)(*(longlong *)(param_1 + 0x740) + 0x220),&local_18,0);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140a0f9ed;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140a0f9ed:
  plVar1 = *(longlong **)(param_1 + 0x6c8);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x718) != 0)) {
    uVar5 = ULevelSequencePlayer::GetPrivateStaticClass();
    lVar6 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
    if (lVar6 != 0) {
      FUN_142dbb5d0(lVar6 + 0x178,&DAT_146865c48);
    }
    *(undefined1 *)(param_1 + 0x758) = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x6e8,0);
    if (*(longlong *)(param_1 + 0x728) != 0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AOakAIController::OnSeatDetachFinished",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                (*(longlong *)(param_1 + 0x728) + 0x3e0,param_1,local_res8);
      *(undefined8 *)(param_1 + 0x728) = 0;
    }
    *(undefined8 *)(param_1 + 0x718) = 0;
    *(undefined8 *)(param_1 + 0x720) = 0;
    *(undefined8 *)(param_1 + 0x738) = 0;
    if ((*(longlong *)(param_1 + 0x748) != 0) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x950))(), cVar4 == '\0')) {
      (**(code **)(**(longlong **)(param_1 + 0x748) + 0x480))();
      FUN_142fb0b20(*(undefined8 *)(param_1 + 0x748));
      return;
    }
  }
  return;
}



// FUNCTION 140a0fcb0 FUN_140a0fcb0 body=370 status=ok
// SIG undefined FUN_140a0fcb0(void)

void FUN_140a0fcb0(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char local_res8 [8];
  longlong local_res10;
  
  lVar4 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x60 + param_2[1]);
  if (lVar4 != 0) {
    FUN_1409fdcf0(lVar4,3);
    lVar4 = *param_2;
    if (lVar4 != 0) {
      lVar5 = FUN_1413e48b0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar4 = *(longlong *)(lVar4 + 0x568), lVar4 != 0)) {
        local_res8[0] = '\0';
        cVar3 = FUN_142cc3c10(param_1 + 0x3f0,lVar4,local_res8);
        if ((cVar3 != '\0') && (local_res8[0] != '\0')) {
          local_res10 = 0;
          cVar3 = FUN_142cc4b40(param_1 + 0x400,lVar4,&local_res10);
          lVar5 = local_res10;
          if ((cVar3 != '\0') && (local_res10 != 0)) {
            lVar6 = UUGPauseScreenUW::GetPrivateStaticClass();
            lVar1 = *(longlong *)(lVar5 + 0x10);
            if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              *(undefined8 *)(lVar5 + 0x2d8) = 0;
            }
          }
          FUN_142cd0a60(param_1 + 0x400,lVar4,0);
        }
      }
    }
    FUN_140715eb0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 140a0fe30 FUN_140a0fe30 body=152 status=ok
// SIG undefined FUN_140a0fe30(void)

void FUN_140a0fe30(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x110) != '\0') &&
     (lVar2 = (**(code **)(*(longlong *)*param_2 + 0x690))(), lVar2 != 0)) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1412420d0(lVar2);
    }
  }
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 140a0fed0 FUN_140a0fed0 body=225 status=ok
// SIG undefined FUN_140a0fed0(void)

void FUN_140a0fed0(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*(longlong *)*param_2 + 0x690))();
  if (lVar2 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(char *)(lVar2 + 0xe88) == '\0') {
        FUN_141242130(lVar2);
      }
      lVar2 = *param_2;
      if (lVar2 != 0) {
        lVar3 = FUN_1413e48b0();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          *(undefined1 *)(lVar2 + 0x75a) = 0;
        }
      }
    }
  }
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 140a0ffc0 FUN_140a0ffc0 body=91 status=ok
// SIG undefined FUN_140a0ffc0(void)

void FUN_140a0ffc0(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x48 + *(longlong *)(param_2 + 8));
  if (lVar1 != 0) {
    FUN_1409fdcf0(lVar1,1);
    FUN_1406f2080(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 140a10020 FUN_140a10020 body=300 status=ok
// SIG undefined FUN_140a10020(void)

void FUN_140a10020(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_28 [32];
  
  lVar2 = *(longlong *)(param_1 + 800);
  if (lVar2 == 0) {
    lVar2 = FUN_140a19170();
    *(longlong *)(param_1 + 800) = lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  if (param_3 == '\0') {
    if (*(longlong *)(param_1 + 0x390) != 0) {
      FUN_1405a3150(lVar2,local_28,*(longlong *)(param_1 + 0x390),0);
      FUN_140591060(local_28);
      lVar2 = FUN_140590080(local_28);
      FUN_1405913a0(param_1 + 0x490,lVar2);
      *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(lVar2 + 0x10);
      FUN_140591060(local_28);
      return;
    }
    FUN_1405ac8f0(param_1 + 0x490,0,4);
  }
  else if (*(longlong *)(param_1 + 0x388) != 0) {
    cVar1 = FUN_14059ee90(param_1 + 0x490);
    if (cVar1 == '\0') {
      lVar2 = FUN_1405a3150(lVar2,local_28,*(undefined8 *)(param_1 + 0x388),0);
      FUN_1405913a0(param_1 + 0x490,lVar2);
      *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(lVar2 + 0x10);
      FUN_140591060(local_28);
      return;
    }
  }
  return;
}



// FUNCTION 140a10150 FUN_140a10150 body=195 status=ok
// SIG undefined FUN_140a10150(void)

void FUN_140a10150(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar2 = FUN_1428cf800(uVar4);
    if (iVar2 == 3) {
      return;
    }
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x8d);
  if (((cVar1 != '\0') && (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x8e), cVar1 != '\0')) &&
     (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x90), cVar1 != '\0')) {
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x90);
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x8e);
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x8d);
    FUN_1413eb140(param_1,uVar6,uVar5,uVar4);
  }
  return;
}



// FUNCTION 140a10220 FUN_140a10220 body=277 status=ok
// SIG undefined FUN_140a10220(void)

void FUN_140a10220(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  wchar_t *pwVar2;
  undefined1 local_res18 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined2 uStack_e;
  undefined4 uStack_c;
  
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x361) = 1;
    *(undefined1 *)(param_1 + 0x370) = 0;
    puVar1 = (undefined8 *)FName::FName(local_res18,L"AIExplosive_Equipped",1);
    pwVar2 = L"AIExplosive_Requesting";
  }
  else if (param_2 == '\x01') {
    *(undefined1 *)(param_1 + 0x361) = 1;
    *(undefined1 *)(param_1 + 0x370) = 0;
    puVar1 = (undefined8 *)FName::FName(local_res18,L"AIMelee_Equipped",1);
    pwVar2 = L"AIMelee_Requesting";
  }
  else {
    if (param_2 != '\x02') {
      return;
    }
    *(undefined1 *)(param_1 + 0x361) = 0;
    *(undefined1 *)(param_1 + 0x370) = 1;
    puVar1 = (undefined8 *)FName::FName(local_res18,L"BlockAllProjectile");
    *(undefined8 *)(param_1 + 0x368) = *puVar1;
    puVar1 = (undefined8 *)FName::FName(local_res18,L"AIShield_Equipped",1);
    pwVar2 = L"AIShield_Requesting";
  }
  local_18 = (undefined4)*puVar1;
  uStack_14 = (undefined4)((ulonglong)*puVar1 >> 0x20);
  *(undefined4 *)(param_1 + 800) = local_18;
  *(undefined4 *)(param_1 + 0x324) = uStack_14;
  *(uint *)(param_1 + 0x328) = CONCAT22(uStack_e,0xff00);
  *(undefined4 *)(param_1 + 0x32c) = uStack_c;
  puVar1 = (undefined8 *)FName::FName(local_res18,pwVar2,1);
  *(undefined8 *)(param_1 + 0x330) = *puVar1;
  *(ulonglong *)(param_1 + 0x338) = CONCAT44(uStack_c,CONCAT22(uStack_e,0xff00));
  return;
}



// FUNCTION 140a10340 FUN_140a10340 body=82 status=ok
// SIG undefined FUN_140a10340(void)

ulonglong FUN_140a10340(longlong param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  
  iVar2 = FUN_140c13370();
  uVar3 = iVar2 - 1;
  uVar4 = (ulonglong)uVar3;
  uVar6 = *(int *)(param_1 + 0x1f0) - 1;
  if ((int)uVar3 < 0) {
    uVar6 = 0;
  }
  else {
    if ((int)uVar3 < (int)uVar6) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 0) goto LAB_140a1038a;
  }
  if ((int)uVar6 < *(int *)(param_1 + 0x1f0)) {
    uVar4 = (ulonglong)(int)uVar6;
    pbVar5 = (byte *)(uVar4 * 0xb0 + *(longlong *)(param_1 + 0x1e8));
    if ((pbVar5 != (byte *)0x0) && (bVar1 = *pbVar5 >> 3 & 1, uVar4 = (ulonglong)bVar1, bVar1 != 0))
    {
      return uVar4;
    }
  }
LAB_140a1038a:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140a103a0 FUN_140a103a0 body=1670 status=ok
// SIG undefined FUN_140a103a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a103a0(longlong param_1,longlong *param_2,float *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
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
  float fVar16;
  float fVar17;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar15 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_168;
  float local_164;
  float local_160;
  undefined8 local_158;
  float local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [208];
  
  lVar1 = param_2[0xd4];
  if (lVar1 != 0) {
    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    fVar5 = *(float *)(lVar2 + 0x7b0);
    lVar2 = param_2[0x2d];
    if (lVar2 == 0) {
      fVar11 = (float)(_DAT_1468657f0 & _DAT_146865800);
      fVar12 = (float)(uRam00000001468657f4 & uRam0000000146865804);
      fVar13 = (float)(uRam00000001468657f8 & uRam0000000146865808);
      fVar7 = (float)((uint)fRam00000001468657fc & uRam000000014686580c);
      fVar23 = 0.0;
      fVar24 = 0.0;
      fVar25 = 0.0;
      fVar26 = fRam00000001468657fc;
    }
    else {
      fVar23 = *(float *)(lVar2 + 0x210);
      fVar24 = *(float *)(lVar2 + 0x214);
      fVar25 = *(float *)(lVar2 + 0x218);
      fVar11 = *(float *)(lVar2 + 0x230);
      fVar12 = *(float *)(lVar2 + 0x234);
      fVar13 = *(float *)(lVar2 + 0x238);
      fVar7 = *(float *)(lVar2 + 0x23c);
      fVar26 = *(float *)(lVar2 + 0x21c);
    }
    FUN_1430d48d0(lVar1,&local_138);
    fVar19 = fVar23 * _DAT_1468658d0;
    fVar20 = fVar24 * fRam00000001468658d4;
    fVar21 = fVar25 * fRam00000001468658d8;
    fVar22 = fVar26 * fRam00000001468658dc;
    auVar15._4_4_ = fVar12;
    auVar15._0_4_ = fVar11;
    auVar15._8_4_ = fVar13;
    auVar15._12_4_ = fVar7;
    auVar15 = rcpps(unaff_XMM6,auVar15);
    fVar6 = local_130 * fVar20 - local_134 * fVar21;
    fVar8 = local_138 * fVar21 - local_130 * fVar19;
    fVar9 = local_134 * fVar19 - local_138 * fVar20;
    fVar10 = fVar22 * 0.0 - fVar22 * 0.0;
    fVar14 = auVar15._0_4_;
    fVar16 = auVar15._4_4_;
    fVar17 = auVar15._8_4_;
    fVar18 = auVar15._12_4_;
    fVar6 = fVar6 + fVar6;
    fVar8 = fVar8 + fVar8;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar11;
    fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar12;
    fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar13;
    fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar7;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar11;
    fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar12;
    fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar13;
    fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar7;
    local_118 = ((fVar9 * fVar20 - fVar8 * fVar21) + fVar22 * fVar6 + local_138) *
                (float)(-(uint)((float)((uint)fVar11 & _DAT_1468658a0) <= _DAT_1468658c0) &
                        (uint)fVar14 ^ (uint)fVar14);
    fStack_114 = ((fVar6 * fVar21 - fVar9 * fVar19) + fVar22 * fVar8 + local_134) *
                 (float)(-(uint)((float)((uint)fVar12 & uRam00000001468658a4) <=
                                fRam00000001468658c4) & (uint)fVar16 ^ (uint)fVar16);
    fStack_110 = ((fVar8 * fVar19 - fVar6 * fVar20) + fVar22 * fVar9 + local_130) *
                 (float)(-(uint)((float)((uint)fVar13 & uRam00000001468658a8) <=
                                fRam00000001468658c8) & (uint)fVar17 ^ (uint)fVar17);
    fStack_10c = ((fVar10 * fVar22 - fVar10 * fVar22) + fVar22 * fVar10 + 0.0) *
                 (float)(-(uint)((float)((uint)fVar7 & uRam00000001468658ac) <= fRam00000001468658cc
                                ) & (uint)fVar18 ^ (uint)fVar18);
    (**(code **)(*param_2 + 0x308))(param_2,&local_168);
    fVar7 = SQRT(local_168 * local_168 + local_164 * local_164 + local_160 * local_160);
    if (100.0 <= fVar7) {
      fVar7 = 1.0 / fVar7;
      local_160 = local_160 * fVar7;
      local_168 = local_168 * fVar7;
      local_164 = local_164 * fVar7;
      if (0.9 < ABS(local_160)) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb30) + 0x168);
        if (lVar2 == 0) {
          local_150 = (float)DAT_1464aa7b0;
          puVar3 = &local_158;
          local_158 = DAT_1464aa7a8;
        }
        else {
          puVar3 = (undefined8 *)FUN_142369f10(lVar2,&local_148);
        }
        local_158 = *puVar3;
        local_168 = (float)local_158;
        local_164 = (float)((ulonglong)local_158 >> 0x20);
        local_150 = *(float *)(puVar3 + 1);
      }
      local_160 = 0.0;
      fVar7 = local_168 * local_168 + local_164 * local_164;
      if (1e-08 < fVar7) {
        auVar15 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar6 = auVar15._0_4_;
        fVar6 = fVar6 + fVar6 * (0.5 - fVar7 * 0.5 * fVar6 * fVar6);
        fVar6 = fVar6 + fVar6 * (0.5 - fVar7 * 0.5 * fVar6 * fVar6);
        local_168 = local_168 * fVar6;
        local_164 = local_164 * fVar6;
      }
      if (ABS(local_164 * param_3[1] + local_168 * *param_3) <= 0.9) {
        FRotationMatrix::MakeFromZX(local_108,param_3,&local_168);
        FQuat::FQuat(&local_148,local_108);
        fVar16 = fVar5 * 5.0625 + 3.375;
        fVar6 = 1.0 / (fVar16 * fVar5 + 1.0);
        fVar5 = -fVar24;
        fVar16 = fVar16 * fVar6;
        fVar8 = -fVar23;
        fVar7 = -fVar25;
        fVar9 = fStack_13c * fVar8 * _DAT_146865830 + fVar26 * local_148 +
                fStack_140 * fVar5 * _DAT_146865820 + fStack_144 * fVar7 * _DAT_146865810;
        fVar10 = fStack_140 * fVar8 * fRam0000000146865834 + fVar26 * fStack_144 +
                 fStack_13c * fVar5 * fRam0000000146865824 +
                 local_148 * fVar7 * fRam0000000146865814;
        fVar14 = fStack_144 * fVar8 * fRam0000000146865838 + fVar26 * fStack_140 +
                 local_148 * fVar5 * fRam0000000146865828 +
                 fStack_13c * fVar7 * fRam0000000146865818;
        fVar5 = local_148 * fVar8 * fRam000000014686583c + fVar26 * fStack_13c +
                fStack_144 * fVar5 * fRam000000014686582c +
                fStack_140 * fVar7 * fRam000000014686581c;
        if (fVar9 * DAT_1464aa810 + fVar10 * DAT_1464aa814 + fVar14 * DAT_1464aa818 +
            fVar5 * DAT_1464aa81c < 0.0) {
          fVar8 = -1.0;
        }
        else {
          fVar8 = 1.0;
        }
        fVar5 = fVar5 * fVar8;
        fVar17 = -1.0;
        if ((-1.0 <= fVar5) && (fVar17 = fVar5, 1.0 <= fVar5)) {
          fVar17 = 1.0;
        }
        local_148 = -fVar23;
        fStack_144 = -fVar24;
        fStack_140 = fVar7;
        fStack_13c = fVar26;
        fVar7 = _guard_xfg_dispatch_icall_nop(fVar17);
        fVar5 = 1.0 - fVar5 * fVar5;
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        if (SQRT(fVar5) < 0.0001) {
          fVar5 = 1.0;
          fVar9 = 0.0;
          fVar17 = 0.0;
        }
        else {
          fVar17 = 1.0 / SQRT(fVar5);
          fVar5 = fVar17 * fVar9 * fVar8;
          fVar9 = fVar17 * fVar10 * fVar8;
          fVar17 = fVar17 * fVar14 * fVar8;
        }
        fVar6 = fVar7 * 10.125 * fVar6;
        fVar11 = (fVar6 * fVar5 - local_118 * fVar16) * fVar11;
        fVar12 = (fVar6 * fVar9 - fStack_114 * fVar16) * fVar12;
        fVar13 = (fVar6 * fVar17 - fStack_110 * fVar16) * fVar13;
        fVar5 = fVar13 * fVar24 - fVar12 * fVar25;
        fVar7 = fVar11 * fVar25 - fVar13 * fVar23;
        fVar6 = fVar12 * fVar23 - fVar11 * fVar24;
        fVar5 = fVar5 + fVar5;
        fVar7 = fVar7 + fVar7;
        fVar6 = fVar6 + fVar6;
        local_150 = (fVar7 * fVar23 - fVar5 * fVar24) + fVar26 * fVar6 + fVar13;
        local_158 = CONCAT44((fVar5 * fVar25 - fVar6 * fVar23) + fVar26 * fVar7 + fVar12,
                             (fVar6 * fVar24 - fVar7 * fVar25) + fVar26 * fVar5 + fVar11);
        fStack_140 = local_150;
        uVar4 = FUN_1430d1620(lVar1,&local_148,&local_158);
        FUN_1430cccc0(param_2,uVar4,0);
      }
    }
  }
  return;
}



// FUNCTION 140a10a30 FUN_140a10a30 body=556 status=ok
// SIG undefined FUN_140a10a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a10a30(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  longlong *local_2a0;
  undefined8 local_298;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 local_280;
  longlong local_278 [2];
  undefined8 *local_268;
  undefined1 *puStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_240 [520];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  plVar4 = (longlong *)FUN_140a09850();
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*plVar4 + 0x950))(plVar4);
    if ((((plVar5 != (longlong *)0x0) &&
         (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x670))(plVar5), plVar5 != (longlong *)0x0))
        && ((*(uint *)((longlong)plVar5 + 0x4cc) >> 1 & 1) != 0)) &&
       ((cVar3 = (**(code **)(*plVar5 + 0x768))(plVar5), cVar3 != '\0' &&
        (*(longlong *)(param_1 + 0x1e8) != 0)))) {
      FUN_140a09920(param_1,&local_288,1);
      if (CONCAT44(uStack_284,local_288) != 0) {
        local_2a0 = local_278;
        local_2a8 = 0;
        local_278[0] = 0;
        local_278[1] = 0;
        FUN_1405a2d20(CONCAT44(uStack_284,local_288),&local_258,*(undefined8 *)(param_1 + 0x1e8),0);
        FUN_140591060(&local_258);
        if (local_278[0] != 0) {
          FMemory::Free();
        }
      }
      FUN_140a11f50(param_1);
      if (CONCAT44(uStack_284,local_288) != 0) {
        FUN_1405a53f0();
      }
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 0xd8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x100);
      local_288 = 0;
      local_250 = (**(code **)(*plVar4 + 0x678))(plVar4);
      local_268 = &local_258;
      puStack_260 = local_240;
      local_258 = uVar2;
      FUN_1405e1200(local_240,&local_268);
      lVar6 = *(longlong *)(param_1 + 0x120);
      uStack_284 = 0xffffffff;
      local_280 = 0;
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0(param_1);
      }
      local_2a0 = (longlong *)&local_288;
      local_298 = 0;
      local_2a8 = 0;
      FUN_1405f8040(local_278,lVar6,*(undefined8 *)(lVar1 + 0x130),local_240);
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140a10c60 FUN_140a10c60 body=161 status=ok
// SIG undefined FUN_140a10c60(void)

void FUN_140a10c60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FUN_1423b5fe0(*(longlong *)(param_1 + 0x478),param_2,1);
    FUN_1423be6d0(*(undefined8 *)(param_1 + 0x478),0,0);
    (**(code **)(**(longlong **)(param_1 + 0x478) + 0x960))(*(longlong **)(param_1 + 0x478),0);
    (**(code **)(**(longlong **)(param_1 + 0x478) + 0x358))(*(longlong **)(param_1 + 0x478),0);
  }
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FGameplayTagContainer::operator=(&local_28,param_3);
    FUN_14076dd40(lVar1,&local_28);
  }
  return;
}



// FUNCTION 140a10d10 FUN_140a10d10 body=87 status=ok
// SIG undefined FUN_140a10d10(void)

void FUN_140a10d10(longlong param_1)

{
  longlong lVar1;
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    lVar1 = *(longlong *)(param_1 + 800);
    if (lVar1 == 0) {
      lVar1 = FUN_140a19170();
      *(longlong *)(param_1 + 800) = lVar1;
      if (lVar1 == 0) {
        return;
      }
    }
    FUN_1405a3150(lVar1,local_28,*(undefined8 *)(param_1 + 0x1e0),0);
    FUN_140591060(local_28);
  }
  return;
}



// FUNCTION 140a10d70 FUN_140a10d70 body=567 status=ok
// SIG undefined FUN_140a10d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a10d70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if ((*(longlong *)(param_1 + 0x478) != 0) && (param_2 != (longlong *)0x0)) {
    FUN_1423b5fe0(*(longlong *)(param_1 + 0x478),param_2,0);
    (**(code **)(**(longlong **)(param_1 + 0x478) + 0x358))(*(longlong **)(param_1 + 0x478),1);
  }
  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 != 0) {
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FGameplayTagContainer::operator=(&local_c8,param_1 + 0x4f0);
    FUN_14076dd40(lVar2,&local_c8);
  }
  if (*(char *)(param_1 + 0x128) == '\x03') {
    if (param_2 == (longlong *)0x0) {
      if (*(byte *)(param_1 + 0x568) == 2) {
        *(undefined1 *)(param_1 + 0x568) = 3;
      }
      else {
        if ((*(byte *)(param_1 + 0x568) & 0xfb) != 0) {
          return;
        }
        *(undefined1 *)(param_1 + 0x568) = 1;
      }
      FUN_140a0e5b0(param_1);
    }
    else {
      uVar5 = (**(code **)(*param_2 + 0x280))(param_2);
      plVar1 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar1 + 1,param_1);
        plVar1[2] = (longlong)&LAB_140a0c3c0;
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar1[4] = lVar2;
        *plVar1 = (longlong)&PTR_FUN_143f4d1b8;
      }
      uVar3 = AActor::GetWorldTimerManager(param_1);
      local_a8 = 0;
      local_a0 = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_d0 = 0xbf800000;
      local_d8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar3,param_1 + 0x580,&local_a8,uVar5);
      if (local_48 != 0) {
        plVar4 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar4 = local_58;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        lVar2 = FMemory::Realloc(plVar1,0,0);
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a10fb0 FUN_140a10fb0 body=775 status=ok
// SIG undefined FUN_140a10fb0(void)

void FUN_140a10fb0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  FUN_142ca82b0();
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    plVar1 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar1 + 1,param_1);
      plVar1[2] = (longlong)FUN_1409f9fd0;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[4] = lVar2;
      *plVar1 = (longlong)&PTR_FUN_143f4d2d8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57b8,1);
      (**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
      iVar6 = DAT_1464b57c0;
      lVar2 = (longlong)DAT_1464b57c0;
      DAT_1464b57c0 = DAT_1464b57c0 + 1;
      if (DAT_1464b57c4 < DAT_1464b57c0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57b8,iVar6);
      }
      puVar3 = (undefined8 *)(lVar2 * 0x10 + DAT_1464b57b8);
      *puVar3 = plVar1;
      *(undefined4 *)(puVar3 + 1) = 3;
    }
    plVar1 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar1 + 1,param_1);
      plVar1[2] = (longlong)&LAB_140a02800;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[4] = lVar2;
      *plVar1 = (longlong)&PTR_FUN_143f4d2d8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
      (**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
      iVar6 = DAT_1464b57d8;
      lVar2 = (longlong)DAT_1464b57d8;
      DAT_1464b57d8 = DAT_1464b57d8 + 1;
      if (DAT_1464b57dc < DAT_1464b57d8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar6);
      }
      puVar3 = (undefined8 *)(lVar2 * 0x10 + DAT_1464b57d0);
      *puVar3 = plVar1;
      *(undefined4 *)(puVar3 + 1) = 3;
    }
    plVar1 = (longlong *)FWindowsPlatformMisc::GetPlatformChunkInstall();
    if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x370) == 0)) {
      local_28 = (longlong *)0x0;
      local_20 = 0;
      puVar3 = (undefined8 *)operator_new(0x28,&local_28);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_1441db5a0;
        FWeakObjectPtr::operator=(puVar3 + 1,param_1);
        puVar3[2] = &LAB_1409f731c;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[4] = uVar4;
        *puVar3 = &PTR_FUN_1441db5e8;
      }
      puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res8,&local_28);
      *(undefined8 *)(param_1 + 0x370) = *puVar3;
    }
    if (*(int *)(param_1 + 0x448) == 0) {
      uVar4 = FUN_141607f00();
      puVar5 = (undefined8 *)FUN_14160a960(uVar4,&local_28,4);
      puVar3 = (undefined8 *)(param_1 + 0x440);
      plVar1 = local_28;
      iVar6 = local_20;
      if (puVar3 != puVar5) {
        iVar6 = *(int *)(param_1 + 0x448);
        plVar1 = (longlong *)*puVar3;
        if (iVar6 != 0) {
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 2;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          plVar1 = (longlong *)*puVar3;
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
        *puVar3 = *puVar5;
        *puVar5 = 0;
        *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(puVar5 + 1);
        *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)((longlong)puVar5 + 0xc);
        puVar5[1] = 0;
        plVar1 = local_28;
        iVar6 = local_20;
      }
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        plVar1 = plVar1 + 2;
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
    }
    *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
    return;
  }
  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  return;
}



// FUNCTION 140a112c0 FUN_140a112c0 body=210 status=ok
// SIG undefined FUN_140a112c0(void)

void FUN_140a112c0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  
  FUN_142349c80();
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x1f0)) {
    lVar6 = 0;
    do {
      cVar4 = FUN_1430032a0(*(longlong *)(param_1 + 0x1e8) + 0x48 + (longlong)iVar5 * 0xb0);
      if (cVar4 == '\0') {
        lVar3 = *(longlong *)(param_1 + 0x1e8);
        iVar2 = *(int *)(lVar3 + 0x70 + lVar6);
        lVar1 = lVar3 + lVar6;
        *(int *)(lVar1 + 0x70) = iVar2 + 1;
        if (*(int *)(lVar1 + 0x74) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(lVar1 + 0x68,iVar2);
        }
        Metasound::TVertexInterfaceGroup<Metasound::FEnvironmentVertex>::
        TVertexInterfaceGroup<Metasound::FEnvironmentVertex>
                  ((longlong)iVar2 * 0x20 + *(longlong *)(lVar1 + 0x68),
                   lVar3 + 0x48 + (longlong)iVar5 * 0xb0);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0xb0;
    } while (iVar5 < *(int *)(param_1 + 0x1f0));
  }
  return;
}



// FUNCTION 140a113a0 FUN_140a113a0 body=87 status=ok
// SIG undefined FUN_140a113a0(void)

void FUN_140a113a0(longlong param_1)

{
  UObject::PostLoad();
  if (*(char *)(param_1 + 0x138) != '\0') {
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined1 *)(param_1 + 0x168) = 1;
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  return;
}



// FUNCTION 140a11400 FUN_140a11400 body=98 status=ok
// SIG undefined FUN_140a11400(void)

void FUN_140a11400(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_142374400();
  if (*(char *)(param_1 + 0x361) != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x2d8);
    lVar2 = *(longlong *)(param_1 + 0x3a0);
    if (lVar1 == 0) {
      if (lVar2 != 0) {
        FUN_14223c460(lVar2,1);
        *(undefined8 *)(param_1 + 0x3a0) = 0;
      }
    }
    else if (lVar2 == 0) {
      *(longlong *)(param_1 + 0x3a0) = lVar1;
      FUN_14223c460(lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 140a114a0 ProjectPoint body=163 status=ok
// SIG undefined ProjectPoint(void)

ulonglong INavigationDataInterface::ProjectPoint(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong in_stack_00000028;
  
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavigationDataInterface.h"
             ,0x1f,L"Pure virtual not implemented (%s)",L"INavigationDataInterface::ProjectPoint");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavigationDataInterface.h"
             ,0x1f,L"Pure virtual not implemented (%s)",L"INavigationDataInterface::ProjectPoint");
  plVar4 = *(longlong **)(in_stack_00000028 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar6 = (int)lVar5 - 1;
    uVar7 = (ulonglong)uVar6;
    if (uVar6 == 0) {
      uVar7 = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar7 = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    return uVar7 & 0xffffffffffffff00;
  }
  return in_stack_00000028 & 0xffffffffffffff00;
}



// FUNCTION 140a11550 FUN_140a11550 body=427 status=ok
// SIG undefined FUN_140a11550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a11550(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined8 local_18;
  float local_10;
  
  lVar3 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar3 != 0) {
    lVar4 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = *(longlong *)(lVar3 + 0x700);
      if (lVar4 == 0) {
        lVar3 = *(longlong *)(lVar3 + 0x168);
        if (lVar3 == 0) {
          local_18 = _DAT_1468b5d90;
          local_10 = DAT_1468b5d98;
        }
        else {
          local_18 = *(undefined8 *)(lVar3 + 0x220);
          local_10 = *(float *)(lVar3 + 0x228);
        }
        local_28 = (undefined4)local_18;
        local_24 = (undefined4)((ulonglong)local_18 >> 0x20);
        local_20 = local_10;
      }
      else {
        bVar1 = *(byte *)(lVar4 + 0x2d0);
        lVar5 = lVar3;
        if (bVar1 != 0) {
          if (bVar1 < 3) {
            lVar5 = *(longlong *)(lVar4 + 0x2e0);
            if (*(longlong *)(lVar4 + 0x2e0) == 0) {
              lVar5 = lVar3;
            }
          }
          else if (bVar1 == 3) {
            lVar5 = FUN_140a63ba0(lVar3);
            lVar4 = *(longlong *)(lVar3 + 0x700);
            if (lVar5 == 0) {
              lVar5 = lVar3;
            }
          }
        }
        lVar3 = *(longlong *)(lVar5 + 0x168);
        if (lVar3 == 0) {
          local_18 = _DAT_1468b5d90;
          local_10 = DAT_1468b5d98;
        }
        else {
          local_18 = *(undefined8 *)(lVar3 + 0x220);
          local_10 = *(float *)(lVar3 + 0x228);
        }
        local_28 = (undefined4)local_18;
        local_24 = (undefined4)((ulonglong)local_18 >> 0x20);
        local_20 = local_10 + *(float *)(lVar4 + 0x30c);
      }
      UEnvQueryItemType_Point::SetContextHelper(param_3,&local_28);
    }
  }
  return;
}



// FUNCTION 140a11700 FUN_140a11700 body=161 status=ok
// SIG undefined FUN_140a11700(void)

void FUN_140a11700(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar3 != 0) {
    lVar4 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = *(longlong *)(lVar3 + 0x700);
      lVar5 = 0;
      if (lVar4 != 0) {
        bVar1 = *(byte *)(lVar4 + 0x2d0);
        if (bVar1 != 0) {
          if (bVar1 < 3) {
            lVar5 = *(longlong *)(lVar4 + 0x2e0);
          }
          else if (bVar1 == 3) {
            lVar5 = FUN_140a63ba0(lVar3);
          }
        }
      }
      if (lVar5 != 0) {
        lVar3 = lVar5;
      }
      UEnvQueryItemType_Actor::SetContextHelper(param_3,lVar3);
    }
  }
  return;
}



// FUNCTION 140a117b0 FUN_140a117b0 body=63 status=ok
// SIG undefined FUN_140a117b0(void)

void FUN_140a117b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_142e1a5a0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_142d6c590(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 140a11820 FUN_140a11820 body=290 status=ok
// SIG undefined FUN_140a11820(void)

void FUN_140a11820(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined8 local_res18 [2];
  longlong *local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [2];
  byte local_96;
  undefined1 local_95;
  undefined8 local_40;
  
  FUN_140a024d0(param_1 + 0x80,0);
  lVar3 = *(longlong *)(param_1 + 0x70);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 0x40);
    plVar1 = plVar4 + *(int *)(lVar3 + 0x48);
    if (plVar4 != plVar1) {
      local_a8 = &local_res10;
      local_a0 = local_98;
      do {
        local_res10 = *plVar4;
        FUN_142de2eb0(local_98);
        local_96 = local_96 | 2;
        cVar2 = *(char *)(local_res10 + 0x48);
        if (cVar2 == '\x01') {
          local_95 = 5;
          FName::FName(local_res18,L"SelfActor",1);
          local_40 = local_res18[0];
        }
        else if (cVar2 == '\x03') {
          local_95 = 0;
          FUN_142df3200(local_98,0);
        }
        else if (cVar2 == '\x04') {
          local_95 = 0;
          FUN_142df3200(local_98,1);
        }
        FUN_1409f0a80(param_1 + 0x80,local_res8,&local_a8,0);
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
    }
  }
  return;
}



// FUNCTION 140a11950 FUN_140a11950 body=99 status=ok
// SIG undefined FUN_140a11950(void)

void FUN_140a11950(longlong param_1)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0x728) != '\0') && (*(longlong *)(param_1 + 0x700) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x700) + 0x2e0) != 0)) {
    lVar1 = FUN_142ddddc0();
    if (lVar1 != 0) goto LAB_140a1199d;
  }
  lVar1 = FUN_142ddddc0(param_1);
  if (lVar1 == 0) {
    lVar1 = FUN_142ddddc0(*(undefined8 *)(param_1 + 0x150));
  }
LAB_140a1199d:
  if (*(longlong *)(param_1 + 0x718) != lVar1) {
    *(longlong *)(param_1 + 0x718) = lVar1;
  }
  return;
}



// FUNCTION 140a119c0 FUN_140a119c0 body=651 status=ok
// SIG undefined FUN_140a119c0(void)

void FUN_140a119c0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  undefined1 local_res10 [8];
  
  plVar2 = (longlong *)FUN_140a09850();
  if (plVar2 != (longlong *)0x0) {
    puVar3 = (undefined8 *)FName::FName(local_res10,L"NotifyHidden",1);
    FWeakObjectPtr::operator=(param_1 + 0x2e8,param_1);
    *(undefined8 *)(param_1 + 0x2f0) = *puVar3;
    FUN_1406a5aa0(plVar2 + 0xae,param_1 + 0x2e8);
    if (0 < *(int *)(param_1 + 0x1b8)) {
      puVar3 = (undefined8 *)FName::FName(local_res10,L"NotifyEquipped",1);
      FWeakObjectPtr::operator=(param_1 + 0x2a8,param_1);
      *(undefined8 *)(param_1 + 0x2b0) = *puVar3;
      FUN_1406a5aa0(plVar2 + 0x9e,param_1 + 0x2a8);
      puVar3 = (undefined8 *)FName::FName(local_res10,L"NotifyPutDown",1);
      FWeakObjectPtr::operator=(param_1 + 0x2b8,param_1);
      *(undefined8 *)(param_1 + 0x2c0) = *puVar3;
      FUN_1406a5aa0(plVar2 + 0xa0,param_1 + 0x2b8);
      puVar3 = (undefined8 *)FName::FName(local_res10,L"NotifyReloadStarted",1);
      FWeakObjectPtr::operator=(param_1 + 0x2c8,param_1);
      *(undefined8 *)(param_1 + 0x2d0) = *puVar3;
      FUN_1406a5aa0(plVar2 + 0xa8,param_1 + 0x2c8);
      puVar3 = (undefined8 *)FName::FName(local_res10,L"NotifyReloadEnded",1);
      FWeakObjectPtr::operator=(param_1 + 0x2d8,param_1);
      *(undefined8 *)(param_1 + 0x2e0) = *puVar3;
      FUN_1406a5aa0(plVar2 + 0xaa,param_1 + 0x2d8);
    }
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
      puVar3 = (undefined8 *)FName::FName(local_res10,L"ChargeStarted",1);
      FWeakObjectPtr::operator=(param_1 + 0x288,param_1);
      *(undefined8 *)(param_1 + 0x290) = *puVar3;
      puVar3 = (undefined8 *)FName::FName(local_res10,L"ChargedStopped",1);
      FWeakObjectPtr::operator=(param_1 + 0x298,param_1);
      bVar6 = 0;
      *(undefined8 *)(param_1 + 0x2a0) = *puVar3;
      do {
        cVar1 = FUN_14307eaa0(plVar2,bVar6,param_1);
        if (cVar1 != '\0') {
          uVar4 = UUGStartScreenUW::GetPrivateStaticClass();
          lVar5 = (**(code **)(*plVar2 + 0x7f8))(plVar2,uVar4,bVar6);
          if (lVar5 != 0) {
            FUN_1406a5aa0(lVar5 + 0x238,param_1 + 0x288);
            FUN_1406a5aa0(lVar5 + 0x248,param_1 + 0x298);
          }
        }
        bVar6 = bVar6 + 1;
      } while (bVar6 < 8);
    }
  }
  return;
}



// FUNCTION 140a11c50 FUN_140a11c50 body=641 status=ok
// SIG undefined FUN_140a11c50(void)

void FUN_140a11c50(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_140a11d8f;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
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
      if (iVar8 < iStack_44) {
LAB_140a11d8f:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x90 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x8c) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 0x11) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140a11ee0 FUN_140a11ee0 body=101 status=ok
// SIG undefined FUN_140a11ee0(void)

void FUN_140a11ee0(longlong *param_1)

{
  int iVar1;
  
  if (param_1[2] != 0) {
    iVar1 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
    }
    FUN_14058f880(*param_1 + (longlong)iVar1 * 8,param_1 + 2);
    if (param_1[2] != 0) {
      FUN_1405a53f0();
      param_1[2] = 0;
    }
  }
  return;
}



// FUNCTION 140a11f50 FUN_140a11f50 body=978 status=ok
// SIG undefined FUN_140a11f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a11f50(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  float *pfVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 in_XMM1 [16];
  undefined1 auVar9 [16];
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
  undefined1 auStack_118 [32];
  longlong local_f8;
  float fStack_f0;
  float fStack_ec;
  longlong local_e8 [2];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_14058f880(&local_f8,param_1 + 0x268);
  FUN_14058f880(local_e8,&local_f8);
  if (local_f8 != 0) {
    FUN_1405a53f0();
  }
  if ((local_e8[0] != 0) && (lVar4 = FUN_140a09850(param_1), lVar4 != 0)) {
    plVar5 = (longlong *)FUN_140a09850(param_1);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x950))(plVar5);
    if (plVar5 != (longlong *)0x0) {
      lVar4 = FUN_1413f82e0();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) &&
         (plVar5 = (longlong *)(**(code **)(*plVar5 + 0xa58))(plVar5), plVar5 != (longlong *)0x0)) {
        local_f8 = 0;
        uVar2 = (**(code **)(*plVar5 + 0x420))(plVar5,&local_98,0,0);
        fVar12 = local_78._0_4_;
        fVar13 = local_78._4_4_;
        fVar14 = local_78._8_4_;
        auVar9._4_4_ = -(uint)(fRam00000001468658c4 < (float)((uint)fVar13 & uRam00000001468658a4));
        auVar9._0_4_ = -(uint)(_DAT_1468658c0 < (float)((uint)fVar12 & _DAT_1468658a0));
        auVar9._8_4_ = -(uint)(fRam00000001468658c8 < (float)((uint)fVar14 & uRam00000001468658a8));
        auVar9._12_4_ =
             -(uint)(fRam00000001468658cc < (float)(local_78._12_4_ & uRam00000001468658ac));
        iVar3 = movmskps(uVar2,auVar9);
        fVar8 = _DAT_1468b5b90;
        fVar10 = fRam00000001468b5b94;
        fVar11 = fRam00000001468b5b98;
        fVar15 = _DAT_1468b5b70;
        fVar16 = fRam00000001468b5b74;
        fVar17 = fRam00000001468b5b78;
        fVar18 = fRam00000001468b5b7c;
        fVar19 = _DAT_1468b5b80;
        fVar20 = fRam00000001468b5b84;
        fVar21 = fRam00000001468b5b88;
        if (iVar3 != 0) {
          fVar15 = local_98 * _DAT_1468658d0;
          fVar16 = fStack_94 * fRam00000001468658d4;
          fVar17 = fStack_90 * fRam00000001468658d8;
          fVar18 = fStack_8c * fRam00000001468658dc;
          auVar9 = rcpps(in_XMM1,local_78);
          fVar8 = auVar9._0_4_;
          fVar10 = auVar9._4_4_;
          fVar11 = auVar9._8_4_;
          fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar12;
          fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar13;
          fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar14;
          fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar12;
          fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar13;
          fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar14;
          fVar8 = (float)((-(uint)((float)((uint)fVar12 & _DAT_1468658a0) <= _DAT_1468658c0) &
                           (uint)fVar8 ^ (uint)fVar8) & _DAT_146865800);
          fVar10 = (float)((-(uint)((float)((uint)fVar13 & uRam00000001468658a4) <=
                                   fRam00000001468658c4) & (uint)fVar10 ^ (uint)fVar10) &
                          uRam0000000146865804);
          fVar11 = (float)((-(uint)((float)((uint)fVar14 & uRam00000001468658a8) <=
                                   fRam00000001468658c8) & (uint)fVar11 ^ (uint)fVar11) &
                          uRam0000000146865808);
          local_88 = local_88 * fVar8;
          fStack_84 = fStack_84 * fVar10;
          fStack_80 = fStack_80 * fVar11;
          fVar12 = fStack_80 * fVar16 - fStack_84 * fVar17;
          fVar13 = local_88 * fVar17 - fStack_80 * fVar15;
          fVar14 = fStack_84 * fVar15 - local_88 * fVar16;
          fVar12 = fVar12 + fVar12;
          fVar13 = fVar13 + fVar13;
          fVar14 = fVar14 + fVar14;
          fVar19 = (float)((uint)(0.0 - ((fVar14 * fVar16 - fVar13 * fVar17) +
                                        fVar18 * fVar12 + local_88)) & _DAT_146865800);
          fVar20 = (float)((uint)(0.0 - ((fVar12 * fVar17 - fVar14 * fVar15) +
                                        fVar18 * fVar13 + fStack_84)) & uRam0000000146865804);
          fVar21 = (float)((uint)(0.0 - ((fVar13 * fVar15 - fVar12 * fVar16) +
                                        fVar18 * fVar14 + fStack_80)) & uRam0000000146865808);
        }
        pfVar6 = (float *)FUN_14059d7c0(local_e8[0],&local_f8);
        fVar8 = *pfVar6 * fVar8;
        fVar10 = pfVar6[1] * fVar10;
        fVar11 = pfVar6[2] * fVar11;
        fVar12 = fVar11 * fVar16 - fVar10 * fVar17;
        fVar13 = fVar8 * fVar17 - fVar11 * fVar15;
        fVar14 = fVar10 * fVar15 - fVar8 * fVar16;
        fVar12 = fVar12 + fVar12;
        fVar13 = fVar13 + fVar13;
        fVar14 = fVar14 + fVar14;
        fStack_f0 = -fStack_90;
        local_c8._4_4_ = (fVar12 * fVar17 - fVar14 * fVar15) + fVar18 * fVar13 + fVar10 + fVar20;
        local_c8._0_4_ = (fVar14 * fVar16 - fVar13 * fVar17) + fVar18 * fVar12 + fVar8 + fVar19;
        local_c8._8_4_ = (fVar13 * fVar15 - fVar12 * fVar16) + fVar18 * fVar14 + fVar11 + fVar21;
        local_c8._12_4_ = 0;
        uVar2 = *(undefined4 *)(param_1 + 0x1a8);
        fStack_ec = fStack_8c;
        local_b8._4_4_ = uVar2;
        local_b8._0_4_ = uVar2;
        local_b8._8_4_ = uVar2;
        local_b8._12_4_ = 0;
        local_d8 = -local_98;
        fStack_d4 = -fStack_94;
        fStack_cc = fStack_8c;
        local_f8 = 0;
        fStack_d0 = fStack_f0;
        uVar7 = FUN_14058f8f0(local_a8,local_e8);
        FUN_1405a9a30(uVar7,plVar5,0,&local_d8);
      }
    }
  }
  FUN_140a11ee0(param_1 + 600);
  if (local_e8[0] != 0) {
    FUN_1405a53f0();
  }
  return;
}



// FUNCTION 140a12330 FUN_140a12330 body=312 status=ok
// SIG undefined FUN_140a12330(void)

void FUN_140a12330(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (param_3 != 0) {
    plVar6 = (longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x28);
    iVar5 = param_3;
    do {
      iVar7 = (int)plVar6[1];
      lVar4 = *plVar6;
      if (iVar7 != 0) {
        do {
          TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4);
          lVar4 = lVar4 + 0x10;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        lVar4 = *plVar6;
      }
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
      plVar3 = (longlong *)plVar6[-1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar6 = plVar6 + 5;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = (int)param_1[1];
    iVar7 = (iVar5 - param_2) - param_3;
    if (iVar7 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x28 + *param_1),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x28),(longlong)iVar7 * 0x28);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 - param_3;
    if (param_4 != '\0') {
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140a12470 FUN_140a12470 body=69 status=ok
// SIG undefined FUN_140a12470(void)

void FUN_140a12470(longlong param_1,longlong param_2)

{
  longlong local_res8;
  
  if (param_2 != 0) {
    FUN_1407665e0(param_2 + 0x290,param_1);
  }
  local_res8 = param_2;
  FUN_1409f2120(param_1 + 0x8d0,&local_res8);
  return;
}



// FUNCTION 140a124c0 FUN_140a124c0 body=159 status=ok
// SIG undefined FUN_140a124c0(void)

void FUN_140a124c0(longlong param_1,undefined8 param_2)

{
  longlong *local_18;
  int local_10;
  
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     (*(undefined8 *)(param_1 + 0x530) = param_2,
     *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x738) != 0)) {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_14071ba40(param_1,0,param_2,&local_18,0);
    if (local_10 != 0) {
      if (local_18 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_18 + 0x28))(local_18,0);
      if (local_18 != (longlong *)0x0) {
        local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
      }
      local_10 = 0;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}



// FUNCTION 140a12560 FUN_140a12560 body=313 status=ok
// SIG undefined FUN_140a12560(void)

void FUN_140a12560(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *local_18;
  int local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 == 0) {
    return;
  }
  local_18 = (longlong *)0x0;
  local_10 = 0;
  if (*(char *)(lVar1 + 0x758) == '\0') {
    if (*(longlong *)(lVar1 + 0x738) == 0) {
      *(undefined8 *)(param_1 + 0x520) = param_2;
      FUN_14071ba40(param_1,0,param_2,&local_18,0);
      if (local_10 == 0) goto LAB_140a12681;
      if (local_18 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_18 + 0x28))(local_18,0);
      if (local_18 != (longlong *)0x0) {
        local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x518) = param_2;
      FUN_14071ba40(param_1,0,param_2,&local_18,0);
      if (local_10 == 0) goto LAB_140a12681;
      if (local_18 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_18 + 0x28))(local_18,0);
      if (local_18 != (longlong *)0x0) {
        local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
        local_10 = 0;
        goto LAB_140a12681;
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x510) = param_2;
    FUN_14071ba40(param_1,0,param_2,&local_18,0);
    if (local_10 == 0) goto LAB_140a12681;
    if (local_18 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
      local_10 = 0;
      goto LAB_140a12681;
    }
  }
  local_10 = 0;
LAB_140a12681:
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 140a126a0 FUN_140a126a0 body=1092 status=ok
// SIG undefined FUN_140a126a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140a127b5) */

void FUN_140a126a0(longlong param_1,int param_2,float param_3,undefined1 param_4,undefined8 *param_5
                  )

{
  ushort *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ushort *puVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_a8 [48];
  undefined1 *local_78;
  int local_70;
  undefined4 local_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  iVar4 = *(int *)(param_1 + 0x1900);
  iVar15 = *(int *)(param_1 + 0x1420);
  if ((*(int *)(param_1 + 0x1420) <= param_2) && (iVar15 = iVar4, param_2 < iVar4)) {
    iVar15 = param_2;
  }
  puVar2 = (undefined4 *)(param_1 + 0x1908);
  *(undefined4 *)(param_1 + 0x19d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19d0) = 0;
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  local_b8 = param_4;
  if ((*(int *)(param_1 + 0x19d4) < 0) && (*(int *)(param_1 + 0x19d4) != 0)) {
    FUN_140a13a90(puVar2);
  }
  *(undefined8 *)(param_1 + 0x19dc) = 0;
  if (*(longlong *)(param_1 + 0x19e8) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x19f0) != '\0') {
    return;
  }
  local_70 = 0;
  local_78 = (undefined1 *)0x0;
  local_6c = 0;
  if (iVar4 < 1) {
    if ((iVar4 < 0) && (iVar4 != 0)) {
      local_70 = iVar4;
      FUN_140a13a00(local_a8);
    }
  }
  else {
    local_70 = iVar4;
    FUN_140a136e0(local_a8);
    puVar8 = local_a8;
    if (local_78 != (undefined1 *)0x0) {
      puVar8 = local_78;
    }
    _guard_xfg_dispatch_icall_nop(puVar8,0,(longlong)iVar4);
  }
  if ((1 < *(int *)(param_5 + 1)) && (puVar11 = (ushort *)*param_5, puVar11 != (ushort *)0x0)) {
    uVar3 = *puVar11;
    while (uVar3 != 0) {
      iVar13 = 0;
      iVar5 = iswdigit(uVar3);
      if (iVar5 != 0) {
        do {
          uVar3 = *puVar11;
          puVar11 = puVar11 + 1;
          iVar5 = (uint)uVar3 + iVar13 * 10;
          iVar13 = iVar5 + -0x30;
          iVar6 = iswdigit(*puVar11);
        } while (iVar6 != 0);
        iVar13 = iVar5 + -0x31;
        if ((-1 < iVar13) && (iVar13 < local_70)) {
          iVar6 = *(int *)(param_1 + 0x19d0);
          iVar7 = iVar6 + 1;
          *(int *)(param_1 + 0x19d0) = iVar7;
          if (*(int *)(param_1 + 0x19d4) < iVar7) {
            FUN_140a13110(puVar2);
          }
          puVar9 = *(undefined4 **)(param_1 + 0x19c8);
          if (*(undefined4 **)(param_1 + 0x19c8) == (undefined4 *)0x0) {
            puVar9 = puVar2;
          }
          puVar9[iVar6] = iVar13;
          puVar8 = local_a8;
          if (local_78 != (undefined1 *)0x0) {
            puVar8 = local_78;
          }
          puVar8[(longlong)iVar5 + -0x31] = 1;
        }
      }
      puVar1 = puVar11 + 1;
      puVar11 = puVar11 + 1;
      param_4 = local_b8;
      uVar3 = *puVar1;
    }
  }
  uVar12 = 0;
  if (*(int *)(param_1 + 0x19d0) < 1) {
    iVar5 = *(int *)(param_1 + 0x19d0);
    if (iVar5 < iVar15) {
      *(int *)(param_1 + 0x19d0) = iVar15;
      if (*(int *)(param_1 + 0x19d4) < iVar15) {
        FUN_140a13110(puVar2);
      }
      puVar9 = *(undefined4 **)(param_1 + 0x19c8);
      if (*(undefined4 **)(param_1 + 0x19c8) == (undefined4 *)0x0) {
        puVar9 = puVar2;
      }
      _guard_xfg_dispatch_icall_nop(puVar9 + iVar5,0,(longlong)(iVar15 - iVar5) << 2);
    }
    else if ((iVar15 < iVar5) && (iVar15 != iVar5)) {
      *(int *)(param_1 + 0x19d0) = iVar15;
      FUN_140a13760(puVar2);
    }
    uVar10 = uVar12;
    uVar14 = uVar12;
    if (0 < iVar15) {
      do {
        puVar9 = *(undefined4 **)(param_1 + 0x19c8);
        if (*(undefined4 **)(param_1 + 0x19c8) == (undefined4 *)0x0) {
          puVar9 = puVar2;
        }
        puVar9[uVar10] = (int)uVar14;
        puVar8 = local_a8;
        if (local_78 != (undefined1 *)0x0) {
          puVar8 = local_78;
        }
        puVar8[uVar10] = 1;
        uVar10 = uVar10 + 1;
        uVar14 = (ulonglong)((int)uVar14 + 1);
      } while ((longlong)uVar10 < (longlong)iVar15);
    }
  }
  uVar14 = 0;
  uVar10 = uVar14;
  if (0 < iVar4) {
    do {
      puVar8 = local_a8;
      if (local_78 != (undefined1 *)0x0) {
        puVar8 = local_78;
      }
      if (puVar8[uVar10] == '\0') {
        FUN_140a1d930(param_1,uVar12,0,param_4);
      }
      uVar12 = (ulonglong)((int)uVar12 + 1);
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)iVar4);
  }
  if (param_3 <= 0.0) {
    puVar9 = *(undefined4 **)(param_1 + 0x19c8);
    if (*(undefined4 **)(param_1 + 0x19c8) == (undefined4 *)0x0) {
      puVar9 = puVar2;
    }
    uVar12 = (longlong)*(int *)(param_1 + 0x19d0) & 0x3fffffffffffffff;
    if (puVar9 + *(int *)(param_1 + 0x19d0) < puVar9) {
      uVar12 = uVar14;
    }
    if (uVar12 != 0) {
      do {
        FUN_140a1d930(param_1,*puVar9,1,param_4);
        uVar14 = uVar14 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar14 != uVar12);
    }
  }
  else {
    if (*(int *)(param_1 + 0x19d0) < 1) goto LAB_140a12a9d;
    puVar9 = *(undefined4 **)(param_1 + 0x19c8);
    if (*(undefined4 **)(param_1 + 0x19c8) == (undefined4 *)0x0) {
      puVar9 = puVar2;
    }
    FUN_140a1d930(param_1,*puVar9,1,param_4);
    if (1 < *(int *)(param_1 + 0x19d0)) {
      *(float *)(param_1 + 0x19dc) = param_3;
      *(undefined4 *)(param_1 + 0x19d8) = 1;
      goto LAB_140a12a9d;
    }
  }
  *(undefined4 *)(param_1 + 0x19d0) = 0;
  if ((*(int *)(param_1 + 0x19d4) < 0) && (*(int *)(param_1 + 0x19d4) != 0)) {
    FUN_140a13a90(puVar2,0);
  }
LAB_140a12a9d:
  if (local_78 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a12af0 FUN_140a12af0 body=532 status=ok
// SIG undefined FUN_140a12af0(void)

undefined8 FUN_140a12af0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
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
  undefined8 uStack_60;
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
  plVar2 = (longlong *)(param_1 + 0x338);
  uVar3 = *(uint *)(param_1 + 0x360);
  puVar1 = (uint *)(param_1 + 0x348);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x358);
    if (*(uint **)(param_1 + 0x358) == (uint *)0x0) {
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
      if (bVar5) goto LAB_140a12bbd;
      uVar4 = puVar12[lVar10 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
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
LAB_140a12bbd:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x360);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_60 = CONCAT44(uStack_84,local_88);
  uVar11 = uVar4 & 0xffffffe0;
  local_58 = puVar1;
  local_40 = plVar2;
  uStack_38 = uStack_60;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x358);
    if (*(uint **)(param_1 + 0x358) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar8 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_140a12c83;
      uVar9 = puVar12[(longlong)iVar8 + 1];
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
    uStack_74 = (uVar11 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_140a12c83:
      uStack_74 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      return 0;
    }
    plVar6 = *(longlong **)(*plVar2 + (longlong)(int)uStack_4c * 0x18 + 8);
    if ((plVar6 != (longlong *)0x0) && (cVar7 = (**(code **)(*plVar6 + 0x290))(), cVar7 != '\0'))
    break;
    uStack_50 = uStack_50 & ~uStack_60._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
  }
  return 1;
}



// FUNCTION 140a12d40 FUN_140a12d40 body=161 status=ok
// SIG undefined FUN_140a12d40(void)

void FUN_140a12d40(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xc0);
  if (param_3 < 0x31) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 2);
    pvVar1 = *(void **)((longlong)param_1 + 0xc0);
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
        *(void **)((longlong)param_1 + 0xc0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar2;
  return;
}



// FUNCTION 140a12df0 FUN_140a12df0 body=163 status=ok
// SIG undefined FUN_140a12df0(void)

void FUN_140a12df0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x480);
  if (param_3 < 0x31) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x18);
    pvVar1 = *(void **)((longlong)param_1 + 0x480);
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
        *(void **)((longlong)param_1 + 0x480) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x18);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x480) = uVar2;
  return;
}



// FUNCTION 140a12ea0 FUN_140a12ea0 body=155 status=ok
// SIG undefined FUN_140a12ea0(void)

void FUN_140a12ea0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x160);
  if (param_3 < 9) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x2c);
    pvVar1 = *(void **)((longlong)param_1 + 0x160);
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
        *(void **)((longlong)param_1 + 0x160) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x2c);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x160) = uVar2;
  return;
}



// FUNCTION 140a12f40 ResizeAllocation body=141 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<4,TSizedDefaultAllocator<32>_>::ForElementType<bool>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2);
    pvVar1 = *(void **)((longlong)param_1 + 8);
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
        *(void **)((longlong)param_1 + 8) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  return;
}



// FUNCTION 140a12fd0 FUN_140a12fd0 body=141 status=ok
// SIG undefined FUN_140a12fd0(void)

void FUN_140a12fd0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x30);
  if (param_3 < 0x31) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2);
    pvVar1 = *(void **)((longlong)param_1 + 0x30);
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
        *(void **)((longlong)param_1 + 0x30) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
  return;
}



// FUNCTION 140a13060 FUN_140a13060 body=167 status=ok
// SIG undefined FUN_140a13060(void)

void FUN_140a13060(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x21) {
      uVar4 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x390,0);
      uVar4 = (uint)(uVar2 / 0x390);
      if ((int)uVar4 < (int)param_2) {
        uVar4 = 0x7fffffff;
      }
    }
  }
  if (uVar4 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x7200);
    if (uVar4 < 0x21) {
      if (lVar1 == 0) goto LAB_140a130f1;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar4 == 0)) goto LAB_140a130f1;
      lVar5 = (longlong)(int)uVar4 * 0x390;
    }
    uVar3 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x7200) = uVar3;
  }
LAB_140a130f1:
  *(uint *)(param_1 + 0x720c) = uVar4;
  return;
}



// FUNCTION 140a13110 FUN_140a13110 body=141 status=ok
// SIG undefined FUN_140a13110(void)

void FUN_140a13110(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (uVar1 < 0x31) {
    iVar2 = 0x30;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0xcc) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 4,0);
    iVar2 = (int)(uVar3 >> 2);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xcc) = iVar2;
  FUN_140a12d40(param_1,param_2,iVar2,4);
  return;
}



// FUNCTION 140a131a0 FUN_140a131a0 body=151 status=ok
// SIG undefined FUN_140a131a0(void)

void FUN_140a131a0(longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 0xe8,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x1a7b9611a7b9611b) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 7);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0xe8,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 140a13240 ResizeGrow body=257 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
     ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x88);
  if (uVar1 < 9) {
    uVar2 = 8;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x8c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x8c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x80);
  if (uVar2 < 9) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0x80);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 4,0);
        *(void **)((longlong)param_1 + 0x80) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar5;
  return;
}



// FUNCTION 140a13350 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FShaderPipelineCache::CompileJob,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x1d0,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x1a7b9611a7b9611b) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 8);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x1d0,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 140a133f0 FUN_140a133f0 body=157 status=ok
// SIG undefined FUN_140a133f0(void)

void FUN_140a133f0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x488);
  if (uVar1 < 0x31) {
    iVar4 = 0x30;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x48c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x18,0);
    iVar4 = (int)(uVar3 / 0x18);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x48c) = iVar4;
  FUN_140a12df0(param_1,param_2,iVar4,0x18);
  return;
}



// FUNCTION 140a13490 FUN_140a13490 body=153 status=ok
// SIG undefined FUN_140a13490(void)

void FUN_140a13490(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x168);
  if (uVar1 < 9) {
    iVar4 = 8;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x16c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x2c,0);
    iVar4 = (int)(uVar3 / 0x2c);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x16c) = iVar4;
  FUN_140a12ea0(param_1,param_2,iVar4,0x2c);
  return;
}



// FUNCTION 140a13530 FUN_140a13530 body=291 status=ok
// SIG undefined FUN_140a13530(void)

void FUN_140a13530(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x3c8);
  if (uVar1 < 0xb) {
    uVar5 = 10;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x3cc) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x60,0);
    uVar5 = (uint)(uVar2 / 0x60);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x3cc) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x3c0);
  if (uVar5 < 0xb) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x60);
    pvVar3 = *(void **)((longlong)param_1 + 0x3c0);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x60,0);
        *(void **)((longlong)param_1 + 0x3c0) = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x60);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x60;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x3c0) = uVar4;
  return;
}



// FUNCTION 140a13660 FUN_140a13660 body=115 status=ok
// SIG undefined FUN_140a13660(void)

void FUN_140a13660(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar3 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0x14) != 0) || (4 < uVar1)) {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(uVar3,0);
    uVar3 = (ulonglong)uVar2;
    if ((int)uVar2 < (int)uVar1) {
      uVar3 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x14) = (int)uVar3;
  TInlineAllocator<4,TSizedDefaultAllocator<32>_>::ForElementType<bool>::ResizeAllocation
            (param_1,param_2,uVar3,1);
  return;
}



// FUNCTION 140a136e0 FUN_140a136e0 body=120 status=ok
// SIG undefined FUN_140a136e0(void)

void FUN_140a136e0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 < 0x31) {
    iVar2 = 0x30;
  }
  else {
    lVar3 = 4;
    if ((*(int *)(param_1 + 0x3c) != 0) || (4 < uVar1)) {
      lVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    iVar2 = FMemory::QuantizeSize(lVar3,0);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x3c) = iVar2;
  FUN_140a12fd0(param_1,param_2,iVar2,1);
  return;
}



// FUNCTION 140a13760 FUN_140a13760 body=159 status=ok
// SIG undefined FUN_140a13760(void)

void FUN_140a13760(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 200);
  uVar3 = *(uint *)(param_1 + 0xcc);
  if (uVar2 < 0x31) {
    uVar2 = 0x30;
    goto LAB_140a137d2;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 2)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 2,0);
        uVar3 = *(uint *)(param_1 + 0xcc);
        uVar2 = (uint)(uVar1 >> 2);
      }
      goto LAB_140a137d2;
    }
    if (uVar2 == 0) goto LAB_140a137d2;
  }
  uVar2 = uVar3;
LAB_140a137d2:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0xcc) = uVar2;
    FUN_140a12d40(param_1,*(undefined4 *)(param_1 + 200),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 140a13800 FUN_140a13800 body=178 status=ok
// SIG undefined FUN_140a13800(void)

void FUN_140a13800(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x488);
  uVar3 = *(uint *)(param_1 + 0x48c);
  if (uVar2 < 0x31) {
    uVar2 = 0x30;
    goto LAB_140a13885;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0x18)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0x18,0);
        uVar3 = *(uint *)(param_1 + 0x48c);
        uVar2 = (uint)(uVar1 / 0x18);
      }
      goto LAB_140a13885;
    }
    if (uVar2 == 0) goto LAB_140a13885;
  }
  uVar2 = uVar3;
LAB_140a13885:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x48c) = uVar2;
    FUN_140a12df0(param_1,*(undefined4 *)(param_1 + 0x488),uVar2,0x18);
    return;
  }
  return;
}



// FUNCTION 140a138c0 FUN_140a138c0 body=170 status=ok
// SIG undefined FUN_140a138c0(void)

void FUN_140a138c0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x168);
  uVar3 = *(uint *)(param_1 + 0x16c);
  if (uVar2 < 9) {
    uVar2 = 8;
    goto LAB_140a1393d;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0x2c)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0x2c,0);
        uVar3 = *(uint *)(param_1 + 0x16c);
        uVar2 = (uint)(uVar1 / 0x2c);
      }
      goto LAB_140a1393d;
    }
    if (uVar2 == 0) goto LAB_140a1393d;
  }
  uVar2 = uVar3;
LAB_140a1393d:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x16c) = uVar2;
    FUN_140a12ea0(param_1,*(undefined4 *)(param_1 + 0x168),uVar2,0x2c);
    return;
  }
  return;
}



// FUNCTION 140a13970 FUN_140a13970 body=130 status=ok
// SIG undefined FUN_140a13970(void)

void FUN_140a13970(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar1 < 5) {
    uVar1 = 4;
    goto LAB_140a139cb;
  }
  if ((0x3fff < uVar2 - uVar1) || ((int)(uVar1 * 3) < (int)(uVar2 * 2))) {
    if (0x40 < uVar2 - uVar1) {
      if (0 < (int)uVar1) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar1,0);
        uVar2 = *(uint *)(param_1 + 0x14);
      }
      goto LAB_140a139cb;
    }
    if (uVar1 == 0) goto LAB_140a139cb;
  }
  uVar1 = uVar2;
LAB_140a139cb:
  if (uVar1 != uVar2) {
    *(uint *)(param_1 + 0x14) = uVar1;
    TInlineAllocator<4,TSizedDefaultAllocator<32>_>::ForElementType<bool>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x10),uVar1,1);
    return;
  }
  return;
}



// FUNCTION 140a13a00 FUN_140a13a00 body=130 status=ok
// SIG undefined FUN_140a13a00(void)

void FUN_140a13a00(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x3c);
  if (uVar1 < 0x31) {
    uVar1 = 0x30;
    goto LAB_140a13a5b;
  }
  if ((0x3fff < uVar2 - uVar1) || ((int)(uVar1 * 3) < (int)(uVar2 * 2))) {
    if (0x40 < uVar2 - uVar1) {
      if (0 < (int)uVar1) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar1,0);
        uVar2 = *(uint *)(param_1 + 0x3c);
      }
      goto LAB_140a13a5b;
    }
    if (uVar1 == 0) goto LAB_140a13a5b;
  }
  uVar1 = uVar2;
LAB_140a13a5b:
  if (uVar1 != uVar2) {
    *(uint *)(param_1 + 0x3c) = uVar1;
    FUN_140a12fd0(param_1,*(undefined4 *)(param_1 + 0x38),uVar1,1);
    return;
  }
  return;
}



// FUNCTION 140a13a90 FUN_140a13a90 body=110 status=ok
// SIG undefined FUN_140a13a90(void)

void FUN_140a13a90(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x31) {
      iVar1 = 0x30;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = iVar1;
    FUN_140a12d40(param_1,*(undefined4 *)(param_1 + 200),iVar1,4);
  }
  return;
}



// FUNCTION 140a13b00 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<232,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0xe8,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x1a7b9611a7b9611b) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 7);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xe8,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 140a13b90 FUN_140a13b90 body=123 status=ok
// SIG undefined FUN_140a13b90(void)

void FUN_140a13b90(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar2 = 8;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x2c,0);
      iVar2 = (int)(uVar1 / 0x2c);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x16c)) {
    *(int *)(param_1 + 0x16c) = iVar2;
    FUN_140a12ea0(param_1,*(undefined4 *)(param_1 + 0x168),iVar2,0x2c);
  }
  return;
}


