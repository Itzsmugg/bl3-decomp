// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1422afa40 FUN_1422afa40 body=541 status=ok
// SIG undefined FUN_1422afa40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422afa40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  float *pfVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
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
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  
  plVar12 = *(longlong **)(param_1 + 0x10);
  plVar7 = plVar12 + (longlong)*(int *)(param_1 + 0x18) * 6;
  if (plVar12 != plVar7) {
    plVar13 = plVar12 + 2;
    uVar27 = _DAT_146aef240;
    uVar28 = uRam0000000146aef244;
    uVar29 = uRam0000000146aef248;
    uVar30 = uRam0000000146aef24c;
    do {
      iVar11 = (int)plVar13[1];
      iVar6 = *(int *)(param_1 + 0x28);
      if (iVar11 < iVar6) {
        *(int *)(plVar13 + 1) = iVar6;
        if (*(int *)((longlong)plVar13 + 0xc) < iVar6) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar13);
          uVar27 = _DAT_146aef240;
          uVar28 = uRam0000000146aef244;
          uVar29 = uRam0000000146aef248;
          uVar30 = uRam0000000146aef24c;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 + *plVar13),0,(longlong)(iVar6 - iVar11));
      }
      else if ((iVar6 < iVar11) && (iVar6 != iVar11)) {
        *(int *)(plVar13 + 1) = iVar6;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar13);
        uVar27 = _DAT_146aef240;
        uVar28 = uRam0000000146aef244;
        uVar29 = uRam0000000146aef248;
        uVar30 = uRam0000000146aef24c;
      }
      if (param_2 != 0) {
        iVar11 = 0;
        lVar14 = 0;
        if (0 < *(int *)(param_1 + 0x28)) {
          lVar10 = 0;
          do {
            plVar8 = (longlong *)FReferenceSkeleton::FindBoneIndex(param_2 + 0x58);
            iVar6 = (int)plVar8;
            fVar15 = _DAT_1468b5b80;
            fVar16 = fRam00000001468b5b84;
            fVar17 = fRam00000001468b5b88;
            fVar18 = fRam00000001468b5b8c;
            fVar19 = _DAT_1468b5b70;
            fVar20 = fRam00000001468b5b74;
            fVar21 = fRam00000001468b5b78;
            fVar22 = fRam00000001468b5b7c;
            fVar23 = _DAT_1468b5b90;
            fVar24 = fRam00000001468b5b94;
            fVar25 = fRam00000001468b5b98;
            fVar26 = fRam00000001468b5b9c;
            if (((iVar6 != -1) &&
                (plVar8 = (longlong *)USkeleton::GetRefLocalPoses(param_2), fVar15 = _DAT_1468b5b80,
                fVar16 = fRam00000001468b5b84, fVar17 = fRam00000001468b5b88,
                fVar18 = fRam00000001468b5b8c, fVar19 = _DAT_1468b5b70,
                fVar20 = fRam00000001468b5b74, fVar21 = fRam00000001468b5b78,
                fVar22 = fRam00000001468b5b7c, fVar23 = _DAT_1468b5b90,
                fVar24 = fRam00000001468b5b94, fVar25 = fRam00000001468b5b98,
                fVar26 = fRam00000001468b5b9c, -1 < iVar6)) && (iVar6 < (int)plVar8[1])) {
              pfVar9 = (float *)((longlong)iVar6 * 0x30 + *plVar8);
              fVar15 = pfVar9[4];
              fVar16 = pfVar9[5];
              fVar17 = pfVar9[6];
              fVar18 = pfVar9[7];
              fVar19 = *pfVar9;
              fVar20 = pfVar9[1];
              fVar21 = pfVar9[2];
              fVar22 = pfVar9[3];
              fVar23 = pfVar9[8];
              fVar24 = pfVar9[9];
              fVar25 = pfVar9[10];
              fVar26 = pfVar9[0xb];
            }
            lVar1 = *plVar12;
            pfVar9 = (float *)(lVar10 + 0x10 + lVar1);
            auVar2._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar9[1] - fVar16) & uVar28));
            auVar2._0_4_ = -(uint)(0.0001 < (float)((uint)(*pfVar9 - fVar15) & uVar27));
            auVar2._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar9[2] - fVar17) & uVar29));
            auVar2._12_4_ = -(uint)(0.0001 < (float)((uint)(pfVar9[3] - fVar18) & uVar30));
            iVar6 = movmskps((int)plVar8,auVar2);
            if (iVar6 == 0) {
              pfVar9 = (float *)(lVar10 + lVar1);
              auVar3._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar9[1] - fVar20) & uVar28));
              auVar3._0_4_ = -(uint)(0.0001 < (float)((uint)(*pfVar9 - fVar19) & uVar27));
              auVar3._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar9[2] - fVar21) & uVar29));
              auVar3._12_4_ = -(uint)(0.0001 < (float)((uint)(pfVar9[3] - fVar22) & uVar30));
              iVar6 = movmskps(0,auVar3);
              if ((iVar6 != 0) &&
                 (auVar4._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar9[1] + fVar20) & uVar28)),
                 auVar4._0_4_ = -(uint)(0.0001 < (float)((uint)(*pfVar9 + fVar19) & uVar27)),
                 auVar4._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar9[2] + fVar21) & uVar29)),
                 auVar4._12_4_ = -(uint)(0.0001 < (float)((uint)(pfVar9[3] + fVar22) & uVar30)),
                 iVar6 = movmskps(iVar6,auVar4), iVar6 != 0)) goto LAB_1422afbf9;
              pfVar9 = (float *)(lVar10 + 0x20 + lVar1);
              auVar5._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar9[1] - fVar24) & uVar28));
              auVar5._0_4_ = -(uint)(0.0001 < (float)((uint)(*pfVar9 - fVar23) & uVar27));
              auVar5._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar9[2] - fVar25) & uVar29));
              auVar5._12_4_ = -(uint)(0.0001 < (float)((uint)(pfVar9[3] - fVar26) & uVar30));
              iVar6 = movmskps(0,auVar5);
              if (iVar6 != 0) goto LAB_1422afbf9;
            }
            else {
LAB_1422afbf9:
              *(undefined1 *)(lVar14 + *plVar13) = 1;
            }
            iVar11 = iVar11 + 1;
            lVar14 = lVar14 + 1;
            lVar10 = lVar10 + 0x30;
          } while (iVar11 < *(int *)(param_1 + 0x28));
        }
      }
      plVar12 = plVar12 + 6;
      plVar13 = plVar13 + 6;
    } while (plVar12 != plVar7);
  }
  return;
}



// FUNCTION 1422afc60 FUN_1422afc60 body=109 status=ok
// SIG undefined FUN_1422afc60(void)

void FUN_1422afc60(undefined8 param_1)

{
  longlong *_Dst;
  
  FUN_1422778e0();
  if ((DAT_146aef1f0 != (void *)0x0) &&
     (_Dst = (longlong *)FMemory::Malloc(DAT_146aef1f8,0), _Dst != (longlong *)0x0)) {
    _guard_xfg_dispatch_icall_nop(_Dst,DAT_146aef1f0,(ulonglong)DAT_146aef1f8);
    (**(code **)(*_Dst + 0xc0))(_Dst);
    FUN_14227bff0(param_1,_Dst,0);
  }
  return;
}



// FUNCTION 1422afcd0 FUN_1422afcd0 body=221 status=ok
// SIG undefined FUN_1422afcd0(void)

void FUN_1422afcd0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142277b70();
  lVar2 = UAnimInstance::GetActiveMontageInstance(param_1);
  if (lVar2 != 0) {
    lVar4 = param_1[4];
    if (lVar4 != 0) {
      lVar3 = FUN_142a07000();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_1423b2d70(param_1[4],1);
      }
    }
    lVar4 = param_1[0x72];
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*param_1 + 0x308))(param_1);
      param_1[0x72] = lVar4;
    }
    if (*(char *)(lVar2 + 0x184) != '\0') {
      *(undefined4 *)(lVar4 + 0x82c) = *(undefined4 *)(lVar2 + 0x180);
      return;
    }
    *(undefined4 *)(lVar4 + 0x82c) = *(undefined4 *)(lVar2 + 0x128);
  }
  return;
}



// FUNCTION 1422afdd0 FUN_1422afdd0 body=143 status=ok
// SIG undefined FUN_1422afdd0(void)

void FUN_1422afdd0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x450) != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x448);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x450));
      if (lVar1 != 0) {
        plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x448);
        uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 0x450));
        (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,0);
      }
    }
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1422afe60 NormalizeDataWeight body=711 status=ok
// SIG undefined NormalizeDataWeight(void)

void FBlendSampleData::NormalizeDataWeight(longlong *param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float *local_48;
  int local_40;
  undefined4 local_3c;
  
  fVar10 = 0.0;
  local_48 = (float *)0x0;
  local_3c = 0;
  local_40 = *(int *)(*param_1 + 0x38);
  lVar4 = (longlong)local_40;
  if (0 < local_40) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_48);
  }
  pfVar1 = local_48;
  ::_guard_xfg_dispatch_icall_nop(local_48,0,lVar4 * 4);
  iVar2 = (int)param_1[1];
  iVar8 = 0;
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      fVar9 = *(float *)(*param_1 + 0x10 + lVar5);
      if (0.0 <= fVar9) {
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
      }
      else {
        fVar9 = 0.0;
      }
      fVar10 = fVar10 + fVar9;
      if (0 < *(int *)(*param_1 + 0x38 + lVar5)) {
        lVar6 = 0;
        if (3 < lVar4) {
          pfVar3 = pfVar1 + 2;
          lVar7 = (lVar4 - 4U >> 2) + 1;
          lVar6 = lVar7 * 4;
          do {
            pfVar3[-2] = *(float *)((longlong)pfVar3 +
                                   *(longlong *)(*param_1 + 0x30 + lVar5) + (-8 - (longlong)pfVar1))
                         + pfVar3[-2];
            pfVar3[-1] = *(float *)((longlong)pfVar3 +
                                   *(longlong *)(*param_1 + 0x30 + lVar5) + 4 +
                                   (-8 - (longlong)pfVar1)) + pfVar3[-1];
            *pfVar3 = *(float *)((longlong)pfVar3 +
                                (*(longlong *)(*param_1 + 0x30 + lVar5) - (longlong)pfVar1)) +
                      *pfVar3;
            pfVar3[1] = *(float *)(*(longlong *)(*param_1 + 0x30 + lVar5) + (4 - (longlong)pfVar1) +
                                  (longlong)pfVar3) + pfVar3[1];
            pfVar3 = pfVar3 + 4;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        if (lVar6 < lVar4) {
          pfVar3 = pfVar1 + lVar6;
          lVar6 = lVar4 - lVar6;
          do {
            *pfVar3 = *(float *)((*(longlong *)(*param_1 + 0x30 + lVar5) - (longlong)pfVar1) +
                                (longlong)pfVar3) + *pfVar3;
            pfVar3 = pfVar3 + 1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
      }
      iVar2 = (int)param_1[1];
      iVar8 = iVar8 + 1;
      lVar5 = lVar5 + 0x40;
    } while (iVar8 < iVar2);
    if (((1e-05 < fVar10) && (1e-05 < ABS(fVar10 - 1.0))) && (iVar8 = 0, 0 < iVar2)) {
      lVar5 = 0;
      do {
        iVar8 = iVar8 + 1;
        *(float *)(lVar5 + 0x10 + *param_1) = (1.0 / fVar10) * *(float *)(lVar5 + 0x10 + *param_1);
        iVar2 = (int)param_1[1];
        lVar5 = lVar5 + 0x40;
      } while (iVar8 < iVar2);
    }
  }
  pfVar3 = pfVar1;
  if (0 < lVar4) {
    do {
      if (((1e-05 < *pfVar3) && (1e-05 < ABS(*pfVar3 - 1.0))) && (iVar8 = 0, 0 < iVar2)) {
        lVar5 = 0;
        do {
          iVar8 = iVar8 + 1;
          lVar6 = *(longlong *)(lVar5 + 0x30 + *param_1) - (longlong)pfVar1;
          *(float *)(lVar6 + (longlong)pfVar3) = *(float *)(lVar6 + (longlong)pfVar3) / *pfVar3;
          iVar2 = (int)param_1[1];
          lVar5 = lVar5 + 0x40;
        } while (iVar8 < iVar2);
      }
      lVar4 = lVar4 + -1;
      pfVar3 = pfVar3 + 1;
    } while (lVar4 != 0);
  }
  if (pfVar1 == (float *)0x0) {
    return;
  }
  FMemory::Free(pfVar1);
  return;
}



// FUNCTION 1422b0180 FUN_1422b0180 body=207 status=ok
// SIG undefined FUN_1422b0180(void)

void FUN_1422b0180(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
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
  if (*param_2 == param_1[0x88]) {
    if (*(char *)((longlong)param_2 + 0x184) == '\0') {
      uVar4 = (undefined4)param_2[0x25];
    }
    else {
      uVar4 = (undefined4)param_2[0x30];
    }
    *(undefined4 *)(lVar3 + 0x82c) = uVar4;
  }
  thunk_FUN_14225b550(param_1,param_2);
  return;
}



// FUNCTION 1422b02d0 FUN_1422b02d0 body=437 status=ok
// SIG undefined FUN_1422b02d0(void)

void FUN_1422b02d0(longlong *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1422b3fc0(param_1,1);
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
  *(undefined1 *)(lVar3 + 0x844) = param_2;
  lVar2 = param_1[0x88];
  if (lVar2 != 0) {
    lVar4 = UMaterialInstanceConstant::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1422b3e30(param_1,lVar2,*(undefined1 *)(lVar3 + 0x844),0);
    }
  }
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
  *(undefined4 *)(lVar3 + 0x840) = param_3;
  lVar3 = UAnimInstance::GetActiveMontageInstance(param_1);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 300) = param_3;
  }
  FUN_1422b40f0(param_1,param_4,1);
  return;
}



// FUNCTION 1422b0490 PostDuplicate body=38 status=ok
// SIG undefined PostDuplicate(void)

void USkeleton::PostDuplicate(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  if (param_2 == '\0') {
    puVar2 = (undefined8 *)FGuid::NewGuid(local_18);
    uVar1 = puVar2[1];
    *(undefined8 *)(param_1 + 0x160) = *puVar2;
    *(undefined8 *)(param_1 + 0x168) = uVar1;
  }
  return;
}



// FUNCTION 1422b04c0 PostInitProperties body=57 status=ok
// SIG undefined PostInitProperties(void)

void USkeleton::PostInitProperties(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_18 [16];
  
  FUN_1417931d0();
  cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar3 == '\0') {
    puVar1 = (undefined8 *)FGuid::NewGuid(local_18);
    uVar2 = puVar1[1];
    *(undefined8 *)(param_1 + 0x160) = *puVar1;
    *(undefined8 *)(param_1 + 0x168) = uVar2;
  }
  return;
}



// FUNCTION 1422b0500 FUN_1422b0500 body=79 status=ok
// SIG undefined FUN_1422b0500(void)

void FUN_1422b0500(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_142238430();
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(longlong *)(param_1 + 0x468) != 0)) {
    *(undefined8 *)(param_1 + 0x470) = *(undefined8 *)(*(longlong *)(param_1 + 0x468) + 0x718);
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    uVar1 = FUN_1423af5a0();
    *(undefined8 *)(param_1 + 0x478) = uVar1;
  }
  return;
}



// FUNCTION 1422b0550 FUN_1422b0550 body=471 status=ok
// SIG undefined FUN_1422b0550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422b0550(longlong *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  UObject::PostLoad();
  if (param_1[7] != 0) {
    lVar4 = FUN_1417a53c0();
    if (lVar4 != 0) {
      FUN_141740c00(lVar4 + 0x200,param_1[7]);
    }
    FUN_1417510e0(param_1[7]);
  }
  (**(code **)(*param_1 + 0x2d0))(param_1);
  lVar4 = param_1[7];
  if (lVar4 != 0) {
    lVar5 = param_1[0x13];
    lVar6 = (longlong)(int)param_1[0x14] * 0x90 + lVar5;
    for (; lVar5 != lVar6; lVar5 = lVar5 + 0x90) {
      USkeleton::VerifySmartNameInternal(lVar4,&DAT_146aef308,lVar5 + 8);
      FUN_1422ad7f0(lVar4);
    }
    lVar5 = param_1[0x15];
    lVar6 = (longlong)(int)param_1[0x16] * 0x470 + lVar5;
    for (; lVar5 != lVar6; lVar5 = lVar5 + 0x470) {
      USkeleton::VerifySmartNameInternal(lVar4,&DAT_146aef310,lVar5 + 8);
      if (DAT_146aef310 == DAT_146aef308) {
        FUN_1422ad7f0(lVar4);
      }
    }
    local_18 = _DAT_1464b0088;
    uStack_14 = uRam00000001464b008c;
    uStack_10 = uRam00000001464b0090;
    uStack_c = uRam00000001464b0094;
    iVar3 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_18);
    if (0xe < iVar3) {
      local_18 = _DAT_1464b0088;
      uStack_14 = uRam00000001464b008c;
      uStack_10 = uRam00000001464b0090;
      uStack_c = uRam00000001464b0094;
      iVar3 = UObjectBaseUtility::GetLinkerCustomVersion(lVar4,&local_18);
      if (0xe < iVar3) {
        return;
      }
    }
    lVar5 = param_1[0x13];
    lVar6 = (longlong)(int)param_1[0x14] * 0x90 + lVar5;
    if (lVar5 != lVar6) {
      puVar7 = (undefined8 *)(lVar5 + 8);
      do {
        cVar1 = FAnimCurveBase::GetCurveTypeFlag(lVar5,1);
        cVar2 = FAnimCurveBase::GetCurveTypeFlag(lVar5,8);
        if ((cVar1 != '\0') || (cVar2 != '\0')) {
          USkeleton::AccumulateCurveMetaData(lVar4,*puVar7,cVar2,cVar1);
        }
        lVar5 = lVar5 + 0x90;
        puVar7 = puVar7 + 0x12;
      } while (lVar5 != lVar6);
    }
  }
  return;
}



// FUNCTION 1422b0730 PostLoad body=69 status=ok
// SIG undefined PostLoad(void)

void UAnimationAsset::PostLoad(longlong param_1)

{
  longlong lVar1;
  
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar1 = FUN_1417a53c0();
    if (lVar1 != 0) {
      FUN_141740c00(lVar1 + 0x200,*(undefined8 *)(param_1 + 0x38));
    }
    FUN_1417510e0(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 1422b0780 PostLoad body=88 status=ok
// SIG undefined PostLoad(void)

void UBlendProfile::PostLoad(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x20 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
      FBoneReference::Initialize(lVar1,*(undefined8 *)(param_1 + 0x30));
    }
  }
  return;
}



// FUNCTION 1422b07e0 PostLoad body=190 status=ok
// SIG undefined PostLoad(void)

void UBlendSpaceBase::PostLoad(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  UObject::PostLoad();
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar2 = FUN_1417a53c0(*(longlong *)(param_1 + 0x38));
    if (lVar2 != 0) {
      FUN_141740c00(lVar2 + 0x200,*(undefined8 *)(param_1 + 0x38));
    }
    FUN_1417510e0(*(undefined8 *)(param_1 + 0x38));
    uVar4 = *(undefined8 *)(param_1 + 0x38);
  }
  lVar2 = *(longlong *)(param_1 + 0xb0);
  iVar1 = *(int *)(param_1 + 0xb8);
  lVar3 = (longlong)iVar1 * 0x20 + lVar2;
  if (lVar2 != lVar3) {
    do {
      FBoneReference::Initialize(lVar2,uVar4);
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != lVar3);
    iVar1 = *(int *)(param_1 + 0xb8);
  }
  local_res8[0] = 0;
  FUN_1422a1560(*(undefined8 *)(param_1 + 0xb0),(longlong)iVar1,0,local_res8);
  return;
}



// FUNCTION 1422b08a0 FUN_1422b08a0 body=53 status=ok
// SIG undefined FUN_1422b08a0(void)

void FUN_1422b08a0(longlong param_1)

{
  undefined8 local_res8 [4];
  
  UObject::PostLoad();
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_140800100(param_1 + 0x38,local_res8,(longlong *)(param_1 + 0x30),0);
  }
  return;
}



// FUNCTION 1422b08e0 FUN_1422b08e0 body=730 status=ok
// SIG undefined FUN_1422b08e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422b08e0(longlong param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  longlong *plVar12;
  int *piVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  
  UObject::PostLoad();
  lVar5 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar5 = FUN_1417a53c0(*(longlong *)(param_1 + 0x38));
    if (lVar5 != 0) {
      FUN_141740c00(lVar5 + 0x200,*(undefined8 *)(param_1 + 0x38));
    }
    FUN_1417510e0(*(undefined8 *)(param_1 + 0x38));
    lVar5 = *(longlong *)(param_1 + 0x38);
  }
  if (lVar5 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x80);
    lVar9 = (longlong)*(int *)(param_1 + 0x88) * 0x10 + lVar8;
    for (; lVar8 != lVar9; lVar8 = lVar8 + 0x10) {
      USkeleton::VerifySmartNameInternal(lVar5,&DAT_146aef308,lVar8);
    }
    FUN_1422ad7f0(lVar5);
    lVar8 = *(longlong *)(param_1 + 0x100);
    lVar9 = (longlong)*(int *)(param_1 + 0x108) * 0x20 + lVar8;
    for (; lVar8 != lVar9; lVar8 = lVar8 + 0x20) {
      USkeleton::VerifySmartNameInternal(lVar5,&DAT_146aef308,lVar8 + 8);
      FUN_1422ad7f0(lVar5);
    }
    local_38 = (longlong *)CONCAT44(uRam00000001464b008c,_DAT_1464b0088);
    uStack_30 = (undefined8 *)CONCAT44(uRam00000001464b0094,uRam00000001464b0090);
    iVar3 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_38);
    if (0xe < iVar3) {
      local_38 = (longlong *)CONCAT44(uRam00000001464b008c,_DAT_1464b0088);
      uStack_30 = (undefined8 *)CONCAT44(uRam00000001464b0094,uRam00000001464b0090);
      iVar3 = UObjectBaseUtility::GetLinkerCustomVersion(lVar5,&local_38);
      if (0xe < iVar3) goto LAB_1422b0a57;
    }
    lVar8 = *(longlong *)(param_1 + 0x100);
    lVar9 = (longlong)*(int *)(param_1 + 0x108) * 0x20 + lVar8;
    if (lVar8 != lVar9) {
      puVar14 = (undefined8 *)(lVar8 + 8);
      do {
        cVar1 = FAnimCurveBase::GetCurveTypeFlag(lVar8,1);
        cVar2 = FAnimCurveBase::GetCurveTypeFlag(lVar8,8);
        if ((cVar1 != '\0') || (cVar2 != '\0')) {
          USkeleton::AccumulateCurveMetaData(lVar5,*puVar14,cVar2,cVar1);
        }
        lVar8 = lVar8 + 0x20;
        puVar14 = puVar14 + 4;
      } while (lVar8 != lVar9);
    }
  }
LAB_1422b0a57:
  lVar5 = *(longlong *)(param_1 + 0x38);
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0xb0);
  if ((lVar5 != 0) && (piVar13 = (int *)0x0, 0 < *(int *)(param_1 + 0xa8))) {
    local_res8 = 0;
    piVar11 = piVar13;
    piVar15 = piVar13;
    do {
      iVar10 = (int)piVar11;
      iVar3 = -1;
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)piVar15);
      lVar8 = *plVar12;
      if (lVar8 != 0) {
        if (*(int *)(lVar5 + 0xf0) != *(int *)(lVar5 + 0x11c)) {
          lVar9 = *(longlong *)(lVar5 + 0x128);
          if (*(longlong *)(lVar5 + 0x128) == 0) {
            lVar9 = lVar5 + 0x120;
          }
          iVar4 = *(int *)(lVar9 + ((longlong)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8) &
                                   (longlong)*(int *)(lVar5 + 0x130) - 1U) * 4);
          if (iVar4 != -1) {
            do {
              piVar7 = (int *)(*(longlong *)(lVar5 + 0xe8) + (longlong)iVar4 * 0x18);
              if (*(longlong *)(*(longlong *)(lVar5 + 0xe8) + (longlong)iVar4 * 0x18) == lVar8) {
                if (iVar4 != -1) goto LAB_1422b0b33;
                break;
              }
              iVar4 = piVar7[4];
            } while (iVar4 != -1);
          }
        }
        piVar7 = piVar13;
LAB_1422b0b33:
        piVar6 = piVar7 + 2;
        if (piVar7 == (int *)0x0) {
          piVar6 = piVar13;
        }
        if (piVar6 != (int *)0x0) {
          iVar3 = *piVar6;
        }
      }
      local_res8 = CONCAT44(local_res8._4_4_,iVar3);
      if (iVar3 == -1) {
        FUN_1422a7220(param_1 + 0x80,piVar11);
        iVar10 = iVar10 + -1;
        piVar15 = piVar15 + -2;
      }
      else {
        uStack_30 = &local_res8;
        local_38 = plVar12;
        FUN_1415ec610(param_1 + 0xb0,local_res10,&local_38,0);
      }
      piVar11 = (int *)(ulonglong)(iVar10 + 1U);
      piVar15 = piVar15 + 2;
    } while ((int)(iVar10 + 1U) < *(int *)(param_1 + 0xa8));
  }
  return;
}



// FUNCTION 1422b0bc0 PostLoad body=302 status=ok
// SIG undefined PostLoad(void)

void USkeleton::PostLoad(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28 [2];
  
  UObject::PostLoad();
  lVar3 = FUN_1417a53c0(param_1);
  if ((lVar3 != 0) && (lVar3 = FUN_1417a53c0(param_1), *(int *)(lVar3 + 0x240) < 0x136)) {
    iVar1 = *(int *)(param_1 + 0x50);
    lVar3 = (longlong)iVar1;
    FReferenceSkeleton::Empty(param_1 + 0x58,0);
    iVar5 = 0;
    if (0 < iVar1) {
      lVar6 = 0;
      do {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + lVar6);
        uVar2 = *(undefined4 *)(puVar4 + 1);
        FName::ToString(puVar4,local_28);
        local_38 = *puVar4;
        local_30 = uVar2;
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        FReferenceSkeleton::Add
                  (param_1 + 0x58,&local_38,(longlong)iVar5 * 0x30 + *(longlong *)(param_1 + 0x48));
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x10;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    FUN_1422b1600(param_1 + 0x58,param_1,1);
  }
  FUN_1422ad7f0(param_1);
  lVar3 = FSmartNameContainer::GetContainerInternal(param_1 + 0x1f0,&DAT_146aef308);
  if (lVar3 == 0) {
    return;
  }
  FSmartNameMapping::InitializeCurveMetaData(lVar3,param_1);
  return;
}



// FUNCTION 1422b0cf0 FUN_1422b0cf0 body=166 status=ok
// SIG undefined FUN_1422b0cf0(void)

void FUN_1422b0cf0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  FUN_14227aa40();
  uVar3 = 0;
  plVar4 = *(longlong **)(param_2 + 0x78);
  uVar6 = (longlong)*(int *)(param_2 + 0x80) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_2 + 0x80) < plVar4) {
    uVar6 = uVar3;
  }
  uVar5 = uVar3;
  if (uVar6 != 0) {
    do {
      plVar2 = (longlong *)*plVar4;
      if ((*plVar2 != 0) && (1e-05 < *(float *)(plVar2 + 0x2a))) {
        puVar1 = (undefined1 *)(*(longlong *)(param_1 + 0x538) + 0x14 + uVar5);
        uVar5 = uVar5 + 0x18;
        *(undefined1 *)(plVar2 + 5) = *puVar1;
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar6);
  }
  if ((*(char *)(param_1 + 0x845) == '\0') && (*(longlong *)(param_2 + 0x20) != 0)) {
    *(undefined1 *)(*(longlong *)(param_2 + 0x20) + 0x998) = 1;
  }
  return;
}



// FUNCTION 1422b0db0 FUN_1422b0db0 body=805 status=ok
// SIG undefined FUN_1422b0db0(void)

void FUN_1422b0db0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint local_res8 [2];
  longlong *local_res10;
  longlong local_res18;
  
  local_res10 = param_2;
  FUN_1422a0de0(*param_1,(longlong)(int)param_1[1],(undefined1)local_res8[0],local_res8);
  lVar3 = (**(code **)(**(longlong **)*param_1 + 0x288))();
  if (lVar3 == 0) {
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    if ((*(int *)((longlong)param_1 + 0x24) < 0) && (*(int *)((longlong)param_1 + 0x24) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 3,0);
    }
    lVar3 = *param_1;
    lVar10 = (longlong)(int)param_1[1] * 0x50 + lVar3;
    for (; lVar3 != lVar10; lVar3 = lVar3 + 0x50) {
      puVar1 = *(undefined4 **)(lVar3 + 0x40);
      *puVar1 = 0xfffffffe;
      puVar1[2] = 0xfffffffe;
    }
  }
  else {
    TArray<FName,FDefaultAllocator>::operator=(param_1 + 3,lVar3);
    uVar7 = 0;
    local_res8[0] = 0;
    *(undefined1 *)(*param_1 + 0x48) = 1;
    *(undefined1 *)(param_1 + 5) = 1;
    if (0 < (int)param_1[1]) {
      local_res18 = 0;
      uVar12 = uVar7;
      do {
        plVar9 = (longlong *)(*param_1 + local_res18);
        uVar11 = (uint)uVar7;
        if (param_2 != (longlong *)0x0) {
          plVar4 = (longlong *)*param_2;
          plVar5 = plVar4 + (longlong)(int)param_2[1] * 10;
          uVar11 = local_res8[0];
          if (plVar4 != plVar5) {
            puVar1 = (undefined4 *)plVar9[8];
            do {
              if ((undefined4 *)plVar4[8] == puVar1) {
                if (*plVar4 != *plVar9) {
                  *puVar1 = 0xfffffffe;
                  puVar1[2] = 0xfffffffe;
                }
                goto LAB_1422b0e9d;
              }
              plVar4 = plVar4 + 10;
            } while (plVar4 != plVar5);
          }
          puVar1 = (undefined4 *)plVar9[8];
          *puVar1 = 0xfffffffe;
          puVar1[2] = 0xfffffffe;
        }
LAB_1422b0e9d:
        if (((uVar12 != 0) && (0 < (int)param_1[4])) &&
           (plVar4 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x288))(),
           uVar11 = local_res8[0], plVar4 != (longlong *)0x0)) {
          *(undefined1 *)(plVar9 + 9) = 1;
          iVar8 = (int)param_1[4] + -1;
          if (-1 < iVar8) {
            lVar3 = (longlong)iVar8 * 8;
            lVar10 = lVar3;
            do {
              plVar5 = (longlong *)*plVar4;
              plVar9 = plVar5 + (int)plVar4[1];
              if (plVar5 != plVar9) {
                do {
                  if (*plVar5 == *(longlong *)(lVar10 + param_1[3])) goto LAB_1422b0f52;
                  plVar5 = plVar5 + 1;
                } while (plVar5 != plVar9);
              }
              iVar6 = (int)param_1[4];
              iVar2 = (iVar6 - iVar8) + -1;
              if (0 < iVar2) {
                iVar2 = 1;
              }
              if (iVar2 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(param_1[3] + lVar3),
                           (void *)(param_1[3] + (longlong)(iVar6 - iVar2) * 8),(longlong)iVar2 << 3
                          );
                iVar6 = (int)param_1[4];
              }
              *(int *)(param_1 + 4) = iVar6 + -1;
LAB_1422b0f52:
              lVar3 = lVar3 + -8;
              lVar10 = lVar10 + -8;
              iVar8 = iVar8 + -1;
              param_2 = local_res10;
              uVar11 = local_res8[0];
            } while (-1 < iVar8);
          }
        }
        local_res8[0] = uVar11 + 1;
        uVar7 = (ulonglong)local_res8[0];
        local_res18 = local_res18 + 0x50;
        uVar12 = uVar12 + 1;
      } while ((int)local_res8[0] < (int)param_1[1]);
    }
    uVar7 = 0;
    *(bool *)(param_1 + 5) = 0 < (int)param_1[4];
    AlgoImpl::IntroSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,TLess<FName>_>_>
              (param_1[3],(longlong)(int)param_1[4],(undefined1)local_res8[0],local_res8);
    if ((param_2 != (longlong *)0x0) && (iVar8 = (int)param_1[4], iVar8 == (int)param_2[4])) {
      plVar9 = (longlong *)param_2[3];
      if (iVar8 == 0) {
        return;
      }
      lVar3 = param_1[3] - (longlong)plVar9;
      while (*(longlong *)((longlong)plVar9 + lVar3) == *plVar9) {
        plVar9 = plVar9 + 1;
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          return;
        }
      }
    }
    uVar12 = uVar7;
    if (0 < (int)param_1[1]) {
      do {
        uVar7 = uVar7 + 0x50;
        uVar11 = (int)uVar12 + 1;
        puVar1 = *(undefined4 **)(*param_1 + -0x10 + uVar7);
        *puVar1 = 0xfffffffe;
        puVar1[2] = 0xfffffffe;
        uVar12 = (ulonglong)uVar11;
      } while ((int)uVar11 < (int)param_1[1]);
      return;
    }
  }
  return;
}



// FUNCTION 1422b10e0 PreviewBeginAnimControl body=83 status=ok
// SIG undefined PreviewBeginAnimControl(void)

void IMatineeAnimInterface::PreviewBeginAnimControl(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Matinee/MatineeAnimInterface.h"
             ,0x27,L"Pure virtual not implemented (%s)",
             L"UMatineeAnimInterface::PreviewBeginAnimControl");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Matinee/MatineeAnimInterface.h"
             ,0x27,L"Pure virtual not implemented (%s)",
             L"UMatineeAnimInterface::PreviewBeginAnimControl");
  return;
}



// FUNCTION 1422b1140 FUN_1422b1140 body=145 status=ok
// SIG undefined FUN_1422b1140(void)

void FUN_1422b1140(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x718);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x48) != 0)) {
    iVar1 = FUN_14062c730();
    if ((iVar1 == 0) && (lVar2 = FUN_1423ac7e0(*(undefined8 *)(param_1 + 0x10)), lVar2 != 0)) {
      FUN_142279320(lVar2,0,0);
      FUN_142284510(lVar2,0,0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x960))(*(longlong **)(param_1 + 0x10),0);
    FUN_1423b8300(*(undefined8 *)(param_1 + 0x10));
    FUN_140942fb0(*(undefined8 *)(param_1 + 0x10),0,0);
    return;
  }
  return;
}



// FUNCTION 1422b11e0 PreviewFinishAnimControl body=83 status=ok
// SIG undefined PreviewFinishAnimControl(void)

void IMatineeAnimInterface::PreviewFinishAnimControl(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Matinee/MatineeAnimInterface.h"
             ,0x3f,L"Pure virtual not implemented (%s)",
             L"UMatineeAnimInterface::PreviewFinishAnimControl");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Matinee/MatineeAnimInterface.h"
             ,0x3f,L"Pure virtual not implemented (%s)",
             L"UMatineeAnimInterface::PreviewFinishAnimControl");
  return;
}



// FUNCTION 1422b1240 FUN_1422b1240 body=346 status=ok
// SIG undefined FUN_1422b1240(void)

void FUN_1422b1240(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_28 [2];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x718);
  if (((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 != 0)) &&
     ((param_4 == 0 ||
      ((*(longlong *)(param_4 + 0x38) != 0 && (lVar2 == *(longlong *)(param_4 + 0x38))))))) {
    local_res10 = param_2;
    if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
      lVar2 = *(longlong *)(param_1 + 0x78);
      if (*(longlong *)(param_1 + 0x78) == 0) {
        lVar2 = param_1 + 0x70;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                               (longlong)*(int *)(param_1 + 0x80) - 1U) * 4);
      if (iVar1 != -1) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x18;
          if (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x18) == param_2) {
            if ((iVar1 != -1) && (lVar2 != 0)) goto LAB_1422b133b;
            break;
          }
          iVar1 = *(int *)(lVar2 + 0x10);
        } while (iVar1 != -1);
      }
    }
    local_28[0] = &local_res10;
    FUN_14229e880(param_1 + 0x38,local_res8,local_28,0);
    lVar2 = *(longlong *)(param_1 + 0x38) + (longlong)local_res8[0] * 0x18;
LAB_1422b133b:
    uVar3 = FUN_14227b710(local_res10,*(undefined8 *)(param_1 + 0x10),param_4,param_5,param_6,
                          param_7,param_8);
    FWeakObjectPtr::operator=(lVar2 + 8,uVar3);
  }
  return;
}



// FUNCTION 1422b13a0 PreviewSetAnimPosition body=82 status=ok
// SIG undefined PreviewSetAnimPosition(void)

void IMatineeAnimInterface::PreviewSetAnimPosition(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Matinee/MatineeAnimInterface.h"
             ,0x33,L"Pure virtual not implemented (%s)",
             L"UMatineeAnimInterface::PreviewSetAnimPosition");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Matinee/MatineeAnimInterface.h"
             ,0x33,L"Pure virtual not implemented (%s)");
  return;
}



// FUNCTION 1422b1400 PreviewSetAnimWeights body=83 status=ok
// SIG undefined PreviewSetAnimWeights(void)

void IMatineeAnimInterface::PreviewSetAnimWeights(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Matinee/MatineeAnimInterface.h"
             ,0x39,L"Pure virtual not implemented (%s)",
             L"UMatineeAnimInterface::PreviewSetAnimWeights");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Matinee/MatineeAnimInterface.h"
             ,0x39,L"Pure virtual not implemented (%s)",
             L"UMatineeAnimInterface::PreviewSetAnimWeights");
  return;
}



// FUNCTION 1422b1460 FUN_1422b1460 body=402 status=ok
// SIG undefined FUN_1422b1460(void)

void FUN_1422b1460(void)

{
  char cVar1;
  byte local_res8 [32];
  
  if (DAT_1468b6148 != 0) {
    cVar1 = FConfigCacheIni::GetBool
                      (DAT_1468b6148,L"AnimationExperiments",L"UseParallelTickPoseForUpdateOnly",
                       local_res8,&DAT_1468e2360);
    if (cVar1 != '\0') {
      DAT_146af0b4a = local_res8[0];
    }
    if (DAT_1468b6148 != 0) {
      cVar1 = FConfigCacheIni::GetBool
                        (DAT_1468b6148,L"AnimationExperiments",L"UseLegIKForFirstPerson",local_res8,
                         &DAT_1468e2360);
      if (cVar1 != '\0') {
        DAT_146531c18 = local_res8[0];
      }
      if (DAT_1468b6148 != 0) {
        cVar1 = FConfigCacheIni::GetBool
                          (DAT_1468b6148,L"AnimationExperiments",L"UseWalkableLedgeCollision",
                           local_res8,&DAT_1468e2360);
        if (cVar1 != '\0') {
          DAT_146aefe40 = local_res8[0];
        }
        if (DAT_1468b6148 != 0) {
          cVar1 = FConfigCacheIni::GetBool
                            (DAT_1468b6148,L"AnimationExperiments",L"UseSimplifiedPipeline",
                             local_res8,&DAT_1468e2360);
          if (cVar1 != '\0') {
            DAT_146af0b54 = (uint)local_res8[0];
          }
          if (DAT_1468b6148 != 0) {
            cVar1 = FConfigCacheIni::GetBool
                              (DAT_1468b6148,L"AnimationExperiments",L"UseGbxAnimManager",local_res8
                               ,&DAT_1468e2360);
            if (cVar1 != '\0') {
              DAT_146af4a60 = (uint)local_res8[0];
            }
            if ((DAT_1468b6148 != 0) &&
               (cVar1 = FConfigCacheIni::GetBool
                                  (DAT_1468b6148,L"AnimationExperiments",L"UseAsyncBoundsUpdate",
                                   local_res8,&DAT_1468e2360), cVar1 != '\0')) {
              DAT_146af0b50 = (uint)local_res8[0];
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1422b1600 FUN_1422b1600 body=1665 status=ok
// SIG undefined FUN_1422b1600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422b1600(longlong *param_1,longlong param_2,char param_3)

{
  longlong **pplVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  longlong *plVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  int *piVar19;
  undefined1 auStack_198 [32];
  int local_178;
  longlong *local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  int local_138;
  undefined4 local_134;
  void *local_130;
  int local_128;
  undefined4 local_124;
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar16 = (longlong *)0x0;
  uVar3 = 0;
  local_108 = param_1;
  local_100 = param_2;
  if (param_3 != '\0') {
    TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 8,0);
    lVar17 = param_1[1];
    local_158 = (longlong *)((ulonglong)local_158 & 0xffffffff00000000);
    if (0 < (int)lVar17) {
      local_150 = 0;
      plVar8 = plVar16;
      do {
        plVar5 = (longlong *)((longlong)(int)plVar8 * 0x10 + *param_1);
        iVar14 = (int)plVar8;
        if (*plVar5 != 0) {
          local_160 = &local_158;
          local_168 = plVar5;
          FUN_1415ec610(param_1 + 8,&local_150,&local_168,0);
          iVar14 = (int)local_158;
        }
        uVar9 = iVar14 + 1;
        plVar8 = (longlong *)(ulonglong)uVar9;
        local_158 = (longlong *)CONCAT44(local_158._4_4_,uVar9);
      } while ((int)uVar9 < (int)lVar17);
    }
  }
  plVar8 = plVar16;
  if (param_2 != 0) {
    plVar8 = (longlong *)(ulonglong)*(uint *)(param_2 + 0x188);
  }
  iVar14 = (int)param_1[1];
  lVar17 = *param_1;
  local_140 = 0;
  iVar18 = (int)plVar8;
  local_138 = iVar14;
  if (((iVar14 != 0) || (uVar15 = uVar3, iVar18 != 0)) &&
     (TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_140,iVar14 + iVar18,0),
     uVar15 = local_134, iVar14 != 0)) {
    puVar10 = (undefined4 *)(lVar17 + 8);
    lVar17 = local_140 - lVar17;
    do {
      *(undefined8 *)(lVar17 + -8 + (longlong)puVar10) = *(undefined8 *)(puVar10 + -2);
      *(undefined4 *)((longlong)puVar10 + lVar17) = *puVar10;
      puVar10 = puVar10 + 4;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  lVar17 = local_140;
  plVar8 = param_1 + 4;
  local_120 = plVar8;
  if (plVar8 == &local_140) {
    if (local_140 != 0) {
      FMemory::Free(local_140);
    }
  }
  else {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    *plVar8 = lVar17;
    *(int *)(param_1 + 5) = local_138;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar15;
  }
  iVar14 = (int)param_1[3];
  pvVar2 = (void *)param_1[2];
  local_168 = (longlong *)0x0;
  local_160._0_4_ = iVar14;
  if ((iVar14 != 0) || (iVar18 != 0)) {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_168,iVar14 + iVar18,0);
    plVar16 = local_168;
    _guard_xfg_dispatch_icall_nop(local_168,pvVar2,(longlong)iVar14 * 0x30);
    uVar3 = local_160._4_4_;
  }
  iVar14 = (int)local_160;
  pplVar1 = (longlong **)(param_1 + 6);
  if (pplVar1 == &local_168) {
    if (plVar16 != (longlong *)0x0) {
      FMemory::Free(plVar16);
    }
  }
  else {
    if (*pplVar1 != (longlong *)0x0) {
      FMemory::Free();
    }
    *pplVar1 = plVar16;
    *(int *)(param_1 + 7) = iVar14;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  }
  plVar16 = param_1 + 0x12;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::operator=(plVar16)
  ;
  local_f8 = param_1 + 0x1c;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (*(int *)((longlong)param_1 + 0xec) < iVar18) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
  }
  local_f0 = param_1 + 0x1e;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (*(int *)((longlong)param_1 + 0xfc) < iVar18) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (local_f0);
  }
  if (0 < iVar18) {
    uVar9 = *(uint *)(param_1 + 3);
    local_168 = (longlong *)0x0;
    local_160 = (longlong **)(ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_168);
    }
    _guard_xfg_dispatch_icall_nop(local_168,0,(longlong)(int)uVar9);
    *(undefined1 *)local_168 = 1;
    local_128 = (int)param_1[3];
    lVar17 = (longlong)local_128;
    pvVar2 = (void *)param_1[2];
    local_130 = (void *)0x0;
    if (local_128 == 0) {
      local_124 = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_130,local_128,0);
      _guard_xfg_dispatch_icall_nop(local_130,pvVar2,lVar17 * 0x30);
    }
    local_110 = (longlong)iVar18;
    if (0 < iVar18) {
      local_150 = 0;
      local_118 = 0;
      local_148 = 0;
      plVar8 = param_1;
      do {
        piVar19 = (int *)0x0;
        lVar6 = *(longlong *)(param_2 + 0x180);
        plVar5 = (longlong *)(lVar6 + local_118);
        lVar17 = lVar6 + (longlong)*(int *)(local_100 + 0x188) * 0x18;
        plVar12 = plVar5;
        if (lVar6 != lVar17) {
          do {
            if (*(longlong *)(lVar6 + 0x10) == *plVar5) {
              plVar12 = (longlong *)(lVar6 + 8);
              break;
            }
            lVar6 = lVar6 + 0x18;
          } while (lVar6 != lVar17);
        }
        uVar3 = FReferenceSkeleton::FindBoneIndex(plVar8,plVar12);
        lVar17 = *plVar5;
        iVar14 = -1;
        local_148 = CONCAT44(local_148._4_4_,uVar3);
        local_158 = (longlong *)CONCAT44(local_158._4_4_,0xffffffff);
        if (lVar17 != 0) {
          if ((int)param_1[0x13] != *(int *)((longlong)param_1 + 0xc4)) {
            plVar8 = (longlong *)param_1[0x1a];
            if ((longlong *)param_1[0x1a] == (longlong *)0x0) {
              plVar8 = param_1 + 0x19;
            }
            iVar18 = *(int *)((longlong)plVar8 +
                             ((longlong)((int)((ulonglong)lVar17 >> 0x20) + (int)lVar17) &
                             (longlong)(int)param_1[0x1b] - 1U) * 4);
            if (iVar18 != -1) {
              do {
                piVar13 = (int *)(*plVar16 + (longlong)iVar18 * 0x18);
                if (*(longlong *)(*plVar16 + (longlong)iVar18 * 0x18) == lVar17) {
                  if (iVar18 != -1) goto LAB_1422b19dc;
                  break;
                }
                iVar18 = piVar13[4];
              } while (iVar18 != -1);
            }
          }
          piVar13 = piVar19;
LAB_1422b19dc:
          piVar7 = piVar13 + 2;
          if (piVar13 == (int *)0x0) {
            piVar7 = piVar19;
          }
          if (piVar7 != (int *)0x0) {
            iVar14 = *piVar7;
            local_158 = (longlong *)CONCAT44(local_158._4_4_,iVar14);
          }
        }
        lVar17 = plVar5[1];
        iVar18 = -1;
        if (lVar17 != 0) {
          if ((int)param_1[0x13] != *(int *)((longlong)param_1 + 0xc4)) {
            plVar8 = (longlong *)param_1[0x1a];
            if ((longlong *)param_1[0x1a] == (longlong *)0x0) {
              plVar8 = param_1 + 0x19;
            }
            iVar4 = *(int *)((longlong)plVar8 +
                            ((longlong)((int)((ulonglong)lVar17 >> 0x20) + (int)lVar17) &
                            (longlong)(int)param_1[0x1b] - 1U) * 4);
            if (iVar4 != -1) {
              do {
                piVar13 = (int *)(*plVar16 + (longlong)iVar4 * 0x18);
                if (*(longlong *)(*plVar16 + (longlong)iVar4 * 0x18) == lVar17) {
                  if (iVar4 != -1) goto LAB_1422b1a73;
                  break;
                }
                iVar4 = piVar13[4];
              } while (iVar4 != -1);
            }
          }
          piVar13 = piVar19;
LAB_1422b1a73:
          piVar7 = piVar13 + 2;
          if (piVar13 == (int *)0x0) {
            piVar7 = piVar19;
          }
          if (piVar7 != (int *)0x0) {
            iVar18 = *piVar7;
          }
        }
        if ((iVar14 != -1) && (iVar18 != -1)) {
          plVar5 = plVar5 + 2;
          FName::ToString(plVar5,local_e8);
          lVar17 = *plVar5;
          iVar14 = (int)local_120[1];
          *(int *)(local_120 + 1) = iVar14 + 1;
          if (*(int *)((longlong)local_120 + 0xc) < iVar14 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_120,iVar14);
          }
          plVar8 = (longlong *)((longlong)iVar14 * 0x10 + *local_120);
          *plVar8 = lVar17;
          *(int *)(plVar8 + 1) = (int)local_158;
          if (local_e8[0] != 0) {
            FMemory::Free();
          }
          plVar8 = local_108;
          local_178 = iVar18;
          FUN_1422aa650(local_78,&local_168,&local_130,local_108);
          local_178 = (undefined4)local_148;
          FUN_1422aa650(local_a8,&local_168,&local_130,plVar8);
          FUN_14162bcf0(local_78,&local_d8,local_a8);
          iVar14 = (int)plVar8[7];
          *(int *)(plVar8 + 7) = iVar14 + 1;
          if (*(int *)((longlong)plVar8 + 0x3c) < iVar14 + 1) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar8 + 6,iVar14);
          }
          puVar11 = (undefined8 *)((longlong)iVar14 * 0x30 + plVar8[6]);
          *puVar11 = local_d8;
          puVar11[1] = uStack_d0;
          *(undefined4 *)(puVar11 + 2) = local_c8;
          *(undefined4 *)((longlong)puVar11 + 0x14) = uStack_c4;
          *(undefined4 *)(puVar11 + 3) = uStack_c0;
          *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_bc;
          *(undefined4 *)(puVar11 + 4) = local_b8;
          *(undefined4 *)((longlong)puVar11 + 0x24) = uStack_b4;
          *(undefined4 *)(puVar11 + 5) = uStack_b0;
          *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_ac;
          local_158 = plVar5;
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          Emplace<TKeyInitializer<FName_const_&>_>(plVar16,&local_150,&local_158,0);
          plVar8 = local_f8;
          *(int *)(*plVar16 + 8 + (longlong)(int)local_150 * 0x18) = iVar14;
          iVar4 = (int)local_f8[1];
          *(int *)(local_f8 + 1) = iVar4 + 1;
          if (*(int *)((longlong)local_f8 + 0xc) < iVar4 + 1) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8,iVar4);
          }
          plVar5 = local_f0;
          *(short *)(*plVar8 + (longlong)iVar4 * 2) = (short)iVar14;
          local_140 = CONCAT44((undefined4)local_148,iVar14);
          iVar14 = (int)local_f0[1];
          *(int *)(local_f0 + 1) = iVar14 + 1;
          if (*(int *)((longlong)local_f0 + 0xc) < iVar14 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(local_f0,iVar14);
          }
          lVar17 = *plVar5;
          *(longlong *)(lVar17 + (longlong)iVar14 * 0xc) = local_140;
          *(int *)(lVar17 + 8 + (longlong)iVar14 * 0xc) = iVar18;
        }
        local_118 = local_118 + 0x18;
        local_110 = local_110 + -1;
        param_2 = local_100;
        plVar8 = local_108;
      } while (local_110 != 0);
      local_110 = 0;
    }
    if (local_130 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_168 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1422b1c90 RefreshCacheData body=39 status=ok
// SIG undefined RefreshCacheData(void)

void UAnimSequenceBase::RefreshCacheData(longlong param_1)

{
  undefined1 local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FAnimNotifyEvent,FIdentityFunctor,TDereferenceWrapper<FAnimNotifyEvent,TLess<FAnimNotifyEvent>_>_>
            (*(undefined8 *)(param_1 + 0x80),(longlong)*(int *)(param_1 + 0x88),local_res8[0],
             local_res8);
  return;
}



// FUNCTION 1422b1cc0 RegisterSlotNode body=147 status=ok
// SIG undefined RegisterSlotNode(void)

void USkeleton::RegisterSlotNode(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if (*(int *)(param_1 + 0x280) != *(int *)(param_1 + 0x2ac)) {
    lVar3 = *(longlong *)(param_1 + 0x2b8);
    if (*(longlong *)(param_1 + 0x2b8) == 0) {
      lVar3 = param_1 + 0x2b0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 0x2c0) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x278) + (longlong)iVar2 * 0x18) == lVar1) {
          if (iVar2 != -1) {
            return;
          }
          break;
        }
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x278) + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  FUN_1422b46c0(param_1,param_2,&DAT_146aef318);
  return;
}



// FUNCTION 1422b1d60 FUN_1422b1d60 body=521 status=ok
// SIG undefined FUN_1422b1d60(void)

void FUN_1422b1d60(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ushort *puVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar10) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar10;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar10 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_1422b1e9f;
        uVar10 = puVar13[lVar6 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar4 < iStack_44) {
LAB_1422b1e9f:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        puVar3 = (ushort *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar10 = (int)*plVar2 - 1U & (uint)*puVar3;
        *(uint *)(puVar3 + 10) = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar3 + 8) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1422b1f70 Remove body=229 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::Remove
          (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  iVar3 = *(int *)((longlong)plVar7 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar8) * 4);
  if (iVar3 != -1) {
    lVar5 = *param_1;
    do {
      lVar6 = (longlong)iVar3;
      if (*(longlong *)(lVar5 + lVar6 * 0x18) == param_2) {
        uVar8 = (longlong)*(int *)(lVar5 + 0x14 + lVar6 * 0x18) & uVar8;
        puVar2 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
        iVar4 = *(int *)((longlong)plVar7 + uVar8 * 4);
        goto joined_r0x0001422b2002;
      }
      iVar3 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
    } while (iVar3 != -1);
  }
  return 0;
joined_r0x0001422b2002:
  if (iVar4 == -1) {
LAB_1422b2029:
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar3,1);
    return 1;
  }
  if (iVar4 == iVar3) {
    *puVar2 = *(undefined4 *)(lVar5 + 0x10 + lVar6 * 0x18);
    goto LAB_1422b2029;
  }
  lVar1 = (longlong)iVar4 * 3 + 2;
  iVar4 = *(int *)(lVar5 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar5 + lVar1 * 8);
  goto joined_r0x0001422b2002;
}



// FUNCTION 1422b2060 RemoveAtImpl body=188 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FBlendSampleData,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x30 + (longlong)param_2 * 0x40);
    iVar3 = param_3;
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x40),
                 (void *)((longlong)(param_2 + param_3) * 0x40 + *param_1),(longlong)iVar1 << 6);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1422b2120 RemoveLinkup body=52 status=ok
// SIG undefined RemoveLinkup(void)

void USkeleton::RemoveLinkup(longlong param_1)

{
  undefined8 local_res8 [2];
  undefined8 local_res18 [2];
  
  FWeakObjectPtr::operator=(local_res8);
  local_res18[0] = local_res8[0];
  TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x2f0,local_res18);
  return;
}



// FUNCTION 1422b2160 RemoveUserDataOfClass body=254 status=ok
// SIG undefined RemoveUserDataOfClass(void)

void UAnimationAsset::RemoveUserDataOfClass(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar8 = 0;
    do {
      lVar1 = *(longlong *)(lVar8 + *(longlong *)(param_1 + 0x48));
      if (lVar1 != 0) {
        if (param_2 != 0) {
          lVar4 = UAssetUserData::GetPrivateStaticClass();
          lVar7 = param_2;
          do {
            lVar5 = param_2;
            if (lVar7 == lVar4) goto LAB_1422b21c0;
            lVar7 = *(longlong *)(lVar7 + 0x30);
          } while (lVar7 != 0);
        }
        lVar5 = 0;
LAB_1422b21c0:
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          iVar6 = *(int *)(param_1 + 0x50);
          iVar3 = (iVar6 - iVar9) + -1;
          if (iVar3 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar9 * 8),
                       (void *)(*(longlong *)(param_1 + 0x48) + (longlong)(iVar9 + 1) * 8),
                       (longlong)iVar3 << 3);
            iVar6 = *(int *)(param_1 + 0x50);
          }
          *(int *)(param_1 + 0x50) = iVar6 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x48);
          return;
        }
      }
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar9 < *(int *)(param_1 + 0x50));
  }
  return;
}



// FUNCTION 1422b2260 FUN_1422b2260 body=271 status=ok
// SIG undefined FUN_1422b2260(void)

void FUN_1422b2260(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 800)) {
    lVar9 = 0;
    plVar1 = (longlong *)(param_1 + 0x318);
    do {
      lVar2 = *(longlong *)(lVar9 + *plVar1);
      if (lVar2 != 0) {
        if (param_2 != 0) {
          lVar5 = UAssetUserData::GetPrivateStaticClass();
          lVar8 = param_2;
          do {
            lVar6 = param_2;
            if (lVar8 == lVar5) goto LAB_1422b22d0;
            lVar8 = *(longlong *)(lVar8 + 0x30);
          } while (lVar8 != 0);
        }
        lVar6 = 0;
LAB_1422b22d0:
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          iVar7 = *(int *)(param_1 + 800);
          iVar4 = (iVar7 - iVar10) + -1;
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + (longlong)iVar10 * 8),
                       (void *)(*plVar1 + (longlong)(iVar10 + 1) * 8),(longlong)iVar4 << 3);
            iVar7 = *(int *)(param_1 + 800);
          }
          *(int *)(param_1 + 800) = iVar7 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
          return;
        }
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar10 < *(int *)(param_1 + 800));
  }
  return;
}



// FUNCTION 1422b2370 Reset body=154 status=ok
// SIG undefined Reset(void)

void TArray<FBlendSampleData,FDefaultAllocator>::Reset(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 0x30);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 8;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 0x30);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 8;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1422b2410 Reset body=25 status=ok
// SIG undefined Reset(void)

void FTimeStretchCurve::Reset(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x14)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 8,0);
    return;
  }
  return;
}



// FUNCTION 1422b2430 FUN_1422b2430 body=99 status=ok
// SIG undefined FUN_1422b2430(void)

void FUN_1422b2430(longlong param_1)

{
  if (*(float *)(param_1 + 0x4c) != 0.0) {
    *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xac);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xc0);
  }
  FAlphaBlend::Reset(param_1 + 0x38);
  return;
}



// FUNCTION 1422b24a0 FUN_1422b24a0 body=280 status=ok
// SIG undefined FUN_1422b24a0(void)

void FUN_1422b24a0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar9 = param_1[2];
  lVar8 = 0;
  iVar2 = *(int *)(lVar9 + 0xa8);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
    FUN_140848c80();
  }
  iVar2 = *(int *)(lVar9 + 0xa8);
  if (iVar2 != 0) {
    iVar6 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + iVar2) {
      FUN_140848c80(param_1);
      iVar6 = (int)param_1[1];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar6 * 0x30 + *param_1),*(void **)(lVar9 + 0xa0),
               (longlong)iVar2 * 0x30);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar2;
  }
  if (*(char *)(lVar9 + 0xd0) != '\0') {
    lVar3 = FWeakObjectPtr::Get(lVar9 + 0x38);
    if (lVar3 != 0) {
      uVar4 = FWeakObjectPtr::Get(lVar9 + 0x40);
      plVar5 = (longlong *)USkeleton::GetRefLocalPoses(uVar4,0);
      if (*(uint *)(param_1 + 1) != 0) {
        uVar10 = (ulonglong)*(uint *)(param_1 + 1);
        lVar9 = lVar8;
        do {
          lVar3 = *param_1;
          lVar8 = lVar8 + 4;
          puVar7 = (undefined8 *)
                   ((longlong)*(int *)(*(longlong *)(param_1[2] + 0x70) + -4 + lVar8) * 0x30 +
                   *plVar5);
          uVar4 = puVar7[1];
          *(undefined8 *)(lVar9 + lVar3) = *puVar7;
          ((undefined8 *)(lVar9 + lVar3))[1] = uVar4;
          uVar4 = puVar7[3];
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar3);
          *puVar1 = puVar7[2];
          puVar1[1] = uVar4;
          uVar4 = puVar7[5];
          puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar3);
          *puVar1 = puVar7[4];
          puVar1[1] = uVar4;
          uVar10 = uVar10 - 1;
          lVar9 = lVar9 + 0x30;
        } while (uVar10 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1422b25c0 FUN_1422b25c0 body=143 status=ok
// SIG undefined FUN_1422b25c0(void)

void FUN_1422b25c0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x70);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x1c);
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
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x1c);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x70) = uVar2;
  return;
}



// FUNCTION 1422b2650 ResizeGrow body=145 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FGridBlendSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar3 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0x7c) != 0) || (4 < uVar1)) {
      uVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(uVar3 * 0x1c,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    lVar5 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
    uVar4 = (uVar3 - lVar5 >> 1) + lVar5 >> 4;
    uVar3 = uVar4 & 0xffffffff;
    if ((int)uVar4 < (int)uVar1) {
      uVar3 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x7c) = (int)uVar3;
  FUN_1422b25c0(param_1,param_2,uVar3,0x1c);
  return;
}



// FUNCTION 1422b26f0 FUN_1422b26f0 body=123 status=ok
// SIG undefined FUN_1422b26f0(void)

void FUN_1422b26f0(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar3 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x1c,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2;
      lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
      iVar3 = (int)((uVar2 - lVar4 >> 1) + lVar4 >> 4);
      if (iVar3 < (int)param_2) {
        iVar3 = 0x7fffffff;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x7c)) {
    *(int *)(param_1 + 0x7c) = iVar3;
    FUN_1422b25c0(param_1,*(undefined4 *)(param_1 + 0x78),iVar3,0x1c);
  }
  return;
}



// FUNCTION 1422b2770 FUN_1422b2770 body=292 status=ok
// SIG undefined FUN_1422b2770(void)

void FUN_1422b2770(longlong *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == param_1[0x88]) {
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
    *(undefined8 *)(lVar3 + 0x820) = 0;
    *(undefined4 *)(lVar3 + 0x828) = 0;
    FUN_142278740(param_1,param_2,*(undefined4 *)(lVar3 + 0x840),0,0,1,0xbf800000,0xbf800000);
    if (param_3 != 0) {
      UAnimInstance::Montage_JumpToSection(param_1,param_3,0);
    }
    FUN_1422b3e30(param_1,param_2,*(undefined1 *)(lVar3 + 0x844),param_3);
  }
  return;
}



// FUNCTION 1422b28a0 FUN_1422b28a0 body=242 status=ok
// SIG undefined FUN_1422b28a0(void)

undefined8 FUN_1422b28a0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined2 local_res8 [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0138);
  (**(code **)(*param_2 + 0x40))(param_2,param_1);
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b0138);
  if (iVar2 < 5) {
    plVar1 = (longlong *)param_2[1];
    if ((undefined2 *)plVar1[1] < (undefined2 *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res8,2);
      }
    }
    else {
      local_res8[0] = *(undefined2 *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
  }
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b0138);
  if (iVar2 < 10) {
    local_38 = 0;
    local_30 = 0;
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_2);
    local_18 = local_28;
    local_10 = &local_18;
    FUN_141661f40(&local_18,&local_38);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  }
  return 1;
}



// FUNCTION 1422b29a0 FUN_1422b29a0 body=825 status=ok
// SIG undefined FUN_1422b29a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422b29a0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  undefined1 auStack_c8 [32];
  undefined2 local_a8 [4];
  undefined8 local_a0;
  int iStack_98;
  uint uStack_94;
  undefined8 local_90;
  uint uStack_88;
  int iStack_84;
  int local_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined8 uStack_70;
  uint *puStack_68;
  undefined4 uStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0138);
  iVar5 = FArchive::CustomVer(param_2,&DAT_1464b0088);
  if (iVar5 < 7) {
    if (0x183 < (int)param_2[8]) {
      plVar3 = (longlong *)param_2[1];
      if ((undefined2 *)plVar3[1] < (undefined2 *)*plVar3 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_a8,2);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_a8,2);
        }
      }
      else {
        local_a8[0] = *(undefined2 *)*plVar3;
        *plVar3 = *plVar3 + 2;
      }
      local_78 = (longlong *)0x0;
      uStack_70 = 0;
      uStack_58 = 0;
      local_50 = 0;
      local_48 = 0xffffffff;
      local_44 = 0;
      local_38 = 0;
      local_30 = 0;
      operator<<(param_2,&local_78);
      local_30 = 0;
      if (local_38 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_78);
    }
  }
  else {
    iVar5 = FArchive::CustomVer(param_2,&DAT_1464b0138);
    if (iVar5 < 10) {
      local_78 = (longlong *)0x0;
      uStack_70 = 0;
      uStack_58 = 0;
      local_50 = 0;
      local_48 = 0xffffffff;
      local_44 = 0;
      local_38 = 0;
      local_30 = 0;
      operator<<(param_2,&local_78);
      local_30 = 0;
      if (local_38 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_78);
    }
  }
  iVar5 = FArchive::CustomVer(param_2,&DAT_1464b0088);
  if ((0xe < iVar5) && (FUN_1422a4230(param_2,param_1 + 2), (*(byte *)(param_2 + 5) & 1) != 0)) {
    if (param_1[10] != 0) {
      lVar6 = FMemory::Realloc(param_1[10],0,0);
      param_1[10] = lVar6;
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::ConditionalRehash(param_1 + 2,(int)param_1[3] - *(int *)((longlong)param_1 + 0x44),0);
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[3] - *(int *)((longlong)param_1 + 0x44)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
    }
    iVar5 = (int)param_1[7];
    puStack_68 = (uint *)(param_1 + 4);
    local_a0._0_4_ = 0;
    local_a0._4_4_ = 1;
    local_90._4_4_ = 0;
    uStack_88 = 0;
    if (iVar5 != 0) {
      puVar8 = (uint *)param_1[6];
      if ((uint *)param_1[6] == (uint *)0x0) {
        puVar8 = puStack_68;
      }
      uVar2 = *puVar8;
      uStack_88 = 0;
      local_a0._0_4_ = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)(int)local_a0;
        uStack_88 = uStack_88 + 0x20;
        iVar7 = (int)local_a0 + 1;
        bVar4 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_a0;
        local_a0._0_4_ = iVar7;
        if (bVar4) goto LAB_1422b2c1b;
        uVar2 = puVar8[lVar6 + 1];
      }
      local_a0._4_4_ = -uVar2 & uVar2;
      iVar7 = 0x1f;
      if (local_a0._4_4_ != 0) {
        for (; local_a0._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (local_a0._4_4_ == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      local_90._4_4_ = (uStack_88 - iVar7) + 0x1f;
      if (iVar5 < local_90._4_4_) {
LAB_1422b2c1b:
        local_90._4_4_ = iVar5;
      }
    }
    uStack_60 = 0xffffffff;
    iStack_5c = local_90._4_4_;
    uStack_58 = CONCAT44(iStack_84,uStack_88);
    uStack_70._0_4_ = (int)local_a0;
    uStack_70._4_4_ = local_a0._4_4_;
    iStack_98 = (int)local_a0;
    uStack_94 = local_a0._4_4_;
    local_80 = uStack_88;
    uStack_7c = iStack_84;
    uStack_88 = 0xffffffff;
    iStack_84 = local_90._4_4_;
    bVar4 = local_90._4_4_ < iVar5;
    local_a0 = param_1 + 2;
    local_78 = param_1 + 2;
    local_90 = puStack_68;
    if (bVar4) {
      do {
        iVar7 = iStack_84;
        iVar5 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
        }
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar5 * 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = *(undefined8 *)(*local_a0 + (longlong)iVar7 * 0x30);
        }
        uStack_88 = uStack_88 & ~uStack_94;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_98);
      } while (iStack_84 < (int)local_90[6]);
    }
  }
  return;
}



// FUNCTION 1422b2ce0 FUN_1422b2ce0 body=148 status=ok
// SIG undefined FUN_1422b2ce0(void)

void FUN_1422b2ce0(longlong param_1,longlong param_2)

{
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0148);
  FUN_141763960(param_1,param_2);
  if (0x151 < *(int *)(param_2 + 0x40)) {
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_2);
    local_18 = local_28;
    local_10 = &local_18;
    FUN_141661f40(&local_18,param_1 + 0x40);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  }
  FUN_14227a9a0(param_1 + 0x98,param_2);
  return;
}



// FUNCTION 1422b2d80 Serialize body=98 status=ok
// SIG undefined Serialize(void)

void UAnimationAsset::Serialize(longlong param_1,longlong param_2)

{
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  FUN_141763960();
  if (0x151 < *(int *)(param_2 + 0x40)) {
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_2);
    local_18 = local_28;
    local_10 = &local_18;
    FUN_141661f40(&local_18,param_1 + 0x40);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  }
  return;
}



// FUNCTION 1422b2df0 Serialize body=119 status=ok
// SIG undefined Serialize(void)

void UBlendSpaceBase::Serialize(longlong param_1,longlong param_2)

{
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  FUN_141763960(param_1,param_2);
  if (0x151 < *(int *)(param_2 + 0x40)) {
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_2);
    local_18 = local_28;
    local_10 = &local_18;
    FUN_141661f40(&local_18,param_1 + 0x40);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  }
  return;
}



// FUNCTION 1422b2e70 Serialize body=177 status=ok
// SIG undefined Serialize(void)

void UPoseAsset::Serialize(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0138);
  FUN_141763960(param_1,param_2);
  if (0x151 < *(int *)(param_2 + 0x40)) {
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_2);
    local_18 = local_28;
    local_10 = &local_18;
    FUN_141661f40(&local_18,param_1 + 0x40);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  }
  iVar1 = FArchive::CustomVer(param_2,&DAT_1464b0088);
  if (iVar1 < 10) {
    FUN_1422afa40(param_1 + 0x80,*(undefined8 *)(param_1 + 0x38),param_1 + 0x118);
  }
  return;
}



// FUNCTION 1422b2f30 Serialize body=261 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void URig::Serialize(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  iVar1 = FArchive::CustomVer(param_2,&DAT_1464b0088);
  if (7 < iVar1) {
    local_b8 = 0xffffffff;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
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
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_68 = 0xffffffff;
    local_28 = 1;
    ::operator<<(param_2,&local_128);
    FReferenceSkeleton::~FReferenceSkeleton(&local_128);
  }
  return;
}



// FUNCTION 1422b3040 FUN_1422b3040 body=1716 status=ok
// SIG undefined FUN_1422b3040(void)

void FUN_1422b3040(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  uint *puVar20;
  int local_res8 [2];
  uint local_res10 [2];
  undefined8 local_res18;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  longlong *local_68;
  longlong lStack_60;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  FUN_141763960();
  iVar16 = (int)param_2[8];
  if (0x135 < iVar16) {
    operator<<(param_2,param_1 + 0x58);
    iVar16 = (int)param_2[8];
  }
  if (iVar16 < 0x14b) {
    local_88 = (longlong *)(param_1 + 0x1a0);
    iVar16 = *(int *)(param_1 + 0x1c8);
    puStack_58 = (uint *)(param_1 + 0x1b0);
    local_b8 = (longlong *)0x100000000;
    local_a8._4_4_ = 0;
    uStack_a0._0_4_ = 0;
    if (iVar16 != 0) {
      puVar20 = *(uint **)(param_1 + 0x1c0);
      if (*(uint **)(param_1 + 0x1c0) == (uint *)0x0) {
        puVar20 = puStack_58;
      }
      uVar11 = *puVar20;
      iVar12 = 0;
      while (uVar11 == 0) {
        uStack_a0._0_4_ = (uint)uStack_a0 + 0x20;
        local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
        local_b8 = (longlong *)CONCAT44(local_b8._4_4_,iVar12 + 1);
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar12) goto LAB_1422b341f;
        uVar11 = puVar20[(longlong)iVar12 + 1];
        iVar12 = iVar12 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar12 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      local_b8 = (longlong *)CONCAT44(uVar11,(uint)local_b8);
      if (uVar11 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      local_a8._4_4_ = ((uint)uStack_a0 - iVar12) + 0x1f;
      if (iVar16 < local_a8._4_4_) {
LAB_1422b341f:
        local_a8._4_4_ = iVar16;
      }
    }
    auStack_50._4_4_ = local_a8._4_4_;
    auStack_50._0_4_ = 0xffffffff;
    auStack_50._8_4_ = (uint)uStack_a0;
    auStack_50._12_4_ = uStack_a0._4_4_;
    lStack_60 = (longlong)local_b8;
    local_80 = 0;
    local_40._0_4_ = SUB84(local_88,0);
    local_40._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_a0._0_4_ = 0xffffffff;
    uStack_a0._4_4_ = local_a8._4_4_;
    uStack_b0 = (longlong)local_b8;
    local_98._8_4_ = (undefined4)local_40;
    local_98._0_8_ = auStack_50._8_8_;
    local_98._12_4_ = local_40._4_4_;
    bVar5 = *(int *)(param_1 + 0x1c8) <= local_a8._4_4_;
    local_b8 = local_88;
    local_68 = local_88;
    local_40 = local_88;
    local_a8 = puStack_58;
    if (bVar5) goto LAB_1422b3510;
    do {
      plVar4 = local_b8;
      lVar3 = (longlong)uStack_a0._4_4_ * 0x28;
      (**(code **)(*param_2 + 0x40))(param_2,*local_b8 + lVar3);
      lVar18 = *plVar4;
      FArchive::UsingCustomVersion(param_2,&DAT_1464b0138);
      (**(code **)(*param_2 + 0x40))(param_2,lVar18 + 8 + lVar3);
      FUN_1422a37a0(param_2,lVar18 + 0x10 + lVar3);
      uStack_a0._0_4_ = (uint)uStack_a0 & ~uStack_b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
    } while (uStack_a0._4_4_ < (int)local_a8[6]);
  }
  else {
    plVar4 = (longlong *)param_2[1];
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res8,4);
        }
      }
      else {
        local_res8[0] = *(int *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      iVar16 = 0;
      local_res18 = 0;
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      local_a8._0_4_ = 0;
      local_a8._4_4_ = 0;
      TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
      ::Empty(param_1 + 0x1a0,0);
      if (0 < local_res8[0]) {
        local_78 = &local_res18;
        local_70 = &local_b8;
        do {
          (**(code **)(*param_2 + 0x40))(param_2,&local_res18);
          FArchive::UsingCustomVersion(param_2,&DAT_1464b0138);
          (**(code **)(*param_2 + 0x40))(param_2,&local_b8);
          FUN_1422a37a0(param_2,&uStack_b0);
          FUN_14229f430(param_1 + 0x1a0,local_res10,&local_78,0);
          iVar16 = iVar16 + 1;
        } while (iVar16 < local_res8[0]);
      }
      local_a8 = (uint *)CONCAT44(local_a8._4_4_,(undefined4)local_a8);
      if (uStack_b0 != 0) {
        FMemory::Free();
        local_a8 = (uint *)CONCAT44(local_a8._4_4_,(undefined4)local_a8);
      }
      goto LAB_1422b3510;
    }
    local_res8[0] = *(int *)(param_1 + 0x1a8) - *(int *)(param_1 + 0x1d4);
    if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    local_88 = (longlong *)(param_1 + 0x1a0);
    iVar16 = *(int *)(param_1 + 0x1c8);
    puStack_58 = (uint *)(param_1 + 0x1b0);
    local_b8 = (longlong *)0x100000000;
    local_a8._4_4_ = 0;
    uStack_a0._0_4_ = 0;
    if (iVar16 != 0) {
      puVar20 = *(uint **)(param_1 + 0x1c0);
      if (*(uint **)(param_1 + 0x1c0) == (uint *)0x0) {
        puVar20 = puStack_58;
      }
      uVar11 = *puVar20;
      iVar12 = 0;
      while (uVar11 == 0) {
        uStack_a0._0_4_ = (uint)uStack_a0 + 0x20;
        local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
        local_b8 = (longlong *)CONCAT44(local_b8._4_4_,iVar12 + 1);
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar12) goto LAB_1422b328f;
        uVar11 = puVar20[(longlong)iVar12 + 1];
        iVar12 = iVar12 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar12 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      local_b8 = (longlong *)CONCAT44(uVar11,(uint)local_b8);
      if (uVar11 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      local_a8._4_4_ = ((uint)uStack_a0 - iVar12) + 0x1f;
      if (iVar16 < local_a8._4_4_) {
LAB_1422b328f:
        local_a8._4_4_ = iVar16;
      }
    }
    auStack_50._4_4_ = local_a8._4_4_;
    auStack_50._0_4_ = 0xffffffff;
    auStack_50._8_4_ = (uint)uStack_a0;
    auStack_50._12_4_ = uStack_a0._4_4_;
    lStack_60 = (longlong)local_b8;
    local_80 = 0;
    local_40._0_4_ = SUB84(local_88,0);
    local_40._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_a0._0_4_ = 0xffffffff;
    uStack_a0._4_4_ = local_a8._4_4_;
    uStack_b0 = (longlong)local_b8;
    local_98._8_4_ = (undefined4)local_40;
    local_98._0_8_ = auStack_50._8_8_;
    local_98._12_4_ = local_40._4_4_;
    bVar5 = *(int *)(param_1 + 0x1c8) <= local_a8._4_4_;
    local_b8 = local_88;
    local_68 = local_88;
    local_40 = local_88;
    local_a8 = puStack_58;
    if (bVar5) goto LAB_1422b3510;
    do {
      plVar4 = local_b8;
      lVar3 = (longlong)uStack_a0._4_4_ * 0x28;
      (**(code **)(*param_2 + 0x40))(param_2,*local_b8 + lVar3);
      lVar18 = *plVar4;
      FArchive::UsingCustomVersion(param_2,&DAT_1464b0138);
      (**(code **)(*param_2 + 0x40))(param_2,lVar18 + 8 + lVar3);
      FUN_1422a37a0(param_2,lVar18 + 0x10 + lVar3);
      uStack_a0._0_4_ = (uint)uStack_a0 & ~uStack_b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
    } while (uStack_a0._4_4_ < (int)local_a8[6]);
  }
  if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
    TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
    ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
    local_a8 = local_a8;
  }
LAB_1422b3510:
  if ((int)param_2[8] < 0x152) {
    puVar13 = (undefined4 *)FGuid::NewGuid(&local_78);
    uVar6 = puVar13[1];
    uVar7 = puVar13[2];
    uVar8 = puVar13[3];
    *(undefined4 *)(param_1 + 0x160) = *puVar13;
    *(undefined4 *)(param_1 + 0x164) = uVar6;
    *(undefined4 *)(param_1 + 0x168) = uVar7;
    *(undefined4 *)(param_1 + 0x16c) = uVar8;
  }
  else {
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_b8,param_2);
    local_a8 = (uint *)&local_b8;
    uStack_a0 = &local_a8;
    FUN_141661f40(&local_a8,param_1 + 0x160);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_b8);
  }
  if (0x183 < (int)param_2[8]) {
    FUN_1422a4820(param_2,param_1 + 0x1f0);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if (*(longlong *)(param_1 + 0x230) != 0) {
        uVar14 = FMemory::Realloc(*(longlong *)(param_1 + 0x230),0,0);
        *(undefined8 *)(param_1 + 0x230) = uVar14;
      }
      *(undefined4 *)(param_1 + 0x238) = 0;
      TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
      ::ConditionalRehash(param_1 + 0x1f0,*(int *)(param_1 + 0x1f8) - *(int *)(param_1 + 0x224),0);
    }
  }
  if ((int)param_2[8] < 0x1f5) {
    FUN_1422a6690(param_1,1);
  }
  else {
    FUN_1406c5d90(param_1 + 0x278,0);
    puVar19 = *(undefined8 **)(param_1 + 0x268);
    puVar1 = puVar19 + (longlong)*(int *)(param_1 + 0x270) * 3;
    for (; puVar19 != puVar1; puVar19 = puVar19 + 3) {
      puVar17 = (undefined8 *)puVar19[1];
      puVar2 = puVar17 + *(int *)(puVar19 + 2);
      puVar10 = puVar19;
      puVar9 = local_70;
      for (; local_70 = puVar10, puVar17 != puVar2; puVar17 = puVar17 + 1) {
        local_78 = puVar17;
        TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                  (param_1 + 0x278,local_res8,&local_78,0);
        puVar10 = local_70;
        puVar9 = local_70;
      }
      local_70 = puVar9;
    }
  }
  FUN_1422b1600(param_1 + 0x58,param_1,0);
  if ((*(char *)(param_1 + 0x350) == '\0') && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x350) = 1;
    lVar18 = *(longlong *)(param_1 + 0x358);
    lVar3 = lVar18 + (longlong)*(int *)(param_1 + 0x360) * 8;
    for (; lVar18 != lVar3; lVar18 = lVar18 + 8) {
      lVar15 = FWeakObjectPtr::Get(lVar18);
      if (lVar15 != 0) {
        FUN_1422b1600(lVar15 + 0x138,*(undefined8 *)(lVar15 + 0x48),0);
      }
    }
  }
  return;
}



// FUNCTION 1422b3700 FUN_1422b3700 body=316 status=ok
// SIG undefined FUN_1422b3700(void)

void FUN_1422b3700(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5,undefined8 param_6,undefined1 param_7)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_28 [2];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x718);
  if (((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 != 0)) &&
     ((param_4 == 0 ||
      ((*(longlong *)(param_4 + 0x38) != 0 && (lVar2 == *(longlong *)(param_4 + 0x38))))))) {
    local_res10 = param_2;
    if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
      lVar2 = *(longlong *)(param_1 + 0x78);
      if (*(longlong *)(param_1 + 0x78) == 0) {
        lVar2 = param_1 + 0x70;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                               (longlong)*(int *)(param_1 + 0x80) - 1U) * 4);
      if (iVar1 != -1) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x18;
          if (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x18) == param_2) {
            if ((iVar1 != -1) && (lVar2 != 0)) goto LAB_1422b37fb;
            break;
          }
          iVar1 = *(int *)(lVar2 + 0x10);
        } while (iVar1 != -1);
      }
    }
    local_28[0] = &local_res10;
    FUN_14229e880(param_1 + 0x38,local_res8,local_28,0);
    lVar2 = *(longlong *)(param_1 + 0x38) + (longlong)local_res8[0] * 0x18;
LAB_1422b37fb:
    uVar3 = FAnimMontageInstance::SetMatineeAnimPositionInner
                      (local_res10,*(undefined8 *)(param_1 + 0x10),param_4,param_5,param_7);
    FWeakObjectPtr::operator=(lVar2 + 8,uVar3);
  }
  return;
}



// FUNCTION 1422b3840 SetAnimWeights body=83 status=ok
// SIG undefined SetAnimWeights(void)

void IMatineeAnimInterface::SetAnimWeights(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Matinee/MatineeAnimInterface.h"
             ,0x4f,L"Pure virtual not implemented (%s)",L"UMatineeAnimInterface::SetAnimWeights");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Matinee/MatineeAnimInterface.h"
             ,0x4f,L"Pure virtual not implemented (%s)",L"UMatineeAnimInterface::SetAnimWeights");
  return;
}



// FUNCTION 1422b38a0 FUN_1422b38a0 body=231 status=ok
// SIG undefined FUN_1422b38a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422b38a0(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0x840) = param_5;
  *(undefined1 *)(param_1 + 0x844) = param_4;
  *(undefined4 *)(param_1 + 0x82c) = 0;
  *(undefined8 *)(param_1 + 0x770) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x778) = DAT_1468b5d98;
  TArray<FBlendSampleData,FDefaultAllocator>::Reset(param_1 + 0x780,0);
  *(undefined4 *)(param_1 + 0x830) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0x838) = 0xfffffffe;
  local_18 = *(undefined8 *)(param_1 + 0x770);
  local_10 = *(undefined4 *)(param_1 + 0x778);
  FUN_1422b62b0(param_1,&local_18);
  if (param_2 != 0) {
    lVar2 = UBlendSpaceBase::GetPrivateStaticClass();
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
      UBlendSpaceBase::InitializeFilter(param_2,param_1 + 0x790);
    }
  }
  return;
}



// FUNCTION 1422b3990 FUN_1422b3990 body=682 status=ok
// SIG undefined FUN_1422b3990(void)

void FUN_1422b3990(longlong *param_1,longlong *param_2,undefined1 param_3,undefined4 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != (longlong *)param_1[0x88]) {
    param_1[0x88] = (longlong)param_2;
  }
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    lVar2 = FUN_142a07000();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
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
  plVar3 = (longlong *)param_1[0x72];
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = (longlong)plVar3;
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x290))(param_2);
  }
  lVar4 = param_1[4];
  lVar2 = 0;
  if (lVar4 != 0) {
    if ((*(longlong *)(lVar4 + 0x718) == 0) ||
       ((param_1[0x88] != 0 &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x718) + 0x48) != *(longlong *)(param_1[0x88] + 0x38)))
       )) {
      param_1[0x88] = 0;
    }
    *(undefined1 *)(lVar4 + 0xb17) = 2;
    lVar2 = param_1[4];
  }
  (**(code **)(*plVar3 + 0x78))(plVar3,param_2,lVar2,param_3,param_4);
  if (param_2 != (longlong *)0x0) {
    lVar4 = UTextureRenderTarget::StaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_2 + 0x358))(param_2);
    }
    lVar4 = UMaterialInstanceConstant::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14227d500(plVar3);
      if (0 < (int)param_2[0x30]) {
        FUN_14227cd00(plVar3,param_2[0x2f]);
        plVar3[0xeb] = *(longlong *)param_2[0x2f];
      }
      (**(code **)(*param_1 + 0x350))(param_1,param_2,0);
      lVar4 = UAnimInstance::GetActiveMontageInstance(param_1);
      if (lVar4 != 0) {
        FUN_1422b3fc0(param_1,*(undefined1 *)(lVar4 + 0x28));
        return;
      }
      lVar4 = param_1[4];
      if (lVar4 != 0) {
        lVar2 = FUN_142a07000();
        lVar4 = *(longlong *)(lVar4 + 0x10);
        if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
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
      lVar4 = param_1[0x72];
      if (lVar4 == 0) {
        lVar4 = (**(code **)(*param_1 + 0x308))(param_1);
        param_1[0x72] = lVar4;
      }
      FUN_1422b3fc0(param_1,*(undefined1 *)(lVar4 + 0x845));
      return;
    }
  }
  FUN_142281950(param_1,0x3e800000);
  return;
}



// FUNCTION 1422b3c40 FUN_1422b3c40 body=171 status=ok
// SIG undefined FUN_1422b3c40(void)

void FUN_1422b3c40(longlong *param_1,undefined8 *param_2)

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
  *(undefined8 *)(lVar3 + 0x770) = *param_2;
  *(undefined4 *)(lVar3 + 0x778) = *(undefined4 *)(param_2 + 1);
  return;
}



// FUNCTION 1422b3cf0 FUN_1422b3cf0 body=64 status=ok
// SIG undefined FUN_1422b3cf0(void)

void FUN_1422b3cf0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_2[1];
  *(ulonglong *)(param_1 + 0xc) = *param_2 & 0x7fffffff7fffffff;
  *(uint *)(param_1 + 0x14) = (uint)uVar1 & 0x7fffffff;
  return;
}



// FUNCTION 1422b3d30 FUN_1422b3d30 body=253 status=ok
// SIG undefined FUN_1422b3d30(void)

void FUN_1422b3d30(longlong *param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
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
  *(undefined1 *)(lVar3 + 0x844) = param_2;
  lVar2 = param_1[0x88];
  if (lVar2 != 0) {
    lVar4 = UMaterialInstanceConstant::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1422b3e30(param_1,lVar2,*(undefined1 *)(lVar3 + 0x844),0);
    }
  }
  return;
}



// FUNCTION 1422b3e30 FUN_1422b3e30 body=215 status=ok
// SIG undefined FUN_1422b3e30(void)

void FUN_1422b3e30(undefined8 param_1,longlong param_2,char param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_2 + 0x170);
  if (0 < iVar3) {
    if (param_4 == 0) {
      param_4 = *(longlong *)(*(longlong *)(param_2 + 0x168) + 0x30);
    }
    iVar2 = FUN_1422746b0(param_2,param_4);
    lVar4 = param_4;
    do {
      iVar3 = iVar3 + -1;
      lVar1 = *(longlong *)((longlong)iVar2 * 0x58 + 0x40 + *(longlong *)(param_2 + 0x168));
      iVar2 = FUN_1422746b0(param_2,lVar1);
      if (iVar2 == -1) {
        if (param_3 == '\0') {
          param_4 = 0;
        }
        UAnimInstance::Montage_SetNextSection(param_1,lVar4,param_4,0);
        return;
      }
      UAnimInstance::Montage_SetNextSection(param_1,lVar4,lVar1,0);
      lVar4 = lVar1;
    } while (0 < iVar3);
  }
  return;
}



// FUNCTION 1422b3f10 FUN_1422b3f10 body=176 status=ok
// SIG undefined FUN_1422b3f10(void)

void FUN_1422b3f10(longlong *param_1,undefined4 param_2)

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
  *(undefined4 *)(lVar3 + 0x840) = param_2;
  lVar3 = UAnimInstance::GetActiveMontageInstance(param_1);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 300) = param_2;
  }
  return;
}



// FUNCTION 1422b3fc0 FUN_1422b3fc0 body=292 status=ok
// SIG undefined FUN_1422b3fc0(void)

void FUN_1422b3fc0(longlong *param_1,undefined1 param_2)

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
  *(undefined1 *)(lVar3 + 0x845) = param_2;
  lVar2 = UAnimInstance::GetActiveMontageInstance(param_1);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x28) = param_2;
    return;
  }
  if ((*(char *)(lVar3 + 0x845) != '\0') && (lVar3 = param_1[0x88], lVar3 != 0)) {
    lVar2 = UMaterialInstanceConstant::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_1 + 0x350))(param_1,lVar3,0);
    }
  }
  return;
}



// FUNCTION 1422b40f0 FUN_1422b40f0 body=183 status=ok
// SIG undefined FUN_1422b40f0(void)

void FUN_1422b40f0(longlong *param_1,undefined4 param_2,undefined1 param_3)

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
  FUN_1422b41b0(param_1,param_2,*(undefined4 *)(lVar3 + 0x82c),param_3);
  return;
}



// FUNCTION 1422b41b0 FUN_1422b41b0 body=622 status=ok
// SIG undefined FUN_1422b41b0(void)

void FUN_1422b41b0(longlong *param_1,float param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_48;
  undefined8 local_40;
  
  lVar4 = param_1[4];
  local_res18[0] = param_3;
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
  lVar3 = param_1[0x88];
  if (lVar3 != 0) {
    lVar5 = UBlendSpace::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      fVar6 = *(float *)(lVar3 + 0x8c);
      goto LAB_1422b42e9;
    }
    lVar3 = param_1[0x88];
    if (lVar3 != 0) {
      lVar5 = UTextureRenderTarget::StaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        fVar6 = *(float *)(lVar3 + 0x90);
        goto LAB_1422b42e9;
      }
    }
  }
  fVar6 = 0.0;
LAB_1422b42e9:
  if (0.0 <= param_2) {
    if (param_2 <= fVar6) {
      fVar6 = param_2;
    }
  }
  else {
    fVar6 = 0.0;
  }
  *(float *)(lVar4 + 0x82c) = fVar6;
  lVar3 = UAnimInstance::GetActiveMontageInstance(param_1);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x128) = *(undefined4 *)(lVar4 + 0x82c);
    *(undefined4 *)(lVar3 + 0x30) = 0xfffffffe;
    *(undefined4 *)(lVar3 + 0x38) = 0xfffffffe;
  }
  if ((param_4 != '\0') && (plVar1 = (longlong *)param_1[0x88], plVar1 != (longlong *)0x0)) {
    lVar3 = UTextureRenderTarget::StaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_14229abf0(param_1 + 0x1f,param_1[4]);
      local_res20[0] = *(undefined4 *)(lVar4 + 0x82c);
      local_48 = 0;
      local_40 = 0;
      (**(code **)(*plVar1 + 0x2a8))(plVar1,local_res18,local_res20,&local_48);
      if (0 < (int)local_40) {
        FAnimNotifyQueue::AddAnimNotifies(param_1 + 0x1f,1,&local_48,0x3f800000);
      }
      FUN_142282da0(param_1,0);
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1422b4420 FUN_1422b4420 body=381 status=ok
// SIG undefined FUN_1422b4420(void)

void FUN_1422b4420(longlong *param_1,longlong *param_2,float param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float *pfVar7;
  undefined1 local_res18 [8];
  float local_res20 [2];
  longlong *local_38;
  float *local_30;
  
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    lVar3 = FUN_142a07000();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar4 = param_1[0x72];
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar4;
  }
  lVar3 = *param_2;
  plVar6 = (longlong *)(lVar4 + 0x6b8);
  pfVar7 = (float *)0x0;
  if (*(int *)(lVar4 + 0x6c0) != *(int *)(lVar4 + 0x6ec)) {
    lVar5 = *(longlong *)(lVar4 + 0x6f8);
    if (*(longlong *)(lVar4 + 0x6f8) == 0) {
      lVar5 = lVar4 + 0x6f0;
    }
    iVar2 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                             (longlong)*(int *)(lVar4 + 0x700) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        lVar4 = *plVar6 + (longlong)iVar2 * 0x18;
        if (*(longlong *)(*plVar6 + (longlong)iVar2 * 0x18) == lVar3) {
          pfVar7 = (float *)0x0;
          if ((iVar2 != -1) && (lVar4 != 0)) {
            pfVar7 = (float *)(lVar4 + 8);
          }
          break;
        }
        iVar2 = *(int *)(lVar4 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20[0] = param_3;
  if ((param_4 == '\0') || (1e-05 < ABS(param_3))) {
    if (pfVar7 == (float *)0x0) {
      local_30 = local_res20;
      local_38 = param_2;
      FUN_1417e05c0(plVar6,local_res18,&local_38,0);
    }
    else {
      *pfVar7 = param_3;
    }
  }
  else {
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    Remove(plVar6);
  }
  return;
}



// FUNCTION 1422b45a0 FUN_1422b45a0 body=189 status=ok
// SIG undefined FUN_1422b45a0(void)

void FUN_1422b45a0(longlong *param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
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
  uVar4 = *(uint *)(lVar3 + 0x840) & 0x7fffffff;
  *(char *)(lVar3 + 0x846) = param_2;
  if (param_2 != '\0') {
    uVar4 = uVar4 ^ 0x80000000;
  }
  *(uint *)(lVar3 + 0x840) = uVar4;
  return;
}



// FUNCTION 1422b4660 FUN_1422b4660 body=26 status=ok
// SIG undefined FUN_1422b4660(void)

void FUN_1422b4660(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 1);
  if (*(char *)(param_1 + 0x77) == '\0') {
    return;
  }
  FUN_1422b2430();
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x77) = 1;
  return;
}



// FUNCTION 1422b4680 FUN_1422b4680 body=26 status=ok
// SIG undefined FUN_1422b4680(void)

void FUN_1422b4680(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *param_2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 1);
  if (*(char *)(param_1 + 0x77) == '\0') {
    return;
  }
  FUN_1422b2430();
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x77) = 1;
  return;
}



// FUNCTION 1422b46a0 SetSkeleton body=27 status=ok
// SIG undefined SetSkeleton(void)

void UAnimationAsset::SetSkeleton(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_2 != *(longlong *)(param_1 + 0x38))) {
    *(longlong *)(param_1 + 0x38) = param_2;
    uVar1 = *(undefined8 *)(param_2 + 0x168);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x160);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return;
}



// FUNCTION 1422b46c0 FUN_1422b46c0 body=599 status=ok
// SIG undefined FUN_1422b46c0(void)

void FUN_1422b46c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  longlong *local_38;
  longlong *local_30;
  
  lVar9 = *param_2;
  plVar10 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x280) != *(int *)(param_1 + 0x2ac)) {
    lVar3 = *(longlong *)(param_1 + 0x2b8);
    if (*(longlong *)(param_1 + 0x2b8) == 0) {
      lVar3 = param_1 + 0x2b0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)lVar9 >> 0x20) + (int)lVar9) &
                             (longlong)*(int *)(param_1 + 0x2c0) - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x278);
      do {
        plVar5 = (longlong *)(lVar3 + (longlong)iVar2 * 0x18);
        if (*(longlong *)(lVar3 + (longlong)iVar2 * 0x18) == lVar9) {
          if (iVar2 != -1) goto LAB_1422b4753;
          break;
        }
        iVar2 = (int)plVar5[2];
      } while (iVar2 != -1);
    }
  }
  plVar5 = plVar10;
LAB_1422b4753:
  plVar8 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar8 = plVar10;
  }
  if (plVar8 != (longlong *)0x0) {
    if (*plVar8 != *param_3) {
      plVar7 = *(longlong **)(param_1 + 0x268);
      plVar5 = plVar7 + (longlong)*(int *)(param_1 + 0x270) * 3;
      for (; plVar7 != plVar5; plVar7 = plVar7 + 3) {
        if (*plVar7 == *plVar8) {
          if (plVar7 != (longlong *)0x0) {
            plVar5 = (longlong *)plVar7[1];
            iVar2 = (int)plVar7[2];
            plVar6 = plVar5;
            goto joined_r0x0001422b47c9;
          }
          break;
        }
      }
    }
LAB_1422b4831:
    if (*plVar8 == *param_3) {
      return;
    }
  }
  plVar5 = (longlong *)(param_1 + 0x268);
  plVar6 = (longlong *)*plVar5;
  lVar9 = (longlong)*(int *)(param_1 + 0x270);
  plVar8 = plVar6 + lVar9 * 3;
  plVar7 = plVar10;
  if (plVar6 != plVar8) {
    do {
      plVar7 = plVar6;
      if (*plVar6 == *param_3) break;
      plVar6 = plVar6 + 3;
      plVar7 = plVar10;
    } while (plVar6 != plVar8);
  }
  if (plVar7 == (longlong *)0x0) {
    iVar2 = *(int *)(param_1 + 0x270) + 1;
    *(int *)(param_1 + 0x270) = iVar2;
    if (*(int *)(param_1 + 0x274) < iVar2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar5);
    }
    lVar3 = *plVar5;
    *(undefined8 *)(lVar3 + lVar9 * 0x18) = 0;
    *(undefined8 *)(lVar3 + 8 + lVar9 * 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x10 + lVar9 * 0x18) = 0;
    plVar7 = (longlong *)(*plVar5 + (longlong)(*(int *)(param_1 + 0x270) + -1) * 0x18);
    *plVar7 = *param_3;
  }
  iVar2 = (int)plVar7[2];
  *(int *)(plVar7 + 2) = iVar2 + 1;
  if (*(int *)((longlong)plVar7 + 0x14) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7 + 1,iVar2);
  }
  *(longlong *)(plVar7[1] + (longlong)iVar2 * 8) = *param_2;
  local_38 = param_2;
  local_30 = param_3;
  TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
            ((longlong *)(param_1 + 0x278),local_res8,&local_38,0);
  return;
joined_r0x0001422b47c9:
  if (plVar6 == plVar5 + iVar2) goto LAB_1422b4831;
  if (*plVar6 == lVar9) {
    iVar4 = (int)((longlong)plVar6 - (longlong)plVar5 >> 3);
    if (iVar4 != -1) {
      iVar1 = (iVar2 - iVar4) + -1;
      if (0 < iVar1) {
        iVar1 = 1;
      }
      if (iVar1 != 0) {
        _guard_xfg_dispatch_icall_nop(plVar5 + iVar4,plVar5 + (iVar2 - iVar1),(longlong)iVar1 << 3);
        iVar2 = (int)plVar7[2];
      }
      *(int *)(plVar7 + 2) = iVar2 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar7 + 1);
    }
    goto LAB_1422b4831;
  }
  plVar6 = plVar6 + 1;
  goto joined_r0x0001422b47c9;
}



// FUNCTION 1422b4920 FUN_1422b4920 body=123 status=ok
// SIG undefined FUN_1422b4920(void)

void FUN_1422b4920(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  FAnimLinkableElement::SetTime();
  lVar1 = *(longlong *)(param_1 + 0x60);
  fVar2 = (float)FAnimLinkableElement::GetTime(param_1,0);
  (**(code **)(lVar1 + 8))(param_1 + 0x60,fVar2 + *(float *)(param_1 + 0x58),0);
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001422b4972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x2a0))();
    return;
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x2c8))();
  }
  return;
}



// FUNCTION 1422b49a0 FUN_1422b49a0 body=26 status=ok
// SIG undefined FUN_1422b49a0(void)

void FUN_1422b49a0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 1);
  if (*(char *)(param_1 + 0x77) == '\0') {
    return;
  }
  FUN_1422b2430();
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x77) = 1;
  return;
}



// FUNCTION 1422b49c0 FUN_1422b49c0 body=44 status=ok
// SIG undefined FUN_1422b49c0(void)

ulonglong FUN_1422b49c0(ulonglong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001422b49cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x2a8))();
    return uVar1;
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001422b49e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x2d0))();
    return uVar1;
  }
  return param_1 & 0xffffffffffffff00;
}



// FUNCTION 1422b49f0 FUN_1422b49f0 body=32 status=ok
// SIG undefined FUN_1422b49f0(void)

undefined1 FUN_1422b49f0(longlong param_1)

{
  if (((*(char *)(param_1 + 0x77) == '\0') && (*(char *)(param_1 + 0x78) != '\0')) &&
     (*(float *)(param_1 + 0x58) == 1.0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1422b4a10 FUN_1422b4a10 body=246 status=ok
// SIG undefined FUN_1422b4a10(void)

void FUN_1422b4a10(char *param_1,float *param_2,char param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((param_3 == '\0') || (fVar3 = 1.0, param_4 == 1.0)) {
    fVar1 = *param_2;
    *param_2 = 1.0;
  }
  else if ((*param_1 == '\0') || (param_4 == 0.0)) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = _guard_xfg_dispatch_icall_nop(*param_2,param_4);
    if (0.0 < fVar1) {
      fVar3 = _guard_xfg_dispatch_icall_nop(*param_2,1.0 - param_4);
    }
    *param_2 = fVar3;
  }
  fVar2 = fVar1 - *(float *)(param_1 + 8);
  fVar3 = param_5;
  if (fVar2 <= 0.0) {
    fVar3 = -param_5;
  }
  if (param_5 < ABS(fVar2)) {
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + fVar3;
    return;
  }
  *(float *)(param_1 + 8) = fVar1;
  return;
}



// FUNCTION 1422b4b10 FUN_1422b4b10 body=48 status=ok
// SIG undefined FUN_1422b4b10(void)

void FUN_1422b4b10(longlong param_1,float param_2)

{
  if (param_2 == -1.0) {
    param_2 = *(float *)(param_1 + 0x24);
  }
  FAlphaBlend::SetBlendTime(param_1 + 0x28,param_2);
  FAlphaBlend::SetDesiredValue(param_1 + 0x28,0);
  return;
}



// FUNCTION 1422b4b40 FUN_1422b4b40 body=7 status=ok
// SIG undefined FUN_1422b4b40(void)

void FUN_1422b4b40(undefined8 param_1)

{
  FUN_1422b3fc0(param_1,0);
  return;
}



// FUNCTION 1422b4b50 FUN_1422b4b50 body=187 status=ok
// SIG undefined FUN_1422b4b50(void)

void FUN_1422b4b50(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  lVar1 = *param_1;
  iVar3 = iVar4 + -1;
  if (*(float *)((longlong)param_1 + 0x2c) < *(float *)(lVar1 + -0x3c + lVar5 * 0x50)) {
    if (0 < iVar3) {
      iVar2 = (iVar4 - (iVar4 + -2)) + -1;
      if (iVar2 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)(iVar4 + -2) * 0x50 + lVar1),
                   (void *)((longlong)iVar3 * 0x50 + lVar1),(longlong)iVar2 * 0x50);
        iVar4 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar4 + -1;
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_1);
    }
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(lVar1 + -0x3c + lVar5 * 0x50);
    *(undefined4 *)(lVar1 + -4 + lVar5 * 0x50) = 0x40400000;
    return;
  }
  if (iVar3 != 0) {
    *(int *)(param_1 + 1) = iVar3;
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_1);
  }
  return;
}



// FUNCTION 1422b4c10 FUN_1422b4c10 body=49 status=ok
// SIG undefined FUN_1422b4c10(void)

void FUN_1422b4c10(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(int)param_1[1];
  lVar1 = *param_1;
  if (param_2 != 0) {
    if (param_2 == 2) {
      *(undefined4 *)(lVar1 + -4 + lVar2 * 0x50) = 0x40000000;
      return;
    }
    if (param_2 != 3) {
      return;
    }
  }
  *(undefined4 *)(lVar1 + -4 + lVar2 * 0x50) = *(undefined4 *)(lVar1 + -0x3c + lVar2 * 0x50);
  return;
}



// FUNCTION 1422b4c50 FUN_1422b4c50 body=679 status=ok
// SIG undefined FUN_1422b4c50(void)

void FUN_1422b4c50(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_res8 [2];
  float local_res10 [4];
  undefined8 local_res20;
  
  pfVar1 = *(float **)(param_2 + 8);
  fVar5 = 0.0;
  fVar6 = *(float *)((longlong)param_1 + 0x94) * *(float *)(param_2 + 0x10);
  fVar7 = *pfVar1;
  local_res8[0] = 0.0;
  local_res10[0] = fVar7;
  if (*(char *)(param_4 + 0xa1) == '\0') {
    if (*(char *)(param_2 + 0x48) == '\0') {
      fVar4 = *(float *)(param_1 + 0x12) * *(float *)(param_4 + 0x9c);
      fVar7 = *(float *)(param_1 + 0x12) * *(float *)(param_4 + 0x98);
      *pfVar1 = fVar4;
    }
    else if (((*(char *)(param_4 + 0xa0) == '\0') ||
             (local_res20 = 0, *(longlong *)(param_4 + 0x58) == 0)) ||
            (local_res20 = 0, *(longlong *)(param_4 + 0x60) == 0)) {
      local_res10[0] = fVar6 * *(float *)(param_4 + 0x90);
      FUN_1422467d0(param_2 + 0x1c,local_res10,pfVar1,param_1 + 0x12);
      fVar4 = *pfVar1;
    }
    else {
      FUN_1422b5a00(*(undefined4 *)(param_4 + 0x94),*(undefined8 *)(param_2 + 0x40),param_4 + 0x48,
                    pfVar1,local_res10,*(undefined4 *)(param_4 + 0x94),
                    *(undefined1 *)(param_2 + 0x1c));
      fVar4 = *pfVar1;
      fVar7 = local_res10[0];
    }
    if ((fVar4 != fVar7) && (local_res8[0] = fVar4 - fVar7, local_res8[0] * fVar6 < 0.0)) {
      if (fVar6 <= 0.0) {
        if (fVar6 < 0.0) {
          fVar5 = -1.0;
        }
      }
      else {
        fVar5 = 1.0;
      }
      local_res8[0] = fVar5 * *(float *)(param_1 + 0x12) + local_res8[0];
    }
  }
  else {
    local_res8[0] = fVar6 * *(float *)(param_4 + 0x90);
    *(float *)(param_4 + 0x94) = local_res8[0];
    fVar5 = *(float *)(param_1 + 0x12);
    *(float *)(param_4 + 0x98) = fVar7 / fVar5;
    if (local_res8[0] != 0.0) {
      if ((*(char *)(param_2 + 0x48) == '\0') || (*(char *)(param_4 + 0xa0) == '\0')) {
        uVar3 = 0;
        iVar2 = FUN_1422467d0(param_2 + 0x1c,local_res8,pfVar1,local_res8[0]);
        if (iVar2 == 1) {
          uVar3 = 1;
        }
        else if (iVar2 == 2) {
          uVar3 = 2;
        }
        *(undefined4 *)(param_2 + 0x20) = uVar3;
      }
      else {
        FUN_1422b5ab0(fVar7 / fVar5,*(undefined8 *)(param_2 + 0x40),param_4 + 0x48,pfVar1,
                      local_res10,local_res8[0],*(undefined1 *)(param_2 + 0x1c));
        fVar7 = local_res10[0];
      }
    }
    *(float *)(param_4 + 0x9c) = *pfVar1 / *(float *)(param_1 + 0x12);
  }
  (**(code **)(*param_1 + 0x2e0))(param_1,param_4,fVar7,local_res8[0],param_2,param_3);
  return;
}



// FUNCTION 1422b4f00 FUN_1422b4f00 body=2807 status=ok
// SIG undefined FUN_1422b4f00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422b4f00(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined1 **ppuVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  byte bVar14;
  int iVar15;
  longlong *plVar16;
  int *piVar17;
  undefined1 **ppuVar18;
  byte bVar19;
  undefined1 *puVar20;
  longlong lVar21;
  uint uVar22;
  undefined1 *puVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_1e8 [32];
  undefined1 **local_1c8;
  int *local_1c0;
  undefined1 local_1b8;
  char local_1a8;
  char local_1a7;
  float local_1a4;
  undefined1 local_1a0;
  undefined1 local_19f [7];
  undefined8 local_198;
  float local_190 [2];
  longlong local_188;
  undefined1 *local_178;
  undefined1 *puStack_170;
  float local_168;
  uint local_164;
  longlong local_160;
  longlong *local_158;
  float local_150;
  float local_14c;
  float local_148;
  undefined1 **local_140;
  longlong *local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined1 local_118 [48];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  fVar24 = *(float *)(param_4 + 0x90);
  fVar28 = *(float *)(param_2 + 0x28);
  local_1a4 = fVar24 * *(float *)(param_2 + 0x10);
  lVar11 = *(longlong *)(param_2 + 0x30);
  fVar27 = *(float *)(param_2 + 0x2c);
  local_188 = param_4;
  local_160 = param_2;
  local_158 = param_1;
  local_128 = param_3;
  local_150 = (float)FFIRFilterTimeBased::GetFilteredData(lVar11,fVar28,fVar24);
  local_14c = (float)FFIRFilterTimeBased::GetFilteredData(lVar11 + 0x30,fVar27,fVar24);
  local_148 = (float)FFIRFilterTimeBased::GetFilteredData(lVar11 + 0x60,0,fVar24);
  iVar10 = (**(code **)(*param_1 + 0x2b0))(param_1);
  if (iVar10 != 0) {
    fVar25 = 1.0;
    if (((0.0001 < ABS(fVar28 - local_150)) || (0.0001 < ABS(fVar27 - local_14c))) ||
       (0.0001 < ABS(-local_148))) {
      if (iVar10 == 1) {
        if (local_150 != 0.0) {
          fVar25 = fVar28 / local_150;
        }
      }
      else if ((iVar10 == 2) && (local_14c != 0.0)) {
        fVar25 = fVar27 / local_14c;
      }
    }
    fVar28 = *(float *)(param_1 + 0x1f);
    if ((*(float *)(param_1 + 0x1f) <= local_150) &&
       (fVar28 = *(float *)((longlong)param_1 + 0xfc),
       local_150 <= *(float *)((longlong)param_1 + 0xfc))) {
      fVar28 = local_150;
    }
    fVar27 = *(float *)(param_1 + 0x23);
    if ((*(float *)(param_1 + 0x23) <= local_14c) &&
       (fVar27 = *(float *)((longlong)param_1 + 0x11c),
       local_14c <= *(float *)((longlong)param_1 + 0x11c))) {
      fVar27 = local_14c;
    }
    fVar26 = *(float *)(param_1 + 0x27);
    if ((*(float *)(param_1 + 0x27) <= local_148) &&
       (fVar26 = *(float *)((longlong)param_1 + 0x13c),
       local_148 <= *(float *)((longlong)param_1 + 0x13c))) {
      fVar26 = local_148;
    }
    if (((0.0001 < ABS(fVar28 - local_150)) || (0.0001 < ABS(fVar27 - local_14c))) ||
       (0.0001 < ABS(fVar26 - local_148))) {
      if (iVar10 == 1) {
        if (fVar28 != 0.0) {
          fVar25 = fVar25 * (local_150 / fVar28);
        }
      }
      else if ((iVar10 == 2) && (fVar27 != 0.0)) {
        fVar25 = fVar25 * (local_14c / fVar27);
      }
    }
    local_1a4 = local_1a4 * fVar25;
  }
  puStack_170 = &local_1a0;
  local_1a0 = 0;
  local_178 = &LAB_1422a69a0;
  lVar11 = FUN_1415d8310(&local_178,&DAT_146531aa4);
  local_19f[0] = 0;
  plVar16 = (longlong *)(lVar11 + 0x18);
  puStack_170 = local_19f;
  local_178 = &LAB_1422a69a0;
  local_138 = plVar16;
  lVar11 = FUN_1415d8310(&local_178,&DAT_146531aa4);
  ppuVar18 = (undefined1 **)(lVar11 + 0x28);
  local_140 = ppuVar18;
  TArray<FBlendSampleData,FDefaultAllocator>::Append<FBlendSampleData,FDefaultAllocator>
            (plVar16,*(undefined8 *)(param_2 + 0x38));
  TArray<FBlendSampleData,FDefaultAllocator>::Reset(*(undefined8 *)(param_2 + 0x38),0);
  ppuVar1 = *(undefined1 ***)(param_2 + 0x38);
  cVar9 = FUN_1422acfa0(param_1,&local_150);
  if (cVar9 != '\0') {
    fVar28 = 0.0;
    local_168 = 0.0;
    fVar27 = 0.0;
    if (*(float *)(param_1 + 0x15) <= 0.0) {
      TArray<FBlendSampleData,FDefaultAllocator>::Append<FBlendSampleData,FDefaultAllocator>
                (ppuVar1,ppuVar18);
    }
    else {
      fVar28 = (float)UBlendSpaceBase::GetAnimationLengthFromSampleData(param_1);
      if ((*(byte *)(param_2 + 0x1d) & 1) != 0) {
        fVar27 = (float)FUN_1422acd00(param_1,ppuVar18);
      }
      local_1c8 = ppuVar1;
      cVar9 = UBlendSpaceBase::InterpolateWeightOfSampleData(param_1,fVar24,plVar16,ppuVar18);
      if (cVar9 == '\0') {
        if (ppuVar1 != ppuVar18) {
          iVar10 = *(int *)(ppuVar1 + 1);
          if (iVar10 != 0) {
            plVar16 = (longlong *)(*ppuVar1 + 0x30);
            do {
              if (*plVar16 != 0) {
                FMemory::Free();
              }
              plVar16 = plVar16 + 8;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
          local_1c8 = (undefined1 **)((ulonglong)local_1c8 & 0xffffffff00000000);
          TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>::CopyToEmpty<FBlendSampleData,int>
                    (ppuVar1,*local_140,*(int *)(local_140 + 1),*(int *)((longlong)ppuVar1 + 0xc));
          plVar16 = local_138;
        }
      }
      else {
        FBlendSampleData::NormalizeDataWeight(ppuVar1);
      }
    }
    if (((int)param_1[0x18] == -1) ||
       ((*(char *)(param_4 + 0xa2) == '\0' &&
        ((*(char *)(param_2 + 0x48) == '\0' || (*(char *)(param_4 + 0xa0) == '\0')))))) {
      bVar14 = 0;
    }
    else {
      lVar11 = *plVar16;
      bVar14 = 1;
      lVar21 = (longlong)(int)plVar16[1] * 0x40 + lVar11;
      for (; lVar11 != lVar21; lVar11 = lVar11 + 0x40) {
        puVar13 = *ppuVar1;
        puVar20 = puVar13 + (longlong)*(int *)(ppuVar1 + 1) * 0x40;
        for (; puVar13 != puVar20; puVar13 = puVar13 + 0x40) {
          if ((*(longlong *)(lVar11 + 8) != 0) &&
             (*(longlong *)(lVar11 + 8) == *(longlong *)(puVar13 + 8))) {
            *(undefined4 *)(puVar13 + 0x14) = *(undefined4 *)(lVar11 + 0x14);
            *(undefined4 *)(puVar13 + 0x18) = *(undefined4 *)(lVar11 + 0x18);
            uVar6 = *(undefined4 *)(lVar11 + 0x24);
            uVar7 = *(undefined4 *)(lVar11 + 0x28);
            uVar8 = *(undefined4 *)(lVar11 + 0x2c);
            *(undefined4 *)(puVar13 + 0x20) = *(undefined4 *)(lVar11 + 0x20);
            *(undefined4 *)(puVar13 + 0x24) = uVar6;
            *(undefined4 *)(puVar13 + 0x28) = uVar7;
            *(undefined4 *)(puVar13 + 0x2c) = uVar8;
          }
        }
      }
    }
    fVar24 = (float)UBlendSpaceBase::GetAnimationLengthFromSampleData(param_1,ppuVar1);
    if ((0.0 < fVar28) && (0.0 < fVar24)) {
      local_1a4 = local_1a4 * (fVar28 / fVar24);
    }
    fVar28 = local_1a4;
    local_168 = fVar24;
    if ((((*(byte *)(param_2 + 0x1d) & 1) != 0) && (0.0 < fVar27)) &&
       (fVar25 = (float)FUN_1422acd00(param_1,ppuVar1), 0.0 < fVar25)) {
      local_1a4 = fVar28 * (fVar27 / fVar25);
    }
    pfVar2 = *(float **)(param_2 + 8);
    fVar28 = *pfVar2;
    if (*(char *)(param_4 + 0xa1) == '\0') {
      if ((*(longlong *)(param_4 + 0x58) == 0) || (*(longlong *)(param_4 + 0x60) == 0)) {
        bVar19 = 0;
      }
      else {
        bVar19 = 1;
      }
      local_198 = 0;
      if ((bVar19 & bVar14) == 0) {
        fVar28 = *(float *)(param_4 + 0x98);
        fVar24 = *(float *)(param_4 + 0x9c);
        local_164 = local_164 & 0xffffff00;
      }
      else {
        iVar10 = FBlendSpaceUtilities::GetHighestWeightSample(ppuVar1);
        lVar11 = param_1[0x19];
        piVar17 = (int *)(*ppuVar1 + (longlong)iVar10 * 0x40);
        iVar10 = *piVar17;
        if (*(float *)(local_188 + 0x90) != 0.0) {
          if ((**(int **)(local_160 + 0x40) == -2) || ((*(int **)(local_160 + 0x40))[2] == -2)) {
            piVar17[5] = (int)(fVar28 * *(float *)(*(longlong *)(lVar11 + (longlong)iVar10 * 0x18) +
                                                  0x90));
          }
          local_1c8 = (undefined1 **)((ulonglong)local_1c8 & 0xffffffffffffff00);
          FUN_1422b5c30(local_158,ppuVar1,0xffffffff,local_188);
        }
        uVar12 = *(undefined8 *)(piVar17 + 10);
        local_164 = CONCAT31(local_164._1_3_,bVar19 & bVar14);
        puVar3 = *(undefined8 **)(local_160 + 0x40);
        *puVar3 = *(undefined8 *)(piVar17 + 8);
        puVar3[1] = uVar12;
        fVar24 = (float)piVar17[5] /
                 *(float *)(*(longlong *)(lVar11 + (longlong)iVar10 * 0x18) + 0x90);
        param_4 = local_188;
      }
      *pfVar2 = fVar24;
    }
    else {
      *(float *)(param_4 + 0x98) = fVar28;
      if (bVar14 == 0) {
        iVar10 = -1;
      }
      else {
        iVar10 = FUN_1422ab540(ppuVar1,param_1 + 0x19);
      }
      local_164 = 0;
      if (iVar10 != -1) {
        local_164 = (uint)bVar14;
      }
      if ((char)local_164 == '\0') {
        local_190[0] = fVar24 * *pfVar2;
        FUN_1422467d0(param_2 + 0x1c,&local_1a4,local_190,&local_168);
        if ((*(byte *)(param_2 + 0x1d) & 2) == 0) {
          fVar24 = local_1a4 + *pfVar2;
        }
        else if (local_168 == 0.0) {
          fVar24 = 0.0;
        }
        else {
          fVar24 = local_190[0] / local_168;
        }
        *pfVar2 = fVar24;
      }
      else {
        lVar11 = param_1[0x19];
        piVar17 = (int *)(*ppuVar1 + (longlong)iVar10 * 0x40);
        local_1a8 = 0;
        lVar21 = (longlong)*piVar17;
        if ((**(int **)(param_2 + 0x40) == -2) || ((*(int **)(param_2 + 0x40))[2] == -2)) {
          piVar17[8] = -2;
          piVar17[10] = -2;
          local_1a8 = 1;
          piVar17[5] = (int)(*(float *)(*(longlong *)(lVar11 + lVar21 * 0x18) + 0x90) * *pfVar2);
        }
        else if ((piVar17[8] == -2) || (piVar17[10] == -2)) {
          local_198 = 0;
          if ((*(longlong *)(local_188 + 0x58) != 0) &&
             (local_198 = 0, *(longlong *)(local_188 + 0x60) != 0)) {
            plVar16 = *(longlong **)(lVar11 + lVar21 * 0x18);
            local_1c8 = (undefined1 **)(piVar17 + 10);
            local_1c0 = piVar17 + 5;
            (**(code **)(*plVar16 + 0x310))
                      (plVar16,(longlong *)(local_188 + 0x58),
                       CONCAT71((int7)((ulonglong)local_1c8 >> 8),1),piVar17 + 8);
          }
        }
        fVar24 = *(float *)(local_160 + 0x10) * *(float *)(local_188 + 0x90) *
                 *(float *)(lVar11 + 0x14 + lVar21 * 0x18);
        if (1e-08 < ABS(fVar24)) {
          *(float *)(local_188 + 0x94) = fVar24;
          local_1c8 = (undefined1 **)(piVar17 + 6);
          local_1b8 = 1;
          local_1c0 = (int *)CONCAT44(local_1c0._4_4_,fVar24);
          FUN_1422b5ab0(*(undefined8 *)(lVar11 + lVar21 * 0x18),piVar17 + 8,local_188 + 0x48,
                        piVar17 + 5);
          local_1c8 = (undefined1 **)CONCAT71(local_1c8._1_7_,local_1a8);
          FUN_1422b5c30(local_158,ppuVar1,iVar10,local_188);
        }
        *pfVar2 = (float)piVar17[5] / *(float *)(*(longlong *)(lVar11 + lVar21 * 0x18) + 0x90);
        puVar3 = *(undefined8 **)(local_160 + 0x40);
        uVar12 = *(undefined8 *)(piVar17 + 10);
        *puVar3 = *(undefined8 *)(piVar17 + 8);
        puVar3[1] = uVar12;
        fVar24 = *pfVar2;
        param_4 = local_188;
      }
      *(float *)(param_4 + 0x9c) = fVar24;
      fVar24 = *pfVar2;
    }
    iVar10 = -1;
    puVar13 = (undefined1 *)0x0;
    local_178 = (undefined1 *)0x0;
    puStack_170 = (undefined1 *)0x0;
    if (0.0 <= fVar28) {
      fVar27 = fVar28;
      if (1.0 <= fVar28) {
        fVar27 = 1.0;
      }
    }
    else {
      fVar27 = 0.0;
    }
    if (0.0 <= fVar24) {
      fVar25 = fVar24;
      if (1.0 <= fVar24) {
        fVar25 = 1.0;
      }
    }
    else {
      fVar25 = 0.0;
    }
    if ((fVar24 == fVar28) || (*(char *)((longlong)local_158 + 0xac) == '\x02')) {
      local_1a8 = '\0';
    }
    else {
      local_1a8 = '\x01';
    }
    if ((*(char *)((longlong)local_158 + 0xac) != '\x01') ||
       (local_1a7 = '\x01', *(int *)(ppuVar1 + 1) < 1)) {
      local_1a7 = '\0';
    }
    if ((local_1a8 != '\0') && (local_1a7 != '\0')) {
      iVar10 = FBlendSpaceUtilities::GetHighestWeightSample(ppuVar1);
    }
    iVar15 = 0;
    if (0 < *(int *)(ppuVar1 + 1)) {
      local_130 = (undefined1 *)(longlong)iVar10;
      puVar20 = puVar13;
      puVar23 = puVar13;
      do {
        puVar4 = *ppuVar1;
        iVar10 = *(int *)(puVar13 + (longlong)puVar4);
        lVar11 = (longlong)iVar10;
        if (((-1 < iVar10) && (iVar10 < (int)local_158[0x1a])) &&
           (1e-05 < *(float *)(puVar13 + 0x10 + (longlong)puVar4))) {
          lVar21 = local_158[0x19];
          lVar5 = *(longlong *)(lVar21 + lVar11 * 0x18);
          param_4 = local_188;
          if (lVar5 != 0) {
            fVar24 = *(float *)(lVar5 + 0x94) * *(float *)(lVar21 + 0x14 + lVar11 * 0x18);
            if (((char)local_164 == '\0') || (*(int *)(lVar5 + 0x1a8) == 0)) {
              fVar26 = fVar25;
              fVar28 = fVar27;
              if (fVar24 < 0.0) {
                fVar26 = 1.0 - fVar25;
                fVar28 = 1.0 - fVar27;
              }
              fVar28 = *(float *)(lVar5 + 0x90) * fVar28;
              fVar26 = *(float *)(lVar5 + 0x90) * fVar26;
              *(float *)(puVar13 + 0x14 + (longlong)puVar4) = fVar26;
            }
            else {
              fVar28 = *(float *)(puVar13 + 0x18 + (longlong)puVar4);
              fVar26 = *(float *)(puVar13 + 0x14 + (longlong)puVar4);
            }
            fVar24 = fVar24 * local_1a4;
            fVar26 = fVar26 - fVar28;
            local_198 = CONCAT44(local_198._4_4_,fVar28);
            if (fVar26 * fVar24 < 0.0) {
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
              fVar26 = fVar24 * *(float *)(*(longlong *)(lVar21 + lVar11 * 0x18) + 0x90) + fVar26;
            }
            local_190[0] = fVar26;
            if ((local_1a8 != '\0') && ((local_1a7 == '\0' || (puVar23 == local_130)))) {
              local_1c8 = &local_178;
              FUN_1422a8210(*(undefined8 *)(lVar21 + lVar11 * 0x18),&local_198,local_190,
                            *(undefined1 *)(local_160 + 0x1c));
            }
            param_4 = local_188;
            if ((*(int *)(local_188 + 0x40) == 2) &&
               (lVar11 = *(longlong *)(lVar21 + lVar11 * 0x18), *(char *)(lVar11 + 0x199) != '\0'))
            {
              fVar24 = *(float *)(puVar13 + 0x10 + (longlong)puVar4);
              if (0.0 <= fVar24) {
                if (1.0 <= fVar24) {
                  fVar24 = 1.0;
                }
              }
              else {
                fVar24 = 0.0;
              }
              local_1c8 = (undefined1 **)CONCAT71(local_1c8._1_7_,*(undefined1 *)(local_160 + 0x1c))
              ;
              uVar12 = FUN_142291830(lVar11,local_118,fVar28,fVar26);
              param_4 = local_188;
              FRootMotionMovementParams::AccumulateWithBlend(local_188,uVar12,fVar24);
            }
          }
        }
        uVar22 = (int)puVar20 + 1;
        puVar20 = (undefined1 *)(ulonglong)uVar22;
        puVar23 = puVar23 + 1;
        puVar13 = puVar13 + 0x40;
      } while ((int)uVar22 < *(int *)(ppuVar1 + 1));
      puVar13 = local_178;
      iVar15 = (int)puStack_170;
    }
    if ((local_1a8 != '\0') && (0 < iVar15)) {
      FAnimNotifyQueue::AddAnimNotifies
                (local_128,*(undefined1 *)(param_4 + 0xa1),&local_178,
                 *(undefined4 *)(local_160 + 0x14));
      puVar13 = local_178;
    }
    ppuVar18 = local_140;
    plVar16 = local_138;
    if (puVar13 != (undefined1 *)0x0) {
      FMemory::Free(puVar13);
      ppuVar18 = local_140;
      plVar16 = local_138;
    }
  }
  TArray<FBlendSampleData,FDefaultAllocator>::Reset(plVar16,0);
  TArray<FBlendSampleData,FDefaultAllocator>::Reset(ppuVar18,0);
  return;
}



// FUNCTION 1422b5a00 FUN_1422b5a00 body=172 status=ok
// SIG undefined FUN_1422b5a00(void)

void FUN_1422b5a00(longlong *param_1,int *param_2,longlong param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined1 param_7)

{
  if ((*param_2 == -2) || (param_2[2] == -2)) {
    (**(code **)(*param_1 + 0x310))(param_1,param_3 + 0x10,param_7,param_2,param_2 + 2,param_4);
  }
  *param_5 = *param_4;
                    /* WARNING: Could not recover jumptable at 0x0001422b5aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f8))(param_1,param_3,param_6,param_7);
  return;
}



// FUNCTION 1422b5ab0 FUN_1422b5ab0 body=375 status=ok
// SIG undefined FUN_1422b5ab0(void)

void FUN_1422b5ab0(longlong *param_1,int *param_2,longlong param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined1 param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar10;
  int *piVar9;
  undefined1 local_38 [32];
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  piVar1 = param_2 + 2;
  if ((*param_2 == -2) || (iVar2 = *piVar1, iVar2 == -2)) {
    if ((*(longlong *)(param_3 + 0x10) == 0) || (*(longlong *)(param_3 + 0x18) == 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      piVar9 = piVar1;
      (**(code **)(*param_1 + 0x310))
                (param_1,(longlong *)(param_3 + 0x10),param_7,param_2,piVar1,param_4);
      uVar10 = (undefined4)((ulonglong)piVar9 >> 0x20);
    }
    else {
      piVar9 = param_2;
      (**(code **)(*param_1 + 0x300))
                (param_1,*param_4,param_7,*(undefined8 *)(param_3 + 0x40),param_2,piVar1);
      uVar10 = (undefined4)((ulonglong)piVar9 >> 0x20);
    }
    iVar2 = *piVar1;
  }
  puVar7 = (undefined4 *)
           (**(code **)(*param_1 + 0x308))
                     (param_1,local_38,*param_2,iVar2,CONCAT44(uVar10,*param_4));
  uVar10 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *(undefined4 *)(param_3 + 0x10) = *puVar7;
  *(undefined4 *)(param_3 + 0x14) = uVar10;
  *(undefined4 *)(param_3 + 0x18) = uVar3;
  *(undefined4 *)(param_3 + 0x1c) = uVar4;
  *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(puVar7 + 4);
  *param_5 = *param_4;
  (**(code **)(*param_1 + 0x2f0))
            (param_1,param_7,param_6,*(undefined8 *)(param_3 + 0x40),param_4,param_2,piVar1,param_3)
  ;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x308))(param_1,local_38,*param_2,*piVar1,*param_4)
  ;
  uVar5 = puVar8[1];
  *(undefined8 *)(param_3 + 0x28) = *puVar8;
  *(undefined8 *)(param_3 + 0x30) = uVar5;
  *(undefined8 *)(param_3 + 0x38) = puVar8[2];
  return;
}



// FUNCTION 1422b5c30 FUN_1422b5c30 body=224 status=ok
// SIG undefined FUN_1422b5c30(void)

void FUN_1422b5c30(longlong param_1,longlong *param_2,int param_3,longlong param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < (int)param_2[1]) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      lVar2 = *param_2;
      iVar1 = *(int *)(lVar5 + lVar2);
      lVar3 = *(longlong *)(param_1 + 200);
      if (param_3 != lVar6) {
        puVar4 = (undefined4 *)(lVar2 + 0x20 + lVar5);
        if (param_5 != '\0') {
          *puVar4 = 0xfffffffe;
          puVar4[2] = 0xfffffffe;
        }
        lVar3 = *(longlong *)(lVar3 + (longlong)iVar1 * 0x18);
        if (0 < *(int *)(lVar3 + 0x1a8)) {
          FUN_1422b5a00(lVar3,puVar4,param_4 + 0x48,lVar2 + 0x14 + lVar5,lVar2 + 0x18 + lVar5,
                        *(undefined4 *)(param_4 + 0x94),1);
        }
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x40;
    } while (iVar7 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1422b5d10 FUN_1422b5d10 body=712 status=ok
// SIG undefined FUN_1422b5d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422b5d10(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 auStack_e8 [32];
  int local_c8;
  uint uStack_c4;
  uint *puStack_c0;
  uint local_b8;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  int local_58 [4];
  int *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    local_48 = (int *)0x0;
    local_40 = 0;
    FUN_14225e400(param_2,local_58);
    uVar4 = *(uint *)(param_1 + 5);
    puVar1 = (uint *)(param_1 + 2);
    uStack_c4 = 1;
    local_c8 = 0;
    uStack_b4 = 0;
    iStack_b0 = 0;
    if (uVar4 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar5 = *puVar15;
      iStack_b0 = 0;
      local_c8 = 0;
      while (uVar5 == 0) {
        lVar13 = (longlong)local_c8;
        iStack_b0 = iStack_b0 + 0x20;
        iVar11 = local_c8 + 1;
        bVar8 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
        local_c8 = iVar11;
        if (bVar8) goto LAB_1422b5e0c;
        uVar5 = puVar15[lVar13 + 1];
      }
      uStack_c4 = -uVar5 & uVar5;
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
      uStack_b4 = (iStack_b0 - iVar11) + 0x1f;
      if ((int)uVar4 < (int)uStack_b4) {
LAB_1422b5e0c:
        uStack_b4 = uVar4;
      }
    }
    uVar5 = *(uint *)(param_1 + 5);
    uStack_90 = 0xffffffff;
    uStack_8c = uStack_b4;
    local_88 = CONCAT44(uStack_ac,iStack_b0);
    uStack_78 = CONCAT44(uStack_c4,local_c8);
    local_b8 = -1 << ((byte)uVar5 & 0x1f);
    uVar14 = uVar5 & 0xffffffe0;
    local_80._0_4_ = SUB84(param_1,0);
    local_80._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
    local_a8 = (undefined4)local_80;
    uStack_a4 = local_80._4_4_;
    iStack_a0 = local_c8;
    uStack_9c = uStack_c4;
    puStack_c0 = puVar1;
    uStack_b4 = uVar5;
    local_98 = puVar1;
    local_80 = param_1;
    puStack_70 = puVar1;
    uStack_60 = local_88;
    uStack_68 = uStack_90;
    uStack_64 = uStack_8c;
    if (uVar5 != uVar4) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar12 = puVar15[(int)uVar5 >> 5] & local_b8;
      iVar11 = (int)uVar5 >> 5;
      while (uVar12 == 0) {
        uVar14 = uVar14 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
        goto LAB_1422b5ed2;
        uVar12 = puVar15[(longlong)iVar11 + 1];
        local_b8 = 0xffffffff;
        iVar11 = iVar11 + 1;
      }
      uVar12 = -uVar12 & uVar12;
      iVar11 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_b4 = (uVar14 - iVar11) + 0x1f;
      uVar5 = uStack_b4;
      if ((int)uVar4 < (int)uStack_b4) {
LAB_1422b5ed2:
        uStack_b4 = uVar4;
        uVar5 = uVar4;
      }
    }
    while( true ) {
      if (((uStack_8c == uVar5) && (local_98 == puVar1)) &&
         ((longlong *)CONCAT44(uStack_a4,local_a8) == param_1)) break;
      lVar13 = *(longlong *)CONCAT44(uStack_a4,local_a8);
      lVar6 = *(longlong *)(lVar13 + 8 + (longlong)(int)uStack_8c * 0x18);
      piVar2 = (int *)(lVar13 + (longlong)(int)uStack_8c * 0x18);
      lVar13 = *(longlong *)(lVar6 + 0x28);
      if ((lVar13 == 0) || (lVar13 == DAT_1468c21b0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      piVar10 = local_58;
      if (local_48 != (int *)0x0) {
        piVar10 = local_48;
      }
      piVar3 = piVar10 + (int)local_40;
      if (piVar10 != piVar3) {
        do {
          if (*piVar10 == *piVar2) {
            bVar9 = true;
            goto LAB_1422b5f66;
          }
          piVar10 = piVar10 + 1;
        } while (piVar10 != piVar3);
      }
      bVar9 = false;
LAB_1422b5f66:
      if ((bVar8) && (!bVar9)) {
        *(undefined8 *)(lVar6 + 0x28) = 0;
        plVar7 = *(longlong **)(piVar2 + 2);
        (**(code **)(*plVar7 + 0x298))(plVar7,CONCAT71((int7)((ulonglong)piVar3 >> 8),1));
      }
      uStack_90 = uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
    }
    if (local_48 != (int *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1422b5fe0 FUN_1422b5fe0 body=581 status=ok
// SIG undefined FUN_1422b5fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422b5fe0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined8 *puVar9;
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
  undefined1 local_78 [8];
  float local_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [48];
  
  FAlphaBlend::Update(param_1 + 0x38);
  fVar1 = *(float *)(param_1 + 0x58);
  local_70 = (*(float *)(param_1 + 0xcc) - *(float *)(param_1 + 0x84)) * fVar1 +
             *(float *)(param_1 + 0x84);
  *(ulonglong *)(param_1 + 0xa0) =
       CONCAT44((*(float *)(param_1 + 200) - *(float *)(param_1 + 0x80)) * fVar1 +
                *(float *)(param_1 + 0x80),
                (*(float *)(param_1 + 0xc4) - *(float *)(param_1 + 0x7c)) * fVar1 +
                *(float *)(param_1 + 0x7c));
  *(float *)(param_1 + 0xa8) = local_70;
  uVar6 = FRotator::Quaternion(param_1 + 0xd0,local_58);
  uVar7 = FRotator::Quaternion(param_1 + 0x88,local_48);
  pfVar8 = (float *)FQuat::Slerp_NotNormalized(local_38,uVar7,uVar6,fVar1);
  fVar2 = *pfVar8;
  fVar3 = pfVar8[1];
  fVar4 = pfVar8[2];
  fVar5 = pfVar8[3];
  auVar10._0_4_ = fVar2 * fVar2 + fVar4 * fVar4;
  auVar10._4_4_ = fVar3 * fVar3 + fVar5 * fVar5;
  auVar10._8_4_ = fVar4 * fVar4 + fVar2 * fVar2;
  auVar10._12_4_ = fVar5 * fVar5 + fVar3 * fVar3;
  fVar16 = auVar10._4_4_ + auVar10._0_4_;
  fVar17 = auVar10._8_4_ + auVar10._4_4_;
  fVar18 = auVar10._12_4_ + auVar10._8_4_;
  fVar19 = auVar10._0_4_ + auVar10._12_4_;
  auVar11._4_4_ = fVar17;
  auVar11._0_4_ = fVar16;
  auVar11._8_4_ = fVar18;
  auVar11._12_4_ = fVar19;
  auVar11 = rsqrtps(auVar10,auVar11);
  fVar12 = auVar11._0_4_;
  fVar13 = auVar11._4_4_;
  fVar14 = auVar11._8_4_;
  fVar15 = auVar11._12_4_;
  fVar12 = (_DAT_146aef270 - fVar12 * fVar12 * fVar16 * _DAT_146aef270) * fVar12 + fVar12;
  fVar13 = (fRam0000000146aef274 - fVar13 * fVar13 * fVar17 * fRam0000000146aef274) * fVar13 +
           fVar13;
  fVar14 = (fRam0000000146aef278 - fVar14 * fVar14 * fVar18 * fRam0000000146aef278) * fVar14 +
           fVar14;
  fVar15 = (fRam0000000146aef27c - fVar15 * fVar15 * fVar19 * fRam0000000146aef27c) * fVar15 +
           fVar15;
  local_68 = ((uint)(((_DAT_146aef270 - fVar12 * fVar12 * fVar16 * _DAT_146aef270) * fVar12 + fVar12
                     ) * fVar2) ^ _DAT_146aef260) & -(uint)(1e-08 <= fVar16) ^ _DAT_146aef260;
  uStack_64 = ((uint)(((fRam0000000146aef274 - fVar13 * fVar13 * fVar17 * fRam0000000146aef274) *
                       fVar13 + fVar13) * fVar3) ^ uRam0000000146aef264) & -(uint)(1e-08 <= fVar17)
              ^ uRam0000000146aef264;
  uStack_60 = ((uint)(((fRam0000000146aef278 - fVar14 * fVar14 * fVar18 * fRam0000000146aef278) *
                       fVar14 + fVar14) * fVar4) ^ uRam0000000146aef268) & -(uint)(1e-08 <= fVar18)
              ^ uRam0000000146aef268;
  uStack_5c = ((uint)(((fRam0000000146aef27c - fVar15 * fVar15 * fVar19 * fRam0000000146aef27c) *
                       fVar15 + fVar15) * fVar5) ^ uRam0000000146aef26c) & -(uint)(1e-08 <= fVar19)
              ^ uRam0000000146aef26c;
  puVar9 = (undefined8 *)FRotator::FRotator(local_78,&local_68);
  *(undefined8 *)(param_1 + 0xac) = *puVar9;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(puVar9 + 1);
  *(ulonglong *)(param_1 + 0xb8) =
       CONCAT44((*(float *)(param_1 + 0xe0) - *(float *)(param_1 + 0x98)) * fVar1 +
                *(float *)(param_1 + 0x98),
                (*(float *)(param_1 + 0xdc) - *(float *)(param_1 + 0x94)) * fVar1 +
                *(float *)(param_1 + 0x94));
  *(float *)(param_1 + 0xc0) =
       (*(float *)(param_1 + 0xe4) - *(float *)(param_1 + 0x9c)) * fVar1 +
       *(float *)(param_1 + 0x9c);
  return;
}



// FUNCTION 1422b6230 FUN_1422b6230 body=125 status=ok
// SIG undefined FUN_1422b6230(void)

void FUN_1422b6230(longlong param_1,undefined4 param_2)

{
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  *(short *)(param_1 + 0x330) = *(short *)(param_1 + 0x330) + 1;
  *(undefined8 *)(param_1 + 0x328) = DAT_1468c21b0;
  if (*(short *)(param_1 + 0x330) == -1) {
    *(undefined2 *)(param_1 + 0x330) = 0;
  }
  SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_38,param_1);
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = param_2;
  (**(code **)(*(longlong *)(param_1 + 0x710) + 0x10))((longlong *)(param_1 + 0x710),local_38);
  return;
}



// FUNCTION 1422b62b0 FUN_1422b62b0 body=216 status=ok
// SIG undefined FUN_1422b62b0(void)

void FUN_1422b62b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  undefined4 local_18 [2];
  undefined4 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x708);
  if (lVar1 != 0) {
    lVar3 = UBlendSpaceBase::GetPrivateStaticClass();
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
      local_res8[0] = 0;
      local_18[0] = 0xfffffffe;
      local_10 = 0xfffffffe;
      FUN_1422584b0(param_1,lVar1,param_2,param_1 + 0x780,param_1 + 0x790,0,0x3f800000,0,local_res8,
                    local_18);
    }
  }
  return;
}



// FUNCTION 1422b6390 UpdateMarkerIndexForPosition body=227 status=ok
// SIG undefined UpdateMarkerIndexForPosition(void)

void FTimeStretchCurveInstance::UpdateMarkerIndexForPosition
               (undefined8 param_1,int *param_2,float param_3,longlong *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *param_2;
  if ((iVar5 < 0) || (iVar7 = (int)param_4[1] + -2, iVar7 < iVar5)) {
    iVar6 = 0;
    iVar7 = (int)param_4[1] + -2;
    iVar5 = -1;
    if (-1 < iVar7) {
      do {
        iVar5 = (iVar7 + iVar6) / 2;
        fVar2 = *(float *)(*param_4 + (longlong)iVar5 * 4);
        fVar3 = *(float *)(*param_4 + 4 + (longlong)iVar5 * 4);
        if ((fVar2 <= param_3) && (param_3 <= fVar3)) break;
        if (param_3 <= fVar3) {
          if (fVar2 <= param_3) break;
          iVar7 = iVar5 + -1;
        }
        else {
          iVar6 = iVar5 + 1;
        }
      } while (iVar6 <= iVar7);
    }
  }
  else {
    lVar4 = *param_4;
    if ((*(float *)(lVar4 + (longlong)iVar5 * 4) <= param_3) &&
       (pfVar1 = (float *)(lVar4 + 4 + (longlong)iVar5 * 4), param_3 < *pfVar1 || param_3 == *pfVar1
       )) {
      return;
    }
    iVar6 = 0;
    iVar5 = -1;
    if (-1 < iVar7) {
      while( true ) {
        iVar5 = (iVar7 + iVar6) / 2;
        fVar2 = *(float *)(lVar4 + (longlong)iVar5 * 4);
        fVar3 = *(float *)(lVar4 + 4 + (longlong)iVar5 * 4);
        if ((fVar2 <= param_3) && (param_3 <= fVar3)) break;
        if (param_3 <= fVar3) {
          if (fVar2 <= param_3) break;
          iVar7 = iVar5 + -1;
        }
        else {
          iVar6 = iVar5 + 1;
        }
        if (iVar7 < iVar6) {
          *param_2 = iVar5;
          return;
        }
      }
    }
  }
  *param_2 = iVar5;
  return;
}



// FUNCTION 1422b6480 FUN_1422b6480 body=102 status=ok
// SIG undefined FUN_1422b6480(void)

void FUN_1422b6480(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_142274c40(param_1,local_res10,param_1 + 0x824,param_1 + 0x820,param_1 + 0x828);
  FUN_142285ab0(param_1,local_res10,*(undefined4 *)(param_1 + 0x824),param_3);
  return;
}



// FUNCTION 1422b64f0 FUN_1422b64f0 body=1085 status=ok
// SIG undefined FUN_1422b64f0(void)

void FUN_1422b64f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar9;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x58);
  fVar6 = *(float *)(lVar1 + 0x840);
  if (*(char *)(lVar1 + 0x845) == '\0') {
    fVar6 = 0.0;
  }
  lVar1 = *(longlong *)(lVar1 + 0x708);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = UBlendSpaceBase::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    uVar4 = FUN_14225c6d0(*(undefined8 *)(param_1 + 0x58),0xffffffff,local_res8);
    lVar3 = *(longlong *)(param_1 + 0x58);
    FUN_142277750(lVar3,uVar4,lVar1,lVar3 + 0x770,lVar3 + 0x780,lVar3 + 0x790,
                  *(undefined1 *)(lVar3 + 0x844),CONCAT44(uVar9,fVar6),0x3f800000,lVar3 + 0x82c,
                  lVar3 + 0x830);
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x708);
  if (lVar1 == 0) {
LAB_1422b6705:
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x708);
    if (lVar1 != 0) {
      lVar3 = FUN_1428ea3a0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar4 = FUN_14225c6d0(*(undefined8 *)(param_1 + 0x58),0xffffffff,local_res8);
        lVar3 = *(longlong *)(param_1 + 0x58);
        FUN_1422777c0(lVar3,uVar4,lVar1,*(undefined1 *)(lVar3 + 0x844),CONCAT44(uVar7,fVar6),
                      CONCAT44(uVar8,0x3f800000),lVar3 + 0x82c,lVar3 + 0x830);
        lVar3 = *(longlong *)(param_1 + 0x58);
        if (*(char *)(lVar3 + 0x844) != '\0') {
          return;
        }
        fVar6 = fVar6 * *(float *)(lVar1 + 0x94);
        if ((0.0 <= fVar6) || (0.0 < *(float *)(lVar3 + 0x82c))) {
          if (fVar6 <= 0.0) {
            return;
          }
          if (*(float *)(lVar3 + 0x82c) <= *(float *)(lVar1 + 0x90) &&
              *(float *)(lVar1 + 0x90) != *(float *)(lVar3 + 0x82c)) {
            return;
          }
        }
        goto LAB_1422b67f1;
      }
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x708);
    if (lVar1 != 0) {
      lVar3 = UMaterialInstanceConstant::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if (0 < *(int *)(lVar1 + 0x180)) {
          FUN_1422b6480(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x48),0x3f800000);
        }
        lVar3 = FUN_14225e220(*(undefined8 *)(param_1 + 0x58));
        lVar1 = *(longlong *)(param_1 + 0x58);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar1 + 0x82c) = *(undefined4 *)(lVar3 + 0x10);
          return;
        }
        if (*(char *)(lVar1 + 0x845) == '\0') {
          return;
        }
        *(undefined1 *)(lVar1 + 0x845) = 0;
        return;
      }
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x708);
    if (lVar1 != 0) {
      lVar3 = UPoseAsset::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar4 = FUN_14225c6d0(*(undefined8 *)(param_1 + 0x58),0xffffffff,local_res8);
        FAnimInstanceProxy::MakePoseAssetTickRecord
                  (*(undefined8 *)(param_1 + 0x58),uVar4,lVar1,0x3f800000);
      }
    }
  }
  else {
    lVar3 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1422b6705;
    lVar5 = FUN_14225c6d0(*(undefined8 *)(param_1 + 0x58),0xffffffff,local_res8);
    lVar3 = *(longlong *)(param_1 + 0x58);
    FUN_1422777c0(lVar3,lVar5,lVar1,*(undefined1 *)(lVar3 + 0x844),CONCAT44(uVar7,fVar6),
                  CONCAT44(uVar8,0x3f800000),lVar3 + 0x82c,lVar3 + 0x830);
    *(byte *)(lVar5 + 0x1d) =
         *(byte *)(lVar5 + 0x1d) ^ (*(char *)(param_1 + 0x50) << 2 ^ *(byte *)(lVar5 + 0x1d)) & 4;
    lVar3 = *(longlong *)(param_1 + 0x58);
    if (*(char *)(lVar3 + 0x844) != '\0') {
      return;
    }
    fVar6 = fVar6 * *(float *)(lVar1 + 0x94);
    if ((0.0 <= fVar6) || (0.0 < *(float *)(lVar3 + 0x82c))) {
      if (fVar6 <= 0.0) {
        return;
      }
      if (*(float *)(lVar3 + 0x82c) <= *(float *)(lVar1 + 0x90) &&
          *(float *)(lVar1 + 0x90) != *(float *)(lVar3 + 0x82c)) {
        return;
      }
      *(undefined1 *)(lVar3 + 0x845) = 0;
      return;
    }
LAB_1422b67f1:
    *(undefined1 *)(lVar3 + 0x845) = 0;
  }
  return;
}



// FUNCTION 1422b6930 VerifySmartName body=52 status=ok
// SIG undefined VerifySmartName(void)

void USkeleton::VerifySmartName(undefined8 param_1,longlong *param_2)

{
  VerifySmartNameInternal();
  if (*param_2 == DAT_146aef308) {
    FUN_1422ad7f0(param_1);
  }
  return;
}



// FUNCTION 1422b6970 VerifySmartNameInternal body=303 status=ok
// SIG undefined VerifySmartNameInternal(void)

undefined8
USkeleton::VerifySmartNameInternal(longlong *param_1,undefined8 *param_2,ulonglong *param_3)

{
  int iVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  short sVar4;
  ulonglong *puVar5;
  undefined1 local_res8 [8];
  ulonglong local_res20;
  ulonglong *local_38;
  undefined6 uStack_2e;
  ulonglong local_28;
  undefined2 uStack_20;
  undefined6 uStack_1e;
  
  plVar3 = (longlong *)FSmartNameContainer::GetContainerInternal(param_1 + 0x3e);
  if (plVar3 == (longlong *)0x0) {
    (**(code **)(*param_1 + 0x70))(param_1,1);
    FUN_1422ad7f0(param_1);
    FSmartNameContainer::AddContainer(param_1 + 0x3e,*param_2);
    plVar3 = (longlong *)FSmartNameContainer::GetContainerInternal(param_1 + 0x3e,param_2);
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
  }
  puVar2 = (ulonglong *)*plVar3;
  iVar1 = (int)plVar3[1];
  local_res20 = *param_3;
  puVar5 = puVar2;
  do {
    if (puVar5 == puVar2 + iVar1) {
LAB_1422b6a00:
      *(int *)(plVar3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar1);
      }
      uStack_20 = (undefined2)iVar1;
      *(ulonglong *)(*plVar3 + (longlong)iVar1 * 8) = local_res20;
      local_28 = local_res20;
      local_38 = &local_res20;
      TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_const_&>_>(plVar3 + 2,local_res8,&local_38,0);
      *param_3 = local_28;
      param_3[1] = CONCAT62(uStack_1e,uStack_20);
      return 1;
    }
    if (*puVar5 == local_res20) {
      sVar4 = (short)((longlong)puVar5 - (longlong)puVar2 >> 3);
      if (sVar4 != -1) {
        *param_3 = local_res20;
        param_3[1] = CONCAT62(uStack_2e,sVar4);
        return 0;
      }
      goto LAB_1422b6a00;
    }
    puVar5 = puVar5 + 1;
  } while( true );
}



// FUNCTION 1422b6aa0 FAsyncTask<FAsyncAudioDecompressWorker><USoundWave_*_&> body=116 status=ok
// SIG undefined FAsyncTask<FAsyncAudioDecompressWorker><USoundWave_*_&>(void)

undefined8 *
FAsyncTask<FAsyncAudioDecompressWorker>::FAsyncTask<FAsyncAudioDecompressWorker><USoundWave_*_&>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_14502dee0;
  param_1[1] = *param_2;
  param_1[2] = 0;
  if (DAT_146b17150 != 0) {
    lVar1 = FUN_142875430();
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_142875430(DAT_146b17150);
      uVar3 = (**(code **)(*plVar2 + 0x98))(plVar2,param_1[1]);
      param_1[2] = uVar3;
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 1422b6b20 operator<USoundClass_*,FSoundClassProperties>_TTuple<USoundClass_*,FSoundClassProperties> body=177 status=ok
// SIG undefined operator<USoundClass_*,FSoundClassProperties>_TTuple<USoundClass_*,FSoundClassProperties>(void)

undefined8 *
TPairInitializer<USoundClass_*_const_&,FSoundClassProperties_&&>::
operator<USoundClass_*,FSoundClassProperties>_TTuple<USoundClass_*,FSoundClassProperties>
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 1) = *puVar1;
  *(undefined4 *)((longlong)param_2 + 0xc) = puVar1[1];
  *(undefined4 *)(param_2 + 2) = puVar1[2];
  *(undefined4 *)((longlong)param_2 + 0x14) = puVar1[3];
  *(undefined4 *)(param_2 + 3) = puVar1[4];
  *(undefined4 *)((longlong)param_2 + 0x1c) = puVar1[5];
  *(undefined4 *)(param_2 + 4) = puVar1[6];
  *(uint *)((longlong)param_2 + 0x24) =
       *(uint *)((longlong)param_2 + 0x24) ^ (*(uint *)((longlong)param_2 + 0x24) ^ puVar1[7]) & 1;
  uVar2 = (puVar1[7] ^ *(uint *)((longlong)param_2 + 0x24)) & 2 ^
          *(uint *)((longlong)param_2 + 0x24);
  *(uint *)((longlong)param_2 + 0x24) = uVar2;
  uVar2 = (puVar1[7] ^ uVar2) & 4 ^ uVar2;
  *(uint *)((longlong)param_2 + 0x24) = uVar2;
  uVar2 = (puVar1[7] ^ uVar2) & 8 ^ uVar2;
  *(uint *)((longlong)param_2 + 0x24) = uVar2;
  *(uint *)((longlong)param_2 + 0x24) = (puVar1[7] ^ uVar2) & 0x10 ^ uVar2;
  *(undefined4 *)(param_2 + 5) = puVar1[8];
  *(uint *)((longlong)param_2 + 0x2c) =
       *(uint *)((longlong)param_2 + 0x2c) ^ (*(uint *)((longlong)param_2 + 0x2c) ^ puVar1[9]) & 1;
  *(uint *)((longlong)param_2 + 0x2c) =
       *(uint *)((longlong)param_2 + 0x2c) ^ (*(uint *)((longlong)param_2 + 0x2c) ^ puVar1[9]) & 2;
  *(undefined1 *)(param_2 + 6) = *(undefined1 *)(puVar1 + 10);
  return param_2;
}



// FUNCTION 1422b6be0 operator<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>_TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_> body=262 status=ok
// SIG undefined operator<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>_TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
TKeyInitializer<USoundMix_*_const_&>::
operator<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>_TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_40 = 0;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  local_30 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 1,&local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 8,&local_40,4);
  }
  if (param_2[9] != 0) {
    FMemory::Free();
  }
  param_2[9] = lVar1;
  *(undefined4 *)(param_2 + 10) = (undefined4)local_30;
  local_38 = 0;
  local_30 = local_30 & 0xffffffff00000000;
  TSparseArray<TSetElement<FGraphicsMinimalPipelineStateInitializer>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FGraphicsMinimalPipelineStateInitializer>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 1422b6cf0 operator<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>_TTuple<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_> body=267 status=ok
// SIG undefined operator<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>_TTuple<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
TKeyInitializer<FPrimaryAssetId_const_&>::
operator<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>_TTuple<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>
          (longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  puVar1 = (undefined4 *)*param_1;
  local_68 = 0;
  uStack_60 = 0;
  local_40 = 0;
  local_30 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  param_2[0x10] = 0xffffffff;
  param_2[0x11] = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  param_2[0x16] = 0;
  TSparseArray<TSetElement<TTuple<FName,FAssetBundleEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 4,&local_78);
  lVar5 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 0x12,&local_40,4);
  }
  if (*(longlong *)(param_2 + 0x14) != 0) {
    FMemory::Free();
    lVar5 = local_38;
  }
  *(longlong *)(param_2 + 0x14) = lVar5;
  param_2[0x16] = (undefined4)local_30;
  local_38 = 0;
  local_30 = local_30 & 0xffffffff00000000;
  TSparseArray<TSetElement<TTuple<FName,FAssetBundleEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FAssetBundleEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 1422b6e00 FUN_1422b6e00 body=364 status=ok
// SIG undefined FUN_1422b6e00(void)

undefined8 * FUN_1422b6e00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  local_a8 = 0;
  local_88 = 0;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  param_2[4] = 0;
  local_80 = 0;
  local_a0 = 0xffffffff;
  local_9c = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0x34)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 5,0);
  }
  if ((undefined2 *)param_2[5] != (undefined2 *)0x0) {
    *(undefined2 *)param_2[5] = 0;
  }
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  local_38 = 0;
  FString::FString(local_30,&local_88);
  FSoftObjectPath::operator=(param_2 + 4,&local_38);
  param_2[7] = local_78;
  param_2[8] = uStack_70;
  param_2[9] = local_68;
  *(undefined4 *)(param_2 + 10) = (undefined4)local_60;
  *(undefined4 *)((longlong)param_2 + 0x54) = local_60._4_4_;
  param_2[0xb] = local_58;
  param_2[0xc] = uStack_50;
  param_2[0xd] = local_48;
  *(undefined4 *)(param_2 + 0xe) = (undefined4)local_40;
  *(undefined4 *)((longlong)param_2 + 0x74) = local_40._4_4_;
  local_40 = 0;
  uStack_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_50 = 0;
  local_58 = 0;
  local_48 = 0;
  FPrimaryAssetData::~FPrimaryAssetData(&local_a8);
  return param_2;
}



// FUNCTION 1422b6f70 AddReferencedObjects<USoundMix,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>_> body=535 status=ok
// SIG undefined AddReferencedObjects<USoundMix,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>_>(void)

void FReferenceCollector::
     AddReferencedObjects<USoundMix,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>_>
               (longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
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
  
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar8 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar4) goto LAB_1422b704e;
      uVar3 = puVar8[lVar5 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
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
    if ((int)uVar2 < (int)uStack_84) {
LAB_1422b704e:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar7 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar8 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar6 = puVar8[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar9 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar7 = uVar7 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1422b7111;
      uVar6 = puVar8[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar7 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1422b7111:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    (**(code **)(*param_1 + 0x38))
              (param_1,(longlong)(int)uStack_5c * 0x50 + *param_2,param_3,param_4);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1422b7190 FUN_1422b7190 body=434 status=ok
// SIG undefined FUN_1422b7190(void)

undefined8 *
FUN_1422b7190(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,longlong **param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  *param_1 = 0;
  local_78 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 1) = 0;
  local_70 = 0;
  uVar6 = *param_4;
  uVar7 = param_4[1];
  if (((param_6 != &local_78) && (*(int *)(param_6 + 1) != 0)) &&
     (plVar4 = *param_6, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_78);
  }
  plVar4 = (longlong *)param_5[1];
  uVar5 = *param_5;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar8 = operator_new(0x50,param_1);
  if (lVar8 != 0) {
    local_68 = 0;
    local_60 = 0;
    local_48 = uVar6;
    uStack_40 = uVar7;
    if ((local_70 != 0) && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x30))(local_78,&local_68);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_58 = uVar5;
    local_50 = plVar4;
    FUN_1422bba90(lVar8,param_2,param_3,&local_48,&local_58,&local_68);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_78);
  plVar4 = (longlong *)param_5[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_6);
  return param_1;
}



// FUNCTION 1422b7350 FUN_1422b7350 body=643 status=ok
// SIG undefined FUN_1422b7350(void)

int * FUN_1422b7350(longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  bool bVar18;
  
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar15 = *(int *)(*param_1 + 4 + (longlong)iVar13 * 0x18);
    *(int *)(param_1 + 6) = iVar15;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar15 * 0x18) = 0xffffffff;
    }
  }
  plVar16 = (longlong *)param_1[4];
  *param_2 = iVar13;
  lVar9 = (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar16 == (longlong *)0x0) {
    plVar16 = param_1 + 2;
  }
  puVar14 = (uint *)((longlong)plVar16 + lVar9);
  *puVar14 = *puVar14 | 1 << ((byte)iVar13 & 0x1f);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  bVar18 = false;
  lVar1 = (longlong)iVar13 * 0x18;
  plVar16 = (longlong *)(*param_1 + lVar1);
  *(undefined4 *)plVar16 = *param_3;
  *(undefined4 *)((longlong)plVar16 + 4) = uVar4;
  *(undefined4 *)(plVar16 + 1) = uVar5;
  *(undefined4 *)((longlong)plVar16 + 0xc) = uVar6;
  *(undefined4 *)(plVar16 + 2) = 0xffffffff;
  iVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar15 != 1) {
    lVar2 = *plVar16;
    iVar8 = iVar17;
    if (iVar15 != 0) {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar10 +
                       ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar12 != -1) {
        do {
          iVar8 = iVar12;
          if (*(longlong *)(*param_1 + (longlong)iVar12 * 0x18) == lVar2) break;
          iVar12 = *(int *)(*param_1 + 0x10 + (longlong)iVar12 * 0x18);
          iVar8 = iVar17;
        } while (iVar12 != -1);
      }
    }
    bVar18 = iVar8 != -1;
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar8 * 0x18),plVar16,0x10);
      bVar3 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar13;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar16 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar16 == (longlong *)0x0) {
        plVar16 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar16 + lVar9);
      *puVar14 = *puVar14 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1422b75a9;
    }
  }
  cVar7 = TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar15,0);
  if (cVar7 == '\0') {
    uVar11 = (int)((ulonglong)*plVar16 >> 0x20) * 0x17 + (int)*plVar16 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar16 + 0x14) = uVar11;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(plVar16 + 2) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1422b75a9:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 1422b75e0 FUN_1422b75e0 body=765 status=ok
// SIG undefined FUN_1422b75e0(void)

int * FUN_1422b75e0(longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  bool bVar20;
  
  iVar12 = 1;
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar19 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar19);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar19 = (int)param_1[6];
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar19 * 0x18);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x18) = 0xffffffff;
    }
  }
  plVar16 = (longlong *)param_1[4];
  *param_2 = iVar19;
  lVar9 = (longlong)((int)(iVar19 + (iVar19 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar16 == (longlong *)0x0) {
    plVar16 = param_1 + 2;
  }
  bVar20 = false;
  puVar18 = (uint *)((longlong)plVar16 + lVar9);
  *puVar18 = *puVar18 | 1 << ((byte)iVar19 & 0x1f);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  lVar1 = (longlong)iVar19 * 0x18;
  plVar16 = (longlong *)(*param_1 + lVar1);
  *(undefined4 *)plVar16 = *param_3;
  *(undefined4 *)((longlong)plVar16 + 4) = uVar4;
  *(undefined4 *)(plVar16 + 1) = uVar5;
  *(undefined4 *)((longlong)plVar16 + 0xc) = uVar6;
  *(undefined4 *)(plVar16 + 2) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    iVar13 = iVar17;
    if (uVar15 != 0) {
      plVar11 = (longlong *)param_1[8];
      iVar7 = GetTypeHash(plVar16);
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar11 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        lVar2 = *param_1;
        do {
          lVar10 = (longlong)iVar7;
          if ((*(longlong *)(lVar2 + lVar10 * 0x18) == *plVar16) &&
             (*(longlong *)(lVar2 + 8 + lVar10 * 0x18) == plVar16[1])) {
            bVar20 = true;
          }
          else {
            bVar20 = false;
          }
          iVar13 = iVar7;
        } while ((!bVar20) &&
                (iVar7 = *(int *)(lVar2 + 0x10 + lVar10 * 0x18), iVar13 = iVar17, iVar7 != -1));
      }
    }
    bVar20 = iVar13 != -1;
    if (bVar20) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar13 * 0x18),plVar16,0x10);
      bVar3 = (byte)iVar19 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar19;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar19;
      plVar16 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar16 = param_1 + 2;
      }
      puVar18 = (uint *)((longlong)plVar16 + lVar9);
      *param_2 = iVar13;
      *puVar18 = *puVar18 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1422b78b5;
    }
  }
  if (3 < uVar15) {
    uVar8 = (uVar15 >> 1) + 8;
    iVar17 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar12 = 0x20;
    cVar14 = '\0';
    if (uVar8 != 0) {
      iVar12 = 0x1f - iVar17;
    }
    uVar8 = (uVar15 >> 1) + 7;
    iVar17 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar14 = '\x1f' - (char)iVar17;
    }
    iVar12 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    uVar15 = GetTypeHash(plVar16);
    uVar15 = uVar15 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar16 + 0x14) = uVar15;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(plVar16 + 2) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar19;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<FPrimaryAssetId,DefaultKeyFuncs<FPrimaryAssetId,0>,FDefaultSetAllocator>::Rehash(param_1);
  }
LAB_1422b78b5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar20;
  }
  return param_2;
}



// FUNCTION 1422b78e0 FUN_1422b78e0 body=945 status=ok
// SIG undefined FUN_1422b78e0(void)

uint * FUN_1422b78e0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  void *_Dst;
  int iVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  undefined4 uVar16;
  undefined8 *_Src;
  bool bVar17;
  uint local_res8 [2];
  
  iVar12 = 1;
  uVar16 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar14 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar14 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar14 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar14 * 0x20 + 4 + *param_1);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar14;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar14 & 0x1f);
  _Src = (undefined8 *)((longlong)(int)uVar14 * 0x20 + *param_1);
  *_Src = *param_3;
  FString::FString(_Src + 1,param_3 + 1);
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::FindId
              (param_1,local_res8,_Src);
    uVar14 = local_res8[0];
    lVar11 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _Dst = (void *)(lVar11 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      uVar4 = *param_2;
      bVar3 = (byte)uVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar4;
      }
      puVar10 = (undefined4 *)((longlong)(int)uVar4 * 0x20 + *param_1);
      *puVar10 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      puVar10[1] = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar4;
      plVar6 = (longlong *)param_1[4];
      *param_2 = uVar14;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1422b7c68;
    }
  }
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar14) {
    uVar4 = (uVar14 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar15 = '\0';
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar12;
    }
    uVar4 = (uVar14 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar15 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar15 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    uVar14 = *param_2;
    uVar13 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src;
    uVar9 = uVar13 >> 0xd ^ -uVar13;
    uVar4 = (-0x61c88647 - uVar9) - uVar13 ^ uVar9 << 8;
    uVar13 = (uVar13 - uVar4) - uVar9 ^ uVar4 >> 0xd;
    uVar9 = (uVar9 - uVar4) - uVar13 ^ uVar13 >> 0xc;
    uVar4 = (uVar4 - uVar9) - uVar13 ^ uVar9 << 0x10;
    uVar13 = (uVar13 - uVar4) - uVar9 ^ uVar4 >> 5;
    uVar9 = (uVar9 - uVar4) - uVar13 ^ uVar13 >> 3;
    uVar4 = (uVar4 - uVar9) - uVar13 ^ uVar9 << 10;
    if (*(int *)(_Src + 2) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)_Src[1];
    }
    uVar5 = FUN_140438070(puVar8);
    uVar4 = ((uVar13 - uVar4) - uVar9 ^ uVar4 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
    uVar13 = (-0x61c88647 - uVar4) - uVar5 ^ uVar4 << 8;
    uVar9 = (uVar5 - uVar13) - uVar4 ^ uVar13 >> 0xd;
    uVar4 = (uVar4 - uVar13) - uVar9 ^ uVar9 >> 0xc;
    uVar13 = (uVar13 - uVar4) - uVar9 ^ uVar4 << 0x10;
    uVar9 = (uVar9 - uVar13) - uVar4 ^ uVar13 >> 5;
    uVar4 = (uVar4 - uVar13) - uVar9 ^ uVar9 >> 3;
    uVar13 = (uVar13 - uVar4) - uVar9 ^ uVar4 << 10;
    uVar4 = ((uVar9 - uVar13) - uVar4 ^ uVar13 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar4;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         uVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::Rehash(param_1);
  }
LAB_1422b7c68:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1422b7ca0 FUN_1422b7ca0 body=642 status=ok
// SIG undefined FUN_1422b7ca0(void)

uint * FUN_1422b7ca0(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  ulonglong *_Src;
  bool bVar10;
  uint local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar5 + 1)) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,uVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar5 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)((longlong)(int)uVar5 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = uVar5;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar4 +
                   (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar5 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar5 * 0x60 + *param_1);
  TKeyInitializer<USoundMix_*_const_&>::
  operator<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>_TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>
            (param_3,_Src);
  *(undefined4 *)(_Src + 0xb) = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (iVar8 != 1) {
    TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    uVar5 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar10 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar10);
    if (bVar10) {
      _Dst = (void *)(lVar7 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FGraphicsMinimalPipelineStateInitializer>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FGraphicsMinimalPipelineStateInitializer>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar5;
      goto LAB_1422b7eef;
    }
  }
  cVar2 = TSet<TTuple<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar8,0);
  if (cVar2 == '\0') {
    iVar8 = (int)(*_Src >> 4);
    uVar6 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar9 = -(uVar6 + iVar8) ^ uVar6 >> 0xd;
    uVar5 = (iVar8 - uVar6) - uVar9 ^ uVar9 >> 0xc;
    uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 0x10;
    uVar9 = (uVar9 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar6) - uVar9 ^ uVar9 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 10;
    uVar5 = ((uVar9 - uVar6) - uVar5 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x5c) = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xb) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(uint *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1422b7eef:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1422b7f30 FUN_1422b7f30 body=691 status=ok
// SIG undefined FUN_1422b7f30(void)

int * FUN_1422b7f30(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  void *_Dst;
  char cVar10;
  longlong *plVar11;
  uint uVar12;
  bool bVar13;
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar5 * 0x68 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x68 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
  plVar11 = (longlong *)((longlong)iVar5 * 0x68 + *param_1);
  TKeyInitializer<FPrimaryAssetId_const_&>::
  operator<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>_TTuple<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>
            (param_3,plVar11);
  *(undefined4 *)(plVar11 + 0xc) = 0xffffffff;
  bVar13 = false;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    if (uVar12 != 0) {
      plVar7 = (longlong *)param_1[8];
      iVar5 = GetTypeHash(plVar11);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        lVar4 = *param_1;
        do {
          lVar8 = (longlong)iVar5 * 0x68;
          if ((*(longlong *)(lVar8 + lVar4) == *plVar11) &&
             (*(longlong *)(lVar8 + 8 + lVar4) == plVar11[1])) {
            bVar13 = true;
          }
          else {
            bVar13 = false;
          }
          if (bVar13) goto LAB_1422b8092;
          iVar5 = *(int *)(lVar8 + 0x60 + lVar4);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_1422b8092:
    bVar13 = iVar5 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar5 * 0x68 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x58) = 0;
      if (*(longlong *)((longlong)_Dst + 0x50) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FAssetBundleEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FName,FAssetBundleEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 0x10);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar11,0x60);
      TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_1422b81b6;
    }
  }
  if (3 < uVar12) {
    uVar6 = (uVar12 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar10 = '\0';
    if (uVar6 != 0) {
      iVar5 = 0x1f - iVar9;
    }
    uVar6 = (uVar12 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar10 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar12 = GetTypeHash(plVar11);
    uVar12 = uVar12 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 100) = uVar12;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 0xc) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1422b81b6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1422b81f0 FUN_1422b81f0 body=656 status=ok
// SIG undefined FUN_1422b81f0(void)

int * FUN_1422b81f0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  bool bVar12;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar7 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  bVar12 = false;
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  plVar11 = (longlong *)((longlong)iVar7 * 0x38 + *param_1);
  lVar3 = *(longlong *)*param_3;
  *plVar11 = lVar3;
  *(uint *)(plVar11 + 1) = *(uint *)(plVar11 + 1) | 1;
  *(undefined1 *)((longlong)plVar11 + 0xc) = 0;
  plVar11[2] = 0;
  plVar11[3] = 0;
  *(undefined4 *)(plVar11 + 4) = 0x3f000000;
  *(undefined8 *)((longlong)plVar11 + 0x24) = 0x40000000;
  *(undefined4 *)(plVar11 + 6) = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    if (uVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          if (*(longlong *)((longlong)iVar6 * 0x38 + *param_1) == lVar3) goto LAB_1422b835c;
          iVar6 = *(int *)((longlong)iVar6 * 0x38 + 0x30 + *param_1);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_1422b835c:
    bVar12 = iVar6 != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar6 * 0x38 + *param_1),plVar11,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar6;
      goto LAB_1422b8457;
    }
  }
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x34) = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 6) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FName,FSlateColor>,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1422b8457:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1422b8480 FUN_1422b8480 body=733 status=ok
// SIG undefined FUN_1422b8480(void)

int * FUN_1422b8480(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  bool local_res8;
  
  iVar7 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar9 * 0x80 + 4 + *param_1);
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x80 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  plVar13 = (longlong *)((longlong)iVar9 * 0x80 + *param_1);
  FUN_1422b6e00(param_3,plVar13);
  *(undefined4 *)(plVar13 + 0xf) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar12 != 1) {
    lVar3 = *plVar13;
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar6 +
                       ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar9 = iVar10;
          if (*(longlong *)((longlong)iVar10 * 0x80 + *param_1) == lVar3) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x80 + 0x78 + *param_1);
          iVar9 = iVar14;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x80 + *param_1);
      FPrimaryAssetData::~FPrimaryAssetData((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar13,0x78);
      iVar7 = *param_2;
      bVar4 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x80 + *param_1) = iVar7;
      }
      puVar8 = (undefined4 *)((longlong)iVar7 * 0x80 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar8[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1422b8734;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar14;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x7c) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 0xf) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1422b8734:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1422b8760 FUN_1422b8760 body=459 status=ok
// SIG undefined FUN_1422b8760(void)

int * FUN_1422b8760(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar7 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  puVar1 = (uint *)param_3[1];
  puVar11 = (uint *)((longlong)iVar7 * 0x20 + *param_1);
  *puVar11 = *(uint *)*param_3;
  uVar10 = puVar1[1];
  uVar4 = puVar1[2];
  uVar3 = puVar1[3];
  puVar11[1] = *puVar1;
  puVar11[2] = uVar10;
  puVar11[3] = uVar4;
  puVar11[4] = uVar3;
  puVar11[5] = puVar1[4];
  puVar11[6] = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    iVar6 = 0x20;
    cVar9 = '\0';
    uVar4 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *puVar11;
    puVar11[7] = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar11[6] = *(uint *)((longlong)plVar5 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return param_2;
}



// FUNCTION 1422b8930 Emplace<TPairInitializer<FName_&,FAssetBundleEntry_&>_> body=433 status=ok
// SIG undefined Emplace<TPairInitializer<FName_&,FAssetBundleEntry_&>_>(void)

int * TSet<TTuple<FName,FAssetBundleEntry>,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&,FAssetBundleEntry_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_28 [2];
  longlong *local_20;
  
  TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  uVar1 = param_3[1];
  *param_2 = local_28[0];
  *local_20 = *(longlong *)*param_3;
  FAssetBundleEntry::FAssetBundleEntry(local_20 + 1,uVar1);
  *(undefined4 *)(local_20 + 6) = 0xffffffff;
  bVar8 = false;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    lVar2 = *local_20;
    if (iVar7 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          if (*(longlong *)((longlong)iVar5 * 0x38 + *param_1) == lVar2) goto LAB_1422b89fe;
          iVar5 = *(int *)((longlong)iVar5 * 0x38 + 0x30 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_1422b89fe:
    bVar8 = iVar5 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar5 * 0x38 + *param_1);
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                ((longlong)_Dst + 0x20);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_1422b8ab6;
    }
  }
  cVar3 = TSet<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7,0);
  if (cVar3 == '\0') {
    uVar6 = (int)((ulonglong)*local_20 >> 0x20) + (int)*local_20 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_20 + 0x34) = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 6) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_1422b8ab6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 1422b8af0 FUN_1422b8af0 body=741 status=ok
// SIG undefined FUN_1422b8af0(void)

int * FUN_1422b8af0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint *_Src;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  bool local_res8;
  
  iVar8 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)((longlong)iVar11 * 0x58 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x58 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  local_res8 = false;
  lVar5 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar14 = (uint *)((longlong)plVar7 + lVar5);
  *puVar14 = *puVar14 | 1 << ((byte)iVar11 & 0x1f);
  puVar14 = (uint *)param_3[1];
  lVar6 = (longlong)iVar11 * 0x58;
  _Src = (uint *)(*param_1 + lVar6);
  *_Src = *(uint *)*param_3;
  _Src[2] = _Src[2] ^ (_Src[2] ^ *puVar14) & 1;
  *(char *)(_Src + 3) = (char)puVar14[1];
  *(undefined8 *)(_Src + 4) = *(undefined8 *)(puVar14 + 2);
  *(undefined8 *)(_Src + 6) = *(undefined8 *)(puVar14 + 4);
  _Src[8] = puVar14[6];
  _Src[9] = puVar14[7];
  uVar13 = puVar14[9];
  uVar4 = puVar14[10];
  uVar3 = puVar14[0xb];
  _Src[10] = puVar14[8];
  _Src[0xb] = uVar13;
  _Src[0xc] = uVar4;
  _Src[0xd] = uVar3;
  uVar13 = puVar14[0xd];
  uVar4 = puVar14[0xe];
  uVar3 = puVar14[0xf];
  _Src[0xe] = puVar14[0xc];
  _Src[0xf] = uVar13;
  _Src[0x10] = uVar4;
  _Src[0x11] = uVar3;
  _Src[0x12] = puVar14[0x10];
  _Src[0x14] = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(uint *)((longlong)iVar9 * 0x58 + *param_1) == *_Src) break;
          iVar9 = *(int *)((longlong)iVar9 * 0x58 + 0x50 + *param_1);
          iVar10 = iVar15;
        } while (iVar9 != -1);
      }
    }
    local_res8 = iVar10 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar10 * 0x58 + *param_1),_Src,0x50);
      bVar2 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x58 + *param_1) = iVar11;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar6 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar6 + 4 + lVar1) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar7 + lVar5);
      *puVar14 = *puVar14 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1422b8daf;
    }
  }
  if (3 < uVar13) {
    uVar4 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar4 != 0) {
      iVar8 = 0x1f - iVar15;
    }
    uVar4 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar15;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & *_Src;
    _Src[0x15] = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    _Src[0x14] = *(uint *)((longlong)plVar7 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<unsigned_int,UAITacticalPointManager::FOccupiedPoint>,TDefaultMapHashableKeyFuncs<unsigned_int,UAITacticalPointManager::FOccupiedPoint,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1422b8daf:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1422b8de0 Emplace<TPairInitializer<USoundClass_*_const_&,FSoundClassProperties_&&>_> body=421 status=ok
// SIG undefined Emplace<TPairInitializer<USoundClass_*_const_&,FSoundClassProperties_&&>_>(void)

int * TSet<TTuple<USoundClass_*,FSoundClassProperties>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassProperties,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<USoundClass_*_const_&,FSoundClassProperties_&&>_>
                (longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  TPairInitializer<USoundClass_*_const_&,FSoundClassProperties_&&>::
  operator<USoundClass_*,FSoundClassProperties>_TTuple<USoundClass_*,FSoundClassProperties>
            (param_3,local_30);
  *(undefined4 *)(local_30 + 7) = 0xffffffff;
  bVar7 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar7 = local_res8[0] != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x40 + *param_1),local_30,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1422b8f63;
    }
  }
  cVar1 = TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5);
  if (cVar1 == '\0') {
    iVar5 = (int)(*local_30 >> 4);
    uVar4 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
    uVar6 = -(uVar4 + iVar5) ^ uVar4 >> 0xd;
    uVar3 = (iVar5 - uVar4) - uVar6 ^ uVar6 >> 0xc;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 0x10;
    uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar6 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 10;
    uVar3 = ((uVar6 - uVar4) - uVar3 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x3c) = uVar3;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 7) =
         *(undefined4 *)
          ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) =
         *param_2;
  }
LAB_1422b8f63:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1422b8f90 FUN_1422b8f90 body=711 status=ok
// SIG undefined FUN_1422b8f90(void)

uint * FUN_1422b8f90(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  ulonglong *_Src;
  uint uVar16;
  bool bVar17;
  uint local_res8 [2];
  
  iVar13 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar12 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar12 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar12 = *(uint *)(param_1 + 6);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)((longlong)(int)uVar12 * 0x68 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x68 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = uVar12;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar12 & 0x1f);
  puVar2 = (ulonglong *)param_3[1];
  _Src = (ulonglong *)((longlong)(int)uVar12 * 0x68 + *param_1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  uVar6 = puVar2[1];
  _Src[1] = *puVar2;
  _Src[2] = uVar6;
  uVar6 = puVar2[3];
  _Src[3] = puVar2[2];
  _Src[4] = uVar6;
  uVar6 = puVar2[5];
  _Src[5] = puVar2[4];
  _Src[6] = uVar6;
  uVar6 = puVar2[7];
  _Src[7] = puVar2[6];
  _Src[8] = uVar6;
  uVar4 = *(undefined4 *)((longlong)puVar2 + 0x44);
  uVar6 = puVar2[9];
  uVar5 = *(undefined4 *)((longlong)puVar2 + 0x4c);
  *(int *)(_Src + 9) = (int)puVar2[8];
  *(undefined4 *)((longlong)_Src + 0x4c) = uVar4;
  *(int *)(_Src + 10) = (int)uVar6;
  *(undefined4 *)((longlong)_Src + 0x54) = uVar5;
  _Src[0xb] = puVar2[10];
  *(undefined4 *)(_Src + 0xc) = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar16 != 1) {
    TSet<TTuple<USoundClass_*,FSoundMixClassOverride>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    uVar8 = local_res8[0];
    lVar11 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar11 * 0x68 + *param_1),_Src,0x60);
      TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar12,1);
      *param_2 = uVar8;
      goto LAB_1422b9229;
    }
  }
  if (3 < uVar16) {
    uVar8 = (uVar16 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar14 = '\0';
    if (uVar8 != 0) {
      iVar9 = 0x1f - iVar13;
    }
    uVar8 = (uVar16 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar14 = '\x1f' - (char)iVar13;
    }
    iVar13 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar13 <= (int)param_1[9])))) {
    iVar13 = (int)(*_Src >> 4);
    uVar8 = 0x9e3779b9U - iVar13 ^ iVar13 << 8;
    uVar15 = -(uVar8 + iVar13) ^ uVar8 >> 0xd;
    uVar16 = (iVar13 - uVar8) - uVar15 ^ uVar15 >> 0xc;
    uVar8 = (uVar8 - uVar16) - uVar15 ^ uVar16 << 0x10;
    uVar15 = (uVar15 - uVar8) - uVar16 ^ uVar8 >> 5;
    uVar16 = (uVar16 - uVar8) - uVar15 ^ uVar15 >> 3;
    uVar8 = (uVar8 - uVar16) - uVar15 ^ uVar16 << 10;
    uVar16 = ((uVar15 - uVar8) - uVar16 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 100) = uVar16;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xc) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(uint *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         uVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    TSet<TTuple<USoundClass_*,FSoundMixClassOverride>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1422b9229:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1422b9260 FUN_1422b9260 body=614 status=ok
// SIG undefined FUN_1422b9260(void)

int * FUN_1422b9260(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong *_Src;
  bool bVar15;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow();
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar13 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x50);
    *(int *)(param_1 + 6) = iVar13;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar13 * 0x50) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  bVar15 = false;
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  puVar2 = (ulonglong *)param_3[1];
  _Src = (ulonglong *)((longlong)iVar10 * 0x50 + *param_1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  uVar6 = puVar2[1];
  _Src[1] = *puVar2;
  _Src[2] = uVar6;
  uVar6 = puVar2[3];
  _Src[3] = puVar2[2];
  _Src[4] = uVar6;
  uVar4 = *(undefined4 *)((longlong)puVar2 + 0x24);
  uVar6 = puVar2[5];
  uVar5 = *(undefined4 *)((longlong)puVar2 + 0x2c);
  *(int *)(_Src + 5) = (int)puVar2[4];
  *(undefined4 *)((longlong)_Src + 0x2c) = uVar4;
  *(int *)(_Src + 6) = (int)uVar6;
  *(undefined4 *)((longlong)_Src + 0x34) = uVar5;
  uVar4 = *(undefined4 *)((longlong)puVar2 + 0x34);
  uVar6 = puVar2[7];
  uVar5 = *(undefined4 *)((longlong)puVar2 + 0x3c);
  *(int *)(_Src + 7) = (int)puVar2[6];
  *(undefined4 *)((longlong)_Src + 0x3c) = uVar4;
  *(int *)(_Src + 8) = (int)uVar6;
  *(undefined4 *)((longlong)_Src + 0x44) = uVar5;
  *(undefined4 *)(_Src + 9) = 0xffffffff;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar13 != 1) {
    TSet<TTuple<FRHIBlendState_*,FBlendStateInitializerRHI>,TDefaultMapHashableKeyFuncs<FRHIBlendState_*,FBlendStateInitializerRHI,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    bVar15 = local_res8[0] != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_res8[0] * 0x50 + *param_1),_Src,0x48);
      TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar10,1);
      *param_2 = local_res8[0];
      goto LAB_1422b949d;
    }
  }
  cVar7 = TSet<TTuple<USoundMix_*,FSoundMixState>,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar7 == '\0') {
    iVar10 = (int)(*_Src >> 4);
    uVar12 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar14 = -(uVar12 + iVar10) ^ uVar12 >> 0xd;
    uVar11 = (iVar10 - uVar12) - uVar14 ^ uVar14 >> 0xc;
    uVar12 = (uVar12 - uVar11) - uVar14 ^ uVar11 << 0x10;
    uVar14 = (uVar14 - uVar12) - uVar11 ^ uVar12 >> 5;
    uVar11 = (uVar11 - uVar12) - uVar14 ^ uVar14 >> 3;
    uVar12 = (uVar12 - uVar11) - uVar14 ^ uVar11 << 10;
    uVar11 = ((uVar14 - uVar12) - uVar11 ^ uVar12 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x4c) = uVar11;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 9) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1422b949d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 1422b94d0 FUN_1422b94d0 body=666 status=ok
// SIG undefined FUN_1422b94d0(void)

int * FUN_1422b94d0(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  char cVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  
  iVar13 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar16 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar16);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar16 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar16 * 0x28);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x28) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar16;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  bVar17 = false;
  puVar1 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar16 & 0x1f);
  plVar14 = (longlong *)(*param_1 + (longlong)iVar16 * 0x28);
  puVar2 = (undefined4 *)param_3[1];
  lVar3 = ((longlong *)*param_3)[1];
  *plVar14 = *(longlong *)*param_3;
  plVar14[1] = lVar3;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  *(undefined4 *)(plVar14 + 2) = *puVar2;
  *(undefined4 *)((longlong)plVar14 + 0x14) = uVar4;
  *(undefined4 *)(plVar14 + 3) = uVar5;
  *(undefined4 *)((longlong)plVar14 + 0x1c) = uVar6;
  *(undefined4 *)(plVar14 + 4) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    if (uVar15 != 0) {
      plVar11 = (longlong *)param_1[8];
      iVar8 = GetTypeHash(plVar14);
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar11 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        lVar3 = *param_1;
        do {
          lVar10 = (longlong)iVar8;
          if ((*(longlong *)(lVar3 + lVar10 * 0x28) == *plVar14) &&
             (*(longlong *)(lVar3 + 8 + lVar10 * 0x28) == plVar14[1])) {
            bVar17 = true;
          }
          else {
            bVar17 = false;
          }
          if (bVar17) goto LAB_1422b9642;
          iVar8 = *(int *)(lVar3 + 0x20 + lVar10 * 0x28);
        } while (iVar8 != -1);
      }
    }
    iVar8 = -1;
LAB_1422b9642:
    bVar17 = iVar8 != -1;
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar8 * 0x28),plVar14,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar16,1);
      *param_2 = iVar8;
      goto LAB_1422b973d;
    }
  }
  if (3 < uVar15) {
    uVar9 = (uVar15 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar12 = '\0';
    if (uVar9 != 0) {
      iVar8 = 0x1f - iVar13;
    }
    uVar9 = (uVar15 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar12 = '\x1f' - (char)iVar13;
    }
    iVar13 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar13 <= (int)param_1[9])))) {
    uVar15 = GetTypeHash(plVar14);
    uVar15 = uVar15 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar14 + 0x24) = uVar15;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(plVar14 + 4) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar16;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    TSet<TTuple<FPrimaryAssetId,FPrimaryAssetRules>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRules,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1422b973d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar17;
  }
  return param_2;
}



// FUNCTION 1422b9770 GetDefault<USoundGroups> body=51 status=ok
// SIG undefined GetDefault<USoundGroups>(void)

longlong GetDefault<USoundGroups>(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)USoundGroups::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return lVar2;
}



// FUNCTION 1422b97b0 FUN_1422b97b0 body=1068 status=ok
// SIG undefined FUN_1422b97b0(void)

void FUN_1422b97b0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar5 = iVar8;
    iVar9 = iVar7;
joined_r0x0001422b97f5:
    do {
      if (iVar8 < param_2) {
        iVar4 = iVar7 * 2;
        iVar8 = iVar4 + 1;
        iVar6 = iVar8;
        if (iVar4 + 2 < param_2) {
          plVar1 = (longlong *)param_1[iVar8];
          plVar2 = (longlong *)param_1[(longlong)iVar4 + 2];
          fVar12 = *(float *)(plVar2 + 0xe) * *(float *)(plVar2 + 0xd) *
                   *(float *)((longlong)plVar2 + 0x6c);
          if (fVar12 <= 0.0) {
            if ((*(byte *)((longlong)plVar2 + 0xa6) & 1) == 0) {
              fVar12 = *(float *)((longlong)plVar2 + 0x84) - 201.0;
            }
            else {
              fVar12 = *(float *)((longlong)plVar2 + 0x84) * fVar12 - 101.0;
            }
          }
          else if ((*plVar2 == 0) || (-1 < *(char *)(*plVar2 + 0x30))) {
            fVar12 = fVar12 * *(float *)((longlong)plVar2 + 0x84);
          }
          else {
            fVar12 = *(float *)((longlong)plVar2 + 0x84);
          }
          fVar11 = *(float *)(plVar1 + 0xe) * *(float *)(plVar1 + 0xd) *
                   *(float *)((longlong)plVar1 + 0x6c);
          if (fVar11 <= 0.0) {
            if ((*(byte *)((longlong)plVar1 + 0xa6) & 1) == 0) {
              fVar11 = *(float *)((longlong)plVar1 + 0x84) - 201.0;
            }
            else {
              fVar11 = *(float *)((longlong)plVar1 + 0x84) * fVar11 - 101.0;
            }
          }
          else if ((*plVar1 == 0) || (-1 < *(char *)(*plVar1 + 0x30))) {
            fVar11 = fVar11 * *(float *)((longlong)plVar1 + 0x84);
          }
          else {
            fVar11 = *(float *)((longlong)plVar1 + 0x84);
          }
          iVar6 = iVar4 + 2;
          if (fVar12 < fVar11) {
            iVar6 = iVar8;
          }
        }
        plVar1 = (longlong *)param_1[iVar7];
        plVar2 = (longlong *)param_1[iVar6];
        fVar12 = *(float *)(plVar1 + 0xe) * *(float *)(plVar1 + 0xd) *
                 *(float *)((longlong)plVar1 + 0x6c);
        if (fVar12 <= 0.0) {
          if ((*(byte *)((longlong)plVar1 + 0xa6) & 1) == 0) {
            fVar12 = *(float *)((longlong)plVar1 + 0x84) - 201.0;
          }
          else {
            fVar12 = *(float *)((longlong)plVar1 + 0x84) * fVar12 - 101.0;
          }
        }
        else if ((*plVar1 == 0) || (-1 < *(char *)(*plVar1 + 0x30))) {
          fVar12 = fVar12 * *(float *)((longlong)plVar1 + 0x84);
        }
        else {
          fVar12 = *(float *)((longlong)plVar1 + 0x84);
        }
        fVar11 = *(float *)(plVar2 + 0xe) * *(float *)(plVar2 + 0xd) *
                 *(float *)((longlong)plVar2 + 0x6c);
        if (fVar11 <= 0.0) {
          if ((*(byte *)((longlong)plVar2 + 0xa6) & 1) == 0) {
            fVar11 = *(float *)((longlong)plVar2 + 0x84) - 201.0;
          }
          else {
            fVar11 = fVar11 * *(float *)((longlong)plVar2 + 0x84) - 101.0;
          }
        }
        else if ((*plVar2 == 0) || (-1 < *(char *)(*plVar2 + 0x30))) {
          fVar11 = fVar11 * *(float *)((longlong)plVar2 + 0x84);
        }
        else {
          fVar11 = *(float *)((longlong)plVar2 + 0x84);
        }
        if (fVar12 < fVar11) {
          param_1[iVar7] = plVar2;
          iVar8 = iVar6 * 2 + 1;
          param_1[iVar6] = plVar1;
          iVar7 = iVar6;
          goto joined_r0x0001422b97f5;
        }
      }
      iVar8 = iVar5 + -2;
      iVar7 = iVar9 + -1;
      iVar5 = iVar8;
      iVar9 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  lVar10 = (longlong)param_2;
  if (0 < param_2) {
    do {
      uVar3 = *param_1;
      *param_1 = param_1[lVar10];
      param_1[lVar10] = uVar3;
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar5 = iVar7 * 2;
          iVar8 = iVar5 + 1;
          iVar9 = iVar8;
          if (iVar5 + 2 < param_2) {
            plVar1 = (longlong *)param_1[iVar8];
            plVar2 = (longlong *)param_1[(longlong)iVar5 + 2];
            fVar12 = *(float *)(plVar2 + 0xe) * *(float *)(plVar2 + 0xd) *
                     *(float *)((longlong)plVar2 + 0x6c);
            if (fVar12 <= 0.0) {
              if ((*(byte *)((longlong)plVar2 + 0xa6) & 1) == 0) {
                fVar12 = *(float *)((longlong)plVar2 + 0x84) - 201.0;
              }
              else {
                fVar12 = fVar12 * *(float *)((longlong)plVar2 + 0x84) - 101.0;
              }
            }
            else if ((*plVar2 == 0) || (-1 < *(char *)(*plVar2 + 0x30))) {
              fVar12 = fVar12 * *(float *)((longlong)plVar2 + 0x84);
            }
            else {
              fVar12 = *(float *)((longlong)plVar2 + 0x84);
            }
            fVar11 = *(float *)(plVar1 + 0xe) * *(float *)(plVar1 + 0xd) *
                     *(float *)((longlong)plVar1 + 0x6c);
            if (fVar11 <= 0.0) {
              if ((*(byte *)((longlong)plVar1 + 0xa6) & 1) == 0) {
                fVar11 = *(float *)((longlong)plVar1 + 0x84) - 201.0;
              }
              else {
                fVar11 = fVar11 * *(float *)((longlong)plVar1 + 0x84) - 101.0;
              }
            }
            else if ((*plVar1 == 0) || (-1 < *(char *)(*plVar1 + 0x30))) {
              fVar11 = fVar11 * *(float *)((longlong)plVar1 + 0x84);
            }
            else {
              fVar11 = *(float *)((longlong)plVar1 + 0x84);
            }
            iVar9 = iVar5 + 2;
            if (fVar12 < fVar11) {
              iVar9 = iVar8;
            }
          }
          plVar1 = (longlong *)param_1[iVar7];
          plVar2 = (longlong *)param_1[iVar9];
          fVar12 = *(float *)(plVar1 + 0xe) * *(float *)(plVar1 + 0xd) *
                   *(float *)((longlong)plVar1 + 0x6c);
          if (fVar12 <= 0.0) {
            if ((*(byte *)((longlong)plVar1 + 0xa6) & 1) == 0) {
              fVar12 = *(float *)((longlong)plVar1 + 0x84) - 201.0;
            }
            else {
              fVar12 = *(float *)((longlong)plVar1 + 0x84) * fVar12 - 101.0;
            }
          }
          else if ((*plVar1 == 0) || (-1 < *(char *)(*plVar1 + 0x30))) {
            fVar12 = fVar12 * *(float *)((longlong)plVar1 + 0x84);
          }
          else {
            fVar12 = *(float *)((longlong)plVar1 + 0x84);
          }
          fVar11 = *(float *)(plVar2 + 0xe) * *(float *)(plVar2 + 0xd) *
                   *(float *)((longlong)plVar2 + 0x6c);
          if (fVar11 <= 0.0) {
            if ((*(byte *)((longlong)plVar2 + 0xa6) & 1) == 0) {
              fVar11 = *(float *)((longlong)plVar2 + 0x84) - 201.0;
            }
            else {
              fVar11 = *(float *)((longlong)plVar2 + 0x84) * fVar11 - 101.0;
            }
          }
          else if ((*plVar2 == 0) || (-1 < *(char *)(*plVar2 + 0x30))) {
            fVar11 = fVar11 * *(float *)((longlong)plVar2 + 0x84);
          }
          else {
            fVar11 = *(float *)((longlong)plVar2 + 0x84);
          }
          if (fVar11 <= fVar12) break;
          param_1[iVar7] = plVar2;
          param_1[iVar9] = plVar1;
          iVar7 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  return;
}



// FUNCTION 1422b9be0 HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<FName,FActivatedReverb>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FActivatedReverb>,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FActivatedReverb,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>_>::FValueComparisonClass<<lambda_6a63a3bd87c137504a1d5d9f46b4839a>_>_>_>_>_> body=542 status=ok
// SIG undefined HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<FName,FActivatedReverb>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FActivatedReverb>,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FActivatedReverb,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>_>::FValueComparisonClass<<lambda_6a63a3bd87c137504a1d5d9f46b4839a>_>_>_>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<FName,FActivatedReverb>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FActivatedReverb>,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FActivatedReverb,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>_>::FValueComparisonClass<<lambda_6a63a3bd87c137504a1d5d9f46b4839a>_>_>_>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar9 = (param_2 + -2) / 2;
  if (-1 < iVar9) {
    iVar12 = iVar9 * 2 + 1;
    iVar16 = iVar12;
    iVar17 = iVar9;
joined_r0x0001422b9c0a:
    do {
      if (iVar12 < param_2) {
        iVar14 = iVar9 * 2 + 1;
        iVar12 = iVar9 * 2 + 2;
        iVar15 = iVar14;
        if ((iVar12 < param_2) &&
           (iVar15 = iVar12,
           *(float *)(param_1 + (longlong)iVar14 * 7 + 5) <=
           *(float *)(param_1 + (longlong)iVar12 * 7 + 5) &&
           *(float *)(param_1 + (longlong)iVar12 * 7 + 5) !=
           *(float *)(param_1 + (longlong)iVar14 * 7 + 5))) {
          iVar15 = iVar14;
        }
        puVar10 = param_1 + (longlong)iVar9 * 7;
        puVar13 = param_1 + (longlong)iVar15 * 7;
        if (*(float *)(puVar13 + 5) < *(float *)(puVar10 + 5)) {
          if (puVar10 != puVar13) {
            uVar2 = puVar13[1];
            uVar3 = *puVar10;
            uVar4 = puVar10[1];
            uVar5 = puVar10[2];
            uVar6 = puVar10[3];
            uVar7 = puVar10[4];
            uVar8 = puVar10[5];
            uVar1 = puVar10[6];
            *puVar10 = *puVar13;
            puVar10[1] = uVar2;
            uVar2 = puVar13[3];
            puVar10[2] = puVar13[2];
            puVar10[3] = uVar2;
            uVar2 = puVar13[5];
            puVar10[4] = puVar13[4];
            puVar10[5] = uVar2;
            puVar10[6] = puVar13[6];
            *puVar13 = uVar3;
            puVar13[1] = uVar4;
            puVar13[2] = uVar5;
            puVar13[3] = uVar6;
            puVar13[4] = uVar7;
            puVar13[5] = uVar8;
            puVar13[6] = uVar1;
          }
          iVar12 = iVar15 * 2 + 1;
          iVar9 = iVar15;
          goto joined_r0x0001422b9c0a;
        }
      }
      iVar12 = iVar16 + -2;
      iVar9 = iVar17 + -1;
      iVar16 = iVar12;
      iVar17 = iVar9;
    } while (-1 < iVar9);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar13 = param_1 + (longlong)param_2 * 7;
    do {
      if (param_1 != puVar13) {
        uVar2 = puVar13[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar1 = param_1[6];
        *param_1 = *puVar13;
        param_1[1] = uVar2;
        uVar2 = puVar13[3];
        param_1[2] = puVar13[2];
        param_1[3] = uVar2;
        uVar2 = puVar13[5];
        param_1[4] = puVar13[4];
        param_1[5] = uVar2;
        param_1[6] = puVar13[6];
        *puVar13 = uVar3;
        puVar13[1] = uVar4;
        puVar13[2] = uVar5;
        puVar13[3] = uVar6;
        puVar13[4] = uVar7;
        puVar13[5] = uVar8;
        puVar13[6] = uVar1;
      }
      iVar9 = 0;
      if (1 < param_2) {
        do {
          iVar12 = iVar9 * 2 + 1;
          iVar17 = iVar9 * 2 + 2;
          iVar16 = iVar12;
          if ((iVar17 < param_2) &&
             (iVar16 = iVar17,
             *(float *)(param_1 + (longlong)iVar12 * 7 + 5) <=
             *(float *)(param_1 + (longlong)iVar17 * 7 + 5) &&
             *(float *)(param_1 + (longlong)iVar17 * 7 + 5) !=
             *(float *)(param_1 + (longlong)iVar12 * 7 + 5))) {
            iVar16 = iVar12;
          }
          puVar11 = param_1 + (longlong)iVar9 * 7;
          puVar10 = param_1 + (longlong)iVar16 * 7;
          if (*(float *)(puVar11 + 5) <= *(float *)(puVar10 + 5)) break;
          if (puVar11 != puVar10) {
            uVar2 = puVar10[1];
            uVar3 = *puVar11;
            uVar4 = puVar11[1];
            uVar5 = puVar11[2];
            uVar6 = puVar11[3];
            uVar7 = puVar11[4];
            uVar8 = puVar11[5];
            uVar1 = puVar11[6];
            *puVar11 = *puVar10;
            puVar11[1] = uVar2;
            uVar2 = puVar10[3];
            puVar11[2] = puVar10[2];
            puVar11[3] = uVar2;
            uVar2 = puVar10[5];
            puVar11[4] = puVar10[4];
            puVar11[5] = uVar2;
            puVar11[6] = puVar10[6];
            *puVar10 = uVar3;
            puVar10[1] = uVar4;
            puVar10[2] = uVar5;
            puVar10[3] = uVar6;
            puVar10[4] = uVar7;
            puVar10[5] = uVar8;
            puVar10[6] = uVar1;
          }
          iVar9 = iVar16;
        } while (iVar16 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar13 = puVar13 + -7;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1422b9e00 HeapSortInternal<`UAssetManager::DumpLoadedAssetState'::`17'::FLoadedInfo,FIdentityFunctor,TDereferenceWrapper<`UAssetManager::DumpLoadedAssetState'::`17'::FLoadedInfo,<lambda_a9c53378efbec8498667453e20309952>_>_> body=471 status=ok
// SIG undefined HeapSortInternal<`UAssetManager::DumpLoadedAssetState'::`17'::FLoadedInfo,FIdentityFunctor,TDereferenceWrapper<`UAssetManager::DumpLoadedAssetState'::`17'::FLoadedInfo,<lambda_a9c53378efbec8498667453e20309952>_>_>(void)

void AlgoImpl::
     HeapSortInternal<_UAssetManager::DumpLoadedAssetState_::_17_::FLoadedInfo,FIdentityFunctor,TDereferenceWrapper<_UAssetManager::DumpLoadedAssetState_::_17_::FLoadedInfo,<lambda_a9c53378efbec8498667453e20309952>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  iVar9 = (param_2 + -2) / 2;
  if (-1 < iVar9) {
    iVar11 = iVar9 * 2 + 1;
    iVar14 = iVar11;
    iVar12 = iVar9;
joined_r0x0001422b9e39:
    do {
      if (iVar11 < param_2) {
        iVar11 = iVar9 * 2;
        iVar13 = iVar11 + 1;
        if (iVar11 + 2 < param_2) {
          iVar10 = FName::Compare(param_1 + (longlong)(iVar11 + 2) * 4,
                                  param_1 + (longlong)iVar13 * 4);
          if (iVar10 < 0) {
            iVar13 = iVar11;
          }
          iVar13 = iVar13 + 1;
        }
        puVar15 = param_1 + (longlong)iVar13 * 4;
        puVar17 = param_1 + (longlong)iVar9 * 4;
        iVar9 = FName::Compare(puVar17,puVar15);
        if (iVar9 < 0) {
          if (puVar17 != puVar15) {
            uVar1 = *(undefined4 *)((longlong)puVar15 + 4);
            uVar2 = *(undefined4 *)(puVar15 + 1);
            uVar3 = *(undefined4 *)((longlong)puVar15 + 0xc);
            uVar4 = *puVar17;
            uVar5 = puVar17[1];
            uVar6 = puVar17[2];
            uVar7 = puVar17[3];
            *(undefined4 *)puVar17 = *(undefined4 *)puVar15;
            *(undefined4 *)((longlong)puVar17 + 4) = uVar1;
            *(undefined4 *)(puVar17 + 1) = uVar2;
            *(undefined4 *)((longlong)puVar17 + 0xc) = uVar3;
            uVar8 = puVar15[3];
            puVar17[2] = puVar15[2];
            puVar17[3] = uVar8;
            *puVar15 = uVar4;
            puVar15[1] = uVar5;
            puVar15[2] = uVar6;
            puVar15[3] = uVar7;
          }
          iVar11 = iVar13 * 2 + 1;
          iVar9 = iVar13;
          goto joined_r0x0001422b9e39;
        }
      }
      iVar11 = iVar14 + -2;
      iVar9 = iVar12 + -1;
      iVar14 = iVar11;
      iVar12 = iVar9;
    } while (-1 < iVar9);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar17 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar17) {
        uVar1 = *(undefined4 *)((longlong)puVar17 + 4);
        uVar2 = *(undefined4 *)(puVar17 + 1);
        uVar3 = *(undefined4 *)((longlong)puVar17 + 0xc);
        uVar4 = *param_1;
        uVar5 = param_1[1];
        uVar6 = param_1[2];
        uVar7 = param_1[3];
        *(undefined4 *)param_1 = *(undefined4 *)puVar17;
        *(undefined4 *)((longlong)param_1 + 4) = uVar1;
        *(undefined4 *)(param_1 + 1) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
        uVar8 = puVar17[3];
        param_1[2] = puVar17[2];
        param_1[3] = uVar8;
        *puVar17 = uVar4;
        puVar17[1] = uVar5;
        puVar17[2] = uVar6;
        puVar17[3] = uVar7;
      }
      iVar9 = 0;
      if (1 < param_2) {
        do {
          iVar11 = iVar9 * 2;
          iVar14 = iVar11 + 1;
          if (iVar11 + 2 < param_2) {
            iVar12 = FName::Compare(param_1 + (longlong)(iVar11 + 2) * 4,
                                    param_1 + (longlong)iVar14 * 4);
            if (iVar12 < 0) {
              iVar14 = iVar11;
            }
            iVar14 = iVar14 + 1;
          }
          puVar16 = param_1 + (longlong)iVar14 * 4;
          puVar15 = param_1 + (longlong)iVar9 * 4;
          iVar9 = FName::Compare(puVar15,puVar16);
          if (-1 < iVar9) break;
          if (puVar15 != puVar16) {
            uVar1 = *(undefined4 *)((longlong)puVar16 + 4);
            uVar2 = *(undefined4 *)(puVar16 + 1);
            uVar3 = *(undefined4 *)((longlong)puVar16 + 0xc);
            uVar4 = *puVar15;
            uVar5 = puVar15[1];
            uVar6 = puVar15[2];
            uVar7 = puVar15[3];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar16;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar1;
            *(undefined4 *)(puVar15 + 1) = uVar2;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar3;
            uVar8 = puVar16[3];
            puVar15[2] = puVar16[2];
            puVar15[3] = uVar8;
            *puVar16 = uVar4;
            puVar16[1] = uVar5;
            puVar16[2] = uVar6;
            puVar16[3] = uVar7;
          }
          iVar9 = iVar14;
        } while (iVar14 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar17 = puVar17 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1422b9fe0 FUN_1422b9fe0 body=1008 status=ok
// SIG undefined FUN_1422b9fe0(void)

void FUN_1422b9fe0(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  
  iVar24 = (param_2 + -2) / 2;
  if (-1 < iVar24) {
    iVar28 = iVar24 * 2 + 1;
    iVar1 = iVar28;
    iVar26 = iVar24;
joined_r0x0001422ba038:
    do {
      if (iVar28 < param_2) {
        iVar28 = iVar24 * 2;
        iVar27 = iVar28 + 1;
        if (iVar28 + 2 < param_2) {
          iVar25 = FName::Compare(param_1 + (longlong)(iVar28 + 2) * 0x12,
                                  param_1 + (longlong)iVar27 * 0x12);
          if (iVar25 < 0) {
            iVar27 = iVar28;
          }
          iVar27 = iVar27 + 1;
        }
        puVar29 = param_1 + (longlong)iVar27 * 0x12;
        puVar31 = param_1 + (longlong)iVar24 * 0x12;
        iVar24 = FName::Compare(puVar31,puVar29);
        if (iVar24 < 0) {
          if (puVar31 != puVar29) {
            uVar5 = puVar29[1];
            uVar6 = *puVar31;
            uVar7 = puVar31[1];
            uVar8 = puVar31[2];
            uVar9 = puVar31[3];
            uVar10 = puVar31[4];
            uVar11 = puVar31[5];
            uVar12 = puVar31[6];
            uVar13 = puVar31[7];
            uVar14 = puVar31[8];
            uVar15 = puVar31[9];
            uVar16 = puVar31[10];
            uVar17 = puVar31[0xb];
            uVar18 = puVar31[0xc];
            uVar19 = puVar31[0xd];
            uVar20 = puVar31[0xe];
            uVar21 = puVar31[0xf];
            uVar22 = puVar31[0x10];
            uVar23 = puVar31[0x11];
            *puVar31 = *puVar29;
            puVar31[1] = uVar5;
            uVar5 = puVar29[3];
            puVar31[2] = puVar29[2];
            puVar31[3] = uVar5;
            uVar5 = puVar29[5];
            puVar31[4] = puVar29[4];
            puVar31[5] = uVar5;
            uVar5 = puVar29[7];
            puVar31[6] = puVar29[6];
            puVar31[7] = uVar5;
            uVar5 = puVar29[9];
            puVar31[8] = puVar29[8];
            puVar31[9] = uVar5;
            uVar5 = puVar29[0xb];
            puVar31[10] = puVar29[10];
            puVar31[0xb] = uVar5;
            uVar5 = puVar29[0xd];
            puVar31[0xc] = puVar29[0xc];
            puVar31[0xd] = uVar5;
            uVar5 = puVar29[0xf];
            puVar31[0xe] = puVar29[0xe];
            puVar31[0xf] = uVar5;
            uVar2 = *(undefined4 *)((longlong)puVar29 + 0x84);
            uVar3 = *(undefined4 *)(puVar29 + 0x11);
            uVar4 = *(undefined4 *)((longlong)puVar29 + 0x8c);
            *(undefined4 *)(puVar31 + 0x10) = *(undefined4 *)(puVar29 + 0x10);
            *(undefined4 *)((longlong)puVar31 + 0x84) = uVar2;
            *(undefined4 *)(puVar31 + 0x11) = uVar3;
            *(undefined4 *)((longlong)puVar31 + 0x8c) = uVar4;
            *puVar29 = uVar6;
            puVar29[1] = uVar7;
            puVar29[2] = uVar8;
            puVar29[3] = uVar9;
            puVar29[4] = uVar10;
            puVar29[5] = uVar11;
            puVar29[6] = uVar12;
            puVar29[7] = uVar13;
            puVar29[8] = uVar14;
            puVar29[9] = uVar15;
            puVar29[10] = uVar16;
            puVar29[0xb] = uVar17;
            puVar29[0xc] = uVar18;
            puVar29[0xd] = uVar19;
            puVar29[0xe] = uVar20;
            puVar29[0xf] = uVar21;
            puVar29[0x10] = uVar22;
            puVar29[0x11] = uVar23;
          }
          iVar28 = iVar27 * 2 + 1;
          iVar24 = iVar27;
          goto joined_r0x0001422ba038;
        }
      }
      iVar28 = iVar1 + -2;
      iVar24 = iVar26 + -1;
      iVar1 = iVar28;
      iVar26 = iVar24;
    } while (-1 < iVar24);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar31 = param_1 + (longlong)param_2 * 0x12;
    do {
      if (param_1 != puVar31) {
        uVar5 = puVar31[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar8 = param_1[2];
        uVar9 = param_1[3];
        uVar10 = param_1[4];
        uVar11 = param_1[5];
        uVar12 = param_1[6];
        uVar13 = param_1[7];
        uVar14 = param_1[8];
        uVar15 = param_1[9];
        uVar16 = param_1[10];
        uVar17 = param_1[0xb];
        uVar18 = param_1[0xc];
        uVar19 = param_1[0xd];
        uVar20 = param_1[0xe];
        uVar21 = param_1[0xf];
        uVar22 = param_1[0x10];
        uVar23 = param_1[0x11];
        *param_1 = *puVar31;
        param_1[1] = uVar5;
        uVar5 = puVar31[3];
        param_1[2] = puVar31[2];
        param_1[3] = uVar5;
        uVar5 = puVar31[5];
        param_1[4] = puVar31[4];
        param_1[5] = uVar5;
        uVar5 = puVar31[7];
        param_1[6] = puVar31[6];
        param_1[7] = uVar5;
        uVar5 = puVar31[9];
        param_1[8] = puVar31[8];
        param_1[9] = uVar5;
        uVar5 = puVar31[0xb];
        param_1[10] = puVar31[10];
        param_1[0xb] = uVar5;
        uVar5 = puVar31[0xd];
        param_1[0xc] = puVar31[0xc];
        param_1[0xd] = uVar5;
        uVar5 = puVar31[0xf];
        param_1[0xe] = puVar31[0xe];
        param_1[0xf] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar31 + 0x84);
        uVar3 = *(undefined4 *)(puVar31 + 0x11);
        uVar4 = *(undefined4 *)((longlong)puVar31 + 0x8c);
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar31 + 0x10);
        *(undefined4 *)((longlong)param_1 + 0x84) = uVar2;
        *(undefined4 *)(param_1 + 0x11) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
        *puVar31 = uVar6;
        puVar31[1] = uVar7;
        puVar31[2] = uVar8;
        puVar31[3] = uVar9;
        puVar31[4] = uVar10;
        puVar31[5] = uVar11;
        puVar31[6] = uVar12;
        puVar31[7] = uVar13;
        puVar31[8] = uVar14;
        puVar31[9] = uVar15;
        puVar31[10] = uVar16;
        puVar31[0xb] = uVar17;
        puVar31[0xc] = uVar18;
        puVar31[0xd] = uVar19;
        puVar31[0xe] = uVar20;
        puVar31[0xf] = uVar21;
        puVar31[0x10] = uVar22;
        puVar31[0x11] = uVar23;
      }
      iVar24 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar24 * 2;
          iVar28 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            iVar26 = FName::Compare(param_1 + (longlong)(iVar1 + 2) * 0x12,
                                    param_1 + (longlong)iVar28 * 0x12);
            if (iVar26 < 0) {
              iVar28 = iVar1;
            }
            iVar28 = iVar28 + 1;
          }
          puVar30 = param_1 + (longlong)iVar28 * 0x12;
          puVar29 = param_1 + (longlong)iVar24 * 0x12;
          iVar24 = FName::Compare(puVar29,puVar30);
          if (-1 < iVar24) break;
          if (puVar29 != puVar30) {
            uVar5 = puVar30[1];
            uVar6 = *puVar29;
            uVar7 = puVar29[1];
            uVar8 = puVar29[2];
            uVar9 = puVar29[3];
            uVar10 = puVar29[4];
            uVar11 = puVar29[5];
            uVar12 = puVar29[6];
            uVar13 = puVar29[7];
            uVar14 = puVar29[8];
            uVar15 = puVar29[9];
            uVar16 = puVar29[10];
            uVar17 = puVar29[0xb];
            uVar18 = puVar29[0xc];
            uVar19 = puVar29[0xd];
            uVar20 = puVar29[0xe];
            uVar21 = puVar29[0xf];
            uVar22 = puVar29[0x10];
            uVar23 = puVar29[0x11];
            *puVar29 = *puVar30;
            puVar29[1] = uVar5;
            uVar5 = puVar30[3];
            puVar29[2] = puVar30[2];
            puVar29[3] = uVar5;
            uVar5 = puVar30[5];
            puVar29[4] = puVar30[4];
            puVar29[5] = uVar5;
            uVar5 = puVar30[7];
            puVar29[6] = puVar30[6];
            puVar29[7] = uVar5;
            uVar5 = puVar30[9];
            puVar29[8] = puVar30[8];
            puVar29[9] = uVar5;
            uVar5 = puVar30[0xb];
            puVar29[10] = puVar30[10];
            puVar29[0xb] = uVar5;
            uVar5 = puVar30[0xd];
            puVar29[0xc] = puVar30[0xc];
            puVar29[0xd] = uVar5;
            uVar5 = puVar30[0xf];
            puVar29[0xe] = puVar30[0xe];
            puVar29[0xf] = uVar5;
            uVar2 = *(undefined4 *)((longlong)puVar30 + 0x84);
            uVar3 = *(undefined4 *)(puVar30 + 0x11);
            uVar4 = *(undefined4 *)((longlong)puVar30 + 0x8c);
            *(undefined4 *)(puVar29 + 0x10) = *(undefined4 *)(puVar30 + 0x10);
            *(undefined4 *)((longlong)puVar29 + 0x84) = uVar2;
            *(undefined4 *)(puVar29 + 0x11) = uVar3;
            *(undefined4 *)((longlong)puVar29 + 0x8c) = uVar4;
            *puVar30 = uVar6;
            puVar30[1] = uVar7;
            puVar30[2] = uVar8;
            puVar30[3] = uVar9;
            puVar30[4] = uVar10;
            puVar30[5] = uVar11;
            puVar30[6] = uVar12;
            puVar30[7] = uVar13;
            puVar30[8] = uVar14;
            puVar30[9] = uVar15;
            puVar30[10] = uVar16;
            puVar30[0xb] = uVar17;
            puVar30[0xc] = uVar18;
            puVar30[0xd] = uVar19;
            puVar30[0xe] = uVar20;
            puVar30[0xf] = uVar21;
            puVar30[0x10] = uVar22;
            puVar30[0x11] = uVar23;
          }
          iVar24 = iVar28;
        } while (iVar28 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar31 = puVar31 + -0x12;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1422ba3d0 FUN_1422ba3d0 body=1248 status=ok
// SIG undefined FUN_1422ba3d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422ba3d0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 (*pauVar11) [16];
  float fVar12;
  float fVar13;
  undefined1 auStack_398 [48];
  undefined8 local_368;
  longlong local_358;
  longlong lStack_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_398;
    lStack_350 = param_1 + (param_2 - 1) * 8;
    fVar12 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar12 = fVar12 + 1.8446744e+19;
    }
    local_358 = param_1;
    fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
    local_348 = (undefined4)(longlong)(fVar12 + fVar12);
    _guard_xfg_dispatch_icall_nop(local_340,0,0x2e8);
    pauVar11 = (undefined1 (*) [16])&local_358;
    do {
      uVar1 = *(undefined8 *)pauVar11[1];
      local_368._0_4_ = (int)uVar1;
      plVar9 = SUB168(*pauVar11,0);
      plVar6 = SUB168(*pauVar11,8);
      lVar5 = ((longlong)plVar6 - (longlong)plVar9 >> 3) + 1;
      plVar10 = plVar9;
      if ((int)local_368 != 0) {
LAB_1422ba4c0:
        if (8 < lVar5) {
          if (lVar5 < 0) {
            lVar5 = lVar5 + 1;
          }
          plVar7 = plVar6 + 1;
          lVar2 = plVar10[lVar5 >> 1];
          plVar10[lVar5 >> 1] = *plVar10;
          *plVar10 = lVar2;
          plVar9 = plVar10;
LAB_1422ba4f0:
          plVar9 = plVar9 + 1;
          if (plVar9 <= plVar6) goto code_r0x0001422ba4fd;
          goto LAB_1422ba5d0;
        }
        for (; plVar7 = plVar10, plVar9 = plVar10, plVar10 < plVar6; plVar6 = plVar6 + -1) {
          while (plVar9 = plVar9 + 1, plVar9 <= plVar6) {
            plVar8 = (longlong *)*plVar7;
            plVar3 = (longlong *)*plVar9;
            fVar12 = *(float *)(plVar8 + 0xe) * *(float *)(plVar8 + 0xd) *
                     *(float *)((longlong)plVar8 + 0x6c);
            if (fVar12 <= 0.0) {
              if ((*(byte *)((longlong)plVar8 + 0xa6) & 1) == 0) {
                fVar12 = *(float *)((longlong)plVar8 + 0x84) - 201.0;
              }
              else {
                fVar12 = *(float *)((longlong)plVar8 + 0x84) * fVar12 - 101.0;
              }
            }
            else if ((*plVar8 == 0) || (-1 < *(char *)(*plVar8 + 0x30))) {
              fVar12 = fVar12 * *(float *)((longlong)plVar8 + 0x84);
            }
            else {
              fVar12 = *(float *)((longlong)plVar8 + 0x84);
            }
            fVar13 = *(float *)(plVar3 + 0xe) * *(float *)(plVar3 + 0xd) *
                     *(float *)((longlong)plVar3 + 0x6c);
            if (fVar13 <= 0.0) {
              if ((*(byte *)((longlong)plVar3 + 0xa6) & 1) == 0) {
                fVar13 = *(float *)((longlong)plVar3 + 0x84) - 201.0;
              }
              else {
                fVar13 = *(float *)((longlong)plVar3 + 0x84) * fVar13 - 101.0;
              }
            }
            else if ((*plVar3 == 0) || (-1 < *(char *)(*plVar3 + 0x30))) {
              fVar13 = fVar13 * *(float *)((longlong)plVar3 + 0x84);
            }
            else {
              fVar13 = *(float *)((longlong)plVar3 + 0x84);
            }
            if (fVar12 < fVar13) {
              plVar7 = plVar9;
            }
          }
          lVar5 = *plVar7;
          *plVar7 = *plVar6;
          *plVar6 = lVar5;
        }
        goto LAB_1422ba74f;
      }
LAB_1422ba740:
      local_368 = uVar1;
      FUN_1422b97b0(plVar9,lVar5,param_3,param_4);
LAB_1422ba74f:
      pauVar11 = (undefined1 (*) [16])(pauVar11[-2] + 8);
    } while ((undefined1 (*) [16])&local_358 <= pauVar11);
  }
  return;
code_r0x0001422ba4fd:
  plVar8 = (longlong *)*plVar10;
  plVar3 = (longlong *)*plVar9;
  fVar12 = *(float *)(plVar8 + 0xe) * *(float *)(plVar8 + 0xd) * *(float *)((longlong)plVar8 + 0x6c)
  ;
  if (fVar12 <= 0.0) {
    if ((*(byte *)((longlong)plVar8 + 0xa6) & 1) == 0) {
      fVar12 = *(float *)((longlong)plVar8 + 0x84) - 201.0;
    }
    else {
      fVar12 = *(float *)((longlong)plVar8 + 0x84) * fVar12 - 101.0;
    }
  }
  else if ((*plVar8 == 0) || (-1 < *(char *)(*plVar8 + 0x30))) {
    fVar12 = fVar12 * *(float *)((longlong)plVar8 + 0x84);
  }
  else {
    fVar12 = *(float *)((longlong)plVar8 + 0x84);
  }
  fVar13 = *(float *)(plVar3 + 0xe) * *(float *)(plVar3 + 0xd) * *(float *)((longlong)plVar3 + 0x6c)
  ;
  if (fVar13 <= 0.0) {
    if ((*(byte *)((longlong)plVar3 + 0xa6) & 1) == 0) {
      fVar13 = *(float *)((longlong)plVar3 + 0x84) - 201.0;
    }
    else {
      fVar13 = *(float *)((longlong)plVar3 + 0x84) * fVar13 - 101.0;
    }
  }
  else if ((*plVar3 == 0) || (-1 < *(char *)(*plVar3 + 0x30))) {
    fVar13 = fVar13 * *(float *)((longlong)plVar3 + 0x84);
  }
  else {
    fVar13 = *(float *)((longlong)plVar3 + 0x84);
  }
  if (fVar13 <= fVar12) goto LAB_1422ba4f0;
LAB_1422ba5d0:
  do {
    plVar8 = plVar7;
    plVar7 = plVar8 + -1;
    if (plVar7 <= plVar10) break;
    plVar3 = (longlong *)*plVar7;
    plVar4 = (longlong *)*plVar10;
    fVar12 = *(float *)(plVar3 + 0xe) * *(float *)(plVar3 + 0xd) *
             *(float *)((longlong)plVar3 + 0x6c);
    if (fVar12 <= 0.0) {
      if ((*(byte *)((longlong)plVar3 + 0xa6) & 1) == 0) {
        fVar12 = *(float *)((longlong)plVar3 + 0x84) - 201.0;
      }
      else {
        fVar12 = *(float *)((longlong)plVar3 + 0x84) * fVar12 - 101.0;
      }
    }
    else if ((*plVar3 == 0) || (-1 < *(char *)(*plVar3 + 0x30))) {
      fVar12 = fVar12 * *(float *)((longlong)plVar3 + 0x84);
    }
    else {
      fVar12 = *(float *)((longlong)plVar3 + 0x84);
    }
    fVar13 = *(float *)(plVar4 + 0xe) * *(float *)(plVar4 + 0xd) *
             *(float *)((longlong)plVar4 + 0x6c);
    if (fVar13 <= 0.0) {
      if ((*(byte *)((longlong)plVar4 + 0xa6) & 1) == 0) {
        fVar13 = *(float *)((longlong)plVar4 + 0x84) - 201.0;
      }
      else {
        fVar13 = *(float *)((longlong)plVar4 + 0x84) * fVar13 - 101.0;
      }
    }
    else if ((*plVar4 == 0) || (-1 < *(char *)(*plVar4 + 0x30))) {
      fVar13 = fVar13 * *(float *)((longlong)plVar4 + 0x84);
    }
    else {
      fVar13 = *(float *)((longlong)plVar4 + 0x84);
    }
  } while (fVar13 <= fVar12);
  if (plVar9 <= plVar7) {
    lVar5 = *plVar9;
    *plVar9 = *plVar7;
    *plVar7 = lVar5;
    goto LAB_1422ba4f0;
  }
  lVar5 = *plVar10;
  local_368._0_4_ = (int)local_368 + -1;
  *plVar10 = *plVar7;
  *plVar7 = lVar5;
  if ((longlong)((longlong)plVar7 + (-8 - (longlong)plVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar6 - (longlong)plVar9 & 0xfffffffffffffff8U)) {
    if (plVar9 < plVar6) {
      *(longlong **)*pauVar11 = plVar9;
      *(longlong **)(*pauVar11 + 8) = plVar6;
      *(int *)pauVar11[1] = (int)local_368;
      pauVar11 = (undefined1 (*) [16])(pauVar11[1] + 8);
    }
    if (plVar7 <= plVar10 + 1) goto LAB_1422ba74f;
    plVar6 = plVar8 + -2;
    plVar9 = plVar10;
  }
  else {
    if (plVar10 + 1 < plVar7) {
      *(longlong **)*pauVar11 = plVar10;
      *(longlong **)(*pauVar11 + 8) = plVar8 + -2;
      *(int *)pauVar11[1] = (int)local_368;
      pauVar11 = (undefined1 (*) [16])(pauVar11[1] + 8);
    }
    if (plVar6 <= plVar9) goto LAB_1422ba74f;
  }
  lVar5 = ((longlong)plVar6 - (longlong)plVar9 >> 3) + 1;
  plVar10 = plVar9;
  if ((int)local_368 == 0) goto LAB_1422ba740;
  goto LAB_1422ba4c0;
}



// FUNCTION 1422ba8b0 FUN_1422ba8b0 body=972 status=ok
// SIG undefined FUN_1422ba8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422ba8b0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  int local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar16 = _guard_xfg_dispatch_icall_nop(fVar16);
    local_318 = (undefined4)(longlong)(fVar16 + fVar16);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar15 = &local_328;
    do {
      plVar3 = (longlong *)*plVar15;
      plVar13 = (longlong *)plVar15[1];
      local_338 = (int)plVar15[2];
      lVar8 = ((longlong)plVar13 - (longlong)plVar3 >> 3) + 1;
      plVar5 = plVar3;
      if (local_338 != 0) {
LAB_1422ba980:
        if (8 < lVar8) {
          if (lVar8 < 0) {
            lVar8 = lVar8 + 1;
          }
          lVar1 = plVar5[lVar8 >> 1];
          plVar5[lVar8 >> 1] = *plVar5;
          plVar9 = plVar13 + 1;
          *plVar5 = lVar1;
          plVar3 = plVar5;
LAB_1422ba9b0:
          plVar3 = plVar3 + 1;
          if (plVar3 <= plVar13) goto code_r0x0001422ba9b9;
          goto LAB_1422ba9d0;
        }
        for (; plVar9 = plVar5, plVar3 = plVar5, plVar5 < plVar13; plVar13 = plVar13 + -1) {
          while (plVar3 = plVar3 + 1, plVar3 <= plVar13) {
            if (*(float *)(*plVar3 + 0x84) < *(float *)(*plVar9 + 0x84)) {
              plVar9 = plVar3;
            }
          }
          lVar8 = *plVar9;
          *plVar9 = *plVar13;
          *plVar13 = lVar8;
        }
        goto LAB_1422babdc;
      }
LAB_1422baa8f:
      iVar14 = (int)lVar8;
      iVar2 = (iVar14 + -2) / 2;
      if (-1 < iVar2) {
        iVar4 = iVar2 * 2 + 1;
        iVar7 = iVar4;
        iVar6 = iVar2;
joined_r0x0001422baaac:
        do {
          if (iVar4 < iVar14) {
            iVar11 = iVar2 * 2 + 1;
            iVar4 = iVar2 * 2 + 2;
            iVar12 = iVar11;
            if ((iVar4 < iVar14) &&
               (iVar12 = iVar4,
               *(float *)(plVar3[iVar11] + 0x84) <= *(float *)(plVar3[iVar4] + 0x84) &&
               *(float *)(plVar3[iVar4] + 0x84) != *(float *)(plVar3[iVar11] + 0x84))) {
              iVar12 = iVar11;
            }
            lVar8 = plVar3[iVar2];
            if (*(float *)(plVar3[iVar12] + 0x84) < *(float *)(lVar8 + 0x84)) {
              plVar3[iVar2] = plVar3[iVar12];
              iVar4 = iVar12 * 2 + 1;
              plVar3[iVar12] = lVar8;
              iVar2 = iVar12;
              goto joined_r0x0001422baaac;
            }
          }
          iVar4 = iVar7 + -2;
          iVar2 = iVar6 + -1;
          iVar7 = iVar4;
          iVar6 = iVar2;
        } while (-1 < iVar2);
      }
      iVar14 = iVar14 + -1;
      lVar8 = (longlong)iVar14;
      if (0 < iVar14) {
        do {
          iVar2 = 0;
          lVar1 = *plVar3;
          *plVar3 = plVar3[lVar8];
          plVar3[lVar8] = lVar1;
          if (1 < iVar14) {
            do {
              iVar6 = iVar2 * 2 + 1;
              iVar4 = iVar2 * 2 + 2;
              iVar7 = iVar6;
              if ((iVar4 < iVar14) &&
                 (iVar7 = iVar4,
                 *(float *)(plVar3[iVar6] + 0x84) <= *(float *)(plVar3[iVar4] + 0x84) &&
                 *(float *)(plVar3[iVar4] + 0x84) != *(float *)(plVar3[iVar6] + 0x84))) {
                iVar7 = iVar6;
              }
              lVar1 = plVar3[iVar2];
              if (*(float *)(lVar1 + 0x84) <= *(float *)(plVar3[iVar7] + 0x84)) break;
              plVar3[iVar2] = plVar3[iVar7];
              plVar3[iVar7] = lVar1;
              iVar2 = iVar7;
            } while (iVar7 * 2 + 1 < iVar14);
          }
          iVar14 = iVar14 + -1;
          lVar8 = lVar8 + -1;
        } while (0 < lVar8);
      }
LAB_1422babdc:
      plVar15 = plVar15 + -3;
    } while (&local_328 <= plVar15);
  }
  return;
code_r0x0001422ba9b9:
  if (*(float *)(*plVar5 + 0x84) <= *(float *)(*plVar3 + 0x84)) goto LAB_1422ba9b0;
LAB_1422ba9d0:
  do {
    plVar10 = plVar9;
    lVar8 = plVar10[-1];
    plVar9 = plVar10 + -1;
    if (plVar9 <= plVar5) break;
  } while (*(float *)(lVar8 + 0x84) <= *(float *)(*plVar5 + 0x84));
  if (plVar3 <= plVar9) {
    lVar1 = *plVar3;
    *plVar3 = lVar8;
    *plVar9 = lVar1;
    goto LAB_1422ba9b0;
  }
  lVar1 = *plVar5;
  local_338 = local_338 + -1;
  *plVar5 = lVar8;
  *plVar9 = lVar1;
  if ((longlong)((longlong)plVar9 + (-8 - (longlong)plVar5) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar13 - (longlong)plVar3 & 0xfffffffffffffff8U)) {
    if (plVar3 < plVar13) {
      *plVar15 = (longlong)plVar3;
      plVar15[1] = (longlong)plVar13;
      *(int *)(plVar15 + 2) = local_338;
      plVar15 = plVar15 + 3;
    }
    if (plVar9 <= plVar5 + 1) goto LAB_1422babdc;
    plVar13 = plVar10 + -2;
    plVar3 = plVar5;
  }
  else {
    if (plVar5 + 1 < plVar9) {
      *plVar15 = (longlong)plVar5;
      plVar15[1] = (longlong)(plVar10 + -2);
      *(int *)(plVar15 + 2) = local_338;
      plVar15 = plVar15 + 3;
    }
    if (plVar13 <= plVar3) goto LAB_1422babdc;
  }
  lVar8 = ((longlong)plVar13 - (longlong)plVar3 >> 3) + 1;
  plVar5 = plVar3;
  if (local_338 == 0) goto LAB_1422baa8f;
  goto LAB_1422ba980;
}



// FUNCTION 1422bac80 IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<FName,FActivatedReverb>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FActivatedReverb>,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FActivatedReverb,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>_>::FValueComparisonClass<<lambda_6a63a3bd87c137504a1d5d9f46b4839a>_>_>_>_>_> body=969 status=ok
// SIG undefined IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<FName,FActivatedReverb>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FActivatedReverb>,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FActivatedReverb,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>_>::FValueComparisonClass<<lambda_6a63a3bd87c137504a1d5d9f46b4839a>_>_>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<FName,FActivatedReverb>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FActivatedReverb>,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FActivatedReverb,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>_>::FValueComparisonClass<<lambda_6a63a3bd87c137504a1d5d9f46b4839a>_>_>_>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  float fVar21;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    fVar21 = (float)(longlong)param_2;
    lStack_330 = param_1 + -0x38 + param_2 * 0x38;
    if ((longlong)param_2 < 0) {
      fVar21 = fVar21 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar21 = ::_guard_xfg_dispatch_icall_nop(fVar21);
    local_328 = (undefined4)(longlong)(fVar21 + fVar21);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar20 = &local_338;
    do {
      puVar19 = (undefined8 *)*plVar20;
      puVar14 = (undefined8 *)plVar20[1];
      lVar1 = plVar20[2];
      local_348._0_4_ = (int)lVar1;
      lVar13 = ((longlong)puVar14 - (longlong)puVar19) / 0x38 + 1;
      puVar18 = puVar19;
      if ((int)local_348 != 0) {
LAB_1422bad70:
        if (8 < lVar13) {
          puVar19 = puVar18 + (lVar13 / 2) * 7;
          if (puVar19 != puVar18) {
            uVar6 = puVar18[1];
            uVar7 = *puVar19;
            uVar8 = puVar19[1];
            uVar9 = puVar19[2];
            uVar10 = puVar19[3];
            uVar11 = puVar19[4];
            uVar12 = puVar19[5];
            uVar2 = puVar19[6];
            *puVar19 = *puVar18;
            puVar19[1] = uVar6;
            uVar6 = puVar18[3];
            puVar19[2] = puVar18[2];
            puVar19[3] = uVar6;
            uVar3 = *(undefined4 *)((longlong)puVar18 + 0x24);
            uVar4 = *(undefined4 *)(puVar18 + 5);
            uVar5 = *(undefined4 *)((longlong)puVar18 + 0x2c);
            *(undefined4 *)(puVar19 + 4) = *(undefined4 *)(puVar18 + 4);
            *(undefined4 *)((longlong)puVar19 + 0x24) = uVar3;
            *(undefined4 *)(puVar19 + 5) = uVar4;
            *(undefined4 *)((longlong)puVar19 + 0x2c) = uVar5;
            puVar19[6] = puVar18[6];
            *puVar18 = uVar7;
            puVar18[1] = uVar8;
            puVar18[2] = uVar9;
            puVar18[3] = uVar10;
            puVar18[4] = uVar11;
            puVar18[5] = uVar12;
            puVar18[6] = uVar2;
          }
          puVar16 = puVar14 + 7;
          puVar19 = puVar18;
LAB_1422bade0:
          puVar15 = puVar19;
          puVar19 = puVar15 + 7;
          if (puVar19 <= puVar14) goto code_r0x0001422bade9;
          goto LAB_1422badf6;
        }
        for (; puVar16 = puVar18, puVar19 = puVar18, puVar18 < puVar14; puVar14 = puVar14 + -7) {
          while (puVar19 = puVar19 + 7, puVar19 <= puVar14) {
            if (*(float *)(puVar19 + 5) < *(float *)(puVar16 + 5)) {
              puVar16 = puVar19;
            }
          }
          if (puVar16 != puVar14) {
            uVar6 = puVar14[1];
            uVar7 = *puVar16;
            uVar8 = puVar16[1];
            uVar9 = puVar16[2];
            uVar10 = puVar16[3];
            uVar11 = puVar16[4];
            uVar12 = puVar16[5];
            uVar2 = puVar16[6];
            *puVar16 = *puVar14;
            puVar16[1] = uVar6;
            uVar6 = puVar14[3];
            puVar16[2] = puVar14[2];
            puVar16[3] = uVar6;
            uVar6 = puVar14[5];
            puVar16[4] = puVar14[4];
            puVar16[5] = uVar6;
            puVar16[6] = puVar14[6];
            *puVar14 = uVar7;
            puVar14[1] = uVar8;
            puVar14[2] = uVar9;
            puVar14[3] = uVar10;
            puVar14[4] = uVar11;
            puVar14[5] = uVar12;
            puVar14[6] = uVar2;
          }
        }
        goto LAB_1422baf7a;
      }
LAB_1422baf6b:
      local_348 = lVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<FName,FActivatedReverb>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FActivatedReverb>,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FActivatedReverb,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>_>::FValueComparisonClass<<lambda_6a63a3bd87c137504a1d5d9f46b4839a>_>_>_>_>_>
                (puVar19,lVar13,param_3,param_4);
LAB_1422baf7a:
      plVar20 = plVar20 + -3;
    } while (&local_338 <= plVar20);
  }
  return;
code_r0x0001422bade9:
  if (*(float *)(puVar18 + 5) <= *(float *)(puVar15 + 0xc)) goto LAB_1422bade0;
LAB_1422badf6:
  do {
    puVar17 = puVar16;
    puVar16 = puVar17 + -7;
    if (puVar16 <= puVar18) break;
  } while (*(float *)(puVar17 + -2) <= *(float *)(puVar18 + 5));
  if (puVar19 <= puVar16) {
    if (puVar19 != puVar16) {
      uVar6 = puVar17[-6];
      uVar7 = *puVar19;
      uVar8 = puVar15[8];
      uVar9 = puVar15[9];
      uVar10 = puVar15[10];
      uVar11 = puVar15[0xb];
      uVar12 = puVar15[0xc];
      uVar2 = puVar15[0xd];
      *puVar19 = *puVar16;
      puVar15[8] = uVar6;
      uVar6 = puVar17[-4];
      puVar15[9] = puVar17[-5];
      puVar15[10] = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar17 + -0x14);
      uVar4 = *(undefined4 *)(puVar17 + -2);
      uVar5 = *(undefined4 *)((longlong)puVar17 + -0xc);
      *(undefined4 *)(puVar15 + 0xb) = *(undefined4 *)(puVar17 + -3);
      *(undefined4 *)((longlong)puVar15 + 0x5c) = uVar3;
      *(undefined4 *)(puVar15 + 0xc) = uVar4;
      *(undefined4 *)((longlong)puVar15 + 100) = uVar5;
      puVar15[0xd] = puVar17[-1];
      *puVar16 = uVar7;
      puVar17[-6] = uVar8;
      puVar17[-5] = uVar9;
      puVar17[-4] = uVar10;
      puVar17[-3] = uVar11;
      puVar17[-2] = uVar12;
      puVar17[-1] = uVar2;
    }
    goto LAB_1422bade0;
  }
  if (puVar18 != puVar16) {
    uVar6 = puVar17[-6];
    uVar7 = *puVar18;
    uVar8 = puVar18[1];
    uVar9 = puVar18[2];
    uVar10 = puVar18[3];
    uVar11 = puVar18[4];
    uVar12 = puVar18[5];
    uVar2 = puVar18[6];
    *puVar18 = *puVar16;
    puVar18[1] = uVar6;
    uVar6 = puVar17[-4];
    puVar18[2] = puVar17[-5];
    puVar18[3] = uVar6;
    uVar3 = *(undefined4 *)((longlong)puVar17 + -0x14);
    uVar4 = *(undefined4 *)(puVar17 + -2);
    uVar5 = *(undefined4 *)((longlong)puVar17 + -0xc);
    *(undefined4 *)(puVar18 + 4) = *(undefined4 *)(puVar17 + -3);
    *(undefined4 *)((longlong)puVar18 + 0x24) = uVar3;
    *(undefined4 *)(puVar18 + 5) = uVar4;
    *(undefined4 *)((longlong)puVar18 + 0x2c) = uVar5;
    puVar18[6] = puVar17[-1];
    *puVar16 = uVar7;
    puVar17[-6] = uVar8;
    puVar17[-5] = uVar9;
    puVar17[-4] = uVar10;
    puVar17[-3] = uVar11;
    puVar17[-2] = uVar12;
    puVar17[-1] = uVar2;
  }
  local_348._0_4_ = (int)local_348 + -1;
  if (((longlong)puVar16 + (-0x38 - (longlong)puVar18)) / 0x38 <
      ((longlong)puVar14 - (longlong)puVar19) / 0x38) {
    if (puVar19 < puVar14) {
      *plVar20 = (longlong)puVar19;
      plVar20[1] = (longlong)puVar14;
      *(int *)(plVar20 + 2) = (int)local_348;
      plVar20 = plVar20 + 3;
    }
    if (puVar16 <= puVar18 + 7) goto LAB_1422baf7a;
    puVar14 = puVar17 + -0xe;
    puVar19 = puVar18;
  }
  else {
    if (puVar18 + 7 < puVar16) {
      *plVar20 = (longlong)puVar18;
      plVar20[1] = (longlong)(puVar17 + -0xe);
      *(int *)(plVar20 + 2) = (int)local_348;
      plVar20 = plVar20 + 3;
    }
    if (puVar14 <= puVar19) goto LAB_1422baf7a;
  }
  lVar13 = ((longlong)puVar14 - (longlong)puVar19) / 0x38 + 1;
  puVar18 = puVar19;
  if ((int)local_348 == 0) goto LAB_1422baf6b;
  goto LAB_1422bad70;
}



// FUNCTION 1422bb050 IntroSortInternal<`UAssetManager::DumpLoadedAssetState'::`17'::FLoadedInfo,FIdentityFunctor,TDereferenceWrapper<`UAssetManager::DumpLoadedAssetState'::`17'::FLoadedInfo,<lambda_a9c53378efbec8498667453e20309952>_>_> body=781 status=ok
// SIG undefined IntroSortInternal<`UAssetManager::DumpLoadedAssetState'::`17'::FLoadedInfo,FIdentityFunctor,TDereferenceWrapper<`UAssetManager::DumpLoadedAssetState'::`17'::FLoadedInfo,<lambda_a9c53378efbec8498667453e20309952>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<_UAssetManager::DumpLoadedAssetState_::_17_::FLoadedInfo,FIdentityFunctor,TDereferenceWrapper<_UAssetManager::DumpLoadedAssetState_::_17_::FLoadedInfo,<lambda_a9c53378efbec8498667453e20309952>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_2 * 0x20 + -0x20 + param_1;
    fVar19 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar19 = fVar19 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar19 = ::_guard_xfg_dispatch_icall_nop(fVar19);
    local_338 = (undefined4)(longlong)(fVar19 + fVar19);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar14 = &local_348;
    do {
      puVar17 = (undefined8 *)*plVar14;
      puVar18 = (undefined8 *)plVar14[1];
      local_358 = plVar14[2];
      lVar10 = ((longlong)puVar18 - (longlong)puVar17 >> 5) + 1;
      puVar16 = puVar17;
      iVar15 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1422bb130:
        if (8 < lVar10) {
          puVar17 = puVar16 + (lVar10 / 2) * 4;
          if (puVar17 != puVar16) {
            uVar2 = *(undefined4 *)((longlong)puVar16 + 4);
            uVar3 = *(undefined4 *)(puVar16 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar16 + 0xc);
            uVar5 = *puVar17;
            uVar6 = puVar17[1];
            uVar7 = puVar17[2];
            uVar8 = puVar17[3];
            *(undefined4 *)puVar17 = *(undefined4 *)puVar16;
            *(undefined4 *)((longlong)puVar17 + 4) = uVar2;
            *(undefined4 *)(puVar17 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar17 + 0xc) = uVar4;
            uVar1 = puVar16[3];
            puVar17[2] = puVar16[2];
            puVar17[3] = uVar1;
            *puVar16 = uVar5;
            puVar16[1] = uVar6;
            puVar16[2] = uVar7;
            puVar16[3] = uVar8;
          }
          puVar11 = puVar18 + 4;
          puVar17 = puVar16;
LAB_1422bb180:
          puVar13 = puVar17;
          puVar17 = puVar13 + 4;
          if (puVar17 <= puVar18) goto code_r0x0001422bb189;
          goto LAB_1422bb1a0;
        }
        for (; puVar11 = puVar16, puVar17 = puVar16, puVar16 < puVar18; puVar18 = puVar18 + -4) {
          while (puVar17 = puVar17 + 4, puVar17 <= puVar18) {
            iVar15 = FName::Compare(puVar11,puVar17);
            if (iVar15 < 0) {
              puVar11 = puVar17;
            }
          }
          if (puVar11 != puVar18) {
            uVar2 = *(undefined4 *)((longlong)puVar18 + 4);
            uVar3 = *(undefined4 *)(puVar18 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar18 + 0xc);
            uVar5 = *puVar11;
            uVar6 = puVar11[1];
            uVar7 = puVar11[2];
            uVar8 = puVar11[3];
            *(undefined4 *)puVar11 = *(undefined4 *)puVar18;
            *(undefined4 *)((longlong)puVar11 + 4) = uVar2;
            *(undefined4 *)(puVar11 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uVar4;
            uVar1 = puVar18[3];
            puVar11[2] = puVar18[2];
            puVar11[3] = uVar1;
            *puVar18 = uVar5;
            puVar18[1] = uVar6;
            puVar18[2] = uVar7;
            puVar18[3] = uVar8;
          }
        }
        goto LAB_1422bb298;
      }
LAB_1422bb289:
      HeapSortInternal<_UAssetManager::DumpLoadedAssetState_::_17_::FLoadedInfo,FIdentityFunctor,TDereferenceWrapper<_UAssetManager::DumpLoadedAssetState_::_17_::FLoadedInfo,<lambda_a9c53378efbec8498667453e20309952>_>_>
                (puVar17,lVar10,param_3,param_4);
LAB_1422bb298:
      plVar14 = plVar14 + -3;
    } while (&local_348 <= plVar14);
  }
  return;
code_r0x0001422bb189:
  iVar9 = FName::Compare(puVar16,puVar17);
  if (-1 < iVar9) goto LAB_1422bb180;
LAB_1422bb1a0:
  do {
    puVar12 = puVar11;
    puVar11 = puVar12 + -4;
    if (puVar11 <= puVar16) break;
    iVar9 = FName::Compare(puVar11,puVar16);
  } while (-1 < iVar9);
  if (puVar17 <= puVar11) {
    if (puVar17 != puVar11) {
      uVar2 = *(undefined4 *)((longlong)puVar12 + -0x1c);
      uVar3 = *(undefined4 *)(puVar12 + -3);
      uVar4 = *(undefined4 *)((longlong)puVar12 + -0x14);
      uVar5 = *puVar17;
      uVar6 = puVar13[5];
      uVar7 = puVar13[6];
      uVar8 = puVar13[7];
      *(undefined4 *)puVar17 = *(undefined4 *)puVar11;
      *(undefined4 *)((longlong)puVar13 + 0x24) = uVar2;
      *(undefined4 *)(puVar13 + 5) = uVar3;
      *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar4;
      uVar1 = puVar12[-1];
      puVar13[6] = puVar12[-2];
      puVar13[7] = uVar1;
      *puVar11 = uVar5;
      puVar12[-3] = uVar6;
      puVar12[-2] = uVar7;
      puVar12[-1] = uVar8;
    }
    goto LAB_1422bb180;
  }
  if (puVar16 != puVar11) {
    uVar2 = *(undefined4 *)((longlong)puVar12 + -0x1c);
    uVar3 = *(undefined4 *)(puVar12 + -3);
    uVar4 = *(undefined4 *)((longlong)puVar12 + -0x14);
    uVar5 = *puVar16;
    uVar6 = puVar16[1];
    uVar7 = puVar16[2];
    uVar8 = puVar16[3];
    *(undefined4 *)puVar16 = *(undefined4 *)puVar11;
    *(undefined4 *)((longlong)puVar16 + 4) = uVar2;
    *(undefined4 *)(puVar16 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar16 + 0xc) = uVar4;
    uVar1 = puVar12[-1];
    puVar16[2] = puVar12[-2];
    puVar16[3] = uVar1;
    *puVar11 = uVar5;
    puVar12[-3] = uVar6;
    puVar12[-2] = uVar7;
    puVar12[-1] = uVar8;
  }
  iVar15 = iVar15 + -1;
  if ((longlong)((longlong)puVar11 + (-0x20 - (longlong)puVar16) & 0xffffffffffffffe0U) <
      (longlong)((longlong)puVar18 - (longlong)puVar17 & 0xffffffffffffffe0U)) {
    if (puVar17 < puVar18) {
      *plVar14 = (longlong)puVar17;
      plVar14[1] = (longlong)puVar18;
      *(int *)(plVar14 + 2) = iVar15;
      plVar14 = plVar14 + 3;
    }
    if (puVar11 <= puVar16 + 4) goto LAB_1422bb298;
    puVar18 = puVar12 + -8;
    puVar17 = puVar16;
  }
  else {
    if (puVar16 + 4 < puVar11) {
      *plVar14 = (longlong)puVar16;
      plVar14[1] = (longlong)(puVar12 + -8);
      *(int *)(plVar14 + 2) = iVar15;
      plVar14 = plVar14 + 3;
    }
    if (puVar18 <= puVar17) goto LAB_1422bb298;
  }
  lVar10 = ((longlong)puVar18 - (longlong)puVar17 >> 5) + 1;
  puVar16 = puVar17;
  if (iVar15 == 0) goto LAB_1422bb289;
  goto LAB_1422bb130;
}



// FUNCTION 1422bb360 FUN_1422bb360 body=1560 status=ok
// SIG undefined FUN_1422bb360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422bb360(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int iVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  float fVar33;
  undefined1 auStack_3d8 [48];
  longlong local_3a8;
  longlong local_398;
  longlong lStack_390;
  undefined4 local_388;
  undefined1 local_380 [744];
  ulonglong local_98;
  
  if (1 < param_2) {
    local_98 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
    lStack_390 = param_2 * 0x90 + -0x90 + param_1;
    fVar33 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar33 = fVar33 + 1.8446744e+19;
    }
    local_398 = param_1;
    fVar33 = _guard_xfg_dispatch_icall_nop(fVar33);
    local_388 = (undefined4)(longlong)(fVar33 + fVar33);
    _guard_xfg_dispatch_icall_nop(local_380,0,0x2e8);
    plVar28 = &local_398;
    do {
      puVar31 = (undefined8 *)*plVar28;
      puVar32 = (undefined8 *)plVar28[1];
      local_3a8 = plVar28[2];
      lVar24 = ((longlong)puVar32 - (longlong)puVar31) / 0x90 + 1;
      puVar30 = puVar31;
      iVar29 = (int)local_3a8;
      if ((int)local_3a8 != 0) {
LAB_1422bb480:
        if (8 < lVar24) {
          if (lVar24 < 0) {
            lVar24 = lVar24 + 1;
          }
          puVar31 = puVar30 + (lVar24 >> 1) * 0x12;
          if (puVar31 != puVar30) {
            uVar1 = puVar30[1];
            uVar5 = *puVar31;
            uVar6 = puVar31[1];
            uVar7 = puVar31[2];
            uVar8 = puVar31[3];
            uVar9 = puVar31[4];
            uVar10 = puVar31[5];
            uVar11 = puVar31[6];
            uVar12 = puVar31[7];
            uVar13 = puVar31[8];
            uVar14 = puVar31[9];
            uVar15 = puVar31[10];
            uVar16 = puVar31[0xb];
            uVar17 = puVar31[0xc];
            uVar18 = puVar31[0xd];
            uVar19 = puVar31[0xe];
            uVar20 = puVar31[0xf];
            uVar21 = puVar31[0x10];
            uVar22 = puVar31[0x11];
            *puVar31 = *puVar30;
            puVar31[1] = uVar1;
            uVar1 = puVar30[3];
            puVar31[2] = puVar30[2];
            puVar31[3] = uVar1;
            uVar1 = puVar30[5];
            puVar31[4] = puVar30[4];
            puVar31[5] = uVar1;
            uVar1 = puVar30[7];
            puVar31[6] = puVar30[6];
            puVar31[7] = uVar1;
            uVar1 = puVar30[9];
            puVar31[8] = puVar30[8];
            puVar31[9] = uVar1;
            uVar1 = puVar30[0xb];
            puVar31[10] = puVar30[10];
            puVar31[0xb] = uVar1;
            uVar1 = puVar30[0xd];
            puVar31[0xc] = puVar30[0xc];
            puVar31[0xd] = uVar1;
            uVar1 = puVar30[0xf];
            puVar31[0xe] = puVar30[0xe];
            puVar31[0xf] = uVar1;
            uVar2 = *(undefined4 *)((longlong)puVar30 + 0x84);
            uVar3 = *(undefined4 *)(puVar30 + 0x11);
            uVar4 = *(undefined4 *)((longlong)puVar30 + 0x8c);
            *(undefined4 *)(puVar31 + 0x10) = *(undefined4 *)(puVar30 + 0x10);
            *(undefined4 *)((longlong)puVar31 + 0x84) = uVar2;
            *(undefined4 *)(puVar31 + 0x11) = uVar3;
            *(undefined4 *)((longlong)puVar31 + 0x8c) = uVar4;
            *puVar30 = uVar5;
            puVar30[1] = uVar6;
            puVar30[2] = uVar7;
            puVar30[3] = uVar8;
            puVar30[4] = uVar9;
            puVar30[5] = uVar10;
            puVar30[6] = uVar11;
            puVar30[7] = uVar12;
            puVar30[8] = uVar13;
            puVar30[9] = uVar14;
            puVar30[10] = uVar15;
            puVar30[0xb] = uVar16;
            puVar30[0xc] = uVar17;
            puVar30[0xd] = uVar18;
            puVar30[0xe] = uVar19;
            puVar30[0xf] = uVar20;
            puVar30[0x10] = uVar21;
            puVar30[0x11] = uVar22;
          }
          puVar26 = puVar32 + 0x12;
          puVar31 = puVar30;
LAB_1422bb560:
          puVar25 = puVar31;
          puVar31 = puVar25 + 0x12;
          if (puVar31 <= puVar32) goto code_r0x0001422bb56c;
          goto LAB_1422bb580;
        }
        for (; puVar26 = puVar30, puVar31 = puVar30, puVar30 < puVar32; puVar32 = puVar32 + -0x12) {
          while (puVar31 = puVar31 + 0x12, puVar31 <= puVar32) {
            iVar29 = FName::Compare(puVar26,puVar31);
            if (iVar29 < 0) {
              puVar26 = puVar31;
            }
          }
          if (puVar26 != puVar32) {
            uVar1 = puVar32[1];
            uVar5 = *puVar26;
            uVar6 = puVar26[1];
            uVar7 = puVar26[2];
            uVar8 = puVar26[3];
            uVar9 = puVar26[4];
            uVar10 = puVar26[5];
            uVar11 = puVar26[6];
            uVar12 = puVar26[7];
            uVar13 = puVar26[8];
            uVar14 = puVar26[9];
            uVar15 = puVar26[10];
            uVar16 = puVar26[0xb];
            uVar17 = puVar26[0xc];
            uVar18 = puVar26[0xd];
            uVar19 = puVar26[0xe];
            uVar20 = puVar26[0xf];
            uVar21 = puVar26[0x10];
            uVar22 = puVar26[0x11];
            *puVar26 = *puVar32;
            puVar26[1] = uVar1;
            uVar1 = puVar32[3];
            puVar26[2] = puVar32[2];
            puVar26[3] = uVar1;
            uVar1 = puVar32[5];
            puVar26[4] = puVar32[4];
            puVar26[5] = uVar1;
            uVar1 = puVar32[7];
            puVar26[6] = puVar32[6];
            puVar26[7] = uVar1;
            uVar1 = puVar32[9];
            puVar26[8] = puVar32[8];
            puVar26[9] = uVar1;
            uVar1 = puVar32[0xb];
            puVar26[10] = puVar32[10];
            puVar26[0xb] = uVar1;
            uVar1 = puVar32[0xd];
            puVar26[0xc] = puVar32[0xc];
            puVar26[0xd] = uVar1;
            uVar1 = puVar32[0xf];
            puVar26[0xe] = puVar32[0xe];
            puVar26[0xf] = uVar1;
            uVar2 = *(undefined4 *)((longlong)puVar32 + 0x84);
            uVar3 = *(undefined4 *)(puVar32 + 0x11);
            uVar4 = *(undefined4 *)((longlong)puVar32 + 0x8c);
            *(undefined4 *)(puVar26 + 0x10) = *(undefined4 *)(puVar32 + 0x10);
            *(undefined4 *)((longlong)puVar26 + 0x84) = uVar2;
            *(undefined4 *)(puVar26 + 0x11) = uVar3;
            *(undefined4 *)((longlong)puVar26 + 0x8c) = uVar4;
            *puVar32 = uVar5;
            puVar32[1] = uVar6;
            puVar32[2] = uVar7;
            puVar32[3] = uVar8;
            puVar32[4] = uVar9;
            puVar32[5] = uVar10;
            puVar32[6] = uVar11;
            puVar32[7] = uVar12;
            puVar32[8] = uVar13;
            puVar32[9] = uVar14;
            puVar32[10] = uVar15;
            puVar32[0xb] = uVar16;
            puVar32[0xc] = uVar17;
            puVar32[0xd] = uVar18;
            puVar32[0xe] = uVar19;
            puVar32[0xf] = uVar20;
            puVar32[0x10] = uVar21;
            puVar32[0x11] = uVar22;
          }
        }
        goto LAB_1422bb7e9;
      }
LAB_1422bb7d0:
      FUN_1422b9fe0(puVar31,lVar24,param_3,param_4);
LAB_1422bb7e9:
      plVar28 = plVar28 + -3;
    } while (&local_398 <= plVar28);
  }
  return;
code_r0x0001422bb56c:
  iVar23 = FName::Compare(puVar30,puVar31);
  if (-1 < iVar23) goto LAB_1422bb560;
LAB_1422bb580:
  do {
    puVar27 = puVar26;
    puVar26 = puVar27 + -0x12;
    if (puVar26 <= puVar30) break;
    iVar23 = FName::Compare(puVar26,puVar30);
  } while (-1 < iVar23);
  if (puVar31 <= puVar26) {
    if (puVar31 != puVar26) {
      uVar1 = puVar27[-0x11];
      uVar5 = *puVar31;
      uVar6 = puVar25[0x13];
      uVar7 = puVar25[0x14];
      uVar8 = puVar25[0x15];
      uVar9 = puVar25[0x16];
      uVar10 = puVar25[0x17];
      uVar11 = puVar25[0x18];
      uVar12 = puVar25[0x19];
      uVar13 = puVar25[0x1a];
      uVar14 = puVar25[0x1b];
      uVar15 = puVar25[0x1c];
      uVar16 = puVar25[0x1d];
      uVar17 = puVar25[0x1e];
      uVar18 = puVar25[0x1f];
      uVar19 = puVar25[0x20];
      uVar20 = puVar25[0x21];
      uVar21 = puVar25[0x22];
      uVar22 = puVar25[0x23];
      *puVar31 = *puVar26;
      puVar25[0x13] = uVar1;
      uVar1 = puVar27[-0xf];
      puVar25[0x14] = puVar27[-0x10];
      puVar25[0x15] = uVar1;
      uVar1 = puVar27[-0xd];
      puVar25[0x16] = puVar27[-0xe];
      puVar25[0x17] = uVar1;
      uVar1 = puVar27[-0xb];
      puVar25[0x18] = puVar27[-0xc];
      puVar25[0x19] = uVar1;
      uVar1 = puVar27[-9];
      puVar25[0x1a] = puVar27[-10];
      puVar25[0x1b] = uVar1;
      uVar1 = puVar27[-7];
      puVar25[0x1c] = puVar27[-8];
      puVar25[0x1d] = uVar1;
      uVar1 = puVar27[-5];
      puVar25[0x1e] = puVar27[-6];
      puVar25[0x1f] = uVar1;
      uVar1 = puVar27[-3];
      puVar25[0x20] = puVar27[-4];
      puVar25[0x21] = uVar1;
      uVar2 = *(undefined4 *)((longlong)puVar27 + -0xc);
      uVar3 = *(undefined4 *)(puVar27 + -1);
      uVar4 = *(undefined4 *)((longlong)puVar27 + -4);
      *(undefined4 *)(puVar25 + 0x22) = *(undefined4 *)(puVar27 + -2);
      *(undefined4 *)((longlong)puVar25 + 0x114) = uVar2;
      *(undefined4 *)(puVar25 + 0x23) = uVar3;
      *(undefined4 *)((longlong)puVar25 + 0x11c) = uVar4;
      *puVar26 = uVar5;
      puVar27[-0x11] = uVar6;
      puVar27[-0x10] = uVar7;
      puVar27[-0xf] = uVar8;
      puVar27[-0xe] = uVar9;
      puVar27[-0xd] = uVar10;
      puVar27[-0xc] = uVar11;
      puVar27[-0xb] = uVar12;
      puVar27[-10] = uVar13;
      puVar27[-9] = uVar14;
      puVar27[-8] = uVar15;
      puVar27[-7] = uVar16;
      puVar27[-6] = uVar17;
      puVar27[-5] = uVar18;
      puVar27[-4] = uVar19;
      puVar27[-3] = uVar20;
      puVar27[-2] = uVar21;
      puVar27[-1] = uVar22;
    }
    goto LAB_1422bb560;
  }
  if (puVar30 != puVar26) {
    uVar1 = puVar27[-0x11];
    uVar5 = *puVar30;
    uVar6 = puVar30[1];
    uVar7 = puVar30[2];
    uVar8 = puVar30[3];
    uVar9 = puVar30[4];
    uVar10 = puVar30[5];
    uVar11 = puVar30[6];
    uVar12 = puVar30[7];
    uVar13 = puVar30[8];
    uVar14 = puVar30[9];
    uVar15 = puVar30[10];
    uVar16 = puVar30[0xb];
    uVar17 = puVar30[0xc];
    uVar18 = puVar30[0xd];
    uVar19 = puVar30[0xe];
    uVar20 = puVar30[0xf];
    uVar21 = puVar30[0x10];
    uVar22 = puVar30[0x11];
    *puVar30 = *puVar26;
    puVar30[1] = uVar1;
    uVar1 = puVar27[-0xf];
    puVar30[2] = puVar27[-0x10];
    puVar30[3] = uVar1;
    uVar1 = puVar27[-0xd];
    puVar30[4] = puVar27[-0xe];
    puVar30[5] = uVar1;
    uVar1 = puVar27[-0xb];
    puVar30[6] = puVar27[-0xc];
    puVar30[7] = uVar1;
    uVar1 = puVar27[-9];
    puVar30[8] = puVar27[-10];
    puVar30[9] = uVar1;
    uVar1 = puVar27[-7];
    puVar30[10] = puVar27[-8];
    puVar30[0xb] = uVar1;
    uVar1 = puVar27[-5];
    puVar30[0xc] = puVar27[-6];
    puVar30[0xd] = uVar1;
    uVar1 = puVar27[-3];
    puVar30[0xe] = puVar27[-4];
    puVar30[0xf] = uVar1;
    uVar2 = *(undefined4 *)((longlong)puVar27 + -0xc);
    uVar3 = *(undefined4 *)(puVar27 + -1);
    uVar4 = *(undefined4 *)((longlong)puVar27 + -4);
    *(undefined4 *)(puVar30 + 0x10) = *(undefined4 *)(puVar27 + -2);
    *(undefined4 *)((longlong)puVar30 + 0x84) = uVar2;
    *(undefined4 *)(puVar30 + 0x11) = uVar3;
    *(undefined4 *)((longlong)puVar30 + 0x8c) = uVar4;
    *puVar26 = uVar5;
    puVar27[-0x11] = uVar6;
    puVar27[-0x10] = uVar7;
    puVar27[-0xf] = uVar8;
    puVar27[-0xe] = uVar9;
    puVar27[-0xd] = uVar10;
    puVar27[-0xc] = uVar11;
    puVar27[-0xb] = uVar12;
    puVar27[-10] = uVar13;
    puVar27[-9] = uVar14;
    puVar27[-8] = uVar15;
    puVar27[-7] = uVar16;
    puVar27[-6] = uVar17;
    puVar27[-5] = uVar18;
    puVar27[-4] = uVar19;
    puVar27[-3] = uVar20;
    puVar27[-2] = uVar21;
    puVar27[-1] = uVar22;
  }
  lVar24 = (longlong)puVar26 + (-0x90 - (longlong)puVar30);
  iVar29 = iVar29 + -1;
  lVar24 = lVar24 / 0x12 + (lVar24 >> 0x3f);
  if ((lVar24 >> 3) - (lVar24 >> 0x3f) < ((longlong)puVar32 - (longlong)puVar31) / 0x90) {
    if (puVar31 < puVar32) {
      *plVar28 = (longlong)puVar31;
      plVar28[1] = (longlong)puVar32;
      *(int *)(plVar28 + 2) = iVar29;
      plVar28 = plVar28 + 3;
    }
    if (puVar26 <= puVar30 + 0x12) goto LAB_1422bb7e9;
    puVar32 = puVar27 + -0x24;
    puVar31 = puVar30;
  }
  else {
    if (puVar30 + 0x12 < puVar26) {
      *plVar28 = (longlong)puVar30;
      plVar28[1] = (longlong)(puVar27 + -0x24);
      *(int *)(plVar28 + 2) = iVar29;
      plVar28 = plVar28 + 3;
    }
    if (puVar32 <= puVar31) goto LAB_1422bb7e9;
  }
  lVar24 = ((longlong)puVar32 - (longlong)puVar31) / 0x90 + 1;
  puVar30 = puVar31;
  if (iVar29 == 0) goto LAB_1422bb7d0;
  goto LAB_1422bb480;
}



// FUNCTION 1422bb980 FUN_1422bb980 body=267 status=ok
// SIG undefined FUN_1422bb980(void)

void FUN_1422bb980(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (param_2 != (longlong *)0x0) {
    lVar4 = USoundNodeWavePlayer::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar1 = (longlong *)*param_3;
      iVar3 = (int)param_3[1];
      for (plVar5 = plVar1; plVar5 != plVar1 + iVar3; plVar5 = plVar5 + 1) {
        if ((longlong *)*plVar5 == param_2) {
          if ((int)((longlong)plVar5 - (longlong)plVar1 >> 3) != -1) goto LAB_1422bba2e;
          break;
        }
      }
      *(int *)(param_3 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar3);
      }
      *(longlong **)(*param_3 + (longlong)iVar3 * 8) = param_2;
    }
LAB_1422bba2e:
    iVar3 = (**(code **)(*param_2 + 0x2c0))(param_2);
    iVar6 = 0;
    if (0 < (int)param_2[6]) {
      lVar4 = 0;
      do {
        if (iVar3 <= lVar4) {
          return;
        }
        FUN_1422bb980(param_1,*(undefined8 *)(param_2[5] + lVar4 * 8),param_3);
        iVar6 = iVar6 + 1;
        lVar4 = lVar4 + 1;
      } while (iVar6 < (int)param_2[6]);
    }
  }
  return;
}



// FUNCTION 1422bba90 FUN_1422bba90 body=393 status=ok
// SIG undefined FUN_1422bba90(void)

undefined8 *
FUN_1422bba90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,longlong **param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  local_48 = (longlong *)0x0;
  local_40 = 0;
  if (((param_6 != &local_48) && (*(int *)(param_6 + 1) != 0)) &&
     (plVar4 = *param_6, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  }
  plVar4 = (longlong *)param_5[1];
  uVar6 = *param_5;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_14502def8;
  FWeakObjectPtr::operator=(param_1 + 1,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_34;
  *(undefined4 *)(param_1 + 4) = uStack_30;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_2c;
  param_1[5] = uVar6;
  param_1[6] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  param_1[7] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (((&local_48 != (longlong **)(param_1 + 7)) && (local_40 != 0)) &&
     (local_48 != (longlong *)0x0)) {
    (**(code **)(*local_48 + 0x30))();
  }
  uVar6 = FDelegateHandle::GenerateNewID();
  param_1[9] = uVar6;
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  *param_1 = &PTR_FUN_14502df40;
  plVar4 = (longlong *)param_5[1];
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_6);
  return param_1;
}



// FUNCTION 1422bbc20 FUN_1422bbc20 body=130 status=ok
// SIG undefined FUN_1422bbc20(void)

undefined8 * FUN_1422bbc20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_1424de090();
  *param_1 = &PTR_FUN_144091548;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AtmosphericFogComponent0",1);
  uVar3 = *puVar1;
  uVar2 = APlayerStateRemnant::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 1422bbcb0 FActiveSound body=1851 status=ok
// SIG undefined FActiveSound(void)

undefined4 * FActiveSound::FActiveSound(undefined4 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[10] = param_2[10];
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = 0;
  iVar6 = param_2[0x1c];
  pvVar1 = *(void **)(param_2 + 0x1a);
  param_1[0x1c] = iVar6;
  if (iVar6 == 0) {
    param_1[0x1d] = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x1a,iVar6,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x1a),pvVar1,(longlong)iVar6 << 4);
  }
  puVar8 = (undefined8 *)(param_2 + 0x1e);
  puVar9 = (undefined8 *)(param_1 + 0x1e);
  lVar10 = 2;
  do {
    *puVar9 = 0;
    lVar10 = lVar10 + -1;
    iVar6 = *(int *)(puVar8 + 1);
    pvVar1 = (void *)*puVar8;
    *(int *)((longlong)param_1 + (8 - (longlong)param_2) + (longlong)puVar8) = iVar6;
    if (iVar6 == 0) {
      *(undefined4 *)((longlong)param_1 + (0xc - (longlong)param_2) + (longlong)puVar8) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar9,iVar6,0);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar1,(longlong)iVar6 << 4);
    }
    puVar9 = puVar9 + 2;
    puVar8 = puVar8 + 2;
  } while (lVar10 != 0);
  *(byte *)(param_1 + 0x26) =
       *(byte *)(param_1 + 0x26) ^ (*(byte *)(param_1 + 0x26) ^ *(byte *)(param_2 + 0x26)) & 1;
  bVar7 = (*(byte *)(param_1 + 0x26) ^ *(byte *)(param_2 + 0x26)) & 2 ^ *(byte *)(param_1 + 0x26);
  *(byte *)(param_1 + 0x26) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)(param_2 + 0x26)) & 4 ^ bVar7;
  *(byte *)(param_1 + 0x26) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)(param_2 + 0x26)) & 8 ^ bVar7;
  *(byte *)(param_1 + 0x26) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)(param_2 + 0x26)) & 0x10 ^ bVar7;
  *(byte *)(param_1 + 0x26) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)(param_2 + 0x26)) & 0x20 ^ bVar7;
  *(byte *)(param_1 + 0x26) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)(param_2 + 0x26)) & 0x40 ^ bVar7;
  *(byte *)(param_1 + 0x26) = bVar7;
  *(byte *)(param_1 + 0x26) = (bVar7 ^ *(byte *)(param_2 + 0x26)) & 0x7f ^ *(byte *)(param_2 + 0x26)
  ;
  *(byte *)((longlong)param_1 + 0x99) =
       *(byte *)((longlong)param_1 + 0x99) ^
       (*(byte *)((longlong)param_1 + 0x99) ^ *(byte *)((longlong)param_2 + 0x99)) & 1;
  bVar7 = (*(byte *)((longlong)param_2 + 0x99) ^ *(byte *)((longlong)param_1 + 0x99)) & 2 ^
          *(byte *)((longlong)param_1 + 0x99);
  *(byte *)((longlong)param_1 + 0x99) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)((longlong)param_2 + 0x99)) & 4 ^ bVar7;
  *(byte *)((longlong)param_1 + 0x99) = bVar7;
  bVar7 = (*(byte *)((longlong)param_2 + 0x99) ^ bVar7) & 8 ^ bVar7;
  *(byte *)((longlong)param_1 + 0x99) = bVar7;
  bVar7 = (*(byte *)((longlong)param_2 + 0x99) ^ bVar7) & 0x10 ^ bVar7;
  *(byte *)((longlong)param_1 + 0x99) = bVar7;
  bVar7 = (*(byte *)((longlong)param_2 + 0x99) ^ bVar7) & 0x20 ^ bVar7;
  *(byte *)((longlong)param_1 + 0x99) = bVar7;
  bVar7 = (*(byte *)((longlong)param_2 + 0x99) ^ bVar7) & 0x40 ^ bVar7;
  *(byte *)((longlong)param_1 + 0x99) = bVar7;
  *(byte *)((longlong)param_1 + 0x99) =
       (*(byte *)((longlong)param_2 + 0x99) ^ bVar7) & 0x7f ^ *(byte *)((longlong)param_2 + 0x99);
  *(byte *)((longlong)param_1 + 0x9a) =
       *(byte *)((longlong)param_1 + 0x9a) ^
       (*(byte *)((longlong)param_1 + 0x9a) ^ *(byte *)((longlong)param_2 + 0x9a)) & 1;
  bVar7 = (*(byte *)((longlong)param_1 + 0x9a) ^ *(byte *)((longlong)param_2 + 0x9a)) & 2 ^
          *(byte *)((longlong)param_1 + 0x9a);
  *(byte *)((longlong)param_1 + 0x9a) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)((longlong)param_2 + 0x9a)) & 4 ^ bVar7;
  *(byte *)((longlong)param_1 + 0x9a) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)((longlong)param_2 + 0x9a)) & 8 ^ bVar7;
  *(byte *)((longlong)param_1 + 0x9a) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)((longlong)param_2 + 0x9a)) & 0x10 ^ bVar7;
  *(byte *)((longlong)param_1 + 0x9a) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)((longlong)param_2 + 0x9a)) & 0x20 ^ bVar7;
  *(byte *)((longlong)param_1 + 0x9a) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)((longlong)param_2 + 0x9a)) & 0x40 ^ bVar7;
  *(byte *)((longlong)param_1 + 0x9a) = bVar7;
  *(byte *)((longlong)param_1 + 0x9a) =
       (bVar7 ^ *(byte *)((longlong)param_2 + 0x9a)) & 0x7f ^ *(byte *)((longlong)param_2 + 0x9a);
  *(byte *)((longlong)param_1 + 0x9b) =
       *(byte *)((longlong)param_1 + 0x9b) ^
       (*(byte *)((longlong)param_1 + 0x9b) ^ *(byte *)((longlong)param_2 + 0x9b)) & 1;
  bVar7 = (*(byte *)((longlong)param_2 + 0x9b) ^ *(byte *)((longlong)param_1 + 0x9b)) & 2 ^
          *(byte *)((longlong)param_1 + 0x9b);
  *(byte *)((longlong)param_1 + 0x9b) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)((longlong)param_2 + 0x9b)) & 4 ^ bVar7;
  *(byte *)((longlong)param_1 + 0x9b) = bVar7;
  bVar7 = (*(byte *)((longlong)param_2 + 0x9b) ^ bVar7) & 8 ^ bVar7;
  *(byte *)((longlong)param_1 + 0x9b) = bVar7;
  *(byte *)((longlong)param_1 + 0x9b) = (*(byte *)((longlong)param_2 + 0x9b) ^ bVar7) & 0x10 ^ bVar7
  ;
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  LOCK();
  iVar6 = param_2[0x28];
  if (iVar6 == 0) {
    param_2[0x28] = 0;
    iVar6 = 0;
  }
  UNLOCK();
  param_1[0x28] = iVar6;
  LOCK();
  iVar6 = param_2[0x29];
  if (iVar6 == 0) {
    param_2[0x29] = 0;
    iVar6 = 0;
  }
  UNLOCK();
  param_1[0x29] = iVar6;
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = param_2[0x32];
  uVar5 = *(undefined8 *)(param_2 + 0x35);
  *(undefined8 *)(param_1 + 0x33) = *(undefined8 *)(param_2 + 0x33);
  *(undefined8 *)(param_1 + 0x35) = uVar5;
  *(undefined8 *)(param_1 + 0x37) = *(undefined8 *)(param_2 + 0x37);
  param_1[0x39] = param_2[0x39];
  uVar5 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x3c) = uVar5;
  *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_2 + 0x3e);
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = param_2[0x47];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  param_1[0x4a] = param_2[0x4a];
  uVar5 = *(undefined8 *)(param_2 + 0x4e);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x4e) = uVar5;
  uVar2 = param_2[0x51];
  uVar3 = param_2[0x52];
  uVar4 = param_2[0x53];
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = uVar2;
  param_1[0x52] = uVar3;
  param_1[0x53] = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 0x56);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x56) = uVar5;
  param_1[0x58] = param_2[0x58];
  param_1[0x59] = param_2[0x59];
  *(undefined8 *)(param_1 + 0x5a) = *(undefined8 *)(param_2 + 0x5a);
  param_1[0x5c] = param_2[0x5c];
  FSoundAttenuationSettings::FSoundAttenuationSettings(param_1 + 0x5e,param_2 + 0x5e);
  uVar2 = param_2[0x109];
  uVar3 = param_2[0x10a];
  uVar4 = param_2[0x10b];
  param_1[0x108] = param_2[0x108];
  param_1[0x109] = uVar2;
  param_1[0x10a] = uVar3;
  param_1[0x10b] = uVar4;
  uVar2 = param_2[0x10d];
  uVar3 = param_2[0x10e];
  uVar4 = param_2[0x10f];
  param_1[0x10c] = param_2[0x10c];
  param_1[0x10d] = uVar2;
  param_1[0x10e] = uVar3;
  param_1[0x10f] = uVar4;
  param_1[0x110] = param_2[0x110];
  param_1[0x111] = param_2[0x111];
  *(undefined8 *)(param_1 + 0x112) = *(undefined8 *)(param_2 + 0x112);
  param_1[0x114] = param_2[0x114];
  param_1[0x115] = param_2[0x115];
  param_1[0x116] = param_2[0x116];
  param_1[0x117] = param_2[0x117];
  param_1[0x118] = param_2[0x118];
  param_1[0x119] = param_2[0x119];
  *(undefined8 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x122) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  param_1[0x126] = 0xffffffff;
  param_1[0x127] = 0;
  *(undefined8 *)(param_1 + 0x12a) = 0;
  param_1[300] = 0;
  TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x11a,param_2 + 0x11a);
  *(undefined8 *)(param_1 + 0x12e) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x136) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  param_1[0x13a] = 0xffffffff;
  param_1[0x13b] = 0;
  *(undefined8 *)(param_1 + 0x13e) = 0;
  param_1[0x140] = 0;
  TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x12e,param_2 + 0x12e);
  *(undefined8 *)(param_1 + 0x142) = 0;
  iVar6 = param_2[0x144];
  pvVar1 = *(void **)(param_2 + 0x142);
  param_1[0x144] = iVar6;
  if (iVar6 == 0) {
    param_1[0x145] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x142,iVar6,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x142),pvVar1,(longlong)iVar6);
  }
  *(undefined8 *)(param_1 + 0x146) = 0;
  iVar6 = param_2[0x148];
  pvVar1 = *(void **)(param_2 + 0x146);
  param_1[0x148] = iVar6;
  if (iVar6 == 0) {
    param_1[0x149] = 0;
  }
  else {
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1 + 0x146,iVar6,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x146),pvVar1,(longlong)iVar6 << 5);
  }
  *(undefined8 *)(param_1 + 0x14a) = *(undefined8 *)(param_2 + 0x14a);
  param_1[0x14c] = param_2[0x14c];
  return param_1;
}



// FUNCTION 1422bc3f0 FAssetBundleEntry body=136 status=ok
// SIG undefined FAssetBundleEntry(void)

undefined4 * FAssetBundleEntry::FAssetBundleEntry(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = 0;
  iVar5 = param_2[8];
  puVar6 = *(undefined8 **)(param_2 + 6);
  param_1[8] = iVar5;
  if (iVar5 == 0) {
    param_1[9] = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 6,iVar5,0);
    puVar4 = *(undefined8 **)(param_1 + 6);
    do {
      *puVar4 = *puVar6;
      FString::FString(puVar4 + 1,puVar6 + 1);
      puVar4 = puVar4 + 3;
      puVar6 = puVar6 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return param_1;
}



// FUNCTION 1422bc4d0 FUN_1422bc4d0 body=251 status=ok
// SIG undefined FUN_1422bc4d0(void)

undefined8 *
FUN_1422bc4d0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  
  iVar2 = 4;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = param_4;
  *param_1 = &PTR__scalar_deleting_destructor__14502dc40;
  param_1[7] = 0;
  param_1[10] = 0;
  if (*(int *)(param_1 + 6) == 1) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x14);
    uVar1 = *(undefined4 *)(param_2 + 0x18);
  }
  else {
    if (*(int *)(param_1 + 6) == 2) {
      iVar2 = 8;
      *(int *)(param_1 + 8) = *(int *)(param_2 + 0x28) * *(int *)(param_2 + 0x24);
      *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x20);
      iVar3 = *(int *)(param_2 + 0x1c);
      goto LAB_1422bc55b;
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
    uVar1 = *(undefined4 *)(param_2 + 0x10);
  }
  iVar3 = 1;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
LAB_1422bc55b:
  *(int *)(param_1 + 9) = iVar3;
  iVar3 = iVar3 * iVar2 * *(int *)((longlong)param_1 + 0x44) * *(int *)(param_1 + 8);
  iVar2 = IStreamingManager::GetNumWantingResourcesID(param_3);
  if (iVar2 == iVar3) {
    FUntypedBulkData::GetCopy(param_3,param_1 + 10,0);
  }
  else {
    FUN_14171efb0(param_3,2);
    _Dst = (void *)FUntypedBulkData::Realloc(param_3);
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar3);
    FUntypedBulkData::Unlock(param_3);
  }
  return param_1;
}



// FUNCTION 1422bc5d0 FUN_1422bc5d0 body=1333 status=ok
// SIG undefined FUN_1422bc5d0(void)

undefined8 * FUN_1422bc5d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  LARGE_INTEGER local_res8;
  
  puVar2 = (undefined8 *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x20;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14502dd08;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 48000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x400;
  param_1[4] = 2;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
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
  FWeakObjectPtr::operator=(param_1 + 0x15,0);
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  QueryPerformanceCounter(&local_res8);
  dVar3 = (double)local_res8.QuadPart * DAT_1468b02f8;
  *(undefined4 *)(param_1 + 0x24) = 1;
  param_1[0x23] = dVar3 + 16777216.0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x3e4ccccd;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(uint *)(param_1 + 0x66) = *(uint *)(param_1 + 0x66) | 1;
  *(undefined1 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0x40000000;
  *(byte *)((longlong)param_1 + 0x35a) = *(byte *)((longlong)param_1 + 0x35a) & 0xfe;
  *(undefined2 *)(param_1 + 0x6b) = 2;
  *(byte *)(param_1 + 0x6d) = *(byte *)(param_1 + 0x6d) & 0xf4 | 4;
  param_1[0x6c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0;
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
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar2 = puVar1;
  }
  param_1[0x83] = puVar2;
  param_1[0x82] = puVar2;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  FSoundConcurrencyManager::FSoundConcurrencyManager(param_1 + 0xa7,param_1);
  *(undefined4 *)(param_1 + 0xe2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x714) = 0xbf800000;
  return param_1;
}



// FUNCTION 1422bcb10 FCreateComponentParams body=91 status=ok
// SIG undefined FCreateComponentParams(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FAudioDevice::FCreateComponentParams::FCreateComponentParams(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1429003e0();
  param_1[1] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[6] = param_2;
  *(undefined2 *)((longlong)param_1 + 0x19) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x3c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x44) = DAT_1468b5d98;
  return param_1;
}



// FUNCTION 1422bcb70 FCreateComponentParams body=159 status=ok
// SIG undefined FCreateComponentParams(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FAudioDevice::FCreateComponentParams::FCreateComponentParams
          (undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1429003e0();
  param_1[1] = uVar1;
  param_1[4] = param_2;
  if (param_3 == 0) {
    if (param_2 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = UWorld::GetWorldSettings(param_2,0,1);
    }
  }
  param_1[5] = param_3;
  if (param_1[4] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = UWorld::GetAudioDevice();
  }
  param_1[6] = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x19) = 0x100;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x44) = DAT_1468b5d98;
  return param_1;
}



// FUNCTION 1422bcc10 FCreateComponentParams body=111 status=ok
// SIG undefined FCreateComponentParams(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FAudioDevice::FCreateComponentParams::FCreateComponentParams(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1429003e0();
  uVar2 = 0;
  param_1[1] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  if (DAT_146b17150 != 0) {
    uVar2 = FUN_142875430();
  }
  param_1[6] = uVar2;
  *(undefined2 *)((longlong)param_1 + 0x19) = 0x100;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x44) = DAT_1468b5d98;
  return param_1;
}



// FUNCTION 1422bcc80 FDynamicParameter body=28 status=ok
// SIG undefined FDynamicParameter(void)

undefined4 * FDynamicParameter::FDynamicParameter(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[1] = param_2;
  param_1[6] = param_2;
  return param_1;
}



// FUNCTION 1422bcca0 FUN_1422bcca0 body=559 status=ok
// SIG undefined FUN_1422bcca0(void)

undefined8 * FUN_1422bcca0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  *param_1 = *param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  local_48 = param_2[3];
  FString::FString(local_40,param_2 + 4);
  FSoftObjectPath::operator=(param_1 + 3,&local_48);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_2 + 0x39);
  param_1[8] = 0;
  iVar8 = *(int *)(param_2 + 9);
  lVar9 = param_2[8];
  *(int *)(param_1 + 9) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 8,iVar8,0);
    lVar5 = param_1[8];
    do {
      FString::FString(lVar5,lVar9);
      lVar5 = lVar5 + 0x10;
      lVar9 = lVar9 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  param_1[10] = 0;
  iVar8 = *(int *)(param_2 + 0xb);
  puVar6 = (undefined8 *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 10,iVar8,0);
    puVar7 = (undefined8 *)param_1[10];
    do {
      *puVar7 = *puVar6;
      FString::FString(puVar7 + 1,puVar6 + 1);
      puVar7 = puVar7 + 3;
      puVar6 = puVar6 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  uVar2 = *(undefined4 *)((longlong)param_2 + 100);
  uVar3 = *(undefined4 *)(param_2 + 0xd);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0xd) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar4;
  param_1[0xe] = 0;
  iVar8 = *(int *)(param_2 + 0xf);
  puVar6 = (undefined8 *)param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0xe,iVar8,0);
    puVar7 = (undefined8 *)param_1[0xe];
    do {
      *puVar7 = 0;
      iVar1 = *(int *)(puVar6 + 1);
      _Src = (void *)*puVar6;
      *(int *)(puVar7 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar7,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar7,_Src,(longlong)iVar1 * 2);
      }
      puVar7 = puVar7 + 2;
      puVar6 = puVar6 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  return param_1;
}



// FUNCTION 1422bced0 FPrimaryAssetTypeInfo body=337 status=ok
// SIG undefined FPrimaryAssetTypeInfo(void)

undefined8 *
FPrimaryAssetTypeInfo::FPrimaryAssetTypeInfo
          (undefined8 *param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
          undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 local_48 [32];
  
  *param_1 = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < 0) && (*(int *)((longlong)param_1 + 0x2c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
    }
    if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
      *(undefined2 *)param_1[4] = 0;
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_48,param_3);
    FSoftObjectPath::operator=(param_1 + 3,uVar1);
    FWeakObjectPtr::operator=(param_1 + 1,param_3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 2) = DAT_1464b56f4;
  }
  *(undefined1 *)((longlong)param_1 + 0x39) = param_5;
  param_1[6] = param_3;
  *(undefined1 *)(param_1 + 7) = param_4;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  return param_1;
}



// FUNCTION 1422bd030 FPrimaryAssetTypeInfo body=334 status=ok
// SIG undefined FPrimaryAssetTypeInfo(void)

undefined8 * FPrimaryAssetTypeInfo::FPrimaryAssetTypeInfo(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_38 [32];
  
  *param_1 = 0;
  lVar1 = UObject::GetPrivateStaticClass();
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (lVar1 == 0) {
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < 0) && (*(int *)((longlong)param_1 + 0x2c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
    }
    if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
      *(undefined2 *)param_1[4] = 0;
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_38,lVar1);
    FSoftObjectPath::operator=(param_1 + 3,uVar2);
    FWeakObjectPtr::operator=(param_1 + 1,lVar1);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 2) = DAT_1464b56f4;
  }
  uVar2 = UObject::GetPrivateStaticClass();
  param_1[6] = uVar2;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  return param_1;
}



// FUNCTION 1422bd180 FSoundAttenuationSettings body=1029 status=ok
// SIG undefined FSoundAttenuationSettings(void)

undefined8 *
FSoundAttenuationSettings::FSoundAttenuationSettings(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  byte bVar4;
  
  *param_1 = &PTR_FUN_143f48bb8;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 5,param_2 + 0x28);
  *param_1 = &PTR_FUN_143f48bc8;
  *(byte *)(param_1 + 0x14) =
       *(byte *)(param_1 + 0x14) ^ (*(byte *)(param_1 + 0x14) ^ *(byte *)(param_2 + 0xa0)) & 1;
  bVar4 = (*(byte *)(param_1 + 0x14) ^ *(byte *)(param_2 + 0xa0)) & 2 ^ *(byte *)(param_1 + 0x14);
  *(byte *)(param_1 + 0x14) = bVar4;
  bVar4 = (bVar4 ^ *(byte *)(param_2 + 0xa0)) & 4 ^ bVar4;
  *(byte *)(param_1 + 0x14) = bVar4;
  bVar4 = (bVar4 ^ *(byte *)(param_2 + 0xa0)) & 8 ^ bVar4;
  *(byte *)(param_1 + 0x14) = bVar4;
  bVar4 = (bVar4 ^ *(byte *)(param_2 + 0xa0)) & 0x10 ^ bVar4;
  *(byte *)(param_1 + 0x14) = bVar4;
  bVar4 = (bVar4 ^ *(byte *)(param_2 + 0xa0)) & 0x20 ^ bVar4;
  *(byte *)(param_1 + 0x14) = bVar4;
  bVar4 = (bVar4 ^ *(byte *)(param_2 + 0xa0)) & 0x40 ^ bVar4;
  *(byte *)(param_1 + 0x14) = bVar4;
  *(byte *)(param_1 + 0x14) = (bVar4 ^ *(byte *)(param_2 + 0xa0)) & 0x7f ^ *(byte *)(param_2 + 0xa0)
  ;
  *(byte *)((longlong)param_1 + 0xa1) =
       *(byte *)((longlong)param_1 + 0xa1) ^
       (*(byte *)((longlong)param_1 + 0xa1) ^ *(byte *)(param_2 + 0xa1)) & 1;
  *(byte *)((longlong)param_1 + 0xa1) =
       (*(byte *)(param_2 + 0xa1) ^ *(byte *)((longlong)param_1 + 0xa1)) & 2 ^
       *(byte *)((longlong)param_1 + 0xa1);
  *(undefined1 *)((longlong)param_1 + 0xa2) = *(undefined1 *)(param_2 + 0xa2);
  *(undefined1 *)((longlong)param_1 + 0xa3) = *(undefined1 *)(param_2 + 0xa3);
  *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  *(undefined1 *)((longlong)param_1 + 0xa5) = *(undefined1 *)(param_2 + 0xa5);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x17,param_2 + 0xb8);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x26,param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)((longlong)param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)((longlong)param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined4 *)((longlong)param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)((longlong)param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)((longlong)param_1 + 500) = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x40,param_2 + 0x200);
  puVar1 = param_1 + 0x4f;
  *puVar1 = 0;
  iVar2 = *(int *)(param_2 + 0x280);
  pvVar3 = *(void **)(param_2 + 0x278);
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 3);
  }
  param_1[0x51] = 0;
  iVar2 = *(int *)(param_2 + 0x290);
  pvVar3 = *(void **)(param_2 + 0x288);
  *(int *)(param_1 + 0x52) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x51,iVar2,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0x51],pvVar3,(longlong)iVar2 << 3);
  }
  puVar1 = param_1 + 0x53;
  *puVar1 = 0;
  iVar2 = *(int *)(param_2 + 0x2a0);
  pvVar3 = *(void **)(param_2 + 0x298);
  *(int *)(param_1 + 0x54) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 3);
  }
  return param_1;
}



// FUNCTION 1422bd5b0 FWaveInstance body=342 status=ok
// SIG undefined FWaveInstance(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FWaveInstance::FWaveInstance(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xfffe2800 | 0x800;
  param_1[0xc] = param_2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 10;
  *(undefined4 *)(param_1 + 0x10) = 100;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x469c4000;
  *(undefined4 *)(param_1 + 0x1a) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x469c4000;
  *(undefined4 *)(param_1 + 0x1b) = 0x469c4000;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x41a00000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x23);
  *(undefined1 *)(param_1 + 0x34) = 0;
  DAT_146aef380 = DAT_146aef380 + 1;
  *(int *)((longlong)param_1 + 0x194) = DAT_146aef380;
  return param_1;
}



// FUNCTION 1422bd710 IStreamedCompressedInfo body=68 status=ok
// SIG undefined IStreamedCompressedInfo(void)

undefined8 * IStreamedCompressedInfo::IStreamedCompressedInfo(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__14502de40;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  return param_1;
}



// FUNCTION 1422bd760 UAnimBlueprint body=70 status=ok
// SIG undefined UAnimBlueprint(void)

undefined8 * UAnimBlueprint::UAnimBlueprint(undefined8 *param_1)

{
  UBlueprint::UBlueprint();
  *param_1 = &PTR_FUN_14502cf88;
  param_1[0x1d] = &PTR_LAB_14502d220;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  return param_1;
}



// FUNCTION 1422bd7b0 FUN_1422bd7b0 body=575 status=ok
// SIG undefined FUN_1422bd7b0(void)

undefined8 * FUN_1422bd7b0(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__14502d248;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
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
  FUN_14282a800(param_1 + 0x2f);
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x274) = 0;
  *(undefined4 *)((longlong)param_1 + 0x276) = 0x1000000;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  return param_1;
}



// FUNCTION 1422bd9f0 UAssetUserData body=33 status=ok
// SIG undefined UAssetUserData(void)

undefined8 * UAssetUserData::UAssetUserData(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_14502cc50;
  return param_1;
}



// FUNCTION 1422bda20 FUN_1422bda20 body=393 status=ok
// SIG undefined FUN_1422bda20(void)

undefined8 * FUN_1422bda20(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_14502d6c8;
  param_1[5] = &PTR_LAB_14502dc10;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x61) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 4;
  *(undefined4 *)(param_1 + 0x62) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x40;
  *(undefined4 *)(param_1 + 99) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x10;
  *(undefined4 *)(param_1 + 100) = 2;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x80;
  *(undefined4 *)(param_1 + 0x65) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 8;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  FUntypedBulkData::FUntypedBulkData(param_1 + 0x6c);
  param_1[0x6c] = &PTR__scalar_deleting_destructor__143f48b90;
  FUntypedBulkData::FUntypedBulkData(param_1 + 0x7a);
  param_1[0x7a] = &PTR__scalar_deleting_destructor__143f48b90;
  FUntypedBulkData::FUntypedBulkData(param_1 + 0x88);
  param_1[0x88] = &PTR__scalar_deleting_destructor__143f48b90;
  *(undefined4 *)(param_1 + 0x96) = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x3f800000;
  param_1[0x5b] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5e) = 0x466a6000;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0xc7c35000;
  *(undefined4 *)(param_1 + 0x5f) = 0x42480000;
  uVar1 = DAT_1464aa730;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffc;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = uVar1;
  return param_1;
}



// FUNCTION 1422bdbb0 FUN_1422bdbb0 body=244 status=ok
// SIG undefined FUN_1422bdbb0(void)

void FUN_1422bdbb0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x70);
    do {
      iVar5 = *(int *)(puVar4 + 1);
      plVar2 = (longlong *)*puVar4;
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = (longlong *)*puVar4;
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (puVar4 + -4);
      iVar5 = *(int *)(puVar4 + -5);
      plVar2 = (longlong *)puVar4[-6];
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = (longlong *)puVar4[-6];
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      if (puVar4[-10] != 0) {
        FMemory::Free();
      }
      puVar4 = puVar4 + 0x12;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1422bdcb0 ~TFunction_OwnedObject<`FWwiseResourceLoaderImpl::LoadEventSwitchContainerResources'::`30'::<lambda_2>,1> body=129 status=ok
// SIG undefined ~TFunction_OwnedObject<`FWwiseResourceLoaderImpl::LoadEventSwitchContainerResources'::`30'::<lambda_2>,1>(void)

void UE::Core::Private::Function::
     TFunction_OwnedObject<`FWwiseResourceLoaderImpl::LoadEventSwitchContainerResources'::`30'::<lambda_2>,1>
     ::
     ~TFunction_OwnedObject<_FWwiseResourceLoaderImpl::LoadEventSwitchContainerResources_::_30_::<lambda_2>,1>
               (undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 7);
  plVar4 = (longlong *)param_1[6];
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
    *param_1 = IDelegateInstance::vftable;
    return;
  }
  *param_1 = IDelegateInstance::vftable;
  return;
}



// FUNCTION 1422bdd40 ~TIndirectArray<FStreamedAudioChunk,FDefaultAllocator> body=113 status=ok
// SIG undefined ~TIndirectArray<FStreamedAudioChunk,FDefaultAllocator>(void)

void TIndirectArray<FStreamedAudioChunk,FDefaultAllocator>::
     ~TIndirectArray<FStreamedAudioChunk,FDefaultAllocator>(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUntypedBulkData::~FUntypedBulkData(*plVar1 + 8);
    FMemory::Free(*plVar1);
    plVar1 = plVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422bddc0 ~TSparseArray<TSetElement<TTuple<unsigned_int,TTuple<FReverbSettings,FInteriorSettings>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<unsigned_int,TTuple<FReverbSettings,FInteriorSettings>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<unsigned_int,TTuple<FReverbSettings,FInteriorSettings>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<unsigned_int,TTuple<FReverbSettings,FInteriorSettings>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1,0);
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



// FUNCTION 1422bde30 ~TSparseArray<TSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1422bdef1;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_1422bdef1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      FPrimaryAssetData::~FPrimaryAssetData((longlong)iStack_1c * 0x80 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422bdfc0 ~FAudioDevice body=897 status=ok
// SIG undefined ~FAudioDevice(void)

void FAudioDevice::~FAudioDevice(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  *param_1 = &PTR__scalar_deleting_destructor__14502dd08;
  FSoundConcurrencyManager::~FSoundConcurrencyManager(param_1 + 0xa7);
  if (param_1[0xa5] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  if (param_1[0xa3] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,TTuple<FReverbSettings,FInteriorSettings>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,TTuple<FReverbSettings,FInteriorSettings>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x9b);
  *(undefined4 *)(param_1 + 0x9a) = 0;
  if (param_1[0x99] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x91);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (param_1[0x8f] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x87);
  if (param_1[0x85] != 0) {
    FMemory::Free();
  }
  lVar4 = param_1[0x83];
  while (lVar4 != 0) {
    puVar5 = (undefined8 *)param_1[0x83];
    param_1[0x83] = *puVar5;
    FMemory::operator_delete(puVar5,0x10);
    lVar4 = param_1[0x83];
  }
  *(undefined4 *)(param_1 + 0x81) = 0;
  if (param_1[0x80] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x78);
  if (param_1[0x76] != 0) {
    FMemory::Free();
  }
  if (param_1[0x74] != 0) {
    FMemory::Free();
  }
  if (param_1[0x72] != 0) {
    FMemory::Free();
  }
  if (param_1[0x70] != 0) {
    FMemory::Free();
  }
  if (param_1[0x6e] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (param_1[100] != 0) {
    FMemory::Free();
  }
  FUN_14106ecc0(param_1 + 0x5c);
  if (param_1[0x57] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (param_1[0x55] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x4d,0);
  if (param_1[0x51] != 0) {
    FMemory::Free();
  }
  if (param_1[0x4d] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (param_1[0x4b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x43);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_1[0x3f] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x37);
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2d);
  if (param_1[0x2b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x29] != 0) {
    FMemory::Free();
  }
  if (param_1[0x25] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x10);
  plVar6 = (longlong *)param_1[0xf];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  plVar6 = (longlong *)param_1[0xd];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  plVar6 = (longlong *)param_1[0xb];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  plVar6 = (longlong *)param_1[9];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  FExec::~FExec(param_1);
  return;
}



// FUNCTION 1422be350 ~FPrimaryAssetData body=184 status=ok
// SIG undefined ~FPrimaryAssetData(void)

void FPrimaryAssetData::~FPrimaryAssetData(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x58);
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
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422be410 ~FPrimaryAssetTypeInfo body=165 status=ok
// SIG undefined ~FPrimaryAssetTypeInfo(void)

void FPrimaryAssetTypeInfo::~FPrimaryAssetTypeInfo(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x78);
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x70);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x50);
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422be4c0 ~FSoundBuffer body=95 status=ok
// SIG undefined ~FSoundBuffer(void)

void FSoundBuffer::~FSoundBuffer(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__14502ced0;
  if ((*(int *)(param_1 + 1) != 0) && (DAT_146b17150 != 0)) {
    lVar1 = FUN_1428742d0();
    if (lVar1 != 0) {
      uVar2 = FUN_1428742d0(DAT_146b17150);
      FAudioDeviceManager::RemoveSoundBufferForResourceID(uVar2,*(undefined4 *)(param_1 + 1));
    }
  }
  if (param_1[2] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1422be530 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1422be68b;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_1422be68b:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_1422b7350(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x18,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 1422be730 operator= body=669 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FName,FAssetBundleEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_1422be80d;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1422be80d:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_1422be8c3;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1422be8c3:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                ((longlong)(int)uStack_3c * 0x38 + 0x20 + *param_1);
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1422be9d0 FUN_1422be9d0 body=540 status=ok
// SIG undefined FUN_1422be9d0(void)

undefined8 * FUN_1422be9d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  local_38 = param_2[3];
  FString::FString(local_30,param_2 + 4);
  FSoftObjectPath::operator=(param_1 + 3,&local_38);
  param_1[6] = param_2[6];
  plVar8 = param_1 + 8;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_2 + 0x39);
  if (plVar8 != param_2 + 8) {
    plVar7 = (longlong *)*plVar8;
    for (iVar9 = *(int *)(param_1 + 9); iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    iVar9 = *(int *)(param_2 + 9);
    lVar6 = param_2[8];
    *(int *)(param_1 + 9) = iVar9;
    if ((iVar9 == 0) && (*(int *)((longlong)param_1 + 0x4c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar8,iVar9);
      lVar10 = *plVar8;
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        FString::FString(lVar10,lVar6);
        lVar10 = lVar10 + 0x10;
        lVar6 = lVar6 + 0x10;
      }
    }
  }
  plVar8 = param_1 + 10;
  if (plVar8 != param_2 + 10) {
    iVar9 = *(int *)(param_1 + 0xb);
    if (iVar9 != 0) {
      plVar7 = (longlong *)(*plVar8 + 8);
      do {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 3;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = *(int *)(param_2 + 0xb);
    puVar1 = (undefined8 *)param_2[10];
    *(int *)(param_1 + 0xb) = iVar9;
    if ((iVar9 == 0) && (*(int *)((longlong)param_1 + 0x5c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar8,iVar9);
      puVar2 = (undefined8 *)*plVar8;
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar2 = *puVar1;
        FString::FString(puVar2 + 1,puVar1 + 1);
        puVar2 = puVar2 + 3;
        puVar1 = puVar1 + 3;
      }
    }
  }
  uVar3 = *(undefined4 *)((longlong)param_2 + 100);
  uVar4 = *(undefined4 *)(param_2 + 0xd);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x6c);
  puVar1 = param_1 + 0xe;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0xd) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar5;
  if (puVar1 != param_2 + 0xe) {
    plVar8 = (longlong *)*puVar1;
    for (iVar9 = *(int *)(param_1 + 0xf); iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
              (puVar1,param_2[0xe],*(undefined4 *)(param_2 + 0xf),
               *(undefined4 *)((longlong)param_1 + 0x7c),0);
  }
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  return param_1;
}



// FUNCTION 1422bebf0 FUN_1422bebf0 body=179 status=ok
// SIG undefined FUN_1422bebf0(void)

void FUN_1422bebf0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = UAudioComponent::GetAudioComponentFromID(*param_1);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0x620)) {
      local_18 = param_1[1];
      local_10 = *(undefined4 *)(param_1 + 2);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar1 + 0x618,&local_18);
    }
    plVar2 = *(longlong **)(lVar1 + 0x628);
    plVar3 = plVar2 + (longlong)*(int *)(lVar1 + 0x630) * 2;
    if (plVar2 != plVar3) {
      while (((int)plVar2[1] == 0 || (*plVar2 == 0))) {
        plVar2 = plVar2 + 2;
        if (plVar2 == plVar3) {
          return;
        }
      }
      TBaseMulticastDelegate<void,UAudioComponent_const_*,USoundWave_const_*,float_const_>::
      Broadcast(lVar1 + 0x628,lVar1,param_1[1],*(undefined4 *)(param_1 + 2));
    }
  }
  return;
}



// FUNCTION 1422becb0 FUN_1422becb0 body=60 status=ok
// SIG undefined FUN_1422becb0(void)

void FUN_1422becb0(undefined8 *param_1)

{
  FUN_1422d8d30(*param_1,param_1[1],param_1[2],*(undefined4 *)(param_1 + 3),
                *(undefined4 *)((longlong)param_1 + 0x1c),*(undefined4 *)(param_1 + 4),
                *(undefined1 *)((longlong)param_1 + 0x24));
  return;
}



// FUNCTION 1422becf0 FUN_1422becf0 body=179 status=ok
// SIG undefined FUN_1422becf0(void)

void FUN_1422becf0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = UAudioComponent::GetAudioComponentFromID(*param_1);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0x648)) {
      local_18 = param_1[1];
      local_10 = *(undefined4 *)(param_1 + 2);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar1 + 0x640,&local_18);
    }
    plVar2 = *(longlong **)(lVar1 + 0x650);
    plVar3 = plVar2 + (longlong)*(int *)(lVar1 + 0x658) * 2;
    if (plVar2 != plVar3) {
      while (((int)plVar2[1] == 0 || (*plVar2 == 0))) {
        plVar2 = plVar2 + 2;
        if (plVar2 == plVar3) {
          return;
        }
      }
      TBaseMulticastDelegate<void,UAudioComponent_const_*,USoundWave_const_*,float_const_>::
      Broadcast(lVar1 + 0x650,lVar1,param_1[1],*(undefined4 *)(param_1 + 2));
    }
  }
  return;
}



// FUNCTION 1422bedb0 FUN_1422bedb0 body=149 status=ok
// SIG undefined FUN_1422bedb0(void)

void FUN_1422bedb0(longlong *param_1)

{
  undefined1 local_res8 [32];
  longlong *local_68;
  uint *local_60;
  uint local_58;
  undefined1 local_54;
  longlong local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_40 = (undefined4)param_1[5];
  local_3c = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_58 = local_58 ^ (*(uint *)(param_1 + 2) ^ local_58) & 1;
  local_54 = *(undefined1 *)((longlong)param_1 + 0x14);
  local_50 = param_1[3];
  local_48 = param_1[4];
  local_18 = (undefined4)param_1[10];
  local_68 = param_1 + 1;
  local_38 = (undefined4)param_1[6];
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_30 = (undefined4)param_1[7];
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_60 = &local_58;
  local_28 = (undefined4)param_1[8];
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x44);
  uStack_20 = (undefined4)param_1[9];
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x4c);
  FUN_1422b8af0(*param_1 + 0x4d8,local_res8,&local_68,0);
  return;
}



// FUNCTION 1422bee50 operator() body=870 status=ok
// SIG undefined operator()(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void <lambda_0a34281332c05c9c3fb8ff825e5c7b21>::operator()(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  float local_128;
  float fStack_124;
  float local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar9 = *param_1;
  puVar7 = *(undefined8 **)(lVar9 + 0x80);
  puVar11 = puVar7 + (longlong)*(int *)(lVar9 + 0x88) * 2;
  if (puVar7 != puVar11) {
    do {
      plVar10 = (longlong *)puVar7[1];
      plVar2 = (longlong *)*puVar7;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      local_138 = (undefined4)param_1[8];
      (**(code **)(*plVar2 + 0x20))
                (plVar2,*param_1,*(undefined4 *)((longlong)param_1 + 0xc),param_1 + 2);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar11);
    lVar9 = *param_1;
  }
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  plVar10 = (longlong *)(lVar9 + 0x128);
  if ((*(int *)(lVar9 + 0x130) <= iVar4) &&
     (uVar6 = (iVar4 - *(int *)(lVar9 + 0x130)) + 1, 0 < (int)uVar6)) {
    uVar8 = (ulonglong)uVar6;
    do {
      lVar3 = *param_1;
      local_108 = _DAT_1468b5b70;
      uStack_100 = uRam00000001468b5b78;
      local_e8 = _DAT_1468b5b90;
      uStack_e4 = uRam00000001468b5b94;
      uStack_e0 = uRam00000001468b5b98;
      uStack_dc = uRam00000001468b5b9c;
      local_f8 = _DAT_1468b5b80;
      uStack_f4 = uRam00000001468b5b84;
      uStack_f0 = uRam00000001468b5b88;
      uStack_ec = uRam00000001468b5b8c;
      local_d8 = 0;
      local_d0 = 0;
      FInteriorSettings::FInteriorSettings(&local_cc);
      iVar4 = *(int *)(lVar9 + 0x130);
      local_a0 = 0;
      local_a8 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      *(int *)(lVar9 + 0x130) = iVar4 + 1;
      local_68 = lVar3;
      if (*(int *)(lVar9 + 0x134) < iVar4 + 1) {
        TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(plVar10,iVar4);
      }
      puVar7 = (undefined8 *)((longlong)iVar4 * 0xb0 + *plVar10);
      *puVar7 = local_108;
      puVar7[1] = uStack_100;
      puVar7[2] = CONCAT44(uStack_f4,local_f8);
      puVar7[3] = CONCAT44(uStack_ec,uStack_f0);
      puVar7[4] = CONCAT44(uStack_e4,local_e8);
      puVar7[5] = CONCAT44(uStack_dc,uStack_e0);
      puVar7[6] = local_d8;
      *(undefined4 *)(puVar7 + 7) = local_d0;
      *(undefined8 *)((longlong)puVar7 + 0x3c) = local_cc;
      *(undefined8 *)((longlong)puVar7 + 0x44) = uStack_c4;
      *(undefined8 *)((longlong)puVar7 + 0x4c) = local_bc;
      *(undefined8 *)((longlong)puVar7 + 0x54) = uStack_b4;
      *(undefined4 *)((longlong)puVar7 + 0x5c) = local_ac;
      *(undefined4 *)(puVar7 + 0xc) = local_a8;
      *(undefined4 *)((longlong)puVar7 + 100) = local_a4;
      puVar7[0xd] = local_a0;
      puVar7[0xe] = local_98;
      puVar7[0xf] = uStack_90;
      puVar7[0x10] = local_88;
      puVar7[0x11] = uStack_80;
      *(undefined4 *)(puVar7 + 0x12) = (undefined4)local_78;
      *(undefined4 *)((longlong)puVar7 + 0x94) = local_78._4_4_;
      *(undefined4 *)(puVar7 + 0x13) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)puVar7 + 0x9c) = uStack_70._4_4_;
      puVar7[0x14] = local_68;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    iVar4 = *(int *)((longlong)param_1 + 0xc);
  }
  plVar10 = (longlong *)((longlong)iVar4 * 0xb0 + *plVar10);
  if (*(float *)(param_1 + 8) <= 0.0) {
    local_114 = DAT_1468b5d98;
    pfVar5 = (float *)&local_11c;
    local_11c = _DAT_1468b5d90;
  }
  else {
    pfVar5 = &local_128;
    fVar12 = 1.0 / *(float *)(param_1 + 8);
    local_128 = (*(float *)(param_1 + 4) - *(float *)(plVar10 + 2)) * fVar12;
    fStack_124 = (*(float *)((longlong)param_1 + 0x24) - *(float *)((longlong)plVar10 + 0x14)) *
                 fVar12;
    local_120 = (*(float *)(param_1 + 5) - *(float *)(plVar10 + 3)) * fVar12;
  }
  fVar12 = pfVar5[2];
  plVar10[6] = *(longlong *)pfVar5;
  *(float *)(plVar10 + 7) = fVar12;
  *(int *)((longlong)plVar10 + 100) = (int)param_1[1];
  lVar9 = param_1[3];
  *plVar10 = param_1[2];
  plVar10[1] = lVar9;
  lVar9 = param_1[5];
  plVar10[2] = param_1[4];
  plVar10[3] = lVar9;
  lVar9 = param_1[7];
  plVar10[4] = param_1[6];
  plVar10[5] = lVar9;
  return;
}



// FUNCTION 1422bf200 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAsyncTask<FAsyncAudioDecompressWorker>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14502dee0;
  FUN_1415b5910(param_1[4]);
  param_1[4] = 0;
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1422bf260 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UE::Core::Private::Function::
TFunction_OwnedObject<`FWwiseResourceLoaderImpl::LoadEventSwitchContainerResources'::`30'::<lambda_2>,1>
::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TFunction_OwnedObject<_FWwiseResourceLoaderImpl::LoadEventSwitchContainerResources_::_30_::<lambda_2>,1>
            ();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1422bf2a0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_1ebcb7a6df57dbb0ee235b6124941fbc>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FActiveSound::~FActiveSound(param_1 + 4);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x560);
  }
  return param_1;
}



// FUNCTION 1422bf2f0 FUN_1422bf2f0 body=97 status=ok
// SIG undefined FUN_1422bf2f0(void)

undefined8 * FUN_1422bf2f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14502dcd8;
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



// FUNCTION 1422bf360 FUN_1422bf360 body=101 status=ok
// SIG undefined FUN_1422bf360(void)

undefined8 * FUN_1422bf360(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14502dce8;
  FUntypedBulkData::~FUntypedBulkData(param_1 + 0x2e);
  FUntypedBulkData::~FUntypedBulkData(param_1 + 0x20);
  FUntypedBulkData::~FUntypedBulkData(param_1 + 0x12);
  FUN_1420d82a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 1422bf3d0 `scalar_deleting_destructor' body=91 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAtmosphereTextureResource::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14502dc40;
  FMemory::Free(param_1[10]);
  param_1[10] = 0;
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 7);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1422bf430 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FAudioDevice::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FAudioDevice();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x720);
  }
  return param_1;
}



// FUNCTION 1422bf470 FUN_1422bf470 body=180 status=ok
// SIG undefined FUN_1422bf470(void)

longlong FUN_1422bf470(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xe8);
  plVar1 = *(longlong **)(param_1 + 0xe0);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0xe0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x90);
  FPrimaryAssetTypeInfo::~FPrimaryAssetTypeInfo(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1422bf530 `scalar_deleting_destructor' body=123 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSoundBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__14502ced0;
  if ((*(int *)(param_1 + 1) != 0) && (DAT_146b17150 != 0)) {
    lVar1 = FUN_1428742d0();
    if (lVar1 != 0) {
      uVar2 = FUN_1428742d0(DAT_146b17150);
      FAudioDeviceManager::RemoveSoundBufferForResourceID(uVar2,*(undefined4 *)(param_1 + 1));
    }
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1422bf5b0 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
IStreamedCompressedInfo::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14502de40;
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_145010830;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1422bf610 FUN_1422bf610 body=142 status=ok
// SIG undefined FUN_1422bf610(void)

longlong FUN_1422bf610(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xe8) = &PTR_FUN_145013eb0;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 1422bf6a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UUGOptionsScreenUW::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1413e6780();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3e0);
  }
  return param_1;
}



// FUNCTION 1422bf6e0 FUN_1422bf6e0 body=112 status=ok
// SIG undefined FUN_1422bf6e0(void)

undefined8 * FUN_1422bf6e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14502d6c8;
  param_1[5] = &PTR_LAB_14502dc10;
  FUntypedBulkData::~FUntypedBulkData(param_1 + 0x88);
  FUntypedBulkData::~FUntypedBulkData(param_1 + 0x7a);
  FUntypedBulkData::~FUntypedBulkData(param_1 + 0x6c);
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c0);
  }
  return param_1;
}



// FUNCTION 1422bf750 FUN_1422bf750 body=49 status=ok
// SIG undefined FUN_1422bf750(void)

void FUN_1422bf750(longlong param_1)

{
  FUN_1422c66d0(param_1 + 8);
  LOCK();
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001422bf777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1422bf790 FUN_1422bf790 body=613 status=ok
// SIG undefined FUN_1422bf790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422bf790(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  iVar3 = *(int *)(param_1 + 600);
  *(int *)(param_1 + 600) = iVar3 + 1;
  local_88 = param_3;
  if (*(int *)(param_1 + 0x25c) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x250,iVar3);
  }
  puVar8 = (undefined8 *)((longlong)iVar3 * 0x40 + *(longlong *)(param_1 + 0x250));
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    *(undefined4 *)(puVar8 + 7) = 0;
  }
  uVar10 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar8 + 6,local_88);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(puVar8,param_2);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(puVar8 + 2,param_2);
  plVar5 = (longlong *)param_5[1];
  puVar6 = puVar8 + 4;
  uVar7 = *param_5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_98 = uVar7;
  plStack_90 = plVar5;
  if (&local_98 != puVar6) {
    local_98 = *puVar6;
    plStack_90 = (longlong *)puVar8[5];
    *puVar6 = uVar7;
    puVar8[5] = plVar5;
    local_68 = uVar7;
    plStack_60 = plVar5;
  }
  plVar5 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  plVar5 = (longlong *)FWindowsPlatformMisc::GetPlatformChunkInstall();
  if (*(longlong *)(param_1 + 0x370) == 0) {
    local_80 = 0;
    local_78 = 0;
    puVar6 = (undefined8 *)operator_new(0x28,&local_80);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_1441db5a0;
      FWeakObjectPtr::operator=(puVar6 + 1,param_1);
      puVar6[2] = &LAB_1409f731c;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[4] = uVar7;
      *puVar6 = &PTR_FUN_1441db5e8;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x40))(plVar5,local_70,&local_80);
    *(undefined8 *)(param_1 + 0x370) = *puVar6;
  }
  puVar9 = (undefined4 *)puVar8[2];
  uVar11 = (longlong)*(int *)(puVar8 + 3) & 0x3fffffffffffffff;
  if (puVar9 + *(int *)(puVar8 + 3) < puVar9) {
    uVar11 = uVar10;
  }
  if (uVar11 != 0) {
    do {
      (**(code **)(*plVar5 + 0x30))(plVar5,*puVar9,param_4);
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar10 != uVar11);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_88);
  plVar5 = (longlong *)param_5[1];
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



// FUNCTION 1422bfa00 FUN_1422bfa00 body=650 status=ok
// SIG undefined FUN_1422bfa00(void)

void FUN_1422bfa00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_48;
  ulonglong uStack_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 uStack_10;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*param_1 + 0x378))(param_1,param_2,&local_38,&local_28);
  local_18 = (longlong *)0x0;
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  if ((int)local_20 < 1) {
    if ((int)local_30 != 0) {
      local_48 = (longlong *)0x0;
      uStack_40 = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,param_3);
      (**(code **)(*param_1 + 0x470))(param_1,&local_38,&local_18,param_4,&local_48);
      goto LAB_1422bfc4c;
    }
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,param_3);
    local_48 = (longlong *)0x0;
    plVar1 = (longlong *)FMemory::Realloc(0,0x30);
    uStack_40 = CONCAT44(uStack_40._4_4_,3);
    local_48 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = (longlong)&PTR_GetPoolName_14502e018;
      plVar1[1] = 0;
      *(undefined4 *)(plVar1 + 2) = 0;
      if (((&local_18 != (longlong **)(plVar1 + 1)) && ((int)uStack_10 != 0)) &&
         (local_18 != (longlong *)0x0)) {
        (**(code **)(*local_18 + 0x30))();
      }
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[4] = lVar2;
      *plVar1 = (longlong)&PTR_GetPoolName_14502e060;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
    local_18 = (longlong *)0x0;
    uStack_10 = 0;
    FUN_142838d00(&local_48,&local_18);
    if ((int)uStack_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_1422bfc4c;
      (**(code **)(*local_48 + 0x28))(local_48,0);
      if (local_48 == (longlong *)0x0) goto LAB_1422bfb25;
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
      uStack_40 = uStack_40 & 0xffffffff00000000;
    }
  }
  else {
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,param_3);
    local_48 = (longlong *)0x0;
    plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
    uStack_40 = CONCAT44(uStack_40._4_4_,3);
    local_48 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = (longlong)&PTR_GetPoolName_14502df88;
      plVar1[1] = 0;
      *(undefined4 *)(plVar1 + 2) = 0;
      if (((&local_18 != (longlong **)(plVar1 + 1)) && ((int)uStack_10 != 0)) &&
         (local_18 != (longlong *)0x0)) {
        (**(code **)(*local_18 + 0x30))();
      }
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[4] = lVar2;
      *plVar1 = (longlong)&PTR_GetPoolName_14502dfd0;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
    local_18 = (longlong *)0x0;
    uStack_10 = 0;
    FUN_142838d00(&local_48,&local_18);
    if ((int)uStack_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_1422bfc4c;
      (**(code **)(*local_48 + 0x28))(local_48,0);
      if (local_48 != (longlong *)0x0) {
        local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
      }
LAB_1422bfb25:
      uStack_40 = uStack_40 & 0xffffffff00000000;
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
LAB_1422bfc4c:
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return;
}



// FUNCTION 1422bfc90 FUN_1422bfc90 body=699 status=ok
// SIG undefined FUN_1422bfc90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422bfc90(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  int *local_f8;
  ulonglong local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  int local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  longlong local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar11 = *param_2;
  lVar6 = (longlong)(int)param_2[1] * 0x10 + lVar11;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_e8 = param_4;
  local_d0 = param_3;
  local_b8 = lVar6;
  if (lVar11 != lVar6) {
    do {
      lVar2 = FUN_1422cbd90(param_1,lVar11,1);
      if (lVar2 != 0) {
        local_e0 = 0;
        if (*(longlong *)(lVar2 + 0x18) != 0) {
          FUN_1422b78e0(&local_a8,local_c0,(longlong *)(lVar2 + 0x18),0);
        }
        local_f8 = (int *)0x0;
        local_f0 = 0;
        (**(code **)(*param_1 + 0x370))(param_1,lVar11,&local_f8);
        uVar10 = (ulonglong)(int)local_f0;
        piVar4 = local_f8 + uVar10 * 10;
        if (local_f8 != piVar4) {
          local_d8 = 0;
          piVar7 = local_f8 + 8;
          do {
            if (*(longlong *)(piVar7 + -4) != 0) {
              iVar9 = *piVar7;
              if ((int)local_a0 - local_74 < (iVar9 - local_74) + (int)local_a0) {
                FUN_14089d3b0(&local_a8);
                iVar9 = *piVar7;
              }
              lVar2 = *(longlong *)(piVar7 + -2);
              lVar6 = lVar2 + (longlong)iVar9 * 0x18;
              for (; lVar2 != lVar6; lVar2 = lVar2 + 0x18) {
                FUN_1422b78e0(&local_a8,local_bc,lVar2,0);
              }
            }
            piVar1 = piVar7 + 2;
            piVar7 = piVar7 + 10;
          } while (piVar1 != piVar4);
          uVar10 = local_f0 & 0xffffffff;
          lVar6 = local_b8;
        }
        if ((int)uVar10 != 0) {
          piVar4 = local_f8 + 6;
          do {
            TArray<FNamedInterfaceDef,FDefaultAllocator>::
            ~TArray<FNamedInterfaceDef,FDefaultAllocator>(piVar4);
            piVar4 = piVar4 + 10;
            uVar8 = (int)uVar10 - 1;
            uVar10 = (ulonglong)uVar8;
          } while (uVar8 != 0);
        }
        if (local_f8 != (int *)0x0) {
          FMemory::Free(local_f8);
        }
      }
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != lVar6);
  }
  lVar6 = local_d0;
  local_f8 = (int *)0x0;
  local_f0 = local_f0 & 0xffffffff00000000;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_f8,local_d0);
  lVar11 = *param_1;
  uVar3 = TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::Array
                    (&local_a8,&local_d0);
  (**(code **)(lVar11 + 0x380))(param_1,uVar3,&local_f8,local_e8);
  if (local_c8 != 0) {
    plVar5 = (longlong *)(local_d0 + 8);
    iVar9 = local_c8;
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 3;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar6);
  return;
}



// FUNCTION 1422bff50 FUN_1422bff50 body=583 status=ok
// SIG undefined FUN_1422bff50(void)

void FUN_1422bff50(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint in_stack_ffffffffffffff70;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if ((DAT_146b17150 == 0) ||
     (plVar8 = *(longlong **)(DAT_146b17150 + 0x2c0), plVar8 == (longlong *)0x0))
  goto LAB_1422c0176;
  cVar3 = (char)param_1[0xe];
  if (cVar3 == '\0') {
    local_48 = 0;
    local_40 = 0;
    plVar5 = (longlong *)
             (**(code **)(*plVar8 + 0x318))(plVar8,local_18,param_1 + 6,param_1 + 8,&local_48,0);
    plVar8 = local_10;
    if (param_1 + 0xc != plVar5) {
      param_1[0xc] = *plVar5;
      *plVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd,plVar5 + 1);
      plVar8 = local_10;
    }
LAB_1422c00c8:
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar8 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  else {
    if (cVar3 == '\x01') {
      local_58 = 0;
      local_50 = 0;
      plVar5 = (longlong *)
               (**(code **)(*plVar8 + 0x350))(plVar8,local_28,param_1 + 8,param_1 + 10,&local_58,0);
      plVar8 = local_20;
      if (param_1 + 0xc != plVar5) {
        param_1[0xc] = *plVar5;
        *plVar5 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd,plVar5 + 1);
        plVar8 = local_20;
      }
      goto LAB_1422c00c8;
    }
    if (cVar3 == '\x02') {
      local_68 = 0;
      local_60 = 0;
      plVar5 = (longlong *)
               (**(code **)(*plVar8 + 0x348))
                         (plVar8,local_38,param_1 + 6,param_1 + 8,param_1 + 10,
                          in_stack_ffffffffffffff70 & 0xffffff00,&local_68,0);
      plVar8 = local_30;
      if (param_1 + 0xc != plVar5) {
        param_1[0xc] = *plVar5;
        *plVar5 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd,plVar5 + 1);
        plVar8 = local_30;
      }
      goto LAB_1422c00c8;
    }
  }
  if ((param_1[0xc] != 0) && (*(char *)(param_1[0xc] + 0x10) == '\0')) {
    local_78 = 0;
    local_70 = 0;
    puVar6 = (undefined8 *)operator_new(0x28,&local_78);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(puVar6 + 1,param_1);
      puVar6[2] = &LAB_1422bf1d0;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[4] = uVar7;
      *puVar6 = &PTR_FUN_143f4d1b8;
    }
    FStreamableHandle::BindCompleteDelegate(param_1[0xc],&local_78);
    return;
  }
LAB_1422c0176:
  (**(code **)(*param_1 + 0x298))(param_1);
  return;
}



// FUNCTION 1422c01a0 ActivateReverbEffect body=226 status=ok
// SIG undefined ActivateReverbEffect(void)

void FAudioDevice::ActivateReverbEffect
               (longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_res8 [2];
  longlong local_res18;
  int local_res20 [2];
  
  plVar1 = (longlong *)(param_1 + 0x2e0);
  local_res18 = param_3;
  if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
    lVar3 = *(longlong *)(param_1 + 800);
    if (*(longlong *)(param_1 + 800) == 0) {
      lVar3 = param_1 + 0x318;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0x328) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar2 * 0x38 + *plVar1);
        if (*plVar4 == param_3) {
          if ((iVar2 != -1) && (plVar4 != (longlong *)0x0)) goto LAB_1422c024e;
          break;
        }
        iVar2 = (int)plVar4[6];
      } while (iVar2 != -1);
    }
  }
  local_res8[0] = &local_res18;
  FUN_1422b81f0(plVar1,local_res20,local_res8,0);
  plVar4 = (longlong *)((longlong)local_res20[0] * 0x38 + *plVar1);
LAB_1422c024e:
  *(undefined4 *)(plVar4 + 4) = param_5;
  *(undefined4 *)((longlong)plVar4 + 0x24) = param_6;
  *(undefined4 *)(plVar4 + 5) = param_4;
  plVar4[2] = param_2;
  FUN_1422dc530(param_1);
  return;
}



// FUNCTION 1422c0290 FUN_1422c0290 body=1493 status=ok
// SIG undefined FUN_1422c0290(void)

undefined8 FUN_1422c0290(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 local_148;
  undefined8 local_140;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  longlong *local_128;
  longlong *plStack_120;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_10c;
  longlong local_100;
  longlong local_f8 [2];
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [8];
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong **local_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 local_50 [24];
  
  local_118 = *param_2;
  plVar8 = (longlong *)0x0;
  local_140 = 0;
  if (((local_118 != 0) && (local_a0 = param_2 + 1, *local_a0 != 0)) &&
     ((*param_3 == 0 || ((*param_3 != 0 && ((int)param_3[2] < 2)))))) {
    local_148 = 0;
    plVar11 = (longlong *)(param_1 + 0x378);
    if (*(int *)(param_1 + 0x380) != *(int *)(param_1 + 0x3ac)) {
      lVar6 = *(longlong *)(param_1 + 0x3b8);
      if (*(longlong *)(param_1 + 0x3b8) == 0) {
        lVar6 = param_1 + 0x3b0;
      }
      iVar10 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)local_118 >> 0x20) + (int)local_118) &
                                (longlong)*(int *)(param_1 + 0x3c0) - 1U) * 4);
      if (iVar10 != -1) {
        do {
          plVar7 = (longlong *)((longlong)iVar10 * 0x20 + *plVar11);
          if (*plVar7 == local_118) {
            if (iVar10 != -1) goto LAB_1422c0381;
            break;
          }
          iVar10 = (int)plVar7[3];
        } while (iVar10 != -1);
      }
    }
    plVar7 = plVar8;
LAB_1422c0381:
    plVar4 = plVar7 + 1;
    if (plVar7 == (longlong *)0x0) {
      plVar4 = plVar8;
    }
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)operator_new(0xf0);
      plVar7 = plVar8;
      if (plVar4 != (longlong *)0x0) {
        FPrimaryAssetTypeInfo::FPrimaryAssetTypeInfo(plVar4);
        plVar4[0x12] = 0;
        plVar4[0x13] = 0;
        plVar4[0x16] = 0;
        plVar4[0x17] = 0;
        *(undefined4 *)(plVar4 + 0x18) = 0xffffffff;
        *(undefined4 *)((longlong)plVar4 + 0xc4) = 0;
        plVar4[0x1a] = 0;
        *(undefined4 *)(plVar4 + 0x1b) = 0;
        plVar4[0x1c] = 0;
        plVar4[0x1d] = 0;
        plVar7 = plVar4;
      }
      plVar4 = (longlong *)operator_new(0x18);
      plStack_120 = plVar8;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        *plVar4 = (longlong)&PTR_FUN_14502e148;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        plVar4[2] = (longlong)plVar7;
        plStack_120 = plVar4;
      }
      local_128 = plVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_128,plVar7,plVar7);
      *local_128 = local_118;
      *(undefined1 *)(local_128 + 0x10) = 1;
      local_88 = local_128;
      plStack_80 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
        UNLOCK();
      }
      local_98 = &local_118;
      local_90 = &local_88;
      FUN_1416871a0(plVar11,&local_138,&local_98,0);
      plVar7 = plStack_80;
      plVar4 = (longlong *)(*plVar11 + ((longlong)local_138 * 4 + 1) * 8);
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_80 + 1;
        lVar6 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      plVar11 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_120 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_120)(plStack_120);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
    }
    lVar6 = *plVar4;
    if (*(char *)(lVar6 + 0x80) != '\0') {
      lVar2 = param_2[1];
      plVar11 = (longlong *)(lVar6 + 0x90);
      iVar10 = (int)((ulonglong)lVar2 >> 0x20);
      if (*(int *)(lVar6 + 0x98) != *(int *)(lVar6 + 0xc4)) {
        lVar5 = *(longlong *)(lVar6 + 0xd0);
        if (*(longlong *)(lVar6 + 0xd0) == 0) {
          lVar5 = lVar6 + 200;
        }
        iVar3 = *(int *)(lVar5 + ((longlong)(iVar10 + (int)lVar2) &
                                 (longlong)*(int *)(lVar6 + 0xd8) - 1U) * 4);
        if (iVar3 != -1) {
          do {
            plVar7 = (longlong *)((longlong)iVar3 * 0x80 + *plVar11);
            if (*plVar7 == lVar2) {
              if (iVar3 != -1) goto LAB_1422c05b2;
              break;
            }
            iVar3 = (int)plVar7[0xf];
          } while (iVar3 != -1);
        }
      }
      plVar7 = plVar8;
LAB_1422c05b2:
      plVar4 = plVar7 + 1;
      if (plVar7 == (longlong *)0x0) {
        plVar4 = plVar8;
      }
      if (*(int *)(lVar6 + 0x98) != *(int *)(lVar6 + 0xc4)) {
        lVar5 = *(longlong *)(lVar6 + 0xd0);
        if (*(longlong *)(lVar6 + 0xd0) == 0) {
          lVar5 = lVar6 + 200;
        }
        iVar10 = *(int *)(lVar5 + ((longlong)(iVar10 + (int)lVar2) &
                                  (longlong)*(int *)(lVar6 + 0xd8) - 1U) * 4);
        if (iVar10 != -1) {
          do {
            plVar8 = (longlong *)((longlong)iVar10 * 0x80 + *plVar11);
            if (*plVar8 == lVar2) {
              if ((iVar10 != -1) && (plVar8 != (longlong *)0x0)) goto LAB_1422c0647;
              break;
            }
            iVar10 = (int)plVar8[0xf];
          } while (iVar10 != -1);
        }
      }
      local_b8 = param_2 + 1;
      FUN_1422b8480(plVar11,&local_134,&local_b8,0);
      plVar8 = (longlong *)((longlong)local_134 * 0x80 + *plVar11);
LAB_1422c0647:
      if (plVar4 != (longlong *)0x0) {
        FSoftObjectPath::operator==(plVar4 + 3,param_3);
      }
      local_100 = *param_3;
      local_110 = 0xffffffff;
      local_10c = 0;
      FString::FString(local_f8,param_3 + 1);
      *(undefined4 *)(plVar8 + 2) = local_110;
      *(undefined4 *)((longlong)plVar8 + 0x14) = (undefined4)local_10c;
      *(undefined4 *)(plVar8 + 3) = local_10c._4_4_;
      local_58 = local_100;
      FString::FString(local_50,local_f8);
      FSoftObjectPath::operator=(plVar8 + 4,&local_58);
      if (local_f8[0] != 0) {
        FMemory::Free();
      }
      if (*(char *)(param_1 + 0x276) != '\0') {
        local_140 = 0;
        if (*param_3 != 0) {
          local_78 = &local_b0;
          local_b0 = *param_3;
          local_70 = param_2;
          TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FLinearColor_const_&>_>
                    (param_1 + 0x28,local_c0,&local_78,0);
        }
      }
      if (plVar4 != (longlong *)0x0) {
        TSet<TTuple<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 0x118,param_2);
      }
      TSet<TTuple<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x118,&local_130,param_2);
      if ((local_130 == -1) ||
         (lVar6 = (longlong)local_130 * 0x68 + *(longlong *)(param_1 + 0x118), lVar6 == 0)) {
        local_a8 = param_2;
        FUN_1422b7f30(param_1 + 0x118,&local_12c,&local_a8,0);
        lVar6 = (longlong)local_12c * 0x68 + *(longlong *)(param_1 + 0x118);
      }
      plVar11 = (longlong *)*param_4;
      plVar8 = plVar11 + (longlong)(int)param_4[1] * 5;
      if (plVar11 != plVar8) {
        local_60 = &local_e8;
        do {
          local_d8 = plVar11[2];
          iVar10 = (int)plVar11[4];
          local_e8 = *plVar11;
          lStack_e0 = plVar11[1];
          puVar9 = (undefined8 *)plVar11[3];
          local_d0 = (undefined8 *)0x0;
          local_c8 = iVar10;
          if (iVar10 == 0) {
            local_c4 = 0;
          }
          else {
            TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_d0,iVar10,0);
            puVar12 = local_d0;
            do {
              *puVar12 = *puVar9;
              FString::FString(puVar12 + 1,puVar9 + 1);
              puVar12 = puVar12 + 3;
              puVar9 = puVar9 + 3;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
          local_e8 = *param_2;
          lStack_e0 = *local_a0;
          local_68 = plVar11 + 2;
          TSet<TTuple<FName,FAssetBundleEntry>,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_&,FAssetBundleEntry_&>_>
                    (lVar6 + 0x10,&local_148,&local_68,0);
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(&local_d0);
          plVar11 = plVar11 + 5;
        } while (plVar11 != plVar8);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1422c0870 FUN_1422c0870 body=135 status=ok
// SIG undefined FUN_1422c0870(void)

void FUN_1422c0870(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_142399f40();
  if (cVar1 != '\0') {
    cVar1 = FUN_14239a1f0(param_1);
    if ((((cVar1 != '\0') && ((*(byte *)(param_1 + 0xb8) & 1) != 0)) &&
        (1e-05 < *(float *)(param_1 + 0x2d0))) &&
       ((1e-05 < *(float *)(param_1 + 0x2d4) &&
        ((*(longlong *)(param_1 + 0x20) == 0 ||
         ((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) >> 4 & 1) == 0)))))) {
      lVar2 = *(longlong *)(param_1 + 0x120);
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x0001422c08ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar2 + 0x1b8) + 0x180))(*(longlong **)(lVar2 + 0x1b8),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1422c0900 FUN_1422c0900 body=669 status=ok
// SIG undefined FUN_1422c0900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422c0900(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_628 [32];
  undefined1 local_608;
  longlong local_600;
  longlong local_5f8 [3];
  longlong *local_5e0;
  longlong *local_5d8;
  undefined1 *local_5c8 [2];
  undefined1 local_5b8 [32];
  undefined8 local_598;
  undefined4 local_588;
  longlong local_578;
  undefined1 local_568 [1344];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_628;
  lVar2 = *(longlong *)(param_2 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x358) & 0x20) == 0) {
    lVar6 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return;
    }
  }
  cVar4 = IsInAudioThread();
  if (cVar4 == '\0') {
    local_578 = param_1;
    FActiveSound::FActiveSound(local_568,param_2);
    local_598 = 0;
    local_588 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x560,local_5b8);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_CopyToEmptyStorage_14502e0f0;
      puVar7[2] = local_578;
      FActiveSound::FActiveSound(puVar7 + 4,local_568);
    }
    local_5c8[0] = &LAB_1422c2c90;
    FUN_1422f8a30(local_5c8,local_608);
    FActiveSound::~FActiveSound(local_568);
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x10);
  cVar4 = USoundBase::IsLooping(lVar2);
  if ((cVar4 == '\0') &&
     (*(float *)(lVar2 + 0x5c) <= *(float *)(param_1 + 0x714) &&
      *(float *)(param_1 + 0x714) != *(float *)(lVar2 + 0x5c))) {
    return;
  }
  if (lVar2 != 0) {
    lVar6 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && ((*(byte *)(lVar2 + 0xb3) & 4) != 0)) &&
       (iVar5 = USoundWave::GetNumSoundsActive(lVar2), 0 < iVar5)) {
      local_5f8[0] = 0;
      local_5f8[1] = 0;
      local_5f8[2] = *(undefined8 *)(lVar2 + 0x18);
      FName::ToString(local_5f8 + 2,local_5f8);
      if (local_5f8[0] == 0) {
        return;
      }
      FMemory::Free();
      return;
    }
  }
  local_600 = FSoundConcurrencyManager::CreateNewActiveSound(param_1 + 0x538,param_2);
  if (local_600 != 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 0x34);
    *piVar1 = *piVar1 + 1;
    if ((*(longlong *)(local_600 + 0x10) == 0) || (cVar4 = USoundBase::IsLooping(), cVar4 == '\0'))
    {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      *(int *)(param_1 + 0x710) = *(int *)(param_1 + 0x710) + 1;
    }
    *(byte *)(local_600 + 0x9b) = *(byte *)(local_600 + 0x9b) | 8;
    iVar5 = *(int *)(param_1 + 0x378);
    *(int *)(param_1 + 0x378) = iVar5 + 1;
    if (*(int *)(param_1 + 0x37c) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x370,iVar5);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x370) + (longlong)iVar5 * 8) = local_600;
    local_5f8[0] = *(longlong *)(local_600 + 0x18);
    if (local_5f8[0] != 0) {
      local_5e0 = local_5f8;
      local_5d8 = &local_600;
      FUN_141a636d0(param_1 + 0x438,local_5f8 + 2,&local_5e0,0);
    }
    return;
  }
  return;
}



// FUNCTION 1422c0ba0 AddNotify body=74 status=ok
// SIG undefined AddNotify(void)

void FNotifyBufferFinishedHooks::AddNotify(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
  }
  puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}



// FUNCTION 1422c0bf0 FUN_1422c0bf0 body=774 status=ok
// SIG undefined FUN_1422c0bf0(void)

void FUN_1422c0bf0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
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
  
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x210,0,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x528),*(undefined4 *)(param_1 + 0x530),0,0);
  FReferenceCollector::
  AddReferencedObjects<USoundMix,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>_>
            (param_2,param_1 + 0x218,0,0);
  plVar2 = (longlong *)(param_1 + 0x2e0);
  uStack_94 = 1;
  uVar3 = *(uint *)(param_1 + 0x308);
  puVar1 = (uint *)(param_1 + 0x2f0);
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x300);
    if (*(uint **)(param_1 + 0x300) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar4 = *puVar12;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar6 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar6;
      if (bVar5) goto LAB_1422c0d1c;
      uVar4 = puVar12[lVar8 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (iStack_80 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1422c0d1c:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x308);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar11 = uVar4 & 0xffffffe0;
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
    puVar12 = *(uint **)(param_1 + 0x300);
    if (*(uint **)(param_1 + 0x300) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar7 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1422c0de1;
      uVar7 = puVar12[(longlong)iVar6 + 1];
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
    uStack_84 = (uVar11 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1422c0de1:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    (**(code **)(*param_2 + 0x38))(param_2,*plVar2 + (longlong)(int)uStack_5c * 0x38 + 0x10,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FUN_14093d580(*(longlong *)(param_1 + 0x2c8),param_2);
  }
  uVar10 = 0;
  puVar9 = *(undefined8 **)(param_1 + 0x370);
  uVar13 = (longlong)*(int *)(param_1 + 0x378) & 0x1fffffffffffffff;
  if (puVar9 + *(int *)(param_1 + 0x378) < puVar9) {
    uVar13 = uVar10;
  }
  if (uVar13 != 0) {
    do {
      FActiveSound::AddReferencedObjects(*puVar9,param_2);
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar10 != uVar13);
  }
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x380),*(undefined4 *)(param_1 + 0x388),0,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x2b8),*(undefined4 *)(param_1 + 0x2c0),0,0);
  return;
}



// FUNCTION 1422c0f00 AddReferencedObjects body=123 status=ok
// SIG undefined AddReferencedObjects(void)

void FWaveInstance::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x38))(param_2,param_1,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 8,0,0);
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar2 = (longlong)*(int *)(param_1 + 0x58) * 0x10 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
    (**(code **)(*param_2 + 0x38))(param_2,lVar1,0,0);
  }
  return;
}



// FUNCTION 1422c0f80 AddSoundToStop body=65 status=ok
// SIG undefined AddSoundToStop(void)

void FAudioDevice::AddSoundToStop(longlong param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  if (*(longlong *)(param_2 + 0x18) != 0) {
    TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x438);
  }
  FUN_14058cbf0(param_1 + 0x3c0,local_res8,local_res10,0);
  return;
}



// FUNCTION 1422c0fd0 FUN_1422c0fd0 body=1932 status=ok
// SIG undefined FUN_1422c0fd0(void)

void FUN_1422c0fd0(longlong param_1,longlong param_2,float param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  void *_Src;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  int *piVar19;
  longlong *plVar20;
  longlong *plVar21;
  float *pfVar22;
  ulonglong uVar23;
  float fVar24;
  longlong local_res10;
  uint local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  uint local_100;
  float fStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong *local_f0;
  longlong *local_e8;
  int local_e0;
  int local_dc;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_2 != 0) {
    if (0.0 <= param_3) {
      if (1.0 <= param_3) {
        param_3 = 1.0;
      }
    }
    else {
      param_3 = 0.0;
    }
    plVar21 = (longlong *)(param_1 + 0x268);
    local_res10 = param_2;
    local_d0 = plVar21;
    TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
    ::FindId(plVar21,&local_114,param_2);
    plVar14 = (longlong *)0x0;
    local_d8 = plVar14;
    if (local_114 != 0xffffffff) {
      local_d8 = (longlong *)((longlong)(int)local_114 * 0x60 + *plVar21);
    }
    plVar21 = local_d8 + 1;
    if (local_d8 == (longlong *)0x0) {
      plVar21 = plVar14;
    }
    plVar12 = (longlong *)(param_2 + 0x68);
    bVar4 = false;
    local_f0 = plVar21;
    if (plVar21 != (longlong *)0x0) {
      plVar20 = (longlong *)(param_1 + 0x3b0);
      local_c8 = plVar20;
      if (plVar20 != plVar12) {
        iVar16 = *(int *)(param_2 + 0x70);
        _Src = (void *)*plVar12;
        *(int *)(param_1 + 0x3b8) = iVar16;
        if ((iVar16 == 0) && (*(int *)(param_1 + 0x3bc) == 0)) {
          *(undefined4 *)(param_1 + 0x3bc) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar20,iVar16);
          _guard_xfg_dispatch_icall_nop((void *)*plVar20,_Src,(longlong)iVar16 * 0x18);
        }
      }
      plVar5 = local_f0;
      plVar11 = (longlong *)*plVar20;
      bVar4 = true;
      plVar12 = plVar11 + (longlong)*(int *)(param_1 + 0x3b8) * 3;
      for (; plVar11 != plVar12; plVar11 = plVar11 + 3) {
        if (*plVar11 != 0) {
          *(float *)(plVar11 + 1) = (param_3 * *(float *)(plVar11 + 1) + 1.0) - param_3;
          *(float *)((longlong)plVar11 + 0xc) =
               (param_3 * *(float *)((longlong)plVar11 + 0xc) + 1.0) - param_3;
          *(float *)((longlong)plVar11 + 0x14) =
               (param_3 * *(float *)((longlong)plVar11 + 0x14) + 1.0) - param_3;
        }
      }
      fVar24 = *(float *)(plVar21 + 5);
      uStack_108 = (uint *)(plVar21 + 2);
      iVar16 = 0;
      local_e8 = (longlong *)0x0;
      local_dc = 0;
      local_110 = 0x100000000;
      fStack_fc = 0.0;
      iStack_f8 = 0;
      if (fVar24 != 0.0) {
        puVar18 = (uint *)plVar21[4];
        if ((uint *)plVar21[4] == (uint *)0x0) {
          puVar18 = uStack_108;
        }
        uVar6 = *puVar18;
        iVar7 = iVar16;
        while (uVar6 == 0) {
          iStack_f8 = iStack_f8 + 0x20;
          local_110._4_4_ = (undefined4)((ulonglong)local_110 >> 0x20);
          local_110 = CONCAT44(local_110._4_4_,iVar7 + 1);
          if ((int)((int)fVar24 + -1 + ((int)fVar24 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_1422c121d;
          uVar6 = puVar18[(longlong)iVar7 + 1];
          iVar7 = iVar7 + 1;
        }
        uVar6 = -uVar6 & uVar6;
        iVar7 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        local_110 = CONCAT44(uVar6,(undefined4)local_110);
        if (uVar6 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        fStack_fc = (float)((iStack_f8 - iVar7) + 0x1f);
        if ((int)fVar24 < (int)fStack_fc) {
LAB_1422c121d:
          fStack_fc = fVar24;
        }
      }
      local_100 = 0xffffffff;
      local_114 = *(uint *)(plVar21 + 5);
      uStack_a8 = CONCAT44(fStack_fc,0xffffffff);
      local_a0 = CONCAT44(uStack_f4,iStack_f8);
      uStack_90 = local_110;
      lVar2 = uStack_90;
      uVar17 = local_114 & 0xffffffe0;
      local_98._0_4_ = SUB84(plVar21,0);
      local_98._4_4_ = (undefined4)((ulonglong)plVar21 >> 0x20);
      uStack_90._0_4_ = (undefined4)local_110;
      uStack_90._4_4_ = (uint)((ulonglong)local_110 >> 0x20);
      uVar6 = *(uint *)(plVar21 + 5);
      local_c0 = (undefined4)local_98;
      uStack_bc = local_98._4_4_;
      uStack_b8 = (undefined4)uStack_90;
      uStack_b4 = uStack_90._4_4_;
      local_b0 = uStack_108;
      local_98 = plVar21;
      uStack_90 = lVar2;
      puStack_88 = uStack_108;
      uStack_80 = uStack_a8;
      uStack_78 = local_a0;
      if (local_114 != uVar6) {
        plVar12 = (longlong *)local_f0[4];
        if ((longlong *)local_f0[4] == (longlong *)0x0) {
          plVar12 = plVar21 + 2;
        }
        uVar10 = *(uint *)((longlong)plVar12 + (longlong)((int)local_114 >> 5) * 4) &
                 -1 << ((byte)local_114 & 0x1f);
        iVar7 = (int)local_114 >> 5;
        while (uVar10 == 0) {
          uVar17 = uVar17 + 0x20;
          if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_1422c12ec;
          uVar10 = *(uint *)((longlong)plVar12 + (longlong)iVar7 * 4 + 4);
          iVar7 = iVar7 + 1;
        }
        uVar10 = -uVar10 & uVar10;
        iVar7 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uVar10 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        local_114 = (uVar17 - iVar7) + 0x1f;
        if ((int)uVar6 < (int)local_114) {
LAB_1422c12ec:
          local_114 = uVar6;
        }
      }
      while( true ) {
        plVar11 = local_f0;
        lVar2 = local_res10;
        if (((uStack_a8._4_4_ == local_114) && (local_b0 == (uint *)(plVar21 + 2))) &&
           ((longlong *)CONCAT44(uStack_bc,local_c0) == plVar5)) break;
        lVar13 = (longlong)(int)uStack_a8._4_4_ * 0x68 + *(longlong *)CONCAT44(uStack_bc,local_c0);
        lVar2 = *(longlong *)(lVar13 + 8);
        if ((*(byte *)(lVar13 + 0x5c) & 8) == 0) {
          bVar3 = false;
          plVar12 = (longlong *)*plVar20;
          plVar21 = plVar12 + (longlong)*(int *)(param_1 + 0x3b8) * 3;
          for (; plVar12 != plVar21; plVar12 = plVar12 + 3) {
            if (*plVar12 == lVar2) {
              bVar3 = true;
              UpdateClassAdjustorOverrideEntry(plVar12,lVar13 + 8,param_4);
              break;
            }
          }
          if (!bVar3) {
            local_100 = local_100 & 0xfffffffe;
            local_110 = 0;
            uStack_108 = (uint *)0x3f8000003f800000;
            fStack_fc = 1.0;
            UpdateClassAdjustorOverrideEntry(&local_110,lVar13 + 8,param_4);
            iVar7 = *(int *)(param_1 + 0x3b8);
            *(int *)(param_1 + 0x3b8) = iVar7 + 1;
            if (*(int *)(param_1 + 0x3bc) < iVar7 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(plVar20,iVar7);
            }
            lVar2 = *plVar20;
            puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x18);
            *puVar1 = (undefined4)local_110;
            puVar1[1] = local_110._4_4_;
            puVar1[2] = (undefined4)uStack_108;
            puVar1[3] = uStack_108._4_4_;
            *(ulonglong *)(lVar2 + 0x10 + (longlong)iVar7 * 0x18) = CONCAT44(fStack_fc,local_100);
          }
        }
        else {
          local_e0 = iVar16 + 1;
          if (local_dc < local_e0) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e8,iVar16);
            plVar14 = local_e8;
          }
          plVar14[iVar16] = lVar2;
          iVar16 = local_e0;
        }
        uStack_a8 = CONCAT44(uStack_a8._4_4_,(uint)uStack_a8 & ~uStack_b4);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b8);
        plVar21 = plVar5;
      }
      uVar15 = 0;
      uVar23 = (ulonglong)((longlong)(plVar14 + iVar16) + (7 - (longlong)plVar14)) >> 3;
      if (plVar14 + iVar16 < plVar14) {
        uVar23 = uVar15;
      }
      plVar12 = plVar20;
      plVar21 = plVar14;
      if (uVar23 != 0) {
        piVar19 = (int *)((longlong)local_d8 + 0x3c);
        plVar20 = local_d8 + 2;
        if (local_d8 == (longlong *)0x0) {
          piVar19 = (int *)&DAT_00000034;
          plVar20 = (longlong *)&DAT_00000008;
        }
        do {
          TSet<TTuple<USoundClass_*,FSoundMixClassOverride>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>,FDefaultSetAllocator>
          ::Remove(plVar11,*plVar14);
          if ((int)*plVar20 == *piVar19) {
            TSet<TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>,TDefaultMapHashableKeyFuncs<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,0>,FDefaultSetAllocator>
            ::Remove(local_d0,lVar2);
          }
          plVar14 = plVar14 + 1;
          uVar15 = uVar15 + 1;
          plVar12 = local_c8;
          plVar21 = local_e8;
        } while (uVar15 != uVar23);
      }
      if (plVar21 != (longlong *)0x0) {
        FMemory::Free(plVar21);
      }
    }
    pfVar22 = (float *)0x0;
    plVar14 = (longlong *)*plVar12;
    plVar21 = plVar14 + (longlong)(int)plVar12[1] * 3;
    for (; plVar14 != plVar21; plVar14 = plVar14 + 3) {
      lVar2 = *plVar14;
      if (lVar2 != 0) {
        if ((*(byte *)(plVar14 + 2) & 1) == 0) {
          TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x1b8,&local_114,lVar2);
          pfVar9 = pfVar22;
          if (local_114 != 0xffffffff) {
            pfVar9 = (float *)((longlong)(int)local_114 * 0x40 + *(longlong *)(param_1 + 0x1b8));
          }
          pfVar8 = pfVar9 + 2;
          if (pfVar9 == (float *)0x0) {
            pfVar8 = pfVar22;
          }
          if (pfVar8 != (float *)0x0) {
            if (bVar4) {
              *pfVar8 = *pfVar8 * *(float *)(plVar14 + 1);
              pfVar8[1] = pfVar8[1] * *(float *)((longlong)plVar14 + 0xc);
              fVar24 = pfVar8[4] * *(float *)((longlong)plVar14 + 0x14);
            }
            else {
              *pfVar8 = ((*(float *)(plVar14 + 1) * param_3 + 1.0) - param_3) * *pfVar8;
              pfVar8[1] = ((param_3 * *(float *)((longlong)plVar14 + 0xc) + 1.0) - param_3) *
                          pfVar8[1];
              fVar24 = ((param_3 * *(float *)((longlong)plVar14 + 0x14) + 1.0) - param_3) *
                       pfVar8[4];
            }
            pfVar8[4] = fVar24;
          }
        }
        else if (bVar4) {
          FAudioDevice::RecursiveApplyAdjuster(param_1,plVar14);
        }
        else {
          local_110 = *plVar14;
          local_100 = (uint)plVar14[2];
          fStack_fc = (param_3 * *(float *)((longlong)plVar14 + 0x14) + 1.0) - param_3;
          fVar24 = (param_3 * *(float *)(plVar14 + 1) + 1.0) - param_3;
          uStack_108 = (uint *)CONCAT44((param_3 * *(float *)((longlong)plVar14 + 0xc) + 1.0) -
                                        param_3,fVar24);
          TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x1b8,&local_res10,lVar2);
          pfVar9 = pfVar22;
          if ((int)local_res10 != -1) {
            pfVar9 = (float *)((longlong)(int)local_res10 * 0x40 + *(longlong *)(param_1 + 0x1b8));
          }
          pfVar8 = pfVar9 + 2;
          if (pfVar9 == (float *)0x0) {
            pfVar8 = pfVar22;
          }
          if (pfVar8 != (float *)0x0) {
            *pfVar8 = fVar24 * *pfVar8;
            pfVar8[1] = uStack_108._4_4_ * pfVar8[1];
            pfVar8[4] = fStack_fc * pfVar8[4];
            pfVar9 = pfVar22;
            pfVar8 = pfVar22;
            if (0 < *(int *)(lVar2 + 0x60)) {
              do {
                if (*(longlong *)((longlong)pfVar8 + *(longlong *)(lVar2 + 0x58)) != 0) {
                  FAudioDevice::RecursiveApplyAdjuster(param_1,&local_110);
                }
                uVar6 = (int)pfVar9 + 1;
                pfVar9 = (float *)(ulonglong)uVar6;
                pfVar8 = pfVar8 + 2;
              } while ((int)uVar6 < *(int *)(lVar2 + 0x60));
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1422c1760 FUN_1422c1760 body=850 status=ok
// SIG undefined FUN_1422c1760(void)

void FUN_1422c1760(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 local_res8;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong local_38;
  undefined1 local_30;
  byte local_2f;
  
  if (((((((*(float *)(param_1 + 0x304) == *(float *)(param_2 + 0x60)) &&
          (*(int *)(param_2 + 0x68) == *(int *)(param_1 + 0x30c))) &&
         (*(int *)(param_2 + 0x6c) == *(int *)(param_1 + 0x310))) &&
        ((*(int *)(param_2 + 0x70) == *(int *)(param_1 + 0x314) &&
         (*(int *)(param_2 + 0x74) == *(int *)(param_1 + 0x318))))) &&
       ((*(int *)(param_2 + 0x78) == *(int *)(param_1 + 0x31c) &&
        ((*(int *)(param_2 + 0x7c) == *(int *)(param_1 + 800) &&
         (*(int *)(param_2 + 0x80) == *(int *)(param_1 + 0x324))))))) &&
      (*(int *)(param_2 + 0x84) == *(int *)(param_1 + 0x328))) &&
     (*(int *)(param_2 + 0x88) == *(int *)(param_1 + 0x32c))) {
    lVar8 = 0;
    local_44 = 0;
    local_48 = 0xffffffff;
    FWeakObjectPtr::operator=(local_40,0);
    lVar6 = lVar8;
    if (((*(byte *)(param_1 + 0xb8) & 1) != 0) &&
       ((*(longlong *)(param_1 + 0x120) != 0 ||
        (lVar5 = FUN_1423407b0(param_1), lVar6 = 0, lVar5 != 0)))) {
      lVar6 = *(longlong *)(param_1 + 0x120);
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0(param_1);
      }
      local_2f = local_2f & 0xfd | 1;
      local_30 = 1;
      local_38 = lVar6;
      AK::MemoryMgr::StartProfileThreadUsage((long)&local_38);
      FUN_14233aad0(param_1);
      *(undefined8 *)(param_1 + 0x120) = 0;
      AK::MemoryMgr::StartProfileThreadUsage((long)&local_38);
    }
    FWeakObjectPtr::operator=(local_40,lVar6);
    cVar2 = FWeakObjectPtr::IsValid(local_40);
    lVar6 = lVar8;
    if (cVar2 != '\0') {
      lVar6 = param_1;
    }
    FWeakObjectPtr::operator=(&local_48,lVar6);
    FUN_1422d54f0(param_1);
    uVar3 = FUntypedBulkData::GetBulkDataSize(param_2 + 0x90);
    FUN_14171efb0(param_1 + 0x360,2);
    local_res8 = FUntypedBulkData::Realloc(param_1 + 0x360,uVar3);
    FUntypedBulkData::GetCopy(param_2 + 0x90,&local_res8,0);
    FUntypedBulkData::Unlock(param_1 + 0x360);
    uVar3 = FUntypedBulkData::GetBulkDataSize(param_2 + 0x100);
    FUN_14171efb0(param_1 + 0x3d0,2);
    local_res8 = FUntypedBulkData::Realloc(param_1 + 0x3d0,uVar3);
    FUntypedBulkData::GetCopy(param_2 + 0x100,&local_res8,0);
    FUntypedBulkData::Unlock(param_1 + 0x3d0);
    uVar3 = FUntypedBulkData::GetBulkDataSize(param_2 + 0x170);
    FUN_14171efb0(param_1 + 0x440,2);
    local_res8 = FUntypedBulkData::Realloc(param_1 + 0x440,uVar3);
    FUntypedBulkData::GetCopy(param_2 + 0x170,&local_res8,0);
    FUntypedBulkData::Unlock(param_1 + 0x440);
    *(undefined4 *)(param_1 + 0x340) = 2;
    FUN_1422d0ca0(param_1);
    cVar2 = FWeakObjectPtr::IsValid(&local_48);
    if (cVar2 != '\0') {
      lVar6 = FWeakObjectPtr::Get(local_40);
      lVar5 = FWeakObjectPtr::Get(&local_48);
      iVar1 = *(int *)(lVar5 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar7;
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
      }
      if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) {
        if ((*(byte *)(lVar5 + 0xb8) & 1) != 0) {
          FUN_14233aad0(lVar5);
        }
        *(longlong *)(lVar5 + 0x120) = lVar6;
        local_2f = local_2f & 0xfd | 1;
        local_30 = 1;
        local_38 = lVar6;
        AK::MemoryMgr::StartProfileThreadUsage((long)&local_38);
        FUN_14233a6f0(lVar5);
        AK::MemoryMgr::StartProfileThreadUsage((long)&local_38);
      }
    }
  }
  return;
}



// FUNCTION 1422c1ac0 ApplySoundMix body=170 status=ok
// SIG undefined ApplySoundMix(void)

undefined8 FAudioDevice::ApplySoundMix(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    dVar2 = *(double *)(param_1 + 0x360);
    *(double *)(param_3 + 0x10) = dVar2;
    dVar2 = (double)*(float *)(param_2 + 0x78) + dVar2;
    *(double *)(param_3 + 0x18) = dVar2;
    fVar1 = *(float *)(param_2 + 0x7c);
    *(undefined8 *)(param_3 + 0x28) = 0xbff0000000000000;
    *(undefined8 *)(param_3 + 0x30) = 0xbff0000000000000;
    dVar2 = (double)fVar1 + dVar2;
    *(double *)(param_3 + 0x20) = dVar2;
    if (0.0 <= *(float *)(param_2 + 0x80)) {
      dVar2 = (double)*(float *)(param_2 + 0x80) + dVar2;
      *(double *)(param_3 + 0x28) = dVar2;
      *(double *)(param_3 + 0x30) = (double)*(float *)(param_2 + 0x84) + dVar2;
    }
    *(undefined4 *)(param_3 + 0x38) = 0;
    FUN_1422c0fd0();
    return 1;
  }
  return 0;
}



// FUNCTION 1422c1b70 FUN_1422c1b70 body=42 status=ok
// SIG undefined FUN_1422c1b70(void)

void FUN_1422c1b70(undefined8 param_1,undefined8 param_2)

{
  FUN_142381ae0();
  FUN_1422c1760(param_2,param_1);
  return;
}



// FUNCTION 1422c1ba0 Array body=411 status=ok
// SIG undefined Array(void)

longlong *
TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::Array
          (longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < (int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_2);
  }
  iVar2 = (int)param_1[5];
  puStack_20 = (uint *)(param_1 + 2);
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puStack_20;
    }
    uVar3 = *puVar8;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1422c1c7b;
      uVar3 = puVar8[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_48._4_4_ = (uStack_40 - iVar6) + 0x1f;
    if (iVar2 < local_48._4_4_) {
LAB_1422c1c7b:
      local_48._4_4_ = iVar2;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  uStack_c = iStack_3c;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iVar6 = local_48._4_4_;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_34 = iStack_3c;
  bVar4 = local_48._4_4_ < iVar2;
  local_48 = puStack_20;
  local_30 = param_1;
  uStack_40 = 0xffffffff;
  iStack_3c = iVar6;
  if (bVar4) {
    do {
      iVar2 = (int)param_2[1];
      puVar7 = (undefined8 *)((longlong)iStack_3c * 0x20 + *param_1);
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2,iVar2);
      }
      puVar1 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
      *puVar1 = *puVar7;
      FString::FString(puVar1 + 1,puVar7 + 1);
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return param_2;
}



// FUNCTION 1422c1d40 FUN_1422c1d40 body=177 status=ok
// SIG undefined FUN_1422c1d40(void)

longlong * FUN_1422c1d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar1 = GetTransientPackage();
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = UAsyncActionChangePrimaryAssetBundles::GetPrivateStaticClass();
  plVar3 = (longlong *)FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  TArray<FName,FDefaultAllocator>::operator=(plVar3 + 8,param_2);
  TArray<FName,FDefaultAllocator>::operator=(plVar3 + 10,param_3);
  *(undefined1 *)(plVar3 + 0xe) = 1;
  (**(code **)(*plVar3 + 0x288))(plVar3,param_1);
  return plVar3;
}



// FUNCTION 1422c1e00 FUN_1422c1e00 body=202 status=ok
// SIG undefined FUN_1422c1e00(void)

longlong *
FUN_1422c1e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar1 = GetTransientPackage();
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = UAsyncActionChangePrimaryAssetBundles::GetPrivateStaticClass();
  plVar3 = (longlong *)FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  TArray<FName,FDefaultAllocator>::operator=(plVar3 + 8,param_3);
  TArray<FName,FDefaultAllocator>::operator=(plVar3 + 10,param_4);
  FUN_1408e22e0(plVar3 + 6,param_2);
  *(undefined1 *)(plVar3 + 0xe) = 2;
  (**(code **)(*plVar3 + 0x288))(plVar3,param_1);
  return plVar3;
}



// FUNCTION 1422c1ed0 FUN_1422c1ed0 body=216 status=ok
// SIG undefined FUN_1422c1ed0(void)

longlong * FUN_1422c1ed0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  uVar6 = GetTransientPackage();
  FUN_1417846f0(uVar6,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar7 = UAsyncActionLoadPrimaryAsset::GetPrivateStaticClass();
  plVar8 = (longlong *)FUN_1417985e0(uVar7,uVar6,0,0,0,0,0,0,0);
  iVar2 = (int)plVar8[7];
  *(int *)(plVar8 + 7) = iVar2 + 1;
  if (*(int *)((longlong)plVar8 + 0x3c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8 + 6,iVar2);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  puVar1 = (undefined4 *)(plVar8[6] + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  TArray<FName,FDefaultAllocator>::operator=(plVar8 + 8,param_3);
  *(undefined1 *)(plVar8 + 0xe) = 0;
  (**(code **)(*plVar8 + 0x288))(plVar8,param_1);
  return plVar8;
}



// FUNCTION 1422c1fb0 FUN_1422c1fb0 body=216 status=ok
// SIG undefined FUN_1422c1fb0(void)

longlong * FUN_1422c1fb0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  uVar6 = GetTransientPackage();
  FUN_1417846f0(uVar6,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar7 = UAsyncActionLoadPrimaryAssetClass::GetPrivateStaticClass();
  plVar8 = (longlong *)FUN_1417985e0(uVar7,uVar6,0,0,0,0,0,0,0);
  iVar2 = (int)plVar8[7];
  *(int *)(plVar8 + 7) = iVar2 + 1;
  if (*(int *)((longlong)plVar8 + 0x3c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8 + 6,iVar2);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  puVar1 = (undefined4 *)(plVar8[6] + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  TArray<FName,FDefaultAllocator>::operator=(plVar8 + 8,param_3);
  *(undefined1 *)(plVar8 + 0xe) = 0;
  (**(code **)(*plVar8 + 0x288))(plVar8,param_1);
  return plVar8;
}



// FUNCTION 1422c2090 FUN_1422c2090 body=177 status=ok
// SIG undefined FUN_1422c2090(void)

longlong * FUN_1422c2090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar1 = GetTransientPackage();
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = UAsyncActionLoadPrimaryAssetClassList::GetPrivateStaticClass();
  plVar3 = (longlong *)FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  FUN_1408e22e0(plVar3 + 6,param_2);
  TArray<FName,FDefaultAllocator>::operator=(plVar3 + 8,param_3);
  *(undefined1 *)(plVar3 + 0xe) = 0;
  (**(code **)(*plVar3 + 0x288))(plVar3,param_1);
  return plVar3;
}



// FUNCTION 1422c2150 FUN_1422c2150 body=177 status=ok
// SIG undefined FUN_1422c2150(void)

longlong * FUN_1422c2150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar1 = GetTransientPackage();
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = UAsyncActionLoadPrimaryAssetList::GetPrivateStaticClass();
  plVar3 = (longlong *)FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  FUN_1408e22e0(plVar3 + 6,param_2);
  TArray<FName,FDefaultAllocator>::operator=(plVar3 + 8,param_3);
  *(undefined1 *)(plVar3 + 0xe) = 0;
  (**(code **)(*plVar3 + 0x288))(plVar3,param_1);
  return plVar3;
}



// FUNCTION 1422c2210 AtmosphereRenderSinkFunction body=288 status=ok
// SIG undefined AtmosphereRenderSinkFunction(void)

void AtmosphereRenderSinkFunction(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  iVar1 = *DAT_146aef420;
  if ((bool)DAT_146531aa8 == (iVar1 != 0)) {
    return;
  }
  local_28 = 0;
  local_20 = 0;
  local_18 = -1;
  DAT_146531aa8 = iVar1 != 0;
  uVar3 = APlayerStateRemnant::GetPrivateStaticClass();
  FUN_1417a5560(uVar3,&local_28,1,0x10,0);
  uVar4 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    lVar5 = local_28;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    if ((local_18 < 0) || ((int)uVar4 <= local_18)) {
      if (lVar5 == 0) {
        return;
      }
      FMemory::Free(lVar5);
      return;
    }
    lVar2 = *(longlong *)(lVar5 + (longlong)local_18 * 8);
    if ((*(uint *)(*(longlong *)(lVar2 + 0x20) + 8) >> 4 & 1) == 0) {
      if ((iVar1 == 0) || ((*(byte *)(lVar2 + 0xb8) & 1) == 0)) {
        FUN_1422d54f0(lVar2);
      }
      else {
        FUN_1422d0ca0(lVar2);
      }
      uVar4 = local_20 & 0xffffffff;
      lVar5 = local_28;
    }
    do {
      local_18 = local_18 + 1;
      if ((int)uVar4 <= local_18) break;
    } while (*(longlong *)(lVar5 + (longlong)local_18 * 8) == 0);
  } while( true );
}



// FUNCTION 1422c2330 FUN_1422c2330 body=318 status=ok
// SIG undefined FUN_1422c2330(void)

float FUN_1422c2330(longlong param_1,float param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = 0.0;
  param_2 = param_2 * param_4;
  if (param_3 <= 1.0) {
    param_3 = 1.0;
  }
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    fVar2 = 1.0 - param_2 / param_3;
    break;
  case 1:
    if (param_2 < 0.0001) {
      param_2 = 0.0001;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(param_2 / param_3);
    fVar2 = fVar2 * -0.5;
    break;
  case 2:
    if (param_2 < 0.0001) {
      param_2 = 0.0001;
    }
    fVar2 = 0.02 / (param_2 / param_3);
    break;
  case 3:
    if (param_2 <= param_3) {
      fVar2 = 1.0 - param_2 / param_3;
      if (fVar2 <= 0.0001) {
        fVar2 = 0.0001;
      }
      fVar2 = _guard_xfg_dispatch_icall_nop(fVar2);
      fVar2 = fVar2 * 0.5 + 1.0;
      break;
    }
    goto switchD_1422c2381_default;
  case 4:
    fVar2 = _guard_xfg_dispatch_icall_nop
                      (10.0,(param_2 / param_3) * *(float *)(param_1 + 0xc) * 0.05);
    break;
  case 5:
    uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x28);
    fVar2 = (float)FRichCurve::Eval(uVar1,param_2 / param_3,0);
    break;
  default:
    goto switchD_1422c2381_default;
  }
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else {
switchD_1422c2381_default:
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
  }
  return fVar2;
}



// FUNCTION 1422c2490 AttenuationEvalBox body=358 status=ok
// SIG undefined AttenuationEvalBox(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FBaseAttenuationSettings::AttenuationEvalBox
          (longlong param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  undefined8 uVar2;
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
  
  fVar9 = *param_2 * _DAT_146aef440;
  fVar10 = param_2[1] * fRam0000000146aef444;
  fVar11 = param_2[2] * fRam0000000146aef448;
  fVar12 = param_2[3] * fRam0000000146aef44c;
  fVar13 = (float)((uint)(*param_3 - param_2[4]) & _DAT_146aef400);
  fVar14 = (float)((uint)(param_3[1] - param_2[5]) & uRam0000000146aef404);
  fVar15 = (float)((uint)(param_3[2] - param_2[6]) & uRam0000000146aef408);
  fVar4 = fVar15 * fVar10 - fVar14 * fVar11;
  fVar6 = fVar13 * fVar11 - fVar15 * fVar9;
  fVar7 = fVar14 * fVar9 - fVar13 * fVar10;
  fVar4 = fVar4 + fVar4;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar1 = *(float *)(param_1 + 0x14);
  fVar3 = 0.0;
  fVar5 = -fVar1;
  fVar8 = -*(float *)(param_1 + 0x18);
  fVar13 = (fVar7 * fVar10 - fVar6 * fVar11) + fVar12 * fVar4 + fVar13;
  fVar11 = (fVar4 * fVar11 - fVar7 * fVar9) + fVar12 * fVar6 + fVar14;
  fVar7 = (fVar6 * fVar9 - fVar4 * fVar10) + fVar12 * fVar7 + fVar15;
  fVar4 = *(float *)(param_1 + 0x10);
  fVar6 = -fVar4;
  if ((fVar13 < fVar6) || (fVar6 = fVar4, fVar4 < fVar13)) {
    fVar3 = (fVar13 - fVar6) * (fVar13 - fVar6);
  }
  if ((fVar11 < fVar5) || (fVar5 = fVar1, fVar1 < fVar11)) {
    fVar3 = fVar3 + (fVar11 - fVar5) * (fVar11 - fVar5);
  }
  if (fVar8 <= fVar7) {
    if (fVar7 < *(float *)(param_1 + 0x18) || fVar7 == *(float *)(param_1 + 0x18))
    goto LAB_1422c25bd;
    fVar8 = *(float *)(param_1 + 0x18);
  }
  fVar3 = fVar3 + (fVar7 - fVar8) * (fVar7 - fVar8);
LAB_1422c25bd:
  fVar1 = *(float *)(param_1 + 0x20);
  if (fVar1 * fVar1 <= fVar3) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1422c2330(fVar1 * fVar1,SQRT(fVar3),fVar1,param_4,fVar13);
  }
  return uVar2;
}



// FUNCTION 1422c2600 AttenuationEvalCapsule body=433 status=ok
// SIG undefined AttenuationEvalCapsule(void)

void FBaseAttenuationSettings::AttenuationEvalCapsule
               (longlong param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  
  fVar5 = *(float *)(param_1 + 0x14);
  if (fVar5 < *(float *)(param_1 + 0x10)) {
    local_60 = *(float *)(param_1 + 0x10) - fVar5;
    fVar4 = *param_2;
    fVar1 = param_2[1];
    fVar2 = param_2[2];
    fVar3 = param_2[3];
    fVar6 = fVar1 * 1.0 - fVar2 * 0.0;
    fVar7 = fVar2 * 0.0 - fVar4 * 1.0;
    fVar8 = fVar4 * 0.0 - fVar1 * 0.0;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    fVar8 = fVar8 + fVar8;
    local_68 = ((fVar8 * fVar1 - fVar7 * fVar2) + fVar3 * fVar6 + 0.0) * local_60;
    local_64 = ((fVar6 * fVar2 - fVar8 * fVar4) + fVar3 * fVar7 + 0.0) * local_60;
    local_58 = param_2[4] + local_68;
    local_60 = ((fVar7 * fVar4 - fVar6 * fVar1) + fVar3 * fVar8 + 1.0) * local_60;
    local_54 = param_2[5] + local_64;
    local_50 = param_2[6] + local_60;
    local_64 = param_2[5] - local_64;
    local_68 = param_2[4] - local_68;
    local_60 = param_2[6] - local_60;
    fVar4 = (float)FMath::PointDistToSegment(param_3,&local_58,&local_68);
    fVar5 = fVar4 - fVar5;
  }
  else {
    fVar5 = SQRT((param_3[1] - param_2[5]) * (param_3[1] - param_2[5]) +
                 (*param_3 - param_2[4]) * (*param_3 - param_2[4]) +
                 (param_3[2] - param_2[6]) * (param_3[2] - param_2[6])) - fVar5;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
  }
  FUN_1422c2330(param_1,fVar5,*(undefined4 *)(param_1 + 0x20),param_4);
  return;
}



// FUNCTION 1422c27c0 AttenuationEvalCone body=668 status=ok
// SIG undefined AttenuationEvalCone(void)

float FBaseAttenuationSettings::AttenuationEvalCone
                (longlong param_1,float *param_2,float *param_3,undefined4 param_4)

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
  float fVar11;
  float fVar12;
  
  fVar7 = *param_2;
  fVar8 = param_2[1];
  fVar9 = param_2[2];
  fVar12 = param_2[3];
  fVar2 = fVar8 * 0.0 - fVar9 * 0.0;
  fVar3 = fVar9 * 1.0 - fVar7 * 0.0;
  fVar4 = fVar7 * 0.0 - fVar8 * 1.0;
  fVar2 = fVar2 + fVar2;
  fVar3 = fVar3 + fVar3;
  fVar4 = fVar4 + fVar4;
  fVar1 = *(float *)(param_1 + 0x1c);
  fVar10 = (fVar4 * fVar8 - fVar3 * fVar9) + fVar12 * fVar2 + 1.0;
  fVar11 = (fVar2 * fVar9 - fVar4 * fVar7) + fVar12 * fVar3 + 0.0;
  fVar12 = (fVar3 * fVar7 - fVar2 * fVar8) + fVar12 * fVar4 + 0.0;
  fVar9 = *param_3 - (param_2[4] - fVar10 * fVar1);
  fVar7 = param_3[1] - (param_2[5] - fVar11 * fVar1);
  fVar8 = param_3[2] - (param_2[6] - fVar12 * fVar1);
  fVar2 = fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8;
  fVar1 = SQRT(fVar2) - *(float *)(param_1 + 0x10);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = (float)FUN_1422c2330(fVar9 * fVar9,fVar1,*(undefined4 *)(param_1 + 0x20),param_4);
  if (0.0 < fVar1) {
    fVar3 = fVar7;
    fVar4 = fVar8;
    fVar5 = fVar9;
    if ((fVar2 != 1.0) &&
       (fVar3 = DAT_1468b5d94, fVar4 = DAT_1468b5d98, fVar5 = DAT_1468b5d90, 1e-08 <= fVar2)) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar2 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar2 * 0.5 * fVar5 * fVar5);
      fVar3 = fVar7 * fVar5;
      fVar4 = fVar8 * fVar5;
      fVar5 = fVar5 * fVar9;
    }
    fVar8 = fVar11 * fVar3 + fVar10 * fVar5 + fVar12 * fVar4;
    fVar7 = -1.0;
    if ((-1.0 <= fVar8) && (fVar7 = fVar8, 1.0 <= fVar8)) {
      fVar7 = 1.0;
    }
    fVar7 = ::_guard_xfg_dispatch_icall_nop(fVar7);
    fVar7 = (float)FUN_1422c2330(param_1,ABS(fVar7) * 57.295776 - *(float *)(param_1 + 0x14),
                                 *(undefined4 *)(param_1 + 0x18),0x3f800000);
    fVar1 = fVar1 * fVar7;
  }
  return fVar1;
}



// FUNCTION 1422c2a60 FUN_1422c2a60 body=27 status=ok
// SIG undefined FUN_1422c2a60(void)

void FUN_1422c2a60(undefined8 param_1)

{
  FUN_1422d54f0();
  FUN_1423850d0(param_1);
  return;
}



// FUNCTION 1422c2a80 Broadcast body=196 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void,UAudioComponent_const_*,USoundWave_const_*,float_const_>::Broadcast
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1422c2af6:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
        if (cVar3 == '\0') goto LAB_1422c2af6;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1422c2bd0 Call body=63 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_4e84b627b36beea749ba7086a6493f9c>,void___cdecl(void)>::Call
               (undefined4 *param_1)

{
  longlong lVar1;
  
  if (DAT_146b17150 != 0) {
    lVar1 = FUN_1428742d0();
    if (lVar1 != 0) {
      lVar1 = FAudioDeviceManager::GetAudioDevice(lVar1,*param_1);
      if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 0x2d0) = *(undefined8 *)(param_1 + 2);
      }
    }
  }
  return;
}



// FUNCTION 1422c2cc0 Call body=44 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_0c4d56017f412b8eed52d047551087b8>,void___cdecl(void)>::Call
               (undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x30))
            ((longlong *)*param_1,param_1[1],*(undefined1 *)(param_1 + 2),
             *(undefined1 *)((longlong)param_1 + 0x11),*(undefined1 *)((longlong)param_1 + 0x12));
  return;
}



// FUNCTION 1422c2e50 CanUseVRAudioDevice body=100 status=ok
// SIG undefined CanUseVRAudioDevice(void)

undefined8 FAudioDevice::CanUseVRAudioDevice(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar2 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar2,&DAT_145028274);
  if (cVar1 == '\0') {
    plVar3 = (longlong *)UGeneralProjectSettings::GetPrivateStaticClass();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    if (*(char *)(lVar4 + 0x10a) == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1422c2ec0 FUN_1422c2ec0 body=323 status=ok
// SIG undefined FUN_1422c2ec0(void)

undefined8 *
FUN_1422c2ec0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5,undefined4 param_6)

{
  char cVar1;
  longlong *plVar2;
  longlong local_48 [6];
  
  plVar2 = (longlong *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  cVar1 = FUN_1422ce540(param_1,local_48,local_48 + 4,param_4,local_48 + 2,0);
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  if (cVar1 == '\0') {
    if ((((int)param_5[1] != 0) && ((longlong *)*param_5 != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*(longlong *)*param_5 + 0x18))(), cVar1 != '\0')) {
      if ((int)param_5[1] != 0) {
        plVar2 = (longlong *)*param_5;
      }
      (**(code **)(*plVar2 + 0x40))();
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_48[2] = 0;
    local_48[3] = local_48[3] & 0xffffffff00000000;
    if (((param_5 != local_48 + 2) && ((int)param_5[1] != 0)) &&
       (plVar2 = (longlong *)*param_5, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,local_48 + 2);
    }
    (**(code **)(*param_1 + 0x348))(param_1,param_2,local_48,param_3,param_4,0,local_48 + 2,param_6)
    ;
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  return param_2;
}



// FUNCTION 1422c3010 FUN_1422c3010 body=5469 status=ok
// SIG undefined FUN_1422c3010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1422c3010(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
             longlong *param_5,char param_6,longlong *param_7,undefined4 param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Dst;
  undefined8 *puVar3;
  void *pvVar4;
  undefined1 auVar5 [12];
  ulonglong uVar6;
  longlong **pplVar7;
  longlong **pplVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong *plVar17;
  int iVar18;
  longlong *plVar19;
  uint uVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined2 *puVar23;
  undefined1 uVar24;
  longlong *plVar25;
  undefined2 *puVar26;
  uint *puVar27;
  int iVar28;
  uint uVar29;
  bool bVar30;
  undefined1 auVar31 [16];
  longlong lVar32;
  undefined1 auStack_4d8 [32];
  longlong *local_4b8;
  longlong *local_4b0;
  undefined1 local_4a8;
  uint local_4a4;
  longlong *local_4a0;
  undefined8 local_498;
  longlong local_488;
  longlong *plStack_480;
  longlong local_478;
  undefined8 local_470;
  longlong *local_468;
  longlong *local_460;
  undefined8 local_458;
  undefined1 local_450 [8];
  longlong local_448;
  longlong *plStack_440;
  longlong *local_438;
  undefined8 local_430;
  longlong *local_428;
  longlong *local_420;
  longlong local_418;
  undefined8 local_410;
  longlong *local_408;
  longlong *local_400;
  void *local_3f8;
  uint local_3f0;
  undefined4 local_3ec;
  undefined8 *local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  int local_3d0;
  uint uStack_3cc;
  uint *puStack_3c8;
  undefined4 local_3c0;
  undefined8 uStack_3bc;
  undefined4 uStack_3b4;
  longlong local_3a8;
  longlong *plStack_3a0;
  longlong local_398;
  longlong *plStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  longlong local_368;
  longlong *local_360;
  longlong local_358;
  longlong *plStack_350;
  undefined8 local_348;
  longlong *plStack_340;
  longlong *local_338;
  int local_330;
  longlong local_328;
  undefined4 local_320;
  longlong local_318;
  undefined4 local_310;
  longlong *local_308;
  undefined8 uStack_300;
  uint *local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0 [4];
  int local_2dc;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined8 *local_2c8;
  longlong **local_2c0;
  longlong **local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  longlong local_2a0;
  undefined2 *local_298;
  int local_290;
  longlong local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined2 *local_268;
  int local_260;
  longlong local_258 [2];
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined1 local_228 [16];
  longlong local_218;
  longlong local_210;
  int local_208;
  undefined1 local_200 [8];
  longlong *local_1f8;
  longlong local_1e8;
  longlong *plStack_1e0;
  longlong local_1d8;
  longlong lStack_1d0;
  longlong local_1c8;
  longlong *plStack_1c0;
  longlong local_1b8;
  longlong *plStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  longlong *plStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148 [2];
  longlong local_138 [2];
  longlong *local_128;
  undefined8 uStack_120;
  uint *puStack_118;
  undefined4 uStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 local_100 [24];
  longlong local_e8;
  undefined8 local_e0;
  uint local_d8 [4];
  uint *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *plStack_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  local_3d8 = param_8;
  local_408 = (longlong *)*param_3;
  local_2a8 = local_408 + (longlong)(int)param_3[1] * 2;
  local_420 = param_7;
  local_460 = (longlong *)0x0;
  local_458 = 0;
  local_438 = (longlong *)0x0;
  local_430 = 0;
  local_3e8 = (undefined8 *)0x0;
  local_3e0 = 0;
  local_448 = 0;
  plStack_440 = (longlong *)0x0;
  local_468 = param_1;
  local_360 = param_2;
  local_2c8 = param_4;
  uVar24 = local_4a8;
  if (local_408 != local_2a8) {
    do {
      lVar12 = FUN_1422cbd90(param_1,local_408,1);
      local_368 = lVar12;
      if (lVar12 != 0) {
        local_2b0 = (longlong *)(lVar12 + 0x50);
        lVar13 = *local_2b0;
        if (((lVar13 == 0) || (*(char *)(lVar13 + 0x12) != '\0')) ||
           (*(char *)(lVar13 + 0x11) != '\0')) {
          bVar9 = 0;
        }
        else {
          bVar9 = 1;
        }
        local_2c0 = (longlong **)(lVar12 + 0x40);
        lVar13 = ((ulonglong)bVar9 + 2) * 0x20;
        local_2b8 = (longlong **)(lVar12 + 0x60);
        local_3f8 = (void *)0x0;
        local_3f0 = *(uint *)(lVar13 + 8 + lVar12);
        lVar21 = (longlong)(int)local_3f0;
        pvVar4 = *(void **)(lVar13 + lVar12);
        if (local_3f0 == 0) {
          local_3ec = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_3f8,local_3f0,0);
          _guard_xfg_dispatch_icall_nop(local_3f8,pvVar4,lVar21 << 3);
        }
        uVar29 = local_3f0;
        plVar17 = (longlong *)0x0;
        local_428 = (longlong *)0x0;
        local_4a0 = (longlong *)0x0;
        local_4a4 = 0;
        local_498 = 0;
        plVar19 = plVar17;
        if (param_6 == '\0') {
          local_498 = (ulonglong)local_3f0;
          local_4a4 = 0;
          if (local_3f0 != 0) {
            local_4a4 = local_3f0;
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (&local_4a0,local_3f0,0);
            plVar17 = local_4a0;
            local_428 = local_4a0;
            _guard_xfg_dispatch_icall_nop(local_4a0,local_3f8,(longlong)(int)uVar29 << 3);
            local_4a4 = (uint)local_498;
          }
          plVar19 = (longlong *)(ulonglong)local_4a4;
          plVar25 = (longlong *)*param_5;
          plVar15 = plVar25 + (int)param_5[1];
          local_400 = plVar25;
          local_2d0 = plVar15;
          if (plVar25 != plVar15) {
            do {
              plVar22 = (longlong *)0x0;
              if ((int)plVar19 != 0) {
                bVar30 = *plVar17 != *plVar25;
                lVar12 = (longlong)(int)plVar19;
                plVar15 = plVar22;
                plVar19 = plVar22;
                local_400 = plVar25;
                do {
                  iVar10 = (int)plVar15;
                  plVar22 = (longlong *)((longlong)plVar22 + 1);
                  plVar15 = (longlong *)(ulonglong)(iVar10 + 1);
                  if ((longlong)plVar22 < lVar12) {
                    do {
                      if (bVar30 != (plVar17[(longlong)plVar22] != *plVar25)) break;
                      plVar15 = (longlong *)(ulonglong)((int)plVar15 + 1);
                      plVar22 = (longlong *)((longlong)plVar22 + 1);
                    } while ((longlong)plVar22 < lVar12);
                  }
                  iVar28 = (int)plVar15 - iVar10;
                  if (bVar30 != false) {
                    iVar18 = (int)plVar19;
                    if (iVar18 != iVar10) {
                      _guard_xfg_dispatch_icall_nop
                                (plVar17 + iVar18,plVar17 + iVar10,(longlong)iVar28 << 3);
                      plVar25 = local_400;
                    }
                    plVar19 = (longlong *)(ulonglong)(uint)(iVar18 + iVar28);
                  }
                  bVar30 = (bool)(bVar30 ^ 1);
                } while ((longlong)plVar22 < lVar12);
                local_498 = CONCAT44(local_498._4_4_,(int)plVar19);
                plVar15 = local_2d0;
              }
              plVar25 = plVar25 + 1;
            } while (plVar25 != plVar15);
            local_4a4 = (uint)plVar19;
            lVar12 = local_368;
            local_400 = plVar25;
            uVar24 = local_4a8;
          }
        }
        uVar29 = (uint)plVar19;
        plVar25 = (longlong *)*local_2c8;
        plVar15 = plVar25 + *(int *)(local_2c8 + 1);
        uVar20 = local_4a4;
        plVar22 = local_428;
        for (; plVar25 != plVar15; plVar25 = plVar25 + 1) {
          iVar10 = (int)plVar19;
          if (plVar17 != plVar17 + iVar10) {
            plVar22 = plVar17;
            do {
              if (*plVar22 == *plVar25) {
                if ((int)((longlong)plVar22 - (longlong)plVar17 >> 3) != -1) goto LAB_1422c336d;
                break;
              }
              plVar22 = plVar22 + 1;
            } while (plVar22 != plVar17 + iVar10);
          }
          uVar29 = iVar10 + 1;
          local_498._4_4_ = (int)(local_498 >> 0x20);
          local_498 = CONCAT44(local_498._4_4_,uVar29);
          if (local_498._4_4_ < (int)uVar29) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_4a0,plVar19);
            plVar17 = local_4a0;
            uVar29 = (uint)local_498;
          }
          plVar19 = (longlong *)(ulonglong)uVar29;
          plVar17[iVar10] = *plVar25;
LAB_1422c336d:
          uVar29 = (uint)plVar19;
          uVar20 = uVar29;
          plVar22 = plVar17;
        }
        local_4a4 = uVar20;
        local_428 = plVar22;
        AlgoImpl::
        IntroSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,TLess<FName>_>_>
                  (plVar17,(longlong)(int)uVar29,uVar24,local_450);
        uVar6 = local_430;
        lVar13 = *(longlong *)(lVar12 + 0x50);
        if (((lVar13 == 0) || (*(char *)(lVar13 + 0x12) != '\0')) ||
           (*(char *)(lVar13 + 0x11) != '\0')) {
          lVar13 = *(longlong *)(lVar12 + 0x30);
          if (((lVar13 != 0) && (*(char *)(lVar13 + 0x12) == '\0')) &&
             ((*(char *)(lVar13 + 0x11) == '\0' &&
              (uVar20 = *(uint *)(lVar12 + 0x48), uVar20 == uVar29)))) {
            if (uVar20 != 0) {
              plVar19 = plVar17;
              do {
                if (*(longlong *)
                     ((*(longlong *)(lVar12 + 0x40) - (longlong)plVar17) + (longlong)plVar19) !=
                    *plVar19) goto LAB_1422c3669;
                plVar19 = plVar19 + 1;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            goto LAB_1422c343a;
          }
        }
        else {
          uVar20 = *(uint *)(lVar12 + 0x68);
          if (uVar20 == uVar29) {
            if (uVar20 != 0) {
              plVar19 = plVar17;
              do {
                if (*(longlong *)
                     ((*(longlong *)(lVar12 + 0x60) - (longlong)plVar17) + (longlong)plVar19) !=
                    *plVar19) goto code_r0x0001422c356b;
                plVar19 = plVar19 + 1;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            lVar13 = (longlong)(int)local_430;
            iVar10 = (int)local_430 + 1;
            local_430 = CONCAT44(local_430._4_4_,iVar10);
            if (local_430._4_4_ < iVar10) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_438,uVar6 & 0xffffffff);
            }
            local_438[lVar13 * 2] = *(longlong *)(lVar12 + 0x50);
            lVar12 = *(longlong *)(lVar12 + 0x58);
            (local_438 + lVar13 * 2)[1] = lVar12;
            if (lVar12 != 0) {
              LOCK();
              *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
              UNLOCK();
              plVar17 = local_4a0;
            }
LAB_1422c343a:
            if (plVar17 != (longlong *)0x0) {
              FMemory::Free(plVar17);
            }
            param_1 = local_468;
            if (local_3f8 != (void *)0x0) {
              FMemory::Free();
              param_1 = local_468;
            }
            goto LAB_1422c346a;
          }
code_r0x0001422c356b:
          FUN_142833de0(lVar13);
          local_348 = 0;
          plStack_340 = (longlong *)0x0;
          if ((undefined8 *)(lVar12 + 0x50) != &local_348) {
            *(undefined8 *)(lVar12 + 0x50) = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(lVar12 + 0x58,&plStack_340);
            plVar19 = plStack_340;
            if (plStack_340 != (longlong *)0x0) {
              LOCK();
              plVar17 = plStack_340 + 1;
              lVar13 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar13 == 1) {
                (**(code **)*plStack_340)(plStack_340);
                LOCK();
                piVar1 = (int *)((longlong)plVar19 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plStack_340 + 8))(plStack_340,1);
                }
              }
              local_428 = local_4a0;
              local_4a4 = (uint)local_498;
              plVar17 = local_4a0;
              uVar29 = (uint)local_498;
            }
          }
          *(undefined4 *)(lVar12 + 0x68) = 0;
          if ((*(int *)(lVar12 + 0x6c) < 0) && (*(int *)(lVar12 + 0x6c) != 0)) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(lVar12 + 0x60,0);
          }
        }
LAB_1422c3669:
        iVar10 = 0;
        local_380 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_c8 = (uint *)0x0;
        local_c0 = 0;
        local_b8 = 0xffffffff;
        local_b4 = 0;
        local_a8 = 0;
        local_a0 = 0;
        if (*(longlong *)(lVar12 + 0x18) != 0) {
          FUN_1422b78e0(&local_e8,local_2d8,(longlong *)(lVar12 + 0x18),0);
          iVar10 = (int)local_c0;
        }
        plVar25 = local_408;
        plVar15 = local_468;
        local_400 = (longlong *)((longlong)(int)uVar29 * 8);
        plVar19 = (longlong *)((longlong)local_400 + (longlong)plVar17);
        if (plVar17 != plVar19) {
          local_378 = 0;
          do {
            (**(code **)(*plVar15 + 0x368))(plVar15,local_228,plVar25,*plVar17);
            if (local_218 != 0) {
              if ((int)local_e0 - local_b4 < ((int)local_e0 - local_b4) + local_208) {
                FUN_14089d3b0(&local_e8);
              }
              lVar12 = local_210 + (longlong)local_208 * 0x18;
              for (lVar13 = local_210; lVar13 != lVar12; lVar13 = lVar13 + 0x18) {
                FUN_1422b78e0(&local_e8,local_2e0,lVar13,0);
              }
            }
            TArray<FNamedInterfaceDef,FDefaultAllocator>::
            ~TArray<FNamedInterfaceDef,FDefaultAllocator>();
            plVar17 = plVar17 + 1;
          } while (plVar17 != plVar19);
          iVar10 = (int)local_c0;
          plVar17 = local_428;
          uVar29 = local_4a4;
          uVar24 = local_4a8;
        }
        plVar19 = local_408;
        iVar28 = 0;
        local_370 = 0;
        local_488 = 0;
        plStack_480 = (longlong *)0x0;
        if (*local_408 == 0) {
LAB_1422c38a1:
          local_478 = 0;
          local_470 = 0;
        }
        else {
          local_388 = 0;
          if (local_408[1] == 0) goto LAB_1422c38a1;
          puVar14 = (undefined8 *)FName::ToString(local_408 + 1,local_148);
          if (*(int *)(puVar14 + 1) == 0) {
            puVar23 = &DAT_143f3eda8;
          }
          else {
            puVar23 = (undefined2 *)*puVar14;
          }
          FName::ToString(plVar19,&local_298);
          puVar26 = &DAT_143f3eda8;
          if (local_290 != 0) {
            puVar26 = local_298;
          }
          FString::PrintfImpl(&local_478,L"%s:%s",puVar26,puVar23);
          if (local_298 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_148[0] != 0) {
            FMemory::Free();
          }
          iVar10 = (int)local_c0;
        }
        uVar6 = local_470;
        if (0 < (int)uVar29) {
          iVar10 = (int)local_470;
          lVar12 = (longlong)(int)local_470;
          iVar18 = (3 - (uint)((int)local_470 != 0)) + (int)local_470;
          local_470 = CONCAT44(local_470._4_4_,iVar18);
          if (local_470._4_4_ < iVar18) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_478,uVar6 & 0xffffffff);
          }
          puVar2 = (undefined4 *)(local_478 + (lVar12 - (ulonglong)(iVar10 != 0)) * 2);
          *puVar2 = 0x280020;
          *(undefined2 *)(puVar2 + 1) = 0;
          if (0 < (int)uVar29) {
            do {
              uVar6 = local_470;
              if (iVar28 != 0) {
                iVar10 = (int)local_470;
                lVar12 = (longlong)(int)local_470;
                iVar18 = (3 - (uint)((int)local_470 != 0)) + (int)local_470;
                local_470 = CONCAT44(local_470._4_4_,iVar18);
                if (local_470._4_4_ < iVar18) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_478,uVar6 & 0xffffffff);
                }
                puVar2 = (undefined4 *)(local_478 + (lVar12 - (ulonglong)(iVar10 != 0)) * 2);
                *puVar2 = 0x20002c;
                *(undefined2 *)(puVar2 + 1) = 0;
              }
              puVar14 = (undefined8 *)FName::ToString(plVar17,local_138);
              uVar6 = local_470;
              pvVar4 = (void *)*puVar14;
              iVar10 = *(int *)(puVar14 + 1) + -1;
              if (*(int *)(puVar14 + 1) == 0) {
                iVar10 = 0;
              }
              if (iVar10 != 0) {
                iVar18 = (int)local_470;
                lVar12 = (longlong)(int)local_470;
                iVar11 = (uint)((int)local_470 == 0) + iVar10 + (int)local_470;
                local_470 = CONCAT44(local_470._4_4_,iVar11);
                if (local_470._4_4_ < iVar11) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_478,uVar6 & 0xffffffff);
                }
                _Dst = (void *)(local_478 + (lVar12 - (ulonglong)(iVar18 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(_Dst,pvVar4,(longlong)iVar10 * 2);
                *(undefined2 *)((longlong)_Dst + (longlong)iVar10 * 2) = 0;
              }
              if (local_138[0] != 0) {
                FMemory::Free();
              }
              iVar28 = iVar28 + 1;
              plVar17 = plVar17 + 1;
              plVar19 = local_408;
              uVar24 = local_4a8;
            } while (iVar28 < (int)local_4a4);
          }
          uVar6 = local_470;
          iVar10 = (int)local_470;
          lVar12 = (longlong)(int)local_470;
          iVar28 = (2 - (uint)((int)local_470 != 0)) + (int)local_470;
          local_470 = CONCAT44(local_470._4_4_,iVar28);
          if (local_470._4_4_ < iVar28) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_478,uVar6 & 0xffffffff);
          }
          puVar23 = (undefined2 *)(local_478 + (lVar12 - (ulonglong)(iVar10 != 0)) * 2);
          *puVar23 = 0x29;
          puVar23[1] = 0;
          iVar10 = (int)local_c0;
        }
        local_248 = 0;
        uVar29 = 0;
        local_240 = 0;
        local_418 = 0;
        local_410 = 0;
        if (0 < (int)local_e0 - local_b4) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo(&local_418);
          iVar10 = (int)local_c0;
        }
        uStack_3cc = 1;
        local_3d0 = 0;
        puStack_3c8 = local_d8;
        uStack_3bc = 0;
        if (iVar10 != 0) {
          puVar27 = local_d8;
          if (local_c8 != (uint *)0x0) {
            puVar27 = local_c8;
          }
          uVar20 = *puVar27;
          iVar28 = local_3d0;
          while (uVar20 == 0) {
            uVar29 = uVar29 + 0x20;
            local_3d0 = iVar28 + 1;
            uStack_3bc = (ulonglong)uVar29 << 0x20;
            if ((int)((iVar10 + -1 >> 0x1f & 0x1fU) + iVar10 + -1) >> 5 <= iVar28) {
              uStack_3bc = CONCAT44(uVar29,iVar10);
              goto LAB_1422c3b5e;
            }
            uVar20 = puVar27[(longlong)iVar28 + 1];
            iVar28 = local_3d0;
          }
          uStack_3cc = -uVar20 & uVar20;
          local_2dc = 0x1f;
          if (uStack_3cc != 0) {
            for (; uStack_3cc >> local_2dc == 0; local_2dc = local_2dc + -1) {
            }
          }
          if (uStack_3cc == 0) {
            iVar18 = 0x20;
          }
          else {
            iVar18 = 0x1f - local_2dc;
          }
          iVar18 = (uVar29 - iVar18) + 0x1f;
          if (iVar10 < iVar18) {
            iVar18 = iVar10;
          }
          uStack_3bc._4_4_ = (undefined4)((ulonglong)uStack_3bc >> 0x20);
          uStack_3bc = CONCAT44(uStack_3bc._4_4_,iVar18);
          local_3d0 = iVar28;
        }
LAB_1422c3b5e:
        local_3c0 = 0xffffffff;
        local_308 = &local_e8;
        uStack_300 = CONCAT44(uStack_3cc,local_3d0);
        uStack_110 = 0xffffffff;
        iStack_10c = (int)uStack_3bc;
        uStack_108 = uStack_3bc._4_4_;
        uStack_104 = uStack_3b4;
        uStack_2f0 = CONCAT44((int)uStack_3bc,0xffffffff);
        auVar5._4_8_ = uStack_300;
        auVar5._0_4_ = (int)uStack_3bc;
        auVar31._0_8_ = auVar5._0_8_ << 0x20;
        auVar31._8_4_ = uStack_3bc._4_4_;
        auVar31._12_4_ = uStack_3b4;
        local_2e8 = auVar31._8_8_;
        iVar28 = (int)uStack_3bc;
        local_2f8 = puStack_3c8;
        local_128 = local_308;
        uStack_120 = uStack_300;
        puStack_118 = puStack_3c8;
        if ((int)uStack_3bc < iVar10) {
          do {
            uVar6 = local_410;
            lVar12 = (longlong)(int)local_410;
            puVar14 = (undefined8 *)((longlong)iVar28 * 0x20 + *local_308);
            iVar10 = (int)local_410 + 1;
            local_410 = CONCAT44(local_410._4_4_,iVar10);
            if (local_410._4_4_ < iVar10) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_418,uVar6 & 0xffffffff);
            }
            puVar3 = (undefined8 *)(local_418 + lVar12 * 0x18);
            *puVar3 = *puVar14;
            FString::FString(puVar3 + 1,puVar14 + 1);
            uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(uint)uStack_2f0 & ~uStack_300._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_300);
            iVar28 = uStack_2f0._4_4_;
          } while (uStack_2f0._4_4_ < (int)local_2f8[6]);
        }
        local_4b0 = &local_478;
        local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,local_3d8);
        plVar15 = (longlong *)
                  (**(code **)(*local_468 + 0x360))(local_468,local_200,&local_418,&local_248);
        lVar12 = 0;
        plVar17 = (longlong *)0x0;
        if (&local_488 != plVar15) {
          local_488 = *plVar15;
          *plVar15 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_480,plVar15 + 1);
          lVar12 = local_488;
          plVar17 = plStack_480;
        }
        plVar15 = local_1f8;
        plVar25 = local_428;
        uVar29 = local_4a4;
        if (local_1f8 != (longlong *)0x0) {
          LOCK();
          plVar17 = local_1f8 + 1;
          lVar12 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_1f8)(local_1f8);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
          plVar25 = local_4a0;
          uVar29 = (uint)local_498;
          lVar12 = local_488;
          plVar17 = plStack_480;
        }
        if ((int)local_410 != 0) {
          plVar15 = (longlong *)(local_418 + 8);
          iVar10 = (int)local_410;
          do {
            if (*plVar15 != 0) {
              FMemory::Free();
            }
            plVar15 = plVar15 + 3;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        if (local_418 != 0) {
          FMemory::Free();
        }
        pplVar8 = local_2b8;
        pplVar7 = local_2c0;
        plVar15 = local_360;
        local_488 = lVar12;
        if (lVar12 == 0) {
          *local_360 = 0;
          local_360[1] = 0;
          if (local_478 != 0) {
            FMemory::Free();
          }
          plVar17 = plStack_480;
          if (plStack_480 != (longlong *)0x0) {
            LOCK();
            plVar19 = plStack_480 + 1;
            lVar12 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            plVar25 = local_4a0;
            if ((int)lVar12 == 1) {
              (**(code **)*plStack_480)(plStack_480);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar25 = local_4a0;
              if (iVar10 == 1) {
                (**(code **)(*plStack_480 + 8))(plStack_480,1);
                plVar25 = local_4a0;
              }
            }
          }
          local_a0 = 0;
          if (local_a8 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (&local_e8);
          if (plVar25 != (longlong *)0x0) {
            FMemory::Free(plVar25);
          }
          if (local_3f8 != (void *)0x0) {
            FMemory::Free();
          }
          plVar17 = plStack_440;
          if (plStack_440 != (longlong *)0x0) {
            LOCK();
            plVar19 = plStack_440 + 1;
            lVar12 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*plStack_440)(plStack_440);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plStack_440 + 8))(plStack_440,1);
              }
            }
          }
          if (local_3e8 != (undefined8 *)0x0) {
            FMemory::Free();
          }
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
          ~TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>(&local_438);
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
          ~TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>(&local_460);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(local_420);
          return plVar15;
        }
        if (*(char *)(lVar12 + 0x10) == '\0') {
          if (local_2b8 != &local_4a0) {
            *(uint *)(local_2b8 + 1) = uVar29;
            if ((uVar29 == 0) && (*(int *)((longlong)local_2b8 + 0xc) == 0)) {
              *(undefined4 *)((longlong)local_2b8 + 0xc) = 0;
            }
            else {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                        (local_2b8,uVar29);
              _guard_xfg_dispatch_icall_nop(*pplVar8,plVar25,(size_t)local_400);
            }
          }
          lVar13 = lVar12;
          plVar15 = (longlong *)0x0;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            UNLOCK();
            plVar25 = local_4a0;
            lVar13 = local_488;
            plVar15 = plStack_480;
          }
          local_398 = lVar12;
          plStack_390 = plVar17;
          if (&local_398 != local_2b0) {
            local_398 = *local_2b0;
            plStack_390 = (longlong *)local_2b0[1];
            *local_2b0 = lVar12;
            local_2b0[1] = (longlong)plVar17;
            local_98 = lVar12;
            plStack_90 = plVar17;
          }
          plVar17 = plStack_390;
          if (plStack_390 != (longlong *)0x0) {
            LOCK();
            plVar15 = plStack_390 + 1;
            lVar12 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            plVar25 = local_4a0;
            lVar13 = local_488;
            plVar15 = plStack_480;
            if ((int)lVar12 == 1) {
              (**(code **)*plStack_390)(plStack_390);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar25 = local_4a0;
              lVar13 = local_488;
              plVar15 = plStack_480;
              if (iVar10 == 1) {
                (**(code **)(*plStack_390 + 8))(plStack_390,1);
                plVar25 = local_4a0;
                lVar13 = local_488;
                plVar15 = plStack_480;
              }
            }
          }
          local_238 = 0;
          local_230 = 0;
          lVar12 = *plVar19;
          lVar21 = plVar19[1];
          local_1c8 = lVar13;
          plStack_1c0 = (longlong *)0x0;
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            plVar25 = local_4a0;
            local_1c8 = local_488;
            plStack_1c0 = plStack_480;
          }
          local_278 = 0;
          local_270 = 0;
          local_338 = (longlong *)0x0;
          local_330 = 0;
          lVar32 = local_1c8;
          plVar17 = (longlong *)0x0;
          if (plStack_1c0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_1c0 + 1) = (int)plStack_1c0[1] + 1;
            UNLOCK();
            plVar25 = local_4a0;
            lVar32 = local_488;
            plVar17 = plStack_480;
          }
          local_1b8 = lVar13;
          plStack_1b0 = plVar15;
          lVar13 = operator_new(0x50,&local_278);
          plVar15 = plVar17;
          if (lVar13 != 0) {
            local_288 = 0;
            local_280 = 0;
            local_1d8 = lVar12;
            lStack_1d0 = lVar21;
            if ((local_330 != 0) && (local_338 != (longlong *)0x0)) {
              (**(code **)(*local_338 + 0x30))(local_338,&local_288);
            }
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
              UNLOCK();
              plVar15 = plStack_480;
              plVar25 = local_4a0;
            }
            local_4b0 = &local_288;
            local_4b8 = &local_1e8;
            local_1e8 = lVar32;
            plStack_1e0 = plVar17;
            FUN_1422bba90(lVar13,local_468,&LAB_1422bf1c4,&local_1d8);
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1c8);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_338);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1b8);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_238);
          FStreamableHandle::BindCompleteDelegate(local_488,&local_278);
        }
        else {
          if (local_2c0 != &local_4a0) {
            *(uint *)(local_2c0 + 1) = uVar29;
            if ((uVar29 == 0) && (*(int *)((longlong)local_2c0 + 0xc) == 0)) {
              *(undefined4 *)((longlong)local_2c0 + 0xc) = 0;
            }
            else {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                        (local_2c0,uVar29);
              _guard_xfg_dispatch_icall_nop(*pplVar7,plVar25,(size_t)local_400);
            }
          }
          plVar22 = (longlong *)(local_368 + 0x30);
          plVar15 = (longlong *)0x0;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            UNLOCK();
            plVar15 = plStack_480;
            plVar25 = local_4a0;
          }
          local_3a8 = lVar12;
          plStack_3a0 = plVar17;
          if (&local_3a8 != plVar22) {
            local_3a8 = *plVar22;
            plStack_3a0 = *(longlong **)(local_368 + 0x38);
            *plVar22 = lVar12;
            *(longlong **)(local_368 + 0x38) = plVar17;
            local_78 = lVar12;
            plStack_70 = plVar17;
          }
          plVar17 = plStack_3a0;
          if (plStack_3a0 != (longlong *)0x0) {
            LOCK();
            plVar15 = plStack_3a0 + 1;
            lVar12 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            plVar15 = plStack_480;
            plVar25 = local_4a0;
            if ((int)lVar12 == 1) {
              (**(code **)*plStack_3a0)(plStack_3a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar15 = plStack_480;
              plVar25 = local_4a0;
              if (iVar10 == 1) {
                (**(code **)(*plStack_3a0 + 8))(plStack_3a0,1);
                plVar15 = plStack_480;
                plVar25 = local_4a0;
              }
            }
          }
        }
        uVar6 = local_458;
        lVar12 = (longlong)(int)local_458;
        iVar10 = (int)local_458 + 1;
        local_458 = CONCAT44(local_458._4_4_,iVar10);
        if (local_458._4_4_ < iVar10) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_460,uVar6 & 0xffffffff);
        }
        uVar6 = local_3e0;
        local_460[lVar12 * 2] = local_488;
        (local_460 + lVar12 * 2)[1] = (longlong)plVar15;
        plVar17 = (longlong *)0x0;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
          plVar17 = plStack_480;
          plVar25 = local_4a0;
        }
        lVar12 = (longlong)(int)local_3e0;
        iVar10 = (int)local_3e0 + 1;
        local_3e0 = CONCAT44(local_3e0._4_4_,iVar10);
        if (local_3e0._4_4_ < iVar10) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_3e8,uVar6 & 0xffffffff);
        }
        lVar13 = plVar19[1];
        local_3e8[lVar12 * 2] = *plVar19;
        (local_3e8 + lVar12 * 2)[1] = lVar13;
        if (local_478 != 0) {
          FMemory::Free();
        }
        plVar19 = plStack_480;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar17 = plVar17 + 1;
          lVar12 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          plVar25 = local_4a0;
          if ((int)lVar12 == 1) {
            (**(code **)*plStack_480)(plStack_480);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar25 = local_4a0;
            if (iVar10 == 1) {
              (**(code **)(*plStack_480 + 8))(plStack_480,1);
              plVar25 = local_4a0;
            }
          }
        }
        local_a0 = 0;
        if (local_a8 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_e8);
        if (plVar25 != (longlong *)0x0) {
          FMemory::Free(plVar25);
        }
        param_1 = local_468;
        if (local_3f8 != (void *)0x0) {
          FMemory::Free();
          param_1 = local_468;
        }
      }
LAB_1422c346a:
      plVar17 = plStack_440;
      local_408 = local_408 + 2;
    } while (local_408 != local_2a8);
    if ((1 < (int)local_458) || (0 < (int)local_430)) {
      if ((int)local_430 != 0) {
        if (local_458._4_4_ < (int)local_430 + (int)local_458) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_460);
        }
        plVar19 = local_460 + (longlong)(int)local_458 * 2;
        plVar17 = local_438;
        iVar10 = (int)local_430;
        do {
          *plVar19 = *plVar17;
          lVar12 = plVar17[1];
          plVar19[1] = lVar12;
          if (lVar12 != 0) {
            LOCK();
            *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
            UNLOCK();
          }
          plVar19 = plVar19 + 2;
          plVar17 = plVar17 + 2;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        local_458 = CONCAT44(local_458._4_4_,(int)local_458 + (int)local_430);
      }
      local_2a0 = param_1[3];
      FName::ToString(&local_2a0,&local_268);
      puVar23 = &DAT_143f3eda8;
      if (local_260 != 0) {
        puVar23 = local_268;
      }
      FString::PrintfImpl(local_258,L"%s CreateCombinedHandle",puVar23);
      plVar17 = (longlong *)FUN_1428358e0(param_1 + 0x2f,local_178,&local_460,local_258);
      if (&local_448 != plVar17) {
        local_448 = *plVar17;
        *plVar17 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_440,plVar17 + 1);
      }
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_170 + 1;
        lVar12 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar1 = (int *)((longlong)local_170 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_170 + 8))(local_170,1);
          }
        }
      }
      if (local_258[0] != 0) {
        FMemory::Free();
      }
      if (local_268 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      plVar17 = local_420;
      lVar12 = local_448;
      if (*(char *)(local_448 + 0x10) == '\0') {
        local_318 = 0;
        local_310 = 0;
        if (((local_420 != &local_318) && ((int)local_420[1] != 0)) &&
           (plVar19 = (longlong *)*local_420, plVar19 != (longlong *)0x0)) {
          (**(code **)(*plVar19 + 0x30))(plVar19,&local_318);
        }
        FStreamableHandle::BindCompleteDelegate(lVar12,&local_318);
      }
      else {
        local_168 = 0;
        uStack_160 = 0;
        FUN_142838d00(local_420,&local_168);
      }
      goto LAB_1422c44fe;
    }
    if ((int)local_458 == 1) {
      local_88 = *local_460;
      plStack_80 = (longlong *)local_460[1];
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        UNLOCK();
      }
      local_358 = local_448;
      plStack_350 = plStack_440;
      local_448 = local_88;
      plVar19 = plStack_80;
      if (plStack_440 != (longlong *)0x0) {
        LOCK();
        plVar15 = plStack_440 + 1;
        lVar12 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          puVar14 = (undefined8 *)*plStack_440;
          plStack_440 = plStack_80;
          (*(code *)*puVar14)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar19 = plStack_440;
          if (iVar10 == 1) {
            (**(code **)(*plStack_350 + 8))(plStack_350,1);
            plVar19 = plStack_440;
          }
        }
      }
      plStack_440 = plVar19;
      plVar17 = local_420;
      plVar19 = plStack_440;
      lVar13 = local_448;
      lVar12 = lVar13;
      if (*(char *)(local_448 + 0x10) == '\0') {
        local_188 = *local_3e8;
        uStack_180 = local_3e8[1];
        local_328 = 0;
        local_320 = 0;
        if (((local_420 != &local_328) && ((int)local_420[1] != 0)) &&
           (plVar15 = (longlong *)*local_420, plVar15 != (longlong *)0x0)) {
          (**(code **)(*plVar15 + 0x30))(plVar15,&local_328);
        }
        if (plVar19 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          UNLOCK();
          lVar12 = local_448;
        }
        local_4b0 = &local_328;
        local_4b8 = &local_198;
        plStack_440 = plVar19;
        local_198 = lVar13;
        plStack_190 = plVar19;
        uVar16 = FUN_1422b7190(local_100,param_1,&LAB_1422bf1c4,&local_188);
        FStreamableHandle::BindCompleteDelegate(lVar12,uVar16);
      }
      else {
        local_1a8 = 0;
        uStack_1a0 = 0;
        FUN_142838d00(local_420,&local_1a8);
      }
      goto LAB_1422c44fe;
    }
  }
  plVar17 = local_420;
  local_158 = 0;
  uStack_150 = 0;
  FUN_142838d00(local_420,&local_158);
  lVar12 = local_448;
LAB_1422c44fe:
  plVar19 = local_360;
  *local_360 = lVar12;
  local_360[1] = (longlong)plStack_440;
  if (local_3e8 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>(&local_438);
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>(&local_460);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar17);
  return plVar19;
}



// FUNCTION 1422c4570 CleanupCachedRunningPlatformData body=69 status=ok
// SIG undefined CleanupCachedRunningPlatformData(void)

void USoundWave::CleanupCachedRunningPlatformData(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1e8);
  if (lVar1 != 0) {
    TIndirectArray<FStreamedAudioChunk,FDefaultAllocator>::
    ~TIndirectArray<FStreamedAudioChunk,FDefaultAllocator>(lVar1 + 0x10);
    FMemory::operator_delete(lVar1,0x20);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  return;
}



// FUNCTION 1422c45c0 FUN_1422c45c0 body=97 status=ok
// SIG undefined FUN_1422c45c0(void)

void FUN_1422c45c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0x144) != '\0') {
    local_28 = 0;
    local_18 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_58[0] = &LAB_1422c2db0;
    FUN_1422f8a30(local_58,local_res8);
  }
  return;
}



// FUNCTION 1422c4630 FUN_1422c4630 body=917 status=ok
// SIG undefined FUN_1422c4630(void)

void FUN_1422c4630(longlong param_1,longlong param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint *puVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  byte bVar18;
  uint local_res10 [2];
  uint local_a8;
  uint uStack_a4;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (param_2 != 0) {
    plVar8 = (longlong *)0x0;
    if (param_2 == *(longlong *)(param_1 + 0x208)) {
      *(undefined8 *)(param_1 + 0x208) = 0;
    }
    TSet<TTuple<USoundMix_*,FSoundMixState>,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x218);
    lVar6 = (longlong)*(int *)(param_1 + 0x530);
    if (*(int *)(param_1 + 0x530) != 0) {
      bVar18 = **(longlong **)(param_1 + 0x528) != param_2;
      local_res10[0] = CONCAT31(local_res10[0]._1_3_,bVar18);
      plVar10 = plVar8;
      plVar11 = plVar8;
      plVar16 = plVar8;
      do {
        iVar5 = (int)plVar11;
        plVar10 = (longlong *)((longlong)plVar10 + 1);
        plVar11 = (longlong *)(ulonglong)(iVar5 + 1);
        if ((longlong)plVar10 < lVar6) {
          plVar7 = (longlong *)(*(longlong *)(param_1 + 0x528) + (longlong)plVar10 * 8);
          do {
            if ((bool)bVar18 != (*plVar7 != param_2)) break;
            plVar11 = (longlong *)(ulonglong)((int)plVar11 + 1);
            plVar10 = (longlong *)((longlong)plVar10 + 1);
            plVar7 = plVar7 + 1;
          } while ((longlong)plVar10 < lVar6);
        }
        iVar17 = (int)plVar11 - iVar5;
        bVar13 = bVar18;
        if (bVar18 != 0) {
          iVar15 = (int)plVar16;
          if (iVar15 != iVar5) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x528) + (longlong)iVar15 * 8),
                       (void *)(*(longlong *)(param_1 + 0x528) + (longlong)iVar5 * 8),
                       (longlong)iVar17 << 3);
            bVar13 = (byte)local_res10[0];
          }
          plVar16 = (longlong *)(ulonglong)(uint)(iVar15 + iVar17);
        }
        bVar18 = bVar13 ^ 1;
        local_res10[0] = CONCAT31(local_res10[0]._1_3_,bVar13) ^ 1;
      } while ((longlong)plVar10 < lVar6);
      *(int *)(param_1 + 0x530) = (int)plVar16;
    }
    TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x268,local_res10,param_2);
    plVar10 = plVar8;
    if (local_res10[0] != 0xffffffff) {
      plVar10 = (longlong *)((longlong)(int)local_res10[0] * 0x60 + *(longlong *)(param_1 + 0x268));
    }
    plVar11 = plVar10 + 1;
    if (plVar10 == (longlong *)0x0) {
      plVar11 = plVar8;
    }
    if (plVar11 != (longlong *)0x0) {
      uVar3 = *(uint *)(plVar11 + 5);
      puVar1 = (uint *)(plVar11 + 2);
      uStack_a4 = 1;
      local_a8 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      if (uVar3 != 0) {
        puVar12 = (uint *)plVar11[4];
        if ((uint *)plVar11[4] == (uint *)0x0) {
          puVar12 = puVar1;
        }
        uVar4 = *puVar12;
        plVar10 = plVar8;
        while (uVar4 == 0) {
          iVar5 = (int)plVar8;
          uStack_90 = (int)plVar10 + 0x20;
          plVar10 = (longlong *)(ulonglong)uStack_90;
          local_a8 = iVar5 + 1;
          plVar8 = (longlong *)(ulonglong)local_a8;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
          goto LAB_1422c483c;
          uVar4 = puVar12[(longlong)iVar5 + 1];
        }
        uStack_a4 = -uVar4 & uVar4;
        iVar5 = 0x1f;
        if (uStack_a4 != 0) {
          for (; uStack_a4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uStack_a4 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        uStack_94 = (uStack_90 - iVar5) + 0x1f;
        if ((int)uVar3 < (int)uStack_94) {
LAB_1422c483c:
          uStack_94 = uVar3;
        }
      }
      uVar4 = *(uint *)(plVar11 + 5);
      uStack_70 = CONCAT44(uStack_94,0xffffffff);
      local_68 = CONCAT44(uStack_8c,uStack_90);
      uStack_58 = CONCAT44(uStack_a4,local_a8);
      uVar14 = uVar4 & 0xffffffe0;
      uStack_80 = local_a8;
      uStack_7c = uStack_a4;
      local_78 = puVar1;
      local_60 = plVar11;
      puStack_50 = puVar1;
      uStack_48 = uStack_70;
      uStack_40 = local_68;
      uStack_94 = uVar4;
      if (uVar4 != uVar3) {
        puVar12 = (uint *)plVar11[4];
        if ((uint *)plVar11[4] == (uint *)0x0) {
          puVar12 = puVar1;
        }
        uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
        iVar5 = (int)uVar4 >> 5;
        while (uVar9 == 0) {
          uVar14 = uVar14 + 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
          goto LAB_1422c4901;
          uVar9 = puVar12[(longlong)iVar5 + 1];
          iVar5 = iVar5 + 1;
        }
        uVar9 = -uVar9 & uVar9;
        iVar5 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uVar9 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        uStack_94 = (uVar14 - iVar5) + 0x1f;
        if ((int)uVar3 < (int)uStack_94) {
LAB_1422c4901:
          uStack_94 = uVar3;
        }
      }
      while( true ) {
        if ((uStack_70._4_4_ == uStack_94) && (local_78 == puVar1)) break;
        uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
        pbVar2 = (byte *)((longlong)(int)uStack_70._4_4_ * 0x68 + *plVar11 + 0x5c);
        *pbVar2 = *pbVar2 & 0xfe;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
      }
    }
    if ((*(longlong *)(param_1 + 0x2c8) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x2c8) + 0x140) == param_2)) {
      lVar6 = FAudioDevice::FindNextHighestEQPrioritySoundMix(param_1,param_2);
      if (lVar6 != 0) {
        FAudioEffectsManager::SetMixSettings(*(undefined8 *)(param_1 + 0x2c8),lVar6,1,0);
        return;
      }
      FAudioEffectsManager::ClearMixSettings(*(undefined8 *)(param_1 + 0x2c8));
    }
  }
  return;
}



// FUNCTION 1422c49d0 FUN_1422c49d0 body=547 status=ok
// SIG undefined FUN_1422c49d0(void)

void FUN_1422c49d0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  int *piVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_res10 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    cVar1 = IsInAudioThread();
    if (cVar1 == '\0') {
      local_48 = 0;
      local_38 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x28,local_68);
      if (puVar2 != (undefined8 *)0x0) {
        local_98 = (undefined4)param_1;
        uStack_94 = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_90 = (undefined4)param_2;
        uStack_8c = (undefined4)((ulonglong)param_2 >> 0x20);
        *puVar2 = &PTR_FUN_143ff7760;
        *(undefined4 *)(puVar2 + 1) = local_98;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_94;
        *(undefined4 *)(puVar2 + 2) = uStack_90;
        *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_8c;
        puVar2[3] = param_3;
        puVar2[4] = CONCAT44(uStack_7c,param_4);
      }
      local_78[0] = &LAB_1422c2d20;
      FUN_1422f8a30(local_78,(undefined1)local_res10[0]);
    }
    else {
      TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x268,local_res10,param_2);
      plVar4 = (longlong *)0x0;
      plVar6 = plVar4;
      if (local_res10[0] != -1) {
        plVar6 = (longlong *)((longlong)local_res10[0] * 0x60 + *(longlong *)(param_1 + 0x268));
      }
      plVar8 = plVar6 + 1;
      if (plVar6 == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      if (plVar8 != (longlong *)0x0) {
        TSet<TTuple<USoundClass_*,FSoundMixClassOverride>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>,FDefaultSetAllocator>
        ::FindId(plVar8,local_res10,param_3);
        plVar3 = plVar4;
        if (local_res10[0] != -1) {
          plVar3 = (longlong *)((longlong)local_res10[0] * 0x68 + *plVar8);
        }
        plVar7 = plVar3 + 1;
        if (plVar3 == (longlong *)0x0) {
          plVar7 = plVar4;
        }
        if (plVar7 != (longlong *)0x0) {
          if ((*(byte *)((longlong)plVar7 + 0x54) & 1) == 0) {
            TSet<TTuple<USoundClass_*,FSoundMixClassOverride>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>,FDefaultSetAllocator>
            ::Remove(plVar8,param_3);
            piVar5 = (int *)((longlong)plVar6 + 0x3c);
            plVar4 = plVar6 + 2;
            if (plVar6 == (longlong *)0x0) {
              piVar5 = (int *)&DAT_00000034;
              plVar4 = (longlong *)&DAT_00000008;
            }
            if ((int)*plVar4 == *piVar5) {
              TSet<TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>,TDefaultMapHashableKeyFuncs<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,0>,FDefaultSetAllocator>
              ::Remove(param_1 + 0x268,param_2);
            }
          }
          else {
            plVar4 = *(longlong **)(param_2 + 0x68);
            uVar9 = 0x3f800000;
            uVar10 = 0x3f800000;
            plVar6 = plVar4 + (longlong)*(int *)(param_2 + 0x70) * 3;
            for (; plVar4 != plVar6; plVar4 = plVar4 + 3) {
              if (*plVar4 == param_3) {
                uVar9 = (undefined4)plVar4[1];
                uVar10 = *(undefined4 *)((longlong)plVar4 + 0xc);
                break;
              }
            }
            *(undefined4 *)(plVar7 + 10) = param_4;
            *(undefined4 *)(plVar7 + 1) = uVar9;
            *(byte *)((longlong)plVar7 + 0x54) = *(byte *)((longlong)plVar7 + 0x54) & 0xf7 | 6;
            *(undefined4 *)((longlong)plVar7 + 0xc) = uVar10;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1422c4c00 FUN_1422c4c00 body=266 status=ok
// SIG undefined FUN_1422c4c00(void)

void FUN_1422c4c00(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res10 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (param_2 != 0) {
    cVar1 = IsInAudioThread();
    if (cVar1 == '\0') {
      local_28 = 0;
      local_18 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar2 != (undefined8 *)0x0) {
        local_68 = (undefined4)param_1;
        uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_60 = (undefined4)param_2;
        uStack_5c = (undefined4)((ulonglong)param_2 >> 0x20);
        *puVar2 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar2 + 1) = local_68;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_64;
        *(undefined4 *)(puVar2 + 2) = uStack_60;
        *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_5c;
      }
      local_58[0] = &LAB_1422c2cb0;
      FUN_1422f8a30(local_58,(undefined1)local_res10[0]);
      return;
    }
    TSet<TTuple<FRHIBlendState_*,FBlendStateInitializerRHI>,TDefaultMapHashableKeyFuncs<FRHIBlendState_*,FBlendStateInitializerRHI,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x218,local_res10,param_2);
    lVar3 = 0;
    if (local_res10[0] != -1) {
      lVar3 = (longlong)local_res10[0] * 0x50 + *(longlong *)(param_1 + 0x218);
    }
    lVar4 = lVar3 + 8;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 4) = 0;
      FAudioDevice::TryClearingSoundMix(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 1422c4d10 FUN_1422c4d10 body=521 status=ok
// SIG undefined FUN_1422c4d10(void)

void FUN_1422c4d10(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_res10;
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
  undefined8 local_28;
  undefined4 local_18;
  
  cVar4 = IsInAudioThread();
  if (cVar4 == '\0') {
    local_28 = 0;
    local_18 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x10,&puStack_48);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = param_1;
      *puVar6 = &PTR_FUN_143f77b70;
    }
    local_58 = (longlong *)&LAB_1422c2e20;
    FUN_1422f8a30(&local_58,local_res10);
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x218);
  iVar2 = *(int *)(param_1 + 0x240);
  puStack_48 = (uint *)(param_1 + 0x228);
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 0x238);
    if (*(uint **)(param_1 + 0x238) == (uint *)0x0) {
      puVar9 = puStack_48;
    }
    uVar8 = *puVar9;
    local_98 = 0;
    uStack_80 = 0;
    while (uVar8 == 0) {
      lVar7 = (longlong)(int)local_98;
      uStack_80 = uStack_80 + 0x20;
      uVar8 = local_98 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98 = uVar8;
      if (bVar3) goto LAB_1422c4e3d;
      uVar8 = puVar9[lVar7 + 1];
    }
    uStack_94 = -uVar8 & uVar8;
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
LAB_1422c4e3d:
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
  uStack_90 = local_98;
  uStack_8c = uStack_94;
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = auStack_40._8_8_;
  local_78._12_4_ = local_30._4_4_;
  bVar3 = local_88._4_4_ < *(int *)(param_1 + 0x240);
  local_68 = plVar1;
  local_58 = plVar1;
  local_30 = plVar1;
  local_88 = puStack_48;
  if (bVar3) {
    do {
      FUN_1422c4c00(param_1,*(undefined8 *)(*plVar1 + (longlong)iStack_7c * 0x50));
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      TSet<TTuple<USoundMix_*,FSoundMixState>,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1422c4f20 CollectAttenuationShapesForVisualization body=101 status=ok
// SIG undefined CollectAttenuationShapesForVisualization(void)

void FBaseAttenuationSettings::CollectAttenuationShapesForVisualization
               (longlong param_1,undefined8 param_2)

{
  uint local_res8 [2];
  undefined1 local_res10 [24];
  uint *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = *(undefined4 *)(param_1 + 0x18);
  local_28 = *(undefined8 *)(param_1 + 0x10);
  local_18 = *(undefined4 *)(param_1 + 0x1c);
  local_res8[0] = (uint)*(byte *)(param_1 + 9);
  local_38 = local_res8;
  local_30 = &local_28;
  local_1c = *(undefined4 *)(param_1 + 0x20);
  FUN_1422b8760(param_2,local_res10,&local_38,0);
  return;
}



// FUNCTION 1422c4f90 Compact body=574 status=ok
// SIG undefined Compact(void)

ulonglong TSparseArray<TSetElement<TTuple<FName,FActivatedReverb>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong in_RAX;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar3 = (int)param_1[1];
  uVar16 = 0;
  iVar17 = iVar3 - iVar2;
  lVar5 = *param_1;
  iVar12 = iVar3;
  iVar8 = (int)param_1[6];
  if ((int)param_1[6] != -1) {
    do {
      iVar14 = *(int *)((longlong)iVar8 * 0x38 + 4 + *param_1);
      if (iVar8 < iVar17) {
        bVar6 = (byte)iVar12 & 0x1f;
        uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = param_1 + 2;
        }
        do {
          iVar13 = iVar12 + -1;
          uVar10 = uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f;
          iVar15 = iVar13;
          if (iVar13 < 0) {
            iVar15 = iVar12 + 0x1e;
          }
          iVar12 = iVar13;
        } while ((*(uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4) & uVar10) == 0);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar8 * 0x38 + lVar5),
                   (void *)((longlong)iVar13 * 0x38 + lVar5),0x38);
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = param_1 + 2;
        }
        iVar15 = iVar8;
        if (iVar8 < 0) {
          iVar15 = iVar8 + 0x1f;
        }
        uVar16 = 1;
        puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
      }
      iVar8 = iVar14;
    } while (iVar14 != -1);
    iVar12 = (int)param_1[1];
  }
  iVar8 = (iVar12 - iVar17) - iVar2;
  if (iVar8 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar17 * 0x38 + *param_1),
               (void *)((longlong)iVar3 * 0x38 + *param_1),(longlong)iVar8 * 0x38);
    iVar12 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar12 - iVar2;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeShrink
            (param_1);
  iVar12 = (int)param_1[5];
  if (iVar3 != iVar12) {
    iVar14 = 0;
    iVar8 = 0;
    iVar13 = 0;
    iVar15 = 0;
    uVar10 = 1;
    uVar11 = 1;
    if (0 < iVar12) {
      do {
        if ((iVar15 < iVar17) || (iVar3 <= iVar15)) {
          if (iVar8 != iVar15) {
            plVar9 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar9 = param_1 + 2;
            }
            uVar4 = *(uint *)((longlong)plVar9 + (longlong)iVar14 * 4);
            puVar1 = (uint *)((longlong)plVar9 + (longlong)iVar14 * 4);
            if ((*(uint *)((longlong)plVar9 + (longlong)iVar13 * 4) & uVar11) == 0) {
              *puVar1 = ~uVar10 & uVar4;
            }
            else {
              *puVar1 = uVar4 | uVar10;
            }
          }
          iVar8 = iVar8 + 1;
          uVar10 = uVar10 * 2;
          if (uVar10 == 0) {
            uVar10 = 1;
            iVar14 = iVar14 + 1;
          }
        }
        iVar12 = (int)param_1[5];
        uVar4 = uVar11 * 2;
        iVar15 = iVar15 + 1;
        iVar7 = iVar13 + 1;
        uVar11 = 1;
        if (uVar4 != 0) {
          iVar7 = iVar13;
          uVar11 = uVar4;
        }
        iVar13 = iVar7;
      } while (iVar15 < iVar12);
    }
  }
  *(int *)(param_1 + 5) = iVar12 - iVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  return uVar16;
}



// FUNCTION 1422c51d0 CopyToEmptyStorage body=87 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_9fed52f7f21d3f1b5234a1b24daa5b0f>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x560);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_14502e0f0;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    FActiveSound::FActiveSound(puVar1 + 4,param_1 + 0x20);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1422c5230 FUN_1422c5230 body=144 status=ok
// SIG undefined FUN_1422c5230(void)

undefined8 * FUN_1422c5230(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14502e0d8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(uint *)(puVar2 + 3) =
         *(uint *)(puVar2 + 3) ^ (*(uint *)(param_1 + 0x18) ^ *(uint *)(puVar2 + 3)) & 1;
    *(undefined1 *)((longlong)puVar2 + 0x1c) = *(undefined1 *)(param_1 + 0x1c);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    puVar2[10] = uVar1;
    *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(param_1 + 0x58);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1422c52c0 FUN_1422c52c0 body=119 status=ok
// SIG undefined FUN_1422c52c0(void)

undefined8 * FUN_1422c52c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14502e0a8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(uint *)(puVar1 + 2) =
         *(uint *)(puVar1 + 2) ^ (*(uint *)(param_1 + 0x10) ^ *(uint *)(puVar1 + 2)) & 1;
    *(undefined1 *)((longlong)puVar1 + 0x14) = *(undefined1 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1422c5340 CopyToEmptyStorage body=108 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_fac170fa91fd39777b627056f080ee58>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_14502e0c0;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    puVar2[7] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    puVar2[8] = *(undefined8 *)(param_1 + 0x40);
    puVar2[9] = uVar1;
    *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(param_1 + 0x50);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1422c53b0 FUN_1422c53b0 body=114 status=ok
// SIG undefined FUN_1422c53b0(void)

void FUN_1422c53b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 8) * 0x18,(longlong)*(int *)(param_1 + 0xc) * 0x18
            );
  iVar1 = *(int *)(param_1 + 0x2c) + 0x1f;
  iVar2 = *(int *)(param_1 + 0x28) + 0x1f;
                    /* WARNING: Could not recover jumptable at 0x0001422c541e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  return;
}



// FUNCTION 1422c5430 FUN_1422c5430 body=105 status=ok
// SIG undefined FUN_1422c5430(void)

void FUN_1422c5430(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 8) << 6,(longlong)*(int *)(param_1 + 0xc) << 6);
  iVar1 = *(int *)(param_1 + 0x2c) + 0x1f;
  iVar2 = *(int *)(param_1 + 0x28) + 0x1f;
                    /* WARNING: Could not recover jumptable at 0x0001422c5495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  return;
}



// FUNCTION 1422c54a0 FUN_1422c54a0 body=114 status=ok
// SIG undefined FUN_1422c54a0(void)

void FUN_1422c54a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 8) * 0x50,(longlong)*(int *)(param_1 + 0xc) * 0x50
            );
  iVar1 = *(int *)(param_1 + 0x2c) + 0x1f;
  iVar2 = *(int *)(param_1 + 0x28) + 0x1f;
                    /* WARNING: Could not recover jumptable at 0x0001422c550e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  return;
}



// FUNCTION 1422c5520 FUN_1422c5520 body=284 status=ok
// SIG undefined FUN_1422c5520(void)

void FUN_1422c5520(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 0x150) << 3,
             (longlong)*(int *)(param_1 + 0x154) << 3);
  lVar1 = FUN_1428742d0(DAT_146b17150);
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(lVar1 + 8) << 3,(longlong)*(int *)(lVar1 + 0xc) << 3);
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 0x160) << 3,
             (longlong)*(int *)(param_1 + 0x164) << 3);
  FUN_1422c53b0(param_1 + 0x168,param_2);
  lVar1 = (longlong)*(int *)(param_1 + 0x1b0) << 2;
  (**(code **)(*param_2 + 0x78))(param_2,lVar1,lVar1);
  lVar1 = (longlong)(*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x19c)) * 0x1a8;
  (**(code **)(*param_2 + 0x78))(param_2,lVar1,lVar1);
  FUN_1422c5430(param_1 + 0x1b8,param_2);
  lVar1 = (longlong)*(int *)(param_1 + 0x200) << 2;
  (**(code **)(*param_2 + 0x78))(param_2,lVar1,lVar1);
  FUN_1422c54a0(param_1 + 0x218,param_2);
  lVar1 = (longlong)*(int *)(param_1 + 0x260) << 2;
                    /* WARNING: Could not recover jumptable at 0x0001422c5638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,lVar1,lVar1);
  return;
}



// FUNCTION 1422c5640 FUN_1422c5640 body=984 status=ok
// SIG undefined FUN_1422c5640(void)

longlong * FUN_1422c5640(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  byte bVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  ulonglong local_res8;
  ulonglong local_res18 [2];
  ulonglong in_stack_ffffffffffffff98;
  ulonglong in_stack_ffffffffffffffa8;
  ulonglong *puVar15;
  undefined8 local_38;
  undefined4 local_30;
  
  lVar13 = 0;
  if ((((param_1 == (longlong *)0x0) || (param_2[6] == 0)) || (DAT_146b17150 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar3 == '\0')) {
    return (longlong *)0x0;
  }
  if (param_2[5] != 0) {
    iVar2 = *(int *)(param_2[5] + 0xc);
    lVar5 = lVar13;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar12 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar12;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar12) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) != 0) {
      return (longlong *)0x0;
    }
  }
  if (*param_2 == 0) {
    uVar6 = (**(code **)(*param_1 + 0x290))(param_1);
  }
  else {
    uVar6 = *param_2 + 0x28;
  }
  if (((char)param_2[7] != '\0') &&
     (fVar14 = (float)(**(code **)(*param_1 + 0x2a0))(param_1), fVar14 <= 1.0)) {
    puVar15 = &local_res8;
    local_res18[0] = local_res18[0] & 0xffffffff00000000;
    local_res8 = local_res8 & 0xffffffff00000000;
    FUN_1422cbaa0(param_2[6],param_1,param_2[4],(longlong)param_2 + 0x3c,uVar6,local_res18,puVar15);
    in_stack_ffffffffffffffa8 = CONCAT44((int)((ulonglong)puVar15 >> 0x20),(undefined4)local_res8);
    cVar3 = FUN_1422d9160(param_2[6],param_1,param_2[4],(longlong)param_2 + 0x3c,uVar6,
                          local_res18[0] & 0xffffffff,in_stack_ffffffffffffffa8);
    in_stack_ffffffffffffff98 = uVar6;
    if (cVar3 == '\0') {
      return (longlong *)0x0;
    }
  }
  if (param_2[5] == 0) {
    if (param_2[1] != 0) {
      lVar7 = FUN_1429003e0();
      lVar5 = param_2[1];
joined_r0x0001422c589b:
      if (lVar5 != 0) {
        if (lVar5 != lVar7) goto code_r0x0001422c58a9;
        if (param_2[1] != 0) {
          lVar7 = FUN_1429003e0();
          for (lVar5 = param_2[1];
              (lVar8 = lVar13, lVar5 != 0 && (lVar8 = param_2[1], lVar5 != lVar7));
              lVar5 = *(longlong *)(lVar5 + 0x30)) {
          }
          goto LAB_1422c58ba;
        }
      }
    }
    lVar8 = FUN_1429003e0();
LAB_1422c58ba:
    FUN_1417846f0(lVar8,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_res8 = 0;
    uVar10 = FUN_1429003e0();
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
    plVar9 = (longlong *)
             FUN_1417985e0(uVar10,lVar8,0,0,in_stack_ffffffffffffff98,0,
                           in_stack_ffffffffffffffa8 & 0xffffffffffffff00,0,0);
  }
  else {
    if (param_2[1] != 0) {
      lVar7 = FUN_1429003e0();
      lVar5 = param_2[1];
joined_r0x0001422c57e0:
      if (lVar5 != 0) {
        if (lVar5 != lVar7) goto code_r0x0001422c57e7;
        if (param_2[1] != 0) {
          lVar7 = FUN_1429003e0();
          for (lVar5 = param_2[1];
              (lVar8 = lVar13, lVar5 != 0 && (lVar8 = param_2[1], lVar5 != lVar7));
              lVar5 = *(longlong *)(lVar5 + 0x30)) {
          }
          goto LAB_1422c57f8;
        }
      }
    }
    lVar8 = FUN_1429003e0();
LAB_1422c57f8:
    lVar13 = param_2[5];
    local_res8 = 0;
    local_res18[0] = 0;
    FUN_1417846f0(lVar13,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
    plVar9 = (longlong *)
             FUN_1417985e0(lVar8,lVar13,0,0,in_stack_ffffffffffffff98,0,
                           in_stack_ffffffffffffffa8 & 0xffffffffffffff00,0,0);
  }
  bVar1 = *(byte *)(plVar9 + 0x5e);
  *(byte *)((longlong)plVar9 + 0xba) = *(byte *)((longlong)plVar9 + 0xba) & 0xfd;
  *(byte *)(plVar9 + 0x5e) = bVar1 & 0xbf;
  plVar9[0x5a] = (longlong)param_1;
  if ((*(char *)((longlong)param_2 + 0x19) == '\0') || ((char)param_2[3] == '\0')) {
    bVar11 = 0;
  }
  else {
    bVar11 = 1;
  }
  bVar11 = bVar1 & 0xbe | bVar11;
  *(byte *)(plVar9 + 0x5e) = bVar11;
  *(byte *)(plVar9 + 0x5e) = (*(char *)((longlong)param_2 + 0x1a) * '\x02' ^ bVar11) & 2 ^ bVar11;
  plVar9[0x66] = *param_2;
  plVar9[0xbc] = param_2[2];
  if ((char)param_2[7] != '\0') {
    local_38 = *(undefined8 *)((longlong)param_2 + 0x3c);
    local_30 = *(undefined4 *)((longlong)param_2 + 0x44);
    FUN_1423990b0(plVar9,&local_38,0,0,in_stack_ffffffffffffff98 & 0xffffffffffffff00);
  }
  if (param_2[4] == 0) {
    *(undefined4 *)((longlong)plVar9 + 0x2f4) = *(undefined4 *)(param_2[6] + 0x3c);
  }
  else {
    FUN_14234b270(plVar9);
  }
  if (*(char *)((longlong)param_2 + 0x19) != '\0') {
    (**(code **)(*plVar9 + 0x558))(plVar9,0);
  }
  return plVar9;
code_r0x0001422c58a9:
  lVar5 = *(longlong *)(lVar5 + 0x30);
  goto joined_r0x0001422c589b;
code_r0x0001422c57e7:
  lVar5 = *(longlong *)(lVar5 + 0x30);
  goto joined_r0x0001422c57e0;
}



// FUNCTION 1422c5a20 FUN_1422c5a20 body=91 status=ok
// SIG undefined FUN_1422c5a20(void)

void FUN_1422c5a20(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14502e018;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar1 + 1,param_1 + 8);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_14502e060;
  }
  return;
}



// FUNCTION 1422c5a80 FUN_1422c5a80 body=91 status=ok
// SIG undefined FUN_1422c5a80(void)

void FUN_1422c5a80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14502df88;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar1 + 1,param_1 + 8);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_14502dfd0;
  }
  return;
}



// FUNCTION 1422c5ae0 FUN_1422c5ae0 body=163 status=ok
// SIG undefined FUN_1422c5ae0(void)

void FUN_1422c5ae0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_14502def8;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar6 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar6[2] = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    uVar5 = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar3;
    *(undefined4 *)(puVar6 + 4) = uVar4;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar5;
    puVar6[5] = *(undefined8 *)(param_1 + 0x28);
    lVar1 = *(longlong *)(param_1 + 0x30);
    puVar6[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar6[7] = 0;
    *(undefined4 *)(puVar6 + 8) = 0;
    if ((((longlong *)(param_1 + 0x38) != puVar6 + 7) && (*(int *)(param_1 + 0x40) != 0)) &&
       (plVar2 = *(longlong **)(param_1 + 0x38), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))();
    }
    puVar6[9] = *(undefined8 *)(param_1 + 0x48);
    *puVar6 = &PTR_FUN_14502df40;
  }
  return;
}



// FUNCTION 1422c5b90 FUN_1422c5b90 body=68 status=ok
// SIG undefined FUN_1422c5b90(void)

void FUN_1422c5b90(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14502e108;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 1422c5be0 FUN_1422c5be0 body=46 status=ok
// SIG undefined FUN_1422c5be0(void)

void FUN_1422c5be0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x1f8);
  if (lVar1 != 0) {
    FAudioEffectsManager::FAudioEffectsManager(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1422c5c10 FUN_1422c5c10 body=27 status=ok
// SIG undefined FUN_1422c5c10(void)

void FUN_1422c5c10(undefined8 param_1)

{
  FUN_142338230();
  FUN_1422c0870(param_1);
  return;
}



// FUNCTION 1422c5c30 DeactivateReverbEffect body=44 status=ok
// SIG undefined DeactivateReverbEffect(void)

void FAudioDevice::DeactivateReverbEffect(longlong param_1)

{
  int iVar1;
  
  iVar1 = TSet<TTuple<FName,FActivatedReverb>,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>,FDefaultSetAllocator>
          ::Remove(param_1 + 0x2e0);
  if (0 < iVar1) {
    FUN_1422dc530(param_1);
    return;
  }
  return;
}



// FUNCTION 1422c5c60 Describe body=763 status=ok
// SIG undefined Describe(void)

undefined8 FSoundBuffer::Describe(longlong *param_1,undefined8 param_2,char param_3)

{
  void *_Src;
  undefined2 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined2 **ppuVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  int local_res18;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 uStack_4c;
  longlong local_48 [2];
  
  puVar9 = (undefined2 *)0x0;
  local_res18 = 0;
  local_res10 = param_2;
  FUN_1422cf280(param_1,local_res8);
  pwVar10 = L"";
  local_58 = (undefined2 *)0x0;
  if ((char)param_1[4] != '\0') {
    pwVar10 = L"Permanent, ";
  }
  local_res18 = 0;
  uStack_4c = 0;
  if (*pwVar10 != L'\0') {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pwVar10[lVar7] != L'\0');
    iVar6 = (int)lVar7 + 1;
    local_50 = iVar6;
    if (0 < iVar6) {
      local_res18 = iVar6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    puVar9 = local_58;
    local_res18 = local_50;
    FGenericPlatformString::Memcpy(local_58,pwVar10,(longlong)iVar6 * 2);
  }
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  if (iVar6 == 1) {
    local_68 = (undefined2 *)0x0;
    local_60 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    uVar13 = 5;
    pcVar12 = "Mono";
  }
  else if (iVar6 == 2) {
    local_68 = (undefined2 *)0x0;
    local_60 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    uVar13 = 7;
    pcVar12 = "Stereo";
  }
  else if (iVar6 == 6) {
    local_68 = (undefined2 *)0x0;
    local_60 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    uVar13 = 4;
    pcVar12 = "5.1";
  }
  else {
    if (iVar6 != 8) {
      FString::PrintfImpl(&local_68,L"%d Channels");
      goto LAB_1422c5ddf;
    }
    local_68 = (undefined2 *)0x0;
    local_60 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    uVar13 = 4;
    pcVar12 = "7.1";
  }
  FGenericPlatformString::Convert<char,wchar_t>(local_68,uVar13,pcVar12,uVar13,0x3f);
LAB_1422c5ddf:
  if (param_3 == '\0') {
    ppuVar4 = (undefined2 **)FUN_141672300(local_48,param_1 + 2,0);
    bVar3 = false;
    bVar2 = true;
  }
  else {
    iVar6 = (int)param_1[3];
    _Src = (void *)param_1[2];
    local_58 = (undefined2 *)0x0;
    local_50 = iVar6;
    if (iVar6 == 0) {
      uStack_4c = 0;
      ppuVar4 = &local_58;
      bVar3 = true;
      bVar2 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar6,0);
      ::_guard_xfg_dispatch_icall_nop(local_58,_Src,(longlong)iVar6 * 2);
      ppuVar4 = &local_58;
      bVar3 = true;
      bVar2 = false;
    }
  }
  puVar1 = *ppuVar4;
  *ppuVar4 = (undefined2 *)0x0;
  ppuVar4[1] = (undefined2 *)0x0;
  if (bVar2) {
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_58 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  puVar5 = (undefined8 *)FName::ToString(local_res8,local_48);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    puVar14 = (undefined2 *)*puVar5;
  }
  if ((int)param_1[3] == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)param_1[2];
  }
  puVar8 = &DAT_143f3eda8;
  if ((int)local_60 != 0) {
    puVar8 = local_68;
  }
  puVar15 = &DAT_143f3eda8;
  if (local_res18 != 0) {
    puVar15 = puVar9;
  }
  iVar6 = (**(code **)(*param_1 + 8))(param_1);
  uVar13 = local_res10;
  FString::PrintfImpl(local_res10,L"%8.2fkb, %s%s, \'%s\', Class: %s",
                      (double)((float)iVar6 * 0.0009765625),puVar15,puVar8,puVar11,puVar14);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (puVar1 != (undefined2 *)0x0) {
    FMemory::Free(puVar1);
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  return uVar13;
}



// FUNCTION 1422c5f60 Describe body=321 status=ok
// SIG undefined Describe(void)

undefined8 FSoundSource::Describe(longlong param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  undefined8 local_res8;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  bVar3 = false;
  if (plVar5[0xc] == 0) {
    pwVar6 = L"None";
  }
  else {
    puVar4 = (undefined8 *)FActiveSound::GetOwnerName(plVar5[0xc],local_38);
    if (*(int *)(puVar4 + 1) == 0) {
      plVar5 = *(longlong **)(param_1 + 0x10);
      pwVar6 = L"";
      bVar3 = true;
    }
    else {
      pwVar6 = (wchar_t *)*puVar4;
      bVar3 = true;
      plVar5 = *(longlong **)(param_1 + 0x10);
    }
  }
  puVar7 = &DAT_143f3eda8;
  if (param_3 == '\0') {
    local_res8 = *(undefined8 *)(*plVar5 + 0x18);
    bVar2 = false;
    bVar1 = true;
    FName::ToString(&local_res8,&local_58);
    if (local_50 != 0) {
      puVar7 = local_58;
    }
  }
  else {
    bVar2 = true;
    bVar1 = false;
    puVar4 = (undefined8 *)UObjectBaseUtility::GetPathName(*plVar5,local_48,0);
    if (*(int *)(puVar4 + 1) != 0) {
      puVar7 = (undefined2 *)*puVar4;
    }
  }
  FString::PrintfImpl(param_2,L"Wave: %s, Volume: %6.2f, Owner: %s",puVar7,
                      (double)(*(float *)(*(longlong *)(param_1 + 0x10) + 0x70) *
                              *(float *)(*(longlong *)(param_1 + 0x10) + 0x68)),pwVar6);
  if (bVar1) {
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (bVar2) {
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_38[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1422c60b0 FUN_1422c60b0 body=20 status=ok
// SIG undefined FUN_1422c60b0(void)

void FUN_1422c60b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1422bf470(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 1422c60d0 FUN_1422c60d0 body=384 status=ok
// SIG undefined FUN_1422c60d0(void)

void FUN_1422c60d0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_28;
  undefined8 local_20;
  int local_18;
  
  UActorComponent::DestroyRenderState_Concurrent();
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  (**(code **)(**(longlong **)(lVar2 + 0x1b8) + 0x188))(*(longlong **)(lVar2 + 0x1b8),param_1);
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar3 = APlayerStateRemnant::GetPrivateStaticClass();
  FUN_1417a5560(uVar3,&local_28,1,0x10,0);
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    if ((local_18 < 0) || ((int)local_20 <= local_18)) goto LAB_1422c6238;
    lVar2 = *(longlong *)(local_28 + (longlong)local_18 * 8);
    if ((lVar2 != param_1) && ((*(byte *)(lVar2 + 0xb8) & 1) != 0)) {
      cVar1 = FUN_142399f40(lVar2);
      if (((((cVar1 != '\0') && (cVar1 = FUN_14239a1f0(lVar2), cVar1 != '\0')) &&
           ((*(byte *)(lVar2 + 0xb8) & 1) != 0)) &&
          ((1e-05 < *(float *)(lVar2 + 0x2d0) && (1e-05 < *(float *)(lVar2 + 0x2d4))))) &&
         ((*(longlong *)(lVar2 + 0x20) == 0 ||
          ((*(uint *)(*(longlong *)(lVar2 + 0x20) + 8) >> 4 & 1) == 0)))) {
        lVar4 = *(longlong *)(lVar2 + 0x120);
        if (lVar4 == 0) {
          lVar4 = FUN_1423407b0(lVar2);
        }
        (**(code **)(**(longlong **)(lVar4 + 0x1b8) + 0x180))(*(longlong **)(lVar4 + 0x1b8),lVar2);
      }
LAB_1422c6238:
      if (local_28 != 0) {
        FMemory::Free(local_28);
      }
      return;
    }
    do {
      local_18 = local_18 + 1;
      if ((int)local_20 <= local_18) break;
    } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  } while( true );
}



// FUNCTION 1422c6250 FUN_1422c6250 body=942 status=ok
// SIG undefined FUN_1422c6250(void)

longlong * FUN_1422c6250(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  longlong local_res8;
  longlong *local_res18;
  longlong local_res20;
  int local_d8;
  uint uStack_d4;
  uint *puStack_d0;
  uint local_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined2 *local_b8;
  int local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  int iStack_90;
  uint uStack_8c;
  uint *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  local_res20 = param_3;
  if ((*(uint *)(param_3 + 8) >> 4 & 1) != 0) {
    local_res20 = *(longlong *)(param_3 + 0x10);
  }
  UObjectBaseUtility::GetPathName(local_res20,&local_b8,0);
  lVar12 = *param_1;
  puVar11 = &DAT_143f3eda8;
  if (local_b0 != 0) {
    puVar11 = local_b8;
  }
  puVar7 = (undefined8 *)FName::FName(&local_res18,puVar11,1);
  (**(code **)(lVar12 + 0x2e0))(param_1,&local_a8,*puVar7);
  if ((CONCAT44(uStack_a4,local_a8) == 0) || (CONCAT44(uStack_9c,uStack_a0) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  local_res18 = (longlong *)0x0;
  if (bVar5) {
    *(undefined4 *)param_2 = local_a8;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_a4;
    *(undefined4 *)(param_2 + 1) = uStack_a0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_9c;
  }
  else {
    plVar8 = param_1 + 0x6f;
    puVar1 = (uint *)(param_1 + 0x71);
    local_res8 = 0;
    uVar2 = *(uint *)(param_1 + 0x74);
    local_d8 = 0;
    uStack_d4 = 1;
    uStack_c4 = 0;
    iStack_c0 = 0;
    if (uVar2 != 0) {
      puVar15 = (uint *)param_1[0x73];
      if ((uint *)param_1[0x73] == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar3 = *puVar15;
      iStack_c0 = 0;
      local_d8 = 0;
      while (uVar3 == 0) {
        lVar12 = (longlong)local_d8;
        iStack_c0 = iStack_c0 + 0x20;
        iVar9 = local_d8 + 1;
        bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
        local_d8 = iVar9;
        if (bVar5) goto LAB_1422c63bd;
        uVar3 = puVar15[lVar12 + 1];
      }
      uStack_d4 = uVar3 - 1 & uVar3 ^ uVar3;
      iVar9 = 0x1f;
      if (uStack_d4 != 0) {
        for (; uStack_d4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_d4 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_c4 = (iStack_c0 - iVar9) + 0x1f;
      if ((int)uVar2 < (int)uStack_c4) {
LAB_1422c63bd:
        uStack_c4 = uVar2;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x74);
    uStack_80 = CONCAT44(uStack_c4,0xffffffff);
    local_78 = CONCAT44(uStack_bc,iStack_c0);
    uStack_68 = CONCAT44(uStack_d4,local_d8);
    local_c8 = -1 << ((byte)uVar3 & 0x1f);
    uVar14 = uVar3 & 0xffffffe0;
    iStack_90 = local_d8;
    uStack_8c = uStack_d4;
    local_res18 = plVar8;
    puStack_d0 = puVar1;
    uStack_c4 = uVar3;
    local_88 = puVar1;
    local_70 = plVar8;
    puStack_60 = puVar1;
    uStack_58 = uStack_80;
    uStack_50 = local_78;
    local_98 = plVar8;
    if (uVar3 != uVar2) {
      puVar15 = (uint *)param_1[0x73];
      if ((uint *)param_1[0x73] == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar10 = puVar15[(int)uVar3 >> 5] & local_c8;
      iVar9 = (int)uVar3 >> 5;
      while (uVar10 == 0) {
        uVar14 = uVar14 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_1422c6487;
        uVar10 = puVar15[(longlong)iVar9 + 1];
        local_c8 = 0xffffffff;
        iVar9 = iVar9 + 1;
      }
      uVar10 = uVar10 - 1 & uVar10 ^ uVar10;
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
      uStack_c4 = (uVar14 - iVar9) + 0x1f;
      uVar3 = uStack_c4;
      if ((int)uVar2 < (int)uStack_c4) {
LAB_1422c6487:
        uStack_c4 = uVar2;
        uVar3 = uVar2;
      }
    }
    while( true ) {
      if ((uStack_80._4_4_ == uVar3) && (local_88 == puVar1)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if ((bVar5) && (local_98 == plVar8)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) break;
      plVar4 = *(longlong **)((longlong)(int)uStack_80._4_4_ * 0x20 + *local_98 + 8);
      iVar9 = *(int *)(plVar4[6] + 0x90);
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < iVar9) ||
         (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)iVar9 * 8)
          != plVar4[6] + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar12 = plVar4[0xe];
        lVar13 = (longlong)(int)plVar4[0xf] * 0x10 + lVar12;
        for (; lVar12 != lVar13; lVar12 = lVar12 + 0x10) {
          cVar6 = FString::StartsWith(&local_b8,lVar12,1);
          if ((cVar6 != '\0') && (local_res18 = (longlong *)0x0, local_res8 == 0)) {
            local_res8 = *plVar4;
          }
        }
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_8c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
    }
    local_res18 = (longlong *)0x0;
    if (local_res8 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      lVar12 = UObjectBaseUtility::GetOutermost(local_res20);
      local_res18 = *(longlong **)(lVar12 + 0x18);
      FName::ToString(&local_res18,&local_d8);
      plVar8 = (longlong *)FUN_1416f9cf0(&local_res20,&local_d8);
      lVar12 = *plVar8;
      *param_2 = local_res8;
      param_2[1] = lVar12;
      if (CONCAT44(uStack_d4,local_d8) != 0) {
        FMemory::Free();
      }
    }
  }
  if (local_b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1422c6600 FUN_1422c6600 body=47 status=ok
// SIG undefined FUN_1422c6600(void)

void FUN_1422c6600(longlong param_1,byte param_2)

{
  if ((*(uint *)(param_1 + 0x300) >> 1 & 1) != (uint)param_2) {
    *(uint *)(param_1 + 0x300) =
         (uint)param_2 + (uint)param_2 | *(uint *)(param_1 + 0x300) & 0xfffffffd;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1422c6630 FUN_1422c6630 body=42 status=ok
// SIG undefined FUN_1422c6630(void)

void FUN_1422c6630(longlong param_1,byte param_2)

{
  if ((*(uint *)(param_1 + 0x300) & 1) != (uint)param_2) {
    *(uint *)(param_1 + 0x300) = *(uint *)(param_1 + 0x300) & 0xfffffffe | (uint)param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1422c6660 FUN_1422c6660 body=104 status=ok
// SIG undefined FUN_1422c6660(void)

void FUN_1422c6660(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 400))(plVar1,*param_1);
  }
  (**(code **)(*(longlong *)*param_1 + 0x30))();
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1422c66d0 FUN_1422c66d0 body=430 status=ok
// SIG undefined FUN_1422c66d0(void)

void FUN_1422c66d0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    local_38 = 0;
    local_20 = 0;
    local_18 = 0;
    local_30 = 0;
    local_28 = 0;
    cVar5 = (**(code **)(*plVar2 + 8))
                      (plVar2,*(undefined8 *)(*param_1 + 0x138),*(undefined4 *)(*param_1 + 0x1dc),
                       &local_38);
    lVar3 = *param_1;
    if (cVar5 == '\0') {
      if (*(char *)(lVar3 + 0xb1) == '\x04') {
        *(undefined1 *)(lVar3 + 0xb1) = 1;
        *(undefined4 *)(*param_1 + 0xe4) = 0;
        USoundWave::RemoveAudioResource(*param_1);
      }
    }
    else {
      *(byte *)(lVar3 + 0xb4) = *(byte *)(lVar3 + 0xb4) & 0xdf;
      *(byte *)(lVar3 + 0xb4) = *(byte *)(lVar3 + 0xb4) | 0x40;
      *(undefined4 *)(lVar3 + 0xec) = (undefined4)local_30;
      *(undefined4 *)(*param_1 + 0xe4) = local_38._4_4_;
      if (0.0 < (float)local_28) {
        *(float *)(*param_1 + 0x50) = (float)local_28;
      }
      lVar3 = *param_1;
      if (*(char *)(lVar3 + 0xb1) == '\x04') {
        iVar7 = *(int *)(lVar3 + 0xe4) << 0xf;
        if (*(longlong *)(lVar3 + 0x128) == 0) {
          uVar6 = FMemory::Malloc(iVar7,0);
          *(undefined8 *)(*param_1 + 0x128) = uVar6;
          (**(code **)(*(longlong *)param_1[1] + 0x10))
                    ((longlong *)param_1[1],*(undefined8 *)(*param_1 + 0x128),
                     *(byte *)(*param_1 + 0xb3) & 1,iVar7);
        }
        else {
          LOCK();
          if (*(int *)(lVar3 + 0xb8) == 0) {
            *(int *)(lVar3 + 0xb8) = 0;
          }
          UNLOCK();
        }
      }
      else {
        *(undefined4 *)(lVar3 + 0xe8) = local_30._4_4_;
        uVar6 = FMemory::Malloc((longlong)*(int *)(*param_1 + 0xe8),0);
        *(undefined8 *)(*param_1 + 0x130) = uVar6;
        (**(code **)(*(longlong *)param_1[1] + 0x20))
                  ((longlong *)param_1[1],*(undefined8 *)(*param_1 + 0x130),&local_38);
        piVar1 = (int *)(*param_1 + 0x1e0);
        *piVar1 = *piVar1 + *(int *)(*param_1 + 0xe8);
      }
    }
    if (*(char *)(*param_1 + 0xb1) == '\x03') {
      USoundWave::RemoveAudioResource();
    }
    puVar4 = (undefined8 *)param_1[1];
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    if (local_20 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1422c6880 DumpAssetRegistryInfo body=112 status=ok
// SIG undefined DumpAssetRegistryInfo(void)

void UAssetManager::DumpAssetRegistryInfo(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  lVar2 = FUN_1422ca050();
  plVar5 = *(longlong **)(lVar2 + 0x3c8);
  if (plVar5 == (longlong *)0x0) {
    puVar3 = (undefined8 *)FName::FName(local_res8,L"AssetRegistry",1);
    uVar1 = *puVar3;
    uVar4 = FUN_14168dc80();
    plVar5 = (longlong *)FUN_141690010(uVar4,uVar1);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x48))(plVar5);
    *(longlong **)(lVar2 + 0x3c8) = plVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001422c68e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x1a8))(plVar5,1);
  return;
}



// FUNCTION 1422c68f0 FUN_1422c68f0 body=107 status=ok
// SIG undefined FUN_1422c68f0(void)

void FUN_1422c68f0(void)

{
  longlong *plVar1;
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined8 local_10;
  
  if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x2c0) != 0)) {
    plVar1 = (longlong *)FUN_1422ca050();
    local_18 = 0;
    local_10 = 0;
    (**(code **)(*plVar1 + 0x310))(plVar1,&local_18);
    local_res8[0] = 0;
    FUN_1422bb360(local_18,(longlong)(int)local_10,0,local_res8);
    FUN_1422bdbb0(&local_18);
  }
  return;
}



// FUNCTION 1422c6960 FUN_1422c6960 body=1649 status=ok
// SIG undefined FUN_1422c6960(void)

void FUN_1422c6960(void)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  uint uVar10;
  void *_Dst;
  undefined1 uVar11;
  longlong *plVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  void *_Src;
  uint *puVar16;
  int iVar17;
  void *pvVar18;
  uint uVar19;
  uint uVar20;
  uint local_res8 [2];
  longlong *local_res10;
  longlong *local_res18;
  void *local_res20;
  void *local_128;
  uint local_120;
  uint local_11c;
  longlong local_118;
  uint local_110;
  int local_10c;
  longlong *local_108;
  undefined8 local_100;
  uint local_f8;
  uint uStack_f4;
  uint *puStack_f0;
  undefined4 local_e8;
  uint uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  undefined8 *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60 [4];
  
  if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x2c0) != 0)) {
    plVar5 = (longlong *)FUN_1422ca050();
    local_108 = (longlong *)0x0;
    local_100 = 0;
    local_90 = plVar5;
    (**(code **)(*plVar5 + 0x310))(plVar5,&local_108);
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1422bb360(local_108,(longlong)(int)local_100,0,local_res8);
    local_res18 = local_108;
    local_98 = local_108 + (longlong)(int)local_100 * 0x12;
    if (local_108 != local_98) {
      do {
        uVar20 = 0;
        lVar15 = *local_res18;
        plVar7 = (longlong *)0x0;
        local_118 = 0;
        local_res8[0] = 0;
        local_10c = 0;
        if ((int)plVar5[0x70] != *(int *)((longlong)plVar5 + 0x3ac)) {
          plVar12 = (longlong *)plVar5[0x77];
          if ((longlong *)plVar5[0x77] == (longlong *)0x0) {
            plVar12 = plVar5 + 0x76;
          }
          iVar4 = *(int *)((longlong)plVar12 +
                          ((longlong)((int)((ulonglong)lVar15 >> 0x20) + (int)lVar15) &
                          (longlong)(int)plVar5[0x78] - 1U) * 4);
          if (iVar4 != -1) {
            do {
              plVar12 = (longlong *)((longlong)iVar4 * 0x20 + plVar5[0x6f]);
              if (*plVar12 == lVar15) {
                if (iVar4 != -1) goto LAB_1422c6ac2;
                break;
              }
              iVar4 = (int)plVar12[3];
            } while (iVar4 != -1);
          }
        }
        plVar12 = plVar7;
LAB_1422c6ac2:
        uStack_f4 = 1;
        plVar5 = plVar12 + 1;
        if (plVar12 == (longlong *)0x0) {
          plVar5 = plVar7;
        }
        uStack_e4 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        lVar15 = *plVar5;
        plVar5 = (longlong *)(lVar15 + 0x90);
        uVar19 = *(uint *)(lVar15 + 0xb8);
        puVar16 = (uint *)(lVar15 + 0xa0);
        if (uVar19 != 0) {
          puVar14 = *(uint **)(lVar15 + 0xb0);
          if (*(uint **)(lVar15 + 0xb0) == (uint *)0x0) {
            puVar14 = puVar16;
          }
          uVar1 = *puVar14;
          plVar12 = plVar7;
          while (uVar1 == 0) {
            iVar4 = (int)plVar7;
            uStack_e0 = (int)plVar12 + 0x20;
            plVar12 = (longlong *)(ulonglong)uStack_e0;
            local_f8 = iVar4 + 1;
            plVar7 = (longlong *)(ulonglong)local_f8;
            if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
            goto LAB_1422c6b94;
            uVar1 = puVar14[(longlong)iVar4 + 1];
          }
          uStack_f4 = -uVar1 & uVar1;
          iVar4 = 0x1f;
          if (uStack_f4 != 0) {
            for (; uStack_f4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          if (uStack_f4 == 0) {
            iVar4 = 0x20;
          }
          else {
            iVar4 = 0x1f - iVar4;
          }
          uStack_e4 = (uStack_e0 - iVar4) + 0x1f;
          if ((int)uVar19 < (int)uStack_e4) {
LAB_1422c6b94:
            uStack_e4 = uVar19;
          }
        }
        local_e8 = 0xffffffff;
        uVar1 = *(uint *)(lVar15 + 0xb8);
        uStack_d0 = CONCAT44(uStack_f4,local_f8);
        uStack_c0 = CONCAT44(uStack_e4,0xffffffff);
        uStack_b8 = CONCAT44(uStack_dc,uStack_e0);
        uVar10 = -1 << ((byte)uVar1 & 0x1f);
        uVar13 = uVar1 & 0xffffffe0;
        uStack_c8 = CONCAT44(uVar1,uVar10);
        uStack_80 = local_f8;
        uStack_7c = uStack_f4;
        if (uVar1 != uVar19) {
          puVar14 = *(uint **)(lVar15 + 0xb0);
          if (*(uint **)(lVar15 + 0xb0) == (uint *)0x0) {
            puVar14 = puVar16;
          }
          uVar10 = puVar14[(int)uVar1 >> 5] & uVar10;
          iVar4 = (int)uVar1 >> 5;
          while (uVar10 == 0) {
            uVar13 = uVar13 + 0x20;
            if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
            goto LAB_1422c6c66;
            uVar10 = puVar14[(longlong)iVar4 + 1];
            uStack_c8 = 0xffffffff;
            iVar4 = iVar4 + 1;
          }
          uVar10 = -uVar10 & uVar10;
          iVar4 = 0x1f;
          if (uVar10 != 0) {
            for (; uVar10 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          if (uVar10 == 0) {
            iVar4 = 0x20;
          }
          else {
            iVar4 = 0x1f - iVar4;
          }
          iVar4 = (uVar13 - iVar4) + 0x1f;
          uStack_c8 = CONCAT44(iVar4,(undefined4)uStack_c8);
          if ((int)uVar19 < iVar4) {
LAB_1422c6c66:
            uStack_c8 = CONCAT44(uVar19,(undefined4)uStack_c8);
          }
        }
        local_a0 = uStack_c8 >> 0x20;
        local_res10 = plVar5;
        puStack_f0 = puVar16;
        local_d8 = plVar5;
        local_78 = puVar16;
        uStack_70 = uStack_c0;
        local_68 = uStack_b8;
        local_88 = plVar5;
        while( true ) {
          lVar15 = local_118;
          pvVar9 = (void *)0x0;
          if (((uStack_70._4_4_ == (int)local_a0) && (local_78 == puVar16)) && (local_88 == plVar5))
          break;
          local_a8 = (undefined8 *)((longlong)uStack_70._4_4_ * 0x80 + *local_88);
          lVar15 = local_a8[0xb];
          if ((((lVar15 != 0) && (*(char *)(lVar15 + 0x12) == '\0')) &&
              (*(char *)(lVar15 + 0x11) == '\0')) ||
             (((lVar2 = local_a8[7], lVar2 != 0 && (*(char *)(lVar2 + 0x12) == '\0')) &&
              (*(char *)(lVar2 + 0x11) == '\0')))) {
            puVar6 = local_a8 + 0xb;
            if (((lVar15 == 0) || (*(char *)(lVar15 + 0x12) != '\0')) ||
               (*(char *)(lVar15 + 0x11) != '\0')) {
              puVar6 = local_a8 + 7;
            }
            local_128 = (void *)0x0;
            iVar4 = 0;
            local_11c = 0;
            lVar15 = puVar6[2];
            local_b0 = lVar15 + (longlong)*(int *)(puVar6 + 3) * 8;
            _Src = pvVar9;
            pvVar18 = pvVar9;
            uVar19 = uVar20;
            if (lVar15 != local_b0) {
              do {
                iVar4 = (int)pvVar18;
                if (1 < iVar4) {
                  local_120 = (3 - (uint)(iVar4 != 0)) + iVar4;
                  if ((int)pvVar9 < (int)local_120) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,pvVar18);
                    pvVar9 = (void *)(ulonglong)local_11c;
                    _Src = local_128;
                  }
                  pvVar18 = (void *)(ulonglong)local_120;
                  lVar2 = ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2;
                  *(undefined4 *)(lVar2 + (longlong)_Src) = 0x20002c;
                  *(undefined2 *)(lVar2 + 4 + (longlong)_Src) = 0;
                }
                puVar6 = (undefined8 *)FName::ToString(lVar15,local_60);
                local_res20 = (void *)*puVar6;
                iVar4 = *(int *)(puVar6 + 1) + -1;
                if (*(int *)(puVar6 + 1) == 0) {
                  iVar4 = 0;
                }
                if (iVar4 != 0) {
                  iVar17 = (int)pvVar18;
                  local_120 = iVar4 + (uint)(iVar17 == 0) + iVar17;
                  if ((int)pvVar9 < (int)local_120) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,pvVar18);
                    pvVar9 = (void *)(ulonglong)local_11c;
                    _Src = local_128;
                  }
                  pvVar18 = (void *)(ulonglong)local_120;
                  _Dst = (void *)(((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2 + (longlong)_Src
                                 );
                  _guard_xfg_dispatch_icall_nop(_Dst,local_res20,(longlong)iVar4 * 2);
                  *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
                }
                iVar4 = (int)pvVar18;
                if (local_60[0] != 0) {
                  FMemory::Free();
                }
                lVar15 = lVar15 + 8;
                uVar19 = local_res8[0];
              } while (lVar15 != local_b0);
            }
            puVar6 = local_a8;
            lVar15 = local_a8[0xb];
            if (((lVar15 == 0) || (*(char *)(lVar15 + 0x12) != '\0')) ||
               (*(char *)(lVar15 + 0x11) != '\0')) {
              uVar11 = 0;
            }
            else {
              uVar11 = 1;
            }
            local_res8[0] = uVar19 + 1;
            local_110 = local_res8[0];
            if (local_10c < (int)local_res8[0]) {
              FUN_140fd5770(&local_118,uVar19);
            }
            uVar20 = local_110;
            uVar3 = *puVar6;
            puVar8 = (undefined8 *)((longlong)(int)uVar19 * 0x20 + local_118);
            *(undefined1 *)(puVar8 + 1) = uVar11;
            puVar6 = puVar8 + 2;
            *puVar8 = uVar3;
            *puVar6 = 0;
            *(int *)(puVar8 + 3) = iVar4;
            local_res8[0] = local_110;
            if (iVar4 == 0) {
              *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar6,iVar4,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar6,_Src,(longlong)iVar4 * 2);
            }
            puVar16 = puStack_f0;
            plVar5 = local_res10;
            if (_Src != (void *)0x0) {
              FMemory::Free(_Src);
              puVar16 = puStack_f0;
              plVar5 = local_res10;
            }
          }
          uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
        }
        uVar11 = (undefined1)local_res8[0];
        if (0 < (int)uVar20) {
          local_res8[0] = local_res8[0] & 0xffffff00;
          AlgoImpl::
          IntroSortInternal<_UAssetManager::DumpLoadedAssetState_::_17_::FLoadedInfo,FIdentityFunctor,TDereferenceWrapper<_UAssetManager::DumpLoadedAssetState_::_17_::FLoadedInfo,<lambda_a9c53378efbec8498667453e20309952>_>_>
                    (local_118,(longlong)(int)uVar20,uVar11,local_res8);
        }
        if (uVar20 != 0) {
          plVar5 = (longlong *)(lVar15 + 0x10);
          do {
            if (*plVar5 != 0) {
              FMemory::Free();
            }
            plVar5 = plVar5 + 4;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
        if (lVar15 != 0) {
          FMemory::Free(lVar15);
        }
        local_res18 = local_res18 + 0x12;
        plVar5 = local_90;
      } while (local_res18 != local_98);
    }
    FUN_1422bdbb0(&local_108);
  }
  return;
}



// FUNCTION 1422c6fe0 FUN_1422c6fe0 body=1880 status=ok
// SIG undefined FUN_1422c6fe0(void)

/* WARNING: Removing unreachable block (ram,0x0001422c758f) */

void FUN_1422c6fe0(undefined8 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  undefined2 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined2 *puVar17;
  undefined8 uVar18;
  int iVar19;
  int local_res10 [2];
  void *local_res18;
  int local_res20;
  longlong local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 *local_118;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  void *local_e0;
  longlong *local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8 [2];
  longlong local_a8 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  longlong local_68 [2];
  longlong local_58 [3];
  
  if (((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x2c0) != 0)) &&
     (*(int *)(param_1 + 1) != 0)) {
    plVar5 = (longlong *)FUN_1422ca050();
    local_c0 = plVar5;
    plVar6 = (longlong *)UAssetManager::GetAssetRegistry(plVar5);
    uVar10 = 0;
    local_158 = (longlong *)0x0;
    local_150 = 0;
    local_148 = 0;
    local_140 = 0xb;
    local_c8 = plVar6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    lVar9 = local_148;
    FGenericPlatformString::Memcpy(local_148,L"digraph { ",0x16);
    uVar3 = local_150;
    lVar15 = (longlong)(int)local_150;
    iVar4 = (int)local_150 + 1;
    local_150 = CONCAT44(local_150._4_4_,iVar4);
    if (local_150._4_4_ < iVar4) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_158,uVar3 & 0xffffffff);
    }
    plVar12 = local_158 + lVar15 * 2;
    *plVar12 = lVar9;
    *(undefined4 *)(plVar12 + 1) = (undefined4)local_140;
    *(undefined4 *)((longlong)plVar12 + 0xc) = local_140._4_4_;
    puVar11 = (undefined8 *)*param_1;
    puVar16 = puVar11 + (longlong)*(int *)(param_1 + 1) * 2;
    local_118 = puVar11;
    local_d0 = puVar16;
    if (puVar11 != puVar16) {
      local_128 = 0;
      local_120 = 0;
      uVar18 = uVar10;
      do {
        local_138 = (longlong *)0x0;
        local_130 = 0;
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        local_118 = puVar11;
        puVar7 = (undefined8 *)FName::FName(local_70,puVar14,1);
        local_98 = *puVar7;
        local_90 = 0;
        local_78 = 0;
        local_88 = uVar18;
        local_80 = uVar10;
        (**(code **)(*plVar6 + 0x70))(plVar6,&local_98);
        local_d8 = local_138 + (longlong)(int)local_130 * 5;
        if (local_138 != local_d8) {
          local_100 = 0;
          local_f8 = 0;
          plVar5 = local_138 + 2;
          do {
            iVar4 = 0;
            lVar9 = plVar5[-1];
            local_168 = 0;
            local_res10[0] = 0;
            local_15c = 0;
            iVar19 = iVar4;
            if (lVar9 == 0) {
              plVar6 = (longlong *)FName::ToString(plVar5 + -2,local_58);
              uVar3 = (ulonglong)local_res18 >> 0x20;
              local_res18 = (void *)((ulonglong)local_res18 & 0xffffffff00000000);
              if (&local_168 != plVar6) {
                local_168 = *plVar6;
                *plVar6 = 0;
                local_res10[0] = *(int *)((longlong)plVar6 + 0xc);
                iVar19 = (int)plVar6[1];
                local_res18 = (void *)CONCAT44((int)uVar3,local_res10[0]);
                plVar6[1] = 0;
                local_15c = local_res10[0];
                iVar4 = local_res10[0];
              }
              iVar13 = iVar4;
              if (local_58[0] != 0) {
                FMemory::Free();
                iVar13 = (int)local_res18;
              }
              local_e8 = 0;
              if (*plVar5 != 0) {
                local_160 = (2 - (uint)(iVar19 != 0)) + iVar19;
                if (iVar13 < local_160) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,iVar19);
                  local_res10[0] = local_15c;
                  iVar4 = local_15c;
                }
                iVar13 = local_160;
                lVar9 = local_168;
                puVar14 = (undefined2 *)
                          (local_168 + ((longlong)iVar19 - (ulonglong)(iVar19 != 0)) * 2);
                *puVar14 = 0x2e;
                puVar14[1] = 0;
                puVar11 = (undefined8 *)FName::ToString(plVar5,local_b8);
                local_e0 = (void *)*puVar11;
                local_res20 = *(int *)(puVar11 + 1) + -1;
                if (*(int *)(puVar11 + 1) == 0) {
                  local_res20 = 0;
                }
                lVar15 = local_b8[0];
                iVar19 = iVar13;
                if (local_res20 != 0) {
                  local_res18 = (void *)CONCAT44(local_res18._4_4_,iVar13);
                  local_160 = iVar13 + (uint)(iVar13 == 0) + local_res20;
                  if (iVar4 < local_160) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168);
                    local_res10[0] = local_15c;
                    lVar9 = local_168;
                    iVar13 = (int)local_res18;
                  }
                  iVar19 = local_160;
                  pvVar2 = (void *)(lVar9 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
                  lVar9 = (longlong)local_res20;
                  _guard_xfg_dispatch_icall_nop(pvVar2,local_e0,lVar9 * 2);
                  *(undefined2 *)(lVar9 * 2 + (longlong)pvVar2) = 0;
                  lVar15 = local_b8[0];
                  iVar4 = local_res10[0];
                }
                goto LAB_1422c73e4;
              }
            }
            else {
              local_f0 = 0;
              if (lVar9 == 0) {
                local_110 = 0;
                local_108 = 0;
              }
              else {
                local_108 = *plVar5;
                local_110 = lVar9;
              }
              plVar6 = (longlong *)FPrimaryAssetId::ToString(&local_110,local_68);
              lVar15 = local_68[0];
              if (&local_168 != plVar6) {
                local_168 = *plVar6;
                *plVar6 = 0;
                iVar4 = *(int *)((longlong)plVar6 + 0xc);
                iVar19 = (int)plVar6[1];
                plVar6[1] = 0;
                local_15c = iVar4;
              }
LAB_1422c73e4:
              if (lVar15 != 0) {
                FMemory::Free();
              }
            }
            if (plVar5[1] != 0) {
              local_160 = (3 - (uint)(iVar19 != 0)) + iVar19;
              if (iVar4 < local_160) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,iVar19);
                iVar4 = local_15c;
              }
              iVar13 = local_160;
              puVar1 = (undefined4 *)(local_168 + ((longlong)iVar19 - (ulonglong)(iVar19 != 0)) * 2)
              ;
              *puVar1 = 0x3a003a;
              *(undefined2 *)(puVar1 + 1) = 0;
              puVar8 = (ulonglong *)FName::ToString(plVar5 + 1,local_a8);
              local_res18 = (void *)*puVar8;
              local_res10[0] = (int)puVar8[1] + -1;
              if ((int)puVar8[1] == 0) {
                local_res10[0] = 0;
              }
              if (local_res10[0] != 0) {
                local_160 = iVar13 + (uint)(iVar13 == 0) + local_res10[0];
                if (iVar4 < local_160) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,iVar13);
                }
                pvVar2 = (void *)(local_168 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
                lVar9 = (longlong)local_res10[0];
                _guard_xfg_dispatch_icall_nop(pvVar2,local_res18,lVar9 * 2);
                *(undefined2 *)(lVar9 * 2 + (longlong)pvVar2) = 0;
              }
              if (local_a8[0] != 0) {
                FMemory::Free();
              }
            }
            lVar9 = local_168;
            FString::PrintfImpl(&local_148,L"\t\"%s\" -> \"%s\";");
            uVar3 = local_150;
            lVar15 = (longlong)(int)local_150;
            iVar4 = (int)local_150 + 1;
            local_150 = CONCAT44(local_150._4_4_,iVar4);
            if (local_150._4_4_ < iVar4) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_158,uVar3 & 0xffffffff);
            }
            plVar6 = local_158 + lVar15 * 2;
            *plVar6 = 0;
            *plVar6 = local_148;
            *(undefined4 *)(plVar6 + 1) = (undefined4)local_140;
            *(undefined4 *)((longlong)plVar6 + 0xc) = local_140._4_4_;
            local_140 = 0;
            local_148 = 0;
            if (lVar9 != 0) {
              FMemory::Free(lVar9);
            }
            plVar12 = plVar5 + 3;
            puVar11 = local_118;
            uVar10 = local_128;
            puVar16 = local_d0;
            plVar6 = local_c8;
            uVar18 = local_120;
            plVar5 = plVar5 + 5;
          } while (plVar12 != local_d8);
        }
        if (local_138 != (longlong *)0x0) {
          FMemory::Free(local_138);
        }
        puVar11 = puVar11 + 2;
        plVar5 = local_c0;
        local_118 = puVar11;
      } while (puVar11 != puVar16);
    }
    puVar14 = &DAT_143f3eda8;
    local_138 = (longlong *)0x0;
    local_130 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    plVar6 = local_138;
    FGenericPlatformString::Memcpy(local_138,&DAT_145027a34,4);
    uVar3 = local_150;
    lVar9 = (longlong)(int)local_150;
    iVar4 = (int)local_150 + 1;
    local_150 = CONCAT44(local_150._4_4_,iVar4);
    if (local_150._4_4_ < iVar4) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_158,uVar3 & 0xffffffff);
    }
    plVar12 = local_158 + lVar9 * 2;
    *plVar12 = (longlong)plVar6;
    *(int *)(plVar12 + 1) = (int)local_130;
    *(undefined4 *)((longlong)plVar12 + 0xc) = local_130._4_4_;
    uVar10 = FDateTime::Now(local_res10);
    puVar11 = (undefined8 *)FDateTime::ToString(uVar10,local_b8);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar17 = &DAT_143f3eda8;
    }
    else {
      puVar17 = (undefined2 *)*puVar11;
    }
    if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
      puVar14 = *(undefined2 **)*param_1;
    }
    FString::PrintfImpl(local_a8,L"ReferencersForPackage%s%s.gv",puVar14,puVar17);
    (**(code **)(*plVar5 + 0x448))(plVar5,local_a8,&local_158);
    if (local_b8[0] != 0) {
      FMemory::Free();
    }
    plVar6 = local_158;
    for (iVar4 = (int)local_150; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free(local_158);
    }
  }
  return;
}



// FUNCTION 1422c7750 Empty body=107 status=ok
// SIG undefined Empty(void)

void TIndirectArray<FStreamedAudioChunk,FDefaultAllocator>::Empty(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    FUntypedBulkData::~FUntypedBulkData(*plVar1 + 8);
    FMemory::Free(*plVar1);
    plVar1 = plVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 1422c77c0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>,TDefaultMapHashableKeyFuncs<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1422c7840 Empty body=451 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_1422c7911;
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
LAB_1422c7911:
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
      lVar5 = (longlong)iStack_2c * 0x60 + *param_1;
      *(undefined4 *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FGraphicsMinimalPipelineStateInitializer>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FGraphicsMinimalPipelineStateInitializer>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (lVar5 + 8);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
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


