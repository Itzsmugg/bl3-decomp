// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1408b0a60 FUN_1408b0a60 body=274 status=ok
// SIG undefined FUN_1408b0a60(void)

void FUN_1408b0a60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  plVar1 = local_28 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14089f9e0(param_1,plVar1,plVar2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408b0b80 execSetEdgesHardnessAutomatically body=244 status=ok
// SIG undefined execSetEdgesHardnessAutomatically(void)

void UEditableMesh::execSetEdgesHardnessAutomatically(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 local_res10 [2];
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
  local_res10[0] = 0;
  plVar1 = local_18;
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
  FUN_14089fdd0(param_1,plVar1,local_res10[0]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408b0c80 FUN_1408b0c80 body=163 status=ok
// SIG undefined FUN_1408b0c80(void)

void FUN_1408b0c80(undefined8 param_1,longlong param_2)

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
  FUN_1408a0090(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408b0d30 execSetPolygonsVertexAttributes body=391 status=ok
// SIG undefined execSetPolygonsVertexAttributes(void)

void UEditableMesh::execSetPolygonsVertexAttributes(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong local_28;
  undefined8 local_20;
  
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
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetPolygonsVertexAttributes(param_1,plVar1);
  if ((int)local_20 != 0) {
    puVar5 = (undefined8 *)(local_28 + 0x18);
    iVar6 = (int)local_20;
    do {
      iVar2 = *(int *)(puVar5 + 1);
      puVar3 = (undefined8 *)*puVar5;
      if (iVar2 != 0) {
        do {
          iVar4 = *(int *)(puVar3 + 1);
          plVar1 = (longlong *)*puVar3;
          if (iVar4 != 0) {
            do {
              if (*plVar1 != 0) {
                FMemory::Free();
              }
              plVar1 = plVar1 + 2;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            plVar1 = (longlong *)*puVar3;
          }
          if (plVar1 != (longlong *)0x0) {
            FMemory::Free(plVar1);
          }
          puVar3 = puVar3 + 2;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        puVar3 = (undefined8 *)*puVar5;
      }
      if (puVar3 != (undefined8 *)0x0) {
        FMemory::Free(puVar3);
      }
      iVar2 = *(int *)(puVar5 + -1);
      plVar1 = (longlong *)puVar5[-2];
      if (iVar2 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        plVar1 = (longlong *)puVar5[-2];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      puVar5 = puVar5 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408b0ec0 FUN_1408b0ec0 body=126 status=ok
// SIG undefined FUN_1408b0ec0(void)

void FUN_1408b0ec0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
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
  FUN_1408a0f00(param_1,local_res10[0]);
  return;
}



// FUNCTION 1408b0f40 execSetTextureCoordinateCount body=126 status=ok
// SIG undefined execSetTextureCoordinateCount(void)

void UEditableMesh::execSetTextureCoordinateCount(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
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
  SetTextureCoordinateCount(param_1,local_res10[0]);
  return;
}



// FUNCTION 1408b0fc0 execSetVerticesAttributes body=202 status=ok
// SIG undefined execSetVerticesAttributes(void)

void UEditableMesh::execSetVerticesAttributes(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong local_18;
  undefined8 local_10;
  
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
  plVar1 = &local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408a1220(param_1,plVar1);
  if ((int)local_10 != 0) {
    plVar1 = (longlong *)(local_18 + 8);
    iVar2 = (int)local_10;
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408b1090 execSetVerticesAttributes body=202 status=ok
// SIG undefined execSetVerticesAttributes(void)

void UEditableMesh::execSetVerticesAttributes(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong local_18;
  undefined8 local_10;
  
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
  plVar1 = &local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetVerticesAttributes(param_1,plVar1);
  if ((int)local_10 != 0) {
    plVar1 = (longlong *)(local_18 + 8);
    iVar2 = (int)local_10;
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408b1160 FUN_1408b1160 body=274 status=ok
// SIG undefined FUN_1408b1160(void)

void FUN_1408b1160(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  plVar1 = local_28 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408a16a0(param_1,plVar1,plVar2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408b1280 FUN_1408b1280 body=332 status=ok
// SIG undefined FUN_1408b1280(void)

void FUN_1408b1280(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 local_res10 [2];
  longlong local_28 [4];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  plVar1 = local_28 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408a1900(param_1,local_res10[0],plVar1,plVar2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408b13d0 execSplitPolygons body=314 status=ok
// SIG undefined execSplitPolygons(void)

void UEditableMesh::execSplitPolygons(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
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
  local_18[0] = 0;
  local_18[1] = 0;
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar3 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408a2a40(param_1,plVar1,plVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if ((int)local_20 != 0) {
    plVar1 = (longlong *)(local_28 + 8);
    iVar2 = (int)local_20;
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408b1510 FUN_1408b1510 body=183 status=ok
// SIG undefined FUN_1408b1510(void)

void FUN_1408b1510(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
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
  FUN_1408a3c80(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1408b15d0 execTessellatePolygons body=338 status=ok
// SIG undefined execTessellatePolygons(void)

void UEditableMesh::execTessellatePolygons(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 local_res10 [8];
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_res10[0] = 0;
  plVar1 = local_28 + 2;
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
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408a3e90(param_1,plVar1,local_res10[0],plVar2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408b1730 FUN_1408b1730 body=274 status=ok
// SIG undefined FUN_1408b1730(void)

void FUN_1408b1730(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  plVar1 = local_28 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408a5c40(param_1,plVar1,plVar2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408b1850 FUN_1408b1850 body=271 status=ok
// SIG undefined FUN_1408b1850(void)

void FUN_1408b1850(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined4 local_28 [4];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
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
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_res10;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar2 = local_res20;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408a6030(param_1,local_28[0],puVar1,puVar2);
  return;
}



// FUNCTION 1408b1960 FUN_1408b1960 body=271 status=ok
// SIG undefined FUN_1408b1960(void)

void FUN_1408b1960(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined4 local_28 [4];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
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
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_res10;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar2 = local_res20;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408a6720(param_1,local_28[0],puVar1,puVar2);
  return;
}



// FUNCTION 1408b1a70 FUN_1408b1a70 body=249 status=ok
// SIG undefined FUN_1408b1a70(void)

void FUN_1408b1a70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 local_res10 [8];
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  plVar2 = local_18;
  if (plVar1 != (longlong *)0x0) {
    plVar2 = plVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar3 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408a80d0(param_1,plVar2,puVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408b1b70 FUN_1408b1b70 body=53 status=ok
// SIG undefined FUN_1408b1b70(void)

void FUN_1408b1b70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144120d18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b1bb0 FUN_1408b1bb0 body=53 status=ok
// SIG undefined FUN_1408b1bb0(void)

void FUN_1408b1bb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144120e30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b1bf0 FUN_1408b1bf0 body=53 status=ok
// SIG undefined FUN_1408b1bf0(void)

void FUN_1408b1bf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144120f48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b1c30 FUN_1408b1c30 body=53 status=ok
// SIG undefined FUN_1408b1c30(void)

void FUN_1408b1c30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144121060;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b1c70 FUN_1408b1c70 body=53 status=ok
// SIG undefined FUN_1408b1c70(void)

void FUN_1408b1c70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144121178;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b1cb0 FUN_1408b1cb0 body=53 status=ok
// SIG undefined FUN_1408b1cb0(void)

void FUN_1408b1cb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_144121290;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1408b1cf0 FUN_1408b1cf0 body=53 status=ok
// SIG undefined FUN_1408b1cf0(void)

void FUN_1408b1cf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_1441213a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1408b1d30 FUN_1408b1d30 body=53 status=ok
// SIG undefined FUN_1408b1d30(void)

void FUN_1408b1d30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1441214c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b1d70 FUN_1408b1d70 body=53 status=ok
// SIG undefined FUN_1408b1d70(void)

void FUN_1408b1d70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1441215d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b1db0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FDebugGraphicSavedata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &PTR_FUN_1441216f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1408b1df0 FUN_1408b1df0 body=53 status=ok
// SIG undefined FUN_1408b1df0(void)

void FUN_1408b1df0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144007fb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1408b1e30 Z_Construct_UPackage__Script_EditableMesh body=47 status=ok
// SIG undefined Z_Construct_UPackage__Script_EditableMesh(void)

longlong Z_Construct_UPackage__Script_EditableMesh(void)

{
  if (DAT_146860d18 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
  }
  return DAT_146860d18;
}



// FUNCTION 1408b1e60 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UEditableStaticMeshAdapter::GetPrivateStaticClass(void)

{
  if (DAT_146860fa8 == 0) {
    FUN_14171ccd0(L"/Script/EditableMesh",L"EditableStaticMeshAdapter",&DAT_146860fa8,FUN_140447710,
                  0xe0,0x10000000,0,L"Engine",&LAB_1408b2600,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1408b1f10,&LAB_140447700,0);
  }
  return DAT_146860fa8;
}



// FUNCTION 1408b1f10 FUN_1408b1f10 body=151 status=ok
// SIG undefined FUN_1408b1f10(void)

longlong FUN_1408b1f10(void)

{
  if (DAT_146860d28 == 0) {
    FUN_14171ccd0(L"/Script/EditableMesh",L"EditableMeshAdapter",&DAT_146860d28,FUN_140447710,0x28,
                  0x10000001,0,L"Engine",FUN_1408b25d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146860d28;
}



// FUNCTION 1408b1fb0 FUN_1408b1fb0 body=47 status=ok
// SIG undefined FUN_1408b1fb0(void)

longlong FUN_1408b1fb0(void)

{
  if (DAT_146860d20 == 0) {
    FUN_141786440(&DAT_146860d20,&PTR_FUN_14411db60);
  }
  return DAT_146860d20;
}



// FUNCTION 1408b1ff0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UEditableMeshFactory::GetPrivateStaticClass(void)

{
  if (DAT_146860d88 == 0) {
    FUN_14171ccd0(L"/Script/EditableMesh",L"EditableMeshFactory",&DAT_146860d88,
                  StaticRegisterNativesUEditableMeshFactory,0x28,0x10000000,0,L"Engine",
                  FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146860d88;
}



// FUNCTION 1408b2090 FUN_1408b2090 body=47 status=ok
// SIG undefined FUN_1408b2090(void)

longlong FUN_1408b2090(void)

{
  if (DAT_146860d80 == 0) {
    FUN_141786440(&DAT_146860d80,&PTR_GetPrivateStaticClass_14411dd20);
  }
  return DAT_146860d80;
}



// FUNCTION 1408b20c0 FUN_1408b20c0 body=47 status=ok
// SIG undefined FUN_1408b20c0(void)

longlong FUN_1408b20c0(void)

{
  if (DAT_146860d78 == 0) {
    FUN_141786a30(&DAT_146860d78,&PTR_FUN_146278ec0);
  }
  return DAT_146860d78;
}



// FUNCTION 1408b2100 FUN_1408b2100 body=53 status=ok
// SIG undefined FUN_1408b2100(void)

void FUN_1408b2100(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_14411fee0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1408b2140 FUN_1408b2140 body=53 status=ok
// SIG undefined FUN_1408b2140(void)

void FUN_1408b2140(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_14411fff8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b2180 FUN_1408b2180 body=53 status=ok
// SIG undefined FUN_1408b2180(void)

void FUN_1408b2180(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144120110;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1408b21c0 FUN_1408b21c0 body=53 status=ok
// SIG undefined FUN_1408b21c0(void)

void FUN_1408b21c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_144120228;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1408b2200 FUN_1408b2200 body=53 status=ok
// SIG undefined FUN_1408b2200(void)

void FUN_1408b2200(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144120340;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b2240 FUN_1408b2240 body=53 status=ok
// SIG undefined FUN_1408b2240(void)

void FUN_1408b2240(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144120458;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b2280 FUN_1408b2280 body=53 status=ok
// SIG undefined FUN_1408b2280(void)

void FUN_1408b2280(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144120570;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b22c0 FUN_1408b22c0 body=53 status=ok
// SIG undefined FUN_1408b22c0(void)

void FUN_1408b22c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144120688;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b2300 FUN_1408b2300 body=53 status=ok
// SIG undefined FUN_1408b2300(void)

void FUN_1408b2300(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1441207a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b2340 FUN_1408b2340 body=53 status=ok
// SIG undefined FUN_1408b2340(void)

void FUN_1408b2340(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_144121808;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b2380 FUN_1408b2380 body=53 status=ok
// SIG undefined FUN_1408b2380(void)

void FUN_1408b2380(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144121920;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b23c0 FUN_1408b23c0 body=53 status=ok
// SIG undefined FUN_1408b23c0(void)

void FUN_1408b23c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_144121a38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1408b2410 FUN_1408b2410 body=53 status=ok
// SIG undefined FUN_1408b2410(void)

void FUN_1408b2410(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1441208b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b2450 FUN_1408b2450 body=53 status=ok
// SIG undefined FUN_1408b2450(void)

void FUN_1408b2450(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_1441209d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1408b2490 FUN_1408b2490 body=53 status=ok
// SIG undefined FUN_1408b2490(void)

void FUN_1408b2490(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144120ae8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b24d0 FUN_1408b24d0 body=53 status=ok
// SIG undefined FUN_1408b24d0(void)

void FUN_1408b24d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144120c00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b2510 CopyToEmpty<FMeshElementAttributeList> body=188 status=ok
// SIG undefined CopyToEmpty<FMeshElementAttributeList>(void)

void TArray<FMeshElementAttributeList,FDefaultAllocator>::CopyToEmpty<FMeshElementAttributeList>
               (undefined8 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x60);
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
  }
  return;
}



// FUNCTION 1408b25d0 FUN_1408b25d0 body=41 status=ok
// SIG undefined FUN_1408b25d0(void)

void FUN_1408b25d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144115b90;
  }
  return;
}



// FUNCTION 1408b2610 ~TArray<FVertexAttributesForPolygonHole,FDefaultAllocator> body=158 status=ok
// SIG undefined ~TArray<FVertexAttributesForPolygonHole,FDefaultAllocator>(void)

void TArray<FVertexAttributesForPolygonHole,FDefaultAllocator>::
     ~TArray<FVertexAttributesForPolygonHole,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  puVar3 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      iVar4 = *(int *)(puVar3 + 1);
      plVar1 = (longlong *)*puVar3;
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)*puVar3;
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      puVar3 = puVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar3);
  return;
}



// FUNCTION 1408b26b0 ~FChangeVertexInstancesForPolygon body=101 status=ok
// SIG undefined ~FChangeVertexInstancesForPolygon(void)

void FChangeVertexInstancesForPolygon::~FChangeVertexInstancesForPolygon(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x18);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408b2720 operator= body=122 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FMeshElementAttributeList,FDefaultAllocator>::operator=
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    plVar1 = (longlong *)*param_1;
    for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
    }
    CopyToEmpty<FMeshElementAttributeList>
              (param_1,*param_2,*(undefined4 *)(param_2 + 1),
               *(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  return param_1;
}



// FUNCTION 1408b27a0 operator= body=410 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FVertexAttributesForPolygonHole,FDefaultAllocator>::operator=
          (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  puVar5 = (undefined8 *)*param_1;
  for (iVar4 = *(int *)(param_1 + 1); iVar4 != 0; iVar4 = iVar4 + -1) {
    iVar6 = *(int *)(puVar5 + 1);
    plVar2 = (longlong *)*puVar5;
    if (iVar6 != 0) {
      do {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      plVar2 = (longlong *)*puVar5;
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free(plVar2);
    }
    puVar5 = puVar5 + 2;
  }
  iVar4 = *(int *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  *(int *)(param_1 + 1) = iVar4;
  if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar4);
    puVar5 = (undefined8 *)*param_1;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      iVar6 = *(int *)(param_2 + 1);
      puVar7 = (undefined8 *)*param_2;
      *(int *)(puVar5 + 1) = iVar6;
      if (iVar6 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar5,iVar6,0);
        puVar3 = (undefined8 *)*puVar5;
        do {
          *puVar3 = 0;
          iVar1 = *(int *)(puVar7 + 1);
          _Src = (void *)*puVar7;
          *(int *)(puVar3 + 1) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          }
          else {
            TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
            ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 0x60);
          }
          puVar3 = puVar3 + 2;
          puVar7 = puVar7 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      puVar5 = puVar5 + 2;
      param_2 = param_2 + 2;
    }
  }
  return param_1;
}



// FUNCTION 1408b2940 operator= body=114 status=ok
// SIG undefined operator=(void)

undefined8 * FMeshElementAttributeList::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x60);
  }
  return param_1;
}



// FUNCTION 1408b2bf0 Copy body=80 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAttributesForEdge>::Copy
          (undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = *(undefined4 *)(param_3 + (longlong)param_2);
      FMeshElementAttributeList::operator=(param_2 + 2,param_3 + 8 + (longlong)param_2);
      param_2 = param_2 + 6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b2c40 Copy body=320 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FChangeVertexInstancesForPolygon>::Copy
          (undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_3 + 0x18);
    do {
      *param_2 = *(undefined4 *)(puVar6 + -3);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_2 + 2,puVar6 + -2);
      puVar3 = (undefined8 *)(param_2 + 6);
      if (puVar3 != puVar6) {
        plVar2 = (longlong *)*puVar3;
        for (iVar4 = param_2[8]; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
        }
        iVar4 = *(int *)(puVar6 + 1);
        puVar5 = (undefined8 *)*puVar6;
        param_2[8] = iVar4;
        if ((iVar4 == 0) && (param_2[9] == 0)) {
          param_2[9] = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar3,iVar4);
          puVar3 = (undefined8 *)*puVar3;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar3 = 0;
            iVar1 = *(int *)(puVar5 + 1);
            _Src = (void *)*puVar5;
            *(int *)(puVar3 + 1) = iVar1;
            if (iVar1 == 0) {
              *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
            }
            else {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar3,iVar1,0);
              ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 << 3);
            }
            puVar3 = puVar3 + 2;
            puVar5 = puVar5 + 2;
          }
        }
      }
      puVar6 = puVar6 + 5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 10;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b2d80 Copy body=109 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FEdgeToCreate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8 + param_2);
      *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_3 + -4 + param_2);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2,param_3 + param_2);
      FMeshElementAttributeList::operator=(param_2 + 0x10,param_3 + 0x10 + param_2);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20 + param_2);
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b2e50 Copy body=171 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMeshElementAttributeList>::Copy
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar1 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar1;
      if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy(param_2,iVar1);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 * 0x60);
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 1408b2f00 Copy body=78 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FPolygonGroupToCreate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FMeshElementAttributeList::operator=(param_2,param_3 + param_2);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10 + param_2);
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b2f50 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FPolygonHoleVertices>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TArray<FVertexAndAttributes,FDefaultAllocator>::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b2fa0 Copy body=395 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FPolygonToCreate>::Copy
          (undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  
  if (param_4 != 0) {
    plVar7 = (longlong *)(param_3 + 0x18);
    do {
      *param_2 = (int)plVar7[-3];
      TArray<FVertexAndAttributes,FDefaultAllocator>::operator=(param_2 + 2,plVar7 + -2);
      plVar1 = (longlong *)(param_2 + 6);
      if (plVar1 != plVar7) {
        lVar3 = *plVar1;
        for (iVar5 = param_2[8]; iVar5 != 0; iVar5 = iVar5 + -1) {
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(lVar3);
          lVar3 = lVar3 + 0x10;
        }
        iVar5 = (int)plVar7[1];
        plVar9 = (longlong *)*plVar7;
        param_2[8] = iVar5;
        if ((iVar5 == 0) && (param_2[9] == 0)) {
          param_2[9] = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
          puVar8 = (undefined8 *)*plVar1;
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = 0;
            iVar4 = (int)plVar9[1];
            lVar3 = *plVar9;
            *(int *)(puVar8 + 1) = iVar4;
            if (iVar4 == 0) {
              *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
            }
            else {
              TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar8,iVar4,0);
              puVar6 = (undefined4 *)*puVar8;
              lVar3 = lVar3 + 8;
              do {
                *puVar6 = *(undefined4 *)(lVar3 + -8);
                puVar6[1] = *(undefined4 *)(lVar3 + -4);
                FMeshElementAttributeList::FMeshElementAttributeList(puVar6 + 2,lVar3);
                lVar3 = lVar3 + 0x18;
                puVar6 = puVar6 + 6;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            puVar8 = puVar8 + 2;
            plVar9 = plVar9 + 2;
          }
        }
      }
      param_2[10] = (int)plVar7[2];
      puVar2 = (undefined1 *)((longlong)plVar7 + 0x14);
      plVar7 = plVar7 + 6;
      param_4 = param_4 + -1;
      *(undefined1 *)(param_2 + 0xb) = *puVar2;
      param_2 = param_2 + 0xc;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b3130 Copy body=187 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FPolygonToSplit>::Copy
          (undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      puVar1 = (undefined8 *)(param_2 + 2);
      *param_2 = *(undefined4 *)(puVar3 + -1);
      if (puVar1 != puVar3) {
        iVar2 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        param_2[4] = iVar2;
        if ((iVar2 == 0) && (param_2[5] == 0)) {
          param_2[5] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      puVar3 = puVar3 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 6;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b31f0 Copy body=187 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAdaptorPolygon>::Copy
          (undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      puVar1 = (undefined8 *)(param_2 + 2);
      *param_2 = *(undefined4 *)(puVar3 + -1);
      if (puVar1 != puVar3) {
        iVar2 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        param_2[4] = iVar2;
        if ((iVar2 == 0) && (param_2[5] == 0)) {
          param_2[5] = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 2);
        }
      }
      puVar3 = puVar3 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 6;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b32b0 FUN_1408b32b0 body=95 status=ok
// SIG undefined FUN_1408b32b0(void)

undefined8 FUN_1408b32b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 8);
    do {
      puVar1[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      TSparseArray<FMeshTriangle,FDefaultSparseArrayAllocator>::operator=
                (puVar1 + 2,param_3 + 8 + (longlong)puVar1);
      puVar1 = puVar1 + 0x12;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b33d0 FUN_1408b33d0 body=462 status=ok
// SIG undefined FUN_1408b33d0(void)

undefined8 FUN_1408b33d0(undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  
  if (param_4 != 0) {
    piVar8 = (int *)(param_3 + 0x28);
    do {
      if (param_2 != piVar8 + -10) {
        iVar6 = piVar8[-8];
        pvVar3 = *(void **)(piVar8 + -10);
        param_2[2] = iVar6;
        if ((iVar6 == 0) && (param_2[3] == 0)) {
          param_2[3] = 0;
        }
        else {
          TArray<FVector,FDefaultAllocator>::ResizeForCopy(param_2,iVar6);
          _guard_xfg_dispatch_icall_nop(*(void **)param_2,pvVar3,(longlong)iVar6 * 0xc);
        }
      }
      piVar1 = param_2 + 4;
      if (piVar1 != piVar8 + -6) {
        plVar4 = *(longlong **)piVar1;
        for (iVar6 = param_2[6]; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 2;
        }
        iVar6 = piVar8[-4];
        puVar7 = *(undefined8 **)(piVar8 + -6);
        param_2[6] = iVar6;
        if ((iVar6 == 0) && (param_2[7] == 0)) {
          param_2[7] = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(piVar1,iVar6);
          puVar5 = *(undefined8 **)piVar1;
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar5 = 0;
            iVar2 = *(int *)(puVar7 + 1);
            pvVar3 = (void *)*puVar7;
            *(int *)(puVar5 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            }
            else {
              TArray<FAsyncPathFindingQuery,FDefaultAllocator>::ResizeForCopy(puVar5,iVar2,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar5,pvVar3,(longlong)iVar2 * 0xe0);
            }
            puVar5 = puVar5 + 2;
            puVar7 = puVar7 + 2;
          }
        }
      }
      piVar1 = param_2 + 8;
      if (piVar1 != piVar8 + -2) {
        iVar6 = *piVar8;
        pvVar3 = *(void **)(piVar8 + -2);
        param_2[10] = iVar6;
        if ((iVar6 == 0) && (param_2[0xb] == 0)) {
          param_2[0xb] = 0;
        }
        else {
          TArray<FRotator,FDefaultAllocator>::ResizeForCopy(piVar1,iVar6);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar6 * 0xc);
        }
      }
      piVar8 = piVar8 + 0xc;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xc;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b35a0 FUN_1408b35a0 body=161 status=ok
// SIG undefined FUN_1408b35a0(void)

undefined8 FUN_1408b35a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar1 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar1;
      if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FAsyncPathFindingQuery,FDefaultAllocator>::ResizeForCopy(param_2,iVar1);
        _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 * 0xe0);
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 1408b3650 Copy body=86 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FVertexAndAttributes>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8 + param_2);
      *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_3 + -4 + param_2);
      FMeshElementAttributeList::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b36b0 Copy body=95 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FVertexAttributesForPolygon>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x18;
    do {
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18 + param_2);
      TArray<FMeshElementAttributeList,FDefaultAllocator>::operator=
                (param_2 + -0x10,param_3 + -0x10 + param_2);
      TArray<FVertexAttributesForPolygonHole,FDefaultAllocator>::operator=
                (param_2,param_3 + param_2);
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b3710 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FVertexAttributesForPolygonHole>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TArray<FMeshElementAttributeList,FDefaultAllocator>::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b3760 Copy body=88 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FVertexInstanceToCreate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x18);
    do {
      puVar1[-6] = *(undefined4 *)(param_3 + -0x18 + (longlong)puVar1);
      FMeshElementAttributeList::operator=(puVar1 + -4,param_3 + -0x10 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1 = puVar1 + 8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b37c0 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FVertexInstancesForPolygonHole>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408b3820 FUN_1408b3820 body=48 status=ok
// SIG undefined FUN_1408b3820(void)

void FUN_1408b3820(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1408b3860 Destruct body=90 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FPolygonToCreate>::Destruct(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x18);
  if (iVar2 != 0) {
    do {
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (lVar1);
      lVar1 = lVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_2 + 0x18);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_2 + 8);
  return;
}



// FUNCTION 1408b38d0 Destruct body=116 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FSubdivisionLimitData>::Destruct
               (undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_2[4] != 0) {
    FMemory::Free();
  }
  iVar2 = (int)param_2[3];
  plVar1 = (longlong *)param_2[2];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_2[2];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408b3950 Destruct body=93 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FVertexAttributesForPolygon>::Destruct
               (undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  TArray<FVertexAttributesForPolygonHole,FDefaultAllocator>::
  ~TArray<FVertexAttributesForPolygonHole,FDefaultAllocator>(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x10);
  plVar1 = *(longlong **)(param_2 + 8);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_2 + 8);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1408b39b0 EMeshElementAttributeType_StaticEnum body=85 status=ok
// SIG undefined EMeshElementAttributeType_StaticEnum(void)

void EMeshElementAttributeType_StaticEnum(void)

{
  if (DAT_146860d00 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    DAT_146860d00 = GetStaticEnum(FUN_1408b4d90,DAT_146860d18,L"EMeshElementAttributeType");
  }
  return;
}



// FUNCTION 1408b3a10 EMeshModificationType_StaticEnum body=85 status=ok
// SIG undefined EMeshModificationType_StaticEnum(void)

void EMeshModificationType_StaticEnum(void)

{
  if (DAT_146860d10 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    DAT_146860d10 = GetStaticEnum(FUN_1408b4dc0,DAT_146860d18,L"EMeshModificationType");
  }
  return;
}



// FUNCTION 1408b3a70 EMeshTopologyChange_StaticEnum body=85 status=ok
// SIG undefined EMeshTopologyChange_StaticEnum(void)

void EMeshTopologyChange_StaticEnum(void)

{
  if (DAT_146860d08 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    DAT_146860d08 = GetStaticEnum(FUN_1408b4df0,DAT_146860d18,L"EMeshTopologyChange");
  }
  return;
}



// FUNCTION 1408b3ad0 EPolygonEdgeHardness_StaticEnum body=85 status=ok
// SIG undefined EPolygonEdgeHardness_StaticEnum(void)

void EPolygonEdgeHardness_StaticEnum(void)

{
  if (DAT_146860cf8 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    DAT_146860cf8 = GetStaticEnum(FUN_1408b4e20,DAT_146860d18,L"EPolygonEdgeHardness");
  }
  return;
}



// FUNCTION 1408b3b30 FUN_1408b3b30 body=26 status=ok
// SIG undefined FUN_1408b3b30(void)

undefined4 FUN_1408b3b30(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  return *param_2;
}



// FUNCTION 1408b3b50 Get_Z_Construct_UScriptStruct_FAttributesForEdge_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAttributesForEdge_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAttributesForEdge_CRC(void)

{
  return 0xe7a273fe;
}



// FUNCTION 1408b3b60 Get_Z_Construct_UScriptStruct_FAttributesForVertexInstance_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAttributesForVertexInstance_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAttributesForVertexInstance_CRC(void)

{
  return 0x410f6762;
}



// FUNCTION 1408b3b70 Get_Z_Construct_UScriptStruct_FAttributesForVertex_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAttributesForVertex_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAttributesForVertex_CRC(void)

{
  return 0x861fccce;
}



// FUNCTION 1408b3b80 Get_Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_CRC(void)

{
  return 0xa756c5a;
}



// FUNCTION 1408b3b90 Get_Z_Construct_UScriptStruct_FEdgeToCreate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FEdgeToCreate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FEdgeToCreate_CRC(void)

{
  return 0x21ef9a22;
}



// FUNCTION 1408b3ba0 Get_Z_Construct_UScriptStruct_FMeshElementAttributeData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMeshElementAttributeData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMeshElementAttributeData_CRC(void)

{
  return 0xe6b67768;
}



// FUNCTION 1408b3bb0 Get_Z_Construct_UScriptStruct_FMeshElementAttributeList_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMeshElementAttributeList_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMeshElementAttributeList_CRC(void)

{
  return 0x500251e5;
}



// FUNCTION 1408b3bc0 Get_Z_Construct_UScriptStruct_FMeshElementAttributeValue_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMeshElementAttributeValue_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMeshElementAttributeValue_CRC(void)

{
  return 0x42e2feaa;
}



// FUNCTION 1408b3bd0 Get_Z_Construct_UScriptStruct_FPolygonGroupForPolygon_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPolygonGroupForPolygon_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPolygonGroupForPolygon_CRC(void)

{
  return 0x9f6d1dfc;
}



// FUNCTION 1408b3be0 Get_Z_Construct_UScriptStruct_FPolygonGroupToCreate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPolygonGroupToCreate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPolygonGroupToCreate_CRC(void)

{
  return 0x1d946bc;
}



// FUNCTION 1408b3bf0 Get_Z_Construct_UScriptStruct_FPolygonHoleVertices_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPolygonHoleVertices_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPolygonHoleVertices_CRC(void)

{
  return 0x456cc18f;
}



// FUNCTION 1408b3c00 Get_Z_Construct_UScriptStruct_FPolygonToCreate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPolygonToCreate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPolygonToCreate_CRC(void)

{
  return 0x9ac526a0;
}



// FUNCTION 1408b3c10 Get_Z_Construct_UScriptStruct_FPolygonToSplit_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPolygonToSplit_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPolygonToSplit_CRC(void)

{
  return 0x1893f546;
}



// FUNCTION 1408b3c20 Get_Z_Construct_UScriptStruct_FRenderingPolygonGroup_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FRenderingPolygonGroup_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FRenderingPolygonGroup_CRC(void)

{
  return 0x7e476752;
}



// FUNCTION 1408b3c30 Get_Z_Construct_UScriptStruct_FRenderingPolygon_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FRenderingPolygon_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FRenderingPolygon_CRC(void)

{
  return 0x6169b545;
}



// FUNCTION 1408b3c40 FUN_1408b3c40 body=6 status=ok
// SIG undefined FUN_1408b3c40(void)

undefined8 FUN_1408b3c40(void)

{
  return 0xad01c778;
}



// FUNCTION 1408b3c50 Get_Z_Construct_UScriptStruct_FSubdividedQuad_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSubdividedQuad_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSubdividedQuad_CRC(void)

{
  return 0xbc6d42bc;
}



// FUNCTION 1408b3c60 Get_Z_Construct_UScriptStruct_FSubdividedWireEdge_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSubdividedWireEdge_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSubdividedWireEdge_CRC(void)

{
  return 0xb85fc3c1;
}



// FUNCTION 1408b3c70 Get_Z_Construct_UScriptStruct_FSubdivisionLimitData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSubdivisionLimitData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSubdivisionLimitData_CRC(void)

{
  return 0xfac7dcf6;
}



// FUNCTION 1408b3c80 Get_Z_Construct_UScriptStruct_FSubdivisionLimitSection_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSubdivisionLimitSection_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSubdivisionLimitSection_CRC(void)

{
  return 0x43b6771f;
}



// FUNCTION 1408b3c90 Get_Z_Construct_UScriptStruct_FTriangleID_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTriangleID_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTriangleID_CRC(void)

{
  return 0x75202ec4;
}



// FUNCTION 1408b3ca0 Get_Z_Construct_UScriptStruct_FVertexAndAttributes_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVertexAndAttributes_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVertexAndAttributes_CRC(void)

{
  return 0x908284b7;
}



// FUNCTION 1408b3cb0 Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_CRC(void)

{
  return 0xf778012a;
}



// FUNCTION 1408b3cc0 Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygon_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygon_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygon_CRC(void)

{
  return 0x9e5f1d0e;
}



// FUNCTION 1408b3cd0 Get_Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_CRC(void)

{
  return 0xfa61ee3f;
}



// FUNCTION 1408b3ce0 Get_Z_Construct_UScriptStruct_FVertexInstanceToCreate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVertexInstanceToCreate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVertexInstanceToCreate_CRC(void)

{
  return 0x120f43e5;
}



// FUNCTION 1408b3cf0 Get_Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_CRC(void)

{
  return 0xa09940f5;
}



// FUNCTION 1408b3d00 Get_Z_Construct_UScriptStruct_FVertexPair_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVertexPair_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVertexPair_CRC(void)

{
  return 0x6d79b9f;
}



// FUNCTION 1408b3d10 Get_Z_Construct_UScriptStruct_FVertexToCreate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVertexToCreate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVertexToCreate_CRC(void)

{
  return 0x4180d68e;
}



// FUNCTION 1408b3d20 Get_Z_Construct_UScriptStruct_FVertexToMove_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVertexToMove_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVertexToMove_CRC(void)

{
  return 0x16012a9c;
}



// FUNCTION 1408b3d30 Get_Z_Construct_UScriptStruct_FVerticesForEdge_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVerticesForEdge_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVerticesForEdge_CRC(void)

{
  return 0x1571b10d;
}



// FUNCTION 1408b3d40 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  UEditableStaticMeshAdapter::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1408b3db0 StaticRegisterNativesUEditableMeshFactory body=34 status=ok
// SIG undefined StaticRegisterNativesUEditableMeshFactory(void)

void UEditableMeshFactory::StaticRegisterNativesUEditableMeshFactory(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_MakeEditableMesh_14411fdc0,1);
  return;
}



// FUNCTION 1408b3de0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAttributesForEdge::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860e40 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FAttributesForEdge_CRC();
    DAT_146860e40 = GetStaticStruct(FUN_1408b4e50,lVar1,L"AttributesForEdge",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408b3e60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAttributesForVertex::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860e60 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FAttributesForVertex_CRC();
    DAT_146860e60 = GetStaticStruct(FUN_1408b4e80,lVar1,L"AttributesForVertex",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408b3ee0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAttributesForVertexInstance::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860e50 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FAttributesForVertexInstance_CRC();
    DAT_146860e50 = GetStaticStruct(FUN_1408b4eb0,lVar1,L"AttributesForVertexInstance",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408b3f60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FChangeVertexInstancesForPolygon::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860df0 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon_CRC();
    DAT_146860df0 =
         GetStaticStruct(FUN_1408b4ee0,lVar1,L"ChangeVertexInstancesForPolygon",0x28,uVar2);
  }
  return;
}



// FUNCTION 1408b3fe0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FEdgeToCreate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860ec0 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FEdgeToCreate_CRC();
    DAT_146860ec0 = GetStaticStruct(FUN_1408b4f10,lVar1,L"EdgeToCreate",0x30,uVar2);
  }
  return;
}



// FUNCTION 1408b4060 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMeshElementAttributeData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860f00 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FMeshElementAttributeData_CRC();
    DAT_146860f00 = GetStaticStruct(FUN_1408b4f40,lVar1,L"MeshElementAttributeData",0x60,uVar2);
  }
  return;
}



// FUNCTION 1408b40e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMeshElementAttributeList::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860ef0 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FMeshElementAttributeList_CRC();
    DAT_146860ef0 = GetStaticStruct(FUN_1408b4f70,lVar1,L"MeshElementAttributeList",0x10,uVar2);
  }
  return;
}



// FUNCTION 1408b4160 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMeshElementAttributeValue::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860f10 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FMeshElementAttributeValue_CRC();
    DAT_146860f10 = GetStaticStruct(FUN_1408b4fa0,lVar1,L"MeshElementAttributeValue",0x50,uVar2);
  }
  return;
}



// FUNCTION 1408b41e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FPolygonGroupForPolygon::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860db0 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FPolygonGroupForPolygon_CRC();
    DAT_146860db0 = GetStaticStruct(FUN_1408b4fd0,lVar1,L"PolygonGroupForPolygon",8,uVar2);
  }
  return;
}



// FUNCTION 1408b4260 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FPolygonGroupToCreate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860dc0 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FPolygonGroupToCreate_CRC();
    DAT_146860dc0 = GetStaticStruct(FUN_1408b5000,lVar1,L"PolygonGroupToCreate",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408b42e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FPolygonHoleVertices::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860ea0 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FPolygonHoleVertices_CRC();
    DAT_146860ea0 = GetStaticStruct(FUN_1408b5030,lVar1,L"PolygonHoleVertices",0x10,uVar2);
  }
  return;
}



// FUNCTION 1408b4360 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FPolygonToCreate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860e90 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FPolygonToCreate_CRC();
    DAT_146860e90 = GetStaticStruct(FUN_1408b5060,lVar1,L"PolygonToCreate",0x30,uVar2);
  }
  return;
}



// FUNCTION 1408b43e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FPolygonToSplit::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860e70 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FPolygonToSplit_CRC();
    DAT_146860e70 = GetStaticStruct(FUN_1408b5090,lVar1,L"PolygonToSplit",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408b4460 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FRenderingPolygon::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860f80 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FRenderingPolygon_CRC();
    DAT_146860f80 = GetStaticStruct(FUN_1408b50c0,lVar1,L"RenderingPolygon",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408b44e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FRenderingPolygonGroup::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860f70 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FRenderingPolygonGroup_CRC();
    DAT_146860f70 = GetStaticStruct(FUN_1408b50f0,lVar1,L"RenderingPolygonGroup",0x48,uVar2);
  }
  return;
}



// FUNCTION 1408b4560 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_BlendListByEnum::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860f50 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FSubdividedQuad_CRC();
    DAT_146860f50 = GetStaticStruct(FUN_1408b5120,lVar1,L"SubdividedQuad",0xe0,uVar2);
  }
  return;
}



// FUNCTION 1408b45e0 FUN_1408b45e0 body=113 status=ok
// SIG undefined FUN_1408b45e0(void)

void FUN_1408b45e0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860f60 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = FUN_1408b3c40();
    DAT_146860f60 = GetStaticStruct(FUN_1408b5150,lVar1,L"SubdividedQuadVertex",0x38,uVar2);
  }
  return;
}



// FUNCTION 1408b4660 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FSubdividedWireEdge::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860f40 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FSubdividedWireEdge_CRC();
    DAT_146860f40 = GetStaticStruct(FUN_1408b5180,lVar1,L"SubdividedWireEdge",0xc,uVar2);
  }
  return;
}



// FUNCTION 1408b46e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FSubdivisionLimitData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860f20 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FSubdivisionLimitData_CRC();
    DAT_146860f20 = GetStaticStruct(FUN_1408b51b0,lVar1,L"SubdivisionLimitData",0x30,uVar2);
  }
  return;
}



// FUNCTION 1408b4760 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FSubdivisionLimitSection::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860f30 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FSubdivisionLimitSection_CRC();
    DAT_146860f30 = GetStaticStruct(FUN_1408b51e0,lVar1,L"SubdivisionLimitSection",0x10,uVar2);
  }
  return;
}



// FUNCTION 1408b47e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FTriangleID::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860f90 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FTriangleID_CRC();
    DAT_146860f90 = GetStaticStruct(FUN_1408b5210,lVar1,L"TriangleID",4,uVar2);
  }
  return;
}



// FUNCTION 1408b4860 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVertexAndAttributes::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860eb0 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FVertexAndAttributes_CRC();
    DAT_146860eb0 = GetStaticStruct(FUN_1408b5240,lVar1,L"VertexAndAttributes",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408b48e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVertexAttributesForPolygon::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860e20 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygon_CRC();
    DAT_146860e20 = GetStaticStruct(FUN_1408b5270,lVar1,L"VertexAttributesForPolygon",0x28,uVar2);
  }
  return;
}



// FUNCTION 1408b4960 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVertexAttributesForPolygonHole::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860e30 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FVertexAttributesForPolygonHole_CRC();
    DAT_146860e30 =
         GetStaticStruct(FUN_1408b52a0,lVar1,L"VertexAttributesForPolygonHole",0x10,uVar2);
  }
  return;
}



// FUNCTION 1408b49e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVertexIndexAndInstanceID::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860e10 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FVertexIndexAndInstanceID_CRC();
    DAT_146860e10 = GetStaticStruct(FUN_1408b52d0,lVar1,L"VertexIndexAndInstanceID",8,uVar2);
  }
  return;
}



