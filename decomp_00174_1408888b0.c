// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1408888b0 GetPolygonInGroup body=68 status=ok
// SIG undefined GetPolygonInGroup(void)

undefined4 *
UEditableMesh::GetPolygonInGroup(longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  
  if ((-1 < param_4) &&
     (plVar1 = (longlong *)
               ((longlong)param_3 * 0x10 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xe0)),
     param_4 < (int)plVar1[1])) {
    *param_2 = *(undefined4 *)(*plVar1 + (longlong)param_4 * 4);
    return param_2;
  }
  *param_2 = DAT_14652d64c;
  return param_2;
}



// FUNCTION 140888900 GetPolygonPerimeterEdge body=181 status=ok
// SIG undefined GetPolygonPerimeterEdge(void)

int * UEditableMesh::GetPolygonPerimeterEdge
                (longlong param_1,int *param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  plVar5 = (longlong *)((longlong)param_3 * 0x38 + *(longlong *)(lVar3 + 0xa8));
  iVar1 = (int)plVar5[1];
  if (iVar1 <= param_4) {
    *param_2 = DAT_14652d644;
    return param_2;
  }
  lVar4 = *plVar5;
  iVar2 = *(int *)(*(longlong *)(lVar3 + 0x38) +
                  (longlong)*(int *)(lVar4 + (longlong)param_4 * 4) * 0x18);
  FMeshDescription::GetVertexPairEdge
            (lVar3,param_2,iVar2,
             *(undefined4 *)
              (*(longlong *)(lVar3 + 0x38) +
              (longlong)*(int *)(lVar4 + (longlong)((param_4 + 1) % iVar1) * 4) * 0x18));
  if (*param_2 != DAT_14652d644) {
    *(bool *)param_5 =
         *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70) + (longlong)*param_2 * 0x18)
         == iVar2;
  }
  return param_2;
}



// FUNCTION 1408889c0 GetPolygonPerimeterEdgeCount body=23 status=ok
// SIG undefined GetPolygonPerimeterEdgeCount(void)

undefined4 UEditableMesh::GetPolygonPerimeterEdgeCount(longlong param_1,int param_2)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8) + 8 + (longlong)param_2 * 0x38);
}



// FUNCTION 1408889e0 GetPolygonPerimeterEdges body=332 status=ok
// SIG undefined GetPolygonPerimeterEdges(void)

void UEditableMesh::GetPolygonPerimeterEdges(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  longlong lVar15;
  
  plVar8 = *(longlong **)(param_1 + 0x28);
  iVar12 = (int)param_3[1];
  plVar11 = (longlong *)((longlong)param_2 * 0x38 + plVar8[0x15]);
  iVar3 = (int)plVar11[1];
  if (iVar12 < iVar3) {
    *(int *)(param_3 + 1) = iVar3;
    if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar12);
    }
  }
  else if ((iVar3 < iVar12) && (iVar3 != iVar12)) {
    *(int *)(param_3 + 1) = iVar3;
  }
  if (0 < iVar3) {
    iVar12 = 0;
    lVar15 = 0;
    do {
      iVar12 = iVar12 + 1;
      lVar9 = *plVar11;
      lVar1 = lVar15 + 1;
      lVar10 = 0;
      if (iVar12 != iVar3) {
        lVar10 = lVar1;
      }
      iVar4 = *(int *)(plVar8[7] + (longlong)*(int *)(lVar9 + lVar10 * 4) * 0x18);
      iVar5 = *(int *)(plVar8[7] + (longlong)*(int *)(lVar9 + lVar15 * 4) * 0x18);
      piVar13 = *(int **)((longlong)iVar5 * 0x20 + 0x10 + *plVar8);
      piVar2 = piVar13 + *(int *)((longlong)iVar5 * 0x20 + 0x18 + *plVar8);
      iVar14 = DAT_14652d644;
      if (piVar13 != piVar2) {
        do {
          iVar14 = *piVar13;
          iVar6 = *(int *)(plVar8[0xe] + (longlong)iVar14 * 0x18);
          iVar7 = *(int *)(plVar8[0xe] + (longlong)iVar14 * 0x18 + 4);
          if (((iVar6 == iVar5) && (iVar7 == iVar4)) || ((iVar6 == iVar4 && (iVar7 == iVar5))))
          break;
          piVar13 = piVar13 + 1;
          iVar14 = DAT_14652d644;
        } while (piVar13 != piVar2);
      }
      *(int *)(*param_3 + lVar15 * 4) = iVar14;
      lVar15 = lVar1;
    } while (lVar1 < iVar3);
  }
  return;
}



// FUNCTION 140888b30 GetPolygonPerimeterVertex body=93 status=ok
// SIG undefined GetPolygonPerimeterVertex(void)

undefined4 *
UEditableMesh::GetPolygonPerimeterVertex
          (longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  
  if ((param_4 < 0) ||
     (plVar1 = (longlong *)
               ((longlong)param_3 * 0x38 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8)),
     (int)plVar1[1] <= param_4)) {
    piVar2 = &DAT_14652d640;
  }
  else {
    piVar2 = (int *)(*plVar1 + (longlong)param_4 * 4);
  }
  if (*piVar2 != DAT_14652d640) {
    *param_2 = *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) + (longlong)*piVar2 * 0x18);
    return param_2;
  }
  *param_2 = DAT_14652d63c;
  return param_2;
}



// FUNCTION 140888b90 GetPolygonPerimeterVertexInstance body=68 status=ok
// SIG undefined GetPolygonPerimeterVertexInstance(void)

undefined4 *
UEditableMesh::GetPolygonPerimeterVertexInstance
          (longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  
  if ((-1 < param_4) &&
     (plVar1 = (longlong *)
               ((longlong)param_3 * 0x38 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8)),
     param_4 < (int)plVar1[1])) {
    *param_2 = *(undefined4 *)(*plVar1 + (longlong)param_4 * 4);
    return param_2;
  }
  *param_2 = DAT_14652d640;
  return param_2;
}



// FUNCTION 140888be0 GetPolygonPerimeterVertexInstances body=26 status=ok
// SIG undefined GetPolygonPerimeterVertexInstances(void)

void UEditableMesh::GetPolygonPerimeterVertexInstances
               (longlong param_1,int param_2,undefined8 param_3)

{
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=
            (param_3,(longlong)param_2 * 0x38 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8))
  ;
  return;
}



// FUNCTION 140888c00 FUN_140888c00 body=9 status=ok
// SIG undefined FUN_140888c00(void)

void FUN_140888c00(longlong param_1)

{
  FMeshDescription::GetPolygonPerimeterVertices(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 140888c10 GetPolygonTriangulatedTriangle body=106 status=ok
// SIG undefined GetPolygonTriangulatedTriangle(void)

undefined8 *
UEditableMesh::GetPolygonTriangulatedTriangle
          (longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_18;
  
  if ((param_4 < 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8) + (longlong)param_3 * 0x38,
     *(int *)(lVar2 + 0x28) <= param_4)) {
    local_18 = CONCAT44(DAT_14652d640,DAT_14652d640);
    uVar1 = DAT_14652d640;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x20);
    local_18 = *(undefined8 *)(lVar2 + (longlong)param_4 * 0xc);
    uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_4 * 0xc);
  }
  *param_2 = local_18;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140888c80 GetPolygonTriangulatedTriangleCount body=23 status=ok
// SIG undefined GetPolygonTriangulatedTriangleCount(void)

undefined4 UEditableMesh::GetPolygonTriangulatedTriangleCount(longlong param_1,int param_2)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8) + 0x28 + (longlong)param_2 * 0x38);
}



// FUNCTION 140888ca0 FUN_140888ca0 body=746 status=ok
// SIG undefined FUN_140888ca0(void)

void FUN_140888ca0(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  ulonglong uVar14;
  
  *(undefined4 *)(param_5 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_5 + 0xc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_5,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14685f1d8) && (_Init_thread_header(&DAT_14685f1d8), DAT_14685f1d8 == -1))
  {
    atexit((_func_5014 *)&LAB_143e43ee0);
    _Init_thread_footer(&DAT_14685f1d8);
  }
  iVar10 = 0;
  if ((DAT_14685f1d4 < *(int *)(param_3 + 1)) &&
     (DAT_14685f1d0 = 0, iVar10 = 0, DAT_14685f1d4 != *(int *)(param_3 + 1))) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f1c8);
    iVar10 = DAT_14685f1d0;
  }
  DAT_14685f1d0 = iVar10 + 1;
  if (DAT_14685f1d4 < DAT_14685f1d0) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f1c8,iVar10);
  }
  uVar6 = 0;
  DAT_14685f1c8[iVar10] = param_2;
  uVar7 = uVar6;
  piVar12 = DAT_14685f1c8;
  iVar10 = DAT_14685f1d0;
  if (DAT_14685f1d0 < 1) {
    return;
  }
  do {
    iVar2 = *(int *)(uVar7 + (longlong)piVar12);
    uVar5 = (int)uVar6 + 1;
    piVar8 = (int *)*param_3;
    piVar1 = piVar8 + *(int *)(param_3 + 1);
    while( true ) {
      if (piVar8 == piVar1) goto LAB_140888f26;
      if (*piVar8 == iVar2) break;
      piVar8 = piVar8 + 1;
    }
    iVar10 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar10 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar10);
    }
    *(int *)(*param_5 + (longlong)iVar10 * 4) = iVar2;
    piVar8 = (int *)*param_4;
    piVar1 = piVar8 + *(int *)(param_4 + 1);
    piVar12 = DAT_14685f1c8;
    iVar10 = DAT_14685f1d0;
    for (; piVar8 != piVar1; piVar8 = piVar8 + 1) {
      uVar9 = 0;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70);
      piVar13 = *(int **)(lVar4 + 8 + (longlong)*piVar8 * 0x18);
      uVar6 = (ulonglong)*(int *)(lVar4 + 0x10 + (longlong)*piVar8 * 0x18);
      for (piVar11 = piVar13; piVar11 != piVar13 + uVar6; piVar11 = piVar11 + 1) {
        if (*piVar11 == iVar2) {
          uVar14 = uVar6 & 0x3fffffffffffffff;
          if (piVar13 + uVar6 < piVar13) {
            uVar14 = uVar9;
          }
          if (uVar14 != 0) {
            do {
              iVar3 = *piVar13;
              for (piVar11 = piVar12; piVar11 != piVar12 + iVar10; piVar11 = piVar11 + 1) {
                if (*piVar11 == iVar3) {
                  if ((int)((longlong)piVar11 - (longlong)piVar12 >> 2) != -1) goto LAB_140888ee7;
                  break;
                }
              }
              DAT_14685f1d0 = iVar10 + 1;
              if (DAT_14685f1d4 < DAT_14685f1d0) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f1c8,iVar10);
                piVar12 = DAT_14685f1c8;
              }
              piVar12[iVar10] = iVar3;
              piVar12 = DAT_14685f1c8;
              iVar10 = DAT_14685f1d0;
LAB_140888ee7:
              piVar13 = piVar13 + 1;
              uVar9 = uVar9 + 1;
            } while (uVar9 != uVar14);
          }
          break;
        }
      }
    }
LAB_140888f26:
    uVar6 = (ulonglong)uVar5;
    uVar7 = uVar7 + 4;
    if (iVar10 <= (int)uVar5) {
      return;
    }
  } while( true );
}



// FUNCTION 140888f90 GetSectionForRenderingSectionIndex body=567 status=ok
// SIG undefined GetSectionForRenderingSectionIndex(void)

uint * UEditableStaticMeshAdapter::GetSectionForRenderingSectionIndex
                 (longlong param_1,uint *param_2,int param_3)

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
  
  uStack_94 = 1;
  plVar1 = (longlong *)(param_1 + 0x78);
  uVar2 = *(uint *)(param_1 + 0xa0);
  uStack_84 = 0;
  iStack_80 = 0;
  local_68 = (uint *)(param_1 + 0x88);
  local_98 = 0;
  if (uVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar9 = local_68;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar5;
      if (bVar4) goto LAB_14088906c;
      uVar3 = puVar9[lVar7 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
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
    uStack_84 = (iStack_80 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_14088906c:
      uStack_84 = uVar2;
    }
  }
  uVar2 = *(uint *)(param_1 + 0xa0);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uVar3 = *(uint *)(param_1 + 0xa0);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar8 = uVar2 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_50 = plVar1;
  puStack_40 = local_68;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar2;
  if (uVar2 != uVar3) {
    puVar9 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0x88);
    }
    uVar6 = puVar9[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
    iVar5 = (int)uVar2 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140889143;
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
    uStack_84 = (uVar8 - iVar5) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_140889143:
      uStack_84 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_5c == uStack_84) && (local_68 == (uint *)(param_1 + 0x88))) {
      *param_2 = DAT_14652d648;
      return param_2;
    }
    uVar2 = DAT_14652d648;
    if ((int)uStack_5c < (int)local_68[6]) {
      uVar2 = uStack_5c;
    }
    if (*(int *)(*plVar1 + (longlong)(int)uVar2 * 0x48) == param_3) break;
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 1408891d0 GetSharpnessPerEdge body=107 status=ok
// SIG undefined GetSharpnessPerEdge(void)

undefined4 *
OpenSubdiv::v3_2_0::Vtr::internal::VertexInterface::GetSharpnessPerEdge
          (longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(longlong *)(*param_1 + 0x150) + 4 + (longlong)((int)param_1[2] * 2) * 4);
  lVar2 = *(longlong *)(*param_1 + 0x168);
  iVar4 = 0;
  if (0 < (int)param_1[3]) {
    puVar3 = param_2;
    do {
      iVar4 = iVar4 + 1;
      *puVar3 = *(undefined4 *)
                 (*(longlong *)(*param_1 + 0xd8) +
                 (longlong)
                 *(int *)(((lVar2 + (longlong)iVar1 * 4) - (longlong)param_2) + (longlong)puVar3) *
                 4);
      puVar3 = puVar3 + 1;
    } while (iVar4 < (int)param_1[3]);
  }
  return param_2;
}



// FUNCTION 140889240 GetSubdivisionCount body=7 status=ok
// SIG undefined GetSubdivisionCount(void)

undefined4 UEditableMesh::GetSubdivisionCount(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xe88);
}



// FUNCTION 140889250 GetSubdivisionLimitData body=8 status=ok
// SIG undefined GetSubdivisionLimitData(void)

longlong UEditableMesh::GetSubdivisionLimitData(longlong param_1)

{
  return param_1 + 0xf20;
}



// FUNCTION 140889260 GetTextureCoordinateCount body=7 status=ok
// SIG undefined GetTextureCoordinateCount(void)

undefined4 UEditableMesh::GetTextureCoordinateCount(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xd88);
}



// FUNCTION 140889270 GetVertexAdjacentVertices body=195 status=ok
// SIG undefined GetVertexAdjacentVertices(void)

void UEditableMesh::GetVertexAdjacentVertices(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x28);
  iVar3 = (int)param_3[1];
  lVar7 = (longlong)param_2 * 0x20 + *plVar2;
  iVar1 = *(int *)(lVar7 + 0x18);
  if (iVar3 < iVar1) {
    *(int *)(param_3 + 1) = iVar1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3);
    }
  }
  else if ((iVar1 < iVar3) && (iVar1 != iVar3)) {
    *(int *)(param_3 + 1) = iVar1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_3);
  }
  uVar4 = 0;
  piVar5 = *(int **)(lVar7 + 0x10);
  uVar6 = (longlong)*(int *)(lVar7 + 0x18) & 0x3fffffffffffffff;
  if (piVar5 + *(int *)(lVar7 + 0x18) < piVar5) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    do {
      lVar7 = plVar2[0xe];
      iVar3 = *(int *)(lVar7 + (longlong)*piVar5 * 0x18);
      if (iVar3 == param_2) {
        iVar3 = *(int *)(lVar7 + (longlong)*piVar5 * 0x18 + 4);
      }
      piVar5 = piVar5 + 1;
      *(int *)(*param_3 + uVar4 * 4) = iVar3;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  return;
}



// FUNCTION 140889340 GetVertexConnectedEdge body=67 status=ok
// SIG undefined GetVertexConnectedEdge(void)

undefined4 *
UEditableMesh::GetVertexConnectedEdge(longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
  if (-1 < param_4) {
    if (param_4 < *(int *)(**(longlong **)(param_1 + 0x28) + 0x18 + (longlong)param_3 * 0x20)) {
      *param_2 = *(undefined4 *)
                  (*(longlong *)(**(longlong **)(param_1 + 0x28) + 0x10 + (longlong)param_3 * 0x20)
                  + (longlong)param_4 * 4);
      return param_2;
    }
  }
  *param_2 = DAT_14652d644;
  return param_2;
}



// FUNCTION 140889390 GetVertexConnectedEdgeCount body=20 status=ok
// SIG undefined GetVertexConnectedEdgeCount(void)

undefined4 UEditableMesh::GetVertexConnectedEdgeCount(longlong param_1,int param_2)

{
  return *(undefined4 *)((longlong)param_2 * 0x20 + 0x18 + **(longlong **)(param_1 + 0x28));
}



// FUNCTION 1408893b0 GetVertexConnectedEdges body=29 status=ok
// SIG undefined GetVertexConnectedEdges(void)

void UEditableMesh::GetVertexConnectedEdges(longlong param_1,int param_2,undefined8 param_3)

{
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=
            (param_3,**(longlong **)(param_1 + 0x28) + (longlong)param_2 * 0x20 + 0x10);
  return;
}



// FUNCTION 1408893d0 GetVertexConnectedPolygons body=230 status=ok
// SIG undefined GetVertexConnectedPolygons(void)

void UEditableMesh::GetVertexConnectedPolygons(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  uVar9 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_3 + 0xc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  puVar6 = (undefined8 *)((longlong)param_2 * 0x20 + *plVar3);
  piVar8 = (int *)*puVar6;
  uVar7 = (ulonglong)*(int *)(puVar6 + 1);
  uVar10 = uVar7 & 0x3fffffffffffffff;
  if (piVar8 + uVar7 < piVar8) {
    uVar10 = uVar9;
  }
  if (uVar10 != 0) {
    do {
      iVar1 = *piVar8;
      lVar4 = plVar3[7];
      iVar2 = *(int *)(lVar4 + 0x10 + (longlong)iVar1 * 0x18);
      if (iVar2 != 0) {
        iVar5 = (int)param_3[1];
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + iVar2) {
          TArray<float,FDefaultAllocator>::ResizeTo(param_3);
          iVar5 = (int)param_3[1];
        }
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_3 + (longlong)iVar5 * 4),
                   *(void **)(lVar4 + (longlong)iVar1 * 0x18 + 8),(longlong)iVar2 << 2);
        *(int *)(param_3 + 1) = (int)param_3[1] + iVar2;
      }
      piVar8 = piVar8 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
  }
  return;
}



// FUNCTION 1408894c0 GetVertexCount body=13 status=ok
// SIG undefined GetVertexCount(void)

int UEditableMesh::GetVertexCount(longlong param_1)

{
  return *(int *)(*(longlong *)(param_1 + 0x28) + 8) -
         *(int *)(*(longlong *)(param_1 + 0x28) + 0x34);
}



// FUNCTION 1408894d0 GetVertexInstanceConnectedPolygon body=71 status=ok
// SIG undefined GetVertexInstanceConnectedPolygon(void)

undefined4 *
UEditableMesh::GetVertexInstanceConnectedPolygon
          (longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  if ((-1 < param_4) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38),
     param_4 < *(int *)(lVar1 + 0x10 + (longlong)param_3 * 0x18))) {
    *param_2 = *(undefined4 *)
                (*(longlong *)(lVar1 + (longlong)param_3 * 0x18 + 8) + (longlong)param_4 * 4);
    return param_2;
  }
  *param_2 = DAT_14652d64c;
  return param_2;
}



// FUNCTION 140889520 GetVertexInstanceConnectedPolygonCount body=20 status=ok
// SIG undefined GetVertexInstanceConnectedPolygonCount(void)

undefined4 UEditableMesh::GetVertexInstanceConnectedPolygonCount(longlong param_1,int param_2)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) + 0x10 + (longlong)param_2 * 0x18);
}



// FUNCTION 140889540 GetVertexInstanceConnectedPolygons body=31 status=ok
// SIG undefined GetVertexInstanceConnectedPolygons(void)

void UEditableMesh::GetVertexInstanceConnectedPolygons
               (longlong param_1,int param_2,undefined8 param_3)

{
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=
            (param_3,*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) +
                     ((longlong)param_2 * 3 + 1) * 8);
  return;
}



// FUNCTION 140889560 GetVertexInstanceCount body=13 status=ok
// SIG undefined GetVertexInstanceCount(void)

int UEditableMesh::GetVertexInstanceCount(longlong param_1)

{
  return *(int *)(*(longlong *)(param_1 + 0x28) + 0x40) -
         *(int *)(*(longlong *)(param_1 + 0x28) + 0x6c);
}



// FUNCTION 140889570 GetVertexInstanceVertex body=24 status=ok
// SIG undefined GetVertexInstanceVertex(void)

undefined4 *
UEditableMesh::GetVertexInstanceVertex(longlong param_1,undefined4 *param_2,int param_3)

{
  *param_2 = *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) + (longlong)param_3 * 0x18);
  return param_2;
}



// FUNCTION 140889590 GetVertexPairEdge body=132 status=ok
// SIG undefined GetVertexPairEdge(void)

int * FMeshDescription::GetVertexPairEdge(longlong *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = *(int **)((longlong)param_3 * 0x20 + 0x10 + *param_1);
  piVar1 = piVar5 + *(int *)((longlong)param_3 * 0x20 + 0x18 + *param_1);
  if (piVar5 != piVar1) {
    do {
      iVar2 = *piVar5;
      iVar3 = *(int *)(param_1[0xe] + (longlong)iVar2 * 0x18);
      iVar4 = *(int *)(param_1[0xe] + (longlong)iVar2 * 0x18 + 4);
      if (((iVar3 == param_3) && (iVar4 == param_4)) || ((iVar3 == param_4 && (iVar4 == param_3))))
      {
        *param_2 = iVar2;
        return param_2;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar1);
  }
  *param_2 = DAT_14652d644;
  return param_2;
}



// FUNCTION 140889620 GetVertexPairEdge body=89 status=ok
// SIG undefined GetVertexPairEdge(void)

int * UEditableMesh::GetVertexPairEdge
                (longlong param_1,int *param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  FMeshDescription::GetVertexPairEdge(*(undefined8 *)(param_1 + 0x28));
  if (*param_2 != DAT_14652d644) {
    *(bool *)param_5 =
         *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70) + (longlong)*param_2 * 0x18)
         == param_3;
  }
  return param_2;
}



// FUNCTION 140889680 FUN_140889680 body=8089 status=ok
// SIG undefined FUN_140889680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140889680(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [14];
  unkbyte10 Var17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [14];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [14];
  undefined1 auVar25 [12];
  undefined1 auVar26 [14];
  undefined1 auVar27 [12];
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  uint *puVar31;
  uint uVar32;
  char cVar33;
  uint uVar34;
  int iVar35;
  longlong lVar36;
  int *piVar37;
  undefined8 *puVar38;
  ulonglong uVar39;
  undefined *puVar40;
  longlong *plVar41;
  byte bVar42;
  undefined2 *puVar43;
  int iVar44;
  uint uVar45;
  uint uVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  uint uVar50;
  uint *puVar51;
  int iVar52;
  ulonglong uVar53;
  int *piVar54;
  uint uVar55;
  longlong *plVar56;
  longlong *plVar57;
  ulonglong uVar58;
  longlong *plVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined2 uVar155;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar76 [16];
  undefined1 auVar86 [16];
  undefined2 uVar156;
  undefined2 uVar157;
  undefined2 uVar158;
  undefined1 auVar89 [16];
  undefined1 auVar101 [16];
  undefined1 auVar104 [16];
  undefined1 auVar116 [16];
  undefined1 auVar119 [16];
  undefined1 auVar131 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  undefined4 uVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  undefined1 unaff_XMM14_Ba;
  undefined1 uVar147;
  undefined1 unaff_XMM14_Bb;
  undefined1 uVar148;
  undefined1 unaff_XMM14_Bc;
  undefined1 uVar149;
  undefined1 unaff_XMM14_Bd;
  undefined1 uVar150;
  undefined1 unaff_XMM14_Be;
  undefined1 uVar151;
  undefined1 unaff_XMM14_Bf;
  undefined1 uVar152;
  undefined1 unaff_XMM14_Bg;
  undefined1 uVar153;
  undefined1 unaff_XMM14_Bh;
  undefined1 uVar154;
  undefined1 auStack_398 [32];
  uint **local_378;
  char local_368;
  char local_367;
  uint local_364;
  char local_360;
  uint local_35c;
  undefined8 local_358;
  longlong local_350;
  float local_348;
  uint local_340;
  uint local_33c;
  int local_338;
  longlong *local_330;
  int local_328;
  uint *local_318;
  uint *puStack_310;
  longlong local_308;
  longlong local_300;
  uint *local_2f8;
  uint *puStack_2f0;
  longlong local_2e8;
  longlong local_2e0;
  int local_2d8;
  int iStack_2d4;
  longlong lStack_2d0;
  int local_2c8;
  uint uStack_2c4;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  longlong *local_2b8;
  ulonglong local_2b0;
  longlong *local_2a8;
  undefined8 local_298;
  uint *puStack_290;
  undefined8 local_288;
  ulonglong local_280;
  float local_278;
  float local_274;
  float local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  longlong *local_258;
  longlong *local_250;
  longlong *local_248;
  undefined8 local_240;
  longlong *local_230;
  longlong local_228;
  longlong local_220;
  char local_214;
  longlong local_210;
  longlong lStack_208;
  longlong lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0 [16];
  undefined8 local_190;
  undefined8 uStack_188;
  longlong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  ulonglong local_e8;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar77 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar102 [16];
  undefined1 auVar117 [16];
  undefined1 auVar132 [16];
  undefined1 auVar103 [16];
  undefined1 auVar118 [16];
  undefined1 auVar133 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar100 [16];
  undefined1 auVar115 [16];
  undefined1 auVar130 [16];
  undefined1 auVar92 [16];
  undefined1 auVar107 [16];
  undefined1 auVar122 [16];
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  uVar1 = param_4[1];
  *(undefined8 *)(param_2 + 0xd50) = *param_4;
  *(undefined8 *)(param_2 + 0xd58) = uVar1;
  *(undefined8 *)(param_2 + 0xd60) = param_4[2];
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((longlong)param_4 + 0x14);
  local_2e0 = param_1;
  local_228 = param_2;
  if (param_3 == 0) goto LAB_14088b44a;
  lVar36 = FUN_142a232e0();
  lVar47 = *(longlong *)(param_3 + 0x10);
  if ((*(int *)(lVar47 + 0x90) < *(int *)(lVar36 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar47 + 0x88) + (longlong)*(int *)(lVar36 + 0x90) * 8) !=
      lVar36 + 0x88)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  if (((!bVar14) || (lVar36 = *(longlong *)(param_3 + 0x728), lVar36 == 0)) ||
     (cVar33 = FUN_142820890(lVar36,CONCAT71((int7)((ulonglong)lVar47 >> 8),1),0xffffffff),
     cVar33 == '\0')) goto LAB_14088b44a;
  iVar52 = *(int *)(param_1 + 0x38);
  *(longlong *)(param_1 + 0x28) = lVar36;
  *(longlong *)(param_1 + 0x30) = lVar36;
  plVar41 = *(longlong **)(lVar36 + 0x38);
  if ((iVar52 < 0) || ((int)plVar41[1] <= iVar52)) goto LAB_14088b44a;
  lVar47 = *(longlong *)(*plVar41 + (longlong)iVar52 * 8);
  puVar51 = (uint *)(lVar47 + 0x494);
  *puVar51 = *puVar51 & 0xfffffff0;
  *(undefined4 *)(lVar47 + 0x4e0) = 0;
  plVar56 = *(longlong **)(param_2 + 0x28);
  local_300 = *(longlong *)(*plVar41 + (longlong)*(int *)(param_1 + 0x38) * 8);
  local_330 = plVar56;
  local_2a8 = (longlong *)FUN_140860830(plVar56 + 0x23,DAT_146aedad0,0);
  local_2b8 = (longlong *)FUN_140860830(plVar56 + 0x70,DAT_146aedae8,0);
  local_240 = (longlong *)FUN_140860830(plVar56 + 0x70,DAT_146aedaf0,0);
  if ((int)plVar56[0x93] != *(int *)((longlong)plVar56 + 0x4c4)) {
    plVar41 = (longlong *)plVar56[0x9a];
    if ((longlong *)plVar56[0x9a] == (longlong *)0x0) {
      plVar41 = plVar56 + 0x99;
    }
    iVar52 = *(int *)((longlong)plVar41 +
                     ((longlong)((int)((ulonglong)DAT_146aedaf8 >> 0x20) + (int)DAT_146aedaf8) &
                     (longlong)(int)plVar56[0x9b] - 1U) * 4);
    if (iVar52 != -1) {
      do {
        plVar41 = (longlong *)(plVar56[0x92] + (longlong)iVar52 * 0x30);
        if (*plVar41 == DAT_146aedaf8) {
          if (iVar52 != -1) goto LAB_140889894;
          break;
        }
        iVar52 = (int)plVar41[5];
      } while (iVar52 != -1);
    }
  }
  plVar41 = (longlong *)0x0;
LAB_140889894:
  local_230 = (longlong *)plVar41[2];
  local_258 = (longlong *)FUN_140860790(plVar56 + 0x70,DAT_146aedb00,0);
  local_250 = (longlong *)FUN_140860790(plVar56 + 0x70,DAT_146aedb08,0);
  piVar37 = (int *)FUN_140860a40(plVar56 + 0x70,DAT_146aedae0);
  local_1e0 = (longlong *)FUN_1408608e0(plVar56 + 0x157,DAT_146aedb48,0);
  local_1d8 = (longlong *)FUN_1408608e0(plVar56 + 0x157,DAT_14685f178,0);
  local_1d0 = (longlong *)FUN_140860990(plVar56 + 0x157,DAT_146aedb50,0);
  local_1b8 = (longlong *)FUN_140860990(plVar56 + 0x157,DAT_146aedb58,0);
  local_328 = FUN_14281e800();
  iVar52 = piVar37[4];
  plVar41 = (longlong *)(piVar37 + 2);
  lVar47 = (longlong)piVar37[4];
  lVar36 = (longlong)local_328;
  local_248 = plVar41;
  if (iVar52 < local_328) {
    piVar37[4] = local_328;
    iVar44 = local_328 - iVar52;
    if (piVar37[5] < local_328) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar41,iVar52);
    }
    puVar38 = (undefined8 *)((longlong)iVar52 * 0x10 + *plVar41);
    for (; iVar44 != 0; iVar44 = iVar44 + -1) {
      *puVar38 = 0;
      puVar38[1] = 0;
      puVar38 = puVar38 + 2;
    }
  }
  else if (local_328 < iVar52) {
    TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
              (plVar41,local_328,iVar52 - local_328,1);
  }
  if (lVar47 < lVar36) {
    lVar48 = lVar47 << 4;
    lVar36 = lVar36 - lVar47;
    do {
      iVar52 = *piVar37;
      lVar47 = *plVar41 + lVar48;
      *(undefined4 *)(lVar47 + 8) = 0;
      if (*(int *)(lVar47 + 0xc) < iVar52) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(lVar47,iVar52);
      }
      TMeshAttributeArrayBase<FVector2D>::Insert(lVar47,iVar52 + -1,piVar37 + 6);
      lVar48 = lVar48 + 0x10;
      lVar36 = lVar36 + -1;
    } while (lVar36 != 0);
  }
  lVar47 = local_300;
  *(int *)(local_228 + 0xd88) = local_328;
  uVar55 = *(uint *)(local_300 + 0x13c);
  uVar58 = (ulonglong)uVar55;
  local_33c = uVar55;
  FUN_14089d3b0(plVar56,((int)plVar56[1] - *(int *)((longlong)plVar56 + 0x34)) + uVar55);
  local_1e8 = plVar56 + 7;
  TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Reserve(local_1e8);
  if (*(int *)(lVar47 + 0x1f8) < 1) {
LAB_140889aaf:
    local_360 = '\0';
  }
  else {
    local_360 = '\x01';
    lVar36 = *(longlong *)(lVar47 + 0x1f0);
    if (*(longlong *)(lVar47 + 0x1f0) == 0) {
      lVar36 = lVar47 + 0x140;
    }
    if (*(int *)(lVar36 + 0x54) == 0) goto LAB_140889aaf;
  }
  if (*(int *)(lVar47 + 0x1f8) < 2) {
LAB_140889ae2:
    local_367 = '\0';
  }
  else {
    local_367 = '\x01';
    lVar36 = *(longlong *)(lVar47 + 0x1f0);
    if (*(longlong *)(lVar47 + 0x1f0) == 0) {
      lVar36 = lVar47 + 0x140;
    }
    if (*(int *)(lVar36 + 0xac) == 0) goto LAB_140889ae2;
  }
  lVar36 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_2e8 = lVar36;
  if ((*(int *)(lVar36 + 0x38) < DAT_1468606ac) &&
     (_Init_thread_header(&DAT_1468606ac), DAT_1468606ac == -1)) {
    atexit(FUN_143e43a30);
    _Init_thread_footer(&DAT_1468606ac);
  }
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
            (&DAT_146270960);
  if ((*(int *)(lVar36 + 0x38) < DAT_1468606c0) &&
     (_Init_thread_header(&DAT_1468606c0), DAT_1468606c0 == -1)) {
    atexit((_func_5014 *)&LAB_143e44050);
    _Init_thread_footer(&DAT_1468606c0);
  }
  uVar34 = DAT_1468606b8;
  if ((int)DAT_1468606b8 < (int)uVar55) {
    DAT_1468606b8 = uVar55;
    if (DAT_1468606bc < (int)uVar55) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_1468606b0,uVar34);
    }
  }
  else if (((int)uVar55 < (int)DAT_1468606b8) && (iVar52 = DAT_1468606b8 - uVar55, iVar52 != 0)) {
    iVar44 = (DAT_1468606b8 - iVar52) - uVar55;
    if (iVar44 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(DAT_1468606b0 + (longlong)(int)uVar55 * 8),
                 (void *)(DAT_1468606b0 + (longlong)(int)(iVar52 + uVar55) * 8),
                 (longlong)iVar44 << 3);
    }
    DAT_1468606b8 = DAT_1468606b8 - iVar52;
  }
  iVar52 = 0;
  if (3 < (int)uVar55) {
    lVar36 = 0;
    iVar44 = 2;
    do {
      uVar39 = (ulonglong)(uint)(*(int *)(lVar47 + 0x138) * iVar52);
      uVar1 = *(undefined8 *)(uVar39 + *(longlong *)(lVar47 + 0x130));
      local_358 = CONCAT44(iVar52,(float)((ulonglong)uVar1 >> 0x20) * 0.33 + (float)uVar1 * 0.3 +
                                  *(float *)(uVar39 + 8 + *(longlong *)(lVar47 + 0x130)) * 0.37);
      *(longlong *)(lVar36 + DAT_1468606b0) = local_358;
      uVar39 = (ulonglong)(uint)((iVar44 + -1) * *(int *)(lVar47 + 0x138));
      uVar1 = *(undefined8 *)(uVar39 + *(longlong *)(lVar47 + 0x130));
      local_358 = CONCAT44(iVar44 + -1,
                           (float)((ulonglong)uVar1 >> 0x20) * 0.33 + (float)uVar1 * 0.3 +
                           *(float *)(uVar39 + 8 + *(longlong *)(lVar47 + 0x130)) * 0.37);
      *(longlong *)(lVar36 + 8 + DAT_1468606b0) = local_358;
      uVar39 = (ulonglong)(uint)(iVar44 * *(int *)(lVar47 + 0x138));
      uVar1 = *(undefined8 *)(uVar39 + *(longlong *)(lVar47 + 0x130));
      local_358 = CONCAT44(iVar44,(float)((ulonglong)uVar1 >> 0x20) * 0.33 + (float)uVar1 * 0.3 +
                                  *(float *)(uVar39 + 8 + *(longlong *)(lVar47 + 0x130)) * 0.37);
      *(longlong *)(DAT_1468606b0 + 0x10 + lVar36) = local_358;
      uVar39 = (ulonglong)(uint)(*(int *)(lVar47 + 0x138) * (iVar44 + 1));
      local_350 = *(longlong *)(uVar39 + *(longlong *)(lVar47 + 0x130));
      local_348 = *(float *)(uVar39 + 8 + *(longlong *)(lVar47 + 0x130));
      local_358 = CONCAT44(iVar44 + 1,
                           (float)((ulonglong)local_350 >> 0x20) * 0.33 + (float)local_350 * 0.3 +
                           local_348 * 0.37);
      *(longlong *)(DAT_1468606b0 + 0x18 + lVar36) = local_358;
      lVar36 = lVar36 + 0x20;
      iVar52 = iVar52 + 4;
      iVar44 = iVar44 + 4;
    } while (iVar52 < (int)(uVar55 - 3));
  }
  if (iVar52 < (int)uVar55) {
    lVar36 = (longlong)iVar52 * 8;
    do {
      uVar39 = (ulonglong)(uint)(*(int *)(lVar47 + 0x138) * iVar52);
      iVar44 = iVar52 + 1;
      local_350 = *(longlong *)(uVar39 + *(longlong *)(lVar47 + 0x130));
      local_348 = *(float *)(uVar39 + 8 + *(longlong *)(lVar47 + 0x130));
      local_358 = CONCAT44(iVar52,(float)((ulonglong)local_350 >> 0x20) * 0.33 +
                                  (float)local_350 * 0.3 + local_348 * 0.37);
      *(longlong *)(DAT_1468606b0 + lVar36) = local_358;
      lVar36 = lVar36 + 8;
      iVar52 = iVar44;
    } while (iVar44 < (int)uVar55);
  }
  FUN_140861f60(DAT_1468606b0,(longlong)(int)DAT_1468606b8,local_367);
  lVar36 = lVar47;
  if (0 < (int)uVar55) {
    lVar49 = 4;
    iVar52 = 1;
    lVar48 = DAT_1468606b0;
    do {
      if (iVar52 < (int)uVar55) {
        lVar36 = lVar49 + 4;
        iVar44 = iVar52;
        do {
          if (0.0001 < ABS(*(float *)(lVar48 + lVar36) - *(float *)(lVar48 + -4 + lVar49))) break;
          local_35c = *(uint *)(lVar48 + lVar49);
          lVar7 = *(longlong *)(lVar47 + 0x130);
          local_364 = *(uint *)(lVar48 + 4 + lVar36);
          uVar39 = (ulonglong)(local_35c * *(int *)(lVar47 + 0x138));
          uVar53 = (ulonglong)(local_364 * *(int *)(lVar47 + 0x138));
          uVar1 = *(undefined8 *)(uVar39 + lVar7);
          uVar2 = *(undefined8 *)(uVar53 + lVar7);
          local_f0 = *(float *)(uVar39 + 8 + lVar7);
          local_100 = *(float *)(uVar53 + 8 + lVar7);
          if (0.0001 < ABS((float)uVar1 - (float)uVar2)) {
LAB_140889f02:
            bVar14 = false;
          }
          else {
            local_f8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
            local_108._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
            if ((0.0001 < ABS(local_f8._4_4_ - local_108._4_4_)) ||
               (0.0001 < ABS(local_f0 - local_100))) goto LAB_140889f02;
            bVar14 = true;
          }
          local_108 = uVar2;
          local_f8 = uVar1;
          if (bVar14) {
            local_298 = &local_35c;
            puStack_290 = &local_364;
            FUN_14085ab10(&DAT_146270960,&local_358,&local_298,0);
            local_2f8 = &local_364;
            puStack_2f0 = &local_35c;
            FUN_14085ab10(&DAT_146270960,&local_308,&local_2f8,0);
            lVar48 = DAT_1468606b0;
          }
          iVar44 = iVar44 + 1;
          lVar36 = lVar36 + 8;
        } while (iVar44 < (int)uVar55);
      }
      iVar52 = iVar52 + 1;
      lVar49 = lVar49 + 8;
      uVar58 = uVar58 - 1;
      lVar36 = local_300;
      plVar56 = local_330;
    } while (uVar58 != 0);
  }
  local_340 = 0;
  if (0 < (int)uVar55) {
    uVar55 = CONCAT13(unaff_XMM14_Bd,
                      CONCAT12(unaff_XMM14_Bc,CONCAT11(unaff_XMM14_Bb,unaff_XMM14_Ba))) ^
             CONCAT13(unaff_XMM14_Bd,
                      CONCAT12(unaff_XMM14_Bc,CONCAT11(unaff_XMM14_Bb,unaff_XMM14_Ba)));
    uVar147 = (undefined1)uVar55;
    uVar148 = (undefined1)(uVar55 >> 8);
    uVar149 = (undefined1)(uVar55 >> 0x10);
    uVar150 = (undefined1)(uVar55 >> 0x18);
    uVar34 = CONCAT13(unaff_XMM14_Bh,
                      CONCAT12(unaff_XMM14_Bg,CONCAT11(unaff_XMM14_Bf,unaff_XMM14_Be))) ^
             CONCAT13(unaff_XMM14_Bh,
                      CONCAT12(unaff_XMM14_Bg,CONCAT11(unaff_XMM14_Bf,unaff_XMM14_Be)));
    uVar151 = (undefined1)uVar34;
    uVar152 = (undefined1)(uVar34 >> 8);
    uVar153 = (undefined1)(uVar34 >> 0x10);
    uVar154 = (undefined1)(uVar34 >> 0x18);
    local_350 = 0;
    local_308 = 0;
    local_358 = 0;
    do {
      uVar50 = local_340;
      lVar48 = local_350;
      lVar47 = local_358;
      uVar58 = (ulonglong)(*(int *)(lVar36 + 0x138) * local_340);
      local_368 = '\0';
      iVar52 = *(int *)(uVar58 + 8 + *(longlong *)(lVar36 + 0x130));
      uVar1 = *(undefined8 *)(uVar58 + *(longlong *)(lVar36 + 0x130));
      local_338 = iVar52;
      if ((*(int *)(local_2e8 + 0x38) < DAT_1468606d8) &&
         (_Init_thread_header(&DAT_1468606d8), DAT_1468606d8 == -1)) {
        atexit((_func_5014 *)&LAB_143e44250);
        _Init_thread_footer(&DAT_1468606d8);
      }
      DAT_1468606d0 = 0;
      if ((DAT_1468606d4 < 0) && (DAT_1468606d4 != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(&DAT_1468606c8,0);
      }
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
      ConditionalRehash(&DAT_146270960,DAT_146270968 - _DAT_146270994,0);
      cVar33 = '\0';
      if (DAT_1462709a8 != 0) {
        puVar40 = DAT_1462709a0;
        if (DAT_1462709a0 == (undefined *)0x0) {
          puVar40 = &DAT_146270998;
        }
        iVar44 = *(int *)(puVar40 + (longlong)(int)(DAT_1462709a8 - 1U & uVar50) * 4);
        do {
          iVar35 = iVar44;
          if (iVar35 == -1) goto LAB_14088a1b3;
          iVar44 = *(int *)(DAT_146270960 + 8 + (longlong)iVar35 * 0x10);
          cVar33 = local_368;
        } while (*(uint *)(DAT_146270960 + (longlong)iVar35 * 0x10) != uVar50);
        lVar36 = DAT_146270960;
        if (iVar35 != -1) {
          do {
            iVar52 = DAT_1468606d0;
            lVar47 = (longlong)DAT_1468606d0;
            DAT_1468606d0 = DAT_1468606d0 + 1;
            if (DAT_1468606d4 < DAT_1468606d0) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_1468606c8,iVar52);
              lVar36 = DAT_146270960;
            }
            if (DAT_1468606c8 + lVar47 != (int *)0x0) {
              DAT_1468606c8[lVar47] = *(int *)(lVar36 + 4 + (longlong)iVar35 * 0x10);
              lVar36 = DAT_146270960;
            }
            do {
              iVar35 = iVar44;
              plVar56 = local_330;
              lVar47 = local_358;
              iVar52 = local_338;
              cVar33 = local_368;
              if (iVar35 == -1) goto LAB_14088a1b3;
              iVar44 = *(int *)(lVar36 + 8 + (longlong)iVar35 * 0x10);
            } while (*(uint *)(lVar36 + (longlong)iVar35 * 0x10) != uVar50);
          } while( true );
        }
      }
LAB_14088a1b3:
      uVar141 = DAT_14652d63c;
      iVar44 = 0;
      piVar37 = DAT_1468606c8;
      if (0 < DAT_1468606d0) {
        do {
          if (*piVar37 < (int)uVar50) {
            uVar4 = *(undefined4 *)(plVar56[7] + (longlong)*piVar37 * 0x18);
            lVar36 = FUN_14088e510(plVar56 + 7,&local_210,uVar50);
            puVar8 = *(undefined4 **)(lVar36 + 8);
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = uVar141;
              *(undefined8 *)(puVar8 + 2) = 0;
              *(undefined8 *)(puVar8 + 4) = 0;
            }
            FMeshDescription::CreateVertexInstance_Internal(plVar56,uVar50,uVar4);
            cVar33 = '\x01';
            break;
          }
          iVar44 = iVar44 + 1;
          piVar37 = piVar37 + 1;
        } while (iVar44 < DAT_1468606d0);
      }
      if (cVar33 == '\0') {
        local_298 = (uint *)0x0;
        puStack_290 = (uint *)0x0;
        local_288 = 0;
        local_280 = 0;
        iVar44 = FUN_140873840(plVar56,&local_298);
        if (local_288 != 0) {
          FMemory::Free();
        }
        if (local_298 != (uint *)0x0) {
          FMemory::Free();
        }
        FMeshDescription::CreateVertex_Internal(plVar56,iVar44);
        lVar36 = *local_2a8;
        *(undefined8 *)(lVar36 + (longlong)iVar44 * 0xc) = uVar1;
        *(int *)(lVar36 + 8 + (longlong)iVar44 * 0xc) = iVar52;
        uVar141 = DAT_14652d63c;
        lVar36 = FUN_14088e510(plVar56 + 7,&local_190,uVar50);
        puVar8 = *(undefined4 **)(lVar36 + 8);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = uVar141;
          *(undefined8 *)(puVar8 + 2) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
        }
        FMeshDescription::CreateVertexInstance_Internal(plVar56,uVar50,iVar44);
      }
      lVar36 = local_300;
      uVar58 = (ulonglong)uVar50;
      lVar49 = *(longlong *)(local_300 + 0xc0);
      uVar9 = (undefined2)uVar55;
      uVar10 = (undefined2)(uVar55 >> 0x10);
      uVar11 = (undefined2)uVar34;
      uVar12 = (undefined2)(uVar34 >> 0x10);
      if (*(char *)(local_300 + 0xe1) == '\0') {
        uVar45 = *(uint *)(lVar49 + 4 + lVar48 * 8);
        auVar100._0_15_ = ZEXT415(uVar45);
        auVar100[0xf] = uVar154;
        auVar99._14_2_ = auVar100._14_2_;
        auVar99._0_13_ = ZEXT413(uVar45);
        auVar99[0xd] = uVar153;
        auVar98._13_3_ = auVar99._13_3_;
        auVar98._0_13_ = ZEXT413(uVar45);
        auVar97._12_4_ = auVar98._12_4_;
        auVar97._4_7_ = 0;
        auVar97._0_4_ = uVar45;
        auVar97[0xb] = uVar152;
        auVar96._11_5_ = auVar97._11_5_;
        auVar96._4_7_ = 0;
        auVar96._0_4_ = uVar45;
        auVar95._10_6_ = auVar96._10_6_;
        auVar95._4_5_ = 0;
        auVar95._0_4_ = uVar45;
        auVar95[9] = uVar151;
        auVar94._9_7_ = auVar95._9_7_;
        auVar94._4_5_ = 0;
        auVar94._0_4_ = uVar45;
        Var17 = CONCAT91(CONCAT81(auVar94._8_8_,uVar150),(char)(uVar45 >> 0x18));
        auVar93._6_10_ = Var17;
        auVar93[5] = uVar149;
        auVar93[4] = (char)(uVar45 >> 0x10);
        auVar93._0_4_ = uVar45;
        auVar16._2_12_ = auVar93._4_12_;
        auVar16[1] = uVar148;
        auVar16[0] = (char)(uVar45 >> 8);
        uVar156 = CONCAT11(uVar147,(char)uVar45);
        auVar92._2_14_ = auVar16;
        auVar103._0_12_ = auVar92._0_12_;
        auVar103._12_2_ = (short)Var17;
        auVar103._14_2_ = uVar12;
        auVar102._12_4_ = auVar103._12_4_;
        auVar102._0_10_ = auVar92._0_10_;
        auVar102._10_2_ = uVar11;
        auVar101._10_6_ = auVar102._10_6_;
        auVar101._0_8_ = auVar92._0_8_;
        auVar101._8_2_ = auVar93._4_2_;
        auVar18._4_8_ = auVar101._8_8_;
        auVar18._2_2_ = uVar10;
        auVar18._0_2_ = auVar16._0_2_;
        auVar69._0_4_ = CONCAT22(uVar9,uVar156);
        auVar69._4_12_ = auVar18;
        auVar61._0_4_ = -(uint)(0x7f < auVar69._0_4_);
        auVar61._4_4_ = -(uint)(0x7f < auVar18._0_4_);
        auVar61._8_4_ = -(uint)(0x7f < auVar101._8_4_);
        auVar61._12_4_ = -(uint)(0x7f < auVar102._12_4_);
        auVar69 = _DAT_144101760 & auVar61 | auVar69;
        local_278 = (float)auVar69._0_4_ * 0.007874016;
        local_274 = (float)auVar69._4_4_ * 0.007874016;
        local_270 = (float)auVar69._8_4_ * 0.007874016;
        local_108 = CONCAT44(local_274,local_278);
        uVar45 = *(uint *)(lVar49 + lVar48 * 8);
        auVar115._0_15_ = ZEXT415(uVar45);
        auVar115[0xf] = uVar154;
        auVar114._14_2_ = auVar115._14_2_;
        auVar114._0_13_ = ZEXT413(uVar45);
        auVar114[0xd] = uVar153;
        auVar113._13_3_ = auVar114._13_3_;
        auVar113._0_13_ = ZEXT413(uVar45);
        auVar112._12_4_ = auVar113._12_4_;
        auVar112._4_7_ = 0;
        auVar112._0_4_ = uVar45;
        auVar112[0xb] = uVar152;
        auVar111._11_5_ = auVar112._11_5_;
        auVar111._4_7_ = 0;
        auVar111._0_4_ = uVar45;
        auVar110._10_6_ = auVar111._10_6_;
        auVar110._4_5_ = 0;
        auVar110._0_4_ = uVar45;
        auVar110[9] = uVar151;
        auVar109._9_7_ = auVar110._9_7_;
        auVar109._4_5_ = 0;
        auVar109._0_4_ = uVar45;
        Var17 = CONCAT91(CONCAT81(auVar109._8_8_,uVar150),(char)(uVar45 >> 0x18));
        auVar108._6_10_ = Var17;
        auVar108[5] = uVar149;
        auVar108[4] = (char)(uVar45 >> 0x10);
        auVar108._0_4_ = uVar45;
        auVar20._2_12_ = auVar108._4_12_;
        auVar20[1] = uVar148;
        auVar20[0] = (char)(uVar45 >> 8);
        uVar157 = CONCAT11(uVar147,(char)uVar45);
        auVar107._2_14_ = auVar20;
        auVar118._0_12_ = auVar107._0_12_;
        auVar118._12_2_ = (short)Var17;
        auVar118._14_2_ = uVar12;
        auVar117._12_4_ = auVar118._12_4_;
        auVar117._0_10_ = auVar107._0_10_;
        auVar117._10_2_ = uVar11;
        auVar116._10_6_ = auVar117._10_6_;
        auVar116._0_8_ = auVar107._0_8_;
        auVar116._8_2_ = auVar108._4_2_;
        auVar21._4_8_ = auVar116._8_8_;
        auVar21._2_2_ = uVar10;
        auVar21._0_2_ = auVar20._0_2_;
        auVar71._0_4_ = CONCAT22(uVar9,uVar157);
        auVar71._4_12_ = auVar21;
        auVar63._0_4_ = -(uint)(0x7f < auVar71._0_4_);
        auVar63._4_4_ = -(uint)(0x7f < auVar21._0_4_);
        auVar63._8_4_ = -(uint)(0x7f < auVar116._8_4_);
        auVar63._12_4_ = -(uint)(0x7f < auVar117._12_4_);
        auVar71 = _DAT_144101760 & auVar63 | auVar71;
        fVar144 = (float)auVar71._0_4_ * 0.007874016;
        fVar145 = (float)auVar71._4_4_ * 0.007874016;
        local_f0 = (float)auVar71._8_4_ * 0.007874016;
      }
      else {
        uVar39 = *(ulonglong *)(lVar49 + 8 + uVar58 * 0x10);
        auVar91._8_4_ = 0;
        auVar91._0_8_ = uVar39;
        auVar91._12_2_ = (short)(uVar39 >> 0x30);
        auVar91._14_2_ = uVar12;
        auVar90._12_4_ = auVar91._12_4_;
        auVar90._8_2_ = 0;
        auVar90._0_8_ = uVar39;
        auVar90._10_2_ = uVar11;
        auVar89._10_6_ = auVar90._10_6_;
        auVar89._8_2_ = (short)(uVar39 >> 0x20);
        auVar89._0_8_ = uVar39;
        auVar15._4_8_ = auVar89._8_8_;
        auVar15._2_2_ = uVar10;
        auVar15._0_2_ = (short)(uVar39 >> 0x10);
        auVar68._0_4_ = CONCAT22(uVar9,(short)uVar39);
        auVar68._4_12_ = auVar15;
        auVar60._0_4_ = -(uint)(0x7fff < auVar68._0_4_);
        auVar60._4_4_ = -(uint)(0x7fff < auVar15._0_4_);
        auVar60._8_4_ = -(uint)(0x7fff < auVar89._8_4_);
        auVar60._12_4_ = -(uint)(0x7fff < auVar90._12_4_);
        auVar68 = _DAT_144116410 & auVar60 | auVar68;
        local_278 = (float)auVar68._0_4_ * 3.051851e-05;
        local_274 = (float)auVar68._4_4_ * 3.051851e-05;
        local_270 = (float)auVar68._8_4_ * 3.051851e-05;
        local_108 = CONCAT44(local_274,local_278);
        uVar39 = *(ulonglong *)(lVar49 + uVar58 * 0x10);
        auVar106._8_4_ = 0;
        auVar106._0_8_ = uVar39;
        auVar106._12_2_ = (short)(uVar39 >> 0x30);
        auVar106._14_2_ = uVar12;
        auVar105._12_4_ = auVar106._12_4_;
        auVar105._8_2_ = 0;
        auVar105._0_8_ = uVar39;
        auVar105._10_2_ = uVar11;
        auVar104._10_6_ = auVar105._10_6_;
        auVar104._8_2_ = (short)(uVar39 >> 0x20);
        auVar104._0_8_ = uVar39;
        auVar19._4_8_ = auVar104._8_8_;
        auVar19._2_2_ = uVar10;
        auVar19._0_2_ = (short)(uVar39 >> 0x10);
        auVar70._0_4_ = CONCAT22(uVar9,(short)uVar39);
        auVar70._4_12_ = auVar19;
        auVar62._0_4_ = -(uint)(0x7fff < auVar70._0_4_);
        auVar62._4_4_ = -(uint)(0x7fff < auVar19._0_4_);
        auVar62._8_4_ = -(uint)(0x7fff < auVar104._8_4_);
        auVar62._12_4_ = -(uint)(0x7fff < auVar105._12_4_);
        auVar70 = _DAT_144116410 & auVar62 | auVar70;
        fVar144 = (float)auVar70._0_4_ * 3.051851e-05;
        fVar145 = (float)auVar70._4_4_ * 3.051851e-05;
        local_f0 = (float)auVar70._8_4_ * 3.051851e-05;
      }
      local_f8 = CONCAT44(fVar145,fVar144);
      if (*(char *)(local_300 + 0xe1) == '\0') {
        uVar45 = *(uint *)(lVar49 + lVar48 * 8);
        auVar130._0_15_ = ZEXT415(uVar45);
        auVar130[0xf] = uVar154;
        auVar129._14_2_ = auVar130._14_2_;
        auVar129._0_13_ = ZEXT413(uVar45);
        auVar129[0xd] = uVar153;
        auVar128._13_3_ = auVar129._13_3_;
        auVar128._0_13_ = ZEXT413(uVar45);
        auVar127._12_4_ = auVar128._12_4_;
        auVar127._4_7_ = 0;
        auVar127._0_4_ = uVar45;
        auVar127[0xb] = uVar152;
        auVar126._11_5_ = auVar127._11_5_;
        auVar126._4_7_ = 0;
        auVar126._0_4_ = uVar45;
        auVar125._10_6_ = auVar126._10_6_;
        auVar125._4_5_ = 0;
        auVar125._0_4_ = uVar45;
        auVar125[9] = uVar151;
        auVar124._9_7_ = auVar125._9_7_;
        auVar124._4_5_ = 0;
        auVar124._0_4_ = uVar45;
        Var17 = CONCAT91(CONCAT81(auVar124._8_8_,uVar150),(char)(uVar45 >> 0x18));
        auVar123._6_10_ = Var17;
        auVar123[5] = uVar149;
        auVar123[4] = (char)(uVar45 >> 0x10);
        auVar123._0_4_ = uVar45;
        auVar24._2_12_ = auVar123._4_12_;
        auVar24[1] = uVar148;
        auVar24[0] = (char)(uVar45 >> 8);
        uVar158 = CONCAT11(uVar147,(char)uVar45);
        auVar122._2_14_ = auVar24;
        auVar133._0_12_ = auVar122._0_12_;
        auVar133._12_2_ = (short)Var17;
        auVar133._14_2_ = uVar12;
        auVar132._12_4_ = auVar133._12_4_;
        auVar132._0_10_ = auVar122._0_10_;
        auVar132._10_2_ = uVar11;
        auVar131._10_6_ = auVar132._10_6_;
        auVar131._0_8_ = auVar122._0_8_;
        auVar131._8_2_ = auVar123._4_2_;
        auVar25._4_8_ = auVar131._8_8_;
        auVar25._2_2_ = uVar10;
        auVar25._0_2_ = auVar24._0_2_;
        auVar76._0_4_ = CONCAT22(uVar9,uVar158);
        auVar76._4_12_ = auVar25;
        auVar66._0_4_ = -(uint)(0x7f < auVar76._0_4_);
        auVar66._4_4_ = -(uint)(0x7f < auVar25._0_4_);
        auVar66._8_4_ = -(uint)(0x7f < auVar131._8_4_);
        auVar66._12_4_ = -(uint)(0x7f < auVar132._12_4_);
        auVar76 = _DAT_144101760 & auVar66 | auVar76;
        uVar45 = *(uint *)(lVar49 + 4 + lVar48 * 8);
        fVar136 = (float)auVar76._0_4_ * 0.007874016;
        fVar137 = (float)auVar76._4_4_ * 0.007874016;
        fVar138 = (float)auVar76._8_4_ * 0.007874016;
        auVar85._0_15_ = ZEXT415(uVar45);
        auVar85[0xf] = uVar154;
        auVar84._14_2_ = auVar85._14_2_;
        auVar84._0_13_ = ZEXT413(uVar45);
        auVar84[0xd] = uVar153;
        auVar83._13_3_ = auVar84._13_3_;
        auVar83._0_13_ = ZEXT413(uVar45);
        auVar82._12_4_ = auVar83._12_4_;
        auVar82._4_7_ = 0;
        auVar82._0_4_ = uVar45;
        auVar82[0xb] = uVar152;
        auVar81._11_5_ = auVar82._11_5_;
        auVar81._4_7_ = 0;
        auVar81._0_4_ = uVar45;
        auVar80._10_6_ = auVar81._10_6_;
        auVar80._4_5_ = 0;
        auVar80._0_4_ = uVar45;
        auVar80[9] = uVar151;
        auVar79._9_7_ = auVar80._9_7_;
        auVar79._4_5_ = 0;
        auVar79._0_4_ = uVar45;
        Var17 = CONCAT91(CONCAT81(auVar79._8_8_,uVar150),(char)(uVar45 >> 0x18));
        auVar78._6_10_ = Var17;
        auVar78[5] = uVar149;
        auVar78[4] = (char)(uVar45 >> 0x10);
        auVar78._0_4_ = uVar45;
        auVar26._2_12_ = auVar78._4_12_;
        auVar26[1] = uVar148;
        auVar26[0] = (char)(uVar45 >> 8);
        uVar155 = CONCAT11(uVar147,(char)uVar45);
        auVar77._2_14_ = auVar26;
        auVar88._0_12_ = auVar77._0_12_;
        auVar88._12_2_ = (short)Var17;
        auVar88._14_2_ = uVar12;
        auVar87._12_4_ = auVar88._12_4_;
        auVar87._0_10_ = auVar77._0_10_;
        auVar87._10_2_ = uVar11;
        auVar86._10_6_ = auVar87._10_6_;
        auVar86._0_8_ = auVar77._0_8_;
        auVar86._8_2_ = auVar78._4_2_;
        auVar27._4_8_ = auVar86._8_8_;
        auVar27._2_2_ = uVar10;
        auVar27._0_2_ = auVar26._0_2_;
        auVar135._0_4_ = CONCAT22(uVar9,uVar155);
        auVar135._4_12_ = auVar27;
        auVar67._0_4_ = -(uint)(0x7f < auVar135._0_4_);
        auVar67._4_4_ = -(uint)(0x7f < auVar27._0_4_);
        auVar67._8_4_ = -(uint)(0x7f < auVar86._8_4_);
        auVar67._12_4_ = -(uint)(0x7f < auVar87._12_4_);
        auVar135 = _DAT_144101760 & auVar67 | auVar135;
        fVar140 = (float)auVar135._0_4_ * 0.007874016;
        fVar142 = (float)auVar135._4_4_ * 0.007874016;
        fVar143 = (float)auVar135._8_4_ * 0.007874016;
        fVar139 = (float)auVar135._12_4_ * 0.007874016;
        fVar146 = (fVar137 * fVar140 - fVar136 * fVar142) * fVar139;
        fVar137 = (fVar138 * fVar142 - fVar137 * fVar143) * fVar139;
        fVar139 = (fVar136 * fVar143 - fVar138 * fVar140) * fVar139;
      }
      else {
        uVar39 = *(ulonglong *)(lVar49 + uVar58 * 0x10);
        auVar121._8_4_ = 0;
        auVar121._0_8_ = uVar39;
        auVar121._12_2_ = (short)(uVar39 >> 0x30);
        auVar121._14_2_ = uVar12;
        auVar120._12_4_ = auVar121._12_4_;
        auVar120._8_2_ = 0;
        auVar120._0_8_ = uVar39;
        auVar120._10_2_ = uVar11;
        auVar119._10_6_ = auVar120._10_6_;
        auVar119._8_2_ = (short)(uVar39 >> 0x20);
        auVar119._0_8_ = uVar39;
        auVar22._4_8_ = auVar119._8_8_;
        auVar22._2_2_ = uVar10;
        auVar22._0_2_ = (short)(uVar39 >> 0x10);
        auVar72._0_4_ = CONCAT22(uVar9,(short)uVar39);
        auVar72._4_12_ = auVar22;
        auVar64._0_4_ = -(uint)(0x7fff < auVar72._0_4_);
        auVar64._4_4_ = -(uint)(0x7fff < auVar22._0_4_);
        auVar64._8_4_ = -(uint)(0x7fff < auVar119._8_4_);
        auVar64._12_4_ = -(uint)(0x7fff < auVar120._12_4_);
        auVar72 = _DAT_144116410 & auVar64 | auVar72;
        uVar58 = *(ulonglong *)(lVar49 + 8 + uVar58 * 0x10);
        fVar140 = (float)auVar72._0_4_ * 3.051851e-05;
        fVar142 = (float)auVar72._4_4_ * 3.051851e-05;
        fVar143 = (float)auVar72._8_4_ * 3.051851e-05;
        auVar75._8_4_ = 0;
        auVar75._0_8_ = uVar58;
        auVar75._12_2_ = (short)(uVar58 >> 0x30);
        auVar75._14_2_ = uVar12;
        auVar74._12_4_ = auVar75._12_4_;
        auVar74._8_2_ = 0;
        auVar74._0_8_ = uVar58;
        auVar74._10_2_ = uVar11;
        auVar73._10_6_ = auVar74._10_6_;
        auVar73._8_2_ = (short)(uVar58 >> 0x20);
        auVar73._0_8_ = uVar58;
        auVar23._4_8_ = auVar73._8_8_;
        auVar23._2_2_ = uVar10;
        auVar23._0_2_ = (short)(uVar58 >> 0x10);
        auVar134._0_4_ = CONCAT22(uVar9,(short)uVar58);
        auVar134._4_12_ = auVar23;
        auVar65._0_4_ = -(uint)(0x7fff < auVar134._0_4_);
        auVar65._4_4_ = -(uint)(0x7fff < auVar23._0_4_);
        auVar65._8_4_ = -(uint)(0x7fff < auVar73._8_4_);
        auVar65._12_4_ = -(uint)(0x7fff < auVar74._12_4_);
        auVar134 = _DAT_144116410 & auVar65 | auVar134;
        fVar136 = (float)auVar134._0_4_ * 3.051851e-05;
        fVar137 = (float)auVar134._4_4_ * 3.051851e-05;
        fVar138 = (float)auVar134._8_4_ * 3.051851e-05;
        fVar139 = (float)auVar134._12_4_ * 3.051851e-05;
        fVar146 = (fVar142 * fVar136 - fVar140 * fVar137) * fVar139;
        fVar137 = (fVar143 * fVar137 - fVar142 * fVar138) * fVar139;
        fVar139 = (fVar140 * fVar138 - fVar143 * fVar136) * fVar139;
      }
      local_268 = 0;
      uStack_260 = 0x3f80000000000000;
      local_298 = (uint *)CONCAT44(fVar145,fVar144);
      local_288 = CONCAT44(fVar139,fVar137);
      puStack_290 = (uint *)(ulonglong)(uint)local_f0;
      local_280 = (ulonglong)(uint)fVar146;
      local_26c = 0;
      local_100 = local_270;
      fVar145 = (float)FMatrix::Determinant(&local_298);
      if (0.0 <= fVar145) {
        uVar141 = 0x3f800000;
      }
      else {
        uVar141 = 0xbf800000;
      }
      if (local_360 == '\0') {
        plVar41 = &local_1b0;
        local_1b0 = _DAT_1464aa6c0;
        uStack_1a8 = _DAT_1464aa6c8;
      }
      else {
        lVar49 = *(longlong *)(lVar36 + 0x1f0);
        if (*(longlong *)(lVar36 + 0x1f0) == 0) {
          lVar49 = lVar36 + 0x140;
        }
        plVar41 = (longlong *)
                  FLinearColor::FLinearColor
                            (local_1a0,
                             (ulonglong)(*(int *)(lVar49 + 0x50) * uVar50) +
                             *(longlong *)(lVar49 + 0x48));
      }
      local_318 = (uint *)*plVar41;
      puStack_310 = (uint *)plVar41[1];
      if (local_367 == '\0') {
        local_1c8 = _DAT_1464aa6c0;
        uStack_1c0 = _DAT_1464aa6c8;
        plVar41 = &local_1c8;
      }
      else {
        lVar49 = *(longlong *)(lVar36 + 0x1f0);
        if (*(longlong *)(lVar36 + 0x1f0) == 0) {
          lVar49 = lVar36 + 0x140;
        }
        plVar41 = (longlong *)
                  FLinearColor::FLinearColor
                            (&local_2d8,
                             (ulonglong)(*(int *)(lVar49 + 0xa8) * uVar50) +
                             *(longlong *)(lVar49 + 0xa0));
      }
      lVar30 = local_350;
      lVar28 = *plVar41;
      uVar4 = *(undefined4 *)((longlong)plVar41 + 4);
      puVar51 = (uint *)*plVar41;
      lVar29 = plVar41[1];
      uVar13 = *(undefined4 *)((longlong)plVar41 + 0xc);
      lVar7 = plVar41[1];
      uVar58 = 0;
      lVar49 = *local_2b8;
      *(undefined8 *)(lVar49 + lVar47) = local_108;
      *(float *)(lVar49 + 8 + lVar47) = local_100;
      lVar49 = *local_240;
      *(undefined8 *)(lVar49 + lVar47) = local_f8;
      *(float *)(lVar49 + 8 + lVar47) = local_f0;
      local_2f8 = local_318;
      puStack_2f0 = puStack_310;
      *(undefined4 *)(*local_230 + lVar48 * 4) = uVar141;
      lVar49 = *local_258;
      *(longlong *)(lVar49 + local_308) = (longlong)local_318;
      ((longlong *)(lVar49 + local_308))[1] = (longlong)puStack_310;
      puVar8 = (undefined4 *)(*local_250 + local_308);
      *puVar8 = (int)lVar28;
      puVar8[1] = uVar4;
      puVar8[2] = (int)lVar29;
      puVar8[3] = uVar13;
      local_318 = puVar51;
      puStack_310 = (uint *)lVar7;
      if (0 < local_328) {
        lVar47 = 0;
        local_2b0 = (longlong)local_328;
        do {
          if (*(char *)(lVar36 + 0xe0) == '\0') {
            lVar36 = (ulonglong)*(uint *)(lVar36 + 0xd8) * 4 * lVar30 + *(longlong *)(lVar36 + 200);
            uVar3 = *(ushort *)(lVar36 + 2 + uVar58 * 4);
            uVar50 = (uVar3 & 0xffff8000) << 0x10;
            if ((uVar3 & 0x7c00) == 0) {
              uVar45 = uVar3 & 0x3ff;
              if ((uVar3 & 0x3ff) != 0) {
                if ((*(int *)(local_2e8 + 0x38) < DAT_1468509dc) &&
                   (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                  DAT_1468509d8 = 1.442695;
                  _Init_thread_footer(&DAT_1468509dc);
                }
                fVar145 = _guard_xfg_dispatch_icall_nop((float)uVar45);
                iVar52 = 10 - (int)(fVar145 * DAT_1468509d8);
                uVar50 = uVar45 << ((char)iVar52 + 0xdU & 0x1f) & 0x7fffff |
                         (0x71U - iVar52 & 0xff) << 0x17 | uVar50;
              }
            }
            else if ((uVar3 & 0x7c00) == 0x7c00) {
              uVar50 = uVar50 | 0x477fe000;
            }
            else {
              uVar50 = ((uVar3 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar3 & 0x3ff) << 0xd | uVar50;
            }
            local_364 = uVar50;
            uVar3 = *(ushort *)(lVar36 + uVar58 * 4);
            uVar50 = (uVar3 & 0xffff8000) << 0x10;
            lVar36 = local_300;
            uVar45 = local_364;
            if ((uVar3 & 0x7c00) == 0) {
              uVar46 = uVar3 & 0x3ff;
              uVar32 = uVar50;
              if ((uVar3 & 0x3ff) != 0) {
                if ((*(int *)(local_2e8 + 0x38) < DAT_1468509dc) &&
                   (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                  DAT_1468509d8 = 1.442695;
                  _Init_thread_footer(&DAT_1468509dc);
                }
                fVar145 = _guard_xfg_dispatch_icall_nop((float)uVar46);
                iVar52 = 10 - (int)(fVar145 * DAT_1468509d8);
                uVar50 = uVar46 << ((char)iVar52 + 0xdU & 0x1f) & 0x7fffff |
                         (0x71U - iVar52 & 0xff) << 0x17 | uVar50;
                lVar36 = local_300;
                uVar45 = local_364;
                uVar32 = uVar50;
              }
            }
            else if ((uVar3 & 0x7c00) == 0x7c00) {
              uVar50 = uVar50 | 0x477fe000;
              uVar32 = uVar50;
            }
            else {
              uVar50 = ((uVar3 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar3 & 0x3ff) << 0xd | uVar50;
              uVar32 = uVar50;
            }
          }
          else {
            lVar48 = (ulonglong)*(uint *)(lVar36 + 0xd8) * 8 * lVar30 + *(longlong *)(lVar36 + 200);
            uVar50 = *(uint *)(lVar48 + uVar58 * 8);
            uVar45 = *(uint *)(lVar48 + 4 + uVar58 * 8);
            uVar32 = local_35c;
          }
          local_35c = uVar32;
          uVar58 = (ulonglong)((int)uVar58 + 1);
          lVar48 = *(longlong *)(*local_248 + lVar47);
          lVar47 = lVar47 + 0x10;
          local_2b0 = local_2b0 + -1;
          *(uint *)(lVar48 + lVar30 * 8) = uVar50;
          *(uint *)(lVar48 + 4 + lVar30 * 8) = uVar45;
        } while (local_2b0 != 0);
        local_2b0 = 0;
        lVar48 = local_350;
        lVar47 = local_358;
        uVar50 = local_340;
      }
      local_340 = uVar50 + 1;
      local_350 = lVar48 + 1;
      local_358 = lVar47 + 0xc;
      local_308 = local_308 + 0x10;
      plVar56 = local_330;
    } while ((int)local_340 < (int)local_33c);
  }
  FUN_14272be40(lVar36 + 0x208,&local_220);
  iVar52 = *(int *)(lVar36 + 0x480);
  plVar41 = plVar56 + 0x1c;
  local_358 = CONCAT44(local_358._4_4_,iVar52);
  FUN_1405effc0(plVar41,((int)plVar56[0x1d] - *(int *)((longlong)plVar56 + 0x114)) + iVar52);
  local_35c = 0;
  if (iVar52 != 0) {
    plVar57 = plVar56 + 0xe;
    local_2a8 = plVar56 + 0x15;
    local_250 = plVar57;
    do {
      plVar59 = *(longlong **)(lVar36 + 0x478);
      local_2f8 = (uint *)0x0;
      puStack_2f0 = (uint *)0x0;
      local_350 = (longlong)(int)local_35c * 3;
      puVar38 = (undefined8 *)
                ((longlong)(int)plVar59[(longlong)(int)local_35c * 3] * 0x30 +
                *(longlong *)(*(longlong *)(local_2e0 + 0x28) + 0x70));
      uVar1 = *puVar38;
      local_258 = plVar59;
      iVar52 = FUN_140873680(plVar41,&local_2f8);
      lVar47 = (longlong)iVar52;
      local_2b0 = CONCAT44(local_2b0._4_4_,iVar52);
      if (local_2f8 != (uint *)0x0) {
        FMemory::Free();
      }
      FMeshDescription::CreatePolygonGroup_Internal(plVar56,iVar52);
      *(undefined8 *)(*local_1e0 + lVar47 * 8) = puVar38[2];
      puVar38 = (undefined8 *)UObjectBaseUtility::GetPathName(uVar1,&local_1c8,0);
      if (*(int *)(puVar38 + 1) == 0) {
        puVar43 = &DAT_143f3eda8;
      }
      else {
        puVar43 = (undefined2 *)*puVar38;
      }
      lVar36 = *local_1d8;
      puVar38 = (undefined8 *)FName::FName(&local_230,puVar43,1);
      *(undefined8 *)(lVar36 + lVar47 * 8) = *puVar38;
      if (local_1c8 != 0) {
        FMemory::Free();
      }
      local_158 = 0;
      local_150 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      *(undefined1 *)(*local_1d0 + lVar47) =
           *(undefined1 *)((longlong)plVar59 + local_350 * 8 + 0x14);
      local_148 = 0;
      local_140 = 0;
      *(undefined1 *)(*local_1b8 + lVar47) =
           *(undefined1 *)((longlong)plVar59 + local_350 * 8 + 0x15);
      TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(&local_138,0,0);
      lVar36 = local_2e0;
      local_118 = 0xffffffff;
      lVar48 = FUN_14088eef0(local_2e0 + 0x78,&local_2d8,iVar52);
      puVar8 = *(undefined4 **)(lVar48 + 8);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = (undefined4)local_158;
        puVar8[1] = local_158._4_4_;
        puVar8[2] = (undefined4)local_150;
        *(undefined8 *)(puVar8 + 4) = 0;
        *(undefined8 *)(puVar8 + 6) = 0;
        TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(puVar8 + 8,0,0);
        puVar8[0x10] = 0xffffffff;
        puVar8[0x11] = 0;
        TSparseArray<FMeshTriangle,FDefaultSparseArrayAllocator>::operator=(puVar8 + 4,&local_148);
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_148);
      lVar36 = *(longlong *)(lVar36 + 0x78);
      uVar55 = *(uint *)(plVar59 + local_350 + 1);
      local_248 = (longlong *)(lVar36 + 0x10 + lVar47 * 0x48);
      local_308 = CONCAT44(local_308._4_4_,uVar55);
      FUN_14089d230(local_248,uVar55);
      *(uint *)(lVar36 + lVar47 * 0x48) = local_35c;
      *(uint *)(lVar36 + 8 + lVar47 * 0x48) = uVar55;
      *(int *)(lVar36 + 4 + lVar47 * 0x48) = (int)plVar59[local_350];
      FUN_14089d0c0(plVar56 + 0x15,
                    ((int)plVar56[0x16] - *(int *)((longlong)plVar56 + 0xdc)) + uVar55);
      TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Reserve(plVar57,(uVar55 * 3 - *(int *)((longlong)plVar56 + 0xa4)) + (int)plVar56[0xf]);
      local_364 = 0;
      if (uVar55 != 0) {
        local_338 = 0;
        lVar47 = local_220;
        cVar33 = local_214;
        do {
          plVar41 = local_330;
          iVar52 = local_338 + *(int *)((longlong)plVar59 + local_350 * 8 + 4);
          lVar36 = *local_1e8;
          if (cVar33 == '\0') {
            local_340 = (uint)*(ushort *)(lVar47 + (longlong)iVar52 * 2);
          }
          else {
            local_340 = *(uint *)(lVar47 + (longlong)iVar52 * 4);
          }
          fVar145 = *(float *)(lVar36 + (longlong)(int)local_340 * 0x18);
          if (cVar33 == '\0') {
            uVar34 = (uint)*(ushort *)(lVar47 + 2 + (longlong)iVar52 * 2);
          }
          else {
            uVar34 = *(uint *)(lVar47 + 4 + (longlong)iVar52 * 4);
          }
          local_2b8 = (longlong *)CONCAT44(local_2b8._4_4_,uVar34);
          fVar144 = *(float *)(lVar36 + (longlong)(int)uVar34 * 0x18);
          local_f8 = CONCAT44(fVar144,fVar145);
          if (cVar33 == '\0') {
            local_33c = (uint)*(ushort *)(lVar47 + 4 + (longlong)iVar52 * 2);
          }
          else {
            local_33c = *(uint *)(lVar47 + 8 + (longlong)iVar52 * 4);
          }
          local_f0 = *(float *)(lVar36 + (longlong)(int)local_33c * 0x18);
          if (((fVar145 != fVar144) && (fVar144 != local_f0)) && (local_f0 != fVar145)) {
            uVar55 = 0;
            lVar47 = 0;
            do {
              iVar52 = *(int *)((longlong)&local_f8 + lVar47);
              uVar55 = uVar55 + 1;
              iVar44 = *(int *)((longlong)&local_f8 + (ulonglong)(uVar55 % 3) * 4);
              lVar36 = *plVar41;
              piVar54 = *(int **)((longlong)iVar52 * 0x20 + 0x10 + lVar36);
              piVar37 = piVar54 + *(int *)((longlong)iVar52 * 0x20 + 0x18 + lVar36);
              if (piVar54 != piVar37) {
                do {
                  iVar35 = *piVar54;
                  iVar5 = *(int *)(*plVar57 + (longlong)iVar35 * 0x18);
                  iVar6 = *(int *)(*plVar57 + 4 + (longlong)iVar35 * 0x18);
                  if (((iVar5 == iVar52) && (iVar6 == iVar44)) ||
                     ((iVar5 == iVar44 && (iVar6 == iVar52)))) {
                    if (iVar35 != DAT_14652d644) goto LAB_14088af51;
                    break;
                  }
                  piVar54 = piVar54 + 1;
                } while (piVar54 != piVar37);
              }
              local_190 = CONCAT44(DAT_14652d63c,DAT_14652d63c);
              local_298 = (uint *)0x0;
              puStack_290 = (uint *)0x0;
              uStack_188 = 0;
              local_180 = 0;
              iVar35 = FUN_1408734c0(plVar57,&local_190);
              if (uStack_188 != 0) {
                FMemory::Free();
              }
              local_378 = (uint **)&local_298;
              FMeshDescription::CreateEdge_Internal(plVar41,iVar35,iVar52,iVar44);
LAB_14088af51:
              plVar56 = local_248;
              uVar141 = DAT_14652d640;
              *(int *)((longlong)&local_108 + lVar47) = iVar35;
              lVar47 = lVar47 + 4;
            } while (uVar55 < 3);
            lVar36 = (longlong)(int)local_364;
            local_240 = (longlong *)CONCAT44(DAT_14652d640,DAT_14652d640);
            lVar47 = FUN_14088eaf0(local_248,local_1a0,local_364);
            uVar58 = local_2b0;
            uVar4 = (undefined4)local_2b0;
            puVar38 = *(undefined8 **)(lVar47 + 8);
            if (puVar38 != (undefined8 *)0x0) {
              *puVar38 = local_240;
              *(undefined4 *)(puVar38 + 1) = uVar141;
            }
            lVar47 = *plVar56;
            if ((*(int *)(local_2e8 + 0x38) < DAT_1468606f0) &&
               (_Init_thread_header(&DAT_1468606f0), DAT_1468606f0 == -1)) {
              atexit((_func_5014 *)&LAB_143e43a60);
              _Init_thread_footer(&DAT_1468606f0);
            }
            DAT_1468606e8 = 0;
            if (DAT_1468606ec < 3) {
              DAT_1468606e8 = 0;
              TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_1468606e0,3);
            }
            DAT_1468606e8 = DAT_1468606e8 + 3;
            if (DAT_1468606ec < DAT_1468606e8) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_1468606e0);
            }
            local_318 = (uint *)0x0;
            puStack_310 = (uint *)0x0;
            *DAT_1468606e0 = local_340;
            local_190 = 0;
            uStack_188 = 0;
            DAT_1468606e0[1] = (uint)local_108;
            *(uint *)(lVar47 + lVar36 * 0xc) = local_340;
            local_180 = 0;
            uStack_178 = 0;
            DAT_1468606e0[2] = (uint)local_2b8;
            local_170 = 0;
            local_168 = 0;
            DAT_1468606e0[3] = (uint)local_108._4_4_;
            *(uint *)(lVar47 + 4 + lVar36 * 0xc) = (uint)local_2b8;
            DAT_1468606e0[4] = local_33c;
            DAT_1468606e0[5] = (uint)local_100;
            *(uint *)(lVar47 + 8 + lVar36 * 0xc) = local_33c;
            local_160 = DAT_14652d648;
            iVar44 = FUN_1408735a0(local_2a8,&local_190);
            lVar48 = (longlong)iVar44;
            FMeshPolygon::~FMeshPolygon(&local_190);
            local_378 = &local_318;
            FUN_140879c90(local_330,iVar44,uVar58 & 0xffffffff);
            puVar31 = local_318;
            puVar51 = local_318;
            for (iVar52 = (int)puStack_310; iVar52 != 0; iVar52 = iVar52 + -1) {
                    /* WARNING: Read-only address (ram,0x000144101760) is written */
                    /* WARNING: Read-only address (ram,0x000144116410) is written */
              if (*(longlong *)puVar51 != 0) {
                FMemory::Free();
              }
              puVar51 = puVar51 + 4;
            }
                    /* WARNING: Read-only address (ram,0x000144101760) is written */
                    /* WARNING: Read-only address (ram,0x000144116410) is written */
            if (puVar31 != (uint *)0x0) {
              FMemory::Free(puVar31);
            }
            lVar49 = local_2e0;
            local_210 = 0;
            lStack_208 = 0;
            lStack_200 = 0;
            TSparseArray<FRenderingPolygon,FDefaultSparseArrayAllocator>::Insert
                      (local_2e0 + 0x40,iVar44,&local_210);
            if (lStack_208 != 0) {
              FMemory::Free();
            }
            lVar7 = *(longlong *)(lVar49 + 0x40) + lVar48 * 0x18;
            *(undefined4 *)(*(longlong *)(lVar49 + 0x40) + lVar48 * 0x18) = uVar4;
            iVar52 = *(int *)(lVar7 + 0x10);
            *(int *)(lVar7 + 0x10) = iVar52 + 1;
            if (*(int *)(lVar7 + 0x14) < iVar52 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar7 + 8,iVar52);
            }
            *(uint *)(*(longlong *)(lVar7 + 8) + (longlong)iVar52 * 4) = local_364;
            lVar48 = lVar48 * 0x38 + *local_2a8;
            iVar52 = *(int *)(lVar48 + 0x28);
            *(int *)(lVar48 + 0x28) = iVar52 + 1;
            if (*(int *)(lVar48 + 0x2c) < iVar52 + 1) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(lVar48 + 0x20,iVar52);
            }
            lVar48 = *(longlong *)(lVar48 + 0x20);
            *(undefined8 *)(lVar48 + (longlong)iVar52 * 0xc) =
                 *(undefined8 *)(lVar47 + lVar36 * 0xc);
            *(undefined4 *)(lVar48 + 8 + (longlong)iVar52 * 0xc) =
                 *(undefined4 *)(lVar47 + 8 + lVar36 * 0xc);
            lVar47 = local_220;
            plVar57 = local_250;
            plVar59 = local_258;
            uVar55 = (uint)local_308;
            cVar33 = local_214;
          }
          local_364 = local_364 + 1;
          local_338 = local_338 + 3;
          plVar56 = local_330;
        } while (local_364 < uVar55);
      }
      plVar41 = plVar56 + 0x1c;
      local_35c = local_35c + 1;
      lVar36 = local_300;
    } while (local_35c < (uint)local_358);
  }
  FUN_1421e9100(plVar56);
  if (0 < local_328) {
    FUN_1421e9620(plVar56,0);
  }
  if ((*(int *)(local_2e8 + 0x38) < DAT_146860708) &&
     (_Init_thread_header(&DAT_146860708), DAT_146860708 == -1)) {
    atexit((_func_5014 *)&LAB_143e43c80);
    _Init_thread_footer(&DAT_146860708);
  }
  DAT_146860700 = 0;
  if ((DAT_146860704 < 0) && (DAT_146860704 != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_1468606f8,0);
  }
  param_2 = local_228;
  local_2d8 = 0;
  iStack_2d4 = 1;
  local_2c8 = 0xffffffff;
  lVar36 = *(longlong *)(local_228 + 0x28);
  lVar48 = lVar36 + 0xa8;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  lVar47 = lVar36 + 0xb8;
  uVar55 = 0;
  lStack_2d0 = lVar47;
  if (*(int *)(lVar36 + 0xd0) != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2d8);
    uVar55 = *(uint *)(lVar36 + 0xd0);
  }
  uVar34 = *(uint *)(lVar36 + 0xd0);
  lStack_208 = CONCAT44(iStack_2d4,local_2d8);
  local_2d8 = (int)uVar34 >> 5;
  uStack_1f8 = CONCAT44(uStack_2c4,local_2c8);
  uStack_1f0 = CONCAT44(uStack_2bc,uStack_2c0);
  bVar42 = (byte)uVar34 & 0x1f;
  lStack_200 = lStack_2d0;
  iStack_2d4 = 1 << bVar42;
  uStack_2c0 = uVar34 & 0xffffffe0;
  local_2c8 = -1 << bVar42;
  local_180 = lStack_2d0;
  lStack_2d0 = lVar47;
  uStack_2c4 = uVar34;
  local_210 = lVar48;
  local_190 = lVar48;
  uStack_188 = lStack_208;
  uStack_178 = uStack_1f8;
  local_170 = uStack_1f0;
  if (uVar34 != uVar55) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    uVar34 = uStack_2c4;
    lVar47 = lStack_2d0;
  }
  while( true ) {
    iVar52 = DAT_146860700;
    if ((uStack_178._4_4_ == uVar34) && (local_180 == lVar47)) {
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
    if ((bVar14) && (local_190 == lVar48)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if (!bVar14) break;
    lVar36 = (longlong)DAT_146860700;
    uVar55 = DAT_14652d64c;
    if ((int)uStack_178._4_4_ < *(int *)(local_180 + 0x18)) {
      uVar55 = uStack_178._4_4_;
    }
    DAT_146860700 = DAT_146860700 + 1;
    if (DAT_146860704 < DAT_146860700) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_1468606f8,iVar52);
    }
    *(uint *)(DAT_1468606f8 + lVar36 * 4) = uVar55;
    uStack_178 = CONCAT44(uStack_178._4_4_,(uint)uStack_178 & ~uStack_188._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
  }
  FUN_140886010(param_2,&DAT_1468606f8);
  param_1 = local_2e0;
LAB_14088b44a:
  puVar38 = (undefined8 *)UStaticMesh::GetBounds(*(undefined8 *)(param_1 + 0x28),&local_2d8);
  uVar1 = puVar38[1];
  *(undefined8 *)(param_1 + 0xc0) = *puVar38;
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = puVar38[2];
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(puVar38 + 3);
  FUN_140898f40(param_2);
  FUN_1408985f0(param_2);
  return;
}



// FUNCTION 14088b620 FUN_14088b620 body=412 status=ok
// SIG undefined FUN_14088b620(void)

void FUN_14088b620(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  puVar3 = (undefined8 *)param_1[0x1af];
  uVar5 = (longlong)(int)param_1[0x1b0] & 0x1fffffffffffffff;
  if (puVar3 + (int)param_1[0x1b0] < puVar3) {
    uVar5 = uVar4;
  }
  uVar2 = uVar4;
  if (uVar5 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar3 + 0x278))((longlong *)*puVar3,param_1);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar5);
  }
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)param_1[0x1af];
    uVar5 = (longlong)(int)param_1[0x1b0] & 0x1fffffffffffffff;
    if (puVar3 + (int)param_1[0x1b0] < puVar3) {
      uVar5 = uVar4;
    }
    uVar2 = uVar4;
    if (uVar5 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar3 + 0x280))((longlong *)*puVar3,param_1,1);
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 != uVar5);
    }
  }
  puVar3 = (undefined8 *)param_1[0x1af];
  uVar5 = (longlong)(int)param_1[0x1b0] & 0x1fffffffffffffff;
  if (puVar3 + (int)param_1[0x1b0] < puVar3) {
    uVar5 = uVar4;
  }
  uVar2 = uVar4;
  if (uVar5 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar3 + 0x288))((longlong *)*puVar3,param_1);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar5);
  }
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)param_1[0x1af];
    uVar5 = (longlong)(int)param_1[0x1b0] & 0x1fffffffffffffff;
    if (puVar3 + (int)param_1[0x1b0] < puVar3) {
      uVar5 = uVar4;
    }
    if (uVar5 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar3 + 0x290))((longlong *)*puVar3,param_1,1,0);
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 != uVar5);
    }
  }
  return;
}



// FUNCTION 14088b7c0 InitializeFromEditableMesh body=83 status=ok
// SIG undefined InitializeFromEditableMesh(void)

void UEditableMeshAdapter::InitializeFromEditableMesh(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x13,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x13,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 14088b820 FUN_14088b820 body=1846 status=ok
// SIG undefined FUN_14088b820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14088b820(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  longlong lVar18;
  int iVar19;
  undefined1 auStack_148 [32];
  int local_128;
  uint uStack_124;
  uint *puStack_120;
  uint local_118;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  longlong *local_100;
  undefined8 uStack_f8;
  uint *local_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined8 local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0 [2];
  undefined1 local_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  uint *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar1 = param_1 + 8;
  iVar19 = 0;
  param_1[5] = *(longlong *)(param_2 + 0xd50);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  local_108 = param_1;
  local_c8 = plVar1;
  TSparseArray<FRenderingPolygon,FDefaultSparseArrayAllocator>::Reset(plVar1);
  TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Reserve(plVar1,0);
  param_1 = param_1 + 0xf;
  local_d0 = param_1;
  TSparseArray<FRenderingPolygonGroup,FDefaultSparseArrayAllocator>::Reset(param_1);
  FUN_14089d530(param_1,0);
  plVar1 = local_108;
  lVar5 = *(longlong *)(param_2 + 0x28);
  uStack_114 = 0;
  iStack_110 = 0;
  local_128 = 0;
  uStack_124 = 1;
  lVar14 = lVar5 + 0xe0;
  uVar3 = *(uint *)(lVar5 + 0x108);
  puVar17 = (uint *)(lVar5 + 0xf0);
  if (uVar3 != 0) {
    puVar16 = *(uint **)(lVar5 + 0x100);
    if (*(uint **)(lVar5 + 0x100) == (uint *)0x0) {
      puVar16 = puVar17;
    }
    uVar4 = *puVar16;
    iStack_110 = iVar19;
    local_128 = iVar19;
    while (uVar4 == 0) {
      lVar11 = (longlong)local_128;
      iStack_110 = iStack_110 + 0x20;
      iVar9 = local_128 + 1;
      bVar7 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_128;
      local_128 = iVar9;
      if (bVar7) goto LAB_14088b963;
      uVar4 = puVar16[lVar11 + 1];
    }
    uStack_124 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar9 = 0x1f;
    if (uStack_124 != 0) {
      for (; uStack_124 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_124 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_114 = (iStack_110 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_114) {
LAB_14088b963:
      uStack_114 = uVar3;
    }
  }
  uVar4 = *(uint *)(lVar5 + 0x108);
  uStack_e8 = 0xffffffff;
  uStack_e4 = uStack_114;
  local_e0 = CONCAT44(uStack_10c,iStack_110);
  uStack_f8 = CONCAT44(uStack_124,local_128);
  local_118 = -1 << ((byte)uVar4 & 0x1f);
  uVar15 = uVar4 & 0xffffffe0;
  puStack_120 = puVar17;
  uStack_114 = uVar4;
  local_100 = (longlong *)lVar14;
  local_f0 = puVar17;
  if (uVar4 != uVar3) {
    puVar16 = *(uint **)(lVar5 + 0x100);
    if (*(uint **)(lVar5 + 0x100) == (uint *)0x0) {
      puVar16 = puVar17;
    }
    uVar10 = puVar16[(int)uVar4 >> 5] & local_118;
    iVar9 = (int)uVar4 >> 5;
    while (uVar10 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_14088ba4a;
      uVar10 = puVar16[(longlong)iVar9 + 1];
      local_118 = 0xffffffff;
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
    uStack_114 = (uVar15 - iVar9) + 0x1f;
    uVar4 = uStack_114;
    if ((int)uVar3 < (int)uStack_114) {
LAB_14088ba4a:
      uStack_114 = uVar3;
      uVar4 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_e4 == uVar4) && (local_f0 == puVar17)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if ((bVar7) && (local_100 == (longlong *)lVar14)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) break;
    uVar3 = DAT_14652d648;
    if ((int)uStack_e4 < (int)local_f0[6]) {
      uVar3 = uStack_e4;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    local_58 = 0xffffffff;
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    puStack_88 = (uint *)0x0;
    uStack_80 = 0;
    local_68 = 0;
    local_60 = 0;
    local_54 = 0;
    lVar11 = FUN_14088eef0(plVar1 + 0xf,local_c0,uVar3);
    puVar6 = *(undefined4 **)(lVar11 + 8);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = (undefined4)local_98;
      puVar6[1] = local_98._4_4_;
      puVar6[2] = (undefined4)uStack_90;
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 6) = 0;
      *(undefined8 *)(puVar6 + 0xc) = 0;
      *(undefined8 *)(puVar6 + 0xe) = 0;
      puVar6[0x10] = 0xffffffff;
      puVar6[0x11] = 0;
      TSparseArray<FMeshTriangle,FDefaultSparseArrayAllocator>::operator=();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&puStack_88);
    piVar2 = (int *)(plVar1[0xf] + (longlong)(int)uVar3 * 0x48);
    *piVar2 = iVar19;
    if (*(int *)(lVar5 + 0xcd8) != *(int *)(lVar5 + 0xd04)) {
      lVar11 = *(longlong *)(lVar5 + 0xd10);
      if (*(longlong *)(lVar5 + 0xd10) == 0) {
        lVar11 = lVar5 + 0xd08;
      }
      iVar9 = *(int *)(lVar11 + ((longlong)
                                 ((int)((ulonglong)DAT_146aedb48 >> 0x20) + (int)DAT_146aedb48) &
                                (longlong)*(int *)(lVar5 + 0xd18) - 1U) * 4);
      if (iVar9 != -1) {
        do {
          plVar12 = (longlong *)((longlong)iVar9 * 0x38 + *(longlong *)(lVar5 + 0xcd0));
          if (*plVar12 == DAT_146aedb48) {
            if (iVar9 != -1) goto LAB_14088bbb0;
            break;
          }
          iVar9 = (int)plVar12[6];
        } while (iVar9 != -1);
      }
    }
    plVar12 = (longlong *)0x0;
LAB_14088bbb0:
    local_d8 = *(longlong *)(*(longlong *)plVar12[2] + (longlong)(int)uVar3 * 8);
    lVar11 = *(longlong *)(plVar1[5] + 0x70);
    for (lVar13 = lVar11; lVar13 != (longlong)*(int *)(plVar1[5] + 0x78) * 0x30 + lVar11;
        lVar13 = lVar13 + 0x30) {
      if (*(longlong *)(lVar13 + 0x10) == local_d8) {
        iVar9 = (int)((lVar13 - lVar11) / 0x30);
        goto LAB_14088bbf4;
      }
    }
    iVar9 = -1;
LAB_14088bbf4:
    piVar2[1] = iVar9;
    uStack_e8 = uStack_e8 & ~uStack_f8._4_4_;
    iVar19 = iVar19 + 1;
    piVar2[2] = 0;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f8);
  }
  uStack_124 = 1;
  plVar1 = (longlong *)(lVar5 + 0xa8);
  uVar3 = *(uint *)(lVar5 + 0xd0);
  local_f0 = (uint *)(lVar5 + 0xb8);
  local_128 = 0;
  uStack_114 = 0;
  iStack_110 = 0;
  if (uVar3 != 0) {
    puVar17 = *(uint **)(lVar5 + 200);
    if (*(uint **)(lVar5 + 200) == (uint *)0x0) {
      puVar17 = local_f0;
    }
    uVar4 = *puVar17;
    iStack_110 = 0;
    local_128 = 0;
    while (uVar4 == 0) {
      lVar14 = (longlong)local_128;
      iStack_110 = iStack_110 + 0x20;
      iVar19 = local_128 + 1;
      bVar7 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_128;
      local_128 = iVar19;
      if (bVar7) goto LAB_14088bd03;
      uVar4 = puVar17[lVar14 + 1];
    }
    uStack_124 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar19 = 0x1f;
    if (uStack_124 != 0) {
      for (; uStack_124 >> iVar19 == 0; iVar19 = iVar19 + -1) {
      }
    }
    if (uStack_124 == 0) {
      iVar19 = 0x20;
    }
    else {
      iVar19 = 0x1f - iVar19;
    }
    uStack_114 = (iStack_110 - iVar19) + 0x1f;
    if ((int)uVar3 < (int)uStack_114) {
LAB_14088bd03:
      uStack_114 = uVar3;
    }
  }
  uVar4 = *(uint *)(lVar5 + 0xd0);
  uStack_e8 = 0xffffffff;
  uStack_e4 = uStack_114;
  local_e0 = CONCAT44(uStack_10c,iStack_110);
  uStack_90 = CONCAT44(uStack_124,local_128);
  local_118 = -1 << ((byte)uVar4 & 0x1f);
  uVar15 = uVar4 & 0xffffffe0;
  uStack_f8 = CONCAT44(uStack_124,local_128);
  uStack_114 = uVar4;
  if (uVar4 != uVar3) {
    puVar17 = *(uint **)(lVar5 + 200);
    if (*(uint **)(lVar5 + 200) == (uint *)0x0) {
      puVar17 = local_f0;
    }
    uVar10 = puVar17[(int)uVar4 >> 5] & local_118;
    iVar19 = (int)uVar4 >> 5;
    while (uVar10 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar19)
      goto LAB_14088bdd5;
      uVar10 = puVar17[(longlong)iVar19 + 1];
      local_118 = 0xffffffff;
      iVar19 = iVar19 + 1;
    }
    uVar10 = uVar10 - 1 & uVar10 ^ uVar10;
    iVar19 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar19 == 0; iVar19 = iVar19 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar19 = 0x20;
    }
    else {
      iVar19 = 0x1f - iVar19;
    }
    uStack_114 = (uVar15 - iVar19) + 0x1f;
    if ((int)uVar3 < (int)uStack_114) {
LAB_14088bdd5:
      uStack_114 = uVar3;
    }
  }
  local_d8 = (ulonglong)uStack_114;
  local_100 = plVar1;
  local_98 = plVar1;
  puStack_88 = local_f0;
  uStack_78 = local_e0;
  uStack_80._0_4_ = uStack_e8;
  uStack_80._4_4_ = uStack_e4;
  while( true ) {
    plVar12 = local_c8;
    if ((uStack_e4 == (uint)local_d8) && (local_f0 == (uint *)(lVar5 + 0xb8))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if ((bVar7) && (local_100 == plVar1)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) break;
    uVar3 = DAT_14652d64c;
    if ((int)uStack_e4 < (int)local_f0[6]) {
      uVar3 = uStack_e4;
    }
    lVar13 = (longlong)(int)uVar3;
    iVar19 = *(int *)(lVar13 * 0x38 + 0x30 + *plVar1);
    puStack_120 = (uint *)0x0;
    lVar14 = *local_d0 + (longlong)iVar19 * 0x48;
    local_c0[0] = lVar14;
    lVar11 = FUN_14088e510(local_c8,local_b0);
    puVar6 = *(undefined4 **)(lVar11 + 8);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = (int)puStack_120;
      *(undefined8 *)(puVar6 + 2) = 0;
      *(undefined8 *)(puVar6 + 4) = 0;
    }
    lVar11 = *plVar12;
    *(int *)(lVar11 + lVar13 * 0x18) = iVar19;
    lVar11 = lVar11 + lVar13 * 0x18;
    local_108 = (longlong *)(*plVar1 + lVar13 * 0x38 + 0x20);
    lVar18 = *local_108;
    iVar19 = (int)local_108[1];
    lVar13 = lVar18 + (longlong)iVar19 * 0xc;
    if (lVar18 != lVar13) {
      do {
        uVar8 = FUN_140873760(lVar14 + 0x10,lVar18);
        iVar19 = *(int *)(lVar11 + 0x10);
        *(int *)(lVar11 + 0x10) = iVar19 + 1;
        if (*(int *)(lVar11 + 0x14) < iVar19 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar11 + 8,iVar19);
        }
        lVar18 = lVar18 + 0xc;
        *(undefined4 *)(*(longlong *)(lVar11 + 8) + (longlong)iVar19 * 4) = uVar8;
      } while (lVar18 != lVar13);
      iVar19 = (int)local_108[1];
      lVar14 = local_c0[0];
    }
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + iVar19;
    uStack_e8 = uStack_e8 & ~uStack_f8._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f8);
  }
  return;
}



// FUNCTION 14088bf60 FUN_14088bf60 body=50 status=ok
// SIG undefined FUN_14088bf60(void)

void FUN_14088bf60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144114f08;
    puVar1[1] = &PTR_FUN_144114ef8;
    return;
  }
  return;
}



// FUNCTION 14088bfa0 FUN_14088bfa0 body=614 status=ok
// SIG undefined FUN_14088bfa0(void)

void FUN_14088bfa0(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  uint uStack_64;
  int iStack_48;
  uint uStack_44;
  uint *local_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  
  iVar10 = param_2 + 1;
  uStack_94 = 1;
  puVar1 = (uint *)(param_1 + 6);
  iVar4 = iVar10;
  if (iVar10 <= *param_1) {
    iVar4 = *param_1;
  }
  *param_1 = iVar4;
  uVar2 = param_1[0xc];
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar8 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar8 == 0) {
      lVar6 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar4 = local_98 + 1;
      bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar4;
      if (bVar3) goto LAB_14088c08c;
      uVar8 = puVar9[lVar6 + 1];
    }
    uStack_94 = -uVar8 & uVar8;
    iVar4 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_84 = (iStack_80 - iVar4) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_14088c08c:
      uStack_84 = uVar2;
    }
  }
  uStack_64 = param_1[0xc];
  uStack_38 = 0xffffffff;
  uStack_34 = uStack_84;
  local_30 = CONCAT44(uStack_7c,iStack_80);
  uVar8 = uStack_64 & 0xffffffe0;
  iStack_48 = local_98;
  uStack_44 = uStack_94;
  local_40 = puVar1;
  if (uStack_64 != uVar2) {
    puVar9 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar5 = puVar9[(int)uStack_64 >> 5] & -1 << ((byte)uStack_64 & 0x1f);
    iVar4 = (int)uStack_64 >> 5;
    while (uVar5 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14088c151;
      uVar5 = puVar9[(longlong)iVar4 + 1];
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
    if ((int)uVar2 < (int)uStack_64) {
LAB_14088c151:
      uStack_64 = uVar2;
    }
  }
  while ((uStack_34 != uStack_64 || (local_40 != puVar1))) {
    lVar11 = (longlong)(int)uStack_34 * 0x30 + *(longlong *)(param_1 + 2);
    lVar6 = *(longlong *)(lVar11 + 0x10);
    lVar7 = (longlong)*(int *)(lVar11 + 0x18) * 0x10 + lVar6;
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x10) {
      TMeshAttributeArrayBase<int>::Insert(lVar6,param_2,lVar11 + 0x20);
    }
    iVar4 = iVar10;
    if (iVar10 <= *(int *)(lVar11 + 8)) {
      iVar4 = *(int *)(lVar11 + 8);
    }
    uStack_38 = uStack_38 & ~uStack_44;
    *(int *)(lVar11 + 8) = iVar4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_48);
  }
  return;
}



// FUNCTION 14088c210 FUN_14088c210 body=614 status=ok
// SIG undefined FUN_14088c210(void)

void FUN_14088c210(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  uint uStack_64;
  int iStack_48;
  uint uStack_44;
  uint *local_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  
  iVar10 = param_2 + 1;
  uStack_94 = 1;
  puVar1 = (uint *)(param_1 + 6);
  iVar4 = iVar10;
  if (iVar10 <= *param_1) {
    iVar4 = *param_1;
  }
  *param_1 = iVar4;
  uVar2 = param_1[0xc];
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar8 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar8 == 0) {
      lVar6 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar4 = local_98 + 1;
      bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar4;
      if (bVar3) goto LAB_14088c2fc;
      uVar8 = puVar9[lVar6 + 1];
    }
    uStack_94 = -uVar8 & uVar8;
    iVar4 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_84 = (iStack_80 - iVar4) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_14088c2fc:
      uStack_84 = uVar2;
    }
  }
  uStack_64 = param_1[0xc];
  uStack_38 = 0xffffffff;
  uStack_34 = uStack_84;
  local_30 = CONCAT44(uStack_7c,iStack_80);
  uVar8 = uStack_64 & 0xffffffe0;
  iStack_48 = local_98;
  uStack_44 = uStack_94;
  local_40 = puVar1;
  if (uStack_64 != uVar2) {
    puVar9 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar5 = puVar9[(int)uStack_64 >> 5] & -1 << ((byte)uStack_64 & 0x1f);
    iVar4 = (int)uStack_64 >> 5;
    while (uVar5 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14088c3c1;
      uVar5 = puVar9[(longlong)iVar4 + 1];
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
    if ((int)uVar2 < (int)uStack_64) {
LAB_14088c3c1:
      uStack_64 = uVar2;
    }
  }
  while ((uStack_34 != uStack_64 || (local_40 != puVar1))) {
    lVar11 = (longlong)(int)uStack_34 * 0x30 + *(longlong *)(param_1 + 2);
    lVar6 = *(longlong *)(lVar11 + 0x10);
    lVar7 = (longlong)*(int *)(lVar11 + 0x18) * 0x10 + lVar6;
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x10) {
      TMeshAttributeArrayBase<float>::Insert(lVar6,param_2,lVar11 + 0x20);
    }
    iVar4 = iVar10;
    if (iVar10 <= *(int *)(lVar11 + 8)) {
      iVar4 = *(int *)(lVar11 + 8);
    }
    uStack_38 = uStack_38 & ~uStack_44;
    *(int *)(lVar11 + 8) = iVar4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_48);
  }
  return;
}



// FUNCTION 14088c480 FUN_14088c480 body=614 status=ok
// SIG undefined FUN_14088c480(void)

void FUN_14088c480(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  uint uStack_64;
  int iStack_48;
  uint uStack_44;
  uint *local_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  
  iVar10 = param_2 + 1;
  uStack_94 = 1;
  puVar1 = (uint *)(param_1 + 6);
  iVar4 = iVar10;
  if (iVar10 <= *param_1) {
    iVar4 = *param_1;
  }
  *param_1 = iVar4;
  uVar2 = param_1[0xc];
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar8 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar8 == 0) {
      lVar6 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar4 = local_98 + 1;
      bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar4;
      if (bVar3) goto LAB_14088c56c;
      uVar8 = puVar9[lVar6 + 1];
    }
    uStack_94 = -uVar8 & uVar8;
    iVar4 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_84 = (iStack_80 - iVar4) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_14088c56c:
      uStack_84 = uVar2;
    }
  }
  uStack_64 = param_1[0xc];
  uStack_38 = 0xffffffff;
  uStack_34 = uStack_84;
  local_30 = CONCAT44(uStack_7c,iStack_80);
  uVar8 = uStack_64 & 0xffffffe0;
  iStack_48 = local_98;
  uStack_44 = uStack_94;
  local_40 = puVar1;
  if (uStack_64 != uVar2) {
    puVar9 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar5 = puVar9[(int)uStack_64 >> 5] & -1 << ((byte)uStack_64 & 0x1f);
    iVar4 = (int)uStack_64 >> 5;
    while (uVar5 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14088c631;
      uVar5 = puVar9[(longlong)iVar4 + 1];
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
    if ((int)uVar2 < (int)uStack_64) {
LAB_14088c631:
      uStack_64 = uVar2;
    }
  }
  while ((uStack_34 != uStack_64 || (local_40 != puVar1))) {
    lVar11 = (longlong)(int)uStack_34 * 0x38 + *(longlong *)(param_1 + 2);
    lVar6 = *(longlong *)(lVar11 + 0x10);
    lVar7 = (longlong)*(int *)(lVar11 + 0x18) * 0x10 + lVar6;
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x10) {
      TMeshAttributeArrayBase<FVector2D>::Insert(lVar6,param_2,lVar11 + 0x20);
    }
    iVar4 = iVar10;
    if (iVar10 <= *(int *)(lVar11 + 8)) {
      iVar4 = *(int *)(lVar11 + 8);
    }
    uStack_38 = uStack_38 & ~uStack_44;
    *(int *)(lVar11 + 8) = iVar4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_48);
  }
  return;
}



// FUNCTION 14088c6f0 FUN_14088c6f0 body=614 status=ok
// SIG undefined FUN_14088c6f0(void)

void FUN_14088c6f0(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  uint uStack_64;
  int iStack_48;
  uint uStack_44;
  uint *local_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  
  iVar10 = param_2 + 1;
  uStack_94 = 1;
  puVar1 = (uint *)(param_1 + 6);
  iVar4 = iVar10;
  if (iVar10 <= *param_1) {
    iVar4 = *param_1;
  }
  *param_1 = iVar4;
  uVar2 = param_1[0xc];
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar8 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar8 == 0) {
      lVar6 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar4 = local_98 + 1;
      bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar4;
      if (bVar3) goto LAB_14088c7dc;
      uVar8 = puVar9[lVar6 + 1];
    }
    uStack_94 = -uVar8 & uVar8;
    iVar4 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_84 = (iStack_80 - iVar4) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_14088c7dc:
      uStack_84 = uVar2;
    }
  }
  uStack_64 = param_1[0xc];
  uStack_38 = 0xffffffff;
  uStack_34 = uStack_84;
  local_30 = CONCAT44(uStack_7c,iStack_80);
  uVar8 = uStack_64 & 0xffffffe0;
  iStack_48 = local_98;
  uStack_44 = uStack_94;
  local_40 = puVar1;
  if (uStack_64 != uVar2) {
    puVar9 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar5 = puVar9[(int)uStack_64 >> 5] & -1 << ((byte)uStack_64 & 0x1f);
    iVar4 = (int)uStack_64 >> 5;
    while (uVar5 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14088c8a1;
      uVar5 = puVar9[(longlong)iVar4 + 1];
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
    if ((int)uVar2 < (int)uStack_64) {
LAB_14088c8a1:
      uStack_64 = uVar2;
    }
  }
  while ((uStack_34 != uStack_64 || (local_40 != puVar1))) {
    lVar11 = (longlong)(int)uStack_34 * 0x60 + *(longlong *)(param_1 + 2);
    lVar6 = *(longlong *)(lVar11 + 0x18);
    lVar7 = (longlong)*(int *)(lVar11 + 0x20) * 0x10 + lVar6;
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x10) {
      TMeshAttributeArrayBase<FVector4>::Insert(lVar6,param_2,lVar11 + 0x30);
    }
    iVar4 = iVar10;
    if (iVar10 <= *(int *)(lVar11 + 0x10)) {
      iVar4 = *(int *)(lVar11 + 0x10);
    }
    uStack_38 = uStack_38 & ~uStack_44;
    *(int *)(lVar11 + 0x10) = iVar4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_48);
  }
  return;
}



// FUNCTION 14088c960 FUN_14088c960 body=614 status=ok
// SIG undefined FUN_14088c960(void)

void FUN_14088c960(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  uint uStack_64;
  int iStack_48;
  uint uStack_44;
  uint *local_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  
  iVar10 = param_2 + 1;
  uStack_94 = 1;
  puVar1 = (uint *)(param_1 + 6);
  iVar4 = iVar10;
  if (iVar10 <= *param_1) {
    iVar4 = *param_1;
  }
  *param_1 = iVar4;
  uVar2 = param_1[0xc];
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar8 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar8 == 0) {
      lVar6 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar4 = local_98 + 1;
      bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar4;
      if (bVar3) goto LAB_14088ca4c;
      uVar8 = puVar9[lVar6 + 1];
    }
    uStack_94 = -uVar8 & uVar8;
    iVar4 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_84 = (iStack_80 - iVar4) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_14088ca4c:
      uStack_84 = uVar2;
    }
  }
  uStack_64 = param_1[0xc];
  uStack_38 = 0xffffffff;
  uStack_34 = uStack_84;
  local_30 = CONCAT44(uStack_7c,iStack_80);
  uVar8 = uStack_64 & 0xffffffe0;
  iStack_48 = local_98;
  uStack_44 = uStack_94;
  local_40 = puVar1;
  if (uStack_64 != uVar2) {
    puVar9 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar5 = puVar9[(int)uStack_64 >> 5] & -1 << ((byte)uStack_64 & 0x1f);
    iVar4 = (int)uStack_64 >> 5;
    while (uVar5 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14088cb11;
      uVar5 = puVar9[(longlong)iVar4 + 1];
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
    if ((int)uVar2 < (int)uStack_64) {
LAB_14088cb11:
      uStack_64 = uVar2;
    }
  }
  while ((uStack_34 != uStack_64 || (local_40 != puVar1))) {
    lVar11 = (longlong)(int)uStack_34 * 0x38 + *(longlong *)(param_1 + 2);
    lVar6 = *(longlong *)(lVar11 + 0x10);
    lVar7 = (longlong)*(int *)(lVar11 + 0x18) * 0x10 + lVar6;
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x10) {
      TMeshAttributeArrayBase<FVector>::Insert(lVar6,param_2,lVar11 + 0x20);
    }
    iVar4 = iVar10;
    if (iVar10 <= *(int *)(lVar11 + 8)) {
      iVar4 = *(int *)(lVar11 + 8);
    }
    uStack_38 = uStack_38 & ~uStack_44;
    *(int *)(lVar11 + 8) = iVar4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_48);
  }
  return;
}



// FUNCTION 14088cbd0 FUN_14088cbd0 body=614 status=ok
// SIG undefined FUN_14088cbd0(void)

void FUN_14088cbd0(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  uint uStack_64;
  int iStack_48;
  uint uStack_44;
  uint *local_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  
  iVar10 = param_2 + 1;
  uStack_94 = 1;
  puVar1 = (uint *)(param_1 + 6);
  iVar4 = iVar10;
  if (iVar10 <= *param_1) {
    iVar4 = *param_1;
  }
  *param_1 = iVar4;
  uVar2 = param_1[0xc];
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar8 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar8 == 0) {
      lVar6 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar4 = local_98 + 1;
      bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar4;
      if (bVar3) goto LAB_14088ccbc;
      uVar8 = puVar9[lVar6 + 1];
    }
    uStack_94 = -uVar8 & uVar8;
    iVar4 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_84 = (iStack_80 - iVar4) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_14088ccbc:
      uStack_84 = uVar2;
    }
  }
  uStack_64 = param_1[0xc];
  uStack_38 = 0xffffffff;
  uStack_34 = uStack_84;
  local_30 = CONCAT44(uStack_7c,iStack_80);
  uVar8 = uStack_64 & 0xffffffe0;
  iStack_48 = local_98;
  uStack_44 = uStack_94;
  local_40 = puVar1;
  if (uStack_64 != uVar2) {
    puVar9 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar5 = puVar9[(int)uStack_64 >> 5] & -1 << ((byte)uStack_64 & 0x1f);
    iVar4 = (int)uStack_64 >> 5;
    while (uVar5 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14088cd81;
      uVar5 = puVar9[(longlong)iVar4 + 1];
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
    if ((int)uVar2 < (int)uStack_64) {
LAB_14088cd81:
      uStack_64 = uVar2;
    }
  }
  while ((uStack_34 != uStack_64 || (local_40 != puVar1))) {
    lVar11 = (longlong)(int)uStack_34 * 0x38 + *(longlong *)(param_1 + 2);
    lVar6 = *(longlong *)(lVar11 + 0x10);
    lVar7 = (longlong)*(int *)(lVar11 + 0x18) * 0x10 + lVar6;
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x10) {
      TMeshAttributeArrayBase<FName>::Insert(lVar6,param_2,lVar11 + 0x20);
    }
    iVar4 = iVar10;
    if (iVar10 <= *(int *)(lVar11 + 8)) {
      iVar4 = *(int *)(lVar11 + 8);
    }
    uStack_38 = uStack_38 & ~uStack_44;
    *(int *)(lVar11 + 8) = iVar4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_48);
  }
  return;
}



// FUNCTION 14088ce40 FUN_14088ce40 body=614 status=ok
// SIG undefined FUN_14088ce40(void)

void FUN_14088ce40(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  uint uStack_64;
  int iStack_48;
  uint uStack_44;
  uint *local_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  
  iVar10 = param_2 + 1;
  uStack_94 = 1;
  puVar1 = (uint *)(param_1 + 6);
  iVar4 = iVar10;
  if (iVar10 <= *param_1) {
    iVar4 = *param_1;
  }
  *param_1 = iVar4;
  uVar2 = param_1[0xc];
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar8 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar8 == 0) {
      lVar6 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar4 = local_98 + 1;
      bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar4;
      if (bVar3) goto LAB_14088cf2c;
      uVar8 = puVar9[lVar6 + 1];
    }
    uStack_94 = -uVar8 & uVar8;
    iVar4 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_84 = (iStack_80 - iVar4) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_14088cf2c:
      uStack_84 = uVar2;
    }
  }
  uStack_64 = param_1[0xc];
  uStack_38 = 0xffffffff;
  uStack_34 = uStack_84;
  local_30 = CONCAT44(uStack_7c,iStack_80);
  uVar8 = uStack_64 & 0xffffffe0;
  iStack_48 = local_98;
  uStack_44 = uStack_94;
  local_40 = puVar1;
  if (uStack_64 != uVar2) {
    puVar9 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar5 = puVar9[(int)uStack_64 >> 5] & -1 << ((byte)uStack_64 & 0x1f);
    iVar4 = (int)uStack_64 >> 5;
    while (uVar5 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14088cff1;
      uVar5 = puVar9[(longlong)iVar4 + 1];
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
    if ((int)uVar2 < (int)uStack_64) {
LAB_14088cff1:
      uStack_64 = uVar2;
    }
  }
  while ((uStack_34 != uStack_64 || (local_40 != puVar1))) {
    lVar11 = (longlong)(int)uStack_34 * 0x30 + *(longlong *)(param_1 + 2);
    lVar6 = *(longlong *)(lVar11 + 0x10);
    lVar7 = (longlong)*(int *)(lVar11 + 0x18) * 0x10 + lVar6;
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x10) {
      TMeshAttributeArrayBase<bool>::Insert(lVar6,param_2,lVar11 + 0x20);
    }
    iVar4 = iVar10;
    if (iVar10 <= *(int *)(lVar11 + 8)) {
      iVar4 = *(int *)(lVar11 + 8);
    }
    uStack_38 = uStack_38 & ~uStack_44;
    *(int *)(lVar11 + 8) = iVar4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_48);
  }
  return;
}



// FUNCTION 14088d0b0 Insert body=228 status=ok
// SIG undefined Insert(void)

void TMeshAttributeArrayBase<int>::Insert(longlong *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar2 = (int)param_1[1];
  if (iVar2 <= param_2) {
    *(int *)(param_1 + 1) = param_2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < param_2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    puVar7 = (undefined4 *)(*param_1 + (longlong)iVar2 * 4);
    uVar3 = (param_2 - iVar2) + 1;
    if (iVar2 <= param_2) {
      iVar8 = iVar2;
      if (3 < uVar3) {
        uVar1 = *param_3;
        if ((param_3 < puVar7 + iVar2) || (puVar7 + param_2 < param_3)) {
          uVar3 = uVar3 & 0x80000003;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
          }
          do {
            iVar8 = iVar8 + 4;
          } while (iVar8 <= (int)(param_2 - uVar3));
          iVar2 = ((param_2 - uVar3) - iVar2) + 4;
          uVar5 = (ulonglong)((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
          puVar6 = puVar7;
          for (lVar4 = (uVar5 & 0xfffffffffffffff) << 2; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
          }
          puVar7 = puVar7 + uVar5 * 4;
        }
      }
      if (iVar8 <= param_2) {
        lVar4 = (longlong)((param_2 - iVar8) + 1);
        do {
          *puVar7 = *param_3;
          puVar7 = puVar7 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
  }
  return;
}



// FUNCTION 14088d1a0 Insert body=306 status=ok
// SIG undefined Insert(void)

void TMeshAttributeArrayBase<float>::Insert(longlong *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar2 = (int)param_1[1];
  if (iVar2 <= param_2) {
    *(int *)(param_1 + 1) = param_2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < param_2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    uVar3 = (param_2 - iVar2) + 1;
    puVar7 = (undefined4 *)(*param_1 + (longlong)iVar2 * 4);
    if (iVar2 <= param_2) {
      iVar8 = iVar2;
      if (3 < uVar3) {
        uVar1 = *param_3;
        if ((param_3 < puVar7 + iVar2) || (puVar7 + param_2 < param_3)) {
          uVar3 = uVar3 & 0x80000003;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
          }
          do {
            iVar8 = iVar8 + 4;
          } while (iVar8 <= (int)(param_2 - uVar3));
          iVar2 = ((param_2 - uVar3) - iVar2) + 4;
          uVar5 = (ulonglong)((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
          puVar6 = puVar7;
          for (lVar4 = (uVar5 & 0xfffffffffffffff) << 2; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
          }
          puVar7 = puVar7 + uVar5 * 4;
        }
      }
      if (iVar8 <= param_2) {
        if (3 < (param_2 - iVar8) + 1) {
          uVar3 = ((param_2 - iVar8) - 3U >> 2) + 1;
          uVar5 = (ulonglong)uVar3;
          iVar8 = iVar8 + uVar3 * 4;
          do {
            *puVar7 = *param_3;
            puVar7[1] = *param_3;
            puVar7[2] = *param_3;
            puVar7[3] = *param_3;
            puVar7 = puVar7 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        if (iVar8 <= param_2) {
          lVar4 = (longlong)((param_2 - iVar8) + 1);
          do {
            *puVar7 = *param_3;
            puVar7 = puVar7 + 1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 14088d2e0 Insert body=119 status=ok
// SIG undefined Insert(void)

void TMeshAttributeArrayBase<FVector2D>::Insert(longlong *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 <= param_2) {
    *(int *)(param_1 + 1) = param_2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < param_2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
    }
    puVar2 = (undefined8 *)(*param_1 + (longlong)iVar1 * 8);
    if (iVar1 <= param_2) {
      uVar3 = (ulonglong)((param_2 - iVar1) + 1);
      do {
        *puVar2 = *param_3;
        puVar2 = puVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}



// FUNCTION 14088d360 Insert body=118 status=ok
// SIG undefined Insert(void)

void TMeshAttributeArrayBase<FVector4>::Insert(longlong *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  iVar1 = (int)param_1[1];
  if (iVar1 <= param_2) {
    *(int *)(param_1 + 1) = param_2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < param_2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    if (iVar1 <= param_2) {
      uVar4 = (ulonglong)((param_2 - iVar1) + 1);
      do {
        uVar2 = param_3[1];
        *puVar3 = *param_3;
        puVar3[1] = uVar2;
        puVar3 = puVar3 + 2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}



// FUNCTION 14088d3e0 Insert body=126 status=ok
// SIG undefined Insert(void)

void TMeshAttributeArrayBase<FVector>::Insert(longlong *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 <= param_2) {
    *(int *)(param_1 + 1) = param_2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < param_2 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
    }
    if (iVar1 <= param_2) {
      uVar2 = (ulonglong)((param_2 - iVar1) + 1);
      puVar3 = (undefined8 *)(*param_1 + (longlong)iVar1 * 0xc);
      do {
        *puVar3 = *param_3;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_3 + 1);
        uVar2 = uVar2 - 1;
        puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      } while (uVar2 != 0);
    }
  }
  return;
}



// FUNCTION 14088d460 Insert body=229 status=ok
// SIG undefined Insert(void)

void TMeshAttributeArrayBase<FName>::Insert(longlong *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  
  iVar1 = (int)param_1[1];
  if (iVar1 <= param_2) {
    *(int *)(param_1 + 1) = param_2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < param_2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
    }
    puVar7 = (undefined8 *)(*param_1 + (longlong)iVar1 * 8);
    uVar3 = (param_2 - iVar1) + 1;
    if (iVar1 <= param_2) {
      iVar8 = iVar1;
      if (1 < uVar3) {
        uVar2 = *param_3;
        if ((param_3 < puVar7 + iVar1) || (puVar7 + param_2 < param_3)) {
          uVar3 = uVar3 & 0x80000001;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
          }
          do {
            iVar8 = iVar8 + 2;
          } while (iVar8 <= (int)(param_2 - uVar3));
          uVar5 = (ulonglong)((int)(((param_2 - uVar3) - iVar1) + 2) / 2);
          puVar6 = puVar7;
          for (lVar4 = (uVar5 & 0xfffffffffffffff) << 1; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = uVar2;
            puVar6 = puVar6 + 1;
          }
          puVar7 = puVar7 + uVar5 * 2;
        }
      }
      if (iVar8 <= param_2) {
        lVar4 = (longlong)((param_2 - iVar8) + 1);
        do {
          *puVar7 = *param_3;
          puVar7 = puVar7 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
  }
  return;
}



// FUNCTION 14088d550 Insert body=229 status=ok
// SIG undefined Insert(void)

void TMeshAttributeArrayBase<bool>::Insert(longlong *param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  
  iVar2 = (int)param_1[1];
  if (iVar2 <= param_2) {
    *(int *)(param_1 + 1) = param_2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < param_2 + 1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    puVar7 = (undefined1 *)(*param_1 + (longlong)iVar2);
    uVar3 = (param_2 - iVar2) + 1;
    if (iVar2 <= param_2) {
      iVar8 = iVar2;
      if (0xf < uVar3) {
        uVar1 = *param_3;
        if ((param_3 < puVar7 + iVar2) || (puVar7 + param_2 < param_3)) {
          uVar3 = uVar3 & 0x8000000f;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
          }
          do {
            iVar8 = iVar8 + 0x10;
          } while (iVar8 <= (int)(param_2 - uVar3));
          iVar2 = ((param_2 - uVar3) - iVar2) + 0x10;
          lVar5 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4) * 0x10;
          puVar6 = puVar7;
          for (lVar4 = lVar5; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
          }
          puVar7 = puVar7 + lVar5;
        }
      }
      if (iVar8 <= param_2) {
        lVar4 = (longlong)((param_2 - iVar8) + 1);
        do {
          *puVar7 = *param_3;
          puVar7 = puVar7 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
  }
  return;
}



// FUNCTION 14088d640 Insert body=133 status=ok
// SIG undefined Insert(void)

void TSparseArray<FRenderingPolygon,FDefaultSparseArrayAllocator>::Insert
               (undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Src;
  longlong lVar3;
  undefined1 local_18 [16];
  
  lVar3 = FUN_14088e510(param_1,local_18,param_2);
  puVar2 = *(undefined4 **)(lVar3 + 8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
    *(undefined8 *)(puVar2 + 2) = 0;
    iVar1 = param_3[4];
    _Src = *(void **)(param_3 + 2);
    puVar2[4] = iVar1;
    if (iVar1 == 0) {
      puVar2[5] = 0;
      return;
    }
    TArray<int,FDefaultAllocator>::ResizeForCopy(puVar2 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(puVar2 + 2),_Src,(longlong)iVar1 << 2);
  }
  return;
}



// FUNCTION 14088d6d0 FUN_14088d6d0 body=3070 status=ok
// SIG undefined FUN_14088d6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14088d6d0(undefined8 param_1,undefined4 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint local_res18 [2];
  longlong *local_res20;
  
  *(undefined4 *)(param_4 + 1) = 0;
  local_res20 = param_4;
  if (0x7fffffff < *(uint *)((longlong)param_4 + 0xc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_4,0);
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar10 + 0x38) < DAT_14685f718) &&
     (_Init_thread_header(&DAT_14685f718), DAT_14685f718 == -1)) {
    atexit((_func_5014 *)&LAB_143e42b50);
    _Init_thread_footer(&DAT_14685f718);
  }
  DAT_14685f710 = 0;
  if ((DAT_14685f714 < 0) && (DAT_14685f714 != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f708,0);
  }
  if ((*(int *)(lVar10 + 0x38) < DAT_14685f730) &&
     (_Init_thread_header(&DAT_14685f730), DAT_14685f730 == -1)) {
    atexit((_func_5014 *)&LAB_143e42ff0);
    _Init_thread_footer(&DAT_14685f730);
  }
  DAT_14685f728 = 0;
  if ((DAT_14685f72c < 0) && (DAT_14685f72c != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f720,0);
  }
  if ((*(int *)(lVar10 + 0x38) < DAT_14685f748) &&
     (_Init_thread_header(&DAT_14685f748), DAT_14685f748 == -1)) {
    atexit((_func_5014 *)&LAB_143e44090);
    _Init_thread_footer(&DAT_14685f748);
  }
  _DAT_14685f740 = 0;
  if ((DAT_14685f744 < 0) && (DAT_14685f744 != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f738,0);
  }
  if ((*(int *)(lVar10 + 0x38) < DAT_14685f760) &&
     (_Init_thread_header(&DAT_14685f760), DAT_14685f760 == -1)) {
    atexit((_func_5014 *)&LAB_143e43d60);
    _Init_thread_footer(&DAT_14685f760);
  }
  DAT_14685f758 = 0;
  if ((DAT_14685f75c < 0) && (DAT_14685f75c != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f750,0);
  }
  FUN_140882d60(param_1,param_2,&DAT_14685f708,&DAT_14685f720,&DAT_14685f738,&DAT_14685f750);
  if ((*(int *)(lVar10 + 0x38) < DAT_14685f764) &&
     (_Init_thread_header(&DAT_14685f764), DAT_14685f764 == -1)) {
    atexit(FUN_143e42fc0);
    _Init_thread_footer(&DAT_14685f764);
  }
  TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Reset(&DAT_146270780);
  if (DAT_146270788 - DAT_1462707b4 < DAT_14685f728 + (DAT_146270788 - DAT_1462707b4)) {
    FUN_14089d230(&DAT_146270780);
  }
  lVar16 = DAT_14685f720 + (longlong)DAT_14685f728 * 4;
  for (lVar8 = DAT_14685f720; lVar8 != lVar16; lVar8 = lVar8 + 4) {
    FUN_140859ed0(&DAT_146270780,local_res18,lVar8,0);
  }
  if ((*(int *)(lVar10 + 0x38) < DAT_14685f778) &&
     (_Init_thread_header(&DAT_14685f778), DAT_14685f778 == -1)) {
    atexit((_func_5014 *)&LAB_143e441b0);
    _Init_thread_footer(&DAT_14685f778);
  }
  DAT_14685f770 = 0;
  if (DAT_14685f774 < 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f768,0);
  }
  iVar15 = DAT_14685f770;
  if ((void **)param_3 != &DAT_14685f768) {
    DAT_14685f770 = *(int *)(param_3 + 1);
    lVar16 = (longlong)DAT_14685f770;
    pvVar4 = (void *)*param_3;
    if ((DAT_14685f770 == 0) && (DAT_14685f774 == 0)) {
      DAT_14685f774 = 0;
      iVar15 = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&DAT_14685f768,DAT_14685f770,DAT_14685f774);
      _guard_xfg_dispatch_icall_nop(DAT_14685f768,pvVar4,lVar16 << 2);
      iVar15 = DAT_14685f770;
    }
  }
  if (1 < iVar15) {
    AlgoImpl::IntroSortInternal<float,FIdentityFunctor,TDereferenceWrapper<float,TLess<float>_>_>
              (DAT_14685f768,(longlong)iVar15,(ulonglong)local_res20 & 0xff,local_res18);
    iVar15 = DAT_14685f770;
  }
  if (0 < DAT_14685f758) {
    if ((*(int *)(lVar10 + 0x38) < DAT_14685f790) &&
       (_Init_thread_header(&DAT_14685f790), iVar15 = DAT_14685f770, DAT_14685f790 == -1)) {
      atexit(FUN_143e437b0);
      _Init_thread_footer(&DAT_14685f790);
      iVar15 = DAT_14685f770;
    }
    plVar9 = DAT_14685f780;
    iVar6 = DAT_14685f788;
    if (DAT_14685f78c < 0) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
        iVar15 = DAT_14685f770;
      }
      DAT_14685f788 = 0;
      if (DAT_14685f78c != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_14685f780,0);
        iVar15 = DAT_14685f770;
      }
    }
    else {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
        iVar15 = DAT_14685f770;
      }
      DAT_14685f788 = 0;
    }
    uVar11 = 0;
    uVar21 = uVar11;
    if (0 < DAT_14685f710) {
      do {
        uVar17 = *(uint *)(DAT_14685f708 + uVar21);
        if (DAT_146270788 != DAT_1462707b4) {
          puVar7 = DAT_1462707c0;
          if (DAT_1462707c0 == (undefined *)0x0) {
            puVar7 = &DAT_1462707b8;
          }
          for (iVar6 = *(int *)(puVar7 + (longlong)(int)(DAT_1462707c8 - 1U & uVar17) * 4);
              iVar6 != -1; iVar6 = *(int *)(DAT_146270780 + 4 + (longlong)iVar6 * 0xc)) {
            if (*(uint *)(DAT_146270780 + (longlong)iVar6 * 0xc) == uVar17) {
              if (iVar6 != -1) {
                if ((*(int *)(lVar10 + 0x38) < DAT_14685f7a8) &&
                   (_Init_thread_header(&DAT_14685f7a8), iVar15 = DAT_14685f770, DAT_14685f7a8 == -1
                   )) {
                  atexit((_func_5014 *)&LAB_143e44230);
                  _Init_thread_footer(&DAT_14685f7a8);
                  iVar15 = DAT_14685f770;
                }
                if (DAT_14685f7a0 < iVar15) {
                  DAT_14685f7a0 = iVar15;
                  if (DAT_14685f7a4 < iVar15) {
                    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f798);
                    iVar15 = DAT_14685f770;
                  }
                }
                else if ((iVar15 < DAT_14685f7a0) && (iVar6 = DAT_14685f7a0 - iVar15, iVar6 != 0)) {
                  iVar5 = (DAT_14685f7a0 - iVar6) - iVar15;
                  if (iVar5 != 0) {
                    _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)DAT_14685f798 + (longlong)iVar15 * 4),
                               (void *)((longlong)DAT_14685f798 + (longlong)(iVar6 + iVar15) * 4),
                               (longlong)iVar5 << 2);
                    iVar15 = DAT_14685f770;
                  }
                  DAT_14685f7a0 = DAT_14685f7a0 - iVar6;
                }
                iVar6 = 0;
                if (0 < iVar15) {
                  lVar16 = 0;
                  do {
                    iVar15 = iVar15 - iVar6;
                    iVar6 = iVar6 + 1;
                    *(float *)((longlong)DAT_14685f798 + lVar16) =
                         1.0 - *(float *)((longlong)DAT_14685f768 + (longlong)iVar15 * 4 + -4);
                    lVar16 = lVar16 + 4;
                    iVar15 = DAT_14685f770;
                  } while (iVar6 < DAT_14685f770);
                }
                iVar15 = DAT_14685f7a0;
                pvVar4 = DAT_14685f798;
                DAT_14685f770 = DAT_14685f7a0;
                if ((DAT_14685f7a0 == 0) && (DAT_14685f774 == 0)) {
                  DAT_14685f774 = 0;
                }
                else {
                  TArray<int,FDefaultAllocator>::ResizeForCopy
                            (&DAT_14685f768,DAT_14685f7a0,DAT_14685f774);
                  _guard_xfg_dispatch_icall_nop(DAT_14685f768,pvVar4,(longlong)iVar15 << 2);
                }
              }
              break;
            }
          }
        }
        uVar13 = 0;
        if ((*(int *)(lVar10 + 0x38) < DAT_14685f7c0) &&
           (_Init_thread_header(&DAT_14685f7c0), DAT_14685f7c0 == -1)) {
          atexit((_func_5014 *)&LAB_143e429e0);
          _Init_thread_footer(&DAT_14685f7c0);
        }
        DAT_14685f7b8 = 0;
        if ((DAT_14685f7bc < 0) && (DAT_14685f7bc != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f7b0,0);
        }
        FUN_1408a1900(param_1,uVar17,&DAT_14685f768,&DAT_14685f7b0);
        if ((*(int *)(lVar10 + 0x38) < DAT_14685f7d8) &&
           (_Init_thread_header(&DAT_14685f7d8), DAT_14685f7d8 == -1)) {
          atexit((_func_5014 *)&LAB_143e43810);
          _Init_thread_footer(&DAT_14685f7d8);
        }
        uVar20 = (ulonglong)(int)DAT_14685f7b8;
        if ((int)DAT_14685f7d0 < (int)DAT_14685f7b8) {
          DAT_14685f7d0 = DAT_14685f7b8;
          if (DAT_14685f7d4 < (int)DAT_14685f7b8) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f7c8);
            uVar20 = (ulonglong)DAT_14685f7b8;
          }
        }
        else if (((int)DAT_14685f7b8 < (int)DAT_14685f7d0) &&
                (iVar15 = DAT_14685f7d0 - DAT_14685f7b8, iVar15 != 0)) {
          iVar6 = (DAT_14685f7d0 - iVar15) - DAT_14685f7b8;
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)DAT_14685f7c8 + uVar20 * 4),
                       (void *)((longlong)DAT_14685f7c8 +
                               (longlong)(int)(iVar15 + DAT_14685f7b8) * 4),(longlong)iVar6 << 2);
            uVar20 = (ulonglong)DAT_14685f7b8;
          }
          DAT_14685f7d0 = DAT_14685f7d0 - iVar15;
        }
        uVar19 = uVar13;
        if (0 < (int)uVar20) {
          do {
            iVar15 = (int)uVar13;
            uVar17 = iVar15 + 1;
            uVar13 = (ulonglong)uVar17;
            *(undefined4 *)((longlong)DAT_14685f7c8 + (longlong)((int)uVar20 - iVar15) * 4 + -4) =
                 *(undefined4 *)(DAT_14685f7b0 + -4 + uVar19 + 4);
            uVar20 = (ulonglong)DAT_14685f7b8;
            uVar19 = uVar19 + 4;
          } while ((int)uVar17 < (int)DAT_14685f7b8);
        }
        lVar16 = (longlong)DAT_14685f788;
        DAT_14685f788 = DAT_14685f788 + 1;
        if (DAT_14685f78c < DAT_14685f788) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_14685f780);
        }
        plVar9 = DAT_14685f780 + lVar16 * 2;
        *plVar9 = 0;
        uVar17 = DAT_14685f7d0;
        pvVar4 = DAT_14685f7c8;
        lVar16 = (longlong)(int)DAT_14685f7d0;
        *(uint *)(plVar9 + 1) = DAT_14685f7d0;
        if (uVar17 == 0) {
          *(undefined4 *)((longlong)plVar9 + 0xc) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(plVar9,uVar17,0);
          _guard_xfg_dispatch_icall_nop((void *)*plVar9,pvVar4,lVar16 << 2);
        }
        uVar17 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar17;
        uVar21 = uVar21 + 4;
        param_4 = local_res20;
        iVar15 = DAT_14685f770;
      } while ((int)uVar17 < DAT_14685f710);
    }
    uVar21 = 0;
    if ((*(int *)(lVar10 + 0x38) < DAT_14685f7f0) &&
       (_Init_thread_header(&DAT_14685f7f0), DAT_14685f7f0 == -1)) {
      atexit(FUN_143e43fd0);
      _Init_thread_footer(&DAT_14685f7f0);
    }
    if (DAT_14685f7ec < 0) {
      if (DAT_14685f7e8 != 0) {
        plVar9 = (longlong *)(DAT_14685f7e0 + 8);
        iVar15 = DAT_14685f7e8;
        do {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 3;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      DAT_14685f7e8 = 0;
      if (DAT_14685f7ec != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (&DAT_14685f7e0,0);
      }
    }
    else {
      if (DAT_14685f7e8 != 0) {
        plVar9 = (longlong *)(DAT_14685f7e0 + 8);
        iVar15 = DAT_14685f7e8;
        do {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 3;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      DAT_14685f7e8 = 0;
    }
    local_res18[0] = 0;
    uVar11 = uVar21;
    uVar13 = uVar21;
    if (0 < DAT_14685f758) {
      do {
        iVar15 = DAT_14685f7e8;
        puVar12 = (undefined4 *)0x0;
        lVar16 = (longlong)DAT_14685f7e8;
        uVar3 = *(undefined4 *)(DAT_14685f750 + uVar11);
        DAT_14685f7e8 = DAT_14685f7e8 + 1;
        uVar17 = (uint)uVar21;
        if (DAT_14685f7ec < DAT_14685f7e8) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&DAT_14685f7e0,iVar15);
          uVar17 = local_res18[0];
        }
        puVar14 = (undefined4 *)(DAT_14685f7e0 + lVar16 * 0x18);
        puVar18 = puVar12;
        if (puVar14 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar14 + 2) = 0;
          *(undefined8 *)(puVar14 + 4) = 0;
          puVar18 = puVar14;
        }
        local_res18[0] = uVar17 + 1;
        *puVar18 = uVar3;
        plVar9 = DAT_14685f780;
        iVar15 = (int)local_res18[0] % DAT_14685f710;
        if (0 < DAT_14685f770) {
          puVar14 = puVar12;
          do {
            iVar6 = puVar18[4];
            puVar18[4] = iVar6 + 1;
            if ((int)puVar18[5] < iVar6 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar18 + 2,iVar6);
            }
            puVar1 = (undefined4 *)(*(longlong *)(puVar18 + 2) + (longlong)iVar6 * 8);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = DAT_14652d63c;
              puVar1[1] = DAT_14652d63c;
            }
            uVar17 = (int)puVar12 + 1;
            puVar12 = (undefined4 *)(ulonglong)uVar17;
            *puVar1 = *(undefined4 *)(*(longlong *)((longlong)plVar9 + uVar13) + (longlong)puVar14);
            puVar2 = (undefined4 *)(plVar9[(longlong)iVar15 * 2] + (longlong)puVar14);
            puVar14 = puVar14 + 1;
            puVar1[1] = *puVar2;
          } while ((int)uVar17 < DAT_14685f770);
        }
        uVar21 = (ulonglong)local_res18[0];
        param_4 = local_res20;
        uVar11 = uVar11 + 4;
        uVar13 = uVar13 + 0x10;
      } while ((int)local_res18[0] < DAT_14685f758);
    }
    if ((*(int *)(lVar10 + 0x38) < DAT_14685f808) &&
       (_Init_thread_header(&DAT_14685f808), DAT_14685f808 == -1)) {
      atexit((_func_5014 *)&LAB_143e433b0);
      _Init_thread_footer(&DAT_14685f808);
    }
    DAT_14685f800 = 0;
    if ((DAT_14685f804 < 0) && (DAT_14685f804 != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f7f8,0);
    }
    FUN_1408a2a40(param_1,&DAT_14685f7e0,&DAT_14685f7f8);
    iVar15 = DAT_14685f800;
    lVar10 = (longlong)DAT_14685f800;
    if (DAT_14685f800 != 0) {
      iVar6 = (int)param_4[1];
      if (*(int *)((longlong)param_4 + 0xc) < iVar6 + DAT_14685f800) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_4);
        iVar6 = (int)param_4[1];
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_4 + (longlong)iVar6 * 4),DAT_14685f7f8,lVar10 << 2);
      *(int *)(param_4 + 1) = (int)param_4[1] + iVar15;
    }
  }
  return;
}



// FUNCTION 14088e2d0 InsertPolygonPerimeterVertices body=575 status=ok
// SIG undefined InsertPolygonPerimeterVertices(void)

void UEditableMesh::InsertPolygonPerimeterVertices
               (longlong param_1,int param_2,uint param_3,longlong *param_4)

{
  void *_Src;
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *local_res8;
  int local_res10 [2];
  uint local_res18 [2];
  longlong local_res20;
  uint uStack_4c;
  
  iVar3 = (int)param_4[1];
  local_res20 = *(longlong *)(param_1 + 0x28);
  iVar4 = 0;
  uVar8 = (ulonglong)(int)param_3;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (0 < iVar3) {
    lVar7 = uVar8 * 4;
    plVar5 = (longlong *)((longlong)param_2 * 0x38 + *(longlong *)(local_res20 + 0xa8));
    do {
      FUN_14087aaa0(param_1,&local_res8,*param_4 + (longlong)iVar4 * 0x18,param_2);
      iVar3 = (int)plVar5[1];
      *(int *)(plVar5 + 1) = iVar3 + 1;
      if (*(int *)((longlong)plVar5 + 0xc) < iVar3 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar5,iVar3);
      }
      iVar6 = iVar4 + (int)uVar8;
      _Src = (void *)(*plVar5 + (longlong)iVar6 * 4);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Src + 4),_Src,(longlong)(iVar3 - iVar6) << 2);
      *(int *)(lVar7 + *plVar5) = (int)local_res8;
      iVar3 = *(int *)(*(longlong *)(local_res20 + 0x38) + 0x10 + (longlong)(int)local_res8 * 0x18);
      lVar1 = *(longlong *)(local_res20 + 0x38) + (longlong)(int)local_res8 * 0x18;
      *(int *)(lVar1 + 0x10) = iVar3 + 1;
      if (*(int *)(lVar1 + 0x14) < iVar3 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar1 + 8,iVar3);
      }
      iVar4 = iVar4 + 1;
      uVar8 = (ulonglong)local_res18[0];
      lVar7 = lVar7 + 4;
      *(int *)(*(longlong *)(lVar1 + 8) + (longlong)iVar3 * 4) = param_2;
      iVar3 = (int)param_4[1];
    } while (iVar4 < iVar3);
  }
  uVar2 = local_res18[0];
  uStack_4c = uStack_4c & 0xffffff00;
  local_res8 = (undefined8 *)operator_new(0x18);
  if (local_res8 != (undefined8 *)0x0) {
    *local_res8 = &PTR_Execute_144115ad0;
    *(int *)(local_res8 + 1) = param_2;
    *(uint *)((longlong)local_res8 + 0xc) = uVar2;
    *(int *)(local_res8 + 2) = iVar3;
    *(uint *)((longlong)local_res8 + 0x14) = uStack_4c;
  }
  FUN_1408740e0(param_1,&local_res8);
  FUN_14085a180(param_1 + 0xde0,local_res18,local_res10,0);
  FUN_14085a180(param_1 + 0xd90,local_res18,local_res10,0);
  if (*(longlong *)(param_1 + 0xf70) != 0) {
    local_res18[0] = local_res18[0] & 0xffffff00;
    FUN_14085a180(param_1 + 0x1020,&local_res8,local_res10,local_res18);
    if ((char)local_res18[0] == '\0') {
      FUN_14085a180(param_1 + 0xfd0,local_res18,local_res10,0);
    }
  }
  return;
}



// FUNCTION 14088e510 FUN_14088e510 body=507 status=ok
// SIG undefined FUN_14088e510(void)

int * FUN_14088e510(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if ((int)param_1[1] <= param_3) {
    iVar4 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                ();
      iVar4 = (int)param_1[1];
    }
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar4) {
      do {
        *(undefined4 *)((longlong)iVar3 * 0x18 + *param_1) = 0xffffffff;
        *(int *)((longlong)iVar3 * 0x18 + 4 + *param_1) = (int)param_1[6];
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = (int)param_1[5];
        iVar4 = iVar3 + 1;
        *(int *)(param_1 + 5) = iVar4;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar3) {
          uVar5 = (int)(iVar3 + 0x20 + (iVar3 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar5 < 5) {
            iVar6 = 4;
          }
          else {
            uVar7 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar5 * 3) >> 3) + (longlong)(int)uVar5)
                               * 4 + 0x40,0);
            iVar4 = (int)param_1[5];
            iVar6 = (int)(uVar7 >> 2);
            if (iVar6 < (int)uVar5) {
              iVar6 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar6 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar4 + -1);
        }
        plVar8 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar8 = param_1 + 2;
        }
        iVar4 = iVar3;
        if (iVar3 < 0) {
          iVar4 = iVar3 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar4 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar3 & 0x1f));
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar9 = *param_1;
  lVar2 = (longlong)param_3 * 0x18;
  iVar4 = *(int *)(lVar2 + lVar9);
  iVar3 = *(int *)(lVar2 + 4 + lVar9);
  if (iVar4 == -1) {
    *(int *)(param_1 + 6) = iVar3;
  }
  else {
    *(int *)(lVar9 + 4 + (longlong)iVar4 * 0x18) = iVar3;
    lVar9 = *param_1;
  }
  if (iVar3 != -1) {
    *(int *)(lVar9 + (longlong)iVar3 * 0x18) = iVar4;
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = param_3;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 +
                   (longlong)((int)(param_3 + (param_3 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *(longlong *)(param_2 + 2) = *param_1 + lVar2;
  return param_2;
}



// FUNCTION 14088e710 FUN_14088e710 body=491 status=ok
// SIG undefined FUN_14088e710(void)

int * FUN_14088e710(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((int)param_1[1] <= param_3) {
    iVar3 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                ();
      iVar3 = (int)param_1[1];
    }
    iVar2 = (int)param_1[5];
    if (iVar2 < iVar3) {
      do {
        *(undefined4 *)((longlong)iVar2 * 0x38 + *param_1) = 0xffffffff;
        *(int *)((longlong)iVar2 * 0x38 + 4 + *param_1) = (int)param_1[6];
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar2;
        }
        *(int *)(param_1 + 6) = iVar2;
        iVar2 = (int)param_1[5];
        iVar3 = iVar2 + 1;
        *(int *)(param_1 + 5) = iVar3;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar2) {
          uVar4 = (int)(iVar2 + 0x20 + (iVar2 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar4 < 5) {
            iVar5 = 4;
          }
          else {
            uVar6 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar4 * 3) >> 3) + (longlong)(int)uVar4)
                               * 4 + 0x40,0);
            iVar3 = (int)param_1[5];
            iVar5 = (int)(uVar6 >> 2);
            if (iVar5 < (int)uVar4) {
              iVar5 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar5 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar3 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar3 = iVar2;
        if (iVar2 < 0) {
          iVar3 = iVar2 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar3 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar2 = (int)param_1[5];
      } while (iVar2 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar8 = *param_1;
  lVar9 = (longlong)param_3 * 0x38;
  iVar3 = *(int *)(lVar9 + lVar8);
  iVar2 = *(int *)(lVar9 + 4 + lVar8);
  if (iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar2;
  }
  else {
    *(int *)((longlong)iVar3 * 0x38 + 4 + lVar8) = iVar2;
    lVar8 = *param_1;
  }
  if (iVar2 != -1) {
    *(int *)((longlong)iVar2 * 0x38 + lVar8) = iVar3;
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = param_3;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 +
                   (longlong)((int)(param_3 + (param_3 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *(longlong *)(param_2 + 2) = *param_1 + lVar9;
  return param_2;
}



// FUNCTION 14088e900 FUN_14088e900 body=495 status=ok
// SIG undefined FUN_14088e900(void)

int * FUN_14088e900(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((int)param_1[1] <= param_3) {
    iVar3 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
      iVar3 = (int)param_1[1];
    }
    iVar2 = (int)param_1[5];
    if (iVar2 < iVar3) {
      do {
        *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x10) = 0xffffffff;
        *(int *)(*param_1 + 4 + (longlong)iVar2 * 0x10) = (int)param_1[6];
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar2;
        }
        *(int *)(param_1 + 6) = iVar2;
        iVar2 = (int)param_1[5];
        iVar3 = iVar2 + 1;
        *(int *)(param_1 + 5) = iVar3;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar2) {
          uVar4 = (int)(iVar2 + 0x20 + (iVar2 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar4 < 5) {
            iVar5 = 4;
          }
          else {
            uVar6 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar4 * 3) >> 3) + (longlong)(int)uVar4)
                               * 4 + 0x40,0);
            iVar3 = (int)param_1[5];
            iVar5 = (int)(uVar6 >> 2);
            if (iVar5 < (int)uVar4) {
              iVar5 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar5 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar3 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar3 = iVar2;
        if (iVar2 < 0) {
          iVar3 = iVar2 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar3 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar2 = (int)param_1[5];
      } while (iVar2 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar8 = *param_1;
  lVar9 = (longlong)param_3 * 0x10;
  iVar3 = *(int *)(lVar9 + lVar8);
  iVar2 = *(int *)(lVar9 + 4 + lVar8);
  if (iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar2;
  }
  else {
    *(int *)(lVar8 + 4 + (longlong)iVar3 * 0x10) = iVar2;
    lVar8 = *param_1;
  }
  if (iVar2 != -1) {
    *(int *)(lVar8 + (longlong)iVar2 * 0x10) = iVar3;
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = param_3;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 +
                   (longlong)((int)(param_3 + (param_3 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *(longlong *)(param_2 + 2) = *param_1 + lVar9;
  return param_2;
}



// FUNCTION 14088eaf0 FUN_14088eaf0 body=507 status=ok
// SIG undefined FUN_14088eaf0(void)

int * FUN_14088eaf0(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if ((int)param_1[1] <= param_3) {
    iVar4 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow();
      iVar4 = (int)param_1[1];
    }
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar4) {
      do {
        *(undefined4 *)((longlong)iVar3 * 0xc + *param_1) = 0xffffffff;
        *(int *)((longlong)iVar3 * 0xc + 4 + *param_1) = (int)param_1[6];
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(*param_1 + (longlong)(int)param_1[6] * 0xc) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = (int)param_1[5];
        iVar4 = iVar3 + 1;
        *(int *)(param_1 + 5) = iVar4;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar3) {
          uVar5 = (int)(iVar3 + 0x20 + (iVar3 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar5 < 5) {
            iVar6 = 4;
          }
          else {
            uVar7 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar5 * 3) >> 3) + (longlong)(int)uVar5)
                               * 4 + 0x40,0);
            iVar4 = (int)param_1[5];
            iVar6 = (int)(uVar7 >> 2);
            if (iVar6 < (int)uVar5) {
              iVar6 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar6 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar4 + -1);
        }
        plVar8 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar8 = param_1 + 2;
        }
        iVar4 = iVar3;
        if (iVar3 < 0) {
          iVar4 = iVar3 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar4 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar3 & 0x1f));
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar9 = *param_1;
  lVar2 = (longlong)param_3 * 0xc;
  iVar4 = *(int *)(lVar2 + lVar9);
  iVar3 = *(int *)(lVar2 + 4 + lVar9);
  if (iVar4 == -1) {
    *(int *)(param_1 + 6) = iVar3;
  }
  else {
    *(int *)(lVar9 + 4 + (longlong)iVar4 * 0xc) = iVar3;
    lVar9 = *param_1;
  }
  if (iVar3 != -1) {
    *(int *)(lVar9 + (longlong)iVar3 * 0xc) = iVar4;
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = param_3;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 +
                   (longlong)((int)(param_3 + (param_3 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *(longlong *)(param_2 + 2) = *param_1 + lVar2;
  return param_2;
}



// FUNCTION 14088ecf0 FUN_14088ecf0 body=499 status=ok
// SIG undefined FUN_14088ecf0(void)

int * FUN_14088ecf0(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((int)param_1[1] <= param_3) {
    iVar3 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow();
      iVar3 = (int)param_1[1];
    }
    iVar2 = (int)param_1[5];
    if (iVar2 < iVar3) {
      do {
        *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
        *(int *)((longlong)iVar2 * 0x20 + 4 + *param_1) = (int)param_1[6];
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar2;
        }
        *(int *)(param_1 + 6) = iVar2;
        iVar2 = (int)param_1[5];
        iVar3 = iVar2 + 1;
        *(int *)(param_1 + 5) = iVar3;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar2) {
          uVar4 = (int)(iVar2 + 0x20 + (iVar2 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar4 < 5) {
            iVar5 = 4;
          }
          else {
            uVar6 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar4 * 3) >> 3) + (longlong)(int)uVar4)
                               * 4 + 0x40,0);
            iVar3 = (int)param_1[5];
            iVar5 = (int)(uVar6 >> 2);
            if (iVar5 < (int)uVar4) {
              iVar5 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar5 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar3 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar3 = iVar2;
        if (iVar2 < 0) {
          iVar3 = iVar2 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar3 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar2 = (int)param_1[5];
      } while (iVar2 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar8 = *param_1;
  lVar9 = (longlong)param_3 * 0x20;
  iVar3 = *(int *)(lVar9 + lVar8);
  iVar2 = *(int *)(lVar9 + 4 + lVar8);
  if (iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar2;
  }
  else {
    *(int *)((longlong)iVar3 * 0x20 + 4 + lVar8) = iVar2;
    lVar8 = *param_1;
  }
  if (iVar2 != -1) {
    *(int *)((longlong)iVar2 * 0x20 + lVar8) = iVar3;
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = param_3;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 +
                   (longlong)((int)(param_3 + (param_3 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *(longlong *)(param_2 + 2) = *param_1 + lVar9;
  return param_2;
}



// FUNCTION 14088eef0 FUN_14088eef0 body=507 status=ok
// SIG undefined FUN_14088eef0(void)

int * FUN_14088eef0(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if ((int)param_1[1] <= param_3) {
    iVar4 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow();
      iVar4 = (int)param_1[1];
    }
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar4) {
      do {
        *(undefined4 *)((longlong)iVar3 * 0x48 + *param_1) = 0xffffffff;
        *(int *)((longlong)iVar3 * 0x48 + 4 + *param_1) = (int)param_1[6];
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x48) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = (int)param_1[5];
        iVar4 = iVar3 + 1;
        *(int *)(param_1 + 5) = iVar4;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar3) {
          uVar5 = (int)(iVar3 + 0x20 + (iVar3 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar5 < 5) {
            iVar6 = 4;
          }
          else {
            uVar7 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar5 * 3) >> 3) + (longlong)(int)uVar5)
                               * 4 + 0x40,0);
            iVar4 = (int)param_1[5];
            iVar6 = (int)(uVar7 >> 2);
            if (iVar6 < (int)uVar5) {
              iVar6 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar6 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar4 + -1);
        }
        plVar8 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar8 = param_1 + 2;
        }
        iVar4 = iVar3;
        if (iVar3 < 0) {
          iVar4 = iVar3 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar4 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar3 & 0x1f));
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar9 = *param_1;
  lVar2 = (longlong)param_3 * 0x48;
  iVar4 = *(int *)(lVar2 + lVar9);
  iVar3 = *(int *)(lVar2 + 4 + lVar9);
  if (iVar4 == -1) {
    *(int *)(param_1 + 6) = iVar3;
  }
  else {
    *(int *)(lVar9 + 4 + (longlong)iVar4 * 0x48) = iVar3;
    lVar9 = *param_1;
  }
  if (iVar3 != -1) {
    *(int *)(lVar9 + (longlong)iVar3 * 0x48) = iVar4;
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = param_3;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 +
                   (longlong)((int)(param_3 + (param_3 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *(longlong *)(param_2 + 2) = *param_1 + lVar2;
  return param_2;
}



// FUNCTION 14088f0f0 FUN_14088f0f0 body=487 status=ok
// SIG undefined FUN_14088f0f0(void)

int * FUN_14088f0f0(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if ((int)param_1[1] <= param_3) {
    iVar4 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
      iVar4 = (int)param_1[1];
    }
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar4) {
      do {
        *(undefined4 *)((longlong)iVar3 * 8 + *param_1) = 0xffffffff;
        *(int *)((longlong)iVar3 * 8 + 4 + *param_1) = (int)param_1[6];
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(*param_1 + (longlong)(int)param_1[6] * 8) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = (int)param_1[5];
        iVar4 = iVar3 + 1;
        *(int *)(param_1 + 5) = iVar4;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar3) {
          uVar5 = (int)(iVar3 + 0x20 + (iVar3 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar5 < 5) {
            iVar6 = 4;
          }
          else {
            uVar7 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar5 * 3) >> 3) + (longlong)(int)uVar5)
                               * 4 + 0x40,0);
            iVar4 = (int)param_1[5];
            iVar6 = (int)(uVar7 >> 2);
            if (iVar6 < (int)uVar5) {
              iVar6 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar6 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar4 + -1);
        }
        plVar8 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar8 = param_1 + 2;
        }
        iVar4 = iVar3;
        if (iVar3 < 0) {
          iVar4 = iVar3 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar4 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar3 & 0x1f));
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar2 = (longlong)param_3 * 8;
  lVar9 = *param_1;
  iVar4 = *(int *)(lVar2 + lVar9);
  iVar3 = *(int *)(lVar2 + 4 + lVar9);
  if (iVar4 == -1) {
    *(int *)(param_1 + 6) = iVar3;
  }
  else {
    *(int *)(lVar9 + 4 + (longlong)iVar4 * 8) = iVar3;
    lVar9 = *param_1;
  }
  if (iVar3 != -1) {
    *(int *)(lVar9 + (longlong)iVar3 * 8) = iVar4;
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = param_3;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 +
                   (longlong)((int)(param_3 + (param_3 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *(longlong *)(param_2 + 2) = *param_1 + lVar2;
  return param_2;
}



// FUNCTION 14088f2e0 InsetPolygons body=51 status=ok
// SIG undefined InsetPolygons(void)

void UEditableMesh::InsetPolygons(void)

{
  FUN_140874a80();
  return;
}



// FUNCTION 14088f330 FUN_14088f330 body=112 status=ok
// SIG undefined FUN_14088f330(void)

undefined8 FUN_14088f330(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0xd78);
  puVar1 = puVar3 + *(int *)(param_1 + 0xd80);
  while( true ) {
    if (puVar3 == puVar1) {
      return 1;
    }
    cVar2 = (**(code **)(*(longlong *)*puVar3 + 0x2b0))((longlong *)*puVar3,param_1);
    if (cVar2 == '\0') break;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



// FUNCTION 14088f3a0 IsCommitted body=85 status=ok
// SIG undefined IsCommitted(void)

undefined1 UEditableMeshAdapter::IsCommitted(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x1a,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x1a,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return 0;
}



// FUNCTION 14088f410 FUN_14088f410 body=112 status=ok
// SIG undefined FUN_14088f410(void)

undefined8 FUN_14088f410(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0xd78);
  puVar1 = puVar3 + *(int *)(param_1 + 0xd80);
  while( true ) {
    if (puVar3 == puVar1) {
      return 1;
    }
    cVar2 = (**(code **)(*(longlong *)*puVar3 + 0x2b8))((longlong *)*puVar3,param_1);
    if (cVar2 == '\0') break;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



// FUNCTION 14088f480 IsCommittedAsInstance body=85 status=ok
// SIG undefined IsCommittedAsInstance(void)

undefined1 UEditableMeshAdapter::IsCommittedAsInstance(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x1b,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x1b,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return 0;
}



// FUNCTION 14088f4f0 FUN_14088f4f0 body=9 status=ok
// SIG undefined FUN_14088f4f0(void)

void FUN_14088f4f0(longlong param_1)

{
  FMeshDescription::IsVertexOrphaned(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 14088f500 IsPreviewingSubdivisions body=11 status=ok
// SIG undefined IsPreviewingSubdivisions(void)

bool UEditableMesh::IsPreviewingSubdivisions(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0xe88);
}



// FUNCTION 14088f510 IsValidEdge body=71 status=ok
// SIG undefined IsValidEdge(void)

ulonglong UEditableMesh::IsValidEdge(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(uVar2 + 0x78))) {
    lVar3 = *(longlong *)(uVar2 + 0x90);
    if (*(longlong *)(uVar2 + 0x90) == 0) {
      lVar3 = uVar2 + 0x80;
    }
    uVar1 = *(uint *)(lVar3 + (longlong)((int)(param_2 + ((int)param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 >> (param_2 & 0x1f) & 1) != 0) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14088f560 IsValidPolygon body=76 status=ok
// SIG undefined IsValidPolygon(void)

ulonglong UEditableMesh::IsValidPolygon(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(uVar2 + 0xb0))) {
    lVar3 = *(longlong *)(uVar2 + 200);
    if (*(longlong *)(uVar2 + 200) == 0) {
      lVar3 = uVar2 + 0xb8;
    }
    uVar1 = *(uint *)(lVar3 + (longlong)((int)(param_2 + ((int)param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 >> (param_2 & 0x1f) & 1) != 0) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14088f5b0 IsValidPolygonGroup body=76 status=ok
// SIG undefined IsValidPolygonGroup(void)

ulonglong UEditableMesh::IsValidPolygonGroup(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(uVar2 + 0xe8))) {
    lVar3 = *(longlong *)(uVar2 + 0x100);
    if (*(longlong *)(uVar2 + 0x100) == 0) {
      lVar3 = uVar2 + 0xf0;
    }
    uVar1 = *(uint *)(lVar3 + (longlong)((int)(param_2 + ((int)param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 >> (param_2 & 0x1f) & 1) != 0) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14088f600 IsValidVertex body=71 status=ok
// SIG undefined IsValidVertex(void)

ulonglong UEditableMesh::IsValidVertex(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(uVar2 + 8))) {
    lVar3 = *(longlong *)(uVar2 + 0x20);
    if (*(longlong *)(uVar2 + 0x20) == 0) {
      lVar3 = uVar2 + 0x10;
    }
    uVar1 = *(uint *)(lVar3 + (longlong)((int)(param_2 + ((int)param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 >> (param_2 & 0x1f) & 1) != 0) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14088f650 MakeEditableMesh body=71 status=ok
// SIG undefined MakeEditableMesh(void)

undefined8 UEditableMeshFactory::MakeEditableMesh(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong local_28;
  longlong *local_20;
  
  MakeSubmeshAddress(&local_28,param_1,param_2);
  if ((local_20 != (longlong *)0x0) && (local_28 != 0)) {
    uVar1 = (**(code **)(*local_20 + 8))(local_20,param_1,&local_28);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14088f6a0 MakeSubmeshAddress body=285 status=ok
// SIG undefined MakeSubmeshAddress(void)

longlong *
UEditableMeshFactory::MakeSubmeshAddress(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = (longlong *)FUN_141593110();
  lVar5 = *plVar2;
  puVar3 = (undefined8 *)FName::FName(local_res8,"EditableMeshFormat",1);
  iVar1 = (**(code **)(lVar5 + 8))(plVar2,*puVar3);
  puVar3 = (undefined8 *)0x0;
  if (0 < iVar1) {
    do {
      plVar2 = (longlong *)FUN_141593110();
      lVar5 = *plVar2;
      puVar4 = (undefined8 *)FName::FName(local_res8,"EditableMeshFormat",1);
      lVar5 = (**(code **)(lVar5 + 0x10))(plVar2,*puVar4,puVar3);
      puVar4 = (undefined8 *)(lVar5 + -8);
      if (lVar5 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      param_1[1] = (longlong)puVar4;
      *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
      (**(code **)*puVar4)(0,param_2,param_1);
      if (*param_1 != 0) {
        return param_1;
      }
      *param_1 = 0;
      param_1[1] = 0;
      uVar6 = (int)puVar3 + 1;
      param_1[2] = 0;
      puVar3 = (undefined8 *)(ulonglong)uVar6;
    } while ((int)uVar6 < iVar1);
  }
  return param_1;
}



// FUNCTION 14088f7c0 FUN_14088f7c0 body=182 status=ok
// SIG undefined FUN_14088f7c0(void)

longlong * FUN_14088f7c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)0x0;
  *param_2 = 0;
  if (((*(char *)(param_1 + 0xd68) != '\0') &&
      (puVar1 = *(undefined8 **)(param_1 + 0xd70), puVar1 != (undefined8 *)0x0)) &&
     (0 < *(int *)(puVar1 + 1))) {
    puVar4 = (undefined8 *)operator_new(0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_Execute_144114fe0;
      puVar4[1] = 0;
      puVar4[1] = *puVar1;
      *puVar1 = 0;
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)((longlong)puVar4 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
      puVar1[1] = 0;
      puVar5 = puVar4;
    }
    plVar2 = (longlong *)*param_2;
    *param_2 = (longlong)puVar5;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,1);
    }
  }
  puVar5 = (undefined8 *)(param_1 + 0xd70);
  uVar3 = *puVar5;
  *puVar5 = 0;
  TDefaultDelete<FCompoundChangeInput>::operator()(puVar5,uVar3);
  return param_2;
}



// FUNCTION 14088f880 FUN_14088f880 body=1550 status=ok
// SIG undefined FUN_14088f880(void)

void FUN_14088f880(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int *piVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  char local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  int local_d8;
  int local_d0;
  uint uStack_cc;
  uint uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  uint *puStack_a0;
  uint uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  int *local_88;
  longlong local_80;
  longlong *local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  
  if (*(int *)(param_1 + 0xe38) != *(int *)(param_1 + 0xe64)) {
    piVar14 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38);
    local_88 = piVar14;
    if ((*piVar14 < DAT_14685f2e0) && (_Init_thread_header(), DAT_14685f2e0 == -1)) {
      atexit((_func_5014 *)&LAB_143e44800);
      _Init_thread_footer();
    }
    DAT_14685f2d8 = 0;
    if ((DAT_14685f2dc < 0) && (DAT_14685f2dc != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f2d0,0);
    }
    uStack_cc = 1;
    local_b0 = (longlong *)(param_1 + 0xe30);
    local_d0 = 0;
    uVar2 = *(uint *)(param_1 + 0xe58);
    puVar1 = (uint *)(param_1 + 0xe40);
    uStack_bc = 0;
    iStack_b8 = 0;
    if (uVar2 != 0) {
      puVar12 = *(uint **)(param_1 + 0xe50);
      if (*(uint **)(param_1 + 0xe50) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar11 = *puVar12;
      iStack_b8 = 0;
      local_d0 = 0;
      while (uVar11 == 0) {
        lVar10 = (longlong)local_d0;
        iStack_b8 = iStack_b8 + 0x20;
        iVar7 = local_d0 + 1;
        bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d0;
        local_d0 = iVar7;
        if (bVar4) goto LAB_14088f9b9;
        uVar11 = puVar12[lVar10 + 1];
      }
      uStack_cc = uVar11 - 1 & uVar11 ^ uVar11;
      iVar7 = 0x1f;
      if (uStack_cc != 0) {
        for (; uStack_cc >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_cc == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_bc = (iStack_b8 - iVar7) + 0x1f;
      if ((int)uVar2 < (int)uStack_bc) {
LAB_14088f9b9:
        uStack_bc = uVar2;
      }
    }
    local_res20 = *(uint *)(param_1 + 0xe58);
    puStack_a8 = (undefined1 *)CONCAT44(uStack_cc,local_d0);
    uStack_98 = 0xffffffff;
    uStack_5c = uStack_bc;
    uStack_90 = CONCAT44(uStack_b4,iStack_b8);
    uVar11 = local_res20 & 0xffffffe0;
    iStack_70 = local_d0;
    uStack_6c = uStack_cc;
    uStack_60 = 0xffffffff;
    puStack_a0 = puVar1;
    local_68 = puVar1;
    local_58 = uStack_90;
    local_78 = local_b0;
    uVar6 = uStack_98;
    uStack_94 = uStack_5c;
    if (local_res20 != uVar2) {
      puVar12 = *(uint **)(param_1 + 0xe50);
      if (*(uint **)(param_1 + 0xe50) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar9 = puVar12[(int)local_res20 >> 5] & -1 << ((byte)local_res20 & 0x1f);
      iVar7 = (int)local_res20 >> 5;
      while (uVar9 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_14088fa7c;
        uVar9 = puVar12[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar9 = uVar9 - 1 & uVar9 ^ uVar9;
      iVar7 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      local_res20 = (uVar11 - iVar7) + 0x1f;
      if ((int)uVar2 < (int)local_res20) {
LAB_14088fa7c:
        local_res20 = uVar2;
        uVar6 = uStack_60;
      }
    }
    while( true ) {
      uStack_60 = uVar6;
      if (((uStack_5c == local_res20) && (local_68 == puVar1)) &&
         (local_78 == (longlong *)(param_1 + 0xe30))) break;
      iVar7 = *(int *)(*local_78 + (longlong)(int)uStack_5c * 0xc);
      if (*piVar14 < DAT_14685f2f8) {
        _Init_thread_header(&DAT_14685f2f8);
        if (DAT_14685f2f8 == -1) {
          atexit((_func_5014 *)&LAB_143e44490);
          _Init_thread_footer(&DAT_14685f2f8);
        }
      }
      UEditableMesh::GetVertexConnectedPolygons(param_1,iVar7,&DAT_14685f2e8);
      if (*piVar14 < DAT_14685f310) {
        _Init_thread_header(&DAT_14685f310);
        if (DAT_14685f310 == -1) {
          atexit((_func_5014 *)&LAB_143e444b0);
          _Init_thread_footer(&DAT_14685f310);
        }
      }
      FUN_1408879c0(param_1,iVar7,&DAT_14685f300);
      plVar15 = (longlong *)((longlong)iVar7 * 0x20 + **(longlong **)(param_1 + 0x28));
      iVar7 = (int)plVar15[1];
      if (0 < iVar7 + -1) {
        local_d8 = 1;
        local_80 = 0;
        do {
          lVar16 = local_80;
          iVar3 = *(int *)(*plVar15 + local_80);
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38);
          lVar17 = lVar16;
          if (*(int *)(lVar10 + 0x10 + (longlong)iVar3 * 0x18) != 0) {
            if (*piVar14 < DAT_14685f328) {
              _Init_thread_header(&DAT_14685f328);
              if (DAT_14685f328 == -1) {
                atexit((_func_5014 *)&LAB_143e43ca0);
                _Init_thread_footer(&DAT_14685f328);
              }
            }
            FUN_140888ca0(param_1,**(undefined4 **)(lVar10 + (longlong)iVar3 * 0x18 + 8),
                          &DAT_14685f2e8,&DAT_14685f300,&DAT_14685f318);
            iVar7 = (int)plVar15[1];
            piVar14 = local_88;
            iVar13 = local_d8;
            if (local_d8 < iVar7) {
              do {
                lVar16 = lVar16 + 4;
                iVar7 = *(int *)(lVar16 + *plVar15);
                for (piVar14 = DAT_14685f2d0; piVar14 != DAT_14685f2d0 + DAT_14685f2d8;
                    piVar14 = piVar14 + 1) {
                  if (*piVar14 == iVar7) goto LAB_14088fc2a;
                }
                lVar17 = *(longlong *)(param_1 + 0x28);
                lVar10 = *(longlong *)(lVar17 + 0x38) + (longlong)iVar7 * 0x18;
                if (DAT_14685f318 != DAT_14685f318 + DAT_14685f320) {
                  piVar14 = DAT_14685f318;
                  do {
                    for (piVar8 = *(int **)(lVar10 + 8);
                        piVar8 != *(int **)(lVar10 + 8) + *(int *)(lVar10 + 0x10);
                        piVar8 = piVar8 + 1) {
                      if (*piVar8 == *piVar14) {
                        puStack_a8 = local_res18;
                        local_res18[0] = 0;
                        puStack_a0 = (uint *)local_res10;
                        local_res10[0] = '\x01';
                        local_b0 = (longlong *)CONCAT44(iVar7,iVar3);
                        FUN_14085e520(lVar17 + 0x380,&local_b0);
                        FUN_14085e7d0(lVar17 + 0x3d8,&local_b0);
                        FUN_14085e2a0(lVar17 + 0x430,&local_b0);
                        FUN_14085e030(lVar17 + 0x488,&local_b0);
                        FUN_14085ddf0(lVar17 + 0x4e0,&local_b0);
                        FUN_14085ecb0(lVar17 + 0x538,&local_b0);
                        FUN_14085ea70(lVar17 + 0x590,&local_b0);
                        if (local_res10[0] != '\0') {
                          FUN_14089cda0(param_1,iVar7,iVar3,lVar10 + 8);
                          iVar5 = DAT_14685f2d8;
                          lVar10 = (longlong)DAT_14685f2d8;
                          DAT_14685f2d8 = DAT_14685f2d8 + 1;
                          if (DAT_14685f2dc < DAT_14685f2d8) {
                            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f2d0,iVar5)
                            ;
                          }
                          DAT_14685f2d0[lVar10] = iVar7;
                        }
                        goto LAB_14088fc2a;
                      }
                    }
                    piVar14 = piVar14 + 1;
                  } while (piVar14 != DAT_14685f318 + DAT_14685f320);
                }
LAB_14088fc2a:
                iVar7 = (int)plVar15[1];
                iVar13 = iVar13 + 1;
                piVar14 = local_88;
                lVar17 = local_80;
              } while (iVar13 < iVar7);
            }
          }
          local_d8 = local_d8 + 1;
          local_80 = lVar17 + 4;
        } while (local_d8 <= iVar7 + -1);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      uVar6 = uStack_60;
    }
    FUN_14087d750(param_1,&DAT_14685f2d0,0);
  }
  return;
}



// FUNCTION 14088ff10 FUN_14088ff10 body=128 status=ok
// SIG undefined FUN_14088ff10(void)

void FUN_14088ff10(longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  
  plVar3 = (longlong *)**(longlong **)(param_1 + 8);
  piVar5 = (int *)((longlong)param_3 * 0xe0 +
                  *(longlong *)(plVar3[2] + (longlong)(int)(*(longlong **)(param_1 + 8))[1] * 0x10))
  ;
  if (param_4 == 1) {
    piVar5 = piVar5 + 0xe;
  }
  else if (param_4 == 2) {
    piVar5 = piVar5 + 0x1c;
  }
  else if (param_4 == 3) {
    piVar5 = piVar5 + 0x2a;
  }
  lVar4 = *plVar3;
  uVar1 = *(undefined8 *)(lVar4 + (longlong)*piVar5 * 0xc);
  uVar2 = *(undefined4 *)(lVar4 + 8 + (longlong)*piVar5 * 0xc);
  param_2[1] = (int)((ulonglong)uVar1 >> 0x20);
  param_2[2] = uVar2;
  *param_2 = (int)uVar1;
  return;
}



// FUNCTION 140890000 FUN_140890000 body=125 status=ok
// SIG undefined FUN_140890000(void)

void FUN_140890000(longlong param_1,undefined8 *param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_4 * 0xe0 +
          *(longlong *)
           (*(longlong *)(**(longlong **)(param_1 + 8) + 0x10) +
           (longlong)(int)(*(longlong **)(param_1 + 8))[1] * 0x10);
  if (param_5 == 1) {
    lVar2 = lVar2 + 0x38;
  }
  else if (param_5 == 2) {
    lVar2 = lVar2 + 0x70;
  }
  else if (param_5 == 3) {
    lVar2 = lVar2 + 0xa8;
  }
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + 0x28) = *param_2;
  *(undefined4 *)(lVar2 + 0x30) = uVar1;
  *(undefined4 *)(lVar2 + 0x34) = param_3;
  return;
}



// FUNCTION 140890080 FUN_140890080 body=1058 status=ok
// SIG undefined FUN_140890080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140890080(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  float fVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  float *pfVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined1 local_res8 [8];
  longlong *local_res10;
  float fStack_a4;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar5 + 0x38) < DAT_14685f564) &&
     (_Init_thread_header(&DAT_14685f564), DAT_14685f564 == -1)) {
    atexit(FUN_143e44460);
    _Init_thread_footer(&DAT_14685f564);
  }
  TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Reset(&DAT_146270690);
  if ((*(int *)(lVar5 + 0x38) < DAT_14685f578) &&
     (_Init_thread_header(&DAT_14685f578), DAT_14685f578 == -1)) {
    atexit(FUN_143e44400);
    _Init_thread_footer(&DAT_14685f578);
  }
  if (DAT_14685f574 < 0) {
    if (DAT_14685f570 != 0) {
      plVar8 = (longlong *)(DAT_14685f568 + 8);
      iVar12 = DAT_14685f570;
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 3;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    DAT_14685f570 = 0;
    if (DAT_14685f574 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_14685f568,0);
    }
  }
  else {
    if (DAT_14685f570 != 0) {
      plVar8 = (longlong *)(DAT_14685f568 + 8);
      iVar12 = DAT_14685f570;
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 3;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    DAT_14685f570 = 0;
  }
  local_res10 = (longlong *)FUN_140860830(*(longlong *)(param_1 + 0x28) + 0x118,DAT_146aedad0,0);
  piVar11 = (int *)*param_2;
  piVar13 = piVar11 + (longlong)*(int *)(param_2 + 1) * 4;
  if (piVar11 != piVar13) {
    pfVar10 = (float *)(piVar11 + 1);
    do {
      iVar12 = DAT_14685f570;
      uVar3 = *(undefined8 *)(*local_res10 + (longlong)*piVar11 * 0xc);
      if ((((float)uVar3 != *pfVar10) ||
          (fStack_a4 = (float)((ulonglong)uVar3 >> 0x20), fStack_a4 != pfVar10[1])) ||
         (*(float *)(*local_res10 + 8 + (longlong)*piVar11 * 0xc) != pfVar10[2])) {
        lVar9 = (longlong)DAT_14685f570;
        DAT_14685f570 = DAT_14685f570 + 1;
        if (DAT_14685f574 < DAT_14685f570) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&DAT_14685f568,iVar12);
        }
        lVar7 = DAT_14685f568;
        *(undefined4 *)(DAT_14685f568 + lVar9 * 0x18) = 0;
        *(undefined8 *)(lVar7 + 8 + lVar9 * 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x10 + lVar9 * 0x18) = 0;
        lVar9 = DAT_14685f568 + (longlong)(DAT_14685f570 + -1) * 0x18;
        *(int *)(DAT_14685f568 + (longlong)(DAT_14685f570 + -1) * 0x18) = *piVar11;
        fVar4 = pfVar10[2];
        iVar12 = *(int *)(lVar9 + 0x10);
        uVar3 = *(undefined8 *)pfVar10;
        *(int *)(lVar9 + 0x10) = iVar12 + 1;
        if (*(int *)(lVar9 + 0x14) < iVar12 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(lVar9 + 8,iVar12);
        }
        uVar6 = DAT_146aedad0;
        lVar9 = *(longlong *)(lVar9 + 8);
        lVar7 = (longlong)iVar12 * 0x60;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar9);
        *puVar1 = CONCAT71(uStack_97,2);
        puVar1[1] = uStack_90;
        *(undefined8 *)(lVar7 + lVar9) = uVar6;
        puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar9);
        *puVar1 = 0;
        puVar1[1] = 0x3f80000000000000;
        *(undefined4 *)(lVar7 + 8 + lVar9) = 0;
        puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar9);
        *puVar1 = uVar3;
        puVar1[1] = CONCAT44(uStack_6c,fVar4);
        puVar2 = (undefined4 *)(lVar7 + 0x40 + lVar9);
        *puVar2 = local_68;
        puVar2[1] = uStack_64;
        puVar2[2] = uStack_60;
        puVar2[3] = uStack_5c;
        puVar2 = (undefined4 *)(lVar7 + 0x50 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = uStack_50;
        puVar2[3] = uStack_4c;
        if ((*(int *)(lVar5 + 0x38) < DAT_14685f590) &&
           (_Init_thread_header(&DAT_14685f590), DAT_14685f590 == -1)) {
          atexit((_func_5014 *)&LAB_143e42900);
          _Init_thread_footer(&DAT_14685f590);
        }
        UEditableMesh::GetVertexConnectedPolygons(param_1,*piVar11,&DAT_14685f580);
        if (DAT_146270698 - _DAT_1462706c4 < (DAT_146270698 - _DAT_1462706c4) + DAT_14685f588) {
          FUN_14089d230(&DAT_146270690);
        }
        lVar9 = DAT_14685f580 + (longlong)DAT_14685f588 * 4;
        for (lVar7 = DAT_14685f580; lVar7 != lVar9; lVar7 = lVar7 + 4) {
          FUN_14085a180(&DAT_146270690,local_res8,lVar7,0);
        }
      }
      piVar11 = piVar11 + 4;
      pfVar10 = pfVar10 + 4;
    } while (piVar11 != piVar13);
  }
  UEditableMesh::SetVerticesAttributes(param_1,&DAT_14685f568);
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
  Append<FDefaultSetAllocator>(param_1 + 0xd90,&DAT_146270690);
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
  Append<FDefaultSetAllocator>(param_1 + 0xde0,&DAT_146270690);
  return;
}



// FUNCTION 1408904b0 OnAssignPolygonsToPolygonGroups body=83 status=ok
// SIG undefined OnAssignPolygonsToPolygonGroups(void)

void UEditableMeshAdapter::OnAssignPolygonsToPolygonGroups(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x34,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x34,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140890510 FUN_140890510 body=317 status=ok
// SIG undefined FUN_140890510(void)

void FUN_140890510(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146860780) && (_Init_thread_header(&DAT_146860780), DAT_146860780 == -1))
  {
    atexit((_func_5014 *)&LAB_143e43d40);
    _Init_thread_footer(&DAT_146860780);
  }
  DAT_146860778 = 0;
  if (DAT_14686077c < *(int *)(param_3 + 1)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146860770);
  }
  piVar5 = (int *)*param_3;
  piVar1 = piVar5 + (longlong)*(int *)(param_3 + 1) * 2;
  for (; piVar5 != piVar1; piVar5 = piVar5 + 2) {
    iVar2 = *piVar5;
    iVar3 = piVar5[1];
    FUN_14087c670(param_1,param_2,iVar2);
    *(int *)(param_1[8] + (longlong)iVar2 * 0x18) = iVar3;
    iVar3 = DAT_146860778;
    lVar4 = (longlong)DAT_146860778;
    DAT_146860778 = DAT_146860778 + 1;
    if (DAT_14686077c < DAT_146860778) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146860770,iVar3);
    }
    *(int *)(DAT_146860770 + lVar4 * 4) = iVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000140890610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x380))(param_1,param_2,&DAT_146860770);
  return;
}



// FUNCTION 140890650 OnChangePolygonVertexInstances body=83 status=ok
// SIG undefined OnChangePolygonVertexInstances(void)

void UEditableMeshAdapter::OnChangePolygonVertexInstances(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x2f,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x2f,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 1408906c0 OnPathInvalid body=83 status=ok
// SIG undefined OnPathInvalid(void)

void INavPathObserverInterface::OnPathInvalid(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x1c,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x1c,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140890720 FUN_140890720 body=75 status=ok
// SIG undefined FUN_140890720(void)

void FUN_140890720(longlong *param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2b0))();
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x138))(param_2,0,param_1[5],0x10);
    *(longlong **)(param_1[5] + 0x158) = param_2;
  }
  return;
}



// FUNCTION 140890770 GetGameplayTaskOwner body=85 status=ok
// SIG undefined GetGameplayTaskOwner(void)

undefined8 IGameplayTaskOwnerInterface::GetGameplayTaskOwner(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x1d,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x1d,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return 0;
}



// FUNCTION 1408907d0 FUN_1408907d0 body=533 status=ok
// SIG undefined FUN_1408907d0(void)

longlong FUN_1408907d0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_38 [32];
  
  if (param_3 == (longlong *)0x0) {
    return 0;
  }
  lVar5 = FUN_142a232e0();
  if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  lVar13 = 0;
  lVar7 = lVar13;
  if (lVar5 != 0) {
    plVar6 = param_3;
    if (param_3 == (longlong *)&DAT_ffffffffffffffff) {
      plVar6 = (longlong *)GetTransientPackage();
    }
    lVar7 = FUN_1417987a0(lVar5,plVar6,0,0xefffffff,0,0,0xff800000);
  }
  *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) & 0xfffffffc;
  (**(code **)(*param_3 + 0x928))(param_3,lVar7);
  lVar5 = lVar13;
  if (param_2 != 0) {
    lVar5 = lVar7;
    if (lVar7 == -1) {
      lVar5 = GetTransientPackage();
    }
    lVar5 = FUN_1417987a0(param_2,lVar5,0,0xefffffff,0,0,0xff800000);
  }
  plVar6 = *(longlong **)(param_2 + 0xd78);
  for (plVar11 = plVar6; plVar11 != plVar6 + *(int *)(param_2 + 0xd80); plVar11 = plVar11 + 1) {
    if (*plVar11 == param_1) {
      iVar10 = (int)((longlong)plVar11 - (longlong)plVar6 >> 3);
      goto LAB_140890923;
    }
  }
  iVar10 = -1;
LAB_140890923:
  lVar12 = *(longlong *)(*(longlong *)(lVar5 + 0xd78) + (longlong)iVar10 * 8);
  if (lVar12 != 0) {
    lVar8 = UEditableStaticMeshAdapter::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140890978;
  }
  lVar12 = lVar13;
LAB_140890978:
  *(longlong *)(lVar7 + 0x158) = lVar5;
  *(longlong *)(lVar12 + 0x28) = lVar7;
  puVar9 = (undefined4 *)
           UEditableMeshFactory::MakeSubmeshAddress
                     (local_38,param_3,*(undefined4 *)(param_2 + 0xd64));
  uVar1 = puVar9[1];
  uVar2 = puVar9[2];
  uVar3 = puVar9[3];
  *(undefined4 *)(lVar5 + 0xd50) = *puVar9;
  *(undefined4 *)(lVar5 + 0xd54) = uVar1;
  *(undefined4 *)(lVar5 + 0xd58) = uVar2;
  *(undefined4 *)(lVar5 + 0xd5c) = uVar3;
  *(undefined8 *)(lVar5 + 0xd60) = *(undefined8 *)(puVar9 + 4);
  FUN_140898df0(lVar5);
  return lVar5;
}



// FUNCTION 1408909f0 BindPossessableObject body=83 status=ok
// SIG undefined BindPossessableObject(void)

void UMovieSceneSequence::BindPossessableObject(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x29,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x29,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140890a50 OnCreateEmptyVertexRange body=83 status=ok
// SIG undefined OnCreateEmptyVertexRange(void)

void UEditableMeshAdapter::OnCreateEmptyVertexRange(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x24,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x24,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140890ab0 OnCreatePolygonGroups body=83 status=ok
// SIG undefined OnCreatePolygonGroups(void)

void UEditableMeshAdapter::OnCreatePolygonGroups(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x31,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x31,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140890b10 FUN_140890b10 body=943 status=ok
// SIG undefined FUN_140890b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140890b10(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined2 *puVar14;
  int *piVar15;
  longlong lVar16;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 local_110;
  undefined1 local_108;
  int local_f8 [2];
  undefined8 local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  int *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar11 = *(longlong *)(param_2 + 0x28) + 0xab8;
  local_e8 = param_2;
  plVar6 = (longlong *)FUN_1408608e0(lVar11,DAT_146aedb48,0);
  local_c0 = plVar6;
  plVar7 = (longlong *)FUN_1408608e0(lVar11,DAT_14685f178,0);
  local_c8 = plVar7;
  local_e0 = (longlong *)FUN_140860990(lVar11,DAT_146aedb50,0);
  local_d8 = (longlong *)FUN_140860990(lVar11,DAT_146aedb58,0);
  piVar15 = (int *)*param_3;
  local_d0 = piVar15 + *(int *)(param_3 + 1);
  if (piVar15 != local_d0) {
    do {
      iVar2 = *piVar15;
      lVar11 = (longlong)iVar2;
      puVar8 = (undefined8 *)FName::ToString(*plVar7 + lVar11 * 8,local_b8);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar8;
      }
      uVar9 = UMaterialInterface::GetPrivateStaticClass();
      local_108 = 1;
      local_110 = 0;
      local_118 = 0;
      uVar9 = FUN_141799c90(uVar9,0,puVar14,0);
      if (local_b8[0] != 0) {
        FMemory::Free();
      }
      lVar10 = *(longlong *)(param_1 + 0x28);
      lVar12 = *plVar6;
      iVar3 = *(int *)(lVar10 + 0x78);
      lVar16 = (longlong)iVar3;
      *(int *)(lVar10 + 0x78) = iVar3 + 1;
      if (*(int *)(lVar10 + 0x7c) < iVar3 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(lVar10 + 0x70,iVar3);
      }
      lVar10 = *(longlong *)(lVar10 + 0x70);
      *(undefined8 *)(lVar10 + 8 + lVar16 * 0x30) = *(undefined8 *)(lVar12 + lVar11 * 8);
      *(undefined8 *)(lVar10 + lVar16 * 0x30) = uVar9;
      *(undefined8 *)(lVar10 + 0x10 + lVar16 * 0x30) = 0;
      *(undefined8 *)(lVar10 + 0x18 + lVar16 * 0x30) = 0;
      *(undefined8 *)(lVar10 + 0x20 + lVar16 * 0x30) = 0;
      *(undefined4 *)(lVar10 + 0x28 + lVar16 * 0x30) = 0;
      lVar12 = *(longlong *)(lVar10 + lVar16 * 0x30);
      iVar13 = 0;
      if ((lVar12 != 0) && (local_f0 = 0, *(longlong *)(lVar10 + 8 + lVar16 * 0x30) == 0)) {
        *(undefined8 *)(lVar10 + 8 + lVar16 * 0x30) = *(undefined8 *)(lVar12 + 0x18);
      }
      if (*(int *)(local_e8 + 0xe88) < 1) {
        lVar10 = *(longlong *)
                  (**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x38) +
                  (longlong)*(int *)(param_1 + 0x38) * 8);
        plVar7 = (longlong *)(lVar10 + 0x478);
        iVar13 = *(int *)(lVar10 + 0x480);
        lVar12 = (longlong)iVar13;
        *(int *)(lVar10 + 0x480) = iVar13 + 1;
        if (*(int *)(lVar10 + 0x484) < iVar13 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar7,iVar13);
        }
        lVar10 = *plVar7;
        *(undefined8 *)(lVar10 + lVar12 * 0x18) = 0;
        *(undefined8 *)(lVar10 + 8 + lVar12 * 0x18) = 0;
        *(undefined4 *)(lVar10 + 0x10 + lVar12 * 0x18) = 0;
        *(undefined2 *)(lVar10 + 0x14 + lVar12 * 0x18) = 0x100;
        lVar10 = *plVar7;
        piVar1 = (int *)(lVar10 + lVar12 * 0x18);
        if (iVar13 == 0) {
          iVar5 = 0;
        }
        else {
          UEditableStaticMeshAdapter::GetSectionForRenderingSectionIndex
                    (param_1,local_f8,iVar13 + -1);
          iVar5 = *(int *)(*(longlong *)(param_1 + 0x78) + 8 + (longlong)local_f8[0] * 0x48) * 3 +
                  *(int *)(lVar10 + lVar12 * 0x18 + -0x14);
        }
        piVar1[1] = iVar5;
        piVar1[2] = 0;
        piVar1[3] = 0;
        piVar1[4] = 0;
        *(undefined1 *)(piVar1 + 5) = *(undefined1 *)(lVar11 + *local_e0);
        *(undefined1 *)((longlong)piVar1 + 0x15) = *(undefined1 *)(lVar11 + *local_d8);
        *piVar1 = iVar3;
      }
      local_98 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0xffffffff;
      local_54 = 0;
      lVar10 = FUN_14088eef0(param_1 + 0x78,local_a8,iVar2);
      puVar4 = *(undefined4 **)(lVar10 + 8);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = local_98._4_4_;
        puVar4[2] = 0;
        *(undefined8 *)(puVar4 + 4) = 0;
        *(undefined8 *)(puVar4 + 6) = 0;
        *(undefined8 *)(puVar4 + 0xc) = 0;
        *(undefined8 *)(puVar4 + 0xe) = 0;
        puVar4[0x10] = 0xffffffff;
        puVar4[0x11] = 0;
        TSparseArray<FMeshTriangle,FDefaultSparseArrayAllocator>::operator=(puVar4 + 4,&local_88);
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
      lVar10 = *(longlong *)(param_1 + 0x78);
      piVar15 = piVar15 + 1;
      *(int *)(lVar10 + lVar11 * 0x48) = iVar13;
      *(int *)(lVar10 + 4 + lVar11 * 0x48) = iVar3;
      *(undefined4 *)(lVar10 + 8 + lVar11 * 0x48) = 0;
      plVar7 = local_c8;
      plVar6 = local_c0;
    } while (piVar15 != local_d0);
  }
  return;
}



// FUNCTION 140890ec0 OnCreatePolygons body=83 status=ok
// SIG undefined OnCreatePolygons(void)

void UEditableMeshAdapter::OnCreatePolygons(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x2d,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x2d,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140890f20 FUN_140890f20 body=181 status=ok
// SIG undefined FUN_140890f20(void)

void FUN_140890f20(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 local_48 [48];
  
  piVar5 = (int *)*param_3;
  piVar1 = piVar5 + *(int *)(param_3 + 1);
  if (piVar5 != piVar1) {
    do {
      iVar2 = *piVar5;
      lVar4 = FUN_14088e510((longlong *)(param_1 + 0x40),local_48,iVar2);
      puVar3 = *(undefined4 **)(lVar4 + 8);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        *(undefined8 *)(puVar3 + 2) = 0;
        *(undefined8 *)(puVar3 + 4) = 0;
      }
      piVar5 = piVar5 + 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar2 * 0x18) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0xa8) + 0x30 + (longlong)iVar2 * 0x38);
    } while (piVar5 != piVar1);
  }
  return;
}



// FUNCTION 140890fe0 OnCreateVertexInstances body=83 status=ok
// SIG undefined OnCreateVertexInstances(void)

void UEditableMeshAdapter::OnCreateVertexInstances(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x26,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x26,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140891040 FUN_140891040 body=2909 status=ok
// SIG undefined FUN_140891040(void)

void FUN_140891040(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  undefined2 *puVar24;
  int iVar25;
  float fVar26;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  longlong *local_d8;
  uint *local_d0;
  longlong local_c8;
  uint *local_c0;
  
  if (0 < *(int *)(param_2 + 0xe88)) {
    return;
  }
  lVar14 = *(longlong *)(param_2 + 0x28);
  lVar1 = *(longlong *)
           (**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x38) +
           (longlong)*(int *)(param_1 + 0x38) * 8);
  if (*(int *)(lVar14 + 0x440) != *(int *)(lVar14 + 0x46c)) {
    lVar23 = *(longlong *)(lVar14 + 0x478);
    if (*(longlong *)(lVar14 + 0x478) == 0) {
      lVar23 = lVar14 + 0x470;
    }
    iVar7 = *(int *)(lVar23 + ((longlong)
                               ((int)((ulonglong)DAT_146aedae0 >> 0x20) + (int)DAT_146aedae0) &
                              (longlong)*(int *)(lVar14 + 0x480) - 1U) * 4);
    if (iVar7 != -1) {
      do {
        plVar16 = (longlong *)((longlong)iVar7 * 0x38 + *(longlong *)(lVar14 + 0x438));
        if (*plVar16 == DAT_146aedae0) {
          if (iVar7 != -1) goto LAB_140891111;
          break;
        }
        iVar7 = (int)plVar16[6];
      } while (iVar7 != -1);
    }
  }
  plVar16 = (longlong *)0x0;
LAB_140891111:
  lVar23 = (longlong)(int)plVar16[3];
  local_d8 = (longlong *)FUN_140860830(lVar14 + 0x118,DAT_146aedad0,0);
  if (*(int *)(lVar1 + 0x1f8) < 1) {
LAB_140891163:
    bVar4 = false;
  }
  else {
    bVar4 = true;
    lVar11 = *(longlong *)(lVar1 + 0x1f0);
    if (*(longlong *)(lVar1 + 0x1f0) == 0) {
      lVar11 = lVar1 + 0x140;
    }
    if (*(int *)(lVar11 + 0x54) == 0) goto LAB_140891163;
  }
  if (1 < *(int *)(lVar1 + 0x1f8)) {
    lVar11 = *(longlong *)(lVar1 + 0x1f0);
    if (*(longlong *)(lVar1 + 0x1f0) == 0) {
      lVar11 = lVar1 + 0x140;
    }
    if (*(int *)(lVar11 + 0xac) != 0) {
      bVar5 = true;
      goto LAB_1408911a4;
    }
  }
  bVar5 = false;
LAB_1408911a4:
  iVar7 = *(int *)(lVar1 + 0x13c);
  uVar18 = *(int *)(lVar14 + 0x40) - iVar7;
  plVar16 = (longlong *)(ulonglong)uVar18;
  if ((int)uVar18 < 1) {
    plVar16 = (longlong *)0x0;
  }
  iVar25 = (int)plVar16;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146860750) && (_Init_thread_header(&DAT_146860750), DAT_146860750 == -1))
  {
    atexit((_func_5014 *)&LAB_143e44070);
    _Init_thread_footer(&DAT_146860750);
  }
  iVar20 = DAT_146860748;
  if (DAT_146860748 < iVar25) {
    DAT_146860748 = iVar25;
    if (DAT_14686074c < iVar25) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                (&DAT_146860740,iVar20);
    }
  }
  else if ((iVar25 < DAT_146860748) && (iVar20 = DAT_146860748 - iVar25, iVar20 != 0)) {
    iVar21 = (DAT_146860748 - iVar20) - iVar25;
    if (iVar21 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar25 * 0x78 + DAT_146860740),
                 (void *)((longlong)(iVar20 + iVar25) * 0x78 + DAT_146860740),
                 (longlong)iVar21 * 0x78);
    }
    DAT_146860748 = DAT_146860748 - iVar20;
  }
  local_d0 = (uint *)*param_3;
  local_c0 = local_d0 + *(int *)(param_3 + 1);
  local_c8 = lVar23;
  if (local_d0 != local_c0) {
    do {
      lVar12 = 0;
      uVar18 = *local_d0;
      uVar19 = (ulonglong)uVar18;
      lVar11 = (longlong)*(int *)(*(longlong *)(lVar14 + 0x38) + (longlong)(int)uVar18 * 0x18);
      if ((int)uVar18 < iVar7) {
        lVar23 = *(longlong *)(lVar1 + 0x130);
        lVar12 = *local_d8;
        uVar8 = *(int *)(lVar1 + 0x138) * uVar18;
        *(undefined8 *)((ulonglong)uVar8 + lVar23) = *(undefined8 *)(lVar12 + lVar11 * 0xc);
        *(undefined4 *)((ulonglong)uVar8 + 8 + lVar23) = *(undefined4 *)(lVar12 + 8 + lVar11 * 0xc);
        local_120 = DAT_1468b5d98;
        local_134 = DAT_1468b5d94;
        local_128 = DAT_1468b5d90;
        lVar23 = *(longlong *)(lVar1 + 0xc0);
        if (*(char *)(lVar1 + 0xe1) == '\0') {
          local_e0 = DAT_1468b5d98;
          local_e8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          iVar25 = (int)ROUND(DAT_1468b5d90 * 127.0 + DAT_1468b5d90 * 127.0 + 0.5) >> 1;
          if (iVar25 < -0x80) {
            iVar20 = -0x80;
          }
          else {
            iVar20 = 0x7f;
            if (iVar25 < 0x7f) {
              iVar20 = iVar25;
            }
          }
          *(char *)(lVar23 + uVar19 * 8) = (char)iVar20;
          iVar20 = (int)ROUND(local_134 * 127.0 + local_134 * 127.0 + 0.5) >> 1;
          if (iVar20 < -0x80) {
            iVar21 = -0x80;
          }
          else {
            iVar21 = 0x7f;
            if (iVar20 < 0x7f) {
              iVar21 = iVar20;
            }
          }
          *(char *)(lVar23 + 1 + uVar19 * 8) = (char)iVar21;
          iVar21 = (int)ROUND(local_120 * 127.0 + local_120 * 127.0 + 0.5) >> 1;
          if (iVar21 < -0x80) {
            iVar9 = -0x80;
          }
          else {
            iVar9 = 0x7f;
            if (iVar21 < 0x7f) {
              iVar9 = iVar21;
            }
          }
          local_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_fc = 0x3f800000;
          local_138 = local_128;
          local_130 = local_120;
          local_124 = local_134;
          local_118 = local_128;
          local_114 = local_134;
          local_110 = local_120;
          *(char *)(lVar23 + 2 + uVar19 * 8) = (char)iVar9;
          *(undefined1 *)(lVar23 + 3 + uVar19 * 8) = 0x7f;
          local_12c = 0;
          local_11c = 0;
          local_10c = 0;
          fVar26 = (float)FMatrix::Determinant(&local_138);
          if (0.0 <= fVar26) {
            fVar26 = 254.5;
          }
          else {
            fVar26 = -253.5;
          }
          if (iVar25 < -0x80) {
            iVar9 = -0x80;
          }
          else {
            iVar9 = 0x7f;
            if (iVar25 < 0x7f) {
              iVar9 = iVar25;
            }
          }
          *(char *)(lVar23 + 4 + uVar19 * 8) = (char)iVar9;
          if (iVar20 < -0x80) {
            iVar25 = -0x80;
          }
          else {
            iVar25 = 0x7f;
            if (iVar20 < 0x7f) {
              iVar25 = iVar20;
            }
          }
          *(char *)(lVar23 + 5 + uVar19 * 8) = (char)iVar25;
          if (iVar21 < -0x80) {
            iVar25 = -0x80;
          }
          else {
            iVar25 = 0x7f;
            if (iVar21 < 0x7f) {
              iVar25 = iVar21;
            }
          }
          *(char *)(lVar23 + 6 + uVar19 * 8) = (char)iVar25;
          iVar25 = (int)ROUND(fVar26) >> 1;
          if (iVar25 < -0x80) {
            iVar20 = -0x80;
          }
          else {
            iVar20 = 0x7f;
            if (iVar25 < 0x7f) {
              iVar20 = iVar25;
            }
          }
          *(char *)(lVar23 + 7 + uVar19 * 8) = (char)iVar20;
        }
        else {
          puVar24 = (undefined2 *)((ulonglong)uVar18 * 0x10 + lVar23);
          local_f8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          local_f0 = DAT_1468b5d98;
          iVar25 = (int)ROUND(DAT_1468b5d90 * 32767.0 + DAT_1468b5d90 * 32767.0 + 0.5) >> 1;
          if (iVar25 < -0x8000) {
            iVar20 = -0x8000;
          }
          else {
            iVar20 = 0x7fff;
            if (iVar25 < 0x7fff) {
              iVar20 = iVar25;
            }
          }
          *puVar24 = (short)iVar20;
          iVar20 = (int)ROUND(local_134 * 32767.0 + local_134 * 32767.0 + 0.5) >> 1;
          if (iVar20 < -0x8000) {
            iVar21 = -0x8000;
          }
          else {
            iVar21 = 0x7fff;
            if (iVar20 < 0x7fff) {
              iVar21 = iVar20;
            }
          }
          puVar24[1] = (short)iVar21;
          iVar21 = (int)ROUND(local_120 * 32767.0 + local_120 * 32767.0 + 0.5) >> 1;
          if (iVar21 < -0x8000) {
            iVar9 = -0x8000;
          }
          else {
            iVar9 = 0x7fff;
            if (iVar21 < 0x7fff) {
              iVar9 = iVar21;
            }
          }
          local_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_fc = 0x3f800000;
          local_138 = local_128;
          local_130 = local_120;
          local_124 = local_134;
          local_118 = local_128;
          local_114 = local_134;
          local_110 = local_120;
          puVar24[2] = (short)iVar9;
          puVar24[3] = 0x7fff;
          local_12c = 0;
          local_11c = 0;
          local_10c = 0;
          fVar26 = (float)FMatrix::Determinant(&local_138);
          if (0.0 <= fVar26) {
            fVar26 = 65534.5;
          }
          else {
            fVar26 = -65533.5;
          }
          if (iVar25 < -0x8000) {
            iVar9 = -0x8000;
          }
          else {
            iVar9 = 0x7fff;
            if (iVar25 < 0x7fff) {
              iVar9 = iVar25;
            }
          }
          puVar24[4] = (short)iVar9;
          if (iVar20 < -0x8000) {
            iVar25 = -0x8000;
          }
          else {
            iVar25 = 0x7fff;
            if (iVar20 < 0x7fff) {
              iVar25 = iVar20;
            }
          }
          puVar24[5] = (short)iVar25;
          if (iVar21 < -0x8000) {
            iVar25 = -0x8000;
          }
          else {
            iVar25 = 0x7fff;
            if (iVar21 < 0x7fff) {
              iVar25 = iVar21;
            }
          }
          puVar24[6] = (short)iVar25;
          iVar25 = (int)ROUND(fVar26) >> 1;
          if (iVar25 < -0x8000) {
            puVar24[7] = 0x8000;
          }
          else {
            iVar20 = 0x7fff;
            if (iVar25 < 0x7fff) {
              iVar20 = iVar25;
            }
            puVar24[7] = (short)iVar20;
          }
        }
        lVar23 = 0;
        if (0 < local_c8) {
          do {
            uVar8 = DAT_1468b5d88._4_4_;
            if (*(char *)(lVar1 + 0xe0) == '\0') {
              lVar11 = *(longlong *)(lVar1 + 200);
              lVar12 = (ulonglong)*(uint *)(lVar1 + 0xd8) * (ulonglong)uVar18 + lVar23;
              uVar3 = (ushort)((uint)DAT_1468b5d88 >> 0x10);
              uVar6 = uVar3 & 0x8000;
              uVar22 = (uint)DAT_1468b5d88 >> 0x17 & 0xff;
              if (uVar22 < 0x71) {
                iVar25 = -uVar22 + 0x7e;
                if ((iVar25 < 0x19) &&
                   (uVar15 = (uint)DAT_1468b5d88 & 0x7fffff | 0x800000,
                   uVar6 = (ushort)(uVar15 >> ((byte)iVar25 & 0x1f)) & 0x3ff | uVar6,
                   (uVar15 >> ((char)-uVar22 + 0x7dU & 0x1f) & 1) != 0)) {
                  uVar6 = uVar6 + 1;
                }
              }
              else if (uVar22 < 0x8f) {
                uVar6 = uVar6 | (ushort)((uint)DAT_1468b5d88 >> 0xd) & 0x3ff |
                                ((uVar3 >> 7) - 0x10 & 0x1f) << 10;
              }
              else {
                uVar6 = uVar6 | 0x7bff;
              }
              *(ushort *)(lVar11 + lVar12 * 4) = uVar6;
              uVar3 = (ushort)(uVar8 >> 0x10);
              uVar6 = uVar3 & 0x8000;
              uVar22 = uVar8 >> 0x17 & 0xff;
              if (uVar22 < 0x71) {
                iVar25 = -uVar22 + 0x7e;
                if ((iVar25 < 0x19) &&
                   (uVar8 = uVar8 & 0x7fffff | 0x800000,
                   uVar6 = (ushort)(uVar8 >> ((byte)iVar25 & 0x1f)) & 0x3ff | uVar6,
                   (uVar8 >> ((char)-uVar22 + 0x7dU & 0x1f) & 1) != 0)) {
                  uVar6 = uVar6 + 1;
                }
              }
              else if (uVar22 < 0x8f) {
                uVar6 = uVar6 | ((uVar3 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar8 >> 0xd) & 0x3ff;
              }
              else {
                uVar6 = uVar6 | 0x7bff;
              }
              *(ushort *)(lVar11 + 2 + lVar12 * 4) = uVar6;
            }
            else {
              lVar11 = *(longlong *)(lVar1 + 200);
              lVar12 = (ulonglong)*(uint *)(lVar1 + 0xd8) * (ulonglong)uVar18 + lVar23;
              *(uint *)(lVar11 + lVar12 * 8) = (uint)DAT_1468b5d88;
              *(uint *)(lVar11 + 4 + lVar12 * 8) = uVar8;
            }
            lVar23 = lVar23 + 1;
          } while (lVar23 < local_c8);
        }
        if (bVar4) {
          lVar23 = *(longlong *)(lVar1 + 0x1f0);
          if (*(longlong *)(lVar1 + 0x1f0) == 0) {
            lVar23 = lVar1 + 0x140;
          }
          *(undefined4 *)
           ((ulonglong)(*(int *)(lVar23 + 0x50) * uVar18) + *(longlong *)(lVar23 + 0x48)) =
               DAT_1464aa730;
        }
        lVar23 = local_c8;
        if (bVar5) {
          lVar11 = *(longlong *)(lVar1 + 0x1f0);
          if (*(longlong *)(lVar1 + 0x1f0) == 0) {
            lVar11 = lVar1 + 0x140;
          }
          *(undefined4 *)
           ((ulonglong)(*(int *)(lVar11 + 0xa8) * uVar18) + *(longlong *)(lVar11 + 0xa0)) =
               DAT_1464aa730;
        }
      }
      else {
        puVar17 = (undefined8 *)((longlong)(int)(uVar18 - iVar7) * 0x78 + DAT_146860740);
        lVar2 = *local_d8;
        *puVar17 = *(undefined8 *)(lVar2 + lVar11 * 0xc);
        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(lVar2 + 8 + lVar11 * 0xc);
        *(ulonglong *)((longlong)puVar17 + 0xc) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        *(float *)((longlong)puVar17 + 0x14) = DAT_1468b5d98;
        puVar17[3] = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        *(float *)(puVar17 + 4) = DAT_1468b5d98;
        *(ulonglong *)((longlong)puVar17 + 0x24) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        *(float *)((longlong)puVar17 + 0x2c) = DAT_1468b5d98;
        if (0 < lVar23) {
          puVar10 = (uint *)(puVar17 + 6);
          lVar11 = lVar23;
          do {
            *puVar10 = (uint)DAT_1468b5d88;
            puVar10[1] = DAT_1468b5d88._4_4_;
            lVar11 = lVar11 + -1;
            puVar10 = puVar10 + 2;
          } while (lVar11 != 0);
        }
        puVar13 = puVar17 + 0xe;
        if (puVar13 <= puVar17 + 0xf) {
          do {
            lVar12 = lVar12 + 1;
            *(undefined4 *)puVar13 = DAT_1464aa730;
            puVar13 = (undefined8 *)((longlong)puVar13 + 4);
          } while (lVar12 != 2);
        }
      }
      local_d0 = local_d0 + 1;
    } while (local_d0 != local_c0);
  }
  if (0 < DAT_146860748) {
    FUN_142721870(lVar1,DAT_146860740);
    FUN_1426fa9a0(lVar1 + 0xe8,DAT_146860740,DAT_146860748);
    if (bVar4) {
      lVar14 = *(longlong *)(lVar1 + 0x1f0);
      if (*(longlong *)(lVar1 + 0x1f0) == 0) {
        lVar14 = lVar1 + 0x140;
      }
      FUN_1427217b0(lVar14,DAT_146860740,DAT_146860748,0);
    }
    if (bVar5) {
      lVar14 = *(longlong *)(lVar1 + 0x1f0);
      if (*(longlong *)(lVar1 + 0x1f0) == 0) {
        lVar14 = lVar1 + 0x140;
      }
      FUN_1427217b0(lVar14 + 0x58,DAT_146860740,DAT_146860748,1);
    }
  }
  return;
}



// FUNCTION 140891ba0 OnCreateVertices body=83 status=ok
// SIG undefined OnCreateVertices(void)

void UEditableMeshAdapter::OnCreateVertices(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x25,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x25,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140891c00 OnDeleteEdges body=83 status=ok
// SIG undefined OnDeleteEdges(void)

void UEditableMeshAdapter::OnDeleteEdges(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x2a,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x2a,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140891c60 OnDeleteOrphanVertices body=83 status=ok
// SIG undefined OnDeleteOrphanVertices(void)

void UEditableMeshAdapter::OnDeleteOrphanVertices(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x23,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x23,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140891cc0 OnDeletePolygonGroups body=83 status=ok
// SIG undefined OnDeletePolygonGroups(void)

void UEditableMeshAdapter::OnDeletePolygonGroups(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x32,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x32,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140891d20 FUN_140891d20 body=1059 status=ok
// SIG undefined FUN_140891d20(void)

void FUN_140891d20(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
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
  
  piVar13 = (int *)*param_3;
  piVar3 = piVar13 + *(int *)(param_3 + 1);
  if (piVar13 != piVar3) {
    plVar1 = (longlong *)(param_1 + 0x78);
    do {
      puVar20 = (uint *)(param_1 + 0x88);
      iVar6 = *piVar13;
      lVar17 = *(longlong *)(param_1 + 0x28);
      iVar12 = *(int *)(*plVar1 + 4 + (longlong)iVar6 * 0x48);
      puVar4 = (uint *)(*plVar1 + (longlong)iVar6 * 0x48);
      iVar11 = *(int *)(lVar17 + 0x78);
      iVar10 = (iVar11 - iVar12) + -1;
      if (iVar10 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar12 * 0x30 + *(longlong *)(lVar17 + 0x70)),
                   (void *)((longlong)(iVar12 + 1) * 0x30 + *(longlong *)(lVar17 + 0x70)),
                   (longlong)iVar10 * 0x30);
        iVar11 = *(int *)(lVar17 + 0x78);
      }
      *(int *)(lVar17 + 0x78) = iVar11 + -1;
      TArray<FCloudFile,FDefaultAllocator>::ResizeShrink();
      uVar7 = *puVar4;
      iVar11 = *(int *)(param_1 + 0xa0);
      local_c8 = 0;
      uStack_c4 = 1;
      uStack_b4 = 0;
      iStack_b0 = 0;
      if (iVar11 != 0) {
        puVar19 = *(uint **)(param_1 + 0x98);
        if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
          puVar19 = puVar20;
        }
        uVar16 = *puVar19;
        iStack_b0 = 0;
        local_c8 = 0;
        while (uVar16 == 0) {
          lVar17 = (longlong)local_c8;
          iStack_b0 = iStack_b0 + 0x20;
          iVar10 = local_c8 + 1;
          bVar9 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_c8;
          local_c8 = iVar10;
          if (bVar9) goto LAB_140891e9f;
          uVar16 = puVar19[lVar17 + 1];
        }
        uStack_c4 = -uVar16 & uVar16;
        iVar10 = 0x1f;
        if (uStack_c4 != 0) {
          for (; uStack_c4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uStack_c4 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uStack_b4 = (iStack_b0 - iVar10) + 0x1f;
        if (iVar11 < (int)uStack_b4) {
LAB_140891e9f:
          uStack_b4 = iVar11;
        }
      }
      uVar16 = *(uint *)(param_1 + 0xa0);
      uStack_80 = CONCAT44(uStack_b4,0xffffffff);
      local_78 = CONCAT44(uStack_ac,iStack_b0);
      uVar8 = *(uint *)(param_1 + 0xa0);
      uStack_68 = CONCAT44(uStack_c4,local_c8);
      uVar18 = uVar16 & 0xffffffe0;
      iStack_90 = local_c8;
      uStack_8c = uStack_c4;
      local_88 = puVar20;
      local_70 = plVar1;
      puStack_60 = puVar20;
      uStack_58 = uStack_80;
      uStack_50 = local_78;
      uStack_b4 = uVar16;
      if (uVar16 != uVar8) {
        puVar20 = *(uint **)(param_1 + 0x98);
        if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
          puVar20 = (uint *)(param_1 + 0x88);
        }
        uVar15 = puVar20[(int)uVar16 >> 5] & -1 << ((byte)uVar16 & 0x1f);
        iVar11 = (int)uVar16 >> 5;
        while (uVar15 == 0) {
          uVar18 = uVar18 + 0x20;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
          goto LAB_140891f76;
          uVar15 = puVar20[(longlong)iVar11 + 1];
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
        uStack_b4 = (uVar18 - iVar11) + 0x1f;
        if ((int)uVar8 < (int)uStack_b4) {
LAB_140891f76:
          uStack_b4 = uVar8;
        }
      }
      while ((uStack_80._4_4_ != uStack_b4 || (local_88 != (uint *)(param_1 + 0x88)))) {
        uVar16 = DAT_14652d648;
        if ((int)uStack_80._4_4_ < (int)local_88[6]) {
          uVar16 = uStack_80._4_4_;
        }
        lVar14 = (longlong)(int)uVar16;
        lVar17 = *plVar1;
        uVar16 = *(uint *)(lVar17 + lVar14 * 0x48);
        if (uVar7 < uVar16) {
          *(uint *)(lVar17 + lVar14 * 0x48) = uVar16 - 1;
        }
        iVar11 = *(int *)(lVar17 + 4 + lVar14 * 0x48);
        if (iVar12 < iVar11) {
          *(int *)(lVar17 + 4 + lVar14 * 0x48) = iVar11 + -1;
        }
        uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_8c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
      }
      if (*(int *)(param_2 + 0xe88) < 1) {
        lVar17 = *(longlong *)
                  (**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x38) +
                  (longlong)*(int *)(param_1 + 0x38) * 8);
        plVar2 = (longlong *)(lVar17 + 0x478);
        uVar16 = puVar4[2];
        FUN_1427384e0(lVar17 + 0x208,*(undefined4 *)(*plVar2 + 4 + (longlong)(int)uVar7 * 0x18),
                      uVar16 * 3);
        uVar8 = *(uint *)(lVar17 + 0x480);
        for (uVar18 = uVar7 + 1; uVar18 < uVar8; uVar18 = uVar18 + 1) {
          piVar5 = (int *)(*plVar2 + 4 + (longlong)(int)uVar18 * 0x18);
          *piVar5 = *piVar5 + uVar16 * -3;
        }
        uVar16 = 0;
        if (uVar8 != 0) {
          do {
            iVar11 = *(int *)(*plVar2 + (longlong)(int)uVar16 * 0x18);
            if (iVar12 < iVar11) {
              *(int *)(*plVar2 + (longlong)(int)uVar16 * 0x18) = iVar11 + -1;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar8);
        }
        iVar12 = *(int *)(lVar17 + 0x480);
        iVar11 = (iVar12 - uVar7) + -1;
        if (iVar11 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar2 + (longlong)(int)uVar7 * 0x18),
                     (void *)(*plVar2 + (longlong)(int)(uVar7 + 1) * 0x18),(longlong)iVar11 * 0x18);
          iVar12 = *(int *)(lVar17 + 0x480);
        }
        *(int *)(lVar17 + 0x480) = iVar12 + -1;
        TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar2);
      }
      TSparseArray<FRenderingPolygonGroup,FDefaultSparseArrayAllocator>::RemoveAt(plVar1,iVar6);
      piVar13 = piVar13 + 1;
    } while (piVar13 != piVar3);
  }
  return;
}



// FUNCTION 140892150 OnDeletePolygons body=83 status=ok
// SIG undefined OnDeletePolygons(void)

void UEditableMeshAdapter::OnDeletePolygons(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x2e,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x2e,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 1408921b0 OnDeletePolygons body=155 status=ok
// SIG undefined OnDeletePolygons(void)

void UEditableStaticMeshAdapter::OnDeletePolygons
               (longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  puVar3 = (undefined4 *)*param_3;
  uVar4 = (longlong)*(int *)(param_3 + 1) & 0x3fffffffffffffff;
  if (puVar3 + *(int *)(param_3 + 1) < puVar3) {
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    do {
      uVar1 = *puVar3;
      FUN_14087c670(param_1,param_2,uVar1);
      TSparseArray<FMeshEdge,FDefaultSparseArrayAllocator>::RemoveAt(param_1 + 0x40,uVar1,1);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar4);
  }
  return;
}



// FUNCTION 140892250 OnDeleteVertexInstances body=83 status=ok
// SIG undefined OnDeleteVertexInstances(void)

void UEditableMeshAdapter::OnDeleteVertexInstances(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x22,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x22,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 1408922b0 InitializeActorsForPlay body=83 status=ok
// SIG undefined InitializeActorsForPlay(void)

void UAISystemBase::InitializeActorsForPlay(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x18,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x18,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140892310 WorldOriginLocationChanged body=83 status=ok
// SIG undefined WorldOriginLocationChanged(void)

void UAISystemBase::WorldOriginLocationChanged(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x20,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x20,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140892370 OnRebuildRenderMesh body=83 status=ok
// SIG undefined OnRebuildRenderMesh(void)

void UEditableMeshAdapter::OnRebuildRenderMesh(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x15,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x15,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 1408923d0 FUN_1408923d0 body=6053 status=ok
// SIG undefined FUN_1408923d0(void)

void FUN_1408923d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  int *piVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  uint *puVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  int iVar29;
  ulonglong uVar30;
  char cVar31;
  ulonglong unaff_R12;
  char cVar32;
  ulonglong unaff_R13;
  char cVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  longlong *local_res20;
  undefined8 local_1c8;
  uint *puStack_1c0;
  uint local_1b8;
  float fStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  float local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  uint *local_190;
  longlong *local_188;
  longlong *local_180;
  undefined8 local_178;
  float fStack_170;
  float fStack_16c;
  uint *puStack_168;
  uint uStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  ulonglong local_150;
  longlong *local_148;
  longlong *local_140;
  undefined8 local_138;
  float fStack_130;
  float fStack_12c;
  uint *local_128;
  uint uStack_120;
  float fStack_11c;
  undefined8 local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 local_100;
  float local_f8;
  float local_f4;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined1 local_d0 [144];
  
  lVar20 = *(longlong *)
            (**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x38) +
            (longlong)*(int *)(param_1 + 0x38) * 8);
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_108 = lVar20;
  if ((*(int *)(lVar7 + 0x38) < DAT_146860720) &&
     (_Init_thread_header(&DAT_146860720), DAT_146860720 == -1)) {
    atexit((_func_5014 *)&LAB_143e44210);
    _Init_thread_footer(&DAT_146860720);
  }
  plVar13 = (longlong *)0x0;
  DAT_146860718 = 0;
  if ((DAT_14686071c < 0) && (DAT_14686071c != 0)) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
              (&DAT_146860710,0);
  }
  if ((*(int *)(lVar7 + 0x38) < DAT_146860738) &&
     (_Init_thread_header(&DAT_146860738), DAT_146860738 == -1)) {
    atexit((_func_5014 *)&LAB_143e43080);
    _Init_thread_footer(&DAT_146860738);
  }
  DAT_146860730 = 0;
  if ((DAT_146860734 < 0) && (DAT_146860734 != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146860728,0);
  }
  lVar7 = *(longlong *)(param_2 + 0x28);
  uVar16 = unaff_R12 & 0xffffffffffffff00;
  uVar27 = unaff_R13 & 0xffffffffffffff00;
  local_188 = (longlong *)CONCAT44(local_188._4_4_,(int)uVar16);
  local_198 = CONCAT44(local_198._4_4_,(int)uVar27);
  local_f0 = (longlong *)FUN_1408608e0(lVar7 + 0xab8,DAT_146aedb48,0);
  local_e8 = (longlong *)FUN_140860990(lVar7 + 0xab8,DAT_146aedb50,0);
  local_e0 = (longlong *)FUN_140860990(lVar7 + 0xab8,DAT_146aedb58,0);
  iVar4 = *(int *)(lVar7 + 0xe8);
  local_110 = (longlong *)(lVar20 + 0x478);
  iVar2 = *(int *)(lVar7 + 0x114);
  local_1a0 = lVar7 + 0xe0;
  *(undefined4 *)(lVar20 + 0x480) = 0;
  if (*(int *)(lVar20 + 0x484) != iVar4 - iVar2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo();
  }
  iVar4 = DAT_146860718;
  if (*(int *)(param_2 + 0xe88) < 1) {
    iVar2 = *(int *)(lVar7 + 0x40);
    if (DAT_146860718 < iVar2) {
      DAT_146860718 = iVar2;
      if (DAT_14686071c < iVar2) {
        TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                  (&DAT_146860710,iVar4);
      }
    }
    else if ((iVar2 < DAT_146860718) && (iVar4 = DAT_146860718 - iVar2, iVar4 != 0)) {
      iVar6 = (DAT_146860718 - iVar4) - iVar2;
      if (iVar6 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar2 * 0x78 + DAT_146860710),
                   (void *)((longlong)(iVar4 + iVar2) * 0x78 + DAT_146860710),(longlong)iVar6 * 0x78
                  );
      }
      DAT_146860718 = DAT_146860718 - iVar4;
      FUN_14089e470(&DAT_146860710);
    }
    local_140 = (longlong *)FUN_140860830(lVar7 + 0x118,DAT_146aedad0,0);
    local_188 = (longlong *)FUN_140860830(lVar7 + 0x380,DAT_146aedae8,0);
    local_148 = (longlong *)FUN_140860830(lVar7 + 0x380,DAT_146aedaf0,0);
    if (*(int *)(lVar7 + 0x498) != *(int *)(lVar7 + 0x4c4)) {
      lVar20 = *(longlong *)(lVar7 + 0x4d0);
      if (*(longlong *)(lVar7 + 0x4d0) == 0) {
        lVar20 = lVar7 + 0x4c8;
      }
      iVar4 = *(int *)(lVar20 + ((longlong)
                                 ((int)((ulonglong)DAT_146aedaf8 >> 0x20) + (int)DAT_146aedaf8) &
                                (longlong)*(int *)(lVar7 + 0x4d8) - 1U) * 4);
      if (iVar4 != -1) {
        do {
          plVar11 = (longlong *)((longlong)iVar4 * 0x30 + *(longlong *)(lVar7 + 0x490));
          if (*plVar11 == DAT_146aedaf8) {
            if (iVar4 != -1) goto LAB_140892c95;
            break;
          }
          iVar4 = (int)plVar11[5];
        } while (iVar4 != -1);
      }
    }
    plVar11 = plVar13;
LAB_140892c95:
    local_190 = (uint *)plVar11[2];
    local_180 = (longlong *)FUN_140860790(lVar7 + 0x380,DAT_146aedb00,0);
    if (*(int *)(lVar7 + 0x440) != *(int *)(lVar7 + 0x46c)) {
      lVar20 = *(longlong *)(lVar7 + 0x478);
      if (*(longlong *)(lVar7 + 0x478) == 0) {
        lVar20 = lVar7 + 0x470;
      }
      iVar4 = *(int *)(lVar20 + ((longlong)
                                 ((int)((ulonglong)DAT_146aedae0 >> 0x20) + (int)DAT_146aedae0) &
                                (longlong)*(int *)(lVar7 + 0x480) - 1U) * 4);
      if (iVar4 != -1) {
        do {
          plVar11 = (longlong *)((longlong)iVar4 * 0x38 + *(longlong *)(lVar7 + 0x438));
          if (*plVar11 == DAT_146aedae0) {
            if (iVar4 != -1) goto LAB_140892d31;
            break;
          }
          iVar4 = (int)plVar11[6];
        } while (iVar4 != -1);
      }
    }
    plVar11 = plVar13;
LAB_140892d31:
    plVar21 = (longlong *)(lVar7 + 0x38);
    iVar4 = *(int *)(lVar7 + 0x60);
    puStack_1c0 = (uint *)(lVar7 + 0x48);
    local_1c8._0_4_ = 0.0;
    local_1c8._4_4_ = 1.4013e-45;
    fStack_1b4 = 0.0;
    uStack_1b0 = 0;
    if (iVar4 != 0) {
      puVar26 = *(uint **)(lVar7 + 0x58);
      if (*(uint **)(lVar7 + 0x58) == (uint *)0x0) {
        puVar26 = puStack_1c0;
      }
      uVar23 = *puVar26;
      plVar12 = plVar13;
      plVar22 = plVar13;
      while (uVar23 == 0) {
        iVar2 = (int)plVar12;
        uStack_1b0 = (int)plVar22 + 0x20;
        plVar22 = (longlong *)(ulonglong)uStack_1b0;
        local_1c8._0_4_ = (float)(iVar2 + 1);
        plVar12 = (longlong *)(ulonglong)(uint)(float)local_1c8;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar2) goto LAB_140892dee;
        uVar23 = puVar26[(longlong)iVar2 + 1];
      }
      local_1c8._4_4_ = (float)(-uVar23 & uVar23);
      iVar2 = 0x1f;
      if (local_1c8._4_4_ != 0.0) {
        for (; (uint)local_1c8._4_4_ >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (local_1c8._4_4_ == 0.0) {
        iVar2 = 0x20;
      }
      else {
        iVar2 = 0x1f - iVar2;
      }
      fStack_1b4 = (float)((uStack_1b0 - iVar2) + 0x1f);
      if (iVar4 < (int)fStack_1b4) {
LAB_140892dee:
        fStack_1b4 = (float)iVar4;
      }
    }
    uVar23 = *(uint *)(lVar7 + 0x60);
    uStack_120 = 0xffffffff;
    fStack_11c = fStack_1b4;
    uStack_158 = CONCAT44(uStack_1ac,uStack_1b0);
    uVar14 = *(uint *)(lVar7 + 0x60);
    fStack_170 = (float)local_1c8;
    fStack_16c = local_1c8._4_4_;
    local_1b8 = -1 << ((byte)uVar23 & 0x1f);
    uVar24 = uVar23 & 0xffffffe0;
    fStack_130 = (float)local_1c8;
    fStack_12c = local_1c8._4_4_;
    fStack_1b4 = (float)uVar23;
    if (uVar23 != uVar14) {
      lVar20 = *(longlong *)(lVar7 + 0x58);
      if (*(longlong *)(lVar7 + 0x58) == 0) {
        lVar20 = lVar7 + 0x48;
      }
      uVar15 = *(uint *)(lVar20 + (longlong)((int)uVar23 >> 5) * 4) & local_1b8;
      iVar4 = (int)uVar23 >> 5;
      while (uVar15 == 0) {
        uVar24 = uVar24 + 0x20;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_140892ed3;
        uVar15 = *(uint *)(lVar20 + 4 + (longlong)iVar4 * 4);
        local_1b8 = 0xffffffff;
        iVar4 = iVar4 + 1;
      }
      uVar15 = -uVar15 & uVar15;
      iVar4 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar15 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      fStack_1b4 = (float)((uVar24 - iVar4) + 0x1f);
      if ((int)uVar14 < (int)fStack_1b4) {
LAB_140892ed3:
        fStack_1b4 = (float)uVar14;
      }
    }
    local_150 = (ulonglong)(uint)fStack_1b4;
    local_res20 = plVar21;
    local_178 = plVar21;
    puStack_168 = puStack_1c0;
    local_128 = puStack_1c0;
    local_118 = uStack_158;
    uStack_160 = uStack_120;
    fStack_15c = fStack_11c;
    local_138 = plVar21;
    while (((fStack_11c != (float)(int)local_150 || (local_128 != (uint *)(lVar7 + 0x48))) ||
           (local_138 != plVar21))) {
      fVar39 = (float)DAT_14652d640;
      if ((int)fStack_11c < (int)local_128[6]) {
        fVar39 = fStack_11c;
      }
      lVar20 = (longlong)(int)fVar39;
      FUN_14161f6d0(&local_178,*local_180 + lVar20 * 0x10);
      if ((((float)local_178 != DAT_1464aa6c0) || (local_178._4_4_ != DAT_1464aa6c4)) ||
         ((fStack_170 != DAT_1464aa6c8 || (fStack_16c != DAT_1464aa6cc)))) {
        uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
      }
      FUN_14161f6d0(&local_100,*local_180 + lVar20 * 0x10);
      if ((((float)local_100 != DAT_1464aa6c0) || (local_100._4_4_ != DAT_1464aa6c4)) ||
         ((local_f8 != DAT_1464aa6c8 || (local_f4 != DAT_1464aa6cc)))) {
        uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
      }
      lVar18 = (longlong)*(int *)(*plVar21 + lVar20 * 0x18);
      puVar28 = (undefined8 *)(lVar20 * 0x78 + DAT_146860710);
      lVar17 = *local_140;
      *puVar28 = *(undefined8 *)(lVar17 + lVar18 * 0xc);
      *(undefined4 *)(puVar28 + 1) = *(undefined4 *)(lVar17 + 8 + lVar18 * 0xc);
      lVar17 = *local_148;
      *(undefined8 *)((longlong)puVar28 + 0xc) = *(undefined8 *)(lVar17 + lVar20 * 0xc);
      *(undefined4 *)((longlong)puVar28 + 0x14) = *(undefined4 *)(lVar17 + 8 + lVar20 * 0xc);
      lVar17 = *local_148;
      fVar39 = *(float *)(lVar17 + lVar20 * 0xc);
      fVar42 = *(float *)(lVar17 + 8 + lVar20 * 0xc);
      fVar36 = *(float *)(lVar17 + 4 + lVar20 * 0xc);
      lVar17 = *(longlong *)local_190;
      lVar18 = *local_188;
      fVar35 = *(float *)(lVar18 + lVar20 * 0xc);
      fVar40 = fVar42 * *(float *)(lVar18 + 4 + lVar20 * 0xc) -
               fVar36 * *(float *)(lVar18 + 8 + lVar20 * 0xc);
      fVar41 = fVar39 * *(float *)(lVar18 + 8 + lVar20 * 0xc) - fVar35 * fVar42;
      fVar38 = fVar35 * fVar36 - fVar39 * *(float *)(lVar18 + 4 + lVar20 * 0xc);
      fVar35 = fVar41 * fVar41 + fVar40 * fVar40 + fVar38 * fVar38;
      fVar39 = fVar38;
      fVar42 = fVar40;
      fVar36 = fVar41;
      if ((fVar35 != 1.0) &&
         (fVar39 = DAT_1468b5d98, fVar42 = DAT_1468b5d90, fVar36 = DAT_1468b5d94, 1e-08 <= fVar35))
      {
        auVar37 = rsqrtss(ZEXT416((uint)fVar35),ZEXT416((uint)fVar35));
        fVar36 = auVar37._0_4_;
        fVar36 = fVar36 + fVar36 * (0.5 - fVar35 * 0.5 * fVar36 * fVar36);
        fVar36 = fVar36 + fVar36 * (0.5 - fVar35 * 0.5 * fVar36 * fVar36);
        fVar39 = fVar36 * fVar38;
        fVar42 = fVar36 * fVar40;
        fVar36 = fVar36 * fVar41;
      }
      fVar35 = *(float *)(lVar17 + lVar20 * 4);
      puStack_1c0 = (uint *)CONCAT44(puStack_1c0._4_4_,fVar39 * fVar35);
      puVar28[3] = CONCAT44(fVar36 * fVar35,fVar42 * fVar35);
      *(float *)(puVar28 + 4) = fVar39 * fVar35;
      lVar18 = *local_188;
      *(undefined8 *)((longlong)puVar28 + 0x24) = *(undefined8 *)(lVar18 + lVar20 * 0xc);
      *(undefined4 *)((longlong)puVar28 + 0x2c) = *(undefined4 *)(lVar18 + 8 + lVar20 * 0xc);
      puVar9 = (undefined4 *)
               FLinearColor::ToFColor
                         (&local_178,&local_res20,CONCAT71((int7)((ulonglong)lVar17 >> 8),1));
      *(undefined4 *)(puVar28 + 0xe) = *puVar9;
      puVar9 = (undefined4 *)FLinearColor::ToFColor(&local_100,&local_198,1);
      *(undefined4 *)((longlong)puVar28 + 0x74) = *puVar9;
      if (0 < (int)plVar11[3]) {
        plVar12 = plVar13;
        puVar28 = puVar28 + 6;
        plVar22 = plVar13;
        do {
          uVar23 = (int)plVar22 + 1;
          plVar22 = (longlong *)(ulonglong)uVar23;
          *puVar28 = *(undefined8 *)(*(longlong *)((longlong)plVar12 + plVar11[2]) + lVar20 * 8);
          plVar12 = plVar12 + 2;
          puVar28 = puVar28 + 1;
        } while ((int)uVar23 < (int)plVar11[3]);
      }
      uStack_120 = uStack_120 & ~(uint)fStack_12c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&fStack_130);
    }
    fVar39 = *(float *)(local_1a0 + 0x28);
    puStack_1c0 = (uint *)(local_1a0 + 0x10);
    local_198 = CONCAT44(local_198._4_4_,(int)uVar27);
    local_188 = (longlong *)CONCAT44(local_188._4_4_,(int)uVar16);
    local_1c8._0_4_ = 0.0;
    local_1c8._4_4_ = 1.4013e-45;
    fStack_1b4 = 0.0;
    uStack_1b0 = 0;
    if (fVar39 != 0.0) {
      puVar26 = *(uint **)(local_1a0 + 0x20);
      if (*(uint **)(local_1a0 + 0x20) == (uint *)0x0) {
        puVar26 = puStack_1c0;
      }
      uVar23 = *puVar26;
      plVar11 = plVar13;
      while (uVar23 == 0) {
        iVar4 = (int)plVar13;
        uStack_1b0 = (int)plVar11 + 0x20;
        plVar11 = (longlong *)(ulonglong)uStack_1b0;
        local_1c8._0_4_ = (float)(iVar4 + 1);
        plVar13 = (longlong *)(ulonglong)(uint)(float)local_1c8;
        if ((int)(((int)fVar39 - 1U) + ((int)((int)fVar39 - 1U) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_1408932fe;
        uVar23 = puVar26[(longlong)iVar4 + 1];
      }
      local_1c8._4_4_ = (float)(-uVar23 & uVar23);
      iVar4 = 0x1f;
      if (local_1c8._4_4_ != 0.0) {
        for (; (uint)local_1c8._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (local_1c8._4_4_ == 0.0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      fStack_1b4 = (float)((uStack_1b0 - iVar4) + 0x1f);
      if ((int)fVar39 < (int)fStack_1b4) {
LAB_1408932fe:
        fStack_1b4 = fVar39;
      }
    }
    fVar39 = *(float *)(local_1a0 + 0x28);
    local_190 = (uint *)(local_1a0 + 0x10);
    uStack_120 = 0xffffffff;
    fStack_11c = fStack_1b4;
    uStack_158 = CONCAT44(uStack_1ac,uStack_1b0);
    fVar42 = *(float *)(local_1a0 + 0x28);
    local_178 = (longlong *)local_1a0;
    lVar20 = (longlong)local_178;
    fStack_170 = (float)local_1c8;
    fStack_16c = local_1c8._4_4_;
    local_1b8 = -1 << (SUB41(fVar39,0) & 0x1f);
    local_178._0_4_ = (float)local_1a0;
    local_178._4_4_ = (float)((ulonglong)local_1a0 >> 0x20);
    uVar23 = (uint)fVar39 & 0xffffffe0;
    local_138._0_4_ = (float)local_178;
    local_138._4_4_ = local_178._4_4_;
    fStack_130 = (float)local_1c8;
    fStack_12c = local_1c8._4_4_;
    fStack_1b4 = fVar39;
    if (fVar39 != fVar42) {
      puVar26 = *(uint **)(local_1a0 + 0x20);
      if (*(uint **)(local_1a0 + 0x20) == (uint *)0x0) {
        puVar26 = local_190;
      }
      uVar14 = puVar26[(int)fVar39 >> 5] & local_1b8;
      iVar4 = (int)fVar39 >> 5;
      while (uVar14 == 0) {
        uVar23 = uVar23 + 0x20;
        if ((int)(((int)fVar42 - 1U) + ((int)((int)fVar42 - 1U) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_1408933d1;
        uVar14 = puVar26[(longlong)iVar4 + 1];
        local_1b8 = 0xffffffff;
        iVar4 = iVar4 + 1;
      }
      uVar14 = -uVar14 & uVar14;
      iVar4 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar14 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      fStack_1b4 = (float)((uVar23 - iVar4) + 0x1f);
      if ((int)fVar42 < (int)fStack_1b4) {
LAB_1408933d1:
        fStack_1b4 = fVar42;
      }
    }
    local_1c8._0_4_ = fStack_1b4;
    local_1c8._4_4_ = 0.0;
    local_178 = (longlong *)lVar20;
    puStack_168 = puStack_1c0;
    local_128 = puStack_1c0;
    local_118 = uStack_158;
    uStack_160 = uStack_120;
    fStack_15c = fStack_11c;
    while( true ) {
      plVar13 = local_110;
      uVar16 = 0;
      uVar3 = 0;
      if (((fStack_11c == (float)local_1c8) && (local_128 == local_190)) &&
         (CONCAT44(local_138._4_4_,(undefined4)local_138) == local_1a0)) break;
      fVar39 = DAT_14652d648;
      if ((int)fStack_11c < (int)local_128[6]) {
        fVar39 = fStack_11c;
      }
      lVar7 = (longlong)(int)fVar39;
      local_178 = (longlong *)0x0;
      fStack_170 = 0.0;
      fStack_16c = 0.0;
      plVar11 = (longlong *)(lVar7 * 9);
      lVar20 = *(longlong *)(param_1 + 0x78);
      puStack_168 = (uint *)CONCAT26((short)((ulonglong)puStack_168 >> 0x30),0x10000000000);
      *(undefined4 *)(lVar20 + lVar7 * 0x48) = *(undefined4 *)(local_108 + 0x480);
      iVar4 = (int)local_110[1];
      *(int *)(local_110 + 1) = iVar4 + 1;
      local_148 = plVar11;
      local_d8 = lVar20;
      if (*(int *)((longlong)local_110 + 0xc) < iVar4 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(local_110,iVar4);
      }
      lVar17 = *plVar13;
      puVar9 = (undefined4 *)(lVar17 + (longlong)iVar4 * 0x18);
      *puVar9 = (float)local_178;
      puVar9[1] = local_178._4_4_;
      puVar9[2] = fStack_170;
      puVar9[3] = fStack_16c;
      *(uint **)(lVar17 + 0x10 + (longlong)iVar4 * 0x18) = puStack_168;
      lVar18 = (longlong)(int)plVar13[1];
      lVar17 = *plVar13;
      *(int *)(lVar17 + -0x14 + lVar18 * 0x18) = DAT_146860730;
      *(undefined4 *)(lVar17 + -0x10 + lVar18 * 0x18) =
           *(undefined4 *)(lVar20 + 0x18 + lVar7 * 0x48);
      local_178 = (longlong *)lVar17;
      local_100 = lVar18 * 3;
      uVar5 = UStaticMesh::GetMaterialIndexFromImportedMaterialSlotName
                        (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(*local_f0 + lVar7 * 8));
      *(undefined4 *)(lVar17 + -0x18 + lVar18 * 0x18) = uVar5;
      *(undefined1 *)(lVar17 + -4 + lVar18 * 0x18) = *(undefined1 *)(lVar7 + *local_e8);
      *(undefined1 *)(lVar17 + -3 + lVar18 * 0x18) = *(undefined1 *)(lVar7 + *local_e0);
      iVar4 = *(int *)(lVar20 + 0x18 + lVar7 * 0x48);
      if (iVar4 - *(int *)(lVar20 + 0x44 + lVar7 * 0x48) < 1) {
        *(undefined8 *)(lVar17 + -0xc + lVar18 * 0x18) = 0;
      }
      else {
        if (DAT_146860734 < DAT_146860730 + iVar4 * 3) {
          TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146860728);
        }
        lVar1 = lVar20 + lVar7 * 0x48;
        local_res20 = (longlong *)((ulonglong)local_res20 & 0xffffffff00000000);
        iVar4 = DAT_146270638;
        if (0 < *(int *)(lVar20 + 0x18 + lVar7 * 0x48) - *(int *)(lVar1 + 0x44)) {
          lVar10 = TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
                             (local_d0,lVar1 + 0x10);
          iVar4 = *(int *)(lVar10 + 0x1c);
        }
        uVar23 = 0xffffffff;
        uVar5 = *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar4 * 0xc);
        iVar4 = *(int *)(lVar20 + 0x18 + lVar7 * 0x48);
        local_150 = local_150 & 0xffffffff00000000;
        lVar18 = lVar18 * 3;
        if (0 < iVar4) {
          local_180 = (longlong *)0x0;
          local_1a8 = 1.4013e-45;
          lVar7 = lVar20 + lVar7 * 0x48;
          uVar27 = uVar16;
          uVar23 = 0xffffffff;
          do {
            plVar13 = local_180;
            iVar2 = DAT_146860730;
            lVar17 = 0;
            iVar6 = (int)uVar16;
            if ((iVar6 < 0) || (iVar4 <= iVar6)) {
LAB_14089367d:
              lVar17 = (longlong)DAT_146860730;
              DAT_146860730 = DAT_146860730 + 1;
              if (DAT_146860734 < DAT_146860730) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146860728,iVar2);
              }
              *(undefined4 *)(DAT_146860728 + lVar17 * 4) = uVar5;
              iVar4 = DAT_146860730;
              lVar17 = (longlong)DAT_146860730;
              DAT_146860730 = DAT_146860730 + 1;
              if (DAT_146860734 < DAT_146860730) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146860728,iVar4);
              }
              *(undefined4 *)(DAT_146860728 + lVar17 * 4) = uVar5;
              iVar4 = DAT_146860730;
              lVar17 = (longlong)DAT_146860730;
              DAT_146860730 = DAT_146860730 + 1;
              if (DAT_146860734 < DAT_146860730) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146860728,iVar4);
              }
              uVar27 = (ulonglong)local_res20 & 0xffffffff;
              *(undefined4 *)(DAT_146860728 + lVar17 * 4) = uVar5;
            }
            else {
              lVar18 = *(longlong *)(lVar20 + 0x10 + ((longlong)plVar11 + 4) * 8);
              if (lVar18 == 0) {
                lVar18 = lVar20 + ((longlong)plVar11 + 4) * 8;
              }
              if (iVar6 < 0) {
                iVar6 = iVar6 + 0x1f;
              }
              if ((*(uint *)(lVar18 + (longlong)(iVar6 >> 5) * 4) & (uint)local_1a8) == 0)
              goto LAB_14089367d;
              lVar18 = *(longlong *)(lVar7 + 0x10);
              uVar14 = uVar23;
              do {
                iVar4 = DAT_146860730;
                uVar15 = (uint)uVar27;
                lVar20 = (longlong)DAT_146860730;
                uVar24 = *(uint *)((longlong)plVar13 + lVar17 * 4 + lVar18);
                DAT_146860730 = DAT_146860730 + 1;
                if (DAT_146860734 < DAT_146860730) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146860728,iVar4);
                  uVar15 = (uint)local_res20;
                }
                *(uint *)(DAT_146860728 + lVar20 * 4) = uVar24;
                uVar23 = uVar24;
                if (uVar14 <= uVar24) {
                  uVar23 = uVar14;
                }
                if (uVar24 <= uVar15) {
                  uVar24 = uVar15;
                }
                lVar17 = lVar17 + 1;
                local_res20 = (longlong *)CONCAT44(local_res20._4_4_,uVar24);
                uVar27 = (ulonglong)uVar24;
                plVar11 = local_148;
                lVar20 = local_d8;
                uVar14 = uVar23;
              } while (lVar17 < 3);
            }
            uVar3 = (undefined4)uVar27;
            uVar14 = (int)local_150 + 1;
            uVar16 = (ulonglong)uVar14;
            iVar4 = *(int *)(lVar20 + 0x18 + (longlong)plVar11 * 8);
            local_180 = (longlong *)((longlong)local_180 + 0xc);
            local_1a8 = (float)((int)local_1a8 << 1 | (uint)((int)local_1a8 < 0));
            local_150 = CONCAT44(local_150._4_4_,uVar14);
            lVar18 = local_100;
            lVar17 = (longlong)local_178;
          } while ((int)uVar14 < iVar4);
        }
        *(uint *)(lVar17 + -0xc + lVar18 * 8) = uVar23;
        *(undefined4 *)(lVar17 + -8 + lVar18 * 8) = uVar3;
        iVar4 = *(int *)(lVar20 + 8 + (longlong)plVar11 * 8) -
                *(int *)(lVar20 + 0x18 + (longlong)plVar11 * 8);
        if (0 < iVar4) {
          lVar20 = (longlong)DAT_146860730;
          iVar4 = iVar4 * 3;
          DAT_146860730 = DAT_146860730 + iVar4;
          if (DAT_146860734 < DAT_146860730) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146860728);
          }
          _guard_xfg_dispatch_icall_nop((void *)(DAT_146860728 + lVar20 * 4),0,(longlong)iVar4 << 2)
          ;
        }
      }
      uStack_120 = uStack_120 & ~(uint)fStack_12c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&fStack_130);
    }
    cVar31 = (char)local_188;
    cVar32 = (char)local_198;
  }
  else {
    puStack_1c0 = (uint *)(lVar7 + 0xf0);
    fVar39 = *(float *)(lVar7 + 0x108);
    iVar4 = 2;
    if (*(int *)(param_2 + 0xd88) < 3) {
      iVar4 = *(int *)(param_2 + 0xd88);
    }
    local_1c8._0_4_ = 0.0;
    local_1c8._4_4_ = 1.4013e-45;
    fStack_1b4 = 0.0;
    uStack_1b0 = 0;
    lVar20 = lVar7 + 0xe0;
    if (fVar39 != 0.0) {
      puVar26 = *(uint **)(lVar7 + 0x100);
      if (*(uint **)(lVar7 + 0x100) == (uint *)0x0) {
        puVar26 = puStack_1c0;
      }
      uVar23 = *puVar26;
      plVar11 = plVar13;
      plVar21 = plVar13;
      while (lVar20 = local_1a0, uVar23 == 0) {
        iVar2 = (int)plVar11;
        uStack_1b0 = (int)plVar21 + 0x20;
        plVar21 = (longlong *)(ulonglong)uStack_1b0;
        local_1c8._0_4_ = (float)(iVar2 + 1);
        plVar11 = (longlong *)(ulonglong)(uint)(float)local_1c8;
        if ((int)(((int)fVar39 - 1U) + ((int)((int)fVar39 - 1U) >> 0x1f & 0x1fU)) >> 5 <= iVar2)
        goto LAB_14089262e;
        uVar23 = puVar26[(longlong)iVar2 + 1];
      }
      local_1c8._4_4_ = (float)(-uVar23 & uVar23);
      iVar2 = 0x1f;
      if (local_1c8._4_4_ != 0.0) {
        for (; (uint)local_1c8._4_4_ >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (local_1c8._4_4_ == 0.0) {
        iVar2 = 0x20;
      }
      else {
        iVar2 = 0x1f - iVar2;
      }
      fStack_1b4 = (float)((uStack_1b0 - iVar2) + 0x1f);
      if ((int)fVar39 < (int)fStack_1b4) {
LAB_14089262e:
        fStack_1b4 = fVar39;
      }
    }
    local_1b8 = 0xffffffff;
    local_1a8 = *(float *)(lVar20 + 0x28);
    local_190 = (uint *)(lVar20 + 0x10);
    fVar39 = *(float *)(lVar20 + 0x28);
    uStack_120 = 0xffffffff;
    fStack_11c = fStack_1b4;
    uStack_158 = CONCAT44(uStack_1ac,uStack_1b0);
    fStack_170 = (float)local_1c8;
    fStack_16c = local_1c8._4_4_;
    local_178._0_4_ = (float)lVar20;
    local_178._4_4_ = (float)((ulonglong)lVar20 >> 0x20);
    uVar23 = (uint)local_1a8 & 0xffffffe0;
    local_138._0_4_ = (float)local_178;
    local_138._4_4_ = local_178._4_4_;
    fStack_130 = (float)local_1c8;
    fStack_12c = local_1c8._4_4_;
    lVar7 = lVar20;
    if (local_1a8 != fVar39) {
      puVar26 = *(uint **)(lVar20 + 0x20);
      if (*(uint **)(lVar20 + 0x20) == (uint *)0x0) {
        puVar26 = local_190;
      }
      uVar14 = puVar26[(int)local_1a8 >> 5] & -1 << (SUB41(local_1a8,0) & 0x1f);
      iVar2 = (int)local_1a8 >> 5;
      while (lVar7 = local_1a0, uVar14 == 0) {
        uVar23 = uVar23 + 0x20;
        if ((int)(((int)fVar39 - 1U) + ((int)((int)fVar39 - 1U) >> 0x1f & 0x1fU)) >> 5 <= iVar2)
        goto LAB_1408926fc;
        uVar14 = puVar26[(longlong)iVar2 + 1];
        iVar2 = iVar2 + 1;
      }
      uVar14 = -uVar14 & uVar14;
      iVar2 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (uVar14 == 0) {
        iVar2 = 0x20;
      }
      else {
        iVar2 = 0x1f - iVar2;
      }
      local_1a8 = (float)((uVar23 - iVar2) + 0x1f);
      if ((int)fVar39 < (int)local_1a8) {
LAB_1408926fc:
        local_1a8 = fVar39;
      }
    }
    local_148 = (longlong *)(longlong)iVar4;
    local_188 = (longlong *)0x0;
    plVar11 = plVar13;
    local_178 = (longlong *)lVar20;
    puStack_168 = puStack_1c0;
    local_128 = puStack_1c0;
    local_118 = uStack_158;
    uStack_160 = uStack_120;
    fStack_15c = fStack_11c;
    while( true ) {
      iVar4 = DAT_146860718;
      cVar32 = (char)uVar27;
      cVar31 = (char)uVar16;
      if (((fStack_11c == local_1a8) && (local_128 == local_190)) &&
         (CONCAT44(local_138._4_4_,(undefined4)local_138) == lVar7)) break;
      fVar39 = DAT_14652d648;
      if ((int)fStack_11c < (int)local_128[6]) {
        fVar39 = fStack_11c;
      }
      local_198 = CONCAT44(local_198._4_4_,fVar39);
      local_180 = *(longlong **)(param_2 + 0xf30);
      iVar2 = *(int *)((longlong)(plVar11 + 1) + (longlong)local_180);
      DAT_146860718 = DAT_146860718 + iVar2 * 6;
      if (DAT_14686071c < DAT_146860718) {
        TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                  (&DAT_146860710,iVar4);
      }
      local_res20 = (longlong *)CONCAT44(local_res20._4_4_,DAT_146860730);
      if (DAT_146860734 < iVar2 * 6 + DAT_146860730) {
        TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146860728);
      }
      local_178 = (longlong *)0x0;
      fStack_170 = 0.0;
      fStack_16c = 0.0;
      iVar6 = (int)local_110[1];
      puStack_168 = (uint *)CONCAT26((short)((ulonglong)puStack_168 >> 0x30),0x10000000000);
      *(int *)(local_110 + 1) = iVar6 + 1;
      if (*(int *)((longlong)local_110 + 0xc) < iVar6 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(local_110,iVar6);
      }
      lVar20 = *local_110;
      puVar9 = (undefined4 *)(lVar20 + (longlong)iVar6 * 0x18);
      *puVar9 = (float)local_178;
      puVar9[1] = local_178._4_4_;
      puVar9[2] = fStack_170;
      puVar9[3] = fStack_16c;
      *(uint **)(lVar20 + 0x10 + (longlong)iVar6 * 0x18) = puStack_168;
      lVar7 = (longlong)(int)local_110[1];
      lVar20 = *local_110;
      *(int *)(lVar20 + -0x14 + lVar7 * 0x18) = (int)local_res20;
      *(int *)(lVar20 + -0xc + lVar7 * 0x18) = iVar4;
      lVar17 = (longlong)(int)local_198;
      *(int *)(lVar20 + -8 + lVar7 * 0x18) = iVar2 * 6 + iVar4;
      *(int *)(lVar20 + -0x10 + lVar7 * 0x18) = iVar2 * 2;
      uVar3 = UStaticMesh::GetMaterialIndexFromImportedMaterialSlotName
                        (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(*local_f0 + lVar17 * 8));
      *(undefined4 *)(lVar20 + -0x18 + lVar7 * 0x18) = uVar3;
      *(undefined1 *)(lVar20 + -4 + lVar7 * 0x18) = *(undefined1 *)(lVar17 + *local_e8);
      *(undefined1 *)(lVar20 + -3 + lVar7 * 0x18) = *(undefined1 *)(lVar17 + *local_e0);
      local_150 = local_150 & 0xffffffff00000000;
      if (0 < *(int *)((longlong)(local_188 + 1) + (longlong)local_180)) {
        uVar30 = (ulonglong)iVar4;
        plVar11 = plVar13;
        local_198 = uVar30;
        do {
          piVar19 = (int *)((longlong)(int)plVar11 * 0xe0 +
                           *(longlong *)((longlong)local_188 + (longlong)local_180));
          local_res20 = (longlong *)((ulonglong)local_res20 & 0xffffffff00000000);
          plVar11 = plVar13;
          do {
            local_140 = (longlong *)(local_198 * 0x78);
            plVar21 = plVar13;
            do {
              iVar4 = (int)plVar21;
              cVar31 = '\0';
              if ((int)plVar11 == 0) {
                if (iVar4 != 0) {
                  cVar31 = (iVar4 == 1) + '\x01';
                }
              }
              else if (iVar4 != 0) {
                cVar31 = (iVar4 == 1) + '\x02';
              }
              if (cVar31 == '\x01') {
                piVar25 = piVar19 + 0xe;
              }
              else if (cVar31 == '\x02') {
                piVar25 = piVar19 + 0x1c;
              }
              else {
                piVar25 = piVar19;
                if (cVar31 == '\x03') {
                  piVar25 = piVar19 + 0x2a;
                }
              }
              puVar28 = (undefined8 *)(DAT_146860710 + (longlong)local_140);
              uVar3 = *(undefined4 *)(*(longlong *)(param_2 + 0xf20) + 8 + (longlong)*piVar25 * 0xc)
              ;
              *puVar28 = *(undefined8 *)(*(longlong *)(param_2 + 0xf20) + (longlong)*piVar25 * 0xc);
              *(undefined4 *)(puVar28 + 1) = uVar3;
              *(undefined8 *)((longlong)puVar28 + 0xc) = *(undefined8 *)(piVar25 + 10);
              *(int *)((longlong)puVar28 + 0x14) = piVar25[0xc];
              fVar39 = (float)piVar25[0xd];
              fVar42 = ((float)piVar25[7] * (float)piVar25[0xb] -
                       (float)piVar25[10] * (float)piVar25[8]) * fVar39;
              puVar28[3] = CONCAT44(((float)piVar25[10] * (float)piVar25[9] -
                                    (float)piVar25[7] * (float)piVar25[0xc]) * fVar39,
                                    ((float)piVar25[8] * (float)piVar25[0xc] -
                                    (float)piVar25[9] * (float)piVar25[0xb]) * fVar39);
              puStack_1c0 = (uint *)CONCAT44(puStack_1c0._4_4_,fVar42);
              *(float *)(puVar28 + 4) = fVar42;
              *(undefined8 *)((longlong)puVar28 + 0x24) = *(undefined8 *)(piVar25 + 7);
              *(int *)((longlong)puVar28 + 0x2c) = piVar25[9];
              if (0 < (longlong)local_148) {
                puVar8 = puVar28 + 6;
                plVar11 = local_148;
                do {
                  *puVar8 = *(undefined8 *)
                             ((longlong)piVar25 + (-0x2c - (longlong)puVar28) + (longlong)puVar8);
                  puVar8 = puVar8 + 1;
                  plVar11 = (longlong *)((longlong)plVar11 + -1);
                } while (plVar11 != (longlong *)0x0);
              }
              iVar2 = piVar25[5];
              iVar29 = (int)uVar30;
              *(int *)(puVar28 + 0xe) = iVar2;
              bVar34 = iVar2 != DAT_1464aa730;
              iVar2 = piVar25[6];
              *(int *)((longlong)puVar28 + 0x74) = iVar2;
              iVar6 = DAT_146860730;
              uVar16 = uVar16 & 0xff;
              if (bVar34) {
                uVar16 = 1;
              }
              uVar27 = uVar27 & 0xff;
              if (iVar2 != DAT_1464aa730) {
                uVar27 = 1;
              }
              local_140 = local_140 + 0xf;
              lVar20 = (longlong)DAT_146860730;
              local_198 = local_198 + 1;
              DAT_146860730 = DAT_146860730 + 1;
              if (DAT_146860734 < DAT_146860730) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146860728,iVar6);
              }
              uVar30 = (ulonglong)(iVar29 + 1);
              plVar21 = (longlong *)(ulonglong)(iVar4 + 1U);
              *(int *)(DAT_146860728 + lVar20 * 4) = iVar29;
              plVar11 = (longlong *)((ulonglong)local_res20 & 0xffffffff);
            } while ((int)(iVar4 + 1U) < 3);
            uVar23 = (int)local_res20 + 1;
            plVar11 = (longlong *)(ulonglong)uVar23;
            local_res20 = (longlong *)CONCAT44(local_res20._4_4_,uVar23);
          } while ((int)uVar23 < 2);
          uVar23 = (int)local_150 + 1;
          plVar11 = (longlong *)(ulonglong)uVar23;
          local_150 = CONCAT44(local_150._4_4_,uVar23);
        } while ((int)uVar23 < *(int *)((longlong)(local_188 + 1) + (longlong)local_180));
      }
      plVar11 = local_188 + 2;
      uStack_120 = uStack_120 & ~(uint)fStack_12c;
      local_188 = plVar11;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&fStack_130);
      lVar7 = local_1a0;
    }
  }
  lVar17 = local_108;
  cVar33 = '\0';
  lVar7 = *local_110;
  lVar20 = lVar7 + (longlong)(int)local_110[1] * 0x18;
  for (; lVar7 != lVar20; lVar7 = lVar7 + 0x18) {
    if (0xffff < *(uint *)(lVar7 + 0x10)) {
      cVar33 = '\x01';
    }
  }
  cVar33 = cVar33 + '\x01';
  FUN_14270e210(local_108 + 0xe8,&DAT_146860710);
  FUN_14272da00(lVar17,&DAT_146860710,*(undefined4 *)(param_2 + 0xd88));
  iVar4 = *(int *)(lVar17 + 0x1f8);
  lVar20 = lVar17 + 0x140;
  if (iVar4 < 2) {
    *(undefined4 *)(lVar17 + 0x1f8) = 2;
    iVar2 = 2 - iVar4;
    if (*(int *)(lVar17 + 0x1fc) < 2) {
      FUN_14089e280(lVar20,iVar4);
    }
    lVar18 = *(longlong *)(lVar17 + 0x1f0);
    if (*(longlong *)(lVar17 + 0x1f0) == 0) {
      lVar18 = lVar20;
    }
    lVar18 = lVar18 + (longlong)iVar4 * 0x58;
    lVar7 = local_108;
    for (; local_108 = lVar7, iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_14271d780(lVar18);
      lVar18 = lVar18 + 0x58;
      lVar7 = local_108;
    }
  }
  else {
    lVar7 = lVar17;
    if (2 < iVar4) {
      FUN_14089c0b0(lVar20,2,iVar4 + -2,1);
    }
  }
  lVar18 = *(longlong *)(lVar17 + 0x1f0);
  if (cVar31 == '\0') {
    if (lVar18 == 0) {
      lVar18 = lVar20;
    }
    FColorVertexBuffer::InitFromColorArray(lVar18,&DAT_1464aa730,DAT_146860718,0);
  }
  else {
    if (lVar18 == 0) {
      lVar18 = lVar20;
    }
    FUN_14272d810(lVar18,&DAT_146860710,0);
  }
  lVar17 = *(longlong *)(lVar17 + 0x1f0);
  if (cVar32 == '\0') {
    if (lVar17 == 0) {
      lVar17 = lVar20;
    }
    FColorVertexBuffer::InitFromColorArray(lVar17 + 0x58,&DAT_1464aa730,DAT_146860718,0);
  }
  else {
    if (lVar17 == 0) {
      lVar17 = lVar20;
    }
    FUN_14272d810(lVar17 + 0x58,&DAT_146860710,1);
  }
  FUN_14273ca40(lVar7 + 0x208,&DAT_146860728,cVar33);
  local_1c8 = 0;
  puStack_1c0 = (uint *)0x0;
  FUN_14273ca40(lVar7 + 0x270,&local_1c8,cVar33);
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  local_1c8 = 0;
  puStack_1c0 = (uint *)0x0;
  FUN_14273ca40(lVar7 + 0x2d8,&local_1c8,cVar33);
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  local_1c8 = 0;
  puStack_1c0 = (uint *)0x0;
  FUN_14273ca40(lVar7 + 0x340,&local_1c8,cVar33);
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  local_1c8 = 0;
  puStack_1c0 = (uint *)0x0;
  FUN_14273ca40(lVar7 + 0x3a8,&local_1c8,cVar33);
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  local_1c8 = 0;
  puStack_1c0 = (uint *)0x0;
  FUN_14273ca40(lVar7 + 0x410,&local_1c8,cVar33);
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  *(uint *)(lVar7 + 0x494) = *(uint *)(lVar7 + 0x494) & 0xfffffff0;
  *(undefined4 *)(lVar7 + 0x4e0) = 0;
  return;
}



// FUNCTION 140893b80 OnRebuildRenderMeshFinish body=83 status=ok
// SIG undefined OnRebuildRenderMeshFinish(void)

void UEditableMeshAdapter::OnRebuildRenderMeshFinish(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x16,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x16,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140893be0 FUN_140893be0 body=215 status=ok
// SIG undefined FUN_140893be0(void)

void FUN_140893be0(longlong param_1,undefined8 param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  if (param_4 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x278))();
  }
  FUN_1408a6e80(param_1,param_2,param_3);
  if (param_3 != '\0') {
    FUN_1408a7560(param_1);
  }
  if (param_4 == '\0') {
    local_10 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0xb0) != &local_18) {
      *(undefined8 *)(param_1 + 0xb0) = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb8,&local_10);
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
  }
  return;
}



// FUNCTION 140893cc0 OnRebuildRenderMeshStart body=83 status=ok
// SIG undefined OnRebuildRenderMeshStart(void)

void UEditableMeshAdapter::OnRebuildRenderMeshStart(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x14,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x14,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140893d20 FUN_140893d20 body=305 status=ok
// SIG undefined FUN_140893d20(void)

void FUN_140893d20(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  plVar2 = (longlong *)(param_1 + 0xb0);
  if (*plVar2 == 0) {
    lVar4 = operator_new(0x18);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_1428169c0(lVar4,*(undefined8 *)(param_1 + 0x28),param_3,1);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_DestroyObject_144116318;
      plVar5[2] = lVar4;
    }
    local_18 = lVar4;
    local_10 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_18,lVar4,lVar4);
    if (plVar2 != &local_18) {
      *plVar2 = lVar4;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb8,&local_10);
      plVar5 = local_10;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x280))();
    FRenderCommandFence::Wait(*(longlong *)(param_1 + 0x28) + 0xb8,0);
  }
  return;
}



// FUNCTION 140893e60 OnReindexElements body=83 status=ok
// SIG undefined OnReindexElements(void)

void UEditableMeshAdapter::OnReindexElements(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x19,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x19,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140893ec0 FUN_140893ec0 body=1911 status=ok
// SIG undefined FUN_140893ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140893ec0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  uint *puVar20;
  int *piVar21;
  undefined8 *puVar22;
  uint *puVar23;
  undefined1 auStack_168 [32];
  int local_148;
  uint uStack_144;
  uint *puStack_140;
  uint local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  int iStack_120;
  uint uStack_11c;
  uint *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  int iStack_d0;
  uint uStack_cc;
  uint *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0 [2];
  longlong *local_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong local_70;
  undefined1 local_68 [16];
  longlong local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  plVar18 = (longlong *)(param_1 + 0x40);
  local_100 = param_3;
  local_f0 = param_2;
  local_e0 = plVar18;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146860800) && (_Init_thread_header(&DAT_146860800), DAT_146860800 == -1))
  {
    DAT_1468607c8 = 0;
    _DAT_1468607d0 = 0;
    DAT_1468607e8 = 0;
    _DAT_1468607f0 = 0;
    _DAT_1468607f8 = 0xffffffff;
    _DAT_1468607fc = 0;
    atexit(`TMeshElementArray<FRenderingPolygon,FPolygonID>::Remap'::`2'::
           _dynamic_atexit_destructor_for__NewContainer__);
    _Init_thread_footer(&DAT_146860800);
  }
  TSparseArray<FRenderingPolygon,FDefaultSparseArrayAllocator>::Empty
            (&DAT_1468607c8,*(undefined4 *)(param_3 + 0xb0));
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_128,plVar18)
  ;
  if ((int)uStack_110._4_4_ < *(int *)((longlong)puStack_118 + 0x18)) {
    do {
      lVar17 = (longlong)(int)uStack_110._4_4_;
      puStack_140 = (uint *)0x0;
      local_138 = 0;
      uStack_134 = 0;
      iVar13 = *(int *)(*(longlong *)(param_3 + 0xa8) + lVar17 * 8);
      lVar11 = FUN_14088e510(&DAT_1468607c8,local_b0,iVar13);
      puVar7 = *(undefined4 **)(lVar11 + 8);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
        *(undefined8 *)(puVar7 + 2) = 0;
        *(undefined8 *)(puVar7 + 4) = 0;
      }
      puVar7 = (undefined4 *)(*local_128 + lVar17 * 0x18);
      puVar3 = (undefined4 *)(DAT_1468607c8 + (longlong)iVar13 * 0x18);
      plVar2 = (longlong *)(puVar3 + 2);
      *puVar3 = *puVar7;
      plVar1 = (longlong *)(puVar7 + 2);
      if (plVar2 != plVar1) {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        *plVar2 = *plVar1;
        *plVar1 = 0;
        puVar3[4] = puVar7[4];
        puVar3[5] = puVar7[5];
        *(undefined8 *)(puVar7 + 4) = 0;
      }
      uStack_110 = CONCAT44(uStack_110._4_4_,(uint)uStack_110 & ~uStack_11c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_120);
    } while ((int)uStack_110._4_4_ < *(int *)((longlong)puStack_118 + 0x18));
  }
  TSparseArray<FRenderingPolygon,FDefaultSparseArrayAllocator>::operator=(plVar18,&DAT_1468607c8);
  plVar18 = (longlong *)(param_1 + 0x78);
  local_e8 = plVar18;
  FUN_14089a4b0(plVar18,param_3 + 0xe0);
  uVar10 = *(uint *)(param_1 + 0xa0);
  puVar23 = (uint *)(param_1 + 0x88);
  uStack_144 = 1;
  local_148 = 0;
  uStack_134 = 0;
  iStack_130 = 0;
  if (uVar10 != 0) {
    puVar20 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar20 = puVar23;
    }
    uVar6 = *puVar20;
    iStack_130 = 0;
    local_148 = 0;
    while (uVar6 == 0) {
      lVar11 = (longlong)local_148;
      iStack_130 = iStack_130 + 0x20;
      iVar13 = local_148 + 1;
      bVar8 = (int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
      local_148 = iVar13;
      if (bVar8) goto LAB_1408940f4;
      uVar6 = puVar20[lVar11 + 1];
    }
    uStack_144 = -uVar6 & uVar6;
    iVar13 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_134 = (iStack_130 - iVar13) + 0x1f;
    if ((int)uVar10 < (int)uStack_134) {
LAB_1408940f4:
      uStack_134 = uVar10;
    }
  }
  uVar6 = *(uint *)(param_1 + 0xa0);
  uStack_110 = CONCAT44(uStack_134,0xffffffff);
  uStack_108 = CONCAT44(uStack_12c,iStack_130);
  iStack_120 = local_148;
  uStack_11c = uStack_144;
  local_138 = -1 << ((byte)uVar6 & 0x1f);
  uVar19 = uVar6 & 0xffffffe0;
  iStack_d0 = local_148;
  uStack_cc = uStack_144;
  uStack_134 = uVar6;
  if (uVar6 != uVar10) {
    puVar20 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar20 = puVar23;
    }
    uVar15 = puVar20[(int)uVar6 >> 5] & local_138;
    iVar13 = (int)uVar6 >> 5;
    while (uVar15 == 0) {
      uVar19 = uVar19 + 0x20;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_1408941d7;
      uVar15 = puVar20[(longlong)iVar13 + 1];
      local_138 = 0xffffffff;
      iVar13 = iVar13 + 1;
    }
    uVar15 = -uVar15 & uVar15;
    iVar13 = 0x1f;
    if (uVar15 != 0) {
      for (; uVar15 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar15 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_134 = (uVar19 - iVar13) + 0x1f;
    if ((int)uVar10 < (int)uStack_134) {
LAB_1408941d7:
      uStack_134 = uVar10;
    }
  }
  local_b0[0] = (ulonglong)uStack_134;
  puStack_140 = puVar23;
  local_128 = plVar18;
  puStack_118 = puVar23;
  local_c8 = puVar23;
  uStack_c0 = uStack_110;
  local_b8 = uStack_108;
  local_d8 = plVar18;
  do {
    if ((uStack_c0._4_4_ == (int)local_b0[0]) && (local_c8 == puVar23)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if ((bVar8) && (local_d8 == plVar18)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) {
      return;
    }
    iVar13 = DAT_14652d648;
    if (uStack_c0._4_4_ < (int)local_c8[6]) {
      iVar13 = uStack_c0._4_4_;
    }
    local_78 = 0;
    local_70 = 0;
    local_58 = 0;
    local_50 = 0;
    lVar11 = *plVar18 + (longlong)iVar13 * 0x48;
    local_48 = 0xffffffff;
    plVar2 = (longlong *)(lVar11 + 0x10);
    local_44 = 0;
    local_f8 = lVar11;
    FUN_1408768d0(plVar2,&local_78);
    lVar17 = local_100;
    uVar10 = *(uint *)(lVar11 + 0x38);
    puVar23 = (uint *)(lVar11 + 0x20);
    uStack_144 = 1;
    local_148 = 0;
    uStack_134 = 0;
    iStack_130 = 0;
    if (uVar10 != 0) {
      puVar20 = *(uint **)(lVar11 + 0x30);
      if (*(uint **)(lVar11 + 0x30) == (uint *)0x0) {
        puVar20 = puVar23;
      }
      uVar6 = *puVar20;
      while (uVar6 == 0) {
        lVar16 = (longlong)local_148;
        iStack_130 = iStack_130 + 0x20;
        iVar14 = local_148 + 1;
        bVar8 = (int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
        local_148 = iVar14;
        if (bVar8) goto LAB_140894324;
        uVar6 = puVar20[lVar16 + 1];
      }
      uStack_144 = -uVar6 & uVar6;
      iVar14 = 0x1f;
      if (uStack_144 != 0) {
        for (; uStack_144 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      if (uStack_144 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - iVar14;
      }
      uStack_134 = (iStack_130 - iVar14) + 0x1f;
      if ((int)uVar10 < (int)uStack_134) {
LAB_140894324:
        uStack_134 = uVar10;
      }
    }
    uVar6 = *(uint *)(lVar11 + 0x38);
    uStack_110 = CONCAT44(uStack_134,0xffffffff);
    uStack_108 = CONCAT44(uStack_12c,iStack_130);
    uStack_98 = CONCAT44(uStack_144,local_148);
    local_138 = -1 << ((byte)uVar6 & 0x1f);
    uVar19 = uVar6 & 0xffffffe0;
    iStack_120 = local_148;
    uStack_11c = uStack_144;
    puStack_140 = puVar23;
    uStack_134 = uVar6;
    local_128 = plVar2;
    puStack_118 = puVar23;
    local_a0 = plVar2;
    puStack_90 = puVar23;
    uStack_88 = uStack_110;
    uStack_80 = uStack_108;
    if (uVar6 != uVar10) {
      puVar20 = *(uint **)(lVar11 + 0x30);
      if (*(uint **)(lVar11 + 0x30) == (uint *)0x0) {
        puVar20 = puVar23;
      }
      uVar15 = puVar20[(int)uVar6 >> 5] & local_138;
      iVar14 = (int)uVar6 >> 5;
      while (uVar15 == 0) {
        uVar19 = uVar19 + 0x20;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
        goto LAB_14089440c;
        uVar15 = puVar20[(longlong)iVar14 + 1];
        local_138 = 0xffffffff;
        iVar14 = iVar14 + 1;
      }
      uVar15 = -uVar15 & uVar15;
      iVar14 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      if (uVar15 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - iVar14;
      }
      uStack_134 = (uVar19 - iVar14) + 0x1f;
      uVar6 = uStack_134;
      if ((int)uVar10 < (int)uStack_134) {
LAB_14089440c:
        uStack_134 = uVar10;
        uVar6 = uVar10;
      }
    }
    while( true ) {
      plVar18 = local_e8;
      if ((uStack_110._4_4_ == uVar6) && (puStack_118 == puVar23)) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
      if ((bVar8) && (local_128 == plVar2)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (!bVar8) break;
      uVar10 = DAT_146270638;
      if ((int)uStack_110._4_4_ < (int)puStack_118[6]) {
        uVar10 = uStack_110._4_4_;
      }
      puVar7 = (undefined4 *)(*plVar2 + (longlong)(int)uVar10 * 0xc);
      *puVar7 = *(undefined4 *)
                 (*(longlong *)(lVar17 + 0x38) +
                 (longlong)*(int *)(*plVar2 + (longlong)(int)uVar10 * 0xc) * 8);
      puVar7[1] = *(undefined4 *)(*(longlong *)(lVar17 + 0x38) + (longlong)(int)puVar7[1] * 8);
      puVar7[2] = *(undefined4 *)(*(longlong *)(lVar17 + 0x38) + (longlong)(int)puVar7[2] * 8);
      uStack_110 = CONCAT44(uStack_110._4_4_,(uint)uStack_110 & ~uStack_11c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_120);
    }
    *(undefined4 *)(local_f8 + 8) = *(undefined4 *)(local_f8 + 0x18);
    puVar22 = (undefined8 *)
              ((longlong)iVar13 * 0x10 + *(longlong *)(*(longlong *)(local_f0 + 0x28) + 0xe0));
    piVar21 = (int *)*puVar22;
    piVar4 = piVar21 + *(int *)(puVar22 + 1);
    for (; piVar21 != piVar4; piVar21 = piVar21 + 1) {
      lVar17 = (longlong)*piVar21;
      lVar11 = *local_e0;
      *(int *)(lVar11 + lVar17 * 0x18) = iVar13;
      piVar12 = *(int **)(lVar11 + 8 + lVar17 * 0x18);
      piVar5 = piVar12 + *(int *)(lVar11 + lVar17 * 0x18 + 0x10);
      for (; piVar12 != piVar5; piVar12 = piVar12 + 1) {
        *piVar12 = *(int *)(local_78 + (longlong)*piVar12 * 8);
      }
    }
    uVar9 = local_70 >> 0x20;
    local_70 = local_70 & 0xffffffff00000000;
    if ((int)uVar9 != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_78,0);
    }
    local_48 = 0xffffffff;
    local_44 = 0;
    uVar9 = local_50 >> 0x20;
    local_50 = local_50 & 0xffffffff00000000;
    if ((int)uVar9 != 0) {
      local_50 = 0;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(local_68,0);
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
    uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_cc);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d0);
    puVar23 = (uint *)(plVar18 + 2);
  } while( true );
}



// FUNCTION 140894640 OnRetriangulatePolygons body=83 status=ok
// SIG undefined OnRetriangulatePolygons(void)

void UEditableMeshAdapter::OnRetriangulatePolygons(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x35,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x35,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 1408946a0 FUN_1408946a0 body=1618 status=ok
// SIG undefined FUN_1408946a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408946a0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int *piVar23;
  longlong lVar24;
  int local_res18;
  int local_res20;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  int *local_60;
  uint *local_58;
  int *local_50;
  
  piVar12 = (int *)*param_3;
  lVar7 = *(longlong *)(param_2 + 0x28);
  local_50 = piVar12 + *(int *)(param_3 + 1);
  if (piVar12 != local_50) {
    local_78 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      lVar20 = (longlong)*piVar12;
      lVar24 = lVar20 * 0x38 + *(longlong *)(lVar7 + 0xa8);
      lVar21 = *(longlong *)(param_1 + 0x40) + lVar20 * 0x18;
      iVar17 = *(int *)(lVar24 + 0x28);
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x78) +
                       (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + lVar20 * 0x18) * 0x48);
      if (*(int *)(lVar21 + 0x10) == iVar17) {
        iVar22 = 0;
        if (0 < iVar17) {
          piVar23 = *(int **)(lVar21 + 8);
          lVar20 = *(longlong *)(puVar2 + 4);
          piVar13 = *(int **)(lVar24 + 0x20);
          do {
            lVar10 = (longlong)*piVar23;
            if (((*(int *)(lVar20 + lVar10 * 0xc) != *piVar13) ||
                (*(int *)(lVar20 + 4 + lVar10 * 0xc) != piVar13[1])) ||
               (*(int *)(lVar20 + 8 + lVar10 * 0xc) != piVar13[2])) goto LAB_1408947b5;
            iVar22 = iVar22 + 1;
            piVar23 = piVar23 + 1;
            piVar13 = piVar13 + 3;
          } while (iVar22 < iVar17);
        }
      }
      else {
LAB_1408947b5:
        uVar3 = *puVar2;
        lVar10 = *(longlong *)
                  (**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x38) +
                  (longlong)*(int *)(param_1 + 0x38) * 8);
        lVar20 = *(longlong *)(lVar10 + 0x478) + (longlong)(int)uVar3 * 0x18;
        local_70 = lVar10;
        local_68 = lVar20;
        local_58 = puVar2;
        FUN_14087c670(param_1,param_2);
        iVar17 = *(int *)(lVar24 + 0x28);
        lVar15 = (longlong)iVar17;
        puVar1 = puVar2 + 4;
        iVar22 = iVar17 - puVar2[0x11];
        if (iVar22 < 1) {
          iVar22 = 0;
        }
        iVar16 = puVar2[6] + iVar22;
        if (0 < iVar22) {
          FUN_14089d230(puVar1,iVar16);
        }
        local_res18 = *(int *)(lVar20 + 0xc);
        local_res20 = *(int *)(lVar20 + 0x10);
        local_60 = (int *)(*local_78 + 0x38);
        if ((*local_60 < DAT_146860768) &&
           (_Init_thread_header(&DAT_146860768), DAT_146860768 == -1)) {
          atexit((_func_5014 *)&LAB_143e43730);
          _Init_thread_footer(&DAT_146860768);
        }
        iVar18 = DAT_146860760;
        if (DAT_146860760 < iVar17) {
          DAT_146860760 = iVar17;
          if (DAT_146860764 < iVar17) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146860758,iVar18);
          }
        }
        else if ((iVar17 < DAT_146860760) && (iVar18 = DAT_146860760 - iVar17, iVar18 != 0)) {
          iVar9 = (DAT_146860760 - iVar18) - iVar17;
          if (iVar9 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(DAT_146860758 + lVar15 * 4),
                       (void *)(DAT_146860758 + (longlong)(iVar18 + iVar17) * 4),
                       (longlong)iVar9 << 2);
          }
          DAT_146860760 = DAT_146860760 - iVar18;
        }
        lVar19 = 0;
        lVar14 = lVar19;
        if (0 < iVar17) {
          do {
            local_88 = DAT_14652d640;
            local_84 = DAT_14652d640;
            local_80 = DAT_14652d640;
            iVar9 = FUN_140873760(puVar1,&local_88);
            *(int *)(DAT_146860758 + lVar19 * 4) = iVar9;
            piVar23 = (int *)(*(longlong *)puVar1 + (longlong)iVar9 * 0xc);
            iVar17 = *(int *)(lVar14 + *(longlong *)(lVar24 + 0x20));
            *piVar23 = iVar17;
            iVar18 = iVar17;
            if (local_res18 <= iVar17) {
              iVar18 = local_res18;
            }
            if (iVar17 <= local_res20) {
              iVar17 = local_res20;
            }
            iVar4 = *(int *)(*(longlong *)(lVar24 + 0x20) + 4 + lVar14);
            piVar23[1] = iVar4;
            iVar8 = iVar4;
            if (iVar18 <= iVar4) {
              iVar8 = iVar18;
            }
            if (iVar4 <= iVar17) {
              iVar4 = iVar17;
            }
            local_res20 = *(int *)(*(longlong *)(lVar24 + 0x20) + 8 + lVar14);
            piVar23[2] = local_res20;
            iVar17 = *(int *)(lVar21 + 0x10);
            local_res18 = local_res20;
            if (iVar8 <= local_res20) {
              local_res18 = iVar8;
            }
            if (local_res20 <= iVar4) {
              local_res20 = iVar4;
            }
            *(int *)(lVar21 + 0x10) = iVar17 + 1;
            if (*(int *)(lVar21 + 0x14) < iVar17 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar21 + 8,iVar17);
            }
            lVar19 = lVar19 + 1;
            *(int *)(*(longlong *)(lVar21 + 8) + (longlong)iVar17 * 4) = iVar9;
            lVar10 = local_70;
            lVar20 = local_68;
            lVar14 = lVar14 + 0xc;
          } while (lVar19 < lVar15);
        }
        if ((*(int *)(param_2 + 0xe88) < 1) &&
           (lVar21 = *(longlong *)
                      (**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x38) +
                      (longlong)*(int *)(param_1 + 0x38) * 8), *(char *)(lVar21 + 0x268) == '\0')) {
          lVar14 = *(longlong *)(lVar24 + 0x20);
          lVar24 = lVar14 + (longlong)*(int *)(lVar24 + 0x28) * 0xc;
          for (; lVar19 = 0, lVar14 != lVar24; lVar14 = lVar14 + 0xc) {
            do {
              if (0xffff < *(int *)(lVar14 + lVar19 * 4)) {
                if ((*local_60 < DAT_1468606a8) &&
                   (_Init_thread_header(&DAT_1468606a8), DAT_1468606a8 == -1)) {
                  DAT_146860698 = 0;
                  _DAT_1468606a0 = 0;
                  atexit((_func_5014 *)&LAB_143e423b0);
                  _Init_thread_footer(&DAT_1468606a8);
                }
                FUN_14272bf80(lVar21 + 0x208,&DAT_146860698);
                FUN_14273ca40(lVar21 + 0x208,&DAT_146860698);
                goto LAB_140894a9f;
              }
              lVar19 = lVar19 + 1;
            } while (lVar19 < 3);
          }
        }
LAB_140894a9f:
        uVar5 = local_58[2];
        if ((int)uVar5 < iVar16) {
          iVar17 = (iVar16 - uVar5) + 0x20;
          local_58[2] = uVar5 + iVar17;
          if (0 < *(int *)(param_2 + 0xe88)) goto LAB_140894c1f;
          iVar17 = iVar17 * 3;
          FUN_142730770(lVar10 + 0x208,uVar5 * 3 + *(int *)(lVar20 + 4),0,iVar17);
          uVar5 = *(uint *)(lVar10 + 0x480);
          while (uVar3 = uVar3 + 1, uVar3 < uVar5) {
            piVar23 = (int *)(*(longlong *)(lVar10 + 0x478) + 4 + (longlong)(int)uVar3 * 0x18);
            *piVar23 = *piVar23 + iVar17;
          }
        }
        if (*(int *)(param_2 + 0xe88) < 1) {
          lVar21 = 0;
          if (0 < lVar15) {
            do {
              iVar17 = *(int *)(DAT_146860758 + lVar21 * 4);
              iVar16 = iVar17 * 3;
              lVar24 = (longlong)iVar17 * 0xc;
              uVar6 = *(undefined4 *)(lVar24 + *(longlong *)puVar1);
              uVar11 = (ulonglong)(uint)(*(int *)(lVar20 + 4) + iVar16);
              if (*(char *)(lVar10 + 0x268) == '\0') {
                *(short *)(*(longlong *)(lVar10 + 0x250) + uVar11 * 2) = (short)uVar6;
              }
              else {
                *(undefined4 *)(*(longlong *)(lVar10 + 0x250) + uVar11 * 4) = uVar6;
              }
              uVar6 = *(undefined4 *)(*(longlong *)puVar1 + 4 + lVar24);
              uVar11 = (ulonglong)(uint)(*(int *)(lVar20 + 4) + 1 + iVar16);
              if (*(char *)(lVar10 + 0x268) == '\0') {
                *(short *)(*(longlong *)(lVar10 + 0x250) + uVar11 * 2) = (short)uVar6;
              }
              else {
                *(undefined4 *)(*(longlong *)(lVar10 + 0x250) + uVar11 * 4) = uVar6;
              }
              uVar6 = *(undefined4 *)(*(longlong *)puVar1 + ((longlong)iVar17 * 3 + 2) * 4);
              uVar11 = (ulonglong)(uint)(*(int *)(lVar20 + 4) + 2 + iVar16);
              if (*(char *)(lVar10 + 0x268) == '\0') {
                *(short *)(*(longlong *)(lVar10 + 0x250) + uVar11 * 2) = (short)uVar6;
              }
              else {
                *(undefined4 *)(*(longlong *)(lVar10 + 0x250) + uVar11 * 4) = uVar6;
              }
              lVar21 = lVar21 + 1;
            } while (lVar21 < lVar15);
          }
          if (0 < iVar22) {
            *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + iVar22;
          }
          *(int *)(lVar20 + 0xc) = local_res18;
          *(int *)(lVar20 + 0x10) = local_res20;
        }
      }
LAB_140894c1f:
      piVar12 = piVar12 + 1;
    } while (piVar12 != local_50);
  }
  return;
}



// FUNCTION 140894d00 SendClientAdjustment body=83 status=ok
// SIG undefined SendClientAdjustment(void)

void INetworkPredictionInterface::SendClientAdjustment(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x1e,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x1e,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140894d60 OnRevertInstance body=85 status=ok
// SIG undefined OnRevertInstance(void)

undefined8 UEditableMeshAdapter::OnRevertInstance(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x1f,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x1f,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return 0;
}



// FUNCTION 140894dc0 FUN_140894dc0 body=83 status=ok
// SIG undefined FUN_140894dc0(void)

void FUN_140894dc0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x2c,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x2c,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140894e20 OnSetEdgesVertices body=83 status=ok
// SIG undefined OnSetEdgesVertices(void)

void UEditableMeshAdapter::OnSetEdgesVertices(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x2b,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x2b,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140894e80 OnSetPolygonAttribute body=83 status=ok
// SIG undefined OnSetPolygonAttribute(void)

void UEditableMeshAdapter::OnSetPolygonAttribute(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x30,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x30,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140894ee0 FUN_140894ee0 body=83 status=ok
// SIG undefined FUN_140894ee0(void)

void FUN_140894ee0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x33,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x33,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140894f40 FUN_140894f40 body=756 status=ok
// SIG undefined FUN_140894f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140894f40(longlong param_1,longlong param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  longlong local_98 [2];
  undefined8 local_88;
  longlong local_80;
  longlong lStack_70;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar11 = *(longlong *)(param_2 + 0x28);
  lVar7 = *(longlong *)(param_1 + 0x28);
  lVar10 = (longlong)param_3;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x78) + lVar10 * 0x48);
  lVar6 = *(longlong *)
           (*(longlong *)(**(longlong **)(lVar7 + 0x38) + (longlong)*(int *)(param_1 + 0x38) * 8) +
           0x478) + (longlong)*piVar1 * 0x18;
  if (*(int *)(lVar11 + 0xcd8) != *(int *)(lVar11 + 0xd04)) {
    lVar3 = *(longlong *)(lVar11 + 0xd10);
    if (*(longlong *)(lVar11 + 0xd10) == 0) {
      lVar3 = lVar11 + 0xd08;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)
                              ((int)((ulonglong)DAT_146aedb48 >> 0x20) + (int)DAT_146aedb48) &
                             (longlong)*(int *)(lVar11 + 0xd18) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar8 = (longlong *)((longlong)iVar2 * 0x38 + *(longlong *)(lVar11 + 0xcd0));
        if (*plVar8 == DAT_146aedb48) {
          if (iVar2 != -1) goto LAB_140895021;
          break;
        }
        iVar2 = (int)plVar8[6];
      } while (iVar2 != -1);
    }
  }
  plVar8 = (longlong *)0x0;
LAB_140895021:
  local_80 = *(longlong *)(*(longlong *)plVar8[2] + lVar10 * 8);
  if (*(int *)(lVar11 + 0xcd8) != *(int *)(lVar11 + 0xd04)) {
    lVar3 = *(longlong *)(lVar11 + 0xd10);
    if (*(longlong *)(lVar11 + 0xd10) == 0) {
      lVar3 = lVar11 + 0xd08;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)
                              ((int)((ulonglong)DAT_14685f178 >> 0x20) + (int)DAT_14685f178) &
                             (longlong)*(int *)(lVar11 + 0xd18) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar8 = (longlong *)((longlong)iVar2 * 0x38 + *(longlong *)(lVar11 + 0xcd0));
        if (*plVar8 == DAT_14685f178) {
          if (iVar2 != -1) goto LAB_1408950b2;
          break;
        }
        iVar2 = (int)plVar8[6];
      } while (iVar2 != -1);
    }
  }
  plVar8 = (longlong *)0x0;
LAB_1408950b2:
  local_88 = *(undefined8 *)(*(longlong *)plVar8[2] + lVar10 * 8);
  lVar11 = *(longlong *)(lVar7 + 0x70);
  lVar10 = (longlong)*(int *)(lVar7 + 0x78) * 0x30 + lVar11;
  for (; (lVar11 != lVar10 && (*(longlong *)(lVar11 + 0x10) != local_80)); lVar11 = lVar11 + 0x30) {
  }
  lVar11 = *param_4;
  if (lVar11 == DAT_146aedb48) {
    *(longlong *)(*(longlong *)(lVar7 + 0x70) + 0x10 + (longlong)piVar1[1] * 0x30) = local_80;
  }
  else if (lVar11 == DAT_14685f178) {
    puVar4 = (undefined8 *)FName::ToString(&local_88,local_98);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar4;
    }
    uVar5 = UMaterialInterface::GetPrivateStaticClass();
    local_a8 = 1;
    local_b0 = 0;
    local_b8 = 0;
    lVar6 = FUN_141799c90(uVar5,0,puVar9,0);
    if (local_98[0] != 0) {
      FMemory::Free();
    }
    lStack_70 = local_80;
    if ((lVar6 != 0) && (local_80 == 0)) {
      lStack_70 = *(longlong *)(lVar6 + 0x18);
    }
    lVar7 = (longlong)piVar1[1];
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70);
    plVar8 = (longlong *)(lVar11 + lVar7 * 0x30);
    *plVar8 = lVar6;
    plVar8[1] = lStack_70;
    puVar4 = (undefined8 *)(lVar11 + 0x10 + lVar7 * 0x30);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = (undefined8 *)(lVar11 + 0x20 + lVar7 * 0x30);
    *puVar4 = 0;
    puVar4[1] = (ulonglong)uStack_4c << 0x20;
  }
  else if (lVar11 == DAT_146aedb58) {
    *(undefined1 *)(lVar6 + 0x15) = *(undefined1 *)((longlong)param_4 + 0x4c);
  }
  else if (lVar11 == DAT_146aedb50) {
    *(undefined1 *)(lVar6 + 0x14) = *(undefined1 *)((longlong)param_4 + 0x4c);
  }
  return;
}



// FUNCTION 140895240 FUN_140895240 body=83 status=ok
// SIG undefined FUN_140895240(void)

void FUN_140895240(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x27,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x27,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 1408952a0 FUN_1408952a0 body=549 status=ok
// SIG undefined FUN_1408952a0(void)

void FUN_1408952a0(longlong param_1,longlong param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_58;
  float fStack_54;
  
  lVar2 = *(longlong *)
           (**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x38) +
           (longlong)*(int *)(param_1 + 0x38) * 8);
  if (*param_4 == DAT_146aedad0) {
    lVar1 = param_4[6];
    fVar14 = *(float *)(param_4 + 7);
    if (*(int *)(param_2 + 0xe88) < 1) {
      uVar7 = 0;
      puVar5 = (undefined8 *)((longlong)param_3 * 0x20 + **(longlong **)(param_2 + 0x28));
      uVar4 = (ulonglong)*(int *)(puVar5 + 1);
      piVar6 = (int *)*puVar5;
      uVar8 = uVar4 & 0x3fffffffffffffff;
      if (piVar6 + uVar4 < piVar6) {
        uVar8 = uVar7;
      }
      if (uVar8 != 0) {
        do {
          uVar7 = uVar7 + 1;
          uVar4 = (ulonglong)(uint)(*(int *)(lVar2 + 0x138) * *piVar6);
          piVar6 = piVar6 + 1;
          lVar3 = *(longlong *)(lVar2 + 0x130);
          *(longlong *)(uVar4 + lVar3) = lVar1;
          *(float *)(uVar4 + 8 + lVar3) = fVar14;
        } while (uVar7 != uVar8);
      }
    }
    fVar14 = fVar14 - *(float *)(param_1 + 200);
    fVar9 = *(float *)(param_1 + 0xd8);
    local_58 = (float)lVar1;
    fStack_54 = (float)((ulonglong)lVar1 >> 0x20);
    fVar10 = *(float *)(param_1 + 0xc0);
    fVar13 = fStack_54 - *(float *)(param_1 + 0xc4);
    fVar12 = local_58 - fVar10;
    fVar11 = fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
    if (fVar9 * fVar9 < fVar11) {
      fVar11 = SQRT(fVar11);
      fVar10 = (fVar11 - fVar9) * 0.5;
      fVar11 = fVar10 / fVar11;
      *(float *)(param_1 + 0xd8) = fVar9 + fVar10;
      fVar10 = fVar11 * fVar12 + *(float *)(param_1 + 0xc0);
      *(float *)(param_1 + 0xc0) = fVar10;
      *(float *)(param_1 + 0xc4) = fVar11 * fVar13 + *(float *)(param_1 + 0xc4);
      *(float *)(param_1 + 200) = fVar11 * fVar14 + *(float *)(param_1 + 200);
    }
    fVar14 = ABS(fStack_54 - *(float *)(param_1 + 0xc4));
    if (fVar14 <= *(float *)(param_1 + 0xd0)) {
      fVar14 = *(float *)(param_1 + 0xd0);
    }
    fVar11 = ABS(local_58 - *(float *)(param_1 + 200));
    fVar9 = ABS(local_58 - fVar10);
    if (ABS(local_58 - fVar10) <= *(float *)(param_1 + 0xcc)) {
      fVar9 = *(float *)(param_1 + 0xcc);
    }
    if (fVar11 <= *(float *)(param_1 + 0xd4)) {
      fVar11 = *(float *)(param_1 + 0xd4);
    }
    *(float *)(param_1 + 0xd0) = fVar14;
    *(float *)(param_1 + 0xcc) = fVar9;
    *(float *)(param_1 + 0xd4) = fVar11;
  }
  return;
}



// FUNCTION 1408954d0 OnSetVertexInstanceAttribute body=83 status=ok
// SIG undefined OnSetVertexInstanceAttribute(void)

void UEditableMeshAdapter::OnSetVertexInstanceAttribute(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x28,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x28,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140895530 FUN_140895530 body=2448 status=ok
// SIG undefined FUN_140895530(void)

void FUN_140895530(longlong *param_1,longlong param_2,uint param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  uint uVar12;
  int7 iVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  longlong local_res8;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  
  lVar2 = DAT_146aedaf8;
  lVar14 = DAT_146aedaf0;
  local_res8 = *(longlong *)(param_2 + 0x28) + 0x380;
  uVar10 = (ulonglong)param_3;
  lVar1 = *(longlong *)(**(longlong **)(param_1[5] + 0x38) + (longlong)(int)param_1[7] * 8);
  lVar15 = *param_4;
  if (((lVar15 == DAT_146aedae8) || (lVar15 == DAT_146aedaf0)) || (lVar15 == DAT_146aedaf8)) {
    if (*(int *)(param_2 + 0xe88) < 1) {
      FUN_1408606d0(local_res8,&local_118,param_3,DAT_146aedae8,0);
      FUN_1408606d0(local_res8,&local_128,param_3,lVar14,0);
      fVar16 = (float)FUN_140860620(local_res8,param_3,lVar2,0);
      fVar21 = local_110 * local_128 - local_120 * local_118;
      fVar20 = local_120 * local_114 - local_110 * local_124;
      fVar22 = local_118 * local_124 - local_114 * local_128;
      fVar17 = fVar21 * fVar21 + fVar20 * fVar20 + fVar22 * fVar22;
      local_f8 = fVar20;
      local_f4 = fVar21;
      local_f0 = fVar22;
      if ((fVar17 != 1.0) &&
         (local_f8 = DAT_1468b5d90, local_f4 = DAT_1468b5d94, local_f0 = DAT_1468b5d98,
         1e-08 <= fVar17)) {
        auVar19 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
        fVar18 = auVar19._0_4_;
        fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
        fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
        local_f8 = fVar18 * fVar20;
        local_f4 = fVar18 * fVar21;
        local_f0 = fVar18 * fVar22;
      }
      lVar15 = *(longlong *)(lVar1 + 0xc0);
      local_f8 = local_f8 * fVar16;
      local_f4 = local_f4 * fVar16;
      local_f0 = local_f0 * fVar16;
      if (*(char *)(lVar1 + 0xe1) == '\0') {
        iVar5 = (int)ROUND(local_128 * 127.0 + local_128 * 127.0 + 0.5) >> 1;
        iVar7 = -0x80;
        if ((-0x81 < iVar5) && (iVar7 = 0x7f, iVar5 < 0x7f)) {
          iVar7 = iVar5;
        }
        *(char *)(lVar15 + uVar10 * 8) = (char)iVar7;
        iVar6 = (int)ROUND(local_124 * 127.0 + local_124 * 127.0 + 0.5) >> 1;
        iVar5 = -0x80;
        iVar7 = iVar5;
        if ((-0x81 < iVar6) && (iVar7 = 0x7f, iVar6 < 0x7f)) {
          iVar7 = iVar6;
        }
        *(char *)(lVar15 + 1 + uVar10 * 8) = (char)iVar7;
        iVar7 = (int)ROUND(local_120 * 127.0 + local_120 * 127.0 + 0.5) >> 1;
        if ((-0x81 < iVar7) && (iVar5 = 0x7f, iVar7 < 0x7f)) {
          iVar5 = iVar7;
        }
        *(char *)(lVar15 + 2 + uVar10 * 8) = (char)iVar5;
        local_d8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0x3f800000;
        local_108 = local_128;
        local_104 = local_124;
        local_100 = local_120;
        local_e8 = local_118;
        local_e4 = local_114;
        local_e0 = local_110;
        *(undefined1 *)(lVar15 + 3 + uVar10 * 8) = 0x7f;
        local_fc = 0;
        local_ec = 0;
        local_dc = 0;
        fVar16 = (float)FMatrix::Determinant(&local_108);
        if (0.0 <= fVar16) {
          fVar16 = 254.5;
        }
        else {
          fVar16 = -253.5;
        }
        iVar6 = (int)ROUND(local_118 * 127.0 + local_118 * 127.0 + 0.5) >> 1;
        iVar5 = -0x80;
        iVar7 = iVar5;
        if ((-0x81 < iVar6) && (iVar7 = 0x7f, iVar6 < 0x7f)) {
          iVar7 = iVar6;
        }
        *(char *)(lVar15 + 4 + uVar10 * 8) = (char)iVar7;
        iVar6 = (int)ROUND(local_114 * 127.0 + local_114 * 127.0 + 0.5) >> 1;
        iVar7 = iVar5;
        if ((-0x81 < iVar6) && (iVar7 = 0x7f, iVar6 < 0x7f)) {
          iVar7 = iVar6;
        }
        *(char *)(lVar15 + 5 + uVar10 * 8) = (char)iVar7;
        iVar7 = (int)ROUND(local_110 * 127.0 + local_110 * 127.0 + 0.5) >> 1;
        if ((-0x81 < iVar7) && (iVar5 = 0x7f, iVar7 < 0x7f)) {
          iVar5 = iVar7;
        }
        *(char *)(lVar15 + 6 + uVar10 * 8) = (char)iVar5;
        iVar5 = (int)ROUND(fVar16) >> 1;
        iVar7 = -0x80;
        if ((-0x81 < iVar5) && (iVar7 = 0x7f, iVar5 < 0x7f)) {
          iVar7 = iVar5;
        }
        *(char *)(lVar15 + 7 + uVar10 * 8) = (char)iVar7;
      }
      else {
        puVar11 = (undefined2 *)(uVar10 * 0x10 + lVar15);
        iVar5 = (int)ROUND(local_128 * 32767.0 + local_128 * 32767.0 + 0.5) >> 1;
        iVar7 = -0x8000;
        if ((-0x8001 < iVar5) && (iVar7 = 0x7fff, iVar5 < 0x7fff)) {
          iVar7 = iVar5;
        }
        *puVar11 = (short)iVar7;
        iVar6 = (int)ROUND(local_124 * 32767.0 + local_124 * 32767.0 + 0.5) >> 1;
        iVar5 = -0x8000;
        iVar7 = iVar5;
        if ((-0x8001 < iVar6) && (iVar7 = 0x7fff, iVar6 < 0x7fff)) {
          iVar7 = iVar6;
        }
        puVar11[1] = (short)iVar7;
        iVar7 = (int)ROUND(local_120 * 32767.0 + local_120 * 32767.0 + 0.5) >> 1;
        if ((-0x8001 < iVar7) && (iVar5 = 0x7fff, iVar7 < 0x7fff)) {
          iVar5 = iVar7;
        }
        puVar11[2] = (short)iVar5;
        local_d8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0x3f800000;
        local_108 = local_128;
        local_104 = local_124;
        local_100 = local_120;
        local_e8 = local_118;
        local_e4 = local_114;
        local_e0 = local_110;
        puVar11[3] = 0x7fff;
        local_fc = 0;
        local_ec = 0;
        local_dc = 0;
        fVar16 = (float)FMatrix::Determinant(&local_108);
        if (0.0 <= fVar16) {
          fVar16 = 65534.5;
        }
        else {
          fVar16 = -65533.5;
        }
        iVar6 = (int)ROUND(local_118 * 32767.0 + local_118 * 32767.0 + 0.5) >> 1;
        iVar5 = -0x8000;
        iVar7 = iVar5;
        if ((-0x8001 < iVar6) && (iVar7 = 0x7fff, iVar6 < 0x7fff)) {
          iVar7 = iVar6;
        }
        puVar11[4] = (short)iVar7;
        iVar6 = (int)ROUND(local_114 * 32767.0 + local_114 * 32767.0 + 0.5) >> 1;
        iVar7 = iVar5;
        if ((-0x8001 < iVar6) && (iVar7 = 0x7fff, iVar6 < 0x7fff)) {
          iVar7 = iVar6;
        }
        puVar11[5] = (short)iVar7;
        iVar7 = (int)ROUND(local_110 * 32767.0 + local_110 * 32767.0 + 0.5) >> 1;
        if ((-0x8001 < iVar7) && (iVar5 = 0x7fff, iVar7 < 0x7fff)) {
          iVar5 = iVar7;
        }
        puVar11[6] = (short)iVar5;
        iVar5 = (int)ROUND(fVar16) >> 1;
        iVar7 = -0x8000;
        if ((-0x8001 < iVar5) && (iVar7 = 0x7fff, iVar5 < 0x7fff)) {
          iVar7 = iVar5;
        }
        puVar11[7] = (short)iVar7;
      }
    }
  }
  else if (lVar15 == DAT_146aedae0) {
    if (*(int *)(param_2 + 0xe88) < 1) {
      uVar8 = *(uint *)((longlong)param_4 + 0x3c);
      uVar9 = *(uint *)(param_4 + 8);
      lVar15 = *(longlong *)(lVar1 + 200);
      lVar14 = *(uint *)(lVar1 + 0xd8) * uVar10 + (ulonglong)*(uint *)(param_4 + 1);
      if (*(char *)(lVar1 + 0xe0) == '\0') {
        uVar4 = (ushort)(uVar8 >> 0x10);
        uVar3 = uVar4 & 0x8000;
        uVar12 = uVar8 >> 0x17 & 0xff;
        if (uVar12 < 0x71) {
          iVar7 = -uVar12 + 0x7e;
          if ((iVar7 < 0x19) &&
             (uVar8 = uVar8 & 0x7fffff | 0x800000,
             uVar3 = (ushort)(uVar8 >> ((byte)iVar7 & 0x1f)) & 0x3ff | uVar3,
             (uVar8 >> ((char)-uVar12 + 0x7dU & 0x1f) & 1) != 0)) {
            uVar3 = uVar3 + 1;
          }
        }
        else if (uVar12 < 0x8f) {
          uVar3 = uVar3 | ((uVar4 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar8 >> 0xd) & 0x3ff;
        }
        else {
          uVar3 = uVar3 | 0x7bff;
        }
        *(ushort *)(lVar15 + lVar14 * 4) = uVar3;
        uVar3 = (ushort)(uVar9 >> 0x10);
        uVar4 = uVar3 & 0x8000;
        uVar8 = uVar9 >> 0x17 & 0xff;
        if (uVar8 < 0x71) {
          iVar7 = -uVar8 + 0x7e;
          if ((iVar7 < 0x19) &&
             (uVar9 = uVar9 & 0x7fffff | 0x800000,
             uVar4 = (ushort)(uVar9 >> ((byte)iVar7 & 0x1f)) & 0x3ff | uVar4,
             (uVar9 >> ((char)-uVar8 + 0x7dU & 0x1f) & 1) != 0)) {
            *(ushort *)(lVar15 + 2 + lVar14 * 4) = uVar4 + 1;
            return;
          }
        }
        else {
          if (0x8e < uVar8) {
            *(ushort *)(lVar15 + 2 + lVar14 * 4) = uVar4 | 0x7bff;
            return;
          }
          uVar4 = uVar4 | ((uVar3 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar9 >> 0xd) & 0x3ff;
        }
        *(ushort *)(lVar15 + 2 + lVar14 * 4) = uVar4;
      }
      else {
        *(uint *)(lVar15 + lVar14 * 8) = uVar8;
        *(uint *)(lVar15 + 4 + lVar14 * 8) = uVar9;
      }
    }
  }
  else {
    iVar13 = (int7)(int3)((uint)(int)param_1[7] >> 8);
    if (lVar15 == DAT_146aedb00) {
      if (0 < *(int *)(param_2 + 0xe88)) {
        return;
      }
      local_118 = *(float *)(param_4 + 4);
      local_114 = *(float *)((longlong)param_4 + 0x24);
      local_110 = *(float *)(param_4 + 5);
      local_10c = *(float *)((longlong)param_4 + 0x2c);
      FLinearColor::ToFColor(&local_118,&local_res8,CONCAT71(iVar13,1));
      lVar15 = *(longlong *)(lVar1 + 0x1f0);
      if (*(longlong *)(lVar1 + 0x1f0) == 0) {
        lVar15 = lVar1 + 0x140;
      }
      if (*(int *)(lVar15 + 0x54) == *(int *)(*(longlong *)(param_2 + 0x28) + 0x40)) {
        *(undefined4 *)
         ((ulonglong)(*(int *)(lVar15 + 0x50) * param_3) + *(longlong *)(lVar15 + 0x48)) =
             (undefined4)local_res8;
        return;
      }
    }
    else {
      if (lVar15 != DAT_146aedb08) {
        return;
      }
      if (0 < *(int *)(param_2 + 0xe88)) {
        return;
      }
      local_118 = *(float *)(param_4 + 4);
      local_114 = *(float *)((longlong)param_4 + 0x24);
      local_110 = *(float *)(param_4 + 5);
      local_10c = *(float *)((longlong)param_4 + 0x2c);
      FLinearColor::ToFColor(&local_118,&local_res8,CONCAT71(iVar13,1));
      lVar15 = *(longlong *)(lVar1 + 0x1f0);
      if (*(longlong *)(lVar1 + 0x1f0) == 0) {
        lVar15 = lVar1 + 0x140;
      }
      if (*(int *)(lVar15 + 0xac) == *(int *)(*(longlong *)(param_2 + 0x28) + 0x40)) {
        *(undefined4 *)
         ((ulonglong)(*(int *)(lVar15 + 0xa8) * param_3) + *(longlong *)(lVar15 + 0xa0)) =
             (undefined4)local_res8;
        return;
      }
    }
    if ((((local_118 != DAT_1464aa6c0) || (local_114 != DAT_1464aa6c4)) ||
        (local_110 != DAT_1464aa6c8)) || (local_10c != DAT_1464aa6cc)) {
      (**(code **)(*param_1 + 0x288))(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140895ec0 FUN_140895ec0 body=83 status=ok
// SIG undefined FUN_140895ec0(void)

void FUN_140895ec0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x17,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\EditableMesh\\Source\\EditableMesh\\Public\\EditableMeshAdapter.h"
             ,0x17,L"Pure virtual not implemented (%s)",&DAT_143f3eda8);
  return;
}



// FUNCTION 140895f30 PostLoad body=43 status=ok
// SIG undefined PostLoad(void)

void UEditableMesh::PostLoad(undefined8 param_1)

{
  UObject::PostLoad();
  FUN_140898f40(param_1);
  FUN_1408985f0(param_1);
  FUN_140898df0(param_1);
  return;
}



// FUNCTION 140895f60 PushChild body=346 status=ok
// SIG undefined PushChild(void)

void TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::
     TConstIterator<TInlineAllocator<99,FDefaultAllocator>_>::PushChild
               (longlong *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  iVar4 = (int)param_1[0x322];
  *(int *)(param_1 + 0x322) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x1914) < iVar4 + 1) {
    TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
    ::ResizeGrow(param_1 + 8,iVar4);
  }
  plVar6 = (longlong *)0x0;
  plVar5 = (longlong *)param_1[800];
  if ((longlong *)param_1[800] == (longlong *)0x0) {
    plVar5 = param_1 + 8;
  }
  plVar5 = plVar5 + (longlong)iVar4 * 8;
  if (plVar5 != (longlong *)0x0) {
    plVar5[2] = 0;
    *(undefined4 *)(plVar5 + 3) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1c) = 0x3f800000;
    *(undefined8 *)((longlong)plVar5 + 0x24) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x2c) = 0x3f800000;
    *plVar5 = 0;
    plVar6 = plVar5;
  }
  *plVar6 = *(longlong *)(*param_1 + 0x148 + (ulonglong)(param_2 & 7) * 8);
  *(float *)(plVar6 + 2) =
       *(float *)(&DAT_146534f00 + (ulonglong)(param_2 & 1) * 4) *
       *(float *)((longlong)param_1 + 0x34) + *(float *)(param_1 + 2);
  *(float *)((longlong)plVar6 + 0x14) =
       *(float *)(&DAT_146534f00 + (ulonglong)(param_2 >> 1 & 1) * 4) *
       *(float *)((longlong)param_1 + 0x34) + *(float *)((longlong)param_1 + 0x14);
  fVar1 = *(float *)(&DAT_146534f00 + (ulonglong)(param_2 >> 2 & 1) * 4);
  fVar2 = *(float *)((longlong)param_1 + 0x34);
  fVar3 = *(float *)(param_1 + 3);
  *(undefined4 *)((longlong)plVar6 + 0x1c) = 0;
  *(float *)(plVar6 + 3) = fVar1 * fVar2 + fVar3;
  *(int *)(plVar6 + 4) = (int)param_1[6];
  *(int *)((longlong)plVar6 + 0x24) = (int)param_1[6];
  *(int *)(plVar6 + 5) = (int)param_1[6];
  *(undefined4 *)((longlong)plVar6 + 0x2c) = 0;
  fVar1 = *(float *)(param_1 + 6);
  *(float *)(plVar6 + 6) = fVar1 * 0.53125;
  *(float *)((longlong)plVar6 + 0x34) = *(float *)(param_1 + 6) - fVar1 * 0.53125;
  return;
}



// FUNCTION 1408960c0 FUN_1408960c0 body=687 status=ok
// SIG undefined FUN_1408960c0(void)

void FUN_1408960c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  longlong local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  local_50 = lVar3 + 0xe0;
  local_78 = 0;
  iVar12 = *(int *)(lVar3 + 0x108);
  uStack_74 = 1;
  puStack_40 = (uint *)(lVar3 + 0xf0);
  local_68 = (uint *)0xffffffff;
  iVar5 = 0;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  if (iVar12 != 0) {
    puVar11 = *(uint **)(lVar3 + 0x100);
    if (*(uint **)(lVar3 + 0x100) == (uint *)0x0) {
      puVar11 = puStack_40;
    }
    uVar8 = *puVar11;
    local_78 = 0;
    while (uVar8 == 0) {
      local_68 = (uint *)0xffffffff;
      lVar7 = (longlong)local_78;
      iVar5 = iVar5 + 0x20;
      iVar9 = local_78 + 1;
      uStack_60._4_4_ = (uint)(uStack_60 >> 0x20);
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar5);
      bVar4 = (int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar9;
      if (bVar4) goto LAB_140896198;
      uVar8 = puVar11[lVar7 + 1];
    }
    uStack_74 = uVar8 - 1 & uVar8 ^ uVar8;
    iVar9 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iVar5 = (iVar5 - iVar9) + 0x1f;
    local_68 = (uint *)CONCAT44(iVar5,0xffffffff);
    if (iVar12 < iVar5) {
LAB_140896198:
      local_68 = (uint *)CONCAT44(iVar12,(undefined4)local_68);
    }
  }
  uVar8 = *(uint *)(lVar3 + 0x108);
  uStack_48 = CONCAT44(uStack_74,local_78);
  uVar2 = *(uint *)(lVar3 + 0x108);
  uVar10 = uVar8 & 0xffffffe0;
  uStack_38 = local_68;
  uStack_30 = uStack_60;
  local_58 = uStack_60;
  _iStack_70 = CONCAT44(uStack_74,local_78);
  uStack_60 = (ulonglong)local_68;
  if (uVar8 != uVar2) {
    puVar11 = *(uint **)(lVar3 + 0x100);
    if (*(uint **)(lVar3 + 0x100) == (uint *)0x0) {
      puVar11 = (uint *)(lVar3 + 0xf0);
    }
    uVar6 = puVar11[(int)uVar8 >> 5] & -1 << ((byte)uVar8 & 0x1f);
    iVar12 = (int)uVar8 >> 5;
    while (uVar6 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
      goto LAB_14089625a;
      uVar6 = puVar11[(longlong)iVar12 + 1];
      iVar12 = iVar12 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uVar8 = (uVar10 - iVar12) + 0x1f;
    if ((int)uVar2 < (int)uVar8) {
LAB_14089625a:
      uVar8 = uVar2;
    }
  }
  plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_68 = puStack_40;
  while ((uStack_60._4_4_ != uVar8 || (local_68 != (uint *)(lVar3 + 0xf0)))) {
    uVar2 = DAT_14652d648;
    if ((int)uStack_60._4_4_ < (int)local_68[6]) {
      uVar2 = uStack_60._4_4_;
    }
    if ((*(int *)(*plVar1 + 0x38) < DAT_146860500) &&
       (_Init_thread_header(&DAT_146860500), DAT_146860500 == -1)) {
      atexit((_func_5014 *)&LAB_143e435f0);
      _Init_thread_footer(&DAT_146860500);
    }
    FUN_140896370(param_1,uVar2,&DAT_1468604f0);
    iVar12 = DAT_1468604f8;
    lVar7 = (longlong)DAT_1468604f8;
    if (DAT_1468604f8 != 0) {
      iVar5 = (int)param_2[1];
      if (*(int *)((longlong)param_2 + 0xc) < iVar5 + DAT_1468604f8) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_2);
        iVar5 = (int)param_2[1];
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_2 + (longlong)iVar5 * 4),DAT_1468604f0,lVar7 << 2);
      *(int *)(param_2 + 1) = (int)param_2[1] + iVar12;
    }
    uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 140896370 FUN_140896370 body=8826 status=ok
// SIG undefined FUN_140896370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140896370(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  float fVar7;
  undefined *puVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  longlong lVar14;
  int *piVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  float *pfVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  ulonglong uVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong *plVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8;
  undefined1 local_2c0;
  char local_2b8 [4];
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  undefined local_2a4 [4];
  float local_2a0 [2];
  undefined8 local_298;
  float local_290;
  float local_288;
  float fStack_284;
  undefined *puStack_280;
  undefined8 local_278;
  float fStack_270;
  float fStack_26c;
  longlong local_268;
  int local_260;
  int *local_258;
  float local_250 [2];
  longlong local_248;
  int local_240;
  float local_23c;
  undefined8 local_238;
  undefined8 local_230;
  float *local_228;
  undefined8 local_220;
  float local_218;
  longlong local_210;
  undefined8 local_208;
  float local_200;
  longlong local_1f8;
  float local_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float local_1d8;
  undefined4 uStack_1d4;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  float local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  longlong local_1a0;
  longlong *local_198;
  longlong *local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  float *local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_154;
  undefined *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 *local_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  uVar27 = 0;
  lVar31 = (longlong)param_2;
  *(undefined4 *)(param_3 + 8) = 0;
  local_268 = param_1;
  local_260 = param_2;
  local_1a0 = param_3;
  if ((*(int *)(param_3 + 0xc) < 0) && (*(int *)(param_3 + 0xc) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  local_210 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(local_210 + 0x38) < DAT_146860518) &&
     (_Init_thread_header(&DAT_146860518), DAT_146860518 == -1)) {
    atexit((_func_5014 *)&LAB_143e43c60);
    _Init_thread_footer(&DAT_146860518);
  }
  DAT_146860510 = 0;
  if ((DAT_146860514 < 0) && (DAT_146860514 != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146860508,0);
  }
  iVar18 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xe0) + 8 + lVar31 * 0x10);
  if (DAT_146860514 < iVar18) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146860508,iVar18);
  }
  uVar32 = uVar27;
  if (0 < iVar18) {
    do {
      iVar21 = DAT_146860510;
      lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xe0);
      iVar12 = (int)uVar27;
      if ((iVar12 < 0) || (*(int *)(lVar22 + 8 + lVar31 * 0x10) <= iVar12)) {
        pfVar13 = &DAT_14652d64c;
      }
      else {
        pfVar13 = (float *)(*(longlong *)(lVar22 + lVar31 * 0x10) + uVar32);
      }
      lVar22 = (longlong)DAT_146860510;
      fVar29 = *pfVar13;
      DAT_146860510 = DAT_146860510 + 1;
      if (DAT_146860514 < DAT_146860510) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146860508,iVar21);
      }
      uVar27 = (ulonglong)(iVar12 + 1U);
      uVar32 = uVar32 + 4;
      DAT_146860508[lVar22] = fVar29;
      param_1 = local_268;
    } while ((int)(iVar12 + 1U) < iVar18);
  }
  if ((*(int *)(local_210 + 0x38) < DAT_14686051c) &&
     (_Init_thread_header(&DAT_14686051c), DAT_14686051c == -1)) {
    atexit(FUN_143e42320);
    _Init_thread_footer(&DAT_14686051c);
  }
  TSet<TTuple<FPolygonID,`UEditableMesh::QuadrangulatePolygonGroup'::`2'::FAdjacentPolygons>,TDefaultMapHashableKeyFuncs<FPolygonID,`UEditableMesh::QuadrangulatePolygonGroup'::`2'::FAdjacentPolygons,0>,FDefaultSetAllocator>
  ::Reset(&DAT_146270910);
  fVar42 = DAT_14652d64c;
  lVar31 = *(longlong *)(param_1 + 0x28);
  local_23c = 3.4028235e+38;
  local_198 = (longlong *)FUN_140860990(lVar31 + 0x5e8,DAT_146aedb10,0);
  local_190 = (longlong *)FUN_140860830(lVar31 + 0x118,DAT_146aedad0,0);
  local_168 = DAT_146860508 + DAT_146860510;
  local_228 = DAT_146860508;
  fVar29 = fVar42;
  if (DAT_146860508 != local_168) {
    do {
      local_2ac = *local_228;
      if (*(int *)((longlong)(int)local_2ac * 0x38 + 8 +
                  *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8)) == 3) {
        FUN_140877530(param_1,&local_178);
        fVar30 = 0.0;
        local_1f8 = 0;
        lVar31 = DAT_146270910;
        fVar42 = DAT_14652d64c;
        fVar7 = local_2ac;
LAB_140896620:
        lVar23 = local_268;
        local_298 = *(float **)(param_1 + 0x28);
        local_248 = *(longlong *)(local_298 + 0x2a);
        iVar18 = *(int *)((longlong)(int)fVar7 * 0x38 + 8 + local_248);
        lVar22 = local_248;
        iVar21 = DAT_14652d644;
        if ((int)fVar30 < iVar18) {
          lVar14 = *(longlong *)((longlong)(int)fVar7 * 0x38 + local_248);
          iVar12 = *(int *)(*(longlong *)(local_298 + 0xe) +
                           (longlong)*(int *)(lVar14 + local_1f8 * 4) * 0x18);
          iVar18 = *(int *)(*(longlong *)(local_298 + 0xe) +
                           (longlong)*(int *)(lVar14 + (longlong)(((int)fVar30 + 1) % iVar18) * 4) *
                           0x18);
          piVar9 = *(int **)((longlong)iVar12 * 0x20 + 0x10 + *(longlong *)local_298);
          piVar15 = piVar9 + *(int *)((longlong)iVar12 * 0x20 + 0x18 + *(longlong *)local_298);
          if (piVar9 != piVar15) {
            do {
              iVar21 = *piVar9;
              iVar28 = *(int *)(*(longlong *)(local_298 + 0x1c) + (longlong)iVar21 * 0x18);
              iVar4 = *(int *)(*(longlong *)(local_298 + 0x1c) + 4 + (longlong)iVar21 * 0x18);
              if (((iVar28 == iVar12) && (iVar4 == iVar18)) ||
                 ((iVar28 == iVar18 && (iVar4 == iVar12)))) goto LAB_1408966e2;
              piVar9 = piVar9 + 1;
            } while (piVar9 != piVar15);
          }
          lVar22 = *(longlong *)(local_298 + 0x2a);
          iVar21 = DAT_14652d644;
        }
LAB_1408966e2:
        iVar18 = 0;
        lVar14 = (longlong)iVar21;
        if ((*(char *)(*local_198 + lVar14) == '\0') &&
           (lVar6 = *(longlong *)(local_298 + 0x1c), local_2a0[0] = fVar42,
           *(int *)(lVar6 + 0x10 + lVar14 * 0x18) == 2)) {
          do {
            if ((iVar18 < 0) || (*(int *)(lVar6 + 0x10 + lVar14 * 0x18) <= iVar18)) {
              pfVar13 = &DAT_14652d64c;
            }
            else {
              pfVar13 = (float *)(*(longlong *)(lVar6 + 8 + lVar14 * 0x18) + (longlong)iVar18 * 4);
            }
            fVar34 = *pfVar13;
            if (fVar34 != fVar7) {
              if (*(int *)((longlong)(int)fVar34 * 0x38 + 8 + lVar22) == 3) {
                local_2a0[0] = fVar34;
              }
              if (local_2a0[0] != fVar42) {
                pfVar13 = (float *)0x0;
                if (DAT_146270918 == DAT_146270944) goto LAB_140896968;
                puVar8 = DAT_146270950;
                if (DAT_146270950 == (undefined *)0x0) {
                  puVar8 = &DAT_146270948;
                }
                iVar18 = *(int *)(puVar8 + (longlong)(int)(DAT_146270958 - 1U & (uint)fVar7) * 4);
                goto joined_r0x000140896938;
              }
              break;
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < 2);
        }
        goto LAB_14089674a;
      }
LAB_14089676c:
      lVar31 = local_210;
      iVar18 = local_260;
      local_228 = local_228 + 1;
    } while (local_228 != local_168);
    if (fVar29 != fVar42) {
      if (*(int *)(local_210 + 0x38) < DAT_146860530) {
        _Init_thread_header(&DAT_146860530);
        if (DAT_146860530 == -1) {
          atexit((_func_5014 *)&LAB_143e43f10);
          _Init_thread_footer(&DAT_146860530);
        }
      }
      TArray<FPolygonToCreate,FDefaultAllocator>::Reset(&DAT_146860520,0);
      if (*(int *)(lVar31 + 0x38) < DAT_146860548) {
        _Init_thread_header(&DAT_146860548);
        if (DAT_146860548 == -1) {
          atexit((_func_5014 *)&LAB_143e43d00);
          _Init_thread_footer(&DAT_146860548);
        }
      }
      DAT_146860540 = 0;
      if ((DAT_146860544 < 0) && (DAT_146860544 != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146860538,0);
      }
      if (*(int *)(lVar31 + 0x38) < DAT_1468605a0) {
        _Init_thread_header(&DAT_1468605a0);
        if (DAT_1468605a0 == -1) {
          TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>
                    (&DAT_146860560,0,0);
          _DAT_146860580 = 0xffffffff;
          DAT_146860584 = 0;
          DAT_146860590 = (undefined *)0x0;
          DAT_146860598 = 0;
          atexit(FUN_143e42800);
          _Init_thread_footer(&DAT_1468605a0);
        }
      }
      TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Reset(&DAT_146860550);
LAB_140896850:
      iVar21 = DAT_146860528;
      if (DAT_146270918 != DAT_146270944) {
        puVar8 = DAT_146270950;
        if (DAT_146270950 == (undefined *)0x0) {
          puVar8 = &DAT_146270948;
        }
        iVar12 = *(int *)(puVar8 + (longlong)(int)(DAT_146270958 - 1U & (uint)fVar29) * 4);
        while (iVar12 != -1) {
          lVar31 = (longlong)iVar12 * 0x88;
          if (*(float *)(DAT_146270910 + lVar31) == fVar29) {
            piVar15 = (int *)(DAT_146270910 + lVar31);
            if (iVar12 != -1) goto LAB_1408976f7;
            break;
          }
          iVar12 = *(int *)(DAT_146270910 + 0x80 + lVar31);
        }
      }
      piVar15 = (int *)0x0;
LAB_1408976f7:
      uVar19 = piVar15[1];
      local_230 = (float *)(piVar15 + 1);
      local_248 = CONCAT44(local_248._4_4_,uVar19);
      if (DAT_146270918 != DAT_146270944) {
        puVar8 = DAT_146270950;
        if (DAT_146270950 == (undefined *)0x0) {
          puVar8 = &DAT_146270948;
        }
        iVar12 = *(int *)(puVar8 + (longlong)(int)(DAT_146270958 - 1U & uVar19) * 4);
        while (iVar12 != -1) {
          lVar31 = (longlong)iVar12 * 0x88;
          if (*(uint *)(DAT_146270910 + lVar31) == uVar19) {
            local_258 = (int *)(DAT_146270910 + lVar31);
            if (iVar12 != -1) goto LAB_14089775b;
            break;
          }
          iVar12 = *(int *)(DAT_146270910 + 0x80 + lVar31);
        }
      }
      local_258 = (int *)0x0;
LAB_14089775b:
      lVar31 = (longlong)DAT_146860528;
      local_238 = (float *)(local_258 + 1);
      DAT_146860528 = DAT_146860528 + 1;
      local_228 = (float *)piVar15;
      if (DAT_14686052c < DAT_146860528) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&DAT_146860520,iVar21);
      }
      puVar16 = (undefined4 *)(lVar31 * 0x30 + _DAT_146860520);
      *puVar16 = DAT_14652d648;
      *(undefined8 *)(puVar16 + 2) = 0;
      *(undefined8 *)(puVar16 + 4) = 0;
      *(undefined8 *)(puVar16 + 6) = 0;
      *(undefined8 *)(puVar16 + 8) = 0;
      puVar16[10] = DAT_14652d64c;
      *(undefined1 *)(puVar16 + 0xb) = 0;
      piVar9 = (int *)((longlong)(DAT_146860528 + -1) * 0x30 + _DAT_146860520);
      plVar1 = (longlong *)(piVar9 + 2);
      *piVar9 = iVar18;
      iVar18 = piVar9[5];
      iVar21 = piVar9[4];
      if (iVar18 < 4) {
        if (iVar21 != 0) {
          plVar33 = (longlong *)(*plVar1 + 8);
          do {
            if (*plVar33 != 0) {
              FMemory::Free();
            }
            plVar33 = plVar33 + 3;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
          iVar18 = piVar9[5];
        }
        piVar9[4] = 0;
        if (iVar18 != 4) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo(plVar1,4);
        }
      }
      else {
        if (iVar21 != 0) {
          plVar33 = (longlong *)(*plVar1 + 8);
          do {
            if (*plVar33 != 0) {
              FMemory::Free();
            }
            plVar33 = plVar33 + 3;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
        }
        piVar9[4] = 0;
      }
      lVar31 = local_268;
      lVar22 = 4;
      do {
        iVar18 = piVar9[4];
        lVar23 = (longlong)iVar18;
        piVar9[4] = iVar18 + 1;
        if (piVar9[5] < iVar18 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1,iVar18);
        }
        iVar18 = local_260;
        lVar14 = *plVar1;
        *(int *)(lVar14 + lVar23 * 0x18) = DAT_14652d640;
        *(float *)(lVar14 + 4 + lVar23 * 0x18) = DAT_14652d63c;
        *(undefined8 *)(lVar14 + 8 + lVar23 * 0x18) = 0;
        *(undefined8 *)(lVar14 + 0x10 + lVar23 * 0x18) = 0;
        iVar21 = piVar15[3];
        lVar23 = *(longlong *)(*(longlong *)(lVar31 + 0x28) + 0xa8);
        lVar14 = (longlong)piVar15[2] * 0x38;
        if ((iVar21 < 0) || (*(int *)(lVar14 + 8 + lVar23) <= iVar21)) {
          puVar16 = &DAT_14652d640;
        }
        else {
          puVar16 = (undefined4 *)(*(longlong *)(lVar14 + lVar23) + (longlong)iVar21 * 4);
        }
        *(undefined4 *)(*plVar1 + -0x18 + (longlong)piVar9[4] * 0x18) = *puVar16;
        iVar21 = DAT_146860540;
        lVar22 = lVar22 + -1;
        piVar15 = piVar15 + 2;
      } while (lVar22 != 0);
      lVar31 = (longlong)DAT_146860540;
      fVar42 = (float)local_248;
      DAT_146860540 = DAT_146860540 + 1;
      if (DAT_146860544 < DAT_146860540) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146860538,iVar21);
      }
      *(float *)(DAT_146860538 + lVar31 * 4) = fVar29;
      iVar21 = DAT_146860540;
      lVar31 = (longlong)DAT_146860540;
      DAT_146860540 = DAT_146860540 + 1;
      if (DAT_146860544 < DAT_146860540) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146860538,iVar21);
      }
      uVar27 = 0;
      *(float *)(DAT_146860538 + lVar31 * 4) = fVar42;
      if (DAT_146860558 != DAT_146860584) {
        puVar8 = DAT_146860590;
        if (DAT_146860590 == (undefined *)0x0) {
          puVar8 = &DAT_146860588;
        }
        iVar21 = *(int *)(puVar8 + (longlong)(int)((uint)fVar29 & DAT_146860598 - 1) * 4);
        while (iVar21 != -1) {
          lVar31 = (longlong)iVar21;
          if (*(float *)(DAT_146860550 + lVar31 * 0xc) == fVar29) {
            lVar22 = (longlong)
                     (int)(*(uint *)(DAT_146860550 + 8 + lVar31 * 0xc) & DAT_146860598 - 1);
            puVar16 = (undefined4 *)(puVar8 + lVar22 * 4);
            iVar12 = *(int *)(puVar8 + lVar22 * 4);
            goto joined_r0x0001408979f4;
          }
          iVar21 = *(int *)(DAT_146860550 + 4 + lVar31 * 0xc);
        }
        goto LAB_140897a54;
      }
      goto LAB_140897afe;
    }
  }
  return;
joined_r0x000140896938:
  if (iVar18 == -1) goto LAB_140896968;
  lVar22 = (longlong)iVar18 * 0x88;
  if (*(float *)(lVar22 + lVar31) == fVar7) {
    pfVar24 = (float *)(lVar22 + lVar31);
    if (iVar18 != -1) goto LAB_14089696b;
    goto LAB_140896968;
  }
  iVar18 = *(int *)(lVar22 + 0x80 + lVar31);
  goto joined_r0x000140896938;
LAB_140896968:
  pfVar24 = pfVar13;
LAB_14089696b:
  pfVar11 = pfVar24 + 1;
  if (pfVar24 == (float *)0x0) {
    pfVar11 = pfVar13;
  }
  if ((pfVar11 != (float *)0x0) && (pfVar24 = pfVar11 + 0x1e, 0 < (longlong)(int)*pfVar24)) {
    do {
      if (*pfVar11 == local_2a0[0]) goto LAB_14089674a;
      pfVar13 = (float *)((longlong)pfVar13 + 1);
      pfVar11 = pfVar11 + 10;
    } while ((longlong)pfVar13 < (longlong)(int)*pfVar24);
  }
  FUN_140877530(local_268,&local_188);
  fVar34 = local_2a0[0];
  fVar7 = local_2ac;
  iVar18 = DAT_14652d640;
  fVar46 = local_188 * local_178 + local_184 * local_174 + local_180 * local_170;
  lVar31 = DAT_146270910;
  fVar42 = DAT_14652d64c;
  if (fVar46 < 0.984) goto LAB_14089674a;
  iVar21 = (int)fVar30 + 2;
  lVar22 = (longlong)(int)local_2ac * 0x38;
  lVar31 = *(longlong *)(*(longlong *)(lVar23 + 0x28) + 0xa8);
  local_258 = (int *)CONCAT44(local_258._4_4_,
                              iVar21 + (iVar21 / 3 + (iVar21 >> 0x1f) +
                                       (int)(((longlong)iVar21 / 3 + ((longlong)iVar21 >> 0x3f) &
                                             0xffffffffU) >> 0x1f)) * -3);
  iVar21 = (int)fVar30 + 1;
  local_2b4 = (float)(iVar21 + (iVar21 / 3 + (iVar21 >> 0x1f) +
                               (int)(((longlong)iVar21 / 3 + ((longlong)iVar21 >> 0x3f) &
                                     0xffffffffU) >> 0x1f)) * -3);
  if (((int)fVar30 < 0) || (*(int *)(lVar22 + 8 + lVar31) <= (int)fVar30)) {
    piVar15 = &DAT_14652d640;
  }
  else {
    piVar15 = (int *)(*(longlong *)(lVar22 + lVar31) + (longlong)(int)fVar30 * 4);
  }
  local_2a8 = DAT_14652d63c;
  fVar42 = DAT_14652d63c;
  if (*piVar15 != DAT_14652d640) {
    fVar42 = *(float *)(*(longlong *)(*(longlong *)(lVar23 + 0x28) + 0x38) +
                       (longlong)*piVar15 * 0x18);
  }
  lVar23 = (longlong)(int)local_2a0[0];
  iVar21 = UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(local_268,local_2a0[0],fVar42);
  lVar14 = local_268;
  iVar28 = iVar21 + 2;
  iVar28 = iVar28 + (iVar28 / 3 + (iVar28 >> 0x1f) +
                    (int)(((longlong)iVar28 / 3 + ((longlong)iVar28 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    ) * -3;
  iVar12 = iVar21 + 1;
  local_248 = CONCAT44(local_248._4_4_,iVar28);
  local_250[0] = (float)(iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                                  (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) &
                                        0xffffffffU) >> 0x1f)) * -3);
  fVar42 = *(float *)(*(longlong *)(lVar31 + lVar22) + local_1f8 * 4);
  lVar23 = *(longlong *)(lVar23 * 0x38 + lVar31);
  fVar35 = *(float *)(*(longlong *)(lVar31 + lVar22) + (longlong)(int)local_2b4 * 4);
  fVar48 = *(float *)(lVar23 + (longlong)iVar21 * 4);
  fVar43 = *(float *)(lVar23 + (longlong)iVar28 * 4);
  if ((fVar42 != fVar48) || (fVar38 = local_2a8, fVar35 != fVar43)) {
    puStack_280 = local_2a4;
    local_278 = local_2b8;
    lVar31 = *(longlong *)(local_268 + 0x28);
    local_2b8[0] = '\x01';
    local_288 = fVar42;
    fStack_284 = fVar48;
    FUN_14085e520(lVar31 + 0x380,&local_288);
    FUN_14085e7d0(lVar31 + 0x3d8,&local_288);
    FUN_14085e2a0(lVar31 + 0x430,&local_288);
    FUN_14085e030(lVar31 + 0x488,&local_288);
    FUN_14085ddf0(lVar31 + 0x4e0,&local_288);
    FUN_14085ecb0(lVar31 + 0x538,&local_288);
    FUN_14085ea70(lVar31 + 0x590,&local_288);
    lVar31 = DAT_146270910;
    fVar42 = DAT_14652d64c;
    fVar7 = local_2ac;
    if (local_2b8[0] == '\0') goto LAB_14089674a;
    lVar31 = *(longlong *)(lVar14 + 0x28);
    puStack_280 = local_2a4;
    local_278 = local_2b8;
    local_2b8[0] = '\x01';
    local_288 = fVar35;
    fStack_284 = fVar43;
    FUN_14085e520(lVar31 + 0x380,&local_288);
    FUN_14085e7d0(lVar31 + 0x3d8,&local_288);
    FUN_14085e2a0(lVar31 + 0x430,&local_288);
    FUN_14085e030(lVar31 + 0x488,&local_288);
    FUN_14085ddf0(lVar31 + 0x4e0,&local_288);
    FUN_14085ecb0(lVar31 + 0x538,&local_288);
    FUN_14085ea70(lVar31 + 0x590,&local_288);
    lVar31 = DAT_146270910;
    fVar42 = DAT_14652d64c;
    fVar7 = local_2ac;
    iVar18 = DAT_14652d640;
    fVar38 = DAT_14652d63c;
    fVar34 = local_2a0[0];
    if (local_2b8[0] == '\0') goto LAB_14089674a;
  }
  lVar31 = *(longlong *)(local_268 + 0x28);
  lVar23 = (longlong)(int)fVar7 * 0x38;
  lVar22 = *(longlong *)(lVar31 + 0xa8);
  if (((int)local_258._0_4_ < 0) || (*(int *)(lVar23 + 8 + lVar22) <= (int)local_258._0_4_)) {
    piVar15 = &DAT_14652d640;
  }
  else {
    piVar15 = (int *)(*(longlong *)(lVar23 + lVar22) + (longlong)(int)local_258._0_4_ * 4);
  }
  local_2b4 = fVar38;
  if (*piVar15 != iVar18) {
    local_2b4 = *(float *)(*(longlong *)(lVar31 + 0x38) + (longlong)*piVar15 * 0x18);
  }
  if (((int)fVar30 < 0) || (*(int *)(lVar23 + 8 + lVar22) <= (int)fVar30)) {
    piVar15 = &DAT_14652d640;
  }
  else {
    piVar15 = (int *)(*(longlong *)(lVar23 + lVar22) + (longlong)(int)fVar30 * 4);
  }
  fVar42 = fVar38;
  if (*piVar15 != iVar18) {
    fVar42 = *(float *)(*(longlong *)(lVar31 + 0x38) + (longlong)*piVar15 * 0x18);
  }
  lVar23 = (longlong)(int)fVar34 * 0x38;
  if (((int)local_250[0] < 0) || (*(int *)(lVar23 + 8 + lVar22) <= (int)local_250[0])) {
    piVar15 = &DAT_14652d640;
  }
  else {
    piVar15 = (int *)(*(longlong *)(lVar23 + lVar22) + (longlong)(int)local_250[0] * 4);
  }
  fVar35 = fVar38;
  if (*piVar15 != iVar18) {
    fVar35 = *(float *)(*(longlong *)(lVar31 + 0x38) + (longlong)*piVar15 * 0x18);
  }
  if (((int)(float)local_248 < 0) || (*(int *)(lVar23 + 8 + lVar22) <= (int)(float)local_248)) {
    piVar15 = &DAT_14652d640;
  }
  else {
    piVar15 = (int *)(*(longlong *)(lVar23 + lVar22) + (longlong)(int)(float)local_248 * 4);
  }
  if (*piVar15 != iVar18) {
    fVar38 = *(float *)(*(longlong *)(lVar31 + 0x38) + (longlong)*piVar15 * 0x18);
  }
  lVar31 = *local_190;
  local_1b0 = *(undefined8 *)(lVar31 + (longlong)(int)local_2b4 * 0xc);
  fVar47 = (float)((ulonglong)local_1b0 >> 0x20);
  local_1a8 = *(float *)(lVar31 + 8 + (longlong)(int)local_2b4 * 0xc);
  local_1c0 = *(undefined8 *)(lVar31 + (longlong)(int)fVar42 * 0xc);
  fVar43 = (float)((ulonglong)local_1c0 >> 0x20);
  local_1b8 = *(float *)(lVar31 + 8 + (longlong)(int)fVar42 * 0xc);
  local_200 = *(float *)(lVar31 + 8 + (longlong)(int)fVar35 * 0xc);
  fVar48 = fVar43 - fVar47;
  uVar2 = *(undefined8 *)(lVar31 + (longlong)(int)fVar35 * 0xc);
  uVar3 = *(undefined8 *)(lVar31 + (longlong)(int)fVar38 * 0xc);
  local_218 = *(float *)(lVar31 + 8 + (longlong)(int)fVar38 * 0xc);
  local_2b4 = local_1b8 - local_1a8;
  fVar42 = (float)local_1c0 - (float)local_1b0;
  fVar35 = fVar42 * fVar42 + fVar48 * fVar48 + local_2b4 * local_2b4;
  if (fVar35 != 1.0) {
    if (1e-08 <= fVar35) {
      auVar40 = rsqrtss(ZEXT416((uint)fVar35),ZEXT416((uint)fVar35));
      fVar38 = auVar40._0_4_;
      fVar38 = fVar38 + fVar38 * (0.5 - fVar35 * 0.5 * fVar38 * fVar38);
      fVar38 = fVar38 + fVar38 * (0.5 - fVar35 * 0.5 * fVar38 * fVar38);
      local_2b4 = local_2b4 * fVar38;
      local_298 = (float *)CONCAT44(local_298._4_4_,fVar38);
      fVar48 = fVar48 * fVar38;
      fVar42 = fVar42 * fVar38;
    }
    else {
      local_2b4 = DAT_1468b5d98;
      fVar42 = DAT_1468b5d90;
      fVar48 = DAT_1468b5d94;
    }
  }
  fVar44 = local_200 - local_1b8;
  local_208._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  fVar43 = local_208._4_4_ - fVar43;
  local_208._0_4_ = (float)uVar2;
  fVar41 = (float)local_208 - (float)local_1c0;
  fVar36 = fVar41 * fVar41 + fVar43 * fVar43 + fVar44 * fVar44;
  fVar35 = fVar41;
  fVar38 = fVar43;
  fVar39 = fVar44;
  if ((fVar36 != 1.0) &&
     (fVar35 = DAT_1468b5d90, fVar38 = DAT_1468b5d94, fVar39 = DAT_1468b5d98, 1e-08 <= fVar36)) {
    auVar40 = rsqrtss(ZEXT416((uint)fVar36),ZEXT416((uint)fVar36));
    fVar39 = auVar40._0_4_;
    fVar39 = fVar39 + fVar39 * (0.5 - fVar36 * 0.5 * fVar39 * fVar39);
    fVar39 = fVar39 + fVar39 * (0.5 - fVar36 * 0.5 * fVar39 * fVar39);
    local_298 = (float *)CONCAT44(local_298._4_4_,fVar39);
    fVar35 = fVar41 * fVar39;
    fVar38 = fVar43 * fVar39;
    fVar39 = fVar44 * fVar39;
  }
  local_220._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  fVar45 = local_218 - local_200;
  local_220._0_4_ = (float)uVar3;
  local_208._0_4_ = (float)local_220 - (float)local_208;
  local_208._4_4_ = local_220._4_4_ - local_208._4_4_;
  fVar44 = (float)local_208 * (float)local_208 + local_208._4_4_ * local_208._4_4_ + fVar45 * fVar45
  ;
  fVar43 = (float)local_208;
  fVar36 = local_208._4_4_;
  fVar41 = fVar45;
  if ((fVar44 != 1.0) &&
     (fVar43 = DAT_1468b5d90, fVar36 = DAT_1468b5d94, fVar41 = DAT_1468b5d98, 1e-08 <= fVar44)) {
    auVar40 = rsqrtss(ZEXT416((uint)fVar44),ZEXT416((uint)fVar44));
    fVar41 = auVar40._0_4_;
    fVar41 = fVar41 + fVar41 * (0.5 - fVar44 * 0.5 * fVar41 * fVar41);
    fVar41 = fVar41 + fVar41 * (0.5 - fVar44 * 0.5 * fVar41 * fVar41);
    local_298 = (float *)CONCAT44(local_298._4_4_,fVar41);
    fVar43 = (float)local_208 * fVar41;
    fVar36 = local_208._4_4_ * fVar41;
    fVar41 = fVar45 * fVar41;
  }
  local_220._0_4_ = (float)local_1b0 - (float)local_220;
  fVar37 = local_1a8 - local_218;
  fVar47 = fVar47 - local_220._4_4_;
  fVar45 = (float)local_220 * (float)local_220 + fVar47 * fVar47 + fVar37 * fVar37;
  local_290 = (float)local_220;
  fVar44 = fVar47;
  local_2a8 = fVar37;
  if ((fVar45 != 1.0) &&
     (local_290 = DAT_1468b5d90, fVar44 = DAT_1468b5d94, local_2a8 = DAT_1468b5d98, 1e-08 <= fVar45)
     ) {
    auVar40 = rsqrtss(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
    fVar44 = auVar40._0_4_;
    fVar44 = fVar44 + fVar44 * (0.5 - fVar45 * 0.5 * fVar44 * fVar44);
    fVar44 = fVar44 + fVar44 * (0.5 - fVar45 * 0.5 * fVar44 * fVar44);
    local_2a8 = fVar37 * fVar44;
    local_298 = (float *)CONCAT44(local_298._4_4_,fVar44);
    local_290 = (float)local_220 * fVar44;
    fVar44 = fVar47 * fVar44;
  }
  fVar47 = -(fVar42 * local_290 + fVar48 * fVar44 + local_2b4 * local_2a8);
  if (-1.0 <= fVar47) {
    if (1.0 <= fVar47) {
      fVar47 = 1.0;
    }
  }
  else {
    fVar47 = -1.0;
  }
  local_220 = uVar3;
  local_208 = uVar2;
  fVar47 = _guard_xfg_dispatch_icall_nop(fVar47);
  local_298 = (float *)(CONCAT44(local_298._4_4_,1.5707964 - fVar47) & 0xffffffff7fffffff);
  fVar42 = -(fVar42 * fVar35 + fVar48 * fVar38 + local_2b4 * fVar39);
  if (-1.0 <= fVar42) {
    if (1.0 <= fVar42) {
      fVar42 = 1.0;
    }
  }
  else {
    fVar42 = -1.0;
  }
  fVar42 = _guard_xfg_dispatch_icall_nop(fVar42);
  fVar35 = -(fVar35 * fVar43 + fVar38 * fVar36 + fVar39 * fVar41);
  if (-1.0 <= fVar35) {
    if (1.0 <= fVar35) {
      fVar35 = 1.0;
    }
  }
  else {
    fVar35 = -1.0;
  }
  fVar35 = _guard_xfg_dispatch_icall_nop(fVar35);
  fVar48 = -(fVar43 * local_290 + fVar36 * fVar44 + fVar41 * local_2a8);
  if (-1.0 <= fVar48) {
    if (1.0 <= fVar48) {
      fVar48 = 1.0;
    }
  }
  else {
    fVar48 = -1.0;
  }
  fVar48 = _guard_xfg_dispatch_icall_nop(fVar48);
  if (-1.0 <= fVar46) {
    if (1.0 <= fVar46) {
      fVar46 = 1.0;
    }
  }
  else {
    fVar46 = -1.0;
  }
  fVar46 = _guard_xfg_dispatch_icall_nop(fVar46);
  fVar46 = fVar46 + ABS(1.5707964 - fVar42) + (float)local_298 + ABS(1.5707964 - fVar35) +
                    ABS(1.5707964 - fVar48);
  if (fVar46 < local_23c) {
    fVar29 = fVar7;
    local_23c = fVar46;
  }
  if (DAT_146270918 != DAT_146270944) {
    puVar8 = DAT_146270950;
    if (DAT_146270950 == (undefined *)0x0) {
      puVar8 = &DAT_146270948;
    }
    iVar18 = *(int *)(puVar8 + (longlong)(int)(DAT_146270958 - 1U & (uint)fVar7) * 4);
    while (iVar18 != -1) {
      lVar31 = (longlong)iVar18 * 0x88;
      if (*(float *)(lVar31 + DAT_146270910) == fVar7) {
        if ((iVar18 != -1) && (pfVar13 = (float *)(lVar31 + DAT_146270910), pfVar13 != (float *)0x0)
           ) goto LAB_140897424;
        break;
      }
      iVar18 = *(int *)(lVar31 + 0x80 + DAT_146270910);
    }
  }
  local_298 = &local_2ac;
  FUN_14085a580(&DAT_146270910,&local_240,&local_298,0);
  pfVar13 = (float *)((longlong)local_240 * 0x88 + DAT_146270910);
  fVar7 = local_2ac;
  fVar34 = local_2a0[0];
LAB_140897424:
  fVar35 = local_250[0];
  uVar32 = 0;
  fVar48 = local_258._0_4_;
  uVar5 = (float)local_248;
  fVar42 = pfVar13[0x1f];
  lVar31 = (longlong)(int)fVar42;
  fStack_1ec = local_258._0_4_;
  fStack_108 = local_258._0_4_;
  fStack_1dc = local_250[0];
  fStack_f8 = local_250[0];
  uStack_1d4 = (float)local_248;
  local_f0 = (float)local_248;
  uVar27 = uVar32;
  pfVar24 = pfVar13;
  if (0 < (int)fVar42) {
    do {
      pfVar24 = pfVar24 + 10;
      if (fVar46 < *pfVar24 || fVar46 == *pfVar24) break;
      uVar27 = uVar27 + 1;
      uVar19 = (int)uVar32 + 1;
      uVar32 = (ulonglong)uVar19;
    } while ((int)uVar19 < (int)fVar42);
  }
  if ((longlong)uVar27 < lVar31) {
    pfVar24 = pfVar13 + lVar31 * 10 + 1;
    lVar31 = lVar31 - uVar27;
    do {
      *(undefined8 *)pfVar24 = *(undefined8 *)(pfVar24 + -10);
      *(undefined8 *)(pfVar24 + 2) = *(undefined8 *)(pfVar24 + -8);
      *(undefined8 *)(pfVar24 + 4) = *(undefined8 *)(pfVar24 + -6);
      *(undefined8 *)(pfVar24 + 6) = *(undefined8 *)(pfVar24 + -4);
      *(undefined8 *)(pfVar24 + 8) = *(undefined8 *)(pfVar24 + -2);
      pfVar24 = pfVar24 + -10;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
  }
  *(ulonglong *)(pfVar13 + uVar27 * 10 + 1) = CONCAT44(fVar7,fVar34);
  *(ulonglong *)(pfVar13 + uVar27 * 10 + 1 + 2) = CONCAT44(fVar7,local_258._0_4_);
  pfVar24 = pfVar13 + uVar27 * 10 + 5;
  *pfVar24 = fVar30;
  pfVar24[1] = fVar34;
  pfVar24[2] = local_250[0];
  pfVar24[3] = fVar34;
  *(ulonglong *)(pfVar13 + uVar27 * 10 + 9) = CONCAT44(fVar46,(float)local_248);
  pfVar13[0x1f] = (float)((int)pfVar13[0x1f] + 1);
  local_1f0 = fVar7;
  local_1e8 = fVar7;
  fStack_1e4 = fVar30;
  local_1e0 = fVar34;
  local_1d8 = fVar34;
  if (DAT_146270918 != DAT_146270944) {
    puVar8 = DAT_146270950;
    if (DAT_146270950 == (undefined *)0x0) {
      puVar8 = &DAT_146270948;
    }
    iVar18 = *(int *)(puVar8 + (longlong)(int)(DAT_146270958 - 1U & (uint)local_2a0[0]) * 4);
    while (iVar18 != -1) {
      lVar31 = (longlong)iVar18 * 0x88;
      if (*(float *)(lVar31 + DAT_146270910) == local_2a0[0]) {
        if ((iVar18 != -1) && (pfVar13 = (float *)(DAT_146270910 + lVar31), pfVar13 != (float *)0x0)
           ) goto LAB_1408975c6;
        break;
      }
      iVar18 = *(int *)(lVar31 + 0x80 + DAT_146270910);
    }
  }
  local_298 = local_2a0;
  local_110 = fVar34;
  fStack_10c = fVar7;
  fStack_104 = fVar7;
  fStack_100 = fVar30;
  fStack_fc = fVar34;
  fStack_f4 = fVar34;
  fStack_ec = fVar46;
  FUN_14085a580(&DAT_146270910,&local_2b0,&local_298,0);
  pfVar13 = (float *)((longlong)(int)local_2b0 * 0x88 + DAT_146270910);
LAB_1408975c6:
  lVar22 = 0;
  local_110 = local_2ac;
  fStack_104 = local_2a0[0];
  fStack_100 = (float)uVar5;
  fStack_10c = local_2a0[0];
  fStack_108 = fVar35;
  fVar42 = pfVar13[0x1f];
  lVar31 = (longlong)(int)fVar42;
  local_238 = (float *)CONCAT44(fVar48,local_2ac);
  local_230 = (float *)CONCAT44(fVar30,local_2ac);
  fStack_fc = local_2ac;
  fStack_f8 = fVar48;
  iVar18 = 0;
  fStack_f4 = local_2ac;
  pfVar24 = pfVar13;
  if (0 < (int)fVar42) {
    do {
      pfVar24 = pfVar24 + 10;
      if (fVar46 < *pfVar24 || fVar46 == *pfVar24) break;
      lVar22 = lVar22 + 1;
      iVar18 = iVar18 + 1;
    } while (iVar18 < (int)fVar42);
  }
  if (lVar22 < lVar31) {
    pfVar24 = pfVar13 + lVar31 * 10 + 1;
    lVar31 = lVar31 - lVar22;
    do {
      *(undefined8 *)pfVar24 = *(undefined8 *)(pfVar24 + -10);
      *(undefined8 *)(pfVar24 + 2) = *(undefined8 *)(pfVar24 + -8);
      *(undefined8 *)(pfVar24 + 4) = *(undefined8 *)(pfVar24 + -6);
      *(undefined8 *)(pfVar24 + 6) = *(undefined8 *)(pfVar24 + -4);
      *(undefined8 *)(pfVar24 + 8) = *(undefined8 *)(pfVar24 + -2);
      pfVar24 = pfVar24 + -10;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
  }
  *(ulonglong *)(pfVar13 + lVar22 * 10 + 1) = CONCAT44(local_2a0[0],local_2ac);
  *(ulonglong *)(pfVar13 + lVar22 * 10 + 1 + 2) = CONCAT44(local_2a0[0],fVar35);
  *(ulonglong *)(pfVar13 + lVar22 * 10 + 5) = CONCAT44(local_2ac,uVar5);
  *(ulonglong *)(pfVar13 + lVar22 * 10 + 5 + 2) = CONCAT44(local_2ac,fVar48);
  *(ulonglong *)(pfVar13 + lVar22 * 10 + 9) = CONCAT44(fVar46,fVar30);
  pfVar13[0x1f] = (float)((int)pfVar13[0x1f] + 1);
  lVar31 = DAT_146270910;
  fVar42 = DAT_14652d64c;
  fVar7 = local_2ac;
  local_1d0 = local_2a0[0];
  fStack_1cc = fVar35;
  local_1c8 = local_2a0[0];
  uStack_1c4 = uVar5;
  local_f0 = fVar30;
  fStack_ec = fVar46;
LAB_14089674a:
  fVar30 = (float)((int)fVar30 + 1);
  local_1f8 = local_1f8 + 1;
  param_1 = local_268;
  if (2 < (int)fVar30) goto LAB_14089676c;
  goto LAB_140896620;
joined_r0x0001408979f4:
  if (iVar12 == -1) goto LAB_140897a1d;
  if (iVar12 == iVar21) {
    *puVar16 = *(undefined4 *)(DAT_146860550 + 4 + lVar31 * 0xc);
    goto LAB_140897a1d;
  }
  lVar22 = (longlong)iVar12 * 3 + 1;
  iVar12 = *(int *)(DAT_146860550 + lVar22 * 4);
  puVar16 = (undefined4 *)(DAT_146860550 + lVar22 * 4);
  goto joined_r0x0001408979f4;
LAB_140897a1d:
  TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(&DAT_146860550,iVar21,1);
LAB_140897a54:
  if (DAT_146860558 != DAT_146860584) {
    puVar8 = DAT_146860590;
    if (DAT_146860590 == (undefined *)0x0) {
      puVar8 = &DAT_146860588;
    }
    iVar21 = *(int *)(puVar8 + (longlong)(int)((uint)fVar42 & DAT_146860598 - 1) * 4);
    while (iVar21 != -1) {
      lVar31 = (longlong)iVar21;
      if (*(float *)(DAT_146860550 + lVar31 * 0xc) == fVar42) {
        lVar22 = (longlong)(int)(*(uint *)(DAT_146860550 + 8 + lVar31 * 0xc) & DAT_146860598 - 1);
        puVar16 = (undefined4 *)(puVar8 + lVar22 * 4);
        iVar12 = *(int *)(puVar8 + lVar22 * 4);
        goto joined_r0x000140897ac0;
      }
      iVar21 = *(int *)(DAT_146860550 + 4 + lVar31 * 0xc);
    }
  }
LAB_140897afe:
  pfVar13 = local_228;
  piVar15 = local_258;
  iVar21 = (int)local_228[0x1f];
  pfVar24 = local_230;
  uVar32 = uVar27;
  uVar17 = uVar27;
  if (0 < iVar21) {
LAB_140897b14:
    uVar19 = (int)uVar32 + 1;
    uVar32 = (ulonglong)uVar19;
    if (*pfVar24 != fVar42) goto code_r0x000140897b1e;
    if ((int)uVar19 < iVar21) {
      piVar9 = (int *)(local_228 + (uVar17 + 1) * 10 + 1);
      do {
        uVar19 = (int)uVar32 + 1;
        uVar32 = (ulonglong)uVar19;
        *(undefined8 *)(piVar9 + -10) = *(undefined8 *)piVar9;
        *(undefined8 *)(piVar9 + -8) = *(undefined8 *)(piVar9 + 2);
        *(undefined8 *)(piVar9 + -6) = *(undefined8 *)(piVar9 + 4);
        *(undefined8 *)(piVar9 + -4) = *(undefined8 *)(piVar9 + 6);
        *(undefined8 *)(piVar9 + -2) = *(undefined8 *)(piVar9 + 8);
        piVar9 = piVar9 + 10;
        iVar21 = (int)local_228[0x1f];
      } while ((int)uVar19 < iVar21);
    }
    local_228[0x1f] = (float)(iVar21 + -1);
  }
LAB_140897b6d:
  iVar21 = local_258[0x1f];
  pfVar24 = local_238;
  uVar32 = uVar27;
  uVar17 = uVar27;
  if (0 < iVar21) {
LAB_140897b82:
    uVar19 = (int)uVar32 + 1;
    uVar32 = (ulonglong)uVar19;
    if (*pfVar24 != fVar29) goto code_r0x000140897b8d;
    if ((int)uVar19 < iVar21) {
      piVar9 = local_258 + (uVar17 + 1) * 10 + 1;
      do {
        uVar19 = (int)uVar32 + 1;
        uVar32 = (ulonglong)uVar19;
        *(undefined8 *)(piVar9 + -10) = *(undefined8 *)piVar9;
        *(undefined8 *)(piVar9 + -8) = *(undefined8 *)(piVar9 + 2);
        *(undefined8 *)(piVar9 + -6) = *(undefined8 *)(piVar9 + 4);
        *(undefined8 *)(piVar9 + -4) = *(undefined8 *)(piVar9 + 6);
        *(undefined8 *)(piVar9 + -2) = *(undefined8 *)(piVar9 + 8);
        piVar9 = piVar9 + 10;
        iVar21 = local_258[0x1f];
      } while ((int)uVar19 < iVar21);
    }
    local_258[0x1f] = iVar21 + -1;
  }
LAB_140897bdb:
  if (*(int *)(local_210 + 0x38) < DAT_1468605b8) {
    _Init_thread_header(&DAT_1468605b8);
    if (DAT_1468605b8 == -1) {
      atexit((_func_5014 *)&LAB_143e42300);
      _Init_thread_footer(&DAT_1468605b8);
    }
  }
  DAT_1468605b0 = 0;
  if (DAT_1468605b4 < 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_1468605a8,0);
  }
  if (0 < (int)pfVar13[0x1f]) {
    pfVar11 = (float *)0x0;
    lVar31 = DAT_146270910;
    pfVar24 = local_230;
    do {
      fVar42 = *pfVar24;
      if (DAT_146270918 != DAT_146270944) {
        puVar8 = DAT_146270950;
        if (DAT_146270950 == (undefined *)0x0) {
          puVar8 = &DAT_146270948;
        }
        iVar18 = *(int *)(puVar8 + (longlong)(int)(DAT_146270958 - 1U & (uint)fVar42) * 4);
        while (iVar18 != -1) {
          lVar22 = (longlong)iVar18 * 0x88;
          if (*(float *)(lVar22 + lVar31) == fVar42) {
            pfVar10 = (float *)(lVar31 + lVar22);
            if (iVar18 != -1) goto LAB_140897cab;
            break;
          }
          iVar18 = *(int *)(lVar22 + 0x80 + lVar31);
        }
      }
      pfVar10 = pfVar11;
LAB_140897cab:
      pfVar26 = pfVar10 + 1;
      if (pfVar10 == (float *)0x0) {
        pfVar26 = pfVar11;
      }
      local_2b0 = fVar42;
      if (pfVar26 != (float *)0x0) {
        fVar7 = pfVar26[0x1e];
        pfVar10 = pfVar26;
        pfVar20 = pfVar11;
        pfVar25 = pfVar11;
        if (0 < (int)fVar7) {
LAB_140897cd0:
          uVar19 = (int)pfVar20 + 1;
          pfVar20 = (float *)(ulonglong)uVar19;
          if (*pfVar10 != fVar29) goto code_r0x000140897cdb;
          if ((int)uVar19 < (int)fVar7) {
            pfVar10 = pfVar26 + ((longlong)pfVar25 + 1) * 10;
            do {
              uVar19 = (int)pfVar20 + 1;
              pfVar20 = (float *)(ulonglong)uVar19;
              *(undefined8 *)(pfVar10 + -10) = *(undefined8 *)pfVar10;
              *(undefined8 *)(pfVar10 + -8) = *(undefined8 *)(pfVar10 + 2);
              *(undefined8 *)(pfVar10 + -6) = *(undefined8 *)(pfVar10 + 4);
              *(undefined8 *)(pfVar10 + -4) = *(undefined8 *)(pfVar10 + 6);
              *(undefined8 *)(pfVar10 + -2) = *(undefined8 *)(pfVar10 + 8);
              pfVar10 = pfVar10 + 10;
              fVar7 = pfVar26[0x1e];
            } while ((int)uVar19 < (int)fVar7);
          }
          fVar7 = (float)((int)fVar7 + -1);
          pfVar26[0x1e] = fVar7;
LAB_140897d1e:
          if ((int)fVar7 < 1) goto LAB_140897d3d;
          FUN_14085a180(&DAT_146860550,&local_298,&local_2b0,0);
          lVar31 = DAT_146270910;
          goto LAB_140897d74;
        }
LAB_140897d3d:
        iVar18 = DAT_1468605b0;
        lVar31 = (longlong)DAT_1468605b0;
        DAT_1468605b0 = DAT_1468605b0 + 1;
        if (DAT_1468605b4 < DAT_1468605b0) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_1468605a8,iVar18);
        }
        DAT_1468605a8[lVar31] = fVar42;
        lVar31 = DAT_146270910;
      }
LAB_140897d74:
      uVar19 = (int)uVar27 + 1;
      uVar27 = (ulonglong)uVar19;
      pfVar24 = pfVar24 + 10;
    } while ((int)uVar19 < (int)pfVar13[0x1f]);
    piVar15 = local_258;
    iVar18 = local_260;
    fVar42 = (float)local_248;
  }
  iVar21 = DAT_1468605b0;
  lVar31 = (longlong)DAT_1468605b0;
  DAT_1468605b0 = DAT_1468605b0 + 1;
  if (DAT_1468605b4 < DAT_1468605b0) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_1468605a8,iVar21);
  }
  DAT_1468605a8[lVar31] = fVar29;
  pfVar24 = (float *)0x0;
  lVar31 = DAT_146270910;
  pfVar13 = local_238;
  iVar21 = 0;
  if (0 < piVar15[0x1f]) {
    do {
      fVar29 = *pfVar13;
      if (DAT_146270918 != DAT_146270944) {
        puVar8 = DAT_146270950;
        if (DAT_146270950 == (undefined *)0x0) {
          puVar8 = &DAT_146270948;
        }
        iVar18 = *(int *)(puVar8 + (longlong)(int)(DAT_146270958 - 1U & (uint)fVar29) * 4);
        while (iVar18 != -1) {
          lVar22 = (longlong)iVar18 * 0x88;
          if (*(float *)(lVar22 + lVar31) == fVar29) {
            pfVar11 = (float *)(lVar22 + lVar31);
            if (iVar18 != -1) goto LAB_140897e5b;
            break;
          }
          iVar18 = *(int *)(lVar22 + 0x80 + lVar31);
        }
      }
      pfVar11 = pfVar24;
LAB_140897e5b:
      pfVar10 = pfVar11 + 1;
      if (pfVar11 == (float *)0x0) {
        pfVar10 = pfVar24;
      }
      local_2b0 = fVar29;
      if (pfVar10 != (float *)0x0) {
        fVar7 = pfVar10[0x1e];
        pfVar11 = pfVar10;
        pfVar26 = pfVar24;
        iVar18 = 0;
        if (0 < (int)fVar7) {
LAB_140897e80:
          iVar18 = iVar18 + 1;
          if (*pfVar11 != fVar42) goto code_r0x000140897e8a;
          if (iVar18 < (int)fVar7) {
            pfVar11 = pfVar10 + ((longlong)pfVar26 + 1) * 10;
            do {
              iVar18 = iVar18 + 1;
              *(undefined8 *)(pfVar11 + -10) = *(undefined8 *)pfVar11;
              *(undefined8 *)(pfVar11 + -8) = *(undefined8 *)(pfVar11 + 2);
              *(undefined8 *)(pfVar11 + -6) = *(undefined8 *)(pfVar11 + 4);
              *(undefined8 *)(pfVar11 + -4) = *(undefined8 *)(pfVar11 + 6);
              *(undefined8 *)(pfVar11 + -2) = *(undefined8 *)(pfVar11 + 8);
              pfVar11 = pfVar11 + 10;
              fVar7 = pfVar10[0x1e];
            } while (iVar18 < (int)fVar7);
          }
          fVar7 = (float)((int)fVar7 + -1);
          pfVar10[0x1e] = fVar7;
LAB_140897ecd:
          if ((int)fVar7 < 1) goto LAB_140897eeb;
          FUN_14085a180(&DAT_146860550,local_250,&local_2b0,0);
          lVar31 = DAT_146270910;
          goto LAB_140897f26;
        }
LAB_140897eeb:
        iVar18 = DAT_1468605b0;
        lVar31 = (longlong)DAT_1468605b0;
        DAT_1468605b0 = DAT_1468605b0 + 1;
        if (DAT_1468605b4 < DAT_1468605b0) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_1468605a8,iVar18);
        }
        DAT_1468605a8[lVar31] = fVar29;
        piVar15 = local_258;
        lVar31 = DAT_146270910;
      }
LAB_140897f26:
      iVar21 = iVar21 + 1;
      pfVar13 = pfVar13 + 10;
      iVar18 = local_260;
    } while (iVar21 < piVar15[0x1f]);
  }
  iVar21 = DAT_1468605b0;
  lVar31 = (longlong)DAT_1468605b0;
  DAT_1468605b0 = DAT_1468605b0 + 1;
  if (DAT_1468605b4 < DAT_1468605b0) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_1468605a8,iVar21);
  }
  DAT_1468605a8[lVar31] = fVar42;
  pfVar13 = (float *)((longlong)DAT_1468605b0 & 0x3fffffffffffffff);
  if (DAT_1468605a8 + DAT_1468605b0 < DAT_1468605a8) {
    pfVar13 = pfVar24;
  }
  pfVar11 = DAT_1468605a8;
  if (pfVar13 != (float *)0x0) {
LAB_140897fb0:
    fVar29 = *pfVar11;
    local_2b0 = fVar29;
    TSet<TTuple<FPolygonID,`UEditableMesh::QuadrangulatePolygonGroup'::`2'::FAdjacentPolygons>,TDefaultMapHashableKeyFuncs<FPolygonID,`UEditableMesh::QuadrangulatePolygonGroup'::`2'::FAdjacentPolygons,0>,FDefaultSetAllocator>
    ::Remove(&DAT_146270910,&local_2b0);
    if (DAT_146860558 != DAT_146860584) {
      puVar8 = DAT_146860590;
      if (DAT_146860590 == (undefined *)0x0) {
        puVar8 = &DAT_146860588;
      }
      iVar21 = *(int *)(puVar8 + (longlong)(int)((uint)fVar29 & DAT_146860598 - 1) * 4);
      while (iVar21 != -1) {
        lVar31 = (longlong)iVar21;
        if (*(float *)(DAT_146860550 + lVar31 * 0xc) == fVar29) {
          lVar22 = (longlong)(int)(*(uint *)(DAT_146860550 + 8 + lVar31 * 0xc) & DAT_146860598 - 1);
          puVar16 = (undefined4 *)(puVar8 + lVar22 * 4);
          iVar12 = *(int *)(puVar8 + lVar22 * 4);
          goto joined_r0x000140898040;
        }
        iVar21 = *(int *)(DAT_146860550 + 4 + lVar31 * 0xc);
      }
    }
    goto LAB_14089807b;
  }
LAB_14089808b:
  fVar29 = DAT_14652d64c;
  uVar27 = 0;
  local_288 = 0.0;
  fStack_284 = 1.4013e-45;
  puStack_280 = &DAT_146860560;
  local_278._0_4_ = -NAN;
  local_278._4_4_ = 0.0;
  fStack_270 = 0.0;
  if (DAT_146860578 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_288);
  }
  iVar21 = DAT_146860578;
  uStack_148 = CONCAT44(local_278._4_4_,(float)local_278);
  local_140 = CONCAT44(fStack_26c,fStack_270);
  uStack_130 = CONCAT44(fStack_284,local_288);
  puStack_128 = puStack_280;
  local_278._0_4_ = (float)(-1 << ((byte)DAT_146860578 & 0x1f));
  local_138 = &DAT_146860550;
  local_278._4_4_ = (float)DAT_146860578;
  local_160 = 0x46860550;
  uStack_15c = 1;
  fStack_158 = local_288;
  fStack_154 = fStack_284;
  local_150 = puStack_280;
  uStack_120 = uStack_148;
  uStack_118 = local_140;
  while( true ) {
    if (((uStack_148._4_4_ == iVar21) && (local_150 == &DAT_146860560)) &&
       ((longlong *)CONCAT44(uStack_15c,local_160) == &DAT_146860550)) break;
    local_2b0 = *(float *)(*(longlong *)CONCAT44(uStack_15c,local_160) +
                          (longlong)uStack_148._4_4_ * 0xc);
    TSet<TTuple<FPolygonID,`UEditableMesh::QuadrangulatePolygonGroup'::`2'::FAdjacentPolygons>,TDefaultMapHashableKeyFuncs<FPolygonID,`UEditableMesh::QuadrangulatePolygonGroup'::`2'::FAdjacentPolygons,0>,FDefaultSetAllocator>
    ::FindId(&DAT_146270910,&local_240,&local_2b0);
    uVar32 = uVar27;
    if (local_240 != -1) {
      uVar32 = (longlong)local_240 * 0x88 + DAT_146270910;
    }
    if (*(float *)(uVar32 + 0x28) <= 3.4028235e+38 && *(float *)(uVar32 + 0x28) != 3.4028235e+38) {
      fVar29 = *(float *)(uVar32 + 4);
    }
    uStack_148 = CONCAT44(uStack_148._4_4_,(uint)uStack_148 & ~(uint)fStack_154);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&fStack_158);
  }
  if (fVar29 == DAT_14652d64c) {
    DAT_146860558 = 0;
    if ((DAT_14686055c < 0) && (DAT_14686055c != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (&DAT_146860550,0);
    }
    _DAT_146860580 = 0xffffffff;
    DAT_146860584 = 0;
    puVar8 = DAT_146860570;
    if (DAT_146860570 == (undefined *)0x0) {
      puVar8 = &DAT_146860560;
    }
    _guard_xfg_dispatch_icall_nop
              (puVar8,0,(longlong)
                        ((int)(DAT_146860578 + 0x1f + (DAT_146860578 + 0x1f >> 0x1f & 0x1fU)) >> 5)
                        << 2);
    DAT_146860578 = 0;
    if (0 < (int)DAT_146860598) {
      uVar32 = (ulonglong)DAT_146860598;
      do {
        puVar8 = DAT_146860590;
        if (DAT_146860590 == (undefined *)0x0) {
          puVar8 = &DAT_146860588;
        }
        uVar17 = (longlong)(int)(DAT_146860598 - 1) & uVar27;
        uVar27 = uVar27 + 1;
        *(undefined4 *)(puVar8 + uVar17 * 4) = 0xffffffff;
        uVar32 = uVar32 - 1;
      } while (uVar32 != 0);
    }
    local_288 = 0.0;
    fStack_284 = 1.4013e-45;
    puStack_280 = &DAT_146270920;
    local_278._0_4_ = -NAN;
    local_278._4_4_ = 0.0;
    fStack_270 = 0.0;
    if ((int)DAT_146270938 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_288);
    }
    uStack_120 = CONCAT44(local_278._4_4_,(float)local_278);
    uStack_118 = CONCAT44(fStack_26c,fStack_270);
    fVar7 = (float)DAT_146270938;
    uStack_130 = CONCAT44(fStack_284,local_288);
    local_138 = &DAT_146270910;
    puStack_128 = puStack_280;
    local_110 = 10690.266;
    fStack_10c = 1.4013e-45;
    fStack_108 = local_288;
    fStack_104 = fStack_284;
    fStack_100 = SUB84(puStack_280,0);
    fStack_fc = (float)((ulonglong)puStack_280 >> 0x20);
    fStack_f8 = (float)local_278;
    fStack_f4 = local_278._4_4_;
    local_f0 = fStack_270;
    fStack_ec = fStack_26c;
    fVar42 = 3.4028235e+38;
    local_278._0_4_ = (float)(-1 << ((byte)DAT_146270938 & 0x1f));
    local_278._4_4_ = fVar7;
    while( true ) {
      if (((fStack_f4 == fVar7) && ((undefined *)CONCAT44(fStack_fc,fStack_100) == &DAT_146270920))
         && ((longlong *)CONCAT44(fStack_10c,local_110) == &DAT_146270910)) break;
      pfVar13 = (float *)((longlong)(int)fStack_f4 * 0x88 +
                         *(longlong *)CONCAT44(fStack_10c,local_110));
      fVar30 = pfVar13[10];
      if (fVar30 < fVar42) {
        fVar29 = *pfVar13;
      }
      fStack_f8 = (float)((uint)fStack_f8 & ~(uint)fStack_104);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&fStack_108);
      if (fVar30 <= fVar42) {
        fVar42 = fVar30;
      }
    }
    if (fVar29 == DAT_14652d64c) {
      if ((*(int *)(local_210 + 0x38) < DAT_1468605d0) &&
         (_Init_thread_header(&DAT_1468605d0), DAT_1468605d0 == -1)) {
        atexit((_func_5014 *)&LAB_143e429a0);
        _Init_thread_footer(&DAT_1468605d0);
      }
      FUN_140879f40(local_268,&DAT_146860520,local_1a0,&DAT_1468605c0);
      local_2c0 = 0;
      local_2c8 = 1;
      FUN_14087cad0(local_268,&DAT_146860538,1,0);
      return;
    }
  }
  goto LAB_140896850;
joined_r0x000140897ac0:
  if (iVar12 == -1) goto LAB_140897ae9;
  if (iVar12 == iVar21) {
    *puVar16 = *(undefined4 *)(DAT_146860550 + 4 + lVar31 * 0xc);
    goto LAB_140897ae9;
  }
  lVar22 = (longlong)iVar12 * 3 + 1;
  iVar12 = *(int *)(DAT_146860550 + lVar22 * 4);
  puVar16 = (undefined4 *)(DAT_146860550 + lVar22 * 4);
  goto joined_r0x000140897ac0;
LAB_140897ae9:
  TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(&DAT_146860550,iVar21,1);
  goto LAB_140897afe;
code_r0x000140897b1e:
  pfVar24 = pfVar24 + 10;
  uVar17 = uVar17 + 1;
  if (iVar21 <= (int)uVar19) goto LAB_140897b6d;
  goto LAB_140897b14;
code_r0x000140897b8d:
  pfVar24 = pfVar24 + 10;
  uVar17 = uVar17 + 1;
  if (iVar21 <= (int)uVar19) goto LAB_140897bdb;
  goto LAB_140897b82;
code_r0x000140897cdb:
  pfVar10 = pfVar10 + 10;
  pfVar25 = (float *)((longlong)pfVar25 + 1);
  if ((int)fVar7 <= (int)uVar19) goto LAB_140897d1e;
  goto LAB_140897cd0;
code_r0x000140897e8a:
  pfVar11 = pfVar11 + 10;
  pfVar26 = (float *)((longlong)pfVar26 + 1);
  if ((int)fVar7 <= iVar18) goto LAB_140897ecd;
  goto LAB_140897e80;
joined_r0x000140898040:
  if (iVar12 == -1) goto LAB_140898069;
  if (iVar12 == iVar21) {
    *puVar16 = *(undefined4 *)(DAT_146860550 + 4 + lVar31 * 0xc);
    goto LAB_140898069;
  }
  lVar22 = (longlong)iVar12 * 3 + 1;
  iVar12 = *(int *)(DAT_146860550 + lVar22 * 4);
  puVar16 = (undefined4 *)(DAT_146860550 + lVar22 * 4);
  goto joined_r0x000140898040;
LAB_140898069:
  TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(&DAT_146860550,iVar21,1);
LAB_14089807b:
  pfVar24 = (float *)((longlong)pfVar24 + 1);
  pfVar11 = pfVar11 + 1;
  if (pfVar24 == pfVar13) goto LAB_14089808b;
  goto LAB_140897fb0;
}



// FUNCTION 1408985f0 FUN_1408985f0 body=2035 status=ok
// SIG undefined FUN_1408985f0(void)

void FUN_1408985f0(longlong param_1)

{
  longlong **pplVar1;
  float fVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  int *piVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *plStack_1b0;
  uint local_1a8;
  uint uStack_1a4;
  uint *puStack_1a0;
  undefined4 local_198;
  uint uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  ulonglong uStack_180;
  undefined8 uStack_178;
  float fStack_170;
  uint uStack_16c;
  undefined8 uStack_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  longlong local_118;
  uint uStack_110;
  uint uStack_10c;
  uint *local_108;
  float fStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  undefined8 local_e4;
  float local_dc;
  longlong local_c8;
  uint local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  
  pplVar1 = (longlong **)(param_1 + 0xf70);
  plVar14 = (longlong *)0x0;
  local_1b8 = (longlong *)0x0;
  plStack_1b0 = (longlong *)0x0;
  if (pplVar1 != &local_1b8) {
    *pplVar1 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf78,&plStack_1b0);
    plVar11 = plStack_1b0;
    if (plStack_1b0 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_1b0 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_1b0)(plStack_1b0);
        LOCK();
        piVar17 = (int *)((longlong)plVar11 + 0xc);
        iVar8 = *piVar17;
        *piVar17 = *piVar17 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_1b0 + 8))(plStack_1b0,1);
        }
      }
    }
  }
  FUN_14089dba0(param_1 + 0xf80);
  TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Reset(param_1 + 0x1020);
  TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Reset(param_1 + 0xfd0);
  if (*(char *)(param_1 + 0xf68) != '\0') {
    iVar8 = (**(code **)(*DAT_14685f170 + 0x68))();
    if (iVar8 == 0) {
      FUN_140876d60(param_1,&local_138);
      fVar26 = (local_134 + local_128) * 0.5;
      fVar25 = (local_138 + local_12c) * 0.5;
      fVar23 = ABS((local_12c - local_138) * 0.5);
      fVar24 = ABS((local_128 - local_134) * 0.5);
      fVar27 = (local_130 + local_124) * 0.5;
      if (fVar23 <= fVar24) {
        fVar23 = fVar24;
      }
      fVar24 = ABS((local_124 - local_130) * 0.5);
      if (fVar24 <= fVar23) {
        fVar24 = fVar23;
      }
    }
    else {
      fVar24 = 1048576.0;
      fVar25 = DAT_1468b5d90;
      fVar26 = DAT_1468b5d94;
      fVar27 = DAT_1468b5d98;
    }
    plVar9 = (longlong *)operator_new(0x1d0);
    plVar11 = plVar14;
    if (plVar9 != (longlong *)0x0) {
      plVar9[0x24] = 0;
      uVar13 = 0;
      plVar9[0x26] = 0;
      plVar9[0x28] = 0;
      *(undefined4 *)(plVar9 + 0x31) = 0x80000000;
      do {
        plVar9[(ulonglong)(uVar13 & 7) + 0x29] = 0;
        if (((byte)uVar13 & 7) < 7) {
          uVar13 = uVar13 ^ (uVar13 + 1 ^ uVar13) & 7;
        }
        else {
          uVar13 = uVar13 | 8;
        }
      } while (uVar13 >> 3 == 0);
      plVar9[0x37] = 0;
      *(float *)(plVar9 + 0x32) = fVar25;
      *(float *)((longlong)plVar9 + 0x194) = fVar26;
      *(float *)(plVar9 + 0x33) = fVar27;
      *(undefined4 *)((longlong)plVar9 + 0x19c) = 0;
      *(float *)(plVar9 + 0x34) = fVar24;
      *(float *)((longlong)plVar9 + 0x1a4) = fVar24;
      *(float *)(plVar9 + 0x35) = fVar24;
      *(undefined4 *)((longlong)plVar9 + 0x1ac) = 0;
      uStack_14c = 0;
      uStack_13c = 0;
      *(float *)(plVar9 + 0x36) = fVar24 * 0.53125;
      *(float *)((longlong)plVar9 + 0x1b4) = fVar24 - fVar24 * 0.53125;
      *(float *)(plVar9 + 0x38) = fVar24 * 3.2061132e-06;
      plVar9[0x39] = 0;
      plVar11 = plVar9;
      local_158 = fVar25;
      fStack_154 = fVar26;
      fStack_150 = fVar27;
      local_148 = fVar24;
      fStack_144 = fVar24;
      fStack_140 = fVar24;
    }
    plVar10 = (longlong *)operator_new(0x18);
    plVar9 = plVar14;
    if (plVar10 != (longlong *)0x0) {
      *(undefined4 *)(plVar10 + 1) = 1;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_DestroyObject_144116328;
      plVar10[2] = (longlong)plVar11;
      plVar9 = plVar10;
    }
    local_1c8 = plVar11;
    local_1c0 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_1c8,plVar11,plVar11);
    if (pplVar1 != &local_1c8) {
      *pplVar1 = plVar11;
      local_1c8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf78,&local_1c0);
      plVar9 = local_1c0;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar9 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar17 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar17;
        *piVar17 = *piVar17 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x28);
    plVar11 = (longlong *)FUN_140860830(lVar5 + 0x118,DAT_146aedad0,0);
    lVar7 = lVar5 + 0xa8;
    uVar13 = *(uint *)(lVar5 + 0xd0);
    puStack_1a0 = (uint *)(lVar5 + 0xb8);
    uStack_1a4 = 1;
    local_1a8 = 0;
    uStack_194 = 0;
    uStack_190 = 0;
    if (uVar13 != 0) {
      puVar19 = *(uint **)(lVar5 + 200);
      if (*(uint **)(lVar5 + 200) == (uint *)0x0) {
        puVar19 = puStack_1a0;
      }
      uVar4 = *puVar19;
      plVar9 = plVar14;
      while (uVar4 == 0) {
        iVar8 = (int)plVar14;
        uStack_190 = (int)plVar9 + 0x20;
        plVar9 = (longlong *)(ulonglong)uStack_190;
        local_1a8 = iVar8 + 1;
        plVar14 = (longlong *)(ulonglong)local_1a8;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_140898a4e;
        uVar4 = puVar19[(longlong)iVar8 + 1];
      }
      uStack_1a4 = uVar4 - 1 & uVar4 ^ uVar4;
      iVar8 = 0x1f;
      if (uStack_1a4 != 0) {
        for (; uStack_1a4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_1a4 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_194 = (uStack_190 - iVar8) + 0x1f;
      if ((int)uVar13 < (int)uStack_194) {
LAB_140898a4e:
        uStack_194 = uVar13;
      }
    }
    local_198 = 0xffffffff;
    uVar13 = *(uint *)(lVar5 + 0xd0);
    uStack_180 = CONCAT44(uStack_1a4,local_1a8);
    uVar4 = *(uint *)(lVar5 + 0xd0);
    fStack_100 = -NAN;
    uStack_fc = uStack_194;
    uStack_168 = CONCAT44(uStack_18c,uStack_190);
    uVar18 = uVar13 & 0xffffffe0;
    uStack_110 = local_1a8;
    uStack_10c = uStack_1a4;
    if (uVar13 != uVar4) {
      lVar21 = *(longlong *)(lVar5 + 200);
      if (*(longlong *)(lVar5 + 200) == 0) {
        lVar21 = lVar5 + 0xb8;
      }
      uVar15 = *(uint *)(lVar21 + (longlong)((int)uVar13 >> 5) * 4) & -1 << ((byte)uVar13 & 0x1f);
      iVar8 = (int)uVar13 >> 5;
      while (uVar15 == 0) {
        uVar18 = uVar18 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_140898b18;
        uVar15 = *(uint *)(lVar21 + 4 + (longlong)iVar8 * 4);
        iVar8 = iVar8 + 1;
      }
      uVar15 = uVar15 - 1 & uVar15 ^ uVar15;
      iVar8 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar15 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uVar13 = (uVar18 - iVar8) + 0x1f;
      if ((int)uVar4 < (int)uVar13) {
LAB_140898b18:
        uVar13 = uVar4;
      }
    }
    uVar16 = (ulonglong)_tls_index;
    local_188 = lVar7;
    uStack_178 = puStack_1a0;
    local_108 = puStack_1a0;
    local_f8 = uStack_168;
    local_118 = lVar7;
    fStack_170 = fStack_100;
    uStack_16c = uStack_fc;
    while (((fVar23 = DAT_1468b5d98, fVar26 = DAT_1468b5d94, fVar25 = DAT_1468b5d90,
            uStack_fc != uVar13 || (local_108 != (uint *)(lVar5 + 0xb8))) || (local_118 != lVar7)))
    {
      uVar4 = DAT_14652d64c;
      if ((int)uStack_fc < (int)local_108[6]) {
        uVar4 = uStack_fc;
      }
      bVar6 = false;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar16 * 8) + 0x38) <
          DAT_146860600) {
        _Init_thread_header(&DAT_146860600);
        if (DAT_146860600 == -1) {
          atexit((_func_5014 *)&LAB_143e43ba0);
          _Init_thread_footer(&DAT_146860600);
        }
      }
      FMeshDescription::GetPolygonPerimeterVertices
                (*(undefined8 *)(param_1 + 0x28),uVar4,&DAT_1468605f0);
      uVar20 = 0;
      uVar22 = (ulonglong)
               ((longlong)(DAT_1468605f0 + DAT_1468605f8) + (3 - (longlong)DAT_1468605f0)) >> 2;
      if (DAT_1468605f0 + DAT_1468605f8 < DAT_1468605f0) {
        uVar22 = uVar20;
      }
      local_b8 = fVar25;
      fStack_b4 = fVar26;
      fStack_b0 = fVar23;
      if (uVar22 != 0) {
        lVar21 = *plVar11;
        piVar17 = DAT_1468605f0;
        do {
          lVar12 = (longlong)*piVar17;
          if (bVar6) {
            fVar27 = *(float *)(lVar21 + lVar12 * 0xc);
            if (fVar27 < local_b8) {
              local_b8 = fVar27;
            }
            fVar24 = *(float *)(lVar21 + 4 + lVar12 * 0xc);
            if (fVar24 < fStack_b4) {
              fStack_b4 = fVar24;
            }
            fVar2 = *(float *)(lVar21 + 8 + lVar12 * 0xc);
            if (fVar2 < fStack_b0) {
              fStack_b0 = fVar2;
            }
            if (fVar25 < fVar27) {
              fVar25 = fVar27;
            }
            if (fVar26 < fVar24) {
              fVar26 = fVar24;
            }
            if (fVar23 < fVar2) {
              fVar23 = fVar2;
            }
          }
          else {
            uVar3 = *(undefined8 *)(lVar21 + lVar12 * 0xc);
            fVar25 = (float)uVar3;
            bVar6 = true;
            fVar23 = *(float *)(lVar21 + 8 + lVar12 * 0xc);
            local_e4._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
            fVar26 = local_e4._4_4_;
            local_b8 = fVar25;
            fStack_b4 = local_e4._4_4_;
            fStack_b0 = fVar23;
            local_e4 = uVar3;
            local_dc = fVar23;
          }
          piVar17 = piVar17 + 1;
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar22);
      }
      plVar14 = *pplVar1;
      local_a8 = (fVar25 - local_b8) * 0.5;
      fStack_a0 = (fVar23 - fStack_b0) * 0.5;
      fStack_a4 = (fVar26 - fStack_b4) * 0.5;
      local_b8 = local_b8 + local_a8;
      plStack_1b0 = (longlong *)CONCAT44(plStack_1b0._4_4_,fStack_a0);
      fStack_b0 = fStack_b0 + fStack_a0;
      uStack_16c = 0;
      fStack_b4 = fStack_b4 + fStack_a4;
      local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,fStack_b0);
      local_188 = CONCAT44(fStack_b4,local_b8);
      uStack_180 = (ulonglong)(uint)fStack_b0;
      uStack_178 = (uint *)CONCAT44(fStack_a4,local_a8);
      uStack_9c = 0;
      uStack_ac = 0;
      local_c8 = param_1;
      local_c0 = uVar4;
      fStack_170 = fStack_a0;
      FUN_140873a00(plVar14,&local_c8,plVar14,plVar14 + 0x32);
      fStack_100 = (float)((uint)fStack_100 & ~uStack_10c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_110);
    }
  }
  return;
}



// FUNCTION 140898df0 FUN_140898df0 body=332 status=ok
// SIG undefined FUN_140898df0(void)

void FUN_140898df0(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x278))();
  uVar4 = 0;
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)param_1[0x1af];
    uVar5 = (longlong)(int)param_1[0x1b0] & 0x1fffffffffffffff;
    if (puVar3 + (int)param_1[0x1b0] < puVar3) {
      uVar5 = uVar4;
    }
    uVar2 = uVar4;
    if (uVar5 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar3 + 0x280))((longlong *)*puVar3,param_1,1);
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 != uVar5);
    }
  }
  puVar3 = (undefined8 *)param_1[0x1af];
  uVar5 = (longlong)(int)param_1[0x1b0] & 0x1fffffffffffffff;
  if (puVar3 + (int)param_1[0x1b0] < puVar3) {
    uVar5 = uVar4;
  }
  uVar2 = uVar4;
  if (uVar5 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar3 + 0x288))((longlong *)*puVar3,param_1);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar5);
  }
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)param_1[0x1af];
    uVar5 = (longlong)(int)param_1[0x1b0] & 0x1fffffffffffffff;
    if (puVar3 + (int)param_1[0x1b0] < puVar3) {
      uVar5 = uVar4;
    }
    if (uVar5 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar3 + 0x290))((longlong *)*puVar3,param_1,1,0);
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 != uVar5);
    }
  }
  return;
}



// FUNCTION 140898f40 FUN_140898f40 body=3769 status=ok
// SIG undefined FUN_140898f40(void)

void FUN_140898f40(longlong param_1)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uint *puVar22;
  uint *puVar23;
  uint local_res8;
  longlong local_288;
  longlong *local_280;
  uint local_278;
  uint uStack_274;
  uint *puStack_270;
  undefined4 local_268;
  int iStack_264;
  uint uStack_260;
  undefined4 uStack_25c;
  uint local_258;
  uint uStack_254;
  uint *puStack_250;
  undefined4 local_248;
  int iStack_244;
  uint uStack_240;
  undefined4 uStack_23c;
  uint local_238;
  uint uStack_234;
  uint *puStack_230;
  undefined4 local_228;
  int iStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  longlong *plStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  uint *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  int local_1e0;
  uint *local_1d8;
  uint local_1d0;
  uint uStack_1cc;
  uint local_1c8;
  int local_1c0;
  uint *local_1b8;
  uint local_1b0;
  uint uStack_1ac;
  uint local_1a8;
  int local_1a0;
  uint *local_198;
  uint local_18c;
  uint local_188;
  int local_180;
  int local_17c;
  int local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  uint uStack_140;
  uint uStack_13c;
  uint *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  uint uStack_118;
  uint uStack_114;
  uint *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  int local_f4;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  int local_9c;
  longlong local_98;
  longlong local_88;
  longlong local_80;
  
  local_218 = 0;
  plStack_210 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xe90) != &local_218) {
    *(undefined8 *)(param_1 + 0xe90) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xe98,&plStack_210);
    plVar9 = plStack_210;
    if (plStack_210 != (longlong *)0x0) {
      LOCK();
      plVar15 = plStack_210 + 1;
      lVar11 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_210)(plStack_210);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plStack_210 + 8))(plStack_210,1);
        }
      }
    }
  }
  plVar9 = (longlong *)0x0;
  if (*(int *)(param_1 + 0xe88) < 1) goto LAB_140899daf;
  FUN_14391ac70(&local_f8);
  lVar11 = *(longlong *)(param_1 + 0x28);
  plVar15 = (longlong *)(param_1 + 0xee0);
  local_f8 = *(undefined4 *)(lVar11 + 8);
  local_f4 = *(int *)(lVar11 + 0xb0) - *(int *)(lVar11 + 0xdc);
  *(undefined4 *)(param_1 + 0xee8) = 0;
  if ((*(int *)(param_1 + 0xeec) < 0) && (*(int *)(param_1 + 0xeec) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar15,0);
  }
  plVar20 = (longlong *)(param_1 + 0xef0);
  *(undefined4 *)(param_1 + 0xef8) = 0;
  if ((*(int *)(param_1 + 0xefc) < 0) && (*(int *)(param_1 + 0xefc) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar20,0);
  }
  lVar11 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar11 + 0x230) != *(int *)(lVar11 + 0x25c)) {
    lVar10 = *(longlong *)(lVar11 + 0x268);
    if (*(longlong *)(lVar11 + 0x268) == 0) {
      lVar10 = lVar11 + 0x260;
    }
    iVar18 = *(int *)(lVar10 + ((longlong)
                                ((int)((ulonglong)DAT_146aedad8 >> 0x20) + (int)DAT_146aedad8) &
                               (longlong)*(int *)(lVar11 + 0x270) - 1U) * 4);
    if (iVar18 != -1) {
      do {
        plVar14 = (longlong *)((longlong)iVar18 * 0x30 + *(longlong *)(lVar11 + 0x228));
        if (*plVar14 == DAT_146aedad8) {
          if (iVar18 != -1) goto LAB_140899103;
          break;
        }
        iVar18 = (int)plVar14[5];
      } while (iVar18 != -1);
    }
  }
  plVar14 = plVar9;
LAB_140899103:
  plVar14 = (longlong *)plVar14[2];
  iVar18 = *(int *)(lVar11 + 0x28);
  puStack_270 = (uint *)(lVar11 + 0x10);
  local_278 = 0;
  uStack_274 = 1;
  iStack_264 = 0;
  uStack_260 = 0;
  if (iVar18 != 0) {
    puVar22 = *(uint **)(lVar11 + 0x20);
    if (*(uint **)(lVar11 + 0x20) == (uint *)0x0) {
      puVar22 = puStack_270;
    }
    uVar8 = *puVar22;
    plVar19 = plVar9;
    while (uVar8 == 0) {
      iVar7 = (int)plVar9;
      uStack_260 = (int)plVar19 + 0x20;
      plVar19 = (longlong *)(ulonglong)uStack_260;
      local_278 = iVar7 + 1;
      plVar9 = (longlong *)(ulonglong)local_278;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1408991d6;
      uVar8 = puVar22[(longlong)iVar7 + 1];
    }
    uStack_274 = uVar8 - 1 & uVar8 ^ uVar8;
    iVar7 = 0x1f;
    if (uStack_274 != 0) {
      for (; uStack_274 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_274 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_264 = (uStack_260 - iVar7) + 0x1f;
    if (iVar18 < iStack_264) {
LAB_1408991d6:
      iStack_264 = iVar18;
    }
  }
  local_268 = 0xffffffff;
  uStack_1cc = *(uint *)(lVar11 + 0x28);
  puVar22 = (uint *)(lVar11 + 0x10);
  uStack_200 = CONCAT44(uStack_274,local_278);
  uVar8 = *(uint *)(lVar11 + 0x28);
  uStack_1f0 = CONCAT44(iStack_264,0xffffffff);
  uStack_1e8 = CONCAT44(uStack_25c,uStack_260);
  local_208._0_4_ = (undefined4)lVar11;
  local_208._4_4_ = (undefined4)((ulonglong)lVar11 >> 0x20);
  local_1e0 = (int)uStack_1cc >> 5;
  local_1d0 = -1 << ((byte)uStack_1cc & 0x1f);
  local_1c8 = uStack_1cc & 0xffffffe0;
  local_170 = (undefined4)local_208;
  uStack_16c = local_208._4_4_;
  uStack_168 = local_278;
  uStack_164 = uStack_274;
  local_208 = lVar11;
  puStack_1f8 = puStack_270;
  local_1d8 = puVar22;
  local_160 = puStack_270;
  uStack_158 = uStack_1f0;
  local_150 = uStack_1e8;
  local_88 = lVar11;
  uVar13 = uStack_1cc;
  if (uStack_1cc != uVar8) {
    puVar23 = *(uint **)(lVar11 + 0x20);
    if (*(uint **)(lVar11 + 0x20) == (uint *)0x0) {
      puVar23 = puVar22;
    }
    uVar13 = puVar23[local_1e0] & local_1d0;
    while (uVar13 == 0) {
      lVar10 = (longlong)local_1e0;
      local_1c8 = local_1c8 + 0x20;
      iVar18 = local_1e0 + 1;
      bVar5 = (int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1e0;
      local_1e0 = iVar18;
      if (bVar5) goto LAB_1408992bf;
      uVar13 = puVar23[lVar10 + 1];
      local_1d0 = 0xffffffff;
    }
    uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
    iVar18 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar18 = 0x20;
    }
    else {
      iVar18 = 0x1f - iVar18;
    }
    uStack_1cc = (local_1c8 - iVar18) + 0x1f;
    uVar13 = uStack_1cc;
    if ((int)uVar8 < (int)uStack_1cc) {
LAB_1408992bf:
      uStack_1cc = uVar8;
      uVar13 = uVar8;
    }
  }
  while (((uStack_158._4_4_ != uVar13 || (local_160 != puVar22)) ||
         (CONCAT44(uStack_16c,local_170) != lVar11))) {
    uVar8 = DAT_14652d63c;
    if ((int)uStack_158._4_4_ < (int)local_160[6]) {
      uVar8 = uStack_158._4_4_;
    }
    fVar2 = *(float *)(*plVar14 + (longlong)(int)uVar8 * 4);
    if (1e-08 < fVar2) {
      iVar18 = *(int *)(param_1 + 0xee8);
      iVar7 = iVar18 + 1;
      *(int *)(param_1 + 0xee8) = iVar7;
      if (*(int *)(param_1 + 0xeec) < iVar7) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar15);
      }
      *(uint *)(*plVar15 + (longlong)iVar18 * 4) = uVar8;
      iVar18 = *(int *)(param_1 + 0xef8);
      iVar7 = iVar18 + 1;
      *(int *)(param_1 + 0xef8) = iVar7;
      if (*(int *)(param_1 + 0xefc) < iVar7) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar20);
      }
      *(float *)(*plVar20 + (longlong)iVar18 * 4) = fVar2 * 10.0;
    }
    uStack_158 = CONCAT44(uStack_158._4_4_,(uint)uStack_158 & ~uStack_164);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_168);
  }
  plVar9 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0xec8) = 0;
  if ((*(int *)(param_1 + 0xecc) < 0) && (*(int *)(param_1 + 0xecc) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xec0,0);
  }
  *(undefined4 *)(param_1 + 0xed8) = 0;
  if ((*(int *)(param_1 + 0xedc) < 0) && (*(int *)(param_1 + 0xedc) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xed0,0);
  }
  lVar11 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar11 + 0x700) != *(int *)(lVar11 + 0x72c)) {
    lVar10 = *(longlong *)(lVar11 + 0x738);
    if (*(longlong *)(lVar11 + 0x738) == 0) {
      lVar10 = lVar11 + 0x730;
    }
    iVar18 = *(int *)(lVar10 + ((longlong)
                                ((int)((ulonglong)DAT_146aedb20 >> 0x20) + (int)DAT_146aedb20) &
                               (longlong)*(int *)(lVar11 + 0x740) - 1U) * 4);
    if (iVar18 != -1) {
      do {
        plVar15 = (longlong *)((longlong)iVar18 * 0x30 + *(longlong *)(lVar11 + 0x6f8));
        if (*plVar15 == DAT_146aedb20) {
          if (iVar18 != -1) goto LAB_140899465;
          break;
        }
        iVar18 = (int)plVar15[5];
      } while (iVar18 != -1);
    }
  }
  plVar15 = plVar9;
LAB_140899465:
  plVar15 = (longlong *)plVar15[2];
  lVar10 = lVar11 + 0x70;
  iVar18 = *(int *)(lVar11 + 0x98);
  puStack_250 = (uint *)(lVar11 + 0x80);
  local_258 = 0;
  uStack_254 = 1;
  iStack_244 = 0;
  uStack_240 = 0;
  if (iVar18 != 0) {
    puVar22 = *(uint **)(lVar11 + 0x90);
    if (*(uint **)(lVar11 + 0x90) == (uint *)0x0) {
      puVar22 = puStack_250;
    }
    uVar8 = *puVar22;
    plVar20 = plVar9;
    while (uVar8 == 0) {
      iVar7 = (int)plVar9;
      uStack_240 = (int)plVar20 + 0x20;
      plVar20 = (longlong *)(ulonglong)uStack_240;
      local_258 = iVar7 + 1;
      plVar9 = (longlong *)(ulonglong)local_258;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_140899528;
      uVar8 = puVar22[(longlong)iVar7 + 1];
    }
    uStack_254 = uVar8 - 1 & uVar8 ^ uVar8;
    iVar7 = 0x1f;
    if (uStack_254 != 0) {
      for (; uStack_254 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_254 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_244 = (uStack_240 - iVar7) + 0x1f;
    if (iVar18 < iStack_244) {
LAB_140899528:
      iStack_244 = iVar18;
    }
  }
  local_248 = 0xffffffff;
  uStack_1ac = *(uint *)(lVar11 + 0x98);
  puVar22 = (uint *)(lVar11 + 0x80);
  uStack_200 = CONCAT44(uStack_254,local_258);
  uVar8 = *(uint *)(lVar11 + 0x98);
  uStack_1f0 = CONCAT44(iStack_244,0xffffffff);
  uStack_1e8 = CONCAT44(uStack_23c,uStack_240);
  local_1c0 = (int)uStack_1ac >> 5;
  local_1b0 = -1 << ((byte)uStack_1ac & 0x1f);
  local_1a8 = uStack_1ac & 0xffffffe0;
  uStack_140 = local_258;
  uStack_13c = uStack_254;
  local_208 = lVar10;
  puStack_1f8 = puStack_250;
  local_1b8 = puVar22;
  local_138 = puStack_250;
  uStack_130 = uStack_1f0;
  local_128 = uStack_1e8;
  local_80 = lVar10;
  local_148 = lVar10;
  uVar13 = uStack_1ac;
  if (uStack_1ac != uVar8) {
    puVar23 = *(uint **)(lVar11 + 0x90);
    if (*(uint **)(lVar11 + 0x90) == (uint *)0x0) {
      puVar23 = puVar22;
    }
    uVar13 = puVar23[local_1c0] & local_1b0;
    while (uVar13 == 0) {
      lVar11 = (longlong)local_1c0;
      local_1a8 = local_1a8 + 0x20;
      iVar18 = local_1c0 + 1;
      bVar5 = (int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1c0;
      local_1c0 = iVar18;
      if (bVar5) goto LAB_14089961e;
      uVar13 = puVar23[lVar11 + 1];
      local_1b0 = 0xffffffff;
    }
    uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
    local_180 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> local_180 == 0; local_180 = local_180 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar18 = 0x20;
    }
    else {
      iVar18 = 0x1f - local_180;
    }
    uStack_1ac = (local_1a8 - iVar18) + 0x1f;
    uVar13 = uStack_1ac;
    if ((int)uVar8 < (int)uStack_1ac) {
LAB_14089961e:
      uStack_1ac = uVar8;
      uVar13 = uVar8;
    }
  }
  while (((uStack_130._4_4_ != uVar13 || (local_138 != puVar22)) || (local_148 != lVar10))) {
    uVar8 = DAT_14652d644;
    if ((int)uStack_130._4_4_ < (int)local_138[6]) {
      uVar8 = uStack_130._4_4_;
    }
    lVar11 = (longlong)(int)uVar8;
    fVar2 = *(float *)(*plVar15 + lVar11 * 4);
    if (1e-08 < fVar2) {
      iVar18 = *(int *)(param_1 + 0xec8);
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70);
      uVar3 = *(undefined4 *)(lVar17 + 4 + lVar11 * 0x18);
      uVar4 = *(undefined4 *)(lVar17 + lVar11 * 0x18);
      *(int *)(param_1 + 0xec8) = iVar18 + 1;
      if (*(int *)(param_1 + 0xecc) < iVar18 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0xec0,iVar18);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0xec0) + (longlong)iVar18 * 4) = uVar4;
      iVar18 = *(int *)(param_1 + 0xec8);
      *(int *)(param_1 + 0xec8) = iVar18 + 1;
      if (*(int *)(param_1 + 0xecc) < iVar18 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0xec0),iVar18);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0xec0) + (longlong)iVar18 * 4) = uVar3;
      iVar18 = *(int *)(param_1 + 0xed8);
      *(int *)(param_1 + 0xed8) = iVar18 + 1;
      if (*(int *)(param_1 + 0xedc) < iVar18 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0xed0,iVar18);
      }
      *(float *)(*(longlong *)(param_1 + 0xed0) + (longlong)iVar18 * 4) = fVar2 * 10.0;
    }
    uStack_130 = CONCAT44(uStack_130._4_4_,(uint)uStack_130 & ~uStack_13c);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_140);
  }
  iVar18 = *(int *)(param_1 + 0xea8);
  if (iVar18 < local_f4) {
    *(int *)(param_1 + 0xea8) = local_f4;
    iVar7 = local_f4 - iVar18;
    if (*(int *)(param_1 + 0xeac) < local_f4) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0xea0));
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0xea0) + (longlong)iVar18 * 4),0,
               (longlong)iVar7 << 2);
  }
  else if ((local_f4 < iVar18) && (iVar18 - local_f4 != 0)) {
    *(int *)(param_1 + 0xea8) = iVar18 - (iVar18 - local_f4);
  }
  plVar9 = (longlong *)(param_1 + 0xeb0);
  uVar16 = 0;
  *(undefined4 *)(param_1 + 0xeb8) = 0;
  if ((*(int *)(param_1 + 0xebc) < 0) && (*(int *)(param_1 + 0xebc) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar9,0);
  }
  plVar15 = (longlong *)(param_1 + 0xf00);
  *(undefined4 *)(param_1 + 0xf08) = 0;
  if ((*(int *)(param_1 + 0xf0c) < 0) && (*(int *)(param_1 + 0xf0c) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar15,0);
  }
  lVar11 = *(longlong *)(param_1 + 0x28);
  lVar10 = lVar11 + 0xa8;
  local_238 = 0;
  iVar18 = *(int *)(lVar11 + 0xd0);
  puStack_230 = (uint *)(lVar11 + 0xb8);
  uStack_234 = 1;
  iStack_224 = 0;
  uStack_220 = 0;
  if (iVar18 != 0) {
    puVar22 = *(uint **)(lVar11 + 200);
    if (*(uint **)(lVar11 + 200) == (uint *)0x0) {
      puVar22 = puStack_230;
    }
    uVar8 = *puVar22;
    uVar12 = uVar16;
    uVar21 = uVar16;
    while (uVar8 == 0) {
      iVar7 = (int)uVar12;
      uStack_220 = (int)uVar21 + 0x20;
      uVar21 = (ulonglong)uStack_220;
      local_238 = iVar7 + 1;
      uVar12 = (ulonglong)local_238;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1408998b0;
      uVar8 = puVar22[(longlong)iVar7 + 1];
    }
    uStack_234 = uVar8 - 1 & uVar8 ^ uVar8;
    local_17c = 0x1f;
    if (uStack_234 != 0) {
      for (; uStack_234 >> local_17c == 0; local_17c = local_17c + -1) {
      }
    }
    if (uStack_234 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - local_17c;
    }
    iStack_224 = (uStack_220 - iVar7) + 0x1f;
    if (iVar18 < iStack_224) {
LAB_1408998b0:
      iStack_224 = iVar18;
    }
  }
  local_228 = 0xffffffff;
  local_18c = *(uint *)(lVar11 + 0xd0);
  local_198 = (uint *)(lVar11 + 0xb8);
  uStack_200 = CONCAT44(uStack_234,local_238);
  uVar8 = *(uint *)(lVar11 + 0xd0);
  uStack_1f0 = CONCAT44(iStack_224,0xffffffff);
  uStack_1e8 = CONCAT44(uStack_21c,uStack_220);
  local_1a0 = (int)local_18c >> 5;
  local_188 = local_18c & 0xffffffe0;
  uStack_118 = local_238;
  uStack_114 = uStack_234;
  local_208 = lVar10;
  puStack_1f8 = puStack_230;
  local_110 = puStack_230;
  uStack_108 = uStack_1f0;
  local_100 = uStack_1e8;
  local_120 = lVar10;
  local_res8 = local_18c;
  if (local_18c != uVar8) {
    puVar22 = *(uint **)(lVar11 + 200);
    if (*(uint **)(lVar11 + 200) == (uint *)0x0) {
      puVar22 = local_198;
    }
    uVar13 = puVar22[local_1a0] & -1 << ((byte)local_18c & 0x1f);
    while (uVar13 == 0) {
      lVar11 = (longlong)local_1a0;
      local_188 = local_188 + 0x20;
      iVar18 = local_1a0 + 1;
      bVar5 = (int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1a0;
      local_1a0 = iVar18;
      if (bVar5) goto LAB_1408999b0;
      uVar13 = puVar22[lVar11 + 1];
    }
    uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
    local_178 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> local_178 == 0; local_178 = local_178 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar18 = 0x20;
    }
    else {
      iVar18 = 0x1f - local_178;
    }
    local_18c = (local_188 - iVar18) + 0x1f;
    local_res8 = local_18c;
    if ((int)uVar8 < (int)local_18c) {
LAB_1408999b0:
      local_18c = uVar8;
      local_res8 = uVar8;
    }
  }
  while( true ) {
    if (((uStack_108._4_4_ == local_res8) && (local_110 == local_198)) && (local_120 == lVar10))
    break;
    uVar8 = DAT_14652d64c;
    if ((int)uStack_108._4_4_ < (int)local_110[6]) {
      uVar8 = uStack_108._4_4_;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_14685f3b8) {
      _Init_thread_header(&DAT_14685f3b8);
      if (DAT_14685f3b8 == -1) {
        atexit((_func_5014 *)&LAB_143e43b40);
        _Init_thread_footer(&DAT_14685f3b8);
      }
    }
    FMeshDescription::GetPolygonPerimeterVertices
              (*(undefined8 *)(param_1 + 0x28),uVar8,&DAT_14685f3a8);
    iVar18 = DAT_14685f3b0;
    lVar11 = (longlong)DAT_14685f3b0;
    *(int *)(uVar16 + *(longlong *)(param_1 + 0xea0)) = DAT_14685f3b0;
    uVar16 = uVar16 + 4;
    lVar17 = 0;
    if (0 < iVar18) {
      do {
        iVar18 = *(int *)(param_1 + 0xeb8);
        uVar3 = *(undefined4 *)(DAT_14685f3a8 + lVar17 * 4);
        *(int *)(param_1 + 0xeb8) = iVar18 + 1;
        if (*(int *)(param_1 + 0xebc) < iVar18 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar18);
        }
        *(undefined4 *)(*plVar9 + (longlong)iVar18 * 4) = uVar3;
        iVar18 = *(int *)(param_1 + 0xf08);
        uVar3 = *(undefined4 *)(param_1 + 0xf08);
        *(int *)(param_1 + 0xf08) = iVar18 + 1;
        if (*(int *)(param_1 + 0xf0c) < iVar18 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar15,iVar18);
        }
        lVar17 = lVar17 + 1;
        *(undefined4 *)(*plVar15 + (longlong)iVar18 * 4) = uVar3;
      } while (lVar17 < lVar11);
    }
    uStack_108 = CONCAT44(uStack_108._4_4_,(uint)uStack_108 & ~uStack_114);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_118);
  }
  plVar20 = (longlong *)(param_1 + 0xf10);
  iVar18 = *(int *)(param_1 + 0xf18);
  if (iVar18 < 1) {
    *(undefined4 *)(param_1 + 0xf18) = 1;
    if (*(int *)(param_1 + 0xf1c) < 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar20);
    }
  }
  else if ((1 < iVar18) && (iVar18 + -1 != 0)) {
    *(int *)(param_1 + 0xf18) = iVar18 - (iVar18 + -1);
  }
  local_9c = *(int *)(param_1 + 0xf18);
  iVar18 = 0;
  if (0 < local_9c) {
    lVar11 = 0;
    do {
      lVar10 = *plVar20;
      iVar18 = iVar18 + 1;
      *(undefined4 *)(lVar11 + lVar10) = *(undefined4 *)(param_1 + 0xf08);
      *(longlong *)(lVar11 + 8 + lVar10) = *plVar15;
      local_9c = *(int *)(param_1 + 0xf18);
      lVar11 = lVar11 + 0x10;
    } while (iVar18 < local_9c);
  }
  local_f0 = *(longlong *)(param_1 + 0xea0);
  local_e8 = *plVar9;
  local_e0 = *(undefined4 *)(param_1 + 0xed8);
  local_d8 = *(undefined8 *)(param_1 + 0xec0);
  local_d0 = *(undefined8 *)(param_1 + 0xed0);
  local_c8 = *(undefined4 *)(param_1 + 0xef8);
  local_c0 = *(undefined8 *)(param_1 + 0xee0);
  local_b8 = *(undefined8 *)(param_1 + 0xef0);
  local_98 = *plVar20;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  lVar11 = operator_new(0x70);
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = FUN_143919360(lVar11,1,local_res8 & 0xfffffe15 | 0x15);
  }
  cVar6 = FUN_14391b0b0(lVar11,&local_f8);
  if (cVar6 == '\0') {
LAB_140899cbc:
    if (lVar11 != 0) {
      FUN_143919580(lVar11);
      FMemory::operator_delete(lVar11,0x70);
    }
    lVar11 = 0;
  }
  else {
    cVar6 = FUN_14391a8b0(lVar11);
    if (cVar6 == '\0') goto LAB_140899cbc;
    cVar6 = FUN_14391ae70(lVar11,&local_f8);
    if (cVar6 == '\0') goto LAB_140899cbc;
    cVar6 = FUN_14391a7a0(lVar11,0,FUN_14391b0a0,&local_f8);
    if (cVar6 == '\0') goto LAB_140899cbc;
    cVar6 = FUN_14391ac90(lVar11,&local_f8);
    if (cVar6 == '\0') goto LAB_140899cbc;
    cVar6 = FUN_14391a1f0(lVar11);
    if (cVar6 == '\0') goto LAB_140899cbc;
    cVar6 = FUN_14391af30(lVar11,&local_f8);
    if (cVar6 == '\0') goto LAB_140899cbc;
    cVar6 = FUN_14391aab0(lVar11);
    if (cVar6 == '\0') goto LAB_140899cbc;
  }
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_DestroyObject_144116338;
    plVar9[2] = lVar11;
  }
  local_288 = lVar11;
  local_280 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_288,lVar11,lVar11);
  plVar15 = (longlong *)(param_1 + 0xe90);
  if (plVar15 != &local_288) {
    *plVar15 = lVar11;
    local_288 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xe98,&local_280);
    plVar9 = local_280;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar9 + 1;
    lVar11 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  FUN_143919800(*plVar15,*(uint *)(param_1 + 0xe88) & 0xf | local_res8 & 0xffffffe0 | 0x20);
LAB_140899daf:
  FUN_140884270(param_1);
  return;
}



// FUNCTION 140899e00 Rehash body=648 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TTuple<FVertexInstanceID,FVertexInstanceID>,int>,TDefaultMapHashableKeyFuncs<TTuple<FVertexInstanceID,FVertexInstanceID>,int,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
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
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar7 = 0;
      uVar15 = (ulonglong)uVar10;
      do {
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar7;
        uVar7 = uVar7 + 1;
        *(undefined4 *)((longlong)plVar12 + uVar11 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar16 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar16 = puStack_28;
      }
      uVar10 = *puVar16;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_140899f3f;
        uVar10 = puVar16[lVar6 + 1];
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
LAB_140899f3f:
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
        piVar3 = (int *)(*param_1 + (longlong)iStack_1c * 0x14);
        uVar10 = piVar3[1];
        uVar13 = *piVar3 - uVar10 ^ uVar10 >> 0xd;
        uVar9 = (-0x61c88647 - uVar13) - uVar10 ^ uVar13 << 8;
        uVar14 = (uVar10 - uVar9) - uVar13 ^ uVar9 >> 0xd;
        uVar13 = (uVar13 - uVar9) - uVar14 ^ uVar14 >> 0xc;
        uVar10 = (uVar9 - uVar13) - uVar14 ^ uVar13 << 0x10;
        uVar14 = (uVar14 - uVar10) - uVar13 ^ uVar10 >> 5;
        uVar9 = (uVar13 - uVar10) - uVar14 ^ uVar14 >> 3;
        uVar10 = (uVar10 - uVar9) - uVar14 ^ uVar9 << 10;
        uVar10 = ((uVar14 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)*plVar2 - 1U;
        piVar3[4] = uVar10;
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        piVar3[3] = *(int *)((longlong)plVar12 +
                            ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(int *)((longlong)plVar12 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 14089a090 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FPolygonID,`UEditableMesh::QuadrangulatePolygonGroup'::`2'::FAdjacentPolygons>,TDefaultMapHashableKeyFuncs<FPolygonID,`UEditableMesh::QuadrangulatePolygonGroup'::`2'::FAdjacentPolygons,0>,FDefaultSetAllocator>
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
  uint *puVar11;
  ulonglong uVar12;
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
      uVar12 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puStack_28;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_14089a1cf;
        uVar5 = puVar11[lVar6 + 1];
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
LAB_14089a1cf:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0x88 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[0x21] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[0x20] =
             *(uint *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 14089a2a0 FUN_14089a2a0 body=520 status=ok
// SIG undefined FUN_14089a2a0(void)

void FUN_14089a2a0(longlong *param_1)

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
        if (bVar4) goto LAB_14089a3df;
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
LAB_14089a3df:
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
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[5] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[4] = *(uint *)((longlong)plVar7 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 14089a4b0 FUN_14089a4b0 body=538 status=ok
// SIG undefined FUN_14089a4b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14089a4b0(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined1 local_c0 [4];
  uint local_bc;
  longlong local_b8;
  uint local_b0;
  int local_ac;
  undefined1 local_a0 [24];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146860840) && (_Init_thread_header(&DAT_146860840), DAT_146860840 == -1))
  {
    DAT_146860808 = 0;
    _DAT_146860810 = 0;
    DAT_146860828 = 0;
    _DAT_146860830 = 0;
    _DAT_146860838 = 0xffffffff;
    _DAT_14686083c = 0;
    atexit(`TMeshElementArray<FRenderingPolygonGroup,FPolygonGroupID>::Remap'::`2'::
           _dynamic_atexit_destructor_for__NewContainer__);
    _Init_thread_footer(&DAT_146860840);
  }
  TSparseArray<FRenderingPolygonGroup,FDefaultSparseArrayAllocator>::Empty
            (&DAT_146860808,(int)param_2[1]);
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_c8,param_1);
  if (local_ac < *(int *)(local_b8 + 0x18)) {
    do {
      lVar5 = (longlong)local_ac;
      local_88 = 0;
      local_80 = 0;
      local_68 = 0;
      uStack_60 = 0;
      iVar2 = *(int *)(*param_2 + lVar5 * 8);
      local_78 = 0;
      local_70 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0xffffffff;
      local_44 = 0;
      lVar4 = FUN_14088eef0(&DAT_146860808,local_a0,iVar2);
      puVar3 = *(undefined4 **)(lVar4 + 8);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = local_88._4_4_;
        puVar3[2] = 0;
        *(undefined8 *)(puVar3 + 4) = 0;
        *(undefined8 *)(puVar3 + 6) = 0;
        *(undefined8 *)(puVar3 + 0xc) = 0;
        *(undefined8 *)(puVar3 + 0xe) = 0;
        puVar3[0x10] = 0xffffffff;
        puVar3[0x11] = 0;
        TSparseArray<FMeshTriangle,FDefaultSparseArrayAllocator>::operator=(puVar3 + 4,&local_78);
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_78);
      puVar3 = (undefined4 *)(*local_c8 + lVar5 * 0x48);
      puVar1 = (undefined4 *)(DAT_146860808 + (longlong)iVar2 * 0x48);
      *puVar1 = *puVar3;
      puVar1[1] = puVar3[1];
      puVar1[2] = puVar3[2];
      TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::operator=(puVar1 + 4,puVar3 + 4);
      local_b0 = local_b0 & ~local_bc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_c0);
    } while (local_ac < *(int *)(local_b8 + 0x18));
  }
  TSparseArray<FRenderingPolygonGroup,FDefaultSparseArrayAllocator>::operator=
            (param_1,&DAT_146860808);
  return;
}



// FUNCTION 14089a6d0 Remove body=257 status=ok
// SIG undefined Remove(void)

int TArray<unsigned_int,FDefaultAllocator>::Remove(longlong *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  iVar1 = (int)param_1[1];
  lVar6 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar7 = 0;
  bVar8 = *(int *)*param_1 != *param_2;
  lVar3 = 0;
  iVar4 = 0;
  do {
    lVar3 = lVar3 + 1;
    iVar5 = iVar4 + 1;
    if (lVar3 < lVar6) {
      piVar2 = (int *)(*param_1 + lVar3 * 4);
      do {
        if (bVar8 != (*piVar2 != *param_2)) break;
        iVar5 = iVar5 + 1;
        lVar3 = lVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (lVar3 < lVar6);
    }
    if (bVar8 != false) {
      if (iVar7 != iVar4) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar7 * 4),(void *)(*param_1 + (longlong)iVar4 * 4)
                   ,(longlong)(iVar5 - iVar4) << 2);
      }
      iVar7 = iVar7 + (iVar5 - iVar4);
    }
    bVar8 = (bool)(bVar8 ^ 1);
    iVar4 = iVar5;
    if (lVar6 <= lVar3) {
      *(int *)(param_1 + 1) = iVar7;
      return iVar1 - iVar7;
    }
  } while( true );
}



// FUNCTION 14089a7e0 FUN_14089a7e0 body=568 status=ok
// SIG undefined FUN_14089a7e0(void)

void FUN_14089a7e0(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  uint *puVar13;
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
  uVar3 = *(uint *)(param_1 + 0x30);
  puVar2 = (uint *)(param_1 + 0x18);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar4 = *puVar13;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar8 = local_88 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar8;
      if (bVar6) goto LAB_14089a8bd;
      uVar4 = puVar13[lVar10 + 1];
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
LAB_14089a8bd:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar12 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar2;
  local_40 = plVar1;
  puStack_30 = puVar2;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar9 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar8 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_14089a984;
      uVar9 = puVar13[(longlong)iVar8 + 1];
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
    uStack_74 = (uVar12 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14089a984:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
    lVar10 = (longlong)(int)uStack_4c * 0x30 + *plVar1;
    plVar7 = *(longlong **)(lVar10 + 0x10);
    plVar11 = plVar7 + (longlong)*(int *)(lVar10 + 0x18) * 2;
    if (plVar7 != plVar11) {
      do {
        lVar5 = *plVar7;
        plVar7 = plVar7 + 2;
        *(undefined4 *)((longlong)param_2 * 4 + lVar5) = *(undefined4 *)(lVar10 + 0x20);
      } while (plVar7 != plVar11);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 14089aa20 FUN_14089aa20 body=568 status=ok
// SIG undefined FUN_14089aa20(void)

void FUN_14089aa20(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  uint *puVar13;
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
  uVar3 = *(uint *)(param_1 + 0x30);
  puVar2 = (uint *)(param_1 + 0x18);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar4 = *puVar13;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar6) goto LAB_14089aafd;
      uVar4 = puVar13[lVar9 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
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
    if ((int)uVar3 < (int)uStack_74) {
LAB_14089aafd:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar12 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar2;
  local_40 = plVar1;
  puStack_30 = puVar2;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar8 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14089abc4;
      uVar8 = puVar13[(longlong)iVar7 + 1];
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
    uStack_74 = (uVar12 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14089abc4:
      uStack_74 = uVar3;
    }
  }
  while ((lVar9 = (longlong)(int)uStack_4c, uStack_4c != uStack_74 || (local_58 != puVar2))) {
    lVar5 = *plVar1;
    plVar10 = *(longlong **)(lVar5 + 0x10 + lVar9 * 0x30);
    plVar11 = plVar10 + (longlong)*(int *)(lVar5 + 0x18 + lVar9 * 0x30) * 2;
    for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
      *(undefined4 *)(*plVar10 + (longlong)param_2 * 4) =
           *(undefined4 *)(lVar5 + 0x20 + lVar9 * 0x30);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 14089ac60 FUN_14089ac60 body=572 status=ok
// SIG undefined FUN_14089ac60(void)

void FUN_14089ac60(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  uint *puVar13;
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
  uVar3 = *(uint *)(param_1 + 0x30);
  puVar2 = (uint *)(param_1 + 0x18);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar4 = *puVar13;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar8 = local_88 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar8;
      if (bVar6) goto LAB_14089ad3d;
      uVar4 = puVar13[lVar10 + 1];
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
LAB_14089ad3d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar12 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar2;
  local_40 = plVar1;
  puStack_30 = puVar2;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar9 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar8 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_14089ae04;
      uVar9 = puVar13[(longlong)iVar8 + 1];
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
    uStack_74 = (uVar12 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14089ae04:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
    lVar10 = (longlong)(int)uStack_4c * 0x38 + *plVar1;
    plVar7 = *(longlong **)(lVar10 + 0x10);
    plVar11 = plVar7 + (longlong)*(int *)(lVar10 + 0x18) * 2;
    if (plVar7 != plVar11) {
      do {
        lVar5 = *plVar7;
        plVar7 = plVar7 + 2;
        *(undefined8 *)((longlong)param_2 * 8 + lVar5) = *(undefined8 *)(lVar10 + 0x20);
      } while (plVar7 != plVar11);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 14089aea0 FUN_14089aea0 body=570 status=ok
// SIG undefined FUN_14089aea0(void)

void FUN_14089aea0(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  uint *puVar16;
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
  uVar4 = *(uint *)(param_1 + 0x30);
  puVar2 = (uint *)(param_1 + 0x18);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar4 != 0) {
    puVar16 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar16 = puVar2;
    }
    uVar5 = *puVar16;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar5 == 0) {
      lVar13 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar11 = local_88 + 1;
      bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar11;
      if (bVar6) goto LAB_14089af7d;
      uVar5 = puVar16[lVar13 + 1];
    }
    uStack_84 = -uVar5 & uVar5;
    iVar11 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_74 = (iStack_70 - iVar11) + 0x1f;
    if ((int)uVar4 < (int)uStack_74) {
LAB_14089af7d:
      uStack_74 = uVar4;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x30);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar15 = uVar5 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar2;
  local_40 = plVar1;
  puStack_30 = puVar2;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar5;
  if (uVar5 != uVar4) {
    puVar16 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar16 = puVar2;
    }
    uVar12 = puVar16[(int)uVar5 >> 5] & -1 << ((byte)uVar5 & 0x1f);
    iVar11 = (int)uVar5 >> 5;
    while (uVar12 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_14089b044;
      uVar12 = puVar16[(longlong)iVar11 + 1];
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
    uStack_74 = (uVar15 - iVar11) + 0x1f;
    if ((int)uVar4 < (int)uStack_74) {
LAB_14089b044:
      uStack_74 = uVar4;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
    lVar13 = (longlong)(int)uStack_4c * 0x60 + *plVar1;
    plVar10 = *(longlong **)(lVar13 + 0x18);
    plVar14 = plVar10 + (longlong)*(int *)(lVar13 + 0x20) * 2;
    for (; plVar10 != plVar14; plVar10 = plVar10 + 2) {
      uVar7 = *(undefined4 *)(lVar13 + 0x34);
      uVar8 = *(undefined4 *)(lVar13 + 0x38);
      uVar9 = *(undefined4 *)(lVar13 + 0x3c);
      puVar3 = (undefined4 *)(*plVar10 + (longlong)param_2 * 0x10);
      *puVar3 = *(undefined4 *)(lVar13 + 0x30);
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 14089b0e0 FUN_14089b0e0 body=581 status=ok
// SIG undefined FUN_14089b0e0(void)

void FUN_14089b0e0(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
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
  uVar3 = *(uint *)(param_1 + 0x30);
  puVar2 = (uint *)(param_1 + 0x18);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar4 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar8 = local_88 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar8;
      if (bVar6) goto LAB_14089b1bd;
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
LAB_14089b1bd:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar11 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar2;
  local_40 = plVar1;
  puStack_30 = puVar2;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar8 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_14089b284;
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
LAB_14089b284:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
    lVar10 = (longlong)(int)uStack_4c * 0x38 + *plVar1;
    plVar7 = *(longlong **)(lVar10 + 0x10);
    plVar13 = plVar7 + (longlong)*(int *)(lVar10 + 0x18) * 2;
    if (plVar7 != plVar13) {
      do {
        lVar5 = *plVar7;
        plVar7 = plVar7 + 2;
        *(undefined8 *)(lVar5 + (longlong)param_2 * 0xc) = *(undefined8 *)(lVar10 + 0x20);
        *(undefined4 *)(lVar5 + 8 + (longlong)param_2 * 0xc) = *(undefined4 *)(lVar10 + 0x28);
      } while (plVar7 != plVar13);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 14089b330 FUN_14089b330 body=568 status=ok
// SIG undefined FUN_14089b330(void)

void FUN_14089b330(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  uint *puVar13;
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
  uVar3 = *(uint *)(param_1 + 0x30);
  puVar2 = (uint *)(param_1 + 0x18);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar4 = *puVar13;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar8 = local_88 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar8;
      if (bVar6) goto LAB_14089b40d;
      uVar4 = puVar13[lVar10 + 1];
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
LAB_14089b40d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar12 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar2;
  local_40 = plVar1;
  puStack_30 = puVar2;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar9 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar8 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_14089b4d4;
      uVar9 = puVar13[(longlong)iVar8 + 1];
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
    uStack_74 = (uVar12 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14089b4d4:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
    lVar10 = (longlong)(int)uStack_4c * 0x38 + *plVar1;
    plVar7 = *(longlong **)(lVar10 + 0x10);
    plVar11 = plVar7 + (longlong)*(int *)(lVar10 + 0x18) * 2;
    if (plVar7 != plVar11) {
      do {
        lVar5 = *plVar7;
        plVar7 = plVar7 + 2;
        *(undefined8 *)((longlong)param_2 * 8 + lVar5) = *(undefined8 *)(lVar10 + 0x20);
      } while (plVar7 != plVar11);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 14089b570 FUN_14089b570 body=568 status=ok
// SIG undefined FUN_14089b570(void)

void FUN_14089b570(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
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
  uVar3 = *(uint *)(param_1 + 0x30);
  puVar2 = (uint *)(param_1 + 0x18);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar4 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_14089b64d;
      uVar4 = puVar12[lVar9 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
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
    if ((int)uVar3 < (int)uStack_74) {
LAB_14089b64d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar11 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar2;
  local_40 = plVar1;
  puStack_30 = puVar2;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar8 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14089b714;
      uVar8 = puVar12[(longlong)iVar7 + 1];
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
    uStack_74 = (uVar11 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14089b714:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
    lVar9 = (longlong)(int)uStack_4c * 0x30 + *plVar1;
    plVar6 = *(longlong **)(lVar9 + 0x10);
    plVar10 = plVar6 + (longlong)*(int *)(lVar9 + 0x18) * 2;
    for (; plVar6 != plVar10; plVar6 = plVar6 + 2) {
      *(undefined1 *)((longlong)param_2 + *plVar6) = *(undefined1 *)(lVar9 + 0x20);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 14089b7b0 Remove body=341 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FPolygonID,`UEditableMesh::QuadrangulatePolygonGroup'::`2'::FAdjacentPolygons>,TDefaultMapHashableKeyFuncs<FPolygonID,`UEditableMesh::QuadrangulatePolygonGroup'::`2'::FAdjacentPolygons,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar12 = (longlong)(int)param_1[9] - 1;
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  iVar9 = *(int *)((longlong)plVar10 + ((longlong)*param_2 & uVar12) * 4);
  if (iVar9 != -1) {
    lVar3 = *param_1;
    do {
      lVar6 = (longlong)iVar9 * 0x88;
      if (*(int *)(lVar6 + lVar3) == *param_2) {
        lVar11 = (longlong)iVar9 * 0x88;
        lVar6 = lVar11 + lVar3;
        uVar12 = (longlong)*(int *)(lVar6 + 0x84) & uVar12;
        piVar7 = (int *)((longlong)plVar10 + uVar12 * 4);
        iVar2 = *(int *)((longlong)plVar10 + uVar12 * 4);
        goto joined_r0x00014089b852;
      }
      iVar9 = *(int *)(lVar6 + 0x80 + lVar3);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x00014089b852:
  if (iVar2 == -1) {
LAB_14089b87a:
    bVar4 = (byte)iVar9 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x88 + *param_1) = iVar9;
    }
    uVar5 = 0xffffffff;
    puVar8 = (undefined4 *)(*param_1 + lVar11);
    *puVar8 = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    puVar8[1] = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar9;
    plVar10 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar10 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar10 +
                     (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar9) {
    *piVar7 = *(int *)(lVar6 + 0x80);
    goto LAB_14089b87a;
  }
  piVar7 = (int *)((longlong)iVar2 * 0x88 + 0x80 + lVar3);
  iVar2 = *piVar7;
  goto joined_r0x00014089b852;
}



// FUNCTION 14089b910 Remove body=232 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar7 = (longlong)
            (int)((int)param_1[9] - 1U & *(uint *)((longlong)param_2 * 0x20 + 0x1c + lVar3));
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    piVar8 = (int *)((longlong)plVar6 + lVar7 * 4);
    iVar2 = *(int *)((longlong)plVar6 + lVar7 * 4);
    while (iVar2 != -1) {
      if (iVar2 == param_2) {
        *piVar8 = *(int *)((longlong)param_2 * 0x20 + 0x18 + lVar3);
        break;
      }
      piVar8 = (int *)(lVar3 + 0x18 + (longlong)iVar2 * 0x20);
      iVar2 = *piVar8;
    }
  }
  bVar4 = (byte)param_2 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = param_2;
  }
  uVar5 = 0xffffffff;
  puVar9 = (undefined4 *)((longlong)param_2 * 0x20 + *param_1);
  *puVar9 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  puVar9[1] = uVar5;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = param_2;
  plVar6 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
  return;
}



// FUNCTION 14089ba00 RemoveAt body=247 status=ok
// SIG undefined RemoveAt(void)

void TSparseArray<FMeshEdge,FDefaultSparseArrayAllocator>::RemoveAt
               (longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    lVar11 = uVar10 * 0x18;
    iVar9 = param_3;
    do {
      if (*(longlong *)(lVar11 + 8 + *param_1) != 0) {
        FMemory::Free();
      }
      lVar11 = lVar11 + 0x18;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar8 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar11 = uVar10 * 0x18;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar11) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar11) = uVar4;
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
      lVar11 = lVar11 + 0x18;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar8;
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14089bb00 RemoveAt body=235 status=ok
// SIG undefined RemoveAt(void)

void TSparseArray<FMeshPolygon,FDefaultSparseArrayAllocator>::RemoveAt
               (longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  uVar9 = (ulonglong)param_2;
  iVar10 = param_2;
  for (iVar8 = param_3; iVar8 != 0; iVar8 = iVar8 + -1) {
    FMeshPolygon::~FMeshPolygon((longlong)iVar10 * 0x38 + *param_1);
    iVar10 = iVar10 + 1;
  }
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar7 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar11 = uVar9 * 0x38;
    do {
      iVar10 = (int)uVar9;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar11) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar11) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar6 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      iVar8 = iVar10;
      if (iVar10 < 0) {
        iVar8 = iVar10 + 0x1f;
      }
      uVar9 = (ulonglong)(iVar10 + 1);
      lVar11 = lVar11 + 0x38;
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
      uVar5 = ~uVar7;
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      *puVar1 = *puVar1 & uVar5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14089bbf0 RemoveAt body=243 status=ok
// SIG undefined RemoveAt(void)

void TSparseArray<FMeshPolygonGroup,FDefaultSparseArrayAllocator>::RemoveAt
               (longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    lVar11 = uVar10 << 4;
    iVar9 = param_3;
    do {
      if (*(longlong *)(lVar11 + *param_1) != 0) {
        FMemory::Free();
      }
      lVar11 = lVar11 + 0x10;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar8 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar11 = uVar10 << 4;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar11) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar11) = uVar4;
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
      lVar11 = lVar11 + 0x10;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar8;
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14089bcf0 RemoveAtUninitialized body=176 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0xc;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0xc) = iVar9;
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
      lVar8 = lVar8 + 0xc;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14089bda0 RemoveAt body=255 status=ok
// SIG undefined RemoveAt(void)

void TSparseArray<FMeshVertex,FDefaultSparseArrayAllocator>::RemoveAt
               (longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  
  uVar9 = (ulonglong)param_2;
  if (param_3 != 0) {
    lVar10 = uVar9 << 5;
    iVar11 = param_3;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + lVar10) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar2 + lVar10) != 0) {
        FMemory::Free();
      }
      lVar10 = lVar10 + 0x20;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar8 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar10 = uVar9 << 5;
    do {
      iVar11 = (int)uVar9;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar11;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar10) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar10) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar11;
      if (iVar11 < 0) {
        iVar5 = iVar11 + 0x1f;
      }
      uVar9 = (ulonglong)(iVar11 + 1);
      lVar10 = lVar10 + 0x20;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar8;
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14089bea0 RemoveAt body=251 status=ok
// SIG undefined RemoveAt(void)

void TSparseArray<FRenderingPolygonGroup,FDefaultSparseArrayAllocator>::RemoveAt
               (longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  uVar9 = (ulonglong)param_2;
  iVar10 = param_2;
  for (iVar8 = param_3; iVar8 != 0; iVar8 = iVar8 + -1) {
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (*param_1 + ((longlong)iVar10 * 9 + 2) * 8);
    iVar10 = iVar10 + 1;
  }
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar7 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar11 = uVar9 * 0x48;
    do {
      iVar10 = (int)uVar9;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x48) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar11) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar11) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar6 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      iVar8 = iVar10;
      if (iVar10 < 0) {
        iVar8 = iVar10 + 0x1f;
      }
      uVar9 = (ulonglong)(iVar10 + 1);
      lVar11 = lVar11 + 0x48;
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
      uVar5 = ~uVar7;
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      *puVar1 = *puVar1 & uVar5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14089bfa0 RemoveAtImpl body=270 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FChangeVertexInstancesForPolygon,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(*param_1 + 0x18 + (longlong)param_2 * 0x28);
    iVar2 = param_3;
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
      if (puVar3[-2] != 0) {
        FMemory::Free();
      }
      puVar3 = puVar3 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = (int)param_1[1];
    iVar4 = (iVar2 - param_2) - param_3;
    if (iVar4 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x28 + *param_1),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x28),(longlong)iVar4 * 0x28);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14089c0b0 FUN_14089c0b0 body=222 status=ok
// SIG undefined FUN_14089c0b0(void)

void FUN_14089c0b0(longlong param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar2 = param_1;
    }
    lVar2 = lVar2 + (longlong)param_2 * 0x58;
    iVar3 = param_3;
    do {
      FColorVertexBuffer::~FColorVertexBuffer(lVar2);
      lVar2 = lVar2 + 0x58;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = *(int *)(param_1 + 0xb8);
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb0);
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar2 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar2 + (longlong)param_2 * 0x58),
                 (void *)((longlong)(param_2 + param_3) * 0x58 + lVar2),(longlong)iVar1 * 0x58);
      iVar3 = *(int *)(param_1 + 0xb8);
    }
    *(int *)(param_1 + 0xb8) = iVar3 - param_3;
    if (param_4 != '\0') {
      FUN_14089e510(param_1);
    }
  }
  return;
}



// FUNCTION 14089c190 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0x88;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x88 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0x88;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14089c250 FUN_14089c250 body=1732 status=ok
// SIG undefined FUN_14089c250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14089c250(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auStack_1b88 [32];
  uint local_1b68;
  undefined1 local_1b64 [4];
  longlong local_1b60;
  longlong *local_1b58;
  longlong local_1b48;
  undefined4 *puStack_1b40;
  longlong local_1b38;
  undefined8 local_1b28;
  int iStack_1b20;
  undefined4 uStack_1b1c;
  undefined4 local_1b18;
  undefined4 uStack_1b14;
  int iStack_1b10;
  undefined4 uStack_1b0c;
  undefined8 local_1b08;
  longlong lStack_1b00;
  undefined4 local_1ad8;
  undefined4 uStack_1ad4;
  undefined4 uStack_1ad0;
  undefined4 uStack_1acc;
  undefined1 local_1ac8 [288];
  undefined1 *local_19a8;
  undefined8 local_1998;
  longlong local_1988;
  longlong lStack_1980;
  undefined8 local_1978;
  undefined8 uStack_1970;
  undefined8 local_1968;
  undefined8 uStack_1960;
  undefined8 local_1958;
  undefined8 uStack_1950;
  undefined1 local_1948 [6336];
  undefined1 *local_88;
  undefined8 local_78;
  ulonglong local_68;
  undefined8 uStack_40;
  
  uStack_40 = 0x14089c26d;
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1b88;
  lVar10 = *param_2;
  iVar16 = (int)param_2[1];
  iVar8 = *(int *)(lVar10 + 0x130);
  iVar19 = (iVar8 - iVar16) + -1;
  if (0 < iVar19) {
    iVar19 = 1;
  }
  lVar17 = 0;
  local_1b38 = param_1;
  if (iVar19 != 0) {
    lVar9 = *(longlong *)(lVar10 + 0x120);
    if (*(longlong *)(lVar10 + 0x120) == 0) {
      lVar9 = lVar10;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar16 * 0x30 + lVar9),
               (void *)((longlong)(iVar8 - iVar19) * 0x30 + lVar9),(longlong)iVar19 * 0x30);
    iVar8 = *(int *)(lVar10 + 0x130);
  }
  *(int *)(lVar10 + 0x130) = iVar8 + -1;
  TArray<FEditableMeshOctreePolygon,TInlineAllocator<6,FDefaultAllocator>_>::ResizeShrink(lVar10);
  *(longlong *)(param_1 + 0x1c8) = (longlong)(*(int *)(param_1 + 0x1c8) + -0x30);
  if (iVar16 < *(int *)(lVar10 + 0x130)) {
    local_1b48 = *param_2;
    puStack_1b40 = (undefined4 *)param_2[1];
    lVar9 = *(longlong *)(lVar10 + 0x120);
    if (*(longlong *)(lVar10 + 0x120) == 0) {
      lVar9 = lVar10;
    }
    lVar12 = (longlong)iVar16 * 0x30;
    local_1b60 = lVar12 + 8 + lVar9;
    local_1b58 = &local_1b48;
    TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FPolygonID_const_&,FOctreeElementId_const_&>_>
              (*(longlong *)(lVar9 + lVar12) + 0xf80,&local_1b68,&local_1b60,0);
  }
  do {
    uVar11 = *(uint *)(lVar10 + 0x188);
    uVar11 = (uVar11 - 1 ^ uVar11) & 0x7fffffff ^ uVar11;
    *(uint *)(lVar10 + 0x188) = uVar11;
    plVar1 = (longlong *)(lVar10 + 0x140);
    lVar9 = lVar10;
    if (6 < (uVar11 & 0x7fffffff)) {
      lVar9 = lVar17;
    }
    lVar10 = *plVar1;
    lVar17 = lVar9;
  } while (*plVar1 != 0);
  if (lVar9 != 0) {
    local_19a8 = (undefined1 *)0x0;
    local_1998 = 0;
    local_1b60 = lVar9;
    if ((*(uint *)(lVar9 + 0x188) & 0x7fffffff) != 0) {
      FUN_14089e660(local_1ac8);
    }
    local_1978 = *(undefined8 *)(param_1 + 400);
    uStack_1970 = *(undefined8 *)(param_1 + 0x198);
    local_1968 = *(undefined8 *)(param_1 + 0x1a0);
    uStack_1960 = *(undefined8 *)(param_1 + 0x1a8);
    local_1958 = *(undefined8 *)(param_1 + 0x1b0);
    uStack_1950 = *(undefined8 *)(param_1 + 0x1b8);
    local_88 = (undefined1 *)0x0;
    local_78 = 0;
    local_1988 = lVar9;
    do {
      lVar10 = local_1988;
      for (iVar16 = 0; (uVar18 = local_1998, -1 < iVar16 && (iVar16 < *(int *)(lVar10 + 0x130)));
          iVar16 = iVar16 + 1) {
        iVar8 = (int)local_1998;
        lVar12 = (longlong)(int)local_1998;
        lVar20 = (longlong)iVar16 * 0x30;
        iVar19 = (int)local_1998 + 1;
        local_1998 = CONCAT44(local_1998._4_4_,iVar19);
        lVar17 = *(longlong *)(lVar10 + 0x120);
        if (*(longlong *)(lVar10 + 0x120) == 0) {
          lVar17 = lVar10;
        }
        if (local_1998._4_4_ < iVar19) {
          TArray<FEditableMeshOctreePolygon,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow
                    (local_1ac8,uVar18 & 0xffffffff);
        }
        uVar7 = ((undefined8 *)(lVar17 + lVar20))[1];
        iStack_1b20 = iVar8;
        puVar13 = local_1ac8;
        if (local_19a8 != (undefined1 *)0x0) {
          puVar13 = local_19a8;
        }
        *(undefined8 *)(puVar13 + lVar12 * 0x30) = *(undefined8 *)(lVar17 + lVar20);
        *(undefined8 *)((longlong)(puVar13 + lVar12 * 0x30) + 8) = uVar7;
        puVar2 = (undefined4 *)(lVar17 + 0x10 + lVar20);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        puVar3 = (undefined4 *)(puVar13 + lVar12 * 0x30 + 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar3[2] = uVar5;
        puVar3[3] = uVar6;
        puVar15 = (undefined8 *)(lVar17 + 0x20 + lVar20);
        uVar7 = puVar15[1];
        *(undefined8 *)(puVar13 + lVar12 * 0x30 + 0x20) = *puVar15;
        *(undefined8 *)((longlong)(puVar13 + lVar12 * 0x30 + 0x20) + 8) = uVar7;
        local_1b28._0_4_ = (undefined4)lVar9;
        local_1b28._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
        local_1b18 = (undefined4)local_1b28;
        uStack_1b14 = local_1b28._4_4_;
        iStack_1b10 = iVar8;
        uStack_1b0c = uStack_1b1c;
        lVar17 = *(longlong *)(lVar10 + 0x120);
        if (*(longlong *)(lVar10 + 0x120) == 0) {
          lVar17 = lVar10;
        }
        local_1b48 = lVar20 + 8 + lVar17;
        puStack_1b40 = &local_1b18;
        local_1b28 = lVar9;
        TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FPolygonID_const_&,FOctreeElementId_const_&>_>
                  (*(longlong *)(lVar17 + lVar20) + 0xf80,local_1b64,&local_1b48,0);
      }
      uVar11 = local_1b68 & 0xfffffff0;
      do {
        uVar18 = local_78;
        lVar17 = *(longlong *)(lVar10 + 0x148 + (ulonglong)(uVar11 & 7) * 8);
        if ((lVar17 != 0) && ((*(uint *)(lVar17 + 0x188) & 0x7fffffff) != 0)) {
          lVar17 = (longlong)(int)local_78;
          iVar16 = (int)local_78 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar16);
          if (local_78._4_4_ < iVar16) {
            TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
            ::ResizeGrow(local_1948,uVar18 & 0xffffffff);
          }
          puVar13 = local_1948;
          if (local_88 != (undefined1 *)0x0) {
            puVar13 = local_88;
          }
          puVar14 = (undefined8 *)(puVar13 + lVar17 * 0x40);
          puVar15 = (undefined8 *)0x0;
          if (puVar14 != (undefined8 *)0x0) {
            puVar14[2] = 0;
            *(undefined4 *)(puVar14 + 3) = 0;
            *(undefined8 *)((longlong)puVar14 + 0x1c) = 0x3f800000;
            *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
            *(undefined4 *)((longlong)puVar14 + 0x2c) = 0x3f800000;
            *puVar14 = 0;
            puVar15 = puVar14;
          }
          *puVar15 = *(undefined8 *)(local_1988 + 0x148 + (ulonglong)(uVar11 & 7) * 8);
          *(float *)(puVar15 + 2) =
               local_1958._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar11 & 1) * 4) +
               (float)local_1978;
          *(float *)((longlong)puVar15 + 0x14) =
               local_1958._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar11 >> 1 & 1) * 4) +
               local_1978._4_4_;
          fVar21 = *(float *)(&DAT_146534f00 + (ulonglong)(uVar11 >> 2 & 1) * 4);
          *(undefined4 *)((longlong)puVar15 + 0x1c) = 0;
          *(float *)(puVar15 + 3) = local_1958._4_4_ * fVar21 + (float)uStack_1970;
          *(float *)(puVar15 + 4) = (float)local_1958;
          *(float *)((longlong)puVar15 + 0x24) = (float)local_1958;
          *(float *)(puVar15 + 5) = (float)local_1958;
          *(undefined4 *)((longlong)puVar15 + 0x2c) = 0;
          fVar21 = (float)local_1958 * 0.5 * 1.0625;
          *(float *)(puVar15 + 6) = fVar21;
          *(float *)((longlong)puVar15 + 0x34) = (float)local_1958 - fVar21;
        }
        if (((byte)uVar11 & 7) < 7) {
          uVar11 = uVar11 ^ (uVar11 + 1 ^ uVar11) & 7;
        }
        else {
          uVar11 = uVar11 | 8;
        }
      } while ((uVar11 >> 3 & 1) == 0);
      local_1b68 = uVar11;
      if ((int)local_78 == 0) {
        local_1b08 = 0;
        local_1988 = 0;
        lStack_1980 = lStack_1b00;
        local_1958 = CONCAT44(uStack_1ad4,local_1ad8);
        uStack_1950 = CONCAT44(uStack_1acc,uStack_1ad0);
        local_1978 = 0;
        uStack_1970 = 0x3f80000000000000;
        local_1968 = 0;
        uStack_1960 = 0x3f80000000000000;
      }
      else {
        iVar16 = (int)local_78 + -1;
        puVar13 = local_1948;
        if (local_88 != (undefined1 *)0x0) {
          puVar13 = local_88;
        }
        lVar10 = (longlong)iVar16 * 0x40;
        local_1988 = *(longlong *)(puVar13 + lVar10);
        lStack_1980 = *(longlong *)((longlong)(puVar13 + lVar10) + 8);
        local_1978 = *(undefined8 *)(puVar13 + lVar10 + 0x10);
        uStack_1970 = *(undefined8 *)((longlong)(puVar13 + lVar10 + 0x10) + 8);
        local_1968 = *(undefined8 *)(puVar13 + lVar10 + 0x20);
        uStack_1960 = *(undefined8 *)((longlong)(puVar13 + lVar10 + 0x20) + 8);
        local_1958 = *(undefined8 *)(puVar13 + lVar10 + 0x30);
        uStack_1950 = *(undefined8 *)((longlong)(puVar13 + lVar10 + 0x30) + 8);
        iVar8 = ((int)local_78 - iVar16) + -1;
        if (iVar8 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (puVar13 + (longlong)iVar16 * 0x40,puVar13 + (longlong)(int)local_78 * 0x40,
                     (longlong)iVar8 << 6);
        }
        local_78 = CONCAT44(local_78._4_4_,(int)local_78 + -1);
        TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
        ::ResizeShrink(local_1948);
      }
      lVar10 = local_1b60;
      lVar9 = local_1b60;
    } while (local_1988 != 0);
    if (local_88 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    Exchange<TArray<FEditableMeshOctreePolygon,TInlineAllocator<6,FDefaultAllocator>_>_>
              (lVar10,local_1ac8);
    lVar17 = local_1b38;
    *(uint *)(lVar10 + 0x188) = *(uint *)(lVar10 + 0x188) | 0x80000000;
    uVar11 = 0;
    do {
      uVar18 = (ulonglong)(uVar11 & 7);
      if (*(longlong *)(lVar10 + 0x148 + uVar18 * 8) != 0) {
        *(longlong *)(lVar17 + 0x1c8) = (longlong)(*(int *)(lVar17 + 0x1c8) + -400);
        lVar9 = *(longlong *)(lVar10 + 0x148 + uVar18 * 8);
        if (lVar9 != 0) {
          TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNode::~FNode(lVar9);
          FMemory::operator_delete(lVar9,400);
        }
      }
      *(undefined8 *)(lVar10 + 0x148 + uVar18 * 8) = 0;
      if (((byte)uVar11 & 7) < 7) {
        uVar11 = uVar11 ^ (uVar11 + 1 ^ uVar11) & 7;
      }
      else {
        uVar11 = uVar11 | 8;
      }
    } while (uVar11 >> 3 == 0);
    if (local_19a8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14089c920 FUN_14089c920 body=1152 status=ok
// SIG undefined FUN_14089c920(void)

void FUN_14089c920(longlong param_1,int param_2,int param_3,uint param_4,char param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  int local_res10 [2];
  int local_res18 [2];
  uint local_res20 [2];
  undefined8 *local_80;
  longlong local_78;
  longlong *local_70;
  int local_68;
  int local_64;
  undefined4 *local_60;
  uint local_58;
  undefined4 uStack_54;
  
  puVar16 = (undefined4 *)0x0;
  local_60 = (undefined4 *)0x0;
  local_58 = 0;
  uStack_54 = 0;
  plVar4 = (longlong *)
           ((longlong)param_2 * 0x38 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8));
  uVar17 = param_4;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  local_68 = param_2;
  local_64 = param_3;
  if ((int)param_4 < 1) {
    iVar10 = param_2;
    uVar3 = local_58;
    if (((int)param_4 < 0) && (iVar8 = -param_4, param_4 != 0)) {
      plVar12 = (longlong *)((longlong)(int)param_4 * 0x18 + 8);
      do {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      uVar17 = local_res20[0];
      uVar3 = param_4;
      if (param_4 - local_res20[0] != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)(int)param_4 * 0x18),(void *)0x0,
                   (longlong)(int)(param_4 - local_res20[0]) * 0x18);
        uVar17 = local_res20[0];
        uVar3 = param_4;
      }
    }
  }
  else {
    uStack_54 = 0;
    local_58 = param_4;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_60,0);
    puVar5 = local_60 + 5;
    puVar9 = local_60;
    do {
      *puVar9 = DAT_14652d640;
      puVar9 = puVar9 + 6;
      puVar5[-4] = DAT_14652d63c;
      *(undefined8 *)(puVar5 + -3) = 0;
      *(undefined8 *)(puVar5 + -1) = 0;
      param_4 = param_4 - 1;
      puVar5 = puVar5 + 6;
      puVar16 = local_60;
      iVar10 = local_68;
      uVar3 = local_58;
    } while (param_4 != 0);
  }
  local_58 = uVar3;
  uVar2 = uStack_54;
  uVar3 = local_58;
  iVar8 = local_64;
  lVar15 = (longlong)(int)uVar17;
  if (0 < (int)uVar17) {
    puVar9 = puVar16;
    lVar14 = (longlong)local_res18[0] * 4;
    do {
      *puVar9 = *(undefined4 *)(lVar14 + *plVar4);
      puVar9[1] = DAT_14652d63c;
      lVar15 = lVar15 + -1;
      puVar9 = puVar9 + 6;
      lVar14 = lVar14 + 4;
      uVar17 = local_res20[0];
    } while (lVar15 != 0);
  }
  local_80 = (undefined8 *)operator_new();
  if (local_80 == (undefined8 *)0x0) {
    local_80 = (undefined8 *)0x0;
  }
  else {
    *local_80 = &PTR_Execute_144115ab0;
    *(int *)(local_80 + 1) = iVar10;
    *(int *)((longlong)local_80 + 0xc) = iVar8;
    local_80[2] = puVar16;
    local_60 = (undefined4 *)0x0;
    *(uint *)(local_80 + 3) = uVar3;
    *(undefined4 *)((longlong)local_80 + 0x1c) = uVar2;
    local_58 = 0;
    uStack_54 = 0;
  }
  FUN_1408740e0(param_1,&local_80);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (&local_60);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146860218) && (_Init_thread_header(&DAT_146860218), DAT_146860218 == -1))
  {
    atexit((_func_5014 *)&LAB_143e439f0);
    _Init_thread_footer(&DAT_146860218);
  }
  DAT_146860210 = 0;
  if (DAT_146860214 < 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146860208,0);
  }
  local_70 = (longlong *)(*(longlong *)(param_1 + 0x28) + 0x38);
  lVar15 = (longlong)(int)(uVar17 - 1);
  if (-1 < (int)(uVar17 - 1)) {
    local_80 = (undefined8 *)((local_res18[0] + lVar15) * 4);
    do {
      iVar10 = *(int *)((longlong)local_80 + *plVar4);
      lVar14 = *local_70 + (longlong)iVar10 * 0x18;
      iVar8 = *(int *)(*local_70 + 0x10 + (longlong)iVar10 * 0x18);
      lVar6 = (longlong)iVar8;
      local_78 = lVar14;
      if (iVar8 != 0) {
        iVar11 = 0;
        lVar13 = 0;
        bVar19 = **(int **)(lVar14 + 8) != param_2;
        iVar8 = 0;
        do {
          lVar13 = lVar13 + 1;
          iVar18 = iVar8 + 1;
          if (lVar13 < lVar6) {
            piVar7 = (int *)(*(longlong *)(lVar14 + 8) + lVar13 * 4);
            do {
              if (bVar19 != (*piVar7 != param_2)) break;
              iVar18 = iVar18 + 1;
              lVar13 = lVar13 + 1;
              piVar7 = piVar7 + 1;
            } while (lVar13 < lVar6);
          }
          if (bVar19 != false) {
            if (iVar11 != iVar8) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(lVar14 + 8) + (longlong)iVar11 * 4),
                         (void *)(*(longlong *)(lVar14 + 8) + (longlong)iVar8 * 4),
                         (longlong)(iVar18 - iVar8) << 2);
              lVar14 = local_78;
            }
            iVar11 = iVar11 + (iVar18 - iVar8);
          }
          bVar19 = (bool)(bVar19 ^ 1);
          iVar8 = iVar18;
        } while (lVar13 < lVar6);
        *(int *)(lVar14 + 0x10) = iVar11;
      }
      puVar1 = local_80;
      iVar8 = DAT_146860210;
      if ((param_5 != '\0') && (*(int *)(lVar14 + 0x10) == 0)) {
        lVar14 = (longlong)DAT_146860210;
        DAT_146860210 = DAT_146860210 + 1;
        if (DAT_146860214 < DAT_146860210) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146860208,iVar8);
        }
        *(int *)(DAT_146860208 + lVar14 * 4) = iVar10;
      }
      lVar15 = lVar15 + -1;
      local_80 = (undefined8 *)((longlong)puVar1 + -4);
      uVar17 = local_res20[0];
    } while (-1 < lVar15);
  }
  if (uVar17 != 0) {
    iVar10 = (int)plVar4[1];
    iVar8 = (iVar10 - local_res18[0]) - uVar17;
    if (iVar8 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar4 + (longlong)local_res18[0] * 4),
                 (void *)(*plVar4 + (longlong)(int)(local_res18[0] + uVar17) * 4),
                 (longlong)iVar8 << 2);
      iVar10 = (int)plVar4[1];
    }
    *(uint *)(plVar4 + 1) = iVar10 - uVar17;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar4);
  }
  if (0 < DAT_146860210) {
    FUN_14087d750(param_1,&DAT_146860208,0);
  }
  FUN_14085a180(param_1 + 0xde0,local_res20,local_res10,0);
  FUN_14085a180(param_1 + 0xd90,local_res20,local_res10,0);
  if (*(longlong *)(param_1 + 0xf70) != 0) {
    local_res20[0] = local_res20[0] & 0xffffff00;
    FUN_14085a180(param_1 + 0x1020,local_res18,local_res10,local_res20);
    if ((char)local_res20[0] == '\0') {
      FUN_14085a180(param_1 + 0xfd0,local_res20,local_res10,0);
    }
  }
  return;
}



// FUNCTION 14089cda0 FUN_14089cda0 body=797 status=ok
// SIG undefined FUN_14089cda0(void)

void FUN_14089cda0(longlong param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14685f250) && (_Init_thread_header(&DAT_14685f250), DAT_14685f250 == -1))
  {
    atexit((_func_5014 *)&LAB_143e445a0);
    _Init_thread_footer(&DAT_14685f250);
  }
  TArray<FChangeVertexInstancesForPolygon,FDefaultAllocator>::Reset
            (&DAT_14685f240,*(undefined4 *)(param_4 + 1));
  piVar12 = (int *)*param_4;
  lVar3 = *(longlong *)(param_1 + 0x28);
  piVar8 = piVar12 + *(int *)(param_4 + 1);
  iVar6 = DAT_14685f248;
  do {
    if (piVar12 == piVar8) {
      DAT_14685f248 = iVar6;
      FUN_140875f10(param_1,&DAT_14685f240);
      return;
    }
    iVar7 = *piVar12;
    DAT_14685f248 = iVar6 + 1;
    if (DAT_14685f24c < DAT_14685f248) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&DAT_14685f240,iVar6);
    }
    puVar1 = (undefined4 *)(DAT_14685f240 + (longlong)iVar6 * 0x28);
    *puVar1 = DAT_14652d64c;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    lVar2 = DAT_14685f240;
    iVar6 = DAT_14685f248 + -1;
    *(int *)(DAT_14685f240 + (longlong)iVar6 * 0x28) = iVar7;
    lVar2 = lVar2 + (longlong)iVar6 * 0x28;
    puVar14 = (undefined8 *)((longlong)iVar7 * 0x38 + *(longlong *)(lVar3 + 0xa8));
    piVar4 = (int *)*puVar14;
    for (piVar11 = piVar4; piVar11 != piVar4 + *(int *)(puVar14 + 1); piVar11 = piVar11 + 1) {
      if (*piVar11 == param_2) {
        iVar6 = (int)((longlong)piVar11 - (longlong)piVar4 >> 2);
        if (iVar6 != -1) {
          iVar7 = *(int *)(lVar2 + 0x10);
          iVar10 = iVar7 + 1;
          *(int *)(lVar2 + 0x10) = iVar10;
          if (*(int *)(lVar2 + 0x14) < iVar10) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 8);
          }
          *(undefined8 *)(*(longlong *)(lVar2 + 8) + (longlong)iVar7 * 8) = 0;
          **(int **)(lVar2 + 8) = iVar6;
          *(undefined4 *)(*(longlong *)(lVar2 + 8) + 4) = param_3;
          goto LAB_14089d046;
        }
        break;
      }
    }
    iVar6 = *(int *)(lVar2 + 0x20);
    iVar7 = *(int *)(puVar14 + 3);
    if (iVar6 < iVar7) {
      *(int *)(lVar2 + 0x20) = iVar7;
      iVar10 = iVar7 - iVar6;
      if (*(int *)(lVar2 + 0x24) < iVar7) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x18,iVar6);
      }
      puVar9 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar2 + 0x18));
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9 = puVar9 + 2;
      }
    }
    else if (iVar7 < iVar6) {
      TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
                (lVar2 + 0x18,iVar7,iVar6 - iVar7,1);
    }
    lVar13 = 0;
    puVar9 = (undefined8 *)puVar14[2];
    puVar14 = puVar9 + (longlong)*(int *)(puVar14 + 3) * 2;
    for (; puVar9 != puVar14; puVar9 = puVar9 + 2) {
      piVar4 = (int *)*puVar9;
      for (piVar11 = piVar4; piVar11 != piVar4 + *(int *)(puVar9 + 1); piVar11 = piVar11 + 1) {
        if (*piVar11 == param_2) {
          iVar6 = (int)((longlong)piVar11 - (longlong)piVar4 >> 2);
          if (iVar6 != -1) {
            lVar13 = lVar13 * 0x10;
            plVar15 = (longlong *)(*(longlong *)(lVar2 + 0x18) + lVar13);
            lVar5 = plVar15[1];
            iVar7 = (int)lVar5 + 1;
            *(int *)(plVar15 + 1) = iVar7;
            if (*(int *)((longlong)plVar15 + 0xc) < iVar7) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15);
            }
            *(undefined8 *)(*plVar15 + (longlong)(int)lVar5 * 8) = 0;
            **(int **)(lVar13 + *(longlong *)(lVar2 + 0x18)) = iVar6;
            *(undefined4 *)(*(longlong *)(lVar13 + *(longlong *)(lVar2 + 0x18)) + 4) = param_3;
            goto LAB_14089d046;
          }
          break;
        }
      }
      lVar13 = lVar13 + 1;
    }
LAB_14089d046:
    piVar12 = piVar12 + 1;
    iVar6 = DAT_14685f248;
  } while( true );
}



// FUNCTION 14089d0c0 FUN_14089d0c0 body=361 status=ok
// SIG undefined FUN_14089d0c0(void)

void FUN_14089d0c0(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    iVar8 = param_2 + -1;
    lVar11 = (longlong)iVar8;
    if (iVar6 <= lVar11) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar10 = lVar11 * 0x38;
      lVar11 = (lVar11 - iVar6) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar8;
        }
        *(undefined4 *)(lVar10 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar10 + 4 + *param_1) = uVar5;
        lVar10 = lVar10 + -0x38;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar8;
        iVar8 = iVar8 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar8 = (int)param_1[5];
        iVar6 = iVar8 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
          uVar2 = (int)(iVar8 + 0x20 + (iVar8 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar8;
        if (iVar8 < 0) {
          iVar6 = iVar8 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 14089d230 FUN_14089d230 body=376 status=ok
// SIG undefined FUN_14089d230(void)

void FUN_14089d230(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    iVar10 = param_2 + -1;
    lVar11 = (longlong)iVar10;
    if (iVar6 <= lVar11) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar8 = lVar11 * 0xc;
      lVar11 = (lVar11 - iVar6) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)(*param_1 + (longlong)(int)param_1[6] * 0xc) = iVar10;
        }
        *(undefined4 *)(lVar8 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar8 + 4 + *param_1) = uVar5;
        lVar8 = lVar8 + -0xc;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar10;
        iVar10 = iVar10 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar10 = (int)param_1[5];
        iVar6 = iVar10 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
          uVar2 = (int)(iVar10 + 0x20 + (iVar10 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar10;
        if (iVar10 < 0) {
          iVar6 = iVar10 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar10 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 14089d3b0 FUN_14089d3b0 body=376 status=ok
// SIG undefined FUN_14089d3b0(void)

void FUN_14089d3b0(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar6);
    }
    iVar10 = param_2 + -1;
    lVar11 = (longlong)iVar10;
    if (iVar6 <= lVar11) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar8 = lVar11 << 5;
      lVar11 = (lVar11 - iVar6) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar10;
        }
        *(undefined4 *)(lVar8 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar8 + 4 + *param_1) = uVar5;
        lVar8 = lVar8 + -0x20;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar10;
        iVar10 = iVar10 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar10 = (int)param_1[5];
        iVar6 = iVar10 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
          uVar2 = (int)(iVar10 + 0x20 + (iVar10 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar10;
        if (iVar10 < 0) {
          iVar6 = iVar10 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar10 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 14089d530 FUN_14089d530 body=376 status=ok
// SIG undefined FUN_14089d530(void)

void FUN_14089d530(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    iVar10 = param_2 + -1;
    lVar11 = (longlong)iVar10;
    if (iVar6 <= lVar11) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar8 = lVar11 * 0x48;
      lVar11 = (lVar11 - iVar6) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x48) = iVar10;
        }
        *(undefined4 *)(lVar8 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar8 + 4 + *param_1) = uVar5;
        lVar8 = lVar8 + -0x48;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar10;
        iVar10 = iVar10 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar10 = (int)param_1[5];
        iVar6 = iVar10 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
          uVar2 = (int)(iVar10 + 0x20 + (iVar10 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar10;
        if (iVar10 < 0) {
          iVar6 = iVar10 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar10 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 14089d6b0 Reset body=274 status=ok
// SIG undefined Reset(void)

void TArray<FChangeVertexInstancesForPolygon,FDefaultAllocator>::Reset
               (longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (int)param_1[1];
  if (iVar4 < param_2) {
    if (iVar2 != 0) {
      puVar3 = (undefined8 *)(*param_1 + 0x18);
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
        if (puVar3[-2] != 0) {
          FMemory::Free();
        }
        puVar3 = puVar3 + 5;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar4 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar4 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar2 != 0) {
      puVar3 = (undefined8 *)(*param_1 + 0x18);
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
        if (puVar3[-2] != 0) {
          FMemory::Free();
        }
        puVar3 = puVar3 + 5;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 14089d7d0 FUN_14089d7d0 body=182 status=ok
// SIG undefined FUN_14089d7d0(void)

void FUN_14089d7d0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 8);
      do {
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 6;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 8);
      do {
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 6;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 14089d890 Reset body=248 status=ok
// SIG undefined Reset(void)

void TArray<FPolygonToCreate,FDefaultAllocator>::Reset(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (int)param_1[1];
  if (iVar4 < param_2) {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 0x18);
      do {
        iVar4 = (int)plVar3[1];
        lVar1 = *plVar3;
        if (iVar4 != 0) {
          do {
            TArray<FNamedInterfaceDef,FDefaultAllocator>::
            ~TArray<FNamedInterfaceDef,FDefaultAllocator>(lVar1);
            lVar1 = lVar1 + 0x10;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          lVar1 = *plVar3;
        }
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar3 + -2);
        plVar3 = plVar3 + 6;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar4 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar4 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 0x18);
      do {
        iVar4 = (int)plVar3[1];
        lVar1 = *plVar3;
        if (iVar4 != 0) {
          do {
            TArray<FNamedInterfaceDef,FDefaultAllocator>::
            ~TArray<FNamedInterfaceDef,FDefaultAllocator>(lVar1);
            lVar1 = lVar1 + 0x10;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          lVar1 = *plVar3;
        }
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar3 + -2);
        plVar3 = plVar3 + 6;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 14089d990 Reset body=176 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<TTuple<FVertexInstanceID,FVertexInstanceID>,int>,TDefaultMapHashableKeyFuncs<TTuple<FVertexInstanceID,FVertexInstanceID>,int,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14089da40 Reset body=176 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FPolygonID,`UEditableMesh::QuadrangulatePolygonGroup'::`2'::FAdjacentPolygons>,TDefaultMapHashableKeyFuncs<FPolygonID,`UEditableMesh::QuadrangulatePolygonGroup'::`2'::FAdjacentPolygons,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14089daf0 Reset body=176 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14089dba0 FUN_14089dba0 body=176 status=ok
// SIG undefined FUN_14089dba0(void)

void FUN_14089dba0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
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
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14089dc50 Reset body=176 status=ok
// SIG undefined Reset(void)

void TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14089dd00 Reset body=211 status=ok
// SIG undefined Reset(void)

void TSparseArray<FRenderingPolygon,FDefaultSparseArrayAllocator>::Reset(longlong param_1)

{
  int iVar1;
  void *_Dst;
  longlong *local_38;
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_38 + 8 + (longlong)local_1c * 0x18) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14089dde0 Reset body=209 status=ok
// SIG undefined Reset(void)

void TSparseArray<FRenderingPolygonGroup,FDefaultSparseArrayAllocator>::Reset(longlong param_1)

{
  int iVar1;
  void *_Dst;
  longlong *local_38;
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (*local_38 + (longlong)local_1c * 0x48 + 0x10);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14089dec0 FUN_14089dec0 body=163 status=ok
// SIG undefined FUN_14089dec0(void)

void FUN_14089dec0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x120);
  if (param_3 < 7) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x30);
    pvVar1 = *(void **)((longlong)param_1 + 0x120);
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
        *(void **)((longlong)param_1 + 0x120) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x30);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x120) = uVar2;
  return;
}



// FUNCTION 14089df70 FUN_14089df70 body=155 status=ok
// SIG undefined FUN_14089df70(void)

void FUN_14089df70(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xb0);
  if (param_3 < 3) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x58);
    pvVar1 = *(void **)((longlong)param_1 + 0xb0);
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
        *(void **)((longlong)param_1 + 0xb0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x58);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xb0) = uVar2;
  return;
}



// FUNCTION 14089e010 ResizeAllocation body=161 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<99,TSizedDefaultAllocator<32>_>::
     ForElementType<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference>
     ::ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18c0);
  if (param_3 < 100) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 6);
    pvVar1 = *(void **)((longlong)param_1 + 0x18c0);
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
        *(void **)((longlong)param_1 + 0x18c0) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 6);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x18c0) = uVar2;
  return;
}



// FUNCTION 14089e0c0 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x60,0);
    iVar3 = (int)(uVar1 / 0x60);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x60,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 14089e150 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x30,0);
    iVar3 = (int)(uVar1 / 0x30);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x30,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 14089e1e0 ResizeGrow body=157 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FEditableMeshOctreePolygon,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x130);
  if (uVar1 < 7) {
    iVar4 = 6;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x134) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x30,0);
    iVar4 = (int)(uVar3 / 0x30);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x134) = iVar4;
  FUN_14089dec0(param_1,param_2,iVar4,0x30);
  return;
}



// FUNCTION 14089e280 FUN_14089e280 body=153 status=ok
// SIG undefined FUN_14089e280(void)

void FUN_14089e280(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (uVar1 < 3) {
    iVar4 = 2;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0xbc) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x58,0);
    iVar4 = (int)(uVar3 / 0x58);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xbc) = iVar4;
  FUN_14089df70(param_1,param_2,iVar4,0x58);
  return;
}



// FUNCTION 14089e320 ResizeGrow body=137 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
     ::ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18d0);
  if (uVar1 < 100) {
    iVar2 = 99;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x18d4) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 6,0);
    iVar2 = (int)(uVar3 >> 6);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x18d4) = iVar2;
  TInlineAllocator<99,TSizedDefaultAllocator<32>_>::
  ForElementType<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference>::
  ResizeAllocation(param_1,param_2,iVar2,0x40);
  return;
}



// FUNCTION 14089e3b0 ResizeShrink body=178 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FEditableMeshOctreePolygon,TInlineAllocator<6,FDefaultAllocator>_>::ResizeShrink
               (longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x130);
  uVar3 = *(uint *)(param_1 + 0x134);
  if (uVar2 < 7) {
    uVar2 = 6;
    goto LAB_14089e435;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0x30)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0x30,0);
        uVar3 = *(uint *)(param_1 + 0x134);
        uVar2 = (uint)(uVar1 / 0x30);
      }
      goto LAB_14089e435;
    }
    if (uVar2 == 0) goto LAB_14089e435;
  }
  uVar2 = uVar3;
LAB_14089e435:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x134) = uVar2;
    FUN_14089dec0(param_1,*(undefined4 *)(param_1 + 0x130),uVar2,0x30);
    return;
  }
  return;
}



// FUNCTION 14089e470 FUN_14089e470 body=156 status=ok
// SIG undefined FUN_14089e470(void)

ulonglong FUN_14089e470(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x78) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x78,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0x8888888888888889) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x78);
      }
      goto LAB_14089e4de;
    }
    if (iVar4 == 0) goto LAB_14089e4de;
  }
  iVar4 = iVar5;
LAB_14089e4de:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x78,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 14089e510 FUN_14089e510 body=170 status=ok
// SIG undefined FUN_14089e510(void)

void FUN_14089e510(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xb8);
  uVar3 = *(uint *)(param_1 + 0xbc);
  if (uVar2 < 3) {
    uVar2 = 2;
    goto LAB_14089e58d;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0x58)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0x58,0);
        uVar3 = *(uint *)(param_1 + 0xbc);
        uVar2 = (uint)(uVar1 / 0x58);
      }
      goto LAB_14089e58d;
    }
    if (uVar2 == 0) goto LAB_14089e58d;
  }
  uVar2 = uVar3;
LAB_14089e58d:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0xbc) = uVar2;
    FUN_14089df70(param_1,*(undefined4 *)(param_1 + 0xb8),uVar2,0x58);
    return;
  }
  return;
}



// FUNCTION 14089e5c0 ResizeShrink body=159 status=ok
// SIG undefined ResizeShrink(void)

void TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
     ::ResizeShrink(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x18d0);
  uVar3 = *(uint *)(param_1 + 0x18d4);
  if (uVar2 < 100) {
    uVar2 = 99;
    goto LAB_14089e632;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 6)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 6,0);
        uVar3 = *(uint *)(param_1 + 0x18d4);
        uVar2 = (uint)(uVar1 >> 6);
      }
      goto LAB_14089e632;
    }
    if (uVar2 == 0) goto LAB_14089e632;
  }
  uVar2 = uVar3;
LAB_14089e632:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x18d4) = uVar2;
    TInlineAllocator<99,TSizedDefaultAllocator<32>_>::
    ForElementType<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference>
    ::ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0x18d0),uVar2,0x40);
    return;
  }
  return;
}



// FUNCTION 14089e660 FUN_14089e660 body=127 status=ok
// SIG undefined FUN_14089e660(void)

void FUN_14089e660(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 7) {
      iVar2 = 6;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x30,0);
      iVar2 = (int)(uVar1 / 0x30);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x134)) {
    *(int *)(param_1 + 0x134) = iVar2;
    FUN_14089dec0(param_1,*(undefined4 *)(param_1 + 0x130),iVar2,0x30);
  }
  return;
}



// FUNCTION 14089e6e0 FUN_14089e6e0 body=1027 status=ok
// SIG undefined FUN_14089e6e0(void)

void FUN_14089e6e0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  uint *puStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  int iStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  uint *local_90;
  undefined8 uStack_88;
  uint *local_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  uint *local_68;
  uint *puStack_60;
  uint *puStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  int iStack_48;
  uint uStack_44;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar1 = (uint *)(param_1 + 0xde0);
  uVar2 = *(uint *)(param_1 + 0xe08);
  puVar12 = (uint *)(param_1 + 0xdf0);
  local_d8 = (uint *)0x100000000;
  uStack_c4 = 0;
  iStack_c0 = 0;
  if (uVar2 != 0) {
    puVar11 = *(uint **)(param_1 + 0xe00);
    if (*(uint **)(param_1 + 0xe00) == (uint *)0x0) {
      puVar11 = puVar12;
    }
    uVar6 = *puVar11;
    iStack_c0 = 0;
    iVar7 = 0;
    while (uVar6 == 0) {
      iStack_c0 = iStack_c0 + 0x20;
      uVar9 = (ulonglong)local_d8 >> 0x20;
      local_d8 = (uint *)CONCAT44((int)uVar9,iVar7 + 1);
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14089e7ad;
      uVar6 = puVar11[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    local_d8 = (uint *)CONCAT44(uVar6,SUB84(local_d8,0));
    if (uVar6 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_c4 = (iStack_c0 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_c4) {
LAB_14089e7ad:
      uStack_c4 = uVar2;
    }
  }
  local_c8 = 0xffffffff;
  uStack_a4 = *(uint *)(param_1 + 0xe08);
  uStack_98 = CONCAT44(uStack_bc,iStack_c0);
  puStack_b0 = local_d8;
  uStack_a8 = -1 << ((byte)uStack_a4 & 0x1f);
  uVar10 = uStack_a4 & 0xffffffe0;
  iStack_a0 = -1;
  uStack_9c = uStack_c4;
  uStack_78 = 0xffffffff;
  uStack_74 = uStack_c4;
  uStack_88 = local_d8;
  uStack_d0 = puVar12;
  local_b8 = puVar1;
  local_90 = puVar1;
  local_80 = puVar12;
  local_70 = uStack_98;
  uVar6 = uStack_a4;
  if (uStack_a4 != uVar2) {
    puVar11 = *(uint **)(param_1 + 0xe00);
    if (*(uint **)(param_1 + 0xe00) == (uint *)0x0) {
      puVar11 = puVar12;
    }
    uVar6 = puVar11[(int)uStack_a4 >> 5] & uStack_a8;
    iVar7 = (int)uStack_a4 >> 5;
    while (uVar6 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14089e885;
      uVar6 = puVar11[(longlong)iVar7 + 1];
      uStack_a8 = 0xffffffff;
      iVar7 = iVar7 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_a4 = (uVar10 - iVar7) + 0x1f;
    uVar6 = uStack_a4;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_14089e885:
      uStack_a4 = uVar2;
      uVar6 = uVar2;
    }
  }
  while (((uStack_74 != uVar6 || (local_80 != puVar12)) || (local_90 != puVar1))) {
    lVar8 = (longlong)*(int *)(*(longlong *)local_90 + (longlong)(int)uStack_74 * 0xc);
    FUN_140877840(param_1,lVar8,*(longlong *)(lVar3 + 0xa8) + 0x20 + lVar8 * 0x38);
    uStack_78 = uStack_78 & ~uStack_88._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_88);
  }
  uVar13 = 0;
  puVar14 = *(undefined8 **)(param_1 + 0xd78);
  uVar9 = (longlong)*(int *)(param_1 + 0xd80) & 0x1fffffffffffffff;
  if (puVar14 + *(int *)(param_1 + 0xd80) < puVar14) {
    uVar9 = uVar13;
  }
  if (uVar9 != 0) {
    do {
      plVar4 = (longlong *)*puVar14;
      local_d8 = (uint *)0x0;
      uStack_d0 = (uint *)0x0;
      if (0 < *(int *)(param_1 + 0xde8) - *(int *)(param_1 + 0xe14)) {
        TArray<float,FDefaultAllocator>::ResizeTo(&local_d8);
      }
      uVar2 = *(uint *)(param_1 + 0xe08);
      puStack_b0 = (uint *)(param_1 + 0xdf0);
      local_b8 = (uint *)0x100000000;
      uStack_a4 = 0;
      iStack_a0 = 0;
      if (uVar2 != 0) {
        puVar12 = *(uint **)(param_1 + 0xe00);
        if (*(uint **)(param_1 + 0xe00) == (uint *)0x0) {
          puVar12 = puStack_b0;
        }
        uVar6 = *puVar12;
        iVar7 = 0;
        while (uVar6 == 0) {
          iStack_a0 = iStack_a0 + 0x20;
          uVar5 = (ulonglong)local_b8 >> 0x20;
          local_b8 = (uint *)CONCAT44((int)uVar5,iVar7 + 1);
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_14089e9ef;
          uVar6 = puVar12[(longlong)iVar7 + 1];
          iVar7 = iVar7 + 1;
        }
        uVar6 = -uVar6 & uVar6;
        iVar7 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        local_b8 = (uint *)CONCAT44(uVar6,SUB84(local_b8,0));
        if (uVar6 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_a4 = (iStack_a0 - iVar7) + 0x1f;
        if ((int)uVar2 < (int)uStack_a4) {
LAB_14089e9ef:
          uStack_a4 = uVar2;
        }
      }
      uStack_a8 = 0xffffffff;
      uStack_50 = 0xffffffff;
      uStack_4c = uStack_a4;
      iStack_48 = iStack_a0;
      uStack_44 = uStack_9c;
      puStack_60 = local_b8;
      uStack_88 = local_b8;
      local_70 = CONCAT44(uStack_9c,iStack_a0);
      uStack_78 = 0xffffffff;
      uStack_74 = uStack_a4;
      local_90 = puVar1;
      local_80 = puStack_b0;
      local_68 = puVar1;
      puStack_58 = puStack_b0;
      if ((int)uStack_a4 < (int)uVar2) {
        do {
          uVar2 = uStack_74;
          uVar5 = (ulonglong)uStack_d0;
          lVar8 = (longlong)(int)uStack_d0;
          lVar3 = *(longlong *)local_90;
          iVar7 = (int)uStack_d0 + 1;
          uStack_d0 = (uint *)CONCAT44(uStack_d0._4_4_,iVar7);
          if (uStack_d0._4_4_ < iVar7) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_d8,uVar5 & 0xffffffff);
          }
          *(undefined4 *)((longlong)local_d8 + lVar8 * 4) =
               *(undefined4 *)(lVar3 + (longlong)(int)uVar2 * 0xc);
          uStack_78 = uStack_78 & ~uStack_88._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_88);
        } while ((int)uStack_74 < (int)local_80[6]);
      }
      (**(code **)(*plVar4 + 0x380))(plVar4,param_1,&local_d8);
      if (local_d8 != (uint *)0x0) {
        FMemory::Free();
      }
      puVar14 = puVar14 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar9);
  }
  return;
}



// FUNCTION 14089eaf0 FUN_14089eaf0 body=1596 status=ok
// SIG undefined FUN_14089eaf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14089eaf0(longlong param_1,float *param_2,float *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
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
  undefined1 auStack_1a78 [32];
  float local_1a58;
  float local_1a54;
  float local_1a50;
  float local_1a4c;
  float local_1a48;
  float local_1a44;
  float *local_1a40;
  undefined8 local_1a38;
  longlong lStack_1a30;
  undefined4 local_1a08;
  undefined4 uStack_1a04;
  undefined4 uStack_1a00;
  undefined4 uStack_19fc;
  longlong local_19f8;
  longlong lStack_19f0;
  undefined8 local_19e8;
  undefined8 uStack_19e0;
  undefined8 local_19d8;
  undefined8 uStack_19d0;
  undefined8 local_19c8;
  undefined8 uStack_19c0;
  undefined1 local_19b8 [6336];
  undefined1 *local_f8;
  undefined8 local_e8;
  ulonglong local_d8;
  undefined8 uStack_30;
  
  uStack_30 = 0x14089eb0f;
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1a78;
  *(undefined4 *)(param_4 + 1) = 0;
  local_1a40 = param_3;
  if (0x7fffffff < *(uint *)((longlong)param_4 + 0xc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_4,0);
  }
  if ((*(char *)(param_1 + 0xf68) != '\0') &&
     (local_19f8 = *(longlong *)(param_1 + 0xf70), local_19f8 != 0)) {
    fVar1 = param_2[2];
    fVar14 = param_3[2] - fVar1;
    fVar2 = param_2[1];
    local_1a44 = param_3[1] - fVar2;
    fVar3 = *param_2;
    local_1a48 = *param_3 - fVar3;
    local_1a50 = 3.4e+38;
    if (local_1a48 == 0.0) {
      local_1a58 = 3.4e+38;
    }
    else {
      local_1a58 = 1.0 / local_1a48;
    }
    if (local_1a44 == 0.0) {
      local_1a54 = 3.4e+38;
    }
    else {
      local_1a54 = 1.0 / local_1a44;
    }
    if (fVar14 != 0.0) {
      local_1a50 = 1.0 / fVar14;
    }
    local_19e8 = *(undefined8 *)(local_19f8 + 400);
    uStack_19e0 = *(undefined8 *)(local_19f8 + 0x198);
    local_19d8 = *(undefined8 *)(local_19f8 + 0x1a0);
    uStack_19d0 = *(undefined8 *)(local_19f8 + 0x1a8);
    local_19c8 = *(undefined8 *)(local_19f8 + 0x1b0);
    uStack_19c0 = *(undefined8 *)(local_19f8 + 0x1b8);
    local_f8 = (undefined1 *)0x0;
    local_e8 = 0;
    local_1a4c = fVar14;
    do {
      lVar6 = local_19f8;
      if (-1 < *(int *)(local_19f8 + 0x188)) {
        fVar14 = (float)((uint)fVar14 & 0xfffffff0);
        fVar20 = (float)local_19c8;
        fVar21 = local_19c8._4_4_;
        do {
          lVar8 = *(longlong *)(lVar6 + 0x148 + (ulonglong)((uint)fVar14 & 7) * 8);
          if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x188) & 0x7fffffff) != 0)) {
            fVar19 = fVar21 * *(float *)(&DAT_146534f00 + (ulonglong)((uint)fVar14 & 1) * 4) +
                     (float)local_19e8;
            bVar4 = false;
            fVar15 = fVar21 * *(float *)(&DAT_146534f00 + (ulonglong)((uint)fVar14 >> 1 & 1) * 4) +
                     local_19e8._4_4_;
            fVar18 = fVar20 + fVar19;
            fVar10 = fVar21 * *(float *)(&DAT_146534f00 + (ulonglong)((uint)fVar14 >> 2 & 1) * 4) +
                     (float)uStack_19e0;
            fVar19 = fVar19 - fVar20;
            fVar17 = fVar20 + fVar15;
            fVar15 = fVar15 - fVar20;
            fVar16 = fVar20 + fVar10;
            fVar10 = fVar10 - fVar20;
            if (fVar19 <= fVar3) {
              if (fVar3 <= fVar18) {
                fVar11 = 0.0;
              }
              else {
                bVar4 = true;
                if (fVar18 < *param_3) goto LAB_14089ef28;
                fVar11 = (fVar18 - fVar3) * local_1a58;
              }
            }
            else {
              bVar4 = true;
              if (*param_3 < fVar19) goto LAB_14089ef28;
              fVar11 = (fVar19 - fVar3) * local_1a58;
            }
            if (fVar15 <= fVar2) {
              if (fVar2 <= fVar17) {
                fVar13 = 0.0;
              }
              else {
                bVar4 = true;
                if (fVar17 < param_3[1]) goto LAB_14089ef28;
                fVar13 = (fVar17 - fVar2) * local_1a54;
              }
            }
            else {
              bVar4 = true;
              if (param_3[1] < fVar15) goto LAB_14089ef28;
              fVar13 = (fVar15 - fVar2) * local_1a54;
            }
            if (fVar10 <= fVar1) {
              if (fVar1 <= fVar16) {
                fVar12 = 0.0;
                if (bVar4) goto LAB_14089ee87;
LAB_14089ef0a:
                TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::
                TConstIterator<TInlineAllocator<99,FDefaultAllocator>_>::PushChild
                          (&local_19f8,fVar14);
                fVar20 = (float)local_19c8;
                fVar21 = local_19c8._4_4_;
              }
              else {
                if (fVar16 < param_3[2]) goto LAB_14089ef28;
                fVar12 = (fVar16 - fVar1) * local_1a50;
LAB_14089ee87:
                if (fVar11 <= fVar13) {
                  fVar11 = fVar13;
                }
                if (fVar11 <= fVar12) {
                  fVar11 = fVar12;
                }
                if ((0.0 <= fVar11) && (fVar11 <= 1.0)) {
                  fVar12 = fVar11 * local_1a48 + fVar3;
                  fVar13 = fVar11 * local_1a44 + fVar2;
                  fVar11 = fVar11 * local_1a4c + fVar1;
                  if ((fVar19 - 0.1 < fVar12) &&
                     ((((fVar12 < fVar18 + 0.1 && (fVar15 - 0.1 < fVar13)) &&
                       (fVar13 < fVar17 + 0.1)) &&
                      ((fVar10 - 0.1 < fVar11 && (fVar11 < fVar16 + 0.1)))))) goto LAB_14089ef0a;
                }
              }
            }
            else if (fVar10 <= param_3[2]) {
              fVar12 = (fVar10 - fVar1) * local_1a50;
              goto LAB_14089ee87;
            }
          }
LAB_14089ef28:
          if ((SUB41(fVar14,0) & 7) < 7) {
            fVar14 = (float)((uint)fVar14 ^ ((int)fVar14 + 1U ^ (uint)fVar14) & 7);
          }
          else {
            fVar14 = (float)((uint)fVar14 | 8);
          }
        } while (((uint)fVar14 >> 3 & 1) == 0);
      }
      for (iVar7 = 0; (-1 < iVar7 && (iVar7 < *(int *)(lVar6 + 0x130))); iVar7 = iVar7 + 1) {
        iVar5 = (int)param_4[1];
        lVar8 = *(longlong *)(lVar6 + 0x120);
        if (*(longlong *)(lVar6 + 0x120) == 0) {
          lVar8 = lVar6;
        }
        *(int *)(param_4 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar5 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4,iVar5);
        }
        *(undefined4 *)(*param_4 + (longlong)iVar5 * 4) =
             *(undefined4 *)(lVar8 + (longlong)iVar7 * 0x30 + 8);
      }
      if ((int)local_e8 == 0) {
        local_1a38 = 0;
        local_19f8 = 0;
        lStack_19f0 = lStack_1a30;
        local_19c8 = CONCAT44(uStack_1a04,local_1a08);
        uStack_19c0 = CONCAT44(uStack_19fc,uStack_1a00);
        local_19e8 = 0;
        uStack_19e0 = 0x3f80000000000000;
        local_19d8 = 0;
        uStack_19d0 = 0x3f80000000000000;
      }
      else {
        iVar7 = (int)local_e8 + -1;
        puVar9 = local_19b8;
        if (local_f8 != (undefined1 *)0x0) {
          puVar9 = local_f8;
        }
        lVar6 = (longlong)iVar7 * 0x40;
        local_19f8 = *(longlong *)(puVar9 + lVar6);
        lStack_19f0 = *(longlong *)((longlong)(puVar9 + lVar6) + 8);
        local_19e8 = *(undefined8 *)(puVar9 + lVar6 + 0x10);
        uStack_19e0 = *(undefined8 *)((longlong)(puVar9 + lVar6 + 0x10) + 8);
        local_19d8 = *(undefined8 *)(puVar9 + lVar6 + 0x20);
        uStack_19d0 = *(undefined8 *)((longlong)(puVar9 + lVar6 + 0x20) + 8);
        local_19c8 = *(undefined8 *)(puVar9 + lVar6 + 0x30);
        uStack_19c0 = *(undefined8 *)((longlong)(puVar9 + lVar6 + 0x30) + 8);
        iVar5 = ((int)local_e8 - iVar7) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (puVar9 + (longlong)iVar7 * 0x40,puVar9 + (longlong)(int)local_e8 * 0x40,
                     (longlong)iVar5 << 6);
        }
        local_e8 = CONCAT44(local_e8._4_4_,(int)local_e8 + -1);
        TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
        ::ResizeShrink(local_19b8);
      }
      param_3 = local_1a40;
    } while (local_19f8 != 0);
    if (local_f8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14089f130 Serialize body=283 status=ok
// SIG undefined Serialize(void)

void UEditableMesh::Serialize(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_146270628);
  FUN_1421e7660(param_2,param_1 + 0x30);
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) &&
     (lVar1 = (longlong)*(int *)(param_1 + 0xd80), *(int *)(param_1 + 0xd80) != 0)) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0xd78) != 0;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar1) {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0xd78) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar2 != 0)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar2 = plVar2 + 1;
        } while (lVar3 < lVar1);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0xd78) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0xd78) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar1);
    *(int *)(param_1 + 0xd80) = iVar6;
  }
  return;
}



// FUNCTION 14089f250 Serialize body=70 status=ok
// SIG undefined Serialize(void)

void UEditableStaticMeshAdapter::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_146270628);
  FUN_140872320(param_2,param_1 + 0x40);
  FUN_140872670(param_2,param_1 + 0x78);
  return;
}



// FUNCTION 14089f2a0 FUN_14089f2a0 body=55 status=ok
// SIG undefined FUN_14089f2a0(void)

void FUN_14089f2a0(longlong *param_1,char param_2)

{
  char cVar1;
  
  if ((char)param_1[0x1ed] != param_2) {
    *(char *)(param_1 + 0x1ed) = param_2;
    cVar1 = (**(code **)(*param_1 + 0x278))();
    if (cVar1 == '\0') {
      FUN_1408985f0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14089f2e0 FUN_14089f2e0 body=619 status=ok
// SIG undefined FUN_14089f2e0(void)

void FUN_14089f2e0(longlong param_1,int param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  longlong local_48;
  longlong *local_40;
  int local_38;
  
  lVar2 = (longlong)param_2;
  local_48 = *(longlong *)(param_1 + 0x28) + 0x5e8;
  local_40 = param_3;
  local_38 = param_2;
  FUN_1408621d0(param_3 + 2,&local_48);
  uVar3 = 0;
  if (*param_3 == DAT_146aedb10) {
    if (*(char *)((longlong)param_3 + 0x4c) == '\0') {
      local_res10[0] =
           *(undefined4 *)(lVar2 * 0x18 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70));
      TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Emplace<FEdgeID_const_&>
                (param_1 + 0xe30,local_res8,local_res10,0);
      local_res10[0] =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70) + 4 + lVar2 * 0x18);
      TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Emplace<FEdgeID_const_&>
                (param_1 + 0xe30,local_res8,local_res10,0);
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_14685f1c0) &&
         (_Init_thread_header(&DAT_14685f1c0), DAT_14685f1c0 == -1)) {
        atexit((_func_5014 *)&LAB_143e42bc0);
        _Init_thread_footer(&DAT_14685f1c0);
      }
      DAT_14685f1b8 = 0;
      iVar5 = 0;
      if (DAT_14685f1bc < 2) {
        TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f1b0,2);
        iVar5 = DAT_14685f1b8;
      }
      DAT_14685f1b8 = iVar5 + 1;
      uVar1 = *(undefined4 *)(lVar2 * 0x18 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70));
      if (DAT_14685f1bc < DAT_14685f1b8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f1b0,iVar5);
      }
      *(undefined4 *)(DAT_14685f1b0 + (longlong)iVar5 * 4) = uVar1;
      iVar5 = DAT_14685f1b8;
      lVar6 = (longlong)DAT_14685f1b8;
      DAT_14685f1b8 = DAT_14685f1b8 + 1;
      uVar1 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70) + 4 + lVar2 * 0x18);
      if (DAT_14685f1bc < DAT_14685f1b8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f1b0,iVar5);
      }
      *(undefined4 *)(DAT_14685f1b0 + lVar6 * 4) = uVar1;
      FUN_1408a36b0(param_1,&DAT_14685f1b0);
    }
    TSet<FPolygonID,DefaultKeyFuncs<FPolygonID,0>,FDefaultSetAllocator>::Append<FDefaultAllocator>
              (param_1 + 0xd90,
               *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70) + 8 + lVar2 * 0x18);
  }
  puVar4 = *(undefined8 **)(param_1 + 0xd78);
  uVar7 = (longlong)*(int *)(param_1 + 0xd80) & 0x1fffffffffffffff;
  if (puVar4 + *(int *)(param_1 + 0xd80) < puVar4) {
    uVar7 = uVar3;
  }
  if (uVar7 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar4 + 0x338))((longlong *)*puVar4,param_1,param_2,param_3);
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != uVar7);
  }
  return;
}



// FUNCTION 14089f550 FUN_14089f550 body=549 status=ok
// SIG undefined FUN_14089f550(void)

void FUN_14089f550(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int *piVar12;
  undefined8 *local_res10;
  undefined4 *local_res18;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined4 local_40;
  
  uVar5 = 0;
  local_68 = 0;
  local_60 = 0;
  iVar2 = *(int *)(param_2 + 1);
  uVar10 = uVar5;
  if (0 < iVar2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (&local_68,iVar2);
    iVar2 = *(int *)(param_2 + 1);
    uVar5 = local_60 >> 0x20;
    uVar10 = local_60 & 0xffffffff;
  }
  uVar9 = (uint)uVar10;
  puVar6 = (undefined4 *)*param_2;
  local_res18 = puVar6 + (longlong)iVar2 * 6;
  if (puVar6 != local_res18) {
    piVar12 = puVar6 + 4;
    do {
      uVar1 = *puVar6;
      lVar7 = (longlong)(int)uVar10;
      uVar9 = (int)uVar10 + 1;
      local_60 = CONCAT44(local_60._4_4_,uVar9);
      if ((int)uVar5 < (int)uVar9) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_68,uVar10);
        uVar9 = (uint)local_60;
      }
      *(undefined4 *)(local_68 + lVar7 * 0x18) = 0;
      *(undefined8 *)(local_68 + 8 + lVar7 * 0x18) = 0;
      *(undefined8 *)(local_68 + 0x10 + lVar7 * 0x18) = 0;
      *(undefined4 *)(local_68 + (longlong)(int)(uVar9 - 1) * 0x18) = uVar1;
      lVar7 = local_68 + 8 + (longlong)(int)(uVar9 - 1) * 0x18;
      iVar2 = *piVar12;
      local_res10 = *(undefined8 **)(param_1 + 0x28);
      if (*(int *)(lVar7 + 0xc) < iVar2) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(lVar7,iVar2);
        iVar2 = *piVar12;
      }
      lVar8 = *(longlong *)(piVar12 + -2);
      lVar11 = (longlong)iVar2 * 0x60 + lVar8;
      if (lVar8 != lVar11) {
        puVar4 = local_res10 + 0xbd;
        do {
          local_58 = lVar7;
          local_50 = puVar4;
          local_48 = lVar8;
          local_40 = uVar1;
          FUN_140862b60(lVar8 + 0x10,&local_58);
          lVar8 = lVar8 + 0x60;
        } while (lVar8 != lVar11);
        lVar8 = *(longlong *)(piVar12 + -2);
        iVar2 = *piVar12;
        uVar9 = (uint)local_60;
      }
      uVar10 = (ulonglong)uVar9;
      lVar7 = (longlong)iVar2 * 0x60 + lVar8;
      for (; lVar8 != lVar7; lVar8 = lVar8 + 0x60) {
        FUN_14089f2e0(param_1,*puVar6,lVar8);
      }
      uVar5 = local_60 >> 0x20;
      puVar6 = puVar6 + 6;
      piVar12 = piVar12 + 6;
    } while (puVar6 != local_res18);
  }
  lVar7 = local_68;
  puVar4 = (undefined8 *)0x0;
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    local_68 = 0;
    *puVar3 = &PTR_Execute_144115a50;
    puVar3[1] = lVar7;
    *(uint *)(puVar3 + 2) = uVar9;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_60._4_4_;
    local_60 = 0;
    puVar4 = puVar3;
  }
  local_res10 = puVar4;
  FUN_1408740e0(param_1,&local_res10);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (&local_68);
  return;
}



// FUNCTION 14089f780 FUN_14089f780 body=599 status=ok
// SIG undefined FUN_14089f780(void)

void FUN_14089f780(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 uStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong uVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468601a0) && (_Init_thread_header(&DAT_1468601a0), DAT_1468601a0 == -1))
  {
    atexit(FUN_143e42450);
    _Init_thread_footer(&DAT_1468601a0);
  }
  if (DAT_14686019c < 0) {
    if (DAT_146860198 != 0) {
      plVar5 = (longlong *)(DAT_146860190 + 8);
      iVar9 = DAT_146860198;
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 3;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    DAT_146860198 = 0;
    if (DAT_14686019c != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_146860190,0);
    }
  }
  else {
    if (DAT_146860198 != 0) {
      plVar5 = (longlong *)(DAT_146860190 + 8);
      iVar9 = DAT_146860198;
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 3;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    DAT_146860198 = 0;
  }
  uVar7 = 0;
  uVar10 = uVar7;
  if (0 < (int)param_2[1]) {
    do {
      iVar9 = DAT_146860198;
      lVar8 = (longlong)DAT_146860198;
      uVar1 = *(undefined4 *)(uVar10 + *param_2);
      DAT_146860198 = DAT_146860198 + 1;
      if (DAT_14686019c < DAT_146860198) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&DAT_146860190,iVar9);
      }
      lVar2 = DAT_146860190;
      *(undefined4 *)(DAT_146860190 + lVar8 * 0x18) = 0;
      *(undefined8 *)(lVar2 + 8 + lVar8 * 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x10 + lVar8 * 0x18) = 0;
      lVar8 = DAT_146860190;
      iVar9 = DAT_146860198 + -1;
      *(undefined4 *)(DAT_146860190 + (longlong)iVar9 * 0x18) = uVar1;
      lVar8 = lVar8 + (longlong)iVar9 * 0x18;
      iVar9 = *(int *)(lVar8 + 0x10);
      uVar1 = *(undefined4 *)(uVar10 + *param_3);
      *(int *)(lVar8 + 0x10) = iVar9 + 1;
      if (*(int *)(lVar8 + 0x14) < iVar9 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(lVar8 + 8,iVar9);
      }
      uVar3 = DAT_146aedb20;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      puVar4 = (undefined8 *)((longlong)iVar9 * 0x60 + *(longlong *)(lVar8 + 8));
      puVar4[2] = CONCAT71(uStack_87,4);
      puVar4[3] = uStack_80;
      *puVar4 = uVar3;
      puVar4[4] = 0;
      puVar4[5] = 0x3f80000000000000;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[6] = local_68;
      puVar4[7] = uStack_60;
      puVar4[8] = CONCAT44(uVar1,local_58);
      puVar4[9] = uStack_50;
      *(undefined4 *)(puVar4 + 10) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x54) = 0;
      *(undefined4 *)(puVar4 + 0xb) = uStack_40;
      *(undefined4 *)((longlong)puVar4 + 0x5c) = uStack_3c;
      uVar10 = uVar10 + 4;
    } while ((int)uVar6 < (int)param_2[1]);
  }
  FUN_14089f550(param_1,&DAT_146860190);
  return;
}



// FUNCTION 14089f9e0 FUN_14089f9e0 body=1004 status=ok
// SIG undefined FUN_14089f9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14089f9e0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  void *pvVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 local_res10 [8];
  longlong *local_res18;
  longlong local_res20;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res18 = param_3;
  local_res20 = lVar10;
  if ((*(int *)(lVar10 + 0x38) < DAT_1468601b8) &&
     (_Init_thread_header(&DAT_1468601b8), DAT_1468601b8 == -1)) {
    atexit(FUN_143e424b0);
    _Init_thread_footer(&DAT_1468601b8);
  }
  if (DAT_1468601b4 < 0) {
    if (DAT_1468601b0 != 0) {
      plVar7 = (longlong *)(DAT_1468601a8 + 8);
      iVar9 = DAT_1468601b0;
      do {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 3;
        iVar9 = iVar9 + -1;
        lVar10 = local_res20;
      } while (iVar9 != 0);
    }
    DAT_1468601b0 = 0;
    if (DAT_1468601b4 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_1468601a8,0);
    }
  }
  else {
    if (DAT_1468601b0 != 0) {
      plVar7 = (longlong *)(DAT_1468601a8 + 8);
      iVar9 = DAT_1468601b0;
      do {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 3;
        iVar9 = iVar9 + -1;
        lVar10 = local_res20;
      } while (iVar9 != 0);
    }
    DAT_1468601b0 = 0;
  }
  uVar11 = 0;
  if ((*(int *)(lVar10 + 0x38) < DAT_1468601bc) &&
     (_Init_thread_header(&DAT_1468601bc), DAT_1468601bc == -1)) {
    atexit(FUN_143e44290);
    _Init_thread_footer(&DAT_1468601bc);
  }
  TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Reset(&DAT_146270870);
  uVar13 = uVar11;
  if (0 < (int)param_2[1]) {
    do {
      iVar5 = DAT_1468601b0;
      lVar10 = (longlong)DAT_1468601b0;
      iVar9 = *(int *)(*param_2 + uVar11 * 4);
      DAT_1468601b0 = DAT_1468601b0 + 1;
      if (DAT_1468601b4 < DAT_1468601b0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&DAT_1468601a8,iVar5);
      }
      lVar6 = DAT_1468601a8;
      *(undefined4 *)(DAT_1468601a8 + lVar10 * 0x18) = 0;
      *(undefined8 *)(lVar6 + 8 + lVar10 * 0x18) = 0;
      *(undefined8 *)(lVar6 + 0x10 + lVar10 * 0x18) = 0;
      lVar10 = DAT_1468601a8;
      iVar5 = DAT_1468601b0 + -1;
      *(int *)(DAT_1468601a8 + (longlong)iVar5 * 0x18) = iVar9;
      lVar10 = lVar10 + (longlong)iVar5 * 0x18;
      iVar5 = *(int *)(lVar10 + 0x10);
      uStack_5c = CONCAT31(uStack_5c._1_3_,*(undefined1 *)(uVar11 + *param_3));
      *(int *)(lVar10 + 0x10) = iVar5 + 1;
      if (*(int *)(lVar10 + 0x14) < iVar5 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(lVar10 + 8,iVar5);
      }
      uVar4 = DAT_146aedb10;
      lVar10 = *(longlong *)(lVar10 + 8);
      lVar6 = (longlong)iVar5 * 0x60;
      puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar10);
      *puVar1 = CONCAT71(uStack_97,6);
      puVar1[1] = uStack_90;
      *(undefined8 *)(lVar6 + lVar10) = uVar4;
      puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar10);
      *puVar1 = 0;
      puVar1[1] = 0x3f80000000000000;
      *(undefined4 *)(lVar6 + 8 + lVar10) = 0;
      puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar10);
      *puVar1 = local_78;
      puVar1[1] = uStack_70;
      puVar2 = (undefined4 *)(lVar6 + 0x40 + lVar10);
      *puVar2 = local_68;
      puVar2[1] = uStack_64;
      puVar2[2] = uStack_60;
      puVar2[3] = uStack_5c;
      puVar2 = (undefined4 *)(lVar6 + 0x50 + lVar10);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = uStack_50;
      puVar2[3] = uStack_4c;
      if ((*(int *)(local_res20 + 0x38) < DAT_1468601d0) &&
         (_Init_thread_header(&DAT_1468601d0), DAT_1468601d0 == -1)) {
        atexit((_func_5014 *)&LAB_143e42860);
        _Init_thread_footer(&DAT_1468601d0);
      }
      puVar1 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70) + 8 + (longlong)iVar9 * 0x18);
      if ((void **)puVar1 != &DAT_1468601c0) {
        DAT_1468601c8 = *(int *)(puVar1 + 1);
        lVar10 = (longlong)DAT_1468601c8;
        pvVar3 = (void *)*puVar1;
        if ((DAT_1468601c8 == 0) && (DAT_1468601cc == 0)) {
          DAT_1468601cc = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(&DAT_1468601c0,DAT_1468601c8);
          _guard_xfg_dispatch_icall_nop(DAT_1468601c0,pvVar3,lVar10 << 2);
        }
      }
      if (DAT_146270878 - _DAT_1462708a4 < DAT_1468601c8 + (DAT_146270878 - _DAT_1462708a4)) {
        FUN_14089d230(&DAT_146270870);
      }
      pvVar3 = (void *)((longlong)DAT_1468601c0 + (longlong)DAT_1468601c8 * 4);
      param_3 = local_res18;
      for (pvVar8 = DAT_1468601c0; local_res18 = param_3, pvVar8 != pvVar3;
          pvVar8 = (void *)((longlong)pvVar8 + 4)) {
        FUN_14085a180(&DAT_146270870,local_res10,pvVar8,0);
        param_3 = local_res18;
      }
      uVar12 = (int)uVar13 + 1;
      uVar11 = uVar11 + 1;
      uVar13 = (ulonglong)uVar12;
    } while ((int)uVar12 < (int)param_2[1]);
  }
  FUN_14089f550(param_1,&DAT_1468601a8);
  return;
}



// FUNCTION 14089fdd0 FUN_14089fdd0 body=697 status=ok
// SIG undefined FUN_14089fdd0(void)

void FUN_14089fdd0(longlong param_1,longlong *param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468601e8) && (_Init_thread_header(&DAT_1468601e8), DAT_1468601e8 == -1))
  {
    atexit((_func_5014 *)&LAB_143e42be0);
    _Init_thread_footer(&DAT_1468601e8);
  }
  iVar7 = DAT_1468601e0;
  iVar10 = (int)param_2[1];
  if (DAT_1468601e0 < iVar10) {
    DAT_1468601e0 = iVar10;
    if (DAT_1468601e4 < iVar10) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&DAT_1468601d8,iVar7);
    }
  }
  else if ((iVar10 < DAT_1468601e0) && (iVar7 = DAT_1468601e0 - iVar10, iVar7 != 0)) {
    iVar8 = (DAT_1468601e0 - iVar7) - iVar10;
    if (iVar8 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(iVar10 + DAT_1468601d8),(void *)((iVar7 + iVar10) + DAT_1468601d8),
                 (longlong)iVar8);
    }
    DAT_1468601e0 = DAT_1468601e0 - iVar7;
  }
  iVar10 = 0;
  if (0 < (int)param_2[1]) {
    lVar12 = 0;
    do {
      bVar5 = true;
      lVar9 = (longlong)*(int *)(*param_2 + lVar12 * 4);
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70);
      iVar7 = *(int *)(lVar11 + 0x10 + lVar9 * 0x18);
      if (0 < iVar7) {
        fVar13 = 1.0;
        if (iVar7 < 1) {
          puVar6 = &DAT_14652d64c;
        }
        else {
          puVar6 = *(undefined4 **)(lVar11 + 8 + lVar9 * 0x18);
        }
        FUN_140877530(param_1,&local_a8,*puVar6);
        fVar4 = local_a0;
        fVar3 = local_a4;
        fVar2 = local_a8;
        iVar8 = 1;
        if (1 < iVar7) {
          lVar11 = 4;
          fVar14 = fVar13;
          do {
            if ((iVar8 < 0) ||
               (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70),
               *(int *)(lVar1 + 0x10 + lVar9 * 0x18) <= iVar8)) {
              puVar6 = &DAT_14652d64c;
            }
            else {
              puVar6 = (undefined4 *)(*(longlong *)(lVar1 + 8 + lVar9 * 0x18) + lVar11);
            }
            FUN_140877530(param_1,&local_98,*puVar6);
            iVar8 = iVar8 + 1;
            lVar11 = lVar11 + 4;
            fVar13 = local_98 * fVar2 + local_94 * fVar3 + local_90 * fVar4;
            if (fVar14 <= fVar13) {
              fVar13 = fVar14;
            }
            fVar14 = fVar13;
          } while (iVar8 < iVar7);
        }
        bVar5 = param_3 <= fVar13;
      }
      iVar10 = iVar10 + 1;
      *(byte *)(lVar12 + DAT_1468601d8) = bVar5 ^ 1;
      lVar12 = lVar12 + 1;
    } while (iVar10 < (int)param_2[1]);
  }
  FUN_14089f9e0(param_1,param_2,&DAT_1468601d8);
  return;
}



// FUNCTION 1408a0090 FUN_1408a0090 body=1016 status=ok
// SIG undefined FUN_1408a0090(void)

void FUN_1408a0090(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  int *piVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined8 *local_res8;
  longlong *local_res10;
  int local_res18;
  undefined8 *local_res20;
  longlong local_68;
  undefined8 *local_58;
  int local_50;
  undefined4 local_4c;
  
  plVar1 = (longlong *)param_1[5];
  iVar12 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res18 = (int)param_2[1];
  local_58 = (undefined8 *)0x0;
  local_4c = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_50 = local_res18;
  if (0 < local_res18) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_58,0);
  }
  puVar7 = local_58;
  local_res18 = local_50;
  local_res20 = local_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146860200) && (_Init_thread_header(&DAT_146860200), DAT_146860200 == -1))
  {
    atexit((_func_5014 *)&LAB_143e42ad0);
    _Init_thread_footer(&DAT_146860200);
  }
  iVar5 = DAT_1468601f8;
  iVar11 = (int)param_2[1];
  if (DAT_1468601f8 < iVar11) {
    DAT_1468601f8 = iVar11;
    if (DAT_1468601fc < iVar11) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_1468601f0,iVar5);
    }
  }
  else if ((iVar11 < DAT_1468601f8) && (iVar5 = DAT_1468601f8 - iVar11, iVar5 != 0)) {
    iVar4 = (DAT_1468601f8 - iVar5) - iVar11;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(DAT_1468601f0 + (longlong)iVar11 * 4),
                 (void *)(DAT_1468601f0 + (longlong)(iVar5 + iVar11) * 4),(longlong)iVar4 << 2);
    }
    DAT_1468601f8 = DAT_1468601f8 - iVar5;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_1468601f0);
  }
  if (0 < (int)param_2[1]) {
    local_68 = 0;
    puVar13 = puVar7 + 1;
    do {
      piVar15 = (int *)((longlong)puVar13 + *param_2 + (-8 - (longlong)puVar7));
      lVar8 = 2;
      *(int *)(puVar13 + -1) = *piVar15;
      iVar11 = *piVar15;
      *(undefined4 *)((longlong)puVar13 + -4) =
           *(undefined4 *)(*(longlong *)(param_1[5] + 0x70) + (longlong)iVar11 * 0x18);
      *(undefined4 *)puVar13 =
           *(undefined4 *)(*(longlong *)(param_1[5] + 0x70) + 4 + (longlong)iVar11 * 0x18);
      piVar14 = (int *)(plVar1[0xe] + (longlong)*piVar15 * 0x18);
      *(int *)(local_68 + DAT_1468601f0) = *piVar15;
      piVar9 = piVar14;
      do {
        lVar6 = (longlong)*piVar9 * 0x20 + *plVar1;
        piVar2 = *(int **)(lVar6 + 0x10);
        iVar11 = *(int *)(lVar6 + 0x18);
        if (piVar2 != piVar2 + iVar11) {
          piVar3 = piVar2;
          do {
            if (*piVar3 == *piVar15) {
              iVar5 = (int)((longlong)piVar3 - (longlong)piVar2 >> 2);
              if (iVar5 != -1) {
                iVar4 = (iVar11 - iVar5) + -1;
                if (0 < iVar4) {
                  iVar4 = 1;
                }
                if (iVar4 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            (piVar2 + iVar5,piVar2 + (iVar11 - iVar4),(longlong)iVar4 << 2);
                  iVar11 = *(int *)(lVar6 + 0x18);
                }
                *(int *)(lVar6 + 0x18) = iVar11 + -1;
                TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar6 + 0x10);
              }
              break;
            }
            piVar3 = piVar3 + 1;
          } while (piVar3 != piVar2 + iVar11);
        }
        piVar9 = piVar9 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      lVar8 = 2;
      *piVar14 = piVar15[1];
      piVar14[1] = piVar15[2];
      do {
        lVar6 = (longlong)*piVar14 * 0x20 + *plVar1;
        iVar11 = *(int *)(lVar6 + 0x18);
        *(int *)(lVar6 + 0x18) = iVar11 + 1;
        if (*(int *)(lVar6 + 0x1c) < iVar11 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar6 + 0x10,iVar11);
        }
        piVar14 = piVar14 + 1;
        *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar11 * 4) = *piVar15;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      iVar12 = iVar12 + 1;
      local_68 = local_68 + 4;
      puVar13 = (undefined8 *)((longlong)puVar13 + 0xc);
      param_2 = local_res10;
      param_1 = local_res8;
    } while (iVar12 < (int)local_res10[1]);
  }
  puVar16 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)param_1[0x1af];
  puVar13 = (undefined8 *)((longlong)*(int *)(param_1 + 0x1b0) & 0x1fffffffffffffff);
  if (puVar7 + *(int *)(param_1 + 0x1b0) < puVar7) {
    puVar13 = puVar16;
  }
  puVar10 = puVar16;
  if (puVar13 != (undefined8 *)0x0) {
    do {
      (**(code **)(*(longlong *)*puVar7 + 0x330))((longlong *)*puVar7,param_1,&DAT_1468601f0);
      puVar10 = (undefined8 *)((longlong)puVar10 + 1);
      puVar7 = puVar7 + 1;
    } while (puVar10 != puVar13);
  }
  puVar13 = (undefined8 *)operator_new(0x18);
  local_res8 = puVar16;
  puVar7 = local_res20;
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &PTR_Execute_144115a90;
    puVar13[1] = local_res20;
    *(int *)(puVar13 + 2) = local_res18;
    *(undefined4 *)((longlong)puVar13 + 0x14) = local_4c;
    local_res8 = puVar13;
    puVar7 = puVar16;
  }
  FUN_1408740e0(param_1,&local_res8);
  if (puVar7 != (undefined8 *)0x0) {
    FMemory::Free(puVar7);
  }
  return;
}



// FUNCTION 1408a0490 FUN_1408a0490 body=2464 status=ok
// SIG undefined FUN_1408a0490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408a0490(longlong param_1,longlong *param_2,undefined4 param_3,int param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int *piVar14;
  bool bVar15;
  int local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  
  lVar3 = (longlong)(int)param_2[1];
  local_68 = 0;
  if (0 < lVar3) {
    plVar9 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_48 = 0;
    local_58 = lVar3;
    local_50 = plVar9;
    do {
      piVar14 = (int *)(local_48 * 0x10 + *param_5);
      if (piVar14[2] != 0) {
        iVar2 = *(int *)(*param_2 + local_48 * 4);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38);
        uVar1 = *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
        local_64 = uVar1;
        if (*(int *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) == 1) {
          if ((*(int *)(*plVar9 + 0x38) < DAT_14685fa90) &&
             (_Init_thread_header(&DAT_14685fa90), DAT_14685fa90 == -1)) {
            DAT_14685fa80 = (int *)0x0;
            _DAT_14685fa88 = 0;
            atexit(FUN_143e425d0);
            _Init_thread_footer(&DAT_14685fa90);
          }
          iVar12 = 0;
          if (_DAT_14685fa88 < 0) {
            if (DAT_14685fa88 != 0) {
              plVar9 = (longlong *)(DAT_14685fa80 + 2);
              iVar10 = DAT_14685fa88;
              do {
                if (*plVar9 != 0) {
                  FMemory::Free();
                }
                plVar9 = plVar9 + 3;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
            bVar15 = DAT_14685fa8c == 0;
            _DAT_14685fa88 = (ulonglong)DAT_14685fa8c << 0x20;
            if (bVar15) goto LAB_1408a05ec;
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeTo(&DAT_14685fa80,0);
            iVar12 = DAT_14685fa88;
            if (DAT_14685fa88 < 1) goto LAB_1408a05ec;
            if ((1 < DAT_14685fa88) && (iVar10 = DAT_14685fa88 + -1, iVar10 != 0)) {
              plVar9 = (longlong *)(DAT_14685fa80 + 8);
              iVar11 = iVar10;
              do {
                if (*plVar9 != 0) {
                  FMemory::Free();
                }
                plVar9 = plVar9 + 3;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
              iVar11 = (DAT_14685fa88 - iVar10) + -1;
              if (iVar11 != 0) {
                _guard_xfg_dispatch_icall_nop
                          (DAT_14685fa80 + 6,DAT_14685fa80 + (longlong)iVar12 * 6,
                           (longlong)iVar11 * 0x18);
              }
              _DAT_14685fa88 = CONCAT44(DAT_14685fa8c,DAT_14685fa88 - iVar10);
              TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(&DAT_14685fa80);
            }
          }
          else {
            if (DAT_14685fa88 != 0) {
              plVar9 = (longlong *)(DAT_14685fa80 + 2);
              iVar10 = DAT_14685fa88;
              do {
                if (*plVar9 != 0) {
                  FMemory::Free();
                }
                plVar9 = plVar9 + 3;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
LAB_1408a05ec:
            iVar10 = 1 - iVar12;
            _DAT_14685fa88 = CONCAT44(DAT_14685fa8c,iVar12 + iVar10);
            if ((int)DAT_14685fa8c < iVar12 + iVar10) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&DAT_14685fa80,iVar12);
            }
            piVar7 = DAT_14685fa80 + (longlong)iVar12 * 6;
            if (iVar10 != 0) {
              piVar4 = piVar7 + 5;
              do {
                *piVar7 = 0;
                piVar7 = piVar7 + 6;
                piVar4[-3] = 0;
                piVar4[-2] = 0;
                piVar4[-1] = 0;
                piVar4[0] = 0;
                piVar4 = piVar4 + 6;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
          }
          *DAT_14685fa80 = iVar2;
          piVar7 = DAT_14685fa80;
          piVar4 = DAT_14685fa80 + 2;
          if (piVar4 != piVar14) {
            iVar2 = piVar14[2];
            _Src = *(void **)piVar14;
            piVar14 = DAT_14685fa80 + 5;
            DAT_14685fa80[4] = iVar2;
            if ((iVar2 == 0) && (*piVar14 == 0)) {
              piVar7[5] = 0;
              FUN_1408a1220(param_1,&DAT_14685fa80);
              lVar3 = local_58;
              plVar9 = local_50;
              goto LAB_1408a0df3;
            }
            TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy(piVar4,iVar2);
            _guard_xfg_dispatch_icall_nop(*(void **)piVar4,_Src,(longlong)iVar2 * 0x60);
          }
          FUN_1408a1220(param_1,&DAT_14685fa80);
          lVar3 = local_58;
          plVar9 = local_50;
        }
        else {
          if ((*(int *)(*plVar9 + 0x38) < DAT_14685faa8) &&
             (_Init_thread_header(&DAT_14685faa8), DAT_14685faa8 == -1)) {
            DAT_14685fa98 = (undefined4 *)0x0;
            _DAT_14685faa0 = 0;
            atexit(FUN_143e447a0);
            _Init_thread_footer(&DAT_14685faa8);
          }
          if (_DAT_14685faa0 < 0) {
            if (DAT_14685faa0 != 0) {
              plVar9 = (longlong *)(DAT_14685fa98 + 2);
              iVar12 = DAT_14685faa0;
              do {
                if (*plVar9 != 0) {
                  FMemory::Free();
                }
                plVar9 = plVar9 + 4;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
            bVar15 = DAT_14685faa4 == 0;
            _DAT_14685faa0 = (ulonglong)DAT_14685faa4 << 0x20;
            iVar12 = 0;
            if (bVar15) goto LAB_1408a0841;
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
            ResizeTo(&DAT_14685fa98,0);
            iVar12 = DAT_14685faa0;
            if (DAT_14685faa0 < 1) goto LAB_1408a0841;
            if ((1 < DAT_14685faa0) && (iVar10 = DAT_14685faa0 + -1, iVar10 != 0)) {
              plVar9 = (longlong *)(DAT_14685fa98 + 10);
              iVar11 = iVar10;
              do {
                if (*plVar9 != 0) {
                  FMemory::Free();
                }
                plVar9 = plVar9 + 4;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
              iVar11 = (DAT_14685faa0 - iVar10) + -1;
              if (iVar11 != 0) {
                _guard_xfg_dispatch_icall_nop
                          (DAT_14685fa98 + 8,DAT_14685fa98 + (longlong)iVar12 * 8,
                           (longlong)iVar11 << 5);
              }
              _DAT_14685faa0 = CONCAT44(DAT_14685faa4,DAT_14685faa0 - iVar10);
              TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(&DAT_14685fa98);
            }
          }
          else {
            if (DAT_14685faa0 != 0) {
              plVar9 = (longlong *)(DAT_14685fa98 + 2);
              iVar12 = DAT_14685faa0;
              do {
                if (*plVar9 != 0) {
                  FMemory::Free();
                }
                plVar9 = plVar9 + 4;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
            iVar12 = 0;
LAB_1408a0841:
            iVar10 = 1 - iVar12;
            _DAT_14685faa0 = CONCAT44(DAT_14685faa4,iVar12 + iVar10);
            if ((int)DAT_14685faa4 < iVar12 + iVar10) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(&DAT_14685fa98,iVar12);
            }
            puVar8 = DAT_14685fa98 + (longlong)iVar12 * 8;
            if (iVar10 != 0) {
              puVar6 = puVar8 + 5;
              do {
                *puVar8 = DAT_14652d63c;
                puVar8 = puVar8 + 8;
                *(undefined8 *)(puVar6 + -3) = 0;
                *(undefined8 *)(puVar6 + -1) = 0;
                puVar6[1] = DAT_14652d640;
                iVar10 = iVar10 + -1;
                puVar6 = puVar6 + 8;
              } while (iVar10 != 0);
            }
          }
          *DAT_14685fa98 = uVar1;
          BackupAllAttributes<FVertexInstanceID>
                    (DAT_14685fa98 + 2,*(longlong *)(param_1 + 0x28) + 0x380,iVar2);
          puVar8 = DAT_14685fa98;
          iVar2 = piVar14[2];
          if (iVar2 != 0) {
            iVar12 = DAT_14685fa98[4];
            if ((int)DAT_14685fa98[5] < iVar12 + iVar2) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeTo(DAT_14685fa98 + 2);
              iVar12 = puVar8[4];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar12 * 0x60 + *(longlong *)(puVar8 + 2)),
                       *(void **)piVar14,(longlong)iVar2 * 0x60);
            puVar8[4] = puVar8[4] + iVar2;
          }
          lVar3 = *local_50;
          if ((*(int *)(lVar3 + 0x38) < DAT_14685fac0) &&
             (_Init_thread_header(&DAT_14685fac0), DAT_14685fac0 == -1)) {
            DAT_14685fab0 = (undefined4 *)0x0;
            _DAT_14685fab8 = 0;
            atexit((_func_5014 *)&LAB_143e438b0);
            _Init_thread_footer(&DAT_14685fac0);
          }
          FUN_14087adc0(param_1,&DAT_14685fa98,&DAT_14685fab0);
          if ((*(int *)(lVar3 + 0x38) < DAT_14685fad8) &&
             (_Init_thread_header(&DAT_14685fad8), DAT_14685fad8 == -1)) {
            DAT_14685fac8 = (undefined4 *)0x0;
            _DAT_14685fad0 = 0;
            atexit((_func_5014 *)&LAB_143e445b0);
            _Init_thread_footer(&DAT_14685fad8);
          }
          iVar2 = 0;
          if (_DAT_14685fad0 < 0) {
            if (DAT_14685fad0 != 0) {
              puVar5 = (undefined8 *)(DAT_14685fac8 + 6);
              iVar12 = DAT_14685fad0;
              do {
                iVar10 = *(int *)(puVar5 + 1);
                plVar9 = (longlong *)*puVar5;
                if (iVar10 != 0) {
                  do {
                    if (*plVar9 != 0) {
                      FMemory::Free();
                    }
                    plVar9 = plVar9 + 2;
                    iVar10 = iVar10 + -1;
                  } while (iVar10 != 0);
                  plVar9 = (longlong *)*puVar5;
                }
                if (plVar9 != (longlong *)0x0) {
                  FMemory::Free(plVar9);
                }
                if (puVar5[-2] != 0) {
                  FMemory::Free();
                }
                puVar5 = puVar5 + 5;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
            bVar15 = DAT_14685fad4 == 0;
            _DAT_14685fad0 = (ulonglong)DAT_14685fad4 << 0x20;
            if (bVar15) goto LAB_1408a0b50;
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::
            ResizeTo(&DAT_14685fac8);
            iVar2 = DAT_14685fad0;
            if (DAT_14685fad0 < 1) goto LAB_1408a0b50;
            if (1 < DAT_14685fad0) {
              TArray<FChangeVertexInstancesForPolygon,FDefaultAllocator>::RemoveAtImpl
                        (&DAT_14685fac8,1,DAT_14685fad0 + -1,1);
            }
          }
          else {
            if (DAT_14685fad0 != 0) {
              puVar5 = (undefined8 *)(DAT_14685fac8 + 6);
              iVar12 = DAT_14685fad0;
              do {
                iVar10 = *(int *)(puVar5 + 1);
                plVar9 = (longlong *)*puVar5;
                if (iVar10 != 0) {
                  do {
                    if (*plVar9 != 0) {
                      FMemory::Free();
                    }
                    plVar9 = plVar9 + 2;
                    iVar10 = iVar10 + -1;
                  } while (iVar10 != 0);
                  plVar9 = (longlong *)*puVar5;
                }
                if (plVar9 != (longlong *)0x0) {
                  FMemory::Free(plVar9);
                }
                if (puVar5[-2] != 0) {
                  FMemory::Free();
                }
                puVar5 = puVar5 + 5;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
LAB_1408a0b50:
            iVar12 = 1 - iVar2;
            _DAT_14685fad0 = CONCAT44(DAT_14685fad4,iVar2 + iVar12);
            if ((int)DAT_14685fad4 < iVar2 + iVar12) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&DAT_14685fac8,iVar2);
            }
            puVar8 = DAT_14685fac8 + (longlong)iVar2 * 10;
            if (iVar12 != 0) {
              puVar6 = puVar8 + 5;
              do {
                *puVar8 = DAT_14652d64c;
                puVar8 = puVar8 + 10;
                *(undefined8 *)(puVar6 + -3) = 0;
                *(undefined8 *)(puVar6 + -1) = 0;
                *(undefined8 *)(puVar6 + 1) = 0;
                *(undefined8 *)(puVar6 + 3) = 0;
                iVar12 = iVar12 + -1;
                puVar6 = puVar6 + 10;
              } while (iVar12 != 0);
            }
          }
          *DAT_14685fac8 = param_3;
          puVar8 = DAT_14685fac8;
          if (param_4 == -1) {
            iVar2 = DAT_14685fac8[4];
            iVar12 = iVar2 + 1;
            DAT_14685fac8[4] = iVar12;
            if ((int)puVar8[5] < iVar12) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar8 + 2);
            }
            *(undefined8 *)(*(longlong *)(puVar8 + 2) + (longlong)iVar2 * 8) = 0;
            **(int **)(DAT_14685fac8 + 2) = local_68;
            lVar3 = *(longlong *)(DAT_14685fac8 + 2);
          }
          else {
            iVar12 = param_4 + 1;
            iVar2 = DAT_14685fac8[8];
            if (iVar2 < iVar12) {
              DAT_14685fac8[8] = iVar12;
              iVar10 = iVar12 - iVar2;
              if ((int)puVar8[9] < iVar12) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(puVar8 + 6);
              }
              puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(puVar8 + 6));
              for (; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar5 = 0;
                puVar5[1] = 0;
                puVar5 = puVar5 + 2;
              }
            }
            else if (iVar12 < iVar2) {
              TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
                        (DAT_14685fac8 + 6,iVar12,iVar2 - iVar12,1);
            }
            lVar13 = (longlong)param_4 * 0x10;
            plVar9 = (longlong *)(*(longlong *)(DAT_14685fac8 + 6) + lVar13);
            lVar3 = plVar9[1];
            iVar2 = (int)lVar3 + 1;
            *(int *)(plVar9 + 1) = iVar2;
            if (*(int *)((longlong)plVar9 + 0xc) < iVar2) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9);
            }
            *(undefined8 *)(*plVar9 + (longlong)(int)lVar3 * 8) = 0;
            **(int **)(lVar13 + *(longlong *)(DAT_14685fac8 + 6)) = local_68;
            lVar3 = *(longlong *)(*(longlong *)(DAT_14685fac8 + 6) + lVar13);
          }
          *(undefined4 *)(lVar3 + 4) = *DAT_14685fab0;
          FUN_140875f10(param_1,&DAT_14685fac8);
          TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Emplace<FEdgeID_const_&>
                    (param_1 + 0xe30,local_60,&local_64,0);
          lVar3 = local_58;
          plVar9 = local_50;
        }
      }
LAB_1408a0df3:
      local_68 = local_68 + 1;
      local_48 = local_48 + 1;
    } while (local_48 < lVar3);
  }
  return;
}



// FUNCTION 1408a0e30 SetPolygonsVertexAttributes body=199 status=ok
// SIG undefined SetPolygonsVertexAttributes(void)

void UEditableMesh::SetPolygonsVertexAttributes(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)*param_2;
  lVar3 = *(longlong *)(param_1 + 0x28);
  piVar1 = piVar6 + (longlong)*(int *)(param_2 + 1) * 10;
  for (; piVar6 != piVar1; piVar6 = piVar6 + 10) {
    iVar2 = *piVar6;
    lVar4 = (longlong)iVar2 * 0x38 + *(longlong *)(lVar3 + 0xa8);
    FUN_1408a0490(param_1,lVar4,iVar2,0xffffffff,piVar6 + 2);
    iVar5 = 0;
    if (0 < piVar6[8]) {
      do {
        FUN_1408a0490(param_1,(longlong)iVar5 * 0x10 + *(longlong *)(lVar4 + 0x10),iVar2,iVar5,
                      *(longlong *)(piVar6 + 6) + (longlong)iVar5 * 0x10);
        iVar5 = iVar5 + 1;
      } while (iVar5 < piVar6[8]);
    }
  }
  return;
}



// FUNCTION 1408a0f00 FUN_1408a0f00 body=105 status=ok
// SIG undefined FUN_1408a0f00(void)

void FUN_1408a0f00(longlong param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 *local_res8;
  
  iVar1 = *(int *)(param_1 + 0xe88);
  if ((iVar1 < 1) || (param_2 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  *(int *)(param_1 + 0xe88) = param_2;
  if (bVar2) {
    FUN_140898df0();
  }
  local_res8 = (undefined8 *)operator_new(0x10);
  if (local_res8 != (undefined8 *)0x0) {
    *(int *)(local_res8 + 1) = iVar1;
    *local_res8 = &PTR_FUN_144115b10;
  }
  FUN_1408740e0(param_1,&local_res8);
  return;
}



// FUNCTION 1408a0f70 SetTextureCoordinateCount body=14 status=ok
// SIG undefined SetTextureCoordinateCount(void)

void UEditableMesh::SetTextureCoordinateCount(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0xd88) = iVar1;
  return;
}



// FUNCTION 1408a0f80 FUN_1408a0f80 body=468 status=ok
// SIG undefined FUN_1408a0f80(void)

void FUN_1408a0f80(longlong param_1,undefined4 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 local_res8 [2];
  char local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  
  local_68 = *(longlong *)(param_1 + 0x28) + 0x118;
  local_60 = param_3;
  local_58 = param_2;
  FUN_1408621d0(param_3 + 2,&local_68);
  uVar5 = 0;
  if ((*param_3 == DAT_146aedad0) && (*(longlong *)(param_1 + 0xf70) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_14685f1a8) &&
       (_Init_thread_header(&DAT_14685f1a8), DAT_14685f1a8 == -1)) {
      atexit((_func_5014 *)&LAB_143e42940);
      _Init_thread_footer(&DAT_14685f1a8);
    }
    UEditableMesh::GetVertexConnectedPolygons(param_1,param_2,&DAT_14685f198);
    uVar2 = (ulonglong)((longlong)(DAT_14685f198 + DAT_14685f1a0) + (3 - (longlong)DAT_14685f198))
            >> 2;
    if (DAT_14685f198 + DAT_14685f1a0 < DAT_14685f198) {
      uVar2 = uVar5;
    }
    puVar1 = DAT_14685f198;
    uVar3 = uVar5;
    if (uVar2 != 0) {
      do {
        local_res8[0] = *puVar1;
        local_res10[0] = '\0';
        FUN_14085a180(param_1 + 0x1020,local_res18,local_res8,local_res10);
        if (local_res10[0] == '\0') {
          FUN_14085a180(param_1 + 0xfd0,local_res20,local_res8,0);
        }
        uVar3 = uVar3 + 1;
        puVar1 = puVar1 + 1;
      } while (uVar3 != uVar2);
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0xd78);
  uVar2 = (longlong)*(int *)(param_1 + 0xd80) & 0x1fffffffffffffff;
  if (puVar4 + *(int *)(param_1 + 0xd80) < puVar4) {
    uVar2 = uVar5;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar4 + 0x310))((longlong *)*puVar4,param_1,param_2,param_3);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != uVar2);
  }
  return;
}



// FUNCTION 1408a1160 FUN_1408a1160 body=186 status=ok
// SIG undefined FUN_1408a1160(void)

void FUN_1408a1160(longlong param_1,undefined4 param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  
  local_38 = *(longlong *)(param_1 + 0x28) + 0x380;
  local_30 = param_3;
  local_28 = param_2;
  FUN_1408621d0(param_3 + 0x10,&local_38);
  uVar1 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xd78);
  uVar3 = (longlong)*(int *)(param_1 + 0xd80) & 0x1fffffffffffffff;
  if (puVar2 + *(int *)(param_1 + 0xd80) < puVar2) {
    uVar3 = uVar1;
  }
  if (uVar3 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar2 + 0x318))((longlong *)*puVar2,param_1,param_2,param_3);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}



// FUNCTION 1408a1220 FUN_1408a1220 body=585 status=ok
// SIG undefined FUN_1408a1220(void)

void FUN_1408a1220(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  int *local_res20;
  longlong lVar14;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  int local_40;
  
  iVar3 = *(int *)(param_2 + 1);
  uVar7 = 0;
  local_68 = 0;
  local_60 = 0;
  uVar13 = uVar7;
  if (0 < iVar3) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (&local_68,iVar3);
    iVar3 = *(int *)(param_2 + 1);
    uVar7 = local_60 >> 0x20;
    uVar13 = local_60 & 0xffffffff;
  }
  uVar12 = (uint)uVar13;
  local_res20 = (int *)*param_2;
  piVar2 = local_res20 + (longlong)iVar3 * 6;
  if (local_res20 != piVar2) {
    piVar11 = local_res20 + 4;
    do {
      iVar3 = *local_res20;
      lVar9 = (longlong)(int)uVar13;
      uVar12 = (int)uVar13 + 1;
      local_60 = CONCAT44(local_60._4_4_,uVar12);
      local_res10 = piVar11;
      if ((int)uVar7 < (int)uVar12) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_68,uVar13);
        uVar12 = (uint)local_60;
      }
      uVar13 = (ulonglong)uVar12;
      *(undefined4 *)(local_68 + lVar9 * 0x18) = 0;
      *(undefined8 *)(local_68 + 8 + lVar9 * 0x18) = 0;
      *(undefined8 *)(local_68 + 0x10 + lVar9 * 0x18) = 0;
      *(int *)(local_68 + (longlong)(int)(uVar12 - 1) * 0x18) = iVar3;
      lVar9 = local_68 + 8 + (longlong)(int)(uVar12 - 1) * 0x18;
      iVar4 = *piVar11;
      lVar14 = *(longlong *)(param_1 + 0x28);
      if (*(int *)(lVar9 + 0xc) < iVar4) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(lVar9,iVar4);
        iVar4 = *piVar11;
      }
      lVar10 = *(longlong *)(piVar11 + -2);
      lVar8 = (longlong)iVar4 * 0x60 + lVar10;
      if (lVar10 != lVar8) {
        lVar1 = lVar14 + 0x380;
        do {
          local_58 = lVar9;
          local_50 = lVar1;
          local_48 = lVar10;
          local_40 = iVar3;
          FUN_140862690(lVar10 + 0x10,&local_58);
          lVar10 = lVar10 + 0x60;
        } while (lVar10 != lVar8);
        lVar10 = *(longlong *)(local_res10 + -2);
        iVar4 = *local_res10;
        piVar11 = local_res10;
      }
      lVar9 = (longlong)iVar4 * 0x60 + lVar10;
      for (; lVar10 != lVar9; lVar10 = lVar10 + 0x60) {
        FUN_1408a1160(param_1,iVar3,lVar10);
      }
      uVar7 = (ulonglong)local_res10 >> 0x20;
      local_res10 = (int *)CONCAT44((int)uVar7,
                                    *(undefined4 *)
                                     (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) +
                                     (longlong)iVar3 * 0x18));
      TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Emplace<FEdgeID_const_&>
                (param_1 + 0xe30,local_res18,&local_res10,0,lVar14);
      piVar11 = piVar11 + 6;
      uVar7 = local_60 >> 0x20;
      local_res20 = local_res20 + 6;
      local_res10 = piVar11;
    } while (local_res20 != piVar2);
  }
  lVar9 = local_68;
  puVar6 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)operator_new(0x18);
  if (puVar5 != (undefined8 *)0x0) {
    local_68 = 0;
    *puVar5 = &PTR_Execute_144115a30;
    puVar5[1] = lVar9;
    *(uint *)(puVar5 + 2) = uVar12;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_60._4_4_;
    local_60 = 0;
    puVar6 = puVar5;
  }
  local_res10 = (int *)puVar6;
  FUN_1408740e0(param_1,&local_res10);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (&local_68);
  return;
}



// FUNCTION 1408a1470 SetVerticesAttributes body=553 status=ok
// SIG undefined SetVerticesAttributes(void)

void UEditableMesh::SetVerticesAttributes(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *local_res10;
  longlong local_res18;
  undefined8 *local_res20;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  
  uVar6 = 0;
  local_78 = 0;
  local_70 = 0;
  iVar3 = *(int *)(param_2 + 1);
  uVar12 = uVar6;
  if (0 < iVar3) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (&local_78,iVar3);
    iVar3 = *(int *)(param_2 + 1);
    uVar6 = local_70 >> 0x20;
    uVar12 = local_70 & 0xffffffff;
  }
  uVar11 = (uint)uVar12;
  param_2 = (undefined8 *)*param_2;
  local_res20 = param_2 + (longlong)iVar3 * 3;
  local_res10 = param_2;
  if (param_2 != local_res20) {
    piVar10 = (int *)(param_2 + 2);
    do {
      uVar2 = *(undefined4 *)param_2;
      lVar8 = (longlong)(int)uVar12;
      uVar11 = (int)uVar12 + 1;
      local_70 = CONCAT44(local_70._4_4_,uVar11);
      local_res10 = param_2;
      if ((int)uVar6 < (int)uVar11) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_78,uVar12);
        uVar11 = (uint)local_70;
      }
      uVar12 = (ulonglong)uVar11;
      *(undefined4 *)(local_78 + lVar8 * 0x18) = 0;
      *(undefined8 *)(local_78 + 8 + lVar8 * 0x18) = 0;
      *(undefined8 *)(local_78 + 0x10 + lVar8 * 0x18) = 0;
      *(undefined4 *)(local_78 + (longlong)(int)(uVar11 - 1) * 0x18) = uVar2;
      lVar8 = local_78 + 8 + (longlong)(int)(uVar11 - 1) * 0x18;
      iVar3 = *piVar10;
      local_res18 = *(longlong *)(param_1 + 0x28);
      if (*(int *)(lVar8 + 0xc) < iVar3) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(lVar8,iVar3);
        iVar3 = *piVar10;
      }
      lVar9 = *(longlong *)(piVar10 + -2);
      lVar7 = (longlong)iVar3 * 0x60 + lVar9;
      if (lVar9 != lVar7) {
        lVar1 = local_res18 + 0x118;
        do {
          local_68 = lVar8;
          local_60 = lVar1;
          local_58 = lVar9;
          local_50 = uVar2;
          FUN_140862b60(lVar9 + 0x10,&local_68);
          lVar9 = lVar9 + 0x60;
        } while (lVar9 != lVar7);
        lVar9 = *(longlong *)(piVar10 + -2);
        iVar3 = *piVar10;
        param_2 = local_res10;
      }
      lVar8 = (longlong)iVar3 * 0x60 + lVar9;
      for (; lVar9 != lVar8; lVar9 = lVar9 + 0x60) {
        FUN_1408a0f80(param_1,uVar2,lVar9);
      }
      param_2 = param_2 + 3;
      uVar6 = local_70 >> 0x20;
      piVar10 = piVar10 + 6;
      local_res10 = param_2;
    } while (param_2 != local_res20);
  }
  lVar8 = local_78;
  puVar5 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    local_78 = 0;
    *puVar4 = &PTR_Execute_144115a10;
    puVar4[1] = lVar8;
    *(uint *)(puVar4 + 2) = uVar11;
    *(undefined4 *)((longlong)puVar4 + 0x14) = local_70._4_4_;
    local_70 = 0;
    puVar5 = puVar4;
  }
  local_res10 = puVar5;
  FUN_1408740e0(param_1,&local_res10);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (&local_78);
  return;
}



// FUNCTION 1408a16a0 FUN_1408a16a0 body=599 status=ok
// SIG undefined FUN_1408a16a0(void)

void FUN_1408a16a0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 uStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong uVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146860188) && (_Init_thread_header(&DAT_146860188), DAT_146860188 == -1))
  {
    atexit(FUN_143e42750);
    _Init_thread_footer(&DAT_146860188);
  }
  if (DAT_146860184 < 0) {
    if (DAT_146860180 != 0) {
      plVar5 = (longlong *)(DAT_146860178 + 8);
      iVar9 = DAT_146860180;
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 3;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    DAT_146860180 = 0;
    if (DAT_146860184 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_146860178,0);
    }
  }
  else {
    if (DAT_146860180 != 0) {
      plVar5 = (longlong *)(DAT_146860178 + 8);
      iVar9 = DAT_146860180;
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 3;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    DAT_146860180 = 0;
  }
  uVar7 = 0;
  uVar10 = uVar7;
  if (0 < (int)param_2[1]) {
    do {
      iVar9 = DAT_146860180;
      lVar8 = (longlong)DAT_146860180;
      uVar1 = *(undefined4 *)(uVar10 + *param_2);
      DAT_146860180 = DAT_146860180 + 1;
      if (DAT_146860184 < DAT_146860180) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&DAT_146860178,iVar9);
      }
      lVar2 = DAT_146860178;
      *(undefined4 *)(DAT_146860178 + lVar8 * 0x18) = 0;
      *(undefined8 *)(lVar2 + 8 + lVar8 * 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x10 + lVar8 * 0x18) = 0;
      lVar8 = DAT_146860178;
      iVar9 = DAT_146860180 + -1;
      *(undefined4 *)(DAT_146860178 + (longlong)iVar9 * 0x18) = uVar1;
      lVar8 = lVar8 + (longlong)iVar9 * 0x18;
      iVar9 = *(int *)(lVar8 + 0x10);
      uVar1 = *(undefined4 *)(uVar10 + *param_3);
      *(int *)(lVar8 + 0x10) = iVar9 + 1;
      if (*(int *)(lVar8 + 0x14) < iVar9 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(lVar8 + 8,iVar9);
      }
      uVar3 = DAT_146aedad8;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      puVar4 = (undefined8 *)((longlong)iVar9 * 0x60 + *(longlong *)(lVar8 + 8));
      puVar4[2] = CONCAT71(uStack_87,4);
      puVar4[3] = uStack_80;
      *puVar4 = uVar3;
      puVar4[4] = 0;
      puVar4[5] = 0x3f80000000000000;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[6] = local_68;
      puVar4[7] = uStack_60;
      puVar4[8] = CONCAT44(uVar1,local_58);
      puVar4[9] = uStack_50;
      *(undefined4 *)(puVar4 + 10) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x54) = 0;
      *(undefined4 *)(puVar4 + 0xb) = uStack_40;
      *(undefined4 *)((longlong)puVar4 + 0x5c) = uStack_3c;
      uVar10 = uVar10 + 4;
    } while ((int)uVar6 < (int)param_2[1]);
  }
  UEditableMesh::SetVerticesAttributes(param_1,&DAT_146860178);
  return;
}



// FUNCTION 1408a1900 FUN_1408a1900 body=4415 status=ok
// SIG undefined FUN_1408a1900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408a1900(longlong param_1,int param_2,undefined8 *param_3,uint *param_4)

{
  longlong *plVar1;
  void *pvVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int *piVar21;
  int iVar22;
  int *piVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int *piVar26;
  int *piVar27;
  undefined1 auStack_158 [32];
  undefined1 local_138 [4];
  int local_134;
  longlong local_130;
  int local_128;
  int local_124;
  int *local_120;
  int local_118;
  uint local_114;
  uint *local_110;
  longlong local_108;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  longlong local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  int local_c8 [2];
  int *local_c0;
  int *local_b8;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  int local_a0;
  int local_9c;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [8];
  undefined8 *local_88;
  int *local_80;
  undefined8 *local_78;
  int *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  iVar17 = *(int *)(param_3 + 1);
  piVar23 = (int *)(longlong)iVar17;
  lVar16 = (longlong)param_2;
  local_108 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_134 = iVar17;
  local_130 = param_1;
  local_124 = param_2;
  local_110 = param_4;
  if ((*(int *)(local_108 + 0x38) < DAT_14685f608) &&
     (_Init_thread_header(&DAT_14685f608), DAT_14685f608 == -1)) {
    atexit((_func_5014 *)&LAB_143e441d0);
    _Init_thread_footer(&DAT_14685f608);
  }
  DAT_14685f600 = 0;
  if ((DAT_14685f604 < 0) && (DAT_14685f604 != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f5f8,0);
  }
  if ((void **)param_3 != &DAT_14685f5f8) {
    DAT_14685f600 = *(int *)(param_3 + 1);
    lVar12 = (longlong)DAT_14685f600;
    pvVar2 = (void *)*param_3;
    if ((DAT_14685f600 == 0) && (DAT_14685f604 == 0)) {
      DAT_14685f604 = 0;
      param_1 = local_130;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&DAT_14685f5f8,DAT_14685f600);
      _guard_xfg_dispatch_icall_nop(DAT_14685f5f8,pvVar2,lVar12 << 2);
      param_1 = local_130;
    }
  }
  if (1 < iVar17) {
    AlgoImpl::IntroSortInternal<float,FIdentityFunctor,TDereferenceWrapper<float,TLess<float>_>_>
              (DAT_14685f5f8,(longlong)DAT_14685f600,local_138[0],local_138);
  }
  lVar9 = local_108;
  local_f0 = lVar16 * 3;
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70);
  local_118 = *(int *)(lVar12 + lVar16 * 0x18);
  iVar15 = *(int *)(lVar12 + 4 + lVar16 * 0x18);
  local_f4 = iVar15;
  if ((*(int *)(local_108 + 0x38) < DAT_14685f620) &&
     (_Init_thread_header(&DAT_14685f620), DAT_14685f620 == -1)) {
    atexit((_func_5014 *)&LAB_143e42a00);
    _Init_thread_footer(&DAT_14685f620);
  }
  DAT_14685f618 = 0;
  if ((DAT_14685f61c < 0) && (DAT_14685f61c != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(&DAT_14685f610,0);
  }
  lVar16 = *(longlong *)(param_1 + 0x28);
  local_58 = &DAT_14685f610;
  local_50 = param_2;
  FUN_14085d2c0(lVar16 + 0x5e8,&local_58);
  FUN_14085d580(lVar16 + 0x640,&local_58);
  FUN_14085cfe0(lVar16 + 0x698,&local_58);
  FUN_14085cd10(lVar16 + 0x6f0,&local_58);
  FUN_14085ca40(lVar16 + 0x748,&local_58);
  FUN_14085db20(lVar16 + 0x7a0,&local_58);
  FUN_14085d860(lVar16 + 0x7f8,&local_58);
  if ((*(int *)(lVar9 + 0x38) < DAT_14685f638) &&
     (_Init_thread_header(&DAT_14685f638), DAT_14685f638 == -1)) {
    atexit((_func_5014 *)&LAB_143e43770);
    _Init_thread_footer(&DAT_14685f638);
  }
  DAT_14685f630 = 0;
  if ((DAT_14685f634 < 0) && (DAT_14685f634 != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f628,0);
  }
  iVar5 = *(int *)((longlong)param_4 + 0xc);
  *(undefined4 *)((longlong)param_4 + 8) = 0;
  if ((iVar5 < 0) && (iVar5 != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_4,0);
    iVar5 = *(int *)((longlong)param_4 + 0xc);
  }
  if (iVar5 < iVar17) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_4,iVar17);
  }
  if ((*(int *)(lVar9 + 0x38) < DAT_14685f650) &&
     (_Init_thread_header(&DAT_14685f650), DAT_14685f650 == -1)) {
    atexit(FUN_143e44a60);
    _Init_thread_footer(&DAT_14685f650);
  }
  plVar18 = DAT_14685f640;
  iVar5 = DAT_14685f648;
  if (DAT_14685f64c < 0) {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar18 != 0) {
        FMemory::Free();
      }
      plVar18 = plVar18 + 3;
    }
    DAT_14685f648 = 0;
    if (DAT_14685f64c != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_14685f640,0);
    }
  }
  else {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar18 != 0) {
        FMemory::Free();
      }
      plVar18 = plVar18 + 3;
    }
    DAT_14685f648 = 0;
  }
  if (DAT_14685f64c < iVar17) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (&DAT_14685f640,iVar17);
  }
  iVar17 = local_118;
  lVar16 = local_130;
  plVar18 = (longlong *)0x0;
  local_120 = piVar23;
  if (0 < (longlong)piVar23) {
    do {
      iVar5 = DAT_14685f648;
      lVar12 = (longlong)DAT_14685f648;
      DAT_14685f648 = DAT_14685f648 + 1;
      if (DAT_14685f64c < DAT_14685f648) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&DAT_14685f640,iVar5);
      }
      plVar1 = DAT_14685f640 + lVar12 * 3;
      local_e0 = (longlong *)0x0;
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(plVar1 + 2) = DAT_14652d63c;
        local_e0 = plVar1;
      }
      lVar12 = *(longlong *)(lVar16 + 0x28);
      local_d0 = *(undefined4 *)((longlong)DAT_14685f5f8 + (longlong)plVar18 * 4);
      local_d8 = (undefined8 *)CONCAT44(iVar15,iVar17);
      FUN_14085f8d0(lVar12 + 0x118,&local_e0);
      FUN_14085fc70(lVar12 + 0x170,&local_e0);
      FUN_14085f580(lVar12 + 0x1c8,&local_e0);
      FUN_14085f240(lVar12 + 0x220,&local_e0);
      FUN_14085eef0(lVar12 + 0x278,&local_e0);
      FUN_140860300(lVar12 + 0x2d0,&local_e0);
      FUN_140860000(lVar12 + 0x328,&local_e0);
      plVar18 = (longlong *)((longlong)plVar18 + 1);
      param_4 = local_110;
      param_2 = local_124;
    } while ((longlong)plVar18 < (longlong)piVar23);
  }
  FUN_14087b120(local_130,&DAT_14685f640,&DAT_14685f628);
  iVar17 = DAT_14685f630;
  lVar16 = (longlong)DAT_14685f630;
  if (DAT_14685f630 != 0) {
    iVar15 = (int)*(longlong *)((longlong)param_4 + 8);
    if (*(int *)((longlong)param_4 + 0xc) < DAT_14685f630 + iVar15) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_4);
      iVar15 = (int)*(longlong *)((longlong)param_4 + 8);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)param_4 + (longlong)iVar15 * 4),DAT_14685f628,lVar16 << 2);
    *(int *)((longlong)param_4 + 8) = (int)*(longlong *)((longlong)param_4 + 8) + iVar17;
  }
  lVar16 = local_108;
  if ((*(int *)(local_108 + 0x38) < DAT_14685f654) &&
     (_Init_thread_header(&DAT_14685f654), DAT_14685f654 == -1)) {
    atexit(FUN_143e44570);
    _Init_thread_footer(&DAT_14685f654);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_14685f658) &&
     (_Init_thread_header(&DAT_14685f658), DAT_14685f658 == -1)) {
    atexit(FUN_143e43e00);
    _Init_thread_footer(&DAT_14685f658);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_14685f670) &&
     (_Init_thread_header(&DAT_14685f670), DAT_14685f670 == -1)) {
    atexit(FUN_143e44620);
    _Init_thread_footer(&DAT_14685f670);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_14685f688) &&
     (_Init_thread_header(&DAT_14685f688), DAT_14685f688 == -1)) {
    atexit((_func_5014 *)&LAB_143e43850);
    _Init_thread_footer(&DAT_14685f688);
  }
  TSet<TTuple<TTuple<FVertexInstanceID,FVertexInstanceID>,int>,TDefaultMapHashableKeyFuncs<TTuple<FVertexInstanceID,FVertexInstanceID>,int,0>,FDefaultSetAllocator>
  ::Reset(&DAT_1462706e0);
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(&DAT_146270730);
  if (DAT_14685f66c < 0) {
    if (DAT_14685f668 != 0) {
      plVar18 = (longlong *)(DAT_14685f660 + 8);
      iVar17 = DAT_14685f668;
      do {
        if (*plVar18 != 0) {
          FMemory::Free();
        }
        plVar18 = plVar18 + 4;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    DAT_14685f668 = 0;
    if (DAT_14685f66c != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_14685f660,0);
    }
  }
  else {
    if (DAT_14685f668 != 0) {
      plVar18 = (longlong *)(DAT_14685f660 + 8);
      iVar17 = DAT_14685f668;
      do {
        if (*plVar18 != 0) {
          FMemory::Free();
        }
        plVar18 = plVar18 + 4;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    DAT_14685f668 = 0;
  }
  local_128 = 0;
  local_f8 = 0;
  lVar16 = *(longlong *)(*(longlong *)(local_130 + 0x28) + 0x70);
  local_110 = *(uint **)(lVar16 + 8 + local_f0 * 8);
  local_c0 = (int *)(local_110 + *(int *)(lVar16 + 0x10 + local_f0 * 8));
  piVar21 = piVar23;
  if (local_110 != (uint *)local_c0) {
    local_e0 = (longlong *)local_c8;
    local_d8 = &local_58;
    while( true ) {
      uVar11 = 0;
      local_c8[0] = *local_110;
      uVar20 = 0xffffffff;
      puVar8 = (undefined8 *)
               ((longlong)local_c8[0] * 0x38 + *(longlong *)(*(longlong *)(local_130 + 0x28) + 0xa8)
               );
      local_fc = -1;
      local_100 = -1;
      piVar21 = (int *)*puVar8;
      uVar6 = (ulonglong)*(int *)(puVar8 + 1);
      uVar19 = uVar6 & 0x3fffffffffffffff;
      if (piVar21 + uVar6 < piVar21) {
        uVar19 = uVar11;
      }
      if (uVar19 != 0) {
        uVar6 = uVar11;
        piVar27 = piVar21;
        uVar24 = 0xffffffff;
        do {
          iVar17 = *(int *)(*(longlong *)(*(longlong *)(local_130 + 0x28) + 0x38) +
                           (longlong)*piVar27 * 0x18);
          uVar25 = uVar11;
          if ((iVar17 != local_118) && (uVar25 = uVar24, iVar17 == local_f4)) {
            uVar20 = uVar11;
          }
          local_fc = (int)uVar25;
          local_100 = (int)uVar20;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          piVar27 = piVar27 + 1;
          uVar6 = uVar6 + 1;
          uVar24 = uVar25;
          piVar23 = local_120;
        } while (uVar6 != uVar19);
      }
      iVar22 = local_fc;
      iVar5 = local_100;
      piVar27 = (int *)0x0;
      iVar17 = piVar21[local_fc];
      iVar15 = piVar21[local_100];
      local_128 = local_f8;
      local_a0 = iVar17;
      local_9c = iVar15;
      TSet<TTuple<TTuple<FVertexInstanceID,FVertexInstanceID>,int>,TDefaultMapHashableKeyFuncs<TTuple<FVertexInstanceID,FVertexInstanceID>,int,0>,FDefaultSetAllocator>
      ::FindId(&DAT_1462706e0,&local_114,&local_a0);
      piVar21 = piVar27;
      if (local_114 != 0xffffffff) {
        piVar21 = (int *)(DAT_1462706e0 + (longlong)(int)local_114 * 0x14);
      }
      piVar26 = piVar21 + 2;
      if (piVar21 == (int *)0x0) {
        piVar26 = piVar27;
      }
      if (piVar26 == (int *)0x0) {
        local_88 = &local_68;
        local_80 = &local_128;
        local_68 = CONCAT44(iVar15,iVar17);
        FUN_14085a800(&DAT_1462706e0,local_98,&local_88,0);
        local_78 = &local_e8;
        local_70 = &local_128;
        local_e8 = (uint *)CONCAT44(iVar17,iVar15);
        FUN_14085a800(&DAT_1462706e0,local_94,&local_78,0);
        if (DAT_14685f66c < DAT_14685f668 + local_134) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
          ResizeTo(&DAT_14685f660);
        }
        piVar21 = local_120;
        lVar16 = local_130;
        if (0 < (longlong)piVar23) {
          do {
            iVar5 = DAT_14685f668;
            lVar12 = (longlong)DAT_14685f668;
            DAT_14685f668 = DAT_14685f668 + 1;
            if (DAT_14685f66c < DAT_14685f668) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(&DAT_14685f660,iVar5);
            }
            piVar23 = (int *)(lVar12 * 0x20 + DAT_14685f660);
            *piVar23 = DAT_14652d63c;
            piVar23[2] = 0;
            piVar23[3] = 0;
            piVar23[4] = 0;
            piVar23[5] = 0;
            piVar23[6] = DAT_14652d640;
            local_b8 = (int *)((longlong)(DAT_14685f668 + -1) * 0x20 + DAT_14685f660);
            *local_b8 = DAT_14685f628[(longlong)piVar27];
            lVar12 = *(longlong *)(lVar16 + 0x28);
            local_a8 = *(undefined4 *)((longlong)DAT_14685f5f8 + (longlong)piVar27 * 4);
            local_b8 = local_b8 + 2;
            local_b0 = iVar17;
            local_ac = iVar15;
            FUN_14085f8d0(lVar12 + 0x380,&local_b8);
            FUN_14085fc70(lVar12 + 0x3d8,&local_b8);
            FUN_14085f580(lVar12 + 0x430,&local_b8);
            FUN_14085f240(lVar12 + 0x488,&local_b8);
            FUN_14085eef0(lVar12 + 0x4e0,&local_b8);
            FUN_140860300(lVar12 + 0x538,&local_b8);
            FUN_140860000(lVar12 + 0x590,&local_b8);
            piVar27 = (int *)((longlong)piVar27 + 1);
            piVar23 = local_120;
            iVar5 = local_100;
            iVar22 = local_fc;
          } while ((longlong)piVar27 < (longlong)piVar21);
        }
        local_128 = local_128 + local_134;
        iVar17 = local_f8;
      }
      else {
        iVar17 = *piVar26;
      }
      uVar10 = iVar22 - iVar5 >> 0x1f;
      bVar3 = iVar5 < iVar22 != 1 < (int)((iVar22 - iVar5 ^ uVar10) - uVar10);
      local_50 = CONCAT31(local_50._1_3_,bVar3);
      if (!bVar3) {
        iVar5 = iVar22;
      }
      local_58 = (undefined8 *)CONCAT44(iVar17,iVar5 + 1);
      FUN_14085af40(&DAT_146270730,local_90,&local_e0,0);
      local_110 = local_110 + 1;
      piVar21 = local_120;
      param_2 = local_124;
      if (local_110 == (uint *)local_c0) break;
      local_f8 = local_128;
    }
  }
  lVar16 = local_130;
  piVar23 = (int *)0x0;
  FUN_14087adc0(local_130,&DAT_14685f660,&DAT_14685f678);
  if ((*(int *)(local_108 + 0x38) < DAT_14685f6a0) &&
     (_Init_thread_header(&DAT_14685f6a0), DAT_14685f6a0 == -1)) {
    atexit((_func_5014 *)&LAB_143e44860);
    _Init_thread_footer(&DAT_14685f6a0);
  }
  iVar17 = 0;
  if ((DAT_14685f69c < 0) && (DAT_14685f698 = 0, DAT_14685f69c != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (&DAT_14685f690,0);
    iVar17 = DAT_14685f698;
  }
  DAT_14685f698 = iVar17 + 1;
  if (DAT_14685f69c < DAT_14685f698) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&DAT_14685f690,iVar17);
  }
  piVar27 = (int *)(DAT_14685f690 + (longlong)iVar17 * 0xc);
  piVar26 = piVar23;
  if (piVar27 != (int *)0x0) {
    *piVar27 = 0;
    piVar27[1] = DAT_14652d63c;
    piVar27[2] = DAT_14652d63c;
    piVar26 = piVar27;
  }
  piVar26[1] = local_118;
  *piVar26 = param_2;
  piVar26[2] = *DAT_14685f628;
  FUN_1408a0090(lVar16,&DAT_14685f690);
  lVar12 = local_108;
  if ((*(int *)(local_108 + 0x38) < DAT_14685f6b8) &&
     (_Init_thread_header(&DAT_14685f6b8), DAT_14685f6b8 == -1)) {
    atexit(FUN_143e42e60);
    _Init_thread_footer(&DAT_14685f6b8);
  }
  FUN_14089d7d0(&DAT_14685f6a8,0);
  iVar17 = local_134;
  if (DAT_14685f6b4 < local_134) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(&DAT_14685f6a8,local_134);
  }
  if (0 < (longlong)piVar21) {
    local_124 = local_134 + -1;
    piVar27 = piVar23;
    piVar26 = piVar23;
    do {
      iVar17 = DAT_14685f6b0;
      lVar12 = (longlong)DAT_14685f6b0;
      DAT_14685f6b0 = DAT_14685f6b0 + 1;
      if (DAT_14685f6b4 < DAT_14685f6b0) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&DAT_14685f6a8,iVar17);
      }
      piVar13 = (int *)(lVar12 * 0x30 + DAT_14685f6a8);
      piVar14 = piVar23;
      if (piVar13 != (int *)0x0) {
        *piVar13 = DAT_14652d63c;
        piVar13[1] = DAT_14652d63c;
        piVar13[2] = 0;
        piVar13[3] = 0;
        piVar13[4] = 0;
        piVar13[5] = 0;
        piVar13[6] = 0;
        piVar13[7] = 0;
        piVar13[8] = 0;
        piVar13[9] = 0;
        piVar13[10] = DAT_14652d644;
        piVar14 = piVar13;
      }
      *piVar14 = DAT_14685f628[(longlong)piVar26];
      iVar17 = (int)piVar27;
      if (iVar17 == local_124) {
        piVar27 = &local_f4;
      }
      else {
        piVar27 = DAT_14685f628 + (longlong)iVar17 + 1;
      }
      piVar14[1] = *piVar27;
      piVar27 = piVar14 + 2;
      piVar13 = (int *)(*(longlong *)(*(longlong *)(lVar16 + 0x28) + 0x70) + (local_f0 + 1) * 8);
      if (piVar27 != piVar13) {
        iVar15 = piVar13[2];
        pvVar2 = *(void **)piVar13;
        piVar14[4] = iVar15;
        if ((iVar15 == 0) && (piVar14[5] == 0)) {
          piVar14[5] = 0;
          piVar21 = local_120;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(piVar27,iVar15);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar27,pvVar2,(longlong)iVar15 << 2);
          piVar21 = local_120;
        }
      }
      iVar15 = DAT_14685f618;
      pvVar2 = DAT_14685f610;
      piVar27 = piVar14 + 6;
      if ((void **)piVar27 != &DAT_14685f610) {
        lVar16 = (longlong)DAT_14685f618;
        piVar14[8] = DAT_14685f618;
        if ((iVar15 == 0) && (piVar14[9] == 0)) {
          piVar14[9] = 0;
        }
        else {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy(piVar27,iVar15);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar27,pvVar2,lVar16 * 0x60);
        }
      }
      piVar27 = (int *)(ulonglong)(iVar17 + 1);
      piVar26 = (int *)((longlong)piVar26 + 1);
      lVar12 = local_108;
      lVar16 = local_130;
      iVar17 = local_134;
    } while ((longlong)piVar26 < (longlong)piVar21);
  }
  if ((*(int *)(lVar12 + 0x38) < DAT_14685f6d0) &&
     (_Init_thread_header(&DAT_14685f6d0), DAT_14685f6d0 == -1)) {
    atexit((_func_5014 *)&LAB_143e433d0);
    _Init_thread_footer(&DAT_14685f6d0);
  }
  _DAT_14685f6c8 = 0;
  if ((DAT_14685f6cc < 0) && (DAT_14685f6cc != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f6c0,0);
  }
  FUN_140878370(lVar16,&DAT_14685f6a8,&DAT_14685f6c0);
  lVar9 = *(longlong *)(lVar16 + 0x28);
  local_110 = *(uint **)(*(longlong *)(lVar9 + 0x70) + 8 + local_f0 * 8);
  local_e8 = local_110 + *(int *)(*(longlong *)(lVar9 + 0x70) + 0x10 + local_f0 * 8);
  if (local_110 != local_e8) {
    do {
      uVar10 = *local_110;
      local_114 = uVar10;
      if ((*(int *)(lVar12 + 0x38) < DAT_14685f6e8) &&
         (_Init_thread_header(&DAT_14685f6e8), DAT_14685f6e8 == -1)) {
        atexit(FUN_143e44ac0);
        _Init_thread_footer(&DAT_14685f6e8);
      }
      if (DAT_14685f6e4 < iVar17) {
        if (DAT_14685f6e0 != 0) {
          plVar18 = (longlong *)(DAT_14685f6d8 + 8);
          iVar15 = DAT_14685f6e0;
          do {
            if (*plVar18 != 0) {
              FMemory::Free();
            }
            plVar18 = plVar18 + 3;
            iVar15 = iVar15 + -1;
            lVar16 = local_130;
          } while (iVar15 != 0);
        }
        DAT_14685f6e0 = 0;
        if (DAT_14685f6e4 != iVar17) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo(&DAT_14685f6d8,iVar17);
        }
      }
      else {
        if (DAT_14685f6e0 != 0) {
          plVar18 = (longlong *)(DAT_14685f6d8 + 8);
          iVar15 = DAT_14685f6e0;
          do {
            if (*plVar18 != 0) {
              FMemory::Free();
            }
            plVar18 = plVar18 + 3;
            iVar15 = iVar15 + -1;
            lVar16 = local_130;
          } while (iVar15 != 0);
        }
        DAT_14685f6e0 = 0;
      }
      if (DAT_146270738 != DAT_146270764) {
        puVar7 = DAT_146270770;
        if (DAT_146270770 == (undefined *)0x0) {
          puVar7 = &DAT_146270768;
        }
        iVar15 = *(int *)(puVar7 + (longlong)(int)(DAT_146270778 - 1U & uVar10) * 4);
        while (iVar15 != -1) {
          lVar12 = (longlong)iVar15;
          if (*(uint *)(DAT_146270730 + lVar12 * 0x18) == uVar10) {
            if ((iVar15 != -1) && (lVar12 = DAT_146270730 + lVar12 * 0x18, lVar12 != 0)) {
              local_60 = *(undefined4 *)(lVar12 + 0xc);
              local_68 = *(ulonglong *)(lVar12 + 4);
              goto LAB_1408a2624;
            }
            break;
          }
          iVar15 = *(int *)(DAT_146270730 + 0x10 + lVar12 * 0x18);
        }
      }
      local_68 = 0;
      local_60 = 0;
LAB_1408a2624:
      if (0 < (longlong)piVar21) {
        cVar4 = (char)local_60;
        uVar19 = local_68 >> 0x20;
        piVar27 = piVar23;
        do {
          iVar17 = DAT_14685f6e0;
          piVar21 = (int *)((longlong)piVar21 + -1);
          lVar16 = (longlong)DAT_14685f6e0;
          piVar26 = piVar27;
          if (cVar4 != '\0') {
            piVar26 = piVar21;
          }
          DAT_14685f6e0 = DAT_14685f6e0 + 1;
          if (DAT_14685f6e4 < DAT_14685f6e0) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(&DAT_14685f6d8,iVar17);
          }
          lVar12 = DAT_14685f6d8;
          piVar27 = (int *)((longlong)piVar27 + 1);
          *(int *)(DAT_14685f6d8 + lVar16 * 0x18) = DAT_14652d640;
          *(int *)(lVar12 + 4 + lVar16 * 0x18) = DAT_14652d63c;
          *(undefined8 *)(lVar12 + 8 + lVar16 * 0x18) = 0;
          *(undefined8 *)(lVar12 + 0x10 + lVar16 * 0x18) = 0;
          *(undefined4 *)(DAT_14685f6d8 + (longlong)(DAT_14685f6e0 + -1) * 0x18) =
               *(undefined4 *)(DAT_14685f678 + ((longlong)(int)uVar19 + (longlong)piVar26) * 4);
        } while ((longlong)piVar27 < (longlong)local_120);
        iVar17 = (int)local_120;
        lVar16 = local_130;
        piVar21 = local_120;
        uVar10 = local_114;
      }
      UEditableMesh::InsertPolygonPerimeterVertices
                (lVar16,uVar10,local_68 & 0xffffffff,&DAT_14685f6d8);
      local_110 = local_110 + 1;
      lVar12 = local_108;
    } while (local_110 != local_e8);
    lVar9 = *(longlong *)(lVar16 + 0x28);
  }
  lVar12 = local_f0;
  TSet<FPolygonID,DefaultKeyFuncs<FPolygonID,0>,FDefaultSetAllocator>::Append<FDefaultAllocator>
            (lVar16 + 0xd90,*(longlong *)(lVar9 + 0x70) + 8 + local_f0 * 8);
  TSet<FPolygonID,DefaultKeyFuncs<FPolygonID,0>,FDefaultSetAllocator>::Append<FDefaultAllocator>
            (lVar16 + 0xde0,*(longlong *)(*(longlong *)(lVar16 + 0x28) + 0x70) + (lVar12 + 1) * 8);
  return;
}



// FUNCTION 1408a2a40 FUN_1408a2a40 body=2436 status=ok
// SIG undefined FUN_1408a2a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408a2a40(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  int local_res20;
  int local_88;
  int local_84;
  int local_80;
  int *local_78;
  longlong local_70;
  int *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_3 + 0xc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  piVar16 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  local_68 = piVar16;
  if ((*piVar16 < DAT_14685f820) && (_Init_thread_header(&DAT_14685f820), DAT_14685f820 == -1)) {
    atexit((_func_5014 *)&LAB_143e43f20);
    _Init_thread_footer(&DAT_14685f820);
  }
  TArray<FPolygonToCreate,FDefaultAllocator>::Reset(&DAT_14685f810,0);
  piVar11 = (int *)*param_2;
  local_58 = piVar11 + (longlong)*(int *)(param_2 + 1) * 6;
  local_78 = piVar11;
  if (piVar11 != local_58) {
    do {
      iVar5 = *piVar11;
      local_78 = piVar11;
      if ((*piVar16 < DAT_14685f838) && (_Init_thread_header(&DAT_14685f838), DAT_14685f838 == -1))
      {
        atexit((_func_5014 *)&LAB_143e43b20);
        _Init_thread_footer(&DAT_14685f838);
      }
      DAT_14685f830 = 0;
      if ((DAT_14685f834 < 0) && (DAT_14685f834 != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f828,0);
      }
      FMeshDescription::GetPolygonPerimeterVertices
                (*(undefined8 *)(param_1 + 0x28),iVar5,&DAT_14685f828);
      local_80 = piVar11[4];
      iVar6 = -1;
      iVar14 = -1;
      local_res20 = 0;
      if (0 < local_80 + 1) {
        local_60 = (longlong)iVar5 * 0x38;
        local_70 = local_60 + 0x30;
LAB_1408a2b90:
        iVar5 = DAT_14685f818;
        iVar4 = local_80 + -1;
        if (local_res20 <= local_80 + -1) {
          iVar4 = local_res20;
        }
        piVar11 = (int *)(*(longlong *)(piVar11 + 2) + (longlong)iVar4 * 8);
        for (piVar10 = DAT_14685f828; piVar3 = DAT_14685f828,
            piVar10 != DAT_14685f828 + DAT_14685f830; piVar10 = piVar10 + 1) {
          if (*piVar10 == *piVar11) {
            iVar4 = (int)((longlong)piVar10 - (longlong)DAT_14685f828 >> 2);
            goto joined_r0x0001408a2bde;
          }
        }
        iVar4 = -1;
joined_r0x0001408a2bde:
        do {
          if (piVar3 == DAT_14685f828 + DAT_14685f830) goto LAB_1408a2bf1;
          if (*piVar3 == piVar11[1]) {
            iVar7 = (int)((longlong)piVar3 - (longlong)DAT_14685f828 >> 2);
            goto LAB_1408a2bf6;
          }
          piVar3 = piVar3 + 1;
        } while( true );
      }
LAB_1408a3091:
      piVar11 = piVar11 + 6;
      local_78 = piVar11;
    } while (piVar11 != local_58);
  }
  if ((*piVar16 < DAT_14685f868) && (_Init_thread_header(&DAT_14685f868), DAT_14685f868 == -1)) {
    atexit((_func_5014 *)&LAB_143e43d20);
    _Init_thread_footer(&DAT_14685f868);
  }
  DAT_14685f860 = 0;
  if ((DAT_14685f864 < 0) && (DAT_14685f864 != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f858,0);
  }
  iVar5 = *(int *)(param_2 + 1);
  if (DAT_14685f864 < iVar5) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f858,iVar5);
    iVar5 = *(int *)(param_2 + 1);
  }
  puVar17 = (undefined4 *)*param_2;
  puVar13 = puVar17 + (longlong)iVar5 * 6;
  iVar5 = DAT_14685f860;
  for (; puVar17 != puVar13; puVar17 = puVar17 + 6) {
    DAT_14685f860 = iVar5 + 1;
    if (DAT_14685f864 < DAT_14685f860) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f858,iVar5);
    }
    *(undefined4 *)(DAT_14685f858 + (longlong)iVar5 * 4) = *puVar17;
    iVar5 = DAT_14685f860;
  }
  DAT_14685f860 = iVar5;
  FUN_14087cad0(param_1,&DAT_14685f858,0,0,0,0);
  if ((*piVar16 < DAT_14685f880) && (_Init_thread_header(&DAT_14685f880), DAT_14685f880 == -1)) {
    atexit((_func_5014 *)&LAB_143e435b0);
    _Init_thread_footer(&DAT_14685f880);
  }
  _DAT_14685f878 = 0;
  if ((DAT_14685f87c < 0) && (DAT_14685f87c != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f870,0);
  }
  if ((*piVar16 < DAT_14685f898) && (_Init_thread_header(&DAT_14685f898), DAT_14685f898 == -1)) {
    atexit((_func_5014 *)&LAB_143e432f0);
    _Init_thread_footer(&DAT_14685f898);
  }
  DAT_14685f890 = 0;
  if ((DAT_14685f894 < 0) && (DAT_14685f894 != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f888,0);
  }
  FUN_140879f40(param_1,&DAT_14685f810,&DAT_14685f870,&DAT_14685f888);
  iVar5 = DAT_14685f890;
  lVar9 = (longlong)DAT_14685f890;
  if (DAT_14685f890 != 0) {
    iVar6 = (int)param_3[1];
    if (*(int *)((longlong)param_3 + 0xc) < iVar6 + DAT_14685f890) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_3);
      iVar6 = (int)param_3[1];
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_3 + (longlong)iVar6 * 4),DAT_14685f888,lVar9 << 2)
    ;
    *(int *)(param_3 + 1) = (int)param_3[1] + iVar5;
  }
  return;
LAB_1408a2bf1:
  iVar7 = -1;
LAB_1408a2bf6:
  lVar9 = (longlong)DAT_14685f818;
  DAT_14685f818 = DAT_14685f818 + 1;
  if (DAT_14685f81c < DAT_14685f818) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&DAT_14685f810,iVar5);
  }
  puVar13 = (undefined4 *)0x0;
  puVar17 = (undefined4 *)(lVar9 * 0x30 + _DAT_14685f810);
  if (puVar17 != (undefined4 *)0x0) {
    *puVar17 = DAT_14652d648;
    *(undefined8 *)(puVar17 + 2) = 0;
    *(undefined8 *)(puVar17 + 4) = 0;
    *(undefined8 *)(puVar17 + 6) = 0;
    *(undefined8 *)(puVar17 + 8) = 0;
    puVar17[10] = DAT_14652d64c;
    *(undefined1 *)(puVar17 + 0xb) = 0;
    puVar13 = puVar17;
  }
  *puVar13 = *(undefined4 *)(local_70 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8));
  *(undefined1 *)(puVar13 + 0xb) = 0;
  if ((*piVar16 < DAT_14685f850) && (_Init_thread_header(&DAT_14685f850), DAT_14685f850 == -1)) {
    atexit((_func_5014 *)&LAB_143e43b80);
    _Init_thread_footer(&DAT_14685f850);
  }
  iVar5 = 0;
  if ((DAT_14685f84c < 0) && (DAT_14685f848 = 0, DAT_14685f84c != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685f840,0);
    iVar5 = DAT_14685f848;
  }
  iVar15 = iVar4;
  iVar2 = iVar7;
  if (iVar4 < iVar7) {
    iVar15 = iVar7;
    iVar2 = iVar4;
  }
  local_84 = iVar2;
  local_88 = iVar15;
  if (local_res20 == 0) {
    DAT_14685f848 = iVar5 + 1;
    if (DAT_14685f84c < DAT_14685f848) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f840,iVar5);
    }
    DAT_14685f840[iVar5] = iVar2;
    iVar5 = DAT_14685f848;
    lVar9 = (longlong)DAT_14685f848;
    DAT_14685f848 = DAT_14685f848 + 1;
    if (DAT_14685f84c < DAT_14685f848) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f840,iVar5);
    }
    DAT_14685f840[lVar9] = iVar15;
    lVar9 = (longlong)(iVar15 + 1) % (longlong)DAT_14685f830;
    iVar6 = (int)lVar9;
    iVar5 = DAT_14685f848;
    while (DAT_14685f848 = iVar5, iVar6 != iVar2) {
      DAT_14685f848 = iVar5 + 1;
      if (DAT_14685f84c < DAT_14685f848) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f840,iVar5);
      }
      DAT_14685f840[iVar5] = (int)lVar9;
      lVar9 = (longlong)((int)lVar9 + 1) % (longlong)DAT_14685f830;
      iVar5 = DAT_14685f848;
      iVar6 = (int)lVar9;
    }
  }
  else if (local_res20 == local_80) {
    DAT_14685f848 = iVar5 + 1;
    if (DAT_14685f84c < DAT_14685f848) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f840,iVar5);
    }
    DAT_14685f840[iVar5] = iVar15;
    iVar5 = DAT_14685f848;
    lVar9 = (longlong)DAT_14685f848;
    DAT_14685f848 = DAT_14685f848 + 1;
    if (DAT_14685f84c < DAT_14685f848) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f840,iVar5);
    }
    DAT_14685f840[lVar9] = iVar2;
    lVar9 = (longlong)(iVar2 + 1) % (longlong)DAT_14685f830;
    iVar6 = (int)lVar9;
    iVar5 = DAT_14685f848;
    while (DAT_14685f848 = iVar5, iVar6 != iVar15) {
      DAT_14685f848 = iVar5 + 1;
      if (DAT_14685f84c < DAT_14685f848) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f840,iVar5);
      }
      DAT_14685f840[iVar5] = (int)lVar9;
      lVar9 = (longlong)((int)lVar9 + 1) % (longlong)DAT_14685f830;
      iVar5 = DAT_14685f848;
      iVar6 = (int)lVar9;
    }
  }
  else {
    piVar16 = &local_84;
    if (iVar7 <= iVar4) {
      piVar16 = &local_88;
    }
    DAT_14685f848 = iVar5 + 1;
    if (DAT_14685f84c < DAT_14685f848) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f840,iVar5);
    }
    DAT_14685f840[iVar5] = *piVar16;
    iVar5 = DAT_14685f848;
    lVar9 = (longlong)DAT_14685f848;
    piVar16 = &local_88;
    if (iVar7 <= iVar4) {
      piVar16 = &local_84;
    }
    DAT_14685f848 = DAT_14685f848 + 1;
    if (DAT_14685f84c < DAT_14685f848) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f840,iVar5);
    }
    DAT_14685f840[lVar9] = *piVar16;
    iVar5 = DAT_14685f848;
    lVar9 = (longlong)DAT_14685f848;
    DAT_14685f848 = DAT_14685f848 + 1;
    if (DAT_14685f84c < DAT_14685f848) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f840,iVar5);
    }
    DAT_14685f840[lVar9] = iVar14;
    iVar5 = DAT_14685f848;
    lVar9 = (longlong)DAT_14685f848;
    DAT_14685f848 = DAT_14685f848 + 1;
    if (DAT_14685f84c < DAT_14685f848) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685f840,iVar5);
    }
    DAT_14685f840[lVar9] = iVar6;
  }
  plVar1 = (longlong *)(puVar13 + 2);
  if ((int)puVar13[5] < DAT_14685f848) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (plVar1,DAT_14685f848);
  }
  uVar8 = 0;
  uVar18 = (longlong)DAT_14685f848 & 0x3fffffffffffffff;
  if (DAT_14685f840 + DAT_14685f848 < DAT_14685f840) {
    uVar18 = uVar8;
  }
  piVar16 = DAT_14685f840;
  if (uVar18 != 0) {
    do {
      iVar5 = puVar13[4];
      iVar6 = *piVar16;
      puVar13[4] = iVar5 + 1;
      if ((int)puVar13[5] < iVar5 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar5);
      }
      puVar17 = (undefined4 *)(*plVar1 + (longlong)iVar5 * 0x18);
      if (puVar17 == (undefined4 *)0x0) {
        puVar17 = (undefined4 *)0x0;
      }
      else {
        *puVar17 = DAT_14652d640;
        puVar17[1] = DAT_14652d63c;
        *(undefined8 *)(puVar17 + 2) = 0;
        *(undefined8 *)(puVar17 + 4) = 0;
      }
      puVar17[1] = DAT_14652d63c;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8);
      if ((iVar6 < 0) || (*(int *)(local_60 + 8 + lVar9) <= iVar6)) {
        puVar12 = &DAT_14652d640;
      }
      else {
        puVar12 = (undefined4 *)(*(longlong *)(local_60 + lVar9) + (longlong)iVar6 * 4);
      }
      uVar8 = uVar8 + 1;
      *puVar17 = *puVar12;
      piVar16 = piVar16 + 1;
    } while (uVar8 != uVar18);
  }
  local_res20 = local_res20 + 1;
  iVar6 = *DAT_14685f840;
  iVar14 = DAT_14685f840[1];
  piVar11 = local_78;
  piVar16 = local_68;
  if (local_80 + 1 <= local_res20) goto LAB_1408a3091;
  goto LAB_1408a2b90;
}



// FUNCTION 1408a33d0 FUN_1408a33d0 body=724 status=ok
// SIG undefined FUN_1408a33d0(void)

void FUN_1408a33d0(longlong param_1,int param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int *piVar7;
  
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar7 < DAT_14685f220) {
    _Init_thread_header(&DAT_14685f220);
    if (DAT_14685f220 == -1) {
      atexit(FUN_143e44680);
      _Init_thread_footer(&DAT_14685f220);
    }
  }
  if (DAT_14685f21c < 0) {
    if (DAT_14685f218 != 0) {
      plVar6 = (longlong *)(DAT_14685f210 + 2);
      iVar4 = DAT_14685f218;
      do {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    DAT_14685f218 = 0;
    iVar4 = 0;
    if (DAT_14685f21c != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_14685f210,0);
      iVar4 = DAT_14685f218;
      if (0 < DAT_14685f218) {
        if ((1 < DAT_14685f218) && (iVar3 = DAT_14685f218 + -1, iVar3 != 0)) {
          plVar6 = (longlong *)(DAT_14685f210 + 10);
          iVar5 = iVar3;
          do {
            if (*plVar6 != 0) {
              FMemory::Free();
            }
            plVar6 = plVar6 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          iVar5 = (DAT_14685f218 - iVar3) + -1;
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (DAT_14685f210 + 8,DAT_14685f210 + (longlong)iVar4 * 8,(longlong)iVar5 << 5);
          }
          DAT_14685f218 = DAT_14685f218 - iVar3;
          TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(&DAT_14685f210);
        }
        goto LAB_1408a34ca;
      }
    }
  }
  else {
    if (DAT_14685f218 != 0) {
      plVar6 = (longlong *)(DAT_14685f210 + 2);
      iVar4 = DAT_14685f218;
      do {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = 0;
  }
  iVar3 = 1 - iVar4;
  DAT_14685f218 = iVar4 + iVar3;
  if (DAT_14685f21c < DAT_14685f218) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(&DAT_14685f210,iVar4);
  }
  puVar2 = DAT_14685f210 + (longlong)iVar4 * 8;
  if (iVar3 != 0) {
    puVar1 = puVar2 + 5;
    do {
      *puVar2 = DAT_14652d63c;
      puVar2 = puVar2 + 8;
      *(undefined8 *)(puVar1 + -3) = 0;
      *(undefined8 *)(puVar1 + -1) = 0;
      puVar1[1] = DAT_14652d640;
      iVar3 = iVar3 + -1;
      puVar1 = puVar1 + 8;
    } while (iVar3 != 0);
  }
LAB_1408a34ca:
  *DAT_14685f210 =
       *(undefined4 *)
        (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) + (longlong)param_2 * 0x18);
  BackupAllAttributes<FVertexInstanceID>
            (DAT_14685f210 + 2,*(longlong *)(param_1 + 0x28) + 0x380,param_2);
  if (*piVar7 < DAT_14685f238) {
    _Init_thread_header(&DAT_14685f238);
    if (DAT_14685f238 == -1) {
      atexit((_func_5014 *)&LAB_143e43870);
      _Init_thread_footer(&DAT_14685f238);
    }
  }
  FUN_14087adc0(param_1,&DAT_14685f210,&DAT_14685f228);
  FUN_14089cda0(param_1,param_2,*DAT_14685f228,param_3);
  return;
}



// FUNCTION 1408a36b0 FUN_1408a36b0 body=1486 status=ok
// SIG undefined FUN_1408a36b0(void)

void FUN_1408a36b0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int *piVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  bool bVar25;
  ulonglong local_88;
  ulonglong uVar24;
  
  piVar21 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar21 < DAT_14685f268) && (_Init_thread_header(&DAT_14685f268), DAT_14685f268 == -1)) {
    atexit(FUN_143e446e0);
    _Init_thread_footer(&DAT_14685f268);
  }
  if (DAT_14685f264 < 0) {
    if (DAT_14685f260 != 0) {
      plVar11 = (longlong *)(DAT_14685f258 + 8);
      iVar16 = DAT_14685f260;
      do {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 4;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    DAT_14685f260 = 0;
    if (DAT_14685f264 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_14685f258,0);
    }
  }
  else {
    if (DAT_14685f260 != 0) {
      plVar11 = (longlong *)(DAT_14685f258 + 8);
      iVar16 = DAT_14685f260;
      do {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 4;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    DAT_14685f260 = 0;
  }
  piVar9 = (int *)*param_2;
  piVar1 = piVar9 + *(int *)(param_2 + 1);
  do {
    if (piVar9 == piVar1) {
      return;
    }
    iVar16 = *piVar9;
    if ((*piVar21 < DAT_14685f280) && (_Init_thread_header(&DAT_14685f280), DAT_14685f280 == -1)) {
      atexit((_func_5014 *)&LAB_143e42980);
      _Init_thread_footer(&DAT_14685f280);
    }
    FUN_1408879c0(param_1,iVar16,&DAT_14685f270);
    if ((*piVar21 < DAT_14685f298) && (_Init_thread_header(&DAT_14685f298), DAT_14685f298 == -1)) {
      atexit((_func_5014 *)&LAB_143e44530);
      _Init_thread_footer(&DAT_14685f298);
    }
    puVar7 = (undefined8 *)((longlong)iVar16 * 0x20 + **(longlong **)(param_1 + 0x28));
    if ((uint **)puVar7 != &DAT_14685f288) {
      DAT_14685f290 = *(int *)(puVar7 + 1);
      lVar12 = (longlong)DAT_14685f290;
      pvVar4 = (void *)*puVar7;
      if ((DAT_14685f290 == 0) && (DAT_14685f294 == 0)) {
        DAT_14685f294 = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(&DAT_14685f288,DAT_14685f290);
        _guard_xfg_dispatch_icall_nop(DAT_14685f288,pvVar4,lVar12 << 2);
      }
    }
    puVar2 = DAT_14685f288 + DAT_14685f290;
    if (DAT_14685f288 != puVar2) {
      uVar14 = (ulonglong)DAT_14685f2a8;
      puVar8 = DAT_14685f288;
      piVar19 = DAT_14685f2a0;
      do {
        uVar3 = *puVar8;
        uVar17 = (ulonglong)(int)uVar3;
        lVar12 = uVar17 * 3 + 1;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38);
        puVar7 = (undefined8 *)(lVar5 + lVar12 * 8);
        if (1 < *(int *)(lVar5 + 8 + lVar12 * 8)) {
          if (*piVar21 < DAT_14685f2b0) {
            _Init_thread_header(&DAT_14685f2b0);
            if (DAT_14685f2b0 == -1) {
              atexit((_func_5014 *)&LAB_143e43cc0);
              _Init_thread_footer(&DAT_14685f2b0);
            }
            uVar14 = (ulonglong)DAT_14685f2a8;
            piVar19 = DAT_14685f2a0;
          }
          if ((int **)puVar7 != &DAT_14685f2a0) {
            DAT_14685f2a8 = *(uint *)(puVar7 + 1);
            lVar12 = (longlong)(int)DAT_14685f2a8;
            pvVar4 = (void *)*puVar7;
            if ((DAT_14685f2a8 == 0) && (DAT_14685f2ac == 0)) {
              DAT_14685f2ac = 0;
              uVar14 = 0;
            }
            else {
              TArray<int,FDefaultAllocator>::ResizeForCopy
                        (&DAT_14685f2a0,DAT_14685f2a8,DAT_14685f2ac);
              _guard_xfg_dispatch_icall_nop(DAT_14685f2a0,pvVar4,lVar12 << 2);
              uVar14 = (ulonglong)DAT_14685f2a8;
              piVar19 = DAT_14685f2a0;
            }
          }
          bVar6 = true;
          iVar16 = (int)uVar14;
          while (0 < iVar16) {
            if ((*piVar21 < DAT_14685f2c8) &&
               (_Init_thread_header(&DAT_14685f2c8), piVar19 = DAT_14685f2a0, DAT_14685f2c8 == -1))
            {
              atexit((_func_5014 *)&LAB_143e43e90);
              _Init_thread_footer(&DAT_14685f2c8);
              piVar19 = DAT_14685f2a0;
            }
            FUN_140888ca0(param_1,*piVar19,&DAT_14685f2a0,&DAT_14685f270,&DAT_14685f2b8);
            uVar14 = (ulonglong)DAT_14685f2a8;
            local_88 = 0;
            uVar18 = (ulonglong)
                     ((longlong)(DAT_14685f2b8 + DAT_14685f2c0) + (3 - (longlong)DAT_14685f2b8)) >>
                     2;
            if (DAT_14685f2b8 + DAT_14685f2c0 < DAT_14685f2b8) {
              uVar18 = 0;
            }
            piVar19 = DAT_14685f2a0;
            if (uVar18 != 0) {
              uVar17 = 0;
              piVar10 = DAT_14685f2b8;
              do {
                iVar16 = *piVar10;
                iVar13 = (int)uVar14;
                if (iVar13 != 0) {
                  bVar25 = *piVar19 != iVar16;
                  uVar15 = uVar17;
                  uVar14 = uVar17;
                  uVar24 = uVar17;
                  do {
                    uVar22 = (uint)uVar24;
                    uVar23 = uVar22;
                    do {
                      uVar15 = uVar15 + 1;
                      uVar23 = uVar23 + 1;
                      uVar24 = (ulonglong)uVar23;
                      if ((longlong)iVar13 <= (longlong)uVar15) break;
                    } while (bVar25 == (piVar19[uVar15] != iVar16));
                    if (bVar25 != false) {
                      uVar20 = (uint)uVar14;
                      if (uVar20 != uVar22) {
                        _guard_xfg_dispatch_icall_nop
                                  (piVar19 + (int)uVar20,piVar19 + (int)uVar22,
                                   (longlong)(int)(uVar23 - uVar22) << 2);
                        piVar19 = DAT_14685f2a0;
                      }
                      uVar14 = (ulonglong)(uVar20 + (uVar23 - uVar22));
                    }
                    bVar25 = (bool)(bVar25 ^ 1);
                  } while ((longlong)uVar15 < (longlong)iVar13);
                  DAT_14685f2a8 = (uint)uVar14;
                }
                piVar10 = piVar10 + 1;
                local_88 = local_88 + 1;
              } while (local_88 != uVar18);
              uVar17 = (ulonglong)uVar3;
            }
            if (!bVar6) {
              FUN_1408a33d0(param_1,uVar17 & 0xffffffff,&DAT_14685f2b8);
              uVar14 = (ulonglong)DAT_14685f2a8;
              piVar19 = DAT_14685f2a0;
            }
            bVar6 = false;
            iVar16 = (int)uVar14;
          }
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar2);
    }
    piVar9 = piVar9 + 1;
  } while( true );
}



// FUNCTION 1408a3c80 FUN_1408a3c80 body=526 status=ok
// SIG undefined FUN_1408a3c80(void)

void FUN_1408a3c80(longlong *param_1,byte param_2,undefined1 param_3)

{
  char cVar1;
  LARGE_INTEGER LVar2;
  LARGE_INTEGER LVar3;
  int iVar4;
  undefined8 *puVar5;
  LARGE_INTEGER LVar6;
  LARGE_INTEGER local_res8;
  
  cVar1 = (**(code **)(*param_1 + 0x278))();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    local_res8.QuadPart = (ulonglong)CONCAT61(local_res8.QuadPart._2_6_,param_2) << 8;
    LVar2.QuadPart = operator_new(0x10);
    LVar6.QuadPart = 0;
    LVar3.QuadPart = LVar6.QuadPart;
    if ((undefined8 *)LVar2.QuadPart != (undefined8 *)0x0) {
      *(undefined ***)LVar2 = &PTR_Execute_144115af0;
      *(undefined2 *)(LVar2.QuadPart + 8) = local_res8.s.LowPart._0_2_;
      *(undefined1 *)(LVar2.QuadPart + 10) = param_3;
      LVar3.QuadPart = LVar2.QuadPart;
    }
    local_res8 = LVar3;
    FUN_1408740e0(param_1,&local_res8);
    *(byte *)((longlong)param_1 + 0xe81) = param_2;
    *(undefined1 *)((longlong)param_1 + 0xe82) = param_3;
    QueryPerformanceCounter(&local_res8);
    puVar5 = (undefined8 *)param_1[0x1af];
    iVar4 = (int)param_1[0x1b0];
    LVar3.QuadPart = (longlong)iVar4 & 0x1fffffffffffffff;
    if (puVar5 + iVar4 < puVar5) {
      LVar3.QuadPart = LVar6.QuadPart;
    }
    LVar2.QuadPart = LVar6.QuadPart;
    if ((undefined8 *)LVar3.QuadPart != (undefined8 *)0x0) {
      do {
        (**(code **)(*(longlong *)*puVar5 + 0x280))
                  ((longlong *)*puVar5,param_1,(param_2 & 0xfd) == 0);
        LVar2.QuadPart = LVar2.QuadPart + 1;
        puVar5 = puVar5 + 1;
      } while (LVar2.QuadPart != LVar3.QuadPart);
      iVar4 = (int)param_1[0x1b0];
    }
    puVar5 = (undefined8 *)param_1[0x1af];
    LVar3.QuadPart = (longlong)iVar4 & 0x1fffffffffffffff;
    if (puVar5 + iVar4 < puVar5) {
      LVar3.QuadPart = LVar6.QuadPart;
    }
    if ((undefined8 *)LVar3.QuadPart != (undefined8 *)0x0) {
      do {
        (**(code **)(*(longlong *)*puVar5 + 0x298))((longlong *)*puVar5,param_1,param_2,param_3);
        LVar6.QuadPart = LVar6.QuadPart + 1;
        puVar5 = puVar5 + 1;
      } while (LVar6.QuadPart != LVar3.QuadPart);
    }
    TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Reset(param_1 + 0x1b2);
    TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Reset(param_1 + 0x1bc);
    TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Reset(param_1 + 0x1c6);
    QueryPerformanceCounter(&local_res8);
  }
  return;
}



// FUNCTION 1408a3e90 FUN_1408a3e90 body=4411 status=ok
// SIG undefined FUN_1408a3e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408a3e90(longlong param_1,longlong *param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  longlong lVar13;
  int *piVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  uint *puVar26;
  int *piVar27;
  undefined4 *puVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined8 *in_stack_fffffffffffffe58;
  int local_198;
  int local_194;
  int local_190 [2];
  undefined8 local_188;
  int iStack_180;
  uint uStack_17c;
  undefined4 local_178;
  int iStack_174;
  uint uStack_170;
  int iStack_16c;
  undefined8 local_168;
  longlong local_160;
  int local_158;
  longlong local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  longlong local_138;
  longlong local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  longlong *local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  *(undefined4 *)(param_4 + 8) = 0;
  if ((*(int *)(param_4 + 0xc) < 0) && (*(int *)(param_4 + 0xc) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_4,0);
  }
  local_f8 = (longlong *)FUN_140860830(*(longlong *)(param_1 + 0x28) + 0x118,DAT_146aedad0,0);
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_130 = lVar19;
  if ((*(int *)(lVar19 + 0x38) < DAT_146860440) &&
     (_Init_thread_header(&DAT_146860440), DAT_146860440 == -1)) {
    atexit((_func_5014 *)&LAB_143e43be0);
    _Init_thread_footer(&DAT_146860440);
  }
  _DAT_146860438 = 0;
  if ((DAT_14686043c < 0) && (DAT_14686043c != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146860430,0);
  }
  if ((*(int *)(lVar19 + 0x38) < DAT_146860458) &&
     (_Init_thread_header(&DAT_146860458), DAT_146860458 == -1)) {
    atexit(FUN_143e449a0);
    _Init_thread_footer(&DAT_146860458);
  }
  plVar20 = DAT_146860448;
  iVar22 = DAT_146860450;
  if (DAT_146860454 < 0) {
    for (; iVar22 != 0; iVar22 = iVar22 + -1) {
      if (*plVar20 != 0) {
        FMemory::Free();
      }
      plVar20 = plVar20 + 3;
    }
    DAT_146860450 = 0;
    if (DAT_146860454 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_146860448,0);
    }
  }
  else {
    for (; iVar22 != 0; iVar22 = iVar22 + -1) {
      if (*plVar20 != 0) {
        FMemory::Free();
      }
      plVar20 = plVar20 + 3;
    }
    DAT_146860450 = 0;
  }
  uVar29 = 0;
  piVar14 = (int *)*param_2;
  uVar31 = (longlong)(int)param_2[1] & 0x3fffffffffffffff;
  if (piVar14 + (int)param_2[1] < piVar14) {
    uVar31 = uVar29;
  }
  if (uVar31 != 0) {
    do {
      plVar20 = (longlong *)0x0;
      if ((param_3 == '\0') ||
         (3 < *(int *)((longlong)*piVar14 * 0x38 + 8 +
                      *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8)))) {
        FUN_140877360(param_1,&local_148);
        iVar22 = DAT_146860450;
        lVar19 = (longlong)DAT_146860450;
        DAT_146860450 = DAT_146860450 + 1;
        if (DAT_146860454 < DAT_146860450) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&DAT_146860448,iVar22);
        }
        plVar1 = DAT_146860448 + lVar19 * 3;
        if (plVar1 != (longlong *)0x0) {
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(plVar1 + 2) = DAT_14652d63c;
          plVar20 = plVar1;
        }
        iVar22 = (int)plVar20[1];
        uStack_88 = CONCAT44(uStack_144,local_148);
        local_80 = local_140;
        local_a8 = (undefined *)CONCAT71(local_a8._1_7_,2);
        local_68 = 0;
        *(int *)(plVar20 + 1) = iVar22 + 1;
        if (*(int *)((longlong)plVar20 + 0xc) < iVar22 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar20,iVar22);
        }
        uVar5 = DAT_146aedad0;
        puVar11 = (undefined8 *)((longlong)iVar22 * 0x60 + *plVar20);
        puVar11[2] = local_a8;
        puVar11[3] = uStack_a0;
        *puVar11 = uVar5;
        puVar11[4] = 0;
        puVar11[5] = 0x3f80000000000000;
        *(undefined4 *)(puVar11 + 1) = 0;
        puVar11[6] = uStack_88;
        puVar11[7] = CONCAT44(uStack_7c,local_80);
        puVar11[8] = local_78;
        puVar11[9] = uStack_70;
        *(undefined4 *)(puVar11 + 10) = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar11 + 0x54) = local_68._4_4_;
        *(undefined4 *)(puVar11 + 0xb) = uStack_60;
        *(undefined4 *)((longlong)puVar11 + 0x5c) = uStack_5c;
      }
      piVar14 = piVar14 + 1;
      uVar29 = uVar29 + 1;
      lVar19 = local_130;
    } while (uVar29 != uVar31);
  }
  FUN_14087b120(param_1,&DAT_146860448,&DAT_146860430);
  if ((*(int *)(lVar19 + 0x38) < DAT_14686045c) &&
     (_Init_thread_header(&DAT_14686045c), DAT_14686045c == -1)) {
    atexit(FUN_143e42ed0);
    _Init_thread_footer(&DAT_14686045c);
  }
  TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Reset(&DAT_1462708c0);
  uVar29 = 0;
  uVar31 = uVar29;
  if (0 < (int)param_2[1]) {
    do {
      uVar2 = *(undefined4 *)(uVar29 + *param_2);
      if ((*(int *)(lVar19 + 0x38) < DAT_146860470) &&
         (_Init_thread_header(&DAT_146860470), DAT_146860470 == -1)) {
        atexit((_func_5014 *)&LAB_143e43aa0);
        _Init_thread_footer(&DAT_146860470);
      }
      UEditableMesh::GetPolygonPerimeterEdges(param_1,uVar2,&DAT_146860460);
      if ((param_3 == '\x01') || (3 < DAT_146860468)) {
        uVar24 = 0;
        uVar23 = (longlong)DAT_146860468 & 0x3fffffffffffffff;
        if (DAT_146860460 + DAT_146860468 < DAT_146860460) {
          uVar23 = uVar24;
        }
        piVar14 = DAT_146860460;
        if (uVar23 != 0) {
          do {
            local_190[0] = *piVar14;
            FUN_140859ed0(&DAT_1462708c0,&local_198,local_190,0);
            uVar24 = uVar24 + 1;
            piVar14 = piVar14 + 1;
          } while (uVar24 != uVar23);
        }
      }
      uVar30 = (int)uVar31 + 1;
      uVar29 = uVar29 + 4;
      uVar31 = (ulonglong)uVar30;
    } while ((int)uVar30 < (int)param_2[1]);
  }
  local_188._0_4_ = 0;
  local_188._4_4_ = 1;
  iStack_174 = 0;
  uStack_170 = 0;
  iVar22 = (int)DAT_1462708e8;
  if (iVar22 != 0) {
    puVar26 = DAT_1462708e0;
    if (DAT_1462708e0 == (uint *)0x0) {
      puVar26 = (uint *)&DAT_1462708d0;
    }
    uVar30 = *puVar26;
    local_188._0_4_ = 0;
    while (uVar30 == 0) {
      lVar18 = (longlong)(int)local_188;
      uStack_170 = uStack_170 + 0x20;
      iVar9 = (int)local_188 + 1;
      bVar4 = (int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_188;
      iStack_174 = iVar22;
      local_188._0_4_ = iVar9;
      if (bVar4) goto LAB_1408a430c;
      uVar30 = puVar26[lVar18 + 1];
    }
    local_188._4_4_ = uVar30 - 1 & uVar30 ^ uVar30;
    iVar9 = 0x1f;
    if (local_188._4_4_ != 0) {
      for (; local_188._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (local_188._4_4_ == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_174 = (uStack_170 - iVar9) + 0x1f;
    if (iVar22 < iStack_174) {
      iStack_174 = iVar22;
    }
  }
LAB_1408a430c:
  iVar10 = iStack_174;
  uVar30 = local_188._4_4_;
  iVar9 = (int)local_188;
  uStack_90 = CONCAT44(iStack_174,0xffffffff);
  local_168 = CONCAT44(iStack_16c,uStack_170);
  local_a8 = &DAT_1462708c0;
  uStack_a0._0_4_ = (int)local_188;
  uStack_a0._4_4_ = local_188._4_4_;
  puStack_98 = &DAT_1462708d0;
  local_188 = (longlong *)&DAT_1462708c0;
  _iStack_180 = CONCAT44(uVar30,iVar9);
  local_178 = 0x462708d0;
  iStack_174 = 1;
  uStack_170 = 0xffffffff;
  iStack_16c = iVar10;
  uStack_88 = local_168;
  while (((iStack_16c != iVar22 || ((undefined *)CONCAT44(iStack_174,local_178) != &DAT_1462708d0))
         || (local_188 != (longlong *)&DAT_1462708c0))) {
    uVar2 = *(undefined4 *)(*local_188 + (longlong)iStack_16c * 0xc);
    if ((*(int *)(lVar19 + 0x38) < DAT_146860488) &&
       (_Init_thread_header(&DAT_146860488), DAT_146860488 == -1)) {
      atexit((_func_5014 *)&LAB_143e441f0);
      _Init_thread_footer(&DAT_146860488);
    }
    iVar9 = DAT_146860480;
    if (DAT_146860480 < 1) {
      DAT_146860480 = 1;
      if (DAT_146860484 < 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146860478,iVar9);
      }
    }
    else if ((1 < DAT_146860480) && (iVar9 = DAT_146860480 + -1, iVar9 != 0)) {
      iVar10 = (DAT_146860480 - iVar9) + -1;
      if (iVar10 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (DAT_146860478 + 1,DAT_146860478 + DAT_146860480,(longlong)iVar10 << 2);
      }
      DAT_146860480 = DAT_146860480 - iVar9;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_146860478);
    }
    *DAT_146860478 = 0x3f000000;
    if ((*(int *)(lVar19 + 0x38) < DAT_1468604a0) &&
       (_Init_thread_header(&DAT_1468604a0), DAT_1468604a0 == -1)) {
      atexit((_func_5014 *)&LAB_143e43830);
      _Init_thread_footer(&DAT_1468604a0);
    }
    FUN_1408a1900(param_1,uVar2);
    uStack_170 = uStack_170 & ~uStack_17c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_180);
  }
  if ((*(int *)(lVar19 + 0x38) < DAT_1468604b8) &&
     (_Init_thread_header(&DAT_1468604b8), DAT_1468604b8 == -1)) {
    atexit((_func_5014 *)&LAB_143e43f30);
    _Init_thread_footer(&DAT_1468604b8);
  }
  TArray<FPolygonToCreate,FDefaultAllocator>::Reset(&DAT_1468604a8,0);
  lVar18 = 0;
  local_190[0] = 0;
  if (0 < (int)param_2[1]) {
    local_138 = 0;
    local_f0 = 0;
    do {
      iVar17 = DAT_1468604b0;
      iVar22 = *(int *)(local_f0 + *param_2);
      local_160 = (longlong)iVar22 * 0x38;
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8);
      iVar9 = *(int *)(local_160 + 0x30 + lVar13);
      iVar10 = *(int *)(local_160 + 8 + lVar13);
      local_198 = iVar10;
      local_158 = iVar9;
      local_118 = lVar13;
      if ((param_3 == '\0') || (iVar21 = DAT_14652d63c, 6 < iVar10)) {
        iVar21 = *(int *)(lVar18 + DAT_146860430);
        lVar18 = lVar18 + 4;
        local_138 = lVar18;
        if (iVar10 < 7) goto LAB_1408a47fe;
        if ((*(int *)(lVar19 + 0x38) < DAT_1468604d0) &&
           (_Init_thread_header(&DAT_1468604d0), DAT_1468604d0 == -1)) {
          atexit((_func_5014 *)&LAB_143e43b60);
          _Init_thread_footer(&DAT_1468604d0);
        }
        FMeshDescription::GetPolygonPerimeterVertices
                  (*(undefined8 *)(param_1 + 0x28),iVar22,&DAT_1468604c0);
        local_118 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8);
        lVar18 = local_138;
        if (0 < iVar10 / 2) {
          local_100 = (ulonglong)(uint)(iVar10 / 2);
          local_194 = 1;
          local_150 = 0;
          do {
            iVar17 = DAT_1468604b0;
            iVar7 = local_194 + iVar10 + -2;
            iVar16 = local_194 % iVar10;
            lVar19 = (longlong)DAT_1468604b0;
            DAT_1468604b0 = DAT_1468604b0 + 1;
            if (DAT_1468604b4 < DAT_1468604b0) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(&DAT_1468604a8,iVar17);
            }
            lVar18 = local_150;
            piVar27 = (int *)0x0;
            piVar12 = (int *)(lVar19 * 0x30 + _DAT_1468604a8);
            piVar14 = piVar27;
            if (piVar12 != (int *)0x0) {
              *piVar12 = DAT_14652d648;
              piVar12[2] = 0;
              piVar12[3] = 0;
              piVar12[4] = 0;
              piVar12[5] = 0;
              piVar12[6] = 0;
              piVar12[7] = 0;
              piVar12[8] = 0;
              piVar12[9] = 0;
              piVar12[10] = DAT_14652d64c;
              *(undefined1 *)(piVar12 + 0xb) = 0;
              piVar14 = piVar12;
            }
            *piVar14 = iVar9;
            plVar20 = (longlong *)(piVar14 + 2);
            local_110 = (longlong)iVar16;
            local_108 = (longlong)(iVar7 % iVar10);
            do {
              iVar9 = piVar14[4];
              lVar19 = (longlong)iVar9;
              piVar14[4] = iVar9 + 1;
              if (piVar14[5] < iVar9 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(plVar20,iVar9);
              }
              lVar13 = *plVar20;
              *(undefined4 *)(lVar13 + lVar19 * 0x18) = DAT_14652d640;
              *(int *)(lVar13 + 4 + lVar19 * 0x18) = DAT_14652d63c;
              *(undefined8 *)(lVar13 + 8 + lVar19 * 0x18) = 0;
              *(undefined8 *)(lVar13 + 0x10 + lVar19 * 0x18) = 0;
              iVar9 = (int)piVar27;
              lVar8 = (longlong)piVar14[4];
              lVar19 = *plVar20;
              lVar13 = local_108;
              if ((((iVar9 == 0) || (lVar13 = lVar18, iVar9 == 1)) ||
                  (lVar13 = local_110, iVar9 == 2)) && (lVar13 != -1)) {
                *(undefined4 *)(lVar19 + -0x18 + lVar8 * 0x18) =
                     *(undefined4 *)(*(longlong *)(local_118 + local_160) + lVar13 * 4);
              }
              else {
                *(int *)(lVar19 + -0x14 + lVar8 * 0x18) = iVar21;
                local_128 = DAT_14652d640;
                local_124 = DAT_14652d640;
                local_120 = DAT_14652d640;
                local_e8 = *(undefined8 *)(*local_f8 + (longlong)iVar21 * 0xc);
                local_e0 = *(undefined4 *)(*local_f8 + 8 + (longlong)iVar21 * 0xc);
                in_stack_fffffffffffffe58 = &local_d8;
                cVar6 = UEditableMesh::ComputeBarycentricWeightForPointOnPolygon
                                  (param_1,iVar22,&local_e8,&local_128,in_stack_fffffffffffffe58);
                if (cVar6 != '\0') {
                  iStack_174 = (int)local_d8;
                  uStack_170 = (uint)((ulonglong)local_d8 >> 0x20);
                  lVar13 = *(longlong *)(param_1 + 0x28);
                  local_188 = (longlong *)(lVar19 + -0x10 + lVar8 * 0x18);
                  _iStack_180 = CONCAT44(local_124,local_128);
                  local_178 = local_120;
                  iStack_16c = local_d0;
                  FUN_14085bf80(lVar13 + 0x380,&local_188);
                  FUN_14085c1c0(lVar13 + 0x3d8,&local_188);
                  FUN_14085bd40(lVar13 + 0x430,&local_188);
                  FUN_14085bb00(lVar13 + 0x488,&local_188);
                  FUN_14085b8c0(lVar13 + 0x4e0,&local_188);
                  FUN_14085c710(lVar13 + 0x538,&local_188);
                  FUN_14085c400(lVar13 + 0x590,&local_188);
                }
              }
              piVar27 = (int *)(ulonglong)(iVar9 + 1U);
            } while ((int)(iVar9 + 1U) < 4);
            local_194 = local_194 + 2;
            local_150 = local_150 + 2;
            local_100 = local_100 - 1;
            iVar9 = local_158;
            iVar10 = local_198;
          } while (local_100 != 0);
          local_100 = 0;
          lVar18 = local_138;
          lVar19 = local_130;
        }
      }
      else {
LAB_1408a47fe:
        if (param_3 == '\0') {
          local_150 = 0;
          local_194 = 1;
          do {
            lVar19 = local_150;
            iVar10 = DAT_1468604b0;
            lVar18 = (longlong)DAT_1468604b0;
            uVar2 = *(undefined4 *)(local_150 + *(longlong *)(local_160 + local_118));
            uVar3 = *(undefined4 *)
                     (*(longlong *)(local_160 + local_118) +
                     (longlong)
                     (local_194 +
                     (local_194 / 3 + (local_194 >> 0x1f) +
                     (int)(((longlong)local_194 / 3 + ((longlong)local_194 >> 0x3f) & 0xffffffffU)
                          >> 0x1f)) * -3) * 4);
            DAT_1468604b0 = DAT_1468604b0 + 1;
            if (DAT_1468604b4 < DAT_1468604b0) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(&DAT_1468604a8,iVar10);
            }
            piVar14 = (int *)(lVar18 * 0x30 + _DAT_1468604a8);
            *piVar14 = DAT_14652d648;
            piVar14[2] = 0;
            piVar14[3] = 0;
            piVar14[4] = 0;
            piVar14[5] = 0;
            piVar14[6] = 0;
            piVar14[7] = 0;
            piVar14[8] = 0;
            piVar14[9] = 0;
            piVar14[10] = DAT_14652d64c;
            *(undefined1 *)(piVar14 + 0xb) = 0;
            piVar14 = (int *)((longlong)(DAT_1468604b0 + -1) * 0x30 + _DAT_1468604a8);
            plVar20 = (longlong *)(piVar14 + 2);
            *piVar14 = iVar9;
            local_198 = piVar14[4];
            if (local_198 < 3) {
              piVar14[4] = 3;
              iVar10 = 3 - local_198;
              if (piVar14[5] < 3) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(plVar20,local_198);
              }
              puVar25 = (undefined4 *)(*plVar20 + (longlong)local_198 * 0x18);
              lVar19 = local_150;
              if (iVar10 != 0) {
                puVar15 = puVar25 + 5;
                do {
                  *puVar25 = DAT_14652d640;
                  puVar25 = puVar25 + 6;
                  puVar15[-4] = DAT_14652d63c;
                  *(undefined8 *)(puVar15 + -3) = 0;
                  *(undefined8 *)(puVar15 + -1) = 0;
                  iVar10 = iVar10 + -1;
                  puVar15 = puVar15 + 6;
                } while (iVar10 != 0);
              }
            }
            else if (3 < local_198) {
              TArray<FVertexAndAttributes,FDefaultAllocator>::RemoveAtImpl
                        (plVar20,3,local_198 + -3,1);
            }
            *(undefined4 *)*plVar20 = uVar2;
            *(undefined4 *)(*plVar20 + 0x18) = uVar3;
            *(int *)(*plVar20 + 0x34) = iVar21;
            local_148 = DAT_14652d640;
            uStack_144 = DAT_14652d640;
            local_140 = DAT_14652d640;
            local_c8 = *(undefined8 *)(*local_f8 + (longlong)iVar21 * 0xc);
            local_c0 = *(undefined4 *)(*local_f8 + 8 + (longlong)iVar21 * 0xc);
            in_stack_fffffffffffffe58 = &local_b8;
            cVar6 = UEditableMesh::ComputeBarycentricWeightForPointOnPolygon
                              (param_1,iVar22,&local_c8,&local_148,in_stack_fffffffffffffe58);
            if (cVar6 != '\0') {
              lVar18 = *(longlong *)(param_1 + 0x28);
              local_188 = (longlong *)(*plVar20 + 0x38);
              _iStack_180 = CONCAT44(uStack_144,local_148);
              local_178 = local_140;
              iStack_16c = local_b0;
              iStack_174 = (int)local_b8;
              uStack_170 = (uint)((ulonglong)local_b8 >> 0x20);
              FUN_14085bf80(lVar18 + 0x380,&local_188);
              FUN_14085c1c0(lVar18 + 0x3d8,&local_188);
              FUN_14085bd40(lVar18 + 0x430,&local_188);
              FUN_14085bb00(lVar18 + 0x488,&local_188);
              FUN_14085b8c0(lVar18 + 0x4e0,&local_188);
              FUN_14085c710(lVar18 + 0x538,&local_188);
              FUN_14085c400(lVar18 + 0x590,&local_188);
            }
            local_150 = lVar19 + 4;
            local_194 = local_194 + 1;
            lVar18 = local_138;
            lVar19 = local_130;
          } while (local_150 < 0xc);
        }
        else if (param_3 == '\x01') {
          lVar19 = (longlong)DAT_1468604b0;
          DAT_1468604b0 = DAT_1468604b0 + 1;
          if (DAT_1468604b4 < DAT_1468604b0) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(&DAT_1468604a8,iVar17);
          }
          piVar14 = (int *)0x0;
          piVar12 = (int *)(lVar19 * 0x30 + _DAT_1468604a8);
          if (piVar12 != (int *)0x0) {
            *piVar12 = DAT_14652d648;
            piVar12[2] = 0;
            piVar12[3] = 0;
            piVar12[4] = 0;
            piVar12[5] = 0;
            piVar12[6] = 0;
            piVar12[7] = 0;
            piVar12[8] = 0;
            piVar12[9] = 0;
            piVar12[10] = DAT_14652d64c;
            *(undefined1 *)(piVar12 + 0xb) = 0;
            piVar14 = piVar12;
          }
          *piVar14 = iVar9;
          iVar22 = 1;
          lVar8 = local_160;
          do {
            iVar10 = piVar14[4];
            iVar17 = iVar22 % *(int *)(lVar8 + 8 + lVar13);
            piVar14[4] = iVar10 + 1;
            if (piVar14[5] < iVar10 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(piVar14 + 2,iVar10);
              lVar8 = local_160;
            }
            puVar28 = (undefined4 *)0x0;
            puVar25 = (undefined4 *)(*(longlong *)(piVar14 + 2) + (longlong)iVar10 * 0x18);
            puVar15 = puVar28;
            if (puVar25 != (undefined4 *)0x0) {
              *puVar25 = DAT_14652d640;
              puVar25[1] = DAT_14652d63c;
              *(undefined8 *)(puVar25 + 2) = 0;
              *(undefined8 *)(puVar25 + 4) = 0;
              puVar15 = puVar25;
            }
            iVar22 = iVar22 + 2;
            *puVar15 = *(undefined4 *)(*(longlong *)(lVar8 + lVar13) + (longlong)iVar17 * 4);
            puVar25 = puVar28;
          } while (iVar22 < 7);
          do {
            iVar22 = DAT_1468604b0;
            local_158 = *(int *)(lVar8 + 8 + lVar13);
            lVar19 = (longlong)DAT_1468604b0;
            iVar10 = (int)puVar25;
            local_198 = (local_158 + -1 + iVar10) % local_158;
            local_158 = (iVar10 + 1) % local_158;
            DAT_1468604b0 = DAT_1468604b0 + 1;
            if (DAT_1468604b4 < DAT_1468604b0) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(&DAT_1468604a8,iVar22);
              lVar8 = local_160;
            }
            piVar14 = (int *)0x0;
            piVar12 = (int *)(lVar19 * 0x30 + _DAT_1468604a8);
            if (piVar12 != (int *)0x0) {
              *piVar12 = DAT_14652d648;
              piVar12[2] = 0;
              piVar12[3] = 0;
              piVar12[4] = 0;
              piVar12[5] = 0;
              piVar12[6] = 0;
              piVar12[7] = 0;
              piVar12[8] = 0;
              piVar12[9] = 0;
              piVar12[10] = DAT_14652d64c;
              *(undefined1 *)(piVar12 + 0xb) = 0;
              piVar14 = piVar12;
            }
            plVar20 = (longlong *)(piVar14 + 2);
            *piVar14 = iVar9;
            iVar22 = piVar14[4];
            if (iVar22 < 3) {
              piVar14[4] = 3;
              iVar17 = 3 - iVar22;
              if (piVar14[5] < 3) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(plVar20,iVar22);
              }
              puVar25 = (undefined4 *)(*plVar20 + (longlong)iVar22 * 0x18);
              lVar8 = local_160;
              if (iVar17 != 0) {
                puVar15 = puVar25 + 5;
                do {
                  *puVar25 = DAT_14652d640;
                  puVar25 = puVar25 + 6;
                  puVar15[-4] = DAT_14652d63c;
                  *(undefined8 *)(puVar15 + -3) = 0;
                  *(undefined8 *)(puVar15 + -1) = 0;
                  iVar17 = iVar17 + -1;
                  puVar15 = puVar15 + 6;
                } while (iVar17 != 0);
              }
            }
            else if (3 < iVar22) {
              TArray<FVertexAndAttributes,FDefaultAllocator>::RemoveAtImpl(plVar20,3,iVar22 + -3,1);
              lVar8 = local_160;
            }
            *(undefined4 *)*plVar20 =
                 *(undefined4 *)(*(longlong *)(lVar8 + lVar13) + (longlong)local_198 * 4);
            puVar25 = (undefined4 *)((longlong)puVar28 + *(longlong *)(lVar8 + lVar13));
            puVar28 = puVar28 + 2;
            *(undefined4 *)(*plVar20 + 0x18) = *puVar25;
            *(undefined4 *)(*plVar20 + 0x30) =
                 *(undefined4 *)(*(longlong *)(lVar8 + lVar13) + (longlong)local_158 * 4);
            lVar18 = local_138;
            lVar19 = local_130;
            puVar25 = (undefined4 *)(ulonglong)(iVar10 + 2U);
          } while ((int)(iVar10 + 2U) < 6);
        }
      }
      local_190[0] = local_190[0] + 1;
      local_f0 = local_f0 + 4;
    } while (local_190[0] < (int)param_2[1]);
  }
  FUN_14087cad0(param_1,param_2,0,0,(ulonglong)in_stack_fffffffffffffe58 & 0xffffffffffffff00,0);
  if ((*(int *)(lVar19 + 0x38) < DAT_1468604e8) &&
     (_Init_thread_header(&DAT_1468604e8), DAT_1468604e8 == -1)) {
    atexit((_func_5014 *)&LAB_143e43490);
    _Init_thread_footer(&DAT_1468604e8);
  }
  FUN_140879f40(param_1,&DAT_1468604a8,param_4,&DAT_1468604d8);
  return;
}



// FUNCTION 1408a4fd0 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 FAssignPolygonsToPolygonGroupChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)LogHelpers::ArrayToString<FPolygonGroupForPolygon>(local_18,param_1 + 8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Assign Polygons To PolygonGroups [PolygonGroupForPolygons:%s]",
                      puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a5020 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 FChangePolygonsVertexInstancesChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)
           LogHelpers::ArrayToString<FChangeVertexInstancesForPolygon>(local_18,param_1 + 8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Change Polygons Vertex Instances [VertexInstancesForPolygons:%s]",
                      puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a5070 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 FCreateEdgesChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)LogHelpers::ArrayToString<FEdgeToCreate>(local_18,param_1 + 8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Create Edges [EdgesToCreate:%s]",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a50c0 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 FCreatePolygonGroupsChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)LogHelpers::ArrayToString<FPolygonGroupToCreate>(local_18,param_1 + 8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Create PolygonGroups [PolygonGroupsToCreate:%s]",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a5110 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 FCreatePolygonsChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)LogHelpers::ArrayToString<FPolygonToCreate>(local_18,param_1 + 8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Create Polygons [PolygonsToCreate:%s]",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a5160 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 FCreateVertexInstancesChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)LogHelpers::ArrayToString<FVertexInstanceToCreate>(local_18,param_1 + 8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Create Vertex Instances [VertexInstancesToCreate:%s]",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a51b0 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 FCreateVerticesChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)LogHelpers::ArrayToString<FVertexToCreate>(local_18,param_1 + 8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Create Vertices [VerticesToCreate:%s]",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a5200 ToString body=265 status=ok
// SIG undefined ToString(void)

undefined8 FDeleteEdgesChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *local_38;
  ulonglong local_30;
  longlong local_28 [2];
  
  pwVar5 = L"false";
  if (*(char *)(param_1 + 0x18) != '\0') {
    pwVar5 = L"true";
  }
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  puVar8 = &DAT_143f3eda8;
  puVar6 = (undefined2 *)0x0;
  if (*pwVar5 != L'\0') {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (pwVar5[lVar3] != L'\0');
    uVar2 = (int)lVar3 + 1;
    local_30 = (ulonglong)uVar2;
    uVar7 = uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      uVar7 = (uint)local_30;
    }
    puVar4 = local_38;
    FGenericPlatformString::Memcpy(local_38,pwVar5,(longlong)(int)uVar2 * 2);
    puVar6 = puVar4;
    if (uVar7 != 0) goto LAB_1408a52a3;
  }
  puVar4 = &DAT_143f3eda8;
LAB_1408a52a3:
  puVar1 = (undefined8 *)LogHelpers::ArrayToString<FEdgeID>(local_28,param_1 + 8);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar8 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Delete Edges [EdgeIDsToDelete:%s, bDeleteOrphanedVertices:%s]",
                      puVar8,puVar4);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (puVar6 != (undefined2 *)0x0) {
    FMemory::Free(puVar6);
  }
  return param_2;
}



// FUNCTION 1408a5310 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 FDeleteOrphanVerticesChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)LogHelpers::ArrayToString<FEdgeID>(local_18,param_1 + 8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Delete Orphan Vertices [VertexIDsToDelete:%s]",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a5360 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 FDeletePolygonGroupsChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)LogHelpers::ArrayToString<FEdgeID>(local_18,param_1 + 8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Delete PolygonGroups [PolygonGroupIDs:%s]",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a53b0 ToString body=581 status=ok
// SIG undefined ToString(void)

undefined8 FDeletePolygonsChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined2 *puVar12;
  wchar_t *pwVar13;
  undefined2 *local_res18;
  undefined2 *local_58;
  ulonglong local_50;
  longlong local_48 [2];
  
  pwVar13 = L"false";
  pwVar5 = L"false";
  if (*(char *)(param_1 + 0x1b) != '\0') {
    pwVar5 = L"true";
  }
  puVar7 = (undefined2 *)0x0;
  local_58 = (undefined2 *)0x0;
  lVar8 = -1;
  lVar3 = lVar8;
  puVar10 = puVar7;
  if (*pwVar5 == L'\0') {
LAB_1408a545b:
    local_res18 = &DAT_143f3eda8;
  }
  else {
    do {
      lVar3 = lVar3 + 1;
    } while (pwVar5[lVar3] != L'\0');
    uVar2 = (int)lVar3 + 1;
    local_50 = (ulonglong)uVar2;
    uVar11 = uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      uVar11 = (uint)local_50;
    }
    puVar10 = local_58;
    FGenericPlatformString::Memcpy(local_58,pwVar5,(longlong)(int)uVar2 * 2);
    local_res18 = puVar10;
    if (uVar11 == 0) goto LAB_1408a545b;
  }
  pwVar5 = L"false";
  local_58 = (undefined2 *)0x0;
  if (*(char *)(param_1 + 0x19) != '\0') {
    pwVar5 = L"true";
  }
  lVar3 = lVar8;
  puVar12 = puVar7;
  if (*pwVar5 == L'\0') {
LAB_1408a54e0:
    puVar6 = &DAT_143f3eda8;
  }
  else {
    do {
      lVar3 = lVar3 + 1;
    } while (pwVar5[lVar3] != L'\0');
    uVar2 = (int)lVar3 + 1;
    local_50 = (ulonglong)uVar2;
    uVar11 = uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      uVar11 = (uint)local_50;
    }
    puVar6 = local_58;
    FGenericPlatformString::Memcpy(local_58,pwVar5,(longlong)(int)uVar2 * 2);
    puVar12 = puVar6;
    if (uVar11 == 0) goto LAB_1408a54e0;
  }
  puVar9 = &DAT_143f3eda8;
  local_58 = (undefined2 *)0x0;
  local_50 = 0;
  if (*(char *)(param_1 + 0x18) != '\0') {
    pwVar13 = L"true";
  }
  if (*pwVar13 != L'\0') {
    do {
      lVar8 = lVar8 + 1;
    } while (pwVar13[lVar8] != L'\0');
    uVar2 = (int)lVar8 + 1;
    local_50 = (ulonglong)uVar2;
    uVar11 = uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      uVar11 = (uint)local_50;
    }
    puVar4 = local_58;
    FGenericPlatformString::Memcpy(local_58,pwVar13,(longlong)(int)uVar2 * 2);
    puVar7 = puVar4;
    if (uVar11 != 0) goto LAB_1408a5556;
  }
  puVar4 = &DAT_143f3eda8;
LAB_1408a5556:
  puVar1 = (undefined8 *)LogHelpers::ArrayToString<FEdgeID>(local_48,param_1 + 8);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar9 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Delete Polygons [PolygonIDsToDelete:%s, %s, %s]",puVar9,puVar4,
                      puVar6,local_res18);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  return param_2;
}



// FUNCTION 1408a5600 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 FDeleteVertexInstancesChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)LogHelpers::ArrayToString<FEdgeID>(local_18,param_1 + 8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Delete Vertex Instances [VertexInstanceIDsToDelete:%s]",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a5650 ToString body=209 status=ok
// SIG undefined ToString(void)

longlong * FElementID::ToString(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong local_28 [4];
  
  bVar2 = *param_1 != DAT_14652d638;
  if (bVar2) {
    FString::PrintfImpl(local_28 + 2,&DAT_143f3edc0);
    plVar1 = local_28 + 2;
  }
  else {
    local_28[0] = 0;
    local_28[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"Invalid",0x10);
    plVar1 = local_28;
  }
  *param_2 = *plVar1;
  *plVar1 = 0;
  *(int *)(param_2 + 1) = (int)plVar1[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  if (bVar2) {
    if (local_28[2] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar2) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a5730 ToString body=165 status=ok
// SIG undefined ToString(void)

undefined8 FInsertPolygonPerimeterVerticesChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)LogHelpers::ArrayToString<FVertexAndAttributes>(local_18,param_1 + 0x10);
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)FElementID::ToString(param_1 + 8,local_28);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,
                      L"Insert Polygon Perimeter Vertices [PolygonID:%s, InsertBeforeVertexNumber:%lu, VerticesToInsert:%s]"
                      ,puVar3,*(undefined4 *)(param_1 + 0xc),puVar2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a57e0 FUN_1408a57e0 body=521 status=ok
// SIG undefined FUN_1408a57e0(void)

undefined8 * FUN_1408a57e0(undefined1 *param_1,undefined8 *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  longlong lVar3;
  
  switch(*param_1) {
  case 0:
    *param_2 = 0;
    param_2[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Convert<char,wchar_t>(*param_2,7,"<none>",7,0x3f);
    return param_2;
  case 1:
    FString::PrintfImpl(param_2,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f",
                        (double)*(float *)(param_1 + 0x10),(double)*(float *)(param_1 + 0x14),
                        (double)*(float *)(param_1 + 0x18),(double)*(float *)(param_1 + 0x1c));
    return param_2;
  case 2:
    FString::PrintfImpl(param_2,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*(float *)(param_1 + 0x20),
                        (double)*(float *)(param_1 + 0x24),(double)*(float *)(param_1 + 0x28));
    return param_2;
  case 3:
    FString::PrintfImpl(param_2,L"X=%3.3f Y=%3.3f",(double)*(float *)(param_1 + 0x2c),
                        (double)*(float *)(param_1 + 0x30));
    return param_2;
  case 4:
    FString::PrintfImpl(param_2,&DAT_144114f48,(double)*(float *)(param_1 + 0x34));
    return param_2;
  case 5:
    FString::PrintfImpl(param_2,&DAT_1440da628,*(undefined4 *)(param_1 + 0x38));
    return param_2;
  case 6:
    break;
  case 7:
    FName::ToString(param_1 + 0x40,param_2);
    return param_2;
  default:
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  pwVar1 = L"false";
  if (param_1[0x3c] != '\0') {
    pwVar1 = L"true";
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (*pwVar1 != L'\0') {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (pwVar1[lVar3] != L'\0');
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,pwVar1,(longlong)iVar2 * 2);
  }
  return param_2;
}



// FUNCTION 1408a5a10 ToString body=103 status=ok
// SIG undefined ToString(void)

undefined8 FRemovePolygonPerimeterVerticesChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FElementID::ToString(param_1 + 8,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,
                      L"Remove Polygon Perimeter Vertices [PolygonID:%s, FirstVertexNumberToRemove:%lu, NumVerticesToRemove:%lu]"
                      ,puVar2,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a5a80 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 FSetEdgesAttributesChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)LogHelpers::ArrayToString<FAttributesForEdge>(local_18,param_1 + 8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Set Edges Attributes [AttributesForEdges:%s]",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a5ad0 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 FSetEdgesVerticesChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)LogHelpers::ArrayToString<FVerticesForEdge>(local_18,param_1 + 8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Set Edges Vertices [VerticesForEdges:%s]",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a5b20 ToString body=37 status=ok
// SIG undefined ToString(void)

undefined8 FSetSubdivisionCountChange::ToString(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"Set Subdivision Count [NewSubdivisionCount:%i]",
                      *(undefined4 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 1408a5b50 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 FSetVertexInstancesAttributesChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)
           LogHelpers::ArrayToString<FAttributesForVertexInstance>(local_18,param_1 + 8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Set Vertex Instances Attributes [AttributesForVertexInstances:%s]",
                      puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a5ba0 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 FSetVerticesAttributesChange::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)LogHelpers::ArrayToString<FAttributesForVertex>(local_18,param_1 + 8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"Set Vertices Attributes [AttributesForVertices:%s]",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408a5bf0 ToString body=68 status=ok
// SIG undefined ToString(void)

undefined8 FStartOrEndModificationChange::ToString(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"End";
  if (*(char *)(param_1 + 8) != '\0') {
    pwVar1 = L"Start";
  }
  FString::PrintfImpl(param_2,L"%s Modification (MeshModificationType:%i, MeshTopologyChange:%i)",
                      pwVar1,*(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 10));
  return param_2;
}



// FUNCTION 1408a5c40 FUN_1408a5c40 body=994 status=ok
// SIG undefined FUN_1408a5c40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408a5c40(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  
  *(undefined4 *)(param_3 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_3 + 0xc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar9 < DAT_1468602a8) && (_Init_thread_header(&DAT_1468602a8), DAT_1468602a8 == -1)) {
    atexit((_func_5014 *)&LAB_143e43f40);
    _Init_thread_footer(&DAT_1468602a8);
  }
  TArray<FPolygonToCreate,FDefaultAllocator>::Reset(&DAT_146860298,0);
  if ((*piVar9 < DAT_1468602c0) && (_Init_thread_header(&DAT_1468602c0), DAT_1468602c0 == -1)) {
    atexit((_func_5014 *)&LAB_143e43fb0);
    _Init_thread_footer(&DAT_1468602c0);
  }
  DAT_1468602b8 = 0;
  if (DAT_1468602bc < 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_1468602b0,0);
  }
  piVar11 = (int *)*param_2;
  piVar1 = piVar11 + *(int *)(param_2 + 1);
  iVar4 = DAT_1468602b8;
  for (; DAT_1468602b8 = iVar4, piVar11 != piVar1; piVar11 = piVar11 + 1) {
    iVar3 = *piVar11;
    if (3 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8) + 8 +
                    (longlong)iVar3 * 0x38)) {
      DAT_1468602b8 = iVar4 + 1;
      if (DAT_1468602bc < DAT_1468602b8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_1468602b0,iVar4);
      }
      *(int *)(DAT_1468602b0 + (longlong)iVar4 * 4) = iVar3;
      if ((*piVar9 < DAT_1468602d8) && (_Init_thread_header(&DAT_1468602d8), DAT_1468602d8 == -1)) {
        atexit((_func_5014 *)&LAB_143e44270);
        _Init_thread_footer(&DAT_1468602d8);
      }
      FUN_140877840(param_1,iVar3);
      lVar2 = DAT_1468602c8 + (longlong)DAT_1468602d0 * 0xc;
      if (DAT_1468602c8 != lVar2) {
        lVar10 = DAT_1468602c8;
        do {
          iVar4 = DAT_1468602a0;
          lVar7 = (longlong)DAT_1468602a0;
          DAT_1468602a0 = DAT_1468602a0 + 1;
          if (DAT_1468602a4 < DAT_1468602a0) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(&DAT_146860298,iVar4);
          }
          lVar8 = 0;
          puVar6 = (undefined4 *)(lVar7 * 0x30 + _DAT_146860298);
          *puVar6 = DAT_14652d648;
          *(undefined8 *)(puVar6 + 2) = 0;
          *(undefined8 *)(puVar6 + 4) = 0;
          *(undefined8 *)(puVar6 + 6) = 0;
          *(undefined8 *)(puVar6 + 8) = 0;
          puVar6[10] = DAT_14652d64c;
          *(undefined1 *)(puVar6 + 0xb) = 0;
          puVar6 = (undefined4 *)((longlong)(DAT_1468602a0 + -1) * 0x30 + _DAT_146860298);
          *puVar6 = *(undefined4 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8) +
                     (longlong)iVar3 * 0x38 + 0x30);
          *(undefined1 *)(puVar6 + 0xb) = 0;
          do {
            iVar4 = puVar6[4];
            lVar7 = (longlong)iVar4;
            puVar6[4] = iVar4 + 1;
            if ((int)puVar6[5] < iVar4 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(puVar6 + 2,iVar4);
            }
            lVar5 = *(longlong *)(puVar6 + 2);
            *(undefined4 *)(lVar5 + lVar7 * 0x18) = DAT_14652d640;
            *(undefined4 *)(lVar5 + 4 + lVar7 * 0x18) = DAT_14652d63c;
            *(undefined8 *)(lVar5 + 8 + lVar7 * 0x18) = 0;
            *(undefined8 *)(lVar5 + 0x10 + lVar7 * 0x18) = 0;
            iVar4 = puVar6[4];
            lVar5 = *(longlong *)(puVar6 + 2);
            lVar7 = lVar8 * 4;
            lVar8 = lVar8 + 1;
            *(undefined4 *)(lVar5 + -0x18 + (longlong)iVar4 * 0x18) =
                 *(undefined4 *)(lVar10 + lVar7);
            *(undefined4 *)(lVar5 + -0x14 + (longlong)iVar4 * 0x18) = DAT_14652d63c;
          } while (lVar8 < 3);
          lVar10 = lVar10 + 0xc;
        } while (lVar10 != lVar2);
      }
    }
    iVar4 = DAT_1468602b8;
  }
  FUN_14087cad0(param_1,&DAT_1468602b0,0,0,0,0);
  if ((*piVar9 < DAT_1468602f0) && (_Init_thread_header(&DAT_1468602f0), DAT_1468602f0 == -1)) {
    atexit((_func_5014 *)&LAB_143e43350);
    _Init_thread_footer(&DAT_1468602f0);
  }
  FUN_140879f40(param_1,&DAT_146860298,param_3,&DAT_1468602e0);
  return;
}



// FUNCTION 1408a6030 FUN_1408a6030 body=1767 status=ok
// SIG undefined FUN_1408a6030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408a6030(longlong param_1,int param_2,undefined1 *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  int *piVar25;
  int local_res10;
  uint local_74;
  longlong local_58;
  int local_50;
  int iStack_4c;
  
  *param_3 = 0;
  lVar11 = (longlong)param_2;
  *param_4 = DAT_14652d64c;
  plVar12 = *(longlong **)(param_1 + 0x28);
  lVar16 = plVar12[0xe];
  piVar25 = (int *)(lVar16 + lVar11 * 0x18);
  if (*(int *)(lVar16 + 0x10 + lVar11 * 0x18) == 2) {
    lVar14 = *plVar12;
    iVar8 = 0;
    lVar6 = (longlong)*(int *)(lVar16 + lVar11 * 0x18) * 0x20;
    iVar22 = *(int *)(lVar6 + 0x18 + lVar14);
    bVar5 = 0;
    if (0 < iVar22) {
      lVar6 = lVar6 + lVar14;
      do {
        if ((iVar8 < 0) || (*(int *)(lVar6 + 0x18) <= iVar8)) {
          piVar17 = &DAT_14652d644;
        }
        else {
          piVar17 = (int *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar8 * 4);
        }
        if (*piVar17 != param_2) {
          bVar5 = 1;
          break;
        }
        iVar8 = iVar8 + 1;
        bVar5 = 0;
      } while (iVar8 < iVar22);
    }
    bVar4 = 0;
    lVar16 = (longlong)*(int *)(lVar16 + (lVar11 * 6 + 1) * 4) * 0x20;
    iVar8 = 0;
    iVar22 = *(int *)(lVar16 + 0x18 + lVar14);
    if (0 < iVar22) {
      lVar16 = **(longlong **)(param_1 + 0x28) + lVar16;
      do {
        if ((iVar8 < 0) || (*(int *)(lVar16 + 0x18) <= iVar8)) {
          piVar17 = &DAT_14652d644;
        }
        else {
          piVar17 = (int *)(*(longlong *)(lVar16 + 0x10) + (longlong)iVar8 * 4);
        }
        if (*piVar17 != param_2) {
          bVar4 = 1;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar22);
    }
    if ((bool)(bVar5 & bVar4)) {
      piVar17 = &DAT_14652d64c;
      if (piVar25[4] < 1) {
        piVar7 = &DAT_14652d64c;
      }
      else {
        piVar7 = *(int **)(piVar25 + 2);
      }
      if (1 < piVar25[4]) {
        piVar17 = (int *)(*(longlong *)(piVar25 + 2) + 4);
      }
      plVar13 = (longlong *)((longlong)*piVar7 * 0x38 + plVar12[0x15]);
      lVar16 = plVar13[6];
      plVar18 = (longlong *)((longlong)*piVar17 * 0x38 + plVar12[0x15]);
      if ((int)lVar16 == (int)plVar18[6]) {
        iVar22 = *piVar25;
        lVar11 = 0;
        iVar8 = piVar25[1];
        iVar15 = (int)plVar13[1];
        local_58 = 0;
        iVar19 = 0;
        iStack_4c = 0;
        local_74 = 0xffffffff;
        local_res10 = -1;
        iVar9 = local_res10;
        if (0 < iVar15) {
          piVar25 = (int *)*plVar13;
          iVar20 = 0;
          do {
            iVar21 = iVar20 + 1;
            iVar9 = *(int *)(plVar12[7] + (longlong)*piVar25 * 0x18);
            if (((iVar9 == iVar22) || (iVar9 == iVar8)) &&
               ((iVar2 = *(int *)(plVar12[7] +
                                 (longlong)*(int *)(*plVar13 + (longlong)(iVar21 % iVar15) * 4) *
                                 0x18), iVar9 = iVar20, iVar2 == iVar22 || (iVar2 == iVar8))))
            break;
            piVar25 = piVar25 + 1;
            iVar20 = iVar21;
            iVar9 = local_res10;
          } while (iVar21 < iVar15);
        }
        local_res10 = iVar9;
        iVar9 = (int)plVar18[1];
        lVar6 = (longlong)(local_res10 + 1) % (longlong)iVar15;
        uVar23 = local_74;
        if (0 < iVar9) {
          piVar25 = (int *)*plVar18;
          uVar10 = 0;
          do {
            uVar1 = uVar10 + 1;
            iVar15 = *(int *)(plVar12[7] + (longlong)*piVar25 * 0x18);
            if (((iVar15 == iVar22) || (iVar15 == iVar8)) &&
               ((iVar15 = *(int *)(plVar12[7] +
                                  (longlong)*(int *)(*plVar18 + (longlong)((int)uVar1 % iVar9) * 4)
                                  * 0x18), uVar23 = uVar10, iVar15 == iVar22 || (iVar15 == iVar8))))
            break;
            piVar25 = piVar25 + 1;
            uVar10 = uVar1;
            uVar23 = local_74;
          } while ((int)uVar1 < iVar9);
        }
        local_74 = uVar23;
        uVar3 = (longlong)(int)(local_74 + 1) % (longlong)iVar9;
        iVar22 = *(int *)(plVar12[7] +
                         (longlong)*(int *)(*plVar13 + (longlong)local_res10 * 4) * 0x18);
        iVar8 = *(int *)(plVar12[7] +
                        (longlong)*(int *)(*plVar18 + (longlong)(int)local_74 * 4) * 0x18);
        iVar9 = (int)lVar6;
        iVar15 = 0;
        while (iVar9 != local_res10) {
          lVar14 = (longlong)iVar15;
          local_50 = iVar15 + 1;
          if (iVar19 < local_50) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_58,iVar15);
            lVar11 = local_58;
            iVar19 = iStack_4c;
          }
          *(undefined4 *)(lVar11 + lVar14 * 0x18) = DAT_14652d640;
          *(undefined4 *)(lVar11 + 4 + lVar14 * 0x18) = DAT_14652d63c;
          *(undefined8 *)(lVar11 + 8 + lVar14 * 0x18) = 0;
          *(undefined8 *)(lVar11 + 0x10 + lVar14 * 0x18) = 0;
          *(undefined4 *)(lVar11 + (longlong)(local_50 + -1) * 0x18) =
               *(undefined4 *)(*plVar13 + (longlong)(int)lVar6 * 4);
          lVar6 = (longlong)((int)lVar6 + 1) % (longlong)(int)plVar13[1];
          iVar15 = local_50;
          iVar9 = (int)lVar6;
        }
        uVar24 = (ulonglong)local_74;
        uVar23 = (uint)uVar3;
        if (iVar22 == iVar8) {
          iVar22 = (int)plVar18[1] + -1;
        }
        else {
          uVar24 = uVar3 & 0xffffffff;
          iVar22 = 1;
          uVar23 = local_74;
        }
        uVar10 = (uint)uVar24;
        while (uVar10 != uVar23) {
          lVar6 = (longlong)iVar15;
          local_50 = iVar15 + 1;
          if (iVar19 < local_50) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_58,iVar15);
            lVar11 = local_58;
            iVar19 = iStack_4c;
          }
          *(undefined4 *)(lVar11 + lVar6 * 0x18) = DAT_14652d640;
          *(undefined4 *)(lVar11 + 4 + lVar6 * 0x18) = DAT_14652d63c;
          *(undefined8 *)(lVar11 + 8 + lVar6 * 0x18) = 0;
          *(undefined8 *)(lVar11 + 0x10 + lVar6 * 0x18) = 0;
          *(undefined4 *)(lVar11 + (longlong)(local_50 + -1) * 0x18) =
               *(undefined4 *)(*plVar18 + (longlong)(int)uVar24 * 4);
          uVar3 = (longlong)((int)uVar24 + iVar22) % (longlong)(int)plVar18[1];
          uVar24 = uVar3 & 0xffffffff;
          iVar15 = local_50;
          uVar10 = (uint)uVar3;
        }
        local_50 = iVar15;
        FUN_14087b3e0(param_1,param_2,0,0,0,0);
        piVar25 = (int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38)
        ;
        if ((*piVar25 < DAT_14685faf0) && (_Init_thread_header(&DAT_14685faf0), DAT_14685faf0 == -1)
           ) {
          atexit((_func_5014 *)&LAB_143e43f70);
          _Init_thread_footer(&DAT_14685faf0);
        }
        TArray<FPolygonToCreate,FDefaultAllocator>::Reset(&DAT_14685fae0,0);
        iVar22 = DAT_14685fae8;
        lVar6 = (longlong)DAT_14685fae8;
        DAT_14685fae8 = DAT_14685fae8 + 1;
        if (DAT_14685faec < DAT_14685fae8) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(&DAT_14685fae0,iVar22);
        }
        piVar17 = (int *)(lVar6 * 0x30 + _DAT_14685fae0);
        if (piVar17 == (int *)0x0) {
          piVar17 = (int *)0x0;
        }
        else {
          *piVar17 = DAT_14652d648;
          piVar17[2] = 0;
          piVar17[3] = 0;
          piVar17[4] = 0;
          piVar17[5] = 0;
          piVar17[6] = 0;
          piVar17[7] = 0;
          piVar17[8] = 0;
          piVar17[9] = 0;
          piVar17[10] = DAT_14652d64c;
          *(undefined1 *)(piVar17 + 0xb) = 0;
        }
        *piVar17 = (int)lVar16;
        TArray<FVertexAndAttributes,FDefaultAllocator>::operator=(piVar17 + 2,&local_58);
        if ((*piVar25 < DAT_14685fb08) && (_Init_thread_header(&DAT_14685fb08), DAT_14685fb08 == -1)
           ) {
          atexit((_func_5014 *)&LAB_143e43630);
          _Init_thread_footer(&DAT_14685fb08);
        }
        _DAT_14685fb00 = 0;
        if ((DAT_14685fb04 < 0) && (DAT_14685fb04 != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685faf8,0);
        }
        if ((*piVar25 < DAT_14685fb20) && (_Init_thread_header(&DAT_14685fb20), DAT_14685fb20 == -1)
           ) {
          atexit((_func_5014 *)&LAB_143e433f0);
          _Init_thread_footer(&DAT_14685fb20);
        }
        _DAT_14685fb18 = 0;
        if ((DAT_14685fb1c < 0) && (DAT_14685fb1c != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685fb10,0);
        }
        FUN_140879f40(param_1,&DAT_14685fae0,&DAT_14685faf8,&DAT_14685fb10);
        *param_4 = *DAT_14685faf8;
        *param_3 = 1;
        if (iVar15 != 0) {
          plVar12 = (longlong *)(lVar11 + 8);
          do {
            if (*plVar12 != 0) {
              FMemory::Free();
            }
            plVar12 = plVar12 + 3;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        if (lVar11 != 0) {
          FMemory::Free(lVar11);
        }
      }
    }
  }
  return;
}



// FUNCTION 1408a6720 FUN_1408a6720 body=1877 status=ok
// SIG undefined FUN_1408a6720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408a6720(longlong param_1,int param_2,undefined1 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  void *pvVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  undefined4 *local_res20;
  undefined8 *local_58;
  undefined4 local_50;
  
  *param_3 = 0;
  *param_4 = DAT_14652d644;
  lVar15 = (longlong)param_2 * 0x20;
  lVar8 = **(longlong **)(param_1 + 0x28);
  if (*(int *)(lVar8 + 0x18 + lVar15) == 2) {
    lVar1 = (*(longlong **)(param_1 + 0x28))[0xe];
    uVar7 = 0;
    uVar12 = uVar7;
    uVar13 = uVar7;
    do {
      iVar11 = (int)uVar12;
      if ((iVar11 < 0) || (*(int *)(lVar8 + 0x18 + lVar15) <= iVar11)) {
        piVar14 = &DAT_14652d644;
      }
      else {
        piVar14 = (int *)(*(longlong *)(lVar8 + 0x10 + lVar15) + (longlong)iVar11 * 4);
      }
      lVar4 = (longlong)*piVar14;
      uVar3 = *(undefined4 *)(lVar1 + 4 + lVar4 * 0x18);
      if (*(int *)(lVar1 + lVar4 * 0x18) != param_2) {
        uVar3 = *(undefined4 *)(lVar1 + lVar4 * 0x18);
      }
      uVar12 = (ulonglong)(iVar11 + 1);
      local_res8[uVar13] = uVar3;
      uVar13 = uVar13 + 1;
    } while ((longlong)uVar13 < 2);
    piVar14 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38);
    local_res18 = param_3;
    local_res20 = param_4;
    if ((*piVar14 < DAT_14685fb38) && (_Init_thread_header(&DAT_14685fb38), DAT_14685fb38 == -1)) {
      atexit((_func_5014 *)&LAB_143e42a20);
      _Init_thread_footer(&DAT_14685fb38);
    }
    if (*(int *)(**(longlong **)(param_1 + 0x28) + 0x18 + lVar15) < 1) {
      puVar5 = &DAT_14652d644;
    }
    else {
      puVar5 = *(undefined4 **)(**(longlong **)(param_1 + 0x28) + 0x10 + lVar15);
    }
    uVar3 = *puVar5;
    DAT_14685fb30 = 0;
    if ((DAT_14685fb34 < 0) && (DAT_14685fb34 != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(&DAT_14685fb28,0);
    }
    lVar8 = *(longlong *)(param_1 + 0x28);
    local_58 = &DAT_14685fb28;
    local_50 = uVar3;
    FUN_14085d2c0(lVar8 + 0x5e8,&local_58);
    FUN_14085d580(lVar8 + 0x640,&local_58);
    FUN_14085cfe0(lVar8 + 0x698,&local_58);
    FUN_14085cd10(lVar8 + 0x6f0,&local_58);
    FUN_14085ca40(lVar8 + 0x748,&local_58);
    FUN_14085db20(lVar8 + 0x7a0,&local_58);
    FUN_14085d860(lVar8 + 0x7f8,&local_58);
    if ((*piVar14 < DAT_14685fb50) && (_Init_thread_header(&DAT_14685fb50), DAT_14685fb50 == -1)) {
      atexit((_func_5014 *)&LAB_143e432d0);
      _Init_thread_footer(&DAT_14685fb50);
    }
    UEditableMesh::GetVertexConnectedPolygons(param_1,param_2,&DAT_14685fb40);
    uVar12 = (longlong)(int)DAT_14685fb48 & 0x3fffffffffffffff;
    if (DAT_14685fb40 + (int)DAT_14685fb48 < DAT_14685fb40) {
      uVar12 = uVar7;
    }
    puVar5 = DAT_14685fb40;
    if (uVar12 != 0) {
      do {
        uVar3 = UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(param_1,*puVar5,param_2);
        FUN_14089c920(param_1,*puVar5,uVar3,1,0);
        uVar7 = uVar7 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar7 != uVar12);
    }
    if ((*piVar14 < DAT_14685fb68) && (_Init_thread_header(&DAT_14685fb68), DAT_14685fb68 == -1)) {
      atexit((_func_5014 *)&LAB_143e42b10);
      _Init_thread_footer(&DAT_14685fb68);
    }
    puVar5 = (undefined4 *)0x0;
    DAT_14685fb60 = 0;
    puVar6 = puVar5;
    puVar16 = puVar5;
    if ((DAT_14685fb64 < 0) && (DAT_14685fb64 != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685fb58,0);
    }
    do {
      iVar11 = DAT_14685fb60;
      iVar10 = (int)puVar6;
      if ((iVar10 < 0) || (*(int *)(**(longlong **)(param_1 + 0x28) + 0x18 + lVar15) <= iVar10)) {
        puVar6 = &DAT_14652d644;
      }
      else {
        puVar6 = (undefined4 *)
                 (*(longlong *)(**(longlong **)(param_1 + 0x28) + 0x10 + lVar15) + (longlong)puVar16
                 );
      }
      lVar8 = (longlong)DAT_14685fb60;
      uVar3 = *puVar6;
      DAT_14685fb60 = DAT_14685fb60 + 1;
      if (DAT_14685fb64 < DAT_14685fb60) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_14685fb58,iVar11);
      }
      puVar6 = (undefined4 *)(ulonglong)(iVar10 + 1U);
      puVar16 = puVar16 + 1;
      *(undefined4 *)(DAT_14685fb58 + lVar8 * 4) = uVar3;
    } while ((int)(iVar10 + 1U) < 2);
    FUN_14087b690(param_1,&DAT_14685fb58,0);
    if ((*piVar14 < DAT_14685fb80) && (_Init_thread_header(&DAT_14685fb80), DAT_14685fb80 == -1)) {
      atexit(FUN_143e42df0);
      _Init_thread_footer(&DAT_14685fb80);
    }
    FUN_14089d7d0(&DAT_14685fb70,0);
    iVar11 = DAT_14685fb78;
    lVar8 = (longlong)DAT_14685fb78;
    DAT_14685fb78 = DAT_14685fb78 + 1;
    if (DAT_14685fb7c < DAT_14685fb78) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&DAT_14685fb70,iVar11);
    }
    puVar6 = (undefined4 *)(lVar8 * 0x30 + DAT_14685fb70);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = DAT_14652d63c;
      puVar6[1] = DAT_14652d63c;
      *(undefined8 *)(puVar6 + 2) = 0;
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 6) = 0;
      *(undefined8 *)(puVar6 + 8) = 0;
      puVar6[10] = DAT_14652d644;
      puVar5 = puVar6;
    }
    puVar9 = (undefined8 *)(puVar5 + 2);
    *puVar5 = local_res8[0];
    puVar5[1] = local_res8[1];
    iVar11 = (int)DAT_14685fb48;
    puVar6 = DAT_14685fb40;
    if ((undefined4 **)puVar9 != &DAT_14685fb40) {
      puVar5[4] = (int)DAT_14685fb48;
      if ((iVar11 == 0) && (puVar5[5] == 0)) {
        puVar5[5] = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(puVar9,iVar11);
        _guard_xfg_dispatch_icall_nop((void *)*puVar9,puVar6,(longlong)iVar11 << 2);
      }
    }
    iVar11 = DAT_14685fb30;
    pvVar2 = DAT_14685fb28;
    puVar9 = (undefined8 *)(puVar5 + 6);
    if ((void **)puVar9 != &DAT_14685fb28) {
      lVar8 = (longlong)DAT_14685fb30;
      puVar5[8] = DAT_14685fb30;
      if ((iVar11 == 0) && (puVar5[9] == 0)) {
        puVar5[9] = 0;
      }
      else {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy(puVar9,iVar11);
        _guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar2,lVar8 * 0x60);
      }
    }
    if ((*piVar14 < DAT_14685fb98) && (_Init_thread_header(&DAT_14685fb98), DAT_14685fb98 == -1)) {
      atexit((_func_5014 *)&LAB_143e43370);
      _Init_thread_footer(&DAT_14685fb98);
    }
    _DAT_14685fb90 = 0;
    if ((DAT_14685fb94 < 0) && (DAT_14685fb94 != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(&DAT_14685fb88,0);
    }
    FUN_140878370(param_1,&DAT_14685fb70,&DAT_14685fb88);
    uVar3 = *DAT_14685fb88;
    if (*(int *)(param_1 + 0xd98) - *(int *)(param_1 + 0xdc4) <
        ((int)DAT_14685fb48 - *(int *)(param_1 + 0xdc4)) + *(int *)(param_1 + 0xd98)) {
      FUN_14089d230(param_1 + 0xd90);
    }
    puVar5 = DAT_14685fb40 + (int)DAT_14685fb48;
    for (puVar6 = DAT_14685fb40; puVar6 != puVar5; puVar6 = puVar6 + 1) {
      FUN_14085a180(param_1 + 0xd90,local_res10,puVar6,0);
    }
    if (*(int *)(param_1 + 0xde8) - *(int *)(param_1 + 0xe14) <
        ((int)DAT_14685fb48 - *(int *)(param_1 + 0xe14)) + *(int *)(param_1 + 0xde8)) {
      FUN_14089d230(param_1 + 0xde0);
    }
    puVar5 = DAT_14685fb40 + (int)DAT_14685fb48;
    for (puVar6 = DAT_14685fb40; puVar6 != puVar5; puVar6 = puVar6 + 1) {
      FUN_14085a180(param_1 + 0xde0,local_res10,puVar6,0);
    }
    puVar9 = (undefined8 *)(**(longlong **)(param_1 + 0x28) + lVar15);
    if ((*piVar14 < DAT_14685fbb0) && (_Init_thread_header(&DAT_14685fbb0), DAT_14685fbb0 == -1)) {
      atexit((_func_5014 *)&LAB_143e44550);
      _Init_thread_footer(&DAT_14685fbb0);
    }
    if ((void **)puVar9 != &DAT_14685fba0) {
      _DAT_14685fba8 = *(int *)(puVar9 + 1);
      lVar8 = (longlong)_DAT_14685fba8;
      pvVar2 = (void *)*puVar9;
      if ((_DAT_14685fba8 == 0) && (DAT_14685fbac == 0)) {
        DAT_14685fbac = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(&DAT_14685fba0,_DAT_14685fba8);
        _guard_xfg_dispatch_icall_nop(DAT_14685fba0,pvVar2,lVar8 << 2);
      }
    }
    FUN_14087d750(param_1,&DAT_14685fba0,1);
    *local_res18 = 1;
    *local_res20 = uVar3;
  }
  return;
}



// FUNCTION 1408a6e80 FUN_1408a6e80 body=1750 status=ok
// SIG undefined FUN_1408a6e80(void)

void FUN_1408a6e80(longlong param_1,longlong param_2,char param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  float fVar9;
  char cVar10;
  int iVar11;
  float *pfVar12;
  longlong *plVar13;
  longlong lVar14;
  float fVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint *puVar19;
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
  float local_138;
  float fStack_134;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  uint *puStack_110;
  uint uStack_108;
  float fStack_104;
  int iStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  float fStack_e8;
  uint uStack_e4;
  uint *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  uint *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  fVar26 = DAT_1468b5d98;
  fVar21 = DAT_1468b5d94;
  fVar20 = DAT_1468b5d90;
  if (param_3 != '\0') {
    if (*(int *)(param_2 + 0xe88) < 1) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      bVar8 = false;
      plVar13 = (longlong *)FUN_140860830(lVar3 + 0x118,DAT_146aedad0,0);
      fVar23 = *(float *)(lVar3 + 0x28);
      puVar1 = (uint *)(lVar3 + 0x10);
      fStack_134 = 1.4013e-45;
      local_138 = 0.0;
      fStack_124 = 0.0;
      fStack_120 = 0.0;
      if (fVar23 != 0.0) {
        puVar19 = *(uint **)(lVar3 + 0x20);
        if (*(uint **)(lVar3 + 0x20) == (uint *)0x0) {
          puVar19 = puVar1;
        }
        uVar18 = *puVar19;
        fStack_120 = 0.0;
        local_138 = 0.0;
        while (uVar18 == 0) {
          lVar17 = (longlong)(int)local_138;
          fStack_120 = (float)((int)fStack_120 + 0x20);
          fVar15 = (float)((int)local_138 + 1);
          bVar4 = (int)((int)fVar23 + -1 + ((int)fVar23 + -1 >> 0x1f & 0x1fU)) >> 5 <=
                  (int)local_138;
          local_138 = fVar15;
          if (bVar4) goto LAB_1408a7024;
          uVar18 = puVar19[lVar17 + 1];
        }
        fStack_134 = (float)(-uVar18 & uVar18);
        iVar11 = 0x1f;
        if (fStack_134 != 0.0) {
          for (; (uint)fStack_134 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (fStack_134 == 0.0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        fStack_124 = (float)(((int)fStack_120 - iVar11) + 0x1f);
        if ((int)fVar23 < (int)fStack_124) {
LAB_1408a7024:
          fStack_124 = fVar23;
        }
      }
      fStack_128 = -NAN;
      fStack_104 = *(float *)(lVar3 + 0x28);
      puStack_110 = (uint *)CONCAT44(fStack_134,local_138);
      uStack_f8 = CONCAT44(uStack_11c,fStack_120);
      uStack_108 = -1 << (SUB41(fStack_104,0) & 0x1f);
      local_118._0_4_ = (undefined4)lVar3;
      uVar5 = (undefined4)local_118;
      local_118._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uVar6 = local_118._4_4_;
      uVar18 = (uint)fStack_104 & 0xffffffe0;
      iStack_100 = 0xffffffff;
      fStack_fc = fStack_124;
      uStack_d8._0_4_ = 0xffffffff;
      uStack_d8._4_4_ = fStack_124;
      local_f0 = (undefined4)local_118;
      uStack_ec = local_118._4_4_;
      fStack_e8 = local_138;
      uStack_e4 = (uint)fStack_134;
      fVar27 = fVar20;
      fVar28 = fVar21;
      fVar29 = fVar26;
      local_118 = lVar3;
      local_e0 = puVar1;
      local_d0 = uStack_f8;
      uStack_130 = puVar1;
      fVar15 = fStack_104;
      if (fStack_104 != fVar23) {
        puVar19 = *(uint **)(lVar3 + 0x20);
        if (*(uint **)(lVar3 + 0x20) == (uint *)0x0) {
          puVar19 = puVar1;
        }
        uVar16 = puVar19[(int)fStack_104 >> 5] & uStack_108;
        iVar11 = (int)fStack_104 >> 5;
        while (uVar16 == 0) {
          uVar18 = uVar18 + 0x20;
          if ((int)((int)fVar23 + -1 + ((int)fVar23 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar11)
          goto LAB_1408a70fa;
          uVar16 = puVar19[(longlong)iVar11 + 1];
          uStack_108 = 0xffffffff;
          iVar11 = iVar11 + 1;
        }
        uVar16 = -uVar16 & uVar16;
        iVar11 = 0x1f;
        if (uVar16 != 0) {
          for (; uVar16 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uVar16 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        fStack_104 = (float)((uVar18 - iVar11) + 0x1f);
        fVar15 = fStack_104;
        if ((int)fVar23 < (int)fStack_104) {
LAB_1408a70fa:
          fStack_104 = fVar23;
          fVar15 = fVar23;
        }
      }
      while (((uStack_d8._4_4_ != fVar15 || (local_e0 != puVar1)) ||
             (CONCAT44(uStack_ec,local_f0) != lVar3))) {
        fVar23 = DAT_14652d63c;
        if ((int)uStack_d8._4_4_ < (int)local_e0[6]) {
          fVar23 = uStack_d8._4_4_;
        }
        cVar10 = FMeshDescription::IsVertexOrphaned(*(undefined8 *)(param_2 + 0x28),fVar23);
        if (cVar10 == '\0') {
          lVar14 = (longlong)(int)fVar23;
          lVar17 = *plVar13;
          if (bVar8) {
            fVar23 = *(float *)(lVar17 + lVar14 * 0xc);
            if (fVar23 < fVar27) {
              fVar27 = fVar23;
            }
            fVar22 = *(float *)(lVar17 + 4 + lVar14 * 0xc);
            if (fVar22 < fVar28) {
              fVar28 = fVar22;
            }
            fVar24 = *(float *)(lVar17 + 8 + lVar14 * 0xc);
            if (fVar24 < fVar29) {
              fVar29 = fVar24;
            }
            if (fVar20 < fVar23) {
              fVar20 = fVar23;
            }
            if (fVar21 < fVar22) {
              fVar21 = fVar22;
            }
            if (fVar26 < fVar24) {
              fVar26 = fVar24;
            }
          }
          else {
            uVar2 = *(undefined8 *)(lVar17 + lVar14 * 0xc);
            fVar20 = (float)uVar2;
            bVar8 = true;
            fVar26 = *(float *)(lVar17 + 8 + lVar14 * 0xc);
            fStack_128 = (float)((ulonglong)uVar2 >> 0x20);
            fVar21 = fStack_128;
            fVar27 = fVar20;
            fVar28 = fStack_128;
            fVar29 = fVar26;
            uStack_130._4_4_ = fVar20;
            fStack_124 = fVar26;
          }
        }
        uStack_d8._0_4_ = (uint)uStack_d8 & ~uStack_e4;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&fStack_e8);
        uStack_130 = (uint *)CONCAT44(uStack_130._4_4_,(float)uStack_130);
      }
      fVar23 = *(float *)(lVar3 + 0x28);
      uStack_130._4_4_ = (fVar20 - fVar27) * 0.5;
      local_118 = 0x100000000;
      fStack_128 = (fVar21 - fVar28) * 0.5;
      fStack_124 = (fVar26 - fVar29) * 0.5;
      fVar27 = fVar27 + uStack_130._4_4_;
      fStack_104 = 0.0;
      iStack_100 = 0;
      fVar28 = fVar28 + fStack_128;
      fVar29 = fVar29 + fStack_124;
      fVar26 = 0.0;
      fStack_120 = 0.0;
      if (fVar23 != 0.0) {
        puVar19 = *(uint **)(lVar3 + 0x20);
        if (*(uint **)(lVar3 + 0x20) == (uint *)0x0) {
          puVar19 = puVar1;
        }
        uVar18 = *puVar19;
        iStack_100 = 0;
        iVar11 = 0;
        while (uVar18 == 0) {
          iStack_100 = iStack_100 + 0x20;
          local_118._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
          local_118 = CONCAT44(local_118._4_4_,iVar11 + 1);
          if ((int)((int)fVar23 + -1 + ((int)fVar23 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar11)
          goto LAB_1408a7324;
          uVar18 = puVar19[(longlong)iVar11 + 1];
          iVar11 = iVar11 + 1;
        }
        uVar18 = -uVar18 & uVar18;
        iVar11 = 0x1f;
        if (uVar18 != 0) {
          for (; uVar18 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        local_118 = CONCAT44(uVar18,(undefined4)local_118);
        if (uVar18 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        fStack_104 = (float)((iStack_100 - iVar11) + 0x1f);
        if ((int)fVar23 < (int)fStack_104) {
LAB_1408a7324:
          fStack_104 = fVar23;
        }
      }
      fVar20 = *(float *)(lVar3 + 0x28);
      uStack_d8 = CONCAT44(fStack_104,0xffffffff);
      local_d0 = CONCAT44(fStack_fc,iStack_100);
      uStack_108 = -1 << (SUB41(fVar20,0) & 0x1f);
      uStack_c0 = local_118;
      uVar2 = uStack_c0;
      uVar18 = (uint)fVar20 & 0xffffffe0;
      uStack_c0._0_4_ = (float)local_118;
      uStack_c0._4_4_ = (uint)((ulonglong)local_118 >> 0x20);
      local_f0 = uVar5;
      uStack_ec = uVar6;
      fStack_e8 = (float)uStack_c0;
      uStack_e4 = uStack_c0._4_4_;
      local_138 = fVar27;
      fStack_134 = fVar28;
      uStack_130._0_4_ = fVar29;
      puStack_110 = puVar1;
      fStack_104 = fVar20;
      local_e0 = puVar1;
      local_c8 = lVar3;
      uStack_c0 = uVar2;
      puStack_b8 = puVar1;
      uStack_b0 = uStack_d8;
      uStack_a8 = local_d0;
      if (fVar20 != fVar23) {
        puVar19 = *(uint **)(lVar3 + 0x20);
        if (*(uint **)(lVar3 + 0x20) == (uint *)0x0) {
          puVar19 = puVar1;
        }
        uVar16 = puVar19[(int)fVar20 >> 5] & uStack_108;
        iVar11 = (int)fVar20 >> 5;
        while (uVar16 == 0) {
          uVar18 = uVar18 + 0x20;
          if ((int)((int)fVar23 + -1 + ((int)fVar23 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar11)
          goto LAB_1408a73f8;
          uVar16 = puVar19[(longlong)iVar11 + 1];
          uStack_108 = 0xffffffff;
          iVar11 = iVar11 + 1;
        }
        uVar16 = -uVar16 & uVar16;
        iVar11 = 0x1f;
        if (uVar16 != 0) {
          for (; uVar16 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uVar16 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        fStack_104 = (float)((uVar18 - iVar11) + 0x1f);
        fVar20 = fStack_104;
        if ((int)fVar23 < (int)fStack_104) {
LAB_1408a73f8:
          fStack_104 = fVar23;
          fVar20 = fVar23;
        }
      }
      while (((uStack_d8._4_4_ != fVar20 || (local_e0 != puVar1)) ||
             (fVar21 = local_138, fVar23 = fStack_134, fVar15 = (float)uStack_130,
             fVar22 = uStack_130._4_4_, fVar24 = fStack_128, fVar25 = fStack_124, fVar9 = fVar26,
             CONCAT44(uStack_ec,local_f0) != lVar3))) {
        fVar21 = DAT_14652d63c;
        if ((int)uStack_d8._4_4_ < (int)local_e0[6]) {
          fVar21 = uStack_d8._4_4_;
        }
        cVar10 = FMeshDescription::IsVertexOrphaned(*(undefined8 *)(param_2 + 0x28),fVar21);
        if (cVar10 == '\0') {
          lVar14 = (longlong)(int)fVar21;
          lVar17 = *plVar13;
          fVar23 = *(float *)(lVar17 + lVar14 * 0xc) - fVar27;
          fVar15 = *(float *)(lVar17 + 4 + lVar14 * 0xc) - fVar28;
          fVar21 = *(float *)(lVar17 + 8 + lVar14 * 0xc) - fVar29;
          fVar21 = SQRT(fVar15 * fVar15 + fVar23 * fVar23 + fVar21 * fVar21);
          if (fVar26 <= fVar21) {
            fVar26 = fVar21;
          }
        }
        uStack_d8 = CONCAT44(uStack_d8._4_4_,(uint)uStack_d8 & ~uStack_e4);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&fStack_e8);
      }
    }
    else {
      pfVar12 = (float *)FUN_140877050(param_2,&local_138);
      fVar26 = pfVar12[6];
      fVar21 = *pfVar12;
      fVar23 = pfVar12[1];
      fVar15 = pfVar12[2];
      fVar22 = pfVar12[3];
      fVar24 = (float)*(undefined8 *)(pfVar12 + 4);
      fVar25 = (float)((ulonglong)*(undefined8 *)(pfVar12 + 4) >> 0x20);
      fVar9 = fStack_120;
    }
    fStack_120 = fVar9;
    *(float *)(param_1 + 0xc0) = fVar21;
    *(float *)(param_1 + 0xc4) = fVar23;
    *(float *)(param_1 + 200) = fVar15;
    *(float *)(param_1 + 0xcc) = fVar22;
    *(ulonglong *)(param_1 + 0xd0) = CONCAT44(fVar25,fVar24);
    *(float *)(param_1 + 0xd8) = fVar26;
  }
  uVar5 = *(undefined4 *)(param_1 + 0xc4);
  uVar6 = *(undefined4 *)(param_1 + 200);
  uVar7 = *(undefined4 *)(param_1 + 0xcc);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38);
  *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(lVar3 + 0x44) = uVar5;
  *(undefined4 *)(lVar3 + 0x48) = uVar6;
  *(undefined4 *)(lVar3 + 0x4c) = uVar7;
  *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined4 *)(lVar3 + 0x58) = *(undefined4 *)(param_1 + 0xd8);
  FUN_14281a350(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 1408a7560 FUN_1408a7560 body=861 status=ok
// SIG undefined FUN_1408a7560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408a7560(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong local_138;
  int local_130;
  float local_12c;
  float local_128;
  float fStack_124;
  longlong local_120;
  uint local_118;
  uint local_114;
  undefined **local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  byte local_ec;
  undefined4 local_e8;
  undefined ***local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  int local_50;
  undefined8 local_4c;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  
  lVar6 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(lVar6 + 0xa0) == 0) {
    FUN_14281a670(lVar6);
    lVar6 = *(longlong *)(param_1 + 0x28);
  }
  plVar9 = *(longlong **)(lVar6 + 0xa0);
  if (plVar9 != (longlong *)0x0) {
    if (0 < (int)plVar9[0xe] + (int)plVar9[0xc] + (int)plVar9[8] + (int)plVar9[10] + (int)plVar9[6])
    {
      FUN_1426ccc50(plVar9);
    }
    (**(code **)(*plVar9 + 0x290))(plVar9);
    UStaticMesh::GetBounds(*(undefined8 *)(param_1 + 0x28),&local_138);
    local_e0 = &local_108;
    iVar8 = (int)plVar9[8];
    local_ec = local_ec | 1;
    local_100 = 0;
    local_68 = _DAT_1464aa810;
    uStack_60 = _DAT_1464aa818;
    local_4c = DAT_1468b5da0;
    local_58 = local_138;
    local_40 = local_12c * 2.0;
    local_108 = &PTR_FUN_1440fbd78;
    local_44 = DAT_1468b5da8;
    local_3c = local_128 * 2.0;
    local_50 = local_130;
    local_38 = fStack_124 * 2.0;
    local_f8 = 0;
    local_f0 = 1;
    local_e8 = 6;
    local_d8 = 3;
    local_d0 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    *(int *)(plVar9 + 8) = iVar8 + 1;
    if (*(int *)((longlong)plVar9 + 0x44) < iVar8 + 1) {
      FUN_140822570(plVar9 + 7,iVar8);
    }
    FUN_14086fd30((longlong)iVar8 * 0xe0 + plVar9[7],&local_108);
    local_108 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (local_b8 != 0) {
      FMemory::Free();
    }
    uVar3 = FUN_142a232e0();
    FObjectIterator::FObjectIterator(&local_138,uVar3,0,0,0);
    plVar9 = (longlong *)CONCAT44(fStack_124,local_128);
    iVar8 = local_130;
    if (plVar9 != (longlong *)0x0) {
      do {
        if ((plVar9 == (longlong *)0x0) || (lVar6 = *plVar9, lVar6 == 0)) {
LAB_1408a7783:
          lVar6 = 0;
        }
        else {
          lVar4 = FUN_142a232e0();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_1408a7783;
        }
        if ((*(longlong *)(lVar6 + 0x728) == *(longlong *)(param_1 + 0x28)) &&
           ((*(byte *)(lVar6 + 0xb8) & 4) != 0)) {
          FUN_14234b040(lVar6);
        }
LAB_1408a77b0:
        do {
          do {
            iVar8 = iVar8 + 1;
            if (*(int *)(local_138 + 0x24) <= iVar8) {
              return;
            }
            while( true ) {
              uVar7 = iVar8 >> 0x1f & 0xffff;
              uVar2 = iVar8 + uVar7;
              lVar5 = (longlong)(int)((uVar2 & 0xffff) - uVar7);
              lVar6 = *(longlong *)
                       (*(longlong *)(local_138 + 0x10) + (longlong)((int)uVar2 >> 0x10) * 8);
              lVar4 = *(longlong *)(lVar6 + lVar5 * 0x18);
              plVar9 = (longlong *)(lVar6 + lVar5 * 0x18);
              if (lVar4 != 0) break;
              iVar8 = iVar8 + 1;
              if (*(int *)(local_138 + 0x24) <= iVar8) {
                return;
              }
            }
          } while ((*(uint *)(lVar4 + 8) & local_118) != 0);
          lVar6 = UObject::GetPrivateStaticClass();
          if (local_120 != lVar6) {
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(local_120 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(local_120 + 0x90) * 8) != local_120 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) goto LAB_1408a77b0;
          }
          uVar2 = *(uint *)(lVar4 + 0xc);
          if ((int)uVar2 < (int)DAT_1469e91c4) {
            uVar7 = uVar2 & 0xffff;
            if ((int)uVar2 < 0) {
              uVar2 = uVar2 + 0xffff;
              uVar7 = uVar7 - 0x10000;
            }
            lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                    (longlong)(int)uVar7 * 0x18;
          }
          else {
            lVar6 = 0;
          }
        } while ((*(uint *)(lVar6 + 8) & local_114) != 0);
      } while( true );
    }
  }
  return;
}



// FUNCTION 1408a78c0 FUN_1408a78c0 body=2057 status=ok
// SIG undefined FUN_1408a78c0(void)

void FUN_1408a78c0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  float fVar20;
  int *piVar21;
  uint uVar22;
  uint *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  longlong *local_148;
  ulonglong uStack_140;
  undefined8 uStack_138;
  float fStack_130;
  float fStack_12c;
  undefined8 uStack_128;
  longlong *local_118;
  undefined8 uStack_110;
  uint *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d0;
  longlong local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  ulonglong uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  
  if ((*(longlong *)(param_1 + 0xf70) != 0) && (*(char *)(param_1 + 0xf68) != '\0')) {
    if ((*(int *)(param_1 + 0x1028) == *(int *)(param_1 + 0x1054)) &&
       (*(int *)(param_1 + 0xfd8) == *(int *)(param_1 + 0x1004))) {
      return;
    }
    iVar16 = *(int *)(param_1 + 0xfd8);
    iVar18 = *(int *)(param_1 + 0x1004);
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x28) + 0xb0);
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x28) + 0xdc);
    fVar27 = (float)(**(code **)(*DAT_14685f160 + 0x70))();
    if ((float)(iVar16 - iVar18) / (float)(iVar8 - iVar9) < fVar27) {
      plVar2 = (longlong *)(param_1 + 0xfd0);
      uVar13 = *(uint *)(param_1 + 0xff8);
      puVar1 = (uint *)(param_1 + 0xfe0);
      local_178._0_4_ = 0;
      local_178._4_4_ = 1;
      uStack_168._4_4_ = 0.0;
      uStack_160 = 0;
      if (uVar13 != 0) {
        puVar23 = *(uint **)(param_1 + 0xff0);
        if (*(uint **)(param_1 + 0xff0) == (uint *)0x0) {
          puVar23 = puVar1;
        }
        uVar17 = *puVar23;
        uStack_160 = 0;
        local_178._0_4_ = 0;
        while (uVar17 == 0) {
          lVar19 = (longlong)(int)local_178;
          uStack_160 = uStack_160 + 0x20;
          iVar16 = (int)local_178 + 1;
          bVar11 = (int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_178;
          local_178._0_4_ = iVar16;
          if (bVar11) goto LAB_1408a7a7f;
          uVar17 = puVar23[lVar19 + 1];
        }
        local_178._4_4_ = uVar17 - 1 & uVar17 ^ uVar17;
        iVar16 = 0x1f;
        if (local_178._4_4_ != 0) {
          for (; local_178._4_4_ >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        if (local_178._4_4_ == 0) {
          iVar16 = 0x20;
        }
        else {
          iVar16 = 0x1f - iVar16;
        }
        uStack_168._4_4_ = (float)((uStack_160 - iVar16) + 0x1f);
        if ((int)uVar13 < (int)uStack_168._4_4_) {
LAB_1408a7a7f:
          uStack_168._4_4_ = (float)uVar13;
        }
      }
      uStack_138._4_4_ = *(uint *)(param_1 + 0xff8);
      uStack_100 = CONCAT44(uStack_168._4_4_,0xffffffff);
      local_158 = CONCAT44(uStack_15c,uStack_160);
      uStack_110._0_4_ = (int)local_178;
      uStack_110._4_4_ = local_178._4_4_;
      uStack_138._0_4_ = -1 << ((byte)uStack_138._4_4_ & 0x1f);
      uStack_170._0_4_ = (int)local_178;
      uStack_170._4_4_ = (float)local_178._4_4_;
      uVar22 = uStack_138._4_4_ & 0xffffffe0;
      uStack_160 = 0xffffffff;
      uStack_15c = (uint)uStack_168._4_4_;
      local_118 = plVar2;
      puStack_108 = puVar1;
      uStack_f8 = local_158;
      uStack_168 = puVar1;
      uVar17 = uStack_138._4_4_;
      if (uStack_138._4_4_ != uVar13) {
        puVar23 = *(uint **)(param_1 + 0xff0);
        if (*(uint **)(param_1 + 0xff0) == (uint *)0x0) {
          puVar23 = puVar1;
        }
        uVar17 = puVar23[(int)uStack_138._4_4_ >> 5] & (uint)uStack_138;
        iVar16 = (int)uStack_138._4_4_ >> 5;
        while (uVar17 == 0) {
          uVar22 = uVar22 + 0x20;
          if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar16)
          goto LAB_1408a7b53;
          uVar17 = puVar23[(longlong)iVar16 + 1];
          uStack_138._0_4_ = 0xffffffff;
          iVar16 = iVar16 + 1;
        }
        uVar17 = uVar17 - 1 & uVar17 ^ uVar17;
        iVar16 = 0x1f;
        if (uVar17 != 0) {
          for (; uVar17 >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        if (uVar17 == 0) {
          iVar16 = 0x20;
        }
        else {
          iVar16 = 0x1f - iVar16;
        }
        uStack_138._4_4_ = (uVar22 - iVar16) + 0x1f;
        uVar17 = uStack_138._4_4_;
        if ((int)uVar13 < (int)uStack_138._4_4_) {
LAB_1408a7b53:
          uStack_138._4_4_ = uVar13;
          uVar17 = uVar13;
        }
      }
      while ((uStack_15c != uVar17 || (uStack_168 != puVar1))) {
        plVar14 = (longlong *)(param_1 + 0xf80);
        iVar16 = *(int *)(*plVar2 + (longlong)(int)uStack_15c * 0xc);
        if (*(int *)(param_1 + 0xf88) != *(int *)(param_1 + 0xfb4)) {
          lVar19 = *(longlong *)(param_1 + 0xfc0);
          if (*(longlong *)(param_1 + 0xfc0) == 0) {
            lVar19 = param_1 + 0xfb8;
          }
          iVar18 = *(int *)(lVar19 + ((longlong)*(int *)(param_1 + 0xfc8) - 1U & (longlong)iVar16) *
                                     4);
          if (iVar18 != -1) {
            do {
              if (*(int *)((longlong)iVar18 * 0x20 + *plVar14) == iVar16) goto LAB_1408a7bec;
              iVar18 = *(int *)((longlong)iVar18 * 0x20 + 0x18 + *plVar14);
            } while (iVar18 != -1);
          }
        }
        iVar18 = -1;
LAB_1408a7bec:
        puVar3 = (undefined8 *)((longlong)iVar18 * 0x20 + 8 + *plVar14);
        uVar7 = *puVar3;
        uVar12 = puVar3[1];
        TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
        ::Remove(plVar14);
        local_e8 = uVar7;
        uStack_e0 = uVar12;
        FUN_14089c250(*(undefined8 *)(param_1 + 0xf70),&local_e8);
        uStack_160 = uStack_160 & ~(uint)uStack_170._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_170);
      }
      TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Reset(plVar2);
      plVar14 = (longlong *)FUN_140860830(*(longlong *)(param_1 + 0x28) + 0x118,DAT_146aedad0);
      plVar2 = (longlong *)(param_1 + 0x1020);
      fVar27 = *(float *)(param_1 + 0x1048);
      puVar1 = (uint *)(param_1 + 0x1030);
      local_178 = 0x100000000;
      uStack_168._4_4_ = 0.0;
      uStack_160 = 0;
      if (fVar27 != 0.0) {
        puVar23 = *(uint **)(param_1 + 0x1040);
        if (*(uint **)(param_1 + 0x1040) == (uint *)0x0) {
          puVar23 = puVar1;
        }
        uVar13 = *puVar23;
        uStack_160 = 0;
        iVar16 = 0;
        while (uVar13 == 0) {
          uStack_160 = uStack_160 + 0x20;
          local_178._4_4_ = (uint)(local_178 >> 0x20);
          local_178 = CONCAT44(local_178._4_4_,iVar16 + 1);
          if ((int)((int)fVar27 + -1 + ((int)fVar27 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar16)
          goto LAB_1408a7d0f;
          uVar13 = puVar23[(longlong)iVar16 + 1];
          iVar16 = iVar16 + 1;
        }
        uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
        iVar16 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        local_178 = CONCAT44(uVar13,(int)local_178);
        if (uVar13 == 0) {
          iVar16 = 0x20;
        }
        else {
          iVar16 = 0x1f - iVar16;
        }
        uStack_168._4_4_ = (float)((uStack_160 - iVar16) + 0x1f);
        if ((int)fVar27 < (int)uStack_168._4_4_) {
LAB_1408a7d0f:
          uStack_168._4_4_ = fVar27;
        }
      }
      uStack_168._0_4_ = -NAN;
      fVar20 = *(float *)(param_1 + 0x1048);
      uStack_100._0_4_ = -NAN;
      uStack_100._4_4_ = uStack_168._4_4_;
      uStack_128 = CONCAT44(uStack_15c,uStack_160);
      uStack_140 = local_178;
      uVar13 = (uint)fVar20 & 0xffffffe0;
      uStack_110 = local_178;
      if (fVar20 != fVar27) {
        puVar23 = *(uint **)(param_1 + 0x1040);
        if (*(uint **)(param_1 + 0x1040) == (uint *)0x0) {
          puVar23 = puVar1;
        }
        uVar17 = puVar23[(int)fVar20 >> 5] & -1 << (SUB41(fVar20,0) & 0x1f);
        iVar16 = (int)fVar20 >> 5;
        while (uVar17 == 0) {
          uVar13 = uVar13 + 0x20;
          if ((int)((int)fVar27 + -1 + ((int)fVar27 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar16)
          goto LAB_1408a7dcc;
          uVar17 = puVar23[(longlong)iVar16 + 1];
          iVar16 = iVar16 + 1;
        }
        uVar17 = uVar17 - 1 & uVar17 ^ uVar17;
        iVar16 = 0x1f;
        if (uVar17 != 0) {
          for (; uVar17 >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        if (uVar17 == 0) {
          iVar16 = 0x20;
        }
        else {
          iVar16 = 0x1f - iVar16;
        }
        fVar20 = (float)((uVar13 - iVar16) + 0x1f);
        if ((int)fVar27 < (int)fVar20) {
LAB_1408a7dcc:
          fVar20 = fVar27;
        }
      }
      uVar26 = (ulonglong)_tls_index;
      local_148 = plVar2;
      uStack_138 = puVar1;
      local_118 = plVar2;
      puStack_108 = puVar1;
      uStack_f8 = uStack_128;
      uStack_170 = puVar1;
      fStack_130 = (float)uStack_100;
      fStack_12c = uStack_100._4_4_;
      while (((fVar27 = DAT_1468b5d98, fVar30 = DAT_1468b5d94, fVar28 = DAT_1468b5d90,
              uStack_100._4_4_ != fVar20 || (puStack_108 != puVar1)) || (local_118 != plVar2))) {
        bVar11 = false;
        uVar10 = *(undefined4 *)(*local_118 + (longlong)(int)uStack_100._4_4_ * 0xc);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar26 * 8) + 0x38) <
            DAT_1468605e8) {
          _Init_thread_header(&DAT_1468605e8);
          if (DAT_1468605e8 == -1) {
            atexit((_func_5014 *)&LAB_143e43bc0);
            _Init_thread_footer(&DAT_1468605e8);
          }
        }
        FMeshDescription::GetPolygonPerimeterVertices
                  (*(undefined8 *)(param_1 + 0x28),uVar10,&DAT_1468605d8);
        uVar24 = 0;
        uVar25 = (ulonglong)
                 ((longlong)(DAT_1468605d8 + DAT_1468605e0) + (3 - (longlong)DAT_1468605d8)) >> 2;
        if (DAT_1468605d8 + DAT_1468605e0 < DAT_1468605d8) {
          uVar25 = uVar24;
        }
        fVar31 = fVar28;
        fVar32 = fVar30;
        fVar29 = fVar27;
        if (uVar25 != 0) {
          lVar19 = *plVar14;
          piVar21 = DAT_1468605d8;
          do {
            lVar15 = (longlong)*piVar21;
            if (bVar11) {
              fVar4 = *(float *)(lVar19 + lVar15 * 0xc);
              if (fVar4 < fVar31) {
                fVar31 = fVar4;
              }
              fVar5 = *(float *)(lVar19 + 4 + lVar15 * 0xc);
              if (fVar5 < fVar32) {
                fVar32 = fVar5;
              }
              fVar6 = *(float *)(lVar19 + 8 + lVar15 * 0xc);
              if (fVar6 < fVar27) {
                fVar27 = fVar6;
              }
              if (fVar28 < fVar4) {
                fVar28 = fVar4;
              }
              if (fVar30 < fVar5) {
                fVar30 = fVar5;
              }
              if (fVar29 < fVar6) {
                fVar29 = fVar6;
              }
            }
            else {
              uVar7 = *(undefined8 *)(lVar19 + lVar15 * 0xc);
              bVar11 = true;
              fVar27 = *(float *)(lVar19 + 8 + lVar15 * 0xc);
              fVar28 = (float)uVar7;
              uStack_168._0_4_ = (float)((ulonglong)uVar7 >> 0x20);
              fVar30 = (float)uStack_168;
              fVar31 = fVar28;
              fVar32 = (float)uStack_168;
              fVar29 = fVar27;
              uStack_170._4_4_ = fVar28;
              uStack_168._4_4_ = fVar27;
            }
            piVar21 = piVar21 + 1;
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar25);
        }
        lVar19 = *(longlong *)(param_1 + 0xf70);
        local_a8 = (fVar28 - fVar31) * 0.5;
        local_d0 = (fVar29 - fVar27) * 0.5;
        fStack_a4 = (fVar30 - fVar32) * 0.5;
        fStack_12c = 0.0;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,local_d0 + fVar27);
        uStack_140 = (ulonglong)(uint)(local_d0 + fVar27);
        local_148 = (longlong *)CONCAT44(fStack_a4 + fVar32,local_a8 + fVar31);
        uStack_138 = (uint *)CONCAT44(fStack_a4,local_a8);
        uStack_9c = 0;
        local_c8 = param_1;
        local_c0 = uVar10;
        local_b8 = local_148;
        uStack_b0 = uStack_140;
        fStack_a0 = local_d0;
        fStack_130 = local_d0;
        FUN_140873a00(lVar19,&local_c8,lVar19,lVar19 + 400);
        uStack_100._0_4_ = (float)((uint)(float)uStack_100 & ~uStack_110._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_110);
      }
      TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Reset(plVar2);
      return;
    }
  }
  FUN_1408985f0(param_1);
  return;
}



// FUNCTION 1408a80d0 FUN_1408a80d0 body=3688 status=ok
// SIG undefined FUN_1408a80d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408a80d0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  void *pvVar14;
  int iVar15;
  undefined4 *puVar16;
  int *piVar17;
  longlong *plVar18;
  int *piVar19;
  int *piVar20;
  longlong lVar21;
  int *piVar22;
  undefined4 *puVar23;
  longlong *plVar24;
  int iVar25;
  int *piVar26;
  longlong lVar27;
  ulonglong uVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  undefined4 *puVar32;
  ulonglong uVar33;
  int iVar34;
  ulonglong uVar35;
  int *piVar36;
  ulonglong uVar37;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  int *local_c8;
  longlong local_c0;
  longlong local_b8;
  int *local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  pvVar14 = ThreadLocalStoragePointer;
  *param_3 = DAT_14652d63c;
  lVar3 = *(longlong *)((longlong)pvVar14 + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146860320) &&
     (_Init_thread_header(&DAT_146860320), DAT_146860320 == -1)) {
    DAT_146860310 = (int *)0x0;
    _DAT_146860318 = 0;
    atexit((_func_5014 *)&LAB_143e42370);
    _Init_thread_footer(&DAT_146860320);
  }
  lVar31 = _DAT_146860318;
  uVar12 = DAT_14686031c;
  _DAT_146860318 = (ulonglong)DAT_14686031c << 0x20;
  iVar30 = 0;
  if ((lVar31 < 0) && (iVar30 = 0, uVar12 != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146860310,0);
    iVar30 = DAT_146860318;
  }
  puVar23 = (undefined4 *)*param_2;
  puVar16 = puVar23 + (int)param_2[1];
  piVar26 = DAT_146860310;
  for (; puVar23 != puVar16; puVar23 = puVar23 + 1) {
    uVar37 = 0;
    uVar2 = *puVar23;
    if ((*(int *)(lVar3 + 0x38) < DAT_146860338) &&
       (_Init_thread_header(&DAT_146860338), DAT_146860338 == -1)) {
      DAT_146860328 = (int *)0x0;
      _DAT_146860330 = 0;
      atexit((_func_5014 *)&LAB_143e428e0);
      _Init_thread_footer(&DAT_146860338);
    }
    UEditableMesh::GetVertexConnectedPolygons(param_1,uVar2,&DAT_146860328);
    uVar28 = (longlong)DAT_146860330 & 0x3fffffffffffffff;
    if (DAT_146860328 + DAT_146860330 < DAT_146860328) {
      uVar28 = uVar37;
    }
    piVar26 = DAT_146860310;
    piVar36 = DAT_146860328;
    iVar30 = DAT_146860318;
    if (uVar28 != 0) {
      do {
        iVar34 = *piVar36;
        for (piVar22 = piVar26; piVar22 != piVar26 + iVar30; piVar22 = piVar22 + 1) {
          if (*piVar22 == iVar34) {
            if ((int)((longlong)piVar22 - (longlong)piVar26 >> 2) != -1) goto LAB_1408a83e6;
            break;
          }
        }
        _DAT_146860318 = CONCAT44(DAT_14686031c,iVar30 + 1);
        if ((int)DAT_14686031c < iVar30 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146860310,iVar30);
          piVar26 = DAT_146860310;
        }
        piVar26[iVar30] = iVar34;
        piVar26 = DAT_146860310;
        iVar30 = DAT_146860318;
LAB_1408a83e6:
        piVar36 = piVar36 + 1;
        uVar37 = uVar37 + 1;
      } while (uVar37 != uVar28);
    }
  }
  bVar5 = false;
  piVar36 = piVar26 + iVar30;
  if (piVar26 != piVar36) {
    do {
      iVar30 = *piVar26;
      if ((*(int *)(lVar3 + 0x38) < DAT_146860350) &&
         (_Init_thread_header(&DAT_146860350), DAT_146860350 == -1)) {
        DAT_146860340 = (int *)0x0;
        _DAT_146860348 = 0;
        atexit((_func_5014 *)&LAB_143e43e30);
        _Init_thread_footer(&DAT_146860350);
      }
      FMeshDescription::GetPolygonPerimeterVertices(*(undefined8 *)(param_1 + 0x28),iVar30);
      iVar30 = -1;
      bVar6 = true;
      iVar34 = -1;
      piVar19 = (int *)*param_2;
      piVar22 = piVar19 + (int)param_2[1];
      if (piVar19 != piVar22) {
        piVar20 = piVar19;
        do {
          if (*piVar20 == DAT_146860340[(longlong)DAT_146860348 + -1]) {
            bVar7 = true;
            goto LAB_1408a8285;
          }
          piVar20 = piVar20 + 1;
        } while (piVar20 != piVar22);
      }
      bVar7 = false;
LAB_1408a8285:
      iVar29 = 0;
      piVar20 = DAT_146860340;
      bVar8 = bVar7;
      if (DAT_146860348 < 1) {
LAB_1408a8455:
        if (bVar7) {
          iVar34 = 0;
          iVar30 = DAT_146860348;
        }
      }
      else {
        do {
          if (piVar19 != piVar22) {
            piVar17 = piVar19;
            do {
              if (*piVar17 == *piVar20) {
                bVar7 = true;
                goto LAB_1408a82b3;
              }
              piVar17 = piVar17 + 1;
            } while (piVar17 != piVar22);
          }
          bVar7 = false;
LAB_1408a82b3:
          iVar25 = iVar34;
          iVar15 = iVar30;
          if (bVar8) {
            iVar9 = iVar34;
            iVar10 = iVar29;
            iVar11 = iVar30;
            if (!bVar7) goto joined_r0x0001408a842c;
          }
          else {
            iVar9 = iVar29;
            iVar10 = iVar30;
            iVar11 = iVar34;
            if (bVar7) {
joined_r0x0001408a842c:
              iVar25 = iVar9;
              iVar15 = iVar10;
              if (iVar11 != -1) {
                bVar6 = false;
                iVar25 = iVar34;
                iVar15 = iVar30;
              }
            }
          }
          iVar30 = iVar15;
          iVar34 = iVar25;
          iVar29 = iVar29 + 1;
          piVar20 = piVar20 + 1;
          bVar8 = bVar7;
        } while (iVar29 < DAT_146860348);
        if ((iVar34 == -1) && (iVar30 == -1)) goto LAB_1408a8455;
      }
      iVar29 = 0;
      if (iVar30 < iVar34) {
        iVar29 = DAT_146860348;
      }
      if (2 < (DAT_146860348 - ((iVar29 - iVar34) + iVar30)) + 1) {
        bVar5 = true;
      }
      if (!bVar6) {
        return;
      }
      piVar26 = piVar26 + 1;
    } while (piVar26 != piVar36);
    if (bVar5) {
      plVar18 = (longlong *)FUN_140860830(*(longlong *)(param_1 + 0x28) + 0x118,DAT_146aedad0,0);
      if ((*(int *)(lVar3 + 0x38) < DAT_146860368) &&
         (_Init_thread_header(&DAT_146860368), DAT_146860368 == -1)) {
        DAT_146860358 = (int *)0x0;
        _DAT_146860360 = 0;
        atexit((_func_5014 *)&LAB_143e438d0);
        _Init_thread_footer(&DAT_146860368);
      }
      if ((*(int *)(lVar3 + 0x38) < DAT_146860380) &&
         (_Init_thread_header(&DAT_146860380), DAT_146860380 == -1)) {
        DAT_146860370 = (longlong *)0x0;
        _DAT_146860378 = 0;
        atexit(FUN_143e44a00);
        _Init_thread_footer(&DAT_146860380);
      }
      uVar37 = _DAT_146860378;
      iVar30 = DAT_146860378;
      lVar31 = (longlong)DAT_146860378;
      if (DAT_146860378 < 1) {
        iVar34 = 1 - DAT_146860378;
        iVar30 = DAT_146860378 + iVar34;
        _DAT_146860378 = CONCAT44(DAT_14686037c,iVar30);
        if (DAT_14686037c < iVar30) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&DAT_146860370,uVar37 & 0xffffffff);
          iVar30 = (int)_DAT_146860378;
        }
        plVar24 = DAT_146860370 + lVar31 * 3;
        if (iVar34 != 0) {
          do {
            *plVar24 = 0;
            plVar24[1] = 0;
            *(undefined4 *)(plVar24 + 2) = DAT_14652d63c;
            iVar34 = iVar34 + -1;
            plVar24 = plVar24 + 3;
          } while (iVar34 != 0);
          iVar30 = (int)_DAT_146860378;
        }
      }
      else if ((1 < DAT_146860378) &&
              (iVar29 = DAT_146860378 + -1, iVar34 = iVar29, plVar24 = DAT_146860370, iVar29 != 0))
      {
        do {
          if (plVar24[3] != 0) {
            FMemory::Free();
          }
          iVar34 = iVar34 + -1;
          plVar24 = plVar24 + 3;
        } while (iVar34 != 0);
        iVar34 = (DAT_146860378 - iVar29) + -1;
        if (iVar34 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (DAT_146860370 + 3,DAT_146860370 + (longlong)iVar30 * 3,(longlong)iVar34 * 0x18)
          ;
        }
        _DAT_146860378 = CONCAT44(DAT_14686037c,DAT_146860378 - iVar29);
        TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(&DAT_146860370);
        iVar30 = (int)_DAT_146860378;
      }
      local_a8 = 2;
      iVar34 = (int)DAT_146860370[(longlong)(iVar30 + -1) * 3 + 1];
      plVar24 = DAT_146860370 + (longlong)(iVar30 + -1) * 3;
      local_68 = 0;
      lVar31 = (longlong)*(int *)(*param_2 + -4 + (longlong)(int)param_2[1] * 4);
      uStack_80 = *(undefined4 *)(*plVar18 + 8 + lVar31 * 0xc);
      local_88 = *(undefined8 *)(*plVar18 + lVar31 * 0xc);
      *(int *)(plVar24 + 1) = iVar34 + 1;
      if (*(int *)((longlong)plVar24 + 0xc) < iVar34 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar24,iVar34);
      }
      uVar13 = DAT_146aedad0;
      lVar31 = *plVar24;
      lVar21 = (longlong)iVar34 * 0x60;
      puVar1 = (undefined8 *)(lVar21 + 0x10 + lVar31);
      *puVar1 = CONCAT71(uStack_a7,local_a8);
      puVar1[1] = uStack_a0;
      *(undefined8 *)(lVar21 + lVar31) = uVar13;
      puVar1 = (undefined8 *)(lVar21 + 0x20 + lVar31);
      *puVar1 = 0;
      puVar1[1] = 0x3f80000000000000;
      *(undefined4 *)(lVar21 + 8 + lVar31) = 0;
      puVar1 = (undefined8 *)(lVar21 + 0x30 + lVar31);
      *puVar1 = local_88;
      puVar1[1] = CONCAT44(uStack_7c,uStack_80);
      puVar23 = (undefined4 *)(lVar21 + 0x40 + lVar31);
      *puVar23 = local_78;
      puVar23[1] = uStack_74;
      puVar23[2] = uStack_70;
      puVar23[3] = uStack_6c;
      puVar23 = (undefined4 *)(lVar21 + 0x50 + lVar31);
      *puVar23 = (undefined4)local_68;
      puVar23[1] = local_68._4_4_;
      puVar23[2] = uStack_60;
      puVar23[3] = uStack_5c;
      FUN_14087b120(param_1,&DAT_146860370,&DAT_146860358);
      if ((*(int *)(lVar3 + 0x38) < DAT_146860398) &&
         (_Init_thread_header(&DAT_146860398), DAT_146860398 == -1)) {
        _DAT_146860388 = 0;
        _DAT_146860390 = 0;
        atexit((_func_5014 *)&LAB_143e43f50);
        _Init_thread_footer(&DAT_146860398);
      }
      TArray<FPolygonToCreate,FDefaultAllocator>::Reset(&DAT_146860388,_DAT_146860318 & 0xffffffff);
      if ((*(int *)(lVar3 + 0x38) < DAT_1468603b0) &&
         (_Init_thread_header(&DAT_1468603b0), DAT_1468603b0 == -1)) {
        DAT_1468603a0 = 0;
        _DAT_1468603a8 = 0;
        atexit(FUN_143e42510);
        _Init_thread_footer(&DAT_1468603b0);
      }
      if ((longlong)_DAT_1468603a8 < 0) {
        iVar30 = DAT_1468603ac;
        if (DAT_1468603a8 != 0) {
          plVar18 = (longlong *)(DAT_1468603a0 + 8);
          iVar30 = DAT_1468603a8;
          do {
            if (*plVar18 != 0) {
              FMemory::Free();
            }
            plVar18 = plVar18 + 3;
            iVar30 = iVar30 + -1;
          } while (iVar30 != 0);
          iVar30 = DAT_1468603ac;
        }
        _DAT_1468603a8 = _DAT_1468603a8 & 0xffffffff00000000;
        if (iVar30 != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo(&DAT_1468603a0,0);
        }
      }
      else {
        if (DAT_1468603a8 != 0) {
          plVar18 = (longlong *)(DAT_1468603a0 + 8);
          iVar30 = DAT_1468603a8;
          do {
            if (*plVar18 != 0) {
              FMemory::Free();
            }
            plVar18 = plVar18 + 3;
            iVar30 = iVar30 + -1;
          } while (iVar30 != 0);
        }
        _DAT_1468603a8 = _DAT_1468603a8 & 0xffffffff00000000;
      }
      local_c8 = DAT_146860310;
      local_b0 = DAT_146860310 + DAT_146860318;
      if (DAT_146860310 != local_b0) {
        do {
          iVar29 = 0;
          iVar30 = *local_c8;
          lVar31 = (longlong)iVar30 * 0x38;
          iVar34 = *(int *)(lVar31 + 8 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8));
          if ((*(int *)(lVar3 + 0x38) < DAT_1468603c8) &&
             (_Init_thread_header(&DAT_1468603c8), DAT_1468603c8 == -1)) {
            DAT_1468603b8 = (int *)0x0;
            _DAT_1468603c0 = 0;
            atexit((_func_5014 *)&LAB_143e43e50);
            _Init_thread_footer(&DAT_1468603c8);
          }
          if ((*(int *)(lVar3 + 0x38) < DAT_1468603e0) &&
             (_Init_thread_header(&DAT_1468603e0), DAT_1468603e0 == -1)) {
            DAT_1468603d0 = 0;
            _DAT_1468603d8 = 0;
            atexit((_func_5014 *)&LAB_143e43c00);
            _Init_thread_footer(&DAT_1468603e0);
          }
          FMeshDescription::GetPolygonPerimeterVertices
                    (*(undefined8 *)(param_1 + 0x28),iVar30,&DAT_1468603b8);
          UEditableMesh::GetPolygonPerimeterEdges(param_1,iVar30,&DAT_1468603d0);
          uVar37 = _DAT_146860390;
          piVar36 = (int *)*param_2;
          iVar30 = -1;
          iVar25 = -1;
          local_b8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8);
          piVar26 = piVar36 + (int)param_2[1];
          if (piVar36 != piVar26) {
            piVar22 = piVar36;
            do {
              if (*piVar22 == DAT_1468603b8[(longlong)DAT_1468603c0 + -1]) {
                bVar5 = true;
                goto LAB_1408a89c4;
              }
              piVar22 = piVar22 + 1;
            } while (piVar22 != piVar26);
          }
          bVar5 = false;
LAB_1408a89c4:
          piVar22 = DAT_1468603b8;
          bVar6 = bVar5;
          if (DAT_1468603c0 < 1) {
LAB_1408a8a2f:
            if (bVar5) {
              iVar30 = 0;
              iVar25 = DAT_1468603c0;
            }
          }
          else {
            do {
              if (piVar36 != piVar26) {
                piVar19 = piVar36;
                do {
                  if (*piVar19 == *piVar22) {
                    bVar5 = true;
                    goto LAB_1408a89ef;
                  }
                  piVar19 = piVar19 + 1;
                } while (piVar19 != piVar26);
              }
              bVar5 = false;
LAB_1408a89ef:
              if (bVar6) {
                if ((!bVar5) && (iVar25 == -1)) {
                  iVar25 = iVar29;
                }
              }
              else if ((bVar5) && (iVar30 == -1)) {
                iVar30 = iVar29;
              }
              iVar29 = iVar29 + 1;
              piVar22 = piVar22 + 1;
              bVar6 = bVar5;
            } while (iVar29 < DAT_1468603c0);
            if ((iVar30 == -1) && (iVar25 == -1)) goto LAB_1408a8a2f;
          }
          iVar29 = 0;
          if (iVar25 < iVar30) {
            iVar29 = DAT_1468603c0;
          }
          if (2 < (DAT_1468603c0 - ((iVar29 - iVar30) + iVar25)) + 1) {
            lVar21 = (longlong)DAT_146860390;
            iVar29 = DAT_146860390 + 1;
            _DAT_146860390 = CONCAT44(DAT_146860394,iVar29);
            if (DAT_146860394 < iVar29) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(&DAT_146860388,uVar37 & 0xffffffff);
            }
            puVar23 = (undefined4 *)(lVar21 * 0x30 + _DAT_146860388);
            *puVar23 = DAT_14652d648;
            *(undefined8 *)(puVar23 + 2) = 0;
            *(undefined8 *)(puVar23 + 4) = 0;
            *(undefined8 *)(puVar23 + 6) = 0;
            *(undefined8 *)(puVar23 + 8) = 0;
            puVar23[10] = DAT_14652d64c;
            *(undefined1 *)(puVar23 + 0xb) = 0;
            puVar23 = (undefined4 *)((longlong)(DAT_146860390 + -1) * 0x30 + _DAT_146860388);
            bVar5 = iVar25 < iVar30;
            lVar21 = 0;
            *puVar23 = *(undefined4 *)
                        (lVar31 + 0x30 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa8));
            if (0 < iVar34) {
              local_c0 = (longlong)iVar30;
              do {
                if (bVar5) {
                  if (lVar21 == iVar25) {
                    bVar5 = false;
                    goto LAB_1408a8b19;
                  }
                }
                else {
LAB_1408a8b19:
                  iVar30 = puVar23[4];
                  lVar27 = (longlong)iVar30;
                  puVar23[4] = iVar30 + 1;
                  if ((int)puVar23[5] < iVar30 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeGrow(puVar23 + 2,iVar30);
                  }
                  lVar4 = *(longlong *)(puVar23 + 2);
                  *(undefined4 *)(lVar4 + lVar27 * 0x18) = DAT_14652d640;
                  *(undefined4 *)(lVar4 + 4 + lVar27 * 0x18) = DAT_14652d63c;
                  *(undefined8 *)(lVar4 + 8 + lVar27 * 0x18) = 0;
                  *(undefined8 *)(lVar4 + 0x10 + lVar27 * 0x18) = 0;
                  iVar30 = puVar23[4];
                  lVar27 = *(longlong *)(puVar23 + 2);
                  if (lVar21 == local_c0) {
                    bVar5 = true;
                    iVar29 = *DAT_146860358;
                  }
                  else {
                    iVar29 = DAT_1468603b8[lVar21];
                  }
                  *(int *)(lVar27 + -0x14 + (longlong)iVar30 * 0x18) = iVar29;
                  local_e8 = lVar27 + -0x10 + (longlong)iVar30 * 0x18;
                  lVar27 = *(longlong *)(param_1 + 0x28);
                  local_e0 = *(undefined4 *)(*(longlong *)(lVar31 + local_b8) + lVar21 * 4);
                  FUN_14085d2c0(lVar27 + 0x380,&local_e8);
                  FUN_14085d580(lVar27 + 0x3d8,&local_e8);
                  FUN_14085cfe0(lVar27 + 0x430,&local_e8);
                  FUN_14085cd10(lVar27 + 0x488,&local_e8);
                  FUN_14085ca40(lVar27 + 0x4e0,&local_e8);
                  FUN_14085db20(lVar27 + 0x538,&local_e8);
                  FUN_14085d860(lVar27 + 0x590);
                  lVar27 = (longlong)DAT_1468603a8;
                  iVar30 = DAT_1468603a8 + 1;
                  _DAT_1468603a8 = CONCAT44(DAT_1468603ac,iVar30);
                  if (DAT_1468603ac < iVar30) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeGrow(&DAT_1468603a0);
                  }
                  lVar4 = DAT_1468603a0;
                  *(undefined4 *)(DAT_1468603a0 + lVar27 * 0x18) = 0;
                  *(undefined8 *)(lVar4 + 8 + lVar27 * 0x18) = 0;
                  *(undefined8 *)(lVar4 + 0x10 + lVar27 * 0x18) = 0;
                  lVar27 = *(longlong *)(param_1 + 0x28);
                  local_d0 = *(undefined4 *)(DAT_1468603d0 + lVar21 * 4);
                  local_d8 = DAT_1468603a0 + (longlong)(DAT_1468603a8 + -1) * 0x18 + 8;
                  FUN_14085d2c0(lVar27 + 0x5e8,&local_d8);
                  FUN_14085d580(lVar27 + 0x640,&local_d8);
                  FUN_14085cfe0(lVar27 + 0x698,&local_d8);
                  FUN_14085cd10(lVar27 + 0x6f0,&local_d8);
                  FUN_14085ca40(lVar27 + 0x748,&local_d8);
                  FUN_14085db20(lVar27 + 0x7a0,&local_d8);
                  FUN_14085d860(lVar27 + 0x7f8,&local_d8);
                }
                lVar21 = lVar21 + 1;
              } while (lVar21 < iVar34);
            }
          }
          local_c8 = local_c8 + 1;
        } while (local_c8 != local_b0);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar3 + 0x38) < DAT_1468603f8) &&
         (_Init_thread_header(&DAT_1468603f8), DAT_1468603f8 == -1)) {
        DAT_1468603e8 = (undefined4 *)0x0;
        _DAT_1468603f0 = 0;
        atexit((_func_5014 *)&LAB_143e435d0);
        _Init_thread_footer(&DAT_1468603f8);
      }
      uVar37 = 0;
      if ((*(int *)(lVar3 + 0x38) < DAT_146860410) &&
         (_Init_thread_header(&DAT_146860410), DAT_146860410 == -1)) {
        DAT_146860400 = 0;
        _DAT_146860408 = 0;
        atexit((_func_5014 *)&LAB_143e43410);
        _Init_thread_footer(&DAT_146860410);
      }
      FUN_140879f40(param_1,&DAT_146860388,&DAT_1468603e8,&DAT_146860400);
      puVar23 = DAT_1468603e8 + DAT_1468603f0;
      uVar28 = uVar37;
      for (puVar16 = DAT_1468603e8; puVar16 != puVar23; puVar16 = puVar16 + 1) {
        uVar2 = *puVar16;
        if ((*(int *)(lVar3 + 0x38) < DAT_146860428) &&
           (_Init_thread_header(&DAT_146860428), DAT_146860428 == -1)) {
          DAT_146860418 = (undefined4 *)0x0;
          _DAT_146860420 = 0;
          atexit((_func_5014 *)&LAB_143e43590);
          _Init_thread_footer(&DAT_146860428);
        }
        UEditableMesh::GetPolygonPerimeterEdges(param_1,uVar2,&DAT_146860418);
        uVar35 = (ulonglong)
                 ((longlong)(DAT_146860418 + DAT_146860420) + (3 - (longlong)DAT_146860418)) >> 2;
        if (DAT_146860418 + DAT_146860420 < DAT_146860418) {
          uVar35 = uVar37;
        }
        if (uVar35 != 0) {
          lVar31 = uVar28 * 0x18;
          puVar32 = DAT_146860418;
          uVar33 = uVar37;
          do {
            uVar2 = *puVar32;
            lVar31 = lVar31 + 0x18;
            puVar32 = puVar32 + 1;
            uVar28 = uVar28 + 1;
            uVar33 = uVar33 + 1;
            *(undefined4 *)(DAT_1468603a0 + -0x18 + lVar31) = uVar2;
          } while (uVar33 != uVar35);
        }
      }
      FUN_14089f550(param_1,&DAT_1468603a0);
      FUN_14087cad0(param_1,&DAT_146860310,1,1,1,0);
    }
  }
  return;
}



// FUNCTION 1408a8f50 FUN_1408a8f50 body=151 status=ok
// SIG undefined FUN_1408a8f50(void)

longlong FUN_1408a8f50(void)

{
  if (DAT_146860cf0 == 0) {
    FUN_14171ccd0(L"/Script/EditableMesh",L"EditableMesh",&DAT_146860cf0,FUN_1408aae30,0x1070,
                  0x10000000,0,L"Engine",&LAB_1408aab10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146860cf0;
}



// FUNCTION 1408a9010 FUN_1408a9010 body=47 status=ok
// SIG undefined FUN_1408a9010(void)

longlong FUN_1408a9010(void)

{
  if (DAT_146860ce8 == 0) {
    FUN_141786440(&DAT_146860ce8,&PTR_FUN_144117150);
  }
  return DAT_146860ce8;
}



// FUNCTION 1408a9040 FUN_1408a9040 body=47 status=ok
// SIG undefined FUN_1408a9040(void)

longlong FUN_1408a9040(void)

{
  if (DAT_146860870 == 0) {
    FUN_141786a30(&DAT_146860870,&PTR_FUN_146270ad0);
  }
  return DAT_146860870;
}



// FUNCTION 1408a9070 FUN_1408a9070 body=47 status=ok
// SIG undefined FUN_1408a9070(void)

longlong FUN_1408a9070(void)

{
  if (DAT_146860878 == 0) {
    FUN_141786a30(&DAT_146860878,&PTR_FUN_146270bd0);
  }
  return DAT_146860878;
}



// FUNCTION 1408a90a0 FUN_1408a90a0 body=47 status=ok
// SIG undefined FUN_1408a90a0(void)

longlong FUN_1408a90a0(void)

{
  if (DAT_146860880 == 0) {
    FUN_141786a30(&DAT_146860880,&PTR_FUN_146270db0);
  }
  return DAT_146860880;
}



// FUNCTION 1408a90d0 FUN_1408a90d0 body=47 status=ok
// SIG undefined FUN_1408a90d0(void)

longlong FUN_1408a90d0(void)

{
  if (DAT_146860888 == 0) {
    FUN_141786a30(&DAT_146860888,&PTR_FUN_146270ea0);
  }
  return DAT_146860888;
}



// FUNCTION 1408a9100 FUN_1408a9100 body=47 status=ok
// SIG undefined FUN_1408a9100(void)

longlong FUN_1408a9100(void)

{
  if (DAT_146860890 == 0) {
    FUN_141786a30(&DAT_146860890,&PTR_FUN_146270ee0);
  }
  return DAT_146860890;
}



// FUNCTION 1408a9130 FUN_1408a9130 body=47 status=ok
// SIG undefined FUN_1408a9130(void)

longlong FUN_1408a9130(void)

{
  if (DAT_146860898 == 0) {
    FUN_141786a30(&DAT_146860898,&PTR_FUN_146270fa0);
  }
  return DAT_146860898;
}



// FUNCTION 1408a9160 FUN_1408a9160 body=47 status=ok
// SIG undefined FUN_1408a9160(void)

longlong FUN_1408a9160(void)

{
  if (DAT_1468608a0 == 0) {
    FUN_141786a30(&DAT_1468608a0,&PTR_FUN_146271160);
  }
  return DAT_1468608a0;
}



// FUNCTION 1408a9190 FUN_1408a9190 body=47 status=ok
// SIG undefined FUN_1408a9190(void)

longlong FUN_1408a9190(void)

{
  if (DAT_1468608a8 == 0) {
    FUN_141786a30(&DAT_1468608a8,&PTR_FUN_1462711e0);
  }
  return DAT_1468608a8;
}



// FUNCTION 1408a91c0 FUN_1408a91c0 body=47 status=ok
// SIG undefined FUN_1408a91c0(void)

longlong FUN_1408a91c0(void)

{
  if (DAT_1468608b0 == 0) {
    FUN_141786a30(&DAT_1468608b0,&PTR_FUN_146271260);
  }
  return DAT_1468608b0;
}



// FUNCTION 1408a91f0 FUN_1408a91f0 body=47 status=ok
// SIG undefined FUN_1408a91f0(void)

longlong FUN_1408a91f0(void)

{
  if (DAT_1468608b8 == 0) {
    FUN_141786a30(&DAT_1468608b8,&PTR_FUN_146271320);
  }
  return DAT_1468608b8;
}


