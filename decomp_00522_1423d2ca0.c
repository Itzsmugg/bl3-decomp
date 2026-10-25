// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1423d2ca0 FUN_1423d2ca0 body=188 status=ok
// SIG undefined FUN_1423d2ca0(void)

undefined8 FUN_1423d2ca0(longlong *param_1,int param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  *param_3 = 0;
  lVar3 = param_1[0xe5];
  if (((lVar3 != 0) && (plVar2 = *(longlong **)(lVar3 + 0x38), plVar2 != (longlong *)0x0)) &&
     (-1 < param_2)) {
    iVar1 = *(int *)(lVar3 + 0xa8);
    if ((-1 < iVar1) && (iVar1 < (int)plVar2[1])) {
      iVar6 = 0;
      iVar7 = 0;
      lVar3 = *(longlong *)(*plVar2 + (longlong)iVar1 * 8);
      iVar1 = *(int *)(lVar3 + 0x480);
      if (0 < iVar1) {
        puVar5 = *(undefined4 **)(lVar3 + 0x478);
        lVar3 = 0;
        do {
          if (*(char *)(puVar5 + 5) != '\0') {
            iVar6 = iVar6 + puVar5[2];
            if (param_2 < iVar6) {
              uVar4 = (**(code **)(*param_1 + 0x560))(param_1,*puVar5);
              *param_3 = iVar7;
              return uVar4;
            }
          }
          iVar7 = iVar7 + 1;
          lVar3 = lVar3 + 1;
          puVar5 = puVar5 + 6;
        } while (lVar3 < iVar1);
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1423d2d80 FUN_1423d2d80 body=142 status=ok
// SIG undefined FUN_1423d2d80(void)

longlong * FUN_1423d2d80(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *(longlong *)(param_1 + 0x728);
  if ((lVar2 != 0) && (uVar6 = uVar5, 0 < *(int *)(lVar2 + 0x78))) {
    do {
      iVar1 = (int)param_2[1];
      lVar3 = *(longlong *)(lVar2 + 0x70);
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar3 + 8 + uVar6);
      uVar6 = uVar6 + 0x30;
    } while ((int)uVar4 < *(int *)(lVar2 + 0x78));
  }
  return param_2;
}



// FUNCTION 1423d2e10 FUN_1423d2e10 body=125 status=ok
// SIG undefined FUN_1423d2e10(void)

undefined8 FUN_1423d2e10(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (param_1[0xe5] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x560))();
    *param_3 = lVar1;
    lVar1 = UStaticMesh::GetUVChannelData(param_1[0xe5],param_2);
    param_3[1] = lVar1;
    *(undefined4 *)(param_3 + 2) = 0xffff0000;
  }
  if (((*param_3 != 0) && (param_3[1] != 0)) && ((int)param_3[2] != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1423d2eb0 FUN_1423d2eb0 body=1125 status=ok
// SIG undefined FUN_1423d2eb0(void)

void FUN_1423d2eb0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte local_res8 [8];
  byte *local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  longlong *local_e0;
  byte local_bf;
  undefined8 local_58;
  byte **local_50;
  undefined8 local_48;
  
  lVar2 = *(longlong *)(param_1 + -0x80);
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x28))(lVar2 + 0x28);
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  if ((lVar2 != 0) &&
     (((*(int *)(lVar2 + 0xfc) == *(int *)(param_1 + 0x94) &&
       *(int *)(lVar2 + 0xf8) == *(int *)(param_1 + 0x90)) &&
      *(int *)(lVar2 + 0xf4) == *(int *)(param_1 + 0x8c)) &&
      *(int *)(lVar2 + 0xf0) == *(int *)(param_1 + 0x88))) {
    iVar9 = 0;
    local_f8 = (byte *)0x0;
    local_f0 = 0;
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_f8,0x100);
    FArchive::FArchive(&local_e8);
    local_58 = 0;
    local_e8 = &PTR_FUN_143f4a100;
    local_50 = &local_f8;
    iVar8 = 0;
    local_48 = 0;
    FArchive::SetIsSaving(&local_e8,1);
    FArchive::SetIsPersistent(&local_e8,0);
    FUN_1406da970(&local_e8,param_1 + 8);
    FUN_1406da970(&local_e8,param_1 + 0x14);
    FUN_140d66f10(&local_e8,param_1 + 0x20);
    if ((undefined4 *)local_e0[1] < (undefined4 *)*local_e0 + 1) {
      (*(code *)local_e8[10])(&local_e8,param_1 + 0x28,4);
      if ((local_bf & 0x10) != 0) {
        FArchive::ByteSwap(&local_e8,param_1 + 0x28,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)*local_e0;
      *local_e0 = *local_e0 + 4;
    }
    FUN_140d66f10(&local_e8,param_1 + 0x2c);
    FUN_1406da970(&local_e8,param_1 + 0x34);
    FUN_1406da970(&local_e8,param_1 + 0x40);
    FUN_140d66f10(&local_e8,param_1 + 0x4c);
    if ((undefined4 *)local_e0[1] < (undefined4 *)*local_e0 + 1) {
      (*(code *)local_e8[10])(&local_e8,param_1 + 0x54,4);
      if ((local_bf & 0x10) != 0) {
        FArchive::ByteSwap(&local_e8,param_1 + 0x54,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)*local_e0;
      *local_e0 = *local_e0 + 4;
    }
    FUN_140d66f10(&local_e8,param_1 + 0x58);
    FUN_1406da970(&local_e8,param_1 + 0x60);
    local_res8[0] = (byte)(*(uint *)(param_1 + 0x6c) >> 1) & 1;
    (*(code *)local_e8[1])(&local_e8,local_res8);
    if ((undefined1 *)local_e0[1] < (undefined1 *)*local_e0 + 1) {
      (*(code *)local_e8[10])(&local_e8,(undefined1 *)(param_1 + 0x70),1);
    }
    else {
      *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)*local_e0;
      *local_e0 = *local_e0 + 1;
    }
    puVar1 = (undefined4 *)(param_1 + 0x74);
    if ((undefined4 *)local_e0[1] < (undefined4 *)*local_e0 + 1) {
      (*(code *)local_e8[10])(&local_e8,puVar1,4);
      if ((local_bf & 0x10) != 0) {
        FArchive::ByteSwap(&local_e8,puVar1,4);
      }
    }
    else {
      *puVar1 = *(undefined4 *)*local_e0;
      *local_e0 = *local_e0 + 4;
    }
    if ((undefined4 *)local_e0[1] < (undefined4 *)*local_e0 + 1) {
      (*(code *)local_e8[10])(&local_e8,param_1 + 0x78,4);
      if ((local_bf & 0x10) != 0) {
        FArchive::ByteSwap(&local_e8,param_1 + 0x78,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)*local_e0;
      *local_e0 = *local_e0 + 4;
    }
    pbVar10 = local_f8;
    iVar4 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar4 = iVar8;
    }
    if (*(int *)((longlong)param_2 + 0xc) < (int)local_f0 + 2 + iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2);
    }
    if (0 < (int)local_f0) {
      do {
        bVar5 = *pbVar10;
        sVar6 = 0x37;
        bVar3 = bVar5 >> 4;
        if (bVar3 < 10) {
          sVar6 = 0x30;
        }
        sVar6 = sVar6 + (ushort)bVar3;
        if (sVar6 != 0) {
          iVar4 = (int)param_2[1];
          iVar7 = iVar4 + -1;
          if (iVar4 < 1) {
            iVar7 = iVar8;
          }
          iVar4 = (iVar4 < 1) + 1 + iVar4;
          *(int *)(param_2 + 1) = iVar4;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
          }
          *(short *)(*param_2 + (longlong)iVar7 * 2) = sVar6;
          *(undefined2 *)(*param_2 + 2 + (longlong)iVar7 * 2) = 0;
        }
        bVar5 = bVar5 & 0xf;
        sVar6 = 0x37;
        if (bVar5 < 10) {
          sVar6 = 0x30;
        }
        sVar6 = sVar6 + (ushort)bVar5;
        if (sVar6 != 0) {
          iVar4 = (int)param_2[1];
          iVar7 = iVar4 + -1;
          if (iVar4 < 1) {
            iVar7 = iVar8;
          }
          iVar4 = (iVar4 < 1) + 1 + iVar4;
          *(int *)(param_2 + 1) = iVar4;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
          }
          *(short *)(*param_2 + (longlong)iVar7 * 2) = sVar6;
          *(undefined2 *)(*param_2 + 2 + (longlong)iVar7 * 2) = 0;
        }
        iVar9 = iVar9 + 1;
        pbVar10 = pbVar10 + 1;
      } while (iVar9 < (int)local_f0);
    }
    FArchive::~FArchive(&local_e8);
    if (local_f8 != (byte *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1423d3320 FUN_1423d3320 body=220 status=ok
// SIG undefined FUN_1423d3320(void)

longlong FUN_1423d3320(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  if (((*(longlong *)(param_1 + 0x728) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x728) + 0x38), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x5c) != '\0' || (*(int *)(lVar1 + 8) == *(int *)(param_1 + 0x760))))) {
    if (*(longlong *)(param_2 + 6) != 0) {
      return *(longlong *)(param_2 + 6);
    }
    if ((((*(longlong *)(param_1 + 0x118) != 0) && (lVar1 = AActor::GetLevel(), lVar1 != 0)) &&
        (*(longlong *)(lVar1 + 0xc0) != 0)) &&
       (((lVar2 = FUN_14256ac50(), lVar2 != 0 && (*(longlong *)(lVar2 + 0x1f0) != 0)) ||
        (*(longlong *)(lVar1 + 0x1f0) != 0)))) {
      if (((param_3[3] == 0 && param_3[2] == 0) && param_3[1] == 0) && *param_3 == 0) {
        param_3 = param_2;
      }
      local_18 = *param_3;
      iStack_14 = param_3[1];
      iStack_10 = param_3[2];
      iStack_c = param_3[3];
      lVar1 = UMapBuildDataRegistry::GetMeshBuildData(local_18,&local_18);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1423d3420 FUN_1423d3420 body=90 status=ok
// SIG undefined FUN_1423d3420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423d3420(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_10 = DAT_1468b5d98;
    puVar2 = &local_18;
    local_18 = _DAT_1468b5d90;
  }
  else {
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0x458);
    puVar2 = (undefined8 *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_18);
  }
  uVar1 = *(undefined4 *)(puVar2 + 1);
  *param_2 = *puVar2;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1423d34a0 FUN_1423d34a0 body=134 status=ok
// SIG undefined FUN_1423d34a0(void)

void FUN_1423d34a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  float local_18;
  float fStack_14;
  float fStack_10;
  
  if (((*(longlong *)(param_1 + 0x458) != 0) &&
      (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x458) + 0x160), plVar1 != (longlong *)0x0))
     && ((local_18 = (float)*(undefined8 *)(param_1 + -0xa0), local_18 != 0.0 ||
         ((fStack_14 = (float)((ulonglong)*(undefined8 *)(param_1 + -0xa0) >> 0x20),
          fStack_14 != 0.0 ||
          (fStack_10 = (float)*(undefined8 *)(param_1 + -0x98), fStack_10 != 0.0)))))) {
    if ((*(byte *)(param_1 + 0x474) & 4) == 0) {
      bVar2 = *(byte *)(plVar1 + 5);
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x474) >> 3;
    }
    if ((bVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001423d351a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x288))(plVar1,param_2 + 0x70,param_1 + -0xc0);
      return;
    }
  }
  return;
}



// FUNCTION 1423d3530 FUN_1423d3530 body=92 status=ok
// SIG undefined FUN_1423d3530(void)

int * FUN_1423d3530(longlong param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FIndexedCurve::GetIndex(param_1,param_3);
  iVar1 = iVar1 + 1;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x68))) {
    FIndexedCurve::GetKeyHandle(param_1,param_2,iVar1);
    return param_2;
  }
  *param_2 = DAT_146531fa0 + 1;
  DAT_146531fa0 = DAT_146531fa0 + 1;
  return param_2;
}



// FUNCTION 1423d35b0 GetNumWantingResources body=87 status=ok
// SIG undefined GetNumWantingResources(void)

int FStreamingManagerCollection::GetNumWantingResources(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar3 = 0;
    do {
      iVar1 = (**(code **)(**(longlong **)(lVar3 + *(longlong *)(param_1 + 0x10)) + 0x80))();
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + iVar1;
    } while (iVar4 < *(int *)(param_1 + 0x18));
  }
  return iVar2;
}



// FUNCTION 1423d3610 GetNumWantingResourcesID body=111 status=ok
// SIG undefined GetNumWantingResourcesID(void)

int FStreamingManagerCollection::GetNumWantingResourcesID(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0x7fffffff;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar3 = 0;
    do {
      iVar1 = (**(code **)(**(longlong **)(lVar3 + *(longlong *)(param_1 + 0x10)) + 0x88))();
      lVar3 = lVar3 + 8;
      if (iVar2 <= iVar1) {
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x18));
    return iVar2;
  }
  return 0x7fffffff;
}



// FUNCTION 1423d3690 GetOwners body=60 status=ok
// SIG undefined GetOwners(void)

undefined8 * UCurveBase::GetOwners(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,0);
  *(longlong *)*param_2 = param_1 + -0x28;
  return param_2;
}



// FUNCTION 1423d36d0 FUN_1423d36d0 body=314 status=ok
// SIG undefined FUN_1423d36d0(void)

void FUN_1423d36d0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c4);
  uVar2 = *(undefined4 *)(param_1 + 0xa4);
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  *param_2 = *(undefined4 *)(param_1 + 0xa0);
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x1d0);
  uVar2 = *(undefined4 *)(param_1 + 0x104);
  uVar3 = *(undefined4 *)(param_1 + 0x108);
  param_2[4] = *(undefined4 *)(param_1 + 0x100);
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  param_2[7] = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(uint *)(param_1 + 0x50);
  *(ulonglong *)(param_2 + 8) =
       CONCAT44(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x30)) ^
       0x8000000080000000;
  param_2[10] = uVar4 ^ 0x80000000;
  *(ulonglong *)(param_2 + 0xb) = CONCAT44(uVar3,uVar2);
  param_2[0xd] = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 500);
  param_2[0xe] = *(undefined4 *)(param_1 + 0x1f0);
  param_2[0xf] = uVar1;
  param_2[0x10] = *(undefined4 *)(param_1 + 0x134);
  param_2[0x11] = *(undefined4 *)(param_1 + 0x1d4);
  param_2[0x12] = *(undefined4 *)(param_1 + 0x1d8);
  param_2[0x13] = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined8 *)(param_2 + 0x14) = DAT_146ac3d68;
  return;
}



// FUNCTION 1423d3820 FUN_1423d3820 body=566 status=ok
// SIG undefined FUN_1423d3820(void)

undefined1 * FUN_1423d3820(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  ulonglong uVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_a8 [4];
  undefined1 local_98 [144];
  
  if (*(longlong *)(param_1 + -0x80) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + -0x80) + 0x28) + 0x10))();
    local_a8[0] = 1.0;
    local_a8[1] = 1.0;
    local_a8[2] = 1.0;
    if (*(char *)(param_1 + 0x70) == '\0') {
      pfVar7 = local_a8;
    }
    else if (*(char *)(param_1 + 0x70) == '\x01') {
      pfVar7 = local_a8 + 1;
    }
    else {
      pfVar7 = local_a8 + 2;
    }
    pfVar10 = (float *)*param_2;
    *pfVar7 = 0.0;
    fVar6 = local_a8[2];
    fVar5 = local_a8[1];
    fVar4 = local_a8[0];
    uVar8 = (ulonglong)*(int *)(param_2 + 1);
    pfVar7 = pfVar10 + uVar8 * 3;
    for (; pfVar10 != pfVar7; pfVar10 = pfVar10 + 3) {
      fVar11 = *pfVar10;
      fVar12 = pfVar10[1];
      fVar13 = pfVar10[2];
      fVar15 = fVar11 * fVar4;
      if ((*(char *)(param_1 + 0x70) != '\0') &&
         (fVar11 = fVar13, *(char *)(param_1 + 0x70) == '\x01')) {
        fVar11 = fVar12;
      }
      pfVar9 = (float *)FUN_1423cba80(param_1 + -0x7a8,local_98,fVar11);
      fVar11 = *pfVar9;
      fVar1 = pfVar9[1];
      fVar2 = pfVar9[2];
      fVar3 = pfVar9[3];
      fVar15 = fVar15 * pfVar9[8];
      fVar16 = fVar12 * fVar5 * pfVar9[9];
      fVar17 = fVar13 * fVar6 * pfVar9[10];
      fVar12 = fVar17 * fVar1 - fVar16 * fVar2;
      fVar13 = fVar15 * fVar2 - fVar17 * fVar11;
      fVar14 = fVar16 * fVar11 - fVar15 * fVar1;
      fVar12 = fVar12 + fVar12;
      fVar13 = fVar13 + fVar13;
      fVar14 = fVar14 + fVar14;
      local_a8[2] = (fVar13 * fVar11 - fVar12 * fVar1) + fVar3 * fVar14 + fVar17 + pfVar9[6];
      uVar8 = (ulonglong)(uint)local_a8[2];
      *(ulonglong *)pfVar10 =
           CONCAT44((fVar12 * fVar2 - fVar14 * fVar11) + fVar3 * fVar13 + fVar16 + pfVar9[5],
                    (fVar14 * fVar1 - fVar13 * fVar2) + fVar3 * fVar12 + fVar15 + pfVar9[4]);
      pfVar10[2] = local_a8[2];
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
    return (undefined1 *)CONCAT71((int7)(uVar8 >> 8),1);
  }
  return &stack0x00000000;
}



// FUNCTION 1423d3a70 FUN_1423d3a70 body=1081 status=ok
// SIG undefined FUN_1423d3a70(void)

void FUN_1423d3a70(longlong param_1,longlong param_2,float *param_3,char param_4)

{
  float fVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_40;
  
  if (((((param_4 != '\0') || (*(longlong *)(param_1 + 0x470) == 0)) ||
       (*(int *)(param_1 + 0x4a0) < 1)) || ((*(byte *)(param_1 + 0x4a8) & 1) == 0)) &&
     ((*(char *)(param_2 + 0x24e) == '\0' || ((*(byte *)(param_1 + 0x4a8) & 2) != 0)))) {
    local_58 = *(int *)(param_2 + 0x220);
    iStack_54 = *(int *)(param_2 + 0x224);
    local_50 = *(undefined4 *)(param_2 + 0x228);
    local_40 = local_50;
    cVar3 = FUN_1428ca150(local_58,&local_58,0);
    if (cVar3 != '\0') {
      FUN_14238b720(param_2,&local_58);
      pfVar13 = (float *)0x0;
      fVar14 = *(float *)(param_2 + 0x1e8) + *(float *)(param_2 + 0x1e8);
      if (DAT_146531ee8 != DAT_146531f14) {
        puVar5 = DAT_146531f20;
        if (DAT_146531f20 == (undefined *)0x0) {
          puVar5 = &DAT_146531f18;
        }
        iVar2 = *(int *)(puVar5 + ((longlong)(iStack_54 + local_58) & (longlong)DAT_146531f28 - 1U)
                                  * 4);
        while (iVar2 != -1) {
          lVar8 = (longlong)iVar2;
          if (*(longlong *)(DAT_146531ee0 + lVar8 * 0x18) == CONCAT44(iStack_54,local_58)) {
            pfVar11 = (float *)(DAT_146531ee0 + lVar8 * 0x18);
            if (iVar2 != -1) goto LAB_1423d3bb5;
            break;
          }
          iVar2 = *(int *)(DAT_146531ee0 + 0x10 + lVar8 * 0x18);
        }
      }
      pfVar11 = pfVar13;
LAB_1423d3bb5:
      pfVar6 = pfVar11 + 2;
      if (pfVar11 == (float *)0x0) {
        pfVar6 = pfVar13;
      }
      if (pfVar6 == (float *)0x0) {
        fVar19 = 1.0;
      }
      else {
        fVar19 = *pfVar6;
      }
      cVar3 = *(char *)(param_1 + 0x490);
      fVar18 = 0.0;
      if (cVar3 == '\x01') {
        pfVar11 = *(float **)(param_1 + 0x498);
        fVar17 = 3.4028235e+38;
        pfVar13 = pfVar11 + (longlong)*(int *)(param_1 + 0x4a0) * 2;
        for (; pfVar11 != pfVar13; pfVar11 = pfVar11 + 2) {
          if (ABS(fVar14 - *pfVar11) < fVar17) {
            fVar18 = pfVar11[1];
            fVar17 = ABS(fVar14 - *pfVar11);
          }
        }
      }
      else if (cVar3 == '\0') {
        pfVar11 = *(float **)(param_1 + 0x498);
        fVar17 = 3.4028235e+38;
        pfVar13 = pfVar11 + (longlong)*(int *)(param_1 + 0x4a0) * 2;
        for (; pfVar11 != pfVar13; pfVar11 = pfVar11 + 2) {
          fVar15 = ABS(fVar14 - *pfVar11);
          if ((fVar15 < fVar17) && (fVar14 <= *pfVar11)) {
            fVar18 = pfVar11[1];
            fVar17 = fVar15;
          }
        }
      }
      else if (cVar3 == '\x02') {
        fVar15 = 3.4028235e+38;
        pfVar11 = (float *)0xffffffff;
        iVar2 = *(int *)(param_1 + 0x4a0);
        fVar17 = 3.4028235e+38;
        uVar9 = 0xffffffff;
        if (3 < iVar2) {
          pfVar6 = (float *)(*(longlong *)(param_1 + 0x498) + 0x10);
          uVar4 = 2;
          do {
            fVar1 = pfVar6[-4];
            fVar16 = ABS(fVar14 - fVar1);
            if ((fVar16 < fVar15) && (fVar14 <= fVar1)) {
              fVar15 = fVar16;
              uVar9 = (uint)pfVar13;
            }
            if ((fVar16 < fVar17) && (fVar1 <= fVar14)) {
              pfVar11 = pfVar13;
              fVar17 = fVar16;
            }
            fVar1 = pfVar6[-2];
            fVar16 = ABS(fVar14 - fVar1);
            if ((fVar16 < fVar15) && (fVar14 <= fVar1)) {
              uVar9 = uVar4 - 1;
              fVar15 = fVar16;
            }
            if ((fVar16 < fVar17) && (fVar1 <= fVar14)) {
              pfVar11 = (float *)(ulonglong)(uVar4 - 1);
              fVar17 = fVar16;
            }
            fVar1 = *pfVar6;
            fVar16 = ABS(fVar14 - fVar1);
            if ((fVar16 < fVar15) && (fVar14 <= fVar1)) {
              fVar15 = fVar16;
              uVar9 = uVar4;
            }
            if ((fVar16 < fVar17) && (fVar1 <= fVar14)) {
              pfVar11 = (float *)(ulonglong)uVar4;
              fVar17 = fVar16;
            }
            fVar1 = pfVar6[2];
            fVar16 = ABS(fVar14 - fVar1);
            if ((fVar16 < fVar15) && (fVar14 <= fVar1)) {
              uVar9 = uVar4 + 1;
              fVar15 = fVar16;
            }
            if ((fVar16 < fVar17) && (fVar1 <= fVar14)) {
              pfVar11 = (float *)(ulonglong)(uVar4 + 1);
              fVar17 = fVar16;
            }
            pfVar6 = pfVar6 + 8;
            uVar12 = (uint)pfVar13 + 4;
            pfVar13 = (float *)(ulonglong)uVar12;
            uVar4 = uVar4 + 4;
          } while ((int)uVar12 < iVar2 + -3);
        }
        iVar10 = (int)pfVar11;
        if ((int)pfVar13 < iVar2) {
          pfVar6 = (float *)(*(longlong *)(param_1 + 0x498) + (longlong)(int)pfVar13 * 8);
          do {
            fVar1 = *pfVar6;
            fVar16 = ABS(fVar14 - fVar1);
            if ((fVar16 < fVar15) && (fVar14 <= fVar1)) {
              fVar15 = fVar16;
              uVar9 = (uint)pfVar13;
            }
            if ((fVar16 < fVar17) && (fVar1 <= fVar14)) {
              pfVar11 = pfVar13;
              fVar17 = fVar16;
            }
            iVar10 = (int)pfVar11;
            pfVar6 = pfVar6 + 2;
            uVar4 = (uint)pfVar13 + 1;
            pfVar13 = (float *)(ulonglong)uVar4;
          } while ((int)uVar4 < iVar2);
        }
        if ((iVar10 != -1) && (uVar9 != 0xffffffff)) {
          lVar8 = *(longlong *)(param_1 + 0x498);
          lVar7 = (longlong)(int)uVar9;
          fVar18 = *(float *)(lVar8 + (longlong)iVar10 * 8);
          fVar17 = *(float *)(lVar8 + lVar7 * 8) - fVar18;
          if (fVar17 <= 0.0) {
            fVar18 = *(float *)(lVar8 + 4 + lVar7 * 8);
          }
          else {
            fVar17 = (fVar14 - fVar18) / fVar17;
            fVar18 = (1.0 - fVar17) * *(float *)(lVar8 + 4 + (longlong)iVar10 * 8) +
                     fVar17 * *(float *)(lVar8 + 4 + lVar7 * 8);
          }
        }
      }
      fVar14 = *param_3;
      fVar18 = fVar18 * fVar19;
      if (fVar14 <= 0.0) {
        *param_3 = fVar18;
      }
      else {
        if (fVar18 <= fVar14) {
          fVar14 = fVar18;
        }
        *param_3 = fVar14;
      }
    }
  }
  return;
}



// FUNCTION 1423d3eb0 FUN_1423d3eb0 body=585 status=ok
// SIG undefined FUN_1423d3eb0(void)

void FUN_1423d3eb0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
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
  
  if (((param_1[0x8e] != 0) && (0 < (int)param_1[0x94])) && ((*(byte *)(param_1 + 0x95) & 1) != 0))
  {
    puVar1 = (uint *)(param_2 + 2);
    uVar2 = *(uint *)(param_2 + 5);
    local_88 = 0;
    uStack_84 = 1;
    uStack_74 = 0;
    iStack_70 = 0;
    if (uVar2 != 0) {
      puVar9 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      uVar3 = *puVar9;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar3 == 0) {
        lVar6 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        iVar7 = local_88 + 1;
        bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar7;
        if (bVar4) goto LAB_1423d3fab;
        uVar3 = puVar9[lVar6 + 1];
      }
      uStack_84 = -uVar3 & uVar3;
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
      if ((int)uVar2 < (int)uStack_74) {
LAB_1423d3fab:
        uStack_74 = uVar2;
      }
    }
    uVar3 = *(uint *)(param_2 + 5);
    uStack_50 = 0xffffffff;
    uStack_4c = uStack_74;
    local_48 = CONCAT44(uStack_6c,iStack_70);
    uStack_38 = CONCAT44(uStack_84,local_88);
    uVar8 = uVar3 & 0xffffffe0;
    iStack_60 = local_88;
    uStack_5c = uStack_84;
    local_58 = puVar1;
    local_40 = param_2;
    puStack_30 = puVar1;
    uStack_20 = local_48;
    uStack_28 = uStack_50;
    uStack_24 = uStack_4c;
    uStack_74 = uVar3;
    if (uVar3 != uVar2) {
      puVar9 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      uVar5 = puVar9[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
      iVar7 = (int)uVar3 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_1423d4073;
        uVar5 = puVar9[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar7 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_74 = (uVar8 - iVar7) + 0x1f;
      if ((int)uVar2 < (int)uStack_74) {
LAB_1423d4073:
        uStack_74 = uVar2;
      }
    }
    while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
      (**(code **)(*param_1 + 0x728))
                (param_1,*(undefined8 *)(*param_2 + (longlong)(int)uStack_4c * 0x18),
                 *param_2 + 8 + (longlong)(int)uStack_4c * 0x18,1);
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    }
  }
  return;
}



// FUNCTION 1423d4100 FUN_1423d4100 body=1041 status=ok
// SIG undefined FUN_1423d4100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1423d4100(longlong param_1,float *param_2)

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
  char cVar14;
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
  
  cVar14 = FText::IsEmpty(param_1 + 0x6f0);
  fVar13 = fRam0000000146af122c;
  fVar12 = _DAT_1464aa80c;
  fVar11 = fRam00000001464aa804;
  fVar10 = _DAT_1464aa800;
  fVar9 = fRam00000001464aa7fc;
  fVar8 = DAT_1464aa7f8;
  fVar7 = DAT_1464aa7f4;
  fVar6 = DAT_1464aa7f0;
  fVar5 = fRam00000001464aa7ec;
  fVar4 = DAT_1464aa7e4;
  if ((cVar14 == '\0') && (*(longlong *)(param_1 + 0x710) != 0)) {
    fVar27 = *(float *)(param_1 + 0x744) + fRam00000001464aa808;
    fVar1 = *(float *)(param_1 + 0x210);
    fVar2 = *(float *)(param_1 + 0x214);
    fVar3 = *(float *)(param_1 + 0x218);
    fVar15 = *(float *)(param_1 + 0x21c);
    fVar19 = fVar2 + fVar2;
    fVar22 = fVar3 + fVar3;
    fVar36 = fVar1 * (fVar1 + fVar1);
    fVar35 = fVar15 * (fVar1 + fVar1);
    fVar16 = *(float *)(param_1 + 0x230);
    fVar17 = *(float *)(param_1 + 0x234);
    fVar18 = *(float *)(param_1 + 0x238);
    fVar43 = (fVar15 * fVar22 + fVar1 * fVar19) * fVar16;
    fVar44 = (fVar35 + fVar2 * fVar22) * fVar17;
    fVar45 = (fVar15 * fVar19 + fVar1 * fVar22) * fVar18;
    fVar37 = fVar17 * (fVar1 * fVar19 - fVar15 * fVar22);
    fVar38 = fVar18 * (fVar2 * fVar22 - fVar35);
    fVar39 = fVar16 * (fVar1 * fVar22 - fVar15 * fVar19);
    fVar28 = (float)((uint)((_DAT_146af1220 - (fVar3 * fVar22 + fVar2 * fVar19)) * fVar16) &
                    _DAT_146af1230);
    fVar29 = (float)((uint)((fRam0000000146af1224 - (fVar3 * fVar22 + fVar36)) * fVar17) &
                    uRam0000000146af1234);
    fVar31 = (float)((uint)((fRam0000000146af1228 - (fVar2 * fVar19 + fVar36)) * fVar18) &
                    uRam0000000146af1238);
    fVar33 = (float)((uint)((fRam0000000146af122c - (fVar36 + fVar36)) * *(float *)(param_1 + 0x23c)
                           ) & uRam0000000146af123c);
    fVar1 = *(float *)(param_1 + 0x220);
    fVar2 = *(float *)(param_1 + 0x224);
    fVar3 = *(float *)(param_1 + 0x228);
    fVar30 = DAT_1464aa7d4 * fVar29;
    fVar32 = DAT_1464aa7d4 * fVar44;
    fVar34 = DAT_1464aa7d4 * fVar33;
    fVar16 = DAT_1464aa7d0 * fVar43;
    fVar18 = DAT_1464aa7d0 * fVar39;
    fVar22 = DAT_1464aa7d0 * fVar33;
    fVar20 = DAT_1464aa7d8 * fVar38;
    fVar23 = DAT_1464aa7d8 * fVar31;
    fVar25 = DAT_1464aa7d8 * fVar33;
    fVar40 = fRam00000001464aa7dc * fVar2;
    fVar41 = fRam00000001464aa7dc * fVar3;
    fVar42 = fRam00000001464aa7dc * fRam0000000146af122c;
    fVar15 = DAT_1464aa7e0 * fVar28;
    fVar17 = DAT_1464aa7e0 * fVar43;
    fVar19 = DAT_1464aa7e0 * fVar39;
    fVar35 = DAT_1464aa7e0 * fVar33;
    fVar36 = DAT_1464aa7e8 * fVar45;
    fVar21 = DAT_1464aa7e8 * fVar38;
    fVar24 = DAT_1464aa7e8 * fVar31;
    fVar26 = DAT_1464aa7e8 * fVar33;
    *param_2 = DAT_1464aa7d4 * fVar37 + DAT_1464aa7d0 * fVar28 + DAT_1464aa7d8 * fVar45 +
               fRam00000001464aa7dc * fVar1;
    param_2[1] = fVar30 + fVar16 + fVar20 + fVar40;
    param_2[2] = fVar32 + fVar18 + fVar23 + fVar41;
    param_2[3] = fVar34 + fVar22 + fVar25 + fVar42;
    param_2[4] = fVar4 * fVar37 + fVar15 + fVar36 + fVar5 * fVar1;
    param_2[5] = fVar4 * fVar29 + fVar17 + fVar21 + fVar5 * fVar2;
    param_2[6] = fVar4 * fVar44 + fVar19 + fVar24 + fVar5 * fVar3;
    param_2[7] = fVar4 * fVar33 + fVar35 + fVar26 + fVar5 * fVar13;
    param_2[8] = fVar7 * fVar37 + fVar6 * fVar28 + fVar8 * fVar45 + fVar9 * fVar1;
    param_2[9] = fVar7 * fVar29 + fVar6 * fVar43 + fVar8 * fVar38 + fVar9 * fVar2;
    param_2[10] = fVar7 * fVar44 + fVar6 * fVar39 + fVar8 * fVar31 + fVar9 * fVar3;
    param_2[0xb] = fVar7 * fVar33 + fVar6 * fVar33 + fVar8 * fVar33 + fVar9 * fVar13;
    param_2[0xc] = fVar11 * fVar37 + fVar10 * fVar28 + fVar27 * fVar45 + fVar12 * fVar1;
    param_2[0xd] = fVar11 * fVar29 + fVar10 * fVar43 + fVar27 * fVar38 + fVar12 * fVar2;
    param_2[0xe] = fVar11 * fVar44 + fVar10 * fVar39 + fVar27 * fVar31 + fVar12 * fVar3;
    param_2[0xf] = fVar11 * fVar33 + fVar10 * fVar33 + fVar27 * fVar33 + fVar12 * fVar13;
  }
  else {
    FUN_14238d230(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 1423d4520 GetRichCurve body=18 status=ok
// SIG undefined GetRichCurve(void)

longlong FRuntimeFloatCurve::GetRichCurve(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    return *(longlong *)(param_1 + 0x70) + 0x30;
  }
  return param_1;
}



// FUNCTION 1423d4560 FUN_1423d4560 body=19 status=ok
// SIG undefined FUN_1423d4560(void)

longlong FUN_1423d4560(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x728);
  if (lVar1 == 0) {
    return 0;
  }
  lVar3 = 0;
  if ((param_2 != 0) && (0 < *(int *)(lVar1 + 0xf0))) {
    plVar4 = *(longlong **)(lVar1 + 0xe8);
    do {
      lVar2 = *plVar4;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x28) == param_2)) {
        return lVar2;
      }
      lVar3 = lVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (lVar3 < *(int *)(lVar1 + 0xf0));
  }
  return 0;
}



// FUNCTION 1423d4580 FUN_1423d4580 body=4549 status=ok
// SIG undefined FUN_1423d4580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1423d4580(longlong param_1,float *param_2,longlong param_3,int param_4)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  float *pfVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar28 [16];
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
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
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [4];
  undefined1 auStack_144 [4];
  undefined8 uStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_1b8 = (float *)0x0;
  if (((param_3 != 0) && (*(longlong *)(param_1 + 0x728) != 0)) &&
     (lVar14 = FUN_14281be90(*(longlong *)(param_1 + 0x728),param_3), lVar14 != 0)) {
    cVar12 = *(char *)(param_1 + 0x818);
    if (cVar12 == '\0') {
      fVar50 = 0.0;
      fVar53 = 1.0;
      fVar54 = 1.0;
    }
    else if (cVar12 == '\x01') {
      fVar50 = 1.0;
      fVar53 = 0.0;
      fVar54 = 1.0;
    }
    else {
      fVar50 = DAT_1468b5d90;
      fVar53 = DAT_1468b5d94;
      fVar54 = DAT_1468b5d98;
      if (cVar12 == '\x02') {
        fVar50 = 1.0;
        fVar53 = 1.0;
        fVar54 = 0.0;
      }
    }
    fVar50 = fVar50 * *(float *)(lVar14 + 0x30);
    local_1b8 = (float *)(lVar14 + 0x34);
    fVar54 = fVar54 * *(float *)(lVar14 + 0x38);
    fVar53 = fVar53 * *local_1b8;
    FRotator::Quaternion(lVar14 + 0x3c,local_168);
    fVar35 = *(float *)(lVar14 + 0x50);
    pauVar1 = (undefined1 (*) [12])(lVar14 + 0x48);
    fVar26 = *(float *)*pauVar1;
    uVar10 = local_168._0_4_;
    uVar11 = local_168._4_4_;
    fVar37 = fStack_160;
    fVar49 = fStack_15c;
    fVar32 = *(float *)(lVar14 + 0x4c);
    auVar5 = *pauVar1;
    fStack_15c = 0.0;
    _local_168 = *pauVar1;
    if (*(char *)(param_1 + 0x818) == '\0') {
      pfVar15 = (float *)(lVar14 + 0x30);
    }
    else {
      pfVar15 = (float *)(lVar14 + 0x38);
      if (*(char *)(param_1 + 0x818) == '\x01') {
        pfVar15 = local_1b8;
      }
    }
    pfVar15 = (float *)FUN_1423cba80(param_1,&local_118,*pfVar15);
    fVar27 = fRam0000000146af1228;
    fVar33 = fRam0000000146af1224;
    fVar42 = _DAT_146af1220;
    auVar18._12_4_ = 0;
    auVar18._0_12_ = auVar5;
    auVar19 = *(undefined1 (*) [16])(pfVar15 + 8);
    fVar61 = auVar19._0_4_;
    fVar62 = auVar19._4_4_;
    fVar63 = auVar19._8_4_;
    fVar36 = auVar19._12_4_;
    fVar25 = *pfVar15;
    fVar34 = pfVar15[1];
    fVar31 = pfVar15[2];
    fVar41 = pfVar15[3];
    auVar19 = minps(auVar18,auVar19);
    local_1b8._0_4_ = _DAT_146af12a0;
    local_1b8._4_4_ = fRam0000000146af12a4;
    fStack_1b0 = fRam0000000146af12a8;
    fStack_1ac = fRam0000000146af12ac;
    auVar20._4_4_ = -(uint)(auVar19._4_4_ < fRam0000000146af12a4);
    auVar20._0_4_ = -(uint)(auVar19._0_4_ < _DAT_146af12a0);
    auVar20._8_4_ = -(uint)(auVar19._8_4_ < fRam0000000146af12a8);
    auVar20._12_4_ = -(uint)(auVar19._12_4_ < fRam0000000146af12ac);
    iVar13 = movmskps((int)pfVar15,auVar20);
    if (iVar13 == 0) {
      fVar50 = fVar50 * fVar61;
      fVar53 = fVar53 * fVar62;
      fVar54 = fVar54 * fVar63;
      fVar42 = fVar36 * 0.0;
      fVar64 = (float)local_168._0_4_ * fVar61;
      fVar65 = (float)local_168._4_4_ * fVar62;
      fVar66 = fStack_160 * fVar63;
      fVar67 = fStack_15c * fVar36;
      fVar61 = fVar25 * fVar49 * _DAT_146af1260 + fVar41 * (float)uVar10 +
               fVar34 * fVar37 * _DAT_146af1250 + fVar31 * (float)uVar11 * _DAT_146af1240;
      fVar62 = fVar25 * fVar37 * fRam0000000146af1264 + fVar41 * (float)uVar11 +
               fVar34 * fVar49 * fRam0000000146af1254 +
               fVar31 * (float)uVar10 * fRam0000000146af1244;
      fVar63 = fVar25 * (float)uVar11 * fRam0000000146af1268 + fVar41 * fVar37 +
               fVar34 * (float)uVar10 * fRam0000000146af1258 +
               fVar31 * fVar49 * fRam0000000146af1248;
      fVar49 = fVar25 * (float)uVar10 * fRam0000000146af126c + fVar41 * fVar49 +
               fVar34 * (float)uVar11 * fRam0000000146af125c +
               fVar31 * fVar37 * fRam0000000146af124c;
      fVar35 = fVar54 * fVar34 - fVar53 * fVar31;
      fVar26 = fVar50 * fVar31 - fVar54 * fVar25;
      fVar32 = fVar53 * fVar25 - fVar50 * fVar34;
      fVar37 = fVar42 * fVar41 - fVar42 * fVar41;
      fVar35 = fVar35 + fVar35;
      fVar26 = fVar26 + fVar26;
      fVar32 = fVar32 + fVar32;
      fVar37 = fVar37 + fVar37;
      fVar50 = (fVar32 * fVar34 - fVar26 * fVar31) + fVar35 * fVar41 + fVar50 + pfVar15[4];
      fVar53 = (fVar35 * fVar31 - fVar32 * fVar25) + fVar26 * fVar41 + fVar53 + pfVar15[5];
      fVar54 = (fVar26 * fVar25 - fVar35 * fVar34) + fVar32 * fVar41 + fVar54 + pfVar15[6];
      fVar35 = (fVar37 * fVar41 - fVar37 * fVar41) + fVar37 * fVar41 + fVar42 + pfVar15[7];
    }
    else {
      fVar38 = fVar34 + fVar34;
      fVar43 = fVar31 + fVar31;
      fVar64 = fVar26 * fVar61;
      fVar65 = fVar32 * fVar62;
      fVar66 = fVar35 * fVar63;
      fVar67 = fVar36 * 0.0;
      fVar45 = (fVar25 + fVar25) * fVar25;
      fVar39 = (fVar25 + fVar25) * fVar41;
      fVar40 = (float)uVar11 + (float)uVar11;
      fVar44 = fVar37 + fVar37;
      fVar55 = (fVar43 * fVar41 + fVar38 * fVar25) * fVar61;
      fVar57 = (fVar39 + fVar43 * fVar34) * fVar62;
      fVar59 = (fVar38 * fVar41 + fVar43 * fVar25) * fVar63;
      fVar46 = fVar62 * (fVar38 * fVar25 - fVar43 * fVar41);
      fVar47 = fVar63 * (fVar43 * fVar34 - fVar39);
      fVar48 = fVar61 * (fVar43 * fVar25 - fVar38 * fVar41);
      fVar39 = (float)uVar10 * ((float)uVar10 + (float)uVar10);
      fVar25 = (float)((uint)((_DAT_146af1220 - (fVar43 * fVar31 + fVar38 * fVar34)) * fVar61) &
                      _DAT_146af1230);
      fVar31 = (float)((uint)((fRam0000000146af1224 - (fVar43 * fVar31 + fVar45)) * fVar62) &
                      uRam0000000146af1234);
      fVar34 = (float)((uint)((fRam0000000146af1228 - (fVar38 * fVar34 + fVar45)) * fVar63) &
                      uRam0000000146af1238);
      fVar36 = (float)((uint)((fRam0000000146af122c - (fVar45 + fVar45)) * fVar36) &
                      uRam0000000146af123c);
      fVar61 = pfVar15[4];
      fVar62 = pfVar15[5];
      fVar63 = pfVar15[6];
      fVar41 = ((float)uVar10 + (float)uVar10) * fVar49;
      fVar43 = (fVar44 * fVar49 + fVar40 * (float)uVar10) * fVar26;
      fVar45 = (fVar41 + fVar44 * (float)uVar11) * fVar32;
      fVar51 = (fVar40 * fVar49 + fVar44 * (float)uVar10) * fVar35;
      fVar38 = fVar32 * (fVar40 * (float)uVar10 - fVar44 * fVar49);
      fVar41 = fVar35 * (fVar44 * (float)uVar11 - fVar41);
      fVar49 = fVar26 * (fVar44 * (float)uVar10 - fVar40 * fVar49);
      fVar26 = (float)((uint)((_DAT_146af1220 - (fVar37 * fVar44 + (float)uVar11 * fVar40)) * fVar26
                             ) & _DAT_146af1230);
      fVar32 = (float)((uint)((fRam0000000146af1224 - (fVar37 * fVar44 + fVar39)) * fVar32) &
                      uRam0000000146af1234);
      fVar35 = (float)((uint)((fRam0000000146af1228 - ((float)uVar11 * fVar40 + fVar39)) * fVar35) &
                      uRam0000000146af1238);
      fVar37 = (float)((uint)((fRam0000000146af122c - (fVar39 + fVar39)) * 0.0) &
                      uRam0000000146af123c);
      local_158 = fVar43 * fVar46 + fVar26 * fVar25 + fVar49 * fVar59 + fVar37 * fVar61;
      fStack_154 = fVar43 * fVar31 + fVar26 * fVar55 + fVar49 * fVar47 + fVar37 * fVar62;
      fStack_150 = fVar43 * fVar57 + fVar26 * fVar48 + fVar49 * fVar34 + fVar37 * fVar63;
      fStack_14c = fVar43 * fVar36 + fVar26 * fVar36 + fVar49 * fVar36 +
                   fVar37 * fRam0000000146af122c;
      auStack_144 = (undefined1  [4])
                    (fVar32 * fVar31 + fVar38 * fVar55 + fVar45 * fVar47 + fVar37 * fVar62);
      local_148 = (undefined1  [4])
                  (fVar32 * fVar46 + fVar38 * fVar25 + fVar45 * fVar59 + fVar37 * fVar61);
      uStack_140._0_4_ = fVar32 * fVar57 + fVar38 * fVar48 + fVar45 * fVar34 + fVar37 * fVar63;
      uStack_140._4_4_ =
           fVar32 * fVar36 + fVar38 * fVar36 + fVar45 * fVar36 + fVar37 * fRam0000000146af122c;
      local_138 = fVar41 * fVar46 + fVar51 * fVar25 + fVar35 * fVar59 + fVar37 * fVar61;
      fStack_134 = fVar41 * fVar31 + fVar51 * fVar55 + fVar35 * fVar47 + fVar37 * fVar62;
      fStack_130 = fVar41 * fVar57 + fVar51 * fVar48 + fVar35 * fVar34 + fVar37 * fVar63;
      fStack_12c = fVar41 * fVar36 + fVar51 * fVar36 + fVar35 * fVar36 +
                   fVar37 * fRam0000000146af122c;
      local_128 = fVar53 * fVar46 + fVar50 * fVar25 + fVar54 * fVar59 +
                  fRam0000000146af122c * fVar61;
      fStack_124 = fVar53 * fVar31 + fVar50 * fVar55 + fVar54 * fVar47 +
                   fRam0000000146af122c * fVar62;
      fStack_120 = fVar53 * fVar57 + fVar50 * fVar48 + fVar54 * fVar34 +
                   fRam0000000146af122c * fVar63;
      fStack_11c = fVar53 * fVar36 + fVar50 * fVar36 + fVar54 * fVar36 +
                   fRam0000000146af122c * fRam0000000146af122c;
      FMatrix::RemoveScaling(&local_158);
      fVar50 = (float)(-(uint)(_DAT_146af12a0 <= fVar64) & (_DAT_146af1290 ^ (uint)fVar42) ^
                      _DAT_146af1290);
      fVar54 = (float)(-(uint)(fRam0000000146af12a4 <= fVar65) &
                       (uRam0000000146af1294 ^ (uint)fVar33) ^ uRam0000000146af1294);
      fVar35 = (float)(-(uint)(fRam0000000146af12a8 <= fVar66) &
                       (uRam0000000146af1298 ^ (uint)fVar27) ^ uRam0000000146af1298);
      local_158 = local_158 * fVar50;
      fStack_154 = fStack_154 * fVar50;
      fStack_150 = fStack_150 * fVar50;
      fVar50 = (float)auStack_144 * fVar54;
      fVar53 = (float)local_148 * fVar54;
      uStack_140._0_4_ = (float)uStack_140 * fVar54;
      auStack_144 = (undefined1  [4])fVar50;
      fStack_130 = fStack_130 * fVar35;
      local_138 = local_138 * fVar35;
      fStack_134 = fStack_134 * fVar35;
      local_148 = (undefined1  [4])fVar53;
      FQuat::FQuat(local_168,&local_158);
      auVar28._0_4_ = (float)local_168._0_4_ * (float)local_168._0_4_ + fStack_160 * fStack_160;
      auVar28._4_4_ = (float)local_168._4_4_ * (float)local_168._4_4_ + fStack_15c * fStack_15c;
      auVar28._8_4_ = fStack_160 * fStack_160 + (float)local_168._0_4_ * (float)local_168._0_4_;
      auVar28._12_4_ = fStack_15c * fStack_15c + (float)local_168._4_4_ * (float)local_168._4_4_;
      fVar32 = auVar28._4_4_ + auVar28._0_4_;
      fVar37 = auVar28._8_4_ + auVar28._4_4_;
      fVar49 = auVar28._12_4_ + auVar28._8_4_;
      fVar36 = auVar28._0_4_ + auVar28._12_4_;
      auVar19._4_4_ = fVar37;
      auVar19._0_4_ = fVar32;
      auVar19._8_4_ = fVar49;
      auVar19._12_4_ = fVar36;
      auVar19 = rsqrtps(auVar28,auVar19);
      fVar50 = auVar19._0_4_;
      fVar53 = auVar19._4_4_;
      fVar54 = auVar19._8_4_;
      fVar26 = auVar19._12_4_;
      fVar50 = (_DAT_146af1280 - fVar50 * fVar50 * fVar32 * _DAT_146af1280) * fVar50 + fVar50;
      fVar53 = (fRam0000000146af1284 - fVar53 * fVar53 * fVar37 * fRam0000000146af1284) * fVar53 +
               fVar53;
      fVar54 = (fRam0000000146af1288 - fVar54 * fVar54 * fVar49 * fRam0000000146af1288) * fVar54 +
               fVar54;
      fVar26 = (fRam0000000146af128c - fVar26 * fVar26 * fVar36 * fRam0000000146af128c) * fVar26 +
               fVar26;
      fVar35 = 0.0;
      fVar61 = (float)(((uint)(((_DAT_146af1280 - fVar50 * fVar50 * fVar32 * _DAT_146af1280) *
                                fVar50 + fVar50) * (float)local_168._0_4_) ^ _DAT_146af1270) &
                       -(uint)(1e-08 <= fVar32) ^ _DAT_146af1270);
      fVar62 = (float)(((uint)(((fRam0000000146af1284 -
                                fVar53 * fVar53 * fVar37 * fRam0000000146af1284) * fVar53 + fVar53)
                              * (float)local_168._4_4_) ^ uRam0000000146af1274) &
                       -(uint)(1e-08 <= fVar37) ^ uRam0000000146af1274);
      fVar63 = (float)(((uint)(((fRam0000000146af1288 -
                                fVar54 * fVar54 * fVar49 * fRam0000000146af1288) * fVar54 + fVar54)
                              * fStack_160) ^ uRam0000000146af1278) & -(uint)(1e-08 <= fVar49) ^
                      uRam0000000146af1278);
      fVar49 = (float)(((uint)(((fRam0000000146af128c -
                                fVar26 * fVar26 * fVar36 * fRam0000000146af128c) * fVar26 + fVar26)
                              * fStack_15c) ^ uRam0000000146af127c) & -(uint)(1e-08 <= fVar36) ^
                      uRam0000000146af127c);
      fVar50 = local_128;
      fVar53 = fStack_124;
      fVar54 = fStack_120;
    }
    fStack_1ac = fRam0000000146af12ac;
    fStack_1b0 = fRam0000000146af12a8;
    local_1b8._4_4_ = fRam0000000146af12a4;
    local_1b8._0_4_ = _DAT_146af12a0;
    fVar44 = fRam0000000146af126c;
    fVar43 = fRam0000000146af1268;
    fVar40 = fRam0000000146af1264;
    fVar39 = _DAT_146af1260;
    fVar38 = fRam0000000146af125c;
    fVar27 = fRam0000000146af1258;
    fVar33 = fRam0000000146af1254;
    fVar42 = _DAT_146af1250;
    fVar41 = fRam0000000146af124c;
    fVar31 = fRam0000000146af1248;
    fVar34 = fRam0000000146af1244;
    fVar25 = _DAT_146af1240;
    uVar9 = uRam0000000146af123c;
    uVar8 = uRam0000000146af1238;
    uVar7 = uRam0000000146af1234;
    uVar6 = _DAT_146af1230;
    fVar36 = fRam0000000146af122c;
    fVar37 = fRam0000000146af1228;
    fVar32 = fRam0000000146af1224;
    fVar26 = _DAT_146af1220;
    if (param_4 == 0) {
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      *param_2 = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = fVar36;
      fVar26 = (float)((uint)fRam0000000146af1224 & uVar7);
      fVar32 = (float)((uint)fRam0000000146af1228 & uVar8);
      fVar37 = (float)((uint)fRam0000000146af122c & uVar9);
      param_2[8] = (float)((uint)_DAT_146af1220 & uVar6);
      param_2[9] = fVar26;
      param_2[10] = fVar32;
      param_2[0xb] = fVar37;
      fVar57 = fRam0000000146af1228;
      fVar55 = fRam0000000146af1224;
      fVar51 = _DAT_146af1220;
      auVar23._4_4_ = fVar65;
      auVar23._0_4_ = fVar64;
      auVar23._8_4_ = fVar66;
      auVar23._12_4_ = fVar67;
      auVar19 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar26 = auVar19._0_4_;
      fVar32 = auVar19._4_4_;
      fVar37 = auVar19._8_4_;
      fVar36 = auVar19._12_4_;
      fVar45 = *(float *)(param_1 + 0x210);
      fVar46 = *(float *)(param_1 + 0x214);
      fVar47 = *(float *)(param_1 + 0x218);
      fVar48 = *(float *)(param_1 + 0x21c);
      auVar19 = minps(auVar23,auVar19);
      auVar24._4_4_ = -(uint)(auVar19._4_4_ < fRam0000000146af12a4);
      auVar24._0_4_ = -(uint)(auVar19._0_4_ < _DAT_146af12a0);
      auVar24._8_4_ = -(uint)(auVar19._8_4_ < fRam0000000146af12a8);
      auVar24._12_4_ = -(uint)(auVar19._12_4_ < fRam0000000146af12ac);
      iVar13 = movmskps(0,auVar24);
      if (iVar13 != 0) {
        fVar42 = fVar46 + fVar46;
        fVar41 = fVar47 + fVar47;
        fVar33 = (fVar45 + fVar45) * fVar45;
        fVar35 = (fVar45 + fVar45) * fVar48;
        fVar27 = fVar62 + fVar62;
        fVar39 = fVar63 + fVar63;
        fVar43 = fVar32 * (fVar42 * fVar45 - fVar41 * fVar48);
        fVar59 = fVar37 * (fVar41 * fVar46 - fVar35);
        fVar52 = fVar26 * (fVar41 * fVar45 - fVar42 * fVar48);
        fVar56 = (fVar42 * fVar45 + fVar41 * fVar48) * fVar26;
        fVar58 = (fVar41 * fVar46 + fVar35) * fVar32;
        fVar60 = (fVar41 * fVar45 + fVar42 * fVar48) * fVar37;
        fVar40 = fVar61 * (fVar61 + fVar61);
        fVar35 = *(float *)(param_1 + 0x220);
        fVar25 = *(float *)(param_1 + 0x224);
        fVar34 = *(float *)(param_1 + 0x228);
        fVar31 = (float)((uint)((_DAT_146af1220 - (fVar41 * fVar47 + fVar42 * fVar46)) * fVar26) &
                        _DAT_146af1230);
        fVar41 = (float)((uint)((fRam0000000146af1224 - (fVar41 * fVar47 + fVar33)) * fVar32) &
                        uRam0000000146af1234);
        fVar42 = (float)((uint)((fRam0000000146af1228 - (fVar42 * fVar46 + fVar33)) * fVar37) &
                        uRam0000000146af1238);
        fVar33 = (float)((uint)((fRam0000000146af122c - (fVar33 + fVar33)) * fVar36) &
                        uRam0000000146af123c);
        fVar38 = (fVar61 + fVar61) * fVar49;
        fVar46 = (fVar39 * fVar49 + fVar27 * fVar61) * fVar64;
        fVar47 = (fVar38 + fVar39 * fVar62) * fVar65;
        fVar48 = (fVar27 * fVar49 + fVar39 * fVar61) * fVar66;
        fVar44 = fVar65 * (fVar27 * fVar61 - fVar39 * fVar49);
        fVar38 = fVar66 * (fVar39 * fVar62 - fVar38);
        fVar45 = fVar64 * (fVar39 * fVar61 - fVar27 * fVar49);
        fVar49 = (float)((uint)((_DAT_146af1220 - (fVar63 * fVar39 + fVar62 * fVar27)) * fVar64) &
                        _DAT_146af1230);
        fVar61 = (float)((uint)((fRam0000000146af1224 - (fVar63 * fVar39 + fVar40)) * fVar65) &
                        uRam0000000146af1234);
        fVar62 = (float)((uint)((fRam0000000146af1228 - (fVar62 * fVar27 + fVar40)) * fVar66) &
                        uRam0000000146af1238);
        fVar63 = (float)((uint)((fRam0000000146af122c - (fVar40 + fVar40)) * fVar67) &
                        uRam0000000146af123c);
        local_1a8 = fVar46 * fVar43 + fVar49 * fVar31 + fVar45 * fVar60 + fVar63 * fVar35;
        fStack_1a4 = fVar46 * fVar41 + fVar49 * fVar56 + fVar45 * fVar59 + fVar63 * fVar25;
        fStack_1a0 = fVar46 * fVar58 + fVar49 * fVar52 + fVar45 * fVar42 + fVar63 * fVar34;
        fStack_19c = fVar46 * fVar33 + fVar49 * fVar33 + fVar45 * fVar33 +
                     fVar63 * fRam0000000146af122c;
        local_198 = fVar61 * fVar43 + fVar44 * fVar31 + fVar47 * fVar60 + fVar63 * fVar35;
        fStack_194 = fVar61 * fVar41 + fVar44 * fVar56 + fVar47 * fVar59 + fVar63 * fVar25;
        fStack_190 = fVar61 * fVar58 + fVar44 * fVar52 + fVar47 * fVar42 + fVar63 * fVar34;
        fStack_18c = fVar61 * fVar33 + fVar44 * fVar33 + fVar47 * fVar33 +
                     fVar63 * fRam0000000146af122c;
        local_188 = fVar38 * fVar43 + fVar48 * fVar31 + fVar62 * fVar60 + fVar63 * fVar35;
        fStack_184 = fVar38 * fVar41 + fVar48 * fVar56 + fVar62 * fVar59 + fVar63 * fVar25;
        fStack_180 = fVar38 * fVar58 + fVar48 * fVar52 + fVar62 * fVar42 + fVar63 * fVar34;
        fStack_17c = fVar38 * fVar33 + fVar48 * fVar33 + fVar62 * fVar33 +
                     fVar63 * fRam0000000146af122c;
        local_178 = fVar53 * fVar43 + fVar50 * fVar31 + fVar54 * fVar60 +
                    fRam0000000146af122c * fVar35;
        fStack_174 = fVar53 * fVar41 + fVar50 * fVar56 + fVar54 * fVar59 +
                     fRam0000000146af122c * fVar25;
        fStack_170 = fVar53 * fVar58 + fVar50 * fVar52 + fVar54 * fVar42 +
                     fRam0000000146af122c * fVar34;
        fStack_16c = fVar53 * fVar33 + fVar50 * fVar33 + fVar54 * fVar33 +
                     fRam0000000146af122c * fRam0000000146af122c;
        FMatrix::RemoveScaling(&local_1a8);
        fVar50 = (float)(-(uint)(_DAT_146af12a0 <= fVar26 * fVar64) &
                         (_DAT_146af1290 ^ (uint)fVar51) ^ _DAT_146af1290);
        fVar53 = (float)(-(uint)(fRam0000000146af12a4 <= fVar32 * fVar65) &
                         (uRam0000000146af1294 ^ (uint)fVar55) ^ uRam0000000146af1294);
        fVar54 = (float)(-(uint)(fRam0000000146af12a8 <= fVar37 * fVar66) &
                         (uRam0000000146af1298 ^ (uint)fVar57) ^ uRam0000000146af1298);
        local_1a8 = local_1a8 * fVar50;
        fStack_1a4 = fStack_1a4 * fVar50;
        fStack_1a0 = fStack_1a0 * fVar50;
        fStack_194 = fStack_194 * fVar53;
        fStack_190 = fStack_190 * fVar53;
        local_198 = local_198 * fVar53;
        fStack_184 = fStack_184 * fVar54;
        fStack_180 = fStack_180 * fVar54;
        local_188 = local_188 * fVar54;
        FQuat::FQuat(local_168,&local_1a8);
        auVar30._0_4_ = (float)local_168._0_4_ * (float)local_168._0_4_ + fStack_160 * fStack_160;
        auVar30._4_4_ = (float)local_168._4_4_ * (float)local_168._4_4_ + fStack_15c * fStack_15c;
        auVar30._8_4_ = fStack_160 * fStack_160 + (float)local_168._0_4_ * (float)local_168._0_4_;
        auVar30._12_4_ = fStack_15c * fStack_15c + (float)local_168._4_4_ * (float)local_168._4_4_;
        fVar49 = auVar30._4_4_ + auVar30._0_4_;
        fVar61 = auVar30._8_4_ + auVar30._4_4_;
        fVar62 = auVar30._12_4_ + auVar30._8_4_;
        fVar63 = auVar30._0_4_ + auVar30._12_4_;
        auVar4._4_4_ = fVar61;
        auVar4._0_4_ = fVar49;
        auVar4._8_4_ = fVar62;
        auVar4._12_4_ = fVar63;
        auVar19 = rsqrtps(auVar30,auVar4);
        fVar50 = auVar19._0_4_;
        fVar53 = auVar19._4_4_;
        fVar54 = auVar19._8_4_;
        fVar35 = auVar19._12_4_;
        fVar50 = (_DAT_146af1280 - fVar50 * fVar50 * fVar49 * _DAT_146af1280) * fVar50 + fVar50;
        fVar53 = (fRam0000000146af1284 - fVar53 * fVar53 * fVar61 * fRam0000000146af1284) * fVar53 +
                 fVar53;
        fVar54 = (fRam0000000146af1288 - fVar54 * fVar54 * fVar62 * fRam0000000146af1288) * fVar54 +
                 fVar54;
        fVar35 = (fRam0000000146af128c - fVar35 * fVar35 * fVar63 * fRam0000000146af128c) * fVar35 +
                 fVar35;
        auVar2._4_4_ = fStack_174;
        auVar2._0_4_ = local_178;
        auVar2._8_4_ = fStack_170;
        fVar50 = (float)(((uint)(((_DAT_146af1280 - fVar50 * fVar50 * fVar49 * _DAT_146af1280) *
                                  fVar50 + fVar50) * (float)local_168._0_4_) ^ _DAT_146af1270) &
                         -(uint)(1e-08 <= fVar49) ^ _DAT_146af1270);
        fVar53 = (float)(((uint)(((fRam0000000146af1284 -
                                  fVar53 * fVar53 * fVar61 * fRam0000000146af1284) * fVar53 + fVar53
                                 ) * (float)local_168._4_4_) ^ uRam0000000146af1274) &
                         -(uint)(1e-08 <= fVar61) ^ uRam0000000146af1274);
        fVar54 = (float)(((uint)(((fRam0000000146af1288 -
                                  fVar54 * fVar54 * fVar62 * fRam0000000146af1288) * fVar54 + fVar54
                                 ) * fStack_160) ^ uRam0000000146af1278) & -(uint)(1e-08 <= fVar62)
                        ^ uRam0000000146af1278);
        fVar35 = (float)(((uint)(((fRam0000000146af128c -
                                  fVar35 * fVar35 * fVar63 * fRam0000000146af128c) * fVar35 + fVar35
                                 ) * fStack_15c) ^ uRam0000000146af127c) & -(uint)(1e-08 <= fVar63)
                        ^ uRam0000000146af127c);
        auVar2._12_4_ = 0;
        *(undefined1 (*) [16])(param_2 + 4) = auVar2;
        param_2[8] = fVar26 * fVar64;
        param_2[9] = fVar32 * fVar65;
        param_2[10] = fVar37 * fVar66;
        param_2[0xb] = fVar36 * fVar67;
        *param_2 = fVar50;
        param_2[1] = fVar53;
        param_2[2] = fVar54;
        param_2[3] = fVar35;
        return param_2;
      }
      fVar51 = *(float *)(param_1 + 0x220);
      fVar55 = *(float *)(param_1 + 0x224);
      fVar57 = *(float *)(param_1 + 0x228);
      fVar59 = *(float *)(param_1 + 0x22c);
      fVar50 = fVar26 * fVar50;
      fVar53 = fVar32 * fVar53;
      fVar54 = fVar37 * fVar54;
      fVar35 = fVar36 * fVar35;
      param_2[8] = fVar26 * fVar64;
      param_2[9] = fVar32 * fVar65;
      param_2[10] = fVar37 * fVar66;
      param_2[0xb] = fVar36 * fVar67;
      *param_2 = fVar45 * fVar49 * fVar39 + fVar48 * fVar61 + fVar46 * fVar63 * fVar42 +
                 fVar47 * fVar62 * fVar25;
      param_2[1] = fVar45 * fVar63 * fVar40 + fVar48 * fVar62 + fVar46 * fVar49 * fVar33 +
                   fVar47 * fVar61 * fVar34;
      param_2[2] = fVar45 * fVar62 * fVar43 + fVar48 * fVar63 + fVar46 * fVar61 * fVar27 +
                   fVar47 * fVar49 * fVar31;
      param_2[3] = fVar45 * fVar61 * fVar44 + fVar48 * fVar49 + fVar46 * fVar62 * fVar38 +
                   fVar47 * fVar63 * fVar41;
      fVar26 = fVar54 * fVar46 - fVar53 * fVar47;
      fVar32 = fVar50 * fVar47 - fVar54 * fVar45;
      fVar37 = fVar53 * fVar45 - fVar50 * fVar46;
      fVar49 = fVar35 * fVar48 - fVar35 * fVar48;
      fVar26 = fVar26 + fVar26;
      fVar32 = fVar32 + fVar32;
      fVar37 = fVar37 + fVar37;
      fVar49 = fVar49 + fVar49;
      param_2[4] = (fVar37 * fVar46 - fVar32 * fVar47) + fVar48 * fVar26 + fVar50 + fVar51;
      param_2[5] = (fVar26 * fVar47 - fVar37 * fVar45) + fVar48 * fVar32 + fVar53 + fVar55;
      param_2[6] = (fVar32 * fVar45 - fVar26 * fVar46) + fVar48 * fVar37 + fVar54 + fVar57;
      param_2[7] = (fVar49 * fVar48 - fVar49 * fVar48) + fVar48 * fVar49 + fVar35 + fVar59;
      return param_2;
    }
    if (param_4 == 1) {
      if (*(longlong *)(param_1 + 0x118) != 0) {
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
        if (lVar14 == 0) {
          puVar16 = (undefined8 *)&DAT_1468b5b70;
        }
        else {
          puVar16 = (undefined8 *)(lVar14 + 0x210);
        }
        local_118 = *puVar16;
        uStack_110 = puVar16[1];
        fVar41 = *(float *)(param_1 + 0x210);
        fVar42 = *(float *)(param_1 + 0x214);
        fVar33 = *(float *)(param_1 + 0x218);
        fVar27 = *(float *)(param_1 + 0x21c);
        auVar19 = *(undefined1 (*) [16])(param_1 + 0x230);
        fVar36 = auVar19._0_4_;
        fVar25 = auVar19._4_4_;
        fVar34 = auVar19._8_4_;
        fVar31 = auVar19._12_4_;
        local_108 = puVar16[2];
        uStack_100 = puVar16[3];
        local_f8 = puVar16[4];
        uStack_f0 = puVar16[5];
        auVar21._4_4_ = fVar65;
        auVar21._0_4_ = fVar64;
        auVar21._8_4_ = fVar66;
        auVar21._12_4_ = fVar67;
        auVar19 = minps(auVar21,auVar19);
        auVar22._4_4_ = -(uint)(auVar19._4_4_ < fRam0000000146af12a4);
        auVar22._0_4_ = -(uint)(auVar19._0_4_ < _DAT_146af12a0);
        auVar22._8_4_ = -(uint)(auVar19._8_4_ < fRam0000000146af12a8);
        auVar22._12_4_ = -(uint)(auVar19._12_4_ < fRam0000000146af12ac);
        iVar13 = movmskps((int)puVar16,auVar22);
        if (iVar13 == 0) {
          fVar50 = fVar36 * fVar50;
          fVar53 = fVar25 * fVar53;
          fVar54 = fVar34 * fVar54;
          fVar35 = fVar31 * fVar35;
          local_158 = fVar41 * fVar49 * _DAT_146af1260 + fVar27 * fVar61 +
                      fVar42 * fVar63 * _DAT_146af1250 + fVar33 * fVar62 * _DAT_146af1240;
          fStack_154 = fVar41 * fVar63 * fRam0000000146af1264 + fVar27 * fVar62 +
                       fVar42 * fVar49 * fRam0000000146af1254 +
                       fVar33 * fVar61 * fRam0000000146af1244;
          fStack_150 = fVar41 * fVar62 * fRam0000000146af1268 + fVar27 * fVar63 +
                       fVar42 * fVar61 * fRam0000000146af1258 +
                       fVar33 * fVar49 * fRam0000000146af1248;
          fStack_14c = fVar41 * fVar61 * fRam0000000146af126c + fVar27 * fVar49 +
                       fVar42 * fVar62 * fRam0000000146af125c +
                       fVar33 * fVar63 * fRam0000000146af124c;
          fVar26 = fVar54 * fVar42 - fVar53 * fVar33;
          fVar32 = fVar50 * fVar33 - fVar54 * fVar41;
          fVar37 = fVar53 * fVar41 - fVar50 * fVar42;
          fVar49 = fVar35 * fVar27 - fVar35 * fVar27;
          fVar26 = fVar26 + fVar26;
          fVar32 = fVar32 + fVar32;
          fVar37 = fVar37 + fVar37;
          fVar49 = fVar49 + fVar49;
          auStack_144 = (undefined1  [4])
                        ((fVar26 * fVar33 - fVar37 * fVar41) + fVar27 * fVar32 + fVar53 +
                        *(float *)(param_1 + 0x224));
          local_148 = (undefined1  [4])
                      ((fVar37 * fVar42 - fVar32 * fVar33) + fVar27 * fVar26 + fVar50 +
                      *(float *)(param_1 + 0x220));
          uStack_140._0_4_ =
               (fVar32 * fVar41 - fVar26 * fVar42) + fVar27 * fVar37 + fVar54 +
               *(float *)(param_1 + 0x228);
          uStack_140._4_4_ =
               (fVar49 * fVar27 - fVar49 * fVar27) + fVar27 * fVar49 + fVar35 +
               *(float *)(param_1 + 0x22c);
        }
        else {
          fVar35 = fVar42 + fVar42;
          fVar38 = fVar33 + fVar33;
          fVar39 = fVar41 * (fVar41 + fVar41);
          fVar40 = fVar27 * (fVar41 + fVar41);
          fVar56 = (fVar27 * fVar38 + fVar41 * fVar35) * fVar36;
          fVar58 = (fVar40 + fVar42 * fVar38) * fVar25;
          fVar60 = (fVar27 * fVar35 + fVar41 * fVar38) * fVar34;
          fVar46 = fVar25 * (fVar41 * fVar35 - fVar27 * fVar38);
          fVar48 = fVar34 * (fVar42 * fVar38 - fVar40);
          fVar51 = fVar36 * (fVar41 * fVar38 - fVar27 * fVar35);
          fVar40 = fVar62 + fVar62;
          fVar44 = fVar63 + fVar63;
          fVar27 = (float)((uint)((_DAT_146af1220 - (fVar33 * fVar38 + fVar42 * fVar35)) * fVar36) &
                          _DAT_146af1230);
          fVar33 = (float)((uint)((fRam0000000146af1224 - (fVar33 * fVar38 + fVar39)) * fVar25) &
                          uRam0000000146af1234);
          fVar38 = (float)((uint)((fRam0000000146af1228 - (fVar42 * fVar35 + fVar39)) * fVar34) &
                          uRam0000000146af1238);
          fVar39 = (float)((uint)((fRam0000000146af122c - (fVar39 + fVar39)) * fVar31) &
                          uRam0000000146af123c);
          fVar35 = *(float *)(param_1 + 0x220);
          fVar41 = *(float *)(param_1 + 0x224);
          fVar42 = *(float *)(param_1 + 0x228);
          fVar45 = (fVar61 + fVar61) * fVar61;
          fVar43 = (fVar61 + fVar61) * fVar49;
          fVar57 = (fVar44 * fVar49 + fVar40 * fVar61) * fVar64;
          fVar59 = (fVar43 + fVar44 * fVar62) * fVar65;
          fVar52 = (fVar40 * fVar49 + fVar44 * fVar61) * fVar66;
          fVar47 = fVar65 * (fVar40 * fVar61 - fVar44 * fVar49);
          fVar43 = fVar66 * (fVar44 * fVar62 - fVar43);
          fVar55 = fVar64 * (fVar44 * fVar61 - fVar40 * fVar49);
          fVar49 = (float)((uint)((_DAT_146af1220 - (fVar44 * fVar63 + fVar40 * fVar62)) * fVar64) &
                          _DAT_146af1230);
          fVar61 = (float)((uint)((fRam0000000146af1224 - (fVar44 * fVar63 + fVar45)) * fVar65) &
                          uRam0000000146af1234);
          fVar62 = (float)((uint)((fRam0000000146af1228 - (fVar40 * fVar62 + fVar45)) * fVar66) &
                          uRam0000000146af1238);
          fVar63 = (float)((uint)((fRam0000000146af122c - (fVar45 + fVar45)) * fVar67) &
                          uRam0000000146af123c);
          local_1a8 = fVar57 * fVar46 + fVar49 * fVar27 + fVar55 * fVar60 + fVar63 * fVar35;
          fStack_1a4 = fVar57 * fVar33 + fVar49 * fVar56 + fVar55 * fVar48 + fVar63 * fVar41;
          fStack_1a0 = fVar57 * fVar58 + fVar49 * fVar51 + fVar55 * fVar38 + fVar63 * fVar42;
          fStack_19c = fVar57 * fVar39 + fVar49 * fVar39 + fVar55 * fVar39 +
                       fVar63 * fRam0000000146af122c;
          local_198 = fVar61 * fVar46 + fVar47 * fVar27 + fVar59 * fVar60 + fVar63 * fVar35;
          fStack_194 = fVar61 * fVar33 + fVar47 * fVar56 + fVar59 * fVar48 + fVar63 * fVar41;
          fStack_190 = fVar61 * fVar58 + fVar47 * fVar51 + fVar59 * fVar38 + fVar63 * fVar42;
          fStack_18c = fVar61 * fVar39 + fVar47 * fVar39 + fVar59 * fVar39 +
                       fVar63 * fRam0000000146af122c;
          local_188 = fVar43 * fVar46 + fVar52 * fVar27 + fVar62 * fVar60 + fVar63 * fVar35;
          fStack_184 = fVar43 * fVar33 + fVar52 * fVar56 + fVar62 * fVar48 + fVar63 * fVar41;
          fStack_180 = fVar43 * fVar58 + fVar52 * fVar51 + fVar62 * fVar38 + fVar63 * fVar42;
          fStack_17c = fVar43 * fVar39 + fVar52 * fVar39 + fVar62 * fVar39 +
                       fVar63 * fRam0000000146af122c;
          local_178 = fVar53 * fVar46 + fVar50 * fVar27 + fVar54 * fVar60 +
                      fRam0000000146af122c * fVar35;
          fStack_174 = fVar53 * fVar33 + fVar50 * fVar56 + fVar54 * fVar48 +
                       fRam0000000146af122c * fVar41;
          fStack_170 = fVar53 * fVar58 + fVar50 * fVar51 + fVar54 * fVar38 +
                       fRam0000000146af122c * fVar42;
          fStack_16c = fVar53 * fVar39 + fVar50 * fVar39 + fVar54 * fVar39 +
                       fRam0000000146af122c * fRam0000000146af122c;
          FMatrix::RemoveScaling(&local_1a8);
          fVar50 = (float)(-(uint)((float)local_1b8 <= fVar64 * fVar36) &
                           (_DAT_146af1290 ^ (uint)fVar26) ^ _DAT_146af1290);
          fVar53 = (float)(-(uint)(local_1b8._4_4_ <= fVar65 * fVar25) &
                           (uRam0000000146af1294 ^ (uint)fVar32) ^ uRam0000000146af1294);
          fVar54 = (float)(-(uint)(fStack_1b0 <= fVar66 * fVar34) &
                           (uRam0000000146af1298 ^ (uint)fVar37) ^ uRam0000000146af1298);
          local_1a8 = local_1a8 * fVar50;
          fStack_1a4 = fStack_1a4 * fVar50;
          fStack_1a0 = fStack_1a0 * fVar50;
          fStack_194 = fStack_194 * fVar53;
          fStack_190 = fStack_190 * fVar53;
          local_198 = local_198 * fVar53;
          fStack_184 = fStack_184 * fVar54;
          fStack_180 = fStack_180 * fVar54;
          local_188 = local_188 * fVar54;
          FQuat::FQuat(local_168,&local_1a8);
          local_1b8._0_4_ = 1e-08;
          auVar29._0_4_ = (float)local_168._0_4_ * (float)local_168._0_4_ + fStack_160 * fStack_160;
          auVar29._4_4_ = (float)local_168._4_4_ * (float)local_168._4_4_ + fStack_15c * fStack_15c;
          auVar29._8_4_ = fStack_160 * fStack_160 + (float)local_168._0_4_ * (float)local_168._0_4_;
          auVar29._12_4_ = fStack_15c * fStack_15c + (float)local_168._4_4_ * (float)local_168._4_4_
          ;
          fVar26 = auVar29._4_4_ + auVar29._0_4_;
          fVar32 = auVar29._8_4_ + auVar29._4_4_;
          fVar37 = auVar29._12_4_ + auVar29._8_4_;
          fVar49 = auVar29._0_4_ + auVar29._12_4_;
          auVar3._4_4_ = fVar32;
          auVar3._0_4_ = fVar26;
          auVar3._8_4_ = fVar37;
          auVar3._12_4_ = fVar49;
          auVar19 = rsqrtps(auVar29,auVar3);
          fVar50 = auVar19._0_4_;
          fVar53 = auVar19._4_4_;
          fVar54 = auVar19._8_4_;
          fVar35 = auVar19._12_4_;
          fVar50 = (_DAT_146af1280 - fVar50 * fVar50 * fVar26 * _DAT_146af1280) * fVar50 + fVar50;
          fVar53 = (fRam0000000146af1284 - fVar53 * fVar53 * fVar32 * fRam0000000146af1284) * fVar53
                   + fVar53;
          fVar54 = (fRam0000000146af1288 - fVar54 * fVar54 * fVar37 * fRam0000000146af1288) * fVar54
                   + fVar54;
          fVar35 = (fRam0000000146af128c - fVar35 * fVar35 * fVar49 * fRam0000000146af128c) * fVar35
                   + fVar35;
          auStack_144 = (undefined1  [4])fStack_174;
          local_148 = (undefined1  [4])local_178;
          uStack_140._0_4_ = fStack_170;
          local_158 = (float)(((uint)(((_DAT_146af1280 - fVar50 * fVar50 * fVar26 * _DAT_146af1280)
                                       * fVar50 + fVar50) * (float)local_168._0_4_) ^ _DAT_146af1270
                              ) & -(uint)(1e-08 <= fVar26) ^ _DAT_146af1270);
          fStack_154 = (float)(((uint)(((fRam0000000146af1284 -
                                        fVar53 * fVar53 * fVar32 * fRam0000000146af1284) * fVar53 +
                                       fVar53) * (float)local_168._4_4_) ^ uRam0000000146af1274) &
                               -(uint)(1e-08 <= fVar32) ^ uRam0000000146af1274);
          fStack_150 = (float)(((uint)(((fRam0000000146af1288 -
                                        fVar54 * fVar54 * fVar37 * fRam0000000146af1288) * fVar54 +
                                       fVar54) * fStack_160) ^ uRam0000000146af1278) &
                               -(uint)(1e-08 <= fVar37) ^ uRam0000000146af1278);
          fStack_14c = (float)(((uint)(((fRam0000000146af128c -
                                        fVar35 * fVar35 * fVar49 * fRam0000000146af128c) * fVar35 +
                                       fVar35) * fStack_15c) ^ uRam0000000146af127c) &
                               -(uint)(1e-08 <= fVar49) ^ uRam0000000146af127c);
          uStack_140._4_4_ = 0;
        }
        fStack_12c = fVar67 * fVar31;
        fStack_130 = fVar66 * fVar34;
        fStack_134 = fVar65 * fVar25;
        local_138 = fVar64 * fVar36;
        FUN_14162bcf0(&local_158,param_2,&local_118);
        return param_2;
      }
    }
    else if (param_4 == 2) {
      *param_2 = fVar61;
      param_2[1] = fVar62;
      param_2[2] = fVar63;
      param_2[3] = fVar49;
      param_2[4] = fVar50;
      param_2[5] = fVar53;
      param_2[6] = fVar54;
      param_2[7] = fVar35;
      param_2[8] = fVar64;
      param_2[9] = fVar65;
      param_2[10] = fVar66;
      param_2[0xb] = fVar67;
      return param_2;
    }
  }
  local_1b8 = (float *)0x0;
  if (((param_3 != 0) && (*(longlong *)(param_1 + 0x728) != 0)) &&
     (lVar14 = FUN_14281be90(*(longlong *)(param_1 + 0x728),param_3), lVar14 != 0)) {
    local_138 = (float)((uint)_DAT_146af1220 & _DAT_146af1230);
    fStack_134 = (float)((uint)fRam0000000146af1224 & uRam0000000146af1234);
    fStack_130 = (float)((uint)fRam0000000146af1228 & uRam0000000146af1238);
    fStack_12c = (float)((uint)fRam0000000146af122c & uRam0000000146af123c);
    local_158 = 0.0;
    fStack_154 = 0.0;
    fStack_150 = 0.0;
    fStack_14c = fRam0000000146af122c;
    _local_148 = ZEXT816(0);
    cVar12 = FUN_14281ee70(lVar14,0,param_1);
    if (cVar12 != '\0') {
      if (param_4 == 0) {
        *(ulonglong *)param_2 = CONCAT44(fStack_154,local_158);
        *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_14c,fStack_150);
        *(ulonglong *)(param_2 + 8) = CONCAT44(fStack_134,local_138);
        *(ulonglong *)(param_2 + 10) = CONCAT44(fStack_12c,fStack_130);
        *(undefined8 *)(param_2 + 4) = _local_148;
        *(undefined8 *)(param_2 + 6) = uStack_140;
        return param_2;
      }
      if (param_4 == 1) {
        if (*(longlong *)(param_1 + 0x118) != 0) {
          uVar17 = FUN_1423d63a0(*(longlong *)(param_1 + 0x118),&local_118);
          FUN_14162bcf0(&local_158,param_2,uVar17);
          return param_2;
        }
      }
      else if (param_4 == 2) {
        FUN_14162bcf0(&local_158,param_2,param_1 + 0x210);
        return param_2;
      }
    }
  }
  FUN_14238d570(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1423d5750 FUN_1423d5750 body=379 status=ok
// SIG undefined FUN_1423d5750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423d5750(longlong param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  if (((param_3 != 0) && (*(longlong *)(param_1 + 0x728) != 0)) &&
     (lVar2 = FUN_14281be90(*(longlong *)(param_1 + 0x728),param_3), lVar2 != 0)) {
    local_68 = _DAT_146af1220 & _DAT_146af1230;
    uStack_64 = uRam0000000146af1224 & uRam0000000146af1234;
    uStack_60 = uRam0000000146af1228 & uRam0000000146af1238;
    uStack_5c = uRam0000000146af122c & uRam0000000146af123c;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = uRam0000000146af122c;
    local_78 = 0;
    uStack_70 = 0;
    cVar1 = FUN_14281ee70(lVar2,&local_88,param_1);
    if (cVar1 != '\0') {
      if (param_4 == 0) {
        *param_2 = CONCAT44(uStack_84,local_88);
        param_2[1] = CONCAT44(uStack_7c,uStack_80);
        param_2[4] = CONCAT44(uStack_64,local_68);
        param_2[5] = CONCAT44(uStack_5c,uStack_60);
        param_2[2] = local_78;
        param_2[3] = uStack_70;
        return param_2;
      }
      if (param_4 == 1) {
        if (*(longlong *)(param_1 + 0x118) != 0) {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
          if (lVar2 == 0) {
            puVar3 = (undefined8 *)&DAT_1468b5b70;
          }
          else {
            puVar3 = (undefined8 *)(lVar2 + 0x210);
          }
          local_58 = *puVar3;
          uStack_50 = puVar3[1];
          local_48 = *(undefined4 *)(puVar3 + 2);
          uStack_44 = *(undefined4 *)((longlong)puVar3 + 0x14);
          uStack_40 = *(undefined4 *)(puVar3 + 3);
          uStack_3c = *(undefined4 *)((longlong)puVar3 + 0x1c);
          local_38 = *(undefined4 *)(puVar3 + 4);
          uStack_34 = *(undefined4 *)((longlong)puVar3 + 0x24);
          uStack_30 = *(undefined4 *)(puVar3 + 5);
          uStack_2c = *(undefined4 *)((longlong)puVar3 + 0x2c);
          FUN_14162bcf0(&local_88,param_2,&local_58);
          return param_2;
        }
      }
      else if (param_4 == 2) {
        FUN_14162bcf0(&local_88,param_2,param_1 + 0x210);
        return param_2;
      }
    }
  }
  FUN_14238d570(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1423d58d0 FUN_1423d58d0 body=25 status=ok
// SIG undefined FUN_1423d58d0(void)

undefined8 * FUN_1423d58d0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x810);
  *param_2 = *(undefined8 *)(param_1 + 0x808);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1423d58f0 FUN_1423d58f0 body=16 status=ok
// SIG undefined FUN_1423d58f0(void)

undefined8 * FUN_1423d58f0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x7d4);
  return param_2;
}



// FUNCTION 1423d5900 GetSplineUpDir body=25 status=ok
// SIG undefined GetSplineUpDir(void)

undefined8 * USplineMeshComponent::GetSplineUpDir(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x7b8);
  *param_2 = *(undefined8 *)(param_1 + 0x7b0);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1423d5920 GetEnvelopeValue body=9 status=ok
// SIG undefined GetEnvelopeValue(void)

undefined4 UMediaSoundComponent::GetEnvelopeValue(longlong param_1)

{
  return *(undefined4 *)(param_1 + 2000);
}



// FUNCTION 1423d5930 FUN_1423d5930 body=16 status=ok
// SIG undefined FUN_1423d5930(void)

undefined8 * FUN_1423d5930(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x7c8);
  return param_2;
}



// FUNCTION 1423d5940 FUN_1423d5940 body=25 status=ok
// SIG undefined FUN_1423d5940(void)

undefined8 * FUN_1423d5940(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x7c4);
  *param_2 = *(undefined8 *)(param_1 + 0x7bc);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1423d5960 FUN_1423d5960 body=14 status=ok
// SIG undefined FUN_1423d5960(void)

undefined8 * FUN_1423d5960(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x480);
  return param_2;
}



// FUNCTION 1423d5970 GetStaticLightMapResolution body=41 status=ok
// SIG undefined GetStaticLightMapResolution(void)

int UStaticMeshComponent::GetStaticLightMapResolution(longlong *param_1)

{
  int local_res8 [2];
  int local_res10 [6];
  
  (**(code **)(*param_1 + 0x668))(param_1,local_res10,local_res8);
  if (local_res8[0] <= local_res10[0]) {
    local_res8[0] = local_res10[0];
  }
  return local_res8[0];
}



// FUNCTION 1423d59a0 FUN_1423d59a0 body=1084 status=ok
// SIG undefined FUN_1423d59a0(void)

void FUN_1423d59a0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  float fVar17;
  float fVar18;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *plVar16;
  
  if ((((*(byte *)((longlong)param_1 + 0x744) & 0x20) == 0) && (param_1[0xe5] != 0)) &&
     (cVar4 = FUN_142820890(param_1[0xe5],1,0xffffffff), cVar4 != '\0')) {
    fVar17 = (float)(**(code **)(*param_1 + 0x930))(param_1);
    plVar16 = (longlong *)0x0;
    plVar14 = param_1 + 0xef;
    if (*(char *)((longlong)param_1 + 0x24e) != '\0') {
      plVar14 = plVar16;
    }
    FUN_1423700c0(param_1,param_2,plVar14,fVar17 * *(float *)((longlong)param_1 + 0x754),param_3);
    iVar13 = (int)param_1[0xec];
    if (0 < iVar13) {
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      plVar14 = plVar16;
      do {
        plVar9 = (longlong *)0x0;
        lVar12 = param_1[0xeb];
        plVar8 = plVar9;
        if (((param_1[0xe5] != 0) && (lVar6 = *(longlong *)(param_1[0xe5] + 0x38), lVar6 != 0)) &&
           ((*(char *)(lVar6 + 0x5c) != '\0' || (*(int *)(lVar6 + 8) == iVar13)))) {
          plVar8 = *(longlong **)((longlong)plVar14 + lVar12 + 0x18);
          if (plVar8 == (longlong *)0x0) {
            plVar8 = plVar9;
            if (((param_1[0x23] != 0) && (lVar6 = AActor::GetLevel(), lVar6 != 0)) &&
               ((*(longlong *)(lVar6 + 0xc0) != 0 &&
                (((lVar7 = FUN_14256ac50(), lVar7 != 0 && (*(longlong *)(lVar7 + 0x1f0) != 0)) ||
                 (*(longlong *)(lVar6 + 0x1f0) != 0)))))) {
              puVar10 = (undefined8 *)((longlong)plVar14 + lVar12);
              local_78 = *puVar10;
              uStack_70 = puVar10[1];
              plVar8 = (longlong *)
                       UMapBuildDataRegistry::GetMeshBuildData(*(undefined4 *)puVar10,&local_78);
              if (plVar8 != (longlong *)0x0) goto LAB_1423d5b40;
            }
          }
          else {
LAB_1423d5b40:
            if ((longlong *)*plVar8 != (longlong *)0x0) {
              plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x30))();
            }
          }
        }
        cVar4 = FUN_142865d40(*(undefined4 *)(param_2 + 0x2c));
        if (((plVar9 != (longlong *)0x0) &&
            (cVar5 = FUN_14254a400(plVar9,cVar4 == '\0'), cVar5 != '\0')) &&
           ((fVar1 = *(float *)(plVar9 + 0x2a), 1e-08 < fVar1 &&
            (fVar18 = *(float *)((longlong)plVar9 + 0x154), 1e-08 < fVar18)))) {
          if (fVar1 <= fVar18) {
            fVar18 = fVar1;
          }
          fVar18 = (fVar17 * *(float *)(param_1[0xe5] + 0x80)) / fVar18;
          puVar10 = (undefined8 *)
                    operator_new<FStreamingTexturePrimitiveInfo,FDefaultAllocator>(0x30,param_3);
          if (puVar10 != (undefined8 *)0x0) {
            uVar11 = FUN_142548760(plVar9,cVar4 == '\0');
            *puVar10 = uVar11;
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x1d4);
            lVar12 = param_1[0x3b];
            uVar3 = *(undefined4 *)((longlong)param_1 + 0x1dc);
            *(int *)(puVar10 + 1) = (int)param_1[0x3a];
            *(undefined4 *)((longlong)puVar10 + 0xc) = uVar2;
            *(int *)(puVar10 + 2) = (int)lVar12;
            *(undefined4 *)((longlong)puVar10 + 0x14) = uVar3;
            puVar10[3] = param_1[0x3c];
            lVar12 = param_1[0x3d];
            *(float *)((longlong)puVar10 + 0x24) = fVar18;
            *(int *)(puVar10 + 4) = (int)lVar12;
            *(undefined4 *)(puVar10 + 5) = 0xffff0000;
          }
          lVar12 = FWmfMediaPlayer::GetSamples(plVar9);
          if ((lVar12 != 0) &&
             (puVar10 = (undefined8 *)
                        operator_new<FStreamingTexturePrimitiveInfo,FDefaultAllocator>(0x30,param_3)
             , puVar10 != (undefined8 *)0x0)) {
            uVar11 = FWmfMediaPlayer::GetSamples(plVar9);
            *puVar10 = uVar11;
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x1d4);
            lVar12 = param_1[0x3b];
            uVar3 = *(undefined4 *)((longlong)param_1 + 0x1dc);
            *(int *)(puVar10 + 1) = (int)param_1[0x3a];
            *(undefined4 *)((longlong)puVar10 + 0xc) = uVar2;
            *(int *)(puVar10 + 2) = (int)lVar12;
            *(undefined4 *)((longlong)puVar10 + 0x14) = uVar3;
            puVar10[3] = param_1[0x3c];
            lVar12 = param_1[0x3d];
            *(float *)((longlong)puVar10 + 0x24) = fVar18;
            *(int *)(puVar10 + 4) = (int)lVar12;
            *(undefined4 *)(puVar10 + 5) = 0xffff0000;
          }
          lVar12 = UNiagaraSystem::GetEffectType(plVar9);
          if ((lVar12 != 0) &&
             (puVar10 = (undefined8 *)
                        operator_new<FStreamingTexturePrimitiveInfo,FDefaultAllocator>(0x30,param_3)
             , puVar10 != (undefined8 *)0x0)) {
            uVar11 = UNiagaraSystem::GetEffectType(plVar9);
            *puVar10 = uVar11;
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x1d4);
            lVar12 = param_1[0x3b];
            uVar3 = *(undefined4 *)((longlong)param_1 + 0x1dc);
            *(int *)(puVar10 + 1) = (int)param_1[0x3a];
            *(undefined4 *)((longlong)puVar10 + 0xc) = uVar2;
            *(int *)(puVar10 + 2) = (int)lVar12;
            *(undefined4 *)((longlong)puVar10 + 0x14) = uVar3;
            puVar10[3] = param_1[0x3c];
            lVar12 = param_1[0x3d];
            *(float *)((longlong)puVar10 + 0x24) = fVar18;
            *(int *)(puVar10 + 4) = (int)lVar12;
            *(undefined4 *)(puVar10 + 5) = 0xffff0000;
          }
        }
        if (((((plVar8 != (longlong *)0x0) && ((longlong *)plVar8[1] != (longlong *)0x0)) &&
             (lVar12 = (**(code **)(*(longlong *)plVar8[1] + 0x30))(), lVar12 != 0)) &&
            ((*(longlong *)(lVar12 + 0x20) != 0 &&
             (fVar1 = *(float *)(lVar12 + 0x28), 1e-08 < fVar1)))) &&
           (fVar18 = *(float *)(lVar12 + 0x2c), 1e-08 < fVar18)) {
          if (fVar1 <= fVar18) {
            fVar18 = fVar1;
          }
          fVar1 = *(float *)(param_1[0xe5] + 0x80);
          puVar10 = (undefined8 *)
                    operator_new<FStreamingTexturePrimitiveInfo,FDefaultAllocator>(0x30,param_3);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = *(undefined8 *)(lVar12 + 0x20);
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x1d4);
            lVar12 = param_1[0x3b];
            uVar3 = *(undefined4 *)((longlong)param_1 + 0x1dc);
            *(int *)(puVar10 + 1) = (int)param_1[0x3a];
            *(undefined4 *)((longlong)puVar10 + 0xc) = uVar2;
            *(int *)(puVar10 + 2) = (int)lVar12;
            *(undefined4 *)((longlong)puVar10 + 0x14) = uVar3;
            puVar10[3] = param_1[0x3c];
            lVar12 = param_1[0x3d];
            *(float *)((longlong)puVar10 + 0x24) = (fVar17 * fVar1) / fVar18;
            *(int *)(puVar10 + 4) = (int)lVar12;
            *(undefined4 *)(puVar10 + 5) = 0xffff0000;
          }
        }
        iVar13 = (int)param_1[0xec];
        uVar15 = (int)plVar16 + 1;
        plVar16 = (longlong *)(ulonglong)uVar15;
        plVar14 = plVar14 + 0x18;
      } while ((int)uVar15 < iVar13);
    }
  }
  return;
}



// FUNCTION 1423d5e20 GetTextLocalSize body=128 status=ok
// SIG undefined GetTextLocalSize(void)

float * UTextRenderComponent::GetTextLocalSize(longlong *param_1,float *param_2)

{
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  (**(code **)(*param_1 + 0x4a8))(param_1,&local_28,&DAT_1468b5b70);
  *param_2 = (local_28 + local_1c) - (local_28 - local_1c);
  param_2[1] = (local_24 + local_18) - (local_24 - local_18);
  param_2[2] = (local_20 + local_14) - (local_20 - local_14);
  return param_2;
}



// FUNCTION 1423d5ea0 FUN_1423d5ea0 body=128 status=ok
// SIG undefined FUN_1423d5ea0(void)

float * FUN_1423d5ea0(longlong *param_1,float *param_2)

{
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  (**(code **)(*param_1 + 0x4a8))(param_1,&local_28,param_1 + 0x42);
  *param_2 = (local_28 + local_1c) - (local_28 - local_1c);
  param_2[1] = (local_24 + local_18) - (local_24 - local_18);
  param_2[2] = (local_20 + local_14) - (local_20 - local_14);
  return param_2;
}



// FUNCTION 1423d5f20 FUN_1423d5f20 body=574 status=ok
// SIG undefined FUN_1423d5f20(void)

void FUN_1423d5f20(longlong *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  bool bVar9;
  
  lVar6 = 0;
  *param_5 = 0;
  *param_4 = 0;
  cVar1 = (**(code **)(*param_1 + 0x660))();
  if (cVar1 == '\0') {
    *param_5 = (int)((float)param_2 * 1.33 * (float)param_3);
    lVar5 = param_1[0x24];
    lVar4 = lVar5;
    if (lVar5 == 0) {
      lVar4 = FUN_1423407b0(param_1);
      lVar5 = param_1[0x24];
    }
    uVar8 = DAT_1464c9c14;
    if (lVar4 != 0) {
      if (lVar5 == 0) {
        lVar4 = FUN_1423407b0(param_1);
        lVar5 = param_1[0x24];
        uVar8 = *(undefined4 *)(lVar4 + 0x1c0);
      }
      else {
        uVar8 = *(undefined4 *)(lVar5 + 0x1c0);
      }
    }
    if ((lVar5 != 0) || (lVar5 = FUN_1423407b0(param_1), lVar5 != 0)) {
      lVar6 = UWorld::GetWorldSettings(lVar5,0,1);
    }
    FUN_142865d40(uVar8);
    bVar2 = 4;
    if (lVar6 != 0) {
      bVar9 = *(char *)(lVar6 + 0x674) != '\0';
      bVar2 = bVar9 + 4;
      if (*(char *)(lVar6 + 0x675) != '\0') {
        bVar2 = bVar9 + 5;
      }
    }
    *param_4 = (int)((float)bVar2 * 1.33 * (float)param_2 * (float)param_3);
    iVar3 = UStaticMesh::GetNumLODs(param_1[0xe5]);
    if (((1 < iVar3) && (cVar1 = FUN_14281a570(param_1[0xe5]), cVar1 == '\0')) && (1 < iVar3)) {
      uVar7 = (ulonglong)(iVar3 - 1);
      do {
        param_2 = param_2 / 2;
        param_3 = param_3 / 2;
        *param_5 = *param_5 + (int)((float)param_2 * 1.33 * (float)param_3);
        *param_4 = *param_4 + (int)((float)param_2 * (float)bVar2 * 1.33 * (float)param_3);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x530) >> 2 & 1) != 0)) {
      cVar1 = FUN_142865d40(uVar8);
      if (cVar1 != '\0') {
        return;
      }
      iVar3 = *param_4 / 2;
    }
    else {
      iVar3 = *param_4 << 2;
    }
    *param_4 = iVar3;
  }
  return;
}



// FUNCTION 1423d6160 FUN_1423d6160 body=238 status=ok
// SIG undefined FUN_1423d6160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1423d6160(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined1 local_68 [12];
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_48 [64];
  
  fVar11 = 1.0;
  if (*(longlong *)(param_1 + 0x728) != 0) {
    uVar2 = UStaticMesh::GetBounds(*(longlong *)(param_1 + 0x728),local_48);
    FBoxSphereBounds::TransformBy(uVar2,local_68,param_1 + 0x210);
    if ((1.0 <= local_5c) && (local_5c = *(float *)(param_1 + 0x1dc) / local_5c, 1.0 < local_5c)) {
      fVar11 = local_5c;
    }
    fVar3 = fVar11;
    if ((1.0 <= local_58) && (fVar3 = *(float *)(param_1 + 0x1e0) / local_58, fVar3 <= fVar11)) {
      fVar3 = fVar11;
    }
    fVar11 = fVar3;
    if ((1.0 <= local_54) && (fVar11 = *(float *)(param_1 + 0x1e4) / local_54, fVar11 <= fVar3)) {
      fVar11 = fVar3;
    }
  }
  uVar7 = *(uint *)(param_1 + 0x230) & _DAT_146af12d0;
  uVar8 = *(uint *)(param_1 + 0x234) & uRam0000000146af12d4;
  uVar9 = *(uint *)(param_1 + 0x238) & uRam0000000146af12d8;
  uVar10 = *(uint *)(param_1 + 0x23c) & uRam0000000146af12dc;
  auVar4._4_4_ = uVar8;
  auVar4._0_4_ = uVar7;
  auVar4._8_4_ = uVar9;
  auVar4._12_4_ = uVar10;
  auVar5._4_4_ = uVar9;
  auVar5._0_4_ = uVar8;
  auVar5._8_4_ = uVar7;
  auVar5._12_4_ = uVar10;
  auVar5 = maxps(auVar4,auVar5);
  auVar1._4_4_ = uVar7;
  auVar1._0_4_ = uVar9;
  auVar1._8_4_ = uVar8;
  auVar1._12_4_ = uVar10;
  auVar5 = maxps(auVar5,auVar1);
  auVar6._4_12_ = auVar5._4_12_;
  auVar6._0_4_ = auVar5._0_4_ * fVar11;
  return auVar6._0_8_;
}



// FUNCTION 1423d6250 FUN_1423d6250 body=38 status=ok
// SIG undefined FUN_1423d6250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1423d6250(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = *(uint *)(param_1 + 0x230) & _DAT_146af12d0;
  uVar5 = *(uint *)(param_1 + 0x234) & uRam0000000146af12d4;
  uVar6 = *(uint *)(param_1 + 0x238) & uRam0000000146af12d8;
  uVar7 = *(uint *)(param_1 + 0x23c) & uRam0000000146af12dc;
  auVar2._4_4_ = uVar5;
  auVar2._0_4_ = uVar4;
  auVar2._8_4_ = uVar6;
  auVar2._12_4_ = uVar7;
  auVar3._4_4_ = uVar6;
  auVar3._0_4_ = uVar5;
  auVar3._8_4_ = uVar4;
  auVar3._12_4_ = uVar7;
  auVar3 = maxps(auVar2,auVar3);
  auVar1._4_4_ = uVar4;
  auVar1._0_4_ = uVar6;
  auVar1._8_4_ = uVar5;
  auVar1._12_4_ = uVar7;
  auVar3 = maxps(auVar3,auVar1);
  return auVar3._0_8_;
}



// FUNCTION 1423d6280 GetTimeRange body=57 status=ok
// SIG undefined GetTimeRange(void)

void FRichCurve::GetTimeRange(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0x68) == 0) {
    *param_2 = 0;
    *param_3 = 0;
    return;
  }
  *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 4);
  *param_3 = *(undefined4 *)
              ((longlong)*(int *)(param_1 + 0x68) * 0x1c + -0x18 + *(longlong *)(param_1 + 0x60));
  return;
}



// FUNCTION 1423d62c0 FUN_1423d62c0 body=224 status=ok
// SIG undefined FUN_1423d62c0(void)

void FUN_1423d62c0(longlong param_1,float *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong local_18;
  int local_10;
  
  (**(code **)(*(longlong *)(param_1 + 0x28) + 8))(param_1 + 0x28,&local_18);
  if (0 < local_10) {
    lVar2 = *(longlong *)(local_18 + 8);
    if (*(int *)(lVar2 + 0x68) == 0) {
      *param_2 = 0.0;
      fVar5 = 0.0;
    }
    else {
      *param_2 = *(float *)(*(longlong *)(lVar2 + 0x60) + 4);
      fVar5 = *(float *)((longlong)*(int *)(lVar2 + 0x68) * 0x1c + -0x18 +
                        *(longlong *)(lVar2 + 0x60));
    }
    *param_3 = fVar5;
    if (1 < local_10) {
      plVar3 = (longlong *)(local_18 + 0x18);
      uVar4 = (ulonglong)(local_10 - 1);
      do {
        iVar1 = *(int *)(*plVar3 + 0x68);
        if (iVar1 == 0) {
          fVar5 = 0.0;
          fVar7 = 0.0;
        }
        else {
          lVar2 = *(longlong *)(*plVar3 + 0x60);
          fVar5 = *(float *)(lVar2 + 4);
          fVar7 = *(float *)((longlong)iVar1 * 0x1c + -0x18 + lVar2);
        }
        plVar3 = plVar3 + 2;
        fVar6 = *param_2;
        if (fVar5 <= *param_2) {
          fVar6 = fVar5;
        }
        *param_2 = fVar6;
        fVar5 = *param_3;
        if (*param_3 <= fVar7) {
          fVar5 = fVar7;
        }
        *param_3 = fVar5;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  if (local_18 != 0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 1423d63a0 FUN_1423d63a0 body=53 status=ok
// SIG undefined FUN_1423d63a0(void)

undefined8 * FUN_1423d63a0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x168) == 0) {
    puVar4 = (undefined8 *)&DAT_1468b5b70;
  }
  else {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x210);
  }
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



// FUNCTION 1423d63f0 GetTypeHash body=379 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(ulonglong *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = (int)(param_1[1] >> 4);
  iVar1 = (int)(*param_1 >> 4);
  uVar4 = 0x9e3779b9U - iVar2 ^ iVar2 << 8;
  uVar6 = -(uVar4 + iVar2) ^ uVar4 >> 0xd;
  uVar3 = (iVar2 - uVar4) - uVar6 ^ uVar6 >> 0xc;
  uVar5 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 0x10;
  uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 5;
  uVar4 = (uVar3 - uVar5) - uVar6 ^ uVar6 >> 3;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 << 10;
  uVar3 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xf;
  uVar5 = -(uVar3 + iVar1) ^ uVar3 >> 0xd;
  uVar4 = (iVar1 - uVar3) - uVar5 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar4 = ((uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar6 ^ uVar4 << 8;
  uVar5 = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
  return (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf;
}



// FUNCTION 1423d6580 FUN_1423d6580 body=430 status=ok
// SIG undefined FUN_1423d6580(void)

void FUN_1423d6580(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong local_res8;
  
  lVar5 = param_1[0xe5];
  if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x38) != 0)) &&
     (iVar7 = 0, 0 < *(int *)(*(longlong *)(lVar5 + 0x38) + 8))) {
    local_res8 = 0;
    do {
      iVar6 = 0;
      lVar5 = *(longlong *)(local_res8 + **(longlong **)(lVar5 + 0x38));
      if (0 < *(int *)(lVar5 + 0x480)) {
        lVar8 = 0;
        do {
          lVar3 = (**(code **)(*param_1 + 0x560))
                            (param_1,*(undefined4 *)(lVar8 + *(longlong *)(lVar5 + 0x478)));
          plVar2 = (longlong *)*param_2;
          iVar1 = (int)param_2[1];
          for (plVar4 = plVar2; plVar4 != plVar2 + iVar1; plVar4 = plVar4 + 1) {
            if (*plVar4 == lVar3) {
              if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1) goto LAB_1423d6671;
              break;
            }
          }
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(longlong *)((longlong)iVar1 * 8 + *param_2) = lVar3;
LAB_1423d6671:
          iVar6 = iVar6 + 1;
          lVar8 = lVar8 + 0x18;
        } while (iVar6 < *(int *)(lVar5 + 0x480));
      }
      lVar5 = param_1[0xe5];
      local_res8 = local_res8 + 8;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(*(longlong *)(lVar5 + 0x38) + 8));
  }
  if (param_1[0xe6] != 0) {
    iVar7 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
    }
    *(longlong *)(*param_2 + (longlong)iVar7 * 8) = param_1[0xe6];
  }
  if (param_1[0xe7] != 0) {
    iVar7 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
    }
    *(longlong *)(*param_2 + (longlong)iVar7 * 8) = param_1[0xe7];
  }
  return;
}



// FUNCTION 1423d6730 FUN_1423d6730 body=76 status=ok
// SIG undefined FUN_1423d6730(void)

void FUN_1423d6730(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x708);
  return;
}



// FUNCTION 1423d6780 GetValueRange body=325 status=ok
// SIG undefined GetValueRange(void)

void FRichCurve::GetValueRange(longlong param_1,float *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  float fVar7;
  float fVar8;
  ulonglong uVar6;
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 0) {
    fVar8 = *(float *)(*(longlong *)(param_1 + 0x60) + 8);
    *param_3 = fVar8;
    *param_2 = fVar8;
    if (0 < *(int *)(param_1 + 0x68)) {
      uVar4 = uVar3;
      uVar6 = uVar3;
      do {
        lVar2 = *(longlong *)(param_1 + 0x60);
        fVar8 = *(float *)(uVar3 + 8 + lVar2);
        fVar7 = *param_2;
        if (fVar8 <= *param_2) {
          fVar7 = fVar8;
        }
        *param_2 = fVar7;
        fVar8 = *(float *)(uVar3 + 8 + lVar2);
        if (fVar8 <= *param_3) {
          fVar8 = *param_3;
        }
        *param_3 = fVar8;
        if ((*(char *)(uVar3 + lVar2) == '\x02') && (uVar4 != (longlong)(iVar1 + -1))) {
          fVar8 = *(float *)(uVar3 + 4 + lVar2);
          fVar7 = *(float *)(*(longlong *)(param_1 + 0x60) + 0x20 + uVar3);
          FeaturePointMethod<FRichCurve_const_>
                    (param_1,fVar8,fVar7,*(undefined4 *)(uVar3 + 8 + lVar2),(fVar7 - fVar8) * 0.2,0,
                     3,param_3,param_2);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar4 = uVar4 + 1;
        uVar3 = uVar3 + 0x1c;
      } while ((int)uVar5 < *(int *)(param_1 + 0x68));
    }
    return;
  }
  *param_3 = 0.0;
  *param_2 = 0.0;
  return;
}



// FUNCTION 1423d68d0 FUN_1423d68d0 body=203 status=ok
// SIG undefined FUN_1423d68d0(void)

void FUN_1423d68d0(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float local_res8 [2];
  float local_res20 [2];
  longlong local_28;
  int local_20;
  
  (**(code **)(*(longlong *)(param_1 + 0x28) + 8))(param_1 + 0x28,&local_28);
  if (0 < local_20) {
    FRichCurve::GetValueRange(*(undefined8 *)(local_28 + 8),param_2,param_3);
    iVar2 = 1;
    if (1 < local_20) {
      lVar1 = 0x10;
      do {
        FRichCurve::GetValueRange(*(undefined8 *)(lVar1 + 8 + local_28),local_res8,local_res20);
        lVar1 = lVar1 + 0x10;
        fVar3 = *param_2;
        if (local_res8[0] <= *param_2) {
          fVar3 = local_res8[0];
        }
        iVar2 = iVar2 + 1;
        *param_2 = fVar3;
        fVar3 = *param_3;
        if (*param_3 <= local_res20[0]) {
          fVar3 = local_res20[0];
        }
        *param_3 = fVar3;
      } while (iVar2 < local_20);
    }
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1423d69a0 GetVectorValue body=108 status=ok
// SIG undefined GetVectorValue(void)

undefined4 * UCurveVector::GetVectorValue(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FRichCurve::Eval(param_1 + 0x30,param_3,0);
  *param_2 = uVar1;
  uVar1 = FRichCurve::Eval(param_1 + 0xa0,param_3,0);
  param_2[1] = uVar1;
  uVar1 = FRichCurve::Eval(param_1 + 0x110,param_3,0);
  param_2[2] = uVar1;
  return param_2;
}



// FUNCTION 1423d6a10 GetViewFrustumBounds body=2299 status=ok
// SIG undefined GetViewFrustumBounds(void)

void GetViewFrustumBounds
               (longlong param_1,float *param_2,undefined8 *param_3,char param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
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
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 6) {
    TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeTo(param_1,6);
  }
  if (param_5 != '\0') {
    fVar11 = param_2[6];
    fVar13 = param_2[2];
    fVar6 = param_2[10];
    fVar4 = fVar13 * fVar13 + fVar11 * fVar11 + fVar6 * fVar6;
    if (9.9999994e-11 < fVar4) {
      iVar1 = *(int *)(param_1 + 0x70);
      lVar3 = (longlong)iVar1;
      auVar9 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar4 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar4 * 0.5 * fVar8 * fVar8);
      fVar4 = param_2[0xe];
      *(int *)(param_1 + 0x70) = iVar1 + 1;
      if (*(int *)(param_1 + 0x74) < iVar1 + 1) {
        TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(param_1,iVar1);
      }
      lVar2 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        lVar2 = param_1;
      }
      *(ulonglong *)(lVar2 + lVar3 * 0x10) = CONCAT44(-(fVar8 * fVar11),-(fVar8 * fVar13));
      *(float *)(lVar2 + 8 + lVar3 * 0x10) = -(fVar8 * fVar6);
      *(float *)(lVar2 + 0xc + lVar3 * 0x10) = fVar8 * fVar4;
    }
  }
  fVar13 = param_2[4];
  fVar6 = *param_2;
  fVar8 = param_2[7];
  fVar7 = param_2[3];
  fVar12 = fVar13 + fVar8;
  fVar11 = param_2[8];
  fVar14 = fVar6 + fVar7;
  fVar4 = param_2[0xb];
  fVar10 = fVar11 + fVar4;
  fVar5 = fVar14 * fVar14 + fVar12 * fVar12 + fVar10 * fVar10;
  if (9.9999994e-11 < fVar5) {
    auVar9 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar9._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar11 = param_2[0xf];
    fVar13 = param_2[0xc];
    iVar1 = *(int *)(param_1 + 0x70);
    lVar3 = (longlong)iVar1;
    *(int *)(param_1 + 0x70) = iVar1 + 1;
    if (*(int *)(param_1 + 0x74) < iVar1 + 1) {
      TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar2 = param_1;
    }
    *(ulonglong *)(lVar2 + lVar3 * 0x10) = CONCAT44(-(fVar6 * fVar12),-(fVar6 * fVar14));
    *(float *)(lVar2 + 8 + lVar3 * 0x10) = -(fVar6 * fVar10);
    *(float *)(lVar2 + 0xc + lVar3 * 0x10) = (fVar11 + fVar13) * fVar6;
    fVar4 = param_2[0xb];
    fVar11 = param_2[8];
    fVar8 = param_2[7];
    fVar13 = param_2[4];
    fVar7 = param_2[3];
    fVar6 = *param_2;
  }
  fVar13 = fVar8 - fVar13;
  fVar6 = fVar7 - fVar6;
  fVar11 = fVar4 - fVar11;
  fVar5 = fVar6 * fVar6 + fVar13 * fVar13 + fVar11 * fVar11;
  if (9.9999994e-11 < fVar5) {
    auVar9 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar7 = auVar9._0_4_;
    fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
    fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
    fVar4 = param_2[0xf];
    fVar8 = param_2[0xc];
    iVar1 = *(int *)(param_1 + 0x70);
    lVar3 = (longlong)iVar1;
    *(int *)(param_1 + 0x70) = iVar1 + 1;
    if (*(int *)(param_1 + 0x74) < iVar1 + 1) {
      TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar2 = param_1;
    }
    *(ulonglong *)(lVar2 + lVar3 * 0x10) = CONCAT44(-(fVar7 * fVar13),-(fVar7 * fVar6));
    *(float *)(lVar2 + 8 + lVar3 * 0x10) = -(fVar7 * fVar11);
    *(float *)(lVar2 + 0xc + lVar3 * 0x10) = (fVar4 - fVar8) * fVar7;
    fVar4 = param_2[0xb];
    fVar8 = param_2[7];
    fVar7 = param_2[3];
  }
  fVar13 = param_2[5];
  fVar6 = param_2[1];
  fVar12 = fVar8 - fVar13;
  fVar11 = param_2[9];
  fVar14 = fVar7 - fVar6;
  fVar10 = fVar4 - fVar11;
  fVar5 = fVar14 * fVar14 + fVar12 * fVar12 + fVar10 * fVar10;
  if (9.9999994e-11 < fVar5) {
    auVar9 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar9._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar11 = param_2[0xf];
    fVar13 = param_2[0xd];
    iVar1 = *(int *)(param_1 + 0x70);
    lVar3 = (longlong)iVar1;
    *(int *)(param_1 + 0x70) = iVar1 + 1;
    if (*(int *)(param_1 + 0x74) < iVar1 + 1) {
      TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar2 = param_1;
    }
    *(ulonglong *)(lVar2 + lVar3 * 0x10) = CONCAT44(-(fVar6 * fVar12),-(fVar6 * fVar14));
    *(float *)(lVar2 + 8 + lVar3 * 0x10) = -(fVar6 * fVar10);
    *(float *)(lVar2 + 0xc + lVar3 * 0x10) = (fVar11 - fVar13) * fVar6;
    fVar4 = param_2[0xb];
    fVar11 = param_2[9];
    fVar8 = param_2[7];
    fVar13 = param_2[5];
    fVar7 = param_2[3];
    fVar6 = param_2[1];
  }
  fVar11 = fVar11 + fVar4;
  fVar8 = fVar8 + fVar13;
  fVar7 = fVar7 + fVar6;
  fVar13 = fVar7 * fVar7 + fVar8 * fVar8 + fVar11 * fVar11;
  if (9.9999994e-11 < fVar13) {
    fVar6 = param_2[0xf];
    iVar1 = *(int *)(param_1 + 0x70);
    lVar3 = (longlong)iVar1;
    fVar4 = param_2[0xd];
    auVar9 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    *(int *)(param_1 + 0x70) = iVar1 + 1;
    fVar5 = auVar9._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar13 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar13 * 0.5 * fVar5 * fVar5);
    if (*(int *)(param_1 + 0x74) < iVar1 + 1) {
      TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar2 = param_1;
    }
    *(ulonglong *)(lVar2 + lVar3 * 0x10) = CONCAT44(-(fVar5 * fVar8),-(fVar5 * fVar7));
    *(float *)(lVar2 + 8 + lVar3 * 0x10) = -(fVar5 * fVar11);
    *(float *)(lVar2 + 0xc + lVar3 * 0x10) = (fVar6 + fVar4) * fVar5;
  }
  if (param_4 == '\0') {
    fVar6 = param_2[7] - param_2[6];
    fVar4 = param_2[3] - param_2[2];
    fVar13 = param_2[0xb] - param_2[10];
    fVar11 = fVar4 * fVar4 + fVar6 * fVar6 + fVar13 * fVar13;
    if (9.9999994e-11 < fVar11) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
      fVar7 = auVar9._0_4_;
      fVar7 = fVar7 + fVar7 * (0.5 - fVar11 * 0.5 * fVar7 * fVar7);
      fVar7 = fVar7 + fVar7 * (0.5 - fVar11 * 0.5 * fVar7 * fVar7);
      fVar11 = param_2[0xf];
      fVar8 = param_2[0xe];
      iVar1 = *(int *)(param_1 + 0x70);
      lVar3 = (longlong)iVar1;
      *(int *)(param_1 + 0x70) = iVar1 + 1;
      if (*(int *)(param_1 + 0x74) < iVar1 + 1) {
        TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(param_1,iVar1);
      }
      lVar2 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        lVar2 = param_1;
      }
      *(ulonglong *)(lVar2 + lVar3 * 0x10) = CONCAT44(-(fVar7 * fVar6),-(fVar7 * fVar4));
      *(float *)(lVar2 + 8 + lVar3 * 0x10) = -(fVar7 * fVar13);
      *(float *)(lVar2 + 0xc + lVar3 * 0x10) = (fVar11 - fVar8) * fVar7;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x70);
    lVar3 = (longlong)iVar1;
    *(int *)(param_1 + 0x70) = iVar1 + 1;
    if (*(int *)(param_1 + 0x74) < iVar1 + 1) {
      TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar2 = param_1;
    }
    *(undefined8 *)(lVar2 + lVar3 * 0x10) = *param_3;
    *(undefined4 *)(lVar2 + 8 + lVar3 * 0x10) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(lVar2 + 0xc + lVar3 * 0x10) = *(undefined4 *)((longlong)param_3 + 0xc);
  }
  FConvexVolume::Init(param_1);
  return;
}



// FUNCTION 1423d7310 GetViewFrustumBounds body=27 status=ok
// SIG undefined GetViewFrustumBounds(void)

void GetViewFrustumBounds(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 local_18 [24];
  
  GetViewFrustumBounds(param_1,param_2,local_18,0,param_3);
  return;
}



// FUNCTION 1423d7330 FUN_1423d7330 body=281 status=ok
// SIG undefined FUN_1423d7330(void)

undefined8 * FUN_1423d7330(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  cVar1 = FUN_142730ad0(param_1,param_3);
  if ((cVar1 == '\0') ||
     (uVar3 = 0x400, (*(uint *)(*(longlong *)(param_3 + 0x10) + 0x2c) & 0x400000) == 0)) {
    uVar3 = 0;
  }
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | uVar3;
  bVar2 = FUN_142730880(param_1,param_3);
  uVar4 = *(uint *)((longlong)param_2 + 4) & 0xfffff7ff | (uint)bVar2 << 0xb;
  *(uint *)((longlong)param_2 + 4) = uVar4;
  uVar4 = ((*(uint *)(param_1 + 0x20) >> 1 & 0xff) << 0xc ^ uVar4) & 0x1000 ^ uVar4;
  *(uint *)((longlong)param_2 + 4) = uVar4;
  uVar4 = ((*(uint *)(param_1 + 0x18) >> 0x15 & 0xff) << 0xd ^ uVar4) & 0x2000 ^ uVar4;
  *(uint *)((longlong)param_2 + 4) = uVar4;
  uVar4 = uVar4 & 0xffefffff;
  cVar1 = *(char *)(param_1 + 0x2c);
  uVar3 = 0;
  if (cVar1 != '\x01') {
    uVar3 = 0x100000;
  }
  *(uint *)((longlong)param_2 + 4) = uVar3 | uVar4;
  if (((*(uint *)(param_1 + 0x18) & 0x300) == 0) && ((*(uint *)(param_1 + 0x18) >> 10 & 1) == 0)) {
    uVar3 = 0x100;
    uVar5 = 0x100100;
  }
  else {
    uVar3 = 0x200;
    uVar5 = 0x100200;
  }
  if (cVar1 != '\x01') {
    uVar3 = uVar5;
  }
  *(uint *)((longlong)param_2 + 4) = uVar3 | uVar4;
  FUN_1425a2630(param_1 + 0x3a0,param_2);
  return param_2;
}



// FUNCTION 1423d7470 FUN_1423d7470 body=842 status=ok
// SIG undefined FUN_1423d7470(void)

undefined8 FUN_1423d7470(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong uStack_10;
  
  iVar14 = *(int *)(param_3 + 0xd30);
  *(int *)(param_3 + 0xd30) = iVar14 + 1;
  if (*(int *)(param_3 + 0xd34) < iVar14 + 1) {
    TArray<FWholeSceneProjectedShadowInitializer,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow
              (param_3,iVar14);
  }
  puVar18 = (ulonglong *)0x0;
  lVar16 = *(longlong *)(param_3 + 0xd20);
  if (*(longlong *)(param_3 + 0xd20) == 0) {
    lVar16 = param_3;
  }
  puVar17 = (ulonglong *)((longlong)iVar14 * 0x230 + lVar16);
  if (puVar17 != (ulonglong *)0x0) {
    puVar17[0x12] = 0;
    *(undefined4 *)(puVar17 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar17 + 0x9c) = 0x3f800000;
    *(undefined4 *)(puVar17 + 0x16) = 0;
    *(undefined8 *)((longlong)puVar17 + 0xb4) = 0x4a000000;
    *(undefined4 *)((longlong)puVar17 + 0xbc) = 0;
    puVar17[0x18] = 0x4a000000;
    puVar17[0x26] = 0;
    puVar17[0x28] = 0;
    puVar17[0x3a] = 0;
    puVar17[0x3c] = 0;
    *(undefined1 *)(puVar17 + 0x42) = 0;
    *(undefined4 *)((longlong)puVar17 + 0x214) = 0xffffffff;
    *(undefined2 *)(puVar17 + 0x44) = 0;
    puVar18 = puVar17;
  }
  uVar1 = *(uint *)(param_1 + 0xa8);
  *puVar18 = *(ulonglong *)(param_1 + 0xa0) ^ 0x8000000080000000;
  *(uint *)(puVar18 + 1) = uVar1 ^ 0x80000000;
  uStack_10 = *(ulonglong *)(param_1 + 0x68);
  uVar9 = *(ulonglong *)(param_1 + 0x38);
  uVar10 = *(ulonglong *)(param_1 + 0x40);
  uVar11 = *(ulonglong *)(param_1 + 0x48);
  uVar12 = *(ulonglong *)(param_1 + 0x50);
  uVar13 = *(ulonglong *)(param_1 + 0x58);
  puVar18[2] = *(ulonglong *)(param_1 + 0x30);
  puVar18[3] = uVar9;
  puVar18[4] = uVar10;
  puVar18[5] = uVar11;
  puVar18[6] = uVar12;
  puVar18[7] = uVar13;
  uStack_10 = uStack_10 & 0xffffffff00000000;
  puVar18[8] = 0;
  puVar18[9] = uStack_10;
  uVar2 = *(undefined4 *)(param_1 + 0x1fc);
  puVar18[10] = CONCAT44(uVar2,0x3f800000);
  *(undefined4 *)(puVar18 + 0xb) = uVar2;
  *(undefined8 *)((longlong)puVar18 + 0x5c) = 0x3f800000;
  *(undefined4 *)((longlong)puVar18 + 100) = 0;
  fVar20 = *(float *)(param_1 + 0x1f0);
  fVar3 = *(float *)(param_1 + 0x1c0);
  if (0.707107 <= fVar20) {
    fVar21 = (0.5 / fVar20) * fVar3;
    fVar22 = *(float *)(param_1 + 0x50) * fVar21;
    fVar19 = *(float *)(param_1 + 0x40) * fVar21;
    fVar20 = *(float *)(param_1 + 0x30) * fVar21;
  }
  else {
    fVar21 = fVar3 * *(float *)(param_1 + 0x1f8);
    fVar22 = *(float *)(param_1 + 0x50) * fVar3 * fVar20;
    fVar19 = *(float *)(param_1 + 0x40) * fVar3 * fVar20;
    fVar20 = *(float *)(param_1 + 0x30) * fVar3 * fVar20;
  }
  fVar3 = *(float *)(param_1 + 0xa0);
  fVar4 = *(float *)(param_1 + 0xa4);
  fVar5 = *(float *)(param_1 + 0xa8);
  fVar6 = *(float *)(param_1 + 0xa0);
  fVar7 = *(float *)(param_1 + 0xa4);
  fVar8 = *(float *)(param_1 + 0xa8);
  *(undefined4 *)(puVar18 + 0x14) = 0x3dcccccd;
  *(float *)(puVar18 + 0xd) = (fVar3 + fVar20) - fVar6;
  *(float *)((longlong)puVar18 + 0x6c) = (fVar4 + fVar19) - fVar7;
  *(float *)(puVar18 + 0xe) = (fVar5 + fVar22) - fVar8;
  *(float *)((longlong)puVar18 + 0x74) = fVar21;
  puVar18[0xf] = CONCAT44(fVar21,fVar21);
  *(undefined4 *)(puVar18 + 0x12) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x94) = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0x3f800000;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0;
  *(float *)(puVar18 + 0x10) = fVar21;
  *(undefined4 *)((longlong)puVar18 + 0xa4) = *(undefined4 *)(param_1 + 0x1c0);
  if ((*(byte *)(param_1 + 0x182) & 1) != 0) {
    iVar14 = FSceneViewFamily::GetFeatureLevel(param_2);
    uVar1 = (&DAT_1464c9c48)[iVar14];
    if ((((uVar1 < 0x20) && ((0xc0000005U >> (uVar1 & 0x1f) & 1) != 0)) ||
        ((uVar1 < 0x1c &&
         ((((0x8c51800U >> (uVar1 & 0x1f) & 1) != 0 && (iVar14 = FUN_1419ef5f0(uVar1), 2 < iVar14))
          && (uVar15 = RHIGetShaderLanguageVersion(uVar1), 1 < uVar15)))))) ||
       (((uVar1 - 4 & 0xffffffe7) == 0 && (uVar1 != 0xc)))) {
      *(undefined1 *)((longlong)puVar18 + 0x221) = 1;
      return 1;
    }
  }
  *(undefined1 *)((longlong)puVar18 + 0x221) = 0;
  return 1;
}



// FUNCTION 1423d77c0 FUN_1423d77c0 body=111 status=ok
// SIG undefined FUN_1423d77c0(void)

undefined4 * FUN_1423d77c0(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x744) & 1) != 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x740);
    return param_2;
  }
  if (*(char *)(param_1 + 0x24e) == '\0') {
    *(undefined2 *)((longlong)param_2 + 1) = 0xff;
    *(undefined1 *)((longlong)param_2 + 3) = 0xff;
    *(undefined1 *)param_2 = 0xff;
    return param_2;
  }
  if (*(char *)(param_1 + 0x24e) == '\x01') {
    *(undefined2 *)((longlong)param_2 + 1) = 0x8080;
    *(undefined1 *)((longlong)param_2 + 3) = 0xff;
    *(undefined1 *)param_2 = 0xff;
    return param_2;
  }
  bVar1 = *(byte *)(param_1 + 0x3c0);
  *(undefined1 *)((longlong)param_2 + 3) = 0xff;
  if ((bVar1 & 8) != 0) {
    *(undefined2 *)((longlong)param_2 + 1) = 0xff;
    *(undefined1 *)param_2 = 0x80;
    return param_2;
  }
  *(undefined2 *)((longlong)param_2 + 1) = 0xff00;
  *(undefined1 *)param_2 = 0xff;
  return param_2;
}



// FUNCTION 1423d7830 Get_Concurrent body=19 status=ok
// SIG undefined Get_Concurrent(void)

longlong IStreamingManager::Get_Concurrent(void)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (DAT_146af1738 != -1) {
    lVar1 = DAT_146af1738;
  }
  return lVar1;
}



// FUNCTION 1423d7850 FUN_1423d7850 body=327 status=ok
// SIG undefined FUN_1423d7850(void)

void FUN_1423d7850(void)

{
  int iVar1;
  void *_Src;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  void *local_38;
  ulonglong local_30;
  int local_28;
  void *local_20;
  int local_18;
  
  pvVar4 = (void *)0x0;
  local_28 = -1;
  local_38 = (void *)0x0;
  local_30 = 0;
  uVar3 = ACharacter::GetPrivateStaticClass();
  FUN_1417a5560(uVar3,&local_38,1,0x10,0);
  _Src = local_38;
  lVar7 = (longlong)(int)local_30;
  do {
    local_28 = local_28 + 1;
    if ((int)local_30 <= local_28) break;
  } while (*(longlong *)((longlong)local_38 + (longlong)local_28 * 8) == 0);
  local_20 = (void *)0x0;
  local_18 = (int)local_30;
  iVar5 = local_28;
  iVar1 = (int)local_30;
  iVar2 = local_18;
  iVar6 = 0;
  if ((int)local_30 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_20,local_30 & 0xffffffff,0);
    pvVar4 = local_20;
    _guard_xfg_dispatch_icall_nop(local_20,_Src,lVar7 << 3);
    iVar5 = local_28;
    iVar1 = local_18;
    iVar2 = local_18;
    iVar6 = (int)local_30;
  }
  do {
    local_18 = iVar2;
    iVar2 = local_18;
    local_18 = iVar1;
    if (iVar5 == iVar6) {
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      return;
    }
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)iVar5 * 8);
    FUN_1423ca740(uVar3);
    FUN_1423424e0(uVar3);
    do {
      iVar5 = iVar5 + 1;
      iVar1 = local_18;
      if (iVar2 <= iVar5) break;
    } while (*(longlong *)((longlong)pvVar4 + (longlong)iVar5 * 8) == 0);
  } while( true );
}



// FUNCTION 1423d79a0 HasAnyAlphaKeys body=27 status=ok
// SIG undefined HasAnyAlphaKeys(void)

bool UCurveLinearColor::HasAnyAlphaKeys(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x158) + 8))();
  return 0 < iVar1;
}



// FUNCTION 1423d7a20 HasShutdown body=12 status=ok
// SIG undefined HasShutdown(void)

bool IStreamingManager::HasShutdown(void)

{
  return DAT_146af1738 == -1;
}



// FUNCTION 1423d7a30 FUN_1423d7a30 body=115 status=ok
// SIG undefined FUN_1423d7a30(void)

undefined8 FUN_1423d7a30(longlong *param_1,char param_2)

{
  char cVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  if ((param_2 != '\0') && (param_1[0xe5] == 0)) {
    return 1;
  }
  local_res18[0] = 0;
  local_res10[0] = 0;
  (**(code **)(*param_1 + 0x668))(param_1,local_res18,local_res10);
  cVar1 = FUN_14238efd0(param_1);
  if (((cVar1 != '\0') && (param_1[0xe5] != 0)) &&
     (cVar1 = (**(code **)(*param_1 + 0x938))(param_1,local_res18[0],local_res10[0]), cVar1 != '\0')
     ) {
    return 1;
  }
  return 0;
}



// FUNCTION 1423d7ab0 FUN_1423d7ab0 body=836 status=ok
// SIG undefined FUN_1423d7ab0(void)

void FUN_1423d7ab0(longlong param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  wchar_t *_Str1;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  wchar_t *local_res10;
  int local_res20 [2];
  uint local_48;
  int local_44;
  ulonglong local_40;
  undefined8 local_38;
  
  local_res10 = param_2;
  cVar3 = FParse::Command(&local_res10,L"CustomLODData",1);
  if (cVar3 != '\0') {
    uVar11 = 0;
    iVar10 = 0;
    wVar2 = *local_res10;
    while ((wVar2 != L'\0' && (iVar6 = iswspace(wVar2), iVar6 != 0))) {
      local_res10 = local_res10 + 1;
      wVar2 = *local_res10;
    }
    cVar3 = FParse::Value(local_res10,L"LOD=",&local_44);
    uVar9 = uVar11;
    if (cVar3 != '\0') {
      FString::PrintfImpl(&local_40,&DAT_14506e694,local_44);
      uVar9 = local_40;
      iVar6 = iVar10;
      if ((int)local_38 != 0) {
        iVar6 = (int)local_38 + -1;
      }
      local_res10 = local_res10 + (longlong)iVar6 + 4;
      if (-1 < local_44) {
        FUN_142826ef0(param_1,local_44 + 1,local_44 + 1);
      }
    }
    wVar2 = *local_res10;
    while ((wVar2 != L'\0' && (iVar6 = iswspace(wVar2), iVar6 != 0))) {
      local_res10 = local_res10 + 1;
      wVar2 = *local_res10;
    }
    local_48 = 0;
    cVar3 = FParse::Value(local_res10,L"NumOverrideColors=",&local_48);
    if (cVar3 != '\0') {
      FString::PrintfImpl(&local_40,&DAT_14506e794,local_48);
      if (uVar9 != 0) {
        FMemory::Free(uVar9);
      }
      iVar6 = (int)local_38 + -1;
      if ((int)local_38 == 0) {
        iVar6 = iVar10;
      }
      local_res10 = local_res10 + (longlong)iVar6 + 0x12;
      uVar9 = local_40;
    }
    wVar2 = *local_res10;
    while ((wVar2 != L'\0' && (iVar6 = iswspace(wVar2), iVar6 != 0))) {
      local_res10 = local_res10 + 1;
      wVar2 = *local_res10;
    }
    lVar14 = (longlong)local_44 * 0xc0 + *(longlong *)(param_1 + 0x758);
    FUN_1423d7e00(lVar14,&local_res10);
    wVar2 = *local_res10;
    while ((wVar2 != L'\0' && (iVar6 = iswspace(wVar2), iVar6 != 0))) {
      local_res10 = local_res10 + 1;
      wVar2 = *local_res10;
    }
    uVar13 = uVar11;
    if (local_48 != 0) {
      do {
        local_res20[0] = 0;
        cVar3 = FParse::Value(local_res10,L"ColorChannelIndex=",local_res20);
        if (cVar3 == '\0') break;
        FString::PrintfImpl(&local_40,&DAT_14506ea84,local_res20[0]);
        if (uVar9 != 0) {
          FMemory::Free(uVar9);
        }
        uVar9 = local_40;
        iVar6 = (int)local_38;
        bVar15 = (int)local_38 == 0;
        local_40 = 0;
        local_38 = 0;
        iVar6 = iVar6 + -1;
        if (bVar15) {
          iVar6 = iVar10;
        }
        pwVar1 = local_res10 + (longlong)iVar6 + 0x12;
        local_res10 = pwVar1;
        if (pwVar1 != (wchar_t *)0x0) {
          wVar4 = towupper(0x43);
          wVar2 = *pwVar1;
          while (wVar2 != L'\0') {
            _Str1 = pwVar1 + 1;
            wVar5 = towupper(wVar2);
            if ((wVar5 == wVar4) && (iVar6 = _wcsnicmp(_Str1,L"olorVertexData",0xe), iVar6 == 0)) {
              if (pwVar1 != (wchar_t *)0x0) {
                local_res10 = pwVar1;
                lVar7 = operator_new(0x58);
                uVar8 = uVar11;
                if (lVar7 != 0) {
                  uVar8 = FUN_14271d780(lVar7);
                }
                *(ulonglong *)(lVar14 + 0x30 + (longlong)local_res20[0] * 8) = uVar8;
                FUN_14272cea0(*(undefined8 *)(lVar14 + 0x30 + (longlong)local_res20[0] * 8),
                              local_res10);
              }
              break;
            }
            pwVar1 = _Str1;
            wVar2 = *_Str1;
          }
        }
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
      } while (uVar12 < local_48);
    }
    if (uVar9 != 0) {
      FMemory::Free(uVar9);
    }
  }
  return;
}



// FUNCTION 1423d7e00 FUN_1423d7e00 body=1230 status=ok
// SIG undefined FUN_1423d7e00(void)

void FUN_1423d7e00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  short *psVar3;
  char cVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int local_res18;
  int local_res20 [2];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  int local_48;
  
  cVar4 = FParse::Value(*param_2,L"PaintedVertices(",local_res20);
  if (cVar4 != '\0') {
    FString::PrintfImpl(&local_50,&DAT_14506f844,local_res20[0]);
    if (local_48 == 0) {
      local_48 = 0x12;
    }
    else {
      local_48 = local_48 + 0x11;
    }
    iVar13 = 0;
    local_58 = 0;
    *param_2 = *param_2 + (longlong)local_48 * 2;
    iVar14 = 0;
    psVar3 = (short *)*param_2;
    local_60 = 0;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (psVar3[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      local_58 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
      }
      FGenericPlatformString::Memcpy(local_60,psVar3,(longlong)(int)uVar8 * 2);
    }
    local_70 = (longlong *)0x0;
    local_68 = 0;
    FUN_141594550(&local_60,&local_70,&DAT_14506f32c,0);
    iVar7 = local_res20[0];
    iVar2 = *(int *)(param_1 + 0x28);
    plVar6 = (longlong *)(param_1 + 0x20);
    *(int *)(param_1 + 0x28) = local_res20[0] + iVar2;
    if (*(int *)(param_1 + 0x2c) < local_res20[0] + iVar2) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
    }
    puVar12 = (undefined4 *)((longlong)iVar2 * 0x30 + *plVar6);
    if (iVar7 != 0) {
      puVar11 = (undefined8 *)(puVar12 + 6);
      do {
        *puVar12 = 0;
        *(undefined8 *)((longlong)puVar11 + -0x14) = 0;
        puVar10 = puVar11 + 1;
        puVar11[-1] = 0;
        lVar9 = 2;
        *puVar11 = 0x3f800000;
        if (puVar10 <= puVar11 + 2) {
          for (; lVar9 != 0; lVar9 = lVar9 + -1) {
            *(undefined4 *)puVar10 = 0;
            puVar10 = (undefined8 *)((longlong)puVar10 + 4);
          }
        }
        puVar12 = puVar12 + 0xc;
        puVar11 = puVar11 + 6;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    local_res18 = 0;
    if (0 < local_res20[0]) {
      do {
        uVar8 = 0;
        if ((int)(local_70 + (longlong)iVar13 * 2)[1] == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)local_70[(longlong)iVar13 * 2];
        }
        lVar9 = (longlong)local_res18 * 0x30;
        FParse::Value(puVar5,&DAT_14506f84c,lVar9 + *plVar6);
        if ((int)(local_70 + (longlong)(iVar13 + 1) * 2)[1] == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)local_70[(longlong)(iVar13 + 1) * 2];
        }
        FParse::Value(puVar5,&DAT_14506f854,*plVar6 + 4 + lVar9);
        if ((int)(local_70 + (longlong)(iVar13 + 2) * 2)[1] == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)local_70[(longlong)(iVar13 + 2) * 2];
        }
        FParse::Value(puVar5,&DAT_14506f85c,*plVar6 + 8 + lVar9);
        if ((int)(local_70 + (longlong)(iVar13 + 3) * 2)[1] == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)local_70[(longlong)(iVar13 + 3) * 2];
        }
        FParse::Value(puVar5,&DAT_14506f864,*plVar6 + 0x10 + lVar9);
        if ((int)(local_70 + (longlong)(iVar13 + 4) * 2)[1] == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)local_70[(longlong)(iVar13 + 4) * 2];
        }
        FParse::Value(puVar5,&DAT_14506f86c,*plVar6 + 0x14 + lVar9);
        if ((int)(local_70 + (longlong)(iVar13 + 5) * 2)[1] == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)local_70[(longlong)(iVar13 + 5) * 2];
        }
        FParse::Value(puVar5,&DAT_14506f874,*plVar6 + 0x18 + lVar9);
        iVar14 = iVar13 + 7;
        if ((int)(local_70 + (longlong)(iVar13 + 6) * 2)[1] == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)local_70[(longlong)(iVar13 + 6) * 2];
        }
        FParse::Value(puVar5,&DAT_14506f87c,*plVar6 + 0x1c + lVar9);
        lVar9 = (longlong)iVar14 << 4;
        do {
          lVar1 = *plVar6 + ((longlong)(int)uVar8 + (longlong)local_res18 * 0xc) * 4;
          if (*(int *)(lVar9 + 8 + (longlong)local_70) == 0) {
            puVar5 = &DAT_143f3eda8;
          }
          else {
            puVar5 = *(undefined2 **)(lVar9 + (longlong)local_70);
          }
          FParse::Value(puVar5,&DAT_14506f884,lVar1 + 0x20);
          if (*(int *)(lVar9 + 0x18 + (longlong)local_70) == 0) {
            puVar5 = &DAT_143f3eda8;
          }
          else {
            puVar5 = *(undefined2 **)(lVar9 + 0x10 + (longlong)local_70);
          }
          FParse::Value(puVar5,&DAT_14506f88c,lVar1 + 0x21);
          if (*(int *)(lVar9 + 0x28 + (longlong)local_70) == 0) {
            puVar5 = &DAT_143f3eda8;
          }
          else {
            puVar5 = *(undefined2 **)(lVar9 + 0x20 + (longlong)local_70);
          }
          FParse::Value(puVar5,&DAT_14506f894,lVar1 + 0x22);
          iVar14 = iVar14 + 4;
          if (*(int *)(lVar9 + 0x38 + (longlong)local_70) == 0) {
            puVar5 = &DAT_143f3eda8;
          }
          else {
            puVar5 = *(undefined2 **)(lVar9 + 0x30 + (longlong)local_70);
          }
          FParse::Value(puVar5,&DAT_14506f89c,lVar1 + 0x23);
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x40;
        } while (uVar8 < 2);
        local_res18 = local_res18 + 1;
        iVar13 = iVar14;
      } while (local_res18 < local_res20[0]);
    }
    iVar13 = 0;
    lVar9 = (longlong)(iVar14 + -1);
    if (0 < iVar14 + -1) {
      plVar6 = local_70 + 1;
      iVar13 = 0;
      do {
        lVar1 = *plVar6;
        plVar6 = plVar6 + 2;
        iVar14 = iVar13 + -1 + (int)lVar1;
        if ((int)lVar1 == 0) {
          iVar14 = iVar13;
        }
        iVar13 = iVar14 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    *param_2 = *param_2 + (longlong)iVar13 * 2;
    plVar6 = local_70;
    for (iVar13 = (int)local_68; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_70 != (longlong *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1423d82d0 Init body=1717 status=ok
// SIG undefined Init(void)

void FConvexVolume::Init(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 local_res8;
  undefined4 local_res10;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  
  uVar10 = *(int *)(param_1 + 0x70) >> 0x1f & 3;
  lVar1 = param_1 + 0x80;
  uVar6 = *(int *)(param_1 + 0x70) + uVar10;
  uVar7 = uVar6 & 3;
  iVar8 = uVar7 - uVar10;
  uVar6 = (int)uVar6 >> 2;
  iVar5 = uVar6 * 4;
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) != (-(uint)(uVar7 != uVar10) & 4) + iVar5) {
    FUN_1423de790(lVar1);
  }
  if (0 < (int)uVar6) {
    lVar12 = 0x20;
    uVar13 = (ulonglong)uVar6;
    do {
      iVar4 = *(int *)(param_1 + 0x110);
      *(int *)(param_1 + 0x110) = iVar4 + 1;
      if (*(int *)(param_1 + 0x114) < iVar4 + 1) {
        TArray<FPlane,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar4);
      }
      lVar9 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar9 = lVar1;
      }
      puVar11 = (undefined4 *)(lVar9 + (longlong)iVar4 * 0x10);
      if (puVar11 != (undefined4 *)0x0) {
        lVar9 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar9 = param_1;
        }
        uVar14 = *(undefined4 *)(lVar12 + 0x10 + lVar9);
        uVar16 = *(undefined4 *)(lVar12 + lVar9);
        uVar17 = *(undefined4 *)(lVar12 + -0x20 + lVar9);
        puVar11[1] = *(undefined4 *)(lVar12 + -0x10 + lVar9);
        puVar11[2] = uVar16;
        puVar11[3] = uVar14;
        *puVar11 = uVar17;
      }
      iVar4 = *(int *)(param_1 + 0x110);
      *(int *)(param_1 + 0x110) = iVar4 + 1;
      if (*(int *)(param_1 + 0x114) < iVar4 + 1) {
        TArray<FPlane,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar4);
      }
      lVar9 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar9 = lVar1;
      }
      puVar11 = (undefined4 *)(lVar9 + (longlong)iVar4 * 0x10);
      if (puVar11 != (undefined4 *)0x0) {
        lVar9 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar9 = param_1;
        }
        uVar14 = *(undefined4 *)(lVar9 + 0x14 + lVar12);
        uVar16 = *(undefined4 *)(lVar12 + 4 + lVar9);
        uVar17 = *(undefined4 *)(lVar9 + -0x1c + lVar12);
        puVar11[1] = *(undefined4 *)(lVar9 + -0xc + lVar12);
        puVar11[2] = uVar16;
        puVar11[3] = uVar14;
        *puVar11 = uVar17;
      }
      iVar4 = *(int *)(param_1 + 0x110);
      *(int *)(param_1 + 0x110) = iVar4 + 1;
      if (*(int *)(param_1 + 0x114) < iVar4 + 1) {
        TArray<FPlane,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar4);
      }
      lVar9 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar9 = lVar1;
      }
      puVar11 = (undefined4 *)(lVar9 + (longlong)iVar4 * 0x10);
      if (puVar11 != (undefined4 *)0x0) {
        lVar9 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar9 = param_1;
        }
        uVar14 = *(undefined4 *)(lVar9 + 0x18 + lVar12);
        uVar16 = *(undefined4 *)(lVar12 + 8 + lVar9);
        uVar17 = *(undefined4 *)(lVar9 + -0x18 + lVar12);
        puVar11[1] = *(undefined4 *)(lVar9 + -8 + lVar12);
        puVar11[2] = uVar16;
        puVar11[3] = uVar14;
        *puVar11 = uVar17;
      }
      iVar4 = *(int *)(param_1 + 0x110);
      *(int *)(param_1 + 0x110) = iVar4 + 1;
      if (*(int *)(param_1 + 0x114) < iVar4 + 1) {
        TArray<FPlane,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar4);
      }
      lVar9 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar9 = lVar1;
      }
      puVar11 = (undefined4 *)(lVar9 + (longlong)iVar4 * 0x10);
      if (puVar11 != (undefined4 *)0x0) {
        lVar9 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar9 = param_1;
        }
        uVar14 = *(undefined4 *)(lVar9 + 0x1c + lVar12);
        uVar16 = *(undefined4 *)(lVar12 + 0xc + lVar9);
        uVar17 = *(undefined4 *)(lVar9 + -0x14 + lVar12);
        puVar11[1] = *(undefined4 *)(lVar9 + -4 + lVar12);
        puVar11[2] = uVar16;
        puVar11[3] = uVar14;
        *puVar11 = uVar17;
      }
      lVar12 = lVar12 + 0x40;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (uVar7 != uVar10) {
    if (iVar8 == 1) {
      lVar12 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        lVar12 = param_1;
      }
      puVar2 = (undefined8 *)(lVar12 + (longlong)iVar5 * 0x10);
      uVar14 = *(undefined4 *)puVar2;
      uVar16 = *(undefined4 *)((longlong)puVar2 + 4);
      local_f8 = *puVar2;
      uVar17 = *(undefined4 *)(puVar2 + 1);
      uVar15 = *(undefined4 *)((longlong)puVar2 + 0xc);
      uStack_f0 = puVar2[1];
      local_e8 = uVar14;
      uStack_e4 = uVar16;
      local_res8 = uVar17;
      local_res10 = uVar15;
    }
    else if (iVar8 == 2) {
      lVar12 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        lVar12 = param_1;
      }
      puVar11 = (undefined4 *)(lVar12 + (longlong)iVar5 * 0x10);
      uVar14 = *puVar11;
      uVar16 = puVar11[1];
      uVar17 = puVar11[2];
      uVar15 = puVar11[3];
      puVar2 = (undefined8 *)(lVar12 + ((longlong)iVar5 + 1) * 0x10);
      local_f8 = *puVar2;
      uStack_f0 = puVar2[1];
      local_e8 = uVar14;
      uStack_e4 = uVar16;
      local_res8 = uVar17;
      local_res10 = uVar15;
    }
    else if (iVar8 == 3) {
      lVar9 = (longlong)iVar5;
      lVar12 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        lVar12 = param_1;
      }
      puVar11 = (undefined4 *)(lVar12 + lVar9 * 0x10);
      uVar14 = *puVar11;
      uVar16 = puVar11[1];
      uVar17 = puVar11[2];
      puVar2 = (undefined8 *)(lVar12 + (lVar9 + 1) * 0x10);
      local_f8 = *puVar2;
      uStack_f0 = puVar2[1];
      puVar3 = (undefined4 *)(lVar12 + (lVar9 + 2) * 0x10);
      uVar15 = puVar3[3];
      local_e8 = *puVar3;
      uStack_e4 = puVar3[1];
      local_res8 = puVar3[2];
      local_res10 = puVar11[3];
    }
    else {
      uVar14 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uStack_e4 = 0;
      uVar15 = 0;
      local_e8 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_res8 = 0;
      local_res10 = 0;
    }
    iVar5 = *(int *)(param_1 + 0x110);
    *(int *)(param_1 + 0x110) = iVar5 + 1;
    if (*(int *)(param_1 + 0x114) < iVar5 + 1) {
      TArray<FPlane,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar5);
    }
    lVar12 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar12 = lVar1;
    }
    puVar11 = (undefined4 *)(lVar12 + (longlong)iVar5 * 0x10);
    if (puVar11 != (undefined4 *)0x0) {
      puVar11[1] = (undefined4)local_f8;
      *puVar11 = uVar14;
      puVar11[2] = local_e8;
      puVar11[3] = uVar14;
    }
    iVar5 = *(int *)(param_1 + 0x110);
    *(int *)(param_1 + 0x110) = iVar5 + 1;
    if (*(int *)(param_1 + 0x114) < iVar5 + 1) {
      TArray<FPlane,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar5);
    }
    lVar12 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar12 = lVar1;
    }
    puVar11 = (undefined4 *)(lVar12 + (longlong)iVar5 * 0x10);
    if (puVar11 != (undefined4 *)0x0) {
      puVar11[1] = local_f8._4_4_;
      *puVar11 = uVar16;
      puVar11[2] = uStack_e4;
      puVar11[3] = uVar16;
    }
    iVar5 = *(int *)(param_1 + 0x110);
    *(int *)(param_1 + 0x110) = iVar5 + 1;
    if (*(int *)(param_1 + 0x114) < iVar5 + 1) {
      TArray<FPlane,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar5);
    }
    lVar12 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar12 = lVar1;
    }
    puVar11 = (undefined4 *)(lVar12 + (longlong)iVar5 * 0x10);
    if (puVar11 != (undefined4 *)0x0) {
      puVar11[1] = (undefined4)uStack_f0;
      puVar11[2] = local_res8;
      *puVar11 = uVar17;
      puVar11[3] = uVar17;
    }
    iVar5 = *(int *)(param_1 + 0x110);
    *(int *)(param_1 + 0x110) = iVar5 + 1;
    if (*(int *)(param_1 + 0x114) < iVar5 + 1) {
      TArray<FPlane,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar5);
    }
    lVar12 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar12 = lVar1;
    }
    puVar11 = (undefined4 *)((longlong)iVar5 * 0x10 + lVar12);
    if (puVar11 != (undefined4 *)0x0) {
      puVar11[1] = uStack_f0._4_4_;
      puVar11[3] = local_res10;
      *puVar11 = local_res10;
      puVar11[2] = uVar15;
    }
  }
  return;
}



// FUNCTION 1423d8990 FUN_1423d8990 body=375 status=ok
// SIG undefined FUN_1423d8990(void)

void FUN_1423d8990(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_48 [2];
  undefined1 local_38 [16];
  longlong *local_28;
  longlong local_20;
  undefined1 local_10;
  uint local_c;
  
  lVar9 = 0;
  iVar3 = FUN_142235230();
  if (iVar3 == 3) {
    return;
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar5 = lVar9;
  if (lVar4 != 0) {
    lVar5 = *(longlong *)(lVar4 + 0x140);
  }
  if (lVar5 == 0) {
    lVar5 = lVar9;
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 0x148);
    }
    if (lVar5 == 0) {
      return;
    }
    lVar5 = FUN_14247fa70();
    if (lVar5 == 0) {
      return;
    }
  }
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_c = local_c | 0x40;
  local_20 = param_1[0x2a];
  local_10 = 1;
  lVar8 = lVar9;
  local_28 = param_1;
  if (*(longlong *)(lVar5 + 0x480) != 0) {
    lVar6 = AFGRailroadVehicle::GetPrivateStaticClass();
    for (lVar1 = *(longlong *)(lVar5 + 0x480);
        (lVar8 = lVar9, lVar1 != 0 && (lVar8 = *(longlong *)(lVar5 + 0x480), lVar1 != lVar6));
        lVar1 = *(longlong *)(lVar1 + 0x30)) {
    }
  }
  lVar4 = UWorld::SpawnActor(lVar4,lVar8,0,0,local_38);
  param_1[0x8c] = lVar4;
  if (lVar4 != 0) {
    lVar4 = FUN_14270d290(lVar4,local_48);
    lVar9 = 1;
    if (*(int *)(lVar4 + 8) < 2) {
      bVar2 = true;
      goto LAB_1423d8aaa;
    }
  }
  bVar2 = false;
LAB_1423d8aaa:
  if ((lVar9 != 0) && (local_48[0] != 0)) {
    FMemory::Free();
  }
  if (bVar2) {
    lVar9 = *(longlong *)param_1[0x8c];
    uVar7 = FText::ToString(lVar5 + 0x4c8);
    (**(code **)(lVar9 + 0x738))(param_1[0x8c],uVar7);
  }
  return;
}



// FUNCTION 1423d8b10 FUN_1423d8b10 body=878 status=ok
// SIG undefined FUN_1423d8b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423d8b10(longlong param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  undefined1 *_Src_00;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_e8 [24];
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  if (param_2 != 0) {
    local_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
    lVar3 = *(longlong *)(param_2 + 0x728);
    if (lVar3 != 0) {
      _Src = (void *)*param_4;
      uVar14 = param_4[1] - (longlong)_Src >> 3;
      uVar10 = *(undefined8 *)((longlong)param_3 * 8 + **(longlong **)(lVar3 + 0x38));
      uVar4 = *(undefined8 *)((longlong)param_3 * 8 + (*(longlong **)(lVar3 + 0x38))[2]);
      iVar13 = (int)uVar14;
      local_80 = (undefined1 *)0x0;
      local_78 = 0;
      TArray<FRHIUnorderedAccessView_*,TInlineAllocator<2,TSizedDefaultAllocator<32>_>_>::
      ResizeForCopy(local_90,uVar14 & 0xffffffff,0);
      puVar12 = local_90;
      if (local_80 != (undefined1 *)0x0) {
        puVar12 = local_80;
      }
      _guard_xfg_dispatch_icall_nop(puVar12,_Src,(longlong)iVar13 << 3);
      puVar12 = local_80;
      local_78 = CONCAT44(local_78._4_4_,iVar13);
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x130) + 8);
      local_a8 = (undefined1 *)0x0;
      local_a0 = CONCAT44(local_a0._4_4_,iVar13);
      local_d0 = uVar4;
      local_c8 = uVar10;
      local_c0 = lVar3;
      if (iVar13 == 0) {
        local_a0 = uVar14 & 0xffffffff;
      }
      else {
        TArray<FRHIUnorderedAccessView_*,TInlineAllocator<2,TSizedDefaultAllocator<32>_>_>::
        ResizeForCopy(local_b8,uVar14 & 0xffffffff,0);
        _Src_00 = local_90;
        if (puVar12 != (undefined1 *)0x0) {
          _Src_00 = puVar12;
        }
        puVar12 = local_b8;
        if (local_a8 != (undefined1 *)0x0) {
          puVar12 = local_a8;
        }
        _guard_xfg_dispatch_icall_nop(puVar12,_Src_00,(longlong)iVar13 << 3);
      }
      local_98 = uVar2;
      if ((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) {
        if ((DAT_146ac3ac5 == '\0') &&
           (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
            (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
          puVar12 = local_a8;
          local_70 = local_d0;
          local_68 = local_c8;
          local_60 = local_c0;
          local_48 = (undefined1 *)0x0;
          if ((local_a8 == (undefined1 *)0x0) &&
             (_guard_xfg_dispatch_icall_nop(local_58,local_b8,0x10), local_48 != (undefined1 *)0x0))
          {
            FMemory::Free();
            puVar12 = local_a8;
          }
          local_40 = (undefined4)local_a0;
          local_3c = local_a0._4_4_;
          local_38 = local_98;
          local_a8 = (undefined1 *)0x0;
          local_a0 = 0;
          local_48 = puVar12;
          uVar10 = FBaseGraphTask::GetSmallTaskAllocator();
          FUN_1423c66b0(&local_70,uVar10);
          if (local_48 != (undefined1 *)0x0) {
            FMemory::Free();
          }
        }
        else {
          plVar11 = (longlong *)FUN_1423cd310(local_e8,0,0xff);
          lVar3 = *plVar11;
          *(undefined8 *)(lVar3 + 0x10) = local_d0;
          *(undefined8 *)(lVar3 + 0x18) = local_c8;
          *(longlong *)(lVar3 + 0x20) = local_c0;
          *(undefined8 *)(lVar3 + 0x38) = 0;
          if (local_a8 == (undefined1 *)0x0) {
            _guard_xfg_dispatch_icall_nop((void *)(lVar3 + 0x28),local_b8,0x10);
          }
          if (*(longlong *)(lVar3 + 0x38) != 0) {
            FMemory::Free();
          }
          *(undefined1 **)(lVar3 + 0x38) = local_a8;
          local_a8 = (undefined1 *)0x0;
          *(undefined4 *)(lVar3 + 0x40) = (undefined4)local_a0;
          *(undefined4 *)(lVar3 + 0x44) = local_a0._4_4_;
          local_a0 = 0;
          *(undefined4 *)(lVar3 + 0x48) = local_98;
          lVar3 = *plVar11;
          lVar7 = plVar11[2];
          lVar5 = plVar11[1];
          lVar6 = *(longlong *)(lVar3 + 0x58);
          piVar1 = (int *)(lVar6 + 0x48);
          if (lVar6 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_f8 = lVar6;
          FUN_141a0d200(lVar3,lVar5,(int)lVar7,1);
          if (lVar6 != 0) {
            LOCK();
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              FGraphEvent::Recycle(local_f8);
            }
          }
        }
      }
      else {
        uVar10 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_1423c66b0(&local_d0,uVar10);
      }
      if (local_a8 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      if (local_80 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1423d8e80 InitializeMIDCache body=55 status=ok
// SIG undefined InitializeMIDCache(void)

void UTextRenderComponent::InitializeMIDCache(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(200);
  if (lVar1 != 0) {
    DAT_146af1040 = FUN_1423c3d30(lVar1);
    return;
  }
  DAT_146af1040 = 0;
  return;
}



// FUNCTION 1423d8ec0 FUN_1423d8ec0 body=122 status=ok
// SIG undefined FUN_1423d8ec0(void)

void FUN_1423d8ec0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  FUN_142920fc0();
  local_20 = param_5;
  local_38[0] = param_2;
  local_30 = param_3;
  local_28 = param_4;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x470,local_38);
  return;
}



// FUNCTION 1423d8f40 IntersectBox body=406 status=ok
// SIG undefined IntersectBox(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FConvexVolume::IntersectBox(longlong param_1,float *param_2,float *param_3,uint *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  uint7 uVar18;
  int iVar19;
  float *pfVar20;
  int iVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  pfVar20 = *(float **)(param_1 + 0x100);
  iVar21 = 0;
  pfVar22 = pfVar20;
  if (pfVar20 == (float *)0x0) {
    pfVar22 = (float *)(param_1 + 0x80);
  }
  fVar23 = *param_2 + *param_3;
  fVar24 = param_2[1] + param_3[1];
  fVar25 = param_2[2] + param_3[2];
  fVar26 = (float)(*param_4 & _DAT_146af12d0);
  fVar27 = (float)(param_4[1] & uRam0000000146af12d4);
  fVar28 = (float)(param_4[2] & uRam0000000146af12d8);
  uVar18 = (uint7)((ulonglong)(param_1 + 0x80) >> 8);
  if (0 < *(int *)(param_1 + 0x110)) {
    do {
      fVar5 = *pfVar22;
      pfVar6 = pfVar22 + 1;
      pfVar7 = pfVar22 + 2;
      pfVar8 = pfVar22 + 3;
      pfVar1 = pfVar22 + 4;
      pfVar9 = pfVar22 + 5;
      pfVar10 = pfVar22 + 6;
      pfVar11 = pfVar22 + 7;
      pfVar2 = pfVar22 + 8;
      pfVar12 = pfVar22 + 9;
      pfVar13 = pfVar22 + 10;
      pfVar14 = pfVar22 + 0xb;
      pfVar3 = pfVar22 + 0xc;
      pfVar15 = pfVar22 + 0xd;
      pfVar16 = pfVar22 + 0xe;
      pfVar17 = pfVar22 + 0xf;
      pfVar22 = pfVar22 + 0x10;
      auVar4._4_4_ = -(uint)((float)((uint)*pfVar9 & uRam0000000146af12d4) * fVar27 +
                             (float)((uint)*pfVar6 & uRam0000000146af12d4) * fVar26 +
                             (float)((uint)*pfVar12 & uRam0000000146af12d4) * fVar28 <
                            (*pfVar9 * fVar24 + *pfVar6 * fVar23 + *pfVar12 * fVar25) - *pfVar15);
      auVar4._0_4_ = -(uint)((float)((uint)*pfVar1 & _DAT_146af12d0) * fVar27 +
                             (float)((uint)fVar5 & _DAT_146af12d0) * fVar26 +
                             (float)((uint)*pfVar2 & _DAT_146af12d0) * fVar28 <
                            (*pfVar1 * fVar24 + fVar5 * fVar23 + *pfVar2 * fVar25) - *pfVar3);
      auVar4._8_4_ = -(uint)((float)((uint)*pfVar10 & uRam0000000146af12d8) * fVar27 +
                             (float)((uint)*pfVar7 & uRam0000000146af12d8) * fVar26 +
                             (float)((uint)*pfVar13 & uRam0000000146af12d8) * fVar28 <
                            (*pfVar10 * fVar24 + *pfVar7 * fVar23 + *pfVar13 * fVar25) - *pfVar16);
      auVar4._12_4_ =
           -(uint)((float)((uint)*pfVar11 & uRam0000000146af12dc) * fVar27 +
                   (float)((uint)*pfVar8 & uRam0000000146af12dc) * fVar26 +
                   (float)((uint)*pfVar14 & uRam0000000146af12dc) * fVar28 <
                  (*pfVar11 * fVar24 + *pfVar8 * fVar23 + *pfVar14 * fVar25) - *pfVar17);
      iVar19 = movmskps((int)pfVar20,auVar4);
      if (iVar19 != 0) {
        return (ulonglong)uVar18 << 8;
      }
      iVar21 = iVar21 + 4;
      pfVar20 = (float *)0x0;
    } while (iVar21 < *(int *)(param_1 + 0x110));
  }
  return CONCAT71(uVar18,1);
}



// FUNCTION 1423d90e0 IntersectBox body=376 status=ok
// SIG undefined IntersectBox(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FConvexVolume::IntersectBox(longlong param_1,float *param_2,uint *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  uint7 uVar21;
  int iVar22;
  float *pfVar23;
  int iVar24;
  float *pfVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  fVar4 = param_2[2];
  fVar5 = param_2[1];
  pfVar23 = *(float **)(param_1 + 0x100);
  fVar6 = *param_2;
  iVar24 = 0;
  pfVar25 = pfVar23;
  if (pfVar23 == (float *)0x0) {
    pfVar25 = (float *)(param_1 + 0x80);
  }
  fVar26 = (float)(*param_3 & _DAT_146af12d0);
  fVar27 = (float)(param_3[1] & uRam0000000146af12d4);
  fVar28 = (float)(param_3[2] & uRam0000000146af12d8);
  uVar21 = (uint7)((ulonglong)(param_1 + 0x80) >> 8);
  if (0 < *(int *)(param_1 + 0x110)) {
    do {
      fVar8 = *pfVar25;
      pfVar9 = pfVar25 + 1;
      pfVar10 = pfVar25 + 2;
      pfVar11 = pfVar25 + 3;
      pfVar1 = pfVar25 + 4;
      pfVar12 = pfVar25 + 5;
      pfVar13 = pfVar25 + 6;
      pfVar14 = pfVar25 + 7;
      pfVar2 = pfVar25 + 8;
      pfVar15 = pfVar25 + 9;
      pfVar16 = pfVar25 + 10;
      pfVar17 = pfVar25 + 0xb;
      pfVar3 = pfVar25 + 0xc;
      pfVar18 = pfVar25 + 0xd;
      pfVar19 = pfVar25 + 0xe;
      pfVar20 = pfVar25 + 0xf;
      pfVar25 = pfVar25 + 0x10;
      auVar7._4_4_ = -(uint)((float)((uint)*pfVar12 & uRam0000000146af12d4) * fVar27 +
                             (float)((uint)*pfVar9 & uRam0000000146af12d4) * fVar26 +
                             (float)((uint)*pfVar15 & uRam0000000146af12d4) * fVar28 <
                            (*pfVar12 * fVar5 + *pfVar9 * fVar6 + *pfVar15 * fVar4) - *pfVar18);
      auVar7._0_4_ = -(uint)((float)((uint)*pfVar1 & _DAT_146af12d0) * fVar27 +
                             (float)((uint)fVar8 & _DAT_146af12d0) * fVar26 +
                             (float)((uint)*pfVar2 & _DAT_146af12d0) * fVar28 <
                            (*pfVar1 * fVar5 + fVar8 * fVar6 + *pfVar2 * fVar4) - *pfVar3);
      auVar7._8_4_ = -(uint)((float)((uint)*pfVar13 & uRam0000000146af12d8) * fVar27 +
                             (float)((uint)*pfVar10 & uRam0000000146af12d8) * fVar26 +
                             (float)((uint)*pfVar16 & uRam0000000146af12d8) * fVar28 <
                            (*pfVar13 * fVar5 + *pfVar10 * fVar6 + *pfVar16 * fVar4) - *pfVar19);
      auVar7._12_4_ =
           -(uint)((float)((uint)*pfVar14 & uRam0000000146af12dc) * fVar27 +
                   (float)((uint)*pfVar11 & uRam0000000146af12dc) * fVar26 +
                   (float)((uint)*pfVar17 & uRam0000000146af12dc) * fVar28 <
                  (*pfVar14 * fVar5 + *pfVar11 * fVar6 + *pfVar17 * fVar4) - *pfVar20);
      iVar22 = movmskps((int)pfVar23,auVar7);
      if (iVar22 != 0) {
        return (ulonglong)uVar21 << 8;
      }
      iVar24 = iVar24 + 4;
      pfVar23 = (float *)0x0;
    } while (iVar24 < *(int *)(param_1 + 0x110));
  }
  return CONCAT71(uVar21,1);
}



// FUNCTION 1423d9260 IntersectBox body=419 status=ok
// SIG undefined IntersectBox(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FConvexVolume::IntersectBox
                   (longlong param_1,float *param_2,uint *param_3,undefined1 *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint7 uVar27;
  uint uVar28;
  int iVar30;
  float *pfVar31;
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
  float *pfVar26;
  float *pfVar29;
  
  pfVar26 = (float *)(param_1 + 0x80);
  *param_4 = 1;
  uVar24 = uRam0000000146af12dc;
  uVar23 = uRam0000000146af12d8;
  uVar22 = uRam0000000146af12d4;
  uVar21 = _DAT_146af12d0;
  fVar4 = param_2[2];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  iVar30 = 0;
  pfVar29 = *(float **)(param_1 + 0x100);
  pfVar31 = pfVar29;
  if (pfVar29 == (float *)0x0) {
    pfVar31 = pfVar26;
  }
  fVar40 = (float)(*param_3 & _DAT_146af12d0);
  fVar41 = (float)(param_3[1] & uRam0000000146af12d4);
  fVar42 = (float)(param_3[2] & uRam0000000146af12d8);
  if (*(int *)(param_1 + 0x110) < 1) {
    uVar27 = (uint7)((ulonglong)pfVar26 >> 8);
  }
  else {
    do {
      fVar36 = *pfVar31;
      pfVar9 = pfVar31 + 1;
      pfVar10 = pfVar31 + 2;
      pfVar11 = pfVar31 + 3;
      pfVar1 = pfVar31 + 4;
      pfVar12 = pfVar31 + 5;
      pfVar13 = pfVar31 + 6;
      pfVar14 = pfVar31 + 7;
      pfVar2 = pfVar31 + 8;
      pfVar15 = pfVar31 + 9;
      pfVar16 = pfVar31 + 10;
      pfVar17 = pfVar31 + 0xb;
      pfVar3 = pfVar31 + 0xc;
      pfVar18 = pfVar31 + 0xd;
      pfVar19 = pfVar31 + 0xe;
      pfVar20 = pfVar31 + 0xf;
      pfVar31 = pfVar31 + 0x10;
      fVar32 = (float)((uint)*pfVar1 & uVar21) * fVar41 + (float)((uint)fVar36 & uVar21) * fVar40 +
               (float)((uint)*pfVar2 & uVar21) * fVar42;
      fVar33 = (float)((uint)*pfVar12 & uVar22) * fVar41 + (float)((uint)*pfVar9 & uVar22) * fVar40
               + (float)((uint)*pfVar15 & uVar22) * fVar42;
      fVar34 = (float)((uint)*pfVar13 & uVar23) * fVar41 + (float)((uint)*pfVar10 & uVar23) * fVar40
               + (float)((uint)*pfVar16 & uVar23) * fVar42;
      fVar35 = (float)((uint)*pfVar14 & uVar24) * fVar41 + (float)((uint)*pfVar11 & uVar24) * fVar40
               + (float)((uint)*pfVar17 & uVar24) * fVar42;
      fVar36 = (*pfVar1 * fVar6 + fVar36 * fVar5 + *pfVar2 * fVar4) - *pfVar3;
      fVar37 = (*pfVar12 * fVar6 + *pfVar9 * fVar5 + *pfVar15 * fVar4) - *pfVar18;
      fVar38 = (*pfVar13 * fVar6 + *pfVar10 * fVar5 + *pfVar16 * fVar4) - *pfVar19;
      fVar39 = (*pfVar14 * fVar6 + *pfVar11 * fVar5 + *pfVar17 * fVar4) - *pfVar20;
      auVar7._4_4_ = -(uint)(fVar33 < fVar37);
      auVar7._0_4_ = -(uint)(fVar32 < fVar36);
      auVar7._8_4_ = -(uint)(fVar34 < fVar38);
      auVar7._12_4_ = -(uint)(fVar35 < fVar39);
      iVar25 = movmskps((int)pfVar26,auVar7);
      pfVar26 = (float *)CONCAT44((int)((ulonglong)pfVar26 >> 0x20),iVar25);
      uVar27 = (uint7)((ulonglong)pfVar26 >> 8);
      if (iVar25 != 0) {
        *param_4 = 0;
        return (ulonglong)uVar27 << 8;
      }
      auVar8._4_4_ = -(uint)(0.0 - fVar33 < fVar37);
      auVar8._0_4_ = -(uint)(0.0 - fVar32 < fVar36);
      auVar8._8_4_ = -(uint)(0.0 - fVar34 < fVar38);
      auVar8._12_4_ = -(uint)(0.0 - fVar35 < fVar39);
      uVar28 = movmskps((int)pfVar29,auVar8);
      pfVar29 = (float *)(ulonglong)uVar28;
      if (uVar28 != 0) {
        *param_4 = 0;
      }
      iVar30 = iVar30 + 4;
    } while (iVar30 < *(int *)(param_1 + 0x110));
  }
  return CONCAT71(uVar27,1);
}



// FUNCTION 1423d9410 IntersectSphere body=207 status=ok
// SIG undefined IntersectSphere(void)

longlong FConvexVolume::IntersectSphere(longlong param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  uint7 uVar22;
  int iVar23;
  float *pfVar24;
  int iVar25;
  float *pfVar26;
  
  fVar4 = *param_3;
  fVar5 = param_2[2];
  fVar6 = param_2[1];
  fVar7 = *param_2;
  iVar25 = 0;
  pfVar24 = *(float **)(param_1 + 0x100);
  pfVar26 = pfVar24;
  if (pfVar24 == (float *)0x0) {
    pfVar26 = (float *)(param_1 + 0x80);
  }
  uVar22 = (uint7)((ulonglong)(param_1 + 0x80) >> 8);
  if (0 < *(int *)(param_1 + 0x110)) {
    do {
      pfVar1 = pfVar26 + 0xc;
      pfVar9 = pfVar26 + 0xd;
      pfVar10 = pfVar26 + 0xe;
      pfVar11 = pfVar26 + 0xf;
      fVar12 = *pfVar26;
      pfVar13 = pfVar26 + 1;
      pfVar14 = pfVar26 + 2;
      pfVar15 = pfVar26 + 3;
      pfVar2 = pfVar26 + 4;
      pfVar16 = pfVar26 + 5;
      pfVar17 = pfVar26 + 6;
      pfVar18 = pfVar26 + 7;
      pfVar3 = pfVar26 + 8;
      pfVar19 = pfVar26 + 9;
      pfVar20 = pfVar26 + 10;
      pfVar21 = pfVar26 + 0xb;
      pfVar26 = pfVar26 + 0x10;
      auVar8._4_4_ = -(uint)(fVar4 < (*pfVar16 * fVar6 + *pfVar13 * fVar7 + *pfVar19 * fVar5) -
                                     *pfVar9);
      auVar8._0_4_ = -(uint)(fVar4 < (*pfVar2 * fVar6 + fVar12 * fVar7 + *pfVar3 * fVar5) - *pfVar1)
      ;
      auVar8._8_4_ = -(uint)(fVar4 < (*pfVar17 * fVar6 + *pfVar14 * fVar7 + *pfVar20 * fVar5) -
                                     *pfVar10);
      auVar8._12_4_ =
           -(uint)(fVar4 < (*pfVar18 * fVar6 + *pfVar15 * fVar7 + *pfVar21 * fVar5) - *pfVar11);
      iVar23 = movmskps((int)pfVar24,auVar8);
      if (iVar23 != 0) {
        return (ulonglong)uVar22 << 8;
      }
      iVar25 = iVar25 + 4;
      pfVar24 = (float *)0x0;
    } while (iVar25 < *(int *)(param_1 + 0x110));
  }
  return CONCAT71(uVar22,1);
}



// FUNCTION 1423d94f0 FUN_1423d94f0 body=11 status=ok
// SIG undefined FUN_1423d94f0(void)

bool FUN_1423d94f0(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 0x480) == param_2;
}



// FUNCTION 1423d9500 IsKeyHandleValid body=177 status=ok
// SIG undefined IsKeyHandleValid(void)

undefined8 FIndexedCurve::IsKeyHandleValid(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar1) {
    FKeyHandleMap::EnsureAllIndicesHaveHandles(param_1 + 1,iVar1);
  }
  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
    plVar2 = (longlong *)param_1[9];
    if ((longlong *)param_1[9] == (longlong *)0x0) {
      plVar2 = param_1 + 8;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[10] - 1U & (longlong)param_2) * 4);
    if (iVar1 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar1 * 0x10 + param_1[1]);
        if (*piVar4 == param_2) {
          if (iVar1 != -1) goto LAB_1423d9590;
          break;
        }
        iVar1 = piVar4[2];
      } while (iVar1 != -1);
    }
  }
  piVar4 = (int *)0x0;
LAB_1423d9590:
  piVar3 = piVar4 + 1;
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  return CONCAT71((int7)((ulonglong)piVar3 >> 8),piVar3 != (int *)0x0);
}



// FUNCTION 1423d95c0 IsKeyHandleValid body=69 status=ok
// SIG undefined IsKeyHandleValid(void)

undefined4 FIntegralCurve::IsKeyHandleValid(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FIndexedCurve::IsKeyHandleValid();
  if (cVar1 != '\0') {
    iVar2 = FIndexedCurve::GetIndex(param_1,param_2);
    if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x60))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1423d9610 IsKeyHandleValid body=69 status=ok
// SIG undefined IsKeyHandleValid(void)

undefined4 FRichCurve::IsKeyHandleValid(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FIndexedCurve::IsKeyHandleValid();
  if (cVar1 != '\0') {
    iVar2 = FIndexedCurve::GetIndex(param_1,param_2);
    if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x68))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1423d9660 FUN_1423d9660 body=66 status=ok
// SIG undefined FUN_1423d9660(void)

undefined4 FUN_1423d9660(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_142235230();
  if (((iVar1 != 0) && ((iVar1 != 3 || (*(char *)(param_1 + 0x128) != '\x02')))) &&
     ((*(char *)(param_1 + 0x95) == '\x02' || (*(char *)(param_1 + 0x128) != '\x03')))) {
    return 0;
  }
  return 1;
}



// FUNCTION 1423d96b0 FUN_1423d96b0 body=11 status=ok
// SIG undefined FUN_1423d96b0(void)

bool FUN_1423d96b0(longlong param_1)

{
  return *(char *)(param_1 + 0x4d1) != '\0';
}



// FUNCTION 1423d96c0 FUN_1423d96c0 body=11 status=ok
// SIG undefined FUN_1423d96c0(void)

bool FUN_1423d96c0(longlong param_1)

{
  return *(char *)(param_1 + 0x4d0) != '\0';
}



// FUNCTION 1423d96d0 FUN_1423d96d0 body=49 status=ok
// SIG undefined FUN_1423d96d0(void)

undefined8 FUN_1423d96d0(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x728) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x728) + 0x160) != 0)) {
    cVar1 = FUN_1423908b0();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1423d9710 IsStreamingEnabled body=8 status=ok
// SIG undefined IsStreamingEnabled(void)

bool FStreamingManagerCollection::IsStreamingEnabled(longlong param_1)

{
  return *(int *)(param_1 + 0x24) == 0;
}



// FUNCTION 1423d97c0 FUN_1423d97c0 body=42 status=ok
// SIG undefined FUN_1423d97c0(void)

void FUN_1423d97c0(longlong param_1)

{
  FText::operator=(param_1 + 0x6f0);
  FUN_1423ca740(param_1);
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 1423d97f0 FUN_1423d97f0 body=1010 status=ok
// SIG undefined FUN_1423d97f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1423d97f0(longlong *param_1,longlong *param_2,float *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined *local_110;
  undefined8 local_108;
  float local_100;
  undefined1 local_fc [4];
  float local_f8 [2];
  undefined1 local_f0 [8];
  float local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [16];
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (param_2 == (longlong *)0x0) {
    return local_48 & 0xffffffffffffff00;
  }
  if (((*param_3 == 0.0) && (param_3[1] == 0.0)) && (param_3[2] == 0.0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    (**(code **)(*param_1 + 0x610))(0,param_3,local_f0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af1778) && (_Init_thread_header(&DAT_146af1778), DAT_146af1778 == -1))
  {
    FName::FName(&DAT_146af1770,"LineOfSight",1);
    _Init_thread_footer(&DAT_146af1778);
  }
  local_118 = param_2;
  FUN_1422ffb20(local_c8,DAT_146af1770,local_fc,1);
  FCollisionQueryParams::AddIgnoredActor(local_c8,param_1[0x91]);
  (**(code **)(*param_2 + 0x618))(param_2,local_d8,param_1[0x91]);
  uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  local_110 = &DAT_146aefe68;
  local_118 = (longlong *)local_c8;
  cVar1 = UWorld::LineTraceTestByChannel(uVar2,param_3,local_d8,3);
  if (cVar1 == '\0') {
    bVar5 = true;
    goto LAB_1423d9b4f;
  }
  lVar3 = FUN_1429d7ab0();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
LAB_1423d999f:
    lVar3 = param_2[0x2d];
    if (lVar3 == 0) {
      local_108 = _DAT_1468b5d90;
      local_100 = DAT_1468b5d98;
    }
    else {
      local_108 = *(undefined8 *)(lVar3 + 0x220);
      local_100 = *(float *)(lVar3 + 0x228);
    }
    fVar7 = (float)((ulonglong)local_108 >> 0x20) - param_3[1];
    fVar6 = (float)local_108 - *param_3;
    fVar6 = fVar7 * fVar7 + fVar6 * fVar6 + (local_100 - param_3[2]) * (local_100 - param_3[2]);
    if (fVar6 <= 6.4e+07) {
      lVar3 = FUN_1429d7ab0();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) || (fVar6 <= 4e+06)) {
        (**(code **)(*param_2 + 0x578))(param_2,local_e0,local_f8);
        lVar3 = param_2[0x2d];
        if (lVar3 == 0) {
          local_108 = _DAT_1468b5d90;
          local_100 = DAT_1468b5d98;
        }
        else {
          local_108 = *(undefined8 *)(lVar3 + 0x220);
          local_100 = *(float *)(lVar3 + 0x228);
        }
        local_e8 = local_100;
        local_100 = local_100 + local_f8[0];
        uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        local_110 = &DAT_146aefe68;
        local_118 = (longlong *)local_c8;
        cVar1 = UWorld::LineTraceTestByChannel(uVar2,param_3,&local_108,3);
        bVar5 = cVar1 == '\0';
      }
      else {
        bVar5 = false;
      }
    }
    else {
      bVar5 = false;
    }
  }
  else {
    lVar3 = param_2[0x2d];
    if (lVar3 != 0) {
      lVar4 = FUN_142912e90();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_1423d999f;
    }
    bVar5 = false;
  }
LAB_1423d9b4f:
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return (ulonglong)bVar5;
}



// FUNCTION 1423d9c10 FUN_1423d9c10 body=72 status=ok
// SIG undefined FUN_1423d9c10(void)

undefined1 FUN_1423d9c10(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  uVar2 = FUN_14175d020();
  plVar1 = *(longlong **)(param_1 + 0x828);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x70))(plVar1,param_2);
  }
  return uVar2;
}



// FUNCTION 1423d9ca0 FUN_1423d9ca0 body=178 status=ok
// SIG undefined FUN_1423d9ca0(void)

void FUN_1423d9ca0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 local_res18 [16];
  longlong local_18 [2];
  
  local_18[1] = 0x14;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x14,"MANUAL_VERTEX_FETCH",0x14,0x3f);
  piVar2 = (int *)TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
                  ::FindId(param_3 + 0x200,local_res18,local_18);
  iVar1 = *piVar2;
  if (local_18[0] != 0) {
    FMemory::Free(local_18[0]);
  }
  if (iVar1 == -1) {
    FUN_1404a3a40(param_3,L"MANUAL_VERTEX_FETCH",&DAT_144573578);
  }
  FUN_1404a3a40(param_3,L"USE_SPLINEDEFORM",&DAT_143f591f0);
  return;
}



// FUNCTION 1423d9d70 MoveHandle body=336 status=ok
// SIG undefined MoveHandle(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FKeyHandleLookupTable::MoveHandle(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Src;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  int local_48 [2];
  undefined1 local_40 [8];
  undefined4 *local_38;
  int *local_30;
  undefined4 local_28;
  char local_24;
  ulonglong local_20;
  
  if (-1 < param_2) {
    local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
    iVar4 = (int)param_1[1];
    if (param_2 < iVar4) {
      lVar5 = *param_1;
      local_24 = '\0';
      lVar3 = (longlong)param_2 * 8;
      if (*(char *)(lVar5 + 4 + (longlong)param_2 * 8) != '\0') {
        local_28 = *(undefined4 *)(lVar5 + lVar3);
        local_24 = '\x01';
        if (*(char *)(lVar5 + 4 + lVar3) != '\0') {
          *(undefined1 *)(lVar5 + 4 + lVar3) = 0;
          lVar5 = *param_1;
          iVar4 = (int)param_1[1];
        }
      }
      iVar1 = (iVar4 - param_2) + -1;
      local_48[0] = param_3;
      if (iVar1 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(lVar3 + lVar5),(void *)(lVar5 + (longlong)(param_2 + 1) * 8),
                   (longlong)iVar1 << 3);
        iVar4 = (int)param_1[1];
      }
      iVar1 = local_48[0];
      lVar3 = (longlong)local_48[0];
      *(int *)(param_1 + 1) = iVar4;
      if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar4 + -1);
      }
      _Src = (void *)(*param_1 + lVar3 * 8);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Src + 8),_Src,(longlong)((iVar4 + -1) - iVar1) << 3);
      puVar2 = (undefined4 *)(*param_1 + lVar3 * 8);
      *(undefined1 *)(puVar2 + 1) = 0;
      if (local_24 != '\0') {
        *puVar2 = local_28;
        *(undefined1 *)(puVar2 + 1) = 1;
        if (local_24 != '\0') {
          local_38 = &local_28;
          local_30 = local_48;
          TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>
                    (param_1 + 2,local_40,&local_38,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1423d9ec0 FUN_1423d9ec0 body=97 status=ok
// SIG undefined FUN_1423d9ec0(void)

void FUN_1423d9ec0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x10));
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1423d9f30 NotifyLevelChange body=73 status=ok
// SIG undefined NotifyLevelChange(void)

void FStreamingManagerCollection::NotifyLevelChange(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + *(longlong *)(param_1 + 0x10)) + 0x30))();
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1423d9f80 NotifyLevelOffset body=106 status=ok
// SIG undefined NotifyLevelOffset(void)

void FStreamingManagerCollection::NotifyLevelOffset
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x10));
      (**(code **)(*plVar1 + 0x58))(plVar1,param_2,param_3);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1423d9ff0 FUN_1423d9ff0 body=97 status=ok
// SIG undefined FUN_1423d9ff0(void)

void FUN_1423d9ff0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x10));
      (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1423da060 FUN_1423da060 body=97 status=ok
// SIG undefined FUN_1423da060(void)

void FUN_1423da060(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x10));
      (**(code **)(*plVar1 + 0x70))(plVar1,param_2);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1423da0d0 FUN_1423da0d0 body=97 status=ok
// SIG undefined FUN_1423da0d0(void)

void FUN_1423da0d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x10));
      (**(code **)(*plVar1 + 0x78))(plVar1,param_2);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1423da140 FUN_1423da140 body=192 status=ok
// SIG undefined FUN_1423da140(void)

void FUN_1423da140(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1[0xe5] == 0) {
    local_18 = 0;
    uStack_10 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1[0xe5] + 0xa0);
    local_18 = *(undefined8 *)(lVar1 + 0xf0);
    uStack_10 = *(undefined8 *)(lVar1 + 0xf8);
  }
  if ((((int)((ulonglong)uStack_10 >> 0x20) != *(int *)((longlong)param_1 + 0x83c) ||
       (int)((ulonglong)local_18 >> 0x20) != *(int *)((longlong)param_1 + 0x834)) ||
      (int)param_1[0x107] != (int)uStack_10) || (int)param_1[0x106] != (int)local_18) {
    FUN_1423dc000(param_1);
  }
  FUN_142393480(param_1);
  bVar2 = (**(code **)(*param_1 + 0x3f0))(param_1);
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xef;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | (bVar2 & 1) << 4;
  FUN_142252d00(param_1);
  return;
}



// FUNCTION 1423da200 FUN_1423da200 body=57 status=ok
// SIG undefined FUN_1423da200(void)

void FUN_1423da200(longlong *param_1)

{
  byte bVar1;
  
  FUN_142393480();
  bVar1 = (**(code **)(*param_1 + 0x3f0))(param_1);
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xef;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | (bVar1 & 1) << 4;
  FUN_142252d00(param_1);
  return;
}



// FUNCTION 1423da240 FUN_1423da240 body=58 status=ok
// SIG undefined FUN_1423da240(void)

void FUN_1423da240(longlong *param_1)

{
  byte bVar1;
  
  FUN_1423935c0();
  FUN_142252d00(param_1);
  bVar1 = (**(code **)(*param_1 + 0x3f0))(param_1);
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xef;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | (bVar1 & 1) << 4;
  return;
}



// FUNCTION 1423da280 FUN_1423da280 body=76 status=ok
// SIG undefined FUN_1423da280(void)

void FUN_1423da280(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x745) & 4) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x960))();
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*param_1 + 0x6b8))(param_1);
      if (lVar2 != 0) {
        FUN_1426b0f00(param_1 + 0x76,lVar2);
      }
    }
  }
  FUN_1423937b0(param_1);
  return;
}



// FUNCTION 1423da2d0 FUN_1423da2d0 body=27 status=ok
// SIG undefined FUN_1423da2d0(void)

void FUN_1423da2d0(undefined8 param_1)

{
  FUN_1423ca740();
  FUN_1423937b0(param_1);
  return;
}



// FUNCTION 1423da2f0 FUN_1423da2f0 body=182 status=ok
// SIG undefined FUN_1423da2f0(void)

void FUN_1423da2f0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar1 = param_1 + 0x92;
  cVar2 = FUN_14044af00(plVar1,0);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(plVar1);
    if (param_1[0x91] != lVar3) {
      lVar3 = FWeakObjectPtr::Get(plVar1);
      if (*(longlong **)(lVar3 + 0x490) == param_1) {
        lVar3 = FWeakObjectPtr::Get(plVar1);
        *(undefined8 *)(lVar3 + 0x490) = 0;
        plVar4 = (longlong *)FWeakObjectPtr::Get(plVar1);
        (**(code **)(*plVar4 + 0x740))(plVar4);
      }
    }
  }
  lVar3 = param_1[0x91];
  lVar5 = FWeakObjectPtr::Get(plVar1);
  param_1[0x91] = lVar5;
  (**(code **)(*param_1 + 0x750))(param_1,lVar3);
  param_1[0x91] = lVar3;
  FWeakObjectPtr::operator=(plVar1,lVar3);
  return;
}



// FUNCTION 1423da3d0 FUN_1423da3d0 body=37 status=ok
// SIG undefined FUN_1423da3d0(void)

void FUN_1423da3d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0xe5];
  if (param_2 != lVar1) {
    param_1[0xe5] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001423da3ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x928))(param_1,lVar1);
    return;
  }
  return;
}



// FUNCTION 1423da400 FUN_1423da400 body=87 status=ok
// SIG undefined FUN_1423da400(void)

void FUN_1423da400(longlong *param_1,longlong param_2)

{
  if (param_2 == param_1[0x91]) {
    (**(code **)(*param_1 + 0x780))();
    (**(code **)(*param_1 + 0x718))(param_1,0x145);
    if (param_1[0x8c] == 0) {
      FUN_142227350(param_1,0,1);
      return;
    }
  }
  return;
}



// FUNCTION 1423da460 FUN_1423da460 body=1235 status=ok
// SIG undefined FUN_1423da460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423da460(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 *local_158;
  ulonglong *puStack_150;
  undefined8 local_148;
  longlong local_140;
  undefined4 *local_138;
  ulonglong *puStack_130;
  undefined1 local_128 [16];
  undefined1 local_118 [8];
  longlong *local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
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
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if ((char)param_1[0x25] == '\x03') {
    plVar3 = (longlong *)param_1[0x91];
    if (param_2 != (longlong *)0x0) {
      if ((plVar3 != param_2) && (plVar3 != (longlong *)0x0)) {
        (**(code **)(*param_1 + 0x780))();
      }
      if ((longlong *)param_2[0x92] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_2[0x92] + 0x780))();
      }
      (**(code **)(*param_2 + 0x770))(param_2,param_1);
      (**(code **)(*param_1 + 0x750))(param_1,param_2);
      lVar10 = *(longlong *)(param_1[0x91] + 0x168);
      if (lVar10 == 0) {
        local_174 = DAT_1468b5da8;
        puVar12 = &local_17c;
        local_17c = DAT_1468b5da0;
      }
      else {
        local_108 = *(float *)(lVar10 + 0x210);
        fStack_104 = *(float *)(lVar10 + 0x214);
        fStack_100 = *(float *)(lVar10 + 0x218);
        fStack_fc = *(float *)(lVar10 + 0x21c);
        auVar5._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != fStack_104);
        auVar5._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != local_108);
        auVar5._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_100);
        auVar5._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_fc);
        iVar8 = movmskps((int)param_1[0x91],auVar5);
        if (iVar8 != 0) {
          *(float *)(lVar10 + 0x250) = local_108;
          *(float *)(lVar10 + 0x254) = fStack_104;
          *(float *)(lVar10 + 600) = fStack_100;
          *(float *)(lVar10 + 0x25c) = fStack_fc;
          puVar12 = (undefined8 *)FQuat::Rotator(&local_108,&local_158);
          *(undefined8 *)(lVar10 + 0x260) = *puVar12;
          *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar12 + 1);
        }
        local_180 = *(undefined4 *)(lVar10 + 0x268);
        puVar12 = &local_188;
        local_188 = *(undefined8 *)(lVar10 + 0x260);
      }
      local_170 = *puVar12;
      local_168 = *(undefined4 *)(puVar12 + 1);
      (**(code **)(*param_1 + 0x728))(param_1,&local_170,1);
      (**(code **)(*(longlong *)param_1[0x91] + 0x708))();
    }
    if (plVar3 != param_2) {
      lVar10 = param_1[0x91];
      *(int *)((longlong)param_1 + 0x4bc) = *(int *)((longlong)param_1 + 0x4bc) + 1;
      iVar8 = *(int *)((longlong)param_1 + 0x4bc);
      bVar6 = false;
      iVar9 = (int)param_1[0x96] + -1;
      lVar14 = (longlong)iVar9;
      if (-1 < iVar9) {
        lVar13 = lVar14 << 4;
        bVar6 = false;
        do {
          lVar4 = param_1[0x95];
          if ((*(int *)(lVar13 + 8 + lVar4) == 0) ||
             (plVar3 = *(longlong **)(lVar13 + lVar4), plVar3 == (longlong *)0x0)) {
LAB_1423da8d0:
            bVar6 = true;
          }
          else {
            cVar7 = (**(code **)(*plVar3 + 0x40))(plVar3,lVar10);
            if (cVar7 == '\0') goto LAB_1423da8d0;
          }
          lVar13 = lVar13 + -0x10;
          lVar14 = lVar14 + -1;
        } while (-1 < lVar14);
        iVar8 = *(int *)((longlong)param_1 + 0x4bc);
      }
      *(int *)((longlong)param_1 + 0x4bc) = iVar8 + -1;
      if (bVar6) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x95,0);
      }
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x9b,param_1);
  }
  else {
    FName::FName(local_190,&DAT_14506fc8c,1);
    local_198 = param_1[3];
    lVar10 = FText::FromName(local_78,&local_198);
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_c8,
                        L"Possess function should only be used by the network authority for {0}",
                        L"Controller",L"ControllerPossessAuthorityOnly");
    puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_b0,uVar11);
    local_60[0] = 4;
    FText::FText(local_50,lVar10);
    local_148 = *puVar12;
    local_158 = local_60;
    puStack_150 = &local_30;
    local_140 = puVar12[1];
    local_38 = '\x01';
    if (local_140 != 0) {
      LOCK();
      *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
      UNLOCK();
    }
    local_138 = local_158;
    puStack_130 = puStack_150;
    uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_128,&local_138);
    uVar11 = FText::Format(local_e0,&local_148,uVar11);
    FText::FText(local_f8,uVar11);
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_d8 + 1;
      lVar14 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_128);
    if (local_38 != '\0') {
      local_38 = '\0';
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_48 + 1;
        lVar14 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
    }
    plVar3 = (longlong *)puVar12[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar14 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    plVar3 = *(longlong **)(lVar10 + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    uVar11 = FUN_14161fb50(local_a0,local_190);
    FMessageLog::Warning(uVar11,local_118,local_f8);
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_110 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_a0);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_f0 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_c0 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1423da940 FUN_1423da940 body=67 status=ok
// SIG undefined FUN_1423da940(void)

void FUN_1423da940(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_142394440();
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x760)) {
    lVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(longlong *)(lVar2 + 0xb8 + *(longlong *)(param_1 + 0x758)) = param_1;
      lVar2 = lVar2 + 0xc0;
    } while (iVar1 < *(int *)(param_1 + 0x760));
  }
  return;
}



// FUNCTION 1423da990 FUN_1423da990 body=193 status=ok
// SIG undefined FUN_1423da990(void)

void FUN_1423da990(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  FUN_142238430();
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar6 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar6;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::AddController(uVar4,param_1);
    if ((param_1[0x2d] != 0) && ((*(byte *)(param_1[0x2d] + 0x24c) & 8) != 0)) {
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x720))(param_1,local_18);
      local_28 = *puVar5;
      local_20 = *(undefined4 *)(puVar5 + 1);
      FUN_142399b90(param_1[0x2d],&local_28,0,0,0);
    }
  }
  return;
}



// FUNCTION 1423daa60 FUN_1423daa60 body=867 status=ok
// SIG undefined FUN_1423daa60(void)

void FUN_1423daa60(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  longlong lVar17;
  LARGE_INTEGER local_res10;
  
  if (*(longlong *)(param_1 + 0x728) != 0) {
    FUN_1417510e0();
  }
  FUN_1423945d0();
  if (*(longlong *)(param_1 + 0x728) != 0) {
    QueryPerformanceCounter(&local_res10);
  }
  if (DAT_1468b616c == '\0') {
    lVar13 = *(longlong *)(param_1 + 0x758);
    lVar9 = (longlong)*(int *)(param_1 + 0x760) * 0xc0 + lVar13;
    if (lVar13 != lVar9) {
      piVar7 = (int *)(lVar13 + 0x2c);
      do {
        piVar7[-1] = 0;
        if (*piVar7 != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(piVar7 + -3,0);
        }
        lVar13 = lVar13 + 0xc0;
        piVar7 = piVar7 + 0x30;
      } while (lVar13 != lVar9);
    }
  }
  else {
    lVar13 = *(longlong *)(param_1 + 0x758);
    iVar11 = 0;
    lVar9 = (longlong)*(int *)(param_1 + 0x760) * 0xc0 + lVar13;
    if (lVar13 != lVar9) {
      piVar7 = (int *)(lVar13 + 0x28);
      bVar16 = false;
      do {
        bVar2 = false;
        plVar14 = (longlong *)(piVar7 + 2);
        uVar12 = 0;
        plVar8 = plVar14;
        do {
          if (*plVar8 != 0) {
            bVar2 = true;
            break;
          }
          uVar12 = uVar12 + 1;
          plVar8 = plVar8 + 1;
        } while (uVar12 < 2);
        bVar15 = bVar2;
        if (((iVar11 != 0) && ((!bVar2 || (bVar15 = bVar16, !bVar16)))) || (bVar16 = bVar15, !bVar2)
           ) {
          *piVar7 = 0;
          if (piVar7[1] != 0) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeTo();
          }
          if (0 < iVar11) {
            uVar12 = 0;
            lVar10 = 0x20;
            do {
              if (*plVar14 != 0) {
                FUN_141edf360();
                FUN_141ee24f0(0);
                puVar1 = (undefined8 *)*plVar14;
                if (puVar1 != (undefined8 *)0x0) {
                  (**(code **)*puVar1)(puVar1,1);
                }
                *plVar14 = 0;
                lVar17 = *(longlong *)(piVar7 + -2);
                lVar6 = (longlong)*piVar7 * 0x30 + lVar17;
                if (lVar17 != lVar6) {
                  local_res10.s.LowPart = 0;
                  do {
                    *(undefined4 *)(lVar17 + lVar10) = 0;
                    lVar17 = lVar17 + 0x30;
                  } while (lVar17 != lVar6);
                }
              }
              uVar12 = uVar12 + 1;
              plVar14 = plVar14 + 1;
              lVar10 = lVar10 + 4;
            } while (uVar12 < 2);
          }
        }
        iVar11 = iVar11 + 1;
        lVar13 = lVar13 + 0xc0;
        piVar7 = piVar7 + 0x30;
      } while (lVar13 != lVar9);
    }
  }
  plVar14 = (longlong *)(param_1 + 0x758);
  iVar11 = 4;
  if (3 < *(int *)(param_1 + 0x748)) {
    iVar11 = *(int *)(param_1 + 0x748);
  }
  iVar5 = *(int *)(param_1 + 0x760);
  *(int *)(param_1 + 0x748) = iVar11;
  if (((((1 < iVar5) && (*(longlong *)(param_1 + 0x728) != 0)) &&
       (lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x728) + 0x38), lVar13 != 0)) &&
      ((0 < *(int *)(lVar13 + 0x68) && (*(int *)(lVar13 + 0x68) == iVar5)))) &&
     (iVar11 = iVar5 + -1, -1 < iVar11)) {
    lVar17 = (longlong)iVar11 * 0x1c;
    lVar10 = (longlong)iVar11 * 0xc0;
    lVar9 = (longlong)iVar5 * 0xc0;
    do {
      lVar6 = *(longlong *)(lVar13 + 0x60);
      bVar3 = FUN_142433a10();
      if ((*(char *)(lVar17 + (ulonglong)bVar3 * 8 + lVar6) == '\0') &&
         (1 < *(int *)(param_1 + 0x760))) {
        FUN_1423c50e0(*plVar14 + lVar10);
        iVar5 = *(int *)(param_1 + 0x760);
        iVar4 = (iVar5 - iVar11) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar14 + lVar10),(void *)(*plVar14 + lVar9),(longlong)iVar4 * 0xc0);
          iVar5 = *(int *)(param_1 + 0x760);
        }
        *(int *)(param_1 + 0x760) = iVar5 + -1;
        TArray<FPakPrecacher::FPakData,FDefaultAllocator>::ResizeShrink(plVar14);
      }
      lVar9 = lVar9 + -0xc0;
      lVar10 = lVar10 + -0xc0;
      lVar17 = lVar17 + -0x1c;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
    iVar5 = *(int *)(param_1 + 0x760);
  }
  iVar11 = 0;
  if (0 < iVar5) {
    lVar13 = 0;
    do {
      uVar12 = 0;
      plVar8 = (longlong *)(lVar13 + 0x30 + *plVar14);
      do {
        if (*plVar8 != 0) {
          FUN_141edf270();
        }
        uVar12 = uVar12 + 1;
        plVar8 = plVar8 + 1;
      } while (uVar12 < 2);
      iVar11 = iVar11 + 1;
      lVar13 = lVar13 + 0xc0;
    } while (iVar11 < *(int *)(param_1 + 0x760));
  }
  return;
}



// FUNCTION 1423dadd0 FUN_1423dadd0 body=3308 status=ok
// SIG undefined FUN_1423dadd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423dadd0(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  short sVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  short *psVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar20;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
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
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined1 local_178 [8];
  undefined8 uStack_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [8];
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
  undefined1 local_118 [8];
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
  undefined1 local_d8 [16];
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  iVar9 = UObjectBaseUtility::GetLinkerUE4Version();
  if (0x13f < iVar9) goto LAB_1423dba2e;
  cVar4 = *(char *)(param_1 + 0x719);
  puVar11 = (undefined8 *)FText::ToString(param_1 + 0x6f0);
  if (*(int *)(puVar11 + 1) == 0) {
    psVar12 = &DAT_143f3eda8;
  }
  else {
    psVar12 = (short *)*puVar11;
  }
  lVar6 = *(longlong *)(param_1 + 0x710);
  uVar10 = *(undefined4 *)(param_1 + 0x734);
  uVar1 = *(undefined4 *)(param_1 + 0x730);
  uVar2 = *(uint *)(param_1 + 0x724);
  uVar3 = *(undefined4 *)(param_1 + 0x720);
  if (lVar6 == 0) {
    fVar43 = 0.0;
  }
  else {
    sVar5 = *psVar12;
    fVar30 = 0.0;
    fVar43 = -1.0;
    uStack_170 = psVar12;
    local_178 = (undefined1  [8])psVar12;
    while (sVar5 != 0) {
      local_1d8 = uVar2;
      local_1d0 = uVar1;
      local_1c8 = uVar10;
      _local_148 = _local_178;
      ComputeTextSize(&local_168,local_148,lVar6,uVar3);
      if (fVar43 < 0.0) {
        fVar43 = fStack_164;
      }
      do {
        sVar5 = *psVar12;
        if (sVar5 == 0) break;
        if ((((sVar5 == 0x3c) && (psVar12[1] == 0x62)) && (psVar12[2] == 0x72)) &&
           (psVar12[3] == 0x3e)) {
          psVar12 = psVar12 + 4;
          uStack_170 = psVar12;
          break;
        }
        psVar12 = psVar12 + 1;
        uStack_170 = psVar12;
      } while (sVar5 != 10);
      fVar36 = fStack_164;
      if (fStack_164 <= 0.0) {
        fVar36 = (float)FUN_14244fa00(lVar6);
      }
      fVar30 = fVar30 + fVar36;
      sVar5 = *psVar12;
    }
    if (cVar4 == '\0') {
LAB_1423dafb6:
      fVar43 = 0.0;
    }
    else if (cVar4 == '\x01') {
      fVar43 = fVar30 * -0.5;
    }
    else if (cVar4 == '\x02') {
      fVar43 = -fVar30;
    }
    else if (cVar4 != '\x03') goto LAB_1423dafb6;
    fVar43 = -fVar43;
  }
  uVar10 = FUN_14238d0c0(param_1,&local_f8);
  fVar39 = fRam0000000146af1228;
  fVar38 = fRam0000000146af1224;
  fVar34 = _DAT_146af1220;
  fVar22 = fRam00000001468b5b7c;
  fVar21 = fRam00000001468b5b78;
  fVar55 = fRam00000001468b5b74;
  fVar17 = _DAT_1468b5b70;
  fVar30 = (float)DAT_1468b5b90;
  fVar27 = DAT_1468b5b90._4_4_;
  fVar33 = DAT_1468b5b90._8_4_;
  fVar26 = DAT_1468b5b90._12_4_;
  fStack_150 = -fVar43;
  fVar36 = local_d8._0_4_;
  fVar31 = local_d8._4_4_;
  fVar37 = local_d8._8_4_;
  fVar20 = local_d8._12_4_;
  fVar44 = 0.0;
  fVar23 = 0.0;
  fVar48 = 0.0;
  auVar13 = minps(_DAT_1468b5b90,local_d8);
  _local_148 = _DAT_1468b5b90;
  auVar14._4_4_ = -(uint)(auVar13._4_4_ < fRam0000000146af12a4);
  auVar14._0_4_ = -(uint)(auVar13._0_4_ < _DAT_146af12a0);
  auVar14._8_4_ = -(uint)(auVar13._8_4_ < fRam0000000146af12a8);
  auVar14._12_4_ = -(uint)(auVar13._12_4_ < fRam0000000146af12ac);
  iVar9 = movmskps(uVar10,auVar14);
  _local_178 = ZEXT416((uint)fVar43) << 0x40;
  local_168 = _DAT_146af12a0;
  fStack_164 = fRam0000000146af12a4;
  fStack_160 = fRam0000000146af12a8;
  fStack_15c = fRam0000000146af12ac;
  if (iVar9 == 0) {
    local_158 = fVar36 * 0.0;
    fStack_154 = fVar31 * 0.0;
    fStack_150 = fStack_150 * fVar37;
    fStack_14c = fVar20 * 0.0;
    fVar36 = fVar30 * fVar36;
    fVar31 = fVar27 * fVar31;
    fVar37 = fVar33 * fVar37;
    fVar20 = fVar26 * fVar20;
    fVar25 = local_f8 * fRam00000001468b5b7c * _DAT_146af1260 + _DAT_1468b5b70 * fStack_ec +
             fStack_f4 * fRam00000001468b5b78 * _DAT_146af1250 +
             fStack_f0 * fRam00000001468b5b74 * _DAT_146af1240;
    fVar28 = local_f8 * fRam00000001468b5b78 * fRam0000000146af1264 +
             fRam00000001468b5b74 * fStack_ec +
             fStack_f4 * fRam00000001468b5b7c * fRam0000000146af1254 +
             fStack_f0 * _DAT_1468b5b70 * fRam0000000146af1244;
    fVar29 = local_f8 * fRam00000001468b5b74 * fRam0000000146af1268 +
             fRam00000001468b5b78 * fStack_ec + fStack_f4 * _DAT_1468b5b70 * fRam0000000146af1258 +
             fStack_f0 * fRam00000001468b5b7c * fRam0000000146af1248;
    fVar32 = local_f8 * _DAT_1468b5b70 * fRam0000000146af126c + fRam00000001468b5b7c * fStack_ec +
             fStack_f4 * fRam00000001468b5b74 * fRam0000000146af125c +
             fStack_f0 * fRam00000001468b5b78 * fRam0000000146af124c;
    fVar34 = fStack_150 * fStack_f4 - fStack_154 * fStack_f0;
    fVar38 = local_158 * fStack_f0 - fStack_150 * local_f8;
    fVar39 = fStack_154 * local_f8 - local_158 * fStack_f4;
    fVar24 = fStack_14c * fStack_ec - fStack_14c * fStack_ec;
    fVar34 = fVar34 + fVar34;
    fVar38 = fVar38 + fVar38;
    fVar39 = fVar39 + fVar39;
    fVar24 = fVar24 + fVar24;
    local_e8 = (fVar39 * fStack_f4 - fVar38 * fStack_f0) + fVar34 * fStack_ec + local_158 + local_e8
    ;
    fStack_e4 = (fVar34 * fStack_f0 - fVar39 * local_f8) + fVar38 * fStack_ec + fStack_154 +
                fStack_e4;
    fStack_e0 = (fVar38 * local_f8 - fVar34 * fStack_f4) + fVar39 * fStack_ec + fStack_150 +
                fStack_e0;
    fStack_dc = (fVar24 * fStack_ec - fVar24 * fStack_ec) + fVar24 * fStack_ec + fStack_14c +
                fStack_dc;
    uVar10 = 0;
  }
  else {
    fVar43 = fStack_f4 + fStack_f4;
    fVar23 = fStack_f0 + fStack_f0;
    fVar48 = local_f8 * (local_f8 + local_f8);
    fVar44 = fStack_ec * (local_f8 + local_f8);
    fStack_14c = fVar26 * fVar20;
    fVar52 = (fStack_ec * fVar23 + local_f8 * fVar43) * fVar36;
    fVar53 = (fVar44 + fStack_f4 * fVar23) * fVar31;
    fVar54 = (fStack_ec * fVar43 + local_f8 * fVar23) * fVar37;
    fVar40 = fVar31 * (local_f8 * fVar43 - fStack_ec * fVar23);
    fVar41 = fVar37 * (fStack_f4 * fVar23 - fVar44);
    fVar42 = fVar36 * (local_f8 * fVar23 - fStack_ec * fVar43);
    fVar44 = (float)((uint)((_DAT_146af1220 - (fStack_f0 * fVar23 + fStack_f4 * fVar43)) * fVar36) &
                    _DAT_146af1230);
    fVar23 = (float)((uint)((fRam0000000146af1224 - (fStack_f0 * fVar23 + fVar48)) * fVar31) &
                    uRam0000000146af1234);
    fVar24 = (float)((uint)((fRam0000000146af1228 - (fStack_f4 * fVar43 + fVar48)) * fVar37) &
                    uRam0000000146af1238);
    fVar25 = (float)((uint)((fRam0000000146af122c - (fVar48 + fVar48)) * fVar20) &
                    uRam0000000146af123c);
    fVar20 = fRam00000001468b5b74 + fRam00000001468b5b74;
    fVar48 = fRam00000001468b5b78 + fRam00000001468b5b78;
    fVar28 = _DAT_1468b5b70 * (_DAT_1468b5b70 + _DAT_1468b5b70);
    fVar43 = fRam00000001468b5b7c * (_DAT_1468b5b70 + _DAT_1468b5b70);
    fVar45 = (fRam00000001468b5b7c * fVar48 + _DAT_1468b5b70 * fVar20) * fVar30;
    fVar46 = (fVar43 + fRam00000001468b5b74 * fVar48) * fVar27;
    fVar47 = (fRam00000001468b5b7c * fVar20 + _DAT_1468b5b70 * fVar48) * fVar33;
    fVar29 = fVar27 * (_DAT_1468b5b70 * fVar20 - fRam00000001468b5b7c * fVar48);
    fVar32 = fVar33 * (fRam00000001468b5b74 * fVar48 - fVar43);
    fVar35 = fVar30 * (_DAT_1468b5b70 * fVar48 - fRam00000001468b5b7c * fVar20);
    fVar43 = (float)((uint)((_DAT_146af1220 -
                            (fRam00000001468b5b78 * fVar48 + fRam00000001468b5b74 * fVar20)) *
                           fVar30) & _DAT_146af1230);
    fVar48 = (float)((uint)((fRam0000000146af1224 - (fRam00000001468b5b78 * fVar48 + fVar28)) *
                           fVar27) & uRam0000000146af1234);
    fVar20 = (float)((uint)((fRam0000000146af1228 - (fRam00000001468b5b74 * fVar20 + fVar28)) *
                           fVar33) & uRam0000000146af1238);
    fVar26 = (float)((uint)((fRam0000000146af122c - (fVar28 + fVar28)) * fVar26) &
                    uRam0000000146af123c);
    local_1b8 = fVar45 * fVar40 + fVar43 * fVar44 + fVar35 * fVar54 + fVar26 * local_e8;
    fStack_1b4 = fVar45 * fVar23 + fVar43 * fVar52 + fVar35 * fVar41 + fVar26 * fStack_e4;
    fStack_1b0 = fVar45 * fVar53 + fVar43 * fVar42 + fVar35 * fVar24 + fVar26 * fStack_e0;
    fStack_1ac = fVar45 * fVar25 + fVar43 * fVar25 + fVar35 * fVar25 + fVar26 * fRam0000000146af122c
    ;
    local_1a8 = fVar48 * fVar40 + fVar29 * fVar44 + fVar46 * fVar54 + fVar26 * local_e8;
    fStack_1a4 = fVar48 * fVar23 + fVar29 * fVar52 + fVar46 * fVar41 + fVar26 * fStack_e4;
    fStack_1a0 = fVar48 * fVar53 + fVar29 * fVar42 + fVar46 * fVar24 + fVar26 * fStack_e0;
    fStack_19c = fVar48 * fVar25 + fVar29 * fVar25 + fVar46 * fVar25 + fVar26 * fRam0000000146af122c
    ;
    local_198 = fVar32 * fVar40 + fVar47 * fVar44 + fVar20 * fVar54 + fVar26 * local_e8;
    fStack_194 = fVar32 * fVar23 + fVar47 * fVar52 + fVar20 * fVar41 + fVar26 * fStack_e4;
    fStack_190 = fVar32 * fVar53 + fVar47 * fVar42 + fVar20 * fVar24 + fVar26 * fStack_e0;
    fStack_18c = fVar32 * fVar25 + fVar47 * fVar25 + fVar20 * fVar25 + fVar26 * fRam0000000146af122c
    ;
    local_188 = fVar40 * 0.0 + fVar44 * 0.0 + fStack_150 * fVar54 + fRam0000000146af122c * local_e8;
    fStack_184 = fVar23 * 0.0 + fVar52 * 0.0 + fStack_150 * fVar41 +
                 fRam0000000146af122c * fStack_e4;
    fStack_180 = fVar53 * 0.0 + fVar42 * 0.0 + fStack_150 * fVar24 +
                 fRam0000000146af122c * fStack_e0;
    fStack_17c = fVar25 * 0.0 + fVar25 * 0.0 + fStack_150 * fVar25 +
                 fRam0000000146af122c * fRam0000000146af122c;
    local_158 = fVar30 * fVar36;
    fStack_154 = fVar27 * fVar31;
    fStack_150 = fVar33 * fVar37;
    FMatrix::RemoveScaling(&local_1b8);
    fVar30 = (float)(-(uint)(_DAT_146af12a0 <= fVar30 * fVar36) & (_DAT_146af1290 ^ (uint)fVar34) ^
                    _DAT_146af1290);
    fVar43 = (float)(-(uint)(fRam0000000146af12a4 <= fVar27 * fVar31) &
                     (uRam0000000146af1294 ^ (uint)fVar38) ^ uRam0000000146af1294);
    fVar36 = (float)(-(uint)(fRam0000000146af12a8 <= fVar33 * fVar37) &
                     (uRam0000000146af1298 ^ (uint)fVar39) ^ uRam0000000146af1298);
    local_1b8 = local_1b8 * fVar30;
    fStack_1b4 = fStack_1b4 * fVar30;
    fStack_1b0 = fStack_1b0 * fVar30;
    fStack_1a0 = fStack_1a0 * fVar43;
    fStack_1a4 = fStack_1a4 * fVar43;
    local_1a8 = local_1a8 * fVar43;
    fStack_190 = fStack_190 * fVar36;
    local_198 = local_198 * fVar36;
    fStack_194 = fStack_194 * fVar36;
    uVar10 = FQuat::FQuat(&local_138,&local_1b8);
    auVar18._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
    auVar18._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
    auVar18._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
    auVar18._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
    fVar31 = auVar18._4_4_ + auVar18._0_4_;
    fVar33 = auVar18._8_4_ + auVar18._4_4_;
    fVar37 = auVar18._12_4_ + auVar18._8_4_;
    fVar26 = auVar18._0_4_ + auVar18._12_4_;
    auVar13._4_4_ = fVar33;
    auVar13._0_4_ = fVar31;
    auVar13._8_4_ = fVar37;
    auVar13._12_4_ = fVar26;
    auVar13 = rsqrtps(auVar18,auVar13);
    fVar30 = auVar13._0_4_;
    fVar43 = auVar13._4_4_;
    fVar36 = auVar13._8_4_;
    fVar27 = auVar13._12_4_;
    fVar30 = (_DAT_146af1280 - fVar30 * fVar30 * fVar31 * _DAT_146af1280) * fVar30 + fVar30;
    fVar43 = (fRam0000000146af1284 - fVar43 * fVar43 * fVar33 * fRam0000000146af1284) * fVar43 +
             fVar43;
    fVar36 = (fRam0000000146af1288 - fVar36 * fVar36 * fVar37 * fRam0000000146af1288) * fVar36 +
             fVar36;
    fVar27 = (fRam0000000146af128c - fVar27 * fVar27 * fVar26 * fRam0000000146af128c) * fVar27 +
             fVar27;
    fVar25 = (float)(((uint)(((_DAT_146af1280 - fVar30 * fVar30 * fVar31 * _DAT_146af1280) * fVar30
                             + fVar30) * local_138) ^ _DAT_146af1270) & -(uint)(1e-08 <= fVar31) ^
                    _DAT_146af1270);
    fVar28 = (float)(((uint)(((fRam0000000146af1284 -
                              fVar43 * fVar43 * fVar33 * fRam0000000146af1284) * fVar43 + fVar43) *
                            fStack_134) ^ uRam0000000146af1274) & -(uint)(1e-08 <= fVar33) ^
                    uRam0000000146af1274);
    fVar29 = (float)(((uint)(((fRam0000000146af1288 -
                              fVar36 * fVar36 * fVar37 * fRam0000000146af1288) * fVar36 + fVar36) *
                            fStack_130) ^ uRam0000000146af1278) & -(uint)(1e-08 <= fVar37) ^
                    uRam0000000146af1278);
    fVar32 = (float)(((uint)(((fRam0000000146af128c -
                              fVar27 * fVar27 * fVar26 * fRam0000000146af128c) * fVar27 + fVar27) *
                            fStack_12c) ^ uRam0000000146af127c) & -(uint)(1e-08 <= fVar26) ^
                    uRam0000000146af127c);
    fStack_dc = 0.0;
    fVar36 = local_158;
    fVar31 = fStack_154;
    fVar37 = fStack_150;
    fVar20 = fStack_14c;
    fVar44 = (float)local_178._0_4_;
    fVar23 = (float)local_178._4_4_;
    fVar43 = (float)uStack_170;
    fVar48 = uStack_170._4_4_;
    fVar30 = (float)local_148._0_4_;
    fVar27 = (float)local_148._4_4_;
    fVar33 = fStack_140;
    fVar26 = fStack_13c;
    local_e8 = local_188;
    fStack_e4 = fStack_184;
    fStack_e0 = fStack_180;
  }
  fVar39 = fRam0000000146af1228;
  fVar38 = fRam0000000146af1224;
  fVar34 = _DAT_146af1220;
  auVar15._4_4_ = fVar31;
  auVar15._0_4_ = fVar36;
  auVar15._8_4_ = fVar37;
  auVar15._12_4_ = fVar20;
  auVar8._4_4_ = fVar27;
  auVar8._0_4_ = fVar30;
  auVar8._8_4_ = fVar33;
  auVar8._12_4_ = fVar26;
  auVar13 = minps(auVar15,auVar8);
  auVar16._4_4_ = -(uint)(auVar13._4_4_ < fRam0000000146af12a4);
  auVar16._0_4_ = -(uint)(auVar13._0_4_ < _DAT_146af12a0);
  auVar16._8_4_ = -(uint)(auVar13._8_4_ < fRam0000000146af12a8);
  auVar16._12_4_ = -(uint)(auVar13._12_4_ < fRam0000000146af12ac);
  iVar9 = movmskps(uVar10,auVar16);
  local_168 = _DAT_146af12a0;
  fStack_164 = fRam0000000146af12a4;
  fStack_160 = fRam0000000146af12a8;
  fStack_15c = fRam0000000146af12ac;
  if (iVar9 == 0) {
    local_e8 = local_e8 * fVar30;
    fStack_e4 = fStack_e4 * fVar27;
    fStack_e0 = fStack_e0 * fVar33;
    fStack_dc = fStack_dc * fVar26;
    local_128 = fVar32 * fVar17 * _DAT_146af1260 + fVar22 * fVar25 +
                fVar29 * fVar55 * _DAT_146af1250 + fVar28 * fVar21 * _DAT_146af1240;
    fStack_124 = fVar29 * fVar17 * fRam0000000146af1264 + fVar22 * fVar28 +
                 fVar32 * fVar55 * fRam0000000146af1254 + fVar25 * fVar21 * fRam0000000146af1244;
    fStack_120 = fVar28 * fVar17 * fRam0000000146af1268 + fVar22 * fVar29 +
                 fVar25 * fVar55 * fRam0000000146af1258 + fVar32 * fVar21 * fRam0000000146af1248;
    fStack_11c = fVar25 * fVar17 * fRam0000000146af126c + fVar22 * fVar32 +
                 fVar28 * fVar55 * fRam0000000146af125c + fVar29 * fVar21 * fRam0000000146af124c;
    fVar34 = fStack_e0 * fVar55 - fStack_e4 * fVar21;
    fVar38 = local_e8 * fVar21 - fStack_e0 * fVar17;
    fVar39 = fStack_e4 * fVar17 - local_e8 * fVar55;
    fVar24 = fStack_dc * fVar22 - fStack_dc * fVar22;
    fVar34 = fVar34 + fVar34;
    fVar38 = fVar38 + fVar38;
    fVar39 = fVar39 + fVar39;
    fVar24 = fVar24 + fVar24;
    local_118._4_4_ = (fVar34 * fVar21 - fVar39 * fVar17) + fVar22 * fVar38 + fStack_e4 + fVar23;
    local_118._0_4_ = (fVar39 * fVar55 - fVar38 * fVar21) + fVar22 * fVar34 + local_e8 + fVar44;
    fStack_110 = (fVar38 * fVar17 - fVar34 * fVar55) + fVar22 * fVar39 + fStack_e0 + fVar43;
    fStack_10c = (fVar24 * fVar22 - fVar24 * fVar22) + fVar22 * fVar24 + fStack_dc + fVar48;
  }
  else {
    fVar48 = fVar55 + fVar55;
    fVar35 = fVar21 + fVar21;
    fVar40 = (fVar17 + fVar17) * fVar17;
    fVar24 = (fVar17 + fVar17) * fVar22;
    fVar49 = (fVar35 * fVar22 + fVar48 * fVar17) * fVar30;
    fVar50 = (fVar24 + fVar35 * fVar55) * fVar27;
    fVar51 = (fVar48 * fVar22 + fVar35 * fVar17) * fVar33;
    fVar41 = fVar27 * (fVar48 * fVar17 - fVar35 * fVar22);
    fVar45 = fVar33 * (fVar35 * fVar55 - fVar24);
    fVar47 = fVar30 * (fVar35 * fVar17 - fVar48 * fVar22);
    fVar17 = (float)((uint)((_DAT_146af1220 - (fVar35 * fVar21 + fVar48 * fVar55)) * fVar30) &
                    _DAT_146af1230);
    fVar21 = (float)((uint)((fRam0000000146af1224 - (fVar35 * fVar21 + fVar40)) * fVar27) &
                    uRam0000000146af1234);
    fVar24 = (float)((uint)((fRam0000000146af1228 - (fVar48 * fVar55 + fVar40)) * fVar33) &
                    uRam0000000146af1238);
    fVar35 = (float)((uint)((fRam0000000146af122c - (fVar40 + fVar40)) * fVar26) &
                    uRam0000000146af123c);
    fVar22 = fVar28 + fVar28;
    fVar48 = fVar29 + fVar29;
    local_178._4_4_ = fVar23;
    local_178._0_4_ = fVar44;
    uStack_170._0_4_ = fVar43;
    uStack_170._4_4_ = fRam0000000146af122c;
    fVar40 = fVar25 * (fVar25 + fVar25);
    fVar55 = fVar32 * (fVar25 + fVar25);
    fVar52 = (fVar32 * fVar48 + fVar25 * fVar22) * fVar36;
    fVar53 = (fVar55 + fVar28 * fVar48) * fVar31;
    fVar54 = (fVar32 * fVar22 + fVar25 * fVar48) * fVar37;
    fVar42 = fVar31 * (fVar25 * fVar22 - fVar32 * fVar48);
    fVar46 = fVar37 * (fVar28 * fVar48 - fVar55);
    fVar32 = fVar36 * (fVar25 * fVar48 - fVar32 * fVar22);
    fVar55 = (float)((uint)((_DAT_146af1220 - (fVar29 * fVar48 + fVar28 * fVar22)) * fVar36) &
                    _DAT_146af1230);
    fVar48 = (float)((uint)((fRam0000000146af1224 - (fVar29 * fVar48 + fVar40)) * fVar31) &
                    uRam0000000146af1234);
    fVar22 = (float)((uint)((fRam0000000146af1228 - (fVar28 * fVar22 + fVar40)) * fVar37) &
                    uRam0000000146af1238);
    fVar25 = (float)((uint)((fRam0000000146af122c - (fVar40 + fVar40)) * fVar20) &
                    uRam0000000146af123c);
    local_1b8 = fVar52 * fVar41 + fVar55 * fVar17 + fVar32 * fVar51 + fVar25 * fVar44;
    fStack_1b4 = fVar52 * fVar21 + fVar55 * fVar49 + fVar32 * fVar45 + fVar25 * fVar23;
    fStack_1b0 = fVar52 * fVar50 + fVar55 * fVar47 + fVar32 * fVar24 + fVar25 * fVar43;
    fStack_1ac = fVar52 * fVar35 + fVar55 * fVar35 + fVar32 * fVar35 + fVar25 * fRam0000000146af122c
    ;
    local_1a8 = fVar48 * fVar41 + fVar42 * fVar17 + fVar53 * fVar51 + fVar25 * fVar44;
    fStack_1a4 = fVar48 * fVar21 + fVar42 * fVar49 + fVar53 * fVar45 + fVar25 * fVar23;
    fStack_1a0 = fVar48 * fVar50 + fVar42 * fVar47 + fVar53 * fVar24 + fVar25 * fVar43;
    fStack_19c = fVar48 * fVar35 + fVar42 * fVar35 + fVar53 * fVar35 + fVar25 * fRam0000000146af122c
    ;
    local_198 = fVar46 * fVar41 + fVar54 * fVar17 + fVar22 * fVar51 + fVar25 * fVar44;
    fStack_194 = fVar46 * fVar21 + fVar54 * fVar49 + fVar22 * fVar45 + fVar25 * fVar23;
    fStack_190 = fVar46 * fVar50 + fVar54 * fVar47 + fVar22 * fVar24 + fVar25 * fVar43;
    fStack_18c = fVar46 * fVar35 + fVar54 * fVar35 + fVar22 * fVar35 + fVar25 * fRam0000000146af122c
    ;
    local_188 = fStack_e4 * fVar41 + local_e8 * fVar17 + fStack_e0 * fVar51 +
                fRam0000000146af122c * fVar44;
    fStack_184 = fStack_e4 * fVar21 + local_e8 * fVar49 + fStack_e0 * fVar45 +
                 fRam0000000146af122c * fVar23;
    fStack_180 = fStack_e4 * fVar50 + local_e8 * fVar47 + fStack_e0 * fVar24 +
                 fRam0000000146af122c * fVar43;
    fStack_17c = fStack_e4 * fVar35 + local_e8 * fVar35 + fStack_e0 * fVar35 +
                 fRam0000000146af122c * fRam0000000146af122c;
    FMatrix::RemoveScaling(&local_1b8);
    fVar43 = (float)(-(uint)(local_168 <= fVar36 * fVar30) & (_DAT_146af1290 ^ (uint)fVar34) ^
                    _DAT_146af1290);
    fVar17 = (float)(-(uint)(fStack_164 <= fVar31 * fVar27) & (uRam0000000146af1294 ^ (uint)fVar38)
                    ^ uRam0000000146af1294);
    fVar55 = (float)(-(uint)(fStack_160 <= fVar37 * fVar33) & (uRam0000000146af1298 ^ (uint)fVar39)
                    ^ uRam0000000146af1298);
    local_1b8 = local_1b8 * fVar43;
    fStack_1b4 = fStack_1b4 * fVar43;
    fStack_1b0 = fStack_1b0 * fVar43;
    fStack_1a0 = fStack_1a0 * fVar17;
    fStack_1a4 = fStack_1a4 * fVar17;
    local_1a8 = local_1a8 * fVar17;
    fStack_190 = fStack_190 * fVar55;
    local_198 = local_198 * fVar55;
    fStack_194 = fStack_194 * fVar55;
    FQuat::FQuat(&local_158,&local_1b8);
    local_168 = 1e-08;
    auVar19._0_4_ = local_158 * local_158 + fStack_150 * fStack_150;
    auVar19._4_4_ = fStack_154 * fStack_154 + fStack_14c * fStack_14c;
    auVar19._8_4_ = fStack_150 * fStack_150 + local_158 * local_158;
    auVar19._12_4_ = fStack_14c * fStack_14c + fStack_154 * fStack_154;
    fVar22 = auVar19._4_4_ + auVar19._0_4_;
    fVar34 = auVar19._8_4_ + auVar19._4_4_;
    fVar38 = auVar19._12_4_ + auVar19._8_4_;
    fVar39 = auVar19._0_4_ + auVar19._12_4_;
    auVar7._4_4_ = fVar34;
    auVar7._0_4_ = fVar22;
    auVar7._8_4_ = fVar38;
    auVar7._12_4_ = fVar39;
    auVar13 = rsqrtps(auVar19,auVar7);
    fVar43 = auVar13._0_4_;
    fVar17 = auVar13._4_4_;
    fVar55 = auVar13._8_4_;
    fVar21 = auVar13._12_4_;
    fVar43 = (_DAT_146af1280 - fVar43 * fVar43 * fVar22 * _DAT_146af1280) * fVar43 + fVar43;
    fVar17 = (fRam0000000146af1284 - fVar17 * fVar17 * fVar34 * fRam0000000146af1284) * fVar17 +
             fVar17;
    fVar55 = (fRam0000000146af1288 - fVar55 * fVar55 * fVar38 * fRam0000000146af1288) * fVar55 +
             fVar55;
    fVar21 = (fRam0000000146af128c - fVar21 * fVar21 * fVar39 * fRam0000000146af128c) * fVar21 +
             fVar21;
    local_118._4_4_ = fStack_184;
    local_118._0_4_ = local_188;
    fStack_110 = fStack_180;
    local_128 = (float)(((uint)(((_DAT_146af1280 - fVar43 * fVar43 * fVar22 * _DAT_146af1280) *
                                 fVar43 + fVar43) * local_158) ^ _DAT_146af1270) &
                        -(uint)(1e-08 <= fVar22) ^ _DAT_146af1270);
    fStack_124 = (float)(((uint)(((fRam0000000146af1284 -
                                  fVar17 * fVar17 * fVar34 * fRam0000000146af1284) * fVar17 + fVar17
                                 ) * fStack_154) ^ uRam0000000146af1274) & -(uint)(1e-08 <= fVar34)
                        ^ uRam0000000146af1274);
    fStack_120 = (float)(((uint)(((fRam0000000146af1288 -
                                  fVar55 * fVar55 * fVar38 * fRam0000000146af1288) * fVar55 + fVar55
                                 ) * fStack_150) ^ uRam0000000146af1278) & -(uint)(1e-08 <= fVar38)
                        ^ uRam0000000146af1278);
    fStack_11c = (float)(((uint)(((fRam0000000146af128c -
                                  fVar21 * fVar21 * fVar39 * fRam0000000146af128c) * fVar21 + fVar21
                                 ) * fStack_14c) ^ uRam0000000146af127c) & -(uint)(1e-08 <= fVar39)
                        ^ uRam0000000146af127c);
    fStack_10c = 0.0;
  }
  fStack_fc = fVar20 * fVar26;
  fStack_100 = fVar37 * fVar33;
  fStack_104 = fVar31 * fVar27;
  local_108 = fVar36 * fVar30;
  local_1d8 = local_1d8 & 0xffffff00;
  FUN_142398770(param_1,&local_128,0,0);
LAB_1423dba2e:
  iVar9 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar9 < 0xf9) {
    *(undefined1 *)(param_1 + 0x719) = 3;
  }
  iVar9 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar9 < 0x139) {
    if (*(longlong *)(param_1 + 0x710) == 0) {
      *(undefined4 *)(param_1 + 0x728) = 0x41f00000;
      *(undefined4 *)(param_1 + 0x72c) = 0x3d088889;
    }
    else {
      fVar30 = (float)FUN_14244fa00();
      *(float *)(param_1 + 0x728) = fVar30;
      *(float *)(param_1 + 0x72c) = 1.0 / fVar30;
    }
  }
  FUN_1423945d0(param_1);
  FUN_1423ca740(param_1);
  return;
}



// FUNCTION 1423dbac0 FUN_1423dbac0 body=47 status=ok
// SIG undefined FUN_1423dbac0(void)

void FUN_1423dbac0(longlong *param_1)

{
  undefined8 uVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_1423ca500();
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_1428c4c40(uVar1,param_1);
  return;
}



// FUNCTION 1423dbaf0 FUN_1423dbaf0 body=45 status=ok
// SIG undefined FUN_1423dbaf0(void)

void FUN_1423dbaf0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    FUN_1428d47f0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1423dbb20 PropagateLightingScenarioChange body=76 status=ok
// SIG undefined PropagateLightingScenarioChange(void)

void FStreamingManagerCollection::PropagateLightingScenarioChange(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + *(longlong *)(param_1 + 0x10)) + 0x90))();
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1423dbb70 PurgeUnreferencedMIDs body=959 status=ok
// SIG undefined PurgeUnreferencedMIDs(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FTextRenderComponentMIDCache::PurgeUnreferencedMIDs(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  ulonglong local_120;
  undefined8 local_118;
  uint local_110;
  uint uStack_10c;
  uint *puStack_108;
  undefined4 local_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  undefined8 uStack_d0;
  int local_c8;
  int local_c4;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  longlong *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  uVar15 = 0;
  local_58 = 0xffffffff;
  plVar1 = (longlong *)(param_1 + 0x18);
  local_88 = 0;
  puVar2 = (uint *)(param_1 + 0x28);
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar5 = *(uint *)(param_1 + 0x40);
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  uStack_10c = 1;
  uStack_fc = 0;
  uStack_f8 = 0;
  if (uVar5 != 0) {
    puVar17 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar17 = puVar2;
    }
    uVar13 = *puVar17;
    uVar14 = uVar15;
    uVar16 = uVar15;
    while (uVar13 == 0) {
      iVar10 = (int)uVar14;
      uStack_f8 = (int)uVar16 + 0x20;
      uVar16 = (ulonglong)uStack_f8;
      local_110 = iVar10 + 1;
      uVar14 = (ulonglong)local_110;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_1423dbc94;
      uVar13 = puVar17[(longlong)iVar10 + 1];
    }
    uStack_10c = -uVar13 & uVar13;
    local_c8 = 0x1f;
    if (uStack_10c != 0) {
      for (; uStack_10c >> local_c8 == 0; local_c8 = local_c8 + -1) {
      }
    }
    if (uStack_10c == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - local_c8;
    }
    uStack_fc = (uStack_f8 - iVar10) + 0x1f;
    if ((int)uVar5 < (int)uStack_fc) {
LAB_1423dbc94:
      uStack_fc = uVar5;
    }
  }
  local_100 = 0xffffffff;
  uStack_dc = *(uint *)(param_1 + 0x40);
  uStack_e8 = CONCAT44(uStack_10c,local_110);
  uStack_a0 = 0xffffffff;
  uStack_9c = uStack_fc;
  uStack_d0 = CONCAT44(uStack_f4,uStack_f8);
  local_f0 = (int)uStack_dc >> 5;
  uStack_ec = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_e0 = -1 << ((byte)uStack_dc & 0x1f);
  uStack_d8 = uStack_dc & 0xffffffe0;
  uStack_d4 = uStack_fc;
  uStack_b0 = local_110;
  uStack_ac = uStack_10c;
  puStack_108 = puVar2;
  local_a8 = puVar2;
  local_98 = uStack_d0;
  local_b8 = plVar1;
  uVar13 = uStack_dc;
  if (uStack_dc != uVar5) {
    puVar17 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar17 = puVar2;
    }
    uVar13 = puVar17[local_f0] & uStack_e0;
    while (uVar13 == 0) {
      lVar12 = (longlong)local_f0;
      uStack_d8 = uStack_d8 + 0x20;
      iVar10 = local_f0 + 1;
      bVar6 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_f0;
      local_f0 = iVar10;
      if (bVar6) goto LAB_1423dbd81;
      uVar13 = puVar17[lVar12 + 1];
      uStack_e0 = 0xffffffff;
    }
    uVar13 = -uVar13 & uVar13;
    local_c4 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> local_c4 == 0; local_c4 = local_c4 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - local_c4;
    }
    uStack_dc = (uStack_d8 - iVar10) + 0x1f;
    uVar13 = uStack_dc;
    if ((int)uVar5 < (int)uStack_dc) {
LAB_1423dbd81:
      uStack_dc = uVar5;
      uVar13 = uVar5;
    }
  }
  while (((uStack_9c != uVar13 || (local_a8 != puVar2)) || (local_b8 != plVar1))) {
    puVar3 = (undefined4 *)(*local_b8 + (longlong)(int)uStack_9c * 0x28);
    lVar12 = *(longlong *)(*local_b8 + 0x18 + (longlong)(int)uStack_9c * 0x28);
    if (lVar12 != 0) {
      piVar11 = (int *)(lVar12 + 8);
      LOCK();
      iVar10 = *piVar11;
      if (iVar10 == 0) {
        *piVar11 = 0;
        iVar10 = 0;
      }
      UNLOCK();
      uVar15 = local_120;
      if (iVar10 == 1) {
        piVar11 = (int *)TSet<FTextRenderComponentMIDCache::FKey,DefaultKeyFuncs<FTextRenderComponentMIDCache::FKey,0>,FDefaultSetAllocator>
                         ::FindId(param_1 + 0x78,local_c0,puVar3);
        uVar15 = local_118;
        if (*piVar11 == -1) {
          FUN_1423c2450(&local_88,local_bc,puVar3,0);
          uVar15 = local_120;
        }
        else {
          lVar12 = (longlong)(int)local_118;
          iVar10 = (int)local_118 + 1;
          local_118 = CONCAT44(local_118._4_4_,iVar10);
          if (local_118._4_4_ < iVar10) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_120,uVar15 & 0xffffffff);
          }
          uVar7 = puVar3[1];
          uVar8 = puVar3[2];
          uVar9 = puVar3[3];
          puVar4 = (undefined4 *)(local_120 + lVar12 * 0x10);
          *puVar4 = *puVar3;
          puVar4[1] = uVar7;
          puVar4[2] = uVar8;
          puVar4[3] = uVar9;
          uVar15 = local_120;
        }
      }
    }
    uStack_a0 = uStack_a0 & ~uStack_ac;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
  }
  lVar12 = (longlong)(int)local_118;
  for (uVar14 = uVar15; uVar14 != lVar12 * 0x10 + uVar15; uVar14 = uVar14 + 0x10) {
    TSet<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>,FDefaultSetAllocator>
    ::Remove(plVar1,uVar14);
  }
  TArray<TWeakPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,FDefaultAllocator>::
  RemoveAll<<lambda_333ff22782d4b683517e9d097bcba44b>_>(param_1 + 0x68,local_128);
  if ((undefined8 *)(param_1 + 0x78) != &local_88) {
    TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=((undefined8 *)(param_1 + 0x78),&local_88);
    lVar12 = local_48;
    if (local_48 == 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0xb0),local_50,4);
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      FMemory::Free();
      lVar12 = local_48;
    }
    *(longlong *)(param_1 + 0xb8) = lVar12;
    local_48 = 0;
    *(undefined4 *)(param_1 + 0xc0) = local_40;
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  if (uVar15 != 0) {
    FMemory::Free(uVar15);
  }
  return;
}



// FUNCTION 1423dbf30 PurgeUnreferencedMIDsTicker body=16 status=ok
// SIG undefined PurgeUnreferencedMIDsTicker(void)

undefined1 FTextRenderComponentMIDCache::PurgeUnreferencedMIDsTicker(void)

{
  PurgeUnreferencedMIDs();
  return 1;
}



// FUNCTION 1423dbf40 FUN_1423dbf40 body=177 status=ok
// SIG undefined FUN_1423dbf40(void)

void FUN_1423dbf40(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x728);
  if ((lVar2 != 0) && (iVar5 = 0, 0 < *(int *)(lVar2 + 0xf0))) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + *(longlong *)(lVar2 + 0xe8));
      if (lVar2 != 0) {
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
        }
        puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = *(undefined8 *)(lVar2 + 0x28);
          *(undefined1 *)(puVar3 + 1) = 2;
        }
      }
      lVar2 = *(longlong *)(param_1 + 0x728);
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar5 < *(int *)(lVar2 + 0xf0));
  }
  return;
}



// FUNCTION 1423dc000 FUN_1423dc000 body=6666 status=ok
// SIG undefined FUN_1423dc000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423dc000(longlong *param_1)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  int iVar11;
  undefined4 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  char *pcVar15;
  float *pfVar16;
  float *pfVar17;
  undefined8 *puVar18;
  float *pfVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar28;
  uint uVar31;
  float fVar35;
  undefined1 auVar24 [16];
  float fVar32;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  float fVar33;
  float fVar34;
  float fVar36;
  float fVar37;
  undefined1 auVar27 [16];
  float fVar38;
  float fVar42;
  float fVar45;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar43;
  float fVar44;
  float fVar46;
  float fVar47;
  undefined1 auVar41 [16];
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
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined8 local_res8;
  longlong local_res10;
  float local_218 [4];
  float local_208;
  float fStack_204;
  float local_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined1 local_178 [8];
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
  
  if ((param_1[0xe5] != 0) && (iVar11 = (**(code **)(*param_1 + 0x4e8))(), iVar11 != 0)) {
    plVar13 = (longlong *)param_1[0x105];
    if (plVar13 == (longlong *)0x0) {
      local_res8 = 0;
      lVar20 = *(longlong *)(param_1[0xe5] + 0xa0);
      puVar14 = (undefined8 *)0x0;
      if (lVar20 != 0) {
        plVar13 = param_1;
        if (param_1 == (longlong *)&DAT_ffffffffffffffff) {
          plVar13 = (longlong *)GetTransientPackage(0,0xffffffffffffffff);
        }
        puVar14 = (undefined8 *)FUN_1417987a0(lVar20,plVar13,local_res8,0xefffffff,0,0,0xff800000);
      }
      param_1[0x105] = (longlong)puVar14;
      *(uint *)(puVar14 + 1) = *(uint *)(puVar14 + 1) | 8;
      (**(code **)(*(longlong *)param_1[0x105] + 0x290))();
    }
    else {
      (**(code **)(*plVar13 + 0x70))(plVar13,1);
      (**(code **)(*(longlong *)param_1[0x105] + 0x290))();
      FUN_1426bc760(param_1[0x105],*(undefined8 *)(param_1[0xe5] + 0xa0));
      *(undefined1 *)(param_1[0x105] + 0x9c) =
           *(undefined1 *)(*(longlong *)(param_1[0xe5] + 0xa0) + 0x9c);
    }
    lVar20 = param_1[0x105];
    uVar7 = *(undefined8 *)(*(longlong *)(param_1[0xe5] + 0xa0) + 0xf8);
    *(undefined8 *)(lVar20 + 0xf0) = *(undefined8 *)(*(longlong *)(param_1[0xe5] + 0xa0) + 0xf0);
    *(undefined8 *)(lVar20 + 0xf8) = uVar7;
    lVar20 = *(longlong *)(param_1[0xe5] + 0xa0);
    uVar12 = *(undefined4 *)(lVar20 + 0xf4);
    uVar8 = *(undefined4 *)(lVar20 + 0xf8);
    uVar9 = *(undefined4 *)(lVar20 + 0xfc);
    *(undefined4 *)(param_1 + 0x106) = *(undefined4 *)(lVar20 + 0xf0);
    *(undefined4 *)((longlong)param_1 + 0x834) = uVar12;
    *(undefined4 *)(param_1 + 0x107) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x83c) = uVar9;
    pcVar15 = (char *)FUN_1426c5d50(param_1[0x105],&local_res8);
    if (*pcVar15 == '\x03') {
      FUN_1423cecc0(param_1[0x105] + 0x28);
    }
    else {
      local_218[0] = 1.0;
      local_218[1] = 1.0;
      local_218[2] = 1.0;
      if ((char)param_1[0x103] == '\0') {
        pfVar16 = local_218;
      }
      else if ((char)param_1[0x103] == '\x01') {
        pfVar16 = local_218 + 1;
      }
      else {
        pfVar16 = local_218 + 2;
      }
      lVar21 = param_1[0x105];
      *pfVar16 = 0.0;
      fVar43 = local_218[1];
      fVar53 = local_218[0];
      lVar20 = *(longlong *)(lVar21 + 0x28);
      lVar22 = (longlong)*(int *)(lVar21 + 0x30) * 0xb0 + lVar20;
      if (lVar20 != lVar22) {
        pfVar16 = (float *)(lVar20 + 0xa8);
        do {
          fVar38 = local_218[2];
          FUN_1423cba80(param_1,&local_138);
          lVar20 = lVar20 + 0xb0;
          pfVar16[-2] = fVar53 * pfVar16[-2];
          pfVar16[-1] = fVar43 * pfVar16[-1];
          uVar23 = (uint)local_118 & _DAT_146af12d0;
          uVar28 = (uint)fStack_114 & uRam0000000146af12d4;
          auVar39._4_4_ = uVar28;
          auVar39._0_4_ = uVar23;
          uVar31 = (uint)fStack_110 & uRam0000000146af12d8;
          auVar24._12_4_ = (uint)fStack_10c & uRam0000000146af12dc;
          *pfVar16 = fVar38 * *pfVar16;
          auVar39._8_4_ = uVar31;
          auVar39._12_4_ = auVar24._12_4_;
          auVar40._4_4_ = uVar31;
          auVar40._0_4_ = uVar28;
          auVar40._8_4_ = uVar23;
          auVar40._12_4_ = auVar24._12_4_;
          auVar40 = maxps(auVar39,auVar40);
          auVar24._4_4_ = uVar23;
          auVar24._0_4_ = uVar31;
          auVar24._8_4_ = uVar28;
          auVar40 = maxps(auVar40,auVar24);
          local_res8 = CONCAT44(local_res8._4_4_,auVar40._0_4_);
          pfVar16[1] = auVar40._0_4_ * pfVar16[1];
          fVar62 = pfVar16[-2] * local_118;
          fVar65 = pfVar16[-1] * fStack_114;
          fVar68 = *pfVar16 * fStack_110;
          fVar38 = fVar68 * fStack_134 - fVar65 * fStack_130;
          fVar42 = fVar62 * fStack_130 - fVar68 * local_138;
          fVar45 = fVar65 * local_138 - fVar62 * fStack_134;
          fVar38 = fVar38 + fVar38;
          fVar42 = fVar42 + fVar42;
          fVar45 = fVar45 + fVar45;
          local_200 = (fVar42 * local_138 - fVar38 * fStack_134) + fStack_12c * fVar45 + fVar68 +
                      fStack_120;
          *(ulonglong *)(pfVar16 + -2) =
               CONCAT44((fVar38 * fStack_130 - fVar45 * local_138) + fStack_12c * fVar42 + fVar65 +
                        fStack_124,
                        (fVar45 * fStack_134 - fVar42 * fStack_130) + fStack_12c * fVar38 + fVar62 +
                        local_128);
          *pfVar16 = local_200;
          pfVar16 = pfVar16 + 0x2c;
        } while (lVar20 != lVar22);
        lVar21 = param_1[0x105];
      }
      lVar20 = *(longlong *)(lVar21 + 0x48);
      lVar22 = (longlong)*(int *)(lVar21 + 0x50) * 0xd0 + lVar20;
      if (lVar20 != lVar22) {
        pfVar16 = (float *)(lVar20 + 0xb8);
        do {
          fVar38 = local_218[2];
          FUN_1423cba80(param_1,&local_138);
          pfVar16[-2] = fVar53 * pfVar16[-2];
          pfVar16[-1] = fVar43 * pfVar16[-1];
          *pfVar16 = fVar38 * *pfVar16;
          uVar12 = FRotator::Quaternion(pfVar16 + 1,&local_158);
          fVar70 = fStack_10c;
          fVar67 = fStack_110;
          fVar64 = fStack_114;
          fVar56 = local_118;
          fVar29 = fStack_12c;
          fVar50 = fStack_130;
          fVar36 = fStack_134;
          fVar33 = local_138;
          fVar59 = fStack_14c;
          fVar37 = fStack_150;
          fVar34 = fStack_154;
          fVar30 = local_158;
          fVar76 = fRam0000000146af128c;
          fVar35 = fRam0000000146af1288;
          fVar68 = fRam0000000146af1284;
          fVar65 = _DAT_146af1280;
          fVar62 = fRam0000000146af1228;
          fVar45 = fRam0000000146af1224;
          fVar42 = _DAT_146af1220;
          fVar53 = *pfVar16;
          fVar43 = pfVar16[-1];
          fVar38 = pfVar16[-2];
          uVar7 = *(undefined8 *)(pfVar16 + -2);
          auVar10._4_4_ = fStack_114;
          auVar10._0_4_ = local_118;
          auVar10._8_4_ = fStack_110;
          auVar10._12_4_ = fStack_10c;
          fVar46 = 0.0;
          local_res10 = CONCAT44(local_res10._4_4_,pfVar16[5]);
          auVar71._4_4_ = DAT_1464aa788._4_4_;
          auVar71._0_4_ = (float)DAT_1464aa788;
          auVar71._8_4_ = DAT_1464aa790;
          auVar71._12_4_ = 0;
          local_e8 = minps(auVar71,auVar10);
          auVar6._8_4_ = fVar53;
          auVar6._0_8_ = uVar7;
          auVar6._12_4_ = 0;
          local_148._4_4_ = DAT_1464aa788._4_4_;
          local_148._0_4_ = (float)DAT_1464aa788;
          fStack_140 = DAT_1464aa790;
          fStack_13c = 0.0;
          auVar2._4_4_ = -(uint)(local_e8._4_4_ < fRam0000000146af12a4);
          auVar2._0_4_ = -(uint)(local_e8._0_4_ < _DAT_146af12a0);
          auVar2._8_4_ = -(uint)(local_e8._8_4_ < fRam0000000146af12a8);
          auVar2._12_4_ = -(uint)(local_e8._12_4_ < fRam0000000146af12ac);
          iVar11 = movmskps(uVar12,auVar2);
          local_f8 = _DAT_146af12a0;
          fStack_f4 = fRam0000000146af12a4;
          fStack_f0 = fRam0000000146af12a8;
          fStack_ec = fRam0000000146af12ac;
          local_198 = local_128;
          fStack_194 = fStack_124;
          fStack_190 = fStack_120;
          fStack_18c = fStack_11c;
          _local_178 = auVar6;
          if (iVar11 == 0) {
            fVar47 = local_118 * (float)DAT_1464aa788;
            fVar32 = fStack_114 * DAT_1464aa788._4_4_;
            fVar44 = fStack_110 * DAT_1464aa790;
            fVar48 = fStack_10c * 0.0;
            fVar51 = local_138 * fStack_14c * _DAT_146af1260 + fStack_12c * local_158 +
                     fStack_134 * fStack_150 * _DAT_146af1250 +
                     fStack_130 * fStack_154 * _DAT_146af1240;
            fVar52 = local_138 * fStack_150 * fRam0000000146af1264 + fStack_12c * fStack_154 +
                     fStack_134 * fStack_14c * fRam0000000146af1254 +
                     fStack_130 * local_158 * fRam0000000146af1244;
            fVar54 = local_138 * fStack_154 * fRam0000000146af1268 + fStack_12c * fStack_150 +
                     fStack_134 * local_158 * fRam0000000146af1258 +
                     fStack_130 * fStack_14c * fRam0000000146af1248;
            fVar55 = local_138 * local_158 * fRam0000000146af126c + fStack_12c * fStack_14c +
                     fStack_134 * fStack_154 * fRam0000000146af125c +
                     fStack_130 * fStack_150 * fRam0000000146af124c;
            uVar12 = 0;
            fVar42 = fStack_12c;
            fVar45 = fStack_12c;
            fVar62 = fStack_12c;
            fVar49 = fStack_12c;
            local_1a8 = fVar47;
            fStack_1a4 = fVar32;
            fStack_1a0 = fVar44;
            fStack_19c = fVar48;
          }
          else {
            fVar38 = fStack_134 + fStack_134;
            fVar46 = fStack_130 + fStack_130;
            local_1a8 = local_118 * (float)DAT_1464aa788;
            fStack_1a4 = fStack_114 * DAT_1464aa788._4_4_;
            fStack_1a0 = fStack_110 * DAT_1464aa790;
            fStack_19c = fStack_10c * 0.0;
            local_108 = fStack_12c;
            fStack_104 = fStack_12c;
            fStack_100 = fStack_12c;
            fStack_fc = fStack_12c;
            fVar48 = (local_138 + local_138) * local_138;
            fVar43 = (local_138 + local_138) * fStack_12c;
            fVar44 = fStack_154 + fStack_154;
            fVar47 = fStack_150 + fStack_150;
            fVar73 = (fVar46 * fStack_12c + fVar38 * local_138) * local_118;
            fVar74 = (fVar43 + fVar46 * fStack_134) * fStack_114;
            fVar75 = (fVar38 * fStack_12c + fVar46 * local_138) * fStack_110;
            fVar51 = fStack_114 * (fVar38 * local_138 - fVar46 * fStack_12c);
            fVar54 = fStack_110 * (fVar46 * fStack_134 - fVar43);
            fVar57 = local_118 * (fVar46 * local_138 - fVar38 * fStack_12c);
            fVar49 = (local_158 + local_158) * local_158;
            fVar43 = (float)((uint)((_DAT_146af1220 - (fVar46 * fStack_130 + fVar38 * fStack_134)) *
                                   local_118) & _DAT_146af1230);
            fVar46 = (float)((uint)((fRam0000000146af1224 - (fVar46 * fStack_130 + fVar48)) *
                                   fStack_114) & uRam0000000146af1234);
            fVar32 = (float)((uint)((fRam0000000146af1228 - (fVar38 * fStack_134 + fVar48)) *
                                   fStack_110) & uRam0000000146af1238);
            fVar48 = (float)((uint)((fRam0000000146af122c - (fVar48 + fVar48)) * fStack_10c) &
                            uRam0000000146af123c);
            fVar38 = (local_158 + local_158) * fStack_14c;
            fVar63 = (fVar47 * fStack_14c + fVar44 * local_158) * (float)DAT_1464aa788;
            fVar66 = (fVar38 + fVar47 * fStack_154) * DAT_1464aa788._4_4_;
            fVar69 = (fVar44 * fStack_14c + fVar47 * local_158) * DAT_1464aa790;
            fVar52 = DAT_1464aa788._4_4_ * (fVar44 * local_158 - fVar47 * fStack_14c);
            fVar55 = DAT_1464aa790 * (fVar47 * fStack_154 - fVar38);
            fVar58 = (float)DAT_1464aa788 * (fVar47 * local_158 - fVar44 * fStack_14c);
            fVar38 = (float)((uint)((_DAT_146af1220 - (fVar47 * fStack_150 + fVar44 * fStack_154)) *
                                   (float)DAT_1464aa788) & _DAT_146af1230);
            fVar47 = (float)((uint)((fRam0000000146af1224 - (fVar47 * fStack_150 + fVar49)) *
                                   DAT_1464aa788._4_4_) & uRam0000000146af1234);
            fVar44 = (float)((uint)((fRam0000000146af1228 - (fVar44 * fStack_154 + fVar49)) *
                                   DAT_1464aa790) & uRam0000000146af1238);
            fVar49 = (float)((uint)((fRam0000000146af122c - (fVar49 + fVar49)) * 0.0) &
                            uRam0000000146af123c);
            local_178._0_4_ = (undefined4)uVar7;
            local_178._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
            local_1f8 = fVar63 * fVar51 + fVar38 * fVar43 + fVar58 * fVar75 + fVar49 * local_128;
            fStack_1f4 = fVar63 * fVar46 + fVar38 * fVar73 + fVar58 * fVar54 + fVar49 * fStack_124;
            fStack_1f0 = fVar63 * fVar74 + fVar38 * fVar57 + fVar58 * fVar32 + fVar49 * fStack_120;
            fStack_1ec = fVar63 * fVar48 + fVar38 * fVar48 + fVar58 * fVar48 +
                         fVar49 * fRam0000000146af122c;
            local_1e8 = fVar47 * fVar51 + fVar52 * fVar43 + fVar66 * fVar75 + fVar49 * local_128;
            fStack_1e4 = fVar47 * fVar46 + fVar52 * fVar73 + fVar66 * fVar54 + fVar49 * fStack_124;
            fStack_1e0 = fVar47 * fVar74 + fVar52 * fVar57 + fVar66 * fVar32 + fVar49 * fStack_120;
            fStack_1dc = fVar47 * fVar48 + fVar52 * fVar48 + fVar66 * fVar48 +
                         fVar49 * fRam0000000146af122c;
            local_1d8 = fVar55 * fVar51 + fVar69 * fVar43 + fVar44 * fVar75 + fVar49 * local_128;
            fStack_1d4 = fVar55 * fVar46 + fVar69 * fVar73 + fVar44 * fVar54 + fVar49 * fStack_124;
            fStack_1d0 = fVar55 * fVar74 + fVar69 * fVar57 + fVar44 * fVar32 + fVar49 * fStack_120;
            fStack_1cc = fVar55 * fVar48 + fVar69 * fVar48 + fVar44 * fVar48 +
                         fVar49 * fRam0000000146af122c;
            local_1c8 = (float)local_178._4_4_ * fVar51 + (float)local_178._0_4_ * fVar43 +
                        fVar53 * fVar75 + fRam0000000146af122c * local_128;
            fStack_1c4 = (float)local_178._4_4_ * fVar46 + (float)local_178._0_4_ * fVar73 +
                         fVar53 * fVar54 + fRam0000000146af122c * fStack_124;
            fStack_1c0 = (float)local_178._4_4_ * fVar74 + (float)local_178._0_4_ * fVar57 +
                         fVar53 * fVar32 + fRam0000000146af122c * fStack_120;
            fStack_1bc = (float)local_178._4_4_ * fVar48 + (float)local_178._0_4_ * fVar48 +
                         fVar53 * fVar48 + fRam0000000146af122c * fRam0000000146af122c;
            FMatrix::RemoveScaling(&local_1f8);
            fVar48 = fStack_19c;
            fVar44 = fStack_1a0;
            fVar32 = fStack_1a4;
            fVar47 = local_1a8;
            fVar53 = (float)(-(uint)(local_f8 <= local_1a8) & (_DAT_146af1290 ^ (uint)fVar42) ^
                            _DAT_146af1290);
            fVar43 = (float)(-(uint)(fStack_f4 <= fStack_1a4) &
                             (uRam0000000146af1294 ^ (uint)fVar45) ^ uRam0000000146af1294);
            fVar38 = (float)(-(uint)(fStack_f0 <= fStack_1a0) &
                             (uRam0000000146af1298 ^ (uint)fVar62) ^ uRam0000000146af1298);
            local_1f8 = local_1f8 * fVar53;
            fStack_1f4 = fStack_1f4 * fVar53;
            fStack_1f0 = fStack_1f0 * fVar53;
            fStack_1e4 = fStack_1e4 * fVar43;
            fStack_1e0 = fStack_1e0 * fVar43;
            local_1e8 = local_1e8 * fVar43;
            fStack_1d4 = fStack_1d4 * fVar38;
            fStack_1d0 = fStack_1d0 * fVar38;
            local_1d8 = local_1d8 * fVar38;
            uVar12 = FQuat::FQuat(&local_168,&local_1f8);
            local_res8 = CONCAT44(local_res8._4_4_,0x322bcc77);
            auVar25._0_4_ = local_168 * local_168 + fStack_160 * fStack_160;
            auVar25._4_4_ = fStack_164 * fStack_164 + fStack_15c * fStack_15c;
            auVar25._8_4_ = fStack_160 * fStack_160 + local_168 * local_168;
            auVar25._12_4_ = fStack_15c * fStack_15c + fStack_164 * fStack_164;
            fVar45 = auVar25._4_4_ + auVar25._0_4_;
            fVar62 = auVar25._8_4_ + auVar25._4_4_;
            fVar46 = auVar25._12_4_ + auVar25._8_4_;
            fVar49 = auVar25._0_4_ + auVar25._12_4_;
            auVar4._4_4_ = fVar62;
            auVar4._0_4_ = fVar45;
            auVar4._8_4_ = fVar46;
            auVar4._12_4_ = fVar49;
            auVar40 = rsqrtps(auVar25,auVar4);
            fVar53 = auVar40._0_4_;
            fVar43 = auVar40._4_4_;
            fVar38 = auVar40._8_4_;
            fVar42 = auVar40._12_4_;
            fVar53 = (fVar65 - fVar53 * fVar53 * fVar65 * fVar45) * fVar53 + fVar53;
            fVar43 = (fVar68 - fVar43 * fVar43 * fVar68 * fVar62) * fVar43 + fVar43;
            fVar38 = (fVar35 - fVar38 * fVar38 * fVar35 * fVar46) * fVar38 + fVar38;
            fVar42 = (fVar76 - fVar42 * fVar42 * fVar76 * fVar49) * fVar42 + fVar42;
            fVar51 = (float)(((uint)(((fVar65 - fVar53 * fVar53 * fVar65 * fVar45) * fVar53 + fVar53
                                     ) * local_168) ^ _DAT_146af1270) & -(uint)(1e-08 <= fVar45) ^
                            _DAT_146af1270);
            fVar52 = (float)(((uint)(((fVar68 - fVar43 * fVar43 * fVar68 * fVar62) * fVar43 + fVar43
                                     ) * fStack_164) ^ uRam0000000146af1274) &
                             -(uint)(1e-08 <= fVar62) ^ uRam0000000146af1274);
            fVar54 = (float)(((uint)(((fVar35 - fVar38 * fVar38 * fVar35 * fVar46) * fVar38 + fVar38
                                     ) * fStack_160) ^ uRam0000000146af1278) &
                             -(uint)(1e-08 <= fVar46) ^ uRam0000000146af1278);
            fVar55 = (float)(((uint)(((fVar76 - fVar42 * fVar42 * fVar76 * fVar49) * fVar42 + fVar42
                                     ) * fStack_15c) ^ uRam0000000146af127c) &
                             -(uint)(1e-08 <= fVar49) ^ uRam0000000146af127c);
            fVar42 = local_108;
            fVar45 = fStack_104;
            fVar62 = fStack_100;
            fVar49 = fStack_fc;
            fVar38 = (float)local_178._0_4_;
            fVar43 = (float)local_178._4_4_;
            fVar53 = fStack_170;
            fVar46 = fStack_16c;
            local_168 = fVar51;
            fStack_164 = fVar52;
            fStack_160 = fVar54;
            fStack_15c = fVar55;
          }
          fVar66 = fRam0000000146af126c;
          fVar63 = fRam0000000146af1268;
          fVar58 = fRam0000000146af1264;
          fVar57 = _DAT_146af1260;
          fVar75 = fVar47 * 0.0;
          fVar60 = fVar32 * 0.0;
          fVar61 = (float)local_res10 * fVar44;
          fVar69 = fVar61 * fVar52 - fVar60 * fVar54;
          fVar73 = fVar75 * fVar54 - fVar61 * fVar51;
          fVar74 = fVar60 * fVar51 - fVar75 * fVar52;
          fVar69 = fVar69 + fVar69;
          fVar73 = fVar73 + fVar73;
          fVar74 = fVar74 + fVar74;
          fVar75 = (fVar74 * fVar52 - fVar73 * fVar54) + fVar55 * fVar69 + fVar75;
          fVar54 = (fVar69 * fVar54 - fVar74 * fVar51) + fVar55 * fVar73 + fVar60;
          fVar51 = (fVar73 * fVar51 - fVar69 * fVar52) + fVar55 * fVar74 + fVar61;
          uVar23 = (uint)fVar56 & _DAT_146af12d0;
          uVar28 = (uint)fVar64 & uRam0000000146af12d4;
          auVar41._4_4_ = uVar28;
          auVar41._0_4_ = uVar23;
          uVar31 = (uint)fVar67 & uRam0000000146af12d8;
          auVar26._12_4_ = (uint)fVar70 & uRam0000000146af12dc;
          pfVar16[5] = SQRT(fVar54 * fVar54 + fVar75 * fVar75 + fVar51 * fVar51);
          auVar41._8_4_ = uVar31;
          auVar41._12_4_ = auVar26._12_4_;
          auVar3._4_4_ = uVar31;
          auVar3._0_4_ = uVar28;
          auVar3._8_4_ = uVar23;
          auVar3._12_4_ = auVar26._12_4_;
          auVar40 = maxps(auVar41,auVar3);
          auVar26._4_4_ = uVar23;
          auVar26._0_4_ = uVar31;
          auVar26._8_4_ = uVar28;
          auVar40 = maxps(auVar40,auVar26);
          local_res8 = CONCAT44(local_res8._4_4_,auVar40._0_4_);
          pfVar16[4] = auVar40._0_4_ * pfVar16[4];
          fVar54 = fRam0000000146af1228;
          fVar52 = fRam0000000146af1224;
          fVar51 = _DAT_146af1220;
          auVar72._4_4_ = -(uint)(local_e8._4_4_ < fRam0000000146af12a4);
          auVar72._0_4_ = -(uint)(local_e8._0_4_ < _DAT_146af12a0);
          auVar72._8_4_ = -(uint)(local_e8._8_4_ < fRam0000000146af12a8);
          auVar72._12_4_ = -(uint)(local_e8._12_4_ < fRam0000000146af12ac);
          iVar11 = movmskps(uVar12,auVar72);
          local_108 = _DAT_146af12a0;
          fStack_104 = fRam0000000146af12a4;
          fStack_100 = fRam0000000146af12a8;
          fStack_fc = fRam0000000146af12ac;
          if (iVar11 == 0) {
            fVar56 = fVar56 * fVar38;
            fVar64 = fVar64 * fVar43;
            fVar67 = fVar67 * fVar53;
            fVar70 = fVar70 * fVar46;
            fVar46 = fVar33 * fVar59 * fVar57 + fVar42 * fVar30 + fVar36 * fVar37 * _DAT_146af1250 +
                     fVar50 * fVar34 * _DAT_146af1240;
            fVar51 = fVar33 * fVar37 * fVar58 + fVar45 * fVar34 +
                     fVar36 * fVar59 * fRam0000000146af1254 + fVar50 * fVar30 * fRam0000000146af1244
            ;
            fVar52 = fVar33 * fVar34 * fVar63 + fVar62 * fVar37 +
                     fVar36 * fVar30 * fRam0000000146af1258 + fVar50 * fVar59 * fRam0000000146af1248
            ;
            fVar76 = fVar33 * fVar30 * fVar66 + fVar49 * fVar59 +
                     fVar36 * fVar34 * fRam0000000146af125c + fVar50 * fVar37 * fRam0000000146af124c
            ;
            fVar38 = fVar67 * fVar36 - fVar64 * fVar50;
            fVar65 = fVar56 * fVar50 - fVar67 * fVar33;
            fVar68 = fVar64 * fVar33 - fVar56 * fVar36;
            fVar35 = fVar70 * fVar29 - fVar70 * fVar29;
            fVar38 = fVar38 + fVar38;
            fVar65 = fVar65 + fVar65;
            fVar68 = fVar68 + fVar68;
            fVar35 = fVar35 + fVar35;
            fVar53 = (fVar68 * fVar36 - fVar65 * fVar50) + fVar38 * fVar42 + fVar56 + local_198;
            fVar43 = (fVar38 * fVar50 - fVar68 * fVar33) + fVar65 * fVar45 + fVar64 + fStack_194;
            fVar38 = (fVar65 * fVar33 - fVar38 * fVar36) + fVar68 * fVar62 + fVar67 + fStack_190;
            fStack_11c = (fVar35 * fVar29 - fVar35 * fVar29) + fVar35 * fVar49 + fVar70 + fStack_18c
            ;
            local_118 = fVar47;
            fStack_114 = fVar32;
            fStack_110 = fVar44;
            fStack_10c = fVar48;
          }
          else {
            fVar29 = fVar36 + fVar36;
            fVar46 = fVar50 + fVar50;
            fVar45 = (fVar33 + fVar33) * fVar45;
            fVar47 = (fVar33 + fVar33) * fVar33;
            fVar32 = fVar34 + fVar34;
            fVar44 = fVar37 + fVar37;
            fVar57 = (fVar46 * fVar42 + fVar33 * fVar29) * fVar56;
            fVar58 = (fVar45 + fVar36 * fVar46) * fVar64;
            fVar63 = (fVar29 * fVar62 + fVar33 * fVar46) * fVar67;
            fVar48 = fVar64 * (fVar33 * fVar29 - fVar46 * fVar42);
            fVar49 = fVar67 * (fVar36 * fVar46 - fVar45);
            fVar55 = fVar56 * (fVar33 * fVar46 - fVar29 * fVar62);
            fVar42 = (float)((uint)((_DAT_146af1220 - (fVar46 * fVar50 + fVar29 * fVar36)) * fVar56)
                            & _DAT_146af1230);
            fVar62 = (float)((uint)((fRam0000000146af1224 - (fVar46 * fVar50 + fVar47)) * fVar64) &
                            uRam0000000146af1234);
            fVar33 = (float)((uint)((fRam0000000146af1228 - (fVar29 * fVar36 + fVar47)) * fVar67) &
                            uRam0000000146af1238);
            fVar36 = (float)((uint)((fRam0000000146af122c - (fVar47 + fVar47)) * fVar70) &
                            uRam0000000146af123c);
            fVar50 = (fVar30 + fVar30) * fVar30;
            fVar45 = (fVar30 + fVar30) * fVar59;
            fVar64 = (fVar44 * fVar59 + fVar32 * fVar30) * (float)local_148._0_4_;
            fVar67 = (fVar45 + fVar44 * fVar34) * (float)local_148._4_4_;
            fVar70 = (fVar32 * fVar59 + fVar44 * fVar30) * fStack_140;
            fVar29 = (float)local_148._4_4_ * (fVar32 * fVar30 - fVar44 * fVar59);
            fVar56 = fStack_140 * (fVar44 * fVar34 - fVar45);
            fVar59 = (float)local_148._0_4_ * (fVar44 * fVar30 - fVar32 * fVar59);
            fVar45 = (float)((uint)((_DAT_146af1220 - (fVar44 * fVar37 + fVar32 * fVar34)) *
                                   (float)local_148._0_4_) & _DAT_146af1230);
            fVar30 = (float)((uint)((fRam0000000146af1224 - (fVar44 * fVar37 + fVar50)) *
                                   (float)local_148._4_4_) & uRam0000000146af1234);
            fVar34 = (float)((uint)((fRam0000000146af1228 - (fVar32 * fVar34 + fVar50)) * fStack_140
                                   ) & uRam0000000146af1238);
            fVar37 = (float)((uint)((fRam0000000146af122c - (fVar50 + fVar50)) * fStack_13c) &
                            uRam0000000146af123c);
            local_1f8 = fVar64 * fVar48 + fVar45 * fVar42 + fVar59 * fVar63 + fVar37 * local_198;
            fStack_1f4 = fVar64 * fVar62 + fVar45 * fVar57 + fVar59 * fVar49 + fVar37 * fStack_194;
            fStack_1f0 = fVar64 * fVar58 + fVar45 * fVar55 + fVar59 * fVar33 + fVar37 * fStack_190;
            fStack_1ec = fVar64 * fVar36 + fVar45 * fVar36 + fVar59 * fVar36 +
                         fVar37 * fRam0000000146af122c;
            local_1e8 = fVar30 * fVar48 + fVar29 * fVar42 + fVar67 * fVar63 + fVar37 * local_198;
            fStack_1e4 = fVar30 * fVar62 + fVar29 * fVar57 + fVar67 * fVar49 + fVar37 * fStack_194;
            fStack_1e0 = fVar30 * fVar58 + fVar29 * fVar55 + fVar67 * fVar33 + fVar37 * fStack_190;
            fStack_1dc = fVar30 * fVar36 + fVar29 * fVar36 + fVar67 * fVar36 +
                         fVar37 * fRam0000000146af122c;
            local_1d8 = fVar56 * fVar48 + fVar70 * fVar42 + fVar34 * fVar63 + fVar37 * local_198;
            fStack_1d4 = fVar56 * fVar62 + fVar70 * fVar57 + fVar34 * fVar49 + fVar37 * fStack_194;
            fStack_1d0 = fVar56 * fVar58 + fVar70 * fVar55 + fVar34 * fVar33 + fVar37 * fStack_190;
            fStack_1cc = fVar56 * fVar36 + fVar70 * fVar36 + fVar34 * fVar36 +
                         fVar37 * fRam0000000146af122c;
            local_1c8 = fVar43 * fVar48 + fVar38 * fVar42 + fVar53 * fVar63 +
                        fRam0000000146af122c * local_198;
            fStack_1c4 = fVar43 * fVar62 + fVar38 * fVar57 + fVar53 * fVar49 +
                         fRam0000000146af122c * fStack_194;
            fStack_1c0 = fVar43 * fVar58 + fVar38 * fVar55 + fVar53 * fVar33 +
                         fRam0000000146af122c * fStack_190;
            fStack_1bc = fVar43 * fVar36 + fVar38 * fVar36 + fVar53 * fVar36 +
                         fRam0000000146af122c * fRam0000000146af122c;
            FMatrix::RemoveScaling(&local_1f8);
            fVar42 = fStack_19c;
            fVar38 = fStack_1a0;
            fVar43 = fStack_1a4;
            fVar53 = local_1a8;
            fVar45 = (float)(-(uint)(local_108 <= local_1a8) & (_DAT_146af1290 ^ (uint)fVar51) ^
                            _DAT_146af1290);
            fVar62 = (float)(-(uint)(fStack_104 <= fStack_1a4) &
                             (uRam0000000146af1294 ^ (uint)fVar52) ^ uRam0000000146af1294);
            fVar30 = (float)(-(uint)(fStack_100 <= fStack_1a0) &
                             (uRam0000000146af1298 ^ (uint)fVar54) ^ uRam0000000146af1298);
            local_1f8 = local_1f8 * fVar45;
            fStack_1f4 = fStack_1f4 * fVar45;
            fStack_1f0 = fStack_1f0 * fVar45;
            fStack_1e4 = fStack_1e4 * fVar62;
            fStack_1e0 = fStack_1e0 * fVar62;
            local_1e8 = local_1e8 * fVar62;
            fStack_1d4 = fStack_1d4 * fVar30;
            fStack_1d0 = fStack_1d0 * fVar30;
            local_1d8 = local_1d8 * fVar30;
            FQuat::FQuat(&local_188,&local_1f8);
            local_118 = fVar53;
            fStack_114 = fVar43;
            fStack_110 = fVar38;
            fStack_10c = fVar42;
            local_res8 = CONCAT44(local_res8._4_4_,0x322bcc77);
            auVar27._0_4_ = local_188 * local_188 + fStack_180 * fStack_180;
            auVar27._4_4_ = fStack_184 * fStack_184 + fStack_17c * fStack_17c;
            auVar27._8_4_ = fStack_180 * fStack_180 + local_188 * local_188;
            auVar27._12_4_ = fStack_17c * fStack_17c + fStack_184 * fStack_184;
            fVar45 = auVar27._4_4_ + auVar27._0_4_;
            fVar62 = auVar27._8_4_ + auVar27._4_4_;
            fVar30 = auVar27._12_4_ + auVar27._8_4_;
            fVar34 = auVar27._0_4_ + auVar27._12_4_;
            auVar5._4_4_ = fVar62;
            auVar5._0_4_ = fVar45;
            auVar5._8_4_ = fVar30;
            auVar5._12_4_ = fVar34;
            auVar40 = rsqrtps(auVar27,auVar5);
            fVar53 = auVar40._0_4_;
            fVar43 = auVar40._4_4_;
            fVar38 = auVar40._8_4_;
            fVar42 = auVar40._12_4_;
            fVar53 = (fVar65 - fVar53 * fVar53 * fVar45 * fVar65) * fVar53 + fVar53;
            fVar43 = (fVar68 - fVar43 * fVar43 * fVar62 * fVar68) * fVar43 + fVar43;
            fVar38 = (fVar35 - fVar38 * fVar38 * fVar30 * fVar35) * fVar38 + fVar38;
            fVar42 = (fVar76 - fVar42 * fVar42 * fVar34 * fVar76) * fVar42 + fVar42;
            fStack_11c = 0.0;
            fVar46 = (float)(((uint)(((fVar65 - fVar53 * fVar53 * fVar45 * fVar65) * fVar53 + fVar53
                                     ) * local_188) ^ _DAT_146af1270) & -(uint)(1e-08 <= fVar45) ^
                            _DAT_146af1270);
            fVar51 = (float)(((uint)(((fVar68 - fVar43 * fVar43 * fVar62 * fVar68) * fVar43 + fVar43
                                     ) * fStack_184) ^ uRam0000000146af1274) &
                             -(uint)(1e-08 <= fVar62) ^ uRam0000000146af1274);
            fVar52 = (float)(((uint)(((fVar35 - fVar38 * fVar38 * fVar30 * fVar35) * fVar38 + fVar38
                                     ) * fStack_180) ^ uRam0000000146af1278) &
                             -(uint)(1e-08 <= fVar30) ^ uRam0000000146af1278);
            fVar76 = (float)(((uint)(((fVar76 - fVar42 * fVar42 * fVar34 * fVar76) * fVar42 + fVar42
                                     ) * fStack_17c) ^ uRam0000000146af127c) &
                             -(uint)(1e-08 <= fVar34) ^ uRam0000000146af127c);
            fVar53 = local_1c8;
            fVar43 = fStack_1c4;
            fVar38 = fStack_1c0;
            local_188 = fVar46;
            fStack_184 = fVar51;
            fStack_180 = fVar52;
            fStack_17c = fVar76;
          }
          local_138 = fVar46;
          fStack_134 = fVar51;
          fStack_130 = fVar52;
          fStack_12c = fVar76;
          local_128 = fVar53;
          fStack_124 = fVar43;
          fStack_120 = fVar38;
          FTransform::IsValid(&local_138);
          local_148._4_4_ = fVar51;
          local_148._0_4_ = fVar46;
          fStack_140 = fVar52;
          fStack_13c = fVar76;
          FQuat::Rotator(local_148,&local_208);
          lVar20 = lVar20 + 0xd0;
          *(ulonglong *)(pfVar16 + 1) = CONCAT44(fStack_204,local_208);
          pfVar16[3] = local_200;
          *(ulonglong *)(pfVar16 + -2) = CONCAT44(fVar43,fVar53);
          *pfVar16 = fVar38;
          pfVar16 = pfVar16 + 0x34;
          fVar53 = local_218[0];
          local_1b0 = fVar38;
          fVar43 = local_218[1];
        } while (lVar20 != lVar22);
        lVar21 = param_1[0x105];
      }
      lVar20 = *(longlong *)(lVar21 + 0x38);
      local_res10 = (longlong)*(int *)(lVar21 + 0x40) * 0xe0 + lVar20;
      if (lVar20 != local_res10) {
        pfVar16 = (float *)(lVar20 + 0xb8);
        do {
          lVar21 = param_1[0x105];
          iVar11 = *(int *)(lVar21 + 0x60);
          *(int *)(lVar21 + 0x60) = iVar11 + 1;
          if (*(int *)(lVar21 + 100) < iVar11 + 1) {
            TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(lVar21 + 0x58,iVar11);
          }
          puVar18 = (undefined8 *)((longlong)iVar11 * 0xd0 + *(longlong *)(lVar21 + 0x58));
          puVar14 = (undefined8 *)0x0;
          if (puVar18 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar18 + 1) = 0;
            puVar18[2] = 0;
            *(byte *)((longlong)puVar18 + 0x1c) = *(byte *)((longlong)puVar18 + 0x1c) | 1;
            *(undefined4 *)(puVar18 + 3) = 3;
            *(undefined4 *)(puVar18 + 4) = 6;
            puVar18[5] = puVar18;
            *(undefined1 *)(puVar18 + 6) = 3;
            puVar18[7] = 0;
            puVar18[9] = 0;
            puVar18[10] = 0;
            puVar18[0xb] = 0;
            *puVar18 = &PTR_FUN_1440fbd68;
            puVar18[0xc] = 0;
            puVar18[0xd] = 0;
            *(undefined8 *)((longlong)puVar18 + 0x7c) = _DAT_1468b5d90;
            uVar12 = DAT_1468b5d98;
            *(undefined4 *)((longlong)puVar18 + 0x84) = DAT_1468b5d98;
            puVar18[0xe] = *(undefined8 *)((longlong)puVar18 + 0x7c);
            *(undefined4 *)(puVar18 + 0xf) = uVar12;
            *(undefined1 *)(puVar18 + 0x11) = 0;
            uVar7 = uRam00000001468b5b78;
            puVar18[0x12] = _DAT_1468b5b70;
            puVar18[0x13] = uVar7;
            uVar7 = uRam00000001468b5b88;
            puVar18[0x14] = _DAT_1468b5b80;
            puVar18[0x15] = uVar7;
            fVar38 = fRam00000001468b5b9c;
            fVar43 = fRam00000001468b5b98;
            fVar53 = fRam00000001468b5b94;
            *(float *)(puVar18 + 0x16) = _DAT_1468b5b90;
            *(float *)((longlong)puVar18 + 0xb4) = fVar53;
            *(float *)(puVar18 + 0x17) = fVar43;
            *(float *)((longlong)puVar18 + 0xbc) = fVar38;
            puVar18[0x18] = 0;
            puVar18[0x19] = 0;
            puVar14 = puVar18;
          }
          fVar38 = pfVar16[6] * 0.5;
          fVar43 = pfVar16[5] * 0.5;
          fVar53 = pfVar16[4] * 0.5;
          if (fVar38 <= 1.0) {
            fVar38 = 1.0;
          }
          if (fVar43 <= 1.0) {
            fVar43 = 1.0;
          }
          if (fVar53 <= 1.0) {
            fVar53 = 1.0;
          }
          FRotator::Quaternion(pfVar16 + 1,local_148);
          fVar35 = DAT_1464aa790;
          fVar68 = DAT_1464aa788._4_4_;
          fVar65 = (float)DAT_1464aa788;
          fVar42 = *pfVar16;
          fVar45 = pfVar16[-1];
          fVar62 = pfVar16[-2];
          uVar12 = local_148._0_4_;
          uVar8 = local_148._4_4_;
          fVar76 = fStack_140;
          fVar30 = fStack_13c;
          *(undefined4 *)(puVar14 + 0xd) = 0;
          iVar11 = 0;
          if (*(int *)((longlong)puVar14 + 0x6c) != 8) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
            ResizeTo(puVar14 + 0xc,8);
            iVar11 = *(int *)(puVar14 + 0xd);
          }
          local_res8 = CONCAT44(local_res8._4_4_,fVar38) ^ 0x80000000;
          fVar33 = -fVar53;
          fVar50 = -fVar53 * fVar65;
          fVar29 = -fVar43 * fVar68;
          fVar56 = -fVar38 * fVar35;
          *(int *)(puVar14 + 0xd) = iVar11 + 1;
          fVar36 = -fVar43;
          fVar34 = fVar56 * (float)uVar8 - fVar29 * fVar76;
          fVar37 = fVar50 * fVar76 - fVar56 * (float)uVar12;
          fVar59 = fVar29 * (float)uVar12 - fVar50 * (float)uVar8;
          fVar34 = fVar34 + fVar34;
          fVar37 = fVar37 + fVar37;
          fVar59 = fVar59 + fVar59;
          local_158 = (fVar59 * (float)uVar8 - fVar37 * fVar76) + fVar30 * fVar34 + fVar50 + fVar62;
          fStack_154 = (fVar34 * fVar76 - fVar59 * (float)uVar12) + fVar30 * fVar37 + fVar29 +
                       fVar45;
          fStack_150 = (fVar37 * (float)uVar12 - fVar34 * (float)uVar8) + fVar30 * fVar59 + fVar56 +
                       fVar42;
          if (*(int *)((longlong)puVar14 + 0x6c) < iVar11 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(puVar14 + 0xc,iVar11);
          }
          lVar21 = puVar14[0xc];
          fVar50 = fVar33 * fVar65;
          fVar29 = fVar36 * fVar68;
          fVar56 = fVar38 * fVar35;
          *(ulonglong *)(lVar21 + (longlong)iVar11 * 0xc) = CONCAT44(fStack_154,local_158);
          *(float *)(lVar21 + 8 + (longlong)iVar11 * 0xc) = fStack_150;
          iVar11 = *(int *)(puVar14 + 0xd);
          *(int *)(puVar14 + 0xd) = iVar11 + 1;
          fVar34 = fVar56 * (float)uVar8 - fVar29 * fVar76;
          fVar37 = fVar50 * fVar76 - fVar56 * (float)uVar12;
          fVar59 = fVar29 * (float)uVar12 - fVar50 * (float)uVar8;
          fVar34 = fVar34 + fVar34;
          fVar37 = fVar37 + fVar37;
          fVar59 = fVar59 + fVar59;
          local_198 = (fVar59 * (float)uVar8 - fVar37 * fVar76) + fVar30 * fVar34 + fVar50 + fVar62;
          fStack_194 = (fVar34 * fVar76 - fVar59 * (float)uVar12) + fVar30 * fVar37 + fVar29 +
                       fVar45;
          fStack_190 = (fVar37 * (float)uVar12 - fVar34 * (float)uVar8) + fVar30 * fVar59 + fVar56 +
                       fVar42;
          if (*(int *)((longlong)puVar14 + 0x6c) < iVar11 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(puVar14 + 0xc,iVar11);
          }
          lVar21 = puVar14[0xc];
          *(ulonglong *)(lVar21 + (longlong)iVar11 * 0xc) = CONCAT44(fStack_194,local_198);
          fVar50 = fVar33 * fVar65;
          fVar29 = fVar43 * fVar68;
          fVar56 = (float)local_res8 * fVar35;
          *(float *)(lVar21 + 8 + (longlong)iVar11 * 0xc) = fStack_190;
          iVar11 = *(int *)(puVar14 + 0xd);
          *(int *)(puVar14 + 0xd) = iVar11 + 1;
          fVar34 = fVar56 * (float)uVar8 - fVar29 * fVar76;
          fVar37 = fVar50 * fVar76 - fVar56 * (float)uVar12;
          fVar59 = fVar29 * (float)uVar12 - fVar50 * (float)uVar8;
          fVar34 = fVar34 + fVar34;
          fVar37 = fVar37 + fVar37;
          fVar59 = fVar59 + fVar59;
          local_188 = (fVar59 * (float)uVar8 - fVar37 * fVar76) + fVar30 * fVar34 + fVar50 + fVar62;
          fStack_184 = (fVar34 * fVar76 - fVar59 * (float)uVar12) + fVar30 * fVar37 + fVar29 +
                       fVar45;
          fStack_180 = (fVar37 * (float)uVar12 - fVar34 * (float)uVar8) + fVar30 * fVar59 + fVar56 +
                       fVar42;
          if (*(int *)((longlong)puVar14 + 0x6c) < iVar11 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(puVar14 + 0xc,iVar11);
          }
          auVar40 = _local_178;
          lVar21 = puVar14[0xc];
          *(ulonglong *)(lVar21 + (longlong)iVar11 * 0xc) = CONCAT44(fStack_184,local_188);
          fVar33 = fVar33 * fVar65;
          fVar50 = fVar43 * fVar68;
          fVar29 = fVar38 * fVar35;
          *(float *)(lVar21 + 8 + (longlong)iVar11 * 0xc) = fStack_180;
          iVar11 = *(int *)(puVar14 + 0xd);
          *(int *)(puVar14 + 0xd) = iVar11 + 1;
          fVar34 = fVar29 * (float)uVar8 - fVar50 * fVar76;
          fVar37 = fVar33 * fVar76 - fVar29 * (float)uVar12;
          fVar59 = fVar50 * (float)uVar12 - fVar33 * (float)uVar8;
          fVar34 = fVar34 + fVar34;
          fVar37 = fVar37 + fVar37;
          fVar59 = fVar59 + fVar59;
          fVar33 = (fVar59 * (float)uVar8 - fVar37 * fVar76) + fVar30 * fVar34 + fVar33 + fVar62;
          local_178._0_4_ = fVar33;
          auVar24 = _local_178;
          fStack_16c = auVar40._12_4_;
          local_178 = auVar24._0_8_;
          fStack_170 = (fVar37 * (float)uVar12 - fVar34 * (float)uVar8) + fVar30 * fVar59 + fVar29 +
                       fVar42;
          local_178._4_4_ =
               (fVar34 * fVar76 - fVar59 * (float)uVar12) + fVar30 * fVar37 + fVar50 + fVar45;
          if (*(int *)((longlong)puVar14 + 0x6c) < iVar11 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(puVar14 + 0xc,iVar11);
          }
          lVar21 = puVar14[0xc];
          fVar34 = (float)local_res8;
          *(undefined1 (*) [8])(lVar21 + (longlong)iVar11 * 0xc) = local_178;
          fVar50 = fVar53 * fVar65;
          fVar29 = fVar36 * fVar68;
          fVar56 = (float)local_res8 * fVar35;
          *(float *)(lVar21 + 8 + (longlong)iVar11 * 0xc) = fStack_170;
          iVar11 = *(int *)(puVar14 + 0xd);
          *(int *)(puVar14 + 0xd) = iVar11 + 1;
          fVar37 = fVar56 * (float)uVar8 - fVar29 * fVar76;
          fVar59 = fVar50 * fVar76 - fVar56 * (float)uVar12;
          fVar33 = fVar29 * (float)uVar12 - fVar50 * (float)uVar8;
          fVar37 = fVar37 + fVar37;
          fVar59 = fVar59 + fVar59;
          fVar33 = fVar33 + fVar33;
          local_168 = (fVar33 * (float)uVar8 - fVar59 * fVar76) + fVar30 * fVar37 + fVar50 + fVar62;
          fStack_164 = (fVar37 * fVar76 - fVar33 * (float)uVar12) + fVar30 * fVar59 + fVar29 +
                       fVar45;
          fStack_160 = (fVar59 * (float)uVar12 - fVar37 * (float)uVar8) + fVar30 * fVar33 + fVar56 +
                       fVar42;
          if (*(int *)((longlong)puVar14 + 0x6c) < iVar11 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(puVar14 + 0xc,iVar11);
          }
          lVar21 = puVar14[0xc];
          *(ulonglong *)(lVar21 + (longlong)iVar11 * 0xc) = CONCAT44(fStack_164,local_168);
          fVar50 = fVar53 * fVar65;
          fVar36 = fVar36 * fVar68;
          fVar29 = fVar38 * fVar35;
          *(float *)(lVar21 + 8 + (longlong)iVar11 * 0xc) = fStack_160;
          iVar11 = *(int *)(puVar14 + 0xd);
          *(int *)(puVar14 + 0xd) = iVar11 + 1;
          fVar37 = fVar29 * (float)uVar8 - fVar36 * fVar76;
          fVar59 = fVar50 * fVar76 - fVar29 * (float)uVar12;
          fVar33 = fVar36 * (float)uVar12 - fVar50 * (float)uVar8;
          fVar37 = fVar37 + fVar37;
          fVar59 = fVar59 + fVar59;
          fVar33 = fVar33 + fVar33;
          local_1a8 = (fVar33 * (float)uVar8 - fVar59 * fVar76) + fVar30 * fVar37 + fVar50 + fVar62;
          fStack_1a4 = (fVar37 * fVar76 - fVar33 * (float)uVar12) + fVar30 * fVar59 + fVar36 +
                       fVar45;
          fStack_1a0 = (fVar59 * (float)uVar12 - fVar37 * (float)uVar8) + fVar30 * fVar33 + fVar29 +
                       fVar42;
          if (*(int *)((longlong)puVar14 + 0x6c) < iVar11 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(puVar14 + 0xc,iVar11);
          }
          lVar21 = puVar14[0xc];
          *(ulonglong *)(lVar21 + (longlong)iVar11 * 0xc) = CONCAT44(fStack_1a4,local_1a8);
          fVar36 = fVar53 * fVar65;
          fVar50 = fVar43 * fVar68;
          fVar34 = fVar34 * fVar35;
          *(float *)(lVar21 + 8 + (longlong)iVar11 * 0xc) = fStack_1a0;
          iVar11 = *(int *)(puVar14 + 0xd);
          *(int *)(puVar14 + 0xd) = iVar11 + 1;
          fVar37 = fVar34 * (float)uVar8 - fVar50 * fVar76;
          fVar59 = fVar36 * fVar76 - fVar34 * (float)uVar12;
          fVar33 = fVar50 * (float)uVar12 - fVar36 * (float)uVar8;
          fVar37 = fVar37 + fVar37;
          fVar59 = fVar59 + fVar59;
          fVar33 = fVar33 + fVar33;
          local_1b8 = (fVar33 * (float)uVar8 - fVar59 * fVar76) + fVar30 * fVar37 + fVar36 + fVar62;
          fStack_1b4 = (fVar37 * fVar76 - fVar33 * (float)uVar12) + fVar30 * fVar59 + fVar50 +
                       fVar45;
          local_1b0 = (fVar59 * (float)uVar12 - fVar37 * (float)uVar8) + fVar30 * fVar33 + fVar34 +
                      fVar42;
          if (*(int *)((longlong)puVar14 + 0x6c) < iVar11 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(puVar14 + 0xc,iVar11);
          }
          lVar21 = puVar14[0xc];
          *(ulonglong *)(lVar21 + (longlong)iVar11 * 0xc) = CONCAT44(fStack_1b4,local_1b8);
          fVar53 = fVar53 * fVar65;
          fVar43 = fVar43 * fVar68;
          fVar38 = fVar38 * fVar35;
          *(float *)(lVar21 + 8 + (longlong)iVar11 * 0xc) = local_1b0;
          iVar11 = *(int *)(puVar14 + 0xd);
          *(int *)(puVar14 + 0xd) = iVar11 + 1;
          fVar65 = fVar38 * (float)uVar8 - fVar43 * fVar76;
          fVar68 = fVar53 * fVar76 - fVar38 * (float)uVar12;
          fVar35 = fVar43 * (float)uVar12 - fVar53 * (float)uVar8;
          fVar65 = fVar65 + fVar65;
          fVar68 = fVar68 + fVar68;
          fVar35 = fVar35 + fVar35;
          local_208 = (fVar35 * (float)uVar8 - fVar68 * fVar76) + fVar30 * fVar65 + fVar53 + fVar62;
          fStack_204 = (fVar65 * fVar76 - fVar35 * (float)uVar12) + fVar30 * fVar68 + fVar43 +
                       fVar45;
          local_200 = (fVar68 * (float)uVar12 - fVar65 * (float)uVar8) + fVar30 * fVar35 + fVar38 +
                      fVar42;
          if (*(int *)((longlong)puVar14 + 0x6c) < iVar11 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(puVar14 + 0xc,iVar11);
          }
          lVar21 = puVar14[0xc];
          *(ulonglong *)(lVar21 + (longlong)iVar11 * 0xc) = CONCAT44(fStack_204,local_208);
          *(float *)(lVar21 + 8 + (longlong)iVar11 * 0xc) = local_200;
          FUN_142321610(puVar14);
          lVar20 = lVar20 + 0xe0;
          pfVar16 = pfVar16 + 0x38;
        } while (lVar20 != local_res10);
        lVar21 = param_1[0x105];
      }
      FUN_1423ce9b0(lVar21 + 0x38,0);
      fVar43 = local_218[2];
      fVar53 = local_218[1];
      lVar20 = *(longlong *)(param_1[0x105] + 0x58);
      lVar21 = (longlong)*(int *)(param_1[0x105] + 0x60) * 0xd0 + lVar20;
      if (lVar20 != lVar21) {
        pfVar16 = (float *)(lVar20 + 0xa0);
        do {
          pfVar19 = *(float **)(pfVar16 + -0x10);
          fVar38 = pfVar16[-4];
          fVar42 = pfVar16[-3];
          fVar45 = pfVar16[-2];
          fVar62 = pfVar16[-1];
          fVar65 = *pfVar16;
          fVar68 = pfVar16[1];
          fVar35 = pfVar16[2];
          fVar76 = pfVar16[4];
          fVar30 = pfVar16[5];
          fVar34 = pfVar16[6];
          pfVar1 = pfVar19 + (longlong)(int)pfVar16[-0xe] * 3;
          for (; pfVar19 != pfVar1; pfVar19 = pfVar19 + 3) {
            fVar37 = *pfVar19 * fVar76;
            fVar64 = pfVar19[1] * fVar30;
            fVar67 = pfVar19[2] * fVar34;
            fVar50 = fVar67 * fVar42 - fVar64 * fVar45;
            fVar29 = fVar37 * fVar45 - fVar67 * fVar38;
            fVar56 = fVar64 * fVar38 - fVar37 * fVar42;
            fVar50 = fVar50 + fVar50;
            fVar29 = fVar29 + fVar29;
            fVar56 = fVar56 + fVar56;
            fVar70 = local_218[0] *
                     ((fVar56 * fVar42 - fVar29 * fVar45) + fVar50 * fVar62 + fVar37 + fVar65);
            pfVar17 = (float *)FUN_1423cba80(param_1,&local_138);
            fVar37 = *pfVar17;
            fVar59 = pfVar17[1];
            fVar33 = pfVar17[2];
            fVar36 = pfVar17[3];
            fVar70 = fVar70 * pfVar17[8];
            fVar64 = fVar53 * ((fVar50 * fVar45 - fVar56 * fVar38) + fVar29 * fVar62 + fVar64 +
                              fVar68) * pfVar17[9];
            fVar67 = fVar43 * ((fVar29 * fVar38 - fVar50 * fVar42) + fVar56 * fVar62 + fVar67 +
                              fVar35) * pfVar17[10];
            fVar50 = fVar67 * fVar59 - fVar64 * fVar33;
            fVar29 = fVar70 * fVar33 - fVar67 * fVar37;
            fVar56 = fVar64 * fVar37 - fVar70 * fVar59;
            fVar50 = fVar50 + fVar50;
            fVar29 = fVar29 + fVar29;
            fVar56 = fVar56 + fVar56;
            local_200 = (fVar29 * fVar37 - fVar50 * fVar59) + fVar36 * fVar56 + fVar67 + pfVar17[6];
            *(ulonglong *)pfVar19 =
                 CONCAT44((fVar50 * fVar33 - fVar56 * fVar37) + fVar36 * fVar29 + fVar64 +
                          pfVar17[5],
                          (fVar56 * fVar59 - fVar29 * fVar33) + fVar36 * fVar50 + fVar70 +
                          pfVar17[4]);
            pfVar19[2] = local_200;
          }
          FTransform::IsValid(&DAT_1468b5b70);
          uVar7 = uRam00000001468b5b78;
          *(undefined8 *)(pfVar16 + -4) = _DAT_1468b5b70;
          *(undefined8 *)(pfVar16 + -2) = uVar7;
          uVar7 = uRam00000001468b5b88;
          *(undefined8 *)pfVar16 = _DAT_1468b5b80;
          *(undefined8 *)(pfVar16 + 2) = uVar7;
          fVar45 = fRam00000001468b5b9c;
          fVar42 = fRam00000001468b5b98;
          fVar38 = fRam00000001468b5b94;
          pfVar16[4] = _DAT_1468b5b90;
          pfVar16[5] = fVar38;
          pfVar16[6] = fVar42;
          pfVar16[7] = fVar45;
          FUN_142321610(lVar20);
          lVar20 = lVar20 + 0xd0;
          pfVar16 = pfVar16 + 0x34;
        } while (lVar20 != lVar21);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001423dd9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0x105] + 0x278))();
    return;
  }
  if (param_1[0x105] != 0) {
    iVar11 = *(int *)(param_1[0x105] + 0xc);
    lVar20 = 0;
    if (iVar11 < (int)DAT_1469e91c4) {
      uVar28 = iVar11 >> 0x1f & 0xffff;
      uVar23 = iVar11 + uVar28;
      lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar23 >> 0x10) * 8) +
               (longlong)(int)((uVar23 & 0xffff) - uVar28) * 0x18;
    }
    *(uint *)(lVar20 + 8) = *(uint *)(lVar20 + 8) | 0x20000000;
    param_1[0x105] = 0;
  }
  return;
}



// FUNCTION 1423dda10 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1423ddb4f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
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
      if (iVar3 < iStack_44) {
LAB_1423ddb4f:
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
        iVar3 = iStack_1c;
        lVar6 = *param_1 + (longlong)iStack_1c * 0x28;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x24) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x20) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1423ddc20 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<FTextRenderComponentMIDCache::FKey,DefaultKeyFuncs<FTextRenderComponentMIDCache::FKey,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1423ddd5f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
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
      if (iVar3 < iStack_44) {
LAB_1423ddd5f:
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
        iVar3 = iStack_1c;
        lVar6 = *param_1 + (longlong)iStack_1c * 0x18;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x14) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x10) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1423dde30 FUN_1423dde30 body=59 status=ok
// SIG undefined FUN_1423dde30(void)

void FUN_1423dde30(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x30 + (longlong)param_2 * 8) != 0) {
    FUN_141edf360();
    FUN_141ee24f0(0);
    FUN_1423cc6f0(param_1,param_2);
  }
  return;
}



// FUNCTION 1423dde70 Remove body=345 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>,TDefaultMapHashableKeyFuncs<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar9 = (longlong)(int)param_1[9] - 1;
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  iVar8 = ::GetTypeHash(param_2);
  iVar8 = *(int *)((longlong)plVar10 + ((longlong)iVar8 & uVar9) * 4);
  if (iVar8 != -1) {
    lVar7 = *param_1;
    do {
      lVar5 = (longlong)iVar8 * 0x28;
      if ((*(longlong *)(lVar5 + lVar7) == *param_2) &&
         (*(longlong *)(lVar5 + 8 + lVar7) == param_2[1])) {
        uVar9 = (longlong)*(int *)(lVar5 + 0x24 + lVar7) & uVar9;
        puVar4 = (undefined4 *)((longlong)plVar10 + uVar9 * 4);
        iVar6 = *(int *)((longlong)plVar10 + uVar9 * 4);
        goto joined_r0x0001423ddf3a;
      }
      iVar8 = *(int *)(lVar5 + 0x20 + lVar7);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x0001423ddf3a:
  if (iVar6 == -1) {
LAB_1423ddf62:
    plVar10 = *(longlong **)(lVar5 + 0x18 + *param_1);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar8,1);
    return 1;
  }
  if (iVar6 == iVar8) {
    *puVar4 = *(undefined4 *)(lVar5 + 0x20 + lVar7);
    goto LAB_1423ddf62;
  }
  lVar3 = (longlong)iVar6 * 5 + 4;
  iVar6 = *(int *)(lVar7 + lVar3 * 8);
  puVar4 = (undefined4 *)(lVar7 + lVar3 * 8);
  goto joined_r0x0001423ddf3a;
}



// FUNCTION 1423ddfd0 FUN_1423ddfd0 body=253 status=ok
// SIG undefined FUN_1423ddfd0(void)

void FUN_1423ddfd0(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)(*param_1 + (longlong)param_2 * 0x38);
    iVar4 = param_3;
    do {
      lVar3 = 2;
      plVar6 = plVar5 + 6;
      do {
        plVar1 = plVar6 + -2;
        plVar6 = plVar6 + -2;
        lVar3 = lVar3 + -1;
        if (*plVar1 != 0) {
          FMemory::Free();
        }
      } while (lVar3 != 0);
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 7;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = (int)param_1[1];
    iVar2 = (iVar4 - param_2) - param_3;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x38),
                 (void *)((longlong)(param_2 + param_3) * 0x38 + *param_1),(longlong)iVar2 * 0x38);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 - param_3;
    if (param_4 != '\0') {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1423de0d0 RemoveLevel body=97 status=ok
// SIG undefined RemoveLevel(void)

void FStreamingManagerCollection::RemoveLevel(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x10));
      (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1423de140 FUN_1423de140 body=91 status=ok
// SIG undefined FUN_1423de140(void)

void FUN_1423de140(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x6e8))(param_2);
    if (lVar1 != 0) {
      FTickFunction::RemovePrerequisite(lVar1 + 0x30,param_1,param_1 + 0x28);
    }
    FTickFunction::RemovePrerequisite(param_2 + 5,param_1,param_1 + 0x28);
  }
  return;
}



// FUNCTION 1423de1a0 RemoveStreamingManager body=235 status=ok
// SIG undefined RemoveStreamingManager(void)

void FStreamingManagerCollection::RemoveStreamingManager(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0x10) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar2) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar1 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar1 = plVar1 + 1;
        } while (lVar3 < lVar2);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar2);
    *(int *)(param_1 + 0x18) = iVar6;
  }
  return;
}



// FUNCTION 1423de290 RemoveStreamingViews body=123 status=ok
// SIG undefined RemoveStreamingViews(void)

void IStreamingManager::RemoveStreamingViews(undefined8 param_1,int param_2)

{
  DAT_146af1328 = 0;
  if (DAT_146af132c != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (&DAT_146af1320,0);
  }
  DAT_146af1348 = 0;
  if (DAT_146af134c != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (&DAT_146af1340,0);
  }
  if ((param_2 == 1) && (DAT_146af1338 = 0, DAT_146af133c != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (&DAT_146af1330,0);
    return;
  }
  return;
}



// FUNCTION 1423de310 RepointCurveOwner body=139 status=ok
// SIG undefined RepointCurveOwner(void)

ulonglong UCurveBase::RepointCurveOwner(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8 [2];
  undefined1 local_res18 [8];
  
  lVar5 = 0;
  param_1 = param_1 + -0x28;
  if (param_1 != 0) {
    plVar1 = (longlong *)(param_2 + 0x10);
    in_RAX = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                    ::FindId(plVar1,local_res18,param_1);
    if (*in_RAX != -1) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(plVar1,local_res8,param_1);
      lVar2 = (longlong)local_res8[0];
      lVar4 = lVar5;
      if (local_res8[0] != -1) {
        lVar2 = *plVar1;
        lVar4 = lVar2 + (longlong)local_res8[0] * 0x18;
      }
      uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      lVar4 = *(longlong *)(lVar4 + 8);
      goto LAB_1423de37a;
    }
  }
  uVar3 = (ulonglong)in_RAX & 0xffffffffffffff00;
  lVar4 = lVar5;
LAB_1423de37a:
  lVar2 = lVar4 + 0x28;
  if (lVar4 == 0) {
    lVar2 = lVar5;
  }
  *param_3 = lVar2;
  return uVar3;
}



// FUNCTION 1423de3a0 FUN_1423de3a0 body=52 status=ok
// SIG undefined FUN_1423de3a0(void)

void FUN_1423de3a0(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  thunk_FUN_1428dfda0();
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x468) = local_res8;
  *(undefined4 *)(param_1 + 0x46c) = local_resc;
  return;
}



// FUNCTION 1423de3e0 Reset body=135 status=ok
// SIG undefined Reset(void)

void FKeyHandleLookupTable::Reset(longlong *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if (-1 < iVar1) {
    if (iVar3 != 0) {
      pcVar2 = (char *)(*param_1 + 4);
      do {
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
        }
        pcVar2 = pcVar2 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
              (param_1 + 2);
    return;
  }
  if (iVar3 != 0) {
    pcVar2 = (char *)(*param_1 + 4);
    do {
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
      }
      pcVar2 = pcVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar1 = *(int *)((longlong)param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (iVar1 != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
            (param_1 + 2);
  return;
}



// FUNCTION 1423de470 Reset body=49 status=ok
// SIG undefined Reset(void)

void FRichCurve::Reset(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x60,0);
  }
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty(param_1 + 8,0);
  return;
}



// FUNCTION 1423de4b0 FUN_1423de4b0 body=36 status=ok
// SIG undefined FUN_1423de4b0(void)

void FUN_1423de4b0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x7c8))();
                    /* WARNING: Could not recover jumptable at 0x0001423de4cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x7e0))(param_1);
  return;
}



// FUNCTION 1423de500 ResizeForCopy body=139 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FRHIUnorderedAccessView_*,TInlineAllocator<2,TSizedDefaultAllocator<32>_>_>::
     ResizeForCopy(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 3) {
      uVar2 = 2;
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
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (uVar2 < 3) {
      if (lVar1 == 0) goto LAB_1423de578;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_1423de578;
      lVar5 = (longlong)(int)uVar2 << 3;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
  }
LAB_1423de578:
  *(uint *)(param_1 + 0x1c) = uVar2;
  return;
}



// FUNCTION 1423de590 ResizeGrow body=240 status=ok
// SIG undefined ResizeGrow(void)

void TArray<float,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x48);
  if (uVar1 < 0x11) {
    uVar2 = 0x10;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x4c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 4,0);
    uVar2 = (uint)(uVar3 >> 2);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x4c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x40);
  if (uVar2 < 0x11) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 2);
    pvVar4 = *(void **)((longlong)param_1 + 0x40);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 2,0);
        *(void **)((longlong)param_1 + 0x40) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 2);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 2;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar5;
  return;
}



// FUNCTION 1423de680 ResizeGrow body=137 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FPlane,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  if (uVar1 < 9) {
    iVar2 = 8;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x94) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x94) = iVar2;
  FUN_1405a7600(param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 1423de710 FUN_1423de710 body=118 status=ok
// SIG undefined FUN_1423de710(void)

void FUN_1423de710(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xbd0,0);
    iVar3 = (int)(uVar1 / 0xbd0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xbd0,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1423de790 FUN_1423de790 body=110 status=ok
// SIG undefined FUN_1423de790(void)

void FUN_1423de790(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x94)) {
    *(int *)(param_1 + 0x94) = iVar1;
    FUN_1405a7600(param_1,*(undefined4 *)(param_1 + 0x90),iVar1,0x10);
  }
  return;
}



// FUNCTION 1423de800 FUN_1423de800 body=688 status=ok
// SIG undefined FUN_1423de800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423de800(longlong *param_1,float param_2,float param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint *puVar9;
  float fVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [4];
  uint local_b4;
  longlong local_b0;
  uint local_a8;
  int local_a4;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  FUN_1423d1f00(param_1,&local_c0);
  if (local_a4 < *(int *)(local_b0 + 0x18)) {
    do {
      FUN_140859ed0(&local_98,local_c8,(longlong)local_a4 * 0x10 + *local_c0,0);
      local_a8 = local_a8 & ~local_b4;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_b8);
    } while (local_a4 < *(int *)(local_b0 + 0x18));
  }
  FUN_1423d1f00(param_1,&local_c0);
  if (*(int *)(local_b0 + 0x18) <= local_a4) {
LAB_1423dea60:
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
    return;
  }
LAB_1423de8f0:
  puVar9 = (uint *)((longlong)local_a4 * 0x10 + *local_c0);
  if ((int)local_90 != local_64) {
    uVar1 = *puVar9;
    puVar7 = local_60;
    if (local_58 != (undefined1 *)0x0) {
      puVar7 = local_58;
    }
    for (iVar3 = *(int *)(puVar7 + (longlong)(int)(local_50 - 1U & uVar1) * 4); iVar3 != -1;
        iVar3 = *(int *)(local_98 + 4 + (longlong)iVar3 * 0xc)) {
      if (*(uint *)(local_98 + (longlong)iVar3 * 0xc) == uVar1) {
        if (iVar3 != -1) {
          cVar2 = (**(code **)(*param_1 + 0x10))(param_1,uVar1);
          if (cVar2 == '\0') {
            fVar10 = 0.0;
            goto LAB_1423dea0c;
          }
          iVar3 = (**(code **)(*param_1 + 8))(param_1);
          if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar3) {
            FKeyHandleMap::EnsureAllIndicesHaveHandles(param_1 + 1,iVar3);
          }
          if ((int)param_1[2] == *(int *)((longlong)param_1 + 0x3c)) goto LAB_1423de9ed;
          plVar5 = (longlong *)param_1[9];
          if ((longlong *)param_1[9] == (longlong *)0x0) {
            plVar5 = param_1 + 8;
          }
          uVar4 = *(uint *)((longlong)plVar5 +
                           ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar1) * 4);
          if (uVar4 == 0xffffffff) goto LAB_1423de9ed;
          goto LAB_1423de9d0;
        }
        break;
      }
    }
  }
  goto LAB_1423dea27;
  while (uVar4 = puVar8[2], uVar4 != 0xffffffff) {
LAB_1423de9d0:
    puVar8 = (uint *)((longlong)(int)uVar4 * 0x10 + param_1[1]);
    if (*puVar8 == uVar1) {
      if (uVar4 != 0xffffffff) goto LAB_1423de9f0;
      break;
    }
  }
LAB_1423de9ed:
  puVar8 = (uint *)0x0;
LAB_1423de9f0:
  puVar6 = puVar8 + 1;
  if (puVar8 == (uint *)0x0) {
    puVar6 = (uint *)0x0;
  }
  fVar10 = *(float *)((longlong)(int)*puVar6 * 0x1c + 4 + param_1[0xc]);
LAB_1423dea0c:
  FUN_1423df9f0(param_1,local_c8,*puVar9,(fVar10 - param_2) * param_3 + param_2);
LAB_1423dea27:
  local_a8 = local_a8 & ~local_b4;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_b8);
  if (*(int *)(local_b0 + 0x18) <= local_a4) goto LAB_1423dea60;
  goto LAB_1423de8f0;
}



// FUNCTION 1423deab0 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  AActor::Serialize();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0188);
  return;
}



// FUNCTION 1423deae0 FUN_1423deae0 body=114 status=ok
// SIG undefined FUN_1423deae0(void)

undefined8 FUN_1423deae0(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1,4);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 2);
  return 1;
}



// FUNCTION 1423deb60 FUN_1423deb60 body=673 status=ok
// SIG undefined FUN_1423deb60(void)

undefined8 FUN_1423deb60(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  if ((int)param_2[8] < 0x16e) {
    return 0;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 1,1);
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 2,1);
  }
  else {
    param_1[2] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 4,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 4,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 8,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xc,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xc,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x10,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x14,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x14,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0x18) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return 1;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x18,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0x18,4);
  }
  return 1;
}



// FUNCTION 1423dee10 Serialize body=230 status=ok
// SIG undefined Serialize(void)

void FSplineMeshVertexFactoryShaderParameters::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 8);
  FUN_1419e0a40(param_2,param_1 + 0xe);
  FUN_1419e0a40(param_2,param_1 + 0x14);
  FUN_1419e0a40(param_2,param_1 + 0x1a);
  FUN_1419e0a40(param_2,param_1 + 0x20);
  FUN_1419e0a40(param_2,param_1 + 0x26);
  FUN_1419e0a40(param_2,param_1 + 0x2c);
  FUN_1419e0a40(param_2,param_1 + 0x32);
  FUN_1419e0a40(param_2,param_1 + 0x38);
  FUN_1419e0a40(param_2,param_1 + 0x3e);
  FUN_1419e0a40(param_2,param_1 + 0x44);
  FUN_1419e0a40(param_2,param_1 + 0x4a);
  FUN_1419e0a40(param_2,param_1 + 0x50);
  FUN_1419e0a40(param_2,param_1 + 0x56);
  FUN_1419e0a40(param_2,param_1 + 0x5c);
  FUN_1419e0a40(param_2,param_1 + 0x62);
  FUN_1419e0a40(param_2,param_1 + 0x68);
  return;
}



// FUNCTION 1423def00 FUN_1423def00 body=178 status=ok
// SIG undefined FUN_1423def00(void)

void FUN_1423def00(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  FUN_1423defc0();
  if (*(int *)(param_2 + 0x40) < 0xe8) {
    *(undefined1 *)(param_1 + 0x818) = 2;
    uVar1 = *(undefined4 *)(param_1 + 0x7d4);
    *(float *)(param_1 + 2000) = *(float *)(param_1 + 2000) - 1.5707964;
    *(float *)(param_1 + 0x7fc) = *(float *)(param_1 + 0x7fc) - 1.5707964;
    *(uint *)(param_1 + 0x7d4) = *(uint *)(param_1 + 0x7d8) ^ 0x80000000;
    *(undefined4 *)(param_1 + 0x7d8) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 0x800);
    *(uint *)(param_1 + 0x800) = *(uint *)(param_1 + 0x804) ^ 0x80000000;
    *(undefined4 *)(param_1 + 0x804) = uVar1;
  }
  return;
}



// FUNCTION 1423defc0 FUN_1423defc0 body=628 status=ok
// SIG undefined FUN_1423defc0(void)

void FUN_1423defc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  char *pcVar9;
  char local_res10 [8];
  uint local_res18 [4];
  char *local_38;
  undefined8 local_30;
  
  FUN_142396660();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  local_res10[0] = param_2[0xe] != 0;
  if (0x19 < *(int *)((longlong)param_2 + 0x44)) {
    (**(code **)(*param_2 + 8))(param_2,local_res10);
  }
  uVar4 = 0;
  if ((local_res10[0] == '\0') || (*(longlong *)(param_1 + 0x728) == 0)) {
    FUN_1423c6220(param_2,param_1 + 0x758);
  }
  else if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      uVar5 = *(uint *)(param_1 + 0x760);
      uVar7 = (ulonglong)uVar5;
      local_38 = (char *)0x0;
      local_30 = 0;
      local_res18[0] = uVar5;
      if (uVar5 != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_38,uVar5);
      }
      pcVar9 = local_38;
      if (0 < (int)uVar5) {
        do {
          uVar2 = local_30;
          lVar6 = (longlong)(int)local_30;
          iVar3 = (int)local_30 + 1;
          local_30 = CONCAT44(local_30._4_4_,iVar3);
          if (local_30._4_4_ < iVar3) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_38,uVar2 & 0xffffffff);
            pcVar9 = local_38;
          }
          if (pcVar9 + lVar6 != (char *)0x0) {
            pcVar9[lVar6] = '\x01';
          }
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      plVar1 = (longlong *)param_2[1];
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      uVar7 = uVar4;
      pcVar8 = pcVar9;
      if (0 < *(int *)(param_1 + 0x760)) {
        do {
          if (*pcVar8 != '\0') {
            FUN_1423c55a0(param_2,(longlong)(int)uVar7 * 0xc0 + *(longlong *)(param_1 + 0x758));
          }
          uVar5 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar5;
          pcVar8 = pcVar8 + 1;
        } while ((int)uVar5 < *(int *)(param_1 + 0x760));
      }
      if (pcVar9 != (char *)0x0) {
        FMemory::Free(pcVar9);
      }
    }
  }
  else {
    plVar1 = (longlong *)param_2[1];
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res18,4);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    FUN_142826ef0(param_1,local_res18[0],local_res18[0]);
    uVar7 = uVar4;
    if (0 < (int)local_res18[0]) {
      do {
        FUN_1423c55a0(param_2,(longlong)(int)uVar7 * 0xc0 + *(longlong *)(param_1 + 0x758));
        uVar5 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar5;
      } while ((int)uVar5 < (int)local_res18[0]);
    }
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) && (uVar7 = uVar4, 0 < *(int *)(param_1 + 0x760))) {
    do {
      uVar5 = (int)uVar7 + 1;
      *(longlong *)(uVar4 + 0xb8 + *(longlong *)(param_1 + 0x758)) = param_1;
      uVar4 = uVar4 + 0xc0;
      uVar7 = (ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x760));
  }
  return;
}



// FUNCTION 1423df240 FUN_1423df240 body=28 status=ok
// SIG undefined FUN_1423df240(void)

void FUN_1423df240(longlong param_1,undefined4 param_2,char param_3)

{
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 1;
  *(undefined4 *)(param_1 + 0x820) = param_2;
  if (param_3 != '\0') {
    FUN_1423e22d0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1423df260 FUN_1423df260 body=28 status=ok
// SIG undefined FUN_1423df260(void)

void FUN_1423df260(longlong param_1,undefined4 param_2,char param_3)

{
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 1;
  *(undefined4 *)(param_1 + 0x81c) = param_2;
  if (param_3 != '\0') {
    FUN_1423e22d0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1423df280 FUN_1423df280 body=27 status=ok
// SIG undefined FUN_1423df280(void)

void FUN_1423df280(longlong param_1)

{
  FUN_142717130();
  *(byte *)(param_1 + 0x745) = *(byte *)(param_1 + 0x745) & 0xfb;
  return;
}



// FUNCTION 1423df2a0 FUN_1423df2a0 body=297 status=ok
// SIG undefined FUN_1423df2a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423df2a0(longlong *param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 in_EAX;
  int iVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  fVar11 = *(float *)((longlong)param_1 + 0x4c4) - param_2[1];
  fVar2 = (float)DAT_146af1360;
  fVar3 = DAT_146af1360._4_4_;
  fVar4 = DAT_146af1360._8_4_;
  fVar5 = DAT_146af1360._12_4_;
  auVar8._4_4_ = fVar11;
  auVar8._0_4_ = *(float *)(param_1 + 0x98) - *param_2;
  auVar8._8_4_ = *(float *)(param_1 + 0x99) - param_2[2];
  auVar8._12_4_ = 0;
  auVar8 = divps(auVar8,_DAT_146af1360);
  fVar10 = (*(float *)(param_1 + 0x98) - *param_2) - (float)(int)auVar8._0_4_ * fVar2;
  fVar11 = fVar11 - (float)(int)auVar8._4_4_ * fVar3;
  fVar12 = (*(float *)(param_1 + 0x99) - param_2[2]) - (float)(int)auVar8._8_4_ * fVar4;
  fVar13 = 0.0 - (float)(int)auVar8._12_4_ * fVar5;
  fVar10 = (float)(((uint)(fVar2 + fVar10) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                  (uint)(fVar2 + fVar10));
  fVar11 = (float)(((uint)(fVar3 + fVar11) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                  (uint)(fVar3 + fVar11));
  fVar12 = (float)(((uint)(fVar4 + fVar12) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                  (uint)(fVar4 + fVar12));
  fVar13 = (float)(((uint)(fVar5 + fVar13) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                  (uint)(fVar5 + fVar13));
  auVar9._4_4_ = -(uint)(0.001 < (float)((((uint)(fVar11 - fVar3) ^ (uint)fVar11) &
                                          -(uint)(fRam0000000146af1354 < fVar11) ^ (uint)fVar11) &
                                        uRam0000000146af12d4));
  auVar9._0_4_ = -(uint)(0.001 < (float)((((uint)(fVar10 - fVar2) ^ (uint)fVar10) &
                                          -(uint)(_DAT_146af1350 < fVar10) ^ (uint)fVar10) &
                                        _DAT_146af12d0));
  auVar9._8_4_ = -(uint)(0.001 < (float)((((uint)(fVar12 - fVar4) ^ (uint)fVar12) &
                                          -(uint)(fRam0000000146af1358 < fVar12) ^ (uint)fVar12) &
                                        uRam0000000146af12d8));
  auVar9._12_4_ =
       -(uint)(0.001 < (float)((((uint)(fVar13 - fVar5) ^ (uint)fVar13) &
                                -(uint)(fRam0000000146af135c < fVar13) ^ (uint)fVar13) &
                              uRam0000000146af12dc));
  iVar6 = movmskps(in_EAX,auVar9);
  if (iVar6 != 0) {
    lVar1 = *(longlong *)param_2;
    param_1[0x98] = lVar1;
    *(float *)(param_1 + 0x99) = param_2[2];
    if ((param_1[0x2d] != 0) && ((*(byte *)(param_1[0x2d] + 0x24c) & 8) != 0)) {
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x720))(lVar1,local_18);
      local_28 = *puVar7;
      local_20 = *(undefined4 *)(puVar7 + 1);
      FUN_142399b90(param_1[0x2d],&local_28,0,0,0);
    }
  }
  return;
}



// FUNCTION 1423df3d0 FUN_1423df3d0 body=141 status=ok
// SIG undefined FUN_1423df3d0(void)

void FUN_1423df3d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)0x0;
  plVar3 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x290))(param_2);
    if (((lVar2 != 0) && ((*(uint *)(lVar2 + 0x708) >> 0x14 & 1) != 0)) &&
       (plVar4 = plVar3, (*(uint *)(lVar2 + 0x708) >> 0x13 & 1) != 0)) {
      iVar1 = (**(code **)(*param_2 + 0x460))(param_2);
      if (iVar1 == 3) {
        iVar1 = (**(code **)(*param_2 + 0x468))(param_2);
        if (iVar1 == 0) {
          plVar4 = param_2;
        }
      }
    }
  }
  *(longlong **)(param_1 + 0x738) = plVar4;
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FUN_14273c620(*(longlong *)(param_1 + 0x640),plVar4);
  }
  return;
}



// FUNCTION 1423df460 FUN_1423df460 body=142 status=ok
// SIG undefined FUN_1423df460(void)

void FUN_1423df460(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)0x0;
  plVar3 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x290))(param_2);
    if (((lVar2 != 0) && ((*(uint *)(lVar2 + 0x708) >> 0x14 & 1) != 0)) &&
       (plVar4 = plVar3, (*(uint *)(lVar2 + 0x708) >> 0x13 & 1) != 0)) {
      iVar1 = (**(code **)(*param_2 + 0x460))(param_2);
      if (iVar1 == 1) {
        iVar1 = (**(code **)(*param_2 + 0x468))(param_2);
        if (iVar1 == 1) {
          plVar4 = param_2;
        }
      }
    }
  }
  *(longlong **)(param_1 + 0x730) = plVar4;
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FUN_14273c720(*(longlong *)(param_1 + 0x640),plVar4);
  }
  return;
}



// FUNCTION 1423df4f0 SetDisregardWorldResourcesForFrames body=96 status=ok
// SIG undefined SetDisregardWorldResourcesForFrames(void)

void FStreamingManagerCollection::SetDisregardWorldResourcesForFrames
               (longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x10));
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1423df550 FUN_1423df550 body=443 status=ok
// SIG undefined FUN_1423df550(void)

void FUN_1423df550(longlong param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_38 [48];
  
  if ((param_2 != *(float *)(param_1 + 0x750)) && (lVar8 = FUN_14233fea0(), lVar8 != 0)) {
    *(float *)(param_1 + 0x750) = param_2;
    if (*(longlong *)(param_1 + 0x728) != 0) {
      if ((*(byte *)(param_1 + 0x745) & 1) == 0) {
        param_2 = *(float *)(*(longlong *)(param_1 + 0x728) + 0x98);
      }
      lVar8 = *(longlong *)(param_1 + 0x640);
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      if ((DAT_146ac3ac6 == '\0') || (cVar6 = IsInRenderingThread(), cVar6 == '\0')) {
        uStack_50 = (undefined4)lVar8;
        uStack_4c = (undefined4)((ulonglong)lVar8 >> 0x20);
        if ((DAT_146ac3ac5 == '\0') &&
           (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
            (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
          FBaseGraphTask::GetSmallTaskAllocator();
          if (lVar8 != 0) {
            FUN_14273c920(lVar8,param_2);
          }
        }
        else {
          plVar9 = (longlong *)FUN_1423cd460(local_38,0,0xff);
          lVar8 = *plVar9;
          *(float *)(lVar8 + 0x10) = param_2;
          *(undefined4 *)(lVar8 + 0x14) = uStack_54;
          *(undefined4 *)(lVar8 + 0x18) = uStack_50;
          *(undefined4 *)(lVar8 + 0x1c) = uStack_4c;
          lVar8 = *plVar9;
          lVar5 = plVar9[2];
          lVar3 = plVar9[1];
          lVar4 = *(longlong *)(lVar8 + 0x28);
          piVar1 = (int *)(lVar4 + 0x48);
          if (lVar4 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          FUN_1409421c0(lVar8,lVar3,(int)lVar5,1);
          if (lVar4 != 0) {
            LOCK();
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              FGraphEvent::Recycle(lVar4);
            }
          }
        }
      }
      else {
        FBaseGraphTask::GetSmallTaskAllocator();
        if (lVar8 != 0) {
          FUN_14273c920(lVar8,param_2);
        }
      }
      plVar9 = (longlong *)FUN_14233fea0(param_1);
      (**(code **)(*plVar9 + 0x28))(plVar9,param_1);
    }
  }
  return;
}



// FUNCTION 1423df710 FUN_1423df710 body=27 status=ok
// SIG undefined FUN_1423df710(void)

void FUN_1423df710(longlong param_1,undefined8 param_2,char param_3)

{
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 1;
  *(undefined8 *)(param_1 + 0x800) = param_2;
  if (param_3 != '\0') {
    FUN_1423e22d0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1423df730 FUN_1423df730 body=41 status=ok
// SIG undefined FUN_1423df730(void)

void FUN_1423df730(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 1;
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x7dc) = uVar1;
  *(undefined4 *)(param_1 + 0x7e4) = uVar2;
  if (param_3 != '\0') {
    FUN_1423e22d0(uVar1,0);
    return;
  }
  return;
}



// FUNCTION 1423df760 FUN_1423df760 body=28 status=ok
// SIG undefined FUN_1423df760(void)

void FUN_1423df760(longlong param_1,undefined4 param_2,char param_3)

{
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 1;
  *(undefined4 *)(param_1 + 0x7fc) = param_2;
  if (param_3 != '\0') {
    FUN_1423e22d0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1423df780 FUN_1423df780 body=27 status=ok
// SIG undefined FUN_1423df780(void)

void FUN_1423df780(longlong param_1,undefined8 param_2,char param_3)

{
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 1;
  *(undefined8 *)(param_1 + 0x7f4) = param_2;
  if (param_3 != '\0') {
    FUN_1423e22d0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1423df7a0 FUN_1423df7a0 body=41 status=ok
// SIG undefined FUN_1423df7a0(void)

void FUN_1423df7a0(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 1;
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x7e8) = uVar1;
  *(undefined4 *)(param_1 + 0x7f0) = uVar2;
  if (param_3 != '\0') {
    FUN_1423e22d0(uVar1,0);
    return;
  }
  return;
}



// FUNCTION 1423df7d0 FUN_1423df7d0 body=80 status=ok
// SIG undefined FUN_1423df7d0(void)

void FUN_1423df7d0(longlong param_1,longlong param_2)

{
  float fVar1;
  
  *(longlong *)(param_1 + 0x710) = param_2;
  if (param_2 == 0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = (float)FUN_14244fa00(param_2);
    fVar1 = 1.0 / fVar1;
  }
  *(float *)(param_1 + 0x72c) = fVar1;
  FUN_1423ca740(param_1);
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 1423df820 FUN_1423df820 body=20 status=ok
// SIG undefined FUN_1423df820(void)

void FUN_1423df820(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x718) != param_2) {
    *(int *)(param_1 + 0x718) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423df840 FUN_1423df840 body=26 status=ok
// SIG undefined FUN_1423df840(void)

void FUN_1423df840(longlong param_1,undefined1 param_2,char param_3)

{
  *(undefined1 *)(param_1 + 0x818) = param_2;
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 1;
  if (param_3 != '\0') {
    FUN_1423e22d0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1423df860 FUN_1423df860 body=35 status=ok
// SIG undefined FUN_1423df860(void)

void FUN_1423df860(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x730) = param_2;
  FUN_1423ca740();
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 1423df890 FUN_1423df890 body=33 status=ok
// SIG undefined FUN_1423df890(void)

void FUN_1423df890(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x718) = param_2;
  FUN_1423ca740();
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 1423df920 FUN_1423df920 body=113 status=ok
// SIG undefined FUN_1423df920(void)

void FUN_1423df920(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  FUN_14223ca30(local_18,&local_18,&local_28,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001423df98a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x728))(param_1,param_3,1);
  return;
}



// FUNCTION 1423df9a0 FUN_1423df9a0 body=80 status=ok
// SIG undefined FUN_1423df9a0(void)

void FUN_1423df9a0(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (1 < *(byte *)(param_1 + 0x24e))) && (param_2 != *(float *)(param_1 + 0x480))) {
    *(float *)(param_1 + 0x480) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 1423df9f0 FUN_1423df9f0 body=507 status=ok
// SIG undefined FUN_1423df9f0(void)

undefined4 *
FUN_1423df9f0(longlong *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 local_res8 [8];
  
  cVar10 = (**(code **)(*param_1 + 0x10))(param_1,param_3);
  if (cVar10 != '\0') {
    iVar11 = (**(code **)(*param_1 + 8))(param_1);
    if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar11) {
      FKeyHandleMap::EnsureAllIndicesHaveHandles(param_1 + 1,iVar11);
    }
    iVar11 = FIndexedCurve::GetIndex(param_1,param_3);
    puVar12 = (undefined1 *)((longlong)iVar11 * 0x1c + param_1[0xc]);
    uVar7 = *puVar12;
    uVar8 = puVar12[1];
    uVar9 = puVar12[2];
    uVar1 = *(undefined4 *)(puVar12 + 4);
    uVar2 = *(undefined4 *)(puVar12 + 8);
    uVar3 = *(undefined4 *)(puVar12 + 0xc);
    uVar4 = *(undefined4 *)(puVar12 + 0x10);
    uVar5 = *(undefined4 *)(puVar12 + 0x14);
    uVar6 = *(undefined4 *)(puVar12 + 0x18);
    FRichCurve::DeleteKey(param_1,param_3);
    FRichCurve::AddKey(param_1,local_res8,param_4,uVar2,0,param_3);
    iVar11 = (**(code **)(*param_1 + 8))(param_1);
    if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar11) {
      FKeyHandleMap::EnsureAllIndicesHaveHandles(param_1 + 1,iVar11);
    }
    iVar11 = FIndexedCurve::GetIndex(param_1,param_3);
    puVar12 = (undefined1 *)((longlong)iVar11 * 0x1c + param_1[0xc]);
    *puVar12 = uVar7;
    puVar12[1] = uVar8;
    puVar12[2] = uVar9;
    *(undefined4 *)(puVar12 + 4) = uVar1;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    *(undefined4 *)(puVar12 + 0xc) = uVar3;
    *(undefined4 *)(puVar12 + 0x10) = uVar4;
    *(undefined4 *)(puVar12 + 0x14) = uVar5;
    *(undefined4 *)(puVar12 + 0x18) = uVar6;
    iVar11 = (**(code **)(*param_1 + 8))(param_1);
    if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar11) {
      FKeyHandleMap::EnsureAllIndicesHaveHandles(param_1 + 1,iVar11);
    }
    iVar11 = FIndexedCurve::GetIndex(param_1,param_3);
    *(undefined4 *)((longlong)iVar11 * 0x1c + 4 + param_1[0xc]) = param_4;
  }
  *param_2 = param_3;
  return param_2;
}



// FUNCTION 1423dfbf0 FUN_1423dfbf0 body=38 status=ok
// SIG undefined FUN_1423dfbf0(void)

void FUN_1423dfbf0(longlong param_1,int param_2,undefined8 param_3)

{
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x708) = param_3;
    FUN_1423ca740();
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 1423dfc20 FUN_1423dfc20 body=1852 status=ok
// SIG undefined FUN_1423dfc20(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1423dfc20(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void *_Dst;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_d8;
  undefined1 local_d0 [8];
  undefined4 local_c8 [2];
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
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
  
  local_res18 = param_3;
  if ((((*(char *)(param_4 + 0x339) == '\0') || (*(int *)(param_5 + 0x1a38) < 2)) ||
      ((DAT_146ab62cc < 0x1e && ((0x25e2efcaU >> (DAT_146ab62cc & 0x1f) & 1) != 0)))) ||
     (((DAT_146ab62cc < 0x1c && ((0x8051000U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) &&
      (uVar1 = RHIGetShaderLanguageVersion(), uVar1 < 2)))) {
    uVar8 = 0;
    if (((*(char *)(param_6 + 0x66) != '\0') && (*(longlong *)(param_6 + 0x20) != 0)) &&
       (*(char *)(param_6 + 0x66) != '\0')) {
      puVar10 = (undefined4 *)(param_4 + 0x760);
      uVar3 = uVar8;
      uVar9 = uVar8;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_6 + 0x20) + uVar8 * 8);
        if ((-1 < (longlong)uVar8) && ((int)uVar3 < *(int *)(param_4 + 0x708))) {
          if (lVar2 == 0) {
LAB_1423dfd74:
            lVar2 = *(longlong *)(param_4 + 0x700);
            if (*(longlong *)(param_4 + 0x700) == 0) {
              lVar2 = param_4 + 0x6e0;
            }
            if (*(longlong *)(lVar2 + uVar9) != 0) {
              local_res20 = *(undefined8 *)(*(longlong *)(lVar2 + uVar9) + 0x30);
              goto LAB_1423dfd27;
            }
            lVar2 = FUN_141ee2f20(*(undefined1 *)(uVar8 + 0x748 + param_4));
            puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            local_res20 = *(undefined8 *)(lVar2 + 0x30);
            param_5 = CONCAT44(param_5._4_4_,*puVar10);
            puVar4 = puVar6 + 5;
            if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
              puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar4 = puVar6 + 5;
            }
            *(undefined8 **)(param_2 + 0x30) = puVar4;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          }
          else {
            lVar7 = *(longlong *)(param_4 + 0x700);
            if (*(longlong *)(param_4 + 0x700) == 0) {
              lVar7 = param_4 + 0x6e0;
            }
            if ((*(byte *)(lVar7 + 0xf + uVar9) & 2) == 0) goto LAB_1423dfd74;
            local_res20 = *(undefined8 *)(lVar2 + 0x30);
LAB_1423dfd27:
            puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            param_5 = CONCAT44(param_5._4_4_,*puVar10);
            puVar4 = puVar6 + 5;
            if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
              puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar4 = puVar6 + 5;
            }
            *(undefined8 **)(param_2 + 0x30) = puVar4;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          }
          **(undefined8 **)(param_2 + 8) = puVar6;
          *(undefined8 **)(param_2 + 8) = puVar6 + 1;
          puVar6[1] = 0;
          *puVar6 = &PTR_LAB_143f489e0;
          *(undefined4 *)(puVar6 + 2) = (undefined4)param_5;
          *(undefined4 *)(puVar6 + 4) = 0;
          puVar6[3] = local_res20;
        }
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar1;
        uVar8 = uVar8 + 1;
        puVar10 = puVar10 + 1;
        uVar9 = uVar9 + 0x10;
      } while ((int)uVar1 < (int)(uint)*(byte *)(param_6 + 0x66));
    }
  }
  lVar2 = *(longlong *)(local_res18 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  lVar2 = *(longlong *)(lVar2 + 0x38);
  local_d8 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    lVar7 = *(longlong *)(param_6 + 0x18);
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    local_c0 = lVar2;
    SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector,FRHICommandList>
              (param_2,&local_c0,param_1 + 8,lVar7 + 0x3e0,0);
    local_b8 = local_d8;
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector,FRHICommandList>
              (param_2,&local_b8,param_1 + 0xe,lVar7 + 0x3ec,0);
    local_b0 = local_d8;
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    FUN_1423c2e10(param_2,&local_b0,param_1 + 0x14,lVar7 + 0x400,0);
    local_a8 = local_d8;
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector2D,FRHICommandList>
              (param_2,&local_a8,param_1 + 0x1a,lVar7 + 0x3f8,0);
    local_a0 = local_d8;
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector2D,FRHICommandList>
              (param_2,&local_a0,param_1 + 0x20,lVar7 + 0x404,0);
    local_98 = local_d8;
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector,FRHICommandList>
              (param_2,&local_98,param_1 + 0x26,lVar7 + 0x40c,0);
    local_90 = local_d8;
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector,FRHICommandList>
              (param_2,&local_90,param_1 + 0x2c,lVar7 + 0x418,0);
    local_88 = local_d8;
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    FUN_1423c2e10(param_2,&local_88,param_1 + 0x32,lVar7 + 0x42c,0);
    local_80 = local_d8;
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector2D,FRHICommandList>
              (param_2,&local_80,param_1 + 0x38,lVar7 + 0x424,0);
    local_78 = local_d8;
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector2D,FRHICommandList>
              (param_2,&local_78,param_1 + 0x3e,lVar7 + 0x430,0);
    local_70 = local_d8;
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector,FRHICommandList>
              (param_2,&local_70,param_1 + 0x44,lVar7 + 0x438,0);
    local_60 = local_d8;
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    local_res18 = CONCAT44(local_res18._4_4_,(uint)*(byte *)(lVar7 + 0x444));
    local_68 = local_d8;
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    uVar1 = (uint)*(ushort *)(param_1 + 0x4e);
    if (3 < *(ushort *)(param_1 + 0x4e)) {
      uVar1 = 4;
    }
    uVar8 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      local_res20 = CONCAT44(local_res20._4_4_,(uint)*(ushort *)(param_1 + 0x4c));
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      param_5 = CONCAT44(param_5._4_4_,(uint)*(ushort *)(param_1 + 0x4a));
      uVar3 = (longlong)_Dst + uVar8;
      if (*(ulonglong *)(param_2 + 0x38) < uVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar1 + 0x10);
        _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar3 = (longlong)_Dst + uVar8;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar3;
      _guard_xfg_dispatch_icall_nop(_Dst,&local_res18,uVar8);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar6 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_143f4d340;
      *(undefined4 *)(puVar6 + 4) = (undefined4)param_5;
      *(undefined4 *)((longlong)puVar6 + 0x24) = (undefined4)local_res20;
      puVar6[2] = lVar2;
      puVar6[3] = _Dst;
      *(uint *)(puVar6 + 5) = uVar1;
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_60);
    local_58 = local_d8;
    param_5 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
      UNLOCK();
    }
    FUN_1423c2e10(param_2,&param_5,param_1 + 0x50,lVar7 + 0x44c,0);
    local_50 = local_58;
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
      UNLOCK();
      local_50 = local_d8;
    }
    FUN_1423c2e10(param_2,&local_58,param_1 + 0x56,lVar7 + 0x450,0);
    local_d0 = (undefined1  [8])0x0;
    local_c8[0] = 0;
    if (*(int *)(lVar7 + 0x448) == 0) {
      puVar4 = (undefined8 *)local_d0;
    }
    else {
      puVar4 = (undefined8 *)((longlong)local_d0 + 4);
      if (*(int *)(lVar7 + 0x448) != 1) {
        puVar4 = (undefined8 *)local_c8;
      }
    }
    *(undefined4 *)puVar4 = 0x3f800000;
    local_48 = 0;
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
      local_48 = local_d8;
    }
    SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector,FRHICommandList>
              (param_2,&local_50,param_1 + 0x5c,local_d0,0);
    local_c8[0] = DAT_1468b5d98;
    local_d0._4_4_ = DAT_1468b5d94;
    local_d0._0_4_ = DAT_1468b5d90;
    iVar5 = *(int *)(lVar7 + 0x448) + 1;
    iVar5 = iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                    (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * -3;
    if (iVar5 == 0) {
      puVar4 = (undefined8 *)local_d0;
    }
    else {
      puVar4 = (undefined8 *)((longlong)local_d0 + 4);
      if (iVar5 != 1) {
        puVar4 = (undefined8 *)local_c8;
      }
    }
    *(undefined4 *)puVar4 = 0x3f800000;
    local_40 = 0;
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
      local_40 = local_d8;
    }
    SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector,FRHICommandList>
              (param_2,&local_48,param_1 + 0x62,local_d0,0);
    local_c8[0] = DAT_1468b5d98;
    local_d0._4_4_ = DAT_1468b5d94;
    local_d0._0_4_ = DAT_1468b5d90;
    iVar5 = *(int *)(lVar7 + 0x448) + 2;
    iVar5 = iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                    (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * -3;
    if (iVar5 == 0) {
      puVar4 = (undefined8 *)local_d0;
    }
    else {
      puVar4 = (undefined8 *)((longlong)local_d0 + 4);
      if (iVar5 != 1) {
        puVar4 = (undefined8 *)local_c8;
      }
    }
    *(undefined4 *)puVar4 = 0x3f800000;
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    SetShaderValue<TRefCountPtr<FRHIVertexShader>,FVector,FRHICommandList>
              (param_2,&local_40,param_1 + 0x68,local_d0,0);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_d8);
  return;
}



// FUNCTION 1423e0360 FUN_1423e0360 body=80 status=ok
// SIG undefined FUN_1423e0360(void)

void FUN_1423e0360(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (1 < *(byte *)(param_1 + 0x24e))) && (param_2 != *(float *)(param_1 + 0x484))) {
    *(float *)(param_1 + 0x484) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 1423e03b0 FUN_1423e03b0 body=168 status=ok
// SIG undefined FUN_1423e03b0(void)

void FUN_1423e03b0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  (**(code **)(*param_1 + 0x710))(param_1,param_1[0x91]);
  param_1[0x91] = param_2;
  if (param_2 == 0) {
    lVar2 = 0;
    param_2 = 0;
  }
  else {
    lVar2 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar2 = param_1[0x91];
    if (!bVar1) {
      param_2 = 0;
    }
  }
  param_1[0x93] = param_2;
  (**(code **)(*param_1 + 0x6f8))(param_1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001423e0451. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x708))(param_1,param_1[0x91]);
  return;
}



// FUNCTION 1423e0460 FUN_1423e0460 body=62 status=ok
// SIG undefined FUN_1423e0460(void)

void FUN_1423e0460(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0x710))(param_1,param_1[0x91]);
  param_1[0x91] = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001423e0497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x740))(param_1);
  return;
}



// FUNCTION 1423e04a0 FUN_1423e04a0 body=22 status=ok
// SIG undefined FUN_1423e04a0(void)

void FUN_1423e04a0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x318) != param_2) {
    *(int *)(param_1 + 0x318) = param_2;
    *(undefined1 *)(param_1 + 0x31c) = 1;
  }
  return;
}



// FUNCTION 1423e04c0 FUN_1423e04c0 body=51 status=ok
// SIG undefined FUN_1423e04c0(void)

void FUN_1423e04c0(longlong param_1,undefined8 param_2)

{
  undefined4 uStackX_c;
  
  if (((float)param_2 != *(float *)(param_1 + 0x2ec)) ||
     (uStackX_c = (float)((ulonglong)param_2 >> 0x20), uStackX_c != *(float *)(param_1 + 0x2f0))) {
    *(undefined8 *)(param_1 + 0x2ec) = param_2;
    *(undefined1 *)(param_1 + 0x31c) = 1;
  }
  return;
}



// FUNCTION 1423e0500 FUN_1423e0500 body=44 status=ok
// SIG undefined FUN_1423e0500(void)

void FUN_1423e0500(longlong param_1,byte param_2)

{
  if (param_2 != (*(byte *)(param_1 + 0x745) >> 3 & 1)) {
    *(byte *)(param_1 + 0x745) = *(byte *)(param_1 + 0x745) & 0xf7 | param_2 << 3;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423e0530 FUN_1423e0530 body=345 status=ok
// SIG undefined FUN_1423e0530(void)

void FUN_1423e0530(longlong param_1,float *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar7 = param_2[2];
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar7 * fVar7;
  if (fVar4 == 1.0) {
    uVar3 = *(undefined8 *)param_2;
    fVar7 = param_2[2];
  }
  else if (1e-08 <= fVar4) {
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar7 = fVar7 * fVar5;
    uVar3 = CONCAT44(fVar2 * fVar5,fVar1 * fVar5);
  }
  else {
    uVar3 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    fVar7 = DAT_1468b5d98;
  }
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 1;
  *(undefined8 *)(param_1 + 0x808) = uVar3;
  *(float *)(param_1 + 0x810) = fVar7;
  if (param_3 != '\0') {
    FUN_1423e22d0(uVar3,0);
  }
  return;
}



// FUNCTION 1423e0690 FUN_1423e0690 body=115 status=ok
// SIG undefined FUN_1423e0690(void)

void FUN_1423e0690(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,char param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar1 = *param_2;
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 1;
  *(undefined8 *)(param_1 + 0x7b0) = uVar1;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x7b8) = uVar2;
  uVar2 = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x7bc) = uVar1;
  uVar1 = *param_4;
  *(undefined4 *)(param_1 + 0x7c4) = uVar2;
  uVar2 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(param_1 + 0x7dc) = uVar1;
  *(undefined4 *)(param_1 + 0x7e4) = uVar2;
  uVar1 = *param_5;
  uVar2 = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)(param_1 + 0x7e8) = uVar1;
  *(undefined4 *)(param_1 + 0x7f0) = uVar2;
  if (param_6 != '\0') {
    FUN_1423e22d0(uVar1,0);
    return;
  }
  return;
}



// FUNCTION 1423e0710 FUN_1423e0710 body=27 status=ok
// SIG undefined FUN_1423e0710(void)

void FUN_1423e0710(longlong param_1,undefined8 param_2,char param_3)

{
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 1;
  *(undefined8 *)(param_1 + 0x7d4) = param_2;
  if (param_3 != '\0') {
    FUN_1423e22d0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1423e0730 FUN_1423e0730 body=41 status=ok
// SIG undefined FUN_1423e0730(void)

void FUN_1423e0730(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 1;
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x7b0) = uVar1;
  *(undefined4 *)(param_1 + 0x7b8) = uVar2;
  if (param_3 != '\0') {
    FUN_1423e22d0(uVar1,0);
    return;
  }
  return;
}



// FUNCTION 1423e0760 FUN_1423e0760 body=28 status=ok
// SIG undefined FUN_1423e0760(void)

void FUN_1423e0760(longlong param_1,undefined4 param_2,char param_3)

{
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 1;
  *(undefined4 *)(param_1 + 2000) = param_2;
  if (param_3 != '\0') {
    FUN_1423e22d0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1423e0780 FUN_1423e0780 body=27 status=ok
// SIG undefined FUN_1423e0780(void)

void FUN_1423e0780(longlong param_1,undefined8 param_2,char param_3)

{
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 1;
  *(undefined8 *)(param_1 + 0x7c8) = param_2;
  if (param_3 != '\0') {
    FUN_1423e22d0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1423e07a0 FUN_1423e07a0 body=41 status=ok
// SIG undefined FUN_1423e07a0(void)

void FUN_1423e07a0(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 1;
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x7bc) = uVar1;
  *(undefined4 *)(param_1 + 0x7c4) = uVar2;
  if (param_3 != '\0') {
    FUN_1423e22d0(uVar1,0);
    return;
  }
  return;
}



// FUNCTION 1423e07d0 FUN_1423e07d0 body=1159 status=ok
// SIG undefined FUN_1423e07d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1423e07d0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  ulonglong *puStack_140;
  undefined1 local_138 [8];
  undefined8 local_130;
  longlong local_128;
  undefined1 local_120 [16];
  undefined1 local_110 [8];
  longlong *local_108;
  longlong local_100 [2];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [40];
  undefined1 local_70 [24];
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if (param_2 == param_1[0xe5]) {
LAB_1423e0b22:
    uVar7 = 0;
  }
  else {
    lVar6 = param_1[0x24];
    lVar10 = param_1[0x23];
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0();
      if (lVar6 != 0) goto LAB_1423e0826;
    }
    else {
LAB_1423e0826:
      cVar4 = FUN_1428cdc10(lVar6);
      if (cVar4 != '\0') {
        cVar4 = FUN_142341170(param_1);
        if ((((cVar4 == '\0') && ((*(byte *)(param_1 + 0x17) & 1) != 0)) &&
            (*(char *)((longlong)param_1 + 0x24e) == '\0')) && (lVar10 != 0)) {
          FName::FName(local_138,&DAT_14506e2ec,1);
          uVar7 = UObjectBaseUtility::GetPathName(param_1,local_100,0);
          lVar6 = FText::FromString(local_70,uVar7);
          uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_c0,L"Calling SetStaticMesh on \'{0}\' but Mobility is Static.",
                             L"StaticMeshComponent",L"SetMeshOnStatic");
          puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_a8,uVar7);
          local_58[0] = 4;
          FText::FText(local_48,lVar6);
          local_130 = *puVar8;
          local_148 = local_58;
          puStack_140 = local_28;
          local_128 = puVar8[1];
          local_30 = '\x01';
          if (local_128 != 0) {
            LOCK();
            *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
            UNLOCK();
          }
          uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_120,&local_148);
          uVar7 = FText::Format(local_d8,&local_130,uVar7);
          FText::FText(local_f0,uVar7);
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_d0 + 1;
            lVar10 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar1 = (int *)((longlong)local_d0 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_d0 + 8))(local_d0,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_120);
          if (local_30 != '\0') {
            local_30 = '\0';
            if (local_40 != (longlong *)0x0) {
              LOCK();
              plVar9 = local_40 + 1;
              lVar10 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_40)(local_40);
                LOCK();
                piVar1 = (int *)((longlong)local_40 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_40 + 8))(local_40,1);
                }
              }
            }
          }
          plVar9 = (longlong *)puVar8[1];
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar9 + 1;
            lVar10 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          plVar9 = *(longlong **)(lVar6 + 8);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar9 + 1;
            lVar6 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          uVar7 = FUN_14161fb50(local_98,local_138);
          FMessageLog::Warning(uVar7,local_110,local_f0);
          if (local_108 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_108 + 1;
            lVar6 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_108)(local_108);
              LOCK();
              piVar1 = (int *)((longlong)local_108 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_108 + 8))(local_108,1);
              }
            }
          }
          FMessageLog::~FMessageLog(local_98);
          if (local_e8 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_e8 + 1;
            lVar6 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_e8)(local_e8);
              LOCK();
              piVar1 = (int *)((longlong)local_e8 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_e8 + 8))(local_e8,1);
              }
            }
          }
          if (local_b8 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_b8 + 1;
            lVar6 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_b8)(local_b8);
              LOCK();
              piVar1 = (int *)((longlong)local_b8 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_b8 + 8))(local_b8,1);
              }
            }
          }
          if (local_100[0] != 0) {
            FMemory::Free();
          }
          goto LAB_1423e0b22;
        }
      }
    }
    param_1[0xe5] = param_2;
    FUN_1423424e0(param_1);
    FUN_14234b040(param_1);
    bVar5 = (**(code **)(*param_1 + 0x3f0))(param_1);
    *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xef;
    *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | (bVar5 & 1) << 4;
    plVar9 = (longlong *)IStreamingManager::Get();
    (**(code **)(*plVar9 + 0x70))(plVar9,param_1);
    (**(code **)(*param_1 + 0x4b8))(param_1);
    FUN_142372d60(param_1);
    if ((((*(byte *)(param_1 + 0x17) & 1) != 0) &&
        (plVar9 = (longlong *)param_1[0x23], plVar9 != (longlong *)0x0)) &&
       ((*(byte *)((longlong)param_1 + 0x2ef) & 0x40) != 0)) {
      cVar4 = (**(code **)(*param_1 + 0x460))(param_1);
      if (cVar4 != '\0') {
        cVar4 = UObjectBaseUtility::IsTemplate(param_1,0x30);
        if (cVar4 == '\0') {
          lVar6 = (**(code **)(*plVar9 + 0x148))(plVar9);
          if (lVar6 != 0) {
            lVar6 = (**(code **)(*plVar9 + 0x148))(plVar9);
            lVar10 = FUN_14233fea0(param_1);
            if ((lVar10 == *(longlong *)(lVar6 + 0x1b8)) &&
               ((param_1[0x23] == 0 || ((*(byte *)(param_1[0x23] + 0x93) & 4) != 0)))) {
              lVar6 = param_1[0x24];
              if (lVar6 == 0) {
                lVar6 = FUN_1423407b0(param_1);
              }
              FUN_1428daf80(lVar6,0,param_1);
            }
          }
        }
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 1423e0c60 FUN_1423e0c60 body=122 status=ok
// SIG undefined FUN_1423e0c60(void)

void FUN_1423e0c60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FText::FromString(local_28);
  FText::operator=(param_1 + 0x6f0,uVar5);
  FUN_1423ca740(param_1);
  FUN_1423424e0(param_1);
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
  return;
}



// FUNCTION 1423e0ce0 FUN_1423e0ce0 body=34 status=ok
// SIG undefined FUN_1423e0ce0(void)

void FUN_1423e0ce0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x708) = param_2;
  FUN_1423ca740();
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 1423e0d10 FUN_1423e0d10 body=33 status=ok
// SIG undefined FUN_1423e0d10(void)

void FUN_1423e0d10(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x71c) = param_2;
  FUN_1423ca740();
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 1423e0d40 FUN_1423e0d40 body=24 status=ok
// SIG undefined FUN_1423e0d40(void)

void FUN_1423e0d40(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x2d8) != param_2) {
    *(longlong *)(param_1 + 0x2d8) = param_2;
    *(undefined1 *)(param_1 + 0x31c) = 1;
  }
  return;
}



// FUNCTION 1423e0d60 FUN_1423e0d60 body=82 status=ok
// SIG undefined FUN_1423e0d60(void)

void FUN_1423e0d60(longlong param_1,float *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((((*param_2 != *(float *)(param_1 + 0x2f4)) || (param_2[1] != *(float *)(param_1 + 0x2f8))) ||
      (param_2[2] != *(float *)(param_1 + 0x2fc))) || (param_2[3] != *(float *)(param_1 + 0x300))) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)(param_2 + 2);
    fVar1 = param_2[4];
    *(undefined1 *)(param_1 + 0x31c) = 1;
    *(undefined8 *)(param_1 + 0x2f4) = uVar2;
    *(undefined8 *)(param_1 + 0x2fc) = uVar3;
    *(float *)(param_1 + 0x304) = fVar1;
  }
  return;
}



// FUNCTION 1423e0dc0 FUN_1423e0dc0 body=35 status=ok
// SIG undefined FUN_1423e0dc0(void)

void FUN_1423e0dc0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x734) = param_2;
  FUN_1423ca740();
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 1423e0df0 FUN_1423e0df0 body=33 status=ok
// SIG undefined FUN_1423e0df0(void)

void FUN_1423e0df0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x719) = param_2;
  FUN_1423ca740();
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 1423e0e20 FUN_1423e0e20 body=35 status=ok
// SIG undefined FUN_1423e0e20(void)

void FUN_1423e0e20(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x728) = param_2;
  FUN_1423ca740();
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 1423e0e50 FUN_1423e0e50 body=35 status=ok
// SIG undefined FUN_1423e0e50(void)

void FUN_1423e0e50(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x720) = param_2;
  FUN_1423ca740();
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 1423e0e80 FUN_1423e0e80 body=35 status=ok
// SIG undefined FUN_1423e0e80(void)

void FUN_1423e0e80(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x724) = param_2;
  FUN_1423ca740();
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 1423e0eb0 FUN_1423e0eb0 body=611 status=ok
// SIG undefined FUN_1423e0eb0(void)

void FUN_1423e0eb0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x88) = 1;
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
          goto LAB_1423e1067;
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
LAB_1423e1067:
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



// FUNCTION 1423e1120 SetupViewInfos body=848 status=ok
// SIG undefined SetupViewInfos(void)

void IStreamingManager::SetupViewInfos(undefined8 param_1,float param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar6 = 0;
  DAT_146af1318 = 0;
  if (DAT_146af131c != DAT_146af1338 + DAT_146af1348 + DAT_146af1328) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (&DAT_146af1310);
  }
  iVar9 = DAT_146af1328;
  uVar1 = DAT_146af103c;
  uVar10 = 0x44a00000;
  uVar12 = 0x44beae39;
  lVar4 = DAT_146af1320;
  if ((0 < DAT_146af1328) || (lVar4 = DAT_146af1330, 0 < DAT_146af1338)) {
    uVar12 = *(undefined4 *)(lVar4 + 0x10);
    uVar10 = *(undefined4 *)(lVar4 + 0xc);
  }
  DAT_146af103c = 0;
  uVar5 = uVar6;
  uVar8 = uVar6;
  if (0 < DAT_146af1348) {
    do {
      lVar4 = DAT_146af1340 + uVar8;
      FWeakObjectPtr::operator=(&local_res18,0);
      FUN_1423c8380(param_1,lVar4,uVar10,uVar12,*(undefined4 *)(lVar4 + 0xc),
                    *(undefined1 *)(lVar4 + 0x14),*(undefined4 *)(lVar4 + 0x10),&local_res18);
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
      uVar8 = uVar8 + 0x18;
    } while ((int)uVar7 < DAT_146af1348);
  }
  fVar11 = 1.0;
  DAT_146af103c = uVar1;
  if ((1 < iVar9) && (cVar2 = FUN_142880f60(DAT_146b17150,0), cVar2 != '\0')) {
    fVar11 = 0.75;
  }
  uVar5 = uVar6;
  uVar8 = uVar6;
  if (0 < DAT_146af1338) {
    do {
      lVar4 = DAT_146af1330 + uVar8;
      if (*(char *)(lVar4 + 0x1c) == '\0') {
        local_res18 = *(undefined4 *)(lVar4 + 0x20);
        local_res1c = *(undefined4 *)(lVar4 + 0x24);
        AddViewInfoToArray(&DAT_146af1310,lVar4,fVar11 * *(float *)(lVar4 + 0xc),
                           *(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x14),0,
                           *(undefined4 *)(lVar4 + 0x18),&local_res18);
      }
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
      uVar8 = uVar8 + 0x28;
    } while ((int)uVar7 < DAT_146af1338);
  }
  uVar5 = uVar6;
  uVar8 = uVar6;
  if (0 < DAT_146af1328) {
    do {
      lVar4 = DAT_146af1320 + uVar8;
      if (*(char *)(lVar4 + 0x1c) == '\0') {
        local_res18 = *(undefined4 *)(lVar4 + 0x20);
        local_res1c = *(undefined4 *)(lVar4 + 0x24);
        AddViewInfoToArray(&DAT_146af1310,lVar4,fVar11 * *(float *)(lVar4 + 0xc),
                           *(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x14),0,
                           *(undefined4 *)(lVar4 + 0x18),&local_res18);
      }
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
      uVar8 = uVar8 + 0x28;
    } while ((int)uVar7 < DAT_146af1328);
  }
  uVar5 = uVar6;
  if (0 < DAT_146af1338) {
    do {
      iVar9 = (int)uVar5;
      fVar11 = *(float *)(uVar6 + 0x18 + DAT_146af1330) - param_2;
      *(float *)(uVar6 + 0x18 + DAT_146af1330) = fVar11;
      if (fVar11 <= 0.0) {
        iVar3 = (DAT_146af1338 - iVar9) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(DAT_146af1330 + (longlong)iVar9 * 0x28),
                     (void *)(DAT_146af1330 + (longlong)(DAT_146af1338 - iVar3) * 0x28),
                     (longlong)iVar3 * 0x28);
        }
        DAT_146af1338 = DAT_146af1338 + -1;
        TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(&DAT_146af1330);
        iVar9 = iVar9 + -1;
        uVar6 = uVar6 - 0x28;
      }
      uVar6 = uVar6 + 0x28;
      uVar5 = (ulonglong)(iVar9 + 1U);
    } while ((int)(iVar9 + 1U) < DAT_146af1338);
  }
  return;
}



// FUNCTION 1423e1470 FUN_1423e1470 body=656 status=ok
// SIG undefined FUN_1423e1470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423e1470(longlong *param_1,float param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint *puVar9;
  float fVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [4];
  uint local_a4;
  longlong local_a0;
  uint local_98;
  int local_94;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  FUN_1423d1f00(param_1,&local_b0);
  if (local_94 < *(int *)(local_a0 + 0x18)) {
    do {
      FUN_140859ed0(&local_88,local_b8,(longlong)local_94 * 0x10 + *local_b0,0);
      local_98 = local_98 & ~local_a4;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_a8);
    } while (local_94 < *(int *)(local_a0 + 0x18));
  }
  FUN_1423d1f00(param_1,&local_b0);
  if (*(int *)(local_a0 + 0x18) <= local_94) {
LAB_1423e16b8:
    local_40 = 0;
    if (local_48 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
    return;
  }
LAB_1423e1550:
  puVar9 = (uint *)((longlong)local_94 * 0x10 + *local_b0);
  if ((int)local_80 != local_54) {
    uVar1 = *puVar9;
    puVar7 = local_50;
    if (local_48 != (undefined1 *)0x0) {
      puVar7 = local_48;
    }
    for (iVar3 = *(int *)(puVar7 + (longlong)(int)(local_40 - 1U & uVar1) * 4); iVar3 != -1;
        iVar3 = *(int *)(local_88 + 4 + (longlong)iVar3 * 0xc)) {
      if (*(uint *)(local_88 + (longlong)iVar3 * 0xc) == uVar1) {
        if (iVar3 != -1) {
          cVar2 = (**(code **)(*param_1 + 0x10))(param_1,uVar1);
          if (cVar2 == '\0') {
            fVar10 = 0.0;
            goto LAB_1423e166c;
          }
          iVar3 = (**(code **)(*param_1 + 8))(param_1);
          if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar3) {
            FKeyHandleMap::EnsureAllIndicesHaveHandles(param_1 + 1,iVar3);
          }
          if ((int)param_1[2] == *(int *)((longlong)param_1 + 0x3c)) goto LAB_1423e164d;
          plVar5 = (longlong *)param_1[9];
          if ((longlong *)param_1[9] == (longlong *)0x0) {
            plVar5 = param_1 + 8;
          }
          uVar4 = *(uint *)((longlong)plVar5 +
                           ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar1) * 4);
          if (uVar4 == 0xffffffff) goto LAB_1423e164d;
          goto LAB_1423e1630;
        }
        break;
      }
    }
  }
  goto LAB_1423e167f;
  while (uVar4 = puVar8[2], uVar4 != 0xffffffff) {
LAB_1423e1630:
    puVar8 = (uint *)((longlong)(int)uVar4 * 0x10 + param_1[1]);
    if (*puVar8 == uVar1) {
      if (uVar4 != 0xffffffff) goto LAB_1423e1650;
      break;
    }
  }
LAB_1423e164d:
  puVar8 = (uint *)0x0;
LAB_1423e1650:
  puVar6 = puVar8 + 1;
  if (puVar8 == (uint *)0x0) {
    puVar6 = (uint *)0x0;
  }
  fVar10 = *(float *)((longlong)(int)*puVar6 * 0x1c + 4 + param_1[0xc]);
LAB_1423e166c:
  FUN_1423df9f0(param_1,local_b8,*puVar9,fVar10 + param_2);
LAB_1423e167f:
  local_98 = local_98 & ~local_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_a8);
  if (*(int *)(local_a0 + 0x18) <= local_94) goto LAB_1423e16b8;
  goto LAB_1423e1550;
}



// FUNCTION 1423e1700 FUN_1423e1700 body=51 status=ok
// SIG undefined FUN_1423e1700(void)

undefined8 FUN_1423e1700(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = FUN_1419ef5f0(uVar1);
  if ((1 < iVar2) && ((0x1f < uVar1 || ((0xc0000014U >> (uVar1 & 0x1f) & 1) == 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1423e1740 ShouldCompilePermutation body=108 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8
FInstancedStaticMeshVertexFactory::ShouldCompilePermutation
          (undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x130))(param_2);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 200))(param_2), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = BuildSettings::IsPromotedBuild(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 1423e17b0 FUN_1423e17b0 body=26 status=ok
// SIG undefined FUN_1423e17b0(void)

ulonglong FUN_1423e17b0(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001423e17c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x458) + 0x40))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1423e17d0 FUN_1423e17d0 body=42 status=ok
// SIG undefined FUN_1423e17d0(void)

void FUN_1423e17d0(void)

{
  if (DAT_146af1738 != (undefined8 *)0x0) {
    (**(code **)*DAT_146af1738)(DAT_146af1738,1);
    DAT_146af1738 = (undefined8 *)&DAT_ffffffffffffffff;
  }
  return;
}



// FUNCTION 1423e1800 FUN_1423e1800 body=42 status=ok
// SIG undefined FUN_1423e1800(void)

void FUN_1423e1800(void)

{
  if (DAT_146af1040 != (undefined8 *)0x0) {
    (**(code **)*DAT_146af1040)(DAT_146af1040,1);
  }
  DAT_146af1040 = (undefined8 *)0x0;
  return;
}



// FUNCTION 1423e1830 SplineEvalDir body=798 status=ok
// SIG undefined SplineEvalDir(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * SplineEvalDir(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     float param_6)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = DAT_1468b5d98;
  fVar1 = param_5[1];
  fVar6 = param_5[2];
  fVar4 = *param_5;
  fVar7 = param_6 * param_6;
  fVar5 = (float)*(undefined8 *)param_3 +
          (((*param_2 * -6.0 - *param_3 * 4.0) - (fVar4 + fVar4)) + *param_4 * 6.0) * param_6 +
          (((*param_3 + fVar4) * 3.0 + *param_2 * 6.0) - *param_4 * 6.0) * fVar7;
  fVar4 = (((param_2[1] * -6.0 - param_3[1] * 4.0) - (fVar1 + fVar1)) + param_4[1] * 6.0) * param_6
          + (((param_3[1] + fVar1) * 3.0 + param_2[1] * 6.0) - param_4[1] * 6.0) * fVar7 +
          param_3[1];
  fVar6 = (((param_2[2] * -6.0 - param_3[2] * 4.0) - (fVar6 + fVar6)) + param_4[2] * 6.0) * param_6
          + (((param_3[2] + fVar6) * 3.0 + param_2[2] * 6.0) - param_4[2] * 6.0) * fVar7 +
          param_3[2];
  fVar1 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  if (fVar1 == 1.0) {
    *(ulonglong *)param_1 = CONCAT44(fVar4,fVar5);
    param_1[2] = fVar6;
  }
  else if (1e-08 <= fVar1) {
    auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar2 = auVar3._0_4_;
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    *param_1 = fVar5 * fVar2;
    param_1[1] = fVar4 * fVar2;
    param_1[2] = fVar6 * fVar2;
  }
  else {
    *(undefined8 *)param_1 = _DAT_1468b5d90;
    param_1[2] = fVar2;
  }
  return param_1;
}



// FUNCTION 1423e1b60 StreamAllResources body=131 status=ok
// SIG undefined StreamAllResources(void)

void FStreamingManagerCollection::StreamAllResources(longlong *param_1,float param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1464ca1a4;
  DAT_1464ca1a4 = 0xbf800000;
  FUN_141ee24f0(0);
  if (ABS(param_2) <= 1e-08) {
    param_2 = *(float *)(param_1 + 5);
  }
  (**(code **)(*param_1 + 0x10))(param_1,0,1);
  (**(code **)(*param_1 + 0x20))(param_1,param_2,1);
  DAT_1464ca1a4 = uVar1;
  return;
}



// FUNCTION 1423e1bf0 FUN_1423e1bf0 body=52 status=ok
// SIG undefined FUN_1423e1bf0(void)

undefined8 FUN_1423e1bf0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[0xe5];
  if (lVar1 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x6b8))();
    if (lVar2 == *(longlong *)(lVar1 + 0xa0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1423e1c30 FUN_1423e1c30 body=124 status=ok
// SIG undefined FUN_1423e1c30(void)

undefined8 FUN_1423e1c30(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *local_18;
  int local_10;
  
  (**(code **)(*param_1 + 0x8e8))(param_1,&local_18);
  plVar1 = local_18 + local_10;
  plVar3 = local_18;
  do {
    if (plVar3 == plVar1) {
      uVar4 = 1;
LAB_1423e1c86:
      if (local_18 != (longlong *)0x0) {
        FMemory::Free(local_18);
      }
      return uVar4;
    }
    if (((longlong *)*plVar3 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*(longlong *)*plVar3 + 0x4a0))(), cVar2 == '\0')) {
      uVar4 = 0;
      goto LAB_1423e1c86;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}



// FUNCTION 1423e1cb0 Tick body=75 status=ok
// SIG undefined Tick(void)

void FStreamingManagerCollection::Tick(longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  (**(code **)(*param_1 + 0xa0))(param_1,0);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  DAT_146af103c = 1;
  return;
}



// FUNCTION 1423e1d00 Tick body=22 status=ok
// SIG undefined Tick(void)

void IStreamingManager::Tick(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  DAT_146af103c = 1;
  return;
}



// FUNCTION 1423e1d20 FUN_1423e1d20 body=1042 status=ok
// SIG undefined FUN_1423e1d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423e1d20(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong lVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [48];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  FUN_142357eb0();
  if ((((*(undefined8 **)(DAT_146b17150 + 0xab8) != (undefined8 *)0x0) &&
       (cVar2 = (**(code **)**(undefined8 **)(DAT_146b17150 + 0xab8))(), cVar2 != '\0')) &&
      (plVar5 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x80))(),
      plVar5 != (longlong *)0x0)) && (lVar7 = *(longlong *)(param_1 + 0x2d8), lVar7 != 0)) {
    if (*(char *)(param_1 + 0x314) == '\0') {
      uVar9 = *(undefined4 *)(param_1 + 0x210);
      uVar10 = *(undefined4 *)(param_1 + 0x214);
      uVar11 = *(undefined4 *)(param_1 + 0x218);
      uVar12 = *(undefined4 *)(param_1 + 0x21c);
      uVar13 = *(undefined4 *)(param_1 + 0x220);
      uVar14 = *(undefined4 *)(param_1 + 0x224);
      uVar15 = *(undefined4 *)(param_1 + 0x228);
      uVar16 = *(undefined4 *)(param_1 + 0x22c);
      uVar17 = *(undefined4 *)(param_1 + 0x230);
      uVar18 = *(undefined4 *)(param_1 + 0x234);
      uVar19 = *(undefined4 *)(param_1 + 0x238);
      uVar20 = *(undefined4 *)(param_1 + 0x23c);
    }
    else {
      puVar6 = (undefined4 *)FUN_14238d0c0(param_1,local_a8);
      lVar7 = *(longlong *)(param_1 + 0x2d8);
      uVar9 = *puVar6;
      uVar10 = puVar6[1];
      uVar11 = puVar6[2];
      uVar12 = puVar6[3];
      uVar13 = puVar6[4];
      uVar14 = puVar6[5];
      uVar15 = puVar6[6];
      uVar16 = puVar6[7];
      uVar17 = puVar6[8];
      uVar18 = puVar6[9];
      uVar19 = puVar6[10];
      uVar20 = puVar6[0xb];
    }
    cVar2 = *(char *)(param_1 + 0x31c);
    local_d8 = uVar9;
    uStack_d4 = uVar10;
    uStack_d0 = uVar11;
    uStack_cc = uVar12;
    local_c8 = uVar13;
    uStack_c4 = uVar14;
    uStack_c0 = uVar15;
    uStack_bc = uVar16;
    local_b8 = uVar17;
    uStack_b4 = uVar18;
    uStack_b0 = uVar19;
    uStack_ac = uVar20;
    if ((cVar2 == '\0') &&
       ((*(byte *)(param_1 + 0x360) != (*(byte *)(param_1 + 0x24c) >> 5 & 1) ||
        (iVar3 = _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x330),&local_d8,0x30), iVar3 != 0
        )))) {
      *(undefined1 *)(param_1 + 0x31c) = 1;
      cVar2 = '\x01';
    }
    bVar8 = *(byte *)(param_1 + 0x24c) >> 5 & 1;
    if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x60) == 0)) {
      bVar8 = 0;
    }
    if (cVar2 != '\0') {
      if (bVar8 == 0) {
        if (*(int *)(param_1 + 800) != 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          *(undefined4 *)(param_1 + 800) = 0;
        }
      }
      else {
        local_134 = *(undefined4 *)(param_1 + 0x2f0);
        local_114 = *(undefined4 *)(param_1 + 0x318);
        local_f8 = 0;
        uStack_f0 = 0;
        local_138 = *(undefined4 *)(param_1 + 0x2ec);
        local_120 = *(undefined4 *)(param_1 + 0x304);
        local_11c = 0;
        local_110 = 2;
        local_108 = 0x3f800000;
        local_104 = 0x3f800000;
        local_100 = 1.0;
        local_e8 = 0;
        local_130 = *(undefined8 *)(param_1 + 0x2f4);
        uStack_128 = *(undefined8 *)(param_1 + 0x2fc);
        local_168 = uVar9;
        local_164 = uVar10;
        local_160 = uVar11;
        local_15c = uVar12;
        local_158 = uVar13;
        uStack_154 = uVar14;
        uStack_150 = uVar15;
        uStack_14c = uVar16;
        local_148 = uVar17;
        uStack_144 = uVar18;
        uStack_140 = uVar19;
        uStack_13c = uVar20;
        if (lVar7 != 0) {
          TRefCountPtr<FRHITexture>::operator=
                    (&local_f8,*(undefined8 *)(*(longlong *)(lVar7 + 0x60) + 0x30));
        }
        if (*(longlong *)(param_1 + 0x2e0) != 0) {
          TRefCountPtr<FRHITexture>::operator=
                    (&uStack_f0,
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x60) + 0x30));
        }
        uVar1 = *(uint *)(param_1 + 0x2d0);
        local_108 = *(undefined4 *)(param_1 + 0x308);
        local_104 = *(undefined4 *)(param_1 + 0x30c);
        cVar2 = *(char *)(param_1 + 0x314);
        local_e8 = local_e8 |
                   (*(uint *)(param_1 + 0x2e8) & 1 | uVar1 & 2) << 2 | uVar1 >> 1 & 2 | uVar1 & 1;
        local_100 = (float)*(int *)(param_1 + 0x310);
        if (cVar2 == '\0') {
          local_110 = (ulonglong)local_110._4_4_ << 0x20;
        }
        else if (cVar2 == '\x01') {
          local_110 = CONCAT44(local_110._4_4_,1);
        }
        else if (cVar2 == '\x02') {
          local_110 = CONCAT44(local_110._4_4_,2);
        }
        cVar2 = *(char *)(param_1 + 0x315);
        if (cVar2 == '\0') {
          local_110 = local_110 & 0xffffffff;
        }
        else if (cVar2 == '\x01') {
          local_110 = CONCAT44(1,(undefined4)local_110);
        }
        else if (cVar2 == '\x02') {
          local_110 = CONCAT44(2,(undefined4)local_110);
        }
        if (*(int *)(param_1 + 800) == 0) {
          uVar4 = (**(code **)(*plVar5 + 8))(plVar5,&local_168);
          *(undefined4 *)(param_1 + 800) = uVar4;
        }
        else {
          (**(code **)(*plVar5 + 0x18))(plVar5,*(int *)(param_1 + 800),&local_168);
        }
        TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&uStack_f0);
        TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_f8);
      }
      *(undefined4 *)(param_1 + 0x330) = uVar9;
      *(undefined4 *)(param_1 + 0x334) = uVar10;
      *(undefined4 *)(param_1 + 0x338) = uVar11;
      *(undefined4 *)(param_1 + 0x33c) = uVar12;
      *(undefined4 *)(param_1 + 0x340) = uVar13;
      *(undefined4 *)(param_1 + 0x344) = uVar14;
      *(undefined4 *)(param_1 + 0x348) = uVar15;
      *(undefined4 *)(param_1 + 0x34c) = uVar16;
      *(undefined4 *)(param_1 + 0x350) = uVar17;
      *(undefined4 *)(param_1 + 0x354) = uVar18;
      *(undefined4 *)(param_1 + 0x358) = uVar19;
      *(undefined4 *)(param_1 + 0x35c) = uVar20;
      *(byte *)(param_1 + 0x360) = bVar8;
      *(undefined1 *)(param_1 + 0x31c) = 0;
    }
    if ((*(char *)(param_1 + 0x31d) != '\0') && (*(int *)(param_1 + 800) != 0)) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
      *(undefined1 *)(param_1 + 0x31d) = 0;
    }
  }
  return;
}



// FUNCTION 1423e2140 FUN_1423e2140 body=64 status=ok
// SIG undefined FUN_1423e2140(void)

void FUN_1423e2140(longlong *param_1)

{
  if ((longlong *)param_1[0x91] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x91] + 0x718))();
    (**(code **)(*param_1 + 0x750))(param_1,0);
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x9e,param_1);
  return;
}



// FUNCTION 1423e2180 FUN_1423e2180 body=17 status=ok
// SIG undefined FUN_1423e2180(void)

void FUN_1423e2180(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x840) & 1) != 0) {
    FUN_1423e22d0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1423e21a0 UpdateOrAddKey body=291 status=ok
// SIG undefined UpdateOrAddKey(void)

undefined4 *
FRichCurve::UpdateOrAddKey
          (float param_1,undefined4 *param_2,float param_3,undefined4 param_4,undefined1 param_5,
          float param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong in_RCX;
  ulonglong uVar5;
  float *in_R8;
  int local_res8 [2];
  int local_28 [2];
  undefined1 local_20 [8];
  int *local_18;
  int *local_10;
  
  uVar2 = 0;
  if (0 < *(int *)(in_RCX + 0x68)) {
    in_R8 = (float *)(*(longlong *)(in_RCX + 0x60) + 4);
    uVar5 = uVar2;
    do {
      param_1 = ABS(*in_R8 - param_3);
      local_28[0] = (int)uVar5;
      if (param_1 <= param_6) {
        lVar1 = in_RCX + 8;
        *(undefined4 *)((longlong)local_28[0] * 0x1c + 8 + *(longlong *)(in_RCX + 0x60)) = param_4;
        lVar3 = TMapBase<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>_>
                ::FindKey(lVar1,uVar5);
        if (lVar3 == 0) {
          DAT_146531fa0 = DAT_146531fa0 + 1;
          local_18 = local_res8;
          local_10 = local_28;
          local_res8[0] = DAT_146531fa0;
          TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>(lVar1,local_20,&local_18,0);
        }
        puVar4 = (undefined4 *)
                 TMapBase<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>_>
                 ::FindKey(lVar1,uVar5);
        *param_2 = *puVar4;
        return param_2;
      }
      if (param_3 < *in_R8) break;
      uVar5 = (ulonglong)(local_28[0] + 1);
      uVar2 = uVar2 + 1;
      in_R8 = in_R8 + 7;
    } while ((longlong)uVar2 < (longlong)*(int *)(in_RCX + 0x68));
  }
  DAT_146531fa0 = DAT_146531fa0 + 1;
  AddKey(param_1,param_2,in_R8,param_4,param_5,DAT_146531fa0);
  return param_2;
}



// FUNCTION 1423e22d0 FUN_1423e22d0 body=1223 status=ok
// SIG undefined FUN_1423e22d0(void)

void FUN_1423e22d0(longlong *param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  char cVar17;
  DWORD DVar18;
  DWORD *pDVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  int iVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  LARGE_INTEGER local_res8 [2];
  longlong local_res18;
  LARGE_INTEGER local_res20;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  
  plVar21 = (longlong *)0x0;
  if (((DAT_146531ec0 == 0) || ((*(byte *)(param_1 + 0x17) & 2) == 0)) || (param_1[200] == 0)) {
    if (param_2 == '\0') {
      FUN_1423424e0();
    }
    else {
      FUN_14234b090();
    }
  }
  else {
    if (param_2 == '\0') {
      UActorComponent::MarkRenderDynamicDataDirty();
    }
    else {
      (**(code **)(*param_1 + 0x2f0))();
    }
    fVar26 = 1.0;
    lVar4 = param_1[200];
    fVar25 = 1.0;
    if (param_1[0xe5] != 0) {
      fVar25 = *(float *)((longlong)param_1 + 0x81c);
      if (1e-08 < ABS(fVar25 - *(float *)(param_1 + 0x104))) {
        fVar26 = 1.0 / (*(float *)(param_1 + 0x104) - fVar25);
        fVar25 = fVar25 * fVar26;
      }
      else {
        UStaticMesh::GetBounds(param_1[0xe5],&local_d8);
        cVar17 = (char)param_1[0x103];
        if ((cVar17 != '\0') && (local_cc = local_c8, cVar17 != '\x01')) {
          local_cc = local_c4;
        }
        fVar26 = 0.5 / local_cc;
        if (cVar17 == '\0') {
          fVar25 = local_d8 * fVar26 - 0.5;
        }
        else if (cVar17 == '\x01') {
          fVar25 = local_d4 * fVar26 - 0.5;
        }
        else {
          fVar25 = local_d0 * fVar26 - 0.5;
        }
      }
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar17 = FUN_1415ad720(&DAT_1468e2448), cVar17 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar18 = GetCurrentThreadId(), DVar18 == DAT_1468c21c0)))) {
      bVar3 = *(byte *)(param_1 + 0x103);
      lVar16 = param_1[0x102];
      lVar24 = param_1[0x100];
      lVar5 = param_1[0x101];
      lVar6 = param_1[0xf6];
      lVar7 = param_1[0xf7];
      lVar8 = param_1[0xf8];
      lVar9 = param_1[0xf9];
      lVar10 = param_1[0xfa];
      lVar11 = param_1[0xfb];
      lVar12 = param_1[0xfc];
      lVar13 = param_1[0xfd];
      lVar14 = param_1[0xfe];
      lVar15 = param_1[0xff];
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res20);
      *(longlong *)(lVar4 + 0x3e0) = lVar6;
      *(longlong *)(lVar4 + 1000) = lVar7;
      *(longlong *)(lVar4 + 0x3f0) = lVar8;
      *(longlong *)(lVar4 + 0x3f8) = lVar9;
      *(longlong *)(lVar4 + 0x400) = lVar10;
      *(longlong *)(lVar4 + 0x408) = lVar11;
      *(longlong *)(lVar4 + 0x410) = lVar12;
      *(longlong *)(lVar4 + 0x418) = lVar13;
      *(longlong *)(lVar4 + 0x420) = lVar14;
      *(longlong *)(lVar4 + 0x428) = lVar15;
      *(uint *)(lVar4 + 0x448) = (uint)bVar3;
      *(longlong *)(lVar4 + 0x430) = lVar24;
      *(longlong *)(lVar4 + 0x438) = lVar5;
      *(int *)(lVar4 + 0x440) = (int)lVar16;
      *(float *)(lVar4 + 0x450) = fVar26;
      *(float *)(lVar4 + 0x44c) = fVar25;
      QueryPerformanceCounter(local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
    }
    else {
      pDVar19 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar20 = TlsGetValue(*pDVar19);
      if (plVar20 == (longlong *)0x0) {
        plVar20 = (longlong *)operator_new(0x18);
        if (plVar20 != (longlong *)0x0) {
          *plVar20 = 0;
          plVar20[1] = 0;
          *(undefined4 *)(plVar20 + 2) = 0;
          plVar21 = plVar20;
        }
        TlsSetValue(*pDVar19,plVar21);
        plVar20 = plVar21;
      }
      plVar21 = (longlong *)plVar20[1];
      if (plVar21 == (longlong *)0x0) {
        plVar21 = (longlong *)*plVar20;
        if (plVar21 == (longlong *)0x0) {
          plVar21 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar19 + 2);
          plVar20[1] = (longlong)plVar21;
          if (plVar21 == (longlong *)0x0) {
            puVar22 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar20[1] = (longlong)puVar22;
            lVar24 = 0x1f;
            do {
              puVar2 = puVar22 + 0x20;
              *puVar22 = puVar2;
              lVar24 = lVar24 + -1;
              puVar22 = puVar2;
            } while (lVar24 != 0);
            *puVar2 = 0;
            plVar21 = (longlong *)plVar20[1];
          }
          iVar23 = 0x20;
          *(undefined4 *)(plVar20 + 2) = 0x20;
        }
        else {
          iVar23 = 0x20;
          plVar20[1] = (longlong)plVar21;
          *(undefined4 *)(plVar20 + 2) = 0x20;
          *plVar20 = 0;
        }
      }
      else {
        iVar23 = (int)plVar20[2];
      }
      plVar20[1] = *plVar21;
      *(int *)(plVar20 + 2) = iVar23 + -1;
      *plVar21 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar21 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar21 + 0xc) = 1;
      *plVar21 = (longlong)&PTR__scalar_deleting_destructor__145072470;
      *(undefined1 *)(plVar21 + 0x11) = 0;
      plVar21[0x12] = 0;
      lVar24 = param_1[0x103];
      plVar21[2] = lVar4;
      lVar4 = param_1[0xf7];
      plVar21[3] = param_1[0xf6];
      plVar21[4] = lVar4;
      lVar4 = param_1[0xf9];
      plVar21[5] = param_1[0xf8];
      plVar21[6] = lVar4;
      lVar4 = param_1[0xfb];
      plVar21[7] = param_1[0xfa];
      plVar21[8] = lVar4;
      lVar4 = param_1[0xfd];
      plVar21[9] = param_1[0xfc];
      plVar21[10] = lVar4;
      lVar4 = param_1[0xff];
      plVar21[0xb] = param_1[0xfe];
      plVar21[0xc] = lVar4;
      plVar21[0xd] = param_1[0x100];
      *(char *)(plVar21 + 0xe) = (char)lVar24;
      lVar4 = param_1[0x101];
      *(longlong *)((longlong)plVar21 + 0x74) = lVar4;
      lVar24 = param_1[0x102];
      *(float *)(plVar21 + 0x10) = fVar26;
      *(float *)((longlong)plVar21 + 0x84) = fVar25;
      *(int *)((longlong)plVar21 + 0x7c) = (int)lVar24;
      lVar24 = plVar21[0x12];
      piVar1 = (int *)(lVar24 + 0x48);
      if (lVar24 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res18 = lVar24;
      FUN_1423e0eb0((int)lVar4,0,0xff,1,0,0);
      if (lVar24 != 0) {
        LOCK();
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          FGraphEvent::Recycle(local_res18);
        }
      }
    }
  }
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  FUN_14234b040(param_1);
  *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) & 0xfffffffe;
  return;
}



// FUNCTION 1423e27a0 UpdateResourceStreaming body=174 status=ok
// SIG undefined UpdateResourceStreaming(void)

void FStreamingManagerCollection::UpdateResourceStreaming
               (longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  IStreamingManager::SetupViewInfos();
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        if (0 < iVar2) {
          FUN_141ee24f0(0);
        }
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x18)) {
          lVar3 = 0;
          do {
            plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x10));
            (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
            iVar4 = iVar4 + 1;
            lVar3 = lVar3 + 8;
          } while (iVar4 < *(int *)(param_1 + 0x18));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x20));
    }
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  return;
}



// FUNCTION 1423e2850 FUN_1423e2850 body=248 status=ok
// SIG undefined FUN_1423e2850(void)

char FUN_1423e2850(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((param_1[0xe5] == 0) || (*(longlong *)(param_1[0xe5] + 0x38) == 0)) {
    return '\0';
  }
  cVar2 = '\x01';
  iVar6 = 0;
  lVar8 = 0;
  do {
    if ((int)(*(longlong **)(param_1[0xe5] + 0x38))[1] <= iVar6) {
      return cVar2;
    }
    iVar5 = 0;
    lVar1 = *(longlong *)(lVar8 + **(longlong **)(param_1[0xe5] + 0x38));
    if (cVar2 != '\0') {
      lVar7 = 0;
      do {
        if (*(int *)(lVar1 + 0x480) <= iVar5) break;
        plVar4 = (longlong *)
                 (**(code **)(*param_1 + 0x560))
                           (param_1,*(undefined4 *)(lVar7 + *(longlong *)(lVar1 + 0x478)));
        if (plVar4 == (longlong *)0x0) {
LAB_1423e2909:
          cVar2 = '\0';
        }
        else {
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x290))(plVar4);
          if ((plVar4 == (longlong *)0x0) ||
             (iVar3 = (**(code **)(*plVar4 + 0x468))(plVar4), iVar3 != 0)) goto LAB_1423e2909;
          cVar2 = '\x01';
        }
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + 0x18;
      } while (cVar2 != '\0');
    }
    iVar6 = iVar6 + 1;
    lVar8 = lVar8 + 8;
    if (cVar2 == '\0') {
      return '\0';
    }
  } while( true );
}



// FUNCTION 1423e2950 FUN_1423e2950 body=62 status=ok
// SIG undefined FUN_1423e2950(void)

undefined8 FUN_1423e2950(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x940))();
  if (((cVar1 != '\0') && (0 < param_2)) && (0 < param_3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1423e2990 operator<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_> body=247 status=ok
// SIG undefined operator<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
TKeyInitializer<FNetworkGUID_const_&>::
operator<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>
          (undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0xe] = 0xffffffff;
  param_2[0xf] = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_2[0x14] = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 2,&local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 0x10,local_40,4);
  }
  if (*(longlong *)(param_2 + 0x12) != 0) {
    FMemory::Free();
  }
  *(longlong *)(param_2 + 0x12) = lVar1;
  param_2[0x14] = local_30;
  local_38 = 0;
  local_30 = 0;
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 1423e2a90 AddUniqueImpl<UProperty_*_const_&> body=192 status=ok
// SIG undefined AddUniqueImpl<UProperty_*_const_&>(void)

ulonglong TArray<UProperty_*,TInlineAllocator<32,FDefaultAllocator>_>::
          AddUniqueImpl<UProperty_*_const_&>(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  uVar1 = *(uint *)(param_1 + 0x21);
  plVar4 = (longlong *)param_1[0x20];
  if ((longlong *)param_1[0x20] == (longlong *)0x0) {
    plVar4 = param_1;
  }
  if (plVar4 != plVar4 + (int)uVar1) {
    plVar2 = plVar4;
    do {
      if (*plVar2 == *param_2) {
        uVar3 = (longlong)plVar2 - (longlong)plVar4 >> 3;
        if ((int)uVar3 != -1) {
          return uVar3;
        }
        break;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar4 + (int)uVar1);
  }
  *(uint *)(param_1 + 0x21) = uVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x10c) < (int)(uVar1 + 1)) {
    FUN_14157a330(param_1,uVar1);
  }
  plVar4 = (longlong *)param_1[0x20];
  if ((longlong *)param_1[0x20] == (longlong *)0x0) {
    plVar4 = param_1;
  }
  plVar4[(int)uVar1] = *param_2;
  return (ulonglong)uVar1;
}



// FUNCTION 1423e2b50 Append<FNetworkGUID,FDefaultAllocator> body=92 status=ok
// SIG undefined Append<FNetworkGUID,FDefaultAllocator>(void)

void TArray<FNetworkGUID,FDefaultAllocator>::Append<FNetworkGUID,FDefaultAllocator>
               (longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar2 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + iVar1) {
      TArray<float,FDefaultAllocator>::ResizeTo();
      iVar2 = (int)param_1[1];
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar2 * 4),(void *)*param_2,(longlong)iVar1 << 2);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 1423e2bb0 BindAction<AFlarePlayerController> body=184 status=ok
// SIG undefined BindAction<AFlarePlayerController>(void)

undefined8
UInputComponent::BindAction<AFlarePlayerController>
          (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
          undefined4 *param_5)

{
  undefined8 uVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte local_58;
  byte local_57;
  undefined1 local_56;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 local_18;
  
  local_57 = local_57 & 0xfe;
  local_58 = local_58 & 0xfd | 1;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_56 = param_3;
  local_50 = param_2;
  FWeakObjectPtr::operator=(local_28,0);
  local_20 = 0;
  local_18 = 0;
  local_68 = *param_5;
  uStack_64 = param_5[1];
  uStack_60 = param_5[2];
  uStack_5c = param_5[3];
  FInputActionUnifiedDelegate::BindDelegate<AFlarePlayerController>(&local_48,param_4,&local_68);
  uVar1 = FUN_142360eb0(param_1,&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  return uVar1;
}



// FUNCTION 1423e2c70 FUN_1423e2c70 body=445 status=ok
// SIG undefined FUN_1423e2c70(void)

longlong FUN_1423e2c70(longlong param_1,byte param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong **pplVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  byte local_48;
  longlong *local_40;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FWeakObjectPtr::operator=(&local_30,0);
  uVar4 = *param_4;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  local_28 = 0;
  FWeakObjectPtr::operator=(&local_30,0);
  local_28 = 0;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar8 == (longlong *)0x0) {
    if ((local_38 != 0) && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x28))(local_40,0);
      if (local_40 != (longlong *)0x0) {
        local_40 = (longlong *)FMemory::Realloc(local_40,0,0);
      }
      local_38 = 0;
    }
  }
  else {
    *plVar8 = (longlong)&PTR_FUN_145088a88;
    FWeakObjectPtr::operator=(plVar8 + 1,param_3);
    *(undefined4 *)(plVar8 + 2) = uVar4;
    *(undefined4 *)((longlong)plVar8 + 0x14) = uVar5;
    *(undefined4 *)(plVar8 + 3) = uVar6;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar7;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar9;
    *plVar8 = (longlong)&PTR_FUN_145088ad0;
    FUN_1423e9b20(plVar8,&local_40);
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar9 = FMemory::Realloc(plVar8,0,0);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  plVar8 = (longlong *)(param_1 + 0x188);
  iVar3 = *(int *)(param_1 + 400);
  *(int *)(param_1 + 400) = iVar3 + 1;
  if (*(int *)(param_1 + 0x194) < iVar3 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar3);
  }
  pbVar2 = (byte *)(*plVar8 + (longlong)iVar3 * 0x28);
  *pbVar2 = local_48 & 0xfd | 1;
  pplVar1 = (longlong **)(pbVar2 + 8);
  pbVar2[1] = param_2;
  *pplVar1 = (longlong *)0x0;
  pbVar2[0x10] = 0;
  pbVar2[0x11] = 0;
  pbVar2[0x12] = 0;
  pbVar2[0x13] = 0;
  if (((&local_40 != pplVar1) && (local_38 != 0)) && (local_40 != (longlong *)0x0)) {
    (**(code **)(*local_40 + 0x30))(local_40,pplVar1);
  }
  *(undefined4 *)(pbVar2 + 0x18) = local_30;
  *(undefined4 *)(pbVar2 + 0x1c) = local_2c;
  *(undefined8 *)(pbVar2 + 0x20) = local_28;
  iVar3 = *(int *)(param_1 + 400);
  lVar9 = *plVar8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
  return lVar9 + (longlong)(iVar3 + -1) * 0x28;
}



// FUNCTION 1423e2e30 FUN_1423e2e30 body=718 status=ok
// SIG undefined FUN_1423e2e30(void)

int * FUN_1423e2e30(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool local_res8;
  
  iVar10 = 1;
  iVar9 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar12;
  local_res8 = false;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar12 * 0x28);
  *puVar1 = *(uint *)*param_3;
  puVar1[2] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 1) {
    iVar8 = iVar9;
    if (uVar11 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(uint *)(*param_1 + (longlong)iVar7 * 0x28) == *puVar1) break;
          iVar7 = *(int *)(*param_1 + 0x20 + (longlong)iVar7 * 0x28);
          iVar8 = iVar9;
        } while (iVar7 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + (longlong)iVar8 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar2 + (longlong)iVar8 * 0x28),puVar1,0x20);
      iVar10 = *param_2;
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + (longlong)iVar10 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar9 = (int)param_1[6];
      }
      *(int *)(lVar2 + 4 + (longlong)iVar10 * 0x28) = iVar9;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar5 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1423e30d5;
    }
  }
  if (3 < uVar11) {
    uVar4 = (uVar11 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar6 = '\0';
    if (uVar4 != 0) {
      iVar10 = 0x1f - iVar9;
    }
    uVar4 = (uVar11 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar6 = '\x1f' - (char)iVar9;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar6 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar11 = (int)param_1[9] - 1U & *puVar1;
    puVar1[9] = uVar11;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar1[8] = *(uint *)((longlong)plVar5 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1423e30d5:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1423e3100 FUN_1423e3100 body=473 status=ok
// SIG undefined FUN_1423e3100(void)

int * FUN_1423e3100(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  bVar11 = false;
  *local_30 = *(uint *)*param_3;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    iVar10 = -1;
    iVar7 = iVar10;
    if (iVar9 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar6 != -1) {
        do {
          iVar7 = iVar6;
          if (*(uint *)((longlong)iVar6 * 0x20 + *param_1) == *local_30) break;
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *param_1);
          iVar7 = iVar10;
        } while (iVar6 != -1);
      }
    }
    bVar11 = iVar7 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar7 * 0x20 + *param_1);
      plVar5 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_1423e32b0;
    }
  }
  cVar4 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar4 == '\0') {
    uVar8 = (int)param_1[9] - 1U & *local_30;
    local_30[7] = uVar8;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    local_30[6] = *(uint *)((longlong)plVar5 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_1423e32b0:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1423e32e0 FUN_1423e32e0 body=723 status=ok
// SIG undefined FUN_1423e32e0(void)

int * FUN_1423e32e0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  bool local_res8;
  
  iVar4 = 1;
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar6 = *(int *)((longlong)iVar8 * 0x20 + 4 + *param_1);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar3 = (longlong *)param_1[4];
  *param_2 = iVar8;
  local_res8 = false;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = param_1 + 2;
  }
  puVar11 = (uint *)((longlong)plVar3 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar11 = *puVar11 | 1 << ((byte)iVar8 & 0x1f);
  puVar11 = (uint *)((longlong)iVar8 * 0x20 + *param_1);
  *puVar11 = *(uint *)*param_3;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    iVar7 = iVar12;
    if (uVar10 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar11) * 4);
      if (iVar6 != -1) {
        do {
          iVar7 = iVar6;
          if (*(uint *)((longlong)iVar6 * 0x20 + *param_1) == *puVar11) break;
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *param_1);
          iVar7 = iVar12;
        } while (iVar6 != -1);
      }
    }
    local_res8 = iVar7 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar7 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar11,0x18);
      iVar4 = *param_2;
      bVar1 = (byte)iVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar4;
      }
      puVar5 = (undefined4 *)((longlong)iVar4 * 0x20 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar5[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar4;
      plVar3 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar3 == (longlong *)0x0) {
        plVar3 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar3 +
                        (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar1 | 1U >> 0x20 - bVar1);
      goto LAB_1423e358a;
    }
  }
  if (3 < uVar10) {
    uVar2 = (uVar10 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar4 = 0x20;
    if (uVar2 != 0) {
      iVar4 = 0x1f - iVar12;
    }
    uVar2 = (uVar10 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar2 == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x1f' - (char)iVar12;
    }
    iVar4 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar4 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *puVar11;
    puVar11[7] = uVar10;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    puVar11[6] = *(uint *)((longlong)plVar3 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar4;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1423e358a:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1423e35c0 FUN_1423e35c0 body=656 status=ok
// SIG undefined FUN_1423e35c0(void)

int * FUN_1423e35c0(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  bool local_res8;
  
  iVar6 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar1 = *(int *)((longlong)iVar5 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar9 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar9 = *puVar9 | 1 << ((byte)iVar5 & 0x1f);
  puVar9 = (uint *)((longlong)iVar5 * 0x60 + *param_1);
  TKeyInitializer<FNetworkGUID_const_&>::
  operator<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>
            (param_3,puVar9);
  puVar9[0x16] = 0xffffffff;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar8 != 1) {
    if (uVar8 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar9) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)((longlong)iVar5 * 0x60 + *param_1) == *puVar9) goto LAB_1423e370f;
          iVar5 = *(int *)((longlong)iVar5 * 0x60 + 0x58 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_1423e370f:
    local_res8 = iVar5 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar5 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar9,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_1423e382b;
    }
  }
  if (3 < uVar8) {
    uVar3 = (uVar8 >> 1) + 8;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar7 = '\0';
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar6;
    }
    uVar3 = (uVar8 >> 1) + 7;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar7 = '\x1f' - (char)iVar6;
    }
    iVar6 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar8 = (int)param_1[9] - 1U & *puVar9;
    puVar9[0x17] = uVar8;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar9[0x16] = *(uint *)((longlong)plVar4 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1423e382b:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1423e3850 FUN_1423e3850 body=480 status=ok
// SIG undefined FUN_1423e3850(void)

int * FUN_1423e3850(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  void *_Dst;
  bool bVar12;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar3 = (undefined8 *)param_3[1];
  *param_2 = local_38[0];
  *local_30 = *(uint *)*param_3;
  *(undefined8 *)(local_30 + 2) = *puVar3;
  lVar4 = puVar3[1];
  *(longlong *)(local_30 + 4) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  bVar12 = false;
  local_30[6] = 0xffffffff;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    iVar9 = -1;
    iVar8 = iVar9;
    if (iVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(uint *)((longlong)iVar7 * 0x20 + *param_1) == *local_30) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar9;
        } while (iVar7 != -1);
      }
    }
    bVar12 = iVar8 != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      plVar6 = *(longlong **)((longlong)_Dst + 0x10);
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
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar8;
      goto LAB_1423e3a08;
    }
  }
  cVar5 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar5 == '\0') {
    uVar10 = (int)param_1[9] - 1U & *local_30;
    local_30[7] = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    local_30[6] = *(uint *)((longlong)plVar6 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_1423e3a08:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1423e3a30 FUN_1423e3a30 body=569 status=ok
// SIG undefined FUN_1423e3a30(void)

int * FUN_1423e3a30(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  bool bVar12;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar8 * 0x18);
  puVar3 = (uint *)*param_3;
  puVar4 = (undefined8 *)param_3[1];
  bVar12 = false;
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  *(undefined8 *)(puVar1 + 2) = *puVar4;
  puVar1[4] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar1[1];
    local_res10 = *puVar1;
    TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)local_res8[0] * 0x18),puVar1,0x10)
      ;
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1423e3c48;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar6 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar11 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar9;
    }
    uVar6 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar10 = (*puVar1 ^ puVar1[1]) & (int)param_1[9] - 1U;
    puVar1[5] = uVar10;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar1[4] = *(uint *)((longlong)plVar7 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1423e3c48:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1423e3c70 FUN_1423e3c70 body=526 status=ok
// SIG undefined FUN_1423e3c70(void)

int * FUN_1423e3c70(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  int iVar10;
  uint *_Src;
  uint uVar11;
  void *_Dst;
  bool local_res8;
  int local_res10 [2];
  int local_58 [2];
  uint *local_50;
  uint local_48;
  uint local_44;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_58);
  _Src = local_50;
  puVar5 = (uint *)*param_3;
  puVar6 = (undefined8 *)param_3[1];
  puVar1 = local_50 + 1;
  *param_2 = local_58[0];
  *local_50 = *puVar5;
  *puVar1 = puVar5[1];
  *(undefined8 *)(local_50 + 2) = *puVar6;
  lVar7 = puVar6[1];
  *(longlong *)(local_50 + 4) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  local_res8 = false;
  local_50[6] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *local_50;
    local_44 = *puVar1;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x20 + *param_1);
      plVar9 = *(longlong **)((longlong)_Dst + 0x10);
      iVar10 = local_res10[0];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        _Src = local_50;
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          _Src = local_50;
          iVar10 = local_res10[0];
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
            _Src = local_50;
            iVar10 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar10;
      goto LAB_1423e3e45;
    }
  }
  cVar8 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar8 == '\0') {
    uVar11 = (*_Src ^ *puVar1) & (int)param_1[9] - 1U;
    _Src[7] = uVar11;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar9 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1423e3e45:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1423e3e80 HeapSortInternal<FLookTarget,FIdentityFunctor,TDereferenceWrapper<FLookTarget,<lambda_66aa26fd76087ff9daa01959cf6ca9fb>_>_> body=448 status=ok
// SIG undefined HeapSortInternal<FLookTarget,FIdentityFunctor,TDereferenceWrapper<FLookTarget,<lambda_66aa26fd76087ff9daa01959cf6ca9fb>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FLookTarget,FIdentityFunctor,TDereferenceWrapper<FLookTarget,<lambda_66aa26fd76087ff9daa01959cf6ca9fb>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  
  iVar8 = (param_2 + -2) / 2;
  if (-1 < iVar8) {
    iVar9 = iVar8 * 2 + 1;
    iVar4 = iVar9;
    iVar10 = iVar8;
joined_r0x0001423e3eaa:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar8 * 2;
        iVar12 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar9 * 3 + 7) <
              *(int *)(param_1 + (longlong)iVar12 * 3 + 1)) {
            iVar12 = iVar9;
          }
          iVar12 = iVar12 + 1;
        }
        puVar11 = param_1 + (longlong)iVar12 * 3;
        puVar1 = param_1 + (longlong)iVar8 * 3;
        if (*(int *)(param_1 + (longlong)iVar8 * 3 + 1) < *(int *)(puVar11 + 1)) {
          if (puVar1 != puVar11) {
            uVar5 = puVar11[1];
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            uVar3 = puVar1[2];
            *puVar1 = *puVar11;
            puVar1[1] = uVar5;
            puVar1[2] = puVar11[2];
            *puVar11 = uVar6;
            puVar11[1] = uVar7;
            puVar11[2] = uVar3;
          }
          iVar9 = iVar12 * 2 + 1;
          iVar8 = iVar12;
          goto joined_r0x0001423e3eaa;
        }
      }
      iVar9 = iVar4 + -2;
      iVar8 = iVar10 + -1;
      iVar4 = iVar9;
      iVar10 = iVar8;
    } while (-1 < iVar8);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + (longlong)param_2 * 3;
    do {
      if (param_1 != puVar11) {
        uVar5 = puVar11[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar3 = param_1[2];
        *param_1 = *puVar11;
        param_1[1] = uVar5;
        param_1[2] = puVar11[2];
        *puVar11 = uVar6;
        puVar11[1] = uVar7;
        puVar11[2] = uVar3;
      }
      iVar8 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar8 * 2;
          iVar9 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar4 * 3 + 7) <
                *(int *)(param_1 + (longlong)iVar9 * 3 + 1)) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          puVar1 = param_1 + (longlong)iVar9 * 3;
          puVar2 = param_1 + (longlong)iVar8 * 3;
          if (*(int *)(puVar1 + 1) <= *(int *)(param_1 + (longlong)iVar8 * 3 + 1)) break;
          if (puVar2 != puVar1) {
            uVar5 = puVar1[1];
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar3 = puVar2[2];
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            puVar2[2] = puVar1[2];
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar3;
          }
          iVar8 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -3;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1423e4040 IntroSortInternal<FLookTarget,FIdentityFunctor,TDereferenceWrapper<FLookTarget,<lambda_66aa26fd76087ff9daa01959cf6ca9fb>_>_> body=833 status=ok
// SIG undefined IntroSortInternal<FLookTarget,FIdentityFunctor,TDereferenceWrapper<FLookTarget,<lambda_66aa26fd76087ff9daa01959cf6ca9fb>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FLookTarget,FIdentityFunctor,TDereferenceWrapper<FLookTarget,<lambda_66aa26fd76087ff9daa01959cf6ca9fb>_>_>
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
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x18 + -0x18;
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar17 = ::_guard_xfg_dispatch_icall_nop(fVar17);
    local_328 = (undefined4)(longlong)(fVar17 + fVar17);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar16 = &local_338;
    do {
      puVar15 = (undefined8 *)*plVar16;
      puVar10 = (undefined8 *)plVar16[1];
      lVar1 = plVar16[2];
      local_348._0_4_ = (int)lVar1;
      lVar9 = ((longlong)puVar10 - (longlong)puVar15) / 0x18 + 1;
      puVar14 = puVar15;
      if ((int)local_348 != 0) {
LAB_1423e4130:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          puVar15 = puVar14 + (lVar9 >> 1) * 3;
          if (puVar15 != puVar14) {
            uVar3 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar4 = *(undefined4 *)(puVar14 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar6 = *puVar15;
            uVar7 = puVar15[1];
            uVar2 = puVar15[2];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar3;
            *(undefined4 *)(puVar15 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar5;
            puVar15[2] = puVar14[2];
            *puVar14 = uVar6;
            puVar14[1] = uVar7;
            puVar14[2] = uVar2;
          }
          puVar12 = puVar10 + 3;
          puVar15 = puVar14;
LAB_1423e4180:
          puVar11 = puVar15;
          puVar15 = puVar11 + 3;
          if (puVar15 <= puVar10) goto code_r0x0001423e4189;
          goto LAB_1423e4193;
        }
        for (; puVar12 = puVar14, puVar15 = puVar14, puVar14 < puVar10; puVar10 = puVar10 + -3) {
          while (puVar11 = puVar12, puVar15 = puVar15 + 3, puVar15 <= puVar10) {
            puVar12 = puVar15;
            if (*(int *)(puVar15 + 1) <= *(int *)(puVar11 + 1)) {
              puVar12 = puVar11;
            }
          }
          if (puVar11 != puVar10) {
            uVar6 = puVar10[1];
            uVar7 = *puVar11;
            uVar8 = puVar11[1];
            uVar2 = puVar11[2];
            *puVar11 = *puVar10;
            puVar11[1] = uVar6;
            puVar11[2] = puVar10[2];
            *puVar10 = uVar7;
            puVar10[1] = uVar8;
            puVar10[2] = uVar2;
          }
        }
        goto LAB_1423e42c1;
      }
LAB_1423e42b2:
      local_348 = lVar1;
      HeapSortInternal<FLookTarget,FIdentityFunctor,TDereferenceWrapper<FLookTarget,<lambda_66aa26fd76087ff9daa01959cf6ca9fb>_>_>
                (puVar15,lVar9,param_3,param_4);
LAB_1423e42c1:
      plVar16 = plVar16 + -3;
    } while (&local_338 <= plVar16);
  }
  return;
code_r0x0001423e4189:
  if (*(int *)(puVar11 + 4) <= *(int *)(puVar14 + 1)) goto LAB_1423e4180;
LAB_1423e4193:
  do {
    puVar13 = puVar12;
    puVar12 = puVar13 + -3;
    if (puVar12 <= puVar14) break;
  } while (*(int *)(puVar14 + 1) <= *(int *)(puVar13 + -2));
  if (puVar15 <= puVar12) {
    if (puVar15 != puVar12) {
      uVar3 = *(undefined4 *)((longlong)puVar13 + -0x14);
      uVar4 = *(undefined4 *)(puVar13 + -2);
      uVar5 = *(undefined4 *)((longlong)puVar13 + -0xc);
      uVar6 = *puVar15;
      uVar7 = puVar11[4];
      uVar2 = puVar11[5];
      *(undefined4 *)puVar15 = *(undefined4 *)puVar12;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar3;
      *(undefined4 *)(puVar11 + 4) = uVar4;
      *(undefined4 *)((longlong)puVar11 + 0x24) = uVar5;
      puVar11[5] = puVar13[-1];
      *puVar12 = uVar6;
      puVar13[-2] = uVar7;
      puVar13[-1] = uVar2;
    }
    goto LAB_1423e4180;
  }
  if (puVar14 != puVar12) {
    uVar3 = *(undefined4 *)((longlong)puVar13 + -0x14);
    uVar4 = *(undefined4 *)(puVar13 + -2);
    uVar5 = *(undefined4 *)((longlong)puVar13 + -0xc);
    uVar6 = *puVar14;
    uVar7 = puVar14[1];
    uVar2 = puVar14[2];
    *(undefined4 *)puVar14 = *(undefined4 *)puVar12;
    *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
    *(undefined4 *)(puVar14 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar14 + 0xc) = uVar5;
    puVar14[2] = puVar13[-1];
    *puVar12 = uVar6;
    puVar13[-2] = uVar7;
    puVar13[-1] = uVar2;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar9 = (longlong)puVar12 + (-0x18 - (longlong)puVar14);
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  if ((lVar9 >> 2) - (lVar9 >> 0x3f) < ((longlong)puVar10 - (longlong)puVar15) / 0x18) {
    if (puVar15 < puVar10) {
      *plVar16 = (longlong)puVar15;
      plVar16[1] = (longlong)puVar10;
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (puVar12 <= puVar14 + 3) goto LAB_1423e42c1;
    puVar10 = puVar13 + -6;
    puVar15 = puVar14;
  }
  else {
    if (puVar14 + 3 < puVar12) {
      *plVar16 = (longlong)puVar14;
      plVar16[1] = (longlong)(puVar13 + -6);
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (puVar10 <= puVar15) goto LAB_1423e42c1;
  }
  lVar9 = ((longlong)puVar10 - (longlong)puVar15) / 0x18 + 1;
  puVar14 = puVar15;
  if ((int)local_348 == 0) goto LAB_1423e42b2;
  goto LAB_1423e4130;
}



// FUNCTION 1423e4390 FUN_1423e4390 body=134 status=ok
// SIG undefined FUN_1423e4390(void)

undefined8 * FUN_1423e4390(undefined8 *param_1)

{
  FUN_1426f4f60();
  *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) & 0xfffffffd;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 1;
  *param_1 = &PTR_FUN_145087338;
  param_1[0x8b] = &PTR_LAB_145088280;
  *(uint *)(param_1 + 0xe9) = *(uint *)(param_1 + 0xe9) | 4;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10d] = 0;
  param_1[0x107] = 0;
  param_1[0x10c] = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x7c4) = 1;
  return param_1;
}



// FUNCTION 1423e4420 ADebugCameraHUD body=40 status=ok
// SIG undefined ADebugCameraHUD(void)

undefined8 * ADebugCameraHUD::ADebugCameraHUD(undefined8 *param_1)

{
  FUN_1424ddf70();
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  *param_1 = &PTR__scalar_deleting_destructor__1450882d8;
  return param_1;
}



// FUNCTION 1423e4450 FUN_1423e4450 body=98 status=ok
// SIG undefined FUN_1423e4450(void)

undefined8 *
FUN_1423e4450(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_14257dfd0();
  param_1[0x27] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__1440fad20;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  param_1[0x2a] = param_4;
  param_1[0x28] = uVar1;
  param_1[0x29] = uVar2;
  return param_1;
}



// FUNCTION 1423e44c0 FControlChannelOutBunch body=40 status=ok
// SIG undefined FControlChannelOutBunch(void)

undefined8 * FControlChannelOutBunch::FControlChannelOutBunch(undefined8 *param_1)

{
  FUN_1423e4ec0();
  *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) | 0x20;
  *param_1 = &PTR__scalar_deleting_destructor__1450868e8;
  return param_1;
}



// FUNCTION 1423e44f0 FDDSLoadHelper body=109 status=ok
// SIG undefined FDDSLoadHelper(void)

longlong * FDDSLoadHelper::FDDSLoadHelper(longlong *param_1,char *param_2,uint param_3)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((((0x7f < param_3) && (*param_2 == 'D')) && (param_2[1] == 'D')) &&
     (((param_2[2] == 'S' && (param_2[3] == ' ')) &&
      ((*(int *)(param_2 + 4) == 0x7c && (*(int *)(param_2 + 0x4c) == 0x20)))))) {
    piVar1 = (int *)0x0;
    if ((*(uint *)(param_2 + 8) & 0x1007) == 0x1007) {
      piVar1 = (int *)(param_2 + 4);
    }
    *param_1 = (longlong)piVar1;
  }
  if (*(int *)(param_2 + 0x54) == 0x30315844) {
    param_1[1] = (longlong)(param_2 + 0x80);
  }
  return param_1;
}



// FUNCTION 1423e4560 FUN_1423e4560 body=357 status=ok
// SIG undefined FUN_1423e4560(void)

undefined8 * FUN_1423e4560(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_14271d7c0(param_1,param_2,0);
  *param_1 = &PTR_FUN_145088b18;
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
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  uVar1 = FUN_1427703d0(L"Game",0);
  *(undefined4 *)(param_1 + 0x8a) = uVar1;
  param_1[0x8b] = 0;
  param_1[0x8c] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x8b,0);
  FGenericPlatformString::Memcpy(param_1[0x8b],L"Game",10);
  *(undefined4 *)(param_1 + 0x8d) = 0x44bb8000;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 1;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 100;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x92) = 0xffffffff;
  return param_1;
}



// FUNCTION 1423e46d0 FInBunch body=523 status=ok
// SIG undefined FInBunch(void)

undefined8 * FInBunch::FInBunch(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  byte bVar2;
  
  FArchive::FArchive();
  *param_1 = &PTR__scalar_deleting_destructor__144cd5098;
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x98);
  _Src = *(void **)(param_2 + 0x90);
  *(int *)(param_1 + 0x13) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x12,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0x12],_Src,(longlong)iVar1);
  }
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  *param_1 = &PTR__scalar_deleting_destructor__144d05df0;
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  *param_1 = &PTR__scalar_deleting_destructor__1450866f0;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  param_1[0x18] = *(undefined8 *)(param_2 + 0xc0);
  param_1[0x19] = *(undefined8 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  *(byte *)((longlong)param_1 + 0xdc) =
       *(byte *)((longlong)param_1 + 0xdc) ^
       (*(byte *)((longlong)param_1 + 0xdc) ^ *(byte *)(param_2 + 0xdc)) & 1;
  bVar2 = (*(byte *)(param_2 + 0xdc) ^ *(byte *)((longlong)param_1 + 0xdc)) & 2 ^
          *(byte *)((longlong)param_1 + 0xdc);
  *(byte *)((longlong)param_1 + 0xdc) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_2 + 0xdc)) & 4 ^ bVar2;
  *(byte *)((longlong)param_1 + 0xdc) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_2 + 0xdc)) & 8 ^ bVar2;
  *(byte *)((longlong)param_1 + 0xdc) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_2 + 0xdc)) & 0x10 ^ bVar2;
  *(byte *)((longlong)param_1 + 0xdc) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_2 + 0xdc)) & 0x20 ^ bVar2;
  *(byte *)((longlong)param_1 + 0xdc) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_2 + 0xdc)) & 0x40 ^ bVar2;
  *(byte *)((longlong)param_1 + 0xdc) = bVar2;
  *(byte *)((longlong)param_1 + 0xdc) =
       (bVar2 ^ *(byte *)(param_2 + 0xdc)) & 0x7f ^ *(byte *)(param_2 + 0xdc);
  *(byte *)((longlong)param_1 + 0xdd) =
       *(byte *)((longlong)param_1 + 0xdd) ^
       (*(byte *)((longlong)param_1 + 0xdd) ^ *(byte *)(param_2 + 0xdd)) & 1;
  bVar2 = (*(byte *)((longlong)param_1 + 0xdd) ^ *(byte *)(param_2 + 0xdd)) & 2 ^
          *(byte *)((longlong)param_1 + 0xdd);
  *(byte *)((longlong)param_1 + 0xdd) = bVar2;
  *(byte *)((longlong)param_1 + 0xdd) = (bVar2 ^ *(byte *)(param_2 + 0xdd)) & 4 ^ bVar2;
  return param_1;
}



// FUNCTION 1423e48e0 FUN_1423e48e0 body=152 status=ok
// SIG undefined FUN_1423e48e0(void)

undefined8 * FUN_1423e48e0(undefined8 *param_1,longlong param_2)

{
  FNetBitReader::FNetBitReader(param_1,*(undefined8 *)(param_2 + 0x68));
  *(byte *)((longlong)param_1 + 0xdc) = *(byte *)((longlong)param_1 + 0xdc) & 8;
  *(byte *)((longlong)param_1 + 0xdd) = *(byte *)((longlong)param_1 + 0xdd) & 0xf8;
  *param_1 = &PTR__scalar_deleting_destructor__1450866f0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = param_2;
  *(byte *)((longlong)param_1 + 0x29) =
       *(byte *)((longlong)param_1 + 0x29) ^
       (*(char *)(param_2 + 0x150) << 4 ^ *(byte *)((longlong)param_1 + 0x29)) & 0x10;
  FUN_1416951c0(param_1,*(undefined4 *)(param_2 + 0x15e8));
  FArchiveState::SetGameNetVer(param_1,*(undefined4 *)(param_2 + 0x15ec));
  param_1[7] = 0x400;
  return param_1;
}



// FUNCTION 1423e4980 FUN_1423e4980 body=189 status=ok
// SIG undefined FUN_1423e4980(void)

undefined8 *
FUN_1423e4980(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,byte param_4,byte param_5,
             byte param_6,char param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
  *param_1 = param_2;
  *(byte *)(param_1 + 1) =
       ((param_6 & 0xfd | param_7 * '\x02') * '\x02' | param_5 & 0xf9) * '\x02' |
       (*(byte *)(param_1 + 1) | param_4) & 0xf1;
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  lVar4 = param_3[2];
  param_1[4] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_3[2];
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 1423e4a40 FObjectReplicator body=431 status=ok
// SIG undefined FObjectReplicator(void)

undefined8 * FObjectReplicator::FObjectReplicator(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xfffffff8;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0xffffffff;
  return param_1;
}



// FUNCTION 1423e4bf0 FOutBunch body=719 status=ok
// SIG undefined FOutBunch(void)

undefined8 * FOutBunch::FOutBunch(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  byte bVar3;
  
  FArchive::FArchive();
  *param_1 = &PTR__scalar_deleting_destructor__144cd5290;
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x98);
  pvVar2 = *(void **)(param_2 + 0x90);
  *(int *)(param_1 + 0x13) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x12,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0x12],pvVar2,(longlong)iVar1);
  }
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0xb0);
  *(undefined1 *)((longlong)param_1 + 0xb1) = *(undefined1 *)(param_2 + 0xb1);
  *param_1 = &PTR__scalar_deleting_destructor__144d05bf0;
  param_1[0x17] = *(undefined8 *)(param_2 + 0xb8);
  *param_1 = &PTR__scalar_deleting_destructor__1450864f0;
  param_1[0x18] = *(undefined8 *)(param_2 + 0xc0);
  param_1[0x19] = *(undefined8 *)(param_2 + 200);
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(byte *)(param_1 + 0x1d) =
       *(byte *)(param_1 + 0x1d) ^ (*(byte *)(param_1 + 0x1d) ^ *(byte *)(param_2 + 0xe8)) & 1;
  bVar3 = (*(byte *)(param_1 + 0x1d) ^ *(byte *)(param_2 + 0xe8)) & 2 ^ *(byte *)(param_1 + 0x1d);
  *(byte *)(param_1 + 0x1d) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 0xe8)) & 4 ^ bVar3;
  *(byte *)(param_1 + 0x1d) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 0xe8)) & 8 ^ bVar3;
  *(byte *)(param_1 + 0x1d) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 0xe8)) & 0x10 ^ bVar3;
  *(byte *)(param_1 + 0x1d) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 0xe8)) & 0x20 ^ bVar3;
  *(byte *)(param_1 + 0x1d) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 0xe8)) & 0x40 ^ bVar3;
  *(byte *)(param_1 + 0x1d) = bVar3;
  *(byte *)(param_1 + 0x1d) = (bVar3 ^ *(byte *)(param_2 + 0xe8)) & 0x7f ^ *(byte *)(param_2 + 0xe8)
  ;
  *(byte *)((longlong)param_1 + 0xe9) =
       *(byte *)((longlong)param_1 + 0xe9) ^
       (*(byte *)((longlong)param_1 + 0xe9) ^ *(byte *)(param_2 + 0xe9)) & 1;
  bVar3 = (*(byte *)(param_2 + 0xe9) ^ *(byte *)((longlong)param_1 + 0xe9)) & 2 ^
          *(byte *)((longlong)param_1 + 0xe9);
  *(byte *)((longlong)param_1 + 0xe9) = bVar3;
  *(byte *)((longlong)param_1 + 0xe9) = (*(byte *)(param_2 + 0xe9) ^ bVar3) & 4 ^ bVar3;
  param_1[0x1e] = 0;
  iVar1 = *(int *)(param_2 + 0xf8);
  pvVar2 = *(void **)(param_2 + 0xf0);
  *(int *)(param_1 + 0x1f) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 0x1e,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0x1e],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x20] = 0;
  iVar1 = *(int *)(param_2 + 0x108);
  pvVar2 = *(void **)(param_2 + 0x100);
  *(int *)(param_1 + 0x21) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x20,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0x20],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1423e4ec0 FUN_1423e4ec0 body=273 status=ok
// SIG undefined FUN_1423e4ec0(void)

undefined8 * FUN_1423e4ec0(undefined8 *param_1,longlong param_2,byte param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x28);
  iVar3 = -0x50;
  if (*(char *)(lVar2 + 0x193c) != '\0') {
    iVar3 = -0x68;
  }
  FNetBitWriter::FNetBitWriter
            (param_1,*(undefined8 *)(lVar2 + 0x68),
             (longlong)((iVar3 - *(int *)(lVar2 + 0x128)) + *(int *)(lVar2 + 0xa0) * 8));
  param_1[0x19] = param_2;
  param_1[0x18] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450864f0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x34);
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  *(byte *)((longlong)param_1 + 0xe9) = *(byte *)((longlong)param_1 + 0xe9) & 0xf8;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar1;
  param_1[0x1c] = 0;
  *(byte *)(param_1 + 0x1d) = (param_3 & 1) << 2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(byte *)((longlong)param_1 + 0x29) =
       *(byte *)((longlong)param_1 + 0x29) ^
       (*(char *)(*(longlong *)(param_1[0x19] + 0x28) + 0x150) << 4 ^
       *(byte *)((longlong)param_1 + 0x29)) & 0x10;
  if ((int)((*(byte *)(param_1 + 0x1d) >> 2 & 1) + 0xff) <= *(int *)(param_1[0x19] + 0x4c)) {
    FUN_1416952d0(param_1,0xffffffff);
  }
  return param_1;
}



// FUNCTION 1423e4fe0 FOutBunch body=111 status=ok
// SIG undefined FOutBunch(void)

undefined8 * FOutBunch::FOutBunch(undefined8 *param_1)

{
  FNetBitWriter::FNetBitWriter();
  *param_1 = &PTR__scalar_deleting_destructor__1450864f0;
  *(byte *)((longlong)param_1 + 0xe9) = *(byte *)((longlong)param_1 + 0xe9) & 0xf8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 1423e5050 FOutBunch body=65 status=ok
// SIG undefined FOutBunch(void)

undefined8 * FOutBunch::FOutBunch(undefined8 *param_1)

{
  FNetBitWriter::FNetBitWriter(param_1,0);
  *param_1 = &PTR__scalar_deleting_destructor__1450864f0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 1423e50a0 FRepChangelistState body=1094 status=ok
// SIG undefined FRepChangelistState(void)

undefined8 * FRepChangelistState::FRepChangelistState(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar3 = param_1 + 2;
  lVar4 = 0x40;
  lVar1 = (longlong)param_1 + 0x24;
  do {
    *(undefined4 *)puVar3 = 0xffffffff;
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined1 *)(lVar1 + 4) = 0;
    *(undefined8 *)(lVar1 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined8 *)(lVar1 + 0x1c) = 0;
    *(undefined1 *)(lVar1 + 0x24) = 0;
    *(undefined8 *)(lVar1 + 0x2c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x34) = 0;
    *(undefined8 *)(lVar1 + 0x3c) = 0;
    *(undefined1 *)(lVar1 + 0x44) = 0;
    *(undefined8 *)(lVar1 + 0x4c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x54) = 0;
    *(undefined8 *)(lVar1 + 0x5c) = 0;
    *(undefined1 *)(lVar1 + 100) = 0;
    *(undefined8 *)(lVar1 + 0x6c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x74) = 0;
    *(undefined8 *)(lVar1 + 0x7c) = 0;
    *(undefined1 *)(lVar1 + 0x84) = 0;
    *(undefined8 *)(lVar1 + 0x8c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x94) = 0;
    *(undefined8 *)(lVar1 + 0x9c) = 0;
    *(undefined1 *)(lVar1 + 0xa4) = 0;
    *(undefined8 *)(lVar1 + 0xac) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0xb4) = 0;
    *(undefined8 *)(lVar1 + 0xbc) = 0;
    *(undefined1 *)(lVar1 + 0xc4) = 0;
    *(undefined8 *)(lVar1 + 0xcc) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0xd4) = 0;
    *(undefined8 *)(lVar1 + 0xdc) = 0;
    *(undefined1 *)(lVar1 + 0xe4) = 0;
    *(undefined8 *)(lVar1 + 0xec) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0xf4) = 0;
    *(undefined8 *)(lVar1 + 0xfc) = 0;
    *(undefined1 *)(lVar1 + 0x104) = 0;
    *(undefined8 *)(lVar1 + 0x10c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x114) = 0;
    *(undefined8 *)(lVar1 + 0x11c) = 0;
    *(undefined1 *)(lVar1 + 0x124) = 0;
    *(undefined8 *)(lVar1 + 300) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x134) = 0;
    *(undefined8 *)(lVar1 + 0x13c) = 0;
    *(undefined1 *)(lVar1 + 0x144) = 0;
    *(undefined8 *)(lVar1 + 0x14c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x154) = 0;
    *(undefined8 *)(lVar1 + 0x15c) = 0;
    *(undefined1 *)(lVar1 + 0x164) = 0;
    *(undefined8 *)(lVar1 + 0x16c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x174) = 0;
    *(undefined8 *)(lVar1 + 0x17c) = 0;
    *(undefined1 *)(lVar1 + 0x184) = 0;
    *(undefined8 *)(lVar1 + 0x18c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x194) = 0;
    *(undefined8 *)(lVar1 + 0x19c) = 0;
    *(undefined1 *)(lVar1 + 0x1a4) = 0;
    *(undefined8 *)(lVar1 + 0x1ac) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x1b4) = 0;
    *(undefined8 *)(lVar1 + 0x1bc) = 0;
    *(undefined1 *)(lVar1 + 0x1c4) = 0;
    *(undefined8 *)(lVar1 + 0x1cc) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x1d4) = 0;
    *(undefined8 *)(lVar1 + 0x1dc) = 0;
    *(undefined1 *)(lVar1 + 0x1e4) = 0;
    *(undefined8 *)(lVar1 + 0x1ec) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 500) = 0;
    *(undefined8 *)(lVar1 + 0x1fc) = 0;
    *(undefined1 *)(lVar1 + 0x204) = 0;
    *(undefined8 *)(lVar1 + 0x20c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x214) = 0;
    *(undefined8 *)(lVar1 + 0x21c) = 0;
    *(undefined1 *)(lVar1 + 0x224) = 0;
    *(undefined8 *)(lVar1 + 0x22c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x234) = 0;
    *(undefined8 *)(lVar1 + 0x23c) = 0;
    *(undefined1 *)(lVar1 + 0x244) = 0;
    *(undefined8 *)(lVar1 + 0x24c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x254) = 0;
    *(undefined8 *)(lVar1 + 0x25c) = 0;
    *(undefined1 *)(lVar1 + 0x264) = 0;
    *(undefined8 *)(lVar1 + 0x26c) = 0xffffffffffffffff;
    puVar3 = puVar3 + 0x80;
    *(undefined8 *)(lVar1 + 0x274) = 0;
    *(undefined8 *)(lVar1 + 0x27c) = 0;
    *(undefined1 *)(lVar1 + 0x284) = 0;
    *(undefined8 *)(lVar1 + 0x28c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x294) = 0;
    *(undefined8 *)(lVar1 + 0x29c) = 0;
    *(undefined1 *)(lVar1 + 0x2a4) = 0;
    *(undefined8 *)(lVar1 + 0x2ac) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x2b4) = 0;
    *(undefined8 *)(lVar1 + 700) = 0;
    *(undefined1 *)(lVar1 + 0x2c4) = 0;
    *(undefined8 *)(lVar1 + 0x2cc) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x2d4) = 0;
    *(undefined8 *)(lVar1 + 0x2dc) = 0;
    *(undefined1 *)(lVar1 + 0x2e4) = 0;
    *(undefined8 *)(lVar1 + 0x2ec) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x2f4) = 0;
    *(undefined8 *)(lVar1 + 0x2fc) = 0;
    *(undefined1 *)(lVar1 + 0x304) = 0;
    *(undefined8 *)(lVar1 + 0x30c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x314) = 0;
    *(undefined8 *)(lVar1 + 0x31c) = 0;
    *(undefined1 *)(lVar1 + 0x324) = 0;
    *(undefined8 *)(lVar1 + 0x32c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x334) = 0;
    *(undefined8 *)(lVar1 + 0x33c) = 0;
    *(undefined1 *)(lVar1 + 0x344) = 0;
    *(undefined8 *)(lVar1 + 0x34c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x354) = 0;
    *(undefined8 *)(lVar1 + 0x35c) = 0;
    *(undefined1 *)(lVar1 + 0x364) = 0;
    *(undefined8 *)(lVar1 + 0x36c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x374) = 0;
    *(undefined8 *)(lVar1 + 0x37c) = 0;
    *(undefined1 *)(lVar1 + 900) = 0;
    *(undefined8 *)(lVar1 + 0x38c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x394) = 0;
    *(undefined8 *)(lVar1 + 0x39c) = 0;
    *(undefined1 *)(lVar1 + 0x3a4) = 0;
    *(undefined8 *)(lVar1 + 0x3ac) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x3b4) = 0;
    *(undefined8 *)(lVar1 + 0x3bc) = 0;
    *(undefined1 *)(lVar1 + 0x3c4) = 0;
    *(undefined8 *)(lVar1 + 0x3cc) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x3d4) = 0;
    *(undefined8 *)(lVar1 + 0x3dc) = 0;
    *(undefined1 *)(lVar1 + 0x3e4) = 0;
    lVar1 = lVar1 + 0x400;
    lVar4 = lVar4 + -0x20;
  } while (lVar4 != 0);
  param_1[0x102] = 0;
  *(undefined4 *)(param_1 + 0x103) = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  lVar1 = operator_new(0xc0);
  if (lVar1 != 0) {
    uVar2 = FNetBitWriter::FNetBitWriter(lVar1,0);
  }
  param_1[0x108] = uVar2;
  *(undefined1 *)(param_1 + 0x109) = 0;
  return param_1;
}



// FUNCTION 1423e54f0 FRepState body=1290 status=ok
// SIG undefined FRepState(void)

undefined8 * FRepState::FRepState(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0xffffffffffffffff;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0xffffffffffffffff;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0xffffffffffffffff;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0xffffffffffffffff;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0xffffffffffffffff;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0xffffffffffffffff;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0xffffffffffffffff;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0xffffffffffffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0xffffffffffffffff;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0xffffffffffffffff;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0xffffffffffffffff;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0xffffffffffffffff;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0xffffffffffffffff;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0xffffffffffffffff;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0xffffffffffffffff;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0xffffffffffffffff;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0xffffffffffffffff;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0xffffffffffffffff;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0xffffffffffffffff;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0xffffffffffffffff;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0xffffffffffffffff;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0xffffffffffffffff;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0xffffffffffffffff;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  param_1[0x72] = 0xffffffffffffffff;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  param_1[0x76] = 0xffffffffffffffff;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0xffffffffffffffff;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0xffffffffffffffff;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0xffffffffffffffff;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  param_1[0x86] = 0xffffffffffffffff;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0xffffffffffffffff;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  param_1[0x8e] = 0xffffffffffffffff;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined2 *)(param_1 + 0x96) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 4;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 4;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 1;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1 + 0x9c,1,0);
  *(undefined2 *)param_1[0x9c] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  return param_1;
}



// FUNCTION 1423e5a00 FUN_1423e5a00 body=470 status=ok
// SIG undefined FUN_1423e5a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1423e5a00(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  *param_1 = param_2;
  puVar7 = param_1 + 1;
  lVar10 = 0;
  plVar1 = param_1 + 3;
  *puVar7 = 0;
  param_1[2] = 0;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar8 = (undefined8 *)FUN_1425bff60(*param_1,local_60,*(undefined8 *)(param_3 + 0x10));
  if (puVar7 != puVar8) {
    *puVar7 = *puVar8;
    *puVar8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 2,puVar8 + 1);
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_58 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  lVar9 = operator_new(0x850);
  if (lVar9 != 0) {
    lVar10 = FRepChangelistState::FRepChangelistState(lVar9);
  }
  if (plVar1 == &local_68) {
    if (lVar10 == 0) goto LAB_1423e5b07;
    FUN_14271ea60(lVar10);
  }
  else {
    lVar9 = *plVar1;
    *plVar1 = lVar10;
    if (lVar9 == 0) goto LAB_1423e5b07;
    FUN_14271ea60(lVar9);
    lVar10 = lVar9;
  }
  FMemory::operator_delete(lVar10,0x850);
LAB_1423e5b07:
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  lVar10 = *plVar1;
  uVar5 = *puVar7;
  uVar11 = FUN_14178ca30(param_3);
  FUN_142730600(uVar5,lVar10 + 0x820,uVar4,uVar11);
  plVar6 = (longlong *)param_1[2];
  uVar4 = *puVar7;
  puVar7 = (undefined8 *)*plVar1;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_78 = uVar4;
  plStack_70 = plVar6;
  if (&local_78 != puVar7) {
    local_78 = *puVar7;
    plStack_70 = (longlong *)puVar7[1];
    *puVar7 = uVar4;
    puVar7[1] = plVar6;
    local_50 = uVar4;
    plStack_48 = plVar6;
  }
  plVar1 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_70 + 1;
    lVar10 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1423e5be0 FUN_1423e5be0 body=59 status=ok
// SIG undefined FUN_1423e5be0(void)

longlong * FUN_1423e5be0(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x95) == '\x03')) {
    FUN_14223f9d0(param_2);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1423e5c20 UChannel body=41 status=ok
// SIG undefined UChannel(void)

undefined8 * UChannel::UChannel(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145085e20;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 1423e5c50 UCurveTable body=79 status=ok
// SIG undefined UCurveTable(void)

undefined8 * UCurveTable::UCurveTable(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145086208;
  param_1[5] = &PTR_GetCurves_145086480;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 1423e5ca0 UDamageType body=65 status=ok
// SIG undefined UDamageType(void)

undefined8 * UDamageType::UDamageType(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
  *param_1 = &PTR_FUN_143fce9d0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x44480000;
  *(undefined4 *)(param_1 + 6) = 0x44480000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  return param_1;
}



// FUNCTION 1423e5cf0 UDataAsset body=49 status=ok
// SIG undefined UDataAsset(void)

undefined8 * UDataAsset::UDataAsset(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fca7c0;
  param_1[5] = 0;
  param_1[5] = param_1[2];
  return param_1;
}



// FUNCTION 1423e5d30 UDataTable body=68 status=ok
// SIG undefined UDataTable(void)

undefined8 * UDataTable::UDataTable(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145086bb0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 1423e5d80 FUN_1423e5d80 body=59 status=ok
// SIG undefined FUN_1423e5d80(void)

undefined8 * FUN_1423e5d80(undefined8 *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary();
  *param_1 = &PTR_FUN_143f4b3b0;
  if (DAT_146af23b4 < 0x60) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146af23a8,0x60);
  }
  return param_1;
}



// FUNCTION 1423e5dc0 UAnimNotifyState body=37 status=ok
// SIG undefined UAnimNotifyState(void)

undefined8 * UAnimNotifyState::UAnimNotifyState(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_145086e28;
  return param_1;
}



// FUNCTION 1423e5df0 UReporterGraph body=137 status=ok
// SIG undefined UReporterGraph(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * UReporterGraph::UReporterGraph(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_141781840();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450870b0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar2 = uRam00000001464aa728;
  uVar1 = _DAT_1464aa720;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffff8;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar2;
  *(undefined4 *)(param_1 + 0x11) = 2;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 1;
  *(undefined4 *)(param_1 + 0x10) = 10;
  *(undefined4 *)((longlong)param_1 + 0x84) = 10;
  return param_1;
}



// FUNCTION 1423e5e80 FUN_1423e5e80 body=100 status=ok
// SIG undefined FUN_1423e5e80(void)

void FUN_1423e5e80(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[6] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1423e5ef0 ~TArray<FSubObjective,TSizedDefaultAllocator<32>_> body=159 status=ok
// SIG undefined ~TArray<FSubObjective,TSizedDefaultAllocator<32>_>(void)

void TArray<FSubObjective,TSizedDefaultAllocator<32>_>::
     ~TArray<FSubObjective,TSizedDefaultAllocator<32>_>(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x18);
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
      plVar7 = plVar7 + 6;
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



// FUNCTION 1423e5f90 ~TArray<FObjectReplicator::FRPCPendingLocalCall,FDefaultAllocator> body=138 status=ok
// SIG undefined ~TArray<FObjectReplicator::FRPCPendingLocalCall,FDefaultAllocator>(void)

void TArray<FObjectReplicator::FRPCPendingLocalCall,FDefaultAllocator>::
     ~TArray<FObjectReplicator::FRPCPendingLocalCall,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    do {
      *(undefined4 *)(plVar2 + 1) = 0;
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar2 + -8);
      if (plVar2[-0xb] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xe;
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



// FUNCTION 1423e6020 FUN_1423e6020 body=548 status=ok
// SIG undefined FUN_1423e6020(void)

void FUN_1423e6020(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_1423e7ca0();
  TArray<FObjectReplicator::FRPCPendingLocalCall,FDefaultAllocator>::
  ~TArray<FObjectReplicator::FRPCPendingLocalCall,FDefaultAllocator>(param_1 + 0x348);
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x328);
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
  *(undefined4 *)(param_1 + 0x310) = 0;
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2c8);
  lVar5 = *(longlong *)(param_1 + 0x2c0);
  if (lVar5 != 0) {
    FUN_14271eb50(lVar5);
    FMemory::operator_delete(lVar5,0x510);
  }
  plVar4 = *(longlong **)(param_1 + 0x2b8);
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
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x260,0);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x100);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x78,0);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x28,0);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  TArray<FSubObjective,TSizedDefaultAllocator<32>_>::
  ~TArray<FSubObjective,TSizedDefaultAllocator<32>_>(param_1 + 0x18);
  return;
}



// FUNCTION 1423e6250 FUN_1423e6250 body=109 status=ok
// SIG undefined FUN_1423e6250(void)

void FUN_1423e6250(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    FUN_14271ea60(lVar4);
    FMemory::operator_delete(lVar4,0x850);
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 1423e62c0 FUN_1423e62c0 body=13 status=ok
// SIG undefined FUN_1423e62c0(void)

void FUN_1423e62c0(longlong *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  puVar1 = (undefined1 *)(lVar4 + 0x95);
  puVar2 = (undefined1 *)(lVar4 + 0x128);
  if (puVar2 != puVar1) {
    uVar3 = *puVar2;
    *puVar2 = *puVar1;
    *puVar1 = uVar3;
  }
  FUN_14222cb50();
  return;
}



// FUNCTION 1423e62d0 operator_new body=188 status=ok
// SIG undefined operator_new(void)

void * operator_new(longlong param_1,ulonglong *param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  void *_Dst;
  longlong lVar4;
  
  iVar3 = (int)param_1 * param_4;
  iVar1 = 8;
  if (0xf < iVar3) {
    iVar1 = 0x10;
  }
  if (param_5 <= iVar1) {
    param_5 = iVar1;
  }
  lVar4 = (longlong)param_5;
  _Dst = (void *)((*param_2 - 1) + lVar4 & ~(lVar4 - 1U));
  uVar2 = (longlong)iVar3 + (longlong)_Dst;
  if (param_2[1] < uVar2) {
    FMemStackBase::AllocateNewChunk(param_2);
    _Dst = (void *)((*param_2 - 1) + lVar4 & ~(lVar4 - 1U));
    uVar2 = (longlong)iVar3 + (longlong)_Dst;
  }
  *param_2 = uVar2;
  _guard_xfg_dispatch_icall_nop(_Dst,0,param_4 * param_1);
  return _Dst;
}



// FUNCTION 1423e6390 operator= body=624 status=ok
// SIG undefined operator=(void)

longlong FOutBunch::operator=(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  byte bVar4;
  
  FArchive::operator=();
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_1 + 0x90,param_2 + 0x90)
  ;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xb1) = *(undefined1 *)(param_2 + 0xb1);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(byte *)(param_1 + 0xe8) =
       *(byte *)(param_1 + 0xe8) ^ (*(byte *)(param_1 + 0xe8) ^ *(byte *)(param_2 + 0xe8)) & 1;
  bVar4 = (*(byte *)(param_2 + 0xe8) ^ *(byte *)(param_1 + 0xe8)) & 2 ^ *(byte *)(param_1 + 0xe8);
  *(byte *)(param_1 + 0xe8) = bVar4;
  bVar4 = (bVar4 ^ *(byte *)(param_2 + 0xe8)) & 4 ^ bVar4;
  *(byte *)(param_1 + 0xe8) = bVar4;
  bVar4 = (bVar4 ^ *(byte *)(param_2 + 0xe8)) & 8 ^ bVar4;
  *(byte *)(param_1 + 0xe8) = bVar4;
  bVar4 = (bVar4 ^ *(byte *)(param_2 + 0xe8)) & 0x10 ^ bVar4;
  *(byte *)(param_1 + 0xe8) = bVar4;
  bVar4 = (bVar4 ^ *(byte *)(param_2 + 0xe8)) & 0x20 ^ bVar4;
  *(byte *)(param_1 + 0xe8) = bVar4;
  bVar4 = (bVar4 ^ *(byte *)(param_2 + 0xe8)) & 0x40 ^ bVar4;
  *(byte *)(param_1 + 0xe8) = bVar4;
  *(byte *)(param_1 + 0xe8) = (bVar4 ^ *(byte *)(param_2 + 0xe8)) & 0x7f ^ *(byte *)(param_2 + 0xe8)
  ;
  *(byte *)(param_1 + 0xe9) =
       *(byte *)(param_1 + 0xe9) ^ (*(byte *)(param_1 + 0xe9) ^ *(byte *)(param_2 + 0xe9)) & 1;
  bVar4 = (*(byte *)(param_1 + 0xe9) ^ *(byte *)(param_2 + 0xe9)) & 2 ^ *(byte *)(param_1 + 0xe9);
  *(byte *)(param_1 + 0xe9) = bVar4;
  puVar1 = (undefined8 *)(param_1 + 0xf0);
  *(byte *)(param_1 + 0xe9) = (bVar4 ^ *(byte *)(param_2 + 0xe9)) & 4 ^ bVar4;
  if (puVar1 != (undefined8 *)(param_2 + 0xf0)) {
    iVar2 = *(int *)(param_2 + 0xf8);
    pvVar3 = *(void **)(param_2 + 0xf0);
    *(int *)(param_1 + 0xf8) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0xfc) == 0)) {
      *(undefined4 *)(param_1 + 0xfc) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 2);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x100);
  if (puVar1 != (undefined8 *)(param_2 + 0x100)) {
    iVar2 = *(int *)(param_2 + 0x108);
    pvVar3 = *(void **)(param_2 + 0x100);
    *(int *)(param_1 + 0x108) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x10c) == 0)) {
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 3);
    }
  }
  return param_1;
}



// FUNCTION 1423e6600 operator<< body=78 status=ok
// SIG undefined operator<<(void)

longlong FControlChannelOutBunch::operator<<(longlong param_1)

{
  LowLevelFatalErrorHandler("Unknown",0xa5,L"Cannot send Objects on the control channel");
  FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0xa5,L"Cannot send Objects on the control channel");
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
  return param_1;
}



// FUNCTION 1423e6650 operator<< body=78 status=ok
// SIG undefined operator<<(void)

longlong FControlChannelOutBunch::operator<<(longlong param_1)

{
  LowLevelFatalErrorHandler("Unknown",0x9f,L"Cannot send Names on the control channel");
  FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x9f,L"Cannot send Names on the control channel");
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
  return param_1;
}



// FUNCTION 1423e66a0 operator== body=71 status=ok
// SIG undefined operator==(void)

undefined8 FStringCurveKey::operator==(float *param_1,float *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if (*param_2 == *param_1) {
    puVar2 = &DAT_143f3eda8;
    if (param_2[4] == 0.0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = *(undefined2 **)(param_2 + 2);
    }
    if (param_1[4] != 0.0) {
      puVar2 = *(undefined2 **)(param_1 + 2);
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