// FUNCTION 1408b4a60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVertexInstanceToCreate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860ed0 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FVertexInstanceToCreate_CRC();
    DAT_146860ed0 = GetStaticStruct(FUN_1408b5300,lVar1,L"VertexInstanceToCreate",0x20,uVar2);
  }
  return;
}



// FUNCTION 1408b4ae0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVertexInstancesForPolygonHole::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860e00 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FVertexInstancesForPolygonHole_CRC();
    DAT_146860e00 = GetStaticStruct(FUN_1408b5330,lVar1,L"VertexInstancesForPolygonHole",0x10,uVar2)
    ;
  }
  return;
}



// FUNCTION 1408b4b60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVertexPair::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860e80 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FVertexPair_CRC();
    DAT_146860e80 = GetStaticStruct(FUN_1408b5360,lVar1,L"VertexPair",8,uVar2);
  }
  return;
}



// FUNCTION 1408b4be0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVertexToCreate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860ee0 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FVertexToCreate_CRC();
    DAT_146860ee0 = GetStaticStruct(FUN_1408b5390,lVar1,L"VertexToCreate",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408b4c60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVertexToMove::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860dd0 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FVertexToMove_CRC();
    DAT_146860dd0 = GetStaticStruct(FUN_1408b53c0,lVar1,L"VertexToMove",0x10,uVar2);
  }
  return;
}



