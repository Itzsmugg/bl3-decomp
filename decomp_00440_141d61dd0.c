// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141d61dd0 BuildProjectionMatrix body=354 status=ok
// SIG undefined BuildProjectionMatrix(void)

void BuildProjectionMatrix
               (undefined8 param_1,int param_2,float param_3,float param_4,
               undefined1 (*param_5) [16])

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = DAT_1464aaa4c;
  fVar4 = (float)(int)param_1 / (float)(int)((ulonglong)param_1 >> 0x20);
  if (param_2 == 1) {
    param_4 = param_4 * 0.5;
    fVar2 = 1.0;
    fVar3 = 1.0;
    fVar4 = param_4 / fVar4;
    if (fVar4 != 0.0) {
      fVar3 = 1.0 / fVar4;
    }
    if (param_4 != 0.0) {
      fVar2 = 1.0 / param_4;
    }
    *param_5 = ZEXT416((uint)fVar2);
    *(undefined4 *)param_5[1] = 0;
    *(float *)(param_5[1] + 4) = fVar3;
    *(undefined4 *)(param_5[1] + 8) = 0;
    *(undefined4 *)(param_5[1] + 0xc) = 0;
    *(undefined8 *)param_5[2] = 0;
    *(undefined8 *)(param_5[2] + 8) = 0xb6800000;
    *(undefined8 *)param_5[3] = 0;
    *(undefined8 *)(param_5[3] + 8) = 0x3f8000003f800000;
    return;
  }
  fVar2 = _guard_xfg_dispatch_icall_nop(param_3);
  *(float *)*param_5 = 1.0 / fVar2;
  *(undefined4 *)(*param_5 + 4) = 0;
  *(undefined4 *)(*param_5 + 8) = 0;
  *(undefined4 *)(*param_5 + 0xc) = 0;
  *(undefined4 *)param_5[1] = 0;
  *(float *)(param_5[1] + 4) = (1.0 / fVar2) * fVar4;
  *(undefined4 *)(param_5[1] + 8) = 0;
  *(undefined4 *)(param_5[1] + 0xc) = 0;
  *(undefined8 *)param_5[2] = 0;
  *(undefined8 *)(param_5[2] + 8) = 0x3f80000000000000;
  *(undefined4 *)param_5[3] = 0;
  *(undefined4 *)(param_5[3] + 4) = 0;
  *(undefined4 *)(param_5[3] + 8) = uVar1;
  *(undefined4 *)(param_5[3] + 0xc) = 0;
  return;
}



// FUNCTION 141d61f40 FUN_141d61f40 body=1169 status=ok
// SIG undefined FUN_141d61f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_141d61f40(float *param_1,undefined4 param_2)

{
  longlong lVar1;
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
  float local_res10;
  float local_f8;
  float local_f4;
  float local_f0;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146a9e644) &&
     (_Init_thread_header(&DAT_146a9e644), DAT_146a9e644 == -1)) {
    _DAT_146a9e638 = 0x3f800000;
    DAT_146a9e640 = 0.0;
    _Init_thread_footer(&DAT_146a9e644);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a9e654) &&
     (_Init_thread_header(&DAT_146a9e654), DAT_146a9e654 == -1)) {
    DAT_146a9e648 = 0.0;
    _DAT_146a9e64c = 0x3f800000;
    _Init_thread_footer(&DAT_146a9e654);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a9e664) &&
     (_Init_thread_header(&DAT_146a9e664), DAT_146a9e664 == -1)) {
    _DAT_146a9e658 = 0;
    DAT_146a9e660 = 1.0;
    _Init_thread_footer(&DAT_146a9e664);
  }
  local_res10 = DAT_146a9e650;
  fVar14 = DAT_146a9e648;
  fVar15 = DAT_146a9e64c;
  switch(param_2) {
  case 0:
    local_f8 = DAT_146a9e638;
    local_f4 = DAT_146a9e63c;
    local_f0 = DAT_146a9e640;
    break;
  case 1:
    local_f8 = -DAT_146a9e638;
    local_f4 = -DAT_146a9e63c;
    local_f0 = -DAT_146a9e640;
    break;
  case 2:
    local_res10 = -DAT_146a9e660;
    local_f8 = DAT_146a9e648;
    local_f4 = DAT_146a9e64c;
    local_f0 = DAT_146a9e650;
    fVar14 = -DAT_146a9e658;
    fVar15 = -DAT_146a9e65c;
    break;
  case 3:
    local_f8 = -DAT_146a9e648;
    local_f4 = -DAT_146a9e64c;
    local_f0 = -DAT_146a9e650;
    local_res10 = DAT_146a9e660;
    fVar14 = DAT_146a9e658;
    fVar15 = DAT_146a9e65c;
    break;
  case 4:
    local_f8 = DAT_146a9e658;
    local_f4 = DAT_146a9e65c;
    local_f0 = DAT_146a9e660;
    break;
  case 5:
    local_f8 = -DAT_146a9e658;
    local_f4 = -DAT_146a9e65c;
    local_f0 = -DAT_146a9e660;
  }
  fVar8 = local_f0 * fVar15 - local_res10 * local_f4;
  fVar11 = fVar14 * DAT_1468b5d90;
  fVar10 = local_res10 * local_f8 - local_f0 * fVar14;
  fVar12 = fVar14 * local_f4 - fVar15 * local_f8;
  fVar13 = fVar10 * DAT_1468b5d94;
  fVar2 = fVar8 * DAT_1468b5d90;
  fVar5 = fVar12 * DAT_1468b5d98;
  fVar3 = fVar15 * DAT_1468b5d94;
  fVar6 = local_res10 * DAT_1468b5d98;
  fVar4 = local_f4 * DAT_1468b5d94;
  fVar9 = local_f8 * DAT_1468b5d90;
  fVar7 = local_f0 * DAT_1468b5d98;
  *param_1 = fVar8;
  param_1[1] = fVar14;
  param_1[2] = local_f8;
  param_1[3] = 0.0;
  param_1[4] = fVar10;
  param_1[5] = fVar15;
  param_1[6] = local_f4;
  param_1[7] = 0.0;
  param_1[8] = fVar12;
  param_1[9] = local_res10;
  param_1[10] = local_f0;
  param_1[0xb] = 0.0;
  param_1[0xc] = fVar13 + fVar2 + fVar5;
  param_1[0xd] = fVar11 + fVar3 + fVar6;
  param_1[0xe] = fVar9 + fVar4 + fVar7;
  param_1[0xf] = 1.0;
  return param_1;
}



// FUNCTION 141d62400 Call body=90 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_f593f13edfd2e236f4ceaf9c5645ab05>,void___cdecl(void)>::Call
               (longlong *param_1)

{
  longlong lVar1;
  
  ProcessOcclusionFrame(*param_1,param_1[1]);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    TArray<FOcclusionMeshData,FDefaultAllocator>::~TArray<FOcclusionMeshData,FDefaultAllocator>
              (lVar1 + 0x60);
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x80);
    return;
  }
  return;
}



// FUNCTION 141d62460 FUN_141d62460 body=203 status=ok
// SIG undefined FUN_141d62460(void)

void FUN_141d62460(void)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar2 = FUN_1428e7a40();
  FUN_1417a5560(uVar2,&local_28,1,0x10,0);
  uVar3 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    lVar4 = local_28;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)uVar3 <= local_18)) {
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
        return;
      }
      lVar1 = *(longlong *)(lVar4 + (longlong)local_18 * 8);
      if (lVar1 != 0) {
        FUN_1423424e0(lVar1);
        uVar3 = local_20 & 0xffffffff;
        lVar4 = local_28;
      }
      local_18 = local_18 + 1;
    } while ((int)uVar3 <= local_18);
    do {
      if (*(longlong *)(lVar4 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)uVar3);
  } while( true );
}



// FUNCTION 141d62530 FUN_141d62530 body=621 status=ok
// SIG undefined FUN_141d62530(void)

void FUN_141d62530(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  longlong local_48;
  undefined1 local_40;
  byte local_3f;
  undefined8 local_38;
  undefined1 local_30;
  byte local_2f;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  lVar8 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = -1;
  uVar2 = FUN_1428e7a40();
  FUN_1417a5560(uVar2,&local_28,1,0x10,0);
  uVar9 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)uVar9 <= local_18)) {
        if (local_28 != 0) {
          FMemory::Free(local_28);
        }
        return;
      }
      lVar5 = *(longlong *)(local_28 + (longlong)local_18 * 8);
      local_58 = 0xffffffff;
      local_54 = 0;
      FWeakObjectPtr::operator=(local_50,0);
      lVar4 = lVar8;
      if (((*(byte *)(lVar5 + 0xb8) & 1) != 0) &&
         ((*(longlong *)(lVar5 + 0x120) != 0 || (lVar3 = FUN_1423407b0(lVar5), lVar3 != 0)))) {
        lVar4 = *(longlong *)(lVar5 + 0x120);
        if (lVar4 == 0) {
          lVar4 = FUN_1423407b0(lVar5);
        }
        local_3f = local_3f & 0xfd | 1;
        local_40 = 1;
        local_48 = lVar4;
        AK::MemoryMgr::StartProfileThreadUsage((long)&local_48);
        FUN_14233aad0(lVar5);
        *(undefined8 *)(lVar5 + 0x120) = 0;
        AK::MemoryMgr::StartProfileThreadUsage((long)&local_48);
      }
      FWeakObjectPtr::operator=(local_50,lVar4);
      cVar1 = FWeakObjectPtr::IsValid(local_50);
      lVar4 = lVar8;
      if (cVar1 != '\0') {
        lVar4 = lVar5;
      }
      FWeakObjectPtr::operator=(&local_58,lVar4);
      cVar1 = FWeakObjectPtr::IsValid(&local_58);
      if (cVar1 != '\0') {
        uVar2 = FWeakObjectPtr::Get(local_50);
        lVar4 = FWeakObjectPtr::Get(&local_58);
        uVar6 = *(uint *)(lVar4 + 0xc);
        lVar5 = lVar8;
        if ((int)uVar6 < (int)DAT_1469e91c4) {
          uVar7 = uVar6 & 0xffff;
          if ((int)uVar6 < 0) {
            uVar6 = uVar6 + 0xffff;
            uVar7 = uVar7 - 0x10000;
          }
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                  (longlong)(int)uVar7 * 0x18;
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
          if ((*(byte *)(lVar4 + 0xb8) & 1) != 0) {
            FUN_14233aad0(lVar4);
          }
          *(undefined8 *)(lVar4 + 0x120) = uVar2;
          local_2f = local_2f & 0xfd | 1;
          local_30 = 1;
          local_38 = uVar2;
          AK::MemoryMgr::StartProfileThreadUsage((long)&local_38);
          FUN_14233a6f0(lVar4);
          AK::MemoryMgr::StartProfileThreadUsage((long)&local_38);
        }
      }
      uVar9 = local_20 & 0xffffffff;
      local_18 = local_18 + 1;
    } while ((int)local_20 <= local_18);
    do {
      if (*(longlong *)(local_28 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 141d627a0 FUN_141d627a0 body=276 status=ok
// SIG undefined FUN_141d627a0(void)

void FUN_141d627a0(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = *(longlong *)(param_1 + 0xc0);
  bVar1 = false;
  fVar7 = 0.0;
  lVar4 = (longlong)*(int *)(param_1 + 200) * 0x30d0 + lVar3;
  fVar6 = 0.0;
  do {
    if (lVar3 == lVar4) {
      *(int *)(param_1 + 0x2b0) = (int)fVar7;
      *(int *)(param_1 + 0x2b4) = (int)fVar6;
      return;
    }
    uVar2 = *(uint *)(lVar3 + 0x1aa8);
    fVar9 = (float)*(int *)(lVar3 + 0x1aac);
    fVar10 = (float)(int)uVar2;
    fVar5 = (fVar10 / (float)*(int *)(lVar3 + 0x370)) * (float)*(int *)(lVar3 + 0x380);
    fVar8 = (fVar9 / (float)*(int *)(lVar3 + 0x374)) * (float)*(int *)(lVar3 + 900);
    if (bVar1) {
      if (fVar5 <= fVar7) {
        fVar5 = fVar7;
      }
      if (fVar6 < fVar8) goto LAB_141d6284d;
    }
    else {
LAB_141d6284d:
      fVar6 = fVar8;
    }
    bVar1 = true;
    if (fVar9 <= fVar6) {
      fVar9 = fVar6;
    }
    fVar7 = fVar10;
    if (fVar10 <= fVar5) {
      fVar7 = fVar5;
    }
    if (*(int *)(lVar3 + 0xf60) < 4) {
      if (uVar2 <= *(uint *)(param_1 + 0x2a4)) {
        uVar2 = *(uint *)(param_1 + 0x2a4);
      }
      *(uint *)(param_1 + 0x2a4) = uVar2;
    }
    lVar3 = lVar3 + 0x30d0;
    fVar6 = fVar9;
  } while( true );
}



// FUNCTION 141d628c0 FUN_141d628c0 body=161 status=ok
// SIG undefined FUN_141d628c0(void)

undefined8 FUN_141d628c0(longlong param_1,uint param_2,char param_3)

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
      FUN_141bb3060(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141d62970 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>,FDefaultSetAllocator>
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



// FUNCTION 141d62a20 FUN_141d62a20 body=295 status=ok
// SIG undefined FUN_141d62a20(void)

undefined8 * FUN_141d62a20(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e50d70;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"HZBBuildCSParameters",0);
    FShaderResourceParameter::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"HZBUavInPrev",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"HZBUavOut0",0);
    FShaderResourceParameter::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"HZBUavOut1",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xdc,*(undefined8 *)(param_1 + 0x18),L"HZBUavOut2",0);
    FShaderResourceParameter::Bind(puVar1 + 0x1c,*(undefined8 *)(param_1 + 0x18),L"HZBUavOut3",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d62b50 FUN_141d62b50 body=335 status=ok
// SIG undefined FUN_141d62b50(void)

undefined8 * FUN_141d62b50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e50d70;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"HZBBuildCSParameters",0);
    FShaderResourceParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"HZBDepthInput",0)
    ;
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"TextureSampler",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"HZBUavOut0",0);
    FShaderResourceParameter::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"HZBUavOut1",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xdc,*(undefined8 *)(param_1 + 0x18),L"HZBUavOut2",0);
    FShaderResourceParameter::Bind(puVar1 + 0x1c,*(undefined8 *)(param_1 + 0x18),L"HZBUavOut3",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d62ca0 ConstructCompiledInstance body=351 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * THZBBuildPS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e50cc0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xda) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined2 *)(puVar1 + 0x1c) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xe2) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"InvSize",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"InputUvFactorAndOffset",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"InputViewportMaxBound",0);
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0xd4),(longlong)puVar1 + 0xdc);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xe4,*(undefined8 *)(param_1 + 0x18),L"Texture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1d,*(undefined8 *)(param_1 + 0x18),L"TextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d62e00 ConstructCompiledInstance body=411 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FHZBTestPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e510d0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xde) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xe2) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"HZBUvFactor",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"HZBSize",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"HZBTexture",0);
    FShaderResourceParameter::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"HZBSampler",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"BoundsCenterTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"BoundsCenterSampler",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xdc,*(undefined8 *)(param_1 + 0x18),L"BoundsExtentTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1c,*(undefined8 *)(param_1 + 0x18),L"BoundsExtentSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d62fa0 FUN_141d62fa0 body=138 status=ok
// SIG undefined FUN_141d62fa0(void)

undefined8 * FUN_141d62fa0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x158);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dd4f08;
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    FShaderParameter::Bind(puVar1 + 0x2a,*(undefined8 *)(param_1 + 0x18),L"HitProxyId",1);
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d63030 FUN_141d63030 body=103 status=ok
// SIG undefined FUN_141d63030(void)

undefined8 * FUN_141d63030(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144e50e70;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d630a0 ConstructCompiledInstance body=236 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FODSCapturePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e50da0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xcc) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"LeftEyeTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"RightEyeTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"LeftEyeTextureSampler",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"RightEyeTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d63190 ConstructCompiledInstance body=113 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FOcclusionQueryVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e50f10;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    FStencilingGeometryShaderParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d63210 FUN_141d63210 body=240 status=ok
// SIG undefined FUN_141d63210(void)

undefined8 * FUN_141d63210(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x170);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144e50ea0;
    puVar1[0x2a] = &PTR_LAB_144e50ed0;
    *(undefined4 *)(puVar1 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x15e) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x166) = 0;
    FShaderParameter::Bind(puVar1 + 0x2b,*(undefined8 *)(param_1 + 0x18),L"AccuracyColors",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x15e,*(undefined8 *)(param_1 + 0x18),L"AnalysisParams",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x164,*(undefined8 *)(param_1 + 0x18),L"PrimitiveAlpha",0);
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d63300 FUN_141d63300 body=105 status=ok
// SIG undefined FUN_141d63300(void)

undefined8 * FUN_141d63300(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e50d70;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d63370 ConstructSerializedInstance body=125 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * THZBBuildPS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e50cc0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xda) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined2 *)(puVar1 + 0x1c) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xe2) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d633f0 FUN_141d633f0 body=93 status=ok
// SIG undefined FUN_141d633f0(void)

undefined8 * FUN_141d633f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e510d0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d63450 ConstructSerializedInstance body=57 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TTranslucencyShadowDepthVS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *puVar1 = &PTR_FUN_144e50e70;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d63490 FUN_141d63490 body=73 status=ok
// SIG undefined FUN_141d63490(void)

undefined8 * FUN_141d63490(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e50da0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d634e0 FUN_141d634e0 body=87 status=ok
// SIG undefined FUN_141d634e0(void)

undefined8 * FUN_141d634e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e50f10;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d63540 FUN_141d63540 body=94 status=ok
// SIG undefined FUN_141d63540(void)

undefined8 * FUN_141d63540(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x170);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *puVar1 = &PTR_FUN_144e50ea0;
    puVar1[0x2a] = &PTR_LAB_144e50ed0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    *(undefined2 *)(puVar1 + 0x2d) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141d635a0 FUN_141d635a0 body=4465 status=ok
// SIG undefined FUN_141d635a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141d64497) */

void FUN_141d635a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong *puVar22;
  longlong *plVar23;
  longlong *plVar24;
  uint uVar25;
  int iVar27;
  undefined4 *puVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 auStack_5a8 [32];
  float local_588;
  float local_580;
  float local_578;
  float local_570;
  float local_568;
  undefined8 local_560;
  undefined8 local_558;
  longlong local_550;
  undefined4 local_548;
  undefined4 local_540;
  longlong local_538;
  int local_530;
  int local_52c;
  int local_524;
  int local_520;
  int local_51c;
  int local_518;
  int local_514;
  int local_510;
  int local_50c;
  int local_508 [2];
  undefined8 local_500;
  undefined8 uStack_4f8;
  longlong local_4f0;
  undefined1 local_4e8 [8];
  int local_4e0;
  int iStack_4dc;
  longlong local_4d8;
  longlong local_4d0;
  longlong *local_4c8;
  undefined8 local_4c0;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined2 local_4b0;
  undefined6 uStack_4ae;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined *local_438;
  undefined4 local_430;
  undefined *local_428;
  undefined4 local_420;
  undefined *local_418;
  undefined4 local_410;
  undefined *local_408;
  undefined4 local_400;
  undefined *local_3f8;
  undefined4 local_3f0;
  undefined *local_3e8;
  undefined4 local_3e0;
  undefined *local_3d8;
  undefined4 local_3d0;
  undefined *local_3c8;
  undefined4 local_3c0;
  undefined1 local_3b8 [32];
  undefined8 local_398;
  longlong *plStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  longlong *local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined8 local_34c;
  int local_344 [16];
  undefined1 auStack_304 [4];
  undefined8 local_300;
  undefined4 local_2f8;
  ulonglong local_2f4;
  longlong local_2ec;
  undefined4 local_2e4;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined2 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined2 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined2 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined2 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_254;
  undefined2 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined2 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined2 local_220;
  undefined4 local_218;
  undefined1 local_214;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined2 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined2 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined2 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined2 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined2 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined2 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined2 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined2 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined2 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined4 local_f0 [3];
  undefined8 local_e4 [19];
  undefined1 local_4c;
  ulonglong local_48;
  ulonglong uVar26;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_5a8;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  local_524 = 0;
  iVar27 = *(int *)(param_1 + 0x74);
  local_52c = iVar27;
  local_4d0 = param_1;
  local_4c8 = param_2;
  iVar14 = FSceneViewFamily::GetFeatureLevel(param_1 + 0x10);
  uVar2 = (&DAT_1464c9c48)[iVar14];
  if ((((DAT_146ac3ac0 != 0) && (iVar14 = FUN_1419ef5f0(uVar2), 2 < iVar14)) ||
      (cVar13 = FUN_141ee4480(uVar2), cVar13 != '\0')) && (local_52c = iVar27, iVar27 - 6U < 2)) {
    iVar27 = 0;
    local_52c = 0;
  }
  if (iVar27 != 2) {
    local_358 = 0;
    local_398 = 0;
    plStack_390 = (longlong *)0x0;
    local_388 = 0;
    uStack_380 = 0;
    local_378 = (longlong *)0x0;
    uStack_370 = 0;
    local_368 = 0;
    uStack_360 = 0;
    local_344[3] = 0;
    local_344[4] = 0;
    local_344[5] = 0;
    local_344[6] = 0;
    local_350 = 0;
    local_34c = 0x26;
    local_344[0] = 0;
    local_344[1] = 0;
    local_344[2] = 0;
    local_344[7] = 0;
    local_344[8] = 0;
    local_344[9] = 0;
    local_344[10] = 0;
    local_344[0xb] = 0;
    local_344[0xc] = 0;
    local_344[0xd] = 0;
    local_344[0xe] = 0;
    stack0xfffffffffffffcf8 = 0;
    local_300 = 0;
    local_2f8 = 0;
    local_2f4 = 0;
    local_2ec = 0;
    local_2e4 = 0;
    uStack_360 = FUN_140985530();
    local_358 = FUN_1409853f0();
    local_530 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      local_4d8 = 0;
      plVar24 = local_4c8;
      do {
        puVar22 = (ulonglong *)(param_2 + 6);
        lVar29 = local_4d8 * 0x30d0 + *(longlong *)(param_1 + 0xc0);
        local_538 = lVar29;
        puVar16 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
        uStack_4b4 = 0xffffffff;
        local_500 = 0;
        uStack_4f8 = 0;
        local_4c0 = *puVar16;
        uStack_4b8 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_4b0 = 0x100;
        local_2c0 = 0;
        local_2b8 = 0;
        local_2b4 = 0xffffffff;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2a0 = 0;
        local_29c = 0xffffffff;
        local_298 = 0;
        local_290 = 0;
        local_288 = 0;
        local_284 = 0xffffffff;
        local_280 = 0;
        local_278 = 0;
        local_270 = 0;
        local_26c = 0xffffffff;
        local_268 = 0;
        local_260 = 0;
        local_258 = 0;
        local_254 = 0xffffffff;
        local_250 = 0;
        local_248 = 0;
        local_240 = 0;
        local_23c = 0xffffffff;
        local_238 = 0;
        local_230 = 0;
        local_228 = 0;
        local_224 = 0xffffffff;
        local_220 = 0;
        local_218 = 1;
        local_214 = 0;
        local_210 = 0;
        local_208 = 0;
        local_204 = 0xffffffff;
        local_200 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 0xffffffff;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1d8 = 0;
        local_1d4 = 0xffffffff;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 0xffffffff;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1a8 = 0;
        local_1a4 = 0xffffffff;
        local_1a0 = 0;
        local_198 = 0;
        local_190 = 0;
        local_18c = 0xffffffff;
        local_188 = 0;
        local_180 = 0;
        local_178 = 0;
        local_174 = 0xffffffff;
        local_170 = 0;
        local_168 = 0;
        local_160 = 0;
        local_15c = 0xffffffff;
        local_158 = 0;
        local_150 = 0;
        local_138 = 0;
        local_130 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        lVar18 = 8;
        local_108 = 0;
        uStack_100 = 0;
        puVar16 = local_e4;
        local_f8 = 0;
        local_f0[0] = 0;
        do {
          puVar16[-1] = 1;
          *puVar16 = 0;
          *(undefined4 *)(puVar16 + 1) = 0;
          puVar16 = (undefined8 *)((longlong)puVar16 + 0x14);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        uStack_2d0 = 0xffffffff00000000;
        local_4c = 0;
        local_2c8 = CONCAT62(uStack_4ae,0x100);
        local_2d8 = local_4c0;
        FRHICommandListBase::CacheActiveRenderTargets(param_2,1,&local_2d8,&local_148);
        puVar19 = (undefined8 *)(*puVar22 + 7 & 0xfffffffffffffff8);
        puVar16 = puVar19 + 0x54;
        if ((undefined8 *)param_2[7] < puVar16) {
          FMemStackBase::AllocateNewChunk(puVar22,0x2a8);
          puVar19 = (undefined8 *)(*puVar22 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar19 + 0x54;
        }
        *puVar22 = (ulonglong)puVar16;
        uVar20 = 0;
        *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
        *(undefined8 **)param_2[1] = puVar19;
        param_2[1] = (longlong)(puVar19 + 1);
        puVar19[1] = 0;
        *puVar19 = &PTR_FUN_1444d5488;
        FUN_140c63680(puVar19 + 2,&local_2d8);
        uVar15 = *(uint *)(param_2 + 0x13);
        uVar26 = uVar20;
        if (uVar15 != 0) {
          do {
            lVar18 = param_2[uVar26 * 3 + 0x14];
            if (lVar18 == 0) {
              local_344[uVar26] = 0;
            }
            else {
              local_344[uVar26] = *(int *)(lVar18 + 0x3c);
              local_344[uVar26 + 8] = *(int *)(lVar18 + 0x40);
            }
            auStack_304[uVar26] = (char)param_2[uVar26 * 3 + 0x16];
            *(undefined1 *)((longlong)&local_300 + uVar26 + 4) =
                 *(undefined1 *)((longlong)param_2 + uVar26 * 0x18 + 0xb1);
            if (local_344[uVar26] != 0) {
              local_2e4 = CONCAT22(local_2e4._2_2_,*(undefined2 *)(lVar18 + 0x38));
            }
            uVar25 = (int)uVar26 + 1;
            uVar26 = (ulonglong)uVar25;
          } while (uVar25 < uVar15);
        }
        lVar18 = param_2[0x2c];
        if (lVar18 == 0) {
          local_2f4 = local_2f4 & 0xffffffff00000000;
        }
        else {
          uVar20 = (ulonglong)*(uint *)(lVar18 + 0x3c);
          local_2f4 = *(ulonglong *)(lVar18 + 0x3c);
        }
        local_2ec = param_2[0x2d];
        if ((int)uVar20 != 0) {
          local_2e4 = CONCAT22(local_2e4._2_2_,*(undefined2 *)(lVar18 + 0x38));
        }
        local_34c._4_4_ = uVar15;
        if (iVar27 == 0) {
          if (*(int *)(param_1 + 0x78) == 2) {
            local_368 = FUN_141b9de80();
          }
          else {
            if (*(int *)(param_1 + 0x78) != 1) goto LAB_141d63b71;
            local_368 = FUN_141b9dd40();
          }
        }
        else {
LAB_141d63b71:
          if (DAT_146852b40 == 0) {
            if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
              cVar13 = IsInRenderingThread();
              if (cVar13 == '\0') {
                FScopedEvent::FScopedEvent(local_4e8);
                plVar17 = (longlong *)FUN_14049e3d0(local_3b8,0,0xff);
                lVar18 = *plVar17;
                *(undefined1 **)(lVar18 + 0x10) = &LAB_1404a0f60;
                *(undefined1 **)(lVar18 + 0x18) = local_4e8;
                lVar18 = *plVar17;
                lVar11 = plVar17[2];
                lVar21 = plVar17[1];
                lVar12 = *(longlong *)(lVar18 + 0x28);
                piVar1 = (int *)(lVar12 + 0x48);
                if (lVar12 != 0) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  UNLOCK();
                }
                local_4f0 = lVar12;
                FUN_1404a4fe0(lVar18,lVar21,(int)lVar11,1);
                if (lVar12 != 0) {
                  LOCK();
                  iVar14 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar14 == 1) {
                    FGraphEvent::Recycle(local_4f0);
                  }
                }
                FScopedEvent::~FScopedEvent(local_4e8);
              }
              else {
                lVar18 = operator_new(0x38);
                if (lVar18 == 0) {
                  DAT_146852b40 = 0;
                }
                else {
                  DAT_146852b40 =
                       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar18);
                }
              }
            }
            else {
              lVar18 = operator_new(0x38);
              if (lVar18 == 0) {
                LOCK();
                if (DAT_146852b40 == 0) {
                  DAT_146852b40 = 0;
                }
                UNLOCK();
              }
              else {
                lVar18 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar18);
                LOCK();
                if (DAT_146852b40 != 0) {
                  lVar18 = DAT_146852b40;
                }
                DAT_146852b40 = lVar18;
                UNLOCK();
              }
            }
          }
          local_368 = *(undefined8 *)(DAT_146852b40 + 0x30);
        }
        local_3c0 = 0;
        lVar18 = *(longlong *)(lVar29 + 0x3090);
        local_3c8 = &DAT_146b09c50;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar18 + 0x38,&local_520,&local_3c8);
        if (local_520 == -1) {
          lVar18 = 0;
        }
        else {
          lVar18 = (longlong)local_520 * 0x20 + *(longlong *)(lVar18 + 0x38);
        }
        plVar17 = (longlong *)0x0;
        plVar23 = (longlong *)(lVar18 + 0x10);
        if (lVar18 == 0) {
          plVar23 = plVar17;
        }
        lVar18 = *plVar23;
        local_398 = DAT_1464c2720;
        if (lVar18 == 0) {
          bVar4 = true;
          plVar24 = plVar17;
        }
        else {
          lVar21 = *(longlong *)(lVar18 + 0x48);
          if (*(char *)(lVar21 + 0x28) == '\0') {
            FUN_1419f3850(lVar21);
          }
          plVar17 = *(longlong **)(lVar21 + 0x38);
        }
        lVar21 = 0;
        plStack_390 = plVar17;
        if ((bVar4) && (bVar4 = false, plVar24 != (longlong *)0x0)) {
          LOCK();
          plVar17 = plVar24 + 1;
          lVar12 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            if (((char)plVar24[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar13 = FOutputDevice::CanBeUsedOnAnyThread(), cVar13 == '\0')))) {
              LOCK();
              bVar30 = *(int *)((longlong)plVar24 + 0xc) == 0;
              if (bVar30) {
                *(int *)((longlong)plVar24 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar30) {
                uVar15 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar15 != 0) {
                  lVar21 = (&DAT_1468a81f8)[uVar15 >> 0xe] + (ulonglong)(uVar15 & 0x3fff) * 0x18;
                }
                *(longlong **)(lVar21 + 8) = plVar24;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar24)(plVar24,1);
            }
          }
        }
        local_34c = (ulonglong)local_34c._4_4_ << 0x20;
        if (iVar27 == 0) {
          local_430 = 0;
          lVar21 = *(longlong *)(lVar29 + 0x3090);
          local_438 = &DAT_146a9dcc0;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar21 + 0x38,&local_51c,&local_438);
          if (local_51c == -1) {
            lVar21 = 0;
          }
          else {
            lVar21 = (longlong)local_51c * 0x20 + *(longlong *)(lVar21 + 0x38);
          }
          plVar17 = (longlong *)0x0;
          plVar23 = (longlong *)(lVar21 + 0x10);
          if (lVar21 == 0) {
            plVar23 = plVar17;
          }
          lVar21 = *plVar23;
          if (lVar21 == 0) {
            bVar5 = true;
            local_450 = 0;
          }
          else {
            lVar12 = *(longlong *)(lVar21 + 0x48);
            if (*(char *)(lVar12 + 0x28) == '\0') {
              FUN_1419f3850(lVar12);
            }
            plVar17 = *(longlong **)(lVar12 + 0x40);
          }
          local_378 = plVar17;
          if (bVar5) {
            bVar5 = false;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_450);
          }
          FUN_141ed6ac0(param_2,&local_398,2,1);
          lVar12 = *(longlong *)(lVar21 + 0x48);
          uVar3 = *(undefined8 *)(lVar29 + 0x20);
          if (*(char *)(lVar12 + 0x28) == '\0') {
            FUN_1419f3850(lVar12);
          }
          FUN_141aa9590(lVar21,param_2,*(undefined8 *)(lVar12 + 0x40),uVar3);
          lVar29 = *(longlong *)(lVar21 + 0x48);
          if (*(char *)(lVar29 + 0x28) == '\0') {
            FUN_1419f3850(lVar29);
          }
          local_448 = *(undefined8 *)(lVar29 + 0x40);
          puVar16 = &local_448;
LAB_141d64505:
          lVar29 = local_538;
          local_588 = 2.10195e-44;
          FUN_141aa6800(lVar21 + 0xc0,param_2,puVar16,*(undefined4 *)(local_538 + 0x1a38));
        }
        else {
          if (iVar27 == 1) {
            local_420 = 0;
            lVar21 = *(longlong *)(lVar29 + 0x3090);
            local_428 = &DAT_146a9de10;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar21 + 0x38,&local_518,&local_428);
            if (local_518 == -1) {
              lVar21 = 0;
            }
            else {
              lVar21 = (longlong)local_518 * 0x20 + *(longlong *)(lVar21 + 0x38);
            }
            plVar17 = (longlong *)0x0;
            plVar23 = (longlong *)(lVar21 + 0x10);
            if (lVar21 == 0) {
              plVar23 = plVar17;
            }
            lVar21 = *plVar23;
            if (lVar21 == 0) {
              bVar6 = true;
              local_440 = 0;
            }
            else {
              lVar12 = *(longlong *)(lVar21 + 0x48);
              if (*(char *)(lVar12 + 0x28) == '\0') {
                FUN_1419f3850(lVar12);
              }
              plVar17 = *(longlong **)(lVar12 + 0x40);
            }
            local_378 = plVar17;
            if (bVar6) {
              bVar6 = false;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_440);
            }
            FUN_141ed6ac0(param_2,&local_398,2,1);
            lVar12 = *(longlong *)(lVar21 + 0x48);
            uVar3 = *(undefined8 *)(lVar29 + 0x20);
            if (*(char *)(lVar12 + 0x28) == '\0') {
              FUN_1419f3850(lVar12);
            }
            FUN_141aa9590(lVar21,param_2,*(undefined8 *)(lVar12 + 0x40),uVar3);
            lVar29 = *(longlong *)(lVar21 + 0x48);
            if (*(char *)(lVar29 + 0x28) == '\0') {
              FUN_1419f3850(lVar29);
            }
            local_4a8 = *(undefined8 *)(lVar29 + 0x40);
            puVar16 = &local_4a8;
            goto LAB_141d64505;
          }
          if (iVar27 == 3) {
            local_410 = 0;
            lVar21 = *(longlong *)(lVar29 + 0x3090);
            local_418 = &DAT_146a9df60;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar21 + 0x38,local_508,&local_418);
            if (local_508[0] == -1) {
              lVar21 = 0;
            }
            else {
              lVar21 = (longlong)local_508[0] * 0x20 + *(longlong *)(lVar21 + 0x38);
            }
            plVar17 = (longlong *)0x0;
            plVar23 = (longlong *)(lVar21 + 0x10);
            if (lVar21 == 0) {
              plVar23 = plVar17;
            }
            lVar21 = *plVar23;
            if (lVar21 == 0) {
              bVar7 = true;
              local_4a0 = 0;
            }
            else {
              lVar12 = *(longlong *)(lVar21 + 0x48);
              if (*(char *)(lVar12 + 0x28) == '\0') {
                FUN_1419f3850(lVar12);
              }
              plVar17 = *(longlong **)(lVar12 + 0x40);
            }
            local_378 = plVar17;
            if (bVar7) {
              bVar7 = false;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_4a0);
            }
            FUN_141ed6ac0(param_2,&local_398,2,1);
            lVar12 = *(longlong *)(lVar21 + 0x48);
            uVar3 = *(undefined8 *)(lVar29 + 0x20);
            if (*(char *)(lVar12 + 0x28) == '\0') {
              FUN_1419f3850(lVar12);
            }
            FUN_141aa9590(lVar21,param_2,*(undefined8 *)(lVar12 + 0x40),uVar3);
            lVar29 = *(longlong *)(lVar21 + 0x48);
            if (*(char *)(lVar29 + 0x28) == '\0') {
              FUN_1419f3850(lVar29);
            }
            local_498 = *(undefined8 *)(lVar29 + 0x40);
            puVar16 = &local_498;
            goto LAB_141d64505;
          }
          if (iVar27 == 4) {
            local_400 = 0;
            lVar21 = *(longlong *)(lVar29 + 0x3090);
            local_408 = &DAT_146a9e0b0;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar21 + 0x38,&local_514,&local_408);
            if (local_514 == -1) {
              lVar21 = 0;
            }
            else {
              lVar21 = (longlong)local_514 * 0x20 + *(longlong *)(lVar21 + 0x38);
            }
            plVar17 = (longlong *)0x0;
            plVar23 = (longlong *)(lVar21 + 0x10);
            if (lVar21 == 0) {
              plVar23 = plVar17;
            }
            lVar21 = *plVar23;
            if (lVar21 == 0) {
              bVar8 = true;
              local_490 = 0;
            }
            else {
              lVar12 = *(longlong *)(lVar21 + 0x48);
              if (*(char *)(lVar12 + 0x28) == '\0') {
                FUN_1419f3850(lVar12);
              }
              plVar17 = *(longlong **)(lVar12 + 0x40);
            }
            local_378 = plVar17;
            if (bVar8) {
              bVar8 = false;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_490);
            }
            FUN_141ed6ac0(param_2,&local_398,2,1);
            lVar12 = *(longlong *)(lVar21 + 0x48);
            uVar3 = *(undefined8 *)(lVar29 + 0x20);
            if (*(char *)(lVar12 + 0x28) == '\0') {
              FUN_1419f3850(lVar12);
            }
            FUN_141aa9590(lVar21,param_2,*(undefined8 *)(lVar12 + 0x40),uVar3);
            lVar29 = *(longlong *)(lVar21 + 0x48);
            if (*(char *)(lVar29 + 0x28) == '\0') {
              FUN_1419f3850(lVar29);
            }
            local_488 = *(undefined8 *)(lVar29 + 0x40);
            puVar16 = &local_488;
            goto LAB_141d64505;
          }
          if (*(int *)(local_4d0 + 0x74) == 5) {
            local_3f0 = 0;
            lVar21 = *(longlong *)(lVar29 + 0x3090);
            local_3f8 = &DAT_146a9e200;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar21 + 0x38,&local_510,&local_3f8);
            if (local_510 == -1) {
              lVar21 = 0;
            }
            else {
              lVar21 = (longlong)local_510 * 0x20 + *(longlong *)(lVar21 + 0x38);
            }
            plVar17 = (longlong *)0x0;
            plVar23 = (longlong *)(lVar21 + 0x10);
            if (lVar21 == 0) {
              plVar23 = plVar17;
            }
            lVar21 = *plVar23;
            if (lVar21 == 0) {
              bVar9 = true;
              local_480 = 0;
            }
            else {
              lVar12 = *(longlong *)(lVar21 + 0x48);
              if (*(char *)(lVar12 + 0x28) == '\0') {
                FUN_1419f3850(lVar12);
              }
              plVar17 = *(longlong **)(lVar12 + 0x40);
            }
            local_378 = plVar17;
            if (bVar9) {
              bVar9 = false;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_480);
            }
            FUN_141ed6ac0(param_2,&local_398,2,1);
            lVar12 = *(longlong *)(lVar21 + 0x48);
            uVar3 = *(undefined8 *)(lVar29 + 0x20);
            if (*(char *)(lVar12 + 0x28) == '\0') {
              FUN_1419f3850(lVar12);
            }
            FUN_141aa9590(lVar21,param_2,*(undefined8 *)(lVar12 + 0x40),uVar3);
            lVar29 = *(longlong *)(lVar21 + 0x48);
            if (*(char *)(lVar29 + 0x28) == '\0') {
              FUN_1419f3850(lVar29);
            }
            local_478 = *(undefined8 *)(lVar29 + 0x40);
            puVar16 = &local_478;
            goto LAB_141d64505;
          }
          if (iVar27 == 6) {
            local_3e0 = 0;
            lVar21 = *(longlong *)(lVar29 + 0x3090);
            local_3e8 = &DAT_146a9e350;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar21 + 0x38,&local_50c,&local_3e8);
            if (local_50c == -1) {
              lVar21 = 0;
            }
            else {
              lVar21 = (longlong)local_50c * 0x20 + *(longlong *)(lVar21 + 0x38);
            }
            plVar17 = (longlong *)0x0;
            plVar23 = (longlong *)(lVar21 + 0x10);
            if (lVar21 == 0) {
              plVar23 = plVar17;
            }
            lVar21 = *plVar23;
            if (lVar21 == 0) {
              bVar10 = true;
              local_470 = 0;
            }
            else {
              lVar12 = *(longlong *)(lVar21 + 0x48);
              if (*(char *)(lVar12 + 0x28) == '\0') {
                FUN_1419f3850(lVar12);
              }
              plVar17 = *(longlong **)(lVar12 + 0x40);
            }
            local_378 = plVar17;
            if (bVar10) {
              bVar10 = false;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_470);
            }
            FUN_141ed6ac0(param_2,&local_398,2,1);
            lVar12 = *(longlong *)(lVar21 + 0x48);
            uVar3 = *(undefined8 *)(lVar29 + 0x20);
            if (*(char *)(lVar12 + 0x28) == '\0') {
              FUN_1419f3850(lVar12);
            }
            FUN_141aa9590(lVar21,param_2,*(undefined8 *)(lVar12 + 0x40),uVar3);
            lVar29 = *(longlong *)(lVar21 + 0x48);
            if (*(char *)(lVar29 + 0x28) == '\0') {
              FUN_1419f3850(lVar29);
            }
            local_468 = *(undefined8 *)(lVar29 + 0x40);
            puVar16 = &local_468;
            goto LAB_141d64505;
          }
          if (iVar27 == 7) {
            local_3d0 = 0;
            lVar21 = *(longlong *)(lVar29 + 0x3090);
            local_3d8 = &DAT_146a9e4a0;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar21 + 0x38,&local_524,&local_3d8);
            if (local_524 == -1) {
              lVar21 = 0;
            }
            else {
              lVar21 = (longlong)local_524 * 0x20 + *(longlong *)(lVar21 + 0x38);
            }
            plVar17 = (longlong *)0x0;
            plVar23 = (longlong *)(lVar21 + 0x10);
            if (lVar21 == 0) {
              plVar23 = plVar17;
            }
            lVar21 = *plVar23;
            if (lVar21 == 0) {
              local_460 = 0;
            }
            else {
              lVar12 = *(longlong *)(lVar21 + 0x48);
              if (*(char *)(lVar12 + 0x28) == '\0') {
                FUN_1419f3850(lVar12);
              }
              plVar17 = *(longlong **)(lVar12 + 0x40);
            }
            local_378 = plVar17;
            FUN_141ed6ac0(param_2,&local_398,2,1);
            lVar12 = *(longlong *)(lVar21 + 0x48);
            uVar3 = *(undefined8 *)(lVar29 + 0x20);
            if (*(char *)(lVar12 + 0x28) == '\0') {
              FUN_1419f3850(lVar12);
            }
            FUN_141aa9590(lVar21,param_2,*(undefined8 *)(lVar12 + 0x40),uVar3);
            lVar29 = *(longlong *)(lVar21 + 0x48);
            if (*(char *)(lVar29 + 0x28) == '\0') {
              FUN_1419f3850(lVar29);
            }
            local_458 = *(undefined8 *)(lVar29 + 0x40);
            puVar16 = &local_458;
            goto LAB_141d64505;
          }
        }
        lVar21 = *(longlong *)(lVar18 + 0x48);
        uVar3 = *(undefined8 *)(lVar29 + 0x20);
        if (*(char *)(lVar21 + 0x28) == '\0') {
          FUN_1419f3850(lVar21);
        }
        FUN_141aa9800(lVar18,param_2,*(undefined8 *)(lVar21 + 0x38),uVar3);
        lVar21 = FSceneRenderTargets::Get(param_2);
        local_4e0 = *(int *)(lVar29 + 0x380) - *(int *)(lVar29 + 0x378);
        local_558 = *(undefined8 *)(lVar21 + 0x378);
        iStack_4dc = *(int *)(lVar29 + 900) - *(int *)(lVar29 + 0x37c);
        local_578 = (float)*(int *)(lVar29 + 0x1aa4);
        local_540 = 1;
        local_548 = 1;
        local_560 = CONCAT44(iStack_4dc,local_4e0);
        local_588 = (float)(*(int *)(lVar29 + 0x1aac) - *(int *)(lVar29 + 0x1aa4));
        local_570 = (float)(*(int *)(lVar29 + 0x1aa8) - *(int *)(lVar29 + 0x1aa0));
        local_580 = (float)*(int *)(lVar29 + 0x1aa0);
        local_568 = local_588;
        local_550 = lVar18;
        DrawRectangle(param_2);
        lVar29 = 8;
        puVar28 = local_f0;
        do {
          puVar16 = *(undefined8 **)(puVar28 + -2);
          puVar28 = puVar28 + -2;
          lVar29 = lVar29 + -1;
          if (puVar16 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar16 + 1);
            iVar27 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar27 == 1) {
              if ((*(char *)(puVar16 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar13 = FOutputDevice::CanBeUsedOnAnyThread(), cVar13 == '\0')))) {
                LOCK();
                bVar30 = *(int *)((longlong)puVar16 + 0xc) == 0;
                if (bVar30) {
                  *(int *)((longlong)puVar16 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar30) {
                  uVar15 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar15 == 0) {
                    lVar18 = 0;
                  }
                  else {
                    lVar18 = (&DAT_1468a81f8)[uVar15 >> 0xe] + (ulonglong)(uVar15 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar18 + 8) = puVar16;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar16)(puVar16);
              }
            }
          }
        } while (lVar29 != 0);
        local_530 = local_530 + 1;
        local_4d8 = local_4d8 + 1;
        param_1 = local_4d0;
        param_2 = local_4c8;
        iVar27 = local_52c;
      } while (local_530 < *(int *)(local_4d0 + 200));
    }
  }
  return;
}



// FUNCTION 141d64720 FUN_141d64720 body=637 status=ok
// SIG undefined FUN_141d64720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d64720(longlong param_1,longlong param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  char local_res8 [8];
  char local_res10 [8];
  char local_res18 [8];
  char local_res20 [8];
  
  local_res8[0] = '\x01';
  local_res20[0] = '\0';
  local_res10[0] = '\x01';
  local_res18[0] = '\0';
  (**(code **)(**(longlong **)(param_2 + 8) + 0x88))
            (*(longlong **)(param_2 + 8),*(undefined8 *)(param_1 + 0x30),local_res8,local_res20,
             local_res10,local_res18);
  if ((local_res20[0] == '\0') || (local_res8[0] == '\0')) goto LAB_141d648d7;
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x180);
  uVar5 = uVar9 >> 3;
  if (((uVar5 & 1) != 0) &&
     (((*(uint *)(*(longlong *)(param_2 + 8) + 0x18) >> 0x13 & 1) != 0 &&
      ((*(byte *)(*(longlong *)(param_2 + 8) + 0x1c) & 1) == 0)))) goto LAB_141d648d7;
  if (((uVar9 >> 6 & 1) == 0) || ((*(uint *)(*(longlong *)(param_2 + 8) + 0x1c) >> 6 & 1) == 0)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  cVar2 = *(char *)(*(longlong *)(param_1 + 0x30) + 0x188);
  if ((cVar2 == '\0') && ((*(uint *)(*(longlong *)(param_2 + 8) + 0x1c) >> 0xc & 1) != 0)) {
    cVar7 = '\x01';
LAB_141d64809:
    if ((((uVar5 & 1) == 0) && (cVar6 == '\0')) && (cVar7 == '\0')) goto LAB_141d648d7;
  }
  else {
    cVar7 = '\0';
    if (cVar2 == '\0') goto LAB_141d64809;
  }
  puVar4 = DAT_146a99070;
  if (DAT_146a99070 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FMemory::Malloc(0x3fd8,0);
    puVar10 = puVar4;
    uVar9 = 0;
    do {
      uVar5 = uVar9 + 2;
      puVar8 = (undefined8 *)((ulonglong)(uVar9 * 0x48 + 0x48) + (longlong)puVar4);
      *puVar10 = puVar8;
      puVar10 = (undefined8 *)((ulonglong)(uVar9 * 0x48 + 0x90) + (longlong)puVar4);
      *puVar8 = puVar10;
      uVar9 = uVar5;
    } while (uVar5 < 0xe2);
    *puVar10 = DAT_146a99070;
    _DAT_146a99078 = _DAT_146a99078 + 0xe3;
  }
  DAT_146a99070 = (undefined8 *)*puVar4;
  _DAT_146a9907c = _DAT_146a9907c + 1;
  FUN_141d59720(puVar4,param_1,param_2,local_res8[0],local_res10[0],local_res18[0],cVar6,cVar7);
LAB_141d648d7:
  if (((*(char *)(*(longlong *)(param_1 + 0x30) + 0x188) == '\0') && (local_res8[0] == '\0')) &&
     ((local_res10[0] != '\0' && (local_res18[0] == '\0')))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a9e678) &&
       (_Init_thread_header(&DAT_146a9e678), DAT_146a9e678 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146a9e670 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.Shadow.OmitAlwaysShadowedPrimitives");
      _Init_thread_footer(&DAT_146a9e678);
    }
    if ((DAT_146a9e670 != (longlong *)0x0) &&
       (iVar3 = (**(code **)(*DAT_146a9e670 + 0x68))(), 0 < iVar3)) {
      puVar1 = (uint *)(*(longlong *)(param_2 + 8) + 0x1c);
      *puVar1 = *puVar1 | 0x8000;
    }
  }
  return;
}



// FUNCTION 141d649a0 FUN_141d649a0 body=216 status=ok
// SIG undefined FUN_141d649a0(void)

void FUN_141d649a0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar2 = operator_new(0x30d0);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_141d5a500(lVar2,param_4);
  }
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
  }
  *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar3;
  puVar4 = (undefined8 *)(**(code **)(*(longlong *)param_3[3] + 8))();
  FUN_141ad74f0(param_2,*puVar4,0,4,0x22,0);
  lVar2 = *(longlong *)*param_3;
  *(undefined4 *)(lVar2 + 0x1aa0) = *(undefined4 *)(lVar2 + 0x368);
  *(undefined4 *)(lVar2 + 0x1aa4) = *(undefined4 *)(lVar2 + 0x36c);
  *(undefined4 *)(lVar2 + 0x1aa8) = *(undefined4 *)(lVar2 + 0x370);
  *(undefined4 *)(lVar2 + 0x1aac) = *(undefined4 *)(lVar2 + 0x374);
  FUN_141d6ab00();
  return;
}



// FUNCTION 141d64a80 FUN_141d64a80 body=117 status=ok
// SIG undefined FUN_141d64a80(void)

undefined8 FUN_141d64a80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 2) {
    lVar1 = operator_new(0x2e8);
    if (lVar1 != 0) {
      uVar2 = FUN_141b8b910(lVar1,param_1,param_2);
      return uVar2;
    }
  }
  else {
    lVar1 = operator_new(0x300);
    if (lVar1 != 0) {
      uVar2 = FUN_141afa220(lVar1,param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 141d64b00 FUN_141d64b00 body=808 status=ok
// SIG undefined FUN_141d64b00(void)

undefined8 *
FUN_141d64b00(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8,
             byte param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
             undefined4 param_13)

{
  char cVar1;
  undefined1 uVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uStackX_24;
  undefined8 *local_208;
  undefined4 uStack_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_d8 [32];
  longlong local_b8;
  uint local_b0;
  undefined8 *local_30;
  
  FUN_14237e4d0(&local_1b8);
  puVar6 = (undefined8 *)0x0;
  local_100 = (undefined4)param_4;
  uVar7 = 0;
  local_f8 = 0;
  local_108 = 0;
  local_188 = *param_5;
  uStack_180 = param_5[1];
  local_178 = param_5[2];
  uStack_170 = param_5[3];
  local_168 = param_5[4];
  uStack_160 = param_5[5];
  local_158 = param_5[6];
  uStack_150 = param_5[7];
  local_1b8 = *param_6;
  local_1b0 = *(undefined4 *)(param_6 + 1);
  local_148 = *param_7;
  uStack_140 = param_7[1];
  local_138 = param_7[2];
  uStack_130 = param_7[3];
  local_128 = param_7[4];
  uStack_120 = param_7[5];
  local_118 = *(undefined4 *)(param_7 + 6);
  uStack_114 = *(undefined4 *)((longlong)param_7 + 0x34);
  uStack_110 = *(undefined4 *)(param_7 + 7);
  uStack_10c = *(undefined4 *)((longlong)param_7 + 0x3c);
  uStackX_24 = (undefined4)((ulonglong)param_4 >> 0x20);
  local_f4 = param_13;
  local_fc = uStackX_24;
  FUN_1423970f0(&local_1b8,param_2);
  if ((*(char *)(param_2 + 0x318) != '\0') || (*(char *)(param_2 + 0x31a) != '\0')) {
    uVar7 = 1;
  }
  local_1e0 = *(undefined4 *)(param_2 + 0x378);
  local_1e8 = *(undefined8 *)(param_2 + 0x370);
  local_1bc = local_1bc & 0xfffffff4 | 4;
  local_1dc = 0xffffffff;
  local_1d8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0x3f80000000000000;
  local_1c0 = 0;
  local_1f8 = param_3;
  local_1f0 = param_1;
  if (((param_1 != (longlong *)0x0) &&
      (lVar4 = (**(code **)(*param_1 + 0x208))(param_1), lVar4 != 0)) &&
     ((cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 != '\0' ||
      ((DAT_1468c21ae == '\0' || (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)))))) {
    local_1d0 = CONCAT44(*(undefined4 *)(lVar4 + 0x7b0),*(undefined4 *)(lVar4 + 0x790));
    local_1bc = local_1bc | 8;
    uStack_1c8 = CONCAT44(uStack_1c8._4_4_,*(undefined4 *)(lVar4 + 0x798));
    local_1c0 = FUN_1428ccc70(lVar4);
  }
  local_1bc = (param_9 ^ 1) << 2 | local_1bc & 0xfffffffa | uVar7;
  FUN_142743490(local_d8,&local_1f8);
  local_208 = &local_1b8;
  uStack_200 = 1;
  uVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
  FUN_141d75db0(local_d8,param_2,&local_208,param_8,param_9,0,uVar2,param_10,param_11,param_12);
  local_b0 = local_b0 & 0xfeffffff;
  puVar5 = (undefined8 *)operator_new(0x20);
  local_30 = puVar6;
  if (puVar5 != (undefined8 *)0x0) {
    FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
              (puVar5,local_d8,0x3f800000,0,0x3f800000);
    *puVar5 = &PTR_FUN_1450e89a0;
    local_30 = puVar5;
  }
  if (*(int *)(local_b8 + 8) < 2) {
    lVar4 = operator_new(0x2e8);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)FUN_141b8b910(lVar4,local_d8,0);
    }
  }
  else {
    lVar4 = operator_new(0x300);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)FUN_141afa220(lVar4,local_d8,0);
    }
  }
  FUN_142745e10(local_d8);
  return puVar6;
}



// FUNCTION 141d64e30 FUN_141d64e30 body=330 status=ok
// SIG undefined FUN_141d64e30(void)

void * FUN_141d64e30(void *param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_res20;
  
  if (DAT_146a9db98 == 0) {
    _Dst = (void *)FMemory::Malloc(0x30d0,0x10);
  }
  else {
    iVar1 = DAT_146a9db98 + -1;
    _Dst = *(void **)(DAT_146a9db90 + (longlong)iVar1 * 8);
    iVar2 = (DAT_146a9db98 - iVar1) + -1;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(DAT_146a9db90 + (longlong)iVar1 * 8),
                 (void *)(DAT_146a9db90 + (longlong)DAT_146a9db98 * 8),(longlong)iVar2 << 3);
    }
    DAT_146a9db98 = DAT_146a9db98 + -1;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,param_1,0x30d0);
  local_res18 = 0;
  puVar4 = (undefined8 *)((longlong)_Dst + 0x38);
  local_res20 = 4;
  *(undefined8 *)((longlong)_Dst + 0x20) = 0;
  *(undefined8 *)((longlong)_Dst + 0x28) = 0;
  local_res10 = 0;
  do {
    *puVar4 = local_res10;
    puVar3 = (undefined8 *)FUN_141b9c500();
    TRefCountPtr<FRHIIndexBuffer>::operator=(puVar4,*puVar3);
    puVar4 = puVar4 + 1;
    local_res20 = local_res20 + -1;
  } while (local_res20 != 0);
  *(undefined8 *)((longlong)_Dst + 0x1ab8) = 0;
  *(undefined1 *)((longlong)_Dst + 0x3098) = 1;
  iVar1 = DAT_146a9db88;
  lVar5 = (longlong)DAT_146a9db88;
  DAT_146a9db88 = DAT_146a9db88 + 1;
  if (DAT_146a9db8c < DAT_146a9db88) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146a9db80,iVar1);
  }
  *(void **)(DAT_146a9db80 + lVar5 * 8) = _Dst;
  FMemory::operator_delete(0,0xf30);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
  return _Dst;
}



// FUNCTION 141d64f80 FUN_141d64f80 body=332 status=ok
// SIG undefined FUN_141d64f80(void)

undefined8 * FUN_141d64f80(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144e514a8;
  *(undefined1 *)(plVar6 + 6) = 0;
  plVar6[7] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d650d0 FUN_141d650d0 body=332 status=ok
// SIG undefined FUN_141d650d0(void)

undefined8 * FUN_141d650d0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144e514b8;
  *(undefined1 *)(plVar6 + 7) = 0;
  plVar6[8] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d65220 FUN_141d65220 body=332 status=ok
// SIG undefined FUN_141d65220(void)

undefined8 * FUN_141d65220(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144e514d8;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d65370 FUN_141d65370 body=332 status=ok
// SIG undefined FUN_141d65370(void)

undefined8 * FUN_141d65370(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144e51488;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d654c0 FUN_141d654c0 body=332 status=ok
// SIG undefined FUN_141d654c0(void)

undefined8 * FUN_141d654c0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144e514c8;
  *(undefined1 *)(plVar6 + 6) = 0;
  plVar6[7] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d65610 FUN_141d65610 body=332 status=ok
// SIG undefined FUN_141d65610(void)

undefined8 * FUN_141d65610(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144e514e8;
  *(undefined1 *)((longlong)plVar6 + 0x11) = 0;
  plVar6[3] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d65760 FUN_141d65760 body=332 status=ok
// SIG undefined FUN_141d65760(void)

undefined8 * FUN_141d65760(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144e514f8;
  *(undefined1 *)((longlong)plVar6 + 0x11) = 0;
  plVar6[3] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d658b0 FUN_141d658b0 body=332 status=ok
// SIG undefined FUN_141d658b0(void)

undefined8 * FUN_141d658b0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144e51498;
  *(undefined1 *)(plVar6 + 8) = 0;
  plVar6[9] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141d65a00 CreateTask body=372 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FClearSnapshotsAndDeleteSceneRendererTask>::CreateTask
          (undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR_FUN_144e51410;
  *(undefined1 *)(plVar8 + 3) = 0;
  plVar8[4] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 141d65b80 FUN_141d65b80 body=268 status=ok
// SIG undefined FUN_141d65b80(void)

undefined8 FUN_141d65b80(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_30 [5];
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    local_30[0] = *param_2;
    uVar3 = *(undefined8 *)(local_30[0] + 0x60);
    if (local_30[0] != 0) {
      LOCK();
      *(int *)(local_30[0] + 8) = *(int *)(local_30[0] + 8) + 1;
      UNLOCK();
    }
    puVar1[1] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144dd54c8;
    puVar1[2] = local_30[0];
    if (local_30[0] != 0) {
      LOCK();
      *(int *)(local_30[0] + 8) = *(int *)(local_30[0] + 8) + 1;
      UNLOCK();
    }
    puVar1[3] = uVar3;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_30);
  }
  uVar3 = 0;
  lVar2 = operator_new(0x1b0);
  if (lVar2 != 0) {
    uVar3 = FCanvas::FCanvas(lVar2,puVar1,0,param_3,param_3,param_4,*(undefined4 *)(param_1 + 8),
                             0x3f800000);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2);
  return uVar3;
}



// FUNCTION 141d65c90 DelayWaitForTasksClearSnapshotsAndDeleteSceneRenderer body=346 status=ok
// SIG undefined DelayWaitForTasksClearSnapshotsAndDeleteSceneRenderer(void)

void FSceneRenderer::DelayWaitForTasksClearSnapshotsAndDeleteSceneRenderer
               (undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 local_48 [32];
  
  uVar8 = FTaskGraphInterface::Get();
  plVar9 = (longlong *)
           TGraphTask<FClearSnapshotsAndDeleteSceneRendererTask>::CreateTask
                     (local_48,uVar8,DAT_1464a8210);
  *(undefined8 *)(*plVar9 + 0x10) = param_2;
  lVar4 = *plVar9;
  lVar7 = plVar9[2];
  lVar5 = plVar9[1];
  lVar6 = *(longlong *)(lVar4 + 0x20);
  piVar1 = (int *)(lVar6 + 0x48);
  if (lVar6 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_141d74090(lVar4,lVar5,(int)lVar7,1);
  plVar9 = (longlong *)
           ((ulonglong)(*(longlong *)(uVar8 + 0x20) != 0) - 1 & uVar8 | *(ulonglong *)(uVar8 + 0x20)
           );
  for (iVar10 = *(int *)(uVar8 + 0x28); iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      LOCK();
      piVar2 = (int *)(*plVar9 + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar9 = plVar9 + 1;
  }
  iVar10 = 0;
  *(undefined4 *)(uVar8 + 0x28) = 0;
  iVar3 = 0;
  if (*(int *)(uVar8 + 0x2c) != 0) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(uVar8,0);
    iVar3 = *(int *)(uVar8 + 0x2c);
    iVar10 = *(int *)(uVar8 + 0x28);
  }
  *(int *)(uVar8 + 0x28) = iVar10 + 1;
  if (iVar3 < iVar10 + 1) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (uVar8,iVar10);
  }
  *(longlong *)
   (((ulonglong)(*(longlong *)(uVar8 + 0x20) != 0) - 1 & uVar8 | *(ulonglong *)(uVar8 + 0x20)) +
   (longlong)iVar10 * 8) = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar9 + 0x30))(plVar9,DAT_1464a8214);
  if (lVar6 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(lVar6);
    }
  }
  return;
}



// FUNCTION 141d65df0 FUN_141d65df0 body=916 status=ok
// SIG undefined FUN_141d65df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d65df0(void)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  char in_R9B;
  ulonglong uVar16;
  int local_58 [2];
  longlong local_50;
  void *local_48;
  undefined8 local_40;
  undefined1 local_38 [32];
  
  if (0 < (int)DAT_146a98ee8) {
    LOCK();
    DAT_146a98d34 = DAT_146a98d34 + DAT_146a98ee8;
    UNLOCK();
    uVar16 = (ulonglong)DAT_146a98ee8;
    uVar13 = 0;
    do {
      iVar2 = DAT_146a98ee8 - 1;
      lVar14 = *(longlong *)(DAT_146a98ee0 + (longlong)iVar2 * 8);
      iVar7 = (DAT_146a98ee8 - iVar2) + -1;
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(DAT_146a98ee0 + (longlong)iVar2 * 8),
                   (void *)(DAT_146a98ee0 + (longlong)(int)DAT_146a98ee8 * 8),(longlong)iVar7 << 3);
      }
      DAT_146a98ee8 = DAT_146a98ee8 - 1;
      local_48 = (void *)0x0;
      local_40 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"NULL",10);
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_1464c2ff0,local_58,lVar14);
      uVar15 = uVar13;
      if (local_58[0] != -1) {
        uVar15 = DAT_1464c2ff0 + (longlong)local_58[0] * 0x18;
      }
      uVar12 = uVar15 + 8;
      if (uVar15 == 0) {
        uVar12 = uVar13;
      }
      if ((uVar12 != 0) && (lVar9 = FWeakObjectPtr::Get(), lVar9 != 0)) {
        *(undefined8 *)(lVar9 + 0x388) = 0;
        if (&local_48 != (void **)(lVar9 + 0x398)) {
          iVar2 = *(int *)(lVar9 + 0x3a0);
          _Src = *(void **)(lVar9 + 0x398);
          local_40 = CONCAT44(local_40._4_4_,iVar2);
          if ((iVar2 == 0) && (local_40._4_4_ == 0)) {
            local_40 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar2);
            _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      if (((DAT_146ac3ac6 == '\0') || (cVar6 = IsInRenderingThread(), cVar6 == '\0')) &&
         ((DAT_146ac3ac5 != '\0' ||
          (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 == '\0' && (DAT_1468c21ae != '\0')) &&
           (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)))))) {
        plVar11 = (longlong *)FUN_141d65220(local_38,0,0xff);
        *(longlong *)(*plVar11 + 0x10) = lVar14;
        lVar14 = *plVar11;
        lVar5 = plVar11[2];
        lVar9 = plVar11[1];
        lVar3 = *(longlong *)(lVar14 + 0x20);
        piVar1 = (int *)(lVar3 + 0x48);
        if (lVar3 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_50 = lVar3;
        FUN_140445100(lVar14,lVar9,(int)lVar5,1);
        if (lVar3 != 0) {
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(local_50);
          }
        }
      }
      else {
        uVar10 = FBaseGraphTask::GetSmallTaskAllocator();
        *(undefined4 *)(lVar14 + 0x274) = 0xffffff9d;
        FUN_141d7b5e0(uVar10,lVar14,1);
        LOCK();
        DAT_146a98d34 = DAT_146a98d34 + -1;
        UNLOCK();
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    if (in_R9B != '\0') {
      FUN_141ee24f0(0);
    }
    TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
    ::Empty(&DAT_1464c2ff0,0);
    bVar4 = false;
    DAT_146531d9c = DAT_146531d9c + 1;
    lVar14 = (longlong)(DAT_146531d90 + -1);
    if (-1 < DAT_146531d90 + -1) {
      lVar9 = lVar14 << 4;
      bVar4 = false;
      do {
        if (((*(int *)(lVar9 + 8 + DAT_146531d88) == 0) ||
            (*(longlong **)(lVar9 + DAT_146531d88) == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(**(longlong **)(lVar9 + DAT_146531d88) + 0x40))(), cVar6 == '\0'))
        {
          bVar4 = true;
        }
        lVar9 = lVar9 + -0x10;
        lVar14 = lVar14 + -1;
      } while (-1 < lVar14);
    }
    iVar2 = DAT_146531d90;
    DAT_146531d9c = DAT_146531d9c + -1;
    if ((bVar4) && (DAT_146531d9c < 1)) {
      uVar16 = uVar13;
      if (0 < DAT_146531d90) {
        do {
          if (((*(int *)(uVar13 + 8 + DAT_146531d88) == 0) ||
              (*(longlong **)(uVar13 + DAT_146531d88) == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(**(longlong **)(uVar13 + DAT_146531d88) + 0x10))(), cVar6 != '\0'
             )) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146531d88,uVar16,1,1);
          }
          else {
            uVar16 = (ulonglong)((int)uVar16 + 1);
            uVar13 = uVar13 + 0x10;
          }
        } while ((int)uVar16 < DAT_146531d90);
      }
      _DAT_146531d98 = DAT_146531d90 * 2;
      if (_DAT_146531d98 < 3) {
        _DAT_146531d98 = 2;
      }
      if ((_DAT_146531d98 < iVar2) && (DAT_146531d94 != DAT_146531d90)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146531d88);
      }
    }
  }
  return;
}



// FUNCTION 141d66190 FUN_141d66190 body=168 status=ok
// SIG undefined FUN_141d66190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d66190(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_141d69180();
    if ((*(uint *)((longlong)param_1 + 0x44) & 0x100) != 0) {
      *(int *)(param_1[1] + 0xe0) = *(int *)(param_1[1] + 0xe0) + -1;
      FUN_141d1f210(param_1[1]);
    }
    uVar1 = 0;
    if (param_1[3] != 0) {
      *(undefined8 *)(param_1[3] + 0x10) = param_1[2];
      uVar1 = param_1[3];
    }
    *(undefined8 *)param_1[2] = uVar1;
    uVar1 = 0;
    if (param_1[7] != 0) {
      *(undefined8 *)(param_1[7] + 0x30) = param_1[6];
      uVar1 = param_1[7];
    }
    *(undefined8 *)param_1[6] = uVar1;
    if (param_1[5] != 0) {
      *(undefined8 *)(param_1[5] + 0x20) = param_1[4];
    }
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      *(undefined8 *)param_1[4] = param_1[5];
    }
    _DAT_146a9907c = _DAT_146a9907c + -1;
    *param_1 = DAT_146a99070;
    DAT_146a99070 = param_1;
  }
  return;
}



// FUNCTION 141d66240 FUN_141d66240 body=135 status=ok
// SIG undefined FUN_141d66240(void)

void FUN_141d66240(longlong *param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      (**(code **)(param_1[4] + 0x30))(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x000141d6628f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))(param_1,1);
      return;
    }
  }
  plVar3 = param_1 + 4;
  if (param_1 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  FUN_141edf360(plVar3);
  plVar3 = param_1 + 3;
  if (param_1 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  BeginCleanup(plVar3);
  return;
}



// FUNCTION 141d662d0 FUN_141d662d0 body=777 status=ok
// SIG undefined FUN_141d662d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d662d0(longlong *param_1,undefined1 param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar14;
  undefined1 auStack_b8 [32];
  longlong local_98;
  int local_90;
  int local_88;
  undefined1 local_80;
  longlong local_70 [4];
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong uVar13;
  
  uVar4 = DAT_1464a8214;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar13 = 0;
  if (*(char *)((longlong)param_1 + 0x79) != '\0') {
    plVar14 = (longlong *)param_1[0x12];
    plVar7 = plVar14 + (int)param_1[0x13];
    for (; plVar14 != plVar7; plVar14 = plVar14 + 1) {
      plVar6 = (longlong *)FTaskGraphInterface::Get();
      local_50 = (longlong *)0x0;
      local_48 = 1;
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_70,0);
      lVar2 = *plVar14;
      plVar10 = local_70;
      if (local_50 != (longlong *)0x0) {
        plVar10 = local_50;
      }
      *plVar10 = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar6 + 0x48))(plVar6);
      plVar10 = local_70;
      iVar5 = (int)local_48;
      if (local_50 != (longlong *)0x0) {
        plVar10 = local_50;
      }
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (*plVar10 != 0) {
          LOCK();
          piVar1 = (int *)(*plVar10 + 0x48);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar10 = plVar10 + 1;
      }
      if (local_50 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (((char)param_1[0x16] == '\0') || ((int)param_1[0x11] < *(int *)(DAT_146a9d4b8 + 4))) {
    bVar3 = false;
  }
  else {
    piVar9 = (int *)param_1[0x14];
    bVar3 = true;
    piVar1 = piVar9 + (int)param_1[0x15];
    uVar11 = uVar13;
    for (; piVar9 != piVar1; piVar9 = piVar9 + 1) {
      if (*piVar9 < 0) goto LAB_141d66451;
      uVar11 = (ulonglong)(uint)((int)uVar11 + *piVar9);
    }
    bVar3 = *(int *)((longlong)param_1 + 0x74) <= (int)uVar11;
  }
LAB_141d66451:
  iVar5 = (int)param_1[0x11];
  if (bVar3) {
    *(int *)(param_1 + 0xe) = (int)param_1[0xe] - iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x74) << 2;
    local_88 = iVar8 / 3 + (iVar8 >> 0x1f) +
               (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f);
    local_80 = *(undefined1 *)((longlong)param_1 + 0x79);
    local_98 = param_1[0x14];
    local_90 = iVar5;
    FUN_141ecdb80(param_1[10],param_1[0x12],param_2,param_1[0x10]);
    (**(code **)(*param_1 + 8))(param_1,param_1[10]);
  }
  else {
    uVar11 = uVar13;
    if (0 < iVar5) {
      do {
        FRHICommandListBase::QueueAsyncCommandListSubmit
                  (param_1[10],param_1[0x12] + (longlong)(int)uVar13 * 8,
                   *(undefined8 *)(param_1[0x10] + uVar11));
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar11 = uVar11 + 8;
      } while ((int)uVar12 < (int)param_1[0x11]);
    }
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((*(int *)((longlong)param_1 + 0x8c) < 0) && (*(int *)((longlong)param_1 + 0x8c) != 0)) {
    FUN_140848da0(param_1 + 0x10,0);
  }
  param_1[0xc] = 0;
  iVar5 = *(int *)((longlong)param_1 + 0x9c);
  plVar7 = (longlong *)param_1[0x12];
  iVar8 = (int)param_1[0x13];
  if (iVar5 < 0) {
    if (iVar8 != 0) {
      do {
        if (*plVar7 != 0) {
          LOCK();
          piVar1 = (int *)(*plVar7 + 0x48);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar7 = plVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar5 = *(int *)((longlong)param_1 + 0x9c);
    }
    *(undefined4 *)(param_1 + 0x13) = 0;
    if (iVar5 != 0) {
      FUN_140848da0(param_1 + 0x12,0);
    }
  }
  else {
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        LOCK();
        piVar1 = (int *)(*plVar7 + 0x48);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar7 = plVar7 + 1;
    }
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  plVar7 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar7 + 0x30))(plVar7,uVar4);
  return;
}



// FUNCTION 141d665e0 DispatchPostOpaqueCompute body=133 status=ok
// SIG undefined DispatchPostOpaqueCompute(void)

void FRendererModule::DispatchPostOpaqueCompute
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  uVar2 = (longlong)*(int *)(param_1 + 0xa0) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0xa0) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,param_2,param_3);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 141d66670 FUN_141d66670 body=150 status=ok
// SIG undefined FUN_141d66670(void)

undefined8 FUN_141d66670(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))();
    if (lVar2 != 0) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))();
      if (*(char *)(lVar2 + 0xcf) != '\0') {
        bVar1 = true;
        goto LAB_141d666b2;
      }
    }
  }
  bVar1 = false;
LAB_141d666b2:
  if ((0 < *(int *)(param_1 + 200)) &&
     ((*(char *)(*(longlong *)(param_1 + 0xc0) + 0x1a9a) != '\0' ||
      (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x1a99) != '\0')))) {
    bVar1 = true;
  }
  if (((0 < param_2) && (*(int *)(DAT_146a9d290 + 4) != 0)) && (!bVar1)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141d66710 FUN_141d66710 body=419 status=ok
// SIG undefined FUN_141d66710(void)

void FUN_141d66710(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  undefined *local_68;
  LARGE_INTEGER *pLStack_60;
  undefined8 *local_58;
  undefined8 local_50;
  longlong local_48;
  char local_40;
  undefined8 local_38;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar1 = *param_1;
  pLStack_60 = &local_res8;
  local_res8.s.LowPart = local_res8.s.LowPart & 0xffffff00;
  local_68 = &DAT_14060d670;
  lVar4 = FUN_1415d8310(&local_68,&DAT_146216a38);
  local_58 = (undefined8 *)(lVar4 + 0x18);
  iVar6 = 0;
  local_50 = *local_58;
  local_48 = *(longlong *)(lVar4 + 0x28);
  local_40 = '\0';
  local_38 = *(undefined8 *)(lVar4 + 0x30);
  *(undefined8 ***)(lVar4 + 0x30) = &local_58;
  *(int *)(lVar4 + 0x38) = *(int *)(lVar4 + 0x38) + 1;
  if (0 < *(int *)(lVar1 + 0x98)) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar4 + *(longlong *)(lVar1 + 0x90));
      (**(code **)(*plVar2 + 0x30))(plVar2,uVar3,lVar1 + 0x10);
      iVar5 = 0;
      if (0 < *(int *)(lVar1 + 0x18)) {
        do {
          plVar2 = *(longlong **)(lVar4 + *(longlong *)(lVar1 + 0x90));
          (**(code **)(*plVar2 + 0x38))
                    (plVar2,uVar3,(longlong)iVar5 * 0x30d0 + *(longlong *)(lVar1 + 0xc0));
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar1 + 0x18));
      }
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 0x10;
    } while (iVar6 < *(int *)(lVar1 + 0x98));
  }
  FDeferredUpdateResource::UpdateResources(uVar3);
  if (local_40 == '\0') {
    local_40 = '\x01';
    *(int *)(local_58 + 4) = *(int *)(local_58 + 4) + -1;
    if (local_48 != local_58[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_58 = local_50;
    local_58[3] = local_38;
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141d668c0 FUN_141d668c0 body=644 status=ok
// SIG undefined FUN_141d668c0(void)

undefined8
FUN_141d668c0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 *param_6,longlong *param_7,int param_8,undefined4 param_9
             )

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [96];
  undefined1 local_58 [48];
  
  lVar1 = (longlong)param_7;
  if ((param_7 == (longlong *)0x0) || ((*(uint *)((longlong)param_7 + 0x1c) >> 0x1d & 1) != 0)) {
    param_7 = *(longlong **)(param_4 + 0xa8);
    uVar7 = 0;
    local_108 = (longlong *)0x0;
    (**(code **)(*param_7 + 0x40))(param_7,*(undefined4 *)(param_2 + 0x1a38),local_c8,&local_108);
    plVar4 = local_108;
    iVar2 = param_8;
    if (param_8 != DAT_146533120) {
      cVar3 = FUN_141b196e0(local_108,0);
      plVar5 = param_7;
      if (((cVar3 != '\0') &&
          (cVar3 = (**(code **)(*plVar4 + 0x28))(plVar4), plVar5 = param_7, cVar3 == '\0')) &&
         (cVar3 = FUN_14259cbc0(plVar4), plVar5 = param_7, cVar3 == '\0')) {
        plVar4 = (longlong *)UMaterial::GetDefaultMaterial(0);
        plVar5 = (longlong *)(**(code **)(*plVar4 + 0x2a8))(plVar4,0,0);
      }
      uVar9 = *(uint *)(param_4 + 0x8c);
      param_7 = (longlong *)
                (CONCAT44(uVar9 >> 0xc,
                          ((uVar9 >> 0x13 & 0x80 | uVar9 & 0x100) >> 2 | uVar9 & 0x10) >> 4 |
                          uVar9 & 8) & 0x3fffffffff);
      puVar8 = &param_7;
      FUN_141d595d0(local_b8,*(undefined8 *)(param_4 + 0xa0),plVar5,
                    *(undefined4 *)(param_2 + 0x1a38),puVar8);
      local_100 = *param_6;
      local_f8 = param_6[1];
      local_f0 = *(undefined4 *)(param_6 + 2);
      local_e8 = param_6[3];
      if (local_e8 != 0) {
        LOCK();
        *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
        UNLOCK();
      }
      local_e0 = param_6[4];
      local_d0 = *(undefined4 *)(param_4 + 0x90);
      local_d8 = *(undefined4 *)(param_6 + 5);
      local_d4 = *(undefined4 *)((longlong)param_6 + 0x2c);
      local_cc = 0;
      uVar6 = FHitProxyDrawingPolicy::GetBoundShaderStateInput
                        (local_b8,local_58,*(undefined4 *)(param_2 + 0x1a38));
      FUN_141a9adc0(param_1,local_b8,&local_100,uVar6);
      FUN_141d736f0(local_b8,param_1,&local_100,param_2,(ulonglong)puVar8 & 0xffffffffffffff00,
                    param_9);
      if (0 < *(int *)(param_4 + 0x80)) {
        do {
          uVar9 = uVar7;
          FUN_141d72bb0(local_b8,param_1,param_2,lVar1,param_4,uVar7,&local_100,iVar2,0);
          FUN_141b315b0(local_b8,param_1,param_2,param_4,uVar7,uVar9 & 0xffffff00);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < *(int *)(param_4 + 0x80));
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_e8);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141d66b50 DrawRectangle body=163 status=ok
// SIG undefined DrawRectangle(void)

void FRendererModule::DrawRectangle
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined4 param_14)

{
  ::DrawRectangle(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                  param_12,param_13,param_14,1);
  return;
}



// FUNCTION 141d66c00 FUN_141d66c00 body=475 status=ok
// SIG undefined FUN_141d66c00(void)

void FUN_141d66c00(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
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
  
  iVar8 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar8 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar5 = *puVar10;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar4 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar4) goto LAB_141d66cd1;
      uVar5 = puVar10[lVar6 + 1];
    }
    uStack_64 = -uVar5 & uVar5;
    iVar9 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_54 = (iStack_50 - iVar9) + 0x1f;
    if (iVar8 < iStack_54) {
LAB_141d66cd1:
      iStack_54 = iVar8;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar8) {
    do {
      lVar6 = (longlong)iStack_2c * 0x70 + *param_1;
      plVar7 = *(longlong **)(lVar6 + 0x50);
      for (iVar8 = *(int *)(lVar6 + 0x58); iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar3 = (undefined8 *)*plVar7;
        if (puVar3 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar3 + 1);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
        plVar7 = plVar7 + 1;
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_141d716f0(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<SceneRenderingBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141d66de0 FUN_141d66de0 body=916 status=ok
// SIG undefined FUN_141d66de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d66de0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
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
  undefined1 auStack_188 [32];
  undefined4 local_168;
  float local_150;
  float local_144;
  float local_138;
  float local_12c;
  undefined8 local_128;
  float local_120;
  undefined8 local_11c;
  float local_114;
  undefined8 local_110;
  float local_108;
  undefined8 local_104;
  float local_fc;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar1 = *param_5;
  puVar2 = puVar3 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar3;
  *(undefined8 **)(param_1 + 8) = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_143f59480;
  puVar3[2] = uVar1;
  FUN_141d73600(param_4,param_1,param_2);
  fVar13 = *(float *)(param_2 + 0xac8);
  fVar4 = 1.0 / *(float *)(param_2 + 0x940);
  fVar14 = *(float *)(param_2 + 0xad8);
  fVar15 = *(float *)(param_2 + 0xae8);
  fVar6 = *(float *)(param_2 + 0x954);
  fVar7 = *(float *)(param_3 + 0x3c0);
  if (1.0 < *(float *)(param_2 + 0x97c) || *(float *)(param_2 + 0x97c) == 1.0) {
    fVar5 = 0.7853982;
  }
  else {
    fVar5 = _guard_xfg_dispatch_icall_nop(fVar4);
  }
  fVar5 = _guard_xfg_dispatch_icall_nop(fVar5);
  fVar13 = fVar13 * fVar7;
  fVar5 = fVar5 * fVar7;
  local_168 = 0xc;
  fVar15 = fVar15 * fVar7;
  fVar14 = fVar14 * fVar7;
  fVar7 = fVar5 * *(float *)(param_2 + 0xac0);
  fVar8 = fVar5 * *(float *)(param_2 + 0xad0);
  fVar12 = fVar13 + fVar7;
  fVar9 = fVar5 * *(float *)(param_2 + 0xae0);
  fVar5 = fVar5 / (fVar4 * fVar6);
  local_144 = fVar15 + fVar9;
  fVar13 = fVar13 - fVar7;
  fVar10 = fVar5 * *(float *)(param_2 + 0xac4);
  fVar11 = fVar14 + fVar8;
  fVar14 = fVar14 - fVar8;
  local_12c = fVar5 * *(float *)(param_2 + 0xae4);
  fVar15 = fVar15 - fVar9;
  fVar5 = fVar5 * *(float *)(param_2 + 0xad4);
  fVar8 = fVar12 + fVar10;
  local_150 = local_144 + local_12c;
  local_144 = local_144 - local_12c;
  fVar7 = fVar11 + fVar5;
  fVar4 = fVar13 - fVar10;
  local_138 = fVar15 - local_12c;
  fVar6 = fVar14 - fVar5;
  local_12c = fVar15 + local_12c;
  local_128 = CONCAT44(fVar7,fVar8);
  local_104 = CONCAT44(fVar7,fVar8);
  local_11c = CONCAT44(fVar14 + fVar5,fVar13 + fVar10);
  local_110 = CONCAT44(fVar6,fVar4);
  local_f8 = CONCAT44(fVar6,fVar4);
  local_ec = CONCAT44(fVar11 - fVar5,fVar12 - fVar10);
  local_120 = local_150;
  local_114 = local_12c;
  local_108 = local_138;
  local_fc = local_150;
  local_f0 = local_138;
  local_e4 = local_144;
  FUN_141a14d80(param_1,0,2,&local_128);
  uVar1 = *param_5;
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar2 = puVar3 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar3;
  *(undefined8 **)(param_1 + 8) = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_143f59490;
  puVar3[2] = uVar1;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_5);
  return;
}



// FUNCTION 141d67180 FUN_141d67180 body=923 status=ok
// SIG undefined FUN_141d67180(void)

void FUN_141d67180(longlong param_1,longlong param_2,float *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float *pfVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  FUN_141d73600(param_4,param_1,param_2);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar7 = *param_5;
  puVar10 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_143f59480;
  puVar11[2] = uVar7;
  pfVar9 = (float *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
  pfVar12 = pfVar9 + 0x18;
  if (*(float **)(param_1 + 0x38) < pfVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x70);
    pfVar9 = (float *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    pfVar12 = pfVar9 + 0x18;
  }
  *(float **)(param_1 + 0x30) = pfVar12;
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar11 + 9;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x58);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    puVar10 = puVar11 + 9;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(float **)(param_1 + 0x180) = pfVar9;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0xc;
  *(undefined4 *)(param_1 + 0x178) = 8;
  *(undefined4 *)(param_1 + 0x17c) = 0xc;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0x24;
  *(undefined4 *)(param_1 + 400) = 2;
  *(undefined8 **)(param_1 + 0x198) = puVar11;
  fVar13 = *(float *)(param_2 + 0x8d0) + *param_3;
  fVar14 = *(float *)(param_2 + 0x8d4) + param_3[1];
  fVar18 = *(float *)(param_2 + 0x8d0) + param_3[3];
  fVar17 = *(float *)(param_2 + 0x8d4) + param_3[4];
  fVar15 = *(float *)(param_2 + 0x8d8) + param_3[2];
  fVar16 = *(float *)(param_2 + 0x8d8) + param_3[5];
  *pfVar9 = fVar13;
  pfVar9[1] = fVar14;
  pfVar9[3] = fVar13;
  pfVar9[2] = fVar15;
  pfVar9[4] = fVar14;
  pfVar9[6] = fVar13;
  pfVar9[8] = fVar15;
  pfVar9[9] = fVar13;
  pfVar9[0xd] = fVar14;
  pfVar9[0xe] = fVar15;
  pfVar9[0x10] = fVar14;
  pfVar9[0x14] = fVar15;
  pfVar9[5] = fVar16;
  pfVar9[7] = fVar17;
  pfVar9[10] = fVar17;
  pfVar9[0xb] = fVar16;
  pfVar9[0xc] = fVar18;
  pfVar9[0xf] = fVar18;
  pfVar9[0x11] = fVar16;
  pfVar9[0x12] = fVar18;
  pfVar9[0x13] = fVar17;
  pfVar9[0x15] = fVar18;
  pfVar9[0x16] = fVar17;
  pfVar9[0x17] = fVar16;
  *puVar11 = 0x300020000;
  puVar11[1] = 0x5000400010003;
  puVar11[2] = 0x6000700040007;
  puVar11[3] = 0x500010000;
  puVar11[4] = 0x6000200040005;
  puVar11[5] = 0x3000700020007;
  *(undefined4 *)(puVar11 + 6) = 0x40000;
  *(undefined4 *)((longlong)puVar11 + 0x34) = 6;
  *(undefined4 *)(puVar11 + 7) = 0x20006;
  *(undefined4 *)((longlong)puVar11 + 0x3c) = 0x30001;
  puVar11[8] = 0x5000700010007;
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 8;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x48);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 8;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  uVar1 = *(undefined4 *)(param_1 + 0x18c);
  uVar7 = *(undefined8 *)(param_1 + 0x198);
  uVar8 = *(undefined8 *)(param_1 + 0x180);
  uVar2 = *(undefined4 *)(param_1 + 0x178);
  uVar3 = *(undefined4 *)(param_1 + 0x170);
  uVar4 = *(undefined4 *)(param_1 + 400);
  uVar5 = *(undefined4 *)(param_1 + 0x188);
  uVar6 = *(undefined4 *)(param_1 + 0x17c);
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  *(undefined4 *)((longlong)puVar11 + 0x14) = *(undefined4 *)(param_1 + 0x174);
  puVar11[1] = 0;
  *(undefined4 *)(puVar11 + 2) = uVar3;
  *puVar11 = &PTR_LAB_144dc9c40;
  *(undefined4 *)(puVar11 + 3) = uVar2;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar6;
  puVar11[4] = uVar8;
  *(undefined4 *)(puVar11 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar1;
  *(undefined4 *)(puVar11 + 6) = uVar4;
  puVar11[7] = uVar7;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  uVar7 = *param_5;
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_143f59490;
  puVar11[2] = uVar7;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_5);
  return;
}



// FUNCTION 141d67520 FUN_141d67520 body=563 status=ok
// SIG undefined FUN_141d67520(void)

void FUN_141d67520(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x5c8) + 0x30);
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_58);
  puVar4 = param_5;
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar2 = *param_5;
  puVar5 = puVar6 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_143f59480;
  puVar6[2] = uVar2;
  puVar5 = (undefined8 *)FUN_141d6a480(param_4,&param_5,param_1,param_2);
  lVar3 = *(longlong *)(param_4 + 0x48);
  uVar2 = *puVar5;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141aa9800(param_4,param_1,*(undefined8 *)(lVar3 + 0x38),uVar2);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
  local_48 = local_58 + *(float *)(param_2 + 0x8d0);
  local_44 = local_54 + *(float *)(param_2 + 0x8d4);
  local_3c = local_4c * 1.0352762;
  lVar3 = *(longlong *)(param_4 + 0x48);
  local_40 = local_50 + *(float *)(param_2 + 0x8d8);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_1,*(undefined8 *)(lVar3 + 0x38),param_4 + 0xc0,&local_48,0);
  lVar3 = *(longlong *)(param_4 + 0x48);
  local_38 = 0;
  uStack_30 = 0;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_1,*(undefined8 *)(lVar3 + 0x38),param_4 + 0xc6,&local_38,0);
  FUN_141b973b0(param_1);
  uVar2 = *puVar4;
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_143f59490;
  puVar6[2] = uVar2;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar4);
  return;
}



// FUNCTION 141d67760 FUN_141d67760 body=1395 status=ok
// SIG undefined FUN_141d67760(void)

void FUN_141d67760(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  ulonglong uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  fVar26 = *(float *)(param_2 + 0x8d0) - *(float *)(param_3 + 0x44);
  fVar27 = *(float *)(param_2 + 0x8d4) - *(float *)(param_3 + 0x48);
  fVar28 = *(float *)(param_2 + 0x8d8) - *(float *)(param_3 + 0x4c);
  FUN_141d73600(param_4,param_1,param_2);
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar7 = *param_5;
  puVar14 = puVar15 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar15 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar14;
  uVar21 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar15;
  *(undefined8 **)(param_1 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f59480;
  puVar15[2] = uVar7;
  uVar20 = *(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0;
  uVar13 = uVar20 + 0x60;
  if (*(ulonglong *)(param_1 + 0x38) < uVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x70);
    uVar20 = *(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0;
    uVar13 = uVar20 + 0x60;
  }
  *(ulonglong *)(param_1 + 0x30) = uVar13;
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
  puVar14 = puVar15 + 9;
  if (*(undefined8 **)(param_1 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x58);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    puVar14 = puVar15 + 9;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar14;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0xc;
  *(undefined4 *)(param_1 + 0x178) = 8;
  *(undefined4 *)(param_1 + 0x17c) = 0xc;
  *(ulonglong *)(param_1 + 0x180) = uVar20;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0x24;
  *(undefined4 *)(param_1 + 400) = 2;
  *(undefined8 **)(param_1 + 0x198) = puVar15;
  uVar17 = uVar21;
  uVar18 = uVar21;
  uVar16 = uVar21;
  do {
    if (uVar18 == 0) {
      fVar25 = 0.0;
    }
    else {
      fVar25 = 1.0;
    }
    if (uVar16 == 0) {
      fVar24 = 1.0;
    }
    else {
      fVar24 = -1.0;
    }
    if (uVar17 == 0) {
      fVar22 = 1.0;
    }
    else {
      fVar22 = -1.0;
    }
    sVar19 = (short)uVar17 * 2 + (short)uVar16;
    fVar9 = *(float *)(param_3 + 0x138);
    uVar13 = (ulonglong)(ushort)(sVar19 * 2 + (short)uVar18);
    fVar10 = *(float *)(param_3 + 0x148);
    fVar11 = *(float *)(param_3 + 0x128);
    fVar12 = *(float *)(param_3 + 0x118);
    fVar23 = 1.0 / (fVar25 * *(float *)(param_3 + 0x13c) + *(float *)(param_3 + 0x14c) * 1.0 +
                   fVar24 * *(float *)(param_3 + 300) + fVar22 * *(float *)(param_3 + 0x11c));
    *(ulonglong *)(uVar20 + uVar13 * 0xc) =
         CONCAT44((fVar25 * *(float *)(param_3 + 0x134) + *(float *)(param_3 + 0x144) * 1.0 +
                  fVar24 * *(float *)(param_3 + 0x124) + fVar22 * *(float *)(param_3 + 0x114)) *
                  fVar23 + fVar27,
                  (fVar25 * *(float *)(param_3 + 0x130) + *(float *)(param_3 + 0x140) * 1.0 +
                  fVar24 * *(float *)(param_3 + 0x120) + fVar22 * *(float *)(param_3 + 0x110)) *
                  fVar23 + fVar26);
    *(float *)(uVar20 + 8 + uVar13 * 0xc) =
         (fVar25 * fVar9 + fVar10 * 1.0 + fVar24 * fVar11 + fVar22 * fVar12) * fVar23 + fVar28;
    if (uVar18 == 0) {
      fVar25 = 0.0;
    }
    else {
      fVar25 = 1.0;
    }
    if (uVar16 == 0) {
      fVar24 = 1.0;
    }
    else {
      fVar24 = -1.0;
    }
    if (uVar17 == 0xffffffff) {
      fVar22 = 1.0;
    }
    else {
      fVar22 = -1.0;
    }
    uVar13 = (ulonglong)(ushort)((sVar19 + 2) * 2 + (short)uVar18);
    uVar17 = uVar17 + 2;
    fVar9 = *(float *)(param_3 + 0x138);
    fVar10 = *(float *)(param_3 + 0x148);
    fVar11 = *(float *)(param_3 + 0x128);
    fVar12 = *(float *)(param_3 + 0x118);
    fVar23 = 1.0 / (fVar25 * *(float *)(param_3 + 0x13c) + *(float *)(param_3 + 0x14c) * 1.0 +
                   fVar24 * *(float *)(param_3 + 300) + fVar22 * *(float *)(param_3 + 0x11c));
    *(ulonglong *)(uVar20 + uVar13 * 0xc) =
         CONCAT44((fVar25 * *(float *)(param_3 + 0x134) + *(float *)(param_3 + 0x144) * 1.0 +
                  fVar24 * *(float *)(param_3 + 0x124) + fVar22 * *(float *)(param_3 + 0x114)) *
                  fVar23 + fVar27,
                  (fVar25 * *(float *)(param_3 + 0x130) + *(float *)(param_3 + 0x140) * 1.0 +
                  fVar24 * *(float *)(param_3 + 0x120) + fVar22 * *(float *)(param_3 + 0x110)) *
                  fVar23 + fVar26);
    *(float *)(uVar20 + 8 + uVar13 * 0xc) =
         (fVar25 * fVar9 + fVar10 * 1.0 + fVar24 * fVar11 + fVar22 * fVar12) * fVar23 + fVar28;
  } while (((uVar17 < 2) || (uVar16 = uVar16 + 1, uVar17 = uVar21, uVar16 < 2)) ||
          (uVar18 = uVar18 + 1, uVar16 = uVar21, uVar18 < 2));
  *puVar15 = 0x300020000;
  puVar15[1] = 0x5000400010003;
  puVar15[2] = 0x6000700040007;
  puVar15[3] = 0x500010000;
  puVar15[4] = 0x6000200040005;
  puVar15[5] = 0x3000700020007;
  *(undefined4 *)(puVar15 + 6) = 0x40000;
  *(undefined4 *)((longlong)puVar15 + 0x34) = 6;
  *(undefined4 *)(puVar15 + 7) = 0x20006;
  *(undefined4 *)((longlong)puVar15 + 0x3c) = 0x30001;
  puVar15[8] = 0x5000700010007;
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar15 + 8;
  if (*(undefined8 **)(param_1 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x48);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar15 + 8;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar14;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar15;
  uVar1 = *(undefined4 *)(param_1 + 0x18c);
  uVar7 = *(undefined8 *)(param_1 + 0x198);
  uVar8 = *(undefined8 *)(param_1 + 0x180);
  uVar2 = *(undefined4 *)(param_1 + 0x178);
  uVar3 = *(undefined4 *)(param_1 + 0x170);
  uVar4 = *(undefined4 *)(param_1 + 400);
  uVar5 = *(undefined4 *)(param_1 + 0x188);
  uVar6 = *(undefined4 *)(param_1 + 0x17c);
  *(undefined8 **)(param_1 + 8) = puVar15 + 1;
  *(undefined4 *)((longlong)puVar15 + 0x14) = *(undefined4 *)(param_1 + 0x174);
  puVar15[1] = 0;
  *(undefined4 *)(puVar15 + 2) = uVar3;
  *puVar15 = &PTR_LAB_144dc9c40;
  *(undefined4 *)(puVar15 + 3) = uVar2;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar6;
  puVar15[4] = uVar8;
  *(undefined4 *)(puVar15 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar1;
  *(undefined4 *)(puVar15 + 6) = uVar4;
  puVar15[7] = uVar7;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  uVar7 = *param_5;
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar15 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar15 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar14;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar15;
  *(undefined8 **)(param_1 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f59490;
  puVar15[2] = uVar7;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_5);
  return;
}



// FUNCTION 141d67ce0 FUN_141d67ce0 body=252 status=ok
// SIG undefined FUN_141d67ce0(void)

void FUN_141d67ce0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  <lambda_386768eb4bd52dc37b5cc4e570439960>::operator()(param_1 + 2,uVar3);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_144e514a8;
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



// FUNCTION 141d67de0 FUN_141d67de0 body=252 status=ok
// SIG undefined FUN_141d67de0(void)

void FUN_141d67de0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  <lambda_e19278b19a03fe63b0ce1902ba0cecc4>::operator()(param_1 + 2,uVar3);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_144e514b8;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
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



// FUNCTION 141d67ee0 FUN_141d67ee0 body=262 status=ok
// SIG undefined FUN_141d67ee0(void)

void FUN_141d67ee0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  *(undefined4 *)(param_1[2] + 0x274) = 0xffffff9d;
  FUN_141d7b5e0(uVar3,param_1[2],1);
  LOCK();
  DAT_146a98d34 = DAT_146a98d34 + -1;
  UNLOCK();
  *param_1 = &PTR_FUN_144e514d8;
  *(undefined1 *)(param_1 + 3) = 0;
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



// FUNCTION 141d67ff0 FUN_141d67ff0 body=237 status=ok
// SIG undefined FUN_141d67ff0(void)

void FUN_141d67ff0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  *(undefined1 *)(param_1[2] + 0x26d) = 1;
  *param_1 = &PTR_FUN_144e51488;
  *(undefined1 *)(param_1 + 3) = 0;
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



// FUNCTION 141d680e0 ExecuteTask body=264 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::UpdateSceneCaptureContents'::`23'::ODSCaptureCommandName,<lambda_b7ee8bfc00543b5d8b15ae67363a0926>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = (longlong *)0x0;
  plVar5 = (longlong *)(param_1[4] + 0x68);
  if (param_1[4] == 0) {
    plVar5 = plVar7;
  }
  FUN_141d6b780(uVar3,param_1[2],param_1[3],plVar5,*(undefined4 *)(param_1 + 5));
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_144e514c8;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar5 = TlsGetValue(*pDVar4);
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    plVar5 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar5 = plVar6;
    }
    TlsSetValue(*pDVar4,plVar5);
  }
  if ((int)plVar5[2] < 0x20) {
    plVar7 = (longlong *)plVar5[1];
  }
  else {
    if (*plVar5 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *plVar5 = plVar5[1];
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  plVar5[1] = (longlong)param_1;
  return;
}



// FUNCTION 141d681f0 FUN_141d681f0 body=231 status=ok
// SIG undefined FUN_141d681f0(void)

void FUN_141d681f0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  FUN_1425a3670();
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_144e514e8;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
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



// FUNCTION 141d682e0 FUN_141d682e0 body=238 status=ok
// SIG undefined FUN_141d682e0(void)

void FUN_141d682e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141d78570(&DAT_146a9da00);
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_144e514f8;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
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



// FUNCTION 141d683d0 FUN_141d683d0 body=238 status=ok
// SIG undefined FUN_141d683d0(void)

void FUN_141d683d0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_141d5c300(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_144e51498;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
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



// FUNCTION 141d684c0 FUN_141d684c0 body=266 status=ok
// SIG undefined FUN_141d684c0(void)

void FUN_141d684c0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_141d71020(uVar3,param_1[2]);
  FlushPendingDeleteRHIResources_RenderThread();
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e51440;
  *(undefined1 *)(param_1 + 3) = 0;
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



// FUNCTION 141d685d0 FUN_141d685d0 body=252 status=ok
// SIG undefined FUN_141d685d0(void)

void FUN_141d685d0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  DAT_1464aaa94 = DAT_1464aaa94 + 1;
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e51420;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
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



// FUNCTION 141d686d0 FUN_141d686d0 body=237 status=ok
// SIG undefined FUN_141d686d0(void)

void FUN_141d686d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d66710(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144e51430;
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



// FUNCTION 141d687c0 FUN_141d687c0 body=260 status=ok
// SIG undefined FUN_141d687c0(void)

void FUN_141d687c0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,0);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e51450;
  *(undefined1 *)(param_1 + 3) = 0;
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



// FUNCTION 141d688d0 ExecuteTask body=264 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FClearSnapshotsAndDeleteSceneRendererTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141d7b5e0(&DAT_146ab6e78,param_1[2],0);
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR_FUN_144e51410;
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



// FUNCTION 141d689e0 FUN_141d689e0 body=276 status=ok
// SIG undefined FUN_141d689e0(void)

void FUN_141d689e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_res20;
  
  if (DAT_146ab6383 != '\0') {
    iVar5 = FUN_141d69970(*(undefined4 *)(param_1 + 0x2a0));
    if (1 < (longlong)iVar5) {
      lVar7 = 1;
      do {
        lVar3 = (&DAT_146a9d500)[lVar7];
        lVar4 = (&DAT_146a9d508)[lVar7];
        (&DAT_146a9d508)[lVar7] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
          UNLOCK();
        }
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle();
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar5);
    }
    plVar6 = (longlong *)FRHICommandListImmediate::RHIThreadFence(param_2,&local_res20,0);
    lVar7 = DAT_146a9d508;
    if (plVar6 != &DAT_146a9d508) {
      DAT_146a9d508 = *plVar6;
      *plVar6 = 0;
      if (lVar7 != 0) {
        LOCK();
        piVar1 = (int *)(lVar7 + 0x48);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
    if (local_res20 != 0) {
      LOCK();
      piVar1 = (int *)(local_res20 + 0x48);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (*(int *)(param_2 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 141d68b00 FindId body=327 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = *param_3;
    uVar8 = (int)(*(ulonglong *)(param_3 + 2) >> 4) - uVar1 ^ uVar1 >> 0xd;
    uVar7 = (-0x61c88647 - uVar8) - uVar1 ^ uVar8 << 8;
    uVar5 = (uVar1 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 0x10;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 10;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (((longlong)(int)((uVar5 - uVar7) - uVar8) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)iVar3;
        if ((((*(uint *)(lVar2 + lVar6 * 0x28) == uVar1) &&
             (*(ulonglong *)(lVar2 + 8 + lVar6 * 0x28) == *(ulonglong *)(param_3 + 2))) &&
            (*(uint *)(lVar2 + 0x10 + lVar6 * 0x28) == param_3[4])) &&
           (*(char *)(lVar2 + 0x14 + lVar6 * 0x28) == (char)param_3[5])) {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141d68c50 FUN_141d68c50 body=332 status=ok
// SIG undefined FUN_141d68c50(void)

int * FUN_141d68c50(longlong *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  uint local_res8 [2];
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    iVar2 = FMeshDrawingPolicy::GetTypeHash(param_3);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      uVar5 = local_res8[0];
      do {
        lVar6 = (longlong)iVar2 * 0xd8 + lVar1;
        puVar4 = (uint *)FUN_141ac2bf0(lVar6 + 0x20,local_res8,param_3,0);
        uVar5 = (*puVar4 ^ uVar5) & 1 ^ uVar5;
        if (((((uVar5 & 1) != 0) &&
             (bVar7 = *(longlong *)(lVar6 + 0x68) == *(longlong *)(param_3 + 0x48),
             uVar5 = (uint)bVar7, bVar7)) &&
            (bVar7 = *(longlong *)(lVar6 + 0x70) == *(longlong *)(param_3 + 0x50),
            uVar5 = (uint)bVar7, bVar7)) &&
           (bVar7 = *(longlong *)(lVar6 + 0x58) == *(longlong *)(param_3 + 0x38),
           uVar5 = (uint)bVar7, bVar7)) {
          uVar5 = (uint)(*(longlong *)(lVar6 + 0x60) == *(longlong *)(param_3 + 0x40));
        }
        if ((uVar5 & 1) != 0) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar6 + 0xd0);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141d68da0 FUN_141d68da0 body=983 status=ok
// SIG undefined FUN_141d68da0(void)

void FUN_141d68da0(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint local_res8 [2];
  longlong local_res20;
  undefined *local_78;
  uint *puStack_70;
  undefined8 *local_68;
  undefined8 local_60;
  longlong local_58;
  char local_50;
  undefined8 local_48;
  
  if ((int)param_1[1] != 0) {
    puStack_70 = local_res8;
    local_78 = &DAT_14060d670;
    local_res8[0] = local_res8[0] & 0xffffff00;
    lVar5 = FUN_1415d8310(&local_78,&DAT_146216a38);
    local_68 = (undefined8 *)(lVar5 + 0x18);
    uVar10 = 0;
    local_60 = *local_68;
    local_58 = *(longlong *)(lVar5 + 0x28);
    local_50 = '\0';
    local_48 = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 ***)(lVar5 + 0x30) = &local_68;
    *(int *)(lVar5 + 0x38) = *(int *)(lVar5 + 0x38) + 1;
    iVar8 = (int)param_1[1];
    local_res20 = (longlong)iVar8;
    local_78 = DAT_1464c3070;
    if (0 < iVar8) {
      local_res8[0] = iVar8 - 1;
      uVar11 = uVar10;
      do {
        lVar5 = *param_1;
        uVar2 = *(undefined8 *)(lVar5 + uVar10);
        uVar1 = *(undefined4 *)(lVar5 + 0x18 + uVar10);
        uVar3 = *(undefined8 *)(*(longlong *)(lVar5 + 0x10 + uVar10) + 0x30);
        if ((uint)uVar11 == local_res8[0]) {
          iVar8 = *(int *)((longlong)param_1 + 0x1c);
        }
        else {
          iVar8 = (int)param_1[3];
        }
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 3;
        if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
          puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar7 + 3;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar6;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar7;
        *(undefined8 **)(param_2 + 8) = puVar7 + 1;
        puVar7[1] = 0;
        *puVar7 = &PTR_LAB_143f59480;
        puVar7[2] = uVar2;
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar7 + 5;
        }
        puVar4 = local_78;
        *(undefined8 **)(param_2 + 0x30) = puVar6;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar7;
        *(undefined8 **)(param_2 + 8) = puVar7 + 1;
        puVar7[3] = uVar3;
        *(undefined4 *)(puVar7 + 4) = uVar1;
        puVar7[1] = 0;
        *puVar7 = &PTR_LAB_143f489e0;
        *(undefined4 *)(puVar7 + 2) = 0;
        if (local_78 == (undefined *)0x0) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x8d8,
                     L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
        }
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 7;
        if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x40);
          puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar7 + 7;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar6;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar7;
        *(undefined8 **)(param_2 + 8) = puVar7 + 1;
        puVar7[1] = 0;
        *puVar7 = &PTR_LAB_143f489d0;
        puVar7[2] = puVar4;
        puVar7[3] = 0;
        *(undefined4 *)(puVar7 + 4) = 0;
        *(int *)((longlong)puVar7 + 0x24) = iVar8 * 8;
        *(undefined4 *)(puVar7 + 5) = 0;
        *(int *)((longlong)puVar7 + 0x2c) = iVar8 * 0xc;
        *(undefined4 *)(puVar7 + 6) = 1;
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 3;
        if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
          puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar7 + 3;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar6;
        uVar11 = (ulonglong)((uint)uVar11 + 1);
        uVar10 = uVar10 + 0x20;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        local_res20 = local_res20 + -1;
        **(undefined8 **)(param_2 + 8) = puVar7;
        *(undefined8 **)(param_2 + 8) = puVar7 + 1;
        puVar7[1] = 0;
        *puVar7 = &PTR_LAB_143f59490;
        puVar7[2] = uVar2;
      } while (local_res20 != 0);
      iVar8 = (int)param_1[1];
    }
    lVar5 = *param_1;
    for (iVar9 = iVar8; iVar9 != 0; iVar9 = iVar9 + -1) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar5);
      lVar5 = lVar5 + 0x20;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar8) {
      FUN_141d71930(param_1,iVar8);
    }
    param_1[2] = 0;
    if (local_50 == '\0') {
      local_50 = 1;
      *(int *)(local_68 + 4) = *(int *)(local_68 + 4) + -1;
      if (local_58 != local_68[2]) {
        FMemStackBase::FreeChunks();
      }
      *local_68 = local_60;
      local_68[3] = local_48;
    }
  }
  return;
}



// FUNCTION 141d69180 FUN_141d69180 body=244 status=ok
// SIG undefined FUN_141d69180(void)

void FUN_141d69180(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  
  if ((((*param_1 != 0) && (lVar2 = param_1[1], lVar2 != 0)) &&
      (lVar4 = *(longlong *)(lVar2 + 8), lVar4 != 0)) &&
     (((lVar2 = *(longlong *)(lVar2 + 0xd8), lVar2 != 0 &&
       ((*(byte *)((longlong)param_1 + 0x44) & 1) != 0)) &&
      ((*(int *)(lVar4 + 0x10) != 2 && ((*(uint *)(lVar4 + 0x18) & 0x20000000) != 0)))))) {
    if (*(int *)(lVar2 + 0x17a0) != *(int *)(lVar2 + 0x17cc)) {
      iVar1 = *(int *)(*param_1 + 0x58);
      lVar4 = *(longlong *)(lVar2 + 0x17d8);
      if (*(longlong *)(lVar2 + 0x17d8) == 0) {
        lVar4 = lVar2 + 0x17d0;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(lVar2 + 0x17e0) - 1U & (longlong)iVar1) * 4);
      if (iVar3 != -1) {
        do {
          piVar6 = (int *)((longlong)iVar3 * 0x270 + *(longlong *)(lVar2 + 0x1798));
          if (*piVar6 == iVar1) {
            if (iVar3 != -1) goto LAB_141d69257;
            break;
          }
          iVar3 = piVar6[0x98];
        } while (iVar3 != -1);
      }
    }
    piVar6 = (int *)0x0;
LAB_141d69257:
    piVar5 = piVar6 + 4;
    if (piVar6 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      FShadowMapRenderTargetsRefCounted::Release(piVar5 + 0x8c);
      return;
    }
  }
  return;
}



// FUNCTION 141d69280 GetBoundShaderStateInput body=570 status=ok
// SIG undefined GetBoundShaderStateInput(void)

undefined8 * FHitProxyDrawingPolicy::GetBoundShaderStateInput(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined8 *local_res8;
  
  puVar10 = (undefined8 *)0x0;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    local_res8 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)0x1;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    local_res8 = *(undefined8 **)(lVar3 + 0x50);
    puVar12 = puVar10;
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    puVar12 = (undefined8 *)(ulonglong)((uint)puVar12 | 2);
    puVar11 = puVar10;
    puVar9 = puVar10;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    puVar11 = local_res8;
    puVar9 = *(undefined8 **)(lVar3 + 0x48);
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar5 = *(undefined8 *)(lVar3 + 0x38);
  puVar8 = (undefined8 *)FUN_141b34160(param_1);
  param_2[1] = uVar5;
  param_2[2] = puVar9;
  param_2[5] = 0;
  uVar5 = *puVar8;
  param_2[3] = local_res8;
  param_2[4] = uVar4;
  *param_2 = uVar5;
  if ((((ulonglong)puVar12 & 2) != 0) &&
     (puVar12 = (undefined8 *)(ulonglong)((uint)puVar12 & 0xfffffffd), puVar11 != (undefined8 *)0x0)
     ) {
    LOCK();
    piVar1 = (int *)(puVar11 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar11 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        LOCK();
        bVar13 = *(int *)((longlong)puVar11 + 0xc) == 0;
        if (bVar13) {
          *(int *)((longlong)puVar11 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar13) {
          uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
          puVar9 = puVar10;
          if (uVar7 != 0) {
            puVar9 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18);
          }
          puVar9[1] = puVar11;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*puVar11)(puVar11,1);
      }
    }
  }
  if ((((ulonglong)puVar12 & 1) != 0) && (local_res8 != (undefined8 *)0x0)) {
    LOCK();
    piVar1 = (int *)(local_res8 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(local_res8 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        LOCK();
        bVar13 = *(int *)((longlong)local_res8 + 0xc) == 0;
        if (bVar13) {
          *(int *)((longlong)local_res8 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar13) {
          uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
          if (uVar7 != 0) {
            puVar10 = (undefined8 *)
                      ((&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18);
          }
          puVar10[1] = local_res8;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar7);
        }
      }
      else {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141d694c0 FUN_141d694c0 body=698 status=ok
// SIG undefined FUN_141d694c0(void)

undefined8 * FUN_141d694c0(undefined8 *param_1,ulonglong *param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_res18;
  undefined8 local_res20;
  int local_78;
  int local_74;
  int local_70;
  int iStack_6c;
  undefined8 local_68 [6];
  
  cVar3 = FUN_14275f0e0(param_2);
  if (cVar3 != '\0') {
    fVar12 = (float)(**(code **)(*(longlong *)param_2[0x15] + 8))();
    uVar9 = 0;
    plVar6 = (longlong *)*param_2;
    fVar12 = fVar12 * *(float *)((longlong)param_2 + 0x9c);
    local_res20 = 0;
    uVar7 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
    if (plVar6 + (int)param_2[1] < plVar6) {
      uVar7 = uVar9;
    }
    if (uVar7 != 0) {
      do {
        lVar1 = *plVar6;
        fVar13 = (float)(*(int *)(lVar1 + 0x380) - *(int *)(lVar1 + 0x378)) * fVar12;
        local_res18 = CONCAT44(local_res18._4_4_,-((int)ROUND(-0.5 - (fVar13 + fVar13)) >> 1));
        fVar13 = (float)(*(int *)(lVar1 + 900) - *(int *)(lVar1 + 0x37c)) * fVar12;
        uVar8 = -((int)ROUND(-0.5 - (fVar13 + fVar13)) >> 1);
        iVar5 = FSceneViewFamily::GetFeatureLevel(param_2);
        if ((iVar5 < 2) && (cVar3 = FUN_142753b00(), cVar3 != '\0')) {
          uVar8 = (uVar8 & 1) + uVar8;
        }
        fVar13 = (float)*(int *)(lVar1 + 0x378) * fVar12;
        fVar14 = (float)*(int *)(lVar1 + 0x37c) * fVar12;
        local_78 = -((int)ROUND(-0.5 - (fVar13 + fVar13)) >> 1);
        local_74 = -((int)ROUND(-0.5 - (fVar14 + fVar14)) >> 1);
        QuantizeSceneBufferSize(&local_78,&local_70);
        iVar5 = (int)local_res18 + local_70;
        if ((int)local_res18 + local_70 <= (int)local_res20) {
          iVar5 = (int)local_res20;
        }
        iVar2 = iStack_6c + uVar8;
        if ((int)(iStack_6c + uVar8) <= local_res20._4_4_) {
          iVar2 = local_res20._4_4_;
        }
        plVar6 = plVar6 + 1;
        uVar9 = uVar9 + 1;
        local_res20 = CONCAT44(iVar2,iVar5);
      } while (uVar9 != uVar7);
    }
    QuantizeSceneBufferSize(&local_res20,local_68);
    *param_1 = local_68[0];
    return param_1;
  }
  uVar9 = 0;
  plVar6 = (longlong *)*param_2;
  local_res18 = 0;
  uVar7 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar6 + (int)param_2[1] < plVar6) {
    uVar7 = uVar9;
  }
  uVar10 = uVar9;
  uVar11 = uVar9;
  if (uVar7 != 0) {
    do {
      lVar1 = *plVar6;
      plVar6 = plVar6 + 1;
      uVar8 = *(uint *)(lVar1 + 0x370);
      if ((int)uVar8 <= (int)(uint)uVar9) {
        uVar8 = (uint)uVar9;
      }
      uVar9 = (ulonglong)uVar8;
      uVar4 = *(uint *)(lVar1 + 0x374);
      if ((int)uVar4 <= (int)(uint)uVar10) {
        uVar4 = (uint)uVar10;
      }
      uVar11 = uVar11 + 1;
      local_res18 = CONCAT44(uVar4,uVar8);
      uVar10 = (ulonglong)uVar4;
    } while (uVar11 != uVar7);
  }
  QuantizeSceneBufferSize(&local_res18,&local_70);
  *param_1 = CONCAT44(iStack_6c,local_70);
  return param_1;
}



// FUNCTION 141d69780 FUN_141d69780 body=139 status=ok
// SIG undefined FUN_141d69780(void)

undefined8 FUN_141d69780(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x1ab0);
  if (((*(uint *)(param_1 + 0xf60) & 0xfffffffc) == 0) && (*(uint *)(param_1 + 0xf60) != 2)) {
    return uVar2;
  }
  plVar3 = (longlong *)**(longlong **)(param_1 + 0x10);
  iVar1 = (int)(*(longlong **)(param_1 + 0x10))[1];
  plVar5 = plVar3;
  while( true ) {
    if (plVar5 == plVar3 + iVar1) {
      return uVar2;
    }
    if (*plVar5 == param_1) break;
    plVar5 = plVar5 + 1;
  }
  iVar4 = (int)((longlong)plVar5 - (longlong)plVar3 >> 3);
  if (iVar4 < 0) {
    return uVar2;
  }
  if (iVar1 <= iVar4) {
    return uVar2;
  }
  if (iVar1 < 1) {
    return uVar2;
  }
  if (*(int *)(*plVar3 + 0xf60) != 1) {
    return uVar2;
  }
  return *(undefined8 *)(*plVar3 + 0x18);
}



// FUNCTION 141d69810 GetEyeAdaptation body=52 status=ok
// SIG undefined GetEyeAdaptation(void)

undefined8 FViewInfo::GetEyeAdaptation(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_141d69780();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)
             FSceneViewState::FEyeAdaptationRTManager::GetRTRef
                       ((undefined4 *)(lVar1 + 0x470),param_2,*(undefined4 *)(lVar1 + 0x470));
    return *puVar2;
  }
  return 0;
}



// FUNCTION 141d69850 GetEyeAdaptationRT body=44 status=ok
// SIG undefined GetEyeAdaptationRT(void)

undefined8 FViewInfo::GetEyeAdaptationRT(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_141d69780();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)
             FSceneViewState::FEyeAdaptationRTManager::GetRTRef
                       ((undefined4 *)(lVar1 + 0x470),0,*(undefined4 *)(lVar1 + 0x470));
    return *puVar2;
  }
  return 0;
}



// FUNCTION 141d69890 GetLastEyeAdaptationExposure body=35 status=ok
// SIG undefined GetLastEyeAdaptationExposure(void)

undefined4 FViewInfo::GetLastEyeAdaptationExposure(void)

{
  longlong lVar1;
  
  lVar1 = FUN_141d69780();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x474);
  }
  return 0;
}



// FUNCTION 141d698c0 GetLastEyeAdaptationRT body=58 status=ok
// SIG undefined GetLastEyeAdaptationRT(void)

undefined8 FViewInfo::GetLastEyeAdaptationRT(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_141d69780();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)
             FSceneViewState::FEyeAdaptationRTManager::GetRTRef
                       ((int *)(lVar1 + 0x470),param_2,1 - *(int *)(lVar1 + 0x470));
    return *puVar2;
  }
  return 0;
}



// FUNCTION 141d69900 FUN_141d69900 body=105 status=ok
// SIG undefined FUN_141d69900(void)

longlong FUN_141d69900(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_res8 [4];
  
  if ((*(char *)(*(longlong *)(param_1 + 0xc0) + 0x120b) != '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x120c) == '\0')) {
    return *(longlong *)(*(longlong *)(param_2 + 0x1f0) + 8);
  }
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  local_res8[0] = lVar1;
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_res8);
  return lVar1;
}



// FUNCTION 141d69970 FUN_141d69970 body=333 status=ok
// SIG undefined FUN_141d69970(void)

int FUN_141d69970(int param_1)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a9e698) && (_Init_thread_header(&DAT_146a9e698), DAT_146a9e698 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.NumBufferedOcclusionQueries");
    lVar5 = lVar7;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146a9e690 = lVar5;
    _Init_thread_footer(&DAT_146a9e698);
  }
  lVar5 = DAT_146a9e690;
  iVar6 = 0;
  if (param_1 < 2) {
    iVar6 = 1;
    if ((((uint)(&DAT_1464c9c48)[param_1] < 0x1e) &&
        ((0x373aa74aU >> ((&DAT_1464c9c48)[param_1] & 0x1f) & 1) != 0)) &&
       (iVar6 = 1, DAT_146ab6383 != '\0')) {
      iVar6 = 2;
    }
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    lVar7 = 4;
  }
  iVar6 = *(int *)(lVar7 + lVar5) + iVar6;
  if (0 < iVar6) {
    iVar1 = 3;
    if (iVar6 < 3) {
      iVar1 = iVar6;
    }
    return iVar1;
  }
  return 1;
}



// FUNCTION 141d69ac0 FUN_141d69ac0 body=92 status=ok
// SIG undefined FUN_141d69ac0(void)

int FUN_141d69ac0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  undefined1 local_res10 [8];
  
  iVar3 = 0;
  for (plVar1 = *(longlong **)(param_2 + 200); plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)plVar1[7]) {
    if ((param_3 == (longlong *)0x0) ||
       (puVar2 = (uint *)(**(code **)(*param_3 + 8))
                                   (param_3,local_res10,*(undefined8 *)(*plVar1 + 0x30)),
       1 < *puVar2)) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}



// FUNCTION 141d69b20 FUN_141d69b20 body=1553 status=ok
// SIG undefined FUN_141d69b20(void)

longlong FUN_141d69b20(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  float *pfVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res20;
  undefined2 local_res21;
  undefined1 local_res23;
  uint in_stack_fffffffffffffec0;
  uint in_stack_fffffffffffffec8;
  undefined1 local_128;
  undefined2 local_127;
  undefined1 local_125;
  int local_124;
  int local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_10c;
  float local_104;
  undefined1 local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined1 local_d8 [8];
  float local_d0;
  undefined1 local_c8 [16];
  undefined **local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  
  lVar15 = 0;
  if (*(char *)(param_2 + 0x1a9a) != '\0') {
    return 0;
  }
  pfVar2 = *(float **)(param_3 + 0x1a68);
  if ((pfVar2 != (float *)0x0) && (DAT_1464c2fdc != 0)) {
    local_b8 = &PTR__scalar_deleting_destructor__144deb6d0;
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    local_b0 = param_2;
    local_a8 = param_2;
    if ((DAT_146a98d38 != 0) && ((DAT_146a98d3c == 0 && (iVar16 = 0, 0 < (int)pfVar2[10])))) {
      lVar17 = 0x10;
      do {
        lVar12 = *(longlong *)(pfVar2 + 8);
        iVar11 = 0;
        if (0 < *(int *)(lVar12 + lVar17)) {
          lVar9 = 0;
          do {
            lVar12 = *(longlong *)(lVar17 + -8 + lVar12);
            fVar19 = pfVar2[2] + *(float *)(lVar9 + lVar12);
            fVar20 = pfVar2[2] + *(float *)(lVar9 + 4 + lVar12);
            uVar14 = *(undefined8 *)(lVar9 + lVar12);
            local_104 = *(float *)(lVar9 + 8 + lVar12) + pfVar2[3];
            local_110 = *(float *)(lVar9 + 8 + lVar12);
            local_118._0_4_ = (float)uVar14;
            local_118._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
            local_10c = CONCAT44(fVar20,fVar19);
            local_100 = 1;
            local_e8 = CONCAT44((fVar20 - local_118._4_4_) * 0.5,(fVar19 - (float)local_118) * 0.5);
            local_f8 = CONCAT44((local_118._4_4_ + fVar20) * 0.5,((float)local_118 + fVar19) * 0.5);
            local_e0 = (local_104 - local_110) * 0.5;
            local_f0 = (local_104 + local_110) * 0.5;
            local_118 = uVar14;
            local_d0 = local_104;
            cVar3 = FConvexVolume::IntersectBox(param_2 + 0x1070,&local_f8,&local_e8);
            if (cVar3 != '\0') {
              local_res21 = 0x3232;
              local_res20 = 0xff;
              local_res23 = 0xff;
              FLinearColor::FLinearColor(local_c8,&local_res20);
              in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffff00;
              in_stack_fffffffffffffec0 = 0;
              FUN_1427055a0(&local_b8,&local_118,local_c8,0,0,0,in_stack_fffffffffffffec8);
            }
            lVar12 = *(longlong *)(pfVar2 + 8);
            iVar11 = iVar11 + 1;
            lVar9 = lVar9 + 0x10;
          } while (iVar11 < *(int *)(lVar12 + lVar17));
        }
        iVar16 = iVar16 + 1;
        lVar17 = lVar17 + 0x28;
      } while (iVar16 < (int)pfVar2[10]);
    }
    fVar19 = pfVar2[4];
    fVar20 = (*(float *)(param_2 + 0x8e0) - pfVar2[1]) * (1.0 / pfVar2[2]);
    fVar18 = (*(float *)(param_2 + 0x8dc) - *pfVar2) * (1.0 / pfVar2[2]);
    uVar6 = (longlong)(int)((int)fVar20 - (uint)(fVar20 < 0.0)) / (longlong)(int)fVar19;
    uVar4 = (uint)((longlong)((ulonglong)(uint)((int)uVar6 >> 0x1f) << 0x20 | uVar6 & 0xffffffff) %
                  (longlong)(int)pfVar2[5]);
    uVar7 = (int)uVar4 >> 0x1f;
    local_120 = 0;
    uVar6 = (longlong)(int)((int)fVar18 - (uint)(fVar18 < 0.0)) / (longlong)(int)fVar19;
    uVar5 = (uint)((longlong)((ulonglong)(uint)((int)uVar6 >> 0x1f) << 0x20 | uVar6 & 0xffffffff) %
                  (longlong)(int)pfVar2[5]);
    uVar8 = (int)uVar5 >> 0x1f;
    iVar16 = ((uVar4 ^ uVar7) - uVar7) * (int)fVar19 + ((uVar5 ^ uVar8) - uVar8);
    lVar17 = (longlong)iVar16 * 5;
    local_e8 = *(longlong *)(pfVar2 + 8);
    local_124 = iVar16;
    local_f8 = lVar17;
    if (0 < *(int *)(local_e8 + 0x10 + (longlong)iVar16 * 0x28)) {
      lVar12 = 0;
      do {
        iVar11 = local_120;
        lVar9 = *(longlong *)(local_e8 + 8 + lVar17 * 8);
        local_118 = *(undefined8 *)(lVar12 + lVar9);
        fVar20 = pfVar2[2] + *(float *)(lVar12 + lVar9);
        fVar19 = pfVar2[2] + *(float *)(lVar12 + 4 + lVar9);
        local_104 = *(float *)(lVar12 + 8 + lVar9) + pfVar2[3];
        local_110 = *(float *)(lVar12 + 8 + lVar9);
        local_100 = 1;
        local_10c = CONCAT44(fVar19,fVar20);
        if ((*(float *)(param_2 + 0x8dc) <= (float)local_118) ||
           (fVar20 <= *(float *)(param_2 + 0x8dc))) {
LAB_141d6a064:
          if (DAT_146a98d3c != 0) {
            local_127 = 0x3232;
            local_128 = 0xff;
            local_125 = 0xff;
            FLinearColor::FLinearColor(local_d8,&local_128);
            uVar14 = 0;
            puVar13 = local_d8;
            goto LAB_141d6a093;
          }
        }
        else {
          local_118._4_4_ = (float)((ulonglong)local_118 >> 0x20);
          if ((*(float *)(param_2 + 0x8e0) <= local_118._4_4_) ||
             (((fVar19 <= *(float *)(param_2 + 0x8e0) || (*(float *)(param_2 + 0x8e4) <= local_110))
              || (local_104 <= *(float *)(param_2 + 0x8e4))))) goto LAB_141d6a064;
          if (((*(longlong **)(param_1 + 0x1e0) == (longlong *)0x0) ||
              (*(int *)(param_1 + 0x1e8) != *(int *)(*(longlong *)(param_3 + 0x1a68) + 0x18))) ||
             ((*(int *)(param_1 + 0x1ec) != iVar16 ||
              (*(uint *)(param_1 + 0x1f0) != (uint)*(ushort *)(lVar12 + 0xc + lVar9))))) {
            uVar6 = (ulonglong)*(ushort *)(lVar12 + 0xc + lVar9);
            lVar15 = *(longlong *)(*(longlong *)(pfVar2 + 8) + 0x18 + lVar17 * 8);
            *(int *)(param_1 + 0x1ec) = iVar16;
            *(uint *)(param_1 + 0x1f0) = (uint)*(ushort *)(lVar12 + 0xc + lVar9);
            *(undefined4 *)(param_1 + 0x1e8) =
                 *(undefined4 *)(*(longlong *)(param_3 + 0x1a68) + 0x18);
            if (*(char *)(lVar15 + uVar6 * 0x18) == '\0') {
              plVar10 = (longlong *)(uVar6 * 0x18 + 8 + lVar15);
            }
            else {
              plVar10 = (longlong *)(param_1 + 0x1d0);
              *(undefined4 *)(param_1 + 0x1d8) = 0;
              if (0x7fffffff < *(uint *)(param_1 + 0x1dc)) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar10,0);
              }
              iVar16 = *(int *)(lVar15 + 4 + uVar6 * 0x18) + *(int *)(param_1 + 0x1d8);
              *(int *)(param_1 + 0x1d8) = iVar16;
              if (*(int *)(param_1 + 0x1dc) < iVar16) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar10);
              }
              in_stack_fffffffffffffec8 = 0;
              FUN_14165b8a0(1,*plVar10,*(undefined4 *)(lVar15 + 4 + uVar6 * 0x18),
                            *(undefined8 *)(lVar15 + 8 + uVar6 * 0x18),
                            *(undefined4 *)(lVar15 + 0x10 + uVar6 * 0x18),
                            in_stack_fffffffffffffec0 & 0xffffff00,0xf);
            }
            *(longlong **)(param_1 + 0x1e0) = plVar10;
            lVar15 = (ulonglong)*(ushort *)(lVar12 + 0xe + lVar9) + *plVar10;
            lVar17 = local_f8;
          }
          else {
            lVar15 = (ulonglong)*(ushort *)(lVar12 + 0xe + lVar9) + **(longlong **)(param_1 + 0x1e0)
            ;
          }
          iVar11 = local_120;
          if (DAT_146a98d3c == 0) break;
          local_res21 = 0x32ff;
          local_res20 = 0x32;
          local_res23 = 0xff;
          FLinearColor::FLinearColor(local_c8,&local_res20);
          uVar14 = 1;
          puVar13 = local_c8;
LAB_141d6a093:
          in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffff00;
          in_stack_fffffffffffffec0 = 0;
          FUN_1427055a0(&local_b8,&local_118,puVar13,uVar14,0,0,in_stack_fffffffffffffec8);
          local_120 = iVar11;
          iVar16 = local_124;
        }
        local_120 = local_120 + 1;
        lVar12 = lVar12 + 0x10;
      } while (local_120 < *(int *)(local_e8 + 0x10 + lVar17 * 8));
    }
    if (local_a0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_a0 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*local_a0)(local_a0,1);
      }
    }
  }
  return lVar15;
}



// FUNCTION 141d6a140 FUN_141d6a140 body=110 status=ok
// SIG undefined FUN_141d6a140(void)

int * FUN_141d6a140(longlong param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x9c);
  fVar2 = (float)(*(int *)(param_1 + 0x370) - *(int *)(param_1 + 0x368)) * fVar1;
  *param_2 = -((int)ROUND(-0.5 - (fVar2 + fVar2)) >> 1);
  fVar1 = (float)(*(int *)(param_1 + 0x374) - *(int *)(param_1 + 0x36c)) * fVar1;
  param_2[1] = -((int)ROUND(-0.5 - (fVar1 + fVar1)) >> 1);
  return param_2;
}



// FUNCTION 141d6a1b0 FUN_141d6a1b0 body=254 status=ok
// SIG undefined FUN_141d6a1b0(void)

longlong FUN_141d6a1b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x150);
  uVar7 = *(int *)(param_1 + 0x154) * 0x50;
  if (0 < lVar8) {
    lVar6 = 0;
    lVar9 = *(longlong *)(param_1 + 0x148);
    if (*(longlong *)(param_1 + 0x148) == 0) {
      lVar9 = param_1 + 0x58;
    }
    do {
      iVar4 = *(int *)(lVar6 + 0x2c + lVar9);
      iVar3 = iVar4 + 0x1f;
      if (iVar3 < 0) {
        iVar3 = iVar4 + 0x3e;
      }
      lVar1 = lVar6 + 0xc;
      lVar2 = lVar6 + 0x48;
      lVar6 = lVar6 + 0x50;
      uVar7 = uVar7 + ((iVar3 >> 5) + *(int *)(lVar1 + lVar9) * 10 + *(int *)(lVar2 + lVar9)) * 4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x1834) + 0x1f;
  iVar3 = *(int *)(param_1 + 0x2dc) + 0x1f;
  iVar5 = *(int *)(param_1 + 0x28c) + 0x1f;
  return (ulonglong)uVar7 +
         (ulonglong)
         (uint)((((int)((iVar4 >> 0x1f & 0x1fU) + iVar4) >> 5) + *(int *)(param_1 + 0x1814) * 0x16 +
                *(int *)(param_1 + 0x1850)) * 4) +
         (ulonglong)
         (uint)((((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) + *(int *)(param_1 + 700) * 0xc +
                *(int *)(param_1 + 0x2f8)) * 4) +
         (ulonglong)
         (uint)((((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) + *(int *)(param_1 + 0x26c) * 3 +
                *(int *)(param_1 + 0x2a8)) * 4) + 0x1860;
}



// FUNCTION 141d6a2b0 FUN_141d6a2b0 body=389 status=ok
// SIG undefined FUN_141d6a2b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_141d6a2b0(undefined8 param_1,undefined8 param_2,int param_3,char param_4,byte param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  wchar_t *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_141d69780();
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 0x4b0);
    if (((((longlong *)*plVar1 == (longlong *)0x0) ||
         (lVar2 = (**(code **)(*(longlong *)*plVar1 + 0x10))(), *(int *)(lVar2 + 0x18) != param_3))
        || (lVar2 = (**(code **)(*(longlong *)*plVar1 + 0x10))(),
           (*(int *)(lVar2 + 0x1c) != 0) != (bool)param_4)) ||
       (lVar2 = (**(code **)(*(longlong *)*plVar1 + 0x10))(),
       (*(byte *)(lVar2 + 0x36) & 1) != param_5)) {
      local_78 = DAT_1464c9cc8;
      local_74 = param_3 * param_3;
      local_68 = 1;
      local_60 = 1;
      local_88 = _DAT_1464c9cb8;
      uStack_84 = uRam00000001464c9cbc;
      uStack_80 = uRam00000001464c9cc0;
      uStack_7c = DAT_1464c9cc4;
      local_5c = 0x25;
      if (DAT_1464ca4a0 != '\0') {
        local_5c = 0x12;
      }
      local_6c = 0;
      local_64 = 0x10000;
      local_54 = 9;
      if (param_5 != 0) {
        local_54 = 0x10008;
      }
      local_58 = 0;
      local_50 = 0;
      local_40 = 1;
      if (param_4 != '\0') {
        local_74 = param_3;
        local_6c = param_3;
      }
      local_98 = 1;
      local_a0 = 1;
      local_48 = L"CombineLUTs";
      local_a8 = L"CombineLUTs";
      local_70 = param_3;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_88,plVar1);
    }
    return *plVar1 + 8;
  }
  return 0;
}



// FUNCTION 141d6a440 GetTonemappingLUTTexture body=62 status=ok
// SIG undefined GetTonemappingLUTTexture(void)

longlong FViewInfo::GetTonemappingLUTTexture(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_141d69780();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x4b8) != '\0')) {
    lVar2 = *(longlong *)(lVar1 + 0x4b0) + 0x10;
    if (*(longlong *)(lVar1 + 0x4b0) == 0) {
      lVar2 = 0;
    }
    return lVar2;
  }
  return 0;
}



// FUNCTION 141d6a480 FUN_141d6a480 body=404 status=ok
// SIG undefined FUN_141d6a480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141d6a480(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f98 [32];
  undefined4 local_f78;
  longlong local_f68;
  longlong local_f60;
  undefined1 local_f58 [4];
  uint local_f54;
  uint local_f44;
  uint local_f34;
  uint local_f24;
  uint local_f14;
  uint local_f04;
  uint local_ef4;
  uint local_ee4;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f98;
  iVar2 = FSceneViewFamily::GetFeatureLevel(*(undefined8 *)(param_4 + 0x10));
  if (((&DAT_1464c9c48)[iVar2] - 8 < 3) || ((&DAT_1464c9c48)[iVar2] == 0x18)) {
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      _guard_xfg_dispatch_icall_nop(local_f58,*(void **)(param_4 + 0x1ab8),0xf30);
      local_f54 = local_f54 ^ 0x80000000;
      local_f34 = local_f34 ^ 0x80000000;
      local_f44 = local_f44 ^ 0x80000000;
      local_f14 = local_f14 ^ 0x80000000;
      local_f24 = local_f24 ^ 0x80000000;
      local_ef4 = local_ef4 ^ 0x80000000;
      local_f04 = local_f04 ^ 0x80000000;
      local_ee4 = local_ee4 ^ 0x80000000;
      local_f78 = 1;
      (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_f68,local_f58,&DAT_146b09708);
      local_f60 = local_f68;
      if (local_f68 != 0) {
        LOCK();
        *(int *)(local_f68 + 8) = *(int *)(local_f68 + 8) + 1;
        UNLOCK();
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_f68);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xd8,&local_f60);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_f60);
      lVar3 = *(longlong *)(param_1 + 0xd8);
      goto LAB_141d6a5e3;
    }
  }
  lVar3 = *(longlong *)(param_4 + 0x20);
LAB_141d6a5e3:
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141d6a620 HasPostOpaqueExtentions body=43 status=ok
// SIG undefined HasPostOpaqueExtentions(void)

undefined8 FRendererModule::HasPostOpaqueExtentions(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x68) != 0) && (*(longlong **)(param_1 + 0x60) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141d6a650 FUN_141d6a650 body=61 status=ok
// SIG undefined FUN_141d6a650(void)

ulonglong FUN_141d6a650(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_141d69780();
  if ((((uVar2 != 0) && (lVar1 = *(longlong *)(param_1 + 0x10), lVar1 != 0)) &&
      (*(char *)(lVar1 + 0x62) != '\0')) && ((*(byte *)(lVar1 + 0x28) & 1) != 0)) {
    return (ulonglong)*(byte *)(uVar2 + 0x4a8);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141d6a690 FUN_141d6a690 body=911 status=ok
// SIG undefined FUN_141d6a690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d6a690(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar12 = 0;
  *(undefined8 *)(param_1 + 0x1aa0) = 0;
  *(undefined8 *)(param_1 + 0x1aa8) = 0;
  uVar10 = *(undefined8 *)(param_1 + 0x1ab8);
  *(undefined8 *)(param_1 + 0x1ab8) = 0;
  FMemory::operator_delete(uVar10,0xf30);
  uVar11 = *(uint *)(param_1 + 0x28cc) & 0xfffffff8;
  *(undefined1 *)(param_1 + 0x1207) = 0;
  *(uint *)(param_1 + 0x28cc) = uVar11;
  if (*(int *)(param_1 + 0x1a38) < 3) {
    uVar11 = uVar11 | 4;
  }
  else {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x20);
    if (plVar2 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar2 + 0x210))();
      uVar11 = *(uint *)(param_1 + 0x28cc);
      if (((lVar8 != 0) && (*(longlong *)(lVar8 + 0x1150) != 0)) &&
         (*(char *)(*(longlong *)(lVar8 + 0x1150) + 0x24) != '\0')) {
        *(undefined1 *)(param_1 + 0x1207) = 1;
        uVar11 = uVar11 | 1;
        goto LAB_141d6a73c;
      }
    }
    uVar11 = uVar11 | 2;
  }
LAB_141d6a73c:
  *(undefined8 *)(param_1 + 0x2810) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2818) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x28d0) = 0;
  iVar13 = 0;
  *(undefined4 *)(param_1 + 0x2f24) = 0;
  *(undefined8 *)(param_1 + 0x2f30) = 0;
  *(undefined1 *)(param_1 + 0x1201) = 1;
  *(uint *)(param_1 + 0x28cc) = uVar11 & 0xffff8007;
  *(undefined8 *)(param_1 + 0x2820) = _DAT_1468b5d90;
  uVar3 = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x2830) = 0;
  *(undefined8 *)(param_1 + 0x2838) = 0;
  *(undefined4 *)(param_1 + 0x2828) = uVar3;
  *(undefined4 *)(param_1 + 0x282c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2840) = 0;
  *(undefined8 *)(param_1 + 0x2850) = 0;
  *(undefined8 *)(param_1 + 0x2858) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x2860) = DAT_1468b5d98;
  *(undefined1 *)(param_1 + 0x2848) = 0;
  *(undefined4 *)(param_1 + 0x284c) = 0;
  *(undefined1 *)(param_1 + 0x2864) = 0;
  *(undefined8 *)(param_1 + 0x2868) = 0;
  *(undefined8 *)(param_1 + 0x2870) = 0;
  *(undefined8 *)(param_1 + 0x287c) = 0;
  *(undefined8 *)(param_1 + 0x2884) = 0;
  *(undefined4 *)(param_1 + 0x2878) = 0;
  *(undefined8 *)(param_1 + 0x288c) = 0;
  *(undefined4 *)(param_1 + 0x2894) = 0;
  *(undefined8 *)(param_1 + 0x28a4) = 0;
  *(undefined8 *)(param_1 + 0x28ac) = 0;
  *(undefined4 *)(param_1 + 0x28b4) = 0;
  *(undefined8 *)(param_1 + 0x2898) = 0;
  *(undefined4 *)(param_1 + 0x28a0) = 0;
  *(undefined8 *)(param_1 + 0x28b8) = 0;
  *(undefined4 *)(param_1 + 0x28c0) = 0;
  lVar8 = DAT_146a9d3f8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar9 = 4;
    if (DVar7 != DAT_1468c21c0) goto LAB_141d6a8b1;
  }
  lVar9 = 0;
LAB_141d6a8b1:
  lVar4 = DAT_146a9d3c8;
  iVar1 = *(int *)(lVar9 + lVar8);
  if ((-1 < iVar1) && (iVar12 = 4, iVar1 < 4)) {
    iVar12 = iVar1;
  }
  if (1 < *(int *)(param_1 + 0x1a38)) {
    iVar12 = 10;
  }
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar7 = GetCurrentThreadId(), lVar8 = 4, DVar7 == DAT_1468c21c0)) {
    lVar8 = 0;
  }
  iVar1 = *(int *)(lVar8 + lVar4);
  if ((-1 < iVar1) && (iVar13 = iVar12, iVar1 < iVar12)) {
    iVar13 = iVar1;
  }
  *(int *)(param_1 + 0x388) = iVar13;
  uVar10 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(param_1 + 0x1a38)]);
  *(undefined8 *)(param_1 + 0x3090) = uVar10;
  *(undefined8 *)(param_1 + 0x1ab0) = *(undefined8 *)(param_1 + 0x18);
  *(undefined2 *)(param_1 + 0x3098) = 0;
  *(undefined8 *)(param_1 + 0x1a30) = 0;
  *(undefined8 *)(param_1 + 0x2fa0) = 0;
  *(undefined4 *)(param_1 + 0x2fa8) = 0;
  *(undefined1 *)(param_1 + 0x2720) = 0;
  *(undefined4 *)(param_1 + 0x28c4) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x28c8) = DAT_1468b5d88._4_4_;
  *(undefined8 *)(param_1 + 0x2f28) = 0x3f800000;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
    *(undefined1 *)(param_1 + 0x30c4) = 0;
  }
  else {
    uVar10 = FUN_14240d6a0(0);
    uVar10 = AAIController::GetPerceptionComponent(uVar10);
    uVar10 = FArchive::operator<<(uVar10);
    bVar6 = UTextureLODSettings::GetSamplerFilter(uVar10,0);
    *(uint *)(param_1 + 0x30c0) = (uint)bVar6;
    *(undefined1 *)(param_1 + 0x30c4) = 1;
  }
  *(undefined1 *)(param_1 + 0x3011) = 0;
  return;
}



// FUNCTION 141d6aa20 InitDynamicRHI body=222 status=ok
// SIG undefined InitDynamicRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FHZBOcclusionTester::InitDynamicRHI(longlong param_1)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined1 local_30;
  wchar_t *local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 4) {
    iVar1 = DAT_1464c9c14;
  }
  if (1 < iVar1) {
    local_58 = DAT_146ab6938;
    local_54 = 0x100;
    local_68 = _DAT_146ab6928;
    uStack_64 = uRam0000000146ab692c;
    uStack_60 = uRam0000000146ab6930;
    uStack_5c = uRam0000000146ab6934;
    local_50 = 0x100;
    local_48 = 1;
    local_40 = 1;
    local_44 = 0x10000;
    local_3c = 2;
    local_38 = 0x240000;
    local_30 = 0;
    local_28 = L"UnknownTexture2D";
    local_78 = 0;
    local_80 = 1;
    local_88 = L"HZBResultsCPU";
    local_20 = 1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,&DAT_146ab6e78,&local_68,param_1 + 0x40);
  }
  return;
}



// FUNCTION 141d6ab00 FUN_141d6ab00 body=1348 status=ok
// SIG undefined FUN_141d6ab00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d6ab00(longlong param_1)

{
  undefined8 **ppuVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong local_190;
  undefined ***local_188;
  undefined4 local_180;
  longlong local_178;
  undefined1 *local_170;
  undefined4 local_168;
  char local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  float local_138;
  undefined8 *local_130;
  float local_128;
  float fStack_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_10c;
  float fStack_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined **local_f0;
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [160];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar6 = FSceneRenderTargets::Get();
  if (((*(longlong *)(param_1 + 0x1a40) == 0) ||
      (*(char *)(*(longlong *)(param_1 + 0x1a40) + 0xcb) == '\0')) ||
     (local_150 = *(longlong *)(param_1 + 0x1ab8), local_150 == 0)) {
    local_150 = *(longlong *)(param_1 + 0x1ab8);
    local_158 = '\0';
  }
  else {
    local_158 = '\x01';
  }
  uVar11 = *(uint *)(param_1 + 0x28cc);
  if (((uVar11 & 2) != 0) && (*(longlong *)(lVar6 + 0x438) == 0)) {
    local_158 = '\0';
  }
  puVar10 = (undefined8 *)0x0;
  local_140 = lVar6;
  if (local_158 == '\0') {
    local_148 = local_150;
    lVar7 = operator_new(0xf30,uVar11,local_150);
    local_130 = puVar10;
    if (lVar7 != 0) {
      local_130 = (undefined8 *)FUN_142745180(lVar7);
    }
    ppuVar1 = (undefined8 **)(param_1 + 0x1ab8);
    puVar9 = local_130;
    if (ppuVar1 != &local_130) {
      puVar9 = *ppuVar1;
      *ppuVar1 = local_130;
      local_130 = (undefined8 *)0x0;
      FMemory::operator_delete(puVar9,0xf30);
      puVar9 = puVar10;
    }
    FMemory::operator_delete(puVar9,0xf30);
    local_150 = *(longlong *)(param_1 + 0x1ab8);
    uVar11 = *(uint *)(param_1 + 0x28cc);
  }
  local_148 = local_150;
  if ((uVar11 & 1) == 0) {
    if (((uVar11 & 2) != 0) && (local_158 == '\0')) {
      uVar3 = *(undefined4 *)(lVar6 + 0x3bc);
      uVar4 = *(undefined8 *)(lVar6 + 0x378);
      uVar5 = FSceneRenderTargets::GetSceneColorFormat(lVar6);
      local_168 = 0xa0;
      local_170 = local_d8;
      local_178 = local_150;
      local_188 = (undefined ***)&local_128;
      local_180 = 2;
      local_198 = param_1 + 0x390;
      local_190 = param_1 + 0x28e0;
      FUN_141d74750(param_1,uVar4,uVar3,uVar5);
      puVar9 = *(undefined8 **)(lVar6 + 0x438);
      if (puVar9 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)operator_new(0x28);
        puVar9 = puVar10;
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *(undefined4 *)(puVar8 + 3) = 0;
          puVar8[4] = 0;
          puVar9 = puVar8;
        }
        *(undefined8 **)(lVar6 + 0x438) = puVar9;
      }
      local_e0 = 0xa0;
      local_f0 = &PTR_GetBoundProgramCounterForTimerManager_144163fd8;
      local_e8 = local_d8;
      local_188 = &local_f0;
      local_190 = 0;
      local_198 = CONCAT44(local_198._4_4_,1);
      FUN_141ac25e0(puVar9,4,0x28,0x1c);
      goto LAB_141d6ae8c;
    }
    if ((uVar11 & 4) != 0) {
      puVar2 = (undefined1 *)(local_150 + 0xaf0);
      uVar3 = *(undefined4 *)(lVar6 + 0x3bc);
      uVar4 = *(undefined8 *)(local_140 + 0x378);
      uVar5 = FSceneRenderTargets::GetSceneColorFormat();
      local_168 = 0xa0;
      local_178 = local_150;
      local_180 = 2;
      local_188 = (undefined ***)&local_128;
      local_198 = param_1 + 0x390;
      local_190 = param_1 + 0x28e0;
      local_170 = puVar2;
      FUN_141d74750(param_1,uVar4,uVar3,uVar5);
      lVar6 = local_140;
    }
  }
  else {
    uVar3 = *(undefined4 *)(lVar6 + 0x3bc);
    uVar4 = *(undefined8 *)(lVar6 + 0x378);
    uVar5 = FSceneRenderTargets::GetSceneColorFormat(lVar6);
    local_168 = 0;
    local_170 = (undefined1 *)0x0;
    local_178 = local_148;
    local_180 = 2;
    local_188 = (undefined ***)&local_128;
    local_198 = param_1 + 0x390;
    local_190 = param_1 + 0x28e0;
    FUN_141d74750(param_1,uVar4,uVar3,uVar5);
  }
  if ((local_158 != '\0') && ((*(byte *)(param_1 + 0x28cc) & 2) != 0)) {
    local_148 = *(longlong *)(lVar6 + 0x378);
    local_190 = param_1 + 0x390;
    local_198 = param_1 + 0x1aa0;
    local_188 = (undefined ***)(param_1 + 0x28e0);
    FUN_14275c280(param_1,*(undefined8 *)(param_1 + 0x1ab8),&local_148,
                  *(undefined4 *)(lVar6 + 0x3bc));
  }
LAB_141d6ae8c:
  local_198 = CONCAT44(local_198._4_4_,1);
  (**(code **)(*DAT_146ab6358 + 0x110))
            (DAT_146ab6358,&local_140,*(undefined8 *)(param_1 + 0x1ab8),&DAT_146b09708);
  local_150 = local_140;
  if (local_140 != 0) {
    LOCK();
    *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_140);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x20,&local_150);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
  *(ulonglong *)(param_1 + 0x288c) = CONCAT44(fStack_124,local_128);
  *(float *)(param_1 + 0x2894) = local_120;
  *(float *)(param_1 + 0x28a4) = (local_11c - local_128) / (float)DAT_1464c32d8;
  *(ulonglong *)(param_1 + 0x28ac) = CONCAT44(local_118 - fStack_124,local_11c - local_128);
  *(float *)(param_1 + 0x28b4) = local_114 - local_120;
  *(ulonglong *)(param_1 + 0x2898) = CONCAT44(fStack_108,local_10c);
  *(float *)(param_1 + 0x28a0) = local_104;
  local_138 = local_f8 - local_104;
  *(float *)(param_1 + 0x28a8) = (local_100 - local_10c) / (float)DAT_1464c32d8;
  *(ulonglong *)(param_1 + 0x28b8) = CONCAT44(local_fc - fStack_108,local_100 - local_10c);
  *(float *)(param_1 + 0x28c0) = local_138;
  puVar9 = puVar10;
  if (0 < *(int *)(param_1 + 0x2278)) {
    do {
      (**(code **)**(undefined8 **)((longlong)puVar10 + *(longlong *)(param_1 + 0x2270)))();
      uVar11 = (int)puVar9 + 1;
      puVar10 = puVar10 + 1;
      puVar9 = (undefined8 *)(ulonglong)uVar11;
    } while ((int)uVar11 < *(int *)(param_1 + 0x2278));
  }
  return;
}



// FUNCTION 141d6b050 FUN_141d6b050 body=190 status=ok
// SIG undefined FUN_141d6b050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d6b050(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  int local_res8 [2];
  
  if (DAT_146a9e668 == '\0') {
    uVar5 = 0;
    local_res8[0] = 0;
    DAT_146a9e668 = '\x01';
    FConfigCacheIni::GetInt
              (DAT_1468b6148,L"MemoryPools",L"FLightPrimitiveInteractionInitialBlockSize",local_res8
               ,&DAT_1468e2360);
    iVar2 = local_res8[0];
    if (local_res8[0] != 0) {
      puVar3 = (undefined8 *)FMemory::Malloc(local_res8[0] * 0x48,0);
      puVar4 = puVar3;
      puVar6 = puVar3;
      if (iVar2 != 1) {
        do {
          iVar1 = uVar5 + 1;
          uVar5 = uVar5 + 1;
          puVar4 = (undefined8 *)((ulonglong)(uint)(iVar1 * 0x48) + (longlong)puVar3);
          *puVar6 = puVar4;
          puVar6 = puVar4;
        } while (uVar5 < iVar2 - 1U);
      }
      *puVar4 = DAT_146a99070;
      _DAT_146a99078 = _DAT_146a99078 + iVar2;
      DAT_146a99070 = puVar3;
    }
  }
  return;
}



// FUNCTION 141d6b110 FUN_141d6b110 body=182 status=ok
// SIG undefined FUN_141d6b110(void)

bool FUN_141d6b110(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_res8;
  int local_res20 [2];
  
  lVar4 = *(longlong *)(param_1 + 0x148);
  if (*(longlong *)(param_1 + 0x148) == 0) {
    lVar4 = param_1 + 0x58;
  }
  plVar5 = (longlong *)(lVar4 + (longlong)(*(int *)(param_1 + 500) % param_4) * 0x50);
  TSet<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>,FDefaultSetAllocator>
  ::FindId(plVar5,local_res20);
  puVar2 = (undefined8 *)0x0;
  if (local_res20[0] != -1) {
    puVar2 = (undefined8 *)(*plVar5 + (longlong)local_res20[0] * 0x28);
  }
  local_res8 = 0;
  puVar3 = puVar2 + 3;
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if ((puVar3 != (undefined8 *)0x0) &&
     (cVar1 = (**(code **)(*DAT_146ab6358 + 0x340))(DAT_146ab6358,*puVar3,&local_res8,1),
     cVar1 != '\0')) {
    return local_res8 == 0;
  }
  return false;
}



// FUNCTION 141d6b1d0 IsValidFrame body=11 status=ok
// SIG undefined IsValidFrame(void)

bool FHZBOcclusionTester::IsValidFrame(longlong param_1,uint param_2)

{
  return (param_2 & 0x7fffffff) == *(uint *)(param_1 + 0x50);
}



// FUNCTION 141d6b1e0 IsVisible body=65 status=ok
// SIG undefined IsVisible(void)

undefined8 FHZBOcclusionTester::IsVisible(longlong param_1,uint param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x48) >> 8),
                  *(char *)((longlong)
                            (int)(((param_2 & 7) +
                                  ((((param_2 & 0x3f) >> 3) + (param_2 >> 0xb) * 8) * 0x20 +
                                  (param_2 >> 6 & 0x1f)) * 8) * 4) + *(longlong *)(param_1 + 0x48))
                  != '\0');
}



// FUNCTION 141d6b230 FUN_141d6b230 body=81 status=ok
// SIG undefined FUN_141d6b230(void)

void FUN_141d6b230(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  iVar1 = *(int *)(param_1 + 0xd8);
  *(int *)(param_1 + 0xd8) = iVar1 + 1;
  if (*(int *)(param_1 + 0xdc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0xd0),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 141d6b290 FUN_141d6b290 body=161 status=ok
// SIG undefined FUN_141d6b290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d6b290(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_18 [2];
  
  if (*(int *)(param_1 + 0x50) != -1) {
    QueryPerformanceCounter(local_18);
    local_res18[0] = 0;
    local_res8[0] = 0;
    (**(code **)(*DAT_146ab6358 + 0x6b8))
              (DAT_146ab6358,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10),
               param_1 + 0x48,local_res18,local_res8);
    QueryPerformanceCounter(&local_res20);
    DAT_146ac3acc = DAT_146ac3acc + (local_res20.s.LowPart - local_18[0]._0_4_);
    _DAT_146ac3aec = _DAT_146ac3aec + 1;
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    *(undefined **)(param_1 + 0x48) = &DAT_1464c3104;
  }
  return;
}



// FUNCTION 141d6b340 FUN_141d6b340 body=56 status=ok
// SIG undefined FUN_141d6b340(void)

void FUN_141d6b340(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"STAGE",1);
  FUN_141d72970(param_2,L"GROUP_DIM_SHIFT",3);
  return;
}



// FUNCTION 141d6b380 FUN_141d6b380 body=53 status=ok
// SIG undefined FUN_141d6b380(void)

void FUN_141d6b380(undefined8 param_1,undefined8 param_2)

{
  FUN_141d72970(param_2,L"STAGE",0);
  FUN_141d72970(param_2,L"GROUP_DIM_SHIFT",3);
  return;
}



// FUNCTION 141d6b3c0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void THZBBuildPS<1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FUN_141d72970(param_2,L"STAGE",1);
  local_18 = local_res18;
  local_res18[0] = 0;
  local_10 = local_res10;
  local_res10[0] = 0xd;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res20,&local_18,0);
  return;
}



// FUNCTION 141d6b420 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void THZBBuildPS<0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FUN_141d72970(param_2,L"STAGE",0);
  local_18 = local_res18;
  local_res18[0] = 0;
  local_10 = local_res10;
  local_res10[0] = 0xd;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res20,&local_18,0);
  return;
}



// FUNCTION 141d6b560 FUN_141d6b560 body=396 status=ok
// SIG undefined FUN_141d6b560(void)

void FUN_141d6b560(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  short *psVar3;
  undefined1 local_res18 [8];
  longlong local_58;
  ulonglong local_50;
  longlong local_48 [2];
  short *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  FString::PrintfImpl(&local_38,&DAT_144dd47e8,0x3f8eb851e0000000);
  psVar3 = &DAT_143f3eda8;
  if (local_30 != 0) {
    psVar3 = local_38;
  }
  local_50 = 0;
  local_58 = 0;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (psVar3[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_50 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    FGenericPlatformString::Memcpy(local_58,psVar3,(longlong)(int)uVar1 * 2);
  }
  local_48[0] = 0;
  local_48[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"UNDEFINED_ACCURACY",0x26);
  local_28 = local_48;
  local_20 = &local_58;
  FUN_140497620(param_3 + 0x200,local_res18,&local_28,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_38 != (short *)0x0) {
    FMemory::Free();
  }
  FUN_141d72970(param_3,L"MAX_NUM_TEX_COORD",4);
  FUN_141d72970(param_3,L"MAX_NUM_TEXTURE_REGISTER",0x20);
  FUN_141ac7cb0(param_1,param_2,param_3);
  return;
}



// FUNCTION 141d6b6f0 FUN_141d6b6f0 body=136 status=ok
// SIG undefined FUN_141d6b6f0(void)

longlong FUN_141d6b6f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
  lVar1 = operator_new(0x1b8);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FRHICommandListBase::FRHICommandListBase(lVar1,*(undefined4 *)(param_1[10] + 0x88));
  }
  (**(code **)(*param_1 + 8))(param_1,lVar1);
  if (*(char *)((longlong)param_1 + 0xb1) != '\0') {
    uVar2 = FSceneRenderTargets::Get(param_1[10]);
    lVar3 = param_1[0xc];
    if (lVar3 == 0) {
      lVar3 = FUN_141ce0f80(uVar2,param_1[1]);
      param_1[0xc] = lVar3;
    }
    FSceneRenderTargets::SetSnapshotOnCmdList(lVar3,lVar1);
  }
  return lVar1;
}



// FUNCTION 141d6b780 FUN_141d6b780 body=914 status=ok
// SIG undefined FUN_141d6b780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d6b780(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_1e8 [32];
  float local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  float local_1b0;
  float local_1a8;
  longlong local_190;
  undefined4 local_188;
  undefined4 local_180;
  int local_178 [2];
  int local_170;
  int iStack_16c;
  int local_168 [2];
  longlong local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar13 = (longlong *)0x0;
  local_178[0] = 0;
  local_158 = 0;
  local_160 = param_3;
  puVar6 = (undefined8 *)(**(code **)(*param_4 + 8))(param_4);
  local_1c0 = CONCAT31(local_1c0._1_3_,1);
  local_1c8 = 0.0;
  FUN_141ad74f0(param_1,*puVar6,0,0);
  local_d8 = 0;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d0 = 0;
  local_cc = 0x26;
  local_c4 = 0;
  local_bc = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  FUN_14049afe0(param_1,&local_118);
  local_e8 = FUN_1404a0ce0();
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  lVar7 = FUN_1419ef210((&DAT_1464c9c48)[param_5]);
  local_130 = 0;
  local_138 = &DAT_146b09c50;
  plVar11 = (longlong *)(lVar7 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar11,local_168,&local_138);
  plVar9 = plVar13;
  if (local_168[0] != -1) {
    plVar9 = (longlong *)((longlong)local_168[0] * 0x20 + *plVar11);
  }
  local_120 = 0;
  plVar12 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar12 = plVar13;
  }
  local_128 = &DAT_146a98ef0;
  lVar7 = *plVar12;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar11,local_178,&local_128);
  plVar9 = plVar13;
  if (local_178[0] != -1) {
    plVar9 = (longlong *)((longlong)local_178[0] * 0x20 + *plVar11);
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  lVar1 = *plVar11;
  local_118 = DAT_1464c2720;
  if (lVar7 == 0) {
    local_150 = 0;
    plVar11 = (longlong *)0x1;
    plStack_110 = plVar13;
  }
  else {
    lVar2 = *(longlong *)(lVar7 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_110 = *(longlong **)(lVar2 + 0x38);
    plVar11 = plVar13;
  }
  uVar8 = 0;
  if (plVar11 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_148 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar8 = *(undefined8 *)(lVar2 + 0x40);
  }
  local_f8 = uVar8;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_148);
  }
  local_cc = local_cc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_118,2,1);
  plVar11 = *(longlong **)(param_2 + 0x30);
  local_160 = (**(code **)(**(longlong **)(local_160 + 0x30) + 0x20))();
  if (local_160 != 0) {
    LOCK();
    *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
    UNLOCK();
  }
  local_140 = (**(code **)(*plVar11 + 0x20))(plVar11);
  if (local_140 != 0) {
    LOCK();
    *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
    UNLOCK();
  }
  FODSCapturePS::SetParameters(lVar1,param_1,&local_140,&local_160);
  (**(code **)(*param_4 + 0x20))(param_4);
  iVar5 = iStack_16c;
  iVar4 = local_170;
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar10 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  local_180 = 1;
  local_188 = 1;
  **(undefined8 **)(param_1 + 8) = puVar10;
  *(undefined8 **)(param_1 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f59420;
  puVar10[2] = 0;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(int *)((longlong)puVar10 + 0x1c) = iVar4;
  *(int *)(puVar10 + 4) = iVar5;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
  local_1c8 = (float)iStack_16c;
  local_1b0 = (float)local_170;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1a8 = local_1c8;
  local_190 = lVar7;
  DrawRectangle(param_1,0,0);
  return;
}



// FUNCTION 141d6bb20 FUN_141d6bb20 body=31 status=ok
// SIG undefined FUN_141d6bb20(void)

void FUN_141d6bb20(void)

{
  undefined1 local_18 [24];
  
  FUN_142325a50(local_18,0);
  FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext(local_18);
  return;
}



// FUNCTION 141d6bb40 FUN_141d6bb40 body=571 status=ok
// SIG undefined FUN_141d6bb40(void)

void FUN_141d6bb40(void)

{
  undefined4 *puVar1;
  char cVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined1 local_18 [16];
  
  puVar8 = (undefined4 *)0x0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_146a9ec18) && (_Init_thread_header(&DAT_146a9ec18), DAT_146a9ec18 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportSimpleForwardShading");
    puVar6 = puVar8;
    if (plVar5 != (longlong *)0x0) {
      puVar6 = (undefined4 *)(**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a9ec10 = puVar6;
    _Init_thread_footer(&DAT_146a9ec18);
  }
  if ((*piVar7 < DAT_146a9ec28) && (_Init_thread_header(&DAT_146a9ec28), DAT_146a9ec28 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SimpleForwardShading");
    puVar6 = puVar8;
    if (plVar5 != (longlong *)0x0) {
      puVar6 = (undefined4 *)(**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a9ec20 = puVar6;
    _Init_thread_footer(&DAT_146a9ec28);
  }
  puVar6 = DAT_146a9ec20;
  bVar9 = DAT_146a9dcb0 != 0;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    puVar4 = (undefined4 *)&DAT_00000004;
    if (DVar3 == DAT_1468c21c0) goto LAB_141d6bbd3;
  }
  else {
LAB_141d6bbd3:
    puVar4 = puVar8;
  }
  puVar1 = DAT_146a9ec10;
  if (bVar9 == (*(int *)((longlong)puVar4 + (longlong)puVar6) != 0)) goto LAB_141d6bc43;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    puVar6 = (undefined4 *)&DAT_00000004;
    if (DVar3 == DAT_1468c21c0) goto LAB_141d6bc16;
  }
  else {
LAB_141d6bc16:
    puVar6 = puVar8;
  }
  if ((*(int *)((longlong)puVar6 + (longlong)puVar1) != 0) &&
     (cVar2 = FUN_141ee4e30(DAT_146ab62cc), cVar2 != '\0')) {
    FUN_142325a50(local_18,0);
    FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext
              (local_18);
  }
LAB_141d6bc43:
  puVar8 = DAT_146a9ec20;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    DAT_146a9dcb0 = puVar8[1];
  }
  else {
    DAT_146a9dcb0 = *puVar8;
  }
  return;
}



// FUNCTION 141d6bd80 FUN_141d6bd80 body=495 status=ok
// SIG undefined FUN_141d6bd80(void)

void FUN_141d6bd80(longlong param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  long lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  float *pfVar8;
  longlong lVar9;
  longlong local_res8;
  
  lVar3 = FSceneRenderTargets::Get(param_2);
  lVar5 = 0x464c2590;
  FUN_141d45170(&DAT_1464c2590,*(undefined8 *)(param_1 + 0xc0));
  AK::MemoryMgr::StartProfileThreadUsage(lVar5);
  *(undefined2 *)(lVar3 + 0x2d8) = 0;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar9 = (longlong)*(int *)(param_1 + 200) * 0x30d0 + lVar3;
  if (lVar3 != lVar9) {
    pfVar8 = (float *)(lVar3 + 0x16c8);
    do {
      lVar2 = *(longlong *)(pfVar8 + 0xfa);
      if (lVar2 != 0) {
        fVar1 = pfVar8[2];
        if (((1e-05 <= fVar1 * pfVar8[-2] * fVar1 * pfVar8[-2]) ||
            (1e-05 <= fVar1 * pfVar8[-1] * fVar1 * pfVar8[-1])) ||
           (1e-05 <= fVar1 * *pfVar8 * fVar1 * *pfVar8)) {
          FUN_141bc0600(lVar2,lVar3,param_1 + 0x10);
        }
        if (((int)pfVar8[0xdc] < 2) && (DAT_146a98d44 != 0)) {
          plVar6 = (longlong *)(lVar2 + 0x460);
          if (*plVar6 == 0) {
            puVar4 = (undefined8 *)operator_new(0x18);
            puVar7 = (undefined8 *)0x0;
            if (puVar4 != (undefined8 *)0x0) {
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4[2] = 0;
              puVar7 = puVar4;
            }
            if (plVar6 != &local_res8) {
              lVar2 = *plVar6;
              *plVar6 = (longlong)puVar7;
              TDefaultDelete<FSceneSoftwareOcclusion>::operator()(plVar6,lVar2);
              puVar7 = (undefined8 *)0x0;
            }
            plVar6 = &local_res8;
LAB_141d6beda:
            TDefaultDelete<FSceneSoftwareOcclusion>::operator()(plVar6,puVar7);
          }
        }
        else {
          plVar6 = (longlong *)(lVar2 + 0x460);
          puVar7 = (undefined8 *)*plVar6;
          if (puVar7 != (undefined8 *)0x0) {
            *plVar6 = 0;
            goto LAB_141d6beda;
          }
        }
      }
      lVar3 = lVar3 + 0x30d0;
      pfVar8 = pfVar8 + 0xc34;
    } while (lVar3 != lVar9);
  }
  plVar6 = *(longlong **)(param_1 + 8);
  lVar3 = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x1c8))
              (plVar6,(longlong)plVar6 + 0x192c,plVar6 + 0x324,(longlong)plVar6 + 0x1924,
               plVar6 + 0x325);
    lVar3 = *(longlong *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x604c) = *(undefined4 *)(lVar3 + 0x6048);
  }
  return;
}



// FUNCTION 141d6bf80 FUN_141d6bf80 body=1285 status=ok
// SIG undefined FUN_141d6bf80(void)

void FUN_141d6bf80(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  int iStackX_c;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  uint uStackX_24;
  int local_a8;
  int local_a4;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int local_74;
  
  if ((*(char *)(param_1 + 0x26b) == '\0') || (*(int *)(param_1 + 0x278) < 1)) {
    cVar2 = FUN_14275f0e0(param_1 + 0x10);
    if (cVar2 == '\0') {
      lVar7 = *(longlong *)(param_1 + 0xc0);
      lVar12 = (longlong)*(int *)(param_1 + 200) * 0x30d0 + lVar7;
      if (lVar7 != lVar12) {
        puVar6 = (undefined4 *)(lVar7 + 0x1aac);
        do {
          lVar7 = lVar7 + 0x30d0;
          puVar6[-3] = puVar6[-0x5d1];
          puVar6[-2] = puVar6[-0x5d0];
          puVar6[-1] = puVar6[-0x5cf];
          *puVar6 = puVar6[-0x5ce];
          puVar6 = puVar6 + 0xc34;
        } while (lVar7 != lVar12);
      }
      FUN_141d627a0(param_1);
      return;
    }
    uVar9 = 0;
    local_90 = 0;
    local_88 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      TArray<float,FDefaultAllocator>::ResizeTo(&local_90);
    }
    lVar7 = *(longlong *)(param_1 + 0xc0);
    lVar12 = (longlong)*(int *)(param_1 + 200) * 0x30d0 + lVar7;
    for (; lVar7 != lVar12; lVar7 = lVar7 + 0x30d0) {
      cVar2 = FUN_141c449c0(&DAT_146a503f0,lVar7,*(undefined4 *)(param_1 + 0x2a0),0);
      uVar11 = local_88;
      if ((cVar2 == '\0') &&
         ((*(char *)(lVar7 + 0x1204) == '\0' || (*(int *)(param_1 + 0x2a0) < 2)))) {
        *(undefined4 *)(lVar7 + 0x1a10) = 0;
      }
      lVar10 = (longlong)(int)local_88;
      iVar3 = (int)local_88 + 1;
      local_88 = CONCAT44(local_88._4_4_,iVar3);
      if (local_88._4_4_ < iVar3) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_90,uVar11 & 0xffffffff);
      }
      *(undefined4 *)(local_90 + lVar10 * 4) = 0x3f800000;
    }
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))(*(longlong **)(param_1 + 0xb8),&local_90);
    iVar3 = *(int *)(param_1 + 200);
    local_80 = 0;
    local_74 = 0;
    iVar5 = 0;
    if (0 < iVar3) {
      local_a0 = 0;
      uVar11 = uVar9;
      uVar13 = uVar9;
      do {
        lVar7 = *(longlong *)(param_1 + 0xc0);
        fVar17 = *(float *)(local_a0 + local_90) * *(float *)(param_1 + 0xac);
        fVar16 = (float)(*(int *)(uVar11 + 0x370 + lVar7) - *(int *)(uVar11 + 0x368 + lVar7)) *
                 fVar17;
        iVar3 = -((int)ROUND(-0.5 - (fVar16 + fVar16)) >> 1);
        fVar16 = (float)(*(int *)(uVar11 + 0x374 + lVar7) - *(int *)(uVar11 + 0x36c + lVar7)) *
                 fVar17;
        uVar14 = -((int)ROUND(-0.5 - (fVar16 + fVar16)) >> 1);
        local_res20 = iVar3;
        uStackX_24 = uVar14;
        iVar4 = FSceneViewFamily::GetFeatureLevel(param_1 + 0x10);
        if ((iVar4 < 2) && (cVar2 = FUN_142753b00(), cVar2 != '\0')) {
          uVar14 = (uVar14 & 1) + uVar14;
          uStackX_24 = uVar14;
        }
        fVar16 = (float)*(int *)(uVar11 + 0x368 + lVar7) * fVar17;
        fVar17 = (float)*(int *)(uVar11 + 0x36c + lVar7) * fVar17;
        local_a8 = -((int)ROUND(-0.5 - (fVar16 + fVar16)) >> 1);
        local_a4 = -((int)ROUND(-0.5 - (fVar17 + fVar17)) >> 1);
        QuantizeSceneBufferSize(&local_a8,&local_res18);
        if (*(int *)(DAT_146a9d3b0 + 4) != 0) {
          iStackX_1c = -(((int)ROUND(-0.5 - (*(float *)(param_1 + 0xac) + *(float *)(param_1 + 0xac)
                                            ) * (float)*(int *)(uVar11 + 0x374 + lVar7)) >> 1) +
                        uVar14);
        }
        lVar12 = uVar11 + lVar7;
        *(int *)(lVar12 + 0x1aa0) = local_res18;
        *(int *)(lVar12 + 0x1aa4) = iStackX_1c;
        local_98 = CONCAT44(iStackX_1c,local_res18);
        *(int *)(uVar11 + 0x1aa8 + lVar7) = iVar3 + local_res18;
        *(uint *)(uVar11 + 0x1aac + lVar7) = iStackX_1c + uVar14;
        if ((*(int *)(uVar11 + 0x1a14 + lVar7) == 1) &&
           ((*(int *)(uVar11 + 0x1a10 + lVar7) != 2 || (*(int *)(param_1 + 0x2a0) < 3)))) {
          *(undefined4 *)(uVar11 + 0x1a14 + lVar7) = 0;
        }
        iVar3 = (int)uVar13;
        local_78 = iVar3 + 1;
        if (local_74 < (int)local_78) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_80,uVar13);
        }
        uVar13 = (ulonglong)local_78;
        *(ulonglong *)(local_80 + (longlong)iVar3 * 8) = CONCAT44(uStackX_24,local_res20);
        if ((DAT_146b17150 != 0) &&
           (plVar1 = *(longlong **)(DAT_146b17150 + 0xab8), plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x38))
                    (plVar1,*(undefined4 *)(uVar11 + 0xf60 + lVar7),lVar12 + 0x1aa0);
        }
        uVar11 = uVar11 + 0x30d0;
        iVar5 = iVar5 + 1;
        iVar3 = *(int *)(param_1 + 200);
        local_a0 = local_a0 + 4;
      } while (iVar5 < iVar3);
    }
    lVar7 = local_80;
    uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0xc0) + 0x1aa0);
    uVar13 = uVar11 & 0xffffffff;
    uVar14 = (uint)uVar11;
    iStackX_c = (int)(uVar11 >> 0x20);
    if (1 < (longlong)iVar3) {
      lVar12 = (longlong)iVar3 + -1;
      piVar8 = (int *)(*(longlong *)(param_1 + 0xc0) + 0x4b74);
      do {
        uVar14 = piVar8[-1];
        if ((int)(uint)uVar13 <= piVar8[-1]) {
          uVar14 = (uint)uVar13;
        }
        uVar13 = (ulonglong)uVar14;
        iVar3 = *piVar8;
        if (iStackX_c <= *piVar8) {
          iVar3 = iStackX_c;
        }
        iStackX_c = iVar3;
        lVar12 = lVar12 + -1;
        piVar8 = piVar8 + 0xc34;
      } while (lVar12 != 0);
      iVar3 = *(int *)(param_1 + 200);
    }
    uVar11 = uVar9;
    if (0 < iVar3) {
      do {
        lVar12 = *(longlong *)(param_1 + 0xc0);
        uVar15 = (int)uVar11 + 1;
        piVar8 = (int *)(uVar9 + 0x1aa0 + lVar12);
        *piVar8 = *piVar8 - uVar14;
        piVar8 = (int *)(uVar9 + 0x1aa4 + lVar12);
        *piVar8 = *piVar8 - iStackX_c;
        piVar8 = (int *)(uVar9 + 0x1aa8 + lVar12);
        *piVar8 = *piVar8 - uVar14;
        piVar8 = (int *)(uVar9 + 0x1aac + lVar12);
        *piVar8 = *piVar8 - iStackX_c;
        uVar9 = uVar9 + 0x30d0;
        uVar11 = (ulonglong)uVar15;
      } while ((int)uVar15 < *(int *)(param_1 + 200));
    }
    FUN_141d627a0(param_1);
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
    if (local_90 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141d6c490 Process body=532 status=ok
// SIG undefined Process(void)

undefined8
FSceneSoftwareOcclusion::Process
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong *plVar7;
  void *pvVar8;
  longlong local_38;
  longlong local_30;
  
  if (*param_1 != 0) {
    uVar5 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes(uVar5,param_1,0xff);
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  plVar7 = param_1 + 2;
  plVar2 = param_1 + 1;
  if (plVar2 != plVar7) {
    lVar4 = *plVar2;
    *plVar2 = *plVar7;
    *plVar7 = 0;
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x3048) = 0;
      if (*(longlong *)(lVar4 + 0x3040) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar4 + 0x3000);
      FMemory::operator_delete(lVar4);
    }
  }
  pvVar8 = (void *)0x0;
  pvVar6 = (void *)operator_new(0x3050);
  if (pvVar6 != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(pvVar6,0,0x3050);
    *(undefined8 *)((longlong)pvVar6 + 0x3008) = 0;
    *(undefined8 *)((longlong)pvVar6 + 0x3020) = 0;
    *(undefined8 *)((longlong)pvVar6 + 0x3028) = 0;
    *(undefined4 *)((longlong)pvVar6 + 0x3030) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar6 + 0x3034) = 0;
    *(undefined8 *)((longlong)pvVar6 + 0x3040) = 0;
    *(undefined4 *)((longlong)pvVar6 + 0x3048) = 0;
    pvVar8 = pvVar6;
  }
  if (plVar7 == &local_30) {
    if (pvVar8 == (void *)0x0) goto LAB_141d6c61a;
    *(undefined4 *)((longlong)pvVar8 + 0x3048) = 0;
    if (*(longlong *)((longlong)pvVar8 + 0x3040) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ((longlong)pvVar8 + 0x3000);
  }
  else {
    pvVar6 = (void *)*plVar7;
    *plVar7 = (longlong)pvVar8;
    if (pvVar6 == (void *)0x0) goto LAB_141d6c61a;
    *(undefined4 *)((longlong)pvVar6 + 0x3048) = 0;
    if (*(longlong *)((longlong)pvVar6 + 0x3040) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ((longlong)pvVar6 + 0x3000);
    pvVar8 = pvVar6;
  }
  FMemory::operator_delete(pvVar8,0x3050);
LAB_141d6c61a:
  plVar7 = (longlong *)FUN_141d77770(&local_38,param_3,param_4,*plVar7);
  if (param_1 != plVar7) {
    lVar4 = *param_1;
    *param_1 = *plVar7;
    *plVar7 = 0;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  if (local_38 != 0) {
    LOCK();
    piVar1 = (int *)(local_38 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*plVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_141d5dff0(param_3,param_4);
  }
  return uVar5;
}



// FUNCTION 141d6c6b0 ProcessOccludeeGeom body=1494 status=ok
// SIG undefined ProcessOccludeeGeom(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ProcessOccludeeGeom(float *param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int *piVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_3188 [32];
  undefined4 *local_3168;
  int *local_3160;
  char local_3158;
  int local_3154;
  int local_3150;
  int *local_3148;
  longlong local_3140;
  int local_3138;
  int local_3134;
  int local_3130;
  int local_312c;
  int local_3128;
  int iStack_3124;
  int local_3120;
  int iStack_311c;
  int local_3118;
  int iStack_3114;
  int local_3110;
  undefined4 uStack_310c;
  longlong local_3108;
  longlong local_3100;
  longlong local_30f8;
  ulonglong local_30f0;
  longlong local_30e8;
  longlong local_30e0;
  float local_30d8;
  float fStack_30d4;
  float fStack_30d0;
  float fStack_30cc;
  float local_30c8;
  float fStack_30c4;
  float fStack_30c0;
  float fStack_30bc;
  float local_30b8;
  float fStack_30b4;
  float fStack_30b0;
  float fStack_30ac;
  float local_30a8;
  float fStack_30a4;
  float fStack_30a0;
  float fStack_309c;
  undefined8 local_3098;
  undefined8 uStack_3090;
  undefined8 local_3088;
  int local_3078 [512];
  undefined4 local_2878 [512];
  int local_2078 [2048];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_3188;
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  local_3158 = DAT_1464c2f8c != 0;
  local_3100 = *(longlong *)(param_1 + 0x10);
  lVar14 = *(longlong *)(param_1 + 0x14);
  local_312c = (int)param_1[0x12] / 2;
  local_30d8 = fVar6 * _DAT_1464c30d0 + fVar5 * _DAT_1464c30c0 + fVar7 * _DAT_1464c30e0 +
               fVar8 * _DAT_1464c30f0;
  fStack_30d4 = fVar6 * fRam00000001464c30d4 + fVar5 * fRam00000001464c30c4 +
                fVar7 * fRam00000001464c30e4 + fVar8 * fRam00000001464c30f4;
  fStack_30d0 = fVar6 * fRam00000001464c30d8 + fVar5 * fRam00000001464c30c8 +
                fVar7 * fRam00000001464c30e8 + fVar8 * fRam00000001464c30f8;
  fStack_30cc = fVar6 * fRam00000001464c30dc + fVar5 * fRam00000001464c30cc +
                fVar7 * fRam00000001464c30ec + fVar8 * fRam00000001464c30fc;
  fVar5 = param_1[4];
  fVar6 = param_1[5];
  fVar7 = param_1[6];
  fVar8 = param_1[7];
  local_30c8 = fVar6 * _DAT_1464c30d0 + fVar5 * _DAT_1464c30c0 + fVar7 * _DAT_1464c30e0 +
               fVar8 * _DAT_1464c30f0;
  fStack_30c4 = fVar6 * fRam00000001464c30d4 + fVar5 * fRam00000001464c30c4 +
                fVar7 * fRam00000001464c30e4 + fVar8 * fRam00000001464c30f4;
  fStack_30c0 = fVar6 * fRam00000001464c30d8 + fVar5 * fRam00000001464c30c8 +
                fVar7 * fRam00000001464c30e8 + fVar8 * fRam00000001464c30f8;
  fStack_30bc = fVar6 * fRam00000001464c30dc + fVar5 * fRam00000001464c30cc +
                fVar7 * fRam00000001464c30ec + fVar8 * fRam00000001464c30fc;
  fVar5 = param_1[8];
  fVar6 = param_1[9];
  fVar7 = param_1[10];
  fVar8 = param_1[0xb];
  local_30b8 = fVar6 * _DAT_1464c30d0 + fVar5 * _DAT_1464c30c0 + fVar7 * _DAT_1464c30e0 +
               fVar8 * _DAT_1464c30f0;
  fStack_30b4 = fVar6 * fRam00000001464c30d4 + fVar5 * fRam00000001464c30c4 +
                fVar7 * fRam00000001464c30e4 + fVar8 * fRam00000001464c30f4;
  fStack_30b0 = fVar6 * fRam00000001464c30d8 + fVar5 * fRam00000001464c30c8 +
                fVar7 * fRam00000001464c30e8 + fVar8 * fRam00000001464c30f8;
  fStack_30ac = fVar6 * fRam00000001464c30dc + fVar5 * fRam00000001464c30cc +
                fVar7 * fRam00000001464c30ec + fVar8 * fRam00000001464c30fc;
  fVar5 = param_1[0xc];
  fVar6 = param_1[0xd];
  fVar7 = param_1[0xe];
  fVar8 = param_1[0xf];
  uVar9 = ((int)(local_312c + (local_312c >> 0x1f & 0x1ffU)) >> 9) + 1;
  uVar11 = (ulonglong)uVar9;
  local_3150 = 0;
  local_30a8 = fVar6 * _DAT_1464c30d0 + fVar5 * _DAT_1464c30c0 + fVar7 * _DAT_1464c30e0 +
               fVar8 * _DAT_1464c30f0;
  fStack_30a4 = fVar6 * fRam00000001464c30d4 + fVar5 * fRam00000001464c30c4 +
                fVar7 * fRam00000001464c30e4 + fVar8 * fRam00000001464c30f4;
  fStack_30a0 = fVar6 * fRam00000001464c30d8 + fVar5 * fRam00000001464c30c8 +
                fVar7 * fRam00000001464c30e8 + fVar8 * fRam00000001464c30f8;
  fStack_309c = fVar6 * fRam00000001464c30dc + fVar5 * fRam00000001464c30cc +
                fVar7 * fRam00000001464c30ec + fVar8 * fRam00000001464c30fc;
  if (0 < (int)uVar9) {
    local_30f0 = (ulonglong)uVar9;
    local_3140 = param_2;
    do {
      iVar15 = 0x200;
      if (local_312c - local_3150 < 0x201) {
        iVar15 = local_312c - local_3150;
      }
      local_3160 = local_3078;
      local_3168 = local_2878;
      local_3130 = iVar15;
      local_30f8 = lVar14;
      if (local_3158 == '\0') {
        FUN_141d6cf10(&local_30d8,local_3100,iVar15,local_2078);
      }
      else {
        FUN_141d6cc90();
      }
      local_30e8 = (longlong)iVar15;
      lVar18 = 0;
      local_3108 = 0;
      if (0 < iVar15) {
        local_30e0 = lVar14 - (longlong)local_3078;
        do {
          iVar15 = local_2078[lVar18];
          iVar17 = *(int *)((longlong)local_3078 + local_30e0 + local_3108 * 4);
          iVar10 = local_2078[lVar18 + 1];
          iVar16 = local_2078[lVar18 + 2];
          iVar3 = local_2078[lVar18 + 3];
          lVar18 = lVar18 + 4;
          local_3154 = iVar17;
          if (local_3078[local_3108] == 0) {
            if ((iVar16 < iVar15) || (iVar3 < iVar10)) {
              if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
                plVar12 = (longlong *)param_3[8];
                if ((longlong *)param_3[8] == (longlong *)0x0) {
                  plVar12 = param_3 + 7;
                }
                iVar15 = *(int *)((longlong)plVar12 +
                                 ((longlong)(int)param_3[9] - 1U & (longlong)iVar17) * 4);
                if (iVar15 != -1) {
                  do {
                    piVar13 = (int *)((longlong)iVar15 * 0x10 + *param_3);
                    if (*piVar13 == iVar17) {
                      if ((iVar15 != -1) && (piVar13 != (int *)0x0)) goto LAB_141d6cc7d;
                      break;
                    }
                    iVar15 = piVar13[2];
                  } while (iVar15 != -1);
                }
              }
              local_3148 = &local_3154;
              FUN_141d578a0(param_3,&local_3134,&local_3148,0);
              piVar13 = (int *)((longlong)local_3134 * 0x10 + *param_3);
LAB_141d6cc7d:
              *(undefined1 *)(piVar13 + 1) = 0;
            }
            else {
              iVar4 = *(int *)(param_2 + 0x68);
              uVar2 = local_2878[local_3108];
              local_3098 = CONCAT44(iVar10,iVar15);
              uStack_3090 = CONCAT44(iVar3,iVar16);
              local_3088 = CONCAT44(iVar3,iVar15);
              *(int *)(param_2 + 0x68) = iVar4 + 1;
              local_3128 = iVar15;
              iStack_3124 = iVar10;
              local_3120 = iVar16;
              iStack_311c = iVar3;
              local_3118 = iVar15;
              iStack_3114 = iVar3;
              if (*(int *)(param_2 + 0x6c) < iVar4 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(param_2 + 0x60,iVar4);
              }
              lVar14 = *(longlong *)(param_2 + 0x60);
              plVar12 = (longlong *)(local_3140 + 0x70);
              puVar1 = (undefined4 *)(lVar14 + (longlong)iVar4 * 0x18);
              *puVar1 = (undefined4)local_3098;
              puVar1[1] = local_3098._4_4_;
              puVar1[2] = (undefined4)uStack_3090;
              puVar1[3] = uStack_3090._4_4_;
              *(undefined8 *)(lVar14 + 0x10 + (longlong)iVar4 * 0x18) = local_3088;
              iVar10 = *(int *)(local_3140 + 0x78);
              local_3148 = (int *)CONCAT44(local_3148._4_4_,iVar10);
              *(int *)(local_3140 + 0x78) = iVar10 + 1;
              if (*(int *)(local_3140 + 0x7c) < iVar10 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar12,iVar10);
                iVar10 = (int)local_3148;
              }
              *(int *)(*plVar12 + (longlong)iVar10 * 4) = iVar17;
              plVar12 = (longlong *)(local_3140 + 0x80);
              iVar17 = *(int *)(local_3140 + 0x88);
              *(int *)(local_3140 + 0x88) = iVar17 + 1;
              if (*(int *)(local_3140 + 0x8c) < iVar17 + 1) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar12,iVar17);
              }
              *(undefined1 *)((longlong)iVar17 + *plVar12) = 0;
              iVar17 = (int)((iVar15 >> 0x1f & 0x3fU) + iVar15) >> 6;
              if (iVar16 <= iVar15) {
                iVar16 = iVar15;
              }
              if (iVar15 <= iVar16) {
                iVar15 = iVar16;
              }
              iVar10 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fU)) >> 6;
              iVar15 = 0;
              if (-1 < iVar17) {
                iVar15 = iVar17;
              }
              lVar14 = (longlong)iVar15;
              iVar15 = 5;
              if (iVar10 < 6) {
                iVar15 = iVar10;
              }
              param_2 = local_3140;
              local_3110 = iVar4;
              uStack_310c = uVar2;
              if (lVar14 <= iVar15) {
                piVar13 = (int *)(lVar14 * 0x10 + 8 + local_3140);
                lVar14 = (iVar15 - lVar14) + 1;
                do {
                  iVar15 = *piVar13;
                  *piVar13 = iVar15 + 1;
                  if (piVar13[1] < iVar15 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (piVar13 + -2,iVar15);
                  }
                  plVar12 = (longlong *)(piVar13 + -2);
                  piVar13 = piVar13 + 4;
                  *(ulonglong *)(*plVar12 + (longlong)iVar15 * 8) = CONCAT44(uVar2,iVar4);
                  lVar14 = lVar14 + -1;
                  param_2 = local_3140;
                } while (lVar14 != 0);
              }
            }
          }
          else {
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              plVar12 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar12 = param_3 + 7;
              }
              iVar15 = *(int *)((longlong)plVar12 +
                               ((longlong)(int)param_3[9] - 1U & (longlong)iVar17) * 4);
              if (iVar15 != -1) {
                do {
                  piVar13 = (int *)((longlong)iVar15 * 0x10 + *param_3);
                  if (*piVar13 == iVar17) {
                    if ((iVar15 != -1) && (piVar13 != (int *)0x0)) goto LAB_141d6c9bd;
                    break;
                  }
                  iVar15 = piVar13[2];
                } while (iVar15 != -1);
              }
            }
            local_3148 = &local_3154;
            FUN_141d578a0(param_3,&local_3138,&local_3148,0);
            piVar13 = (int *)((longlong)local_3138 * 0x10 + *param_3);
LAB_141d6c9bd:
            *(undefined1 *)(piVar13 + 1) = 1;
          }
          local_3108 = local_3108 + 1;
          lVar14 = local_30f8;
          iVar15 = local_3130;
        } while (local_3108 < local_30e8);
      }
      local_3100 = local_3100 + (longlong)(iVar15 * 2) * 0xc;
      local_3150 = local_3150 + iVar15;
      local_30f0 = local_30f0 - 1;
      uVar11 = (ulonglong)iVar15;
      lVar14 = lVar14 + uVar11 * 4;
    } while (local_30f0 != 0);
  }
  return CONCAT71((int7)(uVar11 >> 8),1);
}



// FUNCTION 141d6cc90 FUN_141d6cc90 body=631 status=ok
// SIG undefined FUN_141d6cc90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d6cc90(float *param_1,undefined8 *param_2,uint param_3,int *param_4,undefined4 *param_5,
                  longlong param_6)

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
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint uVar41;
  undefined1 local_148 [8];
  float local_140;
  float fStack_13c;
  float local_130;
  float fStack_12c;
  float local_118 [4];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8 [4];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8 [4];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_b8;
  
  auVar29 = _DAT_146a9dc10;
  fVar28 = fRam0000000146a9dc0c;
  fVar27 = fRam0000000146a9dc08;
  fVar26 = fRam0000000146a9dc04;
  fVar25 = _DAT_146a9dc00;
  auVar24 = _DAT_146a9dbf0;
  local_b8 = DAT_1468387a8 ^ (ulonglong)local_148;
  fVar1 = param_1[0xe];
  fVar8 = *param_1;
  fVar9 = param_1[1];
  fVar10 = param_1[2];
  fVar11 = param_1[3];
  fVar12 = param_1[4];
  fVar13 = param_1[5];
  fVar14 = param_1[6];
  fVar15 = param_1[7];
  fVar16 = param_1[8];
  fVar17 = param_1[9];
  fVar18 = param_1[10];
  fVar19 = param_1[0xb];
  fVar20 = param_1[0xc];
  fVar21 = param_1[0xd];
  fVar22 = param_1[0xe];
  fVar23 = param_1[0xf];
  if (0 < (int)param_3) {
    param_6 = param_6 - (longlong)param_5;
    fVar4 = (float)DAT_146a9dc10;
    fVar5 = DAT_146a9dc10._4_4_;
    fVar6 = DAT_146a9dc10._8_4_;
    fVar7 = DAT_146a9dc10._12_4_;
    uVar34 = (ulonglong)param_3;
    do {
      uVar41 = 0;
      fVar2 = *(float *)(param_2 + 1);
      auVar37._4_4_ = 0.0 - fVar5;
      auVar37._0_4_ = 0.0 - fVar4;
      auVar37._8_4_ = 0.0 - fVar6;
      auVar37._12_4_ = 0.0 - fVar7;
      lVar33 = 0;
      local_140 = (float)*param_2;
      local_130 = (float)*(undefined8 *)((longlong)param_2 + 0xc);
      fVar3 = *(float *)((longlong)param_2 + 0x14);
      local_118[0] = local_140 * fVar8;
      local_118[1] = local_140 * fVar9;
      local_118[2] = local_140 * fVar10;
      local_118[3] = local_140 * fVar11;
      fStack_13c = (float)((ulonglong)*param_2 >> 0x20);
      local_108 = local_130 * fVar8;
      fStack_104 = local_130 * fVar9;
      fStack_100 = local_130 * fVar10;
      fStack_fc = local_130 * fVar11;
      fStack_12c = (float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xc) >> 0x20);
      local_f8[0] = fStack_13c * fVar12;
      local_f8[1] = fStack_13c * fVar13;
      local_f8[2] = fStack_13c * fVar14;
      local_f8[3] = fStack_13c * fVar15;
      local_e8 = fStack_12c * fVar12;
      fStack_e4 = fStack_12c * fVar13;
      fStack_e0 = fStack_12c * fVar14;
      fStack_dc = fStack_12c * fVar15;
      local_d8[0] = fVar2 * fVar16;
      local_d8[1] = fVar2 * fVar17;
      local_d8[2] = fVar2 * fVar18;
      local_d8[3] = fVar2 * fVar19;
      local_c8 = fVar3 * fVar16;
      fStack_c4 = fVar3 * fVar17;
      fStack_c0 = fVar3 * fVar18;
      fStack_bc = fVar3 * fVar19;
      auVar39 = auVar29;
      do {
        uVar30 = (ulonglong)*(uint *)((longlong)&DAT_144e50c48 + lVar33);
        uVar31 = (ulonglong)*(uint *)((longlong)&DAT_144e50c68 + lVar33);
        uVar32 = (ulonglong)*(uint *)((longlong)&DAT_144e50c88 + lVar33);
        lVar33 = lVar33 + 4;
        auVar35._0_4_ = local_118[uVar30 * 4] + fVar20 + local_f8[uVar31 * 4] + local_d8[uVar32 * 4]
        ;
        auVar35._4_4_ =
             local_118[uVar30 * 4 + 1] + fVar21 + local_f8[uVar31 * 4 + 1] +
             local_d8[uVar32 * 4 + 1];
        auVar35._8_4_ =
             local_118[uVar30 * 4 + 2] + fVar22 + local_f8[uVar31 * 4 + 2] +
             local_d8[uVar32 * 4 + 2];
        auVar35._12_4_ =
             local_118[uVar30 * 4 + 3] + fVar23 + local_f8[uVar31 * 4 + 3] +
             local_d8[uVar32 * 4 + 3];
        auVar36._4_4_ = auVar35._12_4_;
        auVar36._0_4_ = auVar35._12_4_;
        auVar36._8_4_ = auVar35._12_4_;
        auVar36._12_4_ = auVar35._12_4_;
        auVar36 = divps(auVar35,auVar36);
        uVar41 = uVar41 | -(uint)(auVar35._12_4_ < fVar1);
        auVar39 = minps(auVar39,auVar36);
        auVar37 = maxps(auVar37,auVar36);
      } while (lVar33 < 0x20);
      auVar38._0_4_ = auVar37._0_4_ + fVar25;
      auVar38._4_4_ = auVar37._4_4_ + fVar26;
      auVar38._8_4_ = auVar37._8_4_ + fVar27;
      auVar38._12_4_ = auVar37._12_4_ + fVar28;
      *(uint *)(param_6 + (longlong)param_5) = uVar41;
      auVar40._0_4_ = auVar39._0_4_ + fVar25;
      auVar40._4_4_ = auVar39._4_4_ + fVar26;
      auVar40._8_4_ = auVar39._8_4_ + fVar27;
      auVar40._12_4_ = auVar39._12_4_ + fVar28;
      auVar39 = minps(auVar38,auVar24);
      auVar37 = maxps(auVar40,ZEXT816(0));
      *param_4 = (int)auVar37._0_4_;
      param_4[1] = (int)auVar37._4_4_;
      param_4[2] = (int)auVar39._0_4_;
      param_4[3] = (int)auVar39._4_4_;
      param_4 = param_4 + 4;
      *param_5 = auVar39._8_4_;
      param_5 = param_5 + 1;
      uVar34 = uVar34 - 1;
      param_2 = param_2 + 3;
    } while (uVar34 != 0);
  }
  return;
}



// FUNCTION 141d6cf10 FUN_141d6cf10 body=1347 status=ok
// SIG undefined FUN_141d6cf10(void)

void FUN_141d6cf10(float *param_1,undefined8 *param_2,uint param_3,longlong param_4,longlong param_5
                  ,undefined4 *param_6)

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
  undefined4 uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  int *piVar22;
  ulonglong uVar23;
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
  float fStack_134;
  float fStack_124;
  float local_118 [4];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8 [4];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8 [4];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  fVar4 = param_1[8];
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  fVar9 = param_1[9];
  fVar10 = param_1[4];
  fVar11 = param_1[0xd];
  fVar12 = param_1[0xe];
  fVar13 = param_1[0xf];
  fVar14 = param_1[10];
  fVar15 = param_1[0xc];
  fVar16 = param_1[0xb];
  if (0 < (int)param_3) {
    piVar22 = (int *)(param_4 + 8);
    param_5 = param_5 - (longlong)param_6;
    uVar23 = (ulonglong)param_3;
    do {
      fVar29 = (float)*param_2;
      fVar32 = (float)*(undefined8 *)((longlong)param_2 + 0xc);
      fVar24 = *(float *)(param_2 + 1);
      fVar26 = *(float *)((longlong)param_2 + 0x14);
      local_118[0] = fVar5 * fVar29;
      local_118[1] = fVar6 * fVar29;
      local_118[2] = fVar7 * fVar29;
      local_118[3] = fVar8 * fVar29;
      fStack_134 = (float)((ulonglong)*param_2 >> 0x20);
      local_108 = fVar5 * fVar32;
      fStack_104 = fVar6 * fVar32;
      fStack_100 = fVar7 * fVar32;
      fStack_fc = fVar8 * fVar32;
      fStack_124 = (float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xc) >> 0x20);
      local_f8[0] = fVar10 * fStack_134;
      local_f8[1] = fVar1 * fStack_134;
      local_f8[2] = fVar2 * fStack_134;
      local_f8[3] = fVar3 * fStack_134;
      local_e8 = fVar10 * fStack_124;
      fStack_e4 = fVar1 * fStack_124;
      fStack_e0 = fVar2 * fStack_124;
      fStack_dc = fVar3 * fStack_124;
      lVar21 = 0;
      local_d8[0] = fVar4 * fVar24;
      local_d8[1] = fVar9 * fVar24;
      local_d8[2] = fVar14 * fVar24;
      local_d8[3] = fVar16 * fVar24;
      local_c8 = fVar4 * fVar26;
      fStack_c4 = fVar9 * fVar26;
      fStack_c0 = fVar14 * fVar26;
      fStack_bc = fVar16 * fVar26;
      fVar24 = -3.4028235e+38;
      fVar26 = -3.4028235e+38;
      fVar29 = 3.4028235e+38;
      fVar32 = 3.4028235e+38;
      fVar33 = 0.0;
      do {
        uVar20 = (ulonglong)*(uint *)((longlong)&DAT_144e50c48 + lVar21);
        uVar19 = (ulonglong)*(uint *)((longlong)&DAT_144e50c68 + lVar21);
        uVar18 = (ulonglong)*(uint *)((longlong)&DAT_144e50c88 + lVar21);
        fVar31 = fVar13 + local_118[uVar20 * 4 + 3] + local_f8[uVar19 * 4 + 3] +
                 local_d8[uVar18 * 4 + 3];
        if (fVar31 < fVar12) {
          uVar17 = 1;
          goto LAB_141d6d3be;
        }
        lVar21 = lVar21 + 4;
        fVar31 = 1.0 / fVar31;
        fVar30 = (fVar12 + local_118[uVar20 * 4 + 2] + local_f8[uVar19 * 4 + 2] +
                 local_d8[uVar18 * 4 + 2]) * fVar31;
        fVar27 = (fVar15 + local_118[uVar20 * 4] + local_f8[uVar19 * 4] + local_d8[uVar18 * 4]) *
                 fVar31;
        fVar31 = (fVar11 + local_118[uVar20 * 4 + 1] + local_f8[uVar19 * 4 + 1] +
                 local_d8[uVar18 * 4 + 1]) * fVar31;
        if (fVar30 <= fVar33) {
          fVar30 = fVar33;
        }
        fVar28 = fVar27;
        if (fVar27 <= fVar26) {
          fVar28 = fVar26;
        }
        if (fVar32 <= fVar27) {
          fVar27 = fVar32;
        }
        fVar25 = fVar31;
        if (fVar31 <= fVar24) {
          fVar25 = fVar24;
        }
        if (fVar29 <= fVar31) {
          fVar31 = fVar29;
        }
        fVar24 = fVar25;
        fVar26 = fVar28;
        fVar29 = fVar31;
        fVar32 = fVar27;
        fVar33 = fVar30;
      } while (lVar21 < 0x20);
      fVar27 = fVar27 + 0.5;
      fVar31 = fVar31 + 0.5;
      fVar28 = fVar28 + 0.5;
      fVar25 = fVar25 + 0.5;
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      if (fVar31 <= 0.0) {
        fVar31 = 0.0;
      }
      if (383.0 <= fVar28) {
        fVar28 = 383.0;
      }
      if (255.0 <= fVar25) {
        fVar25 = 255.0;
      }
      *(float *)(param_5 + (longlong)param_6) = fVar30;
      piVar22[-2] = (int)fVar27;
      piVar22[-1] = (int)fVar31;
      *piVar22 = (int)fVar28;
      piVar22[1] = (int)fVar25;
      uVar17 = 0;
LAB_141d6d3be:
      piVar22 = piVar22 + 4;
      *param_6 = uVar17;
      param_6 = param_6 + 1;
      uVar23 = uVar23 - 1;
      param_2 = param_2 + 3;
    } while (uVar23 != 0);
  }
  return;
}



// FUNCTION 141d6d460 FUN_141d6d460 body=3531 status=ok
// SIG undefined FUN_141d6d460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d6d460(float *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  uint uVar40;
  uint uVar41;
  longlong lVar42;
  byte bVar43;
  uint uVar44;
  byte bVar45;
  int iVar46;
  float *pfVar47;
  ulonglong uVar48;
  int iVar49;
  byte *pbVar50;
  int iVar51;
  int *piVar52;
  int iVar53;
  float *pfVar54;
  ulonglong uVar55;
  int iVar56;
  float *pfVar57;
  ulonglong uVar58;
  int iVar59;
  byte *pbVar60;
  int iVar61;
  float *pfVar62;
  float *pfVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  int iVar70;
  int iVar71;
  float fVar72;
  float fVar73;
  undefined1 auStack_238 [32];
  float local_218;
  int local_214;
  uint local_210;
  uint local_20c;
  int local_208;
  byte *local_200;
  uint local_1f8;
  int local_1f4;
  float *local_1f0;
  uint local_1e8;
  int local_1e4;
  float *local_1e0;
  longlong local_1d8;
  int local_1d0;
  float fStack_1cc;
  longlong local_1c8;
  int local_1c0;
  ushort *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  float *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138 [4];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_218 = param_1[0xe];
  pbVar50 = (byte *)0x0;
  local_198 = (longlong)(int)param_1[0x1a];
  local_1f0 = (float *)0x0;
  local_1e4 = 0;
  local_190 = *(longlong *)(param_1 + 0x18);
  local_20c = 0;
  local_200 = (byte *)0x0;
  local_210 = 0;
  local_1f4 = 0;
  if (0 < local_198) {
    local_1a8 = 0;
    local_1d8 = param_2;
    local_1a0 = param_1;
    do {
      pfVar47 = local_1f0;
      iVar46 = local_1f4;
      uVar41 = local_20c;
      uVar40 = local_210;
      pfVar63 = (float *)(local_1a8 * 0x70 + local_190);
      uVar44 = *(uint *)(*(longlong *)(pfVar63 + 0x10) + 8);
      uVar48 = (ulonglong)uVar44;
      local_1e0 = pfVar63;
      if ((int)local_20c < (int)uVar44) {
        local_20c = uVar44;
        local_1e8 = uVar44;
        if (local_1e4 < (int)uVar44) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1f0,uVar41);
          local_20c = local_1e8;
          pfVar47 = local_1f0;
        }
      }
      else if (((int)uVar44 < (int)local_20c) && (iVar61 = local_20c - uVar44, iVar61 != 0)) {
        local_20c = local_20c - iVar61;
        if (local_20c - uVar44 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_1f0 + (longlong)(int)uVar44 * 4,
                     local_1f0 + (longlong)(int)(iVar61 + uVar44) * 4,
                     (longlong)(int)(local_20c - uVar44) << 4);
        }
      }
      if ((int)uVar40 < (int)uVar44) {
        local_210 = uVar44;
        local_1f8 = uVar44;
        if (iVar46 < (int)uVar44) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_200,uVar40);
          local_210 = local_1f8;
          pbVar50 = local_200;
        }
      }
      else if (((int)uVar44 < (int)uVar40) && (iVar46 = uVar40 - uVar44, iVar46 != 0)) {
        local_210 = uVar40 - iVar46;
        if (local_210 - uVar44 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (pbVar50 + (int)uVar44,pbVar50 + (int)(iVar46 + uVar44),
                     (longlong)(int)(local_210 - uVar44));
        }
      }
      fVar64 = *pfVar63;
      fVar68 = pfVar63[1];
      fVar72 = pfVar63[2];
      fVar73 = pfVar63[3];
      fVar69 = local_1a0[4];
      fVar9 = local_1a0[5];
      fVar10 = local_1a0[6];
      fVar11 = local_1a0[7];
      fVar12 = *local_1a0;
      fVar13 = local_1a0[1];
      fVar14 = local_1a0[2];
      fVar15 = local_1a0[3];
      fVar16 = local_1a0[8];
      fVar17 = local_1a0[9];
      fVar18 = local_1a0[10];
      fVar19 = local_1a0[0xb];
      fVar20 = local_1a0[0xc];
      fVar21 = local_1a0[0xd];
      fVar22 = local_1a0[0xe];
      fVar23 = local_1a0[0xf];
      fVar24 = pfVar63[4];
      fVar25 = pfVar63[5];
      fVar26 = pfVar63[6];
      fVar27 = pfVar63[7];
      fVar28 = pfVar63[8];
      fVar29 = pfVar63[9];
      fVar30 = pfVar63[10];
      fVar31 = pfVar63[0xb];
      fVar32 = pfVar63[0xc];
      fVar33 = pfVar63[0xd];
      fVar34 = pfVar63[0xe];
      fVar35 = pfVar63[0xf];
      if (0 < (int)uVar44) {
        pfVar54 = pfVar47 + 1;
        pfVar57 = (float *)(**(longlong **)(pfVar63 + 0x10) + 8);
        pbVar60 = pbVar50;
        pfVar62 = pfVar47;
        do {
          fVar3 = pfVar57[-1];
          fVar4 = pfVar57[-2];
          fVar5 = *pfVar57;
          bVar45 = 0;
          fVar65 = fRam0000000146a99044 *
                   (fVar32 * fVar13 + fVar33 * fVar9 + fVar34 * fVar17 + fVar35 * fVar21);
          fVar66 = fRam0000000146a99048 *
                   (fVar32 * fVar14 + fVar33 * fVar10 + fVar34 * fVar18 + fVar35 * fVar22);
          fVar67 = fRam0000000146a9904c *
                   (fVar32 * fVar15 + fVar33 * fVar11 + fVar34 * fVar19 + fVar35 * fVar23);
          *pfVar62 = fVar3 * (fVar24 * fVar12 + fVar25 * fVar69 + fVar26 * fVar16 + fVar27 * fVar20)
                     + fVar4 * (fVar64 * fVar12 + fVar68 * fVar69 + fVar72 * fVar16 +
                               fVar73 * fVar20) +
                     fVar5 * (fVar28 * fVar12 + fVar29 * fVar69 + fVar30 * fVar16 + fVar31 * fVar20)
                     + _DAT_146a99040 *
                       (fVar32 * fVar12 + fVar33 * fVar69 + fVar34 * fVar16 + fVar35 * fVar20);
          pfVar62[1] = fVar3 * (fVar24 * fVar13 + fVar25 * fVar9 + fVar26 * fVar17 + fVar27 * fVar21
                               ) +
                       fVar4 * (fVar64 * fVar13 + fVar68 * fVar9 + fVar72 * fVar17 + fVar73 * fVar21
                               ) +
                       fVar5 * (fVar28 * fVar13 + fVar29 * fVar9 + fVar30 * fVar17 + fVar31 * fVar21
                               ) + fVar65;
          pfVar62[2] = fVar3 * (fVar24 * fVar14 + fVar25 * fVar10 + fVar26 * fVar18 +
                               fVar27 * fVar22) +
                       fVar4 * (fVar64 * fVar14 + fVar68 * fVar10 + fVar72 * fVar18 +
                               fVar73 * fVar22) +
                       fVar5 * (fVar28 * fVar14 + fVar29 * fVar10 + fVar30 * fVar18 +
                               fVar31 * fVar22) + fVar66;
          pfVar62[3] = fVar3 * (fVar24 * fVar15 + fVar25 * fVar11 + fVar26 * fVar19 +
                               fVar27 * fVar23) +
                       fVar4 * (fVar64 * fVar15 + fVar68 * fVar11 + fVar72 * fVar19 +
                               fVar73 * fVar23) +
                       fVar5 * (fVar28 * fVar15 + fVar29 * fVar11 + fVar30 * fVar19 +
                               fVar31 * fVar23) + fVar67;
          fVar3 = pfVar54[2];
          if (fVar3 < local_218) {
            bVar45 = 0x10;
          }
          bVar43 = bVar45 | 1;
          if (-fVar3 <= pfVar54[-1]) {
            bVar43 = bVar45;
          }
          bVar45 = bVar43 | 2;
          if (pfVar54[-1] <= fVar3) {
            bVar45 = bVar43;
          }
          bVar43 = bVar45 | 4;
          if (-fVar3 <= *pfVar54) {
            bVar43 = bVar45;
          }
          bVar45 = bVar43 | 8;
          if (*pfVar54 <= fVar3) {
            bVar45 = bVar43;
          }
          pfVar62 = pfVar62 + 4;
          *pbVar60 = bVar45;
          pfVar57 = pfVar57 + 3;
          pbVar60 = pbVar60 + 1;
          pfVar54 = pfVar54 + 4;
          uVar48 = uVar48 - 1;
          param_2 = local_1d8;
        } while (uVar48 != 0);
      }
      iVar46 = (int)(*(longlong **)(pfVar63 + 0x14))[1];
      iVar46 = iVar46 / 3 + (iVar46 >> 0x1f) +
               (int)(((longlong)iVar46 / 3 + ((longlong)iVar46 >> 0x3f) & 0xffffffffU) >> 0x1f);
      local_1b0 = (longlong)iVar46;
      if (0 < iVar46) {
        local_1b8 = (ushort *)(**(longlong **)(pfVar63 + 0x14) + 4);
        do {
          uVar58 = (ulonglong)*local_1b8;
          uVar55 = (ulonglong)local_1b8[-1];
          uVar48 = (ulonglong)local_1b8[-2];
          if ((pbVar50[uVar48] & pbVar50[uVar58] & pbVar50[uVar55]) == 0) {
            uVar36 = *(undefined8 *)(pfVar47 + uVar48 * 4);
            uVar37 = *(undefined8 *)(pfVar47 + uVar48 * 4 + 2);
            local_168 = uVar36;
            uVar36 = local_168;
            uStack_160 = uVar37;
            uVar37 = uStack_160;
            uVar38 = *(undefined8 *)(pfVar47 + uVar55 * 4);
            uVar39 = *(undefined8 *)(pfVar47 + uVar55 * 4 + 2);
            local_158 = uVar38;
            uStack_150 = uVar39;
            pfVar54 = pfVar47 + uVar58 * 4;
            local_148 = *pfVar54;
            fStack_144 = pfVar54[1];
            fStack_140 = pfVar54[2];
            fStack_13c = pfVar54[3];
            if (((pbVar50[uVar58] | pbVar50[uVar55] | pbVar50[uVar48]) & 0x10) == 0) {
              lVar42 = 0;
              pfVar47 = (float *)((longlong)&local_168 + 4);
              do {
                fVar73 = 1.0 / pfVar47[2];
                fVar72 = fVar73 * pfVar47[-1] * 192.0;
                fVar64 = pfVar47[1];
                fVar68 = *pfVar47;
                pfVar47 = pfVar47 + 4;
                *(int *)(&local_188 + lVar42) = (int)ROUND(fVar72 + fVar72 + 384.5) >> 1;
                pfVar54 = local_188;
                local_138[lVar42] = fVar73 * fVar64;
                fVar64 = fVar73 * fVar68 * 128.0;
                *(int *)((longlong)&local_188 + lVar42 * 8 + 4) =
                     (int)ROUND(fVar64 + fVar64 + 256.5) >> 1;
                lVar42 = lVar42 + 1;
              } while (lVar42 < 3);
              iVar46 = (int)local_188;
              iVar61 = local_188._4_4_;
              iVar49 = (int)uStack_180;
              iVar56 = uStack_180._4_4_;
              pbVar50 = local_200;
              if (((int)local_178 - (int)local_188) * (uStack_180._4_4_ - local_188._4_4_) <
                  ((int)uStack_180 - (int)local_188) * (local_178._4_4_ - local_188._4_4_)) {
                fVar64 = pfVar63[0x18];
                fVar68 = local_138[0];
                if (local_138[1] <= local_138[0]) {
                  fVar68 = local_138[1];
                }
                if (local_138[2] <= fVar68) {
                  fVar68 = local_138[2];
                }
                iVar51 = (int)uStack_180;
                iVar53 = uStack_180._4_4_;
                if (uStack_180._4_4_ < local_188._4_4_) {
                  local_188 = uStack_180;
                  uStack_180 = pfVar54;
                  iVar51 = iVar46;
                  iVar53 = iVar61;
                  iVar46 = iVar49;
                  iVar61 = iVar56;
                }
                iVar56 = iVar51;
                iVar70 = iVar53;
                iVar49 = (int)local_178;
                iVar71 = local_178._4_4_;
                if (local_178._4_4_ < iVar53) {
                  uStack_180 = local_178;
                  iVar56 = (int)local_178;
                  iVar70 = local_178._4_4_;
                  iVar49 = iVar51;
                  iVar71 = iVar53;
                  local_178 = (float *)CONCAT44(iVar53,iVar51);
                }
                iVar51 = iVar46;
                if (iVar70 < iVar61) {
                  local_188 = (float *)CONCAT44(iVar70,iVar56);
                  uStack_180 = (float *)CONCAT44(iVar61,iVar46);
                  iVar51 = iVar56;
                  iVar56 = iVar46;
                  iVar61 = iVar70;
                }
                if ((iVar61 < 0x100) && (-1 < iVar71)) {
                  iVar46 = *(int *)(param_2 + 0x68);
                  *(int *)(param_2 + 0x68) = iVar46 + 1;
                  if (*(int *)(param_2 + 0x6c) < iVar46 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeGrow(param_2 + 0x60,iVar46);
                  }
                  lVar42 = *(longlong *)(param_2 + 0x60);
                  puVar1 = (undefined4 *)(lVar42 + (longlong)iVar46 * 0x18);
                  *puVar1 = (int)local_188;
                  puVar1[1] = local_188._4_4_;
                  puVar1[2] = (int)uStack_180;
                  puVar1[3] = uStack_180._4_4_;
                  *(ulonglong *)(lVar42 + 0x10 + (longlong)iVar46 * 0x18) = CONCAT44(iVar71,iVar49);
                  local_208 = *(int *)(param_2 + 0x78);
                  *(int *)(param_2 + 0x78) = local_208 + 1;
                  if (*(int *)(param_2 + 0x7c) < local_208 + 1) {
                    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0x70,local_208);
                  }
                  *(float *)(*(longlong *)(param_2 + 0x70) + (longlong)local_208 * 4) = fVar64;
                  iVar61 = *(int *)(param_2 + 0x88);
                  *(int *)(param_2 + 0x88) = iVar61 + 1;
                  if (*(int *)(param_2 + 0x8c) < iVar61 + 1) {
                    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 0x80,iVar61);
                  }
                  iVar53 = iVar56;
                  if (iVar51 <= iVar56) {
                    iVar53 = iVar51;
                  }
                  *(undefined1 *)((longlong)iVar61 + *(longlong *)(param_2 + 0x80)) = 1;
                  iVar61 = iVar49;
                  if (iVar53 <= iVar49) {
                    iVar61 = iVar53;
                  }
                  iVar61 = (int)((iVar61 >> 0x1f & 0x3fU) + iVar61) >> 6;
                  if (iVar56 <= iVar51) {
                    iVar56 = iVar51;
                  }
                  if (iVar49 <= iVar56) {
                    iVar49 = iVar56;
                  }
                  iVar56 = (int)(iVar49 + (iVar49 >> 0x1f & 0x3fU)) >> 6;
                  iVar49 = 0;
                  if (-1 < iVar61) {
                    iVar49 = iVar61;
                  }
                  lVar42 = (longlong)iVar49;
                  iVar61 = 5;
                  if (iVar56 < 6) {
                    iVar61 = iVar56;
                  }
                  pbVar50 = local_200;
                  local_1c0 = iVar46;
                  if (lVar42 <= iVar61) {
                    piVar52 = (int *)(lVar42 * 0x10 + 8 + param_2);
                    lVar42 = (iVar61 - lVar42) + 1;
                    do {
                      iVar61 = *piVar52;
                      *piVar52 = iVar61 + 1;
                      if (piVar52[1] < iVar61 + 1) {
                        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                  (piVar52 + -2,iVar61);
                      }
                      plVar2 = (longlong *)(piVar52 + -2);
                      piVar52 = piVar52 + 4;
                      *(ulonglong *)(*plVar2 + (longlong)iVar61 * 8) = CONCAT44(fVar68,iVar46);
                      lVar42 = lVar42 + -1;
                      pbVar50 = local_200;
                    } while (lVar42 != 0);
                  }
                }
              }
            }
            else {
              uStack_160._4_4_ = (float)((ulonglong)uVar37 >> 0x20);
              uStack_150._4_4_ = (float)((ulonglong)uVar39 >> 0x20);
              local_128 = 0;
              uStack_120 = 0x3f80000000000000;
              local_118 = 0;
              uStack_110 = 0x3f80000000000000;
              bVar6 = uStack_160._4_4_ < local_218;
              local_108 = 0;
              uStack_100 = 0x3f80000000000000;
              local_f8 = 0;
              uStack_f0 = 0x3f80000000000000;
              bVar7 = uStack_150._4_4_ < local_218;
              if (!bVar6) {
                local_128 = *(undefined8 *)(pfVar47 + uVar48 * 4);
                uStack_120 = *(undefined8 *)(pfVar47 + uVar48 * 4 + 2);
              }
              uStack_150._0_4_ = (float)uVar39;
              local_158._4_4_ = (float)((ulonglong)uVar38 >> 0x20);
              local_158._0_4_ = (float)uVar38;
              uStack_160._0_4_ = (float)uVar37;
              local_168._4_4_ = (float)((ulonglong)uVar36 >> 0x20);
              local_168._0_4_ = (float)uVar36;
              uVar44 = bVar6 ^ 1;
              if (bVar6 != bVar7) {
                lVar42 = (longlong)(int)uVar44;
                uVar44 = uVar44 + 1;
                fVar73 = (local_218 - uStack_160._4_4_) / (uStack_160._4_4_ - uStack_150._4_4_);
                fVar72 = ((float)local_168 - (float)local_158) * fVar73 + (float)local_168;
                fVar68 = (local_168._4_4_ - local_158._4_4_) * fVar73 + local_168._4_4_;
                fVar64 = ((float)uStack_160 - (float)uStack_150) * fVar73 + (float)uStack_160;
                fVar73 = fVar73 * (uStack_160._4_4_ - uStack_150._4_4_) + uStack_160._4_4_;
                local_188 = (float *)CONCAT44(fVar68,fVar72);
                uStack_180 = (float *)CONCAT44(fVar73,fVar64);
                *(float *)(&local_128 + lVar42 * 2) = fVar72;
                *(float *)((longlong)&local_128 + lVar42 * 0x10 + 4) = fVar68;
                *(float *)(&uStack_120 + lVar42 * 2) = fVar64;
                *(float *)((longlong)&uStack_120 + lVar42 * 0x10 + 4) = fVar73;
              }
              bVar8 = fStack_13c < local_218;
              if (!bVar7) {
                pfVar54 = pfVar47 + uVar55 * 4;
                fVar64 = pfVar54[1];
                fVar68 = pfVar54[2];
                fVar72 = pfVar54[3];
                uVar48 = (ulonglong)uVar44;
                uVar44 = uVar44 + 1;
                *(float *)(&local_128 + uVar48 * 2) = *pfVar54;
                *(float *)((longlong)&local_128 + uVar48 * 0x10 + 4) = fVar64;
                *(float *)(&uStack_120 + uVar48 * 2) = fVar68;
                *(float *)((longlong)&uStack_120 + uVar48 * 0x10 + 4) = fVar72;
              }
              if (bVar7 != bVar8) {
                uVar48 = (ulonglong)uVar44;
                uVar44 = uVar44 + 1;
                fVar73 = (local_218 - uStack_150._4_4_) / (uStack_150._4_4_ - fStack_13c);
                fVar72 = ((float)local_158 - local_148) * fVar73 + (float)local_158;
                fVar68 = (local_158._4_4_ - fStack_144) * fVar73 + local_158._4_4_;
                fVar64 = ((float)uStack_150 - fStack_140) * fVar73 + (float)uStack_150;
                fVar73 = fVar73 * (uStack_150._4_4_ - fStack_13c) + uStack_150._4_4_;
                local_188 = (float *)CONCAT44(fVar68,fVar72);
                uStack_180 = (float *)CONCAT44(fVar73,fVar64);
                *(float *)(&local_128 + uVar48 * 2) = fVar72;
                *(float *)((longlong)&local_128 + uVar48 * 0x10 + 4) = fVar68;
                *(float *)(&uStack_120 + uVar48 * 2) = fVar64;
                *(float *)((longlong)&uStack_120 + uVar48 * 0x10 + 4) = fVar73;
              }
              if (!bVar8) {
                pfVar47 = pfVar47 + uVar58 * 4;
                fVar64 = pfVar47[1];
                fVar68 = pfVar47[2];
                fVar72 = pfVar47[3];
                uVar48 = (ulonglong)uVar44;
                uVar44 = uVar44 + 1;
                *(float *)(&local_128 + uVar48 * 2) = *pfVar47;
                *(float *)((longlong)&local_128 + uVar48 * 0x10 + 4) = fVar64;
                *(float *)(&uStack_120 + uVar48 * 2) = fVar68;
                *(float *)((longlong)&uStack_120 + uVar48 * 0x10 + 4) = fVar72;
              }
              if (bVar8 != bVar6) {
                uVar48 = (ulonglong)uVar44;
                uVar44 = uVar44 + 1;
                fVar73 = (local_218 - fStack_13c) / (fStack_13c - uStack_160._4_4_);
                fVar72 = (local_148 - (float)local_168) * fVar73 + local_148;
                fVar68 = (fStack_144 - local_168._4_4_) * fVar73 + fStack_144;
                fVar64 = (fStack_140 - (float)uStack_160) * fVar73 + fStack_140;
                fVar73 = fVar73 * (fStack_13c - uStack_160._4_4_) + fStack_13c;
                local_188 = (float *)CONCAT44(fVar68,fVar72);
                uStack_180 = (float *)CONCAT44(fVar73,fVar64);
                *(float *)(&local_128 + uVar48 * 2) = fVar72;
                *(float *)((longlong)&local_128 + uVar48 * 0x10 + 4) = fVar68;
                *(float *)(&uStack_120 + uVar48 * 2) = fVar64;
                *(float *)((longlong)&uStack_120 + uVar48 * 0x10 + 4) = fVar73;
              }
              if (2 < (ulonglong)uVar44) {
                local_188 = (float *)((longlong)&local_118 + 4);
                fVar64 = 1.0 / uStack_120._4_4_;
                fVar68 = fVar64 * (float)uStack_120;
                iVar46 = (int)ROUND(fVar64 * (float)local_128 * 384.0 + 384.5) >> 1;
                iVar61 = (int)ROUND(fVar64 * local_128._4_4_ * 256.0 + 256.5) >> 1;
                local_1c8 = (ulonglong)uVar44 - 2;
                local_214 = iVar46;
                local_208 = iVar61;
                local_168 = uVar36;
                uStack_160 = uVar37;
                do {
                  local_168 = CONCAT44(local_168._4_4_,iVar46);
                  fVar72 = 1.0 / local_188[2];
                  pfVar47 = local_188 + 4;
                  local_168 = CONCAT44(iVar61,iVar46);
                  uVar36 = local_168;
                  pfVar54 = local_188 + 1;
                  fVar73 = fVar72 * *local_188 * 128.0;
                  fVar64 = fVar72 * local_188[-1] * 192.0;
                  iVar53 = (int)ROUND(fVar73 + fVar73 + 256.5) >> 1;
                  uStack_160 = CONCAT44(iVar53,(float)uStack_160);
                  fVar73 = 1.0 / local_188[6];
                  iVar51 = (int)ROUND(fVar64 + fVar64 + 384.5) >> 1;
                  uStack_160 = CONCAT44(iVar53,iVar51);
                  pfVar62 = local_188 + 5;
                  fVar64 = fVar73 * local_188[3] * 192.0;
                  fVar69 = fVar73 * *pfVar47 * 128.0;
                  iVar49 = (int)ROUND(fVar64 + fVar64 + 384.5) >> 1;
                  iVar56 = (int)ROUND(fVar69 + fVar69 + 256.5) >> 1;
                  local_158 = CONCAT44(iVar56,iVar49);
                  local_188 = pfVar47;
                  if ((iVar49 - iVar46) * (iVar53 - iVar61) < (iVar56 - iVar61) * (iVar51 - iVar46))
                  {
                    fVar64 = pfVar63[0x18];
                    fVar69 = fVar72 * *pfVar54;
                    if (fVar68 <= fVar72 * *pfVar54) {
                      fVar69 = fVar68;
                    }
                    if (fVar73 * *pfVar62 <= fVar69) {
                      fVar69 = fVar73 * *pfVar62;
                    }
                    iVar70 = iVar51;
                    iVar71 = iVar53;
                    iVar59 = iVar61;
                    if (iVar53 < iVar61) {
                      local_168 = uStack_160;
                      uStack_160 = uVar36;
                      iVar70 = iVar46;
                      iVar71 = iVar61;
                      iVar46 = iVar51;
                      iVar59 = iVar53;
                    }
                    iVar51 = iVar70;
                    iVar53 = iVar71;
                    if (iVar56 < iVar71) {
                      uStack_160 = local_158;
                      local_158 = CONCAT44(iVar71,iVar70);
                      iVar51 = iVar49;
                      iVar53 = iVar56;
                      iVar49 = iVar70;
                      iVar56 = iVar71;
                    }
                    iVar70 = iVar51;
                    iVar71 = iVar46;
                    if (iVar53 < iVar59) {
                      local_168 = CONCAT44(iVar53,iVar51);
                      uStack_160 = CONCAT44(iVar59,iVar46);
                      iVar70 = iVar46;
                      iVar59 = iVar53;
                      iVar71 = iVar51;
                    }
                    iVar46 = local_214;
                    if ((iVar59 < 0x100) && (-1 < iVar56)) {
                      iVar51 = *(int *)(param_2 + 0x68);
                      *(int *)(param_2 + 0x68) = iVar51 + 1;
                      if (*(int *)(param_2 + 0x6c) < iVar51 + 1) {
                        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                        ::ResizeGrow(param_2 + 0x60,iVar51);
                      }
                      lVar42 = *(longlong *)(param_2 + 0x60);
                      plVar2 = (longlong *)(param_2 + 0x70);
                      puVar1 = (undefined4 *)(lVar42 + (longlong)iVar51 * 0x18);
                      *puVar1 = (float)local_168;
                      puVar1[1] = local_168._4_4_;
                      puVar1[2] = (float)uStack_160;
                      puVar1[3] = uStack_160._4_4_;
                      *(ulonglong *)(lVar42 + 0x10 + (longlong)iVar51 * 0x18) =
                           CONCAT44(iVar56,iVar49);
                      iVar46 = *(int *)(param_2 + 0x78);
                      *(int *)(param_2 + 0x78) = iVar46 + 1;
                      if (*(int *)(param_2 + 0x7c) < iVar46 + 1) {
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2,iVar46);
                      }
                      param_2 = local_1d8;
                      *(float *)(*plVar2 + (longlong)iVar46 * 4) = fVar64;
                      iVar46 = *(int *)(local_1d8 + 0x88);
                      *(int *)(local_1d8 + 0x88) = iVar46 + 1;
                      if (*(int *)(local_1d8 + 0x8c) < iVar46 + 1) {
                        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(local_1d8 + 0x80,iVar46)
                        ;
                      }
                      iVar61 = iVar70;
                      if (iVar71 <= iVar70) {
                        iVar61 = iVar71;
                      }
                      *(undefined1 *)((longlong)iVar46 + *(longlong *)(param_2 + 0x80)) = 1;
                      iVar46 = iVar49;
                      if (iVar61 <= iVar49) {
                        iVar46 = iVar61;
                      }
                      iVar46 = (int)((iVar46 >> 0x1f & 0x3fU) + iVar46) >> 6;
                      if (iVar70 <= iVar71) {
                        iVar70 = iVar71;
                      }
                      if (iVar49 <= iVar70) {
                        iVar49 = iVar70;
                      }
                      iVar49 = (int)(iVar49 + (iVar49 >> 0x1f & 0x3fU)) >> 6;
                      iVar61 = 0;
                      if (-1 < iVar46) {
                        iVar61 = iVar46;
                      }
                      lVar42 = (longlong)iVar61;
                      iVar56 = 5;
                      if (iVar49 < 6) {
                        iVar56 = iVar49;
                      }
                      pfVar63 = local_1e0;
                      iVar46 = local_214;
                      iVar61 = local_208;
                      local_1d0 = iVar51;
                      fStack_1cc = fVar69;
                      if (lVar42 <= iVar56) {
                        piVar52 = (int *)(param_2 + 8 + lVar42 * 0x10);
                        lVar42 = (iVar56 - lVar42) + 1;
                        do {
                          iVar46 = *piVar52;
                          *piVar52 = iVar46 + 1;
                          if (piVar52[1] < iVar46 + 1) {
                            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                      (piVar52 + -2,iVar46);
                          }
                          plVar2 = (longlong *)(piVar52 + -2);
                          piVar52 = piVar52 + 4;
                          *(ulonglong *)(*plVar2 + (longlong)iVar46 * 8) = CONCAT44(fVar69,iVar51);
                          lVar42 = lVar42 + -1;
                          pfVar63 = local_1e0;
                          iVar46 = local_214;
                          iVar61 = local_208;
                        } while (lVar42 != 0);
                      }
                    }
                  }
                  local_1c8 = local_1c8 + -1;
                } while (local_1c8 != 0);
                local_1c8 = 0;
                pbVar50 = local_200;
              }
            }
          }
          local_1b8 = local_1b8 + 3;
          local_1b0 = local_1b0 + -1;
          pfVar47 = local_1f0;
          pfVar63 = local_1e0;
        } while (local_1b0 != 0);
      }
      local_1a8 = local_1a8 + 1;
    } while (local_1a8 < local_198);
    if (pbVar50 != (byte *)0x0) {
      FMemory::Free(pbVar50);
    }
    if (local_1f0 != (float *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141d6e230 ProcessOcclusionFrame body=856 status=ok
// SIG undefined ProcessOcclusionFrame(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ProcessOcclusionFrame(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  longlong local_100;
  int local_f8 [2];
  longlong *local_f0;
  longlong *local_e8 [2];
  longlong local_d8;
  int local_d0;
  int aiStack_cc [17];
  longlong local_88 [3];
  undefined8 local_70;
  int iStack_6c;
  longlong local_68;
  undefined8 local_60;
  int iStack_5c;
  longlong local_58;
  undefined8 local_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  plVar7 = &local_d8;
  iVar9 = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x58);
  iVar15 = 0;
  local_d8 = 0;
  local_d0 = 0;
  aiStack_cc[0] = 0;
  aiStack_cc[1] = 0;
  aiStack_cc[2] = 0;
  aiStack_cc[3] = 0;
  aiStack_cc[4] = 0;
  lVar8 = 6;
  aiStack_cc[5] = 0;
  aiStack_cc[6] = 0;
  iVar13 = iVar9 / 6 + 1;
  aiStack_cc[7] = 0;
  aiStack_cc[8] = 0;
  aiStack_cc[9] = 0;
  aiStack_cc[10] = 0;
  aiStack_cc[0xb] = 0;
  aiStack_cc[0xc] = 0;
  aiStack_cc[0xd] = 0;
  aiStack_cc[0xe] = 0;
  aiStack_cc[0xf] = 0;
  aiStack_cc[0x10] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  do {
    if (*(int *)((longlong)plVar7 + 0xc) < iVar13) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7,iVar13);
    }
    plVar7 = plVar7 + 2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if (iStack_6c < iVar9) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (local_88 + 2,iVar9);
  }
  if (iStack_5c < iVar9) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_68,iVar9);
  }
  if (iStack_4c < iVar9) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_58,iVar9);
  }
  FUN_141d6d460(param_1,&local_d8);
  plVar7 = (longlong *)(param_2 + 0x3000);
  ProcessOccludeeGeom(param_1,&local_d8,plVar7);
  local_f0 = &local_d8;
  lVar8 = param_2;
  uVar6 = local_108[0];
  do {
    local_100 = *local_f0;
    lVar12 = (longlong)(int)local_f0[1];
    local_108[0] = 0;
    AlgoImpl::
    IntroSortInternal<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::_2_::FSortStruct,FIdentityFunctor,TDereferenceWrapper<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::_2_::FSortStruct,<lambda_0b5751454068de2c8abd456d4666ec4f>_>_>
              (local_100,lVar12,uVar6,local_108);
    lVar3 = local_100;
    lVar14 = 0;
    if (0 < lVar12) {
      do {
        lVar10 = (longlong)*(int *)(lVar3 + lVar14 * 8);
        iVar9 = *(int *)(local_68 + lVar10 * 4);
        piVar2 = (int *)(local_88[2] + lVar10 * 0x18);
        local_100 = CONCAT44(local_100._4_4_,iVar9);
        if (*(char *)(lVar10 + local_58) == '\0') {
          if (*(int *)(param_2 + 0x3008) != *(int *)(param_2 + 0x3034)) {
            lVar10 = *(longlong *)(param_2 + 0x3040);
            if (*(longlong *)(param_2 + 0x3040) == 0) {
              lVar10 = param_2 + 0x3038;
            }
            iVar13 = *(int *)(lVar10 + ((longlong)*(int *)(param_2 + 0x3048) - 1U & (longlong)iVar9)
                                       * 4);
            if (iVar13 != -1) {
              do {
                piVar11 = (int *)((longlong)iVar13 * 0x10 + *plVar7);
                if (*piVar11 == iVar9) {
                  if ((iVar13 != -1) && (piVar11 != (int *)0x0)) goto LAB_141d6e44f;
                  break;
                }
                iVar13 = piVar11[2];
              } while (iVar13 != -1);
            }
          }
          local_e8[0] = &local_100;
          FUN_141d578a0(plVar7,local_f8,local_e8,0);
          piVar11 = (int *)((longlong)local_f8[0] * 0x10 + *plVar7);
LAB_141d6e44f:
          iVar9 = 0;
          if (-1 < *piVar2 - iVar15) {
            iVar9 = *piVar2 - iVar15;
          }
          iVar13 = 0x3f;
          if (piVar2[2] - iVar15 < 0x40) {
            iVar13 = piVar2[2] - iVar15;
          }
          iVar13 = (iVar13 - iVar9) + 1;
          if (iVar13 == 0x40) {
            uVar5 = 0xffffffffffffffff;
          }
          else {
            uVar5 = (1L << ((byte)iVar13 & 0x3f)) + -1 << ((byte)iVar9 & 0x3f);
          }
          for (lVar10 = (longlong)piVar2[1]; lVar10 <= piVar2[5]; lVar10 = lVar10 + 1) {
            if ((uVar5 & ~*(ulonglong *)(lVar8 + lVar10 * 8)) != 0) {
              bVar4 = 1;
              goto LAB_141d6e4ba;
            }
          }
          bVar4 = 0;
LAB_141d6e4ba:
          *(byte *)(piVar11 + 1) = *(byte *)(piVar11 + 1) | bVar4;
        }
        else {
          RasterizeOccluderTri(piVar2,lVar8,iVar15);
        }
        lVar14 = lVar14 + 1;
        uVar6 = local_108[0];
      } while (lVar14 < lVar12);
    }
    iVar15 = iVar15 + 0x40;
    local_f0 = local_f0 + 2;
    lVar8 = lVar8 + 0x800;
    if (0x17f < iVar15) {
      if (local_58 != 0) {
        FMemory::Free(local_58);
      }
      if (local_68 != 0) {
        FMemory::Free(local_68);
      }
      if (local_88[2] != 0) {
        FMemory::Free(local_88[2]);
      }
      plVar7 = local_88 + 2;
      lVar8 = 6;
      do {
        plVar1 = plVar7 + -2;
        plVar7 = plVar7 + -2;
        lVar8 = lVar8 + -1;
        if (*plVar1 != 0) {
          FMemory::Free();
        }
      } while (lVar8 != 0);
      return;
    }
  } while( true );
}



// FUNCTION 141d6e590 RasterizeHalf body=235 status=ok
// SIG undefined RasterizeHalf(void)

void RasterizeHalf(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6,
                  longlong param_7,int param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = (longlong)param_5;
  if (lVar4 <= param_6) {
    do {
      uVar1 = *(ulonglong *)(param_7 + lVar4 * 8);
      if (uVar1 != 0xffffffffffffffff) {
        iVar5 = ((int)ROUND(param_1 + param_1 + 0.5) >> 1) - param_8;
        iVar3 = ((int)ROUND(param_2 + param_2 + 0.5) >> 1) - param_8;
        if ((iVar5 < 0x40) && (-1 < iVar3)) {
          if (iVar5 < 1) {
            iVar5 = 0;
          }
          if (0x3e < iVar3) {
            iVar3 = 0x3f;
          }
          iVar3 = (iVar3 - iVar5) + 1;
          if (iVar3 == 0x40) {
            uVar2 = 0xffffffffffffffff;
          }
          else {
            uVar2 = (1L << ((byte)iVar3 & 0x3f)) + -1 << ((byte)iVar5 & 0x3f);
            if (uVar2 == 0) goto LAB_141d6e64f;
          }
          *(ulonglong *)(param_7 + lVar4 * 8) = uVar2 | uVar1;
        }
      }
LAB_141d6e64f:
      lVar4 = lVar4 + 1;
      param_1 = param_1 + param_3;
      param_2 = param_2 + param_4;
    } while (lVar4 <= param_6);
  }
  return;
}



// FUNCTION 141d6e680 RasterizeOccluderTri body=592 status=ok
// SIG undefined RasterizeOccluderTri(void)

void RasterizeOccluderTri(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  iVar7 = (int)param_1[2];
  iVar4 = (int)(uVar1 >> 0x20);
  iVar13 = (int)(param_1[2] >> 0x20);
  iVar6 = 0;
  if (-1 < (longlong)uVar1) {
    iVar6 = iVar4;
  }
  iVar11 = iVar13;
  if (0xfe < iVar13) {
    iVar11 = 0xff;
  }
  iVar9 = (int)(uVar2 >> 0x20);
  cVar3 = '\0';
  iVar12 = (int)uVar1;
  iVar10 = iVar7 - iVar12;
  iVar8 = (int)uVar2;
  if (0 < iVar9 - iVar6) {
    iVar5 = iVar9;
    if (iVar11 <= iVar9) {
      iVar5 = iVar11;
    }
    fVar14 = (float)(iVar8 - iVar12) / (float)(iVar9 - iVar4);
    fVar15 = (float)iVar10 / (float)(iVar13 - iVar4);
    fVar16 = fVar15;
    if (fVar14 <= fVar15) {
      fVar16 = fVar14;
    }
    if (fVar15 <= fVar14) {
      fVar15 = fVar14;
    }
    RasterizeHalf(fVar16 * (float)(iVar6 - iVar4) + (float)iVar12,
                  (float)(iVar6 - iVar4) * fVar15 + (float)iVar12,uVar2 >> 0x20,param_3,iVar6,iVar5,
                  param_2,param_3);
    iVar6 = iVar5 + 1;
    cVar3 = '\x01';
  }
  if (0 < iVar11 - iVar6) {
    fVar16 = (float)iVar10 / (float)(iVar13 - iVar4);
    fVar15 = (float)(iVar7 - iVar8) / (float)(iVar13 - iVar9);
    if ((float)(iVar6 - iVar9) * fVar15 + (float)iVar8 <
        (float)(iVar6 - iVar4) * fVar16 + (float)iVar12) {
      fVar15 = fVar16;
    }
    RasterizeHalf(cVar3,uVar1 >> 0x20,uVar2 >> 0x20,fVar15,iVar6,iVar11,param_2,param_3);
    cVar3 = '\x01';
  }
  if (cVar3 == '\0') {
    RasterizeHalf();
  }
  return;
}



// FUNCTION 141d6e8e0 RegisterPostOpaqueComputeDispatcher body=31 status=ok
// SIG undefined RegisterPostOpaqueComputeDispatcher(void)

void FRendererModule::RegisterPostOpaqueComputeDispatcher(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x98,local_res10);
  return;
}



// FUNCTION 141d6e910 Rehash body=652 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
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
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar6 = 0;
      uVar14 = (ulonglong)uVar10;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar6;
        uVar6 = uVar6 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar11 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_28;
      }
      uVar10 = *puVar15;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141d6ea4f;
        uVar10 = puVar15[lVar5 + 1];
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
      if (iVar3 < iStack_44) {
LAB_141d6ea4f:
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
        puVar15 = (uint *)(*param_1 + (longlong)iStack_1c * 0x28);
        uVar10 = *puVar15;
        uVar12 = (int)(*(ulonglong *)(puVar15 + 2) >> 4) - uVar10 ^ uVar10 >> 0xd;
        uVar9 = (-0x61c88647 - uVar12) - uVar10 ^ uVar12 << 8;
        uVar13 = (uVar10 - uVar9) - uVar12 ^ uVar9 >> 0xd;
        uVar12 = (uVar12 - uVar9) - uVar13 ^ uVar13 >> 0xc;
        uVar10 = (uVar9 - uVar12) - uVar13 ^ uVar12 << 0x10;
        uVar13 = (uVar13 - uVar10) - uVar12 ^ uVar10 >> 5;
        uVar9 = (uVar12 - uVar10) - uVar13 ^ uVar13 >> 3;
        uVar10 = (uVar10 - uVar9) - uVar13 ^ uVar9 << 10;
        uVar10 = ((uVar13 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)*plVar2 - 1U;
        puVar15[9] = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar15[8] = *(uint *)((longlong)plVar7 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141d6eba0 Rehash body=538 status=ok
// SIG undefined Rehash(void)

void TSet<TStaticMeshDrawList<FHitProxyDrawingPolicy>::FDrawingPolicyLink,TStaticMeshDrawList<FHitProxyDrawingPolicy>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_141d6eccf;
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
LAB_141d6eccf:
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
        lVar6 = (longlong)iStack_2c * 0xd8 + *param_1;
        uVar5 = FMeshDrawingPolicy::GetTypeHash(lVar6 + 0x20);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0xd4) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xd0) =
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



// FUNCTION 141d6edc0 Release body=186 status=ok
// SIG undefined Release(void)

void FShadowMapRenderTargetsRefCounted::Release(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  iVar1 = (int)param_1[1];
  uVar2 = 0;
  uVar5 = uVar2;
  if (0 < iVar1) {
    do {
      plVar4 = *(longlong **)(uVar5 + *param_1);
      *(undefined8 *)(uVar5 + *param_1) = 0;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))();
      }
      iVar1 = (int)param_1[1];
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < iVar1);
  }
  plVar4 = (longlong *)*param_1;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    if ((longlong *)*plVar4 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar4 + 0x30))();
    }
    plVar4 = plVar4 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140957580(param_1,0);
  }
  plVar4 = (longlong *)param_1[2];
  param_1[2] = 0;
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141d6ee71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x30))();
    return;
  }
  return;
}



// FUNCTION 141d6ee80 Release body=646 status=ok
// SIG undefined Release(void)

void FSortedShadowMaps::Release(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  uVar8 = uVar7;
  uVar9 = uVar7;
  if (0 < (int)param_1[1]) {
    do {
      plVar4 = (longlong *)(*param_1 + uVar9);
      iVar1 = (int)plVar4[1];
      uVar3 = uVar7;
      uVar6 = uVar7;
      if (0 < iVar1) {
        do {
          plVar5 = *(longlong **)(uVar6 + *plVar4);
          *(undefined8 *)(uVar6 + *plVar4) = 0;
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x30))();
          }
          iVar1 = (int)plVar4[1];
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          uVar6 = uVar6 + 8;
        } while ((int)uVar2 < iVar1);
      }
      plVar5 = (longlong *)*plVar4;
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        if ((longlong *)*plVar5 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar5 + 0x30))();
        }
        plVar5 = plVar5 + 1;
      }
      *(undefined4 *)(plVar4 + 1) = 0;
      if (*(int *)((longlong)plVar4 + 0xc) != 0) {
        FUN_140957580(plVar4,0);
      }
      plVar5 = (longlong *)plVar4[2];
      plVar4[2] = 0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))();
      }
      uVar2 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar2;
      uVar9 = uVar9 + 0x28;
    } while ((int)uVar2 < (int)param_1[1]);
  }
  uVar8 = uVar7;
  uVar9 = uVar7;
  if (0 < (int)param_1[3]) {
    do {
      plVar4 = (longlong *)(param_1[2] + uVar9);
      iVar1 = (int)plVar4[1];
      uVar3 = uVar7;
      uVar6 = uVar7;
      if (0 < iVar1) {
        do {
          plVar5 = *(longlong **)(uVar6 + *plVar4);
          *(undefined8 *)(uVar6 + *plVar4) = 0;
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x30))();
          }
          iVar1 = (int)plVar4[1];
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          uVar6 = uVar6 + 8;
        } while ((int)uVar2 < iVar1);
      }
      plVar5 = (longlong *)*plVar4;
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        if ((longlong *)*plVar5 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar5 + 0x30))();
        }
        plVar5 = plVar5 + 1;
      }
      *(undefined4 *)(plVar4 + 1) = 0;
      if (*(int *)((longlong)plVar4 + 0xc) != 0) {
        FUN_140957580(plVar4,0);
      }
      plVar5 = (longlong *)plVar4[2];
      plVar4[2] = 0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))();
      }
      uVar2 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar2;
      uVar9 = uVar9 + 0x28;
    } while ((int)uVar2 < (int)param_1[3]);
  }
  uVar8 = uVar7;
  uVar9 = uVar7;
  if (0 < (int)param_1[5]) {
    do {
      plVar4 = (longlong *)(param_1[4] + uVar9);
      iVar1 = (int)plVar4[1];
      uVar3 = uVar7;
      uVar6 = uVar7;
      if (0 < iVar1) {
        do {
          plVar5 = *(longlong **)(uVar6 + *plVar4);
          *(undefined8 *)(uVar6 + *plVar4) = 0;
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x30))();
          }
          iVar1 = (int)plVar4[1];
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          uVar6 = uVar6 + 8;
        } while ((int)uVar2 < iVar1);
      }
      plVar5 = (longlong *)*plVar4;
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        if ((longlong *)*plVar5 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar5 + 0x30))();
        }
        plVar5 = plVar5 + 1;
      }
      *(undefined4 *)(plVar4 + 1) = 0;
      if (*(int *)((longlong)plVar4 + 0xc) != 0) {
        FUN_140957580(plVar4,0);
      }
      plVar5 = (longlong *)plVar4[2];
      plVar4[2] = 0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))();
      }
      uVar2 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar2;
      uVar9 = uVar9 + 0x28;
    } while ((int)uVar2 < (int)param_1[5]);
  }
  FShadowMapRenderTargetsRefCounted::Release(param_1 + 6);
  return;
}



// FUNCTION 141d6f140 FUN_141d6f140 body=253 status=ok
// SIG undefined FUN_141d6f140(void)

void FUN_141d6f140(longlong *param_1,int param_2)

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
            (int)((int)param_1[9] - 1U & *(uint *)((longlong)param_2 * 0x140 + 0x134 + lVar3));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar9 = (int *)((longlong)plVar5 + lVar8 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar8 * 4);
    while (iVar2 != -1) {
      if (iVar2 == param_2) {
        *piVar9 = *(int *)((longlong)param_2 * 0x140 + 0x130 + lVar3);
        break;
      }
      piVar9 = (int *)(lVar3 + 0x130 + (longlong)iVar2 * 0x140);
      iVar2 = *piVar9;
    }
  }
  bVar4 = (byte)param_2 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)((longlong)(int)param_1[6] * 0x140 + *param_1) = param_2;
  }
  uVar7 = 0xffffffff;
  puVar6 = (undefined4 *)((longlong)param_2 * 0x140 + *param_1);
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



// FUNCTION 141d6f240 Remove body=139 status=ok
// SIG undefined Remove(void)

void TSet<FPrimitiveOcclusionHistory,FPrimitiveOcclusionHistoryKeyFuncs,FDefaultSetAllocator>::
     Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar4 = (longlong)
            (int)((int)param_1[9] - 1U & *(uint *)((longlong)param_2 * 0x58 + 0x54 + lVar2));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)((longlong)param_2 * 0x58 + 0x50 + lVar2);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x50 + (longlong)iVar1 * 0x58);
      iVar1 = *piVar5;
    }
  }
  TSparseArray<TSetElement<FPrimitiveOcclusionHistory>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAt(param_1,param_2,1);
  return;
}



// FUNCTION 141d6f2d0 Remove body=885 status=ok
// SIG undefined Remove(void)

void TStaticMeshDrawList<FHitProxyDrawingPolicy>::FElementHandle::Remove
               (longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  iVar8 = *(int *)(param_1 + 0x1c);
  lVar13 = (longlong)iVar8;
  plVar12 = (longlong *)((longlong)*(int *)(param_1 + 0x18) * 0xd8 + *(longlong *)(lVar2 + 0x40));
  if (param_2 != '\0') {
    FUN_141d78430(*(undefined8 *)(lVar13 * 0x38 + 8 + plVar12[2]),param_1);
  }
  iVar16 = 0;
  *(undefined8 *)(lVar13 * 0x38 + 8 + plVar12[2]) = 0;
  iVar7 = *(int *)((longlong)plVar12 + 0x1c);
  iVar15 = *(int *)((longlong)plVar12 + 0xc);
  TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
  ::RemoveAtSwapImpl(plVar12 + 2,iVar8,1,1);
  iVar5 = (int)plVar12[1];
  iVar4 = (iVar5 - iVar8) + -1;
  if (0 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*plVar12 + lVar13 * 4),(void *)(*plVar12 + (longlong)(iVar5 - iVar4) * 4),
               (longlong)iVar4 << 2);
    iVar5 = (int)plVar12[1];
  }
  *(int *)(plVar12 + 1) = iVar5 + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar12);
  DAT_146a81050 =
       DAT_146a81050 -
       (ulonglong)
       (uint)((iVar7 * 0xe + iVar15) * 4 +
             (*(int *)((longlong)plVar12 + 0x1c) * 0xe + *(int *)((longlong)plVar12 + 0xc)) * -4);
  iVar7 = (int)plVar12[3];
  if (iVar8 < iVar7) {
    *(int *)(*(longlong *)(lVar13 * 0x38 + 0x30 + plVar12[2]) + 0x1c) = iVar8;
    iVar7 = (int)plVar12[3];
  }
  if (iVar7 == 0) {
    DAT_146a81050 =
         DAT_146a81050 +
         ((-0xd0 - (ulonglong)(uint)(*(int *)((longlong)plVar12 + 0x1c) * 0x38)) -
         (ulonglong)(uint)(*(int *)((longlong)plVar12 + 0xc) << 2));
    iVar7 = *(int *)(lVar2 + 0x38);
    iVar8 = iVar7 + -1;
    if (0 < iVar8) {
      lVar13 = *(longlong *)(lVar2 + 0x40);
      iVar15 = iVar16;
      do {
        iVar5 = (iVar8 + iVar15) / 2;
        lVar9 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar5 * 4) * 0xd8;
        uVar3 = *(ulonglong *)(lVar9 + 0x28 + lVar13);
        if (uVar3 < (ulonglong)plVar12[5]) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = 1;
          if (uVar3 <= (ulonglong)plVar12[5]) {
            uVar3 = *(ulonglong *)(lVar9 + 0x30 + lVar13);
            if (uVar3 < (ulonglong)plVar12[6]) {
              uVar6 = 0xffffffff;
            }
            else if (uVar3 <= (ulonglong)plVar12[6]) {
              uVar6 = *(uint *)(lVar9 + 0x50 + lVar13) & 1;
              if (uVar6 < (*(uint *)(plVar12 + 10) & 1)) {
                uVar6 = 0xffffffff;
              }
              else {
                uVar6 = (uint)((*(uint *)(plVar12 + 10) & 1) < uVar6);
              }
            }
          }
        }
        iVar16 = iVar5 + 1;
        if (-1 < (int)uVar6) {
          iVar16 = iVar15;
          iVar8 = iVar5;
        }
        iVar15 = iVar16;
      } while (iVar16 < iVar8);
    }
    if (iVar16 < iVar7) {
      lVar13 = (longlong)iVar16;
      piVar11 = (int *)(*(longlong *)(lVar2 + 0x30) + lVar13 * 4);
      do {
        if (*piVar11 == *(int *)(param_1 + 0x18)) break;
        iVar16 = iVar16 + 1;
        lVar13 = lVar13 + 1;
        piVar11 = piVar11 + 1;
      } while (lVar13 < iVar7);
    }
    plVar1 = (longlong *)(lVar2 + 0x30);
    if (iVar16 < iVar7) {
      iVar8 = *(int *)(lVar2 + 0x38);
      iVar7 = (iVar8 - iVar16) + -1;
      if (iVar7 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + (longlong)iVar16 * 4),
                   (void *)(*plVar1 + (longlong)(iVar16 + 1) * 4),(longlong)iVar7 << 2);
        iVar8 = *(int *)(lVar2 + 0x38);
      }
      *(int *)(lVar2 + 0x38) = iVar8 + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    else {
      piVar11 = (int *)*plVar1;
      if (piVar11 != piVar11 + *(int *)(lVar2 + 0x38)) {
        piVar10 = piVar11;
        do {
          if (*piVar10 == *(int *)((longlong)plVar12 + 0xbc)) {
            iVar8 = (int)((longlong)piVar10 - (longlong)piVar11 >> 2);
            if (iVar8 != -1) {
              ::_guard_xfg_dispatch_icall_nop
                        (piVar11 + iVar8,piVar11 + iVar8 + 1,
                         (longlong)((*(int *)(lVar2 + 0x38) - iVar8) + -1) << 2);
              *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + -1;
            }
            break;
          }
          piVar10 = piVar10 + 1;
        } while (piVar10 != piVar11 + *(int *)(lVar2 + 0x38));
      }
    }
    iVar8 = *(int *)((longlong)plVar12 + 0xbc);
    if (*(int *)(lVar2 + 0x48) != *(int *)(lVar2 + 0x74)) {
      lVar13 = *(longlong *)(lVar2 + 0x40);
      lVar14 = (longlong)iVar8 * 0xd8;
      lVar9 = *(longlong *)(lVar2 + 0x80);
      if (*(longlong *)(lVar2 + 0x80) == 0) {
        lVar9 = lVar2 + 0x78;
      }
      piVar11 = (int *)((longlong)
                        (int)(*(int *)(lVar2 + 0x88) - 1U & *(uint *)(lVar14 + 0xd4 + lVar13)) * 4 +
                       lVar9);
      iVar7 = *piVar11;
      while (iVar7 != -1) {
        if (iVar7 == iVar8) {
          *piVar11 = *(int *)(lVar14 + 0xd0 + lVar13);
          break;
        }
        piVar11 = (int *)(lVar13 + 0xd0 + (longlong)iVar7 * 0xd8);
        iVar7 = *piVar11;
      }
    }
    plVar12 = (longlong *)((longlong)iVar8 * 0xd8 + *(longlong *)(lVar2 + 0x40));
    TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
    ::
    ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
              (plVar12 + 2);
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(lVar2 + 0x40,iVar8,1);
  }
  return;
}



// FUNCTION 141d6f650 RemoveAt body=457 status=ok
// SIG undefined RemoveAt(void)

void TSparseArray<TSetElement<FPrimitiveOcclusionHistory>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAt(longlong *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  
  iVar14 = param_2;
  for (iVar15 = param_3; iVar15 != 0; iVar15 = iVar15 + -1) {
    lVar13 = 3;
    lVar12 = (longlong)iVar14 * 0x58 + 0x20 + *param_1;
    do {
      puVar4 = *(undefined8 **)(lVar12 + -8);
      lVar12 = lVar12 + -8;
      lVar13 = lVar13 + -1;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if ((*(char *)(puVar4 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
            LOCK();
            bVar16 = *(int *)((longlong)puVar4 + 0xc) == 0;
            if (bVar16) {
              *(int *)((longlong)puVar4 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar16) {
              uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar7 == 0) {
                lVar10 = 0;
              }
              else {
                lVar10 = (&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar10 + 8) = puVar4;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
      }
    } while (lVar13 != 0);
    iVar14 = iVar14 + 1;
  }
  if (param_3 != 0) {
    bVar5 = (byte)param_2 & 0x1f;
    uVar7 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    lVar12 = (longlong)param_2 * 0x58;
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x58 + *param_1) = param_2;
      }
      lVar13 = *param_1;
      *(undefined4 *)(lVar13 + lVar12) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar13 + 4 + lVar12) = uVar8;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = param_2;
      plVar11 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      iVar15 = param_2;
      if (param_2 < 0) {
        iVar15 = param_2 + 0x1f;
      }
      param_2 = param_2 + 1;
      lVar12 = lVar12 + 0x58;
      puVar2 = (uint *)((longlong)plVar11 + (longlong)(iVar15 >> 5) * 4);
      uVar9 = ~uVar7;
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      *puVar2 = *puVar2 & uVar9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141d6f820 FUN_141d6f820 body=100 status=ok
// SIG undefined FUN_141d6f820(void)

void FUN_141d6f820(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = *(int *)(param_1 + 0xd8);
  while (iVar2 != 0) {
    plVar3 = (longlong *)**(longlong **)(param_1 + 0xd0);
    if (plVar3 != (longlong *)0x0) {
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,1);
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3,1);
    }
    iVar2 = *(int *)(param_1 + 0xd8);
  }
  return;
}



// FUNCTION 141d6f890 FUN_141d6f890 body=1379 status=ok
// SIG undefined FUN_141d6f890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d6f890(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_158 [32];
  int local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 *local_110;
  undefined8 local_108;
  int local_100;
  int local_fc;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined1 local_64;
  wchar_t *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_a0 = &DAT_1469f6600;
  local_98 = 0;
  lVar4 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_100,&local_a0);
  plVar5 = (longlong *)0x0;
  if (local_100 != -1) {
    plVar5 = (longlong *)((longlong)local_100 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar9 = plVar5 + 2;
  if (plVar5 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  lVar4 = *plVar9;
  plVar5 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  plVar5 = (longlong *)*plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_f0 = plVar5;
  lVar6 = (**(code **)(*plVar5 + 8))();
  local_138 = *(int *)(lVar6 + 100);
  iVar1 = *(int *)(lVar6 + 0x60);
  local_88 = 0;
  uStack_80 = 0;
  local_60 = L"ColorBlindRenderTarget";
  local_110 = &local_88;
  local_118 = 0x10008;
  local_78 = 1;
  local_74 = _DAT_1468b5d78;
  uStack_6c = uRam00000001468b5d80;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_120 = 1;
  local_128 = 1;
  local_130 = CONCAT31(local_130._1_3_,*(undefined1 *)((longlong)plVar5 + 0x3c));
  local_fc = local_138;
  (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,&local_f8,&DAT_146ab6e78,iVar1);
  local_138 = 0;
  (**(code **)(*DAT_146ab6358 + 0x610))(DAT_146ab6358,&local_108,&DAT_146ab6e78,local_f8);
  FUN_141a19150(param_2,0,0,0);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_b8 = local_108;
  puVar7 = puVar10 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar10 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *puVar10 = local_b8;
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar8 + 2) = 1;
  puVar8[3] = puVar10;
  puVar8[4] = 2;
  puVar8[5] = 0;
  lVar6 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  uVar2 = *(undefined8 *)(lVar6 + 0x60);
  FRHIComputeShader::UpdateStats(uVar2);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar10 + 3;
  }
  uVar3 = local_108;
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar2;
  local_b0 = (**(code **)(*plVar5 + 8))(plVar5);
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
    UNLOCK();
    plVar5 = local_f0;
  }
  local_130 = param_5;
  local_138 = param_4;
  FUN_141a17b80(lVar4,param_2,&local_b0,uVar3);
  local_138 = 1;
  iVar1 = iVar1 + 7;
  DispatchComputeShader
            (param_2,lVar4,(int)((iVar1 >> 0x1f & 7U) + iVar1) >> 3,
             (int)((local_fc + 7 >> 0x1f & 7U) + local_fc + 7) >> 3);
  FUN_141a19580(lVar4,param_2);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_a8 = local_108;
  puVar7 = puVar10 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar10 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *puVar10 = local_a8;
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  puVar8[3] = puVar10;
  *puVar8 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar8 + 2) = 1;
  *(undefined4 *)(puVar8 + 4) = 0;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 1;
  puVar8[5] = 0;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_e8 = 0xffffffff00000000;
  uStack_e0 = 0xffffffffffffffff;
  puVar7 = puVar10 + 10;
  local_d8 = 0xffffffffffffffff;
  uStack_d0 = 0xffffffffffffffff;
  local_c8 = 0xffffffff;
  uStack_c0 = 0;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar10 + 10;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar10 + 2) = (undefined4)local_e8;
  *(undefined4 *)((longlong)puVar10 + 0x14) = local_e8._4_4_;
  *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_e0._4_4_;
  *(undefined4 *)(puVar10 + 4) = (undefined4)local_d8;
  *(undefined4 *)((longlong)puVar10 + 0x24) = local_d8._4_4_;
  *(undefined4 *)(puVar10 + 5) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_d0._4_4_;
  *(undefined4 *)(puVar10 + 6) = (undefined4)local_c8;
  *(undefined4 *)((longlong)puVar10 + 0x34) = local_c8._4_4_;
  *(undefined4 *)(puVar10 + 7) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_c0._4_4_;
  puVar10[8] = local_f8;
  puVar10[9] = plVar5;
  lVar4 = (**(code **)(*local_f8 + 8))(local_f8);
  if ((lVar4 == 0) && (lVar4 = (**(code **)(*(longlong *)puVar10[8] + 0x18))(), lVar4 == 0)) {
    (**(code **)(*(longlong *)puVar10[8] + 0x20))();
  }
  lVar4 = (**(code **)(*(longlong *)puVar10[9] + 8))();
  if ((lVar4 == 0) && (lVar4 = (**(code **)(*(longlong *)puVar10[9] + 0x18))(), lVar4 == 0)) {
    (**(code **)(*(longlong *)puVar10[9] + 0x20))();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_108);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_f8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_f0);
  return;
}



// FUNCTION 141d6fe00 FUN_141d6fe00 body=2652 status=ok
// SIG undefined FUN_141d6fe00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d6fe00(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  char cVar10;
  undefined4 uVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  longlong lVar23;
  undefined1 auStack_1898 [32];
  undefined1 *local_1878;
  undefined1 *local_1870;
  undefined1 *local_1868;
  undefined4 local_1860;
  undefined1 *local_1858;
  undefined1 *local_1850;
  undefined4 local_1848;
  undefined4 local_1838;
  uint local_1834;
  undefined4 local_1830;
  longlong local_1828;
  longlong local_1820;
  longlong local_1818;
  undefined8 local_1810;
  longlong local_1808;
  longlong local_1800;
  longlong local_17f8;
  longlong local_17f0;
  undefined1 local_17e8 [8];
  longlong local_17e0;
  undefined1 local_17d8 [8];
  longlong local_17d0;
  longlong local_17c8;
  longlong local_17c0;
  longlong local_17b8;
  longlong local_17b0;
  undefined8 local_17a8;
  undefined8 uStack_17a0;
  undefined4 local_1798;
  longlong local_1790 [2];
  undefined4 local_1780;
  uint local_177c;
  undefined4 local_1778;
  undefined1 local_1774;
  longlong local_1770 [4];
  undefined1 local_1750 [24];
  undefined1 local_1738 [24];
  undefined1 local_1720 [56];
  undefined1 local_16e8 [80];
  undefined1 local_1698 [32];
  float local_1678;
  float local_1674;
  undefined8 local_1618;
  undefined8 uStack_1610;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined8 local_15f8;
  undefined8 uStack_15f0;
  undefined4 local_15e8;
  undefined4 uStack_15e4;
  undefined4 uStack_15e0;
  undefined4 uStack_15dc;
  undefined1 local_15d8 [32];
  float local_15b8;
  float local_15b4;
  undefined8 local_1598;
  undefined8 uStack_1590;
  undefined8 local_1588;
  undefined8 uStack_1580;
  undefined8 local_1578;
  undefined8 uStack_1570;
  undefined8 local_1568;
  undefined8 uStack_1560;
  float local_1138;
  float local_1134;
  undefined1 local_1128 [64];
  undefined1 local_10e8 [64];
  undefined1 local_10a8 [304];
  undefined1 local_f78 [2800];
  undefined1 local_488 [1088];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1898;
  uVar22 = 0;
  uVar21 = 0;
  lVar13 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  if (((lVar13 == 0) || ((iVar19 = *(int *)(lVar13 + 0x708), iVar19 != 4 && (iVar19 != 7)))) &&
     (0 < *(int *)(param_1 + 200))) {
    piVar12 = (int *)(*(longlong *)(param_1 + 0xc0) + 0x1dd0);
    uVar17 = uVar21;
    do {
      if (*piVar12 != 0) {
        uVar22 = 1;
        break;
      }
      uVar17 = uVar17 + 1;
      piVar12 = piVar12 + 0xc34;
    } while ((longlong)uVar17 < (longlong)*(int *)(param_1 + 200));
  }
  local_17f8 = param_1;
  lVar13 = FSceneRenderTargets::Get(param_2);
  local_1818 = lVar13;
  cVar9 = FUN_141cdd990(lVar13,param_2,uVar22);
  if (cVar9 != '\0') {
    local_1810 = 0;
    local_1770[0] = 0;
    local_1770[1] = 0;
    FScopedGPUStatEvent::Begin(local_1770,param_2,&DAT_146a9d148,&local_1810);
    local_1834 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      local_17b0 = 0;
      do {
        lVar23 = local_17b0 * 0x30d0 + *(longlong *)(param_1 + 0xc0);
        uVar20 = (uint)uVar21;
        if (*(int *)(lVar23 + 0x1dd0) != 0) {
          if (((*(byte *)(lVar23 + 0x28cc) & 8) == 0) && (*(char *)(lVar23 + 0x1a98) != '\0')) {
            if (*(char *)(lVar23 + 0x1209) == '\0') {
              if (*(char *)(lVar23 + 0x120b) == '\0') {
                bVar7 = true;
              }
              else {
LAB_141d6ff6c:
                if (((*(int *)(lVar23 + 0xf60) == 2) || (*(longlong *)(lVar23 + 0x10) == 0)) ||
                   (*(int *)(*(longlong *)(lVar23 + 0x10) + 8) < 2)) goto LAB_141d6ff88;
                bVar7 = true;
              }
            }
            else {
              if (*(int *)(lVar23 + 0xf60) == 2) {
                if (*(char *)(lVar23 + 0x120b) != '\0') goto LAB_141d6ff6c;
                goto LAB_141d6ff88;
              }
              bVar7 = true;
            }
          }
          else {
LAB_141d6ff88:
            bVar7 = false;
          }
          if (bVar7) {
            iVar19 = *(int *)(lVar23 + 0x1a38);
            local_17b8 = 0;
            local_17c0 = 0;
            if (iVar19 < 2) {
LAB_141d70022:
              FUN_141d05b30(lVar13,iVar19,0,local_16e8);
              local_1878 = (undefined1 *)CONCAT44(local_1878._4_4_,1);
              (**(code **)(*DAT_146ab6358 + 0x110))
                        (DAT_146ab6358,&local_1800,local_16e8,&DAT_146a63368);
              lVar13 = local_1800;
              local_1820 = local_1800;
              if (local_1800 != 0) {
                LOCK();
                *(int *)(local_1800 + 8) = *(int *)(local_1800 + 8) + 1;
                UNLOCK();
              }
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1800);
              local_17c0 = lVar13;
              local_1820 = 0;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
            }
            else {
              FUN_141d05c90(lVar13,iVar19,0,local_10a8);
              local_1878 = (undefined1 *)CONCAT44(local_1878._4_4_,1);
              (**(code **)(*DAT_146ab6358 + 0x110))
                        (DAT_146ab6358,&local_1808,local_10a8,&DAT_146a632d8);
              lVar14 = local_1808;
              local_1828 = local_1808;
              if (local_1808 != 0) {
                LOCK();
                *(int *)(local_1808 + 8) = *(int *)(local_1808 + 8) + 1;
                UNLOCK();
              }
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1808);
              local_17b8 = lVar14;
              local_1828 = 0;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
              iVar19 = *(int *)(lVar23 + 0x1a38);
              if (iVar19 < 2) goto LAB_141d70022;
            }
            local_1790[0] = *(longlong *)(lVar23 + 0x20);
            local_1798 = 0x11;
            local_17a8 = 0;
            uStack_17a0 = 0;
            if (local_1790[0] != 0) {
              LOCK();
              *(int *)(local_1790[0] + 8) = *(int *)(local_1790[0] + 8) + 1;
              UNLOCK();
            }
            local_1780 = 0;
            local_1778 = 0;
            local_1774 = 0;
            local_177c = (uint)(*(char *)(lVar23 + 0x1205) != '\0') |
                         -(uint)(*(char *)(lVar23 + 0x11b4) != '\0') & 8;
            if ((*(char *)(lVar23 + 0x1209) == '\0') || (*(int *)(lVar23 + 0xf60) != 1)) {
              uVar1 = *(undefined4 *)(lVar23 + 0x1aac);
              uVar11 = *(undefined4 *)(lVar23 + 0x1aa8);
              puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              uVar2 = *(undefined4 *)(lVar23 + 0x1aa4);
              uVar3 = *(undefined4 *)(lVar23 + 0x1aa0);
              puVar16 = puVar18 + 5;
              if (*(undefined8 **)(param_2 + 0x38) < puVar16) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
                puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar16 = puVar18 + 5;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar16;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar18;
              *(undefined8 **)(param_2 + 8) = puVar18 + 1;
              puVar18[1] = 0;
              *(undefined4 *)((longlong)puVar18 + 0x14) = uVar2;
              *puVar18 = &PTR_LAB_143f59420;
              *(undefined4 *)(puVar18 + 3) = 0;
              *(undefined4 *)(puVar18 + 2) = uVar3;
              *(undefined4 *)((longlong)puVar18 + 0x1c) = uVar11;
              *(undefined4 *)(puVar18 + 4) = uVar1;
              *(undefined4 *)((longlong)puVar18 + 0x24) = 0x3f800000;
              param_1 = local_17f8;
            }
            else if (*(char *)(lVar23 + 0x120a) == '\0') {
              uVar1 = *(undefined4 *)(lVar23 + 0x1aac);
              uVar11 = *(undefined4 *)(param_1 + 0x2a4);
              puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar16 = puVar18 + 5;
              if (*(undefined8 **)(param_2 + 0x38) < puVar16) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
                puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar16 = puVar18 + 5;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar16;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar18;
              *(undefined8 **)(param_2 + 8) = puVar18 + 1;
              puVar18[1] = 0;
              *puVar18 = &PTR_LAB_143f59420;
              puVar18[2] = 0;
              *(undefined4 *)(puVar18 + 3) = 0;
              *(undefined4 *)((longlong)puVar18 + 0x1c) = uVar11;
              *(undefined4 *)(puVar18 + 4) = uVar1;
              *(undefined4 *)((longlong)puVar18 + 0x24) = 0x3f800000;
            }
            else {
              lVar13 = *(longlong *)(param_1 + 0xc0);
              local_1830 = *(undefined4 *)(lVar13 + 0x1aac);
              uVar1 = *(undefined4 *)(lVar13 + 0x1aa0);
              uVar11 = *(undefined4 *)(lVar13 + 0x1aa8);
              uVar2 = *(undefined4 *)(lVar13 + 0x4b70);
              uVar3 = *(undefined4 *)(lVar13 + 0x4b78);
              local_1838 = *(undefined4 *)(lVar13 + 0x4b7c);
              puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar16 = puVar18 + 7;
              if (*(undefined8 **)(param_2 + 0x38) < puVar16) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x40);
                puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar16 = puVar18 + 7;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar16;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar18;
              *(undefined8 **)(param_2 + 8) = puVar18 + 1;
              puVar18[1] = 0;
              *puVar18 = &PTR_LAB_144dc9c30;
              *(undefined4 *)((longlong)puVar18 + 0x14) = uVar2;
              *(undefined4 *)((longlong)puVar18 + 0x2c) = local_1830;
              *(undefined4 *)(puVar18 + 6) = local_1838;
              *(undefined4 *)(puVar18 + 2) = uVar1;
              puVar18[3] = 0;
              *(undefined4 *)(puVar18 + 4) = 0;
              *(undefined4 *)((longlong)puVar18 + 0x24) = uVar11;
              *(undefined4 *)(puVar18 + 5) = uVar3;
              *(undefined4 *)((longlong)puVar18 + 0x34) = 0x3f800000;
              param_1 = local_17f8;
            }
            if (DAT_146852b40 == 0) {
              if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
                cVar9 = IsInRenderingThread();
                if (cVar9 == '\0') {
                  FScopedEvent::FScopedEvent(local_17e8);
                  plVar15 = (longlong *)FUN_14049e3d0(local_1750,0,0xff);
                  lVar13 = *plVar15;
                  *(undefined1 **)(lVar13 + 0x10) = &LAB_1404a0f60;
                  *(undefined1 **)(lVar13 + 0x18) = local_17e8;
                  lVar13 = *plVar15;
                  lVar5 = plVar15[2];
                  lVar14 = plVar15[1];
                  lVar4 = *(longlong *)(lVar13 + 0x28);
                  piVar12 = (int *)(lVar4 + 0x48);
                  if (lVar4 != 0) {
                    LOCK();
                    *piVar12 = *piVar12 + 1;
                    UNLOCK();
                  }
                  local_17f0 = lVar4;
                  FUN_1404a4fe0(lVar13,lVar14,(int)lVar5,1);
                  if (lVar4 != 0) {
                    LOCK();
                    iVar19 = *piVar12;
                    *piVar12 = *piVar12 + -1;
                    UNLOCK();
                    if (iVar19 == 1) {
                      FGraphEvent::Recycle(local_17f0);
                    }
                  }
                  FScopedEvent::~FScopedEvent(local_17e8);
                }
                else {
                  lVar13 = operator_new(0x38);
                  if (lVar13 == 0) {
                    DAT_146852b40 = 0;
                  }
                  else {
                    DAT_146852b40 =
                         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar13);
                  }
                }
              }
              else {
                lVar13 = operator_new(0x38);
                if (lVar13 == 0) {
                  LOCK();
                  if (DAT_146852b40 == 0) {
                    DAT_146852b40 = 0;
                  }
                  UNLOCK();
                }
                else {
                  lVar13 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                           ::FStaticStateResource::FStaticStateResource(lVar13);
                  LOCK();
                  if (DAT_146852b40 != 0) {
                    lVar13 = DAT_146852b40;
                  }
                  DAT_146852b40 = lVar13;
                  UNLOCK();
                }
              }
            }
            lVar13 = local_1818;
            local_17a8 = *(undefined8 *)(DAT_146852b40 + 0x30);
            cVar9 = FSceneRenderTargets::IsCustomDepthPassWritingStencil(local_1818);
            if (cVar9 == '\0') {
              if (DAT_146a0e790 == 0) {
                if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
                  cVar10 = IsInRenderingThread();
                  if (cVar10 == '\0') {
                    FScopedEvent::FScopedEvent(local_17d8);
                    plVar15 = (longlong *)FUN_14049e3d0(local_1738,0,0xff);
                    lVar14 = *plVar15;
                    *(undefined1 **)(lVar14 + 0x10) = &LAB_141ac0ee0;
                    *(undefined1 **)(lVar14 + 0x18) = local_17d8;
                    lVar14 = *plVar15;
                    lVar8 = plVar15[2];
                    lVar4 = plVar15[1];
                    lVar5 = *(longlong *)(lVar14 + 0x28);
                    piVar12 = (int *)(lVar5 + 0x48);
                    if (lVar5 != 0) {
                      LOCK();
                      *piVar12 = *piVar12 + 1;
                      UNLOCK();
                    }
                    local_17e0 = lVar5;
                    FUN_1404a4fe0(lVar14,lVar4,(int)lVar8,1);
                    if (lVar5 != 0) {
                      LOCK();
                      iVar19 = *piVar12;
                      *piVar12 = *piVar12 + -1;
                      UNLOCK();
                      if (iVar19 == 1) {
                        FGraphEvent::Recycle(local_17e0);
                      }
                    }
                    FScopedEvent::~FScopedEvent(local_17d8);
                  }
                  else {
                    lVar14 = operator_new(0x38);
                    if (lVar14 == 0) {
                      DAT_146a0e790 = 0;
                    }
                    else {
                      DAT_146a0e790 =
                           TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                           ::FStaticStateResource::FStaticStateResource(lVar14);
                    }
                  }
                }
                else {
                  lVar14 = operator_new();
                  if (lVar14 == 0) {
                    LOCK();
                    if (DAT_146a0e790 == 0) {
                      DAT_146a0e790 = 0;
                    }
                    UNLOCK();
                  }
                  else {
                    lVar14 = TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                             ::FStaticStateResource::FStaticStateResource(lVar14);
                    LOCK();
                    if (DAT_146a0e790 != 0) {
                      lVar14 = DAT_146a0e790;
                    }
                    DAT_146a0e790 = lVar14;
                    UNLOCK();
                  }
                }
              }
              uStack_17a0 = *(undefined8 *)(DAT_146a0e790 + 0x30);
              local_1780 = 0;
            }
            if ((*(int *)(DAT_146a9d168 + 4) == 0) && (*(int *)(lVar23 + 0x1a10) == 2)) {
              _guard_xfg_dispatch_icall_nop(local_1698,(void *)(lVar23 + 0x390),0x570);
              local_1678 = local_1678 - local_1138;
              local_1674 = local_1674 - local_1134;
              local_15b8 = local_15b8 - local_1138;
              local_15b4 = local_15b4 - local_1134;
              puVar16 = (undefined8 *)FViewMatrices::InvertProjectionMatrix(local_1128,local_1698);
              local_1618 = *puVar16;
              uStack_1610 = puVar16[1];
              local_1608 = puVar16[2];
              uStack_1600 = puVar16[3];
              local_15f8 = puVar16[4];
              uStack_15f0 = puVar16[5];
              local_15e8 = *(undefined4 *)(puVar16 + 6);
              uStack_15e4 = *(undefined4 *)((longlong)puVar16 + 0x34);
              uStack_15e0 = *(undefined4 *)(puVar16 + 7);
              uStack_15dc = *(undefined4 *)((longlong)puVar16 + 0x3c);
              puVar16 = (undefined8 *)FViewMatrices::InvertProjectionMatrix(local_10e8,local_15d8);
              local_1598 = *puVar16;
              uStack_1590 = puVar16[1];
              local_1588 = puVar16[2];
              uStack_1580 = puVar16[3];
              local_1578 = puVar16[4];
              uStack_1570 = puVar16[5];
              local_1568 = puVar16[6];
              uStack_1560 = puVar16[7];
              local_1134 = DAT_1468b5d88._4_4_;
              local_1138 = (float)DAT_1468b5d88;
              FUN_141c90d50(local_1698);
              FUN_142745180(local_f78);
              uVar1 = *(undefined4 *)(lVar13 + 0x3bc);
              uVar20 = *(uint *)(lVar23 + 0x28cc);
              uVar6 = *(undefined8 *)(lVar13 + 0x378);
              uVar11 = FSceneRenderTargets::GetSceneColorFormat();
              if ((uVar20 & 4) == 0) {
                local_1850 = (undefined1 *)0x0;
                local_1848 = 0;
              }
              else {
                local_1848 = 0xa0;
                local_1850 = local_488;
              }
              local_1858 = local_f78;
              local_1868 = local_1720;
              local_1860 = 2;
              local_1870 = local_1698;
              local_1878 = local_1698;
              FUN_141d74750(lVar23,uVar6,uVar1,uVar11);
              local_1878 = (undefined1 *)CONCAT44(local_1878._4_4_,1);
              (**(code **)(*DAT_146ab6358 + 0x110))
                        (DAT_146ab6358,&local_17d0,local_f78,&DAT_146b09708);
              lVar13 = local_17d0;
              local_17c8 = local_17d0;
              if (local_17d0 != 0) {
                LOCK();
                *(int *)(local_17d0 + 8) = *(int *)(local_17d0 + 8) + 1;
                UNLOCK();
              }
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_17d0);
              TRefCountPtr<FRHIIndexBuffer>::operator=(local_1790,lVar13);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_17c8);
              local_1878 = (undefined1 *)CONCAT71(local_1878._1_7_,cVar9);
              FUN_141b06100(lVar23 + 0x1dc8,param_2,lVar23,&local_17a8);
              lVar13 = local_1818;
            }
            else {
              local_1878 = (undefined1 *)CONCAT71(local_1878._1_7_,cVar9);
              FUN_141b06100(lVar23 + 0x1dc8,param_2,lVar23,&local_17a8);
            }
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1790);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_17c0);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_17b8);
            uVar20 = local_1834;
          }
        }
        local_1834 = uVar20 + 1;
        uVar21 = (ulonglong)local_1834;
        local_17b0 = local_17b0 + 1;
      } while ((int)local_1834 < *(int *)(param_1 + 200));
    }
    local_1770[2] = 0xffffffffffffffff;
    local_1770[3] = 0xffffffffffffffff;
    FUN_141ce2e20(lVar13,param_2,local_1770 + 2);
    if (local_1770[0] != 0) {
      FScopedGPUStatEvent::End(local_1770);
    }
  }
  return;
}



// FUNCTION 141d70860 FUN_141d70860 body=164 status=ok
// SIG undefined FUN_141d70860(void)

void FUN_141d70860(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = (longlong)*(int *)(param_1 + 0x18);
  if (0 < lVar6) {
    plVar5 = *(longlong **)(param_1 + 0x10);
    iVar4 = 0;
    do {
      lVar1 = *plVar5;
      plVar5 = plVar5 + 1;
      iVar3 = iVar4 + 1;
      if (*(char *)(lVar1 + 0x1a98) == '\0') {
        iVar3 = iVar4;
      }
      lVar6 = lVar6 + -1;
      iVar4 = iVar3;
    } while (lVar6 != 0);
    if (0 < iVar3) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))();
      if (cVar2 == '\0') {
        iVar4 = *(int *)(DAT_146a10058 + 4);
        iVar3 = 0;
        if ((-1 < iVar4) && (iVar3 = 1, iVar4 < 1)) {
          iVar3 = iVar4;
        }
        if (iVar3 == param_3) {
          FUN_141d6fe00(param_1,param_2);
          FUN_141b15730();
        }
      }
    }
  }
  return;
}



// FUNCTION 141d70910 FUN_141d70910 body=825 status=ok
// SIG undefined FUN_141d70910(void)

void FUN_141d70910(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  undefined8 local_e8;
  undefined1 *puStack_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  char local_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [48];
  longlong local_68;
  int local_60;
  int local_5c;
  undefined8 *puVar10;
  
  FUN_1415b2560();
  cVar4 = FOutputDevice::CanBeUsedOnAnyThread();
  puVar11 = (undefined8 *)0x0;
  if (cVar4 != '\0') {
    uVar7 = *(undefined8 *)(param_1 + 0xc0);
    puStack_e0 = local_res8;
    local_e8 = (undefined8 *)&DAT_14060d670;
    local_res8[0] = 0;
    lVar5 = FUN_1415d8310(&local_e8,&DAT_146216a38);
    local_d8 = (undefined8 *)(lVar5 + 0x18);
    local_d0 = *local_d8;
    local_c8 = *(longlong *)(lVar5 + 0x28);
    local_c0 = '\0';
    local_b8 = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 ***)(lVar5 + 0x30) = &local_d8;
    *(int *)(lVar5 + 0x38) = *(int *)(lVar5 + 0x38) + 1;
    FUN_141cd7760(local_98,param_2,uVar7);
    puStack_e0 = local_res8;
    local_e8 = (undefined8 *)&DAT_14060d670;
    local_res8[0] = 0;
    lVar5 = FUN_1415d8310(&local_e8);
    puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x18) + 0xfU & 0xfffffffffffffff0);
    puVar1 = (ulonglong *)(lVar5 + 0x18);
    puVar6 = puVar9 + 0x15;
    if (*(undefined8 **)(lVar5 + 0x20) < puVar6) {
      FMemStackBase::AllocateNewChunk(puVar1);
      puVar9 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar6 = puVar9 + 0x15;
    }
    *puVar1 = (ulonglong)puVar6;
    puVar6 = puVar11;
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      puVar9[3] = 0;
      _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar9 + 0x24),0,0x5c);
      *(undefined4 *)(puVar9 + 1) = 0;
      puVar9[2] = 0;
      *(undefined4 *)(puVar9 + 3) = 0;
      puVar9[4] = 1;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      *(undefined1 *)(puVar9 + 0xb) = 0;
      puVar9[0xc] = L"UnknownTexture";
      puVar9[8] = 1;
      *(undefined2 *)(puVar9 + 9) = 1;
      *(undefined8 *)((longlong)puVar9 + 0x4c) = 0;
      *(undefined4 *)((longlong)puVar9 + 0x54) = 0;
      *(undefined2 *)(puVar9 + 0xd) = 1;
      puVar9[0xe] = 0;
      *(undefined4 *)(puVar9 + 0xf) = 0;
      puVar9[0x10] = 0;
      puVar9[0x11] = 0;
      puVar9[0x13] = 0;
      puVar9[0x14] = 0;
      puVar9[0x12] = 0;
      *puVar9 = &PTR_FUN_144e51388;
      puVar6 = puVar9;
    }
    iVar3 = local_60;
    lVar5 = (longlong)local_60;
    local_60 = local_60 + 1;
    if (local_5c < local_60) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,iVar3);
    }
    uStack_9c = (undefined4)((ulonglong)puStack_e0 >> 0x20);
    puStack_e0 = (undefined1 *)((ulonglong)puStack_e0 & 0xffffffff00000000);
    local_e8._0_4_ = SUB84(puVar6,0);
    local_e8._4_4_ = (undefined4)((ulonglong)puVar6 >> 0x20);
    *(undefined8 **)(local_68 + lVar5 * 8) = puVar6;
    local_a8 = (undefined4)local_e8;
    uStack_a4 = local_e8._4_4_;
    uStack_a0 = 0;
    local_e8 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      uVar7 = FHardwareCursor::GetHandle(&local_a8);
      local_e8 = (undefined8 *)0x0;
      puStack_e0 = (undefined1 *)0x1;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      *local_e8 = uVar7;
      FUN_141cf2100(local_98,&local_e8,L"RenderFinish");
      if (local_e8 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
    FRenderingCompositePassContext::~FRenderingCompositePassContext(local_98);
    if (local_c0 == '\0') {
      local_c0 = '\x01';
      *(int *)(local_d8 + 4) = *(int *)(local_d8 + 4) + -1;
      if (local_c8 != local_d8[2]) {
        FMemStackBase::FreeChunks();
      }
      *local_d8 = local_d0;
      local_d8[3] = local_b8;
    }
  }
  puVar6 = puVar11;
  puVar9 = puVar11;
  if (0 < *(int *)(param_1 + 0x98)) {
    do {
      plVar2 = *(longlong **)((longlong)puVar6 + *(longlong *)(param_1 + 0x90));
      (**(code **)(*plVar2 + 0x48))(plVar2,param_2,param_1 + 0x10);
      puVar10 = puVar11;
      if (0 < *(int *)(param_1 + 0x18)) {
        do {
          plVar2 = *(longlong **)((longlong)puVar6 + *(longlong *)(param_1 + 0x90));
          (**(code **)(*plVar2 + 0x50))
                    (plVar2,param_2,(longlong)(int)puVar10 * 0x30d0 + *(longlong *)(param_1 + 0xc0))
          ;
          uVar8 = (int)puVar10 + 1;
          puVar10 = (undefined8 *)(ulonglong)uVar8;
        } while ((int)uVar8 < *(int *)(param_1 + 0x18));
      }
      uVar8 = (int)puVar9 + 1;
      puVar6 = puVar6 + 2;
      puVar9 = (undefined8 *)(ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x98));
  }
  FRHICommandList::BeginFrame(param_2);
  return;
}



// FUNCTION 141d70c60 FUN_141d70c60 body=335 status=ok
// SIG undefined FUN_141d70c60(void)

void FUN_141d70c60(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  longlong local_18;
  
  local_c8 = *(undefined8 *)(param_2 + 0x510);
  uStack_c0 = *(undefined8 *)(param_2 + 0x518);
  local_b8 = *(undefined8 *)(param_2 + 0x520);
  uStack_b0 = *(undefined8 *)(param_2 + 0x528);
  plVar2 = (longlong *)0x0;
  local_20 = 0;
  local_a8 = *(undefined8 *)(param_2 + 0x530);
  uStack_a0 = *(undefined8 *)(param_2 + 0x538);
  local_98 = *(undefined8 *)(param_2 + 0x540);
  uStack_90 = *(undefined8 *)(param_2 + 0x548);
  local_88 = *(undefined8 *)(param_2 + 0x390);
  uStack_80 = *(undefined8 *)(param_2 + 0x398);
  local_78 = *(undefined8 *)(param_2 + 0x3a0);
  uStack_70 = *(undefined8 *)(param_2 + 0x3a8);
  local_68 = *(undefined4 *)(param_2 + 0x3b0);
  uStack_64 = *(undefined4 *)(param_2 + 0x3b4);
  uStack_60 = *(undefined4 *)(param_2 + 0x3b8);
  uStack_5c = *(undefined4 *)(param_2 + 0x3bc);
  local_58 = *(undefined4 *)(param_2 + 0x3c0);
  uStack_54 = *(undefined4 *)(param_2 + 0x3c4);
  uStack_50 = *(undefined4 *)(param_2 + 0x3c8);
  uStack_4c = *(undefined4 *)(param_2 + 0x3cc);
  local_48 = (**(code **)(**(longlong **)(*(longlong *)(param_4 + 0x60) + 8) + 8))();
  local_38 = (**(code **)(**(longlong **)(*(longlong *)(param_4 + 0xa0) + 8) + 8))();
  local_d8 = *(undefined4 *)(param_2 + 0x1aa0);
  local_d4 = *(undefined4 *)(param_2 + 0x1aa4);
  local_d0 = *(undefined4 *)(param_2 + 0x1aa8);
  local_cc = *(undefined4 *)(param_2 + 0x1aac);
  local_30 = param_3;
  local_18 = param_2;
  if ((*(int *)(param_1 + 0x78) != 0) && (*(longlong **)(param_1 + 0x70) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x78) != 0) {
        plVar2 = *(longlong **)(param_1 + 0x70);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,&local_d8);
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_20);
  return;
}



// FUNCTION 141d70db0 FUN_141d70db0 body=431 status=ok
// SIG undefined FUN_141d70db0(void)

void FUN_141d70db0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  local_d8 = *(undefined8 *)(param_2 + 0x520);
  uStack_d0 = *(undefined8 *)(param_2 + 0x528);
  local_f8 = 0;
  uStack_f0 = 0;
  plVar4 = (longlong *)0x0;
  local_e8 = *(undefined8 *)(param_2 + 0x510);
  uStack_e0 = *(undefined8 *)(param_2 + 0x518);
  local_c8 = *(undefined8 *)(param_2 + 0x530);
  uStack_c0 = *(undefined8 *)(param_2 + 0x538);
  local_b8 = *(undefined8 *)(param_2 + 0x540);
  uStack_b0 = *(undefined8 *)(param_2 + 0x548);
  local_a8 = *(undefined8 *)(param_2 + 0x390);
  uStack_a0 = *(undefined8 *)(param_2 + 0x398);
  local_98 = *(undefined8 *)(param_2 + 0x3a0);
  uStack_90 = *(undefined8 *)(param_2 + 0x3a8);
  local_88 = *(undefined4 *)(param_2 + 0x3b0);
  uStack_84 = *(undefined4 *)(param_2 + 0x3b4);
  uStack_80 = *(undefined4 *)(param_2 + 0x3b8);
  uStack_7c = *(undefined4 *)(param_2 + 0x3bc);
  local_78 = *(undefined4 *)(param_2 + 0x3c0);
  uStack_74 = *(undefined4 *)(param_2 + 0x3c4);
  uStack_70 = *(undefined4 *)(param_2 + 0x3c8);
  uStack_6c = *(undefined4 *)(param_2 + 0x3cc);
  local_40 = 0;
  local_68 = (**(code **)(**(longlong **)(*(longlong *)(param_4 + 0x60) + 8) + 8))();
  bVar1 = false;
  if (*(longlong *)(param_4 + 0xb8) == 0) {
    local_res10 = 0;
    bVar2 = false;
    bVar1 = true;
    local_60 = plVar4;
  }
  else {
    local_res8 = *(longlong **)(*(longlong *)(param_4 + 0xb8) + 0x10);
    if (local_res8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_res8 + 1) = (int)local_res8[1] + 1;
      UNLOCK();
    }
    bVar2 = true;
    local_60 = local_res8;
  }
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  if (bVar2) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  }
  local_58 = (**(code **)(**(longlong **)(*(longlong *)(param_4 + 0xa0) + 8) + 8))();
  local_48 = *(undefined8 *)(param_2 + 0x20);
  TRefCountPtr<FRHIIndexBuffer>::operator=(&local_40,*param_5);
  local_f8 = *(undefined8 *)(param_2 + 0x1aa0);
  uStack_f0 = *(undefined8 *)(param_2 + 0x1aa8);
  local_50 = param_3;
  local_38 = param_2;
  if ((*(int *)(param_1 + 0x68) != 0) && (*(longlong **)(param_1 + 0x60) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x68) != 0) {
        plVar4 = *(longlong **)(param_1 + 0x60);
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,&local_f8);
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_40);
  return;
}



// FUNCTION 141d70f60 FUN_141d70f60 body=188 status=ok
// SIG undefined FUN_141d70f60(void)

void FUN_141d70f60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x94);
  iVar5 = *(int *)(param_1 + 0x88) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x80);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_141d70fd3:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_141d70fd3;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x94);
  }
  *(int *)(param_1 + 0x94) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x80),0);
    return;
  }
  return;
}



// FUNCTION 141d71020 FUN_141d71020 body=1016 status=ok
// SIG undefined FUN_141d71020(void)

void FUN_141d71020(longlong param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong *puVar11;
  ulonglong local_res10;
  undefined *local_38;
  ulonglong *puStack_30;
  longlong *plVar12;
  
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a9ec08) && (_Init_thread_header(&DAT_146a9ec08), DAT_146a9ec08 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146a9ec00 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RHICmdAsyncRHIThreadDispatch");
    _Init_thread_footer(&DAT_146a9ec08);
  }
  iVar2 = (**(code **)(*DAT_146a9ec00 + 0x68))();
  if (((iVar2 == 0) || (DAT_146ab6383 == '\0')) || (*(int *)(DAT_146a9dae8 + 4) < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  plVar3 = (longlong *)operator_new(0x28);
  plVar12 = (longlong *)0x0;
  plVar9 = plVar12;
  if (plVar3 != (longlong *)0x0) {
    puStack_30 = &local_res10;
    local_res10 = local_res10 & 0xffffffffffffff00;
    local_38 = &DAT_14060d670;
    lVar4 = FUN_1415d8310(&local_38,&DAT_146216a38);
    *plVar3 = lVar4 + 0x18;
    plVar3[1] = *(longlong *)(lVar4 + 0x18);
    plVar3[2] = *(longlong *)(lVar4 + 0x28);
    *(undefined1 *)(plVar3 + 3) = 0;
    plVar3[4] = *(longlong *)(lVar4 + 0x30);
    *(longlong **)(lVar4 + 0x30) = plVar3;
    *(int *)(*plVar3 + 0x20) = *(int *)(*plVar3 + 0x20) + 1;
    plVar9 = plVar3;
  }
  if (bVar1) {
    param_2[0x55] = (longlong)plVar9;
    plVar9 = plVar12;
  }
  FDeferredUpdateResource::UpdateResources(param_1);
  if (*(longlong *)(param_2[1] + 0x12b8) != 0) {
    local_res10 = *(ulonglong *)(*(longlong *)(param_2[1] + 0x12b8) + 8);
    puVar11 = (ulonglong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar11 + 1;
    if (*(ulonglong **)(param_1 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      puVar11 = (ulonglong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar11 + 1;
    }
    *(ulonglong **)(param_1 + 0x30) = puVar7;
    *puVar11 = local_res10;
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar5;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar6;
    *(undefined8 **)(param_1 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar6 + 2) = 1;
    puVar6[3] = puVar11;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
  }
  if (*(longlong *)(param_2[1] + 0x1300) != 0) {
    local_res10 = *(ulonglong *)(*(longlong *)(param_2[1] + 0x1300) + 8);
    puVar11 = (ulonglong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar11 + 1;
    if (*(ulonglong **)(param_1 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      puVar11 = (ulonglong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar11 + 1;
    }
    *(ulonglong **)(param_1 + 0x30) = puVar7;
    *puVar11 = local_res10;
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar5;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar6;
    *(undefined8 **)(param_1 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar6 + 2) = 1;
    puVar6[3] = puVar11;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
  }
  if ((*(uint *)(param_2 + 7) & 0x4000) != 0) {
    DAT_1464c26c0 = 1;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1);
  lVar4 = 6000;
  do {
    lVar8 = param_2[1] + lVar4;
    *(undefined4 *)(lVar8 + 8) = 0;
    if (0x7fffffff < *(uint *)(lVar8 + 0xc)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar8,0);
    }
    uVar10 = (int)plVar12 + 1;
    plVar12 = (longlong *)(ulonglong)uVar10;
    lVar4 = lVar4 + 0x10;
  } while (uVar10 < 2);
  FUN_141d50a10(param_2[1] + 0x5ee0);
  DAT_1464c26c0 = 0;
  if (bVar1) {
    FSceneRenderer::DelayWaitForTasksClearSnapshotsAndDeleteSceneRenderer();
  }
  else {
    FUN_141d7b5e0(param_1,param_2,1);
  }
  if (plVar9 != (longlong *)0x0) {
    if ((char)plVar9[3] == '\0') {
      *(undefined1 *)(plVar9 + 3) = 1;
      *(int *)(*plVar9 + 0x20) = *(int *)(*plVar9 + 0x20) + -1;
      plVar3 = (longlong *)*plVar9;
      if (plVar9[2] != plVar3[2]) {
        FMemStackBase::FreeChunks();
        plVar3 = (longlong *)*plVar9;
      }
      *plVar3 = plVar9[1];
      *(longlong *)(*plVar9 + 0x18) = plVar9[4];
      plVar9[1] = 0;
    }
    FMemory::operator_delete(plVar9,0x28);
  }
  return;
}



// FUNCTION 141d71420 Reset body=398 status=ok
// SIG undefined Reset(void)

void TSparseArray<TSetElement<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Reset(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
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
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar4 != 0) {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar2 = *puVar6;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar7 = local_58 + 1;
      bVar3 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar7;
      if (bVar3) goto LAB_141d714e1;
      uVar2 = puVar6[lVar5 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
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
    if (iVar4 < iStack_44) {
LAB_141d714e1:
      iStack_44 = iVar4;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar4) {
    do {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                (*param_1 + ((longlong)iStack_1c * 5 + 3) * 8);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  iVar4 = (int)param_1[5] + 0x1f;
  puVar6 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar6 = puVar1;
  }
  ::_guard_xfg_dispatch_icall_nop
            (puVar6,0,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 141d715b0 ResizeGrow body=65 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FOcclusionQueryBatcher::FOcclusionBatch,TMemStackAllocator<0>_>::ResizeGrow
               (longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  uVar1 = *(uint *)(param_1 + 8);
  if ((*(int *)(param_1 + 0xc) != 0) || (4 < uVar1)) {
    iVar2 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
  }
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  FUN_140848a70(param_1,param_2,iVar2,0x20);
  return;
}



// FUNCTION 141d71600 ResizeGrow body=65 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FOcclusionPrimitive,TMemStackAllocator<0>_>::ResizeGrow
               (longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  uVar1 = *(uint *)(param_1 + 8);
  if ((*(int *)(param_1 + 0xc) != 0) || (4 < uVar1)) {
    iVar2 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
  }
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  FUN_140848a70(param_1,param_2,iVar2,0x18);
  return;
}



// FUNCTION 141d71650 FUN_141d71650 body=151 status=ok
// SIG undefined FUN_141d71650(void)

void FUN_141d71650(longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x30d0,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x4fa6d7aeb597c3b1) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 0xd);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x30d0,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 141d716f0 FUN_141d716f0 body=278 status=ok
// SIG undefined FUN_141d716f0(void)

void FUN_141d716f0(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  void *_Src;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 local_res10 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  if (param_2 != *(int *)((longlong)param_1 + 0xc)) {
    iVar6 = *(int *)(param_1 + 1);
    *(int *)((longlong)param_1 + 0xc) = param_2;
    _Src = (void *)*param_1;
    if (param_2 != 0) {
      puStack_30 = local_res10;
      local_38 = &DAT_14060d670;
      local_res10[0] = 0;
      iVar8 = param_2 * 0x70;
      lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
      uVar5 = 8;
      uVar2 = uVar5;
      if (0xf < iVar8) {
        uVar2 = 0x10;
      }
      uVar7 = (ulonglong)uVar2;
      puVar1 = (ulonglong *)(lVar3 + 0x18);
      _Dst = (void *)((uVar7 - 1) + *puVar1 & ~(uVar7 - 1));
      uVar4 = (longlong)iVar8 + (longlong)_Dst;
      if (*(ulonglong *)(lVar3 + 0x20) < uVar4) {
        if (0xf < iVar8) {
          uVar5 = 0x10;
        }
        FMemStackBase::AllocateNewChunk(puVar1,uVar5 + iVar8);
        _Dst = (void *)((uVar7 - 1) + *puVar1 & ~(uVar7 - 1));
        uVar4 = (longlong)iVar8 + (longlong)_Dst;
      }
      *puVar1 = uVar4;
      *param_1 = _Dst;
      if ((_Src != (void *)0x0) && (iVar6 != 0)) {
        if (param_2 <= iVar6) {
          iVar6 = param_2;
        }
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(iVar6 * 0x70));
      }
    }
  }
  return;
}



// FUNCTION 141d71810 FUN_141d71810 body=278 status=ok
// SIG undefined FUN_141d71810(void)

void FUN_141d71810(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  void *_Src;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 local_res10 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  if (param_2 != *(int *)((longlong)param_1 + 0xc)) {
    iVar6 = *(int *)(param_1 + 1);
    *(int *)((longlong)param_1 + 0xc) = param_2;
    _Src = (void *)*param_1;
    if (param_2 != 0) {
      puStack_30 = local_res10;
      local_38 = &DAT_14060d670;
      local_res10[0] = 0;
      iVar8 = param_2 * 0x78;
      lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
      uVar5 = 8;
      uVar2 = uVar5;
      if (0xf < iVar8) {
        uVar2 = 0x10;
      }
      uVar7 = (ulonglong)uVar2;
      puVar1 = (ulonglong *)(lVar3 + 0x18);
      _Dst = (void *)((uVar7 - 1) + *puVar1 & ~(uVar7 - 1));
      uVar4 = (longlong)iVar8 + (longlong)_Dst;
      if (*(ulonglong *)(lVar3 + 0x20) < uVar4) {
        if (0xf < iVar8) {
          uVar5 = 0x10;
        }
        FMemStackBase::AllocateNewChunk(puVar1,uVar5 + iVar8);
        _Dst = (void *)((uVar7 - 1) + *puVar1 & ~(uVar7 - 1));
        uVar4 = (longlong)iVar8 + (longlong)_Dst;
      }
      *puVar1 = uVar4;
      *param_1 = _Dst;
      if ((_Src != (void *)0x0) && (iVar6 != 0)) {
        if (param_2 <= iVar6) {
          iVar6 = param_2;
        }
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(iVar6 * 0x78));
      }
    }
  }
  return;
}



// FUNCTION 141d71930 FUN_141d71930 body=26 status=ok
// SIG undefined FUN_141d71930(void)

void FUN_141d71930(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_140848a70(param_1,*(undefined4 *)(param_1 + 8),param_2,0x20);
    return;
  }
  return;
}



// FUNCTION 141d71950 FUN_141d71950 body=26 status=ok
// SIG undefined FUN_141d71950(void)

void FUN_141d71950(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_140848a70(param_1,*(undefined4 *)(param_1 + 8),param_2,0x18);
    return;
  }
  return;
}



// FUNCTION 141d71970 FUN_141d71970 body=130 status=ok
// SIG undefined FUN_141d71970(void)

void FUN_141d71970(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x30d0,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x4fa6d7aeb597c3b1) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 0xd);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x30d0,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 141d71a00 FUN_141d71a00 body=3652 status=ok
// SIG undefined FUN_141d71a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d71a00(longlong param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  uint uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_288 [32];
  longlong *local_268;
  undefined8 *local_260;
  uint local_258;
  int local_250;
  longlong *local_248;
  longlong local_240;
  int local_238;
  int local_234;
  longlong local_230;
  longlong local_228;
  uint local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined *local_170;
  undefined4 local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined *local_140;
  undefined4 local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  local_234 = 0;
  local_188 = param_1;
  lVar13 = FSceneRenderTargets::Get(param_2);
  local_1c8 = lVar13;
  local_248 = (longlong *)FUN_141ce54b0(lVar13);
  lVar14 = (**(code **)(*(longlong *)*local_248 + 0x10))();
  local_220 = (uint)*(ushort *)(lVar14 + 0x28);
  if ((local_220 < 2) ||
     ((((uint)(&DAT_1464c9c48)[*(int *)(lVar13 + 0x3c8)] < 0x1e &&
       ((0x313a1900U >> ((&DAT_1464c9c48)[*(int *)(lVar13 + 0x3c8)] & 0x1f) & 1) != 0)) ||
      (DAT_1464c2550 == 0)))) {
    local_1f8 = *(undefined4 *)(param_1 + 0x2b0);
    local_1f4 = *(undefined4 *)(param_1 + 0x2b4);
    local_204 = 0;
    local_1fc = 0;
    local_1f0 = 0xffffffffffffffff;
    uStack_1e8 = 0xffffffffffffffff;
    local_1e0 = 0;
    local_1d8 = 0;
    puVar16 = (undefined8 *)FSceneRenderTargets::GetSceneColorTexture(lVar13);
    uVar23 = *puVar16;
    puVar16 = (undefined8 *)FSceneRenderTargets::GetSceneColorSurface(lVar13);
    puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar15 = (longlong *)*puVar16;
    puVar16 = puVar18 + 10;
    if (*(undefined8 **)(param_2 + 0x38) < puVar16) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar16 = puVar18 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar16;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar18;
    *(undefined8 **)(param_2 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar18 + 2) = (undefined4)local_204;
    *(undefined4 *)((longlong)puVar18 + 0x14) = local_204._4_4_;
    *(undefined4 *)(puVar18 + 3) = local_1fc;
    *(undefined4 *)((longlong)puVar18 + 0x1c) = local_1f8;
    *(undefined4 *)(puVar18 + 4) = local_1f4;
    *(undefined4 *)((longlong)puVar18 + 0x24) = (undefined4)local_1f0;
    *(undefined4 *)(puVar18 + 5) = local_1f0._4_4_;
    *(undefined4 *)((longlong)puVar18 + 0x2c) = (undefined4)uStack_1e8;
    *(undefined4 *)(puVar18 + 6) = uStack_1e8._4_4_;
    *(undefined4 *)((longlong)puVar18 + 0x34) = (undefined4)local_1e0;
    *(undefined4 *)(puVar18 + 7) = local_1e0._4_4_;
    *(undefined4 *)((longlong)puVar18 + 0x3c) = local_1d8;
    puVar18[8] = plVar15;
    puVar18[9] = uVar23;
    lVar13 = (**(code **)(*plVar15 + 8))(plVar15);
    if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar18[8] + 0x18))(), lVar13 == 0)) {
      (**(code **)(*(longlong *)puVar18[8] + 0x20))();
    }
    lVar13 = (**(code **)(*(longlong *)puVar18[9] + 8))();
    if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar18[9] + 0x18))(), lVar13 == 0)) {
      (**(code **)(*(longlong *)puVar18[9] + 0x20))();
    }
  }
  else {
    plVar15 = (longlong *)FSceneRenderTargets::GetSceneColorSurface(lVar13);
    plVar21 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_228 = *plVar15;
    plVar15 = plVar21 + 1;
    if (*(longlong **)(param_2 + 0x38) < plVar15) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      plVar21 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar15 = plVar21 + 1;
    }
    *(longlong **)(param_2 + 0x30) = plVar15;
    *plVar21 = local_228;
    puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar18 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar16) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar16 = puVar18 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar16;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar18;
    *(undefined8 **)(param_2 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar21;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined1 *)((longlong)puVar18 + 0x24) = 0;
    puVar16 = (undefined8 *)FSceneRenderTargets::GetSceneColorSurface(lVar13);
    (**(code **)(*DAT_146ab6358 + 0x360))(DAT_146ab6358,&local_240,*puVar16);
    puVar16 = (undefined8 *)FSceneRenderTargets::GetSceneColorTexture(lVar13);
    FUN_141a19150(param_2,*puVar16,0,0);
    local_238 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      local_228 = 0;
      do {
        local_c8 = 0;
        local_108 = 0;
        plStack_100 = (longlong *)0x0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_e8 = (longlong *)0x0;
        uStack_e0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_c0 = 0;
        lVar13 = local_228 * 0x30d0 + *(longlong *)(param_1 + 0xc0);
        local_bc = 0x26;
        local_b4 = 0;
        local_ac = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_64 = 0;
        local_5c = 0;
        local_54 = 0;
        FUN_14049afe0(param_2);
        local_d8 = FUN_1404a0ce0();
        uStack_d0 = FUN_140985530();
        local_c8 = FUN_1409853f0();
        uVar23 = DAT_1464c30b0;
        puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar16 = puVar18 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar16) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar16 = puVar18 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar16;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar18;
        *(undefined8 **)(param_2 + 8) = puVar18 + 1;
        *puVar18 = &PTR_LAB_143f489e0;
        *(undefined4 *)(puVar18 + 2) = 0;
        puVar18[3] = uVar23;
        *(undefined4 *)(puVar18 + 4) = 0;
        puVar18[1] = 0;
        uVar2 = *(undefined4 *)(lVar13 + 0x1aac);
        uVar3 = *(undefined4 *)(lVar13 + 0x1aa8);
        puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        uVar4 = *(undefined4 *)(lVar13 + 0x1aa4);
        uVar5 = *(undefined4 *)(lVar13 + 0x1aa0);
        puVar16 = puVar18 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar16) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar16 = puVar18 + 5;
        }
        uVar20 = local_220;
        *(undefined8 **)(param_2 + 0x30) = puVar16;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar18;
        *(undefined8 **)(param_2 + 8) = puVar18 + 1;
        *(undefined4 *)(puVar18 + 3) = uVar4;
        plVar15 = (longlong *)0x0;
        *(undefined4 *)((longlong)puVar18 + 0x1c) = uVar3;
        puVar18[1] = 0;
        *puVar18 = &PTR_LAB_143f59430;
        *(undefined1 *)(puVar18 + 2) = 1;
        *(undefined4 *)((longlong)puVar18 + 0x14) = uVar5;
        *(undefined4 *)(puVar18 + 4) = uVar2;
        iVar17 = 0;
        if (1 < local_220) {
          iVar17 = *(int *)(DAT_146a9d4e8 + 4);
        }
        if (iVar17 == 0) {
          lVar13 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(local_1c8 + 0x3c8)]);
          local_178 = 0;
          local_180 = &DAT_146a1d290;
          plVar21 = (longlong *)(lVar13 + 0x38);
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(plVar21,&local_21c,&local_180);
          plVar19 = plVar15;
          if (local_21c != -1) {
            plVar19 = (longlong *)((longlong)local_21c * 0x20 + *plVar21);
          }
          plVar22 = plVar19 + 2;
          if (plVar19 == (longlong *)0x0) {
            plVar22 = plVar15;
          }
          lVar13 = *plVar22;
          puVar16 = (undefined8 *)FUN_141ee3620();
          local_108 = *puVar16;
          if (lVar13 == 0) {
            bVar6 = true;
            local_1c0 = 0;
            plStack_100 = plVar15;
          }
          else {
            lVar13 = *(longlong *)(lVar13 + 0x48);
            if (*(char *)(lVar13 + 0x28) == '\0') {
              FUN_1419f3850(lVar13);
            }
            plStack_100 = *(longlong **)(lVar13 + 0x38);
          }
          if (bVar6) {
            bVar6 = false;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1c0);
          }
          local_bc = local_bc & 0xffffffff00000000;
          if (local_240 == 0) {
            if (uVar20 == 2) {
              local_138 = 0;
              local_140 = &DAT_146a1d3e0;
              TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
              ::FindId(plVar21,&local_20c,&local_140);
              plVar19 = plVar15;
              if (local_20c != -1) {
                plVar19 = (longlong *)((longlong)local_20c * 0x20 + *plVar21);
              }
              plVar21 = plVar19 + 2;
              if (plVar19 == (longlong *)0x0) {
                plVar21 = plVar15;
              }
              lVar13 = *plVar21;
              if (lVar13 == 0) {
                bVar10 = true;
                local_1a0 = 0;
              }
              else {
                lVar14 = *(longlong *)(lVar13 + 0x48);
                if (*(char *)(lVar14 + 0x28) == '\0') {
                  FUN_1419f3850(lVar14);
                }
                plVar15 = *(longlong **)(lVar14 + 0x40);
              }
              local_e8 = plVar15;
              if (bVar10) {
                bVar10 = false;
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
              }
              FUN_141ed6ac0(param_2,&local_108,2,1);
              lVar14 = *(longlong *)(lVar13 + 0x48);
              uVar23 = *(undefined8 *)(*local_248 + 8);
              if (*(char *)(lVar14 + 0x28) == '\0') {
                FUN_1419f3850(lVar14);
              }
              uVar24 = *(undefined8 *)(lVar14 + 0x40);
              if (*(short *)(lVar13 + 0xc2) != 0) {
                uVar1 = *(ushort *)(lVar13 + 0xc0);
                uVar20 = (uint)uVar1;
                puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar16 = puVar18 + 5;
                if (puVar16 <= *(undefined8 **)(param_2 + 0x38)) goto LAB_141d72456;
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
                puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                *(undefined8 **)(param_2 + 0x30) = puVar16 + 5;
                *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                **(undefined8 **)(param_2 + 8) = puVar16;
                *(undefined8 **)(param_2 + 8) = puVar16 + 1;
                puVar16[1] = 0;
                *puVar16 = &PTR_LAB_143f59c80;
                puVar16[2] = uVar24;
                *(uint *)(puVar16 + 3) = (uint)uVar1;
                puVar16[4] = uVar23;
              }
            }
            else if (uVar20 == 4) {
              local_128 = 0;
              local_130 = &DAT_146a1d530;
              TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
              ::FindId(plVar21,&local_208,&local_130);
              plVar19 = plVar15;
              if (local_208 != -1) {
                plVar19 = (longlong *)((longlong)local_208 * 0x20 + *plVar21);
              }
              plVar21 = plVar19 + 2;
              if (plVar19 == (longlong *)0x0) {
                plVar21 = plVar15;
              }
              lVar13 = *plVar21;
              if (lVar13 == 0) {
                bVar11 = true;
                local_198 = 0;
              }
              else {
                lVar14 = *(longlong *)(lVar13 + 0x48);
                if (*(char *)(lVar14 + 0x28) == '\0') {
                  FUN_1419f3850(lVar14);
                }
                plVar15 = *(longlong **)(lVar14 + 0x40);
              }
              local_e8 = plVar15;
              if (bVar11) {
                bVar11 = false;
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
              }
              FUN_141ed6ac0(param_2,&local_108,2,1);
              lVar14 = *(longlong *)(lVar13 + 0x48);
              uVar23 = *(undefined8 *)(*local_248 + 8);
              if (*(char *)(lVar14 + 0x28) == '\0') {
                FUN_1419f3850(lVar14);
              }
              uVar24 = *(undefined8 *)(lVar14 + 0x40);
              if (*(short *)(lVar13 + 0xc2) != 0) {
                uVar20 = (uint)*(ushort *)(lVar13 + 0xc0);
                puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar16 = puVar18 + 5;
                if (*(undefined8 **)(param_2 + 0x38) < puVar16) {
                  FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
                  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar16 = puVar18 + 5;
                }
LAB_141d72456:
                *(undefined8 **)(param_2 + 0x30) = puVar16;
                *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                **(undefined8 **)(param_2 + 8) = puVar18;
                *(undefined8 **)(param_2 + 8) = puVar18 + 1;
                puVar18[1] = 0;
                *puVar18 = &PTR_LAB_143f59c80;
                puVar18[2] = uVar24;
                *(uint *)(puVar18 + 3) = uVar20;
                puVar18[4] = uVar23;
              }
            }
            else {
              if (uVar20 != 8) break;
              local_118 = 0;
              local_120 = &DAT_146a1d680;
              TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
              ::FindId(plVar21,&local_234,&local_120);
              plVar19 = plVar15;
              if (local_234 != -1) {
                plVar19 = (longlong *)((longlong)local_234 * 0x20 + *plVar21);
              }
              plVar21 = plVar19 + 2;
              if (plVar19 == (longlong *)0x0) {
                plVar21 = plVar15;
              }
              lVar13 = *plVar21;
              if (lVar13 == 0) {
                bVar12 = true;
                local_190 = 0;
              }
              else {
                plVar15 = (longlong *)FShader::GetPixelShader(lVar13);
              }
              local_e8 = plVar15;
              if (bVar12) {
                bVar12 = false;
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_190);
              }
              FUN_141ed6ac0(param_2,&local_108,2,1);
              lVar14 = *(longlong *)(lVar13 + 0x48);
              uVar23 = *(undefined8 *)(*local_248 + 8);
              if (*(char *)(lVar14 + 0x28) == '\0') {
                FUN_1419f3850(lVar14);
              }
              uVar24 = *(undefined8 *)(lVar14 + 0x40);
              if (*(short *)(lVar13 + 0xc2) != 0) {
                uVar20 = (uint)*(ushort *)(lVar13 + 0xc0);
                puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar16 = puVar18 + 5;
                if (puVar16 <= *(undefined8 **)(param_2 + 0x38)) goto LAB_141d72456;
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
                puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                *(undefined8 **)(param_2 + 0x30) = puVar16 + 5;
                *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                **(undefined8 **)(param_2 + 8) = puVar16;
                *(undefined8 **)(param_2 + 8) = puVar16 + 1;
                puVar16[1] = 0;
                *puVar16 = &PTR_LAB_143f59c80;
                puVar16[2] = uVar24;
                *(uint *)(puVar16 + 3) = uVar20;
                puVar16[4] = uVar23;
              }
            }
          }
          else {
            if (uVar20 == 2) {
              local_168 = 0;
              local_170 = &DAT_146a1d7d0;
              TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
              ::FindId(plVar21,&local_218,&local_170);
              plVar19 = plVar15;
              if (local_218 != -1) {
                plVar19 = (longlong *)((longlong)local_218 * 0x20 + *plVar21);
              }
              plVar21 = plVar19 + 2;
              if (plVar19 == (longlong *)0x0) {
                plVar21 = plVar15;
              }
              lVar13 = *plVar21;
              if (lVar13 == 0) {
                bVar7 = true;
                local_1b8 = 0;
              }
              else {
                lVar14 = *(longlong *)(lVar13 + 0x48);
                if (*(char *)(lVar14 + 0x28) == '\0') {
                  FUN_1419f3850(lVar14);
                }
                plVar15 = *(longlong **)(lVar14 + 0x40);
              }
              local_e8 = plVar15;
              if (bVar7) {
                bVar7 = false;
                puVar16 = &local_1b8;
                goto LAB_141d720b0;
              }
            }
            else if (uVar20 == 4) {
              local_158 = 0;
              local_160 = &DAT_146a1d920;
              TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
              ::FindId(plVar21,&local_214,&local_160);
              plVar19 = plVar15;
              if (local_214 != -1) {
                plVar19 = (longlong *)((longlong)local_214 * 0x20 + *plVar21);
              }
              plVar21 = plVar19 + 2;
              if (plVar19 == (longlong *)0x0) {
                plVar21 = plVar15;
              }
              lVar13 = *plVar21;
              if (lVar13 == 0) {
                bVar8 = true;
                local_1b0 = 0;
              }
              else {
                lVar14 = *(longlong *)(lVar13 + 0x48);
                if (*(char *)(lVar14 + 0x28) == '\0') {
                  FUN_1419f3850(lVar14);
                }
                plVar15 = *(longlong **)(lVar14 + 0x40);
              }
              local_e8 = plVar15;
              if (bVar8) {
                bVar8 = false;
                puVar16 = &local_1b0;
LAB_141d720b0:
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar16);
              }
            }
            else {
              if (uVar20 != 8) break;
              local_148 = 0;
              local_150 = &DAT_146a1da70;
              TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
              ::FindId(plVar21,&local_210,&local_150);
              plVar19 = plVar15;
              if (local_210 != -1) {
                plVar19 = (longlong *)((longlong)local_210 * 0x20 + *plVar21);
              }
              plVar21 = plVar19 + 2;
              if (plVar19 == (longlong *)0x0) {
                plVar21 = plVar15;
              }
              lVar13 = *plVar21;
              if (lVar13 == 0) {
                bVar9 = true;
                local_1a8 = 0;
              }
              else {
                lVar14 = *(longlong *)(lVar13 + 0x48);
                if (*(char *)(lVar14 + 0x28) == '\0') {
                  FUN_1419f3850(lVar14);
                }
                plVar15 = *(longlong **)(lVar14 + 0x40);
              }
              local_e8 = plVar15;
              if (bVar9) {
                bVar9 = false;
                puVar16 = &local_1a8;
                goto LAB_141d720b0;
              }
            }
            FUN_141ed6ac0(param_2,&local_108,2,1);
            lVar14 = *(longlong *)(lVar13 + 0x48);
            local_230 = local_240;
            uVar23 = *(undefined8 *)(*local_248 + 8);
            if (*(char *)(lVar14 + 0x28) == '\0') {
              FUN_1419f3850(lVar14);
            }
            uVar24 = *(undefined8 *)(lVar14 + 0x40);
            if (*(short *)(lVar13 + 0xc2) != 0) {
              uVar1 = *(ushort *)(lVar13 + 0xc0);
              puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar16 = puVar18 + 5;
              if (*(undefined8 **)(param_2 + 0x38) < puVar16) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30);
                puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar16 = puVar18 + 5;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar16;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar18;
              *(undefined8 **)(param_2 + 8) = puVar18 + 1;
              puVar18[1] = 0;
              *puVar18 = &PTR_LAB_143f59c80;
              puVar18[2] = uVar24;
              *(uint *)(puVar18 + 3) = (uint)uVar1;
              puVar18[4] = uVar23;
            }
            if (*(short *)(lVar13 + 0xc6) != 0) {
              uVar1 = *(ushort *)(lVar13 + 0xc4);
              puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar16 = puVar18 + 5;
              if (*(undefined8 **)(param_2 + 0x38) < puVar16) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
                puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar16 = puVar18 + 5;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar16;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar18;
              *(undefined8 **)(param_2 + 8) = puVar18 + 1;
              puVar18[1] = 0;
              *puVar18 = &PTR_LAB_143f59c80;
              puVar18[2] = uVar24;
              *(uint *)(puVar18 + 3) = (uint)uVar1;
              puVar18[4] = local_230;
            }
          }
          puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar16 = puVar18 + 4;
          if (*(undefined8 **)(param_2 + 0x38) < puVar16) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
            puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar16 = puVar18 + 4;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar16;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar18;
          *(undefined8 **)(param_2 + 8) = puVar18 + 1;
          puVar18[1] = 0;
          *puVar18 = &PTR_LAB_143f59410;
          puVar18[2] = 0;
          *(undefined4 *)(puVar18 + 3) = 1;
          *(undefined4 *)((longlong)puVar18 + 0x1c) = 1;
        }
        else {
          local_258 = local_220;
          local_1d4 = 0;
          local_260 = &local_1d4;
          local_268 = &local_240;
          local_250 = iVar17;
          FUN_141e07a90(param_2,&local_108,*(undefined4 *)(local_1c8 + 0x3c8),*local_248 + 8);
        }
        local_238 = local_238 + 1;
        local_228 = local_228 + 1;
        param_1 = local_188;
      } while (local_238 < *(int *)(local_188 + 200));
    }
    puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar18 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar16) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar16 = puVar18 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar16;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar18;
    *(undefined8 **)(param_2 + 8) = puVar18 + 1;
    *puVar18 = &PTR_LAB_143f59430;
    *(undefined1 *)(puVar18 + 2) = 0;
    *(undefined8 *)((longlong)puVar18 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar18 + 0x1c) = 0;
    puVar18[1] = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_240);
  }
  return;
}



// FUNCTION 141d72850 Set body=164 status=ok
// SIG undefined Set(void)

void FStencilingGeometryShaderParameters::Set
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1,param_4,0);
  lVar1 = *(longlong *)(param_3 + 0x48);
  local_18 = 0;
  uStack_10 = 0;
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 6,&local_18,0);
  return;
}



// FUNCTION 141d72900 FUN_141d72900 body=102 status=ok
// SIG undefined FUN_141d72900(void)

void FUN_141d72900(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x1a48) + (longlong)*(int *)(param_2 + 0xe8) * 8) !=
        param_3) {
      *(longlong *)(*(longlong *)(param_1 + 0x1a48) + (longlong)*(int *)(param_2 + 0xe8) * 8) =
           param_3;
      iVar1 = *(int *)(param_1 + 0x27d0);
      *(int *)(param_1 + 0x27d0) = iVar1 + 1;
      if (*(int *)(param_1 + 0x27d4) < iVar1 + 1) {
        FUN_140822430((longlong *)(param_1 + 0x27c8),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x27c8) + (longlong)iVar1 * 8) = param_2;
    }
  }
  return;
}



// FUNCTION 141d72970 FUN_141d72970 body=359 status=ok
// SIG undefined FUN_141d72970(void)

void FUN_141d72970(longlong param_1,short *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  short *psVar4;
  undefined1 local_res8 [8];
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  short *local_48;
  int local_40;
  longlong *local_38;
  longlong *local_30;
  
  FString::PrintfImpl(&local_48,&DAT_144550a50);
  psVar4 = &DAT_143f3eda8;
  if (local_40 != 0) {
    psVar4 = local_48;
  }
  local_50 = 0;
  local_58 = 0;
  lVar1 = -1;
  if ((psVar4 != (short *)0x0) && (lVar3 = lVar1, *psVar4 != 0)) {
    do {
      lVar3 = lVar3 + 1;
    } while (psVar4[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_50 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    FGenericPlatformString::Memcpy(local_58,psVar4,(longlong)(int)uVar2 * 2);
  }
  local_68 = 0;
  local_60 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    do {
      lVar1 = lVar1 + 1;
    } while (param_2[lVar1] != 0);
    uVar2 = (int)lVar1 + 1;
    local_60 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    FGenericPlatformString::Memcpy(local_68,param_2,(longlong)(int)uVar2 * 2);
  }
  local_38 = &local_68;
  local_30 = &local_58;
  FUN_140497620(param_1 + 0x200,local_res8,&local_38,0);
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_48 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141d72ae0 FUN_141d72ae0 body=202 status=ok
// SIG undefined FUN_141d72ae0(void)

void FUN_141d72ae0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  byte *pbVar2;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_res18[0] = param_3;
  pbVar2 = (byte *)FHitProxyId::GetColor(local_res18,local_res8);
  lVar1 = *(longlong *)(param_1 + 0x48);
  local_18 = (float)pbVar2[2] * 0.003921569;
  local_c = (float)pbVar2[3] * 0.003921569;
  local_10 = (float)*pbVar2 * 0.003921569;
  local_14 = (float)pbVar2[1] * 0.003921569;
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0x150,&local_18,0);
  return;
}



// FUNCTION 141d72bb0 FUN_141d72bb0 body=568 status=ok
// SIG undefined FUN_141d72bb0(void)

void FUN_141d72bb0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,int param_6,undefined8 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  lVar7 = *(longlong *)(param_5 + 0x78);
  if (*(longlong *)(param_5 + 0x78) == 0) {
    lVar7 = param_5;
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  lVar7 = lVar7 + (longlong)param_6 * 0x78;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar5 = param_7;
  FUN_141d84f90(lVar2,param_2,*(undefined8 *)(lVar3 + 0x38),uVar4,param_3,param_4,lVar7,param_7,0);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 8);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    FUN_141d84710(lVar2,param_2,*(undefined8 *)(lVar3 + 0x48),uVar4,param_3,param_4,lVar7,uVar5,0);
    lVar2 = *(longlong *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    FUN_141d83e90(lVar2,param_2,*(undefined8 *)(lVar3 + 0x50),uVar4,param_3,param_4,lVar7,uVar5,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141d84bb0(lVar2,param_2,*(undefined8 *)(lVar3 + 0x40),uVar4,param_3,param_4,lVar7,uVar5,0);
  uVar1 = param_8;
  if (((param_4 != 0) && ((*(uint *)(param_4 + 0x1c) >> 0x1e & 1) != 0)) &&
     ((*(uint *)(param_5 + 0x8c) & 0x800) == 0)) {
    puVar6 = (undefined4 *)FHitProxyId::FHitProxyId(&param_6,0);
    uVar1 = *puVar6;
  }
  FUN_141d72ae0(*(undefined8 *)(param_1 + 0x40),param_2,uVar1);
  return;
}



// FUNCTION 141d72df0 FUN_141d72df0 body=1436 status=ok
// SIG undefined FUN_141d72df0(void)

void FUN_141d72df0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  void *_Dst;
  ulonglong _Size;
  float fVar15;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x40);
  FUN_141aa9590(param_1,param_2,uVar8,*(undefined8 *)(param_3 + 0x20));
  iVar3 = *(int *)(param_3 + 0x2fd4);
  iVar4 = *(int *)(param_3 + 0x2fd0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1))
  {
    DAT_1468509d8 = 1.442695;
    _Init_thread_footer(&DAT_1468509dc);
  }
  iVar5 = *(int *)(param_3 + 0x2fd0);
  iVar6 = *(int *)(param_3 + 0x2fd4);
  if (iVar3 <= iVar4) {
    iVar3 = iVar4;
  }
  local_58 = (float)(*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0)) / (float)(iVar5 * 2);
  local_54 = (float)(*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4)) / (float)(iVar6 * 2);
  fVar15 = _guard_xfg_dispatch_icall_nop((float)iVar3);
  local_48 = (float)iVar5;
  uVar9 = (uint)*(ushort *)(param_1 + 0xc4);
  if (0xb < *(ushort *)(param_1 + 0xc4)) {
    uVar9 = 0xc;
  }
  _Size = (ulonglong)uVar9;
  local_50 = fVar15 * DAT_1468509d8 - 9.0;
  local_44 = (float)iVar6;
  if (local_50 <= 0.0) {
    local_50 = 0.0;
  }
  local_40 = 1.0 / local_48;
  local_3c = 1.0 / local_44;
  if (uVar9 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc2);
    uVar2 = *(ushort *)(param_1 + 0xc0);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar10 = (longlong)_Dst + _Size;
    if (*(ulonglong *)(param_2 + 0x38) < uVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar9 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar10 = (longlong)_Dst + _Size;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar10;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_58,_Size);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar14 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar14 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar13;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar14;
    *(undefined8 **)(param_2 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_143f594b0;
    *(uint *)(puVar14 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar14 + 0x24) = (uint)uVar1;
    puVar14[2] = uVar8;
    puVar14[3] = _Dst;
    *(uint *)(puVar14 + 5) = uVar9;
  }
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar8,param_1 + 0xc6,&local_48,0);
  uVar12 = *(undefined8 *)(*(longlong *)(param_3 + 0x2f88) + 0x10);
  uVar11 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar14 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar14 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar13;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar14;
    *(undefined8 **)(param_2 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_143f59c80;
    puVar14[2] = uVar8;
    *(uint *)(puVar14 + 3) = (uint)uVar1;
    puVar14[4] = uVar12;
  }
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar14 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar14 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar13;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar14;
    *(undefined8 **)(param_2 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_143f59c70;
    puVar14[2] = uVar8;
    *(uint *)(puVar14 + 3) = (uint)uVar1;
    puVar14[4] = uVar11;
  }
  uVar12 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar14 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar14 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar13;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar14;
    *(undefined8 **)(param_2 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_143f59c80;
    puVar14[4] = param_4;
    puVar14[2] = uVar8;
    *(uint *)(puVar14 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xda) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar14 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar14 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar13;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar14;
    *(undefined8 **)(param_2 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_143f59c70;
    puVar14[2] = uVar8;
    *(uint *)(puVar14 + 3) = (uint)uVar1;
    puVar14[4] = uVar12;
  }
  uVar12 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xde) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xdc);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar14 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar14 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar13;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar14;
    *(undefined8 **)(param_2 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_143f59c80;
    puVar14[4] = param_5;
    puVar14[2] = uVar8;
    *(uint *)(puVar14 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xe2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe0);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar14 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar14 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar13;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar14;
    *(undefined8 **)(param_2 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_143f59c70;
    puVar14[2] = uVar8;
    *(uint *)(puVar14 + 3) = (uint)uVar1;
    puVar14[4] = uVar12;
  }
  return;
}



// FUNCTION 141d73390 SetParameters body=617 status=ok
// SIG undefined SetParameters(void)

void FODSCapturePS::SetParameters
               (longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  uVar4 = *param_3;
  uVar5 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar3;
    puVar7[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  uVar4 = *param_4;
  uVar5 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_3);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_4);
  return;
}



// FUNCTION 141d73600 FUN_141d73600 body=232 status=ok
// SIG undefined FUN_141d73600(void)

void FUN_141d73600(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  puVar3 = (undefined8 *)FUN_141d6a480(param_1,local_res8,param_2,param_3);
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar2 = *puVar3;
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141aa9800(param_1,param_2,*(undefined8 *)(lVar1 + 0x38),uVar2);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  lVar1 = *(longlong *)(param_1 + 0x48);
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,&local_28,0);
  lVar1 = *(longlong *)(param_1 + 0x48);
  local_18 = 0;
  uStack_10 = 0;
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc6,&local_18,0);
  return;
}



// FUNCTION 141d736f0 FUN_141d736f0 body=704 status=ok
// SIG undefined FUN_141d736f0(void)

void FUN_141d736f0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_res8;
  undefined1 local_48 [16];
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  plVar3 = *(longlong **)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 0x38);
  local_res8 = 0;
  (**(code **)(*plVar3 + 0x40))(plVar3,*(undefined4 *)(param_4 + 0x1a38),local_48,&local_res8);
  uVar6 = local_res8;
  lVar5 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  lVar1 = param_3 + 0x18;
  FUN_141aa8c40(lVar4,param_2,*(undefined8 *)(lVar5 + 0x38),plVar3,uVar6,param_4,lVar1,uVar2);
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  lVar4 = *(longlong *)(param_1 + 0x40);
  local_res8 = 0;
  (**(code **)(*plVar3 + 0x40))(plVar3,*(undefined4 *)(param_4 + 0x1a38),local_48,&local_res8);
  uVar6 = local_res8;
  lVar5 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  FUN_141aa87d0(lVar4,param_2,*(undefined8 *)(lVar5 + 0x40),plVar3,uVar6,param_4,lVar1,uVar2);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    local_res8 = 0;
    (**(code **)(*plVar3 + 0x40))(plVar3,*(undefined4 *)(param_4 + 0x1a38),local_48,&local_res8);
    uVar6 = local_res8;
    lVar5 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    FUN_141aa8360(lVar4,param_2,*(undefined8 *)(lVar5 + 0x48),plVar3,uVar6,param_4,lVar1,uVar2);
    plVar3 = *(longlong **)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    lVar4 = *(longlong *)(param_1 + 0x50);
    local_res8 = 0;
    (**(code **)(*plVar3 + 0x40))(plVar3,*(undefined4 *)(param_4 + 0x1a38),local_48,&local_res8);
    uVar6 = local_res8;
    lVar5 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    FUN_141aa7ef0(lVar4,param_2,*(undefined8 *)(lVar5 + 0x50),plVar3,uVar6,param_4,lVar1,uVar2);
  }
  FUN_141b45c10(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 141d739b0 FUN_141d739b0 body=26 status=ok
// SIG undefined FUN_141d739b0(void)

void FUN_141d739b0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_141d69780();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x4a8) = 1;
  }
  return;
}



// FUNCTION 141d739d0 SetValidFrameNumber body=8 status=ok
// SIG undefined SetValidFrameNumber(void)

void FHZBOcclusionTester::SetValidFrameNumber(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x50) = param_2 & 0x7fffffff;
  return;
}



// FUNCTION 141d739e0 SetValidTonemappingLUT body=26 status=ok
// SIG undefined SetValidTonemappingLUT(void)

void FViewInfo::SetValidTonemappingLUT(void)

{
  longlong lVar1;
  
  lVar1 = FUN_141d69780();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x4b8) = 1;
  }
  return;
}



// FUNCTION 141d73a00 FUN_141d73a00 body=1666 status=ok
// SIG undefined FUN_141d73a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d73a00(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_48;
  
  lVar11 = DAT_146a9d278;
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    if (DVar8 == DAT_1468c21c0) goto LAB_141d73a65;
    lVar10 = 4;
  }
  else {
LAB_141d73a65:
    lVar10 = 0;
  }
  lVar6 = DAT_146a9d260;
  uVar1 = *(undefined4 *)(lVar10 + lVar11);
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    if (DVar8 == DAT_1468c21c0) goto LAB_141d73aa4;
    lVar11 = 4;
  }
  else {
LAB_141d73aa4:
    lVar11 = 0;
  }
  lVar10 = DAT_146a9d230;
  uVar2 = *(undefined4 *)(lVar11 + lVar6);
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    if (DVar8 == DAT_1468c21c0) goto LAB_141d73ae2;
    lVar11 = 4;
  }
  else {
LAB_141d73ae2:
    lVar11 = 0;
  }
  lVar6 = DAT_146a9d248;
  uVar3 = *(undefined4 *)(lVar11 + lVar10);
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    if (DVar8 != DAT_1468c21c0) goto LAB_141d73b1d;
  }
  lVar12 = 0;
LAB_141d73b1d:
  *(undefined4 *)(param_2 + 0xcc0) = *(undefined4 *)(lVar12 + lVar6);
  *(undefined4 *)(param_2 + 0xcc4) = uVar3;
  *(undefined4 *)(param_2 + 0xcc8) = uVar2;
  *(undefined4 *)(param_2 + 0xccc) = uVar1;
  if (((param_1 == 0) || (*(int *)(param_1 + 0x15e8) < 1)) ||
     (plVar5 = *(longlong **)
                (*(longlong *)(param_1 + 0x15e0) + -8 + (longlong)*(int *)(param_1 + 0x15e8) * 8),
     plVar5 == (longlong *)0x0)) {
    *(undefined8 *)(param_2 + 0xc80) = _DAT_1468b5d90;
    *(float *)(param_2 + 0xc88) = DAT_1468b5d98;
    *(undefined8 *)(param_2 + 0xc90) = _DAT_1468b5d90;
    *(float *)(param_2 + 0xc98) = DAT_1468b5d98;
    *(undefined8 *)(param_2 + 0xca0) = _DAT_1468b5d90;
    *(float *)(param_2 + 0xca8) = DAT_1468b5d98;
    *(undefined4 *)(param_2 + 0xcac) = 0;
    *(undefined8 *)(param_2 + 0xcb0) = _DAT_1468b5d90;
    fVar9 = DAT_1468b5d98;
  }
  else {
    lVar11 = *plVar5;
    lVar12 = *(longlong *)(lVar11 + 0x78);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e40 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xd60) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0xb0);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xd68) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0xd8);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xd70) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0x100);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xd78) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0x128);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xd80) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0x150);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xd88) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0x178);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xd90) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0x1a0);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xd98) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0x1c8);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xda0) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0x1f0);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xda8) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0x218);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xdb0) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0x240);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xdb8) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0x268);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xdc0) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0x290);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xdc8) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0x2b8);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xdd0) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0x2e0);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xdd8) = lVar12;
    lVar12 = *(longlong *)(lVar11 + 0x308);
    if ((lVar12 == 0) && (lVar12 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(param_2 + 0xde0) = lVar12;
    fVar13 = *(float *)(lVar11 + 0x3c) - *(float *)(lVar11 + 0x30);
    fVar14 = *(float *)(lVar11 + 0x40) - *(float *)(lVar11 + 0x34);
    fVar15 = *(float *)(lVar11 + 0x44) - *(float *)(lVar11 + 0x38);
    *(ulonglong *)(param_2 + 0xc80) = CONCAT44(1.0 / fVar14,1.0 / fVar13);
    *(float *)(param_2 + 0xc88) = 1.0 / fVar15;
    fVar9 = *(float *)(lVar11 + 0x38);
    *(ulonglong *)(param_2 + 0xc90) =
         CONCAT44((-1.0 / fVar14) * *(float *)(lVar11 + 0x34),
                  (-1.0 / fVar13) * *(float *)(lVar11 + 0x30));
    *(float *)(param_2 + 0xc98) = (-1.0 / fVar15) * fVar9;
    iVar4 = *(int *)(lVar11 + 0x54);
    local_48 = (int)*(undefined8 *)(lVar11 + 0x4c);
    *(ulonglong *)(param_2 + 0xca0) =
         CONCAT44((float)(int)((ulonglong)*(undefined8 *)(lVar11 + 0x4c) >> 0x20),(float)local_48);
    *(float *)(param_2 + 0xca8) = (float)iVar4;
    *(float *)(param_2 + 0xcac) = (float)*(int *)(lVar11 + 0x80);
    iVar4 = *(int *)(lVar11 + 0x8c);
    local_48 = (int)*(undefined8 *)(lVar11 + 0x84);
    *(ulonglong *)(param_2 + 0xcb0) =
         CONCAT44(1.0 / (float)(int)((ulonglong)*(undefined8 *)(lVar11 + 0x84) >> 0x20),
                  1.0 / (float)local_48);
    fVar9 = 1.0 / (float)iVar4;
  }
  *(float *)(param_2 + 0xcb8) = fVar9;
  return;
}



// FUNCTION 141d74090 FUN_141d74090 body=611 status=ok
// SIG undefined FUN_141d74090(void)

void FUN_141d74090(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8214;
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
          goto LAB_141d74247;
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
LAB_141d74247:
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



// FUNCTION 141d74300 FUN_141d74300 body=927 status=ok
// SIG undefined FUN_141d74300(void)

void FUN_141d74300(longlong param_1,float *param_2,ulonglong param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x20);
  if ((((plVar5 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar5 + 0x210))(), lVar6 != 0)) &&
      (lVar6 = *(longlong *)(lVar6 + 0x1150), lVar6 != 0)) &&
     ((*(char *)(lVar6 + 0x29) == '\0' &&
      ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x2c) & 0x8000000) != 0)))) {
    fVar7 = *(float *)(lVar6 + 0x100);
    fVar1 = param_4[3];
    fVar2 = *param_4;
    *param_2 = fVar2;
    fVar3 = param_4[1];
    param_2[1] = fVar3;
    fVar4 = param_4[2];
    param_2[2] = fVar4;
    param_2[3] = fVar7 * fVar1;
    param_2[4] = *(float *)(lVar6 + 0x70) * 0.28209478;
    param_2[5] = *(float *)(lVar6 + 0xa0) * 0.28209478;
    param_2[6] = *(float *)(lVar6 + 0xd0) * 0.28209478;
    param_2[7] = 0.0;
    param_2[8] = fVar2 * 0.28209478 * *(float *)(lVar6 + 0x70);
    param_2[9] = fVar3 * 0.28209478 * *(float *)(lVar6 + 0xa0);
    param_2[10] = fVar4 * 0.28209478 * *(float *)(lVar6 + 0xd0);
    param_2[0xb] = 0.0;
    param_2[0xc] = fVar2 * 0.28209478 * *(float *)(lVar6 + 0x70);
    fVar7 = fVar2 * 0.325735;
    param_2[0xd] = -(fVar7 * *(float *)(lVar6 + 0x74));
    param_2[0xe] = fVar7 * *(float *)(lVar6 + 0x78);
    param_2[0xf] = -(fVar7 * *(float *)(lVar6 + 0x7c));
    fVar7 = fVar3 * 0.325735;
    param_2[0x10] = fVar3 * 0.28209478 * *(float *)(lVar6 + 0xa0);
    param_2[0x11] = -(fVar7 * *(float *)(lVar6 + 0xa4));
    param_2[0x12] = fVar7 * *(float *)(lVar6 + 0xa8);
    param_2[0x13] = -(fVar7 * *(float *)(lVar6 + 0xac));
    param_2[0x14] = fVar4 * 0.28209478 * *(float *)(lVar6 + 0xd0);
    param_2[0x15] = fVar4 * -0.325735 * *(float *)(lVar6 + 0xd4);
    param_2[0x16] = fVar4 * 0.325735 * *(float *)(lVar6 + 0xd8);
    param_2[0x17] = fVar4 * -0.325735 * *(float *)(lVar6 + 0xdc);
    param_2[0x18] = fVar2 * 0.2731371 * *(float *)(lVar6 + 0x80);
    param_2[0x19] = fVar2 * -0.2731371 * *(float *)(lVar6 + 0x84);
    param_2[0x1a] = fVar2 * 0.23654367 * *(float *)(lVar6 + 0x88);
    param_2[0x1b] = fVar2 * -0.2731371 * *(float *)(lVar6 + 0x8c);
    param_2[0x1c] = fVar3 * 0.2731371 * *(float *)(lVar6 + 0xb0);
    param_2[0x1d] = fVar3 * -0.2731371 * *(float *)(lVar6 + 0xb4);
    param_2[0x1e] = fVar3 * 0.23654367 * *(float *)(lVar6 + 0xb8);
    param_2[0x1f] = fVar3 * -0.2731371 * *(float *)(lVar6 + 0xbc);
    param_2[0x20] = fVar4 * 0.2731371 * *(float *)(lVar6 + 0xe0);
    param_2[0x21] = fVar4 * -0.2731371 * *(float *)(lVar6 + 0xe4);
    param_2[0x22] = fVar4 * 0.23654367 * *(float *)(lVar6 + 0xe8);
    param_2[0x23] = fVar4 * -0.2731371 * *(float *)(lVar6 + 0xec);
    param_2[0x24] = fVar2 * 0.13656855 * *(float *)(lVar6 + 0x90);
    param_2[0x25] = fVar3 * 0.13656855 * *(float *)(lVar6 + 0xc0);
    param_2[0x26] = fVar4 * 0.13656855 * *(float *)(lVar6 + 0xf0);
    param_2[0x27] = 1.0;
    return;
  }
  _guard_xfg_dispatch_icall_nop(param_2,0,param_3 & 0xffffffff);
  return;
}



// FUNCTION 141d746a0 FUN_141d746a0 body=171 status=ok
// SIG undefined FUN_141d746a0(void)

void FUN_141d746a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x3bc);
  uVar2 = *(undefined8 *)(param_2 + 0x378);
  uVar3 = FSceneRenderTargets::GetSceneColorFormat(param_2);
  FUN_141d74750(param_1,uVar2,uVar1,uVar3,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



// FUNCTION 141d74750 FUN_141d74750 body=5722 status=ok
// SIG undefined FUN_141d74750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d74750(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,int param_8,
                  longlong param_9,longlong param_10,undefined4 param_11)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  char cVar11;
  int iVar12;
  DWORD DVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  WriteBytesMem *pWVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  longlong lVar22;
  WriteBytesMem *pWVar23;
  WriteBytesMem *this;
  uchar *puVar24;
  float *pfVar25;
  float *pfVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  longlong local_res8;
  undefined8 local_res10;
  ulonglong local_108;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  lVar10 = param_9;
  this = (WriteBytesMem *)0x0;
  iVar18 = 0;
  if (*(char *)(param_1 + 0x120b) == '\0') {
    local_f8 = *(undefined8 *)(param_1 + 0x1aa0);
    fStack_f0 = (float)*(undefined8 *)(param_1 + 0x1aa8);
    fStack_ec = (float)((ulonglong)*(undefined8 *)(param_1 + 0x1aa8) >> 0x20);
  }
  else {
    fStack_ec = (float)(*(int *)(param_1 + 0x1aac) - *(int *)(param_1 + 0x1aa4));
    fStack_f0 = (float)(*(int *)(param_1 + 0x1aa8) - *(int *)(param_1 + 0x1aa0));
    local_f8 = 0;
  }
  uStack_d0 = CONCAT44(fStack_ec,fStack_f0);
  local_d8 = local_f8;
  local_res10 = param_2;
  FUN_14275c280(param_1,param_9,&local_res10,param_3,&local_d8,param_5,param_6);
  cVar11 = FUN_141c917b0(param_4);
  uVar38 = 0x3f800000;
  if (cVar11 == '\0') {
    uVar15 = 0;
  }
  else {
    uVar15 = 0x3f800000;
  }
  *(undefined4 *)(lVar10 + 0xc4c) = uVar15;
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x20);
  iVar17 = 0;
  pWVar19 = this;
  if ((plVar7 == (longlong *)0x0) ||
     (pWVar19 = (WriteBytesMem *)(**(code **)(*plVar7 + 0x210))(), pWVar19 == (WriteBytesMem *)0x0))
  {
    *(undefined8 *)(lVar10 + 0xa7c) = 0;
    *(undefined8 *)(lVar10 + 0xa84) = 0;
    *(undefined8 *)(lVar10 + 0xa8c) = 0;
    *(undefined8 *)(lVar10 + 0xa94) = 0;
    *(undefined8 *)(lVar10 + 0xa9c) = 0;
    *(undefined4 *)(lVar10 + 0xaa4) = 0x3f800000;
    uVar21 = _DAT_1464aa6e8;
    *(undefined8 *)(lVar10 + 0xab0) = _DAT_1464aa6e0;
    *(undefined8 *)(lVar10 + 0xab8) = uVar21;
    *(ulonglong *)(lVar10 + 0xa70) = _DAT_1468b5d90;
    uVar14 = DAT_1468b5d98;
LAB_141d74c8a:
    *(undefined4 *)(lVar10 + 0xaa8) = 0;
    *(uint *)(lVar10 + 0xa78) = uVar14;
    pWVar23 = this;
  }
  else {
    if (*(longlong *)(pWVar19 + 0x1168) == 0) {
      *(undefined8 *)(lVar10 + 0x990) = 0;
      *(undefined8 *)(lVar10 + 0x998) = 0;
      uVar21 = _DAT_1464aa6e8;
      *(undefined8 *)(lVar10 + 0x9a0) = _DAT_1464aa6e0;
      *(undefined8 *)(lVar10 + 0x9a8) = uVar21;
      *(ulonglong *)(lVar10 + 0x9b0) = _DAT_1468b5d90;
      uVar14 = DAT_1468b5d98;
    }
    else {
      lVar22 = *(longlong *)(*(longlong *)(pWVar19 + 0x1168) + 0x30);
      fVar32 = *(float *)(lVar22 + 0x100);
      fVar34 = *(float *)(lVar22 + 0x104);
      fVar28 = *(float *)(lVar22 + 0x108);
      *(float *)(lVar10 + 0x990) = fVar32;
      *(float *)(lVar10 + 0x994) = fVar34;
      *(float *)(lVar10 + 0x998) = fVar28;
      *(float *)(lVar10 + 0x99c) = fVar32 * 0.3 + fVar34 * 0.59 + fVar28 * 0.11;
      lVar22 = *(longlong *)(*(longlong *)(pWVar19 + 0x1168) + 0x30);
      fVar34 = *(float *)(lVar22 + 0x100) * 0.31830987;
      fVar32 = *(float *)(lVar22 + 0x104) * 0.31830987;
      fStack_f0 = *(float *)(lVar22 + 0x108) * 0.31830987;
      fStack_ec = *(float *)(lVar22 + 0x10c) * 0.31830987;
      *(float *)(lVar10 + 0x9a0) = fVar34;
      *(float *)(lVar10 + 0x9a4) = fVar32;
      *(float *)(lVar10 + 0x9a8) = fStack_f0;
      *(float *)(lVar10 + 0x9ac) = fStack_ec;
      local_f8 = CONCAT44(fVar32,fVar34);
      lVar22 = *(longlong *)(*(longlong *)(pWVar19 + 0x1168) + 0x30);
      uStack_100 = *(uint *)(lVar22 + 0x50) ^ 0x80000000;
      *(ulonglong *)(lVar10 + 0x9b0) =
           CONCAT44(*(undefined4 *)(lVar22 + 0x40),*(undefined4 *)(lVar22 + 0x30)) ^
           0x8000000080000000;
      uVar14 = uStack_100;
    }
    *(uint *)(lVar10 + 0x9b8) = uVar14;
    cVar11 = FUN_141ae2360(*(undefined8 *)(param_1 + 0x10));
    if ((cVar11 == '\0') || (*(longlong *)(pWVar19 + 0x1908) == 0)) {
      *(undefined8 *)(lVar10 + 0xa7c) = 0;
      *(undefined8 *)(lVar10 + 0xa84) = 0;
      *(undefined8 *)(lVar10 + 0xa8c) = 0;
      *(undefined8 *)(lVar10 + 0xa94) = 0;
      *(undefined8 *)(lVar10 + 0xa9c) = 0;
      *(undefined4 *)(lVar10 + 0xaa4) = 0x3f800000;
      if (*(longlong *)(pWVar19 + 0x1188) == 0) {
        puVar20 = (undefined8 *)&DAT_1464aa6e0;
      }
      else {
        puVar20 = (undefined8 *)(*(longlong *)(*(longlong *)(pWVar19 + 0x1188) + 0x30) + 0x100);
      }
      uVar21 = puVar20[1];
      *(undefined8 *)(lVar10 + 0xab0) = *puVar20;
      *(undefined8 *)(lVar10 + 0xab8) = uVar21;
      if (*(longlong *)(pWVar19 + 0x1188) == 0) {
        local_108 = _DAT_1468b5d90;
        uStack_100 = DAT_1468b5d98;
      }
      else {
        lVar22 = *(longlong *)(*(longlong *)(pWVar19 + 0x1188) + 0x30);
        uStack_100 = *(uint *)(lVar22 + 0x50) ^ 0x80000000;
        local_108 = CONCAT44(*(undefined4 *)(lVar22 + 0x40),*(undefined4 *)(lVar22 + 0x30)) ^
                    0x8000000080000000;
      }
      *(ulonglong *)(lVar10 + 0xa70) = local_108;
      uVar14 = uStack_100;
      goto LAB_141d74c8a;
    }
    *(undefined4 *)(lVar10 + 0xa7c) = *(undefined4 *)(*(longlong *)(pWVar19 + 0x1908) + 0x38);
    *(undefined4 *)(lVar10 + 0xa80) = *(undefined4 *)(*(longlong *)(pWVar19 + 0x1908) + 0x3c);
    *(undefined4 *)(lVar10 + 0xa84) = *(undefined4 *)(*(longlong *)(pWVar19 + 0x1908) + 0x40);
    *(undefined4 *)(lVar10 + 0xa88) = *(undefined4 *)(*(longlong *)(pWVar19 + 0x1908) + 0x44);
    *(undefined4 *)(lVar10 + 0xa8c) = *(undefined4 *)(*(longlong *)(pWVar19 + 0x1908) + 0x48);
    *(undefined4 *)(lVar10 + 0xa90) = *(undefined4 *)(*(longlong *)(pWVar19 + 0x1908) + 0x4c);
    *(undefined4 *)(lVar10 + 0xa94) = *(undefined4 *)(*(longlong *)(pWVar19 + 0x1908) + 0x50);
    *(undefined4 *)(lVar10 + 0xa98) = *(undefined4 *)(*(longlong *)(pWVar19 + 0x1908) + 0x54);
    *(undefined4 *)(lVar10 + 0xa9c) = *(undefined4 *)(*(longlong *)(pWVar19 + 0x1908) + 0x58);
    *(undefined4 *)(lVar10 + 0xaa0) = *(undefined4 *)(*(longlong *)(pWVar19 + 0x1908) + 0x5c);
    *(undefined4 *)(lVar10 + 0xaa4) = *(undefined4 *)(*(longlong *)(pWVar19 + 0x1908) + 0x60);
    if (*(longlong *)(pWVar19 + 0x1188) == 0) {
      puVar20 = (undefined8 *)(*(longlong *)(pWVar19 + 0x1908) + 100);
    }
    else {
      puVar20 = (undefined8 *)(*(longlong *)(*(longlong *)(pWVar19 + 0x1188) + 0x30) + 0x100);
    }
    uVar21 = puVar20[1];
    *(undefined8 *)(lVar10 + 0xab0) = *puVar20;
    *(undefined8 *)(lVar10 + 0xab8) = uVar21;
    if (*(longlong *)(pWVar19 + 0x1188) == 0) {
      lVar22 = *(longlong *)(pWVar19 + 0x1908);
      uStack_100 = *(uint *)(lVar22 + 0x7c);
      uVar15 = *(undefined4 *)(lVar22 + 0x78);
      uVar37 = *(undefined4 *)(lVar22 + 0x74);
    }
    else {
      lVar22 = *(longlong *)(*(longlong *)(pWVar19 + 0x1188) + 0x30);
      uStack_100 = *(uint *)(lVar22 + 0x50);
      uVar15 = *(undefined4 *)(lVar22 + 0x40);
      uVar37 = *(undefined4 *)(lVar22 + 0x30);
    }
    uStack_100 = uStack_100 ^ 0x80000000;
    local_108 = CONCAT44(uVar15,uVar37) ^ 0x8000000080000000;
    *(ulonglong *)(lVar10 + 0xa70) = local_108;
    *(uint *)(lVar10 + 0xa78) = uStack_100;
    *(uint *)(lVar10 + 0xaa8) = *(uint *)(*(longlong *)(pWVar19 + 0x1908) + 0x80) & 3;
    pWVar23 = (WriteBytesMem *)(ulonglong)*(uint *)(*(longlong *)(pWVar19 + 0x1908) + 0x84);
  }
  *(int *)(lVar10 + 0xaac) = (int)pWVar23;
  lVar22 = *(longlong *)(param_1 + 0x1a18);
  if (lVar22 == 0) {
    lVar22 = *(longlong *)(DAT_146ac3e00 + 0x30);
  }
  *(longlong *)(lVar10 + 0xe70) = lVar22;
  lVar22 = *(longlong *)(param_1 + 0x1a20);
  if (lVar22 == 0) {
    lVar22 = *(longlong *)(DAT_146ac3e00 + 0x30);
  }
  *(longlong *)(lVar10 + 0xe80) = lVar22;
  lVar22 = *(longlong *)(param_1 + 0x1a28);
  if ((lVar22 == 0) && (lVar22 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar22 == 0)) {
    lVar22 = *(longlong *)(DAT_146ac3e00 + 0x30);
  }
  *(longlong *)(lVar10 + 0xe90) = lVar22;
  uVar21 = FUN_141a156e0();
  *(undefined8 *)(lVar10 + 0xe78) = uVar21;
  uVar21 = FUN_141a156e0();
  *(undefined8 *)(lVar10 + 0xe88) = uVar21;
  uVar21 = FUN_141a156e0();
  *(undefined8 *)(lVar10 + 0xe98) = uVar21;
  if (*(int *)(param_1 + 0x154c) < 0) {
    iVar12 = -1;
  }
  else {
    iVar12 = 1 << ((byte)*(int *)(param_1 + 0x154c) & 0x1f);
  }
  *(int *)(lVar10 + 0xd10) = iVar12;
  cVar11 = FUN_141ee42d0();
  lVar22 = DAT_146a9d140;
  if (cVar11 == '\0') {
    uVar15 = 0x3f800000;
  }
  else {
    cVar11 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar11 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar13 = GetCurrentThreadId();
      pWVar23 = (WriteBytesMem *)&DAT_00000004;
      if (DVar13 == DAT_1468c21c0) goto LAB_141d74d91;
    }
    else {
LAB_141d74d91:
      pWVar23 = this;
    }
    uVar15 = *(undefined4 *)(pWVar23 + lVar22);
  }
  *(undefined4 *)(lVar10 + 0xd14) = uVar15;
  if ((DAT_1464c3328 != 0) &&
     (lVar22 = *(longlong *)(DAT_1464c3328 + 0x10), *(longlong *)(lVar10 + 0xea0) = lVar22,
     lVar22 == 0)) {
    *(undefined8 *)(lVar10 + 0xea0) = *(undefined8 *)(DAT_146ac3e00 + 0x30);
  }
  uVar21 = FUN_141ac0bb0();
  *(undefined8 *)(lVar10 + 0xea8) = uVar21;
  if (((DAT_1464c3330 != 0) &&
      (lVar22 = *(longlong *)(DAT_1464c3330 + 0x10), *(longlong *)(lVar10 + 0xeb0) = lVar22,
      lVar22 == 0)) &&
     (lVar22 = *(longlong *)(DAT_146ac3e30 + 0x30), *(longlong *)(lVar10 + 0xeb0) = lVar22,
     lVar22 == 0)) {
    *(undefined8 *)(lVar10 + 0xeb0) = *(undefined8 *)(DAT_146ac3e00 + 0x30);
  }
  uVar21 = FUN_141b33a40();
  *(undefined8 *)(lVar10 + 0xeb8) = uVar21;
  if ((DAT_1464c3338 != 0) &&
     (lVar22 = *(longlong *)(DAT_1464c3338 + 0x10), *(longlong *)(lVar10 + 0xec0) = lVar22,
     lVar22 == 0)) {
    *(undefined8 *)(lVar10 + 0xec0) = *(undefined8 *)(DAT_146ac3e00 + 0x30);
  }
  FUN_141b730a0(param_1,lVar10);
  FUN_141e0b120(param_1,lVar10);
  FUN_141d73a00(pWVar19,lVar10);
  fVar34 = (float)FUN_142853ba0();
  fVar32 = fVar34;
  if ((*(char *)(param_1 + 0x30c4) != '\0') && (*(int *)(param_1 + 0x1a14) == 1)) {
    *(undefined4 *)(lVar10 + 0x96c) = *(undefined4 *)(param_1 + 0x2f2c);
    fVar32 = _guard_xfg_dispatch_icall_nop(2.0,*(float *)(param_1 + 0x2f2c));
    *(float *)(lVar10 + 0x970) = fVar32;
    fVar32 = fVar34 + *(float *)(param_1 + 0x2f2c);
  }
  local_res8 = 0;
  param_9 = 0;
  if (0.0001 <= ABS(fVar32 - fVar34)) {
    lVar22 = *(longlong *)(param_1 + 0x1ab0);
    if ((lVar22 == 0) || (0.0001 <= ABS(*(float *)(lVar22 + 0x12f8) - fVar32))) {
      local_f8 = CONCAT44(fVar32,*(undefined4 *)(param_1 + 0x30c0)) & 0xffffffff000000ff;
      fStack_f0 = 0.0;
      fStack_ec = 3.4028235e+38;
      uStack_e8 = 0;
      local_e4 = 0;
      local_e0 = 0;
      (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,&local_108,&local_f8);
      TRefCountPtr<FRHIIndexBuffer>::operator=(&local_res8,&local_108);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_108);
      local_f8._0_4_ = CONCAT13(1,CONCAT21(0x101,(char)*(undefined4 *)(param_1 + 0x30c0)));
      local_f8 = CONCAT44(fVar32,(undefined4)local_f8);
      fStack_f0 = 0.0;
      fStack_ec = 3.4028235e+38;
      uStack_e8 = 0;
      local_e4 = 0;
      local_e0 = 0;
      (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,&local_108,&local_f8);
      TRefCountPtr<FRHIIndexBuffer>::operator=(&param_9,&local_108);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_108);
    }
    else {
      TRefCountPtr<FRHIIndexBuffer>::operator=(&local_res8,*(undefined8 *)(lVar22 + 0x1300));
      TRefCountPtr<FRHIIndexBuffer>::operator=
                (&param_9,*(undefined8 *)(*(longlong *)(param_1 + 0x1ab0) + 0x1308));
    }
  }
  else {
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_res8,*(undefined8 *)(DAT_146b09460 + 0x30));
    TRefCountPtr<FRHIIndexBuffer>::operator=(&param_9,*(undefined8 *)(DAT_146b09468 + 0x30));
  }
  uVar21 = param_9;
  *(longlong *)(lVar10 + 0xd50) = local_res8;
  *(longlong *)(lVar10 + 0xd58) = param_9;
  lVar22 = *(longlong *)(param_1 + 0x1ab0);
  if ((lVar22 != 0) && (*(longlong *)(lVar22 + 0x1300) != local_res8)) {
    *(float *)(lVar22 + 0x12f8) = fVar32;
    TRefCountPtr<FRHIIndexBuffer>::operator=(*(longlong *)(param_1 + 0x1ab0) + 0x1300);
    TRefCountPtr<FRHIIndexBuffer>::operator=(*(longlong *)(param_1 + 0x1ab0) + 0x1308,uVar21);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_9);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  uVar15 = 0;
  *(undefined4 *)(lVar10 + 0x968) = 0xffffffff;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(lVar10 + 0xa00) = 0x3f80000000000000;
    *(undefined8 *)(lVar10 + 0xa08) = 0;
  }
  else {
    fVar32 = *(float *)(param_1 + 0x28c8);
    fVar34 = *(float *)(param_1 + 0x28c4);
    bVar6 = *(byte *)((longlong)*(longlong **)(param_1 + 0x1ab0) + 0x4d5);
    uVar14 = (**(code **)(**(longlong **)(param_1 + 0x1ab0) + 0x58))();
    fVar28 = (float)bVar6;
    *(float *)(lVar10 + 0xa00) = (float)uVar14;
    *(float *)(lVar10 + 0xa04) = fVar28;
    *(float *)(lVar10 + 0xa08) = fVar34;
    *(float *)(lVar10 + 0xa0c) = fVar32;
    local_f8 = CONCAT44(fVar28,(float)uVar14);
    fStack_f0 = fVar34;
    fStack_ec = fVar32;
    uVar15 = (**(code **)(**(longlong **)(param_1 + 0x1ab0) + 0x70))(fVar28);
  }
  *(undefined4 *)(lVar10 + 0x97c) = uVar15;
  lVar22 = param_1;
  if (((((*(uint *)(param_1 + 0xf60) & 0xfffffffc) != 0) || (*(uint *)(param_1 + 0xf60) == 2)) &&
      (0 < *(int *)(*(undefined8 **)(param_1 + 0x10) + 1))) &&
     ((lVar27 = *(longlong *)**(undefined8 **)(param_1 + 0x10), *(char *)(lVar27 + 0x1201) != '\0'
      && (*(int *)(lVar27 + 0xf60) == 1)))) {
    lVar22 = lVar27;
  }
  lVar27 = (longlong)param_8;
  FUN_141dc3e40(lVar22,param_7,param_8);
  pWVar23 = this;
  if (3 < lVar27) {
    pfVar26 = (float *)(lVar10 + 0x9e0);
    lVar22 = (lVar27 - 4U >> 2) + 1;
    pfVar25 = (float *)(param_7 + 0x3c);
    pWVar23 = (WriteBytesMem *)(lVar22 * 4);
    do {
      fVar32 = pfVar25[-0xd];
      fVar29 = (float)DAT_1464c32d8;
      fVar34 = pfVar25[-0xb];
      fVar35 = pfVar25[-0xc] - pfVar25[-0xf];
      fVar28 = pfVar25[-10];
      fVar33 = pfVar25[-0xe];
      fVar30 = pfVar25[-0xe];
      fVar36 = pfVar25[-0xd];
      pfVar26[-8] = pfVar25[-0xf];
      pfVar26[-7] = fVar30;
      pfVar26[-6] = fVar36;
      pfVar26[-5] = 1.0 / fVar29;
      *pfVar26 = 1.0 / fVar35;
      pfVar26[1] = 1.0 / (fVar34 - fVar33);
      pfVar26[2] = 1.0 / (fVar28 - fVar32);
      pfVar26[3] = (1.0 / fVar29) * fVar35;
      fVar29 = (float)DAT_1464c32d8;
      fVar32 = pfVar25[-6];
      fVar34 = pfVar25[-4];
      fVar35 = pfVar25[-5] - pfVar25[-8];
      fVar28 = pfVar25[-3];
      fVar33 = pfVar25[-7];
      fVar30 = pfVar25[-7];
      fVar36 = pfVar25[-6];
      pfVar26[-4] = pfVar25[-8];
      pfVar26[-3] = fVar30;
      pfVar26[-2] = fVar36;
      pfVar26[-1] = 1.0 / fVar29;
      pfVar26[4] = 1.0 / fVar35;
      pfVar26[5] = 1.0 / (fVar34 - fVar33);
      pfVar26[6] = 1.0 / (fVar28 - fVar32);
      pfVar26[7] = (1.0 / fVar29) * fVar35;
      fVar30 = (float)DAT_1464c32d8;
      fVar32 = pfVar25[1];
      fVar36 = pfVar25[2] - pfVar25[-1];
      fVar34 = *pfVar25;
      fVar28 = pfVar25[3];
      fVar33 = pfVar25[4];
      *pfVar26 = pfVar25[-1];
      pfVar26[1] = fVar34;
      pfVar26[2] = fVar32;
      pfVar26[3] = 1.0 / fVar30;
      pfVar26[8] = 1.0 / fVar36;
      pfVar26[9] = 1.0 / (fVar28 - fVar34);
      pfVar26[10] = 1.0 / (fVar33 - fVar32);
      pfVar26[0xb] = (1.0 / fVar30) * fVar36;
      fVar33 = (float)DAT_1464c32d8;
      pfVar1 = pfVar25 + 7;
      pfVar2 = pfVar25 + 6;
      pfVar3 = pfVar25 + 8;
      fVar32 = pfVar25[7];
      fVar34 = pfVar25[8];
      fVar30 = pfVar25[9] - *pfVar2;
      pfVar4 = pfVar25 + 10;
      pfVar5 = pfVar25 + 0xb;
      pfVar25 = pfVar25 + 0x1c;
      fStack_ec = fVar30 / fVar33;
      fVar30 = 1.0 / fVar30;
      fVar28 = 1.0 / (*pfVar4 - *pfVar1);
      fStack_f0 = 1.0 / (*pfVar5 - *pfVar3);
      pfVar26[4] = *pfVar2;
      pfVar26[5] = fVar32;
      pfVar26[6] = fVar34;
      pfVar26[7] = 1.0 / fVar33;
      pfVar26[0xc] = fVar30;
      pfVar26[0xd] = fVar28;
      pfVar26[0xe] = fStack_f0;
      pfVar26[0xf] = fStack_ec;
      pfVar26 = pfVar26 + 0x10;
      local_f8 = CONCAT44(fVar28,fVar30);
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  if ((longlong)pWVar23 < lVar27) {
    pfVar25 = (float *)(param_7 + 0x14 + (longlong)pWVar23 * 0x1c);
    pfVar26 = (float *)((longlong)(pWVar23 + 0x9e) * 0x10 + lVar10);
    lVar27 = lVar27 - (longlong)pWVar23;
    do {
      pfVar1 = pfVar25 + -3;
      fVar33 = (float)DAT_1464c32d8;
      pfVar2 = pfVar25 + -5;
      pfVar3 = pfVar25 + -1;
      fVar30 = pfVar25[-2] - *pfVar2;
      fVar32 = *pfVar25;
      pfVar4 = pfVar25 + -4;
      fVar34 = pfVar25[-4];
      fVar28 = pfVar25[-3];
      fStack_ec = fVar30 * (1.0 / fVar33);
      pfVar25 = pfVar25 + 7;
      fStack_f0 = 1.0 / (fVar32 - *pfVar1);
      fVar32 = 1.0 / (*pfVar3 - *pfVar4);
      fVar30 = 1.0 / fVar30;
      pfVar26[-8] = *pfVar2;
      pfVar26[-7] = fVar34;
      pfVar26[-6] = fVar28;
      pfVar26[-5] = 1.0 / fVar33;
      *pfVar26 = fVar30;
      pfVar26[1] = fVar32;
      pfVar26[2] = fStack_f0;
      pfVar26[3] = fStack_ec;
      pfVar26 = pfVar26 + 4;
      local_f8 = CONCAT44(fVar32,fVar30);
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  *(undefined4 *)(lVar10 + 0x8e4) = *(undefined4 *)(param_1 + 0x2f28);
  *(float *)(lVar10 + 0x8e8) = 1.0 / *(float *)(param_1 + 0x2f28);
  *(undefined4 *)(lVar10 + 0xa24) = *(undefined4 *)(param_1 + 0x1720);
  *(undefined4 *)(lVar10 + 0xa20) = *(undefined4 *)(param_1 + 0x171c);
  *(undefined4 *)(lVar10 + 0xa30) = *(undefined4 *)(param_1 + 0x172c);
  fVar32 = *(float *)(param_1 + 0x1730);
  if (fVar32 <= 0.01) {
    fVar32 = 0.01;
  }
  *(float *)(lVar10 + 0xa34) = fVar32;
  fVar32 = *(float *)(param_1 + 0x1734);
  if (fVar32 <= 0.01) {
    fVar32 = 0.01;
  }
  *(float *)(lVar10 + 0xa38) = fVar32;
  *(undefined4 *)(lVar10 + 0xa28) = *(undefined4 *)(param_1 + 0x1738);
  *(undefined4 *)(lVar10 + 0xa2c) = 0x42480000;
  cVar11 = FUN_141ac2b70(&DAT_1464c1750);
  if (cVar11 == '\0') {
    uVar15 = 0;
  }
  else {
    uVar15 = 0x3f800000;
  }
  *(undefined4 *)(lVar10 + 0xa40) = uVar15;
  *(undefined8 *)(lVar10 + 0xa44) = 0x3f800000;
  *(undefined4 *)(lVar10 + 0xa48) = *(undefined4 *)(DAT_146a9d2a8 + 4);
  *(float *)(lVar10 + 0xa50) = *(float *)(param_1 + 0x16d0) * *(float *)(param_1 + 0x16c0);
  *(float *)(lVar10 + 0xa54) = *(float *)(param_1 + 0x16c4) * *(float *)(param_1 + 0x16d0);
  *(float *)(lVar10 + 0xa58) = *(float *)(param_1 + 0x16c8) * *(float *)(param_1 + 0x16d0);
  *(float *)(lVar10 + 0xa5c) =
       *(float *)(param_1 + 0x16c4) * 0.59 + *(float *)(param_1 + 0x16c0) * 0.3 +
       *(float *)(param_1 + 0x16c8) * 0.11;
  lVar22 = DAT_146a9d470;
  cVar11 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar11 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar13 = GetCurrentThreadId();
    pWVar23 = (WriteBytesMem *)&DAT_00000004;
    if (DVar13 == DAT_1468c21c0) goto LAB_141d756aa;
  }
  else {
LAB_141d756aa:
    pWVar23 = this;
  }
  fVar32 = *(float *)(pWVar23 + lVar22);
  if (0.0 <= fVar32) {
    if (2.0 <= fVar32) {
      fVar32 = 2.0;
    }
  }
  else {
    fVar32 = 0.0;
  }
  *(float *)(lVar10 + 0xac0) = fVar32;
  lVar22 = DAT_146a9d440;
  cVar11 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar11 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar13 = GetCurrentThreadId();
    pWVar23 = (WriteBytesMem *)&DAT_00000004;
    if (DVar13 != DAT_1468c21c0) goto LAB_141d75704;
  }
  pWVar23 = this;
LAB_141d75704:
  fVar32 = *(float *)(pWVar23 + lVar22);
  if (-1.0 <= fVar32) {
    if (1.0 <= fVar32) {
      fVar32 = 1.0;
    }
  }
  else {
    fVar32 = -1.0;
  }
  *(float *)(lVar10 + 0xac4) = fVar32;
  lVar22 = DAT_146a9d458;
  cVar11 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar11 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar13 = GetCurrentThreadId(), pWVar23 = (WriteBytesMem *)&DAT_00000004,
     DVar13 == DAT_1468c21c0)) {
    pWVar23 = this;
  }
  fVar32 = *(float *)(pWVar23 + lVar22);
  fVar34 = 0.05;
  if ((0.05 <= fVar32) && (fVar34 = fVar32, 20.0 <= fVar32)) {
    fVar34 = 20.0;
  }
  *(float *)(lVar10 + 0xac8) = fVar34;
  if (*(char *)(param_1 + 0x1203) == '\0') {
    uVar15 = 0;
  }
  else {
    uVar15 = 0x3f800000;
  }
  *(undefined4 *)(lVar10 + 0xacc) = uVar15;
  uVar21 = *(undefined8 *)(param_1 + 0x1544);
  *(undefined8 *)(lVar10 + 0xad0) = *(undefined8 *)(param_1 + 0x153c);
  *(undefined8 *)(lVar10 + 0xad8) = uVar21;
  *(undefined4 *)(lVar10 + 0xae0) = *(undefined4 *)(param_1 + 0x1550);
  *(undefined4 *)(lVar10 + 0xa60) = 0;
  cVar11 = FUN_142753910();
  if (cVar11 != '\0') {
    iVar12 = FUN_14274f1e0();
    if (iVar12 == 3) {
      *(undefined4 *)(lVar10 + 0xa60) = 0x3f800000;
    }
    else if (iVar12 == 4) {
      *(undefined4 *)(lVar10 + 0xa60) = 0x40000000;
    }
    else if (iVar12 == 5) {
      *(undefined4 *)(lVar10 + 0xa60) = 0x40400000;
    }
  }
  puVar20 = (undefined8 *)FUN_141c153e0(&local_f8);
  uVar21 = puVar20[1];
  *(undefined8 *)(lVar10 + 0xa10) = *puVar20;
  *(undefined8 *)(lVar10 + 0xa18) = uVar21;
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x20);
  if (plVar7 != (longlong *)0x0) {
    pWVar19 = (WriteBytesMem *)(**(code **)(*plVar7 + 0x210))();
  }
  fStack_f0 = 0.0;
  fStack_ec = 0.0;
  if ((pWVar19 == (WriteBytesMem *)0x0) || (lVar22 = *(longlong *)(pWVar19 + 0x1150), lVar22 == 0))
  {
    fVar32 = 0.0;
    local_f8._4_4_ = 0;
    local_f8._0_4_ = 0;
    *(undefined4 *)(lVar10 + 0xae4) = 0;
    uVar15 = (undefined4)local_f8;
    uVar37 = local_f8._4_4_;
    fVar34 = fStack_f0;
    fVar28 = fStack_ec;
  }
  else {
    uVar15 = *(undefined4 *)(lVar22 + 0x38);
    uVar37 = *(undefined4 *)(lVar22 + 0x3c);
    fVar34 = *(float *)(lVar22 + 0x40);
    fVar28 = *(float *)(lVar22 + 0x44);
    if ((*(char *)(lVar22 + 0x27) == '\0') || (*(char *)(lVar22 + 0x28) == '\0')) {
      uVar31 = 0;
    }
    else {
      uVar31 = 0x3f800000;
    }
    *(undefined4 *)(lVar10 + 0xae4) = uVar31;
    if (*(char *)(lVar22 + 0x24) == '\0') {
      fVar32 = 1.0;
    }
    else {
      fVar32 = *(float *)(lVar22 + 0x104);
      if (fVar32 <= 0.0) {
        fVar32 = 0.0;
      }
    }
  }
  *(float *)(lVar10 + 0xae8) = fVar32;
  local_f8 = CONCAT44(uVar37,uVar15);
  *(undefined4 *)(lVar10 + 0xaf0) = uVar15;
  *(undefined4 *)(lVar10 + 0xaf4) = uVar37;
  *(float *)(lVar10 + 0xaf8) = fVar34;
  *(float *)(lVar10 + 0xafc) = fVar28;
  fStack_f0 = fVar34;
  fStack_ec = fVar28;
  _guard_xfg_dispatch_icall_nop((void *)(lVar10 + 0xb00),0,0x90);
  if (param_10 != 0) {
    local_f8 = CONCAT44(uVar37,uVar15);
    fStack_f0 = fVar34;
    fStack_ec = fVar28;
    FUN_141d74300(param_1,param_10,param_11,&local_f8);
  }
  *(undefined4 *)(lVar10 + 0xb90) = 0;
  plVar7 = *(longlong **)(param_1 + 0x10);
  if (((plVar7 == (longlong *)0x0) || (*(int *)(param_1 + 0xf60) == 0)) || ((int)plVar7[1] < 2)) {
    fVar32 = 1.0;
  }
  else {
    lVar22 = ((longlong *)*plVar7)[1];
    lVar27 = *(longlong *)*plVar7;
    fVar32 = (float)(*(int *)(lVar22 + 0x1aa8) - *(int *)(lVar27 + 0x1aa0));
    fVar32 = (fVar32 - (float)(*(int *)(lVar22 + 0x1aa0) - *(int *)(lVar27 + 0x1aa8))) / fVar32;
  }
  *(float *)(lVar10 + 0xb94) = fVar32;
  uVar16 = FUN_14238ce60();
  uVar14 = 0x1f;
  if (uVar16 != 0) {
    for (; uVar16 >> uVar14 == 0; uVar14 = uVar14 - 1) {
    }
  }
  pWVar23 = this;
  if (uVar16 != 0) {
    pWVar23 = (WriteBytesMem *)(ulonglong)uVar14;
  }
  *(float *)(lVar10 + 0xb98) = (float)(longlong)pWVar23;
  if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x28) & 0x1000) == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0x3f800000;
  }
  *(undefined4 *)(lVar10 + 0xb9c) = uVar15;
  *(undefined4 *)(lVar10 + 0xba0) = DAT_1464c17a4;
  if (pWVar19 == (WriteBytesMem *)0x0) {
    uVar15 = 0x3f800000;
  }
  else {
    uVar15 = *(undefined4 *)(pWVar19 + 0x5ff0);
  }
  *(undefined4 *)(lVar10 + 0xba4) = uVar15;
  puVar20 = (undefined8 *)
            GetReflectionEnvironmentRoughnessMixingScaleBiasAndLargestWeight(&local_f8);
  *(undefined8 *)(lVar10 + 0xbb0) = *puVar20;
  *(undefined4 *)(lVar10 + 3000) = *(undefined4 *)(puVar20 + 1);
  iVar12 = *(int *)(param_1 + 0xf60);
  if (1 < iVar12) {
    if (iVar12 == 2) {
      iVar17 = 1;
    }
    else {
      iVar17 = iVar12 + -2;
    }
  }
  *(int *)(lVar10 + 0xbbc) = iVar17;
  *(undefined4 *)(lVar10 + 0xcbc) = *(undefined4 *)(param_1 + 0xf64);
  *(undefined8 *)(lVar10 + 0xef8) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(DAT_146b17150 + 0x728) + 0x60) + 0x30);
  if (pWVar19 == (WriteBytesMem *)0x0) {
    uStack_100 = 0;
    *(undefined8 *)(lVar10 + 0xcd0) = 0xbf800000;
    uVar15 = 0x3f800000;
    *(undefined4 *)(lVar10 + 0xcd8) = 0;
    *(undefined8 *)(lVar10 + 0xcdc) = 0x3f800000;
  }
  else {
    *(undefined8 *)(lVar10 + 0xcd0) = *(undefined8 *)(pWVar19 + 0x192c);
    *(undefined4 *)(lVar10 + 0xcd8) = *(undefined4 *)(pWVar19 + 0x1934);
    *(undefined4 *)(lVar10 + 0xcdc) = *(undefined4 *)(pWVar19 + 0x1920);
    *(undefined4 *)(lVar10 + 0xce0) = *(undefined4 *)(pWVar19 + 0x1924);
    uVar15 = *(undefined4 *)(pWVar19 + 0x1928);
  }
  *(undefined4 *)(lVar10 + 0xce4) = uVar15;
  if ((pWVar19 == (WriteBytesMem *)0x0) ||
     (puVar8 = *(ulonglong **)(pWVar19 + 0x1938), puVar8 == (ulonglong *)0x0)) {
    *(undefined8 *)(lVar10 + 0xcf0) = 0;
    *(undefined8 *)(lVar10 + 0xcf8) = 0;
    *(undefined8 *)(lVar10 + 0xd00) = 0;
    *(undefined8 *)(lVar10 + 0xd08) = 0;
  }
  else {
    local_108 = *puVar8;
    uStack_100 = (uint)puVar8[1];
    uVar15 = *(undefined4 *)((longlong)puVar8 + 4);
    uVar9 = puVar8[1];
    *(int *)(lVar10 + 0xcf0) = (int)*puVar8;
    *(undefined4 *)(lVar10 + 0xcf4) = uVar15;
    *(int *)(lVar10 + 0xcf8) = (int)uVar9;
    *(undefined4 *)(lVar10 + 0xcfc) = 0x3f800000;
    lVar22 = *(longlong *)(pWVar19 + 0x1938);
    uStack_fc = 0x3f800000;
    uVar15 = *(undefined4 *)(lVar22 + 0x10);
    uVar37 = *(undefined4 *)(lVar22 + 0x14);
    *(undefined4 *)(lVar10 + 0xd00) = *(undefined4 *)(lVar22 + 0xc);
    *(undefined4 *)(lVar10 + 0xd04) = uVar15;
    *(undefined4 *)(lVar10 + 0xd08) = uVar37;
    *(undefined4 *)(lVar10 + 0xd0c) = 0x3f800000;
    lVar22 = *(longlong *)(*(longlong *)(pWVar19 + 0x1938) + 0x28);
    if ((lVar22 == 0) && (lVar22 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar22 == 0)) {
      lVar22 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(lVar10 + 0xf08) = lVar22;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a9ebe8) && (_Init_thread_header(&DAT_146a9ebe8), DAT_146a9ebe8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146a9ebe0 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"gbx.ColorRemapLUT.Scale");
    _Init_thread_footer(&DAT_146a9ebe8);
  }
  if (DAT_146a9ebe0 != (longlong *)0x0) {
    uVar38 = (**(code **)(*DAT_146a9ebe0 + 0x70))();
  }
  if (((pWVar19 == (WriteBytesMem *)0x0) ||
      (lVar22 = (**(code **)(*(longlong *)pWVar19 + 0x300))(pWVar19), lVar22 == 0)) ||
     (this = (WriteBytesMem *)(**(code **)(*(longlong *)pWVar19 + 0x300))(pWVar19),
     this == (WriteBytesMem *)0x0)) {
    uVar38 = 0;
  }
  else {
    iVar18 = UPartyBeaconState::GetMaxReservations(this);
  }
  *(undefined4 *)(lVar10 + 0xd20) = uVar38;
  *(undefined4 *)(lVar10 + 0xd24) = uVar38;
  *(undefined4 *)(lVar10 + 0xd28) = uVar38;
  *(float *)(lVar10 + 0xd2c) = (float)iVar18;
  if ((this == (WriteBytesMem *)0x0) ||
     (puVar24 = AK::WriteBytesMem::Bytes(this), puVar24 == (uchar *)0x0)) {
    if ((DAT_146ac3e20 == 0) || (lVar22 = *(longlong *)(DAT_146ac3e20 + 0x30), lVar22 == 0)) {
      lVar22 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
  }
  else {
    lVar22 = *(longlong *)(puVar24 + 0x10);
  }
  *(longlong *)(lVar10 + 0xf18) = lVar22;
  uVar21 = FUN_141b33b80();
  *(undefined8 *)(lVar10 + 0xf20) = uVar21;
  if (pWVar19 == (WriteBytesMem *)0x0) {
    *(undefined4 *)(lVar10 + 0xd30) = 0;
  }
  else {
    *(undefined4 *)(lVar10 + 0xd30) = *(undefined4 *)(pWVar19 + 0x604c);
  }
  return;
}



// FUNCTION 141d75db0 FUN_141d75db0 body=3515 status=ok
// SIG undefined FUN_141d75db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d75db0(longlong *param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  char param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined8 param_10)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined1 auStack_558 [32];
  int local_538;
  uint uStack_534;
  uint *puStack_530;
  uint local_528;
  uint uStack_524;
  int iStack_520;
  undefined4 uStack_51c;
  int local_518;
  int local_514;
  longlong local_510;
  ulonglong local_508;
  int local_500;
  longlong local_4f8;
  undefined1 local_4f0 [4];
  undefined1 local_4ec [4];
  undefined1 local_4e8 [4];
  undefined1 local_4e4 [4];
  longlong *local_4e0;
  undefined8 *local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  longlong local_4c0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined8 local_4a8;
  int iStack_4a0;
  uint uStack_49c;
  undefined8 local_498;
  uint uStack_490;
  uint uStack_48c;
  undefined8 local_488;
  undefined8 local_480;
  int iStack_478;
  uint uStack_474;
  undefined8 local_470;
  uint uStack_468;
  uint uStack_464;
  undefined8 local_460;
  longlong *local_458;
  undefined8 uStack_450;
  uint *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_428;
  undefined4 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_358;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  longlong *local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  float local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  longlong local_240;
  undefined4 local_238;
  undefined1 local_230 [64];
  longlong local_1f0;
  undefined4 local_1e8;
  char local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined2 local_178;
  undefined1 local_176;
  undefined1 local_168 [192];
  undefined1 *local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_558;
  local_4d0 = param_8;
  local_500 = (int)param_3[1];
  local_4c8 = param_10;
  local_514 = 0;
  if (0 < local_500) {
    local_4c0 = *param_3;
    local_4f8 = 0;
    local_510 = param_2;
    local_4e0 = param_1;
    do {
      uVar13 = 0;
      uStack_2e0 = 0;
      local_2b0 = _DAT_1468b5d78;
      uStack_2a8 = uRam00000001468b5d80;
      local_358 = 0;
      local_2d0 = 0xffffffff;
      local_2c8 = 0;
      local_2a0 = _DAT_1464aa6c0;
      uStack_298 = _DAT_1464aa6c8;
      local_288 = 100.0;
      local_280 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_278 = 0;
      local_260 = 0;
      local_258 = 0;
      local_250 = 0xffffffff;
      local_24c = 0;
      local_240 = 0;
      local_238 = 0;
      local_1e0 = '\0';
      local_1d8 = 0xffffffffffffffff;
      local_1d0 = 1.0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 0x100;
      local_1b8 = 0x42b40000;
      local_1b4 = 0x42b40000;
      local_1b0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      local_184 = 0;
      local_17c = 0;
      local_178 = 1;
      local_176 = 0;
      puVar17 = (undefined8 *)(local_4f8 * 0xe0 + local_4c0);
      local_308 = puVar17[0x16];
      uStack_300 = puVar17[0x17];
      local_2f8 = puVar17[0x16];
      uStack_2f0 = puVar17[0x17];
      local_428 = *puVar17;
      local_420 = *(undefined4 *)(puVar17 + 1);
      local_418 = puVar17[6];
      uStack_410 = puVar17[7];
      local_408 = puVar17[8];
      uStack_400 = puVar17[9];
      local_3f8 = puVar17[10];
      uStack_3f0 = puVar17[0xb];
      local_3e8 = *(undefined4 *)(puVar17 + 0xc);
      uStack_3e4 = *(undefined4 *)((longlong)puVar17 + 100);
      uStack_3e0 = *(undefined4 *)(puVar17 + 0xd);
      uStack_3dc = *(undefined4 *)((longlong)puVar17 + 0x6c);
      _local_2c0 = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
      _uStack_2b8 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
      local_290 = (ulonglong)*(uint *)(puVar17 + 0x18);
      local_4d8 = puVar17;
      local_2e8 = param_1;
      local_2d8 = local_4c8;
      local_1cc = param_4;
      uStack_2e0 = FUN_14238dd80(param_2,local_514);
      local_3d8 = puVar17[0xe];
      uStack_3d0 = puVar17[0xf];
      local_3c8 = puVar17[0x10];
      uStack_3c0 = puVar17[0x11];
      local_3b8 = puVar17[0x12];
      uStack_3b0 = puVar17[0x13];
      local_3a8 = *(undefined4 *)(puVar17 + 0x14);
      uStack_3a4 = *(undefined4 *)((longlong)puVar17 + 0xa4);
      uStack_3a0 = *(undefined4 *)(puVar17 + 0x15);
      uStack_39c = *(undefined4 *)((longlong)puVar17 + 0xac);
      local_1d0 = *(float *)(param_2 + 0x31c);
      if (0.01 <= local_1d0) {
        if (100.0 <= local_1d0) {
          local_1d0 = 100.0;
        }
      }
      else {
        local_1d0 = 0.01;
      }
      lVar5 = (**(code **)(*(longlong *)param_1[4] + 0x208))();
      if (lVar5 != 0) {
        uVar6 = (**(code **)(*(longlong *)param_1[4] + 0x208))();
        lVar5 = UWorld::GetWorldSettings(uVar6,0,1);
        if (lVar5 != 0) {
          uVar6 = (**(code **)(*(longlong *)param_1[4] + 0x208))();
          lVar5 = UWorld::GetWorldSettings(uVar6,0,1);
          local_288 = *(float *)(lVar5 + 0x588);
        }
      }
      local_290 = CONCAT44(local_288 * 0.01 * *(float *)((longlong)puVar17 + 0xc4),
                           (undefined4)local_290);
      if (param_5 != '\0') {
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
        local_2b0 = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
        uStack_2a8 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
      }
      lVar5 = operator_new(0x1aa0);
      uVar7 = uVar13;
      if (lVar5 != 0) {
        uVar7 = FUN_142742170(lVar5,&local_428);
      }
      local_508 = uVar7;
      plVar8 = (longlong *)FUN_14238d410(param_2);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0xe8))(plVar8,puVar17);
        uVar6 = (**(code **)(*plVar8 + 0xe0))(plVar8);
        *(undefined8 *)(uVar7 + 0x1a40) = uVar6;
      }
      *(undefined1 *)(uVar7 + 0x1204) = param_6;
      *(undefined1 *)(uVar7 + 0x1202) = 1;
      while( true ) {
        iVar16 = (int)uVar13;
        if ((iVar16 < 0) || (*(int *)(param_2 + 0x2e0) <= iVar16)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) break;
        lVar5 = FWeakObjectPtr::Get(*(longlong *)(param_2 + 0x2d8) + (longlong)iVar16 * 8);
        if (lVar5 != 0) {
          FUN_141d08e90(uVar7 + 0xfb8,local_4f0,lVar5 + 0x354,0);
        }
        uVar13 = (ulonglong)(iVar16 + 1);
      }
      iVar16 = 0;
      while( true ) {
        if ((iVar16 < 0) || (*(int *)(param_2 + 0x2f0) <= iVar16)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) break;
        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x2e8) + (longlong)iVar16 * 8);
        if (lVar5 != 0) {
          plVar8 = (longlong *)(lVar5 + 0x2b0);
          local_a8 = (undefined1 *)0x0;
          puVar1 = (uint *)(lVar5 + 0x2c0);
          local_a0 = 0;
          uVar2 = *(uint *)(lVar5 + 0x2d8);
          local_538 = 0;
          uStack_534 = 1;
          uStack_524 = 0;
          iStack_520 = 0;
          if (uVar2 != 0) {
            puVar15 = *(uint **)(lVar5 + 0x2d0);
            if (*(uint **)(lVar5 + 0x2d0) == (uint *)0x0) {
              puVar15 = puVar1;
            }
            uVar3 = *puVar15;
            local_538 = 0;
            iStack_520 = 0;
            while (uVar3 == 0) {
              lVar12 = (longlong)local_538;
              iStack_520 = iStack_520 + 0x20;
              iVar9 = local_538 + 1;
              bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_538;
              local_538 = iVar9;
              if (bVar4) goto LAB_141d76384;
              uVar3 = puVar15[lVar12 + 1];
            }
            uStack_534 = uVar3 - 1 & uVar3 ^ uVar3;
            iVar9 = 0x1f;
            if (uStack_534 != 0) {
              for (; uStack_534 >> iVar9 == 0; iVar9 = iVar9 + -1) {
              }
            }
            if (uStack_534 == 0) {
              iVar9 = 0x20;
            }
            else {
              iVar9 = 0x1f - iVar9;
            }
            uStack_524 = (iStack_520 - iVar9) + 0x1f;
            if ((int)uVar2 < (int)uStack_524) {
LAB_141d76384:
              uStack_524 = uVar2;
            }
          }
          uVar3 = *(uint *)(lVar5 + 0x2d8);
          uStack_440 = CONCAT44(uStack_524,0xffffffff);
          local_488 = CONCAT44(uStack_51c,iStack_520);
          uStack_450 = CONCAT44(uStack_534,local_538);
          local_528 = -1 << ((byte)uVar3 & 0x1f);
          uVar14 = uVar3 & 0xffffffe0;
          iStack_4a0 = local_538;
          uStack_49c = uStack_534;
          uStack_490 = 0xffffffff;
          uStack_48c = uStack_524;
          puStack_530 = puVar1;
          uStack_524 = uVar3;
          local_458 = plVar8;
          puStack_448 = puVar1;
          uStack_438 = local_488;
          local_4a8 = plVar8;
          local_498 = puVar1;
          if (uVar3 != uVar2) {
            puVar15 = *(uint **)(lVar5 + 0x2d0);
            if (*(uint **)(lVar5 + 0x2d0) == (uint *)0x0) {
              puVar15 = puVar1;
            }
            uVar11 = puVar15[(int)uVar3 >> 5] & local_528;
            iVar9 = (int)uVar3 >> 5;
            while (uVar11 == 0) {
              uVar14 = uVar14 + 0x20;
              if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
              goto LAB_141d7645b;
              uVar11 = puVar15[(longlong)iVar9 + 1];
              local_528 = 0xffffffff;
              iVar9 = iVar9 + 1;
            }
            uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
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
            uStack_524 = (uVar14 - iVar9) + 0x1f;
            uVar3 = uStack_524;
            if ((int)uVar2 < (int)uStack_524) {
LAB_141d7645b:
              uStack_524 = uVar2;
              uVar3 = uVar2;
            }
          }
          while( true ) {
            if ((uStack_48c == uVar3) && (local_498 == puVar1)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if ((bVar4) && (local_4a8 == plVar8)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) break;
            lVar5 = *(longlong *)(*local_4a8 + (longlong)(int)uStack_48c * 0x10);
            if (lVar5 != 0) {
              lVar12 = FUN_1429f11d0();
              uVar13 = local_a0;
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                lVar12 = (longlong)(int)local_a0;
                iVar9 = (int)local_a0 + 1;
                local_a0 = CONCAT44(local_a0._4_4_,iVar9);
                if (local_a0._4_4_ < iVar9) {
                  TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
                  ::ResizeGrow(local_168,uVar13 & 0xffffffff);
                }
                puVar10 = local_168;
                if (local_a8 != (undefined1 *)0x0) {
                  puVar10 = local_a8;
                }
                *(longlong *)(puVar10 + lVar12 * 8) = lVar5;
              }
            }
            uStack_490 = uStack_490 & ~uStack_49c;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_4a0);
          }
          iVar9 = 0;
          if (0 < (int)local_a0) {
            lVar12 = local_508 + 0xfb8;
            lVar5 = 0;
            do {
              puVar10 = local_168;
              if (local_a8 != (undefined1 *)0x0) {
                puVar10 = local_a8;
              }
              FUN_141d08e90(lVar12,local_4ec,*(longlong *)(puVar10 + lVar5) + 0x354,0);
              lVar5 = lVar5 + 8;
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)local_a0);
          }
          uVar7 = local_508;
          param_2 = local_510;
          if (local_a8 != (undefined1 *)0x0) {
            FMemory::Free(local_a8);
            param_2 = local_510;
          }
        }
        iVar16 = iVar16 + 1;
      }
      if (*(char *)(param_2 + 0x2d0) == '\x02') {
        puVar17 = (undefined8 *)(uVar7 + 0x1008);
        if (*(char *)(uVar7 + 0x1058) != '\0') {
          *(undefined1 *)(uVar7 + 0x1058) = 0;
          *(undefined4 *)(uVar7 + 0x1050) = 0;
          if (*(longlong *)(uVar7 + 0x1048) != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (puVar17);
        }
        iVar16 = 0;
        *puVar17 = 0;
        *(undefined8 *)(uVar7 + 0x1010) = 0;
        *(undefined8 *)(uVar7 + 0x1028) = 0;
        *(undefined8 *)(uVar7 + 0x1030) = 0;
        *(undefined4 *)(uVar7 + 0x1038) = 0xffffffff;
        *(undefined4 *)(uVar7 + 0x103c) = 0;
        *(undefined8 *)(uVar7 + 0x1048) = 0;
        *(undefined4 *)(uVar7 + 0x1050) = 0;
        *(undefined1 *)(uVar7 + 0x1058) = 1;
        while( true ) {
          if ((iVar16 < 0) || (*(int *)(param_2 + 0x300) <= iVar16)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) break;
          lVar5 = FWeakObjectPtr::Get(*(longlong *)(param_2 + 0x2f8) + (longlong)iVar16 * 8);
          if (lVar5 != 0) {
            FUN_141d08e90(puVar17,local_4e8,lVar5 + 0x354,0);
          }
          iVar16 = iVar16 + 1;
        }
        iVar16 = 0;
        while( true ) {
          if ((iVar16 < 0) || (*(int *)(param_2 + 0x310) <= iVar16)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          uVar7 = local_508;
          local_518 = iVar16;
          if (!bVar4) break;
          lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x308) + (longlong)iVar16 * 8);
          if (lVar5 != 0) {
            plVar8 = (longlong *)(lVar5 + 0x2b0);
            local_a8 = (undefined1 *)0x0;
            puVar1 = (uint *)(lVar5 + 0x2c0);
            local_a0 = 0;
            uVar2 = *(uint *)(lVar5 + 0x2d8);
            local_538 = 0;
            uStack_534 = 1;
            uStack_524 = 0;
            iStack_520 = 0;
            if (uVar2 != 0) {
              puVar15 = *(uint **)(lVar5 + 0x2d0);
              if (*(uint **)(lVar5 + 0x2d0) == (uint *)0x0) {
                puVar15 = puVar1;
              }
              uVar3 = *puVar15;
              while (uVar3 == 0) {
                lVar12 = (longlong)local_538;
                iStack_520 = iStack_520 + 0x20;
                iVar16 = local_538 + 1;
                bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_538;
                local_538 = iVar16;
                if (bVar4) goto LAB_141d767b4;
                uVar3 = puVar15[lVar12 + 1];
              }
              uStack_534 = uVar3 - 1 & uVar3 ^ uVar3;
              iVar16 = 0x1f;
              if (uStack_534 != 0) {
                for (; uStack_534 >> iVar16 == 0; iVar16 = iVar16 + -1) {
                }
              }
              if (uStack_534 == 0) {
                iVar16 = 0x20;
              }
              else {
                iVar16 = 0x1f - iVar16;
              }
              uStack_524 = (iStack_520 - iVar16) + 0x1f;
              if ((int)uVar2 < (int)uStack_524) {
LAB_141d767b4:
                uStack_524 = uVar2;
              }
            }
            uVar3 = *(uint *)(lVar5 + 0x2d8);
            uStack_440 = CONCAT44(uStack_524,0xffffffff);
            local_460 = CONCAT44(uStack_51c,iStack_520);
            uStack_450 = CONCAT44(uStack_534,local_538);
            local_528 = -1 << ((byte)uVar3 & 0x1f);
            uVar14 = uVar3 & 0xffffffe0;
            iStack_478 = local_538;
            uStack_474 = uStack_534;
            uStack_468 = 0xffffffff;
            uStack_464 = uStack_524;
            puStack_530 = puVar1;
            uStack_524 = uVar3;
            local_458 = plVar8;
            puStack_448 = puVar1;
            uStack_438 = local_460;
            local_480 = plVar8;
            local_470 = puVar1;
            if (uVar3 != uVar2) {
              puVar15 = *(uint **)(lVar5 + 0x2d0);
              if (*(uint **)(lVar5 + 0x2d0) == (uint *)0x0) {
                puVar15 = puVar1;
              }
              uVar11 = puVar15[(int)uVar3 >> 5] & local_528;
              iVar16 = (int)uVar3 >> 5;
              while (uVar11 == 0) {
                uVar14 = uVar14 + 0x20;
                if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar16)
                goto LAB_141d7688b;
                uVar11 = puVar15[(longlong)iVar16 + 1];
                local_528 = 0xffffffff;
                iVar16 = iVar16 + 1;
              }
              uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
              iVar16 = 0x1f;
              if (uVar11 != 0) {
                for (; uVar11 >> iVar16 == 0; iVar16 = iVar16 + -1) {
                }
              }
              if (uVar11 == 0) {
                iVar16 = 0x20;
              }
              else {
                iVar16 = 0x1f - iVar16;
              }
              uStack_524 = (uVar14 - iVar16) + 0x1f;
              uVar3 = uStack_524;
              if ((int)uVar2 < (int)uStack_524) {
LAB_141d7688b:
                uStack_524 = uVar2;
                uVar3 = uVar2;
              }
            }
            while( true ) {
              if ((uStack_464 == uVar3) && (local_470 == puVar1)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((bVar4) && (local_480 == plVar8)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (!bVar4) break;
              lVar5 = *(longlong *)(*local_480 + (longlong)(int)uStack_464 * 0x10);
              if (lVar5 != 0) {
                lVar12 = FUN_1429f11d0();
                uVar13 = local_a0;
                if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  lVar12 = (longlong)(int)local_a0;
                  iVar16 = (int)local_a0 + 1;
                  local_a0 = CONCAT44(local_a0._4_4_,iVar16);
                  if (local_a0._4_4_ < iVar16) {
                    TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
                    ::ResizeGrow(local_168,uVar13 & 0xffffffff);
                  }
                  puVar10 = local_168;
                  if (local_a8 != (undefined1 *)0x0) {
                    puVar10 = local_a8;
                  }
                  *(longlong *)(puVar10 + lVar12 * 8) = lVar5;
                }
              }
              uStack_468 = uStack_468 & ~uStack_474;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_478);
            }
            iVar16 = 0;
            if (0 < (int)local_a0) {
              lVar5 = 0;
              do {
                puVar10 = local_168;
                if (local_a8 != (undefined1 *)0x0) {
                  puVar10 = local_a8;
                }
                FUN_141d08e90(puVar17,local_4e4,*(longlong *)(puVar10 + lVar5) + 0x354,0);
                lVar5 = lVar5 + 8;
                iVar16 = iVar16 + 1;
              } while (iVar16 < (int)local_a0);
            }
            iVar16 = local_518;
            param_2 = local_510;
            if (local_a8 != (undefined1 *)0x0) {
              FMemory::Free(local_a8);
              param_2 = local_510;
            }
          }
          iVar16 = iVar16 + 1;
        }
      }
      else if (((0 < *(int *)(param_2 + 0x300)) || (0 < *(int *)(param_2 + 0x310))) &&
              (DAT_146a9e634 == '\0')) {
        DAT_146a9e634 = '\x01';
      }
      param_1 = local_4e0;
      iVar16 = (int)local_4e0[1];
      *(int *)(local_4e0 + 1) = iVar16 + 1;
      if (*(int *)((longlong)local_4e0 + 0xc) < iVar16 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_4e0,iVar16);
      }
      *(ulonglong *)(*param_1 + (longlong)iVar16 * 8) = uVar7;
      local_4b8 = *local_4d8;
      local_4b0 = *(undefined4 *)(local_4d8 + 1);
      FUN_14275edd0(uVar7,&local_4b8);
      FUN_142753e20(uVar7,local_4d0,param_9,1);
      FUN_14274b020(uVar7,&local_428);
      if (local_1e0 != '\0') {
        local_1e0 = '\0';
        local_1e8 = 0;
        if (local_1f0 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (local_230);
      }
      local_238 = 0;
      if (local_240 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_280);
      local_4f8 = local_4f8 + 1;
      local_514 = local_514 + 1;
    } while (local_514 < local_500);
  }
  return;
}



// FUNCTION 141d76b70 FUN_141d76b70 body=171 status=ok
// SIG undefined FUN_141d76b70(void)

undefined8 FUN_141d76b70(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if ((((param_2 != (longlong *)0x0) &&
         (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) && (param_1 < 0x1c)) &&
       ((0x8dfc0ebU >> (param_1 & 0x1f) & 1) != 0)) {
      cVar1 = (**(code **)(*param_2 + 200))(param_2);
      if (((cVar1 == '\0') && (cVar1 = FUN_141b196e0(param_2,0), cVar1 != '\0')) &&
         ((cVar1 = FUN_14259cb20(param_2), cVar1 == '\0' &&
          (cVar1 = (**(code **)(*param_2 + 0x28))(param_2), cVar1 == '\0')))) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141d76c20 FUN_141d76c20 body=95 status=ok
// SIG undefined FUN_141d76c20(void)

undefined8 FUN_141d76c20(uint param_1,longlong *param_2)

{
  char cVar1;
  
  if ((0x1b < param_1) || ((0x8dfc0ebU >> (param_1 & 0x1f) & 1) == 0)) {
    return 0;
  }
  cVar1 = (**(code **)(*param_2 + 200))(param_2);
  if ((cVar1 == '\0') &&
     (((cVar1 = FUN_141b196e0(param_2,0), cVar1 != '\0' &&
       (cVar1 = FUN_14259cb20(param_2), cVar1 == '\0')) &&
      (cVar1 = (**(code **)(*param_2 + 0x28))(param_2), cVar1 == '\0')))) {
    return 0;
  }
  return 1;
}



// FUNCTION 141d76c80 FUN_141d76c80 body=210 status=ok
// SIG undefined FUN_141d76c80(void)

undefined1 FUN_141d76c80(longlong param_1)

{
  if (((((((*(int *)(param_1 + 0x2300) == 0) && (*(int *)(param_1 + 0x2310) == 0)) &&
         (*(int *)(param_1 + 0x2350) == 0)) &&
        ((*(int *)(param_1 + 0x2428) == 0 && (*(int *)(param_1 + 0x2340) == 0)))) &&
       (((*(int *)(param_1 + 0x2320) < 1 &&
         ((*(int *)(param_1 + 0x2258) == 0 && (*(int *)(param_1 + 0x2268) == 0)))) &&
        (*(int *)(param_1 + 0x1e50) == 0)))) &&
      ((((*(int *)(param_1 + 0x1e60) == 0 && (*(int *)(param_1 + 0x1ea0) == 0)) &&
        (*(int *)(param_1 + 0x1f78) == 0)) &&
       (((*(int *)(param_1 + 0x1e90) == 0 && (*(int *)(param_1 + 0x1e70) < 1)) &&
        ((*(int *)(param_1 + 0x2058) == 0 &&
         ((*(int *)(param_1 + 0x2068) == 0 && (*(int *)(param_1 + 0x20a8) == 0)))))))))) &&
     ((*(int *)(param_1 + 0x2180) == 0 &&
      ((*(int *)(param_1 + 0x2098) == 0 && (*(int *)(param_1 + 0x2078) < 1)))))) {
    return 0;
  }
  return 1;
}



// FUNCTION 141d76d60 FUN_141d76d60 body=33 status=ok
// SIG undefined FUN_141d76d60(void)

ulonglong FUN_141d76d60(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (1 < DAT_1464c2fe0) {
    uVar1 = (ulonglong)DAT_146ab62f0;
    if (DAT_1464c2fe0 == 3) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141d76d90 FUN_141d76d90 body=2514 status=ok
// SIG undefined FUN_141d76d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d76d90(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  size_t _Size;
  longlong *plVar15;
  ulonglong uVar16;
  undefined1 auStack_938 [32];
  wchar_t *local_918;
  undefined4 local_910;
  undefined8 *local_908;
  undefined4 local_900;
  undefined4 local_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  longlong local_8e0;
  undefined4 local_8d8;
  undefined4 local_8d0;
  ulonglong local_8c8;
  longlong *local_8c0;
  longlong local_8b8;
  longlong *local_8b0;
  longlong *local_8a8 [2];
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined2 uStack_870;
  undefined2 uStack_86e;
  undefined4 uStack_86c;
  undefined4 uStack_868;
  undefined4 uStack_864;
  undefined1 local_860;
  wchar_t *local_858;
  undefined2 local_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined4 local_800;
  ulonglong local_7fc;
  undefined8 local_7f4;
  undefined4 local_7ec;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined4 local_7a8;
  undefined8 local_7a4;
  undefined8 local_79c;
  undefined4 local_794;
  undefined4 local_448 [256];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_938;
  uVar16 = 0;
  local_8c8 = local_8c8 & 0xffffffff00000000;
  if (*(longlong *)(param_3 + 0x18) != 0) {
    local_908._0_1_ = 1;
    local_910._0_1_ = 1;
    local_918 = L"HZBBoundsCenter";
    local_8a8[0] = (longlong *)0x0;
    local_8b0 = (longlong *)0x0;
    local_898 = (undefined *)_DAT_146ab6928;
    uStack_890 = uRam0000000146ab6930;
    local_888 = CONCAT44(0x100,DAT_146ab6938);
    uStack_880 = 0x100;
    local_878 = 0x1000000000001;
    uStack_870 = 1;
    uStack_86c = 1;
    uStack_868 = 0x108;
    uStack_864 = 0;
    local_860 = 0;
    local_858 = L"UnknownTexture2D";
    local_850 = 1;
    local_8b8 = param_3;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_898,local_8a8);
    local_908._0_1_ = 1;
    local_910._0_1_ = 1;
    local_918 = L"HZBBoundsExtent";
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_898,&local_8b0);
    local_908 = (undefined8 *)CONCAT71(local_908._1_7_,1);
    local_910 = CONCAT31(local_910._1_3_,1);
    local_898 = (undefined *)_DAT_146ab6928;
    uStack_890 = uRam0000000146ab6930;
    local_918 = L"HZBResultsGPU";
    local_8c0 = (longlong *)0x0;
    local_888 = CONCAT44(0x100,DAT_146ab6938);
    uStack_880 = 0x100;
    local_878 = 0x1000000000001;
    uStack_870 = 1;
    uStack_86c = 2;
    uStack_868 = 0;
    uStack_864 = 1;
    local_860 = 0;
    local_858 = L"UnknownTexture2D";
    local_850 = 1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_898,&local_8c0);
    uVar1 = *(uint *)(param_1 + 0x38);
    if (uVar1 != 0) {
      do {
        uVar6 = 0;
        iVar13 = (int)uVar16;
        uVar3 = uVar1 - iVar13;
        if (0x3f < uVar1 - iVar13) {
          uVar3 = 0x40;
        }
        if (3 < uVar3) {
          lVar8 = *(longlong *)(param_1 + 0x30);
          uVar5 = (uVar3 - 4 >> 2) + 1;
          uVar12 = (ulonglong)uVar5;
          uVar6 = (ulonglong)(uVar5 * 4);
          uVar14 = uVar16;
          lVar9 = 0;
          do {
            lVar11 = (longlong)(int)uVar14;
            uVar14 = (ulonglong)((int)uVar14 + 4);
            *(undefined4 *)((longlong)&local_848 + lVar9) = *(undefined4 *)(lVar8 + lVar11 * 0x18);
            *(undefined4 *)((longlong)&local_848 + lVar9 + 4) =
                 *(undefined4 *)(lVar8 + 4 + lVar11 * 0x18);
            *(undefined4 *)((longlong)&uStack_840 + lVar9) =
                 *(undefined4 *)(lVar8 + 8 + lVar11 * 0x18);
            *(undefined4 *)((longlong)&uStack_840 + lVar9 + 4) = 0;
            *(undefined4 *)((longlong)local_448 + lVar9) =
                 *(undefined4 *)(lVar8 + 0xc + lVar11 * 0x18);
            *(undefined4 *)((longlong)local_448 + lVar9 + 4) =
                 *(undefined4 *)(lVar8 + 0x10 + lVar11 * 0x18);
            *(undefined4 *)((longlong)local_448 + lVar9 + 8) =
                 *(undefined4 *)(lVar8 + 0x14 + lVar11 * 0x18);
            *(undefined4 *)((longlong)local_448 + lVar9 + 0xc) = 0x3f800000;
            *(undefined4 *)((longlong)&local_838 + lVar9) =
                 *(undefined4 *)(lVar8 + 0x18 + lVar11 * 0x18);
            *(undefined4 *)((longlong)&local_838 + lVar9 + 4) =
                 *(undefined4 *)(lVar8 + 0x1c + lVar11 * 0x18);
            *(undefined4 *)((longlong)&uStack_830 + lVar9) =
                 *(undefined4 *)(lVar8 + 0x20 + lVar11 * 0x18);
            *(undefined4 *)((longlong)&uStack_830 + lVar9 + 4) = 0;
            *(undefined4 *)((longlong)local_448 + lVar9 + 0x10) =
                 *(undefined4 *)(lVar8 + 0x24 + lVar11 * 0x18);
            *(undefined4 *)((longlong)local_448 + lVar9 + 0x14) =
                 *(undefined4 *)(lVar8 + 0x28 + lVar11 * 0x18);
            *(undefined4 *)((longlong)local_448 + lVar9 + 0x18) =
                 *(undefined4 *)(lVar8 + 0x2c + lVar11 * 0x18);
            *(undefined4 *)((longlong)local_448 + lVar9 + 0x1c) = 0x3f800000;
            *(undefined4 *)((longlong)&local_828 + lVar9) =
                 *(undefined4 *)(lVar8 + 0x30 + lVar11 * 0x18);
            *(undefined4 *)((longlong)&local_828 + lVar9 + 4) =
                 *(undefined4 *)(lVar8 + 0x34 + lVar11 * 0x18);
            *(undefined4 *)((longlong)&uStack_820 + lVar9) =
                 *(undefined4 *)(lVar8 + 0x38 + lVar11 * 0x18);
            *(undefined4 *)((longlong)&uStack_820 + lVar9 + 4) = 0;
            *(undefined4 *)((longlong)local_448 + lVar9 + 0x20) =
                 *(undefined4 *)(lVar8 + 0x3c + lVar11 * 0x18);
            *(undefined4 *)((longlong)local_448 + lVar9 + 0x24) =
                 *(undefined4 *)(lVar8 + 0x40 + lVar11 * 0x18);
            *(undefined4 *)((longlong)local_448 + lVar9 + 0x28) =
                 *(undefined4 *)(lVar8 + 0x44 + lVar11 * 0x18);
            *(undefined4 *)((longlong)local_448 + lVar9 + 0x2c) = 0x3f800000;
            *(undefined4 *)((longlong)&local_818 + lVar9) =
                 *(undefined4 *)(lVar8 + 0x48 + lVar11 * 0x18);
            *(undefined4 *)((longlong)&local_818 + lVar9 + 4) =
                 *(undefined4 *)(lVar8 + 0x4c + lVar11 * 0x18);
            *(undefined4 *)((longlong)&uStack_810 + lVar9) =
                 *(undefined4 *)(lVar8 + 0x50 + lVar11 * 0x18);
            *(undefined4 *)((longlong)&uStack_810 + lVar9 + 4) = 0;
            *(undefined4 *)((longlong)local_448 + lVar9 + 0x30) =
                 *(undefined4 *)(lVar8 + 0x54 + lVar11 * 0x18);
            *(undefined4 *)((longlong)local_448 + lVar9 + 0x34) =
                 *(undefined4 *)(lVar8 + 0x58 + lVar11 * 0x18);
            *(undefined4 *)((longlong)local_448 + lVar9 + 0x38) =
                 *(undefined4 *)(lVar8 + 0x5c + lVar11 * 0x18);
            *(undefined4 *)((longlong)local_448 + lVar9 + 0x3c) = 0x3f800000;
            uVar12 = uVar12 - 1;
            lVar9 = lVar9 + 0x40;
          } while (uVar12 != 0);
        }
        if ((uint)uVar6 < uVar3) {
          lVar8 = *(longlong *)(param_1 + 0x30);
          lVar9 = uVar6 << 4;
          do {
            iVar4 = (int)uVar6;
            uVar5 = iVar4 + 1;
            uVar6 = (ulonglong)uVar5;
            lVar11 = (longlong)(iVar4 + iVar13);
            *(undefined4 *)((longlong)&local_848 + lVar9) = *(undefined4 *)(lVar8 + lVar11 * 0x18);
            *(undefined4 *)((longlong)&local_848 + lVar9 + 4) =
                 *(undefined4 *)(lVar8 + 4 + lVar11 * 0x18);
            *(undefined4 *)((longlong)&uStack_840 + lVar9) =
                 *(undefined4 *)(lVar8 + 8 + lVar11 * 0x18);
            *(undefined4 *)((longlong)&uStack_840 + lVar9 + 4) = 0;
            *(undefined4 *)((longlong)local_448 + lVar9) =
                 *(undefined4 *)(lVar8 + 0xc + lVar11 * 0x18);
            *(undefined4 *)((longlong)local_448 + lVar9 + 4) =
                 *(undefined4 *)(lVar8 + 0x10 + lVar11 * 0x18);
            *(undefined4 *)((longlong)local_448 + lVar9 + 8) =
                 *(undefined4 *)(lVar8 + 0x14 + lVar11 * 0x18);
            *(undefined4 *)((longlong)local_448 + lVar9 + 0xc) = 0x3f800000;
            lVar9 = lVar9 + 0x10;
          } while (uVar5 < uVar3);
        }
        if (uVar3 < 0x40) {
          uVar6 = (ulonglong)(uVar3 * 4);
          _Size = uVar6 * -4 + 0x400;
          _guard_xfg_dispatch_icall_nop((void *)((longlong)&local_848 + uVar6 * 4),0,_Size);
          _guard_xfg_dispatch_icall_nop(local_448 + uVar6,0,_Size);
        }
        local_908 = &local_848;
        uVar3 = (uint)(uVar16 >> 6);
        local_918 = (wchar_t *)&local_898;
        uStack_890 = 0;
        local_898 = (undefined *)CONCAT44((uVar3 >> 5) << 3,(uVar3 & 0x1f) << 3);
        local_888 = 0x800000008;
        local_910 = 0x80;
        (**(code **)(*DAT_146ab6358 + 0x590))(DAT_146ab6358,&DAT_146ab6e78,local_8a8[0][2],0);
        local_908 = (undefined8 *)local_448;
        local_918 = (wchar_t *)&local_898;
        local_910 = 0x80;
        (**(code **)(*DAT_146ab6358 + 0x590))();
        uVar16 = (ulonglong)(iVar13 + 0x40U);
      } while (iVar13 + 0x40U < uVar1);
      uVar16 = local_8c8 & 0xffffffff;
      param_3 = local_8b8;
    }
    lVar8 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_141d71950(param_1 + 0x30,0);
    }
    FUN_141a19150(param_2,local_8c0[1],0,0);
    local_808 = 0;
    local_848 = 0;
    uStack_840 = 0;
    local_838 = 0;
    uStack_830 = 0;
    local_828 = 0;
    uStack_820 = 0;
    local_818 = 0;
    uStack_810 = 0;
    local_7e8 = 0;
    uStack_7e0 = 0;
    local_800 = 0;
    local_7fc = 0x26;
    local_7f4 = 0;
    local_7ec = 0;
    local_7d8 = 0;
    local_7d0 = 0;
    local_7c8 = 0;
    local_7c0 = 0;
    local_7b8 = 0;
    local_7b0 = 0;
    local_7a8 = 0;
    local_7a4 = 0;
    local_79c = 0;
    local_794 = 0;
    FUN_14049afe0(param_2,&local_848);
    local_818 = FUN_1404a0ce0();
    uStack_810 = FUN_140985530();
    local_808 = FUN_1409853f0();
    lVar9 = *(longlong *)(param_3 + 0x3090);
    uStack_890 = uStack_890 & 0xffffffff00000000;
    local_898 = &DAT_146b09c50;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar9 + 0x38,&local_8c8,&local_898);
    if ((int)local_8c8 != -1) {
      lVar8 = (longlong)(int)local_8c8 * 0x20 + *(longlong *)(lVar9 + 0x38);
    }
    plVar15 = (longlong *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      plVar15 = (longlong *)0x0;
    }
    local_898 = &DAT_146a9cf40;
    uStack_890 = uStack_890 & 0xffffffff00000000;
    lVar8 = *plVar15;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar9 + 0x38,&local_8c8,&local_898);
    if ((int)local_8c8 == -1) {
      lVar9 = 0;
    }
    else {
      lVar9 = (longlong)(int)local_8c8 * 0x20 + *(longlong *)(lVar9 + 0x38);
    }
    plVar15 = (longlong *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      plVar15 = (longlong *)0x0;
    }
    lVar9 = *plVar15;
    local_848 = DAT_1464c2720;
    if (lVar8 == 0) {
      local_8c8 = 0;
      uVar16 = 1;
      uStack_840 = 0;
    }
    else {
      lVar11 = *(longlong *)(lVar8 + 0x48);
      if (*(char *)(lVar11 + 0x28) == '\0') {
        FUN_1419f3850(lVar11);
      }
      uStack_840 = *(undefined8 *)(lVar11 + 0x38);
    }
    if ((uVar16 & 1) != 0) {
      uVar16 = (ulonglong)((uint)uVar16 & 0xfffffffe);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_8c8);
    }
    if (lVar9 == 0) {
      uVar16 = (ulonglong)((uint)uVar16 | 2);
      local_8c8 = 0;
      local_828 = 0;
    }
    else {
      lVar11 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar11 + 0x28) == '\0') {
        FUN_1419f3850(lVar11);
      }
      local_828 = *(undefined8 *)(lVar11 + 0x40);
    }
    if ((uVar16 & 2) != 0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_8c8);
    }
    local_7fc = local_7fc & 0xffffffff00000000;
    FUN_141ed6ac0(param_2,&local_848,2,1);
    local_918 = (wchar_t *)local_8b0[2];
    FUN_141d72df0(lVar9,param_2,local_8b8,local_8a8[0][2]);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_8d0 = 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    local_8d8 = 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59420;
    puVar10[2] = 0;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = 0x100;
    *(undefined4 *)(puVar10 + 4) = 0x100;
    *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
    local_8b8 = 0x10000000100;
    local_8e8 = 0x10000000100;
    local_8c8 = 0x10000000100;
    local_8f0 = 0x10000000100;
    local_8f8 = 0x43800000;
    local_900 = 0x43800000;
    local_908 = (undefined8 *)((ulonglong)local_908 & 0xffffffff00000000);
    local_910 = 0;
    local_918 = (wchar_t *)CONCAT44(local_918._4_4_,0x43800000);
    local_8e0 = lVar8;
    DrawRectangle(param_2);
    AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
    local_898 = (undefined *)0xffffffff00000000;
    uStack_890 = 0xffffffffffffffff;
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_878 = 0xffffffff;
    uStack_870 = 0;
    uStack_86e = 0;
    uStack_86c = 0;
    local_888 = 0xffffffffffffffff;
    uStack_880 = 0xffffffffffffffff;
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10);
    plVar15 = (longlong *)local_8c0[1];
    puVar7 = puVar10 + 10;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar10 + 2) = (undefined4)local_898;
    *(undefined4 *)((longlong)puVar10 + 0x14) = local_898._4_4_;
    *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_890;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_890._4_4_;
    *(undefined4 *)(puVar10 + 4) = (undefined4)local_888;
    *(undefined4 *)((longlong)puVar10 + 0x24) = local_888._4_4_;
    *(undefined4 *)(puVar10 + 5) = (undefined4)uStack_880;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_880._4_4_;
    *(undefined4 *)(puVar10 + 6) = (undefined4)local_878;
    *(undefined4 *)((longlong)puVar10 + 0x34) = local_878._4_4_;
    *(uint *)(puVar10 + 7) = CONCAT22(uStack_86e,uStack_870);
    *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_86c;
    puVar10[8] = plVar15;
    puVar10[9] = uVar2;
    lVar8 = (**(code **)(*plVar15 + 8))(plVar15);
    if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar10[8] + 0x18))(), lVar8 == 0)) {
      (**(code **)(*(longlong *)puVar10[8] + 0x20))();
    }
    lVar8 = (**(code **)(*(longlong *)puVar10[9] + 8))();
    if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar10[9] + 0x18))(), lVar8 == 0)) {
      (**(code **)(*(longlong *)puVar10[9] + 0x20))();
    }
    if (local_8c0 != (longlong *)0x0) {
      (**(code **)(*local_8c0 + 0x30))();
    }
    if (local_8b0 != (longlong *)0x0) {
      (**(code **)(*local_8b0 + 0x30))();
    }
    if (local_8a8[0] != (longlong *)0x0) {
      (**(code **)(*local_8a8[0] + 0x30))();
    }
  }
  return;
}



// FUNCTION 141d77770 FUN_141d77770 body=2289 status=ok
// SIG undefined FUN_141d77770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_141d77770(longlong *param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
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
  bool bVar22;
  longlong lVar23;
  float *pfVar24;
  float *pfVar25;
  char cVar26;
  int iVar27;
  undefined8 *puVar28;
  longlong *plVar29;
  longlong lVar30;
  longlong *plVar31;
  float *pfVar32;
  ulonglong uVar33;
  uint uVar34;
  uint *puVar35;
  int iVar36;
  uint uVar37;
  ulonglong uVar38;
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
  undefined8 local_res18;
  longlong local_res20;
  byte local_218 [4];
  int local_214;
  undefined8 local_210;
  float local_208;
  longlong *local_1f8;
  undefined8 local_1f0;
  uint local_1e8;
  uint local_1e4;
  uint *local_1e0;
  uint local_1d8;
  undefined8 local_1d4;
  int local_1c8;
  float *local_1c0;
  float *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  float local_198;
  float local_194;
  float local_190;
  undefined4 local_18c;
  int local_188;
  code *local_178;
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined **local_128;
  float *local_120;
  undefined4 local_118;
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
  
  fVar56 = *(float *)(param_3 + 0x510);
  fVar11 = *(float *)(param_3 + 0x514);
  fVar12 = *(float *)(param_3 + 0x518);
  fVar2 = *(float *)(param_3 + 0x51c);
  fVar53 = *(float *)(param_3 + 0x3e0);
  fVar54 = *(float *)(param_3 + 0x3e4);
  fVar55 = *(float *)(param_3 + 1000);
  fVar39 = *(float *)(param_3 + 0x3ec);
  fVar40 = *(float *)(param_3 + 0x3d0);
  fVar3 = *(float *)(param_3 + 0x3d4);
  fVar6 = *(float *)(param_3 + 0x3d8);
  fVar13 = *(float *)(param_3 + 0x3dc);
  fVar14 = *(float *)(param_3 + 0x3f0);
  fVar15 = *(float *)(param_3 + 0x3f4);
  fVar16 = *(float *)(param_3 + 0x3f8);
  fVar17 = *(float *)(param_3 + 0x3fc);
  uVar33 = 0;
  fVar18 = *(float *)(param_3 + 0x400);
  fVar19 = *(float *)(param_3 + 0x404);
  fVar20 = *(float *)(param_3 + 0x408);
  fVar21 = *(float *)(param_3 + 0x40c);
  local_1c8 = 0;
  local_214 = 0;
  fVar41 = fVar56 * fVar40 + fVar11 * fVar53 + fVar12 * fVar14 + fVar2 * fVar18;
  fVar42 = fVar56 * fVar3 + fVar11 * fVar54 + fVar12 * fVar15 + fVar2 * fVar19;
  fVar43 = fVar56 * fVar6 + fVar11 * fVar55 + fVar12 * fVar16 + fVar2 * fVar20;
  fVar44 = fVar56 * fVar13 + fVar11 * fVar39 + fVar12 * fVar17 + fVar2 * fVar21;
  fVar56 = *(float *)(param_3 + 0x520);
  fVar11 = *(float *)(param_3 + 0x524);
  fVar12 = *(float *)(param_3 + 0x528);
  fVar2 = *(float *)(param_3 + 0x52c);
  fVar45 = fVar56 * fVar40 + fVar11 * fVar53 + fVar12 * fVar14 + fVar2 * fVar18;
  fVar46 = fVar56 * fVar3 + fVar11 * fVar54 + fVar12 * fVar15 + fVar2 * fVar19;
  fVar47 = fVar56 * fVar6 + fVar11 * fVar55 + fVar12 * fVar16 + fVar2 * fVar20;
  fVar48 = fVar56 * fVar13 + fVar11 * fVar39 + fVar12 * fVar17 + fVar2 * fVar21;
  fVar56 = *(float *)(param_3 + 0x530);
  fVar11 = *(float *)(param_3 + 0x534);
  fVar12 = *(float *)(param_3 + 0x538);
  fVar2 = *(float *)(param_3 + 0x53c);
  fVar49 = fVar56 * fVar40 + fVar11 * fVar53 + fVar12 * fVar14 + fVar2 * fVar18;
  fVar50 = fVar56 * fVar3 + fVar11 * fVar54 + fVar12 * fVar15 + fVar2 * fVar19;
  fVar51 = fVar56 * fVar6 + fVar11 * fVar55 + fVar12 * fVar16 + fVar2 * fVar20;
  fVar52 = fVar56 * fVar13 + fVar11 * fVar39 + fVar12 * fVar17 + fVar2 * fVar21;
  fVar56 = *(float *)(param_3 + 0x540);
  fVar11 = *(float *)(param_3 + 0x544);
  fVar12 = *(float *)(param_3 + 0x548);
  fVar2 = *(float *)(param_3 + 0x54c);
  local_210 = *(undefined8 *)(param_3 + 0x8dc);
  local_208 = *(float *)(param_3 + 0x8e4);
  fVar57 = DAT_1464c2f84 * DAT_1464c2f84;
  fVar53 = fVar56 * fVar40 + fVar11 * fVar53 + fVar12 * fVar14 + fVar2 * fVar18;
  fVar54 = fVar56 * fVar3 + fVar11 * fVar54 + fVar12 * fVar15 + fVar2 * fVar19;
  fVar55 = fVar56 * fVar6 + fVar11 * fVar55 + fVar12 * fVar16 + fVar2 * fVar20;
  fVar56 = fVar56 * fVar13 + fVar11 * fVar39 + fVar12 * fVar17 + fVar2 * fVar21;
  local_res18 = param_3;
  local_res20 = param_4;
  local_108 = fVar41;
  fStack_104 = fVar42;
  fStack_100 = fVar43;
  fStack_fc = fVar44;
  local_f8 = fVar45;
  fStack_f4 = fVar46;
  fStack_f0 = fVar47;
  fStack_ec = fVar48;
  local_e8 = fVar49;
  fStack_e4 = fVar50;
  fStack_e0 = fVar51;
  fStack_dc = fVar52;
  local_d8 = fVar53;
  fStack_d4 = fVar54;
  fStack_d0 = fVar55;
  fStack_cc = fVar56;
  local_1c0 = (float *)operator_new(0x80);
  if (local_1c0 == (float *)0x0) {
    local_1c0 = (float *)0x0;
  }
  else {
    local_1c0[0x1c] = 0.0;
    local_1c0[0x1d] = 0.0;
    local_1c0[0x1e] = 0.0;
    local_1c0[0x1f] = 0.0;
    local_1c0[0x10] = 0.0;
    local_1c0[0x11] = 0.0;
    local_1c0[0x12] = 0.0;
    local_1c0[0x13] = 0.0;
    local_1c0[0x14] = 0.0;
    local_1c0[0x15] = 0.0;
    local_1c0[0x16] = 0.0;
    local_1c0[0x17] = 0.0;
    local_1c0[0x18] = 0.0;
    local_1c0[0x19] = 0.0;
    local_1c0[0x1a] = 0.0;
    local_1c0[0x1b] = 0.0;
  }
  pfVar24 = local_1c0;
  *local_1c0 = fVar41;
  local_1c0[1] = fVar42;
  local_1c0[2] = fVar43;
  local_1c0[3] = fVar44;
  local_1b8 = local_1c0 + 0x14;
  local_1c0[4] = fVar45;
  local_1c0[5] = fVar46;
  local_1c0[6] = fVar47;
  local_1c0[7] = fVar48;
  local_1c0[8] = fVar49;
  local_1c0[9] = fVar50;
  local_1c0[10] = fVar51;
  local_1c0[0xb] = fVar52;
  local_1c0[0xc] = fVar53;
  local_1c0[0xd] = fVar54;
  local_1c0[0xe] = fVar55;
  local_1c0[0xf] = fVar56;
  if ((int)local_1c0[0x17] < 0x400) {
    TArray<float,FDefaultAllocator>::ResizeTo(local_1b8,0x400);
  }
  pfVar1 = pfVar24 + 0x10;
  if ((int)pfVar24[0x13] < 0x800) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (pfVar1,0x800);
  }
  if ((int)pfVar24[0x1b] < DAT_1464c2f88) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo();
  }
  local_128 = &PTR_FUN_144e51460;
  local_118 = 0;
  pfVar24[0x1c] = 0.0;
  local_1f8 = (longlong *)0x0;
  local_1f0 = 0;
  uVar38 = uVar33;
  local_120 = pfVar24;
  if (0 < DAT_1464c2f88) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
    uVar38 = local_1f0 & 0xffffffff;
  }
  pfVar25 = local_1b8;
  fVar56 = local_208;
  iVar36 = (int)uVar38;
  local_1e0 = (uint *)(param_3 + 0x1ac0);
  local_1e8 = 0;
  iVar4 = *(int *)(param_3 + 0x1ad8);
  uVar34 = 0;
  local_1d4 = 0;
  local_1e4 = 1;
  iVar27 = 0;
  if (iVar4 != 0) {
    puVar35 = *(uint **)(param_3 + 0x1ad0);
    if (*(uint **)(param_3 + 0x1ad0) == (uint *)0x0) {
      puVar35 = local_1e0;
    }
    uVar5 = *puVar35;
    while (uVar5 == 0) {
      iVar27 = (int)uVar33;
      uVar34 = uVar34 + 0x20;
      local_1e8 = iVar27 + 1;
      uVar33 = (ulonglong)local_1e8;
      local_1d4 = (ulonglong)uVar34 << 0x20;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar27) {
        local_1d4 = CONCAT44(uVar34,iVar4);
        iVar27 = iVar4;
        goto LAB_141d77ae9;
      }
      uVar5 = puVar35[(longlong)iVar27 + 1];
    }
    local_1e4 = -uVar5 & uVar5;
    local_188 = 0x1f;
    if (local_1e4 != 0) {
      for (; local_1e4 >> local_188 == 0; local_188 = local_188 + -1) {
      }
    }
    if (local_1e4 == 0) {
      iVar27 = 0x20;
    }
    else {
      iVar27 = 0x1f - local_188;
    }
    iVar27 = (uVar34 - iVar27) + 0x1f;
    if (iVar4 < iVar27) {
      iVar27 = iVar4;
    }
    uVar33 = (ulonglong)local_1d4 >> 0x20;
    local_1d4 = CONCAT44((int)uVar33,iVar27);
  }
LAB_141d77ae9:
  local_1d8 = 0xffffffff;
  pfVar32 = pfVar24;
  if (iVar27 < iVar4) {
    fVar12 = local_210._4_4_;
    fVar11 = (float)local_210;
    do {
      uVar5 = local_1d8;
      uVar34 = local_1e4;
      fVar54 = 0.0;
      lVar30 = (longlong)iVar27;
      local_1b8 = *(float **)(*(longlong *)(param_2 + 0xfe0) + lVar30 * 8);
      pfVar32 = (float *)(lVar30 * 0x1c + *(longlong *)(param_2 + 0x1040));
      fVar53 = local_1b8[4];
      fVar2 = pfVar32[6];
      local_218[0] = *(byte *)(lVar30 + *(longlong *)(param_2 + 0x1030));
      if (fVar2 <= 524288.0) {
        if ((*(uint *)(*(longlong *)(local_1b8 + 2) + 0x1c) >> 0x1b & 1) != 0) {
          fVar39 = *pfVar32 - fVar11;
          fVar40 = pfVar32[1] - fVar12;
          fVar55 = pfVar32[2] - fVar56;
          fVar55 = (fVar40 * fVar40 + fVar39 * fVar39 + fVar55 * fVar55) - fVar2 * fVar2;
          if (fVar55 <= 10000.0) {
            fVar55 = 10000.0;
          }
          if (fVar55 < fVar57) {
            local_18c = 0x3f800000;
            local_198 = *pfVar32;
            local_194 = pfVar32[1];
            local_190 = pfVar32[2];
            fVar54 = (float)FUN_1427491c0(&local_198,fVar2,local_res18);
          }
          if (_DAT_1464c2f80 < fVar54) {
            uVar37 = (int)uVar38 + 1;
            local_1f0 = CONCAT44(local_1f0._4_4_,uVar37);
            if (local_1f0._4_4_ < (int)uVar37) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1f8,uVar38);
              uVar37 = (uint)local_1f0;
            }
            uVar38 = (ulonglong)uVar37;
            local_1f8[(longlong)(int)(uVar37 - 1) * 2] = (longlong)local_1b8;
            *(float *)(local_1f8 + (longlong)(int)(uVar37 - 1) * 2 + 1) = 10000.0 / fVar55 + fVar54;
          }
        }
        if ((local_218[0] & 1) != 0) {
          fVar2 = pfVar32[3];
          fVar54 = *pfVar32;
          fVar55 = pfVar32[4];
          fVar39 = pfVar32[1];
          fVar40 = pfVar32[5];
          fVar3 = pfVar32[2];
          fVar6 = pfVar24[0x12];
          pfVar24[0x12] = (float)((int)fVar6 + 1);
          local_1b0 = (float *)CONCAT44(fVar55 + fVar39,fVar2 + fVar54);
          local_210 = CONCAT44(fVar39 - fVar55,fVar54 - fVar2);
          local_208 = fVar3 - fVar40;
          uStack_1a8 = CONCAT44(uStack_1a8._4_4_,fVar40 + fVar3);
          if ((int)pfVar24[0x13] < (int)fVar6 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(pfVar1,fVar6);
          }
          lVar30 = *(longlong *)pfVar1;
          *(undefined8 *)(lVar30 + (longlong)(int)fVar6 * 0xc) = local_210;
          *(float *)(lVar30 + 8 + (longlong)(int)fVar6 * 0xc) = local_208;
          fVar2 = pfVar24[0x12];
          pfVar24[0x12] = (float)((int)fVar2 + 1);
          if ((int)pfVar24[0x13] < (int)fVar2 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(pfVar1,fVar2);
          }
          lVar30 = *(longlong *)pfVar1;
          *(float **)(lVar30 + (longlong)(int)fVar2 * 0xc) = local_1b0;
          *(undefined4 *)(lVar30 + 8 + (longlong)(int)fVar2 * 0xc) = (undefined4)uStack_1a8;
          fVar2 = pfVar25[2];
          pfVar25[2] = (float)((int)fVar2 + 1);
          if ((int)pfVar25[3] < (int)fVar2 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(pfVar25,fVar2);
          }
          local_214 = local_214 + 1;
          *(float *)(*(longlong *)pfVar25 + (longlong)(int)fVar2 * 4) = fVar53;
        }
      }
      iVar36 = (int)uVar38;
      local_1d8 = uVar5 & ~uVar34;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e8);
      pfVar32 = local_1c0;
      iVar27 = (int)local_1d4;
    } while ((int)local_1d4 < (int)local_1e0[6]);
  }
  plVar31 = local_1f8;
  local_218[0] = 0;
  AlgoImpl::
  IntroSortInternal<FPotentialOccluderPrimitive,FIdentityFunctor,TDereferenceWrapper<FPotentialOccluderPrimitive,<lambda_562c74a10f06bf0c86853c86eed953bd>_>_>
            (local_1f8,(longlong)iVar36,local_res18 & 0xff,local_218);
  uVar33 = local_res18;
  iVar27 = local_1c8;
  for (plVar29 = plVar31; plVar29 != plVar31 + (longlong)iVar36 * 2; plVar29 = plVar29 + 2) {
    plVar8 = *(longlong **)(*plVar29 + 8);
    uVar7 = *(undefined4 *)(*plVar29 + 0x10);
    (**(code **)(*plVar8 + 0x78))(plVar8,&local_res18,uVar33);
    if ((((local_res18 & 0x200000000) == 0) && ((local_res18 & 0x800000000) == 0)) &&
       ((local_res18 & 0x1000000000) == 0)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    if ((((local_res18._4_4_ >> 10 & 1) != 0) && ((local_res18 & 0x100000000) != 0)) &&
       ((!bVar22 &&
        (local_118 = uVar7, cVar26 = (**(code **)(*plVar8 + 0x58))(plVar8,&local_128),
        cVar26 != '\0')))) {
      iVar27 = iVar27 + 1;
    }
    pfVar32 = local_1c0;
    if (DAT_1464c2f88 <= iVar27) break;
  }
  if (plVar31 != (longlong *)0x0) {
    FMemory::Free(plVar31);
  }
  lVar30 = local_res20;
  if (*(int *)(local_res20 + 0x3008) - *(int *)(local_res20 + 0x3034) < local_214) {
    FUN_1405effc0();
  }
  if (DAT_1464c2fd0 < 0) {
    iVar27 = 0;
  }
  else {
    iVar27 = 5;
    if (DAT_1464c2fd0 < 5) {
      iVar27 = DAT_1464c2fd0;
    }
  }
  uStack_1a8 = lVar30;
  local_148 = (longlong *)0x0;
  uVar7 = *(undefined4 *)(&DAT_144e50ca8 + (longlong)iVar27 * 4);
  local_138 = 0;
  local_1b0 = pfVar32;
  puVar28 = (undefined8 *)FUN_140438ef0(0x18,local_168);
  if (puVar28 != (undefined8 *)0x0) {
    *puVar28 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar28 + 1) = (undefined4)local_1b0;
    *(undefined4 *)((longlong)puVar28 + 0xc) = local_1b0._4_4_;
    *(undefined4 *)(puVar28 + 2) = (undefined4)uStack_1a8;
    *(undefined4 *)((longlong)puVar28 + 0x14) = uStack_1a8._4_4_;
  }
  local_178 = UE4Function_Private::
              TFunctionRefCaller<<lambda_f593f13edfd2e236f4ceaf9c5645ab05>,void___cdecl(void)>::Call
  ;
  plVar29 = (longlong *)FUN_140596960(&local_1b0,0,0xff);
  lVar30 = *plVar29;
  *(undefined8 *)(lVar30 + 0x40) = 0;
  *(undefined4 *)(lVar30 + 0x50) = 0;
  if (local_148 == (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop((longlong *)(lVar30 + 0x20),local_168,0x20);
  }
  if (*(longlong *)(lVar30 + 0x40) != 0) {
    FMemory::Free();
  }
  *(longlong **)(lVar30 + 0x40) = local_148;
  local_148 = (longlong *)0x0;
  *(int *)(lVar30 + 0x50) = local_138;
  local_138 = 0;
  if (*(int *)(lVar30 + 0x50) != 0) {
    plVar31 = *(longlong **)(lVar30 + 0x40);
    if (*(longlong **)(lVar30 + 0x40) == (longlong *)0x0) {
      plVar31 = (longlong *)(lVar30 + 0x20);
    }
    if (plVar31 != (longlong *)0x0) {
      (**(code **)(*plVar31 + 8))();
      goto LAB_141d77fc3;
    }
  }
  local_178 = AK::MemoryMgr::StartProfileThreadUsage;
LAB_141d77fc3:
  *(code **)(lVar30 + 0x10) = local_178;
  local_178 = AK::MemoryMgr::StartProfileThreadUsage;
  *(undefined4 *)(lVar30 + 0x60) = uVar7;
  lVar30 = *plVar29;
  lVar23 = plVar29[2];
  lVar9 = plVar29[1];
  lVar10 = *(longlong *)(lVar30 + 0x78);
  *param_1 = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 0x48) = *(int *)(lVar10 + 0x48) + 1;
    UNLOCK();
  }
  FUN_1405ab110(lVar30,lVar9,(int)lVar23,1);
  if (local_138 != 0) {
    plVar29 = local_168;
    if (local_148 != (longlong *)0x0) {
      plVar29 = local_148;
    }
    if (plVar29 != (longlong *)0x0) {
      (**(code **)(*plVar29 + 0x10))(plVar29,0);
    }
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141d78070 SwapEyeAdaptationRTs body=42 status=ok
// SIG undefined SwapEyeAdaptationRTs(void)

void FViewInfo::SwapEyeAdaptationRTs(void)

{
  longlong lVar1;
  
  lVar1 = FUN_141d69780();
  if (lVar1 != 0) {
    FUN_141c5ab20(lVar1 + 0x470,*(undefined1 *)(lVar1 + 0x46c));
    return;
  }
  return;
}



// FUNCTION 141d780a0 FUN_141d780a0 body=646 status=ok
// SIG undefined FUN_141d780a0(void)

void FUN_141d780a0(longlong param_1,float param_2,float param_3,float param_4,uint param_5)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  int local_b0;
  uint uStack_ac;
  int iStack_a8;
  uint uStack_a4;
  undefined8 local_a0;
  uint uStack_98;
  int iStack_94;
  int local_90;
  undefined4 uStack_8c;
  longlong *local_88;
  longlong *local_80;
  int iStack_78;
  uint uStack_74;
  uint *puStack_70;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  
  if (param_5 ==
      ((int)param_5 / 6 + ((int)param_5 >> 0x1f) +
      (int)(((longlong)(int)param_5 / 6 + ((longlong)(int)param_5 >> 0x3f) & 0xffffffffU) >> 0x1f))
      * 6) {
    iVar8 = FUN_141d69970();
    plVar1 = (longlong *)(param_1 + 0x1808);
    local_b0 = 0;
    uStack_ac = 1;
    iVar3 = *(int *)(param_1 + 0x1830);
    puStack_70 = (uint *)(param_1 + 0x1818);
    local_a0._4_4_ = 0;
    uStack_98 = 0;
    if (iVar3 != 0) {
      puVar14 = *(uint **)(param_1 + 0x1828);
      if (*(uint **)(param_1 + 0x1828) == (uint *)0x0) {
        puVar14 = puStack_70;
      }
      uVar4 = *puVar14;
      uStack_98 = 0;
      local_b0 = 0;
      while (uVar4 == 0) {
        lVar11 = (longlong)local_b0;
        uStack_98 = uStack_98 + 0x20;
        iVar9 = local_b0 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b0;
        local_b0 = iVar9;
        if (bVar5) goto LAB_141d781bf;
        uVar4 = puVar14[lVar11 + 1];
      }
      uStack_ac = -uVar4 & uVar4;
      iVar9 = 0x1f;
      if (uStack_ac != 0) {
        for (; uStack_ac >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_ac == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      local_a0._4_4_ = (uStack_98 - iVar9) + 0x1f;
      if (iVar3 < local_a0._4_4_) {
LAB_141d781bf:
        local_a0._4_4_ = iVar3;
      }
    }
    uStack_68 = 0xffffffff;
    iStack_64 = local_a0._4_4_;
    iStack_60 = uStack_98;
    uStack_5c = iStack_94;
    iStack_78 = local_b0;
    uStack_74 = uStack_ac;
    iStack_a8 = local_b0;
    uStack_a4 = uStack_ac;
    local_90 = uStack_98;
    uStack_8c = iStack_94;
    uStack_98 = 0xffffffff;
    iStack_94 = local_a0._4_4_;
    bVar5 = local_a0._4_4_ < iVar3;
    local_88 = plVar1;
    local_80 = plVar1;
    local_a0 = puStack_70;
    if (bVar5) {
      do {
        plVar7 = local_88;
        iVar9 = iStack_94;
        lVar11 = (longlong)iStack_94;
        lVar13 = *plVar1 + lVar11 * 0x58;
        iVar3 = iVar8;
        if (*(float *)(lVar13 + 0x3c) <= param_4 && param_4 != *(float *)(lVar13 + 0x3c)) {
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            if (iVar3 - 1U <= param_5) {
              iVar10 = (param_5 - iVar3) + 1;
              uVar6 = (longlong)iVar10 % (longlong)iVar8;
              lVar12 = (uVar6 & 0xffffffff) + 1;
              if ((*(longlong *)(lVar13 + lVar12 * 8) != 0) &&
                 (*(int *)(lVar13 + 0x20 + (uVar6 & 0xffffffff) * 4) != iVar10)) {
                FRenderQueryPool::ReleaseQuery(param_1 + 0x158,lVar13 + lVar12 * 8);
              }
            }
          }
        }
        fVar2 = *(float *)(*plVar1 + 0x3c + lVar11 * 0x58);
        if ((fVar2 < param_3) || (param_2 < fVar2)) {
          TSet<FPrimitiveOcclusionHistory,FPrimitiveOcclusionHistoryKeyFuncs,FDefaultSetAllocator>::
          Remove(plVar7,iVar9);
        }
        uStack_98 = uStack_98 & ~uStack_a4;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a8);
      } while (iStack_94 < (int)local_a0[6]);
    }
  }
  return;
}



// FUNCTION 141d78330 FUN_141d78330 body=241 status=ok
// SIG undefined FUN_141d78330(void)

void FUN_141d78330(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = (longlong)*(int *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0xa0) != 0) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0x98) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar2) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x98) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar1 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar1 = plVar1 + 1;
        } while (lVar3 < lVar2);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar2);
    *(int *)(param_1 + 0xa0) = iVar6;
  }
  return;
}



// FUNCTION 141d78430 FUN_141d78430 body=240 status=ok
// SIG undefined FUN_141d78430(void)

void FUN_141d78430(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  
  if (param_2 != (undefined8 *)0x0) {
    *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  }
  plVar2 = (longlong *)(param_1 + 0xd0);
  plVar3 = (longlong *)*plVar2;
  plVar8 = plVar3;
  do {
    if (plVar8 == plVar3 + *(int *)(param_1 + 0xd8)) {
LAB_141d784f7:
      if (param_2 != (undefined8 *)0x0) {
        piVar1 = (int *)(param_2 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*param_2)(param_2,1);
        }
      }
      return;
    }
    if ((undefined8 *)*plVar8 == param_2) {
      iVar7 = (int)((longlong)plVar8 - (longlong)plVar3 >> 3);
      if (iVar7 != -1) {
        puVar4 = (undefined8 *)plVar3[iVar7];
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        iVar6 = *(int *)(param_1 + 0xd8);
        iVar5 = (iVar6 - iVar7) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 8 + *plVar2),
                     (void *)(*plVar2 + (longlong)(iVar6 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar6 = *(int *)(param_1 + 0xd8);
        }
        *(int *)(param_1 + 0xd8) = iVar6 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar2);
      }
      goto LAB_141d784f7;
    }
    plVar8 = plVar8 + 1;
  } while( true );
}



// FUNCTION 141d78520 FUN_141d78520 body=67 status=ok
// SIG undefined FUN_141d78520(void)

void FUN_141d78520(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x50) != -1) {
    (**(code **)(*DAT_146ab6358 + 0x6c0))
              (DAT_146ab6358,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10));
    *(undefined8 *)(param_1 + 0x48) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 141d78570 FUN_141d78570 body=3517 status=ok
// SIG undefined FUN_141d78570(void)

void FUN_141d78570(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  *(undefined1 *)(param_1 + 0x35) = 0;
  iVar1 = *param_1;
  iVar2 = *(int *)(DAT_146a9d530 + 4);
  *param_1 = 0;
  iVar6 = 0x100000;
  if (iVar2 == 1) {
    iVar5 = 0x100000;
    *param_1 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      *param_1 = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[1];
  iVar2 = *(int *)(DAT_146a9d548 + 4);
  param_1[1] = 0;
  if (iVar2 == 1) {
    param_1[1] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[1] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[2];
  iVar2 = *(int *)(DAT_146a9d560 + 4);
  param_1[2] = 0;
  if (iVar2 == 1) {
    param_1[2] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[2] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[3];
  iVar2 = *(int *)(DAT_146a9d578 + 4);
  param_1[3] = 0;
  if (iVar2 == 1) {
    param_1[3] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[3] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[4];
  iVar2 = *(int *)(DAT_146a9d590 + 4);
  param_1[4] = 0;
  if (iVar2 == 1) {
    param_1[4] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[4] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[5];
  iVar2 = *(int *)(DAT_146a9d5a8 + 4);
  param_1[5] = 0;
  if (iVar2 == 1) {
    param_1[5] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[5] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[6];
  iVar2 = *(int *)(DAT_146a9d5c0 + 4);
  param_1[6] = 0;
  if (iVar2 == 1) {
    param_1[6] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[6] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[7];
  iVar2 = *(int *)(DAT_146a9d5d8 + 4);
  param_1[7] = 0;
  if (iVar2 == 1) {
    param_1[7] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[7] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[8];
  iVar2 = *(int *)(DAT_146a9d5f0 + 4);
  param_1[8] = 0;
  if (iVar2 == 1) {
    param_1[8] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[8] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[9];
  iVar2 = *(int *)(DAT_146a9d608 + 4);
  param_1[9] = 0;
  if (iVar2 == 1) {
    param_1[9] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[9] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[10];
  iVar2 = *(int *)(DAT_146a9d620 + 4);
  param_1[10] = 0;
  if (iVar2 == 1) {
    param_1[10] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[10] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0xb];
  iVar2 = *(int *)(DAT_146a9d638 + 4);
  param_1[0xb] = 0;
  if (iVar2 == 1) {
    param_1[0xb] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0xb] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0xc];
  iVar2 = *(int *)(DAT_146a9d650 + 4);
  param_1[0xc] = 0;
  if (iVar2 == 1) {
    param_1[0xc] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0xc] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0xd];
  iVar2 = *(int *)(DAT_146a9d668 + 4);
  param_1[0xd] = 0;
  if (iVar2 == 1) {
    param_1[0xd] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0xd] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0xe];
  iVar2 = *(int *)(DAT_146a9d680 + 4);
  param_1[0xe] = 0;
  if (iVar2 == 1) {
    param_1[0xe] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0xe] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0xf];
  iVar2 = *(int *)(DAT_146a9d698 + 4);
  param_1[0xf] = 0;
  if (iVar2 == 1) {
    param_1[0xf] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0xf] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x10];
  iVar2 = *(int *)(DAT_146a9d6b0 + 4);
  param_1[0x10] = 0;
  if (iVar2 == 1) {
    param_1[0x10] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x10] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x11];
  iVar2 = *(int *)(DAT_146a9d6c8 + 4);
  param_1[0x11] = 0;
  if (iVar2 == 1) {
    param_1[0x11] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x11] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x12];
  iVar2 = *(int *)(DAT_146a9d6e0 + 4);
  param_1[0x12] = 0;
  if (iVar2 == 1) {
    param_1[0x12] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x12] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x13];
  iVar2 = *(int *)(DAT_146a9d6f8 + 4);
  param_1[0x13] = 0;
  if (iVar2 == 1) {
    param_1[0x13] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x13] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x14];
  iVar2 = *(int *)(DAT_146a9d710 + 4);
  param_1[0x14] = 0;
  if (iVar2 == 1) {
    param_1[0x14] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x14] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x15];
  iVar2 = *(int *)(DAT_146a9d728 + 4);
  param_1[0x15] = 0;
  if (iVar2 == 1) {
    param_1[0x15] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x15] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x16];
  iVar2 = *(int *)(DAT_146a9d740 + 4);
  param_1[0x16] = 0;
  if (iVar2 == 1) {
    param_1[0x16] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x16] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x17];
  iVar2 = *(int *)(DAT_146a9d758 + 4);
  param_1[0x17] = 0;
  if (iVar2 == 1) {
    param_1[0x17] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x17] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x19];
  iVar2 = *(int *)(DAT_146a9d770 + 4);
  param_1[0x19] = 0;
  if (iVar2 == 1) {
    param_1[0x19] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x19] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x18];
  iVar2 = *(int *)(DAT_146a9d788 + 4);
  param_1[0x18] = 0;
  if (iVar2 == 1) {
    param_1[0x18] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x18] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x1b];
  iVar2 = *(int *)(DAT_146a9d7a0 + 4);
  param_1[0x1b] = 0;
  if (iVar2 == 1) {
    param_1[0x1b] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x1b] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x1a];
  iVar2 = *(int *)(DAT_146a9d7b8 + 4);
  param_1[0x1a] = 0;
  if (iVar2 == 1) {
    param_1[0x1a] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x1a] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x1d];
  iVar2 = *(int *)(DAT_146a9d7d0 + 4);
  param_1[0x1d] = 0;
  if (iVar2 == 1) {
    param_1[0x1d] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x1d] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x1e];
  iVar2 = *(int *)(DAT_146a9d7e8 + 4);
  param_1[0x1e] = 0;
  if (iVar2 == 1) {
    param_1[0x1e] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x1e] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x1f];
  iVar2 = *(int *)(DAT_146a9d800 + 4);
  param_1[0x1f] = 0;
  if (iVar2 == 1) {
    param_1[0x1f] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x1f] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x20];
  iVar2 = *(int *)(DAT_146a9d818 + 4);
  param_1[0x20] = 0;
  if (iVar2 == 1) {
    param_1[0x20] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x20] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x21];
  iVar2 = *(int *)(DAT_146a9d830 + 4);
  param_1[0x21] = 0;
  if (iVar2 == 1) {
    param_1[0x21] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x21] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x22];
  iVar2 = *(int *)(DAT_146a9d848 + 4);
  param_1[0x22] = 0;
  if (iVar2 == 1) {
    param_1[0x22] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x22] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x23];
  iVar2 = *(int *)(DAT_146a9d860 + 4);
  param_1[0x23] = 0;
  if (iVar2 == 1) {
    param_1[0x23] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x23] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x24];
  iVar2 = *(int *)(DAT_146a9d878 + 4);
  param_1[0x24] = 0;
  if (iVar2 == 1) {
    param_1[0x24] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x24] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x25];
  iVar2 = *(int *)(DAT_146a9d890 + 4);
  param_1[0x25] = 0;
  if (iVar2 == 1) {
    param_1[0x25] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x25] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x26];
  iVar2 = *(int *)(DAT_146a9d8a8 + 4);
  param_1[0x26] = 0;
  if (iVar2 == 1) {
    param_1[0x26] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x26] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x27];
  iVar2 = *(int *)(DAT_146a9d8c0 + 4);
  param_1[0x27] = 0;
  if (iVar2 == 1) {
    param_1[0x27] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x27] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x28];
  iVar2 = *(int *)(DAT_146a9d8d8 + 4);
  param_1[0x28] = 0;
  if (iVar2 == 1) {
    param_1[0x28] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x28] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x29];
  iVar2 = *(int *)(DAT_146a9d8f0 + 4);
  param_1[0x29] = 0;
  if (iVar2 == 1) {
    param_1[0x29] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x29] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x2a];
  iVar2 = *(int *)(DAT_146a9d908 + 4);
  param_1[0x2a] = 0;
  if (iVar2 == 1) {
    param_1[0x2a] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x2a] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x2b];
  iVar2 = *(int *)(DAT_146a9d920 + 4);
  param_1[0x2b] = 0;
  if (iVar2 == 1) {
    param_1[0x2b] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x2b] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x2c];
  iVar2 = *(int *)(DAT_146a9d938 + 4);
  param_1[0x2c] = 0;
  if (iVar2 == 1) {
    param_1[0x2c] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x2c] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x2d];
  iVar2 = *(int *)(DAT_146a9d950 + 4);
  param_1[0x2d] = 0;
  if (iVar2 == 1) {
    param_1[0x2d] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x2d] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x2e];
  iVar2 = *(int *)(DAT_146a9d968 + 4);
  param_1[0x2e] = 0;
  if (iVar2 == 1) {
    param_1[0x2e] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x2e] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x2f];
  iVar2 = *(int *)(DAT_146a9d980 + 4);
  param_1[0x2f] = 0;
  if (iVar2 == 1) {
    param_1[0x2f] = 0x100000;
    iVar5 = 0x100000;
  }
  else {
    iVar5 = 0;
    if (iVar2 == 2) {
      param_1[0x2f] = 0x102000;
      iVar5 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar5;
  iVar1 = param_1[0x30];
  iVar2 = *(int *)(DAT_146a9d998 + 4);
  param_1[0x30] = 0;
  if (iVar2 == 1) {
    param_1[0x30] = 0x100000;
  }
  else {
    iVar6 = 0;
    if (iVar2 == 2) {
      param_1[0x30] = 0x102000;
      iVar6 = 0x102000;
    }
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | iVar1 != iVar6;
  uVar3 = param_1[0x31];
  uVar4 = -(uint)(*(int *)(DAT_146a9d9b0 + 4) != 0) & 0x1000;
  param_1[0x31] = uVar4;
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | uVar3 != uVar4;
  uVar3 = param_1[0x32];
  uVar4 = -(uint)(*(int *)(DAT_146a9d9c8 + 4) != 0) & 0x1000;
  param_1[0x32] = uVar4;
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | uVar3 != uVar4;
  uVar3 = param_1[0x33];
  uVar4 = -(uint)(*(int *)(DAT_146a9d9e0 + 4) != 0) & 0x1000;
  param_1[0x33] = uVar4;
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | uVar3 != uVar4;
  uVar3 = param_1[0x34];
  uVar4 = -(uint)(*(int *)(DAT_146a9d9f8 + 4) != 0) & 0x1000;
  param_1[0x34] = uVar4;
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | uVar3 != uVar4;
  return;
}



// FUNCTION 141d79330 FUN_141d79330 body=89 status=ok
// SIG undefined FUN_141d79330(void)

void FUN_141d79330(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x1b8);
  lVar2 = (**(code **)(*plVar1 + 0x210))();
  lVar3 = (**(code **)(*plVar1 + 0x210))(plVar1);
  FUN_1425505a0(param_2,*(undefined4 *)(lVar3 + 0x5ed0),*(undefined4 *)(lVar2 + 0x5ed4));
  return;
}



// FUNCTION 141d79390 FUN_141d79390 body=200 status=ok
// SIG undefined FUN_141d79390(void)

void FUN_141d79390(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((DAT_1464c3328 != 0) &&
     (lVar1 = *(longlong *)(DAT_1464c3328 + 0x10), *(longlong *)(param_1 + 0xea0) = lVar1,
     lVar1 == 0)) {
    *(undefined8 *)(param_1 + 0xea0) = *(undefined8 *)(DAT_146ac3e00 + 0x30);
  }
  uVar2 = FUN_141ac0bb0();
  *(undefined8 *)(param_1 + 0xea8) = uVar2;
  if (((DAT_1464c3330 != 0) &&
      (lVar1 = *(longlong *)(DAT_1464c3330 + 0x10), *(longlong *)(param_1 + 0xeb0) = lVar1,
      lVar1 == 0)) &&
     (lVar1 = *(longlong *)(DAT_146ac3e30 + 0x30), *(longlong *)(param_1 + 0xeb0) = lVar1,
     lVar1 == 0)) {
    *(undefined8 *)(param_1 + 0xeb0) = *(undefined8 *)(DAT_146ac3e00 + 0x30);
  }
  uVar2 = FUN_141b33a40();
  *(undefined8 *)(param_1 + 0xeb8) = uVar2;
  if ((DAT_1464c3338 != 0) &&
     (lVar1 = *(longlong *)(DAT_1464c3338 + 0x10), *(longlong *)(param_1 + 0xec0) = lVar1,
     lVar1 == 0)) {
    *(undefined8 *)(param_1 + 0xec0) = *(undefined8 *)(DAT_146ac3e00 + 0x30);
  }
  return;
}



// FUNCTION 141d79460 FUN_141d79460 body=891 status=ok
// SIG undefined FUN_141d79460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_141d79460(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  uint local_b8;
  longlong local_b0;
  longlong *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint *puStack_98;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  char local_40;
  char cStack_3f;
  uint *local_38;
  
  local_38 = (uint *)(DAT_1468387a8 ^ (ulonglong)auStack_d8);
  if ((*(char *)(param_1 + 0x26b) == '\0') ||
     (puVar5 = (uint *)(DAT_1468387a8 ^ (ulonglong)auStack_d8), *(int *)(param_1 + 0x278) < 1)) {
    puVar7 = (undefined8 *)0x0;
    iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0xfe8);
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    iStack_5c = 0;
    uVar2 = (int)(iVar3 + 0x1f + (iVar3 + 0x1f >> 0x1f & 0x1fU)) >> 5;
    puVar8 = puVar7;
    if ((uVar2 & 0x7ffffff) != 0) {
      iStack_5c = uVar2 << 5;
      TBitArray<SceneRenderingBitArrayAllocator>::Realloc(&local_78);
      puVar8 = (undefined8 *)CONCAT44(local_68._4_4_,(undefined4)local_68);
    }
    if (iVar3 != 0) {
      puVar6 = &local_78;
      if (puVar8 != (undefined8 *)0x0) {
        puVar6 = puVar7;
      }
      uStack_60 = iVar3;
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)puVar6 | (ulonglong)puVar8),0,(longlong)(int)uVar2 << 2);
      puVar8 = (undefined8 *)CONCAT44(local_68._4_4_,(undefined4)local_68);
    }
    local_b8 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      local_b0 = 0;
      puVar6 = puVar7;
      do {
        lVar12 = *(longlong *)(param_1 + 0xc0) + local_b0;
        puVar9 = puVar7;
        puVar11 = puVar7;
        uVar2 = (uint)puVar6;
        if (0 < *(int *)(lVar12 + 0x1c88)) {
          do {
            puVar6 = &local_78;
            if (puVar8 != (undefined8 *)0x0) {
              puVar6 = puVar8;
            }
            lVar1 = *(longlong *)(*(longlong *)(lVar12 + 0x1c80) + (longlong)puVar9);
            iVar4 = *(int *)(lVar1 + 0xe8);
            iVar3 = iVar4;
            if (iVar4 < 0) {
              iVar3 = iVar4 + 0x1f;
            }
            puVar5 = (uint *)((longlong)puVar6 + (longlong)(iVar3 >> 5) * 4);
            uVar2 = 1 << ((byte)iVar4 & 0x1f);
            if ((*puVar5 & uVar2) == 0) {
              FUN_141d50e70(lVar1);
              *puVar5 = *puVar5 | uVar2;
              puVar8 = (undefined8 *)CONCAT44(local_68._4_4_,(undefined4)local_68);
            }
            else {
              *(undefined8 *)(*(longlong *)(lVar12 + 0x1c80) + (longlong)puVar9) = 0;
            }
            uVar10 = (int)puVar11 + 1;
            puVar9 = puVar9 + 1;
            puVar11 = (undefined8 *)(ulonglong)uVar10;
            uVar2 = local_b8;
          } while ((int)uVar10 < *(int *)(lVar12 + 0x1c88));
        }
        local_b8 = uVar2 + 1;
        puVar6 = (undefined8 *)(ulonglong)local_b8;
        local_b0 = local_b0 + 0x30d0;
      } while ((int)local_b8 < *(int *)(param_1 + 200));
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x290))();
    puVar5 = (uint *)((ulonglong)uVar2 * 0xcccccccd & 0xffffffff);
    if (uVar2 == (uVar2 / 10) * 10) {
      lVar12 = *(longlong *)(param_1 + 8);
      local_a8 = (longlong *)(lVar12 + 0x1590);
      iVar3 = *(int *)(lVar12 + 0x15b8);
      puStack_98 = (uint *)(lVar12 + 0x15a0);
      local_78._0_4_ = 0;
      local_78._4_4_ = 1;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      if (iVar3 != 0) {
        puVar5 = *(uint **)(lVar12 + 0x15b0);
        if (*(uint **)(lVar12 + 0x15b0) == (uint *)0x0) {
          puVar5 = puStack_98;
        }
        uVar10 = *puVar5;
        puVar8 = puVar7;
        while (uVar10 == 0) {
          iVar4 = (int)puVar8;
          uStack_60 = (int)puVar7 + 0x20;
          puVar7 = (undefined8 *)(ulonglong)uStack_60;
          local_78._0_4_ = iVar4 + 1;
          puVar8 = (undefined8 *)(ulonglong)(uint)local_78;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141d796eb;
          uVar10 = puVar5[(longlong)iVar4 + 1];
        }
        local_78._4_4_ = -uVar10 & uVar10;
        iVar4 = 0x1f;
        if (local_78._4_4_ != 0) {
          for (; local_78._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (local_78._4_4_ == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
        if (iVar3 < local_68._4_4_) {
LAB_141d796eb:
          local_68._4_4_ = iVar3;
        }
      }
      auStack_90._4_4_ = local_68._4_4_;
      auStack_90._0_4_ = 0xffffffff;
      auStack_90._8_4_ = uStack_60;
      auStack_90._12_4_ = iStack_5c;
      uStack_a0 = (uint)local_78;
      uStack_9c = local_78._4_4_;
      local_40 = '\0';
      cStack_3f = '\0';
      local_80._0_4_ = SUB84(local_a8,0);
      local_80._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
      uStack_60 = 0xffffffff;
      iStack_5c = local_68._4_4_;
      uStack_70 = (uint)local_78;
      uStack_6c = local_78._4_4_;
      local_58._8_4_ = (undefined4)local_80;
      local_58._0_8_ = auStack_90._8_8_;
      local_58._12_4_ = local_80._4_4_;
      puVar5 = puStack_98;
      if (local_68._4_4_ < *(int *)(lVar12 + 0x15b8)) {
        local_80 = local_a8;
        local_78 = local_a8;
        local_48 = local_a8;
        local_68 = puStack_98;
        do {
          if (*(uint *)((longlong)iStack_5c * 0x140 + 0x124 + *local_78) < uVar2 - 100) {
            FUN_141d6f140(local_58._8_8_);
            local_40 = '\x01';
          }
          uStack_60 = uStack_60 & ~uStack_6c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
        } while (iStack_5c < (int)local_68[6]);
        puVar5 = local_68;
        if ((local_40 != '\0') && (cStack_3f != '\0')) {
          puVar5 = (uint *)FUN_141d628c0(local_48,(int)local_48[1] -
                                                  *(int *)((longlong)local_48 + 0x34),1);
        }
      }
    }
  }
  return puVar5;
}



// FUNCTION 141d797e0 FUN_141d797e0 body=1405 status=ok
// SIG undefined FUN_141d797e0(void)

void FUN_141d797e0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  LPVOID lpTlsValue;
  LPVOID lpTlsValue_00;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  undefined1 local_res10 [8];
  longlong *local_res18;
  longlong *local_res20;
  undefined1 local_78 [16];
  undefined *local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  cVar3 = *(char *)((longlong)param_2 + 0x26b);
  plVar6 = (longlong *)0x0;
  lpTlsValue = (LPVOID)0x0;
  local_res18 = param_3;
  local_res20 = (longlong *)param_4;
  if (cVar3 != '\0') {
    if (DAT_146ab62e0 != '\0') {
      puStack_60 = local_res10;
      local_68 = &DAT_14060d670;
      local_res10[0] = 0;
      lpTlsValue = (LPVOID)FUN_1415d8310(&local_68,&DAT_146216a38);
      local_78[0] = 0;
      puStack_60 = local_78;
      local_68 = &LAB_141d623f0;
      lpTlsValue_00 = (LPVOID)FUN_1415d8310(&local_68,&DAT_1464c3108);
      TlsSetValue(DAT_146216a38,lpTlsValue_00);
      cVar3 = *(char *)((longlong)param_2 + 0x26b);
    }
    if (cVar3 != '\0') {
      plVar4 = (longlong *)0x0;
      if (param_2[0x55] == 0) {
        plVar4 = (longlong *)operator_new(0x28);
        if (plVar4 == (longlong *)0x0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          puStack_60 = local_78;
          local_68 = &DAT_14060d670;
          local_78[0] = 0;
          lVar5 = FUN_1415d8310(&local_68,&DAT_146216a38);
          *plVar4 = lVar5 + 0x18;
          plVar4[1] = *(longlong *)(lVar5 + 0x18);
          plVar4[2] = *(longlong *)(lVar5 + 0x28);
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar4[4] = *(longlong *)(lVar5 + 0x30);
          *(longlong **)(lVar5 + 0x30) = plVar4;
          *(int *)(*plVar4 + 0x20) = *(int *)(*plVar4 + 0x20) + 1;
        }
        param_2[0x55] = (longlong)plVar4;
        plVar4 = (longlong *)0x0;
      }
      goto LAB_141d7999b;
    }
  }
  plVar4 = (longlong *)operator_new(0x28);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    puStack_60 = local_78;
    local_68 = &DAT_14060d670;
    local_78[0] = 0;
    lVar5 = FUN_1415d8310(&local_68,&DAT_146216a38);
    *plVar4 = lVar5 + 0x18;
    plVar4[1] = *(longlong *)(lVar5 + 0x18);
    plVar4[2] = *(longlong *)(lVar5 + 0x28);
    *(undefined1 *)(plVar4 + 3) = 0;
    plVar4[4] = *(longlong *)(lVar5 + 0x30);
    *(longlong **)(lVar5 + 0x30) = plVar4;
    *(int *)(*plVar4 + 0x20) = *(int *)(*plVar4 + 0x20) + 1;
  }
LAB_141d7999b:
  if ((*(char *)((longlong)param_2 + 0x26b) != '\0') && (0 < (int)param_2[0x4f])) {
    plVar6 = (longlong *)operator_new(0x28);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      puStack_60 = local_78;
      local_68 = &DAT_14060d670;
      local_78[0] = 0;
      lVar5 = FUN_1415d8310(&local_68,&DAT_146216a38);
      *plVar6 = lVar5 + 0x18;
      plVar6[1] = *(longlong *)(lVar5 + 0x18);
      plVar6[2] = *(longlong *)(lVar5 + 0x28);
      *(undefined1 *)(plVar6 + 3) = 0;
      plVar6[4] = *(longlong *)(lVar5 + 0x30);
      *(longlong **)(lVar5 + 0x30) = plVar6;
      *(int *)(*plVar6 + 0x20) = *(int *)(*plVar6 + 0x20) + 1;
    }
  }
  FDeferredUpdateResource::UpdateResources(param_1);
  plVar8 = (longlong *)param_2[5];
  lVar5 = param_2[0x18];
  puVar7 = (undefined8 *)(**(code **)(*plVar8 + 8))(plVar8);
  FUN_141a19150(param_1,*puVar7,0,1);
  uVar1 = *(undefined8 *)(lVar5 + 0x368);
  uVar2 = *(undefined8 *)(lVar5 + 0x370);
  puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x20))(plVar8,&local_68);
  local_58 = uVar1;
  uStack_50 = uVar2;
  FUN_141a149c0(param_1,1,1,&DAT_1464aa6e0,0,0,0,0,*puVar7,&local_58);
  (**(code **)(*param_2 + 8))(param_2,param_1);
  local_68 = *(undefined **)((longlong)local_res20 + 0x30);
  puVar7 = (undefined8 *)(**(code **)(*local_res18 + 8))();
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  local_res20 = (longlong *)*puVar7;
  puVar7 = puVar9 + 10;
  if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x58);
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 10;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar7;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar9;
  *(undefined8 **)(param_1 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar9 + 2) = *param_6;
  *(undefined4 *)((longlong)puVar9 + 0x14) = param_6[1];
  *(undefined4 *)(puVar9 + 3) = param_6[2];
  *(undefined4 *)((longlong)puVar9 + 0x1c) = param_6[3];
  *(undefined4 *)(puVar9 + 4) = param_6[4];
  *(undefined4 *)((longlong)puVar9 + 0x24) = param_6[5];
  *(undefined4 *)(puVar9 + 5) = param_6[6];
  *(undefined4 *)((longlong)puVar9 + 0x2c) = param_6[7];
  *(undefined4 *)(puVar9 + 6) = param_6[8];
  *(undefined4 *)((longlong)puVar9 + 0x34) = param_6[9];
  *(undefined4 *)(puVar9 + 7) = param_6[10];
  *(undefined4 *)((longlong)puVar9 + 0x3c) = param_6[0xb];
  puVar9[9] = local_68;
  puVar9[8] = local_res20;
  lVar5 = (**(code **)(*local_res20 + 8))();
  if ((lVar5 == 0) && (lVar5 = (**(code **)(*(longlong *)puVar9[8] + 0x18))(), lVar5 == 0)) {
    (**(code **)(*(longlong *)puVar9[8] + 0x20))();
  }
  lVar5 = (**(code **)(*(longlong *)puVar9[9] + 8))();
  if ((lVar5 == 0) && (lVar5 = (**(code **)(*(longlong *)puVar9[9] + 0x18))(), lVar5 == 0)) {
    (**(code **)(*(longlong *)puVar9[9] + 0x20))();
  }
  if (*(char *)((longlong)param_2 + 0x26b) == '\0') {
    FUN_141d7b5e0(param_1,param_2,1);
    if (plVar4 != (longlong *)0x0) {
      if ((char)plVar4[3] == '\0') {
        *(undefined1 *)(plVar4 + 3) = 1;
        *(int *)(*plVar4 + 0x20) = *(int *)(*plVar4 + 0x20) + -1;
        plVar8 = (longlong *)*plVar4;
        if (plVar4[2] != plVar8[2]) {
          FMemStackBase::FreeChunks();
          plVar8 = (longlong *)*plVar4;
        }
        *plVar8 = plVar4[1];
        *(longlong *)(*plVar4 + 0x18) = plVar4[4];
        plVar4[1] = 0;
      }
      FMemory::operator_delete(plVar4,0x28);
    }
  }
  else {
    FUN_141d7b5e0(param_1,0,0);
    if (DAT_146ab62e0 != '\0') {
      TlsSetValue(DAT_146216a38,lpTlsValue);
      lVar5 = param_2[0x18];
      lVar13 = (longlong)(int)param_2[0x19] * 0x30d0 + lVar5;
      if (lVar5 != lVar13) {
        piVar11 = (int *)(lVar5 + 0x2800);
        do {
          if (lVar5 != 0) {
            lVar10 = *(longlong *)(piVar11 + -2);
            for (iVar12 = *piVar11; iVar12 != 0; iVar12 = iVar12 + -1) {
              FMemStackBase::FreeChunks(lVar10,0);
              lVar10 = lVar10 + 0x28;
            }
            *piVar11 = 0;
            if (piVar11[1] != 0) {
              FUN_141b15710(piVar11 + -2);
            }
            piVar11[-0xc] = 0;
            if (piVar11[-0xb] != 0) {
              FUN_140848da0(piVar11 + -0xe);
            }
          }
          lVar5 = lVar5 + 0x30d0;
          piVar11 = piVar11 + 0xc34;
        } while (lVar5 != lVar13);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    if ((char)plVar6[3] == '\0') {
      *(undefined1 *)(plVar6 + 3) = 1;
      *(int *)(*plVar6 + 0x20) = *(int *)(*plVar6 + 0x20) + -1;
      plVar4 = (longlong *)*plVar6;
      if (plVar6[2] != plVar4[2]) {
        FMemStackBase::FreeChunks();
        plVar4 = (longlong *)*plVar6;
      }
      *plVar4 = plVar6[1];
      *(longlong *)(*plVar6 + 0x18) = plVar6[4];
      plVar6[1] = 0;
    }
    FMemory::operator_delete(plVar6,0x28);
  }
  return;
}



// FUNCTION 141d79d60 FUN_141d79d60 body=3904 status=ok
// SIG undefined FUN_141d79d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d79d60(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  DWORD DVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  void **ppvVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_478 [32];
  float *local_458;
  longlong *local_450;
  longlong *local_448;
  undefined4 local_440;
  undefined1 local_438;
  longlong *local_430;
  undefined4 local_428;
  undefined8 local_420;
  undefined4 local_418;
  char local_408;
  undefined1 local_407;
  longlong local_400;
  undefined8 local_3f8;
  int local_3f0;
  undefined8 local_3ec;
  float local_3e4;
  longlong local_3e0;
  longlong local_3d8;
  void *local_3d0;
  undefined8 local_3c8;
  void *local_3c0;
  int local_3b8;
  undefined4 local_3b4;
  longlong local_3b0;
  undefined4 local_3a8;
  undefined8 local_398;
  float local_390;
  undefined1 local_388 [8];
  longlong local_380;
  undefined4 local_378;
  longlong *local_368;
  float fStack_360;
  float fStack_35c;
  void *local_358;
  int local_350;
  undefined4 local_34c;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined8 uStack_324;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  float local_308;
  undefined8 local_304;
  undefined8 local_2fc;
  undefined8 local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  void *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  longlong *local_2c8;
  undefined8 *local_2c0;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  longlong local_268 [2];
  longlong local_258;
  longlong lStack_250;
  longlong local_248;
  longlong lStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong local_228;
  longlong lStack_220;
  longlong local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  uint local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  uint uStack_1dc;
  float local_1d8;
  uint uStack_1d4;
  float fStack_1d0;
  uint uStack_1cc;
  float local_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
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
  undefined1 local_118 [24];
  undefined1 local_100 [24];
  undefined1 local_e8 [32];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_a8 [16];
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  local_3f0 = 0;
  if (param_2[0x7a] == 0) {
    return;
  }
  local_368 = param_1;
  FUN_14238f550(param_2);
  if (((char)param_2[99] == '\0') && (*(char *)((longlong)param_2 + 0x31a) != '\0')) {
    FUN_141d2e020(param_1,0);
  }
  fVar9 = DAT_1468b5d98;
  fVar8 = DAT_1468b5d94;
  fVar7 = DAT_1468b5d90;
  fVar33 = DAT_1464aa790;
  fVar37 = DAT_1464aa788._4_4_;
  fVar36 = (float)DAT_1464aa788;
  local_1a8 = (undefined4)param_2[0x44];
  uStack_1a4 = *(undefined4 *)((longlong)param_2 + 0x224);
  local_3b0 = param_2[0x44];
  local_3a8 = (undefined4)param_2[0x45];
  uStack_19c = *(undefined4 *)((longlong)param_2 + 0x22c);
  fVar23 = *(float *)(param_2 + 0x42);
  fVar25 = *(float *)((longlong)param_2 + 0x214);
  fVar26 = *(float *)(param_2 + 0x43);
  fVar31 = *(float *)((longlong)param_2 + 0x21c);
  local_a8._4_4_ = DAT_1464aa788._4_4_;
  local_a8._0_4_ = (float)DAT_1464aa788;
  local_a8._8_4_ = DAT_1464aa790;
  local_a8._12_4_ = 0;
  local_278 = fVar23;
  fStack_274 = fVar25;
  fStack_270 = fVar26;
  fStack_26c = fVar31;
  uStack_1a0 = local_3a8;
  local_c8 = fVar23;
  fStack_c4 = fVar25;
  fStack_c0 = fVar26;
  fStack_bc = fVar31;
  FQuat::Rotator(&local_278,&local_380);
  fVar28 = fVar25 + fVar25;
  fVar30 = fVar26 + fVar26;
  fVar32 = (fVar23 + fVar23) * fVar23;
  fVar35 = fVar31 * (fVar23 + fVar23);
  local_1b8 = fVar7;
  fStack_1b4 = fVar8;
  fStack_1b0 = fVar9;
  fStack_1ac = fRam0000000146a9904c;
  fStack_1e4 = (fVar31 * fVar30 + fVar23 * fVar28) * fVar36;
  fStack_1d0 = (fVar35 + fVar25 * fVar30) * fVar37;
  local_1c8 = (fVar31 * fVar28 + fVar23 * fVar30) * fVar33;
  local_1d8 = fVar37 * (fVar23 * fVar28 - fVar31 * fVar30);
  fStack_1c4 = fVar33 * (fVar25 * fVar30 - fVar35);
  fStack_1e0 = fVar36 * (fVar23 * fVar30 - fVar31 * fVar28);
  local_1e8 = (uint)((_DAT_146a99040 - (fVar30 * fVar26 + fVar28 * fVar25)) * fVar36) &
              _DAT_146a99050;
  uStack_1d4 = (uint)((fRam0000000146a99044 - (fVar30 * fVar26 + fVar32)) * fVar37) &
               uRam0000000146a99054;
  uStack_1c0 = (uint)((fRam0000000146a99048 - (fVar28 * fVar25 + fVar32)) * fVar33) &
               uRam0000000146a99058;
  uStack_1dc = (uint)((fRam0000000146a9904c - (fVar32 + fVar32)) * 0.0) & uRam0000000146a9905c;
  uStack_1cc = uStack_1dc;
  uStack_1bc = uStack_1dc;
  FMatrix::Inverse(&local_1e8,&local_2b8);
  local_198 = 0;
  uStack_194 = 0;
  uStack_190 = 0x3f800000;
  uStack_18c = 0;
  fVar23 = local_2b8 * 0.0;
  fVar25 = local_2b8 * 1.0;
  fVar26 = local_2b8 * 0.0;
  fVar31 = fStack_2b0 * 0.0;
  fVar36 = fStack_2b4 * 0.0;
  fVar37 = fStack_2b4 * 0.0;
  local_188 = 0x3f800000;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  local_178 = 0;
  uStack_174 = 0x3f800000;
  uStack_170 = 0;
  uStack_16c = 0;
  local_168 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0x3f800000;
  local_2b8 = fStack_2b4 * 1.0 + local_2b8 * 0.0 + fStack_2b0 * 0.0 + fStack_2ac * 0.0;
  fStack_2b4 = fStack_2b4 * 0.0 + fVar23 + fStack_2b0 * 1.0 + fStack_2ac * 0.0;
  fStack_2b0 = fVar36 + fVar25 + fStack_2b0 * 0.0 + fStack_2ac * 0.0;
  fStack_2ac = fVar37 + fVar26 + fVar31 + fStack_2ac * 1.0;
  fVar23 = local_2a8 * 0.0;
  fVar25 = local_2a8 * 1.0;
  fVar26 = local_2a8 * 0.0;
  fVar31 = fStack_2a0 * 0.0;
  fVar36 = fStack_2a4 * 0.0;
  fVar37 = fStack_2a4 * 0.0;
  local_2a8 = fStack_2a4 * 1.0 + local_2a8 * 0.0 + fStack_2a0 * 0.0 + fStack_29c * 0.0;
  fStack_2a4 = fStack_2a4 * 0.0 + fVar23 + fStack_2a0 * 1.0 + fStack_29c * 0.0;
  fStack_2a0 = fVar36 + fVar25 + fStack_2a0 * 0.0 + fStack_29c * 0.0;
  fStack_29c = fVar37 + fVar26 + fVar31 + fStack_29c * 1.0;
  fVar36 = fStack_294 * 0.0;
  fVar37 = fStack_294 * 0.0;
  fVar23 = local_298 * 0.0;
  fVar25 = local_298 * 1.0;
  fVar26 = local_298 * 0.0;
  fVar31 = fStack_290 * 0.0;
  local_298 = fStack_294 * 1.0 + local_298 * 0.0 + fStack_290 * 0.0 + fStack_28c * 0.0;
  fStack_294 = fStack_294 * 0.0 + fVar23 + fStack_290 * 1.0 + fStack_28c * 0.0;
  fStack_290 = fVar36 + fVar25 + fStack_290 * 0.0 + fStack_28c * 0.0;
  fStack_28c = fVar37 + fVar26 + fVar31 + fStack_28c * 1.0;
  fVar37 = fStack_284 * 0.0;
  fVar33 = fStack_284 * 0.0;
  fVar23 = *(float *)((longlong)param_2 + 0x3c4);
  fVar25 = local_288 * 0.0;
  fVar26 = local_288 * 1.0;
  fVar31 = local_288 * 0.0;
  fVar36 = fStack_280 * 0.0;
  local_288 = fStack_284 * 1.0 + local_288 * 0.0 + fStack_280 * 0.0 + fStack_27c * 0.0;
  fStack_284 = fStack_284 * 0.0 + fVar25 + fStack_280 * 1.0 + fStack_27c * 0.0;
  fStack_280 = fVar37 + fVar26 + fStack_280 * 0.0 + fStack_27c * 0.0;
  fStack_27c = fVar33 + fVar31 + fVar36 + fStack_27c * 1.0;
  local_158 = local_2b8;
  fStack_154 = fStack_2b4;
  fStack_150 = fStack_2b0;
  fStack_14c = fStack_2ac;
  local_148 = local_2a8;
  fStack_144 = fStack_2a4;
  fStack_140 = fStack_2a0;
  fStack_13c = fStack_29c;
  local_138 = local_298;
  fStack_134 = fStack_294;
  fStack_130 = fStack_290;
  fStack_12c = fStack_28c;
  local_128 = local_288;
  fStack_124 = fStack_284;
  fStack_120 = fStack_280;
  fStack_11c = fStack_27c;
  fVar25 = (float)(**(code **)(*(longlong *)param_2[0x7a] + 0x2b8))();
  fVar26 = (float)(**(code **)(*(longlong *)param_2[0x7a] + 0x2b0))();
  local_3f8 = CONCAT44((int)fVar25,(int)fVar26);
  uVar16 = local_3f8;
  if (*(char *)((longlong)param_2 + 0x9e4) == '\0') {
    local_458 = (float *)&local_258;
    BuildProjectionMatrix(local_3f8,(char)param_2[0x78],fVar23 * 0.008726646,(int)param_2[0x79]);
  }
  else {
    local_258 = param_2[0x13e];
    lStack_250 = param_2[0x13f];
    local_248 = param_2[0x140];
    lStack_240 = param_2[0x141];
    local_238 = (undefined4)param_2[0x142];
    uStack_234 = *(undefined4 *)((longlong)param_2 + 0xa14);
    uStack_230 = (undefined4)param_2[0x143];
    uStack_22c = *(undefined4 *)((longlong)param_2 + 0xa1c);
    local_228 = param_2[0x144];
    lStack_220 = param_2[0x145];
  }
  local_407 = (char)param_2[0x7b] != '\x02';
  cVar10 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar10 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar11 = GetCurrentThreadId(), DVar11 != DAT_1468c21c0)) {
    lVar12 = UTextureRenderTarget::GetRenderTargetResource(param_2[0x7a]);
  }
  else {
    lVar12 = FHdrImageWrapper::GetHeight(param_2[0x7a]);
  }
  lVar14 = DAT_146a98ed8;
  local_408 = *(char *)((longlong)param_2 + 0x32b);
  bVar21 = false;
  local_400 = 0;
  if (local_408 != '\0') {
    local_400 = param_2[0x71];
  }
  if ((local_400 != 0) &&
     (bVar21 = *(char *)(local_400 + 0x26c) != '\0', *(int *)((longlong)param_2 + 0x34c) != 900)) {
    lVar13 = *(longlong *)(local_400 + 0xc0);
    if ((*(int *)(param_2[0x7a] + 0xc0) != *(int *)(lVar13 + 0x1aa8) - *(int *)(lVar13 + 0x1aa0)) ||
       (*(int *)(param_2[0x7a] + 0xc4) != *(int *)(lVar13 + 0x1aac) - *(int *)(lVar13 + 0x1aa4))) {
      bVar21 = true;
    }
  }
  local_3f8 = lVar12;
  cVar10 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar10 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar11 = GetCurrentThreadId();
    lVar13 = 4;
    if (DVar11 == DAT_1468c21c0) goto LAB_141d7a290;
  }
  else {
LAB_141d7a290:
    lVar13 = 0;
  }
  local_3f0 = *(int *)(lVar14 + lVar13);
  bVar4 = false;
  bVar5 = true;
  bVar6 = true;
  if ((local_408 == '\0') || (local_400 == 0)) {
LAB_141d7a3f4:
    bVar6 = bVar21;
    if (bVar21) goto LAB_141d7a405;
LAB_141d7a3f9:
    bVar6 = bVar21;
    if (local_400 == 0) goto LAB_141d7a405;
LAB_141d7a867:
    if (*(char *)((longlong)param_2 + 0x333) == '\0') {
      uVar22 = (undefined4)local_3b0;
      uVar24 = (undefined4)((ulonglong)local_3b0 >> 0x20);
      uVar27 = (undefined4)local_380;
      uVar29 = (undefined4)((ulonglong)local_380 >> 0x20);
    }
    else {
      local_3b0 = *(longlong *)((longlong)param_2 + 0x334);
      uVar22 = (undefined4)local_3b0;
      uVar24 = (undefined4)((ulonglong)local_3b0 >> 0x20);
      local_380 = param_2[0x68];
      uVar27 = (undefined4)local_380;
      uVar29 = (undefined4)((ulonglong)local_380 >> 0x20);
      local_3a8 = *(undefined4 *)((longlong)param_2 + 0x33c);
      local_378 = (undefined4)param_2[0x69];
    }
    uStack_330 = CONCAT44(uVar24,uVar22);
    local_318 = param_2[0x6a];
    local_338 = local_400;
    uStack_310 = (undefined4)param_2[0x6b];
    uStack_324 = CONCAT44(uVar29,uVar27);
    local_328 = local_3a8;
    uStack_31c = local_378;
    if ((DAT_146ac3ac6 == '\0') || (cVar10 = IsInRenderingThread(), cVar10 == '\0')) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar10 = FUN_1415ad720(&DAT_1468e2448), cVar10 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar11 = GetCurrentThreadId(), DVar11 == DAT_1468c21c0)))) {
        local_218 = local_338;
        uStack_210 = uStack_330;
        local_208 = local_328;
        uStack_204 = (undefined4)uStack_324;
        uStack_200 = uStack_324._4_4_;
        uStack_1fc = uStack_31c;
        local_1f8 = (undefined4)local_318;
        uStack_1f4 = local_318._4_4_;
        uStack_1f0 = uStack_310;
        uStack_1ec = uStack_30c;
        uVar16 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_141d5c300(&local_218,uVar16);
        lVar12 = local_3f8;
      }
      else {
        plVar17 = (longlong *)FUN_141d658b0(local_100,0,0xff);
        lVar12 = *plVar17;
        *(longlong *)(lVar12 + 0x10) = local_338;
        *(undefined8 *)(lVar12 + 0x18) = uStack_330;
        *(undefined4 *)(lVar12 + 0x20) = local_328;
        *(undefined4 *)(lVar12 + 0x24) = (undefined4)uStack_324;
        *(undefined4 *)(lVar12 + 0x28) = uStack_324._4_4_;
        *(undefined4 *)(lVar12 + 0x2c) = uStack_31c;
        *(undefined4 *)(lVar12 + 0x30) = (undefined4)local_318;
        *(undefined4 *)(lVar12 + 0x34) = local_318._4_4_;
        *(undefined4 *)(lVar12 + 0x38) = uStack_310;
        *(undefined4 *)(lVar12 + 0x3c) = uStack_30c;
        lVar12 = *plVar17;
        lVar19 = plVar17[2];
        lVar14 = plVar17[1];
        lVar13 = *(longlong *)(lVar12 + 0x48);
        piVar1 = (int *)(lVar13 + 0x48);
        if (lVar13 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_340 = lVar13;
        FUN_140489ef0(lVar12,lVar14,(int)lVar19,1);
        lVar12 = local_3f8;
        if (lVar13 != 0) {
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(local_340);
            lVar12 = local_3f8;
          }
        }
      }
    }
    else {
      uVar16 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_141d5c300(&local_338,uVar16);
      lVar12 = local_3f8;
    }
  }
  else {
    lVar14 = lVar12 + 0x68;
    if (lVar12 == 0) {
      lVar14 = 0;
    }
    if (*(longlong *)(local_400 + 0x28) != lVar14) {
      bVar21 = bVar5;
    }
    lVar12 = (**(code **)(*param_1 + 0xe0))(param_1);
    if (*(char *)(lVar12 + 0xcc) == '\0') goto LAB_141d7a3f4;
    lVar14 = (**(code **)(*param_1 + 0xe0))(param_1);
    lVar12 = local_400;
    *(undefined1 *)(lVar14 + 0xcc) = 0;
    if ((local_3f0 != 1) && (bVar6 = bVar21, !bVar21)) {
      if ((DAT_146ac3ac6 == '\0') || (cVar10 = IsInRenderingThread(), cVar10 == '\0')) {
        if ((DAT_146ac3ac5 == '\0') &&
           (((cVar10 = FUN_1415ad720(&DAT_1468e2448), cVar10 != '\0' || (DAT_1468c21ae == '\0')) ||
            (DVar11 = GetCurrentThreadId(), DVar11 == DAT_1468c21c0)))) {
          FBaseGraphTask::GetSmallTaskAllocator();
          *(undefined1 *)(lVar12 + 0x26d) = 1;
        }
        else {
          plVar17 = (longlong *)FUN_141d65370(local_118,0,0xff);
          *(longlong *)(*plVar17 + 0x10) = lVar12;
          lVar12 = *plVar17;
          lVar19 = plVar17[2];
          lVar14 = plVar17[1];
          lVar13 = *(longlong *)(lVar12 + 0x20);
          piVar1 = (int *)(lVar13 + 0x48);
          if (lVar13 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_348 = lVar13;
          FUN_140445100(lVar12,lVar14,(int)lVar19,1);
          param_1 = local_368;
          if (lVar13 != 0) {
            LOCK();
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              FGraphEvent::Recycle(local_348);
              param_1 = local_368;
            }
          }
        }
      }
      else {
        FBaseGraphTask::GetSmallTaskAllocator();
        *(undefined1 *)(lVar12 + 0x26d) = 1;
      }
      goto LAB_141d7a3f9;
    }
LAB_141d7a405:
    cVar10 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar10 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar11 = GetCurrentThreadId(), DVar11 != DAT_1468c21c0)) {
      if (local_400 == 0) {
        return;
      }
      *(undefined1 *)(local_400 + 0x26c) = 1;
      return;
    }
    if (bVar6) {
      FUN_1423957d0(param_2,*DAT_146a98ec0 != 0);
    }
    else if (local_400 != 0) goto LAB_141d7a867;
    if (0 < DAT_146a98d34) {
      return;
    }
    local_420 = (**(code **)(*param_2 + 0x548))(param_2);
    lVar12 = local_3f8;
    local_428 = (undefined4)param_2[0x13c];
    local_430 = param_2 + 0x7c;
    local_418 = 0;
    lVar14 = local_3f8 + 0x68;
    local_440 = (undefined4)param_2[100];
    if (local_3f8 == 0) {
      lVar14 = 0;
    }
    local_438 = local_407;
    local_448 = &local_258;
    local_450 = &local_3b0;
    local_458 = &local_2b8;
    local_400 = FUN_141d64b00(param_1,param_2,lVar14,uVar16);
    *(uint *)(local_400 + 0x74) = (uint)*(byte *)(param_2 + 0x7b);
    *(uint *)(local_400 + 0x78) = (uint)*(byte *)((longlong)param_2 + 0x3d9);
    if ((int)param_2[0x74] < 2) {
      ppvVar15 = (void **)UObjectBaseUtility::GetFullGroupName(param_2,local_268,0);
      bVar4 = true;
      bVar5 = false;
    }
    else {
      local_350 = (int)param_2[0x74];
      lVar14 = (longlong)local_350;
      pvVar3 = (void *)param_2[0x73];
      local_358 = (void *)0x0;
      if (local_350 == 0) {
        local_34c = 0;
        ppvVar15 = &local_358;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_358,local_350,0);
        _guard_xfg_dispatch_icall_nop(local_358,pvVar3,lVar14 * 2);
        ppvVar15 = &local_358;
      }
    }
    FString::operator=(local_400 + 0x280,ppvVar15);
    if ((bVar4) && (local_268[0] != 0)) {
      FMemory::Free();
    }
    if ((bVar5) && (local_358 != (void *)0x0)) {
      FMemory::Free();
    }
    lVar13 = local_400;
    lVar14 = *(longlong *)((longlong)param_2 + 0xa34);
    fVar23 = *(float *)((longlong)param_2 + 0xa44);
    fVar25 = *(float *)(param_2 + 0x148);
    fVar26 = *(float *)(param_2 + 0x149);
    local_390 = *(float *)((longlong)param_2 + 0xa3c);
    fVar31 = fVar25 * fVar25 + fVar23 * fVar23 + fVar26 * fVar26;
    if (fVar31 == 1.0) {
      local_3ec = (longlong *)param_2[0x148];
      fVar36 = (float)((ulonglong)local_3ec >> 0x20);
      local_3e4 = *(float *)(param_2 + 0x149);
      fVar37 = (float)local_3ec;
    }
    else {
      fVar36 = DAT_1468b5d94;
      local_3e4 = DAT_1468b5d98;
      fVar37 = DAT_1468b5d90;
      if (1e-08 <= fVar31) {
        auVar34 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
        local_308 = auVar34._0_4_;
        local_308 = local_308 + local_308 * (0.5 - fVar31 * 0.5 * local_308 * local_308);
        local_308 = local_308 + local_308 * (0.5 - fVar31 * 0.5 * local_308 * local_308);
        fVar36 = fVar23 * local_308;
        local_3e4 = fVar26 * local_308;
        fVar37 = fVar25 * local_308;
      }
      local_3ec = (longlong *)CONCAT44(fVar36,fVar37);
    }
    local_398._4_4_ = (float)((ulonglong)lVar14 >> 0x20);
    lVar19 = *(longlong *)(local_400 + 0xc0);
    local_368 = local_3ec;
    local_398._0_4_ = (float)lVar14;
    lVar20 = (longlong)*(int *)(local_400 + 200) * 0x30d0 + lVar19;
    fStack_35c = local_398._4_4_ * fVar36 + (float)local_398 * fVar37 + local_390 * local_3e4;
    if (lVar19 != lVar20) {
      puVar18 = (undefined8 *)(lVar19 + 0x1210);
      do {
        *(byte *)((longlong)puVar18 + -0x1c) = *(byte *)((longlong)param_2 + 0xa4c) & 1;
        if ((char)param_2[0x146] != '\0') {
          *puVar18 = local_3ec;
          puVar18[1] = CONCAT44(fStack_35c,local_3e4);
          *(undefined1 *)(puVar18 + -0x36) = 0;
        }
        lVar19 = lVar19 + 0x30d0;
        puVar18 = puVar18 + 0x61a;
      } while (lVar19 != lVar20);
    }
    local_398 = lVar14;
    fStack_360 = local_3e4;
    _guard_xfg_dispatch_icall_nop
              (param_2 + 0x14a,(void *)(*(longlong *)(local_400 + 0xc0) + 0x390),0x570);
    if (local_408 != '\0') {
      *(undefined1 *)(lVar13 + 0x26b) = 1;
      iVar2 = DAT_1464c3100;
      param_2[0x71] = local_400;
      *(int *)(local_400 + 0x270) = iVar2;
      iVar2 = DAT_146a98ee8;
      lVar14 = (longlong)DAT_146a98ee8;
      DAT_1464c3100 = DAT_1464c3100 + 1;
      DAT_146a98ee8 = DAT_146a98ee8 + 1;
      if (DAT_146a98eec < DAT_146a98ee8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146a98ee0,iVar2);
      }
      *(longlong *)(DAT_146a98ee0 + lVar14 * 8) = local_400;
      FWeakObjectPtr::operator=(&local_304,param_2);
      local_2fc = local_304;
      local_2c8 = &local_400;
      local_2c0 = &local_2fc;
      FUN_141d57b50(&DAT_1464c2ff0,local_388,&local_2c8,0);
    }
  }
  FUN_1427611e0(param_2 + 0x14a,&local_3b0,&local_380);
  *(uint *)((longlong)param_2 + 0xa4c) = *(uint *)((longlong)param_2 + 0xa4c) & 0xfffffffe;
  local_3b8 = 0;
  local_3c0 = (void *)0x0;
  local_3b4 = 0;
  if ((int)param_2[0x74] < 2) {
    if (param_2[0x23] != 0) {
      local_2f0 = *(undefined8 *)(param_2[0x23] + 0x18);
      FName::ToString(&local_2f0,&local_3c0);
    }
  }
  else if (&local_3c0 != (void **)(param_2 + 0x73)) {
    local_3b8 = (int)param_2[0x74];
    lVar14 = (longlong)local_3b8;
    pvVar3 = (void *)param_2[0x73];
    if (local_3b8 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_3c0,local_3b8,0);
      _guard_xfg_dispatch_icall_nop(local_3c0,pvVar3,lVar14 * 2);
    }
  }
  iVar2 = local_3b8;
  pvVar3 = local_3c0;
  local_3e0 = local_400;
  local_3d0 = (void *)0x0;
  local_3c8 = CONCAT44(local_3c8._4_4_,local_3b8);
  local_3d8 = lVar12;
  if (local_3b8 == 0) {
    local_3c8 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_3d0,local_3b8,0);
    _guard_xfg_dispatch_icall_nop(local_3d0,pvVar3,(longlong)iVar2 * 2);
  }
  if ((DAT_146ac3ac6 == '\0') || (cVar10 = IsInRenderingThread(), cVar10 == '\0')) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar10 = FUN_1415ad720(&DAT_1468e2448), cVar10 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar11 = GetCurrentThreadId(), DVar11 == DAT_1468c21c0)))) {
      local_2e8 = local_3e0;
      local_2e0 = local_3d8;
      local_2d8 = local_3d0;
      local_2d0 = (undefined4)local_3c8;
      local_2cc = local_3c8._4_4_;
      local_3c8 = 0;
      local_3d0 = (void *)0x0;
      uVar16 = FBaseGraphTask::GetSmallTaskAllocator();
      <lambda_386768eb4bd52dc37b5cc4e570439960>::operator()(&local_2e8,uVar16);
      if (local_2d8 != (void *)0x0) {
        FMemory::Free();
      }
    }
    else {
      plVar17 = (longlong *)FUN_141d64f80(local_e8,0,0xff);
      lVar12 = *plVar17;
      *(longlong *)(lVar12 + 0x10) = local_3e0;
      *(longlong *)(lVar12 + 0x18) = local_3d8;
      *(undefined8 *)(lVar12 + 0x20) = 0;
      *(void **)(lVar12 + 0x20) = local_3d0;
      local_3d0 = (void *)0x0;
      *(undefined4 *)(lVar12 + 0x28) = (undefined4)local_3c8;
      *(undefined4 *)(lVar12 + 0x2c) = local_3c8._4_4_;
      local_3c8 = 0;
      lVar12 = *plVar17;
      lVar19 = plVar17[2];
      lVar14 = plVar17[1];
      lVar13 = *(longlong *)(lVar12 + 0x38);
      piVar1 = (int *)(lVar13 + 0x48);
      if (lVar13 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_398 = lVar13;
      FUN_14048a640(lVar12,lVar14,(int)lVar19,1);
      if (lVar13 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(local_398);
        }
      }
    }
  }
  else {
    uVar16 = FBaseGraphTask::GetSmallTaskAllocator();
    <lambda_386768eb4bd52dc37b5cc4e570439960>::operator()(&local_3e0,uVar16);
  }
  if (local_3d0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_3c0 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141d7aca0 FUN_141d7aca0 body=1976 status=ok
// SIG undefined FUN_141d7aca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d7aca0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  float fVar22;
  undefined1 auStack_908 [32];
  undefined1 *local_8e8;
  undefined4 *local_8e0;
  undefined8 *local_8d8;
  undefined4 local_8d0;
  undefined1 local_8c8;
  undefined1 *local_8c0;
  undefined4 local_8b8;
  undefined8 local_8b0;
  float local_8a8;
  byte local_898;
  undefined1 local_897;
  uint local_894;
  void *local_890;
  uint local_888;
  undefined4 local_884;
  longlong local_880;
  undefined8 local_878;
  void *local_870;
  undefined8 local_868;
  int local_860;
  longlong local_858;
  undefined8 local_850;
  uint local_848;
  longlong local_840;
  int local_838;
  int iStack_834;
  longlong local_830;
  longlong *local_828;
  longlong local_820;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined8 local_808;
  longlong *local_800;
  longlong local_7f8;
  undefined8 local_7f0;
  void *local_7e8;
  undefined4 local_7e0;
  undefined4 local_7dc;
  int local_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined4 local_798;
  float fStack_794;
  undefined8 uStack_790;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined8 local_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined4 local_758;
  float fStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined4 local_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined1 local_718 [24];
  undefined1 local_700 [24];
  undefined1 local_6e8 [64];
  undefined1 local_6a8 [1496];
  longlong local_d0;
  longlong local_c0;
  longlong local_a8 [14];
  
  local_a8[3] = DAT_1468387a8 ^ (ulonglong)auStack_908;
  if (((param_2[0x79] == 0) || (local_a8[2] = param_2[0x7a], local_a8[2] == 0)) ||
     (param_2[0x7b] == 0)) {
    local_a8[2] = param_2[0x7a];
    local_898 = 0;
  }
  else {
    local_898 = 1;
  }
  uVar19 = 0;
  uVar17 = (ulonglong)local_898;
  local_894 = (uint)local_898;
  local_848 = (uint)local_898 * 2 + 1;
  local_a8[0] = param_2[0x78];
  local_a8[1] = param_2[0x79];
  local_840 = param_1;
  if (local_894 < local_848) {
    local_828 = local_a8 + uVar17;
    uVar20 = local_848;
    do {
      uVar18 = (uint)uVar17;
      if ((1 < *(int *)(param_1 + 8)) &&
         (local_800 = (longlong *)*local_828, local_800 != (longlong *)0x0)) {
        local_897 = *(char *)((longlong)param_2 + 0x3e4) != '\x02';
        uVar15 = uVar19;
        do {
          plVar14 = local_800;
          local_818 = (undefined4)param_2[0x44];
          local_814 = *(undefined4 *)((longlong)param_2 + 0x224);
          local_810 = (undefined4)param_2[0x45];
          uStack_71c = *(undefined4 *)((longlong)param_2 + 0x22c);
          iVar21 = (int)uVar15;
          local_728 = local_818;
          uStack_724 = local_814;
          uStack_720 = local_810;
          FUN_141d61f40(local_6e8,uVar15);
          fVar22 = (float)(**(code **)(*plVar14 + 0x2b8))(plVar14);
          iVar16 = (int)fVar22;
          fVar22 = (float)(**(code **)(*plVar14 + 0x2b0))(plVar14);
          local_838 = (int)fVar22;
          local_788 = 0;
          uStack_784 = 0;
          uStack_780 = 0;
          uStack_77c = 0x3f800000;
          uVar11 = CONCAT44(iVar16,local_838);
          local_748 = 0;
          uStack_744 = 0;
          uStack_740 = 0;
          uStack_73c = 0x3f800000;
          local_7a8 = 0x3f7fffff;
          uStack_7a0 = 0;
          local_768 = 0x3f7fffff;
          uStack_760 = 0;
          fStack_794 = ((float)local_838 / (float)iVar16) * 0.99999994;
          local_798 = 0;
          uStack_790 = 0;
          local_758 = 0;
          uStack_750 = 0;
          uStack_74c = 0;
          local_778 = 0;
          uStack_770 = DAT_1464aaa4c;
          uStack_76c = 0;
          local_738 = 0;
          uStack_734 = 0;
          uStack_730 = DAT_1464aaa4c;
          uStack_72c = 0;
          iStack_834 = iVar16;
          fStack_754 = fStack_794;
          FUN_142741540(local_6a8);
          fVar22 = 0.0;
          if (local_898 != 0) {
            if ((int)uVar17 == 1) {
              fVar22 = *(float *)(param_2 + 0x7c) * -0.5;
            }
            else {
              fVar22 = *(float *)(param_2 + 0x7c) * 0.5;
            }
          }
          lVar10 = FHdrImageWrapper::GetHeight(plVar14);
          uVar17 = lVar10 + 0x68;
          if (lVar10 == 0) {
            uVar17 = uVar19;
          }
          local_8b0 = (**(code **)(*param_2 + 0x548))(param_2);
          local_8d0 = (undefined4)param_2[100];
          local_8b8 = 0;
          local_8c0 = local_6a8;
          local_8c8 = local_897;
          local_8d8 = &local_768;
          local_8e0 = &local_818;
          local_8e8 = local_6e8;
          local_8a8 = fVar22;
          lVar10 = FUN_141d64b00(param_1,param_2,uVar17,uVar11);
          *(uint *)(lVar10 + 0x74) = (uint)*(byte *)((longlong)param_2 + 0x3e4);
          *(uint *)(lVar10 + 0x78) = (uint)*(byte *)((longlong)param_2 + 0x3e5);
          FString::PrintfImpl(&local_858,L"CubeCaptureF%d",local_894);
          plVar2 = (longlong *)(lVar10 + 0x280);
          if (plVar2 == &local_858) {
            if (local_858 != 0) {
              FMemory::Free();
            }
          }
          else {
            if (*plVar2 != 0) {
              FMemory::Free();
            }
            *plVar2 = local_858;
            *(undefined4 *)(lVar10 + 0x288) = (undefined4)local_850;
            *(undefined4 *)(lVar10 + 0x28c) = local_850._4_4_;
            local_850 = 0;
            local_858 = 0;
          }
          uVar11 = FHdrImageWrapper::GetHeight(plVar14);
          uVar20 = *(uint *)(param_2 + 0x74);
          uVar15 = (ulonglong)(int)uVar20;
          uVar17 = 0;
          local_890 = (void *)0x0;
          local_888 = 0;
          local_884 = 0;
          if ((int)uVar20 < 2) {
            if (param_2[0x23] != 0) {
              local_808 = *(undefined8 *)(param_2[0x23] + 0x18);
              FName::ToString(&local_808,&local_890);
              goto LAB_141d7b095;
            }
          }
          else {
            uVar17 = uVar19;
            if ((&local_890 != (void **)(param_2 + 0x73)) &&
               (pvVar4 = (void *)param_2[0x73], uVar17 = uVar15, local_888 = uVar20, uVar20 != 0)) {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_890,uVar15,0);
              _guard_xfg_dispatch_icall_nop(local_890,pvVar4,uVar15 * 2);
LAB_141d7b095:
              uVar17 = (ulonglong)local_888;
            }
          }
          pvVar4 = local_890;
          local_870 = (void *)0x0;
          iVar16 = (int)uVar17;
          local_868 = CONCAT44(local_868._4_4_,iVar16);
          local_880 = lVar10;
          local_878 = uVar11;
          if (iVar16 == 0) {
            local_868 = uVar17 & 0xffffffff;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_870,uVar17 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop(local_870,pvVar4,(longlong)iVar16 * 2);
          }
          local_860 = iVar21;
          if ((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) {
            if ((DAT_146ac3ac5 == '\0') &&
               (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0'))
                || (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
              local_7f8 = local_880;
              local_7f0 = local_878;
              local_7e8 = local_870;
              local_7e0 = (undefined4)local_868;
              local_7dc = local_868._4_4_;
              local_7d8 = local_860;
              local_870 = (void *)0x0;
              local_868 = 0;
              uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
              <lambda_e19278b19a03fe63b0ce1902ba0cecc4>::operator()(&local_7f8,uVar11);
              if (local_7e8 != (void *)0x0) {
                FMemory::Free();
              }
            }
            else {
              plVar14 = (longlong *)FUN_141d650d0(local_718,0,0xff);
              lVar10 = *plVar14;
              *(longlong *)(lVar10 + 0x10) = local_880;
              *(undefined8 *)(lVar10 + 0x18) = local_878;
              *(undefined8 *)(lVar10 + 0x20) = 0;
              *(void **)(lVar10 + 0x20) = local_870;
              local_870 = (void *)0x0;
              *(undefined4 *)(lVar10 + 0x28) = (undefined4)local_868;
              *(undefined4 *)(lVar10 + 0x2c) = local_868._4_4_;
              local_868 = 0;
              *(int *)(lVar10 + 0x30) = local_860;
              lVar10 = *plVar14;
              lVar7 = plVar14[2];
              lVar5 = plVar14[1];
              lVar6 = *(longlong *)(lVar10 + 0x40);
              piVar1 = (int *)(lVar6 + 0x48);
              if (lVar6 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_830 = lVar6;
              FUN_14048a8b0(lVar10,lVar5,(int)lVar7,1);
              if (lVar6 != 0) {
                LOCK();
                iVar16 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar16 == 1) {
                  FGraphEvent::Recycle(local_830);
                }
              }
            }
          }
          else {
            uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
            <lambda_e19278b19a03fe63b0ce1902ba0cecc4>::operator()(&local_880,uVar11);
          }
          if (local_870 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_890 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_c0 != 0) {
            FMemory::Free();
          }
          if (local_d0 != 0) {
            FMemory::Free();
          }
          uVar15 = (ulonglong)(iVar21 + 1U);
          uVar17 = (ulonglong)local_894;
          param_1 = local_840;
          uVar18 = local_894;
          uVar20 = local_848;
        } while ((int)(iVar21 + 1U) < 6);
      }
      local_894 = uVar18 + 1;
      uVar17 = (ulonglong)local_894;
      local_828 = local_828 + 1;
    } while (local_894 < uVar20);
  }
  if (local_898 != 0) {
    uVar11 = FHdrImageWrapper::GetHeight(param_2[0x79]);
    uVar12 = FHdrImageWrapper::GetHeight(param_2[0x7a]);
    lVar10 = FHdrImageWrapper::GetHeight(param_2[0x7b]);
    uVar3 = *(undefined4 *)(local_840 + 8);
    local_7d0 = uVar11;
    uStack_7c8 = uVar12;
    local_7c0 = lVar10;
    uStack_7b8 = uVar3;
    if ((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
        uVar13 = FBaseGraphTask::GetSmallTaskAllocator();
        local_8e8 = (undefined1 *)CONCAT44(local_8e8._4_4_,uVar3);
        uVar17 = lVar10 + 0x68;
        if (lVar10 == 0) {
          uVar17 = uVar19;
        }
        FUN_141d6b780(uVar13,uVar11,uVar12,uVar17);
      }
      else {
        plVar14 = (longlong *)FUN_141d654c0(local_700,0,0xff);
        lVar10 = *plVar14;
        *(undefined8 *)(lVar10 + 0x10) = local_7d0;
        *(undefined8 *)(lVar10 + 0x18) = uStack_7c8;
        *(undefined4 *)(lVar10 + 0x20) = (undefined4)local_7c0;
        *(undefined4 *)(lVar10 + 0x24) = local_7c0._4_4_;
        *(undefined4 *)(lVar10 + 0x28) = uStack_7b8;
        *(undefined4 *)(lVar10 + 0x2c) = uStack_7b4;
        lVar10 = *plVar14;
        lVar7 = plVar14[2];
        lVar5 = plVar14[1];
        lVar6 = *(longlong *)(lVar10 + 0x38);
        piVar1 = (int *)(lVar6 + 0x48);
        if (lVar6 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_820 = lVar6;
        FUN_14048a640(lVar10,lVar5,(int)lVar7,1);
        if (lVar6 != 0) {
          LOCK();
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            FGraphEvent::Recycle(local_820);
          }
        }
      }
    }
    else {
      uVar13 = FBaseGraphTask::GetSmallTaskAllocator();
      if (lVar10 != 0) {
        uVar19 = lVar10 + 0x68;
      }
      local_8e8 = (undefined1 *)CONCAT44(local_8e8._4_4_,uVar3);
      FUN_141d6b780(uVar13,uVar11,uVar12,uVar19);
    }
  }
  return;
}



// FUNCTION 141d7b460 WaitForTasks body=381 status=ok
// SIG undefined WaitForTasks(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FParallelCommandListSet::WaitForTasks(void)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 auStack_78 [40];
  undefined1 local_50 [32];
  undefined1 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  lVar4 = DAT_146a9dcb8;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (DAT_146a9dcb8 != 0) {
    puVar14 = (undefined1 *)0x0;
    local_30 = (undefined1 *)0x0;
    local_28 = 0;
    puVar11 = puVar14;
    puVar12 = puVar14;
    if (0 < *(int *)(DAT_146a9dcb8 + 0x98)) {
      do {
        uVar5 = local_28;
        LOCK();
        uVar7 = *(ulonglong *)(*(longlong *)(puVar12 + *(longlong *)(lVar4 + 0x90)) + 8);
        if (uVar7 == 0) {
          *(ulonglong *)(*(longlong *)(puVar12 + *(longlong *)(lVar4 + 0x90)) + 8) = 0;
          uVar7 = 0;
        }
        UNLOCK();
        if ((uVar7 >> 0x1a & 1) == 0) {
          lVar13 = (longlong)(int)(uint)local_28;
          lVar2 = *(longlong *)(lVar4 + 0x90);
          iVar6 = (uint)local_28 + 1;
          local_28 = CONCAT44(local_28._4_4_,iVar6);
          if (local_28._4_4_ < iVar6) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (local_50,uVar5 & 0xffffffff);
          }
          lVar2 = *(longlong *)(puVar12 + lVar2);
          puVar9 = local_50;
          if (local_30 != (undefined1 *)0x0) {
            puVar9 = local_30;
          }
          *(longlong *)(puVar9 + lVar13 * 8) = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
            UNLOCK();
          }
        }
        uVar3 = DAT_1464a8214;
        uVar10 = (int)puVar11 + 1;
        puVar11 = (undefined1 *)(ulonglong)uVar10;
        puVar12 = puVar12 + 8;
      } while ((int)uVar10 < *(int *)(lVar4 + 0x98));
      uVar10 = 0;
      if ((uint)local_28 != 0) {
        plVar8 = (longlong *)FTaskGraphInterface::Get();
        (**(code **)(*plVar8 + 0x48))(plVar8,local_50,uVar3);
        uVar10 = (uint)local_28;
      }
      puVar11 = (undefined1 *)(ulonglong)uVar10;
    }
    puVar12 = local_50;
    if (local_30 != (undefined1 *)0x0) {
      puVar12 = puVar14;
    }
    plVar8 = (longlong *)((ulonglong)puVar12 | (ulonglong)local_30);
    uVar10 = (uint)puVar11;
    while (uVar10 != 0) {
      if (*plVar8 != 0) {
        LOCK();
        piVar1 = (int *)(*plVar8 + 0x48);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar8 = plVar8 + 1;
      uVar10 = (int)puVar11 - 1;
      puVar11 = (undefined1 *)(ulonglong)uVar10;
    }
    if (local_30 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141d7b5e0 FUN_141d7b5e0 body=692 status=ok
// SIG undefined FUN_141d7b5e0(void)

void FUN_141d7b5e0(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_3 != '\0') {
    FRHICommandListBase::WaitForTasks(param_1,0);
  }
  uVar8 = 0;
  iVar7 = (DAT_146a9db98 - DAT_146a9db88) + -2;
  if (0 < iVar7) {
    uVar4 = uVar8;
    do {
      FMemory::Free(*(undefined8 *)((longlong)DAT_146a9db90 + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)iVar7);
    if (DAT_146a9db98 - iVar7 != 0) {
      _guard_xfg_dispatch_icall_nop
                (DAT_146a9db90,(void *)((longlong)DAT_146a9db90 + (longlong)iVar7 * 8),
                 (longlong)(DAT_146a9db98 - iVar7) << 3);
    }
    DAT_146a9db98 = DAT_146a9db98 - iVar7;
  }
  uVar4 = (longlong)DAT_146a9db88 & 0x1fffffffffffffff;
  if (DAT_146a9db80 + DAT_146a9db88 < DAT_146a9db80) {
    uVar4 = uVar8;
  }
  plVar6 = DAT_146a9db80;
  if (uVar4 != 0) {
    do {
      lVar1 = *plVar6;
      TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x20,0);
      uVar2 = *(undefined8 *)(lVar1 + 0x1ab8);
      *(undefined8 *)(lVar1 + 0x1ab8) = 0;
      FMemory::operator_delete(uVar2);
      lVar5 = (longlong)DAT_146a9db98;
      DAT_146a9db98 = DAT_146a9db98 + 1;
      if (DAT_146a9db9c < DAT_146a9db98) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146a9db90);
      }
      uVar8 = uVar8 + 1;
      *(longlong *)((longlong)DAT_146a9db90 + lVar5 * 8) = lVar1;
      plVar6 = plVar6 + 1;
    } while (uVar8 != uVar4);
  }
  DAT_146a9db88 = 0;
  if ((DAT_146a9db8c < 0) && (DAT_146a9db8c != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146a9db80,0);
  }
  uVar2 = FSceneRenderTargets::Get();
  FUN_141ce1160(uVar2);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a9ebf8) && (_Init_thread_header(&DAT_146a9ebf8), DAT_146a9ebf8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146a9ebf0 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RHICmdAsyncRHIThreadDispatch");
    _Init_thread_footer(&DAT_146a9ebf8);
  }
  iVar7 = (**(code **)(*DAT_146a9ebf0 + 0x68))();
  if (iVar7 == 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_1);
    }
    FUN_141ed93a0(param_1);
  }
  if (param_2 != (undefined8 *)0x0) {
    plVar6 = (longlong *)param_2[0x55];
    param_2[0x55] = 0;
    (**(code **)*param_2)(param_2,1);
    if (plVar6 != (longlong *)0x0) {
      if ((char)plVar6[3] == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(int *)(*plVar6 + 0x20) = *(int *)(*plVar6 + 0x20) + -1;
        plVar3 = (longlong *)*plVar6;
        if (plVar6[2] != plVar3[2]) {
          FMemStackBase::FreeChunks();
          plVar3 = (longlong *)*plVar6;
        }
        *plVar3 = plVar6[1];
        *(longlong *)(*plVar6 + 0x18) = plVar6[4];
        plVar6[1] = 0;
      }
      FMemory::operator_delete(plVar6,0x28);
    }
  }
  return;
}



// FUNCTION 141d7b8a0 FUN_141d7b8a0 body=116 status=ok
// SIG undefined FUN_141d7b8a0(void)

void FUN_141d7b8a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  
  if (DAT_146ab6383 != '\0') {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))();
    if (cVar4 == '\0') {
      iVar5 = FUN_141d69970(*(undefined4 *)(param_1 + 0x2a0));
      plVar2 = &DAT_146a9d508 + (iVar5 + -1);
      FUN_141ed9b00(plVar2);
      lVar3 = *plVar2;
      *plVar2 = 0;
      if (lVar3 != 0) {
        LOCK();
        piVar1 = (int *)(lVar3 + 0x48);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          FGraphEvent::Recycle();
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 141d7b920 FUN_141d7b920 body=598 status=ok
// SIG undefined FUN_141d7b920(void)

longlong * FUN_141d7b920(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"InvSize";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 2;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"InputUvFactorAndOffset";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"InputViewportMaxBound";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x20;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"NumMipsPerBatch";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x28;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"UpdateSizeX";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x30000002c;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141d7bb80 FUN_141d7bb80 body=134 status=ok
// SIG undefined FUN_141d7bb80(void)

undefined1 FUN_141d7bb80(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_1419e0a40(param_2,param_1 + 0x150);
  FUN_1419e0a40(param_2,param_1 + 0x156);
  FUN_1419e0a40(param_2,param_1 + 0x15c);
  FUN_1419e0a40(param_2,param_1 + 0x162);
  FUN_1419e0a40(param_2,param_1 + 0x168);
  return uVar1;
}



// FUNCTION 141d7bc10 FUN_141d7bc10 body=119 status=ok
// SIG undefined FUN_141d7bc10(void)

undefined1 FUN_141d7bc10(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_1419e0a40(param_2,param_1 + 0x150);
  FUN_1419e0a40(param_2,param_1 + 0x156);
  FUN_1419e0a40(param_2,param_1 + 0x15c);
  FUN_1419e0a40(param_2,param_1 + 0x162);
  return uVar1;
}



// FUNCTION 141d7bc90 FUN_141d7bc90 body=224 status=ok
// SIG undefined FUN_141d7bc90(void)

undefined1 FUN_141d7bc90(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_141d7c390();
  FUN_1419e0a40(param_2,param_1 + 0x150);
  FUN_1419e0a40(param_2,param_1 + 0x156);
  FUN_1419e0a40(param_2,param_1 + 0x15c);
  uVar2 = FUN_1419e0b60(param_2,param_1 + 0x162);
  FUN_1419e0b60(uVar2,param_1 + 0x166);
  uVar2 = FUN_1419e0b60(param_2,param_1 + 0x16a);
  FUN_1419e0b60(uVar2,param_1 + 0x16e);
  uVar2 = FUN_1419e0b60(param_2,param_1 + 0x172);
  FUN_1419e0b60(uVar2,param_1 + 0x176);
  uVar2 = FUN_1419e0b60(param_2,param_1 + 0x17a);
  FUN_1419e0b60(uVar2,param_1 + 0x17e);
  return uVar1;
}



// FUNCTION 141d7bd70 FUN_141d7bd70 body=821 status=ok
// SIG undefined FUN_141d7bd70(void)

void FUN_141d7bd70(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  float local_res18 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  
  lVar8 = *(longlong *)(param_1 + 0x48);
  lVar13 = lVar8;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
    lVar13 = *(longlong *)(param_1 + 0x48);
  }
  uVar2 = *(undefined8 *)(lVar8 + 0x40);
  uVar3 = *(undefined8 *)(param_4 + 0x20);
  if (*(char *)(lVar13 + 0x28) == '\0') {
    FUN_1419f3850(lVar13);
  }
  FUN_141aa9590(param_1,param_2,*(undefined8 *)(lVar13 + 0x40),uVar3);
  uVar6 = param_5;
  uVar10 = param_5;
  FUN_141dac1d0(param_1 + 0xc0,param_2,param_1,param_4,param_5);
  uVar7 = 0;
  uVar10 = uVar10 & 0xffffffff00000000;
  plVar4 = *(longlong **)(*(longlong *)(uVar6 + 0x5c8) + 0x30);
  lVar8 = *(longlong *)(uVar6 + 0x550);
  if (*(longlong *)(uVar6 + 0x550) == 0) {
    lVar8 = uVar6 + 0x548;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x108,lVar8 + (longlong)param_3 * 4,uVar10);
  uVar10 = uVar10 & 0xffffffff00000000;
  local_res18[0] = *(float *)(plVar4 + 0x25) * 7.0 + 1.0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x10e,local_res18,uVar10);
  lVar8 = plVar4[0x1e];
  uVar5 = *(undefined4 *)((longlong)plVar4 + 0xf4);
  lVar13 = plVar4[0x1f];
  local_4c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_4c = 1.0 / local_4c;
  local_58 = (int)lVar8;
  local_54 = uVar5;
  local_50 = (int)lVar13;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar2,param_1 + 0x114,&local_58,uVar10 & 0xffffffff00000000);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar10 = uVar7;
    do {
      iVar9 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar7 * 8) == &DAT_146a286e0) {
        if (iVar9 != -1) {
          puVar12 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 8);
          *(undefined4 *)puVar12 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141d7bf42;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a253f8) {
    _Init_thread_header(&DAT_146a253f8);
    if (DAT_146a253f8 == -1) {
      DAT_146a253f0._0_4_ = 0;
      DAT_146a253f0._4_2_ = 0;
      DAT_146a253f0._6_1_ = 0;
      _Init_thread_footer(&DAT_146a253f8);
    }
  }
  puVar12 = &DAT_146a253f0;
LAB_141d7bf42:
  param_5 = *puVar12;
  if ((char)(param_5 >> 0x30) != '\0') {
    FUN_141b51280(param_2,uVar2,&param_5,*(undefined8 *)(uVar6 + 0x5c8),param_4);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 0x10) + 0x20);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x210))();
  }
  FSceneRenderTargets::Get(param_2);
  lVar8 = GetSubsufaceProfileTexture_RT(param_2);
  if (lVar8 == 0) {
    lVar8 = DAT_1464c3318;
  }
  uVar3 = *(undefined8 *)(lVar8 + 0x10);
  if (*(short *)(param_1 + 0x11c) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x11a);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59c80;
    puVar11[2] = uVar2;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    puVar11[4] = uVar3;
  }
  return;
}



// FUNCTION 141d7c0b0 FUN_141d7c0b0 body=104 status=ok
// SIG undefined FUN_141d7c0b0(void)

undefined1 FUN_141d7c0b0(longlong param_1,undefined8 param_2)

{
  FUN_141d8bdf0(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0x108);
  FUN_1419e0a40(param_2,param_1 + 0x10e);
  FUN_1419e0b60(param_2,param_1 + 0x11a);
  FUN_1419e0a40(param_2,param_1 + 0x114);
  return 0;
}



// FUNCTION 141d7c120 FUN_141d7c120 body=594 status=ok
// SIG undefined FUN_141d7c120(void)

ulonglong FUN_141d7c120(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 local_res8;
  longlong local_78 [5];
  undefined4 local_50;
  undefined4 local_48 [2];
  longlong local_40 [5];
  undefined4 local_18;
  
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_1419e0b60(param_2,param_1 + 0xd4);
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  FUN_141ad3f10(param_1 + 0xdc,param_2);
  FUN_141d8bc60(param_2,param_1 + 0xe8);
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a9fbb0) {
    _Init_thread_header(&DAT_146a9fbb0);
    if (DAT_146a9fbb0 == -1) {
      FName::FName(&DAT_146a9fba8,L"DebugUniformExpressionUB",1);
      _Init_thread_footer(&DAT_146a9fbb0);
    }
  }
  local_40[4] = DAT_146a9fba8;
  local_48[0] = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_18 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_141d8bea0(param_2,local_78 + 2);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_res8 = local_40[4];
    (**(code **)(*param_2 + 0x40))(param_2,&local_res8);
  }
  else {
    local_res8 = 0;
    (**(code **)(*param_2 + 0x40))();
    uVar2 = local_res8;
    if (local_40[0] != 0) {
      FMemory::Free();
    }
    if (local_40[2] != 0) {
      FMemory::Free();
    }
    local_40[4] = uVar2;
  }
  plVar1 = (longlong *)param_2[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_48,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_48,4);
    }
  }
  else {
    local_48[0] = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  FUN_14091a320(param_2,local_40);
  FUN_140d25120(param_2,local_40 + 2);
  FUN_14158ce90(param_2,local_78);
  FUN_1419e0a40(param_2,param_1 + 0xf8);
  FUN_1419e0a40(param_2,param_1 + 0xfe);
  uVar3 = FUN_1419e0a40(param_2,param_1 + 0x104);
  if (local_78[0] != 0) {
    uVar3 = FMemory::Free();
  }
  if (local_40[2] != 0) {
    uVar3 = FMemory::Free();
  }
  if (local_40[0] != 0) {
    uVar3 = FMemory::Free();
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141d7c390 FUN_141d7c390 body=110 status=ok
// SIG undefined FUN_141d7c390(void)

byte FUN_141d7c390(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_141d7c120();
  FUN_141ad3f10(param_1 + 0x110,param_2);
  bVar2 = FUN_1419e0c20(param_2,param_1 + 0x118);
  FUN_1419e0a40(param_2,param_1 + 0x140);
  FUN_1419e0b60(param_2,param_1 + 0x146);
  return bVar1 | bVar2;
}



// FUNCTION 141d7c400 FUN_141d7c400 body=57 status=ok
// SIG undefined FUN_141d7c400(void)

int FUN_141d7c400(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(int *)(param_1 + 0xf4) + *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x14)) * 8;
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x20))();
    return iVar1 + iVar2;
  }
  return iVar2;
}



// FUNCTION 141d7c440 FUN_141d7c440 body=821 status=ok
// SIG undefined FUN_141d7c440(void)

void FUN_141d7c440(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  float local_res18 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  
  lVar8 = *(longlong *)(param_1 + 0x48);
  lVar13 = lVar8;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
    lVar13 = *(longlong *)(param_1 + 0x48);
  }
  uVar2 = *(undefined8 *)(lVar8 + 0x40);
  uVar3 = *(undefined8 *)(param_4 + 0x20);
  if (*(char *)(lVar13 + 0x28) == '\0') {
    FUN_1419f3850(lVar13);
  }
  FUN_141aa9590(param_1,param_2,*(undefined8 *)(lVar13 + 0x40),uVar3);
  uVar6 = param_5;
  uVar10 = param_5;
  FUN_141dabd00(param_1 + 0xc0,param_2,param_1,param_4,param_5);
  uVar7 = 0;
  uVar10 = uVar10 & 0xffffffff00000000;
  plVar4 = *(longlong **)(*(longlong *)(uVar6 + 0x5c8) + 0x30);
  lVar8 = *(longlong *)(uVar6 + 0x550);
  if (*(longlong *)(uVar6 + 0x550) == 0) {
    lVar8 = uVar6 + 0x548;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x108,lVar8 + (longlong)param_3 * 4,uVar10);
  uVar10 = uVar10 & 0xffffffff00000000;
  local_res18[0] = *(float *)(plVar4 + 0x25) * 7.0 + 1.0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x10e,local_res18,uVar10);
  lVar8 = plVar4[0x1e];
  uVar5 = *(undefined4 *)((longlong)plVar4 + 0xf4);
  lVar13 = plVar4[0x1f];
  local_4c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_4c = 1.0 / local_4c;
  local_58 = (int)lVar8;
  local_54 = uVar5;
  local_50 = (int)lVar13;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar2,param_1 + 0x114,&local_58,uVar10 & 0xffffffff00000000);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar10 = uVar7;
    do {
      iVar9 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar7 * 8) == &DAT_146a286e0) {
        if (iVar9 != -1) {
          puVar12 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 8);
          *(undefined4 *)puVar12 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141d7c612;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a253f8) {
    _Init_thread_header(&DAT_146a253f8);
    if (DAT_146a253f8 == -1) {
      DAT_146a253f0._0_4_ = 0;
      DAT_146a253f0._4_2_ = 0;
      DAT_146a253f0._6_1_ = 0;
      _Init_thread_footer(&DAT_146a253f8);
    }
  }
  puVar12 = &DAT_146a253f0;
LAB_141d7c612:
  param_5 = *puVar12;
  if ((char)(param_5 >> 0x30) != '\0') {
    FUN_141b51280(param_2,uVar2,&param_5,*(undefined8 *)(uVar6 + 0x5c8),param_4);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 0x10) + 0x20);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x210))();
  }
  FSceneRenderTargets::Get(param_2);
  lVar8 = GetSubsufaceProfileTexture_RT(param_2);
  if (lVar8 == 0) {
    lVar8 = DAT_1464c3318;
  }
  uVar3 = *(undefined8 *)(lVar8 + 0x10);
  if (*(short *)(param_1 + 0x11c) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x11a);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59c80;
    puVar11[2] = uVar2;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    puVar11[4] = uVar3;
  }
  return;
}



// FUNCTION 141d7c780 FUN_141d7c780 body=124 status=ok
// SIG undefined FUN_141d7c780(void)

void FUN_141d7c780(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  
  FUN_141d7c440();
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0x120,
             *(longlong *)(*(longlong *)(param_5 + 0x5c8) + 0x30) + 0x1ac);
  return;
}



// FUNCTION 141d7c800 FUN_141d7c800 body=119 status=ok
// SIG undefined FUN_141d7c800(void)

undefined1 FUN_141d7c800(longlong param_1,undefined8 param_2)

{
  FUN_141d8bdf0(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0x108);
  FUN_1419e0a40(param_2,param_1 + 0x10e);
  FUN_1419e0b60(param_2,param_1 + 0x11a);
  FUN_1419e0a40(param_2,param_1 + 0x114);
  FUN_1419e0a40(param_2,param_1 + 0x120);
  return 0;
}



// FUNCTION 141d7c880 SetParameters body=72 status=ok
// SIG undefined SetParameters(void)

void TShadowProjectionFromTranslucencyPS<1>::SetParameters
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  FUN_141d7bd70();
  FTranslucencyShadowProjectionShaderParameters::Set(param_1 + 0x120,param_2,param_1,param_5);
  return;
}



// FUNCTION 141d7c8d0 FUN_141d7c8d0 body=164 status=ok
// SIG undefined FUN_141d7c8d0(void)

undefined1 FUN_141d7c8d0(longlong param_1,undefined8 param_2)

{
  FUN_141d8bdf0(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0x108);
  FUN_1419e0a40(param_2,param_1 + 0x10e);
  FUN_1419e0b60(param_2,param_1 + 0x11a);
  FUN_1419e0a40(param_2,param_1 + 0x114);
  FUN_1419e0b60(param_2,param_1 + 0x120);
  FUN_1419e0b60(param_2,param_1 + 0x124);
  FUN_1419e0b60(param_2,param_1 + 0x128);
  FUN_1419e0b60(param_2,param_1 + 300);
  return 0;
}



// FUNCTION 141d7c980 Serialize body=109 status=ok
// SIG undefined Serialize(void)

undefined1 TShadowProjectionFromTranslucencyPS<5>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c0b0();
  FUN_1419e0b60(param_2,param_1 + 0x120);
  FUN_1419e0b60(param_2,param_1 + 0x124);
  FUN_1419e0b60(param_2,param_1 + 0x128);
  FUN_1419e0b60(param_2,param_1 + 300);
  return uVar1;
}



// FUNCTION 141d7c9f0 FUN_141d7c9f0 body=246 status=ok
// SIG undefined FUN_141d7c9f0(void)

undefined1 FUN_141d7c9f0(longlong param_1,undefined8 param_2)

{
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0b60(param_2,param_1 + 0xd4);
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  FUN_1419e0a40(param_2,param_1 + 0xdc);
  FUN_1419e0a40(param_2,param_1 + 0xe2);
  FUN_1419e0b60(param_2,param_1 + 0xe8);
  FUN_1419e0a40(param_2,param_1 + 0xec);
  FUN_1419e0a40(param_2,param_1 + 0xf2);
  FUN_1419e0a40(param_2,param_1 + 0xf8);
  FUN_1419e0a40(param_2,param_1 + 0xfe);
  FUN_1419e0b60(param_2,param_1 + 0x104);
  FUN_1419e0a40(param_2,param_1 + 0x108);
  return 0;
}



// FUNCTION 141d7caf0 FUN_141d7caf0 body=388 status=ok
// SIG undefined FUN_141d7caf0(void)

void FUN_141d7caf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  ulonglong uVar5;
  float local_28;
  float local_24;
  undefined8 local_20;
  
  uVar5 = param_5;
  FUN_141d7bd70(param_1,param_2,param_3,param_4,param_5);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  fVar4 = (float)(**(code **)(**(longlong **)(*(longlong *)(param_5 + 0x5c8) + 0x30) + 0x40))();
  fVar4 = _guard_xfg_dispatch_icall_nop(fVar4 * 0.008726646);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a9ecc8) {
    _Init_thread_header(&DAT_146a9ecc8);
    if (DAT_146a9ecc8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146a9ecc0 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.MaxSoftKernelSize");
      _Init_thread_footer(&DAT_146a9ecc8);
    }
  }
  iVar3 = (**(code **)(*DAT_146a9ecc0 + 0x68))();
  local_20 = 0;
  local_28 = (*(float *)(param_5 + 0x154) - *(float *)(param_5 + 0x158)) * fVar4 *
             (0.5 / *(float *)(param_5 + 0x3b0));
  local_24 = (float)iVar3 / (float)*(uint *)(param_5 + 0x538);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar2,param_1 + 0x120,&local_28,uVar5 & 0xffffffff00000000);
  return;
}



// FUNCTION 141d7cc80 Serialize body=63 status=ok
// SIG undefined Serialize(void)

undefined1
TDirectionalPercentageCloserShadowProjectionPS<5,1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c0b0();
  FUN_1419e0a40(param_2,param_1 + 0x120);
  return uVar1;
}



// FUNCTION 141d7ccc0 FUN_141d7ccc0 body=388 status=ok
// SIG undefined FUN_141d7ccc0(void)

void FUN_141d7ccc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  ulonglong uVar5;
  float local_28;
  float local_24;
  undefined8 local_20;
  
  uVar5 = param_5;
  FUN_141d7bd70(param_1,param_2,param_3,param_4,param_5);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  fVar4 = (float)(**(code **)(**(longlong **)(*(longlong *)(param_5 + 0x5c8) + 0x30) + 0x40))();
  fVar4 = _guard_xfg_dispatch_icall_nop(fVar4 * 0.008726646);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a9ecb8) {
    _Init_thread_header(&DAT_146a9ecb8);
    if (DAT_146a9ecb8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146a9ecb0 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.MaxSoftKernelSize");
      _Init_thread_footer(&DAT_146a9ecb8);
    }
  }
  iVar3 = (**(code **)(*DAT_146a9ecb0 + 0x68))();
  local_20 = 0;
  local_28 = (*(float *)(param_5 + 0x154) - *(float *)(param_5 + 0x158)) * fVar4 *
             (0.5 / *(float *)(param_5 + 0x3b0));
  local_24 = (float)iVar3 / (float)*(uint *)(param_5 + 0x538);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar2,param_1 + 0x120,&local_28,uVar5 & 0xffffffff00000000);
  return;
}



// FUNCTION 141d7ce50 FUN_141d7ce50 body=300 status=ok
// SIG undefined FUN_141d7ce50(void)

void FUN_141d7ce50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 local_18;
  float local_14;
  undefined8 local_10;
  
  uVar4 = param_5;
  FUN_141d7bd70(param_1,param_2,param_3,param_4,param_5);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a9eca8) {
    _Init_thread_header(&DAT_146a9eca8);
    if (DAT_146a9eca8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146a9eca0 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.MaxSoftKernelSize");
      _Init_thread_footer(&DAT_146a9eca8);
    }
  }
  iVar3 = (**(code **)(*DAT_146a9eca0 + 0x68))();
  local_18 = 0;
  local_10 = 0;
  local_14 = (float)iVar3 / (float)*(uint *)(param_5 + 0x538);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar2,param_1 + 0x120,&local_18,uVar4 & 0xffffffff00000000);
  return;
}



// FUNCTION 141d7cf80 FUN_141d7cf80 body=300 status=ok
// SIG undefined FUN_141d7cf80(void)

void FUN_141d7cf80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 local_18;
  float local_14;
  undefined8 local_10;
  
  uVar4 = param_5;
  FUN_141d7bd70(param_1,param_2,param_3,param_4,param_5);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a9ec98) {
    _Init_thread_header(&DAT_146a9ec98);
    if (DAT_146a9ec98 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146a9ec90 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.MaxSoftKernelSize");
      _Init_thread_footer(&DAT_146a9ec98);
    }
  }
  iVar3 = (**(code **)(*DAT_146a9ec90 + 0x68))();
  local_18 = 0;
  local_10 = 0;
  local_14 = (float)iVar3 / (float)*(uint *)(param_5 + 0x538);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar2,param_1 + 0x120,&local_18,uVar4 & 0xffffffff00000000);
  return;
}



// FUNCTION 141d7d0b0 FUN_141d7d0b0 body=405 status=ok
// SIG undefined FUN_141d7d0b0(void)

void FUN_141d7d0b0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint local_res8 [2];
  ulonglong in_stack_ffffffffffffffb8;
  ulonglong uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141aa9800(param_1,param_2,*(undefined8 *)(lVar1 + 0x38),uVar2);
  uVar3 = *(uint *)(param_4 + 0x560) & 0x40;
  if (((uVar3 == 0) || (*(int *)(param_4 + 0x524) < 0)) ||
     ((*(uint *)(param_4 + 0x560) & 0x10) == 0)) {
    if ((uVar3 == 0) ||
       (uVar4 = *(ulonglong *)(param_4 + 0x5c8),
       (*(char *)(*(longlong *)(uVar4 + 0x30) + 0x188) - 1U & 0xfd) != 0)) {
      local_28 = 0;
      uStack_20 = 0x3f80000000000000;
      FStencilingGeometryShaderParameters::Set(param_1 + 0xc0,param_2,param_1,&local_28);
    }
    else {
      FUN_141bbc490(param_1 + 0xc0,param_2,param_1,param_3,uVar4);
      in_stack_ffffffffffffffb8 = uVar4;
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x48);
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    in_stack_ffffffffffffffb8 = in_stack_ffffffffffffffb8 & 0xffffffff00000000;
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,&local_38,
               in_stack_ffffffffffffffb8);
    lVar1 = *(longlong *)(param_1 + 0x48);
    local_28 = 0;
    uStack_20 = 0;
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    in_stack_ffffffffffffffb8 = in_stack_ffffffffffffffb8 & 0xffffffff00000000;
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc6,&local_28,
               in_stack_ffffffffffffffb8);
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  local_res8[0] = *(ushort *)(param_4 + 0x562) & 1;
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_1404986d0(param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xd8,local_res8,
                in_stack_ffffffffffffffb8 & 0xffffffff00000000);
  return;
}



// FUNCTION 141d7d250 FUN_141d7d250 body=150 status=ok
// SIG undefined FUN_141d7d250(void)

void FUN_141d7d250(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141aa9800(param_1,param_2,*(undefined8 *)(lVar1 + 0x38),uVar2);
  lVar1 = *(longlong *)(param_1 + 0x48);
  local_res8[0] = *(ushort *)(param_4 + 0x562) & 1;
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_1404986d0(param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_res8,0);
  return;
}



// FUNCTION 141d7d2f0 CompareDrawingPolicy<1> body=250 status=ok
// SIG undefined CompareDrawingPolicy<1>(void)

undefined8 CompareDrawingPolicy<1>(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(ulonglong *)(param_1 + 0x38) < *(ulonglong *)(param_2 + 0x38)) {
    return 0xffffffff;
  }
  if (*(ulonglong *)(param_1 + 0x38) == *(ulonglong *)(param_2 + 0x38)) {
    if (*(ulonglong *)(param_1 + 0x50) < *(ulonglong *)(param_2 + 0x50)) {
      return 0xffffffff;
    }
    if (*(ulonglong *)(param_1 + 0x50) == *(ulonglong *)(param_2 + 0x50)) {
      if (*(ulonglong *)(param_1 + 0x58) < *(ulonglong *)(param_2 + 0x58)) {
        return 0xffffffff;
      }
      if (*(ulonglong *)(param_1 + 0x58) == *(ulonglong *)(param_2 + 0x58)) {
        if (*(ulonglong *)(param_1 + 0x40) < *(ulonglong *)(param_2 + 0x40)) {
          return 0xffffffff;
        }
        if (*(ulonglong *)(param_1 + 0x40) == *(ulonglong *)(param_2 + 0x40)) {
          if (*(ulonglong *)(param_1 + 0x48) < *(ulonglong *)(param_2 + 0x48)) {
            return 0xffffffff;
          }
          if (*(ulonglong *)(param_1 + 0x48) == *(ulonglong *)(param_2 + 0x48)) {
            if (*(ulonglong *)(param_1 + 8) < *(ulonglong *)(param_2 + 8)) {
              return 0xffffffff;
            }
            if (*(ulonglong *)(param_1 + 8) == *(ulonglong *)(param_2 + 8)) {
              if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_2 + 0x10)) {
                return 0xffffffff;
              }
              if (*(ulonglong *)(param_1 + 0x10) == *(ulonglong *)(param_2 + 0x10)) {
                uVar1 = *(uint *)(param_1 + 100);
                uVar4 = *(uint *)(param_2 + 100);
                if ((uVar1 & 1) < (uVar4 & 1)) {
                  return 0xffffffff;
                }
                if ((uVar1 & 1) == (uVar4 & 1)) {
                  if (*(int *)(param_1 + 0x28) < *(int *)(param_2 + 0x28)) {
                    return 0xffffffff;
                  }
                  if (*(int *)(param_1 + 0x28) <= *(int *)(param_2 + 0x28)) {
                    uVar2 = uVar1 >> 2 & 1;
                    uVar3 = uVar4 >> 2 & 1;
                    if (uVar2 < uVar3) {
                      return 0xffffffff;
                    }
                    if (uVar2 == uVar3) {
                      uVar2 = uVar1 >> 3 & 1;
                      uVar3 = uVar4 >> 3 & 1;
                      if (uVar2 < uVar3) {
                        return 0xffffffff;
                      }
                      if (uVar2 == uVar3) {
                        uVar1 = uVar1 >> 4 & 1;
                        uVar4 = uVar4 >> 4 & 1;
                        if (uVar1 < uVar4) {
                          return 0xffffffff;
                        }
                        if (uVar1 == uVar4) {
                          return 0;
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
    }
  }
  return 1;
}



// FUNCTION 141d7d3f0 FUN_141d7d3f0 body=606 status=ok
// SIG undefined FUN_141d7d3f0(void)

uint FUN_141d7d3f0(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  longlong param_5,longlong param_6,ulonglong param_7,longlong param_8,char *param_9
                  )

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [48];
  
  lVar3 = *(longlong *)(param_5 + 8);
  iVar1 = *(int *)(param_5 + 0x28);
  FUN_141b36960(param_5,param_3,*(undefined8 *)(param_6 + 8),*(undefined1 *)(param_3 + 0x3099));
  if (lVar3 == *(longlong *)(param_5 + 8)) {
    cVar4 = *param_9;
  }
  else {
    *param_9 = '\0';
    cVar4 = '\0';
  }
  iVar2 = *(int *)(param_5 + 0x28);
  uVar7 = 0;
  uVar8 = uVar7;
  if (cVar4 == '\0') {
    if (*(longlong *)(param_8 + 0x90) == 0) {
      puVar5 = (undefined8 *)
               FUN_141d9aaa0(param_8 + 0x20,local_68,*(undefined4 *)(param_3 + 0x1a38));
      local_98 = *puVar5;
      uStack_90 = puVar5[1];
      local_88 = *(undefined4 *)(puVar5 + 2);
      uStack_84 = *(undefined4 *)((longlong)puVar5 + 0x14);
      uStack_80 = *(undefined4 *)(puVar5 + 3);
      uStack_7c = *(undefined4 *)((longlong)puVar5 + 0x1c);
      local_78 = *(undefined4 *)(puVar5 + 4);
      uStack_74 = *(undefined4 *)((longlong)puVar5 + 0x24);
      uStack_70 = *(undefined4 *)(puVar5 + 5);
      uStack_6c = *(undefined4 *)((longlong)puVar5 + 0x2c);
    }
    else {
      local_98 = *(undefined8 *)(param_8 + 0x88);
      uStack_90 = *(undefined8 *)(param_8 + 0x90);
      local_88 = *(undefined4 *)(param_8 + 0x98);
      uStack_84 = *(undefined4 *)(param_8 + 0x9c);
      uStack_80 = *(undefined4 *)(param_8 + 0xa0);
      uStack_7c = *(undefined4 *)(param_8 + 0xa4);
      local_78 = *(undefined4 *)(param_8 + 0xa8);
      uStack_74 = *(undefined4 *)(param_8 + 0xac);
      uStack_70 = *(undefined4 *)(param_8 + 0xb0);
      uStack_6c = *(undefined4 *)(param_8 + 0xb4);
    }
    FUN_141a9adc0(param_2,param_8 + 0x20,param_5,&local_98);
    local_a8 = *param_4;
    uStack_a4 = param_4[1];
    uStack_a0 = param_4[2];
    uStack_9c = param_4[3];
    FShadowDepthDrawingPolicy<1>::SetSharedState(param_8 + 0x20,param_2,param_5,param_3,&local_a8);
    *param_9 = '\x01';
  }
  else if (iVar1 != iVar2) {
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
    *puVar6 = &PTR_LAB_143f489c0;
    *(int *)(puVar6 + 2) = iVar2;
  }
  do {
    if ((param_7 & 1) != 0) {
      uVar8 = uVar8 + 1;
      local_a8 = *param_4;
      uStack_a4 = param_4[1];
      uStack_a0 = param_4[2];
      uStack_9c = param_4[3];
      uVar10 = uVar7;
      FUN_141dacf30(param_8 + 0x20,param_2,param_3,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(param_6 + 8) + 0xc0) + 8),
                    *(longlong *)(param_6 + 8),uVar7,param_5,param_6,&local_a8);
      FUN_141b315b0(param_8 + 0x20,param_2,param_3,*(undefined8 *)(param_6 + 8),uVar7,
                    uVar10 & 0xffffff00);
    }
    uVar7 = uVar7 + 1;
    bVar9 = 1 < param_7;
    param_7 = param_7 >> 1;
  } while (bVar9);
  return uVar8;
}



// FUNCTION 141d7d650 FUN_141d7d650 body=606 status=ok
// SIG undefined FUN_141d7d650(void)

uint FUN_141d7d650(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  longlong param_5,longlong param_6,ulonglong param_7,longlong param_8,char *param_9
                  )

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [48];
  
  lVar3 = *(longlong *)(param_5 + 8);
  iVar1 = *(int *)(param_5 + 0x28);
  FUN_141b36960(param_5,param_3,*(undefined8 *)(param_6 + 8),*(undefined1 *)(param_3 + 0x3099));
  if (lVar3 == *(longlong *)(param_5 + 8)) {
    cVar4 = *param_9;
  }
  else {
    *param_9 = '\0';
    cVar4 = '\0';
  }
  iVar2 = *(int *)(param_5 + 0x28);
  uVar7 = 0;
  uVar8 = uVar7;
  if (cVar4 == '\0') {
    if (*(longlong *)(param_8 + 0x90) == 0) {
      puVar5 = (undefined8 *)
               FUN_141d9aaa0(param_8 + 0x20,local_68,*(undefined4 *)(param_3 + 0x1a38));
      local_98 = *puVar5;
      uStack_90 = puVar5[1];
      local_88 = *(undefined4 *)(puVar5 + 2);
      uStack_84 = *(undefined4 *)((longlong)puVar5 + 0x14);
      uStack_80 = *(undefined4 *)(puVar5 + 3);
      uStack_7c = *(undefined4 *)((longlong)puVar5 + 0x1c);
      local_78 = *(undefined4 *)(puVar5 + 4);
      uStack_74 = *(undefined4 *)((longlong)puVar5 + 0x24);
      uStack_70 = *(undefined4 *)(puVar5 + 5);
      uStack_6c = *(undefined4 *)((longlong)puVar5 + 0x2c);
    }
    else {
      local_98 = *(undefined8 *)(param_8 + 0x88);
      uStack_90 = *(undefined8 *)(param_8 + 0x90);
      local_88 = *(undefined4 *)(param_8 + 0x98);
      uStack_84 = *(undefined4 *)(param_8 + 0x9c);
      uStack_80 = *(undefined4 *)(param_8 + 0xa0);
      uStack_7c = *(undefined4 *)(param_8 + 0xa4);
      local_78 = *(undefined4 *)(param_8 + 0xa8);
      uStack_74 = *(undefined4 *)(param_8 + 0xac);
      uStack_70 = *(undefined4 *)(param_8 + 0xb0);
      uStack_6c = *(undefined4 *)(param_8 + 0xb4);
    }
    FUN_141a9adc0(param_2,param_8 + 0x20,param_5,&local_98);
    local_a8 = *param_4;
    uStack_a4 = param_4[1];
    uStack_a0 = param_4[2];
    uStack_9c = param_4[3];
    FUN_141daef50(param_8 + 0x20,param_2,param_5,param_3,&local_a8);
    *param_9 = '\x01';
  }
  else if (iVar1 != iVar2) {
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
    *puVar6 = &PTR_LAB_143f489c0;
    *(int *)(puVar6 + 2) = iVar2;
  }
  do {
    if ((param_7 & 1) != 0) {
      uVar8 = uVar8 + 1;
      local_a8 = *param_4;
      uStack_a4 = param_4[1];
      uStack_a0 = param_4[2];
      uStack_9c = param_4[3];
      uVar10 = uVar7;
      FUN_141dacf30(param_8 + 0x20,param_2,param_3,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(param_6 + 8) + 0xc0) + 8),
                    *(longlong *)(param_6 + 8),uVar7,param_5,param_6,&local_a8);
      FUN_141b315b0(param_8 + 0x20,param_2,param_3,*(undefined8 *)(param_6 + 8),uVar7,
                    uVar10 & 0xffffff00);
    }
    uVar7 = uVar7 + 1;
    bVar9 = 1 < param_7;
    param_7 = param_7 >> 1;
  } while (bVar9);
  return uVar8;
}



// FUNCTION 141d7d8b0 FUN_141d7d8b0 body=753 status=ok
// SIG undefined FUN_141d7d8b0(void)

int FUN_141d7d8b0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong *param_4,
                 longlong param_5,longlong param_6,ulonglong param_7,longlong param_8,char *param_9)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  undefined1 local_68 [48];
  
  lVar2 = param_6;
  lVar8 = *(longlong *)(param_5 + 8);
  iVar7 = *(int *)(param_5 + 0x28);
  FUN_141b36960(param_5,param_3,*(undefined8 *)(param_6 + 8),*(undefined1 *)(param_3 + 0x3099));
  if (lVar8 == *(longlong *)(param_5 + 8)) {
    cVar3 = *param_9;
  }
  else {
    *param_9 = '\0';
    cVar3 = '\0';
  }
  iVar9 = *(int *)(param_5 + 0x28);
  if (cVar3 == '\0') {
    if (*(longlong *)(param_8 + 0x90) == 0) {
      puVar4 = (undefined8 *)
               FUN_141d9aaa0(param_8 + 0x20,local_68,*(undefined4 *)(param_3 + 0x1a38));
      local_a8 = *puVar4;
      uStack_a0 = puVar4[1];
      local_98 = *(undefined4 *)(puVar4 + 2);
      uStack_94 = *(undefined4 *)((longlong)puVar4 + 0x14);
      uStack_90 = *(undefined4 *)(puVar4 + 3);
      uStack_8c = *(undefined4 *)((longlong)puVar4 + 0x1c);
      local_88 = *(undefined4 *)(puVar4 + 4);
      uStack_84 = *(undefined4 *)((longlong)puVar4 + 0x24);
      uStack_80 = *(undefined4 *)(puVar4 + 5);
      uStack_7c = *(undefined4 *)((longlong)puVar4 + 0x2c);
    }
    else {
      local_a8 = *(undefined8 *)(param_8 + 0x88);
      uStack_a0 = *(undefined8 *)(param_8 + 0x90);
      local_98 = *(undefined4 *)(param_8 + 0x98);
      uStack_94 = *(undefined4 *)(param_8 + 0x9c);
      uStack_90 = *(undefined4 *)(param_8 + 0xa0);
      uStack_8c = *(undefined4 *)(param_8 + 0xa4);
      local_88 = *(undefined4 *)(param_8 + 0xa8);
      uStack_84 = *(undefined4 *)(param_8 + 0xac);
      uStack_80 = *(undefined4 *)(param_8 + 0xb0);
      uStack_7c = *(undefined4 *)(param_8 + 0xb4);
    }
    FUN_141a9adc0(param_2,param_8 + 0x20,param_5,&local_a8);
    local_b8 = *param_4;
    uStack_b0 = (undefined4)param_4[1];
    uStack_ac = *(undefined4 *)((longlong)param_4 + 0xc);
    FShadowDepthDrawingPolicy<1>::SetSharedState(param_8 + 0x20,param_2,param_5,param_3,&local_b8);
    *param_9 = '\x01';
  }
  else if (iVar7 != iVar9) {
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f489c0;
    *(int *)(puVar5 + 2) = iVar9;
  }
  iVar9 = 0;
  iVar7 = 0;
  param_6 = 0;
  do {
    local_b8 = param_7;
    if ((param_7 & 1) != 0) {
      lVar8 = *(longlong *)(lVar2 + 8);
      uVar1 = *(undefined8 *)(*(longlong *)(lVar8 + 0xc0) + 8);
      lVar6 = *(longlong *)(lVar8 + 0x78);
      if (*(longlong *)(lVar8 + 0x78) == 0) {
        lVar6 = lVar8;
      }
      cVar3 = *(char *)(lVar6 + 0x67 + param_6);
      lVar8 = (ulonglong)(cVar3 != '\0') + 1;
      iVar9 = iVar9 + (cVar3 != '\0') + 1;
      do {
        local_78 = (undefined4)*param_4;
        uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
        uStack_70 = (undefined4)param_4[1];
        uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
        FUN_141dacf30(param_8 + 0x20,param_2,param_3,uVar1,*(undefined8 *)(lVar2 + 8),iVar7,param_5,
                      lVar2,&local_78);
        FUN_141b315b0(param_8 + 0x20,param_2,param_3,*(undefined8 *)(lVar2 + 8),iVar7,1);
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    param_6 = param_6 + 0x78;
    param_7 = param_7 >> 1;
    iVar7 = iVar7 + 1;
  } while (1 < local_b8);
  return iVar9;
}



// FUNCTION 141d7dbb0 FUN_141d7dbb0 body=753 status=ok
// SIG undefined FUN_141d7dbb0(void)

int FUN_141d7dbb0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong *param_4,
                 longlong param_5,longlong param_6,ulonglong param_7,longlong param_8,char *param_9)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  undefined1 local_68 [48];
  
  lVar2 = param_6;
  lVar8 = *(longlong *)(param_5 + 8);
  iVar7 = *(int *)(param_5 + 0x28);
  FUN_141b36960(param_5,param_3,*(undefined8 *)(param_6 + 8),*(undefined1 *)(param_3 + 0x3099));
  if (lVar8 == *(longlong *)(param_5 + 8)) {
    cVar3 = *param_9;
  }
  else {
    *param_9 = '\0';
    cVar3 = '\0';
  }
  iVar9 = *(int *)(param_5 + 0x28);
  if (cVar3 == '\0') {
    if (*(longlong *)(param_8 + 0x90) == 0) {
      puVar4 = (undefined8 *)
               FUN_141d9aaa0(param_8 + 0x20,local_68,*(undefined4 *)(param_3 + 0x1a38));
      local_a8 = *puVar4;
      uStack_a0 = puVar4[1];
      local_98 = *(undefined4 *)(puVar4 + 2);
      uStack_94 = *(undefined4 *)((longlong)puVar4 + 0x14);
      uStack_90 = *(undefined4 *)(puVar4 + 3);
      uStack_8c = *(undefined4 *)((longlong)puVar4 + 0x1c);
      local_88 = *(undefined4 *)(puVar4 + 4);
      uStack_84 = *(undefined4 *)((longlong)puVar4 + 0x24);
      uStack_80 = *(undefined4 *)(puVar4 + 5);
      uStack_7c = *(undefined4 *)((longlong)puVar4 + 0x2c);
    }
    else {
      local_a8 = *(undefined8 *)(param_8 + 0x88);
      uStack_a0 = *(undefined8 *)(param_8 + 0x90);
      local_98 = *(undefined4 *)(param_8 + 0x98);
      uStack_94 = *(undefined4 *)(param_8 + 0x9c);
      uStack_90 = *(undefined4 *)(param_8 + 0xa0);
      uStack_8c = *(undefined4 *)(param_8 + 0xa4);
      local_88 = *(undefined4 *)(param_8 + 0xa8);
      uStack_84 = *(undefined4 *)(param_8 + 0xac);
      uStack_80 = *(undefined4 *)(param_8 + 0xb0);
      uStack_7c = *(undefined4 *)(param_8 + 0xb4);
    }
    FUN_141a9adc0(param_2,param_8 + 0x20,param_5,&local_a8);
    local_b8 = *param_4;
    uStack_b0 = (undefined4)param_4[1];
    uStack_ac = *(undefined4 *)((longlong)param_4 + 0xc);
    FUN_141daef50(param_8 + 0x20,param_2,param_5,param_3,&local_b8);
    *param_9 = '\x01';
  }
  else if (iVar7 != iVar9) {
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f489c0;
    *(int *)(puVar5 + 2) = iVar9;
  }
  iVar9 = 0;
  iVar7 = 0;
  param_6 = 0;
  do {
    local_b8 = param_7;
    if ((param_7 & 1) != 0) {
      lVar8 = *(longlong *)(lVar2 + 8);
      uVar1 = *(undefined8 *)(*(longlong *)(lVar8 + 0xc0) + 8);
      lVar6 = *(longlong *)(lVar8 + 0x78);
      if (*(longlong *)(lVar8 + 0x78) == 0) {
        lVar6 = lVar8;
      }
      cVar3 = *(char *)(lVar6 + 0x67 + param_6);
      lVar8 = (ulonglong)(cVar3 != '\0') + 1;
      iVar9 = iVar9 + (cVar3 != '\0') + 1;
      do {
        local_78 = (undefined4)*param_4;
        uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
        uStack_70 = (undefined4)param_4[1];
        uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
        FUN_141dacf30(param_8 + 0x20,param_2,param_3,uVar1,*(undefined8 *)(lVar2 + 8),iVar7,param_5,
                      lVar2,&local_78);
        FUN_141b315b0(param_8 + 0x20,param_2,param_3,*(undefined8 *)(lVar2 + 8),iVar7,1);
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    param_6 = param_6 + 0x78;
    param_7 = param_7 >> 1;
    iVar7 = iVar7 + 1;
  } while (1 < local_b8);
  return iVar9;
}



// FUNCTION 141d7deb0 FUN_141d7deb0 body=815 status=ok
// SIG undefined FUN_141d7deb0(void)

void FUN_141d7deb0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,longlong param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  
  local_68 = *param_6;
  local_60 = param_6[1];
  local_58 = *(undefined4 *)(param_6 + 2);
  local_50 = param_6[3];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_48 = param_6[4];
  local_38 = *(undefined4 *)(param_6 + 6);
  local_40 = *(undefined4 *)(param_6 + 5);
  local_3c = *(undefined4 *)((longlong)param_6 + 0x2c);
  local_34 = 0;
  FUN_141b36960(&local_68,param_4,param_7,0);
  if ((*(uint *)(param_7 + 0x8c) & 0x2000000) == 0) {
    uVar4 = (1L << ((byte)*(undefined4 *)(param_7 + 0x80) & 0x3f)) - 1;
  }
  else {
    uVar4 = *(ulonglong *)(*(longlong *)(param_4 + 0x1c50) + (longlong)*(int *)(param_7 + 0xcc) * 8)
    ;
  }
  iVar5 = 0;
  do {
    if ((uVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_5 + 8);
      uVar13 = *(ulonglong *)(*(longlong *)(param_7 + 0xc0) + 8);
      lVar6 = *(longlong *)(param_7 + 0x78);
      if (*(longlong *)(param_7 + 0x78) == 0) {
        lVar6 = param_7;
      }
      uVar7 = lVar6 + (longlong)iVar5 * 0x78;
      uVar9 = uVar13;
      uVar12 = uVar7;
      FUN_141daccc0(*(undefined8 *)(param_2 + 0x38),param_1,*(undefined8 *)(param_2 + 8),param_4,
                    uVar13,uVar7,&local_68,uVar3);
      uVar11 = (undefined4)(uVar9 >> 0x20);
      lVar6 = *(longlong *)(param_2 + 0x50);
      if ((lVar6 != 0) && (*(longlong *)(param_2 + 0x58) != 0)) {
        lVar1 = *(longlong *)(lVar6 + 0x48);
        uVar2 = *(undefined8 *)(param_2 + 8);
        if (*(char *)(lVar1 + 0x28) == '\0') {
          FUN_1419f3850(lVar1);
        }
        FUN_141d84710(lVar6,param_1,*(undefined8 *)(lVar1 + 0x48),uVar2,param_4,uVar13,uVar7,
                      &local_68,0);
        uVar2 = *(undefined8 *)(param_2 + 8);
        lVar6 = *(longlong *)(param_2 + 0x58);
        lVar1 = *(longlong *)(lVar6 + 0x48);
        if (*(char *)(lVar1 + 0x28) == '\0') {
          FUN_1419f3850(lVar1);
        }
        lVar10 = param_4;
        uVar12 = uVar13;
        FUN_141d83e90(lVar6,param_1,*(undefined8 *)(lVar1 + 0x50),uVar2,param_4,uVar13,uVar7,
                      &local_68,0);
        uVar11 = (undefined4)((ulonglong)lVar10 >> 0x20);
      }
      if (*(longlong *)(param_2 + 0x40) != 0) {
        lVar6 = param_4;
        FUN_141dacaa0(*(longlong *)(param_2 + 0x40),param_1,uVar13,uVar3,param_4);
        uVar11 = (undefined4)((ulonglong)lVar6 >> 0x20);
      }
      lVar6 = *(longlong *)(param_2 + 0x48);
      if (lVar6 != 0) {
        lVar1 = *(longlong *)(lVar6 + 0x48);
        uVar3 = *(undefined8 *)(param_2 + 8);
        if (*(char *)(lVar1 + 0x28) == '\0') {
          FUN_1419f3850(lVar1);
        }
        lVar10 = param_4;
        FUN_141d84bb0(lVar6,param_1,*(undefined8 *)(lVar1 + 0x40),uVar3,param_4,uVar13,uVar7,
                      &local_68,0);
        uVar11 = (undefined4)((ulonglong)lVar10 >> 0x20);
        uVar12 = uVar13;
      }
      FUN_141b315b0(param_2,param_1,param_4,param_7,CONCAT44(uVar11,iVar5),
                    uVar12 & 0xffffffffffffff00);
    }
    iVar5 = iVar5 + 1;
    bVar8 = 1 < uVar4;
    uVar4 = uVar4 >> 1;
  } while (bVar8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_50);
  return;
}



// FUNCTION 141d7e1e0 FUN_141d7e1e0 body=1102 status=ok
// SIG undefined FUN_141d7e1e0(void)

void FUN_141d7e1e0(undefined8 param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong local_res18 [2];
  ulonglong uVar13;
  ulonglong in_stack_fffffffffffffe60;
  undefined8 *puVar14;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  longlong local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154;
  longlong local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  longlong local_140;
  uint uStack_138;
  undefined4 uStack_134;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  int local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  int local_c8;
  uint local_c4;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined7 uStack_97;
  ulonglong uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined1 local_78 [64];
  
  iVar1 = *(int *)(param_2 + 0x1a38);
  local_98 = 0;
  uVar2 = *(uint *)(param_4 + 0x560);
  puVar14 = (undefined8 *)(in_stack_fffffffffffffe60 & 0xffffffff00000000);
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_4 + 0x678) + 0x10) + 0x8c);
  local_res18[0] =
       CONCAT44(uVar7 >> 0xc,
                ((uVar7 >> 0x13 & 0x80 | uVar7 & 0x100) >> 2 | uVar7 & 0x10) >> 4 | uVar7 & 8) &
       0x3fffffffff;
  uStack_90 = param_4;
  FUN_141b279e0(local_128,0,0,*(undefined8 *)(*(longlong *)(param_4 + 0x678) + 8),local_res18,
                puVar14);
  local_e8 = 0;
  uVar7 = uVar2 >> 5 & 1;
  local_c4 = ((uVar2 >> 0xb & 1) << 2 | uVar7) << 2 | uVar2 >> 4 & 1 | local_c4 & 0xffffffe8;
  local_c8 = iVar1;
  if (uVar7 != 0) {
    uVar2 = (&DAT_1464c9c48)[iVar1];
    iVar8 = FUN_1419ef5f0(uVar2);
    if ((iVar8 < 2) || ((uVar2 < 0x1e && ((0x28e71800U >> (uVar2 & 0x1f) & 1) != 0)))) {
      local_fc = 6;
      goto LAB_141d7e31c;
    }
  }
  local_fc = 1;
LAB_141d7e31c:
  uVar6 = uStack_90;
  local_188 = *param_3;
  local_180 = param_3[1];
  local_178 = *(undefined4 *)(param_3 + 2);
  local_170 = param_3[3];
  local_150 = 0;
  local_140 = 0;
  uStack_138 = uStack_138 & 0xffffff00;
  if (local_170 != 0) {
    LOCK();
    *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
    UNLOCK();
  }
  local_168 = param_3[4];
  local_158 = *(undefined4 *)(param_3 + 6);
  uVar2 = *(uint *)(param_4 + 0x680);
  local_160 = *(undefined4 *)(param_3 + 5);
  local_15c = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar7 = 0;
  local_154 = 0;
  if (uVar2 != 0) {
    uVar5 = CONCAT71(uStack_97,local_98);
    do {
      plVar12 = (longlong *)((longlong)(int)uVar7 * 0x20 + *(longlong *)(param_4 + 0x678));
      lVar11 = *(longlong *)(param_2 + 0x1bb0);
      if (*(longlong *)(param_2 + 0x1bb0) == 0) {
        lVar11 = param_2 + 0x1ba0;
      }
      lVar4 = plVar12[2];
      uVar3 = *(uint *)(lVar4 + 200);
      uVar9 = uVar3;
      if ((int)uVar3 < 0) {
        uVar9 = uVar3 + 0x1f;
      }
      if ((*(uint *)(lVar11 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
        uStack_b0 = plVar12[1];
        local_b8 = *plVar12;
        uStack_a0 = CONCAT31(uStack_a0._1_3_,(char)plVar12[3]);
        local_a8 = lVar4;
        if ((((local_150 != local_b8) || ((char)uStack_138 != (char)plVar12[3])) ||
            (*(longlong *)(local_140 + 0xa0) != *(longlong *)(lVar4 + 0xa0))) ||
           (((*(uint *)(lVar4 + 0x8c) ^ *(uint *)(local_140 + 0x8c)) & 8) != 0)) {
          uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
          uStack_148 = (undefined4)uStack_b0;
          uStack_144 = uStack_b0._4_4_;
          uStack_138 = uStack_a0;
          uStack_134 = uStack_9c;
          local_150 = local_b8;
          local_140 = lVar4;
          FUN_141db3f50(local_128,&local_b8,iVar1);
          local_158 = *(undefined4 *)(plVar12[2] + 0x90);
          FUN_141daf2c0(&local_188,param_2,*(undefined4 *)(param_2 + 0x1a38),local_104 == 0,1,
                        CONCAT71((int7)((ulonglong)puVar14 >> 8),
                                 (char)(*(uint *)(param_4 + 0x560) >> 5)) & 0xffffffffffffff01);
          uVar10 = FUN_141d9aaa0(local_128,local_78,*(undefined4 *)(param_2 + 0x1a38));
          FUN_141a9adc0(param_1,local_128,&local_188,uVar10);
          uVar13 = param_2;
          FUN_141dae960(local_f0,param_1,local_118,local_110,param_2,param_4,&local_188);
          if (local_e8 != 0) {
            FUN_141dadcb0(local_e8,param_1,param_2,param_4);
          }
          if ((local_d8 != 0) && (local_d0 != 0)) {
            FUN_141ad6a40(local_d8,param_1,local_118,param_2,&local_170,local_168);
            uVar13 = param_4;
            FUN_141dae470(local_d0,param_1,local_118,param_2,param_4,&local_188);
          }
          if (local_e0 != 0) {
            uVar13 = param_2;
            FUN_141dad690(local_e0,param_1,local_118,local_110,param_2,param_4,&local_188);
          }
          if ((local_c4 & 8) == 0) {
            FUN_141b45c10(local_128,param_1,&local_188,param_2,uVar13 & 0xffffffffffffff00);
          }
          else {
            FUN_141a0cf10(local_120);
          }
        }
        puVar14 = &local_188;
        uStack_80 = uVar6;
        local_88 = uVar5;
        FUN_141d7deb0(param_1,local_128,&local_150,param_2,&local_88,puVar14,plVar12[2]);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_170);
  return;
}



// FUNCTION 141d7e630 FUN_141d7e630 body=933 status=ok
// SIG undefined FUN_141d7e630(void)

void FUN_141d7e630(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong local_res18;
  longlong local_res20;
  ulonglong *puVar16;
  ulonglong in_stack_fffffffffffffe40;
  undefined8 *puVar17;
  longlong local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198;
  uint uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  longlong local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154;
  longlong local_150;
  undefined8 uStack_148;
  longlong local_140;
  uint uStack_138;
  undefined4 uStack_134;
  undefined1 local_128;
  undefined7 uStack_127;
  longlong lStack_120;
  ulonglong local_118;
  longlong lStack_110;
  ulonglong local_108;
  longlong lStack_100;
  undefined1 local_f8 [36];
  int local_d4;
  undefined4 local_cc;
  undefined8 local_b8;
  int local_98;
  uint local_94;
  undefined1 local_88 [72];
  
  iVar2 = *(int *)(param_2 + 0x1a38);
  local_128 = 0;
  uVar3 = *(uint *)(param_4 + 0x560);
  puVar17 = (undefined8 *)(in_stack_fffffffffffffe40 & 0xffffffff00000000);
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_4 + 0x678) + 0x10) + 0x8c);
  local_res18 = CONCAT44(uVar8 >> 0xc,
                         ((uVar8 >> 0x13 & 0x80 | uVar8 & 0x100) >> 2 | uVar8 & 0x10) >> 4 |
                         uVar8 & 8) & 0x3fffffffff;
  puVar16 = &local_res18;
  local_res20 = param_4;
  lStack_120 = param_4;
  FUN_141b279e0(local_f8,0,0,*(undefined8 *)(*(longlong *)(param_4 + 0x678) + 8),puVar16,puVar17);
  local_b8 = 0;
  uVar8 = uVar3 >> 5 & 1;
  local_94 = ((uVar3 >> 0xb & 1) << 2 | uVar8) << 2 | uVar3 >> 4 & 1 | local_94 & 0xffffffe8;
  local_98 = iVar2;
  if (uVar8 != 0) {
    uVar3 = (&DAT_1464c9c48)[iVar2];
    iVar9 = FUN_1419ef5f0(uVar3);
    if ((iVar9 < 2) || ((uVar3 < 0x1e && ((0x28e71800U >> (uVar3 & 0x1f) & 1) != 0)))) {
      local_cc = 6;
      goto LAB_141d7e76c;
    }
  }
  local_cc = 1;
LAB_141d7e76c:
  lVar7 = lStack_120;
  local_188 = *param_3;
  local_180 = param_3[1];
  local_178 = *(undefined4 *)(param_3 + 2);
  local_170 = param_3[3];
  local_1a8 = 0;
  local_198 = 0;
  uStack_190 = uStack_190 & 0xffffff00;
  if (local_170 != 0) {
    LOCK();
    *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
    UNLOCK();
  }
  lVar15 = 0;
  local_168 = param_3[4];
  local_158 = *(undefined4 *)(param_3 + 6);
  local_160 = *(undefined4 *)(param_3 + 5);
  local_154 = 0;
  uVar3 = *(uint *)(param_4 + 0x680);
  uVar8 = 0;
  local_15c = *(undefined4 *)((longlong)param_3 + 0x2c);
  if (uVar3 != 0) {
    uVar6 = CONCAT71(uStack_127,local_128);
    do {
      lVar13 = (longlong)(int)uVar8 * 0x20;
      lVar5 = *(longlong *)(local_res20 + 0x678);
      lVar12 = *(longlong *)(lVar13 + 0x10 + lVar5);
      lVar14 = *(longlong *)(param_2 + 0x1bb0);
      if (*(longlong *)(param_2 + 0x1bb0) == 0) {
        lVar14 = param_2 + 0x1ba0;
      }
      uVar4 = *(uint *)(lVar12 + 200);
      uVar10 = uVar4;
      if ((int)uVar4 < 0) {
        uVar10 = uVar4 + 0x1f;
      }
      if ((*(uint *)(lVar14 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
        uStack_148 = *(undefined8 *)(lVar13 + 8 + lVar5);
        local_150 = *(longlong *)(lVar13 + lVar5);
        cVar1 = *(char *)(lVar13 + 0x18 + lVar5);
        uStack_138 = CONCAT31(uStack_138._1_3_,cVar1);
        local_140 = lVar12;
        if ((((local_1a8 != local_150) || ((char)uStack_190 != cVar1)) ||
            (*(longlong *)(lVar15 + 0xa0) != *(longlong *)(lVar12 + 0xa0))) ||
           (((*(uint *)(lVar12 + 0x8c) ^ *(uint *)(lVar15 + 0x8c)) & 8) != 0)) {
          uStack_148._4_4_ = (undefined4)((ulonglong)uStack_148 >> 0x20);
          uStack_1a0 = (undefined4)uStack_148;
          uStack_19c = uStack_148._4_4_;
          uStack_190 = uStack_138;
          uStack_18c = uStack_134;
          local_1a8 = local_150;
          local_198 = lVar12;
          FUN_141db4140(local_f8,&local_150,iVar2);
          local_158 = *(undefined4 *)(*(longlong *)(lVar13 + 0x10 + lVar5) + 0x90);
          FUN_141daf2c0(&local_188,param_2,*(undefined4 *)(param_2 + 0x1a38),local_d4 == 0,
                        (ulonglong)puVar16 & 0xffffffffffffff00,
                        CONCAT71((int7)((ulonglong)puVar17 >> 8),
                                 (char)(*(uint *)(local_res20 + 0x560) >> 5)) & 0xffffffffffffff01);
          uVar11 = FUN_141d9aaa0(local_f8,local_88,*(undefined4 *)(param_2 + 0x1a38));
          FUN_141a9adc0(param_1,local_f8,&local_188,uVar11);
          lStack_110 = lVar7;
          local_118 = uVar6;
          FUN_141daef50(local_f8,param_1,&local_188,param_2,&local_118);
          lVar12 = *(longlong *)(lVar13 + 0x10 + lVar5);
          lVar15 = local_198;
        }
        puVar17 = &local_188;
        puVar16 = &local_108;
        lStack_100 = lVar7;
        local_108 = uVar6;
        FUN_141d7deb0(param_1,local_f8,&local_1a8,param_2,puVar16,puVar17,lVar12);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar3);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_170);
  return;
}



// FUNCTION 141d7e9e0 FUN_141d7e9e0 body=599 status=ok
// SIG undefined FUN_141d7e9e0(void)

char FUN_141d7e9e0(longlong param_1,undefined *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6,longlong *param_7,undefined8 param_8,
                  uint param_9,int param_10,char param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  int iVar9;
  char local_58;
  uint local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar6 = (longlong)(int)param_9;
  cVar7 = '\0';
  local_58 = '\0';
  lVar5 = (longlong)param_10;
  local_54 = 0;
  if (lVar6 <= lVar5) {
    do {
      param_9 = param_9 & 0xffffff00;
      puVar8 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar6 * 4) * 0xe8 +
               *(longlong *)(param_1 + 0x40));
      puVar4 = (uint *)*puVar8;
      lVar3 = (longlong)*(int *)(puVar8 + 3);
      iVar9 = 0;
      if (0 < lVar3) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(param_6 + 0x10);
          if (*(longlong *)(param_6 + 0x10) == 0) {
            lVar2 = param_6;
          }
          if ((*(uint *)(lVar2 + ((longlong)(int)*puVar4 >> 5) * 4) >> (*puVar4 & 0x1f) & 1) != 0) {
            lVar2 = *(longlong *)(puVar8[2] + lVar5 + 8);
            if ((*(uint *)(lVar2 + 0x8c) & 0x2000000) == 0) {
              lVar2 = (1L << ((byte)*(undefined4 *)(lVar2 + 0x80) & 0x3f)) + -1;
            }
            else {
              lVar2 = *(longlong *)(*param_7 + (longlong)*(int *)(lVar2 + 0xcc) * 8);
            }
            local_48 = *param_4;
            uStack_44 = param_4[1];
            uStack_40 = param_4[2];
            uStack_3c = param_4[3];
            iVar1 = FUN_141d7d3f0(param_1,param_2,param_3,&local_48,param_5,puVar8[2] + lVar5,lVar2,
                                  puVar8,&param_9);
            iVar9 = iVar9 + iVar1;
            local_54 = local_54 + 1;
            if (((((local_54 & 0xf) == 0) && (param_2 == &DAT_146ab6e78)) && (DAT_146ab6e8c != 0))
               && ((DAT_146ab62e7 != '\0' && (DAT_146ab6383 != '\0')))) {
              FRHICommandListBase::MaybeDispatchToRHIThreadInner(&DAT_146ab6e78);
            }
          }
          lVar5 = lVar5 + 0x38;
          puVar4 = puVar4 + 1;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        lVar5 = (longlong)param_10;
      }
      if ((local_58 != '\0') || (cVar7 = local_58, iVar9 != 0)) {
        cVar7 = '\x01';
      }
      if (param_11 != '\0') {
        *(int *)(puVar8 + 0x1b) = iVar9;
      }
      lVar6 = lVar6 + 1;
      local_58 = cVar7;
    } while (lVar6 <= lVar5);
  }
  return cVar7;
}



// FUNCTION 141d7ec40 FUN_141d7ec40 body=599 status=ok
// SIG undefined FUN_141d7ec40(void)

char FUN_141d7ec40(longlong param_1,undefined *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6,longlong *param_7,undefined8 param_8,
                  uint param_9,int param_10,char param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  int iVar9;
  char local_58;
  uint local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar6 = (longlong)(int)param_9;
  cVar7 = '\0';
  local_58 = '\0';
  lVar5 = (longlong)param_10;
  local_54 = 0;
  if (lVar6 <= lVar5) {
    do {
      param_9 = param_9 & 0xffffff00;
      puVar8 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar6 * 4) * 0xe8 +
               *(longlong *)(param_1 + 0x40));
      puVar4 = (uint *)*puVar8;
      lVar3 = (longlong)*(int *)(puVar8 + 3);
      iVar9 = 0;
      if (0 < lVar3) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(param_6 + 0x10);
          if (*(longlong *)(param_6 + 0x10) == 0) {
            lVar2 = param_6;
          }
          if ((*(uint *)(lVar2 + ((longlong)(int)*puVar4 >> 5) * 4) >> (*puVar4 & 0x1f) & 1) != 0) {
            lVar2 = *(longlong *)(puVar8[2] + lVar5 + 8);
            if ((*(uint *)(lVar2 + 0x8c) & 0x2000000) == 0) {
              lVar2 = (1L << ((byte)*(undefined4 *)(lVar2 + 0x80) & 0x3f)) + -1;
            }
            else {
              lVar2 = *(longlong *)(*param_7 + (longlong)*(int *)(lVar2 + 0xcc) * 8);
            }
            local_48 = *param_4;
            uStack_44 = param_4[1];
            uStack_40 = param_4[2];
            uStack_3c = param_4[3];
            iVar1 = FUN_141d7d650(param_1,param_2,param_3,&local_48,param_5,puVar8[2] + lVar5,lVar2,
                                  puVar8,&param_9);
            iVar9 = iVar9 + iVar1;
            local_54 = local_54 + 1;
            if (((((local_54 & 0xf) == 0) && (param_2 == &DAT_146ab6e78)) && (DAT_146ab6e8c != 0))
               && ((DAT_146ab62e7 != '\0' && (DAT_146ab6383 != '\0')))) {
              FRHICommandListBase::MaybeDispatchToRHIThreadInner(&DAT_146ab6e78);
            }
          }
          lVar5 = lVar5 + 0x38;
          puVar4 = puVar4 + 1;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        lVar5 = (longlong)param_10;
      }
      if ((local_58 != '\0') || (cVar7 = local_58, iVar9 != 0)) {
        cVar7 = '\x01';
      }
      if (param_11 != '\0') {
        *(int *)(puVar8 + 0x1b) = iVar9;
      }
      lVar6 = lVar6 + 1;
      local_58 = cVar7;
    } while (lVar6 <= lVar5);
  }
  return cVar7;
}



// FUNCTION 141d7eea0 FUN_141d7eea0 body=630 status=ok
// SIG undefined FUN_141d7eea0(void)

char FUN_141d7eea0(longlong param_1,undefined *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                  uint param_9,int param_10,char param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 *puVar12;
  char local_58;
  uint local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar10 = (longlong)(int)param_9;
  lVar7 = (longlong)param_10;
  cVar4 = '\0';
  local_58 = '\0';
  local_54 = 0;
  if (lVar10 <= lVar7) {
    do {
      param_9 = param_9 & 0xffffff00;
      puVar12 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar10 * 4) * 0xe8 +
                *(longlong *)(param_1 + 0x40));
      piVar11 = (int *)*puVar12;
      lVar6 = (longlong)*(int *)(puVar12 + 3);
      iVar9 = 0;
      if (0 < lVar6) {
        lVar7 = 0;
        do {
          uVar8 = 1 << ((byte)*piVar11 & 0x1f);
          lVar3 = ((longlong)*piVar11 >> 5) * 4;
          lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x10) + 0x10);
          if (lVar2 == 0) {
            lVar2 = *(longlong *)(param_8 + 0x10);
          }
          if ((*(uint *)(lVar2 + lVar3) & uVar8) == 0) {
            lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x18) + 0x10);
            if (lVar2 == 0) {
              lVar2 = *(longlong *)(param_8 + 0x18);
            }
            if ((*(uint *)(lVar2 + lVar3) & uVar8) != 0) {
              plVar5 = *(longlong **)(param_8 + 0x28);
              goto LAB_141d7efb2;
            }
          }
          else {
            plVar5 = *(longlong **)(param_8 + 0x20);
LAB_141d7efb2:
            if (plVar5 != (longlong *)0x0) {
              lVar3 = *(longlong *)(puVar12[2] + lVar7 + 8);
              if ((*(uint *)(lVar3 + 0x8c) & 0x2000000) == 0) {
                lVar3 = (1L << ((byte)*(undefined4 *)(lVar3 + 0x80) & 0x3f)) + -1;
              }
              else {
                lVar3 = *(longlong *)(*plVar5 + (longlong)*(int *)(lVar3 + 0xcc) * 8);
              }
              local_48 = *param_4;
              uStack_44 = param_4[1];
              uStack_40 = param_4[2];
              uStack_3c = param_4[3];
              iVar1 = FUN_141d7d8b0(param_1,param_2,param_3,&local_48,param_5,puVar12[2] + lVar7,
                                    lVar3,puVar12,&param_9);
              iVar9 = iVar9 + iVar1;
              local_54 = local_54 + 1;
              if (((((local_54 & 0xf) == 0) && (param_2 == &DAT_146ab6e78)) && (DAT_146ab6e8c != 0))
                 && ((DAT_146ab62e7 != '\0' && (DAT_146ab6383 != '\0')))) {
                FRHICommandListBase::MaybeDispatchToRHIThreadInner(&DAT_146ab6e78);
              }
            }
          }
          lVar7 = lVar7 + 0x38;
          piVar11 = piVar11 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        lVar7 = (longlong)param_10;
      }
      if ((local_58 != '\0') || (cVar4 = local_58, iVar9 != 0)) {
        cVar4 = '\x01';
      }
      if (param_11 != '\0') {
        *(int *)(puVar12 + 0x1b) = iVar9;
      }
      lVar10 = lVar10 + 1;
      local_58 = cVar4;
    } while (lVar10 <= lVar7);
  }
  return cVar4;
}



// FUNCTION 141d7f120 FUN_141d7f120 body=630 status=ok
// SIG undefined FUN_141d7f120(void)

char FUN_141d7f120(longlong param_1,undefined *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                  uint param_9,int param_10,char param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 *puVar12;
  char local_58;
  uint local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar10 = (longlong)(int)param_9;
  lVar7 = (longlong)param_10;
  cVar4 = '\0';
  local_58 = '\0';
  local_54 = 0;
  if (lVar10 <= lVar7) {
    do {
      param_9 = param_9 & 0xffffff00;
      puVar12 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar10 * 4) * 0xe8 +
                *(longlong *)(param_1 + 0x40));
      piVar11 = (int *)*puVar12;
      lVar6 = (longlong)*(int *)(puVar12 + 3);
      iVar9 = 0;
      if (0 < lVar6) {
        lVar7 = 0;
        do {
          uVar8 = 1 << ((byte)*piVar11 & 0x1f);
          lVar3 = ((longlong)*piVar11 >> 5) * 4;
          lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x10) + 0x10);
          if (lVar2 == 0) {
            lVar2 = *(longlong *)(param_8 + 0x10);
          }
          if ((*(uint *)(lVar2 + lVar3) & uVar8) == 0) {
            lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x18) + 0x10);
            if (lVar2 == 0) {
              lVar2 = *(longlong *)(param_8 + 0x18);
            }
            if ((*(uint *)(lVar2 + lVar3) & uVar8) != 0) {
              plVar5 = *(longlong **)(param_8 + 0x28);
              goto LAB_141d7f232;
            }
          }
          else {
            plVar5 = *(longlong **)(param_8 + 0x20);
LAB_141d7f232:
            if (plVar5 != (longlong *)0x0) {
              lVar3 = *(longlong *)(puVar12[2] + lVar7 + 8);
              if ((*(uint *)(lVar3 + 0x8c) & 0x2000000) == 0) {
                lVar3 = (1L << ((byte)*(undefined4 *)(lVar3 + 0x80) & 0x3f)) + -1;
              }
              else {
                lVar3 = *(longlong *)(*plVar5 + (longlong)*(int *)(lVar3 + 0xcc) * 8);
              }
              local_48 = *param_4;
              uStack_44 = param_4[1];
              uStack_40 = param_4[2];
              uStack_3c = param_4[3];
              iVar1 = FUN_141d7dbb0(param_1,param_2,param_3,&local_48,param_5,puVar12[2] + lVar7,
                                    lVar3,puVar12,&param_9);
              iVar9 = iVar9 + iVar1;
              local_54 = local_54 + 1;
              if (((((local_54 & 0xf) == 0) && (param_2 == &DAT_146ab6e78)) && (DAT_146ab6e8c != 0))
                 && ((DAT_146ab62e7 != '\0' && (DAT_146ab6383 != '\0')))) {
                FRHICommandListBase::MaybeDispatchToRHIThreadInner(&DAT_146ab6e78);
              }
            }
          }
          lVar7 = lVar7 + 0x38;
          piVar11 = piVar11 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        lVar7 = (longlong)param_10;
      }
      if ((local_58 != '\0') || (cVar4 = local_58, iVar9 != 0)) {
        cVar4 = '\x01';
      }
      if (param_11 != '\0') {
        *(int *)(puVar12 + 0x1b) = iVar9;
      }
      lVar10 = lVar10 + 1;
      local_58 = cVar4;
    } while (lVar10 <= lVar7);
  }
  return cVar4;
}



// FUNCTION 141d7f3a0 FUN_141d7f3a0 body=338 status=ok
// SIG undefined FUN_141d7f3a0(void)

uint * FUN_141d7f3a0(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  bool bVar5;
  uint local_res8;
  uint uStackX_c;
  uint local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<FPrimitiveOcclusionHistory>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  FUN_141d89d30(local_30,param_3);
  local_30[0x14] = 0xffffffff;
  bVar5 = false;
  iVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar4 != 1) {
    local_res8 = *local_30;
    uStackX_c = local_30[0x12];
    FUN_141d9a660(param_1,&local_res8,CONCAT44(uStackX_c,local_res8));
    uVar2 = local_res8;
    bVar5 = local_res8 != 0xffffffff;
    if (bVar5) {
      _Dst = (void *)((longlong)(int)local_res8 * 0x58 + *param_1);
      FPrimitiveOcclusionHistory::~FPrimitiveOcclusionHistory(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x50);
      FUN_1418bdd90(param_1,*param_2,1);
      *param_2 = uVar2;
      goto LAB_141d7f4cf;
    }
  }
  cVar1 = FUN_141d94260(param_1,iVar4,0);
  if (cVar1 == '\0') {
    uVar2 = (local_30[0x12] >> 0x14 ^ *local_30) & (int)param_1[9] - 1U;
    local_30[0x15] = uVar2;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[0x14] =
         *(uint *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(uint *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         *param_2;
  }
LAB_141d7f4cf:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar5;
  }
  return param_2;
}



// FUNCTION 141d7f500 FUN_141d7f500 body=711 status=ok
// SIG undefined FUN_141d7f500(void)

int * FUN_141d7f500(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  void *pvVar9;
  longlong *plVar10;
  char cVar11;
  uint uVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  void *local_res10;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      FUN_140a131a0(param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar5 * 0xe8 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xe8 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
  pvVar9 = (void *)((longlong)iVar5 * 0xe8 + *param_1);
  local_res10 = pvVar9;
  TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::FDrawingPolicyLink::FDrawingPolicyLink
            (pvVar9,param_3);
  *(undefined4 *)((longlong)pvVar9 + 0xe0) = 0xffffffff;
  bVar13 = false;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    if (uVar12 != 0) {
      plVar10 = (longlong *)param_1[8];
      iVar5 = FMeshDrawingPolicy::GetTypeHash((longlong)pvVar9 + 0x20);
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar10 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        lVar3 = *param_1;
        do {
          pbVar7 = (byte *)FShadowDepthDrawingPolicy<1>::Matches
                                     (lVar3 + 0x20 + (longlong)iVar5 * 0xe8,local_res8,
                                      (longlong)pvVar9 + 0x20,0);
          if ((*pbVar7 & 1) != 0) goto LAB_141d7f679;
          iVar5 = *(int *)((longlong)iVar5 * 0xe8 + 0xe0 + lVar3);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_141d7f679:
    bVar13 = iVar5 != -1;
    pvVar9 = local_res10;
    if (bVar13) {
      plVar10 = (longlong *)((longlong)iVar5 * 0xe8 + *param_1);
      TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
      ::
      ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
                (plVar10 + 2);
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar10,local_res10,0xe0);
      TSparseArray<TSetElement<TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_141d7f7a2;
    }
  }
  if (3 < uVar12) {
    uVar6 = (uVar12 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar11 = '\0';
    if (uVar6 != 0) {
      iVar5 = 0x1f - iVar8;
    }
    uVar6 = (uVar12 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar11 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar12 = FMeshDrawingPolicy::GetTypeHash((longlong)pvVar9 + 0x20);
    uVar12 = uVar12 & (int)param_1[9] - 1U;
    *(uint *)((longlong)pvVar9 + 0xe4) = uVar12;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)((longlong)pvVar9 + 0xe0) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::FDrawingPolicyLink,TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141d7f7a2:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 141d7f7d0 FUN_141d7f7d0 body=745 status=ok
// SIG undefined FUN_141d7f7d0(void)

int * FUN_141d7f7d0(ulonglong param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  bool bVar13;
  int local_38 [2];
  uint *local_30;
  
  FUN_141d8f8f0(param_1,local_38);
  puVar1 = (uint *)*param_3;
  uVar12 = 0xffffffff;
  bVar13 = false;
  *param_2 = local_38[0];
  *local_30 = *puVar1;
  local_30[1] = 0;
  local_30[2] = 0xffffffff;
  uVar11 = *(int *)(param_1 + 0x7f8) - *(int *)(param_1 + 0x824);
  if (uVar11 != 1) {
    iVar5 = -1;
    iVar8 = iVar5;
    if (uVar11 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x928);
      if (*(longlong *)(param_1 + 0x928) == 0) {
        lVar4 = param_1 + 0x828;
      }
      iVar7 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x930) - 1U & (longlong)(int)*local_30)
                               * 4);
      if (iVar7 != -1) {
        uVar6 = *(ulonglong *)(param_1 + 0x7f0);
        do {
          iVar8 = iVar7;
          if (*(uint *)(((longlong)(int)-(uint)(uVar6 == 0) & param_1 | uVar6) +
                       (longlong)iVar7 * 0x10) == *local_30) break;
          iVar7 = *(int *)(((longlong)(int)-(uint)(uVar6 == 0) & param_1 | uVar6) + 8 +
                          (longlong)iVar7 * 0x10);
          iVar8 = iVar5;
        } while (iVar7 != -1);
      }
    }
    bVar13 = iVar8 != -1;
    if (bVar13) {
      uVar6 = *(ulonglong *)(param_1 + 0x7f0);
      if (*(ulonglong *)(param_1 + 0x7f0) == 0) {
        uVar6 = param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)(uVar6 + (longlong)iVar8 * 0x10),local_30,8);
      bVar2 = (byte)local_38[0] & 0x1f;
      if (*(int *)(param_1 + 0x824) != 0) {
        uVar6 = *(ulonglong *)(param_1 + 0x7f0);
        if (*(ulonglong *)(param_1 + 0x7f0) == 0) {
          uVar6 = param_1;
        }
        *(int *)(uVar6 + (longlong)*(int *)(param_1 + 0x820) * 0x10) = local_38[0];
      }
      uVar6 = *(ulonglong *)(param_1 + 0x7f0);
      if (*(ulonglong *)(param_1 + 0x7f0) == 0) {
        uVar6 = param_1;
      }
      *(undefined4 *)(uVar6 + (longlong)local_38[0] * 0x10) = 0xffffffff;
      if (0 < *(int *)(param_1 + 0x824)) {
        uVar12 = *(undefined4 *)(param_1 + 0x820);
      }
      *(undefined4 *)(uVar6 + 4 + (longlong)local_38[0] * 0x10) = uVar12;
      *(int *)(param_1 + 0x824) = *(int *)(param_1 + 0x824) + 1;
      *(int *)(param_1 + 0x820) = local_38[0];
      lVar4 = *(longlong *)(param_1 + 0x810);
      *param_2 = iVar8;
      if (lVar4 == 0) {
        lVar4 = param_1 + 0x800;
      }
      puVar1 = (uint *)(lVar4 + (longlong)((int)(local_38[0] + (local_38[0] >> 0x1f & 0x1fU)) >> 5)
                                * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_141d7fa8c;
    }
  }
  uVar3 = uVar11 >> 1;
  iVar8 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
    }
  }
  iVar5 = 0x20;
  cVar9 = '\0';
  if (uVar3 != 0) {
    iVar5 = 0x1f - iVar8;
  }
  uVar3 = uVar3 - 1;
  iVar8 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
    }
  }
  if (uVar3 != 0) {
    cVar9 = '\x1f' - (char)iVar8;
  }
  uVar10 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  uVar3 = 0x40;
  if ((0x3f < uVar10) && (uVar3 = uVar10, uVar11 < 4)) {
    uVar3 = 0x40;
  }
  if (((int)uVar11 < 1) ||
     ((*(int *)(param_1 + 0x930) != 0 && ((int)uVar3 <= *(int *)(param_1 + 0x930))))) {
    uVar11 = *(int *)(param_1 + 0x930) - 1U & *local_30;
    local_30[3] = uVar11;
    lVar4 = *(longlong *)(param_1 + 0x928);
    if (*(longlong *)(param_1 + 0x928) == 0) {
      lVar4 = param_1 + 0x828;
    }
    local_30[2] = *(uint *)(lVar4 + ((longlong)*(int *)(param_1 + 0x930) - 1U &
                                    (longlong)(int)uVar11) * 4);
    lVar4 = *(longlong *)(param_1 + 0x928);
    if (*(longlong *)(param_1 + 0x928) == 0) {
      lVar4 = param_1 + 0x828;
    }
    *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x930) - 1U & (longlong)(int)uVar11) * 4) =
         local_38[0];
  }
  else {
    *(uint *)(param_1 + 0x930) = uVar3;
    FUN_141da55e0(param_1);
  }
LAB_141d7fa8c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 141d7fac0 FUN_141d7fac0 body=698 status=ok
// SIG undefined FUN_141d7fac0(void)

int * FUN_141d7fac0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  bool bVar15;
  uint local_res8;
  
  iVar6 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x10);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar4 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar15 = false;
  puVar13 = (uint *)((longlong)plVar5 + lVar4);
  *puVar13 = *puVar13 | 1 << ((byte)iVar10 & 0x1f);
  local_res8 = (local_res8 >> 0x10 & 0xfff8) << 0x10;
  lVar7 = (longlong)iVar10 * 0x10;
  puVar13 = (uint *)(*param_1 + lVar7);
  uVar12 = *(uint *)*param_3;
  puVar13[1] = local_res8;
  *puVar13 = uVar12;
  puVar13[2] = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar13) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(uint *)(*param_1 + (longlong)iVar8 * 0x10) == *puVar13) break;
          iVar8 = *(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    bVar15 = iVar9 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0x10 + *param_1),puVar13,8);
      bVar2 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar10;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar7 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar7 + 4 + lVar1) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar5 + lVar4);
      *puVar13 = *puVar13 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_141d7fd4f;
    }
  }
  if (3 < uVar12) {
    uVar3 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar3 != 0) {
      iVar6 = 0x1f - iVar14;
    }
    uVar3 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar3 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar12 = (int)param_1[9] - 1U & *puVar13;
    puVar13[3] = uVar12;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar13[2] = *(uint *)((longlong)plVar5 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Rehash
              (param_1);
  }
LAB_141d7fd4f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 141d7fd80 FUN_141d7fd80 body=597 status=ok
// SIG undefined FUN_141d7fd80(void)

int * FUN_141d7fd80(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 local_20;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar5 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x30);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x30) = 0xffffffff;
    }
  }
  plVar3 = (longlong *)param_1[4];
  *param_2 = iVar6;
  local_28 = 0;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = param_1 + 2;
  }
  local_20 = 0;
  local_30 = 0;
  puVar7 = (uint *)((longlong)plVar3 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar7 = *puVar7 | 1 << ((byte)iVar6 & 0x1f);
  puVar7 = (uint *)((longlong)iVar6 * 0x30 + *param_1);
  *puVar7 = *(uint *)*param_3;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  *(undefined2 *)(puVar7 + 8) = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_30);
  puVar7[10] = 0xffffffff;
  bVar8 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar7) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar5 * 0x30) == *puVar7) goto LAB_141d7fefe;
          iVar5 = *(int *)(*param_1 + 0x28 + (longlong)iVar5 * 0x30);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_141d7fefe:
    bVar8 = iVar5 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar5 * 0x30 + *param_1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>((longlong)_Dst + 0x10);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar7,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_141d7ffaa;
    }
  }
  cVar1 = TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *puVar7;
    puVar7[0xb] = uVar4;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    puVar7[10] = *(uint *)((longlong)plVar3 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_141d7ffaa:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 141d7ffe0 FUN_141d7ffe0 body=585 status=ok
// SIG undefined FUN_141d7ffe0(void)

int * FUN_141d7ffe0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x28);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x28) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar10 = false;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar9 * 0x28);
  puVar2 = (undefined8 *)param_3[1];
  *puVar1 = *(uint *)*param_3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)(puVar1 + 2) = *puVar2;
  *puVar2 = 0;
  puVar1[4] = *(uint *)(puVar2 + 1);
  puVar1[5] = *(uint *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  *(undefined8 *)(puVar1 + 6) = puVar2[2];
  puVar1[8] = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    if (iVar9 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar7 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar7 * 0x28) == *puVar1) goto LAB_141d8014b;
          iVar7 = *(int *)(*param_1 + 0x20 + (longlong)iVar7 * 0x28);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_141d8014b:
    bVar10 = iVar7 != -1;
    if (bVar10) {
      lVar3 = *param_1;
      if (*(longlong *)(lVar3 + 8 + (longlong)iVar7 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + (longlong)iVar7 * 0x28),puVar1,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_141d80200;
    }
  }
  cVar4 = TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar4 == '\0') {
    uVar8 = (int)param_1[9] - 1U & *puVar1;
    puVar1[9] = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar1[8] = *(uint *)((longlong)plVar6 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_141d80200:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 141d80230 FUN_141d80230 body=338 status=ok
// SIG undefined FUN_141d80230(void)

uint * FUN_141d80230(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  bool bVar5;
  uint local_res8;
  uint uStackX_c;
  uint local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<FPrimitiveOcclusionHistory>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  FUN_141d89c70(local_30,param_3);
  local_30[0x14] = 0xffffffff;
  bVar5 = false;
  iVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar4 != 1) {
    local_res8 = *local_30;
    uStackX_c = local_30[0x12];
    FUN_141d9a660(param_1,&local_res8,CONCAT44(uStackX_c,local_res8));
    uVar2 = local_res8;
    bVar5 = local_res8 != 0xffffffff;
    if (bVar5) {
      _Dst = (void *)((longlong)(int)local_res8 * 0x58 + *param_1);
      FPrimitiveOcclusionHistory::~FPrimitiveOcclusionHistory(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x50);
      FUN_1418bdd90(param_1,*param_2,1);
      *param_2 = uVar2;
      goto LAB_141d8035f;
    }
  }
  cVar1 = FUN_141d94260(param_1,iVar4,0);
  if (cVar1 == '\0') {
    uVar2 = (local_30[0x12] >> 0x14 ^ *local_30) & (int)param_1[9] - 1U;
    local_30[0x15] = uVar2;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[0x14] =
         *(uint *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(uint *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         *param_2;
  }
LAB_141d8035f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar5;
  }
  return param_2;
}



// FUNCTION 141d80390 FUN_141d80390 body=3869 status=ok
// SIG undefined FUN_141d80390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141d80390(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  byte bVar13;
  byte bVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  float *pfVar23;
  uint uVar24;
  longlong lVar25;
  longlong *plVar26;
  int iVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_2e8 [32];
  int local_2c8;
  undefined4 local_2c0;
  undefined1 local_2b8;
  char local_2a8;
  byte local_2a7;
  char local_2a6;
  char local_2a5;
  char local_2a4;
  char local_2a3;
  int local_2a0;
  char local_29c;
  char local_29b;
  byte local_29a;
  int local_298;
  int local_294;
  undefined1 local_290;
  undefined2 local_28f;
  undefined1 local_28d;
  int local_28c;
  ulonglong local_288;
  int local_280;
  int local_27c;
  longlong local_278;
  int local_270;
  uint local_26c;
  longlong local_268;
  uint local_260;
  uint local_25c;
  uint local_258;
  undefined8 local_250;
  float local_248;
  float local_244;
  float fStack_240;
  float local_23c;
  float local_238;
  longlong *local_230;
  longlong *local_228;
  longlong local_220;
  longlong *local_218;
  longlong *local_210;
  int local_208;
  int local_204;
  int local_200;
  undefined4 local_1fc;
  float local_1f8;
  float local_1f0;
  float fStack_1ec;
  float local_1e8;
  float local_1e0;
  int local_1dc;
  undefined8 local_1d8;
  float local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  undefined4 local_1b0;
  int iStack_1ac;
  undefined4 local_1a8;
  int iStack_1a4;
  ulonglong local_1a0;
  longlong local_198;
  longlong local_190;
  int local_188;
  undefined8 local_184;
  float local_17c;
  undefined8 local_178;
  float local_170;
  undefined1 local_16c;
  float local_160;
  float local_154;
  undefined1 local_150 [24];
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong alStack_110 [2];
  undefined4 local_100;
  undefined8 local_fc;
  longlong local_f4;
  longlong local_ec;
  int local_e0;
  undefined4 local_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  local_1c8 = param_1[2];
  lVar25 = param_1[1];
  lVar12 = *param_1;
  uVar10 = *(uint *)(param_1 + 3);
  local_208 = *(int *)((longlong)param_1 + 0x1c);
  lVar20 = *(longlong *)(lVar25 + 0x18);
  local_29b = (char)param_1[4];
  local_2a4 = *(char *)((longlong)param_1 + 0x21);
  local_1e0 = *(float *)(DAT_146b17150 + 0x8d0);
  local_278 = lVar25;
  local_220 = lVar12;
  local_218 = param_1;
  local_280 = FUN_141d69970(*(undefined4 *)(lVar12 + 8));
  local_198 = lVar20 + 0x158;
  local_1c0 = lVar20 + 0x178;
  local_230 = (longlong *)(lVar20 + 0x1808);
  local_1b8 = (longlong *)param_1[8];
  fVar3 = *(float *)(*(longlong *)(lVar25 + 0x10) + 0x58);
  local_2a0 = *(int *)(lVar20 + 0x25c);
  if (((DAT_146a9ece0 <= 0.0) || (DAT_1464c312c < 1)) ||
     (local_2a5 = '\x01', (int)DAT_1464c3128 < 1)) {
    local_2a5 = '\0';
  }
  local_268 = lVar25 + 0x1ac0;
  uVar24 = *(uint *)(lVar25 + 0x1ad8);
  local_1f8 = DAT_146a9ece8 * DAT_146a9ece8;
  bVar13 = (byte)uVar10 & 0x1f;
  local_26c = 1 << bVar13;
  local_260 = -1 << bVar13;
  local_258 = uVar10 & 0xffffffe0;
  local_28c = 0;
  if (uVar10 != uVar24) {
    lVar20 = *(longlong *)(lVar25 + 0x1ad0);
    if (*(longlong *)(lVar25 + 0x1ad0) == 0) {
      lVar20 = local_268;
    }
    uVar17 = *(uint *)(lVar20 + (longlong)((int)uVar10 >> 5) * 4) & local_260;
    local_270 = (int)uVar10 >> 5;
    while (uVar17 == 0) {
      lVar15 = (longlong)local_270;
      local_258 = local_258 + 0x20;
      iVar27 = local_270 + 1;
      bVar28 = (int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_270;
      local_25c = uVar24;
      local_270 = iVar27;
      if (bVar28) goto LAB_141d805b7;
      uVar17 = *(uint *)(lVar20 + 4 + lVar15 * 4);
      local_260 = 0xffffffff;
    }
    local_26c = -uVar17 & uVar17;
    local_188 = 0x1f;
    if (local_26c != 0) {
      for (; local_26c >> local_188 == 0; local_188 = local_188 + -1) {
      }
    }
    if (local_26c == 0) {
      iVar27 = 0x20;
    }
    else {
      iVar27 = 0x1f - local_188;
    }
    local_25c = (local_258 - iVar27) + 0x1f;
    if ((int)uVar24 < (int)local_25c) {
      local_25c = uVar24;
    }
LAB_141d805b7:
    local_288 = CONCAT44(local_288._4_4_,local_26c);
    local_190 = local_268;
    if ((int)local_25c < (int)uVar24) {
      do {
        uVar24 = local_25c;
        uVar10 = local_26c;
        iVar27 = local_270;
        if (local_208 <= local_28c) {
          *(undefined4 *)(local_218 + 9) = 0;
          return;
        }
        lVar20 = (longlong)(int)local_25c;
        local_27c = 1;
        local_2a8 = '\0';
        local_228 = (longlong *)0x0;
        local_29a = *(byte *)(lVar20 + *(longlong *)(lVar12 + 0x1030));
        local_2a7 = local_29a & 1;
        plVar26 = (longlong *)local_218[10];
        local_1dc = (int)plVar26[1];
        local_298 = local_270;
        local_210 = plVar26;
        if ((((local_29a & 0x10) == 0) || (DAT_1464c3120 == 0)) ||
           ((*(byte *)(lVar25 + 0x28cc) & 0x80) != 0)) {
LAB_141d806e7:
          local_2a3 = '\x01';
          local_2a6 = '\x01';
          local_294 = 0;
          uVar19 = *(undefined4 *)(*(longlong *)(lVar12 + 0x1050) + lVar20 * 4);
          local_1fc = uVar19;
          if (0 < local_27c) {
            do {
              iVar27 = local_294;
              lVar20 = (longlong)local_294;
              iStack_1a4 = local_294;
              local_1a8 = uVar19;
              FUN_141d9a660(local_230,&local_204);
              lVar12 = local_1c0;
              if (local_204 == -1) {
                uVar21 = 0;
              }
              else {
                uVar21 = (longlong)local_204 * 0x58 + *local_230;
              }
              cVar7 = false;
              bVar13 = false;
              local_29c = '\0';
              if (uVar21 == 0) {
                local_118 = 0;
                alStack_110[0] = 0;
                local_120 = 0;
                local_fc = 0xffffffffffffffff;
                local_e0 = iVar27;
                local_dc = 0;
                local_100 = 0;
                local_128 = uVar19;
                alStack_110[1] = uVar21;
                local_f4 = uVar21;
                local_ec = uVar21;
                FUN_141d80230(local_230);
                plVar26 = alStack_110 + 1;
                lVar25 = 3;
                local_288 = (longlong)local_200 * 0x58 + *local_230;
                do {
                  puVar16 = (undefined8 *)plVar26[0xffffffffffffffff];
                  plVar26 = plVar26 + 0xffffffffffffffff;
                  lVar25 = lVar25 + -1;
                  if (puVar16 != (undefined8 *)0x0) {
                    LOCK();
                    piVar1 = (int *)(puVar16 + 1);
                    iVar27 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar27 == 1) {
                      if ((*(char *)(puVar16 + 2) == '\0') &&
                         ((DAT_146ab62f5 != '\0' ||
                          (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
                        LOCK();
                        bVar28 = *(int *)((longlong)puVar16 + 0xc) == 0;
                        if (bVar28) {
                          *(int *)((longlong)puVar16 + 0xc) = 1;
                        }
                        UNLOCK();
                        if (bVar28) {
                          uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                          lVar12 = 0;
                          if (uVar10 != 0) {
                            lVar12 = (&DAT_1468a81f8)[uVar10 >> 0xe] +
                                     (ulonglong)(uVar10 & 0x3fff) * 0x18;
                          }
                          *(undefined8 **)(lVar12 + 8) = puVar16;
                          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                        }
                      }
                      else {
                        (**(code **)*puVar16)(puVar16);
                      }
                    }
                  }
                  uVar21 = local_288;
                } while (lVar25 != 0);
                bVar13 = local_2a7 ^ 1;
                uVar24 = local_25c;
                uVar19 = local_1fc;
                cVar7 = local_29c;
                if (local_288 != 0) {
                  local_288 = CONCAT44(local_288._4_4_,local_26c);
                  local_298 = local_270;
                  *(undefined4 *)(uVar21 + 0x44) = 0x3f800000;
                  iVar22 = local_2a0;
                  iVar27 = local_294;
                  goto LAB_141d80bd9;
                }
                local_288 = (ulonglong)local_26c;
                local_298 = local_270;
                uVar10 = local_26c;
              }
              else {
                if ((*(uint *)(lVar25 + 0x28cc) & 0x40) == 0) {
                  if (local_2a7 == 0) {
                    bVar13 = true;
                  }
                  else {
                    cVar7 = false;
                    if (local_2a4 == '\0') {
                      uVar18 = (longlong)local_2a0 % (longlong)local_280 & 0xffffffff;
                      local_1a0 = 0;
                      if ((*(longlong *)(uVar21 + 8 + uVar18 * 8) == 0) ||
                         (*(int *)(uVar21 + 0x20 + uVar18 * 4) != local_2a0 - local_280)) {
                        if ((local_280 < 2) && (0x7ffffffe < DAT_1464c9c1c)) {
                          bVar13 = true;
                          cVar7 = *(float *)(uVar21 + 0x38) + *(float *)(DAT_146b17150 + 0x8d0) <
                                  fVar3;
                        }
                        else {
                          cVar7 = *(byte *)(uVar21 + 0x4c) >> 6 & 1;
                          bVar13 = *(byte *)(uVar21 + 0x4c) >> 7;
                        }
                        if ((bool)cVar7 == false) {
                          *(undefined4 *)(uVar21 + 0x40) = *(undefined4 *)(DAT_146b17150 + 0x8d4);
                        }
                        else {
                          *(undefined8 *)(uVar21 + 0x40) = 0;
                        }
                      }
                      else {
                        cVar8 = *(char *)(uVar18 + 0x4d + uVar21);
                        cVar9 = (**(code **)(*DAT_146ab6358 + 0x340))();
                        if (cVar9 != '\0') {
                          cVar7 = (int)local_1a0 == 0;
                          if ((int)local_1a0 == 0) {
                            bVar13 = cVar8 == '\0';
                            *(undefined4 *)(uVar21 + 0x40) = 0;
                            *(undefined4 *)(uVar21 + 0x44) = 0;
                          }
                          else {
                            fVar29 = (float)(local_1a0 & 0xffffffff);
                            *(float *)(uVar21 + 0x40) = fVar29 * *(float *)(local_278 + 0x2fd8);
                            if (local_2a8 == '\0') {
                              fVar30 = (float)FUN_141d90000((longlong)(int)uVar24 * 0x1c +
                                                            *(longlong *)(local_220 + 0x1040));
                              bVar13 = cVar8 == '\0';
                              *(float *)(uVar21 + 0x44) = fVar29 / fVar30;
                            }
                            else {
                              fVar30 = (float)FUN_141d90000(lVar20 * 0x1c + *local_228);
                              bVar13 = cVar8 == '\0';
                              *(float *)(uVar21 + 0x44) = fVar29 / fVar30;
                            }
                          }
                        }
                      }
                    }
                    else {
                      cVar8 = FHZBOcclusionTester::IsValidFrame
                                        (local_1c0,*(undefined4 *)(uVar21 + 0x2c));
                      if (cVar8 != '\0') {
                        cVar7 = FHZBOcclusionTester::IsVisible
                                          (lVar12,*(undefined4 *)(uVar21 + 0x34));
                        bVar13 = true;
                        cVar7 = cVar7 == '\0';
                      }
                    }
                    if (((DAT_146a9ecd4 != 0) && (local_1c8 != 0)) && ((bool)cVar7 != false)) {
                      if (local_2a8 == '\0') {
                        pfVar23 = (float *)((longlong)(int)uVar24 * 0x1c +
                                           *(longlong *)(local_220 + 0x1040));
                      }
                      else {
                        pfVar23 = (float *)(lVar20 * 0x1c + *local_228);
                      }
                      local_28f = 0x32ff;
                      local_290 = 0x32;
                      local_28d = 0xff;
                      FLinearColor::FLinearColor(local_150,&local_290);
                      local_170 = pfVar23[2] + pfVar23[5];
                      local_17c = pfVar23[2] - pfVar23[5];
                      local_184 = CONCAT44(pfVar23[1] - pfVar23[4],*pfVar23 - pfVar23[3]);
                      local_2b8 = 0;
                      local_2c0 = 0;
                      local_178 = CONCAT44(pfVar23[1] + pfVar23[4],*pfVar23 + pfVar23[3]);
                      local_2c8 = 0;
                      local_16c = 1;
                      local_160 = local_17c;
                      local_154 = local_170;
                      FUN_1427055a0(local_1c8,&local_184);
                    }
                  }
                }
                else {
                  bVar13 = (byte)(*(uint *)(lVar25 + 0x28cc) >> 7) & 1;
                }
                iVar22 = local_2a0;
                if (*(longlong *)
                     (uVar21 + (((longlong)local_2a0 % (longlong)local_280 & 0xffffffffU) + 1) * 8)
                    != 0) {
                  FRenderQueryPool::ReleaseQuery(local_198);
                }
LAB_141d80bd9:
                if ((local_29b != '\0') && (local_2a7 != 0)) {
                  if (local_2a5 == '\0') {
LAB_141d80c3f:
                    local_238 = 0.0;
                  }
                  else {
                    bVar14 = *(byte *)(uVar21 + 0x4c);
                    if (((bVar14 & 0x3f) == 0) &&
                       (DAT_1464c3128 < (uint)(iVar22 - *(int *)(uVar21 + 0x30)))) {
                      bVar14 = (bVar14 ^ (byte)DAT_1464c312c) & 0x3f ^ bVar14;
                      *(byte *)(uVar21 + 0x4c) = bVar14;
                    }
                    if ((bVar14 & 0x3f) == 0) goto LAB_141d80c3f;
                    *(byte *)(uVar21 + 0x4c) = (bVar14 - 1 ^ bVar14) & 0x3f ^ bVar14;
                    local_238 = DAT_146a9ece0;
                  }
                  if (local_2a8 == '\0') {
                    puVar16 = (undefined8 *)
                              ((longlong)(int)uVar24 * 0x1c + *(longlong *)(local_220 + 0x1040));
                  }
                  else {
                    puVar16 = (undefined8 *)((longlong)iVar27 * 0x1c + *local_228);
                  }
                  local_238 = DAT_146a9ece4 + local_238;
                  uVar4 = *puVar16;
                  local_244 = local_238 + *(float *)((longlong)puVar16 + 0xc);
                  fStack_240 = local_238 + *(float *)(puVar16 + 2);
                  local_23c = local_238 + *(float *)((longlong)puVar16 + 0x14);
                  local_238 = local_238 + *(float *)(puVar16 + 3);
                  local_248 = *(float *)(puVar16 + 1);
                  local_250._0_4_ = (float)uVar4;
                  local_250._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
                  fVar30 = (float)local_250 - *(float *)(local_278 + 0x900);
                  fVar31 = local_250._4_4_ - *(float *)(local_278 + 0x904);
                  fVar29 = local_248 - *(float *)(local_278 + 0x908);
                  if (local_1f8 <= fVar31 * fVar31 + fVar30 * fVar30 + fVar29 * fVar29) {
                    fVar29 = local_250._4_4_;
                    if (*(char *)(local_278 + 0x1190) == '\0') {
                      if (*(float *)(local_278 + 0x3cc) <= 1.0 &&
                          *(float *)(local_278 + 0x3cc) != 1.0) {
                        bVar28 = local_238 < 1048576.0;
                      }
                      else {
                        local_250 = uVar4;
                        lVar25 = FUN_1427633e0(local_278,local_138);
                        bVar28 = *(float *)(lVar25 + 8) - local_238 * *(float *)(local_278 + 0x3b8)
                                 < 1.0;
                        fVar29 = local_250._4_4_;
                        uVar4 = local_250;
                      }
                    }
                    else {
                      bVar28 = (*(float *)(local_278 + 0x11a0) * (float)local_250 +
                                *(float *)(local_278 + 0x11a4) * local_250._4_4_ +
                               *(float *)(local_278 + 0x11a8) * local_248) -
                               *(float *)(local_278 + 0x11ac) <
                               -(ABS(*(float *)(local_278 + 0x11a0) * local_244) +
                                 ABS(*(float *)(local_278 + 0x11a4) * fStack_240) +
                                ABS(*(float *)(local_278 + 0x11a8) * local_23c));
                    }
                    local_250 = uVar4;
                    uVar4 = local_250;
                    if (bVar28) {
                      *(int *)(uVar21 + 0x2c) = iVar22;
                      if (local_2a4 != '\0') {
                        uVar11 = FHZBOcclusionTester::AddBounds(local_1c0,&local_250,&local_244);
                        *(undefined4 *)(uVar21 + 0x34) = uVar11;
                        goto LAB_141d81027;
                      }
                      if ((local_2a8 == '\0') && ((local_29a & 4) != 0)) {
                        if (cVar7 == '\0') {
                          if (bVar13 == 0) goto LAB_141d80edc;
                          uVar10 = DAT_146a99620;
                          if (0xdf2 < DAT_146a99620) {
                            uVar10 = 0;
                          }
                          DAT_146a99620 = uVar10 + 1;
                          if (DAT_1464c9c19 == '\0') {
                            bVar28 = (float)(&DAT_146a99624)[uVar10] * 0.125 * local_1e0 <
                                     fVar3 - *(float *)(uVar21 + 0x38);
                          }
                          else {
                            fVar30 = *(float *)(uVar21 + 0x40) / *(float *)(DAT_146b17150 + 0x8d4);
                            if (fVar30 <= 1.0) {
                              fVar30 = 1.0;
                            }
                            bVar28 = fVar30 * (float)(&DAT_146a99624)[uVar10] <
                                     *(float *)(DAT_146b17150 + 0x8d4);
                          }
                          goto LAB_141d80ede;
                        }
                        cVar8 = '\x01';
                        bVar6 = true;
                      }
                      else {
LAB_141d80edc:
                        bVar28 = true;
LAB_141d80ede:
                        bVar6 = false;
                        cVar8 = '\0';
                        if (!bVar28) goto LAB_141d81027;
                      }
                      local_1f0 = (float)local_250 + *(float *)(local_278 + 0x8d0);
                      fStack_1ec = fVar29 + *(float *)(local_278 + 0x8d4);
                      local_1e8 = local_248 + *(float *)(local_278 + 0x8d8);
                      local_1d8 = CONCAT44(fStack_240,local_244);
                      local_1d0 = local_23c;
                      if ((DAT_1464c9c1c < 0x7fffffff) && (cVar8 == '\0')) {
                        uVar10 = 0;
                        if ((*(char *)(uVar21 + 0x4d) == '\0') &&
                           (uVar10 = *(uint *)(uVar21 + 0x20), *(uint *)(uVar21 + 0x20) == 0)) {
                          uVar10 = 0;
                        }
                        uVar17 = uVar10;
                        if ((*(char *)(uVar21 + 0x4e) == '\0') &&
                           (uVar17 = *(uint *)(uVar21 + 0x24), *(uint *)(uVar21 + 0x24) <= uVar10))
                        {
                          uVar17 = uVar10;
                        }
                        uVar10 = uVar17;
                        if ((*(char *)(uVar21 + 0x4f) == '\0') &&
                           (uVar10 = *(uint *)(uVar21 + 0x28), *(uint *)(uVar21 + 0x28) <= uVar17))
                        {
                          uVar10 = uVar17;
                        }
                        iStack_1ac = local_294;
                        iVar27 = (int)local_1b8[1];
                        lVar25 = (longlong)iVar27;
                        *(int *)(local_1b8 + 1) = iVar27 + 1;
                        local_1b0 = uVar19;
                        if (*(int *)((longlong)local_1b8 + 0xc) < iVar27 + 1) {
                          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(local_1b8,iVar27);
                        }
                        lVar12 = *local_1b8;
                        *(ulonglong *)(lVar12 + lVar25 * 0x28) = CONCAT44(iStack_1ac,local_1b0);
                        *(ulonglong *)(lVar12 + 8 + lVar25 * 0x28) = CONCAT44(fStack_1ec,local_1f0);
                        *(float *)(lVar12 + 0x10 + lVar25 * 0x28) = local_1e8;
                        *(undefined8 *)(lVar12 + 0x14 + lVar25 * 0x28) = local_1d8;
                        *(float *)(lVar12 + 0x1c + lVar25 * 0x28) = local_1d0;
                        *(uint *)(lVar12 + 0x20 + lVar25 * 0x28) = uVar10;
                      }
                      else {
                        uVar18 = (longlong)iVar22 % (longlong)local_280 & 0xffffffff;
                        lVar25 = 0x2f60;
                        if (!bVar6) {
                          lVar25 = 0x2f38;
                        }
                        FOcclusionQueryBatcher::BatchPrimitive
                                  (lVar25 + local_278,&local_1f0,&local_1d8);
                        TRefCountPtr<FRHIIndexBuffer>::operator=(uVar21 + (uVar18 + 1) * 8);
                        *(int *)(uVar21 + 0x20 + uVar18 * 4) = local_2a0;
                        *(char *)(uVar18 + 0x4d + uVar21) = cVar8;
                      }
                      goto LAB_141d81027;
                    }
                  }
                  local_250 = uVar4;
                  cVar7 = '\0';
                  bVar13 = 1;
                }
LAB_141d81027:
                *(float *)(uVar21 + 0x3c) = fVar3;
                if ((cVar7 == '\0') && (bVar13 != 0)) {
                  *(float *)(uVar21 + 0x38) = fVar3;
                }
                *(byte *)(uVar21 + 0x4c) = *(byte *)(uVar21 + 0x4c) & 0x3f;
                *(int *)(uVar21 + 0x30) = local_2a0;
                *(byte *)(uVar21 + 0x4c) =
                     (cVar7 << 6 | *(byte *)(uVar21 + 0x4c)) & 0x7f | bVar13 << 7;
                uVar10 = (uint)local_288;
              }
              iVar27 = local_298;
              if (local_2a8 == '\0') {
                if (cVar7 == '\0') {
                  if (bVar13 != 0) {
                    lVar25 = *(longlong *)(local_278 + 0x1af0);
                    if (*(longlong *)(local_278 + 0x1af0) == 0) {
                      lVar25 = local_278 + 0x1ae0;
                    }
                    puVar2 = (uint *)(lVar25 + (longlong)local_298 * 4);
                    *puVar2 = *puVar2 | uVar10;
                  }
                }
                else {
                  lVar25 = *(longlong *)(local_190 + 0x10);
                  if (*(longlong *)(local_190 + 0x10) == 0) {
                    lVar25 = local_190;
                  }
                  puVar2 = (uint *)(lVar25 + (longlong)local_298 * 4);
                  *puVar2 = *puVar2 & ~uVar10;
                }
              }
              else {
                iVar22 = (int)local_210[1];
                *(int *)(local_210 + 1) = iVar22 + 1;
                if (*(int *)((longlong)local_210 + 0xc) < iVar22 + 1) {
                  TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(local_210,iVar22);
                }
                *(char *)((longlong)iVar22 + *local_210) = cVar7;
                if ((cVar7 != '\0') || (local_2a6 = '\0', bVar13 == 0)) {
                  local_2a3 = '\0';
                }
              }
              local_294 = local_294 + 1;
              lVar25 = local_278;
              lVar12 = local_220;
              plVar26 = local_210;
            } while (local_294 < local_27c);
          }
          if (local_2a8 != '\0') {
            if (0 < (int)plVar26[1]) {
              local_2c8 = (int)plVar26[1] - local_1dc;
              plVar5 = *(longlong **)
                        (*(longlong *)(*(longlong *)(lVar12 + 0xfe0) + (longlong)(int)uVar24 * 8) +
                        8);
              (**(code **)(*plVar5 + 0x70))(plVar5,lVar25,plVar26);
            }
            if (local_2a6 == '\0') {
              if (local_2a3 != '\0') {
                lVar20 = *(longlong *)(lVar25 + 0x1af0);
                if (*(longlong *)(lVar25 + 0x1af0) == 0) {
                  lVar20 = lVar25 + 0x1ae0;
                }
                puVar2 = (uint *)(lVar20 + (longlong)iVar27 * 4);
                *puVar2 = *puVar2 | uVar10;
              }
            }
            else {
              lVar20 = *(longlong *)(lVar25 + 0x1ad0);
              if (*(longlong *)(lVar25 + 0x1ad0) == 0) {
                lVar20 = lVar25 + 0x1ac0;
              }
              puVar2 = (uint *)(lVar20 + (longlong)iVar27 * 4);
              *puVar2 = *puVar2 & ~uVar10;
            }
          }
        }
        else {
          plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(lVar12 + 0xfe0) + lVar20 * 8) + 8);
          local_228 = (longlong *)(**(code **)(*plVar5 + 0x68))(plVar5,lVar25);
          local_2a8 = '\x01';
          local_27c = (int)local_228[1];
          if (local_27c != 0) {
            if (*(int *)((longlong)plVar26 + 0xc) < local_27c) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar26,local_27c);
            }
            goto LAB_141d806e7;
          }
          lVar20 = *(longlong *)(lVar25 + 0x1ad0);
          if (*(longlong *)(lVar25 + 0x1ad0) == 0) {
            lVar20 = lVar25 + 0x1ac0;
          }
          puVar2 = (uint *)(lVar20 + (longlong)iVar27 * 4);
          *puVar2 = *puVar2 & ~uVar10;
        }
        local_260 = local_260 & ~uVar10;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_270);
        local_28c = local_28c + 1;
        if (*(int *)(local_268 + 0x18) <= (int)local_25c) {
          *(undefined4 *)(local_218 + 9) = 0;
          return;
        }
        local_288 = CONCAT44(local_288._4_4_,local_26c);
      } while( true );
    }
  }
  *(undefined4 *)(local_218 + 9) = 0;
  return;
}



// FUNCTION 141d812b0 FUN_141d812b0 body=4066 status=ok
// SIG undefined FUN_141d812b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141d812b0(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  byte bVar12;
  byte bVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  longlong lVar19;
  int iVar20;
  float *pfVar21;
  bool bVar22;
  uint uVar23;
  longlong lVar24;
  longlong *plVar25;
  undefined1 uVar26;
  bool bVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_2f8 [32];
  int local_2d8;
  undefined4 local_2d0;
  undefined1 local_2c8;
  char local_2b8;
  byte local_2b7;
  char local_2b6;
  char local_2b5;
  char local_2b4;
  char local_2b3;
  char local_2b2;
  byte local_2b1;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  uint local_2a4;
  undefined1 local_2a0;
  undefined2 local_29f;
  undefined1 local_29d;
  int local_29c;
  int local_298;
  int local_294;
  longlong local_290;
  longlong local_288;
  int local_280;
  undefined8 local_278;
  float local_270;
  float local_26c;
  float fStack_268;
  float local_264;
  float local_260;
  int local_258;
  uint local_254;
  longlong local_250;
  uint local_248;
  uint local_244;
  uint local_240;
  longlong *local_238;
  longlong *local_230;
  float local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  undefined4 local_214;
  float local_210;
  float local_208;
  float fStack_204;
  float local_200;
  ulonglong local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  undefined4 local_1d0;
  int iStack_1cc;
  undefined8 local_1c8;
  float local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong *local_198;
  longlong local_190;
  int local_188;
  undefined8 local_184;
  float local_17c;
  undefined8 local_178;
  float local_170;
  undefined1 local_16c;
  float local_160;
  float local_154;
  undefined1 local_150 [24];
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110 [2];
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  local_1a0 = param_1[2];
  lVar24 = param_1[1];
  lVar11 = *param_1;
  uVar9 = *(uint *)(param_1 + 3);
  local_2a8 = *(int *)((longlong)param_1 + 0x1c);
  lVar19 = *(longlong *)(lVar24 + 0x18);
  local_2b2 = (char)param_1[4];
  local_2b4 = *(char *)((longlong)param_1 + 0x21);
  local_228 = *(float *)(DAT_146b17150 + 0x8d0);
  local_290 = lVar11;
  local_288 = lVar24;
  local_230 = param_1;
  local_280 = FUN_141d69970(*(undefined4 *)(lVar11 + 8));
  plVar15 = (longlong *)param_1[5];
  plVar25 = (longlong *)param_1[6];
  fVar3 = *(float *)(*(longlong *)(lVar24 + 0x10) + 0x58);
  local_29c = *(int *)(lVar19 + 0x25c);
  local_1a8 = lVar19 + 0x178;
  local_1b8 = (longlong *)(lVar19 + 0x1808);
  plVar4 = (longlong *)param_1[7];
  plVar5 = (longlong *)param_1[8];
  if (((DAT_146a9ece0 <= 0.0) || (DAT_1464c312c < 1)) ||
     (local_2b5 = '\x01', (int)DAT_1464c3128 < 1)) {
    local_2b5 = '\0';
  }
  local_210 = DAT_146a9ece8 * DAT_146a9ece8;
  local_1f0 = plVar25;
  local_1e8 = plVar5;
  local_1d8 = plVar15;
  local_198 = plVar4;
  if (*(int *)((longlong)plVar15 + 0xc) < local_2a8) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(plVar15,local_2a8);
  }
  if (*(int *)((longlong)plVar25 + 0xc) < local_2a8) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar25,local_2a8);
  }
  if (*(int *)((longlong)plVar4 + 0xc) < local_2a8) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar4,local_2a8);
  }
  if (*(int *)((longlong)plVar5 + 0xc) < local_2a8) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (plVar5,local_2a8);
  }
  local_250 = lVar24 + 0x1ac0;
  uVar23 = *(uint *)(lVar24 + 0x1ad8);
  local_298 = 0;
  bVar12 = (byte)uVar9 & 0x1f;
  local_254 = 1 << bVar12;
  local_248 = -1 << bVar12;
  local_240 = uVar9 & 0xffffffe0;
  if (uVar9 != uVar23) {
    lVar19 = *(longlong *)(lVar24 + 0x1ad0);
    if (*(longlong *)(lVar24 + 0x1ad0) == 0) {
      lVar19 = local_250;
    }
    uVar16 = *(uint *)(lVar19 + (longlong)((int)uVar9 >> 5) * 4) & local_248;
    local_258 = (int)uVar9 >> 5;
    while (uVar16 == 0) {
      lVar14 = (longlong)local_258;
      local_240 = local_240 + 0x20;
      iVar20 = local_258 + 1;
      bVar28 = (int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_258;
      local_244 = uVar23;
      local_258 = iVar20;
      if (bVar28) goto LAB_141d81538;
      uVar16 = *(uint *)(lVar19 + 4 + lVar14 * 4);
      local_248 = 0xffffffff;
    }
    local_254 = -uVar16 & uVar16;
    local_188 = 0x1f;
    if (local_254 != 0) {
      for (; local_254 >> local_188 == 0; local_188 = local_188 + -1) {
      }
    }
    if (local_254 == 0) {
      iVar20 = 0x20;
    }
    else {
      iVar20 = 0x1f - local_188;
    }
    local_244 = (local_240 - iVar20) + 0x1f;
    if ((int)uVar23 < (int)local_244) {
      local_244 = uVar23;
    }
LAB_141d81538:
    local_190 = local_250;
    if ((int)local_244 < (int)uVar23) {
      do {
        uVar23 = local_244;
        uVar9 = local_254;
        iVar20 = local_258;
        if (local_2a8 <= local_298) {
          *(undefined4 *)(local_230 + 9) = 0;
          return;
        }
        lVar19 = (longlong)(int)local_244;
        local_294 = 1;
        local_2b8 = '\0';
        local_238 = (longlong *)0x0;
        local_2b1 = *(byte *)(lVar19 + *(longlong *)(lVar11 + 0x1030));
        local_2b7 = local_2b1 & 1;
        local_220 = *(int *)((longlong)plVar15 + 0xc);
        local_218 = (int)plVar15[1];
        plVar25 = (longlong *)local_230[10];
        local_224 = (int)plVar25[1];
        local_2b0 = local_258;
        local_2a4 = local_254;
        local_1e0 = plVar25;
        if ((((local_2b1 & 0x10) == 0) || (DAT_1464c3120 == 0)) ||
           ((*(byte *)(lVar24 + 0x28cc) & 0x80) != 0)) {
LAB_141d816d1:
          local_2b3 = '\x01';
          local_2b6 = '\x01';
          uVar18 = *(undefined4 *)(*(longlong *)(local_290 + 0x1050) + lVar19 * 4);
          local_2ac = 0;
          local_214 = uVar18;
          if (0 < local_294) {
            do {
              plVar25 = local_1b8;
              local_1d0 = uVar18;
              iStack_1cc = local_2ac;
              FUN_141d9a660(local_1b8,&local_21c,CONCAT44(local_2ac,uVar18));
              lVar11 = local_1a8;
              plVar15 = local_1d8;
              lVar24 = local_288;
              iVar20 = local_2ac;
              if (local_21c == -1) {
                lVar19 = 0;
              }
              else {
                lVar19 = (longlong)local_21c * 0x58 + *plVar25;
              }
              bVar28 = false;
              bVar22 = false;
              bVar12 = false;
              if (lVar19 == 0) {
                if (local_218 < local_220) {
                  local_fc = 0xffffffffffffffff;
                  iVar10 = (int)local_1d8[1];
                  local_f4 = 0;
                  local_ec = 0;
                  local_e0 = local_2ac;
                  local_dc = 0;
                  local_110[1] = 0;
                  local_100 = 0;
                  *(int *)(local_1d8 + 1) = iVar10 + 1;
                  local_128 = uVar18;
                  if (*(int *)((longlong)local_1d8 + 0xc) < iVar10 + 1) {
                    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(local_1d8,iVar10);
                  }
                  lVar24 = *plVar15;
                  plVar25 = local_110 + 1;
                  local_1b0 = (longlong)iVar10 * 0x50;
                  local_120 = 0;
                  local_118 = 0;
                  local_110[0] = 0;
                  *(undefined4 *)(local_1b0 + lVar24) = uVar18;
                  *(undefined8 *)(local_1b0 + 8 + lVar24) = 0;
                  *(undefined8 *)(local_1b0 + 0x10 + lVar24) = 0;
                  *(undefined8 *)(local_1b0 + 0x18 + lVar24) = 0;
                  *(longlong *)(local_1b0 + 0x20 + lVar24) = local_110[1];
                  *(int *)(local_1b0 + 0x48 + lVar24) = iVar20;
                  *(undefined2 *)(local_1b0 + 0x4d + lVar24) = local_dc._1_2_;
                  *(undefined4 *)(local_1b0 + 0x44 + lVar24) = local_e4;
                  *(undefined4 *)(local_1b0 + 0x28 + lVar24) = 0;
                  *(undefined8 *)(local_1b0 + 0x2c + lVar24) = 0xffffffffffffffff;
                  *(undefined8 *)(local_1b0 + 0x34 + lVar24) = 0;
                  *(undefined8 *)(local_1b0 + 0x3c + lVar24) = 0;
                  *(undefined1 *)(local_1b0 + 0x4c + lVar24) = 0;
                  *(undefined1 *)(local_1b0 + 0x4f + lVar24) = 0;
                  lVar24 = 3;
                  local_1b0 = *plVar15 + local_1b0;
                  do {
                    puVar6 = (undefined8 *)plVar25[0xffffffffffffffff];
                    plVar25 = plVar25 + 0xffffffffffffffff;
                    lVar24 = lVar24 + -1;
                    if (puVar6 != (undefined8 *)0x0) {
                      LOCK();
                      piVar1 = (int *)(puVar6 + 1);
                      iVar20 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar20 == 1) {
                        if ((*(char *)(puVar6 + 2) == '\0') &&
                           ((DAT_146ab62f5 != '\0' ||
                            (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
                          LOCK();
                          bVar28 = *(int *)((longlong)puVar6 + 0xc) == 0;
                          if (bVar28) {
                            *(int *)((longlong)puVar6 + 0xc) = 1;
                          }
                          UNLOCK();
                          if (bVar28) {
                            uVar9 = FLockFreeLinkPolicy::AllocLockFreeLink();
                            lVar11 = 0;
                            if (uVar9 != 0) {
                              lVar11 = (&DAT_1468a81f8)[uVar9 >> 0xe] +
                                       (ulonglong)(uVar9 & 0x3fff) * 0x18;
                            }
                            *(undefined8 **)(lVar11 + 8) = puVar6;
                            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                          }
                        }
                        else {
                          (**(code **)*puVar6)(puVar6);
                        }
                      }
                    }
                  } while (lVar24 != 0);
                  local_2a4 = local_254;
                  local_2b0 = local_258;
                  lVar19 = local_1b0;
                  uVar9 = local_254;
                  uVar23 = local_244;
                  uVar18 = local_214;
                }
                bVar12 = local_2b7 ^ 1;
                if (lVar19 != 0) {
                  *(undefined4 *)(lVar19 + 0x44) = 0x3f800000;
                  iVar20 = local_29c;
                  bVar22 = false;
                  goto LAB_141d81c67;
                }
              }
              else {
                bVar22 = false;
                if ((*(uint *)(local_288 + 0x28cc) & 0x40) == 0) {
                  if (local_2b7 == 0) {
                    bVar12 = true;
                  }
                  else {
                    if (local_2b4 == '\0') {
                      uVar17 = (longlong)local_29c % (longlong)local_280 & 0xffffffff;
                      local_1f8 = 0;
                      lVar11 = *(longlong *)(lVar19 + 8 + uVar17 * 8);
                      if ((lVar11 == 0) ||
                         (*(int *)(lVar19 + 0x20 + uVar17 * 4) != local_29c - local_280)) {
                        if ((local_280 < 2) && (0x7ffffffe < DAT_1464c9c1c)) {
                          bVar12 = true;
                          bVar28 = *(float *)(lVar19 + 0x38) + *(float *)(DAT_146b17150 + 0x8d0) <
                                   fVar3;
                        }
                        else {
                          bVar28 = (bool)(*(byte *)(lVar19 + 0x4c) >> 6 & 1);
                          bVar12 = *(byte *)(lVar19 + 0x4c) >> 7;
                        }
                        if (bVar28 == false) {
                          *(undefined4 *)(lVar19 + 0x40) = *(undefined4 *)(DAT_146b17150 + 0x8d4);
                        }
                        else {
                          *(undefined8 *)(lVar19 + 0x40) = 0;
                        }
                      }
                      else {
                        cVar7 = *(char *)(uVar17 + 0x4d + lVar19);
                        cVar8 = (**(code **)(*DAT_146ab6358 + 0x340))
                                          (DAT_146ab6358,lVar11,&local_1f8,
                                           CONCAT71((uint7)(uint3)((uint)local_280 >> 8),1));
                        if (cVar8 != '\0') {
                          bVar28 = (int)local_1f8 == 0;
                          if ((int)local_1f8 == 0) {
                            bVar12 = cVar7 == '\0';
                            *(undefined4 *)(lVar19 + 0x40) = 0;
                            *(undefined4 *)(lVar19 + 0x44) = 0;
                          }
                          else {
                            fVar29 = (float)(local_1f8 & 0xffffffff);
                            *(float *)(lVar19 + 0x40) = fVar29 * *(float *)(lVar24 + 0x2fd8);
                            if (local_2b8 == '\0') {
                              fVar30 = (float)FUN_141d90000((longlong)(int)uVar23 * 0x1c +
                                                            *(longlong *)(local_290 + 0x1040),lVar24
                                                           );
                              bVar12 = cVar7 == '\0';
                              *(float *)(lVar19 + 0x44) = fVar29 / fVar30;
                            }
                            else {
                              fVar30 = (float)FUN_141d90000((longlong)local_2ac * 0x1c + *local_238,
                                                            lVar24);
                              bVar12 = cVar7 == '\0';
                              *(float *)(lVar19 + 0x44) = fVar29 / fVar30;
                            }
                          }
                        }
                      }
                    }
                    else {
                      cVar7 = FHZBOcclusionTester::IsValidFrame
                                        (local_1a8,*(undefined4 *)(lVar19 + 0x2c));
                      if (cVar7 != '\0') {
                        cVar7 = FHZBOcclusionTester::IsVisible
                                          (lVar11,*(undefined4 *)(lVar19 + 0x34));
                        bVar28 = cVar7 == '\0';
                        bVar12 = true;
                      }
                    }
                    lVar24 = local_1a0;
                    bVar22 = bVar28;
                    if (((DAT_146a9ecd4 != 0) && (local_1a0 != 0)) && (bVar28 != false)) {
                      if (local_2b8 == '\0') {
                        pfVar21 = (float *)((longlong)(int)uVar23 * 0x1c +
                                           *(longlong *)(local_290 + 0x1040));
                      }
                      else {
                        pfVar21 = (float *)((longlong)local_2ac * 0x1c + *local_238);
                      }
                      local_29f = 0x32ff;
                      local_2a0 = 0x32;
                      local_29d = 0xff;
                      FLinearColor::FLinearColor(local_150,&local_2a0);
                      local_170 = pfVar21[2] + pfVar21[5];
                      local_17c = pfVar21[2] - pfVar21[5];
                      local_2c8 = 0;
                      local_184 = CONCAT44(pfVar21[1] - pfVar21[4],*pfVar21 - pfVar21[3]);
                      local_178 = CONCAT44(pfVar21[1] + pfVar21[4],*pfVar21 + pfVar21[3]);
                      local_2d0 = 0;
                      local_2d8 = 0;
                      local_16c = 1;
                      local_160 = local_17c;
                      local_154 = local_170;
                      FUN_1427055a0(lVar24,&local_184,local_150,1);
                    }
                  }
                }
                else {
                  bVar12 = (byte)(*(uint *)(local_288 + 0x28cc) >> 7) & 1;
                }
                iVar20 = local_29c;
                uVar17 = (longlong)local_29c % (longlong)local_280 & 0xffffffff;
                if ((*(longlong *)(lVar19 + 8 + uVar17 * 8) != 0) &&
                   (*(int *)(lVar19 + 0x20 + uVar17 * 4) == local_29c - local_280)) {
                  lVar24 = local_1f0[1];
                  iVar10 = (int)lVar24 + 1;
                  *(int *)(local_1f0 + 1) = iVar10;
                  if (*(int *)((longlong)local_1f0 + 0xc) < iVar10) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
                  }
                  *(longlong *)(*local_1f0 + (longlong)(int)lVar24 * 8) = lVar19;
                }
LAB_141d81c67:
                lVar24 = local_288;
                if ((local_2b2 != '\0') && (local_2b7 != 0)) {
                  if (local_2b5 == '\0') {
LAB_141d81cce:
                    local_260 = 0.0;
                  }
                  else {
                    bVar13 = *(byte *)(lVar19 + 0x4c);
                    if (((bVar13 & 0x3f) == 0) &&
                       (DAT_1464c3128 < (uint)(iVar20 - *(int *)(lVar19 + 0x30)))) {
                      bVar13 = (bVar13 ^ (byte)DAT_1464c312c) & 0x3f ^ bVar13;
                      *(byte *)(lVar19 + 0x4c) = bVar13;
                    }
                    if ((bVar13 & 0x3f) == 0) goto LAB_141d81cce;
                    *(byte *)(lVar19 + 0x4c) = (bVar13 - 1 ^ bVar13) & 0x3f ^ bVar13;
                    local_260 = DAT_146a9ece0;
                  }
                  if (local_2b8 == '\0') {
                    plVar15 = (longlong *)
                              ((longlong)(int)uVar23 * 0x1c + *(longlong *)(local_290 + 0x1040));
                  }
                  else {
                    plVar15 = (longlong *)((longlong)local_2ac * 0x1c + *local_238);
                  }
                  local_260 = DAT_146a9ece4 + local_260;
                  lVar11 = *plVar15;
                  local_26c = local_260 + *(float *)((longlong)plVar15 + 0xc);
                  fStack_268 = local_260 + *(float *)(plVar15 + 2);
                  local_264 = local_260 + *(float *)((longlong)plVar15 + 0x14);
                  local_260 = local_260 + *(float *)(plVar15 + 3);
                  local_270 = *(float *)(plVar15 + 1);
                  local_278._0_4_ = (float)lVar11;
                  local_278._4_4_ = (float)((ulonglong)lVar11 >> 0x20);
                  fVar30 = (float)local_278 - *(float *)(local_288 + 0x900);
                  fVar31 = local_278._4_4_ - *(float *)(local_288 + 0x904);
                  fVar29 = local_270 - *(float *)(local_288 + 0x908);
                  if (local_210 <= fVar31 * fVar31 + fVar30 * fVar30 + fVar29 * fVar29) {
                    fVar29 = local_278._4_4_;
                    if (*(char *)(local_288 + 0x1190) == '\0') {
                      if (*(float *)(local_288 + 0x3cc) <= 1.0 &&
                          *(float *)(local_288 + 0x3cc) != 1.0) {
                        bVar28 = local_260 < 1048576.0;
                      }
                      else {
                        local_278 = lVar11;
                        lVar11 = FUN_1427633e0(local_288,local_138,&local_278,0);
                        bVar28 = *(float *)(lVar11 + 8) - local_260 * *(float *)(lVar24 + 0x3b8) <
                                 1.0;
                        fVar29 = local_278._4_4_;
                        lVar11 = local_278;
                      }
                    }
                    else {
                      bVar28 = (*(float *)(local_288 + 0x11a0) * (float)local_278 +
                                *(float *)(local_288 + 0x11a4) * local_278._4_4_ +
                               *(float *)(local_288 + 0x11a8) * local_270) -
                               *(float *)(local_288 + 0x11ac) <
                               -(ABS(*(float *)(local_288 + 0x11a0) * local_26c) +
                                 ABS(*(float *)(local_288 + 0x11a4) * fStack_268) +
                                ABS(*(float *)(local_288 + 0x11a8) * local_264));
                    }
                    local_278 = lVar11;
                    plVar15 = local_198;
                    lVar11 = local_278;
                    if (bVar28) {
                      *(int *)(lVar19 + 0x2c) = iVar20;
                      if (local_2b4 == '\0') {
                        if ((local_2b8 == '\0') && ((local_2b1 & 4) != 0)) {
                          if (bVar22 == false) {
                            uVar26 = 0;
                            if (bVar12 != 0) {
                              uVar9 = DAT_146a99620;
                              if (0xdf2 < DAT_146a99620) {
                                uVar9 = 0;
                              }
                              DAT_146a99620 = uVar9 + 1;
                              if (DAT_1464c9c19 == '\0') {
                                fVar30 = fVar3 - *(float *)(lVar19 + 0x38);
                                fVar31 = (float)(&DAT_146a99624)[uVar9] * 0.125 * local_228;
                                bVar28 = fVar30 == fVar31;
                                bVar27 = fVar30 < fVar31;
                              }
                              else {
                                fVar30 = *(float *)(DAT_146b17150 + 0x8d4);
                                fVar31 = *(float *)(lVar19 + 0x40) / fVar30;
                                if (fVar31 <= 1.0) {
                                  fVar31 = 1.0;
                                }
                                fVar31 = fVar31 * (float)(&DAT_146a99624)[uVar9];
                                bVar28 = fVar30 == fVar31;
                                bVar27 = fVar30 < fVar31;
                              }
                              if (bVar27 || bVar28) goto LAB_141d82037;
                            }
                          }
                          else {
                            uVar26 = 1;
                          }
                        }
                        else {
                          uVar26 = 0;
                        }
                        local_208 = (float)local_278 + *(float *)(lVar24 + 0x8d0);
                        fStack_204 = fVar29 + *(float *)(lVar24 + 0x8d4);
                        local_200 = local_270 + *(float *)(lVar24 + 0x8d8);
                        iVar20 = (int)local_1e8[1];
                        lVar24 = (longlong)iVar20;
                        local_1c8 = CONCAT44(fStack_268,local_26c);
                        local_1c0 = local_264;
                        *(int *)(local_1e8 + 1) = iVar20 + 1;
                        if (*(int *)((longlong)local_1e8 + 0xc) < iVar20 + 1) {
                          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(local_1e8,iVar20);
                        }
                        lVar11 = *local_1e8;
                        *(longlong *)(lVar11 + lVar24 * 0x28) = lVar19;
                        *(ulonglong *)(lVar11 + 8 + lVar24 * 0x28) = CONCAT44(fStack_204,local_208);
                        *(float *)(lVar11 + 0x10 + lVar24 * 0x28) = local_200;
                        *(undefined8 *)(lVar11 + 0x14 + lVar24 * 0x28) = local_1c8;
                        *(float *)(lVar11 + 0x1c + lVar24 * 0x28) = local_1c0;
                        *(undefined1 *)(lVar11 + 0x20 + lVar24 * 0x28) = uVar26;
                      }
                      else {
                        lVar24 = local_198[1];
                        iVar20 = (int)lVar24 + 1;
                        *(int *)(local_198 + 1) = iVar20;
                        if (*(int *)((longlong)local_198 + 0xc) < iVar20) {
                          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                          ::ResizeGrow(local_198);
                        }
                        plVar15 = (longlong *)((longlong)(int)lVar24 * 0x20 + *plVar15);
                        *plVar15 = lVar19;
                        plVar15[1] = local_278;
                        *(float *)(plVar15 + 2) = local_270;
                        *(ulonglong *)((longlong)plVar15 + 0x14) = CONCAT44(fStack_268,local_26c);
                        *(float *)((longlong)plVar15 + 0x1c) = local_264;
                      }
                      goto LAB_141d82037;
                    }
                  }
                  local_278 = lVar11;
                  bVar22 = false;
                  bVar12 = 1;
                }
LAB_141d82037:
                *(float *)(lVar19 + 0x3c) = fVar3;
                if ((bVar22 == false) && (bVar12 != 0)) {
                  *(float *)(lVar19 + 0x38) = fVar3;
                }
                *(byte *)(lVar19 + 0x4c) = *(byte *)(lVar19 + 0x4c) & 0x3f;
                *(int *)(lVar19 + 0x30) = local_29c;
                *(byte *)(lVar19 + 0x4c) =
                     bVar22 << 6 | *(byte *)(lVar19 + 0x4c) & 0x7f | bVar12 << 7;
                uVar9 = local_2a4;
              }
              plVar15 = local_1e0;
              if (local_2b8 == '\0') {
                if (bVar22 == false) {
                  if (bVar12 != 0) {
                    lVar24 = *(longlong *)(local_288 + 0x1af0);
                    if (*(longlong *)(local_288 + 0x1af0) == 0) {
                      lVar24 = local_288 + 0x1ae0;
                    }
                    puVar2 = (uint *)(lVar24 + (longlong)local_2b0 * 4);
                    *puVar2 = *puVar2 | uVar9;
                  }
                }
                else {
                  lVar24 = *(longlong *)(local_190 + 0x10);
                  if (*(longlong *)(local_190 + 0x10) == 0) {
                    lVar24 = local_190;
                  }
                  puVar2 = (uint *)(lVar24 + (longlong)local_2b0 * 4);
                  *puVar2 = *puVar2 & ~uVar9;
                }
              }
              else {
                iVar20 = (int)local_1e0[1];
                *(int *)(local_1e0 + 1) = iVar20 + 1;
                if (*(int *)((longlong)local_1e0 + 0xc) < iVar20 + 1) {
                  TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(local_1e0,iVar20);
                }
                *(bool *)((longlong)iVar20 + *plVar15) = bVar22;
                if ((bVar22 != false) || (local_2b6 = '\0', bVar12 == 0)) {
                  local_2b3 = '\0';
                }
              }
              local_2ac = local_2ac + 1;
              lVar24 = local_288;
              plVar15 = local_1d8;
              plVar25 = local_1e0;
              iVar20 = local_2b0;
            } while (local_2ac < local_294);
          }
          if (local_2b8 != '\0') {
            if (0 < (int)plVar25[1]) {
              local_2d8 = (int)plVar25[1] - local_224;
              plVar4 = *(longlong **)
                        (*(longlong *)(*(longlong *)(local_290 + 0xfe0) + (longlong)(int)uVar23 * 8)
                        + 8);
              (**(code **)(*plVar4 + 0x70))(plVar4,lVar24,plVar25);
            }
            if (local_2b6 == '\0') {
              if (local_2b3 != '\0') {
                lVar11 = *(longlong *)(lVar24 + 0x1af0);
                if (*(longlong *)(lVar24 + 0x1af0) == 0) {
                  lVar11 = lVar24 + 0x1ae0;
                }
                puVar2 = (uint *)(lVar11 + (longlong)iVar20 * 4);
                *puVar2 = *puVar2 | uVar9;
              }
            }
            else {
              lVar11 = *(longlong *)(lVar24 + 0x1ad0);
              if (*(longlong *)(lVar24 + 0x1ad0) == 0) {
                lVar11 = lVar24 + 0x1ac0;
              }
              puVar2 = (uint *)(lVar11 + (longlong)iVar20 * 4);
              *puVar2 = *puVar2 & ~uVar9;
            }
          }
        }
        else {
          local_238 = (longlong *)
                      (**(code **)(**(longlong **)
                                     (*(longlong *)(*(longlong *)(local_290 + 0xfe0) + lVar19 * 8) +
                                     8) + 0x68))();
          local_2b8 = '\x01';
          local_294 = (int)local_238[1];
          if (local_294 != 0) {
            if (*(int *)((longlong)plVar25 + 0xc) < local_294) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar25,local_294);
            }
            goto LAB_141d816d1;
          }
          lVar11 = *(longlong *)(lVar24 + 0x1ad0);
          if (*(longlong *)(lVar24 + 0x1ad0) == 0) {
            lVar11 = lVar24 + 0x1ac0;
          }
          puVar2 = (uint *)(lVar11 + (longlong)iVar20 * 4);
          *puVar2 = *puVar2 & ~uVar9;
        }
        local_248 = local_248 & ~uVar9;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_258);
        local_298 = local_298 + 1;
        lVar11 = local_290;
        if (*(int *)(local_250 + 0x18) <= (int)local_244) {
          *(undefined4 *)(local_230 + 9) = 0;
          return;
        }
      } while( true );
    }
  }
  *(undefined4 *)(local_230 + 9) = 0;
  return;
}



// FUNCTION 141d822a0 FUN_141d822a0 body=91 status=ok
// SIG undefined FUN_141d822a0(void)

undefined8 FUN_141d822a0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a9f640;
  local_10 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141d82300 FUN_141d82300 body=349 status=ok
// SIG undefined FUN_141d82300(void)

void FUN_141d82300(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar1 = iVar6;
    iVar8 = iVar5;
joined_r0x000141d8232a:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(uint *)(param_1 + (longlong)iVar6 * 2 + 5) <
              *(uint *)(param_1 + (longlong)iVar7 * 2 + 1)) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar10 = param_1 + (longlong)iVar5 * 2;
        puVar9 = param_1 + (longlong)iVar7 * 2;
        if (*(uint *)(puVar10 + 1) < *(uint *)(puVar9 + 1)) {
          if (puVar10 != puVar9) {
            uVar2 = puVar9[1];
            uVar3 = *puVar10;
            uVar4 = puVar10[1];
            *puVar10 = *puVar9;
            puVar10[1] = uVar2;
            *puVar9 = uVar3;
            puVar9[1] = uVar4;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x000141d8232a;
        }
      }
      iVar6 = iVar1 + -2;
      iVar5 = iVar8 + -1;
      iVar1 = iVar6;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar9) {
        uVar2 = puVar9[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        *param_1 = *puVar9;
        param_1[1] = uVar2;
        *puVar9 = uVar3;
        puVar9[1] = uVar4;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar5 * 2;
          iVar6 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(uint *)(param_1 + (longlong)iVar1 * 2 + 5) <
                *(uint *)(param_1 + (longlong)iVar6 * 2 + 1)) {
              iVar6 = iVar1;
            }
            iVar6 = iVar6 + 1;
          }
          puVar11 = param_1 + (longlong)iVar5 * 2;
          puVar10 = param_1 + (longlong)iVar6 * 2;
          if (*(uint *)(puVar10 + 1) <= *(uint *)(puVar11 + 1)) break;
          if (puVar11 != puVar10) {
            uVar2 = puVar10[1];
            uVar3 = *puVar11;
            uVar4 = puVar11[1];
            *puVar11 = *puVar10;
            puVar11[1] = uVar2;
            *puVar10 = uVar3;
            puVar10[1] = uVar4;
          }
          iVar5 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = puVar9 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141d82460 FUN_141d82460 body=800 status=ok
// SIG undefined FUN_141d82460(void)

void FUN_141d82460(undefined8 *param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong *puVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong *puVar19;
  int iVar20;
  undefined8 *puVar21;
  bool bVar22;
  
  iVar12 = (param_2 + -2) / 2;
  if (-1 < iVar12) {
    iVar14 = iVar12 * 2 + 1;
    iVar3 = iVar14;
    iVar20 = iVar12;
joined_r0x000141d82496:
    do {
      if (iVar14 < param_2) {
        iVar14 = iVar12 * 2;
        iVar16 = iVar14 + 1;
        if (iVar14 + 2 < param_2) {
          lVar18 = (longlong)iVar16;
          puVar15 = param_1 + ((longlong)iVar14 + 2) * 4;
          uVar1 = *(ulonglong *)(puVar15[2] + 0xa0);
          uVar2 = *(ulonglong *)(param_1[lVar18 * 4 + 2] + 0xa0);
          bVar22 = uVar1 < uVar2;
          if ((((uVar1 == uVar2) &&
               (bVar22 = *puVar15 < (ulonglong)param_1[lVar18 * 4], *puVar15 == param_1[lVar18 * 4])
               ) && (bVar22 = (byte)puVar15[3] < *(byte *)(param_1 + lVar18 * 4 + 3),
                    (byte)puVar15[3] == *(byte *)(param_1 + lVar18 * 4 + 3))) &&
             (uVar13 = *(uint *)(param_1[lVar18 * 4 + 2] + 0x8c) >> 3 & 1,
             uVar17 = *(uint *)(puVar15[2] + 0x8c) >> 3 & 1, bVar22 = uVar17 < uVar13,
             uVar17 == uVar13)) {
            bVar22 = false;
          }
          if (bVar22) {
            iVar16 = iVar14;
          }
          iVar16 = iVar16 + 1;
        }
        puVar19 = param_1 + (longlong)iVar12 * 4;
        puVar15 = param_1 + (longlong)iVar16 * 4;
        uVar1 = *(ulonglong *)(puVar19[2] + 0xa0);
        uVar2 = *(ulonglong *)(puVar15[2] + 0xa0);
        bVar22 = uVar1 < uVar2;
        if ((((uVar1 != uVar2) || (bVar22 = *puVar19 < *puVar15, *puVar19 != *puVar15)) ||
            ((bVar22 = (byte)puVar19[3] < (byte)puVar15[3], (byte)puVar19[3] != (byte)puVar15[3] ||
             (uVar13 = *(uint *)(puVar15[2] + 0x8c) >> 3 & 1,
             uVar17 = *(uint *)(puVar19[2] + 0x8c) >> 3 & 1, bVar22 = uVar17 < uVar13,
             uVar17 != uVar13)))) && (bVar22)) {
          if (puVar19 != puVar15) {
            uVar1 = puVar15[1];
            uVar2 = *puVar19;
            uVar4 = puVar19[1];
            uVar5 = puVar19[2];
            uVar6 = puVar19[3];
            *puVar19 = *puVar15;
            puVar19[1] = uVar1;
            uVar1 = puVar15[3];
            puVar19[2] = puVar15[2];
            puVar19[3] = uVar1;
            *puVar15 = uVar2;
            puVar15[1] = uVar4;
            puVar15[2] = uVar5;
            puVar15[3] = uVar6;
          }
          iVar14 = iVar16 * 2 + 1;
          iVar12 = iVar16;
          goto joined_r0x000141d82496;
        }
      }
      iVar14 = iVar3 + -2;
      iVar12 = iVar20 + -1;
      iVar3 = iVar14;
      iVar20 = iVar12;
    } while (-1 < iVar12);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar21 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar21) {
        uVar7 = puVar21[1];
        uVar8 = *param_1;
        uVar9 = param_1[1];
        uVar10 = param_1[2];
        uVar11 = param_1[3];
        *param_1 = *puVar21;
        param_1[1] = uVar7;
        uVar7 = puVar21[3];
        param_1[2] = puVar21[2];
        param_1[3] = uVar7;
        *puVar21 = uVar8;
        puVar21[1] = uVar9;
        puVar21[2] = uVar10;
        puVar21[3] = uVar11;
      }
      iVar12 = 0;
      if (1 < param_2) {
        do {
          iVar3 = iVar12 * 2;
          iVar14 = iVar3 + 1;
          if (iVar3 + 2 < param_2) {
            lVar18 = (longlong)iVar14;
            puVar15 = param_1 + ((longlong)iVar3 + 2) * 4;
            uVar1 = *(ulonglong *)(puVar15[2] + 0xa0);
            uVar2 = *(ulonglong *)(param_1[lVar18 * 4 + 2] + 0xa0);
            bVar22 = uVar1 < uVar2;
            if (((uVar1 == uVar2) &&
                (bVar22 = *puVar15 < (ulonglong)param_1[lVar18 * 4], *puVar15 == param_1[lVar18 * 4]
                )) && ((bVar22 = (byte)puVar15[3] < *(byte *)(param_1 + lVar18 * 4 + 3),
                       (byte)puVar15[3] == *(byte *)(param_1 + lVar18 * 4 + 3) &&
                       (uVar13 = *(uint *)(param_1[lVar18 * 4 + 2] + 0x8c) >> 3 & 1,
                       uVar17 = *(uint *)(puVar15[2] + 0x8c) >> 3 & 1, bVar22 = uVar17 < uVar13,
                       uVar17 == uVar13)))) {
              bVar22 = false;
            }
            if (bVar22) {
              iVar14 = iVar3;
            }
            iVar14 = iVar14 + 1;
          }
          puVar19 = param_1 + (longlong)iVar12 * 4;
          puVar15 = param_1 + (longlong)iVar14 * 4;
          uVar1 = *(ulonglong *)(puVar19[2] + 0xa0);
          uVar2 = *(ulonglong *)(puVar15[2] + 0xa0);
          bVar22 = uVar1 < uVar2;
          if (((((uVar1 == uVar2) && (bVar22 = *puVar19 < *puVar15, *puVar19 == *puVar15)) &&
               (bVar22 = (byte)puVar19[3] < (byte)puVar15[3], (byte)puVar19[3] == (byte)puVar15[3]))
              && (uVar13 = *(uint *)(puVar15[2] + 0x8c) >> 3 & 1,
                 uVar17 = *(uint *)(puVar19[2] + 0x8c) >> 3 & 1, bVar22 = uVar17 < uVar13,
                 uVar17 == uVar13)) || (!bVar22)) break;
          if (puVar19 != puVar15) {
            uVar1 = puVar15[1];
            uVar2 = *puVar19;
            uVar4 = puVar19[1];
            uVar5 = puVar19[2];
            uVar6 = puVar19[3];
            *puVar19 = *puVar15;
            puVar19[1] = uVar1;
            uVar1 = puVar15[3];
            puVar19[2] = puVar15[2];
            puVar19[3] = uVar1;
            *puVar15 = uVar2;
            puVar15[1] = uVar4;
            puVar15[2] = uVar5;
            puVar15[3] = uVar6;
          }
          iVar12 = iVar14;
        } while (iVar14 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar21 = puVar21 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141d82780 IntroSortInternal<FOcclusionBounds_*,FIdentityFunctor,TDereferenceWrapper<FOcclusionBounds_*,<lambda_fa36a08a17e8b66bb8a9f51b7b42bff9>_>_> body=905 status=ok
// SIG undefined IntroSortInternal<FOcclusionBounds_*,FIdentityFunctor,TDereferenceWrapper<FOcclusionBounds_*,<lambda_fa36a08a17e8b66bb8a9f51b7b42bff9>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FOcclusionBounds_*,FIdentityFunctor,TDereferenceWrapper<FOcclusionBounds_*,<lambda_fa36a08a17e8b66bb8a9f51b7b42bff9>_>_>
               (longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
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
    fVar15 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar15 = ::_guard_xfg_dispatch_icall_nop(fVar15);
    local_318 = (undefined4)(longlong)(fVar15 + fVar15);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar14 = &local_328;
    do {
      plVar8 = (longlong *)*plVar14;
      plVar13 = (longlong *)plVar14[1];
      local_338 = (int)plVar14[2];
      lVar9 = ((longlong)plVar13 - (longlong)plVar8 >> 3) + 1;
      plVar7 = plVar8;
      if (local_338 != 0) {
LAB_141d82850:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          plVar11 = plVar13 + 1;
          lVar1 = plVar7[lVar9 >> 1];
          plVar7[lVar9 >> 1] = *plVar7;
          *plVar7 = lVar1;
          plVar8 = plVar7;
LAB_141d82880:
          plVar8 = plVar8 + 1;
          if (plVar8 <= plVar13) goto code_r0x000141d82889;
          goto LAB_141d828a0;
        }
        for (; plVar11 = plVar7, plVar8 = plVar7, plVar7 < plVar13; plVar13 = plVar13 + -1) {
          while (plVar12 = plVar11, plVar8 = plVar8 + 1, plVar8 <= plVar13) {
            plVar11 = plVar8;
            if (*(uint *)(*plVar8 + 0x20) <= *(uint *)(*plVar12 + 0x20)) {
              plVar11 = plVar12;
            }
          }
          lVar9 = *plVar12;
          *plVar12 = *plVar13;
          *plVar13 = lVar9;
        }
        goto LAB_141d82a68;
      }
LAB_141d82954:
      iVar5 = (int)lVar9;
      iVar3 = (iVar5 + -2) / 2;
      if (-1 < iVar3) {
        iVar4 = iVar3 * 2 + 1;
        iVar2 = iVar4;
        iVar6 = iVar3;
joined_r0x000141d8296d:
        do {
          if (iVar4 < iVar5) {
            iVar4 = iVar3 * 2;
            iVar10 = iVar4 + 1;
            if (iVar4 + 2 < iVar5) {
              if (*(uint *)(plVar8[(longlong)iVar4 + 2] + 0x20) < *(uint *)(plVar8[iVar10] + 0x20))
              {
                iVar10 = iVar4;
              }
              iVar10 = iVar10 + 1;
            }
            lVar9 = plVar8[iVar3];
            if (*(uint *)(lVar9 + 0x20) < *(uint *)(plVar8[iVar10] + 0x20)) {
              iVar4 = iVar10 * 2 + 1;
              plVar8[iVar3] = plVar8[iVar10];
              plVar8[iVar10] = lVar9;
              iVar3 = iVar10;
              goto joined_r0x000141d8296d;
            }
          }
          iVar4 = iVar2 + -2;
          iVar3 = iVar6 + -1;
          iVar2 = iVar4;
          iVar6 = iVar3;
        } while (-1 < iVar3);
      }
      iVar5 = iVar5 + -1;
      lVar9 = (longlong)iVar5;
      if (0 < iVar5) {
        do {
          iVar3 = 0;
          lVar1 = *plVar8;
          *plVar8 = plVar8[lVar9];
          plVar8[lVar9] = lVar1;
          if (1 < iVar5) {
            do {
              iVar2 = iVar3 * 2;
              iVar4 = iVar2 + 1;
              if (iVar2 + 2 < iVar5) {
                if (*(uint *)(plVar8[(longlong)iVar2 + 2] + 0x20) < *(uint *)(plVar8[iVar4] + 0x20))
                {
                  iVar4 = iVar2;
                }
                iVar4 = iVar4 + 1;
              }
              lVar1 = plVar8[iVar3];
              if (*(uint *)(plVar8[iVar4] + 0x20) <= *(uint *)(lVar1 + 0x20)) break;
              plVar8[iVar3] = plVar8[iVar4];
              plVar8[iVar4] = lVar1;
              iVar3 = iVar4;
            } while (iVar4 * 2 + 1 < iVar5);
          }
          iVar5 = iVar5 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
LAB_141d82a68:
      plVar14 = plVar14 + -3;
    } while (&local_328 <= plVar14);
  }
  return;
code_r0x000141d82889:
  if (*(uint *)(*plVar8 + 0x20) <= *(uint *)(*plVar7 + 0x20)) goto LAB_141d82880;
LAB_141d828a0:
  do {
    plVar12 = plVar11;
    lVar9 = plVar12[-1];
    plVar11 = plVar12 + -1;
    if (plVar11 <= plVar7) break;
  } while (*(uint *)(*plVar7 + 0x20) <= *(uint *)(lVar9 + 0x20));
  if (plVar8 <= plVar11) {
    lVar1 = *plVar8;
    *plVar8 = lVar9;
    *plVar11 = lVar1;
    goto LAB_141d82880;
  }
  lVar1 = *plVar7;
  *plVar7 = lVar9;
  *plVar11 = lVar1;
  local_338 = local_338 + -1;
  if ((longlong)((longlong)plVar11 + (-8 - (longlong)plVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar13 - (longlong)plVar8 & 0xfffffffffffffff8U)) {
    if (plVar8 < plVar13) {
      *plVar14 = (longlong)plVar8;
      plVar14[1] = (longlong)plVar13;
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar11 <= plVar7 + 1) goto LAB_141d82a68;
    plVar13 = plVar12 + -2;
    plVar8 = plVar7;
  }
  else {
    if (plVar7 + 1 < plVar11) {
      *plVar14 = (longlong)plVar7;
      plVar14[1] = (longlong)(plVar12 + -2);
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar13 <= plVar8) goto LAB_141d82a68;
  }
  lVar9 = ((longlong)plVar13 - (longlong)plVar8 >> 3) + 1;
  plVar7 = plVar8;
  if (local_338 == 0) goto LAB_141d82954;
  goto LAB_141d82850;
}



// FUNCTION 141d82b10 FUN_141d82b10 body=637 status=ok
// SIG undefined FUN_141d82b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d82b10(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x10 + -0x10 + param_1;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar16 = _guard_xfg_dispatch_icall_nop(fVar16);
    local_318 = (undefined4)(longlong)(fVar16 + fVar16);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar10 = &local_328;
    do {
      puVar15 = (undefined8 *)*plVar10;
      puVar13 = (undefined8 *)plVar10[1];
      lVar1 = plVar10[2];
      local_338._0_4_ = (int)lVar1;
      lVar8 = ((longlong)puVar13 - (longlong)puVar15 >> 4) + 1;
      puVar14 = puVar15;
      if ((int)local_338 != 0) {
LAB_141d82be0:
        if (8 < lVar8) {
          puVar15 = puVar14 + (lVar8 / 2) * 2;
          if (puVar15 != puVar14) {
            uVar2 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar3 = *(undefined4 *)(puVar14 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar5 = *puVar15;
            uVar6 = puVar15[1];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar2;
            *(undefined4 *)(puVar15 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar4;
            *puVar14 = uVar5;
            puVar14[1] = uVar6;
          }
          puVar11 = puVar13 + 2;
          puVar15 = puVar14;
LAB_141d82c16:
          puVar9 = puVar15;
          puVar15 = puVar9 + 2;
          if (puVar15 <= puVar13) goto code_r0x000141d82c1f;
          goto LAB_141d82c30;
        }
        for (; puVar11 = puVar14, puVar15 = puVar14, puVar14 < puVar13; puVar13 = puVar13 + -2) {
          while (puVar9 = puVar11, puVar15 = puVar15 + 2, puVar15 <= puVar13) {
            puVar11 = puVar15;
            if (*(uint *)(puVar15 + 1) <= *(uint *)(puVar9 + 1)) {
              puVar11 = puVar9;
            }
          }
          if (puVar9 != puVar13) {
            uVar7 = puVar13[1];
            uVar5 = *puVar9;
            uVar6 = puVar9[1];
            *puVar9 = *puVar13;
            puVar9[1] = uVar7;
            *puVar13 = uVar5;
            puVar13[1] = uVar6;
          }
        }
        goto LAB_141d82cfb;
      }
LAB_141d82cec:
      local_338 = lVar1;
      FUN_141d82300(puVar15,lVar8,param_3,param_4);
LAB_141d82cfb:
      plVar10 = plVar10 + -3;
    } while (&local_328 <= plVar10);
  }
  return;
code_r0x000141d82c1f:
  if (*(uint *)(puVar9 + 3) <= *(uint *)(puVar14 + 1)) goto LAB_141d82c16;
LAB_141d82c30:
  do {
    puVar12 = puVar11;
    puVar11 = puVar12 + -2;
    if (puVar11 <= puVar14) break;
  } while (*(uint *)(puVar14 + 1) <= *(uint *)(puVar12 + -1));
  if (puVar15 <= puVar11) {
    if (puVar15 != puVar11) {
      uVar2 = *(undefined4 *)((longlong)puVar12 + -0xc);
      uVar3 = *(undefined4 *)(puVar12 + -1);
      uVar4 = *(undefined4 *)((longlong)puVar12 + -4);
      uVar5 = *puVar15;
      uVar6 = puVar9[3];
      *(undefined4 *)puVar15 = *(undefined4 *)puVar11;
      *(undefined4 *)((longlong)puVar9 + 0x14) = uVar2;
      *(undefined4 *)(puVar9 + 3) = uVar3;
      *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar4;
      *puVar11 = uVar5;
      puVar12[-1] = uVar6;
    }
    goto LAB_141d82c16;
  }
  if (puVar14 != puVar11) {
    uVar2 = *(undefined4 *)((longlong)puVar12 + -0xc);
    uVar3 = *(undefined4 *)(puVar12 + -1);
    uVar4 = *(undefined4 *)((longlong)puVar12 + -4);
    uVar5 = *puVar14;
    uVar6 = puVar14[1];
    *(undefined4 *)puVar14 = *(undefined4 *)puVar11;
    *(undefined4 *)((longlong)puVar14 + 4) = uVar2;
    *(undefined4 *)(puVar14 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0xc) = uVar4;
    *puVar11 = uVar5;
    puVar12[-1] = uVar6;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar11 + (-0x10 - (longlong)puVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar13 - (longlong)puVar15 & 0xfffffffffffffff0U)) {
    if (puVar15 < puVar13) {
      *plVar10 = (longlong)puVar15;
      plVar10[1] = (longlong)puVar13;
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (puVar11 <= puVar14 + 2) goto LAB_141d82cfb;
    puVar13 = puVar12 + -4;
    puVar15 = puVar14;
  }
  else {
    if (puVar14 + 2 < puVar11) {
      *plVar10 = (longlong)puVar14;
      plVar10[1] = (longlong)(puVar12 + -4);
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (puVar13 <= puVar15) goto LAB_141d82cfb;
  }
  lVar8 = ((longlong)puVar13 - (longlong)puVar15 >> 4) + 1;
  puVar14 = puVar15;
  if ((int)local_338 == 0) goto LAB_141d82cec;
  goto LAB_141d82be0;
}



// FUNCTION 141d82d90 FUN_141d82d90 body=978 status=ok
// SIG undefined FUN_141d82d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d82d90(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  longlong *plVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_2 * 0x20 + -0x20 + param_1;
    fVar22 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar22 = fVar22 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar22 = _guard_xfg_dispatch_icall_nop(fVar22);
    local_328 = (undefined4)(longlong)(fVar22 + fVar22);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar20 = &local_338;
    do {
      puVar19 = (ulonglong *)*plVar20;
      puVar16 = (ulonglong *)plVar20[1];
      lVar1 = plVar20[2];
      local_348._0_4_ = (int)lVar1;
      lVar13 = ((longlong)puVar16 - (longlong)puVar19 >> 5) + 1;
      puVar18 = puVar19;
      if ((int)local_348 != 0) {
LAB_141d82e60:
        if (8 < lVar13) {
          puVar19 = puVar18 + (lVar13 / 2) * 4;
          if (puVar19 != puVar18) {
            uVar4 = *(undefined4 *)((longlong)puVar18 + 4);
            uVar2 = puVar18[1];
            uVar5 = *(undefined4 *)((longlong)puVar18 + 0xc);
            uVar9 = *puVar19;
            uVar6 = *(undefined4 *)((longlong)puVar19 + 4);
            uVar10 = puVar19[1];
            uVar7 = *(undefined4 *)((longlong)puVar19 + 0xc);
            uVar3 = puVar19[2];
            uVar8 = puVar19[3];
            *(int *)puVar19 = (int)*puVar18;
            *(undefined4 *)((longlong)puVar19 + 4) = uVar4;
            *(int *)(puVar19 + 1) = (int)uVar2;
            *(undefined4 *)((longlong)puVar19 + 0xc) = uVar5;
            uVar2 = puVar18[3];
            puVar19[2] = puVar18[2];
            puVar19[3] = uVar2;
            *(int *)puVar18 = (int)uVar9;
            *(undefined4 *)((longlong)puVar18 + 4) = uVar6;
            *(int *)(puVar18 + 1) = (int)uVar10;
            *(undefined4 *)((longlong)puVar18 + 0xc) = uVar7;
            puVar18[2] = uVar3;
            puVar18[3] = uVar8;
          }
          puVar14 = puVar16 + 4;
          puVar19 = puVar18;
LAB_141d82eb0:
          puVar17 = puVar19;
          puVar19 = puVar17 + 4;
          if (puVar19 <= puVar16) goto code_r0x000141d82eb9;
          goto LAB_141d82f10;
        }
        for (; puVar14 = puVar18, puVar19 = puVar18, puVar18 < puVar16; puVar16 = puVar16 + -4) {
          while (puVar17 = puVar14, puVar19 = puVar19 + 4, puVar19 <= puVar16) {
            uVar2 = *(ulonglong *)(puVar19[2] + 0xa0);
            uVar3 = *(ulonglong *)(puVar17[2] + 0xa0);
            bVar21 = uVar3 < uVar2;
            if (((uVar3 == uVar2) && (bVar21 = *puVar17 < *puVar19, *puVar17 == *puVar19)) &&
               ((bVar21 = (byte)puVar17[3] < (byte)puVar19[3], (byte)puVar17[3] == (byte)puVar19[3]
                && (uVar11 = *(uint *)(puVar19[2] + 0x8c) >> 3 & 1,
                   uVar12 = *(uint *)(puVar17[2] + 0x8c) >> 3 & 1, bVar21 = uVar12 < uVar11,
                   uVar12 == uVar11)))) {
              bVar21 = false;
            }
            puVar14 = puVar19;
            if (!bVar21) {
              puVar14 = puVar17;
            }
          }
          if (puVar17 != puVar16) {
            uVar2 = puVar16[1];
            uVar3 = *puVar17;
            uVar8 = puVar17[1];
            uVar9 = puVar17[2];
            uVar10 = puVar17[3];
            *puVar17 = *puVar16;
            puVar17[1] = uVar2;
            uVar2 = puVar16[3];
            puVar17[2] = puVar16[2];
            puVar17[3] = uVar2;
            *puVar16 = uVar3;
            puVar16[1] = uVar8;
            puVar16[2] = uVar9;
            puVar16[3] = uVar10;
          }
        }
        goto LAB_141d8304d;
      }
LAB_141d8303e:
      local_348 = lVar1;
      FUN_141d82460(puVar19,lVar13,param_3,param_4);
LAB_141d8304d:
      plVar20 = plVar20 + -3;
    } while (&local_338 <= plVar20);
  }
  return;
code_r0x000141d82eb9:
  uVar2 = *(ulonglong *)(puVar18[2] + 0xa0);
  uVar3 = *(ulonglong *)(puVar17[6] + 0xa0);
  bVar21 = uVar2 < uVar3;
  if (((((uVar2 == uVar3) && (bVar21 = *puVar18 < *puVar19, *puVar18 == *puVar19)) &&
       (bVar21 = (byte)puVar18[3] < (byte)puVar17[7], (byte)puVar18[3] == (byte)puVar17[7])) &&
      (uVar11 = *(uint *)(puVar17[6] + 0x8c) >> 3 & 1,
      uVar12 = *(uint *)(puVar18[2] + 0x8c) >> 3 & 1, bVar21 = uVar12 < uVar11, uVar12 == uVar11))
     || (!bVar21)) goto LAB_141d82eb0;
LAB_141d82f10:
  do {
    puVar15 = puVar14;
    puVar14 = puVar15 + -4;
    if (puVar14 <= puVar18) break;
    uVar2 = *(ulonglong *)(puVar15[-2] + 0xa0);
    uVar3 = *(ulonglong *)(puVar18[2] + 0xa0);
    bVar21 = uVar2 < uVar3;
  } while ((((uVar2 == uVar3) && (bVar21 = *puVar14 < *puVar18, *puVar14 == *puVar18)) &&
           ((bVar21 = (byte)puVar15[-1] < (byte)puVar18[3], (byte)puVar15[-1] == (byte)puVar18[3] &&
            (uVar11 = *(uint *)(puVar15[-2] + 0x8c) >> 3 & 1,
            uVar12 = *(uint *)(puVar18[2] + 0x8c) >> 3 & 1, bVar21 = uVar11 < uVar12,
            uVar11 == uVar12)))) || (!bVar21));
  if (puVar19 <= puVar14) {
    if (puVar19 != puVar14) {
      uVar4 = *(undefined4 *)((longlong)puVar15 + -0x1c);
      uVar2 = puVar15[-3];
      uVar5 = *(undefined4 *)((longlong)puVar15 + -0x14);
      uVar9 = *puVar19;
      uVar6 = *(undefined4 *)((longlong)puVar17 + 0x24);
      uVar10 = puVar17[5];
      uVar7 = *(undefined4 *)((longlong)puVar17 + 0x2c);
      uVar3 = puVar17[6];
      uVar8 = puVar17[7];
      *(int *)puVar19 = (int)*puVar14;
      *(undefined4 *)((longlong)puVar17 + 0x24) = uVar4;
      *(int *)(puVar17 + 5) = (int)uVar2;
      *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar5;
      uVar2 = puVar15[-1];
      puVar17[6] = puVar15[-2];
      puVar17[7] = uVar2;
      *(int *)puVar14 = (int)uVar9;
      *(undefined4 *)((longlong)puVar15 + -0x1c) = uVar6;
      *(int *)(puVar15 + -3) = (int)uVar10;
      *(undefined4 *)((longlong)puVar15 + -0x14) = uVar7;
      puVar15[-2] = uVar3;
      puVar15[-1] = uVar8;
    }
    goto LAB_141d82eb0;
  }
  if (puVar18 != puVar14) {
    uVar4 = *(undefined4 *)((longlong)puVar15 + -0x1c);
    uVar2 = puVar15[-3];
    uVar5 = *(undefined4 *)((longlong)puVar15 + -0x14);
    uVar9 = *puVar18;
    uVar6 = *(undefined4 *)((longlong)puVar18 + 4);
    uVar10 = puVar18[1];
    uVar7 = *(undefined4 *)((longlong)puVar18 + 0xc);
    uVar3 = puVar18[2];
    uVar8 = puVar18[3];
    *(int *)puVar18 = (int)*puVar14;
    *(undefined4 *)((longlong)puVar18 + 4) = uVar4;
    *(int *)(puVar18 + 1) = (int)uVar2;
    *(undefined4 *)((longlong)puVar18 + 0xc) = uVar5;
    uVar2 = puVar15[-1];
    puVar18[2] = puVar15[-2];
    puVar18[3] = uVar2;
    *(int *)puVar14 = (int)uVar9;
    *(undefined4 *)((longlong)puVar15 + -0x1c) = uVar6;
    *(int *)(puVar15 + -3) = (int)uVar10;
    *(undefined4 *)((longlong)puVar15 + -0x14) = uVar7;
    puVar15[-2] = uVar3;
    puVar15[-1] = uVar8;
  }
  local_348._0_4_ = (int)local_348 + -1;
  if ((longlong)((longlong)puVar14 + (-0x20 - (longlong)puVar18) & 0xffffffffffffffe0U) <
      (longlong)((longlong)puVar16 - (longlong)puVar19 & 0xffffffffffffffe0U)) {
    if (puVar19 < puVar16) {
      *plVar20 = (longlong)puVar19;
      plVar20[1] = (longlong)puVar16;
      *(int *)(plVar20 + 2) = (int)local_348;
      plVar20 = plVar20 + 3;
    }
    if (puVar14 <= puVar18 + 4) goto LAB_141d8304d;
    puVar16 = puVar15 + -8;
    puVar19 = puVar18;
  }
  else {
    if (puVar18 + 4 < puVar14) {
      *plVar20 = (longlong)puVar18;
      plVar20[1] = (longlong)(puVar15 + -8);
      *(int *)(plVar20 + 2) = (int)local_348;
      plVar20 = plVar20 + 3;
    }
    if (puVar16 <= puVar19) goto LAB_141d8304d;
  }
  lVar13 = ((longlong)puVar16 - (longlong)puVar19 >> 5) + 1;
  puVar18 = puVar19;
  if ((int)local_348 == 0) goto LAB_141d8303e;
  goto LAB_141d82e60;
}



// FUNCTION 141d83170 FUN_141d83170 body=1171 status=ok
// SIG undefined FUN_141d83170(void)

void FUN_141d83170(ushort *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  uint uVar2;
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
  longlong lVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  void *pvVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 local_res20;
  undefined4 local_res24;
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
  
  lVar19 = param_5;
  uVar27 = 0x3f800000;
  fVar24 = *(float *)(param_5 + 0x44) - *(float *)(param_4 + 0x8d0);
  fVar25 = *(float *)(param_5 + 0x48) - *(float *)(param_4 + 0x8d4);
  fVar3 = *(float *)(param_5 + 0x90);
  fVar4 = *(float *)(param_5 + 0x94);
  fVar5 = *(float *)(param_5 + 0x98);
  fVar6 = *(float *)(param_5 + 0x9c);
  fVar7 = *(float *)(param_5 + 0xa0);
  fVar8 = *(float *)(param_5 + 0xa4);
  fVar9 = *(float *)(param_5 + 0xa8);
  fVar10 = *(float *)(param_5 + 0xac);
  fVar26 = *(float *)(param_5 + 0x4c) - *(float *)(param_4 + 0x8d8);
  fVar11 = *(float *)(param_5 + 0xb0);
  fVar12 = *(float *)(param_5 + 0xb4);
  fVar13 = *(float *)(param_5 + 0xb8);
  fVar14 = *(float *)(param_5 + 0xbc);
  fVar15 = *(float *)(param_5 + 0xc0);
  fVar16 = *(float *)(param_5 + 0xc4);
  fVar17 = *(float *)(param_5 + 200);
  fVar18 = *(float *)(param_5 + 0xcc);
  local_f8 = fVar3 * 1.0 + fVar7 * 0.0 + fVar11 * 0.0 + fVar15 * 0.0;
  fStack_f4 = fVar4 * 1.0 + fVar8 * 0.0 + fVar12 * 0.0 + fVar16 * 0.0;
  fStack_f0 = fVar5 * 1.0 + fVar9 * 0.0 + fVar13 * 0.0 + fVar17 * 0.0;
  fStack_ec = fVar6 * 1.0 + fVar10 * 0.0 + fVar14 * 0.0 + fVar18 * 0.0;
  local_e8 = fVar3 * 0.0 + fVar7 * 1.0 + fVar11 * 0.0 + fVar15 * 0.0;
  fStack_e4 = fVar4 * 0.0 + fVar8 * 1.0 + fVar12 * 0.0 + fVar16 * 0.0;
  fStack_e0 = fVar5 * 0.0 + fVar9 * 1.0 + fVar13 * 0.0 + fVar17 * 0.0;
  fStack_dc = fVar6 * 0.0 + fVar10 * 1.0 + fVar14 * 0.0 + fVar18 * 0.0;
  local_d8 = fVar3 * 0.0 + fVar7 * 0.0 + fVar11 * 1.0 + fVar15 * 0.0;
  fStack_d4 = fVar4 * 0.0 + fVar8 * 0.0 + fVar12 * 1.0 + fVar16 * 0.0;
  fStack_d0 = fVar5 * 0.0 + fVar9 * 0.0 + fVar13 * 1.0 + fVar17 * 0.0;
  fStack_cc = fVar6 * 0.0 + fVar10 * 0.0 + fVar14 * 1.0 + fVar18 * 0.0;
  uVar2 = (uint)param_1[2];
  if (0x3f < param_1[2]) {
    uVar2 = 0x40;
  }
  local_c8 = fVar24 * fVar3 + fVar25 * fVar7 + fVar26 * fVar11 + fVar15 * 1.0;
  fStack_c4 = fVar24 * fVar4 + fVar25 * fVar8 + fVar26 * fVar12 + fVar16 * 1.0;
  fStack_c0 = fVar24 * fVar5 + fVar25 * fVar9 + fVar26 * fVar13 + fVar17 * 1.0;
  fStack_bc = fVar24 * fVar6 + fVar25 * fVar10 + fVar26 * fVar14 + fVar18 * 1.0;
  if (uVar2 != 0) {
    uVar1 = param_1[1];
    pvVar23 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    param_5._0_4_ = (uint)*param_1;
    uVar20 = (longlong)pvVar23 + (ulonglong)uVar2;
    if (*(ulonglong *)(param_2 + 0x38) < uVar20) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar2 + 0x10);
      pvVar23 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar20 = (longlong)pvVar23 + (ulonglong)uVar2;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar20;
    _guard_xfg_dispatch_icall_nop(pvVar23,&local_f8,(ulonglong)uVar2);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_144e34a28;
    *(uint *)(puVar22 + 4) = (uint)param_5;
    *(uint *)((longlong)puVar22 + 0x24) = (uint)uVar1;
    puVar22[2] = param_3;
    puVar22[3] = pvVar23;
    *(uint *)(puVar22 + 5) = uVar2;
  }
  local_res20 = *(undefined4 *)(lVar19 + 0x6b8);
  local_res24 = *(undefined4 *)(lVar19 + 0x150);
  uVar2 = (uint)param_1[5];
  if (7 < param_1[5]) {
    uVar2 = 8;
  }
  if (uVar2 != 0) {
    uVar1 = param_1[4];
    pvVar23 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    param_5._0_4_ = (uint)param_1[3];
    uVar20 = (longlong)pvVar23 + (ulonglong)uVar2;
    if (*(ulonglong *)(param_2 + 0x38) < uVar20) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar2 + 0x10);
      pvVar23 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar20 = (longlong)pvVar23 + (ulonglong)uVar2;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar20;
    _guard_xfg_dispatch_icall_nop(pvVar23,&local_res20,(ulonglong)uVar2);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_144e34a28;
    *(uint *)(puVar22 + 4) = (uint)param_5;
    *(uint *)((longlong)puVar22 + 0x24) = (uint)uVar1;
    puVar22[2] = param_3;
    puVar22[3] = pvVar23;
    *(uint *)(puVar22 + 5) = uVar2;
  }
  uVar2 = *(uint *)(lVar19 + 0x560);
  if (((((uVar2 & 0x40) == 0) || (*(int *)(lVar19 + 0x524) < 0)) || ((uVar2 & 0x10) == 0)) &&
     ((uVar2 & 0x810) != 0x810)) {
    uVar27 = 0;
  }
  param_5._0_4_ = uVar27;
  FUN_141d88a00(param_2,param_3,param_1 + 6,&param_5,0);
  return;
}



// FUNCTION 141d83610 FUN_141d83610 body=702 status=ok
// SIG undefined FUN_141d83610(void)

void FUN_141d83610(ushort *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  void *pvVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  float local_res8 [2];
  void *local_38;
  uint local_30;
  undefined4 local_2c;
  
  if (param_4 == 0) {
    lVar4 = *(longlong *)(DAT_146ac3e60 + 0x30);
  }
  else {
    lVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_4 + 0x28) + 0x10) + 0x20))();
  }
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(DAT_146ac3e60 + 0x30);
  }
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = lVar4;
  }
  if (param_1[3] != 0) {
    uVar1 = param_1[2];
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = lVar4;
  }
  if (param_1[5] != 0) {
    uVar1 = param_1[4];
    uVar6 = FUN_141d9c8a0();
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
  }
  if (param_4 == 0) {
    local_38 = (void *)0x0;
    uVar8 = param_1[8] + 0x3f >> 6;
    local_2c = 0;
    local_30 = uVar8;
    if (param_1[8] + 0x3f >> 6 != 0) {
      FUN_141dab8d0(&local_38);
    }
    uVar3 = local_30;
    pvVar2 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,0,(ulonglong)uVar8 << 6);
    SetShaderValueArray<FRHIPixelShader_*,FMatrix,FRHICommandList>
              (param_2,param_3,param_1 + 6,pvVar2,uVar3,0);
    local_res8[0] = 0.0;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 9,local_res8,0);
  }
  else {
    SetShaderValueArray<FRHIPixelShader_*,FMatrix,FRHICommandList>
              (param_2,param_3,param_1 + 6,*(undefined8 *)(param_4 + 0x598),
               *(undefined4 *)(param_4 + 0x5a0),0);
    local_res8[0] = 1.0 / (float)*(uint *)(param_4 + 0x538);
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 9,local_res8,0);
  }
  return;
}



// FUNCTION 141d838d0 FUN_141d838d0 body=987 status=ok
// SIG undefined FUN_141d838d0(void)

void FUN_141d838d0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  uint uVar2;
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
  longlong lVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  void *_Dst;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 local_res20;
  undefined4 local_res24;
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
  
  lVar19 = param_5;
  uVar26 = 0x3f800000;
  fVar23 = *(float *)(param_5 + 0x44) - *(float *)(param_4 + 0x8d0);
  fVar24 = *(float *)(param_5 + 0x48) - *(float *)(param_4 + 0x8d4);
  fVar3 = *(float *)(param_5 + 0x90);
  fVar4 = *(float *)(param_5 + 0x94);
  fVar5 = *(float *)(param_5 + 0x98);
  fVar6 = *(float *)(param_5 + 0x9c);
  fVar7 = *(float *)(param_5 + 0xa0);
  fVar8 = *(float *)(param_5 + 0xa4);
  fVar9 = *(float *)(param_5 + 0xa8);
  fVar10 = *(float *)(param_5 + 0xac);
  fVar25 = *(float *)(param_5 + 0x4c) - *(float *)(param_4 + 0x8d8);
  fVar11 = *(float *)(param_5 + 0xb0);
  fVar12 = *(float *)(param_5 + 0xb4);
  fVar13 = *(float *)(param_5 + 0xb8);
  fVar14 = *(float *)(param_5 + 0xbc);
  fVar15 = *(float *)(param_5 + 0xc0);
  fVar16 = *(float *)(param_5 + 0xc4);
  fVar17 = *(float *)(param_5 + 200);
  fVar18 = *(float *)(param_5 + 0xcc);
  local_f8 = fVar3 * 1.0 + fVar7 * 0.0 + fVar11 * 0.0 + fVar15 * 0.0;
  fStack_f4 = fVar4 * 1.0 + fVar8 * 0.0 + fVar12 * 0.0 + fVar16 * 0.0;
  fStack_f0 = fVar5 * 1.0 + fVar9 * 0.0 + fVar13 * 0.0 + fVar17 * 0.0;
  fStack_ec = fVar6 * 1.0 + fVar10 * 0.0 + fVar14 * 0.0 + fVar18 * 0.0;
  local_e8 = fVar3 * 0.0 + fVar7 * 1.0 + fVar11 * 0.0 + fVar15 * 0.0;
  fStack_e4 = fVar4 * 0.0 + fVar8 * 1.0 + fVar12 * 0.0 + fVar16 * 0.0;
  fStack_e0 = fVar5 * 0.0 + fVar9 * 1.0 + fVar13 * 0.0 + fVar17 * 0.0;
  fStack_dc = fVar6 * 0.0 + fVar10 * 1.0 + fVar14 * 0.0 + fVar18 * 0.0;
  local_d8 = fVar3 * 0.0 + fVar7 * 0.0 + fVar11 * 1.0 + fVar15 * 0.0;
  fStack_d4 = fVar4 * 0.0 + fVar8 * 0.0 + fVar12 * 1.0 + fVar16 * 0.0;
  fStack_d0 = fVar5 * 0.0 + fVar9 * 0.0 + fVar13 * 1.0 + fVar17 * 0.0;
  fStack_cc = fVar6 * 0.0 + fVar10 * 0.0 + fVar14 * 1.0 + fVar18 * 0.0;
  local_c8 = fVar23 * fVar3 + fVar24 * fVar7 + fVar25 * fVar11 + fVar15 * 1.0;
  fStack_c4 = fVar23 * fVar4 + fVar24 * fVar8 + fVar25 * fVar12 + fVar16 * 1.0;
  fStack_c0 = fVar23 * fVar5 + fVar24 * fVar9 + fVar25 * fVar13 + fVar17 * 1.0;
  fStack_bc = fVar23 * fVar6 + fVar24 * fVar10 + fVar25 * fVar14 + fVar18 * 1.0;
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>(param_2,param_3,param_1,&local_f8,0);
  local_res20 = *(undefined4 *)(lVar19 + 0x6b8);
  local_res24 = *(undefined4 *)(lVar19 + 0x150);
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (7 < *(ushort *)(param_1 + 10)) {
    uVar2 = 8;
  }
  if (uVar2 != 0) {
    uVar1 = *(ushort *)(param_1 + 8);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    param_5._0_4_ = (uint)*(ushort *)(param_1 + 6);
    uVar20 = (longlong)_Dst + (ulonglong)uVar2;
    if (*(ulonglong *)(param_2 + 0x38) < uVar20) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar2 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar20 = (longlong)_Dst + (ulonglong)uVar2;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar20;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_res20,(ulonglong)uVar2);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_143f4d340;
    *(uint *)(puVar22 + 4) = (uint)param_5;
    puVar22[3] = _Dst;
    *(uint *)((longlong)puVar22 + 0x24) = (uint)uVar1;
    puVar22[2] = param_3;
    *(uint *)(puVar22 + 5) = uVar2;
  }
  uVar2 = *(uint *)(lVar19 + 0x560);
  if (((((uVar2 & 0x40) == 0) || (*(int *)(lVar19 + 0x524) < 0)) || ((uVar2 & 0x10) == 0)) &&
     ((uVar2 & 0x810) != 0x810)) {
    uVar26 = 0;
  }
  param_5._0_4_ = uVar26;
  FUN_1404986d0(param_2,param_3,param_1 + 0xc,&param_5,0);
  return;
}



// FUNCTION 141d83cb0 FUN_141d83cb0 body=466 status=ok
// SIG undefined FUN_141d83cb0(void)

void FUN_141d83cb0(longlong param_1,longlong param_2,undefined8 *param_3,int param_4,uint param_5)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_38 [2];
  
  if ((1 < param_4) && (cVar3 = *(char *)(param_1 + 6), cVar3 != '\0')) {
    if (((param_5 & 0x10) == 0) || ((param_5 != DAT_146a61370 || (DAT_146a632a8 == 0)))) {
      uVar4 = FUN_141c96a70(local_38,param_2,param_5);
      TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_146a632a8,uVar4);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
      DAT_146a61370 = param_5;
      cVar3 = *(char *)(param_1 + 6);
    }
    lVar2 = DAT_146a632a8;
    uVar4 = *param_3;
    if (cVar3 != '\0') {
      uVar1 = *(ushort *)(param_1 + 4);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      *puVar6 = &PTR_LAB_144dcb388;
      puVar6[2] = uVar4;
      puVar6[4] = lVar2;
    }
  }
  if ((param_4 < 2) && (*(char *)(param_1 + 0xe) != '\0')) {
    CreateMobileSceneTextureUniformBufferSingleDraw<FRHICommandList>(local_38,param_2,param_4);
    uVar4 = *param_3;
    if (*(char *)(param_1 + 0xe) != '\0') {
      uVar1 = *(ushort *)(param_1 + 0xc);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb388;
      puVar6[2] = uVar4;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = local_38[0];
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
  }
  return;
}



// FUNCTION 141d83e90 FUN_141d83e90 body=986 status=ok
// SIG undefined FUN_141d83e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d83e90(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,longlong *param_7,longlong param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong in_stack_ffffffffffffffb8;
  
  plVar3 = param_7;
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 != (longlong *)0x0) {
    in_stack_ffffffffffffffb8 = param_5;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_1,param_4,param_5,param_7,param_9);
  }
  iVar6 = *(int *)(param_1 + 0x10);
  uVar5 = 0;
  uVar13 = (ulonglong)_tls_index;
  if (plVar3[1] == 0) {
    if (0 < iVar6) {
      uVar4 = uVar5;
      uVar9 = uVar5;
      do {
        iVar8 = (int)uVar9;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146b09640) {
          if (iVar8 != -1) {
            puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
            *puVar10 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141d83fd8;
          }
          break;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)iVar6);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x38) <
        DAT_146a15258) {
      _Init_thread_header(&DAT_146a15258);
      if (DAT_146a15258 == -1) {
        _DAT_146a15250 = 0;
        DAT_146a15254 = 0;
        DAT_146a15256 = 0;
        _Init_thread_footer(&DAT_146a15258);
      }
    }
    puVar10 = (undefined4 *)&DAT_146a15250;
LAB_141d83fd8:
    if (*(char *)((longlong)puVar10 + 6) == '\0') goto LAB_141d84064;
    lVar12 = *(longlong *)(*plVar3 + 0x38);
  }
  else {
    if (0 < iVar6) {
      uVar4 = uVar5;
      uVar9 = uVar5;
      do {
        iVar8 = (int)uVar9;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146b09640) {
          if (iVar8 != -1) {
            puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
            *puVar10 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141d83f5c;
          }
          break;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)iVar6);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x38) <
        DAT_146a15258) {
      _Init_thread_header(&DAT_146a15258);
      if (DAT_146a15258 == -1) {
        _DAT_146a15250 = 0;
        DAT_146a15254 = 0;
        DAT_146a15256 = 0;
        _Init_thread_footer(&DAT_146a15258);
      }
    }
    puVar10 = (undefined4 *)&DAT_146a15250;
LAB_141d83f5c:
    if (*(char *)((longlong)puVar10 + 6) == '\0') goto LAB_141d84064;
    lVar12 = plVar3[1];
  }
  uVar1 = *(ushort *)(puVar10 + 1);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar7 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar7 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar11;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144dcb3a8;
  *(uint *)(puVar7 + 3) = (uint)uVar1;
  puVar7[4] = lVar12;
  puVar7[2] = param_3;
LAB_141d84064:
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar4 = uVar5;
    do {
      iVar6 = (int)uVar4;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar5 * 8) == &DAT_146a82580) {
        if (iVar6 != -1) {
          puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *(undefined4 *)puVar11 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141d840be;
        }
        break;
      }
      uVar4 = (ulonglong)(iVar6 + 1);
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x38) <
      DAT_146aa6068) {
    _Init_thread_header(&DAT_146aa6068);
    if (DAT_146aa6068 == -1) {
      DAT_146aa6060._0_4_ = 0;
      DAT_146aa6060._4_2_ = 0;
      DAT_146aa6060._6_1_ = 0;
      _Init_thread_footer(&DAT_146aa6068);
    }
  }
  puVar11 = &DAT_146aa6060;
LAB_141d840be:
  param_7 = (longlong *)*puVar11;
  if ((char)((ulonglong)param_7 >> 0x30) != '\0') {
    if ((param_6 == 0) ||
       (lVar12 = *(longlong *)
                  (*(longlong *)(param_5 + 0x1b20) +
                  (longlong)*(int *)(*(longlong *)(param_6 + 0x140) + 0xe8) * 8), lVar12 == 0)) {
      lVar12 = DAT_1464c2e98;
    }
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,param_3,&param_7,lVar12);
  }
  if (*(short *)(param_1 + 0x144) != 0) {
    param_7 = (longlong *)CONCAT44(param_7._4_4_,*(undefined4 *)(param_8 + 0x30));
    FUN_141d88a00(param_2,param_3,param_1 + 0x140,&param_7,
                  in_stack_ffffffffffffffb8 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 141d84270 FUN_141d84270 body=1178 status=ok
// SIG undefined FUN_141d84270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d84270(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,longlong *param_7,longlong param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  void *_Dst;
  longlong lVar15;
  
  plVar5 = param_7;
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_1,param_4,param_5,param_7,param_9);
  }
  iVar9 = *(int *)(param_1 + 0x10);
  uVar7 = 0;
  uVar8 = (ulonglong)_tls_index;
  if (plVar5[1] == 0) {
    if (0 < iVar9) {
      uVar6 = uVar7;
      uVar12 = uVar7;
      do {
        iVar11 = (int)uVar12;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar6 * 8) == &DAT_146b09640) {
          if (iVar11 != -1) {
            puVar13 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
            *puVar13 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141d843ad;
          }
          break;
        }
        uVar12 = (ulonglong)(iVar11 + 1);
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)iVar9);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x38) <
        DAT_146a15258) {
      _Init_thread_header(&DAT_146a15258);
      if (DAT_146a15258 == -1) {
        _DAT_146a15250 = 0;
        DAT_146a15254 = 0;
        DAT_146a15256 = 0;
        _Init_thread_footer(&DAT_146a15258);
      }
    }
    puVar13 = (undefined4 *)&DAT_146a15250;
LAB_141d843ad:
    if (*(char *)((longlong)puVar13 + 6) == '\0') goto LAB_141d8443a;
    lVar15 = *(longlong *)(*plVar5 + 0x38);
  }
  else {
    if (0 < iVar9) {
      uVar6 = uVar7;
      uVar12 = uVar7;
      do {
        iVar11 = (int)uVar12;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar6 * 8) == &DAT_146b09640) {
          if (iVar11 != -1) {
            puVar13 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
            *puVar13 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141d84336;
          }
          break;
        }
        uVar12 = (ulonglong)(iVar11 + 1);
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)iVar9);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x38) <
        DAT_146a15258) {
      _Init_thread_header(&DAT_146a15258);
      if (DAT_146a15258 == -1) {
        _DAT_146a15250 = 0;
        DAT_146a15254 = 0;
        DAT_146a15256 = 0;
        _Init_thread_footer(&DAT_146a15258);
      }
    }
    puVar13 = (undefined4 *)&DAT_146a15250;
LAB_141d84336:
    if (*(char *)((longlong)puVar13 + 6) == '\0') goto LAB_141d8443a;
    lVar15 = plVar5[1];
  }
  uVar1 = *(ushort *)(puVar13 + 1);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar10 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar10 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar14;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dd59c8;
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  puVar10[4] = lVar15;
  puVar10[2] = param_3;
LAB_141d8443a:
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar6 = uVar7;
    do {
      iVar9 = (int)uVar6;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar7 * 8) == &DAT_146a82580) {
        if (iVar9 != -1) {
          puVar14 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 8);
          *(undefined4 *)puVar14 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141d8448f;
        }
        break;
      }
      uVar6 = (ulonglong)(iVar9 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x38) <
      DAT_146aa6068) {
    _Init_thread_header(&DAT_146aa6068);
    if (DAT_146aa6068 == -1) {
      DAT_146aa6060._0_4_ = 0;
      DAT_146aa6060._4_2_ = 0;
      DAT_146aa6060._6_1_ = 0;
      _Init_thread_footer(&DAT_146aa6068);
    }
  }
  puVar14 = &DAT_146aa6060;
LAB_141d8448f:
  param_7 = (longlong *)*puVar14;
  if ((char)((ulonglong)param_7 >> 0x30) != '\0') {
    if ((param_6 == 0) ||
       (lVar15 = *(longlong *)
                  (*(longlong *)(param_5 + 0x1b20) +
                  (longlong)*(int *)(*(longlong *)(param_6 + 0x140) + 0xe8) * 8), lVar15 == 0)) {
      lVar15 = DAT_1464c2e98;
    }
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,param_3,&param_7,lVar15);
  }
  if (*(short *)(param_1 + 0x144) != 0) {
    param_7 = (longlong *)CONCAT44(param_7._4_4_,*(undefined4 *)(param_8 + 0x30));
    uVar4 = (uint)*(ushort *)(param_1 + 0x144);
    if (3 < *(ushort *)(param_1 + 0x144)) {
      uVar4 = 4;
    }
    uVar7 = (ulonglong)uVar4;
    if (uVar4 != 0) {
      uVar1 = *(ushort *)(param_1 + 0x142);
      uVar2 = *(ushort *)(param_1 + 0x140);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar8 = uVar7 + (longlong)_Dst;
      if (*(ulonglong *)(param_2 + 0x38) < uVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar4 + 0x10);
        _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar8 = uVar7 + (longlong)_Dst;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar8;
      _guard_xfg_dispatch_icall_nop(_Dst,&param_7,uVar7);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar10 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar10 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar14;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_144e147b0;
      puVar10[2] = param_3;
      puVar10[3] = _Dst;
      *(uint *)(puVar10 + 4) = (uint)uVar2;
      *(uint *)((longlong)puVar10 + 0x24) = (uint)uVar1;
      *(uint *)(puVar10 + 5) = uVar4;
    }
  }
  return;
}



// FUNCTION 141d84710 FUN_141d84710 body=1178 status=ok
// SIG undefined FUN_141d84710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d84710(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,longlong *param_7,longlong param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  void *_Dst;
  longlong lVar15;
  
  plVar5 = param_7;
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_1,param_4,param_5,param_7,param_9);
  }
  iVar9 = *(int *)(param_1 + 0x10);
  uVar7 = 0;
  uVar8 = (ulonglong)_tls_index;
  if (plVar5[1] == 0) {
    if (0 < iVar9) {
      uVar6 = uVar7;
      uVar12 = uVar7;
      do {
        iVar11 = (int)uVar12;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar6 * 8) == &DAT_146b09640) {
          if (iVar11 != -1) {
            puVar13 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
            *puVar13 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141d8484d;
          }
          break;
        }
        uVar12 = (ulonglong)(iVar11 + 1);
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)iVar9);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x38) <
        DAT_146a15258) {
      _Init_thread_header(&DAT_146a15258);
      if (DAT_146a15258 == -1) {
        _DAT_146a15250 = 0;
        DAT_146a15254 = 0;
        DAT_146a15256 = 0;
        _Init_thread_footer(&DAT_146a15258);
      }
    }
    puVar13 = (undefined4 *)&DAT_146a15250;
LAB_141d8484d:
    if (*(char *)((longlong)puVar13 + 6) == '\0') goto LAB_141d848da;
    lVar15 = *(longlong *)(*plVar5 + 0x38);
  }
  else {
    if (0 < iVar9) {
      uVar6 = uVar7;
      uVar12 = uVar7;
      do {
        iVar11 = (int)uVar12;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar6 * 8) == &DAT_146b09640) {
          if (iVar11 != -1) {
            puVar13 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
            *puVar13 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141d847d6;
          }
          break;
        }
        uVar12 = (ulonglong)(iVar11 + 1);
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)iVar9);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x38) <
        DAT_146a15258) {
      _Init_thread_header(&DAT_146a15258);
      if (DAT_146a15258 == -1) {
        _DAT_146a15250 = 0;
        DAT_146a15254 = 0;
        DAT_146a15256 = 0;
        _Init_thread_footer(&DAT_146a15258);
      }
    }
    puVar13 = (undefined4 *)&DAT_146a15250;
LAB_141d847d6:
    if (*(char *)((longlong)puVar13 + 6) == '\0') goto LAB_141d848da;
    lVar15 = plVar5[1];
  }
  uVar1 = *(ushort *)(puVar13 + 1);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar10 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar10 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar14;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dcb398;
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  puVar10[4] = lVar15;
  puVar10[2] = param_3;
LAB_141d848da:
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar6 = uVar7;
    do {
      iVar9 = (int)uVar6;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar7 * 8) == &DAT_146a82580) {
        if (iVar9 != -1) {
          puVar14 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 8);
          *(undefined4 *)puVar14 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141d8492f;
        }
        break;
      }
      uVar6 = (ulonglong)(iVar9 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x38) <
      DAT_146aa6068) {
    _Init_thread_header(&DAT_146aa6068);
    if (DAT_146aa6068 == -1) {
      DAT_146aa6060._0_4_ = 0;
      DAT_146aa6060._4_2_ = 0;
      DAT_146aa6060._6_1_ = 0;
      _Init_thread_footer(&DAT_146aa6068);
    }
  }
  puVar14 = &DAT_146aa6060;
LAB_141d8492f:
  param_7 = (longlong *)*puVar14;
  if ((char)((ulonglong)param_7 >> 0x30) != '\0') {
    if ((param_6 == 0) ||
       (lVar15 = *(longlong *)
                  (*(longlong *)(param_5 + 0x1b20) +
                  (longlong)*(int *)(*(longlong *)(param_6 + 0x140) + 0xe8) * 8), lVar15 == 0)) {
      lVar15 = DAT_1464c2e98;
    }
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,param_3,&param_7,lVar15);
  }
  if (*(short *)(param_1 + 0x144) != 0) {
    param_7 = (longlong *)CONCAT44(param_7._4_4_,*(undefined4 *)(param_8 + 0x30));
    uVar4 = (uint)*(ushort *)(param_1 + 0x144);
    if (3 < *(ushort *)(param_1 + 0x144)) {
      uVar4 = 4;
    }
    uVar7 = (ulonglong)uVar4;
    if (uVar4 != 0) {
      uVar1 = *(ushort *)(param_1 + 0x142);
      uVar2 = *(ushort *)(param_1 + 0x140);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar8 = uVar7 + (longlong)_Dst;
      if (*(ulonglong *)(param_2 + 0x38) < uVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar4 + 0x10);
        _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar8 = uVar7 + (longlong)_Dst;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar8;
      _guard_xfg_dispatch_icall_nop(_Dst,&param_7,uVar7);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar10 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar10 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar14;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_144e34a38;
      puVar10[2] = param_3;
      puVar10[3] = _Dst;
      *(uint *)(puVar10 + 4) = (uint)uVar2;
      *(uint *)((longlong)puVar10 + 0x24) = (uint)uVar1;
      *(uint *)(puVar10 + 5) = uVar4;
    }
  }
  return;
}



// FUNCTION 141d84bb0 FUN_141d84bb0 body=986 status=ok
// SIG undefined FUN_141d84bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d84bb0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,longlong *param_7,longlong param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong in_stack_ffffffffffffffb8;
  
  plVar3 = param_7;
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 != (longlong *)0x0) {
    in_stack_ffffffffffffffb8 = param_5;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_1,param_4,param_5,param_7,param_9);
  }
  iVar6 = *(int *)(param_1 + 0x10);
  uVar5 = 0;
  uVar13 = (ulonglong)_tls_index;
  if (plVar3[1] == 0) {
    if (0 < iVar6) {
      uVar4 = uVar5;
      uVar9 = uVar5;
      do {
        iVar8 = (int)uVar9;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146b09640) {
          if (iVar8 != -1) {
            puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
            *puVar10 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141d84cf8;
          }
          break;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)iVar6);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x38) <
        DAT_146a15258) {
      _Init_thread_header(&DAT_146a15258);
      if (DAT_146a15258 == -1) {
        _DAT_146a15250 = 0;
        DAT_146a15254 = 0;
        DAT_146a15256 = 0;
        _Init_thread_footer(&DAT_146a15258);
      }
    }
    puVar10 = (undefined4 *)&DAT_146a15250;
LAB_141d84cf8:
    if (*(char *)((longlong)puVar10 + 6) == '\0') goto LAB_141d84d84;
    lVar12 = *(longlong *)(*plVar3 + 0x38);
  }
  else {
    if (0 < iVar6) {
      uVar4 = uVar5;
      uVar9 = uVar5;
      do {
        iVar8 = (int)uVar9;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146b09640) {
          if (iVar8 != -1) {
            puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
            *puVar10 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141d84c7c;
          }
          break;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)iVar6);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x38) <
        DAT_146a15258) {
      _Init_thread_header(&DAT_146a15258);
      if (DAT_146a15258 == -1) {
        _DAT_146a15250 = 0;
        DAT_146a15254 = 0;
        DAT_146a15256 = 0;
        _Init_thread_footer(&DAT_146a15258);
      }
    }
    puVar10 = (undefined4 *)&DAT_146a15250;
LAB_141d84c7c:
    if (*(char *)((longlong)puVar10 + 6) == '\0') goto LAB_141d84d84;
    lVar12 = plVar3[1];
  }
  uVar1 = *(ushort *)(puVar10 + 1);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar7 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar7 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar11;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d920a0;
  *(uint *)(puVar7 + 3) = (uint)uVar1;
  puVar7[4] = lVar12;
  puVar7[2] = param_3;
LAB_141d84d84:
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar4 = uVar5;
    do {
      iVar6 = (int)uVar4;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar5 * 8) == &DAT_146a82580) {
        if (iVar6 != -1) {
          puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *(undefined4 *)puVar11 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141d84dde;
        }
        break;
      }
      uVar4 = (ulonglong)(iVar6 + 1);
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x38) <
      DAT_146aa6068) {
    _Init_thread_header(&DAT_146aa6068);
    if (DAT_146aa6068 == -1) {
      DAT_146aa6060._0_4_ = 0;
      DAT_146aa6060._4_2_ = 0;
      DAT_146aa6060._6_1_ = 0;
      _Init_thread_footer(&DAT_146aa6068);
    }
  }
  puVar11 = &DAT_146aa6060;
LAB_141d84dde:
  param_7 = (longlong *)*puVar11;
  if ((char)((ulonglong)param_7 >> 0x30) != '\0') {
    if ((param_6 == 0) ||
       (lVar12 = *(longlong *)
                  (*(longlong *)(param_5 + 0x1b20) +
                  (longlong)*(int *)(*(longlong *)(param_6 + 0x140) + 0xe8) * 8), lVar12 == 0)) {
      lVar12 = DAT_1464c2e98;
    }
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,param_3,&param_7,lVar12);
  }
  if (*(short *)(param_1 + 0x144) != 0) {
    param_7 = (longlong *)CONCAT44(param_7._4_4_,*(undefined4 *)(param_8 + 0x30));
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 0x140,&param_7,
               in_stack_ffffffffffffffb8 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 141d84f90 FUN_141d84f90 body=986 status=ok
// SIG undefined FUN_141d84f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d84f90(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,longlong *param_7,longlong param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong in_stack_ffffffffffffffb8;
  
  plVar3 = param_7;
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 != (longlong *)0x0) {
    in_stack_ffffffffffffffb8 = param_5;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_1,param_4,param_5,param_7,param_9);
  }
  iVar6 = *(int *)(param_1 + 0x10);
  uVar5 = 0;
  uVar13 = (ulonglong)_tls_index;
  if (plVar3[1] == 0) {
    if (0 < iVar6) {
      uVar4 = uVar5;
      uVar9 = uVar5;
      do {
        iVar8 = (int)uVar9;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146b09640) {
          if (iVar8 != -1) {
            puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
            *puVar10 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141d850d8;
          }
          break;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)iVar6);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x38) <
        DAT_146a15258) {
      _Init_thread_header(&DAT_146a15258);
      if (DAT_146a15258 == -1) {
        _DAT_146a15250 = 0;
        DAT_146a15254 = 0;
        DAT_146a15256 = 0;
        _Init_thread_footer(&DAT_146a15258);
      }
    }
    puVar10 = (undefined4 *)&DAT_146a15250;
LAB_141d850d8:
    if (*(char *)((longlong)puVar10 + 6) == '\0') goto LAB_141d85164;
    lVar12 = *(longlong *)(*plVar3 + 0x38);
  }
  else {
    if (0 < iVar6) {
      uVar4 = uVar5;
      uVar9 = uVar5;
      do {
        iVar8 = (int)uVar9;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146b09640) {
          if (iVar8 != -1) {
            puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
            *puVar10 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141d8505c;
          }
          break;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)iVar6);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x38) <
        DAT_146a15258) {
      _Init_thread_header(&DAT_146a15258);
      if (DAT_146a15258 == -1) {
        _DAT_146a15250 = 0;
        DAT_146a15254 = 0;
        DAT_146a15256 = 0;
        _Init_thread_footer(&DAT_146a15258);
      }
    }
    puVar10 = (undefined4 *)&DAT_146a15250;
LAB_141d8505c:
    if (*(char *)((longlong)puVar10 + 6) == '\0') goto LAB_141d85164;
    lVar12 = plVar3[1];
  }
  uVar1 = *(ushort *)(puVar10 + 1);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar7 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar7 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar11;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144dcb388;
  *(uint *)(puVar7 + 3) = (uint)uVar1;
  puVar7[4] = lVar12;
  puVar7[2] = param_3;
LAB_141d85164:
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar4 = uVar5;
    do {
      iVar6 = (int)uVar4;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar5 * 8) == &DAT_146a82580) {
        if (iVar6 != -1) {
          puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *(undefined4 *)puVar11 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141d851be;
        }
        break;
      }
      uVar4 = (ulonglong)(iVar6 + 1);
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x38) <
      DAT_146aa6068) {
    _Init_thread_header(&DAT_146aa6068);
    if (DAT_146aa6068 == -1) {
      DAT_146aa6060._0_4_ = 0;
      DAT_146aa6060._4_2_ = 0;
      DAT_146aa6060._6_1_ = 0;
      _Init_thread_footer(&DAT_146aa6068);
    }
  }
  puVar11 = &DAT_146aa6060;
LAB_141d851be:
  param_7 = (longlong *)*puVar11;
  if ((char)((ulonglong)param_7 >> 0x30) != '\0') {
    if ((param_6 == 0) ||
       (lVar12 = *(longlong *)
                  (*(longlong *)(param_5 + 0x1b20) +
                  (longlong)*(int *)(*(longlong *)(param_6 + 0x140) + 0xe8) * 8), lVar12 == 0)) {
      lVar12 = DAT_1464c2e98;
    }
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,param_3,&param_7,lVar12);
  }
  if (*(short *)(param_1 + 0x144) != 0) {
    param_7 = (longlong *)CONCAT44(param_7._4_4_,*(undefined4 *)(param_8 + 0x30));
    FUN_1404986d0(param_2,param_3,param_1 + 0x140,&param_7,
                  in_stack_ffffffffffffffb8 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 141d85370 FUN_141d85370 body=1063 status=ok
// SIG undefined FUN_141d85370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d85370(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined4 param_8)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  iVar9 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar3 = 0;
    do {
      if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar3 * 8) == &DAT_146b096e0) {
        if (iVar9 != -1) {
          puVar8 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 8);
          *puVar8 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141d853f5;
        }
        break;
      }
      iVar9 = iVar9 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a0e8b8) {
    _Init_thread_header(&DAT_146a0e8b8);
    if (DAT_146a0e8b8 == -1) {
      _DAT_146a0e8b0 = 0;
      DAT_146a0e8b4 = 0;
      DAT_146a0e8b6 = 0;
      _Init_thread_footer(&DAT_146a0e8b8);
    }
  }
  puVar8 = (undefined4 *)&DAT_146a0e8b0;
LAB_141d853f5:
  FUN_141b51b30(param_2,param_3,puVar8,param_7);
  lVar3 = param_6;
  uVar10 = param_3;
  if (*(short *)(param_1 + 0xd2) != 0) {
    lVar4 = FSceneRenderTargets::Get(param_2);
    if (*(char *)(lVar3 + 0x1207) == '\0') {
      lVar4 = *(longlong *)(lVar4 + 0x438);
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x430);
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      uVar10 = local_res18;
    }
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    param_6 = lVar4;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb360;
    puVar6[2] = param_3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = lVar4;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_6);
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x60);
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb360;
    puVar6[2] = param_3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar2;
    uVar2 = *(undefined8 *)(lVar3 + 0x70);
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb360;
    puVar6[2] = param_3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar2;
  }
  if ((*(char *)(lVar3 + 0x120d) != '\0') && (0 < *(int *)(*(longlong *)(lVar3 + 0x10) + 8))) {
    lVar4 = FSceneViewFamily::GetStereoEyeView
                      (*(longlong *)(lVar3 + 0x10),-(*(int *)(lVar3 + 0xf60) != 0) & 2);
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar7 = 0;
      do {
        if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar7 * 8) == &DAT_146b09780) {
          if (iVar9 != -1) {
            puVar8 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 8);
            *puVar8 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141d85686;
          }
          break;
        }
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x10));
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146a0e8c8) {
      _Init_thread_header(&DAT_146a0e8c8);
      if (DAT_146a0e8c8 == -1) {
        _DAT_146a0e8c0 = 0;
        _DAT_146a0e8c4 = 0;
        DAT_146a0e8c6 = 0;
        _Init_thread_footer(&DAT_146a0e8c8);
      }
    }
    puVar8 = (undefined4 *)&DAT_146a0e8c0;
LAB_141d85686:
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,param_3,puVar8,*(undefined8 *)(lVar4 + 0x20));
  }
  FUN_141d86000(param_1,param_2,uVar10,local_res20,param_5,lVar3);
  FUN_141aa5e80(param_1 + 0xc0,param_2,&local_res18,*(undefined4 *)(lVar3 + 0x1a38),param_8);
  return;
}



// FUNCTION 141d857a0 FUN_141d857a0 body=1063 status=ok
// SIG undefined FUN_141d857a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d857a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined4 param_8)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  iVar9 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar3 = 0;
    do {
      if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar3 * 8) == &DAT_146b096e0) {
        if (iVar9 != -1) {
          puVar8 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 8);
          *puVar8 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141d85825;
        }
        break;
      }
      iVar9 = iVar9 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a0e8b8) {
    _Init_thread_header(&DAT_146a0e8b8);
    if (DAT_146a0e8b8 == -1) {
      _DAT_146a0e8b0 = 0;
      DAT_146a0e8b4 = 0;
      DAT_146a0e8b6 = 0;
      _Init_thread_footer(&DAT_146a0e8b8);
    }
  }
  puVar8 = (undefined4 *)&DAT_146a0e8b0;
LAB_141d85825:
  FUN_141aad5c0(param_2,param_3,puVar8,param_7);
  lVar3 = param_6;
  uVar10 = param_3;
  if (*(short *)(param_1 + 0xd2) != 0) {
    lVar4 = FSceneRenderTargets::Get(param_2);
    if (*(char *)(lVar3 + 0x1207) == '\0') {
      lVar4 = *(longlong *)(lVar4 + 0x438);
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x430);
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      uVar10 = local_res18;
    }
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    param_6 = lVar4;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d8e600;
    puVar6[2] = param_3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = lVar4;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_6);
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x60);
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d8e600;
    puVar6[2] = param_3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar2;
    uVar2 = *(undefined8 *)(lVar3 + 0x70);
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d8e600;
    puVar6[2] = param_3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar2;
  }
  if ((*(char *)(lVar3 + 0x120d) != '\0') && (0 < *(int *)(*(longlong *)(lVar3 + 0x10) + 8))) {
    lVar4 = FSceneViewFamily::GetStereoEyeView
                      (*(longlong *)(lVar3 + 0x10),-(*(int *)(lVar3 + 0xf60) != 0) & 2);
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar7 = 0;
      do {
        if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar7 * 8) == &DAT_146b09780) {
          if (iVar9 != -1) {
            puVar8 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 8);
            *puVar8 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141d85ab6;
          }
          break;
        }
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x10));
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146a0e8c8) {
      _Init_thread_header(&DAT_146a0e8c8);
      if (DAT_146a0e8c8 == -1) {
        _DAT_146a0e8c0 = 0;
        _DAT_146a0e8c4 = 0;
        DAT_146a0e8c6 = 0;
        _Init_thread_footer(&DAT_146a0e8c8);
      }
    }
    puVar8 = (undefined4 *)&DAT_146a0e8c0;
LAB_141d85ab6:
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,param_3,puVar8,*(undefined8 *)(lVar4 + 0x20));
  }
  FUN_141d87c00(param_1,param_2,uVar10,local_res20,param_5,lVar3);
  FUN_141aa6800(param_1 + 0xc0,param_2,&local_res18,*(undefined4 *)(lVar3 + 0x1a38),param_8);
  return;
}



// FUNCTION 141d85bd0 FUN_141d85bd0 body=1063 status=ok
// SIG undefined FUN_141d85bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d85bd0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined4 param_8)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  iVar9 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar3 = 0;
    do {
      if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar3 * 8) == &DAT_146b096e0) {
        if (iVar9 != -1) {
          puVar8 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 8);
          *puVar8 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141d85c55;
        }
        break;
      }
      iVar9 = iVar9 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a0e8b8) {
    _Init_thread_header(&DAT_146a0e8b8);
    if (DAT_146a0e8b8 == -1) {
      _DAT_146a0e8b0 = 0;
      DAT_146a0e8b4 = 0;
      DAT_146a0e8b6 = 0;
      _Init_thread_footer(&DAT_146a0e8b8);
    }
  }
  puVar8 = (undefined4 *)&DAT_146a0e8b0;
LAB_141d85c55:
  FUN_141aad730(param_2,param_3,puVar8,param_7);
  lVar3 = param_6;
  uVar10 = param_3;
  if (*(short *)(param_1 + 0xd2) != 0) {
    lVar4 = FSceneRenderTargets::Get(param_2);
    if (*(char *)(lVar3 + 0x1207) == '\0') {
      lVar4 = *(longlong *)(lVar4 + 0x438);
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x430);
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      uVar10 = local_res18;
    }
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    param_6 = lVar4;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144165218;
    puVar6[2] = param_3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = lVar4;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_6);
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x60);
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144165218;
    puVar6[2] = param_3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar2;
    uVar2 = *(undefined8 *)(lVar3 + 0x70);
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144165218;
    puVar6[2] = param_3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar2;
  }
  if ((*(char *)(lVar3 + 0x120d) != '\0') && (0 < *(int *)(*(longlong *)(lVar3 + 0x10) + 8))) {
    lVar4 = FSceneViewFamily::GetStereoEyeView
                      (*(longlong *)(lVar3 + 0x10),-(*(int *)(lVar3 + 0xf60) != 0) & 2);
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar7 = 0;
      do {
        if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar7 * 8) == &DAT_146b09780) {
          if (iVar9 != -1) {
            puVar8 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 8);
            *puVar8 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141d85ee6;
          }
          break;
        }
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x10));
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146a0e8c8) {
      _Init_thread_header(&DAT_146a0e8c8);
      if (DAT_146a0e8c8 == -1) {
        _DAT_146a0e8c0 = 0;
        _DAT_146a0e8c4 = 0;
        DAT_146a0e8c6 = 0;
        _Init_thread_footer(&DAT_146a0e8c8);
      }
    }
    puVar8 = (undefined4 *)&DAT_146a0e8c0;
LAB_141d85ee6:
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,param_3,puVar8,*(undefined8 *)(lVar4 + 0x20));
  }
  FUN_141d88300(param_1,param_2,uVar10,local_res20,param_5,lVar3);
  FUN_141d83cb0(param_1 + 0xc0,param_2,&local_res18,*(undefined4 *)(lVar3 + 0x1a38),param_8);
  return;
}



// FUNCTION 141d86000 FUN_141d86000 body=1789 status=ok
// SIG undefined FUN_141d86000(void)

void FUN_141d86000(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  undefined *puVar7;
  void *_Src;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint *puVar17;
  bool bVar18;
  undefined2 *in_stack_fffffffffffffe38;
  undefined4 uVar19;
  int local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  undefined2 *local_190;
  uint local_188;
  int local_184;
  uint local_180;
  uint uStack_17c;
  undefined *puStack_178;
  undefined4 local_170;
  int iStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  longlong local_160;
  longlong *local_158;
  undefined8 uStack_150;
  undefined *local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined *local_128;
  undefined2 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  void *local_100;
  int local_f8;
  undefined2 *local_f0;
  int local_e8;
  undefined2 *local_e0;
  int local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined1 local_c0 [16];
  longlong local_b0 [2];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_58 [16];
  
  bVar18 = false;
  bVar5 = false;
  local_1a0 = (undefined8 *)(param_4 + 0x30 + (longlong)*(int *)(param_6 + 0x1a38) * 0x38);
  if (DAT_1464c314c != 0) {
    if (*(char *)(local_1a0 + 5) != '\0') {
      SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
                (param_2,param_3,param_1 + 0xdc,*local_1a0);
      goto LAB_141d86094;
    }
    cVar8 = IsInRenderingThread();
    if ((cVar8 != '\0') && ((*(byte *)(param_4 + 0x110) & 3) != 0)) {
      FMaterialRenderProxy::InitDynamicRHI(param_4);
    }
  }
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_c0,param_4,param_5,param_6);
  bVar5 = true;
  local_1a0 = (undefined8 *)operator_new(0x38);
  if (local_1a0 != (undefined8 *)0x0) {
    *local_1a0 = 0;
    local_1a0[1] = 0;
    local_1a0[2] = 0;
    local_1a0[3] = 0;
    local_1a0[4] = 0;
    *(undefined1 *)(local_1a0 + 5) = 0;
    local_1a0[6] = 0;
  }
  FUN_14258c390(param_4,local_1a0,local_c0,param_2);
  if (*(char *)(param_1 + 0xe2) != '\0') {
    uVar2 = *(ushort *)(param_1 + 0xe0);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar12 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar12;
    *(undefined8 **)(param_2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_144de04f8;
    puVar12[2] = param_3;
    *(uint *)(puVar12 + 3) = (uint)uVar2;
    puVar12[4] = local_1a0[1];
    lVar4 = local_1a0[2];
    puVar12[5] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    piVar1 = (int *)(*(longlong *)(puVar12[4] + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
  }
LAB_141d86094:
  local_1a8 = 0;
  iVar14 = *(int *)(local_1a0 + 4);
  if (*(int *)(param_1 + 0xf0) <= *(int *)(local_1a0 + 4)) {
    iVar14 = *(int *)(param_1 + 0xf0);
  }
  local_108 = (longlong)iVar14;
  if (0 < iVar14) {
    local_198 = 0;
    do {
      puVar15 = (undefined2 *)0x0;
      local_160 = (longlong)local_1a8 * 0x10;
      local_110 = FUN_141d9ac40(param_1,local_1a0[3] + local_160,
                                *(undefined8 *)(*(longlong *)(param_6 + 0x10) + 0x20));
      uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
      if (local_110 == 0) {
        local_190 = (undefined2 *)0x0;
        local_184 = 0;
        local_180 = 0;
        uStack_17c = 1;
        puStack_178 = &DAT_1465340f0;
        iStack_16c = 0;
        uStack_168 = 0;
        iVar14 = (int)DAT_146534108;
        if (iVar14 != 0) {
          puVar17 = DAT_146534100;
          if (DAT_146534100 == (uint *)0x0) {
            puVar17 = (uint *)&DAT_1465340f0;
          }
          uVar3 = *puVar17;
          uStack_168 = 0;
          puVar11 = puVar15;
          puVar16 = puVar15;
          while (uVar3 == 0) {
            iVar9 = (int)puVar11;
            uStack_168 = (int)puVar16 + 0x20;
            puVar16 = (undefined2 *)(ulonglong)uStack_168;
            local_180 = iVar9 + 1;
            puVar11 = (undefined2 *)(ulonglong)local_180;
            if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9)
            goto LAB_141d862ea;
            uVar3 = puVar17[(longlong)iVar9 + 1];
          }
          uStack_17c = -uVar3 & uVar3;
          iVar9 = 0x1f;
          if (uStack_17c != 0) {
            for (; uStack_17c >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          if (uStack_17c == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - iVar9;
          }
          iStack_16c = (uStack_168 - iVar9) + 0x1f;
          if (iVar14 < iStack_16c) {
LAB_141d862ea:
            iStack_16c = iVar14;
          }
        }
        local_170 = 0xffffffff;
        uStack_140 = CONCAT44(iStack_16c,0xffffffff);
        auStack_88._8_4_ = uStack_168;
        auStack_88._0_8_ = uStack_140;
        auStack_88._12_4_ = uStack_164;
        local_120 = 0;
        uStack_150 = CONCAT44(uStack_17c,local_180);
        local_a0 = &DAT_1465340e0;
        puStack_90 = &DAT_1465340f0;
        local_128 = &DAT_1465340e0;
        local_138._8_4_ = 0x465340e0;
        local_138._0_8_ = auStack_88._8_8_;
        local_138._12_4_ = 1;
        local_158 = (longlong *)&DAT_1465340e0;
        local_148 = &DAT_1465340f0;
        local_58._8_4_ = 0x465340e0;
        local_58._0_8_ = auStack_88._8_8_;
        local_58._12_4_ = 1;
        puVar11 = puVar15;
        puVar16 = puVar15;
        iVar9 = iStack_16c;
        uStack_98 = uStack_150;
        if (iStack_16c < iVar14) {
          do {
            plVar6 = local_158;
            lVar4 = *(longlong *)((longlong)iVar9 * 0x20 + 0x10 + *local_158);
            if (lVar4 == 0) {
              pwVar13 = L"None";
            }
            else {
              local_118 = *(undefined8 *)(lVar4 + 0x10);
              bVar18 = true;
              puVar10 = (undefined8 *)FName::ToString(&local_118,local_b0);
              if (*(int *)(puVar10 + 1) == 0) {
                pwVar13 = L"";
              }
              else {
                pwVar13 = (wchar_t *)*puVar10;
              }
            }
            FUN_141682af0(*plVar6 + (longlong)iVar9 * 0x20,&local_f0,0);
            puVar11 = &DAT_143f3eda8;
            if (local_e8 != 0) {
              puVar11 = local_f0;
            }
            FString::PrintfImpl(&local_100,L"\n0x%p: %s: %s",lVar4,pwVar13,puVar11);
            _Src = local_100;
            uVar19 = (undefined4)((ulonglong)puVar11 >> 0x20);
            if (local_f8 == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = local_f8 + -1;
            }
            if (iVar14 != 0) {
              iVar9 = (int)puVar16;
              local_188 = iVar14 + (uint)(iVar9 == 0) + iVar9;
              if (local_184 < (int)local_188) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,puVar16);
                puVar15 = local_190;
              }
              puVar16 = (undefined2 *)(ulonglong)local_188;
              _guard_xfg_dispatch_icall_nop
                        (puVar15 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),_Src,
                         (longlong)iVar14 * 2);
              (puVar15 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[iVar14] = 0;
            }
            iVar14 = (int)puVar16;
            if (local_100 != (void *)0x0) {
              FMemory::Free(local_100);
            }
            if (local_f0 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if ((bVar18) && (bVar18 = false, local_b0[0] != 0)) {
              FMemory::Free();
            }
            uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uStack_140 & ~uStack_150._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_150);
            iVar9 = uStack_140._4_4_;
          } while (uStack_140._4_4_ < *(int *)(local_148 + 0x18));
          puVar11 = puVar15;
          if (iVar14 == 0) goto LAB_141d864d5;
        }
        else {
LAB_141d864d5:
          iVar14 = (int)puVar16;
          puVar15 = &DAT_143f3eda8;
        }
        puVar7 = local_128;
        iVar9 = DAT_1465340e8 - DAT_146534114;
        FUN_141682af0(local_160 + local_1a0[3],&local_e0,0);
        puVar16 = &DAT_143f3eda8;
        if (local_d8 != 0) {
          puVar16 = local_e0;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x131,
                   L"Failed to find parameter collection buffer with GUID \'%s\'.\nCurrently %i listed default instances: %s"
                   ,puVar16,CONCAT44(uVar19,iVar9),puVar15);
        uVar19 = (undefined4)((ulonglong)puVar15 >> 0x20);
        if (local_e0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        puVar15 = &DAT_143f3eda8;
        if (iVar14 != 0) {
          puVar15 = puVar11;
        }
        iVar14 = DAT_1465340e8 - DAT_146534114;
        FUN_141682af0(local_160 + local_1a0[3],&local_d0,0);
        in_stack_fffffffffffffe38 = &DAT_143f3eda8;
        if (local_c8 != 0) {
          in_stack_fffffffffffffe38 = local_d0;
        }
        FDebug::AssertFailed
                  (&DAT_144e51a65,"Unknown",0x131,
                   L"Failed to find parameter collection buffer with GUID \'%s\'.\nCurrently %i listed default instances: %s"
                   ,in_stack_fffffffffffffe38,CONCAT44(uVar19,iVar14),puVar15);
        if (local_d0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
          TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(puVar7,*(int *)(puVar7 + 8) - *(int *)(puVar7 + 0x34),1);
        }
        if (puVar11 != (undefined2 *)0x0) {
          FMemory::Free(puVar11);
        }
      }
      if (*(char *)(*(longlong *)(param_1 + 0xe8) + 6 + local_198 * 8) != '\0') {
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 0xe8) + 4 + local_198 * 8);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar12 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar10 = puVar12 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar10;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar12;
        *(undefined8 **)(param_2 + 8) = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_144dcb3c8;
        puVar12[2] = param_3;
        puVar12[4] = local_110;
        *(uint *)(puVar12 + 3) = (uint)uVar2;
      }
      local_1a8 = local_1a8 + 1;
      local_198 = local_198 + 1;
    } while (local_198 < local_108);
  }
  if ((bVar5) && (local_1a0 != (undefined8 *)0x0)) {
    TRefCountPtr<FRHIIndexBuffer>::operator=(local_1a0,0);
    if (local_1a0[3] != 0) {
      FMemory::Free();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1a0 + 2);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1a0);
    FMemory::operator_delete(local_1a0,0x38);
  }
  return;
}



// FUNCTION 141d86700 FUN_141d86700 body=1789 status=ok
// SIG undefined FUN_141d86700(void)

void FUN_141d86700(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  undefined *puVar7;
  void *_Src;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint *puVar17;
  bool bVar18;
  undefined2 *in_stack_fffffffffffffe38;
  undefined4 uVar19;
  int local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  undefined2 *local_190;
  uint local_188;
  int local_184;
  uint local_180;
  uint uStack_17c;
  undefined *puStack_178;
  undefined4 local_170;
  int iStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  longlong local_160;
  longlong *local_158;
  undefined8 uStack_150;
  undefined *local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined *local_128;
  undefined2 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  void *local_100;
  int local_f8;
  undefined2 *local_f0;
  int local_e8;
  undefined2 *local_e0;
  int local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined1 local_c0 [16];
  longlong local_b0 [2];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_58 [16];
  
  bVar18 = false;
  bVar5 = false;
  local_1a0 = (undefined8 *)(param_4 + 0x30 + (longlong)*(int *)(param_6 + 0x1a38) * 0x38);
  if (DAT_1464c314c != 0) {
    if (*(char *)(local_1a0 + 5) != '\0') {
      SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
                (param_2,param_3,param_1 + 0xdc,*local_1a0);
      goto LAB_141d86794;
    }
    cVar8 = IsInRenderingThread();
    if ((cVar8 != '\0') && ((*(byte *)(param_4 + 0x110) & 3) != 0)) {
      FMaterialRenderProxy::InitDynamicRHI(param_4);
    }
  }
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_c0,param_4,param_5,param_6);
  bVar5 = true;
  local_1a0 = (undefined8 *)operator_new(0x38);
  if (local_1a0 != (undefined8 *)0x0) {
    *local_1a0 = 0;
    local_1a0[1] = 0;
    local_1a0[2] = 0;
    local_1a0[3] = 0;
    local_1a0[4] = 0;
    *(undefined1 *)(local_1a0 + 5) = 0;
    local_1a0[6] = 0;
  }
  FUN_14258c390(param_4,local_1a0,local_c0,param_2);
  if (*(char *)(param_1 + 0xe2) != '\0') {
    uVar2 = *(ushort *)(param_1 + 0xe0);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar12 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar12;
    *(undefined8 **)(param_2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_ExecuteAndDestruct_144e5c300;
    puVar12[2] = param_3;
    *(uint *)(puVar12 + 3) = (uint)uVar2;
    puVar12[4] = local_1a0[1];
    lVar4 = local_1a0[2];
    puVar12[5] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    piVar1 = (int *)(*(longlong *)(puVar12[4] + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
  }
LAB_141d86794:
  local_1a8 = 0;
  iVar14 = *(int *)(local_1a0 + 4);
  if (*(int *)(param_1 + 0xf0) <= *(int *)(local_1a0 + 4)) {
    iVar14 = *(int *)(param_1 + 0xf0);
  }
  local_108 = (longlong)iVar14;
  if (0 < iVar14) {
    local_198 = 0;
    do {
      puVar15 = (undefined2 *)0x0;
      local_160 = (longlong)local_1a8 * 0x10;
      local_110 = FUN_141d9ac40(param_1,local_1a0[3] + local_160,
                                *(undefined8 *)(*(longlong *)(param_6 + 0x10) + 0x20));
      uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
      if (local_110 == 0) {
        local_190 = (undefined2 *)0x0;
        local_184 = 0;
        local_180 = 0;
        uStack_17c = 1;
        puStack_178 = &DAT_1465340f0;
        iStack_16c = 0;
        uStack_168 = 0;
        iVar14 = (int)DAT_146534108;
        if (iVar14 != 0) {
          puVar17 = DAT_146534100;
          if (DAT_146534100 == (uint *)0x0) {
            puVar17 = (uint *)&DAT_1465340f0;
          }
          uVar3 = *puVar17;
          uStack_168 = 0;
          puVar11 = puVar15;
          puVar16 = puVar15;
          while (uVar3 == 0) {
            iVar9 = (int)puVar11;
            uStack_168 = (int)puVar16 + 0x20;
            puVar16 = (undefined2 *)(ulonglong)uStack_168;
            local_180 = iVar9 + 1;
            puVar11 = (undefined2 *)(ulonglong)local_180;
            if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9)
            goto LAB_141d869ea;
            uVar3 = puVar17[(longlong)iVar9 + 1];
          }
          uStack_17c = -uVar3 & uVar3;
          iVar9 = 0x1f;
          if (uStack_17c != 0) {
            for (; uStack_17c >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          if (uStack_17c == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - iVar9;
          }
          iStack_16c = (uStack_168 - iVar9) + 0x1f;
          if (iVar14 < iStack_16c) {
LAB_141d869ea:
            iStack_16c = iVar14;
          }
        }
        local_170 = 0xffffffff;
        uStack_140 = CONCAT44(iStack_16c,0xffffffff);
        auStack_88._8_4_ = uStack_168;
        auStack_88._0_8_ = uStack_140;
        auStack_88._12_4_ = uStack_164;
        local_120 = 0;
        uStack_150 = CONCAT44(uStack_17c,local_180);
        local_a0 = &DAT_1465340e0;
        puStack_90 = &DAT_1465340f0;
        local_128 = &DAT_1465340e0;
        local_138._8_4_ = 0x465340e0;
        local_138._0_8_ = auStack_88._8_8_;
        local_138._12_4_ = 1;
        local_158 = (longlong *)&DAT_1465340e0;
        local_148 = &DAT_1465340f0;
        local_58._8_4_ = 0x465340e0;
        local_58._0_8_ = auStack_88._8_8_;
        local_58._12_4_ = 1;
        puVar11 = puVar15;
        puVar16 = puVar15;
        iVar9 = iStack_16c;
        uStack_98 = uStack_150;
        if (iStack_16c < iVar14) {
          do {
            plVar6 = local_158;
            lVar4 = *(longlong *)((longlong)iVar9 * 0x20 + 0x10 + *local_158);
            if (lVar4 == 0) {
              pwVar13 = L"None";
            }
            else {
              local_118 = *(undefined8 *)(lVar4 + 0x10);
              bVar18 = true;
              puVar10 = (undefined8 *)FName::ToString(&local_118,local_b0);
              if (*(int *)(puVar10 + 1) == 0) {
                pwVar13 = L"";
              }
              else {
                pwVar13 = (wchar_t *)*puVar10;
              }
            }
            FUN_141682af0(*plVar6 + (longlong)iVar9 * 0x20,&local_f0,0);
            puVar11 = &DAT_143f3eda8;
            if (local_e8 != 0) {
              puVar11 = local_f0;
            }
            FString::PrintfImpl(&local_100,L"\n0x%p: %s: %s",lVar4,pwVar13,puVar11);
            _Src = local_100;
            uVar19 = (undefined4)((ulonglong)puVar11 >> 0x20);
            if (local_f8 == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = local_f8 + -1;
            }
            if (iVar14 != 0) {
              iVar9 = (int)puVar16;
              local_188 = iVar14 + (uint)(iVar9 == 0) + iVar9;
              if (local_184 < (int)local_188) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,puVar16);
                puVar15 = local_190;
              }
              puVar16 = (undefined2 *)(ulonglong)local_188;
              _guard_xfg_dispatch_icall_nop
                        (puVar15 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),_Src,
                         (longlong)iVar14 * 2);
              (puVar15 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[iVar14] = 0;
            }
            iVar14 = (int)puVar16;
            if (local_100 != (void *)0x0) {
              FMemory::Free(local_100);
            }
            if (local_f0 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if ((bVar18) && (bVar18 = false, local_b0[0] != 0)) {
              FMemory::Free();
            }
            uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uStack_140 & ~uStack_150._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_150);
            iVar9 = uStack_140._4_4_;
          } while (uStack_140._4_4_ < *(int *)(local_148 + 0x18));
          puVar11 = puVar15;
          if (iVar14 == 0) goto LAB_141d86bd5;
        }
        else {
LAB_141d86bd5:
          iVar14 = (int)puVar16;
          puVar15 = &DAT_143f3eda8;
        }
        puVar7 = local_128;
        iVar9 = DAT_1465340e8 - DAT_146534114;
        FUN_141682af0(local_160 + local_1a0[3],&local_e0,0);
        puVar16 = &DAT_143f3eda8;
        if (local_d8 != 0) {
          puVar16 = local_e0;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x131,
                   L"Failed to find parameter collection buffer with GUID \'%s\'.\nCurrently %i listed default instances: %s"
                   ,puVar16,CONCAT44(uVar19,iVar9),puVar15);
        uVar19 = (undefined4)((ulonglong)puVar15 >> 0x20);
        if (local_e0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        puVar15 = &DAT_143f3eda8;
        if (iVar14 != 0) {
          puVar15 = puVar11;
        }
        iVar14 = DAT_1465340e8 - DAT_146534114;
        FUN_141682af0(local_160 + local_1a0[3],&local_d0,0);
        in_stack_fffffffffffffe38 = &DAT_143f3eda8;
        if (local_c8 != 0) {
          in_stack_fffffffffffffe38 = local_d0;
        }
        FDebug::AssertFailed
                  (&DAT_144e519b5,"Unknown",0x131,
                   L"Failed to find parameter collection buffer with GUID \'%s\'.\nCurrently %i listed default instances: %s"
                   ,in_stack_fffffffffffffe38,CONCAT44(uVar19,iVar14),puVar15);
        if (local_d0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
          TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(puVar7,*(int *)(puVar7 + 8) - *(int *)(puVar7 + 0x34),1);
        }
        if (puVar11 != (undefined2 *)0x0) {
          FMemory::Free(puVar11);
        }
      }
      if (*(char *)(*(longlong *)(param_1 + 0xe8) + 6 + local_198 * 8) != '\0') {
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 0xe8) + 4 + local_198 * 8);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar12 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar10 = puVar12 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar10;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar12;
        *(undefined8 **)(param_2 + 8) = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_144dcb3a8;
        puVar12[2] = param_3;
        puVar12[4] = local_110;
        *(uint *)(puVar12 + 3) = (uint)uVar2;
      }
      local_1a8 = local_1a8 + 1;
      local_198 = local_198 + 1;
    } while (local_198 < local_108);
  }
  if ((bVar5) && (local_1a0 != (undefined8 *)0x0)) {
    TRefCountPtr<FRHIIndexBuffer>::operator=(local_1a0,0);
    if (local_1a0[3] != 0) {
      FMemory::Free();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1a0 + 2);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1a0);
    FMemory::operator_delete(local_1a0,0x38);
  }
  return;
}


