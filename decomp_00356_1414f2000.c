// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1414f2000 FUN_1414f2000 body=310 status=ok
// SIG undefined FUN_1414f2000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1414f2000(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_148 [32];
  undefined8 local_128 [2];
  undefined1 local_118 [8];
  longlong local_110;
  undefined1 local_c0 [16];
  undefined1 local_b0 [104];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_128[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_128);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  FUN_140f9f7d0(local_118);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_118);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_118);
  }
  puVar2 = local_118;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14129aa20(param_1,local_128[0],puVar2);
  *param_3 = uVar1;
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(local_48);
  FUN_140bff340(local_b0);
  FUN_140c64420(local_c0);
  if (local_110 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414f2140 FUN_1414f2140 body=163 status=ok
// SIG undefined FUN_1414f2140(void)

void FUN_1414f2140(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14129aa60(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414f21f0 FUN_1414f21f0 body=325 status=ok
// SIG undefined FUN_1414f21f0(void)

void FUN_1414f21f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  longlong local_28;
  undefined8 local_20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10[0] = 0;
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14129e2b0(param_1,local_res20,plVar1,local_res10[0]);
  if ((int)local_20 != 0) {
    plVar1 = (longlong *)(local_28 + 8);
    iVar2 = (int)local_20;
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414f2340 FUN_1414f2340 body=448 status=ok
// SIG undefined FUN_1414f2340(void)

void FUN_1414f2340(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = &local_38;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_34);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_res10[0] = 0;
  puVar2 = &local_34;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_res20[0] = local_res10[0];
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14129f000(param_1,local_28[0],puVar1,puVar2,local_res20,local_30);
  return;
}



// FUNCTION 1414f2500 FUN_1414f2500 body=443 status=ok
// SIG undefined FUN_1414f2500(void)

void FUN_1414f2500(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  int local_38 [2];
  undefined8 local_30;
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_res10;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_38[0] = 0;
  puVar2 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14129f250(param_1,local_28[0],local_30,puVar1,puVar2,local_38[0] != 0);
  return;
}



// FUNCTION 1414f26c0 FUN_1414f26c0 body=268 status=ok
// SIG undefined FUN_1414f26c0(void)

void FUN_1414f26c0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar6 = (longlong *)FUN_140633d10();
  if (param_3 != plVar6) {
    plVar7 = (longlong *)*param_3;
    for (iVar10 = (int)param_3[1]; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 0xc;
    }
    iVar10 = (int)plVar6[1];
    lVar1 = *plVar6;
    *(int *)(param_3 + 1) = iVar10;
    if ((iVar10 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    }
    else {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy(param_3,iVar10);
      lVar9 = *param_3;
      if (iVar10 != 0) {
        puVar8 = (undefined8 *)(lVar1 + 0x30);
        puVar11 = (undefined8 *)(lVar9 + 0x30);
        do {
          FString::FString(lVar9,puVar8 + -6);
          uVar5 = puVar8[-3];
          lVar9 = lVar9 + 0x60;
          puVar11[-4] = puVar8[-4];
          puVar11[-3] = uVar5;
          uVar5 = puVar8[-1];
          puVar11[-2] = puVar8[-2];
          puVar11[-1] = uVar5;
          uVar5 = puVar8[1];
          *puVar11 = *puVar8;
          puVar11[1] = uVar5;
          puVar11[2] = puVar8[2];
          puVar11[3] = puVar8[3];
          uVar2 = *(undefined4 *)((longlong)puVar8 + 0x24);
          uVar3 = *(undefined4 *)(puVar8 + 5);
          uVar4 = *(undefined4 *)((longlong)puVar8 + 0x2c);
          *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(puVar8 + 4);
          *(undefined4 *)((longlong)puVar11 + 0x24) = uVar2;
          *(undefined4 *)(puVar11 + 5) = uVar3;
          *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar4;
          iVar10 = iVar10 + -1;
          puVar8 = puVar8 + 0xc;
          puVar11 = puVar11 + 0xc;
        } while (iVar10 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1414f27d0 FUN_1414f27d0 body=44 status=ok
// SIG undefined FUN_1414f27d0(void)

void FUN_1414f27d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14129f8a0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f2800 FUN_1414f2800 body=51 status=ok
// SIG undefined FUN_1414f2800(void)

void FUN_1414f2800(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UDynamicEntryBox::GetAllEntries();
  FUN_1414efff0(param_3,uVar1);
  return;
}



// FUNCTION 1414f2840 FUN_1414f2840 body=264 status=ok
// SIG undefined FUN_1414f2840(void)

void FUN_1414f2840(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar6 = (longlong *)FUN_140585cd0();
  if (param_3 != plVar6) {
    iVar9 = (int)param_3[1];
    if (iVar9 != 0) {
      plVar7 = (longlong *)(*param_3 + 8);
      do {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 0xc;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = (int)plVar6[1];
    lVar1 = *plVar6;
    *(int *)(param_3 + 1) = iVar9;
    if ((iVar9 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    }
    else {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy(param_3,iVar9);
      puVar11 = (undefined8 *)*param_3;
      if (iVar9 != 0) {
        puVar8 = (undefined4 *)(lVar1 + 0x40);
        puVar10 = puVar11 + 8;
        do {
          *puVar11 = *(undefined8 *)(puVar8 + -0x10);
          FString::FString(puVar10 + -7,puVar8 + -0xe);
          uVar5 = *(undefined8 *)(puVar8 + -6);
          puVar11 = puVar11 + 0xc;
          puVar10[-4] = *(undefined8 *)(puVar8 + -8);
          puVar10[-3] = uVar5;
          uVar5 = *(undefined8 *)(puVar8 + -2);
          puVar10[-2] = *(undefined8 *)(puVar8 + -4);
          puVar10[-1] = uVar5;
          uVar2 = puVar8[1];
          uVar3 = puVar8[2];
          uVar4 = puVar8[3];
          *(undefined4 *)puVar10 = *puVar8;
          *(undefined4 *)((longlong)puVar10 + 4) = uVar2;
          *(undefined4 *)(puVar10 + 1) = uVar3;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uVar4;
          puVar10[2] = *(undefined8 *)(puVar8 + 4);
          puVar10[3] = *(undefined8 *)(puVar8 + 6);
          iVar9 = iVar9 + -1;
          puVar8 = puVar8 + 0x18;
          puVar10 = puVar10 + 0xc;
        } while (iVar9 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1414f2950 FUN_1414f2950 body=44 status=ok
// SIG undefined FUN_1414f2950(void)

void FUN_1414f2950(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14129f920();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f2980 FUN_1414f2980 body=295 status=ok
// SIG undefined FUN_1414f2980(void)

void FUN_1414f2980(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_res10;
  longlong local_18;
  undefined8 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_18 = 0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  plVar3 = &local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14129fe60(param_1,local_res10,plVar3);
  if ((int)local_10 != 0) {
    lVar1 = local_18 + 0x68;
    iVar2 = (int)local_10;
    do {
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar1 + 0x68);
      FUN_140bff340(lVar1);
      FUN_140c64420(lVar1 + -0x10);
      if (*(longlong *)(lVar1 + -0x60) != 0) {
        FMemory::Free();
      }
      lVar1 = lVar1 + 0xf0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414f2ab0 FUN_1414f2ab0 body=289 status=ok
// SIG undefined FUN_1414f2ab0(void)

void FUN_1414f2ab0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  longlong lVar2;
  undefined8 local_res10;
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  local_28 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_30;
  local_20 = (int)local_30;
  if ((int)local_30 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_30 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar2 * 2);
  }
  uVar1 = FUN_1412a2e00(param_1,local_res10,&local_28);
  *param_3 = uVar1;
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414f2be0 FUN_1414f2be0 body=343 status=ok
// SIG undefined FUN_1414f2be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414f2be0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [2];
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_80 = 0;
  local_48 = _DAT_1468a32b0 & _DAT_1468a32c0;
  uStack_44 = uRam00000001468a32b4 & uRam00000001468a32c4;
  uStack_40 = uRam00000001468a32b8 & uRam00000001468a32c8;
  uStack_3c = uRam00000001468a32bc & uRam00000001468a32cc;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = uRam00000001468a32bc;
  local_88 = 0;
  local_78 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0xffffffffffffffff;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1412a2e70(param_1,local_98[0],puVar2);
  *param_3 = uVar1;
  if (local_80 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414f2d40 FUN_1414f2d40 body=143 status=ok
// SIG undefined FUN_1414f2d40(void)

void FUN_1414f2d40(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1412a3110(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f2dd0 FUN_1414f2dd0 body=236 status=ok
// SIG undefined FUN_1414f2dd0(void)

void FUN_1414f2dd0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  wchar_t *pwVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  pwVar1 = AK::MemoryMgr::GetPoolName((long)local_res20);
  *param_3 = pwVar1;
  return;
}



// FUNCTION 1414f2ec0 FUN_1414f2ec0 body=128 status=ok
// SIG undefined FUN_1414f2ec0(void)

void FUN_1414f2ec0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1412a31d0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f2f40 FUN_1414f2f40 body=357 status=ok
// SIG undefined FUN_1414f2f40(void)

void FUN_1414f2f40(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18[0] = 0;
  puVar2 = &local_res20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1412a3220(param_1,local_38[0],puVar2,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f30b0 FUN_1414f30b0 body=144 status=ok
// SIG undefined FUN_1414f30b0(void)

void FUN_1414f30b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1412a34f0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f3160 FUN_1414f3160 body=127 status=ok
// SIG undefined FUN_1414f3160(void)

void FUN_1414f3160(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FOutputDevice::CanBeUsedOnAnyThread(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f31e0 FUN_1414f31e0 body=190 status=ok
// SIG undefined FUN_1414f31e0(void)

void FUN_1414f31e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1412a9840(param_1,local_res18[0],local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f32a0 FUN_1414f32a0 body=194 status=ok
// SIG undefined FUN_1414f32a0(void)

void FUN_1414f32a0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412aaaf0(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 1414f3370 FUN_1414f3370 body=143 status=ok
// SIG undefined FUN_1414f3370(void)

void FUN_1414f3370(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1412abb60(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f3400 FUN_1414f3400 body=162 status=ok
// SIG undefined FUN_1414f3400(void)

longlong FUN_1414f3400(void)

{
  if (DAT_1468a3bf0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ZoneMapMeshData",&DAT_1468a3bf0,FUN_1414f58a0,0x68,0x10000000
                  ,0,L"Engine",&LAB_1414f4ce0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468a3bf0;
}



// FUNCTION 1414f34b0 FUN_1414f34b0 body=47 status=ok
// SIG undefined FUN_1414f34b0(void)

longlong FUN_1414f34b0(void)

{
  if (DAT_1468a3be8 == 0) {
    FUN_141786440(&DAT_1468a3be8,&PTR_FUN_144c28ca0);
  }
  return DAT_1468a3be8;
}



// FUNCTION 1414f34e0 FUN_1414f34e0 body=47 status=ok
// SIG undefined FUN_1414f34e0(void)

longlong FUN_1414f34e0(void)

{
  if (DAT_1468a3be0 == 0) {
    FUN_141786a30(&DAT_1468a3be0,&PTR_FUN_1464975a0);
  }
  return DAT_1468a3be0;
}



// FUNCTION 1414f3510 FUN_1414f3510 body=53 status=ok
// SIG undefined FUN_1414f3510(void)

void FUN_1414f3510(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144c33e38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414f3560 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayerState::GetPrivateStaticClass(void)

{
  if (DAT_1468a3c28 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ZoneMapPlanetViewer",&DAT_1468a3c28,FUN_1414f57b0,0x478,
                  0x10000000,0,L"Engine",&LAB_1414f4b00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1414efb80
                  ,&LAB_140447700,0);
  }
  return DAT_1468a3c28;
}



// FUNCTION 1414f3610 FUN_1414f3610 body=47 status=ok
// SIG undefined FUN_1414f3610(void)

longlong FUN_1414f3610(void)

{
  if (DAT_1468a3c20 == 0) {
    FUN_141786440(&DAT_1468a3c20,&PTR_GetPrivateStaticClass_144c2b960);
  }
  return DAT_1468a3c20;
}



// FUNCTION 1414f3640 FUN_1414f3640 body=47 status=ok
// SIG undefined FUN_1414f3640(void)

longlong FUN_1414f3640(void)

{
  if (DAT_1468a3c18 == 0) {
    FUN_141786a30(&DAT_1468a3c18,&PTR_FUN_1464979f0);
  }
  return DAT_1468a3c18;
}



// FUNCTION 1414f3670 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGPingUsable::GetPrivateStaticClass(void)

{
  if (DAT_1468a3a40 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ZoneMapIconBase",&DAT_1468a3a40,
                  StaticRegisterNativesAGPingUsable,0x4a8,0x10000000,0,L"Engine",&LAB_1414f4aa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1414efb80
                  ,&LAB_140447700,0);
  }
  return DAT_1468a3a40;
}



// FUNCTION 1414f3720 FUN_1414f3720 body=53 status=ok
// SIG undefined FUN_1414f3720(void)

void FUN_1414f3720(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144c33f60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414f3760 FUN_1414f3760 body=53 status=ok
// SIG undefined FUN_1414f3760(void)

void FUN_1414f3760(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144c34078;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414f37a0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UCheckBoxWidgetStyle::StaticClass(void)

{
  if (DAT_1468a3aa8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakZoneMapIcon_POI",&DAT_1468a3aa8,FUN_1414f5720,0x5b0,
                  0x10000000,0,L"Engine",&LAB_1414f4a80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AGPingUsable::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a3aa8;
}



// FUNCTION 1414f3860 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoUIInputKeySelector::GetPrivateStaticClass(void)

{
  if (DAT_1468a3ac8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ZoneMapMissionWaypointIcon",&DAT_1468a3ac8,FUN_1414f5780,
                  0x6a0,0x10000000,0,L"Engine",FUN_1414f4ac0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  UCheckBoxWidgetStyle::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468a3ac8;
}



// FUNCTION 1414f3910 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UScrollBar::GetPrivateStaticClass(void)

{
  if (DAT_1468a3af0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakZoneMapChallengeIcon",&DAT_1468a3af0,FUN_1414f56f0,0x610,
                  0x10000000,0,L"Engine",FUN_1414f49a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  UCheckBoxWidgetStyle::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468a3af0;
}



// FUNCTION 1414f39c0 FUN_1414f39c0 body=162 status=ok
// SIG undefined FUN_1414f39c0(void)

longlong FUN_1414f39c0(void)

{
  if (DAT_1468a3c90 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ZoneMapPOIComponent",&DAT_1468a3c90,FUN_1414f5900,0x760,
                  0x10000000,0,L"Engine",&LAB_1414f4d20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1414f56e0,&LAB_140447700,0);
  }
  return DAT_1468a3c90;
}



// FUNCTION 1414f3a70 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong AUIWSRiver::StaticClass(void)

{
  if (DAT_1468a3b00 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakZoneMapFriendIcon_POI",&DAT_1468a3b00,FUN_140447710,0x5d0,
                  0x10000000,0,L"Engine",FUN_1414f4a30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  UCheckBoxWidgetStyle::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468a3b00;
}



// FUNCTION 1414f3b20 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCheckBox::GetPrivateStaticClass(void)

{
  if (DAT_1468a3c50 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ZoneMapPOIAIComponent",&DAT_1468a3c50,FUN_1414f58d0,0x780,
                  0x10000000,0,L"Engine",&LAB_1414f4d00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414f39c0,&LAB_140447700,0);
  }
  return DAT_1468a3c50;
}



// FUNCTION 1414f3bd0 FUN_1414f3bd0 body=47 status=ok
// SIG undefined FUN_1414f3bd0(void)

longlong FUN_1414f3bd0(void)

{
  if (DAT_1468a3c48 == 0) {
    FUN_141786440(&DAT_1468a3c48,&PTR_GetPrivateStaticClass_144c2bc10);
  }
  return DAT_1468a3c48;
}



// FUNCTION 1414f3c00 FUN_1414f3c00 body=47 status=ok
// SIG undefined FUN_1414f3c00(void)

longlong FUN_1414f3c00(void)

{
  if (DAT_1468a3c88 == 0) {
    FUN_141786440(&DAT_1468a3c88,&PTR_FUN_144c2c2c0);
  }
  return DAT_1468a3c88;
}



// FUNCTION 1414f3c30 FUN_1414f3c30 body=47 status=ok
// SIG undefined FUN_1414f3c30(void)

longlong FUN_1414f3c30(void)

{
  if (DAT_1468a3c30 == 0) {
    FUN_141786a30(&DAT_1468a3c30,&PTR_FUN_146497b60);
  }
  return DAT_1468a3c30;
}



// FUNCTION 1414f3c60 FUN_1414f3c60 body=47 status=ok
// SIG undefined FUN_1414f3c60(void)

longlong FUN_1414f3c60(void)

{
  if (DAT_1468a3c38 == 0) {
    FUN_141786a30(&DAT_1468a3c38,&PTR_FUN_146497ba0);
  }
  return DAT_1468a3c38;
}



// FUNCTION 1414f3c90 FUN_1414f3c90 body=47 status=ok
// SIG undefined FUN_1414f3c90(void)

longlong FUN_1414f3c90(void)

{
  if (DAT_1468a3c40 == 0) {
    FUN_141786a30(&DAT_1468a3c40,&PTR_FUN_146497c60);
  }
  return DAT_1468a3c40;
}



// FUNCTION 1414f3cc0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong AUIWSRiver::StaticClass(void)

{
  if (DAT_1468a3b28 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ZoneMapPlayerIcon_POI",&DAT_1468a3b28,FUN_1414f57e0,0x5d0,
                  0x10000000,0,L"Engine",&LAB_1414f4b20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  UCheckBoxWidgetStyle::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468a3b28;
}



// FUNCTION 1414f3d70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ALandscape::GetPrivateStaticClass(void)

{
  if (DAT_1468a3b60 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ZoneMapVehicleIcon_POI",&DAT_1468a3b60,
                  AGCaptureGameState::StaticRegisterNativesAGCaptureGameState,0x640,0x10000000,0,
                  L"Engine",FUN_1414f4b90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AUIWSRiver::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468a3b60;
}



// FUNCTION 1414f3e30 FUN_1414f3e30 body=47 status=ok
// SIG undefined FUN_1414f3e30(void)

longlong FUN_1414f3e30(void)

{
  if (DAT_1468a3c58 == 0) {
    FUN_141786a30(&DAT_1468a3c58,&PTR_FUN_146497d90);
  }
  return DAT_1468a3c58;
}



// FUNCTION 1414f3e60 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong ARemnantMeleeWeapon::StaticClass(void)

{
  if (DAT_1468a3b80 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ZoneMapTravelStationIcon_POI",&DAT_1468a3b80,FUN_1414f5810,
                  0x5e0,0x10000000,0,L"Engine",FUN_1414f4b40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  UCheckBoxWidgetStyle::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468a3b80;
}



// FUNCTION 1414f3f10 FUN_1414f3f10 body=47 status=ok
// SIG undefined FUN_1414f3f10(void)

longlong FUN_1414f3f10(void)

{
  if (DAT_1468a3c60 == 0) {
    FUN_141786a30(&DAT_1468a3c60,&PTR_FUN_146497dd0);
  }
  return DAT_1468a3c60;
}



// FUNCTION 1414f3f40 FUN_1414f3f40 body=47 status=ok
// SIG undefined FUN_1414f3f40(void)

longlong FUN_1414f3f40(void)

{
  if (DAT_1468a3c68 == 0) {
    FUN_141786a30(&DAT_1468a3c68,&PTR_FUN_146497e50);
  }
  return DAT_1468a3c68;
}



// FUNCTION 1414f3f70 FUN_1414f3f70 body=47 status=ok
// SIG undefined FUN_1414f3f70(void)

longlong FUN_1414f3f70(void)

{
  if (DAT_1468a3c70 == 0) {
    FUN_141786a30(&DAT_1468a3c70,&PTR_FUN_146497ed0);
  }
  return DAT_1468a3c70;
}



// FUNCTION 1414f3fa0 FUN_1414f3fa0 body=47 status=ok
// SIG undefined FUN_1414f3fa0(void)

longlong FUN_1414f3fa0(void)

{
  if (DAT_1468a3c78 == 0) {
    FUN_141786a30(&DAT_1468a3c78,&PTR_FUN_146497f50);
  }
  return DAT_1468a3c78;
}



// FUNCTION 1414f3fd0 FUN_1414f3fd0 body=47 status=ok
// SIG undefined FUN_1414f3fd0(void)

longlong FUN_1414f3fd0(void)

{
  if (DAT_1468a3c80 == 0) {
    FUN_141786a30(&DAT_1468a3c80,&PTR_FUN_146497f90);
  }
  return DAT_1468a3c80;
}



// FUNCTION 1414f4000 FUN_1414f4000 body=47 status=ok
// SIG undefined FUN_1414f4000(void)

longlong FUN_1414f4000(void)

{
  if (DAT_1468a3a38 == 0) {
    FUN_141786440(&DAT_1468a3a38,&PTR_GetPrivateStaticClass_144c2c570);
  }
  return DAT_1468a3a38;
}



// FUNCTION 1414f4030 FUN_1414f4030 body=47 status=ok
// SIG undefined FUN_1414f4030(void)

longlong FUN_1414f4030(void)

{
  if (DAT_1468a3a18 == 0) {
    FUN_141786a30(&DAT_1468a3a18,&PTR_FUN_146494480);
  }
  return DAT_1468a3a18;
}



// FUNCTION 1414f4060 FUN_1414f4060 body=47 status=ok
// SIG undefined FUN_1414f4060(void)

longlong FUN_1414f4060(void)

{
  if (DAT_1468a3a20 == 0) {
    FUN_141786a30(&DAT_1468a3a20,&PTR_FUN_146494510);
  }
  return DAT_1468a3a20;
}



// FUNCTION 1414f4090 FUN_1414f4090 body=47 status=ok
// SIG undefined FUN_1414f4090(void)

longlong FUN_1414f4090(void)

{
  if (DAT_1468a3a28 == 0) {
    FUN_141786a30(&DAT_1468a3a28,&PTR_FUN_1464945a0);
  }
  return DAT_1468a3a28;
}



// FUNCTION 1414f40c0 FUN_1414f40c0 body=47 status=ok
// SIG undefined FUN_1414f40c0(void)

longlong FUN_1414f40c0(void)

{
  if (DAT_1468a3a30 == 0) {
    FUN_141786a30(&DAT_1468a3a30,&PTR_FUN_1464945e0);
  }
  return DAT_1468a3a30;
}



// FUNCTION 1414f40f0 FUN_1414f40f0 body=47 status=ok
// SIG undefined FUN_1414f40f0(void)

longlong FUN_1414f40f0(void)

{
  if (DAT_1468a3aa0 == 0) {
    FUN_141786440(&DAT_1468a3aa0,&PTR_StaticClass_144c2d310);
  }
  return DAT_1468a3aa0;
}



// FUNCTION 1414f4120 FUN_1414f4120 body=47 status=ok
// SIG undefined FUN_1414f4120(void)

longlong FUN_1414f4120(void)

{
  if (DAT_1468a3a48 == 0) {
    FUN_141786a30(&DAT_1468a3a48,&PTR_FUN_146494870);
  }
  return DAT_1468a3a48;
}



// FUNCTION 1414f4150 FUN_1414f4150 body=47 status=ok
// SIG undefined FUN_1414f4150(void)

longlong FUN_1414f4150(void)

{
  if (DAT_1468a3a50 == 0) {
    FUN_141786a30(&DAT_1468a3a50,&PTR_FUN_146494900);
  }
  return DAT_1468a3a50;
}



// FUNCTION 1414f4180 FUN_1414f4180 body=47 status=ok
// SIG undefined FUN_1414f4180(void)

longlong FUN_1414f4180(void)

{
  if (DAT_1468a3a58 == 0) {
    FUN_141786a30(&DAT_1468a3a58,&PTR_FUN_146494940);
  }
  return DAT_1468a3a58;
}



// FUNCTION 1414f41b0 FUN_1414f41b0 body=47 status=ok
// SIG undefined FUN_1414f41b0(void)

longlong FUN_1414f41b0(void)

{
  if (DAT_1468a3a60 == 0) {
    FUN_141786a30(&DAT_1468a3a60,&PTR_FUN_146494ad0);
  }
  return DAT_1468a3a60;
}



// FUNCTION 1414f41e0 FUN_1414f41e0 body=47 status=ok
// SIG undefined FUN_1414f41e0(void)

longlong FUN_1414f41e0(void)

{
  if (DAT_1468a3a68 == 0) {
    FUN_141786a30(&DAT_1468a3a68,&PTR_FUN_146494b50);
  }
  return DAT_1468a3a68;
}



// FUNCTION 1414f4210 FUN_1414f4210 body=47 status=ok
// SIG undefined FUN_1414f4210(void)

longlong FUN_1414f4210(void)

{
  if (DAT_1468a3a70 == 0) {
    FUN_141786a30(&DAT_1468a3a70,&PTR_FUN_146494b90);
  }
  return DAT_1468a3a70;
}



// FUNCTION 1414f4240 FUN_1414f4240 body=47 status=ok
// SIG undefined FUN_1414f4240(void)

longlong FUN_1414f4240(void)

{
  if (DAT_1468a3a78 == 0) {
    FUN_141786a30(&DAT_1468a3a78,&PTR_FUN_146494c50);
  }
  return DAT_1468a3a78;
}



// FUNCTION 1414f4270 FUN_1414f4270 body=47 status=ok
// SIG undefined FUN_1414f4270(void)

longlong FUN_1414f4270(void)

{
  if (DAT_1468a3a80 == 0) {
    FUN_141786a30(&DAT_1468a3a80,&PTR_FUN_146494cd0);
  }
  return DAT_1468a3a80;
}



// FUNCTION 1414f42a0 FUN_1414f42a0 body=47 status=ok
// SIG undefined FUN_1414f42a0(void)

longlong FUN_1414f42a0(void)

{
  if (DAT_1468a3a88 == 0) {
    FUN_141786a30(&DAT_1468a3a88,&PTR_FUN_146494d60);
  }
  return DAT_1468a3a88;
}



// FUNCTION 1414f42d0 FUN_1414f42d0 body=47 status=ok
// SIG undefined FUN_1414f42d0(void)

longlong FUN_1414f42d0(void)

{
  if (DAT_1468a3a90 == 0) {
    FUN_141786a30(&DAT_1468a3a90,&PTR_FUN_146494de0);
  }
  return DAT_1468a3a90;
}



// FUNCTION 1414f4300 FUN_1414f4300 body=47 status=ok
// SIG undefined FUN_1414f4300(void)

longlong FUN_1414f4300(void)

{
  if (DAT_1468a3a98 == 0) {
    FUN_141786a30(&DAT_1468a3a98,&PTR_FUN_146494e60);
  }
  return DAT_1468a3a98;
}



// FUNCTION 1414f4330 FUN_1414f4330 body=47 status=ok
// SIG undefined FUN_1414f4330(void)

longlong FUN_1414f4330(void)

{
  if (DAT_1468a3ac0 == 0) {
    FUN_141786440(&DAT_1468a3ac0,&PTR_GetPrivateStaticClass_144c2d9a0);
  }
  return DAT_1468a3ac0;
}



// FUNCTION 1414f4360 FUN_1414f4360 body=47 status=ok
// SIG undefined FUN_1414f4360(void)

longlong FUN_1414f4360(void)

{
  if (DAT_1468a3ab0 == 0) {
    FUN_141786a30(&DAT_1468a3ab0,&PTR_FUN_146495470);
  }
  return DAT_1468a3ab0;
}



// FUNCTION 1414f4390 FUN_1414f4390 body=47 status=ok
// SIG undefined FUN_1414f4390(void)

longlong FUN_1414f4390(void)

{
  if (DAT_1468a3ab8 == 0) {
    FUN_141786a30(&DAT_1468a3ab8,&PTR_FUN_1464954b0);
  }
  return DAT_1468a3ab8;
}



// FUNCTION 1414f43c0 FUN_1414f43c0 body=47 status=ok
// SIG undefined FUN_1414f43c0(void)

longlong FUN_1414f43c0(void)

{
  if (DAT_1468a3ae8 == 0) {
    FUN_141786440(&DAT_1468a3ae8,&PTR_GetPrivateStaticClass_144c2dc20);
  }
  return DAT_1468a3ae8;
}



// FUNCTION 1414f43f0 FUN_1414f43f0 body=47 status=ok
// SIG undefined FUN_1414f43f0(void)

longlong FUN_1414f43f0(void)

{
  if (DAT_1468a3ad0 == 0) {
    FUN_141786a30(&DAT_1468a3ad0,&PTR_FUN_1464955a0);
  }
  return DAT_1468a3ad0;
}



// FUNCTION 1414f4420 FUN_1414f4420 body=47 status=ok
// SIG undefined FUN_1414f4420(void)

longlong FUN_1414f4420(void)

{
  if (DAT_1468a3ad8 == 0) {
    FUN_141786a30(&DAT_1468a3ad8,&PTR_FUN_146495620);
  }
  return DAT_1468a3ad8;
}



// FUNCTION 1414f4450 FUN_1414f4450 body=47 status=ok
// SIG undefined FUN_1414f4450(void)

longlong FUN_1414f4450(void)

{
  if (DAT_1468a3ae0 == 0) {
    FUN_141786a30(&DAT_1468a3ae0,&PTR_FUN_146495660);
  }
  return DAT_1468a3ae0;
}



// FUNCTION 1414f4480 FUN_1414f4480 body=47 status=ok
// SIG undefined FUN_1414f4480(void)

longlong FUN_1414f4480(void)

{
  if (DAT_1468a3b20 == 0) {
    FUN_141786440(&DAT_1468a3b20,&PTR_StaticClass_144c2e050);
  }
  return DAT_1468a3b20;
}



// FUNCTION 1414f44b0 FUN_1414f44b0 body=47 status=ok
// SIG undefined FUN_1414f44b0(void)

longlong FUN_1414f44b0(void)

{
  if (DAT_1468a3b08 == 0) {
    FUN_141786a30(&DAT_1468a3b08,&PTR_FUN_1464957c0);
  }
  return DAT_1468a3b08;
}



// FUNCTION 1414f44e0 FUN_1414f44e0 body=47 status=ok
// SIG undefined FUN_1414f44e0(void)

longlong FUN_1414f44e0(void)

{
  if (DAT_1468a3b10 == 0) {
    FUN_141786a30(&DAT_1468a3b10,&PTR_FUN_146495840);
  }
  return DAT_1468a3b10;
}



// FUNCTION 1414f4510 FUN_1414f4510 body=47 status=ok
// SIG undefined FUN_1414f4510(void)

longlong FUN_1414f4510(void)

{
  if (DAT_1468a3b18 == 0) {
    FUN_141786a30(&DAT_1468a3b18,&PTR_FUN_146495880);
  }
  return DAT_1468a3b18;
}



// FUNCTION 1414f4540 FUN_1414f4540 body=47 status=ok
// SIG undefined FUN_1414f4540(void)

longlong FUN_1414f4540(void)

{
  if (DAT_1468a3b58 == 0) {
    FUN_141786440(&DAT_1468a3b58,&PTR_GetPrivateStaticClass_144c2fb50);
  }
  return DAT_1468a3b58;
}



// FUNCTION 1414f4570 FUN_1414f4570 body=47 status=ok
// SIG undefined FUN_1414f4570(void)

longlong FUN_1414f4570(void)

{
  if (DAT_1468a3b30 == 0) {
    FUN_141786a30(&DAT_1468a3b30,&PTR_FUN_146495a90);
  }
  return DAT_1468a3b30;
}



// FUNCTION 1414f45a0 FUN_1414f45a0 body=47 status=ok
// SIG undefined FUN_1414f45a0(void)

longlong FUN_1414f45a0(void)

{
  if (DAT_1468a3b38 == 0) {
    FUN_141786a30(&DAT_1468a3b38,&PTR_FUN_146495b50);
  }
  return DAT_1468a3b38;
}



// FUNCTION 1414f45d0 FUN_1414f45d0 body=47 status=ok
// SIG undefined FUN_1414f45d0(void)

longlong FUN_1414f45d0(void)

{
  if (DAT_1468a3b40 == 0) {
    FUN_141786a30(&DAT_1468a3b40,&PTR_FUN_146495b90);
  }
  return DAT_1468a3b40;
}



// FUNCTION 1414f4600 FUN_1414f4600 body=47 status=ok
// SIG undefined FUN_1414f4600(void)

longlong FUN_1414f4600(void)

{
  if (DAT_1468a3b48 == 0) {
    FUN_141786a30(&DAT_1468a3b48,&PTR_FUN_146495bd0);
  }
  return DAT_1468a3b48;
}



// FUNCTION 1414f4630 FUN_1414f4630 body=47 status=ok
// SIG undefined FUN_1414f4630(void)

longlong FUN_1414f4630(void)

{
  if (DAT_1468a3b50 == 0) {
    FUN_141786a30(&DAT_1468a3b50,&PTR_FUN_146495c50);
  }
  return DAT_1468a3b50;
}



// FUNCTION 1414f4660 FUN_1414f4660 body=47 status=ok
// SIG undefined FUN_1414f4660(void)

longlong FUN_1414f4660(void)

{
  if (DAT_1468a3b78 == 0) {
    FUN_141786440(&DAT_1468a3b78,&PTR_StaticClass_144c2fec0);
  }
  return DAT_1468a3b78;
}



// FUNCTION 1414f4690 FUN_1414f4690 body=47 status=ok
// SIG undefined FUN_1414f4690(void)

longlong FUN_1414f4690(void)

{
  if (DAT_1468a3b68 == 0) {
    FUN_141786a30(&DAT_1468a3b68,&PTR_FUN_146495f50);
  }
  return DAT_1468a3b68;
}



// FUNCTION 1414f46c0 FUN_1414f46c0 body=47 status=ok
// SIG undefined FUN_1414f46c0(void)

longlong FUN_1414f46c0(void)

{
  if (DAT_1468a3b70 == 0) {
    FUN_141786a30(&DAT_1468a3b70,&PTR_FUN_146495f90);
  }
  return DAT_1468a3b70;
}



// FUNCTION 1414f4780 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeEnveloper::StaticClass(void)

{
  if (DAT_1468a3b90 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ZoneMapInputData",&DAT_1468a3b90,FUN_140447710,0x160,
                  0x10000000,0,L"Engine",FUN_1414f4bd0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468a3b90;
}



// FUNCTION 1414f4830 FUN_1414f4830 body=162 status=ok
// SIG undefined FUN_1414f4830(void)

longlong FUN_1414f4830(void)

{
  if (DAT_1468a3bb8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ZoneMapListData",&DAT_1468a3bb8,FUN_1414f5870,0x40,0x10000000
                  ,0,L"Engine",FUN_141300060,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468a3bb8;
}



// FUNCTION 1414f48f0 FUN_1414f48f0 body=47 status=ok
// SIG undefined FUN_1414f48f0(void)

longlong FUN_1414f48f0(void)

{
  if (DAT_1468a3bb0 == 0) {
    FUN_141786440(&DAT_1468a3bb0,&PTR_FUN_144c31100);
  }
  return DAT_1468a3bb0;
}



// FUNCTION 1414f4920 FUN_1414f4920 body=47 status=ok
// SIG undefined FUN_1414f4920(void)

longlong FUN_1414f4920(void)

{
  if (DAT_1468a3ba8 == 0) {
    FUN_141786a30(&DAT_1468a3ba8,&PTR_FUN_146497200);
  }
  return DAT_1468a3ba8;
}



// FUNCTION 1414f4950 FUN_1414f4950 body=53 status=ok
// SIG undefined FUN_1414f4950(void)

void FUN_1414f4950(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144c33d10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414f49a0 FUN_1414f49a0 body=144 status=ok
// SIG undefined FUN_1414f49a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414f49a0(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1412aff80(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c31b50;
    puVar1[0xb6] = 0;
    puVar1[0xb7] = 0;
    uVar2 = uRam00000001468a35fc;
    puVar1[0xba] = 0;
    puVar1[0xbb] = 0;
    *(undefined4 *)(puVar1 + 0xb8) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x5c4) = 0;
    *(undefined4 *)(puVar1 + 0xb9) = 0;
    *(uint *)((longlong)puVar1 + 0x5cc) = uVar2;
    uVar2 = uRam00000001468a35f4 & uRam00000001468a3604;
    uVar3 = uRam00000001468a35f8 & uRam00000001468a3608;
    uVar4 = uRam00000001468a35fc & uRam00000001468a360c;
    *(uint *)(puVar1 + 0xbc) = _DAT_1468a35f0 & _DAT_1468a3600;
    *(uint *)((longlong)puVar1 + 0x5e4) = uVar2;
    *(uint *)(puVar1 + 0xbd) = uVar3;
    *(uint *)((longlong)puVar1 + 0x5ec) = uVar4;
    puVar1[0xbe] = 0xffffffffffffffff;
    puVar1[0xbf] = 0;
    puVar1[0xc0] = 0;
    puVar1[0xc1] = 0;
  }
  return;
}



// FUNCTION 1414f4a30 FUN_1414f4a30 body=71 status=ok
// SIG undefined FUN_1414f4a30(void)

void FUN_1414f4a30(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1412aff80(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c322b8;
    puVar1[0xb6] = 0;
    puVar1[0xb7] = 0;
    puVar1[0xb8] = 0;
    puVar1[0xb9] = 0;
  }
  return;
}



// FUNCTION 1414f4ac0 FUN_1414f4ac0 body=58 status=ok
// SIG undefined FUN_1414f4ac0(void)

void FUN_1414f4ac0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1412aff80(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c313e8;
    FUN_140f9f7d0(puVar1 + 0xb6);
    return;
  }
  return;
}



// FUNCTION 1414f4b40 FUN_1414f4b40 body=80 status=ok
// SIG undefined FUN_1414f4b40(void)

void FUN_1414f4b40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1412aff80(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c33188;
    FText::FText(puVar1 + 0xb6);
    *(undefined1 *)(puVar1 + 0xb9) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x5cc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0xba) = 0;
  }
  return;
}



// FUNCTION 1414f4b90 FUN_1414f4b90 body=50 status=ok
// SIG undefined FUN_1414f4b90(void)

void FUN_1414f4b90(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1412b0190(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c32a20;
    puVar1[0xbf] = 0;
  }
  return;
}



// FUNCTION 1414f4bd0 FUN_1414f4bd0 body=264 status=ok
// SIG undefined FUN_1414f4bd0(void)

void FUN_1414f4bd0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x41700000;
    *puVar1 = &PTR__scalar_deleting_destructor__144c33a90;
    *(undefined4 *)(puVar1 + 10) = 0x41700000;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 0x41200000;
    *(undefined4 *)(puVar1 + 0xb) = 0x41200000;
    *(undefined4 *)(puVar1 + 0xd) = 0x461c4000;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 0x41700000;
    *(undefined4 *)(puVar1 + 0xe) = 0x461c4000;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0x43160000;
    *(undefined4 *)(puVar1 + 0xf) = 0x43160000;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x43160000;
    *(undefined4 *)(puVar1 + 0x10) = 0x3dcccccd;
    *(undefined4 *)((longlong)puVar1 + 0x9c) = 0x44160000;
    *(undefined4 *)(puVar1 + 0x14) = 0x43160000;
    *(undefined4 *)((longlong)puVar1 + 0x104) = 0x41700000;
    *(undefined4 *)(puVar1 + 0x21) = 0x43160000;
    *(undefined4 *)(puVar1 + 0x23) = 0x41700000;
    *(undefined4 *)(puVar1 + 0x26) = 0x41700000;
    *(undefined4 *)((longlong)puVar1 + 0x134) = 0x43160000;
    *(undefined4 *)(puVar1 + 0x27) = 0x41700000;
    *(undefined4 *)((longlong)puVar1 + 0x13c) = 0xc2960000;
    *(undefined4 *)(puVar1 + 0x28) = 0x42b40000;
    *(undefined4 *)((longlong)puVar1 + 0x144) = 0x459c4000;
    *(undefined4 *)((longlong)puVar1 + 0x154) = 0x3dcccccd;
    *(undefined4 *)(puVar1 + 0x2b) = 0x40a00000;
    *(undefined2 *)((longlong)puVar1 + 0x15c) = 0x101;
  }
  return;
}



// FUNCTION 1414f4d40 FSoEventForClass body=106 status=ok
// SIG undefined FSoEventForClass(void)

undefined8 * FSoEventForClass::FSoEventForClass(undefined8 *param_1)

{
  *param_1 = 0;
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
  return param_1;
}



// FUNCTION 1414f4db0 FUN_1414f4db0 body=73 status=ok
// SIG undefined FUN_1414f4db0(void)

longlong FUN_1414f4db0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FMemory::Free();
  }
  FUN_1412b1ad0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x610);
  }
  return param_1;
}



// FUNCTION 1414f4e00 FUN_1414f4e00 body=152 status=ok
// SIG undefined FUN_1414f4e00(void)

longlong FUN_1414f4e00(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x5c8);
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
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FMemory::Free();
  }
  FUN_1412b1ad0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5d0);
  }
  return param_1;
}



// FUNCTION 1414f4ea0 FUN_1414f4ea0 body=109 status=ok
// SIG undefined FUN_1414f4ea0(void)

longlong FUN_1414f4ea0(longlong param_1,ulonglong param_2)

{
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x680);
  FUN_140bff340(param_1 + 0x618);
  FUN_140c64420(param_1 + 0x608);
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FMemory::Free();
  }
  FUN_1412b1ad0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6a0);
  }
  return param_1;
}



// FUNCTION 1414f4f10 FUN_1414f4f10 body=135 status=ok
// SIG undefined FUN_1414f4f10(void)

longlong FUN_1414f4f10(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x5b8);
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
  FUN_1412b1ad0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5e0);
  }
  return param_1;
}



// FUNCTION 1414f4fa0 FUN_1414f4fa0 body=52 status=ok
// SIG undefined FUN_1414f4fa0(void)

undefined8 FUN_1414f4fa0(undefined8 param_1,ulonglong param_2)

{
  FUN_1412b1ad0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x640);
  }
  return param_1;
}



// FUNCTION 1414f4fe0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TCompositeObjectDistanceFieldsCS<1,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 1414f5020 FUN_1414f5020 body=69 status=ok
// SIG undefined FUN_1414f5020(void)

bool FUN_1414f5020(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char local_res8 [8];
  
  lVar1 = *param_1;
  local_res8[0] = '\0';
  uVar2 = FUN_14178ac60(param_1,DAT_1468a39c0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res8);
  return local_res8[0] != '\0';
}



// FUNCTION 1414f5080 ConstructForTests body=37 status=ok
// SIG undefined ConstructForTests(void)

void UScriptStruct::TCppStructOps<FSpriteCategoryInfo>::ConstructForTests
               (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FText::FText(param_2 + 1);
  FText::FText(param_2 + 4);
  return;
}



// FUNCTION 1414f50c0 FUN_1414f50c0 body=129 status=ok
// SIG undefined FUN_1414f50c0(void)

undefined8 FUN_1414f50c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -4) = *(undefined8 *)(param_3 + -0x10 + (longlong)puVar1);
      puVar1[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      local_28 = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      FString::FString(local_20,param_3 + 0x10 + (longlong)puVar1);
      FSoftObjectPath::operator=(puVar1 + 2,&local_28);
      puVar1 = puVar1 + 0xc;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414f5150 Copy body=112 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSpriteCategoryInfo>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20 + param_2);
      FText::operator=(param_2 + -0x18,param_3 + -0x18 + param_2);
      FText::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414f51c0 Destruct body=142 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FSpriteCategoryInfo>::Destruct
               (undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_2 + 0x28);
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
  plVar4 = *(longlong **)(param_2 + 0x10);
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



// FUNCTION 1414f5250 FUN_1414f5250 body=69 status=ok
// SIG undefined FUN_1414f5250(void)

bool FUN_1414f5250(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char local_res8 [8];
  
  lVar1 = *param_1;
  local_res8[0] = '\0';
  uVar2 = FUN_14178ac60(param_1,DAT_1468a39c8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res8);
  return local_res8[0] != '\0';
}



// FUNCTION 1414f52a0 FUN_1414f52a0 body=620 status=ok
// SIG undefined FUN_1414f52a0(void)

void FUN_1414f52a0(longlong *param_1,void **param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  void *local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_98 = (void *)0x0;
  local_90 = 0;
  FText::FText(local_88);
  FText::FText(local_70);
  local_58 = 0;
  local_50 = 0;
  FText::FText(local_48);
  if (&local_98 != param_2) {
    iVar3 = *(int *)(param_2 + 1);
    pvVar4 = *param_2;
    local_90 = CONCAT44(local_90._4_4_,iVar3);
    if ((iVar3 == 0) && (local_90._4_4_ == 0)) {
      local_90 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar3);
      _guard_xfg_dispatch_icall_nop(local_98,pvVar4,(longlong)iVar3 * 2);
    }
  }
  FText::operator=(local_88,param_3);
  FText::operator=(local_70,param_4);
  TArray<FText,FDefaultAllocator>::operator=(&local_58,param_5);
  FText::operator=(local_48,param_6);
  lVar6 = *param_1;
  uVar5 = FUN_14178ac60(param_1,DAT_1468a39d0);
  (**(code **)(lVar6 + 0x208))(param_1,uVar5,&local_98);
  pvVar4 = local_98;
  if (param_2 != &local_98) {
    lVar6 = (longlong)(int)local_90;
    *(int *)(param_2 + 1) = (int)local_90;
    if (((int)local_90 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_90 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*param_2,pvVar4,lVar6 * 2);
    }
  }
  FText::operator=(param_3,local_88);
  FText::operator=(param_4,local_70);
  TArray<FText,FDefaultAllocator>::operator=(param_5,&local_58);
  FText::operator=(param_6,local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_58);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414f5510 FUN_1414f5510 body=6 status=ok
// SIG undefined FUN_1414f5510(void)

undefined8 FUN_1414f5510(void)

{
  return 0x5c76b2c7;
}



// FUNCTION 1414f5520 FUN_1414f5520 body=6 status=ok
// SIG undefined FUN_1414f5520(void)

undefined8 FUN_1414f5520(void)

{
  return 0x4f2927bc;
}



// FUNCTION 1414f5530 FUN_1414f5530 body=6 status=ok
// SIG undefined FUN_1414f5530(void)

undefined8 FUN_1414f5530(void)

{
  return 0xa35f420a;
}



// FUNCTION 1414f5540 FUN_1414f5540 body=6 status=ok
// SIG undefined FUN_1414f5540(void)

undefined8 FUN_1414f5540(void)

{
  return 0x3ef03240;
}



// FUNCTION 1414f5550 FUN_1414f5550 body=6 status=ok
// SIG undefined FUN_1414f5550(void)

undefined8 FUN_1414f5550(void)

{
  return 0x6fc4d643;
}



// FUNCTION 1414f5560 FUN_1414f5560 body=57 status=ok
// SIG undefined FUN_1414f5560(void)

void FUN_1414f5560(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a39e8);
                    /* WARNING: Could not recover jumptable at 0x0001414f5596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414f55a0 FUN_1414f55a0 body=57 status=ok
// SIG undefined FUN_1414f55a0(void)

void FUN_1414f55a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a39e0);
                    /* WARNING: Could not recover jumptable at 0x0001414f55d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414f5620 FUN_1414f5620 body=183 status=ok
// SIG undefined FUN_1414f5620(void)

bool FUN_1414f5620(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  char local_10;
  
  FText::FText(local_28);
  local_10 = '\0';
  FText::operator=(local_28,param_2);
  lVar4 = *param_1;
  uVar5 = FUN_14178ac60(param_1,DAT_1468a39d8);
  (**(code **)(lVar4 + 0x208))(param_1,uVar5,local_28);
  FText::operator=(param_2,local_28);
  bVar6 = local_10 != '\0';
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
  return bVar6;
}



// FUNCTION 1414f56f0 FUN_1414f56f0 body=34 status=ok
// SIG undefined FUN_1414f56f0(void)

void FUN_1414f56f0(void)

{
  undefined8 uVar1;
  
  uVar1 = UScrollBar::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetChallengeIconTexture_144c339d0,2);
  return;
}



// FUNCTION 1414f5720 FUN_1414f5720 body=34 status=ok
// SIG undefined FUN_1414f5720(void)

void FUN_1414f5720(void)

{
  undefined8 uVar1;
  
  uVar1 = UCheckBoxWidgetStyle::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CanPOIBeActivated_144c33910,0xb);
  return;
}



// FUNCTION 1414f5750 StaticRegisterNativesAGPingUsable body=34 status=ok
// SIG undefined StaticRegisterNativesAGPingUsable(void)

void AGPingUsable::StaticRegisterNativesAGPingUsable(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetHighlighted_144c338f0,2);
  return;
}



// FUNCTION 1414f5780 FUN_1414f5780 body=34 status=ok
// SIG undefined FUN_1414f5780(void)

void FUN_1414f5780(void)

{
  undefined8 uVar1;
  
  uVar1 = USoUIInputKeySelector::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetMissionStatus_144c339c0,1);
  return;
}



// FUNCTION 1414f57b0 FUN_1414f57b0 body=34 status=ok
// SIG undefined FUN_1414f57b0(void)

void FUN_1414f57b0(void)

{
  undefined8 uVar1;
  
  uVar1 = APlayerState::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetZoneMeshOnPlanet_144c34190,1);
  return;
}



// FUNCTION 1414f57e0 FUN_1414f57e0 body=34 status=ok
// SIG undefined FUN_1414f57e0(void)

void FUN_1414f57e0(void)

{
  undefined8 uVar1;
  
  uVar1 = AUIWSRiver::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnPlayerEnteringVehicle_144c339f0,3);
  return;
}



// FUNCTION 1414f5810 FUN_1414f5810 body=34 status=ok
// SIG undefined FUN_1414f5810(void)

void FUN_1414f5810(void)

{
  undefined8 uVar1;
  
  uVar1 = ARemnantMeleeWeapon::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_OnFastTravelStationDiscovered_144c33a70,2);
  return;
}



// FUNCTION 1414f5840 StaticRegisterNativesAGCaptureGameState body=34 status=ok
// SIG undefined StaticRegisterNativesAGCaptureGameState(void)

void AGCaptureGameState::StaticRegisterNativesAGCaptureGameState(void)

{
  undefined8 uVar1;
  
  uVar1 = ALandscape::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_OnOtherCharacterEnteredVehicle_144c33a20,5);
  return;
}



// FUNCTION 1414f5870 FUN_1414f5870 body=34 status=ok
// SIG undefined FUN_1414f5870(void)

void FUN_1414f5870(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414f4830();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetZoneMapDataForCurrentLevel_144c33e28,1);
  return;
}



// FUNCTION 1414f58a0 FUN_1414f58a0 body=34 status=ok
// SIG undefined FUN_1414f58a0(void)

void FUN_1414f58a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414f3400();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetupStaticMeshComponent_144c33f50,1);
  return;
}



// FUNCTION 1414f58d0 FUN_1414f58d0 body=34 status=ok
// SIG undefined FUN_1414f58d0(void)

void FUN_1414f58d0(void)

{
  undefined8 uVar1;
  
  uVar1 = UCheckBox::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DelayedRemovePOI_144c341a0,3);
  return;
}



// FUNCTION 1414f5900 FUN_1414f5900 body=34 status=ok
// SIG undefined FUN_1414f5900(void)

void FUN_1414f5900(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414f39c0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnAssociatedActorDestroyed_144c341d0,6);
  return;
}



// FUNCTION 1414f5930 FUN_1414f5930 body=82 status=ok
// SIG undefined FUN_1414f5930(void)

void FUN_1414f5930(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a3bf8 == 0) {
    uVar1 = FUN_1414f5510();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a3bf8 = GetStaticStruct(FUN_1414f5c20,uVar2,L"CachedPlanetZonePOI",0x30,uVar1);
  }
  return;
}



// FUNCTION 1414f5990 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a3c08 == 0) {
    uVar1 = FUN_1414f5520();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a3c08 = GetStaticStruct(FUN_1414f5c50,uVar2,L"PlanetZonePOI",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414f59f0 FUN_1414f59f0 body=82 status=ok
// SIG undefined FUN_1414f59f0(void)

void FUN_1414f59f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a3b98 == 0) {
    uVar1 = FUN_1414f5530();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a3b98 = GetStaticStruct(FUN_1414f5c80,uVar2,L"ZoneMapDisplayInfo",0x38,uVar1);
  }
  return;
}



// FUNCTION 1414f5a50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a3bc0 == 0) {
    uVar1 = FUN_1414f5540();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a3bc0 = GetStaticStruct(FUN_1414f5cb0,uVar2,L"ZoneMapGPUPointCloudData",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414f5ab0 FUN_1414f5ab0 body=82 status=ok
// SIG undefined FUN_1414f5ab0(void)

void FUN_1414f5ab0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a3bd0 == 0) {
    uVar1 = FUN_1414f5550();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a3bd0 = GetStaticStruct(FUN_1414f5ce0,uVar2,L"ZoneMapMeshListEntry",0x38,uVar1);
  }
  return;
}



// FUNCTION 1414f5b10 FUN_1414f5b10 body=57 status=ok
// SIG undefined FUN_1414f5b10(void)

void FUN_1414f5b10(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a39b8);
                    /* WARNING: Could not recover jumptable at 0x0001414f5b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414f5b50 FUN_1414f5b50 body=57 status=ok
// SIG undefined FUN_1414f5b50(void)

void FUN_1414f5b50(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a3a08);
                    /* WARNING: Could not recover jumptable at 0x0001414f5b86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414f5b90 FUN_1414f5b90 body=47 status=ok
// SIG undefined FUN_1414f5b90(void)

longlong FUN_1414f5b90(void)

{
  if (DAT_1468a3af8 == 0) {
    FUN_141786440(&DAT_1468a3af8,&PTR_StaticClass_144c2ddc0);
  }
  return DAT_1468a3af8;
}



// FUNCTION 1414f5bc0 FUN_1414f5bc0 body=47 status=ok
// SIG undefined FUN_1414f5bc0(void)

longlong FUN_1414f5bc0(void)

{
  if (DAT_1468a3b88 == 0) {
    FUN_141786440(&DAT_1468a3b88,&PTR_StaticClass_144c302e0);
  }
  return DAT_1468a3b88;
}



// FUNCTION 1414f5bf0 FUN_1414f5bf0 body=47 status=ok
// SIG undefined FUN_1414f5bf0(void)

longlong FUN_1414f5bf0(void)

{
  if (DAT_1468a3a10 == 0) {
    FUN_141786a30(&DAT_1468a3a10,&PTR_Z_Construct_UPackage__Script_MechWarrior_146494440);
  }
  return DAT_1468a3a10;
}



// FUNCTION 1414f5c20 FUN_1414f5c20 body=47 status=ok
// SIG undefined FUN_1414f5c20(void)

longlong FUN_1414f5c20(void)

{
  if (DAT_1468a3c00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a3c00,&PTR_Z_Construct_UPackage__Script_MechWarrior_146497850);
  }
  return DAT_1468a3c00;
}



// FUNCTION 1414f5c50 FUN_1414f5c50 body=47 status=ok
// SIG undefined FUN_1414f5c50(void)

longlong FUN_1414f5c50(void)

{
  if (DAT_1468a3c10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a3c10,&PTR_Z_Construct_UPackage__Script_MechWarrior_146497920);
  }
  return DAT_1468a3c10;
}



// FUNCTION 1414f5c80 FUN_1414f5c80 body=47 status=ok
// SIG undefined FUN_1414f5c80(void)

longlong FUN_1414f5c80(void)

{
  if (DAT_1468a3ba0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a3ba0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146497130);
  }
  return DAT_1468a3ba0;
}



// FUNCTION 1414f5cb0 FUN_1414f5cb0 body=47 status=ok
// SIG undefined FUN_1414f5cb0(void)

longlong FUN_1414f5cb0(void)

{
  if (DAT_1468a3bc8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a3bc8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146497370);
  }
  return DAT_1468a3bc8;
}



// FUNCTION 1414f5ce0 FUN_1414f5ce0 body=47 status=ok
// SIG undefined FUN_1414f5ce0(void)

longlong FUN_1414f5ce0(void)

{
  if (DAT_1468a3bd8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a3bd8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464974d0);
  }
  return DAT_1468a3bd8;
}



// FUNCTION 1414f5d10 FUN_1414f5d10 body=47 status=ok
// SIG undefined FUN_1414f5d10(void)

void FUN_1414f5d10(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x708))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f5d80 execIsMoveInputIgnored body=47 status=ok
// SIG undefined execIsMoveInputIgnored(void)

void AController::execIsMoveInputIgnored(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x700))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f5dd0 FUN_1414f5dd0 body=44 status=ok
// SIG undefined FUN_1414f5dd0(void)

void FUN_1414f5dd0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1412befe0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f5e00 FUN_1414f5e00 body=43 status=ok
// SIG undefined FUN_1414f5e00(void)

void FUN_1414f5e00(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1412bf180();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f5e30 FUN_1414f5e30 body=43 status=ok
// SIG undefined FUN_1414f5e30(void)

void FUN_1414f5e30(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1412c03b0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f5e60 FUN_1414f5e60 body=706 status=ok
// SIG undefined FUN_1414f5e60(void)

void FUN_1414f5e60(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88 [2];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  plVar6 = local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  FText::FText(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar8 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar8 = *(undefined1 **)(param_2 + 0x38);
  }
  FText::FText(local_60);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  local_98 = 0;
  local_90 = 0;
  puVar5 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar7 = &local_98;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_2 + 0x38);
  }
  FText::FText(local_78);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar4 = local_78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x710))(param_1,plVar6,puVar8,puVar5,puVar7,puVar4);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_70 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_98);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_58 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414f6130 FUN_1414f6130 body=144 status=ok
// SIG undefined FUN_1414f6130(void)

void FUN_1414f6130(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1412c3680(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f61c0 FUN_1414f61c0 body=144 status=ok
// SIG undefined FUN_1414f61c0(void)

void FUN_1414f61c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1412c3b60(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414f6250 FUN_1414f6250 body=128 status=ok
// SIG undefined FUN_1414f6250(void)

void FUN_1414f6250(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412c8550(param_1,local_res10);
  return;
}



// FUNCTION 1414f62d0 FUN_1414f62d0 body=128 status=ok
// SIG undefined FUN_1414f62d0(void)

void FUN_1414f62d0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412c85e0(param_1,local_res10);
  return;
}



// FUNCTION 1414f6390 FUN_1414f6390 body=128 status=ok
// SIG undefined FUN_1414f6390(void)

void FUN_1414f6390(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412c8750(param_1,local_res10);
  return;
}



// FUNCTION 1414f6410 FUN_1414f6410 body=128 status=ok
// SIG undefined FUN_1414f6410(void)

void FUN_1414f6410(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412c8760(param_1,local_res10);
  return;
}



// FUNCTION 1414f6490 FUN_1414f6490 body=130 status=ok
// SIG undefined FUN_1414f6490(void)

void FUN_1414f6490(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412c8810(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414f6520 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_1412cc170(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414f65e0 FUN_1414f65e0 body=128 status=ok
// SIG undefined FUN_1414f65e0(void)

void FUN_1414f65e0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412c9690(param_1,local_res10);
  return;
}



// FUNCTION 1414f6660 FUN_1414f6660 body=128 status=ok
// SIG undefined FUN_1414f6660(void)

void FUN_1414f6660(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412c96c0(param_1,local_res10);
  return;
}



// FUNCTION 1414f6700 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412c9b50(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414f67e0 FUN_1414f67e0 body=128 status=ok
// SIG undefined FUN_1414f67e0(void)

void FUN_1414f67e0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412c9f30(param_1,local_res10);
  return;
}



// FUNCTION 1414f6860 FUN_1414f6860 body=226 status=ok
// SIG undefined FUN_1414f6860(void)

void FUN_1414f6860(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar6 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = (**(code **)(*param_1 + 0x6f8))(param_1,puVar6);
  *param_3 = uVar5;
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



// FUNCTION 1414f6950 execStopAnimMontage body=132 status=ok
// SIG undefined execStopAnimMontage(void)

void ACharacter::execStopAnimMontage(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x718))(param_1,local_res8);
  return;
}



// FUNCTION 1414f69e0 execSetIgnoreLookInput body=134 status=ok
// SIG undefined execSetIgnoreLookInput(void)

void AController::execSetIgnoreLookInput(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x6e8))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 1414f6a70 FUN_1414f6a70 body=130 status=ok
// SIG undefined FUN_1414f6a70(void)

void FUN_1414f6a70(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412cf020(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414f6b20 FUN_1414f6b20 body=128 status=ok
// SIG undefined FUN_1414f6b20(void)

void FUN_1414f6b20(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412d12c0(param_1,local_res10);
  return;
}



// FUNCTION 1414f6ba0 FUN_1414f6ba0 body=128 status=ok
// SIG undefined FUN_1414f6ba0(void)

void FUN_1414f6ba0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412d25e0(param_1,local_res10);
  return;
}



// FUNCTION 1414f6c20 FUN_1414f6c20 body=128 status=ok
// SIG undefined FUN_1414f6c20(void)

void FUN_1414f6c20(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412d2620(param_1,local_res10);
  return;
}



// FUNCTION 1414f6ca0 execSlotEmote body=189 status=ok
// SIG undefined execSlotEmote(void)

void UEmotesComponent::execSlotEmote(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412d26f0(param_1,local_res10[0],local_res20);
  return;
}



// FUNCTION 1414f6d90 FUN_1414f6d90 body=47 status=ok
// SIG undefined FUN_1414f6d90(void)

longlong FUN_1414f6d90(void)

{
  if (DAT_1468a4210 == 0) {
    FUN_141786a30(&DAT_1468a4210,&PTR_FUN_146499080);
  }
  return DAT_1468a4210;
}



// FUNCTION 1414f6dc0 FUN_1414f6dc0 body=47 status=ok
// SIG undefined FUN_1414f6dc0(void)

longlong FUN_1414f6dc0(void)

{
  if (DAT_1468a45c8 == 0) {
    FUN_141786440(&DAT_1468a45c8,&PTR_FUN_144c37300);
  }
  return DAT_1468a45c8;
}



// FUNCTION 1414f6df0 FUN_1414f6df0 body=47 status=ok
// SIG undefined FUN_1414f6df0(void)

longlong FUN_1414f6df0(void)

{
  if (DAT_1468a4278 == 0) {
    FUN_141786a30(&DAT_1468a4278,&PTR_FUN_146499de0);
  }
  return DAT_1468a4278;
}



// FUNCTION 1414f6e20 FUN_1414f6e20 body=47 status=ok
// SIG undefined FUN_1414f6e20(void)

longlong FUN_1414f6e20(void)

{
  if (DAT_1468a4280 == 0) {
    FUN_141786a30(&DAT_1468a4280,&PTR_FUN_146499e20);
  }
  return DAT_1468a4280;
}



// FUNCTION 1414f6e50 FUN_1414f6e50 body=47 status=ok
// SIG undefined FUN_1414f6e50(void)

longlong FUN_1414f6e50(void)

{
  if (DAT_1468a4288 == 0) {
    FUN_141786a30(&DAT_1468a4288,&PTR_FUN_146499e60);
  }
  return DAT_1468a4288;
}



// FUNCTION 1414f6e80 FUN_1414f6e80 body=47 status=ok
// SIG undefined FUN_1414f6e80(void)

longlong FUN_1414f6e80(void)

{
  if (DAT_1468a4290 == 0) {
    FUN_141786a30(&DAT_1468a4290,&PTR_FUN_146499ea0);
  }
  return DAT_1468a4290;
}



// FUNCTION 1414f6eb0 FUN_1414f6eb0 body=47 status=ok
// SIG undefined FUN_1414f6eb0(void)

longlong FUN_1414f6eb0(void)

{
  if (DAT_1468a4298 == 0) {
    FUN_141786a30(&DAT_1468a4298,&PTR_FUN_146499fe0);
  }
  return DAT_1468a4298;
}



// FUNCTION 1414f6ee0 FUN_1414f6ee0 body=47 status=ok
// SIG undefined FUN_1414f6ee0(void)

longlong FUN_1414f6ee0(void)

{
  if (DAT_1468a42a0 == 0) {
    FUN_141786a30(&DAT_1468a42a0,&PTR_FUN_14649a070);
  }
  return DAT_1468a42a0;
}



// FUNCTION 1414f6f10 FUN_1414f6f10 body=47 status=ok
// SIG undefined FUN_1414f6f10(void)

longlong FUN_1414f6f10(void)

{
  if (DAT_1468a42a8 == 0) {
    FUN_141786a30(&DAT_1468a42a8,&PTR_FUN_14649a0b0);
  }
  return DAT_1468a42a8;
}



// FUNCTION 1414f6f40 FUN_1414f6f40 body=47 status=ok
// SIG undefined FUN_1414f6f40(void)

longlong FUN_1414f6f40(void)

{
  if (DAT_1468a42b0 == 0) {
    FUN_141786a30(&DAT_1468a42b0,&PTR_FUN_14649a0f0);
  }
  return DAT_1468a42b0;
}



// FUNCTION 1414f6f70 FUN_1414f6f70 body=47 status=ok
// SIG undefined FUN_1414f6f70(void)

longlong FUN_1414f6f70(void)

{
  if (DAT_1468a42b8 == 0) {
    FUN_141786a30(&DAT_1468a42b8,&PTR_FUN_14649a130);
  }
  return DAT_1468a42b8;
}



// FUNCTION 1414f6fa0 FUN_1414f6fa0 body=47 status=ok
// SIG undefined FUN_1414f6fa0(void)

longlong FUN_1414f6fa0(void)

{
  if (DAT_1468a42c0 == 0) {
    FUN_141786a30(&DAT_1468a42c0,&PTR_FUN_14649a170);
  }
  return DAT_1468a42c0;
}



// FUNCTION 1414f6fd0 FUN_1414f6fd0 body=47 status=ok
// SIG undefined FUN_1414f6fd0(void)

longlong FUN_1414f6fd0(void)

{
  if (DAT_1468a42c8 == 0) {
    FUN_141786a30(&DAT_1468a42c8,&PTR_FUN_14649a1b0);
  }
  return DAT_1468a42c8;
}



// FUNCTION 1414f7000 FUN_1414f7000 body=47 status=ok
// SIG undefined FUN_1414f7000(void)

longlong FUN_1414f7000(void)

{
  if (DAT_1468a42d0 == 0) {
    FUN_141786a30(&DAT_1468a42d0,&PTR_FUN_14649a1f0);
  }
  return DAT_1468a42d0;
}



// FUNCTION 1414f7030 FUN_1414f7030 body=47 status=ok
// SIG undefined FUN_1414f7030(void)

longlong FUN_1414f7030(void)

{
  if (DAT_1468a42d8 == 0) {
    FUN_141786a30(&DAT_1468a42d8,&PTR_FUN_14649a230);
  }
  return DAT_1468a42d8;
}



// FUNCTION 1414f7060 FUN_1414f7060 body=47 status=ok
// SIG undefined FUN_1414f7060(void)

longlong FUN_1414f7060(void)

{
  if (DAT_1468a42e0 == 0) {
    FUN_141786a30(&DAT_1468a42e0,&PTR_FUN_14649a270);
  }
  return DAT_1468a42e0;
}



// FUNCTION 1414f7090 FUN_1414f7090 body=47 status=ok
// SIG undefined FUN_1414f7090(void)

longlong FUN_1414f7090(void)

{
  if (DAT_1468a42e8 == 0) {
    FUN_141786a30(&DAT_1468a42e8,&PTR_FUN_14649a2b0);
  }
  return DAT_1468a42e8;
}



// FUNCTION 1414f70c0 FUN_1414f70c0 body=47 status=ok
// SIG undefined FUN_1414f70c0(void)

longlong FUN_1414f70c0(void)

{
  if (DAT_1468a42f0 == 0) {
    FUN_141786a30(&DAT_1468a42f0,&PTR_FUN_14649a2f0);
  }
  return DAT_1468a42f0;
}



// FUNCTION 1414f70f0 FUN_1414f70f0 body=47 status=ok
// SIG undefined FUN_1414f70f0(void)

longlong FUN_1414f70f0(void)

{
  if (DAT_1468a42f8 == 0) {
    FUN_141786a30(&DAT_1468a42f8,&PTR_FUN_14649a330);
  }
  return DAT_1468a42f8;
}



// FUNCTION 1414f7120 FUN_1414f7120 body=47 status=ok
// SIG undefined FUN_1414f7120(void)

longlong FUN_1414f7120(void)

{
  if (DAT_1468a4300 == 0) {
    FUN_141786a30(&DAT_1468a4300,&PTR_FUN_14649a3f0);
  }
  return DAT_1468a4300;
}



// FUNCTION 1414f7150 FUN_1414f7150 body=47 status=ok
// SIG undefined FUN_1414f7150(void)

longlong FUN_1414f7150(void)

{
  if (DAT_1468a4308 == 0) {
    FUN_141786a30(&DAT_1468a4308,&PTR_FUN_14649a470);
  }
  return DAT_1468a4308;
}



// FUNCTION 1414f7180 FUN_1414f7180 body=47 status=ok
// SIG undefined FUN_1414f7180(void)

longlong FUN_1414f7180(void)

{
  if (DAT_1468a4310 == 0) {
    FUN_141786a30(&DAT_1468a4310,&PTR_FUN_14649a530);
  }
  return DAT_1468a4310;
}



// FUNCTION 1414f71b0 FUN_1414f71b0 body=47 status=ok
// SIG undefined FUN_1414f71b0(void)

longlong FUN_1414f71b0(void)

{
  if (DAT_1468a4318 == 0) {
    FUN_141786a30(&DAT_1468a4318,&PTR_FUN_14649a5b0);
  }
  return DAT_1468a4318;
}



// FUNCTION 1414f71e0 FUN_1414f71e0 body=47 status=ok
// SIG undefined FUN_1414f71e0(void)

longlong FUN_1414f71e0(void)

{
  if (DAT_1468a4320 == 0) {
    FUN_141786a30(&DAT_1468a4320,&PTR_FUN_14649a630);
  }
  return DAT_1468a4320;
}



// FUNCTION 1414f7210 FUN_1414f7210 body=47 status=ok
// SIG undefined FUN_1414f7210(void)

longlong FUN_1414f7210(void)

{
  if (DAT_1468a4328 == 0) {
    FUN_141786a30(&DAT_1468a4328,&PTR_FUN_14649a720);
  }
  return DAT_1468a4328;
}



// FUNCTION 1414f7240 FUN_1414f7240 body=47 status=ok
// SIG undefined FUN_1414f7240(void)

longlong FUN_1414f7240(void)

{
  if (DAT_1468a4330 == 0) {
    FUN_141786a30(&DAT_1468a4330,&PTR_FUN_14649a880);
  }
  return DAT_1468a4330;
}



// FUNCTION 1414f7270 FUN_1414f7270 body=47 status=ok
// SIG undefined FUN_1414f7270(void)

longlong FUN_1414f7270(void)

{
  if (DAT_1468a4338 == 0) {
    FUN_141786a30(&DAT_1468a4338,&PTR_FUN_14649aa30);
  }
  return DAT_1468a4338;
}



// FUNCTION 1414f72a0 FUN_1414f72a0 body=47 status=ok
// SIG undefined FUN_1414f72a0(void)

longlong FUN_1414f72a0(void)

{
  if (DAT_1468a4340 == 0) {
    FUN_141786a30(&DAT_1468a4340,&PTR_FUN_14649aab0);
  }
  return DAT_1468a4340;
}



// FUNCTION 1414f72d0 FUN_1414f72d0 body=47 status=ok
// SIG undefined FUN_1414f72d0(void)

longlong FUN_1414f72d0(void)

{
  if (DAT_1468a4348 == 0) {
    FUN_141786a30(&DAT_1468a4348,&PTR_FUN_14649abb0);
  }
  return DAT_1468a4348;
}



// FUNCTION 1414f7300 FUN_1414f7300 body=47 status=ok
// SIG undefined FUN_1414f7300(void)

longlong FUN_1414f7300(void)

{
  if (DAT_1468a4350 == 0) {
    FUN_141786a30(&DAT_1468a4350,&PTR_FUN_14649ac30);
  }
  return DAT_1468a4350;
}



// FUNCTION 1414f7330 FUN_1414f7330 body=47 status=ok
// SIG undefined FUN_1414f7330(void)

longlong FUN_1414f7330(void)

{
  if (DAT_1468a4358 == 0) {
    FUN_141786a30(&DAT_1468a4358,&PTR_FUN_14649ac70);
  }
  return DAT_1468a4358;
}



// FUNCTION 1414f7360 FUN_1414f7360 body=47 status=ok
// SIG undefined FUN_1414f7360(void)

longlong FUN_1414f7360(void)

{
  if (DAT_1468a4360 == 0) {
    FUN_141786a30(&DAT_1468a4360,&PTR_FUN_14649acb0);
  }
  return DAT_1468a4360;
}



// FUNCTION 1414f7390 FUN_1414f7390 body=47 status=ok
// SIG undefined FUN_1414f7390(void)

longlong FUN_1414f7390(void)

{
  if (DAT_1468a4368 == 0) {
    FUN_141786a30(&DAT_1468a4368,&PTR_FUN_14649acf0);
  }
  return DAT_1468a4368;
}



// FUNCTION 1414f73c0 FUN_1414f73c0 body=47 status=ok
// SIG undefined FUN_1414f73c0(void)

longlong FUN_1414f73c0(void)

{
  if (DAT_1468a4370 == 0) {
    FUN_141786a30(&DAT_1468a4370,&PTR_FUN_14649ad30);
  }
  return DAT_1468a4370;
}



// FUNCTION 1414f73f0 FUN_1414f73f0 body=47 status=ok
// SIG undefined FUN_1414f73f0(void)

longlong FUN_1414f73f0(void)

{
  if (DAT_1468a4378 == 0) {
    FUN_141786a30(&DAT_1468a4378,&PTR_FUN_14649ad70);
  }
  return DAT_1468a4378;
}



// FUNCTION 1414f7420 FUN_1414f7420 body=47 status=ok
// SIG undefined FUN_1414f7420(void)

longlong FUN_1414f7420(void)

{
  if (DAT_1468a4380 == 0) {
    FUN_141786a30(&DAT_1468a4380,&PTR_FUN_14649ae00);
  }
  return DAT_1468a4380;
}



// FUNCTION 1414f7450 FUN_1414f7450 body=47 status=ok
// SIG undefined FUN_1414f7450(void)

longlong FUN_1414f7450(void)

{
  if (DAT_1468a4388 == 0) {
    FUN_141786a30(&DAT_1468a4388,&PTR_FUN_14649ae90);
  }
  return DAT_1468a4388;
}



// FUNCTION 1414f7480 FUN_1414f7480 body=47 status=ok
// SIG undefined FUN_1414f7480(void)

longlong FUN_1414f7480(void)

{
  if (DAT_1468a4390 == 0) {
    FUN_141786a30(&DAT_1468a4390,&PTR_FUN_14649af20);
  }
  return DAT_1468a4390;
}



// FUNCTION 1414f74b0 FUN_1414f74b0 body=47 status=ok
// SIG undefined FUN_1414f74b0(void)

longlong FUN_1414f74b0(void)

{
  if (DAT_1468a4398 == 0) {
    FUN_141786a30(&DAT_1468a4398,&PTR_FUN_14649af60);
  }
  return DAT_1468a4398;
}



// FUNCTION 1414f74e0 FUN_1414f74e0 body=47 status=ok
// SIG undefined FUN_1414f74e0(void)

longlong FUN_1414f74e0(void)

{
  if (DAT_1468a43a0 == 0) {
    FUN_141786a30(&DAT_1468a43a0,&PTR_FUN_14649afe0);
  }
  return DAT_1468a43a0;
}



// FUNCTION 1414f7510 FUN_1414f7510 body=47 status=ok
// SIG undefined FUN_1414f7510(void)

longlong FUN_1414f7510(void)

{
  if (DAT_1468a43a8 == 0) {
    FUN_141786a30(&DAT_1468a43a8,&PTR_FUN_14649b060);
  }
  return DAT_1468a43a8;
}



// FUNCTION 1414f7540 FUN_1414f7540 body=47 status=ok
// SIG undefined FUN_1414f7540(void)

longlong FUN_1414f7540(void)

{
  if (DAT_1468a43b0 == 0) {
    FUN_141786a30(&DAT_1468a43b0,&PTR_FUN_14649b0e0);
  }
  return DAT_1468a43b0;
}



// FUNCTION 1414f7570 FUN_1414f7570 body=47 status=ok
// SIG undefined FUN_1414f7570(void)

longlong FUN_1414f7570(void)

{
  if (DAT_1468a43b8 == 0) {
    FUN_141786a30(&DAT_1468a43b8,&PTR_FUN_14649b1e0);
  }
  return DAT_1468a43b8;
}



// FUNCTION 1414f75a0 FUN_1414f75a0 body=47 status=ok
// SIG undefined FUN_1414f75a0(void)

longlong FUN_1414f75a0(void)

{
  if (DAT_1468a43c0 == 0) {
    FUN_141786a30(&DAT_1468a43c0,&PTR_FUN_14649b3d0);
  }
  return DAT_1468a43c0;
}



// FUNCTION 1414f75d0 FUN_1414f75d0 body=47 status=ok
// SIG undefined FUN_1414f75d0(void)

longlong FUN_1414f75d0(void)

{
  if (DAT_1468a43c8 == 0) {
    FUN_141786a30(&DAT_1468a43c8,&PTR_FUN_14649b490);
  }
  return DAT_1468a43c8;
}



// FUNCTION 1414f7600 FUN_1414f7600 body=47 status=ok
// SIG undefined FUN_1414f7600(void)

longlong FUN_1414f7600(void)

{
  if (DAT_1468a43d0 == 0) {
    FUN_141786a30(&DAT_1468a43d0,&PTR_FUN_14649b5c0);
  }
  return DAT_1468a43d0;
}



// FUNCTION 1414f7630 FUN_1414f7630 body=47 status=ok
// SIG undefined FUN_1414f7630(void)

longlong FUN_1414f7630(void)

{
  if (DAT_1468a43d8 == 0) {
    FUN_141786a30(&DAT_1468a43d8,&PTR_FUN_14649b640);
  }
  return DAT_1468a43d8;
}



// FUNCTION 1414f7660 FUN_1414f7660 body=47 status=ok
// SIG undefined FUN_1414f7660(void)

longlong FUN_1414f7660(void)

{
  if (DAT_1468a43e0 == 0) {
    FUN_141786a30(&DAT_1468a43e0,&PTR_FUN_14649b680);
  }
  return DAT_1468a43e0;
}



// FUNCTION 1414f7690 FUN_1414f7690 body=47 status=ok
// SIG undefined FUN_1414f7690(void)

longlong FUN_1414f7690(void)

{
  if (DAT_1468a43e8 == 0) {
    FUN_141786a30(&DAT_1468a43e8,&PTR_FUN_14649b700);
  }
  return DAT_1468a43e8;
}



// FUNCTION 1414f76c0 FUN_1414f76c0 body=47 status=ok
// SIG undefined FUN_1414f76c0(void)

longlong FUN_1414f76c0(void)

{
  if (DAT_1468a43f0 == 0) {
    FUN_141786a30(&DAT_1468a43f0,&PTR_FUN_14649b800);
  }
  return DAT_1468a43f0;
}



// FUNCTION 1414f76f0 FUN_1414f76f0 body=47 status=ok
// SIG undefined FUN_1414f76f0(void)

longlong FUN_1414f76f0(void)

{
  if (DAT_1468a43f8 == 0) {
    FUN_141786a30(&DAT_1468a43f8,&PTR_FUN_14649b8c0);
  }
  return DAT_1468a43f8;
}



// FUNCTION 1414f7720 FUN_1414f7720 body=47 status=ok
// SIG undefined FUN_1414f7720(void)

longlong FUN_1414f7720(void)

{
  if (DAT_1468a4400 == 0) {
    FUN_141786a30(&DAT_1468a4400,&PTR_FUN_14649b950);
  }
  return DAT_1468a4400;
}



// FUNCTION 1414f7750 FUN_1414f7750 body=47 status=ok
// SIG undefined FUN_1414f7750(void)

longlong FUN_1414f7750(void)

{
  if (DAT_1468a4408 == 0) {
    FUN_141786a30(&DAT_1468a4408,&PTR_FUN_14649ba10);
  }
  return DAT_1468a4408;
}



// FUNCTION 1414f7780 FUN_1414f7780 body=47 status=ok
// SIG undefined FUN_1414f7780(void)

longlong FUN_1414f7780(void)

{
  if (DAT_1468a4410 == 0) {
    FUN_141786a30(&DAT_1468a4410,&PTR_FUN_14649ba50);
  }
  return DAT_1468a4410;
}



// FUNCTION 1414f77b0 FUN_1414f77b0 body=47 status=ok
// SIG undefined FUN_1414f77b0(void)

longlong FUN_1414f77b0(void)

{
  if (DAT_1468a4418 == 0) {
    FUN_141786a30(&DAT_1468a4418,&PTR_FUN_14649ba90);
  }
  return DAT_1468a4418;
}



// FUNCTION 1414f77e0 FUN_1414f77e0 body=47 status=ok
// SIG undefined FUN_1414f77e0(void)

longlong FUN_1414f77e0(void)

{
  if (DAT_1468a4420 == 0) {
    FUN_141786a30(&DAT_1468a4420,&PTR_FUN_14649bad0);
  }
  return DAT_1468a4420;
}



// FUNCTION 1414f7810 FUN_1414f7810 body=47 status=ok
// SIG undefined FUN_1414f7810(void)

longlong FUN_1414f7810(void)

{
  if (DAT_1468a4428 == 0) {
    FUN_141786a30(&DAT_1468a4428,&PTR_FUN_14649bb10);
  }
  return DAT_1468a4428;
}



// FUNCTION 1414f7840 FUN_1414f7840 body=47 status=ok
// SIG undefined FUN_1414f7840(void)

longlong FUN_1414f7840(void)

{
  if (DAT_1468a4430 == 0) {
    FUN_141786a30(&DAT_1468a4430,&PTR_FUN_14649bbd0);
  }
  return DAT_1468a4430;
}



// FUNCTION 1414f7870 FUN_1414f7870 body=47 status=ok
// SIG undefined FUN_1414f7870(void)

longlong FUN_1414f7870(void)

{
  if (DAT_1468a4438 == 0) {
    FUN_141786a30(&DAT_1468a4438,&PTR_FUN_14649bc10);
  }
  return DAT_1468a4438;
}



// FUNCTION 1414f78a0 FUN_1414f78a0 body=47 status=ok
// SIG undefined FUN_1414f78a0(void)

longlong FUN_1414f78a0(void)

{
  if (DAT_1468a4440 == 0) {
    FUN_141786a30(&DAT_1468a4440,&PTR_FUN_14649bc50);
  }
  return DAT_1468a4440;
}



// FUNCTION 1414f78d0 FUN_1414f78d0 body=47 status=ok
// SIG undefined FUN_1414f78d0(void)

longlong FUN_1414f78d0(void)

{
  if (DAT_1468a4448 == 0) {
    FUN_141786a30(&DAT_1468a4448,&PTR_FUN_14649bc90);
  }
  return DAT_1468a4448;
}



// FUNCTION 1414f7900 FUN_1414f7900 body=47 status=ok
// SIG undefined FUN_1414f7900(void)

longlong FUN_1414f7900(void)

{
  if (DAT_1468a4450 == 0) {
    FUN_141786a30(&DAT_1468a4450,&PTR_FUN_14649bcd0);
  }
  return DAT_1468a4450;
}



// FUNCTION 1414f7930 FUN_1414f7930 body=47 status=ok
// SIG undefined FUN_1414f7930(void)

longlong FUN_1414f7930(void)

{
  if (DAT_1468a4458 == 0) {
    FUN_141786a30(&DAT_1468a4458,&PTR_FUN_14649bd10);
  }
  return DAT_1468a4458;
}



// FUNCTION 1414f7960 FUN_1414f7960 body=47 status=ok
// SIG undefined FUN_1414f7960(void)

longlong FUN_1414f7960(void)

{
  if (DAT_1468a4460 == 0) {
    FUN_141786a30(&DAT_1468a4460,&PTR_FUN_14649bd50);
  }
  return DAT_1468a4460;
}



// FUNCTION 1414f7990 FUN_1414f7990 body=47 status=ok
// SIG undefined FUN_1414f7990(void)

longlong FUN_1414f7990(void)

{
  if (DAT_1468a4468 == 0) {
    FUN_141786a30(&DAT_1468a4468,&PTR_FUN_14649be10);
  }
  return DAT_1468a4468;
}



// FUNCTION 1414f79c0 FUN_1414f79c0 body=47 status=ok
// SIG undefined FUN_1414f79c0(void)

longlong FUN_1414f79c0(void)

{
  if (DAT_1468a4470 == 0) {
    FUN_141786a30(&DAT_1468a4470,&PTR_FUN_14649bea0);
  }
  return DAT_1468a4470;
}



// FUNCTION 1414f79f0 FUN_1414f79f0 body=47 status=ok
// SIG undefined FUN_1414f79f0(void)

longlong FUN_1414f79f0(void)

{
  if (DAT_1468a4478 == 0) {
    FUN_141786a30(&DAT_1468a4478,&PTR_FUN_14649bf60);
  }
  return DAT_1468a4478;
}



// FUNCTION 1414f7a20 FUN_1414f7a20 body=47 status=ok
// SIG undefined FUN_1414f7a20(void)

longlong FUN_1414f7a20(void)

{
  if (DAT_1468a4480 == 0) {
    FUN_141786a30(&DAT_1468a4480,&PTR_FUN_14649c030);
  }
  return DAT_1468a4480;
}



// FUNCTION 1414f7a50 FUN_1414f7a50 body=47 status=ok
// SIG undefined FUN_1414f7a50(void)

longlong FUN_1414f7a50(void)

{
  if (DAT_1468a4488 == 0) {
    FUN_141786a30(&DAT_1468a4488,&PTR_FUN_14649c0b0);
  }
  return DAT_1468a4488;
}



// FUNCTION 1414f7a80 FUN_1414f7a80 body=47 status=ok
// SIG undefined FUN_1414f7a80(void)

longlong FUN_1414f7a80(void)

{
  if (DAT_1468a4490 == 0) {
    FUN_141786a30(&DAT_1468a4490,&PTR_FUN_14649c1c0);
  }
  return DAT_1468a4490;
}



// FUNCTION 1414f7ab0 FUN_1414f7ab0 body=47 status=ok
// SIG undefined FUN_1414f7ab0(void)

longlong FUN_1414f7ab0(void)

{
  if (DAT_1468a4498 == 0) {
    FUN_141786a30(&DAT_1468a4498,&PTR_FUN_14649c2d0);
  }
  return DAT_1468a4498;
}



// FUNCTION 1414f7ae0 FUN_1414f7ae0 body=47 status=ok
// SIG undefined FUN_1414f7ae0(void)

longlong FUN_1414f7ae0(void)

{
  if (DAT_1468a44a0 == 0) {
    FUN_141786a30(&DAT_1468a44a0,&PTR_FUN_14649c3e0);
  }
  return DAT_1468a44a0;
}



// FUNCTION 1414f7b10 FUN_1414f7b10 body=47 status=ok
// SIG undefined FUN_1414f7b10(void)

longlong FUN_1414f7b10(void)

{
  if (DAT_1468a44a8 == 0) {
    FUN_141786a30(&DAT_1468a44a8,&PTR_FUN_14649c4f0);
  }
  return DAT_1468a44a8;
}



// FUNCTION 1414f7b40 FUN_1414f7b40 body=47 status=ok
// SIG undefined FUN_1414f7b40(void)

longlong FUN_1414f7b40(void)

{
  if (DAT_1468a44b0 == 0) {
    FUN_141786a30(&DAT_1468a44b0,&PTR_FUN_14649c600);
  }
  return DAT_1468a44b0;
}



// FUNCTION 1414f7b70 FUN_1414f7b70 body=47 status=ok
// SIG undefined FUN_1414f7b70(void)

longlong FUN_1414f7b70(void)

{
  if (DAT_1468a44b8 == 0) {
    FUN_141786a30(&DAT_1468a44b8,&PTR_FUN_14649c710);
  }
  return DAT_1468a44b8;
}