// FUNCTION 1408b4ce0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVerticesForEdge::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146860de0 == 0) {
    if (DAT_146860d18 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146860d18,&PTR_s__Script_EditableMesh_14411fd98);
    }
    lVar1 = DAT_146860d18;
    uVar2 = Get_Z_Construct_UScriptStruct_FVerticesForEdge_CRC();
    DAT_146860de0 = GetStaticStruct(FUN_1408b53f0,lVar1,L"VerticesForEdge",0xc,uVar2);
  }
  return;
}



// FUNCTION 1408b4d60 FUN_1408b4d60 body=47 status=ok
// SIG undefined FUN_1408b4d60(void)

longlong FUN_1408b4d60(void)

{
  if (DAT_146860fa0 == 0) {
    FUN_141786440(&DAT_146860fa0,&PTR_GetPrivateStaticClass_14411f300);
  }
  return DAT_146860fa0;
}



// FUNCTION 1408b4d90 FUN_1408b4d90 body=47 status=ok
// SIG undefined FUN_1408b4d90(void)

longlong FUN_1408b4d90(void)

{
  if (DAT_146860d98 == 0) {
    FUN_1417866a0(&DAT_146860d98,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627af90);
  }
  return DAT_146860d98;
}



// FUNCTION 1408b4dc0 FUN_1408b4dc0 body=47 status=ok
// SIG undefined FUN_1408b4dc0(void)

