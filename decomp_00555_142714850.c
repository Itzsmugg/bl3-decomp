// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142714850 ResizeBuffer body=125 status=ok
// SIG undefined ResizeBuffer(void)

void TStaticMeshVertexData<FPositionVertex>::ResizeBuffer
               (longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (uint)param_2;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < uVar1) {
    if (((param_3 & 1) == 0) && (*(int *)(param_1 + 0x1c) < (int)uVar1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo();
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    iVar3 = (*(int *)(param_1 + 0x18) - uVar2) + uVar1;
    *(int *)(param_1 + 0x18) = iVar3;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow();
      return;
    }
  }
  else if (uVar1 < uVar2) {
    TArray<FGameplayTag,FDefaultAllocator>::RemoveAtImpl
              (param_1 + 0x10,param_2,uVar2 - uVar1,~(byte)(param_3 >> 1) & 1);
  }
  return;
}



// FUNCTION 1427148d0 FUN_1427148d0 body=132 status=ok
// SIG undefined FUN_1427148d0(void)

void FUN_1427148d0(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x140,0);
    iVar3 = (int)(uVar1 / 0x140);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x140,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 142714960 RestartLevel body=149 status=ok
// SIG undefined RestartLevel(void)

void APlayerController::RestartLevel(undefined8 param_1)

{
  int iVar1;
  longlong local_28 [4];
  
  iVar1 = FUN_142235230();
  if (iVar1 == 0) {
    local_28[1] = 9;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"?restart",0x12);
    local_28[2] = 0;
    local_28[3] = 0;
    FUN_1429e1320(param_1,local_28,2,0,local_28 + 2);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142714a00 FUN_142714a00 body=105 status=ok
// SIG undefined FUN_142714a00(void)

void FUN_142714a00(longlong *param_1)

{
  longlong lVar1;
  
  if ((param_1[0xa2] != param_1[0x91]) &&
     (lVar1 = (**(code **)(*param_1 + 0x148))(),
     0.5 < *(float *)(lVar1 + 0x790) - *(float *)(param_1 + 0xf8))) {
    FUN_1429e0e70(param_1,param_1[0x91]);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(lVar1 + 0x790);
  }
  return;
}



// FUNCTION 142714a70 FUN_142714a70 body=103 status=ok
// SIG undefined FUN_142714a70(void)

void FUN_142714a70(longlong *param_1)

{
  longlong lVar1;
  
  if (((param_1[0x91] != 0) && (param_1[0xa2] != param_1[0x91])) &&
     (lVar1 = (**(code **)(*param_1 + 0x148))(),
     0.25 < *(float *)(lVar1 + 0x790) - *(float *)(param_1 + 0xf8))) {
    FUN_1429e1c90(param_1);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(lVar1 + 0x790);
  }
  return;
}



// FUNCTION 142714ae0 SampleIndirectionTexture body=194 status=ok
// SIG undefined SampleIndirectionTexture(void)

void SampleIndirectionTexture
               (undefined8 *param_1,int *param_2,longlong param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)*(float *)(param_1 + 1);
  iVar6 = *param_2 + -1;
  iVar3 = (int)(float)*param_1;
  iVar4 = (int)(float)((ulonglong)*param_1 >> 0x20);
  if (iVar3 < 0) {
    iVar6 = 0;
  }
  else if (iVar3 < iVar6) {
    iVar6 = iVar3;
  }
  iVar3 = param_2[1] + -1;
  if (iVar4 < 0) {
    iVar3 = 0;
  }
  else if (iVar4 < iVar3) {
    iVar3 = iVar4;
  }
  iVar4 = 0;
  if ((-1 < iVar7) && (iVar4 = param_2[2] + -1, iVar7 < param_2[2] + -1)) {
    iVar4 = iVar7;
  }
  lVar5 = (longlong)((param_2[1] * iVar4 + iVar3) * *param_2 + iVar6);
  bVar1 = *(byte *)(param_3 + 1 + lVar5 * 4);
  bVar2 = *(byte *)(param_3 + 2 + lVar5 * 4);
  *param_4 = (uint)*(byte *)(param_3 + lVar5 * 4);
  param_4[1] = (uint)bVar1;
  param_4[2] = (uint)bVar2;
  *param_5 = (uint)*(byte *)(param_3 + 3 + lVar5 * 4);
  return;
}



// FUNCTION 142714bb0 FUN_142714bb0 body=347 status=ok
// SIG undefined FUN_142714bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142714bb0(longlong *param_1,float *param_2,float *param_3,undefined8 param_4)

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
  float local_38;
  float local_34;
  float local_30;
  
  (**(code **)(*param_1 + 0x7f8))(param_1,&local_38,param_4);
  fVar1 = *(float *)(param_1 + 0x42);
  fVar2 = *(float *)((longlong)param_1 + 0x214);
  fVar3 = *(float *)(param_1 + 0x43);
  fVar4 = *(float *)((longlong)param_1 + 0x21c);
  fVar8 = param_3[2];
  fVar11 = fVar1 * _DAT_146b08ce0;
  fVar12 = fVar2 * fRam0000000146b08ce4;
  fVar13 = fVar3 * fRam0000000146b08ce8;
  fVar14 = fVar4 * fRam0000000146b08cec;
  fVar9 = param_3[1];
  fVar10 = *param_3;
  fVar5 = fVar8 * fVar12 - fVar9 * fVar13;
  fVar6 = fVar10 * fVar13 - fVar8 * fVar11;
  fVar7 = fVar9 * fVar11 - fVar10 * fVar12;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  local_38 = ((fVar7 * fVar12 - fVar6 * fVar13) + fVar14 * fVar5 + fVar10) * local_38;
  local_34 = ((fVar5 * fVar13 - fVar7 * fVar11) + fVar14 * fVar6 + fVar9) * local_34;
  local_30 = ((fVar6 * fVar11 - fVar5 * fVar12) + fVar14 * fVar7 + fVar8) * local_30;
  fVar8 = local_30 * fVar2 - local_34 * fVar3;
  fVar9 = local_38 * fVar3 - local_30 * fVar1;
  fVar10 = local_34 * fVar1 - local_38 * fVar2;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  *param_2 = (fVar10 * fVar2 - fVar9 * fVar3) + fVar4 * fVar8 + local_38;
  param_2[1] = (fVar8 * fVar3 - fVar10 * fVar1) + fVar4 * fVar9 + local_34;
  param_2[2] = (fVar9 * fVar1 - fVar8 * fVar2) + fVar4 * fVar10 + local_30;
  return param_2;
}



// FUNCTION 142714d10 FUN_142714d10 body=99 status=ok
// SIG undefined FUN_142714d10(void)

void FUN_142714d10(longlong param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x460) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x460) + 0x5e8))();
    (**(code **)(**(longlong **)(param_2 + 0x460) + 0x788))
              (*(longlong **)(param_2 + 0x460),*(undefined8 *)(param_1 + 0x460));
    FUN_142227350(*(undefined8 *)(param_2 + 0x460),0,1);
    *(undefined8 *)(param_2 + 0x460) = 0;
  }
  return;
}



// FUNCTION 142714d90 FUN_142714d90 body=68 status=ok
// SIG undefined FUN_142714d90(void)

void FUN_142714d90(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0x7a0))();
  FUN_1429ed420(param_1,param_2);
  *(uint *)(param_2 + 0x484) =
       *(uint *)(param_2 + 0x484) ^
       (*(uint *)((longlong)param_1 + 0x484) ^ *(uint *)(param_2 + 0x484)) & 2;
  return;
}



// FUNCTION 142714de0 FUN_142714de0 body=598 status=ok
// SIG undefined FUN_142714de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142714de0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  float local_a4;
  undefined1 local_a0 [16];
  longlong *local_90;
  int local_88;
  
  (**(code **)(*param_1 + 0x7a8))(param_1,&local_d8,local_a0);
  fVar11 = 0.8;
  lVar5 = 0;
  FRotator::Vector(local_a0,&local_c8);
  uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::GetPawnIterator(uVar2,&local_90);
  for (; (-1 < local_88 && (local_88 < (int)local_90[1])); local_88 = local_88 + 1) {
    lVar3 = FWeakObjectPtr::Get(*local_90 + (longlong)local_88 * 8);
    if ((((lVar3 != 0) && ((*(byte *)(lVar3 + 0x80) & 1) == 0)) && (*(char *)(lVar3 + 0x93) < '\0'))
       && (lVar3 != param_1[0x91])) {
      lVar1 = *(longlong *)(lVar3 + 0x168);
      if (lVar1 == 0) {
        local_b0 = DAT_1468b5d98;
        puVar4 = &local_b8;
        local_b8 = _DAT_1468b5d90;
      }
      else {
        puVar4 = (undefined8 *)&local_e8;
        local_e8 = *(undefined4 *)(lVar1 + 0x220);
        local_e0 = *(undefined4 *)(lVar1 + 0x228);
        uStack_e4 = *(undefined4 *)(lVar1 + 0x224);
      }
      local_a4 = *(float *)(puVar4 + 1);
      fVar7 = (float)*puVar4 - local_d8;
      fVar9 = (float)((ulonglong)*puVar4 >> 0x20) - local_d4;
      fVar10 = local_a4 - local_d0;
      fVar8 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar10 * fVar10);
      if (1e-08 < fVar8) {
        fVar6 = 1.0 / fVar8;
        fVar7 = fVar6 * fVar7;
        fVar9 = fVar6 * fVar9;
        fVar6 = fVar6 * fVar10;
      }
      else {
        fVar8 = 1.0;
        fVar6 = local_c0;
        fVar7 = local_c8;
        fVar9 = local_c4;
      }
      fVar7 = local_c8 * fVar7 + local_c4 * fVar9 + local_c0 * fVar6;
      if ((fVar8 < 25000.0) && (fVar11 < fVar7)) {
        lVar5 = lVar3;
        fVar11 = fVar7;
      }
    }
  }
  return lVar5;
}



// FUNCTION 142715040 FUN_142715040 body=158 status=ok
// SIG undefined FUN_142715040(void)

void FUN_142715040(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x488);
  if ((((*(longlong **)(param_1 + 0x510) == plVar4) || (*(longlong *)(param_1 + 0x7b8) != 0)) &&
      ((plVar4 != (longlong *)0x0 ||
       (plVar4 = *(longlong **)(param_1 + 0x7b8), plVar4 != (longlong *)0x0)))) &&
     (((*(char *)((longlong)plVar4 + 0x95) == '\x02' && (iVar1 = FUN_142235230(), iVar1 != 3)) &&
      (lVar2 = (**(code **)(*plVar4 + 0x6e8))(plVar4), lVar2 != 0)))) {
    uVar3 = UNetworkPredictionInterface::GetPrivateStaticClass();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001427150d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1427150f0 FUN_1427150f0 body=56 status=ok
// SIG undefined FUN_1427150f0(void)

void FUN_1427150f0(longlong param_1,longlong param_2)

{
  AActor::Serialize();
  FArchive::UsingCustomVersion(param_2,&DAT_146534b50);
  *(undefined4 *)(param_1 + 0xac0) = *(undefined4 *)(param_2 + 0x44);
  return;
}



// FUNCTION 142715130 FUN_142715130 body=261 status=ok
// SIG undefined FUN_142715130(void)

void FUN_142715130(longlong param_1,longlong *param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x50,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x50,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x54,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x54,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FPositionVertexBuffer::AllocateData(param_1,param_3);
  }
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
    if (*(int *)(param_1 + 0x54) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
    }
    *(undefined8 *)(param_1 + 0x48) = uVar3;
  }
  return;
}



// FUNCTION 142715240 FUN_142715240 body=432 status=ok
// SIG undefined FUN_142715240(void)

void FUN_142715240(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int local_res18 [2];
  int local_res20 [2];
  undefined8 local_38 [2];
  
  FUN_141763960();
  if (((*(byte *)(param_2 + 5) & 1) != 0) && ((int)param_2[8] < 0x1d9)) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 0x30) * 0x158,
               (longlong)*(int *)(param_1 + 0x34) * 0x158);
    local_res18[0] = *(int *)(param_1 + 0x30);
    plVar2 = (longlong *)param_2[1];
    local_res20[0] = local_res18[0];
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res18,4);
      }
    }
    else {
      local_res18[0] = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = (longlong *)param_2[1];
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res20,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res20,4);
      }
    }
    else {
      local_res20[0] = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    iVar4 = 0;
    local_38[0] = 0;
    (**(code **)(*param_2 + 0x30))(param_2,local_38);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      TArray<FPoly,FDefaultAllocator>::Empty(param_1 + 0x28);
      iVar1 = *(int *)(param_1 + 0x30);
      lVar5 = (longlong)local_res18[0];
      iVar3 = iVar1 + local_res18[0];
      *(int *)(param_1 + 0x30) = iVar3;
      if (*(int *)(param_1 + 0x34) < iVar3) {
        TArray<FPoly,FDefaultAllocator>::ResizeGrow(param_1 + 0x28);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar1 * 0x158 + *(longlong *)(param_1 + 0x28)),0,lVar5 * 0x158);
    }
    if (0 < *(int *)(param_1 + 0x30)) {
      do {
        FUN_1425b12c0(param_2,(longlong)iVar4 * 0x158 + *(longlong *)(param_1 + 0x28));
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x30));
    }
    return;
  }
  FUN_1426f7110(param_2,param_1 + 0x28);
  return;
}



// FUNCTION 142715420 ServerCamera_Validate body=116 status=ok
// SIG undefined ServerCamera_Validate(void)

ulonglong APlayerController::ServerCamera_Validate(undefined8 param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar3 = FName::GetNames();
  uVar4 = uVar3;
  if ((-1 < param_2) && (param_2 < *(int *)(uVar3 + 0x400))) {
    uVar6 = param_2 >> 0x1f & 0x3fff;
    uVar2 = param_2 + uVar6;
    lVar5 = (longlong)((int)uVar2 >> 0xe);
    lVar1 = (longlong)(int)((uVar2 & 0x3fff) - uVar6) * 8;
    uVar4 = *(ulonglong *)(uVar3 + lVar5 * 8);
    if ((*(longlong *)(lVar1 + uVar4) != 0) &&
       ((uVar4 = (ulonglong)*(uint *)(uVar3 + 0x400), param_2 < (int)*(uint *)(uVar3 + 0x400) &&
        (uVar4 = *(ulonglong *)(uVar3 + lVar5 * 8), *(longlong *)(lVar1 + uVar4) != 0)))) {
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1427154a0 FUN_1427154a0 body=72 status=ok
// SIG undefined FUN_1427154a0(void)

void FUN_1427154a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((1 < *(int *)(param_2 + 8)) &&
     (plVar1 = *(longlong **)(lVar2 + 0x140), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x838))(plVar1,param_1,param_2,1);
  }
  return;
}



// FUNCTION 142715530 FUN_142715530 body=69 status=ok
// SIG undefined FUN_142715530(void)

void FUN_142715530(longlong *param_1,longlong param_2)

{
  longlong local_18 [2];
  
  (**(code **)(*param_1 + 0xd28))(param_1,local_18,(longlong *)(param_2 + 8),1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142715580 FUN_142715580 body=287 status=ok
// SIG undefined FUN_142715580(void)

void FUN_142715580(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined **local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined **local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_1426f9c40(param_1 + 0xc9,param_2 + 8);
  FUN_1426f9c40(param_1 + 0xcd,param_2 + 8);
  local_50 = *(undefined8 *)(param_2 + 8);
  local_48 = *(longlong *)(param_2 + 0x10);
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_58 = &PTR_FUN_143f740c8;
  local_40 = 0;
  local_38 = 0;
  (**(code **)(*param_1 + 0xc28))(param_1,&local_58);
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xc38))(param_1,param_2);
  if (plVar1 != (longlong *)0x0) {
    FUN_1426f9c40(plVar1 + 0xcd,param_1[0x8c] + 0x4b8);
    local_28 = *(undefined8 *)(param_1[0x8c] + 0x4b8);
    local_20 = *(longlong *)(param_1[0x8c] + 0x4c0);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    local_30 = &PTR_FUN_143f740c8;
    local_18 = 0;
    local_10 = 0;
    (**(code **)(*plVar1 + 0xc28))(plVar1,&local_30);
  }
  FUN_1404bf980(param_2);
  return;
}



// FUNCTION 1427156a0 ServerMutePlayer_Validate body=62 status=ok
// SIG undefined ServerMutePlayer_Validate(void)

undefined1 APlayerController::ServerMutePlayer_Validate(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
    if (cVar2 != '\0') {
      uVar1 = 1;
      goto LAB_1427156c6;
    }
  }
  uVar1 = 0;
LAB_1427156c6:
  FUN_1404bf980(param_2);
  return uVar1;
}



// FUNCTION 1427156e0 FUN_1427156e0 body=381 status=ok
// SIG undefined FUN_1427156e0(void)

void FUN_1427156e0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *local_res8;
  longlong local_res10;
  
  local_res10 = param_2;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 == 0) {
    return;
  }
  cVar3 = FUN_1428cfb70(lVar4);
  if (cVar3 == '\0') {
    return;
  }
  if (*(ushort *)(param_1 + 0xd9) == 0) {
    return;
  }
  if (*(ushort *)(param_1 + 0xd9) <= *(ushort *)((longlong)param_1 + 0x6ca)) {
    return;
  }
  lVar7 = param_1[0xa1];
  if (lVar7 != 0) {
    lVar5 = FUN_1429c30a0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1425d0d80(lVar7,local_res10);
      goto LAB_14271578d;
    }
  }
  lVar7 = 0;
LAB_14271578d:
  pcVar6 = (char *)FUN_14288cc20(DAT_146b17150,lVar4);
  plVar1 = *(longlong **)(lVar4 + 0x140);
  if (((*pcVar6 == '\0') &&
      (lVar4 = UObjectBaseUtility::GetOutermost(lVar4), local_res10 == *(longlong *)(lVar4 + 0x18)))
     && (plVar1 != (longlong *)0x0)) {
    local_res8 = param_1;
    (**(code **)(*plVar1 + 2000))(plVar1,&local_res8);
  }
  if (lVar7 != 0) {
    plVar8 = *(longlong **)(lVar7 + 0x48);
    plVar1 = plVar8 + *(int *)(lVar7 + 0x50);
    for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
      if ((*plVar8 != 0) && (lVar4 = *(longlong *)(*plVar8 + 0x98), lVar4 != 0)) {
        lVar7 = FUN_1429e18b0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_1429e1e70(lVar4,local_res10);
        }
      }
    }
  }
  return;
}



// FUNCTION 142715860 FUN_142715860 body=68 status=ok
// SIG undefined FUN_142715860(void)

void FUN_142715860(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *param_1;
  local_18 = 0;
  local_10 = 0;
  lVar2 = AActor::GetWorldSettings();
  (**(code **)(lVar1 + 0xb68))(param_1,*(longlong *)(lVar2 + 0x600) == 0,&local_18);
  return;
}



// FUNCTION 1427158c0 FUN_1427158c0 body=201 status=ok
// SIG undefined FUN_1427158c0(void)

void FUN_1427158c0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = FUN_142235230();
  if (iVar3 != 3) {
    cVar2 = FUN_1423d94f0(param_1,0x145);
    if ((cVar2 == '\0') &&
       ((cVar2 = FUN_1423d94f0(param_1,0x142), cVar2 == '\0' ||
        ((*(byte *)(param_1 + 200) & 0x10) == 0)))) {
      if (param_1[0x91] != 0) {
        FUN_1429e0e70(param_1);
        return;
      }
    }
    else {
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar1 = *(longlong **)(lVar4 + 0x140);
      cVar2 = FUN_14293c250(plVar1,param_1);
      if (cVar2 != '\0') {
        if (param_1[0x91] != 0) {
          (**(code **)(*param_1 + 0x780))(param_1);
        }
        (**(code **)(*plVar1 + 0x840))(plVar1,param_1);
      }
    }
  }
  return;
}



// FUNCTION 142715990 FUN_142715990 body=330 status=ok
// SIG undefined FUN_142715990(void)

void FUN_142715990(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_res8;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  local_res8 = 0x142;
  cVar2 = FUN_1423d94f0(param_1,0x142);
  if (cVar2 == '\0') {
    if (*(float *)((longlong)param_1 + 0x584) == *(float *)(lVar3 + 0x790)) {
      return;
    }
    if (param_1[0xa2] == param_1[0x91]) {
      puVar4 = (undefined8 *)FUN_1423d5960(param_1,&local_res8);
      FUN_1429e09e0(param_1,*puVar4);
      local_c = local_c & 0xfffffffe;
      local_18 = 0;
      local_10 = 0x40000000;
      local_14 = 1;
      uVar5 = (**(code **)(*param_1 + 0x758))(param_1);
      FUN_1429e1110(param_1,uVar5,&local_18);
    }
    else {
      (**(code **)(*param_1 + 0xc80))();
    }
  }
  else {
    lVar1 = param_2[1];
    param_1[0xb1] = *param_2;
    *(undefined8 *)((longlong)param_1 + 0x594) = *param_3;
    *(int *)(param_1 + 0xb2) = (int)lVar1;
    *(undefined4 *)((longlong)param_1 + 0x59c) = *(undefined4 *)(param_3 + 1);
    if (*(float *)(lVar3 + 0x790) - *(float *)((longlong)param_1 + 0x584) <= 2.0) {
      return;
    }
    puVar4 = (undefined8 *)FUN_1423d5960(param_1,&local_res8);
    FUN_1429e09e0(param_1,*puVar4);
  }
  *(undefined4 *)((longlong)param_1 + 0x584) = *(undefined4 *)(lVar3 + 0x790);
  return;
}



// FUNCTION 142715ae0 FUN_142715ae0 body=1601 status=ok
// SIG undefined FUN_142715ae0(void)

void FUN_142715ae0(longlong *param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  float fVar15;
  int local_128;
  uint uStack_124;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  uint uStack_104;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e0;
  uint *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 uStack_b8;
  uint *puStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  int local_98;
  uint local_88;
  uint uStack_84;
  uint local_80;
  int local_78;
  uint local_68;
  uint uStack_64;
  uint local_60;
  
  if ((*(byte *)(param_1 + 200) & 1) == 0) {
    lVar8 = (**(code **)(*param_1 + 0x148))();
    *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) | 1;
    lVar9 = AActor::GetWorldSettings();
    if (*(longlong *)(lVar9 + 0x600) == 0) {
      iVar11 = (**(code **)(**(longlong **)(lVar8 + 0x140) + 0x760))();
      if (iVar11 < 8) {
        fVar15 = 6.103702e-06;
      }
      else {
        fVar15 = 1.5259255e-05;
      }
      local_108 = 0;
      uStack_104 = 1;
      plVar3 = *(longlong **)(*(longlong *)(lVar8 + 0x38) + 0x528);
      uVar7 = *(uint *)(plVar3 + 5);
      puVar1 = (uint *)(plVar3 + 2);
      uStack_f4 = 0;
      iStack_f0 = 0;
      if (uVar7 != 0) {
        puVar14 = (uint *)plVar3[4];
        if ((uint *)plVar3[4] == (uint *)0x0) {
          puVar14 = puVar1;
        }
        uVar12 = *puVar14;
        iStack_f0 = 0;
        local_108 = 0;
        while (uVar12 == 0) {
          lVar9 = (longlong)local_108;
          iStack_f0 = iStack_f0 + 0x20;
          iVar11 = local_108 + 1;
          bVar6 = (int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_108;
          local_108 = iVar11;
          if (bVar6) goto LAB_142715ed5;
          uVar12 = puVar14[lVar9 + 1];
        }
        uStack_104 = -uVar12 & uVar12;
        iVar11 = 0x1f;
        if (uStack_104 != 0) {
          for (; uStack_104 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uStack_104 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        uStack_f4 = (iStack_f0 - iVar11) + 0x1f;
        if ((int)uVar7 < (int)uStack_f4) {
LAB_142715ed5:
          uStack_f4 = uVar7;
        }
      }
      uStack_64 = *(uint *)(plVar3 + 5);
      uStack_e0 = CONCAT44(uStack_104,local_108);
      uStack_a8 = 0xffffffff;
      uStack_a4 = uStack_f4;
      local_c8 = CONCAT44(uStack_ec,iStack_f0);
      local_78 = (int)uStack_64 >> 5;
      local_68 = -1 << ((byte)uStack_64 & 0x1f);
      local_60 = uStack_64 & 0xffffffe0;
      uStack_b8 = CONCAT44(uStack_104,local_108);
      local_d8 = puVar1;
      local_c0 = plVar3;
      puStack_b0 = puVar1;
      uStack_a0 = local_c8;
      uStack_d0 = uStack_a8;
      uStack_cc = uStack_a4;
      uVar12 = uStack_64;
      if (uStack_64 != uVar7) {
        puVar14 = (uint *)plVar3[4];
        if ((uint *)plVar3[4] == (uint *)0x0) {
          puVar14 = puVar1;
        }
        uVar12 = puVar14[local_78] & local_68;
        while (uVar12 == 0) {
          lVar9 = (longlong)local_78;
          local_60 = local_60 + 0x20;
          iVar11 = local_78 + 1;
          bVar6 = (int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
          local_78 = iVar11;
          if (bVar6) goto LAB_142715fbd;
          uVar12 = puVar14[lVar9 + 1];
          local_68 = 0xffffffff;
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
        uStack_64 = (local_60 - iVar11) + 0x1f;
        uVar12 = uStack_64;
        if ((int)uVar7 < (int)uStack_64) {
LAB_142715fbd:
          uStack_64 = uVar7;
          uVar12 = uVar7;
        }
      }
      while (((uStack_a4 != uVar12 || (puStack_b0 != puVar1)) || (local_c0 != plVar3))) {
        plVar4 = *(longlong **)(*local_c0 + 8 + (longlong)(int)uStack_a4 * 0x18);
        plVar5 = *(longlong **)(*local_c0 + (longlong)(int)uStack_a4 * 0x18);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        if ((plVar5 != (longlong *)0x0) && (lVar9 = *plVar5, lVar9 != 0)) {
          uVar7 = *(uint *)(lVar9 + 0xc);
          if ((int)uVar7 < (int)DAT_1469e91c4) {
            uVar13 = uVar7 & 0xffff;
            if ((int)uVar7 < 0) {
              uVar7 = uVar7 + 0xffff;
              uVar13 = uVar13 - 0x10000;
            }
            lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                     (longlong)(int)uVar13 * 0x18;
          }
          else {
            lVar10 = 0;
          }
          if ((((*(uint *)(lVar10 + 8) >> 0x1d & 1) == 0) &&
              (*(float *)(lVar9 + 0x140) <= 1.0 && *(float *)(lVar9 + 0x140) != 1.0)) &&
             ((*(byte *)(lVar9 + 0x90) & 4) == 0)) {
            iVar11 = rand();
            AActor::SetNetUpdateTime(lVar9,(float)iVar11 * fVar15 + *(float *)(lVar8 + 0x790));
          }
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar4 + 1;
          lVar9 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        uStack_a8 = uStack_a8 & ~uStack_b8._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b8);
      }
    }
    else {
      local_128 = 0;
      uStack_124 = 1;
      plVar3 = *(longlong **)(*(longlong *)(lVar8 + 0x38) + 0x528);
      uVar7 = *(uint *)(plVar3 + 5);
      puVar1 = (uint *)(plVar3 + 2);
      uStack_114 = 0;
      iStack_110 = 0;
      if (uVar7 != 0) {
        puVar14 = (uint *)plVar3[4];
        if ((uint *)plVar3[4] == (uint *)0x0) {
          puVar14 = puVar1;
        }
        uVar12 = *puVar14;
        iStack_110 = 0;
        local_128 = 0;
        while (uVar12 == 0) {
          lVar8 = (longlong)local_128;
          iStack_110 = iStack_110 + 0x20;
          iVar11 = local_128 + 1;
          bVar6 = (int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_128;
          local_128 = iVar11;
          if (bVar6) goto LAB_142715c04;
          uVar12 = puVar14[lVar8 + 1];
        }
        uStack_124 = -uVar12 & uVar12;
        iVar11 = 0x1f;
        if (uStack_124 != 0) {
          for (; uStack_124 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uStack_124 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        uStack_114 = (iStack_110 - iVar11) + 0x1f;
        if ((int)uVar7 < (int)uStack_114) {
LAB_142715c04:
          uStack_114 = uVar7;
        }
      }
      uStack_84 = *(uint *)(plVar3 + 5);
      uStack_b8 = CONCAT44(uStack_124,local_128);
      uStack_d0 = 0xffffffff;
      uStack_cc = uStack_114;
      local_c8 = CONCAT44(uStack_10c,iStack_110);
      local_98 = (int)uStack_84 >> 5;
      local_88 = -1 << ((byte)uStack_84 & 0x1f);
      local_80 = uStack_84 & 0xffffffe0;
      uStack_e0 = CONCAT44(uStack_124,local_128);
      local_d8 = puVar1;
      local_c0 = plVar3;
      puStack_b0 = puVar1;
      uStack_a0 = local_c8;
      uStack_a8 = uStack_d0;
      uStack_a4 = uStack_cc;
      uVar12 = uStack_84;
      if (uStack_84 != uVar7) {
        puVar14 = (uint *)plVar3[4];
        if ((uint *)plVar3[4] == (uint *)0x0) {
          puVar14 = puVar1;
        }
        uVar12 = puVar14[local_98] & local_88;
        while (uVar12 == 0) {
          lVar8 = (longlong)local_98;
          local_80 = local_80 + 0x20;
          iVar11 = local_98 + 1;
          bVar6 = (int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
          local_98 = iVar11;
          if (bVar6) goto LAB_142715cde;
          uVar12 = puVar14[lVar8 + 1];
          local_88 = 0xffffffff;
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
        uStack_84 = (local_80 - iVar11) + 0x1f;
        uVar12 = uStack_84;
        if ((int)uVar7 < (int)uStack_84) {
LAB_142715cde:
          uStack_84 = uVar7;
          uVar12 = uVar7;
        }
      }
      while ((uStack_cc != uVar12 || (local_d8 != puVar1))) {
        plVar4 = *(longlong **)(*plVar3 + 8 + (longlong)(int)uStack_cc * 0x18);
        plVar5 = *(longlong **)(*plVar3 + (longlong)(int)uStack_cc * 0x18);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        if ((plVar5 != (longlong *)0x0) && (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)
           ) {
          uVar7 = *(uint *)((longlong)plVar5 + 0xc);
          if ((int)uVar7 < (int)DAT_1469e91c4) {
            uVar13 = uVar7 & 0xffff;
            if ((int)uVar7 < 0) {
              uVar7 = uVar7 + 0xffff;
              uVar13 = uVar13 - 0x10000;
            }
            lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                    (longlong)(int)uVar13 * 0x18;
          }
          else {
            lVar8 = 0;
          }
          if (((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) && ((*(byte *)(plVar5 + 0x12) & 4) == 0)) {
            (**(code **)(*plVar5 + 0x600))(plVar5);
          }
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar4 + 1;
          lVar8 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        uStack_d0 = uStack_d0 & ~uStack_e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
      }
    }
  }
  return;
}



// FUNCTION 142716150 FUN_142716150 body=607 status=ok
// SIG undefined FUN_142716150(void)

void FUN_142716150(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  bool bVar9;
  longlong lVar10;
  char cVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined **local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  plVar1 = (longlong *)(param_3 + 8);
  FUN_142714410(param_1,plVar1);
  plVar13 = (longlong *)(**(code **)(*param_2 + 0xc38))(param_2,param_3);
  if (plVar13 != (longlong *)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    lVar6 = param_2[0x8c];
    lVar14 = lVar6 + 0x4b0;
    iVar12 = *(int *)(param_1 + 0x18);
    for (puVar15 = puVar5; puVar15 != puVar5 + (longlong)iVar12 * 2; puVar15 = puVar15 + 2) {
      plVar7 = (longlong *)puVar15[1];
      puVar8 = (undefined8 *)*puVar15;
      plVar2 = plVar7 + 1;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar2 = (int)*plVar2 + 1;
        UNLOCK();
      }
      if ((*plVar1 == 0) || (cVar11 = (**(code **)*puVar8)(), cVar11 == '\0')) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if (bVar9) {
        if ((int)((longlong)puVar15 - (longlong)puVar5 >> 4) != -1) goto LAB_1427162f1;
        break;
      }
    }
    iVar12 = FUN_1426f4b40(plVar13 + 0xc9,lVar14);
    if (iVar12 == -1) {
      local_90 = *plVar1;
      local_88 = *(longlong *)(param_3 + 0x10);
      if (local_88 != 0) {
        LOCK();
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
        UNLOCK();
      }
      local_98 = &PTR_FUN_143f740c8;
      local_80 = 0;
      local_78 = 0;
      (**(code **)(*param_2 + 0xc30))(param_2,&local_98);
    }
LAB_1427162f1:
    iVar12 = FUN_1426f4b40(plVar13 + 0xc9,lVar14);
    if ((iVar12 == -1) && (iVar12 = FUN_1426f4b40(plVar13 + 0xcb,lVar14), iVar12 == -1)) {
      FUN_142714410(param_1 + 0x20,plVar1);
      FUN_142714410(plVar13 + 0xcd,lVar6 + 0x4b8);
      local_68 = *(undefined8 *)(lVar6 + 0x4b8);
      local_60 = *(longlong *)(lVar6 + 0x4c0);
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      local_58 = 0;
      local_70 = &PTR_FUN_143f740c8;
      local_50 = 0;
      (**(code **)(*plVar13 + 0xc30))(plVar13,&local_70);
    }
  }
  return;
}



// FUNCTION 1427163b0 FUN_1427163b0 body=40 status=ok
// SIG undefined FUN_1427163b0(void)

void FUN_1427163b0(longlong param_1,undefined8 param_2)

{
  FUN_142716150(param_1 + 0x648,param_1,param_2);
  FUN_1404bf980(param_2);
  return;
}



// FUNCTION 1427163e0 FUN_1427163e0 body=344 status=ok
// SIG undefined FUN_1427163e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1427163e0(longlong param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_708 [32];
  undefined1 local_6e8 [36];
  undefined4 local_6c4;
  undefined8 local_6b8;
  undefined4 local_6b0;
  undefined8 local_6ac;
  undefined4 local_6a4;
  undefined4 local_6a0;
  longlong local_a0;
  longlong local_90;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_708;
  if ((*(longlong *)(param_1 + 0x528) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x528) + 0x2c40) & 0x80) != 0)) {
    local_6c4 = 0;
    puVar3 = (undefined8 *)FUN_142436ac0(local_6e8,param_2,param_1);
    uVar1 = *puVar3;
    uVar2 = *(undefined4 *)(puVar3 + 1);
    (**(code **)(**(longlong **)(param_1 + 0x528) + 0x720))
              (*(longlong **)(param_1 + 0x528),&local_6b8);
    local_6ac = CONCAT44((float)((int)param_3 >> 0x10 & 0xffff) * 0.005493164,
                         (float)(param_3 & 0xffff) * 0.005493164);
    local_6a4 = local_6c4;
    local_6b8 = uVar1;
    local_6b0 = uVar2;
    local_6a0 = param_4;
    FUN_1426e0ae0(*(undefined8 *)(param_1 + 0x528),&local_6b8);
    if (local_90 != 0) {
      FMemory::Free();
    }
    if (local_a0 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142716540 FUN_142716540 body=264 status=ok
// SIG undefined FUN_142716540(void)

void FUN_142716540(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_38;
  undefined2 *local_30;
  int local_28;
  
  lVar1 = *(longlong *)(param_1 + 0x508);
  if (lVar1 != 0) {
    local_res10 = param_2;
    local_res18 = param_3;
    lVar3 = FUN_1429c30a0();
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
      local_res8 = local_res10;
      FName::ToString(&local_res8,&local_30);
      lVar3 = *DAT_146b17150;
      uVar4 = FUN_1422325e0(param_1);
      (**(code **)(lVar3 + 0x400))(DAT_146b17150,uVar4,&local_30,1);
      puVar5 = &DAT_143f3eda8;
      if (local_28 != 0) {
        puVar5 = local_30;
      }
      FName::FName(&local_38,puVar5,1);
      if (local_30 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_res10 = local_38;
      FUN_1425d4eb0(lVar1,&local_res10,&local_res18,param_4);
    }
  }
  return;
}



// FUNCTION 142716650 FUN_142716650 body=296 status=ok
// SIG undefined FUN_142716650(void)

ulonglong FUN_142716650(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong local_res10;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_res10 = param_2;
  uVar7 = FName::GetNames();
  uVar8 = uVar7;
  if ((-1 < (int)local_res10) && (uVar8 = local_res10, (int)local_res10 < *(int *)(uVar7 + 0x400)))
  {
    uVar11 = (int)local_res10 >> 0x1f & 0x3fff;
    uVar6 = (int)local_res10 + uVar11;
    lVar10 = (longlong)((int)uVar6 >> 0xe);
    lVar3 = (longlong)(int)((uVar6 & 0x3fff) - uVar11) * 8;
    uVar8 = *(ulonglong *)(uVar7 + lVar10 * 8);
    if ((*(longlong *)(lVar3 + uVar8) != 0) &&
       ((uVar8 = (ulonglong)*(uint *)(uVar7 + 0x400),
        (int)local_res10 < (int)*(uint *)(uVar7 + 0x400) &&
        (uVar8 = *(ulonglong *)(uVar7 + lVar10 * 8), *(longlong *)(lVar3 + uVar8) != 0)))) {
      FText::FText(local_28);
      uVar9 = FName::ToString(&local_res10,local_38);
      cVar5 = FPackageName::IsValidLongPackageName(uVar9,1,local_28);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)local_20 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
      return (ulonglong)(cVar5 != '\0');
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 142716780 FUN_142716780 body=355 status=ok
// SIG undefined FUN_142716780(void)

void FUN_142716780(longlong param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  
  puVar7 = (undefined8 *)*param_2;
  puVar8 = puVar7 + (longlong)(int)param_2[1] * 2;
  for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
    bVar1 = *(byte *)(puVar7 + 1);
    lVar2 = *(longlong *)(param_1 + 0x508);
    local_res10 = *puVar7;
    if (lVar2 != 0) {
      local_40 = param_3;
      lVar4 = FUN_1429c30a0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_res20 = local_res10;
        FName::ToString(&local_res20,&local_38);
        lVar4 = *DAT_146b17150;
        uVar5 = FUN_1422325e0(param_1);
        (**(code **)(lVar4 + 0x400))(DAT_146b17150,uVar5,&local_38,1);
        puVar6 = &DAT_143f3eda8;
        if (local_30 != 0) {
          puVar6 = local_38;
        }
        FName::FName(&local_48,puVar6,1);
        if (local_38 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_res10 = local_48;
        FUN_1425d4eb0(lVar2,&local_res10,&local_40,bVar1 & 1);
      }
    }
  }
  return;
}



// FUNCTION 1427168f0 FUN_1427168f0 body=390 status=ok
// SIG undefined FUN_1427168f0(void)

undefined8 FUN_1427168f0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 local_res10;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar11 = (undefined8 *)*param_2;
  puVar10 = puVar11 + (longlong)(int)param_2[1] * 2;
  while( true ) {
    if (puVar11 == puVar10) {
      return 1;
    }
    local_res10 = *puVar11;
    lVar6 = FName::GetNames();
    if (((int)(uint)local_res10 < 0) || (*(int *)(lVar6 + 0x400) <= (int)(uint)local_res10)) {
      return 0;
    }
    uVar9 = (uint)local_res10 & 0x3fff;
    uVar8 = (uint)local_res10;
    if ((int)(uint)local_res10 < 0) {
      uVar8 = (uint)local_res10 + 0x3fff;
      uVar9 = uVar9 - 0x4000;
    }
    plVar3 = (longlong *)(lVar6 + (longlong)((int)uVar8 >> 0xe) * 8);
    if (*(longlong *)((longlong)(int)uVar9 * 8 + *plVar3) == 0) {
      return 0;
    }
    if (*(int *)(lVar6 + 0x400) <= (int)(uint)local_res10) {
      return 0;
    }
    if (*(longlong *)((longlong)(int)uVar9 * 8 + *plVar3) == 0) break;
    FText::FText(local_28);
    uVar7 = FName::ToString(&local_res10,local_38);
    cVar5 = FPackageName::IsValidLongPackageName(uVar7,1,local_28);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    plVar3 = local_20;
    if (cVar5 == '\0') {
      if (local_20 == (longlong *)0x0) {
        return 0;
      }
      LOCK();
      plVar3 = local_20 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 != 1) {
        return 0;
      }
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 != 1) {
        return 0;
      }
      (**(code **)(*local_20 + 8))(local_20,1);
      return 0;
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    puVar11 = puVar11 + 2;
  }
  return 0;
}



// FUNCTION 142716a80 FUN_142716a80 body=78 status=ok
// SIG undefined FUN_142716a80(void)

void FUN_142716a80(longlong *param_1)

{
  longlong *plVar1;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x758))();
  if (plVar1 != param_1) {
    local_c = local_c & 0xfffffffe;
    local_18 = 0;
    local_10 = 0x40000000;
    local_14 = 1;
    FUN_1429e1110(param_1,plVar1,&local_18);
  }
  return;
}



// FUNCTION 142716ad0 FUN_142716ad0 body=61 status=ok
// SIG undefined FUN_142716ad0(void)

void FUN_142716ad0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_1423d94f0(param_1,0x142);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142716b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xdd8))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142716b10 FUN_142716b10 body=61 status=ok
// SIG undefined FUN_142716b10(void)

void FUN_142716b10(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_1423d94f0(param_1,0x142);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142716b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xdd8))(param_1,0xffffffff);
    return;
  }
  return;
}



// FUNCTION 142716b50 FUN_142716b50 body=196 status=ok
// SIG undefined FUN_142716b50(void)

void FUN_142716b50(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  cVar1 = FUN_1423d94f0(param_1,0x142);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0xea0))(param_1);
    local_14 = *(undefined1 *)(param_2 + 1);
    local_18 = *param_2;
    local_10 = param_2[2];
    local_c = local_c ^ (param_2[3] ^ local_c) & 1;
    (**(code **)(*param_1 + 0xe18))(param_1,param_1,&local_18);
    local_14 = *(undefined1 *)(param_2 + 1);
    local_18 = *param_2;
    local_10 = param_2[2];
    local_c = local_c ^ (param_2[3] ^ local_c) & 1;
    FUN_1429e1110(param_1,param_1,&local_18);
  }
  return;
}



// FUNCTION 142716c40 FUN_142716c40 body=79 status=ok
// SIG undefined FUN_142716c40(void)

void FUN_142716c40(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  lVar1 = (**(code **)(*param_1 + 0x6d0))(local_18,0,1);
  if (lVar1 != 0) {
    FUN_1426a85f0(lVar1,&local_18,param_3);
  }
  return;
}



// FUNCTION 142716c90 FUN_142716c90 body=79 status=ok
// SIG undefined FUN_142716c90(void)

void FUN_142716c90(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  lVar1 = (**(code **)(*param_1 + 0x6d0))(local_18,0,1);
  if (lVar1 != 0) {
    FUN_1426a9420(lVar1,&local_18,param_3);
  }
  return;
}



// FUNCTION 142716ce0 FUN_142716ce0 body=47 status=ok
// SIG undefined FUN_142716ce0(void)

void FUN_142716ce0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  FUN_1423990b0(local_18,&local_18,0,0,0);
  return;
}



// FUNCTION 142716d10 SetAllPhysicsRotation body=25 status=ok
// SIG undefined SetAllPhysicsRotation(void)

void UPrimitiveComponent::SetAllPhysicsRotation(undefined8 param_1,undefined8 param_2)

{
  FUN_142399b10(param_1,param_2,0,0,0);
  return;
}



// FUNCTION 142716d30 FUN_142716d30 body=47 status=ok
// SIG undefined FUN_142716d30(void)

void FUN_142716d30(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  FUN_142399b90(local_18,&local_18,0,0,0);
  return;
}



// FUNCTION 142716d80 FUN_142716d80 body=64 status=ok
// SIG undefined FUN_142716d80(void)

void FUN_142716d80(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x6c) = param_2;
    FUN_1426b0110(lVar1);
  }
  return;
}



// FUNCTION 142716dc0 FUN_142716dc0 body=67 status=ok
// SIG undefined FUN_142716dc0(void)

void FUN_142716dc0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  *(uint *)(param_1 + 0x780) = *(uint *)(param_1 + 0x780) | 2;
  FWeakObjectPtr::operator=(param_1 + 0x78c);
  uVar1 = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x7ac) = *param_3;
  *(undefined4 *)(param_1 + 0x7b4) = uVar1;
  return;
}



// FUNCTION 142716e10 FUN_142716e10 body=101 status=ok
// SIG undefined FUN_142716e10(void)

void FUN_142716e10(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0x780) = *(uint *)(param_1 + 0x780) | 1;
  FWeakObjectPtr::operator=(param_1 + 0x784);
  uVar2 = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x794) = *param_3;
  uVar1 = *param_4;
  *(undefined4 *)(param_1 + 0x79c) = uVar2;
  uVar2 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(param_1 + 0x7a0) = uVar1;
  *(undefined4 *)(param_1 + 0x7a8) = uVar2;
  return;
}



// FUNCTION 142716e80 FUN_142716e80 body=67 status=ok
// SIG undefined FUN_142716e80(void)

void FUN_142716e80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x528) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x528) + 0x468) = param_2;
  }
  iVar1 = FUN_142235230();
  if (iVar1 == 1) {
    FUN_1429e1040(param_1,param_2);
  }
  return;
}



// FUNCTION 142716ed0 FUN_142716ed0 body=70 status=ok
// SIG undefined FUN_142716ed0(void)

void FUN_142716ed0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x6d0))(param_1,param_3,1);
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar2 + 0x7c) = *param_2;
    *(undefined4 *)(lVar2 + 0x84) = uVar1;
    FUN_1426b0300(lVar2);
    return;
  }
  return;
}



// FUNCTION 142716f20 FUN_142716f20 body=195 status=ok
// SIG undefined FUN_142716f20(void)

void FUN_142716f20(longlong *param_1,uint param_2,char param_3,undefined8 param_4,undefined1 param_5
                  ,undefined1 param_6)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar2 = (param_2 & 0xff) * 2;
  if (((uVar2 & 2) == 0) || (param_3 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 4;
  }
  uVar4 = (uVar2 | *(uint *)(param_1 + 200) & 0xfffffffd) & 0xfffffffb | uVar4;
  *(uint *)(param_1 + 200) = uVar4;
  plVar1 = (longlong *)param_1[0x91];
  if (plVar1 != (longlong *)0x0) {
    if (((byte)uVar4 & 6) == 6) {
      uVar3 = 1;
    }
    else {
      if ((uVar2 & 2) != 0) goto LAB_142716f91;
      uVar3 = 0;
    }
    (**(code **)(*plVar1 + 0x310))(plVar1,uVar3);
  }
LAB_142716f91:
  (**(code **)(*param_1 + 0xbb0))
            (param_1,CONCAT31((uint3)(*(uint *)(param_1 + 200) >> 9),
                              (char)(*(uint *)(param_1 + 200) >> 1)) & 0xffffff01,param_5,param_6);
  FUN_1429e1080(param_1,CONCAT31((uint3)(*(uint *)(param_1 + 200) >> 9),
                                 (char)(*(uint *)(param_1 + 200) >> 1)) & 0xffffff01,param_5,param_6
               );
  return;
}



// FUNCTION 142716ff0 FUN_142716ff0 body=158 status=ok
// SIG undefined FUN_142716ff0(void)

void FUN_142716ff0(longlong *param_1,byte param_2,char param_3,char param_4)

{
  if ((param_3 != '\0') && ((uint)param_2 != (*(uint *)(param_1 + 0xe9) & 1))) {
    (**(code **)(*param_1 + 0x7c0))();
    *(uint *)(param_1 + 0xe9) = *(uint *)(param_1 + 0xe9) & 0xfffffffe | (uint)param_2;
  }
  if ((param_4 != '\0') && ((uint)param_2 != (*(uint *)(param_1 + 0xe9) >> 1 & 1))) {
    (**(code **)(*param_1 + 0x7d8))(param_1,param_2);
    *(uint *)(param_1 + 0xe9) =
         *(uint *)(param_1 + 0xe9) & 0xfffffffd | (uint)param_2 + (uint)param_2;
  }
  return;
}



// FUNCTION 142717090 FUN_142717090 body=135 status=ok
// SIG undefined FUN_142717090(void)

void FUN_142717090(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_142696340(param_1 + 0x76);
  if (iVar2 != param_2) {
    FUN_1426a8bf0(param_1 + 0x76,param_2,1);
    FUN_14238a420(param_1);
    (**(code **)(*param_1 + 0x848))(param_1);
    if (((*(byte *)(param_1 + 0x17) & 1) != 0) && ((*(byte *)(param_1 + 0x78) & 8) != 0)) {
      cVar1 = FUN_142390bd0(param_1);
      if (cVar1 == '\0') {
        FUN_14268f1d0(param_1 + 0x76);
      }
    }
  }
  return;
}



// FUNCTION 142717120 FUN_142717120 body=12 status=ok
// SIG undefined FUN_142717120(void)

void FUN_142717120(longlong param_1)

{
  FUN_1426a9ae0(param_1 + 0x3b0);
  return;
}



// FUNCTION 142717130 FUN_142717130 body=196 status=ok
// SIG undefined FUN_142717130(void)

void FUN_142717130(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = FUN_1406ddef0;
  lVar3 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  if (*(longlong **)(lVar3 + 0x60) == param_1) {
    FUN_1426a8d40(param_1 + 0x76,param_2);
    return;
  }
  iVar1 = FUN_142696340(param_1 + 0x76);
  FUN_1426a8ca0(param_1 + 0x76,param_2);
  (**(code **)(*param_1 + 0x848))(param_1);
  iVar2 = FUN_142696340(param_1 + 0x76);
  if (iVar1 != iVar2) {
    FUN_14238a420(param_1);
  }
  return;
}



// FUNCTION 142717200 FUN_142717200 body=39 status=ok
// SIG undefined FUN_142717200(void)

void FUN_142717200(longlong *param_1)

{
  FUN_1426a9dc0(param_1 + 0x76);
                    /* WARNING: Could not recover jumptable at 0x000142717220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x848))(param_1);
  return;
}



// FUNCTION 142717230 FUN_142717230 body=39 status=ok
// SIG undefined FUN_142717230(void)

void FUN_142717230(longlong *param_1)

{
  FUN_1426a9e30(param_1 + 0x76);
                    /* WARNING: Could not recover jumptable at 0x000142717250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x848))(param_1);
  return;
}



// FUNCTION 142717260 FUN_142717260 body=39 status=ok
// SIG undefined FUN_142717260(void)

void FUN_142717260(longlong *param_1)

{
  FUN_1426a9ea0(param_1 + 0x76);
                    /* WARNING: Could not recover jumptable at 0x000142717280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x848))(param_1);
  return;
}



// FUNCTION 142717290 SetConstraintMode body=136 status=ok
// SIG undefined SetConstraintMode(void)

void UPrimitiveComponent::SetConstraintMode(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = 0;
  lVar3 = (**(code **)(*param_1 + 0x6d0))(param_1,0,0);
  if (lVar3 != 0) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
      FBodyInstance::SetDOFLock(lVar3,param_2);
    }
  }
  return;
}



// FUNCTION 142717320 FUN_142717320 body=83 status=ok
// SIG undefined FUN_142717320(void)

void FUN_142717320(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x508) != 0) {
    plVar1 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd0))();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))
                (plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x108),param_2);
    }
  }
  return;
}



// FUNCTION 142717380 FUN_142717380 body=53 status=ok
// SIG undefined FUN_142717380(void)

void FUN_142717380(longlong param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x528);
  *(longlong *)(param_1 + 0x518) = param_2;
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x2c40) = *(uint *)(lVar1 + 0x2c40) & 0xffffffbf;
    bVar2 = 0;
    if (param_2 != 0) {
      bVar2 = param_3;
    }
    *(uint *)(lVar1 + 0x2c40) = *(uint *)(lVar1 + 0x2c40) | (uint)bVar2 << 6;
  }
  return;
}



// FUNCTION 1427173c0 FUN_1427173c0 body=93 status=ok
// SIG undefined FUN_1427173c0(void)

void FUN_1427173c0(longlong param_1,byte param_2)

{
  if (param_2 != 0) {
    FUN_142717690(param_1,0,0,0);
    FUN_142717690(param_1,0,0,1);
    FUN_142717690(param_1,0,0,5);
  }
  *(byte *)(param_1 + 0x7d4) = *(byte *)(param_1 + 0x7d4) & 0xfe;
  *(byte *)(param_1 + 0x7d4) = *(byte *)(param_1 + 0x7d4) | param_2;
  return;
}



// FUNCTION 142717420 FUN_142717420 body=60 status=ok
// SIG undefined FUN_142717420(void)

void FUN_142717420(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if (lVar1 != 0) {
    FUN_1426a8e30(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 142717460 FUN_142717460 body=85 status=ok
// SIG undefined FUN_142717460(void)

void FUN_142717460(longlong param_1,int param_2,char param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *(undefined4 *)(param_1 + 0x3d8);
  uStack_24 = *(undefined4 *)(param_1 + 0x3dc);
  uStack_20 = *(undefined4 *)(param_1 + 0x3e0);
  uStack_1c = *(undefined4 *)(param_1 + 0x3e4);
  local_18 = *(undefined4 *)(param_1 + 1000);
  uStack_14 = *(undefined4 *)(param_1 + 0x3ec);
  uStack_10 = *(undefined4 *)(param_1 + 0x3f0);
  uStack_c = *(undefined4 *)(param_1 + 0x3f4);
  if ((*(char *)((longlong)&local_28 + (longlong)param_2) == '\x02') != (bool)param_3) {
    FUN_1426eac10(&local_28);
    FUN_1426a9ea0(param_1 + 0x3b0,&local_28,1);
  }
  return;
}



// FUNCTION 1427174c0 FUN_1427174c0 body=390 status=ok
// SIG undefined FUN_1427174c0(void)

void FUN_1427174c0(undefined8 param_1,longlong param_2,longlong *param_3,char param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  longlong *local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  lVar4 = *param_3;
  if (lVar4 != 0) {
    local_20 = param_3[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    local_28 = lVar4;
    FUN_14185b9a0(param_2,&local_28,2,0);
  }
  if (param_4 == '\0') {
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) | 0x10;
    local_30 = (longlong *)0x0;
    if ((undefined8 *)(param_2 + 0x58) != &local_38) {
      *(undefined8 *)(param_2 + 0x58) = 0;
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x60,&local_30);
      plVar5 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
  }
  else {
    local_18 = *param_5;
    local_10 = param_5[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_142710cc0(param_2,&local_18);
  }
  plVar5 = (longlong *)param_3[1];
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



// FUNCTION 142717650 FUN_142717650 body=60 status=ok
// SIG undefined FUN_142717650(void)

void FUN_142717650(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if (lVar1 != 0) {
    FUN_1426a9000(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 142717690 FUN_142717690 body=603 status=ok
// SIG undefined FUN_142717690(void)

void FUN_142717690(longlong param_1,float param_2,float param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  float local_48;
  float local_44;
  undefined8 local_40;
  
  if ((*(byte *)(param_1 + 0x7d4) & 1) != 0) {
    return;
  }
  if (0 < *DAT_146b08b98) {
    return;
  }
  if (param_4 == '\0') {
    local_70 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x5f0) == &local_78) goto LAB_14271783f;
    *(undefined8 *)(param_1 + 0x5f0) = 0;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x5f8,&local_70);
    plVar5 = local_70;
    if (local_70 == (longlong *)0x0) goto LAB_14271783f;
    LOCK();
    plVar1 = local_70 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) goto LAB_14271783f;
    (**(code **)*local_70)(local_70);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    plVar5 = local_70;
  }
  else if (param_4 == '\x01') {
    local_60 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x600) == &local_68) goto LAB_14271783f;
    *(undefined8 *)(param_1 + 0x600) = 0;
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x608,&local_60);
    plVar5 = local_60;
    if (local_60 == (longlong *)0x0) goto LAB_14271783f;
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) goto LAB_14271783f;
    (**(code **)*local_60)(local_60);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    plVar5 = local_60;
  }
  else {
    if (param_4 != '\x05') {
      return;
    }
    local_50 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x610) == &local_58) goto LAB_14271783f;
    *(undefined8 *)(param_1 + 0x610) = 0;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x618,&local_50);
    plVar5 = local_50;
    if (local_50 == (longlong *)0x0) goto LAB_14271783f;
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) goto LAB_14271783f;
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    plVar5 = local_50;
  }
  if (iVar3 == 1) {
    (**(code **)(*plVar5 + 8))(plVar5,1);
  }
LAB_14271783f:
  if ((*(longlong *)(param_1 + 0x508) != 0) &&
     (plVar5 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd0))(), plVar5 != (longlong *)0x0)) {
    if (0.0 <= param_2) {
      local_48 = param_2;
      if (1.0 <= param_2) {
        local_48 = 1.0;
      }
    }
    else {
      local_48 = 0.0;
    }
    if (0.0 <= param_3) {
      local_44 = param_3;
      if (1.0 <= param_3) {
        local_44 = 1.0;
      }
    }
    else {
      local_44 = 0.0;
    }
    local_40 = 0;
    (**(code **)(*plVar5 + 0x18))
              (plVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x108),param_4,&local_48);
  }
  return;
}



// FUNCTION 1427178f0 FUN_1427178f0 body=92 status=ok
// SIG undefined FUN_1427178f0(void)

void FUN_1427178f0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  longlong local_res8 [4];
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  FName::FName(local_res8,puVar2,1);
  bVar1 = 0;
  *(undefined1 *)(param_1 + 0x520) = 0;
  do {
    if ((&DAT_146b08c40)[bVar1] == local_res8[0]) {
      return;
    }
    bVar1 = bVar1 + 1;
    *(byte *)(param_1 + 0x520) = bVar1;
  } while (bVar1 < 0xc);
  return;
}



// FUNCTION 142717950 FUN_142717950 body=95 status=ok
// SIG undefined FUN_142717950(void)

void FUN_142717950(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  FUN_1423df920();
  (**(code **)(*param_1 + 0xe70))(param_1,param_2);
  plVar1 = (longlong *)param_1[0xf7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x500))(plVar1,param_2,param_3,0,1);
  }
  return;
}



// FUNCTION 1427179b0 FUN_1427179b0 body=154 status=ok
// SIG undefined FUN_1427179b0(void)

void FUN_1427179b0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = (**(code **)(*param_1 + 0x148))();
  lVar3 = UWorld::GetGameViewport(uVar2);
  lVar5 = param_1[0xa1];
  if (lVar5 != 0) {
    lVar4 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142717a1d;
  }
  lVar5 = 0;
LAB_142717a1d:
  if ((lVar3 != 0) && (lVar5 != 0)) {
    (**(code **)(*param_2 + 8))(param_2,lVar5 + 0x110,lVar3);
  }
  return;
}



// FUNCTION 142717a50 FUN_142717a50 body=13 status=ok
// SIG undefined FUN_142717a50(void)

void FUN_142717a50(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x2e4) = param_2;
  return;
}



// FUNCTION 142717a60 FUN_142717a60 body=14 status=ok
// SIG undefined FUN_142717a60(void)

void FUN_142717a60(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x2e8) = *param_2;
  return;
}



// FUNCTION 142717a70 SetLightDirection body=89 status=ok
// SIG undefined SetLightDirection(void)

void FPreviewScene::SetLightDirection(longlong param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_142397000(*(undefined8 *)(param_1 + 0x10),1,1);
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  FUN_142398470(*(undefined8 *)(param_1 + 0x10),&local_18,0,0,0);
  return;
}



// FUNCTION 142717ad0 FUN_142717ad0 body=64 status=ok
// SIG undefined FUN_142717ad0(void)

void FUN_142717ad0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x68) = param_2;
    FUN_1426b0110(lVar1);
  }
  return;
}



// FUNCTION 142717b20 SetMassOverrideInKg body=81 status=ok
// SIG undefined SetMassOverrideInKg(void)

void UPrimitiveComponent::SetMassOverrideInKg
               (longlong *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_2,1);
  if (lVar1 != 0) {
    FBodyInstance::SetMassOverride(lVar1,param_3,param_4);
    FUN_1426b0300(lVar1);
  }
  return;
}



// FUNCTION 142717b80 SetMassScale body=50 status=ok
// SIG undefined SetMassScale(void)

void UPrimitiveComponent::SetMassScale(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_2,1);
  if (lVar1 != 0) {
    FBodyInstance::SetMassScale(lVar1,param_3);
  }
  return;
}



// FUNCTION 142717bc0 FUN_142717bc0 body=122 status=ok
// SIG undefined FUN_142717bc0(void)

void FUN_142717bc0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x508);
  if (lVar1 != 0) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar1 + 0x70) != 0)) {
      FUN_142470d00(*(longlong *)(lVar1 + 0x70),param_2,param_3);
    }
  }
  return;
}



// FUNCTION 142717c40 FUN_142717c40 body=138 status=ok
// SIG undefined FUN_142717c40(void)

void FUN_142717c40(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x508);
  if (lVar1 != 0) {
    lVar4 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (*(longlong *)(lVar1 + 0x70) != 0)) &&
       (plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x70) + 0xb0), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0xe8))(plVar2,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 142717ce0 FUN_142717ce0 body=102 status=ok
// SIG undefined FUN_142717ce0(void)

void FUN_142717ce0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((param_1[0xa1] != 0) && (lVar2 = *(longlong *)(lVar2 + 0x38), lVar2 != 0)) {
    iVar1 = 0x708;
    if ((0x707 < param_2) && (iVar1 = *(int *)(lVar2 + 100), param_2 < *(int *)(lVar2 + 100))) {
      iVar1 = param_2;
    }
    *(int *)(param_1[0xa1] + 0x38) = iVar1;
    if (*(longlong *)(lVar2 + 0x90) != 0) {
      *(undefined4 *)(*(longlong *)(lVar2 + 0x90) + 0x38) = *(undefined4 *)(param_1[0xa1] + 0x38);
    }
  }
  return;
}



// FUNCTION 142717d50 FUN_142717d50 body=39 status=ok
// SIG undefined FUN_142717d50(void)

void FUN_142717d50(longlong *param_1)

{
  FBodyInstance::SetInstanceNotifyRBCollision(param_1 + 0x76);
                    /* WARNING: Could not recover jumptable at 0x000142717d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x848))(param_1);
  return;
}



// FUNCTION 142717d80 FUN_142717d80 body=53 status=ok
// SIG undefined FUN_142717d80(void)

void FUN_142717d80(longlong param_1,undefined8 param_2)

{
  FString::operator=(param_1 + 0x508);
  FString::operator=(param_1 + 0x470,param_2);
  return;
}



// FUNCTION 142717dc0 FUN_142717dc0 body=229 status=ok
// SIG undefined FUN_142717dc0(void)

undefined1 FUN_142717dc0(longlong *param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar2 = 0;
  iVar3 = FUN_142235230();
  if (iVar3 != 3) {
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar1 = *(longlong **)(lVar4 + 0x140);
    if (plVar1 != (longlong *)0x0) {
      lVar4 = AActor::GetWorldSettings(param_1);
      if (param_2 == '\0') {
        if (*(longlong *)(lVar4 + 0x600) != 0) {
          uVar2 = (**(code **)(*plVar1 + 0x788))(plVar1);
        }
      }
      else if (*(longlong *)(lVar4 + 0x600) == 0) {
        local_18 = 0;
        local_10 = 0;
        TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,param_3);
        uVar2 = (**(code **)(*plVar1 + 0x780))(plVar1,param_1,&local_18);
        uVar5 = AActor::GetWorldSettings(param_1);
        FUN_142707ce0(param_1,uVar5);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return uVar2;
}



// FUNCTION 142717eb0 FUN_142717eb0 body=208 status=ok
// SIG undefined FUN_142717eb0(void)

void FUN_142717eb0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_28;
  undefined4 local_20;
  longlong local_18;
  undefined4 local_10;
  
  if (param_2 == 0) {
    if (param_1[0xa5] == 0) {
      local_20 = (int)param_1[0xfa];
      plVar1 = &local_28;
      local_28 = param_1[0xf9];
    }
    else {
      plVar1 = (longlong *)FUN_1426e1ca0(param_1[0xa5],&local_28);
    }
    local_18 = *plVar1;
    local_10 = (undefined4)plVar1[1];
    (**(code **)(*param_1 + 0xe70))(param_1,&local_18);
    if ((char)param_1[0xa7] != '\0') {
      (**(code **)(*param_1 + 0xe20))(param_1,param_1);
    }
  }
  FUN_1423e03b0(param_1,param_2);
  plVar1 = (longlong *)param_1[0x91];
  if (((plVar1 != (longlong *)0x0) && (((byte)(int)param_1[200] & 6) == 6)) &&
     (((char)param_1[0x25] == '\x03' || ((*(byte *)(plVar1 + 0x80) & 1) == 0)))) {
    (**(code **)(*plVar1 + 0x310))(plVar1,1);
  }
  return;
}



// FUNCTION 142717f80 FUN_142717f80 body=12 status=ok
// SIG undefined FUN_142717f80(void)

void FUN_142717f80(longlong param_1)

{
  FUN_1426a9b30(param_1 + 0x3b0);
  return;
}



// FUNCTION 142717f90 FUN_142717f90 body=63 status=ok
// SIG undefined FUN_142717f90(void)

void FUN_142717f90(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_4,1);
  if (lVar1 != 0) {
    FUN_1426a85f0(lVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 142717fd0 FUN_142717fd0 body=63 status=ok
// SIG undefined FUN_142717fd0(void)

void FUN_142717fd0(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_4,1);
  if (lVar1 != 0) {
    FUN_1426a9420(lVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 142718010 SetPhysicsMaxAngularVelocityInRadians body=67 status=ok
// SIG undefined SetPhysicsMaxAngularVelocityInRadians(void)

void UPrimitiveComponent::SetPhysicsMaxAngularVelocityInRadians
               (longlong *param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_4,1);
  if (lVar1 != 0) {
    FUN_1426a9610(lVar1,param_2,param_3,1);
  }
  return;
}



// FUNCTION 142718060 FUN_142718060 body=425 status=ok
// SIG undefined FUN_142718060(void)

void FUN_142718060(longlong *param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (param_2[6] != 0) {
    lVar3 = AActor::GetLevel();
    lVar4 = AActor::GetLevel(param_1);
    if (lVar3 == lVar4) {
      *(undefined8 *)(param_2[6] + 0x508) = 0;
    }
  }
  param_1[0xa1] = (longlong)param_2;
  param_2[6] = (longlong)param_1;
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar3 = *(longlong *)(lVar3 + 0x38);
  iVar1 = (int)param_1[0xb4];
  if (((0xa27 < iVar1) && (lVar3 != 0)) && (*(longlong *)(lVar3 + 0x90) != 0)) {
    iVar6 = 0x708;
    if ((0x707 < iVar1) && (iVar6 = *(int *)(lVar3 + 100), iVar1 < *(int *)(lVar3 + 100))) {
      iVar6 = iVar1;
    }
    *(int *)(*(longlong *)(lVar3 + 0x90) + 0x38) = iVar6;
    *(int *)(param_1[0xa1] + 0x38) = iVar6;
  }
  lVar3 = ULocalPlayer::GetPrivateStaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    lVar3 = FUN_1429c30a0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      param_2 = (longlong *)0x0;
    }
    param_1[0xd1] = (longlong)param_2;
    if (param_2 != (longlong *)0x0) {
      param_2[0x13] = (longlong)param_1;
    }
    goto LAB_1427181dc;
  }
  plVar5 = (longlong *)ULocalPlayer::GetPrivateStaticClass();
  lVar3 = plVar5[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar3 = plVar5[0x1f];
    if (lVar3 != 0) goto LAB_142718163;
  }
  else {
LAB_142718163:
    *(undefined1 *)((longlong)param_2 + 0x94) = *(undefined1 *)(lVar3 + 0x94);
  }
  *(undefined1 *)((longlong)param_1 + 0x7c4) = 1;
  (**(code **)(*param_2 + 0x298))(param_2);
  (**(code **)(*param_1 + 0xe80))(param_1);
LAB_1427181dc:
  (**(code **)(*param_1 + 0xce0))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142718202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe78))(param_1);
  return;
}



// FUNCTION 142718210 FUN_142718210 body=180 status=ok
// SIG undefined FUN_142718210(void)

void FUN_142718210(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong local_18 [2];
  
  (**(code **)(*param_1 + 0x738))();
  uVar2 = FUN_142235230(param_1);
  if ((uVar2 & 0xfffffffd) == 0) {
    (**(code **)(*param_1 + 0x6f0))(param_1);
  }
  plVar3 = (longlong *)FUN_14270d290(param_1,local_18);
  plVar1 = param_1 + 0xa1;
  if (plVar1 != plVar3) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar3;
    *plVar3 = 0;
    *(int *)(param_1 + 0xa2) = (int)plVar3[1];
    *(undefined4 *)((longlong)param_1 + 0x514) = *(undefined4 *)((longlong)plVar3 + 0xc);
    plVar3[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  FString::operator=(param_1 + 0x8e,plVar1);
                    /* WARNING: Could not recover jumptable at 0x0001427182bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x600))(param_1);
  return;
}



// FUNCTION 1427182d0 FUN_1427182d0 body=54 status=ok
// SIG undefined FUN_1427182d0(void)

void FUN_1427182d0(longlong param_1)

{
  FString::operator=(param_1 + 0x4f8);
  FString::operator=(param_1 + 0x460,param_1 + 0x4f8);
  return;
}



// FUNCTION 142718310 FUN_142718310 body=7 status=ok
// SIG undefined FUN_142718310(void)

void FUN_142718310(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x828) = param_2;
  return;
}



// FUNCTION 142718320 FUN_142718320 body=172 status=ok
// SIG undefined FUN_142718320(void)

void FUN_142718320(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[0x24];
  if ((((lVar2 != 0) || (lVar2 = FUN_1423407b0(), lVar2 != 0)) &&
      (*(longlong *)(lVar2 + 0x218) != 0)) &&
     (((lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x218) + 0x58), lVar2 != 0 &&
       (lVar3 = (**(code **)(*param_1 + 0x6d0))(param_1,param_3,1), lVar3 != 0)) &&
      ((cVar1 = FUN_1426aaac0(lVar3), cVar1 != '\0' &&
       (cVar1 = FBodyInstance::IsValidBodyInstance(lVar3), cVar1 != '\0')))))) {
    FUN_1426eb2d0(lVar2,param_1,param_3,param_2);
  }
  return;
}



// FUNCTION 142718410 FUN_142718410 body=200 status=ok
// SIG undefined FUN_142718410(void)

void FUN_142718410(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_1423d94f0(param_1,0x142);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x710))(param_1,param_1[0xf7]);
    param_1[0xf7] = param_2;
    if (param_2 != 0) {
      (**(code **)(*param_1 + 0x6f8))(param_1,param_2);
      (**(code **)(*param_1 + 0x708))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014271848f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xe20))(param_1,param_2);
      return;
    }
    plVar2 = (longlong *)param_1[0x91];
    (**(code **)(*param_1 + 0x6f8))(param_1,plVar2);
    (**(code **)(*param_1 + 0x708))(param_1,plVar2);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = param_1;
    }
    (**(code **)(*param_1 + 0xe20))(param_1,plVar2);
  }
  return;
}



// FUNCTION 1427184e0 FUN_1427184e0 body=14 status=ok
// SIG undefined FUN_1427184e0(void)

void FUN_1427184e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001427184ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x4b0) + 8))();
  return;
}



// FUNCTION 1427184f0 FUN_1427184f0 body=55 status=ok
// SIG undefined FUN_1427184f0(void)

void FUN_1427184f0(longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_3,1);
  if (lVar1 != 0) {
    FUN_1426aa280(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 142718530 FUN_142718530 body=129 status=ok
// SIG undefined FUN_142718530(void)

void FUN_142718530(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  if (*(longlong *)(param_1 + 0x518) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x518) + 0x28) = param_2;
  }
  if (*(char *)(param_1 + 0x7d5) != '\0') {
    *(undefined8 *)(param_1 + 0x7d8) = param_2;
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x528);
  if (plVar1 != (longlong *)0x0) {
    local_14 = *(undefined1 *)(param_3 + 1);
    local_18 = *param_3;
    local_10 = param_3[2];
    local_c = local_c ^ (param_3[3] ^ local_c) & 1;
    (**(code **)(*plVar1 + 0x7f8))(plVar1,param_2,&local_18);
  }
  return;
}



// FUNCTION 1427185c0 FUN_1427185c0 body=68 status=ok
// SIG undefined FUN_1427185c0(void)

void FUN_1427185c0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5,byte param_6)

{
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = local_c & 0xfffffffe | (uint)param_6;
  local_10 = param_5;
  local_18 = param_3;
  local_14 = param_4;
  (**(code **)(*param_1 + 0xe18))(param_5,param_2,&local_18);
  return;
}



// FUNCTION 142718630 FUN_142718630 body=12 status=ok
// SIG undefined FUN_142718630(void)

void FUN_142718630(longlong param_1)

{
  FUN_1426aa2d0(param_1 + 0x3b0);
  return;
}



// FUNCTION 142718640 SetupInactiveStateInputComponent body=173 status=ok
// SIG undefined SetupInactiveStateInputComponent(void)

void APlayerController::SetupInactiveStateInputComponent(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 local_res18 [16];
  undefined1 *local_18;
  undefined4 uStack_10;
  
  local_18 = &LAB_1426f8964;
  uStack_10 = 0;
  puVar1 = (undefined8 *)FName::FName(local_res18,"Spectator_Turn",1);
  FUN_1424002d0(param_2,*puVar1,param_1,&local_18);
  local_18 = &LAB_1426f8958;
  uStack_10 = 0;
  puVar1 = (undefined8 *)FName::FName(local_res18,"Spectator_LookUp",1);
  FUN_1424002d0(param_2,*puVar1,param_1,&local_18);
  return;
}



// FUNCTION 1427186f0 FUN_1427186f0 body=159 status=ok
// SIG undefined FUN_1427186f0(void)

void FUN_1427186f0(longlong param_1)

{
  byte *pbVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res8 [32];
  
  if (*(longlong *)(param_1 + 0x130) == 0) {
    puVar3 = (undefined8 *)FName::FName(local_res8,L"PC_InputComponent0",1);
    uVar4 = FUN_140cdf650(param_1,*puVar3,0,0,0,0);
    *(undefined8 *)(param_1 + 0x130) = uVar4;
    FUN_14234b150(uVar4);
  }
  cVar2 = UInputDelegateBinding::SupportsInputDelegate(*(undefined8 *)(param_1 + 0x10));
  if (cVar2 != '\0') {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x130) + 0x1fc);
    *pbVar1 = *pbVar1 ^ (*(byte *)(param_1 + 0x91) >> 5 ^
                        *(byte *)(*(longlong *)(param_1 + 0x130) + 0x1fc)) & 1;
    FUN_1424e5130(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x130));
    return;
  }
  return;
}



// FUNCTION 142718790 FUN_142718790 body=36 status=ok
// SIG undefined FUN_142718790(void)

undefined4 FUN_142718790(longlong param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x484) & 0x10) == 0) {
    iVar1 = FUN_142235230();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1427187c0 FUN_1427187c0 body=124 status=ok
// SIG undefined FUN_1427187c0(void)

undefined8 FUN_1427187c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_1 + 0x748) & 4) != 0) {
    return 1;
  }
  if ((((*(undefined8 **)(DAT_146b17150 + 0xab8) != (undefined8 *)0x0) &&
       (cVar1 = (**(code **)**(undefined8 **)(DAT_146b17150 + 0xab8))(), cVar1 != '\0')) &&
      (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0)) &&
     (lVar2 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))(), lVar2 != 0)) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142718850 ShrinkElements body=97 status=ok
// SIG undefined ShrinkElements(void)

void TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::FNode::ShrinkElements
               (longlong param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 8)) {
    FUN_141d4c320();
  }
  uVar1 = 0;
  do {
    if (*(longlong *)(param_1 + 0x18 + (ulonglong)(uVar1 & 7) * 8) != 0) {
      ShrinkElements();
    }
    if (((byte)uVar1 & 7) < 7) {
      uVar1 = uVar1 ^ (uVar1 + 1 ^ uVar1) & 7;
    }
    else {
      uVar1 = uVar1 | 8;
    }
  } while (uVar1 >> 3 == 0);
  return;
}



// FUNCTION 1427188c0 FUN_1427188c0 body=70 status=ok
// SIG undefined FUN_1427188c0(void)

void FUN_1427188c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  puVar1 = (undefined8 *)
           FMath::RInterpTo(local_18,(undefined8 *)(param_1 + 0x548),param_1 + 0x53c,param_3,
                            *(undefined4 *)(param_1 + 0x554));
  *(undefined8 *)(param_1 + 0x548) = *puVar1;
  *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142718910 FUN_142718910 body=180 status=ok
// SIG undefined FUN_142718910(void)

void FUN_142718910(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_38 [16];
  longlong *local_28;
  longlong local_20;
  uint local_c;
  
  lVar5 = param_1[0xa1];
  if (lVar5 != 0) {
    lVar2 = ULocalPlayer::GetPrivateStaticClass();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FActorSpawnParameters::FActorSpawnParameters(local_38);
      local_20 = param_1[0x2a];
      local_c = local_c | 0x40;
      local_28 = param_1;
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar4 = FUN_142950fd0();
      lVar5 = UWorld::SpawnActor(uVar3,uVar4,0,0,local_38);
      param_1[0xa4] = lVar5;
    }
  }
  return;
}



// FUNCTION 1427189d0 FUN_1427189d0 body=260 status=ok
// SIG undefined FUN_1427189d0(void)

void FUN_1427189d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_38 [16];
  longlong *local_28;
  longlong local_20;
  uint local_c;
  
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_c = local_c | 0x40;
  local_20 = param_1[0x2a];
  local_28 = param_1;
  if (param_1[0xa6] != 0) {
    lVar2 = FUN_1429e0610();
    lVar4 = param_1[0xa6];
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        if (lVar4 != 0) {
          if (lVar4 == 0) goto LAB_142718abe;
          lVar2 = FUN_1429e0610();
          lVar4 = param_1[0xa6];
          lVar1 = lVar4;
          goto joined_r0x000142718aa9;
        }
        break;
      }
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar4 = FUN_1429e0610();
  goto LAB_142718a45;
joined_r0x000142718aa9:
  if (lVar1 == 0) goto LAB_142718abe;
  if (lVar1 == lVar2) goto LAB_142718ac0;
  lVar1 = *(longlong *)(lVar1 + 0x30);
  goto joined_r0x000142718aa9;
LAB_142718abe:
  lVar4 = 0;
LAB_142718ac0:
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
LAB_142718a45:
  plVar5 = (longlong *)UWorld::SpawnActor(uVar3,lVar4,0,0,local_38);
  param_1[0xa5] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x770))(plVar5,param_1);
  }
  return;
}



// FUNCTION 142718ae0 FUN_142718ae0 body=356 status=ok
// SIG undefined FUN_142718ae0(void)

longlong * FUN_142718ae0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong local_58;
  undefined4 local_50;
  undefined1 local_4c [12];
  undefined1 local_40 [16];
  longlong *local_30;
  undefined1 local_18;
  uint local_14;
  
  if ((param_1[0xf7] == 0) && (cVar3 = (**(code **)(*param_1 + 0x768))(), cVar3 != '\0')) {
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar1 = *(longlong *)(lVar4 + 0x148);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x468) != 0)) {
      lVar5 = AGenericItem::GetPrivateStaticClass();
      lVar1 = *(longlong *)(lVar1 + 0x468);
      for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar5) {
          if (lVar1 == 0) {
            return (longlong *)0x0;
          }
          FActorSpawnParameters::FActorSpawnParameters(local_40);
          local_50 = (undefined4)param_1[0xfa];
          local_58 = param_1[0xf9];
          local_14 = local_14 | 0x40;
          local_18 = 1;
          local_30 = param_1;
          uVar6 = (**(code **)(*param_1 + 0x720))(param_1,local_4c);
          plVar7 = (longlong *)UWorld::SpawnActor(lVar4,lVar1,&local_58,uVar6,local_40);
          if (plVar7 == (longlong *)0x0) {
            return (longlong *)0x0;
          }
          FUN_14223ef90(plVar7,0);
          (**(code **)(*plVar7 + 0x770))(plVar7,param_1);
          (**(code **)(*plVar7 + 0x7a8))(plVar7);
          if ((*(byte *)((longlong)plVar7 + 0x34) & 4) == 0) {
            return plVar7;
          }
          AActor::SetActorTickEnabled(plVar7,1);
          return plVar7;
        }
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 142718c50 Split body=518 status=ok
// SIG undefined Split(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FPoly::Split(longlong param_1,float *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_328 [40];
  float local_300;
  undefined8 local_2f8;
  float local_2f0;
  float local_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  local_1ac = local_1ac & 0xfffffff0;
  uVar2 = 0;
  local_4c = local_4c & 0xfffffff0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_1a8 = 0x41000000;
  uStack_1a0 = 0x3f8000003f800000;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_48 = 0x41000000;
  uStack_44 = 0;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0xffffffffffffffff;
  local_1b8 = 0xffffffff;
  local_1b4 = 0;
  local_1b0 = 0x42000000;
  local_198 = 0x3f800000;
  local_188 = 0;
  uStack_180 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0xffffffffffffffff;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_50 = 0x42000000;
  local_38 = 0x3f800000;
  Init(&local_2e8);
  Init(&local_188);
  local_2f8 = *(undefined8 *)param_2;
  local_300 = *(float *)(param_3 + 1);
  local_2f0 = param_2[2];
  local_2ec = (float)((ulonglong)*param_3 >> 0x20) * param_2[1] + (float)*param_3 * *param_2 +
              local_300 * param_2[2];
  iVar1 = FUN_142718e60(param_1,&local_2f8,&local_2e8,&local_188);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      operator=(param_1,&local_2e8);
    }
    uVar2 = *(undefined4 *)(param_1 + 0xf8);
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (local_1f8 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142718e60 FUN_142718e60 body=1645 status=ok
// SIG undefined FUN_142718e60(void)

byte FUN_142718e60(undefined8 *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  bool bVar13;
  undefined *puVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined8 uVar19;
  int *piVar20;
  ulonglong uVar21;
  float *pfVar22;
  float *pfVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  byte bVar26;
  int *piVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  undefined1 local_118 [4];
  int local_114;
  int *local_110;
  undefined8 local_108;
  undefined1 *puStack_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  char local_e0;
  undefined8 local_d8;
  
  puStack_100 = local_118;
  local_108 = &DAT_14060d670;
  local_118[0] = 0;
  lVar18 = FUN_1415d8310(&local_108,&DAT_146216a38);
  local_f8 = (undefined8 *)(lVar18 + 0x18);
  local_f0 = *local_f8;
  local_e8 = *(longlong *)(lVar18 + 0x28);
  local_e0 = '\0';
  local_d8 = *(undefined8 *)(lVar18 + 0x30);
  *(undefined8 ***)(lVar18 + 0x30) = &local_f8;
  *(int *)(lVar18 + 0x38) = *(int *)(lVar18 + 0x38) + 1;
  puStack_100 = local_118;
  local_108 = &DAT_14060d670;
  local_118[0] = 0;
  lVar18 = FUN_1415d8310(&local_108,&DAT_146216a38);
  bVar26 = 1;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (longlong)*(int *)(param_1 + 0x1f);
  uVar19 = SUB168(ZEXT816(4) * auVar11,0);
  if (SUB168(ZEXT816(4) * auVar11,8) != 0) {
    uVar19 = 0xffffffffffffffff;
  }
  piVar20 = (int *)operator_new(uVar19,lVar18 + 0x18,1);
  bVar13 = false;
  iVar28 = 0;
  bVar12 = false;
  if (0 < *(int *)(param_1 + 0x1f)) {
    lVar18 = 0;
    piVar27 = piVar20;
    do {
      pfVar22 = (float *)param_1[0x1e];
      if ((float *)param_1[0x1e] == (float *)0x0) {
        pfVar22 = (float *)(param_1 + 6);
      }
      fVar29 = (*(float *)((longlong)pfVar22 + lVar18 + 4) * param_2[1] +
                *param_2 * *(float *)((longlong)pfVar22 + lVar18) +
               *(float *)((longlong)pfVar22 + lVar18 + 8) * param_2[2]) - param_2[3];
      if (fVar29 < 0.0) {
        *piVar27 = 1;
        if (fVar29 < -0.25) {
          bVar13 = true;
        }
      }
      else {
        *piVar27 = 0;
        if (0.25 < fVar29) {
          bVar12 = true;
        }
      }
      iVar10 = *(int *)(param_1 + 0x1f);
      iVar28 = iVar28 + 1;
      lVar18 = lVar18 + 0xc;
      piVar27 = piVar27 + 1;
    } while (iVar28 < iVar10);
    if (bVar12) {
      if (bVar13) {
        if (param_3 != (undefined8 *)0x0) {
          iVar28 = piVar20[(longlong)iVar10 + -1];
          local_114 = 0;
          pfVar22 = (float *)param_1[0x1e];
          if ((float *)param_1[0x1e] == (float *)0x0) {
            pfVar22 = (float *)(param_1 + 6);
          }
          pfVar23 = pfVar22 + ((longlong)iVar10 + -1) * 3;
          if (0 < iVar10) {
            do {
              iVar10 = *piVar20;
              piVar20 = piVar20 + 1;
              local_110 = piVar20;
              if (iVar10 == iVar28) {
                puVar1 = param_4;
                if (iVar10 == 0) {
                  puVar1 = param_3;
                }
                puVar24 = puVar1 + 6;
                lVar18 = (longlong)*(int *)(puVar1 + 0x1f);
                iVar28 = *(int *)(puVar1 + 0x1f) + 1;
                *(int *)(puVar1 + 0x1f) = iVar28;
                if (*(int *)((longlong)puVar1 + 0xfc) < iVar28) {
                  TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(puVar24);
                }
LAB_1427192e9:
                uVar21 = puVar24[0x18];
                lVar18 = lVar18 * 3;
                puVar25 = (undefined8 *)0x0;
                if (uVar21 == 0) {
                  puVar25 = puVar24;
                }
              }
              else {
                puVar1 = param_3 + 6;
                fVar29 = *pfVar23;
                fVar2 = pfVar23[1];
                fVar3 = pfVar23[2];
                fVar30 = param_2[3];
                fVar4 = param_2[1];
                fVar5 = *param_2;
                fVar6 = param_2[2];
                fVar7 = *pfVar22;
                fVar8 = pfVar22[1];
                fVar9 = pfVar22[2];
                iVar17 = *(int *)(param_3 + 0x1f);
                iVar16 = iVar17 + 1;
                *(int *)(param_3 + 0x1f) = iVar16;
                fVar30 = (fVar30 - (fVar4 * fVar2 + fVar5 * fVar29 + fVar6 * fVar3)) /
                         ((fVar7 - fVar29) * fVar5 + (fVar8 - fVar2) * fVar4 +
                         (fVar9 - fVar3) * fVar6);
                local_108 = (undefined *)
                            CONCAT44(fVar30 * (fVar8 - fVar2) + fVar2,
                                     fVar30 * (fVar7 - fVar29) + fVar29);
                puStack_100 = (undefined1 *)
                              CONCAT44(puStack_100._4_4_,fVar30 * (fVar9 - fVar3) + fVar3);
                if (*(int *)((longlong)param_3 + 0xfc) < iVar16) {
                  TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(puVar1);
                }
                puVar14 = local_108;
                uVar15 = puStack_100._0_4_;
                puVar24 = (undefined8 *)param_3[0x1e];
                if ((undefined8 *)param_3[0x1e] == (undefined8 *)0x0) {
                  puVar24 = puVar1;
                }
                puVar24 = (undefined8 *)((longlong)puVar24 + (longlong)iVar17 * 0xc);
                if (puVar24 != (undefined8 *)0x0) {
                  *puVar24 = local_108;
                  *(undefined4 *)(puVar24 + 1) = puStack_100._0_4_;
                }
                puVar24 = param_4 + 6;
                iVar17 = *(int *)(param_4 + 0x1f);
                iVar16 = iVar17 + 1;
                *(int *)(param_4 + 0x1f) = iVar16;
                if (*(int *)((longlong)param_4 + 0xfc) < iVar16) {
                  TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(puVar24);
                }
                puVar25 = (undefined8 *)param_4[0x1e];
                if ((undefined8 *)param_4[0x1e] == (undefined8 *)0x0) {
                  puVar25 = puVar24;
                }
                puVar25 = (undefined8 *)((longlong)puVar25 + (longlong)iVar17 * 0xc);
                if (puVar25 != (undefined8 *)0x0) {
                  *puVar25 = puVar14;
                  *(undefined4 *)(puVar25 + 1) = uVar15;
                }
                if (iVar28 == 0) {
                  lVar18 = (longlong)*(int *)(param_4 + 0x1f);
                  iVar28 = *(int *)(param_4 + 0x1f) + 1;
                  *(int *)(param_4 + 0x1f) = iVar28;
                  piVar20 = local_110;
                  if (*(int *)((longlong)param_4 + 0xfc) < iVar28) {
                    TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(puVar24);
                    piVar20 = local_110;
                  }
                  goto LAB_1427192e9;
                }
                iVar28 = *(int *)(param_3 + 0x1f);
                iVar17 = iVar28 + 1;
                *(int *)(param_3 + 0x1f) = iVar17;
                if (*(int *)((longlong)param_3 + 0xfc) < iVar17) {
                  TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(puVar1);
                }
                uVar21 = param_3[0x1e];
                lVar18 = (longlong)iVar28 * 3;
                puVar25 = (undefined8 *)0x0;
                piVar20 = local_110;
                if (uVar21 == 0) {
                  puVar25 = puVar1;
                }
              }
              puVar1 = (undefined8 *)(((ulonglong)puVar25 | uVar21) + lVar18 * 4);
              if (puVar1 != (undefined8 *)0x0) {
                *puVar1 = *(undefined8 *)pfVar22;
                *(float *)(puVar1 + 1) = pfVar22[2];
              }
              local_114 = local_114 + 1;
              pfVar23 = pfVar22;
              pfVar22 = pfVar22 + 3;
              iVar28 = iVar10;
            } while (local_114 < *(int *)(param_1 + 0x1f));
          }
          *param_3 = *param_1;
          *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 1);
          *(undefined8 *)((longlong)param_3 + 0xc) = *(undefined8 *)((longlong)param_1 + 0xc);
          *(undefined4 *)((longlong)param_3 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x14);
          *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
          *param_4 = *param_1;
          *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_1 + 1);
          *(undefined8 *)((longlong)param_4 + 0xc) = *(undefined8 *)((longlong)param_1 + 0xc);
          *(undefined4 *)((longlong)param_4 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x14);
          *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(param_1 + 0x20);
        }
        bVar26 = 3;
      }
      goto LAB_1427193f9;
    }
  }
  bVar26 = -bVar13 & 2;
LAB_1427193f9:
  if (local_e0 == '\0') {
    local_e0 = '\x01';
    *(int *)(local_f8 + 4) = *(int *)(local_f8 + 4) + -1;
    if (local_e8 != local_f8[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_f8 = local_f0;
    local_f8[3] = local_d8;
    local_f0 = 0;
    if (local_e0 == '\0') {
      local_e0 = 1;
      *(int *)(local_f8 + 4) = *(int *)(local_f8 + 4) + -1;
      if (local_e8 != local_f8[2]) {
        FMemStackBase::FreeChunks(local_f8);
      }
      *local_f8 = local_f0;
      local_f8[3] = local_d8;
    }
  }
  return bVar26;
}



// FUNCTION 1427194d0 FUN_1427194d0 body=223 status=ok
// SIG undefined FUN_1427194d0(void)

void FUN_1427194d0(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1423d94f0(param_1,0x142);
  if ((cVar1 == '\0') || ((*(byte *)(param_1 + 200) & 0x10) == 0)) {
    cVar1 = FUN_1423d94f0(param_1,0x145);
    if (cVar1 == '\0') goto LAB_14271953c;
  }
  cVar1 = (**(code **)(*param_1 + 0xe88))(param_1);
  if (cVar1 == '\0') {
    FUN_1429e1ef0(param_1);
    return;
  }
LAB_14271953c:
  cVar1 = FUN_1423d94f0(param_1,0x142);
  if (cVar1 != '\0') {
    FUN_1429e2210(param_1);
    return;
  }
  if ((param_1[0x91] != 0) && ((*(byte *)(param_1 + 200) & 2) == 0)) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((*(byte *)(lVar2 + 0x830) & 0x80) == 0) {
      (**(code **)(*(longlong *)param_1[0x91] + 0x710))((longlong *)param_1[0x91],param_2);
    }
  }
  return;
}



// FUNCTION 1427195b0 FUN_1427195b0 body=73 status=ok
// SIG undefined FUN_1427195b0(void)

void FUN_1427195b0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x718))(param_1,0x142);
  *(uint *)(param_1[0x8c] + 0x484) = *(uint *)(param_1[0x8c] + 0x484) | 1;
  *(uint *)(param_1[0x8c] + 0x484) = *(uint *)(param_1[0x8c] + 0x484) | 2;
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) & 0xffffffef;
  return;
}



// FUNCTION 142719600 FUN_142719600 body=769 status=ok
// SIG undefined FUN_142719600(void)

undefined8 FUN_142719600(longlong *param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  void *_Src;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  void *pvVar10;
  longlong local_88;
  void *local_80;
  undefined8 local_78;
  void *local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  
  if (param_4 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_4 + 0x148))(param_4);
    if (lVar2 != 0) {
      iVar1 = FUN_1428cf800(lVar2);
      if ((iVar1 == 3) && (*(byte *)(param_4 + 0x25) < 3)) {
        _Src = (void *)0x0;
        pvVar10 = (void *)*param_1;
        iVar1 = (int)param_1[1];
        uVar8 = (ulonglong)iVar1;
        local_68 = (void *)0x0;
        local_60 = (void *)CONCAT44(local_60._4_4_,iVar1);
        if (iVar1 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar1,0);
          _Src = local_68;
          _guard_xfg_dispatch_icall_nop(local_68,pvVar10,uVar8 * 2);
          uVar8 = (ulonglong)local_60 & 0xffffffff;
        }
        iVar1 = 0;
        iVar6 = (int)uVar8;
        if (0 < (int)param_2[1]) {
          local_88 = 0;
          pvVar10 = _Src;
          do {
            if (*(int *)(local_88 + 8 + *param_2) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = *(undefined2 **)(local_88 + *param_2);
            }
            FString::PrintfImpl(&local_68,&DAT_145173010,puVar9);
            _Src = local_68;
            iVar6 = (int)uVar8;
            if (iVar6 < 2) {
              uVar8 = (ulonglong)local_60 & 0xffffffff;
              local_68 = (void *)0x0;
              local_60 = (void *)0x0;
            }
            else {
              if ((int)local_60 == 0) {
                iVar5 = 0;
              }
              else {
                iVar5 = (int)local_60 + -1;
              }
              _Src = (void *)0x0;
              if ((iVar6 != 0) || (pvVar3 = (void *)0x1, iVar5 == 0)) {
                pvVar3 = _Src;
              }
              local_80 = (void *)0x0;
              iVar4 = (int)pvVar3 + iVar5;
              local_78 = CONCAT44(local_78._4_4_,iVar6);
              if ((iVar6 == 0) && (iVar4 == 0)) {
                local_78 = 0;
                iVar6 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,iVar4 + iVar6,0);
                _Src = local_80;
                _guard_xfg_dispatch_icall_nop(local_80,pvVar10,(longlong)iVar6 * 2);
                uVar8 = local_78 & 0xffffffff;
                iVar6 = local_78._4_4_;
              }
              pvVar3 = local_68;
              if (iVar5 != 0) {
                iVar4 = (int)uVar8;
                uVar7 = iVar4 + (uint)(iVar4 == 0) + iVar5;
                local_78 = CONCAT44(local_78._4_4_,uVar7);
                if (iVar6 < (int)uVar7) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,uVar8 & 0xffffffff);
                  _Src = local_80;
                  uVar7 = (uint)local_78;
                }
                uVar8 = (ulonglong)uVar7;
                _Dst = (void *)((longlong)_Src + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(_Dst,pvVar3,(longlong)iVar5 * 2);
                *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
              }
              local_80 = (void *)0x0;
              local_78 = 0;
            }
            iVar6 = (int)uVar8;
            if (pvVar10 != (void *)0x0) {
              FMemory::Free(pvVar10);
            }
            if (local_68 != (void *)0x0) {
              FMemory::Free(local_68);
            }
            local_88 = local_88 + 0x10;
            iVar1 = iVar1 + 1;
            pvVar10 = _Src;
          } while (iVar1 < (int)param_2[1]);
        }
        local_60 = (void *)0x0;
        local_54 = 0;
        local_68 = (void *)CONCAT44(local_68._4_4_,param_3);
        local_58 = iVar6;
        if (iVar6 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,iVar6,0);
          _guard_xfg_dispatch_icall_nop(local_60,_Src,(longlong)iVar6 * 2);
          param_3 = local_68._0_4_;
        }
        local_80 = (void *)CONCAT44(local_80._4_4_,param_3);
        FString::FString(&local_78,&local_60);
        FUN_1429e1d50(param_4,&local_80);
        if (local_60 != (void *)0x0) {
          FMemory::Free();
        }
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
        if (*param_1 != 0) {
          FMemory::Free();
        }
        return 1;
      }
    }
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 142719910 StopHapticEffect body=15 status=ok
// SIG undefined StopHapticEffect(void)

void APlayerController::StopHapticEffect(undefined8 param_1,undefined1 param_2)

{
  FUN_142717690(param_1,0,0,param_2);
  return;
}



// FUNCTION 142719920 SwitchLevel body=68 status=ok
// SIG undefined SwitchLevel(void)

void APlayerController::SwitchLevel(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_142235230();
  if ((uVar1 & 0xfffffffd) == 0) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_1428d76e0(uVar2,param_2,0,0);
  }
  return;
}



// FUNCTION 142719970 FUN_142719970 body=624 status=ok
// SIG undefined FUN_142719970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142719970(longlong *param_1,byte param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  uint local_a0;
  undefined1 local_98;
  undefined8 local_88;
  float local_80;
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
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    lVar11 = 0;
    local_88 = 0;
    lVar9 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
    if ((lVar9 != 0) && (cVar5 = FBodyInstance::IsValidBodyInstance(lVar9), cVar5 != '\0')) {
      plVar1 = (longlong *)param_1[0x23];
      if (plVar1 != (longlong *)0x0) {
        iVar8 = *(int *)((longlong)plVar1 + 0xc);
        lVar10 = lVar11;
        if (iVar8 < (int)DAT_1469e91c4) {
          uVar12 = iVar8 >> 0x1f & 0xffff;
          uVar6 = iVar8 + uVar12;
          lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                   (longlong)(int)((uVar6 & 0xffff) - uVar12) * 0x18;
        }
        if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) {
          return;
        }
        cVar5 = (**(code **)(*plVar1 + 0x450))(plVar1);
        if (cVar5 == '\0') {
          return;
        }
      }
      iVar8 = *(int *)((longlong)param_1 + 0xc);
      if (iVar8 < (int)DAT_1469e91c4) {
        uVar12 = iVar8 >> 0x1f & 0xffff;
        uVar6 = iVar8 + uVar12;
        lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                 (longlong)(int)((uVar6 & 0xffff) - uVar12) * 0x18;
      }
      if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) == 0) {
        local_88 = 0;
        cVar5 = (**(code **)(*param_1 + 0x400))(param_1,0);
        if (cVar5 != '\0') {
          uVar7 = (**(code **)(*param_1 + 0x730))(param_1,&local_68,lVar9);
          auVar2._4_4_ = -(uint)(0.0001 < (float)((uint)(fStack_54 -
                                                        *(float *)((longlong)param_1 + 0x224)) &
                                                 uRam0000000146b08be4));
          auVar2._0_4_ = -(uint)(0.0001 < (float)((uint)(local_58 - *(float *)(param_1 + 0x44)) &
                                                 _DAT_146b08be0));
          auVar2._8_4_ = -(uint)(0.0001 < (float)((uint)(fStack_50 - *(float *)(param_1 + 0x45)) &
                                                 uRam0000000146b08be8));
          auVar2._12_4_ =
               -(uint)(0.0001 < (float)((uint)(fStack_4c - *(float *)((longlong)param_1 + 0x22c)) &
                                       uRam0000000146b08bec));
          iVar8 = movmskps(uVar7,auVar2);
          if (iVar8 == 0) {
            auVar3._4_4_ = -(uint)(0.0001 < (float)((uint)(fStack_64 -
                                                          *(float *)((longlong)param_1 + 0x214)) &
                                                   uRam0000000146b08be4));
            auVar3._0_4_ = -(uint)(0.0001 < (float)((uint)(local_68 - *(float *)(param_1 + 0x42)) &
                                                   _DAT_146b08be0));
            auVar3._8_4_ = -(uint)(0.0001 < (float)((uint)(fStack_60 - *(float *)(param_1 + 0x43)) &
                                                   uRam0000000146b08be8));
            auVar3._12_4_ =
                 -(uint)(0.0001 < (float)((uint)(fStack_5c - *(float *)((longlong)param_1 + 0x21c))
                                         & uRam0000000146b08bec));
            iVar8 = movmskps(0,auVar3);
            if (iVar8 == 0) {
              return;
            }
            auVar4._4_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)((longlong)param_1 + 0x214) +
                                                          fStack_64) & uRam0000000146b08be4));
            auVar4._0_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(param_1 + 0x42) + local_68) &
                                                   _DAT_146b08be0));
            auVar4._8_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(param_1 + 0x43) + fStack_60) &
                                                   uRam0000000146b08be8));
            auVar4._12_4_ =
                 -(uint)(0.0001 < (float)((uint)(*(float *)((longlong)param_1 + 0x21c) + fStack_5c)
                                         & uRam0000000146b08bec));
            iVar8 = movmskps(iVar8,auVar4);
            if (iVar8 == 0) {
              return;
            }
          }
          local_98 = 0;
          local_78 = local_68;
          fStack_74 = fStack_64;
          fStack_70 = fStack_60;
          fStack_6c = fStack_5c;
          local_a0 = (param_2 ^ 1) << 4 | 2;
          local_80 = fStack_50 - *(float *)(param_1 + 0x45);
          local_a8 = 0;
          local_88 = CONCAT44(fStack_54 - *(float *)((longlong)param_1 + 0x224),
                              local_58 - *(float *)(param_1 + 0x44));
          (**(code **)(*param_1 + 0x490))(param_1,&local_88,&local_78,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 142719be0 FUN_142719be0 body=1432 status=ok
// SIG undefined FUN_142719be0(void)

void FUN_142719be0(longlong *param_1,float param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined8 local_58 [8];
  
  if ((param_3 == 3) && (cVar2 = (**(code **)(*param_1 + 0xe10))(), cVar2 == '\0')) {
    if (param_1[0xb7] != 0) {
      FUN_14271a180(param_1,param_2,1);
    }
    param_1[0xd2] = DAT_1468b5da0;
    *(undefined4 *)(param_1 + 0xd3) = DAT_1468b5da8;
    iVar4 = *(int *)((longlong)param_1 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar12 = iVar4 >> 0x1f & 0xffff;
      uVar3 = iVar4 + uVar12;
      lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
               (longlong)(int)((uVar3 & 0xffff) - uVar12) * 0x18;
    }
    else {
      lVar11 = 0;
    }
    if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000142719c9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x458))(param_1,param_2);
    return;
  }
  lVar11 = 0;
  if (*(char *)((longlong)param_1 + 0x95) == '\x02') {
    local_58[0] = 0;
    if (param_1[0x24] != 0) {
      local_58[0] = 0x11a;
    }
    iVar4 = FUN_142235230(param_1);
    if (iVar4 != 3) {
      if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
         (cVar2 = (**(code **)(*param_1 + 0x768))(param_1), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        plVar7 = (longlong *)param_1[0x91];
        if (plVar7 != (longlong *)0x0) {
          iVar4 = *(int *)((longlong)plVar7 + 0xc);
          lVar5 = lVar11;
          if (iVar4 < (int)DAT_1469e91c4) {
            uVar12 = iVar4 >> 0x1f & 0xffff;
            uVar3 = iVar4 + uVar12;
            lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                    (longlong)(int)((uVar3 & 0xffff) - uVar12) * 0x18;
          }
          if ((((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) &&
              (*(char *)((longlong)plVar7 + 0x95) == '\x02')) &&
             (((*(byte *)(plVar7 + 0x12) & 0x10) != 0 &&
              (lVar5 = (**(code **)(*plVar7 + 0x6e8))(plVar7), lVar5 != 0)))) {
            uVar6 = UNetworkPredictionInterface::GetPrivateStaticClass();
            plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
            if (plVar7 != (longlong *)0x0) {
              if (*(longlong *)(lVar5 + 0x178) == 0) {
LAB_142719e18:
                bVar1 = false;
              }
              else {
                iVar4 = *(int *)(*(longlong *)(lVar5 + 0x178) + 0xc);
                lVar5 = lVar11;
                if (iVar4 < (int)DAT_1469e91c4) {
                  uVar12 = iVar4 >> 0x1f & 0xffff;
                  uVar3 = iVar4 + uVar12;
                  lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                          (longlong)(int)((uVar3 & 0xffff) - uVar12) * 0x18;
                }
                if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) != 0) goto LAB_142719e18;
                bVar1 = true;
              }
              if (((bVar1) && (cVar2 = (**(code **)(*plVar7 + 0x40))(plVar7), cVar2 != '\0')) &&
                 (lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7), lVar5 != 0)) {
                lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
                if (*(float *)(lVar5 + 8) == 0.0) {
                  *(float *)(lVar5 + 8) = *(float *)(lVar8 + 0x790);
                }
                else {
                  fVar15 = (*(float *)(lVar8 + 0x790) - *(float *)(lVar5 + 8)) *
                           *(float *)(param_1[0x91] + 0xd0);
                  plVar9 = (longlong *)FUN_14293b120();
                  lVar13 = plVar9[0x1f];
                  if (lVar13 == 0) {
                    (**(code **)(*plVar9 + 0x368))(plVar9);
                    lVar13 = plVar9[0x1f];
                  }
                  fVar14 = (float)FUN_14222dcf0(param_1[0x91]);
                  fVar14 = fVar14 * *(float *)(lVar13 + 0x49c);
                  if (fVar14 <= param_2 + 0.06) {
                    fVar14 = param_2 + 0.06;
                  }
                  if (fVar14 < fVar15) {
                    plVar9 = (longlong *)param_1[0x91];
                    uVar6 = FUN_142a07000();
                    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x628))(plVar9,uVar6);
                    if (plVar9 != (longlong *)0x0) {
                      local_58[0] = 0;
                      cVar2 = (**(code **)(*plVar9 + 0x400))(plVar9,0);
                      if (cVar2 != '\0') goto LAB_142719f64;
                    }
                    *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(lVar8 + 0x790);
                    (**(code **)(*plVar7 + 0x18))(plVar7,fVar15);
                  }
                }
              }
            }
          }
        }
LAB_142719f64:
        if (((param_1[0xa5] != 0) &&
            (plVar7 = (longlong *)FUN_1426e2c20(), plVar7 != (longlong *)param_1[0x91])) &&
           (plVar7 != (longlong *)0x0)) {
          puVar10 = (undefined8 *)(**(code **)(*plVar7 + 0x788))(plVar7,local_58);
          *(undefined8 *)((longlong)param_1 + 0x53c) = *puVar10;
          *(undefined4 *)((longlong)param_1 + 0x544) = *(undefined4 *)(puVar10 + 1);
        }
        goto LAB_14271a0af;
      }
    }
  }
  if (*(byte *)(param_1 + 0x25) < 2) goto LAB_14271a0af;
  if (param_1[0xb7] == 0) {
    lVar5 = param_1[0xa1];
    if (lVar5 == 0) {
LAB_14271a013:
      (**(code **)(*param_1 + 0xe80))(param_1);
    }
    else {
      lVar8 = ULocalPlayer::GetPrivateStaticClass();
      lVar5 = *(longlong *)(lVar5 + 0x10);
      if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_14271a013;
    }
    if (param_1[0xb7] != 0) goto LAB_14271a028;
  }
  else {
LAB_14271a028:
    (**(code **)(*param_1 + 0xb90))(param_1,param_2);
  }
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  lVar5 = lVar11;
  if (iVar4 < (int)DAT_1469e91c4) {
    uVar12 = iVar4 >> 0x1f & 0xffff;
    uVar3 = iVar4 + uVar12;
    lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar12) * 0x18;
  }
  if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) != 0) {
    return;
  }
  if (((param_1[0xa5] != 0) && (lVar5 = FUN_1426e2c20(), lVar5 != param_1[0x91])) && (lVar5 != 0)) {
    (**(code **)(*param_1 + 0xd20))(param_1,lVar5,param_2);
  }
LAB_14271a0af:
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  if (iVar4 < (int)DAT_1469e91c4) {
    uVar12 = iVar4 >> 0x1f & 0xffff;
    uVar3 = iVar4 + uVar12;
    lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
             (longlong)(int)((uVar3 & 0xffff) - uVar12) * 0x18;
  }
  if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) == 0) {
    (**(code **)(*param_1 + 0x458))(param_1,param_2);
  }
  fVar15 = *(float *)((longlong)param_1 + 0x80c);
  param_1[0xd2] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0xd3) = DAT_1468b5da8;
  if (fVar15 <= 0.0) {
    *(undefined4 *)((longlong)param_1 + 0x814) = 0;
  }
  else {
    param_2 = fVar15 - param_2;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)((longlong)param_1 + 0x814) =
         (fVar15 / *(float *)(param_1 + 0x101)) * *(float *)(param_1 + 0x102);
    *(float *)((longlong)param_1 + 0x80c) = param_2;
  }
  return;
}



// FUNCTION 14271a180 FUN_14271a180 body=915 status=ok
// SIG undefined FUN_14271a180(void)

void FUN_14271a180(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined4 local_res8;
  undefined4 uStackX_c;
  byte local_168 [4];
  undefined4 local_164;
  uint local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [4];
  undefined4 local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  UPlayerInput::Tick(param_1[0xb7]);
  lVar8 = param_1[0xa1];
  if (lVar8 != 0) {
    lVar5 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = *(uint *)(param_1 + 0xd5);
      if ((uVar4 & 8) != 0) {
        _guard_xfg_dispatch_icall_nop(local_d8,0,0x90);
        uVar6 = *(undefined8 *)(lVar8 + 0x70);
        local_cc = 0x3f800000;
        cVar3 = '\0';
        cVar2 = (**(code **)(*param_1 + 0xd78))(param_1,uVar6);
        if ((cVar2 != '\0') && (cVar2 = FUN_142480f40(uVar6,&local_res8), cVar2 != '\0')) {
          cVar3 = FUN_14270a0a0(param_1,CONCAT44(uStackX_c,local_res8),
                                *(undefined1 *)((longlong)param_1 + 0x6c3),1,local_d8);
        }
        uVar6 = FWeakObjectPtr::Get(param_1 + 0xda);
        if (cVar3 == '\0') {
          uVar7 = 0;
        }
        else {
          uVar7 = FWeakObjectPtr::Get(&local_64);
        }
        FUN_142388f50(uVar6,uVar7);
        FWeakObjectPtr::operator=(param_1 + 0xda);
        uVar4 = *(uint *)(param_1 + 0xd5);
      }
      if ((uVar4 & 0x10) != 0) {
        plVar10 = param_1 + 0xdb;
        iVar9 = 0;
        lVar8 = 0;
        do {
          _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
          lVar5 = param_1[0xb7];
          cVar2 = '\0';
          local_15c = 0x3f800000;
          if ((lVar5 == 0) || (10 < iVar9)) {
LAB_14271a381:
            _guard_xfg_dispatch_icall_nop(local_d8,0,0x90);
            local_168[0] = local_168[0] & 0xfc;
            local_160 = local_160 & 0xfffffffe;
            local_14c = local_bc;
            local_140 = local_b0;
            local_134 = local_a4;
            local_128 = local_98;
            local_11c = local_8c;
            local_110 = local_80;
            local_108 = local_78;
            local_104 = local_74;
            local_158 = local_c8;
            local_100 = local_70;
            local_148 = local_b8;
            local_fc = local_6c;
            local_13c = local_ac;
            local_f8 = local_68;
            local_130 = local_a0;
            local_f4 = local_64;
            local_f0 = local_60;
            local_124 = local_94;
            local_e8 = local_58;
            local_118 = local_88;
            local_e0 = local_50;
            local_10c = local_7c;
            local_164 = local_d4;
            local_15c = 0x3f800000;
            local_154 = local_c4;
          }
          else {
            local_res8 = *(undefined4 *)(lVar5 + 0x28 + lVar8);
            uStackX_c = *(undefined4 *)(lVar5 + 0x2c + lVar8);
            if ((*(float *)(lVar5 + 0x30 + lVar8) == 0.0) ||
               (cVar2 = FUN_14270a0a0(param_1,CONCAT44(uStackX_c,local_res8),
                                      *(undefined1 *)((longlong)param_1 + 0x6c3),1,local_168),
               cVar2 == '\0')) goto LAB_14271a381;
          }
          uVar6 = FWeakObjectPtr::Get(plVar10);
          if (cVar2 == '\0') {
            uVar7 = 0;
          }
          else {
            uVar7 = FWeakObjectPtr::Get(&local_f4);
          }
          FUN_1423899b0(iVar9,uVar6,uVar7);
          FWeakObjectPtr::operator=(plVar10);
          iVar9 = iVar9 + 1;
          plVar10 = plVar10 + 1;
          lVar8 = lVar8 + 0xc;
        } while (iVar9 < 0xb);
      }
    }
  }
  (**(code **)(*param_1 + 0xd60))(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014271a50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd70))(param_1,param_2,param_3);
  return;
}



// FUNCTION 14271a520 FUN_14271a520 body=175 status=ok
// SIG undefined FUN_14271a520(void)

void FUN_14271a520(longlong *param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = param_1[0xa1];
  if (lVar1 != 0) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
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
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar5 = (longlong *)UOnlineEngineInterface::Get();
      if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014271a5b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x340))();
        return;
      }
      (**(code **)(*plVar5 + 0x348))(plVar5,uVar4,*(undefined1 *)(lVar1 + 0x108));
    }
  }
  return;
}



// FUNCTION 14271a5d0 FUN_14271a5d0 body=63 status=ok
// SIG undefined FUN_14271a5d0(void)

float FUN_14271a5d0(undefined8 param_1,float param_2,int param_3)

{
  float fVar1;
  
  if (1 < param_3 - 1U) {
    fVar1 = _guard_xfg_dispatch_icall_nop(param_2 * 0.008726646);
    fVar1 = _guard_xfg_dispatch_icall_nop(fVar1 * 0.5625);
    return fVar1 * 114.59155;
  }
  return param_2;
}



// FUNCTION 14271a610 FUN_14271a610 body=160 status=ok
// SIG undefined FUN_14271a610(void)

void FUN_14271a610(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  plVar3 = (longlong *)param_1[0x91];
  if (plVar3 != (longlong *)0x0) {
    if ((char)param_1[0x25] == '\x03') {
      FUN_14223ef90(plVar3,1);
      plVar3 = (longlong *)param_1[0x91];
    }
    (**(code **)(*plVar3 + 0x718))();
    lVar1 = param_1[0x91];
    lVar2 = (**(code **)(*param_1 + 0x758))(param_1);
    if (lVar2 == lVar1) {
      local_c = local_c & 0xfffffffe;
      local_18 = 0;
      local_10 = 0x40000000;
      local_14 = 1;
      (**(code **)(*param_1 + 0xe18))(param_1,param_1,&local_18);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014271a6a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x750))(param_1,0);
  return;
}



// FUNCTION 14271a6b0 FUN_14271a6b0 body=137 status=ok
// SIG undefined FUN_14271a6b0(void)

void FUN_14271a6b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x1a0);
  plVar1 = plVar5 + *(int *)(param_1 + 0x1a8);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    plVar2 = (longlong *)*plVar5;
    if (plVar2 != (longlong *)0x0) {
      lVar4 = FUN_1429f11d0();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        (**(code **)(*plVar2 + 0x710))(plVar2);
      }
    }
  }
  return;
}



// FUNCTION 14271a740 FUN_14271a740 body=742 status=ok
// SIG undefined FUN_14271a740(void)

void FUN_14271a740(longlong *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined1 local_48 [16];
  
  lVar15 = 0;
  local_res10 = 0;
  lVar5 = (**(code **)(*param_1 + 0x6d0))(param_1,0,0);
  lVar6 = param_1[0x24];
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0(param_1);
  }
  if ((((lVar5 != 0) && (*(longlong *)(lVar5 + 200) != 0)) && (lVar6 != 0)) &&
     (*(longlong *)(lVar6 + 0x218) != 0)) {
    iVar14 = *(int *)((longlong)param_1 + 0xc);
    lVar8 = lVar15;
    if (iVar14 < (int)DAT_1469e91c4) {
      uVar13 = iVar14 >> 0x1f & 0xffff;
      uVar4 = iVar14 + uVar13;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar13) * 0x18;
    }
    if (((*(uint *)(lVar8 + 8) & 0x30000000) == 0) && (DAT_1468c2185 == '\0')) {
      local_res8 = 0;
      plVar7 = (longlong *)FUN_14270d7e0(param_1,param_1[0xdd],&local_res8,0);
      if ((plVar7 != (longlong *)0x0) &&
         (lVar8 = (**(code **)(*plVar7 + 0x6d0))(plVar7,local_res8,0), lVar8 != 0)) {
        iVar14 = *(int *)((longlong)plVar7 + 0xc);
        if (iVar14 < (int)DAT_1469e91c4) {
          uVar13 = iVar14 >> 0x1f & 0xffff;
          uVar4 = iVar14 + uVar13;
          lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                   (longlong)(int)((uVar4 & 0xffff) - uVar13) * 0x18;
        }
        uVar4 = *(uint *)(lVar15 + 8);
        lVar15 = *(longlong *)(lVar5 + 200);
        FUN_1426aee20(lVar8,lVar5);
        LOCK();
        *(undefined8 *)(lVar5 + 200) = 0;
        UNLOCK();
        lVar9 = (**(code **)(*param_1 + 0x6b8))(param_1);
        uVar4 = uVar4 & 0x30000000;
        if (((uVar4 == 0) && (lVar9 != 0)) &&
           (cVar3 = FBodyInstance::IsValidBodyInstance(lVar5), cVar3 == '\0')) {
          bVar1 = *(byte *)(lVar5 + 0x10);
          *(byte *)(lVar5 + 0x10) = bVar1 & 0xbf;
          uVar2 = *(undefined8 *)(lVar6 + 0x218);
          uVar10 = (**(code **)(*param_1 + 0x6b8))(param_1);
          uVar11 = FUN_142685570(local_48,param_1);
          FUN_14269a1d0(lVar5,uVar10,param_1 + 0x42,param_1,uVar2,uVar11);
          *(byte *)(lVar5 + 0x10) =
               *(byte *)(lVar5 + 0x10) ^ (bVar1 ^ *(byte *)(lVar5 + 0x10)) & 0x40;
        }
        iVar14 = 0;
        if (lVar15 != 0) {
          local_68 = 0;
          local_60 = 0;
          local_58[0] = 0;
          local_58[1] = 0;
          (**(code **)(*param_1 + 0x720))(param_1,&local_68,local_58,0);
          if (0 < (int)local_60) {
            lVar15 = 0;
            iVar12 = (int)local_60;
            do {
              lVar6 = *(longlong *)(lVar15 + local_68);
              if (lVar6 != lVar5) {
                if (uVar4 == 0) {
                  FUN_1426aee20(lVar8,lVar6);
                }
                LOCK();
                *(undefined8 *)(lVar6 + 200) = 0;
                UNLOCK();
                iVar12 = (int)local_60;
              }
              iVar14 = iVar14 + 1;
              lVar15 = lVar15 + 8;
            } while (iVar14 < iVar12);
          }
          if (((uVar4 == 0) && (cVar3 = FUN_1426aaac0(lVar5), cVar3 != '\0')) &&
             (cVar3 = FBodyInstance::IsValidBodyInstance(lVar5), cVar3 != '\0')) {
            FUN_14268f1d0(lVar5);
          }
          if (local_58[0] != 0) {
            FMemory::Free();
          }
          if (local_68 != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14271aa50 FUN_14271aa50 body=207 status=ok
// SIG undefined FUN_14271aa50(void)

void FUN_14271aa50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  iVar4 = FUN_142235230();
  if (((iVar4 == 3) && ((longlong *)param_1[0x97] != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)param_1[0x97] + 0x20))(), cVar3 != '\0')) {
    plVar5 = (longlong *)AFGRailroadVehicle::GetPrivateStaticClass();
    lVar7 = plVar5[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar7 = plVar5[0x1f];
    }
    if (*(longlong *)(lVar7 + 0x4d8) != 0) {
      plVar5 = (longlong *)UOnlineEngineInterface::Get();
      lVar1 = param_1[0x97];
      lVar2 = *plVar5;
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      (**(code **)(lVar2 + 0x318))(plVar5,uVar6,*(undefined8 *)(lVar7 + 0x4d8),lVar1);
    }
  }
  return;
}



// FUNCTION 14271ab20 FUN_14271ab20 body=35 status=ok
// SIG undefined FUN_14271ab20(void)

void FUN_14271ab20(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x528);
  if ((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 0x588) & 0x800) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014271ab3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x740))();
    return;
  }
  return;
}



// FUNCTION 14271ab60 FUN_14271ab60 body=425 status=ok
// SIG undefined FUN_14271ab60(void)

void FUN_14271ab60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  longlong local_res8;
  
  fVar15 = *(float *)(param_2 + 0x74) + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0xc) = fVar15;
  if (((*(byte *)(param_1 + 0x10) & 1) == 0) ||
     (((0.0 <= *(float *)(param_1 + 8) && (*(float *)(param_1 + 8) <= fVar15)) ||
      (cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x14), cVar7 == '\0')))) {
    cVar7 = '\x01';
  }
  else {
    cVar7 = '\0';
  }
  lVar9 = FWeakObjectPtr::Get(param_1 + 0x14);
  lVar11 = 0;
  if (lVar9 != 0) {
    plVar1 = (longlong *)(lVar9 + 0x5e0);
    if (cVar7 == '\0') {
      local_res8 = param_1 + 0x1c;
      TSortedMap<int,FDynamicForceFeedbackDetails_*,FDefaultAllocator,TLess<int>_>::
      Emplace<int_const_&,FDynamicForceFeedbackDetails_*>
                (plVar1,(int *)(param_1 + 0x34),&local_res8);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
    }
    else {
      iVar14 = *(int *)(lVar9 + 0x5e8);
      iVar8 = *(int *)(param_1 + 0x34);
      lVar5 = *plVar1;
      uVar10 = (longlong)iVar14;
      if (iVar14 != 0) {
        do {
          uVar12 = uVar10 >> 1;
          if (*(int *)(lVar5 + (uVar12 + lVar11) * 0x10) < iVar8) {
            lVar11 = (ulonglong)((uint)uVar10 & 1) + uVar12 + lVar11;
          }
          uVar10 = uVar12;
        } while (uVar12 != 0);
      }
      iVar13 = (int)lVar11;
      uVar10 = (ulonglong)iVar13;
      if (((uVar10 < (ulonglong)(longlong)iVar14) && (*(int *)(lVar5 + uVar10 * 0x10) <= iVar8)) &&
         (iVar13 != -1)) {
        iVar8 = (iVar14 - iVar13) + -1;
        if (iVar8 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar5 + uVar10 * 0x10),(void *)((longlong)(iVar13 + 1) * 0x10 + lVar5)
                     ,(longlong)iVar8 << 4);
          iVar14 = *(int *)(lVar9 + 0x5e8);
        }
        *(int *)(lVar9 + 0x5e8) = iVar14 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
      }
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(char *)(param_2 + 0x70) = cVar7;
  if (cVar7 != '\0') {
    iVar14 = *(int *)(param_2 + 0x68);
    lVar11 = (longlong)iVar14;
    *(int *)(param_2 + 0x68) = iVar14 + 1;
    if (*(int *)(param_2 + 0x6c) < iVar14 + 1) {
      TArray<FLatentResponse::FExecutionInfo,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_2,iVar14);
    }
    lVar9 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(param_2 + 0x60) == 0) {
      lVar9 = param_2;
    }
    *(undefined8 *)(lVar9 + lVar11 * 0x18) = uVar6;
    *(undefined4 *)(lVar9 + 8 + lVar11 * 0x18) = uVar4;
    *(undefined4 *)(lVar9 + 0xc + lVar11 * 0x18) = uVar2;
    *(undefined4 *)(lVar9 + 0x10 + lVar11 * 0x18) = uVar3;
  }
  return;
}



// FUNCTION 14271ad10 FUN_14271ad10 body=44 status=ok
// SIG undefined FUN_14271ad10(void)

void FUN_14271ad10(longlong param_1)

{
  char cVar1;
  
  cVar1 = FBodyInstance::IsValidBodyInstance(param_1 + 0x3b0);
  if (cVar1 != '\0') {
    FUN_1426b0480(param_1 + 0x3b0);
    return;
  }
  return;
}



// FUNCTION 14271ad60 FUN_14271ad60 body=341 status=ok
// SIG undefined FUN_14271ad60(void)

void FUN_14271ad60(longlong *param_1,float param_2)

{
  ushort *puVar1;
  byte *pbVar2;
  float fVar3;
  ushort uVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (1.1 <= param_2) {
    param_2 = 1.1;
  }
  lVar6 = (**(code **)(*param_1 + 0x148))();
  fVar3 = *(float *)(lVar6 + 0x798);
  if (1.0 <= fVar3 - *(float *)((longlong)param_1 + 0x4f4)) {
    (**(code **)(*param_1 + 0x720))(param_1);
    bVar5 = (char)param_1[0x9e] + 1U & 3;
    *(float *)((longlong)param_1 + 0x4f4) = fVar3;
    *(byte *)(param_1 + 0x9e) = bVar5;
    puVar1 = (ushort *)((longlong)param_1 + (ulonglong)bVar5 * 4 + 0x4e0);
    *puVar1 = *puVar1 & 0xe000;
    puVar1 = (ushort *)((longlong)param_1 + (ulonglong)bVar5 * 4 + 0x4e0);
    *puVar1 = *puVar1 | (ushort)((int)ROUND(param_2 * 1000.0 * 2.0 - 0.5) >> 1) & 0x1fff;
    bVar5 = *(byte *)(param_1 + 0x9e);
    pbVar2 = (byte *)((longlong)param_1 + (ulonglong)bVar5 * 4 + 0x4e2);
    *pbVar2 = *pbVar2 & 0xf9;
    pbVar2 = (byte *)((longlong)param_1 + (ulonglong)bVar5 * 4 + 0x4e2);
    *pbVar2 = *pbVar2 | 1;
    return;
  }
  uVar7 = (ulonglong)*(byte *)(param_1 + 0x9e);
  if ((*(byte *)((longlong)param_1 + uVar7 * 4 + 0x4e2) & 7) < 7) {
    uVar4 = *(ushort *)((longlong)param_1 + uVar7 * 4 + 0x4e0);
    *(ushort *)((longlong)param_1 + uVar7 * 4 + 0x4e0) =
         ((short)((int)ROUND((param_2 * 1000.0 + param_2 * 1000.0) - 0.5) >> 1) + uVar4 ^ uVar4) &
         0x1fff ^ uVar4;
    bVar5 = *(byte *)((longlong)param_1 + (ulonglong)*(byte *)(param_1 + 0x9e) * 4 + 0x4e2);
    *(byte *)((longlong)param_1 + (ulonglong)*(byte *)(param_1 + 0x9e) * 4 + 0x4e2) =
         (bVar5 + 1 ^ bVar5) & 7 ^ bVar5;
  }
  return;
}



// FUNCTION 14271aec0 FUN_14271aec0 body=465 status=ok
// SIG undefined FUN_14271aec0(void)

void FUN_14271aec0(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_48 = param_1[0xd2];
  local_40 = (undefined4)param_1[0xd3];
  (**(code **)(*param_1 + 0x720))(local_48,&local_58);
  plVar5 = (longlong *)param_1[0xa5];
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x800))(plVar5,param_2,&local_58,&local_48);
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x758))(param_1);
  if (((((param_1[0xa5] == 0) || (plVar5 == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*plVar5 + 0x5d0))(plVar5), cVar4 == '\0')) ||
      (cVar4 = (**(code **)(*plVar5 + 0x5d8))(plVar5), cVar4 != '\0')) &&
     ((((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) != 0 &&
       (cVar4 = (**(code **)(*param_1 + 0x768))(param_1), cVar4 != '\0')) &&
      ((*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0 &&
       (cVar4 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xf0))(), cVar4 != '\0'))))))
  {
    (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd0))
              (*(longlong **)(DAT_146b17150 + 0xac8),&local_28,0);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x20))(local_28,param_1,&local_58);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
  }
  (**(code **)(*param_1 + 0x728))(param_1,&local_58,0);
  plVar5 = (longlong *)param_1[0x91];
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)param_1[0xf7];
  }
  if (plVar5 != (longlong *)0x0) {
    local_30 = local_50;
    local_38 = local_58;
    (**(code **)(*plVar5 + 0x7b0))(local_58,&local_38,param_2);
  }
  return;
}



// FUNCTION 14271b0a0 FUN_14271b0a0 body=421 status=ok
// SIG undefined FUN_14271b0a0(void)

void FUN_14271b0a0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  local_res8 = 0x145;
  if ((param_1[0x90] == 0x145) && (cVar1 = (**(code **)(*param_1 + 0x768))(), cVar1 != '\0')) {
    if (param_1[0xe8] != 0) {
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b08de8) &&
       (_Init_thread_header(&DAT_146b08de8), DAT_146b08de8 == -1)) {
      FName::FName(&DAT_146b08de0,L"PC_InactiveStateInputComponent0",1);
      _Init_thread_footer(&DAT_146b08de8);
    }
    lVar4 = DAT_146b08de0;
    local_res8 = 0;
    if (DAT_146b08de0 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar3 = FUN_142956f50();
    lVar4 = FUN_1417985e0(uVar3,param_1,lVar4,0,0,0,0,0,0);
    param_1[0xe8] = lVar4;
    (**(code **)(*param_1 + 0xcd8))(param_1,lVar4);
    FUN_14234b150(param_1[0xe8]);
    FUN_142713b70(param_1,param_1[0xe8]);
    return;
  }
  lVar4 = param_1[0xe8];
  if (lVar4 != 0) {
    FWeakObjectPtr::operator=(&local_res8,lVar4);
    iVar2 = TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
            RemoveSingle(param_1 + 0xe6,&local_res8);
    if (0 < iVar2) {
      FUN_142362cc0(lVar4);
    }
    (**(code **)(*(longlong *)param_1[0xe8] + 0x3b0))((longlong *)param_1[0xe8],0);
    param_1[0xe8] = 0;
  }
  return;
}



// FUNCTION 14271b260 FUN_14271b260 body=83 status=ok
// SIG undefined FUN_14271b260(void)

void FUN_14271b260(longlong *param_1)

{
  longlong lVar1;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  lVar1 = (**(code **)(*param_1 + 0xdd0))();
  if (lVar1 != 0) {
    local_c = local_c & 0xfffffffe;
    local_18 = 0;
    local_10 = 0x40000000;
    local_14 = 1;
    (**(code **)(*param_1 + 0xe18))(param_1,lVar1,&local_18);
  }
  return;
}



// FUNCTION 14271b2e0 FUN_14271b2e0 body=38 status=ok
// SIG undefined FUN_14271b2e0(void)

void FUN_14271b2e0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_2,1);
  if (lVar1 != 0) {
    FUN_1426b0fd0(lVar1);
    return;
  }
  return;
}



// FUNCTION 14271b310 FUN_14271b310 body=183 status=ok
// SIG undefined FUN_14271b310(void)

undefined1 FUN_14271b310(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  lVar6 = *(longlong *)(param_1 + 0x5b8);
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    local_28 = *param_2;
    local_20 = param_2[1];
    local_18 = param_2[2];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
      lVar6 = *(longlong *)(param_1 + 0x5b8);
    }
    uVar5 = FUN_1428bf460(lVar6,&local_28);
  }
  plVar4 = (longlong *)param_2[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 14271b3d0 FUN_14271b3d0 body=183 status=ok
// SIG undefined FUN_14271b3d0(void)

undefined1 FUN_14271b3d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  lVar6 = *(longlong *)(param_1 + 0x5b8);
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    local_28 = *param_2;
    local_20 = param_2[1];
    local_18 = param_2[2];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
      lVar6 = *(longlong *)(param_1 + 0x5b8);
    }
    uVar5 = FUN_1428bf7b0(lVar6,&local_28);
  }
  plVar4 = (longlong *)param_2[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 14271b490 FUN_14271b490 body=94 status=ok
// SIG undefined FUN_14271b490(void)

void FUN_14271b490(longlong *param_1,longlong param_2,longlong param_3)

{
  if ((param_1[0x32] != param_2) || (param_1[0x33] != param_3)) {
    FUN_142382f60(param_1,param_2,&DAT_146532180,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00014271b4e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x708))(param_1,param_2,param_3,1);
  return;
}



// FUNCTION 14271b4f0 FUN_14271b4f0 body=414 status=ok
// SIG undefined FUN_14271b4f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14271b4f0(longlong *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  undefined1 local_88 [48];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (param_1[0x32] == param_2) {
    local_98[1] = 0;
    lVar4 = (**(code **)(*param_1 + 0x6d0))(param_1,0,0);
    if ((lVar4 != 0) &&
       (((cVar2 = FUN_1426aaac0(lVar4), cVar2 == '\0' || (param_4 != '\0')) &&
        (uVar3 = FUN_142696340(lVar4), 1 < uVar3)))) {
      (**(code **)(*param_1 + 0x710))(param_1);
      local_98[0] = 0;
      plVar5 = (longlong *)FUN_14270d7e0(param_1,param_3,local_98,1);
      lVar1 = local_98[0];
      if ((plVar5 != (longlong *)0x0) &&
         (lVar6 = (**(code **)(*plVar5 + 0x6d0))(plVar5,local_98[0],0), lVar6 != 0)) {
        if (*(longlong *)(lVar4 + 200) != lVar6) {
          param_1[0xdd] = lVar1;
          cVar2 = (**(code **)(*plVar5 + 0x400))(plVar5,lVar1);
          if (((cVar2 == '\0') || (cVar2 = (**(code **)(*plVar5 + 0x8d8))(plVar5), cVar2 == '\0'))
             && ((*(byte *)(lVar4 + 0x12) & 0x40) == 0)) {
            LOCK();
            *(undefined8 *)(lVar4 + 200) = 0;
            UNLOCK();
            (**(code **)(*param_1 + 0x5b8))(param_1,0);
            return 0;
          }
          if (plVar5 == (longlong *)param_1[0x32]) {
            FUN_14238d0c0(param_1,local_88);
          }
          else {
            FUN_14162bcf0(param_1 + 0x42,local_58,plVar5 + 0x42);
          }
          FUN_1426b1090(lVar6,lVar4,param_1 + 0x42);
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14271b6b0 FUN_14271b6b0 body=58 status=ok
// SIG undefined FUN_14271b6b0(void)

void FUN_14271b6b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145187ec8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145187f10;
  }
  return;
}



// FUNCTION 14271b700 FUN_14271b700 body=20 status=ok
// SIG undefined FUN_14271b700(void)

undefined1 FUN_14271b700(longlong param_1)

{
  FUN_142720090(param_1 + 8);
  return 1;
}



// FUNCTION 14271b720 FUN_14271b720 body=58 status=ok
// SIG undefined FUN_14271b720(void)

void FUN_14271b720(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145187f58;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145187fa0;
  }
  return;
}



// FUNCTION 14271b770 PurgeUnreferencedMIDsTicker body=16 status=ok
// SIG undefined PurgeUnreferencedMIDsTicker(void)

undefined1 FTextRenderComponentMIDCache::PurgeUnreferencedMIDsTicker(void)

{
  FUN_14272bd50();
  return 1;
}



// FUNCTION 14271b780 FUN_14271b780 body=58 status=ok
// SIG undefined FUN_14271b780(void)

void FUN_14271b780(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145187fe8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145188030;
  }
  return;
}



// FUNCTION 14271b7d0 FUN_14271b7d0 body=20 status=ok
// SIG undefined FUN_14271b7d0(void)

undefined1 FUN_14271b7d0(longlong param_1)

{
  FUN_142720270(param_1 + 8);
  return 1;
}



// FUNCTION 14271b7f0 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FSubsurfaceProfileTexture>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145188078;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR__scalar_deleting_destructor__145189278;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14271b850 TTuple<int,FGuidReferences><int_const_&,FGuidReferences,void> body=300 status=ok
// SIG undefined TTuple<int,FGuidReferences><int_const_&,FGuidReferences,void>(void)

undefined4 *
TTuple<int,FGuidReferences>::TTuple<int,FGuidReferences><int_const_&,FGuidReferences,void>
          (undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
            (param_1 + 2,param_3);
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
            (param_1 + 0x16,param_3 + 0x50);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  iVar1 = *(int *)(param_3 + 0xa8);
  _Src = *(void **)(param_3 + 0xa0);
  param_1[0x2c] = iVar1;
  if (iVar1 == 0) {
    param_1[0x2d] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x2a,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x2a),_Src,(longlong)iVar1);
  }
  param_1[0x2e] = *(undefined4 *)(param_3 + 0xb0);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_3 + 0xb8);
  param_1[0x32] = *(undefined4 *)(param_3 + 0xc0);
  param_1[0x33] = *(undefined4 *)(param_3 + 0xc4);
  return param_1;
}



// FUNCTION 14271b980 operator<int,FGuidReferences>_TTuple<int,FGuidReferences> body=178 status=ok
// SIG undefined operator<int,FGuidReferences>_TTuple<int,FGuidReferences>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TKeyInitializer<int_const_&>::operator<int,FGuidReferences>_TTuple<int,FGuidReferences>
          (undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_108 [32];
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
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_b8 = 0xffffffff;
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
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  TTuple<int,FGuidReferences>::TTuple<int,FGuidReferences><int_const_&,FGuidReferences,void>
            (param_2,*param_1,&local_e8);
  FGuidReferences::~FGuidReferences(&local_e8);
  return param_2;
}



// FUNCTION 14271ba40 FUN_14271ba40 body=1008 status=ok
// SIG undefined FUN_14271ba40(void)

void FUN_14271ba40(longlong param_1,longlong *param_2,longlong *param_3,uint *param_4,int *param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  longlong local_88 [2];
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  uint local_60;
  int local_5c;
  longlong *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar10 = 0;
  if (DAT_146534b64 == 0) {
    *param_4 = *(uint *)(param_1 + 0x40);
    *param_5 = 2;
    uVar13 = uVar10;
    while ((iVar3 = (int)uVar13, -1 < iVar3 && (iVar3 < (int)param_2[1]))) {
      plVar8 = (longlong *)((longlong)iVar3 * 0x30 + *param_2);
      *(undefined4 *)((longlong)plVar8 + 0x14) = *(undefined4 *)(*plVar8 + 0x44);
      uVar13 = (ulonglong)(iVar3 + 1);
    }
    while ((iVar3 = (int)uVar10, -1 < iVar3 && (iVar3 < (int)param_3[1]))) {
      lVar7 = (longlong)iVar3 * 0x20 + *param_3;
      *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar7 + 0xc);
      uVar10 = (ulonglong)(iVar3 + 1);
    }
  }
  else {
    *param_4 = 0;
    lVar7 = param_2[1];
    *param_5 = (0 < (int)lVar7) + 1;
    if (0 < (int)lVar7) {
      iVar3 = (int)param_2[1];
      local_60 = 0;
      local_68 = 0;
      local_5c = 0;
      uVar13 = uVar10;
      if (0 < iVar3) {
        FUN_140485d90(&local_68,iVar3);
        iVar3 = (int)param_2[1];
        uVar13 = (ulonglong)local_60;
      }
      uVar12 = uVar10;
      lVar7 = local_68;
      uVar6 = local_60;
      if (0 < iVar3) {
        do {
          lVar4 = *param_2;
          local_60 = uVar6 + 1;
          if (local_5c < (int)local_60) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,uVar6);
            lVar7 = local_68;
          }
          uVar9 = local_60;
          *(int *)(lVar7 + (longlong)(int)uVar6 * 8) = (int)uVar12;
          uVar2 = (**(code **)(**(longlong **)(lVar4 + uVar10) + 0x348))();
          uVar11 = (int)uVar12 + 1;
          uVar10 = uVar10 + 0x30;
          *(undefined4 *)(lVar7 + (longlong)(int)uVar6 * 8 + 4) = uVar2;
          uVar12 = (ulonglong)uVar11;
          uVar6 = uVar9;
        } while ((int)uVar11 < (int)param_2[1]);
        uVar13 = (ulonglong)local_60;
      }
      uVar12 = 0;
      local_78 = local_88;
      TMergeSort<TRotationInPlaceMerge<TJugglingRotation<FEuclidDivisionGCD>_>,2>::
      Sort<_BuildShadowOffsets<0>_::_8_::FParentCmdIndexAndAlignment,TDereferenceWrapper<_BuildShadowOffsets<0>_::_8_::FParentCmdIndexAndAlignment,TLess<_BuildShadowOffsets<0>_::_8_::FParentCmdIndexAndAlignment>_>_>
                (local_68,uVar13,&local_78);
      uVar10 = uVar12;
      uVar13 = uVar12;
      lVar7 = local_68;
      uVar6 = local_60;
      if (0 < (int)local_60) {
        do {
          uVar9 = (uint)uVar10;
          plVar8 = (longlong *)((longlong)*(int *)(lVar7 + uVar13 * 8) * 0x30 + *param_2);
          if ((*(int *)(*plVar8 + 0x30) < 2) && ((*(uint *)((longlong)plVar8 + 0x2c) >> 5 & 1) == 0)
             ) {
            uStack_50 = 0;
            uStack_70 = CONCAT44(uStack_4c,(uint)*(ushort *)(plVar8 + 3));
            local_78 = param_3;
            local_58 = param_3;
            if ((uint)*(ushort *)(plVar8 + 3) < (uint)*(ushort *)((longlong)plVar8 + 0x1a)) {
              do {
                FUN_14271bed0(&local_78,param_4);
                iVar3 = (int)uStack_70 + 1;
                uStack_70 = CONCAT44(uStack_70._4_4_,iVar3);
                lVar7 = local_68;
                uVar6 = local_60;
              } while (iVar3 < (int)(uint)*(ushort *)((longlong)plVar8 + 0x1a));
            }
            *(undefined4 *)((longlong)plVar8 + 0x14) =
                 *(undefined4 *)((ulonglong)*(ushort *)(plVar8 + 3) * 0x20 + 0x10 + *param_3);
          }
          else {
            iVar3 = *(int *)(*plVar8 + 0x44);
            iVar15 = *(int *)(lVar7 + 4 + uVar13 * 8);
            uVar11 = iVar15 + -1 + *param_4 & -iVar15;
            *param_4 = uVar11;
            lVar4 = *plVar8;
            uVar16 = uVar12;
            if (0 < *(int *)(lVar4 + 0x30)) {
              do {
                iVar15 = (int)uVar16;
                uStack_40 = 0;
                plVar14 = (longlong *)((longlong)*(int *)(lVar7 + uVar13 * 8) * 0x30 + *param_2);
                *(uint *)((longlong)plVar14 + 0x14) = (*(int *)(*plVar14 + 0x44) - iVar3) + *param_4
                ;
                uVar6 = (uint)*(ushort *)(plVar14 + 3);
                uStack_70 = CONCAT44(uStack_3c,uVar6);
                local_78 = param_3;
                local_48 = param_3;
                if (uVar6 < *(ushort *)((longlong)plVar14 + 0x1a)) {
                  do {
                    lVar7 = (longlong)(int)uVar6 * 0x20 + *local_78;
                    *(uint *)(lVar7 + 0x10) = (*(int *)(lVar7 + 0xc) - iVar3) + *param_4;
                    cVar1 = *(char *)((longlong)(int)uStack_70 * 0x20 + 0x1c + *local_78);
                    if ((cVar1 == '\0') ||
                       ((iVar5 = (int)uStack_70,
                        (*(byte *)((longlong)(int)uStack_70 * 0x20 + 0x1d + *local_78) & 2) != 0 &&
                        (cVar1 == '\0')))) {
                      iVar5 = (int)uStack_70 + 1;
                      uStack_70 = CONCAT44(uStack_70._4_4_,iVar5);
                      lVar7 = *local_78;
                      cVar1 = *(char *)((longlong)iVar5 * 0x20 + 0x1c + lVar7);
                      while (cVar1 != '\x01') {
                        lVar7 = (longlong)iVar5 * 0x20 + lVar7;
                        *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar7 + 0xc);
                        BuildShadowOffsets_r<1>
                                  (&local_78,(longlong)(int)uStack_70 * 0x20 + *local_78 + 0x10);
                        iVar5 = (int)uStack_70 + 1;
                        uStack_70 = CONCAT44(uStack_70._4_4_,iVar5);
                        lVar7 = *local_78;
                        cVar1 = *(char *)((longlong)iVar5 * 0x20 + 0x1c + lVar7);
                      }
                    }
                    iVar15 = (int)uVar16;
                    uVar6 = iVar5 + 1;
                    uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
                    lVar7 = local_68;
                  } while ((int)uVar6 < (int)(uint)*(ushort *)((longlong)plVar14 + 0x1a));
                }
                lVar4 = *plVar8;
                uVar9 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar9;
                uVar13 = uVar13 + 1;
                uVar16 = (ulonglong)(iVar15 + 1U);
              } while ((int)(iVar15 + 1U) < *(int *)(lVar4 + 0x30));
              uVar11 = *param_4;
              uVar6 = local_60;
            }
            uVar9 = uVar9 - 1;
            uVar13 = uVar13 - 1;
            *param_4 = *(int *)(lVar4 + 0x34) * *(int *)(lVar4 + 0x30) + uVar11;
          }
          uVar10 = (ulonglong)(uVar9 + 1);
          uVar13 = uVar13 + 1;
        } while ((int)(uVar9 + 1) < (int)uVar6);
      }
      if (local_68 != 0) {
        FMemory::Free(local_68);
      }
    }
  }
  return;
}



// FUNCTION 14271be30 BuildShadowOffsets_r<1> body=152 status=ok
// SIG undefined BuildShadowOffsets_r<1>(void)

void BuildShadowOffsets_r<1>(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 1);
  if (*(char *)((longlong)iVar2 * 0x20 + 0x1c + *(longlong *)*param_1) == '\0') {
    iVar3 = iVar2 + 1;
    *(int *)(param_1 + 1) = iVar3;
    cVar1 = *(char *)((longlong)iVar2 * 0x20 + 0x3c + *(longlong *)*param_1);
    while (cVar1 != '\x01') {
      *(undefined4 *)((longlong)iVar3 * 0x20 + 0x10 + *(longlong *)*param_1) =
           *(undefined4 *)((longlong)iVar3 * 0x20 + 0xc + *(longlong *)*param_1);
      BuildShadowOffsets_r<1>
                (param_1,(longlong)*(int *)(param_1 + 1) * 0x20 + *(longlong *)*param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 1);
      iVar3 = iVar2 + 1;
      *(int *)(param_1 + 1) = iVar3;
      cVar1 = *(char *)((longlong)iVar2 * 0x20 + 0x3c + *(longlong *)*param_1);
    }
  }
  return;
}



// FUNCTION 14271bed0 FUN_14271bed0 body=540 status=ok
// SIG undefined FUN_14271bed0(void)

void FUN_14271bed0(undefined8 *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)((longlong)*(int *)(param_1 + 1) * 0x20 + *(longlong *)*param_1);
  if ((*(char *)((longlong)puVar7 + 0x1c) == '\0') ||
     ((*(byte *)((longlong)puVar7 + 0x1d) & 2) != 0)) {
    iVar2 = (**(code **)(*(longlong *)*puVar7 + 0x348))();
    uVar5 = (*param_2 - 1) + iVar2 & -iVar2;
    *param_2 = uVar5;
    *(uint *)((longlong)*(int *)(param_1 + 1) * 0x20 + 0x10 + *(longlong *)*param_1) = uVar5;
    lVar3 = *(longlong *)((longlong)*(int *)(param_1 + 1) * 0x20 + *(longlong *)*param_1);
    *param_2 = *param_2 + *(int *)(lVar3 + 0x34) * *(int *)(lVar3 + 0x30);
    iVar2 = *(int *)(param_1 + 1);
    if (*(char *)((longlong)iVar2 * 0x20 + 0x1c + *(longlong *)*param_1) == '\0') {
      iVar6 = iVar2 + 1;
      *(int *)(param_1 + 1) = iVar6;
      lVar3 = *(longlong *)*param_1;
      cVar1 = *(char *)((longlong)iVar2 * 0x20 + 0x3c + lVar3);
      while (cVar1 != '\x01') {
        lVar3 = lVar3 + (longlong)iVar6 * 0x20;
        *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar3 + 0xc);
        iVar6 = *(int *)(param_1 + 1);
        lVar3 = (longlong)iVar6;
        if (*(char *)(lVar3 * 0x20 + 0x1c + *(longlong *)*param_1) == '\0') {
          iVar6 = iVar6 + 1;
          *(int *)(param_1 + 1) = iVar6;
          cVar1 = *(char *)(lVar3 * 0x20 + 0x3c + *(longlong *)*param_1);
          while (cVar1 != '\x01') {
            *(undefined4 *)((longlong)iVar6 * 0x20 + 0x10 + *(longlong *)*param_1) =
                 *(undefined4 *)((longlong)iVar6 * 0x20 + 0xc + *(longlong *)*param_1);
            BuildShadowOffsets_r<1>
                      (param_1,(longlong)*(int *)(param_1 + 1) * 0x20 + *(longlong *)*param_1 + 0x10
                      );
            iVar2 = *(int *)(param_1 + 1);
            iVar6 = iVar2 + 1;
            *(int *)(param_1 + 1) = iVar6;
            cVar1 = *(char *)((longlong)iVar2 * 0x20 + 0x3c + *(longlong *)*param_1);
          }
        }
        iVar6 = iVar6 + 1;
        *(int *)(param_1 + 1) = iVar6;
        lVar3 = *(longlong *)*param_1;
        cVar1 = *(char *)((longlong)iVar6 * 0x20 + 0x1c + lVar3);
      }
    }
    return;
  }
  uVar5 = *param_2;
  if (0 < (int)uVar5) {
    if ((*(char *)((longlong)puVar7 + 0x1c) == '\x03') && (0 < *(int *)(param_1 + 1))) {
      lVar4 = (longlong)((int)param_1[1] + -1) * 0x20;
      lVar3 = *(longlong *)*param_1;
      if ((*(char *)(lVar4 + 0x1c + lVar3) != '\x03') ||
         (*(int *)(lVar4 + 0xc + lVar3) != *(int *)((longlong)puVar7 + 0xc))) goto LAB_14271bf72;
      uVar5 = *(uint *)(lVar4 + 0x10 + lVar3);
    }
    else {
      iVar2 = (**(code **)(*(longlong *)*puVar7 + 0x348))();
      uVar5 = (*param_2 - 1) + iVar2 & -iVar2;
    }
    *param_2 = uVar5;
  }
LAB_14271bf72:
  *(uint *)((longlong)*(int *)(param_1 + 1) * 0x20 + 0x10 + *(longlong *)*param_1) = uVar5;
  *param_2 = *param_2 +
             (uint)*(ushort *)((longlong)*(int *)(param_1 + 1) * 0x20 + 10 + *(longlong *)*param_1);
  return;
}



// FUNCTION 14271c0f0 FUN_14271c0f0 body=48 status=ok
// SIG undefined FUN_14271c0f0(void)

undefined1 FUN_14271c0f0(float *param_1,float *param_2)

{
  if ((((*param_2 == *param_1) && (param_2[1] == param_1[1])) && (param_2[2] == param_1[2])) &&
     (param_2[3] == param_1[3])) {
    return 1;
  }
  return 0;
}



// FUNCTION 14271c120 FUN_14271c120 body=178 status=ok
// SIG undefined FUN_14271c120(void)

ulonglong FUN_14271c120(float *param_1,float *param_2)

{
  ulonglong in_RAX;
  
  if (((((*param_2 == *param_1) && (param_2[1] == param_1[1])) && (param_2[2] == param_1[2])) &&
      ((((param_2[3] == param_1[3] && (param_2[4] == param_1[4])) &&
        ((param_2[5] == param_1[5] && ((param_2[6] == param_1[6] && (param_2[7] == param_1[7]))))))
       && (param_2[8] == param_1[8])))) &&
     (((param_2[9] == param_1[9] && (param_2[10] == param_1[10])) && (param_2[0xb] == param_1[0xb]))
     )) {
    in_RAX = 0;
    if (((*(byte *)(param_2 + 0xc) ^ *(byte *)(param_1 + 0xc)) & 1) == 0) {
      return (ulonglong)(~((*(byte *)(param_2 + 0xc) ^ *(byte *)(param_1 + 0xc)) >> 1) & 1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14271c1e0 FUN_14271c1e0 body=156 status=ok
// SIG undefined FUN_14271c1e0(void)

ulonglong FUN_14271c1e0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                       uint param_5)

{
  longlong local_58;
  longlong local_50;
  uint local_48;
  undefined4 local_44;
  undefined8 local_40;
  byte local_38;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  undefined8 local_10;
  
  if (*(uint *)(param_1 + 0x98) < 2) {
    return param_4 & 0xffffffffffffff00;
  }
  local_58 = param_1 + 0x10;
  local_50 = param_1 + 0x20;
  local_38 = 0;
  local_48 = param_5;
  local_44 = 1;
  if ((param_5 & 2) != 0) {
    local_44 = 3;
  }
  local_2c = *(int *)(param_1 + 0x28) + -1;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_40 = param_2;
  local_18 = param_4;
  local_10 = param_3;
  TRepLayoutCmdIterator<TDiffPropertiesImpl<1,0>,TCmdIteratorBaseStackState<1,0>_>::ProcessCmds_r
            (&local_58,&local_30,param_4,param_3);
  return (ulonglong)local_38;
}



// FUNCTION 14271c280 FUN_14271c280 body=156 status=ok
// SIG undefined FUN_14271c280(void)

ulonglong FUN_14271c280(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                       uint param_5)

{
  longlong local_58;
  longlong local_50;
  uint local_48;
  undefined4 local_44;
  undefined8 local_40;
  byte local_38;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  undefined8 local_10;
  
  if (*(uint *)(param_1 + 0x98) < 2) {
    return param_4 & 0xffffffffffffff00;
  }
  local_58 = param_1 + 0x10;
  local_50 = param_1 + 0x20;
  local_38 = 0;
  local_48 = param_5;
  local_44 = 1;
  if ((param_5 & 2) != 0) {
    local_44 = 3;
  }
  local_2c = *(int *)(param_1 + 0x28) + -1;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_40 = param_2;
  local_18 = param_4;
  local_10 = param_3;
  TRepLayoutCmdIterator<TDiffPropertiesImpl<0,1>,TCmdIteratorBaseStackState<0,1>_>::ProcessCmds_r
            (&local_58,&local_30,param_4,param_3);
  return (ulonglong)local_38;
}



// FUNCTION 14271c320 FUN_14271c320 body=156 status=ok
// SIG undefined FUN_14271c320(void)

ulonglong FUN_14271c320(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                       uint param_5)

{
  longlong local_58;
  longlong local_50;
  uint local_48;
  undefined4 local_44;
  undefined8 local_40;
  byte local_38;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  undefined8 local_10;
  
  if (*(uint *)(param_1 + 0x98) < 2) {
    return param_4 & 0xffffffffffffff00;
  }
  local_58 = param_1 + 0x10;
  local_50 = param_1 + 0x20;
  local_38 = 0;
  local_48 = param_5;
  local_44 = 1;
  if ((param_5 & 2) != 0) {
    local_44 = 3;
  }
  local_2c = *(int *)(param_1 + 0x28) + -1;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_40 = param_2;
  local_18 = param_4;
  local_10 = param_3;
  TRepLayoutCmdIterator<TDiffPropertiesImpl<0,0>,TCmdIteratorBaseStackState<0,0>_>::ProcessCmds_r
            (&local_58,&local_30,param_4,param_3);
  return (ulonglong)local_38;
}



// FUNCTION 14271c3c0 FUN_14271c3c0 body=122 status=ok
// SIG undefined FUN_14271c3c0(void)

ulonglong FUN_14271c3c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  ulonglong in_RAX;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  byte local_38;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(uint *)(param_1 + 0x98) < 2) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_58 = param_1 + 0x10;
  local_50 = param_1 + 0x20;
  local_38 = 0;
  local_2c = *(int *)(param_1 + 0x28) + -1;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = param_5;
  local_48 = param_2;
  local_40 = param_3;
  local_10 = param_4;
  TRepLayoutCmdIterator<TDiffStablePropertiesImpl<1,0>,TCmdIteratorBaseStackState<1,0>_>::
  ProcessCmds_r(&local_58,&local_30);
  return (ulonglong)local_38;
}



// FUNCTION 14271c440 FUN_14271c440 body=122 status=ok
// SIG undefined FUN_14271c440(void)

ulonglong FUN_14271c440(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  ulonglong in_RAX;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  byte local_38;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(uint *)(param_1 + 0x98) < 2) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_58 = param_1 + 0x10;
  local_50 = param_1 + 0x20;
  local_38 = 0;
  local_2c = *(int *)(param_1 + 0x28) + -1;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = param_5;
  local_48 = param_2;
  local_40 = param_3;
  local_10 = param_4;
  TRepLayoutCmdIterator<TDiffStablePropertiesImpl<0,1>,TCmdIteratorBaseStackState<0,1>_>::
  ProcessCmds_r(&local_58,&local_30);
  return (ulonglong)local_38;
}



// FUNCTION 14271c4c0 Emplace<TKeyInitializer<int_const_&>_> body=418 status=ok
// SIG undefined Emplace<TKeyInitializer<int_const_&>_>(void)

int * TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                (longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_28 [2];
  uint *local_20;
  
  TSparseArray<TSetElement<TTuple<FRHIGraphicsPipelineState_*,FShaderCacheGraphicsPipelineState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *param_2 = local_28[0];
  TKeyInitializer<int_const_&>::operator<int,FGuidReferences>_TTuple<int,FGuidReferences>
            (param_3,local_20);
  local_20[0x34] = 0xffffffff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)((longlong)iVar3 * 0xd8 + *param_1) == *local_20) goto LAB_14271c581;
          iVar3 = *(int *)((longlong)iVar3 * 0xd8 + 0xd0 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_14271c581:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0xd8 + *param_1);
      FGuidReferences::~FGuidReferences((longlong)_Dst + 8);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0xd0);
      TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_14271c637;
    }
  }
  cVar1 = ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_20;
    local_20[0x35] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_20[0x34] =
         *(uint *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_14271c637:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 14271c670 Emplace<TPairInitializer<int_const_&,FGuidReferences_&&>_> body=434 status=ok
// SIG undefined Emplace<TPairInitializer<int_const_&,FGuidReferences_&&>_>(void)

int * TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,FGuidReferences_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_28 [2];
  uint *local_20;
  
  TSparseArray<TSetElement<TTuple<FRHIGraphicsPipelineState_*,FShaderCacheGraphicsPipelineState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  uVar1 = param_3[1];
  uVar2 = *param_3;
  *param_2 = local_28[0];
  TTuple<int,FGuidReferences>::TTuple<int,FGuidReferences><int_const_&,FGuidReferences,void>
            (local_20,uVar2,uVar1);
  local_20[0x34] = 0xffffffff;
  bVar8 = false;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    if (iVar7 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)((longlong)iVar5 * 0xd8 + *param_1) == *local_20) goto LAB_14271c741;
          iVar5 = *(int *)((longlong)iVar5 * 0xd8 + 0xd0 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_14271c741:
    bVar8 = iVar5 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar5 * 0xd8 + *param_1);
      FGuidReferences::~FGuidReferences((longlong)_Dst + 8);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0xd0);
      TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_14271c7f7;
    }
  }
  cVar3 = ConditionalRehash(param_1,iVar7,0);
  if (cVar3 == '\0') {
    uVar6 = (int)param_1[9] - 1U & *local_20;
    local_20[0x35] = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    local_20[0x34] =
         *(uint *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_14271c7f7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 14271c830 FUN_14271c830 body=1005 status=ok
// SIG undefined FUN_14271c830(void)

int * FUN_14271c830(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulonglong *_Src;
  bool local_res8;
  
  iVar6 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar12 = *(int *)((longlong)iVar9 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar12 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar9;
  local_res8 = false;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar2 = (ulonglong *)param_3[1];
  _Src = (ulonglong *)((longlong)iVar9 * 0x20 + *param_1);
  *_Src = *(ulonglong *)*param_3;
  _Src[1] = 0;
  _Src[1] = *puVar2;
  *puVar2 = 0;
  *(int *)(_Src + 2) = (int)puVar2[1];
  *(undefined4 *)((longlong)_Src + 0x14) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    iVar8 = iVar15;
    if (uVar14 != 0) {
      iVar12 = (int)(*_Src >> 4);
      uVar11 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
      uVar5 = -(uVar11 + iVar12) ^ uVar11 >> 0xd;
      uVar13 = (iVar12 - uVar11) - uVar5 ^ uVar5 >> 0xc;
      uVar11 = (uVar11 - uVar13) - uVar5 ^ uVar13 << 0x10;
      uVar5 = (uVar5 - uVar11) - uVar13 ^ uVar11 >> 5;
      uVar13 = (uVar13 - uVar11) - uVar5 ^ uVar5 >> 3;
      uVar11 = (uVar11 - uVar13) - uVar5 ^ uVar13 << 10;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar4 +
                       (((longlong)(int)((uVar5 - uVar11) - uVar13) ^ (ulonglong)(uVar11 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar12 != -1) {
        do {
          iVar8 = iVar12;
          if (*(ulonglong *)((longlong)iVar12 * 0x20 + *param_1) == *_Src) break;
          iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar15;
        } while (iVar12 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar6 = *param_2;
      bVar3 = (byte)iVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar6;
      }
      puVar7 = (undefined4 *)((longlong)iVar6 * 0x20 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      puVar7[1] = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar6;
      plVar4 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar4 +
                       (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14271cbf4;
    }
  }
  if (3 < uVar14) {
    uVar5 = (uVar14 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar5 != 0) {
      iVar6 = 0x1f - iVar15;
    }
    uVar5 = (uVar14 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x1f' - (char)iVar15;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    iVar15 = (int)(*_Src >> 4);
    uVar5 = 0x9e3779b9U - iVar15 ^ iVar15 << 8;
    uVar11 = -(uVar5 + iVar15) ^ uVar5 >> 0xd;
    uVar14 = (iVar15 - uVar5) - uVar11 ^ uVar11 >> 0xc;
    uVar5 = (uVar5 - uVar14) - uVar11 ^ uVar14 << 0x10;
    uVar11 = (uVar11 - uVar5) - uVar14 ^ uVar5 >> 5;
    uVar14 = (uVar14 - uVar5) - uVar11 ^ uVar11 >> 3;
    uVar5 = (uVar5 - uVar14) - uVar11 ^ uVar14 << 10;
    uVar14 = ((uVar11 - uVar5) - uVar14 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar14;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14271cbf4:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14271cc20 FUN_14271cc20 body=968 status=ok
// SIG undefined FUN_14271cc20(void)

int * FUN_14271cc20(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

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
      goto LAB_14271cfbd;
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
LAB_14271cfbd:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar19;
  }
  return param_2;
}



// FUNCTION 14271cff0 FUN_14271cff0 body=789 status=ok
// SIG undefined FUN_14271cff0(void)

int * FUN_14271cff0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  char cVar11;
  uint uVar12;
  uint uVar13;
  longlong *_Src;
  int iVar14;
  bool local_res8;
  
  iVar6 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar10;
  uVar12 = 0;
  local_res8 = false;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  plVar5 = (longlong *)param_3[1];
  _Src = (longlong *)((longlong)iVar10 * 0x20 + *param_1);
  *_Src = *(longlong *)*param_3;
  _Src[1] = 0;
  _Src[1] = *plVar5;
  *plVar5 = 0;
  *(int *)(_Src + 2) = (int)plVar5[1];
  *(undefined4 *)((longlong)_Src + 0x14) = *(undefined4 *)((longlong)plVar5 + 0xc);
  plVar5[1] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    lVar2 = *_Src;
    iVar9 = iVar14;
    if (uVar13 != 0) {
      uVar4 = uVar12;
      if (lVar2 != 0) {
        uVar4 = *(uint *)(lVar2 + 0x68);
      }
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)((longlong)iVar8 * 0x20 + *param_1) == lVar2) break;
          iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *param_1);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar6 = *param_2;
      bVar3 = (byte)iVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar6;
      }
      puVar7 = (undefined4 *)((longlong)iVar6 * 0x20 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar7[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar6;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar5 +
                       (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14271d2dc;
    }
  }
  if (3 < uVar13) {
    uVar4 = (uVar13 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar14;
    }
    uVar4 = (uVar13 >> 1) + 7;
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
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    if (*_Src != 0) {
      uVar12 = *(uint *)(*_Src + 0x68);
    }
    uVar12 = (int)param_1[9] - 1U & uVar12;
    *(uint *)((longlong)_Src + 0x1c) = uVar12;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<FShaderPipelineType_const_*,FString>,TDefaultMapHashableKeyFuncs<FShaderPipelineType_const_*,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14271d2dc:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14271d310 NewObject<USoundWave> body=89 status=ok
// SIG undefined NewObject<USoundWave>(void)

void NewObject<USoundWave>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 14271d370 Sort<`BuildShadowOffsets<0>'::`8'::FParentCmdIndexAndAlignment,TDereferenceWrapper<`BuildShadowOffsets<0>'::`8'::FParentCmdIndexAndAlignment,TLess<`BuildShadowOffsets<0>'::`8'::FParentCmdIndexAndAlignment>_>_> body=736 status=ok
// SIG undefined Sort<`BuildShadowOffsets<0>'::`8'::FParentCmdIndexAndAlignment,TDereferenceWrapper<`BuildShadowOffsets<0>'::`8'::FParentCmdIndexAndAlignment,TLess<`BuildShadowOffsets<0>'::`8'::FParentCmdIndexAndAlignment>_>_>(void)

void TMergeSort<TRotationInPlaceMerge<TJugglingRotation<FEuclidDivisionGCD>_>,2>::
     Sort<_BuildShadowOffsets<0>_::_8_::FParentCmdIndexAndAlignment,TDereferenceWrapper<_BuildShadowOffsets<0>_::_8_::FParentCmdIndexAndAlignment,TLess<_BuildShadowOffsets<0>_::_8_::FParentCmdIndexAndAlignment>_>_>
               (longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int local_78;
  int local_74;
  undefined8 local_60 [5];
  
  uVar15 = (ulonglong)(int)param_2;
  if (0 < (int)param_2) {
    iVar7 = 1;
    piVar11 = (int *)(param_1 + 4);
    lVar14 = (uVar15 - 1 >> 1) + 1;
    do {
      if ((iVar7 < (int)param_2) && (piVar11[2] < *piVar11)) {
        puVar16 = (undefined8 *)(param_1 + (longlong)iVar7 * 8);
        puVar1 = (undefined8 *)(param_1 + (longlong)(iVar7 + -1) * 8);
        if (puVar1 != puVar16) {
          uVar20 = *puVar1;
          *puVar1 = *puVar16;
          *puVar16 = uVar20;
        }
      }
      iVar7 = iVar7 + 2;
      piVar11 = piVar11 + 4;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  local_74 = 2;
  uVar3 = uVar15;
  if (2 < (int)param_2) {
    do {
      iVar7 = local_74 * 2;
      lVar18 = 0;
      local_78 = 0;
      lVar14 = param_1;
      do {
        iVar17 = (int)uVar3 - local_78;
        if (iVar7 <= iVar17) {
          iVar17 = iVar7;
        }
        iVar5 = 0;
        iVar19 = local_74;
        if (0 < local_74) {
          do {
            if (iVar17 <= iVar19) break;
            lVar12 = 0;
            if (iVar19 - iVar5 != 0) {
              uVar3 = (longlong)(iVar19 - iVar5);
              do {
                uVar8 = uVar3 >> 1;
                if (*(int *)(lVar14 + 4 + ((longlong)iVar5 + uVar8 + lVar12) * 8) <=
                    *(int *)(lVar14 + 4 + (longlong)iVar19 * 8)) {
                  lVar12 = (ulonglong)((uint)uVar3 & 1) + uVar8 + lVar12;
                }
                uVar3 = uVar8;
              } while (uVar8 != 0);
            }
            iVar5 = iVar5 + (int)lVar12;
            if (iVar19 <= iVar5) break;
            uVar3 = 0;
            if (iVar17 - iVar19 != 0) {
              uVar8 = (longlong)(iVar17 - iVar19);
              do {
                uVar9 = uVar8 >> 1;
                if (*(int *)(lVar14 + 4 + ((longlong)iVar19 + uVar9 + uVar3) * 8) <
                    *(int *)(lVar14 + 4 + (longlong)iVar5 * 8)) {
                  uVar3 = (ulonglong)((uint)uVar8 & 1) + uVar9 + uVar3;
                }
                uVar8 = uVar9;
              } while (uVar9 != 0);
            }
            iVar10 = (int)uVar3;
            if (iVar10 != 0) {
              uVar3 = uVar3 & 0xffffffff;
              iVar6 = (iVar10 - iVar5) + iVar19;
              iVar13 = iVar6;
              do {
                iVar2 = (int)uVar3;
                uVar4 = iVar13 % iVar2;
                uVar3 = (ulonglong)uVar4;
                iVar13 = iVar2;
              } while (uVar4 != 0);
              uVar3 = 0;
              if (0 < iVar2) {
                puVar16 = (undefined8 *)(lVar14 + (longlong)iVar5 * 8);
                do {
                  uVar20 = *puVar16;
                  iVar13 = (int)uVar3;
                  uVar8 = (longlong)iVar6 / (longlong)iVar2 & 0xffffffff;
                  if (0 < (int)((longlong)iVar6 / (longlong)iVar2)) {
                    do {
                      uVar9 = (longlong)((int)uVar3 + iVar10) % (longlong)iVar6;
                      uVar3 = uVar9 & 0xffffffff;
                      puVar1 = (undefined8 *)(lVar14 + (longlong)((int)uVar9 + iVar5) * 8);
                      uVar21 = uVar20;
                      if (puVar1 != local_60) {
                        uVar21 = *puVar1;
                        *puVar1 = uVar20;
                      }
                      uVar8 = uVar8 - 1;
                      uVar20 = uVar21;
                    } while (uVar8 != 0);
                  }
                  uVar4 = iVar13 + 1;
                  uVar3 = (ulonglong)uVar4;
                  puVar16 = puVar16 + 1;
                } while ((int)uVar4 < iVar2);
              }
            }
            iVar19 = iVar19 + iVar10;
            iVar5 = iVar5 + 1 + iVar10;
          } while (iVar5 < iVar19);
          uVar3 = (ulonglong)param_2;
        }
        local_78 = local_78 + local_74 * 2;
        lVar18 = lVar18 + (longlong)local_74 * 2;
        lVar14 = lVar14 + (longlong)local_74 * 0x10;
      } while (lVar18 < (longlong)uVar15);
      local_74 = iVar7;
    } while (iVar7 < (int)uVar3);
  }
  return;
}



// FUNCTION 14271d650 FUN_14271d650 body=160 status=ok
// SIG undefined FUN_14271d650(void)

undefined8 * FUN_14271d650(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"LightComponent0");
  uVar1 = FUN_1429f7880();
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightComponent0",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar2,uVar1,param_2);
  FUN_14253df20(param_1,param_2);
  *param_1 = &PTR__scalar_deleting_destructor__1450f0d78;
  param_1[0x8d] = param_1[0x8b];
  *(undefined1 *)(param_1[0x8b] + 0x24e) = 1;
  param_1[0x2d] = param_1[0x8d];
  return param_1;
}



// FUNCTION 14271d6f0 FAsyncSoundWavePCMWriteWorker body=135 status=ok
// SIG undefined FAsyncSoundWavePCMWriteWorker(void)

undefined8 *
Audio::FAsyncSoundWavePCMWriteWorker::FAsyncSoundWavePCMWriteWorker
          (undefined8 *param_1,undefined8 param_2,undefined1 param_3,longlong param_4)

{
  longlong *plVar1;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(param_1 + 8,param_4);
  if (*(int *)(param_4 + 0x40) != 0) {
    plVar1 = *(longlong **)(param_4 + 0x30);
    if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_4 + 0x10);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14271d780 FUN_14271d780 body=54 status=ok
// SIG undefined FUN_14271d780(void)

undefined8 * FUN_14271d780(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1451882a8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 14271d7c0 FUN_14271d7c0 body=2350 status=ok
// SIG undefined FUN_14271d7c0(void)

undefined8 * FUN_14271d7c0(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  uint uVar15;
  float fVar16;
  
  *param_1 = &PTR_FUN_1451880b8;
  *(uint *)(param_1 + 2) = (uint)*(byte *)((longlong)param_2 + 0x24e);
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x2e7);
  bVar4 = (**(code **)(*param_2 + 0x460))(param_2);
  uVar15 = ((uint)bVar4 * 2 ^ *(uint *)(param_1 + 3)) & 2 ^ *(uint *)(param_1 + 3);
  *(uint *)(param_1 + 3) = uVar15;
  uVar15 = uVar15 ^ (*(byte *)((longlong)param_2 + 0x24c) >> 3 ^ uVar15) & 4;
  *(uint *)(param_1 + 3) = uVar15;
  uVar15 = uVar15 ^ ((uint)*(byte *)(param_2 + 0x5e) * 2 ^ uVar15) & 8;
  *(uint *)(param_1 + 3) = uVar15;
  uVar15 = uVar15 ^ ((uint)*(byte *)(param_2 + 0x5e) * 2 ^ uVar15) & 0x10;
  *(uint *)(param_1 + 3) = uVar15;
  uVar15 = uVar15 ^ (*(byte *)(param_2 + 0x5e) >> 1 ^ uVar15) & 0x20;
  *(uint *)(param_1 + 3) = uVar15;
  *(uint *)(param_1 + 3) = ((uint)*(byte *)(param_2 + 0x5e) * 2 ^ uVar15) & 0x40 ^ uVar15;
  bVar4 = (**(code **)(*param_2 + 0x650))(param_2);
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xfffffeff;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | (bVar4 & 1) << 8;
  bVar4 = FOutputDevice::CanBeUsedOnAnyThread(param_2);
  uVar15 = (*(uint *)(param_1 + 3) & 0xfffffdff | (uint)bVar4 << 9) & 0xfffffbff;
  *(uint *)(param_1 + 3) = uVar15;
  uVar15 = uVar15 ^ ((uint)*(byte *)((longlong)param_2 + 0x2ef) << 6 ^ uVar15) & 0x800;
  *(uint *)(param_1 + 3) = uVar15;
  *(uint *)(param_1 + 3) =
       (*(byte *)((longlong)param_2 + 0x2ef) & 0xffffff80) << 5 | uVar15 & 0xffffefff;
  bVar4 = (**(code **)(*param_2 + 0x698))(param_2);
  uVar15 = ((uint)bVar4 << 0xd ^ *(uint *)(param_1 + 3)) & 0xe000 ^ *(uint *)(param_1 + 3);
  *(uint *)(param_1 + 3) = uVar15;
  *(uint *)(param_1 + 3) =
       ((uint)*(byte *)((longlong)param_2 + 0x2e5) << 0x10 ^ uVar15) & 0x70000 ^ uVar15;
  bVar4 = FUN_14238efd0(param_2);
  uVar15 = *(uint *)(param_1 + 3) & 0xfff7ffff | (uint)bVar4 << 0x13;
  *(uint *)(param_1 + 3) = uVar15;
  uVar15 = uVar15 ^ ((uint)*(byte *)(param_2 + 0x5e) << 0x14 ^ uVar15) & 0x100000;
  *(uint *)(param_1 + 3) = uVar15;
  *(uint *)(param_1 + 3) =
       (uVar15 ^ ((uint)*(byte *)(param_2 + 0x5e) << 0x14 ^ uVar15) & 0x200000) & 0xff3fffff;
  iVar6 = (**(code **)(*param_2 + 0x4e8))(param_2);
  uVar14 = 0;
  uVar13 = 0;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xfeffffff;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | (uint)(iVar6 != 0) << 0x18;
  iVar6 = (**(code **)(*param_2 + 0x4e8))(param_2);
  uVar15 = 0x2000000;
  if (1 < iVar6 - 2U) {
    uVar15 = uVar13;
  }
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xfdffffff;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | uVar15;
  iVar6 = (**(code **)(*param_2 + 0x4e8))(param_2);
  uVar15 = *(uint *)(param_1 + 3);
  uVar12 = 0x4000000;
  if ((iVar6 - 1U & 0xfffffffd) != 0) {
    uVar12 = uVar13;
  }
  *(uint *)(param_1 + 3) = uVar15 & 0xfbffffff | uVar12;
  *(uint *)(param_1 + 3) =
       (*(byte *)(param_2 + 0x5e) & 0xffffff80) << 0x14 | uVar15 & 0xa3ffffff | uVar12 | 0x20000000;
  cVar5 = (**(code **)(*param_2 + 0x538))(param_2);
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0x7fffffff;
  uVar12 = 0;
  uVar15 = uVar12;
  if (cVar5 == '\0') {
    uVar15 = 0x80000000;
  }
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | uVar15;
  bVar4 = (**(code **)(*param_2 + 0x658))(param_2,0);
  *(uint *)((longlong)param_1 + 0x1c) =
       ((uint)bVar4 ^ *(uint *)((longlong)param_1 + 0x1c)) & 1 ^ *(uint *)((longlong)param_1 + 0x1c)
       | 2;
  if (((char)*(byte *)((longlong)param_2 + 0x2f1) < '\0') &&
     ((*(byte *)((longlong)param_2 + 0x2f1) & 0x10) != 0)) {
    cVar5 = (**(code **)(*param_2 + 0x768))(param_2);
    uVar15 = 4;
    if (cVar5 == '\0') goto LAB_14271da71;
  }
  uVar15 = uVar13;
LAB_14271da71:
  uVar15 = *(uint *)((longlong)param_1 + 0x1c) & 0xfffffffb | uVar15;
  *(uint *)((longlong)param_1 + 0x1c) = uVar15;
  uVar15 = uVar15 ^ (*(byte *)((longlong)param_2 + 0x2f1) >> 2 ^ uVar15) & 8;
  *(uint *)((longlong)param_1 + 0x1c) = uVar15;
  uVar15 = (*(byte *)((longlong)param_2 + 0x2f1) >> 2 ^ uVar15) & 0x10 ^ uVar15;
  *(uint *)((longlong)param_1 + 0x1c) = uVar15;
  if (((*(byte *)((longlong)param_2 + 0x2f1) & 0x10) == 0) ||
     (uVar10 = 0x20, (*(byte *)((longlong)param_2 + 0x2f2) & 1) == 0)) {
    uVar10 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x1c) = uVar15 & 0xffffffdf | uVar10;
  if (((-1 < (char)*(byte *)((longlong)param_2 + 0x2f1)) ||
      ((*(byte *)((longlong)param_2 + 0x2f1) & 0x10) == 0)) ||
     (uVar11 = 0x40, (*(byte *)((longlong)param_2 + 0x2f2) & 2) == 0)) {
    uVar11 = uVar12;
  }
  uVar11 = uVar15 & 0xfffffe1f | uVar10 | uVar11;
  *(uint *)((longlong)param_1 + 0x1c) = uVar11;
  uVar11 = uVar11 ^ ((uint)*(byte *)((longlong)param_2 + 0x2f2) << 3 ^ uVar11) & 0x200;
  *(uint *)((longlong)param_1 + 0x1c) = uVar11;
  uVar15 = (*(byte *)((longlong)param_2 + 0x2f2) & 0xffffff80) << 3 | uVar11 & 0xfffffbff;
  *(uint *)((longlong)param_1 + 0x1c) = uVar15;
  uVar15 = ((uint)*(byte *)((longlong)param_2 + 0x2f2) << 9 ^ uVar15) & 0x800 ^ uVar15;
  *(uint *)((longlong)param_1 + 0x1c) = uVar15;
  if ((*(byte *)((longlong)param_2 + 0x2f2) & 4) == 0) {
    uVar10 = (uint)(*(byte *)((longlong)param_2 + 0x2f2) >> 4);
  }
  else {
    uVar10 = 1;
  }
  uVar15 = (uVar10 << 0xc ^ uVar15) & 0x1000 ^ uVar15;
  *(uint *)((longlong)param_1 + 0x1c) = uVar15;
  uVar15 = uVar15 ^ ((uint)*(byte *)((longlong)param_2 + 0x2f2) << 8 ^ uVar15) & 0x2000;
  *(uint *)((longlong)param_1 + 0x1c) = uVar15;
  uVar15 = (uVar15 ^ ((uint)*(byte *)((longlong)param_2 + 0x2f2) << 0xb ^ uVar15) & 0x4000) &
           0xffff7fff;
  *(uint *)((longlong)param_1 + 0x1c) = uVar15;
  uVar15 = uVar15 ^ ((uint)*(byte *)((longlong)param_2 + 0x2f3) << 0xf ^ uVar15) & 0x10000;
  *(uint *)((longlong)param_1 + 0x1c) = uVar15;
  uVar15 = (uVar15 ^ ((uint)*(byte *)((longlong)param_2 + 0x2f3) << 0xe ^ uVar15) & 0x20000) &
           0xff13ffff | 0x3100000;
  *(uint *)((longlong)param_1 + 0x1c) = uVar15;
  uVar15 = uVar15 ^ ((int)param_2[0x73] << 0x1a ^ uVar15) & 0x4000000;
  *(uint *)((longlong)param_1 + 0x1c) = uVar15;
  uVar15 = uVar15 ^ ((uint)*(byte *)((longlong)param_2 + 0x2f1) << 0x1b ^ uVar15) & 0x8000000;
  *(uint *)((longlong)param_1 + 0x1c) = uVar15;
  if (*(char *)((longlong)param_2 + 0x24e) != '\x02') {
    uVar12 = 0x10000000;
  }
  uVar12 = uVar12 | uVar15 & 0xefffffff;
  *(uint *)((longlong)param_1 + 0x1c) = uVar12;
  uVar12 = uVar12 ^ ((uint)*(byte *)((longlong)param_2 + 0x2f1) << 0x1c ^ uVar12) & 0x20000000;
  *(uint *)((longlong)param_1 + 0x1c) = uVar12;
  uVar12 = uVar12 ^ ((uint)*(byte *)((longlong)param_2 + 0x2f1) << 0x1b ^ uVar12) & 0x40000000;
  *(uint *)((longlong)param_1 + 0x1c) = uVar12;
  *(uint *)((longlong)param_1 + 0x1c) =
       ((uint)*(byte *)(param_2 + 0x5f) << 0x19 ^ uVar12) & 0x7fffffff ^
       (uint)*(byte *)(param_2 + 0x5f) << 0x19;
  *(uint *)(param_1 + 4) =
       *(uint *)(param_1 + 4) ^
       ((uint)(*(byte *)((longlong)param_2 + 0x2f3) >> 2) ^ *(uint *)(param_1 + 4)) & 1;
  uVar15 = *(byte *)(param_2 + 0x5f) >> 6 & 0x3fffffe | *(uint *)(param_1 + 4) & 0xfffffffd;
  *(uint *)(param_1 + 4) = uVar15;
  uVar15 = (*(int *)((longlong)param_2 + 0x2fc) << 2 ^ uVar15) & 4 ^ uVar15;
  *(uint *)(param_1 + 4) = uVar15;
  uVar15 = (*(int *)((longlong)param_2 + 0x2fc) << 2 ^ uVar15) & 8 ^ uVar15;
  *(uint *)(param_1 + 4) = uVar15;
  uVar15 = (*(int *)((longlong)param_2 + 0x2fc) << 2 ^ uVar15) & 0x10 ^ uVar15;
  *(uint *)(param_1 + 4) = uVar15;
  uVar15 = (*(int *)((longlong)param_2 + 0x2fc) << 2 ^ uVar15) & 0x20 ^ uVar15;
  *(uint *)(param_1 + 4) = uVar15;
  uVar15 = ((uint)*(byte *)(param_2 + 0x5e) << 2 ^ uVar15) & 0x40 ^ uVar15;
  *(uint *)(param_1 + 4) = uVar15;
  *(uint *)(param_1 + 4) =
       ((uint)*(byte *)((longlong)param_2 + 0x2ee) << 6 ^ uVar15) & 0x80 ^ uVar15;
  *(char *)((longlong)param_1 + 0x24) = (char)param_2[0x61];
  uVar8 = 1;
  switch(*(undefined1 *)((longlong)param_2 + 0x305)) {
  default:
    uVar8 = uVar14;
    break;
  case 1:
    break;
  case 2:
    uVar8 = 2;
    break;
  case 3:
    uVar8 = 3;
    break;
  case 4:
    uVar8 = 4;
    break;
  case 5:
    uVar8 = 5;
    break;
  case 6:
    uVar8 = 6;
    break;
  case 7:
    uVar8 = 7;
    break;
  case 8:
    uVar8 = 8;
    break;
  case 9:
    uVar8 = 9;
  }
  *(int *)(param_1 + 5) = (int)uVar8;
  plVar1 = param_1 + 0x24;
  *(byte *)((longlong)param_1 + 0x2c) = *(byte *)((longlong)param_2 + 0x304) & 7;
  *(int *)(param_1 + 0xe) = (int)param_2[0x6b];
  *(uint *)((longlong)param_1 + 0x74) = (uint)*(byte *)((longlong)param_2 + 0x2e6);
  *(undefined4 *)(param_1 + 0xf) = 0;
  *plVar1 = 0;
  param_1[0x25] = 0;
  uVar8 = FUN_14233fea0(param_2);
  param_1[0x26] = uVar8;
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)((longlong)param_2 + 0x354);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  uVar8 = uVar14;
  if (param_2[0x23] != 0) {
    uVar8 = *(undefined8 *)(param_2[0x23] + 0x18);
  }
  param_1[0x2b] = uVar8;
  param_1[0x2c] = param_3;
  lVar9 = UObjectBaseUtility::GetOutermost(param_2);
  param_1[0x2d] = *(undefined8 *)(lVar9 + 0x18);
  iVar6 = *(int *)((longlong)param_2 + 0x34c);
  iVar7 = -0x8000;
  if ((-0x8001 < iVar6) && (iVar7 = 0x7fff, iVar6 < 0x7fff)) {
    iVar7 = iVar6;
  }
  *(short *)(param_1 + 0x2e) = (short)iVar7;
  *(int *)((longlong)param_1 + 0x174) = (int)param_2[0x6a];
  fVar16 = *(float *)(param_2 + 0x5c);
  if (fVar16 <= 0.0) {
    fVar16 = 3.4028235e+38;
  }
  *(float *)((longlong)param_1 + 0x17c) = fVar16;
  *(int *)(param_1 + 0x30) = (int)param_2[0x5b];
  *(undefined4 *)(param_1 + 0x32) = 4;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x31] = &PTR_FUN_14509d958;
  *(undefined4 *)(param_1 + 0x37) = 2;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3f800000;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x3f800000;
  param_1[0x6e] = param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2f4);
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x37c) = uVar2;
  *(uint *)(param_1 + 0x70) =
       (*(uint *)(param_2 + 0x73) ^ *(uint *)(param_1 + 0x70)) & 2 ^ *(uint *)(param_1 + 0x70);
  *(int *)((longlong)param_1 + 900) = (int)param_2[0xd7];
  *(undefined4 *)(param_1 + 0x73) = *(undefined4 *)((longlong)param_2 + 0x39c);
  FUN_141edf270();
  uVar15 = *(uint *)(param_1 + 3);
  if (((int)uVar15 < 0) && ((*(byte *)((longlong)param_1 + 0x1c) & 1) == 0)) {
    uVar15 = uVar15 & 0x7fffffff;
    *(uint *)(param_1 + 3) = uVar15;
  }
  if ((param_2[0x23] != 0) &&
     ((uVar15 = (~(uint)*(byte *)(param_2[0x23] + 0x80) * 2 | 0xfffffffd) & uVar15,
      *(uint *)(param_1 + 3) = uVar15, (uVar15 & 0x860) != 0 ||
      (*(int *)((longlong)param_1 + 900) != 0)))) {
    for (lVar9 = param_2[0x23]; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x118)) {
      iVar6 = *(int *)(param_1 + 0x25);
      *(int *)(param_1 + 0x25) = iVar6 + 1;
      if (*(int *)((longlong)param_1 + 300) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
      }
      *(longlong *)(*plVar1 + (longlong)iVar6 * 8) = lVar9;
    }
  }
  lVar9 = param_2[0xd6];
  if (lVar9 != 0) {
    iVar6 = *(int *)(param_1 + 0x25);
    *(int *)(param_1 + 0x25) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 300) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
    }
    *(longlong *)(*plVar1 + (longlong)iVar6 * 8) = lVar9;
  }
  lVar9 = FUN_14233ccd0(param_2);
  if ((lVar9 == 0) || (uVar8 = 0x400000, (*(byte *)(lVar9 + 0x205) & 0x20) == 0)) {
    uVar8 = uVar14;
  }
  uVar15 = *(uint *)(param_1 + 3);
  *(uint *)(param_1 + 3) = uVar15 & 0xffbfffff | (uint)uVar8;
  if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x204) & 0x10) != 0)) {
    uVar13 = 0x800000;
  }
  *(uint *)(param_1 + 3) = uVar15 & 0xff3fffff | (uint)uVar8 | uVar13;
  *(int *)(param_1 + 0x6f) = (int)param_2[0x5d];
  uVar14 = *(undefined8 *)((longlong)param_2 + 0x314);
  param_1[6] = *(undefined8 *)((longlong)param_2 + 0x30c);
  param_1[7] = uVar14;
  uVar14 = *(undefined8 *)((longlong)param_2 + 0x324);
  param_1[8] = *(undefined8 *)((longlong)param_2 + 0x31c);
  param_1[9] = uVar14;
  uVar14 = *(undefined8 *)((longlong)param_2 + 0x334);
  param_1[10] = *(undefined8 *)((longlong)param_2 + 0x32c);
  param_1[0xb] = uVar14;
  lVar9 = param_2[0x68];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x344);
  lVar3 = param_2[0x69];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0x33c);
  *(int *)((longlong)param_1 + 100) = (int)lVar9;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(int *)((longlong)param_1 + 0x6c) = (int)lVar3;
  lVar9 = param_2[0x24];
  if (lVar9 == 0) {
    lVar9 = FUN_1423407b0(param_2);
  }
  param_1[0x71] = *(undefined8 *)(lVar9 + 0x7a0);
  lVar9 = param_2[0x24];
  if (lVar9 == 0) {
    lVar9 = FUN_1423407b0(param_2);
  }
  param_1[0x72] = *(undefined8 *)(lVar9 + 0x7a8);
  return param_1;
}



// FUNCTION 14271e120 FUN_14271e120 body=249 status=ok
// SIG undefined FUN_14271e120(void)

undefined4 * FUN_14271e120(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  param_1[8] = 0xbf800000;
  param_1[9] = 0xbf800000;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0xffffffffffffffff;
  uVar4 = Scalability::GetRenderScaleLevelFromQualityLevel(1);
  *param_1 = uVar4;
  iVar1 = (**(code **)(*DAT_146b091e8 + 0x68))();
  iVar3 = 0;
  if (-1 < iVar1 + -2) {
    iVar3 = iVar1 + -2;
  }
  param_1[1] = iVar3;
  iVar2 = (**(code **)(*DAT_146b09200 + 0x68))();
  iVar1 = 0;
  iVar3 = iVar1;
  if (-1 < iVar2 + -2) {
    iVar3 = iVar2 + -2;
  }
  param_1[2] = iVar3;
  iVar2 = (**(code **)(*DAT_146b09218 + 0x68))();
  iVar3 = iVar1;
  if (-1 < iVar2 + -2) {
    iVar3 = iVar2 + -2;
  }
  param_1[3] = iVar3;
  iVar2 = (**(code **)(*DAT_146b09230 + 0x68))();
  iVar3 = iVar1;
  if (-1 < iVar2 + -2) {
    iVar3 = iVar2 + -2;
  }
  param_1[4] = iVar3;
  iVar3 = (**(code **)(*DAT_146b09248 + 0x68))();
  if (-1 < iVar3 + -2) {
    iVar1 = iVar3 + -2;
  }
  param_1[5] = iVar1;
  iVar1 = (**(code **)(*DAT_146b09260 + 0x68))();
  iVar3 = 0;
  if (-1 < iVar1 + -2) {
    iVar3 = iVar1 + -2;
  }
  param_1[6] = iVar3;
  iVar1 = (**(code **)(*DAT_146b09278 + 0x68))();
  iVar3 = 0;
  if (-1 < iVar1 + -2) {
    iVar3 = iVar1 + -2;
  }
  param_1[7] = iVar3;
  return param_1;
}



// FUNCTION 14271e220 FUN_14271e220 body=74 status=ok
// SIG undefined FUN_14271e220(void)

undefined8 * FUN_14271e220(undefined8 *param_1,undefined1 param_2)

{
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_145188268;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = &PTR_GetBoundProgramCounterForTimerManager_145188230;
  *(undefined1 *)(param_1 + 0xb) = param_2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  return param_1;
}



// FUNCTION 14271e270 FRepChangedHistory body=133 status=ok
// SIG undefined FRepChangedHistory(void)

undefined8 * FRepChangedHistory::FRepChangedHistory(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



// FUNCTION 14271e300 FSkeletalMeshVertexClothBuffer body=62 status=ok
// SIG undefined FSkeletalMeshVertexClothBuffer(void)

undefined8 * FSkeletalMeshVertexClothBuffer::FSkeletalMeshVertexClothBuffer(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145188cc0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 14271e340 FSkinWeightVertexBuffer body=58 status=ok
// SIG undefined FSkinWeightVertexBuffer(void)

undefined8 * FSkinWeightVertexBuffer::FSkinWeightVertexBuffer(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145188d70;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 14271e380 FUN_14271e380 body=60 status=ok
// SIG undefined FUN_14271e380(void)

undefined8 * FUN_14271e380(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = param_2;
  return param_1;
}



// FUNCTION 14271e3c0 FStaticMeshVertexBuffer body=179 status=ok
// SIG undefined FStaticMeshVertexBuffer(void)

undefined8 * FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(undefined8 *param_1)

{
  bool bVar1;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_145188398;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 7) = 4;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[6] = &PTR_FUN_145188318;
  *(undefined4 *)(param_1 + 0xe) = 4;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0xd] = &PTR_FUN_145188358;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  bVar1 = DAT_1464c9c7c == '\0';
  *(undefined1 *)((longlong)param_1 + 0xe1) = 0;
  *(bool *)(param_1 + 0x1c) = bVar1;
  return param_1;
}



// FUNCTION 14271e480 FUN_14271e480 body=39 status=ok
// SIG undefined FUN_14271e480(void)

undefined8 * FUN_14271e480(undefined8 *param_1)

{
  UDeveloperSettings::UDeveloperSettings();
  *param_1 = &PTR_FUN_1451884a0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 14271e4b0 URendererOverrideSettings body=65 status=ok
// SIG undefined URendererOverrideSettings(void)

undefined8 * URendererOverrideSettings::URendererOverrideSettings(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  UDeveloperSettings::UDeveloperSettings();
  *param_1 = &PTR_FUN_1451889d0;
  FName::FName(local_res8,L"Rendering Overrides",1);
  param_1[6] = local_res8[0];
  return param_1;
}



// FUNCTION 14271e500 FUN_14271e500 body=151 status=ok
// SIG undefined FUN_14271e500(void)

undefined8 * FUN_14271e500(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  UDeveloperSettings::UDeveloperSettings();
  *param_1 = &PTR__scalar_deleting_destructor__145188738;
  FName::FName(local_res8,L"Rendering",1);
  param_1[6] = local_res8[0];
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xbf80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x400;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x400;
  *(uint *)(param_1 + 0x1b) = *(uint *)(param_1 + 0x1b) & 0xfffffff7;
  *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) & 0xffffffef | 0xd;
  *(undefined4 *)(param_1 + 0xc) = 0x43960000;
  return param_1;
}



// FUNCTION 14271e5a0 UReverbEffect body=111 status=ok
// SIG undefined UReverbEffect(void)

undefined8 * UReverbEffect::UReverbEffect(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *param_1 = &PTR_FUN_1445cacb0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 6) = 0x3ea3d70a;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f63d70a;
  *(undefined4 *)(param_1 + 7) = 0x3fbeb852;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f547ae1;
  *(undefined4 *)(param_1 + 8) = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3be56042;
  *(undefined4 *)(param_1 + 9) = 0x3fa147ae;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3c343958;
  param_1[10] = 0x3f7e76c9;
  return param_1;
}



// FUNCTION 14271e610 USubsurfaceProfile body=122 status=ok
// SIG undefined USubsurfaceProfile(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * USubsurfaceProfile::USubsurfaceProfile(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145188ff8;
  *(undefined4 *)(param_1 + 5) = 0x3f99999a;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3ed1eb853ef5c28f;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f8000003e8f5c29;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3ebd70a43f800000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f8000003e99999a;
  uVar2 = _DAT_1464aa6c8;
  uVar1 = _DAT_1464aa6c0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f6e147b;
  *(undefined8 *)((longlong)param_1 + 0x4c) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0xd) = 0x3fc66666;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0xe) = 0x3fa66666;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f59999a;
  return param_1;
}



// FUNCTION 14271e690 ~TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=395 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_14271e751;
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
LAB_14271e751:
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
      FGuidReferences::~FGuidReferences((longlong)iStack_1c * 0xd8 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<216,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 14271e820 ~FAsyncSoundWavePCMWriteWorker body=159 status=ok
// SIG undefined ~FAsyncSoundWavePCMWriteWorker(void)

void Audio::FAsyncSoundWavePCMWriteWorker::~FAsyncSoundWavePCMWriteWorker(longlong *param_1)

{
  BOOL BVar1;
  longlong *plVar2;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  }
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  }
  *(undefined1 *)(*param_1 + 0x28) = 5;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if ((int)param_1[0x10] != 0) {
    plVar2 = (longlong *)param_1[0xe];
    if ((longlong *)param_1[0xe] == (longlong *)0x0) {
      plVar2 = param_1 + 10;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
                    /* WARNING: Could not recover jumptable at 0x00014271e8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 14271e8c0 ~FColorVertexBuffer body=87 status=ok
// SIG undefined ~FColorVertexBuffer(void)

void FColorVertexBuffer::~FColorVertexBuffer(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__1451882a8;
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[7] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 14271e920 ~FGuidReferences body=166 status=ok
// SIG undefined ~FGuidReferences(void)

void FGuidReferences::~FGuidReferences(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x48) = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar1);
    FMemory::operator_delete(lVar1,0x50);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 14271e9d0 ~FMultiSizeIndexContainer body=21 status=ok
// SIG undefined ~FMultiSizeIndexContainer(void)

void FMultiSizeIndexContainer::~FMultiSizeIndexContainer(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014271e9e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14271e9f0 FUN_14271e9f0 body=108 status=ok
// SIG undefined FUN_14271e9f0(void)

void FUN_14271e9f0(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 0x31;
  *param_1 = &PTR_FUN_1451880b8;
  (**(code **)(*plVar1 + 0x30))(plVar1);
  *plVar1 = (longlong)&PTR_FUN_14509d958;
  if (param_1[0x39] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  FUN_141edd2d0(plVar1);
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14271ea60 FUN_14271ea60 body=225 status=ok
// SIG undefined FUN_14271ea60(void)

void FUN_14271ea60(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if ((*param_1 != 0) && (0 < (int)param_1[0x105])) {
    FUN_142729b50(*param_1,param_1 + 0x104);
  }
  puVar4 = (undefined8 *)param_1[0x108];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  if (param_1[0x106] != 0) {
    FMemory::Free();
  }
  if (param_1[0x104] != 0) {
    FMemory::Free();
  }
  lVar5 = 0x40;
  plVar6 = param_1 + 0x103;
  do {
    plVar1 = plVar6 + -4;
    plVar6 = plVar6 + -4;
    lVar5 = lVar5 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar5 != 0);
  plVar6 = (longlong *)param_1[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 14271eb50 FUN_14271eb50 body=386 status=ok
// SIG undefined FUN_14271eb50(void)

void FUN_14271eb50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  if ((param_1[0xc] != 0) && (0 < (int)param_1[1])) {
    FUN_142729b50(param_1[0xc],param_1);
  }
  if (param_1[0xa0] != 0) {
    FMemory::Free();
  }
  if (param_1[0x9c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x97] != 0) {
    FMemory::Free();
  }
  iVar5 = (int)param_1[0x95];
  lVar4 = param_1[0x94];
  if (iVar5 != 0) {
    plVar3 = (longlong *)(lVar4 + 8);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar4 = param_1[0x94];
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  lVar4 = 0x20;
  plVar3 = param_1 + 0x93;
  do {
    plVar1 = plVar3 + -4;
    plVar3 = plVar3 + -4;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  plVar3 = (longlong *)param_1[0x11];
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
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)param_1[0xd];
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
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2);
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14271ece0 ~FSkeletalMeshVertexClothBuffer body=101 status=ok
// SIG undefined ~FSkeletalMeshVertexClothBuffer(void)

void FSkeletalMeshVertexClothBuffer::~FSkeletalMeshVertexClothBuffer(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145188cc0;
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[10] = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 14271ed50 ~FSkinWeightVertexBuffer body=87 status=ok
// SIG undefined ~FSkinWeightVertexBuffer(void)

void FSkinWeightVertexBuffer::~FSkinWeightVertexBuffer(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145188d70;
  puVar1 = (undefined8 *)param_1[9];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[9] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 14271edb0 ~FSoundWavePCMWriter body=75 status=ok
// SIG undefined ~FSoundWavePCMWriter(void)

void Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_142738e80();
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)param_1[9];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FMemory::operator_delete(*param_1);
  return;
}



// FUNCTION 14271ee00 ~FStaticMeshVertexBuffer body=187 status=ok
// SIG undefined ~FStaticMeshVertexBuffer(void)

void FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_145188398;
  puVar1 = (undefined8 *)param_1[0x14];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x14] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x16];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x16] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x17);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x15);
  param_1[0xd] = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x13);
  FUN_141edd2d0(param_1 + 0xd);
  param_1[6] = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc);
  FUN_141edd2d0(param_1 + 6);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 14271eec0 FUN_14271eec0 body=200 status=ok
// SIG undefined FUN_14271eec0(void)

longlong * FUN_14271eec0(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  lVar3 = 8;
  lVar2 = 8;
  puVar4 = param_2;
  do {
    puVar1 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4,1);
    }
    else {
      *puVar4 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar4 = puVar4 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_2 = param_2 + 8;
  do {
    puVar4 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2,1);
    }
    else {
      *param_2 = *puVar4;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    param_2 = param_2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 14271ef90 FUN_14271ef90 body=200 status=ok
// SIG undefined FUN_14271ef90(void)

longlong * FUN_14271ef90(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  lVar3 = 4;
  lVar2 = 4;
  puVar4 = param_2;
  do {
    puVar1 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar4,1);
    }
    else {
      *puVar4 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar4 = puVar4 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_2 = param_2 + 4;
  do {
    puVar4 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2,1);
    }
    else {
      *param_2 = *puVar4;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    param_2 = param_2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 14271f060 FUN_14271f060 body=552 status=ok
// SIG undefined FUN_14271f060(void)

undefined8 FUN_14271f060(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = FUN_140da9f70();
  uVar3 = FUN_140da9f70(uVar3,param_2 + 0x10);
  plVar4 = (longlong *)FUN_140da9f70(uVar3,param_2 + 0x20);
  puVar1 = *(undefined2 **)plVar4[1];
  if ((undefined2 *)((undefined8 *)plVar4[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar4 + 0x50))(plVar4,param_2 + 0x30,2);
    if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar4,param_2 + 0x30,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x30) = *puVar1;
    *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 2;
  }
  puVar1 = *(undefined2 **)plVar4[1];
  if ((undefined2 *)((undefined8 *)plVar4[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar4 + 0x50))(plVar4,param_2 + 0x32,2);
    if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar4,param_2 + 0x32,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x32) = *puVar1;
    *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 2;
  }
  puVar1 = *(undefined2 **)plVar4[1];
  if ((undefined2 *)((undefined8 *)plVar4[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar4 + 0x50))(plVar4,param_2 + 0x34,2);
    if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar4,param_2 + 0x34,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x34) = *puVar1;
    *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 2;
  }
  puVar1 = *(undefined2 **)plVar4[1];
  if ((undefined2 *)((undefined8 *)plVar4[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar4 + 0x50))(plVar4,param_2 + 0x36,2);
    if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar4,param_2 + 0x36,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x36) = *puVar1;
    *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 2;
  }
  puVar2 = *(undefined4 **)plVar4[1];
  if ((undefined4 *)((undefined8 *)plVar4[1])[1] < puVar2 + 1) {
    (**(code **)(*plVar4 + 0x50))(plVar4,param_2 + 0x38,4);
    if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar4,param_2 + 0x38,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x38) = *puVar2;
    *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 4;
  }
  puVar2 = *(undefined4 **)plVar4[1];
  if ((undefined4 *)((undefined8 *)plVar4[1])[1] < puVar2 + 1) {
    (**(code **)(*plVar4 + 0x50))(plVar4,param_2 + 0x3c,4);
    if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar4,param_2 + 0x3c,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x3c) = *puVar2;
    *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 4;
  }
  return param_1;
}



// FUNCTION 14271f290 FUN_14271f290 body=375 status=ok
// SIG undefined FUN_14271f290(void)

longlong * FUN_14271f290(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  iVar4 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x100000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_14271eec0(param_1,(longlong)iVar4 * 0x10 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        FUN_14271eec0(param_1,(longlong)iVar2 * 0x10 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14271f410 FUN_14271f410 body=373 status=ok
// SIG undefined FUN_14271f410(void)

longlong * FUN_14271f410(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  iVar4 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x200000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_14271ef90(param_1,*param_2 + (longlong)iVar4 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        FUN_14271ef90(param_1,*param_2 + (longlong)iVar2 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14271f590 FUN_14271f590 body=409 status=ok
// SIG undefined FUN_14271f590(void)

longlong * FUN_14271f590(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  puVar7 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar5 = (longlong *)param_1[1];
  if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  bVar3 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar3) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x200001)))) {
    if ((bVar3 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar2 = *param_2 + (longlong)(int)puVar7 * 8;
          FUN_140871cc0(param_1,lVar2);
          FUN_140871cc0(param_1,lVar2 + 4);
          uVar8 = (int)puVar7 + 1;
          puVar7 = (undefined8 *)(ulonglong)uVar8;
        } while ((int)uVar8 < (int)param_2[1]);
      }
      return param_1;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    puVar9 = puVar7;
    if (0 < local_res8[0]) {
      do {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        puVar1 = (undefined8 *)(*param_2 + (longlong)iVar4 * 8);
        puVar6 = puVar7;
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar6 = puVar1;
        }
        FUN_140871cc0(param_1,puVar6);
        FUN_140871cc0(param_1,(longlong)puVar6 + 4);
        uVar8 = (int)puVar9 + 1;
        puVar9 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar3 | 0x80;
  return param_1;
}



// FUNCTION 14271f730 FUN_14271f730 body=412 status=ok
// SIG undefined FUN_14271f730(void)

longlong * FUN_14271f730(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar9;
  int local_res8 [2];
  undefined8 *puVar8;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar9 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar6 = (longlong)(int)puVar9 * 0x10 + *param_2;
          FUN_141edd6e0(param_1,lVar6);
          FUN_141edd6e0(param_1,lVar6 + 8);
          uVar7 = (int)puVar9 + 1;
          puVar9 = (undefined8 *)(ulonglong)uVar7;
        } while ((int)uVar7 < (int)param_2[1]);
      }
      return param_1;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    puVar8 = puVar9;
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
        puVar5 = puVar9;
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar5 = puVar4;
        }
        FUN_141edd6e0(param_1,puVar5);
        FUN_141edd6e0(param_1,puVar5 + 1);
        uVar7 = (int)puVar8 + 1;
        puVar8 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 14271f8d0 FUN_14271f8d0 body=412 status=ok
// SIG undefined FUN_14271f8d0(void)

longlong * FUN_14271f8d0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar10;
  int local_res8 [2];
  undefined4 *puVar9;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  puVar10 = (undefined4 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar5 = (longlong *)param_1[1];
  if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  bVar3 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar3) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x400001)))) {
    if ((bVar3 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar2 = *param_2 + (longlong)(int)puVar10 * 4;
          uVar6 = FUN_140d25400(param_1,lVar2);
          FUN_140d25400(uVar6,lVar2 + 2);
          uVar8 = (int)puVar10 + 1;
          puVar10 = (undefined4 *)(ulonglong)uVar8;
        } while ((int)uVar8 < (int)param_2[1]);
      }
      return param_1;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    puVar9 = puVar10;
    if (0 < local_res8[0]) {
      do {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        puVar1 = (undefined4 *)(*param_2 + (longlong)iVar4 * 4);
        puVar7 = puVar10;
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar7 = puVar1;
        }
        uVar6 = FUN_140d25400(param_1,puVar7);
        FUN_140d25400(uVar6,(longlong)puVar7 + 2);
        uVar8 = (int)puVar9 + 1;
        puVar9 = (undefined4 *)(ulonglong)uVar8;
      } while ((int)uVar8 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar3 | 0x80;
  return param_1;
}



// FUNCTION 14271fa70 FUN_14271fa70 body=421 status=ok
// SIG undefined FUN_14271fa70(void)

longlong * FUN_14271fa70(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x40000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_14271f060(param_1,(longlong)(int)puVar6 * 0x40 + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x40 + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined8 *)((longlong)puVar4 + 0xc) = 0x3f800000;
      *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x1c) = 0x3f800000;
      *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = 0x3f800000;
      puVar5 = puVar4;
    }
    FUN_14271f060(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 14271fc20 FUN_14271fc20 body=529 status=ok
// SIG undefined FUN_14271fc20(void)

longlong * FUN_14271fc20(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  uVar6 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  bVar2 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar2) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x200001)))) {
    if ((bVar2 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      uVar7 = uVar6;
      if (0 < local_res8[0]) {
        do {
          puVar8 = (undefined8 *)(*param_2 + uVar7);
          puVar1 = *(undefined8 **)param_1[1];
          if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
            (**(code **)(*param_1 + 0x50))(param_1,puVar8,8);
            if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_1,puVar8,8);
            }
          }
          else {
            *puVar8 = *puVar1;
            *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          uVar7 = uVar7 + 8;
        } while ((int)uVar5 < (int)param_2[1]);
        return param_1;
      }
    }
    else {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
      }
      if (0 < local_res8[0]) {
        do {
          iVar3 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
          }
          puVar8 = *(undefined8 **)param_1[1];
          puVar1 = (undefined8 *)(*param_2 + (longlong)iVar3 * 8);
          if ((undefined8 *)((longlong *)param_1[1])[1] < puVar8 + 1) {
            (**(code **)(*param_1 + 0x50))(param_1,puVar1,8);
            if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_1,puVar1,8);
            }
          }
          else {
            *puVar1 = *puVar8;
            *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while ((int)uVar5 < local_res8[0]);
        return param_1;
      }
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar2 | 0x80;
  return param_1;
}



// FUNCTION 14271fe40 operator<< body=157 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte local_res8 [8];
  
  FUN_14242a0d0(local_res8,param_1,0,0x10d);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    FUN_142721520(param_2);
  }
  if (((local_res8[0] & 2) == 0) || ((*(byte *)(param_1 + 0x2a) & 0x20) != 0)) {
    plVar1 = *(longlong **)(param_2 + 0x50);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
      iVar2 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x20))();
      *(int *)(param_2 + 100) = iVar2;
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x18))();
      }
      *(undefined8 *)(param_2 + 0x58) = uVar4;
      uVar3 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x10))();
      *(undefined4 *)(param_2 + 0x60) = uVar3;
    }
    FUN_14271fc20(param_1,param_2 + 0x40);
  }
  return param_1;
}



// FUNCTION 14271fee0 FUN_14271fee0 body=423 status=ok
// SIG undefined FUN_14271fee0(void)

longlong * FUN_14271fee0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte local_res8 [8];
  
  FUN_14242a0d0(local_res8,param_1,0,0xd6);
  (**(code **)(*param_1 + 8))(param_1,param_2 + 0x41);
  puVar3 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x5c,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x5c,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x5c) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  plVar9 = (longlong *)0x0;
  if (((*(byte *)(param_1 + 5) & 1) != 0) ||
     (plVar8 = *(longlong **)(param_2 + 0x48), plVar8 == (longlong *)0x0)) {
    puVar4 = *(undefined8 **)(param_2 + 0x48);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
      *(undefined8 *)(param_2 + 0x48) = 0;
    }
    cVar1 = *(char *)(param_2 + 0x41);
    plVar7 = (longlong *)operator_new(0x28);
    plVar8 = plVar9;
    if (cVar1 == '\0') {
      if (plVar7 != (longlong *)0x0) {
        uVar2 = *(undefined1 *)(param_2 + 0x40);
        plVar7[2] = 0;
        plVar7[3] = 0;
        *(undefined1 *)(plVar7 + 4) = uVar2;
        plVar7[1] = (longlong)&PTR_GetBoundProgramCounterForTimerManager_144eec268;
        *plVar7 = (longlong)&PTR_FUN_145188e40;
        plVar8 = plVar7;
      }
    }
    else if (plVar7 != (longlong *)0x0) {
      uVar2 = *(undefined1 *)(param_2 + 0x40);
      plVar7[2] = 0;
      plVar7[3] = 0;
      *(undefined1 *)(plVar7 + 4) = uVar2;
      plVar7[1] = (longlong)&PTR_GetBoundProgramCounterForTimerManager_144e08448;
      *plVar7 = (longlong)&PTR_FUN_145188de8;
      plVar8 = plVar7;
    }
    *(longlong **)(param_2 + 0x48) = plVar8;
  }
  if (((((local_res8[0] & 2) == 0) || ((*(byte *)((longlong)param_1 + 0x2a) & 0x20) != 0)) &&
      (plVar8 != (longlong *)0x0)) &&
     ((**(code **)(*plVar8 + 0x40))(plVar8,param_1),
     (*(byte *)((longlong)param_1 + 0x2a) & 0x20) == 0)) {
    if (*(int *)(param_2 + 0x5c) != 0) {
      plVar8 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x48) + 0x38))();
      iVar5 = (**(code **)(*plVar8 + 8))(plVar8);
      if (iVar5 != 0) {
        plVar9 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x48) + 0x30))();
      }
    }
    *(longlong **)(param_2 + 0x50) = plVar9;
    uVar6 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x20))();
    *(undefined4 *)(param_2 + 0x58) = uVar6;
  }
  return param_1;
}



// FUNCTION 142720090 FUN_142720090 body=179 status=ok
// SIG undefined FUN_142720090(void)

void FUN_142720090(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28 [2];
  undefined2 *local_20;
  int local_18;
  
  FString::Join<TArray<FString,FDefaultAllocator>_>(&local_20,param_2,&DAT_144740598);
  local_res18[0] = 0;
  puVar1 = &DAT_143f3eda8;
  if (local_18 != 0) {
    puVar1 = local_20;
  }
  local_res20[0] = 0;
  FParse::Value(puVar1,L"size=",local_res18);
  puVar1 = &DAT_143f3eda8;
  if (local_18 != 0) {
    puVar1 = local_20;
  }
  FParse::Value(puVar1,L"report=",local_res20);
  local_28[0] = 0;
  puVar1 = &DAT_143f3eda8;
  if (local_18 != 0) {
    puVar1 = local_20;
  }
  FParse::Value(puVar1,L"checkpoint=",local_28);
  FUN_14272bd50();
  if (local_20 != (undefined2 *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}



// FUNCTION 142720150 FUN_142720150 body=133 status=ok
// SIG undefined FUN_142720150(void)

void FUN_142720150(void)

{
  longlong *plVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *local_18;
  int local_10;
  
  iVar2 = (**(code **)(*DAT_146b092f8 + 0x68))();
  plVar1 = DAT_146b092f8;
  if (iVar2 - 1U < 0xffff) {
    DAT_146534b6c = iVar2;
    return;
  }
  FString::PrintfImpl(&local_18,&DAT_143f3edc0,DAT_146534b6c);
  puVar3 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar3 = local_18;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar3,0x9000000);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1427201e0 FUN_1427201e0 body=133 status=ok
// SIG undefined FUN_1427201e0(void)

void FUN_1427201e0(void)

{
  longlong *plVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *local_18;
  int local_10;
  
  iVar2 = (**(code **)(*DAT_146b092c8 + 0x68))();
  plVar1 = DAT_146b092c8;
  if (iVar2 - 1U < 0xffff) {
    DAT_146534b68 = iVar2;
    return;
  }
  FString::PrintfImpl(&local_18,&DAT_143f3edc0,DAT_146534b68);
  puVar3 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar3 = local_18;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar3,0x9000000);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142720270 FUN_142720270 body=447 status=ok
// SIG undefined FUN_142720270(void)

void FUN_142720270(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FString::Join<TArray<FString,FDefaultAllocator>_>(&local_28,param_2,&DAT_144740598);
  iVar3 = iStack_20;
  puVar2 = (undefined2 *)CONCAT44(uStack_24,local_28);
  puVar7 = &DAT_143f3eda8;
  if (iStack_20 != 0) {
    puVar7 = puVar2;
  }
  cVar4 = FParse::Param(puVar7,L"allocs");
  uVar8 = 0;
  if (cVar4 != '\0') {
    uVar8 = 2;
  }
  puVar7 = &DAT_143f3eda8;
  if (iVar3 != 0) {
    puVar7 = puVar2;
  }
  cVar4 = FParse::Param(puVar7,L"leaks");
  if (cVar4 != '\0') {
    uVar8 = uVar8 | 1;
  }
  puVar7 = &DAT_143f3eda8;
  if (iVar3 != 0) {
    puVar7 = puVar2;
  }
  cVar4 = FParse::Param(puVar7,L"memreport");
  if (cVar4 != '\0') {
    uVar8 = uVar8 | 4;
  }
  if ((uVar8 & 1) != 0) {
    lVar5 = FUN_14272bd50();
    puVar7 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar7 = puVar2;
    }
    local_28 = *(undefined4 *)(lVar5 + 0x30);
    uStack_24 = *(undefined4 *)(lVar5 + 0x34);
    iStack_20 = *(int *)(lVar5 + 0x38);
    uStack_1c = *(undefined4 *)(lVar5 + 0x3c);
    local_18 = *(ulonglong *)(lVar5 + 0x40);
    FParse::Bool(puVar7,L"OnlyNonDeleters=",&iStack_20);
    puVar7 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar7 = puVar2;
    }
    FParse::Value(puVar7,L"RateFilter=",&uStack_24);
    puVar7 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar7 = puVar2;
    }
    FParse::Value(puVar7,L"SizeFilter=",&local_28);
    puVar7 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar7 = puVar2;
    }
    cVar4 = FParse::Param(puVar7,L"SortRate");
    if (cVar4 == '\0') {
      puVar7 = &DAT_143f3eda8;
      if (iVar3 != 0) {
        puVar7 = puVar2;
      }
      cVar4 = FParse::Param(puVar7,L"SortSize");
      if (cVar4 == '\0') {
        puVar7 = &DAT_143f3eda8;
        if (iVar3 != 0) {
          puVar7 = puVar2;
        }
        cVar4 = FParse::Param(puVar7,L"SortHash");
        uVar6 = local_18._4_4_;
        if (cVar4 != '\0') {
          uVar6 = 2;
        }
        local_18 = CONCAT44(uVar6,(undefined4)local_18);
      }
      else {
        local_18 = local_18 & 0xffffffff;
      }
    }
    else {
      local_18 = CONCAT44(1,(undefined4)local_18);
    }
    lVar5 = FUN_14272bd50();
    *(undefined4 *)(lVar5 + 0x30) = local_28;
    *(undefined4 *)(lVar5 + 0x34) = uStack_24;
    *(int *)(lVar5 + 0x38) = iStack_20;
    *(undefined4 *)(lVar5 + 0x3c) = uStack_1c;
    *(ulonglong *)(lVar5 + 0x40) = local_18;
  }
  uVar1 = FUN_14272bd50();
  FUN_14273ed10(uVar1,uVar8);
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free(puVar2);
  }
  return;
}



// FUNCTION 142720430 `scalar_deleting_destructor' body=99 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_DoThreadedWork_1451892d8;
  FUN_1415b5910(param_1[0x15]);
  param_1[0x15] = 0;
  Audio::FAsyncSoundWavePCMWriteWorker::~FAsyncSoundWavePCMWriteWorker(param_1 + 2);
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1427204a0 FUN_1427204a0 body=97 status=ok
// SIG undefined FUN_1427204a0(void)

undefined8 * FUN_1427204a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145189310;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142720510 FUN_142720510 body=97 status=ok
// SIG undefined FUN_142720510(void)

undefined8 * FUN_142720510(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451892f0;
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



// FUNCTION 142720580 FUN_142720580 body=97 status=ok
// SIG undefined FUN_142720580(void)

undefined8 * FUN_142720580(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145189320;
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



// FUNCTION 1427205f0 FUN_1427205f0 body=97 status=ok
// SIG undefined FUN_1427205f0(void)

undefined8 * FUN_1427205f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145189300;
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



// FUNCTION 142720660 FUN_142720660 body=97 status=ok
// SIG undefined FUN_142720660(void)

undefined8 * FUN_142720660(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145189340;
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



// FUNCTION 1427206d0 FUN_1427206d0 body=97 status=ok
// SIG undefined FUN_1427206d0(void)

undefined8 * FUN_1427206d0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145189330;
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



// FUNCTION 142720740 FUN_142720740 body=97 status=ok
// SIG undefined FUN_142720740(void)

undefined8 * FUN_142720740(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145189350;
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



// FUNCTION 1427207b0 FUN_1427207b0 body=97 status=ok
// SIG undefined FUN_1427207b0(void)

undefined8 * FUN_1427207b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451892b8;
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



// FUNCTION 142720820 FUN_142720820 body=97 status=ok
// SIG undefined FUN_142720820(void)

undefined8 * FUN_142720820(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145188490;
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



// FUNCTION 142720890 FUN_142720890 body=97 status=ok
// SIG undefined FUN_142720890(void)

undefined8 * FUN_142720890(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451892c8;
  if (param_1[0xe] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xe] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142720900 `scalar_deleting_destructor' body=121 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FColorVertexBuffer::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__1451882a8;
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[7] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142720980 FUN_142720980 body=142 status=ok
// SIG undefined FUN_142720980(void)

undefined8 * FUN_142720980(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 0x31;
  *param_1 = &PTR_FUN_1451880b8;
  (**(code **)(*plVar1 + 0x30))(plVar1);
  *plVar1 = (longlong)&PTR_FUN_14509d958;
  if (param_1[0x39] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  FUN_141edd2d0(plVar1);
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3a0);
  }
  return param_1;
}



// FUNCTION 142720a10 FUN_142720a10 body=98 status=ok
// SIG undefined FUN_142720a10(void)

undefined8 * FUN_142720a10(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142720a80 `scalar_deleting_destructor' body=135 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSkeletalMeshVertexClothBuffer::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145188cc0;
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[10] = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142720b10 `scalar_deleting_destructor' body=121 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSkinWeightVertexBuffer::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145188d70;
  puVar1 = (undefined8 *)param_1[9];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[9] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142720b90 FUN_142720b90 body=222 status=ok
// SIG undefined FUN_142720b90(void)

undefined8 * FUN_142720b90(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_145188398;
  puVar1 = (undefined8 *)param_1[0x14];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x14] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x16];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x16] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x17);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x15);
  param_1[0xd] = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x13);
  FUN_141edd2d0(param_1 + 0xd);
  param_1[6] = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc);
  FUN_141edd2d0(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 142720c70 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSubsurfaceProfileTexture::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145189278;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142720cc0 Abandon body=91 status=ok
// SIG undefined Abandon(void)

void FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker>::Abandon(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x28) = 5;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  LOCK();
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))();
  }
  return;
}



// FUNCTION 142720d20 FUN_142720d20 body=146 status=ok
// SIG undefined FUN_142720d20(void)

ulonglong FUN_142720d20(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar1 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x10));
  }
  lVar2 = 0;
  plVar3 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x10));
  *plVar3 = param_2;
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x18);
  }
  plVar3[1] = lVar2;
  *(undefined4 *)(plVar3 + 2) = param_3;
  *(undefined8 *)((longlong)plVar3 + 0x14) = 0;
  *(undefined4 *)((longlong)plVar3 + 0x1c) = 0xffffffff;
  plVar3[4] = 0;
  *(undefined4 *)(plVar3 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)plVar3 + 0x2c) = 0;
  return (longlong)iVar1 & 0xffff;
}



// FUNCTION 142720dc0 AddProfile body=389 status=ok
// SIG undefined AddProfile(void)

int FSubsurfaceProfileTexture::AddProfile(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  longlong *plVar28;
  longlong lVar29;
  int iVar30;
  longlong lVar31;
  
  iVar30 = 1;
  if (1 < *(int *)(param_1 + 0x38)) {
    lVar31 = 1;
    plVar28 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xa8);
    do {
      if (*plVar28 == 0) {
        *(undefined8 *)((longlong)iVar30 * 0x58 + 0x50 + *(longlong *)(param_1 + 0x30)) = param_3;
        if (iVar30 != -1) goto LAB_142720edc;
        break;
      }
      iVar30 = iVar30 + 1;
      lVar31 = lVar31 + 1;
      plVar28 = plVar28 + 0xb;
    } while (lVar31 < *(int *)(param_1 + 0x38));
  }
  uVar4 = *(undefined4 *)param_2;
  uVar5 = *(undefined4 *)((longlong)param_2 + 4);
  uVar6 = *(undefined4 *)(param_2 + 1);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
  iVar30 = *(int *)(param_1 + 0x38);
  uVar8 = *(undefined4 *)(param_2 + 2);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar10 = *(undefined4 *)(param_2 + 3);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x38);
  uVar12 = *(undefined4 *)(param_2 + 4);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar14 = *(undefined4 *)(param_2 + 5);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar16 = *(undefined4 *)(param_2 + 6);
  uVar17 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar18 = *(undefined4 *)(param_2 + 7);
  uVar19 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar20 = *(undefined4 *)(param_2 + 8);
  uVar21 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar22 = *(undefined4 *)(param_2 + 9);
  uVar23 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(int *)(param_1 + 0x38) = iVar3 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar3 + 1) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x30),iVar3);
  }
  lVar31 = *(longlong *)(param_1 + 0x30);
  lVar29 = (longlong)iVar3 * 0x58;
  puVar1 = (undefined4 *)(lVar29 + lVar31);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar1 = (undefined4 *)(lVar29 + 0x10 + lVar31);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  puVar1 = (undefined4 *)(lVar29 + 0x20 + lVar31);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1[2] = uVar14;
  puVar1[3] = uVar15;
  puVar1 = (undefined4 *)(lVar29 + 0x30 + lVar31);
  *puVar1 = uVar16;
  puVar1[1] = uVar17;
  puVar1[2] = uVar18;
  puVar1[3] = uVar19;
  puVar1 = (undefined4 *)(lVar29 + 0x40 + lVar31);
  *puVar1 = uVar20;
  puVar1[1] = uVar21;
  puVar1[2] = uVar22;
  puVar1[3] = uVar23;
  *(undefined8 *)(lVar29 + 0x50 + lVar31) = param_3;
  if (iVar30 != -1) {
LAB_142720edc:
    uVar24 = param_2[1];
    uVar25 = param_2[2];
    uVar26 = param_2[3];
    lVar29 = (longlong)iVar30 * 0x58;
    lVar31 = *(longlong *)(param_1 + 0x30);
    *(undefined8 *)(lVar29 + lVar31) = *param_2;
    ((undefined8 *)(lVar29 + lVar31))[1] = uVar24;
    uVar24 = param_2[4];
    uVar27 = param_2[5];
    puVar2 = (undefined8 *)(lVar29 + 0x10 + lVar31);
    *puVar2 = uVar25;
    puVar2[1] = uVar26;
    uVar4 = *(undefined4 *)(param_2 + 6);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar6 = *(undefined4 *)(param_2 + 7);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x3c);
    puVar2 = (undefined8 *)(lVar29 + 0x20 + lVar31);
    *puVar2 = uVar24;
    puVar2[1] = uVar27;
    uVar8 = *(undefined4 *)(param_2 + 8);
    uVar9 = *(undefined4 *)((longlong)param_2 + 0x44);
    uVar10 = *(undefined4 *)(param_2 + 9);
    uVar11 = *(undefined4 *)((longlong)param_2 + 0x4c);
    puVar1 = (undefined4 *)(lVar29 + 0x30 + lVar31);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    puVar1 = (undefined4 *)(lVar29 + 0x40 + lVar31);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
    plVar28 = DAT_146b09040;
    DAT_146b09040 = (longlong *)0x0;
    if (plVar28 != (longlong *)0x0) {
      (**(code **)(*plVar28 + 0x30))();
    }
  }
  return iVar30;
}



// FUNCTION 142720f50 FUN_142720f50 body=1197 status=ok
// SIG undefined FUN_142720f50(void)

undefined4
FUN_142720f50(longlong param_1,longlong param_2,undefined4 param_3,undefined2 param_4,
             undefined2 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  iVar1 = *(int *)(param_1 + 0x28);
  plVar9 = (longlong *)(param_1 + 0x20);
  iVar5 = iVar1 + 1;
  *(int *)(param_1 + 0x28) = iVar5;
  if (*(int *)(param_1 + 0x2c) < iVar5) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar9);
  }
  lVar7 = *plVar9;
  lVar8 = (longlong)iVar1 * 0x20;
  *(undefined8 *)(lVar8 + lVar7) = 0;
  *(undefined8 *)(lVar8 + 8 + lVar7) = 0;
  *(undefined8 *)(lVar8 + 0x10 + lVar7) = 0;
  *(undefined8 *)(lVar8 + 0x18 + lVar7) = 0;
  plVar9 = (longlong *)(*plVar9 + lVar8);
  *plVar9 = param_2;
  *(undefined1 *)((longlong)plVar9 + 0x1c) = 2;
  *(undefined4 *)((longlong)plVar9 + 0xc) = param_3;
  *(undefined2 *)((longlong)plVar9 + 10) = *(undefined2 *)(param_2 + 0x34);
  *(undefined2 *)((longlong)plVar9 + 0x16) = param_5;
  *(undefined2 *)((longlong)plVar9 + 0x14) = param_4;
  uVar6 = FUN_14272cb80(param_2,param_8,param_7,param_6);
  *(undefined4 *)(plVar9 + 3) = uVar6;
  lVar7 = UEnumProperty::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
      != lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    param_2 = *(longlong *)(param_2 + 0x70);
  }
  lVar7 = UStructProperty::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
      != lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar7 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      param_2 = 0;
    }
    lVar7 = *(longlong *)(param_2 + 0x70);
    *(byte *)((longlong)plVar9 + 0x1d) = *(byte *)((longlong)plVar9 + 0x1d) | 2;
    lVar7 = *(longlong *)(lVar7 + 0x18);
    if (lVar7 == 0x3b) {
      *(undefined1 *)((longlong)plVar9 + 0x1c) = 10;
    }
    else if (lVar7 == 0x3c) {
      *(undefined1 *)((longlong)plVar9 + 0x1c) = 0xb;
    }
    else if (lVar7 == 0x3f) {
      *(undefined1 *)((longlong)plVar9 + 0x1c) = 0xc;
    }
    else if (lVar7 == DAT_146b090b8) {
      *(undefined1 *)((longlong)plVar9 + 0x1c) = 0xd;
    }
    else if (lVar7 == DAT_146b090c0) {
      *(undefined1 *)((longlong)plVar9 + 0x1c) = 0x11;
    }
    else if (lVar7 == DAT_146b090c8) {
      *(undefined1 *)((longlong)plVar9 + 0x1c) = 0x10;
    }
    else if (lVar7 == DAT_146b090d0) {
      *(undefined1 *)((longlong)plVar9 + 0x1c) = 0x12;
    }
    else if (lVar7 == DAT_146b090d8) {
      *(undefined1 *)((longlong)plVar9 + 0x1c) = 0xe;
    }
    else if (lVar7 == DAT_146b090e0) {
      *(undefined1 *)((longlong)plVar9 + 0x1c) = 0xf;
    }
    else if (lVar7 == DAT_146b090e8) {
      *(undefined1 *)((longlong)plVar9 + 0x1c) = 0xfe;
    }
    else if (lVar7 == DAT_146b090f0) {
      *(undefined1 *)((longlong)plVar9 + 0x1c) = 0xff;
    }
  }
  else {
    lVar7 = UBoolProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar3 = 3;
      if (*(char *)(param_2 + 0x73) == -1) {
        uVar3 = 0x15;
      }
      *(undefined1 *)((longlong)plVar9 + 0x1c) = uVar3;
    }
    else {
      lVar7 = UFloatProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *(undefined1 *)((longlong)plVar9 + 0x1c) = 4;
      }
      else {
        lVar7 = UIntProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          *(undefined1 *)((longlong)plVar9 + 0x1c) = 5;
        }
        else {
          lVar7 = UByteProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            *(undefined1 *)((longlong)plVar9 + 0x1c) = 6;
          }
          else {
            lVar7 = UObjectPropertyBase::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              *(undefined1 *)((longlong)plVar9 + 0x1c) = 8;
            }
            else {
              lVar7 = UNameProperty::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                *(undefined1 *)((longlong)plVar9 + 0x1c) = 7;
              }
              else {
                lVar7 = UUInt32Property::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  *(undefined1 *)((longlong)plVar9 + 0x1c) = 9;
                }
                else {
                  lVar7 = UUInt64Property::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    *(undefined1 *)((longlong)plVar9 + 0x1c) = 0x14;
                  }
                  else {
                    lVar7 = UStrProperty::GetPrivateStaticClass();
                    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      *(undefined1 *)((longlong)plVar9 + 0x1c) = 0x13;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  cVar4 = (**(code **)(*(longlong *)*plVar9 + 0x2d0))();
  if ((cVar4 != '\0') && (*(longlong *)(*plVar9 + 0x18) != 0xd8)) {
    *(byte *)((longlong)plVar9 + 0x1d) = *(byte *)((longlong)plVar9 + 0x1d) | 1;
  }
  return (int)plVar9[3];
}



// FUNCTION 142721400 FUN_142721400 body=137 status=ok
// SIG undefined FUN_142721400(void)

void FUN_142721400(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_res8;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x18) * 6;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 6) {
    local_res8 = *plVar1;
    if ((local_res8 != 0) &&
       ((**(code **)(*param_2 + 0x38))(param_2,&local_res8,0,0), local_res8 == 0)) {
      *plVar1 = 0;
    }
  }
  return;
}



// FUNCTION 142721490 AllocateData body=129 status=ok
// SIG undefined AllocateData(void)

void FColorVertexBuffer::AllocateData(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)0x0;
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  plVar3 = (longlong *)operator_new(0x28);
  if (plVar3 != (longlong *)0x0) {
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[1] = (longlong)&PTR_GetBoundProgramCounterForTimerManager_144ef0818;
    *(undefined1 *)(plVar3 + 4) = param_2;
    *plVar3 = (longlong)&PTR_FUN_145188c68;
    plVar4 = plVar3;
  }
  *(longlong **)(param_1 + 0x38) = plVar4;
  uVar2 = (**(code **)(*plVar4 + 0x20))();
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  return;
}



// FUNCTION 142721520 FUN_142721520 body=114 status=ok
// SIG undefined FUN_142721520(void)

void FUN_142721520(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = &PTR_FUN_145188d00;
    puVar1[1] = &PTR_GetBoundProgramCounterForTimerManager_145188d38;
    *(undefined8 **)(param_1 + 0x50) = puVar1;
    return;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 1427215a0 FUN_1427215a0 body=171 status=ok
// SIG undefined FUN_1427215a0(void)

void FUN_1427215a0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0x0;
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x41);
  puVar3 = (undefined8 *)operator_new(0x28);
  if (cVar1 == '\0') {
    if (puVar3 != (undefined8 *)0x0) {
      uVar2 = *(undefined1 *)(param_1 + 0x40);
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)(puVar3 + 4) = uVar2;
      puVar3[1] = &PTR_GetBoundProgramCounterForTimerManager_144eec268;
      *puVar3 = &PTR_FUN_145188e40;
      puVar4 = puVar3;
    }
  }
  else if (puVar3 != (undefined8 *)0x0) {
    uVar2 = *(undefined1 *)(param_1 + 0x40);
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[1] = &PTR_GetBoundProgramCounterForTimerManager_144e08448;
    *(undefined1 *)(puVar3 + 4) = uVar2;
    *puVar3 = &PTR_FUN_145188de8;
    puVar4 = puVar3;
  }
  *(undefined8 **)(param_1 + 0x48) = puVar4;
  return;
}



// FUNCTION 142721650 FUN_142721650 body=347 status=ok
// SIG undefined FUN_142721650(void)

void FUN_142721650(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  
  puVar3 = (undefined8 *)0x0;
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  puVar2 = puVar3;
  if (*(char *)(param_1 + 0xe1) == '\0') {
    *(undefined4 *)(param_1 + 0xd0) = 8;
    puVar1 = (undefined8 *)operator_new(0x28);
    if (puVar1 == (undefined8 *)0x0) goto LAB_14272170e;
    *puVar1 = &PTR_FUN_145188f48;
    ppuVar4 = &PTR_GetBoundProgramCounterForTimerManager_144eec268;
  }
  else {
    *(undefined4 *)(param_1 + 0xd0) = 0x10;
    puVar1 = (undefined8 *)operator_new(0x28);
    if (puVar1 == (undefined8 *)0x0) goto LAB_14272170e;
    *puVar1 = &PTR_FUN_145188ef0;
    ppuVar4 = &PTR_GetBoundProgramCounterForTimerManager_144e08448;
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = param_2;
  puVar1[1] = ppuVar4;
  puVar2 = puVar1;
LAB_14272170e:
  *(undefined8 **)(param_1 + 0xa0) = puVar2;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    *(undefined4 *)(param_1 + 0xd4) = 4;
    puVar2 = (undefined8 *)operator_new(0x28);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_145188fa0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[1] = &PTR_GetBoundProgramCounterForTimerManager_144ef0818;
      *(undefined1 *)(puVar2 + 4) = param_2;
      puVar3 = puVar2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd4) = 8;
    puVar2 = (undefined8 *)operator_new(0x28);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_145188e98;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[1] = &PTR_GetBoundProgramCounterForTimerManager_144eec268;
      *(undefined1 *)(puVar2 + 4) = param_2;
      puVar3 = puVar2;
    }
  }
  *(undefined8 **)(param_1 + 0xb0) = puVar3;
  return;
}



// FUNCTION 1427217b0 FUN_1427217b0 body=185 status=ok
// SIG undefined FUN_1427217b0(void)

void FUN_1427217b0(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if (param_3 == 0) {
      return;
    }
    FColorVertexBuffer::AllocateData(param_1,1);
  }
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x54) = iVar1 + param_3;
    (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
    if (*(int *)(param_1 + 0x54) != 0) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x48) = uVar3;
      if (param_3 != 0) {
        puVar6 = (undefined4 *)(param_2 + ((longlong)param_4 + 0x1c) * 4);
        do {
          uVar2 = *puVar6;
          iVar4 = uVar5 + iVar1;
          puVar6 = puVar6 + 0x1e;
          uVar5 = uVar5 + 1;
          *(undefined4 *)
           ((ulonglong)(uint)(iVar4 * *(int *)(param_1 + 0x50)) + *(longlong *)(param_1 + 0x48)) =
               uVar2;
        } while (uVar5 < param_3);
      }
    }
  }
  return;
}



// FUNCTION 142721870 FUN_142721870 body=2087 status=ok
// SIG undefined FUN_142721870(void)

void FUN_142721870(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  ushort uVar5;
  undefined2 uVar6;
  ushort uVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  float fVar19;
  float local_158;
  float fStack_154;
  float local_148;
  float fStack_144;
  undefined4 local_138;
  undefined4 uStack_134;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  
  if ((*(longlong *)(param_1 + 0xa0) == 0) || (*(longlong *)(param_1 + 0xb0) == 0)) {
    if (param_3 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0xd8) = 1;
    FUN_142721650(param_1,1);
  }
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0xdc);
    iVar10 = param_3 + iVar2;
    *(int *)(param_1 + 0xdc) = iVar10;
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))(*(longlong **)(param_1 + 0xa0),iVar10,0);
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 8))
              (*(longlong **)(param_1 + 0xb0),*(int *)(param_1 + 0xdc) * *(int *)(param_1 + 0xd8),0)
    ;
    if (*(int *)(param_1 + 0xdc) != 0) {
      uVar9 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x30))();
      *(undefined8 *)(param_1 + 0xc0) = uVar9;
      uVar9 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))();
      uVar18 = 0;
      *(undefined8 *)(param_1 + 200) = uVar9;
      if (param_3 != 0) {
        puVar14 = (undefined8 *)(param_2 + 0x18);
        do {
          uVar17 = (ulonglong)(uVar18 + iVar2);
          fVar3 = *(float *)((longlong)puVar14 + 0x14);
          local_158 = (float)*(undefined8 *)((longlong)puVar14 + -0xc);
          local_110 = *(float *)((longlong)puVar14 + -4);
          local_100 = *(undefined4 *)(puVar14 + 1);
          fStack_154 = (float)((ulonglong)*(undefined8 *)((longlong)puVar14 + -0xc) >> 0x20);
          local_148 = (float)*(undefined8 *)((longlong)puVar14 + 0xc);
          fStack_144 = (float)((ulonglong)*(undefined8 *)((longlong)puVar14 + 0xc) >> 0x20);
          local_138 = (undefined4)*puVar14;
          uStack_134 = (undefined4)((ulonglong)*puVar14 >> 0x20);
          local_f0 = fVar3;
          if (*(char *)(param_1 + 0xe1) == '\0') {
            lVar4 = *(longlong *)(param_1 + 0xc0);
            iVar10 = (int)ROUND(local_158 * 127.0 + local_158 * 127.0 + 0.5) >> 1;
            if (iVar10 < -0x80) {
              iVar8 = -0x80;
            }
            else {
              iVar8 = 0x7f;
              if (iVar10 < 0x7f) {
                iVar8 = iVar10;
              }
            }
            *(char *)(lVar4 + uVar17 * 8) = (char)iVar8;
            iVar10 = (int)ROUND(fStack_154 * 127.0 + fStack_154 * 127.0 + 0.5) >> 1;
            if (iVar10 < -0x80) {
              iVar8 = -0x80;
            }
            else {
              iVar8 = 0x7f;
              if (iVar10 < 0x7f) {
                iVar8 = iVar10;
              }
            }
            *(char *)(lVar4 + 1 + uVar17 * 8) = (char)iVar8;
            iVar10 = (int)ROUND(local_110 * 127.0 + local_110 * 127.0 + 0.5) >> 1;
            if (iVar10 < -0x80) {
              iVar8 = -0x80;
            }
            else {
              iVar8 = 0x7f;
              if (iVar10 < 0x7f) {
                iVar8 = iVar10;
              }
            }
            local_108 = local_138;
            local_e8 = 0;
            uStack_e4 = 0;
            uStack_e0 = 0;
            uStack_dc = 0x3f800000;
            local_118 = local_158;
            local_114 = fStack_154;
            local_104 = uStack_134;
            local_f8 = local_148;
            local_f4 = fStack_144;
            *(char *)(lVar4 + 2 + uVar17 * 8) = (char)iVar8;
            *(undefined1 *)(lVar4 + 3 + uVar17 * 8) = 0x7f;
            local_10c = 0;
            local_fc = 0;
            local_ec = 0;
            fVar19 = (float)FMatrix::Determinant(&local_118);
            if (0.0 <= fVar19) {
              fVar19 = 254.5;
            }
            else {
              fVar19 = -253.5;
            }
            iVar10 = (int)ROUND(local_148 * 127.0 + local_148 * 127.0 + 0.5) >> 1;
            if (iVar10 < -0x80) {
              iVar8 = -0x80;
            }
            else {
              iVar8 = 0x7f;
              if (iVar10 < 0x7f) {
                iVar8 = iVar10;
              }
            }
            *(char *)(lVar4 + 4 + uVar17 * 8) = (char)iVar8;
            iVar10 = (int)ROUND(fStack_144 * 127.0 + fStack_144 * 127.0 + 0.5) >> 1;
            if (iVar10 < -0x80) {
              iVar8 = -0x80;
            }
            else {
              iVar8 = 0x7f;
              if (iVar10 < 0x7f) {
                iVar8 = iVar10;
              }
            }
            *(char *)(lVar4 + 5 + uVar17 * 8) = (char)iVar8;
            iVar10 = (int)ROUND(fVar3 * 127.0 + fVar3 * 127.0 + 0.5) >> 1;
            if (iVar10 < -0x80) {
              iVar8 = -0x80;
            }
            else {
              iVar8 = 0x7f;
              if (iVar10 < 0x7f) {
                iVar8 = iVar10;
              }
            }
            *(char *)(lVar4 + 6 + uVar17 * 8) = (char)iVar8;
            iVar10 = (int)ROUND(fVar19) >> 1;
            if (iVar10 < -0x80) {
              iVar8 = -0x80;
            }
            else {
              iVar8 = 0x7f;
              if (iVar10 < 0x7f) {
                iVar8 = iVar10;
              }
            }
            *(char *)(lVar4 + 7 + uVar17 * 8) = (char)iVar8;
          }
          else {
            puVar12 = (undefined2 *)(uVar17 * 0x10 + *(longlong *)(param_1 + 0xc0));
            iVar10 = (int)ROUND(local_158 * 32767.0 + local_158 * 32767.0 + 0.5) >> 1;
            if (iVar10 < -0x8000) {
              uVar6 = 0x8000;
            }
            else {
              uVar6 = 0x7fff;
              if (iVar10 < 0x7fff) {
                uVar6 = (undefined2)iVar10;
              }
            }
            *puVar12 = uVar6;
            iVar10 = (int)ROUND(fStack_154 * 32767.0 + fStack_154 * 32767.0 + 0.5) >> 1;
            if (iVar10 < -0x8000) {
              iVar8 = -0x8000;
            }
            else {
              iVar8 = 0x7fff;
              if (iVar10 < 0x7fff) {
                iVar8 = iVar10;
              }
            }
            puVar12[1] = (short)iVar8;
            iVar10 = (int)ROUND(local_110 * 32767.0 + local_110 * 32767.0 + 0.5) >> 1;
            if (iVar10 < -0x8000) {
              iVar8 = -0x8000;
            }
            else {
              iVar8 = 0x7fff;
              if (iVar10 < 0x7fff) {
                iVar8 = iVar10;
              }
            }
            local_108 = local_138;
            local_e8 = 0;
            uStack_e4 = 0;
            uStack_e0 = 0;
            uStack_dc = 0x3f800000;
            local_118 = local_158;
            local_114 = fStack_154;
            local_104 = uStack_134;
            local_f8 = local_148;
            local_f4 = fStack_144;
            puVar12[2] = (short)iVar8;
            puVar12[3] = 0x7fff;
            local_10c = 0;
            local_fc = 0;
            local_ec = 0;
            fVar19 = (float)FMatrix::Determinant(&local_118);
            if (0.0 <= fVar19) {
              fVar19 = 65534.5;
            }
            else {
              fVar19 = -65533.5;
            }
            iVar10 = (int)ROUND(local_148 * 32767.0 + local_148 * 32767.0 + 0.5) >> 1;
            if (iVar10 < -0x8000) {
              iVar8 = -0x8000;
            }
            else {
              iVar8 = 0x7fff;
              if (iVar10 < 0x7fff) {
                iVar8 = iVar10;
              }
            }
            puVar12[4] = (short)iVar8;
            iVar10 = (int)ROUND(fStack_144 * 32767.0 + fStack_144 * 32767.0 + 0.5) >> 1;
            if (iVar10 < -0x8000) {
              iVar8 = -0x8000;
            }
            else {
              iVar8 = 0x7fff;
              if (iVar10 < 0x7fff) {
                iVar8 = iVar10;
              }
            }
            puVar12[5] = (short)iVar8;
            iVar10 = (int)ROUND(fVar3 * 32767.0 + fVar3 * 32767.0 + 0.5) >> 1;
            if (iVar10 < -0x8000) {
              iVar8 = -0x8000;
            }
            else {
              iVar8 = 0x7fff;
              if (iVar10 < 0x7fff) {
                iVar8 = iVar10;
              }
            }
            puVar12[6] = (short)iVar8;
            iVar10 = (int)ROUND(fVar19) >> 1;
            if (iVar10 < -0x8000) {
              puVar12[7] = 0x8000;
            }
            else {
              iVar8 = 0x7fff;
              if (iVar10 < 0x7fff) {
                iVar8 = iVar10;
              }
              puVar12[7] = (short)iVar8;
            }
          }
          uVar15 = *(uint *)(param_1 + 0xd8);
          uVar13 = 0;
          if (uVar15 != 0) {
            do {
              uVar11 = *(uint *)(puVar14 + uVar13 + 3);
              uVar1 = *(uint *)((longlong)puVar14 + uVar13 * 8 + 0x1c);
              lVar4 = *(longlong *)(param_1 + 200);
              lVar16 = uVar15 * uVar17 + uVar13;
              if (*(char *)(param_1 + 0xe0) == '\0') {
                uVar5 = (ushort)(uVar11 >> 0x10);
                uVar7 = uVar5 & 0x8000;
                uVar15 = uVar11 >> 0x17 & 0xff;
                if (uVar15 < 0x71) {
                  iVar10 = -uVar15 + 0x7e;
                  if ((iVar10 < 0x19) &&
                     (uVar11 = uVar11 & 0x7fffff | 0x800000,
                     uVar7 = (ushort)(uVar11 >> ((byte)iVar10 & 0x1f)) & 0x3ff | uVar7,
                     (uVar11 >> ((char)-uVar15 + 0x7dU & 0x1f) & 1) != 0)) {
                    uVar7 = uVar7 + 1;
                  }
                }
                else if (uVar15 < 0x8f) {
                  uVar7 = uVar7 | ((uVar5 >> 7) - 0x10 & 0x1f) << 10 |
                                  (ushort)(uVar11 >> 0xd) & 0x3ff;
                }
                else {
                  uVar7 = uVar7 | 0x7bff;
                }
                *(ushort *)(lVar4 + lVar16 * 4) = uVar7;
                uVar5 = (ushort)(uVar1 >> 0x10);
                uVar7 = uVar5 & 0x8000;
                uVar15 = uVar1 >> 0x17 & 0xff;
                if (uVar15 < 0x71) {
                  iVar10 = -uVar15 + 0x7e;
                  if ((iVar10 < 0x19) &&
                     (uVar11 = uVar1 & 0x7fffff | 0x800000,
                     uVar7 = (ushort)(uVar11 >> ((byte)iVar10 & 0x1f)) & 0x3ff | uVar7,
                     (uVar11 >> ((char)-uVar15 + 0x7dU & 0x1f) & 1) != 0)) {
                    uVar7 = uVar7 + 1;
                  }
                }
                else if (uVar15 < 0x8f) {
                  uVar7 = uVar7 | ((uVar5 >> 7) - 0x10 & 0x1f) << 10 |
                                  (ushort)(uVar1 >> 0xd) & 0x3ff;
                }
                else {
                  uVar7 = uVar7 | 0x7bff;
                }
                *(ushort *)(lVar4 + 2 + lVar16 * 4) = uVar7;
              }
              else {
                *(uint *)(lVar4 + lVar16 * 8) = uVar11;
                *(uint *)(lVar4 + 4 + lVar16 * 8) = uVar1;
              }
              uVar15 = *(uint *)(param_1 + 0xd8);
              uVar11 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar11;
            } while (uVar11 < uVar15);
          }
          uVar18 = uVar18 + 1;
          puVar14 = puVar14 + 0xf;
        } while (uVar18 < param_3);
      }
    }
  }
  return;
}



// FUNCTION 1427220a0 ApplyBufferToSoundWave body=183 status=ok
// SIG undefined ApplyBufferToSoundWave(void)

void Audio::FSoundWavePCMWriter::ApplyBufferToSoundWave(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  USoundWave::InvalidateCompressedData(param_1[4]);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  lVar2 = param_1[4];
  *(byte *)(lVar2 + 0xb4) = *(byte *)(lVar2 + 0xb4) & 0xdf;
  *(byte *)(lVar2 + 0xb4) = *(byte *)(lVar2 + 0xb4) | 0x40;
  *(undefined4 *)(lVar2 + 0xec) = uVar1;
  *(undefined4 *)(param_1[4] + 0xe4) = *(undefined4 *)(param_1 + 2);
  *(int *)(param_1[4] + 0xe8) = *(int *)(param_1 + 1) * 2;
  *(float *)(param_1[4] + 0x50) =
       (float)*(int *)((longlong)param_1 + 0xc) / (float)*(int *)((longlong)param_1 + 0x14);
  lVar2 = param_1[4];
  if (*(longlong *)(lVar2 + 0x130) != 0) {
    FMemory::Free();
    lVar2 = param_1[4];
  }
  uVar3 = FMemory::Malloc((longlong)*(int *)(lVar2 + 0xe8),0);
  *(undefined8 *)(param_1[4] + 0x130) = uVar3;
  ::_guard_xfg_dispatch_icall_nop
            (*(void **)(param_1[4] + 0x130),(void *)*param_1,(longlong)*(int *)(param_1[4] + 0xe8));
  return;
}



// FUNCTION 142722160 FUN_142722160 body=368 status=ok
// SIG undefined FUN_142722160(void)

void FUN_142722160(longlong param_1,float *param_2)

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
  float fVar19;
  float fVar20;
  undefined8 local_88;
  undefined4 local_80;
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
  
  fVar1 = *(float *)(param_1 + 0x80);
  fVar2 = *(float *)(param_1 + 0x84);
  fVar3 = *(float *)(param_1 + 0x88);
  fVar4 = *(float *)(param_1 + 0x8c);
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = param_2[4];
  fVar10 = param_2[5];
  fVar11 = param_2[6];
  fVar12 = param_2[7];
  fVar13 = param_2[8];
  fVar14 = param_2[9];
  fVar15 = param_2[10];
  fVar16 = param_2[0xb];
  fVar17 = param_2[0xc];
  fVar18 = param_2[0xd];
  fVar19 = param_2[0xe];
  fVar20 = param_2[0xf];
  local_78 = fVar1 * fVar5 + fVar2 * fVar9 + fVar3 * fVar13 + fVar4 * fVar17;
  fStack_74 = fVar1 * fVar6 + fVar2 * fVar10 + fVar3 * fVar14 + fVar4 * fVar18;
  fStack_70 = fVar1 * fVar7 + fVar2 * fVar11 + fVar3 * fVar15 + fVar4 * fVar19;
  fStack_6c = fVar1 * fVar8 + fVar2 * fVar12 + fVar3 * fVar16 + fVar4 * fVar20;
  fVar1 = *(float *)(param_1 + 0x90);
  fVar2 = *(float *)(param_1 + 0x94);
  fVar3 = *(float *)(param_1 + 0x98);
  fVar4 = *(float *)(param_1 + 0x9c);
  local_68 = fVar1 * fVar5 + fVar2 * fVar9 + fVar3 * fVar13 + fVar4 * fVar17;
  fStack_64 = fVar1 * fVar6 + fVar2 * fVar10 + fVar3 * fVar14 + fVar4 * fVar18;
  fStack_60 = fVar1 * fVar7 + fVar2 * fVar11 + fVar3 * fVar15 + fVar4 * fVar19;
  fStack_5c = fVar1 * fVar8 + fVar2 * fVar12 + fVar3 * fVar16 + fVar4 * fVar20;
  fVar1 = *(float *)(param_1 + 0xa0);
  fVar2 = *(float *)(param_1 + 0xa4);
  fVar3 = *(float *)(param_1 + 0xa8);
  fVar4 = *(float *)(param_1 + 0xac);
  local_58 = fVar1 * fVar5 + fVar2 * fVar9 + fVar3 * fVar13 + fVar4 * fVar17;
  fStack_54 = fVar1 * fVar6 + fVar2 * fVar10 + fVar3 * fVar14 + fVar4 * fVar18;
  fStack_50 = fVar1 * fVar7 + fVar2 * fVar11 + fVar3 * fVar15 + fVar4 * fVar19;
  fStack_4c = fVar1 * fVar8 + fVar2 * fVar12 + fVar3 * fVar16 + fVar4 * fVar20;
  fVar1 = *(float *)(param_1 + 0xb0);
  fVar2 = *(float *)(param_1 + 0xb4);
  fVar3 = *(float *)(param_1 + 0xb8);
  fVar4 = *(float *)(param_1 + 0xbc);
  local_88 = *(undefined8 *)(param_1 + 0xf8);
  local_48 = fVar1 * fVar5 + fVar2 * fVar9 + fVar3 * fVar13 + fVar4 * fVar17;
  fStack_44 = fVar1 * fVar6 + fVar2 * fVar10 + fVar3 * fVar14 + fVar4 * fVar18;
  fStack_40 = fVar1 * fVar7 + fVar2 * fVar11 + fVar3 * fVar15 + fVar4 * fVar19;
  fStack_3c = fVar1 * fVar8 + fVar2 * fVar12 + fVar3 * fVar16 + fVar4 * fVar20;
  local_80 = *(undefined4 *)(param_1 + 0x100);
  FUN_14273d150(local_88,&local_78,param_1 + 0xc0,param_1 + 0xdc,&local_88,param_1 + 0x110);
  return;
}



// FUNCTION 1427222d0 FUN_1427222d0 body=348 status=ok
// SIG undefined FUN_1427222d0(void)

void FUN_1427222d0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined8 local_68;
  float local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  float local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_70 = param_2[2];
  fVar1 = param_2[1];
  local_60 = local_70 + *(float *)(param_1 + 200);
  fVar2 = *param_2;
  local_5c = *(undefined8 *)(param_1 + 0xcc);
  local_50 = *(undefined4 *)(param_1 + 0xd8);
  local_28 = *(undefined8 *)(param_1 + 0xec);
  local_74 = fVar1 + *(float *)(param_1 + 0xb4);
  local_b0 = local_70 + *(float *)(param_1 + 0x100);
  local_70 = local_70 + *(float *)(param_1 + 0xb8);
  local_54 = *(undefined4 *)(param_1 + 0xd4);
  local_68 = CONCAT44(fVar1 + *(float *)(param_1 + 0xc4),fVar2 + *(float *)(param_1 + 0xc0));
  local_38 = *(undefined8 *)(param_1 + 0xdc);
  uStack_30 = *(undefined8 *)(param_1 + 0xe4);
  local_20 = *(undefined4 *)(param_1 + 0xf4);
  local_a8 = *(undefined8 *)(param_1 + 0x80);
  uStack_a0 = *(undefined8 *)(param_1 + 0x88);
  local_98 = *(undefined8 *)(param_1 + 0x90);
  uStack_90 = *(undefined8 *)(param_1 + 0x98);
  local_88 = *(undefined8 *)(param_1 + 0xa0);
  uStack_80 = *(undefined8 *)(param_1 + 0xa8);
  local_78 = fVar2 + *(float *)(param_1 + 0xb0);
  local_6c = *(undefined4 *)(param_1 + 0xbc);
  local_b8 = CONCAT44(fVar1 + *(float *)(param_1 + 0xfc),fVar2 + *(float *)(param_1 + 0xf8));
  local_40 = local_b0;
  FUN_14273d150(local_6c,&local_a8,&local_68,&local_38,&local_b8,param_1 + 0x110);
  return;
}



// FUNCTION 142722430 FUN_142722430 body=465 status=ok
// SIG undefined FUN_142722430(void)

void FUN_142722430(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    local_res10 = param_1;
    FUN_142729d00(&local_res10,2,local_res20);
    FUN_1417502d0(param_1);
    return;
  }
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar9 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar9 = plVar6;
    }
    TlsSetValue(*pDVar5,plVar9);
    plVar6 = plVar9;
  }
  plVar9 = (longlong *)plVar6[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)*plVar6;
    if (plVar9 == (longlong *)0x0) {
      lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
      plVar6[1] = lVar7;
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar6[1] = (longlong)puVar8;
        lVar7 = 0x1f;
        do {
          puVar2 = puVar8 + 0x20;
          *puVar8 = puVar2;
          lVar7 = lVar7 + -1;
          puVar8 = puVar2;
        } while (lVar7 != 0);
        *puVar2 = 0;
      }
      plVar9 = (longlong *)plVar6[1];
      iVar10 = 0x20;
      *(undefined4 *)(plVar6 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar6[1] = (longlong)plVar9;
      *(undefined4 *)(plVar6 + 2) = 0x20;
      *plVar6 = 0;
    }
  }
  else {
    iVar10 = (int)plVar6[2];
  }
  plVar6[1] = *plVar9;
  *(int *)(plVar6 + 2) = iVar10 + -1;
  *plVar9 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar9 + 1) = 0xff;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 3) = 0;
  *plVar9 = (longlong)&PTR_FUN_1451892b8;
  plVar9[4] = 0;
  plVar9[2] = param_1;
  lVar7 = plVar9[4];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res18 = lVar7;
  FUN_140445100(plVar9,0,0xff,1,0,0);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res18);
    }
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 142722610 FUN_142722610 body=928 status=ok
// SIG undefined FUN_142722610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142722610(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  short *psVar1;
  uint *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  void *_Dst;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 local_78 [80];
  
  if ((1 < (byte)(*(byte *)(param_1 + 5) - 1)) && (*(byte *)(param_1 + 5) < 6)) {
    *(undefined1 *)(param_1 + 5) = 1;
    if (param_3 == 0) {
      uVar8 = GetTransientPackage();
      lVar9 = NewObject<USoundWave>(uVar8);
      param_1[4] = lVar9;
      iVar3 = *(int *)(lVar9 + 0xc);
      if (iVar3 < (int)DAT_1469e91c4) {
        uVar12 = iVar3 >> 0x1f & 0xffff;
        uVar7 = iVar3 + uVar12;
        puVar2 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) + 8 +
                         (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18);
        *puVar2 = *puVar2 | 0x40000000;
      }
      else {
        _DAT_00000008 = _DAT_00000008 | 0x40000000;
      }
    }
    else {
      param_1[4] = param_3;
      lVar9 = 0;
      iVar3 = *(int *)(param_3 + 0xc);
      lVar10 = lVar9;
      if (iVar3 < (int)DAT_1469e91c4) {
        uVar12 = iVar3 >> 0x1f & 0xffff;
        uVar7 = iVar3 + uVar12;
        lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                 (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18;
      }
      *(byte *)(param_1 + 8) = (byte)((uint)*(undefined4 *)(lVar10 + 8) >> 0x1e) & 1;
      iVar3 = *(int *)(param_3 + 0xc);
      if (iVar3 < (int)DAT_1469e91c4) {
        uVar12 = iVar3 >> 0x1f & 0xffff;
        uVar7 = iVar3 + uVar12;
        lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18;
      }
      *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 0x40000000;
      lVar9 = FUN_1428742d0(DAT_146b17150);
      if (lVar9 != 0) {
        FUN_1422fabe0(lVar9,param_1[4],0);
      }
    }
    puVar13 = (undefined8 *)0x0;
    iVar3 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)iVar3;
    uVar8 = SUB168(ZEXT816(2) * auVar4,0);
    if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    lVar10 = operator_new(uVar8);
    lVar9 = *param_1;
    *param_1 = lVar10;
    FMemory::operator_delete(lVar9);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,(void *)*param_2,(longlong)(int)param_1[1] * 2);
    if ((2 < (int)param_1[2]) && (*param_1 != 0)) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (longlong)(*(int *)((longlong)param_1 + 0xc) * 2);
      uVar8 = SUB168(ZEXT816(2) * auVar5,0);
      if (SUB168(ZEXT816(2) * auVar5,8) != 0) {
        uVar8 = 0xffffffffffffffff;
      }
      _Dst = (void *)operator_new(uVar8);
      FMemory::operator_delete(0);
      _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)(*(int *)((longlong)param_1 + 0xc) * 2) * 2);
      lVar9 = *param_1;
      puVar11 = puVar13;
      puVar16 = puVar13;
      if (0 < *(int *)((longlong)param_1 + 0xc)) {
        do {
          puVar15 = puVar13;
          if (0 < (int)param_1[2]) {
            do {
              uVar12 = (uint)puVar15;
              uVar7 = uVar12 & 0x80000001;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
              }
              puVar15 = (undefined8 *)(ulonglong)(uVar12 + 1);
              psVar1 = (short *)((longlong)_Dst + (longlong)(int)(uVar7 + (int)puVar16) * 2);
              *psVar1 = *psVar1 + *(short *)(lVar9 + (longlong)
                                                     (int)((int)param_1[2] * (int)puVar11 + uVar12)
                                                     * 2);
            } while ((int)(uVar12 + 1) < (int)param_1[2]);
          }
          uVar7 = (int)puVar11 + 1;
          puVar11 = (undefined8 *)(ulonglong)uVar7;
          puVar16 = (undefined8 *)(ulonglong)((int)puVar16 + 2);
        } while ((int)uVar7 < *(int *)((longlong)param_1 + 0xc));
      }
      iVar3 = *(int *)((longlong)param_1 + 0xc) * 2;
      *(undefined4 *)(param_1 + 2) = 2;
      *(int *)(param_1 + 1) = iVar3;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (longlong)iVar3;
      uVar8 = SUB168(ZEXT816(2) * auVar6,0);
      if (SUB168(ZEXT816(2) * auVar6,8) != 0) {
        uVar8 = 0xffffffffffffffff;
      }
      lVar10 = operator_new(uVar8);
      lVar9 = *param_1;
      *param_1 = lVar10;
      FMemory::operator_delete(lVar9);
      _guard_xfg_dispatch_icall_nop((void *)*param_1,_Dst,(longlong)(int)param_1[1] * 2);
      FMemory::operator_delete(_Dst);
    }
    puVar11 = (undefined8 *)operator_new(0xc0);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &PTR_DoThreadedWork_1451892d8;
      uVar8 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_4);
      Audio::FAsyncSoundWavePCMWriteWorker::FAsyncSoundWavePCMWriteWorker
                (puVar11 + 2,param_1,1,uVar8);
      *(undefined4 *)(puVar11 + 0x14) = 0;
      puVar11[0x15] = 0;
      puVar11[0x16] = 0;
      puVar13 = puVar11;
    }
    plVar14 = (longlong *)param_1[9];
    param_1[9] = (longlong)puVar13;
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14,1);
      puVar13 = (undefined8 *)param_1[9];
    }
    FUN_14273d370(puVar13,DAT_1468b5010);
    if (*(int *)(param_4 + 0x40) != 0) {
      plVar14 = *(longlong **)(param_4 + 0x30);
      if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
        plVar14 = (longlong *)(param_4 + 0x10);
      }
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x10))(plVar14,0);
      }
    }
    if (*(longlong *)(param_4 + 0x30) != 0) {
      FMemory::Free();
    }
    return 1;
  }
  if (*(int *)(param_4 + 0x40) != 0) {
    plVar14 = *(longlong **)(param_4 + 0x30);
    if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
      plVar14 = (longlong *)(param_4 + 0x10);
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 1427229b0 FUN_1427229b0 body=2877 status=ok
// SIG undefined FUN_1427229b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1427229b0(undefined8 *param_1,undefined8 *param_2,longlong ***param_3,longlong ****param_4,
             longlong param_5)

{
  undefined4 *puVar1;
  longlong ***ppplVar2;
  longlong ***_Src;
  longlong **pplVar3;
  undefined1 auVar4 [16];
  char cVar5;
  undefined8 *puVar6;
  longlong ****pppplVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 ****ppppuVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong ****pppplVar17;
  undefined8 ****ppppuVar18;
  int iVar19;
  void *pvVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined8 ****ppppuVar24;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined8 ****local_238;
  undefined8 local_230;
  longlong ***local_228;
  undefined8 local_220;
  longlong ***local_218;
  undefined8 local_210;
  longlong ***local_208;
  undefined8 local_200;
  longlong ***local_1f8;
  undefined8 local_1f0;
  longlong ***local_1e8;
  undefined8 local_1e0;
  longlong ***local_1d8;
  undefined8 local_1d0;
  longlong ***local_1c8;
  undefined8 local_1c0;
  longlong ***local_1b8;
  uint local_1b0;
  int iStack_1ac;
  longlong ***local_1a8;
  undefined8 local_1a0;
  longlong ***local_198 [2];
  longlong ***local_188;
  undefined8 local_180;
  undefined8 *local_178;
  longlong local_170;
  undefined8 *local_168;
  longlong local_160 [3];
  code *local_148 [2];
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined4 local_108;
  code *local_f8 [2];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_170 = param_5;
  local_238 = param_4;
  local_228 = param_3;
  local_178 = param_1;
  local_168 = param_2;
  if (((byte)(*(byte *)(param_1 + 5) - 1) < 2) || (5 < *(byte *)(param_1 + 5))) {
    if (*(int *)(param_5 + 0x40) != 0) {
      plVar12 = *(longlong **)(param_5 + 0x30);
      if (*(longlong **)(param_5 + 0x30) == (longlong *)0x0) {
        plVar12 = (longlong *)(param_5 + 0x10);
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12,0);
      }
    }
    lVar13 = *(longlong *)(param_5 + 0x30);
LAB_1427234be:
    if (lVar13 != 0) {
      FMemory::Free();
    }
    return 0;
  }
  FPaths::NormalizeDirectoryName(param_4);
  puVar6 = (undefined8 *)FUN_14167d0d0(local_160);
  ppppuVar18 = (undefined8 ****)0x0;
  iVar19 = 0;
  iVar14 = *(int *)(puVar6 + 1);
  local_218 = (longlong ***)*puVar6;
  *puVar6 = 0;
  local_210._0_4_ = *(int *)(puVar6 + 1);
  local_210._4_4_ = *(int *)((longlong)puVar6 + 0xc);
  puVar6[1] = 0;
  iVar16 = (int)local_210;
  if (local_210._4_4_ < (int)((0x10 - (uint)(iVar14 != 0)) + (int)local_210)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_218);
    iVar16 = (int)local_210;
  }
  local_210._0_4_ = (0x10 - (uint)(iVar16 != 0)) + iVar16;
  local_208 = local_218;
  local_200._4_4_ = local_210._4_4_;
  local_200._0_4_ = (int)local_210;
  if (local_210._4_4_ < (int)local_210) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218);
    local_208 = local_218;
    local_200._4_4_ = local_210._4_4_;
    local_200._0_4_ = (int)local_210;
  }
  local_218 = (longlong ***)0x0;
  local_210 = 0;
  lVar13 = (longlong)iVar16 - (ulonglong)(iVar16 != 0);
  puVar1 = (undefined4 *)((longlong)local_208 + lVar13 * 2);
  *puVar1 = 0x6f0042;
  puVar1[1] = 0x6e0075;
  puVar1[2] = 0x650063;
  puVar1[3] = 0x570064;
  *(undefined8 *)((longlong)local_208 + lVar13 * 2 + 0x10) = 0x69004600760061;
  *(undefined4 *)((longlong)local_208 + lVar13 * 2 + 0x18) = 0x65006c;
  *(undefined2 *)((longlong)local_208 + lVar13 * 2 + 0x1c) = 0x73;
  *(undefined2 *)((longlong)local_208 + lVar13 * 2 + 0x1e) = 0;
  iVar14 = (int)local_200;
  if (local_200._4_4_ < (int)((2 - (uint)((int)local_200 != 0)) + (int)local_200)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_208);
    iVar14 = (int)local_200;
  }
  local_200._0_4_ = (2 - (uint)(iVar14 != 0)) + iVar14;
  ppppuVar11 = (undefined8 ****)local_208;
  iVar21 = local_200._4_4_;
  iVar16 = (int)local_200;
  if (local_200._4_4_ < (int)local_200) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,iVar14);
    ppppuVar11 = (undefined8 ****)local_208;
    iVar21 = local_200._4_4_;
    iVar16 = (int)local_200;
  }
  local_208 = (longlong ***)0x0;
  local_200 = 0;
  lVar13 = (longlong)iVar14 - (ulonglong)(iVar14 != 0);
  *(undefined2 *)((longlong)ppppuVar11 + lVar13 * 2) = 0x2f;
  *(undefined2 *)((longlong)ppppuVar11 + lVar13 * 2 + 2) = 0;
  iVar14 = *(int *)(param_4 + 1);
  if (iVar16 < 2) {
    ppplVar2 = *param_4;
    local_1d8 = (longlong ***)0x0;
    local_1d0 = CONCAT44(local_1d0._4_4_,iVar14);
    if (iVar14 == 0) {
      local_1d0 = 0;
      ppppuVar24 = ppppuVar18;
      iVar21 = iVar19;
      iVar14 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1d8,iVar14,0);
      ppppuVar24 = (undefined8 ****)local_1d8;
      _guard_xfg_dispatch_icall_nop(local_1d8,ppplVar2,(longlong)iVar14 * 2);
      iVar21 = local_1d0._4_4_;
      iVar14 = (int)local_1d0;
    }
  }
  else {
    iVar15 = iVar14 + -1;
    if (iVar14 == 0) {
      iVar15 = iVar19;
    }
    if ((iVar16 != 0) || (iVar14 = 1, iVar15 == 0)) {
      iVar14 = iVar19;
    }
    local_1f8 = (longlong ***)ppppuVar11;
    local_1f0._4_4_ = iVar21;
    if (iVar21 < iVar16 + iVar15 + iVar14) {
      local_1f0._0_4_ = iVar16;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1f8);
      iVar16 = (int)local_1f0;
    }
    local_198[0] = *param_4;
    ppppuVar24 = (undefined8 ****)local_1f8;
    iVar21 = local_1f0._4_4_;
    iVar14 = iVar16;
    if (iVar15 != 0) {
      local_1f0._0_4_ = iVar16 + (uint)(iVar16 == 0) + iVar15;
      if (local_1f0._4_4_ < (int)local_1f0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,iVar16);
      }
      iVar21 = local_1f0._4_4_;
      iVar14 = (int)local_1f0;
      ppppuVar24 = (undefined8 ****)local_1f8;
      pvVar20 = (void *)((longlong)local_1f8 + ((longlong)iVar16 - (ulonglong)(iVar16 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar20,local_198[0],(longlong)iVar15 * 2);
      *(undefined2 *)((longlong)pvVar20 + (longlong)iVar15 * 2) = 0;
      param_4 = local_238;
    }
    local_1f8 = (longlong ***)0x0;
    local_1d0 = CONCAT44(iVar21,iVar14);
    local_1f0 = 0;
    ppppuVar11 = ppppuVar18;
    local_1d8 = (longlong ***)ppppuVar24;
  }
  if (param_4 == &local_1d8) {
    if (ppppuVar24 != (undefined8 ****)0x0) {
      FMemory::Free(ppppuVar24);
    }
  }
  else {
    if (*param_4 != (longlong ***)0x0) {
      FMemory::Free();
    }
    *param_4 = (longlong ***)ppppuVar24;
    *(int *)(param_4 + 1) = iVar14;
    *(int *)((longlong)param_4 + 0xc) = iVar21;
    local_1d8 = (longlong ***)0x0;
    local_1d0 = 0;
  }
  if (ppppuVar11 != (undefined8 ****)0x0) {
    FMemory::Free(ppppuVar11);
  }
  if (local_160[0] != 0) {
    FMemory::Free();
  }
  puVar6 = local_178;
  *(undefined1 *)(local_178 + 5) = 1;
  cVar5 = FUN_1427286b0(local_178,param_4);
  lVar13 = local_170;
  if (cVar5 == '\0') {
    *(undefined1 *)(puVar6 + 5) = 4;
    if (*(int *)(local_170 + 0x40) != 0) {
      plVar12 = *(longlong **)(local_170 + 0x30);
      if (*(longlong **)(local_170 + 0x30) == (longlong *)0x0) {
        plVar12 = (longlong *)(local_170 + 0x10);
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12,0);
      }
    }
    lVar13 = *(longlong *)(lVar13 + 0x30);
    goto LAB_1427234be;
  }
  local_1c8 = (longlong ***)0x0;
  local_1c0 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
  FGenericPlatformString::Memcpy(local_1c8,L".wav",10);
  local_1a8 = (longlong ***)0x0;
  local_1a0 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
  ppplVar2 = local_1a8;
  FGenericPlatformString::Memcpy(local_1a8,&DAT_145179a94,4);
  iVar14 = *(int *)(param_4 + 1);
  if (iVar14 < 2) {
    uVar23 = local_1a0 & 0xffffffff;
    iVar14 = local_1a0._4_4_;
    local_1a0 = 0;
    local_198[0] = ppplVar2;
    local_1a8 = (longlong ***)0x0;
    ppppuVar11 = (undefined8 ****)ppplVar2;
  }
  else {
    if ((int)local_1a0 == 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = (int)local_1a0 + -1;
    }
    if ((iVar14 != 0) || (iVar21 = 1, iVar16 == 0)) {
      iVar21 = iVar19;
    }
    _Src = *param_4;
    local_198[0] = (longlong ***)0x0;
    local_238 = (undefined8 ****)0x0;
    local_230 = CONCAT44(local_230._4_4_,iVar14);
    if ((iVar14 == 0) && (iVar16 + iVar21 == 0)) {
      local_230 = 0;
      uVar23 = 0;
      ppppuVar11 = ppppuVar18;
      iVar14 = iVar19;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_238,iVar14 + iVar16 + iVar21,0);
      ppppuVar11 = local_238;
      local_198[0] = (longlong ***)local_238;
      _guard_xfg_dispatch_icall_nop(local_238,_Src,(longlong)iVar14 * 2);
      uVar23 = local_230 & 0xffffffff;
      iVar14 = local_230._4_4_;
    }
    if (iVar16 != 0) {
      iVar21 = (int)uVar23;
      uVar22 = iVar16 + (uint)(iVar21 == 0) + iVar21;
      local_230._0_4_ = uVar22;
      if (iVar14 < (int)uVar22) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,uVar23);
        local_198[0] = (longlong ***)local_238;
        ppppuVar11 = local_238;
        iVar14 = local_230._4_4_;
      }
      uVar23 = (ulonglong)(uint)local_230;
      pvVar20 = (void *)(((longlong)iVar21 - (ulonglong)(iVar21 != 0)) * 2 + (longlong)ppppuVar11);
      _guard_xfg_dispatch_icall_nop(pvVar20,ppplVar2,(longlong)iVar16 * 2);
      *(undefined2 *)((longlong)pvVar20 + (longlong)iVar16 * 2) = 0;
    }
    local_238 = (longlong ****)0x0;
    local_230 = 0;
  }
  ppplVar2 = local_228;
  local_1b0 = *(uint *)(local_228 + 1);
  lVar13 = (longlong)(int)local_1b0;
  uVar22 = (uint)uVar23;
  if ((int)uVar22 < 2) {
    pplVar3 = *local_228;
    local_1b8 = (longlong ***)0x0;
    if (local_1b0 == 0) {
      iStack_1ac = 0;
      uVar23 = 0;
      ppppuVar11 = ppppuVar18;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1b8,local_1b0,0);
      ppppuVar11 = (undefined8 ****)local_1b8;
      _guard_xfg_dispatch_icall_nop(local_1b8,pplVar3,lVar13 * 2);
      uVar23 = (ulonglong)local_1b0;
    }
  }
  else {
    iVar16 = local_1b0 - 1;
    if (local_1b0 == 0) {
      iVar16 = iVar19;
    }
    if ((uVar22 != 0) || (iVar21 = 1, iVar16 == 0)) {
      iVar21 = iVar19;
    }
    local_198[0] = (longlong ***)0x0;
    local_228 = (longlong ***)ppppuVar11;
    local_220._4_4_ = iVar14;
    if (iVar14 < (int)(iVar16 + uVar22 + iVar21)) {
      local_220._0_4_ = uVar22;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_228);
      uVar23 = (ulonglong)(uint)local_220;
    }
    pplVar3 = *ppplVar2;
    ppppuVar11 = (undefined8 ****)local_228;
    iVar14 = local_220._4_4_;
    if (iVar16 != 0) {
      iVar21 = (int)uVar23;
      local_220._0_4_ = iVar21 + (uint)(iVar21 == 0) + iVar16;
      if (local_220._4_4_ < (int)(uint)local_220) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,uVar23);
      }
      iVar14 = local_220._4_4_;
      ppppuVar11 = (undefined8 ****)local_228;
      uVar23 = (ulonglong)(uint)local_220;
      pvVar20 = (void *)(((longlong)iVar21 - (ulonglong)(iVar21 != 0)) * 2 + (longlong)local_228);
      _guard_xfg_dispatch_icall_nop(pvVar20,pplVar3,(longlong)iVar16 * 2);
      *(undefined2 *)((longlong)pvVar20 + (longlong)iVar16 * 2) = 0;
    }
    local_228 = (longlong ***)0x0;
    local_1b0 = (uint)uVar23;
    local_220 = 0;
    local_1b8 = (longlong ***)ppppuVar11;
    iStack_1ac = iVar14;
  }
  iVar16 = iStack_1ac;
  ppppuVar24 = (undefined8 ****)local_1c8;
  uVar22 = (uint)uVar23;
  iVar14 = (int)local_1c0;
  if ((int)uVar22 < 2) {
    iVar16 = local_1c0._4_4_;
    local_1c8 = (longlong ***)0x0;
    local_1c0 = 0;
  }
  else {
    iVar21 = iVar19;
    if ((int)local_1c0 != 0) {
      iVar21 = (int)local_1c0 + -1;
    }
    if ((uVar22 != 0) || (iVar14 = 1, iVar21 == 0)) {
      iVar14 = iVar19;
    }
    local_1b8 = (longlong ***)0x0;
    local_1b0 = 0;
    iStack_1ac = 0;
    local_1e8 = (longlong ***)ppppuVar11;
    local_1e0._4_4_ = iVar16;
    if (iVar16 < (int)(iVar21 + iVar14 + uVar22)) {
      local_1e0._0_4_ = uVar22;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1e8);
      uVar23 = (ulonglong)(uint)local_1e0;
    }
    iVar19 = (int)uVar23;
    ppppuVar24 = (undefined8 ****)local_1e8;
    iVar16 = local_1e0._4_4_;
    iVar14 = iVar19;
    if (iVar21 != 0) {
      local_1e0._0_4_ = iVar19 + (uint)(iVar19 == 0) + iVar21;
      if (local_1e0._4_4_ < (int)(uint)local_1e0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,uVar23);
      }
      iVar16 = local_1e0._4_4_;
      iVar14 = (uint)local_1e0;
      ppppuVar24 = (undefined8 ****)local_1e8;
      pvVar20 = (void *)((longlong)local_1e8 + ((longlong)iVar19 - (ulonglong)(iVar19 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar20,local_1c8,(longlong)iVar21 * 2);
      *(undefined2 *)((longlong)pvVar20 + (longlong)iVar21 * 2) = 0;
    }
    local_1e8 = (longlong ***)0x0;
    local_1e0 = 0;
    ppppuVar11 = ppppuVar18;
  }
  puVar6 = local_178;
  ppplVar2 = local_1c8;
  pppplVar17 = (longlong ****)(local_178 + 6);
  local_180 = CONCAT44(iVar16,iVar14);
  local_188 = (longlong ***)ppppuVar24;
  if (pppplVar17 == &local_188) {
    if (ppppuVar24 != (undefined8 ****)0x0) {
      FMemory::Free(ppppuVar24);
    }
  }
  else {
    if (*pppplVar17 != (longlong ***)0x0) {
      FMemory::Free();
    }
    *pppplVar17 = (longlong ***)ppppuVar24;
    *(int *)(puVar6 + 7) = iVar14;
    *(int *)((longlong)puVar6 + 0x3c) = iVar16;
    local_188 = (longlong ***)0x0;
    local_180 = 0;
  }
  if (ppppuVar11 != (undefined8 ****)0x0) {
    FMemory::Free(ppppuVar11);
  }
  if ((undefined8 ****)local_198[0] != (undefined8 ****)0x0) {
    FMemory::Free(local_198[0]);
  }
  if ((undefined8 ****)local_1a8 != (undefined8 ****)0x0) {
    FMemory::Free();
  }
  if ((undefined8 ****)ppplVar2 != (undefined8 ****)0x0) {
    FMemory::Free(ppplVar2);
  }
  local_248 = 0;
  pppplVar7 = (longlong ****)FString::Replace(pppplVar17,local_198,&DAT_145179dd0,&DAT_145179dcc);
  if (pppplVar17 != pppplVar7) {
    if (*pppplVar17 != (longlong ***)0x0) {
      FMemory::Free();
    }
    *pppplVar17 = *pppplVar7;
    *pppplVar7 = (longlong ***)0x0;
    *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(pppplVar7 + 1);
    *(undefined4 *)((longlong)puVar6 + 0x3c) = *(undefined4 *)((longlong)pppplVar7 + 0xc);
    pppplVar7[1] = (longlong ***)0x0;
  }
  if ((undefined8 ****)local_198[0] != (undefined8 ****)0x0) {
    FMemory::Free();
  }
  puVar10 = local_168;
  puVar6 = local_178;
  iVar14 = *(int *)(local_168 + 1);
  *(int *)(local_178 + 1) = iVar14;
  *(undefined4 *)((longlong)local_178 + 0xc) = *(undefined4 *)((longlong)local_168 + 0xc);
  *(undefined4 *)(local_178 + 2) = *(undefined4 *)(local_168 + 2);
  *(undefined4 *)((longlong)local_178 + 0x14) = *(undefined4 *)((longlong)local_168 + 0x14);
  *(undefined4 *)(local_178 + 3) = *(undefined4 *)(local_168 + 3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)iVar14;
  uVar8 = SUB168(ZEXT816(2) * auVar4,0);
  if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  uVar9 = operator_new(uVar8);
  uVar8 = *puVar6;
  *puVar6 = uVar9;
  FMemory::operator_delete(uVar8);
  _guard_xfg_dispatch_icall_nop((void *)*puVar6,(void *)*puVar10,(longlong)*(int *)(puVar6 + 1) * 2)
  ;
  lVar13 = local_170;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_f8,local_170);
  local_78 = (longlong *)0x0;
  local_68 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x60,local_98);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_CopyToEmptyStorage_145189480;
    puVar10[8] = 0;
    *(undefined4 *)(puVar10 + 10) = 0;
    if (local_c8 == (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(puVar10 + 4,local_e8,0x20);
    }
    if (puVar10[8] != 0) {
      FMemory::Free();
    }
    puVar10[8] = local_c8;
    local_c8 = (longlong *)0x0;
    *(int *)(puVar10 + 10) = local_b8;
    local_b8 = 0;
    if (*(int *)(puVar10 + 10) == 0) {
LAB_142723302:
      local_f8[0] = AK::MemoryMgr::StartProfileThreadUsage;
    }
    else {
      plVar12 = (longlong *)puVar10[8];
      if ((longlong *)puVar10[8] == (longlong *)0x0) {
        plVar12 = puVar10 + 4;
      }
      if (plVar12 == (longlong *)0x0) goto LAB_142723302;
      (**(code **)(*plVar12 + 8))();
    }
    puVar10[2] = local_f8[0];
    local_f8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  local_a8 = UE4Function_Private::
             TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::Call;
  if (local_b8 != 0) {
    plVar12 = local_e8;
    if (local_c8 != (longlong *)0x0) {
      plVar12 = local_c8;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free();
  }
  ppppuVar11 = (undefined8 ****)operator_new(0xc0);
  if (ppppuVar11 == (undefined8 ****)0x0) goto LAB_1427233f4;
  local_118 = 0;
  *ppppuVar11 = (undefined8 ***)&PTR_DoThreadedWork_1451892d8;
  local_108 = 0;
  if (local_68 == 0) {
LAB_1427233bd:
    local_148[0] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar12 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar12 = local_78;
    }
    if (plVar12 == (longlong *)0x0) goto LAB_1427233bd;
    plVar12 = (longlong *)(**(code **)*plVar12)(plVar12,local_138);
    (**(code **)(*plVar12 + 8))(plVar12);
    local_148[0] = local_a8;
  }
  Audio::FAsyncSoundWavePCMWriteWorker::FAsyncSoundWavePCMWriteWorker
            (ppppuVar11 + 2,puVar6,3,local_148);
  *(undefined4 *)(ppppuVar11 + 0x14) = 0;
  ppppuVar11[0x15] = (undefined8 ***)0x0;
  ppppuVar11[0x16] = (undefined8 ***)0x0;
  ppppuVar18 = ppppuVar11;
LAB_1427233f4:
  plVar12 = (longlong *)puVar6[9];
  puVar6[9] = ppppuVar18;
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x10))(plVar12,1);
    ppppuVar18 = (undefined8 ****)puVar6[9];
  }
  FUN_14273d370(ppppuVar18,DAT_1468b5010);
  if (local_68 != 0) {
    plVar12 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar12 = local_78;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(int *)(lVar13 + 0x40) != 0) {
    plVar12 = *(longlong **)(lVar13 + 0x30);
    if (*(longlong **)(lVar13 + 0x30) == (longlong *)0x0) {
      plVar12 = (longlong *)(lVar13 + 0x10);
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (*(longlong *)(lVar13 + 0x30) != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1427234f0 FUN_1427234f0 body=1321 status=ok
// SIG undefined FUN_1427234f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_1427234f0(undefined4 *param_1,uint param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_208 [32];
  longlong local_1e8 [3];
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  FUN_14271e120();
  local_1d0 = 0xbf800000;
  local_1e8[2] = 0;
  local_1cc = 0xbf800000;
  local_1c8 = 0xbf800000;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b4 = 0x3f800000;
  local_1b0 = 0;
  local_1a8 = 0xbf800000;
  local_1a4 = 0xbf800000;
  local_1a0 = 0xbf800000;
  local_198 = 0;
  local_190 = 0;
  local_18c = 0x3f800000;
  local_188 = 0;
  local_180 = 0xbf800000;
  local_17c = 0xbf800000;
  local_178 = 0xbf800000;
  local_170 = 0;
  local_168 = 0;
  local_164 = 0x3f800000;
  local_160 = 0;
  local_158 = 0xbf800000;
  local_154 = 0xbf800000;
  local_150 = 0xbf800000;
  local_148 = 0;
  local_140 = 0;
  local_13c = 0x3f800000;
  local_138 = 0;
  local_130 = 0xbf800000;
  local_12c = 0xbf800000;
  local_128 = 0xbf800000;
  local_120 = 0;
  local_118 = 0;
  local_114 = 0x3f800000;
  local_110 = 0;
  local_108 = 0xbf800000;
  local_104 = 0xbf800000;
  local_100 = 0xbf800000;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 0x3f800000;
  local_e8 = 0;
  local_e0 = 0xbf800000;
  local_dc = 0xbf800000;
  local_d8 = 0xbf800000;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0x3f800000;
  local_c0 = 0;
  local_b8 = 0xbf800000;
  local_b4 = 0xbf800000;
  local_b0 = 0xbf800000;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0x3f800000;
  local_98 = 0;
  local_90 = 0xbf800000;
  local_8c = 0xbf800000;
  local_88 = 0xbf800000;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0x3f800000;
  puVar3 = (undefined8 *)FName::FName(local_1e8,"SynthBenchmark",1);
  uVar1 = *puVar3;
  uVar4 = FUN_14168dc80();
  plVar5 = (longlong *)FUN_141690010(uVar4,uVar1);
  (**(code **)(*plVar5 + 0x40))(plVar5,local_1e8 + 2,1,(float)param_2);
  fVar6 = (float)FSynthBenchmarkResults::ComputeCPUPerfIndex(local_1e8 + 2,param_1 + 10);
  fVar6 = fVar6 * param_3;
  fVar7 = (float)FSynthBenchmarkResults::ComputeGPUPerfIndex(local_1e8 + 2,param_1 + 0xe);
  local_1e8[0] = 0;
  fVar7 = fVar7 * param_4;
  local_1e8[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8[0],L"ResolutionQuality",0x24);
  uVar2 = Scalability::ComputeOptionFromPerfIndex(local_1e8,fVar6,fVar7);
  uVar2 = Scalability::GetRenderScaleLevelFromQualityLevel(uVar2,0);
  *param_1 = uVar2;
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  local_1e8[0] = 0;
  local_1e8[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8[0],L"ViewDistanceQuality",0x28);
  uVar2 = Scalability::ComputeOptionFromPerfIndex(local_1e8,fVar6,fVar7);
  param_1[1] = uVar2;
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  local_1e8[0] = 0;
  local_1e8[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8[0],L"AntiAliasingQuality",0x28);
  uVar2 = Scalability::ComputeOptionFromPerfIndex(local_1e8,fVar6,fVar7);
  param_1[2] = uVar2;
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  local_1e8[0] = 0;
  local_1e8[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8[0],L"ShadowQuality",0x1c);
  uVar2 = Scalability::ComputeOptionFromPerfIndex(local_1e8,fVar6,fVar7);
  param_1[3] = uVar2;
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  local_1e8[0] = 0;
  local_1e8[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8[0],L"PostProcessQuality",0x26);
  uVar2 = Scalability::ComputeOptionFromPerfIndex(local_1e8,fVar6,fVar7);
  param_1[4] = uVar2;
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  local_1e8[0] = 0;
  local_1e8[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8[0],L"TextureQuality",0x1e);
  uVar2 = Scalability::ComputeOptionFromPerfIndex(local_1e8,fVar6,fVar7);
  param_1[5] = uVar2;
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  local_1e8[0] = 0;
  local_1e8[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8[0],L"EffectsQuality",0x1e);
  uVar2 = Scalability::ComputeOptionFromPerfIndex(local_1e8,fVar6,fVar7);
  param_1[6] = uVar2;
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  local_1e8[0] = 0;
  local_1e8[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8[0],L"FoliageQuality",0x1e);
  uVar2 = Scalability::ComputeOptionFromPerfIndex(local_1e8,fVar6,fVar7);
  param_1[7] = uVar2;
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 0x12) = local_70;
  param_1[8] = fVar6;
  param_1[9] = fVar7;
  return param_1;
}



// FUNCTION 142723a20 FUN_142723a20 body=250 status=ok
// SIG undefined FUN_142723a20(void)

void FUN_142723a20(longlong param_1,int param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_4 + 0x88;
  if (*(int *)(param_1 + 0x54) == 0) {
    iVar3 = *(int *)(param_4 + 0xb0);
    lVar5 = (longlong)iVar3;
    *(int *)(param_4 + 0xb0) = iVar3 + 1;
    if (*(int *)(param_4 + 0xb4) < iVar3 + 1) {
      TArray<TSharedPtr<FCachedTypefaceData,0>,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
                (lVar1,iVar3);
    }
    lVar4 = *(longlong *)(param_4 + 0xa8);
    if (*(longlong *)(param_4 + 0xa8) == 0) {
      lVar4 = lVar1;
    }
    *(undefined8 **)(lVar4 + lVar5 * 0x10) = &DAT_146ac3d70 + (longlong)param_2 * 9;
    *(undefined4 *)(lVar4 + 8 + lVar5 * 0x10) = 0;
    *(undefined4 *)(lVar4 + 0xc + lVar5 * 0x10) = 0x4080000;
    return;
  }
  *(undefined8 *)(param_4 + 0xd8 + (longlong)param_2 * 8) = *(undefined8 *)(param_1 + 0x40);
  iVar3 = *(int *)(param_4 + 0xb0);
  lVar5 = (longlong)iVar3;
  uVar2 = *(undefined1 *)(param_1 + 0x50);
  *(int *)(param_4 + 0xb0) = iVar3 + 1;
  if (*(int *)(param_4 + 0xb4) < iVar3 + 1) {
    TArray<TSharedPtr<FCachedTypefaceData,0>,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
              (lVar1,iVar3);
  }
  lVar4 = *(longlong *)(param_4 + 0xa8);
  if (*(longlong *)(param_4 + 0xa8) == 0) {
    lVar4 = lVar1;
  }
  *(undefined1 *)(lVar4 + 0xd + lVar5 * 0x10) = uVar2;
  *(longlong *)(lVar4 + lVar5 * 0x10) = param_1;
  *(undefined4 *)(lVar4 + 8 + lVar5 * 0x10) = 0;
  *(undefined1 *)(lVar4 + 0xc + lVar5 * 0x10) = 0;
  *(undefined2 *)(lVar4 + 0xe + lVar5 * 0x10) = 0x408;
  return;
}



// FUNCTION 142723b20 FUN_142723b20 body=178 status=ok
// SIG undefined FUN_142723b20(void)

void FUN_142723b20(int param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_3 + 0xb0);
  lVar5 = (longlong)iVar1;
  uVar4 = 0;
  if (param_4 == 0) {
    uVar4 = 4;
  }
  uVar3 = 6;
  if (param_4 != 0) {
    uVar3 = 4;
  }
  *(int *)(param_3 + 0xb0) = iVar1 + 1;
  if (*(int *)(param_3 + 0xb4) < iVar1 + 1) {
    TArray<TSharedPtr<FCachedTypefaceData,0>,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
              (param_3 + 0x88,iVar1);
  }
  lVar2 = *(longlong *)(param_3 + 0xa8);
  if (*(longlong *)(param_3 + 0xa8) == 0) {
    lVar2 = param_3 + 0x88;
  }
  *(undefined1 *)(lVar2 + 0xd + lVar5 * 0x10) = uVar4;
  *(undefined8 **)(lVar2 + lVar5 * 0x10) = &DAT_146ac3d70 + (longlong)param_1 * 9;
  *(undefined4 *)(lVar2 + 8 + lVar5 * 0x10) = 0;
  *(undefined1 *)(lVar2 + 0xc + lVar5 * 0x10) = 0;
  *(undefined1 *)(lVar2 + 0xe + lVar5 * 0x10) = 8;
  *(undefined1 *)(lVar2 + 0xf + lVar5 * 0x10) = uVar3;
  return;
}



// FUNCTION 142723be0 FUN_142723be0 body=188 status=ok
// SIG undefined FUN_142723be0(void)

void FUN_142723be0(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  
  if (*(int *)(param_1 + 0xd8) <= (int)param_4) {
    param_4 = *(int *)(param_1 + 0xd8) - 1;
  }
  *(uint *)(param_3 + 0xe8) = param_4;
  *(undefined4 *)(param_3 + 0xec) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined8 *)(param_3 + 0xd0) = *(undefined8 *)(param_1 + 0xb8);
  cVar1 = *(char *)(param_1 + 0xe0);
  if ((-1 < (int)param_4) && (uVar2 = *(uint *)(param_1 + 0xd8), param_4 < uVar2)) {
    *(undefined4 *)(param_3 + 0x80) = 0;
    *(longlong *)(param_3 + 0x78) = param_1 + 0x68;
    cVar4 = '\b';
    if (cVar1 == '\0') {
      cVar4 = '\x04';
    }
    *(char *)(param_3 + 0x84) = cVar4 * (char)param_4;
    uVar3 = 2;
    if (cVar1 == '\0') {
      uVar3 = 0xc;
    }
    *(char *)(param_3 + 0x85) = cVar4 * (char)uVar2;
    *(undefined1 *)(param_3 + 0x86) = uVar3;
    *(undefined1 *)(param_3 + 0x87) = 4;
  }
  return;
}



// FUNCTION 142723ca0 FUN_142723ca0 body=405 status=ok
// SIG undefined FUN_142723ca0(void)

void FUN_142723ca0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  
  lVar1 = param_3 + 0x30;
  *(undefined4 *)(param_3 + 0x70) = 0;
  if (*(int *)(param_3 + 0x74) != 0) {
    TArray<FVertexStreamComponent,TFixedAllocator<4>_>::ResizeTo(lVar1,0);
  }
  *(undefined4 *)(param_3 + 0xec) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined8 *)(param_3 + 0xd0) = *(undefined8 *)(param_1 + 0xb8);
  cVar2 = *(char *)(param_1 + 0xe0);
  iVar4 = *(int *)(param_1 + 0xd8);
  uVar9 = 4;
  cVar8 = '\b';
  if (cVar2 == '\0') {
    cVar8 = '\x04';
  }
  cVar7 = cVar8 * (char)iVar4;
  iVar6 = 0;
  if (0 < iVar4 + -1) {
    if (cVar2 == '\0') {
      uVar9 = 0xd;
    }
    do {
      iVar4 = *(int *)(param_3 + 0x70);
      lVar5 = (longlong)iVar4;
      cVar3 = (char)iVar6;
      *(int *)(param_3 + 0x70) = iVar4 + 1;
      if (*(int *)(param_3 + 0x74) < iVar4 + 1) {
        TArray<FVertexStreamComponent,TFixedAllocator<4>_>::ResizeGrow(lVar1,iVar4);
      }
      iVar6 = iVar6 + 2;
      *(longlong *)(lVar1 + lVar5 * 0x10) = param_1 + 0x68;
      *(undefined4 *)(param_3 + 0x38 + lVar5 * 0x10) = 0;
      *(char *)(param_3 + 0x3c + lVar5 * 0x10) = cVar8 * cVar3;
      *(char *)(param_3 + 0x3d + lVar5 * 0x10) = cVar7;
      *(undefined1 *)(param_3 + 0x3e + lVar5 * 0x10) = uVar9;
      *(undefined1 *)(param_3 + 0x3f + lVar5 * 0x10) = 4;
      iVar4 = *(int *)(param_1 + 0xd8);
    } while (iVar6 < iVar4 + -1);
  }
  if (iVar6 < iVar4) {
    iVar4 = *(int *)(param_3 + 0x70);
    lVar5 = (longlong)iVar4;
    uVar9 = 2;
    if (cVar2 == '\0') {
      uVar9 = 0xc;
    }
    *(int *)(param_3 + 0x70) = iVar4 + 1;
    if (*(int *)(param_3 + 0x74) < iVar4 + 1) {
      TArray<FVertexStreamComponent,TFixedAllocator<4>_>::ResizeGrow(lVar1,iVar4);
    }
    *(longlong *)(lVar1 + lVar5 * 0x10) = param_1 + 0x68;
    *(undefined4 *)(param_3 + 0x38 + lVar5 * 0x10) = 0;
    *(char *)(param_3 + 0x3c + lVar5 * 0x10) = cVar8 * (char)iVar6;
    *(char *)(param_3 + 0x3d + lVar5 * 0x10) = cVar7;
    *(undefined1 *)(param_3 + 0x3e + lVar5 * 0x10) = uVar9;
    *(undefined1 *)(param_3 + 0x3f + lVar5 * 0x10) = 4;
  }
  return;
}



// FUNCTION 142723e40 FUN_142723e40 body=126 status=ok
// SIG undefined FUN_142723e40(void)

void FUN_142723e40(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  
  *(undefined8 *)(param_3 + 200) = *(undefined8 *)(param_1 + 0xa8);
  cVar1 = *(char *)(param_1 + 0xe1);
  *(longlong *)(param_3 + 0x10) = param_1 + 0x30;
  bVar5 = cVar1 == '\0';
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined1 *)(param_3 + 0x1c) = 0;
  uVar3 = 8;
  uVar4 = 0x10;
  if (bVar5) {
    uVar4 = uVar3;
  }
  *(undefined1 *)(param_3 + 0x1d) = uVar4;
  uVar2 = 0xe;
  if (bVar5) {
    uVar2 = 5;
  }
  *(undefined1 *)(param_3 + 0x1e) = uVar2;
  if (bVar5) {
    uVar3 = 4;
  }
  *(undefined1 *)(param_3 + 0x1f) = 4;
  *(longlong *)(param_3 + 0x20) = param_1 + 0x30;
  *(undefined4 *)(param_3 + 0x28) = 0;
  *(undefined1 *)(param_3 + 0x2c) = uVar3;
  *(undefined1 *)(param_3 + 0x2d) = uVar4;
  *(undefined1 *)(param_3 + 0x2e) = uVar2;
  *(undefined1 *)(param_3 + 0x2f) = 4;
  return;
}



// FUNCTION 142723ec0 FUN_142723ec0 body=287 status=ok
// SIG undefined FUN_142723ec0(void)

void FUN_142723ec0(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  
  lVar1 = param_3 + 0x30;
  *(undefined4 *)(param_3 + 0x70) = 0;
  if (*(int *)(param_3 + 0x74) != 0) {
    TArray<FVertexStreamComponent,TFixedAllocator<4>_>::ResizeTo(lVar1,0);
  }
  *(undefined4 *)(param_3 + 0xec) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined8 *)(param_3 + 0xd0) = *(undefined8 *)(param_1 + 0xb8);
  uVar2 = *(uint *)(param_1 + 0xd8);
  cVar4 = '\b';
  if (*(char *)(param_1 + 0xe0) == '\0') {
    cVar4 = '\x04';
  }
  uVar8 = uVar2;
  if ((-1 < param_4) && (uVar8 = 4, uVar2 < 5)) {
    uVar8 = uVar2;
  }
  if (uVar8 != 0) {
    uVar7 = 0;
    uVar9 = 2;
    if (*(char *)(param_1 + 0xe0) == '\0') {
      uVar7 = 0;
      uVar9 = 0xc;
    }
    do {
      iVar3 = *(int *)(param_3 + 0x70);
      lVar5 = (longlong)iVar3;
      cVar6 = (char)uVar7;
      *(int *)(param_3 + 0x70) = iVar3 + 1;
      if (*(int *)(param_3 + 0x74) < iVar3 + 1) {
        TArray<FVertexStreamComponent,TFixedAllocator<4>_>::ResizeGrow(lVar1,iVar3);
      }
      uVar7 = uVar7 + 1;
      *(longlong *)(lVar1 + lVar5 * 0x10) = param_1 + 0x68;
      *(undefined4 *)(param_3 + 0x38 + lVar5 * 0x10) = 0;
      *(char *)(param_3 + 0x3c + lVar5 * 0x10) = cVar4 * cVar6;
      *(char *)(param_3 + 0x3d + lVar5 * 0x10) = cVar4 * (char)uVar2;
      *(undefined1 *)(param_3 + 0x3e + lVar5 * 0x10) = uVar9;
      *(undefined1 *)(param_3 + 0x3f + lVar5 * 0x10) = 4;
    } while (uVar7 < uVar8);
  }
  return;
}



// FUNCTION 142723fe0 FUN_142723fe0 body=596 status=ok
// SIG undefined FUN_142723fe0(void)

void FUN_142723fe0(longlong param_1,longlong *param_2,int param_3,int param_4,longlong param_5,
                  short param_6,longlong *param_7)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  void *local_58;
  undefined8 local_50;
  
  for (; param_3 < param_4; param_3 = param_3 + 1) {
    iVar6 = 0;
    lVar8 = (longlong)param_3 * 0x20 + *(longlong *)(param_1 + 0x20);
    if (*(char *)(lVar8 + 0x1c) == '\0') {
      plVar9 = (longlong *)(*(int *)(lVar8 + 0xc) + param_5);
      local_58 = (void *)0x0;
      local_50 = 0;
      uVar1 = *(ushort *)(lVar8 + 8);
      lVar7 = *(longlong *)(*param_2 + -8 + (ulonglong)*(ushort *)(lVar8 + 0x14) * 0x10);
      iVar4 = *(int *)(lVar7 + 8);
      iVar5 = iVar6;
      if (0 < (int)plVar9[1]) {
        do {
          FUN_142723fe0(param_1,lVar7,param_3 + 1,uVar1 - 1,
                        (longlong)(int)((uint)*(ushort *)(lVar8 + 10) * iVar6) + *plVar9,iVar5,
                        &local_58);
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + iVar4;
        } while (iVar6 < (int)plVar9[1]);
        if ((int)local_50 != 0) {
          lVar7 = param_7[1];
          sVar2 = *(short *)(lVar8 + 0x14);
          iVar6 = (int)lVar7 + 1;
          *(int *)(param_7 + 1) = iVar6;
          if (*(int *)((longlong)param_7 + 0xc) < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_7);
          }
          *(short *)(*param_7 + (longlong)(int)lVar7 * 2) = sVar2 + param_6;
          lVar7 = param_7[1];
          uVar3 = (undefined2)local_50;
          iVar6 = (int)lVar7 + 1;
          *(int *)(param_7 + 1) = iVar6;
          if (*(int *)((longlong)param_7 + 0xc) < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_7);
          }
          *(undefined2 *)(*param_7 + (longlong)(int)lVar7 * 2) = uVar3;
          iVar6 = (int)local_50;
          lVar7 = (longlong)(int)local_50;
          if ((int)local_50 != 0) {
            iVar4 = (int)param_7[1];
            if (*(int *)((longlong)param_7 + 0xc) < iVar4 + (int)local_50) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_7);
              iVar4 = (int)param_7[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_7 + (longlong)iVar4 * 2),local_58,lVar7 * 2);
            *(int *)(param_7 + 1) = (int)param_7[1] + iVar6;
          }
          lVar7 = param_7[1];
          iVar6 = (int)lVar7 + 1;
          *(int *)(param_7 + 1) = iVar6;
          if (*(int *)((longlong)param_7 + 0xc) < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_7);
          }
          *(undefined2 *)(*param_7 + (longlong)(int)lVar7 * 2) = 0;
        }
      }
      param_3 = *(ushort *)(lVar8 + 8) - 1;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
    }
    else {
      sVar2 = *(short *)(lVar8 + 0x14);
      iVar6 = (int)param_7[1];
      *(int *)(param_7 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_7 + 0xc) < iVar6 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_7,iVar6);
      }
      *(short *)(*param_7 + (longlong)iVar6 * 2) = sVar2 + param_6;
    }
  }
  return;
}



// FUNCTION 142724240 BuildConditionMap body=292 status=ok
// SIG undefined BuildConditionMap(void)

ulonglong * FRepState::BuildConditionMap(ulonglong *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  *param_1 = 0;
  uVar1 = *param_2;
  uVar5 = uVar1 >> 4;
  uVar4 = uVar1 >> 2;
  uVar2 = (ulonglong)((byte)(uVar1 >> 1) & 1) * 2 + 1;
  uVar3 = uVar2 | 8;
  if ((uVar1 & 1) != 0) {
    uVar3 = uVar2 | 4;
  }
  uVar2 = uVar3;
  if (((uVar4 & 1) != 0) && (uVar2 = uVar3 | 0x10, (uVar5 & 1) == 0)) {
    uVar2 = uVar3 | 0x810;
  }
  uVar3 = uVar2;
  if (((uVar4 & 1) == 0) && (uVar3 = uVar2 | 0x20, (uVar1 >> 3 & 1) == 0)) {
    uVar2 = uVar2 | 0x20;
  }
  else if ((((uVar4 & 1) == 0) && ((uVar1 >> 3 & 1) == 0)) || ((uVar5 & 1) != 0)) {
    uVar2 = uVar3 | 0x40;
  }
  else {
    uVar2 = uVar3 | 0x1040;
  }
  if (((uVar1 >> 1 & 1) != 0) || ((uVar1 & 1) != 0)) {
    uVar2 = uVar2 | 0x80;
  }
  if ((((uVar5 & 1) != 0) || (uVar3 = uVar2, (uVar1 & 1) != 0)) &&
     (uVar3 = uVar2 | 0x200, (uVar5 & 1) != 0)) {
    *param_1 = uVar2 | 0x700;
    return param_1;
  }
  *param_1 = uVar3 | 0x2100;
  return param_1;
}



// FUNCTION 142724370 FUN_142724370 body=317 status=ok
// SIG undefined FUN_142724370(void)

void FUN_142724370(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_38 [2];
  
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    puVar5 = (undefined8 *)0x0;
    iVar1 = (int)param_4[1];
    lVar6 = (longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x20);
    *(int *)(param_4 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_4 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar1);
    }
    lVar2 = *param_4;
    lVar7 = (longlong)iVar1 * 0x10;
    *(int *)(lVar7 + lVar2) = param_2;
    *(undefined8 *)(lVar7 + 8 + lVar2) = 0;
    if (*(char *)(lVar6 + 0x1c) == '\0') {
      puVar3 = (undefined8 *)operator_new(0x10);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar5 = puVar3;
      }
      plVar4 = (longlong *)(*param_4 + 8 + lVar7);
      if (plVar4 == local_38) {
        if (puVar5 != (undefined8 *)0x0) {
          TArray<FHandleToCmdIndex,FDefaultAllocator>::~TArray<FHandleToCmdIndex,FDefaultAllocator>
                    (puVar5);
          FMemory::operator_delete(puVar5,0x10);
        }
      }
      else {
        lVar2 = *plVar4;
        *plVar4 = (longlong)puVar5;
        if (lVar2 != 0) {
          TArray<FHandleToCmdIndex,FDefaultAllocator>::~TArray<FHandleToCmdIndex,FDefaultAllocator>
                    (lVar2);
          FMemory::operator_delete(lVar2,0x10);
        }
      }
      FUN_142724370(param_1,param_2 + 1,*(ushort *)(lVar6 + 8) - 1,
                    *(undefined8 *)(lVar7 + 8 + *param_4));
      param_2 = *(ushort *)(lVar6 + 8) - 1;
    }
  }
  return;
}



// FUNCTION 1427244b0 FUN_1427244b0 body=399 status=ok
// SIG undefined FUN_1427244b0(void)

void FUN_1427244b0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (((*(int *)(param_1 + 0x98) != 0) && (DAT_146534b60 != 0)) &&
     (*(char *)(param_1 + 0x70) == '\0')) {
    TBitArray<FDefaultBitArrayAllocator>::Init(param_1 + 0x78,0,*(undefined4 *)(param_1 + 0x18));
    uVar10 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      uVar8 = 1;
      uVar11 = uVar10;
      do {
        lVar7 = *(longlong *)(uVar11 + *(longlong *)(param_1 + 0x10));
        iVar9 = (int)uVar10;
        if ((*(uint *)(lVar7 + 0x38) >> 8 & 1) == 0) {
          if (lVar7 == 0) {
LAB_142724581:
            plVar2 = *(longlong **)(uVar11 + *(longlong *)(param_1 + 0x10));
            cVar4 = (**(code **)(*plVar2 + 0x2b8))
                              (plVar2,(longlong)*(int *)((longlong)plVar2 + 0x44) +
                                      *(int *)(uVar11 + 0x10 + *(longlong *)(param_1 + 0x10)) *
                                      *(int *)((longlong)plVar2 + 0x34) + param_2,0,0);
            if (cVar4 != '\0') goto LAB_142724601;
          }
          else {
            lVar6 = UBoolProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_142724581;
          }
          lVar7 = *(longlong *)(param_1 + 0x88);
          if (*(longlong *)(param_1 + 0x88) == 0) {
            lVar7 = param_1 + 0x78;
          }
          iVar5 = iVar9;
          if (iVar9 < 0) {
            iVar5 = iVar9 + 0x1f;
          }
          puVar1 = (uint *)(lVar7 + (longlong)(iVar5 >> 5) * 4);
          *puVar1 = *puVar1 | uVar8;
          FUN_142724640(param_1,*(undefined2 *)(uVar11 + 0x18 + *(longlong *)(param_1 + 0x10)),
                        *(undefined2 *)(uVar11 + 0x1a + *(longlong *)(param_1 + 0x10)),param_2,0,0,
                        param_1 + 0x58);
        }
LAB_142724601:
        uVar10 = (ulonglong)(iVar9 + 1U);
        uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
        uVar11 = uVar11 + 0x30;
      } while ((int)(iVar9 + 1U) < *(int *)(param_1 + 0x18));
    }
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return;
}



// FUNCTION 142724640 FUN_142724640 body=551 status=ok
// SIG undefined FUN_142724640(void)

void FUN_142724640(longlong param_1,int param_2,int param_3,longlong param_4,int param_5,int param_6
                  ,longlong *param_7)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  undefined8 *puVar6;
  
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    iVar4 = 0;
    puVar6 = (undefined8 *)((longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x20));
    if (*(char *)((longlong)puVar6 + 0x1c) == '\0') {
      iVar2 = *(int *)((longlong)*(int *)((longlong)puVar6 + 0xc) + 8 + param_4);
      if (((iVar2 <= DAT_146534b68) &&
          ((int)((uint)*(ushort *)((longlong)puVar6 + 10) * iVar2) <= DAT_146534b6c)) &&
         (lVar3 = *(longlong *)(*(int *)((longlong)puVar6 + 0xc) + param_4), 0 < iVar2)) {
        do {
          FUN_142724640(param_1,param_2 + 1,*(ushort *)(puVar6 + 1) - 1,
                        (int)((uint)*(ushort *)((longlong)puVar6 + 10) * iVar4) + lVar3,iVar4,
                        param_6 + 1,param_7);
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
      }
      param_2 = *(ushort *)(puVar6 + 1) - 1;
    }
    else if (((*(uint *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x10) +
                          (ulonglong)*(ushort *)((longlong)puVar6 + 0x16) * 0x30) + 0x38) >> 8 & 1)
              == 0) && ((*(byte *)((longlong)puVar6 + 0x1d) & 1) != 0)) {
      iVar4 = *(int *)((longlong)puVar6 + 0xc);
      lVar3 = param_7[1];
      iVar2 = (int)lVar3 + 1;
      *(int *)(param_7 + 1) = iVar2;
      if (*(int *)((longlong)param_7 + 0xc) < iVar2) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_7);
      }
      lVar1 = *param_7;
      lVar3 = (longlong)(int)lVar3 * 0x20;
      *(undefined8 *)(lVar3 + lVar1) = 0;
      *(undefined8 *)(lVar3 + 8 + lVar1) = 0;
      *(undefined8 *)(lVar3 + 0x10 + lVar1) = 0;
      *(undefined8 *)(lVar3 + 0x18 + lVar1) = 0;
      piVar5 = (int *)(*param_7 + lVar3);
      *piVar5 = param_2;
      piVar5[1] = param_5;
      piVar5[2] = param_6;
      piVar5[3] = iVar4 + (int)param_4;
      piVar5[4] = *(int *)(param_7[2] + 0xa0);
      piVar5[6] = *(int *)(param_7[2] + 0xa0);
      (**(code **)(*(longlong *)*puVar6 + 0x2c8))
                ((longlong *)*puVar6,param_7[2],0,param_4 + iVar4,0);
      piVar5[7] = *(int *)(param_7[2] + 0xa0) - piVar5[6];
      piVar5[5] = *(int *)(param_7[2] + 0xa0) - piVar5[4];
    }
  }
  return;
}



// FUNCTION 142724870 FUN_142724870 body=483 status=ok
// SIG undefined FUN_142724870(void)

void FUN_142724870(longlong param_1,longlong *param_2,longlong param_3,undefined1 param_4,
                  undefined1 param_5,int param_6,undefined8 param_7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined8 *local_78;
  longlong *local_70;
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  
  cVar6 = FRepHandleIterator::NextHandle(param_2);
  if (cVar6 != '\0') {
    do {
      iVar2 = (int)param_2[6];
      lVar7 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x20);
      puVar8 = (undefined8 *)((longlong)(int)param_2[7] + *(int *)(lVar7 + 0xc) + param_3);
      if (*(char *)(lVar7 + 0x1c) == '\0') {
        uVar5 = *puVar8;
        iVar3 = *(int *)(*param_2 + 8);
        *(int *)(*param_2 + 8) = iVar3 + 1;
        local_78 = (undefined8 *)*param_2;
        iVar4 = *(int *)(local_78 + 1);
        uVar1 = *(ushort *)(*(longlong *)*local_78 + (longlong)iVar3 * 2);
        local_68 = *(longlong *)
                    (*(longlong *)param_2[2] + -8 + (ulonglong)*(ushort *)(lVar7 + 0x14) * 0x10);
        local_60 = *(undefined4 *)(local_68 + 8);
        local_5c = (uint)*(ushort *)(lVar7 + 10);
        local_58 = *(undefined4 *)(puVar8 + 1);
        local_54 = iVar2 + 1;
        local_50 = *(ushort *)(lVar7 + 8) - 1;
        local_70 = (longlong *)(param_1 + 0x20);
        FUN_142724870(param_1,&local_78,uVar5,param_4,param_5,param_6 + 1,param_7);
        *(uint *)(*param_2 + 8) = iVar4 + (uint)uVar1;
        *(int *)(*param_2 + 8) = *(int *)(*param_2 + 8) + 1;
      }
      else if ((*(byte *)(lVar7 + 0x1d) & 1) != 0) {
        local_84 = *(undefined4 *)((longlong)param_2 + 0x34);
        local_80 = param_6;
        local_7c = SUB84(puVar8,0);
        local_88 = iVar2;
        FUN_14273ef00(param_7,lVar7,&local_88,iVar2,*(undefined2 *)((longlong)param_2 + 0x2c),puVar8
                      ,param_4,param_5);
      }
      cVar6 = FRepHandleIterator::NextHandle(param_2);
    } while (cVar6 != '\0');
  }
  return;
}



// FUNCTION 142724a60 FUN_142724a60 body=701 status=ok
// SIG undefined FUN_142724a60(void)

void FUN_142724a60(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 1;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1),(longlong)*(int *)((longlong)param_1 + 0xc));
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1),(longlong)*(int *)((longlong)param_1 + 0xc));
    local_res18[0] = 0;
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      local_res18[0] = *(int *)(param_1 + 1);
    }
    plVar1 = (longlong *)param_2[1];
    if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res18,4);
      }
    }
    else {
      local_res18[0] = *(int *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if (-1 < (char)*(byte *)(param_2 + 5)) {
      if ((-1 < local_res18[0]) &&
         (((*(byte *)((longlong)param_2 + 0x2b) & 8) == 0 || (local_res18[0] < 0x1000001)))) {
        *(int *)(param_1 + 1) = local_res18[0];
        if (((local_res18[0] != 0) || (iVar3 = 0, *(int *)((longlong)param_1 + 0xc) != 0)) &&
           (iVar3 = local_res18[0], (*(byte *)(param_2 + 5) & 1) != 0)) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy
                    (param_1,local_res18[0],*(undefined4 *)((longlong)param_1 + 0xc));
          iVar3 = *(int *)(param_1 + 1);
        }
        (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)iVar3);
        return;
      }
    }
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
  }
  return;
}



// FUNCTION 142724d20 FUN_142724d20 body=511 status=ok
// SIG undefined FUN_142724d20(void)

void FUN_142724d20(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0x10;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1) << 4,
               (longlong)*(int *)((longlong)param_1 + 0xc) << 4);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_14271f290(param_2,param_1);
  }
  return;
}


