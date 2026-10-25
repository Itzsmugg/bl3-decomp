// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14162d2d0 FUN_14162d2d0 body=373 status=ok
// SIG undefined FUN_14162d2d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14162d2d0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined1 local_18 [16];
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_141594550(param_2,&local_28,&DAT_144cb6b24,1);
  if ((int)local_20 == 3) {
    local_58 = _DAT_1468b5d90;
    local_50 = DAT_1468b5d98;
    cVar4 = FUN_141655a70(local_28,&local_58);
    if (cVar4 != '\0') {
      local_38 = DAT_1468b5da0;
      local_30 = DAT_1468b5da8;
      cVar4 = FDefaultValueHelper::ParseRotator(local_28 + 2,&local_38);
      if (cVar4 != '\0') {
        local_48 = DAT_1464aa788;
        local_40 = DAT_1464aa790;
        cVar4 = FUN_141655a70(local_28 + 4,&local_48);
        if (cVar4 != '\0') {
          puVar5 = (undefined8 *)FRotator::Quaternion(&local_38,local_18);
          uVar7 = 1;
          uVar3 = puVar5[1];
          *param_1 = *puVar5;
          param_1[1] = uVar3;
          auVar1._8_4_ = local_50;
          auVar1._0_8_ = local_58;
          auVar1._12_4_ = 0;
          *(undefined1 (*) [16])(param_1 + 2) = auVar1;
          auVar2._8_4_ = local_40;
          auVar2._0_8_ = local_48;
          auVar2._12_4_ = 0;
          *(undefined1 (*) [16])(param_1 + 4) = auVar2;
          goto LAB_14162d3f1;
        }
      }
    }
  }
  uVar7 = 0;
LAB_14162d3f1:
  plVar6 = local_28;
  for (iVar8 = (int)local_20; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return uVar7;
}



// FUNCTION 14162d450 FUN_14162d450 body=646 status=ok
// SIG undefined FUN_14162d450(void)

undefined8 FUN_14162d450(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar14 = 0.07957747;
  fVar13 = 1.4142135;
  uVar6 = 0;
  lVar3 = 3;
  uVar7 = uVar6;
  uVar9 = uVar6;
  do {
    uVar4 = (uint)uVar6;
    uVar8 = (uint)uVar9;
    *(uint *)((longlong)&DAT_1468b5a28 + uVar7) = uVar8;
    *(uint *)((longlong)&DAT_1468b5a50 + uVar7) = uVar4;
    iVar10 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
    iVar2 = uVar8 - iVar10;
    if (iVar2 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = Factorial(iVar2 + -1);
      iVar1 = iVar1 * iVar2;
    }
    iVar10 = iVar10 + uVar8;
    if (iVar10 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = Factorial(iVar10 + -1);
      iVar2 = iVar2 * iVar10;
    }
    fVar12 = SQRT((float)(int)(uVar8 * 2 + 1) * fVar14 * ((float)iVar1 / (float)iVar2));
    *(float *)((longlong)&DAT_1468b5a00 + uVar7) = fVar12;
    if (uVar4 != 0) {
      *(float *)((longlong)&DAT_1468b5a00 + uVar7) = fVar12 * fVar13;
    }
    uVar4 = uVar4 + 1;
    uVar5 = uVar4;
    if ((int)uVar8 < (int)uVar4) {
      uVar5 = ~uVar8;
    }
    *(uint *)((longlong)&DAT_1468b5a54 + uVar7) = uVar5;
    uVar11 = uVar8 + 1;
    if ((int)uVar4 <= (int)uVar8) {
      uVar11 = uVar8;
    }
    *(uint *)((longlong)&DAT_1468b5a2c + uVar7) = uVar11;
    iVar2 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
    iVar10 = uVar11 - iVar2;
    if (iVar10 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = Factorial(iVar10 + -1);
      iVar1 = iVar1 * iVar10;
    }
    iVar2 = uVar11 + iVar2;
    if (iVar2 == 0) {
      iVar10 = 1;
    }
    else {
      iVar10 = Factorial(iVar2 + -1);
      iVar10 = iVar10 * iVar2;
    }
    fVar12 = SQRT((float)(int)(uVar11 * 2 + 1) * fVar14 * ((float)iVar1 / (float)iVar10));
    *(float *)((longlong)&DAT_1468b5a04 + uVar7) = fVar12;
    if (uVar5 != 0) {
      *(float *)((longlong)&DAT_1468b5a04 + uVar7) = fVar12 * fVar13;
    }
    uVar5 = uVar5 + 1;
    uVar4 = uVar5;
    if ((int)uVar11 < (int)uVar5) {
      uVar4 = ~uVar11;
    }
    *(uint *)((longlong)&DAT_1468b5a58 + uVar7) = uVar4;
    uVar8 = uVar11 + 1;
    if ((int)uVar5 <= (int)uVar11) {
      uVar8 = uVar11;
    }
    *(uint *)((longlong)&DAT_1468b5a30 + uVar7) = uVar8;
    iVar2 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
    iVar10 = uVar8 - iVar2;
    if (iVar10 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = Factorial(iVar10 + -1);
      iVar1 = iVar1 * iVar10;
    }
    iVar2 = uVar8 + iVar2;
    if (iVar2 == 0) {
      iVar10 = 1;
    }
    else {
      iVar10 = Factorial(iVar2 + -1);
      iVar10 = iVar10 * iVar2;
    }
    fVar12 = SQRT((float)(int)(uVar8 * 2 + 1) * fVar14 * ((float)iVar1 / (float)iVar10));
    *(float *)((longlong)&DAT_1468b5a08 + uVar7) = fVar12;
    if (uVar4 != 0) {
      *(float *)((longlong)&DAT_1468b5a08 + uVar7) = fVar12 * fVar13;
    }
    uVar4 = uVar4 + 1;
    uVar5 = uVar4;
    if ((int)uVar8 < (int)uVar4) {
      uVar5 = ~uVar8;
    }
    uVar6 = (ulonglong)uVar5;
    uVar7 = uVar7 + 0xc;
    uVar5 = uVar8 + 1;
    if ((int)uVar4 <= (int)uVar8) {
      uVar5 = uVar8;
    }
    uVar9 = (ulonglong)uVar5;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return 0;
}



// FUNCTION 14162d6e0 InitializeColor body=216 status=ok
// SIG undefined InitializeColor(void)

void FColorList::InitializeColor(longlong param_1,short *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res18 [2];
  longlong local_38;
  ulonglong local_30;
  longlong *local_28;
  undefined8 *local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_res18[0] = param_3;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_30 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar2 * 2);
  }
  local_28 = &local_38;
  local_20 = local_res18;
  FUN_14056ac70(param_1 + 8,local_res8,&local_28,0);
  if (local_38 != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = local_res18[0];
  *param_4 = *param_4 + 1;
  return;
}



// FUNCTION 14162d7c0 IsEngineInstalled body=497 status=ok
// SIG undefined IsEngineInstalled(void)

undefined8 FApp::IsEngineInstalled(void)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  bool bVar8;
  byte bVar9;
  undefined2 *local_38;
  int local_30;
  int local_2c;
  undefined2 *local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  uVar3 = (ulonglong)DAT_1464aaa34;
  if (DAT_1464aaa34 == 0xffffffff) {
    if (DAT_1464aaa30 == 0xffffffff) {
      puVar4 = (undefined8 *)FPaths::RootDir(local_18);
      iVar1 = *(int *)(puVar4 + 1);
      local_38 = (undefined2 *)*puVar4;
      *puVar4 = 0;
      local_30 = *(int *)(puVar4 + 1);
      local_2c = *(int *)((longlong)puVar4 + 0xc);
      puVar4[1] = 0;
      if (local_2c < (int)((0x28 - (uint)(iVar1 != 0)) + local_30)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
      }
      FString::PathAppend(&local_38,L"Engine/Build/InstalledProjectBuild.txt",0x26);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      FPaths::NormalizeFilename(&local_38);
      plVar5 = (longlong *)FUN_1415c3d50();
      puVar7 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar7 = local_38;
      }
      (**(code **)(*plVar5 + 0x48))(plVar5,puVar7);
      uVar6 = FCommandLine::Get();
      cVar2 = FParse::Param(uVar6,L"NotInstalled");
      DAT_1464aaa30 = (uint)(cVar2 == '\0');
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free(local_38);
      }
    }
    bVar8 = DAT_1464aaa30 != 1;
    puVar4 = (undefined8 *)FPaths::RootDir(local_18);
    iVar1 = *(int *)(puVar4 + 1);
    local_28 = (undefined2 *)*puVar4;
    *puVar4 = 0;
    local_20 = *(int *)(puVar4 + 1);
    local_1c = *(int *)((longlong)puVar4 + 0xc);
    puVar4[1] = 0;
    if (local_1c < (int)((0x21 - (uint)(iVar1 != 0)) + local_20)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    }
    FString::PathAppend(&local_28,L"Engine/Build/InstalledBuild.txt",0x1f);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    FPaths::NormalizeFilename(&local_28);
    plVar5 = (longlong *)FUN_1415c3d50();
    puVar7 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar7 = local_28;
    }
    cVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,puVar7);
    uVar6 = FCommandLine::Get();
    if (cVar2 == '\0' && bVar8) {
      bVar9 = FParse::Param(uVar6,L"InstalledEngine");
    }
    else {
      cVar2 = FParse::Param(uVar6,L"NotInstalledEngine");
      bVar9 = cVar2 == '\0';
    }
    uVar3 = (ulonglong)bVar9;
    DAT_1464aaa34 = (uint)bVar9;
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
      uVar3 = (ulonglong)DAT_1464aaa34;
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),(int)uVar3 == 1);
}



// FUNCTION 14162d9c0 FUN_14162d9c0 body=11 status=ok
// SIG undefined FUN_14162d9c0(void)

bool FUN_14162d9c0(void)

{
  return 0 < DAT_1468b5a98;
}



// FUNCTION 14162d9d0 IsInstalled body=236 status=ok
// SIG undefined IsInstalled(void)

bool FApp::IsInstalled(void)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined2 *local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  if (DAT_1464aaa30 == 0xffffffff) {
    puVar4 = (undefined8 *)FPaths::RootDir(local_18);
    iVar1 = *(int *)(puVar4 + 1);
    local_28 = (undefined2 *)*puVar4;
    *puVar4 = 0;
    local_20 = *(int *)(puVar4 + 1);
    local_1c = *(int *)((longlong)puVar4 + 0xc);
    puVar4[1] = 0;
    if (local_1c < (int)((0x28 - (uint)(iVar1 != 0)) + local_20)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    }
    FString::PathAppend(&local_28,L"Engine/Build/InstalledProjectBuild.txt",0x26);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    FPaths::NormalizeFilename(&local_28);
    plVar5 = (longlong *)FUN_1415c3d50();
    puVar6 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar6 = local_28;
    }
    (**(code **)(*plVar5 + 0x48))(plVar5,puVar6);
    uVar2 = FCommandLine::Get();
    cVar3 = FParse::Param(uVar2,L"NotInstalled");
    DAT_1464aaa30 = (uint)(cVar3 == '\0');
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return DAT_1464aaa30 == 1;
}



// FUNCTION 14162dac0 LerpUsingHSV body=613 status=ok
// SIG undefined LerpUsingHSV(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FLinearColor::LerpUsingHSV(float *param_1,longlong param_2,longlong param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_d8 [32];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8 [4];
  uint local_98 [20];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  LinearRGBToHSV(param_2,&local_b8);
  LinearRGBToHSV(param_3,local_a8);
  if (180.0 < ABS(local_b8 - local_a8[0])) {
    if (local_a8[0] <= local_b8) {
      local_a8[0] = local_a8[0] + 360.0;
    }
    else {
      local_b8 = local_b8 + 360.0;
    }
  }
  local_b8 = (local_a8[0] - local_b8) * param_4 + local_b8;
  fVar4 = (float)(int)(local_b8 * 0.0027777778) * 360.0;
  if (ABS(local_b8) < ABS(fVar4)) {
    fVar4 = local_b8;
  }
  fVar4 = local_b8 - fVar4;
  if (fVar4 < 0.0) {
    fVar4 = fVar4 + 360.0;
  }
  fVar4 = fVar4 * 0.016666668;
  iVar2 = (int)fVar4;
  local_b4 = (local_a8[1] - local_b4) * param_4 + local_b4;
  local_a8[0] = (local_a8[2] - local_b0) * param_4 + local_b0;
  fVar5 = fVar4;
  if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar4)) {
    auVar6._4_4_ = fVar4;
    auVar6._0_4_ = fVar4;
    auVar6._8_8_ = 0;
    uVar1 = movmskps((int)(local_b8 * 0.0027777778),auVar6);
    fVar5 = (float)(int)(iVar2 - (uVar1 & 1));
  }
  param_1[3] = 1.0;
  local_98[0] = 0;
  local_98[0xf] = 0;
  local_98[1] = 3;
  local_98[2] = 1;
  local_98[3] = 2;
  local_98[4] = 0;
  local_98[5] = 1;
  local_98[6] = 1;
  local_98[7] = 0;
  local_98[8] = 3;
  local_98[9] = 1;
  local_98[10] = 2;
  local_98[0xb] = 0;
  local_a8[1] = (1.0 - local_b4) * local_a8[0];
  local_98[0xc] = 3;
  local_98[0xd] = 1;
  local_98[0xe] = 0;
  local_98[0x10] = 1;
  local_98[0x11] = 2;
  uVar3 = (ulonglong)(uint)((int)(longlong)fVar5 + (int)(((longlong)fVar5 & 0xffffffffU) / 6) * -6);
  local_a8[2] = (1.0 - local_b4 * (fVar4 - fVar5)) * local_a8[0];
  local_a8[3] = (1.0 - (1.0 - (fVar4 - fVar5)) * local_b4) * local_a8[0];
  uVar1 = local_98[uVar3 * 3 + 1];
  *param_1 = local_a8[local_98[uVar3 * 3]];
  param_1[1] = local_a8[uVar1];
  param_1[2] = local_a8[local_98[uVar3 * 3 + 2]];
  param_1[3] = (*(float *)(param_3 + 0xc) - *(float *)(param_2 + 0xc)) * param_4 +
               *(float *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 14162dd30 LineExtentBoxIntersection body=903 status=ok
// SIG undefined LineExtentBoxIntersection(void)

undefined8
FMath::LineExtentBoxIntersection
          (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
          ulonglong *param_6,float *param_7)

{
  bool bVar1;
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
  uint local_res8;
  uint local_res10;
  undefined4 local_d0;
  float fStack_b4;
  
  bVar1 = true;
  fVar10 = param_4[1] + (float)*(undefined8 *)(param_1 + 4);
  fVar11 = param_1[1] - param_4[1];
  local_d0 = 0x3f800000;
  fVar3 = param_2[2];
  fVar13 = *param_1 - *param_4;
  fVar9 = param_1[2] - param_4[2];
  fVar6 = param_3[2] - fVar3;
  fVar5 = *param_2;
  fStack_b4 = (float)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar8 = *param_3 - fVar5;
  fStack_b4 = fStack_b4 + param_4[2];
  fVar12 = *param_4 + param_1[3];
  fVar4 = param_2[1];
  local_res10 = 0x3f800000;
  fVar7 = param_3[1] - fVar4;
  local_res8 = 0x3f800000;
  if (fVar13 <= fVar5) {
    if (fVar5 <= fVar12) {
      fVar5 = 0.0;
    }
    else {
      if (0.0 <= fVar8) {
        return 0;
      }
      bVar1 = false;
      fVar5 = (fVar12 - fVar5) / fVar8;
    }
  }
  else {
    if (fVar8 <= 0.0) {
      return 0;
    }
    local_res10 = 0xbf800000;
    bVar1 = false;
    fVar5 = (fVar13 - fVar5) / fVar8;
  }
  if (fVar11 <= fVar4) {
    if (fVar4 <= fVar10) {
      fVar4 = 0.0;
    }
    else {
      if (0.0 <= fVar7) {
        return 0;
      }
      bVar1 = false;
      fVar4 = (fVar10 - fVar4) / fVar7;
    }
  }
  else {
    if (fVar7 <= 0.0) {
      return 0;
    }
    local_res8 = 0xbf800000;
    bVar1 = false;
    fVar4 = (fVar11 - fVar4) / fVar7;
  }
  if (fVar9 <= fVar3) {
    if (fVar3 <= fStack_b4) {
      fVar3 = 0.0;
      if (bVar1) {
        *(undefined8 *)param_5 = *(undefined8 *)param_2;
        param_5[2] = param_2[2];
        *param_6 = 0;
        *(undefined4 *)(param_6 + 1) = 0x3f800000;
        *param_7 = 0.0;
        return 1;
      }
      goto LAB_14162dedf;
    }
    fVar2 = fStack_b4;
    if (0.0 <= fVar6) {
      return 0;
    }
  }
  else {
    if (fVar6 <= 0.0) {
      return 0;
    }
    local_d0 = 0xbf800000;
    fVar2 = fVar9;
  }
  fVar3 = (fVar2 - fVar3) / fVar6;
LAB_14162dedf:
  if (fVar4 <= fVar3) {
    *param_7 = fVar3;
    local_res8 = 0;
  }
  else {
    *param_7 = fVar4;
    local_d0 = 0;
  }
  *param_6 = (ulonglong)local_res8 << 0x20;
  *(undefined4 *)(param_6 + 1) = local_d0;
  fVar3 = *param_7;
  if (fVar3 < fVar5) {
    *param_7 = fVar5;
    *param_6 = (ulonglong)local_res10;
    *(undefined4 *)(param_6 + 1) = 0;
    fVar3 = *param_7;
  }
  if ((0.0 <= fVar3) && (fVar3 <= 1.0)) {
    fVar5 = param_2[2];
    *(ulonglong *)param_5 = CONCAT44(fVar7 * fVar3 + param_2[1],fVar8 * fVar3 + *param_2);
    param_5[2] = fVar6 * fVar3 + fVar5;
    if (((fVar13 - 0.1 < *param_5) &&
        (((*param_5 < fVar12 + 0.1 && (fVar11 - 0.1 < param_5[1])) && (param_5[1] < fVar10 + 0.1))))
       && ((fVar9 - 0.1 < param_5[2] && (param_5[2] < fStack_b4 + 0.1)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14162e0c0 LinearRGBToHSV body=281 status=ok
// SIG undefined LinearRGBToHSV(void)

float * FLinearColor::LinearRGBToHSV(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = *param_1;
  fVar5 = 0.0;
  fVar7 = param_1[1];
  fVar1 = param_1[2];
  fVar4 = fVar3;
  if (fVar3 <= fVar7) {
    fVar4 = fVar7;
  }
  fVar2 = fVar3;
  if (fVar7 <= fVar3) {
    fVar2 = fVar7;
  }
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  fVar6 = fVar4 - fVar2;
  if (fVar4 != fVar2) {
    if (fVar4 == fVar3) {
      fVar3 = ((fVar7 - fVar1) / fVar6) * 60.0 + 360.0;
      fVar7 = (float)(int)(fVar3 * 0.0027777778) * 360.0;
      if (ABS(fVar3) < ABS(fVar7)) {
        fVar7 = fVar3;
      }
      fVar3 = fVar3 - fVar7;
      goto LAB_14162e1ac;
    }
    if (fVar4 == fVar7) {
      fVar3 = ((fVar1 - fVar3) / fVar6) * 60.0 + 120.0;
      goto LAB_14162e1ac;
    }
    if (fVar4 == fVar1) {
      fVar3 = ((fVar3 - fVar7) / fVar6) * 60.0 + 240.0;
      goto LAB_14162e1ac;
    }
  }
  fVar3 = 0.0;
LAB_14162e1ac:
  if (fVar4 != 0.0) {
    fVar5 = fVar6 / fVar4;
  }
  param_2[3] = param_1[3];
  *param_2 = fVar3;
  param_2[1] = fVar5;
  param_2[2] = fVar4;
  return param_2;
}



// FUNCTION 14162e1e0 LowLevelFatalErrorHandler body=163 status=ok
// SIG undefined LowLevelFatalErrorHandler(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void LowLevelFatalErrorHandler
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 local_res20;
  undefined1 auStack_2068 [32];
  ulonglong local_2048;
  undefined8 *local_2040;
  undefined1 local_2038 [8192];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x14162e1f8;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2068;
  local_res20 = param_4;
  puVar1 = (ulonglong *)__local_stdio_printf_options();
  local_2048 = 0;
  local_2040 = &local_res20;
  __stdio_common_vswprintf(*puVar1 | 1,local_2038,0xfff,param_3);
  local_2048 = local_2048 & 0xffffffffffffff00;
  StaticFailDebug(L"LowLevelFatalError",param_1,param_2,local_2038);
  return;
}



// FUNCTION 14162e290 MakeFromColorTemperature body=383 status=ok
// SIG undefined MakeFromColorTemperature(void)

float * FLinearColor::MakeFromColorTemperature(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = 1000.0;
  if ((1000.0 <= param_2) && (fVar1 = param_2, 15000.0 <= param_2)) {
    fVar1 = 15000.0;
  }
  param_1[3] = 1.0;
  fVar4 = ((fVar1 * 1.2864122e-07 + 0.00015411826) * fVar1 + 0.86011773) /
          ((fVar1 * 7.0814514e-07 + 0.0008424202) * fVar1 + 1.0);
  fVar2 = ((fVar1 * 4.2048168e-08 + 4.2280626e-05) * fVar1 + 0.31739873) /
          ((1.0 - fVar1 * 2.8974182e-05) + fVar1 * 1.6145606e-07 * fVar1);
  fVar1 = 1.0 / (((fVar4 + fVar4) - fVar2 * 8.0) + 4.0);
  fVar3 = (fVar2 + fVar2) * fVar1;
  fVar1 = fVar4 * 3.0 * fVar1;
  fVar2 = fVar1 / fVar3;
  fVar3 = ((1.0 - fVar1) - fVar3) / fVar3;
  *param_1 = (fVar2 * 3.2404542 - 1.5371385) - fVar3 * 0.4985314;
  param_1[2] = (fVar2 * 0.0556434 + fVar3 * 1.0572252) - 0.2040259;
  param_1[1] = (1.8760108 - fVar2 * 0.969266) + fVar3 * 0.041556;
  return param_1;
}



// FUNCTION 14162e410 MakeFromEuler body=63 status=ok
// SIG undefined MakeFromEuler(void)

undefined8 FQuat::MakeFromEuler(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = param_2[1];
  local_14 = param_2[2];
  local_10 = *param_2;
  FRotator::Quaternion(&local_18,param_1);
  return param_1;
}



// FUNCTION 14162e450 MakeFromEuler body=20 status=ok
// SIG undefined MakeFromEuler(void)

undefined4 * FRotator::MakeFromEuler(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = param_2[1];
  param_1[1] = param_2[2];
  param_1[2] = *param_2;
  return param_1;
}



// FUNCTION 14162e470 MakeFromX body=837 status=ok
// SIG undefined MakeFromX(void)

float * FRotationMatrix::MakeFromX(float *param_1,float *param_2)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_a8;
  float local_a0;
  
  fVar3 = DAT_1468b5d98;
  fVar2 = DAT_1468b5d94;
  fVar1 = DAT_1468b5d90;
  fVar11 = param_2[2];
  fVar13 = param_2[1];
  fVar6 = *param_2;
  fVar4 = fVar6 * fVar6 + fVar13 * fVar13 + fVar11 * fVar11;
  if (fVar4 == 1.0) {
    local_a8 = (float)*(undefined8 *)param_2;
    fVar8 = param_2[2];
    fVar5 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    fVar9 = local_a8;
  }
  else {
    fVar8 = DAT_1468b5d98;
    fVar5 = DAT_1468b5d94;
    fVar9 = DAT_1468b5d90;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar7._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar9 = fVar6 * fVar5;
      fVar8 = fVar11 * fVar5;
      fVar5 = fVar13 * fVar5;
    }
  }
  if (0.9999 <= ABS(fVar8)) {
    local_a8 = 1.0;
    local_a0 = 0.0;
  }
  else {
    local_a8 = 0.0;
    local_a0 = 1.0;
  }
  fVar14 = fVar8 * 0.0 - local_a0 * fVar5;
  fVar10 = local_a0 * fVar9 - local_a8 * fVar8;
  fVar12 = local_a8 * fVar5 - fVar9 * 0.0;
  fVar4 = fVar10 * fVar10 + fVar14 * fVar14 + fVar12 * fVar12;
  fVar11 = fVar10;
  fVar13 = fVar12;
  fVar6 = fVar14;
  if ((fVar4 != 1.0) &&
     (fVar11 = DAT_1468b5d94, fVar13 = DAT_1468b5d98, fVar6 = DAT_1468b5d90, 1e-08 <= fVar4)) {
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar11 = fVar10 * fVar6;
    fVar13 = fVar12 * fVar6;
    fVar6 = fVar14 * fVar6;
  }
  *param_1 = fVar9;
  param_1[1] = fVar5;
  param_1[2] = fVar8;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  param_1[4] = fVar6;
  param_1[5] = fVar11;
  param_1[6] = fVar13;
  param_1[0xc] = fVar1;
  param_1[0xd] = fVar2;
  param_1[0xe] = fVar3;
  param_1[10] = fVar11 * fVar9 - fVar6 * fVar5;
  param_1[8] = fVar13 * fVar5 - fVar11 * fVar8;
  param_1[9] = fVar6 * fVar8 - fVar13 * fVar9;
  return param_1;
}



// FUNCTION 14162e7c0 MakeFromXY body=1180 status=ok
// SIG undefined MakeFromXY(void)

float * FRotationMatrix::MakeFromXY(float *param_1,float *param_2,float *param_3)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_c8;
  float local_b8;
  float local_b0;
  
  fVar3 = DAT_1468b5d98;
  fVar2 = DAT_1468b5d94;
  fVar1 = DAT_1468b5d90;
  fVar6 = param_2[1];
  fVar12 = param_2[2];
  fVar14 = *param_2;
  fVar4 = fVar14 * fVar14 + fVar6 * fVar6 + fVar12 * fVar12;
  if (fVar4 == 1.0) {
    fVar5 = param_2[2];
    fVar8 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    local_c8 = (float)*(undefined8 *)param_2;
    fVar10 = local_c8;
  }
  else {
    fVar5 = DAT_1468b5d98;
    fVar8 = DAT_1468b5d94;
    fVar10 = DAT_1468b5d90;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar7._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar8 = fVar6 * fVar5;
      fVar10 = fVar14 * fVar5;
      fVar5 = fVar12 * fVar5;
    }
  }
  fVar6 = param_3[1];
  fVar12 = *param_3;
  fVar14 = param_3[2];
  fVar4 = fVar12 * fVar12 + fVar6 * fVar6 + fVar14 * fVar14;
  if (fVar4 == 1.0) {
    local_b0 = param_3[2];
    local_c8 = (float)*(undefined8 *)param_3;
    fVar9 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    local_b8 = local_c8;
  }
  else {
    fVar9 = DAT_1468b5d94;
    local_b8 = DAT_1468b5d90;
    local_b0 = DAT_1468b5d98;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar9 = auVar7._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar4 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar4 * 0.5 * fVar9 * fVar9);
      local_b8 = fVar12 * fVar9;
      local_b0 = fVar14 * fVar9;
      fVar9 = fVar6 * fVar9;
    }
  }
  if (ABS(ABS(local_b8 * fVar10 + fVar9 * fVar8 + local_b0 * fVar5) - 1.0) <= 1e-08) {
    if (0.9999 <= ABS(fVar5)) {
      local_b8 = 1.0;
      local_b0 = 0.0;
    }
    else {
      local_b8 = 0.0;
      local_b0 = 1.0;
    }
    fVar9 = 0.0;
  }
  fVar11 = local_b0 * fVar8 - fVar9 * fVar5;
  fVar9 = fVar9 * fVar10 - local_b8 * fVar8;
  fVar13 = local_b8 * fVar5 - fVar10 * local_b0;
  fVar4 = fVar13 * fVar13 + fVar11 * fVar11 + fVar9 * fVar9;
  fVar6 = fVar9;
  fVar12 = fVar11;
  fVar14 = fVar13;
  if ((fVar4 != 1.0) &&
     (fVar6 = DAT_1468b5d98, fVar12 = DAT_1468b5d90, fVar14 = DAT_1468b5d94, 1e-08 <= fVar4)) {
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar12 = fVar11 * fVar6;
    fVar14 = fVar13 * fVar6;
    fVar6 = fVar9 * fVar6;
  }
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  *param_1 = fVar10;
  param_1[1] = fVar8;
  param_1[2] = fVar5;
  param_1[8] = fVar12;
  param_1[9] = fVar14;
  param_1[10] = fVar6;
  param_1[0xe] = fVar3;
  param_1[6] = fVar12 * fVar8 - fVar14 * fVar10;
  param_1[4] = fVar14 * fVar5 - fVar6 * fVar8;
  param_1[5] = fVar6 * fVar10 - fVar12 * fVar5;
  param_1[0xc] = fVar1;
  param_1[0xd] = fVar2;
  return param_1;
}



// FUNCTION 14162ec60 MakeFromXZ body=1158 status=ok
// SIG undefined MakeFromXZ(void)

float * FRotationMatrix::MakeFromXZ(float *param_1,float *param_2,float *param_3)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_c8;
  float local_b8;
  float local_b0;
  
  fVar3 = DAT_1468b5d98;
  fVar2 = DAT_1468b5d94;
  fVar1 = DAT_1468b5d90;
  fVar6 = param_2[1];
  fVar12 = param_2[2];
  fVar14 = *param_2;
  fVar4 = fVar14 * fVar14 + fVar6 * fVar6 + fVar12 * fVar12;
  if (fVar4 == 1.0) {
    fVar5 = param_2[2];
    fVar8 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    local_c8 = (float)*(undefined8 *)param_2;
    fVar10 = local_c8;
  }
  else {
    fVar5 = DAT_1468b5d98;
    fVar8 = DAT_1468b5d94;
    fVar10 = DAT_1468b5d90;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar7._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar8 = fVar6 * fVar5;
      fVar10 = fVar14 * fVar5;
      fVar5 = fVar12 * fVar5;
    }
  }
  fVar6 = param_3[1];
  fVar12 = *param_3;
  fVar14 = param_3[2];
  fVar4 = fVar12 * fVar12 + fVar6 * fVar6 + fVar14 * fVar14;
  if (fVar4 == 1.0) {
    local_b0 = param_3[2];
    local_c8 = (float)*(undefined8 *)param_3;
    fVar9 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    local_b8 = local_c8;
  }
  else {
    fVar9 = DAT_1468b5d94;
    local_b8 = DAT_1468b5d90;
    local_b0 = DAT_1468b5d98;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar9 = auVar7._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar4 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar4 * 0.5 * fVar9 * fVar9);
      local_b8 = fVar12 * fVar9;
      local_b0 = fVar14 * fVar9;
      fVar9 = fVar6 * fVar9;
    }
  }
  if (ABS(ABS(local_b8 * fVar10 + fVar9 * fVar8 + local_b0 * fVar5) - 1.0) <= 1e-08) {
    if (0.9999 <= ABS(fVar5)) {
      local_b8 = 1.0;
      local_b0 = 0.0;
    }
    else {
      local_b8 = 0.0;
      local_b0 = 1.0;
    }
    fVar9 = 0.0;
  }
  fVar11 = fVar9 * fVar5 - local_b0 * fVar8;
  fVar9 = local_b8 * fVar8 - fVar9 * fVar10;
  fVar13 = fVar10 * local_b0 - local_b8 * fVar5;
  fVar4 = fVar13 * fVar13 + fVar11 * fVar11 + fVar9 * fVar9;
  fVar6 = fVar9;
  fVar12 = fVar11;
  fVar14 = fVar13;
  if ((fVar4 != 1.0) &&
     (fVar6 = DAT_1468b5d98, fVar12 = DAT_1468b5d90, fVar14 = DAT_1468b5d94, 1e-08 <= fVar4)) {
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar12 = fVar11 * fVar6;
    fVar14 = fVar13 * fVar6;
    fVar6 = fVar9 * fVar6;
  }
  *param_1 = fVar10;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  param_1[1] = fVar8;
  param_1[2] = fVar5;
  param_1[4] = fVar12;
  param_1[5] = fVar14;
  param_1[6] = fVar6;
  param_1[0xd] = fVar2;
  param_1[0xe] = fVar3;
  param_1[10] = fVar14 * fVar10 - fVar12 * fVar8;
  param_1[8] = fVar6 * fVar8 - fVar14 * fVar5;
  param_1[9] = fVar12 * fVar5 - fVar6 * fVar10;
  param_1[0xc] = fVar1;
  return param_1;
}



// FUNCTION 14162f0f0 MakeFromY body=837 status=ok
// SIG undefined MakeFromY(void)

float * FRotationMatrix::MakeFromY(float *param_1,float *param_2)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_a8;
  float local_a0;
  
  fVar3 = DAT_1468b5d98;
  fVar2 = DAT_1468b5d94;
  fVar1 = DAT_1468b5d90;
  fVar11 = param_2[2];
  fVar13 = param_2[1];
  fVar6 = *param_2;
  fVar4 = fVar6 * fVar6 + fVar13 * fVar13 + fVar11 * fVar11;
  if (fVar4 == 1.0) {
    local_a8 = (float)*(undefined8 *)param_2;
    fVar8 = param_2[2];
    fVar5 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    fVar9 = local_a8;
  }
  else {
    fVar8 = DAT_1468b5d98;
    fVar5 = DAT_1468b5d94;
    fVar9 = DAT_1468b5d90;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar7._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar9 = fVar6 * fVar5;
      fVar8 = fVar11 * fVar5;
      fVar5 = fVar13 * fVar5;
    }
  }
  if (0.9999 <= ABS(fVar8)) {
    local_a8 = 1.0;
    local_a0 = 0.0;
  }
  else {
    local_a8 = 0.0;
    local_a0 = 1.0;
  }
  fVar14 = fVar8 * 0.0 - local_a0 * fVar5;
  fVar10 = local_a0 * fVar9 - local_a8 * fVar8;
  fVar12 = local_a8 * fVar5 - fVar9 * 0.0;
  fVar4 = fVar10 * fVar10 + fVar14 * fVar14 + fVar12 * fVar12;
  fVar11 = fVar10;
  fVar13 = fVar12;
  fVar6 = fVar14;
  if ((fVar4 != 1.0) &&
     (fVar11 = DAT_1468b5d94, fVar13 = DAT_1468b5d98, fVar6 = DAT_1468b5d90, 1e-08 <= fVar4)) {
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar11 = fVar10 * fVar6;
    fVar13 = fVar12 * fVar6;
    fVar6 = fVar14 * fVar6;
  }
  param_1[4] = fVar9;
  param_1[5] = fVar5;
  param_1[6] = fVar8;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  param_1[8] = fVar6;
  param_1[9] = fVar11;
  param_1[10] = fVar13;
  param_1[0xc] = fVar1;
  param_1[0xd] = fVar2;
  param_1[0xe] = fVar3;
  param_1[2] = fVar11 * fVar9 - fVar6 * fVar5;
  *param_1 = fVar13 * fVar5 - fVar11 * fVar8;
  param_1[1] = fVar6 * fVar8 - fVar13 * fVar9;
  return param_1;
}



// FUNCTION 14162f440 MakeFromYX body=1158 status=ok
// SIG undefined MakeFromYX(void)

float * FRotationMatrix::MakeFromYX(float *param_1,float *param_2,float *param_3)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_c8;
  float local_b8;
  float local_b0;
  
  fVar3 = DAT_1468b5d98;
  fVar2 = DAT_1468b5d94;
  fVar1 = DAT_1468b5d90;
  fVar6 = param_2[1];
  fVar12 = param_2[2];
  fVar14 = *param_2;
  fVar4 = fVar14 * fVar14 + fVar6 * fVar6 + fVar12 * fVar12;
  if (fVar4 == 1.0) {
    fVar5 = param_2[2];
    fVar8 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    local_c8 = (float)*(undefined8 *)param_2;
    fVar10 = local_c8;
  }
  else {
    fVar5 = DAT_1468b5d98;
    fVar8 = DAT_1468b5d94;
    fVar10 = DAT_1468b5d90;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar7._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar8 = fVar6 * fVar5;
      fVar10 = fVar14 * fVar5;
      fVar5 = fVar12 * fVar5;
    }
  }
  fVar6 = param_3[1];
  fVar12 = *param_3;
  fVar14 = param_3[2];
  fVar4 = fVar12 * fVar12 + fVar6 * fVar6 + fVar14 * fVar14;
  if (fVar4 == 1.0) {
    local_b0 = param_3[2];
    local_c8 = (float)*(undefined8 *)param_3;
    fVar9 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    local_b8 = local_c8;
  }
  else {
    fVar9 = DAT_1468b5d94;
    local_b8 = DAT_1468b5d90;
    local_b0 = DAT_1468b5d98;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar9 = auVar7._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar4 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar4 * 0.5 * fVar9 * fVar9);
      local_b8 = fVar12 * fVar9;
      local_b0 = fVar14 * fVar9;
      fVar9 = fVar6 * fVar9;
    }
  }
  if (ABS(ABS(local_b8 * fVar10 + fVar9 * fVar8 + local_b0 * fVar5) - 1.0) <= 1e-08) {
    if (0.9999 <= ABS(fVar5)) {
      local_b8 = 1.0;
      local_b0 = 0.0;
    }
    else {
      local_b8 = 0.0;
      local_b0 = 1.0;
    }
    fVar9 = 0.0;
  }
  fVar11 = fVar9 * fVar5 - local_b0 * fVar8;
  fVar9 = local_b8 * fVar8 - fVar9 * fVar10;
  fVar13 = fVar10 * local_b0 - local_b8 * fVar5;
  fVar4 = fVar13 * fVar13 + fVar11 * fVar11 + fVar9 * fVar9;
  fVar6 = fVar9;
  fVar12 = fVar11;
  fVar14 = fVar13;
  if ((fVar4 != 1.0) &&
     (fVar6 = DAT_1468b5d98, fVar12 = DAT_1468b5d90, fVar14 = DAT_1468b5d94, 1e-08 <= fVar4)) {
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar12 = fVar11 * fVar6;
    fVar14 = fVar13 * fVar6;
    fVar6 = fVar9 * fVar6;
  }
  param_1[4] = fVar10;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  param_1[5] = fVar8;
  param_1[6] = fVar5;
  param_1[8] = fVar12;
  param_1[9] = fVar14;
  param_1[10] = fVar6;
  param_1[0xd] = fVar2;
  param_1[0xe] = fVar3;
  param_1[2] = fVar14 * fVar10 - fVar12 * fVar8;
  *param_1 = fVar6 * fVar8 - fVar14 * fVar5;
  param_1[1] = fVar12 * fVar5 - fVar6 * fVar10;
  param_1[0xc] = fVar1;
  return param_1;
}



// FUNCTION 14162f8d0 MakeFromYZ body=1180 status=ok
// SIG undefined MakeFromYZ(void)

float * FRotationMatrix::MakeFromYZ(float *param_1,float *param_2,float *param_3)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_c8;
  float local_b8;
  float local_b0;
  
  fVar3 = DAT_1468b5d98;
  fVar2 = DAT_1468b5d94;
  fVar1 = DAT_1468b5d90;
  fVar6 = param_2[1];
  fVar12 = param_2[2];
  fVar14 = *param_2;
  fVar4 = fVar14 * fVar14 + fVar6 * fVar6 + fVar12 * fVar12;
  if (fVar4 == 1.0) {
    fVar5 = param_2[2];
    fVar8 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    local_c8 = (float)*(undefined8 *)param_2;
    fVar10 = local_c8;
  }
  else {
    fVar5 = DAT_1468b5d98;
    fVar8 = DAT_1468b5d94;
    fVar10 = DAT_1468b5d90;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar7._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar8 = fVar6 * fVar5;
      fVar10 = fVar14 * fVar5;
      fVar5 = fVar12 * fVar5;
    }
  }
  fVar6 = param_3[1];
  fVar12 = *param_3;
  fVar14 = param_3[2];
  fVar4 = fVar12 * fVar12 + fVar6 * fVar6 + fVar14 * fVar14;
  if (fVar4 == 1.0) {
    local_b0 = param_3[2];
    local_c8 = (float)*(undefined8 *)param_3;
    fVar9 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    local_b8 = local_c8;
  }
  else {
    fVar9 = DAT_1468b5d94;
    local_b8 = DAT_1468b5d90;
    local_b0 = DAT_1468b5d98;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar9 = auVar7._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar4 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar4 * 0.5 * fVar9 * fVar9);
      local_b8 = fVar12 * fVar9;
      local_b0 = fVar14 * fVar9;
      fVar9 = fVar6 * fVar9;
    }
  }
  if (ABS(ABS(local_b8 * fVar10 + fVar9 * fVar8 + local_b0 * fVar5) - 1.0) <= 1e-08) {
    if (0.9999 <= ABS(fVar5)) {
      local_b8 = 1.0;
      local_b0 = 0.0;
    }
    else {
      local_b8 = 0.0;
      local_b0 = 1.0;
    }
    fVar9 = 0.0;
  }
  fVar11 = local_b0 * fVar8 - fVar9 * fVar5;
  fVar9 = fVar9 * fVar10 - local_b8 * fVar8;
  fVar13 = local_b8 * fVar5 - fVar10 * local_b0;
  fVar4 = fVar13 * fVar13 + fVar11 * fVar11 + fVar9 * fVar9;
  fVar6 = fVar9;
  fVar12 = fVar11;
  fVar14 = fVar13;
  if ((fVar4 != 1.0) &&
     (fVar6 = DAT_1468b5d98, fVar12 = DAT_1468b5d90, fVar14 = DAT_1468b5d94, 1e-08 <= fVar4)) {
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar12 = fVar11 * fVar6;
    fVar14 = fVar13 * fVar6;
    fVar6 = fVar9 * fVar6;
  }
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  *param_1 = fVar12;
  param_1[1] = fVar14;
  param_1[2] = fVar6;
  param_1[4] = fVar10;
  param_1[5] = fVar8;
  param_1[6] = fVar5;
  param_1[0xe] = fVar3;
  param_1[10] = fVar12 * fVar8 - fVar14 * fVar10;
  param_1[8] = fVar14 * fVar5 - fVar6 * fVar8;
  param_1[9] = fVar6 * fVar10 - fVar12 * fVar5;
  param_1[0xc] = fVar1;
  param_1[0xd] = fVar2;
  return param_1;
}



// FUNCTION 14162fd70 MakeFromZ body=837 status=ok
// SIG undefined MakeFromZ(void)

float * FRotationMatrix::MakeFromZ(float *param_1,float *param_2)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_a8;
  float local_a0;
  
  fVar3 = DAT_1468b5d98;
  fVar2 = DAT_1468b5d94;
  fVar1 = DAT_1468b5d90;
  fVar11 = param_2[2];
  fVar13 = param_2[1];
  fVar6 = *param_2;
  fVar4 = fVar6 * fVar6 + fVar13 * fVar13 + fVar11 * fVar11;
  if (fVar4 == 1.0) {
    local_a8 = (float)*(undefined8 *)param_2;
    fVar8 = param_2[2];
    fVar5 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    fVar9 = local_a8;
  }
  else {
    fVar8 = DAT_1468b5d98;
    fVar5 = DAT_1468b5d94;
    fVar9 = DAT_1468b5d90;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar7._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar9 = fVar6 * fVar5;
      fVar8 = fVar11 * fVar5;
      fVar5 = fVar13 * fVar5;
    }
  }
  if (0.9999 <= ABS(fVar8)) {
    local_a8 = 1.0;
    local_a0 = 0.0;
  }
  else {
    local_a8 = 0.0;
    local_a0 = 1.0;
  }
  fVar14 = fVar8 * 0.0 - local_a0 * fVar5;
  fVar10 = local_a0 * fVar9 - local_a8 * fVar8;
  fVar12 = local_a8 * fVar5 - fVar9 * 0.0;
  fVar4 = fVar10 * fVar10 + fVar14 * fVar14 + fVar12 * fVar12;
  fVar11 = fVar10;
  fVar13 = fVar12;
  fVar6 = fVar14;
  if ((fVar4 != 1.0) &&
     (fVar11 = DAT_1468b5d94, fVar13 = DAT_1468b5d98, fVar6 = DAT_1468b5d90, 1e-08 <= fVar4)) {
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar11 = fVar10 * fVar6;
    fVar13 = fVar12 * fVar6;
    fVar6 = fVar14 * fVar6;
  }
  *param_1 = fVar6;
  param_1[1] = fVar11;
  param_1[2] = fVar13;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  param_1[8] = fVar9;
  param_1[9] = fVar5;
  param_1[10] = fVar8;
  param_1[0xc] = fVar1;
  param_1[0xd] = fVar2;
  param_1[0xe] = fVar3;
  param_1[6] = fVar11 * fVar9 - fVar6 * fVar5;
  param_1[4] = fVar13 * fVar5 - fVar11 * fVar8;
  param_1[5] = fVar6 * fVar8 - fVar13 * fVar9;
  return param_1;
}



// FUNCTION 1416300c0 MakeFromZX body=1180 status=ok
// SIG undefined MakeFromZX(void)

float * FRotationMatrix::MakeFromZX(float *param_1,float *param_2,float *param_3)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_c8;
  float local_b8;
  float local_b0;
  
  fVar3 = DAT_1468b5d98;
  fVar2 = DAT_1468b5d94;
  fVar1 = DAT_1468b5d90;
  fVar6 = param_2[1];
  fVar12 = param_2[2];
  fVar14 = *param_2;
  fVar4 = fVar14 * fVar14 + fVar6 * fVar6 + fVar12 * fVar12;
  if (fVar4 == 1.0) {
    fVar5 = param_2[2];
    fVar8 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    local_c8 = (float)*(undefined8 *)param_2;
    fVar10 = local_c8;
  }
  else {
    fVar5 = DAT_1468b5d98;
    fVar8 = DAT_1468b5d94;
    fVar10 = DAT_1468b5d90;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar7._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar8 = fVar6 * fVar5;
      fVar10 = fVar14 * fVar5;
      fVar5 = fVar12 * fVar5;
    }
  }
  fVar6 = param_3[1];
  fVar12 = *param_3;
  fVar14 = param_3[2];
  fVar4 = fVar12 * fVar12 + fVar6 * fVar6 + fVar14 * fVar14;
  if (fVar4 == 1.0) {
    local_b0 = param_3[2];
    local_c8 = (float)*(undefined8 *)param_3;
    fVar9 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    local_b8 = local_c8;
  }
  else {
    fVar9 = DAT_1468b5d94;
    local_b8 = DAT_1468b5d90;
    local_b0 = DAT_1468b5d98;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar9 = auVar7._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar4 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar4 * 0.5 * fVar9 * fVar9);
      local_b8 = fVar12 * fVar9;
      local_b0 = fVar14 * fVar9;
      fVar9 = fVar6 * fVar9;
    }
  }
  if (ABS(ABS(local_b8 * fVar10 + fVar9 * fVar8 + local_b0 * fVar5) - 1.0) <= 1e-08) {
    if (0.9999 <= ABS(fVar5)) {
      local_b8 = 1.0;
      local_b0 = 0.0;
    }
    else {
      local_b8 = 0.0;
      local_b0 = 1.0;
    }
    fVar9 = 0.0;
  }
  fVar11 = local_b0 * fVar8 - fVar9 * fVar5;
  fVar9 = fVar9 * fVar10 - local_b8 * fVar8;
  fVar13 = local_b8 * fVar5 - fVar10 * local_b0;
  fVar4 = fVar13 * fVar13 + fVar11 * fVar11 + fVar9 * fVar9;
  fVar6 = fVar9;
  fVar12 = fVar11;
  fVar14 = fVar13;
  if ((fVar4 != 1.0) &&
     (fVar6 = DAT_1468b5d98, fVar12 = DAT_1468b5d90, fVar14 = DAT_1468b5d94, 1e-08 <= fVar4)) {
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar12 = fVar11 * fVar6;
    fVar14 = fVar13 * fVar6;
    fVar6 = fVar9 * fVar6;
  }
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  param_1[4] = fVar12;
  param_1[5] = fVar14;
  param_1[6] = fVar6;
  param_1[8] = fVar10;
  param_1[9] = fVar8;
  param_1[10] = fVar5;
  param_1[0xe] = fVar3;
  param_1[2] = fVar12 * fVar8 - fVar14 * fVar10;
  *param_1 = fVar14 * fVar5 - fVar6 * fVar8;
  param_1[1] = fVar6 * fVar10 - fVar12 * fVar5;
  param_1[0xc] = fVar1;
  param_1[0xd] = fVar2;
  return param_1;
}



// FUNCTION 141630560 MakeFromZY body=1158 status=ok
// SIG undefined MakeFromZY(void)

float * FRotationMatrix::MakeFromZY(float *param_1,float *param_2,float *param_3)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_c8;
  float local_b8;
  float local_b0;
  
  fVar3 = DAT_1468b5d98;
  fVar2 = DAT_1468b5d94;
  fVar1 = DAT_1468b5d90;
  fVar6 = param_2[1];
  fVar12 = param_2[2];
  fVar14 = *param_2;
  fVar4 = fVar14 * fVar14 + fVar6 * fVar6 + fVar12 * fVar12;
  if (fVar4 == 1.0) {
    fVar5 = param_2[2];
    fVar8 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    local_c8 = (float)*(undefined8 *)param_2;
    fVar10 = local_c8;
  }
  else {
    fVar5 = DAT_1468b5d98;
    fVar8 = DAT_1468b5d94;
    fVar10 = DAT_1468b5d90;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar7._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar8 = fVar6 * fVar5;
      fVar10 = fVar14 * fVar5;
      fVar5 = fVar12 * fVar5;
    }
  }
  fVar6 = param_3[1];
  fVar12 = *param_3;
  fVar14 = param_3[2];
  fVar4 = fVar12 * fVar12 + fVar6 * fVar6 + fVar14 * fVar14;
  if (fVar4 == 1.0) {
    local_b0 = param_3[2];
    local_c8 = (float)*(undefined8 *)param_3;
    fVar9 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    local_b8 = local_c8;
  }
  else {
    fVar9 = DAT_1468b5d94;
    local_b8 = DAT_1468b5d90;
    local_b0 = DAT_1468b5d98;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar9 = auVar7._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar4 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar4 * 0.5 * fVar9 * fVar9);
      local_b8 = fVar12 * fVar9;
      local_b0 = fVar14 * fVar9;
      fVar9 = fVar6 * fVar9;
    }
  }
  if (ABS(ABS(local_b8 * fVar10 + fVar9 * fVar8 + local_b0 * fVar5) - 1.0) <= 1e-08) {
    if (0.9999 <= ABS(fVar5)) {
      local_b8 = 1.0;
      local_b0 = 0.0;
    }
    else {
      local_b8 = 0.0;
      local_b0 = 1.0;
    }
    fVar9 = 0.0;
  }
  fVar11 = fVar9 * fVar5 - local_b0 * fVar8;
  fVar9 = local_b8 * fVar8 - fVar9 * fVar10;
  fVar13 = fVar10 * local_b0 - local_b8 * fVar5;
  fVar4 = fVar13 * fVar13 + fVar11 * fVar11 + fVar9 * fVar9;
  fVar6 = fVar9;
  fVar12 = fVar11;
  fVar14 = fVar13;
  if ((fVar4 != 1.0) &&
     (fVar6 = DAT_1468b5d98, fVar12 = DAT_1468b5d90, fVar14 = DAT_1468b5d94, 1e-08 <= fVar4)) {
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar12 = fVar11 * fVar6;
    fVar14 = fVar13 * fVar6;
    fVar6 = fVar9 * fVar6;
  }
  *param_1 = fVar12;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  param_1[1] = fVar14;
  param_1[2] = fVar6;
  param_1[8] = fVar10;
  param_1[9] = fVar8;
  param_1[10] = fVar5;
  param_1[0xd] = fVar2;
  param_1[0xe] = fVar3;
  param_1[6] = fVar14 * fVar10 - fVar12 * fVar8;
  param_1[4] = fVar6 * fVar8 - fVar14 * fVar5;
  param_1[5] = fVar12 * fVar5 - fVar6 * fVar10;
  param_1[0xc] = fVar1;
  return param_1;
}



// FUNCTION 1416309f0 MakeRandomColor body=365 status=ok
// SIG undefined MakeRandomColor(void)

undefined8 FColor::MakeRandomColor(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float local_28;
  float fStack_24;
  float local_20;
  undefined4 local_1c;
  undefined8 local_18;
  float local_10;
  
  iVar2 = rand();
  uVar4 = (int)((float)iVar2 * 0.00778222) & 0xff;
  bVar1 = (byte)(int)((float)iVar2 * 0.00778222);
  if (bVar1 < 0x56) {
    pfVar3 = &local_28;
    local_28 = (float)(int)(0x55 - uVar4) * 0.011764706;
    fStack_24 = (float)uVar4 * 0.011764706;
    local_20 = 0.0;
  }
  else {
    if (bVar1 < 0xab) {
      local_28 = 0.0;
      fStack_24 = (float)(int)(0xaa - uVar4) * 0.011764706;
      local_20 = (float)(int)(uVar4 - 0x55) * 0.011764706;
    }
    else {
      local_28 = (float)(int)(uVar4 - 0xaa) * 0.011764706;
      fStack_24 = 0.0;
      local_20 = (float)(int)(0xff - uVar4) * 0.011904762;
    }
    local_10 = local_20;
    pfVar3 = (float *)&local_18;
    local_18 = CONCAT44(fStack_24,local_28);
  }
  local_10 = pfVar3[2];
  fStack_24 = (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20) * 0.8213098;
  local_28 = (float)*(undefined8 *)pfVar3 * 0.8213098;
  local_20 = local_10 * 0.8213098;
  local_1c = 0x3f800000;
  FLinearColor::ToFColor(&local_28,param_1,1);
  return param_1;
}



// FUNCTION 141630b60 MakeRedToGreenColorFromScalar body=93 status=ok
// SIG undefined MakeRedToGreenColorFromScalar(void)

undefined1 * FColor::MakeRedToGreenColorFromScalar(undefined1 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (1.0 - param_2) + (1.0 - param_2);
  if (0.0 <= fVar1) {
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  param_2 = param_2 + param_2;
  fVar2 = 0.0;
  if ((0.0 <= param_2) && (fVar2 = param_2, 1.0 <= param_2)) {
    fVar2 = 1.0;
  }
  *param_1 = 0;
  param_1[3] = 0xff;
  param_1[2] = (char)(int)(fVar1 * 255.0);
  param_1[1] = (char)(int)(fVar2 * 255.0);
  return param_1;
}



// FUNCTION 141630bc0 FUN_141630bc0 body=101 status=ok
// SIG undefined FUN_141630bc0(void)

double FUN_141630bc0(undefined1 param_1)

{
  double dVar1;
  
  dVar1 = 1.0;
  switch(param_1) {
  case 0x12:
    return 1e-06;
  case 0x13:
    return 0.001;
  default:
    return 1.0;
  case 0x15:
    return 1000.0;
  case 0x16:
    return 1000000.0;
  case 0x19:
    dVar1 = 14.0;
  case 0x18:
    dVar1 = dVar1 * 16.0;
  case 0x17:
    return dVar1 * 28.3495;
  }
}



// FUNCTION 141630c60 FUN_141630c60 body=23 status=ok
// SIG undefined FUN_141630c60(void)

undefined8 FUN_141630c60(char param_1)

{
  if (param_1 != '0') {
    return 0x3ff0000000000000;
  }
  return 0x3f847ae147ae147b;
}



// FUNCTION 141630c80 FUN_141630c80 body=770 status=ok
// SIG undefined FUN_141630c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141630c80(float *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
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
  float fVar14;
  float fVar15;
  undefined1 auVar13 [16];
  
  fVar15 = DAT_1464aa81c;
  fVar14 = DAT_1464aa818;
  fVar11 = DAT_1464aa814;
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    if (1e-08 < *param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2] +
                param_1[3] * param_1[3]) {
      fVar11 = *param_1;
      fVar14 = param_1[1];
      fVar15 = param_1[2];
      fVar3 = param_1[3];
      auVar2._0_4_ = fVar11 * fVar11 + fVar15 * fVar15;
      auVar2._4_4_ = fVar14 * fVar14 + fVar3 * fVar3;
      auVar2._8_4_ = fVar15 * fVar15 + fVar11 * fVar11;
      auVar2._12_4_ = fVar3 * fVar3 + fVar14 * fVar14;
      fVar7 = auVar2._4_4_ + auVar2._0_4_;
      fVar8 = auVar2._8_4_ + auVar2._4_4_;
      fVar9 = auVar2._12_4_ + auVar2._8_4_;
      fVar10 = auVar2._0_4_ + auVar2._12_4_;
      auVar13._4_4_ = fVar8;
      auVar13._0_4_ = fVar7;
      auVar13._8_4_ = fVar9;
      auVar13._12_4_ = fVar10;
      auVar13 = rsqrtps(auVar2,auVar13);
      fVar12 = auVar13._0_4_;
      fVar4 = auVar13._4_4_;
      fVar5 = auVar13._8_4_;
      fVar6 = auVar13._12_4_;
      fVar12 = (_DAT_1468b5be0 - fVar12 * fVar12 * _DAT_1468b5be0 * fVar7) * fVar12 + fVar12;
      fVar4 = (fRam00000001468b5be4 - fVar4 * fVar4 * fRam00000001468b5be4 * fVar8) * fVar4 + fVar4;
      fVar5 = (fRam00000001468b5be8 - fVar5 * fVar5 * fRam00000001468b5be8 * fVar9) * fVar5 + fVar5;
      fVar6 = (fRam00000001468b5bec - fVar6 * fVar6 * fRam00000001468b5bec * fVar10) * fVar6 + fVar6
      ;
      fVar11 = (float)(((uint)(((_DAT_1468b5be0 - fVar12 * fVar12 * _DAT_1468b5be0 * fVar7) * fVar12
                               + fVar12) * fVar11) ^ _DAT_1468b5bd0) & -(uint)(1e-08 <= fVar7) ^
                      _DAT_1468b5bd0);
      fVar14 = (float)(((uint)(((fRam00000001468b5be4 - fVar4 * fVar4 * fRam00000001468b5be4 * fVar8
                                ) * fVar4 + fVar4) * fVar14) ^ uRam00000001468b5bd4) &
                       -(uint)(1e-08 <= fVar8) ^ uRam00000001468b5bd4);
      fVar15 = (float)(((uint)(((fRam00000001468b5be8 - fVar5 * fVar5 * fRam00000001468b5be8 * fVar9
                                ) * fVar5 + fVar5) * fVar15) ^ uRam00000001468b5bd8) &
                       -(uint)(1e-08 <= fVar9) ^ uRam00000001468b5bd8);
      fVar3 = (float)(((uint)(((fRam00000001468b5bec - fVar6 * fVar6 * fRam00000001468b5bec * fVar10
                               ) * fVar6 + fVar6) * fVar3) ^ uRam00000001468b5bdc) &
                      -(uint)(1e-08 <= fVar10) ^ uRam00000001468b5bdc);
      *param_1 = fVar11;
      param_1[1] = fVar14;
      param_1[2] = fVar15;
      param_1[3] = fVar3;
      if (param_1[3] <= 0.0 && param_1[3] != 0.0) {
        *param_1 = fVar11 * -1.0;
        param_1[1] = fVar14 * -1.0;
        param_1[2] = fVar15 * -1.0;
        param_1[3] = fVar3 * -1.0;
      }
    }
    else {
      *param_1 = DAT_1464aa810;
      param_1[1] = fVar11;
      param_1[2] = fVar14;
      param_1[3] = fVar15;
    }
  }
  pfVar1 = *(float **)param_2[1];
  if ((float *)((undefined8 *)param_2[1])[1] < pfVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1,4);
    }
  }
  else {
    *param_1 = *pfVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  pfVar1 = *(float **)param_2[1];
  if ((float *)((undefined8 *)param_2[1])[1] < pfVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 1,4);
    }
  }
  else {
    param_1[1] = *pfVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  pfVar1 = *(float **)param_2[1];
  if ((float *)((undefined8 *)param_2[1])[1] < pfVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 2,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 2,4);
    }
  }
  else {
    param_1[2] = *pfVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    fVar11 = *param_1;
    fVar14 = param_1[1];
    fVar15 = param_1[2];
    fVar3 = fVar11 * fVar11 + fVar14 * fVar14 + fVar15 * fVar15;
    if (1.0 - fVar3 < 0.0) {
      param_1[3] = 0.0;
      auVar13 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar12 = auVar13._0_4_;
      fVar12 = fVar12 + fVar12 * (0.5 - fVar3 * 0.5 * fVar12 * fVar12);
      fVar12 = fVar12 + fVar12 * (0.5 - fVar3 * 0.5 * fVar12 * fVar12);
      *param_1 = fVar11 * fVar12;
      param_1[1] = fVar14 * fVar12;
      param_1[2] = fVar15 * fVar12;
    }
    else {
      param_1[3] = SQRT(1.0 - fVar3);
    }
  }
  *param_4 = 1;
  return;
}



// FUNCTION 141630f90 FUN_141630f90 body=25 status=ok
// SIG undefined FUN_141630f90(void)

undefined1 FUN_141630f90(void)

{
  undefined1 *in_R9;
  
  FUN_141636450();
  *in_R9 = 1;
  return 1;
}



// FUNCTION 141630fb0 FUN_141630fb0 body=187 status=ok
// SIG undefined FUN_141630fb0(void)

undefined8 FUN_141630fb0(undefined4 *param_1,longlong *param_2)

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
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return 1;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 1,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 1,4);
  }
  return 1;
}



// FUNCTION 141631070 FUN_141631070 body=277 status=ok
// SIG undefined FUN_141631070(void)

undefined8 FUN_141631070(undefined4 *param_1,longlong *param_2)

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
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 1,4);
    }
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    param_1[2] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return 1;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 2,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 2,4);
  }
  return 1;
}



// FUNCTION 141631190 FUN_141631190 body=568 status=ok
// SIG undefined FUN_141631190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141631190(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_148 [32];
  undefined *local_128;
  undefined2 *local_120;
  longlong local_118 [2];
  undefined1 local_108 [8];
  longlong *local_100;
  undefined4 *local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_58[0] = 4;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  FText::FText(local_48);
  local_30 = '\x01';
  local_118[0] = 0;
  local_118[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_118,0);
  FGenericPlatformString::Memcpy(local_118[0],L"PageTitle",0x14);
  local_100 = local_118;
  local_f8 = local_58;
  FUN_1407484b0(&local_a8,local_108,&local_100,0);
  if (local_118[0] != 0) {
    FMemory::Free();
  }
  if (local_30 != '\0') {
    local_30 = '\0';
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_d8,L"New Page: {PageTitle}",L"MessageLog",L"BasicMessageLog_NewPage");
  uVar5 = FTextFormat::FTextFormat(local_c0,uVar5);
  uVar5 = FText::Format(local_f0,uVar5,&local_a8);
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    local_120 = &DAT_143f3eda8;
  }
  else {
    local_120 = (undefined2 *)*puVar6;
  }
  local_128 = &DAT_143f4c878;
  AK::MemoryMgr::StartProfileThreadUsage(0x44cc2030);
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar2 = (int *)((longlong)local_e8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a8);
  return;
}



// FUNCTION 1416313d0 Next body=178 status=ok
// SIG undefined Next(void)

float * FSobol::Next(float *param_1,uint param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  float local_18;
  float fStack_14;
  
  if (param_2 == 0) {
    *(undefined8 *)param_1 = param_4;
    return param_1;
  }
  local_18 = (float)param_4;
  uVar1 = 0;
  if (param_2 != 0) {
    for (; (param_2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  fVar3 = (float)(1 << (0x18U - (char)param_3 & 0x1f));
  lVar2 = (ulonglong)(uVar1 & 0x1f) + (longlong)param_3 * 0x20;
  fStack_14 = (float)((ulonglong)param_4 >> 0x20);
  uVar1 = *(uint *)(&DAT_144cb9c74 + lVar2 * 8);
  *param_1 = (float)(int)((int)(local_18 * fVar3) & 0xffffffU ^
                         *(uint *)(&DAT_144cb9c70 + lVar2 * 8)) * (1.0 / fVar3);
  param_1[1] = (float)(int)((int)(fStack_14 * fVar3) & 0xffffffU ^ uVar1) * (1.0 / fVar3);
  return param_1;
}



// FUNCTION 141631490 Next body=221 status=ok
// SIG undefined Next(void)

float * FSobol::Next(float *param_1,uint param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 == 0) {
    fVar2 = param_4[2];
    *(undefined8 *)param_1 = *(undefined8 *)param_4;
    param_1[2] = fVar2;
    return param_1;
  }
  uVar4 = 0;
  if (param_2 != 0) {
    for (; (param_2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  lVar5 = (ulonglong)(uVar4 & 0x1f) + (longlong)param_3 * 0x20;
  fVar6 = (float)(1 << (0x18U - (char)param_3 & 0x1f));
  fVar7 = 1.0 / fVar6;
  fVar2 = param_4[1];
  fVar1 = param_4[2];
  uVar4 = *(uint *)(&DAT_144cbbcf4 + lVar5 * 0xc);
  uVar3 = *(uint *)(&DAT_144cbbcf8 + lVar5 * 0xc);
  *param_1 = (float)(int)((int)(fVar6 * *param_4) & 0xffffffU ^
                         *(uint *)(&DAT_144cbbcf0 + lVar5 * 0xc)) * fVar7;
  param_1[1] = (float)(int)((int)(fVar6 * fVar2) & 0xffffffU ^ uVar4) * fVar7;
  param_1[2] = (float)(int)((int)(fVar6 * fVar1) & 0xffffffU ^ uVar3) * fVar7;
  return param_1;
}



// FUNCTION 141631570 FUN_141631570 body=87 status=ok
// SIG undefined FUN_141631570(void)

ulonglong FUN_141631570(uint param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  float fVar2;
  
  if (param_1 == 0) {
    return param_3;
  }
  fVar2 = (float)param_3 * 16777216.0;
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return (ulonglong)
         (uint)((float)(int)(*(uint *)(&DAT_144cb8470 +
                                      ((ulonglong)(uVar1 & 0x1f) + (longlong)param_2 * 0x20) * 4) ^
                            (int)ROUND((fVar2 + fVar2) - 0.5) >> 1 & 0xffffffU) * 5.9604645e-08);
}



// FUNCTION 1416315d0 FUN_1416315d0 body=568 status=ok
// SIG undefined FUN_1416315d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416315d0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_148 [32];
  undefined *local_128;
  undefined2 *local_120;
  longlong local_118 [2];
  undefined1 local_108 [8];
  longlong *local_100;
  undefined4 *local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_58[0] = 4;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  FText::FText(local_48);
  local_30 = '\x01';
  local_118[0] = 0;
  local_118[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_118,0);
  FGenericPlatformString::Memcpy(local_118[0],L"Message",0x10);
  local_100 = local_118;
  local_f8 = local_58;
  FUN_1407484b0(&local_a8,local_108,&local_100,0);
  if (local_118[0] != 0) {
    FMemory::Free();
  }
  if (local_30 != '\0') {
    local_30 = '\0';
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_d8,L"Notify: {Message}",L"MessageLog",L"BasicMessageLog_Notify");
  uVar5 = FTextFormat::FTextFormat(local_c0,uVar5);
  uVar5 = FText::Format(local_f0,uVar5,&local_a8);
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    local_120 = &DAT_143f3eda8;
  }
  else {
    local_120 = (undefined2 *)*puVar6;
  }
  local_128 = &DAT_143f4c878;
  AK::MemoryMgr::StartProfileThreadUsage(0x44cc2030);
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar2 = (int *)((longlong)local_e8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a8);
  return;
}



// FUNCTION 141631810 Open body=180 status=ok
// SIG undefined Open(void)

void FBasicMessageLog::Open(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Open Log",L"MessageLog",L"BasicMessageLog_Open");
  FText::ToString(uVar5);
  AK::MemoryMgr::StartProfileThreadUsage(0x44cc2030);
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



// FUNCTION 1416318d0 Open body=75 status=ok
// SIG undefined Open(void)

void FMessageLog::Open(longlong param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  Flush();
  lVar2 = **(longlong **)(param_1 + 0x10);
  if (param_3 == '\0') {
    iVar1 = (**(code **)(lVar2 + 0x30))(*(longlong **)(param_1 + 0x10),param_2);
    if (iVar1 < 1) {
      return;
    }
    lVar2 = **(longlong **)(param_1 + 0x10);
  }
  (**(code **)(lVar2 + 0x28))();
  return;
}



// FUNCTION 141631920 FUN_141631920 body=373 status=ok
// SIG undefined FUN_141631920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141631920(float *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_1;
  if (fVar1 < param_3[3] || fVar1 == param_3[3]) {
    fVar7 = *param_3;
    fVar9 = param_1[3];
    if ((fVar7 <= fVar9) && (fVar2 = param_1[1], fVar2 < param_3[4] || fVar2 == param_3[4])) {
      fVar8 = param_3[1];
      fVar10 = param_1[4];
      if ((fVar8 <= fVar10) && (fVar3 = param_1[2], fVar3 < param_3[5] || fVar3 == param_3[5])) {
        fVar11 = param_3[2];
        fVar12 = param_1[5];
        if (fVar11 <= fVar12) {
          if (param_3[3] <= fVar9) {
            fVar9 = param_3[3];
          }
          if (param_3[4] <= fVar10) {
            fVar10 = param_3[4];
          }
          if (param_3[5] <= fVar12) {
            fVar12 = param_3[5];
          }
          if (fVar7 <= fVar1) {
            fVar7 = fVar1;
          }
          *(undefined1 *)(param_2 + 3) = 1;
          if (fVar8 <= fVar2) {
            fVar8 = fVar2;
          }
          if (fVar11 <= fVar3) {
            fVar11 = fVar3;
          }
          *param_2 = CONCAT44(fVar8,fVar7);
          *(float *)(param_2 + 1) = fVar11;
          *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(fVar10,fVar9);
          *(float *)((longlong)param_2 + 0x14) = fVar12;
          return param_2;
        }
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468b604c) && (_Init_thread_header(&DAT_1468b604c), DAT_1468b604c == -1))
  {
    _DAT_1468b603c = (undefined4)_DAT_1468b5d90;
    DAT_1468b6040._0_4_ = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
    _DAT_1468b6030 = _DAT_1468b5d90;
    DAT_1468b6040._4_4_ = DAT_1468b5d98;
    _DAT_1468b6038 = DAT_1468b5d98;
    _Init_thread_footer(&DAT_1468b604c);
  }
  uVar6 = DAT_1468b6048;
  uVar4 = CONCAT44(_DAT_1468b603c,_DAT_1468b6038);
  uVar5 = CONCAT44(DAT_1468b6040._4_4_,(undefined4)DAT_1468b6040);
  *param_2 = _DAT_1468b6030;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  *(undefined4 *)(param_2 + 3) = uVar6;
  return param_2;
}



// FUNCTION 141631aa0 ParseLocalizedNumberWithAgnosticFallback body=381 status=ok
// SIG undefined ParseLocalizedNumberWithAgnosticFallback(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
ExpressionParser::ParseLocalizedNumberWithAgnosticFallback
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  int *local_90;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [3];
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar3 = FUN_1415da5f0();
  uVar4 = GetLocalizedNumberFormattingRules();
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x10);
  local_84 = 0;
  uVar5 = FNumberParsingOptions::DefaultNoGrouping();
  local_90 = &local_84;
  local_98 = &local_80;
  local_80 = 0;
  FastDecimalFormat::Internal::StringToFractional(lVar2,lVar1 - lVar2 >> 1 & 0xffffffff,uVar4,uVar5)
  ;
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x10);
  local_88 = 0;
  uVar4 = FNumberParsingOptions::DefaultNoGrouping();
  local_90 = &local_88;
  local_78 = 0;
  local_98 = &local_78;
  FastDecimalFormat::Internal::StringToFractional(lVar2,lVar1 - lVar2 >> 1 & 0xffffffff,uVar3,uVar4)
  ;
  if (local_84 < local_88) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = local_78;
    }
    if (0 < local_88) {
      puVar6 = (undefined8 *)FTokenStream::GenerateToken(param_2,local_70,local_88,0);
      goto LAB_141631bd4;
    }
  }
  else {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = local_80;
    }
    if (0 < local_84) {
      puVar6 = (undefined8 *)FTokenStream::GenerateToken(param_2,local_70,local_84,0);
      goto LAB_141631bd4;
    }
  }
  local_58 = 0;
  puVar6 = local_70;
LAB_141631bd4:
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(puVar6 + 3) != '\0') {
    uVar3 = puVar6[1];
    *param_1 = *puVar6;
    param_1[1] = uVar3;
    param_1[2] = puVar6[2];
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



// FUNCTION 141631c20 PointDistToLine body=439 status=ok
// SIG undefined PointDistToLine(void)

float FMath::PointDistToLine(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float local_58;
  
  fVar3 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = *param_2;
  fVar1 = fVar7 * fVar7 + fVar3 * fVar3 + fVar6 * fVar6;
  if (fVar1 == 1.0) {
    local_58 = (float)*(undefined8 *)param_2;
    fVar5 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    fVar2 = param_2[2];
  }
  else {
    fVar5 = DAT_1468b5d94;
    fVar2 = DAT_1468b5d98;
    local_58 = DAT_1468b5d90;
    if (1e-08 <= fVar1) {
      auVar4 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
      fVar2 = auVar4._0_4_;
      fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
      fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
      local_58 = fVar7 * fVar2;
      fVar5 = fVar3 * fVar2;
      fVar2 = fVar6 * fVar2;
    }
  }
  fVar3 = (*param_1 - *param_3) * local_58 + (param_1[1] - param_3[1]) * fVar5 +
          (param_1[2] - param_3[2]) * fVar2;
  fVar6 = (fVar5 * fVar3 + param_3[1]) - param_1[1];
  fVar7 = (local_58 * fVar3 + *param_3) - *param_1;
  fVar3 = (fVar2 * fVar3 + param_3[2]) - param_1[2];
  return SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar3 * fVar3);
}



// FUNCTION 141631de0 PointDistToSegment body=93 status=ok
// SIG undefined PointDistToSegment(void)

float FMath::PointDistToSegment(float *param_1,undefined8 param_2,undefined8 param_3)

{
  float local_18;
  float local_14;
  float local_10;
  
  ClosestPointOnSegment(&local_18,param_1,param_2,param_3);
  return SQRT((param_1[1] - local_14) * (param_1[1] - local_14) +
              (*param_1 - local_18) * (*param_1 - local_18) +
              (param_1[2] - local_10) * (param_1[2] - local_10));
}



// FUNCTION 141631e40 PointDistToSegmentSquared body=86 status=ok
// SIG undefined PointDistToSegmentSquared(void)

float FMath::PointDistToSegmentSquared(float *param_1,undefined8 param_2,undefined8 param_3)

{
  float local_18;
  float local_14;
  float local_10;
  
  ClosestPointOnSegment(&local_18,param_1,param_2,param_3);
  return (param_1[1] - local_14) * (param_1[1] - local_14) +
         (*param_1 - local_18) * (*param_1 - local_18) +
         (param_1[2] - local_10) * (param_1[2] - local_10);
}



// FUNCTION 141631ea0 PointPlaneProject body=551 status=ok
// SIG undefined PointPlaneProject(void)

float * FVector::PointPlaneProject
                  (float *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

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
  float fStack_84;
  
  fVar3 = *(float *)(param_3 + 1);
  fVar10 = (float)*param_3;
  fVar7 = (float)*param_4 - fVar10;
  fStack_84 = (float)((ulonglong)*param_3 >> 0x20);
  fVar1 = (float)((ulonglong)*param_4 >> 0x20) - fStack_84;
  fVar2 = (float)((ulonglong)*param_5 >> 0x20) - fStack_84;
  fVar4 = (float)*param_5 - fVar10;
  fVar9 = fVar1 * (*(float *)(param_5 + 1) - fVar3) - (*(float *)(param_4 + 1) - fVar3) * fVar2;
  fVar8 = fVar7 * fVar2 - fVar1 * fVar4;
  fVar6 = (*(float *)(param_4 + 1) - fVar3) * fVar4 - fVar7 * (*(float *)(param_5 + 1) - fVar3);
  fVar7 = fVar6 * fVar6 + fVar9 * fVar9 + fVar8 * fVar8;
  fVar1 = fVar6;
  fVar2 = fVar8;
  fVar4 = fVar9;
  if ((fVar7 != 1.0) &&
     (fVar1 = DAT_1468b5d94, fVar2 = DAT_1468b5d98, fVar4 = DAT_1468b5d90, 1e-08 <= fVar7)) {
    auVar5 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar4 = auVar5._0_4_;
    fVar4 = fVar4 + fVar4 * (0.5 - fVar7 * 0.5 * fVar4 * fVar4);
    fVar4 = fVar4 + fVar4 * (0.5 - fVar7 * 0.5 * fVar4 * fVar4);
    fVar1 = fVar6 * fVar4;
    fVar2 = fVar8 * fVar4;
    fVar4 = fVar9 * fVar4;
  }
  fVar7 = param_2[1];
  fVar6 = *param_2;
  fVar3 = (fVar6 * fVar4 + fVar7 * fVar1 + param_2[2] * fVar2) -
          (fVar4 * fVar10 + fVar1 * fStack_84 + fVar2 * fVar3);
  param_1[2] = param_2[2] - fVar2 * fVar3;
  *param_1 = fVar6 - fVar4 * fVar3;
  param_1[1] = fVar7 - fVar1 * fVar3;
  return param_1;
}



// FUNCTION 1416320d0 PointsAreCoplanar body=524 status=ok
// SIG undefined PointsAreCoplanar(void)

ulonglong FMath::PointsAreCoplanar(undefined8 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar4 = *(int *)(param_1 + 1);
  uVar6 = (ulonglong)iVar4;
  uVar7 = uVar6;
  if (3 < iVar4) {
    pfVar5 = (float *)*param_1;
    fVar1 = pfVar5[1];
    fVar2 = pfVar5[2];
    fVar3 = *pfVar5;
    fVar16 = (pfVar5[7] - fVar1) * (pfVar5[5] - fVar2) - (pfVar5[8] - fVar2) * (pfVar5[4] - fVar1);
    fVar14 = (pfVar5[6] - fVar3) * (pfVar5[4] - fVar1) - (pfVar5[7] - fVar1) * (pfVar5[3] - fVar3);
    fVar12 = (pfVar5[8] - fVar2) * (pfVar5[3] - fVar3) - (pfVar5[6] - fVar3) * (pfVar5[5] - fVar2);
    fVar9 = fVar12 * fVar12 + fVar16 * fVar16 + fVar14 * fVar14;
    fVar13 = fVar12;
    fVar15 = fVar14;
    fVar10 = fVar16;
    if ((fVar9 != 1.0) &&
       (fVar13 = DAT_1468b5d94, fVar15 = DAT_1468b5d98, fVar10 = DAT_1468b5d90, 1e-08 <= fVar9)) {
      auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar11._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      fVar13 = fVar12 * fVar10;
      fVar15 = fVar14 * fVar10;
      fVar10 = fVar16 * fVar10;
    }
    if (3 < iVar4) {
      uVar7 = 0x24;
      lVar8 = 3;
      do {
        if (param_2 < ABS((*(float *)(uVar7 + 4 + (longlong)pfVar5) - fVar1) * fVar13 +
                          (*(float *)(uVar7 + (longlong)pfVar5) - fVar3) * fVar10 +
                          (*(float *)(uVar7 + 8 + (longlong)pfVar5) - fVar2) * fVar15)) {
          return uVar7 & 0xffffffffffffff00;
        }
        lVar8 = lVar8 + 1;
        uVar7 = uVar7 + 0xc;
      } while (lVar8 < (longlong)uVar6);
    }
  }
  return CONCAT71((int7)(uVar7 >> 8),1);
}



// FUNCTION 1416322e0 FUN_1416322e0 body=4556 status=ok
// SIG undefined FUN_1416322e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416322e0(longlong param_1,undefined8 *param_2,char param_3)

{
  short *psVar1;
  void *_Src;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  void **ppvVar7;
  byte *pbVar8;
  longlong lVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  undefined2 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  int *piVar18;
  uint *puVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint *puVar24;
  byte bVar25;
  byte local_res10 [8];
  char local_res18;
  int *local_res20;
  uint local_248;
  uint *local_240;
  longlong *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  int local_218;
  int iStack_214;
  undefined8 uStack_210;
  void *local_208;
  int local_200;
  undefined4 local_1fc;
  int local_1f8;
  uint *local_1f0;
  uint local_1e8;
  undefined4 local_1e4;
  uint *local_1e0;
  uint local_1d8;
  uint local_1d4;
  uint *local_1d0;
  ulonglong local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  uint **local_188;
  int **local_180;
  uint **local_178;
  byte *local_170;
  uint **local_168;
  int **local_160;
  longlong *local_158;
  undefined8 uStack_150;
  uint *local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  longlong *local_128;
  undefined2 local_120;
  int *local_118;
  int *local_110;
  int *local_108;
  int *local_100;
  int *local_f8;
  int *local_f0;
  longlong *local_e8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined1 local_d8 [8];
  longlong local_d0;
  int *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  longlong *plStack_a8;
  longlong *local_a0;
  longlong *plStack_98;
  uint *puStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_58 [16];
  
  local_e8 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  local_res18 = param_3;
  local_118 = piVar18;
  if ((*piVar18 < DAT_1468b5df8) && (_Init_thread_header(&DAT_1468b5df8), DAT_1468b5df8 == -1)) {
    FName::FName(&DAT_1468b5df0,L"BootGlobal",1);
    _Init_thread_footer(&DAT_1468b5df8);
  }
  if ((*piVar18 < DAT_1468b5e08) && (_Init_thread_header(&DAT_1468b5e08), DAT_1468b5e08 == -1)) {
    FName::FName(&DAT_1468b5e00,L"Reset",1);
    _Init_thread_footer(&DAT_1468b5e08);
  }
  local_200 = *(int *)(param_2 + 1);
  lVar15 = (longlong)local_200;
  _Src = (void *)*param_2;
  local_208 = (void *)0x0;
  if (local_200 == 0) {
    local_1fc = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_208,local_200,0);
    _guard_xfg_dispatch_icall_nop(local_208,_Src,lVar15 * 2);
  }
  uVar6 = FString::TrimStart(&local_208,&local_168);
  uVar6 = FUN_14159cee0(uVar6,&local_178,0);
  ppvVar7 = (void **)FString::TrimStart(uVar6,&local_188);
  if (&local_208 != ppvVar7) {
    if (local_208 != (void *)0x0) {
      FMemory::Free();
    }
    local_208 = *ppvVar7;
    *ppvVar7 = (void *)0x0;
    local_200 = *(int *)(ppvVar7 + 1);
    local_1fc = *(undefined4 *)((longlong)ppvVar7 + 0xc);
    ppvVar7[1] = (void *)0x0;
  }
  if (local_188 != (uint **)0x0) {
    FMemory::Free();
  }
  if (local_178 != (uint **)0x0) {
    FMemory::Free();
  }
  if (local_168 != (uint **)0x0) {
    FMemory::Free();
  }
  local_1c0 = (longlong *)0x0;
  local_1b8 = 0;
  FUN_141594550(&local_208,&local_1c0,&DAT_144042018,1);
  local_1f8 = 0;
  iVar22 = (int)local_1b8;
  plVar17 = local_1c0;
  if (0 < (int)local_1b8) {
    do {
      iVar22 = local_1f8;
      puVar19 = (uint *)0x0;
      if (*piVar18 < DAT_1468b5e20) {
        _Init_thread_header(&DAT_1468b5e20);
        if (DAT_1468b5e20 == -1) {
          DAT_1468b5e10 = (undefined2 *)0x0;
          _DAT_1468b5e18 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b5e10,0);
          FGenericPlatformString::Memcpy(DAT_1468b5e10,L"Log ",10);
          atexit((_func_5014 *)&LAB_143e78fe0);
          _Init_thread_footer(&DAT_1468b5e20);
        }
      }
      FString::TrimStart(local_1c0 + (longlong)iVar22 * 2,&local_1f0);
      puVar14 = &DAT_143f3eda8;
      if (DAT_1468b5e18 != 0) {
        puVar14 = DAT_1468b5e10;
      }
      cVar3 = FString::StartsWith(&local_1f0,puVar14,1);
      if (cVar3 != '\0') {
        uVar11 = 0;
        uVar4 = local_1e8 - 1;
        if (local_1e8 == 0) {
          uVar4 = uVar11;
        }
        uVar13 = uVar11;
        if (DAT_1468b5e18 != 0) {
          uVar13 = DAT_1468b5e18 - 1;
        }
        uVar4 = uVar4 - uVar13;
        if (local_1e8 == 0) {
          puVar24 = (uint *)&DAT_143f3eda8;
        }
        else {
          uVar11 = local_1e8 - 1;
          puVar24 = local_1f0;
        }
        uVar21 = 0;
        uVar13 = uVar21;
        if ((-1 < (int)uVar4) && (uVar13 = uVar11, (int)uVar4 < (int)uVar11)) {
          uVar13 = uVar4;
        }
        local_1d0 = (uint *)0x0;
        local_1c8 = local_1c8 & 0xffffffff;
        psVar1 = (short *)((longlong)puVar24 + ((longlong)(int)uVar11 - (longlong)(int)uVar13) * 2);
        puVar24 = puVar19;
        if ((psVar1 != (short *)0x0) && (puVar24 = (uint *)0x0, *psVar1 != 0)) {
          lVar15 = -1;
          do {
            lVar20 = lVar15 + 1;
            lVar15 = lVar15 + 1;
          } while (psVar1[lVar20] != 0);
          uVar4 = (int)lVar15 + 1;
          local_1c8 = (ulonglong)uVar4;
          puVar24 = puVar19;
          uVar21 = uVar4;
          if (0 < (int)uVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d0,0);
            puVar24 = (uint *)(local_1c8 >> 0x20);
            uVar21 = (uint)local_1c8;
          }
          puVar19 = local_1d0;
          FGenericPlatformString::Memcpy(local_1d0,psVar1,(longlong)(int)uVar4 * 2);
          param_3 = local_res18;
        }
        if (local_1f0 != (uint *)0x0) {
          FMemory::Free(local_1f0);
        }
        local_1d0 = (uint *)0x0;
        local_1e4 = SUB84(puVar24,0);
        local_1c8 = 0;
        local_1f0 = puVar19;
        local_1e8 = uVar21;
      }
      local_238 = (longlong *)0x0;
      local_230 = 0;
      FString::ParseIntoArrayWS(&local_1f0,&local_238,0,1);
      iVar22 = (int)local_230;
      plVar17 = local_238;
      if ((int)local_230 < 1) {
        for (; iVar22 != 0; iVar22 = iVar22 + -1) {
          if (*plVar17 != 0) {
            FMemory::Free();
          }
          plVar17 = plVar17 + 2;
        }
        if (local_238 != (longlong *)0x0) {
          FMemory::Free(local_238);
        }
        if (local_1f0 != (uint *)0x0) {
          FMemory::Free();
        }
      }
      else {
        if ((int)local_238[1] == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*local_238;
        }
        FName::FName(&local_240,puVar14,1);
        pbVar12 = (byte *)0x0;
        local_1b0 = 0xd3;
        if ((local_240 == (uint *)0xd3) && (param_3 != '\0')) {
          local_240 = DAT_1468b5df0;
        }
        puVar19 = local_240;
        local_1e0 = (uint *)0x0;
        local_248 = 0;
        local_1d4 = 0;
        local_res10[0] = 0;
        iVar22 = (int)((ulonglong)local_240 >> 0x20);
        if (param_3 == '\0') {
          plVar17 = (longlong *)(param_1 + 0x60);
          local_218 = -1;
          iStack_214 = -1;
          local_228 = plVar17;
          uStack_220 = local_240;
          TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(plVar17,*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x94),0);
          puVar24 = uStack_220;
          plVar2 = local_228;
          iVar5 = -1;
          if (*(int *)(param_1 + 0xa8) != 0) {
            lVar15 = *(longlong *)(param_1 + 0xa0);
            if (*(longlong *)(param_1 + 0xa0) == 0) {
              lVar15 = param_1 + 0x98;
            }
            iStack_214 = *(int *)(lVar15 + ((longlong)(iVar22 + (int)uStack_220) &
                                           (longlong)*(int *)(param_1 + 0xa8) - 1U) * 4);
            iVar5 = iStack_214;
            local_218 = iStack_214;
            if (iStack_214 != -1) {
              do {
                iStack_214 = *(int *)(*plVar17 + 0x10 + (longlong)iVar5 * 0x18);
                local_218 = iVar5;
                if (*(uint **)(*plVar17 + (longlong)iVar5 * 0x18) == puVar19) break;
                iVar5 = iStack_214;
                local_218 = iStack_214;
              } while (iStack_214 != -1);
            }
          }
          local_b0 = CONCAT44(iStack_214,local_218);
          plStack_a8 = plVar17;
          local_c0 = (undefined4)local_228;
          uStack_bc = local_228._4_4_;
          iStack_b8 = (int)uStack_220;
          uStack_b4 = uStack_220._4_4_;
          iVar23 = local_218;
          iVar22 = iStack_214;
          puVar19 = local_1e0;
joined_r0x000141632951:
          if (iVar5 != -1) {
            pbVar10 = *(byte **)(*plVar2 + 8 + (longlong)iVar23 * 0x18);
            local_1d8 = local_248 + 1;
            local_res10[0] = -(pbVar10[1] != 0) & 0x80U | *pbVar10;
            lVar15 = *plVar2;
            if ((int)pbVar12 < (int)local_1d8) {
              uStack_210 = plVar17;
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1e0);
              pbVar12 = (byte *)(ulonglong)local_1d4;
              puVar19 = local_1e0;
              plVar17 = uStack_210;
            }
            *(undefined8 *)(puVar19 + (longlong)(int)local_248 * 2) =
                 *(undefined8 *)(lVar15 + 8 + (longlong)iVar23 * 0x18);
            param_3 = local_res18;
            local_248 = local_1d8;
            if (iVar22 == -1) goto LAB_141632a3a;
            iVar23 = iVar22;
            do {
              iVar22 = *(int *)(*plVar2 + 0x10 + (longlong)iVar23 * 0x18);
              iVar5 = iVar23;
              if (*(uint **)(*plVar2 + (longlong)iVar23 * 0x18) == puVar24) break;
              iVar23 = iVar22;
              iVar5 = iVar22;
            } while (iVar22 != -1);
            goto joined_r0x000141632951;
          }
        }
        else {
          if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
            lVar15 = *(longlong *)(param_1 + 0xf0);
            if (*(longlong *)(param_1 + 0xf0) == 0) {
              lVar15 = param_1 + 0xe8;
            }
            iVar22 = *(int *)(lVar15 + ((longlong)(iVar22 + (int)local_240) &
                                       (longlong)*(int *)(param_1 + 0xf8) - 1U) * 4);
            if (iVar22 != -1) {
              do {
                pbVar10 = (byte *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar22 * 0x18);
                if (*(uint **)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar22 * 0x18) == local_240
                   ) {
                  if (iVar22 != -1) goto LAB_1416327e3;
                  break;
                }
                iVar22 = *(int *)(pbVar10 + 0x10);
              } while (iVar22 != -1);
            }
          }
          pbVar10 = pbVar12;
LAB_1416327e3:
          pbVar8 = pbVar10 + 8;
          if (pbVar10 == (byte *)0x0) {
            pbVar8 = pbVar12;
          }
          plVar17 = uStack_210;
          if (pbVar8 == (byte *)0x0) {
            if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
              lVar15 = *(longlong *)(param_1 + 0xf0);
              if (*(longlong *)(param_1 + 0xf0) == 0) {
                lVar15 = param_1 + 0xe8;
              }
              iVar22 = *(int *)(lVar15 + ((longlong)
                                          ((int)((ulonglong)DAT_1468b5df0 >> 0x20) +
                                          (int)DAT_1468b5df0) &
                                         (longlong)*(int *)(param_1 + 0xf8) - 1U) * 4);
              if (iVar22 != -1) {
                do {
                  pbVar10 = (byte *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar22 * 0x18);
                  if (*(uint **)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar22 * 0x18) ==
                      DAT_1468b5df0) {
                    if (iVar22 != -1) goto LAB_141632873;
                    break;
                  }
                  iVar22 = *(int *)(pbVar10 + 0x10);
                } while (iVar22 != -1);
              }
            }
            pbVar10 = pbVar12;
LAB_141632873:
            pbVar8 = pbVar10 + 8;
            if (pbVar10 == (byte *)0x0) {
              pbVar8 = pbVar12;
            }
            if (pbVar8 != (byte *)0x0) {
              local_res10[0] = *pbVar8;
            }
          }
          else {
            local_res10[0] = *pbVar8;
          }
        }
LAB_141632a3a:
        uStack_210._4_4_ = (undefined4)((ulonglong)plVar17 >> 0x20);
        pbVar12 = (byte *)0x0;
        if ((int)local_230 == 1) {
          if (param_3 == '\0') {
            if (local_240 == DAT_1468b5e00) {
              local_158 = (longlong *)(param_1 + 0x10);
              local_228 = (longlong *)0x100000000;
              uStack_220 = (uint *)(param_1 + 0x20);
              iVar22 = *(int *)(param_1 + 0x38);
              iStack_214 = 0;
              uStack_210._0_4_ = 0;
              if (iVar22 != 0) {
                puVar19 = *(uint **)(param_1 + 0x30);
                if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
                  puVar19 = uStack_220;
                }
                uVar4 = *puVar19;
                pbVar10 = pbVar12;
                while (uVar4 == 0) {
                  iVar5 = (int)pbVar12;
                  uStack_210._0_4_ = (int)pbVar10 + 0x20;
                  pbVar10 = (byte *)(ulonglong)(uint)uStack_210;
                  pbVar12 = (byte *)(ulonglong)(iVar5 + 1U);
                  local_228._4_4_ = (undefined4)((ulonglong)local_228 >> 0x20);
                  local_228 = (longlong *)CONCAT44(local_228._4_4_,iVar5 + 1U);
                  if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5)
                  goto LAB_141632b14;
                  uVar4 = puVar19[(longlong)iVar5 + 1];
                }
                uVar4 = -uVar4 & uVar4;
                iVar5 = 0x1f;
                if (uVar4 != 0) {
                  for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
                  }
                }
                local_228 = (longlong *)CONCAT44(uVar4,(undefined4)local_228);
                if (uVar4 == 0) {
                  iVar5 = 0x20;
                }
                else {
                  iVar5 = 0x1f - iVar5;
                }
                iStack_214 = ((uint)uStack_210 - iVar5) + 0x1f;
                if (iVar22 < iStack_214) {
LAB_141632b14:
                  iStack_214 = iVar22;
                }
              }
              plVar17 = (longlong *)CONCAT44(uStack_210._4_4_,(uint)uStack_210);
              local_218 = -1;
              uStack_140 = CONCAT44(iStack_214,0xffffffff);
              auStack_88._8_4_ = (uint)uStack_210;
              auStack_88._0_8_ = uStack_140;
              auStack_88._12_4_ = uStack_210._4_4_;
              plStack_98 = local_228;
              local_58._8_4_ = SUB84(local_158,0);
              local_58._12_4_ = (undefined4)((ulonglong)local_158 >> 0x20);
              local_120 = 0;
              uStack_150 = local_228;
              local_58._0_8_ = auStack_88._8_8_;
              local_138._8_4_ = local_58._8_4_;
              local_138._0_8_ = auStack_88._8_8_;
              local_138._12_4_ = local_58._12_4_;
              iVar22 = iStack_214;
              local_148 = uStack_220;
              local_128 = local_158;
              local_a0 = local_158;
              puStack_90 = uStack_220;
              if (iStack_214 < *(int *)(param_1 + 0x38)) {
                do {
                  pbVar12 = *(byte **)(*local_158 + (longlong)iVar22 * 0x18);
                  bVar25 = pbVar12[2] & 0xf;
                  if (pbVar12[3] <= bVar25) {
                    bVar25 = pbVar12[3];
                  }
                  *pbVar12 = bVar25;
                  pbVar12[1] = pbVar12[2] >> 7;
                  if (bVar25 != 0) {
                    local_168 = &local_240;
                    local_res20 = (int *)CONCAT71(local_res20._1_7_,bVar25);
                    local_160 = &local_res20;
                    FUN_140c2d3a0(param_1 + 0x100,local_d8,&local_168,0);
                  }
                  uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uStack_140 & ~uStack_150._4_4_);
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_150);
                  iVar22 = uStack_140._4_4_;
                } while (uStack_140._4_4_ < (int)local_148[6]);
                if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
                  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  ::ConditionalRehash(local_128,
                                      (int)local_128[1] - *(int *)((longlong)local_128 + 0x34),1);
                }
                plVar17 = (longlong *)CONCAT44(uStack_210._4_4_,(uint)uStack_210);
              }
            }
            else if ((local_res10[0] & 0xf) == 0) {
              if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 0x134)) {
                lVar15 = *(longlong *)(param_1 + 0x140);
                if (*(longlong *)(param_1 + 0x140) == 0) {
                  lVar15 = param_1 + 0x138;
                }
                iVar22 = *(int *)(lVar15 + ((longlong)
                                            ((int)((ulonglong)local_240 >> 0x20) + (int)local_240) &
                                           (longlong)*(int *)(param_1 + 0x148) - 1U) * 4);
                if (iVar22 != -1) {
                  do {
                    pbVar10 = (byte *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar22 * 0x18);
                    if (*(uint **)(*(longlong *)(param_1 + 0x100) + (longlong)iVar22 * 0x18) ==
                        local_240) {
                      if (iVar22 != -1) goto LAB_141632ce4;
                      break;
                    }
                    iVar22 = *(int *)(pbVar10 + 0x10);
                  } while (iVar22 != -1);
                }
              }
              pbVar10 = pbVar12;
LAB_141632ce4:
              pbVar8 = pbVar10 + 8;
              if (pbVar10 == (byte *)0x0) {
                pbVar8 = pbVar12;
              }
              if ((pbVar8 == (byte *)0x0) || (*pbVar8 == 0)) {
                local_res10[0] = local_res10[0] | 7;
              }
              else {
                local_res10[0] = local_res10[0] | *pbVar8;
              }
            }
            else {
              local_res10[0] = local_res10[0] & 0xf0;
            }
          }
        }
        else {
          iVar22 = 1;
          param_3 = local_res18;
          if (1 < (int)local_230) {
            lVar20 = 0x10;
            local_1a8 = 0;
            lVar15 = *local_e8;
            local_f0 = (int *)(lVar15 + 0x38);
            local_res20 = (int *)(lVar15 + 0x38);
            local_f8 = (int *)(lVar15 + 0x38);
            local_100 = (int *)(lVar15 + 0x38);
            local_108 = (int *)(lVar15 + 0x38);
            local_110 = (int *)(lVar15 + 0x38);
            local_c8 = (int *)(lVar15 + 0x38);
            do {
              piVar18 = local_res20;
              if (*(int *)(lVar20 + 8 + (longlong)local_238) == 0) {
                puVar14 = &DAT_143f3eda8;
              }
              else {
                puVar14 = *(undefined2 **)(lVar20 + (longlong)local_238);
              }
              uStack_210 = plVar17;
              FName::FName(&local_d0,puVar14,1);
              if (*local_f0 < DAT_1468b5e30) {
                _Init_thread_header(&DAT_1468b5e30);
                if (DAT_1468b5e30 == -1) {
                  FName::FName(&DAT_1468b5e28,L"Verbose",1);
                  _Init_thread_footer(&DAT_1468b5e30);
                }
              }
              if (*(int *)(lVar15 + 0x38) < DAT_1468b5e40) {
                _Init_thread_header(&DAT_1468b5e40);
                if (DAT_1468b5e40 == -1) {
                  FName::FName(&DAT_1468b5e38,L"VeryVerbose",1);
                  _Init_thread_footer(&DAT_1468b5e40);
                }
              }
              if (*(int *)(lVar15 + 0x38) < DAT_1468b5e50) {
                _Init_thread_header(&DAT_1468b5e50);
                if (DAT_1468b5e50 == -1) {
                  FName::FName(&DAT_1468b5e48,&DAT_144cc1130,1);
                  _Init_thread_footer(&DAT_1468b5e50);
                }
              }
              if (*(int *)(lVar15 + 0x38) < DAT_1468b5e60) {
                _Init_thread_header(&DAT_1468b5e60);
                if (DAT_1468b5e60 == -1) {
                  FName::FName(&DAT_1468b5e58,L"Default",1);
                  _Init_thread_footer(&DAT_1468b5e60);
                }
              }
              if (*piVar18 < DAT_1468b5e70) {
                _Init_thread_header(&DAT_1468b5e70);
                if (DAT_1468b5e70 == -1) {
                  FName::FName(&DAT_1468b5e68,&DAT_1447eb65c,1);
                  _Init_thread_footer(&DAT_1468b5e70);
                }
              }
              if (*local_f8 < DAT_1468b5e80) {
                _Init_thread_header(&DAT_1468b5e80);
                if (DAT_1468b5e80 == -1) {
                  FName::FName(&DAT_1468b5e78,&DAT_1447eb678,1);
                  _Init_thread_footer(&DAT_1468b5e80);
                }
              }
              if (*local_100 < DAT_1468b5e90) {
                _Init_thread_header(&DAT_1468b5e90);
                if (DAT_1468b5e90 == -1) {
                  FName::FName(&DAT_1468b5e88,L"Break",1);
                  _Init_thread_footer(&DAT_1468b5e90);
                }
              }
              if (*local_108 < DAT_1468b5ea0) {
                _Init_thread_header(&DAT_1468b5ea0);
                if (DAT_1468b5ea0 == -1) {
                  FName::FName(&DAT_1468b5e98,L"Fatal",1);
                  _Init_thread_footer(&DAT_1468b5ea0);
                }
              }
              if (*local_110 < DAT_1468b5eb0) {
                _Init_thread_header(&DAT_1468b5eb0);
                if (DAT_1468b5eb0 == -1) {
                  FName::FName(&DAT_1468b5ea8,&DAT_144ca0438,1);
                  _Init_thread_footer(&DAT_1468b5eb0);
                }
              }
              plVar17 = uStack_210;
              if (*local_c8 < DAT_1468b5ec0) {
                _Init_thread_header(&DAT_1468b5ec0);
                plVar17 = uStack_210;
                if (DAT_1468b5ec0 == -1) {
                  FName::FName(&DAT_1468b5eb8,L"Display",1);
                  _Init_thread_footer(&DAT_1468b5ec0);
                  plVar17 = uStack_210;
                }
              }
              if (local_d0 == 0) {
                local_res10[0] = local_res10[0] & 0xf1 | 1;
              }
              else if (local_d0 == DAT_1468b5e98) {
                local_res10[0] = local_res10[0] & 0xf1 | 1;
              }
              else {
                local_1a0 = 0x164;
                if (local_d0 == 0x164) {
                  local_res10[0] = local_res10[0] & 0xf2 | 2;
                }
                else {
                  local_198 = 0x163;
                  if (local_d0 == 0x163) {
                    local_res10[0] = local_res10[0] & 0xf3 | 3;
                  }
                  else if (local_d0 == DAT_1468b5ea8) {
                    local_res10[0] = local_res10[0] & 0xf5 | 5;
                  }
                  else if (local_d0 == DAT_1468b5eb8) {
                    local_res10[0] = local_res10[0] & 0xf4 | 4;
                  }
                  else if (local_d0 == DAT_1468b5e28) {
                    local_res10[0] = local_res10[0] & 0xf6 | 6;
                  }
                  else if ((local_d0 == DAT_1468b5e38) || (local_d0 == DAT_1468b5e48)) {
                    local_res10[0] = local_res10[0] & 0xf7;
LAB_141633290:
                    local_res10[0] = local_res10[0] | 7;
                  }
                  else if (local_d0 == DAT_1468b5e58) {
                    if ((local_248 != 0) && (local_res18 == '\0')) {
                      local_res10[0] = *(byte *)(*(longlong *)local_1e0 + 2);
                    }
                  }
                  else if (local_d0 == DAT_1468b5e78) {
                    local_res10[0] = local_res10[0] & 0xf1 | 1;
                  }
                  else if (local_d0 == DAT_1468b5e68) {
                    local_res10[0] = local_res10[0] & 0xf0;
                    if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 0x134)) {
                      lVar9 = *(longlong *)(param_1 + 0x140);
                      if (*(longlong *)(param_1 + 0x140) == 0) {
                        lVar9 = param_1 + 0x138;
                      }
                      iVar5 = *(int *)(lVar9 + ((longlong)
                                                ((int)((ulonglong)local_240 >> 0x20) +
                                                (int)local_240) &
                                               (longlong)*(int *)(param_1 + 0x148) - 1U) * 4);
                      if (iVar5 != -1) {
                        do {
                          pbVar12 = (byte *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar5 * 0x18
                                            );
                          if (*(uint **)(*(longlong *)(param_1 + 0x100) + (longlong)iVar5 * 0x18) ==
                              local_240) {
                            if (iVar5 != -1) goto LAB_141633253;
                            break;
                          }
                          iVar5 = *(int *)(pbVar12 + 0x10);
                        } while (iVar5 != -1);
                      }
                    }
                    pbVar12 = (byte *)0x0;
LAB_141633253:
                    pbVar10 = pbVar12 + 8;
                    if (pbVar12 == (byte *)0x0) {
                      pbVar10 = (byte *)0x0;
                    }
                    if ((pbVar10 == (byte *)0x0) || (*pbVar10 == 0)) goto LAB_141633290;
                    local_res10[0] = *pbVar10 | local_res10[0];
                  }
                  else if (local_d0 == DAT_1468b5e88) {
                    local_res10[0] = local_res10[0] ^ 0x80;
                  }
                }
              }
              iVar22 = iVar22 + 1;
              lVar20 = lVar20 + 0x10;
              param_3 = local_res18;
            } while (iVar22 < (int)local_230);
          }
        }
        uStack_210 = plVar17;
        if (local_240 != DAT_1468b5e00) {
          if (param_3 == '\0') {
            if (0 < (int)local_248) {
              uVar16 = (ulonglong)local_248;
              puVar19 = local_1e0;
              do {
                pbVar12 = *(byte **)puVar19;
                puVar19 = puVar19 + 2;
                bVar25 = local_res10[0] & 0xf;
                if (pbVar12[3] <= (local_res10[0] & 0xf)) {
                  bVar25 = pbVar12[3];
                }
                *pbVar12 = bVar25;
                pbVar12[1] = local_res10[0] >> 7;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            local_190 = 0xd3;
            if (local_240 == (uint *)0xd3) {
              FLogSuppressionImplementation::ApplyGlobalChanges(param_1);
            }
          }
          else {
            if (local_240 == DAT_1468b5df0) {
              FUN_1406c5d90(param_1 + 0xb0,0);
            }
            local_178 = &local_240;
            local_170 = local_res10;
            FUN_140c2d3a0(param_1 + 0xb0,local_dc,&local_178,0);
          }
          if ((local_res10[0] & 0xf) != 0) {
            local_res20 = (int *)(CONCAT71(local_res20._1_7_,local_res10[0]) & 0xffffffffffffff0f);
            local_188 = &local_240;
            local_180 = &local_res20;
            TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,unsigned_char_&&>_>
                      (param_1 + 0x100,local_e0,&local_188,0);
          }
        }
        if (local_1e0 != (uint *)0x0) {
          FMemory::Free(local_1e0);
        }
        plVar17 = local_238;
        for (iVar22 = (int)local_230; iVar22 != 0; iVar22 = iVar22 + -1) {
          if (*plVar17 != 0) {
            FMemory::Free();
          }
          plVar17 = plVar17 + 2;
        }
        if (local_238 != (longlong *)0x0) {
          FMemory::Free(local_238);
        }
        if (local_1f0 != (uint *)0x0) {
          FMemory::Free();
        }
      }
      local_1f8 = local_1f8 + 1;
      piVar18 = local_118;
      iVar22 = (int)local_1b8;
      plVar17 = local_1c0;
    } while (local_1f8 < (int)local_1b8);
  }
  for (; iVar22 != 0; iVar22 = iVar22 + -1) {
    if (*plVar17 != 0) {
      FMemory::Free();
    }
    plVar17 = plVar17 + 2;
  }
  if (local_1c0 != (longlong *)0x0) {
    FMemory::Free(local_1c0);
  }
  if (local_208 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416334c0 ProcessConfigAndCommandLine body=1477 status=ok
// SIG undefined ProcessConfigAndCommandLine(void)

void FLogSuppressionImplementation::ProcessConfigAndCommandLine(longlong param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  void *pvVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  void *_Dst;
  longlong lVar15;
  void *pvVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  uint local_d8;
  uint uStack_d4;
  uint *puStack_d0;
  undefined4 local_c8;
  int iStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  int local_b0;
  int local_ac;
  longlong *local_a8;
  undefined8 uStack_a0;
  uint *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_a8 = (longlong *)
             FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,L"Core.Log",0,1,&DAT_1468e2360);
  pvVar10 = (void *)0x0;
  iVar11 = 0;
  if (local_a8 != (longlong *)0x0) {
    puStack_d0 = (uint *)(local_a8 + 2);
    iVar12 = (int)local_a8[5];
    local_d8 = 0;
    uStack_d4 = 1;
    iStack_c4 = 0;
    uStack_c0 = 0;
    if (iVar12 != 0) {
      puVar17 = (uint *)local_a8[4];
      if ((uint *)local_a8[4] == (uint *)0x0) {
        puVar17 = puStack_d0;
      }
      uVar2 = *puVar17;
      pvVar9 = pvVar10;
      pvVar16 = pvVar10;
      while (uVar2 == 0) {
        iVar6 = (int)pvVar9;
        uStack_c0 = (int)pvVar16 + 0x20;
        pvVar16 = (void *)(ulonglong)uStack_c0;
        local_d8 = iVar6 + 1;
        pvVar9 = (void *)(ulonglong)local_d8;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1416335c0;
        uVar2 = puVar17[(longlong)iVar6 + 1];
      }
      uStack_d4 = -uVar2 & uVar2;
      iVar6 = 0x1f;
      if (uStack_d4 != 0) {
        for (; uStack_d4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_d4 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      iStack_c4 = (uStack_c0 - iVar6) + 0x1f;
      if (iVar12 < iStack_c4) {
LAB_1416335c0:
        iStack_c4 = iVar12;
      }
    }
    local_c8 = 0xffffffff;
    uStack_90 = CONCAT44(iStack_c4,0xffffffff);
    auVar3._8_4_ = uStack_c0;
    auVar3._0_8_ = uStack_90;
    auVar3._12_4_ = uStack_bc;
    local_40._0_4_ = SUB84(local_a8,0);
    local_40._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
    uStack_a0 = CONCAT44(uStack_d4,local_d8);
    local_70 = 0;
    uStack_48 = auVar3._8_8_;
    local_88._8_4_ = (undefined4)local_40;
    local_88._0_8_ = uStack_48;
    local_88._12_4_ = local_40._4_4_;
    iVar12 = iStack_c4;
    local_98 = puStack_d0;
    local_78 = local_a8;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    puStack_58 = puStack_d0;
    uStack_50 = uStack_90;
    if (iStack_c4 < (int)local_a8[5]) {
      do {
        lVar7 = (longlong)iVar12;
        lVar13 = 0x18;
        lVar15 = *local_a8;
        iVar12 = *(int *)(lVar15 + 0x20 + lVar7 * 0x30);
        iVar6 = iVar12 + -1;
        if (iVar12 == 0) {
          iVar6 = iVar11;
        }
        if (iVar6 < 1) {
          lVar13 = 8;
        }
        puVar14 = (undefined8 *)(lVar13 + lVar15 + lVar7 * 0x30);
        puVar8 = (ulonglong *)FName::ToString(lVar15 + lVar7 * 0x30);
        uVar5 = puVar8[1];
        local_f8 = (void *)*puVar8;
        *puVar8 = 0;
        local_f0._0_4_ = (int)puVar8[1];
        local_f0._4_4_ = *(int *)((longlong)puVar8 + 0xc);
        puVar8[1] = 0;
        iVar12 = (int)local_f0;
        if (local_f0._4_4_ < (int)((2 - (uint)((int)uVar5 != 0)) + (int)local_f0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8);
          iVar12 = (int)local_f0;
        }
        local_f0._0_4_ = (2 - (uint)(iVar12 != 0)) + iVar12;
        pvVar9 = local_f8;
        iVar18 = local_f0._4_4_;
        iVar6 = (int)local_f0;
        if (local_f0._4_4_ < (int)local_f0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar12);
          pvVar9 = local_f8;
          iVar18 = local_f0._4_4_;
          iVar6 = (int)local_f0;
        }
        local_f8 = (void *)0x0;
        local_f0 = 0;
        puVar1 = (undefined2 *)
                 ((longlong)pvVar9 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
        *puVar1 = 0x20;
        puVar1[1] = 0;
        if (iVar6 < 2) {
          local_b0 = *(int *)(puVar14 + 1);
          lVar15 = (longlong)local_b0;
          pvVar16 = (void *)*puVar14;
          local_b8 = (void *)0x0;
          if (local_b0 == 0) {
            local_ac = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,0);
            ::_guard_xfg_dispatch_icall_nop(local_b8,pvVar16,lVar15 * 2);
          }
        }
        else {
          iVar12 = *(int *)(puVar14 + 1) + -1;
          if (*(int *)(puVar14 + 1) == 0) {
            iVar12 = iVar11;
          }
          if ((iVar6 != 0) || (iVar19 = 1, iVar12 == 0)) {
            iVar19 = iVar11;
          }
          local_e8 = pvVar9;
          local_e0._4_4_ = iVar18;
          if (iVar18 < iVar19 + iVar6 + iVar12) {
            local_e0._0_4_ = iVar6;
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8);
            iVar6 = (int)local_e0;
          }
          pvVar9 = (void *)*puVar14;
          pvVar16 = local_e8;
          iVar19 = local_e0._4_4_;
          iVar18 = iVar6;
          if (iVar12 != 0) {
            local_e0._0_4_ = iVar12 + (uint)(iVar6 == 0) + iVar6;
            if (local_e0._4_4_ < (int)local_e0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,iVar6);
            }
            iVar19 = local_e0._4_4_;
            iVar18 = (int)local_e0;
            pvVar16 = local_e8;
            _Dst = (void *)(((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2 + (longlong)local_e8);
            ::_guard_xfg_dispatch_icall_nop(_Dst,pvVar9,(longlong)iVar12 * 2);
            *(undefined2 *)((longlong)iVar12 * 2 + (longlong)_Dst) = 0;
          }
          local_e8 = (void *)0x0;
          local_e0 = 0;
          pvVar9 = pvVar10;
          local_b8 = pvVar16;
          local_b0 = iVar18;
          local_ac = iVar19;
        }
        FUN_1416322e0(param_1,&local_b8,1);
        if (local_b8 != (void *)0x0) {
          FMemory::Free();
        }
        if (pvVar9 != (void *)0x0) {
          FMemory::Free(pvVar9);
        }
        if (CONCAT44(uStack_d4,local_d8) != 0) {
          FMemory::Free();
        }
        uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_a0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
        iVar12 = uStack_90._4_4_;
      } while (uStack_90._4_4_ < (int)local_98[6]);
      if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
        TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
      }
    }
  }
  local_a8 = (longlong *)(param_1 + 0x60);
  local_d8 = 0;
  iVar11 = *(int *)(param_1 + 0x88);
  puStack_d0 = (uint *)(param_1 + 0x70);
  uStack_d4 = 1;
  iStack_c4 = 0;
  uStack_c0 = 0;
  if (iVar11 != 0) {
    puVar17 = *(uint **)(param_1 + 0x80);
    if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
      puVar17 = puStack_d0;
    }
    uVar2 = *puVar17;
    pvVar9 = pvVar10;
    while (uVar2 == 0) {
      iVar12 = (int)pvVar9;
      uStack_c0 = (int)pvVar10 + 0x20;
      pvVar10 = (void *)(ulonglong)uStack_c0;
      local_d8 = iVar12 + 1;
      pvVar9 = (void *)(ulonglong)local_d8;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar12) goto LAB_1416339ab;
      uVar2 = puVar17[(longlong)iVar12 + 1];
    }
    uStack_d4 = -uVar2 & uVar2;
    iVar12 = 0x1f;
    if (uStack_d4 != 0) {
      for (; uStack_d4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_d4 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    iStack_c4 = (uStack_c0 - iVar12) + 0x1f;
    if (iVar11 < iStack_c4) {
LAB_1416339ab:
      iStack_c4 = iVar11;
    }
  }
  local_c8 = 0xffffffff;
  uStack_90 = CONCAT44(iStack_c4,0xffffffff);
  auVar4._8_4_ = uStack_c0;
  auVar4._0_8_ = uStack_90;
  auVar4._12_4_ = uStack_bc;
  uStack_a0._0_4_ = local_d8;
  uStack_a0._4_4_ = uStack_d4;
  local_40._0_4_ = SUB84(local_a8,0);
  local_40._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
  uStack_48 = auVar4._8_8_;
  local_70 = 0;
  local_88._8_4_ = (undefined4)local_40;
  local_88._0_8_ = uStack_48;
  local_88._12_4_ = local_40._4_4_;
  iVar11 = iStack_c4;
  local_98 = puStack_d0;
  local_78 = local_a8;
  local_68 = local_a8;
  puStack_58 = puStack_d0;
  uStack_50 = uStack_90;
  uStack_60._0_4_ = (uint)uStack_a0;
  uStack_60._4_4_ = uStack_a0._4_4_;
  local_40 = local_a8;
  if (iStack_c4 < *(int *)(param_1 + 0x88)) {
    do {
      FUN_141636830(param_1,*(undefined8 *)(*local_a8 + 8 + (longlong)iVar11 * 0x18),
                    *(undefined8 *)(*local_a8 + (longlong)iVar11 * 0x18));
      uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_a0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      iVar11 = uStack_90._4_4_;
    } while (uStack_90._4_4_ < (int)local_98[6]);
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 141633a90 FUN_141633a90 body=2055 status=ok
// SIG undefined FUN_141633a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141633a90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  int iVar11;
  longlong lVar12;
  int *piVar13;
  undefined2 *puVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  uint *puVar22;
  void *pvVar23;
  longlong local_res20;
  void *local_128;
  undefined8 local_120;
  void *local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  void *local_f8;
  int local_f0;
  int local_ec;
  void *local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  uint uStack_d4;
  uint *puStack_d0;
  undefined4 local_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  int iStack_78;
  uint uStack_74;
  uint *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [2];
  
  local_108 = (longlong *)0x0;
  local_100 = 0;
  FString::ParseIntoArrayWS(param_2,&local_108,0,1);
  if (1 < (int)local_100) {
    piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38);
    if ((*piVar13 < DAT_1468b5db8) && (_Init_thread_header(&DAT_1468b5db8), DAT_1468b5db8 == -1)) {
      FName::FName(&DAT_1468b5db0,L"only",1);
      _Init_thread_footer(&DAT_1468b5db8);
    }
    if ((int)local_108[3] == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (undefined2 *)local_108[2];
    }
    plVar7 = (longlong *)FName::FName(&local_res20,puVar14,1);
    if (DAT_1468b5db0 == *plVar7) {
      if ((int)local_108[1] == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*local_108;
      }
      FName::FName(&local_88,puVar14,1);
      if ((*piVar13 < DAT_1468b5dd0) && (_Init_thread_header(&DAT_1468b5dd0), DAT_1468b5dd0 == -1))
      {
        DAT_1468b5dc0 = (void *)0x0;
        _DAT_1468b5dc8 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b5dc0,0);
        FGenericPlatformString::Convert<char,wchar_t>(DAT_1468b5dc0,5,&DAT_144cc1054,5,0x3f);
        atexit((_func_5014 *)&LAB_143e79010);
        _Init_thread_footer(&DAT_1468b5dd0);
      }
      if ((*piVar13 < DAT_1468b5de8) && (_Init_thread_header(&DAT_1468b5de8), DAT_1468b5de8 == -1))
      {
        DAT_1468b5dd8 = (void *)0x0;
        _DAT_1468b5de0 = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1468b5dd8,0);
        FGenericPlatformString::Convert<char,wchar_t>(DAT_1468b5dd8,9," Verbose",9,0x3f);
        atexit((_func_5014 *)&LAB_143e79030);
        _Init_thread_footer(&DAT_1468b5de8);
      }
      plVar7 = (longlong *)(param_1 + 0x10);
      uStack_d4 = 1;
      uVar3 = *(uint *)(param_1 + 0x38);
      puVar22 = (uint *)(param_1 + 0x20);
      local_d8 = 0;
      uStack_c4 = 0;
      iStack_c0 = 0;
      if (uVar3 != 0) {
        puVar20 = *(uint **)(param_1 + 0x30);
        if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
          puVar20 = puVar22;
        }
        uVar4 = *puVar20;
        iStack_c0 = 0;
        local_d8 = 0;
        while (uVar4 == 0) {
          lVar12 = (longlong)local_d8;
          iStack_c0 = iStack_c0 + 0x20;
          iVar11 = local_d8 + 1;
          bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
          local_d8 = iVar11;
          if (bVar5) goto LAB_141633c4c;
          uVar4 = puVar20[lVar12 + 1];
        }
        uStack_d4 = -uVar4 & uVar4;
        iVar11 = 0x1f;
        if (uStack_d4 != 0) {
          for (; uStack_d4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uStack_d4 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        uStack_c4 = (iStack_c0 - iVar11) + 0x1f;
        if ((int)uVar3 < (int)uStack_c4) {
LAB_141633c4c:
          uStack_c4 = uVar3;
        }
      }
      local_c8 = 0xffffffff;
      uVar4 = *(uint *)(param_1 + 0x38);
      uStack_a8 = CONCAT44(uStack_d4,local_d8);
      uStack_98 = CONCAT44(uStack_c4,0xffffffff);
      uStack_90 = CONCAT44(uStack_bc,iStack_c0);
      uVar15 = -1 << ((byte)uVar4 & 0x1f);
      uVar19 = uVar4 & 0xffffffe0;
      uStack_a0 = CONCAT44(uVar4,uVar15);
      iStack_78 = local_d8;
      uStack_74 = uStack_d4;
      puStack_d0 = puVar22;
      local_b8 = plVar7;
      local_b0 = plVar7;
      local_70 = puVar22;
      uStack_68 = uStack_98;
      local_60 = uStack_90;
      local_80 = plVar7;
      uVar17 = uStack_a0;
      if (uVar4 != uVar3) {
        puVar20 = *(uint **)(param_1 + 0x30);
        if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
          puVar20 = puVar22;
        }
        uVar15 = puVar20[(int)uVar4 >> 5] & uVar15;
        iVar11 = (int)uVar4 >> 5;
        while (uVar15 == 0) {
          uVar19 = uVar19 + 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
          goto LAB_141633d11;
          uVar15 = puVar20[(longlong)iVar11 + 1];
          uStack_a0 = 0xffffffff;
          iVar11 = iVar11 + 1;
        }
        uVar15 = -uVar15 & uVar15;
        iVar11 = 0x1f;
        if (uVar15 != 0) {
          for (; uVar15 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uVar15 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        iVar11 = (uVar19 - iVar11) + 0x1f;
        uStack_a0 = CONCAT44(iVar11,(undefined4)uStack_a0);
        uVar17 = uStack_a0;
        if ((int)uVar3 < iVar11) {
LAB_141633d11:
          uStack_a0 = CONCAT44(uVar3,(undefined4)uStack_a0);
          uVar17 = uStack_a0;
        }
      }
      while( true ) {
        if (((uStack_68._4_4_ == (int)((ulonglong)uVar17 >> 0x20)) && (local_70 == puVar22)) &&
           (local_80 == plVar7)) break;
        puVar1 = (undefined4 *)(*local_80 + (longlong)uStack_68._4_4_ * 0x18);
        local_58 = *puVar1;
        uStack_54 = puVar1[1];
        uStack_50 = (undefined4)*(longlong *)(puVar1 + 2);
        uStack_4c = puVar1[3];
        local_res20 = *(longlong *)(puVar1 + 2);
        if (local_res20 == local_88) {
          plVar8 = (longlong *)FName::ToString(&local_res20,local_48);
          pvVar6 = DAT_1468b5dd8;
          if ((int)plVar8[1] < 2) {
            lVar12 = (longlong)DAT_1468b5de0;
            local_f8 = (void *)0x0;
            local_f0 = DAT_1468b5de0;
            if (DAT_1468b5de0 == 0) {
              local_ec = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                        (&local_f8,_DAT_1468b5de0 & 0xffffffff,0);
              _guard_xfg_dispatch_icall_nop(local_f8,pvVar6,lVar12 * 2);
            }
          }
          else {
            if (DAT_1468b5de0 == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = DAT_1468b5de0 + -1;
            }
            if (((int)plVar8[1] != 0) || (iVar18 = 1, iVar11 == 0)) {
              iVar18 = 0;
            }
            local_128 = (void *)*plVar8;
            *plVar8 = 0;
            local_120._0_4_ = (int)plVar8[1];
            local_120._4_4_ = *(int *)((longlong)plVar8 + 0xc);
            plVar8[1] = 0;
            iVar16 = (int)local_120;
            if (local_120._4_4_ < iVar18 + iVar11 + (int)local_120) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_128);
              iVar16 = (int)local_120;
            }
            pvVar6 = DAT_1468b5dd8;
            pvVar23 = local_128;
            iVar18 = iVar16;
            iVar21 = local_120._4_4_;
            if (iVar11 != 0) {
              local_120._0_4_ = iVar16 + (uint)(iVar16 == 0) + iVar11;
              if (local_120._4_4_ < (int)local_120) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,iVar16);
              }
              iVar21 = local_120._4_4_;
              iVar18 = (int)local_120;
              pvVar23 = local_128;
              pvVar2 = (void *)((longlong)local_128 +
                               ((longlong)iVar16 - (ulonglong)(iVar16 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar2,pvVar6,(longlong)iVar11 * 2);
              *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar2) = 0;
            }
            local_128 = (void *)0x0;
            local_120 = 0;
            puVar22 = puStack_d0;
            plVar7 = local_b8;
            local_f8 = pvVar23;
            local_f0 = iVar18;
            local_ec = iVar21;
          }
          FUN_1416322e0(param_1,&local_f8,0);
          if (local_f8 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          if ((undefined1 *)CONCAT44(uStack_54,local_58) == (undefined1 *)0x0) {
            uVar10 = 6;
          }
          else {
            uVar10 = *(undefined1 *)CONCAT44(uStack_54,local_58);
          }
          if ((int)local_108[1] == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)*local_108;
          }
          uVar9 = FUN_141686ae0(uVar10);
          FOutputDevice::LogfImpl(param_3,L"%s is now %s",puVar14,uVar9);
        }
        else {
          plVar8 = (longlong *)FName::ToString(&local_res20,&local_b0);
          pvVar6 = DAT_1468b5dc0;
          if ((int)plVar8[1] < 2) {
            lVar12 = (longlong)DAT_1468b5dc8;
            local_e8 = (void *)0x0;
            local_e0 = DAT_1468b5dc8;
            if (DAT_1468b5dc8 == 0) {
              local_dc = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                        (&local_e8,_DAT_1468b5dc8 & 0xffffffff,0);
              _guard_xfg_dispatch_icall_nop(local_e8,pvVar6,lVar12 * 2);
            }
          }
          else {
            if (DAT_1468b5dc8 == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = DAT_1468b5dc8 + -1;
            }
            if (((int)plVar8[1] != 0) || (iVar18 = 1, iVar11 == 0)) {
              iVar18 = 0;
            }
            local_118 = (void *)*plVar8;
            *plVar8 = 0;
            local_110._0_4_ = (int)plVar8[1];
            local_110._4_4_ = *(int *)((longlong)plVar8 + 0xc);
            plVar8[1] = 0;
            iVar16 = (int)local_110;
            if (local_110._4_4_ < iVar11 + (int)local_110 + iVar18) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_118);
              iVar16 = (int)local_110;
            }
            pvVar6 = DAT_1468b5dc0;
            pvVar23 = local_118;
            iVar18 = iVar16;
            iVar21 = local_110._4_4_;
            if (iVar11 != 0) {
              local_110._0_4_ = iVar16 + (uint)(iVar16 == 0) + iVar11;
              if (local_110._4_4_ < (int)local_110) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,iVar16);
              }
              iVar21 = local_110._4_4_;
              iVar18 = (int)local_110;
              pvVar23 = local_118;
              pvVar2 = (void *)((longlong)local_118 +
                               ((longlong)iVar16 - (ulonglong)(iVar16 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar2,pvVar6,(longlong)iVar11 * 2);
              *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar2) = 0;
            }
            local_118 = (void *)0x0;
            local_110 = 0;
            puVar22 = puStack_d0;
            plVar7 = local_b8;
            local_e8 = pvVar23;
            local_e0 = iVar18;
            local_dc = iVar21;
          }
          FUN_1416322e0(param_1,&local_e8);
          if (local_e8 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_b0 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        uStack_68 = CONCAT44(uStack_68._4_4_,(uint)uStack_68 & ~uStack_74);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_78);
      }
      FOutputDevice::LogfImpl(param_3,L"Disabling other logs finished");
      uVar17 = 1;
      goto LAB_14163410a;
    }
  }
  uVar17 = 0;
LAB_14163410a:
  plVar7 = local_108;
  for (iVar11 = (int)local_100; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  return uVar17;
}



// FUNCTION 1416342a0 FUN_1416342a0 body=429 status=ok
// SIG undefined FUN_1416342a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1416342a0(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 in_EAX;
  int iVar7;
  float *pfVar8;
  int iVar9;
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
  undefined1 local_38 [48];
  
  if (param_5 <= 0.0) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    return param_1;
  }
  auVar11._4_4_ = -(uint)(0.0001 < (float)((uint)(param_2[1] - param_3[1]) & uRam00000001468b5b24));
  auVar11._0_4_ = -(uint)(0.0001 < (float)((uint)(*param_2 - *param_3) & _DAT_1468b5b20));
  auVar11._8_4_ = -(uint)(0.0001 < (float)((uint)(param_2[2] - param_3[2]) & uRam00000001468b5b28));
  auVar11._12_4_ = -(uint)(0.0001 < (float)((uint)(param_2[3] - param_3[3]) & uRam00000001468b5b2c))
  ;
  iVar7 = movmskps(in_EAX,auVar11);
  if (iVar7 != 0) {
    iVar9 = -(uint)(0.0001 < (float)((uint)(*param_3 + *param_2) & _DAT_1468b5b20));
    auVar1._4_4_ = -(uint)(0.0001 < (float)((uint)(param_3[1] + param_2[1]) & uRam00000001468b5b24))
    ;
    auVar1._0_4_ = iVar9;
    auVar1._8_4_ = -(uint)(0.0001 < (float)((uint)(param_3[2] + param_2[2]) & uRam00000001468b5b28))
    ;
    auVar1._12_4_ =
         -(uint)(0.0001 < (float)((uint)(param_3[3] + param_2[3]) & uRam00000001468b5b2c));
    iVar7 = movmskps(iVar7,auVar1);
    if (iVar7 != 0) {
      param_4 = param_4 * param_5;
      fVar16 = 0.0;
      if ((0.0 <= param_4) && (fVar16 = param_4, 1.0 <= param_4)) {
        fVar16 = 1.0;
      }
      pfVar8 = (float *)FQuat::Slerp_NotNormalized(local_38,param_2,iVar9,fVar16);
      fVar6 = fRam00000001468b5bec;
      fVar5 = fRam00000001468b5be8;
      fVar4 = fRam00000001468b5be4;
      fVar3 = _DAT_1468b5be0;
      *param_1 = *pfVar8;
      param_1[1] = pfVar8[1];
      param_1[2] = pfVar8[2];
      param_1[3] = pfVar8[3];
      fVar16 = *param_1;
      fVar21 = param_1[1];
      fVar22 = param_1[2];
      fVar23 = param_1[3];
      auVar10._0_4_ = fVar16 * fVar16 + fVar22 * fVar22;
      auVar10._4_4_ = fVar21 * fVar21 + fVar23 * fVar23;
      auVar10._8_4_ = fVar22 * fVar22 + fVar16 * fVar16;
      auVar10._12_4_ = fVar23 * fVar23 + fVar21 * fVar21;
      fVar17 = auVar10._4_4_ + auVar10._0_4_;
      fVar18 = auVar10._8_4_ + auVar10._4_4_;
      fVar19 = auVar10._12_4_ + auVar10._8_4_;
      fVar20 = auVar10._0_4_ + auVar10._12_4_;
      auVar2._4_4_ = fVar18;
      auVar2._0_4_ = fVar17;
      auVar2._8_4_ = fVar19;
      auVar2._12_4_ = fVar20;
      auVar11 = rsqrtps(auVar10,auVar2);
      fVar12 = auVar11._0_4_;
      fVar13 = auVar11._4_4_;
      fVar14 = auVar11._8_4_;
      fVar15 = auVar11._12_4_;
      fVar12 = (fVar3 - fVar12 * fVar12 * fVar17 * fVar3) * fVar12 + fVar12;
      fVar13 = (fVar4 - fVar13 * fVar13 * fVar18 * fVar4) * fVar13 + fVar13;
      fVar14 = (fVar5 - fVar14 * fVar14 * fVar19 * fVar5) * fVar14 + fVar14;
      fVar15 = (fVar6 - fVar15 * fVar15 * fVar20 * fVar6) * fVar15 + fVar15;
      fVar21 = (float)(((uint)(((fVar4 - fVar13 * fVar13 * fVar18 * fVar4) * fVar13 + fVar13) *
                              fVar21) ^ uRam00000001468b5bd4) & -(uint)(1e-08 <= fVar18) ^
                      uRam00000001468b5bd4);
      fVar22 = (float)(((uint)(((fVar5 - fVar14 * fVar14 * fVar19 * fVar5) * fVar14 + fVar14) *
                              fVar22) ^ uRam00000001468b5bd8) & -(uint)(1e-08 <= fVar19) ^
                      uRam00000001468b5bd8);
      fVar23 = (float)(((uint)(((fVar6 - fVar15 * fVar15 * fVar20 * fVar6) * fVar15 + fVar15) *
                              fVar23) ^ uRam00000001468b5bdc) & -(uint)(1e-08 <= fVar20) ^
                      uRam00000001468b5bdc);
      *param_1 = (float)(((uint)(((fVar3 - fVar12 * fVar12 * fVar17 * fVar3) * fVar12 + fVar12) *
                                fVar16) ^ _DAT_1468b5bd0) & -(uint)(1e-08 <= fVar17) ^
                        _DAT_1468b5bd0);
      param_1[1] = fVar21;
      param_1[2] = fVar22;
      param_1[3] = fVar23;
      return param_1;
    }
  }
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  param_1[3] = param_3[3];
  return param_1;
}



// FUNCTION 141634450 Quantize body=172 status=ok
// SIG undefined Quantize(void)

undefined1 * FLinearColor::Quantize(float *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  
  iVar3 = (int)(param_1[3] * 255.0);
  if (iVar3 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0xff;
    if (iVar3 < 0xff) {
      iVar1 = iVar3;
    }
  }
  iVar3 = (int)(param_1[2] * 255.0);
  if (iVar3 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xff;
    if (iVar3 < 0xff) {
      uVar2 = (undefined1)iVar3;
    }
  }
  iVar3 = (int)(param_1[1] * 255.0);
  if (iVar3 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xff;
    if (iVar3 < 0xff) {
      uVar4 = (undefined1)iVar3;
    }
  }
  iVar5 = (int)(*param_1 * 255.0);
  iVar3 = 0;
  if ((-1 < iVar5) && (iVar3 = 0xff, iVar5 < 0xff)) {
    iVar3 = iVar5;
  }
  param_2[2] = (char)iVar3;
  param_2[1] = uVar4;
  *param_2 = uVar2;
  param_2[3] = (char)iVar1;
  return param_2;
}



// FUNCTION 141634500 Quaternion body=398 status=ok
// SIG undefined Quaternion(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FRotator::Quaternion(float *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = *param_1 * _DAT_1468b5ce0 -
          (float)(int)(_DAT_1468b5c90 * *param_1 * _DAT_1468b5ce0) * _DAT_1468b5c80;
  fVar6 = param_1[1] * fRam00000001468b5ce4 -
          (float)(int)(fRam00000001468b5c94 * param_1[1] * fRam00000001468b5ce4) *
          fRam00000001468b5c84;
  fVar8 = param_1[2] * fRam00000001468b5ce8 -
          (float)(int)(fRam00000001468b5c98 * param_1[2] * fRam00000001468b5ce8) *
          fRam00000001468b5c88;
  uVar1 = -(uint)(_DAT_1468b5c50 < (float)((uint)fVar4 & _DAT_1468b5b20));
  uVar2 = -(uint)(fRam00000001468b5c54 < (float)((uint)fVar6 & uRam00000001468b5b24));
  uVar3 = -(uint)(fRam00000001468b5c58 < (float)((uint)fVar8 & uRam00000001468b5b28));
  fVar4 = (float)(((uint)((float)((uint)fVar4 & _DAT_1468b5c70 | _DAT_1468b5c60) - fVar4) ^
                  (uint)fVar4) & uVar1 ^ (uint)fVar4);
  fVar6 = (float)(((uint)((float)((uint)fVar6 & uRam00000001468b5c74 | uRam00000001468b5c64) - fVar6
                         ) ^ (uint)fVar6) & uVar2 ^ (uint)fVar6);
  fVar8 = (float)(((uint)((float)((uint)fVar8 & uRam00000001468b5c78 | uRam00000001468b5c68) - fVar8
                         ) ^ (uint)fVar8) & uVar3 ^ (uint)fVar8);
  fVar5 = fVar4 * fVar4;
  fVar7 = fVar6 * fVar6;
  fVar9 = fVar8 * fVar8;
  fVar4 = (((((fVar5 * -2.3889859e-08 + 2.7525562e-06) * fVar5 + -0.00019840874) * fVar5 +
            0.008333331) * fVar5 + -0.16666667) * fVar5 + 1.0) * fVar4;
  fVar6 = (((((fVar7 * -2.3889859e-08 + 2.7525562e-06) * fVar7 + -0.00019840874) * fVar7 +
            0.008333331) * fVar7 + -0.16666667) * fVar7 + 1.0) * fVar6;
  fVar8 = (((((fVar9 * -2.3889859e-08 + 2.7525562e-06) * fVar9 + -0.00019840874) * fVar9 +
            0.008333331) * fVar9 + -0.16666667) * fVar9 + 1.0) * fVar8;
  fVar5 = (((((fVar5 * -2.6051615e-07 + 2.4760495e-05) * fVar5 + -0.0013888378) * fVar5 +
            0.041666638) * fVar5 + -0.5) * fVar5 + 1.0) *
          (float)((_DAT_1468b5bf0 ^ _DAT_1468b5b30) & uVar1 ^ _DAT_1468b5b30);
  fVar7 = (((((fVar7 * -2.6051615e-07 + 2.4760495e-05) * fVar7 + -0.0013888378) * fVar7 +
            0.041666638) * fVar7 + -0.5) * fVar7 + 1.0) *
          (float)((uRam00000001468b5bf4 ^ uRam00000001468b5b34) & uVar2 ^ uRam00000001468b5b34);
  fVar9 = (((((fVar9 * -2.6051615e-07 + 2.4760495e-05) * fVar9 + -0.0013888378) * fVar9 +
            0.041666638) * fVar9 + -0.5) * fVar9 + 1.0) *
          (float)((uRam00000001468b5bf8 ^ uRam00000001468b5b38) & uVar3 ^ uRam00000001468b5b38);
  *param_2 = fVar6 * fVar4 * fVar9 + -(fVar7 * fVar5 * fVar8);
  param_2[1] = -(fVar7 * fVar4 * fVar9) + -(fVar6 * fVar5 * fVar8);
  param_2[2] = fVar6 * fVar5 * fVar9 + -(fVar7 * fVar4 * fVar8);
  param_2[3] = fVar7 * fVar5 * fVar9 + fVar6 * fVar4 * fVar8;
  return param_2;
}



// FUNCTION 141634690 RInterpConstantTo body=559 status=ok
// SIG undefined RInterpConstantTo(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [12]
FMath::RInterpConstantTo
          (undefined1 (*param_1) [12],float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_58;
  
  fVar4 = fRam00000001468b5cf8;
  fVar3 = fRam00000001468b5cf4;
  fVar2 = _DAT_1468b5cf0;
  if (param_4 != 0.0) {
    if (((*param_2 != *param_3) || (param_3[1] != param_2[1])) || (param_3[2] != param_2[2])) {
      if (0.0 < param_5) {
        fVar10 = *param_3 - *param_2;
        fVar1 = param_2[2];
        param_4 = param_4 * param_5;
        fVar7 = (float)DAT_1468b5d00;
        fVar8 = DAT_1468b5d00._4_4_;
        fVar9 = DAT_1468b5d00._8_4_;
        auVar5._4_4_ = param_3[1] - param_2[1];
        auVar5._0_4_ = fVar10;
        auVar5._8_4_ = param_3[2] - param_2[2];
        auVar5._12_4_ = 0;
        auVar5 = divps(auVar5,_DAT_1468b5d00);
        fVar10 = fVar10 - (float)(int)auVar5._0_4_ * fVar7;
        fVar11 = (param_3[1] - param_2[1]) - (float)(int)auVar5._4_4_ * fVar8;
        fVar12 = (param_3[2] - param_2[2]) - (float)(int)auVar5._8_4_ * fVar9;
        fVar10 = (float)(-(uint)(0.0 <= fVar10) & ((uint)(fVar10 + fVar7) ^ (uint)fVar10) ^
                        (uint)(fVar10 + fVar7));
        fVar11 = (float)(-(uint)(0.0 <= fVar11) & ((uint)(fVar11 + fVar8) ^ (uint)fVar11) ^
                        (uint)(fVar11 + fVar8));
        fVar12 = (float)(-(uint)(0.0 <= fVar12) & ((uint)(fVar12 + fVar9) ^ (uint)fVar12) ^
                        (uint)(fVar12 + fVar9));
        fVar10 = (float)(((uint)(fVar10 - fVar7) ^ (uint)fVar10) & -(uint)(_DAT_1468b5cf0 < fVar10)
                        ^ (uint)fVar10);
        fVar11 = (float)(((uint)(fVar11 - fVar8) ^ (uint)fVar11) &
                         -(uint)(fRam00000001468b5cf4 < fVar11) ^ (uint)fVar11);
        fVar12 = (float)(((uint)(fVar12 - fVar9) ^ (uint)fVar12) &
                         -(uint)(fRam00000001468b5cf8 < fVar12) ^ (uint)fVar12);
        fVar8 = -param_4;
        fVar7 = fVar8;
        if ((fVar8 <= fVar10) && (fVar7 = fVar10, param_4 <= fVar10)) {
          fVar7 = param_4;
        }
        local_58._0_4_ = (float)*(undefined8 *)param_2;
        local_58._4_4_ = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
        fVar9 = fVar8;
        if ((fVar8 <= fVar11) && (fVar9 = fVar11, param_4 <= fVar11)) {
          fVar9 = param_4;
        }
        local_58 = CONCAT44(local_58._4_4_ + fVar9,(float)local_58 + fVar7);
        if ((fVar8 <= fVar12) && (fVar8 = fVar12, param_4 <= fVar12)) {
          fVar8 = param_4;
        }
        *(undefined8 *)*param_1 = local_58;
        *(float *)(*param_1 + 8) = fVar1 + fVar8;
        fVar1 = (float)DAT_1468b5d00;
        fVar7 = DAT_1468b5d00._4_4_;
        fVar8 = DAT_1468b5d00._8_4_;
        auVar6._12_4_ = 0;
        auVar6._0_12_ = *param_1;
        auVar5 = divps(auVar6,_DAT_1468b5d00);
        fVar9 = *(float *)*param_1 - (float)(int)auVar5._0_4_ * fVar1;
        fVar10 = *(float *)(*param_1 + 4) - (float)(int)auVar5._4_4_ * fVar7;
        fVar11 = *(float *)(*param_1 + 8) - (float)(int)auVar5._8_4_ * fVar8;
        fVar9 = (float)(((uint)(fVar9 + fVar1) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                       (uint)(fVar9 + fVar1));
        fVar10 = (float)(((uint)(fVar10 + fVar7) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                        (uint)(fVar10 + fVar7));
        fVar11 = (float)(((uint)(fVar11 + fVar8) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                        (uint)(fVar11 + fVar8));
        *(uint *)*param_1 =
             ((uint)(fVar9 - fVar1) ^ (uint)fVar9) & -(uint)(fVar2 < fVar9) ^ (uint)fVar9;
        *(uint *)(*param_1 + 8) =
             ((uint)(fVar11 - fVar8) ^ (uint)fVar11) & -(uint)(fVar4 < fVar11) ^ (uint)fVar11;
        *(uint *)(*param_1 + 4) =
             ((uint)(fVar10 - fVar7) ^ (uint)fVar10) & -(uint)(fVar3 < fVar10) ^ (uint)fVar10;
        return param_1;
      }
      *(undefined8 *)*param_1 = *(undefined8 *)param_3;
      *(float *)(*param_1 + 8) = param_3[2];
      return param_1;
    }
  }
  *(undefined8 *)*param_1 = *(undefined8 *)param_2;
  *(float *)(*param_1 + 8) = param_2[2];
  return param_1;
}



// FUNCTION 1416348c0 RInterpTo body=688 status=ok
// SIG undefined RInterpTo(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [12]
FMath::RInterpTo(undefined1 (*param_1) [12],float *param_2,float *param_3,float param_4,
                float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 in_EAX;
  int iVar7;
  undefined1 auVar8 [16];
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
  
  fVar6 = fRam00000001468b5cf8;
  fVar5 = fRam00000001468b5cf4;
  fVar4 = _DAT_1468b5cf0;
  if (param_4 != 0.0) {
    fVar1 = *param_2;
    if (((fVar1 != *param_3) || (param_3[1] != param_2[1])) || (param_3[2] != param_2[2])) {
      if (0.0 < param_5) {
        fVar2 = (float)DAT_1468b5d00;
        fVar3 = DAT_1468b5d00._4_4_;
        fVar14 = DAT_1468b5d00._8_4_;
        fVar15 = DAT_1468b5d00._12_4_;
        fVar18 = *param_3 - fVar1;
        param_4 = param_4 * param_5;
        auVar8._4_4_ = param_3[1] - param_2[1];
        auVar8._0_4_ = fVar18;
        auVar8._8_4_ = param_3[2] - param_2[2];
        auVar8._12_4_ = 0;
        auVar8 = divps(auVar8,_DAT_1468b5d00);
        fVar18 = fVar18 - (float)(int)auVar8._0_4_ * fVar2;
        fVar19 = (param_3[1] - param_2[1]) - (float)(int)auVar8._4_4_ * fVar3;
        fVar20 = (param_3[2] - param_2[2]) - (float)(int)auVar8._8_4_ * fVar14;
        fVar18 = (float)(-(uint)(0.0 <= fVar18) & ((uint)(fVar2 + fVar18) ^ (uint)fVar18) ^
                        (uint)(fVar2 + fVar18));
        fVar12 = (float)(-(uint)(0.0 <= fVar19) & ((uint)(fVar3 + fVar19) ^ (uint)fVar19) ^
                        (uint)(fVar3 + fVar19));
        fVar13 = (float)(-(uint)(0.0 <= fVar20) & ((uint)(fVar14 + fVar20) ^ (uint)fVar20) ^
                        (uint)(fVar14 + fVar20));
        fVar18 = (float)(((uint)(fVar18 - fVar2) ^ (uint)fVar18) & -(uint)(_DAT_1468b5cf0 < fVar18)
                        ^ (uint)fVar18);
        fVar12 = (float)(((uint)(fVar12 - fVar3) ^ (uint)fVar12) &
                         -(uint)(fRam00000001468b5cf4 < fVar12) ^ (uint)fVar12);
        fVar13 = (float)(((uint)(fVar13 - fVar14) ^ (uint)fVar13) &
                         -(uint)(fRam00000001468b5cf8 < fVar13) ^ (uint)fVar13);
        auVar9._4_4_ = fVar12;
        auVar9._0_4_ = fVar18;
        auVar9._8_4_ = fVar13;
        auVar9._12_4_ = 0;
        auVar8 = divps(auVar9,_DAT_1468b5d00);
        fVar19 = fVar18 - (float)(int)auVar8._0_4_ * fVar2;
        fVar20 = fVar12 - (float)(int)auVar8._4_4_ * fVar3;
        fVar16 = fVar13 - (float)(int)auVar8._8_4_ * fVar14;
        fVar17 = 0.0 - (float)(int)auVar8._12_4_ * fVar15;
        fVar19 = (float)(((uint)(fVar19 + fVar2) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                        (uint)(fVar19 + fVar2));
        fVar20 = (float)(((uint)(fVar20 + fVar3) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                        (uint)(fVar20 + fVar3));
        fVar16 = (float)(((uint)(fVar16 + fVar14) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                        (uint)(fVar16 + fVar14));
        fVar17 = (float)(((uint)(fVar17 + fVar15) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                        (uint)(fVar17 + fVar15));
        auVar10._4_4_ =
             -(uint)(0.0001 < (float)((((uint)(fVar20 - fVar3) ^ (uint)fVar20) &
                                       -(uint)(fRam00000001468b5cf4 < fVar20) ^ (uint)fVar20) &
                                     uRam00000001468b5b24));
        auVar10._0_4_ =
             -(uint)(0.0001 < (float)((((uint)(fVar19 - fVar2) ^ (uint)fVar19) &
                                       -(uint)(_DAT_1468b5cf0 < fVar19) ^ (uint)fVar19) &
                                     _DAT_1468b5b20));
        auVar10._8_4_ =
             -(uint)(0.0001 < (float)((((uint)(fVar16 - fVar14) ^ (uint)fVar16) &
                                       -(uint)(fRam00000001468b5cf8 < fVar16) ^ (uint)fVar16) &
                                     uRam00000001468b5b28));
        auVar10._12_4_ =
             -(uint)(0.0001 < (float)((((uint)(fVar17 - fVar15) ^ (uint)fVar17) &
                                       -(uint)(fRam00000001468b5cfc < fVar17) ^ (uint)fVar17) &
                                     uRam00000001468b5b2c));
        iVar7 = movmskps(in_EAX,auVar10);
        if (iVar7 != 0) {
          if (0.0 <= param_4) {
            if (1.0 <= param_4) {
              param_4 = 1.0;
            }
          }
          else {
            param_4 = 0.0;
          }
          fVar2 = param_2[2];
          *(ulonglong *)*param_1 = CONCAT44(fVar12 * param_4 + param_2[1],fVar18 * param_4 + fVar1);
          *(float *)(*param_1 + 8) = fVar13 * param_4 + fVar2;
          fVar1 = (float)DAT_1468b5d00;
          fVar2 = DAT_1468b5d00._4_4_;
          fVar3 = DAT_1468b5d00._8_4_;
          auVar11._12_4_ = 0;
          auVar11._0_12_ = *param_1;
          auVar8 = divps(auVar11,_DAT_1468b5d00);
          fVar14 = *(float *)*param_1 - (float)(int)auVar8._0_4_ * fVar1;
          fVar15 = *(float *)(*param_1 + 4) - (float)(int)auVar8._4_4_ * fVar2;
          fVar18 = *(float *)(*param_1 + 8) - (float)(int)auVar8._8_4_ * fVar3;
          fVar14 = (float)(((uint)(fVar14 + fVar1) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                          (uint)(fVar14 + fVar1));
          fVar15 = (float)(((uint)(fVar15 + fVar2) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                          (uint)(fVar15 + fVar2));
          fVar18 = (float)(((uint)(fVar18 + fVar3) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                          (uint)(fVar18 + fVar3));
          *(uint *)*param_1 =
               ((uint)(fVar14 - fVar1) ^ (uint)fVar14) & -(uint)(fVar4 < fVar14) ^ (uint)fVar14;
          *(uint *)(*param_1 + 8) =
               ((uint)(fVar18 - fVar3) ^ (uint)fVar18) & -(uint)(fVar6 < fVar18) ^ (uint)fVar18;
          *(uint *)(*param_1 + 4) =
               ((uint)(fVar15 - fVar2) ^ (uint)fVar15) & -(uint)(fVar5 < fVar15) ^ (uint)fVar15;
          return param_1;
        }
      }
      *(undefined8 *)*param_1 = *(undefined8 *)param_3;
      *(float *)(*param_1 + 8) = param_3[2];
      return param_1;
    }
  }
  *(undefined8 *)*param_1 = *(undefined8 *)param_2;
  *(float *)(*param_1 + 8) = param_2[2];
  return param_1;
}



// FUNCTION 141634b70 RandPointInBox body=228 status=ok
// SIG undefined RandPointInBox(void)

float * FMath::RandPointInBox(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  fVar1 = param_2[5];
  fVar2 = param_2[2];
  iVar7 = rand();
  fVar3 = param_2[4];
  fVar4 = param_2[1];
  iVar8 = rand();
  fVar5 = param_2[3];
  fVar6 = *param_2;
  iVar9 = rand();
  param_1[1] = (float)iVar8 * 3.051851e-05 * (fVar3 - fVar4) + fVar4;
  param_1[2] = (float)iVar7 * 3.051851e-05 * (fVar1 - fVar2) + fVar2;
  *param_1 = (float)iVar9 * 3.051851e-05 * (fVar5 - fVar6) + fVar6;
  return param_1;
}



// FUNCTION 141634c60 Rehash body=535 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141634d8f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141634d8f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x20 + *param_1;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,0x10);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x1c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x18) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141634e80 FUN_141634e80 body=538 status=ok
// SIG undefined FUN_141634e80(void)

void FUN_141634e80(longlong *param_1)

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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141634faf;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141634faf:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x90 + *param_1;
        uVar5 = GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x84) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x80) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 1416350a0 Rehash body=535 status=ok
// SIG undefined Rehash(void)

void TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Rehash(longlong *param_1)

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
      local_58 = 0;
      iStack_40 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1416351df;
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
LAB_1416351df:
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
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,0x10);
        uVar5 = (int)*plVar2 - 1U & uVar5;
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



// FUNCTION 1416353b0 RotateVector body=191 status=ok
// SIG undefined RotateVector(void)

float * FRotator::RotateVector(undefined8 param_1,float *param_2,float *param_3)

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
  float *pfVar12;
  undefined1 local_58 [80];
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  pfVar12 = (float *)FRotationMatrix::FRotationMatrix(local_58,param_1);
  fVar4 = pfVar12[0xd];
  fVar5 = pfVar12[0xe];
  fVar6 = pfVar12[9];
  fVar7 = pfVar12[10];
  fVar8 = pfVar12[5];
  fVar9 = pfVar12[6];
  fVar10 = pfVar12[1];
  fVar11 = pfVar12[2];
  *param_2 = pfVar12[0xc] * 0.0 + fVar3 * pfVar12[8] + fVar2 * pfVar12[4] + fVar1 * *pfVar12;
  param_2[2] = fVar5 * 0.0 + fVar3 * fVar7 + fVar2 * fVar9 + fVar1 * fVar11;
  param_2[1] = fVar4 * 0.0 + fVar3 * fVar6 + fVar2 * fVar8 + fVar1 * fVar10;
  return param_2;
}



// FUNCTION 141635470 Rotation body=114 status=ok
// SIG undefined Rotation(void)

float * FVector::Rotation(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FGenericPlatformMath::Atan2(param_1[1],*param_1);
  fVar3 = param_1[1];
  fVar1 = *param_1;
  param_2[1] = fVar2 * 57.295776;
  fVar3 = (float)FGenericPlatformMath::Atan2(param_1[2],SQRT(fVar1 * fVar1 + fVar3 * fVar3));
  param_2[2] = 0.0;
  *param_2 = fVar3 * 57.295776;
  return param_2;
}



// FUNCTION 1416354f0 Rotator body=394 status=ok
// SIG undefined Rotator(void)

float * FMatrix::Rotator(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 local_e8 [224];
  
  fVar11 = param_1[2];
  fVar1 = param_1[1];
  fVar2 = *param_1;
  fVar3 = param_1[4];
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar6 = param_1[9];
  fVar7 = param_1[8];
  fVar8 = param_1[10];
  fVar10 = (float)FGenericPlatformMath::Atan2(fVar1,fVar2);
  fVar11 = (float)FGenericPlatformMath::Atan2(fVar11,SQRT(fVar1 * fVar1 + fVar2 * fVar2));
  param_2[2] = 0.0;
  param_2[1] = fVar10 * 180.0 * 0.31830987;
  *param_2 = fVar11 * 180.0 * 0.31830987;
  lVar9 = FRotationMatrix::FRotationMatrix(local_e8,param_2);
  fVar11 = (float)FGenericPlatformMath::Atan2
                            (*(float *)(lVar9 + 0x14) * fVar6 + *(float *)(lVar9 + 0x10) * fVar7 +
                             *(float *)(lVar9 + 0x18) * fVar8,
                             *(float *)(lVar9 + 0x10) * fVar3 + *(float *)(lVar9 + 0x14) * fVar4 +
                             *(float *)(lVar9 + 0x18) * fVar5);
  param_2[2] = fVar11 * 180.0 * 0.31830987;
  return param_2;
}



// FUNCTION 141635680 Rotator body=823 status=ok
// SIG undefined Rotator(void)

float * FQuat::Rotator(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = param_1[1];
  fVar4 = param_1[2];
  fVar1 = param_1[3] * fVar4;
  fVar3 = fVar5 * *param_1;
  fVar2 = *param_1 * fVar4 - fVar5 * param_1[3];
  fVar1 = fVar3 + fVar3 + fVar1 + fVar1;
  fVar5 = 1.0 - (fVar5 * fVar5 + fVar5 * fVar5 + fVar4 * fVar4 + fVar4 * fVar4);
  if (-0.4999995 <= fVar2) {
    if (fVar2 <= 0.4999995) {
      fVar3 = ABS(fVar2 + fVar2);
      fVar4 = 1.0 - fVar3;
      if (1.0 - fVar3 <= 0.0) {
        fVar4 = 0.0;
      }
      fVar4 = SQRT(fVar4) *
              (((((((0.00667009 - fVar3 * 0.0012624911) * fVar3 - 0.017088126) * fVar3 + 0.03089188)
                  * fVar3 - 0.050174303) * fVar3 + 0.08897899) * fVar3 - 0.2145988) * fVar3 +
              1.5707963);
      if (fVar2 + fVar2 < 0.0) {
        fVar4 = fVar4 - 1.5707963;
      }
      else {
        fVar4 = 1.5707963 - fVar4;
      }
      *param_2 = fVar4 * 57.295776;
      fVar1 = (float)FGenericPlatformMath::Atan2(fVar1,fVar5);
      fVar5 = *param_1;
      fVar4 = param_1[3];
      param_2[1] = fVar1 * 57.295776;
      fVar1 = param_1[1];
      fVar5 = (float)FGenericPlatformMath::Atan2
                               (fVar1 * param_1[2] * -2.0 - (fVar5 * fVar4 + fVar5 * fVar4),
                                1.0 - (fVar5 * fVar5 + fVar5 * fVar5 + fVar1 * fVar1 + fVar1 * fVar1
                                      ));
      param_2[2] = fVar5 * 57.295776;
    }
    else {
      *param_2 = 90.0;
      fVar4 = (float)FGenericPlatformMath::Atan2(fVar1,fVar5);
      fVar5 = param_1[3];
      param_2[1] = fVar4 * 57.295776;
      fVar5 = (float)FGenericPlatformMath::Atan2(*param_1,fVar5);
      fVar4 = param_2[1] - fVar5 * 2.0 * 57.295776;
      fVar5 = (float)(int)(fVar4 * 0.0027777778) * 360.0;
      if (ABS(fVar4) < ABS(fVar5)) {
        fVar5 = fVar4;
      }
      fVar4 = fVar4 - fVar5;
      if (fVar4 < 0.0) {
        fVar4 = fVar4 + 360.0;
      }
      if (180.0 < fVar4) {
        fVar4 = fVar4 - 360.0;
      }
      param_2[2] = fVar4;
    }
  }
  else {
    *param_2 = -90.0;
    fVar1 = (float)FGenericPlatformMath::Atan2(fVar1,fVar5);
    fVar5 = param_1[3];
    fVar4 = *param_1;
    param_2[1] = fVar1 * 57.295776;
    fVar5 = (float)FGenericPlatformMath::Atan2(fVar4,fVar5);
    fVar4 = -(fVar1 * 57.295776) - fVar5 * 2.0 * 57.295776;
    fVar5 = (float)(int)(fVar4 * 0.0027777778) * 360.0;
    if (ABS(fVar4) < ABS(fVar5)) {
      fVar5 = fVar4;
    }
    fVar4 = fVar4 - fVar5;
    if (fVar4 < 0.0) {
      fVar4 = fVar4 + 360.0;
    }
    if (180.0 < fVar4) {
      fVar4 = fVar4 - 360.0;
    }
    param_2[2] = fVar4;
  }
  return param_2;
}



// FUNCTION 1416359c0 RoundHalfFromZero body=113 status=ok
// SIG undefined RoundHalfFromZero(void)

void FMath::RoundHalfFromZero(void)

{
  float fVar1;
  
  fVar1 = (float)MathRoundingUtil::TruncateToHalfIfClose();
  if (fVar1 < 0.0) {
    return;
  }
  return;
}



// FUNCTION 141635a40 RoundHalfFromZero body=151 status=ok
// SIG undefined RoundHalfFromZero(void)

double FMath::RoundHalfFromZero(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  dVar5 = (double)MathRoundingUtil::TruncateToHalfIfClose();
  if (0.0 <= dVar5) {
    dVar5 = dVar5 + 0.5;
    lVar4 = (longlong)dVar5;
    if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar5)) {
      auVar2._8_4_ = SUB84(dVar5,0);
      auVar2._0_8_ = dVar5;
      auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      uVar3 = movmskpd(0,auVar2);
      dVar5 = (double)(longlong)(lVar4 - (ulonglong)(uVar3 & 1));
    }
  }
  else {
    dVar5 = dVar5 - 0.5;
    lVar4 = (longlong)dVar5;
    if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar5)) {
      auVar1._8_4_ = SUB84(dVar5,0);
      auVar1._0_8_ = dVar5;
      auVar1._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      uVar3 = movmskpd(0,auVar1);
      return (double)(longlong)(lVar4 + (ulonglong)(uVar3 & 1 ^ 1));
    }
  }
  return dVar5;
}



// FUNCTION 141635ae0 RoundHalfToEven body=270 status=ok
// SIG undefined RoundHalfToEven(void)

double FMath::RoundHalfToEven(void)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  byte bVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 extraout_XMM0_Da;
  uint extraout_XMM0_Db;
  uint uVar9;
  
  uVar7 = MathRoundingUtil::TruncateToHalfIfClose();
  bVar1 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) < 0.0;
  uVar9 = extraout_XMM0_Db;
  if (bVar1) {
    uVar9 = extraout_XMM0_Db ^ 0x80000000;
  }
  dVar5 = (double)CONCAT44(uVar9,extraout_XMM0_Da);
  lVar8 = (longlong)dVar5;
  if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != (double)CONCAT44(uVar9,extraout_XMM0_Da)))
  {
    auVar4._4_4_ = uVar9;
    auVar4._0_4_ = extraout_XMM0_Da;
    auVar4._8_4_ = extraout_XMM0_Da;
    auVar4._12_4_ = uVar9;
    uVar9 = movmskpd(uVar7,auVar4);
    dVar5 = (double)(longlong)(lVar8 - (ulonglong)(uVar9 & 1));
  }
  if (9.223372036854776e+18 <= dVar5) {
    dVar5 = dVar5 - 9.223372036854776e+18;
  }
  bVar6 = ~(byte)(longlong)dVar5;
  uVar7 = (undefined4)CONCAT71((int7)((ulonglong)(longlong)dVar5 >> 8),bVar6);
  if ((bVar6 & 1) == 0) {
    if (!bVar1) goto LAB_141635bb2;
  }
  else if (bVar1) {
LAB_141635bb2:
    dVar5 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) + 0.5;
    lVar8 = (longlong)dVar5;
    if (lVar8 == -0x8000000000000000) {
      return dVar5;
    }
    if ((double)lVar8 == dVar5) {
      return dVar5;
    }
    auVar3._8_4_ = SUB84(dVar5,0);
    auVar3._0_8_ = dVar5;
    auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uVar9 = movmskpd(uVar7,auVar3);
    return (double)(longlong)(lVar8 - (ulonglong)(uVar9 & 1));
  }
  dVar5 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) - 0.5;
  lVar8 = (longlong)dVar5;
  if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != dVar5)) {
    auVar2._8_4_ = SUB84(dVar5,0);
    auVar2._0_8_ = dVar5;
    auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uVar9 = movmskpd(uVar7,auVar2);
    return (double)(longlong)(lVar8 + (ulonglong)(uVar9 & 1 ^ 1));
  }
  return dVar5;
}



// FUNCTION 141635bf0 RoundHalfToZero body=151 status=ok
// SIG undefined RoundHalfToZero(void)

double FMath::RoundHalfToZero(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  double dVar5;
  
  dVar5 = (double)MathRoundingUtil::TruncateToHalfIfClose();
  if (0.0 <= dVar5) {
    dVar5 = dVar5 - 0.5;
    lVar4 = (longlong)dVar5;
    if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar5)) {
      auVar2._8_4_ = SUB84(dVar5,0);
      auVar2._0_8_ = dVar5;
      auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      uVar3 = movmskpd(0,auVar2);
      dVar5 = (double)(longlong)(lVar4 + (ulonglong)(uVar3 & 1 ^ 1));
    }
  }
  else {
    dVar5 = dVar5 + 0.5;
    lVar4 = (longlong)dVar5;
    if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar5)) {
      auVar1._8_4_ = SUB84(dVar5,0);
      auVar1._0_8_ = dVar5;
      auVar1._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      uVar3 = movmskpd(0,auVar1);
      return (double)(longlong)(lVar4 - (ulonglong)(uVar3 & 1));
    }
  }
  return dVar5;
}



// FUNCTION 141635c90 SegmentDistToSegment body=209 status=ok
// SIG undefined SegmentDistToSegment(void)

void FMath::SegmentDistToSegment
               (float *param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined1 local_68 [8];
  float *local_60;
  float *local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  
  local_4c = param_2[1] - param_1[1];
  local_34 = param_1[1] - param_3[1];
  local_50 = *param_2 - *param_1;
  local_38 = *param_1 - *param_3;
  local_44 = *param_4 - *param_3;
  local_48 = param_2[2] - param_1[2];
  local_30 = param_1[2] - param_3[2];
  local_3c = param_4[2] - param_3[2];
  local_40 = param_4[1] - param_3[1];
  local_68[0] = 0;
  local_60 = param_1;
  local_58 = param_3;
  SegmentDistToSegment_Solver::Solve(local_68,param_5,param_6);
  return;
}



// FUNCTION 141635d70 SegmentDistToSegmentSafe body=971 status=ok
// SIG undefined SegmentDistToSegmentSafe(void)

void FMath::SegmentDistToSegmentSafe
               (float *param_1,float *param_2,float *param_3,float *param_4,undefined8 *param_5,
               undefined8 *param_6)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  float *local_a0;
  float *local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  
  local_80 = param_4[1] - param_3[1];
  local_8c = param_2[1] - param_1[1];
  local_84 = *param_4 - *param_3;
  local_74 = param_1[1] - param_3[1];
  local_7c = param_4[2] - param_3[2];
  local_90 = *param_2 - *param_1;
  local_78 = *param_1 - *param_3;
  local_88 = param_2[2] - param_1[2];
  local_70 = param_1[2] - param_3[2];
  fVar5 = local_8c * local_8c + local_90 * local_90 + local_88 * local_88;
  fVar10 = local_8c;
  fVar12 = local_90;
  fVar7 = local_88;
  if ((fVar5 != 1.0) &&
     (fVar10 = DAT_1468b5d94, fVar12 = DAT_1468b5d90, fVar7 = DAT_1468b5d98, 1e-08 <= fVar5)) {
    auVar9 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar7 = auVar9._0_4_;
    fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
    fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
    fVar10 = local_8c * fVar7;
    fVar12 = local_90 * fVar7;
    fVar7 = local_88 * fVar7;
  }
  fVar6 = local_80 * local_80 + local_84 * local_84 + local_7c * local_7c;
  fVar5 = local_80;
  fVar11 = local_84;
  fVar8 = local_7c;
  if ((fVar6 != 1.0) &&
     (fVar5 = DAT_1468b5d94, fVar11 = DAT_1468b5d90, fVar8 = DAT_1468b5d98, 1e-08 <= fVar6)) {
    auVar9 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar8 = auVar9._0_4_;
    fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
    fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
    fVar5 = local_80 * fVar8;
    fVar11 = local_84 * fVar8;
    fVar8 = local_7c * fVar8;
  }
  if (((fVar12 == 0.0) && (fVar10 == 0.0)) && (fVar7 == 0.0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((fVar11 == 0.0) && (fVar5 == 0.0)) && (fVar8 == 0.0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  local_a0 = param_1;
  local_98 = param_3;
  if (bVar2) {
    fVar10 = param_1[2];
    *param_5 = *(undefined8 *)param_1;
    *(float *)(param_5 + 1) = fVar10;
    if (bVar3) {
      fVar10 = param_3[2];
      *param_6 = *(undefined8 *)param_3;
      *(float *)(param_6 + 1) = fVar10;
    }
    else {
      puVar4 = (undefined8 *)ClosestPointOnSegment(local_b8,param_1);
      *param_6 = *puVar4;
      *(undefined4 *)(param_6 + 1) = *(undefined4 *)(puVar4 + 1);
    }
  }
  else if (bVar3) {
    puVar4 = (undefined8 *)ClosestPointOnSegment(local_b8,param_3,param_1,param_2);
    *param_5 = *puVar4;
    uVar1 = *(undefined8 *)param_3;
    *(undefined4 *)(param_5 + 1) = *(undefined4 *)(puVar4 + 1);
    fVar10 = param_3[2];
    *param_6 = uVar1;
    *(float *)(param_6 + 1) = fVar10;
  }
  else {
    fVar6 = fVar5 * fVar10 + fVar11 * fVar12 + fVar8 * fVar7;
    local_a8[0] = (fVar5 * fVar5 + fVar11 * fVar11 + fVar8 * fVar8) *
                  (fVar10 * fVar10 + fVar12 * fVar12 + fVar7 * fVar7) - fVar6 * fVar6 < 0.0001;
    SegmentDistToSegment_Solver::Solve(local_a8,param_5,param_6);
  }
  return;
}



// FUNCTION 141636140 SegmentIntersection2D body=285 status=ok
// SIG undefined SegmentIntersection2D(void)

undefined1
FMath::SegmentIntersection2D
          (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = *param_2 - *param_1;
  fVar8 = param_2[1] - param_1[1];
  fVar5 = param_1[1] - param_3[1];
  fVar1 = param_2[2];
  fVar2 = param_1[2];
  fVar4 = 1.0 / ((param_4[1] - param_3[1]) * fVar7 - (*param_4 - *param_3) * fVar8);
  fVar6 = (fVar5 * (*param_4 - *param_3) - (*param_1 - *param_3) * (param_4[1] - param_3[1])) *
          fVar4;
  fVar4 = (fVar5 * fVar7 - (*param_1 - *param_3) * fVar8) * fVar4;
  if ((((fVar4 < 0.0) || (1.0 < fVar4)) || (fVar6 < 0.0)) || (1.0 < fVar6)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    *param_5 = fVar7 * fVar6 + *param_1;
    param_5[1] = fVar8 * fVar6 + param_1[1];
    param_5[2] = (fVar1 - fVar2) * fVar6 + param_1[2];
  }
  return uVar3;
}



// FUNCTION 141636260 FUN_141636260 body=484 status=ok
// SIG undefined FUN_141636260(void)

void FUN_141636260(float *param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  char local_res10 [8];
  byte local_res18 [8];
  byte local_res20 [8];
  byte local_28 [16];
  
  bVar1 = *(byte *)(param_2 + 5);
  local_28[0] = 0;
  local_res20[0] = 0;
  local_res18[0] = 0;
  if ((bVar1 & 1) == 0) {
    local_28[0] = (byte)((int)ROUND(*param_1 * 0.7111111 + *param_1 * 0.7111111 + 0.5) >> 1);
    local_res20[0] = (byte)((int)ROUND(param_1[1] * 0.7111111 + param_1[1] * 0.7111111 + 0.5) >> 1);
    local_res18[0] = (byte)((int)ROUND(param_1[2] * 0.7111111 + param_1[2] * 0.7111111 + 0.5) >> 1);
  }
  local_res10[0] = local_28[0] != 0;
  (**(code **)(*param_2 + 0x58))(param_2,local_res10,1);
  if (local_res10[0] == '\0') {
    local_28[0] = 0;
  }
  else {
    plVar2 = (longlong *)param_2[1];
    if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_28,1);
    }
    else {
      local_28[0] = *(byte *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
  }
  local_res10[0] = local_res20[0] != 0;
  (**(code **)(*param_2 + 0x58))(param_2,local_res10,1);
  if (local_res10[0] == '\0') {
    local_res20[0] = 0;
  }
  else {
    plVar2 = (longlong *)param_2[1];
    if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res20,1);
    }
    else {
      local_res20[0] = *(byte *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
  }
  local_res10[0] = local_res18[0] != 0;
  (**(code **)(*param_2 + 0x58))(param_2,local_res10,1);
  if (local_res10[0] == '\0') {
    local_res18[0] = 0;
  }
  else {
    plVar2 = (longlong *)param_2[1];
    if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res18,1);
    }
    else {
      local_res18[0] = *(byte *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
  }
  if ((bVar1 & 1) != 0) {
    *param_1 = (float)local_28[0] * 1.40625;
    param_1[1] = (float)local_res20[0] * 1.40625;
    param_1[2] = (float)local_res18[0] * 1.40625;
  }
  return;
}



// FUNCTION 141636450 FUN_141636450 body=574 status=ok
// SIG undefined FUN_141636450(void)

void FUN_141636450(float *param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  char local_res10 [8];
  ushort local_res18 [4];
  ushort local_res20 [4];
  ushort local_38 [8];
  
  bVar1 = *(byte *)(param_2 + 5);
  local_38[0] = 0;
  local_res18[0] = 0;
  local_res20[0] = 0;
  if ((bVar1 & 1) == 0) {
    local_38[0] = (ushort)((int)ROUND(*param_1 * 182.04445 + *param_1 * 182.04445 + 0.5) >> 1);
    local_res18[0] =
         (ushort)((int)ROUND(param_1[1] * 182.04445 + param_1[1] * 182.04445 + 0.5) >> 1);
    local_res20[0] =
         (ushort)((int)ROUND(param_1[2] * 182.04445 + param_1[2] * 182.04445 + 0.5) >> 1);
  }
  local_res10[0] = local_38[0] != 0;
  (**(code **)(*param_2 + 0x58))(param_2,local_res10,1);
  if (local_res10[0] == '\0') {
    local_38[0] = 0;
  }
  else {
    plVar2 = (longlong *)param_2[1];
    if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_38,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_38,2);
      }
    }
    else {
      local_38[0] = *(ushort *)*plVar2;
      *plVar2 = *plVar2 + 2;
    }
  }
  local_res10[0] = local_res18[0] != 0;
  (**(code **)(*param_2 + 0x58))(param_2,local_res10,1);
  if (local_res10[0] == '\0') {
    local_res18[0] = 0;
  }
  else {
    plVar2 = (longlong *)param_2[1];
    if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res18,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res18,2);
      }
    }
    else {
      local_res18[0] = *(ushort *)*plVar2;
      *plVar2 = *plVar2 + 2;
    }
  }
  local_res10[0] = local_res20[0] != 0;
  (**(code **)(*param_2 + 0x58))(param_2,local_res10,1);
  if (local_res10[0] == '\0') {
    local_res20[0] = 0;
  }
  else {
    plVar2 = (longlong *)param_2[1];
    if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res20,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res20,2);
      }
    }
    else {
      local_res20[0] = *(ushort *)*plVar2;
      *plVar2 = *plVar2 + 2;
    }
  }
  if ((bVar1 & 1) != 0) {
    *param_1 = (float)local_38[0] * 0.005493164;
    param_1[1] = (float)local_res18[0] * 0.005493164;
    param_1[2] = (float)local_res20[0] * 0.005493164;
  }
  return;
}



// FUNCTION 141636690 SetToRelativeTransform body=333 status=ok
// SIG undefined SetToRelativeTransform(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FTransform::SetToRelativeTransform(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 in_XMM2 [16];
  undefined1 auVar3 [16];
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
  
  auVar3 = *(undefined1 (*) [16])(param_2 + 8);
  fVar2 = auVar3._0_4_;
  fVar5 = auVar3._4_4_;
  fVar7 = auVar3._8_4_;
  fVar9 = auVar3._12_4_;
  auVar3 = rcpps(in_XMM2,auVar3);
  fVar1 = auVar3._0_4_;
  fVar4 = auVar3._4_4_;
  fVar6 = auVar3._8_4_;
  fVar8 = auVar3._12_4_;
  fVar1 = (fVar1 + fVar1) - fVar1 * fVar1 * fVar2;
  fVar4 = (fVar4 + fVar4) - fVar4 * fVar4 * fVar5;
  fVar6 = (fVar6 + fVar6) - fVar6 * fVar6 * fVar7;
  fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar9;
  fVar1 = (fVar1 + fVar1) - fVar1 * fVar1 * fVar2;
  fVar4 = (fVar4 + fVar4) - fVar4 * fVar4 * fVar5;
  fVar6 = (fVar6 + fVar6) - fVar6 * fVar6 * fVar7;
  fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar9;
  fVar15 = (float)((-(uint)((float)((uint)fVar2 & _DAT_1468b5b20) <= 1e-08) & (uint)fVar1 ^
                   (uint)fVar1) & _DAT_1468b5b40);
  fVar16 = (float)((-(uint)((float)((uint)fVar5 & uRam00000001468b5b24) <= 1e-08) & (uint)fVar4 ^
                   (uint)fVar4) & uRam00000001468b5b44);
  fVar17 = (float)((-(uint)((float)((uint)fVar7 & uRam00000001468b5b28) <= 1e-08) & (uint)fVar6 ^
                   (uint)fVar6) & uRam00000001468b5b48);
  fVar18 = (float)((-(uint)((float)((uint)fVar9 & uRam00000001468b5b2c) <= 1e-08) & (uint)fVar8 ^
                   (uint)fVar8) & uRam00000001468b5b4c);
  param_1[8] = fVar15 * param_1[8];
  param_1[9] = fVar16 * param_1[9];
  param_1[10] = fVar17 * param_1[10];
  param_1[0xb] = fVar18 * param_1[0xb];
  fVar11 = *param_2 * _DAT_1468b5b60;
  fVar12 = param_2[1] * fRam00000001468b5b64;
  fVar13 = param_2[2] * fRam00000001468b5b68;
  fVar14 = param_2[3] * fRam00000001468b5b6c;
  fVar1 = (float)((uint)(param_1[4] - param_2[4]) & _DAT_1468b5b40);
  fVar4 = (float)((uint)(param_1[5] - param_2[5]) & uRam00000001468b5b44);
  fVar6 = (float)((uint)(param_1[6] - param_2[6]) & uRam00000001468b5b48);
  fVar8 = (float)((uint)(param_1[7] - param_2[7]) & uRam00000001468b5b4c);
  fVar2 = fVar6 * fVar12 - fVar4 * fVar13;
  fVar5 = fVar1 * fVar13 - fVar6 * fVar11;
  fVar7 = fVar4 * fVar11 - fVar1 * fVar12;
  fVar9 = fVar8 * fVar14 - fVar8 * fVar14;
  fVar2 = fVar2 + fVar2;
  fVar5 = fVar5 + fVar5;
  fVar7 = fVar7 + fVar7;
  fVar9 = fVar9 + fVar9;
  param_1[4] = ((fVar7 * fVar12 - fVar5 * fVar13) + fVar14 * fVar2 + fVar1) * fVar15;
  param_1[5] = ((fVar2 * fVar13 - fVar7 * fVar11) + fVar14 * fVar5 + fVar4) * fVar16;
  param_1[6] = ((fVar5 * fVar11 - fVar2 * fVar12) + fVar14 * fVar7 + fVar6) * fVar17;
  param_1[7] = ((fVar9 * fVar14 - fVar9 * fVar14) + fVar14 * fVar9 + fVar8) * fVar18;
  fVar2 = *param_1;
  fVar5 = param_1[1];
  fVar7 = param_1[2];
  fVar9 = param_1[3];
  fVar17 = fVar7 * fVar11 * fRam00000001468b5bc4;
  fVar18 = fVar5 * fVar11 * fRam00000001468b5bc8;
  fVar10 = fVar2 * fVar11 * fRam00000001468b5bcc;
  fVar1 = fVar9 * fVar12 * fRam00000001468b5bb4;
  fVar4 = fVar2 * fVar12 * fRam00000001468b5bb8;
  fVar6 = fVar5 * fVar12 * fRam00000001468b5bbc;
  fVar8 = fVar2 * fVar13 * fRam00000001468b5ba4;
  fVar15 = fVar9 * fVar13 * fRam00000001468b5ba8;
  fVar16 = fVar7 * fVar13 * fRam00000001468b5bac;
  *param_1 = fVar9 * fVar11 * _DAT_1468b5bc0 + fVar2 * fVar14 + fVar7 * fVar12 * _DAT_1468b5bb0 +
             fVar5 * fVar13 * _DAT_1468b5ba0;
  param_1[1] = fVar17 + fVar5 * fVar14 + fVar1 + fVar8;
  param_1[2] = fVar18 + fVar7 * fVar14 + fVar4 + fVar15;
  param_1[3] = fVar10 + fVar9 * fVar14 + fVar6 + fVar16;
  return;
}



// FUNCTION 1416367e0 SetUnfocusedVolumeMultiplier body=65 status=ok
// SIG undefined SetUnfocusedVolumeMultiplier(void)

void FApp::SetUnfocusedVolumeMultiplier(undefined4 param_1)

{
  DAT_1468b5a4c = param_1;
  FConfigCacheIni::SetFloat
            (DAT_1468b6148,L"Audio",L"UnfocusedVolumeMultiplier",param_1,&DAT_1468e2360);
  DAT_1468b5b1c = 1;
  return;
}



// FUNCTION 141636830 FUN_141636830 body=528 status=ok
// SIG undefined FUN_141636830(void)

void FUN_141636830(longlong param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_res18 [2];
  longlong *local_28;
  byte *local_20;
  
  pbVar7 = (byte *)0x0;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar3 = *(longlong *)(param_1 + 0xf0);
    if (*(longlong *)(param_1 + 0xf0) == 0) {
      lVar3 = param_1 + 0xe8;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0xf8) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        pbVar5 = (byte *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0x18) == param_3) {
          if (iVar2 != -1) goto LAB_1416368c3;
          break;
        }
        iVar2 = *(int *)(pbVar5 + 0x10);
      } while (iVar2 != -1);
    }
  }
  pbVar5 = pbVar7;
LAB_1416368c3:
  pbVar4 = pbVar5 + 8;
  if (pbVar5 == (byte *)0x0) {
    pbVar4 = pbVar7;
  }
  local_res18[0] = param_3;
  if (pbVar4 == (byte *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468b5ed0) &&
       (_Init_thread_header(&DAT_1468b5ed0), DAT_1468b5ed0 == -1)) {
      FName::FName(&DAT_1468b5ec8,L"BootGlobal",1);
      _Init_thread_footer(&DAT_1468b5ed0);
    }
    if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
      lVar3 = *(longlong *)(param_1 + 0xf0);
      if (*(longlong *)(param_1 + 0xf0) == 0) {
        lVar3 = param_1 + 0xe8;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)
                                ((int)((ulonglong)DAT_1468b5ec8 >> 0x20) + (int)DAT_1468b5ec8) &
                               (longlong)*(int *)(param_1 + 0xf8) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          pbVar5 = (byte *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0x18);
          if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0x18) == DAT_1468b5ec8
             ) {
            if (iVar2 != -1) goto LAB_141636983;
            break;
          }
          iVar2 = *(int *)(pbVar5 + 0x10);
        } while (iVar2 != -1);
      }
    }
    pbVar5 = pbVar7;
LAB_141636983:
    pbVar4 = pbVar5 + 8;
    if (pbVar5 == (byte *)0x0) {
      pbVar4 = pbVar7;
    }
    if (pbVar4 == (byte *)0x0) goto LAB_1416369bd;
  }
  bVar1 = *pbVar4;
  param_2[2] = bVar1;
  bVar6 = bVar1 & 0xf;
  if (param_2[3] <= (bVar1 & 0xf)) {
    bVar6 = param_2[3];
  }
  param_2[1] = bVar1 >> 7;
  *param_2 = bVar6;
LAB_1416369bd:
  local_res8[0] = *param_2;
  if (local_res8[0] != 0) {
    local_28 = local_res18;
    local_20 = local_res8;
    FUN_140c2d3a0(param_1 + 0x100,local_res10,&local_28,0);
  }
  return;
}



// FUNCTION 141636a40 FUN_141636a40 body=171 status=ok
// SIG undefined FUN_141636a40(void)

bool FUN_141636a40(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_1468b6134 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              )) goto LAB_141636a67;
  _Init_thread_header(&DAT_1468b6134);
  if (DAT_1468b6134 != -1) goto LAB_141636a67;
  uVar3 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar3,L"ONETHREAD");
  if (cVar1 == '\0') {
    uVar3 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar3,L"noperfthreads");
    if (cVar1 != '\0') goto LAB_141636ad2;
    cVar1 = FUN_1415bac00();
    if (cVar1 == '\0') goto LAB_141636ad2;
    iVar2 = FUN_1416a5810();
    if (iVar2 < 4) goto LAB_141636ad2;
    DAT_1468b6131 = '\0';
  }
  else {
LAB_141636ad2:
    DAT_1468b6131 = '\x01';
  }
  _Init_thread_footer(&DAT_1468b6134);
LAB_141636a67:
  return DAT_1468b6131 == '\0';
}



// FUNCTION 141636af0 SlerpFullPath_NotNormalized body=495 status=ok
// SIG undefined SlerpFullPath_NotNormalized(void)

float * FQuat::SlerpFullPath_NotNormalized
                  (float *param_1,float *param_2,float *param_3,float param_4)

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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar11 = fVar5 * fVar1 + fVar6 * fVar2 + fVar7 * fVar3 + param_3[3] * fVar4;
  fVar8 = -1.0;
  if (-1.0 <= fVar11) {
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
    if (fVar11 < -1.0) goto LAB_141636bbd;
  }
  else {
    fVar11 = -1.0;
  }
  fVar8 = fVar11;
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
LAB_141636bbd:
  fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar8);
  if (0.0001 <= ABS(fVar11)) {
    fVar8 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    fVar9 = ::_guard_xfg_dispatch_icall_nop((1.0 - param_4) * fVar11);
    fVar9 = fVar9 * (1.0 / fVar8);
    fVar10 = ::_guard_xfg_dispatch_icall_nop(fVar11 * param_4);
    fVar11 = param_3[3];
    fVar10 = fVar10 * (1.0 / fVar8);
    *param_1 = fVar5 * fVar10 + fVar1 * fVar9;
    param_1[1] = fVar6 * fVar10 + fVar2 * fVar9;
    param_1[2] = fVar7 * fVar10 + fVar3 * fVar9;
    param_1[3] = fVar11 * fVar10 + fVar4 * fVar9;
  }
  else {
    *param_1 = fVar1;
    param_1[1] = fVar2;
    param_1[2] = fVar3;
    param_1[3] = fVar4;
  }
  return param_1;
}



// FUNCTION 141636ce0 Slerp_NotNormalized body=340 status=ok
// SIG undefined Slerp_NotNormalized(void)

float * FQuat::Slerp_NotNormalized(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = param_2[1] * param_3[1] + *param_2 * *param_3 + param_2[2] * param_3[2] +
          param_2[3] * param_3[3];
  fVar4 = ABS(fVar7);
  if (0.9999 <= fVar4) {
    fVar4 = 1.0 - param_4;
  }
  else {
    fVar5 = -1.0;
    if ((-1.0 <= fVar4) && (fVar5 = fVar4, 1.0 <= fVar4)) {
      fVar5 = 1.0;
    }
    fVar5 = ::_guard_xfg_dispatch_icall_nop(fVar5);
    fVar6 = ::_guard_xfg_dispatch_icall_nop(fVar5);
    fVar4 = ::_guard_xfg_dispatch_icall_nop((1.0 - param_4) * fVar5);
    fVar4 = fVar4 * (1.0 / fVar6);
    param_4 = ::_guard_xfg_dispatch_icall_nop(fVar5 * param_4);
    param_4 = param_4 * (1.0 / fVar6);
  }
  if (fVar7 < 0.0) {
    param_4 = -param_4;
  }
  fVar7 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = param_4 * *param_3 + fVar4 * *param_2;
  param_1[1] = param_4 * fVar7 + fVar4 * fVar1;
  param_1[2] = param_4 * fVar5 + fVar4 * fVar2;
  param_1[3] = param_4 * fVar6 + fVar4 * fVar3;
  return param_1;
}



// FUNCTION 141636e40 Solve body=679 status=ok
// SIG undefined Solve(void)

void SegmentDistToSegment_Solver::Solve(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar4 = *(float *)(param_1 + 0x1c);
  fVar6 = *(float *)(param_1 + 0x18);
  fVar8 = *(float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x24);
  fVar2 = *(float *)(param_1 + 0x28);
  fVar5 = *(float *)(param_1 + 0x2c);
  fVar7 = fVar6 * fVar6 + fVar4 * fVar4 + fVar8 * fVar8;
  fVar10 = fVar3 * fVar6 + fVar2 * fVar4 + fVar5 * fVar8;
  fVar9 = *(float *)(param_1 + 0x30) * fVar6 + *(float *)(param_1 + 0x34) * fVar4 +
          *(float *)(param_1 + 0x38) * fVar8;
  fVar8 = *(float *)(param_1 + 0x30) * fVar3 + *(float *)(param_1 + 0x34) * fVar2 +
          *(float *)(param_1 + 0x38) * fVar5;
  fVar6 = fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5;
  fVar4 = fVar6 * fVar7 - fVar10 * fVar10;
  if ((*param_1 != '\0') || (fVar4 < 0.0001)) {
    fVar4 = 1.0;
LAB_141636fbb:
    fVar3 = 0.0;
    fVar2 = fVar8;
    fVar5 = fVar6;
  }
  else {
    fVar3 = fVar8 * fVar10 - fVar6 * fVar9;
    if (fVar3 < 0.0) goto LAB_141636fbb;
    fVar2 = fVar8 * fVar7 - fVar9 * fVar10;
    fVar5 = fVar4;
    if (fVar4 < fVar3) {
      fVar2 = fVar8 + fVar10;
      fVar3 = fVar4;
      fVar5 = fVar6;
    }
  }
  fVar8 = 0.0;
  fVar6 = fVar4;
  if (0.0 <= fVar2) {
    if (fVar2 <= fVar5) goto LAB_14163700c;
    fVar3 = fVar10 - fVar9;
    fVar2 = fVar5;
    if (fVar3 < 0.0) goto LAB_141637003;
  }
  else {
    fVar3 = -fVar9;
    fVar2 = 0.0;
    if (-0.0 < fVar9) {
LAB_141637003:
      fVar3 = 0.0;
      goto LAB_14163700c;
    }
  }
  fVar6 = fVar7;
  if (fVar7 < fVar3) {
    fVar3 = fVar4;
    fVar6 = fVar4;
  }
LAB_14163700c:
  if (0.0001 <= ABS(fVar3)) {
    fVar3 = fVar3 / fVar6;
  }
  else {
    fVar3 = 0.0;
  }
  if (0.0001 <= ABS(fVar2)) {
    fVar8 = fVar2 / fVar5;
  }
  pfVar1 = *(float **)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0x20);
  fVar6 = pfVar1[2];
  *param_2 = CONCAT44(fVar3 * *(float *)(param_1 + 0x1c) + pfVar1[1],
                      fVar3 * *(float *)(param_1 + 0x18) + *pfVar1);
  *(float *)(param_2 + 1) = fVar3 * fVar4 + fVar6;
  pfVar1 = *(float **)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x2c);
  fVar6 = pfVar1[2];
  *param_3 = CONCAT44(fVar8 * *(float *)(param_1 + 0x28) + pfVar1[1],
                      fVar8 * *(float *)(param_1 + 0x24) + *pfVar1);
  *(float *)(param_3 + 1) = fVar8 * fVar4 + fVar6;
  return;
}



// FUNCTION 1416370f0 SpeedUnificationFactor body=60 status=ok
// SIG undefined SpeedUnificationFactor(void)

double UnitConversion::SpeedUnificationFactor(char param_1)

{
  double dVar1;
  
  if (param_1 == '\f') {
    return 3.6;
  }
  if (param_1 != '\x0e') {
    return 1.0;
  }
  dVar1 = (double)FUN_1416263a0(8);
  return dVar1 * 0.001;
}



// FUNCTION 141637130 SphereConeIntersection body=371 status=ok
// SIG undefined SphereConeIntersection(void)

bool FMath::SphereConeIntersection
               (float *param_1,float param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = param_1[1];
  fVar1 = *param_1;
  fVar4 = (-1.0 / param_4) * param_2;
  fVar2 = param_1[2];
  fVar7 = fVar1 - *param_3 * fVar4;
  fVar6 = fVar5 - param_3[1] * fVar4;
  fVar8 = fVar2 - param_3[2] * fVar4;
  fVar4 = fVar6 * param_3[1] + fVar7 * *param_3 + fVar8 * param_3[2];
  if ((fVar4 <= 0.0) ||
     (fVar4 * fVar4 < (fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8) * param_5 * param_5)) {
    bVar3 = false;
  }
  else {
    fVar4 = fVar1 * fVar1 + fVar5 * fVar5 + fVar2 * fVar2;
    fVar5 = -(fVar5 * param_3[1] + fVar1 * *param_3 + fVar2 * param_3[2]);
    if ((fVar5 <= 0.0) || (fVar5 * fVar5 < param_4 * param_4 * fVar4)) {
      bVar3 = true;
    }
    else {
      bVar3 = fVar4 <= param_2 * param_2;
    }
  }
  return bVar3;
}



// FUNCTION 1416372b0 SprintfImpl body=103 status=ok
// SIG undefined SprintfImpl(void)

int TCString<wchar_t>::SprintfImpl
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (ulonglong *)__local_stdio_printf_options();
  iVar1 = __stdio_common_vswprintf(*puVar2 | 1,param_1,0x3ff,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (0x3ff < iVar1) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 141637320 FUN_141637320 body=295 status=ok
// SIG undefined FUN_141637320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_141637320(float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  FQuat::Slerp_NotNormalized(local_38,param_2,param_4,param_6);
  FQuat::SlerpFullPath_NotNormalized(local_48,param_3,param_5,param_6);
  pfVar6 = (float *)FQuat::SlerpFullPath_NotNormalized
                              (local_28,local_38,local_48,(param_6 + param_6) * (1.0 - param_6));
  fVar5 = fRam00000001468b5bec;
  fVar4 = fRam00000001468b5be8;
  fVar3 = fRam00000001468b5be4;
  fVar2 = _DAT_1468b5be0;
  *param_1 = *pfVar6;
  param_1[1] = pfVar6[1];
  param_1[2] = pfVar6[2];
  param_1[3] = pfVar6[3];
  fVar1 = *param_1;
  fVar17 = param_1[1];
  fVar18 = param_1[2];
  fVar19 = param_1[3];
  auVar7._0_4_ = fVar1 * fVar1 + fVar18 * fVar18;
  auVar7._4_4_ = fVar17 * fVar17 + fVar19 * fVar19;
  auVar7._8_4_ = fVar18 * fVar18 + fVar1 * fVar1;
  auVar7._12_4_ = fVar19 * fVar19 + fVar17 * fVar17;
  fVar13 = auVar7._4_4_ + auVar7._0_4_;
  fVar14 = auVar7._8_4_ + auVar7._4_4_;
  fVar15 = auVar7._12_4_ + auVar7._8_4_;
  fVar16 = auVar7._0_4_ + auVar7._12_4_;
  auVar8._4_4_ = fVar14;
  auVar8._0_4_ = fVar13;
  auVar8._8_4_ = fVar15;
  auVar8._12_4_ = fVar16;
  auVar8 = rsqrtps(auVar7,auVar8);
  fVar9 = auVar8._0_4_;
  fVar10 = auVar8._4_4_;
  fVar11 = auVar8._8_4_;
  fVar12 = auVar8._12_4_;
  fVar9 = (fVar2 - fVar9 * fVar9 * fVar2 * fVar13) * fVar9 + fVar9;
  fVar10 = (fVar3 - fVar10 * fVar10 * fVar3 * fVar14) * fVar10 + fVar10;
  fVar11 = (fVar4 - fVar11 * fVar11 * fVar4 * fVar15) * fVar11 + fVar11;
  fVar12 = (fVar5 - fVar12 * fVar12 * fVar5 * fVar16) * fVar12 + fVar12;
  fVar17 = (float)(((uint)(((fVar3 - fVar10 * fVar10 * fVar3 * fVar14) * fVar10 + fVar10) * fVar17)
                   ^ uRam00000001468b5bd4) & -(uint)(1e-08 <= fVar14) ^ uRam00000001468b5bd4);
  fVar18 = (float)(((uint)(((fVar4 - fVar11 * fVar11 * fVar4 * fVar15) * fVar11 + fVar11) * fVar18)
                   ^ uRam00000001468b5bd8) & -(uint)(1e-08 <= fVar15) ^ uRam00000001468b5bd8);
  fVar19 = (float)(((uint)(((fVar5 - fVar12 * fVar12 * fVar5 * fVar16) * fVar12 + fVar12) * fVar19)
                   ^ uRam00000001468b5bdc) & -(uint)(1e-08 <= fVar16) ^ uRam00000001468b5bdc);
  *param_1 = (float)(((uint)(((fVar2 - fVar9 * fVar9 * fVar2 * fVar13) * fVar9 + fVar9) * fVar1) ^
                     _DAT_1468b5bd0) & -(uint)(1e-08 <= fVar13) ^ _DAT_1468b5bd0);
  param_1[1] = fVar17;
  param_1[2] = fVar18;
  param_1[3] = fVar19;
  return param_1;
}



// FUNCTION 141637450 StaticFailDebug body=409 status=ok
// SIG undefined StaticFailDebug(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void StaticFailDebug(undefined8 param_1,undefined8 param_2,undefined4 param_3,wchar_t *param_4)

{
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_2198 [32];
  wchar_t *local_2178;
  undefined4 local_2170;
  wchar_t *local_2168;
  undefined1 local_2158 [256];
  longlong local_2058;
  undefined8 local_2050;
  wchar_t local_2038 [4094];
  undefined2 local_3c;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x141637461;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2198;
  wcsncpy(local_2038,param_4,0xffe);
  local_3c = 0;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b5d50);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468b5d50);
  }
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_2158,param_2);
  local_2178 = param_4;
  FGenericPlatformMisc::LowLevelOutputDebugStringf
            (L"%s [File:%s] [Line: %i] \n%s\n",param_1,local_2050,param_3);
  if (local_2058 != 0) {
    FMemory::Free();
  }
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_2158,param_2);
  local_2168 = local_2038;
  local_2178 = (wchar_t *)local_2050;
  local_2170 = param_3;
  TCString<wchar_t>::SnprintfImpl(&DAT_1468c0170,0x1000,L"%s [File:%s] [Line: %i] \n%s\n",param_1);
  if (local_2058 != 0) {
    FMemory::Free();
  }
  wcsncpy(&DAT_1468b6170,&DAT_1468c0170,0x3fff);
  lVar3 = -1;
  _DAT_1468be16e = 0;
  do {
    lVar3 = lVar3 + 1;
  } while ((&DAT_1468b6170)[lVar3] != 0);
  iVar2 = (int)lVar3;
  iVar4 = 0x4000 - iVar2;
  if (0 < iVar4) {
    wcsncpy(&DAT_1468b6170 + iVar2,L"\r\n\r\n",(longlong)iVar4 - 1);
    *(undefined2 *)(&DAT_1468b616e + (longlong)iVar4 * 2 + (longlong)iVar2 * 2) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468b5d50);
  return;
}



// FUNCTION 1416375f0 FUN_1416375f0 body=91 status=ok
// SIG undefined FUN_1416375f0(void)

double FUN_1416375f0(undefined1 param_1)

{
  double dVar1;
  
  dVar1 = 1.0;
  switch(param_1) {
  case 0x28:
    dVar1 = 0.001;
  case 0x29:
    dVar1 = dVar1 * 0.016666666666666666;
  case 0x2a:
    dVar1 = dVar1 * 0.016666666666666666;
  default:
    return dVar1;
  case 0x2d:
    return 730.484;
  case 0x2e:
    dVar1 = 365.242;
  case 0x2c:
    return dVar1 * 24.0;
  }
}



// FUNCTION 141637670 ToFColor body=440 status=ok
// SIG undefined ToFColor(void)

undefined1 * FLinearColor::ToFColor(float *param_1,undefined1 *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *param_1;
  if (0.0 <= fVar4) {
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
  }
  else {
    fVar4 = 0.0;
  }
  fVar3 = param_1[1];
  if (0.0 <= fVar3) {
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  fVar2 = param_1[2];
  if (0.0 <= fVar2) {
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  fVar1 = param_1[3];
  fVar5 = 0.0;
  if ((0.0 <= fVar1) && (fVar5 = fVar1, 1.0 <= fVar1)) {
    fVar5 = 1.0;
  }
  if (param_3 != '\0') {
    if (0.0031308 < fVar4) {
      fVar4 = ::_guard_xfg_dispatch_icall_nop(fVar4,0.41666666);
      fVar4 = fVar4 * 1.055 - 0.055;
    }
    else {
      fVar4 = fVar4 * 12.92;
    }
    if (0.0031308 < fVar3) {
      fVar3 = ::_guard_xfg_dispatch_icall_nop(fVar3,0.41666666);
      fVar3 = fVar3 * 1.055 - 0.055;
    }
    else {
      fVar3 = fVar3 * 12.92;
    }
    if (0.0031308 < fVar2) {
      fVar2 = ::_guard_xfg_dispatch_icall_nop(fVar2,0.41666666);
      fVar2 = fVar2 * 1.055 - 0.055;
    }
    else {
      fVar2 = fVar2 * 12.92;
    }
  }
  param_2[3] = (char)((int)ROUND((fVar5 * 255.999 + fVar5 * 255.999) - 0.5) >> 1);
  param_2[2] = (char)((int)ROUND((fVar4 * 255.999 + fVar4 * 255.999) - 0.5) >> 1);
  param_2[1] = (char)((int)ROUND((fVar3 * 255.999 + fVar3 * 255.999) - 0.5) >> 1);
  *param_2 = (char)((int)ROUND((fVar2 * 255.999 + fVar2 * 255.999) - 0.5) >> 1);
  return param_2;
}



// FUNCTION 141637830 ToOrientationQuat body=771 status=ok
// SIG undefined ToOrientationQuat(void)

float * FVector4::ToOrientationQuat(undefined4 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (float)FGenericPlatformMath::Atan2(param_1,*param_1);
  fVar2 = (float)FGenericPlatformMath::Atan2();
  fVar2 = fVar2 * 0.5;
  if (fVar2 < 0.0) {
    fVar3 = fVar2 * 0.15915494 - 0.5;
  }
  else {
    fVar3 = fVar2 * 0.15915494 + 0.5;
  }
  fVar5 = -1.0;
  fVar2 = fVar2 - (float)(int)fVar3 * 6.2831855;
  if (fVar2 <= 1.5707964) {
    if (-1.5707964 <= fVar2) {
      fVar3 = 1.0;
    }
    else {
      fVar3 = -1.0;
      fVar2 = -3.1415927 - fVar2;
    }
  }
  else {
    fVar3 = -1.0;
    fVar2 = 3.1415927 - fVar2;
  }
  fVar4 = fVar2 * fVar2;
  fVar1 = fVar1 * 0.5;
  fVar2 = (((((2.7525562e-06 - fVar4 * 2.3889859e-08) * fVar4 - 0.00019840874) * fVar4 + 0.008333331
            ) * fVar4 - 0.16666667) * fVar4 + 1.0) * fVar2;
  fVar3 = (((((2.4760495e-05 - fVar4 * 2.6051615e-07) * fVar4 - 0.0013888378) * fVar4 + 0.041666638)
            * fVar4 - 0.5) * fVar4 + 1.0) * fVar3;
  if (fVar1 < 0.0) {
    fVar4 = fVar1 * 0.15915494 - 0.5;
  }
  else {
    fVar4 = fVar1 * 0.15915494 + 0.5;
  }
  fVar1 = fVar1 - (float)(int)fVar4 * 6.2831855;
  if (fVar1 <= 1.5707964) {
    if (-1.5707964 <= fVar1) {
      fVar5 = 1.0;
    }
    else {
      fVar1 = -3.1415927 - fVar1;
    }
  }
  else {
    fVar1 = 3.1415927 - fVar1;
  }
  fVar4 = fVar1 * fVar1;
  fVar1 = (((((2.7525562e-06 - fVar4 * 2.3889859e-08) * fVar4 - 0.00019840874) * fVar4 + 0.008333331
            ) * fVar4 - 0.16666667) * fVar4 + 1.0) * fVar1;
  fVar5 = (((((2.4760495e-05 - fVar4 * 2.6051615e-07) * fVar4 - 0.0013888378) * fVar4 + 0.041666638)
            * fVar4 - 0.5) * fVar4 + 1.0) * fVar5;
  param_2[2] = fVar1 * fVar3;
  param_2[1] = -(fVar5 * fVar2);
  *param_2 = fVar1 * fVar2;
  param_2[3] = fVar5 * fVar3;
  return param_2;
}



// FUNCTION 141637b40 ToQuat body=29 status=ok
// SIG undefined ToQuat(void)

undefined8 FMatrix::ToQuat(undefined8 param_1,undefined8 param_2)

{
  FQuat::FQuat(param_2,param_1);
  return param_2;
}



// FUNCTION 141637b60 FUN_141637b60 body=271 status=ok
// SIG undefined FUN_141637b60(void)

undefined4 * FUN_141637b60(float *param_1,undefined4 *param_2)

{
  float fVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  float fVar6;
  int local_res8 [2];
  
  fVar6 = *param_1;
  if (*param_1 <= param_1[1]) {
    fVar6 = param_1[1];
  }
  if (fVar6 <= param_1[2]) {
    fVar6 = param_1[2];
  }
  if ((double)fVar6 < 1e-32) {
    *param_2 = 0;
    return param_2;
  }
  dVar5 = frexp((double)fVar6,local_res8);
  fVar6 = ((float)dVar5 / fVar6) * 255.0;
  iVar4 = (int)(fVar6 * *param_1);
  if (iVar4 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0xff;
    if (iVar4 < 0xff) {
      iVar3 = iVar4;
    }
  }
  *(char *)((longlong)param_2 + 2) = (char)iVar3;
  iVar4 = (int)(fVar6 * param_1[1]);
  if (iVar4 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xff;
    if (iVar4 < 0xff) {
      uVar2 = (undefined1)iVar4;
    }
  }
  fVar1 = param_1[2];
  *(undefined1 *)((longlong)param_2 + 1) = uVar2;
  iVar3 = (int)(fVar6 * fVar1);
  iVar4 = 0;
  if ((-1 < iVar3) && (iVar4 = 0xff, iVar3 < 0xff)) {
    iVar4 = iVar3;
  }
  *(char *)param_2 = (char)iVar4;
  iVar4 = (int)(float)local_res8[0];
  if (iVar4 < -0x80) {
    iVar3 = -0x80;
  }
  else {
    iVar3 = 0x7f;
    if (iVar4 < 0x7f) {
      iVar3 = iVar4;
    }
  }
  *(char *)((longlong)param_2 + 3) = (char)iVar3 + -0x80;
  return param_2;
}



// FUNCTION 141637c70 ToString body=848 status=ok
// SIG undefined ToString(void)

longlong * FMatrix::ToString(float *param_1,longlong *param_2)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *local_28;
  int local_20;
  
  *param_2 = 0;
  param_2[1] = 0;
  FString::PrintfImpl(&local_28,L"[%g %g %g %g] ",(double)*param_1,(double)param_1[1],
                      (double)param_1[2],(double)param_1[3]);
  pvVar2 = local_28;
  iVar6 = 0;
  iVar5 = iVar6;
  if (local_20 != 0) {
    iVar5 = local_20 + -1;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_2[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  FString::PrintfImpl(&local_28,L"[%g %g %g %g] ",(double)param_1[4],(double)param_1[5],
                      (double)param_1[6],(double)param_1[7]);
  pvVar2 = local_28;
  iVar5 = iVar6;
  if (local_20 != 0) {
    iVar5 = local_20 + -1;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_2[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  FString::PrintfImpl(&local_28,L"[%g %g %g %g] ",(double)param_1[8],(double)param_1[9],
                      (double)param_1[10],(double)param_1[0xb]);
  pvVar2 = local_28;
  iVar5 = iVar6;
  if (local_20 != 0) {
    iVar5 = local_20 + -1;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_2[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  FString::PrintfImpl(&local_28,L"[%g %g %g %g] ",(double)param_1[0xc],(double)param_1[0xd],
                      (double)param_1[0xe],(double)param_1[0xf]);
  pvVar2 = local_28;
  if (local_20 != 0) {
    iVar6 = local_20 + -1;
  }
  if (iVar6 != 0) {
    iVar5 = (int)param_2[1];
    iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar6;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return param_2;
}



// FUNCTION 141637fc0 ToString body=307 status=ok
// SIG undefined ToString(void)

undefined8 FTransform::ToString(undefined4 *param_1,undefined8 param_2)

{
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  local_78 = *param_1;
  uStack_74 = param_1[1];
  uStack_70 = param_1[2];
  uStack_6c = param_1[3];
  FQuat::Rotator(&local_78,&local_88);
  FString::PrintfImpl(param_2,L"%f,%f,%f|%f,%f,%f|%f,%f,%f",(double)(float)param_1[4],
                      (double)(float)param_1[5],(double)(float)param_1[6],(double)local_88,
                      (double)local_84,(double)local_80,(double)(float)param_1[8],
                      (double)(float)param_1[9],(double)(float)param_1[10]);
  return param_2;
}



// FUNCTION 141638100 FUN_141638100 body=483 status=ok
// SIG undefined FUN_141638100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141638100(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  
  fVar1 = param_1[3];
  fVar9 = param_2[1] * param_1[1] + *param_2 * *param_1 + param_2[2] * param_1[2];
  fVar16 = *param_2 * fVar9;
  fVar15 = param_2[1] * fVar9;
  fVar9 = param_2[2] * fVar9;
  *param_4 = fVar16;
  param_4[1] = fVar15;
  param_4[2] = fVar9;
  param_4[3] = fVar1;
  uVar2 = _DAT_1464aa818;
  if (fVar16 * fVar16 + fVar15 * fVar15 + fVar9 * fVar9 + fVar1 * fVar1 == 0.0) {
    *(undefined8 *)param_4 = _DAT_1464aa810;
    *(undefined8 *)(param_4 + 2) = uVar2;
  }
  else {
    fVar1 = *param_4;
    fVar9 = param_4[1];
    fVar15 = param_4[2];
    fVar16 = param_4[3];
    auVar4._0_4_ = fVar1 * fVar1 + fVar15 * fVar15;
    auVar4._4_4_ = fVar9 * fVar9 + fVar16 * fVar16;
    auVar4._8_4_ = fVar15 * fVar15 + fVar1 * fVar1;
    auVar4._12_4_ = fVar16 * fVar16 + fVar9 * fVar9;
    fVar8 = auVar4._4_4_ + auVar4._0_4_;
    fVar11 = auVar4._8_4_ + auVar4._4_4_;
    fVar12 = auVar4._12_4_ + auVar4._8_4_;
    fVar13 = auVar4._0_4_ + auVar4._12_4_;
    auVar5._4_4_ = fVar11;
    auVar5._0_4_ = fVar8;
    auVar5._8_4_ = fVar12;
    auVar5._12_4_ = fVar13;
    auVar5 = rsqrtps(auVar4,auVar5);
    fVar10 = auVar5._0_4_;
    fVar3 = auVar5._4_4_;
    fVar6 = auVar5._8_4_;
    fVar7 = auVar5._12_4_;
    fVar10 = (_DAT_1468b5be0 - fVar10 * fVar10 * _DAT_1468b5be0 * fVar8) * fVar10 + fVar10;
    fVar3 = (fRam00000001468b5be4 - fVar3 * fVar3 * fRam00000001468b5be4 * fVar11) * fVar3 + fVar3;
    fVar6 = (fRam00000001468b5be8 - fVar6 * fVar6 * fRam00000001468b5be8 * fVar12) * fVar6 + fVar6;
    fVar7 = (fRam00000001468b5bec - fVar7 * fVar7 * fRam00000001468b5bec * fVar13) * fVar7 + fVar7;
    fVar9 = (float)(((uint)(((fRam00000001468b5be4 - fVar3 * fVar3 * fRam00000001468b5be4 * fVar11)
                             * fVar3 + fVar3) * fVar9) ^ uRam00000001468b5bd4) &
                    -(uint)(1e-08 <= fVar11) ^ uRam00000001468b5bd4);
    fVar15 = (float)(((uint)(((fRam00000001468b5be8 - fVar6 * fVar6 * fRam00000001468b5be8 * fVar12)
                              * fVar6 + fVar6) * fVar15) ^ uRam00000001468b5bd8) &
                     -(uint)(1e-08 <= fVar12) ^ uRam00000001468b5bd8);
    fVar16 = (float)(((uint)(((fRam00000001468b5bec - fVar7 * fVar7 * fRam00000001468b5bec * fVar13)
                              * fVar7 + fVar7) * fVar16) ^ uRam00000001468b5bdc) &
                     -(uint)(1e-08 <= fVar13) ^ uRam00000001468b5bdc);
    *param_4 = (float)(((uint)(((_DAT_1468b5be0 - fVar10 * fVar10 * _DAT_1468b5be0 * fVar8) * fVar10
                               + fVar10) * fVar1) ^ _DAT_1468b5bd0) & -(uint)(1e-08 <= fVar8) ^
                      _DAT_1468b5bd0);
    param_4[1] = fVar9;
    param_4[2] = fVar15;
    param_4[3] = fVar16;
  }
  fVar9 = *param_1;
  fVar15 = param_1[1];
  fVar16 = param_1[2];
  fVar10 = param_1[3];
  fVar17 = -*param_4;
  fVar3 = -param_4[1];
  fVar1 = param_4[3];
  fVar11 = -param_4[2];
  fVar12 = fVar11 * fVar9 * fRam00000001468b5bc4;
  fVar13 = fVar3 * fVar9 * fRam00000001468b5bc8;
  fVar14 = fVar17 * fVar9 * fRam00000001468b5bcc;
  fVar6 = fVar1 * fVar15 * fRam00000001468b5bb4;
  fVar7 = fVar17 * fVar15 * fRam00000001468b5bb8;
  fVar8 = fVar3 * fVar15 * fRam00000001468b5bbc;
  fVar18 = fVar17 * fVar16 * fRam00000001468b5ba4;
  fVar19 = fVar1 * fVar16 * fRam00000001468b5ba8;
  fVar20 = fVar11 * fVar16 * fRam00000001468b5bac;
  *param_3 = fVar1 * fVar9 * _DAT_1468b5bc0 + fVar10 * fVar17 + fVar11 * fVar15 * _DAT_1468b5bb0 +
             fVar3 * fVar16 * _DAT_1468b5ba0;
  param_3[1] = fVar12 + fVar10 * fVar3 + fVar6 + fVar18;
  param_3[2] = fVar13 + fVar10 * fVar11 + fVar7 + fVar19;
  param_3[3] = fVar14 + fVar10 * fVar1 + fVar8 + fVar20;
  return;
}



// FUNCTION 1416382f0 FUN_1416382f0 body=1755 status=ok
// SIG undefined FUN_1416382f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1416382f0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_298 [32];
  undefined4 *local_278;
  undefined4 *puStack_270;
  undefined8 *local_268;
  longlong local_260;
  undefined8 local_258;
  longlong local_250;
  undefined4 *local_248;
  ulonglong *puStack_240;
  undefined8 local_238;
  longlong local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [24];
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_298;
  FText::FText(param_2);
  uVar15 = 0;
  if (*(int *)(param_1 + 0x18) < 1) {
LAB_1416385fa:
    uVar10 = FUN_14162c660(local_188,*(undefined4 *)(param_1 + 0x30));
    FText::operator=(param_2,uVar10);
    uVar16 = uVar15;
    local_228 = (undefined4 *)CONCAT44(local_228._4_4_,(undefined4)local_228);
    uStack_220 = (undefined4 *)CONCAT44(uStack_220._4_4_,(undefined4)uStack_220);
    if (local_180 == (longlong *)0x0) goto LAB_14163864c;
    LOCK();
    plVar4 = local_180 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    uVar16 = 0;
    local_228 = (undefined4 *)CONCAT44(local_228._4_4_,(undefined4)local_228);
    uStack_220 = (undefined4 *)CONCAT44(uStack_220._4_4_,(undefined4)uStack_220);
    if ((int)lVar9 != 1) goto LAB_14163864c;
    (**(code **)*local_180)(local_180);
    LOCK();
    piVar1 = (int *)((longlong)local_180 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    plVar4 = local_180;
  }
  else {
    iVar8 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x10) + 8))();
    if (iVar8 != 5) goto LAB_1416385fa;
    plVar4 = (longlong *)(*(longlong **)(param_1 + 0x10))[1];
    lVar9 = **(longlong **)(param_1 + 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (*(int *)(lVar9 + 0x58) != *(int *)(param_1 + 0x30)) {
      lVar9 = FUN_14162c660(local_120);
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_1a0,L"{0}:",L"Core.MessageLog",L"SeverityMessageTokenFormatter");
      puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_140,uVar10);
      local_d8[0] = 4;
      FText::FText(local_c8,lVar9);
      local_258 = *puVar11;
      local_278 = local_d8;
      puStack_270 = local_a8;
      local_250 = puVar11[1];
      local_b0 = '\x01';
      if (local_250 != 0) {
        LOCK();
        *(int *)(local_250 + 8) = *(int *)(local_250 + 8) + 1;
        UNLOCK();
      }
      local_228 = local_278;
      uStack_220 = puStack_270;
      uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_218,&local_228);
      uVar10 = FText::Format(local_1b8,&local_258,uVar10);
      FText::FText(local_1e8,uVar10);
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_1b0 + 1;
        lVar13 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar1 = (int *)((longlong)local_1b0 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_1b0 + 8))(local_1b0,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_218);
      if ((local_b0 != '\0') && (local_b0 = '\0', local_c0 != (longlong *)0x0)) {
        LOCK();
        plVar5 = local_c0 + 1;
        lVar13 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
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
      plVar5 = (longlong *)puVar11[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar13 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = *(longlong **)(lVar9 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      FText::operator=(param_2,local_1e8);
      if (local_1e0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_1e0 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_1e0)(local_1e0);
          LOCK();
          piVar1 = (int *)((longlong)local_1e0 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_1e0 + 8))(local_1e0,1);
          }
        }
      }
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_198 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar1 = (int *)((longlong)local_198 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_198 + 8))(local_198,1);
          }
        }
      }
    }
    uVar15 = 1;
    uVar16 = uVar15;
    if (plVar4 == (longlong *)0x0) goto LAB_14163864c;
    LOCK();
    plVar5 = plVar4 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 != 1) goto LAB_14163864c;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  uVar16 = uVar15;
  if (iVar8 == 1) {
    (**(code **)(*plVar4 + 8))(plVar4,1);
  }
LAB_14163864c:
  if ((int)uVar16 < *(int *)(param_1 + 0x18)) {
    lVar9 = (ulonglong)uVar16 << 4;
    do {
      cVar7 = FText::IsEmpty(param_2);
      plVar4 = *(longlong **)(lVar9 + *(longlong *)(param_1 + 0x10));
      if (cVar7 == '\0') {
        uVar10 = (**(code **)(*plVar4 + 0x10))();
        puVar12 = (undefined4 *)FText::FText(local_108,uVar10);
        local_278 = puVar12;
        lVar13 = FText::FText(local_f0,param_2);
        local_260 = lVar13;
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_158,L"{0} {1}",L"Core.MessageLog",
                            L"AggregateMessageTokenFormatter");
        puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_130,uVar10);
        local_a8[0] = 4;
        local_268 = puVar11;
        FText::FText(local_98,lVar13);
        local_80 = 1;
        local_78 = 4;
        FText::FText(local_68,puVar12);
        local_248 = local_a8;
        local_50 = 1;
        puStack_240 = local_48;
        local_238 = *puVar11;
        local_230 = puVar11[1];
        if (local_230 != 0) {
          LOCK();
          *(int *)(local_230 + 8) = *(int *)(local_230 + 8) + 1;
          UNLOCK();
        }
        local_208 = local_248;
        uStack_200 = puStack_240;
        uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_1f8,&local_208);
        uVar10 = FText::Format(local_170,&local_238,uVar10);
        FText::FText(local_1d0,uVar10);
        plVar4 = local_168;
        if (local_168 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_168 + 1;
          lVar13 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_168)(local_168);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1f8);
        lVar13 = 2;
        pcVar14 = &stack0xffffffffffffffe0;
        do {
          lVar13 = lVar13 + -1;
          pcVar3 = pcVar14 + -0x30;
          if (*pcVar3 != '\0') {
            *pcVar3 = '\0';
            plVar4 = *(longlong **)(pcVar14 + -0x40);
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar4 + 1;
              lVar6 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
          }
          pcVar14 = pcVar3;
        } while (lVar13 != 0);
        plVar4 = (longlong *)local_268[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar4 + 1;
          lVar13 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar4 = *(longlong **)(local_260 + 8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar4 + 1;
          lVar13 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar4 = *(longlong **)(local_278 + 2);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar4 + 1;
          lVar13 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        FText::operator=(param_2,local_1d0);
        plVar4 = local_1c8;
        if (local_1c8 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_1c8 + 1;
          lVar13 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_1c8)(local_1c8);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar4 = local_150;
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_150 + 1;
          lVar13 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
      }
      else {
        uVar10 = (**(code **)(*plVar4 + 0x10))();
        FText::operator=(param_2,uVar10);
      }
      uVar16 = uVar16 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar16 < *(int *)(param_1 + 0x18));
  }
  return param_2;
}



// FUNCTION 1416389d0 TransformBy body=345 status=ok
// SIG undefined TransformBy(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FBox::TransformBy(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_30;
  
  fVar1 = DAT_1468b5d98;
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined8 *)(param_2 + 3) = _DAT_1468b5d90;
    param_2[5] = fVar1;
    *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 3);
    param_2[2] = fVar1;
    *(undefined1 *)(param_2 + 6) = 0;
    return param_2;
  }
  local_30 = (float)CONCAT31(local_30._1_3_,1);
  fVar1 = (param_1[3] + *param_1) * 0.5;
  fVar2 = (param_1[4] + param_1[1]) * 0.5;
  fVar3 = (param_1[5] + param_1[2]) * 0.5;
  fVar6 = (param_1[3] - *param_1) * 0.5;
  fVar7 = (param_1[4] - param_1[1]) * 0.5;
  fVar8 = (param_1[5] - param_1[2]) * 0.5;
  fVar4 = fVar2 * param_3[4] + fVar1 * *param_3 + fVar3 * param_3[8] + param_3[0xc];
  fVar5 = fVar2 * param_3[5] + fVar1 * param_3[1] + fVar3 * param_3[9] + param_3[0xd];
  fVar1 = fVar2 * param_3[6] + fVar1 * param_3[2] + fVar3 * param_3[10] + param_3[0xe];
  fVar2 = (float)((uint)(fVar7 * param_3[4]) & _DAT_1468b5b20) +
          (float)((uint)(fVar6 * *param_3) & _DAT_1468b5b20) +
          (float)((uint)(fVar8 * param_3[8]) & _DAT_1468b5b20);
  fVar3 = (float)((uint)(fVar7 * param_3[5]) & uRam00000001468b5b24) +
          (float)((uint)(fVar6 * param_3[1]) & uRam00000001468b5b24) +
          (float)((uint)(fVar8 * param_3[9]) & uRam00000001468b5b24);
  fVar6 = (float)((uint)(fVar7 * param_3[6]) & uRam00000001468b5b28) +
          (float)((uint)(fVar6 * param_3[2]) & uRam00000001468b5b28) +
          (float)((uint)(fVar8 * param_3[10]) & uRam00000001468b5b28);
  *param_2 = fVar4 - fVar2;
  param_2[1] = fVar5 - fVar3;
  param_2[2] = fVar1 - fVar6;
  param_2[3] = fVar2 + fVar4;
  *(ulonglong *)(param_2 + 4) = CONCAT44(fVar6 + fVar1,fVar3 + fVar5);
  param_2[6] = local_30;
  return param_2;
}



// FUNCTION 141638b30 TransformBy body=222 status=ok
// SIG undefined TransformBy(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FBox::TransformBy(undefined8 param_1,undefined8 param_2,float *param_3)

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
  uint local_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  float local_48;
  uint uStack_44;
  float fStack_40;
  uint uStack_3c;
  float local_38;
  float fStack_34;
  uint uStack_30;
  uint uStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar8 = fVar2 + fVar2;
  fVar9 = fVar3 + fVar3;
  fVar11 = fVar1 * (fVar1 + fVar1);
  fVar10 = fVar4 * (fVar1 + fVar1);
  fVar5 = param_3[8];
  fVar6 = param_3[9];
  fVar7 = param_3[10];
  fStack_54 = (fVar4 * fVar9 + fVar1 * fVar8) * fVar5;
  fStack_40 = (fVar10 + fVar2 * fVar9) * fVar6;
  local_38 = (fVar4 * fVar8 + fVar1 * fVar9) * fVar7;
  local_48 = fVar6 * (fVar1 * fVar8 - fVar4 * fVar9);
  fStack_34 = fVar7 * (fVar2 * fVar9 - fVar10);
  fStack_50 = fVar5 * (fVar1 * fVar9 - fVar4 * fVar8);
  local_58 = (uint)((_DAT_1468b5b30 - (fVar3 * fVar9 + fVar2 * fVar8)) * fVar5) & _DAT_1468b5b40;
  uStack_44 = (uint)((fRam00000001468b5b34 - (fVar3 * fVar9 + fVar11)) * fVar6) &
              uRam00000001468b5b44;
  uStack_30 = (uint)((fRam00000001468b5b38 - (fVar2 * fVar8 + fVar11)) * fVar7) &
              uRam00000001468b5b48;
  uStack_4c = (uint)((fRam00000001468b5b3c - (fVar11 + fVar11)) * param_3[0xb]) &
              uRam00000001468b5b4c;
  local_28 = param_3[4];
  fStack_24 = param_3[5];
  fStack_20 = param_3[6];
  fStack_1c = fRam00000001468b5b3c;
  uStack_3c = uStack_4c;
  uStack_2c = uStack_4c;
  TransformBy(local_28,local_58,&local_58);
  return param_2;
}



// FUNCTION 141638c10 TransformBy body=322 status=ok
// SIG undefined TransformBy(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FBoxSphereBounds::TransformBy(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar19 = param_1[2];
  fVar18 = param_1[1];
  fVar1 = *param_1;
  fVar24 = param_1[3];
  fVar25 = param_1[5];
  fVar26 = param_1[4];
  fVar7 = param_3[8];
  fVar8 = param_3[9];
  fVar9 = param_3[10];
  fVar10 = param_3[0xb];
  fVar11 = param_3[4];
  fVar12 = param_3[5];
  fVar13 = param_3[6];
  fVar14 = param_3[7];
  fVar15 = param_3[0xc];
  fVar16 = param_3[0xd];
  fVar17 = param_3[0xe];
  fVar22 = (float)((uint)(fVar26 * fVar11) & _DAT_1468b5b20) +
           (float)((uint)(fVar24 * fVar3) & _DAT_1468b5b20) +
           (float)((uint)(fVar25 * fVar7) & _DAT_1468b5b20);
  fVar23 = (float)((uint)(fVar26 * fVar12) & uRam00000001468b5b24) +
           (float)((uint)(fVar24 * fVar4) & uRam00000001468b5b24) +
           (float)((uint)(fVar25 * fVar8) & uRam00000001468b5b24);
  fVar24 = (float)((uint)(fVar26 * fVar13) & uRam00000001468b5b28) +
           (float)((uint)(fVar24 * fVar5) & uRam00000001468b5b28) +
           (float)((uint)(fVar25 * fVar9) & uRam00000001468b5b28);
  fVar25 = fVar12 * fVar12 + fVar4 * fVar4 + fVar8 * fVar8;
  fVar26 = fVar13 * fVar13 + fVar5 * fVar5 + fVar9 * fVar9;
  param_2[3] = fVar22;
  param_2[4] = fVar23;
  param_2[5] = fVar24;
  auVar20._4_4_ = fVar25;
  auVar20._0_4_ = fVar11 * fVar11 + fVar3 * fVar3 + fVar7 * fVar7;
  auVar20._8_4_ = fVar26;
  auVar20._12_4_ = fVar14 * fVar14 + fVar6 * fVar6 + fVar10 * fVar10;
  param_2[1] = fVar18 * fVar12 + fVar1 * fVar4 + fVar19 * fVar8 + fVar16;
  auVar21._4_4_ = fVar25;
  auVar21._0_4_ = fVar25;
  auVar21._8_4_ = fVar25;
  auVar21._12_4_ = fVar25;
  auVar21 = maxps(auVar20,auVar21);
  *param_2 = fVar18 * fVar11 + fVar1 * fVar3 + fVar19 * fVar7 + fVar15;
  param_2[2] = fVar18 * fVar13 + fVar1 * fVar5 + fVar19 * fVar9 + fVar17;
  auVar2._4_4_ = fVar26;
  auVar2._0_4_ = fVar26;
  auVar2._8_4_ = fVar26;
  auVar2._12_4_ = fVar26;
  auVar21 = maxps(auVar21,auVar2);
  fVar19 = SQRT(auVar21._0_4_) * param_1[6];
  fVar18 = SQRT(fVar24 * fVar24 + fVar23 * fVar23 + fVar22 * fVar22);
  if (fVar18 <= fVar19) {
    fVar19 = fVar18;
  }
  param_2[6] = fVar19;
  return param_2;
}



// FUNCTION 141638d60 TransformBy body=222 status=ok
// SIG undefined TransformBy(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FBoxSphereBounds::TransformBy(undefined8 param_1,undefined8 param_2,float *param_3)

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
  uint local_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  float local_48;
  uint uStack_44;
  float fStack_40;
  uint uStack_3c;
  float local_38;
  float fStack_34;
  uint uStack_30;
  uint uStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar8 = fVar2 + fVar2;
  fVar9 = fVar3 + fVar3;
  fVar11 = fVar1 * (fVar1 + fVar1);
  fVar10 = fVar4 * (fVar1 + fVar1);
  fVar5 = param_3[8];
  fVar6 = param_3[9];
  fVar7 = param_3[10];
  fStack_54 = (fVar4 * fVar9 + fVar1 * fVar8) * fVar5;
  fStack_40 = (fVar10 + fVar2 * fVar9) * fVar6;
  local_38 = (fVar4 * fVar8 + fVar1 * fVar9) * fVar7;
  local_48 = fVar6 * (fVar1 * fVar8 - fVar4 * fVar9);
  fStack_34 = fVar7 * (fVar2 * fVar9 - fVar10);
  fStack_50 = fVar5 * (fVar1 * fVar9 - fVar4 * fVar8);
  local_58 = (uint)((_DAT_1468b5b30 - (fVar3 * fVar9 + fVar2 * fVar8)) * fVar5) & _DAT_1468b5b40;
  uStack_44 = (uint)((fRam00000001468b5b34 - (fVar3 * fVar9 + fVar11)) * fVar6) &
              uRam00000001468b5b44;
  uStack_30 = (uint)((fRam00000001468b5b38 - (fVar2 * fVar8 + fVar11)) * fVar7) &
              uRam00000001468b5b48;
  uStack_4c = (uint)((fRam00000001468b5b3c - (fVar11 + fVar11)) * param_3[0xb]) &
              uRam00000001468b5b4c;
  local_28 = param_3[4];
  fStack_24 = param_3[5];
  fStack_20 = param_3[6];
  fStack_1c = fRam00000001468b5b3c;
  uStack_3c = uStack_4c;
  uStack_2c = uStack_4c;
  TransformBy(local_28,local_58,&local_58);
  return param_2;
}



// FUNCTION 141638e40 TransformBy body=225 status=ok
// SIG undefined TransformBy(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FSphere::TransformBy(float *param_1,undefined8 *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  fVar12 = *param_1 * param_3[8];
  fVar13 = param_1[1] * param_3[9];
  fVar14 = param_1[2] * param_3[10];
  uVar15 = (uint)param_3[8] & _DAT_1468b5b20;
  uVar16 = (uint)param_3[9] & uRam00000001468b5b24;
  uVar17 = (uint)param_3[10] & uRam00000001468b5b28;
  uVar18 = (uint)param_3[0xb] & uRam00000001468b5b2c;
  fVar9 = fVar14 * fVar3 - fVar13 * fVar4;
  fVar10 = fVar12 * fVar4 - fVar14 * fVar2;
  fVar11 = fVar13 * fVar2 - fVar12 * fVar3;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar6 = param_3[6];
  auVar7._4_4_ = uVar16;
  auVar7._0_4_ = uVar15;
  auVar7._8_4_ = uVar17;
  auVar7._12_4_ = uVar18;
  *param_2 = CONCAT44((fVar9 * fVar4 - fVar11 * fVar2) + fVar5 * fVar10 + fVar13 + param_3[5],
                      (fVar11 * fVar3 - fVar10 * fVar4) + fVar5 * fVar9 + fVar12 + param_3[4]);
  auVar8._4_4_ = uVar17;
  auVar8._0_4_ = uVar16;
  auVar8._8_4_ = uVar15;
  auVar8._12_4_ = uVar18;
  auVar8 = maxps(auVar7,auVar8);
  *(float *)(param_2 + 1) = (fVar10 * fVar2 - fVar9 * fVar3) + fVar5 * fVar11 + fVar14 + fVar6;
  auVar1._4_4_ = uVar15;
  auVar1._0_4_ = uVar17;
  auVar1._8_4_ = uVar16;
  auVar1._12_4_ = uVar18;
  auVar8 = maxps(auVar8,auVar1);
  *(float *)((longlong)param_2 + 0xc) = auVar8._0_4_ * param_1[3];
  return param_2;
}



// FUNCTION 141638f30 TruncateToHalfIfClose body=157 status=ok
// SIG undefined TruncateToHalfIfClose(void)

undefined8 MathRoundingUtil::TruncateToHalfIfClose(float param_1)

{
  float fVar1;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar3;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  fVar1 = modff(param_1,local_res8);
  if (param_1 < 0.0) {
    uVar3 = 0;
    fVar2 = -0.5;
    if (1e-08 < ABS(fVar1 - -0.5)) {
      fVar2 = fVar1;
      uVar3 = extraout_XMM0_Db;
    }
    return CONCAT44(uVar3,fVar2 + local_res8[0]);
  }
  uVar3 = 0;
  fVar2 = 0.5;
  if (1e-08 < ABS(fVar1 - 0.5)) {
    fVar2 = fVar1;
    uVar3 = extraout_XMM0_Db;
  }
  return CONCAT44(uVar3,fVar2 + local_res8[0]);
}



// FUNCTION 141638fd0 TruncateToHalfIfClose body=158 status=ok
// SIG undefined TruncateToHalfIfClose(void)

double MathRoundingUtil::TruncateToHalfIfClose(double param_1)

{
  double dVar1;
  double dVar2;
  double local_res8 [4];
  
  local_res8[0] = 0.0;
  dVar1 = modf(param_1,local_res8);
  if (param_1 < 0.0) {
    dVar2 = -0.5;
    if (9.99999993922529e-09 < ABS(dVar1 - -0.5)) {
      dVar2 = dVar1;
    }
    return dVar2 + local_res8[0];
  }
  dVar2 = 0.5;
  if (9.99999993922529e-09 < ABS(dVar1 - 0.5)) {
    dVar2 = dVar1;
  }
  return dVar2 + local_res8[0];
}



// FUNCTION 141639070 UnrotateVector body=545 status=ok
// SIG undefined UnrotateVector(void)

float * FRotator::UnrotateVector(undefined8 param_1,float *param_2,float *param_3)

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
  float *pfVar12;
  undefined1 local_e8 [224];
  
  pfVar12 = (float *)FRotationMatrix::FRotationMatrix(local_e8,param_1);
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = pfVar12[7];
  fVar5 = pfVar12[6];
  fVar6 = pfVar12[10];
  fVar7 = pfVar12[0xb];
  fVar8 = pfVar12[5];
  fVar9 = pfVar12[9];
  fVar10 = pfVar12[4];
  fVar11 = pfVar12[8];
  *param_2 = pfVar12[3] * 0.0 + fVar3 * pfVar12[2] + fVar2 * pfVar12[1] + fVar1 * *pfVar12;
  param_2[2] = fVar7 * 0.0 + fVar3 * fVar6 + fVar2 * fVar9 + fVar1 * fVar11;
  param_2[1] = fVar4 * 0.0 + fVar3 * fVar5 + fVar2 * fVar8 + fVar1 * fVar10;
  return param_2;
}



// FUNCTION 1416392a0 VInterpConstantTo body=247 status=ok
// SIG undefined VInterpConstantTo(void)

float * FMath::VInterpConstantTo
                  (float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_4 = param_4 * param_5;
  fVar5 = *param_3 - *param_2;
  fVar2 = param_2[1];
  fVar6 = param_3[1] - fVar2;
  fVar1 = param_2[2];
  fVar7 = param_3[2] - fVar1;
  fVar4 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
  if (fVar4 <= param_4) {
    uVar3 = *(undefined8 *)param_3;
    fVar2 = param_3[2];
  }
  else {
    if (0.0 < param_4) {
      fVar4 = 1.0 / fVar4;
      *param_1 = fVar5 * fVar4 * param_4 + *param_2;
      param_1[1] = fVar6 * fVar4 * param_4 + fVar2;
      param_1[2] = fVar7 * fVar4 * param_4 + fVar1;
      return param_1;
    }
    uVar3 = *(undefined8 *)param_2;
    fVar2 = param_2[2];
  }
  *(undefined8 *)param_1 = uVar3;
  param_1[2] = fVar2;
  return param_1;
}



// FUNCTION 1416393a0 VInterpTo body=213 status=ok
// SIG undefined VInterpTo(void)

float * FMath::VInterpTo(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0.0 < param_5) {
    fVar5 = *param_3 - *param_2;
    fVar3 = param_3[1] - param_2[1];
    fVar6 = param_3[2] - param_2[2];
    if (0.0001 <= fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6) {
      param_4 = param_4 * param_5;
      fVar4 = 0.0;
      if ((0.0 <= param_4) && (fVar4 = param_4, 1.0 <= param_4)) {
        fVar4 = 1.0;
      }
      fVar1 = param_2[1];
      fVar2 = param_2[2];
      *param_1 = fVar5 * fVar4 + *param_2;
      param_1[1] = fVar3 * fVar4 + fVar1;
      param_1[2] = fVar6 * fVar4 + fVar2;
      return param_1;
    }
  }
  fVar3 = param_3[2];
  *(undefined8 *)param_1 = *(undefined8 *)param_3;
  param_1[2] = fVar3;
  return param_1;
}



// FUNCTION 141639480 VRandCone body=994 status=ok
// SIG undefined VRandCone(void)

float * FMath::VRandCone(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 local_f8;
  float local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_88 [128];
  
  fVar8 = DAT_1468b5d98;
  if (param_3 <= 0.0) {
    fVar7 = param_2[1];
    fVar10 = *param_2;
    fVar1 = param_2[2];
    fVar9 = fVar10 * fVar10 + fVar7 * fVar7 + fVar1 * fVar1;
    if (fVar9 == 1.0) {
      fVar8 = param_2[2];
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      param_1[2] = fVar8;
      return param_1;
    }
    if (fVar9 < 1e-08) {
      *(ulonglong *)param_1 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      param_1[2] = fVar8;
      return param_1;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = CONCAT44(0,fVar9);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = CONCAT44(0,fVar9);
    auVar11 = rsqrtss(auVar12,auVar11);
    fVar8 = auVar11._0_4_;
    fVar8 = fVar8 + fVar8 * (0.5 - fVar9 * 0.5 * fVar8 * fVar8);
    fVar8 = fVar8 + fVar8 * (0.5 - fVar9 * 0.5 * fVar8 * fVar8);
    *param_1 = fVar10 * fVar8;
    param_1[1] = fVar7 * fVar8;
    param_1[2] = fVar1 * fVar8;
    return param_1;
  }
  pfVar6 = param_1;
  rand();
  lVar5 = (long)pfVar6;
  iVar2 = rand();
  fVar7 = ((float)iVar2 * 3.051851e-05 + (float)iVar2 * 3.051851e-05) - 1.0;
  fVar8 = -1.0;
  if ((-1.0 <= fVar7) && (fVar8 = fVar7, 1.0 <= fVar7)) {
    fVar8 = 1.0;
  }
  ::_guard_xfg_dispatch_icall_nop(fVar8);
  if (ABS(param_3) <= 1e-08) {
    AK::MemoryMgr::StartProfileThreadUsage(lVar5);
  }
  local_f8._4_4_ = (float)FGenericPlatformMath::Atan2();
  local_f8._4_4_ = local_f8._4_4_ * 57.295776;
  fVar8 = (float)FGenericPlatformMath::Atan2();
  local_f0 = 0.0;
  local_f8 = CONCAT44(local_f8._4_4_,fVar8 * 57.295776);
  puVar3 = (undefined4 *)FRotationMatrix::FRotationMatrix(local_88,&local_f8);
  local_d8 = *puVar3;
  local_d4 = puVar3[1];
  local_d0 = puVar3[2];
  local_e8 = puVar3[4];
  local_e4 = puVar3[5];
  local_e0 = puVar3[6];
  FVector::RotateAngleAxis(param_2,&local_f8);
  puVar4 = (undefined8 *)FVector::RotateAngleAxis(&local_f8,&local_e8);
  local_f0 = *(float *)(puVar4 + 1);
  fVar8 = (float)((ulonglong)*puVar4 >> 0x20);
  local_f8._0_4_ = (float)*puVar4;
  fVar7 = fVar8 * fVar8 + (float)local_f8 * (float)local_f8 + local_f0 * local_f0;
  if (fVar7 != 1.0) {
    if (fVar7 < 1e-08) {
      local_f0 = DAT_1468b5d98;
      local_f8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_141639749;
    }
    auVar11 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar10 = auVar11._0_4_;
    fVar10 = fVar10 + fVar10 * (0.5 - fVar7 * 0.5 * fVar10 * fVar10);
    fVar10 = fVar10 + fVar10 * (0.5 - fVar7 * 0.5 * fVar10 * fVar10);
    local_f8._0_4_ = (float)local_f8 * fVar10;
    fVar8 = fVar8 * fVar10;
    local_f0 = local_f0 * fVar10;
  }
  local_f8 = CONCAT44(fVar8,(float)local_f8);
LAB_141639749:
  *(undefined8 *)param_1 = local_f8;
  param_1[2] = local_f0;
  return param_1;
}



// FUNCTION 141639870 VRandCone body=1089 status=ok
// SIG undefined VRandCone(void)

float * FMath::VRandCone(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined8 local_118;
  float local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_a8 [160];
  
  fVar10 = DAT_1468b5d98;
  if ((param_4 <= 0.0) || (param_3 <= 0.0)) {
    fVar8 = param_2[1];
    fVar12 = *param_2;
    fVar1 = param_2[2];
    fVar11 = fVar12 * fVar12 + fVar8 * fVar8 + fVar1 * fVar1;
    if (fVar11 == 1.0) {
      fVar10 = param_2[2];
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      param_1[2] = fVar10;
      return param_1;
    }
    if (fVar11 < 1e-08) {
      *(ulonglong *)param_1 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      param_1[2] = fVar10;
      return param_1;
    }
    auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar10 = auVar13._0_4_;
    fVar10 = fVar10 + fVar10 * (0.5 - fVar11 * 0.5 * fVar10 * fVar10);
    fVar10 = fVar10 + fVar10 * (0.5 - fVar11 * 0.5 * fVar10 * fVar10);
    *param_1 = fVar12 * fVar10;
    param_1[1] = fVar8 * fVar10;
    param_1[2] = fVar1 * fVar10;
    return param_1;
  }
  pfVar7 = param_1;
  iVar2 = rand();
  lVar6 = (long)pfVar7;
  iVar3 = rand();
  fVar8 = ((float)iVar3 * 3.051851e-05 + (float)iVar3 * 3.051851e-05) - 1.0;
  fVar10 = -1.0;
  if ((-1.0 <= fVar8) && (fVar10 = fVar8, 1.0 <= fVar8)) {
    fVar10 = 1.0;
  }
  fVar8 = ::_guard_xfg_dispatch_icall_nop(fVar10);
  uVar9 = __libm_sse2_sincosf_();
  param_3 = (float)uVar9 / param_3;
  param_4 = (float)((ulonglong)uVar9 >> 0x20) / param_4;
  fVar10 = SQRT(1.0 / (param_3 * param_3 + param_4 * param_4));
  if (1e-08 < fVar10) {
    fVar10 = (float)(int)(fVar8 / fVar10) * fVar10;
    if (ABS(fVar8) < ABS(fVar10)) {
      fVar10 = fVar8;
    }
    fVar8 = fVar8 - fVar10;
  }
  else {
    AK::MemoryMgr::StartProfileThreadUsage(lVar6);
    fVar8 = 0.0;
  }
  local_118._4_4_ = (float)FGenericPlatformMath::Atan2();
  local_118._4_4_ = local_118._4_4_ * 57.295776;
  fVar10 = (float)FGenericPlatformMath::Atan2();
  local_110 = 0.0;
  local_118 = CONCAT44(local_118._4_4_,fVar10 * 57.295776);
  puVar4 = (undefined4 *)FRotationMatrix::FRotationMatrix(local_a8,&local_118);
  local_f8 = *puVar4;
  local_f4 = puVar4[1];
  local_f0 = puVar4[2];
  local_108 = puVar4[4];
  local_104 = puVar4[5];
  local_100 = puVar4[6];
  FVector::RotateAngleAxis(param_2,&local_118,fVar8 * 57.295776,&local_108);
  puVar5 = (undefined8 *)
           FVector::RotateAngleAxis
                     (&local_118,&local_108,(float)iVar2 * 0.00019175345 * 57.295776,&local_f8);
  local_110 = *(float *)(puVar5 + 1);
  fVar10 = (float)((ulonglong)*puVar5 >> 0x20);
  local_118._0_4_ = (float)*puVar5;
  fVar8 = fVar10 * fVar10 + (float)local_118 * (float)local_118 + local_110 * local_110;
  if (fVar8 != 1.0) {
    if (fVar8 < 1e-08) {
      local_110 = DAT_1468b5d98;
      local_118 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_141639b85;
    }
    auVar13 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar12 = auVar13._0_4_;
    fVar12 = fVar12 + fVar12 * (0.5 - fVar8 * 0.5 * fVar12 * fVar12);
    fVar12 = fVar12 + fVar12 * (0.5 - fVar8 * 0.5 * fVar12 * fVar12);
    local_118._0_4_ = (float)local_118 * fVar12;
    fVar10 = fVar10 * fVar12;
    local_110 = local_110 * fVar12;
  }
  local_118 = CONCAT44(fVar10,(float)local_118);
LAB_141639b85:
  *(undefined8 *)param_1 = local_118;
  param_1[2] = local_110;
  return param_1;
}



// FUNCTION 141639cc0 Vector2DInterpConstantTo body=169 status=ok
// SIG undefined Vector2DInterpConstantTo(void)

float * FMath::Vector2DInterpConstantTo
                  (float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  param_4 = param_4 * param_5;
  fVar3 = *param_3 - *param_2;
  fVar1 = param_2[1];
  fVar4 = param_3[1] - fVar1;
  fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  if (fVar2 <= param_4) {
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    return param_1;
  }
  if (0.0 < param_4) {
    fVar2 = 1.0 / fVar2;
    *param_1 = fVar3 * fVar2 * param_4 + *param_2;
    param_1[1] = fVar4 * fVar2 * param_4 + fVar1;
    return param_1;
  }
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return param_1;
}



// FUNCTION 141639d70 Vector2DInterpTo body=151 status=ok
// SIG undefined Vector2DInterpTo(void)

float * FMath::Vector2DInterpTo
                  (float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (0.0 < param_5) {
    fVar4 = *param_3 - *param_2;
    fVar3 = param_3[1] - param_2[1];
    if (0.0001 <= fVar3 * fVar3 + fVar4 * fVar4) {
      param_4 = param_4 * param_5;
      fVar2 = 0.0;
      if ((0.0 <= param_4) && (fVar2 = param_4, 1.0 <= param_4)) {
        fVar2 = 1.0;
      }
      fVar1 = param_2[1];
      *param_1 = fVar4 * fVar2 + *param_2;
      param_1[1] = fVar3 * fVar2 + fVar1;
      return param_1;
    }
  }
  *(undefined8 *)param_1 = *(undefined8 *)param_3;
  return param_1;
}



// FUNCTION 141639e10 Vector body=655 status=ok
// SIG undefined Vector(void)

float * FRotator::Vector(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *param_1 * 0.017453292;
  if (fVar5 < 0.0) {
    fVar1 = fVar5 * 0.15915494 - 0.5;
  }
  else {
    fVar1 = fVar5 * 0.15915494 + 0.5;
  }
  fVar5 = fVar5 - (float)(int)fVar1 * 6.2831855;
  if (fVar5 <= 1.5707964) {
    if (-1.5707964 <= fVar5) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = -1.0;
      fVar5 = -3.1415927 - fVar5;
    }
  }
  else {
    fVar1 = -1.0;
    fVar5 = 3.1415927 - fVar5;
  }
  fVar3 = fVar5 * fVar5;
  fVar1 = (((((2.4760495e-05 - fVar3 * 2.6051615e-07) * fVar3 - 0.0013888378) * fVar3 + 0.041666638)
            * fVar3 - 0.5) * fVar3 + 1.0) * fVar1;
  fVar6 = param_1[1] * 0.017453292;
  if (fVar6 < 0.0) {
    fVar2 = fVar6 * 0.15915494 - 0.5;
  }
  else {
    fVar2 = fVar6 * 0.15915494 + 0.5;
  }
  fVar6 = fVar6 - (float)(int)fVar2 * 6.2831855;
  if (fVar6 <= 1.5707964) {
    fVar2 = fVar1;
    if (-1.5707964 <= fVar6) goto LAB_141639fe1;
    fVar6 = -3.1415927 - fVar6;
  }
  else {
    fVar6 = 3.1415927 - fVar6;
  }
  fVar2 = -fVar1;
LAB_141639fe1:
  fVar4 = fVar6 * fVar6;
  param_2[2] = (((((2.7525562e-06 - fVar3 * 2.3889859e-08) * fVar3 - 0.00019840874) * fVar3 +
                 0.008333331) * fVar3 - 0.16666667) * fVar3 + 1.0) * fVar5;
  *param_2 = (((((2.4760495e-05 - fVar4 * 2.6051615e-07) * fVar4 - 0.0013888378) * fVar4 +
               0.041666638) * fVar4 - 0.5) * fVar4 + 1.0) * fVar2;
  param_2[1] = (((((2.7525562e-06 - fVar4 * 2.3889859e-08) * fVar4 - 0.00019840874) * fVar4 +
                 0.008333331) * fVar4 - 0.16666667) * fVar4 + 1.0) * fVar6 * fVar1;
  return param_2;
}



// FUNCTION 14163a0a0 Warning body=111 status=ok
// SIG undefined Warning(void)

undefined8 * FMessageLog::Warning(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_141624290(param_2,3);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  *puVar3 = *param_2;
  lVar2 = param_2[1];
  puVar3[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14163a110 FUN_14163a110 body=4397 status=ok
// SIG undefined FUN_14163a110(void)

void FUN_14163a110(uint *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar4 = (ulonglong)CONCAT21(CONCAT11(param_3[0xc],param_3[0xd]),param_3[0xe]) << 8 ^
          (ulonglong)param_1[3];
  uVar5 = (ulonglong)CONCAT21(CONCAT11(param_3[8],param_3[9]),param_3[10]) << 8 ^
          (ulonglong)param_1[2];
  uVar10 = (ulonglong)CONCAT21(CONCAT11(param_3[4],param_3[5]),param_3[6]) << 8 ^
           (ulonglong)param_1[1];
  uVar1 = CONCAT31(CONCAT21(CONCAT11(*param_3,param_3[1]),param_3[2]),param_3[3]) ^ *param_1;
  uVar2 = *(uint *)(&DAT_144cbffc0 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_144cc03c0 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + ((uVar10 ^ (byte)param_3[7]) & 0xff) * 4) ^ param_1[4];
  uVar8 = *(uint *)(&DAT_144cc03c0 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (uVar10 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + ((uVar5 ^ (byte)param_3[0xb]) & 0xff) * 4) ^ param_1[5];
  uVar6 = *(uint *)(&DAT_144cbffc0 + (uVar10 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar1 >> 8) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + ((uVar4 ^ (byte)param_3[0xf]) & 0xff) * 4) ^ param_1[6];
  uVar1 = *(uint *)(&DAT_144cbffc0 + (uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_144cc03c0 + (uVar10 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_1[7];
  uVar3 = *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar1 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar6 >> 8) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar8 & 0xff) * 4) ^ param_1[8];
  uVar9 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar1 >> 8) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar8 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar6 & 0xff) * 4) ^ param_1[9];
  uVar7 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
          *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar8 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_1[10];
  uVar1 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar8 >> 8) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar6 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_1[0xb];
  uVar2 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar9 & 0xff) * 4) ^ param_1[0xc];
  uVar8 = *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar1 >> 8) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar9 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar7 & 0xff) * 4) ^ param_1[0xd];
  uVar6 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
          *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar9 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_1[0xe];
  uVar1 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar9 >> 8) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar7 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar3 & 0xff) * 4) ^ param_1[0xf];
  uVar3 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar6 >> 8) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar8 & 0xff) * 4) ^ param_1[0x10];
  uVar9 = *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar1 >> 8) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar8 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar6 & 0xff) * 4) ^ param_1[0x11];
  uVar7 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
          *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar8 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_1[0x12];
  uVar1 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar8 >> 8) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar6 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_1[0x13];
  uVar2 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar9 & 0xff) * 4) ^ param_1[0x14];
  uVar8 = *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar1 >> 8) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar9 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar7 & 0xff) * 4) ^ param_1[0x15];
  uVar6 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
          *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar9 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_1[0x16];
  uVar1 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar9 >> 8) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar7 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar3 & 0xff) * 4) ^ param_1[0x17];
  uVar3 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar6 >> 8) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar8 & 0xff) * 4) ^ param_1[0x18];
  uVar9 = *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar1 >> 8) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar8 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar6 & 0xff) * 4) ^ param_1[0x19];
  uVar7 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
          *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar8 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_1[0x1a];
  uVar1 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar8 >> 8) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar6 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_1[0x1b];
  uVar2 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar9 & 0xff) * 4) ^ param_1[0x1c];
  uVar8 = *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar1 >> 8) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar9 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar7 & 0xff) * 4) ^ param_1[0x1d];
  uVar6 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
          *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar9 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_1[0x1e];
  uVar1 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar9 >> 8) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar7 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar3 & 0xff) * 4) ^ param_1[0x1f];
  uVar3 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar6 >> 8) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar8 & 0xff) * 4) ^ param_1[0x20];
  uVar9 = *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar1 >> 8) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar8 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar6 & 0xff) * 4) ^ param_1[0x21];
  uVar7 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
          *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar8 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_1[0x22];
  uVar2 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar8 >> 8) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar6 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_1[0x23];
  uVar6 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar7 >> 8) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar9 & 0xff) * 4) ^ param_1[0x24];
  uVar8 = *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar9 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar7 & 0xff) * 4) ^ param_1[0x25];
  uVar1 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
          *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar9 >> 0x10) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar2 & 0xff) * 4) ^ param_1[0x26];
  uVar4 = (ulonglong)uVar1;
  uVar2 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar9 >> 8) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar7 >> 0x10) & 0xff) * 4) ^
          *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar3 & 0xff) * 4) ^ param_1[0x27];
  uVar5 = (ulonglong)uVar2;
  if (10 < param_2) {
    uVar3 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar8 >> 8) * 4) ^
            *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar2 >> 0x18) * 4) ^
            *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar6 & 0xff) * 4) ^ param_1[0x2b];
    uVar7 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar6 >> 8) * 4) ^
            *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar8 >> 0x10) * 4) ^
            *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
            *(uint *)(&DAT_144cc07c0 + (uVar5 & 0xff) * 4) ^ param_1[0x2a];
    uVar9 = *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar6 >> 0x10) * 4) ^
            *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
            *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar8 >> 0x18) * 4) ^
            *(uint *)(&DAT_144cc07c0 + (uVar4 & 0xff) * 4) ^ param_1[0x29];
    uVar1 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar1 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar6 >> 0x18) * 4) ^
            *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar8 & 0xff) * 4) ^ param_1[0x28];
    uVar6 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar7 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
            *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar9 & 0xff) * 4) ^ param_1[0x2c];
    uVar8 = *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar3 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar9 >> 0x18) * 4) ^
            *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar7 & 0xff) * 4) ^ param_1[0x2d];
    uVar2 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar1 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar9 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar7 >> 0x18) * 4) ^
            *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar3 & 0xff) * 4) ^ param_1[0x2e];
    uVar4 = (ulonglong)uVar2;
    uVar1 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar9 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar7 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar3 >> 0x18) * 4) ^
            *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_1[0x2f];
    uVar5 = (ulonglong)uVar1;
    if (0xc < param_2) {
      uVar3 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar8 >> 8) * 4) ^
              *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4) ^
              *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar6 & 0xff) * 4) ^ param_1[0x33];
      uVar7 = *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar6 >> 8) * 4) ^
              *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar8 >> 0x10) * 4) ^
              *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_144cc07c0 + (uVar5 & 0xff) * 4) ^ param_1[0x32];
      uVar9 = *(uint *)(&DAT_144cbffc0 + (ulonglong)(byte)(uVar6 >> 0x10) * 4) ^
              *(uint *)(&DAT_144cc03c0 + (ulonglong)(byte)(uVar1 >> 8) * 4) ^
              *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar8 >> 0x18) * 4) ^
              *(uint *)(&DAT_144cc07c0 + (uVar4 & 0xff) * 4) ^ param_1[0x31];
      uVar1 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar2 >> 8) & 0xff) * 4) ^
              *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
              *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar6 >> 0x18) * 4) ^
              *(uint *)(&DAT_144cc07c0 + (ulonglong)(uVar8 & 0xff) * 4) ^ param_1[0x30];
      uVar6 = *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar7 >> 8) & 0xff) * 4) ^
              *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4) ^
              *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar9 & 0xff) * 4) ^ param_1[0x34];
      uVar8 = *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
              *(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar3 >> 8) & 0xff) * 4) ^
              *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar9 >> 0x18) * 4) ^
              *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar7 & 0xff) * 4) ^ param_1[0x35];
      uVar4 = (ulonglong)
              (*(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar1 >> 8) & 0xff) * 4) ^
               *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar9 >> 0x10) & 0xff) * 4) ^
               *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar7 >> 0x18) * 4) ^
               *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar3 & 0xff) * 4) ^ param_1[0x36]);
      uVar5 = (ulonglong)
              (*(uint *)(&DAT_144cc03c0 + ((ulonglong)(uVar9 >> 8) & 0xff) * 4) ^
               *(uint *)(&DAT_144cbffc0 + ((ulonglong)(uVar7 >> 0x10) & 0xff) * 4) ^
               *(uint *)(&DAT_144cbfbc0 + (ulonglong)(uVar3 >> 0x18) * 4) ^
               *(uint *)(&DAT_144cc07c0 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_1[0x37]);
    }
  }
  param_1 = param_1 + (longlong)param_2 * 4;
  uVar1 = *(uint *)(&DAT_144cc0bc0 + (uVar5 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_144cc0bc0 + (uVar4 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_144cc0bc0 + (ulonglong)(uVar6 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_144cc0bc0)[(ulonglong)(uVar8 & 0xff) * 4] ^ *param_1;
  param_4[3] = (char)uVar1;
  *param_4 = (char)(uVar1 >> 0x18);
  param_4[1] = (char)(uVar1 >> 0x10);
  param_4[2] = (char)(uVar1 >> 8);
  uVar1 = *(uint *)(&DAT_144cc0bc0 + (ulonglong)(byte)(uVar6 >> 0x10) * 4) & 0xff0000 ^
          *(uint *)(&DAT_144cc0bc0 + (uVar5 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_144cc0bc0 + (ulonglong)(uVar8 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_144cc0bc0)[(uVar4 & 0xff) * 4] ^ param_1[1];
  param_4[7] = (char)uVar1;
  param_4[4] = (char)(uVar1 >> 0x18);
  param_4[5] = (char)(uVar1 >> 0x10);
  param_4[6] = (char)(uVar1 >> 8);
  uVar1 = *(uint *)(&DAT_144cc0bc0 + (ulonglong)(byte)(uVar8 >> 0x10) * 4) & 0xff0000 ^
          *(uint *)(&DAT_144cc0bc0 + (ulonglong)(byte)(uVar6 >> 8) * 4) & 0xff00 ^
          *(uint *)(&DAT_144cc0bc0 + (uVar4 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_144cc0bc0)[(uVar5 & 0xff) * 4] ^ param_1[2];
  param_4[0xb] = (char)uVar1;
  param_4[8] = (char)(uVar1 >> 0x18);
  param_4[9] = (char)(uVar1 >> 0x10);
  param_4[10] = (char)(uVar1 >> 8);
  uVar1 = *(uint *)(&DAT_144cc0bc0 + (uVar4 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_144cc0bc0 + ((ulonglong)(uVar8 >> 8) & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_144cc0bc0 + (uVar5 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_144cc0bc0)[(ulonglong)(uVar6 & 0xff) * 4] ^ param_1[3];
  param_4[0xc] = (char)(uVar1 >> 0x18);
  param_4[0xd] = (char)(uVar1 >> 0x10);
  param_4[0xe] = (char)(uVar1 >> 8);
  param_4[0xf] = (char)uVar1;
  return;
}



// FUNCTION 14163b240 FUN_14163b240 body=569 status=ok
// SIG undefined FUN_14163b240(void)

int FUN_14163b240(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  iVar6 = rijndaelSetupEncrypt();
  lVar10 = (longlong)(iVar6 * 4);
  if (0 < iVar6 * 4) {
    lVar12 = 0;
    puVar7 = (undefined4 *)(param_1 + 8);
    puVar9 = (undefined4 *)(param_1 + 8 + lVar10 * 4);
    do {
      uVar3 = puVar7[-2];
      lVar12 = lVar12 + 4;
      puVar7[-2] = puVar9[-2];
      lVar10 = lVar10 + -4;
      puVar9[-2] = uVar3;
      uVar3 = puVar7[-1];
      puVar7[-1] = puVar9[-1];
      puVar9[-1] = uVar3;
      uVar3 = *puVar7;
      *puVar7 = *puVar9;
      *puVar9 = uVar3;
      uVar3 = puVar7[1];
      puVar7[1] = puVar9[1];
      puVar9[1] = uVar3;
      puVar7 = puVar7 + 4;
      puVar9 = puVar9 + -4;
    } while (lVar12 < lVar10);
  }
  if (1 < iVar6) {
    uVar11 = (ulonglong)(iVar6 - 1);
    pbVar8 = (byte *)(param_1 + 2);
    do {
      *(uint *)(pbVar8 + 0xe) =
           *(uint *)(&DAT_144cc07c0 +
                    (ulonglong)(byte)(&DAT_144cbf7c0)[(ulonglong)pbVar8[0xe] * 4] * 4) ^
           *(uint *)(&DAT_144cc03c0 +
                    (ulonglong)(byte)(&DAT_144cbf7c0)[(ulonglong)pbVar8[0xf] * 4] * 4) ^
           *(uint *)(&DAT_144cbfbc0 +
                    (ulonglong)(byte)(&DAT_144cbf7c0)[(ulonglong)pbVar8[0x11] * 4] * 4) ^
           *(uint *)(&DAT_144cbffc0 +
                    (ulonglong)(byte)(&DAT_144cbf7c0)[(ulonglong)pbVar8[0x10] * 4] * 4);
      uVar4 = *(uint *)(pbVar8 + 0x12);
      uVar5 = *(uint *)(pbVar8 + 0x16);
      bVar1 = (&DAT_144cbf7c0)[(ulonglong)(uVar5 & 0xff) * 4];
      *(uint *)(pbVar8 + 0x12) =
           *(uint *)(&DAT_144cc07c0 +
                    (ulonglong)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar4 & 0xff) * 4] * 4) ^
           *(uint *)(&DAT_144cbfbc0 +
                    (ulonglong)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar4 >> 0x18) * 4] * 4) ^
           *(uint *)(&DAT_144cbffc0 +
                    (ulonglong)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar4 >> 0x10 & 0xff) * 4] * 4) ^
           *(uint *)(&DAT_144cc03c0 +
                    (ulonglong)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar4 >> 8 & 0xff) * 4] * 4);
      uVar4 = *(uint *)(pbVar8 + 0x1a);
      bVar2 = (&DAT_144cbf7c0)[(ulonglong)(uVar4 & 0xff) * 4];
      *(uint *)(pbVar8 + 0x16) =
           *(uint *)(&DAT_144cc07c0 + (ulonglong)bVar1 * 4) ^
           *(uint *)(&DAT_144cbfbc0 +
                    (ulonglong)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar5 >> 0x18) * 4] * 4) ^
           *(uint *)(&DAT_144cbffc0 +
                    (ulonglong)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar5 >> 0x10 & 0xff) * 4] * 4) ^
           *(uint *)(&DAT_144cc03c0 +
                    (ulonglong)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar5 >> 8 & 0xff) * 4] * 4);
      *(uint *)(pbVar8 + 0x1a) =
           *(uint *)(&DAT_144cc07c0 + (ulonglong)bVar2 * 4) ^
           *(uint *)(&DAT_144cbfbc0 +
                    (ulonglong)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar4 >> 0x18) * 4] * 4) ^
           *(uint *)(&DAT_144cbffc0 +
                    (ulonglong)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar4 >> 0x10 & 0xff) * 4] * 4) ^
           *(uint *)(&DAT_144cc03c0 +
                    (ulonglong)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar4 >> 8 & 0xff) * 4] * 4);
      uVar11 = uVar11 - 1;
      pbVar8 = pbVar8 + 0x10;
    } while (uVar11 != 0);
  }
  return iVar6;
}



// FUNCTION 14163b480 rijndaelSetupEncrypt body=3520 status=ok
// SIG undefined rijndaelSetupEncrypt(void)

undefined8 rijndaelSetupEncrypt(uint *param_1,undefined1 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar7 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]);
  *param_1 = uVar7;
  param_1[1] = CONCAT31(CONCAT21(CONCAT11(param_2[4],param_2[5]),param_2[6]),param_2[7]);
  param_1[2] = CONCAT31(CONCAT21(CONCAT11(param_2[8],param_2[9]),param_2[10]),param_2[0xb]);
  bVar1 = param_2[0xd];
  bVar2 = param_2[0xc];
  bVar3 = param_2[0xe];
  bVar4 = param_2[0xf];
  uVar9 = CONCAT31(CONCAT21(CONCAT11(bVar2,bVar1),bVar3),bVar4);
  param_1[3] = uVar9;
  if (param_3 == 0x80) {
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)bVar1 * 4) ^ 0x1000000) & 0xff000000 ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)bVar3 * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)bVar2 * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)bVar4 * 4) & 0xff00 ^ uVar7;
    param_1[4] = uVar7;
    param_1[5] = uVar7 ^ param_1[1];
    uVar5 = uVar7 ^ param_1[1] ^ param_1[2];
    param_1[6] = uVar5;
    uVar5 = uVar5 ^ uVar9;
    param_1[7] = uVar5;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar5 >> 0x10) * 4) ^ 0x2000000) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar5 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar5 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar5 & 0xff) * 4) & 0xff00 ^ uVar7;
    param_1[8] = uVar7;
    uVar7 = uVar7 ^ param_1[5];
    param_1[9] = uVar7;
    uVar7 = param_1[6] ^ uVar7;
    param_1[10] = uVar7;
    uVar7 = uVar7 ^ param_1[7];
    param_1[0xb] = uVar7;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^ 0x4000000) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ param_1[8];
    param_1[0xc] = uVar7;
    uVar7 = uVar7 ^ param_1[9];
    param_1[0xd] = uVar7;
    uVar7 = uVar7 ^ param_1[10];
    param_1[0xe] = uVar7;
    uVar7 = uVar7 ^ param_1[0xb];
    param_1[0xf] = uVar7;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^ 0x8000000) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ param_1[0xc];
    param_1[0x10] = uVar7;
    uVar7 = uVar7 ^ param_1[0xd];
    param_1[0x11] = uVar7;
    uVar7 = uVar7 ^ param_1[0xe];
    param_1[0x12] = uVar7;
    uVar7 = uVar7 ^ param_1[0xf];
    param_1[0x13] = uVar7;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^ 0x10000000) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ param_1[0x10];
    param_1[0x14] = uVar7;
    uVar7 = uVar7 ^ param_1[0x11];
    param_1[0x15] = uVar7;
    uVar7 = uVar7 ^ param_1[0x12];
    param_1[0x16] = uVar7;
    uVar7 = uVar7 ^ param_1[0x13];
    param_1[0x17] = uVar7;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^ 0x20000000) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ param_1[0x14];
    param_1[0x18] = uVar7;
    uVar7 = uVar7 ^ param_1[0x15];
    param_1[0x19] = uVar7;
    uVar7 = uVar7 ^ param_1[0x16];
    param_1[0x1a] = uVar7;
    uVar7 = uVar7 ^ param_1[0x17];
    param_1[0x1b] = uVar7;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^ 0x40000000) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ param_1[0x18];
    param_1[0x1c] = uVar7;
    uVar7 = param_1[0x19] ^ uVar7;
    param_1[0x1d] = uVar7;
    uVar7 = uVar7 ^ param_1[0x1a];
    param_1[0x1e] = uVar7;
    uVar7 = uVar7 ^ param_1[0x1b];
    param_1[0x1f] = uVar7;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^ 0x80ffffff) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ param_1[0x1c];
    param_1[0x20] = uVar7;
    uVar7 = param_1[0x1d] ^ uVar7;
    param_1[0x21] = uVar7;
    uVar7 = uVar7 ^ param_1[0x1e];
    param_1[0x22] = uVar7;
    uVar7 = uVar7 ^ param_1[0x1f];
    param_1[0x23] = uVar7;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^ 0x1b000000) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ param_1[0x20];
    param_1[0x24] = uVar7;
    uVar7 = uVar7 ^ param_1[0x21];
    param_1[0x25] = uVar7;
    uVar7 = uVar7 ^ param_1[0x22];
    param_1[0x26] = uVar7;
    uVar7 = uVar7 ^ param_1[0x23];
    param_1[0x27] = uVar7;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^ 0x36000000) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ param_1[0x24];
    param_1[0x28] = uVar7;
    uVar7 = param_1[0x25] ^ uVar7;
    param_1[0x29] = uVar7;
    uVar7 = uVar7 ^ param_1[0x26];
    param_1[0x2a] = uVar7;
    param_1[0x2b] = uVar7 ^ param_1[0x27];
    return 10;
  }
  param_1[4] = CONCAT31(CONCAT21(CONCAT11(param_2[0x10],param_2[0x11]),param_2[0x12]),param_2[0x13])
  ;
  bVar1 = param_2[0x15];
  bVar2 = param_2[0x14];
  bVar3 = param_2[0x16];
  bVar4 = param_2[0x17];
  puVar6 = param_1 + 5;
  *puVar6 = CONCAT31(CONCAT21(CONCAT11(bVar2,bVar1),bVar3),bVar4);
  if (param_3 == 0xc0) {
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)bVar1 * 4) ^ 0x1000000) & 0xff000000 ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)bVar3 * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)bVar2 * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)bVar4 * 4) & 0xff00 ^ uVar7;
    param_1[6] = uVar7;
    param_1[7] = uVar7 ^ param_1[1];
    uVar9 = uVar7 ^ param_1[1] ^ param_1[2];
    param_1[8] = uVar9;
    uVar9 = uVar9 ^ param_1[3];
    param_1[9] = uVar9;
    uVar9 = uVar9 ^ param_1[4];
    param_1[10] = uVar9;
    uVar9 = uVar9 ^ *puVar6;
    param_1[0xb] = uVar9;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar9 >> 0x10) * 4) ^ 0x2000000) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar9 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar9 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar9 & 0xff) * 4) & 0xff00 ^ uVar7;
    param_1[0xc] = uVar7;
    uVar7 = uVar7 ^ param_1[7];
    param_1[0xd] = uVar7;
    uVar7 = uVar7 ^ param_1[8];
    param_1[0xe] = uVar7;
    uVar7 = uVar7 ^ param_1[9];
    param_1[0xf] = uVar7;
    uVar7 = uVar7 ^ param_1[10];
    param_1[0x10] = uVar7;
    uVar7 = uVar7 ^ param_1[0xb];
    param_1[0x11] = uVar7;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^ 0x4000000) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ param_1[0xc];
    param_1[0x12] = uVar7;
    uVar7 = uVar7 ^ param_1[0xd];
    param_1[0x13] = uVar7;
    uVar7 = uVar7 ^ param_1[0xe];
    param_1[0x14] = uVar7;
    uVar7 = uVar7 ^ param_1[0xf];
    param_1[0x15] = uVar7;
    uVar7 = uVar7 ^ param_1[0x10];
    param_1[0x16] = uVar7;
    uVar7 = uVar7 ^ param_1[0x11];
    param_1[0x17] = uVar7;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^ 0x8000000) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ param_1[0x12];
    param_1[0x18] = uVar7;
    uVar7 = uVar7 ^ param_1[0x13];
    param_1[0x19] = uVar7;
    uVar7 = uVar7 ^ param_1[0x14];
    param_1[0x1a] = uVar7;
    uVar7 = uVar7 ^ param_1[0x15];
    param_1[0x1b] = uVar7;
    uVar7 = uVar7 ^ param_1[0x16];
    param_1[0x1c] = uVar7;
    uVar7 = uVar7 ^ param_1[0x17];
    param_1[0x1d] = uVar7;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^ 0x10000000) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ param_1[0x18];
    param_1[0x1e] = uVar7;
    uVar7 = param_1[0x19] ^ uVar7;
    param_1[0x1f] = uVar7;
    uVar7 = uVar7 ^ param_1[0x1a];
    param_1[0x20] = uVar7;
    uVar7 = uVar7 ^ param_1[0x1b];
    param_1[0x21] = uVar7;
    uVar7 = param_1[0x1c] ^ uVar7;
    param_1[0x22] = uVar7;
    uVar7 = uVar7 ^ param_1[0x1d];
    param_1[0x23] = uVar7;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^ 0x20000000) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ param_1[0x1e];
    param_1[0x24] = uVar7;
    uVar7 = uVar7 ^ param_1[0x1f];
    param_1[0x25] = uVar7;
    uVar7 = uVar7 ^ param_1[0x20];
    param_1[0x26] = uVar7;
    uVar7 = uVar7 ^ param_1[0x21];
    param_1[0x27] = uVar7;
    uVar7 = uVar7 ^ param_1[0x22];
    param_1[0x28] = uVar7;
    uVar7 = uVar7 ^ param_1[0x23];
    param_1[0x29] = uVar7;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^ 0x40000000) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ param_1[0x24];
    param_1[0x2a] = uVar7;
    uVar7 = uVar7 ^ param_1[0x25];
    param_1[0x2b] = uVar7;
    uVar7 = uVar7 ^ param_1[0x26];
    param_1[0x2c] = uVar7;
    uVar7 = uVar7 ^ param_1[0x27];
    param_1[0x2d] = uVar7;
    uVar7 = uVar7 ^ param_1[0x28];
    param_1[0x2e] = uVar7;
    uVar7 = uVar7 ^ param_1[0x29];
    param_1[0x2f] = uVar7;
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^ 0x80ffffff) &
            0xff000000 ^ *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ param_1[0x2a];
    param_1[0x30] = uVar7;
    uVar7 = uVar7 ^ param_1[0x2b];
    param_1[0x31] = uVar7;
    uVar7 = param_1[0x2c] ^ uVar7;
    param_1[0x32] = uVar7;
    param_1[0x33] = uVar7 ^ param_1[0x2d];
    return 0xc;
  }
  param_1[6] = CONCAT31(CONCAT21(CONCAT11(param_2[0x18],param_2[0x19]),param_2[0x1a]),param_2[0x1b])
  ;
  bVar1 = param_2[0x1d];
  bVar2 = param_2[0x1c];
  bVar3 = param_2[0x1e];
  bVar4 = param_2[0x1f];
  param_1[7] = CONCAT31(CONCAT21(CONCAT11(bVar2,bVar1),bVar3),bVar4);
  if (param_3 == 0x100) {
    uVar7 = (*(uint *)(&DAT_144cbf7c0 + (ulonglong)bVar1 * 4) ^ 0x1000000) & 0xff000000 ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)bVar3 * 4) & 0xff0000 ^
            (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)bVar2 * 4] ^
            *(uint *)(&DAT_144cbf7c0 + (ulonglong)bVar4 * 4) & 0xff00 ^ uVar7;
    puVar8 = &DAT_144cc0fcc;
    param_1[8] = uVar7;
    uVar7 = uVar7 ^ param_1[1];
    param_1[9] = uVar7;
    uVar7 = uVar7 ^ param_1[2];
    param_1[10] = uVar7;
    param_1[0xb] = uVar7 ^ param_1[3];
    do {
      uVar7 = puVar6[6];
      uVar7 = *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) & 0xff0000 ^
              *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff00 ^
              *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 >> 0x18) * 4) & 0xff000000 ^
              (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 & 0xff) * 4] ^ puVar6[-1];
      puVar6[7] = uVar7;
      uVar7 = uVar7 ^ *puVar6;
      uVar9 = puVar6[1] ^ uVar7;
      puVar6[8] = uVar7;
      uVar7 = puVar6[2] ^ uVar9;
      puVar6[9] = uVar9;
      puVar6[10] = uVar7;
      uVar7 = *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
              *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) & 0xff000000 ^
              (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
              *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ puVar8[-2] ^
              puVar6[3];
      puVar6[0xb] = uVar7;
      uVar7 = puVar6[4] ^ uVar7;
      puVar6[0xc] = uVar7;
      uVar7 = puVar6[5] ^ uVar7;
      puVar6[0xd] = uVar7;
      uVar7 = uVar7 ^ puVar6[6];
      puVar6[0xe] = uVar7;
      uVar7 = *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) & 0xff0000 ^
              *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff00 ^
              *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 >> 0x18) * 4) & 0xff000000 ^
              (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 & 0xff) * 4] ^ puVar6[7];
      puVar6[0xf] = uVar7;
      uVar7 = uVar7 ^ puVar6[8];
      uVar9 = puVar6[9] ^ uVar7;
      puVar6[0x10] = uVar7;
      uVar7 = puVar6[10] ^ uVar9;
      puVar6[0x11] = uVar9;
      puVar6[0x12] = uVar7;
      uVar7 = *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff0000 ^
              *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) & 0xff000000 ^
              (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 >> 0x18) * 4] ^
              *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 & 0xff) * 4) & 0xff00 ^ puVar8[-1] ^
              puVar6[0xb];
      puVar6[0x13] = uVar7;
      uVar7 = uVar7 ^ puVar6[0xc];
      puVar6[0x14] = uVar7;
      uVar7 = uVar7 ^ puVar6[0xd];
      puVar6[0x15] = uVar7;
      uVar7 = uVar7 ^ puVar6[0xe];
      puVar6[0x16] = uVar7;
      uVar7 = *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) & 0xff0000 ^
              *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar7 >> 8) * 4) & 0xff00 ^
              *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar7 >> 0x18) * 4) & 0xff000000 ^
              (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar7 & 0xff) * 4] ^ puVar6[0xf];
      uVar9 = puVar6[0x10] ^ uVar7;
      puVar6[0x17] = uVar7;
      uVar7 = puVar6[0x11] ^ uVar9;
      puVar6[0x18] = uVar9;
      uVar9 = puVar6[0x12] ^ uVar7;
      puVar6[0x19] = uVar7;
      puVar6[0x1a] = uVar9;
      uVar7 = *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar9 >> 8) * 4) & 0xff0000 ^
              *(uint *)(&DAT_144cbf7c0 + (ulonglong)(byte)(uVar9 >> 0x10) * 4) & 0xff000000 ^
              (uint)(byte)(&DAT_144cbf7c0)[(ulonglong)(uVar9 >> 0x18) * 4] ^
              *(uint *)(&DAT_144cbf7c0 + (ulonglong)(uVar9 & 0xff) * 4) & 0xff00 ^ puVar6[0x13] ^
              *puVar8;
      puVar8 = puVar8 + 3;
      puVar6[0x1b] = uVar7;
      uVar7 = puVar6[0x14] ^ uVar7;
      puVar6[0x1c] = uVar7;
      uVar7 = uVar7 ^ puVar6[0x15];
      puVar6[0x1d] = uVar7;
      puVar6[0x1e] = uVar7 ^ puVar6[0x16];
      puVar6 = puVar6 + 0x18;
    } while (puVar8 != (uint *)&DAT_144cc0fe4);
    return 0xe;
  }
  return 0;
}



// FUNCTION 14163c240 PrintScriptCallstack body=16 status=ok
// SIG undefined PrintScriptCallstack(void)

void PrintScriptCallstack(void)

{
                    /* 0x163c240  536  PrintScriptCallstack */
  if (DAT_1468b5aa0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014163c24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1468b5aa0)();
    return;
  }
  return;
}



// FUNCTION 14163c250 CopyToEmpty<FAutomationExecutionEntry> body=191 status=ok
// SIG undefined CopyToEmpty<FAutomationExecutionEntry>(void)

void TArray<FAutomationExecutionEntry,FDefaultAllocator>::CopyToEmpty<FAutomationExecutionEntry>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  if (param_3 != 0) {
    param_2 = param_2 + 0x18;
    puVar5 = (undefined1 *)*param_1;
    do {
      *puVar5 = *(undefined1 *)(param_2 + -0x18);
      FString::FString(puVar5 + 8,param_2 + -0x10);
      FString::FString(puVar5 + 0x18,param_2);
      uVar2 = *(undefined4 *)(param_2 + 0x14);
      uVar3 = *(undefined4 *)(param_2 + 0x18);
      uVar4 = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(puVar5 + 0x28) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(puVar5 + 0x2c) = uVar2;
      *(undefined4 *)(puVar5 + 0x30) = uVar3;
      *(undefined4 *)(puVar5 + 0x34) = uVar4;
      FString::FString(puVar5 + 0x38,param_2 + 0x20);
      *(undefined4 *)(puVar5 + 0x48) = *(undefined4 *)(param_2 + 0x30);
      puVar1 = (undefined8 *)(param_2 + 0x38);
      param_2 = param_2 + 0x58;
      *(undefined8 *)(puVar5 + 0x50) = *puVar1;
      param_3 = param_3 + -1;
      puVar5 = puVar5 + 0x58;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14163c310 FUN_14163c310 body=170 status=ok
// SIG undefined FUN_14163c310(void)

void FUN_14163c310(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  lVar1 = *param_1;
  if (param_3 != 0) {
    param_2 = param_2 + 0x20;
    do {
      FUN_141640100(lVar1,param_2 + -0x20);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + -8);
      FString::FString(lVar1 + 0x20,param_2);
      FString::FString(lVar1 + 0x30,param_2 + 0x10);
      lVar1 = lVar1 + 0x40;
      param_2 = param_2 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14163c3c0 Decode<wchar_t> body=294 status=ok
// SIG undefined Decode<wchar_t>(void)

ulonglong FBase64::Decode<wchar_t>(ushort *param_1,uint param_2,undefined1 *param_3)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  do {
    uVar9 = param_2;
    uVar6 = (ulonglong)uVar9;
    if (uVar9 == 0) break;
    param_2 = uVar9 - 1;
  } while (param_1[uVar9 - 1] == 0x3d);
  uVar5 = uVar6 & 0xffffffffffffff03;
  if ((char)uVar5 != '\x01') {
    uVar7 = 0;
    while (3 < uVar9) {
      uVar5 = 0;
      uVar9 = uVar7;
      do {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        if ((0xff < uVar2) || ((&DAT_144cc7fc0)[uVar2] == 0xff)) goto LAB_14163c4d8;
        uVar8 = (uint)uVar5;
        uVar3 = uVar8 << 6;
        uVar9 = uVar9 + 1;
        uVar4 = uVar3 | (byte)(&DAT_144cc7fc0)[uVar2];
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar9 < 4);
      param_3[2] = (char)uVar4;
      uVar9 = (int)uVar6 - 4;
      uVar6 = (ulonglong)uVar9;
      uVar8 = uVar8 & 0x3ffffff;
      param_3[1] = (char)(uVar3 >> 8);
      uVar5 = (ulonglong)(uVar8 >> 10);
      *param_3 = (char)((uVar8 >> 2) >> 8);
      param_3 = param_3 + 3;
    }
    uVar8 = uVar7;
    if (uVar9 != 0) {
      do {
        uVar2 = *param_1;
        uVar5 = (ulonglong)uVar2;
        param_1 = param_1 + 1;
        if (0xff < uVar2) goto LAB_14163c4d8;
        uVar5 = (ulonglong)uVar2;
        pbVar1 = &DAT_144cc7fc0 + uVar5;
        if (*pbVar1 == 0xff) goto LAB_14163c4d8;
        uVar8 = uVar8 + 1;
        uVar5 = 0;
        uVar7 = uVar7 << 6 | (uint)*pbVar1;
      } while (uVar8 < uVar9);
      if ((int)uVar9 < 4) {
        uVar5 = (ulonglong)(4 - uVar9);
        uVar6 = (ulonglong)(4 - uVar9);
        do {
          uVar7 = uVar7 << 6;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar9) {
        param_3[1] = (char)(uVar7 >> 8);
      }
      *param_3 = (char)(uVar7 >> 0x10);
    }
    return CONCAT71((int7)(uVar5 >> 8),1);
  }
LAB_14163c4d8:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 14163c4f0 Emplace<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_const_&> body=390 status=ok
// SIG undefined Emplace<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_const_&>(void)

int * TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_const_&>
                (longlong *param_1,int *param_2,longlong param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  void *_Dst;
  bool bVar6;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  FString::FString(local_30,param_3);
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[6] = 0;
  local_30[7] = 0;
  *(undefined4 *)(local_30 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)local_30 + 0x44) = 0;
  local_30[10] = 0;
  *(undefined4 *)(local_30 + 0xb) = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=(local_30 + 2,param_3 + 0x10);
  *(undefined4 *)(local_30 + 0xc) = 0xffffffff;
  bVar6 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FindId(param_1,local_res8,local_30);
    bVar6 = local_res8[0] != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)local_res8[0] * 0x68 + *param_1);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
      ::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
                (_Dst);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0x60);
      TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14163c653;
    }
  }
  cVar2 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar2 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*local_30;
    }
    uVar3 = FUN_140438070(puVar5);
    uVar3 = (int)param_1[9] - 1U & uVar3;
    *(uint *)((longlong)local_30 + 100) = uVar3;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 0xc) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) = iVar1
    ;
  }
LAB_14163c653:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 14163c680 Emplace<TTuple<FString,FConfigSection>_const_&> body=399 status=ok
// SIG undefined Emplace<TTuple<FString,FConfigSection>_const_&>(void)

int * TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<FString,FConfigSection>_const_&>
                (longlong *param_1,int *param_2,longlong param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  bool bVar6;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  FString::FString(local_30,param_3);
  FConfigSection::FConfigSection(local_30 + 2,param_3 + 0x10);
  *(undefined4 *)(local_30 + 0x16) = 0xffffffff;
  bVar6 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FindId(param_1,local_res8);
    bVar6 = local_res8[0] != -1;
    if (bVar6) {
      plVar5 = (longlong *)((longlong)local_res8[0] * 0xb8 + *param_1);
      FConfigSection::~FConfigSection(plVar5 + 2);
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar5,local_30,0xb0);
      TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14163c7ea;
    }
  }
  cVar2 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar2 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*local_30;
    }
    uVar3 = FUN_140438070(puVar4);
    uVar3 = (int)param_1[9] - 1U & uVar3;
    *(uint *)((longlong)local_30 + 0xb4) = uVar3;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 0x16) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) = iVar1
    ;
  }
LAB_14163c7ea:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 14163c810 Emplace<TTuple<enum_EConfigFileHierarchy,FIniFilename>_const_&> body=452 status=ok
// SIG undefined Emplace<TTuple<enum_EConfigFileHierarchy,FIniFilename>_const_&>(void)

int * TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<enum_EConfigFileHierarchy,FIniFilename>_const_&>
                (longlong *param_1,int *param_2,byte *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_28 [2];
  byte *local_20;
  
  TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *param_2 = local_28[0];
  *local_20 = *param_3;
  FString::FString(local_20 + 8,param_3 + 8);
  local_20[0x18] = param_3[0x18];
  FString::FString(local_20 + 0x20,param_3 + 0x20);
  local_20[0x30] = 0xff;
  local_20[0x31] = 0xff;
  local_20[0x32] = 0xff;
  local_20[0x33] = 0xff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (ulonglong)*local_20) * 4);
      if (iVar3 != -1) {
        do {
          if (*(byte *)((longlong)iVar3 * 0x38 + *param_1) == *local_20) goto LAB_14163c8eb;
          iVar3 = *(int *)((longlong)iVar3 * 0x38 + 0x30 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_14163c8eb:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0x38 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_14163c9a9;
    }
  }
  cVar1 = ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & (uint)*local_20;
    *(uint *)(local_20 + 0x34) = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 0x30) =
         *(undefined4 *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar4) * 4)
    ;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar4) * 4) = *param_2;
  }
LAB_14163c9a9:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 14163c9e0 Emplace<FName_const_&,FConfigValue> body=250 status=ok
// SIG undefined Emplace<FName_const_&,FConfigValue>(void)

longlong TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
         ::Emplace<FName_const_&,FConfigValue>
                   (longlong *param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  int local_18 [2];
  undefined8 *local_10;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_18);
  *local_10 = *param_2;
  FString::FString(local_10 + 1,param_3);
  FString::FString(local_10 + 3,param_3 + 0x10);
  *(undefined4 *)(local_10 + 5) = 0xffffffff;
  cVar1 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar1 == '\0') {
    uVar3 = (int)((ulonglong)*local_10 >> 0x20) + (int)*local_10 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_10 + 0x2c) = uVar3;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(undefined4 *)(local_10 + 5) =
         *(undefined4 *)
          ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) =
         local_18[0];
  }
  return *param_1 + 8 + (longlong)local_18[0] * 0x30;
}



// FUNCTION 14163cae0 Emplace<FString_const_&> body=342 status=ok
// SIG undefined Emplace<FString_const_&>(void)

longlong TMapBase<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
         ::Emplace<FString_const_&>(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  void *_Dst;
  undefined8 local_res8;
  int local_18 [2];
  undefined8 *local_10;
  
  local_res8 = param_2;
  TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_18);
  TKeyInitializer<FString_const_&>::
  operator<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
            (&local_res8,local_10);
  *(undefined4 *)(local_10 + 0xc) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
    ::FindId(param_1,&local_res8);
    if ((int)local_res8 != -1) {
      _Dst = (void *)((longlong)(int)local_res8 * 0x68 + *param_1);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
      ::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
                (_Dst);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_10,0x60);
      TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_18[0],1);
      local_18[0] = (int)local_res8;
      goto LAB_14163cc14;
    }
  }
  cVar1 = TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar1 == '\0') {
    if (*(int *)(local_10 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*local_10;
    }
    uVar2 = FUN_140438070(puVar4);
    uVar2 = (int)param_1[9] - 1U & uVar2;
    *(uint *)((longlong)local_10 + 100) = uVar2;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_10 + 0xc) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         local_18[0];
  }
LAB_14163cc14:
  return *param_1 + 0x10 + (longlong)local_18[0] * 0x68;
}



// FUNCTION 14163cc40 FUN_14163cc40 body=693 status=ok
// SIG undefined FUN_14163cc40(void)

int * FUN_14163cc40(longlong *param_1,int *param_2,byte *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  byte *_Src;
  uint *puVar13;
  int iVar14;
  bool bVar15;
  
  iVar7 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0xc);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0xc) = 0xffffffff;
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
  lVar1 = (longlong)iVar10 * 0xc;
  _Src = (byte *)(*param_1 + lVar1);
  bVar2 = *param_3;
  *_Src = bVar2;
  _Src[4] = 0xff;
  _Src[5] = 0xff;
  _Src[6] = 0xff;
  _Src[7] = 0xff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (ulonglong)bVar2) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(byte *)(*param_1 + (longlong)iVar8 * 0xc) == bVar2) break;
          iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0xc);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    bVar15 = iVar9 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0xc),_Src,1);
      bVar2 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0xc) = iVar10;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar6 + lVar5);
      *puVar13 = *puVar13 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_14163ced0;
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
    uVar12 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 8) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar12) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar12) * 4) = iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<unsigned_char,DefaultKeyFuncs<unsigned_char,0>,FDefaultSetAllocator>::Rehash(param_1);
  }
LAB_14163ced0:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 14163cf00 Emplace<TPairInitializer<FString_&&,FConfigSection_&&>_> body=406 status=ok
// SIG undefined Emplace<TPairInitializer<FString_&&,FConfigSection_&&>_>(void)

int * TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FConfigSection_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar2 = (undefined8 *)*param_3;
  uVar3 = param_3[1];
  *param_2 = local_38[0];
  *local_30 = 0;
  *local_30 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(local_30 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)local_30 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  FUN_14163fae0(local_30 + 2,uVar3);
  *(undefined4 *)(local_30 + 0x16) = 0xffffffff;
  bVar8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FindId(param_1,local_res8,local_30);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      plVar7 = (longlong *)((longlong)local_res8[0] * 0xb8 + *param_1);
      FConfigSection::~FConfigSection(plVar7 + 2);
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar7,local_30,0xb0);
      TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14163d073;
    }
  }
  cVar4 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*local_30;
    }
    uVar5 = FUN_140438070(puVar6);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)local_30 + 0xb4) = uVar5;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 0x16) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar1
    ;
  }
LAB_14163d073:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 14163d0a0 Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_> body=503 status=ok
// SIG undefined Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>(void)

int * TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_28 [2];
  byte *local_20;
  
  TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  puVar1 = (undefined8 *)param_3[1];
  bVar7 = false;
  *param_2 = local_28[0];
  *local_20 = *(byte *)*param_3;
  local_20[8] = 0;
  local_20[9] = 0;
  local_20[10] = 0;
  local_20[0xb] = 0;
  local_20[0xc] = 0;
  local_20[0xd] = 0;
  local_20[0xe] = 0;
  local_20[0xf] = 0;
  *(undefined8 *)(local_20 + 8) = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_20 + 0x10) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)(local_20 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_20[0x18] = *(byte *)(puVar1 + 2);
  local_20[0x20] = 0;
  local_20[0x21] = 0;
  local_20[0x22] = 0;
  local_20[0x23] = 0;
  local_20[0x24] = 0;
  local_20[0x25] = 0;
  local_20[0x26] = 0;
  local_20[0x27] = 0;
  *(undefined8 *)(local_20 + 0x20) = puVar1[3];
  puVar1[3] = 0;
  *(undefined4 *)(local_20 + 0x28) = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)(local_20 + 0x2c) = *(undefined4 *)((longlong)puVar1 + 0x24);
  puVar1[4] = 0;
  local_20[0x30] = 0xff;
  local_20[0x31] = 0xff;
  local_20[0x32] = 0xff;
  local_20[0x33] = 0xff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (ulonglong)*local_20) * 4);
      if (iVar4 != -1) {
        do {
          if (*(byte *)((longlong)iVar4 * 0x38 + *param_1) == *local_20) goto LAB_14163d1ae;
          iVar4 = *(int *)((longlong)iVar4 * 0x38 + 0x30 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_14163d1ae:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)iVar4 * 0x38 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_14163d26c;
    }
  }
  cVar2 = ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & (uint)*local_20;
    *(uint *)(local_20 + 0x34) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 0x30) =
         *(undefined4 *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar5) * 4)
    ;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar5) * 4) = *param_2;
  }
LAB_14163d26c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 14163d2a0 FUN_14163d2a0 body=766 status=ok
// SIG undefined FUN_14163d2a0(void)

int * FUN_14163d2a0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

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
  longlong *_Src;
  int iVar13;
  bool local_res8;
  
  iVar6 = 1;
  iVar13 = -1;
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
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    lVar2 = *_Src;
    iVar9 = iVar13;
    if (uVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)((longlong)iVar8 * 0x20 + *param_1) == lVar2) break;
          iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *param_1);
          iVar9 = iVar13;
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
        iVar13 = (int)param_1[6];
      }
      puVar7[1] = iVar13;
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
      goto LAB_14163d575;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar13;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar13;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
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
    TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14163d575:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14163d5a0 FUN_14163d5a0 body=756 status=ok
// SIG undefined FUN_14163d5a0(void)

uint * FUN_14163d5a0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined8 *_Src;
  int iVar10;
  uint uVar11;
  char cVar12;
  undefined4 uVar13;
  longlong *plVar14;
  bool bVar15;
  uint local_res8 [2];
  
  iVar10 = 1;
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)(int)uVar11 * 0x30);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x30) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = uVar11;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  puVar2 = (undefined1 *)param_3[1];
  _Src = (undefined8 *)((longlong)(int)uVar11 * 0x30 + *param_1);
  FString::FString(_Src,*param_3);
  *(undefined1 *)(_Src + 2) = *puVar2;
  _Src[3] = 0;
  _Src[3] = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined4 *)(_Src + 4) = *(undefined4 *)(puVar2 + 0x10);
  *(undefined4 *)((longlong)_Src + 0x24) = *(undefined4 *)(puVar2 + 0x14);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined4 *)(_Src + 5) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar11 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar15 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      plVar14 = (longlong *)(lVar9 * 0x30 + *param_1);
      if (plVar14[3] != 0) {
        FMemory::Free();
      }
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar14,_Src,0x28);
      uVar5 = *param_2;
      bVar3 = (byte)uVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = uVar5;
      }
      puVar6 = (undefined4 *)((longlong)(int)uVar5 * 0x30 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar5;
      plVar14 = (longlong *)param_1[4];
      *param_2 = uVar11;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar14 +
                       (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14163d86f;
    }
  }
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar11) {
    uVar5 = (uVar11 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar5 = (uVar11 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar11 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar5 = FUN_140438070(puVar8);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)_Src + 0x2c) = uVar5;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 5) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(uint *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14163d86f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 14163d8a0 FUN_14163d8a0 body=720 status=ok
// SIG undefined FUN_14163d8a0(void)

uint * FUN_14163d8a0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  void *_Dst;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  char cVar12;
  undefined4 uVar13;
  bool bVar14;
  uint local_res8 [2];
  
  iVar11 = 1;
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar9 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar9 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar9 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)(int)uVar9 * 0x28);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x28) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar9;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  puVar2 = (undefined8 *)param_3[1];
  _Src = (undefined8 *)(*param_1 + (longlong)(int)uVar9 * 0x28);
  FString::FString(_Src,*param_3);
  _Src[2] = 0;
  _Src[2] = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(_Src + 3) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)_Src + 0x1c) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar9 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _Dst = (void *)(*param_1 + lVar10 * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      uVar5 = *param_2;
      bVar3 = (byte)uVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = uVar5;
      }
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + (longlong)(int)uVar5 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar10 + 4 + (longlong)(int)uVar5 * 0x28) = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar5;
      plVar6 = (longlong *)param_1[4];
      *param_2 = uVar9;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14163db4c;
    }
  }
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar9) {
    uVar5 = (uVar9 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar11;
    }
    uVar5 = (uVar9 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar9 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar5 = FUN_140438070(puVar8);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)_Src + 0x24) = uVar5;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         uVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14163db4c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 14163db70 FUN_14163db70 body=867 status=ok
// SIG undefined FUN_14163db70(void)

int * FUN_14163db70(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined8 *_Src;
  uint uVar13;
  char cVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  bool local_res8;
  
  iVar8 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar5 = *(int *)((longlong)iVar12 * 0x88 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x88 + *param_1) = 0xffffffff;
    }
  }
  plVar17 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar17 == (longlong *)0x0) {
    plVar17 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar17 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  uVar2 = param_3[1];
  _Src = (undefined8 *)((longlong)iVar12 * 0x88 + *param_1);
  FString::FString(_Src,*param_3);
  FUN_14163f470(_Src + 2,uVar2);
  *(undefined4 *)(_Src + 0x10) = 0xffffffff;
  puVar18 = &DAT_143f3eda8;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar12 = iVar15;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      if (*(int *)(_Src + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*_Src;
      }
      iVar4 = FUN_140438070(puVar11);
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar4) * 4);
      if (iVar4 != -1) {
        lVar9 = *param_1;
        do {
          lVar16 = (longlong)iVar4 * 0x88;
          if (*(int *)(_Src + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*_Src;
          }
          if (*(int *)(lVar16 + 8 + lVar9) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = *(undefined2 **)(lVar16 + lVar9);
          }
          iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
          iVar12 = iVar4;
          if (iVar5 == 0) break;
          lVar9 = *param_1;
          iVar4 = *(int *)(lVar9 + 0x80 + lVar16);
          iVar12 = iVar15;
        } while (iVar4 != -1);
      }
    }
    local_res8 = iVar12 != -1;
    if (local_res8) {
      plVar17 = (longlong *)((longlong)iVar12 * 0x88 + *param_1);
      FUN_140640190(plVar17 + 2);
      if (*plVar17 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar17,_Src,0x80);
      iVar8 = *param_2;
      bVar3 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x88 + *param_1) = iVar8;
      }
      puVar7 = (undefined4 *)((longlong)iVar8 * 0x88 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      puVar7[1] = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar17 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar17 == (longlong *)0x0) {
        plVar17 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar17 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14163deaa;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar6 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar14 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar15;
    }
    uVar6 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar14 = '\x1f' - (char)iVar15;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    iVar15 = *param_2;
    if (*(int *)(_Src + 1) != 0) {
      puVar18 = (undefined2 *)*_Src;
    }
    uVar13 = FUN_140438070(puVar18);
    uVar13 = (int)param_1[9] - 1U & uVar13;
    *(uint *)((longlong)_Src + 0x84) = uVar13;
    plVar17 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar17 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x10) =
         *(undefined4 *)
          ((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar17 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar17 = param_1 + 7;
    }
    *(int *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    FUN_1416573c0(param_1);
  }
LAB_14163deaa:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14163dee0 Emplace<TPairInitializer<FString_const_&,FConfigFile_&&>_> body=402 status=ok
// SIG undefined Emplace<TPairInitializer<FString_const_&,FConfigFile_&&>_>(void)

int * TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FConfigFile_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FString,FConfigFile>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  *param_2 = local_38[0];
  FString::FString(local_30,uVar2);
  FConfigFile::FConfigFile(local_30 + 2,uVar3);
  *(undefined4 *)(local_30 + 0x25) = 0xffffffff;
  bVar8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FindId(param_1,local_res8);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      plVar7 = (longlong *)((longlong)local_res8[0] * 0x130 + *param_1);
      FConfigFile::~FConfigFile(plVar7 + 2);
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar7,local_30,0x128);
      TSparseArray<TSetElement<TTuple<FString,FConfigFile>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14163e04d;
    }
  }
  cVar4 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar4 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*local_30;
    }
    uVar5 = FUN_140438070(puVar6);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)local_30 + 300) = uVar5;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 0x25) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar1
    ;
  }
LAB_14163e04d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 14163e080 Emplace<TPairInitializer<FString_const_&,FConfigSection_&&>_> body=402 status=ok
// SIG undefined Emplace<TPairInitializer<FString_const_&,FConfigSection_&&>_>(void)

int * TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FConfigSection_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  *param_2 = local_38[0];
  FString::FString(local_30,uVar2);
  FUN_14163fae0(local_30 + 2,uVar3);
  *(undefined4 *)(local_30 + 0x16) = 0xffffffff;
  bVar8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FindId(param_1,local_res8);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      plVar7 = (longlong *)((longlong)local_res8[0] * 0xb8 + *param_1);
      FConfigSection::~FConfigSection(plVar7 + 2);
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar7,local_30,0xb0);
      TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14163e1ed;
    }
  }
  cVar4 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar4 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*local_30;
    }
    uVar5 = FUN_140438070(puVar6);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)local_30 + 0xb4) = uVar5;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 0x16) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar1
    ;
  }
LAB_14163e1ed:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 14163e220 EmplaceUnique<FName_const_&,FConfigValue> body=388 status=ok
// SIG undefined EmplaceUnique<FName_const_&,FConfigValue>(void)

void TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
     ::EmplaceUnique<FName_const_&,FConfigValue>
               (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  short *psVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int local_20;
  
  lVar3 = *param_2;
  TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] != 0) {
    local_20 = (int)lVar3;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    ((longlong)((int)((ulonglong)lVar3 >> 0x20) + local_20) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    iVar7 = iVar5;
    if (iVar5 != -1) {
      do {
        iVar5 = *(int *)(*param_1 + 0x28 + (longlong)iVar7 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x30) == lVar3) break;
        iVar7 = iVar5;
      } while (iVar5 != -1);
    }
    if (iVar7 != -1) {
      lVar4 = *param_1;
      do {
        if (*(int *)(param_3 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar4 + 0x10 + (longlong)iVar7 * 0x30) == 0) {
          psVar8 = &DAT_143f3eda8;
        }
        else {
          psVar8 = *(short **)(lVar4 + 8 + (longlong)iVar7 * 0x30);
        }
        lVar10 = (longlong)puVar9 - (longlong)psVar8;
        do {
          sVar1 = *psVar8;
          sVar2 = *(short *)((longlong)psVar8 + lVar10);
          if (sVar1 != sVar2) break;
          psVar8 = psVar8 + 1;
        } while (sVar2 != 0);
        if (sVar1 == sVar2) {
          if (lVar4 + 8 + (longlong)iVar7 * 0x30 != 0) {
            return;
          }
          break;
        }
        iVar7 = iVar5;
        if (iVar5 == -1) break;
        do {
          iVar5 = *(int *)(lVar4 + 0x28 + (longlong)iVar7 * 0x30);
          if (*(longlong *)(lVar4 + (longlong)iVar7 * 0x30) == lVar3) break;
          iVar7 = iVar5;
        } while (iVar5 != -1);
      } while (iVar7 != -1);
    }
  }
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  ::Emplace<FName_const_&,FConfigValue>(param_1,param_2,param_3);
  return;
}



// FUNCTION 14163e3b0 Encode<wchar_t> body=300 status=ok
// SIG undefined Encode<wchar_t>(void)

ulonglong FBase64::Encode<wchar_t>(byte *param_1,uint param_2,ushort *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  uint3 uVar5;
  byte bVar6;
  ulonglong uVar7;
  ushort uVar8;
  ushort *puVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)param_2;
  puVar9 = param_3;
  if (2 < param_2) {
    uVar7 = uVar10 / 3;
    do {
      pbVar1 = param_1 + 1;
      param_2 = (int)uVar10 - 3;
      uVar10 = (ulonglong)param_2;
      bVar3 = *param_1;
      pbVar2 = param_1 + 2;
      param_1 = param_1 + 3;
      uVar4 = CONCAT11(bVar3,*pbVar1);
      uVar5 = CONCAT21(uVar4,*pbVar2);
      puVar9[3] = (ushort)(byte)(&DAT_144cc7f80)[uVar5 & 0x3f];
      puVar9[2] = (ushort)(byte)(&DAT_144cc7f80)[uVar5 >> 6 & 0x3f];
      puVar9[1] = (ushort)(byte)(&DAT_144cc7f80)[uVar4 >> 4 & 0x3f];
      *puVar9 = (ushort)(byte)(&DAT_144cc7f80)[bVar3 >> 2];
      puVar9 = puVar9 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (param_2 != 0) {
    bVar3 = *param_1;
    bVar6 = 0;
    if (param_2 == 2) {
      bVar6 = param_1[1];
    }
    uVar8 = 0x3d;
    uVar4 = CONCAT11(bVar3,bVar6);
    puVar9[3] = 0x3d;
    if (param_2 != 1) {
      uVar8 = (ushort)(byte)(&DAT_144cc7f80)[(uVar4 & 0xf) << 2];
    }
    puVar9[2] = uVar8;
    puVar9[1] = (ushort)(byte)(&DAT_144cc7f80)[uVar4 >> 4 & 0x3f];
    *puVar9 = (ushort)(byte)(&DAT_144cc7f80)[bVar3 >> 2];
    puVar9 = puVar9 + 4;
  }
  *puVar9 = 0;
  return (longlong)puVar9 - (longlong)param_3 >> 1 & 0xffffffff;
}



// FUNCTION 14163e4e0 GetKeys<FDefaultAllocator> body=659 status=ok
// SIG undefined GetKeys<FDefaultAllocator>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
TMapBase<enum_EConfigFileHierarchy,FIniFilename,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>_>
::GetKeys<FDefaultAllocator>(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
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
  uVar10 = 0;
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
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puStack_a8;
    }
    uVar2 = *puVar11;
    uVar9 = uVar10;
    uVar13 = uVar10;
    while (uVar2 == 0) {
      iVar7 = (int)uVar9;
      uStack_d0 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)uStack_d0;
      local_e8._0_4_ = iVar7 + 1;
      uVar9 = (ulonglong)(uint)local_e8;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14163e5f0;
      uVar2 = puVar11[(longlong)iVar7 + 1];
    }
    local_e8._4_4_ = -uVar2 & uVar2;
    iVar7 = 0x1f;
    if (local_e8._4_4_ != 0) {
      for (; local_e8._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (local_e8._4_4_ == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_d8._4_4_ = (uStack_d0 - iVar7) + 0x1f;
    if (iVar3 < local_d8._4_4_) {
LAB_14163e5f0:
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
  bVar5 = iVar3 <= local_d8._4_4_;
  uVar9 = uVar10;
  uVar13 = uVar10;
  local_e8 = param_1;
  local_b8 = param_1;
  local_d8 = puStack_a8;
  if (bVar5) {
LAB_14163e70e:
    lVar4 = param_2[1];
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
    return (int)lVar4;
  }
  do {
    plVar6 = local_e8;
    lVar12 = (longlong)iStack_cc * 0x38;
    lVar4 = *local_e8;
    bVar1 = *(byte *)(lVar4 + lVar12);
    if ((int)uVar9 != (int)uVar10) {
      puVar8 = local_50;
      if (local_48 != 0) {
        puVar8 = (undefined1 *)0x0;
      }
      for (iVar3 = *(int *)(((ulonglong)puVar8 | local_48) +
                           ((longlong)((int)uVar13 + -1) & (ulonglong)bVar1) * 4); iVar3 != -1;
          iVar3 = *(int *)(local_88 + 4 + (longlong)iVar3 * 0xc)) {
        if (*(byte *)(local_88 + (longlong)iVar3 * 0xc) == bVar1) {
          if (iVar3 != -1) goto LAB_14163e6d8;
          break;
        }
      }
    }
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    *(undefined1 *)((longlong)iVar3 + *param_2) = *(undefined1 *)(lVar12 + lVar4);
    FUN_14163cc40(&local_88,local_c0,*plVar6 + lVar12,0);
LAB_14163e6d8:
    uStack_d0 = uStack_d0 & ~uStack_dc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
    if ((int)local_d8[6] <= iStack_cc) goto LAB_14163e70e;
    uVar10 = (ulonglong)local_54;
    uVar9 = local_80 & 0xffffffff;
    uVar13 = (ulonglong)local_40;
  } while( true );
}



// FUNCTION 14163e780 HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<enum_EConfigFileHierarchy,FIniFilename>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<enum_EConfigFileHierarchy,FIniFilename,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>_>::FKeyComparisonClass<<lambda_2090079e0d841afcdfc17bc40d6e7785>_>_>_>_>_> body=552 status=ok
// SIG undefined HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<enum_EConfigFileHierarchy,FIniFilename>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<enum_EConfigFileHierarchy,FIniFilename,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>_>::FKeyComparisonClass<<lambda_2090079e0d841afcdfc17bc40d6e7785>_>_>_>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<enum_EConfigFileHierarchy,FIniFilename>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<enum_EConfigFileHierarchy,FIniFilename,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>_>::FKeyComparisonClass<<lambda_2090079e0d841afcdfc17bc40d6e7785>_>_>_>_>_>
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
  int iVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  byte *pbVar16;
  
  iVar9 = (param_2 + -2) / 2;
  if (-1 < iVar9) {
    iVar10 = iVar9 * 2 + 1;
    iVar11 = iVar10;
    iVar13 = iVar9;
joined_r0x00014163e7aa:
    do {
      if (iVar10 < param_2) {
        iVar10 = iVar9 * 2;
        iVar15 = iVar10 + 1;
        if (iVar10 + 2 < param_2) {
          if (*(byte *)(param_1 + ((longlong)iVar10 + 2) * 7) <
              *(byte *)(param_1 + (longlong)iVar15 * 7)) {
            iVar15 = iVar10;
          }
          iVar15 = iVar15 + 1;
        }
        pbVar12 = (byte *)(param_1 + (longlong)iVar15 * 7);
        pbVar16 = (byte *)(param_1 + (longlong)iVar9 * 7);
        if (*pbVar16 < *pbVar12) {
          if (pbVar16 != pbVar12) {
            uVar2 = *(undefined8 *)(pbVar12 + 8);
            uVar3 = *(undefined8 *)pbVar16;
            uVar4 = *(undefined8 *)(pbVar16 + 8);
            uVar5 = *(undefined8 *)(pbVar16 + 0x10);
            uVar6 = *(undefined8 *)(pbVar16 + 0x18);
            uVar7 = *(undefined8 *)(pbVar16 + 0x20);
            uVar8 = *(undefined8 *)(pbVar16 + 0x28);
            uVar1 = *(undefined8 *)(pbVar16 + 0x30);
            *(undefined8 *)pbVar16 = *(undefined8 *)pbVar12;
            *(undefined8 *)(pbVar16 + 8) = uVar2;
            uVar2 = *(undefined8 *)(pbVar12 + 0x18);
            *(undefined8 *)(pbVar16 + 0x10) = *(undefined8 *)(pbVar12 + 0x10);
            *(undefined8 *)(pbVar16 + 0x18) = uVar2;
            uVar2 = *(undefined8 *)(pbVar12 + 0x28);
            *(undefined8 *)(pbVar16 + 0x20) = *(undefined8 *)(pbVar12 + 0x20);
            *(undefined8 *)(pbVar16 + 0x28) = uVar2;
            *(undefined8 *)(pbVar16 + 0x30) = *(undefined8 *)(pbVar12 + 0x30);
            *(undefined8 *)pbVar12 = uVar3;
            *(undefined8 *)(pbVar12 + 8) = uVar4;
            *(undefined8 *)(pbVar12 + 0x10) = uVar5;
            *(undefined8 *)(pbVar12 + 0x18) = uVar6;
            *(undefined8 *)(pbVar12 + 0x20) = uVar7;
            *(undefined8 *)(pbVar12 + 0x28) = uVar8;
            *(undefined8 *)(pbVar12 + 0x30) = uVar1;
          }
          iVar10 = iVar15 * 2 + 1;
          iVar9 = iVar15;
          goto joined_r0x00014163e7aa;
        }
      }
      iVar10 = iVar11 + -2;
      iVar9 = iVar13 + -1;
      iVar11 = iVar10;
      iVar13 = iVar9;
    } while (-1 < iVar9);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar14 = param_1 + (longlong)param_2 * 7;
    do {
      if (param_1 != puVar14) {
        uVar2 = puVar14[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar1 = param_1[6];
        *param_1 = *puVar14;
        param_1[1] = uVar2;
        uVar2 = puVar14[3];
        param_1[2] = puVar14[2];
        param_1[3] = uVar2;
        uVar2 = puVar14[5];
        param_1[4] = puVar14[4];
        param_1[5] = uVar2;
        param_1[6] = puVar14[6];
        *puVar14 = uVar3;
        puVar14[1] = uVar4;
        puVar14[2] = uVar5;
        puVar14[3] = uVar6;
        puVar14[4] = uVar7;
        puVar14[5] = uVar8;
        puVar14[6] = uVar1;
      }
      iVar9 = 0;
      if (1 < param_2) {
        do {
          iVar10 = iVar9 * 2;
          iVar11 = iVar10 + 1;
          if (iVar10 + 2 < param_2) {
            if (*(byte *)(param_1 + ((longlong)iVar10 + 2) * 7) <
                *(byte *)(param_1 + (longlong)iVar11 * 7)) {
              iVar11 = iVar10;
            }
            iVar11 = iVar11 + 1;
          }
          pbVar12 = (byte *)(param_1 + (longlong)iVar11 * 7);
          pbVar16 = (byte *)(param_1 + (longlong)iVar9 * 7);
          if (*pbVar12 <= *pbVar16) break;
          if (pbVar16 != pbVar12) {
            uVar2 = *(undefined8 *)(pbVar12 + 8);
            uVar3 = *(undefined8 *)pbVar16;
            uVar4 = *(undefined8 *)(pbVar16 + 8);
            uVar5 = *(undefined8 *)(pbVar16 + 0x10);
            uVar6 = *(undefined8 *)(pbVar16 + 0x18);
            uVar7 = *(undefined8 *)(pbVar16 + 0x20);
            uVar8 = *(undefined8 *)(pbVar16 + 0x28);
            uVar1 = *(undefined8 *)(pbVar16 + 0x30);
            *(undefined8 *)pbVar16 = *(undefined8 *)pbVar12;
            *(undefined8 *)(pbVar16 + 8) = uVar2;
            uVar2 = *(undefined8 *)(pbVar12 + 0x18);
            *(undefined8 *)(pbVar16 + 0x10) = *(undefined8 *)(pbVar12 + 0x10);
            *(undefined8 *)(pbVar16 + 0x18) = uVar2;
            uVar2 = *(undefined8 *)(pbVar12 + 0x28);
            *(undefined8 *)(pbVar16 + 0x20) = *(undefined8 *)(pbVar12 + 0x20);
            *(undefined8 *)(pbVar16 + 0x28) = uVar2;
            *(undefined8 *)(pbVar16 + 0x30) = *(undefined8 *)(pbVar12 + 0x30);
            *(undefined8 *)pbVar12 = uVar3;
            *(undefined8 *)(pbVar12 + 8) = uVar4;
            *(undefined8 *)(pbVar12 + 0x10) = uVar5;
            *(undefined8 *)(pbVar12 + 0x18) = uVar6;
            *(undefined8 *)(pbVar12 + 0x20) = uVar7;
            *(undefined8 *)(pbVar12 + 0x28) = uVar8;
            *(undefined8 *)(pbVar12 + 0x30) = uVar1;
          }
          iVar9 = iVar11;
        } while (iVar11 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar14 = puVar14 + -7;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14163e9b0 HeapSortInternal<FConfigFileMemoryData,FIdentityFunctor,TDereferenceWrapper<FConfigFileMemoryData,`FConfigMemoryData::SortBySize'::`2'::FCompareFConfigFileMemoryData>_> body=551 status=ok
// SIG undefined HeapSortInternal<FConfigFileMemoryData,FIdentityFunctor,TDereferenceWrapper<FConfigFileMemoryData,`FConfigMemoryData::SortBySize'::`2'::FCompareFConfigFileMemoryData>_>(void)

void AlgoImpl::
     HeapSortInternal<FConfigFileMemoryData,FIdentityFunctor,TDereferenceWrapper<FConfigFileMemoryData,_FConfigMemoryData::SortBySize_::_2_::FCompareFConfigFileMemoryData>_>
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar1 = iVar8;
    iVar10 = iVar7;
joined_r0x00014163e9e6:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar9 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          bVar14 = (ulonglong)param_1[(longlong)iVar9 * 4 + 2] <
                   (ulonglong)param_1[((longlong)iVar8 + 2) * 4 + 2];
          if (param_1[(longlong)iVar9 * 4 + 2] == param_1[((longlong)iVar8 + 2) * 4 + 2]) {
            bVar14 = (ulonglong)param_1[(longlong)iVar9 * 4 + 3] <
                     (ulonglong)param_1[((longlong)iVar8 + 2) * 4 + 3];
          }
          if (bVar14) {
            iVar9 = iVar8;
          }
          iVar9 = iVar9 + 1;
        }
        puVar12 = param_1 + (longlong)iVar7 * 4;
        puVar11 = param_1 + (longlong)iVar9 * 4;
        bVar14 = (ulonglong)puVar11[2] < (ulonglong)puVar12[2];
        if (puVar11[2] == puVar12[2]) {
          bVar14 = (ulonglong)puVar11[3] < (ulonglong)puVar12[3];
        }
        if (bVar14) {
          if (puVar12 != puVar11) {
            uVar2 = puVar11[1];
            uVar3 = *puVar12;
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            *puVar12 = *puVar11;
            puVar12[1] = uVar2;
            uVar2 = puVar11[3];
            puVar12[2] = puVar11[2];
            puVar12[3] = uVar2;
            *puVar11 = uVar3;
            puVar11[1] = uVar4;
            puVar11[2] = uVar5;
            puVar11[3] = uVar6;
          }
          iVar8 = iVar9 * 2 + 1;
          iVar7 = iVar9;
          goto joined_r0x00014163e9e6;
        }
      }
      iVar8 = iVar1 + -2;
      iVar7 = iVar10 + -1;
      iVar1 = iVar8;
      iVar10 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar11) {
        uVar2 = puVar11[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        *param_1 = *puVar11;
        param_1[1] = uVar2;
        uVar2 = puVar11[3];
        param_1[2] = puVar11[2];
        param_1[3] = uVar2;
        *puVar11 = uVar3;
        puVar11[1] = uVar4;
        puVar11[2] = uVar5;
        puVar11[3] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar7 * 2;
          iVar8 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            bVar14 = (ulonglong)param_1[(longlong)iVar8 * 4 + 2] <
                     (ulonglong)param_1[((longlong)iVar1 + 2) * 4 + 2];
            if (param_1[(longlong)iVar8 * 4 + 2] == param_1[((longlong)iVar1 + 2) * 4 + 2]) {
              bVar14 = (ulonglong)param_1[(longlong)iVar8 * 4 + 3] <
                       (ulonglong)param_1[((longlong)iVar1 + 2) * 4 + 3];
            }
            if (bVar14) {
              iVar8 = iVar1;
            }
            iVar8 = iVar8 + 1;
          }
          puVar13 = param_1 + (longlong)iVar7 * 4;
          puVar12 = param_1 + (longlong)iVar8 * 4;
          bVar14 = (ulonglong)puVar12[2] < (ulonglong)puVar13[2];
          if (puVar12[2] == puVar13[2]) {
            bVar14 = (ulonglong)puVar12[3] < (ulonglong)puVar13[3];
          }
          if (!bVar14) break;
          if (puVar13 != puVar12) {
            uVar2 = puVar12[1];
            uVar3 = *puVar13;
            uVar4 = puVar13[1];
            uVar5 = puVar13[2];
            uVar6 = puVar13[3];
            *puVar13 = *puVar12;
            puVar13[1] = uVar2;
            uVar2 = puVar12[3];
            puVar13[2] = puVar12[2];
            puVar13[3] = uVar2;
            *puVar12 = uVar3;
            puVar12[1] = uVar4;
            puVar12[2] = uVar5;
            puVar12[3] = uVar6;
          }
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14163ebe0 IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<enum_EConfigFileHierarchy,FIniFilename>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<enum_EConfigFileHierarchy,FIniFilename,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>_>::FKeyComparisonClass<<lambda_2090079e0d841afcdfc17bc40d6e7785>_>_>_>_>_> body=964 status=ok
// SIG undefined IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<enum_EConfigFileHierarchy,FIniFilename>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<enum_EConfigFileHierarchy,FIniFilename,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>_>::FKeyComparisonClass<<lambda_2090079e0d841afcdfc17bc40d6e7785>_>_>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<enum_EConfigFileHierarchy,FIniFilename>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<enum_EConfigFileHierarchy,FIniFilename,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>_>::FKeyComparisonClass<<lambda_2090079e0d841afcdfc17bc40d6e7785>_>_>_>_>_>
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
  byte *pbVar13;
  longlong lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar19;
  longlong *plVar20;
  float fVar21;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  byte *pbVar18;
  
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
      pbVar13 = (byte *)*plVar20;
      pbVar15 = (byte *)plVar20[1];
      lVar1 = plVar20[2];
      local_348._0_4_ = (int)lVar1;
      lVar14 = ((longlong)pbVar15 - (longlong)pbVar13) / 0x38 + 1;
      pbVar19 = pbVar13;
      if ((int)local_348 != 0) {
LAB_14163ecd0:
        if (8 < lVar14) {
          pbVar13 = pbVar19 + (lVar14 / 2) * 0x38;
          if (pbVar13 != pbVar19) {
            uVar6 = *(undefined8 *)(pbVar19 + 8);
            uVar7 = *(undefined8 *)pbVar13;
            uVar8 = *(undefined8 *)(pbVar13 + 8);
            uVar9 = *(undefined8 *)(pbVar13 + 0x10);
            uVar10 = *(undefined8 *)(pbVar13 + 0x18);
            uVar11 = *(undefined8 *)(pbVar13 + 0x20);
            uVar12 = *(undefined8 *)(pbVar13 + 0x28);
            uVar2 = *(undefined8 *)(pbVar13 + 0x30);
            *(undefined8 *)pbVar13 = *(undefined8 *)pbVar19;
            *(undefined8 *)(pbVar13 + 8) = uVar6;
            uVar6 = *(undefined8 *)(pbVar19 + 0x18);
            *(undefined8 *)(pbVar13 + 0x10) = *(undefined8 *)(pbVar19 + 0x10);
            *(undefined8 *)(pbVar13 + 0x18) = uVar6;
            uVar3 = *(undefined4 *)(pbVar19 + 0x24);
            uVar4 = *(undefined4 *)(pbVar19 + 0x28);
            uVar5 = *(undefined4 *)(pbVar19 + 0x2c);
            *(undefined4 *)(pbVar13 + 0x20) = *(undefined4 *)(pbVar19 + 0x20);
            *(undefined4 *)(pbVar13 + 0x24) = uVar3;
            *(undefined4 *)(pbVar13 + 0x28) = uVar4;
            *(undefined4 *)(pbVar13 + 0x2c) = uVar5;
            *(undefined8 *)(pbVar13 + 0x30) = *(undefined8 *)(pbVar19 + 0x30);
            *(undefined8 *)pbVar19 = uVar7;
            *(undefined8 *)(pbVar19 + 8) = uVar8;
            *(undefined8 *)(pbVar19 + 0x10) = uVar9;
            *(undefined8 *)(pbVar19 + 0x18) = uVar10;
            *(undefined8 *)(pbVar19 + 0x20) = uVar11;
            *(undefined8 *)(pbVar19 + 0x28) = uVar12;
            *(undefined8 *)(pbVar19 + 0x30) = uVar2;
          }
          pbVar17 = pbVar15 + 0x38;
          pbVar13 = pbVar19;
LAB_14163ed40:
          pbVar16 = pbVar13;
          pbVar13 = pbVar16 + 0x38;
          if (pbVar13 <= pbVar15) goto code_r0x00014163ed49;
          goto LAB_14163ed52;
        }
        for (; pbVar17 = pbVar19, pbVar13 = pbVar19, pbVar19 < pbVar15; pbVar15 = pbVar15 + -0x38) {
          while (pbVar16 = pbVar17, pbVar13 = pbVar13 + 0x38, pbVar13 <= pbVar15) {
            pbVar17 = pbVar13;
            if (*pbVar13 <= *pbVar16) {
              pbVar17 = pbVar16;
            }
          }
          if (pbVar16 != pbVar15) {
            uVar6 = *(undefined8 *)(pbVar15 + 8);
            uVar7 = *(undefined8 *)pbVar16;
            uVar8 = *(undefined8 *)(pbVar16 + 8);
            uVar9 = *(undefined8 *)(pbVar16 + 0x10);
            uVar10 = *(undefined8 *)(pbVar16 + 0x18);
            uVar11 = *(undefined8 *)(pbVar16 + 0x20);
            uVar12 = *(undefined8 *)(pbVar16 + 0x28);
            uVar2 = *(undefined8 *)(pbVar16 + 0x30);
            *(undefined8 *)pbVar16 = *(undefined8 *)pbVar15;
            *(undefined8 *)(pbVar16 + 8) = uVar6;
            uVar6 = *(undefined8 *)(pbVar15 + 0x18);
            *(undefined8 *)(pbVar16 + 0x10) = *(undefined8 *)(pbVar15 + 0x10);
            *(undefined8 *)(pbVar16 + 0x18) = uVar6;
            uVar6 = *(undefined8 *)(pbVar15 + 0x28);
            *(undefined8 *)(pbVar16 + 0x20) = *(undefined8 *)(pbVar15 + 0x20);
            *(undefined8 *)(pbVar16 + 0x28) = uVar6;
            *(undefined8 *)(pbVar16 + 0x30) = *(undefined8 *)(pbVar15 + 0x30);
            *(undefined8 *)pbVar15 = uVar7;
            *(undefined8 *)(pbVar15 + 8) = uVar8;
            *(undefined8 *)(pbVar15 + 0x10) = uVar9;
            *(undefined8 *)(pbVar15 + 0x18) = uVar10;
            *(undefined8 *)(pbVar15 + 0x20) = uVar11;
            *(undefined8 *)(pbVar15 + 0x28) = uVar12;
            *(undefined8 *)(pbVar15 + 0x30) = uVar2;
          }
        }
        goto LAB_14163eecf;
      }
LAB_14163eec0:
      local_348 = lVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<enum_EConfigFileHierarchy,FIniFilename>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<enum_EConfigFileHierarchy,FIniFilename,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>_>::FKeyComparisonClass<<lambda_2090079e0d841afcdfc17bc40d6e7785>_>_>_>_>_>
                (pbVar13,lVar14,param_3,param_4);
LAB_14163eecf:
      plVar20 = plVar20 + -3;
    } while (&local_338 <= plVar20);
  }
  return;
code_r0x00014163ed49:
  if (*pbVar13 <= *pbVar19) goto LAB_14163ed40;
LAB_14163ed52:
  do {
    pbVar18 = pbVar17;
    pbVar17 = pbVar18 + -0x38;
    if (pbVar17 <= pbVar19) break;
  } while (*pbVar19 <= *pbVar17);
  if (pbVar13 <= pbVar17) {
    if (pbVar13 != pbVar17) {
      uVar6 = *(undefined8 *)(pbVar18 + -0x30);
      uVar7 = *(undefined8 *)pbVar13;
      uVar8 = *(undefined8 *)(pbVar16 + 0x40);
      uVar9 = *(undefined8 *)(pbVar16 + 0x48);
      uVar10 = *(undefined8 *)(pbVar16 + 0x50);
      uVar11 = *(undefined8 *)(pbVar16 + 0x58);
      uVar12 = *(undefined8 *)(pbVar16 + 0x60);
      uVar2 = *(undefined8 *)(pbVar16 + 0x68);
      *(undefined8 *)pbVar13 = *(undefined8 *)pbVar17;
      *(undefined8 *)(pbVar16 + 0x40) = uVar6;
      uVar6 = *(undefined8 *)(pbVar18 + -0x20);
      *(undefined8 *)(pbVar16 + 0x48) = *(undefined8 *)(pbVar18 + -0x28);
      *(undefined8 *)(pbVar16 + 0x50) = uVar6;
      uVar3 = *(undefined4 *)(pbVar18 + -0x14);
      uVar4 = *(undefined4 *)(pbVar18 + -0x10);
      uVar5 = *(undefined4 *)(pbVar18 + -0xc);
      *(undefined4 *)(pbVar16 + 0x58) = *(undefined4 *)(pbVar18 + -0x18);
      *(undefined4 *)(pbVar16 + 0x5c) = uVar3;
      *(undefined4 *)(pbVar16 + 0x60) = uVar4;
      *(undefined4 *)(pbVar16 + 100) = uVar5;
      *(undefined8 *)(pbVar16 + 0x68) = *(undefined8 *)(pbVar18 + -8);
      *(undefined8 *)pbVar17 = uVar7;
      *(undefined8 *)(pbVar18 + -0x30) = uVar8;
      *(undefined8 *)(pbVar18 + -0x28) = uVar9;
      *(undefined8 *)(pbVar18 + -0x20) = uVar10;
      *(undefined8 *)(pbVar18 + -0x18) = uVar11;
      *(undefined8 *)(pbVar18 + -0x10) = uVar12;
      *(undefined8 *)(pbVar18 + -8) = uVar2;
    }
    goto LAB_14163ed40;
  }
  if (pbVar19 != pbVar17) {
    uVar6 = *(undefined8 *)(pbVar18 + -0x30);
    uVar7 = *(undefined8 *)pbVar19;
    uVar8 = *(undefined8 *)(pbVar19 + 8);
    uVar9 = *(undefined8 *)(pbVar19 + 0x10);
    uVar10 = *(undefined8 *)(pbVar19 + 0x18);
    uVar11 = *(undefined8 *)(pbVar19 + 0x20);
    uVar12 = *(undefined8 *)(pbVar19 + 0x28);
    uVar2 = *(undefined8 *)(pbVar19 + 0x30);
    *(undefined8 *)pbVar19 = *(undefined8 *)pbVar17;
    *(undefined8 *)(pbVar19 + 8) = uVar6;
    uVar6 = *(undefined8 *)(pbVar18 + -0x20);
    *(undefined8 *)(pbVar19 + 0x10) = *(undefined8 *)(pbVar18 + -0x28);
    *(undefined8 *)(pbVar19 + 0x18) = uVar6;
    uVar3 = *(undefined4 *)(pbVar18 + -0x14);
    uVar4 = *(undefined4 *)(pbVar18 + -0x10);
    uVar5 = *(undefined4 *)(pbVar18 + -0xc);
    *(undefined4 *)(pbVar19 + 0x20) = *(undefined4 *)(pbVar18 + -0x18);
    *(undefined4 *)(pbVar19 + 0x24) = uVar3;
    *(undefined4 *)(pbVar19 + 0x28) = uVar4;
    *(undefined4 *)(pbVar19 + 0x2c) = uVar5;
    *(undefined8 *)(pbVar19 + 0x30) = *(undefined8 *)(pbVar18 + -8);
    *(undefined8 *)pbVar17 = uVar7;
    *(undefined8 *)(pbVar18 + -0x30) = uVar8;
    *(undefined8 *)(pbVar18 + -0x28) = uVar9;
    *(undefined8 *)(pbVar18 + -0x20) = uVar10;
    *(undefined8 *)(pbVar18 + -0x18) = uVar11;
    *(undefined8 *)(pbVar18 + -0x10) = uVar12;
    *(undefined8 *)(pbVar18 + -8) = uVar2;
  }
  local_348._0_4_ = (int)local_348 + -1;
  if ((longlong)(pbVar17 + (-0x38 - (longlong)pbVar19)) / 0x38 <
      ((longlong)pbVar15 - (longlong)pbVar13) / 0x38) {
    if (pbVar13 < pbVar15) {
      *plVar20 = (longlong)pbVar13;
      plVar20[1] = (longlong)pbVar15;
      *(int *)(plVar20 + 2) = (int)local_348;
      plVar20 = plVar20 + 3;
    }
    if (pbVar17 <= pbVar19 + 0x38) goto LAB_14163eecf;
    pbVar15 = pbVar18 + -0x70;
    pbVar13 = pbVar19;
  }
  else {
    if (pbVar19 + 0x38 < pbVar17) {
      *plVar20 = (longlong)pbVar19;
      plVar20[1] = (longlong)(pbVar18 + -0x70);
      *(int *)(plVar20 + 2) = (int)local_348;
      plVar20 = plVar20 + 3;
    }
    if (pbVar15 <= pbVar13) goto LAB_14163eecf;
  }
  lVar14 = ((longlong)pbVar15 - (longlong)pbVar13) / 0x38 + 1;
  pbVar19 = pbVar13;
  if ((int)local_348 == 0) goto LAB_14163eec0;
  goto LAB_14163ecd0;
}



// FUNCTION 14163efb0 IntroSortInternal<FConfigFileMemoryData,FIdentityFunctor,TDereferenceWrapper<FConfigFileMemoryData,`FConfigMemoryData::SortBySize'::`2'::FCompareFConfigFileMemoryData>_> body=773 status=ok
// SIG undefined IntroSortInternal<FConfigFileMemoryData,FIdentityFunctor,TDereferenceWrapper<FConfigFileMemoryData,`FConfigMemoryData::SortBySize'::`2'::FCompareFConfigFileMemoryData>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FConfigFileMemoryData,FIdentityFunctor,TDereferenceWrapper<FConfigFileMemoryData,_FConfigMemoryData::SortBySize_::_2_::FCompareFConfigFileMemoryData>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x20 + -0x20 + param_1;
    fVar23 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar23 = fVar23 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar23 = ::_guard_xfg_dispatch_icall_nop(fVar23);
    local_318 = (undefined4)(longlong)(fVar23 + fVar23);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar21 = &local_328;
    do {
      puVar19 = (undefined8 *)*plVar21;
      puVar20 = (undefined8 *)plVar21[1];
      lVar1 = plVar21[2];
      local_338._0_4_ = (int)lVar1;
      lVar14 = ((longlong)puVar20 - (longlong)puVar19 >> 5) + 1;
      puVar18 = puVar19;
      if ((int)local_338 != 0) {
LAB_14163f080:
        if (8 < lVar14) {
          puVar19 = puVar18 + (lVar14 / 2) * 4;
          if (puVar19 != puVar18) {
            uVar2 = *(undefined4 *)((longlong)puVar18 + 4);
            uVar3 = *(undefined4 *)(puVar18 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar18 + 0xc);
            uVar5 = *(undefined4 *)puVar19;
            uVar6 = *(undefined4 *)((longlong)puVar19 + 4);
            uVar7 = *(undefined4 *)(puVar19 + 1);
            uVar8 = *(undefined4 *)((longlong)puVar19 + 0xc);
            uVar10 = puVar19[2];
            uVar11 = puVar19[3];
            *(undefined4 *)puVar19 = *(undefined4 *)puVar18;
            *(undefined4 *)((longlong)puVar19 + 4) = uVar2;
            *(undefined4 *)(puVar19 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar19 + 0xc) = uVar4;
            uVar9 = puVar18[3];
            puVar19[2] = puVar18[2];
            puVar19[3] = uVar9;
            *(undefined4 *)puVar18 = uVar5;
            *(undefined4 *)((longlong)puVar18 + 4) = uVar6;
            *(undefined4 *)(puVar18 + 1) = uVar7;
            *(undefined4 *)((longlong)puVar18 + 0xc) = uVar8;
            puVar18[2] = uVar10;
            puVar18[3] = uVar11;
          }
          puVar16 = puVar20 + 4;
          puVar19 = puVar18;
LAB_14163f0d0:
          puVar15 = puVar19;
          puVar19 = puVar15 + 4;
          if (puVar19 <= puVar20) goto code_r0x00014163f0d9;
          goto LAB_14163f0f7;
        }
        for (; puVar16 = puVar18, puVar19 = puVar18, puVar18 < puVar20; puVar20 = puVar20 + -4) {
          while (puVar15 = puVar16, puVar19 = puVar19 + 4, puVar19 <= puVar20) {
            bVar22 = (ulonglong)puVar19[2] < (ulonglong)puVar15[2];
            if (puVar19[2] == puVar15[2]) {
              bVar22 = (ulonglong)puVar19[3] < (ulonglong)puVar15[3];
            }
            puVar16 = puVar19;
            if (!bVar22) {
              puVar16 = puVar15;
            }
          }
          if (puVar15 != puVar20) {
            uVar9 = puVar20[1];
            uVar10 = *puVar15;
            uVar11 = puVar15[1];
            uVar12 = puVar15[2];
            uVar13 = puVar15[3];
            *puVar15 = *puVar20;
            puVar15[1] = uVar9;
            uVar9 = puVar20[3];
            puVar15[2] = puVar20[2];
            puVar15[3] = uVar9;
            *puVar20 = uVar10;
            puVar20[1] = uVar11;
            puVar20[2] = uVar12;
            puVar20[3] = uVar13;
          }
        }
        goto LAB_14163f1fa;
      }
LAB_14163f1eb:
      local_338 = lVar1;
      HeapSortInternal<FConfigFileMemoryData,FIdentityFunctor,TDereferenceWrapper<FConfigFileMemoryData,_FConfigMemoryData::SortBySize_::_2_::FCompareFConfigFileMemoryData>_>
                (puVar19,lVar14,param_3,param_4);
LAB_14163f1fa:
      plVar21 = plVar21 + -3;
    } while (&local_328 <= plVar21);
  }
  return;
code_r0x00014163f0d9:
  bVar22 = (ulonglong)puVar15[6] < (ulonglong)puVar18[2];
  if (puVar15[6] == puVar18[2]) {
    bVar22 = (ulonglong)puVar15[7] < (ulonglong)puVar18[3];
  }
  if (!bVar22) goto LAB_14163f0d0;
LAB_14163f0f7:
  do {
    puVar17 = puVar16;
    puVar16 = puVar17 + -4;
    if (puVar16 <= puVar18) break;
    bVar22 = (ulonglong)puVar18[2] < (ulonglong)puVar17[-2];
    if (puVar18[2] == puVar17[-2]) {
      bVar22 = (ulonglong)puVar18[3] < (ulonglong)puVar17[-1];
    }
  } while (!bVar22);
  if (puVar19 <= puVar16) {
    if (puVar19 != puVar16) {
      uVar2 = *(undefined4 *)((longlong)puVar17 + -0x1c);
      uVar3 = *(undefined4 *)(puVar17 + -3);
      uVar4 = *(undefined4 *)((longlong)puVar17 + -0x14);
      uVar5 = *(undefined4 *)puVar19;
      uVar6 = *(undefined4 *)((longlong)puVar15 + 0x24);
      uVar7 = *(undefined4 *)(puVar15 + 5);
      uVar8 = *(undefined4 *)((longlong)puVar15 + 0x2c);
      uVar10 = puVar15[6];
      uVar11 = puVar15[7];
      *(undefined4 *)puVar19 = *(undefined4 *)puVar16;
      *(undefined4 *)((longlong)puVar15 + 0x24) = uVar2;
      *(undefined4 *)(puVar15 + 5) = uVar3;
      *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar4;
      uVar9 = puVar17[-1];
      puVar15[6] = puVar17[-2];
      puVar15[7] = uVar9;
      *(undefined4 *)puVar16 = uVar5;
      *(undefined4 *)((longlong)puVar17 + -0x1c) = uVar6;
      *(undefined4 *)(puVar17 + -3) = uVar7;
      *(undefined4 *)((longlong)puVar17 + -0x14) = uVar8;
      puVar17[-2] = uVar10;
      puVar17[-1] = uVar11;
    }
    goto LAB_14163f0d0;
  }
  if (puVar18 != puVar16) {
    uVar2 = *(undefined4 *)((longlong)puVar17 + -0x1c);
    uVar3 = *(undefined4 *)(puVar17 + -3);
    uVar4 = *(undefined4 *)((longlong)puVar17 + -0x14);
    uVar5 = *(undefined4 *)puVar18;
    uVar6 = *(undefined4 *)((longlong)puVar18 + 4);
    uVar7 = *(undefined4 *)(puVar18 + 1);
    uVar8 = *(undefined4 *)((longlong)puVar18 + 0xc);
    uVar10 = puVar18[2];
    uVar11 = puVar18[3];
    *(undefined4 *)puVar18 = *(undefined4 *)puVar16;
    *(undefined4 *)((longlong)puVar18 + 4) = uVar2;
    *(undefined4 *)(puVar18 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar18 + 0xc) = uVar4;
    uVar9 = puVar17[-1];
    puVar18[2] = puVar17[-2];
    puVar18[3] = uVar9;
    *(undefined4 *)puVar16 = uVar5;
    *(undefined4 *)((longlong)puVar17 + -0x1c) = uVar6;
    *(undefined4 *)(puVar17 + -3) = uVar7;
    *(undefined4 *)((longlong)puVar17 + -0x14) = uVar8;
    puVar17[-2] = uVar10;
    puVar17[-1] = uVar11;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar16 + (-0x20 - (longlong)puVar18) & 0xffffffffffffffe0U) <
      (longlong)((longlong)puVar20 - (longlong)puVar19 & 0xffffffffffffffe0U)) {
    if (puVar19 < puVar20) {
      *plVar21 = (longlong)puVar19;
      plVar21[1] = (longlong)puVar20;
      *(int *)(plVar21 + 2) = (int)local_338;
      plVar21 = plVar21 + 3;
    }
    if (puVar16 <= puVar18 + 4) goto LAB_14163f1fa;
    puVar20 = puVar17 + -8;
    puVar19 = puVar18;
  }
  else {
    if (puVar18 + 4 < puVar16) {
      *plVar21 = (longlong)puVar18;
      plVar21[1] = (longlong)(puVar17 + -8);
      *(int *)(plVar21 + 2) = (int)local_338;
      plVar21 = plVar21 + 3;
    }
    if (puVar20 <= puVar19) goto LAB_14163f1fa;
  }
  lVar14 = ((longlong)puVar20 - (longlong)puVar19 >> 5) + 1;
  puVar18 = puVar19;
  if ((int)local_338 == 0) goto LAB_14163f1eb;
  goto LAB_14163f080;
}



// FUNCTION 14163f2c0 MultiFind<FDefaultAllocator> body=431 status=ok
// SIG undefined MultiFind<FDefaultAllocator>(void)

void TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
     ::MultiFind<FDefaultAllocator>
               (longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  
  TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] != 0) {
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar9 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    iVar14 = iVar1;
    if (iVar1 != -1) {
      do {
        iVar1 = *(int *)(*param_1 + 0x28 + (longlong)iVar14 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar14 * 0x30) == param_2) break;
        iVar14 = iVar1;
      } while (iVar1 != -1);
    }
joined_r0x00014163f35e:
    if (iVar14 != -1) {
      iVar2 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_3,iVar2);
      }
      lVar13 = (longlong)iVar2 * 0x20 + *param_3;
      if (lVar13 != 0) {
        lVar15 = (longlong)iVar14 * 0x30 + *param_1;
        FString::FString(lVar13,lVar15 + 8);
        FString::FString(lVar13 + 0x10,lVar15 + 0x18);
      }
      if (iVar1 == -1) goto LAB_14163f3ff;
      iVar14 = iVar1;
      do {
        iVar1 = *(int *)(*param_1 + 0x28 + (longlong)iVar14 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar14 * 0x30) == param_2) break;
        iVar14 = iVar1;
      } while (iVar1 != -1);
      goto joined_r0x00014163f35e;
    }
  }
LAB_14163f3ff:
  if (param_4 != '\0') {
    iVar1 = (int)param_3[1];
    puVar3 = (undefined8 *)*param_3;
    if (0 < iVar1 / 2) {
      uVar12 = (ulonglong)(uint)(iVar1 / 2);
      puVar11 = puVar3;
      do {
        iVar1 = iVar1 + -1;
        puVar10 = puVar3 + (longlong)iVar1 * 4;
        if (puVar11 != puVar10) {
          uVar4 = puVar10[1];
          uVar5 = *puVar11;
          uVar6 = puVar11[1];
          uVar7 = puVar11[2];
          uVar8 = puVar11[3];
          *puVar11 = *puVar10;
          puVar11[1] = uVar4;
          uVar4 = puVar10[3];
          puVar11[2] = puVar10[2];
          puVar11[3] = uVar4;
          *puVar10 = uVar5;
          puVar10[1] = uVar6;
          puVar10[2] = uVar7;
          puVar10[3] = uVar8;
        }
        puVar11 = puVar11 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  return;
}



// FUNCTION 14163f470 FUN_14163f470 body=601 status=ok
// SIG undefined FUN_14163f470(void)

undefined1 * FUN_14163f470(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  puVar10 = *(undefined8 **)(param_2 + 8);
  iVar9 = *(int *)(param_2 + 0x10);
  *(int *)(param_1 + 0x10) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 8,iVar9,0);
    puVar7 = *(undefined8 **)(param_1 + 8);
    do {
      *puVar7 = 0;
      iVar1 = *(int *)(puVar10 + 1);
      pvVar2 = (void *)*puVar10;
      *(int *)(puVar7 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar7,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar7,pvVar2,(longlong)iVar1 * 2);
      }
      puVar7 = puVar7 + 2;
      puVar10 = puVar10 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar9 = *(int *)(param_2 + 0x28);
  lVar11 = *(longlong *)(param_2 + 0x20);
  *(int *)(param_1 + 0x28) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(param_1 + 0x20,iVar9,0);
    lVar11 = lVar11 + 0x18;
    puVar6 = *(undefined1 **)(param_1 + 0x20);
    do {
      *puVar6 = *(undefined1 *)(lVar11 + -0x18);
      FString::FString(puVar6 + 8,lVar11 + -0x10);
      FString::FString(puVar6 + 0x18,lVar11);
      uVar3 = *(undefined4 *)(lVar11 + 0x14);
      uVar4 = *(undefined4 *)(lVar11 + 0x18);
      uVar5 = *(undefined4 *)(lVar11 + 0x1c);
      *(undefined4 *)(puVar6 + 0x28) = *(undefined4 *)(lVar11 + 0x10);
      *(undefined4 *)(puVar6 + 0x2c) = uVar3;
      *(undefined4 *)(puVar6 + 0x30) = uVar4;
      *(undefined4 *)(puVar6 + 0x34) = uVar5;
      FString::FString(puVar6 + 0x38,lVar11 + 0x20);
      *(undefined4 *)(puVar6 + 0x48) = *(undefined4 *)(lVar11 + 0x30);
      puVar10 = (undefined8 *)(lVar11 + 0x38);
      lVar11 = lVar11 + 0x58;
      *(undefined8 *)(puVar6 + 0x50) = *puVar10;
      iVar9 = iVar9 + -1;
      puVar6 = puVar6 + 0x58;
    } while (iVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar9 = *(int *)(param_2 + 0x40);
  puVar10 = *(undefined8 **)(param_2 + 0x38);
  *(int *)(param_1 + 0x40) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x38,iVar9,0);
    puVar7 = *(undefined8 **)(param_1 + 0x38);
    do {
      *puVar7 = 0;
      iVar1 = *(int *)(puVar10 + 1);
      pvVar2 = (void *)*puVar10;
      *(int *)(puVar7 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar7,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar7,pvVar2,(longlong)iVar1 * 2);
      }
      puVar7 = puVar7 + 2;
      puVar10 = puVar10 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  FUN_141640100(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x60) = 0;
  iVar9 = *(int *)(param_2 + 0x68);
  lVar11 = *(longlong *)(param_2 + 0x60);
  *(int *)(param_1 + 0x68) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    return param_1;
  }
  TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(param_1 + 0x60,iVar9,0);
  lVar8 = *(longlong *)(param_1 + 0x60);
  lVar11 = lVar11 + 0x20;
  do {
    FUN_141640100(lVar8,lVar11 + -0x20);
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar11 + -8);
    FString::FString(lVar8 + 0x20,lVar11);
    FString::FString(lVar8 + 0x30,lVar11 + 0x10);
    lVar8 = lVar8 + 0x40;
    lVar11 = lVar11 + 0x40;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  return param_1;
}



// FUNCTION 14163f6d0 FAutomationTestFramework body=398 status=ok
// SIG undefined FAutomationTestFramework(void)

undefined8 * FAutomationTestFramework::FAutomationTestFramework(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 2;
  FFeedbackContext::FFeedbackContext(param_1 + 0x12);
  param_1[0x22] = 0;
  param_1[0x12] = &PTR__scalar_deleting_destructor__144cc8390;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  puVar1 = (undefined8 *)operator_new(0x18);
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1;
  }
  param_1[0x2f] = puVar2;
  param_1[0x2e] = puVar2;
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar3 = puVar2;
  }
  param_1[0x31] = puVar3;
  param_1[0x30] = puVar3;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0x1000000;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined2 *)(param_1 + 0x3b) = 0x100;
  return param_1;
}



// FUNCTION 14163f860 FBoolConfigValueHelper body=126 status=ok
// SIG undefined FBoolConfigValueHelper(void)

undefined1 *
FBoolConfigValueHelper::FBoolConfigValueHelper
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  undefined2 *local_18;
  undefined8 local_10;
  
  *param_1 = 0;
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  cVar1 = FConfigCacheIni::GetString(DAT_1468b6148,param_2,param_3,&local_18,param_4);
  if (cVar1 == '\0') {
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    puVar3 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar3 = local_18;
    }
    uVar2 = FToBoolHelper::FromCStringWide(puVar3);
    *param_1 = uVar2;
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free(local_18);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14163f8e0 FConfigFile body=230 status=ok
// SIG undefined FConfigFile(void)

undefined8 * FConfigFile::FConfigFile(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::operator=();
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x50);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)(param_2 + 0x51);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0xc,param_2 + 0x60);
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  FString::FString(param_1 + 0x17,param_2 + 0xb8);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x19,param_2 + 200);
  return param_1;
}



// FUNCTION 14163f9d0 FConfigFile body=262 status=ok
// SIG undefined FConfigFile(void)

undefined8 * FConfigFile::FConfigFile(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar1 = DAT_1464af2f8;
  if (DAT_1464af2f8 != DAT_1464af2f8 + (longlong)DAT_1464af300 * 2) {
    while (((int)plVar1[1] == 0 || (*plVar1 == 0))) {
      plVar1 = plVar1 + 2;
      if (plVar1 == DAT_1464af2f8 + (longlong)DAT_1464af300 * 2) {
        return param_1;
      }
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_1464af2f8,param_1);
  }
  return param_1;
}



// FUNCTION 14163fae0 FUN_14163fae0 body=176 status=ok
// SIG undefined FUN_14163fae0(void)

undefined8 * FUN_14163fae0(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  TSparseArray<TSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 7,(void *)(param_2 + 0x38),4);
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  TMap<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,0>_>
  ::
  TMap<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,0>_>
            (param_1 + 10,param_2 + 0x50);
  return param_1;
}



// FUNCTION 14163fb90 FConfigValue body=161 status=ok
// SIG undefined FConfigValue(void)

undefined8 * FConfigValue::FConfigValue(undefined8 *param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,param_2,(longlong)iVar2 * 2);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  cVar1 = ExpandValue(param_1,param_1 + 2);
  if ((cVar1 == '\0') && (*(undefined4 *)(param_1 + 3) = 0, *(int *)((longlong)param_1 + 0x1c) != 0)
     ) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
  }
  return param_1;
}



// FUNCTION 14163fc40 FConfigValue body=133 status=ok
// SIG undefined FConfigValue(void)

longlong * FConfigValue::FConfigValue(longlong *param_1,longlong *param_2)

{
  char cVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  cVar1 = ExpandValue(param_1,param_1 + 2);
  if ((cVar1 == '\0') && (*(undefined4 *)(param_1 + 3) = 0, *(int *)((longlong)param_1 + 0x1c) != 0)
     ) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14163fcd0 FDateTime body=513 status=ok
// SIG undefined FDateTime(void)

longlong *
FDateTime::FDateTime
          (longlong *param_1,uint param_2,int param_3,int param_4,uint param_5,uint param_6,
          uint param_7,uint param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 - 1;
  if (((uVar3 < 9999) && (param_3 - 1U < 0xc)) && (0 < param_4)) {
    iVar1 = DaysInMonth(param_2,param_3);
    if (((param_4 <= iVar1) && (param_5 < 0x18)) &&
       ((param_6 < 0x3c && ((param_7 < 0x3c && (param_8 < 1000)))))) goto LAB_14163fdd0;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0x19,L"Invalid Date values. Y:%d, M:%d, D:%d, H:%d, M:%d, S:%d, Ms:%d",
             param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FDebug::AssertFailed
            (&DAT_144cc2efa,"Unknown",0x19,
             L"Invalid Date values. Y:%d, M:%d, D:%d, H:%d, M:%d, S:%d, Ms:%d",param_2,param_3,
             param_4,param_5,param_6,param_7,param_8);
LAB_14163fdd0:
  iVar1 = 0;
  if (2 < param_3) {
    uVar2 = param_2 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    iVar1 = 0;
    if ((uVar2 == 0) &&
       ((param_2 != ((int)param_2 / 100) * 100 || (param_2 == ((int)param_2 / 400) * 400)))) {
      iVar1 = 1;
    }
  }
  *param_1 = (((((longlong)(int)param_5 +
                (longlong)
                (int)(((int)(uVar3 + ((int)uVar3 >> 0x1f & 3U)) >> 2) +
                      iVar1 + ((*(int *)(L"Config/CoalescedSourceConfigs/" +
                                        (longlong)param_3 * 2 + 0x1e) + (int)uVar3 / 400 +
                               uVar3 * 0x16d) - (int)uVar3 / 100) + param_4 + -1) * 0x18) * 0x3c +
               (longlong)(int)param_6) * 0x3c + (longlong)(int)param_7) * 1000 +
             (longlong)(int)param_8) * 10000;
  return param_1;
}



// FUNCTION 14163fee0 FFailOnUncompressErrors body=529 status=ok
// SIG undefined FFailOnUncompressErrors(void)

undefined1 *
`FCompression::UncompressMemory'::`17'::FFailOnUncompressErrors::FFailOnUncompressErrors
          (undefined1 *param_1)

{
  longlong ***ppplVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong ****pppplVar8;
  undefined2 *puVar9;
  longlong ****pppplVar10;
  longlong ****pppplVar11;
  int local_res8 [2];
  longlong ***local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  *param_1 = 1;
  uVar2 = DAT_1468b6148;
  pppplVar11 = (longlong ****)0x0;
  local_38 = (longlong ***)0x0;
  puVar9 = &DAT_143f3eda8;
  if (DAT_1468e2368 != 0) {
    puVar9 = DAT_1468e2360;
  }
  local_30 = 0;
  uVar6 = FRemoteConfig::Get();
  FRemoteConfig::FinishRead(uVar6,puVar9);
  plVar7 = (longlong *)FConfigCacheIni::Find(uVar2,&DAT_1468e2360,0);
  if (plVar7 != (longlong *)0x0) {
    local_28[0] = 0;
    local_28[1] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    lVar3 = local_28[0];
    FGenericPlatformString::Memcpy(local_28[0],L"Core.System",0x18);
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar7,local_res8,local_28);
    pppplVar8 = pppplVar11;
    if (local_res8[0] != -1) {
      pppplVar8 = (longlong ****)((longlong)local_res8[0] * 0xb8 + *plVar7);
    }
    pppplVar10 = pppplVar8 + 2;
    if (pppplVar8 == (longlong ****)0x0) {
      pppplVar10 = pppplVar11;
    }
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
    if (pppplVar10 != (longlong ****)0x0) {
      plVar7 = (longlong *)FName::FName(local_res8,L"FailOnUncompressErrors",1);
      ppplVar1 = (longlong ***)*plVar7;
      if (*(int *)(pppplVar10 + 1) != *(int *)((longlong)pppplVar10 + 0x34)) {
        pppplVar8 = (longlong ****)pppplVar10[8];
        if ((longlong ****)pppplVar10[8] == (longlong ****)0x0) {
          pppplVar8 = pppplVar10 + 7;
        }
        iVar5 = *(int *)((longlong)pppplVar8 +
                        ((longlong)((int)((ulonglong)ppplVar1 >> 0x20) + (int)ppplVar1) &
                        (longlong)*(int *)(pppplVar10 + 9) - 1U) * 4);
        if (iVar5 != -1) {
          do {
            pppplVar8 = (longlong ****)(*pppplVar10 + (longlong)iVar5 * 6);
            if (*pppplVar8 == ppplVar1) {
              if (iVar5 != -1) goto LAB_141640055;
              break;
            }
            iVar5 = *(int *)(pppplVar8 + 5);
          } while (iVar5 != -1);
        }
      }
      pppplVar8 = pppplVar11;
LAB_141640055:
      pppplVar10 = pppplVar8 + 1;
      if (pppplVar8 == (longlong ****)0x0) {
        pppplVar10 = pppplVar11;
      }
      if (pppplVar10 != (longlong ****)0x0) {
        iVar5 = *(int *)(pppplVar10 + 3) + -1;
        if (*(int *)(pppplVar10 + 3) == 0) {
          iVar5 = 0;
        }
        pppplVar8 = pppplVar10 + 2;
        if (iVar5 < 1) {
          pppplVar8 = pppplVar10;
        }
        pppplVar10 = (longlong ****)&DAT_143f3eda8;
        if (&local_38 != pppplVar8) {
          iVar5 = *(int *)(pppplVar8 + 1);
          ppplVar1 = *pppplVar8;
          local_30 = CONCAT44(local_30._4_4_,iVar5);
          if (iVar5 != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar5,0);
            pppplVar11 = (longlong ****)local_38;
            ::_guard_xfg_dispatch_icall_nop(local_38,ppplVar1,(longlong)iVar5 * 2);
            if ((int)local_30 != 0) {
              pppplVar10 = pppplVar11;
            }
          }
        }
        uVar4 = FToBoolHelper::FromCStringWide(pppplVar10);
        *param_1 = uVar4;
        if (pppplVar11 != (longlong ****)0x0) {
          FMemory::Free(pppplVar11);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 141640100 FUN_141640100 body=112 status=ok
// SIG undefined FUN_141640100(void)

undefined8 * FUN_141640100(undefined8 *param_1,undefined8 *param_2)

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
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar1 << 5);
  }
  return param_1;
}



// FUNCTION 141640170 FSelfRegisteringExec body=87 status=ok
// SIG undefined FSelfRegisteringExec(void)

undefined8 * FSelfRegisteringExec::FSelfRegisteringExec(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cc8338;
  plVar2 = (longlong *)FUN_14164c0c0();
  iVar1 = (int)plVar2[1];
  *(int *)(plVar2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
  }
  *(undefined8 **)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  return param_1;
}



// FUNCTION 1416401d0 FStaticSelfRegisteringExec body=117 status=ok
// SIG undefined FStaticSelfRegisteringExec(void)

undefined8 *
FStaticSelfRegisteringExec::FStaticSelfRegisteringExec(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cc8338;
  plVar2 = (longlong *)FUN_14164c0c0();
  iVar1 = (int)plVar2[1];
  *(int *)(plVar2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
  }
  *(undefined8 **)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  *param_1 = &PTR__scalar_deleting_destructor__144cc8348;
  param_1[1] = param_2;
  return param_1;
}



// FUNCTION 141640250 ~TArray<TFunction<void___cdecl(enum_ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>,TInlineAllocator<4,FDefaultAllocator>_> body=141 status=ok
// SIG undefined ~TArray<TFunction<void___cdecl(enum_ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>,TInlineAllocator<4,FDefaultAllocator>_>(void)

void TArray<TFunction<void___cdecl(enum_ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>,TInlineAllocator<4,FDefaultAllocator>_>
     ::
     ~TArray<TFunction<void___cdecl(enum_ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>,TInlineAllocator<4,FDefaultAllocator>_>
               (longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x140);
  iVar5 = *(int *)(param_1 + 0x150);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  if (iVar5 != 0) {
    plVar4 = (longlong *)(lVar3 + 0x30);
    do {
      if ((int)plVar4[2] != 0) {
        plVar1 = (longlong *)*plVar4;
        if ((longlong *)*plVar4 == (longlong *)0x0) {
          plVar1 = plVar4 + -4;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,0);
        }
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar2 = *(longlong *)(param_1 + 0x140);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416402e0 FUN_1416402e0 body=451 status=ok
// SIG undefined FUN_1416402e0(void)

void FUN_1416402e0(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
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
  local_58 = 0;
  uStack_54 = 1;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar7 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar7;
      if (bVar4) goto LAB_1416403a1;
      uVar3 = puVar8[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    if (iVar2 < iStack_44) {
LAB_1416403a1:
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
      plVar6 = (longlong *)((longlong)iStack_1c * 0x88 + *param_1);
      FUN_140640190(plVar6 + 2);
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo
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
    return;
  }
  return;
}



// FUNCTION 1416404b0 ~FConfigCacheIni body=114 status=ok
// SIG undefined ~FConfigCacheIni(void)

void FConfigCacheIni::~FConfigCacheIni(undefined8 *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cc8420;
  local_18 = 0;
  local_10 = 0;
  Flush(param_1,1,&local_18);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FConfigFile>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 1,0);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141640530 ~FConfigFile body=360 status=ok
// SIG undefined ~FConfigFile(void)

void FConfigFile::~FConfigFile(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = DAT_1464af310;
  do {
    if (plVar2 == DAT_1464af310 + (longlong)DAT_1464af318 * 2) {
LAB_14164058f:
      lVar1 = param_1[0x16];
      if (lVar1 != 0) {
        ~FConfigFile(lVar1);
        FMemory::operator_delete(lVar1,0x118);
        param_1[0x16] = 0;
      }
      *(undefined4 *)(param_1 + 0x22) = 0;
      if (param_1[0x21] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(param_1 + 0x19,0);
      if (param_1[0x1d] != 0) {
        FMemory::Free();
      }
      if (param_1[0x19] != 0) {
        FMemory::Free();
      }
      if (param_1[0x17] != 0) {
        FMemory::Free();
      }
      *(undefined4 *)(param_1 + 0x15) = 0;
      if (param_1[0x14] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<enum_EConfigFileHierarchy,FIniFilename>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(param_1 + 0xc,0);
      if (param_1[0x10] != 0) {
        FMemory::Free();
      }
      if (param_1[0xc] != 0) {
        FMemory::Free();
      }
      *(undefined4 *)(param_1 + 9) = 0;
      if (param_1[8] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(param_1,0);
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      if (*param_1 != 0) {
        FMemory::Free();
      }
      return;
    }
    if (((int)plVar2[1] != 0) && (*plVar2 != 0)) {
      if (DAT_1468c2185 == '\0') {
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_1464af310,param_1);
      }
      goto LAB_14164058f;
    }
    plVar2 = plVar2 + 2;
  } while( true );
}



// FUNCTION 1416406a0 ~FSelfRegisteringExec body=258 status=ok
// SIG undefined ~FSelfRegisteringExec(void)

void FSelfRegisteringExec::~FSelfRegisteringExec(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cc8338;
  plVar1 = (longlong *)FUN_14164c0c0();
  lVar2 = (longlong)(int)plVar1[1];
  if ((int)plVar1[1] != 0) {
    iVar7 = 0;
    bVar8 = *(undefined8 **)*plVar1 != param_1;
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar6 = iVar5 + 1;
      if (lVar4 < lVar2) {
        plVar3 = (longlong *)(*plVar1 + lVar4 * 8);
        do {
          if (bVar8 != ((undefined8 *)*plVar3 != param_1)) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          plVar3 = plVar3 + 1;
        } while (lVar4 < lVar2);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar5) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar7 * 8),(void *)(*plVar1 + (longlong)iVar5 * 8)
                     ,(longlong)(iVar6 - iVar5) << 3);
        }
        iVar7 = iVar7 + (iVar6 - iVar5);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar6;
    } while (lVar4 < lVar2);
    *(int *)(plVar1 + 1) = iVar7;
  }
  FExec::~FExec(param_1);
  return;
}



// FUNCTION 1416407b0 operator= body=479 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
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
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1416408ed;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_1416408ed:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        Emplace<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_const_&>
                  (param_1,local_res8,(longlong)iStack_3c * 0x68 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 141640990 operator= body=372 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_res8 [8];
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
  
  if (param_1 != param_2) {
    Empty(param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
    iVar1 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    uStack_40 = 0;
    local_48._4_4_ = 0;
    if (iVar1 != 0) {
      puVar6 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar6 = puStack_20;
      }
      uVar2 = *puVar6;
      local_58 = 0;
      uStack_40 = 0;
      while (uVar2 == 0) {
        lVar4 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar5 = local_58 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar5;
        if (bVar3) goto LAB_141640a6d;
        uVar2 = puVar6[lVar4 + 1];
      }
      uStack_54 = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
      if (iVar1 < local_48._4_4_) {
LAB_141640a6d:
        local_48._4_4_ = iVar1;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    uStack_c = iStack_3c;
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar5 = local_48._4_4_;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar3 = local_48._4_4_ < iVar1;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar5;
    if (bVar3) {
      do {
        Emplace<TTuple<FString,FConfigSection>_const_&>
                  (param_1,local_res8,(longlong)iStack_3c * 0xb8 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 141640b10 operator= body=383 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_res8 [8];
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
  
  if (param_1 != param_2) {
    Empty(param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
    iVar1 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    uStack_40 = 0;
    local_48._4_4_ = 0;
    if (iVar1 != 0) {
      puVar6 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar6 = puStack_20;
      }
      uVar2 = *puVar6;
      local_58 = 0;
      uStack_40 = 0;
      while (uVar2 == 0) {
        lVar4 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar5 = local_58 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar5;
        if (bVar3) goto LAB_141640bed;
        uVar2 = puVar6[lVar4 + 1];
      }
      uStack_54 = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
      if (iVar1 < local_48._4_4_) {
LAB_141640bed:
        local_48._4_4_ = iVar1;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    uStack_c = iStack_3c;
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar5 = local_48._4_4_;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar3 = local_48._4_4_ < iVar1;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar5;
    if (bVar3) {
      do {
        Emplace<TTuple<enum_EConfigFileHierarchy,FIniFilename>_const_&>
                  (param_1,local_res8,(longlong)iStack_3c * 0x38 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 141640c90 FUN_141640c90 body=404 status=ok
// SIG undefined FUN_141640c90(void)

undefined1 * FUN_141640c90(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong *plVar3;
  int iVar4;
  
  *param_1 = *param_2;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1 + 8,param_2 + 8);
  plVar1 = (longlong *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  if (plVar1 != (longlong *)(param_2 + 0x20)) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != 0) {
      plVar3 = (longlong *)(*plVar1 + 0x18);
      do {
        if (plVar3[4] != 0) {
          FMemory::Free();
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        if (plVar3[-2] != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 0xb;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    TArray<FAutomationExecutionEntry,FDefaultAllocator>::CopyToEmpty<FAutomationExecutionEntry>
              (plVar1,*(longlong *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28),
               *(undefined4 *)(param_1 + 0x2c),0);
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x38,param_2 + 0x38);
  puVar2 = (undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  if (puVar2 != (undefined8 *)(param_2 + 0x50)) {
    iVar4 = *(int *)(param_2 + 0x58);
    _Src = *(void **)(param_2 + 0x50);
    *(int *)(param_1 + 0x58) = iVar4;
    if ((iVar4 == 0) && (*(int *)(param_1 + 0x5c) == 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(puVar2,iVar4);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar4 << 5);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x60);
  if (plVar1 != (longlong *)(param_2 + 0x60)) {
    iVar4 = *(int *)(param_1 + 0x68);
    if (iVar4 != 0) {
      plVar3 = (longlong *)(*plVar1 + 0x20);
      do {
        if (plVar3[2] != 0) {
          FMemory::Free();
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        if (plVar3[-3] != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_14163c310(plVar1,*(longlong *)(param_2 + 0x60),*(undefined4 *)(param_2 + 0x68),
                  *(undefined4 *)(param_1 + 0x6c),0);
  }
  return param_1;
}



// FUNCTION 141640e30 operator= body=48 status=ok
// SIG undefined operator=(void)

longlong FConfigValue::operator=(longlong param_1,longlong param_2)

{
  FString::operator=();
  FString::operator=(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}



// FUNCTION 141640e60 operator<< body=152 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 *local_18;
  undefined1 **local_10;
  
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_14158ce90(local_20,param_2);
  if ((((*(byte *)(*(longlong *)(local_18 + 8) + 0x28) & 1) != 0) &&
      (cVar1 = FConfigValue::ExpandValue(param_2,param_2 + 0x10), cVar1 == '\0')) &&
     (*(undefined4 *)(param_2 + 0x18) = 0, *(int *)(param_2 + 0x1c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 0x10,0);
  }
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return param_1;
}



// FUNCTION 141640f00 FUN_141640f00 body=696 status=ok
// SIG undefined FUN_141640f00(void)

longlong * FUN_141640f00(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  iVar2 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar3 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar6 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar8 = (longlong)local_2c * 0x30 + *local_48;
        (**(code **)(*param_1 + 0x40))(param_1,lVar8);
        operator<<(param_1,lVar8 + 8);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar2 = 0;
  local_res8[0] = 0;
  if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  TSparseArray<TSetElement<TTuple<FName,FRetargetSourceCachedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar3 = (int)param_2[6];
        iVar4 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar5 = *(int *)(*param_2 + 4 + (longlong)iVar3 * 0x30);
        *(int *)(param_2 + 6) = iVar5;
        *(int *)((longlong)param_2 + 0x34) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar5 * 0x30) = 0xffffffff;
        }
      }
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      iVar5 = iVar3;
      if (iVar3 < 0) {
        iVar5 = iVar3 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
      puVar7 = (undefined8 *)((longlong)iVar3 * 0x30 + *param_2);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = 0xffffffff;
      (**(code **)(*param_1 + 0x40))(param_1);
      operator<<(param_1,puVar7 + 1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1416411c0 FUN_1416411c0 body=926 status=ok
// SIG undefined FUN_1416411c0(void)

longlong * FUN_1416411c0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int local_res8 [2];
  longlong *local_58;
  undefined1 local_50 [4];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0xb8,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xb8);
  iVar2 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar3 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar7 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar7;
      *plVar7 = *plVar7 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_58,param_2);
    if (local_3c < *(int *)(local_48 + 0x18)) {
      do {
        lVar9 = (longlong)local_3c * 0xb8 + *local_58;
        FUN_14158ce90(param_1,lVar9);
        FUN_141640f00(param_1,lVar9 + 0x10);
        if ((*(byte *)(param_1 + 5) & 1) != 0) {
          if (*(longlong *)(lVar9 + 0x50) != 0) {
            uVar6 = FMemory::Realloc(*(longlong *)(lVar9 + 0x50),0,0);
            *(undefined8 *)(lVar9 + 0x50) = uVar6;
          }
          *(undefined4 *)(lVar9 + 0x58) = 0;
          TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(lVar9 + 0x10,*(int *)(lVar9 + 0x18) - *(int *)(lVar9 + 0x44));
        }
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar2 = 0;
  local_res8[0] = 0;
  if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar7;
    *plVar7 = *plVar7 + 4;
  }
  TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar3);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar3 = (int)param_2[6];
        iVar4 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar5 = *(int *)((longlong)iVar3 * 0xb8 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar5;
        *(int *)((longlong)param_2 + 0x34) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)((longlong)iVar5 * 0xb8 + *param_2) = 0xffffffff;
        }
      }
      plVar7 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar7 = param_2 + 2;
      }
      iVar5 = iVar3;
      if (iVar3 < 0) {
        iVar5 = iVar3 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
      puVar8 = (undefined8 *)((longlong)iVar3 * 0xb8 + *param_2);
      *puVar8 = 0;
      puVar8[1] = 0;
      _guard_xfg_dispatch_icall_nop(puVar8 + 3,0,0x98);
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      *(undefined4 *)(puVar8 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar8 + 0x44) = 0;
      puVar8[10] = 0;
      *(undefined4 *)(puVar8 + 0xb) = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      *(undefined4 *)(puVar8 + 0x12) = 0xffffffff;
      *(undefined4 *)((longlong)puVar8 + 0x94) = 0;
      puVar8[0x14] = 0;
      *(undefined4 *)(puVar8 + 0x15) = 0;
      *(undefined4 *)(puVar8 + 0x16) = 0xffffffff;
      FUN_14158ce90(param_1,puVar8);
      FUN_141640f00(param_1,puVar8 + 2);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        if (puVar8[10] != 0) {
          uVar6 = FMemory::Realloc(puVar8[10],0,0);
          puVar8[10] = uVar6;
        }
        *(undefined4 *)(puVar8 + 0xb) = 0;
        TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
        ::ConditionalRehash(puVar8 + 2,*(int *)(puVar8 + 3) - *(int *)((longlong)puVar8 + 0x44),0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 141641560 operator() body=1607 status=ok
// SIG undefined operator()(void)

undefined4
<lambda_de5aa24d66864cd4f913a08678d87e54>::operator()(undefined8 param_1,undefined8 *param_2)

{
  short sVar1;
  short sVar2;
  undefined2 *puVar3;
  short *psVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  short *psVar8;
  undefined2 *local_28;
  undefined8 local_20;
  
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 == 3) {
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc8770,8);
    psVar8 = &DAT_143f3eda8;
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 1;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc8778,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 2;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc8780,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 3;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc8788,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 4;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc8790,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 5;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc8798,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 6;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc87a0,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 7;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc87a8,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 8;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc87b0,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 9;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc87b8,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 10;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc87c0,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 0xb;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc87c8,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) != 0) {
      psVar8 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar8;
    do {
      sVar1 = *psVar8;
      sVar2 = *(short *)((longlong)psVar8 + lVar6);
      if (sVar1 != sVar2) break;
      psVar8 = psVar8 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 0xc;
    }
  }
  return 0xffffffff;
}



// FUNCTION 141641bb0 operator() body=967 status=ok
// SIG undefined operator()(void)

undefined4
<lambda_55202312b28e07a00f1bcc96bad4f563>::operator()(undefined8 param_1,undefined8 *param_2)

{
  short sVar1;
  short sVar2;
  undefined2 *puVar3;
  short *psVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  short *psVar8;
  undefined2 *local_28;
  undefined8 local_20;
  
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0;
  }
  if (iVar5 == 3) {
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc86b0,8);
    psVar8 = &DAT_143f3eda8;
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 1;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc86b8,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 2;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc86c0,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 3;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc86c8,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 4;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc86d0,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 5;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc86d8,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 6;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_144cc86e0,8);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) != 0) {
      psVar8 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar8;
    do {
      sVar1 = *psVar8;
      sVar2 = *(short *)((longlong)psVar8 + lVar6);
      if (sVar1 != sVar2) break;
      psVar8 = psVar8 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 7;
    }
  }
  return 0xffffffff;
}



// FUNCTION 141641f80 operator() body=967 status=ok
// SIG undefined operator()(void)

undefined4
<lambda_dd46b0ac207b9c7cf3418b507ae92e20>::operator()(undefined8 param_1,undefined8 *param_2)

{
  short sVar1;
  short sVar2;
  undefined2 *puVar3;
  short *psVar4;
  uint uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  short *psVar8;
  undefined2 *local_28;
  undefined8 local_20;
  
  uVar5 = *(int *)(param_2 + 1) - 7;
  if (*(int *)(param_2 + 1) == 0) {
    uVar5 = 0xfffffffa;
  }
  if (uVar5 < 4) {
    local_20 = 7;
    local_28 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"Monday",0xe);
    psVar8 = &DAT_143f3eda8;
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 1;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"Tueday",0xe);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 2;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"Wednesday",0x14);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 3;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"Thursday",0x12);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 4;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"Friday",0xe);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 5;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"Saturday",0x12);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 6;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"Sunday",0xe);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar7 = puVar3;
    }
    if (*(int *)(param_2 + 1) != 0) {
      psVar8 = (short *)*param_2;
    }
    lVar6 = (longlong)puVar7 - (longlong)psVar8;
    do {
      sVar1 = *psVar8;
      sVar2 = *(short *)((longlong)psVar8 + lVar6);
      if (sVar1 != sVar2) break;
      psVar8 = psVar8 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      return 7;
    }
  }
  return 0xffffffff;
}



// FUNCTION 141642350 FUN_141642350 body=115 status=ok
// SIG undefined FUN_141642350(void)

undefined8 * FUN_141642350(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x180);
  if (puVar2 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar2 + 2,0,0x170);
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_1440104d0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(puVar2 + 2) = DVar1;
    *puVar2 = &PTR__scalar_deleting_destructor__144cc8358;
    puVar2[0x2c] = 0;
    puVar2[0x2e] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1416423d0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAutomationTestFramework::FAutomationTestFeedbackContext::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  param_1[0x10] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144cc8390;
  FUN_141661910();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 141642420 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FConfigCacheIni::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FConfigCacheIni();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141642460 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneAtomSectionTemplate::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<TFunction<void___cdecl(enum_ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>,TInlineAllocator<4,FDefaultAllocator>_>
  ::
  ~TArray<TFunction<void___cdecl(enum_ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>,TInlineAllocator<4,FDefaultAllocator>_>
            (param_1 + 4);
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 1416424b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FSelfRegisteringExec::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FSelfRegisteringExec();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1416424f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FStaticSelfRegisteringExec::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FSelfRegisteringExec::~FSelfRegisteringExec();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141642530 AddAnalyticsItem body=80 status=ok
// SIG undefined AddAnalyticsItem(void)

void FAutomationTestBase::AddAnalyticsItem(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x28),iVar1);
  }
  FString::FString((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28),param_2);
  return;
}



// FUNCTION 141642580 AddError body=174 status=ok
// SIG undefined AddError(void)

void FAutomationTestBase::AddError(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  longlong local_40 [2];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 10) == '\0') {
    cVar1 = FUN_1416513e0();
    if (cVar1 == '\0') {
      plVar2 = (longlong *)FString::FString(local_58,param_2);
      local_48[0] = 2;
      FString::FString(local_40,plVar2);
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      FUN_141642660(param_1 + 0x20,local_48,param_3 + 1);
      if (local_30 != 0) {
        FMemory::Free();
      }
      if (local_40[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 141642660 FUN_141642660 body=861 status=ok
// SIG undefined FUN_141642660(void)

void FUN_141642660(longlong param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong local_c8;
  ulonglong local_c0;
  char local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  char local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  int local_20;
  
  if (*param_2 == '\x01') {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  else if (*param_2 == '\x02') {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  iVar7 = 0;
  lVar2 = FUN_141649d10();
  if (*(char *)(lVar2 + 0x1d9) == '\0') {
    local_60 = *param_2;
    FString::FString(local_58,param_2 + 8);
    FString::FString(local_48,param_2 + 0x18);
    local_38 = *(undefined4 *)(param_2 + 0x28);
    uStack_34 = *(undefined4 *)(param_2 + 0x2c);
    uStack_30 = *(undefined4 *)(param_2 + 0x30);
    uStack_2c = *(undefined4 *)(param_2 + 0x34);
    local_b8 = local_60;
    FString::FString(&local_b0,local_58);
    FString::FString(&local_a0,local_48);
    local_80 = 0;
    local_78 = 0;
    local_90 = local_38;
    uStack_8c = uStack_34;
    uStack_88 = uStack_30;
    uStack_84 = uStack_2c;
    local_70 = 0xffffffff;
    FDateTime::UtcNow(&local_68);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    iVar7 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar7 + 1;
    if (*(int *)(param_1 + 0x2c) < iVar7 + 1) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar7);
    }
    pcVar4 = (char *)((longlong)iVar7 * 0x58 + *(longlong *)(param_1 + 0x20));
    *pcVar4 = local_b8;
    *(undefined8 *)(pcVar4 + 8) = local_b0;
    *(undefined4 *)(pcVar4 + 0x10) = local_a8;
    *(undefined4 *)(pcVar4 + 0x14) = local_a4;
    *(undefined8 *)(pcVar4 + 0x18) = local_a0;
    *(undefined4 *)(pcVar4 + 0x20) = local_98;
    *(undefined4 *)(pcVar4 + 0x24) = local_94;
    *(undefined4 *)(pcVar4 + 0x28) = local_90;
    *(undefined4 *)(pcVar4 + 0x2c) = uStack_8c;
    *(undefined4 *)(pcVar4 + 0x30) = uStack_88;
    *(undefined4 *)(pcVar4 + 0x34) = uStack_84;
    *(undefined8 *)(pcVar4 + 0x38) = local_80;
    *(undefined4 *)(pcVar4 + 0x40) = (undefined4)local_78;
    *(undefined4 *)(pcVar4 + 0x44) = local_78._4_4_;
    *(undefined4 *)(pcVar4 + 0x48) = local_70;
    *(undefined8 *)(pcVar4 + 0x50) = local_68;
  }
  else {
    FWindowsPlatformStackWalk::GetStack(&local_28,param_3 + 1,1,0);
    lVar2 = local_28;
    if (local_20 != 0) {
      local_c8 = 0;
      local_c0 = 0;
      pcVar4 = (char *)(local_28 + 0x800);
      if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (pcVar4[lVar6] != '\0');
        uVar5 = (int)lVar6 + 1;
        local_c0 = (ulonglong)uVar5;
        if (0 < (int)uVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
        }
        FGenericPlatformString::Convert<char,wchar_t>(local_c8,uVar5,pcVar4,uVar5,0x3f);
      }
      local_60 = *param_2;
      FString::FString(local_58,param_2 + 8);
      FString::FString(local_48,param_2 + 0x18);
      local_38 = *(undefined4 *)(param_2 + 0x28);
      uStack_34 = *(undefined4 *)(param_2 + 0x2c);
      uStack_30 = *(undefined4 *)(param_2 + 0x30);
      uStack_2c = *(undefined4 *)(param_2 + 0x34);
      uVar1 = *(undefined4 *)(lVar2 + 0xc00);
      local_b8 = local_60;
      FString::FString(&local_b0,local_58);
      FString::FString(&local_a0,local_48);
      local_90 = local_38;
      uStack_8c = uStack_34;
      uStack_88 = uStack_30;
      uStack_84 = uStack_2c;
      FString::FString(&local_80,&local_c8);
      local_70 = uVar1;
      FDateTime::UtcNow(&local_68);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_c8 != 0) {
        FMemory::Free();
      }
      iVar7 = *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x28) = iVar7 + 1;
      if (*(int *)(param_1 + 0x2c) < iVar7 + 1) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar7);
      }
      pcVar4 = (char *)((longlong)iVar7 * 0x58 + *(longlong *)(param_1 + 0x20));
      *pcVar4 = local_b8;
      *(undefined8 *)(pcVar4 + 8) = local_b0;
      *(undefined4 *)(pcVar4 + 0x10) = local_a8;
      *(undefined4 *)(pcVar4 + 0x14) = local_a4;
      *(undefined8 *)(pcVar4 + 0x18) = local_a0;
      *(undefined4 *)(pcVar4 + 0x20) = local_98;
      *(undefined4 *)(pcVar4 + 0x24) = local_94;
      *(undefined4 *)(pcVar4 + 0x28) = local_90;
      *(undefined4 *)(pcVar4 + 0x2c) = uStack_8c;
      *(undefined4 *)(pcVar4 + 0x30) = uStack_88;
      *(undefined4 *)(pcVar4 + 0x34) = uStack_84;
      *(undefined8 *)(pcVar4 + 0x38) = local_80;
      *(undefined4 *)(pcVar4 + 0x40) = (undefined4)local_78;
      *(undefined4 *)(pcVar4 + 0x44) = local_78._4_4_;
      *(undefined4 *)(pcVar4 + 0x48) = local_70;
      *(undefined8 *)(pcVar4 + 0x50) = local_68;
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  lVar2 = (longlong)iVar7 * 0x58 + *(longlong *)(param_1 + 0x20);
  if (*(int *)(lVar2 + 0x20) < 2) {
    uVar3 = FUN_14164aac0(param_1);
    FString::operator=(lVar2 + 0x18,uVar3);
  }
  return;
}



// FUNCTION 1416429c0 AddInfo body=170 status=ok
// SIG undefined AddInfo(void)

void FAutomationTestBase::AddInfo(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  longlong local_40 [2];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 10) == '\0') {
    plVar1 = (longlong *)FString::FString(local_58);
    local_48[0] = 0;
    FString::FString(local_40,plVar1);
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FUN_141642660(param_1 + 0x20,local_48,param_3 + 1);
    if (local_30 != 0) {
      FMemory::Free();
    }
    if (local_40[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141642a70 AddMissingProperties body=1278 status=ok
// SIG undefined AddMissingProperties(void)

void FConfigFile::AddMissingProperties(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  undefined8 local_f8;
  uint *puStack_f0;
  undefined4 local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *puStack_b8;
  uint uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  longlong *local_a0;
  undefined8 uStack_98;
  uint *local_90;
  uint uStack_88;
  int iStack_84;
  int local_80;
  longlong local_78;
  longlong *local_70;
  longlong *plStack_68;
  uint *puStack_60;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  iVar13 = (int)param_2[5];
  puStack_f0 = (uint *)(param_2 + 2);
  local_f8 = (longlong *)0x100000000;
  iStack_e4 = 0;
  iStack_e0 = 0;
  if (iVar13 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puStack_f0;
    }
    uVar3 = *puVar9;
    iVar4 = 0;
    iStack_e0 = 0;
    while (uVar3 == 0) {
      iStack_e0 = iStack_e0 + 0x20;
      uVar14 = (ulonglong)local_f8 >> 0x20;
      local_f8 = (longlong *)CONCAT44((int)uVar14,iVar4 + 1);
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141642b46;
      uVar3 = puVar9[(longlong)iVar4 + 1];
      iVar4 = iVar4 + 1;
    }
    uVar3 = -uVar3 & uVar3;
    iVar4 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    local_f8 = (longlong *)CONCAT44(uVar3,SUB84(local_f8,0));
    if (uVar3 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    iStack_e4 = (iStack_e0 - iVar4) + 0x1f;
    if (iVar13 < iStack_e4) {
LAB_141642b46:
      iStack_e4 = iVar13;
    }
  }
  local_e8 = 0xffffffff;
  uStack_b0 = 0xffffffff;
  iStack_ac = iStack_e4;
  iStack_a8 = iStack_e0;
  iStack_a4 = iStack_dc;
  uStack_c0 = local_f8;
  uStack_98 = local_f8;
  local_80 = iStack_e0;
  uStack_88 = 0xffffffff;
  iStack_84 = iStack_e4;
  local_c8 = param_2;
  puStack_b8 = puStack_f0;
  local_a0 = param_2;
  local_90 = puStack_f0;
  if (iStack_e4 < iVar13) {
    do {
      lVar10 = (longlong)iStack_84 * 0xb8 + *local_a0;
      plVar1 = (longlong *)(lVar10 + 0x10);
      plVar6 = (longlong *)FindOrAddSection(param_1);
      iVar13 = *(int *)(lVar10 + 0x38);
      uStack_110 = (uint *)(lVar10 + 0x20);
      local_118 = (longlong *)0x100000000;
      iStack_104 = 0;
      iStack_100 = 0;
      if (iVar13 != 0) {
        puVar9 = *(uint **)(lVar10 + 0x30);
        if (*(uint **)(lVar10 + 0x30) == (uint *)0x0) {
          puVar9 = uStack_110;
        }
        uVar3 = *puVar9;
        iVar4 = 0;
        while (uVar3 == 0) {
          iStack_100 = iStack_100 + 0x20;
          uVar14 = (ulonglong)local_118 >> 0x20;
          local_118 = (longlong *)CONCAT44((int)uVar14,iVar4 + 1);
          if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141642c95;
          uVar3 = puVar9[(longlong)iVar4 + 1];
          iVar4 = iVar4 + 1;
        }
        uVar3 = -uVar3 & uVar3;
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        local_118 = (longlong *)CONCAT44(uVar3,SUB84(local_118,0));
        if (uVar3 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        iStack_104 = (iStack_100 - iVar4) + 0x1f;
        if (iVar13 < iStack_104) {
LAB_141642c95:
          iStack_104 = iVar13;
        }
      }
      local_108 = 0xffffffff;
      uStack_58 = 0xffffffff;
      iStack_54 = iStack_104;
      iStack_50 = iStack_100;
      iStack_4c = iStack_fc;
      plStack_68 = local_118;
      uStack_b0 = 0xffffffff;
      iStack_ac = iStack_104;
      uStack_c0 = local_118;
      iStack_a8 = iStack_100;
      iStack_a4 = iStack_fc;
      local_c8 = plVar1;
      puStack_b8 = uStack_110;
      local_70 = plVar1;
      puStack_60 = uStack_110;
      if (iStack_104 < iVar13) {
        do {
          local_78 = *(longlong *)(*local_c8 + (longlong)iStack_ac * 0x30);
          if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
            plVar7 = (longlong *)plVar6[8];
            if ((longlong *)plVar6[8] == (longlong *)0x0) {
              plVar7 = plVar6 + 7;
            }
            uVar3 = *(uint *)((longlong)plVar7 +
                             ((longlong)((int)((ulonglong)local_78 >> 0x20) + (int)local_78) &
                             (longlong)(int)plVar6[9] - 1U) * 4);
            if (uVar3 != 0xffffffff) {
              do {
                puVar9 = (uint *)(*plVar6 + (longlong)(int)uVar3 * 0x30);
                if (*(longlong *)puVar9 == local_78) {
                  if (uVar3 != 0xffffffff) goto LAB_141642d75;
                  break;
                }
                uVar3 = puVar9[10];
              } while (uVar3 != 0xffffffff);
            }
          }
          puVar9 = (uint *)0x0;
LAB_141642d75:
          puVar8 = puVar9 + 2;
          if (puVar9 == (uint *)0x0) {
            puVar8 = (uint *)0x0;
          }
          if (puVar8 == (uint *)0x0) {
            local_f8 = (longlong *)0x0;
            puStack_f0 = puVar8;
            TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
            ::MultiFind<FDefaultAllocator>(plVar1,local_78,&local_f8,1);
            puVar9 = puStack_f0;
            uVar14 = (ulonglong)(int)puStack_f0;
            plVar7 = local_f8 + uVar14 * 4;
            if (local_f8 != plVar7) {
              plVar11 = local_f8;
              do {
                iVar13 = (int)plVar11[1];
                _Src = (void *)*plVar11;
                local_d8 = (longlong *)0x0;
                plVar12 = (longlong *)0x0;
                uVar5 = 0;
                if (iVar13 != 0) {
                  local_d0._0_4_ = iVar13;
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,iVar13,0);
                  plVar12 = local_d8;
                  ::_guard_xfg_dispatch_icall_nop(local_d8,_Src,(longlong)iVar13 * 2);
                  iVar13 = (int)local_d0;
                  uVar5 = local_d0._4_4_;
                }
                local_d8 = (longlong *)0x0;
                uStack_110 = (uint *)CONCAT44(uVar5,iVar13);
                local_d0 = 0;
                local_108 = 0;
                iStack_104 = 0;
                iStack_100 = 0;
                iStack_fc = 0;
                local_118 = plVar12;
                cVar2 = FConfigValue::ExpandValue(&local_118,&local_108);
                if ((cVar2 == '\0') && (iStack_100 = 0, iStack_fc != 0)) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_108,0);
                }
                TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                ::Emplace<FName_const_&,FConfigValue>(plVar6,&local_78);
                if (CONCAT44(iStack_104,local_108) != 0) {
                  FMemory::Free();
                }
                if (local_118 != (longlong *)0x0) {
                  FMemory::Free();
                }
                plVar11 = plVar11 + 4;
                *(undefined1 *)(param_1 + 0x50) = 1;
              } while (plVar11 != plVar7);
              uVar14 = (ulonglong)puVar9 & 0xffffffff;
            }
            plVar11 = local_f8;
            uVar3 = (uint)uVar14;
            plVar7 = local_f8;
            while (uVar3 != 0) {
              if (plVar7[2] != 0) {
                FMemory::Free();
              }
              if (*plVar7 != 0) {
                FMemory::Free();
              }
              plVar7 = plVar7 + 4;
              uVar3 = (int)uVar14 - 1;
              uVar14 = (ulonglong)uVar3;
            }
            if (plVar11 != (longlong *)0x0) {
              FMemory::Free(plVar11);
            }
          }
          uStack_b0 = uStack_b0 & ~uStack_c0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
        } while (iStack_ac < (int)puStack_b8[6]);
      }
      uStack_88 = uStack_88 & ~uStack_98._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_98);
    } while (iStack_84 < (int)local_90[6]);
  }
  return;
}



// FUNCTION 141642f70 AddToSubprocessCommandline body=253 status=ok
// SIG undefined AddToSubprocessCommandline(void)

void FCommandLine::AddToSubprocessCommandline(short *param_1)

{
  undefined2 *puVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar2 = DAT_1464aeeb8;
  if (*param_1 != 0x20) {
    lVar4 = (longlong)DAT_1464aeeb8;
    DAT_1464aeeb8 = (2 - (uint)(DAT_1464aeeb8 != 0)) + DAT_1464aeeb8;
    if (DAT_1464aeebc < DAT_1464aeeb8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464aeeb0,iVar2);
    }
    puVar1 = (undefined2 *)(DAT_1464aeeb0 + (lVar4 - (ulonglong)(iVar2 != 0)) * 2);
    *puVar1 = 0x20;
    puVar1[1] = 0;
  }
  iVar2 = DAT_1464aeeb8;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (param_1[lVar4] != 0);
  iVar3 = (int)lVar4;
  if (iVar3 != 0) {
    lVar4 = (longlong)DAT_1464aeeb8;
    DAT_1464aeeb8 = (uint)(DAT_1464aeeb8 == 0) + DAT_1464aeeb8 + iVar3;
    if (DAT_1464aeebc < DAT_1464aeeb8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464aeeb0,iVar2);
    }
    _Dst = (void *)(DAT_1464aeeb0 + (lVar4 - (ulonglong)(iVar2 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_1,(longlong)iVar3 * 2);
    *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
  }
  return;
}



// FUNCTION 141643070 AddUninitialized body=219 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FString,FConfigFile>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<ATTLENBossSnak01Pawn::TTLENBossSnakJoint,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0x130 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x130 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x130 + *param_1;
  return param_2;
}



// FUNCTION 141643150 AddWarning body=174 status=ok
// SIG undefined AddWarning(void)

void FAutomationTestBase::AddWarning(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  longlong local_40 [2];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 10) == '\0') {
    cVar1 = FUN_1416513e0();
    if (cVar1 == '\0') {
      plVar2 = (longlong *)FString::FString(local_58,param_2);
      local_48[0] = 1;
      FString::FString(local_40,plVar2);
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      FUN_141642660(param_1 + 0x20,local_48,param_3 + 1);
      if (local_30 != 0) {
        FMemory::Free();
      }
      if (local_40[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 141643200 FUN_141643200 body=952 status=ok
// SIG undefined FUN_141643200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141643200(undefined8 param_1,short *param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  uint *puVar12;
  undefined8 local_98;
  uint *puStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined8 uStack_70;
  uint *local_68;
  uint uStack_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  longlong *local_50;
  undefined2 *puStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  DAT_1464af33c = DAT_1464af33c + 1;
  bVar2 = false;
  lVar10 = (longlong)(DAT_1464af330 + -1);
  if (-1 < DAT_1464af330 + -1) {
    lVar9 = lVar10 << 4;
    do {
      if (((*(int *)(lVar9 + 8 + DAT_1464af328) == 0) ||
          (plVar1 = *(longlong **)(lVar9 + DAT_1464af328), plVar1 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1,param_2,param_3,param_4),
         cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar9 = lVar9 + -0x10;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  iVar5 = DAT_1464af330;
  DAT_1464af33c = DAT_1464af33c + -1;
  if ((bVar2) && (DAT_1464af33c < 1)) {
    iVar7 = 0;
    if (0 < DAT_1464af330) {
      lVar10 = 0;
      do {
        if (((*(int *)(lVar10 + 8 + DAT_1464af328) == 0) ||
            (*(longlong **)(lVar10 + DAT_1464af328) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar10 + DAT_1464af328) + 0x10))(), cVar4 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af328,iVar7,1,1);
        }
        else {
          iVar7 = iVar7 + 1;
          lVar10 = lVar10 + 0x10;
        }
      } while (iVar7 < DAT_1464af330);
    }
    _DAT_1464af338 = DAT_1464af330 * 2;
    if (_DAT_1464af338 < 3) {
      _DAT_1464af338 = 2;
    }
    if ((_DAT_1464af338 < iVar5) && (DAT_1464af334 != DAT_1464af330)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af328);
    }
  }
  puStack_90 = (uint *)0x0;
  local_98 = (undefined2 *)0x0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (param_2[lVar10] != 0);
    uVar8 = (int)lVar10 + 1;
    puStack_90 = (uint *)(ulonglong)uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    }
    FGenericPlatformString::Memcpy(local_98,param_2,(longlong)(int)uVar8 * 2);
  }
  local_78 = (longlong *)FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,param_1,0,1,&local_98);
  if (local_98 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (longlong *)0x0) {
    iVar5 = (int)local_78[5];
    puStack_90 = (uint *)(local_78 + 2);
    local_98 = (undefined2 *)0x100000000;
    iStack_84 = 0;
    iStack_80 = 0;
    if (iVar5 != 0) {
      puVar12 = (uint *)local_78[4];
      if ((uint *)local_78[4] == (uint *)0x0) {
        puVar12 = puStack_90;
      }
      uVar8 = *puVar12;
      iVar7 = 0;
      iStack_80 = 0;
      while (uVar8 == 0) {
        iStack_80 = iStack_80 + 0x20;
        uVar3 = (ulonglong)local_98 >> 0x20;
        local_98 = (undefined2 *)CONCAT44((int)uVar3,iVar7 + 1);
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14164346f;
        uVar8 = puVar12[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar8 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      local_98 = (undefined2 *)CONCAT44(uVar8,SUB84(local_98,0));
      if (uVar8 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_84 = (iStack_80 - iVar7) + 0x1f;
      if (iVar5 < iStack_84) {
LAB_14164346f:
        iStack_84 = iVar5;
      }
    }
    local_88 = 0xffffffff;
    uStack_38 = 0xffffffff;
    iStack_34 = iStack_84;
    iStack_30 = iStack_80;
    uStack_2c = uStack_7c;
    puStack_48 = local_98;
    uStack_60 = 0xffffffff;
    iStack_5c = iStack_84;
    uStack_70 = local_98;
    local_58 = iStack_80;
    uStack_54 = uStack_7c;
    local_68 = puStack_90;
    local_50 = local_78;
    puStack_40 = puStack_90;
    if (iStack_84 < iVar5) {
      do {
        plVar1 = local_78;
        lVar10 = (longlong)iStack_5c;
        lVar9 = FName::GetComparisonNameEntry(*local_78 + lVar10 * 0x30);
        if (lVar9 == 0) {
          local_98 = (undefined2 *)0x0;
          puStack_90 = (uint *)0xa;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
          FGenericPlatformString::Memcpy(local_98,L"*INVALID*",0x14);
        }
        else {
          FNameEntry::GetPlainNameString(lVar9,&local_98);
        }
        lVar9 = *plVar1 + lVar10 * 0x30;
        lVar10 = 0x18;
        iVar5 = *(int *)(lVar9 + 0x20) + -1;
        if (*(int *)(lVar9 + 0x20) == 0) {
          iVar5 = 0;
        }
        if (iVar5 < 1) {
          lVar10 = 8;
        }
        if (*(int *)(lVar10 + 8 + lVar9) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = *(undefined2 **)(lVar10 + lVar9);
        }
        puVar6 = &DAT_143f3eda8;
        if ((int)puStack_90 != 0) {
          puVar6 = local_98;
        }
        FUN_141653cc0(param_2,puVar6,puVar11,param_3,param_4);
        if (local_98 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        uStack_60 = uStack_60 & ~uStack_70._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      } while (iStack_5c < (int)local_68[6]);
    }
  }
  return;
}



// FUNCTION 1416435c0 ApplyCVarSettingsGroupFromIni body=97 status=ok
// SIG undefined ApplyCVarSettingsGroupFromIni(void)

void ApplyCVarSettingsGroupFromIni
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined2 *local_18;
  int local_10;
  
  FString::PrintfImpl(&local_18,L"%s@%s",param_1,param_2);
  puVar1 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar1 = local_18;
  }
  FUN_141643200(puVar1,param_3,param_4,0);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141643630 ApplyCVarSettingsGroupFromIni body=97 status=ok
// SIG undefined ApplyCVarSettingsGroupFromIni(void)

void ApplyCVarSettingsGroupFromIni
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined2 *local_18;
  int local_10;
  
  FString::PrintfImpl(&local_18,L"%s@%d",param_1,param_2);
  puVar1 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar1 = local_18;
  }
  FUN_141643200(puVar1,param_3,param_4,0);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416436d0 Clear body=302 status=ok
// SIG undefined Clear(void)

void FAutomationTestExecutionInfo::Clear(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x44);
  plVar1 = *(longlong **)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar3 < 0) {
    if (iVar2 != 0) {
      do {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        plVar1 = plVar1 + 2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar3 = *(int *)(param_1 + 0x44);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (iVar3 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x38,0);
    }
  }
  else {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x18);
    do {
      if (plVar1[4] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      if (plVar1[-2] != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0xb;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  for (iVar3 = *(int *)(param_1 + 0x10); iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 8,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 141643800 Combine body=574 status=ok
// SIG undefined Combine(void)

undefined8 FConfigFile::Combine(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 local_res10 [2];
  undefined2 *local_res18;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined2 *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  iVar5 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  cVar2 = LoadConfigFileWrapper(puVar4,&local_48);
  if (cVar2 == '\0') {
    uVar6 = 0;
  }
  else {
    local_58 = 0;
    local_50 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_58,3,&DAT_144cc2e84,3,0x3f);
    iVar7 = 1;
    cVar2 = FString::StartsWith(&local_48,&local_58,1);
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (cVar2 != '\0') {
      local_68 = 0;
      local_res18 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        local_res18 = local_48;
      }
      local_60 = 0;
      local_res10[0] = 0;
      local_res18 = local_res18 + 2;
      FUN_141675e40(&local_res18,&local_68,local_res10,0);
      plVar3 = (longlong *)FString::TrimEnd(&local_68,&local_58);
      if (&local_68 != plVar3) {
        if (local_68 != 0) {
          FMemory::Free();
        }
        local_68 = *plVar3;
        *plVar3 = 0;
        local_60 = plVar3[1];
        plVar3[1] = 0;
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      plVar3 = (longlong *)FUN_141672d20(local_38,param_2);
      if ((int)local_60 != 0) {
        iVar5 = (int)local_60 + -1;
      }
      if (((int)plVar3[1] == 0) && (iVar5 != -1)) {
        iVar7 = 2;
      }
      local_58 = *plVar3;
      *plVar3 = 0;
      lVar1 = plVar3[1];
      local_50 = plVar3[1];
      plVar3[1] = 0;
      if (*(int *)((longlong)plVar3 + 0xc) < iVar7 + (int)lVar1 + iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
      }
      FString::PathAppend(&local_58,local_68,iVar5);
      Combine(param_1,&local_58);
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
    }
    CombineFromBuffer(param_1,&local_48);
    uVar6 = 1;
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 141643a40 CombineConfig body=601 status=ok
// SIG undefined CombineConfig(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void CombineConfig(short *param_1,short *param_2,short *param_3)

{
  char cVar1;
  undefined2 *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_1a8 [32];
  undefined2 *local_188;
  ulonglong local_180;
  longlong local_178 [2];
  undefined1 local_168 [288];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  FConfigFile::FConfigFile(local_168);
  local_188 = (undefined2 *)0x0;
  uVar5 = 0;
  local_180 = (ulonglong)(uint)local_180;
  lVar3 = -1;
  puVar7 = (undefined2 *)0x0;
  if ((param_1 != (short *)0x0) && (lVar6 = lVar3, puVar7 = (undefined2 *)0x0, *param_1 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (param_1[lVar6] != 0);
    uVar4 = (int)lVar6 + 1;
    local_180 = (ulonglong)uVar4;
    uVar5 = uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
      uVar5 = (uint)local_180;
    }
    puVar7 = local_188;
    FGenericPlatformString::Memcpy(local_188,param_1,(longlong)(int)uVar4 * 2);
  }
  if ((DAT_1468b6148 == (longlong *)0x0) ||
     (cVar1 = (**(code **)(*DAT_1468b6148 + 0x18))(), cVar1 == '\0')) {
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::Empty(local_168,0);
    local_188 = (undefined2 *)0x0;
    local_180 = 0;
    puVar2 = &DAT_143f3eda8;
    if (uVar5 != 0) {
      puVar2 = puVar7;
    }
    cVar1 = LoadConfigFileWrapper(puVar2,&local_188);
    if (cVar1 != '\0') {
      FConfigFile::ProcessInputFileContents(local_168,&local_188);
    }
    if (local_188 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  local_180 = 0;
  local_188 = (undefined2 *)0x0;
  if ((param_2 != (short *)0x0) && (lVar6 = lVar3, *param_2 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_180 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
    }
    FGenericPlatformString::Memcpy(local_188,param_2,(longlong)(int)uVar5 * 2);
  }
  FConfigFile::Combine(local_168,&local_188);
  if (local_188 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_180 = 0;
  local_188 = (undefined2 *)0x0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    do {
      lVar3 = lVar3 + 1;
    } while (param_3[lVar3] != 0);
    uVar5 = (int)lVar3 + 1;
    local_180 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
    }
    FGenericPlatformString::Memcpy(local_188,param_3,(longlong)(int)uVar5 * 2);
  }
  local_178[0] = 0;
  local_178[1] = 0;
  FConfigFile::Write(local_168,&local_188,0,local_178);
  if (local_178[0] != 0) {
    FMemory::Free();
  }
  if (local_188 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FConfigFile::~FConfigFile(local_168);
  return;
}



// FUNCTION 141643ca0 CombineFromBuffer body=3965 status=ok
// SIG undefined CombineFromBuffer(void)

void FConfigFile::CombineFromBuffer(longlong *param_1,undefined8 *param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  wchar_t wVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 uVar16;
  ushort uVar17;
  undefined2 *puVar18;
  longlong *plVar19;
  ushort uVar20;
  wchar_t wVar21;
  wchar_t *pwVar22;
  wchar_t wVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  uint *puVar27;
  short sVar28;
  wchar_t *pwVar29;
  int iVar30;
  ushort uVar31;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  wchar_t *local_1b8;
  undefined8 local_1b0;
  short *local_1a8;
  wchar_t *local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  uint uStack_170;
  int iStack_16c;
  undefined1 local_168 [16];
  longlong *local_158;
  undefined2 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong *local_138;
  longlong local_130;
  ulonglong local_128;
  longlong local_120;
  ulonglong local_118;
  wchar_t *local_110;
  undefined8 local_108;
  void *local_100;
  int local_f8;
  undefined4 local_f4;
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  wchar_t **local_b8;
  undefined1 *local_b0;
  wchar_t **local_a8;
  longlong *local_a0;
  uint uStack_98;
  uint uStack_94;
  uint *puStack_90;
  undefined1 auStack_88 [16];
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  
  if (*(int *)(param_2 + 1) == 0) {
    local_1a8 = &DAT_143f3eda8;
  }
  else {
    local_1a8 = (short *)*param_2;
  }
  plVar19 = (longlong *)0x0;
  local_138 = (longlong *)0x0;
  local_1a0 = (wchar_t *)0x0;
  local_198 = 0;
  bVar5 = false;
  plVar11 = plVar19;
LAB_141643d10:
  while( true ) {
    wVar23 = L' ';
    if ((*local_1a8 != 0xd) && (*local_1a8 != 10)) break;
    local_1a8 = local_1a8 + 1;
  }
  local_110 = (wchar_t *)0x0;
  local_108 = 0;
  local_res18[0] = 0;
  FUN_141675e40(&local_1a8,&local_110,local_res18,0);
  pwVar22 = local_110;
  uVar31 = 0;
  if ((local_1a8 == (short *)0x0) || (*local_1a8 == 0)) {
    bVar5 = true;
  }
  iVar9 = 0;
  if ((int)local_108 == 0) {
    wVar21 = L'\0';
    pwVar22 = L"";
LAB_141643f88:
    if ((((plVar11 == (longlong *)0x0) || (wVar21 == L'\0')) || (wVar21 == L';')) ||
       (pwVar12 = ::_guard_xfg_dispatch_icall_nop(pwVar22,L"="), pwVar12 == (wchar_t *)0x0))
    goto LAB_141644a08;
    *pwVar12 = L'\0';
    pwVar12 = pwVar12 + 1;
    wVar21 = *pwVar22;
    while ((wVar21 != L'\0' && (iVar8 = iswspace(wVar21), iVar8 != 0))) {
      wVar21 = pwVar22[1];
      pwVar22 = pwVar22 + 1;
    }
    wVar21 = *pwVar22;
    wVar1 = wVar21;
    if (wVar21 == L'~') {
      wVar1 = pwVar22[1];
    }
    pwVar29 = pwVar22 + 1;
    if (wVar21 != L'~') {
      pwVar29 = pwVar22;
    }
    wVar21 = wVar1;
    if (((ushort)((ushort)wVar1 - 0x21) < 0x20) &&
       ((0x80003601U >> ((ushort)wVar1 - 0x21 & 0x1f) & 1) != 0)) {
      pwVar22 = pwVar29 + 1;
      pwVar29 = pwVar29 + 1;
      wVar21 = *pwVar22;
      wVar23 = wVar1;
    }
    while (wVar21 != L'\0') {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (pwVar29[lVar10] != L'\0');
      iVar8 = iswspace(pwVar29[(longlong)(int)lVar10 + -1]);
      if (iVar8 == 0) break;
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (pwVar29[lVar10] != L'\0');
      pwVar29[(longlong)(int)lVar10 + -1] = L'\0';
      wVar21 = *pwVar29;
    }
    wVar21 = *pwVar12;
    local_1b8 = (wchar_t *)0x0;
    local_1b0 = 0;
    plVar15 = plVar19;
    if (wVar21 != L'\0') {
      do {
        iVar8 = iswspace(wVar21);
        if (iVar8 == 0) {
          if (*pwVar12 != L'\0') goto LAB_1416440d0;
          break;
        }
        wVar21 = pwVar12[1];
        pwVar12 = pwVar12 + 1;
      } while (wVar21 != L'\0');
      goto LAB_14164411a;
    }
    goto LAB_14164411e;
  }
  wVar21 = *local_110;
  while (wVar21 != L'\0') {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (pwVar22[lVar10] != L'\0');
    iVar8 = iswspace(pwVar22[(longlong)(int)lVar10 + -1]);
    if (iVar8 == 0) break;
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (pwVar22[lVar10] != L'\0');
    pwVar22[(longlong)(int)lVar10 + -1] = L'\0';
    wVar21 = *pwVar22;
  }
  wVar21 = *pwVar22;
  if (wVar21 != L'[') goto LAB_141643f88;
  lVar10 = -1;
  do {
    lVar10 = lVar10 + 1;
  } while (pwVar22[lVar10] != L'\0');
  if (pwVar22[(longlong)(int)lVar10 + -1] != L']') goto LAB_141643f88;
  pwVar12 = pwVar22 + 1;
  lVar10 = -1;
  do {
    lVar10 = lVar10 + 1;
  } while (pwVar12[lVar10] != L'\0');
  local_130 = 0;
  local_128 = 0;
  pwVar22[(int)lVar10] = L'\0';
  if ((pwVar12 != (wchar_t *)0x0) && (*pwVar12 != L'\0')) {
    lVar10 = -1;
    do {
      lVar26 = lVar10 + 2;
      lVar10 = lVar10 + 1;
    } while (pwVar22[lVar26] != L'\0');
    uVar24 = (int)lVar10 + 1;
    local_128 = (ulonglong)uVar24;
    if (0 < (int)uVar24) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_130,0);
    }
    FGenericPlatformString::Memcpy(local_130,pwVar12,(longlong)(int)uVar24 * 2);
  }
  plVar11 = (longlong *)FindOrAddSection(param_1,&local_130);
  local_138 = plVar11;
  if (local_130 != 0) {
    FMemory::Free();
  }
  if (local_1a0 != pwVar12) {
    plVar15 = plVar19;
    if ((pwVar12 != (wchar_t *)0x0) && (*pwVar12 != L'\0')) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (pwVar12[lVar10] != L'\0');
      plVar15 = (longlong *)(ulonglong)((int)lVar10 + 1);
    }
    uVar24 = local_198._4_4_;
    local_198 = (ulonglong)local_198._4_4_ << 0x20;
    uVar25 = (uint)plVar15;
    plVar14 = plVar19;
    if (uVar24 != uVar25) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1a0,plVar15);
      plVar14 = (longlong *)(local_198 & 0xffffffff);
      uVar24 = local_198._4_4_;
    }
    iVar9 = uVar25 + (int)plVar14;
    local_198 = CONCAT44(local_198._4_4_,iVar9);
    if ((int)uVar24 < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0);
    }
    if (uVar25 != 0) {
      ::_guard_xfg_dispatch_icall_nop(local_1a0,pwVar12,(longlong)(int)uVar25 * 2);
    }
  }
  local_118 = 0;
  local_120 = 0;
  if ((pwVar12 != (wchar_t *)0x0) && (*pwVar12 != L'\0')) {
    lVar10 = -1;
    do {
      lVar26 = lVar10;
      lVar10 = lVar26 + 1;
    } while (pwVar12[lVar10] != L'\0');
    uVar24 = (int)lVar26 + 2;
    local_118 = (ulonglong)uVar24;
    if (0 < (int)uVar24) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,0);
    }
    FGenericPlatformString::Memcpy(local_120,pwVar12,(longlong)(int)uVar24 * 2);
  }
  FixupArrayOfStructKeysForSection(plVar11,&local_120,param_1 + 0x19);
  if (local_120 != 0) {
    FMemory::Free();
  }
  goto LAB_141644a08;
  while( true ) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (pwVar12[lVar10] != L'\0');
    pwVar12[(longlong)(int)lVar10 + -1] = L'\0';
    if (*pwVar12 == L'\0') break;
LAB_1416440d0:
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (pwVar12[lVar10] != L'\0');
    iVar8 = iswspace(pwVar12[(longlong)(int)lVar10 + -1]);
    if (iVar8 == 0) break;
  }
LAB_14164411a:
  plVar15 = (longlong *)(local_1b0 & 0xffffffff);
LAB_14164411e:
  if (*pwVar12 == L'\"') {
    wVar21 = pwVar12[1];
    pwVar22 = pwVar12 + 1;
    uVar6 = local_1b0;
    while ((local_1b0 = uVar6, wVar21 != L'\0' && (plVar11 = local_138, wVar21 != L'\"'))) {
      iVar8 = (int)plVar15;
      local_1b0._4_4_ = (int)(uVar6 >> 0x20);
      if (wVar21 == L'\\') {
        wVar21 = pwVar22[1];
        pwVar12 = pwVar22 + 1;
        if (wVar21 == L'\\') {
          iVar30 = iVar8 + -1;
          if (iVar8 < 1) {
            iVar30 = iVar9;
          }
          iVar8 = (iVar8 < 1) + 1 + iVar8;
          local_1b0 = CONCAT44(local_1b0._4_4_,iVar8);
          if (local_1b0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,plVar15);
          }
          wVar21 = L'\\';
        }
        else if (wVar21 == L'\"') {
          iVar30 = iVar8 + -1;
          if (iVar8 < 1) {
            iVar30 = iVar9;
          }
          iVar8 = (iVar8 < 1) + 1 + iVar8;
          local_1b0 = CONCAT44(local_1b0._4_4_,iVar8);
          if (local_1b0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,plVar15);
          }
          wVar21 = L'\"';
        }
        else {
          if (wVar21 != L'n') {
            if (wVar21 == L'u') {
              wVar1 = pwVar22[2];
              if ((((wVar1 != L'\0') && (wVar2 = pwVar22[3], wVar2 != L'\0')) &&
                  (wVar3 = pwVar22[4], wVar3 != L'\0')) && (wVar4 = pwVar22[5], wVar4 != L'\0')) {
                plVar11 = (longlong *)(ulonglong)(ushort)wVar1;
                if (9 < (ushort)(wVar1 + L'￐')) {
                  if ((ushort)(wVar1 + L'ﾟ') < 6) {
                    plVar11 = (longlong *)(ulonglong)(ushort)(wVar1 + L'ﾩ');
                  }
                  else {
                    plVar11 = plVar19;
                    if ((ushort)(wVar1 + L'﾿') < 6) {
                      plVar11 = (longlong *)(ulonglong)(ushort)(wVar1 + L'￉');
                    }
                  }
                }
                if ((ushort)(wVar2 + L'￐') < 10) {
                  sVar28 = (wVar2 + L'Ð') * 0x100;
                }
                else if ((ushort)(wVar2 + L'ﾟ') < 6) {
                  sVar28 = (wVar2 + L'©') * 0x100;
                }
                else if ((ushort)(wVar2 + L'﾿') < 6) {
                  sVar28 = (wVar2 + L'É') * 0x100;
                }
                else {
                  sVar28 = 0;
                }
                if ((ushort)(wVar3 + L'￐') < 10) {
                  uVar20 = wVar3 * 0x10 - 0x300;
                }
                else if ((ushort)(wVar3 + L'ﾟ') < 6) {
                  uVar20 = wVar3 * 0x10 - 0x570;
                }
                else {
                  uVar20 = uVar31;
                  if ((ushort)(wVar3 + L'﾿') < 6) {
                    uVar20 = wVar3 * 0x10 - 0x370;
                  }
                }
                uVar17 = wVar4 + L'￐';
                if (9 < (ushort)(wVar4 + L'￐')) {
                  if ((ushort)(wVar4 + L'ﾟ') < 6) {
                    uVar17 = wVar4 + L'ﾩ';
                  }
                  else {
                    uVar17 = uVar31;
                    if ((ushort)(wVar4 + L'﾿') < 6) {
                      uVar17 = wVar4 + L'￉';
                    }
                  }
                }
                wVar21 = (short)plVar11 * 0x1000 + uVar17 + sVar28 + uVar20;
                if (wVar21 != L'\0') {
                  iVar30 = iVar8 + -1;
                  if (iVar8 < 1) {
                    iVar30 = iVar9;
                  }
                  iVar8 = (iVar8 < 1) + 1 + iVar8;
                  local_1b0 = CONCAT44(local_1b0._4_4_,iVar8);
                  if (local_1b0._4_4_ < iVar8) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,plVar15);
                  }
                  local_1b8[iVar30] = wVar21;
                  local_1b8[(longlong)iVar30 + 1] = L'\0';
                  plVar15 = (longlong *)(local_1b0 & 0xffffffff);
                  uVar6 = local_1b0;
                }
                local_1b0 = uVar6;
                pwVar12 = pwVar22 + 6;
                uVar6 = local_1b0;
                goto LAB_14164450d;
              }
            }
            wVar1 = pwVar22[2];
            if (wVar1 != L'\0') {
              if ((ushort)(wVar21 + L'￐') < 10) {
                uVar20 = wVar21 * 0x10 - 0x300;
              }
              else if ((ushort)(wVar21 + L'ﾟ') < 6) {
                uVar20 = wVar21 * 0x10 - 0x570;
              }
              else {
                uVar20 = uVar31;
                if ((ushort)(wVar21 + L'﾿') < 6) {
                  uVar20 = wVar21 * 0x10 - 0x370;
                }
              }
              uVar17 = wVar1 + L'￐';
              if (9 < (ushort)(wVar1 + L'￐')) {
                if ((ushort)(wVar1 + L'ﾟ') < 6) {
                  uVar17 = wVar1 + L'ﾩ';
                }
                else {
                  uVar17 = uVar31;
                  if ((ushort)(wVar1 + L'﾿') < 6) {
                    uVar17 = wVar1 + L'￉';
                  }
                }
              }
              if ((wchar_t)(uVar20 + uVar17) != L'\0') {
                iVar30 = iVar8 + -1;
                if (iVar8 < 1) {
                  iVar30 = iVar9;
                }
                iVar8 = (iVar8 < 1) + 1 + iVar8;
                local_1b0 = CONCAT44(local_1b0._4_4_,iVar8);
                if (local_1b0._4_4_ < iVar8) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,plVar15);
                }
                local_1b8[iVar30] = uVar20 + uVar17;
                local_1b8[(longlong)iVar30 + 1] = L'\0';
                plVar15 = (longlong *)(local_1b0 & 0xffffffff);
                uVar6 = local_1b0;
              }
              local_1b0 = uVar6;
              pwVar12 = pwVar22 + 3;
              uVar6 = local_1b0;
            }
            goto LAB_14164450d;
          }
          iVar30 = iVar8 + -1;
          if (iVar8 < 1) {
            iVar30 = iVar9;
          }
          iVar8 = (iVar8 < 1) + 1 + iVar8;
          local_1b0 = CONCAT44(local_1b0._4_4_,iVar8);
          if (local_1b0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,plVar15);
          }
          wVar21 = L'\n';
        }
        pwVar12 = pwVar22 + 2;
        local_1b8[iVar30] = wVar21;
        local_1b8[(longlong)iVar30 + 1] = L'\0';
        plVar15 = (longlong *)(local_1b0 & 0xffffffff);
        uVar6 = local_1b0;
      }
      else {
        if (wVar21 != L'\0') {
          iVar30 = iVar8 + -1;
          if (iVar8 < 1) {
            iVar30 = iVar9;
          }
          iVar8 = (iVar8 < 1) + 1 + iVar8;
          local_1b0 = CONCAT44(local_1b0._4_4_,iVar8);
          if (local_1b0._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,plVar15);
          }
          local_1b8[iVar30] = wVar21;
          local_1b8[(longlong)iVar30 + 1] = L'\0';
          plVar15 = (longlong *)(local_1b0 & 0xffffffff);
          uVar6 = local_1b0;
        }
        local_1b0 = uVar6;
        pwVar12 = pwVar22 + 1;
        uVar6 = local_1b0;
      }
LAB_14164450d:
      local_1b0 = uVar6;
      pwVar22 = pwVar12;
      plVar11 = local_138;
      uVar6 = local_1b0;
      wVar21 = *pwVar12;
    }
  }
  else if (local_1b8 != pwVar12) {
    plVar15 = plVar19;
    if (*pwVar12 != L'\0') {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (pwVar12[lVar10] != L'\0');
      plVar15 = (longlong *)(ulonglong)((int)lVar10 + 1);
    }
    uVar6 = local_1b0 >> 0x20;
    local_1b0 = local_1b0 & 0xffffffff00000000;
    iVar8 = (int)plVar15;
    plVar14 = plVar19;
    if ((int)uVar6 != iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1b8,plVar15);
      plVar14 = (longlong *)(local_1b0 & 0xffffffff);
    }
    uVar24 = iVar8 + (int)plVar14;
    local_1b0 = CONCAT44(local_1b0._4_4_,uVar24);
    if (local_1b0._4_4_ < (int)uVar24) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8);
      uVar24 = (uint)local_1b0;
    }
    plVar15 = (longlong *)(ulonglong)uVar24;
    if (iVar8 != 0) {
      ::_guard_xfg_dispatch_icall_nop(local_1b8,pwVar12,(longlong)iVar8 * 2);
      plVar15 = (longlong *)(local_1b0 & 0xffffffff);
    }
  }
  pwVar22 = local_1b8;
  iVar8 = (int)plVar15;
  if (wVar23 == L'+') {
    puVar13 = (undefined8 *)FName::FName(local_70,pwVar29,1);
    FConfigSection::HandleAddCommand(plVar11,*puVar13,&local_1b8);
  }
  else if (wVar23 == L'-') {
    local_148 = (longlong *)0x0;
    plVar14 = plVar19;
    if (iVar8 != 0) {
      local_140._0_4_ = iVar8;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,plVar15,0);
      plVar14 = local_148;
      ::_guard_xfg_dispatch_icall_nop(local_148,pwVar22,(longlong)iVar8 * 2);
      iVar8 = (int)local_140;
      iVar9 = local_140._4_4_;
    }
    local_148 = (longlong *)0x0;
    uStack_180 = CONCAT44(iVar9,iVar8);
    local_140 = 0;
    local_178._0_4_ = 0;
    local_178._4_4_ = 0;
    uStack_170 = 0;
    iStack_16c = 0;
    local_188 = plVar14;
    cVar7 = FConfigValue::ExpandValue(&local_188,&local_178);
    if ((cVar7 == '\0') && (uStack_170 = 0, iStack_16c != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_178,0);
    }
    puVar13 = (undefined8 *)FName::FName(local_68,pwVar29,1);
    TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::RemoveSingle(plVar11,*puVar13,&local_188);
    if (CONCAT44(local_178._4_4_,(undefined4)local_178) != 0) {
      FMemory::Free();
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free();
    }
    cVar7 = FUN_141644dc0(plVar11);
    if (cVar7 != '\0') {
      TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
      ::Rehash(plVar11);
    }
  }
  else if (wVar23 == L'.') {
    puVar13 = (undefined8 *)FName::FName(local_60,pwVar29,1);
    FConfigSection::HandleAddCommand(plVar11,*puVar13,&local_1b8);
  }
  else if (wVar23 == L'!') {
    puVar13 = (undefined8 *)FName::FName(local_58,pwVar29,1);
    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
    ::Remove(plVar11,*puVar13);
  }
  else if (wVar23 == L'@') {
    FName::FName(local_d8,pwVar29,1);
    local_b8 = &local_1b8;
    local_c0 = local_d8;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_&&,FString_const_&>_>(plVar11 + 10,local_res20,&local_c0);
  }
  else if (wVar23 == L'*') {
    plVar15 = param_1 + 0x19;
    if ((int)param_1[0x1a] != *(int *)((longlong)param_1 + 0xfc)) {
      pwVar22 = L"";
      if ((int)local_198 != 0) {
        pwVar22 = local_1a0;
      }
      iVar9 = FUN_140438070(pwVar22);
      plVar14 = (longlong *)param_1[0x21];
      if ((longlong *)param_1[0x21] == (longlong *)0x0) {
        plVar14 = param_1 + 0x20;
      }
      iVar9 = *(int *)((longlong)plVar14 + ((longlong)(int)param_1[0x22] - 1U & (longlong)iVar9) * 4
                      );
      if (iVar9 != -1) {
        lVar10 = *plVar15;
        do {
          lVar26 = (longlong)iVar9 * 0x68;
          pwVar22 = L"";
          if ((int)local_198 != 0) {
            pwVar22 = local_1a0;
          }
          if (*(int *)(lVar26 + 8 + lVar10) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = *(undefined2 **)(lVar26 + lVar10);
          }
          iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar18,pwVar22);
          if (iVar8 == 0) {
            if ((iVar9 != -1) && (*plVar15 + lVar26 != 0)) {
              lVar10 = *plVar15 + lVar26 + 0x10;
              goto LAB_141644823;
            }
            break;
          }
          lVar10 = *plVar15;
          iVar9 = *(int *)(lVar26 + 0x60 + lVar10);
        } while (iVar9 != -1);
      }
    }
    lVar10 = TMapBase<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
             ::Emplace<FString_const_&>(plVar15,&local_1a0);
LAB_141644823:
    FName::FName(local_d0,pwVar29,1);
    local_b0 = local_d0;
    local_a8 = &local_1b8;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_&&,FString_const_&>_>(lVar10,local_e0,&local_b0);
  }
  else {
    plVar15 = (longlong *)FName::FName(local_50,pwVar29,1);
    pwVar22 = local_1b8;
    lVar10 = *plVar15;
    if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
      plVar15 = (longlong *)plVar11[8];
      if ((longlong *)plVar11[8] == (longlong *)0x0) {
        plVar15 = plVar11 + 7;
      }
      iVar9 = *(int *)((longlong)plVar15 +
                      ((longlong)((int)((ulonglong)lVar10 >> 0x20) + (int)lVar10) &
                      (longlong)(int)plVar11[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          plVar15 = (longlong *)((longlong)iVar9 * 0x30 + *plVar11);
          if (*plVar15 == lVar10) {
            if (iVar9 != -1) goto LAB_1416448f5;
            break;
          }
          iVar9 = (int)plVar15[5];
        } while (iVar9 != -1);
      }
    }
    plVar15 = plVar19;
LAB_1416448f5:
    lVar10 = (longlong)(int)(uint)local_1b0;
    plVar14 = plVar15 + 1;
    if (plVar15 == (longlong *)0x0) {
      plVar14 = plVar19;
    }
    if (plVar14 == (longlong *)0x0) {
      local_100 = (void *)0x0;
      local_f8 = (uint)local_1b0;
      if ((uint)local_1b0 == 0) {
        local_f4 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_100,local_1b0 & 0xffffffff,0);
        ::_guard_xfg_dispatch_icall_nop(local_100,pwVar22,lVar10 * 2);
      }
      FConfigValue::FConfigValue(&local_188,&local_100);
      FName::FName(local_c8,pwVar29,1);
      TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
      ::Emplace<FName_const_&,FConfigValue>(plVar11,local_c8,&local_188);
    }
    else {
      local_f0 = (void *)0x0;
      local_e8 = (uint)local_1b0;
      if ((uint)local_1b0 == 0) {
        local_e4 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f0,local_1b0 & 0xffffffff,0);
        ::_guard_xfg_dispatch_icall_nop(local_f0,pwVar22,lVar10 * 2);
      }
      uVar16 = FConfigValue::FConfigValue(&local_188,&local_f0);
      FConfigValue::operator=(plVar14,uVar16);
    }
    if (CONCAT44(local_178._4_4_,(undefined4)local_178) != 0) {
      FMemory::Free();
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  *(undefined1 *)(param_1 + 10) = 1;
  if (local_1b8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
LAB_141644a08:
  if (local_110 != (wchar_t *)0x0) {
    FMemory::Free(local_110);
  }
  if (bVar5) goto code_r0x000141644a30;
  goto LAB_141643d10;
code_r0x000141644a30:
  TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Shrink(param_1);
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),1);
  iVar9 = (int)param_1[5];
  puStack_90 = (uint *)(param_1 + 2);
  local_188._0_4_ = 0;
  local_188._4_4_ = 1;
  local_178._4_4_ = 0;
  uStack_170 = 0;
  if (iVar9 != 0) {
    puVar27 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar27 = puStack_90;
    }
    uVar24 = *puVar27;
    plVar11 = plVar19;
    while (uVar24 == 0) {
      iVar8 = (int)plVar11;
      uStack_170 = (int)plVar19 + 0x20;
      plVar19 = (longlong *)(ulonglong)uStack_170;
      local_188._0_4_ = iVar8 + 1;
      plVar11 = (longlong *)(ulonglong)(uint)local_188;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_141644b13;
      uVar24 = puVar27[(longlong)iVar8 + 1];
    }
    local_188._4_4_ = -uVar24 & uVar24;
    iVar8 = 0x1f;
    if (local_188._4_4_ != 0) {
      for (; local_188._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (local_188._4_4_ == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_178._4_4_ = (uStack_170 - iVar8) + 0x1f;
    if (iVar9 < local_178._4_4_) {
LAB_141644b13:
      local_178._4_4_ = iVar9;
    }
  }
  auStack_88._4_4_ = local_178._4_4_;
  auStack_88._0_4_ = 0xffffffff;
  auStack_88._8_4_ = uStack_170;
  auStack_88._12_4_ = iStack_16c;
  uStack_98 = (uint)local_188;
  uStack_94 = local_188._4_4_;
  local_78._0_4_ = SUB84(param_1,0);
  local_78._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  local_150 = 0;
  uStack_170 = 0xffffffff;
  iStack_16c = local_178._4_4_;
  uStack_180._0_4_ = (uint)local_188;
  uStack_180._4_4_ = local_188._4_4_;
  local_168._8_4_ = (undefined4)local_78;
  local_168._0_8_ = auStack_88._8_8_;
  local_168._12_4_ = local_78._4_4_;
  bVar5 = local_178._4_4_ < (int)param_1[5];
  local_188 = param_1;
  local_158 = param_1;
  local_a0 = param_1;
  local_78 = param_1;
  local_178 = puStack_90;
  if (bVar5) {
    do {
      lVar10 = (longlong)iStack_16c * 0xb8 + *local_188;
      TSparseArray<TSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Shrink(lVar10 + 0x10);
      TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
      ::ConditionalRehash(lVar10 + 0x10,*(int *)(lVar10 + 0x18) - *(int *)(lVar10 + 0x44),1);
      uStack_170 = uStack_170 & ~uStack_180._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_180);
    } while (iStack_16c < (int)local_178[6]);
    if (((char)local_150 != '\0') && (local_150._1_1_ != '\0')) {
      TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_158,(int)local_158[1] - *(int *)((longlong)local_158 + 0x34),1);
    }
  }
  if (local_1a0 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141644c20 Compact body=402 status=ok
// SIG undefined Compact(void)

ulonglong TSparseArray<TSetElement<TTuple<enum_EConfigFileHierarchy,FIniFilename>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong in_RAX;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 != 0) {
    iVar3 = (int)param_1[1];
    uVar13 = 0;
    iVar8 = (int)param_1[6];
    lVar5 = *param_1;
    iVar14 = iVar3 - iVar2;
    iVar12 = iVar3;
    if (iVar8 != -1) {
      do {
        iVar4 = *(int *)((longlong)iVar8 * 0x38 + 4 + *param_1);
        iVar11 = iVar12;
        if (iVar8 < iVar14) {
          bVar6 = (byte)iVar12 & 0x1f;
          uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          do {
            iVar11 = iVar12 + -1;
            uVar10 = uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f;
            iVar7 = iVar11;
            if (iVar11 < 0) {
              iVar7 = iVar12 + 0x1e;
            }
            iVar12 = iVar11;
          } while ((*(uint *)((longlong)plVar9 + (longlong)(iVar7 >> 5) * 4) & uVar10) == 0);
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x38 + lVar5),
                     (void *)((longlong)iVar11 * 0x38 + lVar5),0x38);
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          iVar12 = iVar8;
          if (iVar8 < 0) {
            iVar12 = iVar8 + 0x1f;
          }
          uVar13 = 1;
          puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
        }
        iVar12 = iVar11;
        iVar8 = iVar4;
      } while (iVar4 != -1);
      iVar12 = (int)param_1[1];
    }
    iVar8 = (iVar12 - iVar14) - iVar2;
    if (iVar8 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar14 * 0x38 + *param_1),
                 (void *)((longlong)iVar3 * 0x38 + *param_1),(longlong)iVar8 * 0x38);
      iVar12 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar12 - iVar2;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeShrink
              (param_1);
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt(param_1 + 2,iVar14,iVar2);
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    return uVar13;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141644dc0 FUN_141644dc0 body=605 status=ok
// SIG undefined FUN_141644dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_141644dc0(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined1 local_90 [4];
  uint local_8c;
  longlong local_88;
  uint local_80;
  int local_7c;
  longlong local_70;
  undefined8 uStack_68;
  longlong local_60;
  longlong lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar9 = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    local_70 = 0;
    uStack_68 = 0;
    local_50 = (longlong *)0x0;
    uStack_48 = 0;
    local_40 = 0xffffffff;
    TSparseArray<TSetElement<TTuple<FName,FRetargetSourceCachedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(&local_70,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_98,param_1);
    if (local_7c < *(int *)(local_88 + 0x18)) {
      do {
        iVar7 = local_7c;
        if (local_40._4_4_ == 0) {
          iVar11 = (int)uStack_68;
          uVar12 = uStack_68 & 0xffffffff;
          iVar8 = (int)uStack_68 + 1;
          uStack_68 = CONCAT44(uStack_68._4_4_,iVar8);
          if (uStack_68._4_4_ < iVar8) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_70,uVar12);
          }
          TBitArray<FDefaultBitArrayAllocator>::Add(&local_60,0,1);
        }
        else {
          iVar11 = (int)local_40;
          local_40._4_4_ = local_40._4_4_ + -1;
          iVar8 = *(int *)(local_70 + 4 + (longlong)(int)local_40 * 0x30);
          local_40 = CONCAT44(local_40._4_4_,iVar8);
          if (local_40._4_4_ != 0) {
            *(undefined4 *)(local_70 + (longlong)iVar8 * 0x30) = 0xffffffff;
          }
        }
        plVar10 = &local_60;
        if (local_50 != (longlong *)0x0) {
          plVar10 = local_50;
        }
        iVar8 = iVar11;
        if (iVar11 < 0) {
          iVar8 = iVar11 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
        puVar14 = (undefined8 *)((longlong)iVar11 * 0x30 + local_70);
        puVar13 = (undefined8 *)((longlong)iVar7 * 0x30 + *local_98);
        *puVar14 = *puVar13;
        FString::FString(puVar14 + 1,puVar13 + 1);
        FString::FString(puVar14 + 3,puVar13 + 3);
        *(undefined4 *)(puVar14 + 5) = *(undefined4 *)(puVar13 + 5);
        *(undefined4 *)((longlong)puVar14 + 0x2c) = *(undefined4 *)((longlong)puVar13 + 0x2c);
        local_80 = local_80 & ~local_8c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_90);
      } while (local_7c < *(int *)(local_88 + 0x18));
    }
    if (param_1 != &local_70) {
      lVar3 = *param_1;
      uVar12 = param_1[1];
      lVar4 = param_1[2];
      lVar5 = param_1[3];
      plVar10 = (longlong *)param_1[4];
      lVar6 = param_1[5];
      lVar2 = param_1[6];
      *param_1 = local_70;
      param_1[1] = uStack_68;
      param_1[2] = local_60;
      param_1[3] = lStack_58;
      *(undefined4 *)(param_1 + 4) = (undefined4)local_50;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_50._4_4_;
      *(undefined4 *)(param_1 + 5) = (undefined4)uStack_48;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_48._4_4_;
      param_1[6] = local_40;
      local_70 = lVar3;
      uStack_68 = uVar12;
      local_60 = lVar4;
      lStack_58 = lVar5;
      local_50 = plVar10;
      uStack_48 = lVar6;
      local_40 = lVar2;
    }
    TSparseArray<TSetElement<TTuple<FName,FRetargetSourceCachedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(&local_70,0);
    if (local_50 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_70 != 0) {
      FMemory::Free();
    }
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 141645020 FUN_141645020 body=680 status=ok
// SIG undefined FUN_141645020(void)

char FUN_141645020(uint param_1,undefined8 param_2,int *param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int local_res8 [2];
  undefined8 in_stack_fffffffffffffed8;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar7;
  LARGE_INTEGER local_108;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8 [2];
  undefined8 local_e8;
  int local_e0;
  undefined8 local_d8;
  int local_d0;
  int local_cc;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  int local_70;
  int local_6c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  QueryPerformanceCounter(&local_108);
  if (DAT_1468e2774 != '\0') {
    param_1 = param_1 & 0xffffffdf | 0x10;
  }
  if (((param_1 & 0x40) == 0) && (plVar3 = (longlong *)FUN_1415aac40(), plVar3 != (longlong *)0x0))
  {
    uVar5 = param_4;
    cVar1 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,param_1,param_2,param_3,param_4,param_5,CONCAT44(uVar7,param_6));
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (cVar1 != '\0') {
      QueryPerformanceCounter(&local_100);
      LOCK();
      UNLOCK();
      LOCK();
      UNLOCK();
      LOCK();
      UNLOCK();
      DAT_1468e2230 = DAT_1468e2230 + (local_100.QuadPart - (longlong)local_108);
      DAT_1468e2238 = DAT_1468e2238 + param_5;
      DAT_1468e2240 = DAT_1468e2240 + *param_3;
      return '\x01';
    }
  }
  param_1 = param_1 & 0xf;
  if (param_1 == 1) {
    local_res8[0] = *param_3;
    cVar1 = false;
    if (param_6 == 0xf) {
      iVar2 = compress(param_2,local_res8,param_4,param_5);
      cVar1 = iVar2 == 0;
      local_6c = local_res8[0];
    }
    else {
      local_b8 = &LAB_14165d720;
      local_b0 = &LAB_14045f060;
      local_e0 = param_5;
      local_a8 = 0;
      local_e8 = param_4;
      local_d8 = param_2;
      local_d0 = local_res8[0];
      iVar2 = deflateInit2_(&local_e8,0xffffffff,8,param_6,9,0,"1.2.5",0x58);
      local_6c = local_res8[0];
      if (iVar2 == 0) {
        iVar2 = FUN_14369d3f0(&local_e8,4);
        if (iVar2 == 1) {
          local_res8[0] = local_cc;
          iVar2 = deflateEnd(&local_e8);
          local_6c = local_res8[0];
          if (iVar2 == 0) {
            cVar1 = true;
          }
        }
        else {
          deflateEnd(&local_e8);
          local_6c = local_res8[0];
        }
      }
    }
  }
  else {
    if (param_1 != 2) {
      if (param_1 == 4) {
        puVar4 = (undefined8 *)FUN_14164abe0();
        cVar1 = (**(code **)*puVar4)(puVar4,param_2,param_3,param_4,CONCAT44(uVar6,param_5));
      }
      else {
        cVar1 = '\0';
      }
      goto LAB_14164526f;
    }
    local_58 = &LAB_14165d720;
    local_50 = &LAB_14045f060;
    local_48 = 0;
    local_80 = param_5;
    local_88 = param_4;
    deflateInit2_(&local_88,0xffffffff,8,0x1f,9,0,"1.2.5",0x58);
    local_70 = param_5;
    local_78 = param_2;
    do {
      iVar2 = FUN_14369d3f0(&local_88,4);
    } while (iVar2 == 0);
    cVar1 = iVar2 == 1;
    if ((bool)cVar1) {
      deflateEnd(&local_88);
    }
  }
  *param_3 = local_6c;
LAB_14164526f:
  QueryPerformanceCounter(local_f8);
  LOCK();
  UNLOCK();
  if (cVar1 != '\0') {
    LOCK();
    DAT_1468e2238 = DAT_1468e2238 + param_5;
    UNLOCK();
    LOCK();
    DAT_1468e2240 = DAT_1468e2240 + *param_3;
    UNLOCK();
  }
  DAT_1468e2230 = DAT_1468e2230 + (local_f8[0].QuadPart - (longlong)local_108);
  return cVar1;
}



// FUNCTION 1416452d0 FUN_1416452d0 body=324 status=ok
// SIG undefined FUN_1416452d0(void)

int FUN_1416452d0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 local_68;
  int local_60;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined8 local_28;
  
  if (DAT_1468e2774 != '\0') {
    param_1 = param_1 & 0xffffffdf | 0x10;
  }
  uVar4 = param_1 & 0xf;
  if (uVar4 == 1) {
    if (param_3 == 0xf) {
      iVar1 = compressBound(param_2);
    }
    else {
      iVar1 = (param_2 + 0x3f >> 6) + param_2 + (param_2 + 7 >> 3) + 0xb;
    }
  }
  else if (uVar4 == 2) {
    local_28 = 0;
    local_38 = &LAB_14165d720;
    local_30 = &LAB_14045f060;
    local_68 = 0;
    local_60 = param_2;
    deflateInit2_(&local_68,0xffffffff,8,0x1f,9,0,"1.2.5",0x58);
    iVar1 = FUN_14369dd10(&local_68,local_60);
    iVar1 = iVar1 + 0xc;
    deflateEnd(&local_68);
  }
  else {
    iVar1 = param_2;
    if (uVar4 == 4) {
      plVar3 = (longlong *)FUN_14164abe0();
      iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
    }
  }
  if ((param_1 & 0x40) == 0) {
    plVar3 = (longlong *)FUN_1415aac40();
    if (plVar3 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,param_1,param_2,param_3);
      if (iVar1 < iVar2) {
        iVar1 = iVar2;
      }
    }
  }
  return iVar1;
}



// FUNCTION 141645420 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1416454d0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141645580 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141645630 ConvertValueFromHumanFriendlyValue body=532 status=ok
// SIG undefined ConvertValueFromHumanFriendlyValue(void)

undefined * ConvertValueFromHumanFriendlyValue(undefined *param_1)

{
  wchar_t _C;
  wint_t wVar1;
  wint_t wVar2;
  wint_t *pwVar3;
  wchar_t *pwVar4;
  
  for (pwVar3 = &DAT_144cc5c60;
      (wVar1 = *(wint_t *)(param_1 + -0x144cc5c60 + (longlong)pwVar3), wVar1 != 0 || (*pwVar3 != 0))
      ; pwVar3 = pwVar3 + 1) {
    if (wVar1 != *pwVar3) {
      wVar1 = towlower(wVar1);
      wVar2 = towlower(*pwVar3);
      if (wVar1 != wVar2) {
        if (wVar1 == wVar2) {
          return PTR_DAT_1464af7f8;
        }
        for (pwVar3 = &DAT_144cc5bf8;
            (wVar1 = *(wint_t *)(param_1 + -0x144cc5bf8 + (longlong)pwVar3), wVar1 != 0 ||
            (*pwVar3 != 0)); pwVar3 = pwVar3 + 1) {
          if (wVar1 != *pwVar3) {
            wVar1 = towlower(wVar1);
            wVar2 = towlower(*pwVar3);
            if (wVar1 != wVar2) {
              if (wVar1 == wVar2) {
                return PTR_DAT_1464af7f8;
              }
              for (pwVar3 = &DAT_144cc5c6c;
                  (wVar1 = *(wint_t *)(param_1 + -0x144cc5c6c + (longlong)pwVar3), wVar1 != 0 ||
                  (*pwVar3 != 0)); pwVar3 = pwVar3 + 1) {
                if (wVar1 != *pwVar3) {
                  wVar1 = towlower(wVar1);
                  wVar2 = towlower(*pwVar3);
                  if (wVar1 != wVar2) {
                    if (wVar1 == wVar2) {
                      return PTR_DAT_1464af7f8;
                    }
                    for (pwVar4 = L"False";
                        (_C = *(wchar_t *)(param_1 + -0x144cc5c78 + (longlong)pwVar4), _C != L'\0'
                        || (*pwVar4 != L'\0')); pwVar4 = pwVar4 + 1) {
                      if (_C != *pwVar4) {
                        wVar1 = towlower(_C);
                        wVar2 = towlower(*pwVar4);
                        if (wVar1 != wVar2) {
                          if (wVar1 == wVar2) {
                            return PTR_DAT_1464af800;
                          }
                          for (pwVar3 = &DAT_144cc5c84;
                              (wVar1 = *(wint_t *)(param_1 + -0x144cc5c84 + (longlong)pwVar3),
                              wVar1 != 0 || (*pwVar3 != 0)); pwVar3 = pwVar3 + 1) {
                            if (wVar1 != *pwVar3) {
                              wVar1 = towlower(wVar1);
                              wVar2 = towlower(*pwVar3);
                              if (wVar1 != wVar2) {
                                if (wVar1 == wVar2) {
                                  return PTR_DAT_1464af800;
                                }
                                for (pwVar3 = &DAT_144cc5c90;
                                    (wVar1 = *(wint_t *)(param_1 + -0x144cc5c90 + (longlong)pwVar3),
                                    wVar1 != 0 || (*pwVar3 != 0)); pwVar3 = pwVar3 + 1) {
                                  if (wVar1 != *pwVar3) {
                                    wVar1 = towlower(wVar1);
                                    wVar2 = towlower(*pwVar3);
                                    if (wVar1 != wVar2) {
                                      if (wVar1 == wVar2) {
                                        return PTR_DAT_1464af800;
                                      }
                                      return param_1;
                                    }
                                  }
                                }
                                return PTR_DAT_1464af800;
                              }
                            }
                          }
                          return PTR_DAT_1464af800;
                        }
                      }
                    }
                    return PTR_DAT_1464af800;
                  }
                }
              }
              return PTR_DAT_1464af7f8;
            }
          }
        }
        return PTR_DAT_1464af7f8;
      }
    }
  }
  return PTR_DAT_1464af7f8;
}



// FUNCTION 141645850 FUN_141645850 body=66 status=ok
// SIG undefined FUN_141645850(void)

void FUN_141645850(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144cc8840;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144cc8888;
  }
  return;
}



// FUNCTION 1416458a0 DaysInMonth body=105 status=ok
// SIG undefined DaysInMonth(void)

undefined4 FDateTime::DaysInMonth(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 2) {
    uVar1 = param_1 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if ((uVar1 == 0) &&
       ((param_1 != ((int)param_1 / 100) * 100 || (param_1 == ((int)param_1 / 400) * 400)))) {
      return 0x1d;
    }
  }
  return *(undefined4 *)(&DAT_144cc6628 + (longlong)param_2 * 4);
}



// FUNCTION 141645910 DaysInYear body=90 status=ok
// SIG undefined DaysInYear(void)

undefined8 FDateTime::DaysInYear(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar1 == 0) &&
     ((param_1 != ((int)param_1 / 100) * 100 || (param_1 == ((int)param_1 / 400) * 400)))) {
    return 0x16e;
  }
  return 0x16d;
}



// FUNCTION 141645970 Decode body=346 status=ok
// SIG undefined Decode(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FBase64::Decode(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  void *pvVar7;
  void *pvVar8;
  void *_Dst;
  undefined1 auStack_178 [32];
  void *local_158;
  int local_150;
  undefined4 local_14c;
  undefined1 local_148 [256];
  longlong local_48;
  short *local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  pvVar8 = (void *)0x0;
  local_158 = (void *)0x0;
  local_14c = 0;
  iVar2 = GetDecodedDataSize();
  iVar2 = iVar2 + 1;
  _Dst = pvVar8;
  local_150 = iVar2;
  if (0 < iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_158);
    _Dst = local_158;
  }
  ::_guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar2);
  if (*(int *)(param_1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
    pvVar7 = pvVar8;
  }
  else {
    puVar4 = (undefined2 *)*param_1;
    pvVar7 = (void *)(ulonglong)(*(int *)(param_1 + 1) - 1);
  }
  cVar1 = Decode<wchar_t>(puVar4,pvVar7,_Dst);
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  else {
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_148,_Dst);
    if ((short *)*param_2 != local_40) {
      pvVar7 = pvVar8;
      if ((local_40 != (short *)0x0) && (*local_40 != 0)) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (local_40[lVar6] != 0);
        pvVar7 = (void *)(ulonglong)((int)lVar6 + 1);
      }
      *(undefined4 *)(param_2 + 1) = 0;
      iVar2 = (int)pvVar7;
      if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,pvVar7);
        pvVar8 = (void *)(ulonglong)*(uint *)(param_2 + 1);
      }
      iVar3 = iVar2 + (int)pvVar8;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,pvVar8);
      }
      if (iVar2 != 0) {
        ::_guard_xfg_dispatch_icall_nop((void *)*param_2,local_40,(longlong)iVar2 * 2);
      }
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    uVar5 = 1;
  }
  if (_Dst != (void *)0x0) {
    FMemory::Free(_Dst);
  }
  return uVar5;
}



// FUNCTION 141645ad0 Decode body=169 status=ok
// SIG undefined Decode(void)

void FBase64::Decode(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = GetDecodedDataSize();
  iVar1 = (int)param_2[1];
  if (iVar1 < iVar2) {
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 + *param_2),0,(longlong)(iVar2 - iVar1));
  }
  else if ((iVar2 < iVar1) && (iVar2 != iVar1)) {
    *(int *)(param_2 + 1) = iVar2;
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_2);
  }
  if (*(int *)(param_1 + 1) != 0) {
    Decode<wchar_t>(*param_1,*(int *)(param_1 + 1) + -1,*param_2);
    return;
  }
  Decode<wchar_t>(&DAT_143f3eda8,0,*param_2);
  return;
}



// FUNCTION 141645b90 DoesConfigFileExistWrapper body=377 status=ok
// SIG undefined DoesConfigFileExistWrapper(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool DoesConfigFileExistWrapper(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int local_res10 [2];
  
  DAT_1464af2c4 = DAT_1464af2c4 + 1;
  bVar1 = false;
  uVar6 = 0;
  local_res10[0] = 0;
  lVar5 = (longlong)(DAT_1464af2b8 + -1);
  if (-1 < DAT_1464af2b8 + -1) {
    lVar8 = lVar5 << 4;
    bVar1 = false;
    do {
      if (((*(int *)(lVar8 + 8 + DAT_1464af2b0) == 0) ||
          (plVar4 = *(longlong **)(lVar8 + DAT_1464af2b0), plVar4 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,param_1,local_res10), cVar3 == '\0')) {
        bVar1 = true;
      }
      lVar8 = lVar8 + -0x10;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  iVar2 = DAT_1464af2b8;
  DAT_1464af2c4 = DAT_1464af2c4 + -1;
  if ((bVar1) && (DAT_1464af2c4 < 1)) {
    uVar7 = uVar6;
    if (0 < DAT_1464af2b8) {
      do {
        if (((*(int *)(uVar6 + 8 + DAT_1464af2b0) == 0) ||
            (*(longlong **)(uVar6 + DAT_1464af2b0) == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(**(longlong **)(uVar6 + DAT_1464af2b0) + 0x10))(), cVar3 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af2b0,uVar7,1,1);
        }
        else {
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar6 = uVar6 + 0x10;
        }
      } while ((int)uVar7 < DAT_1464af2b8);
    }
    _DAT_1464af2c0 = DAT_1464af2b8 * 2;
    if (DAT_1464af2b8 * 2 < 3) {
      _DAT_1464af2c0 = 2;
    }
    if ((_DAT_1464af2c0 < iVar2) && (DAT_1464af2bc != DAT_1464af2b8)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af2b0);
    }
  }
  if (local_res10[0] < 1) {
    plVar4 = (longlong *)FUN_1415c3d50();
    lVar5 = (**(code **)(*plVar4 + 0xe8))(plVar4,param_1);
    return -1 < lVar5;
  }
  return true;
}



// FUNCTION 141645d10 FUN_141645d10 body=729 status=ok
// SIG undefined FUN_141645d10(void)

bool FUN_141645d10(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  int local_res8 [2];
  int iStack_60;
  int local_58;
  int iStack_54;
  
  bVar13 = false;
  if (param_1 == (longlong *)0x0) {
    return false;
  }
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,param_2);
  plVar6 = (longlong *)0x0;
  if (local_res8[0] != -1) {
    plVar6 = (longlong *)((longlong)local_res8[0] * 0xb8 + *param_1);
  }
  plVar11 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  if (plVar11 != (longlong *)0x0) {
    lVar1 = *param_3;
    local_58 = -1;
    iStack_54 = -1;
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::ConditionalRehash(plVar11,(int)plVar11[1] - *(int *)((longlong)plVar11 + 0x34),0);
    iStack_60 = (int)lVar1;
    if ((int)plVar11[9] != 0) {
      plVar12 = plVar6 + 9;
      if (plVar6 == (longlong *)0x0) {
        plVar12 = (longlong *)&DAT_00000038;
      }
      plVar6 = (longlong *)plVar12[1];
      if ((longlong *)plVar12[1] == (longlong *)0x0) {
        plVar6 = plVar12;
      }
      iStack_54 = *(int *)((longlong)plVar6 +
                          ((longlong)((int)((ulonglong)lVar1 >> 0x20) + iStack_60) &
                          (longlong)(int)plVar11[9] - 1U) * 4);
      local_58 = iStack_54;
      if (iStack_54 != -1) {
        do {
          iStack_54 = *(int *)(*plVar11 + 0x28 + (longlong)local_58 * 0x30);
          if (*(longlong *)(*plVar11 + (longlong)local_58 * 0x30) == lVar1) break;
          local_58 = iStack_54;
        } while (iStack_54 != -1);
      }
    }
    if (local_58 != -1) {
      do {
        if (bVar13 != false) {
          return bVar13;
        }
        lVar2 = *plVar11;
        lVar7 = (longlong)local_58;
        if (*(int *)(param_4 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*param_4;
        }
        if (*(int *)(lVar2 + 0x10 + lVar7 * 0x30) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = *(undefined2 **)(lVar2 + 8 + lVar7 * 0x30);
        }
        iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
        bVar13 = iVar5 == 0;
        if ((iVar5 != 0) && (iVar5 = *(int *)(lVar2 + 0x10 + lVar7 * 0x30), 1 < iVar5)) {
          puVar9 = *(undefined2 **)(lVar2 + 8 + lVar7 * 0x30);
          puVar8 = &DAT_143f3eda8;
          iVar3 = 0;
          if (iVar5 != 0) {
            puVar8 = puVar9;
            iVar3 = iVar5 + -1;
          }
          cVar4 = FDefaultValueHelper::IsStringValidFloat(puVar8,puVar9 + iVar3);
          if ((cVar4 != '\0') && (iVar5 = *(int *)(param_4 + 1), 1 < iVar5)) {
            puVar9 = &DAT_143f3eda8;
            iVar3 = 0;
            if (iVar5 != 0) {
              puVar9 = (undefined2 *)*param_4;
              iVar3 = iVar5 + -1;
            }
            cVar4 = FDefaultValueHelper::IsStringValidFloat(puVar9,(undefined2 *)*param_4 + iVar3);
            if (cVar4 != '\0') {
              if (*(int *)(lVar2 + 0x10 + lVar7 * 0x30) == 0) {
                pwVar10 = L"";
              }
              else {
                pwVar10 = *(wchar_t **)(lVar2 + 8 + lVar7 * 0x30);
              }
              dVar14 = _wtof(pwVar10);
              if (*(int *)(param_4 + 1) == 0) {
                pwVar10 = L"";
              }
              else {
                pwVar10 = (wchar_t *)*param_4;
              }
              dVar15 = _wtof(pwVar10);
              if ((float)dVar14 == (float)dVar15) {
                bVar13 = true;
              }
              else {
                bVar13 = false;
              }
            }
          }
        }
        if (iStack_54 == -1) {
          return bVar13;
        }
        local_58 = iStack_54;
        do {
          iStack_54 = *(int *)(*plVar11 + 0x28 + (longlong)local_58 * 0x30);
          if (*(longlong *)(*plVar11 + (longlong)local_58 * 0x30) == lVar1) break;
          local_58 = iStack_54;
        } while (iStack_54 != -1);
        if (local_58 == -1) {
          return bVar13;
        }
      } while( true );
    }
  }
  return false;
}



// FUNCTION 141645ff0 Dump body=1673 status=ok
// SIG undefined Dump(void)

void FConfigCacheIni::Dump(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  int iVar13;
  undefined2 *puVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int local_198;
  uint uStack_194;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  int local_178;
  uint uStack_174;
  uint *puStack_170;
  undefined4 local_168;
  int iStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  undefined8 uStack_150;
  uint *puStack_148;
  undefined1 auStack_140 [16];
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  longlong *local_f8;
  undefined8 uStack_f0;
  uint *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  longlong *local_c8;
  undefined2 local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  longlong local_78 [6];
  undefined1 local_48 [16];
  
  iVar17 = 0;
  if (param_3 == 0) {
    FOutputDevice::Log(param_2,L"Files map:");
    FOutputDevice::LogfImpl
              (param_2,L"TSet: %i elements, %i hash slots",
               *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x50));
    iVar13 = *(int *)(param_1 + 0x50);
    if (0 < iVar13) {
      uVar12 = 0;
      iVar8 = iVar17;
      do {
        iVar15 = 0;
        lVar7 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar7 = param_1 + 0x40;
        }
        iVar3 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x50) - 1U & uVar12) * 4);
        if (iVar3 != -1) {
          do {
            iVar15 = iVar15 + 1;
            iVar3 = *(int *)((longlong)iVar3 * 0x130 + 0x128 + *(longlong *)(param_1 + 8));
          } while (iVar3 != -1);
        }
        FOutputDevice::LogfImpl(param_2,L"   Hash[%i] = %i",iVar8,iVar15);
        iVar8 = iVar8 + 1;
        uVar12 = uVar12 + 1;
      } while (iVar8 < iVar13);
    }
  }
  local_158 = (longlong *)(param_1 + 8);
  uStack_174 = 1;
  iVar13 = *(int *)(param_1 + 0x30);
  puStack_170 = (uint *)(param_1 + 0x18);
  local_178 = 0;
  iStack_164 = 0;
  iStack_160 = 0;
  if (iVar13 != 0) {
    puVar16 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar16 = puStack_170;
    }
    uVar1 = *puVar16;
    local_178 = 0;
    iStack_160 = 0;
    while (uVar1 == 0) {
      lVar7 = (longlong)local_178;
      iStack_160 = iStack_160 + 0x20;
      iVar8 = local_178 + 1;
      bVar2 = (int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_178;
      local_178 = iVar8;
      if (bVar2) goto LAB_141646194;
      uVar1 = puVar16[lVar7 + 1];
    }
    uStack_174 = -uVar1 & uVar1;
    iVar8 = 0x1f;
    if (uStack_174 != 0) {
      for (; uStack_174 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_174 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_164 = (iStack_160 - iVar8) + 0x1f;
    if (iVar13 < iStack_164) {
LAB_141646194:
      iStack_164 = iVar13;
    }
  }
  local_168 = 0xffffffff;
  uStack_a0 = CONCAT44(iStack_164,0xffffffff);
  auStack_140._8_4_ = iStack_160;
  auStack_140._0_8_ = uStack_a0;
  auStack_140._12_4_ = uStack_15c;
  uStack_150 = CONCAT44(uStack_174,local_178);
  local_80 = 0;
  uStack_108._0_4_ = SUB84(local_158,0);
  uStack_108._4_4_ = (undefined4)((ulonglong)local_158 >> 0x20);
  local_98._8_4_ = (undefined4)uStack_108;
  local_98._0_8_ = auStack_140._8_8_;
  local_98._12_4_ = uStack_108._4_4_;
  iVar13 = iStack_164;
  puStack_148 = puStack_170;
  uStack_108 = local_158;
  local_b8 = local_158;
  uStack_b0 = uStack_150;
  local_a8 = puStack_170;
  local_88 = local_158;
  if (iStack_164 < *(int *)(param_1 + 0x30)) {
    do {
      plVar10 = local_b8;
      if (param_3 == 0) {
LAB_14164624c:
        bVar2 = true;
      }
      else {
        iVar17 = 1;
        puVar4 = (undefined8 *)FUN_141671940(local_78,(longlong)iVar13 * 0x130 + *local_b8,1);
        if (*(int *)(puVar4 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar4;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,param_3);
        if (iVar8 == 0) goto LAB_14164624c;
        bVar2 = false;
      }
      if ((iVar17 != 0) && (iVar17 = 0, local_78[0] != 0)) {
        FMemory::Free();
      }
      if (bVar2) {
        lVar9 = (longlong)iVar13 * 0x130;
        lVar7 = *plVar10;
        if (*(int *)(lVar9 + 8 + lVar7) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = *(undefined2 **)(lVar9 + lVar7);
        }
        FOutputDevice::LogfImpl(param_2,L"FileName: %s",puVar11);
        local_198 = 0;
        local_130 = (longlong *)(lVar9 + *plVar10 + 0x10);
        uStack_194 = 1;
        iVar13 = (int)local_130[5];
        puStack_120 = (uint *)(local_130 + 2);
        iStack_184 = 0;
        iStack_180 = 0;
        if (iVar13 != 0) {
          puVar16 = (uint *)local_130[4];
          if ((uint *)local_130[4] == (uint *)0x0) {
            puVar16 = puStack_120;
          }
          uVar1 = *puVar16;
          local_198 = 0;
          iStack_180 = 0;
          while (uVar1 == 0) {
            lVar7 = (longlong)local_198;
            iStack_180 = iStack_180 + 0x20;
            iVar8 = local_198 + 1;
            bVar2 = (int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_198;
            local_198 = iVar8;
            if (bVar2) goto LAB_141646364;
            uVar1 = puVar16[lVar7 + 1];
          }
          uStack_194 = -uVar1 & uVar1;
          iVar8 = 0x1f;
          if (uStack_194 != 0) {
            for (; uStack_194 >> iVar8 == 0; iVar8 = iVar8 + -1) {
            }
          }
          if (uStack_194 == 0) {
            iVar8 = 0x20;
          }
          else {
            iVar8 = 0x1f - iVar8;
          }
          iStack_184 = (iStack_180 - iVar8) + 0x1f;
          if (iVar13 < iStack_184) {
LAB_141646364:
            iStack_184 = iVar13;
          }
        }
        uStack_e0 = CONCAT44(iStack_184,0xffffffff);
        auStack_118._8_4_ = iStack_180;
        auStack_118._0_8_ = uStack_e0;
        auStack_118._12_4_ = uStack_17c;
        uStack_128 = CONCAT44(uStack_194,local_198);
        local_c0 = 0;
        local_48._8_4_ = SUB84(local_130,0);
        local_48._12_4_ = (undefined4)((ulonglong)local_130 >> 0x20);
        local_d8._8_4_ = local_48._8_4_;
        local_d8._0_8_ = auStack_118._8_8_;
        local_d8._12_4_ = local_48._12_4_;
        local_48._0_8_ = auStack_118._8_8_;
        local_f8 = local_130;
        uStack_f0 = uStack_128;
        local_e8 = puStack_120;
        local_c8 = local_130;
        if (iStack_184 < iVar13) {
          do {
            lVar9 = (longlong)iStack_184 * 0xb8;
            lVar7 = *local_f8;
            plVar10 = (longlong *)(lVar7 + 0x10 + lVar9);
            if (*(int *)(lVar9 + 8 + lVar7) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = *(undefined2 **)(lVar9 + lVar7);
            }
            FOutputDevice::LogfImpl(param_2,L"   [%s]",puVar11);
            iVar13 = (int)plVar10[5];
            puStack_148 = (uint *)(plVar10 + 2);
            uStack_194 = 1;
            local_198 = 0;
            iStack_184 = 0;
            iStack_180 = 0;
            if (iVar13 != 0) {
              puVar16 = (uint *)plVar10[4];
              if ((uint *)plVar10[4] == (uint *)0x0) {
                puVar16 = puStack_148;
              }
              uVar1 = *puVar16;
              local_198 = 0;
              iStack_180 = 0;
              while (uVar1 == 0) {
                lVar7 = (longlong)local_198;
                iStack_180 = iStack_180 + 0x20;
                iVar8 = local_198 + 1;
                bVar2 = (int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_198;
                local_198 = iVar8;
                if (bVar2) goto LAB_1416464c4;
                uVar1 = puVar16[lVar7 + 1];
              }
              uStack_194 = -uVar1 & uVar1;
              iVar8 = 0x1f;
              if (uStack_194 != 0) {
                for (; uStack_194 >> iVar8 == 0; iVar8 = iVar8 + -1) {
                }
              }
              if (uStack_194 == 0) {
                iVar8 = 0x20;
              }
              else {
                iVar8 = 0x1f - iVar8;
              }
              iStack_184 = (iStack_180 - iVar8) + 0x1f;
              if (iVar13 < iStack_184) {
LAB_1416464c4:
                iStack_184 = iVar13;
              }
            }
            uStack_150 = CONCAT44(uStack_194,local_198);
            auStack_118._4_4_ = iStack_184;
            auStack_118._0_4_ = 0xffffffff;
            auStack_118._8_4_ = iStack_180;
            auStack_140._8_4_ = iStack_180;
            auStack_140._12_4_ = uStack_17c;
            auStack_140._0_8_ = auStack_118._0_8_;
            local_158 = plVar10;
            local_130 = plVar10;
            uStack_128 = uStack_150;
            puStack_120 = puStack_148;
            if (iStack_184 < iVar13) {
              do {
                lVar5 = (longlong)iStack_184;
                lVar9 = *local_158;
                iVar8 = *(int *)(lVar9 + 0x20 + lVar5 * 0x30);
                lVar7 = lVar9 + lVar5 * 0x30;
                iVar13 = iVar8 + -1;
                lVar6 = 0x18;
                if (iVar8 == 0) {
                  iVar13 = 0;
                }
                if (iVar13 < 1) {
                  lVar6 = 8;
                }
                if (*(int *)(lVar6 + 8 + lVar7) == 0) {
                  puVar11 = &DAT_143f3eda8;
                }
                else {
                  puVar11 = *(undefined2 **)(lVar6 + lVar7);
                }
                puVar4 = (undefined8 *)FName::ToString(lVar9 + lVar5 * 0x30,&local_178);
                if (*(int *)(puVar4 + 1) == 0) {
                  puVar14 = &DAT_143f3eda8;
                }
                else {
                  puVar14 = (undefined2 *)*puVar4;
                }
                FOutputDevice::LogfImpl(param_2,L"   %s=%s",puVar14,puVar11);
                if (CONCAT44(uStack_174,local_178) != 0) {
                  FMemory::Free();
                }
                auStack_140._0_4_ = auStack_140._0_4_ & ~uStack_150._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_150);
                iStack_184 = auStack_140._4_4_;
              } while ((int)auStack_140._4_4_ < (int)puStack_148[6]);
            }
            FOutputDevice::Log(param_2,&DAT_144cc2ef4);
            uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
            iStack_184 = uStack_e0._4_4_;
          } while (uStack_e0._4_4_ < (int)local_e8[6]);
          if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
            TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::ConditionalRehash(local_c8,(int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34),1);
          }
        }
      }
      uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
      iVar13 = uStack_a0._4_4_;
    } while (uStack_a0._4_4_ < (int)local_a8[6]);
    if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
      TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 141646680 DumpAutomationTestExecutionInfo body=649 status=ok
// SIG undefined DumpAutomationTestExecutionInfo(void)

void FAutomationTestFramework::DumpAutomationTestExecutionInfo(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  longlong lVar10;
  uint *puVar11;
  void *pvVar12;
  uint local_c8;
  uint uStack_c4;
  int iStack_b4;
  uint uStack_b0;
  void *local_a8;
  int local_a0;
  void *local_98;
  int local_90;
  longlong local_88;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  int iStack_6c;
  uint local_68;
  longlong local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined4 uStack_48;
  int iStack_44;
  uint uStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"Success",L"UnrealEd",L"AutomationTest_Success");
  puVar7 = (undefined8 *)FText::ToString(uVar6);
  pvVar8 = (void *)0x0;
  local_98 = (void *)0x0;
  local_90 = *(int *)(puVar7 + 1);
  lVar10 = (longlong)local_90;
  pvVar9 = (void *)*puVar7;
  if (local_90 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
    ::_guard_xfg_dispatch_icall_nop(local_98,pvVar9,lVar10 * 2);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (&local_60,L"Fail",L"UnrealEd",L"AutomationTest_Fail");
  puVar7 = (undefined8 *)FText::ToString(uVar6);
  local_a8 = (void *)0x0;
  local_a0 = *(int *)(puVar7 + 1);
  lVar10 = (longlong)local_a0;
  pvVar9 = (void *)*puVar7;
  pvVar12 = pvVar8;
  if (local_a0 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_a0,0);
    pvVar12 = local_a8;
    ::_guard_xfg_dispatch_icall_nop(local_a8,pvVar9,lVar10 * 2);
  }
  if (uStack_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_58 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    pvVar12 = local_a8;
    if ((int)lVar10 == 1) {
      (**(code **)*uStack_58)(uStack_58);
      LOCK();
      piVar2 = (int *)((longlong)uStack_58 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      pvVar12 = local_a8;
      if (iVar3 == 1) {
        (**(code **)(*uStack_58 + 8))(uStack_58,1);
        pvVar12 = local_a8;
      }
    }
  }
  iVar3 = *(int *)(param_2 + 0x28);
  local_78 = (uint *)(param_2 + 0x10);
  local_c8 = 0;
  uStack_c4 = 1;
  iStack_b4 = 0;
  uStack_b0 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)(param_2 + 0x20);
    if (*(uint **)(param_2 + 0x20) == (uint *)0x0) {
      puVar11 = local_78;
    }
    uVar4 = *puVar11;
    pvVar9 = pvVar8;
    while (uVar4 == 0) {
      iVar5 = (int)pvVar9;
      uStack_b0 = (int)pvVar8 + 0x20;
      pvVar8 = (void *)(ulonglong)uStack_b0;
      local_c8 = iVar5 + 1;
      pvVar9 = (void *)(ulonglong)local_c8;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14164686b;
      uVar4 = puVar11[(longlong)iVar5 + 1];
    }
    uStack_c4 = -uVar4 & uVar4;
    iVar5 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_b4 = (uStack_b0 - iVar5) + 0x1f;
    if (iVar3 < iStack_b4) {
LAB_14164686b:
      iStack_b4 = iVar3;
    }
  }
  uStack_80 = local_c8;
  uStack_7c = uStack_c4;
  uStack_48 = 0xffffffff;
  iStack_44 = iStack_b4;
  uStack_40 = uStack_b0;
  uStack_70 = 0xffffffff;
  iStack_6c = iStack_b4;
  local_68 = uStack_b0;
  local_88 = param_2;
  local_60 = param_2;
  puStack_50 = local_78;
  uStack_58._0_4_ = uStack_80;
  uStack_58._4_4_ = uStack_7c;
  if (iStack_b4 < iVar3) {
    do {
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
  }
  if (pvVar12 != (void *)0x0) {
    FMemory::Free(pvVar12);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141646910 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,FRetargetSourceCachedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
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



// FUNCTION 141646990 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FString,FConfigFile>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
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



// FUNCTION 141646a10 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
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



// FUNCTION 141646a90 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<enum_EConfigFileHierarchy,FIniFilename>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
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



// FUNCTION 141646b10 Empty body=445 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,FConfigFile>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
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
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_141646be1;
      uVar4 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_141646be1:
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
      plVar6 = (longlong *)((longlong)iStack_2c * 0x130 + *param_1);
      FConfigFile::~FConfigFile(plVar6 + 2);
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<304,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 141646cd0 Empty body=205 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      plVar2 = (longlong *)((longlong)local_1c * 0xb8 + *local_38);
      FConfigSection::~FConfigSection(plVar2 + 2);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar1) {
    *(uint *)(param_1 + 0x2c) = uVar1;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  return;
}



// FUNCTION 141646da0 Empty body=448 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<enum_EConfigFileHierarchy,FIniFilename>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_141646e71;
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
LAB_141646e71:
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
      lVar5 = (longlong)iStack_2c * 0x38 + *param_1;
      if (*(longlong *)(lVar5 + 0x20) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 8) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 141646f60 EmptySection body=671 status=ok
// SIG undefined EmptySection(void)

undefined8 FConfigCacheIni::EmptySection(longlong param_1,short *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  int local_res20 [2];
  undefined8 local_58;
  uint *puStack_50;
  undefined4 local_48;
  int iStack_44;
  uint uStack_40;
  
  plVar3 = (longlong *)Find(param_1,param_3,0);
  if (plVar3 != (longlong *)0x0) {
    uVar8 = 0;
    local_58 = 0;
    puStack_50 = (uint *)0x0;
    lVar7 = -1;
    uVar5 = uVar8;
    if ((param_2 != (short *)0x0) && (lVar10 = lVar7, uVar5 = 0, *param_2 != 0)) {
      do {
        lVar10 = lVar10 + 1;
      } while (param_2[lVar10] != 0);
      uVar9 = (int)lVar10 + 1;
      puStack_50 = (uint *)(ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      }
      uVar5 = local_58;
      FGenericPlatformString::Memcpy(local_58,param_2,(longlong)(int)uVar9 * 2);
    }
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar3,local_res20,&local_58);
    uVar4 = uVar8;
    if (local_res20[0] != -1) {
      uVar4 = (longlong)local_res20[0] * 0xb8 + *plVar3;
    }
    uVar11 = uVar4 + 0x10;
    if (uVar4 == 0) {
      uVar11 = uVar8;
    }
    if (uVar5 != 0) {
      FMemory::Free(uVar5);
    }
    if (uVar11 != 0) {
      iVar1 = *(int *)(uVar11 + 0x28);
      puStack_50 = (uint *)(uVar11 + 0x10);
      local_58._0_4_ = 0;
      local_58._4_4_ = 1;
      iStack_44 = 0;
      uStack_40 = 0;
      if (iVar1 != 0) {
        puVar12 = *(uint **)(uVar11 + 0x20);
        if (*(uint **)(uVar11 + 0x20) == (uint *)0x0) {
          puVar12 = puStack_50;
        }
        uVar9 = *puVar12;
        uVar5 = uVar8;
        uVar4 = uVar8;
        while (uVar9 == 0) {
          iVar2 = (int)uVar5;
          uStack_40 = (int)uVar4 + 0x20;
          uVar4 = (ulonglong)uStack_40;
          local_58._0_4_ = iVar2 + 1;
          uVar5 = (ulonglong)(uint)local_58;
          if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar2) goto LAB_1416470ef;
          uVar9 = puVar12[(longlong)iVar2 + 1];
        }
        local_58._4_4_ = -uVar9 & uVar9;
        iVar2 = 0x1f;
        if (local_58._4_4_ != 0) {
          for (; local_58._4_4_ >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        if (local_58._4_4_ == 0) {
          iVar2 = 0x20;
        }
        else {
          iVar2 = 0x1f - iVar2;
        }
        iStack_44 = (uStack_40 - iVar2) + 0x1f;
        if (iVar1 < iStack_44) {
LAB_1416470ef:
          iStack_44 = iVar1;
        }
      }
      local_48 = 0xffffffff;
      if (iStack_44 < *(int *)(uVar11 + 0x28)) {
        TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
        ::Empty(uVar11,0);
      }
      local_58 = 0;
      puStack_50 = (uint *)0x0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        do {
          lVar7 = lVar7 + 1;
        } while (param_2[lVar7] != 0);
        uVar9 = (int)lVar7 + 1;
        puStack_50 = (uint *)(ulonglong)uVar9;
        if (0 < (int)uVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        }
        uVar8 = local_58;
        FGenericPlatformString::Memcpy(local_58,param_2,(longlong)(int)uVar9 * 2);
      }
      TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::Remove(plVar3,&local_58);
      if (uVar8 != 0) {
        FMemory::Free(uVar8);
      }
      if (*(char *)(param_1 + 0x58) == '\0') {
        if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
          *(undefined1 *)(plVar3 + 10) = 1;
          Flush(param_1,0,param_3);
          return 1;
        }
        plVar3 = (longlong *)FUN_1415c3d50();
        if (*(int *)(param_3 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*param_3;
        }
        (**(code **)(*plVar3 + 0x30))(plVar3,puVar6,0,0,0);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141647210 Encode body=144 status=ok
// SIG undefined Encode(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FBase64::Encode(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_b8,puVar1);
  Encode(param_1,local_30,iVar2);
  if (local_38 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1416472a0 Encode body=30 status=ok
// SIG undefined Encode(void)

undefined8 FBase64::Encode(undefined8 param_1,undefined8 *param_2)

{
  Encode(param_1,*param_2,*(undefined4 *)(param_2 + 1));
  return param_1;
}



// FUNCTION 1416472c0 Encode body=146 status=ok
// SIG undefined Encode(void)

undefined8 * FBase64::Encode(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = ((param_3 + 2U) / 3) * 4;
  iVar2 = iVar1 + 1;
  if (iVar1 < 0) {
    if ((iVar1 < -1) && (iVar2 != 0)) {
      *(int *)(param_1 + 1) = iVar2;
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink();
    }
  }
  else {
    *(int *)(param_1 + 1) = iVar2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,0,(longlong)iVar2 * 2);
  }
  Encode<wchar_t>(param_2,param_3,*param_1);
  return param_1;
}



// FUNCTION 141647360 EndOf body=51 status=ok
// SIG undefined EndOf(void)

undefined2 * FDefaultValueHelper::EndOf(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 0) {
    return &DAT_143f3eda8;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  return (undefined2 *)(*param_1 + (longlong)iVar2 * 2);
}



// FUNCTION 1416473a0 FUN_1416473a0 body=151 status=ok
// SIG undefined FUN_1416473a0(void)

void FUN_1416473a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)operator_new(0x18);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = *param_2;
    lVar4 = param_2[1];
    puVar7[2] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    puVar5 = *(undefined8 **)(param_1 + 0x170);
    *(undefined8 **)(param_1 + 0x170) = puVar7;
    *puVar5 = puVar7;
  }
  plVar6 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 141647440 FUN_141647440 body=88 status=ok
// SIG undefined FUN_141647440(void)

void FUN_141647440(undefined8 param_1)

{
  if (DAT_1468c21ac == '\0') {
    LowLevelFatalErrorHandler
              ("Unknown",0x1a1,
               L"The %s constructor is for internal usage only for hot-reload purposes. Please do NOT use it."
               ,param_1);
    FDebug::AssertFailed
              (&DAT_144cc2ade,"Unknown",0x1a1,
               L"The %s constructor is for internal usage only for hot-reload purposes. Please do NOT use it."
               ,param_1);
  }
  return;
}



// FUNCTION 1416474c0 Execute body=482 status=ok
// SIG undefined Execute(void)

longlong * FCompoundChange::Execute(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong **pplVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined4 local_res8;
  undefined4 uStackX_c;
  longlong *local_res10;
  undefined8 local_res18;
  longlong *local_48;
  int local_40;
  int local_3c;
  
  local_res8 = 0;
  local_40 = 0;
  local_48 = (longlong *)0x0;
  local_3c = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  local_res10 = param_2;
  local_res18 = param_3;
  if (0 < iVar6) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_48,iVar6);
    iVar6 = *(int *)(param_1 + 0x10);
  }
  uVar5 = local_res18;
  lVar12 = (longlong)(iVar6 + -1);
  plVar11 = local_48;
  iVar13 = local_3c;
  iVar9 = local_40;
  if (-1 < iVar6 + -1) {
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 8) + lVar12 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        plVar7 = (longlong *)(**(code **)*puVar1)(puVar1,&local_res8,uVar5);
        lVar10 = (longlong)iVar9;
        local_40 = iVar9 + 1;
        if (iVar13 < local_40) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,iVar9);
          plVar11 = local_48;
          iVar13 = local_3c;
        }
        iVar9 = local_40;
        plVar11[lVar10] = *plVar7;
        *plVar7 = 0;
        plVar7 = (longlong *)CONCAT44(uStackX_c,local_res8);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x18))(plVar7,1);
        }
      }
      lVar12 = lVar12 + -1;
      param_2 = local_res10;
    } while (-1 < lVar12);
  }
  if (iVar9 < 1) {
    pplVar8 = &local_res10;
    bVar4 = false;
    bVar3 = true;
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 == (longlong *)0x0) {
      pplVar8 = (longlong **)&local_res8;
      bVar4 = true;
      bVar3 = false;
      plVar7 = (longlong *)0x0;
    }
    else {
      bVar4 = true;
      bVar3 = false;
      *plVar7 = (longlong)&PTR_Execute_144114fe0;
      pplVar8 = (longlong **)&local_res8;
      plVar7[1] = (longlong)plVar11;
      *(int *)(plVar7 + 2) = iVar9;
      iVar9 = 0;
      *(int *)((longlong)plVar7 + 0x14) = iVar13;
      plVar11 = (longlong *)0x0;
    }
  }
  *pplVar8 = (longlong *)0x0;
  *param_2 = (longlong)plVar7;
  if ((bVar3) && (local_res10 != (longlong *)0x0)) {
    (**(code **)(*local_res10 + 0x18))(local_res10,1);
  }
  plVar7 = plVar11;
  if ((bVar4) && (plVar2 = (longlong *)CONCAT44(uStackX_c,local_res8), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
  }
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    plVar2 = (longlong *)*plVar7;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,1);
    }
    plVar7 = plVar7 + 1;
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return param_2;
}



// FUNCTION 1416476b0 FUN_1416476b0 body=20 status=ok
// SIG undefined FUN_1416476b0(void)

undefined8 FUN_1416476b0(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 8))(param_2);
  return 1;
}



// FUNCTION 1416476d0 Exit body=33 status=ok
// SIG undefined Exit(void)

void FConfigCacheIni::Exit(undefined8 param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  Flush(param_1,1,&local_18);
  return;
}



// FUNCTION 141647700 ExpandValue body=432 status=ok
// SIG undefined ExpandValue(void)

bool FConfigValue::ExpandValue(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  short *psVar7;
  uint uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  FString::operator=(param_2,param_1);
  iVar1 = FString::ReplaceInline(param_2,L"%GAME%",&DAT_146299580,0);
  puVar6 = (undefined8 *)FPaths::ProjectDir(local_18);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar6;
  }
  iVar2 = FString::ReplaceInline(param_2,L"%GAMEDIR%",puVar10,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  puVar6 = (undefined8 *)FPaths::EngineUserDir(local_18);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar6;
  }
  iVar3 = FString::ReplaceInline(param_2,L"%ENGINEUSERDIR%",puVar10,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  puVar6 = (undefined8 *)FPaths::EngineVersionAgnosticUserDir(local_18);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar6;
  }
  iVar4 = FString::ReplaceInline(param_2,L"%ENGINEVERSIONAGNOSTICUSERDIR%",puVar10,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  psVar7 = (short *)FUN_1416ac1f0();
  local_28 = (undefined2 *)0x0;
  local_20 = 0;
  if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (psVar7[lVar9] != 0);
    uVar8 = (int)lVar9 + 1;
    local_20 = (ulonglong)uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,psVar7,(longlong)(int)uVar8 * 2);
  }
  FPaths::NormalizeFilename(&local_28);
  puVar10 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar10 = local_28;
  }
  iVar5 = FString::ReplaceInline(param_2,L"%APPSETTINGSDIR%",puVar10,0);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return 0 < iVar5 + iVar1 + iVar2 + iVar3 + iVar4;
}



// FUNCTION 1416478b0 FUN_1416478b0 body=352 status=ok
// SIG undefined FUN_1416478b0(void)

undefined8
FUN_1416478b0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  void *_Dst;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_18;
  int local_10;
  
  if ((param_5 & 0x10000000) == 0) {
    FUN_14165adf0(param_1,&local_18,L"%Y.%m.%d-%H.%M.%S");
    if ((local_10 != 0) && (iVar4 = local_10 + -1, iVar4 != 0)) {
      iVar2 = (int)param_2[1];
      iVar3 = (uint)(iVar2 == 0) + iVar2 + iVar4;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,local_18,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
    }
  }
  else {
    FString::PrintfImpl(&local_18,L"FDateTime(0x%016X)",*param_1);
    pvVar1 = local_18;
    iVar4 = 0;
    if (local_10 != 0) {
      iVar4 = local_10 + -1;
    }
    if (iVar4 != 0) {
      iVar2 = (int)param_2[1];
      iVar3 = (uint)(iVar2 == 0) + iVar2 + iVar4;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
    }
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return 1;
}



// FUNCTION 141647a10 FUN_141647a10 body=375 status=ok
// SIG undefined FUN_141647a10(void)

undefined8 * FUN_141647a10(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  wint_t *pwVar1;
  short sVar2;
  wint_t _C;
  wchar_t *_Dest;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  wint_t *pwVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint uVar11;
  wint_t *pwVar12;
  
  puVar9 = &DAT_143f3eda8;
  if (*(int *)(param_3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_3;
  }
  iVar3 = FUN_141592950(param_2,puVar4,1,0,0xffffffff);
  if (iVar3 < 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar10 = 0;
    uVar7 = *(int *)(param_3 + 1) - 1;
    if (*(int *)(param_3 + 1) == 0) {
      uVar7 = uVar10;
    }
    uVar7 = iVar3 + uVar7;
    sVar2 = *(short *)(*param_2 + (longlong)(int)uVar7 * 2);
    pwVar6 = (wint_t *)(*param_2 + (longlong)(int)uVar7 * 2);
    pwVar12 = pwVar6 + 1;
    if (sVar2 != 0x22) {
      pwVar12 = pwVar6;
    }
    _C = *pwVar12;
    pwVar6 = pwVar12;
    while (_C != 0) {
      if (sVar2 == 0x22) {
        if (_C == 0x22) break;
      }
      else {
        iVar3 = iswalnum(_C);
        if ((iVar3 == 0) && (*pwVar6 != 0x5f)) break;
      }
      pwVar1 = pwVar6 + 1;
      pwVar6 = pwVar6 + 1;
      _C = *pwVar1;
    }
    iVar3 = (int)param_2[1];
    uVar5 = (int)((longlong)pwVar6 - (longlong)pwVar12 >> 1) + uVar7;
    uVar11 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar11 = uVar10;
    }
    if (uVar7 < uVar11) {
      uVar11 = uVar7;
    }
    uVar7 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar7 = uVar10;
    }
    uVar8 = uVar11;
    if ((uVar11 <= uVar5) && (uVar8 = uVar7, uVar5 < uVar7)) {
      uVar8 = uVar5;
    }
    if (iVar3 != 0) {
      puVar9 = (undefined2 *)*param_2;
    }
    iVar3 = uVar8 - uVar11;
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    uVar7 = iVar3 + 1;
    if (iVar3 == 0) {
      uVar7 = uVar10;
    }
    *(uint *)(param_1 + 1) = uVar7;
    if ((0 < (int)uVar7) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0), 0 < *(int *)(param_1 + 1))) {
      _Dest = (wchar_t *)*param_1;
      wcsncpy(_Dest,puVar9 + (int)uVar11,(longlong)iVar3);
      _Dest[iVar3] = L'\0';
    }
  }
  return param_1;
}



// FUNCTION 141647ba0 Find body=307 status=ok
// SIG undefined Find(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FConfigCacheIni::Find(longlong param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_188 [32];
  int local_168 [2];
  undefined8 *local_160;
  undefined8 local_158;
  undefined1 local_148 [288];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  iVar3 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar3 = 0;
  }
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 8,local_168,param_2);
    lVar4 = 0;
    if (local_168[0] != -1) {
      lVar4 = (longlong)local_168[0] * 0x130 + *(longlong *)(param_1 + 8);
    }
    lVar5 = lVar4 + 0x10;
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    if ((lVar5 == 0) && (*(char *)(param_1 + 0x58) == '\0')) {
      if (param_3 == '\0') {
        if (*(int *)(param_2 + 1) == 0) {
          puVar2 = &DAT_143f3eda8;
        }
        else {
          puVar2 = (undefined2 *)*param_2;
        }
        cVar1 = DoesConfigFileExistWrapper(puVar2);
        if (cVar1 == '\0') {
          return 0;
        }
      }
      local_160 = param_2;
      local_158 = FConfigFile::FConfigFile(local_148);
      TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FConfigFile_&&>_>
                (param_1 + 8,local_168,&local_160,0);
      lVar5 = *(longlong *)(param_1 + 8) + (longlong)local_168[0] * 0x130 + 0x10;
      FConfigFile::~FConfigFile(local_148);
      FConfigFile::Read(lVar5,param_2);
    }
  }
  return lVar5;
}



// FUNCTION 141647ce0 FindConfigFile body=86 status=ok
// SIG undefined FindConfigFile(void)

longlong FConfigCacheIni::FindConfigFile(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [8];
  
  TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 8),local_res8);
  if (local_res8[0] == -1) {
    return 0;
  }
  lVar2 = (longlong)local_res8[0] * 0x130 + *(longlong *)(param_1 + 8);
  lVar1 = lVar2 + 0x10;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 141647d40 FindConfigFileWithBaseName body=538 status=ok
// SIG undefined FindConfigFileWithBaseName(void)

longlong FConfigCacheIni::FindConfigFileWithBaseName(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
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
  
  plVar1 = (longlong *)(param_1 + 8);
  uStack_84 = 1;
  uVar2 = *(uint *)(param_1 + 0x30);
  local_58 = (uint *)(param_1 + 0x18);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar9 = local_58;
    }
    uVar3 = *puVar9;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar5 = local_88 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar5;
      if (bVar4) goto LAB_141647e0c;
      uVar3 = puVar9[lVar7 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_74 = (iStack_70 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_141647e0c:
      uStack_74 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar8 = uVar3 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_40 = plVar1;
  puStack_30 = local_58;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar3;
  if (uVar3 != uVar2) {
    puVar9 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0x18);
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_141647ee1;
      uVar6 = puVar9[(longlong)iVar5 + 1];
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
    uStack_74 = (uVar8 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_141647ee1:
      uStack_74 = uVar2;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != (uint *)(param_1 + 0x18)))) {
    lVar7 = (longlong)(int)uStack_4c * 0x130 + *plVar1;
    if (*(longlong *)(lVar7 + 0x68) == param_2) {
      return lVar7 + 0x10;
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return 0;
}



// FUNCTION 141647f60 FindId body=223 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_3;
    }
    iVar1 = FUN_140438070(puVar6);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar7 = (longlong)iVar1 * 0x68;
        if (*(int *)(param_3 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar7 + 8 + lVar4) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar7 + lVar4);
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
        if (iVar2 == 0) {
          *param_2 = iVar1;
          return param_2;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar7 + 0x60 + lVar4);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141648040 FindId body=242 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_3;
    }
    iVar1 = FUN_140438070(puVar6);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar7 = (longlong)iVar1 * 0x130;
        if (*(int *)(param_3 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar7 + 8 + lVar4) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar7 + lVar4);
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
        if (iVar2 == 0) {
          *param_2 = iVar1;
          return param_2;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar7 + 0x128 + lVar4);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141648140 FindOrAddSection body=398 status=ok
// SIG undefined FindOrAddSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FConfigFile::FindOrAddSection(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_108 [32];
  int local_e8 [2];
  undefined8 local_e0;
  longlong *local_d8;
  longlong local_c8 [6];
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78 [6];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_e8,param_2);
  lVar1 = 0;
  if (local_e8[0] != -1) {
    lVar1 = (longlong)local_e8[0] * 0xb8 + *param_1;
  }
  lVar2 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  if (lVar2 == 0) {
    local_c8[0] = 0;
    local_c8[2] = 0;
    local_c8[3] = 0;
    local_90 = 0;
    local_80 = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    local_40 = 0;
    local_30 = 0;
    local_d8 = local_c8;
    local_c8[1] = 0;
    local_c8[4] = 0;
    local_c8[5] = 0;
    local_98 = 0xffffffff;
    local_94 = 0;
    local_88 = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[4] = 0;
    local_78[5] = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_38 = 0;
    local_e0 = param_2;
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FConfigSection_&&>_>(param_1,local_e8,&local_e0,0);
    lVar1 = *param_1;
    local_30 = local_30 & 0xffffffff00000000;
    if (local_38 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_78,0);
    if (local_78[4] != 0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    local_80 = local_80 & 0xffffffff00000000;
    if (local_88 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FRetargetSourceCachedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_c8,0);
    if (local_c8[4] != 0) {
      FMemory::Free();
    }
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
    lVar2 = lVar1 + (longlong)local_e8[0] * 0xb8 + 0x10;
  }
  return lVar2;
}



// FUNCTION 1416482d0 FixupArrayOfStructKeysForSection body=732 status=ok
// SIG undefined FixupArrayOfStructKeysForSection(void)

void FixupArrayOfStructKeysForSection(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  undefined1 local_res18 [8];
  undefined8 local_d8;
  uint *puStack_d0;
  undefined4 local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 local_a8;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined8 uStack_90;
  uint *puStack_88;
  uint uStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  undefined8 uStack_68;
  uint *local_60;
  uint uStack_58;
  int iStack_54;
  int local_50;
  longlong *local_48;
  longlong lStack_40;
  uint *puStack_38;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  iVar1 = (int)param_3[5];
  puStack_d0 = (uint *)(param_3 + 2);
  iVar11 = 0;
  local_d8 = 0x100000000;
  iStack_c4 = 0;
  iStack_c0 = 0;
  if (iVar1 != 0) {
    puVar10 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar10 = puStack_d0;
    }
    uVar7 = *puVar10;
    iStack_c0 = iVar11;
    iVar8 = iVar11;
    while (uVar7 == 0) {
      iStack_c0 = iStack_c0 + 0x20;
      uVar4 = (ulonglong)local_d8 >> 0x20;
      local_d8 = CONCAT44((int)uVar4,iVar8 + 1);
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1416483a1;
      uVar7 = puVar10[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar8 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    local_d8 = CONCAT44(uVar7,(undefined4)local_d8);
    if (uVar7 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_c4 = (iStack_c0 - iVar8) + 0x1f;
    if (iVar1 < iStack_c4) {
LAB_1416483a1:
      iStack_c4 = iVar1;
    }
  }
  local_c8 = 0xffffffff;
  uStack_80 = 0xffffffff;
  iStack_7c = iStack_c4;
  iStack_78 = iStack_c0;
  uStack_74 = uStack_bc;
  uStack_90 = local_d8;
  uStack_68 = local_d8;
  local_50 = iStack_c0;
  uStack_58 = 0xffffffff;
  iStack_54 = iStack_c4;
  local_98 = param_3;
  puStack_88 = puStack_d0;
  local_70 = param_3;
  local_60 = puStack_d0;
  if (iStack_c4 < iVar1) {
    do {
      plVar5 = local_70;
      lVar9 = (longlong)iStack_54;
      cVar6 = FString::EndsWith(param_2,*local_70 + lVar9 * 0x68,1);
      if (cVar6 != '\0') {
        local_b8 = 0;
        local_98 = (longlong *)(*plVar5 + 0x10 + lVar9 * 0x68);
        uStack_b4 = 1;
        iVar1 = (int)local_98[5];
        puStack_b0 = (uint *)(local_98 + 2);
        uVar7 = 0;
        uStack_a4 = 0;
        if (iVar1 != 0) {
          puVar10 = (uint *)local_98[4];
          if ((uint *)local_98[4] == (uint *)0x0) {
            puVar10 = puStack_b0;
          }
          uVar2 = *puVar10;
          local_b8 = iVar11;
          while (uVar2 == 0) {
            lVar9 = (longlong)local_b8;
            uVar7 = uVar7 + 0x20;
            iVar8 = local_b8 + 1;
            uStack_a4 = (ulonglong)uVar7 << 0x20;
            bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b8;
            local_b8 = iVar8;
            if (bVar3) goto LAB_1416484d1;
            uVar2 = puVar10[lVar9 + 1];
          }
          uStack_b4 = -uVar2 & uVar2;
          iVar8 = 0x1f;
          if (uStack_b4 != 0) {
            for (; uStack_b4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
            }
          }
          if (uStack_b4 == 0) {
            iVar8 = 0x20;
          }
          else {
            iVar8 = 0x1f - iVar8;
          }
          iVar8 = (uVar7 - iVar8) + 0x1f;
          uStack_a4._4_4_ = (int)((ulonglong)uStack_a4 >> 0x20);
          uStack_a4 = CONCAT44(uStack_a4._4_4_,iVar8);
          if (iVar1 < iVar8) {
LAB_1416484d1:
            uStack_a4 = CONCAT44(uStack_a4._4_4_,iVar1);
          }
        }
        local_a8 = 0xffffffff;
        uStack_90 = CONCAT44(uStack_b4,local_b8);
        uStack_30 = 0xffffffff;
        iStack_2c = (int)uStack_a4;
        iStack_28 = uStack_a4._4_4_;
        uStack_24 = uStack_9c;
        uStack_80 = 0xffffffff;
        iStack_7c = (int)uStack_a4;
        iStack_78 = uStack_a4._4_4_;
        uStack_74 = uStack_9c;
        puStack_88 = puStack_b0;
        local_48 = local_98;
        lStack_40 = uStack_90;
        puStack_38 = puStack_b0;
        if ((int)uStack_a4 < iVar1) {
          do {
            local_d8 = *local_98 + (longlong)iStack_7c * 0x20;
            puStack_d0 = (uint *)(local_d8 + 8);
            FUN_14090fe80(param_1 + 0x50,local_res18,&local_d8,0);
            uStack_80 = uStack_80 & ~uStack_90._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
          } while (iStack_7c < (int)puStack_88[6]);
        }
      }
      uStack_58 = uStack_58 & ~uStack_68._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_68);
    } while (iStack_54 < (int)local_60[6]);
  }
  return;
}



// FUNCTION 1416485b0 Flush body=790 status=ok
// SIG undefined Flush(void)

void FConfigCacheIni::Flush(longlong param_1,char param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  short *psVar12;
  uint *puVar13;
  longlong lVar14;
  undefined8 local_c8;
  uint *puStack_c0;
  undefined4 local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  ulonglong local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  longlong lStack_50;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  if (*(char *)(param_1 + 0x5a) != '\x01') {
    if (*(char *)(param_1 + 0x58) == '\0') {
      local_98 = (longlong *)(param_1 + 8);
      iVar11 = *(int *)(param_1 + 0x30);
      puStack_c0 = (uint *)(param_1 + 0x18);
      local_c8 = 0x100000000;
      iStack_b4 = 0;
      iStack_b0 = 0;
      if (iVar11 != 0) {
        puVar13 = *(uint **)(param_1 + 0x28);
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          puVar13 = puStack_c0;
        }
        uVar4 = *puVar13;
        iStack_b0 = 0;
        iVar5 = 0;
        while (uVar4 == 0) {
          iStack_b0 = iStack_b0 + 0x20;
          uVar2 = (ulonglong)local_c8 >> 0x20;
          local_c8 = CONCAT44((int)uVar2,iVar5 + 1);
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14164869d;
          uVar4 = puVar13[(longlong)iVar5 + 1];
          iVar5 = iVar5 + 1;
        }
        uVar4 = -uVar4 & uVar4;
        iVar5 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        local_c8 = CONCAT44(uVar4,(undefined4)local_c8);
        if (uVar4 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        iStack_b4 = (iStack_b0 - iVar5) + 0x1f;
        if (iVar11 < iStack_b4) {
LAB_14164869d:
          iStack_b4 = iVar11;
        }
      }
      local_b8 = 0xffffffff;
      uStack_80 = CONCAT44(iStack_b4,0xffffffff);
      auStack_40._8_4_ = iStack_b0;
      auStack_40._0_8_ = uStack_80;
      auStack_40._12_4_ = uStack_ac;
      lStack_50 = local_c8;
      local_60 = 0;
      local_30._0_4_ = SUB84(local_98,0);
      local_30._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
      uStack_90 = local_c8;
      local_78._8_4_ = (undefined4)local_30;
      local_78._0_8_ = auStack_40._8_8_;
      local_78._12_4_ = local_30._4_4_;
      iVar11 = iStack_b4;
      local_88 = puStack_c0;
      local_68 = local_98;
      local_58 = local_98;
      puStack_48 = puStack_c0;
      local_30 = local_98;
      if (iStack_b4 < *(int *)(param_1 + 0x30)) {
        do {
          plVar3 = local_98;
          iVar5 = *(int *)(param_3 + 1);
          iVar6 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar6 = 0;
          }
          if (iVar6 == 0) {
LAB_141648760:
            local_c8 = 0;
            puStack_c0 = (uint *)0x0;
            lVar14 = (longlong)iVar11 * 0x130;
            lVar7 = *plVar3;
            if (*(int *)(lVar14 + 8 + lVar7) == 0) {
              psVar12 = &DAT_143f3eda8;
            }
            else {
              psVar12 = *(short **)(lVar14 + lVar7);
            }
            local_a0 = 0;
            local_a8 = 0;
            if ((psVar12 != (short *)0x0) && (*psVar12 != 0)) {
              lVar7 = -1;
              do {
                lVar1 = lVar7 + 1;
                lVar7 = lVar7 + 1;
              } while (psVar12[lVar1] != 0);
              uVar4 = (int)lVar7 + 1;
              local_a0 = (ulonglong)uVar4;
              if (0 < (int)uVar4) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
              }
              FGenericPlatformString::Memcpy(local_a8,psVar12,(longlong)(int)uVar4 * 2);
            }
            local_c8 = 0;
            puStack_c0 = (uint *)0x0;
            FConfigFile::Write(*plVar3 + 0x10 + lVar14,&local_a8,1,&local_c8);
            if (local_c8 != 0) {
              FMemory::Free();
            }
            if (local_a8 != 0) {
              FMemory::Free();
            }
          }
          else {
            puVar8 = (undefined8 *)((longlong)iVar11 * 0x130 + *local_98);
            if (iVar5 == 0) {
              puVar10 = &DAT_143f3eda8;
            }
            else {
              puVar10 = (undefined2 *)*param_3;
            }
            if (*(int *)(puVar8 + 1) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = (undefined2 *)*puVar8;
            }
            iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
            if (iVar5 == 0) goto LAB_141648760;
          }
          uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_90._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
          iVar11 = uStack_80._4_4_;
        } while (uStack_80._4_4_ < (int)local_88[6]);
        if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
          TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
        }
      }
    }
    if ((param_2 != '\0') && (*(char *)(param_1 + 0x58) == '\0')) {
      iVar11 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar11 = 0;
      }
      if (iVar11 == 0) {
        TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
        ::Empty(param_1 + 8,0);
      }
      else {
        TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 8,param_3);
      }
    }
  }
  return;
}



// FUNCTION 1416488d0 FUN_1416488d0 body=797 status=ok
// SIG undefined FUN_1416488d0(void)

undefined8 FUN_1416488d0(undefined8 param_1,undefined8 *param_2,short *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  uint *puVar12;
  longlong *plVar13;
  undefined8 local_b8;
  uint *puStack_b0;
  undefined4 local_a8;
  int iStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  int local_98 [4];
  longlong *local_88;
  undefined8 uStack_80;
  uint *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  undefined2 *puStack_40;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  plVar3 = (longlong *)FConfigCacheIni::Find(param_1,param_4,0);
  if (plVar3 != (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    local_b8 = (longlong *)0x0;
    puStack_b0 = (uint *)0x0;
    plVar6 = plVar13;
    if ((param_3 != (short *)0x0) && (plVar6 = (longlong *)0x0, *param_3 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (param_3[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      puStack_b0 = (uint *)(ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      }
      plVar6 = local_b8;
      FGenericPlatformString::Memcpy(local_b8,param_3,(longlong)(int)uVar8 * 2);
    }
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar3,local_98,&local_b8);
    plVar4 = plVar13;
    if (local_98[0] != -1) {
      plVar4 = (longlong *)((longlong)local_98[0] * 0xb8 + *plVar3);
    }
    plVar3 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = plVar13;
    }
    if (plVar6 != (longlong *)0x0) {
      FMemory::Free(plVar6);
    }
    if (plVar3 != (longlong *)0x0) {
      iVar5 = (int)plVar3[5];
      puStack_b0 = (uint *)(plVar3 + 2);
      local_b8 = (longlong *)0x100000000;
      iStack_a4 = 0;
      uStack_a0 = 0;
      if (iVar5 != 0) {
        puVar12 = (uint *)plVar3[4];
        if ((uint *)plVar3[4] == (uint *)0x0) {
          puVar12 = puStack_b0;
        }
        uVar8 = *puVar12;
        plVar6 = plVar13;
        plVar4 = plVar13;
        while (uVar8 == 0) {
          iVar2 = (int)plVar6;
          uStack_a0 = (int)plVar4 + 0x20;
          plVar4 = (longlong *)(ulonglong)uStack_a0;
          plVar6 = (longlong *)(ulonglong)(iVar2 + 1U);
          uVar1 = (ulonglong)local_b8 >> 0x20;
          local_b8 = (longlong *)CONCAT44((int)uVar1,iVar2 + 1U);
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar2) goto LAB_141648a5f;
          uVar8 = puVar12[(longlong)iVar2 + 1];
        }
        uVar8 = -uVar8 & uVar8;
        iVar2 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        local_b8 = (longlong *)CONCAT44(uVar8,SUB84(local_b8,0));
        if (uVar8 == 0) {
          iVar2 = 0x20;
        }
        else {
          iVar2 = 0x1f - iVar2;
        }
        iStack_a4 = (uStack_a0 - iVar2) + 0x1f;
        if (iVar5 < iStack_a4) {
LAB_141648a5f:
          iStack_a4 = iVar5;
        }
      }
      local_a8 = 0xffffffff;
      uStack_70 = CONCAT44(iStack_a4,0xffffffff);
      auStack_30._8_4_ = uStack_a0;
      auStack_30._0_8_ = uStack_70;
      auStack_30._12_4_ = uStack_9c;
      puStack_40 = (undefined2 *)local_b8;
      local_50 = 0;
      local_20._0_4_ = SUB84(plVar3,0);
      local_20._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
      uStack_80 = (undefined2 *)local_b8;
      local_68._8_4_ = (undefined4)local_20;
      local_68._0_8_ = auStack_30._8_8_;
      local_68._12_4_ = local_20._4_4_;
      iVar5 = iStack_a4;
      local_88 = plVar3;
      local_78 = puStack_b0;
      local_58 = plVar3;
      local_48 = plVar3;
      puStack_38 = puStack_b0;
      local_20 = plVar3;
      if (iStack_a4 < (int)plVar3[5]) {
        do {
          lVar11 = (longlong)iVar5 * 0x30 + *local_88;
          lVar9 = 0x18;
          iVar5 = *(int *)(lVar11 + 0x20) + -1;
          if (*(int *)(lVar11 + 0x20) == 0) {
            iVar5 = 0;
          }
          if (iVar5 < 1) {
            lVar9 = 8;
          }
          if (*(int *)(lVar9 + 8 + lVar11) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = *(undefined2 **)(lVar9 + lVar11);
          }
          lVar9 = FName::GetComparisonNameEntry(lVar11);
          if (lVar9 == 0) {
            local_b8 = (longlong *)0x0;
            puStack_b0 = (uint *)0xa;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
            FGenericPlatformString::Memcpy(local_b8,L"*INVALID*",0x14);
          }
          else {
            FNameEntry::GetPlainNameString(lVar9,&local_b8);
          }
          puVar7 = &DAT_143f3eda8;
          if ((int)puStack_b0 != 0) {
            puVar7 = (undefined2 *)local_b8;
          }
          plVar3 = plVar13;
          if (*(int *)(param_2 + 1) != 0) {
            plVar3 = (longlong *)*param_2;
          }
          (**(code **)(*plVar3 + 0x38))(plVar3,puVar7,puVar10);
          if (local_b8 != (longlong *)0x0) {
            FMemory::Free();
          }
          uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_80._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
          iVar5 = uStack_70._4_4_;
        } while (uStack_70._4_4_ < (int)local_78[6]);
        if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
          TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141648bf0 FromCStringWide body=704 status=ok
// SIG undefined FromCStringWide(void)

bool FToBoolHelper::FromCStringWide(wchar_t *param_1)

{
  wchar_t _C;
  wint_t wVar1;
  wint_t wVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  wint_t *pwVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  
  pwVar6 = &DAT_144cc4880;
  do {
    wVar1 = *(wint_t *)((longlong)(param_1 + -0xa2662440) + (longlong)pwVar6);
    if ((wVar1 == 0) && (*pwVar6 == 0)) {
      return true;
    }
    if (wVar1 != *pwVar6) {
      wVar1 = towlower(wVar1);
      wVar2 = towlower(*pwVar6);
      if (wVar1 != wVar2) {
        if (wVar1 == wVar2) {
          return true;
        }
        pwVar6 = &DAT_144cc4890;
        do {
          wVar1 = *(wint_t *)((longlong)(param_1 + -0xa2662448) + (longlong)pwVar6);
          if ((wVar1 == 0) && (*pwVar6 == 0)) {
            return true;
          }
          if (wVar1 != *pwVar6) {
            wVar1 = towlower(wVar1);
            wVar2 = towlower(*pwVar6);
            if (wVar1 != wVar2) {
              if (wVar1 == wVar2) {
                return true;
              }
              pwVar6 = &DAT_144cc4898;
              do {
                wVar1 = *(wint_t *)((longlong)(param_1 + -0xa266244c) + (longlong)pwVar6);
                if ((wVar1 == 0) && (*pwVar6 == 0)) {
                  return true;
                }
                if (wVar1 != *pwVar6) {
                  wVar1 = towlower(wVar1);
                  wVar2 = towlower(*pwVar6);
                  if (wVar1 != wVar2) {
                    if (wVar1 != wVar2) {
                      puVar4 = (undefined8 *)FText::ToString(&DAT_1468e2308);
                      puVar8 = &DAT_143f3eda8;
                      if (*(int *)(puVar4 + 1) == 0) {
                        puVar5 = &DAT_143f3eda8;
                      }
                      else {
                        puVar5 = (undefined2 *)*puVar4;
                      }
                      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(param_1,puVar5);
                      if (iVar3 != 0) {
                        puVar4 = (undefined8 *)FText::ToString(&DAT_1468e22d8);
                        if (*(int *)(puVar4 + 1) == 0) {
                          puVar5 = &DAT_143f3eda8;
                        }
                        else {
                          puVar5 = (undefined2 *)*puVar4;
                        }
                        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(param_1,puVar5);
                        if (iVar3 != 0) {
                          pwVar7 = L"False";
                          do {
                            _C = *(wchar_t *)((longlong)(param_1 + -0xa2662450) + (longlong)pwVar7);
                            if ((_C == L'\0') && (*pwVar7 == L'\0')) {
                              return false;
                            }
                            if (_C != *pwVar7) {
                              wVar1 = towlower(_C);
                              wVar2 = towlower(*pwVar7);
                              if (wVar1 != wVar2) {
                                if (wVar1 == wVar2) {
                                  return false;
                                }
                                pwVar6 = &DAT_144cc48ac;
                                do {
                                  wVar1 = *(wint_t *)
                                           ((longlong)(param_1 + -0xa2662456) + (longlong)pwVar6);
                                  if ((wVar1 == 0) && (*pwVar6 == 0)) {
                                    return false;
                                  }
                                  if (wVar1 != *pwVar6) {
                                    wVar1 = towlower(wVar1);
                                    wVar2 = towlower(*pwVar6);
                                    if (wVar1 != wVar2) {
                                      if (wVar1 == wVar2) {
                                        return false;
                                      }
                                      pwVar6 = &DAT_144cc48b8;
                                      do {
                                        wVar1 = *(wint_t *)
                                                 ((longlong)(param_1 + -0xa266245c) +
                                                 (longlong)pwVar6);
                                        if ((wVar1 == 0) && (*pwVar6 == 0)) {
                                          return false;
                                        }
                                        if (wVar1 != *pwVar6) {
                                          wVar1 = towlower(wVar1);
                                          wVar2 = towlower(*pwVar6);
                                          if (wVar1 != wVar2) {
                                            if (wVar1 == wVar2) {
                                              return false;
                                            }
                                            puVar4 = (undefined8 *)FText::ToString(&DAT_1468e2320);
                                            if (*(int *)(puVar4 + 1) == 0) {
                                              puVar5 = &DAT_143f3eda8;
                                            }
                                            else {
                                              puVar5 = (undefined2 *)*puVar4;
                                            }
                                            iVar3 = FGenericPlatformStricmp::
                                                    Stricmp<wchar_t,wchar_t>(param_1,puVar5);
                                            if (iVar3 == 0) {
                                              return false;
                                            }
                                            puVar4 = (undefined8 *)FText::ToString(&DAT_1468e22f0);
                                            if (*(int *)(puVar4 + 1) != 0) {
                                              puVar8 = (undefined2 *)*puVar4;
                                            }
                                            iVar3 = FGenericPlatformStricmp::
                                                    Stricmp<wchar_t,wchar_t>(param_1,puVar8);
                                            if (iVar3 == 0) {
                                              return false;
                                            }
                                            iVar3 = _wtoi(param_1);
                                            return iVar3 != 0;
                                          }
                                        }
                                        pwVar6 = pwVar6 + 1;
                                      } while( true );
                                    }
                                  }
                                  pwVar6 = pwVar6 + 1;
                                } while( true );
                              }
                            }
                            pwVar7 = pwVar7 + 1;
                          } while( true );
                        }
                      }
                    }
                    return true;
                  }
                }
                pwVar6 = pwVar6 + 1;
              } while( true );
            }
          }
          pwVar6 = pwVar6 + 1;
        } while( true );
      }
    }
    pwVar6 = pwVar6 + 1;
  } while( true );
}



// FUNCTION 141648eb0 FUN_141648eb0 body=1812 status=ok
// SIG undefined FUN_141648eb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141648eb0(longlong *param_1,undefined8 *param_2,undefined8 param_3,char param_4,
                       undefined1 param_5)

{
  int *piVar1;
  longlong *plVar2;
  wchar_t wVar3;
  uint uVar4;
  void *_Src;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  byte bVar9;
  char cVar10;
  wint_t wVar11;
  wint_t wVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined2 *puVar19;
  wchar_t *pwVar20;
  undefined2 *puVar21;
  uint uVar22;
  uint *puVar23;
  longlong lVar24;
  undefined1 auStack_1b8 [32];
  byte local_198;
  uint local_190;
  uint uStack_18c;
  uint *puStack_188;
  undefined4 local_180;
  undefined8 uStack_17c;
  undefined4 uStack_174;
  undefined8 *local_170;
  undefined2 *local_168;
  int local_160;
  undefined4 local_15c;
  undefined4 *local_158;
  ulonglong *puStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  uint *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  int local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  longlong *local_100;
  undefined8 uStack_f8;
  uint *puStack_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [16];
  undefined4 local_70 [4];
  undefined1 local_60 [8];
  longlong *local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_170 = param_2;
  local_118 = param_3;
  uVar15 = LoadIniFileHierarchy(param_3,param_1[0x16]);
  local_198 = (byte)uVar15;
  if (local_198 != 0) {
    if (param_4 != '\0') {
      LoadAnIniFile(param_2,param_1);
    }
    bVar7 = false;
    puVar16 = (undefined2 *)0x0;
    uVar22 = 0;
    bVar6 = true;
    if (param_4 != '\0') {
      iVar14 = (int)param_1[5];
      puStack_188 = (uint *)(param_1 + 2);
      uStack_18c = 1;
      local_190 = 0;
      uStack_17c = 0;
      if (iVar14 != 0) {
        puVar23 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar23 = puStack_188;
        }
        uVar4 = *puVar23;
        puVar19 = puVar16;
        puVar21 = puVar16;
        while (uVar4 == 0) {
          iVar13 = (int)puVar19;
          uVar22 = (int)puVar21 + 0x20;
          puVar21 = (undefined2 *)(ulonglong)uVar22;
          local_190 = iVar13 + 1;
          puVar19 = (undefined2 *)(ulonglong)local_190;
          uStack_17c = (ulonglong)uVar22 << 0x20;
          if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar13) goto LAB_141648fe7;
          uVar4 = puVar23[(longlong)iVar13 + 1];
        }
        uStack_18c = -uVar4 & uVar4;
        local_120 = 0x1f;
        if (uStack_18c != 0) {
          for (; uStack_18c >> local_120 == 0; local_120 = local_120 + -1) {
          }
        }
        if (uStack_18c == 0) {
          iVar13 = 0x20;
        }
        else {
          iVar13 = 0x1f - local_120;
        }
        iVar13 = (uVar22 - iVar13) + 0x1f;
        uStack_17c._4_4_ = (undefined4)((ulonglong)uStack_17c >> 0x20);
        uStack_17c = CONCAT44(uStack_17c._4_4_,iVar13);
        if (iVar14 < iVar13) {
LAB_141648fe7:
          uStack_17c = CONCAT44(uStack_17c._4_4_,iVar14);
        }
      }
      local_180 = 0xffffffff;
      uStack_140 = CONCAT44(uStack_18c,local_190);
      uStack_e8 = 0xffffffff;
      iStack_e4 = (int)uStack_17c;
      uStack_e0 = uStack_17c._4_4_;
      uStack_dc = uStack_174;
      uStack_130 = CONCAT44((int)uStack_17c,0xffffffff);
      local_128 = uStack_17c._4_4_;
      uStack_124 = uStack_174;
      iVar13 = (int)uStack_17c;
      local_148 = param_1;
      local_138 = puStack_188;
      local_100 = param_1;
      uStack_f8 = uStack_140;
      puStack_f0 = puStack_188;
      if ((int)uStack_17c < iVar14) {
LAB_14164903c:
        local_168 = (undefined2 *)0x0;
        puVar18 = (undefined8 *)((longlong)iVar13 * 0xb8 + *local_148);
        local_160 = *(int *)(puVar18 + 1);
        lVar24 = (longlong)local_160;
        _Src = (void *)*puVar18;
        if (local_160 == 0) {
          local_15c = 0;
          puVar19 = puVar16;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_168,local_160,0);
          puVar19 = local_168;
          _guard_xfg_dispatch_icall_nop(local_168,_Src,lVar24 * 2);
        }
        iVar14 = local_160;
        pwVar20 = L"IniVersion";
        puVar21 = &DAT_143f3eda8;
        if (local_160 != 0) {
          puVar21 = puVar19;
        }
        do {
          wVar3 = *(wchar_t *)((longlong)pwVar20 + (longlong)(puVar21 + -0xa2662460));
          if ((wVar3 == L'\0') && (*pwVar20 == L'\0')) goto LAB_14164918c;
          if (wVar3 != *pwVar20) {
            wVar11 = towlower(wVar3);
            wVar12 = towlower(*pwVar20);
            if (wVar11 != wVar12) goto LAB_1416490ec;
          }
          pwVar20 = pwVar20 + 1;
        } while( true );
      }
LAB_141649239:
      if (DAT_1468c21f6 == '\0') {
        LowLevelFatalErrorHandler
                  ("Unknown",0x1d,
                   L"Attempting to get the command line but it hasn\'t been initialized yet.");
        FDebug::AssertFailed
                  (&DAT_144cc26c3,"Unknown",0x1d,
                   L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar10 = FParse::Param(&DAT_1468c2210,L"REGENERATEINIS");
      if (cVar10 == '\x01') {
LAB_141649199:
        bVar7 = true;
        bVar6 = true;
      }
      else {
        if (DAT_1468c21f6 == '\0') {
          LowLevelFatalErrorHandler
                    ("Unknown",0x1d,
                     L"Attempting to get the command line but it hasn\'t been initialized yet.");
          FDebug::AssertFailed
                    (&DAT_144cc26c3,"Unknown",0x1d,
                     L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        cVar10 = FParse::Param(&DAT_1468c2210,L"NOAUTOINIUPDATE");
        if (cVar10 == '\0') {
          bVar6 = true;
          bVar7 = false;
        }
        else {
          iVar14 = DAT_1464af7f0;
          if (1 < DAT_1464af7f0 - 2U) {
            lVar24 = FText::FromString(&local_100,param_2);
            uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_98,
                                L"Your ini ({0}) file is outdated. Do you want to automatically update it saving the previous version? Not doing so might cause crashes!"
                                ,L"Core",L"IniFileOutOfDate");
            puVar18 = (undefined8 *)FTextFormat::FTextFormat(local_80,uVar17);
            local_70[0] = 4;
            FText::FText(local_60,lVar24);
            local_110 = *puVar18;
            local_158 = local_70;
            puStack_150 = &local_40;
            local_108 = puVar18[1];
            local_48 = '\x01';
            if (local_108 != 0) {
              LOCK();
              *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
              UNLOCK();
            }
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8,&local_158);
            uVar17 = FText::Format(local_b0,&local_110);
            FText::FText(local_c8,uVar17);
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_a8 + 1;
              lVar8 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_a8)(local_a8);
                LOCK();
                piVar1 = (int *)((longlong)local_a8 + 0xc);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*local_a8 + 8))(local_a8,1);
                }
              }
            }
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8);
            if ((local_48 != '\0') && (local_48 = '\0', local_58 != (longlong *)0x0)) {
              LOCK();
              plVar5 = local_58 + 1;
              lVar8 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_58)(local_58);
                LOCK();
                piVar1 = (int *)((longlong)local_58 + 0xc);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*local_58 + 8))(local_58,1);
                }
              }
            }
            plVar5 = (longlong *)puVar18[1];
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar5 + 1;
              lVar8 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            plVar5 = *(longlong **)(lVar24 + 8);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar5 + 1;
              lVar24 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar24 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            iVar14 = FUN_1416786b0(5,local_c8);
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_c0 + 1;
              lVar24 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar24 == 1) {
                (**(code **)*local_c0)(local_c0);
                LOCK();
                piVar1 = (int *)((longlong)local_c0 + 0xc);
                iVar13 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*local_c0 + 8))(local_c0,1);
                }
              }
            }
            if (local_90 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_90 + 1;
              lVar24 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar24 == 1) {
                (**(code **)*local_90)(local_90);
                LOCK();
                piVar1 = (int *)((longlong)local_90 + 0xc);
                iVar13 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*local_90 + 8))(local_90,1);
                }
              }
            }
            if (iVar14 - 2U < 2) {
              DAT_1464af7f0 = iVar14;
            }
          }
          bVar6 = iVar14 - 1U < 2;
          bVar7 = false;
        }
      }
    }
    if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) ||
       (uVar22 = *(int *)(param_1[0x16] + 8) - *(int *)(param_1[0x16] + 0x34),
       uVar15 = (ulonglong)uVar22, uVar22 != 0)) {
      if (bVar7) {
        bVar9 = LoadIniFileHierarchy(local_118,param_1,param_5);
        lVar24 = param_1[0x16];
        if (lVar24 != 0) {
          FConfigFile::~FConfigFile(lVar24);
          FMemory::operator_delete(lVar24,0x118);
        }
        lVar24 = operator_new(0x118);
        if (lVar24 != 0) {
          puVar16 = (undefined2 *)FConfigFile::FConfigFile(lVar24,param_1);
        }
        param_1[0x16] = (longlong)puVar16;
        *(undefined1 *)(param_1 + 10) = 1;
      }
      else {
        bVar9 = local_198;
        if (bVar6) {
          FConfigFile::AddMissingProperties(param_1,param_1[0x16]);
          *(undefined1 *)(param_1 + 10) = 1;
          bVar9 = local_198;
        }
      }
      puVar18 = local_170;
      puVar16 = &DAT_143f3eda8;
      if (*(int *)(local_170 + 1) == 0) {
        puVar19 = &DAT_143f3eda8;
      }
      else {
        puVar19 = (undefined2 *)*local_170;
      }
      cVar10 = IsUsingLocalIniFile(puVar19,0);
      if (cVar10 == '\0') {
        if (*(int *)(puVar18 + 1) != 0) {
          puVar16 = (undefined2 *)*puVar18;
        }
        FUN_1416778c0(puVar16);
      }
      return (ulonglong)bVar9;
    }
  }
  return uVar15 & 0xffffffffffffff00;
LAB_1416490ec:
  if (wVar11 != wVar12) {
    pwVar20 = L"Engine.Engine";
    puVar21 = &DAT_143f3eda8;
    if (iVar14 != 0) {
      puVar21 = puVar19;
    }
    do {
      wVar3 = *(wchar_t *)((longlong)pwVar20 + (longlong)(puVar21 + -0xa266246c));
      if ((wVar3 == L'\0') && (*pwVar20 == L'\0')) break;
      if (wVar3 != *pwVar20) {
        wVar11 = towlower(wVar3);
        wVar12 = towlower(*pwVar20);
        if (wVar11 != wVar12) goto LAB_141649146;
      }
      pwVar20 = pwVar20 + 1;
    } while( true );
  }
  goto LAB_14164918c;
LAB_141649146:
  if (wVar11 != wVar12) {
    if (puVar19 != (undefined2 *)0x0) {
      FMemory::Free(puVar19);
    }
    uStack_130 = CONCAT44(uStack_130._4_4_,(uint)uStack_130 & ~uStack_140._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_140);
    param_2 = local_170;
    iVar13 = uStack_130._4_4_;
    if ((int)local_138[6] <= uStack_130._4_4_) goto LAB_141649239;
    goto LAB_14164903c;
  }
LAB_14164918c:
  if (puVar19 != (undefined2 *)0x0) {
    FMemory::Free(puVar19);
  }
  goto LAB_141649199;
}



// FUNCTION 1416495d0 GenerateExportedPropertyLine body=382 status=ok
// SIG undefined GenerateExportedPropertyLine(void)

undefined8
FConfigFile::GenerateExportedPropertyLine
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  short *psVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  short *psVar10;
  bool bVar11;
  longlong local_18 [2];
  
  bVar4 = false;
  puVar8 = &DAT_143f3eda8;
  bVar3 = false;
  if (*(int *)(param_3 + 1) == 0) {
    psVar10 = &DAT_143f3eda8;
  }
  else {
    psVar10 = (short *)*param_3;
  }
  sVar5 = *psVar10;
  psVar6 = psVar10;
  while( true ) {
    if (sVar5 == 0) {
      if (*(int *)(param_3 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*param_3;
      }
      if (*(int *)(param_2 + 1) != 0) {
        puVar8 = (undefined2 *)*param_2;
      }
      FString::PrintfImpl(param_1,L"%s=%s\r\n",puVar8,puVar9);
      return param_1;
    }
    sVar2 = psVar6[1];
    psVar1 = psVar6 + 1;
    if (sVar5 == 0x22) break;
    if (((sVar5 != 0x5c) || (!bVar3)) || (bVar4)) goto LAB_14164963b;
    bVar4 = true;
LAB_14164969e:
    if (sVar2 == 0) goto LAB_1416496c8;
    sVar5 = sVar2;
    psVar6 = psVar1;
    if (!bVar4) {
LAB_14164964e:
      if (sVar2 == 0xd) goto LAB_1416496c8;
      bVar11 = sVar2 == 10;
LAB_141649658:
      sVar5 = sVar2;
      psVar6 = psVar1;
      if (bVar11) {
LAB_1416496c8:
        puVar7 = (undefined8 *)FString::ReplaceCharWithEscapedChar(param_3,local_18,0);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar7;
        }
        if (*(int *)(param_2 + 1) != 0) {
          puVar8 = (undefined2 *)*param_2;
        }
        FString::PrintfImpl(param_1,L"%s=\"%s\"\r\n",puVar8,puVar9);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
        return param_1;
      }
    }
  }
  if (!bVar4) {
    bVar3 = !bVar3;
  }
LAB_14164963b:
  bVar4 = false;
  if (sVar5 == 0x20) {
    if (psVar6 != psVar10) {
      bVar11 = sVar2 == 0;
LAB_14164964c:
      if (!bVar11) goto LAB_14164964e;
    }
    goto LAB_1416496c8;
  }
  if (sVar5 == 0x22) {
    bVar11 = psVar6 == psVar10;
    goto LAB_14164964c;
  }
  if (sVar5 == 0x5c) goto LAB_14164969e;
  if (((sVar5 - 0x7bU & 0xfffd) == 0) && (!bVar3)) goto LAB_1416496c8;
  if ((sVar5 != 0x2f) || (sVar2 != 0x2f)) goto LAB_14164964e;
  bVar11 = !bVar3;
  goto LAB_141649658;
}



// FUNCTION 141649750 FUN_141649750 body=1466 status=ok
// SIG undefined FUN_141649750(void)

void FUN_141649750(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  void *_Src;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  int local_res8;
  void *local_198;
  int local_190;
  undefined4 local_18c;
  longlong *local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  void *local_168;
  int local_160;
  undefined4 local_15c;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  undefined2 *local_138;
  int local_130;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  longlong local_f8 [2];
  longlong local_e8 [2];
  undefined4 local_d8;
  longlong local_d0 [2];
  longlong local_c0 [2];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [4];
  
  lVar11 = 0;
  local_178 = (longlong *)0x0;
  local_170 = 0;
  local_188 = (longlong *)0x0;
  local_180 = 0;
  (**(code **)(*param_1 + 0x88))(param_1,&local_178);
  (**(code **)(*param_1 + 0x98))(param_1,&local_138);
  local_res8 = 0;
  if (0 < (int)local_180) {
    do {
      puVar10 = local_138;
      _Src = (void *)0x0;
      lVar7 = (longlong)local_130;
      local_160 = local_130;
      local_168 = (void *)0x0;
      if (local_130 == 0) {
        local_15c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_168,local_130,0);
        _Src = local_168;
        _guard_xfg_dispatch_icall_nop(local_168,puVar10,lVar7 * 2);
      }
      iVar8 = local_160;
      local_190 = (int)param_1[3];
      lVar7 = (longlong)local_190;
      local_198 = (void *)0x0;
      pvVar2 = (void *)param_1[2];
      if (local_190 == 0) {
        local_18c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_198,local_190,0);
        _guard_xfg_dispatch_icall_nop(local_198,pvVar2,lVar7 * 2);
      }
      iVar1 = *(int *)((longlong)local_188 + lVar11 + 8);
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      if (iVar6 != 0) {
        if (*(int *)((longlong)local_178 + lVar11 + 8) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = *(undefined2 **)((longlong)local_178 + lVar11);
        }
        puVar9 = &DAT_143f3eda8;
        if (local_130 != 0) {
          puVar9 = local_138;
        }
        FString::PrintfImpl(&local_158,L"%s.%s",puVar9,puVar10);
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
        _Src = local_158;
        iVar8 = (int)local_150;
        local_15c = local_150._4_4_;
        local_158 = (void *)0x0;
        local_150 = 0;
        if (*(int *)((longlong)local_188 + lVar11 + 8) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = *(undefined2 **)((longlong)local_188 + lVar11);
        }
        if ((int)param_1[3] == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)param_1[2];
        }
        FString::PrintfImpl(&local_148,L"%s %s",puVar9,puVar10);
        if (local_198 != (void *)0x0) {
          FMemory::Free();
        }
        local_198 = local_148;
        local_190 = (int)local_140;
        local_18c = local_140._4_4_;
        local_140 = 0;
        local_148 = (void *)0x0;
      }
      plVar12 = local_188 + (longlong)local_res8 * 2;
      local_88 = (**(code **)(*param_1 + 0x80))(param_1,local_60,plVar12);
      local_90 = (**(code **)(*param_1 + 0x78))(param_1,local_70,plVar12);
      uVar3 = (**(code **)(*param_1 + 0x68))(param_1,&local_198);
      local_98 = (**(code **)(*param_1 + 0x58))(param_1,local_80);
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      uVar5 = (**(code **)(*param_1 + 8))(param_1);
      local_128 = (void *)0x0;
      local_120 = iVar8;
      if (iVar8 == 0) {
        local_11c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,iVar8,0);
        _guard_xfg_dispatch_icall_nop(local_128,_Src,(longlong)iVar8 * 2);
      }
      local_118 = (void *)0x0;
      local_110 = iVar8;
      if (iVar8 == 0) {
        local_10c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,iVar8,0);
        _guard_xfg_dispatch_icall_nop(local_118,_Src,(longlong)iVar8 * 2);
      }
      pvVar2 = local_198;
      lVar7 = (longlong)local_190;
      local_108 = (void *)0x0;
      local_100 = local_190;
      if (local_190 == 0) {
        local_fc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,local_190,0);
        _guard_xfg_dispatch_icall_nop(local_108,pvVar2,lVar7 * 2);
      }
      FString::FString(local_f8,plVar12);
      FString::FString(local_e8,local_98);
      local_d8 = uVar3;
      FString::FString(local_d0,local_90);
      FString::FString(local_c0,local_88);
      local_a8 = 0;
      local_b0 = uVar5;
      local_ac = uVar4;
      if (local_80[0] != 0) {
        FMemory::Free();
      }
      if (local_70[0] != 0) {
        FMemory::Free();
      }
      if (local_60[0] != 0) {
        FMemory::Free();
      }
      iVar8 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::
        ResizeGrow(param_2,iVar8);
      }
      lVar7 = (longlong)iVar8 * 0x88 + *param_2;
      FString::FString(lVar7,&local_128);
      FString::FString(lVar7 + 0x10,&local_118);
      FString::FString(lVar7 + 0x20,&local_108);
      FString::FString(lVar7 + 0x30,local_f8);
      FString::FString(lVar7 + 0x40,local_e8);
      *(undefined4 *)(lVar7 + 0x50) = local_d8;
      FString::FString(lVar7 + 0x58,local_d0);
      FString::FString(lVar7 + 0x68,local_c0);
      *(undefined4 *)(lVar7 + 0x78) = local_b0;
      *(undefined4 *)(lVar7 + 0x7c) = local_ac;
      *(undefined4 *)(lVar7 + 0x80) = local_a8;
      if (local_c0[0] != 0) {
        FMemory::Free();
      }
      if (local_d0[0] != 0) {
        FMemory::Free();
      }
      if (local_e8[0] != 0) {
        FMemory::Free();
      }
      if (local_f8[0] != 0) {
        FMemory::Free();
      }
      if (local_108 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_118 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_128 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_198 != (void *)0x0) {
        FMemory::Free();
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
      local_res8 = local_res8 + 1;
      lVar11 = lVar11 + 0x10;
    } while (local_res8 < (int)local_180);
  }
  iVar8 = (int)local_180;
  plVar12 = local_188;
  if (local_138 != (undefined2 *)0x0) {
    FMemory::Free();
    iVar8 = (int)local_180;
    plVar12 = local_188;
  }
  for (; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
  plVar12 = local_178;
  for (iVar8 = (int)local_170; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free(local_178);
  }
  return;
}



// FUNCTION 141649d10 FUN_141649d10 body=123 status=ok
// SIG undefined FUN_141649d10(void)

undefined * FUN_141649d10(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e2760) {
    _Init_thread_header(&DAT_1468e2760);
    if (DAT_1468e2760 == -1) {
      FAutomationTestFramework::FAutomationTestFramework(&DAT_1468e2580);
      atexit(`FAutomationTestFramework::Get'::`2'::_dynamic_atexit_destructor_for__Framework__);
      _Init_thread_footer(&DAT_1468e2760);
      return &DAT_1468e2580;
    }
  }
  return &DAT_1468e2580;
}



// FUNCTION 141649d90 Get body=81 status=ok
// SIG undefined Get(void)

undefined * FCommandLine::Get(void)

{
  if (DAT_1468c21f6 == '\0') {
    LowLevelFatalErrorHandler
              ("Unknown",0x1d,
               L"Attempting to get the command line but it hasn\'t been initialized yet.");
    FDebug::AssertFailed
              (&DAT_144cc26c3,"Unknown",0x1d,
               L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  return &DAT_1468c2210;
}



// FUNCTION 141649df0 Get body=64 status=ok
// SIG undefined Get(void)

void FScriptExceptionHandler::Get(void)

{
  undefined1 local_res8 [32];
  undefined1 *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = &LAB_1416436a0;
  FUN_1415d8310(&local_18,&DAT_1464af890);
  return;
}



// FUNCTION 141649e30 FUN_141649e30 body=1562 status=ok
// SIG undefined FUN_141649e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141649e30(void)

{
  longlong ***ppplVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong ****pppplVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong ****pppplVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined2 *puVar13;
  uint uVar14;
  longlong ****pppplVar16;
  undefined1 auStack_288 [32];
  undefined1 local_268;
  ulonglong local_260;
  undefined1 local_258;
  undefined1 local_250;
  undefined1 local_248;
  undefined2 *local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong ***local_228;
  undefined8 local_220;
  int local_218;
  int local_214;
  int local_210 [2];
  longlong local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8 [2];
  undefined1 local_1d8 [8];
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  undefined1 *local_1b8;
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  longlong local_1a0 [2];
  longlong local_190 [2];
  longlong local_180 [2];
  longlong local_170 [3];
  longlong local_158 [36];
  ulonglong local_38;
  longlong ****pppplVar15;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468e28a0) && (_Init_thread_header(&DAT_1468e28a0), DAT_1468e28a0 == -1))
  {
    atexit(`FDataDrivenPlatformInfoRegistry::GetAllPlatformInfos'::`2'::
           _dynamic_atexit_destructor_for__DataDrivenPlatforms__);
    _Init_thread_footer(&DAT_1468e28a0);
  }
  if (DAT_1468e289c == '\0') {
    pppplVar16 = (longlong ****)0x0;
    local_238 = (longlong *)0x0;
    local_230 = 0;
    plVar4 = (longlong *)FUN_1415c3d50();
    puVar5 = (undefined8 *)FPaths::EngineConfigDir(local_1e8);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar5;
    }
    local_258 = 1;
    local_260 = local_260 & 0xffffffffffffff00;
    local_268 = 1;
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_238,puVar11,L"DataDrivenPlatformInfo.ini");
    if (local_1e8[0] != 0) {
      FMemory::Free();
    }
    if (0 < (int)local_230) {
      local_1c0 = local_1e8;
      local_1b8 = local_1d8;
      pppplVar15 = pppplVar16;
      do {
        FConfigFile::FConfigFile(local_158);
        puVar5 = (undefined8 *)FPaths::GeneratedConfigDir(local_180);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar5;
        }
        lVar9 = (longlong)(int)pppplVar15;
        puVar5 = (undefined8 *)FUN_141672d20(local_190,local_238 + lVar9 * 2);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*puVar5;
        }
        puVar5 = (undefined8 *)FUN_141671940(local_1a0,local_238 + lVar9 * 2,1);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*puVar5;
        }
        local_248 = 1;
        local_250 = 0;
        local_258 = 0;
        local_260 = 0;
        local_268 = 0;
        local_240 = puVar11;
        FConfigCacheIni::LoadExternalIniFile(local_158,puVar8,0,puVar13);
        if (local_1a0[0] != 0) {
          FMemory::Free();
        }
        if (local_190[0] != 0) {
          FMemory::Free();
        }
        if (local_180[0] != 0) {
          FMemory::Free();
        }
        uVar6 = FUN_141672d20(local_170,local_238 + lVar9 * 2);
        FPaths::GetCleanFilename(local_1e8,uVar6);
        if (local_170[0] != 0) {
          FMemory::Free();
        }
        local_1d8[0] = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        FUN_14163d5a0(&DAT_1464af840,&local_218,&local_1c0,0);
        lVar9 = (longlong)local_218 * 0x30 + DAT_1464af840;
        if (local_1d0 != 0) {
          FMemory::Free();
        }
        local_228 = (longlong ***)0x0;
        local_220 = 0;
        local_208 = 0;
        local_200 = 0x17;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
        lVar2 = local_208;
        FGenericPlatformString::Memcpy(local_208,L"DataDrivenPlatformInfo",0x2e);
        TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
        ::FindId(local_158,&local_214,&local_208);
        pppplVar7 = pppplVar16;
        if (local_214 != -1) {
          pppplVar7 = (longlong ****)((longlong)local_214 * 0xb8 + local_158[0]);
        }
        pppplVar10 = pppplVar7 + 2;
        if (pppplVar7 == (longlong ****)0x0) {
          pppplVar10 = pppplVar16;
        }
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
        if (pppplVar10 != (longlong ****)0x0) {
          plVar4 = (longlong *)FName::FName(local_1b0,L"bIsConfidential",1);
          ppplVar1 = (longlong ***)*plVar4;
          if (*(int *)(pppplVar10 + 1) != *(int *)((longlong)pppplVar10 + 0x34)) {
            pppplVar7 = (longlong ****)pppplVar10[8];
            if ((longlong ****)pppplVar10[8] == (longlong ****)0x0) {
              pppplVar7 = pppplVar10 + 7;
            }
            iVar12 = *(int *)((longlong)pppplVar7 +
                             ((longlong)((int)((ulonglong)ppplVar1 >> 0x20) + (int)ppplVar1) &
                             (longlong)*(int *)(pppplVar10 + 9) - 1U) * 4);
            if (iVar12 != -1) {
              do {
                pppplVar7 = (longlong ****)(*pppplVar10 + (longlong)iVar12 * 6);
                if (*pppplVar7 == ppplVar1) {
                  if (iVar12 != -1) goto LAB_14164a195;
                  break;
                }
                iVar12 = *(int *)(pppplVar7 + 5);
              } while (iVar12 != -1);
            }
          }
          pppplVar7 = pppplVar16;
LAB_14164a195:
          pppplVar10 = pppplVar7 + 1;
          if (pppplVar7 == (longlong ****)0x0) {
            pppplVar10 = pppplVar16;
          }
          if (pppplVar10 != (longlong ****)0x0) {
            iVar12 = *(int *)(pppplVar10 + 3) + -1;
            if (*(int *)(pppplVar10 + 3) == 0) {
              iVar12 = 0;
            }
            pppplVar7 = pppplVar10 + 2;
            if (iVar12 < 1) {
              pppplVar7 = pppplVar10;
            }
            pppplVar10 = pppplVar16;
            if (&local_228 == pppplVar7) {
LAB_14164a210:
              pppplVar7 = (longlong ****)&DAT_143f3eda8;
            }
            else {
              iVar12 = *(int *)(pppplVar7 + 1);
              ppplVar1 = *pppplVar7;
              local_220 = CONCAT44(local_220._4_4_,iVar12);
              if (iVar12 == 0) {
                local_220 = 0;
                local_220._0_4_ = 0;
                pppplVar7 = pppplVar16;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_228,iVar12,0);
                pppplVar7 = (longlong ****)local_228;
                _guard_xfg_dispatch_icall_nop(local_228,ppplVar1,(longlong)iVar12 * 2);
              }
              pppplVar10 = pppplVar7;
              if ((int)local_220 == 0) goto LAB_14164a210;
            }
            uVar3 = FToBoolHelper::FromCStringWide(pppplVar7);
            *(undefined1 *)(lVar9 + 0x10) = uVar3;
            if (pppplVar10 != (longlong ****)0x0) {
              FMemory::Free(pppplVar10);
            }
          }
        }
        local_1f8 = 0;
        local_1f0 = 0x17;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
        lVar2 = local_1f8;
        FGenericPlatformString::Memcpy(local_1f8,L"DataDrivenPlatformInfo",0x2e);
        TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
        ::FindId(local_158,local_210,&local_1f8);
        pppplVar7 = pppplVar16;
        if (local_210[0] != -1) {
          pppplVar7 = (longlong ****)((longlong)local_210[0] * 0xb8 + local_158[0]);
        }
        pppplVar10 = pppplVar7 + 2;
        if (pppplVar7 == (longlong ****)0x0) {
          pppplVar10 = pppplVar16;
        }
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
        if (pppplVar10 != (longlong ****)0x0) {
          plVar4 = (longlong *)FName::FName(local_1a8,L"IniParent",1);
          ppplVar1 = (longlong ***)*plVar4;
          if (*(int *)(pppplVar10 + 1) != *(int *)((longlong)pppplVar10 + 0x34)) {
            pppplVar7 = (longlong ****)pppplVar10[8];
            if ((longlong ****)pppplVar10[8] == (longlong ****)0x0) {
              pppplVar7 = pppplVar10 + 7;
            }
            iVar12 = *(int *)((longlong)pppplVar7 +
                             ((longlong)((int)((ulonglong)ppplVar1 >> 0x20) + (int)ppplVar1) &
                             (longlong)*(int *)(pppplVar10 + 9) - 1U) * 4);
            if (iVar12 != -1) {
              do {
                pppplVar7 = (longlong ****)(*pppplVar10 + (longlong)iVar12 * 6);
                if (*pppplVar7 == ppplVar1) {
                  if (iVar12 != -1) goto LAB_14164a326;
                  break;
                }
                iVar12 = *(int *)(pppplVar7 + 5);
              } while (iVar12 != -1);
            }
          }
          pppplVar7 = pppplVar16;
LAB_14164a326:
          pppplVar10 = pppplVar7 + 1;
          if (pppplVar7 == (longlong ****)0x0) {
            pppplVar10 = pppplVar16;
          }
          if (pppplVar10 != (longlong ****)0x0) {
            iVar12 = *(int *)(pppplVar10 + 3) + -1;
            if (*(int *)(pppplVar10 + 3) == 0) {
              iVar12 = 0;
            }
            pppplVar7 = pppplVar10 + 2;
            if (iVar12 < 1) {
              pppplVar7 = pppplVar10;
            }
            FString::operator=(lVar9 + 0x18,pppplVar7);
          }
        }
        if (local_1e8[0] != 0) {
          FMemory::Free();
        }
        FConfigFile::~FConfigFile(local_158);
        uVar14 = (int)pppplVar15 + 1;
        pppplVar15 = (longlong ****)(ulonglong)uVar14;
      } while ((int)uVar14 < (int)local_230);
    }
    DAT_1468e289c = '\x01';
    plVar4 = local_238;
    for (iVar12 = (int)local_230; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_238 != (longlong *)0x0) {
      FMemory::Free(local_238);
    }
  }
  return &DAT_1464af840;
}



// FUNCTION 14164a450 GetArray body=691 status=ok
// SIG undefined GetArray(void)

undefined4
FConfigCacheIni::GetArray
          (undefined8 param_1,short *param_2,undefined8 param_3,longlong *param_4,
          undefined8 *param_5)

{
  void *_Src;
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *local_38;
  ulonglong local_30;
  
  puVar4 = param_5;
  if (*(int *)(param_5 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_5;
  }
  uVar1 = FRemoteConfig::Get();
  FRemoteConfig::FinishRead(uVar1,puVar8);
  plVar13 = (longlong *)*param_4;
  for (iVar11 = (int)param_4[1]; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_4,0);
  }
  plVar2 = (longlong *)Find(param_1,puVar4,0);
  if (plVar2 != (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    plVar12 = plVar13;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (param_2[lVar9] != 0);
      uVar7 = (int)lVar9 + 1;
      local_30 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      plVar12 = local_38;
      FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar7 * 2);
    }
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar2,&param_5,&local_38);
    plVar3 = plVar13;
    if ((int)param_5 != -1) {
      plVar3 = (longlong *)((longlong)(int)param_5 * 0xb8 + *plVar2);
    }
    plVar2 = plVar3 + 2;
    if (plVar3 == (longlong *)0x0) {
      plVar2 = plVar13;
    }
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
    if (plVar2 != (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      local_30 = 0;
      puVar4 = (undefined8 *)FName::FName(&param_5,param_3,1);
      TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
      ::MultiFind<FDefaultAllocator>(plVar2,*puVar4,&local_38,0);
      iVar11 = (int)local_30;
      TArray<FString,FDefaultAllocator>::AddZeroed(param_4,local_30 & 0xffffffff);
      lVar9 = (longlong)(iVar11 + -1);
      plVar2 = local_38;
      plVar12 = local_38;
      if (-1 < iVar11 + -1) {
        plVar3 = local_38 + lVar9 * 4 + 3;
        do {
          lVar6 = -8;
          iVar5 = (int)*plVar3 + -1;
          if ((int)*plVar3 == 0) {
            iVar5 = 0;
          }
          if (iVar5 < 1) {
            lVar6 = -0x18;
          }
          puVar10 = (undefined8 *)(*param_4 + (longlong)plVar13);
          puVar4 = (undefined8 *)(lVar6 + (longlong)plVar3);
          if (puVar10 != puVar4) {
            iVar5 = *(int *)(puVar4 + 1);
            _Src = (void *)*puVar4;
            *(int *)(puVar10 + 1) = iVar5;
            if ((iVar5 == 0) && (*(int *)((longlong)puVar10 + 0xc) == 0)) {
              *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar10,iVar5);
              ::_guard_xfg_dispatch_icall_nop((void *)*puVar10,_Src,(longlong)iVar5 * 2);
            }
          }
          plVar3 = plVar3 + -4;
          plVar13 = plVar13 + 2;
          lVar9 = lVar9 + -1;
          plVar2 = local_38;
          plVar12 = local_38;
        } while (-1 < lVar9);
      }
      for (; plVar13 = local_38, iVar11 != 0; iVar11 = iVar11 + -1) {
        local_38 = plVar12;
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 4;
        plVar12 = local_38;
        local_38 = plVar13;
      }
      if (local_38 != (longlong *)0x0) {
        local_38 = plVar12;
        FMemory::Free(plVar13);
      }
    }
  }
  return (int)param_4[1];
}



// FUNCTION 14164a710 GetArray body=589 status=ok
// SIG undefined GetArray(void)

undefined4
FConfigFile::GetArray(longlong *param_1,short *param_2,undefined8 param_3,longlong *param_4)

{
  void *_Src;
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int local_res8 [2];
  longlong *local_38;
  ulonglong local_30;
  
  plVar11 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  plVar9 = plVar11;
  if ((param_2 != (short *)0x0) && (plVar9 = (longlong *)0x0, *param_2 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_30 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    plVar9 = local_38;
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar5 * 2);
  }
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,&local_38);
  plVar2 = plVar11;
  if (local_res8[0] != -1) {
    plVar2 = (longlong *)((longlong)local_res8[0] * 0xb8 + *param_1);
  }
  plVar7 = plVar2 + 2;
  if (plVar2 == (longlong *)0x0) {
    plVar7 = plVar11;
  }
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  if (plVar7 != (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    puVar3 = (undefined8 *)FName::FName(local_res8,param_3,1);
    TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::MultiFind<FDefaultAllocator>(plVar7,*puVar3,&local_38,0);
    lVar6 = param_4[1];
    uVar5 = (uint)local_30;
    uVar10 = (ulonglong)(int)(uint)local_30;
    iVar1 = (int)lVar6 + (uint)local_30;
    *(int *)(param_4 + 1) = iVar1;
    if (*(int *)((longlong)param_4 + 0xc) < iVar1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4);
    }
    ::_guard_xfg_dispatch_icall_nop((void *)((longlong)(int)lVar6 * 0x10 + *param_4),0,uVar10 << 4);
    lVar6 = (longlong)(int)(uVar5 - 1);
    plVar9 = local_38;
    plVar2 = local_38;
    if (-1 < (int)(uVar5 - 1)) {
      plVar7 = local_38 + lVar6 * 4 + 3;
      do {
        lVar4 = -8;
        iVar1 = (int)*plVar7 + -1;
        if ((int)*plVar7 == 0) {
          iVar1 = 0;
        }
        if (iVar1 < 1) {
          lVar4 = -0x18;
        }
        puVar8 = (undefined8 *)(*param_4 + (longlong)plVar11);
        puVar3 = (undefined8 *)(lVar4 + (longlong)plVar7);
        if (puVar8 != puVar3) {
          iVar1 = *(int *)(puVar3 + 1);
          _Src = (void *)*puVar3;
          *(int *)(puVar8 + 1) = iVar1;
          if ((iVar1 == 0) && (*(int *)((longlong)puVar8 + 0xc) == 0)) {
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,iVar1);
            ::_guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src,(longlong)iVar1 * 2);
          }
        }
        plVar7 = plVar7 + -4;
        plVar11 = plVar11 + 2;
        lVar6 = lVar6 + -1;
        plVar9 = local_38;
        plVar2 = local_38;
      } while (-1 < lVar6);
    }
    while (plVar11 = local_38, uVar5 != 0) {
      local_38 = plVar2;
      if (plVar9[2] != 0) {
        FMemory::Free();
      }
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      uVar5 = (int)uVar10 - 1;
      uVar10 = (ulonglong)uVar5;
      plVar9 = plVar9 + 4;
      plVar2 = local_38;
      local_38 = plVar11;
    }
    if (local_38 != (longlong *)0x0) {
      local_38 = plVar2;
      FMemory::Free(plVar11);
    }
  }
  return (int)param_4[1];
}



// FUNCTION 14164a960 GetBool body=103 status=ok
// SIG undefined GetBool(void)

/* WARNING: Removing unreachable block (ram,0x00014164a999) */
/* WARNING: Removing unreachable block (ram,0x00014164a9b4) */

bool FConfigCacheIni::GetBool(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *in_R9;
  
  cVar1 = GetString();
  if (cVar1 != '\0') {
    uVar2 = FToBoolHelper::FromCStringWide(&DAT_143f3eda8);
    *in_R9 = uVar2;
  }
  return cVar1 != '\0';
}



// FUNCTION 14164a9d0 GetBool body=93 status=ok
// SIG undefined GetBool(void)

/* WARNING: Removing unreachable block (ram,0x00014164a9ff) */
/* WARNING: Removing unreachable block (ram,0x00014164aa1a) */

bool FConfigFile::GetBool(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *in_R9;
  
  cVar1 = GetString();
  if (cVar1 != '\0') {
    uVar2 = FToBoolHelper::FromCStringWide(&DAT_143f3eda8);
    *in_R9 = uVar2;
  }
  return cVar1 != '\0';
}



// FUNCTION 14164aa30 FUN_14164aa30 body=135 status=ok
// SIG undefined FUN_14164aa30(void)

undefined1
FUN_14164aa30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined2 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  undefined2 *local_18;
  undefined8 local_10;
  
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  cVar2 = FConfigCacheIni::GetString(DAT_1468b6148,param_2,param_3,&local_18,param_4);
  puVar1 = local_18;
  if (cVar2 != '\0') {
    puVar4 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar4 = local_18;
    }
    uVar3 = FToBoolHelper::FromCStringWide(puVar4);
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
    return uVar3;
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_5;
}



// FUNCTION 14164aac0 FUN_14164aac0 body=147 status=ok
// SIG undefined FUN_14164aac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14164aac0(longlong param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e2570) {
    _Init_thread_header(&DAT_1468e2570);
    if (DAT_1468e2570 == -1) {
      DAT_1468e2560 = 0;
      _DAT_1468e2568 = 0;
      atexit((_func_5014 *)&LAB_143e79b00);
      _Init_thread_footer(&DAT_1468e2570);
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    return (undefined8 *)
           ((longlong)(*(int *)(param_1 + 0x40) + -1) * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  return &DAT_1468e2560;
}



// FUNCTION 14164ab60 FUN_14164ab60 body=123 status=ok
// SIG undefined FUN_14164ab60(void)

undefined * FUN_14164ab60(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e2838) {
    _Init_thread_header(&DAT_1468e2838);
    if (DAT_1468e2838 == -1) {
      FUN_14158c9a0(&DAT_1468e27e0);
      atexit((_func_5014 *)&LAB_143e7a0d0);
      _Init_thread_footer(&DAT_1468e2838);
      return &DAT_1468e27e0;
    }
  }
  return &DAT_1468e27e0;
}



// FUNCTION 14164abe0 FUN_14164abe0 body=161 status=ok
// SIG undefined FUN_14164abe0(void)

longlong FUN_14164abe0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e2770) {
    _Init_thread_header(&DAT_1468e2770);
    if (DAT_1468e2770 == -1) {
      puVar2 = (undefined8 *)FName::FName(local_res8,"CustomCompressor",1);
      uVar1 = *puVar2;
      plVar3 = (longlong *)FUN_141593110();
      DAT_1468e2768 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar1,0);
      if (DAT_1468e2768 != 0) {
        DAT_1468e2768 = DAT_1468e2768 + -8;
      }
      _Init_thread_footer(&DAT_1468e2770);
    }
  }
  return DAT_1468e2768;
}



// FUNCTION 14164ac90 GetDate body=318 status=ok
// SIG undefined GetDate(void)

void FDateTime::GetDate(longlong *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = (float)((double)(*param_1 / 864000000000) + 1721426.0);
  iVar4 = ((int)ROUND((fVar5 + fVar5) - 0.5) >> 1) + 0x10bd9;
  iVar1 = (iVar4 * 4) / 0x23ab1;
  iVar2 = iVar1 * 0x23ab1 + 3;
  iVar4 = iVar4 - ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
  iVar2 = ((iVar4 + 1) * 4000) / 0x164b09;
  iVar3 = iVar2 * 0x5b5;
  iVar4 = iVar4 + (0x1f - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2));
  iVar3 = (iVar4 * 0x50) / 0x98f;
  *param_2 = (iVar1 + -0x31) * 100 + iVar3 / 0xb + iVar2;
  *param_3 = iVar3 + (iVar3 / 0xb) * -0xc + 2;
  *param_4 = iVar4 - (iVar3 * 0x98f) / 0x50;
  return;
}



// FUNCTION 14164add0 GetDay body=224 status=ok
// SIG undefined GetDay(void)

int FDateTime::GetDay(longlong *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)((double)(*param_1 / 864000000000) + 1721426.0);
  iVar2 = ((int)ROUND((fVar3 + fVar3) - 0.5) >> 1) + 0x10bd9;
  iVar1 = ((iVar2 * 4) / 0x23ab1) * 0x23ab1 + 3;
  iVar2 = iVar2 - ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
  iVar1 = ((iVar2 * 4000 + 4000) / 0x164b09) * 0x5b5;
  iVar2 = iVar2 + (0x1f - ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2));
  return iVar2 - (((iVar2 * 0x50) / 0x98f) * 0x98f) / 0x50;
}



// FUNCTION 14164aeb0 GetDayOfWeek body=58 status=ok
// SIG undefined GetDayOfWeek(void)

ulonglong FDateTime::GetDayOfWeek(longlong *param_1)

{
  return (*param_1 / 864000000000) % 7 & 0xffffffff;
}