longlong FUN_1408b4dc0(void)

{
  if (DAT_146860da8 == 0) {
    FUN_1417866a0(&DAT_146860da8,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627b030);
  }
  return DAT_146860da8;
}



// FUNCTION 1408b4df0 FUN_1408b4df0 body=47 status=ok
// SIG undefined FUN_1408b4df0(void)

longlong FUN_1408b4df0(void)

{
  if (DAT_146860da0 == 0) {
    FUN_1417866a0(&DAT_146860da0,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627afe0);
  }
  return DAT_146860da0;
}



// FUNCTION 1408b4e20 FUN_1408b4e20 body=47 status=ok
// SIG undefined FUN_1408b4e20(void)

longlong FUN_1408b4e20(void)

{
  if (DAT_146860d90 == 0) {
    FUN_1417866a0(&DAT_146860d90,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627af40);
  }
  return DAT_146860d90;
}



// FUNCTION 1408b4e50 FUN_1408b4e50 body=47 status=ok
// SIG undefined FUN_1408b4e50(void)

longlong FUN_1408b4e50(void)

{
  if (DAT_146860e48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860e48,&PTR_Z_Construct_UPackage__Script_EditableMesh_1462798e0);
  }
  return DAT_146860e48;
}



// FUNCTION 1408b4e80 FUN_1408b4e80 body=47 status=ok
// SIG undefined FUN_1408b4e80(void)

longlong FUN_1408b4e80(void)

{
  if (DAT_146860e68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860e68,&PTR_Z_Construct_UPackage__Script_EditableMesh_146279ae0);
  }
  return DAT_146860e68;
}



// FUNCTION 1408b4eb0 FUN_1408b4eb0 body=47 status=ok
// SIG undefined FUN_1408b4eb0(void)

longlong FUN_1408b4eb0(void)

{
  if (DAT_146860e58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860e58,&PTR_Z_Construct_UPackage__Script_EditableMesh_1462799e0);
  }
  return DAT_146860e58;
}



// FUNCTION 1408b4ee0 FUN_1408b4ee0 body=47 status=ok
// SIG undefined FUN_1408b4ee0(void)

longlong FUN_1408b4ee0(void)

{
  if (DAT_146860df8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860df8,&PTR_Z_Construct_UPackage__Script_EditableMesh_146279460);
  }
  return DAT_146860df8;
}



// FUNCTION 1408b4f10 FUN_1408b4f10 body=47 status=ok
// SIG undefined FUN_1408b4f10(void)

longlong FUN_1408b4f10(void)

{
  if (DAT_146860ec8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860ec8,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627a2a0);
  }
  return DAT_146860ec8;
}



// FUNCTION 1408b4f40 FUN_1408b4f40 body=47 status=ok
// SIG undefined FUN_1408b4f40(void)

longlong FUN_1408b4f40(void)

{
  if (DAT_146860f08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860f08,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627a660);
  }
  return DAT_146860f08;
}



// FUNCTION 1408b4f70 FUN_1408b4f70 body=47 status=ok
// SIG undefined FUN_1408b4f70(void)

longlong FUN_1408b4f70(void)

{
  if (DAT_146860ef8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860ef8,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627a5a0);
  }
  return DAT_146860ef8;
}



// FUNCTION 1408b4fa0 FUN_1408b4fa0 body=47 status=ok
// SIG undefined FUN_1408b4fa0(void)

longlong FUN_1408b4fa0(void)

{
  if (DAT_146860f18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860f18,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627a6e0);
  }
  return DAT_146860f18;
}



// FUNCTION 1408b4fd0 FUN_1408b4fd0 body=47 status=ok
// SIG undefined FUN_1408b4fd0(void)

longlong FUN_1408b4fd0(void)

{
  if (DAT_146860db8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860db8,&PTR_Z_Construct_UPackage__Script_EditableMesh_146278fe0);
  }
  return DAT_146860db8;
}



// FUNCTION 1408b5000 FUN_1408b5000 body=47 status=ok
// SIG undefined FUN_1408b5000(void)

longlong FUN_1408b5000(void)

{
  if (DAT_146860dc8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860dc8,&PTR_Z_Construct_UPackage__Script_EditableMesh_1462790e0);
  }
  return DAT_146860dc8;
}



// FUNCTION 1408b5030 FUN_1408b5030 body=47 status=ok
// SIG undefined FUN_1408b5030(void)

longlong FUN_1408b5030(void)

{
  if (DAT_146860ea8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860ea8,&PTR_Z_Construct_UPackage__Script_EditableMesh_146279fa0);
  }
  return DAT_146860ea8;
}



// FUNCTION 1408b5060 FUN_1408b5060 body=47 status=ok
// SIG undefined FUN_1408b5060(void)

longlong FUN_1408b5060(void)

{
  if (DAT_146860e98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860e98,&PTR_Z_Construct_UPackage__Script_EditableMesh_146279ee0);
  }
  return DAT_146860e98;
}



// FUNCTION 1408b5090 FUN_1408b5090 body=47 status=ok
// SIG undefined FUN_1408b5090(void)

longlong FUN_1408b5090(void)

{
  if (DAT_146860e78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860e78,&PTR_Z_Construct_UPackage__Script_EditableMesh_146279be0);
  }
  return DAT_146860e78;
}



// FUNCTION 1408b50c0 FUN_1408b50c0 body=47 status=ok
// SIG undefined FUN_1408b50c0(void)

longlong FUN_1408b50c0(void)

{
  if (DAT_146860f88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860f88,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627ae20);
  }
  return DAT_146860f88;
}



// FUNCTION 1408b50f0 FUN_1408b50f0 body=47 status=ok
// SIG undefined FUN_1408b50f0(void)

longlong FUN_1408b50f0(void)

{
  if (DAT_146860f78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860f78,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627ad50);
  }
  return DAT_146860f78;
}



