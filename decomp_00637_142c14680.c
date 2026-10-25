// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142c14680 SetContextHelper body=117 status=ok
// SIG undefined SetContextHelper(void)

void UEnvQueryItemType_Direction::SetContextHelper(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = StaticClass();
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = 1;
  iVar1 = *(int *)(param_1 + 3);
  if (iVar1 < 0xc) {
    *(undefined4 *)(param_1 + 3) = 0xc;
    if (*(int *)((longlong)param_1 + 0x1c) < 0xc) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
    }
  }
  else if ((0xc < iVar1) && (iVar1 + -0xc != 0)) {
    *(int *)(param_1 + 3) = iVar1 - (iVar1 + -0xc);
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 2);
  }
  puVar2 = (undefined8 *)param_1[2];
  *puVar2 = *param_2;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 1);
  return;
}



// FUNCTION 142c14700 SetContextHelper body=146 status=ok
// SIG undefined SetContextHelper(void)

void UEnvQueryItemType_Point::SetContextHelper(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uStack_1c;
  
  uVar5 = GetPrivateStaticClass();
  *param_1 = uVar5;
  *(undefined4 *)(param_1 + 1) = 1;
  iVar1 = *(int *)(param_1 + 3);
  if (iVar1 < 0x18) {
    *(undefined4 *)(param_1 + 3) = 0x18;
    if (*(int *)((longlong)param_1 + 0x1c) < 0x18) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
    }
  }
  else if ((0x18 < iVar1) && (iVar1 + -0x18 != 0)) {
    *(int *)(param_1 + 3) = iVar1 - (iVar1 + -0x18);
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 2);
  }
  uVar2 = param_2[2];
  uVar4 = param_2[1];
  puVar3 = (undefined4 *)param_1[2];
  *puVar3 = *param_2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar2;
  puVar3[3] = uStack_1c;
  *(undefined8 *)(puVar3 + 4) = 0;
  return;
}



// FUNCTION 142c147a0 SetContextHelper body=186 status=ok
// SIG undefined SetContextHelper(void)

void UEnvQueryItemType_Point::SetContextHelper(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uStack_1c;
  
  uVar5 = GetPrivateStaticClass();
  *param_1 = uVar5;
  *(int *)(param_1 + 1) = (int)param_2[1];
  iVar2 = *(int *)(param_1 + 3);
  iVar6 = (int)param_2[1] * 0x18;
  if (iVar2 < iVar6) {
    *(int *)(param_1 + 3) = iVar6;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar6) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar2);
    }
  }
  else if ((iVar6 < iVar2) && (iVar6 != iVar2)) {
    *(int *)(param_1 + 3) = iVar6;
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 2);
  }
  puVar7 = (undefined4 *)param_1[2];
  uVar8 = 0;
  uVar10 = uVar8;
  if (0 < (int)param_2[1]) {
    do {
      uVar9 = (int)uVar10 + 1;
      puVar1 = (undefined4 *)(uVar8 + *param_2);
      uVar4 = puVar1[1];
      uVar3 = *(undefined4 *)(uVar8 + 8 + *param_2);
      *puVar7 = *puVar1;
      puVar7[1] = uVar4;
      puVar7[2] = uVar3;
      puVar7[3] = uStack_1c;
      *(undefined8 *)(puVar7 + 4) = 0;
      puVar7 = puVar7 + 6;
      uVar8 = uVar8 + 0xc;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 142c14870 FUN_142c14870 body=459 status=ok
// SIG undefined FUN_142c14870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c14870(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_2 != *(char *)(param_1 + 0x399)) && (*(int *)(param_1 + 0x1e0) == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    lVar1 = UCrowdManager::GetCurrent(lVar1);
    if ((lVar1 == 0) && (param_2 != '\x02')) {
      param_2 = '\x02';
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b2c85c) &&
       (_Init_thread_header(&DAT_146b2c85c), DAT_146b2c85c == -1)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146691190,0);
      FGenericPlatformString::Memcpy(DAT_146691190,L"Enabled",0x10);
      DAT_1466911a0 = 0;
      _DAT_1466911a8 = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1466911a0,0);
      FGenericPlatformString::Memcpy(DAT_1466911a0,L"ObstacleOnly",0x1a);
      DAT_1466911b0 = 0;
      _DAT_1466911b8 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1466911b0,0);
      FGenericPlatformString::Memcpy(DAT_1466911b0,L"Disabled",0x12);
      atexit(FUN_143ebf850);
      _Init_thread_footer(&DAT_146b2c85c);
    }
    *(char *)(param_1 + 0x399) = param_2;
    if ((uint)(param_2 != '\x02') != (*(uint *)(param_1 + 0x37c) >> 4 & 1)) {
      uVar2 = UCrowdAgentInterface::GetPrivateStaticClass();
      uVar2 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
      if (param_2 == '\x02') {
        TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
        ::Remove(lVar1 + 0x78,uVar2);
      }
      else {
        FUN_142c0e4d0(lVar1);
      }
      *(uint *)(param_1 + 0x37c) = *(uint *)(param_1 + 0x37c) & 0xffffffef;
      *(uint *)(param_1 + 0x37c) = *(uint *)(param_1 + 0x37c) | (uint)(param_2 != '\x02') << 4;
    }
  }
  return;
}



// FUNCTION 142c14a60 SetLocalNavigationGridDensity body=60 status=ok
// SIG undefined SetLocalNavigationGridDensity(void)

undefined1
UNavLocalGridManager::SetLocalNavigationGridDensity(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142c00de0();
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x40) == 0)) {
    DAT_1466910cc = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 142c14aa0 FUN_142c14aa0 body=805 status=ok
// SIG undefined FUN_142c14aa0(void)

void FUN_142c14aa0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  
  if (*(char *)(param_1 + 0x399) != '\0') {
    FUN_142c14dd0();
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x390) = param_2;
  *(undefined4 *)(param_1 + 0x394) = param_2;
  if (lVar5 == 0) {
    return;
  }
  if ((*(uint *)(lVar5 + 0x98) & 2) == 0) {
    return;
  }
  if (*(int *)(lVar5 + 0x30) < 2) {
    return;
  }
  if ((*(uint *)(lVar5 + 0x98) & 1) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x118) == 0) {
    return;
  }
  lVar6 = (longlong)*(int *)(lVar5 + 0x30) * 0x20;
  local_58 = *(undefined8 *)(lVar6 + -0x20 + *(longlong *)(lVar5 + 0x28));
  local_50 = *(float *)(lVar6 + -0x18 + *(longlong *)(lVar5 + 0x28));
  iVar1 = *(int *)(lVar5 + 0x70);
  if ((iVar1 == DAT_146b2bc20) ||
     ((*(longlong *)(lVar5 + 0x78) != 0 &&
      (cVar3 = FNavPathType::IsA(*(longlong *)(lVar5 + 0x78),&DAT_146b2bc20), cVar3 != '\0')))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  lVar6 = 0;
  if (bVar2) {
    lVar6 = lVar5;
  }
  if ((iVar1 == DAT_146b2ba50) ||
     ((*(longlong *)(lVar5 + 0x78) != 0 &&
      (cVar3 = FNavPathType::IsA(*(longlong *)(lVar5 + 0x78),&DAT_146b2ba50), cVar3 != '\0')))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (lVar6 != 0) {
    return;
  }
  lVar6 = 0;
  if (bVar2) {
    lVar6 = lVar5;
  }
  if (lVar6 == 0) {
    return;
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x178);
  if (lVar6 == 0) {
    local_68 = DAT_1466910d0;
    local_60 = DAT_1466910d8;
  }
  else {
    local_68 = *(undefined8 *)(lVar6 + 0x220);
    local_60 = *(float *)(lVar6 + 0x228) - *(float *)(lVar6 + 0x1e4);
  }
  *(uint *)(param_1 + 0x37c) = *(uint *)(param_1 + 0x37c) | 0x12004;
  uVar4 = FWeakObjectPtr::Get(lVar5 + 0x38);
  FUN_1422f9470(param_1 + 0x230,uVar4,&local_58);
  fVar10 = (float)local_58 - (float)local_68;
  fVar11 = local_58._4_4_ - (float)((ulonglong)local_68 >> 0x20);
  local_60 = local_50 - local_60;
  fVar7 = fVar11 * fVar11 + fVar10 * fVar10 + local_60 * local_60;
  if (fVar7 != 1.0) {
    if (fVar7 < 1e-08) {
      local_60 = DAT_1468b5d98;
      local_68 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_142c14d5e;
    }
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
    fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
    fVar10 = fVar10 * fVar8;
    fVar11 = fVar11 * fVar8;
    local_60 = local_60 * fVar8;
  }
  local_68 = CONCAT44(fVar11,fVar10);
LAB_142c14d5e:
  *(undefined8 *)(param_1 + 0x358) = local_68;
  *(undefined8 *)(param_1 + 0x2e8) = local_68;
  *(float *)(param_1 + 0x360) = local_60;
  *(float *)(param_1 + 0x2f0) = local_60;
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  UCrowdManager::GetCurrent(lVar5);
  return;
}



// FUNCTION 142c14dd0 FUN_142c14dd0 body=1446 status=ok
// SIG undefined FUN_142c14dd0(void)

void FUN_142c14dd0(longlong *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 local_b8 [160];
  
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar8 + 0x38) < DAT_146b2c870) && (_Init_thread_header(), DAT_146b2c870 == -1)) {
    plVar10 = (longlong *)FUN_142c32730();
    lVar9 = plVar10[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x368))(plVar10);
      lVar9 = plVar10[0x1f];
    }
    DAT_146b2c86c = *(undefined4 *)(lVar9 + 0x84);
    _Init_thread_footer();
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_146b2c878) && (_Init_thread_header(), DAT_146b2c878 == -1)) {
    plVar10 = (longlong *)FUN_142c32730();
    lVar8 = plVar10[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar10 + 0x368))(plVar10);
      lVar8 = plVar10[0x1f];
    }
    DAT_146b2c874 = *(undefined4 *)(lVar8 + 0x88);
    _Init_thread_footer();
  }
  lVar8 = param_1[0x3d];
  if (lVar8 == 0) {
    return;
  }
  if ((param_2 < 0) || (*(int *)(lVar8 + 0x30) <= param_2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if ((param_2 + 1 < 0) || (*(int *)(lVar8 + 0x30) <= param_2 + 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  iVar4 = (**(code **)(*param_1 + 0x520))(param_1,param_2);
  *(int *)(param_1 + 0x5a) = param_2;
  *(int *)((longlong)param_1 + 0x2d4) = iVar4;
  lVar11 = (longlong)param_2 * 0x20 + *(longlong *)(lVar8 + 0x28);
  lVar12 = (longlong)iVar4 * 0x20 + *(longlong *)(lVar8 + 0x28);
  param_1[0x5b] = *(longlong *)(lVar11 + 0x10);
  param_1[0x5c] = *(longlong *)(lVar12 + 0x10);
  plVar5 = (longlong *)FNavigationPath::GetPathPointLocation(lVar8,local_b8);
  plVar10 = param_1 + 0x46;
  lVar9 = plVar5[1];
  *plVar10 = *plVar5;
  param_1[0x47] = lVar9;
  lVar9 = plVar5[3];
  param_1[0x48] = plVar5[2];
  param_1[0x49] = lVar9;
  uVar13 = *(undefined4 *)((longlong)plVar5 + 0x24);
  lVar9 = plVar5[5];
  uVar2 = *(undefined4 *)((longlong)plVar5 + 0x2c);
  *(int *)(param_1 + 0x4a) = (int)plVar5[4];
  *(undefined4 *)((longlong)param_1 + 0x254) = uVar13;
  *(int *)(param_1 + 0x4b) = (int)lVar9;
  *(undefined4 *)((longlong)param_1 + 0x25c) = uVar2;
  param_1[0x4c] = plVar5[6];
  uVar6 = FNavigationPath::GetPathPointLocation(lVar8,local_b8,(int)param_1[0x5a]);
  FUN_1422e15c0(uVar6,&local_c8);
  FUN_1422e15c0(plVar10,&local_d8);
  if (((0.0001 < ABS(local_c8 - (float)local_d8)) || (0.0001 < ABS(local_c4 - local_d8._4_4_))) ||
     (0.0001 < ABS(local_c0 - local_d0))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  fVar14 = local_d8._4_4_;
  fVar17 = (float)local_d8;
  uVar6 = local_d8;
  if (bVar3) {
    iVar4 = *(int *)((longlong)param_1 + 0x2d4) + 1;
    if ((iVar4 < 0) || (*(int *)(lVar8 + 0x30) <= iVar4)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *(int *)((longlong)param_1 + 0x2d4) = iVar4;
      plVar5 = (longlong *)FNavigationPath::GetPathPointLocation(lVar8,local_b8);
      lVar9 = plVar5[1];
      *plVar10 = *plVar5;
      param_1[0x47] = lVar9;
      lVar9 = plVar5[3];
      param_1[0x48] = plVar5[2];
      param_1[0x49] = lVar9;
      uVar13 = *(undefined4 *)((longlong)plVar5 + 0x24);
      lVar9 = plVar5[5];
      uVar2 = *(undefined4 *)((longlong)plVar5 + 0x2c);
      *(int *)(param_1 + 0x4a) = (int)plVar5[4];
      *(undefined4 *)((longlong)param_1 + 0x254) = uVar13;
      *(int *)(param_1 + 0x4b) = (int)lVar9;
      *(undefined4 *)((longlong)param_1 + 0x25c) = uVar2;
      param_1[0x4c] = plVar5[6];
      puVar7 = (undefined8 *)FUN_1422e15c0(plVar10,&local_e8);
      uVar6 = *puVar7;
      local_d0 = *(float *)(puVar7 + 1);
      local_d8._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
      local_d8._0_4_ = (float)uVar6;
      fVar14 = local_d8._4_4_;
      fVar17 = (float)local_d8;
    }
  }
  local_d8 = uVar6;
  fVar15 = local_d0;
  if (*(int *)(lVar8 + 0x30) == *(int *)((longlong)param_1 + 0x2d4) + 1) {
    local_e8 = *(undefined8 *)((longlong)param_1 + 0x28c);
    local_e0 = *(float *)((longlong)param_1 + 0x294);
    uVar13 = FUN_142c07f30(param_1,lVar8,&local_e8,0);
  }
  else {
    uVar13 = DAT_146b2c874;
    if ((*(byte *)(lVar12 + 0x18) & 4) == 0) {
      uVar13 = DAT_146b2c86c;
    }
  }
  local_e8._4_4_ = fVar14 - local_c4;
  *(undefined4 *)(param_1 + 0x40) = uVar13;
  fVar17 = fVar17 - local_c8;
  local_e0 = fVar15 - local_c0;
  fVar14 = fVar17 * fVar17 + local_e8._4_4_ * local_e8._4_4_ + local_e0 * local_e0;
  if (fVar14 == 1.0) {
LAB_142c151b6:
    local_e8 = CONCAT44(local_e8._4_4_,fVar17);
  }
  else {
    if (1e-08 <= fVar14) {
      auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar15 = auVar16._0_4_;
      fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
      fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
      fVar17 = fVar17 * fVar15;
      local_e0 = fVar15 * local_e0;
      local_e8._4_4_ = fVar15 * local_e8._4_4_;
      goto LAB_142c151b6;
    }
    local_e0 = DAT_1468b5d98;
    local_e8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  param_1[0x5d] = local_e8;
  *(float *)(param_1 + 0x5e) = local_e0;
  uVar1 = *(uint *)(lVar11 + 0x18);
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xfffffeff;
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | (uVar1 & 4) << 6;
  if (*(int *)(lVar11 + 0x1c) == 0) goto LAB_142c1528f;
  lVar8 = param_1[0x24];
  if (((lVar8 == 0) && (lVar8 = FUN_1423407b0(param_1), lVar8 == 0)) ||
     (lVar8 = *(longlong *)(lVar8 + 0x138), lVar8 == 0)) {
LAB_142c1526d:
    lVar8 = 0;
  }
  else {
    lVar9 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142c1526d;
  }
  uVar6 = UNavigationSystemV1::GetCustomLink(lVar8,*(undefined4 *)(lVar11 + 0x1c));
  (**(code **)(*param_1 + 0x4f0))(param_1,uVar6,&local_d8);
LAB_142c1528f:
  FUN_142c16a70(param_1);
  return;
}



// FUNCTION 142c15380 FUN_142c15380 body=686 status=ok
// SIG undefined FUN_142c15380(void)

void FUN_142c15380(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_38;
  undefined8 uStack_30;
  
  pwVar11 = (wchar_t *)0x0;
  *(longlong *)(param_1 + 0x1c8) = param_2;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (param_2 != 0) {
    *(float *)(param_1 + 0x1f8) = *(float *)(param_2 + 0x1c4) * 0.1;
    uVar3 = UPathFollowingAgentInterface::GetPrivateStaticClass();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar3);
    pwVar9 = pwVar11;
    if (plVar4 != (longlong *)0x0) {
      pwVar5 = (wchar_t *)(**(code **)(*plVar4 + 8))(plVar4);
      lVar6 = UObject::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(pwVar5 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pwVar5 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
          != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pwVar9 = pwVar5;
      }
    }
    *(wchar_t **)(param_2 + 0x1f8) = pwVar9;
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (((lVar6 != 0) || (lVar6 = FUN_1423407b0(param_1), lVar6 != 0)) &&
       (lVar6 = *(longlong *)(lVar6 + 0x138), lVar6 != 0)) {
      lVar7 = FUN_142ba9430();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar7 = thunk_FUN_142b8f070(lVar6,param_2 + 0x1c0);
        *(longlong *)(param_1 + 0x1d8) = lVar7;
        if (lVar7 == 0) {
          if ((*(byte *)(lVar6 + 0x39a) & 8) == 0) {
            uStack_30._0_4_ = 0;
            local_38 = &LAB_140fefd70;
            plVar10 = (longlong *)(lVar6 + 0x108);
            plVar4 = (longlong *)FMemory::Realloc(0,0x30);
            if (plVar4 != (longlong *)0x0) {
              *plVar4 = (longlong)&PTR_FUN_143f77b88;
              FWeakObjectPtr::operator=(plVar4 + 1,param_1);
              *(undefined4 *)(plVar4 + 2) = (undefined4)local_38;
              *(undefined4 *)((longlong)plVar4 + 0x14) = local_38._4_4_;
              *(undefined4 *)(plVar4 + 3) = (undefined4)uStack_30;
              *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_30._4_4_;
              lVar7 = FDelegateHandle::GenerateNewID();
              plVar4[5] = lVar7;
              *plVar4 = (longlong)&PTR_FUN_143f77bd0;
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
              (**(code **)(*plVar4 + 0x20))(plVar4,&local_res8);
              iVar1 = *(int *)(lVar6 + 0x110);
              *(int *)(lVar6 + 0x110) = iVar1 + 1;
              if (*(int *)(lVar6 + 0x114) < iVar1 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
              }
              puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar10);
              *puVar8 = plVar4;
              *(undefined4 *)(puVar8 + 1) = 3;
            }
          }
          else {
            pwVar9 = _guard_xfg_dispatch_icall_nop
                               (L"&UPathFollowingComponent::OnNavDataRegistered",L"::");
            while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
              pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
              pwVar11 = pwVar5;
            }
            FName::FName(&local_res10,pwVar11 + 2,1);
            FWeakObjectPtr::operator=(&local_38,0);
            uStack_30 = 0;
            FWeakObjectPtr::operator=(&local_38,param_1);
            uStack_30 = local_res10;
            local_res8 = 0;
            if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
              UObject::FindFunction(lVar7,uStack_30);
            }
            FUN_1406a5aa0(lVar6 + 0xe8,&local_38);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142c15630 FUN_142c15630 body=12 status=ok
// SIG undefined FUN_142c15630(void)

void FUN_142c15630(longlong param_1)

{
  FUN_142ba2bc0(*(undefined8 *)(param_1 + 0x488));
  return;
}



// FUNCTION 142c15640 SetUserData body=220 status=ok
// SIG undefined SetUserData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FAIMoveRequest::SetUserData(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  puVar1 = (undefined8 *)(param_1 + 0x28);
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar1;
    plVar6 = *(longlong **)(param_1 + 0x30);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x2c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x34) = uStack_30._4_4_;
    local_38 = uVar5;
    uStack_30 = plVar6;
  }
  plVar6 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_30 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 142c15720 SetValue body=11 status=ok
// SIG undefined SetValue(void)

void UEnvQueryItemType_Actor::SetValue(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}



// FUNCTION 142c15730 FUN_142c15730 body=11 status=ok
// SIG undefined FUN_142c15730(void)

void FUN_142c15730(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}



// FUNCTION 142c15740 FUN_142c15740 body=15 status=ok
// SIG undefined FUN_142c15740(void)

void FUN_142c15740(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  return;
}



// FUNCTION 142c15750 SetValue body=17 status=ok
// SIG undefined SetValue(void)

void UEnvQueryItemType_Point::SetValue(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return;
}



// FUNCTION 142c15790 FUN_142c15790 body=240 status=ok
// SIG undefined FUN_142c15790(void)

ulonglong FUN_142c15790(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 local_18 [16];
  
  if (((*(byte *)(param_1 + 0x2a0) & 0x80) != 0) &&
     (lVar6 = *(longlong *)(param_1 + 0x1e8), lVar6 != 0)) {
    if (*(int *)(lVar6 + 0x70) == DAT_146691110) {
LAB_142c157e2:
      bVar2 = true;
    }
    else {
      if (*(longlong *)(lVar6 + 0x78) != 0) {
        cVar3 = FNavPathType::IsA(*(longlong *)(lVar6 + 0x78),&DAT_146691110);
        if (cVar3 != '\0') goto LAB_142c157e2;
      }
      bVar2 = false;
    }
    lVar8 = 0;
    if (bVar2) {
      lVar8 = lVar6;
    }
    if (lVar8 != 0) {
      uVar4 = *(int *)(lVar8 + 0x148) - 1;
      uVar5 = (ulonglong)uVar4;
      if ((*(uint *)(lVar8 + 0x158) != uVar4) || (*(int *)(lVar8 + 0x148) < 1)) goto LAB_142c1586e;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x37c);
  uVar5 = (ulonglong)uVar4;
  if (((uVar4 >> 0xd & 1) != 0) &&
     ((((uVar4 & 4) == 0 && (lVar6 = *(longlong *)(param_1 + 0x1e8), lVar6 != 0)) &&
      (uVar4 = *(uint *)(lVar6 + 0x98) >> 2, uVar5 = (ulonglong)uVar4, (uVar4 & 1) == 0)))) {
    lVar6 = FWeakObjectPtr::Get(lVar6 + 0x40);
    uVar5 = 0;
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)FUN_142b8ea80(*(undefined8 *)(param_1 + 0x1e8),local_18);
      *param_2 = *puVar7;
      uVar1 = *(undefined4 *)(puVar7 + 1);
      *(undefined4 *)(param_2 + 1) = uVar1;
      return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    }
  }
LAB_142c1586e:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 142c15880 FUN_142c15880 body=251 status=ok
// SIG undefined FUN_142c15880(void)

void FUN_142c15880(longlong param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x1d0);
  if (lVar3 != 0) {
    uVar4 = UNavLinkCustomInterface::GetPrivateStaticClass();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x48))(plVar5,param_1);
      *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1d4) = 0;
    }
  }
  if (param_2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_2 + 8))(param_2);
    lVar6 = UObject::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FWeakObjectPtr::operator=(param_1 + 0x1d0,lVar3);
      cVar2 = (**(code **)(*param_2 + 0x40))(param_2,param_1,param_3);
      if (cVar2 == '\0') {
        FWeakObjectPtr::operator=(param_1 + 0x1d0,0);
      }
    }
  }
  return;
}



// FUNCTION 142c15980 FUN_142c15980 body=75 status=ok
// SIG undefined FUN_142c15980(void)

void FUN_142c15980(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_142c46ed0();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x428))(plVar2,param_1,0x40,DAT_146b2c570,0);
  }
  return;
}



// FUNCTION 142c159d0 FUN_142c159d0 body=38 status=ok
// SIG undefined FUN_142c159d0(void)

void FUN_142c159d0(longlong *param_1)

{
  *(uint *)((longlong)param_1 + 500) = *(uint *)((longlong)param_1 + 500) & 0xfffffff7;
  (**(code **)(*param_1 + 0x430))();
  *(uint *)((longlong)param_1 + 500) = *(uint *)((longlong)param_1 + 500) | 8;
  return;
}



// FUNCTION 142c15a00 FUN_142c15a00 body=268 status=ok
// SIG undefined FUN_142c15a00(void)

bool FUN_142c15a00(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (*(longlong *)(param_2 + 0x18) != 0) {
    lVar1 = UBlackboardKeyType::GetPrivateStaticClass();
    lVar6 = *(longlong *)(param_2 + 0x18);
    for (lVar2 = lVar6; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar1) goto LAB_142c15a50;
    }
  }
  lVar6 = 0;
LAB_142c15a50:
  lVar2 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  if (lVar6 == lVar2) {
    (**(code **)(*param_1 + 0x298))(param_1,&local_38,param_4);
    local_28 = local_38;
    local_20 = local_30;
    FUN_14074b0b0(param_3,*(undefined1 *)(param_2 + 0x20),&local_28);
  }
  else {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      lVar3 = UBlackboardKeyType::GetPrivateStaticClass();
      lVar1 = *(longlong *)(param_2 + 0x18);
      for (lVar4 = lVar1; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar3) goto LAB_142c15ac3;
      }
    }
    lVar1 = 0;
LAB_142c15ac3:
    lVar4 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    if (lVar1 == lVar4) {
      uVar5 = (**(code **)(*param_1 + 0x2a8))(param_1,param_4);
      FUN_140725870(param_3,*(undefined1 *)(param_2 + 0x20),uVar5);
      return true;
    }
  }
  return lVar6 == lVar2;
}



// FUNCTION 142c15b10 FUN_142c15b10 body=147 status=ok
// SIG undefined FUN_142c15b10(void)

bool FUN_142c15b10(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if (*(longlong *)(param_2 + 0x18) != 0) {
    lVar1 = UBlackboardKeyType::GetPrivateStaticClass();
    lVar4 = *(longlong *)(param_2 + 0x18);
    for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar1) goto LAB_142c15b58;
    }
  }
  lVar4 = 0;
LAB_142c15b58:
  lVar2 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  if (lVar4 == lVar2) {
    local_res10 = *param_4;
    local_res14 = param_4[1];
    uVar3 = FWeakObjectPtr::Get(&local_res10);
    FUN_140725870(param_3,*(undefined1 *)(param_2 + 0x20),uVar3);
  }
  return lVar4 == lVar2;
}



// FUNCTION 142c15bb0 FUN_142c15bb0 body=181 status=ok
// SIG undefined FUN_142c15bb0(void)

bool FUN_142c15bb0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x18) != 0) {
    lVar1 = UBlackboardKeyType::GetPrivateStaticClass();
    lVar3 = *(longlong *)(param_2 + 0x18);
    for (lVar2 = lVar3; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar1) goto LAB_142c15c01;
    }
  }
  lVar3 = 0;
LAB_142c15c01:
  lVar2 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  if (lVar3 == lVar2) {
    (**(code **)(*param_1 + 0x298))(param_1,&local_28,param_4);
    local_18 = local_28;
    local_10 = local_20;
    FUN_14074b0b0(param_3,*(undefined1 *)(param_2 + 0x20),&local_18);
  }
  return lVar3 == lVar2;
}



// FUNCTION 142c15c70 FUN_142c15c70 body=377 status=ok
// SIG undefined FUN_142c15c70(void)

void FUN_142c15c70(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint local_60;
  
  FUN_142bef1a0(param_3);
  uVar9 = 0;
  uVar12 = uVar9;
  if (0 < (int)param_2[1]) {
    do {
      uVar4 = *(uint *)(param_3 + 4);
      lVar10 = (longlong)(int)uVar4;
      puVar1 = (undefined8 *)(*param_2 + uVar9);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar2 = *(undefined8 *)(*param_2 + 0x10 + uVar9);
      uVar3 = *(ushort *)((longlong)param_3 + 0x154);
      iVar8 = uVar3 + uVar4;
      *(int *)(param_3 + 4) = iVar8;
      if (*(int *)((longlong)param_3 + 0x24) < iVar8) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_3 + 3);
      }
      _guard_xfg_dispatch_icall_nop((void *)(param_3[3] + lVar10),0,(longlong)(int)(uint)uVar3);
      lVar5 = param_3[3];
      local_60 = local_60 & 0xfffffffe;
      puVar1 = (undefined8 *)(lVar10 + lVar5);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined8 *)(lVar10 + 0x10 + lVar5) = uVar2;
      iVar8 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar8 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_3);
      }
      lVar10 = *param_3;
      uVar11 = (int)uVar12 + 1;
      uVar9 = uVar9 + 0x18;
      *(ulonglong *)(lVar10 + (longlong)iVar8 * 0xc) = ((ulonglong)uVar4 & 0x7fffffff) << 0x20;
      *(uint *)(lVar10 + 8 + (longlong)iVar8 * 0xc) = local_60;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)param_2[1]);
  }
  lVar10 = (longlong)*(int *)((longlong)param_3 + 0x2c) * 0x30 + param_3[0x22];
  *(uint *)(lVar10 + 0x28) =
       (uint)(*(char *)(param_1 + 0x8b) == '\x01') | *(uint *)(lVar10 + 0x28) & 0xfffffffe;
  return;
}



// FUNCTION 142c15df0 FUN_142c15df0 body=108 status=ok
// SIG undefined FUN_142c15df0(void)

void FUN_142c15df0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 0x37c) >> 5 & 1) != (param_2 & 0xff)) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    *(uint *)(param_1 + 0x37c) = (param_2 & 0xff) << 5 | *(uint *)(param_1 + 0x37c) & 0xffffffdf;
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    lVar1 = UCrowdManager::GetCurrent(lVar1);
    if (lVar1 != 0) {
      uVar2 = UCrowdAgentInterface::GetPrivateStaticClass();
      UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142c15e60 SwitchToNextPathPart body=40 status=ok
// SIG undefined SwitchToNextPathPart(void)

void UCrowdFollowingComponent::SwitchToNextPathPart(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x518))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000142c15e81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4d8))(param_1,uVar1);
  return;
}



// FUNCTION 142c15e90 FUN_142c15e90 body=82 status=ok
// SIG undefined FUN_142c15e90(void)

void FUN_142c15e90(longlong *param_1,undefined4 param_2)

{
  FUN_142357eb0();
  if ((int)param_1[0x3c] == 3) {
    (**(code **)(*param_1 + 0x4e8))(param_1);
    if ((int)param_1[0x3c] == 3) {
      (**(code **)(*param_1 + 0x4e0))(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 142c15ef0 FUN_142c15ef0 body=909 status=ok
// SIG undefined FUN_142c15ef0(void)

void FUN_142c15ef0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  float *pfVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined8 local_58;
  float local_50;
  
  plVar2 = *(longlong **)(param_1 + 0x350);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x1e8) == 0) {
    return;
  }
  iVar4 = UNavLocalGridManager::GetGridIndex(plVar2);
  if (iVar4 == -1) {
    *(uint *)(param_1 + 0x360) = *(uint *)(param_1 + 0x360) & 0xfffffffd;
    *(undefined8 *)(param_1 + 0x358) = 0xffffffffffffffff;
    return;
  }
  lVar9 = (longlong)iVar4 * 0x90;
  lVar8 = plVar2[5] + lVar9;
  if (*(int *)(param_1 + 0x35c) == *(int *)(lVar8 + 0x6c)) {
    return;
  }
  uVar11 = 0;
  *(int *)(param_1 + 0x35c) = *(int *)(lVar8 + 0x6c);
  *(int *)(param_1 + 0x358) = iVar4;
  uVar14 = 0;
  if ((-1 < iVar4) && (iVar4 < (int)plVar2[6])) {
    lVar5 = (**(code **)(*plVar2 + 0x148))(plVar2);
    lVar6 = plVar2[5];
    uVar1 = *(undefined4 *)(lVar5 + 0x790);
    uVar13 = uVar11;
    if (0 < *(int *)(lVar9 + 0x88 + lVar6)) {
      do {
        iVar4 = *(int *)(uVar11 + *(longlong *)(lVar6 + 0x80 + lVar9));
        if ((-1 < iVar4) && (iVar4 < (int)plVar2[8])) {
          *(undefined4 *)((longlong)iVar4 * 0x80 + 0x68 + plVar2[7]) = uVar1;
          lVar6 = plVar2[5];
        }
        uVar12 = (int)uVar13 + 1;
        uVar11 = uVar11 + 4;
        uVar13 = (ulonglong)uVar12;
      } while ((int)uVar12 < *(int *)(lVar6 + 0x88 + lVar9));
    }
  }
  plVar2 = (longlong *)(param_1 + 0x368);
  FNavLocalGridData::FindPathForMovingAgent
            (lVar8,*(undefined8 *)(param_1 + 0x1e8),param_2,*(undefined4 *)(param_1 + 0x2d0),plVar2,
             param_1 + 0x37c);
  if (1 < *(int *)(param_1 + 0x370)) {
    uVar14 = 2;
  }
  uVar12 = *(uint *)(param_1 + 0x360);
  *(uint *)(param_1 + 0x360) = uVar14 | uVar12 & 0xfffffffd;
  if (uVar14 == 0) {
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x378) = 1;
  if (*(int *)(lVar9 + 0x30) < 1) {
    puVar7 = &DAT_1466910d0;
  }
  else {
    puVar7 = (undefined8 *)
             ((longlong)(*(int *)(lVar9 + 0x30) + -1) * 0x20 + *(longlong *)(lVar9 + 0x28));
  }
  fVar15 = 1.0 / *(float *)(lVar8 + 4);
  iVar10 = (int)(((float)*puVar7 - *(float *)(lVar8 + 0x24)) * fVar15);
  iVar4 = (int)(((float)((ulonglong)*puVar7 >> 0x20) - *(float *)(lVar8 + 0x28)) * fVar15);
  if ((((iVar10 < 0) || (*(int *)(lVar8 + 0x3c) <= iVar10)) || (iVar4 < 0)) ||
     (*(int *)(lVar8 + 0x40) <= iVar4)) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(lVar8 + 0x40) * iVar10 + iVar4;
  }
  *(uint *)(param_1 + 0x360) = (uint)(iVar4 != -1) | uVar14 | uVar12 & 0xfffffffc;
  FUN_1422f9470(param_1 + 0x230,0,*plVar2 + 0xc);
  pfVar3 = (float *)*plVar2;
  fVar18 = pfVar3[3] - *pfVar3;
  fVar19 = pfVar3[4] - pfVar3[1];
  local_50 = pfVar3[5] - pfVar3[2];
  fVar15 = fVar19 * fVar19 + fVar18 * fVar18 + local_50 * local_50;
  if (fVar15 != 1.0) {
    if (fVar15 < 1e-08) {
      local_50 = DAT_1468b5d98;
      local_58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_142c16211;
    }
    auVar17 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar16 = auVar17._0_4_;
    fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
    fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
    fVar18 = fVar18 * fVar16;
    fVar19 = fVar19 * fVar16;
    local_50 = local_50 * fVar16;
  }
  local_58 = CONCAT44(fVar19,fVar18);
LAB_142c16211:
  *(undefined8 *)(param_1 + 0x2e8) = local_58;
  *(float *)(param_1 + 0x2f0) = local_50;
  FUN_142c16a70(param_1);
  return;
}



// FUNCTION 142c16280 FUN_142c16280 body=330 status=ok
// SIG undefined FUN_142c16280(void)

ulonglong FUN_142c16280(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_48 [64];
  
  uVar3 = *(ulonglong *)(param_1 + 0x120);
  if (uVar3 == 0) {
    uVar3 = FUN_1423407b0();
  }
  if (((*(byte *)(param_1 + 0x2a0) & 8) != 0) &&
     (plVar5 = *(longlong **)(param_1 + 0x1c8), plVar5 != (longlong *)0x0)) {
    if ((*(float *)(param_1 + 0x2ac) + *(float *)(param_1 + 0x2b4) < *(float *)(uVar3 + 0x790)) &&
       (0 < *(int *)(param_1 + 0x2b0))) {
      iVar2 = *(int *)(param_1 + 0x2b8);
      *(float *)(param_1 + 0x2b4) = *(float *)(uVar3 + 0x790);
      if (*(int *)(param_1 + 0x2c8) == iVar2) {
        iVar2 = *(int *)(param_1 + 0x2c8);
        *(int *)(param_1 + 0x2c8) = iVar2 + 1;
        if (*(int *)(param_1 + 0x2cc) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 0x2c0,iVar2);
        }
        puVar4 = (undefined8 *)((longlong)iVar2 * 0x38 + *(longlong *)(param_1 + 0x2c0));
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        iVar2 = *(int *)(param_1 + 0x2b8);
        plVar5 = *(longlong **)(param_1 + 0x1c8);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x38 + *(longlong *)(param_1 + 0x2c0));
      puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x520))(plVar5,local_48);
      uVar1 = puVar4[1];
      *puVar6 = *puVar4;
      puVar6[1] = uVar1;
      uVar1 = puVar4[3];
      puVar6[2] = puVar4[2];
      puVar6[3] = uVar1;
      uVar1 = puVar4[5];
      puVar6[4] = puVar4[4];
      puVar6[5] = uVar1;
      puVar6[6] = puVar4[6];
      iVar2 = *(int *)(param_1 + 0x2b8) + 1;
      *(int *)(param_1 + 0x2b8) = iVar2 % *(int *)(param_1 + 0x2b0);
      return CONCAT71((uint7)((ulonglong)((longlong)iVar2 / (longlong)*(int *)(param_1 + 0x2b0)) >>
                             8) & 0xffffff,1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142c163e0 FUN_142c163e0 body=1170 status=ok
// SIG undefined FUN_142c163e0(void)

void FUN_142c163e0(longlong param_1,float *param_2,float *param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_88;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_58 [8];
  
  (**(code **)(*(longlong *)(param_1 + 0x350) + 0x10))((longlong *)(param_1 + 0x350),&local_78);
  fVar7 = *param_3 - local_78;
  fVar8 = param_3[1] - local_74;
  fVar9 = param_3[2] - local_70;
  fVar4 = fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9;
  if (100.0 < fVar4) {
    if (fVar4 == 1.0) {
LAB_142c16512:
      local_80 = fVar9;
      local_88 = CONCAT44(fVar8,fVar7);
    }
    else {
      if (1e-08 <= fVar4) {
        auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
        fVar5 = auVar6._0_4_;
        fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
        fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
        fVar7 = fVar7 * fVar5;
        fVar8 = fVar8 * fVar5;
        fVar9 = fVar9 * fVar5;
        goto LAB_142c16512;
      }
      local_80 = DAT_1468b5d98;
      local_88 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    *(undefined8 *)(param_1 + 0x2e8) = local_88;
    *(float *)(param_1 + 0x2f0) = local_80;
  }
  if ((*(longlong *)(param_1 + 0x368) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x368) + 0x248) == '\x03')) {
    return;
  }
  if ((*(uint *)(param_1 + 0x37c) & 4) != 0) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x220);
    if (cVar1 == '\0') {
      FUN_1422e15c0(param_1 + 0x230,local_58);
      puVar3 = local_58;
    }
    else {
      lVar2 = FWeakObjectPtr::Get(param_1 + 0x220);
      lVar2 = *(longlong *)(lVar2 + 0x168);
      if (lVar2 == 0) {
        local_88 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        local_80 = DAT_1468b5d98;
      }
      else {
        local_80 = *(float *)(lVar2 + 0x228);
        local_88 = *(undefined8 *)(lVar2 + 0x220);
      }
      local_60 = local_80;
      puVar3 = &local_68;
      local_68 = local_88;
    }
    local_74 = (float)((ulonglong)*puVar3 >> 0x20) - local_74;
    local_78 = (float)*puVar3 - local_78;
    local_70 = *(float *)(puVar3 + 1) - local_70;
    fVar4 = local_74 * local_74 + local_78 * local_78 + local_70 * local_70;
    if (fVar4 != 1.0) {
      if (fVar4 < 1e-08) {
        local_88 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        local_70 = DAT_1468b5d98;
        goto LAB_142c1683d;
      }
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar7 = auVar6._0_4_;
      fVar7 = fVar7 + fVar7 * (0.5 - fVar4 * 0.5 * fVar7 * fVar7);
      fVar7 = fVar7 + fVar7 * (0.5 - fVar4 * 0.5 * fVar7 * fVar7);
      local_78 = local_78 * fVar7;
      local_74 = local_74 * fVar7;
      local_70 = local_70 * fVar7;
    }
    local_88 = CONCAT44(local_74,local_78);
    goto LAB_142c1683d;
  }
  if (((*(uint *)(param_1 + 0x37c) & 2) == 0) && (param_4 == '\0')) {
LAB_142c1681c:
    local_60 = (float)*(undefined4 *)(param_1 + 0x2f0);
    puVar3 = &local_68;
    local_68 = *(undefined8 *)(param_1 + 0x2e8);
  }
  else {
    fVar4 = param_2[1];
    fVar7 = *param_2;
    fVar8 = param_2[2];
    fVar9 = fVar7 * fVar7 + fVar4 * fVar4 + fVar8 * fVar8;
    if (fVar9 <= 0.0001) goto LAB_142c1681c;
    if (fVar9 == 1.0) {
      local_80 = param_2[2];
      puVar3 = &local_88;
      local_88 = *(undefined8 *)param_2;
    }
    else if (1e-08 <= fVar9) {
      puVar3 = &local_88;
      auVar6 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar9 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar9 * 0.5 * fVar5 * fVar5);
      local_88 = CONCAT44(fVar4 * fVar5,fVar7 * fVar5);
      local_80 = fVar8 * fVar5;
    }
    else {
      puVar3 = &local_88;
      local_80 = DAT_1468b5d98;
      local_88 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
  }
  local_88 = *puVar3;
  local_70 = *(float *)(puVar3 + 1);
LAB_142c1683d:
  *(undefined8 *)(param_1 + 0x358) = local_88;
  *(float *)(param_1 + 0x360) = local_70;
  return;
}



// FUNCTION 142c16890 FUN_142c16890 body=318 status=ok
// SIG undefined FUN_142c16890(void)

void FUN_142c16890(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  if (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0) {
    fVar6 = (float)(**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x400))();
    iVar5 = *(int *)(param_1 + 0x2fc);
    if (fVar6 == *(float *)(param_1 + 0x2f8)) {
      if (iVar5 != -1) {
        return;
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x2f4);
      fVar7 = (float)(**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x540))
                               (*(longlong **)(param_1 + 0x1c8),fVar6);
      *(float *)(param_1 + 0x2f8) = fVar6;
      *(float *)(param_1 + 0x2f4) = fVar7;
      if ((iVar5 != -1) && (fVar1 == fVar7)) {
        return;
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x1e8);
    if (lVar2 != 0) {
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      fVar6 = 0.0;
      iVar5 = *(int *)(lVar2 + 0x30) + -1;
      if (0 < iVar5) {
        lVar4 = (longlong)iVar5;
        pfVar3 = (float *)(*(longlong *)(lVar2 + 0x28) + -0x18 + lVar4 * 0x20);
        do {
          iVar5 = iVar5 + -1;
          fVar6 = fVar6 + SQRT((pfVar3[-1] - pfVar3[7]) * (pfVar3[-1] - pfVar3[7]) +
                               (pfVar3[-2] - pfVar3[6]) * (pfVar3[-2] - pfVar3[6]) +
                               (*pfVar3 - pfVar3[8]) * (*pfVar3 - pfVar3[8]));
          if (*(float *)(param_1 + 0x2f4) < fVar6) {
            *(int *)(param_1 + 0x2fc) = iVar5;
            return;
          }
          lVar4 = lVar4 + -1;
          pfVar3 = pfVar3 + -8;
        } while (0 < lVar4);
      }
    }
  }
  return;
}



// FUNCTION 142c169d0 FUN_142c169d0 body=158 status=ok
// SIG undefined FUN_142c169d0(void)

ulonglong FUN_142c169d0(longlong *param_1,ulonglong *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = param_1[0x3d];
  if (*param_2 == uVar8) {
    uVar7 = *(uint *)(param_1 + 0x65);
    uVar8 = (ulonglong)uVar7;
    if (((uVar7 != 0xffffffff) && (param_3 != 0xffffffff)) &&
       ((param_3 == uVar7 || ((param_3 == 0 || (uVar7 == 0)))))) {
      bVar6 = (**(code **)(*param_1 + 0x530))();
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      return (ulonglong)bVar6;
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar7 = (int)lVar5 - 1;
    uVar8 = (ulonglong)uVar7;
    if (uVar7 == 0) {
      uVar8 = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar8 = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 142c16a70 FUN_142c16a70 body=207 status=ok
// SIG undefined FUN_142c16a70(void)

void FUN_142c16a70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar1 = (longlong *)param_1[0x23];
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_142c2de20();
    lVar2 = plVar1[2];
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if ((int)param_1[0x3c] == 3) {
        (**(code **)(*param_1 + 0x470))
                  (param_1,&local_28,*(uint *)(plVar1 + 0xa8) >> 3 & 0xffffff01);
        local_10 = local_20;
        local_18 = local_28;
        (**(code **)(*plVar1 + 0x8b8))(plVar1,&local_18,1);
        return;
      }
      if ((int)param_1[0x3c] == 0) {
        (**(code **)(*plVar1 + 0x8c8))(plVar1,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
      }
    }
  }
  return;
}



// FUNCTION 142c16b40 FUN_142c16b40 body=150 status=ok
// SIG undefined FUN_142c16b40(void)

undefined1 FUN_142c16b40(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_142c16be0();
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 != 0) {
    lVar4 = UMediaSoundComponent::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(longlong *)(param_1 + 0x368) = lVar1;
      return uVar3;
    }
  }
  *(undefined8 *)(param_1 + 0x368) = 0;
  return uVar3;
}



// FUNCTION 142c16be0 FUN_142c16be0 body=450 status=ok
// SIG undefined FUN_142c16be0(void)

bool FUN_142c16be0(longlong *param_1,char param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong local_res18 [2];
  undefined1 local_28 [8];
  longlong local_20;
  
  if ((param_1[0x39] != 0) && (param_2 != '\x01')) goto LAB_142c16d91;
  plVar8 = (longlong *)param_1[0x23];
  if (plVar8 == (longlong *)0x0) {
LAB_142c16c43:
    lVar4 = param_1[0x23];
    if (lVar4 == 0) goto LAB_142c16d91;
    lVar5 = FUN_14291fb80();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (plVar8 = *(longlong **)(lVar4 + 0x488), plVar8 == (longlong *)0x0))
    goto LAB_142c16d91;
  }
  else {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142c16c43;
  }
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UPathFollowingComponent::OnActorBump",L"::");
  pwVar3 = (wchar_t *)0x0;
  while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar3 = pwVar2;
  }
  FName::FName(local_res18,pwVar3 + 2,1);
  FWeakObjectPtr::operator=(local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(local_28,param_1);
  local_20 = local_res18[0];
  if ((local_res18[0] != 0) && (lVar4 = FWeakObjectPtr::Get(local_28), lVar4 != 0)) {
    UObject::FindFunction(lVar4,local_20);
  }
  FUN_1406a5aa0(plVar8 + 0x50,local_28);
  uVar7 = FUN_1429c1fc0();
  uVar7 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar7);
  (**(code **)(*param_1 + 0x468))(param_1,uVar7);
LAB_142c16d91:
  return param_1[0x39] != 0;
}



// FUNCTION 142c16db0 FUN_142c16db0 body=404 status=ok
// SIG undefined FUN_142c16db0(void)

void FUN_142c16db0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 local_res8 [8];
  
  if ((*(longlong *)(param_1 + 0x28) == 0) && (lVar7 = *(longlong *)(param_1 + 0x20), lVar7 != 0)) {
    lVar4 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (iVar9 = 0, 0 < *(int *)(lVar7 + 0x70))) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + *(longlong *)(lVar7 + 0x68));
        if (lVar2 != 0) {
          lVar5 = FUN_142bac770();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && ((*(uint *)(lVar2 + 0x610) >> 1 & 1) != 0)) {
            *(longlong *)(param_1 + 0x28) = lVar2;
            plVar1 = (longlong *)(lVar2 + 0x690);
            plVar6 = (longlong *)FMemory::Realloc(0,0x30);
            if (plVar6 == (longlong *)0x0) {
              return;
            }
            *plVar6 = (longlong)&PTR_FUN_143f4d170;
            FWeakObjectPtr::operator=(plVar6 + 1,param_1);
            plVar6[2] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
            lVar7 = FDelegateHandle::GenerateNewID();
            plVar6[4] = lVar7;
            *plVar6 = (longlong)&PTR_FUN_143f4d1b8;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
            (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
            iVar9 = *(int *)(lVar2 + 0x698);
            *(int *)(lVar2 + 0x698) = iVar9 + 1;
            if (*(int *)(lVar2 + 0x69c) < iVar9 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar9);
            }
            puVar8 = (undefined8 *)((longlong)iVar9 * 0x10 + *plVar1);
            *puVar8 = plVar6;
            *(undefined4 *)(puVar8 + 1) = 3;
            return;
          }
        }
        iVar9 = iVar9 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar9 < *(int *)(lVar7 + 0x70));
    }
  }
  return;
}



// FUNCTION 142c16f50 FUN_142c16f50 body=1074 status=ok
// SIG undefined FUN_142c16f50(void)

void FUN_142c16f50(longlong *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  undefined4 uVar9;
  float fVar10;
  ushort local_res8;
  undefined1 local_resa;
  float local_58;
  float local_54;
  float local_50;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  
  if (*(char *)((longlong)param_1 + 0x399) != '\0') {
    FUN_142c17760();
    return;
  }
  lVar4 = param_1[0x3d];
  if (((lVar4 == 0) || (plVar5 = (longlong *)param_1[0x39], plVar5 == (longlong *)0x0)) ||
     (((uVar2 = *(uint *)(lVar4 + 0x98), (uVar2 & 2) == 0 ||
       ((*(int *)(lVar4 + 0x30) < 2 || ((uVar2 & 1) == 0)))) && ((uVar2 >> 8 & 1) == 0)))) {
    local_res8 = DAT_1466911c6 | 0x20;
    local_resa = 3;
    goto LAB_142c1735d;
  }
  lVar4 = plVar5[0x2f];
  if (lVar4 == 0) {
    local_48 = DAT_1466910d0;
    local_40 = DAT_1466910d8;
  }
  else {
    local_48 = *(undefined8 *)(lVar4 + 0x220);
    local_40 = *(float *)(lVar4 + 0x228) - *(float *)(lVar4 + 0x1e4);
  }
  local_38 = local_48;
  local_30 = local_40;
  cVar7 = (**(code **)(*plVar5 + 0x538))();
  if (cVar7 == '\0') {
    return;
  }
  if ((int)param_1[0x3c] != 3) {
    return;
  }
  FUN_1422e15c0(param_1 + 0x46,&local_58);
  uVar2 = *(uint *)(param_1 + 0x54);
  if ((uVar2 & 0x10) == 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x37c);
    if ((uVar3 >> 0xd & 1) != 0) {
      lVar4 = *(longlong *)(param_1[0x39] + 0x178);
      if (lVar4 == 0) {
        local_48 = DAT_1466910d0;
        local_40 = DAT_1466910d8;
      }
      else {
        local_48 = *(undefined8 *)(lVar4 + 0x220);
        local_40 = *(float *)(lVar4 + 0x228) - *(float *)(lVar4 + 0x1e4);
      }
      if (((uVar3 & 0x14000) == 0) ||
         ((((ABS(*(float *)(param_1 + 0x6b)) <= 0.0001 &&
            (ABS(*(float *)((longlong)param_1 + 0x35c)) <= 0.0001)) &&
           (ABS(*(float *)(param_1 + 0x6c)) <= 0.0001)) ||
          (0.0 <= (local_54 - (float)((ulonglong)local_48 >> 0x20)) *
                  *(float *)((longlong)param_1 + 0x35c) +
                  *(float *)(param_1 + 0x6b) * (local_58 - (float)local_48) +
                  (local_50 - local_40) * *(float *)(param_1 + 0x6c))))) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      local_40 = *(float *)((longlong)param_1 + 0x294);
      uVar1 = *(undefined8 *)((longlong)param_1 + 0x28c);
      fVar10 = *(float *)((longlong)param_1 + 0x1fc);
      if ((*(uint *)(param_1[0x3d] + 0x98) >> 2 & 1) != 0) {
        local_48._0_4_ = (float)uVar1;
        local_48._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        fVar10 = *(float *)((longlong)param_1 + 0x1fc) -
                 SQRT((local_48._4_4_ - local_54) * (local_48._4_4_ - local_54) +
                      ((float)local_48 - local_58) * ((float)local_48 - local_58) +
                      (local_40 - local_50) * (local_40 - local_50));
        if (fVar10 <= *(float *)(param_1 + 0x3f)) {
          fVar10 = *(float *)(param_1 + 0x3f);
        }
      }
      local_48 = uVar1;
      if (!bVar6) {
        if ((uVar2 & 1) == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)((longlong)param_1 + 0x204);
        }
        cVar7 = FUN_142c0a600(param_1,&local_58,0,0,&local_38,fVar10,uVar9);
        if (cVar7 == '\0') goto LAB_142c172b4;
      }
      goto LAB_142c17252;
    }
    if (((uVar3 >> 0xf & 1) != 0) &&
       (cVar7 = FUN_142c0a600(param_1,&local_58,uVar2,0,&local_38,0,0x40800000), cVar7 != '\0')) {
      UCrowdFollowingComponent::SwitchToNextPathPart();
    }
  }
  else {
    (**(code **)(*param_1 + 0x458))(param_1);
LAB_142c17252:
    local_res8 = DAT_1466911c0;
    local_resa = 0;
    (**(code **)(*param_1 + 0x450))(param_1,&local_res8);
  }
LAB_142c172b4:
  if ((int)param_1[0x3c] != 3) {
    return;
  }
  if ((*(byte *)(param_1 + 0x54) & 0x80) != 0) {
    plVar5 = (longlong *)param_1[0x3d];
    if (((int)plVar5[0xe] == DAT_146691110) ||
       ((plVar5[0xf] != 0 && (cVar7 = FNavPathType::IsA(plVar5[0xf],&DAT_146691110), cVar7 != '\0'))
       )) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    plVar8 = (longlong *)0x0;
    if (bVar6) {
      plVar8 = plVar5;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x70))(plVar8,&local_38,1);
    }
  }
  cVar7 = (**(code **)(*param_1 + 0x4f8))(param_1);
  if (cVar7 == '\0') {
    return;
  }
  cVar7 = FUN_142c0abf0(param_1);
  if (cVar7 == '\0') {
    return;
  }
  local_resa = 1;
  local_res8 = DAT_1466911c2;
LAB_142c1735d:
  (**(code **)(*param_1 + 0x450))(param_1,&local_res8);
  return;
}



// FUNCTION 142c17390 FUN_142c17390 body=972 status=ok
// SIG undefined FUN_142c17390(void)

void FUN_142c17390(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined2 local_res8;
  undefined1 local_resa;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  
  if (param_1[0x39] == 0) {
    local_48 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_40 = DAT_1468b5d98;
  }
  else {
    lVar1 = *(longlong *)(param_1[0x39] + 0x178);
    local_48 = DAT_1466910d0;
    local_40 = DAT_1466910d8;
    if (lVar1 != 0) {
      local_48 = *(undefined8 *)(lVar1 + 0x220);
      local_40 = *(float *)(lVar1 + 0x228) - *(float *)(lVar1 + 0x1e4);
    }
  }
  FUN_142c15ef0(local_48,&local_48);
  if (((int)param_1[0x6b] == -1) || ((*(byte *)(param_1 + 0x6c) & 2) == 0)) {
    if ((int)param_1[0x6e] != 0) {
      cVar2 = (**(code **)(*param_1 + 0x508))
                        (param_1,param_1[0x6d] + (longlong)((int)param_1[0x6e] + -1) * 0xc);
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0x458))(param_1);
        (**(code **)(*param_1 + 0x4d8))(param_1,*(undefined4 *)((longlong)param_1 + 0x37c));
      }
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffffd;
      *(undefined4 *)(param_1 + 0x6e) = 0;
      if (*(int *)((longlong)param_1 + 0x374) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0x6d,0);
      }
    }
    FUN_142c17760(param_1);
    return;
  }
  cVar2 = FUN_142c0a080(param_1,&local_48);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x458))();
LAB_142c17643:
    local_res8 = DAT_1466911c0;
    local_resa = 0;
    (**(code **)(*param_1 + 0x450))(param_1,&local_res8);
    return;
  }
  cVar2 = (**(code **)(*param_1 + 0x508))(param_1,&local_48);
  if (cVar2 == '\0') {
    return;
  }
  iVar3 = (int)param_1[0x6f] + 1;
  *(int *)(param_1 + 0x6f) = iVar3;
  if ((iVar3 < 0) || ((int)param_1[0x6e] <= iVar3)) {
    if ((*(byte *)(param_1 + 0x6c) & 1) == 0) {
      *(undefined4 *)(param_1 + 0x6e) = 0;
      if (*(int *)((longlong)param_1 + 0x374) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0x6d,0);
      }
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffffd;
      (**(code **)(*param_1 + 0x458))(param_1);
      (**(code **)(*param_1 + 0x4d8))(param_1,*(undefined4 *)((longlong)param_1 + 0x37c));
      return;
    }
    (**(code **)(*param_1 + 0x458))(param_1);
    goto LAB_142c17643;
  }
  FUN_1422f9470(param_1 + 0x46,0,param_1[0x6d] + (longlong)iVar3 * 0xc);
  lVar1 = param_1[0x6d];
  lVar4 = (longlong)(int)param_1[0x6f];
  fVar8 = *(float *)(lVar1 + lVar4 * 0xc) - *(float *)(lVar1 + -0xc + lVar4 * 0xc);
  fVar9 = *(float *)(lVar1 + 4 + lVar4 * 0xc) - *(float *)(lVar1 + -8 + lVar4 * 0xc);
  local_50 = *(float *)(lVar1 + 8 + lVar4 * 0xc) - *(float *)(lVar1 + -4 + lVar4 * 0xc);
  fVar5 = fVar9 * fVar9 + fVar8 * fVar8 + local_50 * local_50;
  if (fVar5 != 1.0) {
    if (fVar5 < 1e-08) {
      local_50 = DAT_1468b5d98;
      local_58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_142c175f2;
    }
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar8 = fVar8 * fVar6;
    fVar9 = fVar9 * fVar6;
    local_50 = local_50 * fVar6;
  }
  local_58 = CONCAT44(fVar9,fVar8);
LAB_142c175f2:
  param_1[0x5d] = local_58;
  *(float *)(param_1 + 0x5e) = local_50;
  FUN_142c16a70(param_1);
  return;
}



// FUNCTION 142c17760 FUN_142c17760 body=2067 status=ok
// SIG undefined FUN_142c17760(void)

/* WARNING: Removing unreachable block (ram,0x000142c17913) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c17760(longlong *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 local_res8;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  float local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [224];
  
  if ((param_1[0x3d] != 0) && (plVar13 = (longlong *)param_1[0x39], plVar13 != (longlong *)0x0)) {
    lVar5 = plVar13[0x2f];
    if (lVar5 == 0) {
      local_180 = DAT_1466910d8;
      puVar10 = &local_188;
      local_188 = DAT_1466910d0;
    }
    else {
      local_198 = *(undefined8 *)(lVar5 + 0x220);
      puVar10 = &local_198;
      local_190 = *(float *)(lVar5 + 0x228) - *(float *)(lVar5 + 0x1e4);
    }
    local_178 = *puVar10;
    local_170 = *(undefined4 *)(puVar10 + 1);
    cVar8 = (**(code **)(*plVar13 + 0x538))();
    uVar2 = *(uint *)(param_1[0x3d] + 0x98);
    if ((((uVar2 & 2) == 0) || (*(int *)(param_1[0x3d] + 0x30) < 2)) || ((uVar2 & 1) == 0)) {
      if ((uVar2 >> 8 & 1) == 0) {
        local_res8 = (float)CONCAT13(local_res8._3_1_,0x30000);
        local_res8 = (float)(CONCAT22(local_res8._2_2_,DAT_1466911c6) | 0x20);
        (**(code **)(*param_1 + 0x450))(param_1,&local_res8);
        return;
      }
      if ((((*(uint *)(param_1 + 0x54) >> 8 & 1) != 0) && (cVar8 != '\0')) &&
         (((int)param_1[0x3c] == 3 &&
          (cVar9 = (**(code **)(*param_1 + 0x508))(param_1,&local_178), cVar9 != '\0')))) {
        (**(code **)(*param_1 + 0x458))(param_1);
        (**(code **)(*param_1 + 0x4d8))(param_1,*(undefined4 *)((longlong)param_1 + 0x2d4));
      }
    }
    if ((*(byte *)(param_1 + 0x54) & 0x80) == 0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = (longlong *)param_1[0x3d];
      if (((int)plVar13[0xe] != DAT_146691110) &&
         ((plVar13[0xf] == 0 ||
          (cVar9 = FNavPathType::IsA(plVar13[0xf],&DAT_146691110), cVar9 == '\0')))) {
        plVar13 = (longlong *)0x0;
      }
    }
    lVar5 = param_1[0x65];
    if ((cVar8 != '\0') && ((int)param_1[0x3c] == 3)) {
      iVar3 = *(int *)((longlong)param_1 + 0x2d4);
      iVar4 = *(int *)(param_1[0x3d] + 0x30);
      if ((plVar13 == (longlong *)0x0) ||
         (((int)plVar13[0x2b] == (int)plVar13[0x29] + -1 && (0 < (int)plVar13[0x29])))) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (((*(byte *)(param_1 + 0x54) & 0x10) == 0) &&
         ((iVar3 <= *(int *)((longlong)param_1 + 0x29c) ||
          (cVar8 = FUN_142c0a080(param_1,&local_178), cVar8 == '\0')))) {
        if (((iVar3 < iVar4 + -1) || ((*(byte *)(param_1 + 0x54) & 4) == 0)) || (!bVar7)) {
          cVar8 = (**(code **)(*param_1 + 0x508))(param_1,&local_178);
          if (cVar8 != '\0') {
            (**(code **)(*param_1 + 0x458))(param_1);
            (**(code **)(*param_1 + 0x4d8))(param_1,*(undefined4 *)((longlong)param_1 + 0x2d4));
          }
        }
        else {
          cVar8 = FWeakObjectPtr::IsValid(param_1 + 0x44);
          if ((cVar8 != '\0') && ((*(uint *)(param_1[0x3d] + 0x98) >> 2 & 1) == 0)) {
            plVar6 = (longlong *)param_1[0x45];
            if (plVar6 == (longlong *)0x0) {
              lVar11 = FWeakObjectPtr::Get(param_1 + 0x44);
              lVar11 = *(longlong *)(lVar11 + 0x168);
              if (lVar11 == 0) {
                local_198 = _DAT_1468b5d90;
                local_190 = (float)DAT_1468b5d98;
              }
              else {
                local_190 = (float)*(undefined4 *)(lVar11 + 0x228);
                local_198 = *(undefined8 *)(lVar11 + 0x220);
              }
              local_160 = local_190;
              puVar10 = &local_168;
              local_168 = local_198;
            }
            else {
              puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_158);
            }
            local_198 = *puVar10;
            local_190 = *(float *)(puVar10 + 1);
            lVar11 = FWeakObjectPtr::Get(param_1 + 0x44);
            lVar11 = *(longlong *)(lVar11 + 0x168);
            if (lVar11 == 0) {
              fVar14 = 0.0;
              fVar15 = 0.0;
              fVar18 = 0.0;
              fVar20 = 1.0;
            }
            else {
              fVar14 = *(float *)(lVar11 + 0x210);
              fVar15 = *(float *)(lVar11 + 0x214);
              fVar18 = *(float *)(lVar11 + 0x218);
              fVar20 = *(float *)(lVar11 + 0x21c);
            }
            fVar19 = fVar15 + fVar15;
            fVar16 = fVar18 + fVar18;
            local_168 = 0;
            local_160 = 0;
            fVar17 = (fVar14 + fVar14) * fVar14;
            fStack_130 = (fVar14 + fVar14) * fVar20;
            local_128 = fVar19 * fVar20 + fVar16 * fVar14;
            fStack_140 = fVar16 * fVar14 - fVar19 * fVar20;
            local_148 = 1.0 - (fVar16 * fVar18 + fVar19 * fVar15);
            fVar1 = *(float *)((longlong)param_1 + 0x274);
            fStack_120 = 1.0 - (fVar19 * fVar15 + fVar17);
            fStack_134 = 1.0 - (fVar16 * fVar18 + fVar17);
            fVar18 = *(float *)(param_1 + 0x4f);
            local_138 = fVar19 * fVar14 - fVar16 * fVar20;
            local_res8 = fVar16 * fVar20 + fVar19 * fVar14;
            fVar14 = *(float *)((longlong)param_1 + 0x27c);
            local_158 = *(float *)((longlong)param_1 + 0x274);
            uStack_154 = (undefined4)param_1[0x4f];
            uStack_150 = *(undefined4 *)((longlong)param_1 + 0x27c);
            fStack_124 = fVar16 * fVar15 - fStack_130;
            fStack_130 = fStack_130 + fVar16 * fVar15;
            local_118 = (float)local_198;
            fStack_114 = local_198._4_4_;
            fStack_110 = local_190;
            uStack_10c = 0x3f800000;
            uStack_14c = 0x3f800000;
            uStack_11c = 0;
            uStack_12c = 0;
            uStack_13c = 0;
            local_180 = local_190 * 1.0 + fVar14 * fStack_120 +
                        fVar18 * fStack_130 + fVar1 * fStack_140;
            local_188 = CONCAT44(local_198._4_4_ * 1.0 + fVar14 * fStack_124 +
                                 fVar18 * fStack_134 + fVar1 * local_res8,
                                 (float)local_198 * 1.0 + fVar14 * local_128 +
                                 fVar18 * local_138 + fVar1 * local_148);
            fStack_144 = local_res8;
            FUN_1422f9470(param_1 + 0x46,0,&local_188);
          }
          FUN_142c16a70(param_1);
        }
      }
      else {
        (**(code **)(*param_1 + 0x458))(param_1);
        local_res8._0_3_ = (uint3)DAT_1466911c0;
        (**(code **)(*param_1 + 0x450))(param_1,&local_res8);
      }
      if (((int)param_1[0x3c] == 3) && ((int)lVar5 == (int)param_1[0x65])) {
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x70))(plVar13,&local_178,1);
        }
        cVar8 = (**(code **)(*param_1 + 0x4f8))(param_1);
        if ((cVar8 != '\0') && (cVar8 = FUN_142c0abf0(param_1), cVar8 != '\0')) {
          if (-1 < *(int *)((longlong)param_1 + 0x2d4)) {
            lVar5 = param_1[0x3d];
            if (((*(int *)((longlong)param_1 + 0x2d4) < *(int *)(lVar5 + 0x30)) &&
                (-1 < (int)param_1[0x5a])) && ((int)param_1[0x5a] < *(int *)(lVar5 + 0x30))) {
              uVar12 = FNavigationPath::GetPathPointLocation(lVar5,local_108);
              FUN_1422e15c0(uVar12,&local_158);
              uVar12 = FNavigationPath::GetPathPointLocation(lVar5,&local_148,(int)param_1[0x5a]);
              FUN_1422e15c0(uVar12,&local_168);
            }
          }
          local_res8._0_3_ = CONCAT12(1,DAT_1466911c2);
          (**(code **)(*param_1 + 0x450))(param_1,&local_res8);
        }
      }
    }
    return;
  }
  local_res8 = (float)CONCAT13(local_res8._3_1_,0x30000);
  local_res8 = (float)(CONCAT22(local_res8._2_2_,DAT_1466911c6) | 0x20);
  (**(code **)(*param_1 + 0x450))(param_1,&local_res8);
  return;
}



// FUNCTION 142c17f80 UpdateSourceGrids body=450 status=ok
// SIG undefined UpdateSourceGrids(void)

longlong UNavLocalGridManager::UpdateSourceGrids(longlong param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar7 = *(int *)(param_1 + 0x50);
  iVar4 = *(int *)(param_1 + 0x40);
  if ((iVar7 <= iVar4) && (0 < iVar7)) {
    if (iVar7 < iVar4) {
      do {
        iVar7 = 0;
        iVar5 = 0;
        lVar10 = 0;
        fVar11 = 3.4028235e+38;
        if (3 < iVar4) {
          pfVar6 = (float *)(*(longlong *)(param_1 + 0x38) + 0xe8);
          iVar9 = 2;
          lVar10 = (ulonglong)((iVar4 - 4U >> 2) + 1) << 2;
          do {
            fVar13 = *pfVar6;
            iVar2 = iVar5;
            fVar3 = pfVar6[-0x20];
            if (fVar11 <= pfVar6[-0x20]) {
              iVar2 = iVar7;
              fVar3 = fVar11;
            }
            fVar12 = fVar3;
            if (fVar13 < fVar3) {
              fVar12 = fVar13;
            }
            fVar1 = pfVar6[0x20];
            fVar11 = pfVar6[0x40];
            iVar7 = iVar9 + -1;
            if (fVar3 <= fVar13) {
              iVar7 = iVar2;
            }
            fVar13 = fVar12;
            if (fVar1 <= fVar12) {
              fVar13 = fVar1;
            }
            iVar2 = iVar9;
            if (fVar12 <= fVar1) {
              iVar2 = iVar7;
            }
            iVar7 = iVar9 + 1;
            if (fVar13 <= fVar11) {
              iVar7 = iVar2;
              fVar11 = fVar13;
            }
            pfVar6 = pfVar6 + 0x80;
            iVar5 = iVar5 + 4;
            iVar9 = iVar9 + 4;
          } while (iVar5 < iVar4 + -3);
        }
        if (iVar5 < iVar4) {
          pfVar6 = (float *)(*(longlong *)(param_1 + 0x38) + 0x68 + lVar10 * 0x80);
          do {
            fVar13 = *pfVar6;
            pfVar6 = pfVar6 + 0x20;
            iVar9 = iVar5;
            if (fVar11 <= fVar13) {
              iVar9 = iVar7;
              fVar13 = fVar11;
            }
            fVar11 = fVar13;
            iVar7 = iVar9;
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar4);
        }
        lVar10 = *(longlong *)(param_1 + 0x38);
        lVar8 = (longlong)iVar7 * 0x80;
        if (*(longlong *)(lVar8 + 0x58 + lVar10) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar8 + 0x48 + lVar10) != 0) {
          FMemory::Free();
        }
        iVar4 = *(int *)(param_1 + 0x40);
        iVar5 = (iVar4 - iVar7) + -1;
        if (iVar5 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x38) + lVar8),
                     (void *)((longlong)(iVar7 + 1) * 0x80 + *(longlong *)(param_1 + 0x38)),
                     (longlong)iVar5 << 7);
          iVar4 = *(int *)(param_1 + 0x40);
        }
        iVar4 = iVar4 + -1;
        *(int *)(param_1 + 0x40) = iVar4;
        iVar7 = iVar4;
      } while (*(int *)(param_1 + 0x50) < iVar4);
    }
    return CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),1);
  }
  return (ulonglong)(uint3)((uint)iVar7 >> 8) << 8;
}



// FUNCTION 142c18150 FUN_142c18150 body=243 status=ok
// SIG undefined FUN_142c18150(void)

undefined8 * FUN_142c18150(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 1) = *puVar1;
  *(undefined4 *)((longlong)param_2 + 0xc) = puVar1[1];
  param_2[0x6a] = 0;
  if (*(longlong *)(puVar1 + 0xd2) == 0) {
    _guard_xfg_dispatch_icall_nop(param_2 + 2,puVar1 + 2,0x340);
  }
  if (param_2[0x6a] != 0) {
    FMemory::Free();
  }
  param_2[0x6a] = *(undefined8 *)(puVar1 + 0xd2);
  *(undefined8 *)(puVar1 + 0xd2) = 0;
  *(undefined4 *)(param_2 + 0x6b) = puVar1[0xd4];
  *(undefined4 *)((longlong)param_2 + 0x35c) = puVar1[0xd5];
  *(undefined8 *)(puVar1 + 0xd4) = 0;
  *(undefined1 *)(param_2 + 0x6c) = *(undefined1 *)(puVar1 + 0xd6);
  param_2[0x6d] = *(undefined8 *)(puVar1 + 0xd8);
  *(uint *)(param_2 + 0x6e) =
       *(uint *)(param_2 + 0x6e) ^ (puVar1[0xda] ^ *(uint *)(param_2 + 0x6e)) & 1;
  return param_2;
}



// FUNCTION 142c18250 FUN_142c18250 body=594 status=ok
// SIG undefined FUN_142c18250(void)

int * FUN_142c18250(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong *_Src;
  bool bVar13;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar6 * 0x20 + 4 + *param_1);
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar6 * 0x20 + *param_1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  *(undefined4 *)(_Src + 1) = 0xffffffff;
  *(undefined8 *)((longlong)_Src + 0xc) = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    iVar2 = local_res8[0];
    lVar10 = (longlong)local_res8[0];
    bVar13 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar10 * 0x20 + *param_1),_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      *param_2 = iVar2;
      uVar9 = (undefined1)local_res8[0];
      goto LAB_142c18479;
    }
  }
  uVar9 = 0;
  cVar4 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar4 == '\0') {
    iVar6 = (int)(*_Src >> 4);
    uVar8 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
    uVar12 = -(uVar8 + iVar6) ^ uVar8 >> 0xd;
    uVar7 = (iVar6 - uVar8) - uVar12 ^ uVar12 >> 0xc;
    uVar8 = (uVar8 - uVar7) - uVar12 ^ uVar7 << 0x10;
    uVar12 = (uVar12 - uVar8) - uVar7 ^ uVar8 >> 5;
    uVar7 = (uVar7 - uVar8) - uVar12 ^ uVar12 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar12 ^ uVar7 << 10;
    uVar7 = ((uVar12 - uVar8) - uVar7 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar7;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_142c18479:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar9;
  }
  return param_2;
}



// FUNCTION 142c184b0 Emplace<TKeyInitializer<FAIGenericID<FPerceptionListenerCounter>_const_&>_> body=417 status=ok
// SIG undefined Emplace<TKeyInitializer<FAIGenericID<FPerceptionListenerCounter>_const_&>_>(void)

int * TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FAIGenericID<FPerceptionListenerCounter>_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uStack_40;
  uint uStack_3c;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar6 = false;
  *local_30 = *(uint *)*param_3;
  uStack_40 = CONCAT31(uStack_40._1_3_,0xff);
  *param_2 = local_38[0];
  local_30[1] = 0xbf800000;
  local_30[2] = 0xbf800000;
  local_30[3] = uStack_40;
  local_30[4] = uStack_3c & 0xfffffffe;
  local_30[5] = 0xffffffff;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)((longlong)iVar4 * 0x1c + *param_1) == *local_30) goto LAB_142c1858b;
          iVar4 = *(int *)((longlong)iVar4 * 0x1c + 0x14 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_142c1858b:
    bVar6 = iVar4 != -1;
    if (bVar6) {
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar4 * 0x1c + *param_1),local_30,0x14);
      TSparseArray<TSetElement<TTuple<int,FGuid>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_142c18626;
    }
  }
  cVar1 = ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar2 = (int)param_1[9] - 1U & *local_30;
    local_30[6] = uVar2;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[5] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         *param_2;
  }
LAB_142c18626:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 142c18660 Emplace<TKeyInitializer<FAIGenericID<FPerceptionListenerCounter>_const_&>_> body=402 status=ok
// SIG undefined Emplace<TKeyInitializer<FAIGenericID<FPerceptionListenerCounter>_const_&>_>(void)

int * TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FAIGenericID<FPerceptionListenerCounter>_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_58 [2];
  uint *local_50;
  uint local_38;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_58);
  bVar6 = false;
  *local_50 = *(uint *)*param_3;
  local_50[1] = 0;
  local_50[2] = 0xbf800000;
  local_50[3] = 0xbf800000;
  local_50[4] = 0xbf800000;
  local_38 = CONCAT31(local_38._1_3_,0xff);
  local_50[5] = local_38;
  local_50[6] = 0xffffffff;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  *param_2 = local_58[0];
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_50) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)((longlong)iVar4 * 0x20 + *param_1) == *local_50) goto LAB_142c1872e;
          iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_142c1872e:
    bVar6 = iVar4 != -1;
    if (bVar6) {
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar4 * 0x20 + *param_1),local_50,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_58[0],1);
      *param_2 = iVar4;
      goto LAB_142c187c9;
    }
  }
  cVar1 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar2 = (int)param_1[9] - 1U & *local_50;
    local_50[7] = uVar2;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_50[6] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         *param_2;
  }
LAB_142c187c9:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 142c18800 Emplace<TPairInitializer<FAIGenericID<FPerceptionListenerCounter>_&&,UAISense_Hearing::FDigestedHearingProperties_const_&>_> body=398 status=ok
// SIG undefined Emplace<TPairInitializer<FAIGenericID<FPerceptionListenerCounter>_&&,UAISense_Hearing::FDigestedHearingProperties_const_&>_>(void)

int * TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FAIGenericID<FPerceptionListenerCounter>_&&,UAISense_Hearing::FDigestedHearingProperties_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (uint *)param_3[1];
  bVar10 = false;
  puVar2 = (uint *)*param_3;
  *param_2 = local_38[0];
  *local_30 = *puVar2;
  uVar6 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  local_30[1] = *puVar1;
  local_30[2] = uVar6;
  local_30[3] = uVar3;
  local_30[4] = uVar4;
  local_30[5] = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    if (iVar9 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar8 != -1) {
        do {
          if (*(uint *)((longlong)iVar8 * 0x1c + *param_1) == *local_30) goto LAB_142c188cb;
          iVar8 = *(int *)((longlong)iVar8 * 0x1c + 0x14 + *param_1);
        } while (iVar8 != -1);
      }
    }
    iVar8 = -1;
LAB_142c188cb:
    bVar10 = iVar8 != -1;
    if (bVar10) {
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar8 * 0x1c + *param_1),local_30,0x14);
      TSparseArray<TSetElement<TTuple<int,FGuid>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar8;
      goto LAB_142c18966;
    }
  }
  cVar5 = ConditionalRehash(param_1,iVar9,0);
  if (cVar5 == '\0') {
    uVar6 = (int)param_1[9] - 1U & *local_30;
    local_30[6] = uVar6;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    local_30[5] = *(uint *)((longlong)plVar7 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_142c18966:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 142c18990 Emplace<TPairInitializer<FAIGenericID<FPerceptionListenerCounter>_&&,UAISense_Sight::FDigestedSightProperties_const_&>_> body=398 status=ok
// SIG undefined Emplace<TPairInitializer<FAIGenericID<FPerceptionListenerCounter>_&&,UAISense_Sight::FDigestedSightProperties_const_&>_>(void)

int * TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FAIGenericID<FPerceptionListenerCounter>_&&,UAISense_Sight::FDigestedSightProperties_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (uint *)param_3[1];
  bVar10 = false;
  puVar2 = (uint *)*param_3;
  *param_2 = local_38[0];
  *local_30 = *puVar2;
  uVar6 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  local_30[1] = *puVar1;
  local_30[2] = uVar6;
  local_30[3] = uVar3;
  local_30[4] = uVar4;
  local_30[5] = puVar1[4];
  local_30[6] = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    if (iVar9 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar8 != -1) {
        do {
          if (*(uint *)((longlong)iVar8 * 0x20 + *param_1) == *local_30) goto LAB_142c18a5b;
          iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *param_1);
        } while (iVar8 != -1);
      }
    }
    iVar8 = -1;
LAB_142c18a5b:
    bVar10 = iVar8 != -1;
    if (bVar10) {
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar8 * 0x20 + *param_1),local_30,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar8;
      goto LAB_142c18af6;
    }
  }
  cVar5 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar5 == '\0') {
    uVar6 = (int)param_1[9] - 1U & *local_30;
    local_30[7] = uVar6;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    local_30[6] = *(uint *)((longlong)plVar7 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_142c18af6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 142c18b20 FUN_142c18b20 body=694 status=ok
// SIG undefined FUN_142c18b20(void)

int * FUN_142c18b20(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar7 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar9 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar5 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar6 + lVar5);
  *puVar14 = *puVar14 | 1 << ((byte)iVar11 & 0x1f);
  puVar1 = (undefined1 *)param_3[1];
  lVar8 = (longlong)iVar11 * 0x20;
  puVar14 = (uint *)(*param_1 + lVar8);
  *puVar14 = *(uint *)*param_3;
  *(undefined1 *)(puVar14 + 2) = *puVar1;
  *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(puVar1 + 8);
  puVar14[6] = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar14) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(uint *)((longlong)iVar9 * 0x20 + *param_1) == *puVar14) break;
          iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *param_1);
          iVar10 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar10 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar10 * 0x20 + *param_1),puVar14,0x18);
      bVar3 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar11;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar8 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar8 + 4 + lVar2) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar6 + lVar5);
      *puVar14 = *puVar14 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142c18db1;
    }
  }
  if (3 < uVar13) {
    uVar4 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar15;
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
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & *puVar14;
    puVar14[7] = uVar13;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar14[6] = *(uint *)((longlong)plVar6 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142c18db1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 142c18de0 FUN_142c18de0 body=569 status=ok
// SIG undefined FUN_142c18de0(void)

int * FUN_142c18de0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x28);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar9 = false;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar6 * 0x28);
  puVar2 = (uint *)param_3[1];
  *puVar1 = *(uint *)*param_3;
  puVar1[2] = *puVar2;
  puVar1[3] = puVar2[1];
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar2 + 2);
  *(char *)(puVar1 + 6) = (char)puVar2[4];
  puVar1[7] = puVar2[5];
  puVar1[8] = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 != 1) {
    if (iVar8 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x28) == *puVar1) goto LAB_142c18f4b;
          iVar4 = *(int *)(*param_1 + 0x20 + (longlong)iVar4 * 0x28);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_142c18f4b:
    bVar9 = iVar4 != -1;
    if (bVar9) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x28),puVar1,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      *param_2 = iVar4;
      goto LAB_142c18ff0;
    }
  }
  cVar3 = TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar8,0);
  if (cVar3 == '\0') {
    uVar7 = (int)param_1[9] - 1U & *puVar1;
    puVar1[9] = uVar7;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar1[8] = *(uint *)((longlong)plVar5 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_142c18ff0:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 142c19020 FUN_142c19020 body=604 status=ok
// SIG undefined FUN_142c19020(void)

int * FUN_142c19020(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  ulonglong *_Src;
  bool bVar10;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<896,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar8 * 0x380 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x380 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar8 * 0x380 + *param_1);
  FUN_142c18150(param_3,_Src);
  *(undefined4 *)(_Src + 0x6f) = 0xffffffff;
  bVar10 = false;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 != 1) {
    FUN_140777f40(param_1,local_res8,*_Src);
    bVar10 = local_res8[0] != -1;
    if (bVar10) {
      _Dst = (void *)((longlong)local_res8[0] * 0x380 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x350) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x378);
      FUN_142c25fd0(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142c19254;
    }
  }
  cVar3 = FUN_142c1db00(param_1,iVar8,0);
  if (cVar3 == '\0') {
    iVar8 = (int)(*_Src >> 4);
    uVar7 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar9 = -(uVar7 + iVar8) ^ uVar7 >> 0xd;
    uVar6 = (iVar8 - uVar7) - uVar9 ^ uVar9 >> 0xc;
    uVar7 = (uVar7 - uVar6) - uVar9 ^ uVar6 << 0x10;
    uVar9 = (uVar9 - uVar7) - uVar6 ^ uVar7 >> 5;
    uVar6 = (uVar6 - uVar7) - uVar9 ^ uVar9 >> 3;
    uVar7 = (uVar7 - uVar6) - uVar9 ^ uVar6 << 10;
    uVar6 = ((uVar9 - uVar7) - uVar6 ^ uVar7 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x37c) = uVar6;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x6f) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_142c19254:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 142c19280 FUN_142c19280 body=608 status=ok
// SIG undefined FUN_142c19280(void)

int * FUN_142c19280(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  uint *_Src;
  bool bVar8;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      FUN_141a09b60(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)((longlong)iVar6 * 0x3c + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x3c + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar8 = false;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  puVar1 = (uint *)param_3[1];
  _Src = (uint *)((longlong)iVar6 * 0x3c + *param_1);
  *_Src = *(uint *)*param_3;
  _Src[1] = *puVar1;
  _Src[2] = puVar1[1];
  _Src[3] = puVar1[2];
  *(undefined8 *)(_Src + 4) = *(undefined8 *)(puVar1 + 3);
  _Src[6] = puVar1[5];
  *(undefined8 *)(_Src + 7) = *(undefined8 *)(puVar1 + 6);
  _Src[9] = puVar1[8];
  *(char *)(_Src + 10) = (char)puVar1[9];
  _Src[0xb] = _Src[0xb] ^ (puVar1[10] ^ _Src[0xb]) & 1;
  _Src[0xc] = puVar1[0xb];
  _Src[0xd] = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    if (iVar7 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)((longlong)iVar3 * 0x3c + *param_1) == *_Src) goto LAB_142c1941b;
          iVar3 = *(int *)((longlong)iVar3 * 0x3c + 0x34 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_142c1941b:
    bVar8 = iVar3 != -1;
    if (bVar8) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar3 * 0x3c + *param_1),_Src,0x34);
      TSparseArray<TSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      *param_2 = iVar3;
      goto LAB_142c194b7;
    }
  }
  cVar2 = TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7,0);
  if (cVar2 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *_Src;
    _Src[0xe] = uVar4;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    _Src[0xd] = *(uint *)((longlong)plVar5 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_142c194b7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 142c194e0 HeapSortInternal<FAISightQuery,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_> body=497 status=ok
// SIG undefined HeapSortInternal<FAISightQuery,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>(void)

void AlgoImpl::
     HeapSortInternal<FAISightQuery,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar11 = (param_2 + -2) / 2;
  if (-1 < iVar11) {
    iVar12 = iVar11 * 2 + 1;
    iVar16 = iVar12;
    iVar17 = iVar11;
joined_r0x000142c1950a:
    do {
      if (iVar12 < param_2) {
        iVar14 = iVar11 * 2 + 1;
        iVar12 = iVar11 * 2 + 2;
        iVar15 = iVar14;
        if ((iVar12 < param_2) &&
           (fVar4 = *(float *)((longlong)param_1 + (longlong)iVar12 * 0x24 + 0xc),
           pfVar3 = (float *)((longlong)param_1 + (longlong)iVar14 * 0x24 + 0xc), iVar15 = iVar12,
           *pfVar3 <= fVar4 && fVar4 != *pfVar3)) {
          iVar15 = iVar14;
        }
        puVar13 = (undefined8 *)((longlong)param_1 + (longlong)iVar11 * 0x24);
        puVar1 = (undefined8 *)((longlong)param_1 + (longlong)iVar15 * 0x24);
        if (*(float *)((longlong)param_1 + (longlong)iVar15 * 0x24 + 0xc) <
            *(float *)((longlong)puVar13 + 0xc)) {
          if (puVar13 != puVar1) {
            uVar6 = puVar1[1];
            uVar5 = *(undefined4 *)(puVar13 + 4);
            uVar7 = *puVar13;
            uVar8 = puVar13[1];
            uVar9 = puVar13[2];
            uVar10 = puVar13[3];
            *puVar13 = *puVar1;
            puVar13[1] = uVar6;
            uVar6 = puVar1[3];
            puVar13[2] = puVar1[2];
            puVar13[3] = uVar6;
            *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(puVar1 + 4);
            *puVar1 = uVar7;
            puVar1[1] = uVar8;
            puVar1[2] = uVar9;
            puVar1[3] = uVar10;
            *(undefined4 *)(puVar1 + 4) = uVar5;
          }
          iVar12 = iVar15 * 2 + 1;
          iVar11 = iVar15;
          goto joined_r0x000142c1950a;
        }
      }
      iVar12 = iVar16 + -2;
      iVar11 = iVar17 + -1;
      iVar16 = iVar12;
      iVar17 = iVar11;
    } while (-1 < iVar11);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar13 = (undefined8 *)((longlong)param_1 + (longlong)param_2 * 0x24);
    do {
      if (param_1 != puVar13) {
        uVar6 = puVar13[1];
        uVar5 = *(undefined4 *)(param_1 + 4);
        uVar7 = *param_1;
        uVar8 = param_1[1];
        uVar9 = param_1[2];
        uVar10 = param_1[3];
        *param_1 = *puVar13;
        param_1[1] = uVar6;
        uVar6 = puVar13[3];
        param_1[2] = puVar13[2];
        param_1[3] = uVar6;
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar13 + 4);
        *puVar13 = uVar7;
        puVar13[1] = uVar8;
        puVar13[2] = uVar9;
        puVar13[3] = uVar10;
        *(undefined4 *)(puVar13 + 4) = uVar5;
      }
      iVar11 = 0;
      if (1 < param_2) {
        do {
          iVar12 = iVar11 * 2 + 1;
          iVar17 = iVar11 * 2 + 2;
          iVar16 = iVar12;
          if ((iVar17 < param_2) &&
             (fVar4 = *(float *)((longlong)param_1 + (longlong)iVar17 * 0x24 + 0xc),
             pfVar3 = (float *)((longlong)param_1 + (longlong)iVar12 * 0x24 + 0xc), iVar16 = iVar17,
             *pfVar3 <= fVar4 && fVar4 != *pfVar3)) {
            iVar16 = iVar12;
          }
          puVar1 = (undefined8 *)((longlong)param_1 + (longlong)iVar11 * 0x24);
          puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar16 * 0x24);
          if (*(float *)((longlong)puVar1 + 0xc) <=
              *(float *)((longlong)param_1 + (longlong)iVar16 * 0x24 + 0xc)) break;
          if (puVar1 != puVar2) {
            uVar6 = puVar2[1];
            uVar5 = *(undefined4 *)(puVar1 + 4);
            uVar7 = *puVar1;
            uVar8 = puVar1[1];
            uVar9 = puVar1[2];
            uVar10 = puVar1[3];
            *puVar1 = *puVar2;
            puVar1[1] = uVar6;
            uVar6 = puVar2[3];
            puVar1[2] = puVar2[2];
            puVar1[3] = uVar6;
            *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar2 + 4);
            *puVar2 = uVar7;
            puVar2[1] = uVar8;
            puVar2[2] = uVar9;
            puVar2[3] = uVar10;
            *(undefined4 *)(puVar2 + 4) = uVar5;
          }
          iVar11 = iVar16;
        } while (iVar16 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar13 = (undefined8 *)((longlong)puVar13 + -0x24);
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142c196e0 FUN_142c196e0 body=812 status=ok
// SIG undefined FUN_142c196e0(void)

void FUN_142c196e0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  
  iVar17 = (param_2 + -2) / 2;
  if (-1 < iVar17) {
    iVar20 = iVar17 * 2 + 1;
    iVar25 = iVar20;
    iVar24 = iVar17;
joined_r0x000142c19725:
    do {
      if (iVar20 < param_2) {
        iVar22 = iVar17 * 2 + 1;
        iVar20 = iVar17 * 2 + 2;
        iVar23 = iVar22;
        if ((iVar20 < param_2) &&
           (iVar23 = iVar20,
           *(float *)(param_1 + (longlong)iVar20 * 0xf) <=
           *(float *)(param_1 + (longlong)iVar22 * 0xf) &&
           *(float *)(param_1 + (longlong)iVar22 * 0xf) !=
           *(float *)(param_1 + (longlong)iVar20 * 0xf))) {
          iVar23 = iVar22;
        }
        pfVar19 = (float *)(param_1 + (longlong)iVar17 * 0xf);
        pfVar18 = (float *)(param_1 + (longlong)iVar23 * 0xf);
        if (*pfVar19 <= *pfVar18 && *pfVar18 != *pfVar19) {
          if (pfVar19 != pfVar18) {
            uVar2 = *(undefined8 *)(pfVar18 + 2);
            uVar3 = *(undefined8 *)pfVar19;
            uVar4 = *(undefined8 *)(pfVar19 + 2);
            uVar5 = *(undefined8 *)(pfVar19 + 4);
            uVar6 = *(undefined8 *)(pfVar19 + 6);
            uVar7 = *(undefined8 *)(pfVar19 + 8);
            uVar8 = *(undefined8 *)(pfVar19 + 10);
            uVar9 = *(undefined8 *)(pfVar19 + 0xc);
            uVar10 = *(undefined8 *)(pfVar19 + 0xe);
            uVar11 = *(undefined8 *)(pfVar19 + 0x10);
            uVar12 = *(undefined8 *)(pfVar19 + 0x12);
            uVar13 = *(undefined8 *)(pfVar19 + 0x14);
            uVar14 = *(undefined8 *)(pfVar19 + 0x16);
            uVar15 = *(undefined8 *)(pfVar19 + 0x18);
            uVar16 = *(undefined8 *)(pfVar19 + 0x1a);
            uVar1 = *(undefined8 *)(pfVar19 + 0x1c);
            *(undefined8 *)pfVar19 = *(undefined8 *)pfVar18;
            *(undefined8 *)(pfVar19 + 2) = uVar2;
            uVar2 = *(undefined8 *)(pfVar18 + 6);
            *(undefined8 *)(pfVar19 + 4) = *(undefined8 *)(pfVar18 + 4);
            *(undefined8 *)(pfVar19 + 6) = uVar2;
            uVar2 = *(undefined8 *)(pfVar18 + 10);
            *(undefined8 *)(pfVar19 + 8) = *(undefined8 *)(pfVar18 + 8);
            *(undefined8 *)(pfVar19 + 10) = uVar2;
            uVar2 = *(undefined8 *)(pfVar18 + 0xe);
            *(undefined8 *)(pfVar19 + 0xc) = *(undefined8 *)(pfVar18 + 0xc);
            *(undefined8 *)(pfVar19 + 0xe) = uVar2;
            uVar2 = *(undefined8 *)(pfVar18 + 0x12);
            *(undefined8 *)(pfVar19 + 0x10) = *(undefined8 *)(pfVar18 + 0x10);
            *(undefined8 *)(pfVar19 + 0x12) = uVar2;
            uVar2 = *(undefined8 *)(pfVar18 + 0x16);
            *(undefined8 *)(pfVar19 + 0x14) = *(undefined8 *)(pfVar18 + 0x14);
            *(undefined8 *)(pfVar19 + 0x16) = uVar2;
            uVar2 = *(undefined8 *)(pfVar18 + 0x1a);
            *(undefined8 *)(pfVar19 + 0x18) = *(undefined8 *)(pfVar18 + 0x18);
            *(undefined8 *)(pfVar19 + 0x1a) = uVar2;
            *(undefined8 *)(pfVar19 + 0x1c) = *(undefined8 *)(pfVar18 + 0x1c);
            *(undefined8 *)pfVar18 = uVar3;
            *(undefined8 *)(pfVar18 + 2) = uVar4;
            *(undefined8 *)(pfVar18 + 4) = uVar5;
            *(undefined8 *)(pfVar18 + 6) = uVar6;
            *(undefined8 *)(pfVar18 + 8) = uVar7;
            *(undefined8 *)(pfVar18 + 10) = uVar8;
            *(undefined8 *)(pfVar18 + 0xc) = uVar9;
            *(undefined8 *)(pfVar18 + 0xe) = uVar10;
            *(undefined8 *)(pfVar18 + 0x10) = uVar11;
            *(undefined8 *)(pfVar18 + 0x12) = uVar12;
            *(undefined8 *)(pfVar18 + 0x14) = uVar13;
            *(undefined8 *)(pfVar18 + 0x16) = uVar14;
            *(undefined8 *)(pfVar18 + 0x18) = uVar15;
            *(undefined8 *)(pfVar18 + 0x1a) = uVar16;
            *(undefined8 *)(pfVar18 + 0x1c) = uVar1;
          }
          iVar20 = iVar23 * 2 + 1;
          iVar17 = iVar23;
          goto joined_r0x000142c19725;
        }
      }
      iVar20 = iVar25 + -2;
      iVar17 = iVar24 + -1;
      iVar25 = iVar20;
      iVar24 = iVar17;
    } while (-1 < iVar17);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar21 = param_1 + (longlong)param_2 * 0xf;
    do {
      if (param_1 != puVar21) {
        uVar2 = puVar21[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar9 = param_1[6];
        uVar10 = param_1[7];
        uVar11 = param_1[8];
        uVar12 = param_1[9];
        uVar13 = param_1[10];
        uVar14 = param_1[0xb];
        uVar15 = param_1[0xc];
        uVar16 = param_1[0xd];
        uVar1 = param_1[0xe];
        *param_1 = *puVar21;
        param_1[1] = uVar2;
        uVar2 = puVar21[3];
        param_1[2] = puVar21[2];
        param_1[3] = uVar2;
        uVar2 = puVar21[5];
        param_1[4] = puVar21[4];
        param_1[5] = uVar2;
        uVar2 = puVar21[7];
        param_1[6] = puVar21[6];
        param_1[7] = uVar2;
        uVar2 = puVar21[9];
        param_1[8] = puVar21[8];
        param_1[9] = uVar2;
        uVar2 = puVar21[0xb];
        param_1[10] = puVar21[10];
        param_1[0xb] = uVar2;
        uVar2 = puVar21[0xd];
        param_1[0xc] = puVar21[0xc];
        param_1[0xd] = uVar2;
        param_1[0xe] = puVar21[0xe];
        *puVar21 = uVar3;
        puVar21[1] = uVar4;
        puVar21[2] = uVar5;
        puVar21[3] = uVar6;
        puVar21[4] = uVar7;
        puVar21[5] = uVar8;
        puVar21[6] = uVar9;
        puVar21[7] = uVar10;
        puVar21[8] = uVar11;
        puVar21[9] = uVar12;
        puVar21[10] = uVar13;
        puVar21[0xb] = uVar14;
        puVar21[0xc] = uVar15;
        puVar21[0xd] = uVar16;
        puVar21[0xe] = uVar1;
      }
      iVar17 = 0;
      if (1 < param_2) {
        do {
          iVar24 = iVar17 * 2 + 1;
          iVar20 = iVar17 * 2 + 2;
          iVar25 = iVar24;
          if ((iVar20 < param_2) &&
             (iVar25 = iVar20,
             *(float *)(param_1 + (longlong)iVar20 * 0xf) <=
             *(float *)(param_1 + (longlong)iVar24 * 0xf) &&
             *(float *)(param_1 + (longlong)iVar24 * 0xf) !=
             *(float *)(param_1 + (longlong)iVar20 * 0xf))) {
            iVar25 = iVar24;
          }
          pfVar19 = (float *)(param_1 + (longlong)iVar17 * 0xf);
          pfVar18 = (float *)(param_1 + (longlong)iVar25 * 0xf);
          if (*pfVar18 < *pfVar19 || *pfVar18 == *pfVar19) break;
          if (pfVar19 != pfVar18) {
            uVar2 = *(undefined8 *)(pfVar18 + 2);
            uVar3 = *(undefined8 *)pfVar19;
            uVar4 = *(undefined8 *)(pfVar19 + 2);
            uVar5 = *(undefined8 *)(pfVar19 + 4);
            uVar6 = *(undefined8 *)(pfVar19 + 6);
            uVar7 = *(undefined8 *)(pfVar19 + 8);
            uVar8 = *(undefined8 *)(pfVar19 + 10);
            uVar9 = *(undefined8 *)(pfVar19 + 0xc);
            uVar10 = *(undefined8 *)(pfVar19 + 0xe);
            uVar11 = *(undefined8 *)(pfVar19 + 0x10);
            uVar12 = *(undefined8 *)(pfVar19 + 0x12);
            uVar13 = *(undefined8 *)(pfVar19 + 0x14);
            uVar14 = *(undefined8 *)(pfVar19 + 0x16);
            uVar15 = *(undefined8 *)(pfVar19 + 0x18);
            uVar16 = *(undefined8 *)(pfVar19 + 0x1a);
            uVar1 = *(undefined8 *)(pfVar19 + 0x1c);
            *(undefined8 *)pfVar19 = *(undefined8 *)pfVar18;
            *(undefined8 *)(pfVar19 + 2) = uVar2;
            uVar2 = *(undefined8 *)(pfVar18 + 6);
            *(undefined8 *)(pfVar19 + 4) = *(undefined8 *)(pfVar18 + 4);
            *(undefined8 *)(pfVar19 + 6) = uVar2;
            uVar2 = *(undefined8 *)(pfVar18 + 10);
            *(undefined8 *)(pfVar19 + 8) = *(undefined8 *)(pfVar18 + 8);
            *(undefined8 *)(pfVar19 + 10) = uVar2;
            uVar2 = *(undefined8 *)(pfVar18 + 0xe);
            *(undefined8 *)(pfVar19 + 0xc) = *(undefined8 *)(pfVar18 + 0xc);
            *(undefined8 *)(pfVar19 + 0xe) = uVar2;
            uVar2 = *(undefined8 *)(pfVar18 + 0x12);
            *(undefined8 *)(pfVar19 + 0x10) = *(undefined8 *)(pfVar18 + 0x10);
            *(undefined8 *)(pfVar19 + 0x12) = uVar2;
            uVar2 = *(undefined8 *)(pfVar18 + 0x16);
            *(undefined8 *)(pfVar19 + 0x14) = *(undefined8 *)(pfVar18 + 0x14);
            *(undefined8 *)(pfVar19 + 0x16) = uVar2;
            uVar2 = *(undefined8 *)(pfVar18 + 0x1a);
            *(undefined8 *)(pfVar19 + 0x18) = *(undefined8 *)(pfVar18 + 0x18);
            *(undefined8 *)(pfVar19 + 0x1a) = uVar2;
            *(undefined8 *)(pfVar19 + 0x1c) = *(undefined8 *)(pfVar18 + 0x1c);
            *(undefined8 *)pfVar18 = uVar3;
            *(undefined8 *)(pfVar18 + 2) = uVar4;
            *(undefined8 *)(pfVar18 + 4) = uVar5;
            *(undefined8 *)(pfVar18 + 6) = uVar6;
            *(undefined8 *)(pfVar18 + 8) = uVar7;
            *(undefined8 *)(pfVar18 + 10) = uVar8;
            *(undefined8 *)(pfVar18 + 0xc) = uVar9;
            *(undefined8 *)(pfVar18 + 0xe) = uVar10;
            *(undefined8 *)(pfVar18 + 0x10) = uVar11;
            *(undefined8 *)(pfVar18 + 0x12) = uVar12;
            *(undefined8 *)(pfVar18 + 0x14) = uVar13;
            *(undefined8 *)(pfVar18 + 0x16) = uVar14;
            *(undefined8 *)(pfVar18 + 0x18) = uVar15;
            *(undefined8 *)(pfVar18 + 0x1a) = uVar16;
            *(undefined8 *)(pfVar18 + 0x1c) = uVar1;
          }
          iVar17 = iVar25;
        } while (iVar25 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar21 = puVar21 + -0xf;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142c19a10 IntroSortInternal<FAISightQuery,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_> body=865 status=ok
// SIG undefined IntroSortInternal<FAISightQuery,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FAISightQuery,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar20;
  undefined8 *puVar22;
  longlong *plVar23;
  float fVar24;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  undefined8 *puVar19;
  undefined8 *puVar21;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x24 + -0x24;
    fVar24 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar24 = fVar24 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar24 = ::_guard_xfg_dispatch_icall_nop(fVar24);
    local_328 = (undefined4)(longlong)(fVar24 + fVar24);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar23 = &local_338;
    do {
      puVar18 = (undefined8 *)*plVar23;
      puVar17 = (undefined8 *)plVar23[1];
      lVar2 = plVar23[2];
      local_348._0_4_ = (int)lVar2;
      lVar16 = ((longlong)puVar17 - (longlong)puVar18) / 0x24 + 1;
      puVar22 = puVar18;
      if ((int)local_348 != 0) {
LAB_142c19b00:
        if (8 < lVar16) {
          if (lVar16 < 0) {
            lVar16 = lVar16 + 1;
          }
          puVar18 = (undefined8 *)((longlong)puVar22 + (lVar16 >> 1) * 0x24);
          if (puVar18 != puVar22) {
            uVar4 = *(undefined4 *)((longlong)puVar22 + 4);
            uVar5 = *(undefined4 *)(puVar22 + 1);
            uVar6 = *(undefined4 *)((longlong)puVar22 + 0xc);
            uVar3 = *(undefined4 *)(puVar18 + 4);
            uVar7 = *(undefined4 *)puVar18;
            uVar8 = *(undefined4 *)((longlong)puVar18 + 4);
            uVar9 = *(undefined4 *)(puVar18 + 1);
            uVar10 = *(undefined4 *)((longlong)puVar18 + 0xc);
            uVar12 = puVar18[2];
            uVar13 = puVar18[3];
            *(undefined4 *)puVar18 = *(undefined4 *)puVar22;
            *(undefined4 *)((longlong)puVar18 + 4) = uVar4;
            *(undefined4 *)(puVar18 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar18 + 0xc) = uVar6;
            uVar11 = puVar22[3];
            puVar18[2] = puVar22[2];
            puVar18[3] = uVar11;
            *(undefined4 *)(puVar18 + 4) = *(undefined4 *)(puVar22 + 4);
            *(undefined4 *)puVar22 = uVar7;
            *(undefined4 *)((longlong)puVar22 + 4) = uVar8;
            *(undefined4 *)(puVar22 + 1) = uVar9;
            *(undefined4 *)((longlong)puVar22 + 0xc) = uVar10;
            puVar22[2] = uVar12;
            puVar22[3] = uVar13;
            *(undefined4 *)(puVar22 + 4) = uVar3;
          }
          puVar20 = (undefined8 *)((longlong)puVar17 + 0x24);
          puVar18 = puVar22;
LAB_142c19b57:
          puVar19 = puVar18;
          puVar18 = (undefined8 *)((longlong)puVar19 + 0x24);
          if (puVar18 <= puVar17) goto code_r0x000142c19b60;
          goto LAB_142c19b70;
        }
        for (; puVar18 = puVar22, puVar20 = puVar22, puVar22 < puVar17;
            puVar17 = (undefined8 *)((longlong)puVar17 + -0x24)) {
          while (puVar19 = (undefined8 *)((longlong)puVar20 + 0x24), puVar19 <= puVar17) {
            pfVar1 = (float *)(puVar20 + 6);
            puVar20 = puVar19;
            if (*pfVar1 < *(float *)((longlong)puVar18 + 0xc)) {
              puVar18 = puVar19;
            }
          }
          if (puVar18 != puVar17) {
            uVar11 = puVar17[1];
            uVar3 = *(undefined4 *)(puVar18 + 4);
            uVar12 = *puVar18;
            uVar13 = puVar18[1];
            uVar14 = puVar18[2];
            uVar15 = puVar18[3];
            *puVar18 = *puVar17;
            puVar18[1] = uVar11;
            uVar11 = puVar17[3];
            puVar18[2] = puVar17[2];
            puVar18[3] = uVar11;
            *(undefined4 *)(puVar18 + 4) = *(undefined4 *)(puVar17 + 4);
            *puVar17 = uVar12;
            puVar17[1] = uVar13;
            puVar17[2] = uVar14;
            puVar17[3] = uVar15;
            *(undefined4 *)(puVar17 + 4) = uVar3;
          }
        }
        goto LAB_142c19cb6;
      }
LAB_142c19ca7:
      local_348 = lVar2;
      HeapSortInternal<FAISightQuery,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>
                (puVar18,lVar16,param_3,param_4);
LAB_142c19cb6:
      plVar23 = plVar23 + -3;
    } while (&local_338 <= plVar23);
  }
  return;
code_r0x000142c19b60:
  if (*(float *)((longlong)puVar22 + 0xc) <= *(float *)(puVar19 + 6)) goto LAB_142c19b57;
LAB_142c19b70:
  do {
    puVar21 = puVar20;
    puVar20 = (undefined8 *)((longlong)puVar21 + -0x24);
    if (puVar20 <= puVar22) break;
  } while (*(float *)(puVar21 + -3) <= *(float *)((longlong)puVar22 + 0xc));
  if (puVar18 <= puVar20) {
    if (puVar18 != puVar20) {
      uVar4 = *(undefined4 *)(puVar21 + -4);
      uVar5 = *(undefined4 *)((longlong)puVar21 + -0x1c);
      uVar6 = *(undefined4 *)(puVar21 + -3);
      uVar3 = *(undefined4 *)((longlong)puVar19 + 0x44);
      uVar7 = *(undefined4 *)puVar18;
      uVar8 = *(undefined4 *)(puVar19 + 5);
      uVar9 = *(undefined4 *)((longlong)puVar19 + 0x2c);
      uVar10 = *(undefined4 *)(puVar19 + 6);
      uVar12 = *(undefined8 *)((longlong)puVar19 + 0x34);
      uVar13 = *(undefined8 *)((longlong)puVar19 + 0x3c);
      *(undefined4 *)puVar18 = *(undefined4 *)puVar20;
      *(undefined4 *)(puVar19 + 5) = uVar4;
      *(undefined4 *)((longlong)puVar19 + 0x2c) = uVar5;
      *(undefined4 *)(puVar19 + 6) = uVar6;
      uVar11 = *(undefined8 *)((longlong)puVar21 + -0xc);
      *(undefined8 *)((longlong)puVar19 + 0x34) = *(undefined8 *)((longlong)puVar21 + -0x14);
      *(undefined8 *)((longlong)puVar19 + 0x3c) = uVar11;
      *(undefined4 *)((longlong)puVar19 + 0x44) = *(undefined4 *)((longlong)puVar21 + -4);
      *(undefined4 *)puVar20 = uVar7;
      *(undefined4 *)(puVar21 + -4) = uVar8;
      *(undefined4 *)((longlong)puVar21 + -0x1c) = uVar9;
      *(undefined4 *)(puVar21 + -3) = uVar10;
      *(undefined8 *)((longlong)puVar21 + -0x14) = uVar12;
      *(undefined8 *)((longlong)puVar21 + -0xc) = uVar13;
      *(undefined4 *)((longlong)puVar21 + -4) = uVar3;
    }
    goto LAB_142c19b57;
  }
  if (puVar22 != puVar20) {
    uVar4 = *(undefined4 *)(puVar21 + -4);
    uVar5 = *(undefined4 *)((longlong)puVar21 + -0x1c);
    uVar6 = *(undefined4 *)(puVar21 + -3);
    uVar3 = *(undefined4 *)(puVar22 + 4);
    uVar7 = *(undefined4 *)puVar22;
    uVar8 = *(undefined4 *)((longlong)puVar22 + 4);
    uVar9 = *(undefined4 *)(puVar22 + 1);
    uVar10 = *(undefined4 *)((longlong)puVar22 + 0xc);
    uVar12 = puVar22[2];
    uVar13 = puVar22[3];
    *(undefined4 *)puVar22 = *(undefined4 *)puVar20;
    *(undefined4 *)((longlong)puVar22 + 4) = uVar4;
    *(undefined4 *)(puVar22 + 1) = uVar5;
    *(undefined4 *)((longlong)puVar22 + 0xc) = uVar6;
    uVar11 = *(undefined8 *)((longlong)puVar21 + -0xc);
    puVar22[2] = *(undefined8 *)((longlong)puVar21 + -0x14);
    puVar22[3] = uVar11;
    *(undefined4 *)(puVar22 + 4) = *(undefined4 *)((longlong)puVar21 + -4);
    *(undefined4 *)puVar20 = uVar7;
    *(undefined4 *)(puVar21 + -4) = uVar8;
    *(undefined4 *)((longlong)puVar21 + -0x1c) = uVar9;
    *(undefined4 *)(puVar21 + -3) = uVar10;
    *(undefined8 *)((longlong)puVar21 + -0x14) = uVar12;
    *(undefined8 *)((longlong)puVar21 + -0xc) = uVar13;
    *(undefined4 *)((longlong)puVar21 + -4) = uVar3;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar16 = (longlong)puVar20 + (-0x24 - (longlong)puVar22);
  lVar16 = lVar16 / 0x12 + (lVar16 >> 0x3f);
  if ((lVar16 >> 1) - (lVar16 >> 0x3f) < ((longlong)puVar17 - (longlong)puVar18) / 0x24) {
    if (puVar18 < puVar17) {
      *plVar23 = (longlong)puVar18;
      plVar23[1] = (longlong)puVar17;
      *(int *)(plVar23 + 2) = (int)local_348;
      plVar23 = plVar23 + 3;
    }
    if (puVar20 <= (undefined8 *)((longlong)puVar22 + 0x24U)) goto LAB_142c19cb6;
    puVar17 = puVar21 + -9;
    puVar18 = puVar22;
  }
  else {
    if ((undefined8 *)((longlong)puVar22 + 0x24U) < puVar20) {
      *plVar23 = (longlong)puVar22;
      plVar23[1] = (longlong)(puVar21 + -9);
      *(int *)(plVar23 + 2) = (int)local_348;
      plVar23 = plVar23 + 3;
    }
    if (puVar17 <= puVar18) goto LAB_142c19cb6;
  }
  lVar16 = ((longlong)puVar17 - (longlong)puVar18) / 0x24 + 1;
  puVar22 = puVar18;
  if ((int)local_348 == 0) goto LAB_142c19ca7;
  goto LAB_142c19b00;
}



// FUNCTION 142c19d80 FUN_142c19d80 body=1347 status=ok
// SIG undefined FUN_142c19d80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c19d80(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
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
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  longlong *plVar28;
  float fVar29;
  undefined1 auStack_3b8 [48];
  longlong local_388;
  longlong local_378;
  longlong lStack_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  if (1 < param_2) {
    local_78 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
    fVar29 = (float)(longlong)param_2;
    lStack_370 = param_1 + -0x78 + param_2 * 0x78;
    if ((longlong)param_2 < 0) {
      fVar29 = fVar29 + 1.8446744e+19;
    }
    local_378 = param_1;
    fVar29 = _guard_xfg_dispatch_icall_nop(fVar29);
    local_368 = (undefined4)(longlong)(fVar29 + fVar29);
    _guard_xfg_dispatch_icall_nop(local_360,0,0x2e8);
    plVar28 = &local_378;
    do {
      pfVar27 = (float *)*plVar28;
      pfVar22 = (float *)plVar28[1];
      lVar1 = plVar28[2];
      local_388._0_4_ = (int)lVar1;
      lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pfVar22 - (longlong)pfVar27),
                      8) + ((longlong)pfVar22 - (longlong)pfVar27);
      lVar20 = ((lVar20 >> 6) + 1) - (lVar20 >> 0x3f);
      pfVar26 = pfVar27;
      if ((int)local_388 != 0) {
LAB_142c19e80:
        if (8 < lVar20) {
          pfVar27 = pfVar26 + (lVar20 / 2) * 0x1e;
          if (pfVar27 != pfVar26) {
            uVar5 = *(undefined8 *)(pfVar26 + 2);
            uVar6 = *(undefined8 *)pfVar27;
            uVar7 = *(undefined8 *)(pfVar27 + 2);
            uVar8 = *(undefined8 *)(pfVar27 + 4);
            uVar9 = *(undefined8 *)(pfVar27 + 6);
            uVar10 = *(undefined8 *)(pfVar27 + 8);
            uVar11 = *(undefined8 *)(pfVar27 + 10);
            uVar12 = *(undefined8 *)(pfVar27 + 0xc);
            uVar13 = *(undefined8 *)(pfVar27 + 0xe);
            uVar14 = *(undefined8 *)(pfVar27 + 0x10);
            uVar15 = *(undefined8 *)(pfVar27 + 0x12);
            uVar16 = *(undefined8 *)(pfVar27 + 0x14);
            uVar17 = *(undefined8 *)(pfVar27 + 0x16);
            uVar18 = *(undefined8 *)(pfVar27 + 0x18);
            uVar19 = *(undefined8 *)(pfVar27 + 0x1a);
            uVar2 = *(undefined8 *)(pfVar27 + 0x1c);
            *(undefined8 *)pfVar27 = *(undefined8 *)pfVar26;
            *(undefined8 *)(pfVar27 + 2) = uVar5;
            uVar5 = *(undefined8 *)(pfVar26 + 6);
            *(undefined8 *)(pfVar27 + 4) = *(undefined8 *)(pfVar26 + 4);
            *(undefined8 *)(pfVar27 + 6) = uVar5;
            uVar5 = *(undefined8 *)(pfVar26 + 10);
            *(undefined8 *)(pfVar27 + 8) = *(undefined8 *)(pfVar26 + 8);
            *(undefined8 *)(pfVar27 + 10) = uVar5;
            uVar5 = *(undefined8 *)(pfVar26 + 0xe);
            *(undefined8 *)(pfVar27 + 0xc) = *(undefined8 *)(pfVar26 + 0xc);
            *(undefined8 *)(pfVar27 + 0xe) = uVar5;
            uVar5 = *(undefined8 *)(pfVar26 + 0x12);
            *(undefined8 *)(pfVar27 + 0x10) = *(undefined8 *)(pfVar26 + 0x10);
            *(undefined8 *)(pfVar27 + 0x12) = uVar5;
            uVar5 = *(undefined8 *)(pfVar26 + 0x16);
            *(undefined8 *)(pfVar27 + 0x14) = *(undefined8 *)(pfVar26 + 0x14);
            *(undefined8 *)(pfVar27 + 0x16) = uVar5;
            fVar29 = pfVar26[0x19];
            fVar3 = pfVar26[0x1a];
            fVar4 = pfVar26[0x1b];
            pfVar27[0x18] = pfVar26[0x18];
            pfVar27[0x19] = fVar29;
            pfVar27[0x1a] = fVar3;
            pfVar27[0x1b] = fVar4;
            *(undefined8 *)(pfVar27 + 0x1c) = *(undefined8 *)(pfVar26 + 0x1c);
            *(undefined8 *)pfVar26 = uVar6;
            *(undefined8 *)(pfVar26 + 2) = uVar7;
            *(undefined8 *)(pfVar26 + 4) = uVar8;
            *(undefined8 *)(pfVar26 + 6) = uVar9;
            *(undefined8 *)(pfVar26 + 8) = uVar10;
            *(undefined8 *)(pfVar26 + 10) = uVar11;
            *(undefined8 *)(pfVar26 + 0xc) = uVar12;
            *(undefined8 *)(pfVar26 + 0xe) = uVar13;
            *(undefined8 *)(pfVar26 + 0x10) = uVar14;
            *(undefined8 *)(pfVar26 + 0x12) = uVar15;
            *(undefined8 *)(pfVar26 + 0x14) = uVar16;
            *(undefined8 *)(pfVar26 + 0x16) = uVar17;
            *(undefined8 *)(pfVar26 + 0x18) = uVar18;
            *(undefined8 *)(pfVar26 + 0x1a) = uVar19;
            *(undefined8 *)(pfVar26 + 0x1c) = uVar2;
          }
          pfVar23 = pfVar22 + 0x1e;
          pfVar27 = pfVar26;
LAB_142c19f40:
          pfVar25 = pfVar27;
          pfVar27 = pfVar25 + 0x1e;
          if (pfVar27 <= pfVar22) goto code_r0x000142c19f49;
          goto LAB_142c19f54;
        }
        for (; pfVar23 = pfVar26, pfVar27 = pfVar26, pfVar26 < pfVar22; pfVar22 = pfVar22 + -0x1e) {
          while (pfVar27 = pfVar27 + 0x1e, pfVar27 <= pfVar22) {
            if (*pfVar23 < *pfVar27) {
              pfVar23 = pfVar27;
            }
          }
          if (pfVar23 != pfVar22) {
            uVar5 = *(undefined8 *)(pfVar22 + 2);
            uVar6 = *(undefined8 *)pfVar23;
            uVar7 = *(undefined8 *)(pfVar23 + 2);
            uVar8 = *(undefined8 *)(pfVar23 + 4);
            uVar9 = *(undefined8 *)(pfVar23 + 6);
            uVar10 = *(undefined8 *)(pfVar23 + 8);
            uVar11 = *(undefined8 *)(pfVar23 + 10);
            uVar12 = *(undefined8 *)(pfVar23 + 0xc);
            uVar13 = *(undefined8 *)(pfVar23 + 0xe);
            uVar14 = *(undefined8 *)(pfVar23 + 0x10);
            uVar15 = *(undefined8 *)(pfVar23 + 0x12);
            uVar16 = *(undefined8 *)(pfVar23 + 0x14);
            uVar17 = *(undefined8 *)(pfVar23 + 0x16);
            uVar18 = *(undefined8 *)(pfVar23 + 0x18);
            uVar19 = *(undefined8 *)(pfVar23 + 0x1a);
            uVar2 = *(undefined8 *)(pfVar23 + 0x1c);
            *(undefined8 *)pfVar23 = *(undefined8 *)pfVar22;
            *(undefined8 *)(pfVar23 + 2) = uVar5;
            uVar5 = *(undefined8 *)(pfVar22 + 6);
            *(undefined8 *)(pfVar23 + 4) = *(undefined8 *)(pfVar22 + 4);
            *(undefined8 *)(pfVar23 + 6) = uVar5;
            uVar5 = *(undefined8 *)(pfVar22 + 10);
            *(undefined8 *)(pfVar23 + 8) = *(undefined8 *)(pfVar22 + 8);
            *(undefined8 *)(pfVar23 + 10) = uVar5;
            uVar5 = *(undefined8 *)(pfVar22 + 0xe);
            *(undefined8 *)(pfVar23 + 0xc) = *(undefined8 *)(pfVar22 + 0xc);
            *(undefined8 *)(pfVar23 + 0xe) = uVar5;
            uVar5 = *(undefined8 *)(pfVar22 + 0x12);
            *(undefined8 *)(pfVar23 + 0x10) = *(undefined8 *)(pfVar22 + 0x10);
            *(undefined8 *)(pfVar23 + 0x12) = uVar5;
            uVar5 = *(undefined8 *)(pfVar22 + 0x16);
            *(undefined8 *)(pfVar23 + 0x14) = *(undefined8 *)(pfVar22 + 0x14);
            *(undefined8 *)(pfVar23 + 0x16) = uVar5;
            uVar5 = *(undefined8 *)(pfVar22 + 0x1a);
            *(undefined8 *)(pfVar23 + 0x18) = *(undefined8 *)(pfVar22 + 0x18);
            *(undefined8 *)(pfVar23 + 0x1a) = uVar5;
            *(undefined8 *)(pfVar23 + 0x1c) = *(undefined8 *)(pfVar22 + 0x1c);
            *(undefined8 *)pfVar22 = uVar6;
            *(undefined8 *)(pfVar22 + 2) = uVar7;
            *(undefined8 *)(pfVar22 + 4) = uVar8;
            *(undefined8 *)(pfVar22 + 6) = uVar9;
            *(undefined8 *)(pfVar22 + 8) = uVar10;
            *(undefined8 *)(pfVar22 + 10) = uVar11;
            *(undefined8 *)(pfVar22 + 0xc) = uVar12;
            *(undefined8 *)(pfVar22 + 0xe) = uVar13;
            *(undefined8 *)(pfVar22 + 0x10) = uVar14;
            *(undefined8 *)(pfVar22 + 0x12) = uVar15;
            *(undefined8 *)(pfVar22 + 0x14) = uVar16;
            *(undefined8 *)(pfVar22 + 0x16) = uVar17;
            *(undefined8 *)(pfVar22 + 0x18) = uVar18;
            *(undefined8 *)(pfVar22 + 0x1a) = uVar19;
            *(undefined8 *)(pfVar22 + 0x1c) = uVar2;
          }
        }
        goto LAB_142c1a185;
      }
LAB_142c1a176:
      local_388 = lVar1;
      FUN_142c196e0(pfVar27,lVar20,param_3,param_4);
LAB_142c1a185:
      plVar28 = plVar28 + -3;
    } while (&local_378 <= plVar28);
  }
  return;
code_r0x000142c19f49:
  if (*pfVar27 < *pfVar26 || *pfVar27 == *pfVar26) goto LAB_142c19f40;
LAB_142c19f54:
  do {
    pfVar24 = pfVar23;
    pfVar23 = pfVar24 + -0x1e;
    if (pfVar23 <= pfVar26) break;
  } while (*pfVar26 < *pfVar23 || *pfVar26 == *pfVar23);
  if (pfVar27 <= pfVar23) {
    if (pfVar27 != pfVar23) {
      uVar5 = *(undefined8 *)(pfVar24 + -0x1c);
      uVar6 = *(undefined8 *)pfVar27;
      uVar7 = *(undefined8 *)(pfVar25 + 0x20);
      uVar8 = *(undefined8 *)(pfVar25 + 0x22);
      uVar9 = *(undefined8 *)(pfVar25 + 0x24);
      uVar10 = *(undefined8 *)(pfVar25 + 0x26);
      uVar11 = *(undefined8 *)(pfVar25 + 0x28);
      uVar12 = *(undefined8 *)(pfVar25 + 0x2a);
      uVar13 = *(undefined8 *)(pfVar25 + 0x2c);
      uVar14 = *(undefined8 *)(pfVar25 + 0x2e);
      uVar15 = *(undefined8 *)(pfVar25 + 0x30);
      uVar16 = *(undefined8 *)(pfVar25 + 0x32);
      uVar17 = *(undefined8 *)(pfVar25 + 0x34);
      uVar18 = *(undefined8 *)(pfVar25 + 0x36);
      uVar19 = *(undefined8 *)(pfVar25 + 0x38);
      uVar2 = *(undefined8 *)(pfVar25 + 0x3a);
      *(undefined8 *)pfVar27 = *(undefined8 *)pfVar23;
      *(undefined8 *)(pfVar25 + 0x20) = uVar5;
      uVar5 = *(undefined8 *)(pfVar24 + -0x18);
      *(undefined8 *)(pfVar25 + 0x22) = *(undefined8 *)(pfVar24 + -0x1a);
      *(undefined8 *)(pfVar25 + 0x24) = uVar5;
      uVar5 = *(undefined8 *)(pfVar24 + -0x14);
      *(undefined8 *)(pfVar25 + 0x26) = *(undefined8 *)(pfVar24 + -0x16);
      *(undefined8 *)(pfVar25 + 0x28) = uVar5;
      uVar5 = *(undefined8 *)(pfVar24 + -0x10);
      *(undefined8 *)(pfVar25 + 0x2a) = *(undefined8 *)(pfVar24 + -0x12);
      *(undefined8 *)(pfVar25 + 0x2c) = uVar5;
      uVar5 = *(undefined8 *)(pfVar24 + -0xc);
      *(undefined8 *)(pfVar25 + 0x2e) = *(undefined8 *)(pfVar24 + -0xe);
      *(undefined8 *)(pfVar25 + 0x30) = uVar5;
      uVar5 = *(undefined8 *)(pfVar24 + -8);
      *(undefined8 *)(pfVar25 + 0x32) = *(undefined8 *)(pfVar24 + -10);
      *(undefined8 *)(pfVar25 + 0x34) = uVar5;
      fVar29 = pfVar24[-5];
      fVar3 = pfVar24[-4];
      fVar4 = pfVar24[-3];
      pfVar25[0x36] = pfVar24[-6];
      pfVar25[0x37] = fVar29;
      pfVar25[0x38] = fVar3;
      pfVar25[0x39] = fVar4;
      *(undefined8 *)(pfVar25 + 0x3a) = *(undefined8 *)(pfVar24 + -2);
      *(undefined8 *)pfVar23 = uVar6;
      *(undefined8 *)(pfVar24 + -0x1c) = uVar7;
      *(undefined8 *)(pfVar24 + -0x1a) = uVar8;
      *(undefined8 *)(pfVar24 + -0x18) = uVar9;
      *(undefined8 *)(pfVar24 + -0x16) = uVar10;
      *(undefined8 *)(pfVar24 + -0x14) = uVar11;
      *(undefined8 *)(pfVar24 + -0x12) = uVar12;
      *(undefined8 *)(pfVar24 + -0x10) = uVar13;
      *(undefined8 *)(pfVar24 + -0xe) = uVar14;
      *(undefined8 *)(pfVar24 + -0xc) = uVar15;
      *(undefined8 *)(pfVar24 + -10) = uVar16;
      *(undefined8 *)(pfVar24 + -8) = uVar17;
      *(undefined8 *)(pfVar24 + -6) = uVar18;
      *(undefined8 *)(pfVar24 + -4) = uVar19;
      *(undefined8 *)(pfVar24 + -2) = uVar2;
    }
    goto LAB_142c19f40;
  }
  if (pfVar26 != pfVar23) {
    uVar5 = *(undefined8 *)(pfVar24 + -0x1c);
    uVar6 = *(undefined8 *)pfVar26;
    uVar7 = *(undefined8 *)(pfVar26 + 2);
    uVar8 = *(undefined8 *)(pfVar26 + 4);
    uVar9 = *(undefined8 *)(pfVar26 + 6);
    uVar10 = *(undefined8 *)(pfVar26 + 8);
    uVar11 = *(undefined8 *)(pfVar26 + 10);
    uVar12 = *(undefined8 *)(pfVar26 + 0xc);
    uVar13 = *(undefined8 *)(pfVar26 + 0xe);
    uVar14 = *(undefined8 *)(pfVar26 + 0x10);
    uVar15 = *(undefined8 *)(pfVar26 + 0x12);
    uVar16 = *(undefined8 *)(pfVar26 + 0x14);
    uVar17 = *(undefined8 *)(pfVar26 + 0x16);
    uVar18 = *(undefined8 *)(pfVar26 + 0x18);
    uVar19 = *(undefined8 *)(pfVar26 + 0x1a);
    uVar2 = *(undefined8 *)(pfVar26 + 0x1c);
    *(undefined8 *)pfVar26 = *(undefined8 *)pfVar23;
    *(undefined8 *)(pfVar26 + 2) = uVar5;
    uVar5 = *(undefined8 *)(pfVar24 + -0x18);
    *(undefined8 *)(pfVar26 + 4) = *(undefined8 *)(pfVar24 + -0x1a);
    *(undefined8 *)(pfVar26 + 6) = uVar5;
    uVar5 = *(undefined8 *)(pfVar24 + -0x14);
    *(undefined8 *)(pfVar26 + 8) = *(undefined8 *)(pfVar24 + -0x16);
    *(undefined8 *)(pfVar26 + 10) = uVar5;
    uVar5 = *(undefined8 *)(pfVar24 + -0x10);
    *(undefined8 *)(pfVar26 + 0xc) = *(undefined8 *)(pfVar24 + -0x12);
    *(undefined8 *)(pfVar26 + 0xe) = uVar5;
    uVar5 = *(undefined8 *)(pfVar24 + -0xc);
    *(undefined8 *)(pfVar26 + 0x10) = *(undefined8 *)(pfVar24 + -0xe);
    *(undefined8 *)(pfVar26 + 0x12) = uVar5;
    uVar5 = *(undefined8 *)(pfVar24 + -8);
    *(undefined8 *)(pfVar26 + 0x14) = *(undefined8 *)(pfVar24 + -10);
    *(undefined8 *)(pfVar26 + 0x16) = uVar5;
    fVar29 = pfVar24[-5];
    fVar3 = pfVar24[-4];
    fVar4 = pfVar24[-3];
    pfVar26[0x18] = pfVar24[-6];
    pfVar26[0x19] = fVar29;
    pfVar26[0x1a] = fVar3;
    pfVar26[0x1b] = fVar4;
    *(undefined8 *)(pfVar26 + 0x1c) = *(undefined8 *)(pfVar24 + -2);
    *(undefined8 *)pfVar23 = uVar6;
    *(undefined8 *)(pfVar24 + -0x1c) = uVar7;
    *(undefined8 *)(pfVar24 + -0x1a) = uVar8;
    *(undefined8 *)(pfVar24 + -0x18) = uVar9;
    *(undefined8 *)(pfVar24 + -0x16) = uVar10;
    *(undefined8 *)(pfVar24 + -0x14) = uVar11;
    *(undefined8 *)(pfVar24 + -0x12) = uVar12;
    *(undefined8 *)(pfVar24 + -0x10) = uVar13;
    *(undefined8 *)(pfVar24 + -0xe) = uVar14;
    *(undefined8 *)(pfVar24 + -0xc) = uVar15;
    *(undefined8 *)(pfVar24 + -10) = uVar16;
    *(undefined8 *)(pfVar24 + -8) = uVar17;
    *(undefined8 *)(pfVar24 + -6) = uVar18;
    *(undefined8 *)(pfVar24 + -4) = uVar19;
    *(undefined8 *)(pfVar24 + -2) = uVar2;
  }
  local_388._0_4_ = (int)local_388 + -1;
  lVar20 = (longlong)pfVar23 + (-0x78 - (longlong)pfVar26);
  lVar20 = lVar20 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar20),8);
  lVar21 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pfVar22 - (longlong)pfVar27),8) +
           ((longlong)pfVar22 - (longlong)pfVar27);
  if ((lVar20 >> 6) - (lVar20 >> 0x3f) < (lVar21 >> 6) - (lVar21 >> 0x3f)) {
    if (pfVar27 < pfVar22) {
      *plVar28 = (longlong)pfVar27;
      plVar28[1] = (longlong)pfVar22;
      *(int *)(plVar28 + 2) = (int)local_388;
      plVar28 = plVar28 + 3;
    }
    if (pfVar23 <= pfVar26 + 0x1e) goto LAB_142c1a185;
    pfVar22 = pfVar24 + -0x3c;
    pfVar27 = pfVar26;
  }
  else {
    if (pfVar26 + 0x1e < pfVar23) {
      *plVar28 = (longlong)pfVar26;
      plVar28[1] = (longlong)(pfVar24 + -0x3c);
      *(int *)(plVar28 + 2) = (int)local_388;
      plVar28 = plVar28 + 3;
    }
    if (pfVar22 <= pfVar27) goto LAB_142c1a185;
  }
  lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pfVar22 - (longlong)pfVar27),8) +
           ((longlong)pfVar22 - (longlong)pfVar27);
  lVar20 = ((lVar20 >> 6) + 1) - (lVar20 >> 0x3f);
  pfVar26 = pfVar27;
  if ((int)local_388 == 0) goto LAB_142c1a176;
  goto LAB_142c19e80;
}



// FUNCTION 142c1a2d0 FUN_142c1a2d0 body=190 status=ok
// SIG undefined FUN_142c1a2d0(void)

void FUN_142c1a2d0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
  lVar6 = plVar5[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar6 = plVar5[0x1f];
  }
  if (((int)(uint)*(byte *)(lVar6 + 0x48) < *(int *)(param_1 + 0xd8)) &&
     (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)*(byte *)(lVar6 + 0x48) * 8),
     lVar6 != 0)) {
    iVar2 = *(int *)(lVar6 + 0xa0);
    *(int *)(lVar6 + 0xa0) = iVar2 + 1;
    if (*(int *)(lVar6 + 0xa4) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (lVar6 + 0x98,iVar2);
    }
    lVar3 = *(longlong *)(lVar6 + 0x98);
    uVar4 = param_2[1];
    puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x18);
    *puVar1 = *param_2;
    puVar1[1] = uVar4;
    *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = param_2[2];
    *(undefined4 *)(lVar6 + 0x40) = 0;
  }
  return;
}



// FUNCTION 142c1a390 FUN_142c1a390 body=64 status=ok
// SIG undefined FUN_142c1a390(void)

undefined4 * FUN_142c1a390(undefined4 *param_1)

{
  *param_1 = 0x3f800000;
  *(undefined8 *)(param_1 + 1) = DAT_146691200;
  param_1[3] = DAT_146691208;
  *(undefined8 *)(param_1 + 4) = DAT_146691200;
  param_1[6] = DAT_146691208;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 142c1a410 FUN_142c1a410 body=306 status=ok
// SIG undefined FUN_142c1a410(void)

undefined4 *
FUN_142c1a410(undefined4 *param_1,longlong *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5,int param_6,undefined8 param_7)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  *param_1 = 0;
  if (param_6 != 0) {
    param_3 = 0xbf800000;
  }
  param_1[2] = param_3;
  *(undefined8 *)(param_1 + 3) = *param_4;
  param_1[5] = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(param_1 + 6) = *param_5;
  param_1[8] = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)(param_1 + 10) = param_7;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  FName::FName(param_1 + 0xe,L"Invalid",1);
  param_1[0x10] = 0;
  param_5._4_4_ = 0;
  if (param_6 == 0) {
    uVar2 = 2;
  }
  param_5._0_4_ = (uint)param_5 & 0xffffff80;
  param_1[0x11] =
       (uint)(*(char *)((longlong)param_2 + 0x2c) == '\x01') | param_1[0x11] & 0xfffffc00 | uVar2;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0xbf800000;
  *(longlong *)(param_1 + 0x12) = param_2[2];
  (**(code **)(*param_2 + 0x2c8))(param_2,&param_5);
  param_1[0x10] = param_5._4_4_;
  param_1[0x11] = param_1[0x11] ^ ((uint)param_5 * 8 ^ param_1[0x11]) & 0x3f8;
  lVar1 = param_2[9];
  *(longlong *)(param_1 + 0xe) = param_2[10];
  *(char *)(param_1 + 0xc) = (char)lVar1;
  param_1[1] = (int)param_2[5];
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 3);
  param_1[0x18] = param_1[5];
  return param_1;
}



// FUNCTION 142c1a550 FUN_142c1a550 body=251 status=ok
// SIG undefined FUN_142c1a550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_142c1a550(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
             float param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  *param_1 = *param_4;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_4 + 1);
  *(float *)(param_1 + 3) = param_5 * param_5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_6;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_7;
  param_1[5] = param_2;
  param_1[6] = param_3;
  uVar4 = DAT_146691200;
  uVar2 = DAT_146691208;
  if ((param_2 != 0) &&
     (lVar1 = *(longlong *)(param_2 + 0x168), uVar4 = _DAT_1468b5d90, uVar2 = DAT_1468b5d98,
     lVar1 != 0)) {
    uVar4 = *(undefined8 *)(lVar1 + 0x220);
    uVar2 = *(undefined4 *)(lVar1 + 0x228);
  }
  *(undefined8 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  puVar3 = (undefined1 *)FGenericTeamId::GetTeamIdentifier(&param_5);
  *(undefined1 *)(param_1 + 4) = *puVar3;
  return param_1;
}



// FUNCTION 142c1a650 FUN_142c1a650 body=489 status=ok
// SIG undefined FUN_142c1a650(void)

undefined8 * FUN_142c1a650(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = FWeakObjectPtr::Get(param_2);
  *param_1 = uVar3;
  iVar5 = *(int *)(param_2 + 0x350);
  puVar1 = *(undefined4 **)(param_2 + 0x348);
  *(int *)(param_1 + 2) = iVar5;
  if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0x14) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar5);
    puVar2 = (undefined4 *)param_1[1];
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(param_2 + 8);
    }
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(undefined8 *)(puVar2 + 3) = *(undefined8 *)(puVar1 + 3);
      puVar2[5] = puVar1[5];
      *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar1 + 6);
      puVar2[8] = puVar1[8];
      *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar1 + 10);
      *(undefined1 *)(puVar2 + 0xc) = *(undefined1 *)(puVar1 + 0xc);
      *(undefined8 *)(puVar2 + 0xe) = *(undefined8 *)(puVar1 + 0xe);
      puVar2[0x10] = puVar1[0x10];
      puVar2[0x11] = puVar2[0x11] ^ (puVar2[0x11] ^ puVar1[0x11]) & 1;
      uVar4 = (puVar2[0x11] ^ puVar1[0x11]) & 2 ^ puVar2[0x11];
      puVar2[0x11] = uVar4;
      uVar4 = (uVar4 ^ puVar1[0x11]) & 4 ^ uVar4;
      puVar2[0x11] = uVar4;
      uVar4 = (uVar4 ^ puVar1[0x11]) & 8 ^ uVar4;
      puVar2[0x11] = uVar4;
      uVar4 = (uVar4 ^ puVar1[0x11]) & 0x10 ^ uVar4;
      puVar2[0x11] = uVar4;
      uVar4 = (uVar4 ^ puVar1[0x11]) & 0x20 ^ uVar4;
      puVar2[0x11] = uVar4;
      uVar4 = (uVar4 ^ puVar1[0x11]) & 0x40 ^ uVar4;
      puVar2[0x11] = uVar4;
      uVar4 = (uVar4 ^ puVar1[0x11]) & 0x80 ^ uVar4;
      puVar2[0x11] = uVar4;
      uVar4 = (uVar4 ^ puVar1[0x11]) & 0x100 ^ uVar4;
      puVar2[0x11] = uVar4;
      puVar2[0x11] = (uVar4 ^ puVar1[0x11]) & 0x200 ^ uVar4;
      *(undefined8 *)(puVar2 + 0x12) = *(undefined8 *)(puVar1 + 0x12);
      puVar2[0x14] = puVar1[0x14];
      puVar2[0x15] = puVar1[0x15];
      *(undefined8 *)(puVar2 + 0x16) = *(undefined8 *)(puVar1 + 0x16);
      puVar2[0x18] = puVar1[0x18];
      puVar2 = puVar2 + 0x1a;
      puVar1 = puVar1 + 0x1a;
    }
  }
  *(uint *)(param_1 + 3) =
       *(uint *)(param_1 + 3) ^ (*(uint *)(param_2 + 0x368) ^ *(uint *)(param_1 + 3)) & 1;
  return param_1;
}



// FUNCTION 142c1a840 FDigestedSightProperties body=174 status=ok
// SIG undefined FDigestedSightProperties(void)

float * UAISense_Sight::FDigestedSightProperties::FDigestedSightProperties
                  (float *param_1,longlong param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  param_1[1] = *(float *)(param_2 + 0x50) * *(float *)(param_2 + 0x50);
  param_1[3] = *(float *)(param_2 + 0x54) * *(float *)(param_2 + 0x54);
  fVar3 = *(float *)(param_2 + 0x58) * 0.017453292;
  fVar2 = 0.0;
  if ((0.0 <= fVar3) && (fVar2 = fVar3, 3.1415927 <= fVar3)) {
    fVar2 = 3.1415927;
  }
  fVar2 = ::_guard_xfg_dispatch_icall_nop(fVar2);
  *param_1 = fVar2;
  uVar1 = *(uint *)(param_2 + 0x5c);
  *(byte *)(param_1 + 4) =
       ((byte)(uVar1 >> 1) & 1 | ((byte)uVar1 & 1) * '\x02') * '\x02' | (byte)(uVar1 >> 2) & 1;
  fVar2 = *(float *)(param_2 + 0x60);
  if (fVar2 == -1.0) {
    param_1[2] = -1.0;
    return param_1;
  }
  param_1[2] = fVar2 * fVar2;
  return param_1;
}



// FUNCTION 142c1a8f0 FUN_142c1a8f0 body=278 status=ok
// SIG undefined FUN_142c1a8f0(void)

undefined8 * FUN_142c1a8f0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_14580b9e8;
  param_1[5] = &PTR_LAB_14580be08;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0xff;
  FName::FName(param_1 + 0x33,L"Invalid",1);
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(uint *)(param_1 + 0x46) = *(uint *)(param_1 + 0x46) & 0xfffffffe;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_142c20fe0(param_1 + 0x4d);
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  return param_1;
}



// FUNCTION 142c1aa10 FUN_142c1aa10 body=67 status=ok
// SIG undefined FUN_142c1aa10(void)

undefined8 * FUN_142c1aa10(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_14580c0b8;
  param_1[5] = &PTR_LAB_144356d18;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) & 0xfffffffd;
  return param_1;
}



// FUNCTION 142c1aa60 FUN_142c1aa60 body=585 status=ok
// SIG undefined FUN_142c1aa60(void)

undefined8 * FUN_142c1aa60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong local_res18;
  
  FUN_141781840();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar6 = (longlong *)FUN_1404cfca0();
  iVar3 = (int)plVar6[1];
  *(int *)(plVar6 + 1) = iVar3 + 1;
  if (*(int *)((longlong)plVar6 + 0xc) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar3);
  }
  *(undefined8 **)(*plVar6 + (longlong)iVar3 * 8) = puVar1;
  *param_1 = &PTR__scalar_deleting_destructor__14580b718;
  puVar2 = param_1 + 0x1d;
  *puVar1 = &PTR_FUN_14580b9a0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3e99999a;
  FWeakObjectPtr::operator=(puVar2,0);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x29) = *(uint *)(param_1 + 0x29) & 0xfffffff8;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
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
  pwVar7 = _guard_xfg_dispatch_icall_nop
                     (L"&UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay",L"::");
  pwVar5 = (wchar_t *)0x0;
  while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar5 = pwVar4;
  }
  FName::FName(&local_res18,pwVar5 + 2,1);
  FWeakObjectPtr::operator=(puVar2,param_1);
  param_1[0x1e] = local_res18;
  if ((local_res18 != 0) && (lVar8 = FWeakObjectPtr::Get(puVar2), lVar8 != 0)) {
    UObject::FindFunction(lVar8,param_1[0x1e]);
  }
  return param_1;
}



// FUNCTION 142c1acb0 FUN_142c1acb0 body=187 status=ok
// SIG undefined FUN_142c1acb0(void)

undefined8 * FUN_142c1acb0(undefined8 *param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_141781840();
  *(undefined4 *)(param_1 + 8) = 0x7f7fffff;
  *param_1 = &PTR_FUN_14580b448;
  FUN_140760710(param_1 + 9);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffb;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xbf800000;
  *(undefined4 *)(param_1 + 5) = 0x7f7fffff;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar2 = (longlong *)param_1[2];
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
    uVar1 = *(undefined1 *)(lVar3 + 0x48);
    param_1[10] = *(undefined8 *)(lVar3 + 0x50);
    *(undefined1 *)(param_1 + 9) = uVar1;
  }
  return param_1;
}



// FUNCTION 142c1ad70 UAISenseConfig body=56 status=ok
// SIG undefined UAISenseConfig(void)

undefined8 * UAISenseConfig::UAISenseConfig(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14580be38;
  uVar1 = DAT_1464aa730;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
  *(undefined4 *)(param_1 + 5) = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 142c1adb0 FUN_142c1adb0 body=79 status=ok
// SIG undefined FUN_142c1adb0(void)

undefined8 * FUN_142c1adb0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14580be38;
  uVar1 = DAT_1464aa730;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
  *(undefined4 *)(param_1 + 5) = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14580ca90;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = DAT_1464aa8bc;
  return param_1;
}



// FUNCTION 142c1ae00 FUN_142c1ae00 body=79 status=ok
// SIG undefined FUN_142c1ae00(void)

undefined8 * FUN_142c1ae00(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14580be38;
  uVar1 = DAT_1464aa730;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
  *(undefined4 *)(param_1 + 5) = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14580ed10;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = DAT_1464aa738;
  return param_1;
}



// FUNCTION 142c1ae50 UAISenseConfig_Hearing body=86 status=ok
// SIG undefined UAISenseConfig_Hearing(void)

undefined8 * UAISenseConfig_Hearing::UAISenseConfig_Hearing(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14580be38;
  uVar1 = DAT_1464aa730;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
  *(undefined4 *)(param_1 + 5) = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14580cd10;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x453b8000;
  *(undefined4 *)(param_1 + 5) = DAT_1464aa744;
  return param_1;
}



// FUNCTION 142c1aeb0 FUN_142c1aeb0 body=75 status=ok
// SIG undefined FUN_142c1aeb0(void)

undefined8 * FUN_142c1aeb0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14580be38;
  uVar1 = DAT_1464aa730;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
  *(undefined4 *)(param_1 + 5) = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14580cf90;
  *(undefined4 *)(param_1 + 5) = DAT_1464aa8bc;
  return param_1;
}



// FUNCTION 142c1af00 FUN_142c1af00 body=79 status=ok
// SIG undefined FUN_142c1af00(void)

undefined8 * FUN_142c1af00(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14580be38;
  uVar1 = DAT_1464aa730;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
  *(undefined4 *)(param_1 + 5) = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14580d4f0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = DAT_1464aa73c;
  return param_1;
}



// FUNCTION 142c1af50 FUN_142c1af50 body=75 status=ok
// SIG undefined FUN_142c1af50(void)

undefined8 * FUN_142c1af50(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14580be38;
  uVar1 = DAT_1464aa730;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
  *(undefined4 *)(param_1 + 5) = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14580da40;
  *(undefined4 *)(param_1 + 5) = DAT_1464aa740;
  return param_1;
}



// FUNCTION 142c1afa0 FUN_142c1afa0 body=75 status=ok
// SIG undefined FUN_142c1afa0(void)

undefined8 * FUN_142c1afa0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14580be38;
  uVar1 = DAT_1464aa730;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
  *(undefined4 *)(param_1 + 5) = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14580dcc0;
  *(undefined4 *)(param_1 + 5) = DAT_1464aa748;
  return param_1;
}



// FUNCTION 142c1aff0 UAISenseEvent_Hearing body=86 status=ok
// SIG undefined UAISenseEvent_Hearing(void)

undefined8 * UAISenseEvent_Hearing::UAISenseEvent_Hearing(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_14580ea80;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = DAT_146691200;
  *(undefined4 *)((longlong)param_1 + 0x34) = DAT_146691208;
  param_1[7] = 0x3f800000;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = DAT_146690f0c;
  return param_1;
}



// FUNCTION 142c1b050 FUN_142c1b050 body=468 status=ok
// SIG undefined FUN_142c1b050(void)

undefined8 * FUN_142c1b050(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int local_res8 [2];
  undefined1 local_res18 [16];
  char local_28 [8];
  undefined8 local_20;
  int *local_18;
  char *local_10;
  
  FUN_142c1acb0();
  *param_1 = &PTR_FUN_14580df40;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) != 0) {
    return param_1;
  }
  if ((*(byte *)(param_1[2] + 0xb4) & 1) == 0) {
    local_res8[0] = *(int *)(param_1[2] + 0x18);
    if (DAT_146691248 != DAT_146691274) {
      puVar4 = DAT_146691280;
      if (DAT_146691280 == (undefined *)0x0) {
        puVar4 = &DAT_146691278;
      }
      iVar1 = *(int *)(puVar4 + ((longlong)DAT_146691288 - 1U & (longlong)local_res8[0]) * 4);
      while (iVar1 != -1) {
        lVar8 = (longlong)iVar1 * 0x20;
        if (*(int *)(lVar8 + DAT_146691240) == local_res8[0]) {
          puVar9 = (undefined1 *)(lVar8 + DAT_146691240);
          if (iVar1 != -1) goto LAB_142c1b127;
          break;
        }
        iVar1 = *(int *)(lVar8 + DAT_146691240 + 0x18);
      }
    }
    puVar9 = (undefined1 *)0x0;
LAB_142c1b127:
    puVar5 = puVar9 + 8;
    if (puVar9 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    if (puVar5 == (undefined1 *)0x0) {
      local_28[0] = DAT_146b2c8e8;
      local_20 = param_1[3];
      local_18 = local_res8;
      local_10 = local_28;
      cVar3 = DAT_146b2c8e8 + '\x01';
      *(char *)(param_1 + 9) = DAT_146b2c8e8;
      DAT_146b2c8e8 = cVar3;
      param_1[10] = local_20;
      FUN_142c18b20(&DAT_146691240,local_res18,&local_18,0);
    }
    else {
      uVar2 = *(undefined8 *)(puVar5 + 8);
      *(undefined1 *)(param_1 + 9) = *puVar5;
      param_1[10] = uVar2;
    }
  }
  lVar8 = FUN_142c32970();
  FUN_140747230(param_1 + 0xb,param_1,FUN_142c21cf0);
  FUN_140747230(param_1 + 0xf,param_1,FUN_142c21670);
  puVar6 = (undefined8 *)FName::FName(local_res8,L"OnListenerUpdated",1);
  lVar7 = FUN_141719c60(param_1[2],*puVar6,1);
  if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x20) != lVar8)) {
    FUN_140747230(param_1 + 0xd,param_1,FUN_142c21840);
  }
  return param_1;
}



// FUNCTION 142c1b230 FUN_142c1b230 body=53 status=ok
// SIG undefined FUN_142c1b230(void)

undefined8 * FUN_142c1b230(undefined8 *param_1)

{
  FUN_142c1acb0();
  *param_1 = &PTR_FUN_14580e7b0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  return param_1;
}



// FUNCTION 142c1b270 FUN_142c1b270 body=381 status=ok
// SIG undefined FUN_142c1b270(void)

undefined8 * FUN_142c1b270(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  FUN_142c1acb0();
  *param_1 = &PTR_FUN_14580c4b0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) != 0) {
    return param_1;
  }
  FUN_140747230(param_1 + 0xb,param_1,FUN_142c21da0);
  FUN_140747230(param_1 + 0xd,param_1,FUN_142c21880);
  FUN_140747230(param_1 + 0xf,param_1,&LAB_142c21740);
  if (DAT_146b2c904 == '\0') {
    local_18 = (longlong *)0x0;
    plVar1 = (longlong *)FMemory::Realloc(0,0x20,0);
    local_10 = 2;
    local_18 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = (longlong)&PTR_GetPoolName_1450102d8;
      plVar1[1] = (longlong)FUN_142c211a0;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[3] = lVar2;
      *plVar1 = (longlong)&PTR_GetPoolName_145010320;
    }
    AActor::SetMakeNoiseDelegate(&local_18);
    if (local_10 != 0) {
      if (local_18 == (longlong *)0x0) {
        DAT_146b2c904 = 1;
        return param_1;
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
    DAT_146b2c904 = 1;
    return param_1;
  }
  return param_1;
}



// FUNCTION 142c1b3f0 FUN_142c1b3f0 body=49 status=ok
// SIG undefined FUN_142c1b3f0(void)

undefined8 * FUN_142c1b3f0(undefined8 *param_1)

{
  FUN_142c1acb0();
  *param_1 = &PTR_FUN_14580e210;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 142c1b430 FUN_142c1b430 body=424 status=ok
// SIG undefined FUN_142c1b430(void)

undefined8 * FUN_142c1b430(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_142c1acb0();
  *param_1 = &PTR_FUN_14580d210;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0x3f747ae147ae147b;
  *(undefined4 *)(param_1 + 0x29) = 6;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x28;
  *(undefined4 *)(param_1 + 0x2b) = 0x43960000;
  *(undefined4 *)(param_1 + 0x2c) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x41200000;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar1 = (longlong *)UAISenseConfig_Sight::GetPrivateStaticClass();
    lVar3 = plVar1[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar3 = plVar1[0x1f];
    }
    uVar2 = FUN_142c325b0();
    *(undefined8 *)(lVar3 + 0x48) = uVar2;
    FUN_140747230(param_1 + 0xb,param_1,FUN_142c21ec0);
    FUN_140747230(param_1 + 0xd,param_1,FUN_142c21a40);
    FUN_140747230(param_1 + 0xf,param_1,FUN_142c217b0);
  }
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 6;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  plVar1 = (longlong *)FUN_142c32730();
  lVar3 = plVar1[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar3 = plVar1[0x1f];
  }
  *(uint *)(param_1 + 0x2d) = (uint)*(byte *)(lVar3 + 0x92);
  return param_1;
}



// FUNCTION 142c1b5e0 FUN_142c1b5e0 body=49 status=ok
// SIG undefined FUN_142c1b5e0(void)

undefined8 * FUN_142c1b5e0(undefined8 *param_1)

{
  FUN_142c1acb0();
  *param_1 = &PTR_FUN_14580d770;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 142c1b620 FUN_142c1b620 body=49 status=ok
// SIG undefined FUN_142c1b620(void)

undefined8 * FUN_142c1b620(undefined8 *param_1)

{
  FUN_142c1acb0();
  *param_1 = &PTR_FUN_14580e4e0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 142c1b660 UAITask body=48 status=ok
// SIG undefined UAITask(void)

undefined8 * UAITask::UAITask(undefined8 *param_1)

{
  UGameplayTask::UGameplayTask();
  *(undefined1 *)(param_1 + 7) = 0x7f;
  *param_1 = &PTR_FUN_14580f458;
  param_1[5] = &PTR_LAB_14580f728;
  return param_1;
}



// FUNCTION 142c1b690 FUN_142c1b690 body=395 status=ok
// SIG undefined FUN_142c1b690(void)

undefined8 * FUN_142c1b690(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  UGameplayTask::UGameplayTask();
  *(undefined1 *)(param_1 + 7) = 0x7f;
  *param_1 = &PTR__scalar_deleting_destructor__14580f770;
  param_1[5] = &PTR_LAB_14580fa68;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FAIMoveRequest::FAIMoveRequest(param_1 + 0x12);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 8;
  *(undefined4 *)(param_1 + 0x1e) = DAT_146690efc;
  plVar1 = (longlong *)FUN_142c32730();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(lVar2 + 0x80);
  plVar1 = (longlong *)FUN_142c32730();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  *(uint *)(param_1 + 0x16) =
       *(uint *)(param_1 + 0x16) ^
       ((uint)*(byte *)(lVar2 + 0x8c) << 5 ^ *(uint *)(param_1 + 0x16)) & 0x20;
  plVar1 = (longlong *)FUN_142c32730();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  *(uint *)(param_1 + 0x16) =
       ((uint)*(byte *)(lVar2 + 0x8d) << 3 ^ *(uint *)(param_1 + 0x16)) & 8 ^
       *(uint *)(param_1 + 0x16) | 4;
  uVar3 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b78870(param_1,uVar3);
  uVar3 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b787f0(param_1,uVar3);
  *(undefined1 *)(param_1 + 0x21) = 5;
  *(byte *)((longlong)param_1 + 0x109) = *(byte *)((longlong)param_1 + 0x109) & 0xfe;
  return param_1;
}



// FUNCTION 142c1b820 FUN_142c1b820 body=335 status=ok
// SIG undefined FUN_142c1b820(void)

undefined8 * FUN_142c1b820(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  UGameplayTask::UGameplayTask();
  *(undefined1 *)(param_1 + 7) = 0x7f;
  *param_1 = &PTR_FUN_14580fab0;
  param_1[5] = &PTR_LAB_14580fd80;
  FEQSParametrizedQueryExecutionRequest::FEQSParametrizedQueryExecutionRequest(param_1 + 0xe);
  plVar1 = param_1 + 0x17;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xfffffff7;
  local_18 = FUN_142c21390;
  uStack_10 = 0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_144089920;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar3 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_144089968;
  }
  if (&local_18 != plVar1) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x18) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return param_1;
}



// FUNCTION 142c1b970 FUN_142c1b970 body=176 status=ok
// SIG undefined FUN_142c1b970(void)

undefined8 * FUN_142c1b970(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR__scalar_deleting_destructor__14580ef90;
  param_1[5] = &PTR_LAB_14580f420;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xfd;
  *(uint *)((longlong)param_1 + 0x18c) = *(uint *)((longlong)param_1 + 0x18c) | 0xf;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x452f0000;
  *(undefined4 *)(param_1 + 0x2f) = 0x44af0000;
  *(undefined4 *)(param_1 + 0x30) = 0x459c4000;
  *(undefined4 *)(param_1 + 0x37) = 0x42b40000;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x32510b46;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  return param_1;
}



// FUNCTION 142c1ba20 FUN_142c1ba20 body=207 status=ok
// SIG undefined FUN_142c1ba20(void)

void FUN_142c1ba20(longlong *param_1)

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
      if (*(longlong *)((longlong)local_1c * 0x380 + *local_38 + 0x350) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<896,8>_>,TSizedDefaultAllocator<32>_>::
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



// FUNCTION 142c1baf0 ~FEQSParametrizedQueryExecutionRequest body=111 status=ok
// SIG undefined ~FEQSParametrizedQueryExecutionRequest(void)

void FEQSParametrizedQueryExecutionRequest::~FEQSParametrizedQueryExecutionRequest(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142c1bb60 FUN_142c1bb60 body=431 status=ok
// SIG undefined FUN_142c1bb60(void)

void FUN_142c1bb60(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x1a8);
  plVar2 = *(longlong **)(param_1 + 0x1a0);
  if (iVar1 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = *(longlong **)(param_1 + 0x1a0);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  iVar1 = *(int *)(param_1 + 0x198);
  plVar2 = *(longlong **)(param_1 + 400);
  if (iVar1 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = *(longlong **)(param_1 + 400);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  iVar1 = *(int *)(param_1 + 0x188);
  plVar2 = *(longlong **)(param_1 + 0x180);
  if (iVar1 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = *(longlong **)(param_1 + 0x180);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xf8);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FShaderResourceKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FShaderResourceKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FShaderResourceKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FShaderResourceKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 142c1bd10 FUN_142c1bd10 body=196 status=ok
// SIG undefined FUN_142c1bd10(void)

void FUN_142c1bd10(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  puVar4 = (undefined8 *)*param_2;
  puVar5 = puVar4 + (longlong)*(int *)(param_2 + 1) * 2;
  for (; puVar4 != puVar5; puVar4 = puVar4 + 2) {
    if (*(int *)(puVar4 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar4;
    }
    uVar2 = FUN_14171bfe0();
    lVar3 = FUN_141799410(uVar2,0xffffffffffffffff,puVar6);
    if (lVar3 != 0) {
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
      }
      *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar3;
    }
  }
  return;
}



// FUNCTION 142c1be30 FUN_142c1be30 body=207 status=ok
// SIG undefined FUN_142c1be30(void)

longlong FUN_142c1be30(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  FUN_142c1ba20(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 142c1bf00 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessMotionBlurPS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142c1bb60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 142c1bf40 FUN_142c1bf40 body=82 status=ok
// SIG undefined FUN_142c1bf40(void)

longlong FUN_142c1bf40(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142c1bfa0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAISenseConfig_Sight::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142c1bff0 FUN_142c1bff0 body=117 status=ok
// SIG undefined FUN_142c1bff0(void)

longlong FUN_142c1bff0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 142c1c070 FUN_142c1c070 body=100 status=ok
// SIG undefined FUN_142c1c070(void)

longlong FUN_142c1c070(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 142c1c0e0 FUN_142c1c0e0 body=149 status=ok
// SIG undefined FUN_142c1c0e0(void)

longlong FUN_142c1c0e0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 142c1c180 FUN_142c1c180 body=188 status=ok
// SIG undefined FUN_142c1c180(void)

longlong FUN_142c1c180(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 142c1c240 FUN_142c1c240 body=63 status=ok
// SIG undefined FUN_142c1c240(void)

longlong FUN_142c1c240(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142c1c280 `scalar_deleting_destructor' body=232 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAITask_MoveTo::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x100);
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
  plVar4 = *(longlong **)(param_1 + 0xc0);
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
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 142c1c370 FUN_142c1c370 body=179 status=ok
// SIG undefined FUN_142c1c370(void)

longlong FUN_142c1c370(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 200);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xb8);
  FEQSParametrizedQueryExecutionRequest::~FEQSParametrizedQueryExecutionRequest(param_1 + 0x70);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 142c1c430 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FGetBoxLengthsDataflowNode::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 142c1c490 FUN_142c1c490 body=677 status=ok
// SIG undefined FUN_142c1c490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_142c1c490(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                      int param_5,int param_6,byte param_7,char param_8,byte param_9)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  uint local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar8 = 0;
  if (param_1 != 0) {
    local_a8 = 0;
    uVar6 = GetTransientPackage();
    FUN_1417846f0(uVar6,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_a0 = 0;
    uVar7 = UAITask_MoveTo::GetPrivateStaticClass();
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = 0;
    lVar8 = FUN_1417985e0(uVar7,uVar6,0,0);
    *(undefined8 *)(lVar8 + 0x30) = local_a8;
    *(longlong *)(lVar8 + 0x68) = param_1;
    FUN_142b79770(lVar8,param_1 + 0x510,0xc0);
    FAIMoveRequest::FAIMoveRequest(&local_98);
    if (param_3 == 0) {
      FAIMoveRequest::SetGoalLocation(&local_98,param_2);
    }
    else {
      FAIMoveRequest::SetGoalActor(&local_98,param_3);
    }
    if (param_5 == 0) {
      bVar10 = (byte)(local_78 >> 5);
    }
    else {
      bVar10 = param_5 == 1;
    }
    local_78 = ((uint)bVar10 << 5 ^ local_78) & 0x20 ^ local_78;
    if (param_6 == 0) {
      bVar10 = (byte)(local_78 >> 3);
    }
    else {
      bVar10 = param_6 == 1;
    }
    local_80 = *(undefined8 *)(param_1 + 0x578);
    *(longlong *)(lVar8 + 0x68) = param_1;
    *(uint *)(lVar8 + 0xb0) = *(uint *)(lVar8 + 0xb0) & 0xffffff00;
    local_78 = ((bVar10 & 1) * 2 | (uint)param_7) << 2 | local_78 & 0xfffffff3;
    *(undefined8 *)(lVar8 + 0xa8) = local_80;
    *(uint *)(lVar8 + 0xb0) = *(uint *)(lVar8 + 0xb0) | local_78 & 0xff;
    *(undefined8 *)(lVar8 + 0x90) = local_98;
    *(undefined8 *)(lVar8 + 0x98) = local_90;
    puVar3 = (undefined8 *)(lVar8 + 0xb8);
    *(undefined4 *)(lVar8 + 0xa0) = local_88;
    local_b8 = local_70;
    *(undefined4 *)(lVar8 + 0xb4) = param_4;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    plVar9 = local_68;
    if (&local_b8 != puVar3) {
      local_b8 = *puVar3;
      plVar9 = *(longlong **)(lVar8 + 0xc0);
      local_58 = local_70;
      plStack_50 = local_68;
      *puVar3 = local_70;
      *(longlong **)(lVar8 + 0xc0) = local_68;
    }
    plStack_b0 = plVar9;
    local_74 = param_4;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
        }
      }
    }
    *(undefined4 *)(lVar8 + 200) = local_60;
    *(byte *)(lVar8 + 0x109) = *(byte *)(lVar8 + 0x109) & 0xfe;
    *(byte *)(lVar8 + 0x109) = *(byte *)(lVar8 + 0x109) | param_9;
    if (param_8 != '\0') {
      local_a8 = UAIResource_Logic::GetPrivateStaticClass();
      FUN_142b787f0(lVar8,local_a8);
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_68 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
  }
  return lVar8;
}



// FUNCTION 142c1c740 FUN_142c1c740 body=254 status=ok
// SIG undefined FUN_142c1c740(void)

void FUN_142c1c740(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    return;
  }
  lVar2 = FUN_142b79640(param_1);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = FUN_142c2de20();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    lVar4 = 0;
    lVar3 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (lVar2 = *(longlong *)(lVar2 + 0x490), lVar2 == 0)) goto LAB_142c1c82a;
    lVar3 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142c1c82a;
  }
  lVar4 = lVar2;
LAB_142c1c82a:
  *(longlong *)(param_1 + 0x68) = lVar4;
  return;
}



// FUNCTION 142c1c840 Activate body=39 status=ok
// SIG undefined Activate(void)

void UAITask_MoveTo::Activate(longlong param_1)

{
  FUN_142c1c740();
  *(undefined4 *)(param_1 + 0xf0) = DAT_146690efc;
  FUN_142c1d900(param_1);
  return;
}



// FUNCTION 142c1c870 FUN_142c1c870 body=99 status=ok
// SIG undefined FUN_142c1c870(void)

void FUN_142c1c870(longlong param_1)

{
  longlong lVar1;
  
  if ((((*(longlong *)(param_1 + 0x70) != 0) && (lVar1 = *(longlong *)(param_1 + 0x68), lVar1 != 0))
      && (*(longlong *)(lVar1 + 0x568) != 0)) && (*(longlong *)(lVar1 + 0x488) != 0)) {
    FUN_142c1c740();
    FUN_142be0560(param_1 + 0x70,*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x488),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x568),param_1 + 0xb8);
  }
  return;
}



// FUNCTION 142c1c8e0 FUN_142c1c8e0 body=652 status=ok
// SIG undefined FUN_142c1c8e0(void)

undefined8 FUN_142c1c8e0(longlong param_1,float param_2)

{
  longlong *plVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  uint *puVar11;
  undefined8 uVar12;
  float fVar13;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  plVar1 = (longlong *)(param_1 + 0x1c0);
  iVar2 = *(int *)(param_1 + 0x1e8);
  puStack_58 = (uint *)(param_1 + 0x1d0);
  local_a8 = 0;
  uStack_a4 = 1;
  uVar12 = 0;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  if (iVar2 != 0) {
    puVar11 = *(uint **)(param_1 + 0x1e0);
    if (*(uint **)(param_1 + 0x1e0) == (uint *)0x0) {
      puVar11 = puStack_58;
    }
    uVar10 = *puVar11;
    uStack_90 = 0;
    local_a8 = 0;
    while (uVar10 == 0) {
      lVar6 = (longlong)(int)local_a8;
      uStack_90 = uStack_90 + 0x20;
      uVar10 = local_a8 + 1;
      bVar4 = (int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 <= (int)local_a8;
      local_a8 = uVar10;
      if (bVar4) goto LAB_142c1c9be;
      uVar10 = puVar11[lVar6 + 1];
    }
    uStack_a4 = -uVar10 & uVar10;
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
    local_98._4_4_ = (uStack_90 - iVar5) + 0x1f;
    if (iVar2 < local_98._4_4_) {
LAB_142c1c9be:
      local_98._4_4_ = iVar2;
    }
  }
  auStack_50._4_4_ = local_98._4_4_;
  auStack_50._0_4_ = 0xffffffff;
  auStack_50._8_4_ = uStack_90;
  auStack_50._12_4_ = iStack_8c;
  uStack_60 = local_a8;
  uStack_5c = uStack_a4;
  local_70 = 0;
  local_40._0_4_ = SUB84(plVar1,0);
  local_40._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_90 = 0xffffffff;
  iStack_8c = local_98._4_4_;
  uStack_a0 = local_a8;
  uStack_9c = uStack_a4;
  local_88._8_4_ = (undefined4)local_40;
  local_88._0_8_ = auStack_50._8_8_;
  local_88._12_4_ = local_40._4_4_;
  bVar4 = local_98._4_4_ < *(int *)(param_1 + 0x1e8);
  local_78 = plVar1;
  local_68 = plVar1;
  local_40 = plVar1;
  local_98 = puStack_58;
  if (bVar4) {
    do {
      lVar6 = (longlong)iStack_8c * 0x380 + *plVar1;
      pfVar8 = *(float **)(lVar6 + 0x350);
      if (*(float **)(lVar6 + 0x350) == (float *)0x0) {
        pfVar8 = (float *)(lVar6 + 0x10);
      }
      pfVar9 = pfVar8 + (longlong)*(int *)(lVar6 + 0x358) * 0x1a;
      for (; pfVar8 != pfVar9; pfVar8 = pfVar8 + 0x1a) {
        fVar13 = param_2 + *pfVar8;
        *pfVar8 = fVar13;
        if (pfVar8[1] <= fVar13) {
          fVar3 = pfVar8[0x11];
          if (((uint)fVar3 >> 1 & 1) == 0) {
LAB_142c1cab3:
            if (((uint)fVar3 & 1) == 0) goto LAB_142c1caeb;
          }
          else {
            if (pfVar8[2] <= 0.0) {
              fVar13 = 3.4028235e+38;
            }
            if (3.4028235e+38 <= fVar13) goto LAB_142c1cab3;
          }
          if (((uint)fVar3 >> 2 & 1) == 0) {
            lVar7 = FWeakObjectPtr::Get(lVar6 + 8);
            if (lVar7 != 0) {
              pfVar8[0x11] = (float)((uint)pfVar8[0x11] & 0xfffffffd | 4);
              FUN_142c24770(param_1,lVar7,pfVar8);
              uVar12 = 1;
            }
          }
        }
LAB_142c1caeb:
      }
      uStack_90 = uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
    } while (iStack_8c < (int)local_98[6]);
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      FUN_142c1db00(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
  }
  return uVar12;
}



// FUNCTION 142c1cb70 FUN_142c1cb70 body=70 status=ok
// SIG undefined FUN_142c1cb70(void)

void FUN_142c1cb70(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x830) & 0x80) == 0)) {
    FUN_142c1cbc0(param_1,param_1 + 6);
    FUN_142c1cbc0(param_1,param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 142c1cbc0 FUN_142c1cbc0 body=451 status=ok
// SIG undefined FUN_142c1cbc0(void)

void FUN_142c1cbc0(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  iVar1 = (int)param_2[5];
  local_78 = 0;
  uStack_74 = 1;
  puStack_28 = (uint *)(param_2 + 2);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar8 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar7 = *puVar8;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar7 == 0) {
      lVar6 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar7 = local_78 + 1;
      bVar2 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar7;
      if (bVar2) goto LAB_142c1cc81;
      uVar7 = puVar8[lVar6 + 1];
    }
    uStack_74 = -uVar7 & uVar7;
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
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar1 < local_68._4_4_) {
LAB_142c1cc81:
      local_68._4_4_ = iVar1;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(param_2,0);
  local_10._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar2 = local_68._4_4_ < (int)param_2[5];
  local_48 = param_2;
  local_38 = param_2;
  local_10 = param_2;
  local_68 = puStack_28;
  if (bVar2) {
    do {
      lVar6 = (longlong)iStack_5c * 0x3c + *param_2;
      cVar3 = FWeakObjectPtr::IsValid(lVar6 + 4);
      if (cVar3 != '\0') {
        uVar5 = FWeakObjectPtr::Get(lVar6 + 4);
        cVar3 = FUN_142c1c8e0(uVar5,*(undefined4 *)(param_1 + 0xe0));
        if (cVar3 != '\0') {
          *(uint *)(lVar6 + 0x2c) = *(uint *)(lVar6 + 0x2c) | 1;
          *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 1;
        }
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 142c1cd90 BeginDestroy body=41 status=ok
// SIG undefined BeginDestroy(void)

void UAIPerceptionComponent::BeginDestroy(longlong *param_1)

{
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    (**(code **)(*param_1 + 0x408))();
  }
  FUN_142330890(param_1);
  return;
}



// FUNCTION 142c1cdc0 FUN_142c1cdc0 body=56 status=ok
// SIG undefined FUN_142c1cdc0(void)

void FUN_142c1cdc0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *param_3;
  local_18 = *(undefined4 *)(param_3 + 1);
  local_28 = param_2;
  local_14 = param_4;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1a8,&local_28);
  return;
}



// FUNCTION 142c1ce00 FUN_142c1ce00 body=31 status=ok
// SIG undefined FUN_142c1ce00(void)

void FUN_142c1ce00(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x198,local_res8);
  return;
}



// FUNCTION 142c1ce20 FUN_142c1ce20 body=177 status=ok
// SIG undefined FUN_142c1ce20(void)

void FUN_142c1ce20(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  cVar3 = FWeakObjectPtr::IsValid();
  if (cVar3 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1);
    plVar1 = *(longlong **)(lVar4 + 0x20);
    if (plVar1 != (longlong *)0x0) {
      lVar4 = FUN_1428dfc70();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_28 = 0;
        local_20 = 0;
        (**(code **)(*plVar1 + 0x610))(plVar1,param_1 + 0xc,&local_28);
        puVar5 = (undefined8 *)FRotator::Vector(&local_28,local_18);
        *(undefined8 *)(param_1 + 0x18) = *puVar5;
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(puVar5 + 1);
      }
    }
  }
  return;
}



// FUNCTION 142c1cee0 FUN_142c1cee0 body=110 status=ok
// SIG undefined FUN_142c1cee0(void)

float FUN_142c1cee0(longlong param_1,longlong param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[2] - *(float *)(param_2 + 0x14);
  fVar3 = param_3[1] - *(float *)(param_2 + 0x10);
  fVar2 = *param_3 - *(float *)(param_2 + 0xc);
  fVar2 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar1 = *(float *)(param_1 + 0x160);
  if (*(float *)(param_1 + 0x15c) <= fVar2 && fVar2 != *(float *)(param_1 + 0x15c)) {
    fVar2 = ((*(float *)(param_1 + 0x164) - fVar1) / param_4) * fVar2 + fVar1;
    if (fVar2 < 0.0) {
      return 0.0;
    }
    if (fVar2 <= fVar1) {
      fVar1 = fVar2;
    }
  }
  return fVar1;
}



// FUNCTION 142c1cf50 FUN_142c1cf50 body=564 status=ok
// SIG undefined FUN_142c1cf50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_142c1cf50(longlong *param_1,float *param_2,float param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  float fVar9;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined *local_e0;
  undefined1 local_d8 [8];
  float local_d0;
  float local_cc;
  float local_c8;
  undefined1 local_b8 [72];
  longlong local_70;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if ((0.0 < param_3) && (plVar2 = (longlong *)param_1[0x23], plVar2 != (longlong *)0x0)) {
    iVar1 = *(int *)((longlong)plVar2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
      (**(code **)(*param_1 + 0x448))(param_1,&local_d0);
      fVar9 = ((local_d0 - *param_2) * (local_d0 - *param_2) +
               (local_cc - param_2[1]) * (local_cc - param_2[1]) +
              (local_c8 - param_2[2]) * (local_c8 - param_2[2])) / (param_3 * param_3);
      if (fVar9 <= *(float *)(param_1 + 0x2f) * *(float *)(param_1 + 0x2f)) {
        return true;
      }
      if ((param_4 == '\0') &&
         (fVar9 <= *(float *)((longlong)param_1 + 0x17c) * *(float *)((longlong)param_1 + 0x17c))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146b2c920) &&
           (_Init_thread_header(&DAT_146b2c920), DAT_146b2c920 == -1)) {
          FName::FName(&DAT_146b2c918,"CanHear",1);
          _Init_thread_footer(&DAT_146b2c920);
        }
        local_e8 = plVar2;
        uVar6 = FUN_1422ffb20(local_b8,DAT_146b2c918,local_d8,1);
        uVar7 = (**(code **)(*plVar2 + 0x148))(plVar2);
        local_e0 = &DAT_146aefe68;
        local_e8 = (longlong *)uVar6;
        cVar3 = UWorld::LineTraceTestByChannel(uVar7,&local_d0,param_2,3);
        if (local_50 != 0) {
          FMemory::Free();
        }
        if (local_70 != 0) {
          FMemory::Free();
        }
        return cVar3 == '\0';
      }
    }
  }
  return false;
}



// FUNCTION 142c1d1c0 FUN_142c1d1c0 body=690 status=ok
// SIG undefined FUN_142c1d1c0(void)

void FUN_142c1d1c0(longlong param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  longlong local_res8;
  
  if ((*(byte *)(param_1 + 0x230) & 1) == 0) {
    lVar7 = *(longlong *)(param_1 + 0x120);
    local_res8 = param_1;
    if (lVar7 == 0) {
      lVar7 = FUN_1423407b0();
    }
    lVar7 = FUN_142c1f5b0(lVar7);
    iVar13 = 0;
    if (lVar7 != 0) {
      FUN_142c28b30(lVar7,param_1);
      lVar8 = FUN_142c1f500(param_1);
      if (lVar8 != 0) {
        FUN_142c28cb0(lVar7,lVar8,0);
        iVar11 = *(int *)(lVar7 + 0x168);
        if (iVar11 != 0) {
          lVar14 = *(longlong *)(lVar7 + 0x160);
          iVar15 = 0;
          cVar5 = FWeakObjectPtr::IsValid(lVar14 + 0x10);
          if ((cVar5 == '\0') || (cVar5 = FUN_14058c1e0(lVar14 + 0x10,lVar8), cVar5 == '\0')) {
            bVar12 = 1;
          }
          else {
            bVar12 = 0;
            iVar15 = iVar13;
          }
          do {
            iVar1 = iVar13;
            do {
              iVar1 = iVar1 + 1;
              if (iVar11 <= iVar1) break;
              lVar14 = *(longlong *)(lVar7 + 0x160) + (longlong)iVar1 * 0x18;
              cVar5 = FWeakObjectPtr::IsValid(lVar14 + 0x10);
              if ((cVar5 == '\0') || (cVar5 = FUN_14058c1e0(lVar14 + 0x10,lVar8), cVar5 == '\0')) {
                bVar6 = 1;
              }
              else {
                bVar6 = 0;
              }
            } while (bVar12 == bVar6);
            if (bVar12 != 0) {
              if (iVar15 != iVar13) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(lVar7 + 0x160) + (longlong)iVar15 * 0x18),
                           (void *)(*(longlong *)(lVar7 + 0x160) + (longlong)iVar13 * 0x18),
                           (longlong)(iVar1 - iVar13) * 0x18);
              }
              iVar15 = iVar15 + (iVar1 - iVar13);
            }
            bVar12 = bVar12 ^ 1;
            iVar13 = iVar1;
          } while (iVar1 < iVar11);
          *(int *)(lVar7 + 0x168) = iVar15;
          param_1 = local_res8;
        }
      }
    }
    if (((*(uint *)(param_1 + 8) >> 0xf & 1) == 0) &&
       (lVar7 = *(longlong *)(param_1 + 0x118), lVar7 != 0)) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UAIPerceptionComponent::OnOwnerEndPlay",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      lVar4 = local_res8;
      plVar16 = (longlong *)(lVar7 + 0x2a0);
      lVar8 = *plVar16;
      iVar13 = *(int *)(lVar7 + 0x2a8);
      for (lVar14 = lVar8; lVar14 != (longlong)iVar13 * 0x10 + lVar8; lVar14 = lVar14 + 0x10) {
        if ((*(longlong *)(lVar14 + 8) == lVar4) &&
           (lVar10 = FWeakObjectPtr::GetEvenIfUnreachable(lVar14), param_1 == lVar10)) {
          iVar13 = (int)(lVar14 - lVar8 >> 4);
          if (iVar13 != -1) {
            iVar11 = *(int *)(lVar7 + 0x2a8);
            iVar15 = (iVar11 - iVar13) + -1;
            if (0 < iVar15) {
              iVar15 = 1;
            }
            if (iVar15 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar13 * 0x10 + *plVar16),
                         (void *)((longlong)(iVar11 - iVar15) * 0x10 + *plVar16),
                         (longlong)iVar15 << 4);
              iVar11 = *(int *)(lVar7 + 0x2a8);
            }
            *(int *)(lVar7 + 0x2a8) = iVar11 + -1;
          }
          break;
        }
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar16);
    }
    *(uint *)(param_1 + 0x230) = *(uint *)(param_1 + 0x230) | 1;
  }
  return;
}



// FUNCTION 142c1d480 FUN_142c1d480 body=560 status=ok
// SIG undefined FUN_142c1d480(void)

void FUN_142c1d480(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  int local_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  char local_60;
  char cStack_5f;
  longlong *local_58;
  int iStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  plVar1 = (longlong *)(param_1 + 0x98);
  local_98 = 0;
  uStack_94 = 1;
  iVar2 = *(int *)(param_1 + 0xc0);
  puStack_48 = (uint *)(param_1 + 0xa8);
  bVar5 = false;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 0xb8);
    if (*(uint **)(param_1 + 0xb8) == (uint *)0x0) {
      puVar9 = puStack_48;
    }
    uVar3 = *puVar9;
    local_98 = 0;
    uStack_80 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_98;
      uStack_80 = uStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar4) goto LAB_142c1d54d;
      uVar3 = puVar9[lVar7 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar8 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_88._4_4_ = (uStack_80 - iVar8) + 0x1f;
    if (iVar2 < local_88._4_4_) {
LAB_142c1d54d:
      local_88._4_4_ = iVar2;
    }
  }
  auStack_40._4_4_ = local_88._4_4_;
  auStack_40._0_4_ = 0xffffffff;
  auStack_40._8_4_ = uStack_80;
  auStack_40._12_4_ = iStack_7c;
  iStack_50 = local_98;
  uStack_4c = uStack_94;
  local_60 = '\0';
  cStack_5f = '\0';
  local_30._0_4_ = SUB84(plVar1,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  iStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = auStack_40._8_8_;
  local_78._12_4_ = local_30._4_4_;
  bVar4 = local_88._4_4_ < *(int *)(param_1 + 0xc0);
  local_68 = plVar1;
  local_58 = plVar1;
  local_30 = plVar1;
  local_88 = puStack_48;
  if (bVar4) {
    do {
      iVar2 = iStack_7c;
      lVar7 = (longlong)iStack_7c;
      cVar6 = FWeakObjectPtr::IsValid(*plVar1 + 8 + lVar7 * 0x28);
      if (cVar6 == '\0') {
        FUN_142c25ed0(param_1,*plVar1 + lVar7 * 0x28,0);
        TSet<TTuple<unsigned_int,FAISightTarget>,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>,FDefaultSetAllocator>
        ::Remove(local_78._8_8_,iVar2);
        local_60 = '\x01';
        bVar5 = true;
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if ((local_60 != '\0') && (cStack_5f != '\0')) {
      TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
    if (bVar5) {
      cVar6 = TSparseArray<TSetElement<TTuple<FName,FNewTextureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ::Compact(plVar1);
      if (cVar6 != '\0') {
        TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
        ::Rehash(plVar1);
      }
      AlgoImpl::
      IntroSortInternal<FAISightQuery,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>
                (*(undefined8 *)(param_1 + 0x138),(longlong)*(int *)(param_1 + 0x140),local_res8[0],
                 local_res8);
    }
  }
  return;
}



// FUNCTION 142c1d6b0 FUN_142c1d6b0 body=348 status=ok
// SIG undefined FUN_142c1d6b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c1d6b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if ((((*(float *)(param_1 + 0x10) <= -(float)DAT_146691200) ||
         ((float)DAT_146691200 <= *(float *)(param_1 + 0x10))) ||
        (*(float *)(param_1 + 0x14) <= -DAT_146691200._4_4_)) ||
       (((DAT_146691200._4_4_ <= *(float *)(param_1 + 0x14) ||
         (*(float *)(param_1 + 0x18) <= -DAT_146691208)) ||
        (DAT_146691208 <= *(float *)(param_1 + 0x18))))) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if (((*(float *)(param_1 + 4) <= -(float)DAT_146691200) ||
        ((float)DAT_146691200 <= *(float *)(param_1 + 4))) ||
       ((*(float *)(param_1 + 8) <= -DAT_146691200._4_4_ ||
        (((DAT_146691200._4_4_ <= *(float *)(param_1 + 8) ||
          (*(float *)(param_1 + 0xc) <= -DAT_146691208)) ||
         (DAT_146691208 <= *(float *)(param_1 + 0xc))))))) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    if (cVar3 != cVar2) {
      if (cVar3 != '\0') {
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 4);
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xc);
        return;
      }
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      return;
    }
    if ((cVar3 == '\0') && (cVar2 == '\0')) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x168);
      if (lVar1 == 0) {
        local_18 = _DAT_1468b5d90;
        local_10 = DAT_1468b5d98;
      }
      else {
        local_18 = *(undefined8 *)(lVar1 + 0x220);
        local_10 = *(undefined4 *)(lVar1 + 0x228);
      }
      *(undefined8 *)(param_1 + 4) = local_18;
      *(undefined8 *)(param_1 + 0x10) = local_18;
      *(undefined4 *)(param_1 + 0xc) = local_10;
      *(undefined4 *)(param_1 + 0x18) = local_10;
    }
  }
  return;
}



// FUNCTION 142c1d810 FUN_142c1d810 body=233 status=ok
// SIG undefined FUN_142c1d810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c1d810(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  
  puVar2 = (undefined1 *)
           FGenericTeamId::GetTeamIdentifier(local_res8,*(undefined8 *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x28) = *puVar2;
  if ((((-(float)DAT_146691200 < *(float *)(param_1 + 4)) &&
       (*(float *)(param_1 + 4) < (float)DAT_146691200)) &&
      (-DAT_146691200._4_4_ < *(float *)(param_1 + 8))) &&
     (((*(float *)(param_1 + 8) < DAT_146691200._4_4_ &&
       (-DAT_146691208 < *(float *)(param_1 + 0xc))) && (*(float *)(param_1 + 0xc) < DAT_146691208))
     )) {
    return;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x168);
    if (lVar1 == 0) {
      local_18 = _DAT_1468b5d90;
      local_10 = DAT_1468b5d98;
    }
    else {
      local_18 = *(undefined8 *)(lVar1 + 0x220);
      local_10 = *(undefined4 *)(lVar1 + 0x228);
    }
    *(undefined8 *)(param_1 + 4) = local_18;
    *(undefined4 *)(param_1 + 0xc) = local_10;
  }
  return;
}



// FUNCTION 142c1d900 FUN_142c1d900 body=508 status=ok
// SIG undefined FUN_142c1d900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c1d900(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((((*(uint *)(param_1 + 0x16) >> 2 & 1) == 0) || (param_1[0xd] == 0)) ||
     (cVar1 = (**(code **)(*(longlong *)(param_1[0xd] + 0x458) + 0x40))(), cVar1 == '\0')) {
    param_1[0x1c] = 0;
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
  else {
    local_98 = FUN_142c1d900;
    uStack_90 = 0;
    uVar2 = AActor::GetWorldTimerManager(param_1[0xd]);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_8c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,param_1 + 0x1c,&local_88,0x3e4ccccd);
    if (local_28 != 0) {
      plVar5 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar5 = local_38;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 142c1db00 FUN_142c1db00 body=161 status=ok
// SIG undefined FUN_142c1db00(void)

undefined8 FUN_142c1db00(longlong param_1,uint param_2,char param_3)

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
      FUN_142c25290(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c1dbb0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
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
      TSet<TTuple<int,SWrapBox::FChildArranger::FArrangementData>,TDefaultMapHashableKeyFuncs<int,SWrapBox::FChildArranger::FArrangementData,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c1dc60 FUN_142c1dc60 body=621 status=ok
// SIG undefined FUN_142c1dc60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c1dc60(longlong param_1)

{
  uint *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf8) + 0x98);
    *puVar1 = *puVar1 | 0x100;
  }
  if ((((*(uint *)(param_1 + 0xb0) >> 2 & 1) == 0) || (*(longlong *)(param_1 + 0x68) == 0)) ||
     (cVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x458) + 0x40))(),
     cVar2 == '\0')) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
    if ((*(longlong *)(param_1 + 0xf8) == 0) ||
       (lVar5 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xf8) + 0x9c), lVar5 == 0)) {
      FUN_142c1e9c0(param_1,3);
    }
    else {
      local_98 = *(code **)(param_1 + 0xf8);
      uStack_90 = *(longlong *)(param_1 + 0x100);
      if (uStack_90 != 0) {
        LOCK();
        *(int *)(uStack_90 + 8) = *(int *)(uStack_90 + 8) + 1;
        UNLOCK();
      }
      FUN_142b96b80(lVar5,&local_98,1);
    }
  }
  else {
    local_98 = FUN_142c1dc60;
    uStack_90._0_4_ = 0;
    uVar3 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x68));
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar4 + 3) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_90._4_4_;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,param_1 + 0xe8,&local_88,0x3e4ccccd);
    if (local_28 != 0) {
      plVar6 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar6 = local_38;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
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



// FUNCTION 142c1ded0 FUN_142c1ded0 body=472 status=ok
// SIG undefined FUN_142c1ded0(void)

void FUN_142c1ded0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 local_res8 [8];
  byte local_28 [32];
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x180)) {
    plVar4 = *(longlong **)(param_1 + 0x178);
    do {
      if ((*plVar4 != 0) && (*(longlong *)(*plVar4 + 0x10) == param_2[2])) {
        (*(longlong **)(param_1 + 0x178))[iVar3] = (longlong)param_2;
        if (iVar3 != -1) goto LAB_142c1df68;
        break;
      }
      iVar3 = iVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x180));
  }
  iVar3 = *(int *)(param_1 + 0x180);
  *(int *)(param_1 + 0x180) = iVar3 + 1;
  if (*(int *)(param_1 + 0x184) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x178,iVar3);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x178) + (longlong)iVar3 * 8) = param_2;
LAB_142c1df68:
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x278))(param_2,local_res8);
  FUN_14077bb00(local_28,*puVar1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146859258) && (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1))
  {
    DAT_146859248 = 0xff;
    FName::FName(&DAT_146859250,L"Invalid",1);
    _Init_thread_footer(&DAT_146859258);
  }
  if (local_28[0] != DAT_146859248) {
    fVar5 = *(float *)((longlong)param_2 + 0x2c);
    if (fVar5 == 0.0) {
      fVar5 = 3.4028235e+38;
    }
    if ((*(int *)(param_1 + 0x228) <= (int)(uint)local_28[0]) &&
       (iVar3 = local_28[0] + 1 + (*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x228)),
       *(int *)(param_1 + 0x228) = iVar3, *(int *)(param_1 + 0x22c) < iVar3)) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
    }
    *(float *)(*(longlong *)(param_1 + 0x220) + (ulonglong)local_28[0] * 4) = fVar5;
  }
  if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    lVar2 = FUN_142c1f5b0(lVar2);
    if (lVar2 != 0) {
      FUN_142c2b860(lVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142c1e0b0 FUN_142c1e0b0 body=595 status=ok
// SIG undefined FUN_142c1e0b0(void)

bool FUN_142c1e0b0(longlong *param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_78;
  float fStack_74;
  float local_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  
  if ((param_2 != 0) && (param_1[0x23] != 0)) {
    lVar2 = *(longlong *)(param_2 + 0x168);
    if (lVar2 == 0) {
      uVar5 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_60 = DAT_1468b5d98;
      pfVar4 = (float *)&local_68;
      local_68 = uVar5;
    }
    else {
      fStack_74 = *(float *)(lVar2 + 0x224);
      pfVar4 = &local_78;
      local_78 = *(float *)(lVar2 + 0x220);
      uVar5 = CONCAT44(fStack_74,fStack_74);
      local_70 = *(float *)(lVar2 + 0x228);
    }
    uVar1 = *(undefined8 *)pfVar4;
    local_50 = pfVar4[2];
    (**(code **)(*param_1 + 0x448))(uVar5,&local_78);
    fVar12 = (float)((ulonglong)uVar1 >> 0x20) - fStack_74;
    fVar10 = (float)uVar1 - local_78;
    fVar8 = local_50 - local_70;
    fVar13 = fVar12 * fVar12 + fVar10 * fVar10 + fVar8 * fVar8;
    if ((fVar13 <= *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30)) &&
       ((local_58 = uVar1, param_3 == '\0' ||
        (iVar3 = rand(),
        (float)iVar3 * (float)iVar3 * 9.313794e-10 * fVar13 <=
        *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30) * 0.16000001)))) {
      fVar9 = fVar8;
      fVar11 = fVar10;
      fVar6 = fVar12;
      if ((fVar13 != 1.0) &&
         (fVar9 = DAT_1468b5d98, fVar11 = DAT_1468b5d90, fVar6 = DAT_1468b5d94, 1e-08 <= fVar13)) {
        auVar7 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        fVar6 = auVar7._0_4_;
        fVar6 = fVar6 + fVar6 * (0.5 - fVar13 * 0.5 * fVar6 * fVar6);
        fVar6 = fVar6 + fVar6 * (0.5 - fVar13 * 0.5 * fVar6 * fVar6);
        fVar9 = fVar8 * fVar6;
        fVar11 = fVar10 * fVar6;
        fVar6 = fVar12 * fVar6;
      }
      uVar5 = (**(code **)(*param_1 + 0x450))(param_1,&local_58);
      FRotator::Vector(uVar5,&local_68);
      return *(float *)((longlong)param_1 + 0x1bc) <=
             fVar11 * (float)local_68 + fVar6 * local_68._4_4_ + fVar9 * local_60;
    }
  }
  return false;
}



// FUNCTION 142c1e310 CreateCopy body=100 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,TTypeWrapper<void>___cdecl(void),FAINamedID<FAISenseCounter>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14580fdc8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar2 = &PTR_FUN_14580fe10;
  }
  return;
}



// FUNCTION 142c1e380 FUN_142c1e380 body=437 status=ok
// SIG undefined FUN_142c1e380(void)

bool FUN_142c1e380(longlong param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  iVar5 = *(int *)(param_1 + 0x158);
  if (iVar5 < 1) {
    return false;
  }
  if (param_2 == 0) {
    FUN_142c19d80(*(undefined8 *)(param_1 + 0x150),(longlong)*(int *)(param_1 + 0x158),local_res8[0]
                  ,local_res8);
    iVar5 = *(int *)(param_1 + 0x158);
  }
  pvVar3 = ThreadLocalStoragePointer;
  iVar6 = 0;
  if (0 < iVar5) {
    uVar7 = (ulonglong)_tls_index;
    lVar8 = 0;
    do {
      pfVar1 = (float *)(lVar8 + *(longlong *)(param_1 + 0x150));
      if (*(float *)(param_1 + 0x170) < *pfVar1 || *(float *)(param_1 + 0x170) == *pfVar1) break;
      cVar4 = FWeakObjectPtr::IsStale(pfVar1 + 2,0,0);
      if (cVar4 == '\0') {
        fVar2 = pfVar1[1];
        if ((*(int *)(*(longlong *)((longlong)pvVar3 + uVar7 * 8) + 0x38) < DAT_146b2c938) &&
           (_Init_thread_header(&DAT_146b2c938), DAT_146b2c938 == -1)) {
          DAT_146b2c934 = -NAN;
          _Init_thread_footer(&DAT_146b2c938);
        }
        if ((fVar2 != DAT_146b2c934) && (cVar4 = FUN_142c1e540(param_1), cVar4 == '\0')) {
          FUN_142c1e540(param_1);
        }
      }
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 0x78;
    } while (iVar6 < *(int *)(param_1 + 0x158));
  }
  if (iVar6 != 0) {
    iVar5 = *(int *)(param_1 + 0x158);
    if (iVar5 - iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x150),
                 (void *)((longlong)iVar6 * 0x78 + (longlong)*(void **)(param_1 + 0x150)),
                 (longlong)(iVar5 - iVar6) * 0x78);
      iVar5 = *(int *)(param_1 + 0x158);
    }
    *(int *)(param_1 + 0x158) = iVar5 - iVar6;
  }
  return 0 < iVar6;
}



// FUNCTION 142c1e540 FUN_142c1e540 body=339 status=ok
// SIG undefined FUN_142c1e540(void)

undefined8 FUN_142c1e540(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  
  iVar1 = *(int *)(param_2 + 4);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2c938) && (_Init_thread_header(&DAT_146b2c938), DAT_146b2c938 == -1))
  {
    DAT_146b2c934 = -1;
    _Init_thread_footer(&DAT_146b2c938);
  }
  if ((iVar1 != DAT_146b2c934) && ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
    iVar1 = *(int *)(param_2 + 4);
    plVar4 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar4 = param_3 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_3[9] - 1U & (longlong)iVar1) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_3;
      iVar7 = iVar2;
      do {
        if (*(int *)((longlong)iVar7 * 0x3c + lVar3) == iVar1) {
          if (iVar7 == -1) {
            return 0;
          }
          goto joined_r0x000142c1e5f6;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x3c + 0x34 + lVar3);
      } while (iVar7 != -1);
    }
  }
  return 0;
joined_r0x000142c1e5f6:
  if (iVar2 == -1) {
LAB_142c1e61e:
    piVar8 = (int *)0x0;
LAB_142c1e620:
    uVar5 = FWeakObjectPtr::Get(param_2 + 8);
    piVar8[0xb] = piVar8[0xb] | 1;
    uVar6 = FWeakObjectPtr::Get(piVar8 + 1);
    FUN_142c24770(uVar6,uVar5,param_2 + 0x10);
    return 1;
  }
  piVar8 = (int *)((longlong)iVar2 * 0x3c + lVar3);
  if (*piVar8 == iVar1) {
    if (iVar2 != -1) goto LAB_142c1e620;
    goto LAB_142c1e61e;
  }
  iVar2 = piVar8[0xd];
  goto joined_r0x000142c1e5f6;
}



// FUNCTION 142c1e6a0 FUN_142c1e6a0 body=605 status=ok
// SIG undefined FUN_142c1e6a0(void)

void FUN_142c1e6a0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  float fVar10;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined8 local_68;
  longlong *plStack_60;
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  uint uStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  longlong *local_20;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (((plVar1 != (longlong *)0x0) &&
      (plVar6 = (longlong *)(**(code **)(*plVar1 + 0x688))(plVar1), plVar6 != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*plVar6 + 0x780))(plVar6), cVar3 == '\0')) {
    lVar7 = (**(code **)(*plVar1 + 0x148))();
    if (lVar7 == 0) {
      fVar10 = -1.0;
    }
    else {
      fVar10 = *(float *)(lVar7 + 0x8c8);
    }
    if ((*(float *)(param_1 + 0x26c) < 0.0001) || (*(float *)(param_1 + 0x26c) < fVar10)) {
      plVar1 = (longlong *)(param_1 + 0x1c0);
      local_88 = 0;
      uStack_84 = 1;
      iVar5 = *(int *)(param_1 + 0x1e8);
      puStack_38 = (uint *)(param_1 + 0x1d0);
      local_78._4_4_ = 0;
      uStack_70 = 0;
      if (iVar5 != 0) {
        puVar9 = *(uint **)(param_1 + 0x1e0);
        if (*(uint **)(param_1 + 0x1e0) == (uint *)0x0) {
          puVar9 = puStack_38;
        }
        uVar8 = *puVar9;
        local_88 = 0;
        uStack_70 = 0;
        while (uVar8 == 0) {
          lVar7 = (longlong)(int)local_88;
          uStack_70 = uStack_70 + 0x20;
          uVar8 = local_88 + 1;
          bVar2 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_88;
          local_88 = uVar8;
          if (bVar2) goto LAB_142c1e7ef;
          uVar8 = puVar9[lVar7 + 1];
        }
        uStack_84 = -uVar8 & uVar8;
        iVar4 = 0x1f;
        if (uStack_84 != 0) {
          for (; uStack_84 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uStack_84 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        local_78._4_4_ = (uStack_70 - iVar4) + 0x1f;
        if (iVar5 < local_78._4_4_) {
LAB_142c1e7ef:
          local_78._4_4_ = iVar5;
        }
      }
      auStack_30._4_4_ = local_78._4_4_;
      auStack_30._0_4_ = 0xffffffff;
      auStack_30._8_4_ = uStack_70;
      auStack_30._12_4_ = iStack_6c;
      uStack_40 = local_88;
      uStack_3c = uStack_84;
      local_50 = 0;
      uStack_70 = 0xffffffff;
      iStack_6c = local_78._4_4_;
      local_68 = auStack_30._8_8_;
      uStack_80 = local_88;
      uStack_7c = uStack_84;
      bVar2 = local_78._4_4_ < *(int *)(param_1 + 0x1e8);
      local_58 = plVar1;
      local_48 = plVar1;
      local_20 = plVar1;
      plStack_60 = plVar1;
      local_78 = puStack_38;
      if (bVar2) {
        do {
          FUN_142c28000(*plVar1 + 8 + (longlong)iStack_6c * 0x380,plVar6);
          uStack_70 = uStack_70 & ~uStack_7c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
        } while (iStack_6c < (int)local_78[6]);
        if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
          FUN_142c1db00(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
        }
      }
      iVar5 = rand();
      *(float *)(param_1 + 0x26c) =
           (float)iVar5 * 3.051851e-05 + (float)iVar5 * 3.051851e-05 + 1.0 + fVar10;
    }
  }
  return;
}



// FUNCTION 142c1e900 Execute body=76 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,TTypeWrapper<void>___cdecl(void),FAINamedID<FAISenseCounter>_>
     ::Execute(longlong param_1)

{
  longlong lVar1;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  local_10 = *(undefined8 *)(param_1 + 0x28);
  local_18[0] = *(undefined1 *)(param_1 + 0x20);
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,local_18);
  return;
}



// FUNCTION 142c1e950 ExecuteIfSafe body=112 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseUObjectMethodDelegateInstance<0,UAIPerceptionSystem,void___cdecl(void),FAINamedID<FAISenseCounter>_>
::ExecuteIfSafe(longlong param_1)

{
  longlong lVar1;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    local_18[0] = *(undefined1 *)(param_1 + 0x20);
    local_10 = *(undefined8 *)(param_1 + 0x28);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,local_18);
    return 1;
  }
  return 0;
}



// FUNCTION 142c1e9c0 FUN_142c1e9c0 body=190 status=ok
// SIG undefined FUN_142c1e9c0(void)

void FUN_142c1e9c0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined1 local_18 [8];
  longlong local_10;
  
  if ((int)param_1[0x1e] != -1) {
    plVar1 = (longlong *)0x0;
    if (param_1[0xd] != 0) {
      plVar1 = *(longlong **)(param_1[0xd] + 0x548);
    }
    if ((plVar1 != (longlong *)0x0) && ((int)plVar1[0x3c] != 0)) {
      (**(code **)(*param_1 + 0x2d0))();
      (**(code **)(*plVar1 + 0x428))(plVar1,param_1,0x10,(int)param_1[0x1e],0);
    }
  }
  *(char *)(param_1 + 0x21) = (char)param_2;
  UGameplayTask::EndTask(param_1);
  if (param_2 != 5) {
    local_10 = param_1[0xd];
    local_18[0] = (char)param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x10,local_18);
    return;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xe,0);
  return;
}



// FUNCTION 142c1ea80 FUN_142c1ea80 body=464 status=ok
// SIG undefined FUN_142c1ea80(void)

void FUN_142c1ea80(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  
  if (0 < *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 500)) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
    }
    lVar3 = FUN_142c1f5b0(lVar3);
    if ((lVar3 != 0) && (param_2 != 0)) {
      iVar1 = *(int *)(param_1 + 0x268);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b2c938) &&
         (_Init_thread_header(&DAT_146b2c938), DAT_146b2c938 == -1)) {
        DAT_146b2c934 = -1;
        _Init_thread_footer(&DAT_146b2c938);
      }
      if (iVar1 != DAT_146b2c934) {
        lVar7 = 0x80;
        if (*(char *)(param_1 + 0x1bc) == '\0') {
          lVar7 = 0x30;
        }
        piVar6 = (int *)0x0;
        plVar8 = (longlong *)(lVar7 + lVar3);
        if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
          plVar4 = (longlong *)plVar8[8];
          if ((longlong *)plVar8[8] == (longlong *)0x0) {
            plVar4 = plVar8 + 7;
          }
          iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)plVar8[9] - 1U & (longlong)iVar1) * 4)
          ;
          if (iVar2 != -1) {
            do {
              piVar5 = (int *)((longlong)iVar2 * 0x3c + *plVar8);
              if (*piVar5 == iVar1) {
                if (iVar2 != -1) goto LAB_142c1eb90;
                break;
              }
              iVar2 = piVar5[0xd];
            } while (iVar2 != -1);
          }
        }
        piVar5 = piVar6;
LAB_142c1eb90:
        plVar8 = *(longlong **)(lVar3 + 0xd0);
        piVar9 = (int *)((longlong)*(int *)(lVar3 + 0xd8) & 0x1fffffffffffffff);
        if (plVar8 + *(int *)(lVar3 + 0xd8) < plVar8) {
          piVar9 = piVar6;
        }
        if (piVar9 != (int *)0x0) {
          do {
            plVar4 = (longlong *)*plVar8;
            if (((plVar4 != (longlong *)0x0) && ((*(uint *)(plVar4 + 6) >> 2 & 1) != 0)) &&
               (((uint)piVar5[3] >> (*(byte *)(plVar4 + 9) & 0x1f) & 1) != 0)) {
              (**(code **)(*plVar4 + 0x2a0))(plVar4,piVar5 + 1,param_2);
            }
            plVar8 = plVar8 + 1;
            piVar6 = (int *)((longlong)piVar6 + 1);
          } while (piVar6 != piVar9);
        }
      }
    }
    FUN_142c255a0(param_1 + 0x1c0,param_2);
  }
  return;
}



// FUNCTION 142c1ec50 FUN_142c1ec50 body=462 status=ok
// SIG undefined FUN_142c1ec50(void)

void FUN_142c1ec50(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  
  if (0 < *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 500)) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
    }
    lVar3 = FUN_142c1f5b0(lVar3);
    if (lVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x268);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b2c938) &&
         (_Init_thread_header(&DAT_146b2c938), DAT_146b2c938 == -1)) {
        DAT_146b2c934 = -1;
        _Init_thread_footer(&DAT_146b2c938);
      }
      if (iVar1 != DAT_146b2c934) {
        lVar7 = 0x80;
        if (*(char *)(param_1 + 0x1bc) == '\0') {
          lVar7 = 0x30;
        }
        plVar8 = (longlong *)(lVar7 + lVar3);
        piVar6 = (int *)0x0;
        if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
          plVar4 = (longlong *)plVar8[8];
          if ((longlong *)plVar8[8] == (longlong *)0x0) {
            plVar4 = plVar8 + 7;
          }
          iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)plVar8[9] - 1U & (longlong)iVar1) * 4)
          ;
          if (iVar2 != -1) {
            do {
              piVar5 = (int *)((longlong)iVar2 * 0x3c + *plVar8);
              if (*piVar5 == iVar1) {
                if (iVar2 != -1) goto LAB_142c1ed60;
                break;
              }
              iVar2 = piVar5[0xd];
            } while (iVar2 != -1);
          }
        }
        piVar5 = piVar6;
LAB_142c1ed60:
        plVar8 = *(longlong **)(lVar3 + 0xd0);
        piVar9 = (int *)((longlong)*(int *)(lVar3 + 0xd8) & 0x1fffffffffffffff);
        if (plVar8 + *(int *)(lVar3 + 0xd8) < plVar8) {
          piVar9 = piVar6;
        }
        if (piVar9 != (int *)0x0) {
          do {
            plVar4 = (longlong *)*plVar8;
            if (((plVar4 != (longlong *)0x0) && ((*(uint *)(plVar4 + 6) >> 2 & 1) != 0)) &&
               (((uint)piVar5[3] >> (*(byte *)(plVar4 + 9) & 0x1f) & 1) != 0)) {
              (**(code **)(*plVar4 + 0x2a8))(plVar4,piVar5 + 1);
            }
            plVar8 = plVar8 + 1;
            piVar6 = (int *)((longlong)piVar6 + 1);
          } while (piVar6 != piVar9);
        }
      }
    }
    FUN_142c26720(param_1 + 0x1c0);
  }
  return;
}



// FUNCTION 142c1ee20 FUN_142c1ee20 body=1113 status=ok
// SIG undefined FUN_142c1ee20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c1ee20(longlong *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_res8 [2];
  undefined4 local_res10;
  longlong local_res18;
  undefined4 local_res20;
  uint local_138;
  uint uStack_134;
  int iStack_124;
  uint uStack_120;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  longlong *local_100;
  undefined8 uStack_f8;
  uint *local_f0;
  uint uStack_e8;
  int iStack_e4;
  uint local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  float local_a4;
  longlong *local_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  undefined4 uStack_88;
  int iStack_84;
  uint uStack_80;
  
  bVar6 = false;
  local_res18 = param_3;
  local_d8 = FUN_142c20d00(param_2);
  cVar8 = FWeakObjectPtr::IsValid(param_2);
  uVar14 = 0;
  uVar12 = uVar14;
  uVar11 = uVar14;
  if (cVar8 != '\0') {
    uVar10 = FWeakObjectPtr::Get(param_2);
    uVar11 = FUN_142c1f500(uVar10);
    if (uVar11 != 0) {
      uVar12 = FUN_14222e260(uVar11);
    }
  }
  local_res8[0] = 0;
  if (uVar12 != 0) {
    local_res8[0] = (uint)((*(uint *)(uVar12 + 0x4cc) >> 1 & 1) != 0);
  }
  local_100 = param_1 + 0x13;
  uStack_134 = 1;
  iVar2 = (int)param_1[0x18];
  local_f0 = (uint *)(param_1 + 0x15);
  local_138 = 0;
  iStack_124 = 0;
  uStack_120 = 0;
  if (iVar2 != 0) {
    puVar17 = (uint *)param_1[0x17];
    if ((uint *)param_1[0x17] == (uint *)0x0) {
      puVar17 = local_f0;
    }
    uVar3 = *puVar17;
    uVar12 = uVar14;
    while (uVar3 == 0) {
      iVar9 = (int)uVar14;
      uStack_120 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)uStack_120;
      local_138 = iVar9 + 1;
      uVar14 = (ulonglong)local_138;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_142c1ef55;
      uVar3 = puVar17[(longlong)iVar9 + 1];
    }
    uStack_134 = -uVar3 & uVar3;
    iVar9 = 0x1f;
    if (uStack_134 != 0) {
      for (; uStack_134 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_134 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_124 = (uStack_120 - iVar9) + 0x1f;
    if (iVar2 < iStack_124) {
LAB_142c1ef55:
      iStack_124 = iVar2;
    }
  }
  uStack_f8 = CONCAT44(uStack_134,local_138);
  uStack_88 = 0xffffffff;
  iStack_84 = iStack_124;
  uStack_80 = uStack_120;
  uStack_e8 = 0xffffffff;
  iStack_e4 = iStack_124;
  local_e0 = uStack_120;
  local_a0 = local_100;
  uStack_98 = uStack_f8;
  puStack_90 = local_f0;
  if (iStack_124 < iVar2) {
    do {
      plVar7 = local_100;
      lVar13 = (longlong)iStack_e4;
      uVar14 = FWeakObjectPtr::Get(*local_100 + lVar13 * 0x28 + 8);
      if ((((uVar14 != 0) && (uVar14 != uVar11)) &&
          (cVar8 = (**(code **)(*param_1 + 0x2d8))(param_1,uVar11,uVar14), cVar8 == '\0')) &&
         (cVar8 = FUN_142c27cf0(local_d8,uVar14,*(undefined1 *)(local_res18 + 0x10)),
         uVar10 = DAT_146691200, cVar8 != '\0')) {
        uVar4 = *(undefined4 *)(param_2 + 0x2c);
        local_res10 = *(undefined4 *)(*plVar7 + lVar13 * 0x28);
        lVar13 = *plVar7 + lVar13 * 0x28;
        local_res20 = DAT_146691208;
        cVar8 = FWeakObjectPtr::IsValid(lVar13 + 8);
        if (cVar8 == '\0') {
          local_b0 = DAT_1468b5d98;
          puVar16 = &local_b8;
          local_b8 = _DAT_1468b5d90;
        }
        else {
          lVar13 = FWeakObjectPtr::Get(lVar13 + 8);
          lVar13 = *(longlong *)(lVar13 + 0x168);
          if (lVar13 == 0) {
            local_c8 = DAT_1468b5d98;
            puVar15 = &local_d0;
            local_d0 = _DAT_1468b5d90;
          }
          else {
            puVar15 = (undefined8 *)&local_110;
            local_110 = *(undefined4 *)(lVar13 + 0x220);
            local_108 = *(undefined4 *)(lVar13 + 0x228);
            uStack_10c = *(undefined4 *)(lVar13 + 0x224);
          }
          local_bc = *(undefined4 *)(puVar15 + 1);
          puVar16 = &local_c4;
          local_c4 = *puVar15;
        }
        local_a4 = *(float *)(puVar16 + 1);
        fVar1 = *(float *)(param_1 + 0x2c);
        fVar19 = (float)*puVar16 - *(float *)(param_2 + 0xc);
        fVar20 = (float)((ulonglong)*puVar16 >> 0x20) - *(float *)(param_2 + 0x10);
        fVar18 = local_a4 - *(float *)(param_2 + 0x14);
        fVar19 = fVar20 * fVar20 + fVar19 * fVar19 + fVar18 * fVar18;
        fVar18 = fVar1;
        if (*(float *)((longlong)param_1 + 0x15c) <= fVar19 &&
            fVar19 != *(float *)((longlong)param_1 + 0x15c)) {
          fVar18 = ((*(float *)((longlong)param_1 + 0x164) - fVar1) / *(float *)(local_res18 + 4)) *
                   fVar19 + fVar1;
          if (0.0 <= fVar18) {
            if (fVar1 <= fVar18) {
              fVar18 = fVar1;
            }
          }
          else {
            fVar18 = 0.0;
          }
        }
        iVar2 = (int)param_1[0x28];
        lVar13 = (longlong)iVar2;
        uVar3 = local_res8[0] * 2;
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x144) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<36,4>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 0x27,iVar2);
        }
        lVar5 = param_1[0x27];
        *(undefined4 *)(lVar5 + lVar13 * 0x24) = uVar4;
        bVar6 = true;
        puVar17 = (uint *)(lVar5 + 0x20 + lVar13 * 0x24);
        *puVar17 = *puVar17 & 0xfffffffc;
        puVar17 = (uint *)(lVar5 + 0x20 + lVar13 * 0x24);
        *puVar17 = *puVar17 | uVar3 & 3;
        *(undefined4 *)(lVar5 + 4 + lVar13 * 0x24) = local_res10;
        *(undefined8 *)(lVar5 + 0x14 + lVar13 * 0x24) = uVar10;
        *(undefined4 *)(lVar5 + 0x1c + lVar13 * 0x24) = local_res20;
        *(float *)(lVar5 + 0x10 + lVar13 * 0x24) = fVar18;
        *(undefined8 *)(lVar5 + 8 + lVar13 * 0x24) = 0;
      }
      uStack_e8 = uStack_e8 & ~uStack_f8._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f8);
    } while (iStack_e4 < (int)local_f0[6]);
    if (bVar6) {
      AlgoImpl::
      IntroSortInternal<FAISightQuery,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>
                (param_1[0x27],(longlong)(int)param_1[0x28],(undefined1)local_res8[0],local_res8);
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  return;
}



// FUNCTION 142c1f280 FUN_142c1f280 body=336 status=ok
// SIG undefined FUN_142c1f280(void)

undefined8 FUN_142c1f280(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int local_res10 [2];
  undefined1 local_38 [8];
  longlong local_30;
  
  if ((param_2 == 0) || ((*(byte *)(param_2 + 0x94) & 2) != 0)) {
    return 0;
  }
  iVar3 = *(int *)(param_2 + 0xc);
  lVar9 = 0;
  lVar5 = lVar9;
  if (iVar3 < (int)DAT_1469e91c4) {
    uVar7 = iVar3 >> 0x1f & 0xffff;
    uVar4 = iVar3 + uVar7;
    lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
  }
  if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
    FUN_140777f40(param_1 + 0x1c0,local_res10,param_2);
    lVar5 = lVar9;
    if (local_res10[0] != -1) {
      lVar5 = (longlong)local_res10[0] * 0x380 + *(longlong *)(param_1 + 0x1c0);
    }
    lVar8 = lVar5 + 8;
    if (lVar5 == 0) {
      lVar8 = lVar9;
    }
    if (lVar8 != 0) {
      puVar6 = (undefined8 *)FUN_142c1a650(local_38);
      plVar1 = param_3 + 1;
      plVar2 = puVar6 + 1;
      *param_3 = *puVar6;
      if (plVar1 != plVar2) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        *plVar1 = *plVar2;
        *plVar2 = 0;
        *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar6 + 2);
        *(undefined4 *)((longlong)param_3 + 0x14) = *(undefined4 *)((longlong)puVar6 + 0x14);
        puVar6[2] = 0;
      }
      *(uint *)(param_3 + 3) =
           *(uint *)(param_3 + 3) ^ (*(uint *)(puVar6 + 3) ^ *(uint *)(param_3 + 3)) & 1;
      if (local_30 != 0) {
        FMemory::Free();
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c1f3d0 FUN_142c1f3d0 body=174 status=ok
// SIG undefined FUN_142c1f3d0(void)

void FUN_142c1f3d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if (*(int *)((longlong)param_2 + 0xc) < *(int *)(param_1 + 0xa8) + (int)param_2[1]) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  uVar3 = 0;
  plVar4 = *(longlong **)(param_1 + 0xa0);
  uVar5 = (longlong)*(int *)(param_1 + 0xa8) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0xa8) < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      iVar1 = (int)param_2[1];
      uVar2 = *(undefined8 *)(*plVar4 + 0x118);
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 142c1f480 FUN_142c1f480 body=117 status=ok
// SIG undefined FUN_142c1f480(void)

void FUN_142c1f480(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_2 != (undefined8 *)(param_1 + 0xa0)) {
    _Src = *(void **)(param_1 + 0xa0);
    iVar1 = *(int *)(param_1 + 0xa8);
    *(int *)(param_2 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  return;
}



// FUNCTION 142c1f500 FUN_142c1f500 body=173 status=ok
// SIG undefined FUN_142c1f500(void)

longlong FUN_142c1f500(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar3 = FUN_14291fb80();
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
      return *(longlong *)(lVar1 + 0x488);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar3 = FUN_1428dfc70();
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
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 142c1f5b0 FUN_142c1f5b0 body=130 status=ok
// SIG undefined FUN_142c1f5b0(void)

undefined8 FUN_142c1f5b0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) &&
       (param_1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), param_1 == 0)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x150) != 0) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0xa8);
    }
  }
  return 0;
}



// FUNCTION 142c1f640 FUN_142c1f640 body=951 status=ok
// SIG undefined FUN_142c1f640(void)

void FUN_142c1f640(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint *puVar12;
  byte local_98;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  int local_68;
  undefined4 uStack_64;
  longlong *local_60;
  int iStack_58;
  uint uStack_54;
  uint *puStack_50;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  FUN_14077bb00();
  if (*(int *)((longlong)param_3 + 0xc) < *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 500)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo();
  }
  plVar10 = (longlong *)(param_1 + 0x1c0);
  local_88 = 0;
  uStack_84 = 1;
  iVar8 = *(int *)(param_1 + 0x1e8);
  puStack_50 = (uint *)(param_1 + 0x1d0);
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar8 != 0) {
    puVar12 = *(uint **)(param_1 + 0x1e0);
    if (*(uint **)(param_1 + 0x1e0) == (uint *)0x0) {
      puVar12 = puStack_50;
    }
    uVar1 = *puVar12;
    uStack_70 = 0;
    local_88 = 0;
    while (uVar1 == 0) {
      lVar9 = (longlong)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar3) goto LAB_142c1f730;
      uVar1 = puVar12[lVar9 + 1];
    }
    uStack_84 = uVar1 - 1 & uVar1 ^ uVar1;
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
    local_78._4_4_ = (uStack_70 - iVar7) + 0x1f;
    if (iVar8 < local_78._4_4_) {
LAB_142c1f730:
      local_78._4_4_ = iVar8;
    }
  }
  uStack_48 = 0xffffffff;
  iStack_44 = local_78._4_4_;
  iStack_40 = uStack_70;
  uStack_3c = iStack_6c;
  iStack_58 = local_88;
  uStack_54 = uStack_84;
  iStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68 = uStack_70;
  uStack_64 = iStack_6c;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  bVar3 = iVar8 <= local_78._4_4_;
  local_60 = plVar10;
  local_78 = puStack_50;
  if (bVar3) {
    return;
  }
LAB_142c1f7c0:
  iVar8 = iStack_6c;
  if (param_2 != 0) {
    lVar5 = FUN_142c33440();
    lVar9 = param_2;
    do {
      if (lVar9 == lVar5) {
        lVar9 = (longlong)iVar8 * 0x380;
        if (*(int *)(*plVar10 + 0x358 + lVar9) <= (int)(uint)local_98) goto LAB_142c1f939;
        lVar11 = *plVar10 + 0x10 + lVar9;
        lVar5 = *(longlong *)(lVar11 + 0x340);
        if (lVar5 == 0) {
          lVar5 = lVar11;
        }
        lVar11 = (ulonglong)local_98 * 0x68;
        if ((((*(uint *)(lVar5 + 0x44 + lVar11) >> 1 & 1) == 0) ||
            (*(float *)(lVar5 + 8 + lVar11) <= 0.0)) ||
           (3.4028235e+38 < *(float *)(lVar5 + lVar11) ||
            *(float *)(lVar5 + lVar11) == 3.4028235e+38)) goto LAB_142c1f939;
        goto LAB_142c1f8f2;
      }
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  lVar9 = (longlong)iVar8 * 0x380;
  lVar5 = *plVar10;
  lVar11 = *(longlong *)(lVar5 + 0x350 + lVar9);
  if (lVar11 == 0) {
    lVar11 = lVar5 + 0x10 + lVar9;
  }
  lVar5 = (longlong)*(int *)(lVar5 + 0x358 + lVar9) * 0x68 + lVar11;
  if (lVar11 != lVar5) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      cVar4 = *(char *)(lVar11 + 0x30);
      if (*(int *)(lVar2 + 0x38) < DAT_146859258) {
        _Init_thread_header(&DAT_146859258);
        if (DAT_146859258 == -1) {
          DAT_146859248 = -1;
          FName::FName(&DAT_146859250,L"Invalid",1);
          _Init_thread_footer(&DAT_146859258);
        }
      }
      if ((cVar4 != DAT_146859248) && (((byte)*(undefined4 *)(lVar11 + 0x44) & 6) == 2))
      goto LAB_142c1f8f2;
      lVar11 = lVar11 + 0x68;
    } while (lVar11 != lVar5);
  }
  goto LAB_142c1f939;
LAB_142c1f8f2:
  cVar4 = FWeakObjectPtr::IsValid(*plVar10 + 8 + lVar9);
  if (cVar4 != '\0') {
    uVar6 = FWeakObjectPtr::Get(*plVar10 + 8 + lVar9);
    lVar9 = param_3[1];
    iVar8 = (int)lVar9 + 1;
    *(int *)(param_3 + 1) = iVar8;
    if (*(int *)((longlong)param_3 + 0xc) < iVar8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
    }
    *(undefined8 *)(*param_3 + (longlong)(int)lVar9 * 8) = uVar6;
  }
LAB_142c1f939:
  uStack_70 = uStack_70 & ~uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  if ((int)local_78[6] <= iStack_6c) {
    return;
  }
  goto LAB_142c1f7c0;
}



// FUNCTION 142c1fa00 FUN_142c1fa00 body=1083 status=ok
// SIG undefined FUN_142c1fa00(void)

void FUN_142c1fa00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong **pplVar15;
  uint *puVar16;
  longlong lVar17;
  int local_c8;
  uint uStack_c4;
  int iStack_b4;
  int iStack_b0;
  longlong *local_a8 [2];
  longlong *local_98;
  undefined8 uStack_90;
  uint *local_88;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  
  bVar6 = false;
  bVar7 = false;
  if (*(int *)((longlong)param_2 + 0xc) < *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 500)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo();
  }
  uStack_c4 = 1;
  local_98 = (longlong *)(param_1 + 0x1c0);
  local_c8 = 0;
  iVar2 = *(int *)(param_1 + 0x1e8);
  local_88 = (uint *)(param_1 + 0x1d0);
  iStack_b4 = 0;
  iStack_b0 = 0;
  if (iVar2 != 0) {
    puVar16 = *(uint **)(param_1 + 0x1e0);
    if (*(uint **)(param_1 + 0x1e0) == (uint *)0x0) {
      puVar16 = local_88;
    }
    uVar3 = *puVar16;
    iStack_b0 = 0;
    local_c8 = 0;
    while (uVar3 == 0) {
      lVar13 = (longlong)local_c8;
      iStack_b0 = iStack_b0 + 0x20;
      iVar12 = local_c8 + 1;
      bVar5 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_c8;
      local_c8 = iVar12;
      if (bVar5) goto LAB_142c1faf3;
      uVar3 = puVar16[lVar13 + 1];
    }
    uStack_c4 = uVar3 - 1 & uVar3 ^ uVar3;
    iVar12 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    iStack_b4 = (iStack_b0 - iVar12) + 0x1f;
    if (iVar2 < iStack_b4) {
LAB_142c1faf3:
      iStack_b4 = iVar2;
    }
  }
  uStack_90 = CONCAT44(uStack_c4,local_c8);
  uStack_58 = 0xffffffff;
  iStack_54 = iStack_b4;
  iStack_50 = iStack_b0;
  uStack_80 = 0xffffffff;
  iStack_7c = iStack_b4;
  local_78 = iStack_b0;
  if (iStack_b4 < iVar2) {
    plVar9 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_70 = (code *)local_98;
    uStack_68 = uStack_90;
    puStack_60 = local_88;
    do {
      plVar10 = local_98;
      lVar17 = (longlong)iStack_7c * 0x380;
      lVar13 = *local_98 + lVar17;
      if ((*(byte *)(lVar13 + 0x370) & 1) != 0) {
        lVar14 = *(longlong *)(lVar13 + 0x350);
        if (*(longlong *)(lVar13 + 0x350) == 0) {
          lVar14 = lVar13 + 0x10;
        }
        lVar13 = (longlong)*(int *)(lVar13 + 0x358) * 0x68 + lVar14;
        if (lVar14 != lVar13) {
          lVar4 = *plVar9;
          do {
            cVar8 = *(char *)(lVar14 + 0x30);
            if ((*(int *)(lVar4 + 0x38) < DAT_146859258) &&
               (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
              DAT_146859248 = -1;
              FName::FName(&DAT_146859250,L"Invalid",1);
              _Init_thread_footer(&DAT_146859258);
            }
            bVar6 = bVar7;
            if ((cVar8 != DAT_146859248) &&
               (((*(uint *)(lVar14 + 0x44) >> 1 & 1) != 0 ||
                ((*(uint *)(lVar14 + 0x44) >> 2 & 1) == 0)))) {
              cVar8 = FWeakObjectPtr::IsValid(*plVar10 + 8 + lVar17);
              if (cVar8 == '\0') {
                bVar7 = true;
                bVar6 = true;
              }
              else {
                uVar11 = FWeakObjectPtr::Get(*plVar10 + 8 + lVar17);
                iVar2 = (int)param_2[1];
                *(int *)(param_2 + 1) = iVar2 + 1;
                if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
                }
                *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar11;
              }
              break;
            }
            lVar14 = lVar14 + 0x68;
          } while (lVar14 != lVar13);
        }
      }
      uStack_80 = uStack_80 & ~uStack_90._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if (bVar6) {
      uStack_68 = uStack_68 & 0xffffffff00000000;
      local_70 = FUN_142c26140;
      plVar9 = (longlong *)FMemory::Realloc(0,0x30);
      local_a8[0] = plVar9;
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar9 + 1,param_1);
        *(undefined4 *)(plVar9 + 2) = (undefined4)local_70;
        *(undefined4 *)((longlong)plVar9 + 0x14) = local_70._4_4_;
        *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_68;
        *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_68._4_4_;
        lVar13 = FDelegateHandle::GenerateNewID();
        plVar9[5] = lVar13;
        *plVar9 = (longlong)&PTR_FUN_143f77bd0;
      }
      plVar10 = (longlong *)FUN_141d29000(&local_70,0,0xff);
      lVar13 = *plVar10;
      pplVar15 = (longlong **)(lVar13 + 0x10);
      *pplVar15 = (longlong *)0x0;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      if ((local_a8 != pplVar15) && (plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x30))(plVar9,pplVar15);
      }
      *(undefined4 *)(lVar13 + 0x20) = 2;
      lVar13 = *plVar10;
      lVar4 = plVar10[2];
      lVar17 = plVar10[1];
      lVar14 = *(longlong *)(lVar13 + 0x30);
      piVar1 = (int *)(lVar14 + 0x48);
      if (lVar14 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        plVar9 = local_a8[0];
      }
      FUN_1409691d0(lVar13,lVar17,(int)lVar4,1);
      if (lVar14 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar9 = local_a8[0];
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar14);
          plVar9 = local_a8[0];
        }
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        lVar13 = FMemory::Realloc(plVar9,0,0);
        if (lVar13 != 0) {
          FMemory::Free(lVar13);
        }
      }
    }
  }
  return;
}



// FUNCTION 142c1fe40 FUN_142c1fe40 body=955 status=ok
// SIG undefined FUN_142c1fe40(void)

void FUN_142c1fe40(longlong param_1,longlong param_2,longlong *param_3)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  uint *puVar13;
  byte local_98;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  int local_68;
  undefined4 uStack_64;
  longlong *local_60;
  int iStack_58;
  uint uStack_54;
  uint *puStack_50;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  FUN_14077bb00();
  if (*(int *)((longlong)param_3 + 0xc) < *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 500)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo();
  }
  plVar11 = (longlong *)(param_1 + 0x1c0);
  local_88 = 0;
  uStack_84 = 1;
  iVar2 = *(int *)(param_1 + 0x1e8);
  puStack_50 = (uint *)(param_1 + 0x1d0);
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar2 != 0) {
    puVar13 = *(uint **)(param_1 + 0x1e0);
    if (*(uint **)(param_1 + 0x1e0) == (uint *)0x0) {
      puVar13 = puStack_50;
    }
    uVar3 = *puVar13;
    uStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar10 = (longlong)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar9 = local_88 + 1;
      bVar5 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar9;
      if (bVar5) goto LAB_142c1ff30;
      uVar3 = puVar13[lVar10 + 1];
    }
    uStack_84 = uVar3 - 1 & uVar3 ^ uVar3;
    iVar9 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    local_78._4_4_ = (uStack_70 - iVar9) + 0x1f;
    if (iVar2 < local_78._4_4_) {
LAB_142c1ff30:
      local_78._4_4_ = iVar2;
    }
  }
  uStack_48 = 0xffffffff;
  iStack_44 = local_78._4_4_;
  iStack_40 = uStack_70;
  uStack_3c = iStack_6c;
  iStack_58 = local_88;
  uStack_54 = uStack_84;
  iStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68 = uStack_70;
  uStack_64 = iStack_6c;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  bVar5 = iVar2 <= local_78._4_4_;
  local_60 = plVar11;
  local_78 = puStack_50;
  if (bVar5) {
    return;
  }
LAB_142c1ffc0:
  iVar2 = iStack_6c;
  if (param_2 != 0) {
    lVar7 = FUN_142c33440();
    lVar10 = param_2;
    do {
      if (lVar10 == lVar7) {
        lVar10 = (longlong)iVar2 * 0x380;
        if (*(int *)(*plVar11 + 0x358 + lVar10) <= (int)(uint)local_98) goto LAB_142c2013d;
        lVar12 = *plVar11 + 0x10 + lVar10;
        lVar7 = *(longlong *)(lVar12 + 0x340);
        if (lVar7 == 0) {
          lVar7 = lVar12;
        }
        if ((*(float *)(lVar7 + 8 + (ulonglong)local_98 * 0x68) <= 0.0) ||
           (pfVar1 = (float *)(lVar7 + (ulonglong)local_98 * 0x68),
           3.4028235e+38 < *pfVar1 || *pfVar1 == 3.4028235e+38)) goto LAB_142c2013d;
        goto LAB_142c200ee;
      }
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  lVar10 = (longlong)iVar2 * 0x380;
  lVar7 = *plVar11;
  lVar12 = *(longlong *)(lVar7 + 0x350 + lVar10);
  if (lVar12 == 0) {
    lVar12 = lVar7 + 0x10 + lVar10;
  }
  lVar7 = (longlong)*(int *)(lVar7 + 0x358 + lVar10) * 0x68 + lVar12;
  if (lVar12 != lVar7) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      cVar6 = *(char *)(lVar12 + 0x30);
      if (*(int *)(lVar4 + 0x38) < DAT_146859258) {
        _Init_thread_header(&DAT_146859258);
        if (DAT_146859258 == -1) {
          DAT_146859248 = -1;
          FName::FName(&DAT_146859250,L"Invalid",1);
          _Init_thread_footer(&DAT_146859258);
        }
      }
      if ((cVar6 != DAT_146859248) &&
         (((*(uint *)(lVar12 + 0x44) >> 1 & 1) != 0 || ((*(uint *)(lVar12 + 0x44) >> 2 & 1) == 0))))
      goto LAB_142c200ee;
      lVar12 = lVar12 + 0x68;
    } while (lVar12 != lVar7);
  }
  goto LAB_142c2013d;
LAB_142c200ee:
  cVar6 = FWeakObjectPtr::IsValid(*plVar11 + 8 + lVar10);
  if (cVar6 != '\0') {
    uVar8 = FWeakObjectPtr::Get(*plVar11 + 8 + lVar10);
    iVar2 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
    }
    *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) = uVar8;
  }
LAB_142c2013d:
  uStack_70 = uStack_70 & ~uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  if ((int)local_78[6] <= iStack_6c) {
    return;
  }
  goto LAB_142c1ffc0;
}



// FUNCTION 142c20200 FUN_142c20200 body=460 status=ok
// SIG undefined FUN_142c20200(void)

undefined8 FUN_142c20200(longlong param_1,undefined8 param_2)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  float *pfVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  
  uVar6 = 0;
  fVar10 = 3.4028235e+38;
  cVar8 = -1;
  if (0 < *(int *)(param_1 + 0x350)) {
    uVar7 = (ulonglong)_tls_index;
    pvVar2 = ThreadLocalStoragePointer;
    do {
      lVar3 = *(longlong *)(param_1 + 0x348);
      if (*(longlong *)(param_1 + 0x348) == 0) {
        lVar3 = param_1 + 8;
      }
      pfVar4 = (float *)(lVar3 + uVar6 * 0x68);
      if (((uint)pfVar4[0x11] >> 5 & 1) == 0) {
        cVar1 = *(char *)(pfVar4 + 0xc);
        if ((*(int *)(*(longlong *)((longlong)pvVar2 + uVar7 * 8) + 0x38) < DAT_146859258) &&
           (_Init_thread_header(&DAT_146859258), pvVar2 = ThreadLocalStoragePointer,
           DAT_146859258 == -1)) {
          DAT_146859248 = -1;
          FName::FName(&DAT_146859250,L"Invalid",1);
          _Init_thread_footer(&DAT_146859258);
          pvVar2 = ThreadLocalStoragePointer;
        }
        if ((cVar1 != DAT_146859248) &&
           ((((uint)pfVar4[0x11] >> 1 & 1) != 0 || (((uint)pfVar4[0x11] >> 2 & 1) == 0)))) {
          if (pfVar4[2] <= 0.0) {
            fVar9 = 3.4028235e+38;
          }
          else {
            fVar9 = *pfVar4;
          }
          if (fVar9 < fVar10) {
            fVar10 = fVar9;
            cVar8 = (char)uVar6;
          }
        }
      }
      bVar5 = (char)uVar6 + 1;
      uVar6 = (ulonglong)bVar5;
    } while ((int)(uint)bVar5 < *(int *)(param_1 + 0x350));
    if (-1 < cVar8) {
      lVar3 = *(longlong *)(param_1 + 0x348);
      if (*(longlong *)(param_1 + 0x348) == 0) {
        lVar3 = param_1 + 8;
      }
      FUN_1407263c0(param_2,(longlong)cVar8 * 0x68 + lVar3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c203d0 GetListeners body=9 status=ok
// SIG undefined GetListeners(void)

longlong UAISense::GetListeners(longlong param_1)

{
  return *(longlong *)(param_1 + 0x38) + 0x30;
}



// FUNCTION 142c203e0 GetPerceivedActors body=5 status=ok
// SIG undefined GetPerceivedActors(void)

void UAIPerceptionComponent::GetPerceivedActors(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint *puVar12;
  byte bStack_98;
  int iStack_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  uint uStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  longlong *plStack_60;
  int iStack_58;
  uint uStack_54;
  uint *puStack_50;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  FUN_14077bb00();
  if (*(int *)((longlong)param_3 + 0xc) < *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 500)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo();
  }
  plVar10 = (longlong *)(param_1 + 0x1c0);
  iStack_88 = 0;
  uStack_84 = 1;
  iVar8 = *(int *)(param_1 + 0x1e8);
  puStack_50 = (uint *)(param_1 + 0x1d0);
  uStack_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar8 != 0) {
    puVar12 = *(uint **)(param_1 + 0x1e0);
    if (*(uint **)(param_1 + 0x1e0) == (uint *)0x0) {
      puVar12 = puStack_50;
    }
    uVar1 = *puVar12;
    uStack_70 = 0;
    iStack_88 = 0;
    while (uVar1 == 0) {
      lVar9 = (longlong)iStack_88;
      uStack_70 = uStack_70 + 0x20;
      iVar7 = iStack_88 + 1;
      bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iStack_88;
      iStack_88 = iVar7;
      if (bVar3) goto LAB_142c1f730;
      uVar1 = puVar12[lVar9 + 1];
    }
    uStack_84 = uVar1 - 1 & uVar1 ^ uVar1;
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
    uStack_78._4_4_ = (uStack_70 - iVar7) + 0x1f;
    if (iVar8 < uStack_78._4_4_) {
LAB_142c1f730:
      uStack_78._4_4_ = iVar8;
    }
  }
  uStack_48 = 0xffffffff;
  iStack_44 = uStack_78._4_4_;
  iStack_40 = uStack_70;
  uStack_3c = iStack_6c;
  iStack_58 = iStack_88;
  uStack_54 = uStack_84;
  iStack_80 = iStack_88;
  uStack_7c = uStack_84;
  iStack_68 = uStack_70;
  uStack_64 = iStack_6c;
  uStack_70 = 0xffffffff;
  iStack_6c = uStack_78._4_4_;
  bVar3 = iVar8 <= uStack_78._4_4_;
  plStack_60 = plVar10;
  uStack_78 = puStack_50;
  if (bVar3) {
    return;
  }
LAB_142c1f7c0:
  iVar8 = iStack_6c;
  if (param_2 != 0) {
    lVar5 = FUN_142c33440();
    lVar9 = param_2;
    do {
      if (lVar9 == lVar5) {
        lVar9 = (longlong)iVar8 * 0x380;
        if (*(int *)(*plVar10 + 0x358 + lVar9) <= (int)(uint)bStack_98) goto LAB_142c1f939;
        lVar11 = *plVar10 + 0x10 + lVar9;
        lVar5 = *(longlong *)(lVar11 + 0x340);
        if (lVar5 == 0) {
          lVar5 = lVar11;
        }
        lVar11 = (ulonglong)bStack_98 * 0x68;
        if ((((*(uint *)(lVar5 + 0x44 + lVar11) >> 1 & 1) == 0) ||
            (*(float *)(lVar5 + 8 + lVar11) <= 0.0)) ||
           (3.4028235e+38 < *(float *)(lVar5 + lVar11) ||
            *(float *)(lVar5 + lVar11) == 3.4028235e+38)) goto LAB_142c1f939;
        goto LAB_142c1f8f2;
      }
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  lVar9 = (longlong)iVar8 * 0x380;
  lVar5 = *plVar10;
  lVar11 = *(longlong *)(lVar5 + 0x350 + lVar9);
  if (lVar11 == 0) {
    lVar11 = lVar5 + 0x10 + lVar9;
  }
  lVar5 = (longlong)*(int *)(lVar5 + 0x358 + lVar9) * 0x68 + lVar11;
  if (lVar11 != lVar5) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      cVar4 = *(char *)(lVar11 + 0x30);
      if (*(int *)(lVar2 + 0x38) < DAT_146859258) {
        _Init_thread_header(&DAT_146859258);
        if (DAT_146859258 == -1) {
          DAT_146859248 = -1;
          FName::FName(&DAT_146859250,L"Invalid",1);
          _Init_thread_footer(&DAT_146859258);
        }
      }
      if ((cVar4 != DAT_146859248) && (((byte)*(undefined4 *)(lVar11 + 0x44) & 6) == 2))
      goto LAB_142c1f8f2;
      lVar11 = lVar11 + 0x68;
    } while (lVar11 != lVar5);
  }
  goto LAB_142c1f939;
LAB_142c1f8f2:
  cVar4 = FWeakObjectPtr::IsValid(*plVar10 + 8 + lVar9);
  if (cVar4 != '\0') {
    uVar6 = FWeakObjectPtr::Get(*plVar10 + 8 + lVar9);
    lVar9 = param_3[1];
    iVar8 = (int)lVar9 + 1;
    *(int *)(param_3 + 1) = iVar8;
    if (*(int *)((longlong)param_3 + 0xc) < iVar8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
    }
    *(undefined8 *)(*param_3 + (longlong)(int)lVar9 * 8) = uVar6;
  }
LAB_142c1f939:
  uStack_70 = uStack_70 & ~uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  if ((int)uStack_78[6] <= iStack_6c) {
    return;
  }
  goto LAB_142c1f7c0;
}



// FUNCTION 142c203f0 FUN_142c203f0 body=10 status=ok
// SIG undefined FUN_142c203f0(void)

void FUN_142c203f0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142c203f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3f8))();
  return;
}



// FUNCTION 142c20400 FUN_142c20400 body=85 status=ok
// SIG undefined FUN_142c20400(void)

undefined8 * FUN_142c20400(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  *param_1 = 0;
  lVar1 = FUN_142c1f5b0(param_2);
  if (((lVar1 != 0) && ((int)(uint)*(byte *)(param_3 + 0x30) < *(int *)(lVar1 + 0xd8))) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xd0) + (ulonglong)*(byte *)(param_3 + 0x30) * 8),
     lVar1 != 0)) {
    *param_1 = *(undefined8 *)(lVar1 + 0x10);
  }
  return param_1;
}



// FUNCTION 142c20460 FUN_142c20460 body=152 status=ok
// SIG undefined FUN_142c20460(void)

undefined8 FUN_142c20460(longlong param_1,char *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 local_res8;
  char local_28 [16];
  
  plVar2 = *(longlong **)(param_1 + 0x178);
  iVar4 = *(int *)(param_1 + 0x180);
  cVar1 = *param_2;
  plVar5 = plVar2;
  do {
    if (plVar5 == plVar2 + iVar4) {
      return 0;
    }
    plVar3 = (longlong *)*plVar5;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x278))(plVar3,&local_res8);
      FUN_14077bb00(local_28,local_res8);
      if (local_28[0] == cVar1) {
        iVar4 = (int)((longlong)plVar5 - (longlong)plVar2 >> 3);
        if (iVar4 == -1) {
          return 0;
        }
        return *(undefined8 *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar4 * 8);
      }
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 142c20500 GetSenseID body=106 status=ok
// SIG undefined GetSenseID(void)

undefined8 UAISenseEvent::GetSenseID(undefined8 param_1,undefined8 param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\AIModule\\Classes\\Perception/AISenseEvent.h",
             0x12,L"Pure virtual not implemented (%s)",L"UAISenseEvent::GetSenseID");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\AIModule\\Classes\\Perception/AISenseEvent.h",
             0x12,L"Pure virtual not implemented (%s)",L"UAISenseEvent::GetSenseID");
  FUN_140760710(param_2);
  return param_2;
}



// FUNCTION 142c20570 FUN_142c20570 body=81 status=ok
// SIG undefined FUN_142c20570(void)

undefined1 * FUN_142c20570(undefined8 param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  *param_2 = *(undefined1 *)(lVar2 + 0x48);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(lVar2 + 0x50);
  return param_2;
}



// FUNCTION 142c205d0 FUN_142c205d0 body=81 status=ok
// SIG undefined FUN_142c205d0(void)

undefined1 * FUN_142c205d0(undefined8 param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_142c31250();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  *param_2 = *(undefined1 *)(lVar2 + 0x48);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(lVar2 + 0x50);
  return param_2;
}



// FUNCTION 142c20630 FUN_142c20630 body=26 status=ok
// SIG undefined FUN_142c20630(void)

undefined8 * FUN_142c20630(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142c33440();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 142c20650 FUN_142c20650 body=92 status=ok
// SIG undefined FUN_142c20650(void)

longlong * FUN_142c20650(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar2 = FUN_142c32970();
    for (lVar1 = *(longlong *)(param_1 + 0x48); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        *param_2 = *(longlong *)(param_1 + 0x48);
        return param_2;
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142c206b0 FUN_142c206b0 body=92 status=ok
// SIG undefined FUN_142c206b0(void)

longlong * FUN_142c206b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar2 = UGameplayTask_SpawnActor::GetPrivateStaticClass();
    for (lVar1 = *(longlong *)(param_1 + 0x48); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        *param_2 = *(longlong *)(param_1 + 0x48);
        return param_2;
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142c20710 FUN_142c20710 body=92 status=ok
// SIG undefined FUN_142c20710(void)

longlong * FUN_142c20710(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar2 = FUN_142c31250();
    for (lVar1 = *(longlong *)(param_1 + 0x48); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        *param_2 = *(longlong *)(param_1 + 0x48);
        return param_2;
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142c20770 FUN_142c20770 body=26 status=ok
// SIG undefined FUN_142c20770(void)

undefined8 * FUN_142c20770(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UGameplayTask_SpawnActor::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 142c20790 FUN_142c20790 body=92 status=ok
// SIG undefined FUN_142c20790(void)

longlong * FUN_142c20790(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar2 = FUN_142c325b0();
    for (lVar1 = *(longlong *)(param_1 + 0x48); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        *param_2 = *(longlong *)(param_1 + 0x48);
        return param_2;
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142c207f0 FUN_142c207f0 body=26 status=ok
// SIG undefined FUN_142c207f0(void)

undefined8 * FUN_142c207f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UGameplayTask_SpawnActor::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 142c20810 FUN_142c20810 body=26 status=ok
// SIG undefined FUN_142c20810(void)

undefined8 * FUN_142c20810(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UGameplayTask_SpawnActor::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 142c20830 FUN_142c20830 body=149 status=ok
// SIG undefined FUN_142c20830(void)

longlong FUN_142c20830(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0xd0);
  plVar1 = plVar7 + *(int *)(param_1 + 0xd8);
  do {
    if (plVar7 == plVar1) {
      return 0;
    }
    lVar2 = *plVar7;
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x10);
      if (param_2 != 0) {
        lVar4 = FUN_142c33440();
        lVar5 = param_2;
        do {
          lVar6 = param_2;
          if (lVar5 == lVar4) goto LAB_142c20890;
          lVar5 = *(longlong *)(lVar5 + 0x30);
        } while (lVar5 != 0);
      }
      lVar6 = 0;
LAB_142c20890:
      if (lVar3 == lVar6) {
        return lVar2;
      }
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 142c20900 FUN_142c20900 body=284 status=ok
// SIG undefined FUN_142c20900(void)

/* WARNING: Removing unreachable block (ram,0x000142c209fe) */

longlong FUN_142c20900(longlong param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0x118);
  if (lVar7 == 0) {
LAB_142c2099c:
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_14291fb80();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142c2099c;
    iVar1 = *(int *)(lVar7 + 0xc);
    lVar6 = 0;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    lVar4 = lVar7;
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      bVar2 = true;
      goto LAB_142c209b2;
    }
  }
  bVar2 = false;
LAB_142c209b2:
  if (bVar2) {
    lVar7 = *(longlong *)(lVar4 + 0x488);
  }
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      return lVar7;
    }
  }
  return 0;
}



// FUNCTION 142c20a20 FUN_142c20a20 body=429 status=ok
// SIG undefined FUN_142c20a20(void)

longlong FUN_142c20a20(longlong param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0x118);
  if (lVar7 == 0) {
LAB_142c20abb:
    lVar4 = 0;
LAB_142c20ac0:
    bVar2 = false;
  }
  else {
    lVar4 = FUN_14291fb80();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142c20abb;
    iVar1 = *(int *)(lVar7 + 0xc);
    lVar5 = 0;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    lVar4 = lVar7;
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) != 0) goto LAB_142c20ac0;
    bVar2 = true;
  }
  lVar5 = 0;
  if (bVar2) {
    return lVar4;
  }
  if (lVar7 == 0) {
LAB_142c20b55:
    lVar7 = 0;
LAB_142c20b58:
    bVar2 = false;
  }
  else {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142c20b55;
    iVar1 = *(int *)(lVar7 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) != 0) goto LAB_142c20b58;
    bVar2 = true;
  }
  if (!bVar2) {
    return 0;
  }
  lVar7 = *(longlong *)(lVar7 + 0x490);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
      bVar2 = true;
      goto LAB_142c20bae;
    }
  }
  bVar2 = false;
LAB_142c20bae:
  if (!bVar2) {
    return 0;
  }
  return lVar7;
}



// FUNCTION 142c20bd0 GetSensorLocation body=70 status=ok
// SIG undefined GetSensorLocation(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * UPawnSensingComponent::GetSensorLocation(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 local_18 [16];
  
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  plVar1 = (longlong *)FUN_142c20900();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x610))(plVar1,param_2,local_18);
  }
  return param_2;
}



// FUNCTION 142c20c20 FUN_142c20c20 body=207 status=ok
// SIG undefined FUN_142c20c20(void)

undefined8 * FUN_142c20c20(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  uVar4 = DAT_1468b5da8;
  *param_2 = DAT_1468b5da0;
  *(undefined4 *)(param_2 + 1) = uVar4;
  lVar5 = FUN_142c20900();
  if (lVar5 != 0) {
    lVar1 = *(longlong *)(lVar5 + 0x168);
    if (lVar1 == 0) {
      uVar7 = (undefined4)DAT_1468b5da0;
      uVar8 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      uVar4 = DAT_1468b5da8;
    }
    else {
      local_18 = *(float *)(lVar1 + 0x210);
      fStack_14 = *(float *)(lVar1 + 0x214);
      fStack_10 = *(float *)(lVar1 + 0x218);
      fStack_c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
      iVar3 = movmskps((int)lVar5,auVar2);
      if (iVar3 != 0) {
        *(float *)(lVar1 + 0x250) = local_18;
        *(float *)(lVar1 + 0x254) = fStack_14;
        *(float *)(lVar1 + 600) = fStack_10;
        *(float *)(lVar1 + 0x25c) = fStack_c;
        puVar6 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
        *(undefined8 *)(lVar1 + 0x260) = *puVar6;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
      }
      uVar7 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      uVar4 = *(undefined4 *)(lVar1 + 0x268);
    }
    *param_2 = CONCAT44(uVar8,uVar7);
    *(undefined4 *)(param_2 + 1) = uVar4;
  }
  return param_2;
}



// FUNCTION 142c20cf0 FUN_142c20cf0 body=9 status=ok
// SIG undefined FUN_142c20cf0(void)

longlong FUN_142c20cf0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x38) + 0x80;
}



// FUNCTION 142c20d00 FUN_142c20d00 body=116 status=ok
// SIG undefined FUN_142c20d00(void)

void FUN_142c20d00(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FWeakObjectPtr::Get();
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar1 + 0x118);
  if (lVar3 != 0) {
    uVar2 = UGenericTeamAgentInterface::GetPrivateStaticClass();
    lVar3 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
    if (lVar3 != 0) {
      return;
    }
  }
  lVar1 = FUN_142c1f500(lVar1);
  if (lVar1 == 0) {
    return;
  }
  uVar2 = UGenericTeamAgentInterface::GetPrivateStaticClass();
  UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
  return;
}



// FUNCTION 142c20da0 FUN_142c20da0 body=220 status=ok
// SIG undefined FUN_142c20da0(void)

ulonglong FUN_142c20da0(longlong param_1,undefined8 param_2,byte *param_3)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res8 [2];
  ulonglong uVar4;
  
  FUN_140777f40(param_1 + 0x1c0,local_res8,param_2);
  uVar4 = 0;
  if (local_res8[0] != -1) {
    uVar4 = (longlong)local_res8[0] * 0x380 + *(longlong *)(param_1 + 0x1c0);
  }
  uVar5 = uVar4 + 8;
  if (uVar4 == 0) {
    uVar5 = 0;
  }
  if ((uVar5 != 0) && (bVar2 = *param_3, (int)(uint)bVar2 < *(int *)(uVar5 + 0x350))) {
    lVar7 = *(longlong *)(uVar5 + 0x348);
    if (*(longlong *)(uVar5 + 0x348) == 0) {
      lVar7 = uVar5 + 8;
    }
    lVar6 = (ulonglong)bVar2 * 0x68;
    uVar3 = *(uint *)(lVar7 + 0x44 + lVar6) >> 1;
    uVar4 = (ulonglong)uVar3;
    if ((((uVar3 & 1) != 0) && (0.0 < *(float *)(lVar7 + 8 + lVar6))) &&
       (*(float *)(lVar7 + lVar6) < 3.4028235e+38)) {
      uVar4 = *(ulonglong *)(param_1 + 0x220);
      fVar1 = *(float *)(uVar4 + (ulonglong)bVar2 * 4);
      if ((*(float *)(lVar7 + lVar6) <= fVar1) || (fVar1 == 0.0)) {
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142c20e80 FUN_142c20e80 body=78 status=ok
// SIG undefined FUN_142c20e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c20e80(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar1 = (longlong *)FUN_142c20a20();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  local_10 = DAT_1468b5d98;
  local_18 = _DAT_1468b5d90;
  (**(code **)(*plVar1 + 0x738))(plVar1,param_2,&local_18,1);
  return;
}



// FUNCTION 142c20ed0 InitAITask body=102 status=ok
// SIG undefined InitAITask(void)

void UAITask::InitAITask(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_3 + 0x28))(param_3);
  *(undefined8 *)(param_1 + 0x68) = param_2;
  FUN_142b79770(param_1,param_3,cVar1);
  if (cVar1 == '\x7f') {
    uVar2 = UAIResource_Logic::GetPrivateStaticClass();
    FUN_142b78870(param_1,uVar2);
  }
  return;
}



// FUNCTION 142c20f40 InitAITask body=68 status=ok
// SIG undefined InitAITask(void)

void UAITask::InitAITask(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x68) = param_2;
  FUN_142b79770(param_1,param_3,param_4);
  if (param_4 == '\x7f') {
    uVar1 = UAIResource_Logic::GetPrivateStaticClass();
    FUN_142b78870(param_1,uVar1);
  }
  return;
}



// FUNCTION 142c20f90 FUN_142c20f90 body=79 status=ok
// SIG undefined FUN_142c20f90(void)

void FUN_142c20f90(longlong *param_1)

{
  FUN_142340f20();
  (**(code **)(*param_1 + 0x408))(param_1,(int)param_1[0x37]);
  if ((*(uint *)((longlong)param_1 + 0x18c) & 1) != 0) {
    *(uint *)((longlong)param_1 + 0x18c) = *(uint *)((longlong)param_1 + 0x18c) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x000142c20fd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x400))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142c20fe0 FUN_142c20fe0 body=106 status=ok
// SIG undefined FUN_142c20fe0(void)

undefined4 * FUN_142c20fe0(undefined4 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2c938) {
    _Init_thread_header(&DAT_146b2c938);
    if (DAT_146b2c938 == -1) {
      DAT_146b2c934 = 0xffffffff;
      _Init_thread_footer(&DAT_146b2c938);
    }
  }
  *param_1 = DAT_146b2c934;
  return param_1;
}



// FUNCTION 142c21050 FUN_142c21050 body=162 status=ok
// SIG undefined FUN_142c21050(void)

undefined8 FUN_142c21050(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  float extraout_XMM0_Da;
  float fVar2;
  float fVar3;
  
  FUN_14236c6c0(param_3,param_4);
  if (0.0 < extraout_XMM0_Da) {
    fVar2 = (float)FUN_14236c6a0(param_3,param_4);
    lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    fVar3 = *(float *)(lVar1 + 0x790) - fVar2;
    if (((fVar3 < *(float *)(param_1 + 0x188) || fVar3 == *(float *)(param_1 + 0x188)) &&
        (lVar1 = FUN_142c20900(param_1), lVar1 != 0)) && (*(float *)(lVar1 + 0xd4) <= fVar2)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c21100 IsSensorActor body=26 status=ok
// SIG undefined IsSensorActor(void)

bool UPawnSensingComponent::IsSensorActor(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142c20900();
  return param_2 == lVar1;
}



// FUNCTION 142c21120 FUN_142c21120 body=113 status=ok
// SIG undefined FUN_142c21120(void)

undefined4 FUN_142c21120(longlong param_1,undefined8 param_2,byte *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0xf8),local_res8,param_2);
  lVar2 = 0;
  if (local_res8[0] != -1) {
    lVar2 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0xf8);
  }
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  if (lVar1 == 0) {
    return 0;
  }
  return CONCAT31((int3)(*(uint *)(lVar1 + 8) >> 8),
                  (*(uint *)(lVar1 + 8) >> (*param_3 & 0x1f) & 1) != 0);
}



// FUNCTION 142c211a0 FUN_142c211a0 body=243 status=ok
// SIG undefined FUN_142c211a0(void)

void FUN_142c211a0(longlong *param_1,undefined4 param_2,longlong *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  longlong *local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  if (param_1 == (longlong *)0x0) {
    if (param_3 == (longlong *)0x0) {
      return;
    }
    lVar1 = *param_3;
    plVar2 = param_3;
  }
  else {
    lVar1 = *param_1;
    plVar2 = param_1;
  }
  lVar1 = (**(code **)(lVar1 + 0x148))(plVar2);
  if (lVar1 != 0) {
    local_3c = *(undefined4 *)(param_4 + 1);
    local_44 = *param_4;
    local_28 = param_6;
    local_30 = param_1;
    if (param_3 != (longlong *)0x0) {
      local_30 = param_3;
    }
    local_20 = DAT_146690f0c;
    local_48 = 0;
    local_34 = param_5;
    local_38 = param_2;
    FUN_142c1d810(&local_48);
    lVar1 = FUN_142c1f5b0(lVar1);
    if ((lVar1 != 0) && (plVar2 = (longlong *)FUN_142c31250(), plVar2[0x1f] == 0)) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
    }
  }
  return;
}



// FUNCTION 142c212a0 FUN_142c212a0 body=235 status=ok
// SIG undefined FUN_142c212a0(void)

void FUN_142c212a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_142b7a710();
  (**(code **)(*param_1 + 0x2d0))(param_1);
  (**(code **)(*param_1 + 0x2d8))(param_1);
  plVar5 = (longlong *)0x0;
  if ((int)param_1[0x1e] != -1) {
    if (param_1[0xd] != 0) {
      plVar5 = *(longlong **)(param_1[0xd] + 0x548);
    }
    if ((plVar5 != (longlong *)0x0) && ((int)plVar5[0x3c] != 0)) {
      (**(code **)(*plVar5 + 0x428))(plVar5,param_1,0x10,(int)param_1[0x1e],0);
    }
  }
  local_10 = (longlong *)0x0;
  if (param_1 + 0x1f != &local_18) {
    param_1[0x1f] = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_10);
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



// FUNCTION 142c21390 FUN_142c21390 body=433 status=ok
// SIG undefined FUN_142c21390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c21390(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x39) != '\x04') {
    local_58 = *param_2;
    puVar2 = (undefined8 *)(param_1 + 0xd8);
    uStack_50 = (longlong *)param_2[1];
    if (uStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_50 + 1) = (int)uStack_50[1] + 1;
      UNLOCK();
    }
    if (&local_58 != puVar2) {
      local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
      uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
      uVar5 = *puVar2;
      plVar4 = *(longlong **)(param_1 + 0xe0);
      local_38 = (undefined4)local_58;
      uStack_34 = local_58._4_4_;
      uStack_30 = (undefined4)uStack_50;
      uStack_2c = uStack_50._4_4_;
      *(undefined4 *)puVar2 = (undefined4)local_58;
      *(undefined4 *)(param_1 + 0xdc) = local_58._4_4_;
      *(undefined4 *)(param_1 + 0xe0) = (undefined4)uStack_50;
      *(undefined4 *)(param_1 + 0xe4) = uStack_50._4_4_;
      local_58 = uVar5;
      uStack_50 = plVar4;
    }
    plVar4 = uStack_50;
    if (uStack_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = uStack_50 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*uStack_50)(uStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*uStack_50 + 8))(uStack_50,1);
        }
      }
    }
    plVar4 = (longlong *)param_2[1];
    uVar5 = *param_2;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if ((*(int *)(param_1 + 0xd0) != 0) && (*(longlong **)(param_1 + 200) != (longlong *)0x0)) {
      cVar7 = (**(code **)(**(longlong **)(param_1 + 200) + 0x18))();
      if (cVar7 != '\0') {
        if (*(int *)(param_1 + 0xd0) == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = *(longlong **)(param_1 + 200);
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_48 = uVar5;
        local_40 = plVar4;
        (**(code **)(*plVar8 + 0x40))(plVar8,&local_48);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar4 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    }
    UGameplayTask::EndTask(param_1);
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  }
  return;
}



// FUNCTION 142c215f0 FUN_142c215f0 body=115 status=ok
// SIG undefined FUN_142c215f0(void)

void FUN_142c215f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xd0);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xd8)) {
    do {
      lVar1 = *plVar3;
      if ((lVar1 != 0) && ((*(uint *)(param_2 + 8) >> (*(byte *)(lVar1 + 0x48) & 0x1f) & 1) != 0)) {
        TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(lVar1 + 0x78,param_2);
      }
      iVar2 = iVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xd8));
  }
  return;
}



// FUNCTION 142c21670 FUN_142c21670 body=206 status=ok
// SIG undefined FUN_142c21670(void)

void FUN_142c21670(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  
  lVar3 = FWeakObjectPtr::Get(param_2);
  if (lVar3 != 0) {
    plVar1 = *(longlong **)(param_1 + 0xa0);
    iVar4 = *(int *)(param_1 + 0xa8);
    for (plVar6 = plVar1; plVar6 != plVar1 + iVar4; plVar6 = plVar6 + 1) {
      if (*plVar6 == lVar3) {
        iVar5 = (int)((longlong)plVar6 - (longlong)plVar1 >> 3);
        if (iVar5 != -1) {
          iVar2 = (iVar4 - iVar5) + -1;
          if (0 < iVar2) {
            iVar2 = 1;
          }
          if (iVar2 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar1 + iVar5,plVar1 + (iVar4 - iVar2),(longlong)iVar2 << 3);
            iVar4 = *(int *)(param_1 + 0xa8);
          }
          *(int *)(param_1 + 0xa8) = iVar4 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0xa0);
        }
        break;
      }
    }
    FUN_142c33830(param_1,*(undefined8 *)(lVar3 + 0x118),lVar3);
  }
  return;
}



// FUNCTION 142c217b0 FUN_142c217b0 body=142 status=ok
// SIG undefined FUN_142c217b0(void)

void FUN_142c217b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  FUN_142c25dd0(param_1,param_2,0);
  if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
    lVar1 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x128) == 0) {
      lVar1 = param_1 + 0x120;
    }
    iVar2 = *(int *)(lVar1 + ((longlong)*(int *)(param_1 + 0x130) - 1U &
                             (longlong)*(int *)(param_2 + 0x2c)) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0xe8);
      do {
        if (*(int *)((longlong)iVar2 * 0x20 + lVar1) == *(int *)(param_2 + 0x2c))
        goto LAB_142c2182c;
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + lVar1);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_142c2182c:
  TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
  ::Remove((longlong *)(param_1 + 0xe8),iVar2);
  return;
}



// FUNCTION 142c21840 FUN_142c21840 body=51 status=ok
// SIG undefined FUN_142c21840(void)

void FUN_142c21840(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_2);
  if (lVar1 != 0) {
    FUN_142c33880(param_1,*(undefined8 *)(lVar1 + 0x118),lVar1);
    return;
  }
  return;
}



// FUNCTION 142c21880 FUN_142c21880 body=437 status=ok
// SIG undefined FUN_142c21880(void)

void FUN_142c21880(longlong param_1,longlong param_2)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int local_res8 [2];
  int local_res10 [2];
  int *local_res18 [2];
  int iStack_30;
  uint uStack_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  
  local_res8[0] = *(int *)(param_2 + 0x2c);
  if ((*(uint *)(param_2 + 8) >> (*(byte *)(param_1 + 0x48) & 0x1f) & 1) == 0) {
    TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0xb0,local_res8);
    return;
  }
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_2);
  local_28[0] = *(undefined1 *)(param_1 + 0x48);
  local_20 = *(undefined8 *)(param_1 + 0x50);
  lVar6 = (**(code **)(*plVar5 + 0x400))(plVar5,local_28);
  if (lVar6 != 0) {
    lVar7 = UAISenseConfig_Hearing::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_142c2191a;
  }
  lVar6 = 0;
LAB_142c2191a:
  plVar5 = (longlong *)(param_1 + 0xb0);
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar7 = *(longlong *)(param_1 + 0xf0);
    if (*(longlong *)(param_1 + 0xf0) == 0) {
      lVar7 = param_1 + 0xe8;
    }
    iVar4 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0xf8) - 1U & (longlong)local_res8[0]) * 4
                    );
    if (iVar4 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar4 * 0x1c + *plVar5);
        if (*piVar8 == local_res8[0]) {
          if ((iVar4 != -1) && (piVar8 != (int *)0x0)) goto LAB_142c219af;
          break;
        }
        iVar4 = piVar8[5];
      } while (iVar4 != -1);
    }
  }
  local_res18[0] = local_res8;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FAIGenericID<FPerceptionListenerCounter>_const_&>_>
            (plVar5,local_res10,local_res18,0);
  piVar8 = (int *)((longlong)local_res10[0] * 0x1c + *plVar5);
LAB_142c219af:
  uVar2 = *(uint *)(lVar6 + 0x5c);
  fVar1 = *(float *)(lVar6 + 0x54);
  iStack_30 = CONCAT31(iStack_30._1_3_,
                       ((byte)(uVar2 >> 1) & 1 | ((byte)uVar2 & 1) * '\x02') * '\x02' |
                       (byte)(uVar2 >> 2) & 1);
  uVar2 = *(uint *)(lVar6 + 0x58);
  piVar8[1] = (int)(*(float *)(lVar6 + 0x50) * *(float *)(lVar6 + 0x50));
  piVar8[2] = (int)(fVar1 * fVar1);
  piVar8[3] = iStack_30;
  piVar8[4] = uStack_2c ^ (uVar2 ^ uStack_2c) & 1;
  return;
}



// FUNCTION 142c21a40 FUN_142c21a40 body=677 status=ok
// SIG undefined FUN_142c21a40(void)

void FUN_142c21a40(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  int local_res8 [2];
  int local_res10 [2];
  int *local_res18;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [32];
  
  FUN_142c25dd0(param_1,param_2,0);
  cVar4 = FWeakObjectPtr::IsValid(param_2);
  if (cVar4 == '\0') {
LAB_142c21a7e:
    local_res10[0] = -1;
  }
  else {
    uVar6 = FWeakObjectPtr::Get(param_2);
    lVar7 = FUN_142c1f500(uVar6);
    if (lVar7 == 0) goto LAB_142c21a7e;
    local_res10[0] = *(int *)(lVar7 + 0xc);
  }
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    lVar7 = *(longlong *)(param_1 + 0xd8);
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      lVar7 = param_1 + 0xd0;
    }
    iVar5 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0xe0) - 1U & (longlong)local_res10[0]) *
                             4);
    if (iVar5 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 0x28;
        if (*(int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 0x28) == local_res10[0]) {
          if (((iVar5 != -1) && (lVar7 != 0)) && (lVar7 = lVar7 + 8, lVar7 != 0)) {
            FUN_142c25ed0(param_1,local_res10,0);
            cVar4 = FWeakObjectPtr::IsValid(lVar7);
            if (cVar4 != '\0') {
              uVar6 = FWeakObjectPtr::Get(lVar7);
              FUN_142c24870(param_1,uVar6,0);
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar7 + 0x20);
      } while (iVar5 != -1);
    }
  }
  local_res8[0] = *(int *)(param_2 + 0x2c);
  if ((*(uint *)(param_2 + 8) >> (*(byte *)(param_1 + 0x48) & 0x1f) & 1) == 0) {
    TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0xe8,local_res8);
    return;
  }
  plVar8 = (longlong *)FWeakObjectPtr::Get(param_2);
  local_58[0] = *(undefined1 *)(param_1 + 0x48);
  local_50 = *(undefined8 *)(param_1 + 0x50);
  lVar7 = (**(code **)(*plVar8 + 0x400))(plVar8,local_58);
  if (lVar7 != 0) {
    lVar9 = UAISenseConfig_Sight::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_142c21bd4;
  }
  lVar7 = 0;
LAB_142c21bd4:
  plVar8 = (longlong *)(param_1 + 0xe8);
  if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
    lVar9 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x128) == 0) {
      lVar9 = param_1 + 0x120;
    }
    iVar5 = *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 0x130) - 1U & (longlong)local_res8[0]) *
                             4);
    if (iVar5 != -1) {
      do {
        piVar11 = (int *)((longlong)iVar5 * 0x20 + *plVar8);
        if (*piVar11 == local_res8[0]) {
          if ((iVar5 != -1) && (piVar11 != (int *)0x0)) goto LAB_142c21c7c;
          break;
        }
        iVar5 = piVar11[6];
      } while (iVar5 != -1);
    }
  }
  local_res18 = local_res8;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FAIGenericID<FPerceptionListenerCounter>_const_&>_>
            (plVar8,local_res10,&local_res18,0);
  piVar11 = (int *)((longlong)local_res10[0] * 0x20 + *plVar8);
LAB_142c21c7c:
  piVar10 = (int *)UAISense_Sight::FDigestedSightProperties::FDigestedSightProperties
                             (local_48,lVar7);
  iVar5 = piVar10[1];
  iVar1 = piVar10[2];
  iVar2 = piVar10[3];
  piVar11[1] = *piVar10;
  piVar11[2] = iVar5;
  piVar11[3] = iVar1;
  piVar11[4] = iVar2;
  piVar11[5] = piVar10[4];
  FUN_142c1ee20(param_1,param_2,piVar11 + 1);
  return;
}



// FUNCTION 142c21cf0 FUN_142c21cf0 body=174 status=ok
// SIG undefined FUN_142c21cf0(void)

void FUN_142c21cf0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = FWeakObjectPtr::Get(param_2);
  if (lVar4 != 0) {
    plVar1 = (longlong *)(param_1 + 0xa0);
    plVar3 = (longlong *)*plVar1;
    iVar2 = *(int *)(param_1 + 0xa8);
    for (plVar5 = plVar3; plVar5 != plVar3 + iVar2; plVar5 = plVar5 + 1) {
      if (*plVar5 == lVar4) {
        if ((int)((longlong)plVar5 - (longlong)plVar3 >> 3) != -1) goto LAB_142c21d70;
        break;
      }
    }
    *(int *)(param_1 + 0xa8) = iVar2 + 1;
    if (*(int *)(param_1 + 0xac) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar4;
LAB_142c21d70:
    FUN_142c337e0(param_1,*(undefined8 *)(lVar4 + 0x118),lVar4);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 142c21da0 FUN_142c21da0 body=275 status=ok
// SIG undefined FUN_142c21da0(void)

void FUN_142c21da0(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  float local_28;
  float local_24;
  byte local_20;
  uint local_1c;
  undefined4 *local_18;
  float *local_10;
  
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_2);
  local_18 = (undefined4 *)CONCAT71(local_18._1_7_,*(undefined1 *)(param_1 + 0x48));
  local_10 = *(float **)(param_1 + 0x50);
  lVar4 = (**(code **)(*plVar3 + 0x400))(plVar3,&local_18);
  if (lVar4 != 0) {
    lVar5 = UAISenseConfig_Hearing::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142c21e1e;
  }
  lVar4 = 0;
LAB_142c21e1e:
  local_28 = *(float *)(lVar4 + 0x50) * *(float *)(lVar4 + 0x50);
  local_24 = *(float *)(lVar4 + 0x54) * *(float *)(lVar4 + 0x54);
  uVar1 = *(uint *)(lVar4 + 0x5c);
  local_20 = ((byte)(uVar1 >> 1) & 1 | ((byte)uVar1 & 1) * '\x02') * '\x02' | (byte)(uVar1 >> 2) & 1
  ;
  local_1c = local_1c ^ (*(uint *)(lVar4 + 0x58) ^ local_1c) & 1;
  local_res8[0] = *(undefined4 *)(param_2 + 0x2c);
  local_18 = local_res8;
  local_10 = &local_28;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FAIGenericID<FPerceptionListenerCounter>_&&,UAISense_Hearing::FDigestedHearingProperties_const_&>_>
            (param_1 + 0xb0,local_res10,&local_18,0);
  return;
}



// FUNCTION 142c21ec0 FUN_142c21ec0 body=227 status=ok
// SIG undefined FUN_142c21ec0(void)

void FUN_142c21ec0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined4 *local_38;
  undefined1 *local_30;
  undefined1 local_28 [32];
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_2);
  local_38 = (undefined4 *)CONCAT71(local_38._1_7_,*(undefined1 *)(param_1 + 0x48));
  local_30 = *(undefined1 **)(param_1 + 0x50);
  lVar3 = (**(code **)(*plVar2 + 0x400))(plVar2,&local_38);
  if (lVar3 != 0) {
    lVar4 = UAISenseConfig_Sight::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142c21f42;
  }
  lVar3 = 0;
LAB_142c21f42:
  UAISense_Sight::FDigestedSightProperties::FDigestedSightProperties(local_28,lVar3);
  local_res8[0] = *(undefined4 *)(param_2 + 0x2c);
  local_38 = local_res8;
  local_30 = local_28;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FAIGenericID<FPerceptionListenerCounter>_&&,UAISense_Sight::FDigestedSightProperties_const_&>_>
            (param_1 + 0xe8,local_res10,&local_38,0);
  FUN_142c1ee20(param_1,param_2,local_28);
  return;
}



// FUNCTION 142c21fb0 FUN_142c21fb0 body=207 status=ok
// SIG undefined FUN_142c21fb0(void)

void FUN_142c21fb0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 local_28 [8];
  longlong local_20;
  
  if ((*(byte *)(param_1 + 0x148) & 4) != 0) {
    uVar2 = 0;
    plVar3 = *(longlong **)(param_1 + 0xd0);
    uVar4 = (longlong)*(int *)(param_1 + 0xd8) & 0x1fffffffffffffff;
    if (plVar3 + *(int *)(param_1 + 0xd8) < plVar3) {
      uVar4 = uVar2;
    }
    if (uVar4 != 0) {
      do {
        plVar1 = (longlong *)*plVar3;
        if (plVar1 != (longlong *)0x0) {
          if ((*(byte *)(plVar1 + 6) & 1) != 0) {
            (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2);
          }
          if ((*(uint *)(plVar1 + 6) >> 1 & 1) != 0) {
            local_28[0] = (undefined1)plVar1[9];
            local_20 = plVar1[10];
            FUN_142c243a0(param_1,local_28,param_2);
          }
        }
        plVar3 = plVar3 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 != uVar4);
    }
  }
  return;
}



// FUNCTION 142c22090 OnOwnerEndPlay body=22 status=ok
// SIG undefined OnOwnerEndPlay(void)

void UAIPerceptionComponent::OnOwnerEndPlay(longlong *param_1,undefined8 param_2,int param_3)

{
  if ((param_3 - 2U & 0xfffffffd) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142c2209e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x408))();
    return;
  }
  return;
}



// FUNCTION 142c220b0 FUN_142c220b0 body=298 status=ok
// SIG undefined FUN_142c220b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c220b0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2c930) && (_Init_thread_header(&DAT_146b2c930), DAT_146b2c930 == -1))
  {
    uVar1 = UEnum::GetPrivateStaticClass();
    _DAT_146b2c928 = FUN_141799410(uVar1,0xffffffffffffffff,L"ENavPathEvent");
    _Init_thread_footer(&DAT_146b2c930);
  }
  if (param_3 != 0) {
    if (param_3 < 1) {
      return;
    }
    if (param_3 < 4) {
      if (param_2 == 0) {
        return;
      }
      if ((*(uint *)(param_2 + 0x98) >> 2 & 1) == 0) {
        return;
      }
      if ((*(uint *)(param_1 + 0xb0) >> 3 & 1) != 0) {
        return;
      }
      AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_1 + 0x68));
    }
    else {
      if (param_3 == 4) {
        FUN_142c1dc60(param_1);
        return;
      }
      if (param_3 != 5) {
        return;
      }
    }
  }
  FUN_142c1e9c0(param_1,3);
  return;
}



// FUNCTION 142c221e0 FUN_142c221e0 body=8 status=ok
// SIG undefined FUN_142c221e0(void)

void FUN_142c221e0(longlong param_1)

{
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 2;
  return;
}



// FUNCTION 142c221f0 FUN_142c221f0 body=1056 status=ok
// SIG undefined FUN_142c221f0(void)

void FUN_142c221f0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  char cVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  byte *pbVar13;
  int *piVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  float fVar19;
  longlong local_res8;
  longlong local_res10;
  int local_78;
  int local_74;
  longlong local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  
  FUN_142343b00();
  *(uint *)(param_1 + 0x230) = *(uint *)(param_1 + 0x230) & 0xfffffffe;
  lVar11 = *(longlong *)(param_1 + 0x118);
  if (lVar11 != 0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UAIPerceptionComponent::OnOwnerEndPlay",L"::");
    pwVar6 = (wchar_t *)0x0;
    while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    plVar16 = (longlong *)(lVar11 + 0x2a0);
    FWeakObjectPtr::operator=(&local_78,0);
    local_70 = 0;
    FWeakObjectPtr::operator=(&local_78,param_1);
    local_70 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_78), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_70);
    }
    piVar2 = (int *)*plVar16;
    iVar1 = *(int *)(lVar11 + 0x2a8);
    for (piVar14 = piVar2; piVar14 != piVar2 + (longlong)iVar1 * 4; piVar14 = piVar14 + 4) {
      if (((*piVar14 == local_78) && (piVar14[1] == local_74)) ||
         ((cVar7 = FWeakObjectPtr::IsValid(piVar14), cVar7 == '\0' &&
          (cVar7 = FWeakObjectPtr::IsValid(&local_78), cVar7 == '\0')))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) && (*(longlong *)(piVar14 + 2) == local_70)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        if ((int)((longlong)piVar14 - (longlong)piVar2 >> 4) != -1) goto LAB_142c22389;
        break;
      }
    }
    iVar1 = *(int *)(lVar11 + 0x2a8);
    lVar9 = (longlong)iVar1;
    *(int *)(lVar11 + 0x2a8) = iVar1 + 1;
    if (*(int *)(lVar11 + 0x2ac) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar1);
    }
    lVar12 = *plVar16;
    *(int *)(lVar12 + lVar9 * 0x10) = local_78;
    *(int *)(lVar12 + 4 + lVar9 * 0x10) = local_74;
    *(longlong *)(lVar12 + 8 + lVar9 * 0x10) = local_70;
LAB_142c22389:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList();
    lVar9 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    lVar9 = lVar11;
    if (!bVar4) {
      lVar9 = 0;
    }
    *(longlong *)(param_1 + 0x1a0) = lVar9;
    uVar10 = UGenericTeamAgentInterface::GetPrivateStaticClass();
    lVar9 = UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar10);
    if (lVar9 == 0) {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      *(undefined8 *)(param_1 + 0x1b0) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x1b0) = lVar9;
      *(longlong *)(param_1 + 0x1a8) = lVar11;
    }
  }
  lVar11 = *(longlong *)(param_1 + 0x120);
  if (lVar11 == 0) {
    lVar11 = FUN_1423407b0(param_1);
  }
  lVar11 = FUN_142c1f5b0(lVar11);
  plVar16 = (longlong *)0x0;
  if ((lVar11 != 0) && (*(undefined4 *)(param_1 + 0x1b8) = 0, 0 < *(int *)(param_1 + 0x180))) {
    plVar15 = *(longlong **)(param_1 + 0x178);
    plVar18 = (longlong *)((longlong)*(int *)(param_1 + 0x180) & 0x1fffffffffffffff);
    if (plVar15 + *(int *)(param_1 + 0x180) < plVar15) {
      plVar18 = plVar16;
    }
    plVar17 = plVar16;
    if (plVar18 != (longlong *)0x0) {
      do {
        plVar3 = (longlong *)*plVar15;
        if ((plVar3 != (longlong *)0x0) &&
           ((**(code **)(*plVar3 + 0x278))(plVar3,&local_res8), local_res8 != 0)) {
          lVar12 = FUN_142c33440();
          for (lVar9 = local_res8; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
            if (lVar9 == lVar12) {
              FUN_142c23f40(lVar11,local_68);
              if ((*(byte *)(plVar3 + 6) & 1) != 0) {
                pbVar13 = (byte *)FUN_14077bb00(local_58,local_res8);
                *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 1 << (*pbVar13 & 0x1f);
              }
              FUN_14077bb00(&local_78,local_res8);
              fVar19 = *(float *)((longlong)plVar3 + 0x2c);
              if (fVar19 == 0.0) {
                fVar19 = 3.4028235e+38;
              }
              FUN_142c272a0(param_1,(undefined1)local_78,fVar19);
              break;
            }
          }
        }
        plVar15 = plVar15 + 1;
        plVar17 = (longlong *)((longlong)plVar17 + 1);
      } while (plVar17 != plVar18);
    }
    FUN_142c2b860(lVar11,param_1);
  }
  plVar15 = *(longlong **)(param_1 + 0x118);
  if (plVar15 != (longlong *)0x0) {
    lVar11 = FUN_142c2de20();
    if ((*(int *)(plVar15[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar15[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_142c2259d;
  }
  plVar15 = plVar16;
LAB_142c2259d:
  *(longlong **)(param_1 + 0x1a0) = plVar15;
  if ((((plVar15 != (longlong *)0x0) && (plVar15[0xab] != 0)) && (plVar15[0xab] != param_1)) &&
     (lVar11 = (**(code **)(*plVar15 + 0x148))(plVar15), lVar11 != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x148))();
  }
  lVar11 = *(longlong *)(param_1 + 0x1a0);
  if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x558) == 0)) {
    FUN_142bcaad0(lVar11,param_1);
  }
  return;
}



// FUNCTION 142c22610 FUN_142c22610 body=387 status=ok
// SIG undefined FUN_142c22610(void)

void FUN_142c22610(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  
  FUN_142343b00();
  plVar10 = (longlong *)(param_1 + 0x180);
  iVar11 = 0;
  iVar8 = *(int *)(param_1 + 0x188);
  if (0 < iVar8) {
    lVar6 = 0;
    do {
      lVar9 = *(longlong *)(lVar6 + *plVar10);
      if (lVar9 != 0) {
        lVar5 = FUN_142c33440();
        do {
          if (lVar9 == lVar5) {
            iVar11 = iVar11 + 1;
            lVar6 = lVar6 + 8;
            goto LAB_142c226b7;
          }
          lVar9 = *(longlong *)(lVar9 + 0x30);
        } while (lVar9 != 0);
        iVar8 = *(int *)(param_1 + 0x188);
      }
      iVar4 = (iVar8 - iVar11) + -1;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar10 + (longlong)iVar11 * 8),
                   (void *)(*plVar10 + (longlong)(iVar8 - iVar4) * 8),(longlong)iVar4 << 3);
        iVar8 = *(int *)(param_1 + 0x188);
      }
      *(int *)(param_1 + 0x188) = iVar8 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar10);
LAB_142c226b7:
      iVar8 = *(int *)(param_1 + 0x188);
    } while (iVar11 < iVar8);
  }
  uVar2 = *(uint *)(param_1 + 0x178);
  if (((uVar2 & 1) != 0) && ((uVar2 & 2) == 0)) {
    if (*(int *)(param_1 + 0x188) == 0) {
      *(uint *)(param_1 + 0x178) = uVar2 | 2;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x118);
      if (((plVar3 != (longlong *)0x0) &&
          (lVar6 = (**(code **)(*plVar3 + 0x148))(plVar3), lVar6 != 0)) &&
         (lVar6 = FUN_142c1f5b0(lVar6), lVar6 != 0)) {
        plVar10 = (longlong *)*plVar10;
        plVar1 = plVar10 + *(int *)(param_1 + 0x188);
        for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
          if (*plVar10 != 0) {
            lVar7 = FUN_142c33440();
            lVar9 = *plVar10;
            for (lVar5 = lVar9; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
              if (lVar5 == lVar7) {
                if (lVar9 != 0) {
                  FUN_142c24630(lVar6,lVar9,plVar3);
                  *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) | 2;
                }
                break;
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142c227a0 FUN_142c227a0 body=537 status=ok
// SIG undefined FUN_142c227a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c227a0(longlong *param_1,int param_2,ushort *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((param_2 == (int)param_1[0x1e]) &&
     ((((byte)*param_3 & 0x88) != 0x88 || ((*param_3 >> 8 & 1) != 0)))) {
    *(undefined4 *)(param_1 + 0x1e) = DAT_146690efc;
    if (((*(byte *)((longlong)param_1 + 0x109) & 1) == 0) ||
       (((*(uint *)(param_1 + 0x16) >> 1 & 1) == 0 || ((*param_3 & 1) == 0)))) {
      FUN_142c1e9c0(param_1,(byte)param_3[1]);
    }
    else {
      local_a8 = &LAB_1404c218c;
      uStack_a0 = 0;
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      plVar2 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar2 + 1,param_1);
        *(undefined4 *)(plVar2 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)plVar2 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(plVar2 + 3) = uStack_a0;
        *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_9c;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar2[5] = lVar1;
        *plVar2 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_80 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      FUN_142880af0(uVar3,&local_98);
      if (local_38 != 0) {
        plVar4 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar4 = local_48;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        lVar1 = FMemory::Realloc(plVar2,0,0);
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142c229c0 FUN_142c229c0 body=236 status=ok
// SIG undefined FUN_142c229c0(void)

void FUN_142c229c0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  plVar2 = (longlong *)param_1[0x23];
  if (plVar2 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)plVar2 + 0xc);
    lVar7 = 0;
    lVar5 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    if (((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) &&
       (lVar5 = (**(code **)(*plVar2 + 0x148))(plVar2), lVar5 != 0)) {
      iVar1 = *(int *)(lVar5 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar6;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
        cVar3 = (**(code **)(*param_1 + 0x418))(param_1);
        if (cVar3 != '\0') {
          (**(code **)(*param_1 + 0x470))(param_1);
        }
        (**(code **)(*param_1 + 0x468))(param_1,*(undefined4 *)((longlong)param_1 + 0x184));
      }
    }
  }
  return;
}



// FUNCTION 142c22ab0 FUN_142c22ab0 body=31 status=ok
// SIG undefined FUN_142c22ab0(void)

void FUN_142c22ab0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x408))();
  FUN_142344780(param_1);
  return;
}



// FUNCTION 142c22ad0 Pause body=63 status=ok
// SIG undefined Pause(void)

void UAITask_MoveTo::Pause(longlong *param_1)

{
  if ((param_1[0xd] != 0) && ((int)param_1[0x1e] != -1)) {
    FUN_142bc4c90(param_1[0xd],(int)param_1[0x1e]);
  }
  (**(code **)(*param_1 + 0x2d8))(param_1);
  FUN_142b7af50(param_1);
  return;
}



// FUNCTION 142c22b10 FUN_142c22b10 body=650 status=ok
// SIG undefined FUN_142c22b10(void)

void FUN_142c22b10(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  char local_res14;
  undefined1 local_res18 [16];
  undefined1 *local_58;
  longlong *plStack_50;
  undefined1 *local_48;
  longlong *plStack_40;
  longlong *local_38;
  
  lVar4 = param_1[0xd];
  plVar5 = (longlong *)0x0;
  plVar8 = plVar5;
  if (lVar4 != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x548);
  }
  if (plVar8 == (longlong *)0x0) {
    if ((int)param_1[0x1e] != -1) {
      if (lVar4 != 0) {
        plVar5 = *(longlong **)(lVar4 + 0x548);
      }
      if ((plVar5 != (longlong *)0x0) && ((int)plVar5[0x3c] != 0)) {
        (**(code **)(*param_1 + 0x2d0))();
        (**(code **)(*plVar5 + 0x428))(plVar5,param_1,0x10,(int)param_1[0x1e],0);
      }
    }
    *(undefined1 *)(param_1 + 0x21) = 5;
    UGameplayTask::EndTask(param_1);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xe,0);
    return;
  }
  (**(code **)(*param_1 + 0x2d0))();
  (**(code **)(*param_1 + 0x2d8))(param_1);
  local_58 = (undefined1 *)0x0;
  plStack_50 = (longlong *)0x0;
  (**(code **)(*(longlong *)param_1[0xd] + 0x850))
            ((longlong *)param_1[0xd],&local_res10,param_1 + 0x12,&local_58);
  if (local_res14 == '\0') {
    FUN_142c1e9c0(param_1,5);
  }
  else if (local_res14 == '\x01') {
    lVar4 = *param_1;
    *(undefined4 *)(param_1 + 0x1e) = local_res10;
    uVar7 = FPathFollowingResult::FPathFollowingResult(local_res8,0,0x200);
    (**(code **)(lVar4 + 0x2f0))(param_1,local_res10,uVar7);
  }
  else if (local_res14 == '\x02') {
    *(undefined4 *)(param_1 + 0x1e) = local_res10;
    local_48 = &LAB_1404c2114;
    plStack_40 = (longlong *)((ulonglong)plStack_40 & 0xffffffff00000000);
    plVar9 = plVar8 + 0x33;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_38 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_1457ef660;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)local_48;
      plVar3[3] = (longlong)plStack_40;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_1457ef6a8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
      plVar5 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res18);
      iVar2 = (int)plVar8[0x34];
      plVar5 = (longlong *)*plVar5;
      *(int *)(plVar8 + 0x34) = iVar2 + 1;
      if (*(int *)((longlong)plVar8 + 0x1a4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar9);
      *puVar6 = plVar3;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
    local_48 = local_58;
    plStack_40 = plStack_50;
    param_1[0x1a] = (longlong)plVar5;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    UAITask_MoveTo::SetObservedPath(param_1,&local_48);
  }
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_50 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 142c22da0 FUN_142c22da0 body=454 status=ok
// SIG undefined FUN_142c22da0(void)

void FUN_142c22da0(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  byte *pbVar7;
  int local_res8 [2];
  int local_res10 [2];
  longlong local_res18;
  longlong *local_res20;
  
  pbVar7 = *(byte **)(param_1 + 0x160);
  pbVar1 = pbVar7 + (longlong)*(int *)(param_1 + 0x168) * 0x18;
  for (; pbVar7 != pbVar1; pbVar7 = pbVar7 + 0x18) {
    local_res18 = FWeakObjectPtr::Get(pbVar7 + 0x10);
    if ((local_res18 != 0) && ((*(byte *)(local_res18 + 0x94) & 2) == 0)) {
      uVar5 = *(uint *)(local_res18 + 0xc);
      if ((int)uVar5 < (int)DAT_1469e91c4) {
        uVar3 = uVar5 & 0xffff;
        if ((int)uVar5 < 0) {
          uVar5 = uVar5 + 0xffff;
          uVar3 = uVar3 - 0x10000;
        }
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)uVar3 * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if (((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) &&
         (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + (ulonglong)*pbVar7 * 8),
         plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x278))(plVar2,local_res18);
        FUN_1406a5aa0(local_res18 + 0x2a0,param_1 + 0xe8);
        lVar4 = local_res18;
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0xf8,local_res8,local_res18);
        if ((local_res8[0] == -1) ||
           (lVar6 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0xf8), lVar6 == 0)) {
          local_res20 = &local_res18;
          FUN_142c18250(param_1 + 0xf8,local_res10,&local_res20,0);
          lVar6 = (longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0xf8);
          lVar4 = local_res18;
        }
        FWeakObjectPtr::operator=(lVar6 + 8,lVar4);
        *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 1 << (*pbVar7 & 0x1f);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x16c)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              ((undefined8 *)(param_1 + 0x160),0);
    return;
  }
  return;
}



// FUNCTION 142c22f70 FUN_142c22f70 body=112 status=ok
// SIG undefined FUN_142c22f70(void)

void FUN_142c22f70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 local_18 [16];
  
  FUN_142349c40();
  if (*(longlong *)(param_1 + 0x188) != 0) {
    lVar2 = FUN_142c33440();
    lVar1 = *(longlong *)(param_1 + 0x188);
    lVar4 = lVar1;
    if (lVar1 != 0) {
      while (lVar4 != lVar2) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      if (lVar1 != 0) {
        puVar3 = (undefined1 *)FUN_14077bb00(local_18,lVar1);
        *(undefined1 *)(param_1 + 400) = *puVar3;
        *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(puVar3 + 8);
      }
    }
  }
  return;
}



// FUNCTION 142c22fe0 PostInitProperties body=109 status=ok
// SIG undefined PostInitProperties(void)

void UAISense::PostInitProperties(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = FUN_142c2c780();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142c2303e;
  }
  lVar3 = 0;
LAB_142c2303e:
  *(longlong *)(param_1 + 0x38) = lVar3;
  return;
}



// FUNCTION 142c23050 FUN_142c23050 body=129 status=ok
// SIG undefined FUN_142c23050(void)

void FUN_142c23050(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) goto LAB_142c230b7;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
LAB_142c230ac:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_142c2c780();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142c230ac;
  }
  *(longlong *)(param_1 + 0x38) = lVar3;
LAB_142c230b7:
  *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x158);
  return;
}



// FUNCTION 142c230e0 FUN_142c230e0 body=1975 status=ok
// SIG undefined FUN_142c230e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c230e0(longlong *param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint *puVar19;
  ulonglong uVar20;
  float fVar21;
  undefined1 auStack_578 [32];
  int local_558;
  undefined8 *local_550;
  undefined8 local_548;
  longlong *local_540;
  int local_538;
  undefined4 local_534;
  int local_530;
  int local_52c;
  int local_528;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_518;
  undefined8 local_514;
  undefined4 local_50c;
  undefined8 local_508;
  undefined4 local_500;
  undefined8 local_4f8;
  undefined1 local_4f0 [16];
  undefined4 local_4e0;
  uint local_4dc;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined8 local_4c8;
  undefined4 local_4c0;
  longlong *local_4b8;
  longlong **local_4b0;
  undefined1 *local_4a8;
  longlong *local_498;
  undefined1 local_490 [104];
  undefined1 local_428 [104];
  undefined1 local_3c0 [8];
  undefined1 local_3b8 [832];
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_578;
  iVar4 = (int)param_1[0x43];
  if (iVar4 != 0) {
    local_528 = (int)param_1[0x4a];
    plVar6 = param_1 + 0x42;
    lVar15 = *plVar6;
    local_550 = (undefined8 *)0x0;
    local_548 = 0;
    local_540 = param_1;
    if (0 < iVar4) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_550,iVar4);
      iVar4 = (int)param_1[0x43];
    }
    local_558 = 0;
    if (0 < iVar4) {
      puVar19 = (uint *)(lVar15 + 0x4c);
      do {
        iVar4 = local_558;
        plVar6 = (longlong *)FWeakObjectPtr::Get(puVar19 + -0x13);
        if (plVar6 != (longlong *)0x0) {
          uVar11 = *(uint *)((longlong)plVar6 + 0xc);
          if ((int)uVar11 < (int)DAT_1469e91c4) {
            uVar14 = uVar11 & 0xffff;
            if ((int)uVar11 < 0) {
              uVar11 = uVar11 + 0xffff;
              uVar14 = uVar14 - 0x10000;
            }
            lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar11 >> 0x10) * 8) +
                     (longlong)(int)uVar14 * 0x18;
          }
          else {
            lVar15 = 0;
          }
          uVar20 = 0;
          if (((*(uint *)(lVar15 + 8) >> 0x1d & 1) == 0) &&
             ((plVar7 = (longlong *)(**(code **)(*plVar6 + 0x678))(plVar6),
              plVar7 == (longlong *)0x0 ||
              (cVar3 = (**(code **)(*plVar7 + 0x950))(plVar7), cVar3 == '\0')))) {
            FUN_140777f40(param_1 + 0x38,&local_530,plVar6);
            uVar8 = uVar20;
            if (local_530 != -1) {
              uVar8 = (longlong)local_530 * 0x380 + param_1[0x38];
            }
            uVar18 = uVar8 + 8;
            if (uVar8 == 0) {
              uVar18 = uVar20;
            }
            if ((uVar18 == 0) || (cVar3 = FWeakObjectPtr::IsStale(uVar18,0,0), cVar3 != '\0')) {
              if ((*puVar19 >> 1 & 1) == 0) goto LAB_142c2377c;
              local_4b8 = plVar6;
              FWeakObjectPtr::operator=(local_3c0,plVar6);
              local_78 = (undefined1 *)0x0;
              local_70 = 0;
              FUN_140760710(local_68);
              if (DAT_146b2c8e8 != 0) {
                do {
                  local_514 = DAT_146691200;
                  local_508 = DAT_146691200;
                  local_520 = 0x7f7fffff;
                  local_51c = 0x7f7fffff;
                  local_518 = 0xbf800000;
                  local_50c = DAT_146691208;
                  local_500 = DAT_146691208;
                  local_4f8 = 0;
                  FUN_140760710(local_4f0);
                  uVar8 = local_70;
                  lVar15 = (longlong)(int)local_70;
                  local_4dc = local_4dc & 0xfffffc00;
                  local_4c0 = DAT_146691208;
                  iVar4 = (int)local_70 + 1;
                  local_4e0 = 0;
                  local_4d8 = 0;
                  local_4d0 = 0;
                  local_4cc = 0xbf800000;
                  local_4c8 = DAT_146691200;
                  local_70 = CONCAT44(local_70._4_4_,iVar4);
                  if (local_70._4_4_ < iVar4) {
                    FUN_142c26aa0(local_3b8,uVar8 & 0xffffffff);
                  }
                  puVar12 = local_3b8;
                  if (local_78 != (undefined1 *)0x0) {
                    puVar12 = local_78;
                  }
                  FUN_1407263c0(puVar12 + lVar15 * 0x68,&local_520);
                  uVar11 = (int)uVar20 + 1;
                  uVar20 = (ulonglong)uVar11;
                  iVar4 = local_558;
                } while (uVar11 < DAT_146b2c8e8);
              }
              local_4b0 = &local_4b8;
              local_4a8 = local_3c0;
              FUN_142c19020(param_1 + 0x38,&local_52c,&local_4b0,0);
              uVar18 = param_1[0x38] + (longlong)local_52c * 0x380 + 8;
              if (local_78 != (undefined1 *)0x0) {
                FMemory::Free();
              }
              *(char *)(uVar18 + 0x358) = (char)param_1[0x32];
              *(longlong *)(uVar18 + 0x360) = param_1[0x33];
              *(uint *)(uVar18 + 0x368) = *(uint *)(uVar18 + 0x368) & 0xfffffffe;
              if (((param_1[0x35] != 0) && (param_1[0x36] != 0)) &&
                 (iVar5 = (**(code **)(*(longlong *)param_1[0x36] + 0x20))
                                    ((longlong *)param_1[0x36],plVar6), iVar5 == 2)) {
                *(uint *)(uVar18 + 0x368) = *(uint *)(uVar18 + 0x368) | 1;
              }
            }
            if (uVar18 != 0) {
              if (DAT_146b19a68 == 0) {
                fVar21 = 0.0;
              }
              else {
                fVar21 = *(float *)(DAT_146b19a68 + 0x8c8);
              }
              lVar15 = *(longlong *)(uVar18 + 0x348);
              if (*(longlong *)(uVar18 + 0x348) == 0) {
                lVar15 = uVar18 + 8;
              }
              lVar17 = (longlong)*(int *)(uVar18 + 0x350) * 0x68 + lVar15;
              for (; lVar15 != lVar17; lVar15 = lVar15 + 0x68) {
                uVar9 = FWeakObjectPtr::Get(uVar18);
                lVar10 = FUN_142c1f5b0(uVar9);
                if (((lVar10 != 0) &&
                    (lVar10 = FUN_142c20830(lVar10,*(undefined8 *)(lVar15 + 0x48)), lVar10 != 0)) &&
                   ((0.0 < *(float *)(lVar10 + 0x88) &&
                    ((0.0 < *(float *)(lVar15 + 0x50) &&
                     (*(float *)(lVar10 + 0x88) < fVar21 - *(float *)(lVar15 + 0x54))))))) {
                  *(undefined4 *)(lVar15 + 0x50) = 0;
                }
                iVar4 = local_558;
              }
            }
            bVar1 = (byte)puVar19[-5];
            uVar20 = (ulonglong)bVar1;
            if ((*(int *)(uVar18 + 0x350) <= (int)(uint)bVar1) &&
               (uVar11 = ((uint)bVar1 - *(int *)(uVar18 + 0x350)) + 1, 0 < (int)uVar11)) {
              uVar20 = (ulonglong)uVar11;
              do {
                local_514 = DAT_146691200;
                local_508 = DAT_146691200;
                local_520 = 0x7f7fffff;
                local_51c = 0x7f7fffff;
                local_518 = 0xbf800000;
                local_50c = DAT_146691208;
                local_500 = DAT_146691208;
                local_4f8 = 0;
                FUN_140760710(local_4f0);
                iVar4 = *(int *)(uVar18 + 0x350);
                local_4dc = local_4dc & 0xfffffc00;
                local_4c0 = DAT_146691208;
                local_4e0 = 0;
                local_4d8 = 0;
                local_4d0 = 0;
                local_4cc = 0xbf800000;
                local_4c8 = DAT_146691200;
                *(int *)(uVar18 + 0x350) = iVar4 + 1;
                if (*(int *)(uVar18 + 0x354) < iVar4 + 1) {
                  FUN_142c26aa0(uVar18 + 8,iVar4);
                }
                lVar15 = *(longlong *)(uVar18 + 0x348);
                if (*(longlong *)(uVar18 + 0x348) == 0) {
                  lVar15 = uVar18 + 8;
                }
                FUN_1407263c0(lVar15 + (longlong)iVar4 * 0x68,&local_520);
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
              uVar20 = (ulonglong)(byte)puVar19[-5];
              param_1 = local_540;
              iVar4 = local_558;
            }
            lVar15 = *(longlong *)(uVar18 + 0x348);
            if (*(longlong *)(uVar18 + 0x348) == 0) {
              lVar15 = uVar18 + 8;
            }
            uVar11 = *puVar19;
            puVar16 = (undefined4 *)(lVar15 + uVar20 * 0x68);
            if (((uVar11 & 1) == 0) ||
               ((((byte)((uint)puVar16[0x11] >> 1) ^ (byte)(uVar11 >> 1)) & 1) != 0)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if ((uVar11 >> 1 & 1) == 0) {
              if (((uVar11 >> 2 & 1) != 0) && (((uint)puVar16[0x11] >> 2 & 1) == 0)) {
                puVar16[0x11] = puVar16[0x11] & 0xfffffffd | 4;
LAB_142c23685:
                (**(code **)(*param_1 + 0x418))(param_1,puVar16);
                goto LAB_142c23694;
              }
              if (((uint)puVar16[0x11] >> 2 & 1) != 0) goto LAB_142c23685;
              if (bVar2) {
                *puVar16 = 0;
                puVar16[0x11] = puVar16[0x11] & 0xfffffffd;
                goto LAB_142c23694;
              }
            }
            else {
              (**(code **)(*param_1 + 0x410))(param_1,puVar16,puVar19 + -0x11);
LAB_142c23694:
              uVar20 = local_548;
              if (bVar2) {
                for (puVar13 = local_550; puVar13 != local_550 + (int)local_548;
                    puVar13 = puVar13 + 1) {
                  if ((longlong *)*puVar13 == plVar6) {
                    if ((int)((longlong)puVar13 - (longlong)local_550 >> 3) != -1)
                    goto LAB_142c23714;
                    break;
                  }
                }
                lVar15 = (longlong)(int)local_548;
                iVar5 = (int)local_548 + 1;
                local_548 = CONCAT44(local_548._4_4_,iVar5);
                if (local_548._4_4_ < iVar5) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_550,uVar20 & 0xffffffff);
                }
                local_550[lVar15] = plVar6;
LAB_142c23714:
                if (0 < local_528) {
                  uVar9 = FUN_1407263c0(&local_520,puVar16);
                  uVar9 = FUN_1407263c0(local_428,uVar9);
                  FUN_140772210(local_490);
                  local_498 = plVar6;
                  FUN_1407263c0(local_490,uVar9);
                  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                            (param_1 + 0x49,&local_498);
                }
              }
            }
            if ((*puVar19 >> 4 & 1) != 0) {
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (param_1 + 0x4b,0);
            }
          }
        }
LAB_142c2377c:
        local_558 = iVar4 + 1;
        puVar19 = puVar19 + 0x1c;
      } while (local_558 < (int)param_1[0x43]);
      plVar6 = param_1 + 0x42;
    }
    *(undefined4 *)(plVar6 + 1) = 0;
    if (0x7fffffff < *(uint *)((longlong)plVar6 + 0xc)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
                (plVar6,0);
    }
    if (0 < (int)local_548) {
      plVar6 = (longlong *)param_1[0x34];
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x8a8))(plVar6,&local_550);
      }
      puVar13 = local_550;
      lVar15 = (longlong)(int)local_548;
      local_540 = (longlong *)0x0;
      local_534 = 0;
      local_538 = (int)local_548;
      if ((int)local_548 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (&local_540,local_548 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_540,puVar13,lVar15 << 3);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x47,&local_540);
      if (local_540 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    if (local_550 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142c238a0 FUN_142c238a0 body=525 status=ok
// SIG undefined FUN_142c238a0(void)

void FUN_142c238a0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  iVar1 = (int)param_1[5];
  puStack_28 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puStack_28;
    }
    uVar8 = *puVar9;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar8 == 0) {
      lVar6 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar8 = local_78 + 1;
      bVar2 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar8;
      if (bVar2) goto LAB_142c23961;
      uVar8 = puVar9[lVar6 + 1];
    }
    uStack_74 = -uVar8 & uVar8;
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
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar1 < local_68._4_4_) {
LAB_142c23961:
      local_68._4_4_ = iVar1;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(param_1,0);
  local_10._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar2 = local_68._4_4_ < (int)param_1[5];
  local_48 = param_1;
  local_38 = param_1;
  local_10 = param_1;
  local_68 = puStack_28;
  if (bVar2) {
    do {
      lVar7 = (longlong)iStack_5c * 0x3c;
      lVar6 = *param_1;
      if ((*(byte *)(lVar6 + 0x2c + lVar7) & 1) == 0) {
        cVar3 = FWeakObjectPtr::IsValid(lVar6 + 4 + lVar7);
        if (cVar3 != '\0') {
          lVar6 = FWeakObjectPtr::Get(lVar6 + 4 + lVar7);
          if (0 < *(int *)(lVar6 + 0x218)) goto LAB_142c23a1a;
        }
      }
      else {
LAB_142c23a1a:
        lVar6 = *param_1;
        uVar5 = FWeakObjectPtr::Get(lVar6 + 4 + lVar7);
        FUN_142c230e0(uVar5);
        puVar9 = (uint *)(lVar6 + 0x2c + lVar7);
        *puVar9 = *puVar9 & 0xfffffffe;
      }
      uVar5 = FWeakObjectPtr::Get(*param_1 + 4 + lVar7);
      FUN_142c1e6a0(uVar5);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 142c23ab0 FUN_142c23ab0 body=256 status=ok
// SIG undefined FUN_142c23ab0(void)

void FUN_142c23ab0(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 3.4028235e+38;
  if (param_3[2] <= 0.0) {
    fVar3 = 3.4028235e+38;
  }
  else {
    fVar3 = *param_3;
  }
  if (0.0 < param_2[2]) {
    fVar2 = *param_2;
  }
  if ((fVar3 <= fVar2) || (param_2[2] < param_3[2])) {
    fVar2 = param_2[0x14];
    if (DAT_146b19a68 == 0) {
      fVar3 = -1.0;
    }
    else {
      fVar3 = *(float *)(DAT_146b19a68 + 0x8c8);
    }
    FUN_1407263c0(param_2,param_3);
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    lVar1 = FUN_142c1f5b0(lVar1);
    if (((lVar1 != 0) && (lVar1 = FUN_142c20830(lVar1,*(undefined8 *)(param_3 + 0x12)), lVar1 != 0))
       && (0.0 < *(float *)(lVar1 + 0x88))) {
      param_2[0x15] = fVar3;
      param_2[0x14] = fVar2 + param_2[2];
    }
  }
  return;
}



// FUNCTION 142c23bb0 RegisterAllPawnsAsSourcesForSense body=159 status=ok
// SIG undefined RegisterAllPawnsAsSourcesForSense(void)

void UAIPerceptionSystem::RegisterAllPawnsAsSourcesForSense(longlong *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *local_28;
  int local_20;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPawnIterator(uVar1,&local_28);
  for (; (-1 < local_20 && (local_20 < (int)local_28[1])); local_20 = local_20 + 1) {
    lVar2 = FWeakObjectPtr::Get(*local_28 + (longlong)local_20 * 8);
    if (lVar2 != 0) {
      uVar1 = FWeakObjectPtr::Get(*local_28 + (longlong)local_20 * 8);
      local_18[0] = *param_2;
      local_10 = *(undefined8 *)(param_2 + 8);
      FUN_142c243a0(param_1,local_18,uVar1);
    }
  }
  return;
}



// FUNCTION 142c23c50 FUN_142c23c50 body=246 status=ok
// SIG undefined FUN_142c23c50(void)

void FUN_142c23c50(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res8 [2];
  
  lVar5 = *(longlong *)(param_1 + 0x38);
  lVar6 = 0;
  lVar4 = lVar6;
  if ((longlong *)param_2[5] != (longlong *)0x0) {
    lVar4 = (**(code **)(*(longlong *)param_2[5] + 0x678))();
  }
  if (lVar5 != 0) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(lVar5 + 0xf8,local_res8,lVar4);
    lVar4 = lVar6;
    if (local_res8[0] != -1) {
      lVar4 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar5 + 0xf8);
    }
    lVar5 = lVar4 + 8;
    if (lVar4 == 0) {
      lVar5 = lVar6;
    }
    if (((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> (*(byte *)(param_1 + 0x48) & 0x1f) & 1) != 0)) &&
       (param_2[4] != 0)) {
      iVar2 = *(int *)(param_1 + 0xa0);
      lVar5 = (longlong)iVar2;
      *(int *)(param_1 + 0xa0) = iVar2 + 1;
      if (*(int *)(param_1 + 0xa4) < iVar2 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x98,iVar2);
      }
      uVar3 = param_2[1];
      lVar4 = *(longlong *)(param_1 + 0x98);
      puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
      *puVar1 = *param_2;
      puVar1[1] = uVar3;
      uVar3 = param_2[3];
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
      *puVar1 = param_2[2];
      puVar1[1] = uVar3;
      uVar3 = param_2[5];
      puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
      *puVar1 = param_2[4];
      puVar1[1] = uVar3;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  return;
}



// FUNCTION 142c23d50 FUN_142c23d50 body=139 status=ok
// SIG undefined FUN_142c23d50(void)

void FUN_142c23d50(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0xa0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xa4) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x98,iVar2);
  }
  uVar4 = param_2[1];
  lVar3 = *(longlong *)(param_1 + 0x98);
  lVar5 = (longlong)iVar2 * 0x38;
  *(undefined8 *)(lVar5 + lVar3) = *param_2;
  ((undefined8 *)(lVar5 + lVar3))[1] = uVar4;
  uVar4 = param_2[3];
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar3);
  *puVar1 = param_2[2];
  puVar1[1] = uVar4;
  uVar4 = param_2[5];
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar3);
  *puVar1 = param_2[4];
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar5 + 0x30 + lVar3) = param_2[6];
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 142c23de0 FUN_142c23de0 body=142 status=ok
// SIG undefined FUN_142c23de0(void)

void FUN_142c23de0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_142c33440();
    lVar3 = param_2;
    while (lVar3 != lVar2) {
      lVar3 = *(longlong *)(lVar3 + 0x30);
      if (lVar3 == 0) {
        return;
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x118);
    if (((plVar1 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar1 + 0x148))(plVar1), lVar3 != 0)
        ) && (lVar3 = FUN_142c1f5b0(lVar3), lVar3 != 0)) {
      FUN_142c24630(lVar3,param_2,plVar1);
      *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) | 2;
    }
  }
  return;
}



// FUNCTION 142c23e70 FUN_142c23e70 body=207 status=ok
// SIG undefined FUN_142c23e70(void)

undefined8 FUN_142c23e70(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_142c33440();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar2) {
        if (param_3 == 0) {
          return 0;
        }
        lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
        if (lVar3 == 0) {
          return 0;
        }
        lVar3 = *(longlong *)(lVar3 + 0x150);
        if (lVar3 == 0) {
          return 0;
        }
        lVar2 = FUN_142c32730();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          return 0;
        }
        if (*(longlong *)(lVar3 + 0xa8) == 0) {
          return 0;
        }
        FUN_142c24630(*(longlong *)(lVar3 + 0xa8),param_2,param_3);
        return 1;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 142c23f40 FUN_142c23f40 body=1117 status=ok
// SIG undefined FUN_142c23f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_142c23f40(longlong *param_1,byte *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  byte *pbVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  byte bVar14;
  int *piVar15;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_d8 = (code *)param_2;
  FUN_14077bb00(&local_c8,param_3);
  piVar15 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar15 < DAT_146859258) && (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
    DAT_146859248 = 0xff;
    FName::FName(&DAT_146859250,L"Invalid",1);
    _Init_thread_footer(&DAT_146859258);
  }
  lVar13 = local_c0;
  bVar14 = (byte)local_c8;
  if ((byte)local_c8 == DAT_146859248) {
    if (param_3 != (longlong *)0x0) {
      plVar5 = (longlong *)FUN_142c33440();
      plVar9 = param_3;
      do {
        plVar12 = param_3;
        if (plVar9 == plVar5) goto LAB_142c23fe6;
        plVar9 = (longlong *)plVar9[6];
      } while (plVar9 != (longlong *)0x0);
    }
    plVar12 = (longlong *)0x0;
LAB_142c23fe6:
    plVar9 = (longlong *)plVar12[0x1f];
    if (plVar9 == (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x368))(plVar12);
      plVar9 = (longlong *)plVar12[0x1f];
    }
    pbVar6 = (byte *)(**(code **)(*plVar9 + 0x298))();
    bVar14 = *pbVar6;
    lVar13 = *(longlong *)(pbVar6 + 8);
    if ((*piVar15 < DAT_146859258) && (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
      DAT_146859248 = 0xff;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
    if (bVar14 == DAT_146859248) {
      FUN_140760710(param_2);
      return param_2;
    }
  }
  iVar1 = (int)param_1[0x1b];
  if (iVar1 <= (int)(uint)bVar14) {
    iVar11 = ((uint)bVar14 - iVar1) + 1;
    iVar3 = iVar11 + iVar1;
    *(int *)(param_1 + 0x1b) = iVar3;
    if (*(int *)((longlong)param_1 + 0xdc) < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x1a);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1[0x1a] + (longlong)iVar1 * 8),0,(longlong)iVar11 << 3);
    param_2 = (byte *)local_d8;
  }
  lVar8 = (ulonglong)bVar14 * 8;
  if (*(longlong *)(lVar8 + param_1[0x1a]) == 0) {
    local_c8 = 0;
    if (param_3 != (longlong *)0x0) {
      plVar5 = (longlong *)FUN_142c33440();
      plVar9 = param_3;
      do {
        if (plVar9 == plVar5) goto LAB_142c240e7;
        plVar9 = (longlong *)plVar9[6];
      } while (plVar9 != (longlong *)0x0);
    }
    param_3 = (longlong *)0x0;
LAB_142c240e7:
    lVar10 = local_c8;
    local_d8 = (code *)0x0;
    if (local_c8 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    local_e8 = 0;
    local_f0 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    uVar7 = FUN_1417985e0(param_3,param_1,lVar10,0);
    *(undefined8 *)(lVar8 + param_1[0x1a]) = uVar7;
    uVar4 = *(uint *)(*(longlong *)(param_1[0x1a] + lVar8) + 0x30);
    if (((uVar4 >> 1 & 1) == 0) && ((uVar4 & 1) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 4;
    }
    *(uint *)(param_1 + 0x29) = *(uint *)(param_1 + 0x29) | uVar4;
    if ((*(uint *)(*(longlong *)(param_1[0x1a] + lVar8) + 0x30) >> 1 & 1) != 0) {
      lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      cVar2 = FUN_1428cdc10(lVar8);
      if (cVar2 != '\0') {
        uStack_d0 = 0;
        local_d8 = UAIPerceptionSystem::RegisterAllPawnsAsSourcesForSense;
        plVar9 = (longlong *)FMemory::Realloc(0,0x40);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = (longlong)&PTR_FUN_14580fdc8;
          FWeakObjectPtr::operator=(plVar9 + 1,param_1);
          *(undefined4 *)(plVar9 + 2) = (undefined4)local_d8;
          *(undefined4 *)((longlong)plVar9 + 0x14) = local_d8._4_4_;
          *(undefined4 *)(plVar9 + 3) = uStack_d0;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_cc;
          *(byte *)(plVar9 + 4) = bVar14;
          plVar9[5] = lVar13;
          lVar10 = FDelegateHandle::GenerateNewID();
          plVar9[6] = lVar10;
          *plVar9 = (longlong)&PTR_FUN_14580fe10;
        }
        if (*(longlong *)(lVar8 + 400) == 0) {
          uVar7 = *(undefined8 *)(lVar8 + 0x3f8);
        }
        else {
          uVar7 = *(undefined8 *)(*(longlong *)(lVar8 + 400) + 0x90);
        }
        local_b8 = 0;
        local_b0 = 0;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x30))(plVar9,&local_b8);
        }
        FWeakObjectPtr::operator=(local_a8,0);
        local_a0 = 0;
        local_98 = AK::MemoryMgr::StartProfileThreadUsage;
        local_68 = (longlong *)0x0;
        local_58 = 0;
        FUN_142880af0(uVar7,&local_b8);
        if (local_58 != 0) {
          plVar5 = local_88;
          if (local_68 != (longlong *)0x0) {
            plVar5 = local_68;
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,0);
          }
        }
        if (local_68 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          lVar8 = FMemory::Realloc(plVar9,0,0);
          if (lVar8 != 0) {
            FMemory::Free(lVar8);
          }
        }
      }
    }
  }
  *param_2 = bVar14;
  *(longlong *)(param_2 + 8) = lVar13;
  return param_2;
}



// FUNCTION 142c243a0 FUN_142c243a0 body=626 status=ok
// SIG undefined FUN_142c243a0(void)

void FUN_142c243a0(longlong param_1,char *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  char *pcVar11;
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  
  lVar9 = param_3[2];
  if (*(int *)(param_1 + 0x1b8) != *(int *)(param_1 + 0x188)) {
    FUN_142c1bd10(local_res8,param_1 + 0x180,param_1 + 0x1b0);
  }
  if (*(int *)(param_1 + 0x1c8) != *(int *)(param_1 + 0x198)) {
    FUN_142c1bd10(local_res8,param_1 + 400,param_1 + 0x1c0);
  }
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x1a8)) {
    FUN_142c1bd10(local_res8,param_1 + 0x1a0,param_1 + 0x1d0);
  }
  if (0 < *(int *)(param_1 + 0x1b8)) {
    if (lVar9 == 0) {
      return;
    }
    plVar10 = *(longlong **)(param_1 + 0x1b0);
    plVar1 = plVar10 + *(int *)(param_1 + 0x1b8);
    do {
      if (plVar10 == plVar1) {
        return;
      }
      lVar5 = lVar9;
      lVar4 = *plVar10;
      while (lVar4 != 0) {
        if (lVar5 == *plVar10) {
          plVar10 = *(longlong **)(param_1 + 0x1d0);
          plVar1 = plVar10 + *(int *)(param_1 + 0x1d8);
          goto joined_r0x000142c244a1;
        }
        lVar5 = *(longlong *)(lVar5 + 0x30);
        lVar4 = lVar5;
      }
      plVar10 = plVar10 + 1;
    } while( true );
  }
  if ((0 < *(int *)(param_1 + 0x1c8)) && (lVar9 != 0)) {
    plVar10 = *(longlong **)(param_1 + 0x1c0);
    plVar1 = plVar10 + *(int *)(param_1 + 0x1c8);
    for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
      lVar5 = lVar9;
      lVar4 = *plVar10;
      while (lVar4 != 0) {
        if (lVar5 == *plVar10) {
          return;
        }
        lVar5 = *(longlong *)(lVar5 + 0x30);
        lVar4 = lVar5;
      }
    }
  }
LAB_142c2452d:
  FUN_14077cd10(param_2);
  cVar2 = *param_2;
  uVar6 = *(undefined8 *)(param_2 + 8);
  FWeakObjectPtr::operator=(&local_18,param_3);
  plVar1 = (longlong *)(param_1 + 0x160);
  pcVar7 = (char *)*plVar1;
  iVar3 = *(int *)(param_1 + 0x168);
  pcVar11 = pcVar7;
  do {
    if (pcVar11 == pcVar7 + (longlong)iVar3 * 0x18) {
LAB_142c245ba:
      iVar3 = *(int *)(param_1 + 0x168);
      *(int *)(param_1 + 0x168) = iVar3 + 1;
      if (*(int *)(param_1 + 0x16c) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar3);
      }
      pcVar7 = (char *)(*plVar1 + (longlong)iVar3 * 0x18);
      *pcVar7 = cVar2;
      *(undefined8 *)(pcVar7 + 8) = uVar6;
      *(undefined4 *)(pcVar7 + 0x10) = local_18;
      *(undefined4 *)(pcVar7 + 0x14) = local_14;
      return;
    }
    if ((*pcVar11 == cVar2) &&
       (cVar8 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(pcVar11 + 0x10,&local_18),
       cVar8 != '\0')) {
      if ((int)(((longlong)pcVar11 - (longlong)pcVar7) / 0x18) != -1) {
        return;
      }
      goto LAB_142c245ba;
    }
    pcVar11 = pcVar11 + 0x18;
  } while( true );
joined_r0x000142c244a1:
  if (plVar10 == plVar1) goto LAB_142c2452d;
  lVar5 = lVar9;
  lVar4 = *plVar10;
  while (lVar4 != 0) {
    if (lVar5 == *plVar10) {
      lVar9 = (**(code **)(*param_3 + 0x678))(param_3);
      if (lVar9 == 0) {
        return;
      }
      goto LAB_142c2452d;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
    lVar4 = lVar5;
  }
  plVar10 = plVar10 + 1;
  goto joined_r0x000142c244a1;
}



// FUNCTION 142c24630 FUN_142c24630 body=255 status=ok
// SIG undefined FUN_142c24630(void)

void FUN_142c24630(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte local_18 [8];
  undefined8 local_10;
  
  FUN_14077bb00(local_18);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146859258) && (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1))
  {
    DAT_146859248 = 0xff;
    FName::FName(&DAT_146859250,L"Invalid",1);
    _Init_thread_footer(&DAT_146859258);
  }
  if (((local_18[0] == DAT_146859248) || (*(int *)(param_1 + 0xd8) <= (int)(uint)local_18[0])) ||
     (*(longlong *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)local_18[0] * 8) == 0)) {
    pbVar1 = (byte *)FUN_142c23f40(param_1,local_18,param_2);
    local_18[0] = *pbVar1;
    local_10 = *(undefined8 *)(pbVar1 + 8);
  }
  FUN_142c243a0(param_1,local_18,param_3);
  return;
}



// FUNCTION 142c24730 FUN_142c24730 body=49 status=ok
// SIG undefined FUN_142c24730(void)

void FUN_142c24730(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
  uVar1 = FWeakObjectPtr::Get();
  FUN_142c24770(uVar1,param_2,param_3);
  return;
}



// FUNCTION 142c24770 FUN_142c24770 body=245 status=ok
// SIG undefined FUN_142c24770(void)

void FUN_142c24770(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [104];
  
  cVar4 = FUN_142c26fd0();
  if ((cVar4 != '\0') &&
     ((*(uint *)(param_1 + 0x1b8) >> (*(byte *)(param_3 + 0x30) & 0x1f) & 1) != 0)) {
    FWeakObjectPtr::operator=(&local_78,param_2);
    FUN_1407263c0(local_70,param_3);
    plVar1 = (longlong *)(param_1 + 0x210);
    iVar2 = *(int *)(param_1 + 0x218);
    *(int *)(param_1 + 0x218) = iVar2 + 1;
    if (*(int *)(param_1 + 0x21c) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1,iVar2);
    }
    lVar3 = *plVar1;
    lVar5 = (longlong)iVar2 * 0x70;
    *(undefined4 *)(lVar5 + lVar3) = local_78;
    *(undefined4 *)(lVar5 + 4 + lVar3) = local_74;
    FUN_1407263c0(lVar3 + 8 + lVar5,local_70);
    if ((int)(uint)*(byte *)(param_3 + 0x30) < *(int *)(param_1 + 0x228)) {
      *(undefined4 *)(lVar5 + 0xc + *plVar1) =
           *(undefined4 *)
            (*(longlong *)(param_1 + 0x220) + (ulonglong)*(byte *)(param_3 + 0x30) * 4);
    }
  }
  return;
}



// FUNCTION 142c24870 FUN_142c24870 body=1987 status=ok
// SIG undefined FUN_142c24870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_142c24870(longlong param_1,longlong *param_2,int param_3)

{
  undefined4 *puVar1;
  float fVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  float fVar7;
  bool bVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined1 uVar24;
  longlong lVar25;
  int *piVar26;
  ulonglong uVar27;
  uint uVar28;
  uint *puVar29;
  char cVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_268 [32];
  undefined1 local_248 [8];
  ulonglong local_240;
  undefined8 local_238;
  uint *puStack_230;
  undefined4 local_228;
  int iStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  undefined8 local_210;
  float local_208;
  int local_200;
  longlong *local_1f8;
  uint uStack_1f0;
  uint uStack_1ec;
  uint *local_1e8;
  uint uStack_1e0;
  int iStack_1dc;
  uint local_1d8;
  undefined4 uStack_1d4;
  longlong *local_1d0;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined4 local_1b4;
  undefined1 local_1b0 [8];
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined4 local_19c;
  longlong *local_198;
  uint uStack_190;
  uint uStack_18c;
  uint *puStack_188;
  undefined4 uStack_180;
  int iStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  longlong local_170 [24];
  longlong *local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  uVar23 = 0;
  plVar18 = (longlong *)(param_1 + 0x98);
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    lVar21 = *(longlong *)(param_1 + 0xd8);
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      lVar21 = param_1 + 0xd0;
    }
    iVar15 = *(int *)(lVar21 + ((longlong)*(int *)(param_1 + 0xe0) - 1U &
                               (longlong)*(int *)((longlong)param_2 + 0xc)) * 4);
    if (iVar15 != -1) {
      do {
        uVar19 = *plVar18 + (longlong)iVar15 * 0x28;
        if (*(int *)(*plVar18 + (longlong)iVar15 * 0x28) == *(int *)((longlong)param_2 + 0xc)) {
          if (iVar15 != -1) goto LAB_142c24923;
          break;
        }
        iVar15 = *(int *)(uVar19 + 0x20);
      } while (iVar15 != -1);
    }
  }
  uVar19 = uVar23;
LAB_142c24923:
  uVar27 = uVar19 + 8;
  if (uVar19 == 0) {
    uVar27 = uVar23;
  }
  local_240 = uVar27;
  local_200 = param_3;
  local_1d0 = param_2;
  if (uVar27 != 0) {
    plVar16 = (longlong *)FWeakObjectPtr::Get(uVar27);
    if (plVar16 != param_2) {
      uVar24 = DAT_146690f0c;
      FWeakObjectPtr::operator=(local_1c8,param_2);
      local_1b4 = *(undefined4 *)((longlong)param_2 + 0xc);
      local_238 = &local_1b4;
      local_1c0 = 0;
      puStack_230 = (uint *)local_1c8;
      local_1b8 = uVar24;
      FUN_142c18de0(plVar18,&local_240,&local_238,0);
      uVar27 = *plVar18 + ((longlong)(int)local_240 * 5 + 1) * 8;
      local_240 = uVar27;
      uVar17 = UAISightTargetInterface::GetPrivateStaticClass();
      uVar17 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar17);
      *(undefined8 *)(uVar27 + 8) = uVar17;
      goto LAB_142c24acb;
    }
    if (uVar27 != 0) goto LAB_142c24acb;
  }
  uVar24 = DAT_146690f0c;
  FWeakObjectPtr::operator=(local_1b0,param_2);
  local_19c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_238 = &local_19c;
  local_1a8 = 0;
  puStack_230 = (uint *)local_1b0;
  local_1a0 = uVar24;
  FUN_142c18de0(plVar18,&local_240,&local_238,0);
  uVar27 = *plVar18 + ((longlong)(int)local_240 * 5 + 1) * 8;
  local_240 = uVar27;
  uVar17 = UAISightTargetInterface::GetPrivateStaticClass();
  lVar21 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar17);
  *(longlong *)(uVar27 + 8) = lVar21;
  if (lVar21 == 0) {
    local_b0 = (longlong *)0x0;
    local_a8 = 0;
    uVar17 = UAISightTargetInterface::GetPrivateStaticClass();
    (**(code **)(*param_2 + 0x660))(param_2,uVar17,local_170);
    if (0 < (int)local_a8) {
      plVar18 = local_170;
      if (local_b0 != (longlong *)0x0) {
        plVar18 = local_b0;
      }
      lVar21 = *plVar18;
      uVar19 = uVar23;
      if (lVar21 != 0) {
        uVar17 = UAISightTargetInterface::GetPrivateStaticClass();
        uVar19 = UObjectBaseUtility::GetInterfaceAddress(lVar21,uVar17);
      }
      *(ulonglong *)(uVar27 + 8) = uVar19;
    }
    if (local_b0 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
LAB_142c24acb:
  puVar20 = (undefined1 *)FGenericTeamId::GetTeamIdentifier(local_248,param_2);
  cVar30 = '\0';
  *(undefined1 *)(uVar27 + 0x10) = *puVar20;
  lVar21 = *(longlong *)(param_1 + 0x38);
  lVar25 = param_2[0x2d];
  local_1f8 = (longlong *)(lVar21 + 0x30);
  if (lVar25 == 0) {
    local_238 = (undefined4 *)_DAT_1468b5d90;
    fVar7 = DAT_1468b5d98;
  }
  else {
    local_238 = *(undefined4 **)(lVar25 + 0x220);
    fVar7 = *(float *)(lVar25 + 0x228);
  }
  lVar25 = (longlong)local_238;
  iVar15 = *(int *)(lVar21 + 0x58);
  puStack_230 = (uint *)(lVar21 + 0x40);
  local_210 = (longlong)local_238;
  local_238._0_4_ = 0;
  local_238._4_4_ = 1;
  iStack_224 = 0;
  uStack_220 = 0;
  if (iVar15 != 0) {
    puVar29 = *(uint **)(lVar21 + 0x50);
    if (*(uint **)(lVar21 + 0x50) == (uint *)0x0) {
      puVar29 = puStack_230;
    }
    uVar28 = *puVar29;
    uVar19 = uVar23;
    while (uVar28 == 0) {
      iVar14 = (int)uVar23;
      uStack_220 = (int)uVar19 + 0x20;
      uVar19 = (ulonglong)uStack_220;
      local_238._0_4_ = iVar14 + 1;
      uVar23 = (ulonglong)(uint)local_238;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar14) goto LAB_142c24c05;
      uVar28 = puVar29[(longlong)iVar14 + 1];
    }
    local_238._4_4_ = uVar28 - 1 & uVar28 ^ uVar28;
    iVar14 = 0x1f;
    if (local_238._4_4_ != 0) {
      for (; local_238._4_4_ >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (local_238._4_4_ == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - iVar14;
    }
    iStack_224 = (uStack_220 - iVar14) + 0x1f;
    if (iVar15 < iStack_224) {
LAB_142c24c05:
      iStack_224 = iVar15;
    }
  }
  local_228 = 0xffffffff;
  uStack_180 = 0xffffffff;
  iStack_17c = iStack_224;
  uStack_178 = uStack_220;
  uStack_174 = uStack_21c;
  uStack_190 = (uint)local_238;
  uStack_18c = local_238._4_4_;
  uStack_1e0 = 0xffffffff;
  iStack_1dc = iStack_224;
  uStack_1f0 = (uint)local_238;
  uStack_1ec = local_238._4_4_;
  local_1d8 = uStack_220;
  uStack_1d4 = uStack_21c;
  local_208 = fVar7;
  local_1e8 = puStack_230;
  local_198 = local_1f8;
  puStack_188 = puStack_230;
  if (iStack_224 < iVar15) {
    local_210._4_4_ = (float)((ulonglong)lVar25 >> 0x20);
    fVar11 = local_210._4_4_;
    local_210._0_4_ = (float)lVar25;
    fVar10 = (float)local_210;
    cVar30 = '\0';
    do {
      plVar18 = local_1f8;
      local_210 = (longlong)iStack_1dc * 0x3c;
      lVar25 = *local_1f8 + 4 + local_210;
      lVar21 = FWeakObjectPtr::Get(lVar25);
      if (lVar21 == 0) {
LAB_142c24d15:
        plVar16 = (longlong *)0x0;
      }
      else {
        lVar6 = *(longlong *)(lVar21 + 0x118);
        if (lVar6 == 0) {
LAB_142c24cf0:
          lVar21 = FUN_142c1f500(lVar21);
          if (lVar21 == 0) goto LAB_142c24d15;
          uVar17 = UGenericTeamAgentInterface::GetPrivateStaticClass();
          plVar16 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar21,uVar17);
        }
        else {
          uVar17 = UGenericTeamAgentInterface::GetPrivateStaticClass();
          plVar16 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar17);
          if (plVar16 == (longlong *)0x0) goto LAB_142c24cf0;
        }
      }
      if ((*(uint *)(lVar25 + 8) >> (*(byte *)(param_1 + 0x48) & 0x1f) & 1) != 0) {
        cVar12 = FWeakObjectPtr::IsValid(lVar25);
        if (cVar12 == '\0') {
          plVar22 = (longlong *)0x0;
        }
        else {
          uVar17 = FWeakObjectPtr::Get(lVar25);
          plVar22 = (longlong *)FUN_142c1f500(uVar17);
        }
        if (plVar22 != param_2) {
          if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
            lVar21 = *(longlong *)(param_1 + 0x128);
            if (*(longlong *)(param_1 + 0x128) == 0) {
              lVar21 = param_1 + 0x120;
            }
            iVar15 = *(int *)(lVar21 + ((longlong)*(int *)(param_1 + 0x130) - 1U &
                                       (longlong)*(int *)(lVar25 + 0x2c)) * 4);
            if (iVar15 != -1) {
              do {
                piVar26 = (int *)((longlong)iVar15 * 0x20 + *(longlong *)(param_1 + 0xe8));
                if (*piVar26 == *(int *)(lVar25 + 0x2c)) {
                  if (iVar15 != -1) goto LAB_142c24dbf;
                  break;
                }
                iVar15 = piVar26[6];
              } while (iVar15 != -1);
            }
          }
          piVar26 = (int *)0x0;
LAB_142c24dbf:
          bVar3 = *(byte *)(piVar26 + 5);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
               DAT_146b2c8ec) && (_Init_thread_header(&DAT_146b2c8ec), DAT_146b2c8ec == -1)) {
            DAT_146b2c8e9 = 7;
            _Init_thread_footer(&DAT_146b2c8ec);
          }
          if (bVar3 == DAT_146b2c8e9) {
LAB_142c24e22:
            bVar8 = true;
          }
          else {
            if (plVar16 == (longlong *)0x0) {
              uVar28 = bVar3 & 2;
            }
            else {
              bVar13 = (**(code **)(*plVar16 + 0x20))(plVar16,param_2);
              uVar28 = 1 << (bVar13 & 0x1f) & (uint)bVar3;
            }
            if (uVar28 != 0) goto LAB_142c24e22;
            bVar8 = false;
          }
          uVar9 = DAT_146691208;
          uVar17 = DAT_146691200;
          if (bVar8) {
            lVar21 = *plVar18;
            fVar33 = fVar11 - *(float *)(local_210 + 0x14 + lVar21);
            fVar32 = fVar10 - *(float *)(local_210 + 0x10 + lVar21);
            fVar31 = fVar7 - *(float *)(local_210 + 0x18 + lVar21);
            uVar4 = *(undefined4 *)(local_210 + lVar21);
            uVar5 = *(undefined4 *)(local_240 + 0x14);
            fVar2 = *(float *)(param_1 + 0x160);
            fVar32 = fVar33 * fVar33 + fVar32 * fVar32 + fVar31 * fVar31;
            fVar31 = fVar2;
            if (*(float *)(param_1 + 0x15c) <= fVar32 && fVar32 != *(float *)(param_1 + 0x15c)) {
              fVar31 = ((*(float *)(param_1 + 0x164) - fVar2) / (float)piVar26[2]) * fVar32 + fVar2;
              if (0.0 <= fVar31) {
                if (fVar2 <= fVar31) {
                  fVar31 = fVar2;
                }
              }
              else {
                fVar31 = 0.0;
              }
            }
            lVar21 = (longlong)*(int *)(param_1 + 0x140);
            iVar15 = *(int *)(param_1 + 0x140) + 1;
            *(int *)(param_1 + 0x140) = iVar15;
            if (*(int *)(param_1 + 0x144) < iVar15) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<36,4>_>,FDefaultAllocator>::
              ResizeGrow(param_1 + 0x138);
            }
            lVar25 = *(longlong *)(param_1 + 0x138);
            *(undefined4 *)(lVar25 + lVar21 * 0x24) = uVar4;
            puVar29 = (uint *)(lVar25 + 0x20 + lVar21 * 0x24);
            *puVar29 = *puVar29 & 0xfffffffc;
            puVar1 = (undefined4 *)(lVar25 + 0x20 + lVar21 * 0x24);
            *puVar1 = *puVar1;
            *(undefined4 *)(lVar25 + 4 + lVar21 * 0x24) = uVar5;
            cVar30 = '\x01';
            *(undefined8 *)(lVar25 + 0x14 + lVar21 * 0x24) = uVar17;
            *(float *)(lVar25 + 0x10 + lVar21 * 0x24) = fVar31;
            *(undefined8 *)(lVar25 + 8 + lVar21 * 0x24) = 0;
            *(undefined4 *)(lVar25 + 0x1c + lVar21 * 0x24) = uVar9;
            param_2 = local_1d0;
          }
        }
      }
      uStack_1e0 = uStack_1e0 & ~uStack_1ec;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1f0);
    } while (iStack_1dc < (int)local_1e8[6]);
  }
  if ((local_200 == 1) && (cVar30 != '\0')) {
    AlgoImpl::
    IntroSortInternal<FAISightQuery,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>
              (*(undefined8 *)(param_1 + 0x138),(longlong)*(int *)(param_1 + 0x140),local_248[0],
               local_248);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return cVar30;
}



// FUNCTION 142c25040 FUN_142c25040 body=240 status=ok
// SIG undefined FUN_142c25040(void)

void FUN_142c25040(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((*(uint *)(param_1 + 0x178) & 2) == 0) {
    if (*(int *)(param_1 + 0x188) == 0) {
      *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) | 2;
      return;
    }
    plVar2 = *(longlong **)(param_1 + 0x118);
    if (((plVar2 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar2 + 0x148))(plVar2), lVar5 != 0)
        ) && (lVar5 = FUN_142c1f5b0(lVar5), lVar5 != 0)) {
      plVar7 = *(longlong **)(param_1 + 0x180);
      plVar1 = plVar7 + *(int *)(param_1 + 0x188);
      for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
        if (*plVar7 != 0) {
          lVar6 = FUN_142c33440();
          lVar3 = *plVar7;
          for (lVar4 = lVar3; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            if (lVar4 == lVar6) {
              if (lVar3 != 0) {
                FUN_142c24630(lVar5,lVar3,plVar2);
                *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) | 2;
              }
              break;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142c25130 FUN_142c25130 body=103 status=ok
// SIG undefined FUN_142c25130(void)

void FUN_142c25130(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_1 + 0xbc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xb0,iVar1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 142c251a0 FUN_142c251a0 body=140 status=ok
// SIG undefined FUN_142c251a0(void)

void FUN_142c251a0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_2 != 0) {
    lVar2 = UAISenseEvent_Damage::GetPrivateStaticClass();
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
      FUN_142c1d6b0(param_2 + 0x28);
      local_38 = *(undefined8 *)(param_2 + 0x28);
      uStack_30 = *(undefined8 *)(param_2 + 0x30);
      local_28 = *(undefined4 *)(param_2 + 0x38);
      uStack_24 = *(undefined4 *)(param_2 + 0x3c);
      uStack_20 = *(undefined4 *)(param_2 + 0x40);
      uStack_1c = *(undefined4 *)(param_2 + 0x44);
      local_18 = *(undefined4 *)(param_2 + 0x48);
      uStack_14 = *(undefined4 *)(param_2 + 0x4c);
      uStack_10 = *(undefined4 *)(param_2 + 0x50);
      uStack_c = *(undefined4 *)(param_2 + 0x54);
      FUN_142c23c50(param_1,&local_38);
    }
  }
  return;
}



// FUNCTION 142c25230 FUN_142c25230 body=82 status=ok
// SIG undefined FUN_142c25230(void)

void FUN_142c25230(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UAISenseEvent_Hearing::GetPrivateStaticClass();
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
      FUN_142c1d810(param_2 + 0x28);
    }
  }
  return;
}



// FUNCTION 142c25290 FUN_142c25290 body=640 status=ok
// SIG undefined FUN_142c25290(void)

void FUN_142c25290(longlong *param_1)

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
        if (bVar3) goto LAB_142c253cf;
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
LAB_142c253cf:
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
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x380 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x37c) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 0x6f) =
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



// FUNCTION 142c25510 Remove body=140 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<unsigned_int,FAISightTarget>,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar4 = *param_1;
    lVar1 = lVar4 + (longlong)param_2 * 0x28;
    lVar6 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar1 + 0x24));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
    iVar3 = *(int *)((longlong)plVar5 + lVar6 * 4);
    while (iVar3 != -1) {
      if (iVar3 == param_2) {
        *puVar2 = *(undefined4 *)(lVar1 + 0x20);
        break;
      }
      lVar6 = (longlong)iVar3 * 5 + 4;
      puVar2 = (undefined4 *)(lVar4 + lVar6 * 8);
      iVar3 = *(int *)(lVar4 + lVar6 * 8);
    }
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 142c255a0 FUN_142c255a0 body=402 status=ok
// SIG undefined FUN_142c255a0(void)

undefined8 FUN_142c255a0(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar8 = (int)(param_2 >> 4);
  uVar7 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
  uVar6 = (longlong)(int)param_1[9] - 1;
  uVar5 = -(uVar7 + iVar8) ^ uVar7 >> 0xd;
  uVar9 = (iVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 0x10;
  uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar5 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 10;
  plVar11 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar11 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar11 +
                  (((longlong)(int)((uVar5 - uVar7) - uVar9) ^ (ulonglong)(uVar7 >> 0xf)) & uVar6) *
                  4);
  if (iVar8 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar8 * 0x380;
      if (*(ulonglong *)(lVar3 + lVar2) == param_2) {
        lVar10 = (longlong)iVar8 * 0x380;
        lVar3 = lVar10 + lVar2;
        uVar6 = (longlong)*(int *)(lVar3 + 0x37c) & uVar6;
        piVar4 = (int *)((longlong)plVar11 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar11 + uVar6 * 4);
        goto joined_r0x000142c256be;
      }
      iVar8 = *(int *)(lVar3 + 0x378 + lVar2);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x000142c256be:
  if (iVar1 == -1) {
LAB_142c256f0:
    if (*(longlong *)(lVar10 + 0x350 + *param_1) != 0) {
      FMemory::Free();
    }
    FUN_142c25fd0(param_1,iVar8,1);
    return 1;
  }
  if (iVar1 == iVar8) {
    *piVar4 = *(int *)(lVar3 + 0x378);
    goto LAB_142c256f0;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x380 + 0x378 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x000142c256be;
}



// FUNCTION 142c25740 FUN_142c25740 body=181 status=ok
// SIG undefined FUN_142c25740(void)

void FUN_142c25740(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar6 = (longlong)param_2 * 0x380;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0x37c + lVar2));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar6 + 0x378 + lVar2);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x378 + (longlong)iVar1 * 0x380);
      iVar1 = *piVar5;
    }
  }
  if (*(longlong *)((longlong)param_2 * 0x380 + *param_1 + 0x350) != 0) {
    FMemory::Free();
  }
  FUN_142c25fd0(param_1,param_2,1);
  return;
}



// FUNCTION 142c25800 Remove body=328 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar10 = (longlong)(int)param_1[9] - 1;
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar9 + ((longlong)*param_2 & uVar10) * 4);
  if (iVar8 != -1) {
    lVar3 = *param_1;
    do {
      lVar6 = (longlong)iVar8 * 0x1c;
      if (*(int *)(lVar6 + lVar3) == *param_2) {
        lVar6 = (longlong)iVar8 * 0x1c;
        uVar10 = (longlong)*(int *)(lVar6 + 0x18 + lVar3) & uVar10;
        piVar7 = (int *)((longlong)plVar9 + uVar10 * 4);
        iVar2 = *(int *)((longlong)plVar9 + uVar10 * 4);
        goto joined_r0x000142c25897;
      }
      iVar8 = *(int *)(lVar6 + 0x14 + lVar3);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x000142c25897:
  if (iVar2 == -1) {
LAB_142c258c0:
    bVar4 = (byte)iVar8 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x1c + *param_1) = iVar8;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar6) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    ((undefined4 *)(lVar3 + lVar6))[1] = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar8;
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar8) {
    *piVar7 = *(int *)(lVar6 + lVar3 + 0x14);
    goto LAB_142c258c0;
  }
  piVar7 = (int *)((longlong)iVar2 * 0x1c + 0x14 + lVar3);
  iVar2 = *piVar7;
  goto joined_r0x000142c25897;
}



// FUNCTION 142c25950 Remove body=230 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  longlong lVar8;
  int *piVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar8 = (longlong)
            (int)((int)param_1[9] - 1U & *(uint *)((longlong)param_2 * 0x1c + 0x18 + lVar3));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar9 = (int *)((longlong)plVar5 + lVar8 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar8 * 4);
    while (iVar2 != -1) {
      if (iVar2 == param_2) {
        *piVar9 = *(int *)((longlong)param_2 * 0x1c + 0x14 + lVar3);
        break;
      }
      piVar9 = (int *)(lVar3 + 0x14 + (longlong)iVar2 * 0x1c);
      iVar2 = *piVar9;
    }
  }
  bVar4 = (byte)param_2 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)((longlong)(int)param_1[6] * 0x1c + *param_1) = param_2;
  }
  uVar7 = 0xffffffff;
  puVar6 = (undefined4 *)((longlong)param_2 * 0x1c + *param_1);
  *puVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (undefined4)param_1[6];
  }
  puVar6[1] = uVar7;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = param_2;
  plVar5 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
  return;
}



// FUNCTION 142c25a40 Remove body=328 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Sight::FDigestedSightProperties,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar10 = (longlong)(int)param_1[9] - 1;
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar9 + ((longlong)*param_2 & uVar10) * 4);
  if (iVar8 != -1) {
    lVar3 = *param_1;
    do {
      lVar6 = (longlong)iVar8 * 0x20;
      if (*(int *)(lVar6 + lVar3) == *param_2) {
        lVar6 = (longlong)iVar8 * 0x20;
        uVar10 = (longlong)*(int *)(lVar6 + 0x1c + lVar3) & uVar10;
        piVar7 = (int *)((longlong)plVar9 + uVar10 * 4);
        iVar2 = *(int *)((longlong)plVar9 + uVar10 * 4);
        goto joined_r0x000142c25ada;
      }
      iVar8 = *(int *)(lVar6 + 0x18 + lVar3);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x000142c25ada:
  if (iVar2 == -1) {
LAB_142c25aff:
    bVar4 = (byte)iVar8 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar8;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar6) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar3 + 4 + lVar6) = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar8;
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar8) {
    *piVar7 = *(int *)(lVar6 + lVar3 + 0x18);
    goto LAB_142c25aff;
  }
  piVar7 = (int *)(lVar3 + 0x18 + (longlong)iVar2 * 0x20);
  iVar2 = *piVar7;
  goto joined_r0x000142c25ada;
}



// FUNCTION 142c25b90 Remove body=328 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar10 = (longlong)(int)param_1[9] - 1;
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar9 + ((longlong)*param_2 & uVar10) * 4);
  if (iVar8 != -1) {
    lVar3 = *param_1;
    do {
      lVar6 = (longlong)iVar8 * 0x3c;
      if (*(int *)(lVar6 + lVar3) == *param_2) {
        lVar6 = (longlong)iVar8 * 0x3c;
        uVar10 = (longlong)*(int *)(lVar6 + 0x38 + lVar3) & uVar10;
        piVar7 = (int *)((longlong)plVar9 + uVar10 * 4);
        iVar2 = *(int *)((longlong)plVar9 + uVar10 * 4);
        goto joined_r0x000142c25c27;
      }
      iVar8 = *(int *)(lVar6 + 0x34 + lVar3);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x000142c25c27:
  if (iVar2 == -1) {
LAB_142c25c50:
    bVar4 = (byte)iVar8 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x3c + *param_1) = iVar8;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar6) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    ((undefined4 *)(lVar3 + lVar6))[1] = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar8;
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar8) {
    *piVar7 = *(int *)(lVar6 + lVar3 + 0x34);
    goto LAB_142c25c50;
  }
  piVar7 = (int *)((longlong)iVar2 * 0x3c + 0x34 + lVar3);
  iVar2 = *piVar7;
  goto joined_r0x000142c25c27;
}



// FUNCTION 142c25ce0 Remove body=230 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  longlong lVar8;
  int *piVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar8 = (longlong)
            (int)((int)param_1[9] - 1U & *(uint *)((longlong)param_2 * 0x3c + 0x38 + lVar3));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar9 = (int *)((longlong)plVar5 + lVar8 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar8 * 4);
    while (iVar2 != -1) {
      if (iVar2 == param_2) {
        *piVar9 = *(int *)((longlong)param_2 * 0x3c + 0x34 + lVar3);
        break;
      }
      piVar9 = (int *)(lVar3 + 0x34 + (longlong)iVar2 * 0x3c);
      iVar2 = *piVar9;
    }
  }
  bVar4 = (byte)param_2 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)((longlong)(int)param_1[6] * 0x3c + *param_1) = param_2;
  }
  uVar7 = 0xffffffff;
  puVar6 = (undefined4 *)((longlong)param_2 * 0x3c + *param_1);
  *puVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (undefined4)param_1[6];
  }
  puVar6[1] = uVar7;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = param_2;
  plVar5 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
  return;
}



// FUNCTION 142c25dd0 FUN_142c25dd0 body=253 status=ok
// SIG undefined FUN_142c25dd0(void)

void FUN_142c25dd0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  iVar4 = *(int *)(param_1 + 0x140);
  if (iVar4 != 0) {
    bVar2 = false;
    iVar1 = *(int *)(param_2 + 0x2c);
    iVar5 = iVar4 + -1;
    lVar8 = (longlong)iVar5 * 0x24;
    piVar6 = (int *)(lVar8 + *(longlong *)(param_1 + 0x138));
    if (-1 < iVar5) {
      lVar7 = (longlong)iVar4 * 0x24;
      bVar2 = false;
      do {
        if (*piVar6 == iVar1) {
          iVar4 = *(int *)(param_1 + 0x140);
          iVar3 = (iVar4 - iVar5) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x138) + lVar8),
                       (void *)(lVar7 + *(longlong *)(param_1 + 0x138)),(longlong)iVar3 * 0x24);
            iVar4 = *(int *)(param_1 + 0x140);
          }
          bVar2 = true;
          *(int *)(param_1 + 0x140) = iVar4 + -1;
        }
        lVar7 = lVar7 + -0x24;
        lVar8 = lVar8 + -0x24;
        piVar6 = piVar6 + -9;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
    if ((param_3 == 1) && (bVar2)) {
      AlgoImpl::
      IntroSortInternal<FAISightQuery,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>
                (*(undefined8 *)(param_1 + 0x138),(longlong)*(int *)(param_1 + 0x140),local_res8[0],
                 local_res8);
    }
  }
  return;
}



// FUNCTION 142c25ed0 FUN_142c25ed0 body=255 status=ok
// SIG undefined FUN_142c25ed0(void)

void FUN_142c25ed0(longlong param_1,int *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  iVar3 = *(int *)(param_1 + 0x140);
  if (iVar3 != 0) {
    bVar1 = false;
    iVar4 = iVar3 + -1;
    lVar7 = (longlong)iVar4 * 0x24;
    if (-1 < iVar4) {
      piVar5 = (int *)(*(longlong *)(param_1 + 0x138) + 4 + lVar7);
      lVar6 = (longlong)iVar3 * 0x24;
      do {
        if (*piVar5 == *param_2) {
          iVar3 = *(int *)(param_1 + 0x140);
          iVar2 = (iVar3 - iVar4) + -1;
          if (iVar2 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x138) + lVar7),
                       (void *)(lVar6 + *(longlong *)(param_1 + 0x138)),(longlong)iVar2 * 0x24);
            iVar3 = *(int *)(param_1 + 0x140);
          }
          bVar1 = true;
          *(int *)(param_1 + 0x140) = iVar3 + -1;
        }
        lVar6 = lVar6 + -0x24;
        lVar7 = lVar7 + -0x24;
        piVar5 = piVar5 + -9;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    if ((param_3 == 1) && (bVar1)) {
      AlgoImpl::
      IntroSortInternal<FAISightQuery,FIdentityFunctor,TDereferenceWrapper<FAISightQuery,FAISightQuery::FSortPredicate>_>
                (*(undefined8 *)(param_1 + 0x138),(longlong)*(int *)(param_1 + 0x140),local_res8[0],
                 local_res8);
    }
  }
  return;
}



// FUNCTION 142c25fd0 FUN_142c25fd0 body=181 status=ok
// SIG undefined FUN_142c25fd0(void)

void FUN_142c25fd0(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0x380;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x380 + *param_1) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0x380;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142c26090 RemoveAtUninitialized body=175 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0x3c;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x3c + *param_1) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0x3c;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142c26140 FUN_142c26140 body=412 status=ok
// SIG undefined FUN_142c26140(void)

void FUN_142c26140(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  char local_40;
  char cStack_3f;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x1c0);
  iVar2 = *(int *)(param_1 + 0x1e8);
  puStack_28 = (uint *)(param_1 + 0x1d0);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x1e0);
    if (*(uint **)(param_1 + 0x1e0) == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar3 = *puVar8;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar6 = local_78 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar6;
      if (bVar4) goto LAB_142c261ff;
      uVar3 = puVar8[lVar7 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_142c261ff:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = '\0';
  cStack_3f = '\0';
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x1e8);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      iVar2 = iStack_5c;
      cVar5 = FWeakObjectPtr::IsValid((longlong)iStack_5c * 0x380 + *plVar1 + 8);
      if (cVar5 == '\0') {
        FUN_142c25740(local_58._8_8_,iVar2);
        local_40 = '\x01';
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if ((local_40 != '\0') && (cStack_3f != '\0')) {
      FUN_142c1db00(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 142c262e0 FUN_142c262e0 body=222 status=ok
// SIG undefined FUN_142c262e0(void)

void FUN_142c262e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = FUN_142c1f5b0();
  if (lVar1 != 0) {
    local_44 = *param_5;
    local_3c = *(undefined4 *)(param_5 + 1);
    local_38 = *param_6;
    local_30 = *(undefined4 *)(param_6 + 1);
    local_48 = param_4;
    local_28 = param_2;
    local_20 = param_3;
    FUN_142c1d6b0(&local_48);
    plVar2 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
    if (((int)(uint)*(byte *)(lVar3 + 0x48) < *(int *)(lVar1 + 0xd8)) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xd0) + (ulonglong)*(byte *)(lVar3 + 0x48) * 8),
       lVar1 != 0)) {
      FUN_142c23c50(lVar1,&local_48);
    }
  }
  return;
}



// FUNCTION 142c263c0 FUN_142c263c0 body=215 status=ok
// SIG undefined FUN_142c263c0(void)

void FUN_142c263c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte local_18 [16];
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x278))(param_2,local_18);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146859258) &&
       (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
      DAT_146859248 = 0xff;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
    if (((local_18[0] != DAT_146859248) && ((int)(uint)local_18[0] < *(int *)(param_1 + 0xd8))) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + (ulonglong)local_18[0] * 8),
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x290))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 142c264a0 FUN_142c264a0 body=163 status=ok
// SIG undefined FUN_142c264a0(void)

void FUN_142c264a0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  lVar1 = FUN_142c1f5b0();
  if (lVar1 != 0) {
    local_3c = *(undefined4 *)(param_2 + 1);
    local_44 = *param_2;
    local_28 = param_6;
    local_20 = DAT_146690f0c;
    local_48 = 0;
    local_34 = param_5;
    local_38 = param_3;
    local_30 = param_4;
    FUN_142c1d810(&local_48);
    plVar2 = (longlong *)FUN_142c31250();
    if (plVar2[0x1f] == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
    }
  }
  return;
}



// FUNCTION 142c26550 FUN_142c26550 body=220 status=ok
// SIG undefined FUN_142c26550(void)

void FUN_142c26550(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte local_18 [16];
  
  lVar2 = FUN_142c1f5b0();
  if ((lVar2 != 0) && (param_2 != (longlong *)0x0)) {
    (**(code **)(*param_2 + 0x278))(param_2,local_18);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146859258) {
      _Init_thread_header(&DAT_146859258);
      if (DAT_146859258 == -1) {
        DAT_146859248 = 0xff;
        FName::FName(&DAT_146859250,L"Invalid",1);
        _Init_thread_footer(&DAT_146859258);
      }
    }
    if (((local_18[0] != DAT_146859248) && ((int)(uint)local_18[0] < *(int *)(lVar2 + 0xd8))) &&
       (plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0xd0) + (ulonglong)local_18[0] * 8),
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x290))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 142c26630 RequestControllerPredictionEvent body=79 status=ok
// SIG undefined RequestControllerPredictionEvent(void)

void UAISense_Prediction::RequestControllerPredictionEvent
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar1 = FUN_142c1f5b0();
  if (lVar1 != 0) {
    local_38 = param_1;
    local_30 = param_2;
    local_28 = param_3;
    FUN_142c1a2d0(lVar1,&local_38);
  }
  return;
}



// FUNCTION 142c26680 FUN_142c26680 body=91 status=ok
// SIG undefined FUN_142c26680(void)

void FUN_142c26680(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar1 = FUN_142c1f5b0();
  if ((lVar1 != 0) && (local_38 = *(longlong *)(param_1 + 0x490), local_38 != 0)) {
    local_30 = param_2;
    local_28 = param_3;
    FUN_142c1a2d0(lVar1,&local_38);
  }
  return;
}



// FUNCTION 142c266e0 FUN_142c266e0 body=61 status=ok
// SIG undefined FUN_142c266e0(void)

void FUN_142c266e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  lVar1 = FUN_142c1f5b0(lVar1);
  if (lVar1 != 0) {
    FUN_142c2b860(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142c26720 FUN_142c26720 body=288 status=ok
// SIG undefined FUN_142c26720(void)

void FUN_142c26720(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_38;
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)((longlong)local_1c * 0x380 + *local_38 + 0x350) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<896,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
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



// FUNCTION 142c26840 FUN_142c26840 body=319 status=ok
// SIG undefined FUN_142c26840(void)

void FUN_142c26840(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FNavigationPath::DisableGoalActorObservation();
  }
  lVar2 = *(longlong *)(param_1 + 0xd0);
  if (lVar2 != 0) {
    lVar6 = 0;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x548);
    }
    if (lVar6 != 0) {
      iVar3 = 0;
      if (0 < *(int *)(lVar6 + 0x1a0)) {
        lVar5 = 0;
        do {
          plVar4 = (longlong *)(*(longlong *)(lVar6 + 0x198) + lVar5);
          if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0))
             && (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8),
                *plVar1 == lVar2)) {
            if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0))
            {
              (**(code **)(*plVar1 + 0x28))(plVar1,0);
              if (*plVar4 != 0) {
                lVar2 = FMemory::Realloc(*plVar4,0,0);
                *plVar4 = lVar2;
              }
              *(undefined4 *)(plVar4 + 1) = 0;
            }
            break;
          }
          iVar3 = iVar3 + 1;
          lVar5 = lVar5 + 0x10;
        } while (iVar3 < *(int *)(lVar6 + 0x1a0));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar6 + 0x198,0);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      TBaseMulticastDelegate<void>::Remove(*(longlong *)(param_1 + 0xf8) + 0x80);
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 142c26980 ResetTimers body=124 status=ok
// SIG undefined ResetTimers(void)

void UAITask_MoveTo::ResetTimers(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      uVar1 = AActor::GetWorldTimerManager();
      FUN_142880530(uVar1,param_1 + 0xe0);
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      uVar1 = AActor::GetWorldTimerManager();
      FUN_142880530(uVar1,param_1 + 0xe8);
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 142c26a00 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<896,8>_>,TSizedDefaultAllocator<32>_>::
     ResizeGrow(longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x380,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 9);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x380,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 142c26aa0 FUN_142c26aa0 body=267 status=ok
// SIG undefined FUN_142c26aa0(void)

void FUN_142c26aa0(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x348);
  if (uVar1 < 9) {
    uVar5 = 8;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x34c) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x68,0);
    uVar5 = (uint)(uVar2 / 0x68);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x34c) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x340);
  if (uVar5 < 9) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x68);
    pvVar3 = *(void **)((longlong)param_1 + 0x340);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x68,0);
        *(void **)((longlong)param_1 + 0x340) = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x68);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x68;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x340) = uVar4;
  return;
}



// FUNCTION 142c26bb0 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<896,8>_>,TSizedDefaultAllocator<32>_>::
     ResizeTo(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x380,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 9);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x380,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 142c26c40 Resume body=66 status=ok
// SIG undefined Resume(void)

void UAITask_MoveTo::Resume(longlong param_1)

{
  char cVar1;
  
  FUN_142b7b570();
  if (*(int *)(param_1 + 0xf0) != -1) {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      cVar1 = FUN_142bc9a40(*(longlong *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0xf0));
      if (cVar1 == '\0') goto LAB_142c26c6f;
    }
    return;
  }
LAB_142c26c6f:
  FUN_142c1d900(param_1);
  return;
}



// FUNCTION 142c26c90 FUN_142c26c90 body=189 status=ok
// SIG undefined FUN_142c26c90(void)

longlong FUN_142c26c90(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar1 = GetTransientPackage();
    FUN_1417846f0(uVar1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar2 = UAITask_RunEQS::GetPrivateStaticClass();
    lVar3 = FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(longlong *)(lVar3 + 0x68) = param_1;
    FUN_142b79770(lVar3,param_1 + 0x510,0xc0);
    *(longlong *)(lVar3 + 0x70) = param_2;
    return lVar3;
  }
  return 0;
}



// FUNCTION 142c26d50 FUN_142c26d50 body=628 status=ok
// SIG undefined FUN_142c26d50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c26d50(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar5 = 0;
  if ((((*(byte *)((longlong)param_1 + 0x18c) & 4) != 0) &&
      (cVar2 = (**(code **)(*param_1 + 0x420))(), cVar2 != '\0')) &&
     (cVar2 = (**(code **)(*param_1 + 0x428))(param_1,param_2,1), cVar2 != '\0')) {
    cVar2 = (**(code **)(*param_1 + 0x438))(param_1,param_2);
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142c26dc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x478))(param_1,param_2);
      return;
    }
    uVar5 = 1;
  }
  if ((((*(byte *)((longlong)param_1 + 0x18c) & 8) != 0) && (0 < (int)param_1[0x36])) &&
     ((lVar3 = (**(code **)(*param_2 + 0x6f8))(param_2), lVar3 != 0 &&
      (cVar2 = (**(code **)(*param_1 + 0x430))(param_1,param_2), cVar2 != '\0')))) {
    cVar2 = FUN_142c21050(param_1,param_2,lVar3,1);
    if (cVar2 != '\0') {
      lVar1 = param_2[0x2d];
      if (lVar1 == 0) {
        local_38 = _DAT_1468b5d90;
        local_30 = DAT_1468b5d98;
      }
      else {
        local_38 = *(undefined8 *)(lVar1 + 0x220);
        local_30 = *(undefined4 *)(lVar1 + 0x228);
      }
      lVar1 = *param_1;
      local_2c = local_38;
      local_24 = local_30;
      uVar6 = FUN_14236c6c0(lVar3,1);
      cVar2 = (**(code **)(lVar1 + 0x440))(param_1,&local_2c,uVar6,uVar5);
      if (cVar2 != '\0') {
        lVar1 = param_2[0x2d];
        if (lVar1 == 0) {
          local_24 = DAT_1468b5d98;
          puVar4 = &local_2c;
          local_2c = _DAT_1468b5d90;
        }
        else {
          puVar4 = &local_38;
          local_30 = *(undefined4 *)(lVar1 + 0x228);
          local_38 = *(undefined8 *)(lVar1 + 0x220);
        }
        local_20 = *puVar4;
        local_18 = *(undefined4 *)(puVar4 + 1);
        lVar1 = *param_1;
        uVar6 = FUN_14236c6c0(lVar3,1);
        (**(code **)(lVar1 + 0x480))(param_1,param_2,&local_20,uVar6);
        return;
      }
    }
    cVar2 = FUN_142c21050(param_1,param_2,lVar3,0);
    if (cVar2 != '\0') {
      lVar1 = *param_1;
      uVar6 = FUN_14236c6c0(lVar3,0);
      cVar2 = (**(code **)(lVar1 + 0x440))(param_1,lVar3 + 0x17c,uVar6,0);
      if (cVar2 != '\0') {
        lVar1 = *param_1;
        uVar6 = FUN_14236c6c0(lVar3,0);
        (**(code **)(lVar1 + 0x488))(param_1,param_2,lVar3 + 0x17c,uVar6);
      }
    }
  }
  return;
}



// FUNCTION 142c26fd0 FUN_142c26fd0 body=124 status=ok
// SIG undefined FUN_142c26fd0(void)

undefined8 FUN_142c26fd0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  
  if (param_2 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      plVar5 = (longlong *)(**(code **)(*param_2 + 0x678))(param_2);
      if ((plVar5 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar5 + 0x950))(plVar5), cVar2 != '\0')) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c27050 FUN_142c27050 body=584 status=ok
// SIG undefined FUN_142c27050(void)

void FUN_142c27050(longlong param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  uVar10 = 0;
  uVar11 = uVar10;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    uVar6 = FUN_142c33440();
    for (uVar8 = *(ulonglong *)(param_1 + 0x188);
        (uVar11 = uVar10, uVar8 != 0 && (uVar11 = *(ulonglong *)(param_1 + 0x188), uVar8 != uVar6));
        uVar8 = *(ulonglong *)(uVar8 + 0x30)) {
    }
  }
  uVar8 = uVar10;
  if (param_2 != 0) {
    uVar7 = FUN_142c33440();
    uVar6 = param_2;
    do {
      uVar8 = param_2;
      if (uVar6 == uVar7) break;
      uVar6 = *(ulonglong *)(uVar6 + 0x30);
      uVar8 = uVar10;
    } while (uVar6 != 0);
  }
  if (uVar11 != uVar8) {
    *(ulonglong *)(param_1 + 0x188) = param_2;
    puVar9 = (undefined1 *)FUN_14077bb00(&local_78,param_2);
    local_48 = (longlong *)(param_1 + 0x1c0);
    puStack_28 = (uint *)(param_1 + 0x1d0);
    *(undefined1 *)(param_1 + 400) = *puVar9;
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(puVar9 + 8);
    iVar1 = *(int *)(param_1 + 0x1e8);
    local_78._0_4_ = 0;
    local_78._4_4_ = 1;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar1 != 0) {
      puVar12 = *(uint **)(param_1 + 0x1e0);
      if (*(uint **)(param_1 + 0x1e0) == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar2 = *puVar12;
      uVar11 = uVar10;
      while (uVar2 == 0) {
        iVar5 = (int)uVar11;
        uStack_60 = (int)uVar10 + 0x20;
        uVar10 = (ulonglong)uStack_60;
        local_78._0_4_ = iVar5 + 1;
        uVar11 = (ulonglong)(uint)local_78;
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142c271b3;
        uVar2 = puVar12[(longlong)iVar5 + 1];
      }
      local_78._4_4_ = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (local_78._4_4_ != 0) {
        for (; local_78._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (local_78._4_4_ == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_68._4_4_ = (uStack_60 - iVar5) + 0x1f;
      if (iVar1 < local_68._4_4_) {
LAB_142c271b3:
        local_68._4_4_ = iVar1;
      }
    }
    auStack_20._4_4_ = local_68._4_4_;
    auStack_20._0_4_ = 0xffffffff;
    auStack_20._8_4_ = uStack_60;
    auStack_20._12_4_ = iStack_5c;
    uStack_30 = (uint)local_78;
    uStack_2c = local_78._4_4_;
    local_40 = 0;
    local_10._0_4_ = SUB84(local_48,0);
    local_10._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    uStack_70 = (uint)local_78;
    uStack_6c = local_78._4_4_;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x1e8);
    local_78 = local_48;
    local_38 = local_48;
    local_10 = local_48;
    local_68 = puStack_28;
    if (bVar4) {
      do {
        lVar3 = *local_78;
        *(undefined1 *)((longlong)iStack_5c * 0x380 + 0x360 + lVar3) =
             *(undefined1 *)(param_1 + 400);
        *(undefined8 *)((longlong)iStack_5c * 0x380 + 0x368 + lVar3) =
             *(undefined8 *)(param_1 + 0x198);
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        FUN_142c1db00(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 142c272a0 FUN_142c272a0 body=104 status=ok
// SIG undefined FUN_142c272a0(void)

void FUN_142c272a0(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x228) <= param_2)) {
    iVar1 = param_2 + 1 + (*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x228));
    *(int *)(param_1 + 0x228) = iVar1;
    if (*(int *)(param_1 + 0x22c) < iVar1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
    }
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x220) + (longlong)param_2 * 4) = param_3;
  return;
}