// FUNCTION 1408b5120 FUN_1408b5120 body=47 status=ok
// SIG undefined FUN_1408b5120(void)

longlong FUN_1408b5120(void)

{
  if (DAT_146860f58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860f58,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627aae0);
  }
  return DAT_146860f58;
}



// FUNCTION 1408b5150 FUN_1408b5150 body=47 status=ok
// SIG undefined FUN_1408b5150(void)

longlong FUN_1408b5150(void)

{
  if (DAT_146860f68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860f68,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627ace0);
  }
  return DAT_146860f68;
}



// FUNCTION 1408b5180 FUN_1408b5180 body=47 status=ok
// SIG undefined FUN_1408b5180(void)

longlong FUN_1408b5180(void)

{
  if (DAT_146860f48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860f48,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627a960);
  }
  return DAT_146860f48;
}



// FUNCTION 1408b51b0 FUN_1408b51b0 body=47 status=ok
// SIG undefined FUN_1408b51b0(void)

longlong FUN_1408b51b0(void)

{
  if (DAT_146860f28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860f28,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627a820);
  }
  return DAT_146860f28;
}



// FUNCTION 1408b51e0 FUN_1408b51e0 body=47 status=ok
// SIG undefined FUN_1408b51e0(void)

longlong FUN_1408b51e0(void)

{
  if (DAT_146860f38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860f38,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627a8e0);
  }
  return DAT_146860f38;
}



// FUNCTION 1408b5210 FUN_1408b5210 body=47 status=ok
// SIG undefined FUN_1408b5210(void)

longlong FUN_1408b5210(void)

{
  if (DAT_146860f98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860f98,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627ae70);
  }
  return DAT_146860f98;
}



// FUNCTION 1408b5240 FUN_1408b5240 body=47 status=ok
// SIG undefined FUN_1408b5240(void)

longlong FUN_1408b5240(void)

{
  if (DAT_146860eb8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860eb8,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627a0e0);
  }
  return DAT_146860eb8;
}



// FUNCTION 1408b5270 FUN_1408b5270 body=47 status=ok
// SIG undefined FUN_1408b5270(void)

longlong FUN_1408b5270(void)

{
  if (DAT_146860e28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860e28,&PTR_Z_Construct_UPackage__Script_EditableMesh_146279720);
  }
  return DAT_146860e28;
}



// FUNCTION 1408b52a0 FUN_1408b52a0 body=47 status=ok
// SIG undefined FUN_1408b52a0(void)

longlong FUN_1408b52a0(void)

{
  if (DAT_146860e38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860e38,&PTR_Z_Construct_UPackage__Script_EditableMesh_1462797e0);
  }
  return DAT_146860e38;
}



// FUNCTION 1408b52d0 FUN_1408b52d0 body=47 status=ok
// SIG undefined FUN_1408b52d0(void)

longlong FUN_1408b52d0(void)

{
  if (DAT_146860e18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860e18,&PTR_Z_Construct_UPackage__Script_EditableMesh_1462795e0);
  }
  return DAT_146860e18;
}



// FUNCTION 1408b5300 FUN_1408b5300 body=47 status=ok
// SIG undefined FUN_1408b5300(void)

longlong FUN_1408b5300(void)

{
  if (DAT_146860ed8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860ed8,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627a3e0);
  }
  return DAT_146860ed8;
}



// FUNCTION 1408b5330 FUN_1408b5330 body=47 status=ok
// SIG undefined FUN_1408b5330(void)

longlong FUN_1408b5330(void)

{
  if (DAT_146860e08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860e08,&PTR_Z_Construct_UPackage__Script_EditableMesh_146279520);
  }
  return DAT_146860e08;
}



// FUNCTION 1408b5360 FUN_1408b5360 body=47 status=ok
// SIG undefined FUN_1408b5360(void)

longlong FUN_1408b5360(void)

{
  if (DAT_146860e88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860e88,&PTR_Z_Construct_UPackage__Script_EditableMesh_146279ce0);
  }
  return DAT_146860e88;
}



// FUNCTION 1408b5390 FUN_1408b5390 body=47 status=ok
// SIG undefined FUN_1408b5390(void)

longlong FUN_1408b5390(void)

{
  if (DAT_146860ee8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860ee8,&PTR_Z_Construct_UPackage__Script_EditableMesh_14627a4e0);
  }
  return DAT_146860ee8;
}



// FUNCTION 1408b53c0 FUN_1408b53c0 body=47 status=ok
// SIG undefined FUN_1408b53c0(void)

longlong FUN_1408b53c0(void)

{
  if (DAT_146860dd8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860dd8,&PTR_Z_Construct_UPackage__Script_EditableMesh_1462791e0);
  }
  return DAT_146860dd8;
}



// FUNCTION 1408b53f0 FUN_1408b53f0 body=47 status=ok
// SIG undefined FUN_1408b53f0(void)

longlong FUN_1408b53f0(void)

{
  if (DAT_146860de8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146860de8,&PTR_Z_Construct_UPackage__Script_EditableMesh_146279320);
  }
  return DAT_146860de8;
}



// FUNCTION 1408b5420 execMakeEditableMesh body=189 status=ok
// SIG undefined execMakeEditableMesh(void)

void UEditableMeshFactory::execMakeEditableMesh
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  uVar1 = MakeEditableMesh(local_res18,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408b54e0 StartupModule body=234 status=ok
// SIG undefined StartupModule(void)

void FDatasmithContentModule::StartupModule(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong local_38;
  undefined8 local_30;
  undefined2 *local_28;
  wchar_t *local_20;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FPaths::ProjectIntermediateDir(local_18);
  puVar4 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    local_28 = &DAT_143f3eda8;
  }
  else {
    local_28 = (undefined2 *)*puVar1;
  }
  local_20 = L"DatasmithContentTemp";
  local_38 = 0;
  local_30 = 0;
  FPaths::CombineInternal(&local_38,&local_28,2);
  plVar3 = (longlong *)(param_1 + 8);
  if (plVar3 == &local_38) {
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    *plVar3 = local_38;
    *(undefined4 *)(param_1 + 0x10) = (undefined4)local_30;
    *(undefined4 *)(param_1 + 0x14) = local_30._4_4_;
    local_30 = 0;
    local_38 = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar2 = (longlong *)FUN_1415c3d50();
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined2 *)*plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001408b55c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,puVar4,0);
  return;
}



// FUNCTION 1408b55d0 ShutdownModule body=70 status=ok
// SIG undefined ShutdownModule(void)

void FDatasmithContentModule::ShutdownModule(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1415c3d50();
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001408b55f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined8 *)(param_1 + 8),0,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001408b5612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,&DAT_143f3eda8,0,1);
  return;
}



// FUNCTION 1408b5620 FUN_1408b5620 body=72 status=ok
// SIG undefined FUN_1408b5620(void)

undefined8 * FUN_1408b5620(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1408b56b0 FDatasmithMeshSectionInfoTemplate body=10 status=ok
// SIG undefined FDatasmithMeshSectionInfoTemplate(void)

undefined4 *
FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1408b56c0 FUN_1408b56c0 body=263 status=ok
// SIG undefined FUN_1408b56c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_1408b56c0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auStack_638 [32];
  undefined1 local_618 [1496];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_638;
  param_1[0xb] = 0x3f800000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar5 = (uint *)FUN_142741540(local_618);
  *param_1 = *param_1 ^ (*puVar5 ^ *param_1) & 1;
  param_1[1] = puVar5[7];
  uVar6 = (puVar5[3] ^ *param_1) & 4 ^ *param_1;
  *param_1 = uVar6;
  param_1[2] = puVar5[0x104];
  uVar6 = (*puVar5 >> 0x17 ^ uVar6) & 8 ^ uVar6;
  *param_1 = uVar6;
  uVar4 = *(undefined8 *)(puVar5 + 0x6a);
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(puVar5 + 0x68);
  *(undefined8 *)(param_1 + 5) = uVar4;
  uVar6 = (*puVar5 >> 1 ^ uVar6) & 2 ^ uVar6;
  *param_1 = uVar6;
  uVar1 = puVar5[0xd];
  uVar2 = puVar5[0xe];
  uVar3 = puVar5[0xf];
  param_1[8] = puVar5[0xc];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  *param_1 = (puVar5[2] >> 10 ^ uVar6) & 0x10 ^ uVar6;
  *(char *)(param_1 + 0xc) = (char)puVar5[0xcf];
  *param_1 = *param_1 ^ (puVar5[2] >> 8 ^ *param_1) & 0x20;
  param_1[0xd] = puVar5[0xc9];
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1408b57e0 FDatasmithStaticMaterialTemplate body=56 status=ok
// SIG undefined FDatasmithStaticMaterialTemplate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FDatasmithStaticMaterialTemplate::FDatasmithStaticMaterialTemplate(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1408b5830 UDatasmithImportOptions body=112 status=ok
// SIG undefined UDatasmithImportOptions(void)

undefined8 * UDatasmithImportOptions::UDatasmithImportOptions(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144121be0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 7) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0x1010302;
  param_1[10] = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0xb) = 0x41a00000;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 1408b58a0 FUN_1408b58a0 body=44 status=ok
// SIG undefined FUN_1408b58a0(void)

undefined8 * FUN_1408b58a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *param_1 = &PTR_FUN_1441220e8;
  return param_1;
}



// FUNCTION 1408b58d0 FUN_1408b58d0 body=71 status=ok
// SIG undefined FUN_1408b58d0(void)

undefined8 * FUN_1408b58d0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *param_1 = &PTR_FUN_144122378;
  plVar2 = (longlong *)UFGSoundSplineComponent::GetPrivateStaticClass();
  if (plVar2[0x1f] == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
  }
  return param_1;
}



// FUNCTION 1408b5920 FUN_1408b5920 body=71 status=ok
// SIG undefined FUN_1408b5920(void)

undefined8 * FUN_1408b5920(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *param_1 = &PTR_FUN_144122608;
  plVar2 = (longlong *)UAtmosphericFogComponent::GetPrivateStaticClass();
  if (plVar2[0x1f] == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
  }
  return param_1;
}



// FUNCTION 1408b5970 FUN_1408b5970 body=71 status=ok
// SIG undefined FUN_1408b5970(void)

undefined8 * FUN_1408b5970(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *param_1 = &PTR_FUN_144122898;
  plVar2 = (longlong *)UPhysicsConstraintComponent::GetPrivateStaticClass();
  if (plVar2[0x1f] == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
  }
  return param_1;
}



// FUNCTION 1408b59c0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneByteTrack::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1408b5a20 FUN_1408b5a20 body=52 status=ok
// SIG undefined FUN_1408b5a20(void)

undefined8 FUN_1408b5a20(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1408b5a60 Equals body=702 status=ok
// SIG undefined Equals(void)

ulonglong FDatasmithMeshSectionInfoMapTemplate::Equals(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  bool bVar13;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong *plVar5;
  
  bVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) ==
           (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  if (!bVar13) {
    return (ulonglong)bVar13;
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar3 = *(uint *)(param_1 + 5);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (uVar3 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar12 = *puVar11;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar12 == 0) {
      lVar4 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar7 = local_78 + 1;
      bVar2 = (int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= local_78;
      local_78 = iVar7;
      if (bVar2) goto LAB_1408b5b4a;
      uVar12 = puVar11[lVar4 + 1];
    }
    uStack_74 = -uVar12 & uVar12;
    iVar7 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_68._4_4_ = (uStack_60 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)local_68._4_4_) {
LAB_1408b5b4a:
      local_68._4_4_ = uVar3;
    }
  }
  uVar12 = *(uint *)(param_1 + 5);
  uStack_48 = CONCAT44(uStack_74,local_78);
  uStack_38 = CONCAT44(local_68._4_4_,0xffffffff);
  local_58 = CONCAT44(uStack_5c,uStack_60);
  uVar8 = uVar12 & 0xffffffe0;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  uStack_60 = 0xffffffff;
  uStack_5c = local_68._4_4_;
  local_50 = param_1;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  local_68 = puVar1;
  if (uVar12 != uVar3) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar10 = puVar11[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar7 = (int)uVar12 >> 5;
    while (uVar10 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar7) goto LAB_1408b5c06;
      uVar10 = puVar11[(longlong)iVar7 + 1];
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
    uVar12 = (uVar8 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uVar12) {
LAB_1408b5c06:
      uVar12 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_5c == uVar12) && (local_68 == puVar1)) {
      return (ulonglong)bVar13;
    }
    puVar11 = (uint *)((longlong)(int)uStack_5c * 0x10 + *param_1);
    plVar5 = param_1;
    if ((bVar13 == false) ||
       (uVar3 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34),
       plVar5 = (longlong *)(ulonglong)uVar3, uVar3 == 0)) break;
    uVar3 = *puVar11;
    plVar5 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar5 = param_2 + 7;
    }
    uVar8 = *(uint *)((longlong)plVar5 + ((longlong)(int)param_2[9] - 1U & (longlong)(int)uVar3) * 4
                     );
    plVar5 = (longlong *)(ulonglong)uVar8;
    if (uVar8 == 0xffffffff) break;
    lVar4 = *param_2;
    uVar10 = uVar8;
    while (*(uint *)(lVar4 + (longlong)(int)uVar10 * 0x10) != uVar3) {
      uVar10 = *(uint *)(lVar4 + 8 + (longlong)(int)uVar10 * 0x10);
      if (uVar10 == 0xffffffff) goto LAB_1408b5c9a;
    }
    if (uVar10 == 0xffffffff) break;
    while (uVar8 != 0xffffffff) {
      puVar9 = (uint *)((longlong)(int)plVar5 * 0x10 + lVar4);
      if (*puVar9 == uVar3) {
        if ((int)plVar5 != -1) goto LAB_1408b5ce1;
        break;
      }
      uVar8 = puVar9[2];
      plVar5 = (longlong *)(ulonglong)uVar8;
    }
    puVar9 = (uint *)0x0;
LAB_1408b5ce1:
    puVar6 = puVar9 + 1;
    if (puVar9 == (uint *)0x0) {
      puVar6 = (uint *)0x0;
    }
    plVar5 = (longlong *)(ulonglong)*puVar6;
    if (puVar11[1] != *puVar6) break;
    bVar13 = true;
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
LAB_1408b5c9a:
  return (ulonglong)plVar5 & 0xffffffffffffff00;
}



// FUNCTION 1408b5d20 Equals body=303 status=ok
// SIG undefined Equals(void)

ulonglong UDatasmithAreaLightActorTemplate::Equals(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if (((char)in_RAX != '\0') &&
       (in_RAX = 0, *(char *)(param_1 + 0x28) == *(char *)(param_2 + 0x28))) {
      if ((0.0001 < ABS(*(float *)(param_1 + 0x2c) - *(float *)(param_2 + 0x2c))) ||
         (0.0001 < ABS(*(float *)(param_1 + 0x30) - *(float *)(param_2 + 0x30)))) {
        in_RAX = 0;
      }
      else {
        in_RAX = 1;
      }
      if ((char)in_RAX != '\0') {
        if ((((0.0001 <= ABS(*(float *)(param_1 + 0x34) - *(float *)(param_2 + 0x34))) ||
             (0.0001 <= ABS(*(float *)(param_1 + 0x38) - *(float *)(param_2 + 0x38)))) ||
            (0.0001 <= ABS(*(float *)(param_1 + 0x3c) - *(float *)(param_2 + 0x3c)))) ||
           (0.0001 <= ABS(*(float *)(param_1 + 0x40) - *(float *)(param_2 + 0x40)))) {
          in_RAX = 0;
        }
        else {
          in_RAX = 1;
        }
        if ((((char)in_RAX != '\0') &&
            (ABS(*(float *)(param_1 + 0x44) - *(float *)(param_2 + 0x44)) <= 1e-08)) &&
           (in_RAX = 0, ((*(byte *)(param_2 + 0x48) ^ *(byte *)(param_1 + 0x48)) & 1) == 0)) {
          return 1;
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1408b5e50 FUN_1408b5e50 body=233 status=ok
// SIG undefined FUN_1408b5e50(void)

ulonglong FUN_1408b5e50(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = UDatasmithPostProcessVolumeTemplate::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if (((((char)in_RAX != '\0') &&
         (ABS(*(float *)(param_1 + 0x38) - *(float *)(param_2 + 0x38)) <= 1e-08)) &&
        (ABS(*(float *)(param_1 + 0x3c) - *(float *)(param_2 + 0x3c)) <= 1e-08)) &&
       (((ABS(*(float *)(param_1 + 0x28) - *(float *)(param_2 + 0x28)) <= 1e-08 &&
         (ABS(*(float *)(param_1 + 0x2c) - *(float *)(param_2 + 0x2c)) <= 1e-08)) &&
        ((ABS(*(float *)(param_1 + 0x30) - *(float *)(param_2 + 0x30)) <= 1e-08 &&
         (ABS(*(float *)(param_1 + 0x34) - *(float *)(param_2 + 0x34)) <= 1e-08)))))) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1408b5f40 Equals body=331 status=ok
// SIG undefined Equals(void)

ulonglong UDatasmithLightComponentTemplate::Equals(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint3 uVar4;
  uint uVar5;
  ulonglong in_RAX;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_2 != 0) {
    lVar6 = GetPrivateStaticClass();
    iVar1 = *(int *)(lVar6 + 0x90);
    uVar7 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar7 + (longlong)iVar1 * 8) != lVar6 + 0x88)) {
      in_RAX = uVar7 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar7 >> 8),1);
    }
    if ((((char)in_RAX != '\0') &&
        (in_RAX = 0, ((*(byte *)(param_2 + 0x28) ^ *(byte *)(param_1 + 0x28)) & 1) == 0)) &&
       (ABS(*(float *)(param_1 + 0x30) - *(float *)(param_2 + 0x30)) <= 1e-08)) {
      uVar2 = *(uint *)(param_2 + 0x2c);
      uVar3 = *(uint *)(param_1 + 0x2c);
      uVar5 = uVar2 ^ uVar3;
      in_RAX = (ulonglong)uVar5;
      if ((uVar5 & 1) == 0) {
        uVar4 = (uint3)(uVar5 >> 8);
        if (((0.0001 <= ABS(*(float *)(param_1 + 0x3c) - *(float *)(param_2 + 0x3c))) ||
            (0.0001 <= ABS(*(float *)(param_1 + 0x40) - *(float *)(param_2 + 0x40)))) ||
           ((0.0001 <= ABS(*(float *)(param_1 + 0x44) - *(float *)(param_2 + 0x44)) ||
            (0.0001 <= ABS(*(float *)(param_1 + 0x48) - *(float *)(param_2 + 0x48)))))) {
          in_RAX = (ulonglong)uVar4 << 8;
        }
        else {
          in_RAX = CONCAT71((uint7)uVar4,1);
        }
        if (((char)in_RAX != '\0') &&
           (in_RAX = *(ulonglong *)(param_2 + 0x50), *(ulonglong *)(param_1 + 0x50) == in_RAX)) {
          uVar5 = uVar2 ^ uVar3;
          in_RAX = (ulonglong)uVar5;
          if (((uVar5 & 2) == 0) &&
             (((ABS(*(float *)(param_1 + 0x34) - *(float *)(param_2 + 0x34)) <= 1e-08 &&
               (((uVar2 ^ uVar3) & 4) == 0)) &&
              (ABS(*(float *)(param_1 + 0x38) - *(float *)(param_2 + 0x38)) <= 1e-08)))) {
            return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1408b6090 Equals body=184 status=ok
// SIG undefined Equals(void)

ulonglong UDatasmithPointLightComponentTemplate::Equals(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if (((((char)in_RAX != '\0') &&
         (in_RAX = 0, *(char *)(param_1 + 0x28) == *(char *)(param_2 + 0x28))) &&
        (ABS(*(float *)(param_1 + 0x2c) - *(float *)(param_2 + 0x2c)) <= 1e-08)) &&
       ((ABS(*(float *)(param_1 + 0x30) - *(float *)(param_2 + 0x30)) <= 1e-08 &&
        (ABS(*(float *)(param_1 + 0x34) - *(float *)(param_2 + 0x34)) <= 1e-08)))) {
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1408b6150 FUN_1408b6150 body=301 status=ok
// SIG undefined FUN_1408b6150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1408b6150(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  ulonglong in_RAX;
  longlong lVar6;
  undefined4 uVar8;
  ulonglong uVar7;
  
  if (param_2 == 0) goto LAB_1408b6270;
  lVar6 = UDatasmithGLTFSceneImportData::StaticClass();
  iVar5 = *(int *)(lVar6 + 0x90);
  uVar7 = (longlong)iVar5;
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar5) ||
     (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
     *(longlong *)(uVar7 + (longlong)iVar5 * 8) != lVar6 + 0x88)) {
    in_RAX = uVar7 & 0xffffffffffffff00;
  }
  else {
    in_RAX = CONCAT71((int7)(uVar7 >> 8),1);
  }
  if ((char)in_RAX == '\0') goto LAB_1408b6270;
  uVar8 = (undefined4)(in_RAX >> 0x20);
  auVar1._4_4_ = -(uint)(0.015 < (float)((uint)(*(float *)(param_1 + 0x44) -
                                               *(float *)(param_2 + 0x44)) & uRam0000000146860fe4));
  auVar1._0_4_ = -(uint)(0.015 < (float)((uint)(*(float *)(param_1 + 0x40) -
                                               *(float *)(param_2 + 0x40)) & _DAT_146860fe0));
  auVar1._8_4_ = -(uint)(0.015 < (float)((uint)(*(float *)(param_1 + 0x48) -
                                               *(float *)(param_2 + 0x48)) & uRam0000000146860fe8));
  auVar1._12_4_ =
       -(uint)(0.015 < (float)((uint)(*(float *)(param_1 + 0x4c) - *(float *)(param_2 + 0x4c)) &
                              uRam0000000146860fec));
  iVar5 = movmskps((int)in_RAX,auVar1);
  in_RAX = CONCAT44(uVar8,iVar5);
  if (iVar5 != 0) goto LAB_1408b6270;
  auVar2._4_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(param_1 + 0x34) -
                                                *(float *)(param_2 + 0x34)) & uRam0000000146860fe4))
  ;
  auVar2._0_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(param_1 + 0x30) -
                                                *(float *)(param_2 + 0x30)) & _DAT_146860fe0));
  auVar2._8_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(param_1 + 0x38) -
                                                *(float *)(param_2 + 0x38)) & uRam0000000146860fe8))
  ;
  auVar2._12_4_ =
       -(uint)(0.0001 < (float)((uint)(*(float *)(param_1 + 0x3c) - *(float *)(param_2 + 0x3c)) &
                               uRam0000000146860fec));
  iVar5 = movmskps(0,auVar2);
  uVar7 = CONCAT44(uVar8,iVar5);
  if (iVar5 == 0) {
LAB_1408b6222:
    in_RAX = CONCAT71((int7)(uVar7 >> 8),1);
  }
  else {
    auVar4._4_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(param_2 + 0x34) +
                                                  *(float *)(param_1 + 0x34)) & uRam0000000146860fe4
                                           ));
    auVar4._0_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(param_2 + 0x30) +
                                                  *(float *)(param_1 + 0x30)) & _DAT_146860fe0));
    auVar4._8_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(param_2 + 0x38) +
                                                  *(float *)(param_1 + 0x38)) & uRam0000000146860fe8
                                           ));
    auVar4._12_4_ =
         -(uint)(0.0001 < (float)((uint)(*(float *)(param_2 + 0x3c) + *(float *)(param_1 + 0x3c)) &
                                 uRam0000000146860fec));
    iVar5 = movmskps(iVar5,auVar4);
    uVar7 = CONCAT44(uVar8,iVar5);
    if (iVar5 == 0) goto LAB_1408b6222;
    in_RAX = uVar7 & 0xffffffffffffff00;
  }
  if ((char)in_RAX != '\0') {
    auVar3._4_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(param_1 + 0x54) -
                                                  *(float *)(param_2 + 0x54)) & uRam0000000146860fe4
                                           ));
    auVar3._0_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(param_1 + 0x50) -
                                                  *(float *)(param_2 + 0x50)) & _DAT_146860fe0));
    auVar3._8_4_ = -(uint)(0.0001 < (float)((uint)(*(float *)(param_1 + 0x58) -
                                                  *(float *)(param_2 + 0x58)) & uRam0000000146860fe8
                                           ));
    auVar3._12_4_ =
         -(uint)(0.0001 < (float)((uint)(*(float *)(param_1 + 0x5c) - *(float *)(param_2 + 0x5c)) &
                                 uRam0000000146860fec));
    iVar5 = movmskps((int)in_RAX,auVar3);
    in_RAX = CONCAT44((int)(in_RAX >> 0x20),iVar5);
    if (((iVar5 == 0) && (in_RAX = 0, *(char *)(param_1 + 0x60) == *(char *)(param_2 + 0x60))) &&
       (in_RAX = *(ulonglong *)(param_2 + 0x68), *(ulonglong *)(param_1 + 0x68) == in_RAX)) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
LAB_1408b6270:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1408b6280 Equals body=128 status=ok
// SIG undefined Equals(void)

ulonglong UDatasmithSkyLightComponentTemplate::Equals(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if (((((char)in_RAX != '\0') &&
         (in_RAX = 0, *(char *)(param_1 + 0x28) == *(char *)(param_2 + 0x28))) &&
        (in_RAX = (ulonglong)*(uint *)(param_2 + 0x2c),
        *(uint *)(param_1 + 0x2c) == *(uint *)(param_2 + 0x2c))) &&
       (in_RAX = *(ulonglong *)(param_2 + 0x30), *(ulonglong *)(param_1 + 0x30) == in_RAX)) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1408b6300 Equals body=153 status=ok
// SIG undefined Equals(void)

ulonglong UDatasmithSpotLightComponentTemplate::Equals(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((((char)in_RAX != '\0') &&
        (ABS(*(float *)(param_1 + 0x28) - *(float *)(param_2 + 0x28)) <= 1e-08)) &&
       (ABS(*(float *)(param_1 + 0x2c) - *(float *)(param_2 + 0x2c)) <= 1e-08)) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1408b63a0 FUN_1408b63a0 body=160 status=ok
// SIG undefined FUN_1408b63a0(void)

ulonglong FUN_1408b63a0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  
  if (param_2 == 0) goto LAB_1408b6433;
  lVar2 = UDatasmithCineCameraComponentTemplate::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
     (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
    in_RAX = uVar3 & 0xffffffffffffff00;
  }
  else {
    in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
  }
  if (((char)in_RAX == '\0') ||
     (in_RAX = *(ulonglong *)(param_2 + 0x70), *(ulonglong *)(param_1 + 0x70) != in_RAX))
  goto LAB_1408b6433;
  uVar3 = (ulonglong)*(int *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x80) == *(int *)(param_2 + 0x80)) {
    iVar1 = _guard_xfg_dispatch_icall_nop
                      (*(void **)(param_1 + 0x78),*(void **)(param_2 + 0x78),uVar3 << 3);
    uVar3 = CONCAT44(extraout_var,iVar1);
    if (iVar1 != 0) goto LAB_1408b6420;
    in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else {
LAB_1408b6420:
    in_RAX = uVar3 & 0xffffffffffffff00;
  }
  if ((char)in_RAX != '\0') {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_1408b6433:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1408b6440 Equals body=491 status=ok
// SIG undefined Equals(void)

ulonglong UDatasmithStaticMeshTemplate::Equals(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  ulonglong in_RAX;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  longlong lVar9;
  byte *pbVar10;
  uint *puVar11;
  longlong lVar12;
  
  if (param_2 != 0) {
    lVar5 = GetPrivateStaticClass();
    iVar3 = *(int *)(lVar5 + 0x90);
    uVar6 = (longlong)iVar3;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar3) ||
       (uVar6 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar6 + (longlong)iVar3 * 8) != lVar5 + 0x88)) {
      in_RAX = uVar6 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar6 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      if (((*(int *)(param_1 + 0x78) == *(int *)(param_2 + 0x78)) &&
          (*(int *)(param_1 + 0x7c) == *(int *)(param_2 + 0x7c))) &&
         (cVar4 = FDatasmithMeshSectionInfoMapTemplate::Equals(param_1 + 0x28,param_2 + 0x28),
         cVar4 != '\0')) {
        iVar3 = *(int *)(param_1 + 0x88);
        if (iVar3 == *(int *)(param_2 + 0x88)) {
          lVar5 = 0;
          if (0 < iVar3) {
            pbVar10 = *(byte **)(param_1 + 0x80);
            puVar11 = (uint *)(*(longlong *)(param_2 + 0x80) + 8);
            lVar9 = *(longlong *)(param_2 + 0x80) - (longlong)pbVar10;
            lVar12 = lVar5;
            do {
              bVar1 = pbVar10[lVar9];
              bVar2 = *pbVar10;
              in_RAX = 0;
              if (((((((bVar1 ^ bVar2) & 1) != 0) || (in_RAX = 0, ((bVar1 ^ bVar2) & 2) != 0)) ||
                   ((in_RAX = 0, ((bVar1 ^ bVar2) & 4) != 0 ||
                    ((in_RAX = 0, ((bVar1 ^ bVar2) & 8) != 0 ||
                     (in_RAX = 0, ((bVar1 ^ bVar2) & 0x10) != 0)))))) ||
                  (in_RAX = 0, ((bVar1 ^ bVar2) & 0x20) != 0)) ||
                 ((((in_RAX = 0, ((bVar1 ^ bVar2) & 0x40) != 0 || ((char)(bVar1 ^ bVar2) < '\0')) ||
                   (in_RAX = (ulonglong)puVar11[-1], *(uint *)(pbVar10 + 4) != puVar11[-1])) ||
                  ((in_RAX = (ulonglong)*puVar11, *(uint *)(pbVar10 + 8) != *puVar11 ||
                   (in_RAX = (ulonglong)puVar11[1], *(uint *)(pbVar10 + 0xc) != puVar11[1]))))))
              goto LAB_1408b6614;
              lVar12 = lVar12 + 1;
              puVar11 = puVar11 + 4;
              pbVar10 = pbVar10 + 0x10;
            } while (lVar12 < iVar3);
          }
          iVar3 = *(int *)(param_1 + 0x98);
          if (iVar3 == *(int *)(param_2 + 0x98)) {
            if (iVar3 < 1) {
              return 1;
            }
            puVar7 = *(ulonglong **)(param_1 + 0x90);
            puVar8 = (ulonglong *)(*(longlong *)(param_2 + 0x90) + 8);
            lVar12 = *(longlong *)(param_2 + 0x90) - (longlong)puVar7;
            while ((in_RAX = *(ulonglong *)(lVar12 + (longlong)puVar7), *puVar7 == in_RAX &&
                   (in_RAX = *puVar8, puVar7[1] == in_RAX))) {
              lVar5 = lVar5 + 1;
              puVar8 = puVar8 + 2;
              puVar7 = puVar7 + 2;
              if (iVar3 <= lVar5) {
                return 1;
              }
            }
            goto LAB_1408b6614;
          }
        }
      }
      return 0;
    }
  }
LAB_1408b6614:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1408b6630 FUN_1408b6630 body=203 status=ok
// SIG undefined FUN_1408b6630(void)

longlong FUN_1408b6630(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = FUN_1428dfc70();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    param_1 = *(longlong *)(param_1 + 0x168);
  }
  if (param_1 != 0) {
    uVar3 = UInterface_AssetUserData::GetPrivateStaticClass();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar3);
    if (plVar4 == (longlong *)0x0) {
      return 0;
    }
    uVar3 = UDatasmithAssetUserData::GetPrivateStaticClass();
    lVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,uVar3);
    if (lVar2 != 0) {
      lVar5 = UDatasmithAssetUserData::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
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
  return 0;
}



// FUNCTION 1408b6700 GetDatasmithUserDataKeysAndValuesForValue body=801 status=ok
// SIG undefined GetDatasmithUserDataKeysAndValuesForValue(void)

void UDatasmithContentBlueprintLibrary::GetDatasmithUserDataKeysAndValuesForValue
               (longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if ((*(int *)((longlong)param_3 + 0xc) < 0) && (*(int *)((longlong)param_3 + 0xc) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  iVar7 = *(int *)((longlong)param_4 + 0xc);
  plVar11 = (longlong *)*param_4;
  iVar13 = (int)param_4[1];
  if (iVar7 < 0) {
    if (iVar13 != 0) {
      do {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      iVar7 = *(int *)((longlong)param_4 + 0xc);
    }
    *(undefined4 *)(param_4 + 1) = 0;
    if (iVar7 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_4,0);
    }
  }
  else {
    for (; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    *(undefined4 *)(param_4 + 1) = 0;
  }
  if ((param_1 != 0) && (lVar6 = FUN_1408b6630(param_1), lVar6 != 0)) {
    plVar11 = (longlong *)(lVar6 + 0x28);
    uVar3 = *(uint *)(lVar6 + 0x50);
    puVar1 = (uint *)(lVar6 + 0x38);
    local_a8 = 0;
    uStack_a4 = 1;
    uStack_94 = 0;
    iStack_90 = 0;
    if (uVar3 != 0) {
      puVar15 = *(uint **)(lVar6 + 0x48);
      if (*(uint **)(lVar6 + 0x48) == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar4 = *puVar15;
      iStack_90 = 0;
      local_a8 = 0;
      while (uVar4 == 0) {
        lVar9 = (longlong)local_a8;
        iStack_90 = iStack_90 + 0x20;
        iVar7 = local_a8 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
        local_a8 = iVar7;
        if (bVar5) goto LAB_1408b686c;
        uVar4 = puVar15[lVar9 + 1];
      }
      uStack_a4 = -uVar4 & uVar4;
      iVar7 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_94 = (iStack_90 - iVar7) + 0x1f;
      if ((int)uVar3 < (int)uStack_94) {
LAB_1408b686c:
        uStack_94 = uVar3;
      }
    }
    uVar4 = *(uint *)(lVar6 + 0x50);
    uStack_70 = 0xffffffff;
    uStack_6c = uStack_94;
    local_68 = CONCAT44(uStack_8c,iStack_90);
    uStack_58 = CONCAT44(uStack_a4,local_a8);
    uVar14 = uVar4 & 0xffffffe0;
    iStack_80 = local_a8;
    uStack_7c = uStack_a4;
    local_78 = puVar1;
    local_60 = plVar11;
    puStack_50 = puVar1;
    uStack_40 = local_68;
    uStack_48 = uStack_70;
    uStack_44 = uStack_6c;
    uStack_94 = uVar4;
    if (uVar4 != uVar3) {
      puVar15 = *(uint **)(lVar6 + 0x48);
      if (*(uint **)(lVar6 + 0x48) == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar8 = puVar15[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar7 = (int)uVar4 >> 5;
      while (uVar8 == 0) {
        uVar14 = uVar14 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_1408b6932;
        uVar8 = puVar15[(longlong)iVar7 + 1];
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
      uStack_94 = (uVar14 - iVar7) + 0x1f;
      if ((int)uVar3 < (int)uStack_94) {
LAB_1408b6932:
        uStack_94 = uVar3;
      }
    }
    while ((uStack_6c != uStack_94 || (local_78 != puVar1))) {
      puVar12 = (undefined8 *)((longlong)(int)uStack_6c * 0x20 + *plVar11);
      if (*(int *)(param_2 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*param_2;
      }
      puVar2 = puVar12 + 1;
      iVar7 = FUN_141592950(puVar2,puVar10,1,0,0xffffffff);
      if (iVar7 != -1) {
        iVar7 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar7 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar7);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar7 * 8) = *puVar12;
        iVar7 = (int)param_4[1];
        *(int *)(param_4 + 1) = iVar7 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar7);
        }
        FString::FString((longlong)iVar7 * 0x10 + *param_4,puVar2);
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
    }
  }
  return;
}



// FUNCTION 1408b6a30 GetDatasmithUserDataValueForKey body=397 status=ok
// SIG undefined GetDatasmithUserDataValueForKey(void)

undefined8 *
UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValueForKey
          (undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_38;
  int local_30;
  undefined4 local_2c;
  longlong *local_28;
  undefined8 local_20;
  
  plVar11 = (longlong *)0x0;
  if ((param_2 == 0) || (lVar5 = FUN_1408b6630(param_2), lVar5 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (*(int *)(lVar5 + 0x30) != *(int *)(lVar5 + 0x5c)) {
      lVar6 = *(longlong *)(lVar5 + 0x68);
      if (*(longlong *)(lVar5 + 0x68) == 0) {
        lVar6 = lVar5 + 0x60;
      }
      iVar4 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                               (longlong)*(int *)(lVar5 + 0x70) - 1U) * 4);
      if (iVar4 != -1) {
        do {
          plVar9 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar5 + 0x28));
          if (*plVar9 == param_3) {
            if (iVar4 != -1) goto LAB_1408b6ad1;
            break;
          }
          iVar4 = (int)plVar9[3];
        } while (iVar4 != -1);
      }
    }
    plVar9 = plVar11;
LAB_1408b6ad1:
    plVar10 = (longlong *)0x0;
    plVar7 = plVar9 + 1;
    if (plVar9 == (longlong *)0x0) {
      plVar7 = plVar11;
    }
    if (plVar7 == (longlong *)0x0) {
      local_20 = 0;
      pplVar8 = &local_28;
      bVar3 = false;
      bVar2 = true;
    }
    else {
      iVar4 = (int)plVar7[1];
      _Src = (void *)*plVar7;
      local_38 = (longlong *)0x0;
      local_30 = iVar4;
      if (iVar4 == 0) {
        pplVar8 = &local_38;
        local_2c = 0;
        bVar3 = true;
        bVar2 = false;
        plVar10 = plVar11;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar4,0);
        plVar10 = local_38;
        ::_guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar4 * 2);
        pplVar8 = &local_38;
        bVar3 = true;
        bVar2 = false;
      }
    }
    *pplVar8 = (longlong *)0x0;
    uVar1 = *(undefined4 *)(pplVar8 + 1);
    *param_1 = plVar10;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)pplVar8 + 0xc);
    pplVar8[1] = (longlong *)0x0;
    if ((bVar2) && (local_28 != (longlong *)0x0)) {
      FMemory::Free();
    }
    if ((bVar3) && (local_38 != (longlong *)0x0)) {
      FMemory::Free();
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1408b6bc0 FUN_1408b6bc0 body=55 status=ok
// SIG undefined FUN_1408b6bc0(void)

undefined8 * FUN_1408b6bc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144121b50;
    puVar1[1] = 0;
    puVar1[2] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1408b6c00 Serialize body=77 status=ok
// SIG undefined Serialize(void)

void UDatasmithScene::Serialize(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_res18 [16];
  
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0078);
  iVar1 = FArchive::CustomVer(param_2,&DAT_1464b0078);
  if (0 < iVar1) {
    FUN_14242a0d0(local_res18,param_2,0,0xd6);
  }
  return;
}



// FUNCTION 1408b6c50 FUN_1408b6c50 body=47 status=ok
// SIG undefined FUN_1408b6c50(void)

longlong FUN_1408b6c50(void)

{
  if (DAT_146861190 == 0) {
    FUN_141786440(&DAT_146861190,&PTR_GetPrivateStaticClass_144122d10);
  }
  return DAT_146861190;
}



// FUNCTION 1408b6c80 FUN_1408b6c80 body=47 status=ok
// SIG undefined FUN_1408b6c80(void)

longlong FUN_1408b6c80(void)

{
  if (DAT_146861178 == 0) {
    FUN_141786a30(&DAT_146861178,&PTR_FUN_14627bd80);
  }
  return DAT_146861178;
}



// FUNCTION 1408b6cb0 FUN_1408b6cb0 body=47 status=ok
// SIG undefined FUN_1408b6cb0(void)

longlong FUN_1408b6cb0(void)

{
  if (DAT_146861180 == 0) {
    FUN_141786a30(&DAT_146861180,&PTR_FUN_14627be70);
  }
  return DAT_146861180;
}



// FUNCTION 1408b6ce0 FUN_1408b6ce0 body=47 status=ok
// SIG undefined FUN_1408b6ce0(void)

longlong FUN_1408b6ce0(void)

{
  if (DAT_146861188 == 0) {
    FUN_141786a30(&DAT_146861188,&PTR_FUN_14627bf50);
  }
  return DAT_146861188;
}



// FUNCTION 1408b6d30 FUN_1408b6d30 body=53 status=ok
// SIG undefined FUN_1408b6d30(void)

void FUN_1408b6d30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_14412a590;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b6d70 FUN_1408b6d70 body=53 status=ok
// SIG undefined FUN_1408b6d70(void)

void FUN_1408b6d70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_14412a6a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1408b6db0 FUN_1408b6db0 body=53 status=ok
// SIG undefined FUN_1408b6db0(void)

void FUN_1408b6db0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_144129020;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1408b6df0 FUN_1408b6df0 body=53 status=ok
// SIG undefined FUN_1408b6df0(void)

void FUN_1408b6df0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_14412a7c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b6e30 FUN_1408b6e30 body=53 status=ok
// SIG undefined FUN_1408b6e30(void)

void FUN_1408b6e30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144129138;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408b6e70 FUN_1408b6e70 body=53 status=ok
// SIG undefined FUN_1408b6e70(void)

void FUN_1408b6e70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_14412a8d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1408b6eb0 FUN_1408b6eb0 body=53 status=ok
// SIG undefined FUN_1408b6eb0(void)

void FUN_1408b6eb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &PTR_FUN_144129250;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 1408b6ef0 FUN_1408b6ef0 body=53 status=ok
// SIG undefined FUN_1408b6ef0(void)

void FUN_1408b6ef0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_144129368;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 1408b6f50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDatasmithLightComponentTemplate::GetPrivateStaticClass(void)

{
  if (DAT_146861248 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithLightComponentTemplate",&DAT_146861248,
                  FUN_140447710,0x60,0x10000000,0,L"Engine",&LAB_1408b8470,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDatasmithObjectTemplate::StaticClass,&LAB_140447700,0);
  }
  return DAT_146861248;
}



// FUNCTION 1408b7000 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayerState::GetPrivateStaticClass(void)

{
  if (DAT_1468610a8 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithAreaLightActor",&DAT_1468610a8,
                  FUN_140447710,0x478,0x10000000,0,L"Engine",FUN_1408b82c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_1468610a8;
}



// FUNCTION 1408b70b0 FUN_1408b70b0 body=47 status=ok
// SIG undefined FUN_1408b70b0(void)

longlong FUN_1408b70b0(void)

{
  if (DAT_146861170 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146861170,&PTR_s__Script_DatasmithContent_144128dd0);
  }
  return DAT_146861170;
}



// FUNCTION 1408b7100 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDatasmithAssetUserData::GetPrivateStaticClass(void)

{
  if (DAT_146861118 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithAssetUserData",&DAT_146861118,FUN_140447710
                  ,0x78,0x10000000,0,L"Engine",InternalConstructor<UDatasmithAssetUserData>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAssetUserData::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146861118;
}



// FUNCTION 1408b71c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDatasmithPointLightComponentTemplate::GetPrivateStaticClass(void)

{
  if (DAT_146861268 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithPointLightComponentTemplate",&DAT_146861268
                  ,FUN_140447710,0x38,0x10000000,0,L"Engine",&LAB_1408b84b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDatasmithObjectTemplate::StaticClass,&LAB_140447700,0);
  }
  return DAT_146861268;
}



// FUNCTION 1408b7270 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UDatasmithObjectTemplate::StaticClass(void)

{
  if (DAT_146861258 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithObjectTemplate",&DAT_146861258,
                  FUN_140447710,0x28,0x10000001,0,L"Engine",FUN_1408b8480,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146861258;
}



// FUNCTION 1408b7320 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDatasmithAreaLightActorTemplate::GetPrivateStaticClass(void)

{
  if (DAT_1468610b8 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithAreaLightActorTemplate",&DAT_1468610b8,
                  FUN_140447710,0x50,0x10000000,0,L"Engine",FUN_1408b8360,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDatasmithObjectTemplate::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468610b8;
}



// FUNCTION 1408b73d0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UDatasmithScene::StaticClass(void)

{
  if (DAT_146861278 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithScene",&DAT_146861278,FUN_140447710,0x28,
                  0x10000000,0,L"Engine",FUN_1408b84c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146861278;
}



// FUNCTION 1408b7470 FUN_1408b7470 body=47 status=ok
// SIG undefined FUN_1408b7470(void)

longlong FUN_1408b7470(void)

{
  if (DAT_146861250 == 0) {
    FUN_141786440(&DAT_146861250,&PTR_StaticClass_144125320);
  }
  return DAT_146861250;
}



// FUNCTION 1408b74c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AItem::GetPrivateStaticClass(void)

{
  if (DAT_146861288 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithSceneActor",&DAT_146861288,FUN_140447710,
                  0x4b0,0x10000000,0,L"Engine",FUN_1408b82f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146861288;
}



// FUNCTION 1408b7570 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UDatasmithImportOptions::StaticClass(void)

{
  if (DAT_146861238 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithImportOptions",&DAT_146861238,FUN_140447710
                  ,0x88,0x10000004,0,L"EditorPerProjectUserSettings",&LAB_1408b8450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146861238;
}



// FUNCTION 1408b7610 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UDatasmithAssetImportData::StaticClass(void)

{
  if (DAT_1468610c8 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithAssetImportData",&DAT_1468610c8,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_1408b8390,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAssetImportData::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468610c8;
}



// FUNCTION 1408b76c0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UDatasmithStaticMeshImportData::StaticClass(void)

{
  if (DAT_1468610d8 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithStaticMeshImportData",&DAT_1468610d8,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_1408b8390,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDatasmithAssetImportData::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468610d8;
}



// FUNCTION 1408b7770 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UDatasmithStaticMeshCADImportData::StaticClass(void)

{
  if (DAT_1468610e8 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithStaticMeshCADImportData",&DAT_1468610e8,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_1408b8570,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDatasmithStaticMeshImportData::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468610e8;
}



// FUNCTION 1408b7820 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UDatasmithSceneImportData::StaticClass(void)

{
  if (DAT_1468610f8 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithSceneImportData",&DAT_1468610f8,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_1408b8390,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAssetImportData::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468610f8;
}



// FUNCTION 1408b78d0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UDatasmithCADImportSceneData::StaticClass(void)

{
  if (DAT_146861108 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithCADImportSceneData",&DAT_146861108,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_1408b8390,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDatasmithSceneImportData::StaticClass,&LAB_140447700,0);
  }
  return DAT_146861108;
}



// FUNCTION 1408b7990 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UDatasmithGLTFSceneImportData::StaticClass(void)

{
  if (DAT_146861298 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithSceneComponentTemplate",&DAT_146861298,
                  FUN_140447710,0x70,0x10000000,0,L"Engine",FUN_1408b84f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDatasmithObjectTemplate::StaticClass,&LAB_140447700,0);
  }
  return DAT_146861298;
}



// FUNCTION 1408b7a40 FUN_1408b7a40 body=47 status=ok
// SIG undefined FUN_1408b7a40(void)

longlong FUN_1408b7a40(void)

{
  if (DAT_146861290 == 0) {
    FUN_141786440(&DAT_146861290,&PTR_StaticClass_144125b40);
  }
  return DAT_146861290;
}



// FUNCTION 1408b7a80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDatasmithSkyLightComponentTemplate::GetPrivateStaticClass(void)

{
  if (DAT_1468612a8 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithSkyLightComponentTemplate",&DAT_1468612a8,
                  FUN_140447710,0x38,0x10000000,0,L"Engine",&LAB_1408b8550,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDatasmithObjectTemplate::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468612a8;
}



// FUNCTION 1408b7b40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDatasmithSpotLightComponentTemplate::GetPrivateStaticClass(void)

{
  if (DAT_1468612b8 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithSpotLightComponentTemplate",&DAT_1468612b8,
                  FUN_140447710,0x30,0x10000000,0,L"Engine",&LAB_1408b8560,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDatasmithObjectTemplate::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468612b8;
}



// FUNCTION 1408b7c00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDatasmithCineCameraComponentTemplate::GetPrivateStaticClass(void)

{
  if (DAT_1468612c8 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithStaticMeshComponentTemplate",&DAT_1468612c8
                  ,FUN_140447710,0x90,0x10000000,0,L"Engine",FUN_1408b85a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDatasmithGLTFSceneImportData::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468612c8;
}



// FUNCTION 1408b7cb0 FUN_1408b7cb0 body=47 status=ok
// SIG undefined FUN_1408b7cb0(void)

longlong FUN_1408b7cb0(void)

{
  if (DAT_1468610c0 == 0) {
    FUN_141786440(&DAT_1468610c0,&PTR_StaticClass_1441260a0);
  }
  return DAT_1468610c0;
}



// FUNCTION 1408b7ce0 FUN_1408b7ce0 body=47 status=ok
// SIG undefined FUN_1408b7ce0(void)

longlong FUN_1408b7ce0(void)

{
  if (DAT_1468610d0 == 0) {
    FUN_141786440(&DAT_1468610d0,&PTR_StaticClass_1441262b0);
  }
  return DAT_1468610d0;
}



// FUNCTION 1408b7d10 FUN_1408b7d10 body=47 status=ok
// SIG undefined FUN_1408b7d10(void)

longlong FUN_1408b7d10(void)

{
  if (DAT_1468610f0 == 0) {
    FUN_141786440(&DAT_1468610f0,&PTR_StaticClass_144126720);
  }
  return DAT_1468610f0;
}



// FUNCTION 1408b7db0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDatasmithPostProcessVolumeTemplate::GetPrivateStaticClass(void)

{
  if (DAT_146861168 == 0) {
    FUN_14171ccd0(L"/Script/DatasmithContent",L"DatasmithCineCameraComponentTemplate",&DAT_146861168
                  ,FUN_140447710,0x80,0x10000000,0,L"Engine",FUN_1408b8410,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDatasmithObjectTemplate::StaticClass,&LAB_140447700,0);
  }
  return DAT_146861168;
}


