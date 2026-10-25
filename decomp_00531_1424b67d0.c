// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1424b67d0 FUN_1424b67d0 body=214 status=ok
// SIG undefined FUN_1424b67d0(void)

undefined8 * FUN_1424b67d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    puVar4 = (undefined8 *)param_2[4];
    iVar5 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0x2c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1424ced50(param_1,iVar5);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = param_2;
      }
      puVar3 = (undefined8 *)param_1[4];
      if ((undefined8 *)param_1[4] == (undefined8 *)0x0) {
        puVar3 = param_1;
      }
      if (iVar5 != 0) {
        lVar6 = (longlong)puVar4 - (longlong)puVar3;
        puVar2 = (undefined1 *)((longlong)puVar3 + 0xc);
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 2;
          *(undefined8 *)(puVar2 + -0xc) = uVar1;
          *(undefined4 *)(puVar2 + -4) = *(undefined4 *)(puVar2 + lVar6 + -4);
          *puVar2 = puVar2[lVar6];
          puVar2[1] = puVar2[lVar6 + 1];
          puVar2[2] = puVar2[lVar6 + 2];
          puVar2[3] = puVar2[lVar6 + 3];
          puVar2 = puVar2 + 0x10;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 1424b68b0 operator= body=151 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<TRefCountPtr<HHitProxy>,FDefaultAllocator>::operator=
          (undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    plVar3 = (longlong *)*param_1;
    iVar4 = *(int *)(param_1 + 1);
    if (iVar4 != 0) {
      do {
        puVar2 = (undefined8 *)*plVar3;
        if (puVar2 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar2 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
        plVar3 = plVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      plVar3 = (longlong *)*param_1;
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1424b6950 FUN_1424b6950 body=360 status=ok
// SIG undefined FUN_1424b6950(void)

longlong FUN_1424b6950(longlong param_1,longlong param_2)

{
  FUN_1424b6ac0();
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined1 *)(param_1 + 0x104) = *(undefined1 *)(param_2 + 0x104);
  *(undefined1 *)(param_1 + 0x105) = *(undefined1 *)(param_2 + 0x105);
  *(undefined1 *)(param_1 + 0x106) = *(undefined1 *)(param_2 + 0x106);
  *(undefined1 *)(param_1 + 0x107) = *(undefined1 *)(param_2 + 0x107);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x114) = *(undefined1 *)(param_2 + 0x114);
  *(undefined1 *)(param_1 + 0x115) = *(undefined1 *)(param_2 + 0x115);
  *(undefined1 *)(param_1 + 0x116) = *(undefined1 *)(param_2 + 0x116);
  *(undefined1 *)(param_1 + 0x117) = *(undefined1 *)(param_2 + 0x117);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x124) = *(undefined1 *)(param_2 + 0x124);
  *(undefined1 *)(param_1 + 0x125) = *(undefined1 *)(param_2 + 0x125);
  *(undefined1 *)(param_1 + 0x126) = *(undefined1 *)(param_2 + 0x126);
  *(undefined1 *)(param_1 + 0x127) = *(undefined1 *)(param_2 + 0x127);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x134) = *(undefined1 *)(param_2 + 0x134);
  *(undefined1 *)(param_1 + 0x135) = *(undefined1 *)(param_2 + 0x135);
  *(undefined1 *)(param_1 + 0x136) = *(undefined1 *)(param_2 + 0x136);
  *(undefined1 *)(param_1 + 0x137) = *(undefined1 *)(param_2 + 0x137);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  return param_1;
}



// FUNCTION 1424b6ac0 FUN_1424b6ac0 body=392 status=ok
// SIG undefined FUN_1424b6ac0(void)

undefined8 * FUN_1424b6ac0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined1 *)((longlong)param_1 + 0xd) = *(undefined1 *)((longlong)param_2 + 0xd);
  *(undefined1 *)((longlong)param_1 + 0xe) = *(undefined1 *)((longlong)param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0xf) = *(undefined1 *)((longlong)param_2 + 0xf);
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0x1e) = *(undefined1 *)((longlong)param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0x1f) = *(undefined1 *)((longlong)param_2 + 0x1f);
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)((longlong)param_2 + 0x2d);
  *(undefined1 *)((longlong)param_1 + 0x2e) = *(undefined1 *)((longlong)param_2 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0x2f) = *(undefined1 *)((longlong)param_2 + 0x2f);
  TArray<FVertexStreamComponent,TFixedAllocator<4>_>::operator=(param_1 + 6,param_2 + 6);
  param_1[0xf] = param_2[0xf];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)((longlong)param_2 + 0x84);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x85);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x86);
  *(undefined1 *)((longlong)param_1 + 0x87) = *(undefined1 *)((longlong)param_2 + 0x87);
  FUN_1424b67d0(param_1 + 0x11,param_2 + 0x11);
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_2 + 0xec);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0xf1) = *(undefined1 *)((longlong)param_2 + 0xf1);
  return param_1;
}



// FUNCTION 1424b6c50 FUN_1424b6c50 body=381 status=ok
// SIG undefined FUN_1424b6c50(void)

longlong * FUN_1424b6c50(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_1406da970();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xc,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xc,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1406da970(param_1,param_2 + 0x10);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x1c,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x1c,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x1c) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x20,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x20,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x24,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x24,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x24) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1406da970(param_1,param_2 + 0x28);
  FUN_1406da970(param_1,param_2 + 0x34);
  return param_1;
}



// FUNCTION 1424b6dd0 FUN_1424b6dd0 body=374 status=ok
// SIG undefined FUN_1424b6dd0(void)

longlong * FUN_1424b6dd0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_1406da970();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xc,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xc,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1406da970(param_1,param_2 + 0x10);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x1c,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x1c,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x1c) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x20,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x20,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *(undefined4 *)(param_2 + 0x24) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x24,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 0x24,4);
  }
  return param_1;
}



// FUNCTION 1424b6f50 FUN_1424b6f50 body=393 status=ok
// SIG undefined FUN_1424b6f50(void)

longlong * FUN_1424b6f50(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  iVar6 = 0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0xaaaab)))) {
    if ((bVar2 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar1 = *param_2 + (longlong)iVar6 * 0x18;
          uVar5 = FUN_1406da970(param_1,lVar1);
          FUN_1406da970(uVar5,lVar1 + 0xc);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_2[1]);
      }
    }
    else {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (param_2,local_res8[0]);
      }
      if (0 < local_res8[0]) {
        do {
          iVar3 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_2,iVar3);
          }
          lVar1 = *param_2 + (longlong)iVar3 * 0x18;
          uVar5 = FUN_1406da970(param_1,lVar1);
          FUN_1406da970(uVar5,lVar1 + 0xc);
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_res8[0]);
      }
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar2 | 0x80;
  return param_1;
}



// FUNCTION 1424b70e0 FUN_1424b70e0 body=501 status=ok
// SIG undefined FUN_1424b70e0(void)

longlong * FUN_1424b70e0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  puVar6 = (undefined4 *)0x0;
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
        FUN_1424b6c50(param_1,(longlong)(int)puVar6 * 0x40 + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined4 *)(ulonglong)uVar7;
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
    puVar4 = (undefined4 *)((longlong)iVar2 * 0x40 + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0x7f7fffff;
      puVar4[1] = 0x7f7fffff;
      puVar4[2] = 0x7f7fffff;
      puVar4[3] = 0xffffffff;
      puVar4[4] = 0x800000;
      puVar4[5] = 0x800000;
      puVar4[6] = 0x800000;
      *(undefined8 *)(puVar4 + 7) = 0xffffffffffffffff;
      puVar4[9] = 0xffffffff;
      puVar4[10] = 0x7f7fffff;
      puVar4[0xb] = 0x7f7fffff;
      puVar4[0xc] = 0x7f7fffff;
      puVar4[0xd] = 0xff7fffff;
      puVar4[0xe] = 0xff7fffff;
      puVar4[0xf] = 0xff7fffff;
      puVar5 = puVar4;
    }
    FUN_1424b6c50(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined4 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1424b72e0 FUN_1424b72e0 body=489 status=ok
// SIG undefined FUN_1424b72e0(void)

longlong * FUN_1424b72e0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  puVar6 = (undefined4 *)0x0;
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
  if ((((char)bVar2 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x66666 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1424b6dd0(param_1,*param_2 + (longlong)(int)puVar6 * 0x28);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined4 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar1 = (undefined4 *)(*param_2 + (longlong)iVar3 * 0x28);
    puVar5 = puVar6;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0x7f7fffff;
      puVar1[1] = 0x7f7fffff;
      puVar1[2] = 0x7f7fffff;
      puVar1[3] = 0xffffffff;
      puVar1[4] = 0x800000;
      puVar1[5] = 0x800000;
      puVar1[6] = 0x800000;
      *(undefined8 *)(puVar1 + 7) = 0xffffffffffffffff;
      puVar1[9] = 0xffffffff;
      puVar5 = puVar1;
    }
    FUN_1424b6dd0(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined4 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1424b7510 FUN_1424b7510 body=141 status=ok
// SIG undefined FUN_1424b7510(void)

longlong FUN_1424b7510(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa50) != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xa48);
  if (*(longlong *)(param_1 + 0x970) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x830) != 0) {
    FMemory::Free();
  }
  FUN_1424b5ce0(param_1 + 0xd0);
  FGPUBaseSkinAPEXClothVertexFactory::~FGPUBaseSkinAPEXClothVertexFactory(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa60);
  }
  return param_1;
}



// FUNCTION 1424b75a0 FUN_1424b75a0 body=90 status=ok
// SIG undefined FUN_1424b75a0(void)

longlong FUN_1424b75a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x760) != 0) {
    FMemory::Free();
  }
  FUN_1424b5ce0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x958);
  }
  return param_1;
}



// FUNCTION 1424b7600 FUN_1424b7600 body=73 status=ok
// SIG undefined FUN_1424b7600(void)

longlong FUN_1424b7600(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x760) != 0) {
    FMemory::Free();
  }
  FUN_1424b5ce0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7f8);
  }
  return param_1;
}



// FUNCTION 1424b7650 FUN_1424b7650 body=97 status=ok
// SIG undefined FUN_1424b7650(void)

undefined8 * FUN_1424b7650(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450cecd0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1424b76c0 FUN_1424b76c0 body=97 status=ok
// SIG undefined FUN_1424b76c0(void)

undefined8 * FUN_1424b76c0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450cecc0;
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



// FUNCTION 1424b7730 FUN_1424b7730 body=97 status=ok
// SIG undefined FUN_1424b7730(void)

undefined8 * FUN_1424b7730(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450cdc90;
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



// FUNCTION 1424b77a0 FUN_1424b77a0 body=97 status=ok
// SIG undefined FUN_1424b77a0(void)

undefined8 * FUN_1424b77a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450cd600;
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



// FUNCTION 1424b7810 FUN_1424b7810 body=72 status=ok
// SIG undefined FUN_1424b7810(void)

undefined8 * FUN_1424b7810(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f48658;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1424b7860 FUN_1424b7860 body=126 status=ok
// SIG undefined FUN_1424b7860(void)

longlong FUN_1424b7860(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x880) != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x758);
  if (*(longlong *)(param_1 + 0x700) != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x650);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x648);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8d0);
  }
  return param_1;
}



// FUNCTION 1424b78e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FGPUBaseSkinAPEXClothVertexFactory::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~FGPUBaseSkinAPEXClothVertexFactory();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1424b7920 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FTableRowStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1424b5ce0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6b8);
  }
  return param_1;
}



// FUNCTION 1424b7960 FUN_1424b7960 body=55 status=ok
// SIG undefined FUN_1424b7960(void)

undefined8 FUN_1424b7960(undefined8 param_1,byte param_2)

{
  FUN_143702b50();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 1424b79a0 FUN_1424b79a0 body=165 status=ok
// SIG undefined FUN_1424b79a0(void)

longlong FUN_1424b79a0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  
  FUN_1424b66a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
        if (*(short *)(param_1 + 0x10) == -1) {
          (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0x80);
          return param_1;
        }
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 0x10));
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
    }
  }
  return param_1;
}



// FUNCTION 1424b7a50 FUN_1424b7a50 body=208 status=ok
// SIG undefined FUN_1424b7a50(void)

longlong FUN_1424b7a50(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x510) = 0;
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,FFoliageOcclusionResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,FFoliageOcclusionResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x4c8);
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x488);
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
  FUN_1424b60a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x530);
  }
  return param_1;
}



// FUNCTION 1424b7b20 FUN_1424b7b20 body=52 status=ok
// SIG undefined FUN_1424b7b20(void)

undefined8 FUN_1424b7b20(undefined8 param_1,ulonglong param_2)

{
  FUN_1424b60a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x480);
  }
  return param_1;
}



// FUNCTION 1424b7b60 FUN_1424b7b60 body=137 status=ok
// SIG undefined FUN_1424b7b60(void)

undefined8 * FUN_1424b7b60(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_1450cdd48;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0xb0) = 0;
    lVar1 = param_1[2];
    if (lVar1 != 0) {
      FUN_1424b63f0(lVar1);
      FMemory::operator_delete(lVar1,0xc0);
    }
    param_1[2] = 0;
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1424b7bf0 FUN_1424b7bf0 body=43 status=ok
// SIG undefined FUN_1424b7bf0(void)

undefined8 * FUN_1424b7bf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144164008;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1424b7c20 FUN_1424b7c20 body=227 status=ok
// SIG undefined FUN_1424b7c20(void)

undefined8 * FUN_1424b7c20(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  param_1[0xfc] = 0;
  *param_1 = &PTR_FUN_1450cddc8;
  param_1[5] = &PTR_LAB_1450ce7a8;
  param_1[0x5a] = &PTR_LAB_1450ce7d8;
  FUN_14158cb50(param_1 + 0x123);
  if (param_1[0x114] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10a] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x109];
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
  FUN_1424e16f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x950);
  }
  return param_1;
}



// FUNCTION 1424b7d10 FUN_1424b7d10 body=55 status=ok
// SIG undefined FUN_1424b7d10(void)

undefined8 FUN_1424b7d10(undefined8 param_1,byte param_2)

{
  FUN_14370bff0();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 1424b7d50 FUN_1424b7d50 body=238 status=ok
// SIG undefined FUN_1424b7d50(void)

longlong FUN_1424b7d50(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x28),0x10,*(uint *)(param_1 + 0x34) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  FUN_1437876f0(param_1 + 0x18);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar3 = TlsGetValue(DAT_146b7bf70);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = DAT_146b7bf68;
        }
        plVar1 = *(longlong **)((longlong)pvVar3 + 0x58);
        if (*(short *)(param_1 + 0x10) == -1) {
          (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0x238);
          return param_1;
        }
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 0x10));
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x238);
    }
  }
  return param_1;
}



// FUNCTION 1424b7e40 FUN_1424b7e40 body=120 status=ok
// SIG undefined FUN_1424b7e40(void)

longlong FUN_1424b7e40(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1437876f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 1424b7ec0 FUN_1424b7ec0 body=43 status=ok
// SIG undefined FUN_1424b7ec0(void)

undefined8 * FUN_1424b7ec0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkProcessContextBase::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1424b7ef0 FUN_1424b7ef0 body=165 status=ok
// SIG undefined FUN_1424b7ef0(void)

longlong FUN_1424b7ef0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
        if (*(short *)(param_1 + 0x10) == -1) {
          (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0x18);
          return param_1;
        }
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 0x10));
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
    }
  }
  return param_1;
}



// FUNCTION 1424b7fa0 FUN_1424b7fa0 body=829 status=ok
// SIG undefined FUN_1424b7fa0(void)

void FUN_1424b7fa0(longlong param_1,undefined8 param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  void *pvVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  longlong *plVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  char local_60;
  char cStack_5f;
  longlong *local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  uint uStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined8 local_30;
  
  iVar5 = param_5;
  if ((*(int *)(param_1 + 0x4c0) == param_5) && (*(uint *)(param_1 + 0x51c) < DAT_1464aaa90)) {
    param_5 = FColorVertexBuffer::GetAllocatedSize(param_2);
    plVar12 = (longlong *)(param_1 + 0x4c8);
    piVar10 = (int *)0x0;
    if (*(int *)(param_1 + 0x4d0) != *(int *)(param_1 + 0x4fc)) {
      lVar8 = *(longlong *)(param_1 + 0x508);
      if (*(longlong *)(param_1 + 0x508) == 0) {
        lVar8 = param_1 + 0x500;
      }
      iVar6 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x510) - 1U & (longlong)param_5) * 4);
      if (iVar6 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar6 * 0x30 + *plVar12);
          if (*piVar9 == param_5) {
            if (iVar6 != -1) goto LAB_1424b8065;
            break;
          }
          iVar6 = piVar9[10];
        } while (iVar6 != -1);
      }
    }
    piVar9 = piVar10;
LAB_1424b8065:
    piVar11 = piVar9 + 2;
    if (piVar9 == (int *)0x0) {
      piVar11 = piVar10;
    }
    if (piVar11 == (int *)0x0) {
      iVar6 = *(int *)(param_1 + 0x4f0);
      uStack_48 = (uint *)(param_1 + 0x4d8);
      local_98._0_4_ = 0;
      local_98._4_4_ = 1;
      local_88._4_4_ = 0;
      uStack_80 = 0;
      if (iVar6 != 0) {
        puVar13 = *(uint **)(param_1 + 0x4e8);
        if (*(uint **)(param_1 + 0x4e8) == (uint *)0x0) {
          puVar13 = uStack_48;
        }
        uVar1 = *puVar13;
        piVar9 = piVar10;
        while (uVar1 == 0) {
          iVar7 = (int)piVar10;
          uStack_80 = (int)piVar9 + 0x20;
          piVar9 = (int *)(ulonglong)uStack_80;
          local_98._0_4_ = iVar7 + 1;
          piVar10 = (int *)(ulonglong)(uint)local_98;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1424b817f;
          uVar1 = puVar13[(longlong)iVar7 + 1];
        }
        local_98._4_4_ = -uVar1 & uVar1;
        iVar7 = 0x1f;
        if (local_98._4_4_ != 0) {
          for (; local_98._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (local_98._4_4_ == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        local_88._4_4_ = (uStack_80 - iVar7) + 0x1f;
        if (iVar6 < local_88._4_4_) {
LAB_1424b817f:
          local_88._4_4_ = iVar6;
        }
      }
      auVar4._4_4_ = local_88._4_4_;
      auVar4._0_4_ = 0xffffffff;
      auVar4._8_4_ = uStack_80;
      auVar4._12_4_ = iStack_7c;
      local_30._0_4_ = SUB84(plVar12,0);
      local_30._4_4_ = (undefined4)((ulonglong)plVar12 >> 0x20);
      uStack_40 = 0xffffffff;
      iStack_3c = local_88._4_4_;
      uStack_50._0_4_ = (uint)local_98;
      uStack_50._4_4_ = local_98._4_4_;
      local_60 = '\0';
      cStack_5f = '\0';
      uStack_80 = 0xffffffff;
      iStack_7c = local_88._4_4_;
      uStack_90._0_4_ = (uint)local_98;
      uStack_90._4_4_ = local_98._4_4_;
      uStack_38 = auVar4._8_8_;
      local_78._8_4_ = (undefined4)local_30;
      local_78._0_8_ = uStack_38;
      local_78._12_4_ = local_30._4_4_;
      bVar3 = local_88._4_4_ < *(int *)(param_1 + 0x4f0);
      local_98 = plVar12;
      local_68 = plVar12;
      local_58 = plVar12;
      local_88 = uStack_48;
      local_30 = plVar12;
      if (bVar3) {
        do {
          if (*(uint *)(*local_98 + 0x20 + (longlong)iStack_7c * 0x30) != DAT_1464aaa90) {
            TSet<TTuple<unsigned_int,FFoliageOcclusionResults>,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>,FDefaultSetAllocator>
            ::Remove(local_78._8_8_);
            local_60 = '\x01';
          }
          uStack_80 = uStack_80 & ~uStack_90._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
        } while (iStack_7c < (int)local_88[6]);
        if ((local_60 != '\0') && (cStack_5f != '\0')) {
          TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
        }
      }
      iVar6 = param_3[2];
      pvVar2 = *(void **)param_3;
      local_58 = (longlong *)0x0;
      uStack_50 = CONCAT44(uStack_50._4_4_,iVar6);
      if (iVar6 == 0) {
        uStack_50 = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_58,iVar6,0);
        _guard_xfg_dispatch_icall_nop(local_58,pvVar2,(longlong)iVar6);
      }
      uStack_40 = DAT_1464aaa90;
      local_98 = (longlong *)&param_5;
      uStack_90 = &local_58;
      uStack_48 = (uint *)CONCAT44(iVar5,param_4);
      FUN_1424b1830(plVar12,local_res8,&local_98,0);
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else {
      piVar11[6] = DAT_1464aaa90;
      if (piVar11 != param_3) {
        iVar6 = param_3[2];
        pvVar2 = *(void **)param_3;
        piVar11[2] = iVar6;
        if ((iVar6 == 0) && (piVar11[3] == 0)) {
          piVar11[3] = 0;
          piVar11[4] = param_4;
          piVar11[5] = iVar5;
          return;
        }
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(piVar11,iVar6);
        _guard_xfg_dispatch_icall_nop(*(void **)piVar11,pvVar2,(longlong)iVar6);
      }
      piVar11[4] = param_4;
      piVar11[5] = iVar5;
    }
  }
  return;
}



// FUNCTION 1424b82e0 FUN_1424b82e0 body=662 status=ok
// SIG undefined FUN_1424b82e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424b82e0(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  char cVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  *(undefined4 *)(param_1 + 0x864) = param_4;
  plVar15 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x860) = 0;
  *(undefined8 *)(param_1 + 0x890) = _DAT_1468b5d90;
  uVar5 = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x898) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x884) = *(undefined8 *)(param_1 + 0x890);
  *(undefined4 *)(param_1 + 0x88c) = uVar5;
  *(undefined1 *)(param_1 + 0x89c) = 0;
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  if (*(int *)(param_1 + 0x8ac) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x8a0,0);
  }
  plVar13 = (longlong *)operator_new(0x10);
  plVar16 = plVar15;
  if (plVar13 != (longlong *)0x0) {
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar16 = plVar13;
  }
  plVar13 = (longlong *)operator_new(0x18);
  if (plVar13 != (longlong *)0x0) {
    *(undefined4 *)(plVar13 + 1) = 1;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_DestroyObject_14413b698;
    plVar13[2] = (longlong)plVar16;
    plVar15 = plVar13;
  }
  pplVar2 = (longlong **)(param_1 + 0x840);
  local_78 = plVar16;
  local_70 = plVar15;
  SharedPointerInternals::EnableSharedFromThis(&local_78,plVar16,plVar16);
  if (pplVar2 != &local_78) {
    *pplVar2 = plVar16;
    local_78 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x848,&local_70);
    plVar15 = local_70;
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 2000) = 0;
  if (*(int *)(param_1 + 0x7d4) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x7c8,0);
  }
  *(undefined4 *)(param_1 + 0x858) = 0;
  if (*(int *)(param_1 + 0x85c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x850,0);
  }
  *(undefined4 *)(param_1 + 0x8b8) = param_3;
  if ((int)param_2[1] < 1) {
    local_38 = DAT_1468b5d98;
    local_44 = DAT_1468b5d98;
    puVar14 = &local_4c;
    local_40 = _DAT_1468b5d90;
    local_4c = _DAT_1468b5d90;
    local_34 = 0;
  }
  else {
    puVar6 = (undefined8 *)*param_2;
    local_50 = 1;
    uStack_60 = *(undefined4 *)(puVar6 + 1);
    local_68 = *puVar6;
    uStack_54 = *(undefined4 *)(puVar6 + 3);
    puVar14 = &local_68;
    uStack_5c = puVar6[2];
  }
  uVar7 = *(undefined4 *)puVar14;
  uVar8 = *(undefined4 *)((longlong)puVar14 + 4);
  uVar9 = *(undefined4 *)(puVar14 + 1);
  uVar10 = *(undefined4 *)((longlong)puVar14 + 0xc);
  *(undefined4 *)(param_1 + 0x8f8) = param_4;
  uVar4 = puVar14[2];
  uVar5 = *(undefined4 *)(puVar14 + 3);
  *(undefined4 *)(param_1 + 0x868) = uVar7;
  *(undefined4 *)(param_1 + 0x86c) = uVar8;
  *(undefined4 *)(param_1 + 0x870) = uVar9;
  *(undefined4 *)(param_1 + 0x874) = uVar10;
  *(undefined8 *)(param_1 + 0x878) = uVar4;
  *(undefined4 *)(param_1 + 0x880) = uVar5;
  if ((((0 < *(int *)(param_1 + 0x864)) && (*(longlong *)(param_1 + 0x728) != 0)) &&
      (cVar12 = FUN_142820890(*(longlong *)(param_1 + 0x728),1,0xffffffff), cVar12 != '\0')) &&
     (plVar15 = *pplVar2, plVar15 != param_2)) {
    if (*plVar15 != 0) {
      FMemory::Free();
    }
    *plVar15 = *param_2;
    *param_2 = 0;
    *(int *)(plVar15 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)plVar15 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 1424b8580 FUN_1424b8580 body=720 status=ok
// SIG undefined FUN_1424b8580(void)

ulonglong FUN_1424b8580(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  float local_78;
  undefined8 local_74;
  float local_6c;
  undefined1 local_68;
  undefined1 local_64 [76];
  
  uVar5 = FUN_1424e3260();
  if ((int)uVar5 != -1) {
    if (*(char *)(param_1 + 0x8f0) != '\0') {
      *(undefined1 *)(param_1 + 0x8f2) = 1;
    }
    iVar1 = *(int *)(param_1 + 2000);
    iVar2 = *(int *)(param_1 + 0x8f8);
    iVar3 = *(int *)(param_1 + 2000);
    *(int *)(param_1 + 2000) = iVar1 + 1;
    if (*(int *)(param_1 + 0x7d4) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x7c8,iVar1);
    }
    *(int *)(*(longlong *)(param_1 + 0x7c8) + (longlong)iVar1 * 4) = (iVar2 - iVar3) + (int)uVar5;
    *(int *)(param_1 + 0x8f8) = *(int *)(param_1 + 0x8f8) + 1;
    FUN_1424e3210(param_1 + 0x7f8,param_2);
    if (*(longlong *)(param_1 + 0x728) != 0) {
      pfVar6 = (float *)UStaticMesh::GetBounds(*(longlong *)(param_1 + 0x728),local_64);
      local_6c = pfVar6[2] + pfVar6[5];
      local_78 = pfVar6[2] - pfVar6[5];
      local_80 = CONCAT44(pfVar6[1] - pfVar6[4],*pfVar6 - pfVar6[3]);
      local_74 = CONCAT44(pfVar6[1] + pfVar6[4],*pfVar6 + pfVar6[3]);
      local_68 = 1;
      FBox::TransformBy(&local_80,&local_a0,param_2);
      if (*(char *)(param_1 + 0x89c) == '\0') {
        if ((char)local_88 != '\0') {
          *(float *)(param_1 + 0x884) = local_a0;
          *(float *)(param_1 + 0x888) = fStack_9c;
          *(float *)(param_1 + 0x88c) = fStack_98;
          *(float *)(param_1 + 0x890) = fStack_94;
          *(ulonglong *)(param_1 + 0x894) = CONCAT44(fStack_8c,local_90);
          *(undefined4 *)(param_1 + 0x89c) = local_88;
        }
      }
      else if ((char)local_88 != '\0') {
        fVar9 = *(float *)(param_1 + 0x884);
        if (local_a0 <= *(float *)(param_1 + 0x884)) {
          fVar9 = local_a0;
        }
        *(float *)(param_1 + 0x884) = fVar9;
        fVar9 = *(float *)(param_1 + 0x888);
        if (fStack_9c <= *(float *)(param_1 + 0x888)) {
          fVar9 = fStack_9c;
        }
        fVar8 = fStack_98;
        if (*(float *)(param_1 + 0x88c) <= fStack_98) {
          fVar8 = *(float *)(param_1 + 0x88c);
        }
        *(float *)(param_1 + 0x888) = fVar9;
        *(float *)(param_1 + 0x88c) = fVar8;
        fVar9 = *(float *)(param_1 + 0x890);
        if (*(float *)(param_1 + 0x890) <= fStack_94) {
          fVar9 = fStack_94;
        }
        fVar8 = local_90;
        if (local_90 <= *(float *)(param_1 + 0x894)) {
          fVar8 = *(float *)(param_1 + 0x894);
        }
        *(float *)(param_1 + 0x890) = fVar9;
        fVar9 = *(float *)(param_1 + 0x898);
        if (*(float *)(param_1 + 0x898) <= fStack_8c) {
          fVar9 = fStack_8c;
        }
        *(float *)(param_1 + 0x894) = fVar8;
        *(float *)(param_1 + 0x898) = fVar9;
      }
      iVar1 = *(int *)(param_1 + 0x8a8);
      *(int *)(param_1 + 0x8a8) = iVar1 + 1;
      if (*(int *)(param_1 + 0x8ac) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x8a0,iVar1);
      }
      lVar4 = *(longlong *)(param_1 + 0x8a0);
      lVar7 = (longlong)iVar1 * 0x1c;
      pfVar6 = (float *)(lVar7 + lVar4);
      *pfVar6 = local_a0;
      pfVar6[1] = fStack_9c;
      pfVar6[2] = fStack_98;
      pfVar6[3] = fStack_94;
      *(ulonglong *)(lVar7 + 0x10 + lVar4) = CONCAT44(fStack_8c,local_90);
      *(undefined4 *)(lVar7 + 0x18 + lVar4) = local_88;
    }
    if (*(char *)(param_1 + 0x8f3) != '\0') {
      FUN_1424bd460(param_1,1 < *(int *)(param_1 + 0x7b0),0);
    }
    uVar5 = uVar5 & 0xffffffff;
  }
  return uVar5;
}



// FUNCTION 1424b8850 FUN_1424b8850 body=530 status=ok
// SIG undefined FUN_1424b8850(void)

void FUN_1424b8850(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  param_1 = param_1 + 0xd0;
  FUN_1424b8a70(param_1);
  if (*(longlong *)(param_2 + 0x150) != 0) {
    puVar3 = (undefined1 *)FUN_1419e2500(param_1,local_res8,param_2 + 0x140,9);
    iVar2 = *(int *)(param_3 + 0x100);
    *(int *)(param_3 + 0x100) = iVar2 + 1;
    if (*(int *)(param_3 + 0x104) < iVar2 + 1) {
      TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_3,iVar2);
    }
    puVar1 = (undefined1 *)(param_3 + (longlong)iVar2 * 8);
    *puVar1 = *puVar3;
    puVar1[1] = puVar3[1];
    puVar1[2] = puVar3[2];
    puVar1[3] = puVar3[3];
    *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(puVar3 + 4);
    *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(puVar3 + 6);
    puVar3 = (undefined1 *)FUN_1419e2500(param_1,local_res8,param_2 + 0x150,10);
    iVar2 = *(int *)(param_3 + 0x100);
    lVar4 = (longlong)iVar2;
    *(int *)(param_3 + 0x100) = iVar2 + 1;
    if (*(int *)(param_3 + 0x104) < iVar2 + 1) {
      TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_3,iVar2);
    }
    *(undefined1 *)(param_3 + lVar4 * 8) = *puVar3;
    *(undefined1 *)(param_3 + 1 + lVar4 * 8) = puVar3[1];
    *(undefined1 *)(param_3 + 2 + lVar4 * 8) = puVar3[2];
    *(undefined1 *)(param_3 + 3 + lVar4 * 8) = puVar3[3];
    *(undefined2 *)(param_3 + 4 + lVar4 * 8) = *(undefined2 *)(puVar3 + 4);
    *(undefined2 *)(param_3 + 6 + lVar4 * 8) = *(undefined2 *)(puVar3 + 6);
    puVar3 = (undefined1 *)FUN_1419e2500(param_1,local_res8,param_2 + 0x160,0xb);
    iVar2 = *(int *)(param_3 + 0x100);
    lVar4 = (longlong)iVar2;
    *(int *)(param_3 + 0x100) = iVar2 + 1;
    if (*(int *)(param_3 + 0x104) < iVar2 + 1) {
      TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_3,iVar2);
    }
    *(undefined1 *)(param_3 + lVar4 * 8) = *puVar3;
    *(undefined1 *)(param_3 + 1 + lVar4 * 8) = puVar3[1];
    *(undefined1 *)(param_3 + 2 + lVar4 * 8) = puVar3[2];
    *(undefined1 *)(param_3 + 3 + lVar4 * 8) = puVar3[3];
    *(undefined2 *)(param_3 + 4 + lVar4 * 8) = *(undefined2 *)(puVar3 + 4);
    *(undefined2 *)(param_3 + 6 + lVar4 * 8) = *(undefined2 *)(puVar3 + 6);
    puVar3 = (undefined1 *)FUN_1419e2500(param_1,local_res8,param_2 + 0x170,0xc);
    iVar2 = *(int *)(param_3 + 0x100);
    lVar4 = (longlong)iVar2;
    *(int *)(param_3 + 0x100) = iVar2 + 1;
    if (*(int *)(param_3 + 0x104) < iVar2 + 1) {
      TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_3,iVar2);
    }
    *(undefined1 *)(param_3 + lVar4 * 8) = *puVar3;
    *(undefined1 *)(param_3 + 1 + lVar4 * 8) = puVar3[1];
    *(undefined1 *)(param_3 + 2 + lVar4 * 8) = puVar3[2];
    *(undefined1 *)(param_3 + 3 + lVar4 * 8) = puVar3[3];
    *(undefined2 *)(param_3 + 4 + lVar4 * 8) = *(undefined2 *)(puVar3 + 4);
    *(undefined2 *)(param_3 + 6 + lVar4 * 8) = *(undefined2 *)(puVar3 + 6);
  }
  return;
}



// FUNCTION 1424b8a70 FUN_1424b8a70 body=1363 status=ok
// SIG undefined FUN_1424b8a70(void)

void FUN_1424b8a70(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_res10,param_2,0);
  iVar3 = *(int *)(param_3 + 0x100);
  *(int *)(param_3 + 0x100) = iVar3 + 1;
  if (*(int *)(param_3 + 0x104) < iVar3 + 1) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_3,iVar3);
  }
  puVar2 = (undefined1 *)(param_3 + (longlong)iVar3 * 8);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  puVar2[3] = puVar1[3];
  *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(puVar1 + 4);
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(puVar1 + 6);
  puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_res10,param_2 + 0x10,1);
  iVar3 = *(int *)(param_3 + 0x100);
  lVar5 = (longlong)iVar3;
  *(int *)(param_3 + 0x100) = iVar3 + 1;
  if (*(int *)(param_3 + 0x104) < iVar3 + 1) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_3,iVar3);
  }
  *(undefined1 *)(param_3 + lVar5 * 8) = *puVar1;
  *(undefined1 *)(param_3 + 1 + lVar5 * 8) = puVar1[1];
  *(undefined1 *)(param_3 + 2 + lVar5 * 8) = puVar1[2];
  *(undefined1 *)(param_3 + 3 + lVar5 * 8) = puVar1[3];
  *(undefined2 *)(param_3 + 4 + lVar5 * 8) = *(undefined2 *)(puVar1 + 4);
  *(undefined2 *)(param_3 + 6 + lVar5 * 8) = *(undefined2 *)(puVar1 + 6);
  puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_res10,param_2 + 0x20,2);
  lVar5 = (longlong)*(int *)(param_3 + 0x100);
  iVar3 = *(int *)(param_3 + 0x100) + 1;
  *(int *)(param_3 + 0x100) = iVar3;
  if (*(int *)(param_3 + 0x104) < iVar3) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_3);
  }
  *(undefined1 *)(param_3 + lVar5 * 8) = *puVar1;
  *(undefined1 *)(param_3 + 1 + lVar5 * 8) = puVar1[1];
  *(undefined1 *)(param_3 + 2 + lVar5 * 8) = puVar1[2];
  *(undefined1 *)(param_3 + 3 + lVar5 * 8) = puVar1[3];
  *(undefined2 *)(param_3 + 4 + lVar5 * 8) = *(undefined2 *)(puVar1 + 4);
  *(undefined2 *)(param_3 + 6 + lVar5 * 8) = *(undefined2 *)(puVar1 + 6);
  iVar3 = *(int *)(param_2 + 0x70);
  if (iVar3 != 0) {
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        puVar1 = (undefined1 *)
                 FUN_1419e2500(param_1,local_res10,((longlong)iVar4 + 3) * 0x10 + param_2,iVar4 + 5)
        ;
        lVar5 = (longlong)*(int *)(param_3 + 0x100);
        iVar3 = *(int *)(param_3 + 0x100) + 1;
        *(int *)(param_3 + 0x100) = iVar3;
        if (*(int *)(param_3 + 0x104) < iVar3) {
          TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_3);
        }
        iVar4 = iVar4 + 1;
        *(undefined1 *)(param_3 + lVar5 * 8) = *puVar1;
        *(undefined1 *)(param_3 + 1 + lVar5 * 8) = puVar1[1];
        *(undefined1 *)(param_3 + 2 + lVar5 * 8) = puVar1[2];
        *(undefined1 *)(param_3 + 3 + lVar5 * 8) = puVar1[3];
        *(undefined2 *)(param_3 + 4 + lVar5 * 8) = *(undefined2 *)(puVar1 + 4);
        *(undefined2 *)(param_3 + 6 + lVar5 * 8) = *(undefined2 *)(puVar1 + 6);
        iVar3 = *(int *)(param_2 + 0x70);
      } while (iVar4 < iVar3);
    }
    for (; iVar3 < 4; iVar3 = iVar3 + 1) {
      puVar1 = (undefined1 *)
               FUN_1419e2500(param_1,local_res10,
                             ((longlong)*(int *)(param_2 + 0x70) + 2) * 0x10 + param_2,iVar3 + 5);
      lVar5 = (longlong)*(int *)(param_3 + 0x100);
      iVar4 = *(int *)(param_3 + 0x100) + 1;
      *(int *)(param_3 + 0x100) = iVar4;
      if (*(int *)(param_3 + 0x104) < iVar4) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_3);
      }
      *(undefined1 *)(param_3 + lVar5 * 8) = *puVar1;
      *(undefined1 *)(param_3 + 1 + lVar5 * 8) = puVar1[1];
      *(undefined1 *)(param_3 + 2 + lVar5 * 8) = puVar1[2];
      *(undefined1 *)(param_3 + 3 + lVar5 * 8) = puVar1[3];
      *(undefined2 *)(param_3 + 4 + lVar5 * 8) = *(undefined2 *)(puVar1 + 4);
      *(undefined2 *)(param_3 + 6 + lVar5 * 8) = *(undefined2 *)(puVar1 + 6);
    }
  }
  iVar3 = 0;
  puVar1 = (undefined1 *)(param_2 + 0xf0);
  lVar5 = 0;
  do {
    if ((iVar3 < 0) || (*(int *)(param_2 + 0xb0) <= iVar3)) {
LAB_1424b8d4b:
      local_48 = FUN_141ee2f20(*puVar1);
      puVar6 = &local_48;
      puVar2 = local_res18;
      local_40 = 0;
      local_3c = 0x4080000;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0xa8);
      if (*(longlong *)(param_2 + 0xa8) == 0) {
        lVar7 = param_2 + 0x88;
      }
      puVar6 = (undefined8 *)(lVar7 + lVar5);
      if (*(longlong *)(lVar7 + lVar5) == 0) goto LAB_1424b8d4b;
      puVar2 = local_res10;
    }
    puVar2 = (undefined1 *)FUN_1419e2500(param_1,puVar2,puVar6,iVar3 + 0x10);
    lVar7 = (longlong)*(int *)(param_3 + 0x100);
    iVar4 = *(int *)(param_3 + 0x100) + 1;
    *(int *)(param_3 + 0x100) = iVar4;
    if (*(int *)(param_3 + 0x104) < iVar4) {
      TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_3);
    }
    iVar3 = iVar3 + 1;
    *(undefined1 *)(param_3 + lVar7 * 8) = *puVar2;
    lVar5 = lVar5 + 0x10;
    puVar1 = puVar1 + 1;
    *(undefined1 *)(param_3 + 1 + lVar7 * 8) = puVar2[1];
    *(undefined1 *)(param_3 + 2 + lVar7 * 8) = puVar2[2];
    *(undefined1 *)(param_3 + 3 + lVar7 * 8) = puVar2[3];
    *(undefined2 *)(param_3 + 4 + lVar7 * 8) = *(undefined2 *)(puVar2 + 4);
    *(undefined2 *)(param_3 + 6 + lVar7 * 8) = *(undefined2 *)(puVar2 + 6);
    if (1 < iVar3) {
      puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_res10,param_2 + 0xf8,3);
      iVar3 = *(int *)(param_3 + 0x100);
      lVar5 = (longlong)iVar3;
      *(int *)(param_3 + 0x100) = iVar3 + 1;
      if (*(int *)(param_3 + 0x104) < iVar3 + 1) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_3,iVar3);
      }
      *(undefined1 *)(param_3 + lVar5 * 8) = *puVar1;
      *(undefined1 *)(param_3 + 1 + lVar5 * 8) = puVar1[1];
      *(undefined1 *)(param_3 + 2 + lVar5 * 8) = puVar1[2];
      *(undefined1 *)(param_3 + 3 + lVar5 * 8) = puVar1[3];
      *(undefined2 *)(param_3 + 4 + lVar5 * 8) = *(undefined2 *)(puVar1 + 4);
      *(undefined2 *)(param_3 + 6 + lVar5 * 8) = *(undefined2 *)(puVar1 + 6);
      puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_res10,param_2 + 0x118,4);
      iVar3 = *(int *)(param_3 + 0x100);
      lVar5 = (longlong)iVar3;
      *(int *)(param_3 + 0x100) = iVar3 + 1;
      if (*(int *)(param_3 + 0x104) < iVar3 + 1) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_3,iVar3);
      }
      *(undefined1 *)(param_3 + lVar5 * 8) = *puVar1;
      *(undefined1 *)(param_3 + 1 + lVar5 * 8) = puVar1[1];
      *(undefined1 *)(param_3 + 2 + lVar5 * 8) = puVar1[2];
      *(undefined1 *)(param_3 + 3 + lVar5 * 8) = puVar1[3];
      *(undefined2 *)(param_3 + 4 + lVar5 * 8) = *(undefined2 *)(puVar1 + 4);
      *(undefined2 *)(param_3 + 6 + lVar5 * 8) = *(undefined2 *)(puVar1 + 6);
      puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_res10,param_2 + 0x108,0xe);
      iVar3 = *(int *)(param_3 + 0x100);
      lVar5 = (longlong)iVar3;
      *(int *)(param_3 + 0x100) = iVar3 + 1;
      if (*(int *)(param_3 + 0x104) < iVar3 + 1) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_3,iVar3);
      }
      *(undefined1 *)(param_3 + lVar5 * 8) = *puVar1;
      *(undefined1 *)(param_3 + 1 + lVar5 * 8) = puVar1[1];
      *(undefined1 *)(param_3 + 2 + lVar5 * 8) = puVar1[2];
      *(undefined1 *)(param_3 + 3 + lVar5 * 8) = puVar1[3];
      *(undefined2 *)(param_3 + 4 + lVar5 * 8) = *(undefined2 *)(puVar1 + 4);
      *(undefined2 *)(param_3 + 6 + lVar5 * 8) = *(undefined2 *)(puVar1 + 6);
      puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_res10,param_2 + 0x128,0xf);
      iVar3 = *(int *)(param_3 + 0x100);
      lVar5 = (longlong)iVar3;
      *(int *)(param_3 + 0x100) = iVar3 + 1;
      if (*(int *)(param_3 + 0x104) < iVar3 + 1) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_3,iVar3);
      }
      *(undefined1 *)(param_3 + lVar5 * 8) = *puVar1;
      *(undefined1 *)(param_3 + 1 + lVar5 * 8) = puVar1[1];
      *(undefined1 *)(param_3 + 2 + lVar5 * 8) = puVar1[2];
      *(undefined1 *)(param_3 + 3 + lVar5 * 8) = puVar1[3];
      *(undefined2 *)(param_3 + 4 + lVar5 * 8) = *(undefined2 *)(puVar1 + 4);
      *(undefined2 *)(param_3 + 6 + lVar5 * 8) = *(undefined2 *)(puVar1 + 6);
      return;
    }
  } while( true );
}



// FUNCTION 1424b8fd0 Advance body=135 status=ok
// SIG undefined Advance(void)

void FGPUSkinCache::FRWBufferTracker::Advance
               (longlong param_1,longlong param_2,int param_3,longlong param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  uVar5 = uVar3;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8 + uVar3 * 4);
    bVar2 = false;
    if ((iVar1 == param_3) && (*(longlong *)(param_1 + 0x10 + uVar3 * 8) == param_2)) {
      bVar2 = true;
    }
    iVar4 = (int)uVar5;
    if (((iVar1 != param_5) || (*(longlong *)(param_1 + 0x10 + uVar3 * 8) != param_4)) && (!bVar2))
    break;
    uVar5 = (ulonglong)(iVar4 + 1);
    uVar3 = uVar3 + 1;
    if (1 < (longlong)uVar3) {
      return;
    }
  }
  *(int *)(param_1 + 8 + (longlong)iVar4 * 4) = param_3;
  *(longlong *)(param_1 + 0x10 + (longlong)iVar4 * 8) = param_2;
  return;
}



// FUNCTION 1424b9060 FUN_1424b9060 body=1253 status=ok
// SIG undefined FUN_1424b9060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424b9060(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_50 [40];
  
  plVar11 = (longlong *)0x0;
  *(undefined1 *)(param_1 + 0x8f0) = 0;
  iVar12 = *(int *)(param_1 + 0x940);
  plVar13 = *(longlong **)(param_1 + 0x938);
  if (*(longlong **)(param_1 + 0x938) == (longlong *)0x0) {
    plVar13 = (longlong *)(param_1 + 0x918);
  }
  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar13 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar13 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar13 = plVar13 + 1;
  }
  *(undefined4 *)(param_1 + 0x940) = 0;
  if (*(int *)(param_1 + 0x944) != 0) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
              ((longlong *)(param_1 + 0x918),0);
  }
  if (*(char *)(param_1 + 0x8f1) == '\0') {
    if (*(char *)(param_1 + 0x8f2) == '\0') {
      *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(*(longlong *)(*param_4 + 0xa8) + 0x28);
      *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(*(longlong *)(*param_4 + 0xa8) + 0x18);
      plVar9 = (longlong *)operator_new(0x10);
      plVar13 = plVar11;
      if (plVar9 != (longlong *)0x0) {
        plVar13 = *(longlong **)(*param_4 + 0xa8);
        *plVar9 = 0;
        *plVar9 = *plVar13;
        *plVar13 = 0;
        *(int *)(plVar9 + 1) = (int)plVar13[1];
        *(undefined4 *)((longlong)plVar9 + 0xc) = *(undefined4 *)((longlong)plVar13 + 0xc);
        plVar13[1] = 0;
        plVar13 = plVar9;
      }
      plVar9 = (longlong *)operator_new(0x18);
      if (plVar9 != (longlong *)0x0) {
        *(undefined4 *)(plVar9 + 1) = 1;
        *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
        *plVar9 = (longlong)&PTR_DestroyObject_14413b698;
        plVar9[2] = (longlong)plVar13;
        plVar11 = plVar9;
      }
      pplVar2 = (longlong **)(param_1 + 0x840);
      local_98 = plVar13;
      local_90 = plVar11;
      SharedPointerInternals::EnableSharedFromThis(&local_98,plVar13,plVar13);
      if (pplVar2 != &local_98) {
        *pplVar2 = plVar13;
        local_98 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x848,&local_90);
        plVar11 = local_90;
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar11 + 1;
        lVar8 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar13 = (longlong *)(param_1 + 0x7c8);
      plVar11 = *pplVar2;
      lVar8 = *(longlong *)(*param_4 + 0xa8);
      plVar9 = (longlong *)(lVar8 + 0x20);
      if (plVar13 != plVar9) {
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        *plVar13 = *plVar9;
        *plVar9 = 0;
        *(undefined4 *)(param_1 + 2000) = *(undefined4 *)(lVar8 + 0x28);
        *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)(lVar8 + 0x2c);
        *(undefined8 *)(lVar8 + 0x28) = 0;
      }
      plVar13 = (longlong *)(param_1 + 0x850);
      lVar8 = *(longlong *)(*param_4 + 0xa8);
      plVar9 = (longlong *)(lVar8 + 0x10);
      if (plVar13 != plVar9) {
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        *plVar13 = *plVar9;
        *plVar9 = 0;
        *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(lVar8 + 0x18);
        *(undefined4 *)(param_1 + 0x85c) = *(undefined4 *)(lVar8 + 0x1c);
        *(undefined8 *)(lVar8 + 0x18) = 0;
      }
      puVar10 = (undefined8 *)UStaticMesh::GetBounds(*(undefined8 *)(param_1 + 0x728),local_50);
      uVar4 = puVar10[1];
      *(undefined8 *)(param_1 + 0x8bc) = *puVar10;
      *(undefined8 *)(param_1 + 0x8c4) = uVar4;
      *(undefined8 *)(param_1 + 0x8cc) = puVar10[2];
      *(undefined4 *)(param_1 + 0x8d4) = *(undefined4 *)(puVar10 + 3);
      plVar13 = *(longlong **)(*param_4 + 0xb0);
      *(undefined8 *)(*param_4 + 0xb0) = 0;
      *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(*(longlong *)(*param_4 + 0xa8) + 0x30);
      if ((int)plVar11[1] < 1) {
        local_58 = DAT_1468b5d98;
        local_64 = DAT_1468b5d98;
        puVar10 = &local_6c;
        local_60 = _DAT_1468b5d90;
        local_6c = _DAT_1468b5d90;
        local_54 = 0;
      }
      else {
        puVar6 = (undefined8 *)*plVar11;
        local_70 = 1;
        uStack_80 = *(undefined4 *)(puVar6 + 1);
        local_88 = *puVar6;
        uStack_74 = *(undefined4 *)(puVar6 + 3);
        puVar10 = &local_88;
        uStack_7c = puVar6[2];
      }
      uVar7 = puVar10[1];
      uVar4 = puVar10[2];
      uVar5 = *(undefined4 *)(puVar10 + 3);
      *(undefined8 *)(param_1 + 0x868) = *puVar10;
      *(undefined8 *)(param_1 + 0x870) = uVar7;
      *(undefined8 *)(param_1 + 0x878) = uVar4;
      *(undefined4 *)(param_1 + 0x880) = uVar5;
      *(undefined8 *)(param_1 + 0x890) = _DAT_1468b5d90;
      uVar5 = DAT_1468b5d98;
      *(undefined4 *)(param_1 + 0x898) = DAT_1468b5d98;
      *(undefined8 *)(param_1 + 0x884) = *(undefined8 *)(param_1 + 0x890);
      *(undefined4 *)(param_1 + 0x88c) = uVar5;
      *(undefined1 *)(param_1 + 0x89c) = 0;
      *(undefined4 *)(param_1 + 0x8a8) = 0;
      if (*(int *)(param_1 + 0x8ac) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0x8a0,0);
      }
      FUN_1424c45f0(param_1);
      *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(param_1 + 0x860);
      FInstanceUpdateCmdBuffer::Reset(param_1 + 0x7f8);
      local_a8 = (longlong *)0x0;
      local_a0 = 0;
      UInstancedStaticMeshComponent::CreateHitProxyData(param_1,&local_a8);
      FUN_1424d3160(param_1,plVar13,&local_a8);
      if (*(longlong *)(param_1 + 0x7e8) == 0) {
        FUN_1424fbbf0(param_1,0,plVar13,0);
      }
      else {
        FUN_14250b800(*(longlong *)(param_1 + 0x7e8),plVar13);
      }
      TArray<TRefCountPtr<HHitProxy>,FDefaultAllocator>::operator=
                (*(undefined8 *)(param_1 + 0x7e8),&local_a8);
      FUN_1423424e0(param_1);
      plVar11 = local_a8;
      for (iVar12 = (int)local_a0; iVar12 != 0; iVar12 = iVar12 + -1) {
        puVar10 = (undefined8 *)*plVar11;
        if (puVar10 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar10 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar10)(puVar10,1);
          }
        }
        plVar11 = plVar11 + 1;
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free(local_a8);
      }
      if (plVar13 != (longlong *)0x0) {
        puVar10 = (undefined8 *)*plVar13;
        if (puVar10 != (undefined8 *)0x0) {
          (**(code **)*puVar10)(puVar10,1);
        }
        puVar10 = (undefined8 *)plVar13[4];
        if (puVar10 != (undefined8 *)0x0) {
          (**(code **)*puVar10)(puVar10,1);
        }
        puVar10 = (undefined8 *)plVar13[2];
        if (puVar10 != (undefined8 *)0x0) {
          (**(code **)*puVar10)(puVar10,1);
        }
        FMemory::operator_delete(plVar13,0x38);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x8f2) = 0;
      FUN_1424bcb80(param_1);
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
  }
  else {
    *(undefined1 *)(param_1 + 0x8f1) = 0;
    plVar13 = (longlong *)param_4[1];
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar13 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1424b9550 ApplyComponentInstanceData body=32 status=ok
// SIG undefined ApplyComponentInstanceData(void)

void UHierarchicalInstancedStaticMeshComponent::ApplyComponentInstanceData(undefined8 param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_1424bd460(param_1,0,0);
  return;
}



// FUNCTION 1424b9570 FUN_1424b9570 body=153 status=ok
// SIG undefined FUN_1424b9570(void)

void FUN_1424b9570(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 local_18;
  float local_10;
  
  local_18 = *(undefined8 *)param_2;
  local_10 = param_2[2];
  FUN_1427222d0(local_18,&local_18);
  pfVar4 = *(float **)(param_1 + 0x4b8);
  pfVar5 = pfVar4 + (longlong)*(int *)(param_1 + 0x4c0) * 7;
  if (pfVar4 != pfVar5) {
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    do {
      *pfVar4 = fVar1 + *pfVar4;
      pfVar4[1] = fVar2 + pfVar4[1];
      pfVar4[2] = fVar3 + pfVar4[2];
      pfVar4 = pfVar4 + 7;
    } while (pfVar4 != pfVar5);
  }
  return;
}



// FUNCTION 1424b9610 UseAsyncComputeForStreaming body=33 status=ok
// SIG undefined UseAsyncComputeForStreaming(void)

undefined1 UE::SVT::UseAsyncComputeForStreaming(void)

{
  if (((DAT_146af7634 != 0) && (DAT_146532b98 != 0)) && (DAT_146af7638 == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1424b9640 FUN_1424b9640 body=111 status=ok
// SIG undefined FUN_1424b9640(void)

void FUN_1424b9640(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1 + 8,param_2,L"bUseExtraBoneIndicies",0);
  FShaderParameter::Bind(param_1 + 0x10,param_2,L"PerBoneMotionBlur",0);
  FShaderResourceParameter::Bind(param_1 + 0x16,param_2,L"BoneMatrices",0);
  FShaderResourceParameter::Bind(param_1 + 0x1a,param_2,L"PreviousBoneMatrices",0);
  return;
}



// FUNCTION 1424b96b0 FUN_1424b96b0 body=67 status=ok
// SIG undefined FUN_1424b96b0(void)

void FUN_1424b96b0(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1 + 8,param_2,L"bUseExtraBoneIndicies",0);
  FShaderResourceParameter::Bind(param_1 + 0x10,param_2,L"GPUSkinCachePreviousPositionBuffer",0);
  return;
}



// FUNCTION 1424b9700 Bind body=133 status=ok
// SIG undefined Bind(void)

void FGeometryCacheVertexFactoryShaderParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1 + 8,param_2,L"MeshOrigin",0);
  FShaderParameter::Bind(param_1 + 0xe,param_2,L"MeshExtension",0);
  FShaderParameter::Bind(param_1 + 0x14,param_2,L"MotionBlurDataOrigin",0);
  FShaderParameter::Bind(param_1 + 0x1a,param_2,L"MotionBlurDataExtension",0);
  FShaderParameter::Bind(param_1 + 0x20,param_2,L"MotionBlurPositionScale",0);
  return;
}



// FUNCTION 1424b9790 FUN_1424b9790 body=265 status=ok
// SIG undefined FUN_1424b9790(void)

void FUN_1424b9790(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1 + 8,param_2,L"bUseExtraBoneIndicies",0);
  FShaderParameter::Bind(param_1 + 0x10,param_2,L"PerBoneMotionBlur",0);
  FShaderResourceParameter::Bind(param_1 + 0x16,param_2,L"BoneMatrices",0);
  FShaderResourceParameter::Bind(param_1 + 0x1a,param_2,L"PreviousBoneMatrices",0);
  FShaderResourceParameter::Bind(param_1 + 0x20,param_2,L"ClothSimulVertsPositionsNormals",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x24,param_2,L"PreviousClothSimulVertsPositionsNormals",0);
  FShaderParameter::Bind(param_1 + 0x28,param_2,L"ClothLocalToWorld",0);
  FShaderParameter::Bind(param_1 + 0x2e,param_2,L"PreviousClothLocalToWorld",0);
  FShaderParameter::Bind(param_1 + 0x34,param_2,L"ClothBlendWeight",0);
  FShaderResourceParameter::Bind(param_1 + 0x3a,param_2,L"GPUSkinApexCloth",0);
  FShaderParameter::Bind(param_1 + 0x3e,param_2,L"GPUSkinApexClothStartIndexOffset",0);
  return;
}



// FUNCTION 1424b98a0 Buid2DPolysFromEdges body=1178 status=ok
// SIG undefined Buid2DPolysFromEdges(void)

void FGeomTools::Buid2DPolysFromEdges(longlong *param_1,undefined8 *param_2,float *param_3)

{
  void *_Src;
  bool bVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float *local_c8;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  float *local_a0;
  int local_98;
  undefined4 local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  pfVar12 = (float *)0x0;
  local_98 = *(int *)(param_2 + 1);
  lVar6 = (longlong)local_98;
  _Src = (void *)*param_2;
  local_a0 = (float *)0x0;
  if (local_98 == 0) {
    local_94 = 0;
    fVar19 = fStack_88;
    fVar20 = fStack_84;
    iVar5 = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_a0,local_98,0);
    pfVar12 = local_a0;
    ::_guard_xfg_dispatch_icall_nop(local_a0,_Src,lVar6 << 4);
    fVar19 = fStack_88;
    fVar20 = fStack_84;
    iVar5 = local_98;
  }
  while (0 < iVar5) {
    iVar9 = iVar5 + -1;
    local_c8 = (float *)0x0;
    local_bc = 0;
    pfVar8 = pfVar12 + (longlong)iVar9 * 4;
    local_90 = *pfVar8;
    fStack_8c = pfVar8[1];
    fStack_88 = pfVar8[2];
    fStack_84 = pfVar8[3];
    iVar4 = (iVar5 - iVar9) + -1;
    if (iVar4 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                (pfVar12 + (longlong)iVar9 * 4,pfVar12 + (longlong)iVar5 * 4,(longlong)iVar4 << 4);
    }
    local_98 = iVar9;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_a0);
    fVar17 = fStack_8c;
    fVar18 = local_90;
    fStack_b0 = *param_3;
    fStack_ac = 0.0;
    uStack_a8 = 0;
    uStack_a4 = uStack_a4 & 0xffffff00;
    local_c0 = 1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_c8,0);
    iVar4 = local_c0;
    local_c0 = local_c0 + 1;
    *local_c8 = fVar18;
    local_c8[1] = fVar17;
    local_c8[2] = fStack_b0;
    local_c8[3] = fStack_ac;
    *(ulonglong *)(local_c8 + 4) = CONCAT44(uStack_a4,uStack_a8);
    fStack_b0 = *param_3;
    local_b8 = CONCAT44(fStack_84,fStack_88);
    fStack_ac = 0.0;
    uStack_a8 = 0;
    uStack_a4 = uStack_a4 & 0xffffff00;
    pfVar8 = local_c8;
    pfVar12 = local_a0;
    fVar18 = DAT_146532be8;
    iVar5 = local_98;
    if (local_bc < local_c0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_c8,iVar4);
      pfVar8 = local_c8;
      pfVar12 = local_a0;
      fVar18 = DAT_146532be8;
      iVar5 = local_98;
    }
    while( true ) {
      iVar9 = local_c0;
      fVar17 = 3.4e+38;
      *(undefined8 *)(pfVar8 + (longlong)iVar4 * 6) = local_b8;
      *(ulonglong *)(pfVar8 + (longlong)iVar4 * 6 + 2) = CONCAT44(fStack_ac,fStack_b0);
      *(ulonglong *)(pfVar8 + (longlong)iVar4 * 6 + 4) = CONCAT44(uStack_a4,uStack_a8);
      iVar3 = 0;
      iVar4 = -1;
      pfVar2 = pfVar12;
      if (0 < iVar5) {
        do {
          fVar13 = *pfVar2 - pfVar8[(longlong)(local_c0 + -1) * 6];
          fVar16 = pfVar2[1] - pfVar8[(longlong)(local_c0 + -1) * 6 + 1];
          fVar13 = fVar16 * fVar16 + fVar13 * fVar13;
          if (fVar13 < fVar17) {
            local_90 = *pfVar2;
            fStack_8c = pfVar2[1];
            fVar19 = pfVar2[2];
            fVar20 = pfVar2[3];
            fStack_88 = fVar19;
            fStack_84 = fVar20;
          }
          fVar14 = pfVar2[2] - pfVar8[(longlong)(local_c0 + -1) * 6];
          fVar15 = pfVar2[3] - pfVar8[(longlong)(local_c0 + -1) * 6 + 1];
          fVar16 = fVar13;
          if (fVar17 <= fVar13) {
            fVar16 = fVar17;
          }
          iVar11 = iVar3;
          if (fVar17 <= fVar13) {
            iVar11 = iVar4;
          }
          fVar13 = fVar15 * fVar15 + fVar14 * fVar14;
          fVar17 = fVar16;
          iVar4 = iVar11;
          if (fVar13 < fVar16) {
            fVar19 = *pfVar2;
            fVar20 = pfVar2[1];
            fVar17 = fVar13;
            iVar4 = iVar3;
          }
          iVar3 = iVar3 + 1;
          pfVar2 = pfVar2 + 4;
        } while (iVar3 < iVar5);
      }
      if (fVar18 * fVar18 <= fVar17) {
        bVar1 = false;
      }
      else {
        iVar3 = (iVar5 - iVar4) + -1;
        if (iVar3 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    (pfVar12 + (longlong)iVar4 * 4,pfVar12 + (longlong)(iVar4 + 1) * 4,
                     (longlong)iVar3 << 4);
        }
        local_98 = iVar5 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_a0);
        bVar1 = true;
        pfVar12 = local_a0;
        fVar18 = DAT_146532be8;
        iVar5 = local_98;
      }
      if (!bVar1) break;
      fStack_b0 = *param_3;
      local_b8 = CONCAT44(fVar20,fVar19);
      fStack_ac = 0.0;
      uStack_a8 = 0;
      local_c0 = iVar9 + 1;
      uStack_a4 = uStack_a4 & 0xffffff00;
      iVar4 = iVar9;
      if (local_bc < local_c0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_c8,iVar9);
        pfVar8 = local_c8;
        fVar18 = DAT_146532be8;
      }
    }
    iVar4 = iVar9 + -1;
    if ((3 < iVar9) &&
       ((pfVar8[1] - pfVar8[(longlong)iVar4 * 6 + 1]) *
        (pfVar8[1] - pfVar8[(longlong)iVar4 * 6 + 1]) +
        (*pfVar8 - pfVar8[(longlong)iVar4 * 6]) * (*pfVar8 - pfVar8[(longlong)iVar4 * 6]) <
        fVar18 * fVar18)) {
      iVar3 = (iVar9 - iVar4) + -1;
      if (iVar3 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  (pfVar8 + (longlong)iVar4 * 6,pfVar8 + (longlong)iVar9 * 6,(longlong)iVar3 * 0x18)
        ;
      }
      local_c0 = iVar4;
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(&local_c8);
      FixPolyWinding(&local_c8);
      lVar6 = param_1[1];
      iVar4 = (int)lVar6 + 1;
      *(int *)(param_1 + 1) = iVar4;
      if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1);
      }
      lVar7 = (longlong)local_c0;
      puVar10 = (undefined8 *)((longlong)(int)lVar6 * 0x10 + *param_1);
      *puVar10 = 0;
      *(int *)(puVar10 + 1) = local_c0;
      if (local_c0 == 0) {
        *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
        pfVar8 = local_c8;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar10,local_c0,0);
        pfVar8 = local_c8;
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar10,local_c8,lVar7 * 0x18);
      }
    }
    if (pfVar8 != (float *)0x0) {
      FMemory::Free(pfVar8);
    }
  }
  if (pfVar12 != (float *)0x0) {
    FMemory::Free(pfVar12);
  }
  return;
}



// FUNCTION 1424b9d40 FUN_1424b9d40 body=3635 status=ok
// SIG undefined FUN_1424b9d40(void)

/* WARNING: Removing unreachable block (ram,0x0001424baa82) */
/* WARNING: Removing unreachable block (ram,0x0001424baa9b) */
/* WARNING: Removing unreachable block (ram,0x0001424baab5) */
/* WARNING: Removing unreachable block (ram,0x0001424baacf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424b9d40(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ushort uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  float *pfVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  longlong *plVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_158;
  longlong local_150 [3];
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
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  
  uVar20 = *(uint *)(param_1 + 0x38);
  plVar11 = (longlong *)operator_new(0x38);
  plVar19 = (longlong *)0x0;
  plVar16 = plVar19;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    *(undefined4 *)(plVar11 + 6) = 0;
    *(undefined1 *)((longlong)plVar11 + 0x34) = 1;
    FStaticMeshInstanceData::AllocateBuffers(plVar11,0,0);
    plVar16 = plVar11;
  }
  plVar11 = (longlong *)(param_1 + 0xb0);
  if (plVar11 == local_150) {
    if (plVar16 == (longlong *)0x0) goto LAB_1424b9e48;
    puVar3 = (undefined8 *)*plVar16;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = (undefined8 *)plVar16[4];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = (undefined8 *)plVar16[2];
    plVar15 = plVar16;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  else {
    plVar15 = (longlong *)*plVar11;
    *plVar11 = (longlong)plVar16;
    if (plVar15 == (longlong *)0x0) goto LAB_1424b9e48;
    puVar3 = (undefined8 *)*plVar15;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = (undefined8 *)plVar15[4];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = (undefined8 *)plVar15[2];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FMemory::operator_delete(plVar15,0x38);
LAB_1424b9e48:
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x18);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x28);
  if (0 < iVar1) {
    puVar3 = (undefined8 *)*plVar11;
    *(int *)(puVar3 + 6) = iVar1;
    (**(code **)(*(longlong *)*puVar3 + 8))((longlong *)*puVar3,iVar1,0);
    uVar12 = (**(code **)(*(longlong *)*puVar3 + 0x30))();
    puVar3[1] = uVar12;
    (**(code **)(*(longlong *)puVar3[4] + 8))((longlong *)puVar3[4],*(undefined4 *)(puVar3 + 6),0);
    uVar12 = (**(code **)(*(longlong *)puVar3[4] + 0x30))();
    puVar3[5] = uVar12;
    (**(code **)(*(longlong *)puVar3[2] + 8))((longlong *)puVar3[2],*(undefined4 *)(puVar3 + 6),0);
    uVar12 = (**(code **)(*(longlong *)puVar3[2] + 0x30))();
    puVar3[3] = uVar12;
    local_150[0] = (longlong)iVar2;
    if (0 < iVar2) {
      do {
        uVar20 = uVar20 * 0xbb38435 + 0x3619636b;
        iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x20) + (longlong)plVar19 * 4
                        );
        lVar17 = (longlong)iVar1;
        local_158 = (float)(uVar20 & 0x7fffff | 0x3f800000);
        if (-1 < iVar1) {
          puVar3 = (undefined8 *)*plVar11;
          pfVar13 = (float *)((longlong)plVar19 * 0x30 + *(longlong *)(param_1 + 0x60));
          local_158 = local_158 - (float)(int)local_158;
          fVar5 = *pfVar13;
          fVar6 = pfVar13[1];
          fVar7 = pfVar13[2];
          fVar21 = pfVar13[3];
          fVar23 = fVar6 + fVar6;
          fVar25 = fVar7 + fVar7;
          fVar26 = fVar5 * (fVar5 + fVar5);
          fVar24 = (fVar5 + fVar5) * fVar21;
          fVar22 = pfVar13[8];
          fVar8 = pfVar13[9];
          fVar9 = pfVar13[10];
          fVar28 = (fVar25 * fVar21 + fVar23 * fVar5) * fVar22;
          local_138 = (fVar24 + fVar25 * fVar6) * fVar8;
          fVar29 = (fVar23 * fVar21 + fVar25 * fVar5) * fVar9;
          fVar27 = fVar8 * (fVar23 * fVar5 - fVar25 * fVar21);
          local_128 = fVar9 * (fVar25 * fVar6 - fVar24);
          fVar24 = fVar22 * (fVar25 * fVar5 - fVar23 * fVar21);
          fVar21 = (float)((uint)((_DAT_146af9d10 - (fVar7 * fVar25 + fVar6 * fVar23)) * fVar22) &
                          _DAT_146af7650);
          fVar22 = (float)((uint)((fRam0000000146af9d14 - (fVar7 * fVar25 + fVar26)) * fVar8) &
                          uRam0000000146af7654);
          local_118 = (float)((uint)((fRam0000000146af9d18 - (fVar6 * fVar23 + fVar26)) * fVar9) &
                             uRam0000000146af7658);
          fVar5 = pfVar13[4];
          fVar6 = pfVar13[5];
          fVar7 = pfVar13[6];
          uStack_cc = uRam0000000146af9d1c;
          if (0.0 <= ((fVar22 * local_118 - local_128 * local_138) * fVar21 -
                     (fVar28 * local_118 - fVar24 * local_128) * fVar27) +
                     (fVar28 * local_138 - fVar24 * fVar22) * fVar29) {
            local_158 = (float)((uint)local_158 & 0xfffffffe);
          }
          else {
            local_158 = (float)((uint)local_158 | 1);
          }
          lVar4 = puVar3[1];
          fStack_134 = local_138;
          fStack_130 = local_138;
          fStack_12c = local_138;
          fStack_124 = local_128;
          fStack_120 = local_128;
          fStack_11c = local_128;
          fStack_114 = local_118;
          fStack_110 = local_118;
          fStack_10c = local_118;
          local_d8 = fVar5;
          fStack_d4 = fVar6;
          fStack_d0 = fVar7;
          (**(code **)(*(longlong *)*puVar3 + 0x28))();
          (**(code **)(*(longlong *)*puVar3 + 0x20))();
          pfVar13 = (float *)(lVar4 + lVar17 * 0x10);
          *pfVar13 = fVar5;
          pfVar13[1] = fVar6;
          pfVar13[2] = fVar7;
          pfVar13[3] = local_158;
          lVar4 = puVar3[3];
          if (*(char *)((longlong)puVar3 + 0x34) == '\0') {
            (**(code **)(*(longlong *)puVar3[2] + 0x28))();
            (**(code **)(*(longlong *)puVar3[2] + 0x20))();
            *(float *)(lVar4 + lVar17 * 0x30) = fVar21;
            *(float *)(lVar4 + 4 + lVar17 * 0x30) = fVar28;
            *(float *)(lVar4 + 8 + lVar17 * 0x30) = fVar24;
            *(undefined4 *)(lVar4 + 0xc + lVar17 * 0x30) = 0;
            *(float *)(lVar4 + 0x10 + lVar17 * 0x30) = fVar27;
            *(float *)(lVar4 + 0x14 + lVar17 * 0x30) = fVar22;
            *(float *)(lVar4 + 0x18 + lVar17 * 0x30) = local_138;
            *(undefined4 *)(lVar4 + 0x1c + lVar17 * 0x30) = 0;
            *(float *)(lVar4 + 0x20 + lVar17 * 0x30) = fVar29;
            *(float *)(lVar4 + 0x24 + lVar17 * 0x30) = local_128;
            *(float *)(lVar4 + 0x28 + lVar17 * 0x30) = local_118;
            *(undefined4 *)(lVar4 + 0x2c + lVar17 * 0x30) = 0;
          }
          else {
            (**(code **)(*(longlong *)puVar3[2] + 0x28))();
            (**(code **)(*(longlong *)puVar3[2] + 0x20))();
            uVar10 = (ushort)((uint)fVar21 >> 0x10);
            uVar14 = (uint)fVar21 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              *(ushort *)(lVar4 + lVar17 * 0x18) = uVar10 & 0x8000;
              iVar1 = -uVar14 + 0x7e;
              if (iVar1 < 0x19) {
                uVar18 = (uint)fVar21 & 0x7fffff | 0x800000;
                uVar10 = (ushort)(uVar18 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
                *(ushort *)(lVar4 + lVar17 * 0x18) = uVar10;
                if ((uVar18 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar4 + lVar17 * 0x18) = uVar10 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar4 + lVar17 * 0x18) =
                   (ushort)((uint)fVar21 >> 0xd) & 0x3ff | ((uVar10 >> 7) - 0x10 & 0x1f) << 10 |
                   uVar10 & 0x8000;
            }
            else {
              *(ushort *)(lVar4 + lVar17 * 0x18) =
                   uVar10 & 0x8000 | *(ushort *)(lVar4 + lVar17 * 0x18) & 0x7bff | 0x7bff;
            }
            uVar10 = (ushort)((uint)fVar28 >> 0x10);
            uVar14 = (uint)fVar28 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              *(ushort *)(lVar4 + 2 + lVar17 * 0x18) = uVar10 & 0x8000;
              iVar1 = -uVar14 + 0x7e;
              if (iVar1 < 0x19) {
                uVar18 = (uint)fVar28 & 0x7fffff | 0x800000;
                uVar10 = (ushort)(uVar18 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
                *(ushort *)(lVar4 + 2 + lVar17 * 0x18) = uVar10;
                if ((uVar18 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar4 + 2 + lVar17 * 0x18) = uVar10 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar4 + 2 + lVar17 * 0x18) =
                   ((uVar10 >> 7) - 0x10 & 0x1f) << 10 | (ushort)((uint)fVar28 >> 0xd) & 0x3ff |
                   uVar10 & 0x8000;
            }
            else {
              *(ushort *)(lVar4 + 2 + lVar17 * 0x18) =
                   uVar10 & 0x8000 | *(ushort *)(lVar4 + 2 + lVar17 * 0x18) & 0x7bff | 0x7bff;
            }
            uVar10 = (ushort)((uint)fVar24 >> 0x10);
            uVar14 = (uint)fVar24 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              *(ushort *)(lVar4 + 4 + lVar17 * 0x18) = uVar10 & 0x8000;
              iVar1 = -uVar14 + 0x7e;
              if (iVar1 < 0x19) {
                uVar18 = (uint)fVar24 & 0x7fffff | 0x800000;
                uVar10 = (ushort)(uVar18 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
                *(ushort *)(lVar4 + 4 + lVar17 * 0x18) = uVar10;
                if ((uVar18 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar4 + 4 + lVar17 * 0x18) = uVar10 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar4 + 4 + lVar17 * 0x18) =
                   ((uVar10 >> 7) - 0x10 & 0x1f) << 10 | (ushort)((uint)fVar24 >> 0xd) & 0x3ff |
                   uVar10 & 0x8000;
            }
            else {
              *(ushort *)(lVar4 + 4 + lVar17 * 0x18) =
                   uVar10 & 0x8000 | *(ushort *)(lVar4 + 4 + lVar17 * 0x18) & 0x7bff | 0x7bff;
            }
            uVar10 = (ushort)((uint)fVar27 >> 0x10);
            *(undefined2 *)(lVar4 + 6 + lVar17 * 0x18) = 0;
            uVar14 = (uint)fVar27 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              *(ushort *)(lVar4 + 8 + lVar17 * 0x18) = uVar10 & 0x8000;
              iVar1 = -uVar14 + 0x7e;
              if (iVar1 < 0x19) {
                uVar18 = (uint)fVar27 & 0x7fffff | 0x800000;
                uVar10 = (ushort)(uVar18 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
                *(ushort *)(lVar4 + 8 + lVar17 * 0x18) = uVar10;
                if ((uVar18 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar4 + 8 + lVar17 * 0x18) = uVar10 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar4 + 8 + lVar17 * 0x18) =
                   (ushort)((uint)fVar27 >> 0xd) & 0x3ff | ((uVar10 >> 7) - 0x10 & 0x1f) << 10 |
                   uVar10 & 0x8000;
            }
            else {
              *(ushort *)(lVar4 + 8 + lVar17 * 0x18) =
                   uVar10 & 0x8000 | *(ushort *)(lVar4 + 8 + lVar17 * 0x18) & 0x7bff | 0x7bff;
            }
            uVar10 = (ushort)((uint)fVar22 >> 0x10);
            uVar14 = (uint)fVar22 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              *(ushort *)(lVar4 + 10 + lVar17 * 0x18) = uVar10 & 0x8000;
              iVar1 = -uVar14 + 0x7e;
              if (iVar1 < 0x19) {
                uVar18 = (uint)fVar22 & 0x7fffff | 0x800000;
                uVar10 = (ushort)(uVar18 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
                *(ushort *)(lVar4 + 10 + lVar17 * 0x18) = uVar10;
                if ((uVar18 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar4 + 10 + lVar17 * 0x18) = uVar10 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar4 + 10 + lVar17 * 0x18) =
                   (ushort)((uint)fVar22 >> 0xd) & 0x3ff | ((uVar10 >> 7) - 0x10 & 0x1f) << 10 |
                   uVar10 & 0x8000;
            }
            else {
              *(ushort *)(lVar4 + 10 + lVar17 * 0x18) =
                   uVar10 & 0x8000 | *(ushort *)(lVar4 + 10 + lVar17 * 0x18) & 0x7bff | 0x7bff;
            }
            uVar10 = (ushort)((uint)local_138 >> 0x10);
            uVar14 = (uint)local_138 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              *(ushort *)(lVar4 + 0xc + lVar17 * 0x18) = uVar10 & 0x8000;
              iVar1 = -uVar14 + 0x7e;
              if (iVar1 < 0x19) {
                uVar18 = (uint)local_138 & 0x7fffff | 0x800000;
                uVar10 = (ushort)(uVar18 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
                *(ushort *)(lVar4 + 0xc + lVar17 * 0x18) = uVar10;
                if ((uVar18 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar4 + 0xc + lVar17 * 0x18) = uVar10 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar4 + 0xc + lVar17 * 0x18) =
                   (ushort)((uint)local_138 >> 0xd) & 0x3ff | ((uVar10 >> 7) - 0x10 & 0x1f) << 10 |
                   uVar10 & 0x8000;
            }
            else {
              *(ushort *)(lVar4 + 0xc + lVar17 * 0x18) =
                   uVar10 & 0x8000 | *(ushort *)(lVar4 + 0xc + lVar17 * 0x18) & 0x7bff | 0x7bff;
            }
            uVar10 = (ushort)((uint)fVar29 >> 0x10);
            *(undefined2 *)(lVar4 + 0xe + lVar17 * 0x18) = 0;
            uVar14 = (uint)fVar29 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              *(ushort *)(lVar4 + 0x10 + lVar17 * 0x18) = uVar10 & 0x8000;
              iVar1 = -uVar14 + 0x7e;
              if (iVar1 < 0x19) {
                uVar18 = (uint)fVar29 & 0x7fffff | 0x800000;
                uVar10 = (ushort)(uVar18 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
                *(ushort *)(lVar4 + 0x10 + lVar17 * 0x18) = uVar10;
                if ((uVar18 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar4 + 0x10 + lVar17 * 0x18) = uVar10 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar4 + 0x10 + lVar17 * 0x18) =
                   (ushort)((uint)fVar29 >> 0xd) & 0x3ff | ((uVar10 >> 7) - 0x10 & 0x1f) << 10 |
                   uVar10 & 0x8000;
            }
            else {
              *(ushort *)(lVar4 + 0x10 + lVar17 * 0x18) =
                   uVar10 & 0x8000 | *(ushort *)(lVar4 + 0x10 + lVar17 * 0x18) & 0x7bff | 0x7bff;
            }
            uVar10 = (ushort)((uint)local_128 >> 0x10);
            uVar14 = (uint)local_128 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              *(ushort *)(lVar4 + 0x12 + lVar17 * 0x18) = uVar10 & 0x8000;
              iVar1 = -uVar14 + 0x7e;
              if (iVar1 < 0x19) {
                uVar18 = (uint)local_128 & 0x7fffff | 0x800000;
                uVar10 = (ushort)(uVar18 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
                *(ushort *)(lVar4 + 0x12 + lVar17 * 0x18) = uVar10;
                if ((uVar18 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar4 + 0x12 + lVar17 * 0x18) = uVar10 + 1;
                }
              }
            }
            else if (uVar14 < 0x8f) {
              *(ushort *)(lVar4 + 0x12 + lVar17 * 0x18) =
                   (ushort)((uint)local_128 >> 0xd) & 0x3ff | ((uVar10 >> 7) - 0x10 & 0x1f) << 10 |
                   uVar10 & 0x8000;
            }
            else {
              *(ushort *)(lVar4 + 0x12 + lVar17 * 0x18) =
                   uVar10 & 0x8000 | *(ushort *)(lVar4 + 0x12 + lVar17 * 0x18) & 0x7bff | 0x7bff;
            }
            uVar10 = (ushort)((uint)local_118 >> 0x10);
            uVar14 = (uint)local_118 >> 0x17 & 0xff;
            if (uVar14 < 0x71) {
              *(ushort *)(lVar4 + 0x14 + lVar17 * 0x18) = uVar10 & 0x8000;
              iVar1 = -uVar14 + 0x7e;
              if (iVar1 < 0x19) {
                uVar18 = (uint)local_118 & 0x7fffff | 0x800000;
                uVar10 = (ushort)(uVar18 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
                *(ushort *)(lVar4 + 0x14 + lVar17 * 0x18) = uVar10;
                if ((uVar18 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
                  *(ushort *)(lVar4 + 0x14 + lVar17 * 0x18) = uVar10 + 1;
                  *(undefined2 *)(lVar4 + 0x16 + lVar17 * 0x18) = 0;
                  goto LAB_1424baa56;
                }
              }
            }
            else {
              if (0x8e < uVar14) {
                *(ushort *)(lVar4 + 0x14 + lVar17 * 0x18) =
                     uVar10 & 0x8000 | *(ushort *)(lVar4 + 0x14 + lVar17 * 0x18) & 0x7bff | 0x7bff;
                *(undefined2 *)(lVar4 + 0x16 + lVar17 * 0x18) = 0;
                goto LAB_1424baa56;
              }
              *(ushort *)(lVar4 + 0x14 + lVar17 * 0x18) =
                   (ushort)((uint)local_118 >> 0xd) & 0x3ff | ((uVar10 >> 7) - 0x10 & 0x1f) << 10 |
                   uVar10 & 0x8000;
            }
            *(undefined2 *)(lVar4 + 0x16 + lVar17 * 0x18) = 0;
          }
LAB_1424baa56:
          lVar4 = puVar3[5];
          (**(code **)(*(longlong *)puVar3[4] + 0x28))();
          (**(code **)(*(longlong *)puVar3[4] + 0x20))();
          *(undefined2 *)(lVar4 + lVar17 * 8) = 0x8001;
          *(undefined2 *)(lVar4 + 2 + lVar17 * 8) = 0x8001;
          *(undefined2 *)(lVar4 + 4 + lVar17 * 8) = 0x8001;
          *(undefined2 *)(lVar4 + 6 + lVar17 * 8) = 0x8001;
        }
        plVar19 = (longlong *)((longlong)plVar19 + 1);
      } while ((longlong)plVar19 < local_150[0]);
    }
  }
  return;
}



// FUNCTION 1424bab80 FUN_1424bab80 body=5326 status=ok
// SIG undefined FUN_1424bab80(void)

void FUN_1424bab80(uint *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  uint **ppuVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  uint *puVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  int *piVar27;
  uint *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  int *piVar31;
  int iVar32;
  ulonglong uVar33;
  uint uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint uVar37;
  uint **ppuVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  longlong lVar42;
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
  undefined1 local_237;
  undefined8 local_230;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  uint local_218;
  uint local_210;
  int local_20c;
  int *local_208;
  uint local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int *local_1f0;
  int *local_1e8;
  int local_1e0;
  int local_1dc;
  undefined1 local_1d8 [4];
  int local_1d4;
  int local_1d0;
  uint local_1cc;
  uint *local_1c8;
  int *local_1c0;
  int *local_1b8;
  longlong local_1b0;
  uint **local_1a8;
  undefined8 *local_1a0;
  uint *local_198;
  longlong local_190;
  uint uStack_188;
  uint uStack_184;
  undefined8 local_180;
  undefined8 uStack_178;
  float local_170;
  float fStack_16c;
  uint local_168;
  float local_160;
  longlong local_158;
  uint local_150;
  int local_14c;
  longlong local_148;
  uint local_140;
  int local_13c;
  int *local_138;
  uint local_130;
  int local_12c;
  longlong local_128;
  float local_120;
  longlong local_118;
  float local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c8;
  uint *local_c0 [2];
  float local_b0;
  float local_a4;
  float local_98;
  
  local_1c8 = param_1;
  FUN_1424c9660();
  puVar20 = (uint *)operator_new(0x38);
  puVar28 = (uint *)0x0;
  puVar23 = puVar28;
  if (puVar20 != (uint *)0x0) {
    puVar20[0xc] = 0;
    puVar20[0xd] = 0;
    puVar20[0] = 0;
    puVar20[1] = 0;
    puVar20[2] = 0;
    puVar20[3] = 0;
    puVar20[4] = 0;
    puVar20[5] = 0;
    puVar20[6] = 0;
    puVar20[7] = 0;
    puVar20[8] = 0;
    puVar20[9] = 0;
    puVar20[10] = 0;
    puVar20[0xb] = 0;
    puVar23 = puVar20;
  }
  ppuVar38 = (uint **)(param_1 + 0x2a);
  local_1a8 = ppuVar38;
  if (ppuVar38 == local_c0) {
    if (puVar23 == (uint *)0x0) goto LAB_1424bac6e;
    if (*(longlong *)(puVar23 + 8) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(puVar23 + 4) != 0) {
      FMemory::Free();
    }
    puVar20 = puVar23;
    if (*(longlong *)puVar23 != 0) {
      FMemory::Free();
    }
  }
  else {
    puVar20 = *ppuVar38;
    *ppuVar38 = puVar23;
    if (puVar20 == (uint *)0x0) goto LAB_1424bac6e;
    if (*(longlong *)(puVar20 + 8) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(puVar20 + 4) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)puVar20 != 0) {
      FMemory::Free();
    }
  }
  FMemory::operator_delete(puVar20,0x38);
LAB_1424bac6e:
  uVar40 = param_1[1];
  if (uVar40 == 0) {
    puVar23 = *ppuVar38;
    uVar40 = *param_1;
    uVar29 = (ulonglong)uVar40;
    puVar23[10] = 0;
    if (puVar23[0xb] != uVar40) {
      TArray<float,FDefaultAllocator>::ResizeTo(puVar23 + 8,uVar40);
    }
    if (0 < (int)uVar40) {
      do {
        uVar40 = puVar23[10];
        puVar23[10] = uVar40 + 1;
        if ((int)puVar23[0xb] < (int)(uVar40 + 1)) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(puVar23 + 8,uVar40);
        }
        puVar1 = (undefined4 *)(*(longlong *)(puVar23 + 8) + (longlong)(int)uVar40 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0xffffffff;
        }
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
    }
  }
  else {
    uVar37 = param_1[0xc];
    bVar15 = false;
    bVar16 = false;
    param_1[9] = uVar37;
    if (((2 < (int)uVar37) && (uVar18 = param_1[0xb], uVar18 != 0)) &&
       ((int)uVar40 / (int)uVar37 <= (int)uVar18)) {
      param_1[0xb] = 0;
      bVar15 = true;
      bVar16 = true;
      uVar18 = (int)((uVar40 - 1) + uVar18) / (int)uVar18;
      if ((int)uVar18 < 3) {
        uVar18 = 2;
      }
      param_1[9] = uVar18;
    }
    FUN_1424d56a0(param_1,uVar40);
    if (bVar15) {
      bVar16 = false;
      (*ppuVar38)[0xc] = param_1[0x24];
    }
    puVar23 = *ppuVar38;
    local_c0[0] = param_1 + 0x10;
    uVar40 = param_1[0x12];
    puVar20 = puVar23 + 4;
    local_198 = puVar20;
    if (uVar40 != 0) {
      uVar37 = puVar23[6];
      if ((int)puVar23[7] < (int)(uVar37 + uVar40)) {
        TArray<float,FDefaultAllocator>::ResizeTo(puVar20);
        uVar37 = puVar23[6];
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)puVar20 + (longlong)(int)uVar37 * 4),
                 *(void **)(param_1 + 0x10),(longlong)(int)uVar40 << 2);
      puVar23[6] = puVar23[6] + uVar40;
    }
    uVar40 = param_1[0x24];
    uVar29 = (ulonglong)uVar40;
    puVar23 = *ppuVar38;
    param_1[0xd] = uVar40;
    local_108 = 0x7f7fffff;
    uStack_104 = 0x7f7fffff;
    uStack_100 = 0x7f7fffff;
    uStack_fc = 0xffffffff;
    local_f8 = 0x800000;
    uStack_f4 = 0x800000;
    uStack_f0 = 0x800000;
    uStack_ec = 0xffffffff;
    uStack_e8 = 0xffffffff;
    uStack_e4 = 0xffffffff;
    uStack_e0 = 0x7f7fffff;
    uStack_dc = 0x7f7fffff;
    uStack_d8 = 0x7f7fffff;
    uStack_d4 = 0xff7fffff;
    local_d0 = 0xff7fffff;
    local_cc = 0xff7fffff;
    puVar23[2] = 0;
    if (puVar23[3] != uVar40) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(puVar23,uVar40);
    }
    if (0 < (int)uVar40) {
      uVar13 = CONCAT44(uStack_d4,uStack_d8);
      uVar14 = CONCAT44(local_cc,local_d0);
      uVar11 = CONCAT44(uStack_e4,uStack_e8);
      uVar12 = CONCAT44(uStack_dc,uStack_e0);
      uVar9 = CONCAT44(uStack_f4,local_f8);
      uVar10 = CONCAT44(uStack_ec,uStack_f0);
      uVar7 = CONCAT44(uStack_104,local_108);
      uVar8 = CONCAT44(uStack_fc,uStack_100);
      do {
        uVar40 = puVar23[2];
        puVar23[2] = uVar40 + 1;
        if ((int)puVar23[3] < (int)(uVar40 + 1)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(puVar23,uVar40);
        }
        puVar21 = (undefined8 *)((longlong)(int)uVar40 * 0x40 + *(longlong *)puVar23);
        if (puVar21 != (undefined8 *)0x0) {
          *puVar21 = uVar7;
          puVar21[1] = uVar8;
          puVar21[2] = uVar9;
          puVar21[3] = uVar10;
          puVar21[4] = uVar11;
          puVar21[5] = uVar12;
          puVar21[6] = uVar13;
          puVar21[7] = uVar14;
        }
        uVar29 = uVar29 - 1;
        puVar20 = local_198;
      } while (uVar29 != 0);
    }
    local_210 = 0;
    if (0 < (int)param_1[0xd]) {
      local_1a0 = (undefined8 *)0x0;
      puVar23 = puVar28;
      do {
        uVar37 = 0;
        lVar26 = **(longlong **)(param_1 + 0x2a);
        iVar39 = *(int *)(*(longlong *)(param_1 + 0x22) + (longlong)local_1a0);
        uVar29 = (ulonglong)iVar39;
        *(int *)((longlong)puVar28 + lVar26 + 0x20) = iVar39;
        iVar24 = *(int *)(*(longlong *)(param_1 + 0x22) + (longlong)local_1a0) + -1 +
                 *(int *)(*(longlong *)(param_1 + 0x22) + 4 + (longlong)local_1a0);
        *(int *)((longlong)puVar28 + lVar26 + 0x24) = iVar24;
        fStack_224 = DAT_1468b5d90;
        fStack_220 = DAT_1468b5d94;
        fStack_21c = DAT_1468b5d98;
        local_230 = (undefined8 *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        fStack_228 = DAT_1468b5d98;
        uVar40 = (uint)puVar23;
        if (iVar39 <= iVar24) {
          puVar23 = param_1 + 2;
          lVar42 = uVar29 * 4;
          fVar48 = DAT_1468b5d90;
          fVar49 = DAT_1468b5d94;
          fVar51 = DAT_1468b5d98;
          fVar53 = DAT_1468b5d90;
          fVar43 = DAT_1468b5d94;
          fVar50 = DAT_1468b5d98;
          do {
            lVar30 = (longlong)*(int *)(*(longlong *)puVar20 + lVar42) * 0x30 +
                     *(longlong *)(local_1c8 + 0x18);
            FBox::TransformBy(puVar23,&local_180,lVar30);
            if ((char)uVar37 == '\0') {
              if ((char)local_168 != '\0') {
                uVar37 = local_168 & 0xff;
                local_218 = local_168;
                fStack_220 = local_170;
                fStack_21c = fStack_16c;
                local_230 = (undefined8 *)local_180;
                fStack_228 = (float)uStack_178;
                fStack_224 = uStack_178._4_4_;
                fVar48 = uStack_178._4_4_;
                fVar49 = local_170;
                fVar51 = fStack_16c;
                fVar53 = (float)local_180;
                fVar43 = local_180._4_4_;
                fVar50 = (float)uStack_178;
              }
            }
            else if ((char)local_168 != '\0') {
              if ((float)local_180 < fVar53) {
                local_230 = (undefined8 *)CONCAT44(local_230._4_4_,(float)local_180);
                fVar53 = (float)local_180;
              }
              if (local_180._4_4_ < fVar43) {
                local_230 = (undefined8 *)CONCAT44(local_180._4_4_,(uint)local_230);
                fVar43 = local_180._4_4_;
              }
              if ((float)uStack_178 < fVar50) {
                fStack_228 = (float)uStack_178;
                fVar50 = (float)uStack_178;
              }
              if (fVar48 < uStack_178._4_4_) {
                fStack_224 = uStack_178._4_4_;
                fVar48 = uStack_178._4_4_;
              }
              if (fVar49 < local_170) {
                fStack_220 = local_170;
                fVar49 = local_170;
              }
              if (fVar51 < fStack_16c) {
                fStack_21c = fStack_16c;
                fVar51 = fStack_16c;
              }
            }
            fVar52 = *(float *)(lVar30 + 0x20);
            fVar45 = *(float *)(lVar30 + 0x24);
            fVar47 = *(float *)(lVar30 + 0x28);
            uVar18 = (int)uVar29 + 1;
            uVar29 = (ulonglong)uVar18;
            local_120 = *(float *)((longlong)puVar28 + lVar26 + 0x30);
            fVar44 = *(float *)((longlong)puVar28 + lVar26 + 0x28);
            fVar46 = fVar52;
            if (fVar44 <= fVar52) {
              fVar46 = fVar44;
            }
            fVar44 = *(float *)((longlong)puVar28 + lVar26 + 0x2c);
            lVar42 = lVar42 + 4;
            if (fVar47 <= local_120) {
              local_120 = fVar47;
            }
            if (fVar45 <= fVar44) {
              fVar44 = fVar45;
            }
            *(ulonglong *)((longlong)puVar28 + lVar26 + 0x28) = CONCAT44(fVar44,fVar46);
            *(float *)((longlong)puVar28 + lVar26 + 0x30) = local_120;
            fVar44 = *(float *)((longlong)puVar28 + lVar26 + 0x34);
            fVar46 = *(float *)((longlong)puVar28 + lVar26 + 0x38);
            if (fVar44 <= fVar52) {
              fVar44 = fVar52;
            }
            local_110 = *(float *)((longlong)puVar28 + lVar26 + 0x3c);
            if (fVar46 <= fVar45) {
              fVar46 = fVar45;
            }
            if (local_110 <= fVar47) {
              local_110 = fVar47;
            }
            *(ulonglong *)((longlong)puVar28 + lVar26 + 0x34) = CONCAT44(fVar46,fVar44);
            *(float *)((longlong)puVar28 + lVar26 + 0x3c) = local_110;
            puVar20 = local_198;
            param_1 = local_1c8;
            uVar40 = local_210;
          } while ((int)uVar18 <= *(int *)((longlong)puVar28 + lVar26 + 0x24));
        }
        local_210 = uVar40 + 1;
        puVar23 = (uint *)(ulonglong)local_210;
        local_1a0 = (undefined8 *)((longlong)local_1a0 + 8);
        *(undefined8 **)((longlong)puVar28 + lVar26) = local_230;
        *(float *)((longlong)puVar28 + lVar26 + 8) = fStack_228;
        *(ulonglong *)((longlong)puVar28 + lVar26 + 0x10) = CONCAT44(fStack_220,fStack_224);
        *(float *)((longlong)puVar28 + lVar26 + 0x18) = fStack_21c;
        puVar28 = puVar28 + 0x10;
        puVar20 = local_198;
        ppuVar38 = local_1a8;
      } while ((int)local_210 < (int)param_1[0xd]);
    }
    local_180 = (uint *)0x0;
    uStack_178 = 1;
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_180,0);
    local_1a8 = (uint **)local_180;
    local_150 = 0;
    *local_180 = param_1[0xd];
    local_128 = 0;
    local_158 = 0;
    local_1d4 = 0;
    local_14c = 0;
    local_20c = 0;
    local_1fc = 0;
    local_118 = 0;
    local_148 = 0;
    local_1d0 = 0;
    local_13c = 0;
    local_1b0 = 0;
    local_190 = 0;
    local_1cc = 0;
    uStack_184 = 0;
    local_1c0 = (int *)0x0;
    local_1e8 = (int *)0x0;
    local_1f8 = 0;
    local_1dc = 0;
    local_1b8 = (int *)0x0;
    local_138 = (int *)0x0;
    local_210 = 0;
    local_12c = 0;
    local_1a0 = (undefined8 *)0x0;
    local_230 = (undefined8 *)0x0;
    local_160 = 0.0;
    fStack_228 = 0.0;
    local_1f0 = (int *)0x0;
    local_208 = (int *)0x0;
    local_200 = 0;
    local_140 = 0;
    uStack_188 = 0;
    local_1e0 = 0;
    local_130 = 0;
    fStack_224 = 0.0;
    if (1 < (int)param_1[0xd]) {
      local_230._0_4_ = 0;
      local_230._4_4_ = 0;
      local_1f4 = (int)(float)uStack_178;
      uVar40 = (uint)local_230;
      uVar37 = local_230._4_4_;
      fVar48 = 0.0;
      fVar49 = 0.0;
      do {
        piVar31 = local_1f0;
        uVar29 = 0;
        param_1[0x12] = 0;
        if (0x7fffffff < param_1[0x13]) {
          TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
        }
        param_1[0x16] = 0;
        if (((int)param_1[0x17] < 0) && (param_1[0x17] != 0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(param_1 + 0x14,0);
        }
        uVar18 = param_1[0x12];
        param_1[0x12] = param_1[0xd] + uVar18;
        if ((int)param_1[0x13] < (int)(param_1[0xd] + uVar18)) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x10);
        }
        uVar18 = param_1[0x16];
        param_1[0x16] = param_1[0xd] + uVar18;
        if ((int)param_1[0x17] < (int)(param_1[0xd] + uVar18)) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x14);
        }
        uVar18 = param_1[0xd];
        uVar22 = uVar29;
        uVar33 = uVar29;
        uVar36 = uVar29;
        uVar35 = uVar29;
        if (0 < (int)uVar18) {
          do {
            *(int *)(uVar35 + *(longlong *)(param_1 + 0x10)) = (int)uVar36;
            uVar34 = (int)uVar36 + 1;
            lVar26 = *(longlong *)*ppuVar38;
            lVar42 = *(longlong *)(param_1 + 0x14);
            local_b0 = (*(float *)(uVar22 + 0x18 + lVar26) + *(float *)(uVar22 + 8 + lVar26)) * 0.5;
            *(ulonglong *)(uVar33 + lVar42) =
                 CONCAT44((*(float *)(uVar22 + 0x14 + lVar26) + *(float *)(uVar22 + 4 + lVar26)) *
                          0.5,(*(float *)(uVar22 + lVar26) + *(float *)(uVar22 + 0x10 + lVar26)) *
                              0.5);
            *(float *)(uVar33 + 8 + lVar42) = local_b0;
            uVar18 = param_1[0xd];
            uVar22 = uVar22 + 0x40;
            uVar33 = uVar33 + 0xc;
            uVar36 = (ulonglong)uVar34;
            uVar35 = uVar35 + 4;
          } while ((int)uVar34 < (int)uVar18);
        }
        uVar34 = param_1[10];
        param_1[9] = uVar34;
        if (((2 < (int)uVar34) && (uVar19 = param_1[0xb], uVar19 != 0)) &&
           (uVar18 = param_1[0xd], (int)uVar18 / (int)uVar34 <= (int)uVar19)) {
          param_1[0xb] = 0;
          bVar16 = true;
          uVar19 = (int)((uVar19 - 1) + uVar18) / (int)uVar19;
          if ((int)uVar19 < 3) {
            uVar19 = 2;
          }
          param_1[9] = uVar19;
        }
        param_1[0x24] = 0;
        if (((int)param_1[0x25] < 0) && (param_1[0x25] != 0)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x22,0);
        }
        FUN_1424d5720(param_1,0,uVar18 - 1);
        AlgoImpl::
        IntroSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_>
                  (*(undefined8 *)(param_1 + 0x22),(longlong)(int)param_1[0x24],local_237,local_1d8)
        ;
        if (bVar16) {
          bVar16 = false;
          (*ppuVar38)[0xc] = param_1[0x24];
        }
        uVar22 = uVar29;
        if ((local_1d4 < 0) && (local_150 = 0, local_1d4 != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(&local_158,0);
          local_128 = local_158;
          local_1d4 = local_14c;
          uVar22 = (ulonglong)local_150;
        }
        uVar18 = param_1[0xd];
        local_150 = uVar18 + (int)uVar22;
        if (local_1d4 < (int)local_150) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_158);
          uVar18 = param_1[0xd];
          local_128 = local_158;
          local_1d4 = local_14c;
        }
        uVar22 = uVar29;
        uVar33 = uVar29;
        if (0 < (int)uVar18) {
          do {
            *(int *)(local_128 + (longlong)*(int *)(uVar33 + *(longlong *)(param_1 + 0x10)) * 4) =
                 (int)uVar22;
            uVar18 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar18;
            uVar33 = uVar33 + 4;
          } while ((int)uVar18 < (int)param_1[0xd]);
        }
        uVar22 = uVar29;
        if ((local_20c < 0) && (local_200 = 0, local_20c != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(&local_208,0);
          uVar22 = (ulonglong)local_200;
          local_1f0 = local_208;
          local_20c = local_1fc;
          piVar31 = local_208;
        }
        local_200 = param_1[1] + (int)uVar22;
        if (local_20c < (int)local_200) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_208);
          local_1f0 = local_208;
          local_20c = local_1fc;
          piVar31 = local_208;
        }
        iVar39 = local_20c;
        uVar22 = uVar29;
        uVar33 = uVar29;
        uVar36 = uVar29;
        if (0 < (int)param_1[0xd]) {
          do {
            lVar26 = (longlong)*(int *)(uVar33 + *(longlong *)(param_1 + 0x10)) * 0x40 +
                     *(longlong *)*ppuVar38;
            iVar24 = *(int *)(lVar26 + 0x20);
            if (iVar24 <= *(int *)(lVar26 + 0x24)) {
              do {
                piVar31[uVar22] = iVar24;
                uVar22 = uVar22 + 1;
                iVar24 = iVar24 + 1;
              } while (iVar24 <= *(int *)(lVar26 + 0x24));
            }
            uVar18 = (int)uVar36 + 1;
            uVar33 = uVar33 + 4;
            uVar36 = (ulonglong)uVar18;
          } while ((int)uVar18 < (int)param_1[0xd]);
        }
        uVar22 = uVar29;
        if ((local_1d0 < 0) && (local_140 = 0, local_1d0 != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(&local_148,0);
          local_118 = local_148;
          local_1d0 = local_13c;
          uVar22 = (ulonglong)local_140;
        }
        uVar18 = param_1[1];
        local_140 = uVar18 + (int)uVar22;
        if (local_1d0 < (int)local_140) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_148);
          uVar18 = param_1[1];
          local_118 = local_148;
          local_1d0 = local_13c;
        }
        uVar22 = uVar29;
        piVar27 = piVar31;
        if (0 < (int)uVar18) {
          do {
            *(int *)(local_118 + (longlong)*piVar27 * 4) = (int)uVar22;
            uVar18 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar18;
            piVar27 = piVar27 + 1;
          } while ((int)uVar18 < (int)param_1[1]);
        }
        uVar22 = uVar29;
        uVar33 = uVar29;
        if (0 < (int)(*ppuVar38)[2]) {
          do {
            uVar18 = (int)uVar33 + 1;
            lVar26 = *(longlong *)*ppuVar38;
            *(undefined4 *)(uVar22 + 0x20 + lVar26) =
                 *(undefined4 *)(local_118 + (longlong)*(int *)(uVar22 + 0x20 + lVar26) * 4);
            *(undefined4 *)(uVar22 + 0x24 + lVar26) =
                 *(undefined4 *)(local_118 + (longlong)*(int *)(uVar22 + 0x24 + lVar26) * 4);
            uVar22 = uVar22 + 0x40;
            uVar33 = (ulonglong)uVar18;
          } while ((int)uVar18 < (int)(*ppuVar38)[2]);
        }
        uStack_188 = 0;
        if (((int)local_1cc < 0) && (local_1cc != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(&local_190,0);
          local_1b0 = local_190;
          local_1cc = uStack_184;
        }
        if ((uint *)&local_190 != local_198) {
          local_1b0 = *(longlong *)local_198;
          uVar18 = local_198[2];
          local_1cc = local_198[3];
          *(longlong *)local_198 = local_190;
          *(longlong *)(local_198 + 2) = CONCAT44(uStack_184,uStack_188);
          local_190 = local_1b0;
          uStack_188 = uVar18;
          uStack_184 = local_1cc;
        }
        uVar18 = param_1[1];
        uVar34 = local_198[2];
        local_198[2] = uVar18 + uVar34;
        if ((int)local_198[3] < (int)(uVar18 + uVar34)) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(local_198);
        }
        uVar22 = uVar29;
        uVar33 = uVar29;
        if (0 < (int)param_1[1]) {
          do {
            uVar18 = (int)uVar33 + 1;
            *(undefined4 *)(uVar22 + *(longlong *)local_198) =
                 *(undefined4 *)(local_1b0 + (longlong)*(int *)(uVar22 + (longlong)piVar31) * 4);
            uVar22 = uVar22 + 4;
            uVar33 = (ulonglong)uVar18;
          } while ((int)uVar18 < (int)param_1[1]);
        }
        if ((iVar39 < 0) && (local_200 = 0, iVar39 != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(&local_208,0);
          uVar29 = (ulonglong)local_200;
          local_1f0 = local_208;
          local_20c = local_1fc;
          iVar39 = local_1fc;
        }
        uVar18 = (*ppuVar38)[2] + param_1[0x24];
        local_200 = (int)uVar29 + uVar18;
        local_c8 = uVar18;
        if (iVar39 < (int)local_200) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_208);
          local_20c = local_1fc;
          local_1f0 = local_208;
        }
        lVar26 = 0;
        iVar39 = 0;
        if ((local_1f8 < 0) && (local_1e0 = 0, local_1f8 != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(&local_1e8,0);
          local_1c0 = local_1e8;
          local_1f8 = local_1dc;
          iVar39 = local_1e0;
        }
        uVar34 = param_1[0x24];
        local_1e0 = iVar39 + 1;
        if (local_1f8 < local_1e0) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1e8,iVar39);
          local_1c0 = local_1e8;
          local_1f8 = local_1dc;
        }
        ppuVar17 = local_1a8;
        local_1c0[iVar39] = uVar34;
        iVar24 = local_1f4 + -1;
        piVar31 = local_1c0;
        iVar39 = local_1f8;
        if (0 < iVar24) {
          do {
            iVar25 = local_1e0;
            lVar42 = (longlong)local_1e0;
            iVar32 = piVar31[lVar26];
            uVar34 = *(uint *)((longlong)ppuVar17 + lVar26 * 4);
            local_1e0 = local_1e0 + 1;
            if (iVar39 < local_1e0) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1e8,iVar25);
              piVar31 = local_1e8;
              iVar39 = local_1dc;
            }
            lVar26 = lVar26 + 1;
            piVar31[lVar42] = iVar32 + uVar34;
          } while (lVar26 < iVar24);
        }
        local_1c0 = piVar31;
        local_1f8 = iVar39;
        uVar22 = 0;
        puVar23 = local_c0[0];
        uVar29 = uVar22;
        if (0 < (int)local_1c8[0xd]) {
          do {
            iVar39 = *local_1c0;
            lVar26 = (longlong)*(int *)(uVar22 + *(longlong *)puVar23) * 0x40 +
                     *(longlong *)*ppuVar38;
            *local_1c0 = iVar39 + 1;
            local_1f0[iVar39] = *(int *)(uVar22 + *(longlong *)puVar23);
            iVar39 = *(int *)(lVar26 + 0x1c);
            iVar24 = *(int *)(lVar26 + 0xc);
            piVar31 = local_1c0;
            if (-1 < iVar39) {
              do {
                piVar31 = piVar31 + 1;
                lVar26 = (longlong)iVar24;
                iVar25 = -1;
                lVar42 = (longlong)iVar39;
                iVar32 = 0x7fffffff;
                iVar39 = iVar25;
                if (lVar26 <= lVar42) {
                  lVar30 = lVar26 << 6;
                  lVar26 = (lVar42 - lVar26) + 1;
                  do {
                    iVar39 = *piVar31;
                    *piVar31 = iVar39 + 1;
                    local_1f0[iVar39] = iVar24;
                    iVar39 = *(int *)(*(longlong *)*ppuVar38 + 0xc + lVar30);
                    iVar3 = *(int *)(*(longlong *)*ppuVar38 + 0x1c + lVar30);
                    if ((-1 < iVar39) && (iVar39 < iVar32)) {
                      iVar32 = iVar39;
                    }
                    if ((-1 < iVar3) && (iVar25 < iVar3)) {
                      iVar25 = iVar3;
                    }
                    iVar24 = iVar24 + 1;
                    lVar30 = lVar30 + 0x40;
                    lVar26 = lVar26 + -1;
                    iVar39 = iVar25;
                  } while (lVar26 != 0);
                }
                iVar24 = iVar32;
              } while (-1 < iVar39);
              puVar23 = local_1c8 + 0x10;
            }
            uVar34 = (int)uVar29 + 1;
            uVar22 = uVar22 + 4;
            uVar29 = (ulonglong)uVar34;
            uVar18 = local_c8;
          } while ((int)uVar34 < (int)local_1c8[0xd]);
        }
        uVar22 = 0;
        uVar29 = uVar22;
        if (((int)local_210 < 0) && (local_130 = 0, local_210 != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(&local_138,0);
          local_210 = local_12c;
          local_1b8 = local_138;
          uVar29 = (ulonglong)local_130;
        }
        local_130 = (int)uVar29 + uVar18;
        if ((int)local_210 < (int)local_130) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_138);
          local_210 = local_12c;
          local_1b8 = local_138;
        }
        piVar31 = local_1b8;
        param_1 = local_1c8;
        uVar29 = (ulonglong)(int)local_1c8[0x24];
        if ((int)local_1c8[0x24] < (int)uVar18) {
          piVar27 = local_1f0 + uVar29;
          do {
            iVar39 = *piVar27;
            piVar27 = piVar27 + 1;
            local_1b8[iVar39] = (int)uVar29;
            uVar34 = (int)uVar29 + 1;
            uVar29 = (ulonglong)uVar34;
          } while ((int)uVar34 < (int)uVar18);
        }
        puVar23 = *ppuVar38;
        uVar29 = uVar22;
        if (0 < (int)puVar23[2]) {
          do {
            lVar26 = *(longlong *)puVar23;
            iVar39 = *(int *)(uVar22 + 0xc + lVar26);
            if (-1 < iVar39) {
              *(int *)(uVar22 + 0xc + lVar26) = local_1b8[iVar39];
              *(int *)(uVar22 + 0x1c + lVar26) = local_1b8[*(int *)(uVar22 + 0x1c + lVar26)];
            }
            puVar23 = *ppuVar38;
            uVar34 = (int)uVar29 + 1;
            uVar22 = uVar22 + 0x40;
            uVar29 = (ulonglong)uVar34;
          } while ((int)uVar34 < (int)puVar23[2]);
        }
        uVar34 = uVar40;
        uVar19 = uVar37;
        fVar51 = fVar48;
        fVar53 = fVar49;
        if ((uint *)&local_230 != puVar23) {
          uVar34 = *puVar23;
          uVar19 = puVar23[1];
          local_230 = *(undefined8 **)puVar23;
          fVar51 = (float)puVar23[2];
          fVar53 = (float)puVar23[3];
          *puVar23 = uVar40;
          puVar23[1] = uVar37;
          puVar23[2] = (uint)fVar48;
          puVar23[3] = (uint)fVar49;
          puVar23 = *(uint **)(local_1c8 + 0x2a);
          fStack_228 = fVar51;
          fStack_224 = fVar53;
          local_1a0 = local_230;
          local_160 = fVar51;
        }
        puVar23[2] = 0;
        if (puVar23[3] != uVar18) {
          TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(puVar23,uVar18);
        }
        uVar22 = 0;
        uVar29 = uVar22;
        if (0 < (int)param_1[0x24]) {
          do {
            puVar23 = *ppuVar38;
            local_108 = 0x7f7fffff;
            uStack_104 = 0x7f7fffff;
            uVar40 = puVar23[2];
            uStack_100 = 0x7f7fffff;
            uStack_fc = 0xffffffff;
            local_f8 = 0x800000;
            uStack_f4 = 0x800000;
            uStack_f0 = 0x800000;
            uStack_ec = 0xffffffff;
            uStack_e8 = 0xffffffff;
            uStack_e4 = 0xffffffff;
            uStack_e0 = 0x7f7fffff;
            uStack_dc = 0x7f7fffff;
            uStack_d8 = 0x7f7fffff;
            uStack_d4 = 0xff7fffff;
            local_d0 = 0xff7fffff;
            local_cc = 0xff7fffff;
            puVar23[2] = uVar40 + 1;
            if ((int)puVar23[3] < (int)(uVar40 + 1)) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
              ResizeGrow(puVar23,uVar40);
            }
            lVar26 = *(longlong *)puVar23;
            lVar42 = (longlong)(int)uVar40 * 0x40;
            uVar40 = (int)uVar29 + 1;
            *(undefined8 *)(lVar42 + lVar26) = CONCAT44(uStack_104,local_108);
            ((undefined8 *)(lVar42 + lVar26))[1] = CONCAT44(uStack_fc,uStack_100);
            puVar21 = (undefined8 *)(lVar42 + 0x10 + lVar26);
            *puVar21 = CONCAT44(uStack_f4,local_f8);
            puVar21[1] = CONCAT44(uStack_ec,uStack_f0);
            puVar1 = (undefined4 *)(lVar42 + 0x20 + lVar26);
            *puVar1 = uStack_e8;
            puVar1[1] = uStack_e4;
            puVar1[2] = uStack_e0;
            puVar1[3] = uStack_dc;
            puVar21 = (undefined8 *)(lVar42 + 0x30 + lVar26);
            *puVar21 = CONCAT44(uStack_d4,uStack_d8);
            puVar21[1] = CONCAT44(local_cc,local_d0);
            piVar31 = local_1b8;
            uVar29 = (ulonglong)uVar40;
          } while ((int)uVar40 < (int)param_1[0x24]);
        }
        fVar48 = local_160;
        puVar23 = *ppuVar38;
        uVar29 = (ulonglong)(uint)local_160;
        uVar40 = puVar23[2];
        puVar23[2] = uVar40 + (int)local_160;
        if ((int)puVar23[3] < (int)(uVar40 + (int)local_160)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow();
        }
        iVar39 = local_1f4;
        puVar21 = local_1a0;
        if (0 < (int)fVar48) {
          do {
            iVar24 = *piVar31;
            piVar31 = piVar31 + 1;
            lVar42 = (longlong)iVar24 * 0x40;
            uVar7 = puVar21[1];
            lVar26 = *(longlong *)*ppuVar38;
            *(undefined8 *)(lVar42 + lVar26) = *puVar21;
            ((undefined8 *)(lVar42 + lVar26))[1] = uVar7;
            uVar7 = puVar21[3];
            puVar2 = (undefined8 *)(lVar42 + 0x10 + lVar26);
            *puVar2 = puVar21[2];
            puVar2[1] = uVar7;
            uVar4 = *(undefined4 *)((longlong)puVar21 + 0x24);
            uVar5 = *(undefined4 *)(puVar21 + 5);
            uVar6 = *(undefined4 *)((longlong)puVar21 + 0x2c);
            puVar1 = (undefined4 *)(lVar42 + 0x20 + lVar26);
            *puVar1 = *(undefined4 *)(puVar21 + 4);
            puVar1[1] = uVar4;
            puVar1[2] = uVar5;
            puVar1[3] = uVar6;
            uVar7 = puVar21[7];
            puVar2 = (undefined8 *)(lVar42 + 0x30 + lVar26);
            *puVar2 = puVar21[6];
            puVar2[1] = uVar7;
            uVar29 = uVar29 - 1;
            puVar21 = puVar21 + 8;
          } while (uVar29 != 0);
        }
        uVar40 = param_1[0x24];
        uVar29 = uVar22;
        uVar33 = uVar22;
        uVar37 = uVar40;
        if (0 < (int)uVar40) {
          do {
            lVar42 = (longlong)(int)uVar37 * 0x40;
            lVar26 = *(longlong *)*ppuVar38;
            *(uint *)(uVar22 + 0xc + lVar26) = uVar37;
            uVar18 = uVar37 + *(int *)(*(longlong *)(local_1c8 + 0x22) + 4 + uVar33);
            iVar24 = uVar18 - 1;
            *(int *)(uVar22 + 0x1c + lVar26) = iVar24;
            *(undefined4 *)(uVar22 + 0x20 + lVar26) =
                 *(undefined4 *)(*(longlong *)*ppuVar38 + 0x20 + lVar42);
            bVar15 = false;
            *(undefined4 *)(uVar22 + 0x24 + lVar26) =
                 *(undefined4 *)((longlong)(int)uVar18 * 0x40 + -0x1c + *(longlong *)*ppuVar38);
            fStack_224 = DAT_1468b5d90;
            fStack_220 = DAT_1468b5d94;
            fStack_21c = DAT_1468b5d98;
            local_230 = (undefined8 *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
            fStack_228 = DAT_1468b5d98;
            if ((int)uVar37 <= iVar24) {
              uVar36 = (ulonglong)((iVar24 - uVar37) + 1);
              fVar48 = DAT_1468b5d98;
              fVar49 = DAT_1468b5d94;
              fVar43 = DAT_1468b5d90;
              fVar50 = DAT_1468b5d90;
              fVar44 = DAT_1468b5d94;
              fVar52 = DAT_1468b5d98;
              do {
                lVar30 = *(longlong *)*ppuVar38;
                if (bVar15) {
                  fVar45 = *(float *)(lVar42 + lVar30);
                  if (fVar45 < fVar43) {
                    local_230 = (undefined8 *)CONCAT44(local_230._4_4_,fVar45);
                    fVar43 = fVar45;
                  }
                  fVar47 = *(float *)(lVar42 + 4 + lVar30);
                  if (fVar47 < fVar44) {
                    local_230 = (undefined8 *)CONCAT44(fVar47,(uint)local_230);
                    fVar44 = fVar47;
                  }
                  fVar46 = *(float *)(lVar42 + 8 + lVar30);
                  if (fVar46 < fVar52) {
                    fVar52 = fVar46;
                    fStack_228 = fVar46;
                  }
                  if (fVar50 < fVar45) {
                    fVar50 = fVar45;
                    fStack_224 = fVar45;
                  }
                  if (fVar49 < fVar47) {
                    fVar49 = fVar47;
                    fStack_220 = fVar47;
                  }
                  if (fVar48 < fVar46) {
                    fVar48 = fVar46;
                    fStack_21c = fVar46;
                  }
                }
                else {
                  local_230 = *(undefined8 **)(lVar42 + lVar30);
                  fVar43 = SUB84(local_230,0);
                  bVar15 = true;
                  fVar48 = *(float *)(lVar42 + 8 + lVar30);
                  fStack_220 = (float)((ulonglong)local_230 >> 0x20);
                  fVar49 = fStack_220;
                  fVar50 = fVar43;
                  fVar44 = fStack_220;
                  fVar52 = fVar48;
                  fStack_228 = fVar48;
                  fStack_224 = fVar43;
                  fStack_21c = fVar48;
                }
                if (bVar15) {
                  fVar45 = *(float *)(lVar42 + 0x10 + lVar30);
                  if (fVar45 < fVar43) {
                    local_230 = (undefined8 *)CONCAT44(local_230._4_4_,fVar45);
                    fVar43 = fVar45;
                  }
                  fVar47 = *(float *)(lVar42 + 0x14 + lVar30);
                  if (fVar47 < fVar44) {
                    local_230 = (undefined8 *)CONCAT44(fVar47,(uint)local_230);
                    fVar44 = fVar47;
                  }
                  fVar46 = *(float *)(lVar42 + 0x18 + lVar30);
                  if (fVar46 < fVar52) {
                    fVar52 = fVar46;
                    fStack_228 = fVar46;
                  }
                  if (fVar50 < fVar45) {
                    fVar50 = fVar45;
                    fStack_224 = fVar45;
                  }
                  if (fVar49 < fVar47) {
                    fVar49 = fVar47;
                    fStack_220 = fVar47;
                  }
                  if (fVar48 < fVar46) {
                    fVar48 = fVar46;
                    fStack_21c = fVar46;
                  }
                }
                else {
                  local_230 = *(undefined8 **)(lVar42 + 0x10 + lVar30);
                  fVar43 = SUB84(local_230,0);
                  bVar15 = true;
                  fVar48 = *(float *)(lVar42 + 0x18 + lVar30);
                  fStack_220 = (float)((ulonglong)local_230 >> 0x20);
                  fVar49 = fStack_220;
                  fVar50 = fVar43;
                  fVar44 = fStack_220;
                  fVar52 = fVar48;
                  fStack_228 = fVar48;
                  fStack_224 = fVar43;
                  fStack_21c = fVar48;
                }
                fVar45 = *(float *)(lVar42 + 0x28 + lVar30);
                fVar47 = *(float *)(uVar22 + 0x28 + lVar26);
                if (fVar47 <= fVar45) {
                  fVar45 = fVar47;
                }
                fVar47 = *(float *)(lVar42 + 0x2c + lVar30);
                local_a4 = *(float *)(lVar42 + 0x30 + lVar30);
                fVar46 = *(float *)(uVar22 + 0x2c + lVar26);
                if (fVar46 <= fVar47) {
                  fVar47 = fVar46;
                }
                fVar46 = *(float *)(uVar22 + 0x30 + lVar26);
                if (fVar46 <= local_a4) {
                  local_a4 = fVar46;
                }
                *(ulonglong *)(uVar22 + 0x28 + lVar26) = CONCAT44(fVar47,fVar45);
                *(float *)(uVar22 + 0x30 + lVar26) = local_a4;
                fVar45 = *(float *)(uVar22 + 0x34 + lVar26);
                fVar47 = *(float *)(lVar42 + 0x38 + lVar30);
                local_98 = *(float *)(lVar42 + 0x3c + lVar30);
                fVar46 = *(float *)(lVar42 + 0x34 + lVar30);
                if (fVar45 <= fVar46) {
                  fVar45 = fVar46;
                }
                fVar46 = *(float *)(uVar22 + 0x38 + lVar26);
                if (fVar47 <= fVar46) {
                  fVar47 = fVar46;
                }
                fVar46 = *(float *)(uVar22 + 0x3c + lVar26);
                if (local_98 <= fVar46) {
                  local_98 = fVar46;
                }
                lVar42 = lVar42 + 0x40;
                *(ulonglong *)(uVar22 + 0x34 + lVar26) = CONCAT44(fVar47,fVar45);
                *(float *)(uVar22 + 0x3c + lVar26) = local_98;
                uVar36 = uVar36 - 1;
              } while (uVar36 != 0);
            }
            uVar41 = (int)uVar29 + 1;
            *(undefined8 **)(uVar22 + lVar26) = local_230;
            *(float *)(uVar22 + 8 + lVar26) = fStack_228;
            *(ulonglong *)(uVar22 + 0x10 + lVar26) = CONCAT44(fStack_220,fStack_224);
            *(float *)(uVar22 + 0x18 + lVar26) = fStack_21c;
            uVar22 = uVar22 + 0x40;
            uVar40 = local_1c8[0x24];
            uVar29 = (ulonglong)uVar41;
            param_1 = local_1c8;
            uVar33 = uVar33 + 8;
            uVar37 = uVar18;
          } while ((int)uVar41 < (int)uVar40);
        }
        lVar26 = (longlong)local_1f4;
        param_1[0xd] = uVar40;
        local_1f4 = local_1f4 + 1;
        uStack_178 = CONCAT44(uStack_178._4_4_,local_1f4);
        if ((int)uStack_178._4_4_ < local_1f4) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_180,iVar39);
          local_1f4 = (int)(float)uStack_178;
          local_1a8 = (uint **)local_180;
        }
        ppuVar17 = local_1a8;
        _guard_xfg_dispatch_icall_nop((uint *)((longlong)local_1a8 + 4),local_1a8,lVar26 << 2);
        *(uint *)ppuVar17 = param_1[0xd];
        uVar40 = uVar34;
        uVar37 = uVar19;
        fVar48 = fVar51;
        fVar49 = fVar53;
      } while (1 < (int)param_1[0xd]);
    }
    piVar31 = local_1f0;
    uVar29 = 0;
    puVar23 = *ppuVar38;
    uVar40 = *param_1;
    uVar22 = (ulonglong)uVar40;
    puVar23[10] = 0;
    if (puVar23[0xb] != uVar40) {
      TArray<float,FDefaultAllocator>::ResizeTo(puVar23 + 8,uVar40);
    }
    if (0 < (int)uVar40) {
      do {
        uVar40 = puVar23[10];
        puVar23[10] = uVar40 + 1;
        if ((int)puVar23[0xb] < (int)(uVar40 + 1)) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(puVar23 + 8,uVar40);
        }
        puVar1 = (undefined4 *)(*(longlong *)(puVar23 + 8) + (longlong)(int)uVar40 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0xffffffff;
        }
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    uVar22 = uVar29;
    if (0 < (int)param_1[1]) {
      do {
        *(int *)(*(longlong *)(*ppuVar38 + 8) +
                (longlong)*(int *)(uVar29 + *(longlong *)local_198) * 4) = (int)uVar22;
        uVar40 = (int)uVar22 + 1;
        uVar29 = uVar29 + 4;
        uVar22 = (ulonglong)uVar40;
      } while ((int)uVar40 < (int)param_1[1]);
    }
    if (local_1a0 != (undefined8 *)0x0) {
      FMemory::Free(local_1a0);
    }
    if (local_1b8 != (int *)0x0) {
      FMemory::Free();
    }
    if (local_1c0 != (int *)0x0) {
      FMemory::Free();
    }
    if (local_1b0 != 0) {
      FMemory::Free();
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
    if (piVar31 != (int *)0x0) {
      FMemory::Free(piVar31);
    }
    if (local_128 != 0) {
      FMemory::Free();
    }
    if (local_1a8 != (uint **)0x0) {
      FMemory::Free(local_1a8);
    }
  }
  return;
}



// FUNCTION 1424bc050 FUN_1424bc050 body=2427 status=ok
// SIG undefined FUN_1424bc050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424bc050(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong **pplVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  float *pfVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  longlong lVar20;
  uint uVar21;
  longlong *plVar22;
  longlong *plVar23;
  void *_Src;
  longlong *local_238;
  undefined8 local_230;
  void *local_228;
  uint local_220;
  undefined4 local_21c;
  undefined8 local_218;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined4 local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  int local_1d8;
  int iStack_1d4;
  float fStack_1d0;
  int iStack_1cc;
  int local_1c8;
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b4;
  undefined4 uStack_1ac;
  undefined1 local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_18c;
  int local_188 [2];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong *local_128;
  int local_120;
  undefined4 local_11c;
  int local_118;
  int iStack_114;
  float fStack_110;
  int iStack_10c;
  int local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined1 local_ac [28];
  undefined1 local_90 [104];
  
  FInstanceUpdateCmdBuffer::Reset(param_1 + 0x7f8);
  if ((0 < *(int *)(param_1 + 0x7b0)) && (*(longlong *)(param_1 + 0x728) != 0)) {
    cVar13 = FUN_142820890(*(longlong *)(param_1 + 0x728),1,0xffffffff);
    if (cVar13 != '\0') {
      iVar14 = *(int *)(param_1 + 0x7b8);
      while (iVar14 == 0) {
        iVar14 = rand();
        *(int *)(param_1 + 0x7b8) = iVar14;
      }
      uVar21 = *(uint *)(param_1 + 0x7b0);
      plVar23 = (longlong *)0x0;
      local_228 = (void *)0x0;
      local_220 = 0;
      local_21c = 0;
      if ((int)uVar21 < 1) {
        plVar22 = plVar23;
        if (((int)uVar21 < 0) && (plVar22 = (longlong *)0x0, uVar21 != 0)) {
          local_220 = uVar21;
          TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(&local_228);
          goto LAB_1424bc144;
        }
      }
      else {
        local_220 = uVar21;
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_228,0);
LAB_1424bc144:
        plVar22 = (longlong *)(ulonglong)local_220;
      }
      _Src = local_228;
      iVar14 = (int)plVar22;
      if (0 < *(int *)(param_1 + 0x7b0)) {
        puVar19 = (undefined4 *)((longlong)local_228 + 0x20);
        plVar18 = plVar23;
        do {
          uVar21 = (int)plVar18 + 1;
          plVar18 = (longlong *)(ulonglong)uVar21;
          puVar16 = (undefined8 *)
                    ((longlong)puVar19 +
                    *(longlong *)(param_1 + 0x7a8) + (-0x20 - (longlong)local_228));
          uVar2 = puVar16[1];
          *(undefined8 *)(puVar19 + -8) = *puVar16;
          *(undefined8 *)(puVar19 + -6) = uVar2;
          uVar2 = puVar16[3];
          *(undefined8 *)(puVar19 + -4) = puVar16[2];
          *(undefined8 *)(puVar19 + -2) = uVar2;
          uVar15 = *(undefined4 *)((longlong)puVar16 + 0x24);
          uVar5 = *(undefined4 *)(puVar16 + 5);
          uVar6 = *(undefined4 *)((longlong)puVar16 + 0x2c);
          *puVar19 = *(undefined4 *)(puVar16 + 4);
          puVar19[1] = uVar15;
          puVar19[2] = uVar5;
          puVar19[3] = uVar6;
          puVar19 = puVar19 + 0xc;
        } while ((int)uVar21 < *(int *)(param_1 + 0x7b0));
      }
      uVar15 = FUN_1424c0700(param_1);
      FUN_1424b3d30(&local_1d8,uVar15);
      if (*(char *)(param_1 + 0x8d8) != '\0') {
        local_1d8 = 1;
        if (0 < *(int *)(param_1 + 0x8dc)) {
          local_1d8 = *(int *)(param_1 + 0x8dc);
        }
        iStack_1d4 = 1;
        if (0 < *(int *)(param_1 + 0x8e0)) {
          iStack_1d4 = *(int *)(param_1 + 0x8e0);
        }
        local_218 = (longlong *)CONCAT44(iStack_1d4,local_1d8);
        fStack_210 = 2.8026e-45;
        if (1 < (int)*(float *)(param_1 + 0x8e4)) {
          fStack_210 = *(float *)(param_1 + 0x8e4);
        }
        fStack_20c = (float)1;
        if (0 < *(int *)(param_1 + 0x8e8)) {
          fStack_20c = (float)*(int *)(param_1 + 0x8e8);
        }
        fStack_1d0 = fStack_210;
        iStack_1cc = (int)fStack_20c;
        local_1c8 = 2;
        if (1 < *(int *)(param_1 + 0x8ec)) {
          local_1c8 = *(int *)(param_1 + 0x8ec);
        }
      }
      iVar12 = local_1c8;
      iVar11 = iStack_1cc;
      fVar10 = fStack_1d0;
      iVar9 = iStack_1d4;
      iVar8 = local_1d8;
      pfVar17 = (float *)UStaticMesh::GetBounds(*(undefined8 *)(param_1 + 0x728),local_ac);
      local_200 = CONCAT31(local_200._1_3_,1);
      local_1e8 = (longlong *)0x0;
      fStack_20c = pfVar17[3] + *pfVar17;
      fStack_204 = pfVar17[5] + pfVar17[2];
      fStack_208 = pfVar17[4] + pfVar17[1];
      fStack_210 = pfVar17[2] - pfVar17[5];
      local_218 = (longlong *)CONCAT44(pfVar17[1] - pfVar17[4],*pfVar17 - pfVar17[3]);
      local_1f0 = (longlong *)CONCAT44(local_1f0._4_4_,fStack_210);
      local_1e0 = iVar14;
      if (iVar14 == 0) {
        local_1dc = 0;
        plVar22 = plVar23;
      }
      else {
        TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_1e8,plVar22,0);
        plVar22 = local_1e8;
        _guard_xfg_dispatch_icall_nop(local_1e8,_Src,(longlong)iVar14 * 0x30);
      }
      uStack_178 = CONCAT44(fStack_20c,fStack_210);
      local_170 = CONCAT44(fStack_204,fStack_208);
      local_180 = local_218;
      local_168 = local_200;
      local_14c = *(undefined4 *)(param_1 + 0x8b4);
      local_150 = *(undefined4 *)(param_1 + 0x7b8);
      local_158 = 0;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = (longlong *)0x0;
      local_d8 = (longlong *)0x0;
      local_188[0] = local_1e0;
      local_128 = plVar22;
      local_120 = local_1e0;
      local_11c = local_1dc;
      local_118 = iVar8;
      iStack_114 = iVar9;
      fStack_110 = fVar10;
      iStack_10c = iVar11;
      local_108 = iVar12;
      FUN_1424bab80(local_188);
      FUN_1424b9d40(local_188);
      *(int *)(param_1 + 0x860) = (int)local_e0[5];
      *(int *)(param_1 + 0x864) = (int)local_e0[3];
      *(int *)(param_1 + 0x8b8) = (int)local_e0[6];
      *(undefined8 *)(param_1 + 0x890) = _DAT_1468b5d90;
      uVar15 = DAT_1468b5d98;
      *(undefined4 *)(param_1 + 0x898) = DAT_1468b5d98;
      *(undefined8 *)(param_1 + 0x884) = *(undefined8 *)(param_1 + 0x890);
      *(undefined4 *)(param_1 + 0x88c) = uVar15;
      *(undefined1 *)(param_1 + 0x89c) = 0;
      *(undefined4 *)(param_1 + 0x8a8) = 0;
      if (*(int *)(param_1 + 0x8ac) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0x8a0,0);
      }
      if ((int)local_e0[1] < 1) {
        local_190 = DAT_1468b5d98;
        local_19c = DAT_1468b5d98;
        puVar16 = &local_1a4;
        local_198 = _DAT_1468b5d90;
        local_1a4 = _DAT_1468b5d90;
        local_18c = 0;
      }
      else {
        puVar3 = (undefined8 *)*local_e0;
        local_1a8 = 1;
        uStack_1b8 = *(undefined4 *)(puVar3 + 1);
        local_1c0 = *puVar3;
        uStack_1ac = *(undefined4 *)(puVar3 + 3);
        puVar16 = &local_1c0;
        uStack_1b4 = puVar3[2];
      }
      uVar5 = *(undefined4 *)((longlong)puVar16 + 4);
      uVar6 = *(undefined4 *)(puVar16 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar16 + 0xc);
      uVar2 = puVar16[2];
      uVar15 = *(undefined4 *)(puVar16 + 3);
      *(undefined4 *)(param_1 + 0x868) = *(undefined4 *)puVar16;
      *(undefined4 *)(param_1 + 0x86c) = uVar5;
      *(undefined4 *)(param_1 + 0x870) = uVar6;
      *(undefined4 *)(param_1 + 0x874) = uVar7;
      *(undefined8 *)(param_1 + 0x878) = uVar2;
      *(undefined4 *)(param_1 + 0x880) = uVar15;
      plVar18 = (longlong *)operator_new(0x10);
      plVar22 = plVar23;
      if (plVar18 != (longlong *)0x0) {
        *plVar18 = 0;
        *plVar18 = *local_e0;
        *local_e0 = 0;
        *(int *)(plVar18 + 1) = (int)local_e0[1];
        *(undefined4 *)((longlong)plVar18 + 0xc) = *(undefined4 *)((longlong)local_e0 + 0xc);
        local_e0[1] = 0;
        plVar22 = plVar18;
      }
      plVar18 = (longlong *)operator_new(0x18);
      if (plVar18 != (longlong *)0x0) {
        *(undefined4 *)(plVar18 + 1) = 1;
        *(undefined4 *)((longlong)plVar18 + 0xc) = 1;
        *plVar18 = (longlong)&PTR_DestroyObject_14413b698;
        plVar18[2] = (longlong)plVar22;
        plVar23 = plVar18;
      }
      local_1f8 = plVar22;
      local_1f0 = plVar23;
      SharedPointerInternals::EnableSharedFromThis(&local_1f8,plVar22,plVar22);
      if ((longlong **)(param_1 + 0x840) != &local_1f8) {
        *(longlong **)(param_1 + 0x840) = plVar22;
        local_1f8 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x848,&local_1f0);
        plVar23 = local_1f0;
      }
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        plVar22 = plVar23 + 1;
        lVar20 = *plVar22;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        _Src = local_228;
        if ((int)lVar20 == 1) {
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          _Src = local_228;
          if (iVar14 == 1) {
            (**(code **)(*plVar23 + 8))(plVar23,1);
            _Src = local_228;
          }
        }
      }
      plVar18 = local_e0;
      plVar22 = (longlong *)(param_1 + 0x7c8);
      plVar23 = local_e0 + 4;
      if (plVar22 != plVar23) {
        if (*plVar22 != 0) {
          FMemory::Free();
        }
        *plVar22 = *plVar23;
        *plVar23 = 0;
        *(int *)(param_1 + 2000) = (int)plVar18[5];
        *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)((longlong)plVar18 + 0x2c);
        plVar18[5] = 0;
      }
      plVar18 = local_e0;
      plVar23 = local_e0 + 2;
      plVar22 = (longlong *)(param_1 + 0x850);
      if (plVar22 != plVar23) {
        if (*plVar22 != 0) {
          FMemory::Free();
        }
        *plVar22 = *plVar23;
        *plVar23 = 0;
        *(int *)(param_1 + 0x858) = (int)plVar18[3];
        *(undefined4 *)(param_1 + 0x85c) = *(undefined4 *)((longlong)plVar18 + 0x1c);
        plVar18[3] = 0;
      }
      plVar23 = local_d8;
      local_d8 = (longlong *)0x0;
      puVar19 = (undefined4 *)UStaticMesh::GetBounds(*(undefined8 *)(param_1 + 0x728),local_90);
      uVar15 = puVar19[1];
      uVar5 = puVar19[2];
      uVar6 = puVar19[3];
      *(undefined4 *)(param_1 + 0x8bc) = *puVar19;
      *(undefined4 *)(param_1 + 0x8c0) = uVar15;
      *(undefined4 *)(param_1 + 0x8c4) = uVar5;
      *(undefined4 *)(param_1 + 0x8c8) = uVar6;
      *(undefined8 *)(param_1 + 0x8cc) = *(undefined8 *)(puVar19 + 4);
      *(undefined4 *)(param_1 + 0x8d4) = puVar19[6];
      *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(param_1 + 0x860);
      local_238 = (longlong *)0x0;
      local_230 = 0;
      UInstancedStaticMeshComponent::CreateHitProxyData(param_1,&local_238);
      FUN_1424d3160(param_1,plVar23,&local_238);
      if (*(longlong *)(param_1 + 0x7e8) == 0) {
        FUN_1424fbbf0(param_1,0,plVar23,0);
      }
      else {
        FUN_14250b800(*(longlong *)(param_1 + 0x7e8),plVar23);
      }
      pplVar4 = *(longlong ***)(param_1 + 0x7e8);
      if (pplVar4 != &local_238) {
        iVar14 = *(int *)(pplVar4 + 1);
        plVar22 = *pplVar4;
        if (iVar14 != 0) {
          do {
            puVar16 = (undefined8 *)*plVar22;
            if (puVar16 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar16 + 1);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                (**(code **)*puVar16)(puVar16,1);
              }
            }
            plVar22 = plVar22 + 1;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
          plVar22 = *pplVar4;
        }
        if (plVar22 != (longlong *)0x0) {
          FMemory::Free(plVar22);
        }
        *pplVar4 = local_238;
        local_238 = (longlong *)0x0;
        *(int *)(pplVar4 + 1) = (int)local_230;
        *(undefined4 *)((longlong)pplVar4 + 0xc) = local_230._4_4_;
        local_230 = 0;
      }
      lVar20 = *(longlong *)(param_1 + 0x120);
      if (((lVar20 == 0) && (lVar20 = FUN_1423407b0(param_1), lVar20 == 0)) ||
         (*(char *)(lVar20 + 0x6f0) == '\0')) {
        FUN_1423424e0(param_1);
      }
      FUN_1424c45f0(param_1);
      plVar22 = local_238;
      for (iVar14 = (int)local_230; iVar14 != 0; iVar14 = iVar14 + -1) {
        puVar16 = (undefined8 *)*plVar22;
        if (puVar16 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
        plVar22 = plVar22 + 1;
      }
      if (local_238 != (longlong *)0x0) {
        FMemory::Free(local_238);
      }
      if (plVar23 != (longlong *)0x0) {
        puVar16 = (undefined8 *)*plVar23;
        if (puVar16 != (undefined8 *)0x0) {
          (**(code **)*puVar16)(puVar16,1);
        }
        puVar16 = (undefined8 *)plVar23[4];
        if (puVar16 != (undefined8 *)0x0) {
          (**(code **)*puVar16)(puVar16,1);
        }
        puVar16 = (undefined8 *)plVar23[2];
        if (puVar16 != (undefined8 *)0x0) {
          (**(code **)*puVar16)(puVar16,1);
        }
        FMemory::operator_delete(plVar23,0x38);
      }
      FUN_1424b5b70(local_188);
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
      goto LAB_1424bc981;
    }
  }
  plVar18 = (longlong *)operator_new(0x10);
  plVar23 = (longlong *)0x0;
  plVar22 = plVar23;
  if (plVar18 != (longlong *)0x0) {
    *plVar18 = 0;
    plVar18[1] = 0;
    plVar22 = plVar18;
  }
  plVar18 = (longlong *)operator_new(0x18);
  if (plVar18 != (longlong *)0x0) {
    *(undefined4 *)(plVar18 + 1) = 1;
    *(undefined4 *)((longlong)plVar18 + 0xc) = 1;
    *plVar18 = (longlong)&PTR_DestroyObject_14413b698;
    plVar18[2] = (longlong)plVar22;
    plVar23 = plVar18;
  }
  fStack_210 = SUB84(plVar23,0);
  fStack_20c = (float)((ulonglong)plVar23 >> 0x20);
  local_218 = plVar22;
  SharedPointerInternals::EnableSharedFromThis(&local_218,plVar22,plVar22);
  if ((undefined8 *)(param_1 + 0x840) != &local_218) {
    *(undefined8 *)(param_1 + 0x840) = plVar22;
    local_218 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x848,&fStack_210);
    plVar23 = (longlong *)CONCAT44(fStack_20c,fStack_210);
  }
  if (plVar23 != (longlong *)0x0) {
    LOCK();
    plVar22 = plVar23 + 1;
    lVar20 = *plVar22;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*plVar23)(plVar23);
      LOCK();
      piVar1 = (int *)((longlong)plVar23 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar23 + 8))(plVar23,1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x860) = 0;
  *(undefined4 *)(param_1 + 2000) = 0;
  if (*(int *)(param_1 + 0x7d4) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x7c8,0);
  }
  *(undefined4 *)(param_1 + 0x858) = 0;
  if (*(int *)(param_1 + 0x85c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x850,0);
  }
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  if (*(int *)(param_1 + 0x8ac) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x8a0,0);
  }
  *(undefined8 *)(param_1 + 0x874) = _DAT_1468b5d90;
  uVar15 = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x87c) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x868) = *(undefined8 *)(param_1 + 0x874);
  *(undefined4 *)(param_1 + 0x870) = uVar15;
  *(undefined1 *)(param_1 + 0x880) = 0;
  *(undefined8 *)(param_1 + 0x8bc) = 0;
  *(undefined8 *)(param_1 + 0x8c4) = 0;
  *(undefined8 *)(param_1 + 0x8cc) = 0;
  *(undefined4 *)(param_1 + 0x8d4) = 0;
LAB_1424bc981:
  if (*(char *)(param_1 + 0x8f0) != '\0') {
    *(undefined1 *)(param_1 + 0x8f1) = 1;
  }
  return;
}



// FUNCTION 1424bc9d0 FUN_1424bc9d0 body=27 status=ok
// SIG undefined FUN_1424bc9d0(void)

void FUN_1424bc9d0(undefined8 param_1)

{
  FUN_1424bab80();
  FUN_1424b9d40(param_1);
  return;
}



// FUNCTION 1424bc9f0 FUN_1424bc9f0 body=395 status=ok
// SIG undefined FUN_1424bc9f0(void)

void FUN_1424bc9f0(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,undefined4 *param_6,undefined4 param_7)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  undefined1 local_f8 [32];
  undefined1 local_d8 [168];
  longlong *local_30;
  longlong *plVar4;
  
  local_100 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_100;
  _Src = (void *)*param_1;
  local_108 = (void *)0x0;
  if (local_100 == 0) {
    local_fc = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_108,local_100,0);
    _guard_xfg_dispatch_icall_nop(local_108,_Src,lVar2 * 0x30);
  }
  uVar1 = FUN_1424b3d30(local_f8,param_7);
  FUN_1424b3c70(local_d8,&local_108,param_2,uVar1,0x3f800000,1);
  FUN_1424bab80(local_d8);
  plVar4 = local_30;
  *param_6 = (int)local_30[6];
  if (param_3 != local_30) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar4;
    *plVar4 = 0;
    *(int *)(param_3 + 1) = (int)plVar4[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
  }
  plVar3 = local_30;
  plVar4 = local_30 + 4;
  if (param_5 != plVar4) {
    if (*param_5 != 0) {
      FMemory::Free();
    }
    *param_5 = *plVar4;
    *plVar4 = 0;
    *(int *)(param_5 + 1) = (int)plVar3[5];
    *(undefined4 *)((longlong)param_5 + 0xc) = *(undefined4 *)((longlong)plVar3 + 0x2c);
    plVar3[5] = 0;
    plVar3 = local_30;
  }
  plVar4 = plVar3 + 2;
  if (param_4 != plVar4) {
    if (*param_4 != 0) {
      FMemory::Free();
    }
    *param_4 = *plVar4;
    *plVar4 = 0;
    *(int *)(param_4 + 1) = (int)plVar3[3];
    *(undefined4 *)((longlong)param_4 + 0xc) = *(undefined4 *)((longlong)plVar3 + 0x1c);
    plVar3[3] = 0;
  }
  FUN_1424b5b70(local_d8);
  return;
}



// FUNCTION 1424bcb80 FUN_1424bcb80 body=2263 status=ok
// SIG undefined FUN_1424bcb80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424bcb80(longlong param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar16;
  float *pfVar17;
  undefined8 uVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined4 *puVar22;
  longlong lVar23;
  longlong **pplVar24;
  undefined1 auStack_238 [32];
  double local_218;
  undefined4 local_210;
  void *local_208;
  ulonglong local_200;
  longlong *local_1f8 [2];
  longlong *local_1e8;
  longlong local_1e0;
  float local_1d8;
  longlong local_1d0;
  float local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  void *local_1a0;
  int local_198;
  undefined4 local_194;
  LARGE_INTEGER local_190;
  longlong *local_188 [2];
  undefined8 local_178;
  float local_170;
  undefined8 local_16c;
  float local_164;
  undefined1 local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  longlong *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_110;
  undefined1 local_10c [20];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  longlong local_a8 [4];
  longlong *local_88;
  undefined8 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  if (((*(int *)(param_1 + 0x7b0) < 1) || (*(longlong *)(param_1 + 0x728) == 0)) ||
     (cVar13 = FUN_142820890(*(longlong *)(param_1 + 0x728),1,0xffffffff), cVar13 == '\0')) {
    plVar20 = (longlong *)operator_new(0x10);
    plVar21 = (longlong *)0x0;
    plVar19 = plVar21;
    if (plVar20 != (longlong *)0x0) {
      *plVar20 = 0;
      plVar20[1] = 0;
      plVar19 = plVar20;
    }
    plVar20 = (longlong *)operator_new(0x18);
    if (plVar20 != (longlong *)0x0) {
      *(undefined4 *)(plVar20 + 1) = 1;
      *(undefined4 *)((longlong)plVar20 + 0xc) = 1;
      *plVar20 = (longlong)&PTR_DestroyObject_14413b698;
      plVar20[2] = (longlong)plVar19;
      plVar21 = plVar20;
    }
    local_1b0 = plVar19;
    local_1a8 = plVar21;
    SharedPointerInternals::EnableSharedFromThis(&local_1b0,plVar19,plVar19);
    if ((longlong **)(param_1 + 0x840) != &local_1b0) {
      *(longlong **)(param_1 + 0x840) = plVar19;
      local_1b0 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x848,&local_1a8);
      plVar21 = local_1a8;
    }
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar19 = plVar21 + 1;
      lVar23 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar21 + 8))(plVar21,1);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x860) = 0;
    *(undefined4 *)(param_1 + 2000) = 0;
    if (*(int *)(param_1 + 0x7d4) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x7c8,0);
    }
    *(undefined4 *)(param_1 + 0x858) = 0;
    if (*(int *)(param_1 + 0x85c) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x850,0);
    }
    local_110 = 0;
    *(undefined8 *)(param_1 + 0x8bc) = 0;
    *(undefined8 *)(param_1 + 0x8c4) = 0;
    *(undefined8 *)(param_1 + 0x8cc) = 0;
    *(undefined4 *)(param_1 + 0x8d4) = 0;
    *(undefined4 *)(param_1 + 0x8a8) = 0;
    if (*(int *)(param_1 + 0x8ac) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x8a0,0);
    }
    *(undefined8 *)(param_1 + 0x874) = _DAT_1468b5d90;
    uVar15 = DAT_1468b5d98;
    *(undefined4 *)(param_1 + 0x87c) = DAT_1468b5d98;
    *(undefined8 *)(param_1 + 0x868) = *(undefined8 *)(param_1 + 0x874);
    *(undefined4 *)(param_1 + 0x870) = uVar15;
    *(undefined1 *)(param_1 + 0x880) = 0;
    return;
  }
  QueryPerformanceCounter(&local_190);
  iVar14 = *(int *)(param_1 + 0x7b8);
  dVar8 = (double)local_190.QuadPart * DAT_1468b02f8;
  while (iVar14 == 0) {
    iVar14 = rand();
    *(int *)(param_1 + 0x7b8) = iVar14;
  }
  uVar6 = *(uint *)(param_1 + 0x7b0);
  lVar23 = (longlong)(int)uVar6;
  plVar21 = (longlong *)0x0;
  local_208 = (void *)0x0;
  iVar14 = 0;
  local_200 = 0;
  if ((int)uVar6 < 1) {
    if ((-1 < (int)uVar6) || (uVar6 == 0)) goto LAB_1424bcc85;
    local_200 = (ulonglong)uVar6;
    TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(&local_208);
  }
  else {
    local_200 = (ulonglong)uVar6;
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_208,0);
  }
  iVar14 = (int)local_200;
LAB_1424bcc85:
  if (0 < (int)uVar6) {
    puVar22 = (undefined4 *)((longlong)local_208 + 0x20);
    do {
      puVar1 = puVar22 + 0xc;
      lVar16 = *(longlong *)(param_1 + 0x7a8) + (-0x20 - (longlong)local_208);
      puVar3 = (undefined8 *)(lVar16 + -0x30 + (longlong)puVar1);
      uVar18 = puVar3[1];
      *(undefined8 *)(puVar22 + -8) = *puVar3;
      *(undefined8 *)(puVar22 + -6) = uVar18;
      puVar3 = (undefined8 *)(lVar16 + -0x20 + (longlong)puVar1);
      uVar18 = puVar3[1];
      *(undefined8 *)(puVar22 + -4) = *puVar3;
      *(undefined8 *)(puVar22 + -2) = uVar18;
      puVar4 = (undefined4 *)(lVar16 + -0x10 + (longlong)puVar1);
      uVar15 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      *puVar22 = *puVar4;
      puVar22[1] = uVar15;
      puVar22[2] = uVar9;
      puVar22[3] = uVar10;
      lVar23 = lVar23 + -1;
      puVar22 = puVar1;
    } while (lVar23 != 0);
  }
  lVar23 = operator_new(0xb8);
  plVar19 = plVar21;
  if (lVar23 != 0) {
    pfVar17 = (float *)UStaticMesh::GetBounds(*(undefined8 *)(param_1 + 0x728),local_c8);
    local_160 = 1;
    local_1a0 = (void *)0x0;
    local_1d8 = pfVar17[2] + pfVar17[5];
    local_1c8 = pfVar17[2] - pfVar17[5];
    local_178 = CONCAT44(pfVar17[1] - pfVar17[4],*pfVar17 - pfVar17[3]);
    local_16c = CONCAT44(pfVar17[1] + pfVar17[4],*pfVar17 + pfVar17[3]);
    local_198 = iVar14;
    local_170 = local_1c8;
    local_164 = local_1d8;
    if (iVar14 == 0) {
      local_194 = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_1a0,iVar14,0);
      _guard_xfg_dispatch_icall_nop(local_1a0,local_208,(longlong)iVar14 * 0x30);
    }
    uVar15 = FUN_1424c0700(param_1);
    uVar18 = FUN_1424b3d30(local_10c,uVar15);
    local_210 = *(undefined4 *)(param_1 + 0x7b8);
    local_218 = (double)CONCAT44(local_218._4_4_,*(undefined4 *)(param_1 + 0x8b4));
    plVar19 = (longlong *)FUN_1424b3c70(lVar23,&local_1a0,&local_178,uVar18);
  }
  local_1c0 = plVar19;
  plVar20 = (longlong *)operator_new(0x18);
  if (plVar20 != (longlong *)0x0) {
    *(undefined4 *)(plVar20 + 1) = 1;
    *plVar20 = (longlong)&PTR_FUN_1450ced70;
    *(undefined4 *)((longlong)plVar20 + 0xc) = 1;
    plVar20[2] = (longlong)plVar19;
    plVar21 = plVar20;
  }
  local_1b8 = plVar21;
  SharedPointerInternals::EnableSharedFromThis(&local_1c0,plVar19,plVar19);
  plVar21 = local_1c0;
  *(undefined1 *)(param_1 + 0x8f0) = 1;
  plVar19 = (longlong *)FMemory::Realloc(0,0x30);
  local_188[0] = plVar19;
  if (plVar19 != (longlong *)0x0) {
    plVar19[1] = (longlong)plVar21;
    *plVar19 = (longlong)&DAT_143f3ed00;
    plVar19[2] = (longlong)FUN_1424bc9d0;
    lVar23 = FDelegateHandle::GenerateNewID();
    plVar19[4] = lVar23;
    *plVar19 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  plVar21 = (longlong *)FUN_140960ab0(local_f8,0,2);
  lVar23 = *plVar21;
  pplVar24 = (longlong **)(lVar23 + 0x10);
  *pplVar24 = (longlong *)0x0;
  *(undefined4 *)(lVar23 + 0x18) = 0;
  if ((local_188 != pplVar24) && (plVar19 != (longlong *)0x0)) {
    (**(code **)(*plVar19 + 0x30))(plVar19,pplVar24);
  }
  *(undefined4 *)(lVar23 + 0x20) = 0x10ff;
  lVar23 = *plVar21;
  lVar11 = plVar21[2];
  lVar16 = plVar21[1];
  local_1e0 = *(longlong *)(lVar23 + 0x30);
  if (local_1e0 != 0) {
    LOCK();
    *(int *)(local_1e0 + 0x48) = *(int *)(local_1e0 + 0x48) + 1;
    UNLOCK();
    plVar19 = local_188[0];
  }
  FUN_1409691d0(lVar23,lVar16,(int)lVar11,1);
  if (plVar19 != (longlong *)0x0) {
    (**(code **)(*plVar19 + 0x28))(plVar19,0);
    local_188[0] = (longlong *)FMemory::Realloc(plVar19,0,0);
    if (local_188[0] != (longlong *)0x0) {
      FMemory::Free(local_188[0]);
    }
  }
  lVar23 = param_1 + 0x918;
  iVar14 = *(int *)(param_1 + 0x940);
  *(int *)(param_1 + 0x940) = iVar14 + 1;
  if (*(int *)(param_1 + 0x944) < iVar14 + 1) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (lVar23,iVar14);
  }
  plVar21 = local_1b8;
  lVar16 = *(longlong *)(param_1 + 0x938);
  if (*(longlong *)(param_1 + 0x938) == 0) {
    lVar16 = lVar23;
  }
  *(longlong *)(lVar16 + (longlong)iVar14 * 8) = local_1e0;
  if (local_1e0 != 0) {
    LOCK();
    *(int *)(local_1e0 + 0x48) = *(int *)(local_1e0 + 0x48) + 1;
    UNLOCK();
  }
  local_158 = FUN_1424b9060;
  local_1e8 = local_1c0;
  uStack_150 = 0;
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
    UNLOCK();
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
      UNLOCK();
    }
  }
  plVar19 = (longlong *)FMemory::Realloc(0,0x40);
  local_1f8[0] = plVar19;
  if (plVar19 != (longlong *)0x0) {
    local_138 = (undefined4)local_158;
    uStack_134 = local_158._4_4_;
    uStack_130 = uStack_150;
    uStack_12c = uStack_14c;
    local_148 = local_1e8;
    local_140 = plVar21;
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
    }
    local_218 = dVar8 + 16777216.0;
    TBaseUObjectMethodDelegateInstance<0,UHierarchicalInstancedStaticMeshComponent,void___cdecl(enum_ENamedThreads::Type,TRefCountPtr<FGraphEvent>_const_&),TSharedRef<FClusterBuilder,1>,double>
    ::
    TBaseUObjectMethodDelegateInstance<0,UHierarchicalInstancedStaticMeshComponent,void___cdecl(enum_ENamedThreads::Type,TRefCountPtr<FGraphEvent>_const_&),TSharedRef<FClusterBuilder,1>,double>
              (plVar19,param_1,&local_138,&local_148);
  }
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar21 + 1;
    lVar16 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar21 + 8))(plVar21,1);
      }
    }
    plVar19 = local_1f8[0];
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar20 = plVar21 + 1;
      lVar16 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar19 = local_1f8[0];
        if (iVar14 == 1) {
          (**(code **)(*plVar21 + 8))(plVar21,1);
          plVar19 = local_1f8[0];
        }
      }
    }
  }
  local_88 = (longlong *)0x0;
  local_80 = 1;
  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_a8,0);
  plVar21 = local_a8;
  if (local_88 != (longlong *)0x0) {
    plVar21 = local_88;
  }
  *plVar21 = local_1e0;
  if (local_1e0 != 0) {
    LOCK();
    *(int *)(local_1e0 + 0x48) = *(int *)(local_1e0 + 0x48) + 1;
    UNLOCK();
    plVar19 = local_1f8[0];
  }
  plVar21 = (longlong *)FUN_140960ab0(local_e0,local_a8,2);
  lVar16 = *plVar21;
  pplVar24 = (longlong **)(lVar16 + 0x10);
  *pplVar24 = (longlong *)0x0;
  *(undefined4 *)(lVar16 + 0x18) = 0;
  if ((local_1f8 != pplVar24) && (plVar19 != (longlong *)0x0)) {
    (**(code **)(*plVar19 + 0x30))(plVar19,pplVar24);
  }
  *(undefined4 *)(lVar16 + 0x20) = 2;
  lVar16 = *plVar21;
  lVar12 = plVar21[2];
  lVar11 = plVar21[1];
  lVar7 = *(longlong *)(lVar16 + 0x30);
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
    UNLOCK();
    plVar19 = local_1f8[0];
  }
  local_1d0 = lVar7;
  FUN_1409691d0(lVar16,lVar11,(int)lVar12,1);
  plVar21 = local_a8;
  iVar14 = (int)local_80;
  if (local_88 != (longlong *)0x0) {
    plVar21 = local_88;
  }
  for (; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar21 != 0) {
      LOCK();
      piVar2 = (int *)(*plVar21 + 0x48);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        FGraphEvent::Recycle();
      }
    }
    lVar7 = local_1d0;
    plVar21 = plVar21 + 1;
    plVar19 = local_1f8[0];
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (plVar19 != (longlong *)0x0) {
    (**(code **)(*plVar19 + 0x28))(plVar19,0);
    local_1f8[0] = (longlong *)FMemory::Realloc(plVar19,0,0);
    if (local_1f8[0] != (longlong *)0x0) {
      FMemory::Free(local_1f8[0]);
    }
  }
  iVar14 = *(int *)(param_1 + 0x940);
  *(int *)(param_1 + 0x940) = iVar14 + 1;
  if (*(int *)(param_1 + 0x944) < iVar14 + 1) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (lVar23,iVar14);
  }
  lVar16 = *(longlong *)(param_1 + 0x938);
  if (*(longlong *)(param_1 + 0x938) == 0) {
    lVar16 = lVar23;
  }
  *(longlong *)(lVar16 + (longlong)iVar14 * 8) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
    UNLOCK();
    LOCK();
    piVar2 = (int *)(lVar7 + 0x48);
    iVar14 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar14 == 1) {
      FGraphEvent::Recycle(local_1d0);
    }
  }
  if (local_1e0 != 0) {
    LOCK();
    piVar2 = (int *)(local_1e0 + 0x48);
    iVar14 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar14 == 1) {
      FGraphEvent::Recycle(local_1e0);
    }
  }
  plVar21 = local_1b8;
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_1b8 + 1;
    lVar23 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar23 == 1) {
      (**(code **)*local_1b8)(local_1b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar21 + 8))(plVar21,1);
      }
    }
  }
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  return;
}



// FUNCTION 1424bd460 FUN_1424bd460 body=363 status=ok
// SIG undefined FUN_1424bd460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1424bd460(longlong param_1,char param_2,char param_3)

{
  int iVar1;
  float *pfVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((((((param_3 == '\0') && (*(int *)(param_1 + 0x80c) == 0)) &&
        (*(int *)(param_1 + 2000) == *(int *)(param_1 + 0x7b0))) &&
       (*(int *)(param_1 + 0x860) == *(int *)(param_1 + 0x7b0))) &&
      ((*(longlong *)(param_1 + 0x728) == 0 ||
       (((((pfVar2 = (float *)UStaticMesh::GetBounds(*(longlong *)(param_1 + 0x728),&local_28),
           *pfVar2 == *(float *)(param_1 + 0x8bc) && (pfVar2[1] == *(float *)(param_1 + 0x8c0))) &&
          ((pfVar2[2] == *(float *)(param_1 + 0x8c4) &&
           ((pfVar2[3] == *(float *)(param_1 + 0x8c8) && (pfVar2[4] == *(float *)(param_1 + 0x8cc)))
           )))) && (pfVar2[5] == *(float *)(param_1 + 0x8d0))) &&
        (pfVar2[6] == *(float *)(param_1 + 0x8d4))))))) &&
     ((*(int *)(param_1 + 0x8a8) < 1 &&
      (iVar1 = UObjectBaseUtility::GetLinkerUE4Version(param_1), 0x1ba < iVar1)))) {
    local_28 = _DAT_1464af950;
    uStack_24 = uRam00000001464af954;
    uStack_20 = uRam00000001464af958;
    uStack_1c = uRam00000001464af95c;
    iVar1 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_28);
    if (0xd < iVar1) {
      return 0;
    }
  }
  if ((*(longlong *)(param_1 + 0x728) == 0) ||
     ((*(uint *)(*(longlong *)(param_1 + 0x728) + 8) >> 10 & 1) != 0)) {
    return 0;
  }
  FUN_1417510e0();
  if (param_2 == '\0') {
    FUN_1424bc050(param_1);
    return 1;
  }
  if (*(char *)(param_1 + 0x8f0) == '\0') {
    FUN_1424bcb80(param_1);
    return 1;
  }
  *(undefined2 *)(param_1 + 0x8f1) = 0x100;
  return 1;
}



// FUNCTION 1424bd5d0 FUN_1424bd5d0 body=520 status=ok
// SIG undefined FUN_1424bd5d0(void)

void FUN_1424bd5d0(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0x18;
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
              (param_2,(longlong)*(int *)(param_1 + 1) * 0x18,
               (longlong)*(int *)((longlong)param_1 + 0xc) * 0x18);
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
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1,iVar3);
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
    FUN_1424b6f50(param_2,param_1);
  }
  return;
}



// FUNCTION 1424bd7e0 FUN_1424bd7e0 body=511 status=ok
// SIG undefined FUN_1424bd7e0(void)

void FUN_1424bd7e0(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0x40;
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
              (param_2,(longlong)*(int *)(param_1 + 1) << 6,
               (longlong)*(int *)((longlong)param_1 + 0xc) << 6);
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
        TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1,iVar3);
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
    FUN_1424b70e0(param_2,param_1);
  }
  return;
}



// FUNCTION 1424bd9e0 FUN_1424bd9e0 body=520 status=ok
// SIG undefined FUN_1424bd9e0(void)

void FUN_1424bd9e0(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0x28;
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
              (param_2,(longlong)*(int *)(param_1 + 1) * 0x28,
               (longlong)*(int *)((longlong)param_1 + 0xc) * 0x28);
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
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                  (param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
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
    FUN_1424b72e0(param_2,param_1);
  }
  return;
}



// FUNCTION 1424bdbf0 FUN_1424bdbf0 body=691 status=ok
// SIG undefined FUN_1424bdbf0(void)

void FUN_1424bdbf0(void)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 local_48 [48];
  
  lVar7 = DAT_146af7830;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  lVar10 = 4;
  if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
    lVar6 = 4;
  }
  else {
    lVar6 = 0;
  }
  lVar3 = DAT_146af7848;
  uVar12 = (uint)(*(int *)(lVar6 + lVar7) != 0);
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
    lVar7 = 4;
  }
  else {
    lVar7 = 0;
  }
  lVar6 = DAT_146af78a0;
  iVar11 = *(int *)(lVar7 + lVar3);
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
    lVar7 = 4;
  }
  else {
    lVar7 = 0;
  }
  lVar3 = DAT_146af7870;
  fVar2 = *(float *)(lVar7 + lVar6);
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
    lVar10 = 0;
  }
  iVar9 = (int)*(float *)(lVar10 + lVar3);
  if (DAT_146af7634 == 0) {
    uVar12 = 0;
    iVar11 = 0;
  }
  if (((uVar12 == DAT_146532b98) && (iVar11 == DAT_146532be4)) &&
     ((fVar2 == DAT_146532bf0 && (iVar9 == DAT_146532bec)))) {
    return;
  }
  if ((DAT_146ac3ac6 != '\0') && (cVar4 = IsInRenderingThread(), cVar4 != '\0')) {
    FBaseGraphTask::GetSmallTaskAllocator();
    DAT_146532bec = 1;
    if (0 < iVar9) {
      DAT_146532bec = iVar9;
    }
    DAT_146af9f90 = DAT_146af9f90 + 1;
    DAT_146532b98 = uVar12;
    DAT_146532be4 = iVar11;
    DAT_146532bf0 = fVar2;
    return;
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    DAT_146532bec = 1;
    if (0 < iVar9) {
      DAT_146532bec = iVar9;
    }
    DAT_146af9f90 = DAT_146af9f90 + 1;
    DAT_146532b98 = uVar12;
    DAT_146532be4 = iVar11;
    DAT_146532bf0 = fVar2;
  }
  else {
    plVar8 = (longlong *)FUN_1424c0350(local_48,0,0xff);
    lVar7 = *plVar8;
    *(int *)(lVar7 + 0x10) = iVar11;
    *(uint *)(lVar7 + 0x14) = uVar12;
    *(float *)(lVar7 + 0x18) = fVar2;
    *(int *)(lVar7 + 0x1c) = iVar9;
    lVar7 = *plVar8;
    lVar3 = plVar8[2];
    lVar10 = plVar8[1];
    lVar6 = *(longlong *)(lVar7 + 0x28);
    piVar1 = (int *)(lVar6 + 0x48);
    if (lVar6 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_1409421c0(lVar7,lVar10,(int)lVar3,1);
    if (lVar6 != 0) {
      LOCK();
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        FGraphEvent::Recycle(lVar6);
      }
    }
  }
  return;
}



// FUNCTION 1424bdeb0 FUN_1424bdeb0 body=499 status=ok
// SIG undefined FUN_1424bdeb0(void)

undefined8 FUN_1424bdeb0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  
  if ((*(char *)(param_1 + 0x880) == '\0') && (*(char *)(param_1 + 0x89c) == '\0')) {
    FUN_1424e75e0();
    return param_2;
  }
  fStack_58 = (float)*(undefined8 *)(param_1 + 0x878);
  fStack_54 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x878) >> 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x868);
  fStack_60 = (float)*(undefined8 *)(param_1 + 0x870);
  fStack_5c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x870) >> 0x20);
  fVar3 = fStack_5c;
  local_68 = uVar1;
  if ((char)*(undefined4 *)(param_1 + 0x880) == '\0') {
    if (*(char *)(param_1 + 0x89c) != '\0') {
      fStack_60 = *(float *)(param_1 + 0x88c);
      fStack_54 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x894) >> 0x20);
      fStack_58 = (float)*(undefined8 *)(param_1 + 0x894);
      fVar3 = *(float *)(param_1 + 0x890);
      local_68 = *(undefined8 *)(param_1 + 0x884);
    }
  }
  else if (*(char *)(param_1 + 0x89c) != '\0') {
    local_68._0_4_ = (float)uVar1;
    if (*(float *)(param_1 + 0x884) <= (float)local_68) {
      local_68._0_4_ = *(float *)(param_1 + 0x884);
    }
    local_68._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    fVar5 = *(float *)(param_1 + 0x888);
    if (local_68._4_4_ <= *(float *)(param_1 + 0x888)) {
      fVar5 = local_68._4_4_;
    }
    fVar6 = *(float *)(param_1 + 0x88c);
    if (fStack_60 <= *(float *)(param_1 + 0x88c)) {
      fVar6 = fStack_60;
    }
    fVar3 = *(float *)(param_1 + 0x890);
    if (*(float *)(param_1 + 0x890) <= fStack_5c) {
      fVar3 = fStack_5c;
    }
    fVar2 = *(float *)(param_1 + 0x894);
    if (*(float *)(param_1 + 0x894) <= fStack_58) {
      fVar2 = fStack_58;
    }
    fVar4 = *(float *)(param_1 + 0x898);
    if (*(float *)(param_1 + 0x898) <= fStack_54) {
      fVar4 = fStack_54;
    }
    goto LAB_1424bdfe0;
  }
  fVar2 = fStack_58;
  fVar4 = fStack_54;
  fVar5 = local_68._4_4_;
  fVar6 = fStack_60;
LAB_1424bdfe0:
  fVar2 = fVar2 - fVar5;
  fVar3 = fVar3 - (float)local_68;
  fVar4 = fVar4 - fVar6;
  fStack_58 = fVar2 * 0.5;
  fStack_5c = fVar3 * 0.5;
  fStack_54 = fVar4 * 0.5;
  fStack_60 = fStack_54 + fVar6;
  local_68 = CONCAT44(fStack_58 + fVar5,fStack_5c + (float)local_68);
  local_50 = SQRT((fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4) * 0.25);
  FBoxSphereBounds::TransformBy(&local_68);
  return param_2;
}



// FUNCTION 1424be0b0 FUN_1424be0b0 body=838 status=ok
// SIG undefined FUN_1424be0b0(void)

float * FUN_1424be0b0(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined1 local_a8 [160];
  
  iVar1 = rand();
  fVar10 = ((((float)iVar1 * 3.051851e-05 - 0.5) + (float)iVar1 * 3.051851e-05) - 0.5) *
           *(float *)(param_1 + 4);
  iVar1 = rand();
  fVar7 = (float)iVar1;
  iVar1 = rand();
  fVar6 = (float)iVar1;
  iVar1 = rand();
  fVar2 = (float)iVar1;
  fVar3 = (fVar2 * fVar2 + fVar6 * fVar6 + fVar7 * fVar7) * 9.313794e-10;
  fVar8 = fVar2 * 3.051851e-05;
  fVar9 = fVar6 * 3.051851e-05;
  fVar4 = fVar7 * 3.051851e-05;
  if ((fVar3 != 1.0) &&
     (fVar8 = DAT_1468b5d90, fVar9 = DAT_1468b5d94, fVar4 = DAT_1468b5d98, 1e-08 <= fVar3)) {
    auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar4 = auVar5._0_4_;
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar8 = fVar2 * 3.051851e-05 * fVar4;
    fVar9 = fVar6 * 3.051851e-05 * fVar4;
    fVar4 = fVar7 * 3.051851e-05 * fVar4;
  }
  local_b8 = *param_4 - *param_3;
  local_b4 = param_4[1] - param_3[1];
  local_b0 = param_4[2] - param_3[2];
  fVar2 = local_b4 * local_b4 + local_b8 * local_b8;
  if (fVar2 == 1.0) {
    if (local_b0 != 0.0) {
      local_b0 = 0.0;
    }
  }
  else if (1e-08 <= fVar2) {
    auVar5 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar5._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    local_b0 = 0.0;
    local_b8 = local_b8 * fVar3;
    local_b4 = local_b4 * fVar3;
  }
  else {
    local_b8 = DAT_1468b5d90;
    local_b4 = DAT_1468b5d94;
    local_b0 = DAT_1468b5d98;
  }
  FVector::Rotation(&local_b8,local_a8);
  FVector::RotateAngleAxis(param_1 + 8,&local_b8);
  fVar2 = param_4[1];
  *param_2 = local_b8 + *param_4 + fVar8 * fVar10;
  fVar8 = param_4[2];
  param_2[1] = local_b4 + fVar2 + fVar9 * fVar10;
  param_2[2] = local_b0 + fVar8 + fVar4 * fVar10;
  return param_2;
}



// FUNCTION 1424be400 CalcLOD body=466 status=ok
// SIG undefined CalcLOD(void)

void CalcLOD(int *param_1,int *param_2,float *param_3,float *param_4,float *param_5,float *param_6,
            longlong param_7,longlong param_8,float param_9)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar2 = *param_1;
  iVar1 = *param_2;
  if (iVar2 != iVar1) {
    fVar9 = *param_3 - *param_4;
    fVar10 = param_3[2] - param_4[2];
    fVar8 = (*param_4 + *param_3) * 0.5;
    fVar11 = param_3[1] - param_4[1];
    fVar6 = (param_4[2] + param_3[2]) * 0.5;
    fVar4 = *param_5 - fVar8;
    fVar3 = param_5[2] - fVar6;
    fVar7 = (param_4[1] + param_3[1]) * 0.5;
    fVar5 = param_5[1] - fVar7;
    fVar8 = *param_6 - fVar8;
    fVar6 = param_6[2] - fVar6;
    fVar5 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    fVar7 = param_6[1] - fVar7;
    fVar6 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6);
    fVar4 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10) * 0.5;
    fVar3 = fVar6;
    if (fVar5 <= fVar6) {
      fVar3 = fVar5;
    }
    if (fVar6 <= fVar5) {
      fVar6 = fVar5;
    }
    if (iVar2 < iVar1) {
      do {
        if (fVar3 - fVar4 <= param_9 * *(float *)(param_8 + (longlong)iVar2 * 4)) break;
        iVar2 = iVar2 + 1;
        *param_1 = iVar2;
        iVar1 = *param_2;
      } while (iVar2 < iVar1);
    }
    if (iVar2 < iVar1) {
      do {
        if (param_9 * *(float *)(param_7 + -4 + (longlong)iVar1 * 4) <= fVar6 + fVar4) {
          return;
        }
        iVar1 = iVar1 + -1;
        *param_2 = iVar1;
      } while (*param_1 < iVar1);
    }
  }
  return;
}



// FUNCTION 1424be5e0 FUN_1424be5e0 body=109 status=ok
// SIG undefined FUN_1424be5e0(void)

float * FUN_1424be5e0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if ((0.0 <= param_3) && (fVar5 = param_1[7], param_3 <= param_1[7])) {
    fVar5 = param_3;
  }
  fVar4 = param_1[5];
  fVar1 = param_1[4];
  fVar2 = param_1[1];
  *param_2 = (float)*(undefined8 *)(param_1 + 3) * fVar5 + *param_1;
  fVar3 = param_1[6];
  param_2[1] = fVar1 * fVar5 + fVar2;
  param_2[2] = (fVar3 * 0.5 * fVar5 + fVar4) * fVar5 + param_1[2];
  return param_2;
}



// FUNCTION 1424be650 FUN_1424be650 body=1292 status=ok
// SIG undefined FUN_1424be650(void)

undefined8
FUN_1424be650(float *param_1,undefined8 param_2,undefined8 *param_3,float *param_4,float *param_5)

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
  float local_f8;
  float local_f4;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  float local_d0;
  float local_c0;
  
  FUN_1424be0b0(param_1,&local_f8);
  local_c0 = *(float *)(param_3 + 1);
  fVar11 = (float)*(undefined8 *)param_4 - (float)*param_3;
  fVar8 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20) - (float)((ulonglong)*param_3 >> 0x20);
  local_d0 = param_4[2];
  fVar13 = fVar8 * fVar8 + fVar11 * fVar11;
  fVar2 = _guard_xfg_dispatch_icall_nop(param_1[6] * 0.017453292);
  fVar1 = param_5[1];
  fVar4 = *param_5;
  fVar9 = fVar4 * fVar4 + fVar1 * fVar1;
  if (fVar9 == 1.0) {
    fVar10 = fVar1;
    fVar5 = fVar4;
    if (param_5[2] == 0.0) {
      local_e8 = *(undefined8 *)param_5;
      local_e0 = param_5[2];
      fVar10 = (float)((ulonglong)local_e8 >> 0x20);
      fVar5 = (float)local_e8;
      fVar14 = local_e0;
    }
    else {
LAB_1424be868:
      fVar14 = 0.0;
    }
  }
  else {
    fVar10 = DAT_1468b5d94;
    fVar5 = DAT_1468b5d90;
    fVar14 = DAT_1468b5d98;
    if (1e-08 <= fVar9) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar5 = auVar7._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar9 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar9 * 0.5 * fVar5 * fVar5);
      fVar10 = fVar1 * fVar5;
      fVar5 = fVar4 * fVar5;
      goto LAB_1424be868;
    }
  }
  if (fVar13 == 1.0) {
    fVar6 = fVar8;
    fVar12 = fVar11;
    fVar3 = local_d0 - local_c0;
    if (local_d0 - local_c0 != 0.0) {
LAB_1424be905:
      fVar6 = fVar8;
      fVar12 = fVar11;
      fVar3 = 0.0;
    }
  }
  else {
    fVar6 = DAT_1468b5d94;
    fVar12 = DAT_1468b5d90;
    fVar3 = DAT_1468b5d98;
    if (1e-08 <= fVar13) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      fVar6 = auVar7._0_4_;
      fVar6 = fVar6 + fVar6 * (0.5 - fVar13 * 0.5 * fVar6 * fVar6);
      fVar6 = fVar6 + fVar6 * (0.5 - fVar13 * 0.5 * fVar6 * fVar6);
      fVar11 = fVar11 * fVar6;
      fVar8 = fVar8 * fVar6;
      goto LAB_1424be905;
    }
  }
  fVar11 = fVar9 - fVar2 * *param_1 * fVar2 * *param_1;
  fVar8 = (fVar6 * fVar10 + fVar12 * fVar5 + fVar3 * fVar14) *
          (SQRT(fVar9) + SQRT(fVar9)) * SQRT(fVar13);
  fVar2 = fVar8 * fVar8 - fVar13 * fVar11 * 4.0;
  if ((0.0 <= fVar2) && (fVar11 != 0.0)) {
    fVar2 = SQRT(fVar2);
    fVar9 = (fVar2 - fVar8) * (0.5 / fVar11);
    if (fVar9 <= 0.0) {
      fVar9 = (-fVar8 - fVar2) * (0.5 / fVar11);
    }
    local_f0 = param_4[2];
    local_f8 = fVar4 * fVar9 + *param_4;
    local_f4 = fVar1 * fVar9 + param_4[1];
  }
  fVar2 = local_f8 - *param_4;
  fVar1 = param_1[5];
  fVar8 = local_f4 - param_4[1];
  fVar4 = fVar8 * fVar8 + fVar2 * fVar2;
  if (SQRT(fVar4) <= fVar1) goto LAB_1424beafa;
  local_f0 = local_f0 - param_4[2];
  if (fVar4 == 1.0) {
    fVar9 = fVar2;
    fVar11 = fVar8;
    if (local_f0 != 0.0) {
LAB_1424beac7:
      fVar9 = fVar2;
      fVar11 = fVar8;
      local_f0 = 0.0;
    }
  }
  else {
    fVar9 = DAT_1468b5d90;
    fVar11 = DAT_1468b5d94;
    local_f0 = DAT_1468b5d98;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar9 = auVar7._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar4 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar4 * 0.5 * fVar9 * fVar9);
      fVar2 = fVar2 * fVar9;
      fVar8 = fVar8 * fVar9;
      goto LAB_1424beac7;
    }
  }
  local_f8 = fVar9 * fVar1 + *param_4;
  local_f4 = fVar11 * fVar1 + param_4[1];
  local_f0 = local_f0 * fVar1 + param_4[2];
LAB_1424beafa:
  FUN_1424beb60(param_1,param_2,param_3,&local_f8);
  return param_2;
}



// FUNCTION 1424beb60 FUN_1424beb60 body=513 status=ok
// SIG undefined FUN_1424beb60(void)

undefined8 * FUN_1424beb60(float *param_1,undefined8 *param_2,float *param_3,float *param_4)

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
  
  fVar6 = *param_4 - *param_3;
  fVar7 = param_4[1] - param_3[1];
  fVar3 = param_1[6];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  fVar4 = *param_1;
  param_2[3] = 0;
  fVar8 = fVar7 * fVar7 + fVar6 * fVar6;
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar3 * 0.017453292);
  fVar1 = fVar1 * fVar4;
  if ((0.0 < SQRT(fVar8)) && (0.0 < fVar1)) {
    fVar9 = SQRT(fVar8) / fVar1;
    fVar2 = _guard_xfg_dispatch_icall_nop(fVar3 * 0.017453292);
    fVar2 = fVar2 * fVar4;
    fVar3 = ((param_4[2] - param_3[2]) - fVar2 * fVar9) / (fVar9 * fVar9);
    *(float *)(param_2 + 3) = fVar3 + fVar3;
    fVar3 = fVar6;
    fVar4 = fVar7;
    if ((fVar8 != 1.0) && (fVar3 = DAT_1468b5d90, fVar4 = DAT_1468b5d94, 1e-08 <= fVar8)) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar8 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar8 * 0.5 * fVar4 * fVar4);
      fVar3 = fVar6 * fVar4;
      fVar4 = fVar7 * fVar4;
    }
    fVar6 = param_3[2];
    *(float *)((longlong)param_2 + 0x1c) = fVar9;
    *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(fVar4 * fVar1,fVar3 * fVar1);
    *param_2 = *(undefined8 *)param_3;
    *(float *)(param_2 + 1) = fVar6;
    *(float *)((longlong)param_2 + 0x14) = fVar2;
  }
  return param_2;
}



// FUNCTION 1424bed70 FUN_1424bed70 body=113 status=ok
// SIG undefined FUN_1424bed70(void)

undefined1 FUN_1424bed70(float *param_1,undefined8 param_2)

{
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FBox::TransformBy(param_1 + 7,&local_28,param_2);
  if ((((*param_1 <= local_1c) && (local_28 < param_1[3] || local_28 == param_1[3])) &&
      (param_1[1] <= local_18)) &&
     (((local_24 < param_1[4] || local_24 == param_1[4] && (param_1[2] <= local_14)) &&
      (local_20 < param_1[5] || local_20 == param_1[5])))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1424bedf0 FUN_1424bedf0 body=136 status=ok
// SIG undefined FUN_1424bedf0(void)

bool FUN_1424bedf0(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_1 - *(float *)(param_2 + 0x10);
  fVar1 = *(float *)(param_2 + 0x24);
  if (*(float *)(param_2 + 0x24) <= *(float *)(param_2 + 0x20)) {
    fVar1 = *(float *)(param_2 + 0x20);
  }
  fVar4 = param_1[1] - *(float *)(param_2 + 0x14);
  if (fVar1 <= *(float *)(param_2 + 0x28)) {
    fVar1 = *(float *)(param_2 + 0x28);
  }
  fVar2 = param_1[2] - *(float *)(param_2 + 0x18);
  fVar1 = fVar1 * param_1[4] + param_1[3] + 0.0001;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 <= fVar1 * fVar1;
}



// FUNCTION 1424bee80 CanGroup body=354 status=ok
// SIG undefined CanGroup(void)

bool CanGroup(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

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
  
  fVar7 = *param_1 - *param_2;
  fVar8 = param_1[2] - param_2[2];
  fVar4 = (*param_2 + *param_1) * 0.5;
  fVar9 = param_1[1] - param_2[1];
  fVar3 = *param_4 - fVar4;
  fVar1 = (param_2[2] + param_1[2]) * 0.5;
  fVar4 = *param_3 - fVar4;
  fVar2 = (param_2[1] + param_1[1]) * 0.5;
  fVar5 = param_3[2] - fVar1;
  fVar6 = param_3[1] - fVar2;
  fVar2 = param_4[1] - fVar2;
  fVar1 = param_4[2] - fVar1;
  fVar4 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
  fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  if (fVar1 <= fVar4) {
    fVar1 = fVar4;
  }
  return fVar1 + SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8) * 0.5 < param_5;
}



// FUNCTION 1424beff0 SetZero body=18 status=ok
// SIG void SetZero(Matrix2x4<float> * this)

/* public: void __cdecl Scaleform::Render::Matrix2x4<float>::SetZero(void) __ptr64 */

void __thiscall Scaleform::Render::Matrix2x4<float>::SetZero(Matrix2x4<float> *this)

{
                    /* 0x24beff0  458  ?SetZero@?$Matrix2x4@M@Render@Scaleform@@QEAAXXZ */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}



// FUNCTION 1424bf010 FUN_1424bf010 body=640 status=ok
// SIG undefined FUN_1424bf010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424bf010(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong *local_28;
  longlong *local_20;
  longlong *plVar11;
  
  if (*(char *)(param_1 + 0x8f0) != '\0') {
    *(undefined1 *)(param_1 + 0x8f2) = 1;
  }
  plVar6 = (longlong *)operator_new(0x10);
  plVar9 = (longlong *)0x0;
  plVar11 = plVar9;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar11 = plVar6;
  }
  plVar7 = (longlong *)operator_new(0x18);
  plVar6 = plVar9;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_14413b698;
    plVar7[2] = (longlong)plVar11;
    plVar6 = plVar7;
  }
  local_28 = plVar11;
  local_20 = plVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_28,plVar11,plVar11);
  if ((longlong **)(param_1 + 0x840) != &local_28) {
    *(longlong **)(param_1 + 0x840) = plVar11;
    local_28 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x848,&local_20);
    plVar6 = local_20;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar6 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x860) = 0;
  *(undefined4 *)(param_1 + 0x8f8) = 0;
  *(undefined4 *)(param_1 + 0x858) = 0;
  if (*(int *)(param_1 + 0x85c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x850,0);
  }
  *(undefined8 *)(param_1 + 0x890) = _DAT_1468b5d90;
  uVar5 = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x898) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x884) = *(undefined8 *)(param_1 + 0x890);
  *(undefined4 *)(param_1 + 0x88c) = uVar5;
  *(undefined1 *)(param_1 + 0x89c) = 0;
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  if (*(int *)(param_1 + 0x8ac) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x8a0,0);
  }
  FInstanceUpdateCmdBuffer::Reset(param_1 + 0x7f8);
  iVar2 = *(int *)(param_1 + 0x7b0);
  plVar11 = plVar9;
  if (0 < (longlong)iVar2) {
    do {
      iVar10 = (int)plVar11;
      iVar8 = iVar10;
      if ((-1 < iVar10) && (iVar10 < *(int *)(param_1 + 2000))) {
        iVar8 = *(int *)(*(longlong *)(param_1 + 0x7c8) + (longlong)plVar9 * 4);
      }
      if (iVar8 != -1) {
        FInstanceUpdateCmdBuffer::HideInstance(param_1 + 0x7f8);
      }
      plVar9 = (longlong *)((longlong)plVar9 + 1);
      plVar11 = (longlong *)(ulonglong)(iVar10 + 1);
    } while ((longlong)plVar9 < (longlong)iVar2);
  }
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  if (*(int *)(param_1 + 0x7b4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x7a8,0);
  }
  *(undefined4 *)(param_1 + 2000) = 0;
  if (*(int *)(param_1 + 0x7d4) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x7c8,0);
  }
  plVar11 = *(longlong **)(param_1 + 0x810);
  *(undefined8 *)(param_1 + 0x810) = 0;
  if (plVar11 != (longlong *)0x0) {
    puVar3 = (undefined8 *)*plVar11;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = (undefined8 *)plVar11[4];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = (undefined8 *)plVar11[2];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    FMemory::operator_delete(plVar11,0x38);
  }
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  FUN_1424e8820(param_1);
  FUN_1423424e0(param_1);
  FUN_142252d00(param_1);
  return;
}



// FUNCTION 1424bf290 FUN_1424bf290 body=25 status=ok
// SIG undefined FUN_1424bf290(void)

void FUN_1424bf290(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
    return;
  }
  return;
}



// FUNCTION 1424bf2b0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FKey,float>,TDefaultMapHashableKeyFuncs<FKey,float,0>,FDefaultSetAllocator>::
ConditionalRehash(longlong param_1,uint param_2,char param_3)

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



// FUNCTION 1424bf360 ConstructCompiledInstance body=77 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FRecomputeTangentsPerTrianglePassCS<1>::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x108);
  if (puVar1 != (undefined8 *)0x0) {
    FBaseRecomputeTangents::FBaseRecomputeTangents(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450ccfc8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424bf3b0 ConstructCompiledInstance body=77 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TGPUSkinCacheCS<1>::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FBaseGPUSkinCacheCS::FBaseGPUSkinCacheCS(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450ccdc8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424bf400 ConstructCompiledInstance body=107 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FRadixSortClearOffsetsCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d913d8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"OutOffsets",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424bf470 ConstructCompiledInstance body=304 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FRadixSortDownsweepCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b230;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"RadixSortParameterBuffer",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"InKeys",0);
    FShaderResourceParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"InValues",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"InOffsets",0);
    FShaderResourceParameter::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"OutKeys",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"OutValues",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424bf5a0 ConstructCompiledInstance body=149 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FRadixSortSpineCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91290;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"InOffsets",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"OutOffsets",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424bf640 ConstructCompiledInstance body=190 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FRadixSortUpsweepCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450cd288;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"RadixSortParameterBuffer",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"InKeys",0);
    FShaderResourceParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"OutOffsets",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424bf700 ConstructCompiledInstance body=276 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FRecomputeTangentsPerVertexPassCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dde018;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"IntermediateAccumBufferUAV",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"TangentBufferUAV",0);
    FShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"SkinCacheStart",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18),L"NumVertices",0)
    ;
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"InputStreamStart",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424bf820 FUN_1424bf820 body=67 status=ok
// SIG undefined FUN_1424bf820(void)

undefined8 * FUN_1424bf820(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x18);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined4 *)((longlong)puVar1 + 10) = 0;
      *puVar1 = &PTR_FUN_1450cd988;
      *(undefined4 *)(puVar1 + 2) = 0;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424bf870 ConstructFGeometryCacheVertexVertexFactoryShaderParameters body=86 status=ok
// SIG undefined ConstructFGeometryCacheVertexVertexFactoryShaderParameters(void)

undefined8 * ConstructFGeometryCacheVertexVertexFactoryShaderParameters(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x28);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = &PTR_FUN_1450cd610;
      *(undefined8 *)((longlong)puVar1 + 10) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x12) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x1a) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x22) = 0;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424bf8d0 ConstructSerializedInstance body=57 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FRecomputeTangentsPerTrianglePassCS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x108);
  if (puVar1 != (undefined8 *)0x0) {
    FBaseRecomputeTangents::FBaseRecomputeTangents(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450ccfc8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424bf910 ConstructSerializedInstance body=57 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TGPUSkinCacheCS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FBaseGPUSkinCacheCS::FBaseGPUSkinCacheCS(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450ccdc8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424bf950 FUN_1424bf950 body=72 status=ok
// SIG undefined FUN_1424bf950(void)

undefined8 * FUN_1424bf950(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__1450cd288;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424bf9a0 FUN_1424bf9a0 body=524 status=ok
// SIG undefined FUN_1424bf9a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424bf9a0(longlong param_1,longlong param_2)

{
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  undefined1 local_f9;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined1 local_eb;
  undefined1 local_ea;
  undefined1 local_e9;
  undefined1 local_e8 [64];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [32];
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28 [4];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_30 = 0xffffffffffffffff;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28[0] = 0;
  local_118 = *(undefined8 *)(param_1 + 0x6b8);
  local_110 = *(undefined4 *)(param_1 + 0x6c0);
  local_10c = *(undefined1 *)(param_1 + 0x6c4);
  local_10b = *(undefined1 *)(param_1 + 0x6c5);
  local_10a = *(undefined1 *)(param_1 + 0x6c6);
  local_109 = *(undefined1 *)(param_1 + 0x6c7);
  local_108 = *(undefined8 *)(param_1 + 0x6c8);
  local_100 = *(undefined4 *)(param_1 + 0x6d0);
  local_fc = *(undefined1 *)(param_1 + 0x6d4);
  local_fb = *(undefined1 *)(param_1 + 0x6d5);
  local_fa = *(undefined1 *)(param_1 + 0x6d6);
  local_f9 = *(undefined1 *)(param_1 + 0x6d7);
  local_f8 = *(undefined8 *)(param_1 + 0x6d8);
  local_f0 = *(undefined4 *)(param_1 + 0x6e0);
  local_ec = *(undefined1 *)(param_1 + 0x6e4);
  local_eb = *(undefined1 *)(param_1 + 0x6e5);
  local_ea = *(undefined1 *)(param_1 + 0x6e6);
  local_e9 = *(undefined1 *)(param_1 + 0x6e7);
  local_60 = 0;
  uStack_58 = 0;
  TArray<FVertexStreamComponent,TFixedAllocator<4>_>::operator=(local_e8,param_1 + 0x6e8);
  FUN_1424b67d0(local_90,param_1 + 0x740);
  _guard_xfg_dispatch_icall_nop(local_28,(void *)(param_1 + 0x7a8),2);
  uStack_58 = *(undefined8 *)(param_1 + 0x778);
  local_50 = *(undefined8 *)(param_1 + 0x780);
  _guard_xfg_dispatch_icall_nop(&local_40,(void *)(param_1 + 0x790),0x10);
  local_48 = *(undefined8 *)(param_1 + 0x788);
  local_30 = *(undefined8 *)(param_1 + 0x7a0);
  local_20 = *(undefined1 *)(param_1 + 0x7f0);
  FUN_142578240(param_2,&local_118);
  FUN_1424b6ac0(param_2 + 0x7e8,&local_118);
  *(undefined1 *)(param_2 + 0x8e0) = local_20;
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424bfbb0 CreateCopy body=117 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<0,UHierarchicalInstancedStaticMeshComponent,TTypeWrapper<void>___cdecl(enum_ENamedThreads::Type,TRefCountPtr<FGraphEvent>_const_&),TSharedRef<FClusterBuilder,1>,double>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x40);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1450cece0;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    puVar3[3] = uVar2;
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar3[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
    puVar3[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar3 = &PTR_FUN_1450ced28;
  }
  return;
}



// FUNCTION 1424bfc30 FUN_1424bfc30 body=605 status=ok
// SIG undefined FUN_1424bfc30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1424bfc30(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar13 = 0;
  uVar14 = 0x11;
  uVar11 = 0x11;
  uVar12 = uVar13;
  do {
    uVar10 = uVar11 + (int)uVar12 >> 1;
    if (*(uint *)(&DAT_146532ba0 + (ulonglong)(uVar10 - 1) * 4) < param_3) {
      uVar12 = (ulonglong)uVar10;
      uVar10 = uVar11;
    }
    uVar11 = uVar10;
  } while (1 < uVar11 - (int)uVar12);
  plVar8 = (longlong *)((uVar12 + 1) * 0x10 + param_1);
  lVar6 = (longlong)(int)plVar8[1];
  if ((int)plVar8[1] < 1) {
    do {
      uVar11 = uVar14 + (int)uVar13 >> 1;
      if (*(uint *)(&DAT_146532ba0 + (ulonglong)(uVar11 - 1) * 4) < param_3) {
        uVar13 = (ulonglong)uVar11;
        uVar11 = uVar14;
      }
      uVar14 = uVar11;
    } while (1 < uVar14 - (int)uVar13);
    uVar1 = *(undefined4 *)(&DAT_146532ba0 + uVar13 * 4);
    *param_2 = 0;
    param_2[1] = 0;
    local_b0 = &local_88;
    local_74 = _DAT_1468b5d78;
    uStack_70 = uRam00000001468b5d7c;
    uStack_6c = uRam00000001468b5d80;
    uStack_68 = uRam00000001468b5d84;
    local_78 = 1;
    local_88 = 0;
    uStack_80 = 0;
    local_64 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b8 = 0x202;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_a8,&DAT_146ab6e78,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_a8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
    local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,1);
    local_b8 = 0x10;
    (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,&local_a8,&DAT_146ab6e78,*param_2);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2 + 1,&local_a8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
  }
  else {
    lVar2 = *plVar8;
    uVar3 = *(undefined8 *)(lVar2 + -0x18 + lVar6 * 0x18);
    *(undefined8 *)(lVar2 + -0x18 + lVar6 * 0x18) = 0;
    local_a8 = *(undefined8 *)(lVar2 + -0x10 + lVar6 * 0x18);
    *(undefined8 *)(lVar2 + -0x10 + lVar6 * 0x18) = 0;
    lVar4 = plVar8[1];
    local_90 = *(undefined4 *)(lVar2 + -8 + lVar6 * 0x18);
    local_8c = *(undefined4 *)(lVar2 + -4 + lVar6 * 0x18);
    iVar9 = (int)lVar4 + -1;
    lVar6 = *plVar8 + (longlong)iVar9 * 0x18;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6 + 8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6);
    iVar7 = (int)plVar8[1];
    iVar5 = (iVar7 - iVar9) + -1;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar8 + (longlong)iVar9 * 0x18),
                 (void *)(*plVar8 + (longlong)(int)lVar4 * 0x18),(longlong)iVar5 * 0x18);
      iVar7 = (int)plVar8[1];
    }
    *(int *)(plVar8 + 1) = iVar7 + -1;
    TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink();
    local_a0 = 0;
    local_98 = 0;
    *param_2 = uVar3;
    param_2[1] = local_a8;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_98);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a0);
  }
  return param_2;
}



// FUNCTION 1424bfe90 FUN_1424bfe90 body=605 status=ok
// SIG undefined FUN_1424bfe90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1424bfe90(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar13 = 0;
  uVar14 = 0x11;
  uVar11 = 0x11;
  uVar12 = uVar13;
  do {
    uVar10 = uVar11 + (int)uVar12 >> 1;
    if (*(uint *)(&DAT_146532ba0 + (ulonglong)(uVar10 - 1) * 4) < param_3) {
      uVar12 = (ulonglong)uVar10;
      uVar10 = uVar11;
    }
    uVar11 = uVar10;
  } while (1 < uVar11 - (int)uVar12);
  plVar8 = (longlong *)((uVar12 + 1) * 0x10 + param_1);
  lVar6 = (longlong)(int)plVar8[1];
  if ((int)plVar8[1] < 1) {
    do {
      uVar11 = uVar14 + (int)uVar13 >> 1;
      if (*(uint *)(&DAT_146532ba0 + (ulonglong)(uVar11 - 1) * 4) < param_3) {
        uVar13 = (ulonglong)uVar11;
        uVar11 = uVar14;
      }
      uVar14 = uVar11;
    } while (1 < uVar14 - (int)uVar13);
    uVar1 = *(undefined4 *)(&DAT_146532ba0 + uVar13 * 4);
    *param_2 = 0;
    param_2[1] = 0;
    local_b0 = &local_88;
    local_74 = _DAT_1468b5d78;
    uStack_70 = uRam00000001468b5d7c;
    uStack_6c = uRam00000001468b5d80;
    uStack_68 = uRam00000001468b5d84;
    local_78 = 1;
    local_88 = 0;
    uStack_80 = 0;
    local_64 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b8 = 0x202;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_a8,&DAT_146ab6e78,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,&local_a8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
    local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,0x11);
    local_b8 = 8;
    (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,&local_a8,&DAT_146ab6e78,*param_2);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2 + 1,&local_a8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
  }
  else {
    lVar2 = *plVar8;
    uVar3 = *(undefined8 *)(lVar2 + -0x18 + lVar6 * 0x18);
    *(undefined8 *)(lVar2 + -0x18 + lVar6 * 0x18) = 0;
    local_a8 = *(undefined8 *)(lVar2 + -0x10 + lVar6 * 0x18);
    *(undefined8 *)(lVar2 + -0x10 + lVar6 * 0x18) = 0;
    lVar4 = plVar8[1];
    local_90 = *(undefined4 *)(lVar2 + -8 + lVar6 * 0x18);
    local_8c = *(undefined4 *)(lVar2 + -4 + lVar6 * 0x18);
    iVar9 = (int)lVar4 + -1;
    lVar6 = *plVar8 + (longlong)iVar9 * 0x18;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6 + 8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6);
    iVar7 = (int)plVar8[1];
    iVar5 = (iVar7 - iVar9) + -1;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar8 + (longlong)iVar9 * 0x18),
                 (void *)(*plVar8 + (longlong)(int)lVar4 * 0x18),(longlong)iVar5 * 0x18);
      iVar7 = (int)plVar8[1];
    }
    *(int *)(plVar8 + 1) = iVar7 + -1;
    TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink();
    local_a0 = 0;
    local_98 = 0;
    *param_2 = uVar3;
    param_2[1] = local_a8;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_98);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a0);
  }
  return param_2;
}



// FUNCTION 1424c0100 FUN_1424c0100 body=241 status=ok
// SIG undefined FUN_1424c0100(void)

undefined8 FUN_1424c0100(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  if ((*(longlong *)(param_1 + 0x7e8) == 0) &&
     (FUN_1424fbbf0(param_1,1,0,0), *(longlong *)(param_1 + 0x7e8) == 0)) {
    return 0;
  }
  if (((*(longlong *)(param_1 + 0x728) != 0) &&
      (cVar2 = FUN_142820890(*(longlong *)(param_1 + 0x728),0,0xffffffff), cVar2 != '\0')) &&
     (*(longlong *)(param_1 + 0x7e8) != 0)) {
    iVar1 = *(int *)(param_1 + 0x7b0);
    *(undefined8 *)(param_1 + 0x7e0) = *(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x10);
    lVar3 = operator_new(0x530);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x120);
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
      }
      uVar5 = FUN_1424b4860(lVar3,iVar1 == 0,param_1,*(undefined4 *)(lVar4 + 0x1c0));
    }
    return uVar5;
  }
  return 0;
}



// FUNCTION 1424c0200 FUN_1424c0200 body=332 status=ok
// SIG undefined FUN_1424c0200(void)

undefined8 * FUN_1424c0200(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_1450cecd0;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1424c0350 FUN_1424c0350 body=332 status=ok
// SIG undefined FUN_1424c0350(void)

undefined8 * FUN_1424c0350(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_1450cecc0;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1424c04a0 DecompressWholeImage body=593 status=ok
// SIG undefined DecompressWholeImage(void)

void FHDRLoadHelper::DecompressWholeImage(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte bVar14;
  uint uVar15;
  byte *pbVar16;
  byte *local_res8;
  
  pbVar13 = (byte *)*param_1;
  uVar11 = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    uVar12 = *(uint *)(param_1 + 1);
    local_res8 = pbVar13;
    do {
      pbVar1 = (byte *)(param_2 + (ulonglong)(uVar12 * uVar11) * 4);
      if (uVar12 - 8 < 0x7ff8) {
        if (*pbVar13 == 2) {
          bVar14 = pbVar13[1];
          bVar2 = pbVar13[2];
          bVar3 = pbVar13[3];
          pbVar13 = pbVar13 + 4;
          local_res8 = pbVar13;
          if ((bVar14 == 2) && (-1 < (char)bVar2)) {
            lVar10 = 4;
            pbVar16 = pbVar1;
            do {
              uVar15 = 0;
              pbVar7 = pbVar16;
              if (uVar12 != 0) {
                do {
                  bVar14 = *pbVar13;
                  local_res8 = pbVar13 + 1;
                  uVar8 = (uint)bVar14;
                  uVar9 = (ulonglong)uVar8;
                  if (bVar14 < 0x81) {
                    if (bVar14 != 0) {
                      do {
                        bVar14 = *local_res8;
                        local_res8 = local_res8 + 1;
                        *pbVar7 = bVar14;
                        pbVar7 = pbVar7 + 4;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                  }
                  else {
                    bVar2 = *local_res8;
                    local_res8 = pbVar13 + 2;
                    uVar8 = uVar8 & 0x7f;
                    if ((bVar14 & 0x7f) != 0) {
                      uVar9 = (ulonglong)uVar8;
                      do {
                        *pbVar7 = bVar2;
                        pbVar7 = pbVar7 + 4;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                  }
                  uVar15 = uVar15 + uVar8;
                  pbVar13 = local_res8;
                } while (uVar15 < uVar12);
              }
              pbVar16 = pbVar16 + 1;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          else {
            *pbVar1 = 2;
            pbVar1[1] = bVar14;
            pbVar1[2] = bVar2;
            pbVar1[3] = bVar3;
            OldDecompressScanline(pbVar1 + 4,&local_res8,uVar12 - 1);
            pbVar13 = local_res8;
          }
        }
        else {
          OldDecompressScanline(pbVar1,&local_res8,uVar12);
          pbVar13 = local_res8;
        }
      }
      else {
        bVar14 = 0;
        pbVar16 = pbVar1;
        while (uVar12 != 0) {
          bVar2 = *pbVar13;
          bVar3 = pbVar13[1];
          bVar4 = pbVar13[2];
          bVar5 = pbVar13[3];
          pbVar13 = pbVar13 + 4;
          *pbVar16 = bVar2;
          pbVar16[1] = bVar3;
          pbVar16[2] = bVar4;
          pbVar16[3] = bVar5;
          pbVar16 = pbVar16 + 4;
          local_res8 = pbVar13;
          if (((bVar2 == 1) && (bVar3 == 1)) && (bVar4 == 1)) {
            for (iVar6 = (uint)bVar5 << (bVar14 & 0x1f); 0 < iVar6; iVar6 = iVar6 + -1) {
              pbVar16[0] = 1;
              pbVar16[1] = 1;
              uVar12 = uVar12 - 1;
              pbVar16[2] = 1;
              pbVar16[3] = bVar5;
              pbVar16 = pbVar16 + 4;
            }
            bVar14 = bVar14 + 8;
          }
          else {
            bVar14 = 0;
            uVar12 = uVar12 - 1;
          }
        }
      }
      uVar15 = 0;
      uVar12 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar8 = uVar15 * 4;
          uVar15 = uVar15 + 1;
          uVar12 = uVar8 + 2;
          bVar14 = pbVar1[uVar8];
          pbVar1[uVar8] = pbVar1[uVar12];
          pbVar1[uVar12] = bVar14;
          uVar12 = *(uint *)(param_1 + 1);
        } while (uVar15 < uVar12);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)((longlong)param_1 + 0xc));
  }
  return;
}



// FUNCTION 1424c0700 FUN_1424c0700 body=206 status=ok
// SIG undefined FUN_1424c0700(void)

ulonglong FUN_1424c0700(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = 0;
  if (*(longlong *)(param_1 + 0x728) != 0) {
    cVar3 = FUN_142820890(*(longlong *)(param_1 + 0x728),1,0);
    if (cVar3 != '\0') {
      iVar4 = UStaticMesh::GetNumVertices(*(undefined8 *)(param_1 + 0x728),0);
      goto LAB_1424c0742;
    }
  }
  iVar4 = 0;
LAB_1424c0742:
  lVar2 = DAT_146af9e20;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    if (DVar5 != DAT_1468c21c0) {
      lVar7 = 4;
    }
  }
  if (iVar4 != 0) {
    uVar1 = (longlong)*(int *)(lVar7 + lVar2) / (longlong)iVar4;
    iVar4 = (int)uVar1;
    if (iVar4 < 1) {
      return 1;
    }
    uVar6 = 0x400;
    if (iVar4 < 0x400) {
      uVar6 = uVar1 & 0xffffffff;
    }
    return uVar6;
  }
  return 0x10;
}



// FUNCTION 1424c07d0 FUN_1424c07d0 body=47 status=ok
// SIG undefined FUN_1424c07d0(void)

void FUN_1424c07d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1424b5b70(lVar1);
    FMemory::operator_delete(lVar1,0xb8);
    return;
  }
  return;
}



// FUNCTION 1424c0800 FUN_1424c0800 body=2380 status=ok
// SIG undefined FUN_1424c0800(void)

void FUN_1424c0800(longlong *param_1,float *param_2,undefined8 param_3,float param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  longlong *plVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_res8 [2];
  undefined4 local_178;
  float local_174;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  undefined1 local_168 [8];
  undefined8 *local_160;
  undefined4 *local_158;
  undefined8 *local_150;
  undefined4 *local_148;
  undefined8 *local_140;
  float *local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  float *pfVar11;
  
  pfVar12 = (float *)0x0;
  uVar9 = (uint)(param_2[2] != 0.0);
  if (param_2[5] != 0.0) {
    uVar9 = (param_2[2] != 0.0) + 1;
  }
  if (param_2[8] != 0.0) {
    uVar9 = uVar9 + 1;
  }
  if (param_2[0xb] != 0.0) {
    uVar9 = uVar9 + 1;
  }
  if (param_2[0xe] != 0.0) {
    uVar9 = uVar9 + 1;
  }
  if (param_2[0x11] != 0.0) {
    uVar9 = uVar9 + 1;
  }
  if (param_2[0x14] != 0.0) {
    uVar9 = uVar9 + 1;
  }
  if (param_2[0x17] != 0.0) {
    uVar9 = uVar9 + 1;
  }
  if (param_2[0x1a] != 0.0) {
    uVar9 = uVar9 + 1;
  }
  if (param_2[0x1d] != 0.0) {
    uVar9 = uVar9 + 1;
  }
  if (param_2[0x20] != 0.0) {
    uVar9 = uVar9 + 1;
  }
  if ((*(int *)((longlong)param_1 + 0xd4) != 0) || (uVar9 != 0)) {
    pfVar8 = param_2 + 7;
    pfVar6 = (float *)((longlong)param_1 + 0x5c);
    pfVar11 = pfVar12;
    do {
      iVar5 = *(int *)((longlong)param_1 + 0xd4);
      iVar4 = (int)pfVar11;
      if ((iVar5 < iVar4 + 1) && (iVar4 + 1 <= (int)uVar9)) {
        fVar15 = pfVar8[-6];
        pfVar6[-3] = pfVar8[-7];
        pfVar6[-2] = fVar15;
        iVar5 = *(int *)((longlong)param_1 + 0xd4);
      }
      if ((iVar5 < iVar4 + 2) && (iVar4 + 2 <= (int)uVar9)) {
        fVar15 = pfVar8[-3];
        pfVar6[-1] = pfVar8[-4];
        *pfVar6 = fVar15;
        iVar5 = *(int *)((longlong)param_1 + 0xd4);
      }
      if ((iVar5 < iVar4 + 3) && (iVar4 + 3 <= (int)uVar9)) {
        fVar15 = *pfVar8;
        pfVar6[1] = pfVar8[-1];
        pfVar6[2] = fVar15;
        iVar5 = *(int *)((longlong)param_1 + 0xd4);
      }
      if ((iVar5 < iVar4 + 4) && (iVar4 + 4 <= (int)uVar9)) {
        fVar15 = pfVar8[3];
        pfVar6[3] = pfVar8[2];
        pfVar6[4] = fVar15;
        iVar5 = *(int *)((longlong)param_1 + 0xd4);
      }
      if ((iVar5 < iVar4 + 5) && (iVar4 + 5 <= (int)uVar9)) {
        fVar15 = pfVar8[6];
        pfVar6[5] = pfVar8[5];
        pfVar6[6] = fVar15;
        iVar5 = *(int *)((longlong)param_1 + 0xd4);
      }
      if ((iVar5 < iVar4 + 6) && (iVar4 + 6 <= (int)uVar9)) {
        fVar15 = pfVar8[9];
        pfVar6[7] = pfVar8[8];
        pfVar6[8] = fVar15;
        iVar5 = *(int *)((longlong)param_1 + 0xd4);
      }
      if ((iVar5 < iVar4 + 7) && (iVar4 + 7 <= (int)uVar9)) {
        fVar15 = pfVar8[0xc];
        pfVar6[9] = pfVar8[0xb];
        pfVar6[10] = fVar15;
        iVar5 = *(int *)((longlong)param_1 + 0xd4);
      }
      if ((iVar5 < iVar4 + 8) && (iVar4 + 8 <= (int)uVar9)) {
        fVar15 = pfVar8[0xf];
        pfVar6[0xb] = pfVar8[0xe];
        pfVar6[0xc] = fVar15;
        iVar5 = *(int *)((longlong)param_1 + 0xd4);
      }
      if ((iVar5 < iVar4 + 9) && (iVar4 + 9 <= (int)uVar9)) {
        fVar15 = pfVar8[0x12];
        pfVar6[0xd] = pfVar8[0x11];
        pfVar6[0xe] = fVar15;
        iVar5 = *(int *)((longlong)param_1 + 0xd4);
      }
      if ((iVar5 < iVar4 + 10) && (iVar4 + 10 <= (int)uVar9)) {
        fVar15 = pfVar8[0x15];
        pfVar6[0xf] = pfVar8[0x14];
        pfVar6[0x10] = fVar15;
        iVar5 = *(int *)((longlong)param_1 + 0xd4);
      }
      uVar10 = iVar4 + 0xb;
      pfVar11 = (float *)(ulonglong)uVar10;
      if ((iVar5 < (int)uVar10) && ((int)uVar10 <= (int)uVar9)) {
        fVar15 = pfVar8[0x18];
        pfVar6[0x11] = pfVar8[0x17];
        pfVar6[0x12] = fVar15;
      }
      pfVar6 = pfVar6 + 0x16;
      pfVar8 = pfVar8 + 0x21;
    } while (uVar10 < 0xb);
    if (1 < uVar9) {
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = param_1 + 7;
        }
        fVar15 = *(float *)((longlong)plVar7 +
                           ((longlong)((int)((ulonglong)DAT_1469ea738 >> 0x20) + (int)DAT_1469ea738)
                           & (longlong)(int)param_1[9] - 1U) * 4);
        if (fVar15 != -NAN) {
          do {
            pfVar8 = (float *)(*param_1 + (longlong)(int)fVar15 * 0x28);
            if (*(longlong *)(*param_1 + (longlong)(int)fVar15 * 0x28) == DAT_1469ea738) {
              if (fVar15 != -NAN) goto LAB_1424c0b53;
              break;
            }
            fVar15 = pfVar8[8];
          } while (fVar15 != -NAN);
        }
      }
      pfVar8 = pfVar12;
LAB_1424c0b53:
      fVar15 = *param_2;
      fVar14 = param_2[1];
      fVar2 = param_2[3];
      fVar3 = param_2[4];
      pfVar6 = pfVar8 + 6;
      if (pfVar8 == (float *)0x0) {
        pfVar6 = pfVar12;
      }
      if (pfVar6 == (float *)0x0) {
        if (((*(float *)((longlong)param_1 + 0xbc) == 0.0) ||
            (fVar13 = *(float *)((longlong)param_1 + 0xac) - fVar14,
            10000.0 < fVar13 * fVar13 +
                      (*(float *)(param_1 + 0x15) - fVar15) * (*(float *)(param_1 + 0x15) - fVar15))
            ) || (fVar13 = *(float *)((longlong)param_1 + 0xb4) - fVar3,
                 10000.0 < fVar13 * fVar13 +
                           (*(float *)(param_1 + 0x16) - fVar2) *
                           (*(float *)(param_1 + 0x16) - fVar2))) {
          *(float *)((longlong)param_1 + 0xbc) =
               (fVar14 - fVar3) * (fVar14 - fVar3) + (fVar15 - fVar2) * (fVar15 - fVar2);
        }
        local_160 = &DAT_1469ea738;
        local_158 = local_res8;
        local_res8[0] = 0x3f800000;
        FUN_1424b1aa0(param_1,local_170,&local_160,0);
        if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
          plVar7 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar7 = param_1 + 7;
          }
          iVar5 = *(int *)((longlong)plVar7 +
                          ((longlong)((int)((ulonglong)DAT_1469ea738 >> 0x20) + (int)DAT_1469ea738)
                          & (longlong)(int)param_1[9] - 1U) * 4);
          if (iVar5 != -1) {
            do {
              lVar1 = *param_1 + (longlong)iVar5 * 0x28;
              if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x28) == DAT_1469ea738) {
                if ((iVar5 != -1) && (pfVar6 = (float *)(lVar1 + 0x18), lVar1 != 0))
                goto LAB_1424c0cbc;
                break;
              }
              iVar5 = *(int *)(lVar1 + 0x20);
            } while (iVar5 != -1);
          }
        }
        pfVar6 = pfVar12;
      }
LAB_1424c0cbc:
      *pfVar6 = ((fVar14 - fVar3) * (fVar14 - fVar3) + (fVar15 - fVar2) * (fVar15 - fVar2)) /
                *(float *)((longlong)param_1 + 0xbc);
      local_130 = DAT_1469ea738;
      local_128 = DAT_1469ea740;
      local_120 = DAT_1469ea748;
      if (DAT_1469ea748 != 0) {
        LOCK();
        *(int *)(DAT_1469ea748 + 8) = *(int *)(DAT_1469ea748 + 8) + 1;
        UNLOCK();
      }
      FUN_1424c9500(param_1,param_3,&local_130,1,0);
      *(float *)(param_1 + 0x15) = fVar15;
      *(float *)((longlong)param_1 + 0xac) = fVar14;
      *(float *)(param_1 + 0x16) = fVar2;
      *(float *)((longlong)param_1 + 0xb4) = fVar3;
      fVar14 = (float)FGenericPlatformMath::Atan2(param_2[1] - param_2[4],*param_2 - param_2[3]);
      fVar14 = fVar14 * 57.295776;
      fVar15 = (float)(int)(fVar14 * 0.0027777778) * 360.0;
      if (ABS(fVar14) < ABS(fVar15)) {
        fVar15 = fVar14;
      }
      fVar14 = fVar14 - fVar15;
      if (fVar14 < 0.0) {
        fVar14 = fVar14 + 360.0;
      }
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = param_1 + 7;
        }
        fVar15 = *(float *)((longlong)plVar7 +
                           ((longlong)((int)((ulonglong)DAT_1469ea870 >> 0x20) + (int)DAT_1469ea870)
                           & (longlong)(int)param_1[9] - 1U) * 4);
        if (fVar15 != -NAN) {
          do {
            pfVar8 = (float *)(*param_1 + (longlong)(int)fVar15 * 0x28);
            if (*(longlong *)(*param_1 + (longlong)(int)fVar15 * 0x28) == DAT_1469ea870) {
              if (fVar15 != -NAN) goto LAB_1424c0e33;
              break;
            }
            fVar15 = pfVar8[8];
          } while (fVar15 != -NAN);
        }
      }
      pfVar8 = pfVar12;
LAB_1424c0e33:
      pfVar6 = pfVar8 + 6;
      if (pfVar8 == (float *)0x0) {
        pfVar6 = pfVar12;
      }
      if (pfVar6 == (float *)0x0) {
        *(float *)(param_1 + 0x18) = fVar14;
        local_150 = &DAT_1469ea870;
        local_148 = &local_178;
        local_178 = 0;
        FUN_1424b1aa0(param_1,local_16c,&local_150,0);
        local_118 = DAT_1469ea870;
        local_110 = DAT_1469ea878;
        local_108 = DAT_1469ea880;
        if (DAT_1469ea880 != 0) {
          LOCK();
          *(int *)(DAT_1469ea880 + 8) = *(int *)(DAT_1469ea880 + 8) + 1;
          UNLOCK();
        }
        plVar7 = &local_118;
      }
      else {
        *pfVar6 = fVar14 - *(float *)(param_1 + 0x18);
        local_100 = DAT_1469ea870;
        local_f8 = DAT_1469ea878;
        local_f0 = DAT_1469ea880;
        if (DAT_1469ea880 != 0) {
          LOCK();
          *(int *)(DAT_1469ea880 + 8) = *(int *)(DAT_1469ea880 + 8) + 1;
          UNLOCK();
        }
        plVar7 = &local_100;
      }
      FUN_1424c9500(param_1,param_3,plVar7,1,0);
    }
    if ((1 < *(int *)((longlong)param_1 + 0xd4)) && (uVar9 < 2)) {
      local_e8 = DAT_1469ea738;
      local_e0 = DAT_1469ea740;
      local_d8 = DAT_1469ea748;
      if (DAT_1469ea748 != 0) {
        LOCK();
        *(int *)(DAT_1469ea748 + 8) = *(int *)(DAT_1469ea748 + 8) + 1;
        UNLOCK();
      }
      FUN_1424c9500(param_1,param_3,&local_e8,0,1);
      local_d0 = DAT_1469ea870;
      local_c8 = DAT_1469ea878;
      local_c0 = DAT_1469ea880;
      if (DAT_1469ea880 != 0) {
        LOCK();
        *(int *)(DAT_1469ea880 + 8) = *(int *)(DAT_1469ea880 + 8) + 1;
        UNLOCK();
      }
      FUN_1424c9500(param_1,param_3,&local_d0,0,1);
    }
    iVar5 = *(int *)((longlong)param_1 + 0xd4);
    if (iVar5 == 0) {
      if (uVar9 == 1) {
        *(undefined4 *)(param_1 + 0x1a) = 0;
      }
    }
    else {
      if (iVar5 == 1) {
        if (uVar9 == 1) {
          fVar15 = param_2[1];
          *(float *)(param_1 + 0x19) = *param_2;
          *(float *)((longlong)param_1 + 0xcc) = fVar15;
          *(float *)(param_1 + 0x1a) = param_4 + *(float *)(param_1 + 0x1a);
          goto LAB_1424c1125;
        }
      }
      else if (iVar5 < 1) goto LAB_1424c1125;
      if (((uVar9 == 0) &&
          (*(float *)(param_1 + 0x1a) <= 0.25 && *(float *)(param_1 + 0x1a) != 0.25)) &&
         (fVar15 = *(float *)((longlong)param_1 + 0xcc) - *(float *)((longlong)param_1 + 0x54),
         10000.0 < (*(float *)(param_1 + 0x19) - *(float *)(param_1 + 10)) *
                   (*(float *)(param_1 + 0x19) - *(float *)(param_1 + 10)) + fVar15 * fVar15)) {
        local_174 = (float)FGenericPlatformMath::Atan2
                                     (*(float *)((longlong)param_1 + 0x54) -
                                      *(float *)((longlong)param_1 + 0xcc));
        local_174 = local_174 * 57.295776;
        fVar15 = (float)(int)(local_174 * 0.0027777778) * 360.0;
        if (ABS(local_174) < ABS(fVar15)) {
          fVar15 = local_174;
        }
        local_174 = local_174 - fVar15;
        if (local_174 < 0.0) {
          local_174 = local_174 + 360.0;
        }
        local_140 = &DAT_1469ea858;
        local_138 = &local_174;
        FUN_1424b1aa0(param_1,local_168,&local_140,0);
        local_b8 = DAT_1469ea858;
        local_b0 = DAT_1469ea860;
        local_a8 = DAT_1469ea868;
        if (DAT_1469ea868 != 0) {
          LOCK();
          *(int *)(DAT_1469ea868 + 8) = *(int *)(DAT_1469ea868 + 8) + 1;
          UNLOCK();
        }
        FUN_1424c9500(param_1,param_3,&local_b8,1,1);
      }
    }
  }
LAB_1424c1125:
  *(uint *)((longlong)param_1 + 0xd4) = uVar9;
  return;
}



// FUNCTION 1424c1150 FUN_1424c1150 body=2489 status=ok
// SIG undefined FUN_1424c1150(void)

void FUN_1424c1150(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *plVar23;
  int local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  int local_res20 [2];
  undefined8 in_stack_fffffffffffffeb8;
  undefined4 uVar24;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100 [2];
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined *local_60;
  undefined4 local_58;
  
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
  uVar17 = (ulonglong)(int)DAT_146532bec;
  uVar16 = *(uint *)(param_1 + 0x50);
  plVar6 = (longlong *)0x0;
  local_e8 = (longlong)param_4;
  lVar12 = local_e8 * 0x140 + *(longlong *)(param_3 + 0x20);
  local_f8 = *(longlong **)
              (**(longlong **)(*(longlong *)(param_3 + 0x30) + 0x40) +
              (longlong)*(int *)(param_3 + 0x60) * 8);
  local_res10 = param_2;
  local_res18 = param_3;
  if (uVar16 != DAT_146532bec) {
    if ((int)DAT_146532bec < (int)uVar16) {
      lVar21 = uVar17 * 0x28;
      do {
        plVar13 = (longlong *)(*(longlong *)(param_1 + 0x48) + lVar21);
        if (*plVar13 != 0) {
          piVar1 = (int *)(*plVar13 + 8);
          LOCK();
          iVar10 = *piVar1;
          if (iVar10 == 0) {
            *piVar1 = 0;
            iVar10 = 0;
          }
          UNLOCK();
          if ((iVar10 == 1) && (lVar7 = *plVar13, *(char *)(lVar7 + 0x11) != '\0')) {
            if (DAT_146ab62f3 != '\0') {
              (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar7);
            }
            *(undefined1 *)(lVar7 + 0x11) = 0;
          }
        }
        *(undefined4 *)(plVar13 + 3) = 0;
        TRefCountPtr<FRHIIndexBuffer>::operator=(plVar13,0);
        TRefCountPtr<FRHITexture>::operator=(plVar13 + 1);
        TRefCountPtr<FRHIIndexBuffer>::operator=(plVar13 + 2);
        uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        lVar21 = lVar21 + 0x28;
      } while ((int)uVar16 < *(int *)(param_1 + 0x50));
      uVar17 = (ulonglong)DAT_146532bec;
    }
    FUN_1424d2070(param_1 + 0x48,uVar17 & 0xffffffff,0);
    uVar16 = *(uint *)(param_1 + 0x50);
  }
  uVar11 = *(int *)(lVar12 + 0x114) * 0x18;
  iVar10 = (*(int *)(param_1 + 0x58) + 1) % (int)uVar16;
  *(int *)(param_1 + 0x58) = iVar10;
  lVar21 = *(longlong *)(param_1 + 0x48) + (longlong)iVar10 * 0x28;
  local_f0 = lVar21;
  if ((ulonglong)*(uint *)(lVar21 + 0x18) < (ulonglong)uVar11 << 2) {
    FUN_141ace450(lVar21);
    FUN_141ac25e0(lVar21,4,uVar11,0x1d,CONCAT44(uVar24,8),0,0);
    (**(code **)(*DAT_146ab6358 + 0x2f8))
              (DAT_146ab6358,*(undefined8 *)(lVar21 + 8),L"SkinTangentIntermediate");
  }
  lVar21 = FUN_1419ef210(DAT_1464c9c54);
  local_d8 = 0;
  local_e0 = &DAT_146afa780;
  plVar13 = (longlong *)(lVar21 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar13,local_res20,&local_e0);
  plVar20 = plVar6;
  if (local_res20[0] != -1) {
    plVar20 = (longlong *)((longlong)local_res20[0] * 0x20 + *plVar13);
  }
  local_c8 = 0;
  plVar14 = plVar20 + 2;
  if (plVar20 == (longlong *)0x0) {
    plVar14 = plVar6;
  }
  local_d0 = &DAT_146afa8d0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar13,local_res8,&local_d0);
  plVar20 = plVar6;
  if (local_res8[0] != -1) {
    plVar20 = (longlong *)((longlong)local_res8[0] * 0x20 + *plVar13);
  }
  local_b8 = 0;
  plVar19 = plVar20 + 2;
  if (plVar20 == (longlong *)0x0) {
    plVar19 = plVar6;
  }
  local_c0 = &DAT_146afaa20;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar13,&local_118,&local_c0);
  plVar20 = plVar6;
  if (local_118 != -1) {
    plVar20 = (longlong *)((longlong)local_118 * 0x20 + *plVar13);
  }
  local_a8 = 0;
  plVar18 = plVar20 + 2;
  if (plVar20 == (longlong *)0x0) {
    plVar18 = plVar6;
  }
  local_b0 = &DAT_146afab70;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar13,&local_114,&local_b0);
  plVar20 = plVar6;
  if (local_114 != -1) {
    plVar20 = (longlong *)((longlong)local_114 * 0x20 + *plVar13);
  }
  local_98 = 0;
  plVar22 = plVar20 + 2;
  if (plVar20 == (longlong *)0x0) {
    plVar22 = plVar6;
  }
  local_a0 = &DAT_146afacc0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar13,&local_110,&local_a0);
  plVar20 = plVar6;
  if (local_110 != -1) {
    plVar20 = (longlong *)((longlong)local_110 * 0x20 + *plVar13);
  }
  local_88 = 0;
  plVar23 = plVar20 + 2;
  if (plVar20 == (longlong *)0x0) {
    plVar23 = plVar6;
  }
  local_90 = &DAT_146afae10;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar13,&local_10c,&local_90);
  if (local_10c != -1) {
    plVar6 = (longlong *)((longlong)local_10c * 0x20 + *plVar13);
  }
  plVar20 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar20 = (longlong *)0x0;
  }
  local_78 = 0;
  local_80 = &DAT_146afaf60;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar13,&local_108,&local_80);
  if (local_108 == -1) {
    lVar21 = 0;
  }
  else {
    lVar21 = (longlong)local_108 * 0x20 + *plVar13;
  }
  plVar6 = (longlong *)(lVar21 + 0x10);
  if (lVar21 == 0) {
    plVar6 = (longlong *)0x0;
  }
  local_68 = 0;
  lVar21 = *plVar6;
  local_70 = &DAT_146afb0b0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar13,&local_104,&local_70);
  if (local_104 == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)local_104 * 0x20 + *plVar13;
  }
  plVar6 = (longlong *)(lVar7 + 0x10);
  if (lVar7 == 0) {
    plVar6 = (longlong *)0x0;
  }
  if ((char)local_f8[0x22] == '\0') {
    if (*(char *)(lVar12 + 0x48) == '\0') {
      lVar21 = *plVar20;
      if (DAT_146af763c != 0) {
        lVar21 = *plVar19;
      }
    }
    else {
      lVar21 = *plVar6;
      if (DAT_146af763c != 0) {
        lVar21 = *plVar22;
      }
    }
  }
  else if (*(char *)(lVar12 + 0x48) == '\0') {
    lVar21 = *plVar23;
    if (DAT_146af763c != 0) {
      lVar21 = *plVar14;
    }
  }
  else if (DAT_146af763c != 0) {
    lVar21 = *plVar18;
  }
  iVar10 = *(int *)(lVar12 + 0x114);
  lVar7 = *(longlong *)(lVar21 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar3 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar3);
  lVar7 = local_res10;
  puVar8 = (undefined8 *)(*(longlong *)(local_res10 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar8 + 3;
  if (*(undefined8 **)(local_res10 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(local_res10 + 0x30);
    puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 3;
  }
  lVar4 = local_f0;
  *(undefined8 **)(lVar7 + 0x30) = puVar5;
  *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
  **(undefined8 **)(lVar7 + 8) = puVar8;
  *(undefined8 **)(lVar7 + 8) = puVar8 + 1;
  puVar8[2] = uVar3;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e50;
  local_f0 = *(undefined8 *)(local_f0 + 8);
  puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar8 + 1;
  if (*(undefined8 **)(lVar7 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(lVar7 + 0x30);
    puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 1;
  }
  *(undefined8 **)(lVar7 + 0x30) = puVar5;
  *puVar8 = local_f0;
  puVar9 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar9 + 6;
  if (*(undefined8 **)(lVar7 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(lVar7 + 0x30);
    puVar9 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar9 + 6;
  }
  *(undefined8 **)(lVar7 + 0x30) = puVar5;
  *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
  **(undefined8 **)(lVar7 + 8) = puVar9;
  *(undefined8 **)(lVar7 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar9 + 2) = 1;
  puVar9[3] = puVar8;
  *(undefined4 *)(puVar9 + 4) = 3;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 3;
  puVar9[5] = 0;
  if (DAT_146af763c == 0) {
    lVar15 = local_e8 * 0x108;
    TRefCountPtr<FRHIIndexBuffer>::operator=
              (lVar12 + 0x138,*(undefined8 *)(lVar15 + 0x90 + *local_f8));
    TRefCountPtr<FRHIIndexBuffer>::operator=
              (lVar12 + 0x130,*(undefined8 *)(lVar15 + 0xa0 + *local_f8));
  }
  FBaseRecomputeTangents::SetParameters(lVar21,lVar7,local_res18,lVar12,lVar4);
  DispatchComputeShader(lVar7,lVar21,iVar10 + 0x3fU >> 6,1,1);
  lVar15 = *(longlong *)(lVar21 + 0x48);
  if (*(char *)(lVar15 + 0x28) == '\0') {
    FUN_1419f3850(lVar15);
  }
  uVar3 = *(undefined8 *)(lVar15 + 0x60);
  if (*(short *)(lVar21 + 0xc2) != 0) {
    uVar2 = *(ushort *)(lVar21 + 0xc0);
    puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(lVar7 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(lVar7 + 0x30) = puVar5;
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
    **(undefined8 **)(lVar7 + 8) = puVar8;
    *(undefined8 **)(lVar7 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e40;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar2;
    puVar8[4] = 0;
  }
  local_58 = 0;
  local_60 = &DAT_146af78d0;
  lVar21 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar21 + 0x38,local_100,&local_60);
  plVar6 = (longlong *)0x0;
  if (local_100[0] != -1) {
    plVar6 = (longlong *)((longlong)local_100[0] * 0x20 + *(longlong *)(lVar21 + 0x38));
  }
  plVar13 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  lVar21 = *plVar13;
  lVar15 = *(longlong *)(lVar21 + 0x48);
  if (*(char *)(lVar15 + 0x28) == '\0') {
    FUN_1419f3850(lVar15);
    lVar15 = *(longlong *)(lVar21 + 0x48);
    if (*(char *)(lVar15 + 0x28) == '\0') {
      FUN_1419f3850(lVar15);
    }
  }
  uVar3 = *(undefined8 *)(lVar15 + 0x60);
  FRHIComputeShader::UpdateStats(uVar3);
  puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar8 + 3;
  if (*(undefined8 **)(lVar7 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x20);
    puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 3;
  }
  *(undefined8 **)(lVar7 + 0x30) = puVar5;
  *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
  **(undefined8 **)(lVar7 + 8) = puVar8;
  *(undefined8 **)(lVar7 + 8) = puVar8 + 1;
  puVar8[2] = uVar3;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e50;
  iVar10 = *(int *)(lVar12 + 0x50);
  uVar3 = *(undefined8 *)(lVar4 + 8);
  puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar8 + 1;
  if (*(undefined8 **)(lVar7 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x10);
    puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 1;
  }
  *(undefined8 **)(lVar7 + 0x30) = puVar5;
  *puVar8 = uVar3;
  puVar9 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar9 + 6;
  if (*(undefined8 **)(lVar7 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x38);
    puVar9 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar9 + 6;
  }
  *(undefined8 **)(lVar7 + 0x30) = puVar5;
  *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
  **(undefined8 **)(lVar7 + 8) = puVar9;
  *(undefined8 **)(lVar7 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar9 + 2) = 1;
  puVar9[3] = puVar8;
  *(undefined4 *)(puVar9 + 4) = 2;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 3;
  puVar9[5] = 0;
  FRecomputeTangentsPerVertexPassCS::SetParameters(lVar21,lVar7,local_res18,lVar12,lVar4);
  DispatchComputeShader(lVar7,lVar21,iVar10 + 0x3fU >> 6,1,1);
  lVar12 = *(longlong *)(lVar21 + 0x48);
  if (*(char *)(lVar12 + 0x28) == '\0') {
    FUN_1419f3850(lVar12);
  }
  uVar3 = *(undefined8 *)(lVar12 + 0x60);
  if (*(short *)(lVar21 + 0xc6) != 0) {
    uVar2 = *(ushort *)(lVar21 + 0xc4);
    puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(lVar7 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(lVar7 + 0x30) = puVar5;
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
    **(undefined8 **)(lVar7 + 8) = puVar8;
    *(undefined8 **)(lVar7 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e40;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar2;
    puVar8[4] = 0;
  }
  if (*(short *)(lVar21 + 0xc2) != 0) {
    uVar2 = *(ushort *)(lVar21 + 0xc0);
    puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(lVar7 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(lVar7 + 0x30) = puVar5;
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
    **(undefined8 **)(lVar7 + 8) = puVar8;
    *(undefined8 **)(lVar7 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e40;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar2;
    puVar8[4] = 0;
  }
  return;
}



// FUNCTION 1424c1b10 FUN_1424c1b10 body=2461 status=ok
// SIG undefined FUN_1424c1b10(void)

void FUN_1424c1b10(longlong *param_1,longlong param_2,longlong param_3,int param_4)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar24;
  longlong local_108;
  longlong local_f0;
  longlong local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined *local_58;
  undefined4 local_50;
  
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  plVar10 = (longlong *)0x0;
  plVar19 = (longlong *)((longlong)param_4 * 0x140 + *(longlong *)(param_3 + 0x20));
  lVar21 = plVar19[4];
  lVar23 = lVar21 + 0x658;
  lVar7 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  local_a0 = 0;
  local_a8 = &DAT_146af9fa0;
  plVar9 = (longlong *)(lVar7 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar9,&local_e0,&local_a8);
  plVar22 = plVar10;
  if (local_e0 != -1) {
    plVar22 = (longlong *)((longlong)local_e0 * 0x20 + *plVar9);
  }
  local_90 = 0;
  plVar14 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar14 = plVar10;
  }
  local_98 = &DAT_146afa0f0;
  local_f0 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar9,&local_dc,&local_98);
  plVar22 = plVar10;
  if (local_dc != -1) {
    plVar22 = (longlong *)((longlong)local_dc * 0x20 + *plVar9);
  }
  local_80 = 0;
  plVar14 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar14 = plVar10;
  }
  local_88 = &DAT_146afa240;
  local_e8 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar9,&local_d8,&local_88);
  plVar22 = plVar10;
  if (local_d8 != -1) {
    plVar22 = (longlong *)((longlong)local_d8 * 0x20 + *plVar9);
  }
  local_70 = 0;
  plVar14 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar14 = plVar10;
  }
  local_78 = &DAT_146afa390;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar9,&local_d4,&local_78);
  plVar22 = plVar10;
  if (local_d4 != -1) {
    plVar22 = (longlong *)((longlong)local_d4 * 0x20 + *plVar9);
  }
  local_60 = 0;
  plVar8 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar8 = plVar10;
  }
  lVar7 = *plVar8;
  local_68 = &DAT_146afa4e0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar9,&local_d0);
  plVar22 = plVar10;
  if (local_d0 != -1) {
    plVar22 = (longlong *)((longlong)local_d0 * 0x20 + *plVar9);
  }
  plVar8 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar8 = plVar10;
  }
  local_50 = 0;
  lVar18 = *plVar8;
  local_58 = &DAT_146afa630;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar9,&local_cc,&local_58);
  if (local_cc == -1) {
    lVar12 = 0;
  }
  else {
    lVar12 = (longlong)local_cc * 0x20 + *plVar9;
  }
  iVar2 = *(int *)((longlong)plVar19 + 0x44);
  local_108 = 0;
  if (iVar2 == 0) {
    local_108 = lVar7;
    if ((char)plVar19[9] == '\0') {
      local_108 = local_f0;
    }
  }
  else if (iVar2 == 1) {
    local_108 = lVar18;
    if ((char)plVar19[9] == '\0') {
      local_108 = local_e8;
    }
  }
  else if (iVar2 == 2) {
    if ((char)plVar19[9] == '\0') {
      local_108 = *plVar14;
    }
    else {
      plVar9 = (longlong *)(lVar12 + 0x10);
      if (lVar12 == 0) {
        plVar9 = (longlong *)0x0;
      }
      local_108 = *plVar9;
    }
  }
  uVar17 = (ulonglong)*(uint *)(lVar21 + 0x678);
  iVar2 = *(int *)(lVar21 + 0x680);
  iVar3 = *(int *)(lVar21 + 0x67c);
  lVar21 = uVar17 * 0x10 + lVar23;
  uVar13 = (uint)(iVar2 - iVar3) < 2 ^ uVar17;
  if (*(longlong *)(lVar23 + uVar13 * 0x10) != 0) {
    uVar17 = uVar13;
  }
  lVar23 = uVar17 * 0x10 + lVar23;
  plVar9 = (longlong *)(*plVar19 + 0x50);
  if (*(char *)(*plVar19 + 0x7c) == '\0') {
    plVar9 = (longlong *)0x0;
  }
  plVar19[0x23] = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    lVar7 = plVar9[1];
    iVar20 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar20 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar20);
    }
    *(longlong *)(*param_1 + (longlong)iVar20 * 8) = lVar7;
  }
  lVar7 = 0;
  plVar9 = plVar19 + 2;
  iVar20 = 0;
  plVar22 = plVar19 + 1;
  plVar10 = plVar9;
  plVar14 = plVar22;
  lVar18 = lVar7;
  do {
    if (((int)*plVar14 == iVar3) && (*plVar10 == lVar23)) {
      lVar12 = *plVar19 + (longlong)iVar20 * 0x28;
      break;
    }
    iVar20 = iVar20 + 1;
    lVar18 = lVar18 + 1;
    plVar14 = (longlong *)((longlong)plVar14 + 4);
    plVar10 = plVar10 + 1;
    lVar12 = lVar7;
  } while (lVar18 < 2);
  plVar19[0x25] = lVar12;
  if (lVar12 == 0) {
    FGPUSkinCache::FRWBufferTracker::Advance(plVar19,lVar23,iVar3,lVar21,CONCAT44(uVar24,iVar2));
    iVar20 = 0;
    plVar10 = plVar9;
    plVar14 = plVar22;
    lVar18 = lVar7;
    do {
      if (((int)*plVar14 == iVar3) && (*plVar10 == lVar23)) {
        lVar7 = *plVar19 + (longlong)iVar20 * 0x28;
        break;
      }
      iVar20 = iVar20 + 1;
      lVar18 = lVar18 + 1;
      plVar14 = (longlong *)((longlong)plVar14 + 4);
      plVar10 = plVar10 + 1;
    } while (lVar18 < 2);
    plVar19[0x25] = lVar7;
    lVar7 = *(longlong *)(local_108 + 0x48);
    if (*(char *)(lVar7 + 0x28) == '\0') {
      FUN_1419f3850(lVar7);
    }
    uVar4 = *(undefined8 *)(lVar7 + 0x60);
    FRHIComputeShader::UpdateStats(uVar4);
    puVar1 = (ulonglong *)(param_2 + 0x30);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar15 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(puVar1,0x20);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar15 + 3;
    }
    *puVar1 = (ulonglong)puVar11;
    lVar7 = 0;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_144d91e50;
    puVar15[2] = uVar4;
    if (plVar19[0x23] == 0) {
      bVar6 = false;
      bVar5 = true;
      local_c8 = 0;
    }
    else {
      lVar7 = *(longlong *)(plVar19[0x23] + 8);
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      bVar6 = true;
      bVar5 = false;
      local_f0 = lVar7;
    }
    plVar10 = plVar19;
    FBaseGPUSkinCacheCS::SetParameters
              (local_108,param_2,lVar23,param_3,plVar19,*(undefined8 *)(plVar19[0x25] + 8),lVar7);
    uVar24 = (undefined4)((ulonglong)plVar10 >> 0x20);
    if (bVar5) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c8);
    }
    if (bVar6) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_f0);
    }
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    local_c0 = *(undefined8 *)(plVar19[0x25] + 8);
    puVar11 = puVar15 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(puVar1,0x10);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar15 + 1;
    }
    *puVar1 = (ulonglong)puVar11;
    *puVar15 = local_c0;
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(puVar1,0x38);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar16 + 6;
    }
    *puVar1 = (ulonglong)puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar16;
    *(undefined8 **)(param_2 + 8) = puVar16 + 1;
    puVar16[3] = puVar15;
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar16 + 2) = 1;
    puVar16[4] = 1;
    puVar16[5] = 0;
    lVar7 = plVar19[10];
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar15 + 4;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(puVar1,0x28);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar15 + 4;
    }
    *puVar1 = (ulonglong)puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_144d8df50;
    *(uint *)(puVar15 + 2) = (int)lVar7 + 0x3fU >> 6;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
    *(undefined4 *)(puVar15 + 3) = 1;
    FBaseGPUSkinCacheCS::UnsetParameters(local_108);
    iVar20 = (int)param_1[1];
    uVar4 = *(undefined8 *)(plVar19[0x25] + 8);
    *(int *)(param_1 + 1) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar20 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar20);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar20 * 8) = uVar4;
  }
  uVar13 = 0;
  plVar10 = plVar9;
  plVar14 = plVar22;
  uVar17 = uVar13;
  do {
    if (((int)*plVar14 == iVar2) && (*plVar10 == lVar21)) {
      lVar7 = *plVar19 + (longlong)(int)uVar17 * 0x28;
      goto LAB_1424c219d;
    }
    uVar17 = (ulonglong)((int)uVar17 + 1);
    uVar13 = uVar13 + 1;
    plVar14 = (longlong *)((longlong)plVar14 + 4);
    plVar10 = plVar10 + 1;
  } while ((longlong)uVar13 < 2);
  lVar7 = 0;
LAB_1424c219d:
  plVar19[0x24] = lVar7;
  if (lVar7 == 0) {
    FGPUSkinCache::FRWBufferTracker::Advance(plVar19,lVar21,iVar2,lVar23,CONCAT44(uVar24,iVar3));
    uVar13 = 0;
    uVar17 = uVar13;
    do {
      if (((int)*plVar22 == iVar2) && (*plVar9 == lVar21)) {
        lVar7 = *plVar19 + (longlong)(int)uVar17 * 0x28;
        goto LAB_1424c21f8;
      }
      uVar17 = (ulonglong)((int)uVar17 + 1);
      uVar13 = uVar13 + 1;
      plVar22 = (longlong *)((longlong)plVar22 + 4);
      plVar9 = plVar9 + 1;
    } while ((longlong)uVar13 < 2);
    lVar7 = 0;
LAB_1424c21f8:
    lVar23 = 0;
    plVar19[0x24] = lVar7;
    lVar7 = *(longlong *)(local_108 + 0x48);
    if (*(char *)(lVar7 + 0x28) == '\0') {
      FUN_1419f3850(lVar7);
    }
    uVar4 = *(undefined8 *)(lVar7 + 0x60);
    FRHIComputeShader::UpdateStats(uVar4);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar15 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar15 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_144d91e50;
    puVar15[2] = uVar4;
    if (plVar19[0x23] == 0) {
      bVar6 = false;
      bVar5 = true;
      local_b8 = 0;
    }
    else {
      lVar23 = *(longlong *)(plVar19[0x23] + 8);
      bVar6 = true;
      bVar5 = false;
      local_e8 = lVar23;
      if (lVar23 != 0) {
        LOCK();
        *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
        UNLOCK();
      }
    }
    FBaseGPUSkinCacheCS::SetParameters
              (local_108,param_2,lVar21,param_3,plVar19,*(undefined8 *)(plVar19[0x24] + 8),lVar23);
    if (bVar5) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_b8);
    }
    if (bVar6) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_e8);
    }
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_b0 = *(undefined8 *)(plVar19[0x24] + 8);
    puVar11 = puVar15 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar15 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *puVar15 = local_b0;
    puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar16 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar16 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar16;
    *(undefined8 **)(param_2 + 8) = puVar16 + 1;
    puVar16[3] = puVar15;
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar16 + 2) = 1;
    puVar16[4] = 1;
    puVar16[5] = 0;
    lVar21 = plVar19[10];
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar15 + 4;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar15 + 4;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_144d8df50;
    *(uint *)(puVar15 + 2) = (int)lVar21 + 0x3fU >> 6;
    *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
    *(undefined4 *)(puVar15 + 3) = 1;
    FBaseGPUSkinCacheCS::UnsetParameters(local_108,param_2);
    uVar4 = *(undefined8 *)(plVar19[0x24] + 8);
    iVar2 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar4;
  }
  return;
}



// FUNCTION 1424c24b0 DoRecomputeSkinTangentsOnGPU_RT body=63 status=ok
// SIG undefined DoRecomputeSkinTangentsOnGPU_RT(void)

longlong DoRecomputeSkinTangentsOnGPU_RT(void)

{
  uint7 uVar1;
  
  uVar1 = (uint7)(uint3)(DAT_146ab62cc >> 8);
  if ((((DAT_146ab62cc < 0x1d) && ((0x18151041U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) &&
      (DAT_146af7634 != 0)) &&
     (((DAT_146532b98 != 0 && (DAT_146532be4 != 0)) || (DAT_146af7638 != 0)))) {
    return CONCAT71(uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}



// FUNCTION 1424c24f0 DoSkeletalMeshIndexBuffersNeedSRV body=45 status=ok
// SIG undefined DoSkeletalMeshIndexBuffersNeedSRV(void)

ulonglong DoSkeletalMeshIndexBuffersNeedSRV(void)

{
  ulonglong in_RAX;
  
  if ((DAT_146af7634 != 0) || (DAT_146af7638 != 0)) {
    in_RAX = (ulonglong)DAT_146ab62cc;
    if ((DAT_146ab62cc < 0x1d) && ((0x18151041U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
      return CONCAT71((uint7)(uint3)(DAT_146ab62cc >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1424c2520 FUN_1424c2520 body=333 status=ok
// SIG undefined FUN_1424c2520(void)

void FUN_1424c2520(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  iVar4 = *param_1;
  iVar1 = param_1[1];
  if (iVar4 == 1) {
    cVar2 = FUN_1424ceef0(uVar3,0x200,iVar1);
    if (cVar2 != '\0') goto LAB_1424c2642;
    uVar5 = 0x200;
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 == 3) {
        iVar4 = 0x10;
        uVar5 = 0x10;
        do {
          cVar2 = FUN_1424ceef0(uVar3,uVar5,iVar1);
          if (cVar2 == '\0') goto LAB_1424c2637;
          uVar5 = uVar5 * 2;
        } while ((int)uVar5 < 0x100001);
        do {
          cVar2 = FUN_1424ceef0(uVar3,iVar4 + -1,iVar1);
          if (cVar2 == '\0') {
            uVar5 = iVar4 - 1;
            goto LAB_1424c2637;
          }
          iVar4 = iVar4 * 2;
        } while (iVar4 < 0x100001);
      }
      else if (iVar4 == 4) {
        iVar4 = 0;
        do {
          fVar6 = (float)FGenericPlatformMath::SRand();
          uVar5 = (int)(fVar6 * 1.04856e+06) + 0x1fU & 0xfffffff0;
          cVar2 = FUN_1424ceef0(uVar3,uVar5,iVar1);
          if (cVar2 == '\0') goto LAB_1424c2637;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 1000);
      }
      goto LAB_1424c2642;
    }
    cVar2 = FUN_1424ceef0(uVar3,0x100000,iVar1);
    if (cVar2 != '\0') goto LAB_1424c2642;
    uVar5 = 0x100000;
  }
LAB_1424c2637:
  FUN_1424d0050(uVar3,uVar5,iVar1);
LAB_1424c2642:
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1424c2670 FUN_1424c2670 body=166 status=ok
// SIG undefined FUN_1424c2670(void)

void FUN_1424c2670(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar1 = UTextureRenderTarget::GetRenderTargetResource(*(undefined8 *)*param_1);
  if (lVar1 != 0) {
    lVar1 = UTextureRenderTarget::GetRenderTargetResource(*(undefined8 *)*param_1);
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)(lVar1 + 0x68) + 8))(lVar1 + 0x68);
    lVar1 = *param_1;
    (**(code **)(*DAT_146ab6358 + 0x590))
              (DAT_146ab6358,&DAT_146ab6e78,*puVar2,0,lVar1 + 8,*(undefined4 *)(lVar1 + 0x20),
               *(undefined8 *)(lVar1 + 0x28));
  }
  FMemory::operator_delete(*param_1,0x30);
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1424c2720 DrainPool body=1009 status=ok
// SIG undefined DrainPool(void)

void TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::DrainPool
               (longlong *param_1,char param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong local_res18;
  longlong local_48;
  longlong local_40;
  
  local_res18 = 0;
  plVar10 = param_1 + 3;
  lVar12 = 0x11;
  if (param_2 == '\0') {
    lVar2 = (longlong)(int)((DAT_1464aaa90 + 1U) % 3);
    do {
      iVar11 = (int)plVar10[lVar2 * 0x22 + 0x22];
      if (iVar11 != 0) {
        iVar9 = (int)*plVar10;
        if (*(int *)((longlong)plVar10 + 4) < iVar9 + iVar11) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo(plVar10 + -1);
          iVar9 = (int)*plVar10;
        }
        plVar5 = (longlong *)plVar10[lVar2 * 0x22 + 0x21];
        plVar8 = (longlong *)(plVar10[-1] + (longlong)iVar9 * 0x18);
        iVar9 = iVar11;
        do {
          lVar7 = *plVar5;
          *plVar8 = lVar7;
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            UNLOCK();
          }
          lVar7 = plVar5[1];
          plVar8[1] = lVar7;
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            UNLOCK();
          }
          *(int *)(plVar8 + 2) = (int)plVar5[2];
          puVar1 = (undefined4 *)((longlong)plVar5 + 0x14);
          plVar5 = plVar5 + 3;
          *(undefined4 *)((longlong)plVar8 + 0x14) = *puVar1;
          plVar8 = plVar8 + 3;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        *(int *)plVar10 = (int)*plVar10 + iVar11;
      }
      iVar11 = *(int *)(lVar2 * 0x110 + 0x114 + (longlong)plVar10);
      plVar8 = plVar10 + lVar2 * 0x22 + 0x21;
      lVar7 = *plVar8;
      iVar9 = (int)plVar10[lVar2 * 0x22 + 0x22];
      if (iVar11 < 0) {
        if (iVar9 != 0) {
          do {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar7 + 8);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar7);
            lVar7 = lVar7 + 0x18;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          iVar11 = *(int *)((longlong)plVar8 + 0xc);
        }
        *(int *)(plVar8 + 1) = 0;
        if (iVar11 != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo(plVar8,0);
        }
      }
      else {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar7 + 8);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar7);
          lVar7 = lVar7 + 0x18;
        }
        *(int *)(plVar8 + 1) = 0;
      }
      plVar10 = plVar10 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  else {
    lVar12 = 0x110;
    do {
      lVar2 = 0x11;
      plVar8 = plVar10;
      do {
        iVar11 = *(int *)(lVar12 + (longlong)plVar8);
        if (iVar11 != 0) {
          iVar9 = (int)*plVar8;
          if (*(int *)((longlong)plVar8 + 4) < iVar9 + iVar11) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeTo(plVar8 + -1);
            iVar9 = (int)*plVar8;
          }
          plVar6 = *(longlong **)(lVar12 + -8 + (longlong)plVar8);
          plVar5 = (longlong *)(plVar8[-1] + (longlong)iVar9 * 0x18);
          iVar9 = iVar11;
          do {
            lVar7 = *plVar6;
            *plVar5 = lVar7;
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
              UNLOCK();
            }
            lVar7 = plVar6[1];
            plVar5[1] = lVar7;
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
              UNLOCK();
            }
            *(int *)(plVar5 + 2) = (int)plVar6[2];
            puVar1 = (undefined4 *)((longlong)plVar6 + 0x14);
            plVar6 = plVar6 + 3;
            *(undefined4 *)((longlong)plVar5 + 0x14) = *puVar1;
            plVar5 = plVar5 + 3;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          *(int *)plVar8 = (int)*plVar8 + iVar11;
        }
        iVar11 = *(int *)(lVar12 + 4 + (longlong)plVar8);
        puVar1 = (undefined4 *)(lVar12 + (longlong)plVar8);
        lVar7 = *(longlong *)(puVar1 + -2);
        iVar9 = *(int *)(lVar12 + (longlong)plVar8);
        if (iVar11 < 0) {
          if (iVar9 != 0) {
            do {
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar7 + 8);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar7);
              lVar7 = lVar7 + 0x18;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            iVar11 = puVar1[1];
          }
          *puVar1 = 0;
          if (iVar11 != 0) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeTo(puVar1 + -2,0);
          }
        }
        else {
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar7 + 8);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar7);
            lVar7 = lVar7 + 0x18;
          }
          *puVar1 = 0;
        }
        plVar8 = plVar8 + 2;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      lVar12 = lVar12 + 0x110;
    } while (lVar12 < 0x440);
  }
  iVar11 = 10;
  do {
    plVar10 = param_1 + 2;
    iVar9 = (int)param_1[3] + -1;
    if (-1 < iVar9) {
      lVar12 = (longlong)iVar9 * 0x18;
      do {
        lVar2 = *plVar10;
        if ((0x1e < (uint)(DAT_1464aaa90 - *(int *)(lVar2 + 0x14 + lVar12))) || (param_2 != '\0')) {
          local_48 = *(longlong *)(lVar2 + lVar12);
          if (local_48 != 0) {
            LOCK();
            *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
            UNLOCK();
          }
          local_40 = *(longlong *)(lVar2 + 8 + lVar12);
          if (local_40 != 0) {
            LOCK();
            *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
            UNLOCK();
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_40);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
          lVar2 = *plVar10 + (longlong)iVar9 * 0x18;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 8);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2);
          iVar3 = (int)param_1[3];
          iVar4 = (iVar3 - iVar9) + -1;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar10 + (longlong)iVar9 * 0x18),
                       (void *)(*plVar10 + (longlong)(iVar3 - iVar4) * 0x18),(longlong)iVar4 * 0x18)
            ;
            iVar3 = (int)param_1[3];
          }
          *(int *)(param_1 + 3) = iVar3 + -1;
          TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar10);
          iVar11 = iVar11 + -1;
          if ((param_2 == '\0') && (iVar11 == 0)) {
            return;
          }
        }
        lVar12 = lVar12 + -0x18;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
    if (((param_2 == '\0') && (iVar11 == 0)) ||
       (local_res18 = local_res18 + 1, param_1 = plVar10, 0x10 < local_res18)) {
      return;
    }
  } while( true );
}



// FUNCTION 1424c2b20 FUN_1424c2b20 body=487 status=ok
// SIG undefined FUN_1424c2b20(void)

void FUN_1424c2b20(longlong param_1,int param_2)

{
  void *_Dst;
  int iVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong local_res8;
  undefined4 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  uint local_40;
  uint local_3c;
  void *local_38;
  int local_30;
  
  local_58 = (undefined4 *)0x0;
  local_50 = 0;
  TArray<float,FDefaultAllocator>::ResizeTo(&local_58,0x400);
  iVar1 = (int)local_50 + 0x400;
  local_50 = CONCAT44(local_50._4_4_,iVar1);
  if (local_50._4_4_ < iVar1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_58);
  }
  param_1 = param_1 + (longlong)param_2 * 8;
  pvVar2 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                             (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30),0,0x1000,
                              0);
  _guard_xfg_dispatch_icall_nop(local_58,pvVar2,0x1000);
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  local_res8 = 0x40;
  puVar7 = local_58;
  do {
    uVar4 = 0;
    local_48 = 0;
    local_3c = 0;
    lVar5 = 0x10;
    uVar6 = uVar4;
    uVar8 = uVar4;
    do {
      FString::PrintfImpl(&local_38,L" %04d",*puVar7);
      pvVar2 = local_38;
      if (local_30 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = local_30 + -1;
      }
      if (iVar1 != 0) {
        iVar3 = (int)uVar4;
        local_40 = iVar3 + (uint)(iVar3 == 0) + iVar1;
        if ((int)uVar6 < (int)local_40) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,uVar4);
          uVar6 = (ulonglong)local_3c;
          uVar8 = local_48;
        }
        uVar4 = (ulonglong)local_40;
        _Dst = (void *)(uVar8 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar1 * 2);
        *(undefined2 *)((longlong)iVar1 * 2 + (longlong)_Dst) = 0;
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      puVar7 = puVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (uVar8 != 0) {
      FMemory::Free(uVar8);
    }
    local_res8 = local_res8 + -1;
  } while (local_res8 != 0);
  if (local_58 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424c2d10 FUN_1424c2d10 body=719 status=ok
// SIG undefined FUN_1424c2d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424c2d10(longlong param_1,float param_2)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  LPVOID pvVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  uint local_b0;
  uint local_ac;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x262) = 0;
  FUN_143712420(*(undefined8 *)(param_1 + 0x250));
  if (*(longlong *)(param_1 + 0x240) != 0) {
    local_b8 = local_a8;
    uVar13 = 0;
    local_b0 = 0;
    local_ac = 0x80000006;
    uVar4 = FUN_143703a50();
    if (local_b0 == (local_ac & 0x3fffffff)) {
      FUN_14370c460(uVar4,&local_b8,0x10);
    }
    lVar8 = (longlong)(int)local_b0;
    local_b0 = local_b0 + 1;
    puVar9 = (undefined8 *)(local_b8 + lVar8 * 0x10);
    puVar5 = TlsGetValue(DAT_146b8198c);
    *puVar9 = *puVar5;
    pvVar6 = TlsGetValue(DAT_146b8198c);
    puVar9[1] = *(undefined8 *)((longlong)pvVar6 + 8);
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
    }
    uVar12 = (longlong)DAT_146af9c18 & 0x1fffffffffffffff;
    if (DAT_146af9c10 + DAT_146af9c18 < DAT_146af9c10) {
      uVar12 = uVar13;
    }
    plVar10 = DAT_146af9c10;
    uVar11 = uVar13;
    if (uVar12 != 0) {
      do {
        lVar8 = *plVar10;
        if ((*(byte *)(lVar8 + 0xb8) & 1) != 0) {
          uVar4 = FUN_143703a50();
          if (local_b0 == (local_ac & 0x3fffffff)) {
            FUN_14370c460(uVar4,&local_b8,0x10);
          }
          lVar7 = (longlong)(int)local_b0;
          local_b0 = local_b0 + 1;
          *(undefined8 *)(local_b8 + lVar7 * 0x10) = *(undefined8 *)(lVar8 + 0x78);
          *(undefined8 *)((longlong)(local_b8 + lVar7 * 0x10) + 8) = *(undefined8 *)(lVar8 + 0x80);
        }
        uVar11 = uVar11 + 1;
        plVar10 = plVar10 + 1;
      } while (uVar11 != uVar12);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
    if ((0 < *DAT_146af9c08) &&
       (plVar10 = *(longlong **)(param_1 + 600), plVar10 != (longlong *)0x0)) {
      (**(code **)(*plVar10 + 0x58))(plVar10,&local_b8);
      plVar10 = *(longlong **)(param_1 + 600);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x58))(plVar10,param_1 + 0x30);
      }
    }
    uVar4 = FUN_143703a50();
    local_b0 = 0;
    if (-1 < (int)local_ac) {
      FUN_143702e10(uVar4,local_b8,0x10,local_ac & 0x3fffffff);
    }
    lVar8 = DAT_146af9c90;
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      uVar13 = 4;
    }
    if (*(float *)(lVar8 + uVar13) == 1.0) {
      (**(code **)(**(longlong **)(param_1 + 0x240) + 0x18))
                (*(longlong **)(param_1 + 0x240),param_2 * 1000.0,5);
    }
  }
  return;
}



// FUNCTION 1424c2fe0 FUN_1424c2fe0 body=15 status=ok
// SIG undefined FUN_1424c2fe0(void)

void FUN_1424c2fe0(undefined4 param_1)

{
  FUN_1424c2d10(DAT_146af7620,param_1);
  return;
}



// FUNCTION 1424c2ff0 Execute body=118 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UHierarchicalInstancedStaticMeshComponent,TTypeWrapper<void>___cdecl(enum_ENamedThreads::Type,TRefCountPtr<FGraphEvent>_const_&),TSharedRef<FClusterBuilder,1>,double>
     ::Execute(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_38;
  longlong local_30;
  code *local_20;
  undefined8 uStack_18;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_20 = *(code **)(param_1 + 0x10);
  uStack_18 = *(undefined8 *)(param_1 + 0x18);
  local_30 = *(longlong *)(param_1 + 0x28);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*local_20)((int)uStack_18 + lVar1,param_2,param_3,&local_38,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1424c3070 FUN_1424c3070 body=854 status=ok
// SIG undefined FUN_1424c3070(void)

void FUN_1424c3070(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  
  lVar3 = (**(code **)(*DAT_146ab6358 + 0x138))
                    (DAT_146ab6358,*(undefined8 *)(param_1 + 0x10),0,*(undefined4 *)(param_1 + 0x18)
                     ,1);
  uVar10 = 0;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x28) + 8);
  if (3 < uVar1) {
    puVar7 = (undefined4 *)(lVar3 + 0x38);
    do {
      lVar5 = (longlong)(int)uVar10;
      lVar2 = **(longlong **)(param_1 + 0x20);
      lVar4 = (ulonglong)*(ushort *)(**(longlong **)(param_1 + 0x28) + lVar5 * 2) * 0x40;
      puVar7[-0xe] = *(undefined4 *)(lVar4 + lVar2);
      puVar7[-0xd] = *(undefined4 *)(lVar4 + 0x10 + lVar2);
      puVar7[-0xc] = *(undefined4 *)(lVar4 + 0x20 + lVar2);
      puVar7[-0xb] = *(undefined4 *)(lVar4 + 0x30 + lVar2);
      puVar7[-10] = *(undefined4 *)(lVar4 + 4 + lVar2);
      puVar7[-9] = *(undefined4 *)(lVar4 + 0x14 + lVar2);
      puVar7[-8] = *(undefined4 *)(lVar4 + 0x24 + lVar2);
      puVar7[-7] = *(undefined4 *)(lVar4 + 0x34 + lVar2);
      puVar7[-6] = *(undefined4 *)(lVar4 + 8 + lVar2);
      puVar7[-5] = *(undefined4 *)(lVar4 + 0x18 + lVar2);
      puVar7[-4] = *(undefined4 *)(lVar4 + 0x28 + lVar2);
      puVar7[-3] = *(undefined4 *)(lVar4 + 0x38 + lVar2);
      lVar2 = **(longlong **)(param_1 + 0x20);
      lVar4 = (ulonglong)*(ushort *)(**(longlong **)(param_1 + 0x28) + 2 + lVar5 * 2) * 0x40;
      puVar7[-2] = *(undefined4 *)(lVar4 + lVar2);
      puVar7[-1] = *(undefined4 *)(lVar4 + 0x10 + lVar2);
      *puVar7 = *(undefined4 *)(lVar4 + 0x20 + lVar2);
      puVar7[1] = *(undefined4 *)(lVar4 + 0x30 + lVar2);
      puVar7[2] = *(undefined4 *)(lVar4 + 4 + lVar2);
      puVar7[3] = *(undefined4 *)(lVar4 + 0x14 + lVar2);
      puVar7[4] = *(undefined4 *)(lVar4 + 0x24 + lVar2);
      puVar7[5] = *(undefined4 *)(lVar4 + 0x34 + lVar2);
      puVar7[6] = *(undefined4 *)(lVar4 + 8 + lVar2);
      puVar7[7] = *(undefined4 *)(lVar4 + 0x18 + lVar2);
      puVar7[8] = *(undefined4 *)(lVar4 + 0x28 + lVar2);
      puVar7[9] = *(undefined4 *)(lVar4 + 0x38 + lVar2);
      lVar2 = **(longlong **)(param_1 + 0x20);
      lVar4 = (ulonglong)*(ushort *)(**(longlong **)(param_1 + 0x28) + 4 + lVar5 * 2) * 0x40;
      puVar7[10] = *(undefined4 *)(lVar4 + lVar2);
      puVar7[0xb] = *(undefined4 *)(lVar4 + 0x10 + lVar2);
      puVar7[0xc] = *(undefined4 *)(lVar4 + 0x20 + lVar2);
      puVar7[0xd] = *(undefined4 *)(lVar4 + 0x30 + lVar2);
      puVar7[0xe] = *(undefined4 *)(lVar4 + 4 + lVar2);
      puVar7[0xf] = *(undefined4 *)(lVar4 + 0x14 + lVar2);
      puVar7[0x10] = *(undefined4 *)(lVar4 + 0x24 + lVar2);
      puVar7[0x11] = *(undefined4 *)(lVar4 + 0x34 + lVar2);
      puVar7[0x12] = *(undefined4 *)(lVar4 + 8 + lVar2);
      puVar7[0x13] = *(undefined4 *)(lVar4 + 0x18 + lVar2);
      puVar7[0x14] = *(undefined4 *)(lVar4 + 0x28 + lVar2);
      puVar7[0x15] = *(undefined4 *)(lVar4 + 0x38 + lVar2);
      lVar2 = **(longlong **)(param_1 + 0x20);
      lVar4 = (ulonglong)*(ushort *)(**(longlong **)(param_1 + 0x28) + 6 + lVar5 * 2) * 0x40;
      uVar8 = (int)uVar10 + 4;
      uVar10 = (ulonglong)uVar8;
      puVar7[0x16] = *(undefined4 *)(lVar4 + lVar2);
      puVar7[0x17] = *(undefined4 *)(lVar4 + 0x10 + lVar2);
      puVar7[0x18] = *(undefined4 *)(lVar4 + 0x20 + lVar2);
      puVar7[0x19] = *(undefined4 *)(lVar4 + 0x30 + lVar2);
      puVar7[0x1a] = *(undefined4 *)(lVar4 + 4 + lVar2);
      puVar7[0x1b] = *(undefined4 *)(lVar4 + 0x14 + lVar2);
      puVar7[0x1c] = *(undefined4 *)(lVar4 + 0x24 + lVar2);
      puVar7[0x1d] = *(undefined4 *)(lVar4 + 0x34 + lVar2);
      puVar7[0x1e] = *(undefined4 *)(lVar4 + 8 + lVar2);
      puVar7[0x1f] = *(undefined4 *)(lVar4 + 0x18 + lVar2);
      puVar7[0x20] = *(undefined4 *)(lVar4 + 0x28 + lVar2);
      puVar7[0x21] = *(undefined4 *)(lVar4 + 0x38 + lVar2);
      puVar7 = puVar7 + 0x30;
    } while (uVar8 < uVar1 - 3);
  }
  if ((uint)uVar10 < uVar1) {
    puVar7 = (undefined4 *)(lVar3 + 8 + uVar10 * 0x30);
    do {
      iVar9 = (int)uVar10;
      uVar8 = iVar9 + 1;
      uVar10 = (ulonglong)uVar8;
      puVar6 = (undefined4 *)
               ((ulonglong)*(ushort *)(**(longlong **)(param_1 + 0x28) + (longlong)iVar9 * 2) * 0x40
               + **(longlong **)(param_1 + 0x20));
      puVar7[-2] = *puVar6;
      puVar7[-1] = puVar6[4];
      *puVar7 = puVar6[8];
      puVar7[1] = puVar6[0xc];
      puVar7[2] = puVar6[1];
      puVar7[3] = puVar6[5];
      puVar7[4] = puVar6[9];
      puVar7[5] = puVar6[0xd];
      puVar7[6] = puVar6[2];
      puVar7[7] = puVar6[6];
      puVar7[8] = puVar6[10];
      puVar7[9] = puVar6[0xe];
      puVar7 = puVar7 + 0xc;
    } while (uVar8 < uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001424c33bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab6358 + 0x140))(DAT_146ab6358,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1424c33e0 ExecuteAndDestruct body=171 status=ok
// SIG undefined ExecuteAndDestruct(void)

void FRHICommand<FRHICommandUpdateClothBuffer>::ExecuteAndDestruct(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)
           (**(code **)(*DAT_146ab6358 + 0x138))
                     (DAT_146ab6358,*(undefined8 *)(param_1 + 0x10),0,
                      *(undefined4 *)(param_1 + 0x18),1);
  uVar1 = *(uint *)(*(undefined8 **)(param_1 + 0x20) + 1);
  uVar5 = (ulonglong)uVar1;
  puVar4 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
  puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0x28);
  if (uVar1 != 0) {
    do {
      *puVar2 = *puVar4;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
      *(undefined8 *)((longlong)puVar2 + 0xc) = *puVar3;
      *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(puVar3 + 1);
      uVar5 = uVar5 - 1;
      puVar2 = puVar2 + 3;
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
    } while (uVar5 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001424c3484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab6358 + 0x140))(DAT_146ab6358,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1424c3490 ExecuteIfSafe body=146 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,UHierarchicalInstancedStaticMeshComponent,void___cdecl(enum_ENamedThreads::Type,TRefCountPtr<FGraphEvent>_const_&),TSharedRef<FClusterBuilder,1>,double>
::ExecuteIfSafe(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 local_38;
  longlong local_30;
  code *local_20;
  undefined8 uStack_18;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  uVar1 = (undefined1)lVar2;
  if (lVar2 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    local_38 = *(undefined8 *)(param_1 + 0x20);
    local_20 = *(code **)(param_1 + 0x10);
    uStack_18 = *(undefined8 *)(param_1 + 0x18);
    local_30 = *(longlong *)(param_1 + 0x28);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (*local_20)((int)uStack_18 + lVar2,param_2,param_3,&local_38,*(undefined8 *)(param_1 + 0x30));
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1424c3530 ExecuteTask body=243 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FInstancedStaticMeshRenderData::ReInitVertexFactories'::`2'::CallInitStaticMeshVertexFactoryName,<lambda_419fe0e00f28e07334541444dcd273da>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  FUN_1424fc990(param_1[2],param_1[3],param_1[4]);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_1450cecd0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
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



// FUNCTION 1424c3630 FUN_1424c3630 body=281 status=ok
// SIG undefined FUN_1424c3630(void)

void FUN_1424c3630(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  DAT_146532b98 = *(undefined4 *)((longlong)param_1 + 0x14);
  DAT_146532bec = 1;
  if (0 < *(int *)((longlong)param_1 + 0x1c)) {
    DAT_146532bec = *(undefined4 *)((longlong)param_1 + 0x1c);
  }
  DAT_146af9f90 = DAT_146af9f90 + 1;
  DAT_146532be4 = *(undefined4 *)(param_1 + 2);
  DAT_146532bf0 = *(undefined4 *)(param_1 + 3);
  *param_1 = &PTR_FUN_1450cecc0;
  *(undefined1 *)(param_1 + 4) = 0;
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



// FUNCTION 1424c3750 FUN_1424c3750 body=237 status=ok
// SIG undefined FUN_1424c3750(void)

void FUN_1424c3750(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1424c2520(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1450cdc90;
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



// FUNCTION 1424c3840 FUN_1424c3840 body=237 status=ok
// SIG undefined FUN_1424c3840(void)

void FUN_1424c3840(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1424c2670(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1450cd600;
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



// FUNCTION 1424c3930 ExtractDDSInRGBE body=214 status=ok
// SIG undefined ExtractDDSInRGBE(void)

void FHDRLoadHelper::ExtractDDSInRGBE(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)param_2[1];
  iVar1 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0xc) * 4 + 0x80;
  if (iVar2 < iVar1) {
    *(int *)(param_2 + 1) = iVar1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2);
    }
  }
  else if ((iVar1 < iVar2) && (iVar1 != iVar2)) {
    *(int *)(param_2 + 1) = iVar1;
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_2);
  }
  *(undefined4 *)*param_2 = 0x20534444;
  lVar3 = *param_2;
  ::_guard_xfg_dispatch_icall_nop((void *)(lVar3 + 8),0,0x78);
  *(undefined4 *)(lVar3 + 4) = 0x7c;
  *(undefined4 *)(lVar3 + 8) = 0x1007;
  *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(lVar3 + 0x70) = 0;
  *(undefined4 *)(lVar3 + 0x1c) = 1;
  *(undefined4 *)(lVar3 + 0x4c) = 0x20;
  *(undefined4 *)(lVar3 + 0x50) = 0x40;
  *(undefined4 *)(lVar3 + 0x58) = 0x20;
  *(undefined4 *)(lVar3 + 0x5c) = 0xff0000;
  *(undefined4 *)(lVar3 + 0x60) = 0xff00;
  *(undefined4 *)(lVar3 + 100) = 0xff;
  DecompressWholeImage(param_1,*param_2 + 0x80);
  return;
}



// FUNCTION 1424c3a10 FUN_1424c3a10 body=1851 status=ok
// SIG undefined FUN_1424c3a10(void)

void FUN_1424c3a10(longlong param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  longlong *plVar10;
  undefined8 *_Dst;
  byte bVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *_Src;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong *plVar26;
  uint local_b4;
  uint local_b0;
  int local_ac;
  int local_a4;
  ulonglong local_90;
  longlong local_88;
  
  iVar21 = 0;
  local_88 = 0;
  iVar2 = *(int *)(param_1 + 0x408);
  iVar8 = iVar2 + -1;
  if (*(int *)(DAT_146af9d48 + 4) <= iVar2 + -1) {
    iVar8 = *(int *)(DAT_146af9d48 + 4);
  }
  if (-1 < iVar8) {
    iVar21 = iVar8;
    iVar2 = iVar8 + 1;
  }
  do {
    if (iVar2 <= iVar21) {
      return;
    }
    lVar12 = (longlong)iVar21;
    local_a4 = 0;
    lVar3 = *(longlong *)(**(longlong **)(param_1 + 0x3a0) + lVar12 * 8);
    if (0 < *(int *)(param_3 + 2)) {
      pbVar9 = (byte *)((longlong)param_3 + 0x25);
      puVar19 = param_3;
      do {
        local_ac = 0;
        if (0 < *(int *)(lVar3 + 0x480)) {
          do {
            uVar24 = 0;
            cVar1 = *(char *)((longlong)param_3 + 0x2a);
            lVar25 = 8;
            if (cVar1 == '\0') {
              lVar25 = 0x88;
            }
            plVar26 = (longlong *)(lVar25 + lVar12 * 0x10 + param_4);
            if ((int)plVar26[1] != 0) {
              local_90 = 0;
              uVar7 = 1;
              local_b0 = 0;
              if (cVar1 == '\0') {
                uVar20 = *(uint *)(param_4 + 0x108 + lVar12 * 4);
              }
              else {
                uVar20 = *(uint *)(param_4 + 0x128 + lVar12 * 4);
              }
              uVar17 = uVar24;
              if ((*(char *)((longlong)param_3 + 0x29) == '\0') &&
                 (uVar7 = (int)(uVar20 + 0x3f + ((int)(uVar20 + 0x3f) >> 0x1f & 0x3fU)) >> 6,
                 uVar17 = 0, uVar7 != 0)) {
                local_b0 = *(uint *)*plVar26;
                uVar17 = (ulonglong)local_b0;
              }
              bVar5 = false;
              if (0 < (int)uVar7) {
                uVar23 = (ulonglong)uVar7;
                local_b4 = uVar20;
                do {
                  iVar8 = FUN_1408bed80(param_2,1);
                  uVar7 = *(uint *)(param_1 + 0x18);
                  puVar15 = (undefined8 *)
                            (*(longlong *)(*param_2 + (longlong)(iVar8 / 0x59) * 8) +
                            (ulonglong)(uint)(iVar8 % 0x59) * 0xb8);
                  if ((uVar7 >> 0xb & 1) != 0) {
                    plVar4 = *(longlong **)(param_1 + 0x120);
                    for (plVar10 = plVar4; plVar10 != plVar4 + *(int *)(param_1 + 0x128);
                        plVar10 = plVar10 + 1) {
                      if (*plVar10 == *(longlong *)(param_3[3] + 0x350)) {
                        if ((int)((longlong)plVar10 - (longlong)plVar4 >> 3) != -1) {
                          bVar11 = (byte)(uVar7 >> 0x10);
                          goto LAB_1424c3c55;
                        }
                        break;
                      }
                    }
                  }
                  bVar11 = (byte)(uVar7 >> 0xd);
LAB_1424c3c55:
                  cVar6 = FUN_14281e460(param_1,iVar21,0,local_ac,bVar11 & 7,*pbVar9,
                                        *(undefined1 *)(param_3 + 5),1,puVar15);
                  if (cVar6 != '\0') {
                    iVar8 = 0;
                    puVar15[0x14] = *(undefined8 *)(*(longlong *)(param_1 + 0x400) + lVar12 * 8);
                    puVar18 = (undefined8 *)puVar15[0xf];
                    if ((undefined8 *)puVar15[0xf] == (undefined8 *)0x0) {
                      puVar18 = puVar15;
                    }
                    if (*(char *)(param_1 + 0x41c) != '\0') {
                      puVar18[2] = 0;
                    }
                    puVar18[4] = *puVar19;
                    *(char *)((longlong)puVar18 + 100) = (char)iVar21;
                    *(bool *)((longlong)puVar18 + 0x65) = cVar1 != '\0';
                    *(undefined2 *)((longlong)puVar18 + 0x66) = 0x100;
                    *(undefined4 *)(puVar18 + 0xc) = 0x3f800000;
                    *(undefined4 *)((longlong)puVar18 + 0x5c) = 0;
                    *(uint *)((longlong)puVar15 + 0x8c) =
                         *(uint *)((longlong)puVar15 + 0x8c) | 0x200000;
                    uVar7 = ((uint)*pbVar9 << 0x17 ^ *(uint *)((longlong)puVar15 + 0x8c)) & 0x800000
                            ^ *(uint *)((longlong)puVar15 + 0x8c);
                    *(uint *)((longlong)puVar15 + 0x8c) = uVar7;
                    uVar7 = ((uint)*pbVar9 << 0x16 ^ uVar7) & 0x400000 ^ uVar7;
                    *(uint *)((longlong)puVar15 + 0x8c) = uVar7;
                    *(uint *)((longlong)puVar15 + 0x8c) =
                         (*(uint *)(param_1 + 0x1c) >> 0x14 ^ uVar7) & 0x80 ^ uVar7;
                    if (!bVar5) {
                      bVar5 = true;
                      puVar13 = (undefined8 *)puVar18[6];
                      if ((undefined8 *)puVar18[6] == (undefined8 *)0x0) {
                        puVar13 = puVar18 + 5;
                      }
                      puVar14 = puVar13 + *(int *)(puVar18 + 7);
                      for (; puVar13 != puVar14; puVar13 = puVar13 + 1) {
                        iVar8 = iVar8 + *(int *)((longlong)puVar13 + 4);
                      }
                      local_88 = local_88 + (longlong)iVar8 * (longlong)(int)uVar20;
                    }
                    if (*(char *)((longlong)param_3 + 0x29) == '\0') {
                      uVar7 = 0x40;
                      if ((int)uVar20 < 0x41) {
                        uVar7 = uVar20;
                      }
                      if (*(int *)((longlong)puVar15 + 0x84) < (int)uVar7) {
                        FUN_141f1bf20(puVar15,uVar7);
                      }
                      uVar22 = 0;
                      if (uVar7 != 0) {
                        do {
                          if (uVar22 == 0) {
                            puVar14 = (undefined8 *)puVar15[0xf];
                            if ((undefined8 *)puVar15[0xf] == (undefined8 *)0x0) {
                              puVar14 = puVar15;
                            }
                          }
                          else {
                            iVar8 = *(int *)(puVar15 + 0x10);
                            *(int *)(puVar15 + 0x10) = iVar8 + 1;
                            if (*(int *)((longlong)puVar15 + 0x84) < iVar8 + 1) {
                              FUN_1408ca0e0(puVar15,iVar8);
                            }
                            puVar14 = (undefined8 *)0x0;
                            puVar18 = (undefined8 *)puVar15[0xf];
                            puVar13 = puVar18;
                            if (puVar18 == (undefined8 *)0x0) {
                              puVar13 = puVar15;
                            }
                            puVar13 = puVar13 + (longlong)iVar8 * 0xf;
                            if (puVar13 != (undefined8 *)0x0) {
                              *puVar13 = 0;
                              puVar13[1] = 0;
                              puVar13[2] = 0;
                              puVar13[3] = 0;
                              puVar13[4] = 0;
                              puVar13[6] = 0;
                              puVar13[7] = 0;
                              puVar13[8] = 1;
                              puVar13[10] = 0;
                              *(undefined4 *)(puVar13 + 0xb) = 0xffffffff;
                              *(undefined4 *)((longlong)puVar13 + 0x5c) = 0;
                              puVar13[0xc] = 0x3f800000;
                              *(undefined2 *)(puVar13 + 0xd) = 0;
                              puVar13[0xe] = 0;
                              puVar18 = (undefined8 *)puVar15[0xf];
                              puVar14 = puVar13;
                            }
                            if (puVar18 == (undefined8 *)0x0) {
                              puVar18 = puVar15;
                            }
                            *puVar14 = *puVar18;
                            TRefCountPtr<FRHIIndexBuffer>::operator=(puVar14 + 1,puVar18[1]);
                            puVar14[2] = puVar18[2];
                            puVar13 = puVar14 + 5;
                            puVar14[3] = puVar18[3];
                            puVar14[3] = puVar18[3];
                            puVar14[4] = puVar18[4];
                            if (puVar13 != puVar18 + 5) {
                              iVar8 = *(int *)(puVar18 + 7);
                              _Src = (undefined8 *)puVar18[6];
                              *(int *)(puVar14 + 7) = iVar8;
                              uVar24 = local_90;
                              uVar20 = local_b4;
                              if ((iVar8 == 0) && (*(int *)((longlong)puVar14 + 0x3c) == 0)) {
                                *(undefined4 *)((longlong)puVar14 + 0x3c) = 0;
                              }
                              else {
                                TArray<TRefCountPtr<FRHIUnorderedAccessView>,TInlineAllocator<1,FDefaultAllocator>_>
                                ::ResizeForCopy(puVar13,iVar8);
                                if (_Src == (undefined8 *)0x0) {
                                  _Src = puVar18 + 5;
                                }
                                _Dst = (undefined8 *)puVar14[6];
                                if ((undefined8 *)puVar14[6] == (undefined8 *)0x0) {
                                  _Dst = puVar13;
                                }
                                _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar8 << 3);
                              }
                            }
                            *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(puVar18 + 8);
                            *(undefined4 *)((longlong)puVar14 + 0x44) =
                                 *(undefined4 *)((longlong)puVar18 + 0x44);
                            *(undefined4 *)(puVar14 + 9) = *(undefined4 *)(puVar18 + 9);
                            *(undefined4 *)((longlong)puVar14 + 0x4c) =
                                 *(undefined4 *)((longlong)puVar18 + 0x4c);
                            puVar14[10] = puVar18[10];
                            *(undefined4 *)(puVar14 + 0xb) = *(undefined4 *)(puVar18 + 0xb);
                            *(undefined4 *)((longlong)puVar14 + 0x5c) =
                                 *(undefined4 *)((longlong)puVar18 + 0x5c);
                            *(undefined4 *)(puVar14 + 0xc) = *(undefined4 *)(puVar18 + 0xc);
                            *(undefined1 *)((longlong)puVar14 + 100) =
                                 *(undefined1 *)((longlong)puVar18 + 100);
                            *(undefined1 *)((longlong)puVar14 + 0x65) =
                                 *(undefined1 *)((longlong)puVar18 + 0x65);
                            *(undefined1 *)((longlong)puVar14 + 0x66) =
                                 *(undefined1 *)((longlong)puVar18 + 0x66);
                            *(undefined1 *)((longlong)puVar14 + 0x67) =
                                 *(undefined1 *)((longlong)puVar18 + 0x67);
                            *(undefined1 *)(puVar14 + 0xd) = *(undefined1 *)(puVar18 + 0xd);
                            *(undefined1 *)((longlong)puVar14 + 0x69) =
                                 *(undefined1 *)((longlong)puVar18 + 0x69);
                            uVar17 = (ulonglong)local_b0;
                            puVar14[0xe] = puVar18[0xe];
                          }
                          uVar20 = uVar20 - 1;
                          uVar16 = (uint)uVar17;
                          *(uint *)(puVar14 + 0xb) = uVar16;
                          if (uVar20 != 0) {
                            if (uVar16 < *(uint *)(*plVar26 + 4 + uVar24 * 4)) {
                              local_b0 = uVar16 + 1;
                            }
                            else {
                              local_b0 = *(uint *)(*plVar26 + 8 + uVar24 * 4);
                              uVar24 = uVar24 + 2;
                              local_90 = uVar24;
                            }
                            uVar17 = (ulonglong)local_b0;
                          }
                          uVar22 = uVar22 + 1;
                          local_b4 = uVar20;
                        } while (uVar22 < uVar7);
                      }
                    }
                    else {
                      *(int *)(puVar18 + 8) = (int)plVar26[1] / 2;
                      puVar18[3] = *plVar26;
                      *(undefined1 *)((longlong)puVar18 + 0x69) = 1;
                    }
                    if (local_88 < *(int *)(DAT_146af9dc0 + 4)) {
                      FUN_142747330(param_2,*(undefined4 *)(param_3 + 4),puVar15);
                    }
                  }
                  uVar23 = uVar23 - 1;
                } while (uVar23 != 0);
              }
            }
            local_ac = local_ac + 1;
          } while (local_ac < *(int *)(lVar3 + 0x480));
        }
        local_a4 = local_a4 + 1;
        pbVar9 = pbVar9 + 1;
        puVar19 = puVar19 + 1;
      } while (local_a4 < *(int *)(param_3 + 2));
    }
    iVar21 = iVar21 + 1;
  } while( true );
}



// FUNCTION 1424c4150 FUN_1424c4150 body=116 status=ok
// SIG undefined FUN_1424c4150(void)

int * FUN_1424c4150(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x30) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)(*param_1 + 0x28 + (longlong)iVar1 * 0x30);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1424c41d0 FixPolyWinding body=1044 status=ok
// SIG undefined FixPolyWinding(void)

void FixPolyWinding(undefined4 **param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 *local_b8;
  int local_b0;
  undefined4 local_ac;
  
  iVar11 = *(int *)(param_1 + 1) + -1;
  fVar21 = 0.0;
  if (-1 < iVar11) {
    lVar12 = (longlong)iVar11 * 0x18;
    do {
      puVar3 = *param_1;
      iVar2 = *(int *)(param_1 + 1);
      fVar20 = *(float *)((longlong)puVar3 + lVar12 + 4);
      iVar8 = iVar2;
      if (iVar11 != 0) {
        iVar8 = iVar11;
      }
      fVar13 = *(float *)((longlong)puVar3 + lVar12) - (float)puVar3[(longlong)iVar8 * 6 + -6];
      fVar15 = fVar20 - (float)puVar3[(longlong)iVar8 * 6 + -5];
      fVar18 = fVar15 * fVar15 + fVar13 * fVar13;
      if (fVar18 <= 1e-08) {
        fVar16 = 0.0;
        fVar15 = 0.0;
      }
      else {
        auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
        fVar16 = auVar17._0_4_;
        fVar16 = fVar16 + fVar16 * (0.5 - fVar18 * 0.5 * fVar16 * fVar16);
        fVar16 = fVar16 + fVar16 * (0.5 - fVar18 * 0.5 * fVar16 * fVar16);
        fVar15 = fVar16 * fVar15;
        fVar16 = fVar16 * fVar13;
      }
      lVar9 = (longlong)((iVar11 + 1) % iVar2);
      fVar19 = (float)puVar3[lVar9 * 6] - *(float *)((longlong)puVar3 + lVar12);
      fVar20 = (float)puVar3[lVar9 * 6 + 1] - fVar20;
      fVar13 = fVar20 * fVar20 + fVar19 * fVar19;
      if (fVar13 <= 1e-08) {
        fVar14 = 0.0;
        fVar20 = 0.0;
      }
      else {
        auVar17 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        fVar14 = auVar17._0_4_;
        fVar14 = fVar14 + fVar14 * (0.5 - fVar13 * 0.5 * fVar14 * fVar14);
        fVar14 = fVar14 + fVar14 * (0.5 - fVar13 * 0.5 * fVar14 * fVar14);
        fVar20 = fVar14 * fVar20;
        fVar14 = fVar14 * fVar19;
      }
      if (((fVar18 < 0.0001) || (fVar13 < 0.0001)) ||
         ((ABS(fVar16 - fVar14) <= 0.01 && (ABS(fVar15 - fVar20) <= 0.01)))) {
        iVar8 = (iVar2 - iVar11) + -1;
        if (iVar8 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (puVar3 + (longlong)iVar11 * 6,puVar3 + ((longlong)iVar11 + 1) * 6,
                     (longlong)iVar8 * 0x18);
          iVar2 = *(int *)(param_1 + 1);
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1);
      }
      else {
        fVar20 = fVar20 * fVar16 - fVar14 * fVar15;
        if (-1.0 <= fVar20) {
          if (1.0 <= fVar20) {
            fVar20 = 1.0;
          }
          fVar20 = _guard_xfg_dispatch_icall_nop(fVar20);
          fVar21 = fVar21 + fVar20;
        }
        else {
          fVar20 = _guard_xfg_dispatch_icall_nop(-1.0);
          fVar21 = fVar21 + fVar20;
        }
      }
      lVar12 = lVar12 + -0x18;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
    if (fVar21 < 0.0) {
      local_b0 = *(int *)(param_1 + 1);
      lVar12 = (longlong)local_b0;
      local_b8 = (undefined4 *)0x0;
      local_ac = 0;
      if (0 < local_b0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_b8,0);
      }
      iVar11 = local_b0;
      puVar3 = local_b8;
      if (0 < lVar12) {
        lVar9 = lVar12 * 0x18;
        puVar10 = local_b8;
        do {
          puVar4 = *param_1;
          puVar1 = (undefined4 *)(lVar9 + -0x18 + (longlong)puVar4);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          *puVar10 = *puVar1;
          puVar10[1] = uVar5;
          puVar10[2] = uVar6;
          puVar10[3] = uVar7;
          *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(lVar9 + -8 + (longlong)puVar4);
          lVar12 = lVar12 + -1;
          lVar9 = lVar9 + -0x18;
          puVar10 = puVar10 + 6;
        } while (lVar12 != 0);
      }
      if (param_1 != &local_b8) {
        *(int *)(param_1 + 1) = local_b0;
        if ((local_b0 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,local_b0);
          _guard_xfg_dispatch_icall_nop(*param_1,puVar3,(longlong)iVar11 * 0x18);
        }
      }
      if (puVar3 != (undefined4 *)0x0) {
        FMemory::Free(puVar3);
      }
    }
  }
  return;
}



// FUNCTION 1424c45f0 FUN_1424c45f0 body=183 status=ok
// SIG undefined FUN_1424c45f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424c45f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 0x914) != '\0') {
    if (*(int *)(*(undefined8 **)(param_1 + 0x840) + 1) != 0) {
      puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x840);
      local_48 = *puVar1;
      local_40 = *(undefined4 *)(puVar1 + 1);
      local_3c = puVar1[2];
      local_34 = *(undefined4 *)(puVar1 + 3);
      local_30 = 1;
      FBox::TransformBy(&local_48,local_28,param_1 + 0x210);
      FNavigationSystem::OnComponentBoundsChanged(param_1,local_28,param_1 + 0x8fc);
    }
    *(undefined8 *)(param_1 + 0x908) = _DAT_1468b5d90;
    uVar2 = DAT_1468b5d98;
    *(undefined4 *)(param_1 + 0x910) = DAT_1468b5d98;
    *(undefined8 *)(param_1 + 0x8fc) = *(undefined8 *)(param_1 + 0x908);
    *(undefined4 *)(param_1 + 0x904) = uVar2;
    *(undefined1 *)(param_1 + 0x914) = 0;
  }
  return;
}



// FUNCTION 1424c46b0 FUN_1424c46b0 body=414 status=ok
// SIG undefined FUN_1424c46b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424c46b0(void)

{
  float fVar1;
  longlong lVar2;
  void *_Src;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  float fVar7;
  void *local_48;
  ulonglong local_40;
  ulonglong local_38;
  void *local_30;
  uint local_28;
  
  fVar1 = *DAT_146af9e80;
  if (fVar1 != _DAT_146533110) {
    if (0.0 <= fVar1) {
      fVar7 = fVar1;
      if (1.0 <= fVar1) {
        fVar7 = 1.0;
      }
    }
    else {
      fVar7 = 0.0;
    }
    _DAT_146533110 = fVar1;
    FUN_1424b3200(&local_48,0x30,1,0x20000000);
    _Src = local_48;
    pvVar5 = (void *)0x0;
    uVar6 = (uint)local_40;
    local_30 = (void *)0x0;
    local_28 = uVar6;
    if (uVar6 != 0) {
      local_40._0_4_ = uVar6;
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                (&local_30,local_40 & 0xffffffff,0);
      pvVar5 = local_30;
      _guard_xfg_dispatch_icall_nop(local_30,_Src,(longlong)(int)uVar6 << 3);
      uVar6 = (uint)local_40;
    }
    uVar3 = local_28;
    uVar4 = (uint)local_38;
joined_r0x0001424c4777:
    if (uVar4 != uVar6) {
      uVar4 = (uint)local_38;
      lVar2 = *(longlong *)((longlong)pvVar5 + (longlong)(int)uVar4 * 8);
      if (((*(byte *)(lVar2 + 0x8b0) & 1) != 0) && (fVar7 != *(float *)(lVar2 + 0x8b4))) {
        *(float *)(lVar2 + 0x8b4) = fVar7;
        if ((*(longlong *)(lVar2 + 0x728) != 0) &&
           ((*(uint *)(*(longlong *)(lVar2 + 0x728) + 8) >> 10 & 1) == 0)) {
          FUN_1417510e0();
          if (*(char *)(lVar2 + 0x8f0) == '\0') {
            FUN_1424bcb80(lVar2);
          }
          else {
            *(undefined2 *)(lVar2 + 0x8f1) = 0x100;
          }
        }
      }
      do {
        uVar4 = uVar4 + 1;
        local_38 = (ulonglong)uVar4;
        if ((int)uVar3 <= (int)uVar4) break;
      } while (*(longlong *)((longlong)pvVar5 + (longlong)(int)uVar4 * 8) == 0);
      goto joined_r0x0001424c4777;
    }
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1424c4850 FUN_1424c4850 body=5063 status=ok
// SIG undefined FUN_1424c4850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424c4850(longlong param_1,float *param_2,int param_3,longlong *param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  void *pvVar13;
  ulonglong uVar14;
  float *pfVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar35 [16];
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
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  uint local_208;
  uint local_200;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
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
  undefined8 local_188;
  float fStack_180;
  undefined8 uStack_17c;
  undefined4 local_174;
  undefined1 local_170;
  uint local_168;
  uint local_164;
  uint local_160;
  undefined4 local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  undefined4 local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong *local_128;
  float *local_120;
  longlong local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  
  if ((int)(*(longlong **)(param_1 + 0x840))[1] != 0) {
    local_120 = (float *)(param_1 + 0x210);
    puVar28 = (undefined8 *)((longlong)param_3 * 0x40 + **(longlong **)(param_1 + 0x840));
    local_170 = 1;
    local_188 = *puVar28;
    fStack_180 = *(float *)(puVar28 + 1);
    uStack_17c = puVar28[2];
    local_174 = *(undefined4 *)(puVar28 + 3);
    local_128 = param_4;
    local_118 = param_1;
    FBox::TransformBy(&local_188,&local_110);
    pvVar13 = ThreadLocalStoragePointer;
    fVar48 = *param_2;
    if ((((fVar48 <= local_104) && (fVar50 = param_2[3], local_110 <= fVar50)) &&
        (fVar53 = param_2[1], fVar53 <= local_100)) &&
       (((fVar44 = param_2[4], local_10c <= fVar44 && (fVar34 = param_2[2], fVar34 <= local_fc)) &&
        (fVar41 = param_2[5], local_108 <= fVar41)))) {
      iVar16 = *(int *)((longlong)puVar28 + 0xc);
      if ((iVar16 < 0) ||
         ((((fVar48 < local_110 && (local_110 < fVar50)) &&
           ((fVar53 < local_10c &&
            ((((local_10c < fVar44 && (fVar34 < local_108)) && (local_108 < fVar41)) &&
             ((fVar48 < local_104 && (local_104 < fVar50)))))))) &&
          (((fVar53 < local_100 && ((local_100 < fVar44 && (fVar34 < local_fc)))) &&
           (local_fc < fVar41)))))) {
        uVar3 = *(uint *)(param_1 + 0x858);
        local_200 = *(uint *)(puVar28 + 4);
        uVar26 = (ulonglong)(int)local_200;
        if ((int)local_200 <= *(int *)((longlong)puVar28 + 0x24)) {
          uVar29 = (ulonglong)_tls_index;
          uVar27 = uVar26;
          fVar48 = _DAT_146af9d10;
          fVar50 = fRam0000000146af9d14;
          fVar53 = fRam0000000146af9d18;
          fVar44 = fRam0000000146af9d1c;
          uVar17 = _DAT_146af7650;
          uVar18 = uRam0000000146af7654;
          uVar19 = uRam0000000146af7658;
          uVar20 = uRam0000000146af765c;
          do {
            uVar14 = (ulonglong)uVar3;
            uVar21 = (uint)uVar27;
            if (0 < (int)uVar3) {
              uVar14 = *(ulonglong *)(param_1 + 0x850);
              uVar21 = *(uint *)(uVar14 + uVar26 * 4);
            }
            uVar22 = (uint)uVar14;
            if (((int)uVar21 < 0) || (*(int *)(param_1 + 0x7b0) <= (int)uVar21)) {
              lVar4 = *(longlong *)(param_1 + 0x7e8);
              fVar34 = 0.0;
              fVar41 = 0.0;
              fVar38 = 0.0;
              fVar43 = fVar44;
              fVar65 = (float)((uint)fVar48 & uVar17);
              fVar66 = (float)((uint)fVar50 & uVar18);
              fVar67 = (float)((uint)fVar53 & uVar19);
              fVar68 = (float)((uint)fVar44 & uVar20);
              fVar54 = 0.0;
              fVar69 = 0.0;
              fVar70 = 0.0;
              fVar71 = 0.0;
              if ((lVar4 != 0) && (fVar38 = 0.0, *(char *)(lVar4 + 0x58) != '\0')) {
                puVar5 = *(undefined8 **)(lVar4 + 0x120);
                lVar4 = puVar5[3];
                pcVar6 = *(code **)(*(longlong *)puVar5[2] + 0x28);
                if (*(char *)((longlong)puVar5 + 0x34) == '\0') {
                  (*pcVar6)((longlong *)puVar5[2],pcVar6,0);
                  (**(code **)(*(longlong *)puVar5[2] + 0x20))();
                  uVar17 = *(uint *)(lVar4 + uVar26 * 0x30);
                  uVar18 = *(uint *)(lVar4 + 4 + uVar26 * 0x30);
                  uVar19 = *(uint *)(lVar4 + 8 + uVar26 * 0x30);
                  uVar20 = *(uint *)(lVar4 + 0x10 + uVar26 * 0x30);
                  uVar21 = *(uint *)(lVar4 + 0x14 + uVar26 * 0x30);
                  uVar22 = *(uint *)(lVar4 + 0x18 + uVar26 * 0x30);
                  uVar23 = *(uint *)(lVar4 + 0x20 + uVar26 * 0x30);
                  uVar24 = *(uint *)(lVar4 + 0x24 + uVar26 * 0x30);
                  local_208 = *(uint *)(lVar4 + 0x28 + uVar26 * 0x30);
                }
                else {
                  (*pcVar6)();
                  (**(code **)(*(longlong *)puVar5[2] + 0x20))();
                  uVar2 = *(ushort *)(lVar4 + uVar26 * 0x18);
                  local_208 = (uVar2 & 0xffff8000) << 0x10;
                  if ((uVar2 & 0x7c00) == 0) {
                    uVar17 = uVar2 & 0x3ff;
                    if ((uVar2 & 0x3ff) != 0) {
                      if ((*(int *)(*(longlong *)((longlong)pvVar13 + uVar29 * 8) + 0x38) <
                           DAT_1468509dc) &&
                         (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                        DAT_1468509d8 = 1.442695;
                        _Init_thread_footer(&DAT_1468509dc);
                      }
                      fVar48 = _guard_xfg_dispatch_icall_nop((float)uVar17);
                      iVar16 = 10 - (int)(fVar48 * DAT_1468509d8);
                      local_208 = uVar17 << ((char)iVar16 + 0xdU & 0x1f) & 0x7fffff |
                                  (0x71U - iVar16 & 0xff) << 0x17 | local_208;
                    }
                  }
                  else if ((uVar2 & 0x7c00) == 0x7c00) {
                    local_208 = local_208 | 0x477fe000;
                  }
                  else {
                    local_208 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                                local_208;
                  }
                  uVar17 = local_208;
                  uVar2 = *(ushort *)(lVar4 + 2 + uVar26 * 0x18);
                  local_208 = (uVar2 & 0xffff8000) << 0x10;
                  if ((uVar2 & 0x7c00) == 0) {
                    uVar18 = uVar2 & 0x3ff;
                    if ((uVar2 & 0x3ff) != 0) {
                      if ((*(int *)(*(longlong *)((longlong)pvVar13 + uVar29 * 8) + 0x38) <
                           DAT_1468509dc) &&
                         (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                        DAT_1468509d8 = 1.442695;
                        _Init_thread_footer(&DAT_1468509dc);
                      }
                      fVar48 = _guard_xfg_dispatch_icall_nop((float)uVar18);
                      iVar16 = 10 - (int)(fVar48 * DAT_1468509d8);
                      local_208 = uVar18 << ((char)iVar16 + 0xdU & 0x1f) & 0x7fffff |
                                  (0x71U - iVar16 & 0xff) << 0x17 | local_208;
                    }
                  }
                  else if ((uVar2 & 0x7c00) == 0x7c00) {
                    local_208 = local_208 | 0x477fe000;
                  }
                  else {
                    local_208 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                                local_208;
                  }
                  uVar18 = local_208;
                  uVar2 = *(ushort *)(lVar4 + 4 + uVar26 * 0x18);
                  local_208 = (uVar2 & 0xffff8000) << 0x10;
                  if ((uVar2 & 0x7c00) == 0) {
                    uVar19 = uVar2 & 0x3ff;
                    if ((uVar2 & 0x3ff) != 0) {
                      if ((*(int *)(*(longlong *)((longlong)pvVar13 + uVar29 * 8) + 0x38) <
                           DAT_1468509dc) &&
                         (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                        DAT_1468509d8 = 1.442695;
                        _Init_thread_footer(&DAT_1468509dc);
                      }
                      fVar48 = _guard_xfg_dispatch_icall_nop((float)uVar19);
                      iVar16 = 10 - (int)(fVar48 * DAT_1468509d8);
                      local_208 = uVar19 << ((char)iVar16 + 0xdU & 0x1f) & 0x7fffff |
                                  (0x71U - iVar16 & 0xff) << 0x17 | local_208;
                    }
                  }
                  else if ((uVar2 & 0x7c00) == 0x7c00) {
                    local_208 = local_208 | 0x477fe000;
                  }
                  else {
                    local_208 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                                local_208;
                  }
                  uVar19 = local_208;
                  uVar2 = *(ushort *)(lVar4 + 6 + uVar26 * 0x18);
                  if (((((uVar2 & 0x7c00) == 0) && ((uVar2 & 0x3ff) != 0)) &&
                      (*(int *)(*(longlong *)((longlong)pvVar13 + uVar29 * 8) + 0x38) <
                       DAT_1468509dc)) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)
                     ) {
                    DAT_1468509d8 = 1.442695;
                    _Init_thread_footer(&DAT_1468509dc);
                  }
                  uVar2 = *(ushort *)(lVar4 + 8 + uVar26 * 0x18);
                  local_208 = (uVar2 & 0xffff8000) << 0x10;
                  if ((uVar2 & 0x7c00) == 0) {
                    uVar20 = uVar2 & 0x3ff;
                    if ((uVar2 & 0x3ff) != 0) {
                      if ((*(int *)(*(longlong *)((longlong)pvVar13 + uVar29 * 8) + 0x38) <
                           DAT_1468509dc) &&
                         (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                        DAT_1468509d8 = 1.442695;
                        _Init_thread_footer(&DAT_1468509dc);
                      }
                      fVar48 = _guard_xfg_dispatch_icall_nop((float)uVar20);
                      iVar16 = 10 - (int)(fVar48 * DAT_1468509d8);
                      local_208 = uVar20 << ((char)iVar16 + 0xdU & 0x1f) & 0x7fffff |
                                  (0x71U - iVar16 & 0xff) << 0x17 | local_208;
                    }
                  }
                  else if ((uVar2 & 0x7c00) == 0x7c00) {
                    local_208 = local_208 | 0x477fe000;
                  }
                  else {
                    local_208 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                                local_208;
                  }
                  uVar20 = local_208;
                  uVar2 = *(ushort *)(lVar4 + 10 + uVar26 * 0x18);
                  local_208 = (uVar2 & 0xffff8000) << 0x10;
                  if ((uVar2 & 0x7c00) == 0) {
                    uVar21 = uVar2 & 0x3ff;
                    if ((uVar2 & 0x3ff) != 0) {
                      if ((*(int *)(*(longlong *)((longlong)pvVar13 + uVar29 * 8) + 0x38) <
                           DAT_1468509dc) &&
                         (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                        DAT_1468509d8 = 1.442695;
                        _Init_thread_footer(&DAT_1468509dc);
                      }
                      fVar48 = _guard_xfg_dispatch_icall_nop((float)uVar21);
                      iVar16 = 10 - (int)(fVar48 * DAT_1468509d8);
                      local_208 = uVar21 << ((char)iVar16 + 0xdU & 0x1f) & 0x7fffff |
                                  (0x71U - iVar16 & 0xff) << 0x17 | local_208;
                    }
                  }
                  else if ((uVar2 & 0x7c00) == 0x7c00) {
                    local_208 = local_208 | 0x477fe000;
                  }
                  else {
                    local_208 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                                local_208;
                  }
                  uVar21 = local_208;
                  uVar2 = *(ushort *)(lVar4 + 0xc + uVar26 * 0x18);
                  local_208 = (uVar2 & 0xffff8000) << 0x10;
                  if ((uVar2 & 0x7c00) == 0) {
                    uVar22 = uVar2 & 0x3ff;
                    if ((uVar2 & 0x3ff) != 0) {
                      if ((*(int *)(*(longlong *)((longlong)pvVar13 + uVar29 * 8) + 0x38) <
                           DAT_1468509dc) &&
                         (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                        DAT_1468509d8 = 1.442695;
                        _Init_thread_footer(&DAT_1468509dc);
                      }
                      fVar48 = _guard_xfg_dispatch_icall_nop((float)uVar22);
                      iVar16 = 10 - (int)(fVar48 * DAT_1468509d8);
                      local_208 = uVar22 << ((char)iVar16 + 0xdU & 0x1f) & 0x7fffff |
                                  (0x71U - iVar16 & 0xff) << 0x17 | local_208;
                    }
                  }
                  else if ((uVar2 & 0x7c00) == 0x7c00) {
                    local_208 = local_208 | 0x477fe000;
                  }
                  else {
                    local_208 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                                local_208;
                  }
                  uVar22 = local_208;
                  uVar2 = *(ushort *)(lVar4 + 0xe + uVar26 * 0x18);
                  if (((((uVar2 & 0x7c00) == 0) && ((uVar2 & 0x3ff) != 0)) &&
                      (*(int *)(*(longlong *)((longlong)pvVar13 + uVar29 * 8) + 0x38) <
                       DAT_1468509dc)) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)
                     ) {
                    DAT_1468509d8 = 1.442695;
                    _Init_thread_footer(&DAT_1468509dc);
                  }
                  uVar2 = *(ushort *)(lVar4 + 0x10 + uVar26 * 0x18);
                  local_208 = (uVar2 & 0xffff8000) << 0x10;
                  if ((uVar2 & 0x7c00) == 0) {
                    uVar23 = uVar2 & 0x3ff;
                    if ((uVar2 & 0x3ff) != 0) {
                      if ((*(int *)(*(longlong *)((longlong)pvVar13 + uVar29 * 8) + 0x38) <
                           DAT_1468509dc) &&
                         (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                        DAT_1468509d8 = 1.442695;
                        _Init_thread_footer(&DAT_1468509dc);
                      }
                      fVar48 = _guard_xfg_dispatch_icall_nop((float)uVar23);
                      iVar16 = 10 - (int)(fVar48 * DAT_1468509d8);
                      local_208 = uVar23 << ((char)iVar16 + 0xdU & 0x1f) & 0x7fffff |
                                  (0x71U - iVar16 & 0xff) << 0x17 | local_208;
                    }
                  }
                  else if ((uVar2 & 0x7c00) == 0x7c00) {
                    local_208 = local_208 | 0x477fe000;
                  }
                  else {
                    local_208 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                                local_208;
                  }
                  uVar23 = local_208;
                  uVar2 = *(ushort *)(lVar4 + 0x12 + uVar26 * 0x18);
                  local_208 = (uVar2 & 0xffff8000) << 0x10;
                  if ((uVar2 & 0x7c00) == 0) {
                    uVar24 = uVar2 & 0x3ff;
                    if ((uVar2 & 0x3ff) != 0) {
                      if ((*(int *)(*(longlong *)((longlong)pvVar13 + uVar29 * 8) + 0x38) <
                           DAT_1468509dc) &&
                         (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                        DAT_1468509d8 = 1.442695;
                        _Init_thread_footer(&DAT_1468509dc);
                      }
                      fVar48 = _guard_xfg_dispatch_icall_nop((float)uVar24);
                      iVar16 = 10 - (int)(fVar48 * DAT_1468509d8);
                      local_208 = uVar24 << ((char)iVar16 + 0xdU & 0x1f) & 0x7fffff |
                                  (0x71U - iVar16 & 0xff) << 0x17 | local_208;
                    }
                  }
                  else if ((uVar2 & 0x7c00) == 0x7c00) {
                    local_208 = local_208 | 0x477fe000;
                  }
                  else {
                    local_208 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                                local_208;
                  }
                  uVar24 = local_208;
                  uVar2 = *(ushort *)(lVar4 + 0x14 + uVar26 * 0x18);
                  local_208 = (uVar2 & 0xffff8000) << 0x10;
                  if ((uVar2 & 0x7c00) == 0) {
                    uVar25 = uVar2 & 0x3ff;
                    if ((uVar2 & 0x3ff) != 0) {
                      if ((*(int *)(*(longlong *)((longlong)pvVar13 + uVar29 * 8) + 0x38) <
                           DAT_1468509dc) &&
                         (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                        DAT_1468509d8 = 1.442695;
                        _Init_thread_footer(&DAT_1468509dc);
                      }
                      fVar48 = _guard_xfg_dispatch_icall_nop((float)uVar25);
                      iVar16 = 10 - (int)(fVar48 * DAT_1468509d8);
                      local_208 = uVar25 << ((char)iVar16 + 0xdU & 0x1f) & 0x7fffff |
                                  (0x71U - iVar16 & 0xff) << 0x17 | local_208;
                    }
                  }
                  else if ((uVar2 & 0x7c00) == 0x7c00) {
                    local_208 = local_208 | 0x477fe000;
                  }
                  else {
                    local_208 = ((uVar2 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar2 & 0x3ff) << 0xd |
                                local_208;
                  }
                  uVar2 = *(ushort *)(lVar4 + 0x16 + uVar26 * 0x18);
                  if (((((uVar2 & 0x7c00) == 0) && ((uVar2 & 0x3ff) != 0)) &&
                      (*(int *)(*(longlong *)((longlong)pvVar13 + uVar29 * 8) + 0x38) <
                       DAT_1468509dc)) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)
                     ) {
                    DAT_1468509d8 = 1.442695;
                    _Init_thread_footer(&DAT_1468509dc);
                  }
                }
                lVar4 = puVar5[1];
                local_15c = 0;
                local_14c = 0;
                local_13c = 0;
                local_168 = uVar17;
                local_164 = uVar18;
                local_160 = uVar19;
                local_158 = uVar20;
                local_154 = uVar21;
                local_150 = uVar22;
                local_148 = uVar23;
                local_144 = uVar24;
                local_140 = local_208;
                (**(code **)(*(longlong *)*puVar5 + 0x28))();
                (**(code **)(*(longlong *)*puVar5 + 0x20))();
                local_12c = 0;
                puVar1 = (undefined4 *)(lVar4 + uVar26 * 0x10);
                local_138 = *puVar1;
                local_134 = puVar1[1];
                local_130 = puVar1[2];
                uVar22 = FUN_140487e30(&local_1c8,&local_168);
                param_4 = local_128;
                fVar34 = local_1c8;
                fVar41 = fStack_1c4;
                fVar38 = fStack_1c0;
                fVar43 = fStack_1bc;
                fVar65 = local_1a8;
                fVar66 = fStack_1a4;
                fVar67 = fStack_1a0;
                fVar68 = fStack_19c;
                fVar54 = local_1b8;
                fVar69 = fStack_1b4;
                fVar70 = fStack_1b0;
                fVar71 = fStack_1ac;
                fVar48 = _DAT_146af9d10;
                fVar50 = fRam0000000146af9d14;
                fVar53 = fRam0000000146af9d18;
                fVar44 = fRam0000000146af9d1c;
                uVar17 = _DAT_146af7650;
                uVar18 = uRam0000000146af7654;
                uVar19 = uRam0000000146af7658;
                uVar20 = uRam0000000146af765c;
              }
            }
            else {
              pfVar15 = (float *)((longlong)(int)uVar21 * 0x30 + *(longlong *)(param_1 + 0x7a8));
              fVar34 = *pfVar15;
              fVar41 = pfVar15[1];
              fVar38 = pfVar15[2];
              fVar43 = pfVar15[3];
              fVar65 = pfVar15[8];
              fVar66 = pfVar15[9];
              fVar67 = pfVar15[10];
              fVar68 = pfVar15[0xb];
              fVar54 = pfVar15[4];
              fVar69 = pfVar15[5];
              fVar70 = pfVar15[6];
              fVar71 = pfVar15[7];
              uVar22 = uVar21;
              local_200 = (uint)uVar27;
            }
            fVar61 = fRam0000000146af9f38;
            fVar60 = fRam0000000146af9f34;
            fVar59 = _DAT_146af9f30;
            if (((fVar65 != 0.0) || (fVar66 != 0.0)) || (fVar67 != 0.0)) {
              auVar30._4_4_ = fVar66;
              auVar30._0_4_ = fVar65;
              auVar30._8_4_ = fVar67;
              auVar30._12_4_ = fVar68;
              auVar31 = *(undefined1 (*) [16])(local_120 + 8);
              fVar7 = auVar31._0_4_;
              fVar8 = auVar31._4_4_;
              fVar9 = auVar31._8_4_;
              fVar10 = auVar31._12_4_;
              fVar33 = *local_120;
              fVar40 = local_120[1];
              fVar37 = local_120[2];
              fVar42 = local_120[3];
              auVar31 = minps(auVar30,auVar31);
              auVar32._4_4_ = -(uint)(auVar31._4_4_ < fRam0000000146af9f34);
              auVar32._0_4_ = -(uint)(auVar31._0_4_ < _DAT_146af9f30);
              auVar32._8_4_ = -(uint)(auVar31._8_4_ < fRam0000000146af9f38);
              auVar32._12_4_ = -(uint)(auVar31._12_4_ < fRam0000000146af9f3c);
              iVar16 = movmskps(uVar22,auVar32);
              if (iVar16 == 0) {
                fVar54 = fVar54 * fVar7;
                fVar69 = fVar69 * fVar8;
                fVar70 = fVar70 * fVar9;
                fVar71 = fVar71 * fVar10;
                fVar59 = fVar43 * fVar33 * _DAT_146af9f10 + fVar34 * fVar42 +
                         fVar38 * fVar40 * _DAT_146af9f00 + fVar41 * fVar37 * _DAT_146af9ef0;
                fVar60 = fVar38 * fVar33 * fRam0000000146af9f14 + fVar41 * fVar42 +
                         fVar43 * fVar40 * fRam0000000146af9f04 +
                         fVar34 * fVar37 * fRam0000000146af9ef4;
                fVar61 = fVar41 * fVar33 * fRam0000000146af9f18 + fVar38 * fVar42 +
                         fVar34 * fVar40 * fRam0000000146af9f08 +
                         fVar43 * fVar37 * fRam0000000146af9ef8;
                fVar38 = fVar34 * fVar33 * fRam0000000146af9f1c + fVar43 * fVar42 +
                         fVar41 * fVar40 * fRam0000000146af9f0c +
                         fVar38 * fVar37 * fRam0000000146af9efc;
                fVar53 = fVar70 * fVar40 - fVar69 * fVar37;
                fVar44 = fVar54 * fVar37 - fVar70 * fVar33;
                fVar34 = fVar69 * fVar33 - fVar54 * fVar40;
                fVar41 = fVar71 * fVar42 - fVar71 * fVar42;
                fVar53 = fVar53 + fVar53;
                fVar44 = fVar44 + fVar44;
                fVar34 = fVar34 + fVar34;
                fVar41 = fVar41 + fVar41;
                fVar48 = (fVar34 * fVar40 - fVar44 * fVar37) + fVar53 * fVar42 + fVar54 +
                         local_120[4];
                fVar50 = (fVar53 * fVar37 - fVar34 * fVar33) + fVar44 * fVar42 + fVar69 +
                         local_120[5];
                fVar53 = (fVar44 * fVar33 - fVar53 * fVar40) + fVar34 * fVar42 + fVar70 +
                         local_120[6];
                fVar44 = (fVar41 * fVar42 - fVar41 * fVar42) + fVar41 * fVar42 + fVar71 +
                         local_120[7];
              }
              else {
                fVar71 = local_120[4];
                fVar11 = local_120[5];
                fVar12 = local_120[6];
                fVar36 = fVar40 + fVar40;
                fVar39 = fVar37 + fVar37;
                fVar46 = fVar33 * (fVar33 + fVar33);
                fVar56 = fVar42 * (fVar33 + fVar33);
                fVar62 = (fVar42 * fVar39 + fVar33 * fVar36) * fVar7;
                fVar63 = (fVar56 + fVar40 * fVar39) * fVar8;
                fVar64 = (fVar42 * fVar36 + fVar33 * fVar39) * fVar9;
                fVar47 = fVar8 * (fVar33 * fVar36 - fVar42 * fVar39);
                fVar49 = fVar9 * (fVar40 * fVar39 - fVar56);
                fVar51 = fVar7 * (fVar33 * fVar39 - fVar42 * fVar36);
                fVar56 = fVar41 + fVar41;
                fVar45 = fVar38 + fVar38;
                fVar33 = (float)((uint)((fVar48 - (fVar37 * fVar39 + fVar40 * fVar36)) * fVar7) &
                                uVar17);
                fVar37 = (float)((uint)((fVar50 - (fVar37 * fVar39 + fVar46)) * fVar8) & uVar18);
                fVar40 = (float)((uint)((fVar53 - (fVar40 * fVar36 + fVar46)) * fVar9) & uVar19);
                fVar42 = (float)((uint)((fVar44 - (fVar46 + fVar46)) * fVar10) & uVar20);
                fVar39 = fVar34 * (fVar34 + fVar34);
                fVar36 = (fVar34 + fVar34) * fVar43;
                fVar55 = (fVar45 * fVar43 + fVar56 * fVar34) * fVar65;
                fVar57 = (fVar36 + fVar45 * fVar41) * fVar66;
                fVar58 = (fVar56 * fVar43 + fVar45 * fVar34) * fVar67;
                fVar46 = fVar66 * (fVar56 * fVar34 - fVar45 * fVar43);
                fVar36 = fVar67 * (fVar45 * fVar41 - fVar36);
                fVar52 = fVar65 * (fVar45 * fVar34 - fVar56 * fVar43);
                fVar34 = (float)((uint)((fVar48 - (fVar38 * fVar45 + fVar41 * fVar56)) * fVar65) &
                                uVar17);
                fVar38 = (float)((uint)((fVar50 - (fVar38 * fVar45 + fVar39)) * fVar66) & uVar18);
                fVar41 = (float)((uint)((fVar53 - (fVar41 * fVar56 + fVar39)) * fVar67) & uVar19);
                fVar43 = (float)((uint)((fVar44 - (fVar39 + fVar39)) * fVar68) & uVar20);
                local_1c8 = fVar55 * fVar47 + fVar34 * fVar33 + fVar52 * fVar64 + fVar43 * fVar71;
                fStack_1c4 = fVar55 * fVar37 + fVar34 * fVar62 + fVar52 * fVar49 + fVar43 * fVar11;
                fStack_1c0 = fVar55 * fVar63 + fVar34 * fVar51 + fVar52 * fVar40 + fVar43 * fVar12;
                fStack_1bc = fVar55 * fVar42 + fVar34 * fVar42 + fVar52 * fVar42 + fVar43 * fVar44;
                local_1b8 = fVar38 * fVar47 + fVar46 * fVar33 + fVar57 * fVar64 + fVar43 * fVar71;
                fStack_1b4 = fVar38 * fVar37 + fVar46 * fVar62 + fVar57 * fVar49 + fVar43 * fVar11;
                fStack_1b0 = fVar38 * fVar63 + fVar46 * fVar51 + fVar57 * fVar40 + fVar43 * fVar12;
                fStack_1ac = fVar38 * fVar42 + fVar46 * fVar42 + fVar57 * fVar42 + fVar43 * fVar44;
                local_1a8 = fVar36 * fVar47 + fVar58 * fVar33 + fVar41 * fVar64 + fVar43 * fVar71;
                fStack_1a4 = fVar36 * fVar37 + fVar58 * fVar62 + fVar41 * fVar49 + fVar43 * fVar11;
                fStack_1a0 = fVar36 * fVar63 + fVar58 * fVar51 + fVar41 * fVar40 + fVar43 * fVar12;
                fStack_19c = fVar36 * fVar42 + fVar58 * fVar42 + fVar41 * fVar42 + fVar43 * fVar44;
                local_198 = fVar69 * fVar47 + fVar54 * fVar33 + fVar70 * fVar64 + fVar44 * fVar71;
                fStack_194 = fVar69 * fVar37 + fVar54 * fVar62 + fVar70 * fVar49 + fVar44 * fVar11;
                fStack_190 = fVar69 * fVar63 + fVar54 * fVar51 + fVar70 * fVar40 + fVar44 * fVar12;
                fStack_18c = fVar69 * fVar42 + fVar54 * fVar42 + fVar70 * fVar42 + fVar44 * fVar44;
                FMatrix::RemoveScaling(&local_1c8);
                fVar48 = (float)(-(uint)(fVar59 <= fVar7 * fVar65) & (_DAT_146af9f20 ^ (uint)fVar48)
                                ^ _DAT_146af9f20);
                fVar50 = (float)(-(uint)(fVar60 <= fVar8 * fVar66) &
                                 (uRam0000000146af9f24 ^ (uint)fVar50) ^ uRam0000000146af9f24);
                fVar53 = (float)(-(uint)(fVar61 <= fVar9 * fVar67) &
                                 (uRam0000000146af9f28 ^ (uint)fVar53) ^ uRam0000000146af9f28);
                local_1c8 = local_1c8 * fVar48;
                fStack_1c4 = fStack_1c4 * fVar48;
                fStack_1c0 = fStack_1c0 * fVar48;
                fStack_1b4 = fStack_1b4 * fVar50;
                fStack_1b0 = fStack_1b0 * fVar50;
                local_1b8 = local_1b8 * fVar50;
                fStack_1a4 = fStack_1a4 * fVar53;
                fStack_1a0 = fStack_1a0 * fVar53;
                local_1a8 = local_1a8 * fVar53;
                FQuat::FQuat(&local_188,&local_1c8);
                auVar35._0_4_ = (float)local_188 * (float)local_188 + fStack_180 * fStack_180;
                auVar35._4_4_ =
                     local_188._4_4_ * local_188._4_4_ + (float)uStack_17c * (float)uStack_17c;
                auVar35._8_4_ = fStack_180 * fStack_180 + (float)local_188 * (float)local_188;
                auVar35._12_4_ =
                     (float)uStack_17c * (float)uStack_17c + local_188._4_4_ * local_188._4_4_;
                fVar41 = auVar35._4_4_ + auVar35._0_4_;
                fVar38 = auVar35._8_4_ + auVar35._4_4_;
                fVar43 = auVar35._12_4_ + auVar35._8_4_;
                fVar54 = auVar35._0_4_ + auVar35._12_4_;
                auVar31._4_4_ = fVar38;
                auVar31._0_4_ = fVar41;
                auVar31._8_4_ = fVar43;
                auVar31._12_4_ = fVar54;
                auVar31 = rsqrtps(auVar35,auVar31);
                fVar48 = auVar31._0_4_;
                fVar50 = auVar31._4_4_;
                fVar53 = auVar31._8_4_;
                fVar34 = auVar31._12_4_;
                fVar48 = (_DAT_146af9ce0 - fVar48 * fVar48 * fVar41 * _DAT_146af9ce0) * fVar48 +
                         fVar48;
                fVar50 = (fRam0000000146af9ce4 - fVar50 * fVar50 * fVar38 * fRam0000000146af9ce4) *
                         fVar50 + fVar50;
                fVar53 = (fRam0000000146af9ce8 - fVar53 * fVar53 * fVar43 * fRam0000000146af9ce8) *
                         fVar53 + fVar53;
                fVar34 = (fRam0000000146af9cec - fVar34 * fVar34 * fVar54 * fRam0000000146af9cec) *
                         fVar34 + fVar34;
                fVar44 = 0.0;
                fVar59 = (float)(((uint)(((_DAT_146af9ce0 -
                                          fVar48 * fVar48 * fVar41 * _DAT_146af9ce0) * fVar48 +
                                         fVar48) * (float)local_188) ^ _DAT_146af9cd0) &
                                 -(uint)(1e-08 <= fVar41) ^ _DAT_146af9cd0);
                fVar60 = (float)(((uint)(((fRam0000000146af9ce4 -
                                          fVar50 * fVar50 * fVar38 * fRam0000000146af9ce4) * fVar50
                                         + fVar50) * local_188._4_4_) ^ uRam0000000146af9cd4) &
                                 -(uint)(1e-08 <= fVar38) ^ uRam0000000146af9cd4);
                fVar61 = (float)(((uint)(((fRam0000000146af9ce8 -
                                          fVar53 * fVar53 * fVar43 * fRam0000000146af9ce8) * fVar53
                                         + fVar53) * fStack_180) ^ uRam0000000146af9cd8) &
                                 -(uint)(1e-08 <= fVar43) ^ uRam0000000146af9cd8);
                fVar38 = (float)(((uint)(((fRam0000000146af9cec -
                                          fVar34 * fVar34 * fVar54 * fRam0000000146af9cec) * fVar34
                                         + fVar34) * (float)uStack_17c) ^ uRam0000000146af9cdc) &
                                 -(uint)(1e-08 <= fVar54) ^ uRam0000000146af9cdc);
                local_188 = CONCAT44(fVar60,fVar59);
                uStack_17c = CONCAT44(uStack_17c._4_4_,fVar38);
                fVar48 = local_198;
                fVar50 = fStack_194;
                fVar53 = fStack_190;
                fStack_180 = fVar61;
              }
              iVar16 = (int)param_4[1];
              *(int *)(param_4 + 1) = iVar16 + 1;
              if (*(int *)((longlong)param_4 + 0xc) < iVar16 + 1) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_4,iVar16);
                uVar17 = _DAT_146af7650;
                uVar18 = uRam0000000146af7654;
                uVar19 = uRam0000000146af7658;
                uVar20 = uRam0000000146af765c;
              }
              pfVar15 = (float *)((longlong)iVar16 * 0x30 + *param_4);
              *pfVar15 = fVar59;
              pfVar15[1] = fVar60;
              pfVar15[2] = fVar61;
              pfVar15[3] = fVar38;
              pfVar15[4] = fVar48;
              pfVar15[5] = fVar50;
              pfVar15[6] = fVar53;
              pfVar15[7] = fVar44;
              pfVar15[8] = fVar7 * fVar65;
              pfVar15[9] = fVar8 * fVar66;
              pfVar15[10] = fVar9 * fVar67;
              pfVar15[0xb] = fVar10 * fVar68;
              fVar48 = _DAT_146af9d10;
              fVar50 = fRam0000000146af9d14;
              fVar53 = fRam0000000146af9d18;
              fVar44 = fRam0000000146af9d1c;
            }
            local_200 = local_200 + 1;
            uVar27 = (ulonglong)local_200;
            uVar26 = uVar26 + 1;
            param_1 = local_118;
          } while ((int)local_200 <= *(int *)((longlong)puVar28 + 0x24));
        }
      }
      else if (iVar16 <= *(int *)((longlong)puVar28 + 0x1c)) {
        do {
          FUN_1424c4850(param_1,param_2,iVar16,param_4);
          iVar16 = iVar16 + 1;
        } while (iVar16 <= *(int *)((longlong)puVar28 + 0x1c));
      }
    }
  }
  return;
}



// FUNCTION 1424c5c20 FUN_1424c5c20 body=688 status=ok
// SIG undefined FUN_1424c5c20(void)

void FUN_1424c5c20(longlong param_1,float *param_2,int param_3,undefined8 *param_4,longlong *param_5
                  )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined1 local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  
  puVar11 = (undefined8 *)((longlong)param_3 * 0x40 + **(longlong **)(param_1 + 0x840));
  local_90 = 1;
  local_a8 = *puVar11;
  uStack_a0 = *(undefined4 *)(puVar11 + 1);
  uStack_9c = puVar11[2];
  local_94 = *(undefined4 *)(puVar11 + 3);
  FBox::TransformBy(&local_a8,&local_88,param_1 + 0x210);
  fVar1 = *param_2;
  if ((((fVar1 <= local_7c) && (fVar2 = param_2[3], local_88 <= fVar2)) &&
      (fVar3 = param_2[1], fVar3 <= local_78)) &&
     (((local_84 < param_2[4] || local_84 == param_2[4] && (fVar4 = param_2[2], fVar4 <= local_74))
      && (local_80 < param_2[5] || local_80 == param_2[5])))) {
    iVar7 = *(int *)((longlong)puVar11 + 0xc);
    if ((iVar7 < 0) ||
       ((((fVar1 < local_88 && (local_88 < fVar2)) &&
         ((((fVar3 < local_84 &&
            (((local_84 < param_2[4] && (fVar4 < local_80)) && (local_80 < param_2[5])))) &&
           ((fVar1 < local_7c && (local_7c < fVar2)))) && (fVar3 < local_78)))) &&
        (((local_78 < param_2[4] && (fVar4 < local_74)) && (local_74 < param_2[5])))))) {
      uVar10 = (ulonglong)*(int *)(puVar11 + 4);
      iVar7 = *(int *)(param_1 + 0x858);
      if (*(int *)(puVar11 + 4) <= *(int *)((longlong)puVar11 + 0x24)) {
        lVar12 = uVar10 * 4;
        do {
          iVar8 = (int)uVar10;
          if (0 < iVar7) {
            iVar8 = *(int *)(lVar12 + *(longlong *)(param_1 + 0x850));
          }
          if (((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 0x7b0))) &&
             (cVar6 = (*(code *)*param_4)(param_4[1],
                                          (longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 0x7a8)),
             cVar6 != '\0')) {
            iVar5 = (int)param_5[1];
            *(int *)(param_5 + 1) = iVar5 + 1;
            if (*(int *)((longlong)param_5 + 0xc) < iVar5 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar5);
            }
            *(int *)(*param_5 + (longlong)iVar5 * 4) = iVar8;
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          lVar12 = lVar12 + 4;
        } while ((int)uVar9 <= *(int *)((longlong)puVar11 + 0x24));
      }
    }
    else if (iVar7 <= *(int *)((longlong)puVar11 + 0x1c)) {
      do {
        local_a8 = *param_4;
        uStack_a0 = *(undefined4 *)(param_4 + 1);
        uStack_9c = CONCAT44(uStack_9c._4_4_,*(undefined4 *)((longlong)param_4 + 0xc));
        FUN_1424c5c20(param_1,param_2,iVar7,&local_a8,param_5);
        iVar7 = iVar7 + 1;
      } while (iVar7 <= *(int *)((longlong)puVar11 + 0x1c));
    }
  }
  return;
}



// FUNCTION 1424c5ed0 GeneratePlanarTilingPolyUVs body=79 status=ok
// SIG undefined GeneratePlanarTilingPolyUVs(void)

void FGeomTools::GeneratePlanarTilingPolyUVs(longlong *param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)param_1[1]) {
    lVar2 = 0;
    do {
      lVar1 = *param_1;
      iVar3 = iVar3 + 1;
      *(float *)(lVar2 + 0xc + lVar1) = (1.0 / param_2) * *(float *)(lVar2 + lVar1);
      *(float *)(lVar2 + 0x10 + lVar1) = (1.0 / param_2) * *(float *)(lVar2 + 4 + lVar1);
      lVar2 = lVar2 + 0x18;
    } while (iVar3 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1424c5f20 FUN_1424c5f20 body=143 status=ok
// SIG undefined FUN_1424c5f20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1424c5f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0xbf800000;
  local_28 = 0x44fa0000;
  local_24 = 0;
  local_20 = _DAT_1468b5d90;
  local_14 = 0x43800000;
  local_18 = DAT_1468b5d98;
  FUN_1424d0920(&local_28);
  FUN_1424beb60(&local_28,param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 1424c5ff0 FUN_1424c5ff0 body=9583 status=ok
// SIG undefined FUN_1424c5ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1424c5ff0(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
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
  bool bVar20;
  byte bVar21;
  uint *puVar22;
  float *pfVar23;
  uint *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined2 *puVar28;
  undefined8 *puVar29;
  longlong *plVar30;
  int *piVar31;
  undefined1 uVar32;
  int iVar33;
  ulonglong uVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  ulonglong uVar39;
  bool bVar40;
  int iVar41;
  longlong lVar42;
  longlong lVar43;
  int iVar44;
  char cVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar54 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  longlong lStack_b60;
  int aiStack_b58 [100];
  undefined1 auStack_9c8 [32];
  float *local_9a8;
  undefined1 local_9a0;
  bool local_998;
  byte local_997;
  byte local_995;
  int local_994;
  uint local_990;
  longlong local_988;
  undefined8 local_978;
  float fStack_970;
  float fStack_96c;
  undefined1 local_968 [8];
  float fStack_960;
  float fStack_95c;
  uint local_958;
  int local_954;
  longlong local_950;
  longlong local_948;
  longlong *local_940;
  longlong local_938;
  int local_930;
  int local_92c;
  int local_928;
  longlong local_920;
  int local_918;
  int local_914;
  uint local_910;
  longlong local_908;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  float local_8c8;
  float fStack_8c4;
  float fStack_8c0;
  float fStack_8bc;
  undefined8 local_8b8;
  float local_8a8;
  float local_898;
  float local_894;
  float local_890;
  float local_88c;
  float local_888;
  float local_884;
  float local_880;
  float local_87c;
  float local_878;
  float fStack_874;
  float local_870;
  float local_868;
  float fStack_864;
  float fStack_860;
  undefined4 uStack_85c;
  float local_858;
  float fStack_854;
  float fStack_850;
  undefined4 uStack_84c;
  float local_848;
  float fStack_844;
  float fStack_840;
  undefined4 uStack_83c;
  float local_838;
  float fStack_834;
  float fStack_830;
  undefined4 uStack_82c;
  float local_828;
  float fStack_824;
  float fStack_820;
  undefined4 uStack_81c;
  ulonglong local_818;
  undefined8 local_808;
  float local_800;
  undefined8 local_7f8;
  float local_7f0;
  float local_7e8;
  float fStack_7e4;
  float fStack_7e0;
  float fStack_7dc;
  float local_7d0;
  float local_7c4;
  undefined1 local_7c0 [12];
  undefined1 local_7b4 [12];
  undefined1 local_7a8 [12];
  undefined1 local_79c [20];
  undefined1 local_788 [64];
  longlong local_748;
  longlong local_740;
  undefined4 local_738;
  longlong local_730;
  int local_728;
  undefined4 local_724;
  byte local_720;
  undefined1 local_71f;
  byte local_71e;
  undefined4 local_71c;
  undefined1 local_718;
  float local_714;
  undefined1 local_708 [336];
  uint local_5b8 [24];
  uint *local_558;
  int local_548;
  int local_544;
  int aiStack_4e0 [10];
  longlong local_4b8;
  undefined8 local_4a8;
  int local_498 [8];
  longlong local_478;
  longlong local_470;
  undefined8 local_468;
  float local_460;
  undefined8 local_45c;
  float local_454;
  int local_450;
  float local_44c [8];
  float local_42c [8];
  undefined8 local_40c;
  longlong local_400;
  undefined4 local_3f8;
  undefined2 local_3e8;
  undefined1 local_3e6;
  undefined8 local_3e0;
  int local_3d8 [20];
  undefined2 *local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  longlong local_360;
  int local_358 [28];
  longlong local_2e8;
  int local_2e0 [18];
  undefined8 local_298 [12];
  undefined8 *local_238;
  undefined8 local_228;
  longlong local_198;
  undefined8 local_188;
  float afStack_17c [6];
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  float afStack_140 [6];
  float local_128;
  float fStack_124;
  float fStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_9c8;
  local_908 = param_1;
  local_910 = param_4;
  local_940 = param_2;
  local_8b8 = param_5;
  if (*(char *)(*(longlong *)*param_2 + 0xf68) == '\0') {
    if ((*(char *)(param_1 + 0x520) == '\0') || (*(int *)(DAT_146af9d90 + 4) < 1)) {
      local_997 = 0;
    }
    else {
      local_997 = 1;
    }
    local_995 = local_997 ^ 1;
    uVar32 = 0 < *(int *)(DAT_146af9da8 + 4);
    local_998 = (bool)uVar32;
    local_994 = 0;
    local_918 = *(int *)(DAT_146af9e20 + 4);
    if (0 < (int)param_2[1]) {
      local_938 = 0;
      local_990 = 1;
      do {
        if ((local_910 & local_990) != 0) {
          lVar27 = *(longlong *)(param_1 + 0x490);
          local_724 = 0;
          local_738 = 1;
          lVar42 = *(longlong *)(*param_2 + local_938 * 8);
          local_748 = param_1 + 0x420;
          local_740 = param_1 + 0x460;
          local_728 = local_994;
          local_720 = (byte)(*(uint *)(param_1 + 0x18) >> 10) & 1;
          local_71f = DAT_1464c9c6c;
          local_71c = *(undefined4 *)(param_1 + 0x418);
          local_730 = lVar42;
          if (*(int *)(lVar27 + 8) != 0) {
            FFoliageRenderInstanceParams::FFoliageRenderInstanceParams
                      (local_708,local_995,local_997,uVar32);
            local_558 = (uint *)0x0;
            pfVar23 = (float *)(param_1 + 0x80);
            local_548 = 0;
            local_544 = 0;
            local_4b8 = 0;
            local_4a8 = 0;
            local_40c = 0xffffffffffffffff;
            local_400 = 0;
            local_3f8 = 0;
            local_450 = *(int *)(*(longlong *)(param_1 + 0x3a0) + 8);
            local_478 = lVar27;
            local_470 = lVar42;
            FMatrix::Inverse(pfVar23,afStack_140 + 2);
            cVar45 = DAT_146532b90;
            lVar27 = *(longlong *)(lVar42 + 0x78);
            bVar20 = false;
            iVar36 = *(int *)(DAT_146af9d60 + 4);
            local_718 = lVar27 != 0;
            if (lVar27 == 0) {
              lVar27 = *(longlong *)*local_940;
              if (((*(char *)(lVar27 + 0x1209) != '\0') && (*(int *)(lVar27 + 0xf60) == 1)) &&
                 (local_994 == 0)) {
                fVar51 = *(float *)(lVar27 + 0x5a0);
                fVar48 = *(float *)(lVar27 + 0x5a4);
                fVar49 = *(float *)(lVar27 + 0x5a8);
                fVar47 = *(float *)(lVar27 + 0x5ac);
                fVar60 = *(float *)(lVar27 + 0x590);
                fVar59 = *(float *)(lVar27 + 0x594);
                fVar50 = *(float *)(lVar27 + 0x598);
                fVar61 = *(float *)(lVar27 + 0x59c);
                fVar62 = *(float *)(lVar27 + 0x5b0);
                fVar63 = *(float *)(lVar27 + 0x5b4);
                fVar4 = *(float *)(lVar27 + 0x5b8);
                fVar5 = *(float *)(lVar27 + 0x5bc);
                fVar6 = *(float *)(lVar27 + 0x5c0);
                fVar7 = *(float *)(lVar27 + 0x5c4);
                fVar8 = *(float *)(lVar27 + 0x5c8);
                fVar9 = *(float *)(lVar27 + 0x5cc);
                fVar10 = *pfVar23;
                fVar11 = *(float *)(param_1 + 0x84);
                fVar12 = *(float *)(param_1 + 0x88);
                fVar13 = *(float *)(param_1 + 0x8c);
                fVar14 = *(float *)(param_1 + 0xa0);
                fVar53 = *(float *)(param_1 + 0xa4);
                fVar56 = *(float *)(param_1 + 0xa8);
                fVar58 = *(float *)(param_1 + 0xac);
                fVar15 = *(float *)(param_1 + 0x90);
                fVar16 = *(float *)(param_1 + 0x94);
                fVar17 = *(float *)(param_1 + 0x98);
                fVar18 = *(float *)(param_1 + 0x9c);
                fVar52 = *(float *)(param_1 + 0xb0);
                fVar55 = *(float *)(param_1 + 0xb4);
                fVar57 = *(float *)(param_1 + 0xb8);
                fVar19 = *(float *)(param_1 + 0xbc);
                local_8f8 = CONCAT44(fVar11 * fVar48 + fVar10 * fVar59 + fVar12 * fVar63 +
                                     fVar13 * fVar7,
                                     fVar11 * fVar51 + fVar10 * fVar60 + fVar12 * fVar62 +
                                     fVar13 * fVar6);
                uStack_8f0 = CONCAT44(fVar11 * fVar47 + fVar10 * fVar61 + fVar12 * fVar5 +
                                      fVar13 * fVar9,
                                      fVar11 * fVar49 + fVar10 * fVar50 + fVar12 * fVar4 +
                                      fVar13 * fVar8);
                local_8e8 = CONCAT44(fVar15 * fVar59 + fVar48 * fVar16 + fVar17 * fVar63 +
                                     fVar18 * fVar7,
                                     fVar15 * fVar60 + fVar51 * fVar16 + fVar17 * fVar62 +
                                     fVar18 * fVar6);
                uStack_8e0 = CONCAT44(fVar15 * fVar61 + fVar47 * fVar16 + fVar17 * fVar5 +
                                      fVar18 * fVar9,
                                      fVar15 * fVar50 + fVar49 * fVar16 + fVar17 * fVar4 +
                                      fVar18 * fVar8);
                local_8d8 = CONCAT44(fVar14 * fVar59 + fVar48 * fVar53 + fVar56 * fVar63 +
                                     fVar58 * fVar7,
                                     fVar14 * fVar60 + fVar51 * fVar53 + fVar56 * fVar62 +
                                     fVar58 * fVar6);
                uStack_8d0 = CONCAT44(fVar14 * fVar61 + fVar47 * fVar53 + fVar56 * fVar5 +
                                      fVar58 * fVar9,
                                      fVar14 * fVar50 + fVar49 * fVar53 + fVar56 * fVar4 +
                                      fVar58 * fVar8);
                local_8c8 = fVar55 * fVar51 + fVar52 * fVar60 + fVar57 * fVar62 + fVar19 * fVar6;
                fStack_8c4 = fVar55 * fVar48 + fVar52 * fVar59 + fVar57 * fVar63 + fVar19 * fVar7;
                fStack_8c0 = fVar55 * fVar49 + fVar52 * fVar50 + fVar57 * fVar4 + fVar19 * fVar8;
                fStack_8bc = fVar55 * fVar47 + fVar52 * fVar61 + fVar57 * fVar5 + fVar19 * fVar9;
                lVar27 = ((longlong *)*local_940)[1];
                auVar54 = *(undefined1 (*) [16])(lVar27 + 0x590);
                fVar51 = auVar54._12_4_;
                fVar48 = *(float *)(lVar27 + 0x5a0);
                fVar49 = *(float *)(lVar27 + 0x5a4);
                fVar47 = *(float *)(lVar27 + 0x5a8);
                fVar60 = *(float *)(lVar27 + 0x5ac);
                fVar59 = *(float *)(lVar27 + 0x5b0);
                fVar50 = *(float *)(lVar27 + 0x5b4);
                fVar61 = *(float *)(lVar27 + 0x5b8);
                fVar62 = *(float *)(lVar27 + 0x5bc);
                fVar63 = *(float *)(lVar27 + 0x5c0);
                fVar4 = *(float *)(lVar27 + 0x5c4);
                fVar5 = *(float *)(lVar27 + 0x5c8);
                fVar6 = *(float *)(lVar27 + 0x5cc);
                fVar52 = auVar54._0_4_;
                fVar55 = auVar54._4_4_;
                fVar57 = auVar54._8_4_;
                fVar7 = *(float *)(param_1 + 0xb0);
                fVar8 = *(float *)(param_1 + 0xb4);
                fVar9 = *(float *)(param_1 + 0xb8);
                fVar10 = *(float *)(param_1 + 0xbc);
                local_238 = (undefined8 *)0x0;
                local_228 = 0;
                local_198 = 0;
                local_188 = 0;
                local_388 = (undefined2 *)0x0;
                local_378 = 0;
                local_2e8 = 0;
                local_2e0[2] = 0;
                local_2e0[3] = 0;
                afStack_17c[5] =
                     fVar15 * fVar52 + fVar16 * fVar48 + fVar17 * fVar59 + fVar18 * fVar63;
                fStack_164 = fVar15 * fVar55 + fVar16 * fVar49 + fVar17 * fVar50 + fVar18 * fVar4;
                fStack_160 = fVar15 * fVar57 + fVar16 * fVar47 + fVar17 * fVar61 + fVar18 * fVar5;
                fStack_15c = fVar15 * fVar51 + fVar16 * fVar60 + fVar17 * fVar62 + fVar18 * fVar6;
                local_158 = fVar14 * fVar52 + fVar53 * fVar48 + fVar56 * fVar59 + fVar58 * fVar63;
                fStack_154 = fVar14 * fVar55 + fVar53 * fVar49 + fVar56 * fVar50 + fVar58 * fVar4;
                fStack_150 = fVar14 * fVar57 + fVar53 * fVar47 + fVar56 * fVar61 + fVar58 * fVar5;
                fStack_14c = fVar14 * fVar51 + fVar53 * fVar60 + fVar56 * fVar62 + fVar58 * fVar6;
                fVar11 = *pfVar23;
                fVar12 = *(float *)(param_1 + 0x84);
                fVar13 = *(float *)(param_1 + 0x88);
                fVar14 = *(float *)(param_1 + 0x8c);
                local_148 = CONCAT44(fVar7 * fVar55 + fVar8 * fVar49 + fVar9 * fVar50 +
                                     fVar10 * fVar4,
                                     fVar7 * fVar52 + fVar8 * fVar48 + fVar9 * fVar59 +
                                     fVar10 * fVar63);
                afStack_140[1] = fVar7 * fVar51 + fVar8 * fVar60 + fVar9 * fVar62 + fVar10 * fVar6;
                afStack_140[0] = fVar7 * fVar57 + fVar8 * fVar47 + fVar9 * fVar61 + fVar10 * fVar5;
                afStack_17c[1] =
                     fVar11 * fVar52 + fVar12 * fVar48 + fVar13 * fVar59 + fVar14 * fVar63;
                afStack_17c[2] =
                     fVar11 * fVar55 + fVar12 * fVar49 + fVar13 * fVar50 + fVar14 * fVar4;
                afStack_17c[3] =
                     fVar11 * fVar57 + fVar12 * fVar47 + fVar13 * fVar61 + fVar14 * fVar5;
                afStack_17c[4] =
                     fVar11 * fVar51 + fVar12 * fVar60 + fVar13 * fVar62 + fVar14 * fVar6;
                GetViewFrustumBounds(local_298,&local_8f8,0);
                GetViewFrustumBounds(&local_3e8,afStack_17c + 1,0);
                if ((4 < (int)local_228) && (4 < (int)local_378)) {
                  local_548 = 0;
                  iVar37 = 0;
                  if (local_544 != 5) {
                    TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeTo(local_5b8,5);
                    iVar37 = local_548;
                  }
                  puVar29 = local_298;
                  if (local_238 != (undefined8 *)0x0) {
                    puVar29 = local_238;
                  }
                  local_548 = iVar37 + 1;
                  if (local_544 < iVar37 + 1) {
                    TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(local_5b8);
                  }
                  puVar24 = local_5b8;
                  if (local_558 != (uint *)0x0) {
                    puVar24 = local_558;
                  }
                  puVar24 = puVar24 + (longlong)iVar37 * 4;
                  *(undefined8 *)puVar24 = *puVar29;
                  puVar24[2] = *(uint *)(puVar29 + 1);
                  puVar24[3] = *(uint *)((longlong)puVar29 + 0xc);
                  lVar27 = (longlong)local_548;
                  puVar28 = &local_3e8;
                  if (local_388 != (undefined2 *)0x0) {
                    puVar28 = local_388;
                  }
                  local_548 = local_548 + 1;
                  if (local_544 < local_548) {
                    TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(local_5b8);
                  }
                  puVar24 = local_5b8;
                  if (local_558 != (uint *)0x0) {
                    puVar24 = local_558;
                  }
                  puVar24 = puVar24 + lVar27 * 4;
                  *(undefined8 *)puVar24 = *(undefined8 *)(puVar28 + 8);
                  puVar24[2] = *(uint *)(puVar28 + 0xc);
                  puVar24[3] = *(uint *)(puVar28 + 0xe);
                  lVar27 = (longlong)local_548;
                  puVar29 = local_298;
                  if (local_238 != (undefined8 *)0x0) {
                    puVar29 = local_238;
                  }
                  local_548 = local_548 + 1;
                  if (local_544 < local_548) {
                    TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(local_5b8);
                  }
                  puVar24 = local_5b8;
                  if (local_558 != (uint *)0x0) {
                    puVar24 = local_558;
                  }
                  puVar24 = puVar24 + lVar27 * 4;
                  *(undefined8 *)puVar24 = puVar29[4];
                  puVar24[2] = *(uint *)(puVar29 + 5);
                  puVar24[3] = *(uint *)((longlong)puVar29 + 0x2c);
                  lVar27 = (longlong)local_548;
                  puVar29 = local_298;
                  if (local_238 != (undefined8 *)0x0) {
                    puVar29 = local_238;
                  }
                  local_548 = local_548 + 1;
                  if (local_544 < local_548) {
                    TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(local_5b8);
                  }
                  puVar24 = local_5b8;
                  if (local_558 != (uint *)0x0) {
                    puVar24 = local_558;
                  }
                  puVar24 = puVar24 + lVar27 * 4;
                  *(undefined8 *)puVar24 = puVar29[6];
                  puVar24[2] = *(uint *)(puVar29 + 7);
                  puVar24[3] = *(uint *)((longlong)puVar29 + 0x3c);
                  lVar27 = (longlong)local_548;
                  puVar29 = local_298;
                  if (local_238 != (undefined8 *)0x0) {
                    puVar29 = local_238;
                  }
                  local_548 = local_548 + 1;
                  if (local_544 < local_548) {
                    TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(local_5b8);
                  }
                  puVar24 = local_5b8;
                  if (local_558 != (uint *)0x0) {
                    puVar24 = local_558;
                  }
                  puVar24 = puVar24 + lVar27 * 4;
                  *(undefined8 *)puVar24 = puVar29[8];
                  puVar24[2] = *(uint *)(puVar29 + 9);
                  puVar24[3] = *(uint *)((longlong)puVar29 + 0x4c);
                  FConvexVolume::Init(local_5b8);
                  if (local_2e8 != 0) {
                    FMemory::Free();
                  }
                  if (local_388 != (undefined2 *)0x0) {
                    FMemory::Free();
                  }
                  if (local_198 != 0) {
                    FMemory::Free();
                  }
                  if (local_238 != (undefined8 *)0x0) {
                    FMemory::Free();
                  }
                  goto LAB_1424c6d0a;
                }
                if (local_2e8 != 0) {
                  FMemory::Free();
                }
                if (local_388 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
                if (local_198 != 0) {
                  FMemory::Free();
                }
                if (local_238 != (undefined8 *)0x0) {
                  FMemory::Free();
                }
LAB_1424c6bd1:
                if (local_4b8 != 0) {
                  FMemory::Free();
                }
                param_2 = local_940;
                uVar32 = local_998;
                if (local_558 != (uint *)0x0) {
                  FMemory::Free();
                  param_2 = local_940;
                  uVar32 = local_998;
                }
                goto LAB_1424c8475;
              }
              fVar48 = *pfVar23;
              fVar49 = *(float *)(param_1 + 0x84);
              fVar47 = *(float *)(param_1 + 0x88);
              fVar60 = *(float *)(param_1 + 0x8c);
              fVar59 = *(float *)(lVar42 + 0x5a0);
              fVar50 = *(float *)(lVar42 + 0x5a4);
              fVar61 = *(float *)(lVar42 + 0x5a8);
              fVar62 = *(float *)(lVar42 + 0x5ac);
              auVar54 = *(undefined1 (*) [16])(lVar42 + 0x590);
              fVar51 = auVar54._12_4_;
              fVar63 = *(float *)(lVar42 + 0x5b0);
              fVar4 = *(float *)(lVar42 + 0x5b4);
              fVar5 = *(float *)(lVar42 + 0x5b8);
              fVar6 = *(float *)(lVar42 + 0x5bc);
              fVar7 = *(float *)(lVar42 + 0x5c0);
              fVar8 = *(float *)(lVar42 + 0x5c4);
              fVar9 = *(float *)(lVar42 + 0x5c8);
              fVar10 = *(float *)(lVar42 + 0x5cc);
              fVar53 = auVar54._0_4_;
              fVar56 = auVar54._4_4_;
              fVar58 = auVar54._8_4_;
              local_8f8 = CONCAT44(fVar48 * fVar56 + fVar49 * fVar50 + fVar47 * fVar4 +
                                   fVar60 * fVar8,
                                   fVar48 * fVar53 + fVar49 * fVar59 + fVar47 * fVar63 +
                                   fVar60 * fVar7);
              uStack_8f0 = CONCAT44(fVar48 * fVar51 + fVar49 * fVar62 + fVar47 * fVar6 +
                                    fVar60 * fVar10,
                                    fVar48 * fVar58 + fVar49 * fVar61 + fVar47 * fVar5 +
                                    fVar60 * fVar9);
              fVar48 = *(float *)(param_1 + 0x90);
              fVar49 = *(float *)(param_1 + 0x94);
              fVar47 = *(float *)(param_1 + 0x98);
              fVar60 = *(float *)(param_1 + 0x9c);
              fVar11 = *(float *)(param_1 + 0xa0);
              fVar12 = *(float *)(param_1 + 0xa4);
              fVar13 = *(float *)(param_1 + 0xa8);
              fVar14 = *(float *)(param_1 + 0xac);
              local_8e8 = CONCAT44(fVar48 * fVar56 + fVar49 * fVar50 + fVar47 * fVar4 +
                                   fVar60 * fVar8,
                                   fVar48 * fVar53 + fVar49 * fVar59 + fVar47 * fVar63 +
                                   fVar60 * fVar7);
              uStack_8e0 = CONCAT44(fVar48 * fVar51 + fVar49 * fVar62 + fVar47 * fVar6 +
                                    fVar60 * fVar10,
                                    fVar48 * fVar58 + fVar49 * fVar61 + fVar47 * fVar5 +
                                    fVar60 * fVar9);
              fVar48 = *(float *)(param_1 + 0xb0);
              fVar49 = *(float *)(param_1 + 0xb4);
              fVar47 = *(float *)(param_1 + 0xb8);
              fVar60 = *(float *)(param_1 + 0xbc);
              local_8d8 = CONCAT44(fVar11 * fVar56 + fVar12 * fVar50 + fVar13 * fVar4 +
                                   fVar14 * fVar8,
                                   fVar11 * fVar53 + fVar12 * fVar59 + fVar13 * fVar63 +
                                   fVar14 * fVar7);
              uStack_8d0 = CONCAT44(fVar11 * fVar51 + fVar12 * fVar62 + fVar13 * fVar6 +
                                    fVar14 * fVar10,
                                    fVar11 * fVar58 + fVar12 * fVar61 + fVar13 * fVar5 +
                                    fVar14 * fVar9);
              local_8c8 = fVar48 * fVar53 + fVar49 * fVar59 + fVar47 * fVar63 + fVar60 * fVar7;
              fStack_8c4 = fVar48 * fVar56 + fVar49 * fVar50 + fVar47 * fVar4 + fVar60 * fVar8;
              fStack_8c0 = fVar48 * fVar58 + fVar49 * fVar61 + fVar47 * fVar5 + fVar60 * fVar9;
              fStack_8bc = fVar48 * fVar51 + fVar49 * fVar62 + fVar47 * fVar6 + fVar60 * fVar10;
              GetViewFrustumBounds(local_5b8,&local_8f8,0);
LAB_1424c6d0a:
              puVar24 = local_558;
              if (1.0 < *(float *)(lVar42 + 0x3cc) || *(float *)(lVar42 + 0x3cc) == 1.0) {
                bVar20 = true;
                cVar45 = '\0';
                iVar37 = local_548;
              }
              else {
                if (local_548 != 5) goto LAB_1424c6bd1;
                puVar22 = local_5b8;
                if (local_558 != (uint *)0x0) {
                  puVar22 = local_558;
                }
                local_8f8 = 0x3f800000;
                uStack_8f0 = 0;
                local_8e8 = 0x3f80000000000000;
                uStack_8e0 = 0;
                local_548 = 4;
                puVar1 = puVar22 + 8;
                local_8d8 = 0;
                uStack_8d0 = 0x3f800000;
                puVar2 = puVar22 + 4;
                local_8c8 = 0.0;
                fStack_8c4 = 0.0;
                fStack_8c0 = 0.0;
                fStack_8bc = 1.0;
                if (puVar22 != (uint *)0x0) {
                  local_8f8 = (ulonglong)*puVar22;
                  uStack_8f0 = (ulonglong)puVar22[2];
                  local_8f8 = *(undefined8 *)puVar22;
                }
                if (puVar2 != (uint *)0x0) {
                  local_8e8 = CONCAT44(0x3f800000,*puVar2);
                  uStack_8e0 = (ulonglong)puVar22[6];
                  local_8e8 = *(undefined8 *)puVar2;
                }
                if (puVar1 != (uint *)0x0) {
                  local_8d8 = (ulonglong)*puVar1;
                  uStack_8d0 = (ulonglong)puVar22[10];
                  local_8d8 = *(undefined8 *)puVar1;
                }
                fVar51 = (float)puVar22[3];
                fVar48 = (float)puVar22[7];
                fVar49 = (float)puVar22[0xb];
                pfVar23 = (float *)FMatrix::Inverse(&local_8f8,local_788);
                iVar38 = 0;
                afStack_17c[1] = *pfVar23;
                _local_968 = ZEXT416((uint)afStack_17c[1]);
                local_868 = fVar51;
                fStack_864 = fVar48;
                fStack_860 = fVar49;
                uStack_85c = 0;
                local_148 = CONCAT44(pfVar23[7],pfVar23[3]);
                afStack_140[1] = pfVar23[0xf];
                afStack_140[0] = pfVar23[0xb];
                local_158 = pfVar23[2];
                fStack_154 = pfVar23[6];
                fStack_150 = pfVar23[10];
                fStack_14c = pfVar23[0xe];
                afStack_17c[5] = pfVar23[1];
                fStack_164 = pfVar23[5];
                fStack_160 = pfVar23[9];
                fStack_15c = pfVar23[0xd];
                afStack_17c[2] = pfVar23[4];
                afStack_17c[3] = pfVar23[8];
                afStack_17c[4] = pfVar23[0xc];
                fVar47 = pfVar23[3] * 0.0 + fVar49 * pfVar23[2] +
                         fVar48 * pfVar23[1] + fVar51 * afStack_17c[1];
                fVar60 = pfVar23[7] * 0.0 + fVar49 * pfVar23[6] +
                         fVar48 * pfVar23[5] + fVar51 * pfVar23[4];
                fStack_970 = pfVar23[0xb] * 0.0 + fVar49 * pfVar23[10] +
                             fVar48 * pfVar23[9] + fVar51 * pfVar23[8];
                local_978 = CONCAT44(fVar60,fVar47);
                fStack_96c = pfVar23[0xf] * 0.0 + fVar49 * pfVar23[0xe] +
                             fVar48 * pfVar23[0xd] + fVar51 * pfVar23[0xc];
                lVar27 = 0;
                do {
                  puVar22 = local_5b8;
                  if (puVar24 != (uint *)0x0) {
                    puVar22 = puVar24;
                  }
                  local_7f8 = *(undefined8 *)((longlong)puVar22 + lVar27);
                  local_7f0 = *(float *)((longlong)puVar22 + lVar27 + 8);
                  fVar51 = (float)((ulonglong)local_7f8 >> 0x20);
                  uVar3 = local_7f8;
                  fVar48 = fVar51 * fVar51 + (float)local_7f8 * (float)local_7f8 +
                           local_7f0 * local_7f0;
                  fStack_7e4 = fVar51;
                  local_8a8 = local_7f0;
                  local_7e8 = (float)local_7f8;
                  if ((fVar48 != 1.0) &&
                     (fStack_7e4 = DAT_1468b5d94, local_8a8 = DAT_1468b5d98,
                     local_7e8 = DAT_1468b5d90, 1e-08 <= fVar48)) {
                    auVar54 = rsqrtss(ZEXT416((uint)fVar48),ZEXT416((uint)fVar48));
                    fVar49 = auVar54._0_4_;
                    fVar49 = fVar49 + fVar49 * (0.5 - fVar48 * 0.5 * fVar49 * fVar49);
                    fVar49 = fVar49 + fVar49 * (0.5 - fVar48 * 0.5 * fVar49 * fVar49);
                    local_948 = CONCAT44(local_948._4_4_,fVar49);
                    local_7e8 = (float)local_7f8 * fVar49;
                    fStack_7e4 = fVar51 * fVar49;
                    local_8a8 = local_7f0 * fVar49;
                  }
                  iVar38 = iVar38 + 1;
                  fStack_7dc = fStack_7e4 * fVar60 + local_7e8 * fVar47 + local_8a8 * fStack_970;
                  pfVar23 = (float *)((longlong)puVar22 + lVar27);
                  *pfVar23 = local_7e8;
                  pfVar23[1] = fStack_7e4;
                  pfVar23[2] = local_8a8;
                  pfVar23[3] = fStack_7dc;
                  lVar27 = lVar27 + 0x10;
                  fStack_7e0 = local_8a8;
                  puVar24 = local_558;
                  iVar37 = local_548;
                  local_7f8 = uVar3;
                } while (iVar38 < local_548);
              }
            }
            else {
              uVar34 = 0;
              uVar39 = uVar34;
              iVar37 = 0;
              if (0 < *(int *)(lVar27 + 0x70)) {
                do {
                  lVar43 = *(longlong *)(lVar27 + 0x60);
                  if (*(longlong *)(lVar27 + 0x60) == 0) {
                    lVar43 = lVar27;
                  }
                  afStack_17c[4] = 0.0;
                  uVar3 = *(undefined8 *)(lVar43 + uVar34);
                  local_898 = (float)uVar3;
                  local_800 = *(float *)(lVar43 + 8 + uVar34);
                  local_808._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
                  fVar51 = 1.0 / SQRT(local_898 * local_898 + local_808._4_4_ * local_808._4_4_ +
                                      local_800 * local_800);
                  local_898 = local_898 * fVar51;
                  local_894 = fVar51 * local_808._4_4_;
                  local_890 = fVar51 * local_800;
                  local_88c = fVar51 * *(float *)(lVar43 + 0xc + uVar34) -
                              (local_894 * *(float *)(lVar42 + 0x84) +
                               local_898 * *(float *)(lVar42 + 0x80) +
                              local_890 * *(float *)(lVar42 + 0x88));
                  afStack_17c[1] = fStack_124 * fStack_110 - fStack_114 * fStack_120;
                  afStack_17c[2] = local_118 * fStack_120 - local_128 * fStack_110;
                  afStack_17c[3] = local_128 * fStack_114 - local_118 * fStack_124;
                  afStack_17c[5] = afStack_140[4] * fStack_114 - afStack_140[3] * fStack_110;
                  fStack_164 = afStack_140[2] * fStack_110 - afStack_140[4] * local_118;
                  fStack_15c = 0.0;
                  fStack_14c = 0.0;
                  fStack_160 = afStack_140[3] * local_118 - afStack_140[2] * fStack_114;
                  local_158 = afStack_140[3] * fStack_120 - afStack_140[4] * fStack_124;
                  fStack_154 = afStack_140[4] * local_128 - afStack_140[2] * fStack_120;
                  fStack_150 = afStack_140[2] * fStack_124 - afStack_140[3] * local_128;
                  local_148 = 0;
                  afStack_140[0] = 0.0;
                  afStack_140[1] = 1.0;
                  local_808 = uVar3;
                  uVar46 = FMatrix::Determinant(afStack_140 + 2);
                  local_9a8 = afStack_17c + 1;
                  FPlane::TransformByUsingAdjointT(&local_898,&local_888,afStack_140 + 2,uVar46);
                  iVar37 = local_548;
                  lVar27 = (longlong)local_548;
                  local_548 = local_548 + 1;
                  local_870 = 1.0 / SQRT(local_888 * local_888 + local_884 * local_884 +
                                         local_880 * local_880);
                  local_878 = local_888 * local_870;
                  fVar51 = local_870 * local_87c;
                  fStack_874 = local_870 * local_884;
                  local_870 = local_870 * local_880;
                  if (local_544 < local_548) {
                    TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow
                              (local_5b8,iVar37);
                  }
                  puVar24 = local_5b8;
                  if (local_558 != (uint *)0x0) {
                    puVar24 = local_558;
                  }
                  uVar35 = (int)uVar39 + 1;
                  uVar34 = uVar34 + 0x10;
                  puVar24 = puVar24 + lVar27 * 4;
                  *(ulonglong *)puVar24 = CONCAT44(fStack_874,local_878);
                  puVar24[2] = (uint)local_870;
                  puVar24[3] = (uint)fVar51;
                  lVar27 = *(longlong *)(lVar42 + 0x78);
                  uVar39 = (ulonglong)uVar35;
                  iVar37 = local_548;
                } while ((int)uVar35 < *(int *)(lVar27 + 0x70));
              }
              bVar20 = false;
              cVar45 = iVar37 == 4;
            }
            if (iVar37 != 0) {
              FConvexVolume::Init(local_5b8);
            }
            bVar21 = local_997;
            bVar40 = iVar37 == 0 || iVar36 != 0;
            local_71e = local_997;
            pfVar23 = (float *)FUN_14274fc40(lVar42,local_7c0,0,local_997);
            local_978 = 0;
            fVar51 = *pfVar23;
            fVar48 = pfVar23[1];
            fVar49 = pfVar23[2];
            local_858 = *pfVar23;
            fStack_854 = pfVar23[1];
            fStack_850 = pfVar23[2];
            fStack_970 = 0.0;
            uStack_84c = 0x3f800000;
            local_7d0 = fStack_100 * 1.0 + fVar49 * fStack_110 +
                        fVar48 * fStack_120 + fVar51 * afStack_140[4];
            local_468 = CONCAT44(fStack_104 * 1.0 + fVar49 * fStack_114 +
                                 fVar48 * fStack_124 + fVar51 * afStack_140[3],
                                 local_108 * 1.0 + fVar49 * local_118 +
                                 fVar48 * local_128 + fVar51 * afStack_140[2]);
            local_460 = local_7d0;
            pfVar23 = (float *)FUN_14274fc40(lVar42,local_7b4,1,bVar21);
            local_978 = 0;
            fVar51 = *pfVar23;
            fVar48 = pfVar23[1];
            fVar49 = pfVar23[2];
            local_848 = *pfVar23;
            fStack_844 = pfVar23[1];
            fStack_840 = pfVar23[2];
            fStack_970 = 0.0;
            uStack_83c = 0x3f800000;
            local_7c4 = fStack_100 * 1.0 + fVar49 * fStack_110 +
                        fVar48 * fStack_120 + fVar51 * afStack_140[4];
            local_45c = CONCAT44(fStack_104 * 1.0 + fVar49 * fStack_114 +
                                 fVar48 * fStack_124 + fVar51 * afStack_140[3],
                                 local_108 * 1.0 + fVar49 * local_118 +
                                 fVar48 * local_128 + fVar51 * afStack_140[2]);
            if (bVar20) {
              fVar51 = 0.0;
            }
            else {
              fVar51 = *(float *)(DAT_146af9dd8 + 4);
            }
            fVar48 = *(float *)(DAT_146af9df0 + 4);
            fVar49 = *(float *)(DAT_146af9e08 + 4);
            local_454 = local_7c4;
            lVar27 = FUN_1428742e0();
            fVar47 = *(float *)(lVar27 + 0x1c);
            fVar59 = 3.4028235e+38;
            fVar60 = *(float *)(*(longlong *)(param_1 + 0x3a0) + 0x58);
            if (0.0 < fVar51) {
              lVar27 = **(longlong **)(param_1 + 0x490);
              fVar51 = *(float *)(lVar27 + 0x2c);
              if (*(float *)(lVar27 + 0x28) <= *(float *)(lVar27 + 0x2c)) {
                fVar51 = *(float *)(lVar27 + 0x28);
              }
              if (*(float *)(lVar27 + 0x30) <= fVar51) {
                fVar51 = *(float *)(lVar27 + 0x30);
              }
              if (fVar51 <= 0.001) {
                fVar51 = 0.001;
              }
              fVar59 = (float)ComputeBoundsDrawDistance(lVar27,fVar51 * fVar60,lVar42 + 0x390);
              fVar59 = fVar59 * fVar48;
            }
            fVar51 = fVar59;
            if ((0.0 < (float)*(int *)(param_1 + 0x434)) &&
               (fVar51 = fVar47 * (float)*(int *)(param_1 + 0x434), fVar59 <= fVar51)) {
              fVar51 = fVar59;
            }
            iVar36 = 1;
            local_714 = fVar51;
            if (1 < local_450) {
              pfVar23 = local_42c;
              do {
                fVar47 = (float)ComputeBoundsDrawDistance(&local_450,fVar60,lVar42 + 0x390);
                fVar47 = fVar47 * fVar48;
                iVar36 = iVar36 + 1;
                *pfVar23 = fVar47 - fVar49;
                pfVar23[-8] = fVar47;
                pfVar23 = pfVar23 + 1;
              } while (iVar36 < local_450);
            }
            iVar36 = 0;
            local_42c[local_450 + -1] = fVar51 - fVar49;
            local_44c[local_450 + -1] = fVar51;
            if (0 < local_450) {
              plVar30 = *(longlong **)(param_1 + 0x3a0);
              piVar31 = local_498;
              lVar27 = 0;
              do {
                *piVar31 = 2;
                iVar37 = *(int *)(*(longlong *)(lVar27 + *plVar30) + 0xdc);
                if (iVar37 != 0) {
                  *piVar31 = local_918 / iVar37;
                }
                iVar36 = iVar36 + 1;
                lVar27 = lVar27 + 8;
                piVar31 = piVar31 + 1;
                param_1 = local_908;
              } while (iVar36 < local_450);
            }
            if (((-1 < *(int *)(param_1 + 0x4b0)) && (-1 < *(int *)(param_1 + 0x4b4))) &&
               (*(int *)(param_1 + 0x4b0) <= *(int *)(param_1 + 0x4b4))) {
              uVar46 = FColorVertexBuffer::GetAllocatedSize(lVar42);
              FUN_1424c4150((longlong *)(param_1 + 0x4c8),&local_914,uVar46);
              lVar27 = 0;
              if (local_914 != -1) {
                lVar27 = (longlong)local_914 * 0x30 + *(longlong *)(param_1 + 0x4c8);
              }
              lVar43 = lVar27 + 8;
              if (lVar27 == 0) {
                lVar43 = 0;
              }
              if ((lVar43 != 0) && (*(int *)(lVar43 + 0x18) == DAT_1464aaa90)) {
                iVar36 = *(int *)(param_1 + 0x4b4) - *(int *)(param_1 + 0x4b0);
                if ((((iVar36 + 1 == *(int *)(lVar43 + 0x14)) &&
                     ((iVar37 = *(int *)(lVar43 + 0x10), -1 < iVar37 &&
                      (iVar37 < *(int *)(lVar43 + 8))))) && (iVar36 = iVar36 + iVar37, -1 < iVar36))
                   && (iVar36 < *(int *)(lVar43 + 8))) {
                  local_3f8 = *(undefined4 *)(lVar43 + 0x10);
                  local_40c = *(undefined8 *)(param_1 + 0x4b0);
                  local_400 = lVar43;
                }
              }
            }
            iVar38 = local_450 + -1;
            iVar36 = *(int *)(param_1 + 0x3cc);
            iVar37 = iVar38;
            if (*(int *)(DAT_146afbd80 + 4) <= iVar38) {
              iVar37 = *(int *)(DAT_146afbd80 + 4);
            }
            iVar41 = iVar36;
            if ((-1 < iVar37) && (iVar41 = iVar37, iVar37 <= iVar36)) {
              iVar41 = iVar36;
            }
            iVar36 = *(int *)(DAT_146af9d30 + 4);
            iVar37 = local_450;
            if ((-1 < iVar36) && (iVar37 = iVar38, iVar41 = iVar38, iVar36 < iVar38)) {
              iVar37 = iVar36;
              iVar41 = iVar36;
            }
            if (*(int *)(DAT_146af9d78 + 4) < 1) {
              local_9a8 = (float *)CONCAT44(local_9a8._4_4_,iVar37);
              local_9a0 = bVar40;
              if (cVar45 == '\0') {
                FUN_1424b2bc0(param_1,local_708,0,iVar41);
              }
              else {
                FHierarchicalStaticMeshSceneProxy::Traverse<1>();
              }
            }
            FUN_1424c3a10(param_1,local_8b8,&local_748,local_708);
            if (local_4b8 != 0) {
              FMemory::Free();
            }
            param_2 = local_940;
            if (local_558 != (uint *)0x0) {
              FMemory::Free();
              param_2 = local_940;
            }
          }
          bVar21 = local_997;
          iVar38 = 0;
          fVar51 = 0.0;
          iVar36 = *(int *)(param_1 + 0x4ac);
          iVar37 = *(int *)(param_1 + 0x4a8);
          iVar41 = iVar36 - iVar37;
          local_928 = iVar41;
          uVar32 = local_998;
          if (0 < iVar41) {
            local_3e8 = 1;
            local_3e6 = 0;
            local_3e0 = 0;
            local_3d8[0] = 0;
            local_3d8[1] = 0;
            local_3d8[2] = 0;
            local_3d8[3] = 0;
            local_3d8[4] = 0;
            local_3d8[5] = 0;
            local_3d8[6] = 0;
            local_3d8[7] = 0;
            local_3d8[8] = 0;
            local_3d8[9] = 0;
            local_3d8[10] = 0;
            local_3d8[0xb] = 0;
            local_3d8[0xc] = 0;
            local_3d8[0xd] = 0;
            local_3d8[0xe] = 0;
            local_3d8[0xf] = 0;
            local_3d8[0x10] = 0;
            local_3d8[0x11] = 0;
            local_3d8[0x12] = 0;
            local_3d8[0x13] = 0;
            local_388 = (undefined2 *)0x0;
            local_380 = 0;
            local_378 = 0;
            local_370 = 0;
            local_368 = 0;
            local_360 = 0;
            local_358[0] = 0;
            local_358[1] = 0;
            local_358[2] = 0;
            local_358[3] = 0;
            local_358[4] = 0;
            local_358[5] = 0;
            local_358[6] = 0;
            local_358[7] = 0;
            local_358[8] = 0;
            local_358[9] = 0;
            local_358[10] = 0;
            local_358[0xb] = 0;
            local_358[0xc] = 0;
            local_358[0xd] = 0;
            local_358[0xe] = 0;
            local_358[0xf] = 0;
            local_358[0x10] = 0;
            local_358[0x11] = 0;
            local_358[0x12] = 0;
            local_358[0x13] = 0;
            local_358[0x14] = 0;
            local_358[0x15] = 0;
            local_358[0x16] = 0;
            local_358[0x17] = 0;
            local_358[0x18] = 0;
            local_358[0x19] = 0;
            local_358[0x1a] = 0;
            local_358[0x1b] = 0;
            local_2e8 = 0;
            local_2e0[0] = 0;
            local_2e0[1] = 0;
            local_2e0[8] = 0;
            local_2e0[9] = 0;
            local_2e0[2] = 0;
            local_2e0[3] = 0;
            local_2e0[10] = 0;
            local_2e0[0xb] = 0;
            local_2e0[4] = 0;
            local_2e0[5] = 0;
            local_2e0[0xc] = 0;
            local_2e0[0xd] = 0;
            local_2e0[6] = 0;
            local_2e0[7] = 0;
            local_2e0[0xe] = 0;
            local_2e0[0xf] = 0;
            local_71e = 0;
            if ((iVar41 < 1000) && (iVar41 <= *(int *)(param_1 + 0x4a0))) {
              local_958 = *(uint *)(*(longlong *)(param_1 + 0x3a0) + 8);
              iVar44 = *(int *)(DAT_146af9d30 + 4);
              if (iVar44 < 0) {
                FMatrix::Inverse(param_1 + 0x80,&local_8f8);
                pfVar23 = (float *)FUN_14274fc40(lVar42,local_7a8,0,bVar21);
                fVar48 = *pfVar23;
                fVar49 = pfVar23[1];
                fVar47 = pfVar23[2];
                local_838 = *pfVar23;
                fStack_834 = pfVar23[1];
                fStack_830 = pfVar23[2];
                uStack_82c = 0x3f800000;
                local_968._4_4_ =
                     fStack_8c4 * 1.0 + fVar47 * local_8d8._4_4_ +
                     fVar49 * local_8e8._4_4_ + fVar48 * local_8f8._4_4_;
                local_968._0_4_ =
                     local_8c8 * 1.0 + fVar47 * (float)local_8d8 +
                     fVar49 * (float)local_8e8 + fVar48 * (float)local_8f8;
                fStack_960 = fStack_8c0 * 1.0 + fVar47 * (float)uStack_8d0 +
                             fVar49 * (float)uStack_8e0 + fVar48 * (float)uStack_8f0;
                fStack_95c = fStack_8bc * 1.0 + fVar47 * uStack_8d0._4_4_ +
                             fVar49 * uStack_8e0._4_4_ + fVar48 * uStack_8f0._4_4_;
                pfVar23 = (float *)FUN_14274fc40(lVar42,local_79c,1,bVar21);
                fVar48 = *pfVar23;
                fVar49 = pfVar23[1];
                fVar47 = pfVar23[2];
                local_828 = *pfVar23;
                fStack_824 = pfVar23[1];
                fStack_820 = pfVar23[2];
                uStack_81c = 0x3f800000;
                fStack_970 = fStack_8c0 * 1.0 + fVar47 * (float)uStack_8d0 +
                             fVar49 * (float)uStack_8e0 + fVar48 * (float)uStack_8f0;
                fStack_96c = fStack_8bc * 1.0 + fVar47 * uStack_8d0._4_4_ +
                             fVar49 * uStack_8e0._4_4_ + fVar48 * uStack_8f0._4_4_;
                local_978 = CONCAT44(fStack_8c4 * 1.0 + fVar47 * local_8d8._4_4_ +
                                     fVar49 * local_8e8._4_4_ + fVar48 * local_8f8._4_4_,
                                     local_8c8 * 1.0 + fVar47 * (float)local_8d8 +
                                     fVar49 * (float)local_8e8 + fVar48 * (float)local_8f8);
                if (*(float *)(lVar42 + 0x3cc) <= 1.0 && *(float *)(lVar42 + 0x3cc) != 1.0) {
                  fVar51 = *(float *)(DAT_146af9dd8 + 4);
                }
                fVar48 = *(float *)(DAT_146af9df0 + 4);
                fVar49 = *(float *)(DAT_146af9e08 + 4);
                lVar27 = FUN_1428742e0();
                fVar47 = *(float *)(lVar27 + 0x1c);
                fVar60 = 3.4028235e+38;
                if (0.0 < fVar51) {
                  fVar60 = (float)ComputeBoundsDrawDistance();
                  fVar60 = fVar60 * fVar48;
                }
                fVar51 = fVar60;
                if ((0.0 < (float)*(int *)(param_1 + 0x434)) &&
                   (fVar51 = fVar47 * (float)*(int *)(param_1 + 0x434), fVar60 <= fVar51)) {
                  fVar51 = fVar60;
                }
                uVar39 = (ulonglong)(int)local_958;
                lVar27 = 1;
                local_714 = fVar51;
                local_818 = uVar39;
                uVar34 = uVar39;
                if (1 < (longlong)uVar39) {
                  do {
                    fVar47 = (float)ComputeBoundsDrawDistance();
                    fVar47 = fVar47 * fVar48;
                    afStack_17c[lVar27] = fVar47;
                    afStack_140[lVar27 + 1] = fVar47 - fVar49;
                    lVar27 = lVar27 + 1;
                  } while (lVar27 < (longlong)uVar39);
                  uVar34 = (ulonglong)local_958;
                }
                pfVar23 = *(float **)(param_1 + 0x498);
                fVar48 = fStack_960;
                uVar46 = local_968._4_4_;
                lVar27 = 0;
                afStack_17c[uVar39] = fVar51;
                afStack_140[uVar39 + 1] = fVar51 - fVar49;
                if ((int)uVar34 != 0) {
                  fVar63 = pfVar23[1] - pfVar23[4];
                  fVar60 = (pfVar23[3] + *pfVar23) * 0.5;
                  fVar61 = *pfVar23 - pfVar23[3];
                  fVar50 = (pfVar23[4] + pfVar23[1]) * 0.5;
                  fVar62 = pfVar23[2] - pfVar23[5];
                  fVar49 = (pfVar23[5] + pfVar23[2]) * 0.5;
                  fVar47 = (float)local_968._0_4_ - fVar60;
                  fVar59 = (float)local_968._4_4_ - fVar50;
                  fVar51 = fStack_960 - fVar49;
                  fVar60 = (float)local_978 - fVar60;
                  fVar49 = fStack_970 - fVar49;
                  fVar59 = SQRT(fVar59 * fVar59 + fVar47 * fVar47 + fVar51 * fVar51);
                  fVar50 = local_978._4_4_ - fVar50;
                  fVar49 = SQRT(fVar50 * fVar50 + fVar60 * fVar60 + fVar49 * fVar49);
                  fVar47 = SQRT(fVar63 * fVar63 + fVar61 * fVar61 + fVar62 * fVar62) * 0.5;
                  fVar51 = fVar49;
                  if (fVar49 <= fVar59) {
                    fVar51 = fVar59;
                  }
                  if (fVar59 <= fVar49) {
                    fVar49 = fVar59;
                  }
                  fVar51 = fVar51 + fVar47;
                  fVar49 = fVar49 - fVar47;
                  if (0 < (longlong)uVar39) {
                    do {
                      if (fVar49 < afStack_17c[lVar27 + 1] || fVar49 == afStack_17c[lVar27 + 1])
                      break;
                      iVar38 = iVar38 + 1;
                      lVar27 = lVar27 + 1;
                    } while (lVar27 < (longlong)uVar39);
                  }
                  lVar27 = (longlong)iVar38;
                  if (lVar27 < (longlong)uVar39) {
                    uVar25 = uVar39;
                    if (3 < (longlong)(uVar39 - lVar27)) {
                      pfVar23 = afStack_140 + uVar39;
                      do {
                        if ((((pfVar23[1] <= fVar51) || (*pfVar23 <= fVar51)) ||
                            (pfVar23[-1] <= fVar51)) || (pfVar23[-2] <= fVar51)) goto LAB_1424c7da0;
                        uVar25 = uVar25 - 4;
                        pfVar23 = pfVar23 + -4;
                      } while (lVar27 + 3 < (longlong)uVar25);
                    }
                    if (lVar27 < (longlong)uVar25) {
                      pfVar23 = afStack_140 + uVar25 + 1;
                      do {
                        if (*pfVar23 <= fVar51) break;
                        uVar25 = uVar25 - 1;
                        pfVar23 = pfVar23 + -1;
                      } while (lVar27 < (longlong)uVar25);
                    }
                  }
                }
LAB_1424c7da0:
                local_954 = 1;
                iVar36 = 0;
                if (1 < (longlong)iVar41) {
                  local_988 = (longlong)iVar41 + -1;
                  local_920 = 0x1c;
                  lVar27 = (longlong)iVar38;
LAB_1424c7dd0:
                  lVar42 = *(longlong *)(param_1 + 0x498);
                  local_92c = 0;
                  local_950 = 0;
                  if (uVar39 != 0) {
                    fVar51 = *(float *)(lVar42 + 4 + local_920);
                    fVar49 = *(float *)(lVar42 + 8 + local_920);
                    fVar63 = fVar51 - *(float *)(lVar42 + 0x10 + local_920);
                    fVar61 = *(float *)(lVar42 + local_920) - *(float *)(lVar42 + 0xc + local_920);
                    fVar62 = fVar49 - *(float *)(lVar42 + 0x14 + local_920);
                    fVar60 = (*(float *)(lVar42 + local_920) + *(float *)(lVar42 + 0xc + local_920))
                             * 0.5;
                    fVar50 = (fVar51 + *(float *)(lVar42 + 0x10 + local_920)) * 0.5;
                    fVar47 = (float)local_968._0_4_ - fVar60;
                    fVar49 = (fVar49 + *(float *)(lVar42 + 0x14 + local_920)) * 0.5;
                    fVar59 = (float)uVar46 - fVar50;
                    fVar51 = fVar48 - fVar49;
                    fVar60 = (float)local_978 - fVar60;
                    fVar49 = fStack_970 - fVar49;
                    fVar59 = SQRT(fVar59 * fVar59 + fVar47 * fVar47 + fVar51 * fVar51);
                    fVar50 = local_978._4_4_ - fVar50;
                    fVar49 = SQRT(fVar50 * fVar50 + fVar60 * fVar60 + fVar49 * fVar49);
                    fVar47 = SQRT(fVar63 * fVar63 + fVar61 * fVar61 + fVar62 * fVar62) * 0.5;
                    fVar51 = fVar49;
                    if (fVar49 <= fVar59) {
                      fVar51 = fVar59;
                    }
                    if (fVar59 <= fVar49) {
                      fVar49 = fVar59;
                    }
                    fVar51 = fVar51 + fVar47;
                    fVar49 = fVar49 - fVar47;
                    if (0 < (longlong)uVar39) {
                      do {
                        if (fVar49 < afStack_17c[local_950 + 1] ||
                            fVar49 == afStack_17c[local_950 + 1]) {
                          if (local_950 < (longlong)uVar39) {
                            uVar25 = uVar39;
                            if ((longlong)(uVar39 - local_950) < 4) goto LAB_1424c7f58;
                            pfVar23 = afStack_140 + uVar39;
                            goto LAB_1424c7f30;
                          }
                          break;
                        }
                        local_950 = local_950 + 1;
                        local_92c = local_92c + 1;
                      } while (local_950 < (longlong)uVar39);
                    }
                  }
                  goto LAB_1424c7f76;
                }
LAB_1424c8169:
                iVar36 = *(int *)(param_1 + 0x4a8) + iVar36;
                iVar37 = local_928 + iVar36;
                if (((char)local_3e8 != '\0') && (iVar38 < 8)) {
                  lVar27 = (longlong)iVar38;
                  plVar30 = &local_360 + lVar27 * 2;
                  iVar41 = local_358[lVar27 * 4];
                  lVar42 = (longlong)iVar41;
                  if ((iVar41 == 0) || (*(int *)(*plVar30 + -4 + lVar42 * 4) + 1 != iVar36)) {
                    iVar44 = local_358[lVar27 * 4 + 1];
                    iVar33 = iVar41 + 1;
                    local_358[lVar27 * 4] = iVar33;
                    if (iVar44 < iVar33) {
                      TArray<int,TMemStackAllocator<0>_>::ResizeGrow(plVar30,iVar41);
                      iVar44 = local_358[lVar27 * 4 + 1];
                      iVar33 = local_358[lVar27 * 4];
                    }
                    lVar43 = *plVar30;
                    local_358[lVar27 * 4] = iVar33 + 1;
                    *(int *)(lVar43 + lVar42 * 4) = iVar36;
                    if (iVar44 < iVar33 + 1) {
                      TArray<int,TMemStackAllocator<0>_>::ResizeGrow(plVar30,iVar33);
                      lVar43 = *plVar30;
                    }
                    *(int *)(lVar43 + (longlong)iVar33 * 4) = iVar37;
                  }
                  else {
                    *(int *)(*plVar30 + -4 + lVar42 * 4) = iVar37;
                  }
                  local_2e0[iVar38] = local_2e0[iVar38] + (iVar37 - iVar36) + 1;
                }
                iVar41 = local_928;
                if (local_3e8._1_1_ != '\0') {
                  lVar27 = (longlong)iVar38;
                  local_988 = lVar27;
                  piVar31 = local_3d8 + lVar27 * 4;
                  lVar42 = lVar27;
                  do {
                    if (lVar42 < 8) {
                      local_2e0[lVar42 + 8] = local_2e0[lVar42 + 8] + (iVar37 - iVar36) + 1;
                      iVar38 = *piVar31;
                      lVar27 = (longlong)iVar38;
                      if ((iVar38 == 0) ||
                         (*(int *)(*(longlong *)(piVar31 + -2) + -4 + lVar27 * 4) + 1 != iVar36)) {
                        iVar37 = piVar31[1];
                        iVar44 = iVar38 + 1;
                        *piVar31 = iVar44;
                        if (iVar37 < iVar44) {
                          TArray<int,TMemStackAllocator<0>_>::ResizeGrow(piVar31 + -2,iVar38);
                          iVar37 = piVar31[1];
                          iVar44 = *piVar31;
                        }
                        lVar43 = *(longlong *)(piVar31 + -2);
                        *piVar31 = iVar44 + 1;
                        *(int *)(lVar43 + lVar27 * 4) = iVar36;
                        if (iVar37 < iVar44 + 1) {
                          TArray<int,TMemStackAllocator<0>_>::ResizeGrow(piVar31 + -2,iVar44);
                          lVar43 = *(longlong *)(piVar31 + -2);
                        }
                        iVar37 = iVar41 + iVar36;
                        *(int *)(lVar43 + (longlong)iVar44 * 4) = iVar37;
                        lVar27 = local_988;
                      }
                      else {
                        *(int *)(*(longlong *)(piVar31 + -2) + -4 + lVar27 * 4) = iVar37;
                        lVar27 = local_988;
                      }
                    }
                    lVar42 = lVar42 + 1;
                    piVar31 = piVar31 + 4;
                    param_1 = local_908;
                  } while (lVar42 <= lVar27);
                }
              }
              else {
                iVar38 = local_958 - 1;
                if (iVar44 < iVar38) {
                  iVar38 = iVar44;
                }
                if (iVar38 < 8) {
                  lVar27 = (longlong)iVar38;
                  plVar30 = &local_360 + lVar27 * 2;
                  local_950 = lVar27 * 0x10;
                  iVar38 = local_358[lVar27 * 4];
                  lVar42 = (longlong)iVar38;
                  if ((iVar38 == 0) || (*(int *)(*plVar30 + -4 + lVar42 * 4) + 1 != iVar37)) {
                    iVar41 = local_358[lVar27 * 4 + 1];
                    iVar44 = iVar38 + 1;
                    local_358[lVar27 * 4] = iVar44;
                    if (iVar41 < iVar44) {
                      TArray<int,TMemStackAllocator<0>_>::ResizeGrow(plVar30,iVar38);
                      iVar41 = local_358[lVar27 * 4 + 1];
                      iVar44 = local_358[lVar27 * 4];
                    }
                    lVar43 = *plVar30;
                    local_358[lVar27 * 4] = iVar44 + 1;
                    *(int *)(lVar43 + lVar42 * 4) = iVar37;
                    if (iVar41 < iVar44 + 1) {
                      TArray<int,TMemStackAllocator<0>_>::ResizeGrow(plVar30,iVar44);
                      lVar43 = *plVar30;
                    }
                    *(int *)(lVar43 + (longlong)iVar44 * 4) = iVar36;
                  }
                  else {
                    *(int *)(*plVar30 + -4 + lVar42 * 4) = iVar36;
                  }
                  lVar42 = local_950;
                  local_2e0[lVar27] = local_2e0[lVar27] + (iVar36 - iVar37) + 1;
                  if (local_3e8._1_1_ != '\0') {
                    local_950 = lVar27;
                    piVar31 = (int *)((longlong)local_3d8 + lVar42);
                    lVar42 = lVar27;
                    do {
                      if (lVar42 < 8) {
                        local_2e0[lVar42 + 8] = local_2e0[lVar42 + 8] + (iVar36 - iVar37) + 1;
                        iVar38 = *piVar31;
                        lVar43 = (longlong)iVar38;
                        if ((iVar38 == 0) ||
                           (*(int *)(*(longlong *)(piVar31 + -2) + -4 + lVar43 * 4) + 1 != iVar37))
                        {
                          iVar41 = piVar31[1];
                          iVar44 = iVar38 + 1;
                          *piVar31 = iVar44;
                          if (iVar41 < iVar44) {
                            TArray<int,TMemStackAllocator<0>_>::ResizeGrow(piVar31 + -2,iVar38);
                            iVar41 = piVar31[1];
                            iVar44 = *piVar31;
                          }
                          lVar27 = *(longlong *)(piVar31 + -2);
                          *piVar31 = iVar44 + 1;
                          *(int *)(lVar27 + lVar43 * 4) = iVar37;
                          if (iVar41 < iVar44 + 1) {
                            TArray<int,TMemStackAllocator<0>_>::ResizeGrow(piVar31 + -2,iVar44);
                            lVar27 = *(longlong *)(piVar31 + -2);
                          }
                          *(int *)(lVar27 + (longlong)iVar44 * 4) = iVar36;
                          lVar27 = local_950;
                        }
                        else {
                          *(int *)(*(longlong *)(piVar31 + -2) + -4 + lVar43 * 4) = iVar36;
                        }
                      }
                      lVar42 = lVar42 + 1;
                      piVar31 = piVar31 + 4;
                    } while (lVar42 <= lVar27);
                  }
                }
              }
            }
            else {
              cVar45 = *(char *)(*(longlong *)(param_1 + 0x3a0) + 8) + -1;
              if (cVar45 < '\b') {
                lVar27 = (longlong)cVar45;
                plVar30 = &local_360 + lVar27 * 2;
                iVar38 = local_358[lVar27 * 4];
                lVar42 = (longlong)iVar38;
                if ((iVar38 == 0) || (*(int *)(*plVar30 + -4 + lVar42 * 4) + 1 != iVar37)) {
                  iVar41 = local_358[lVar27 * 4 + 1];
                  iVar44 = iVar38 + 1;
                  local_358[lVar27 * 4] = iVar44;
                  if (iVar41 < iVar44) {
                    TArray<int,TMemStackAllocator<0>_>::ResizeGrow(plVar30,iVar38);
                    iVar41 = local_358[lVar27 * 4 + 1];
                    iVar44 = local_358[lVar27 * 4];
                  }
                  lVar43 = *plVar30;
                  local_358[lVar27 * 4] = iVar44 + 1;
                  *(int *)(lVar43 + lVar42 * 4) = iVar37;
                  if (iVar41 < iVar44 + 1) {
                    TArray<int,TMemStackAllocator<0>_>::ResizeGrow(plVar30,iVar44);
                    lVar43 = *plVar30;
                  }
                  *(int *)(lVar43 + (longlong)iVar44 * 4) = iVar36;
                }
                else {
                  *(int *)(*plVar30 + -4 + lVar42 * 4) = iVar36;
                }
                local_2e0[cVar45] = local_2e0[cVar45] + (iVar36 - iVar37) + 1;
                if (local_3e8._1_1_ != '\0') {
                  lVar27 = (longlong)cVar45;
                  local_988 = lVar27;
                  piVar31 = local_3d8 + lVar27 * 4;
                  lVar42 = lVar27;
                  do {
                    if (lVar42 < 8) {
                      local_2e0[lVar42 + 8] = local_2e0[lVar42 + 8] + (iVar36 - iVar37) + 1;
                      iVar38 = *piVar31;
                      lVar27 = (longlong)iVar38;
                      if ((iVar38 == 0) ||
                         (*(int *)(*(longlong *)(piVar31 + -2) + -4 + lVar27 * 4) + 1 != iVar37)) {
                        iVar41 = piVar31[1];
                        iVar44 = iVar38 + 1;
                        *piVar31 = iVar44;
                        if (iVar41 < iVar44) {
                          TArray<int,TMemStackAllocator<0>_>::ResizeGrow(piVar31 + -2,iVar38);
                          iVar41 = piVar31[1];
                          iVar44 = *piVar31;
                        }
                        lVar43 = *(longlong *)(piVar31 + -2);
                        *piVar31 = iVar44 + 1;
                        *(int *)(lVar43 + lVar27 * 4) = iVar37;
                        if (iVar41 < iVar44 + 1) {
                          TArray<int,TMemStackAllocator<0>_>::ResizeGrow(piVar31 + -2,iVar44);
                          lVar43 = *(longlong *)(piVar31 + -2);
                        }
                        *(int *)(lVar43 + (longlong)iVar44 * 4) = iVar36;
                        lVar27 = local_988;
                      }
                      else {
                        *(int *)(*(longlong *)(piVar31 + -2) + -4 + lVar27 * 4) = iVar36;
                        lVar27 = local_988;
                      }
                    }
                    lVar42 = lVar42 + 1;
                    piVar31 = piVar31 + 4;
                  } while (lVar42 <= lVar27);
                }
              }
            }
            FUN_1424c3a10(param_1,local_8b8,&local_748,&local_3e8);
            param_2 = local_940;
            uVar32 = local_998;
          }
        }
LAB_1424c8475:
        local_994 = local_994 + 1;
        local_990 = local_990 << 1 | (uint)((int)local_990 < 0);
        local_938 = local_938 + 1;
      } while (local_994 < (int)param_2[1]);
    }
  }
  else {
    local_9a8 = (float *)param_5;
    AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  }
  return;
  while( true ) {
    uVar25 = uVar25 - 4;
    pfVar23 = pfVar23 + -4;
    if ((longlong)uVar25 <= local_950 + 3) break;
LAB_1424c7f30:
    if (((pfVar23[1] <= fVar51) || (*pfVar23 <= fVar51)) ||
       ((pfVar23[-1] <= fVar51 || (pfVar23[-2] <= fVar51)))) goto LAB_1424c7f76;
  }
LAB_1424c7f58:
  if (local_950 < (longlong)uVar25) {
    pfVar23 = afStack_140 + uVar25 + 1;
    do {
      if (*pfVar23 <= fVar51) break;
      uVar25 = uVar25 - 1;
      pfVar23 = pfVar23 + -1;
    } while (local_950 < (longlong)uVar25);
  }
LAB_1424c7f76:
  lVar42 = lVar27;
  if (local_92c != iVar38) {
    lVar42 = local_950;
    if (iVar38 < (int)uVar34) {
      local_930 = *(int *)(param_1 + 0x4a8) + local_954;
      iVar37 = local_930 + -1;
      iVar36 = *(int *)(param_1 + 0x4a8) + iVar36;
      if (((char)local_3e8 != '\0') && (iVar38 < 8)) {
        lVar43 = (longlong)iVar38;
        plVar30 = &local_360 + lVar43 * 2;
        iVar41 = local_358[lVar43 * 4];
        local_948 = CONCAT44(local_948._4_4_,iVar41);
        if ((iVar41 == 0) || (*(int *)(*plVar30 + -4 + (longlong)iVar41 * 4) + 1 != iVar36)) {
          iVar44 = local_358[lVar43 * 4 + 1];
          iVar33 = iVar41 + 1;
          local_358[lVar43 * 4] = iVar33;
          if (iVar44 < iVar33) {
            TArray<int,TMemStackAllocator<0>_>::ResizeGrow(plVar30,iVar41);
            iVar44 = local_358[lVar43 * 4 + 1];
            iVar33 = local_358[lVar43 * 4];
            iVar41 = (int)local_948;
          }
          lVar26 = *plVar30;
          *(int *)(lVar26 + (longlong)iVar41 * 4) = iVar36;
          local_358[lVar43 * 4] = iVar33 + 1;
          if (iVar44 < iVar33 + 1) {
            TArray<int,TMemStackAllocator<0>_>::ResizeGrow(plVar30,iVar33);
            lVar26 = *plVar30;
          }
          *(int *)(lVar26 + (longlong)iVar33 * 4) = iVar37;
        }
        else {
          *(int *)(*plVar30 + -4 + (longlong)iVar41 * 4) = iVar37;
        }
        local_2e0[iVar38] = local_2e0[iVar38] + (local_930 - iVar36);
      }
      iVar41 = local_930;
      if (local_3e8._1_1_ != '\0') {
        lVar43 = (longlong)iVar38;
        local_948 = lVar43;
        if (lVar27 <= lVar43) {
          piVar31 = local_3d8 + lVar27 * 4;
          do {
            if (lVar27 < 8) {
              local_2e0[lVar27 + 8] = local_2e0[lVar27 + 8] + (iVar41 - iVar36);
              iVar38 = *piVar31;
              lVar42 = (longlong)iVar38;
              if ((iVar38 == 0) ||
                 (*(int *)(*(longlong *)(piVar31 + -2) + -4 + lVar42 * 4) + 1 != iVar36)) {
                iVar37 = piVar31[1];
                iVar44 = iVar38 + 1;
                *piVar31 = iVar44;
                if (iVar37 < iVar44) {
                  TArray<int,TMemStackAllocator<0>_>::ResizeGrow(piVar31 + -2,iVar38);
                  iVar37 = piVar31[1];
                  iVar44 = *piVar31;
                }
                lVar43 = *(longlong *)(piVar31 + -2);
                *piVar31 = iVar44 + 1;
                *(int *)(lVar43 + lVar42 * 4) = iVar36;
                if (iVar37 < iVar44 + 1) {
                  TArray<int,TMemStackAllocator<0>_>::ResizeGrow(piVar31 + -2,iVar44);
                  lVar43 = *(longlong *)(piVar31 + -2);
                }
                iVar37 = iVar41 + -1;
                *(int *)(lVar43 + (longlong)iVar44 * 4) = iVar37;
                lVar43 = local_948;
              }
              else {
                *(int *)(*(longlong *)(piVar31 + -2) + -4 + lVar42 * 4) = iVar37;
                lVar43 = local_948;
              }
            }
            lVar27 = lVar27 + 1;
            piVar31 = piVar31 + 4;
            lVar42 = local_950;
          } while (lVar27 <= lVar43);
        }
      }
    }
    uVar34 = (ulonglong)local_958;
    uVar39 = local_818;
    param_1 = local_908;
    iVar38 = local_92c;
    iVar36 = local_954;
  }
  local_954 = local_954 + 1;
  local_988 = local_988 + -1;
  local_920 = local_920 + 0x1c;
  lVar27 = lVar42;
  if (local_988 == 0) goto LAB_1424c8169;
  goto LAB_1424c7dd0;
}



// FUNCTION 1424c8560 FUN_1424c8560 body=173 status=ok
// SIG undefined FUN_1424c8560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1424c8560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0xbf800000;
  local_28 = 0x44fa0000;
  local_24 = 0;
  local_20 = _DAT_1468b5d90;
  local_14 = 0x43800000;
  local_18 = DAT_1468b5d98;
  FUN_1424d11a0(&local_28);
  FUN_1424beb60(&local_28,param_1,param_2,param_3,param_5,param_6);
  return param_1;
}



// FUNCTION 1424c8610 FUN_1424c8610 body=8 status=ok
// SIG undefined FUN_1424c8610(void)

undefined8 FUN_1424c8610(void)

{
  return DAT_146af7620;
}



// FUNCTION 1424c8620 FUN_1424c8620 body=819 status=ok
// SIG undefined FUN_1424c8620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1424c8620(longlong param_1,undefined8 *param_2,undefined4 *param_3,char param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined1 auVar7 [16];
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
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  code *local_138;
  undefined8 *puStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  undefined4 local_c0;
  float local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined8 uStack_7c;
  undefined4 local_74;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((*(longlong *)(param_1 + 0x840) == 0) || (*(int *)(*(longlong *)(param_1 + 0x840) + 8) == 0))
  {
    FUN_1424f61f0();
  }
  else {
    local_f8 = *param_3;
    uStack_f4 = param_3[1];
    uStack_f0 = param_3[2];
    uStack_ec = param_3[3];
    local_e8 = *(ulonglong *)(param_3 + 4);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_e8;
    local_128 = 0;
    local_120 = 0;
    local_e0 = param_3[6];
    local_d8 = local_f8;
    uStack_d4 = uStack_f4;
    uStack_d0 = uStack_f0;
    uStack_cc = uStack_ec;
    local_c8 = local_e8;
    local_c0 = local_e0;
    if (param_4 == '\0') {
      puVar4 = (undefined4 *)FBox::TransformBy(&local_d8,local_118);
      local_d8 = *puVar4;
      uStack_d4 = puVar4[1];
      uStack_d0 = puVar4[2];
      uStack_cc = puVar4[3];
      local_c8 = *(ulonglong *)(puVar4 + 4);
      local_c0 = puVar4[6];
    }
    else {
      auVar1 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar19 = auVar1._0_4_;
      fVar11 = auVar1._4_4_;
      fVar12 = auVar1._8_4_;
      fVar13 = auVar1._12_4_;
      auVar2._4_4_ = -(uint)(fRam0000000146af9f54 < (float)((uint)fVar11 & uRam0000000146af7644));
      auVar2._0_4_ = -(uint)(_DAT_146af9f50 < (float)((uint)fVar19 & _DAT_146af7640));
      auVar2._8_4_ = -(uint)(fRam0000000146af9f58 < (float)((uint)fVar12 & uRam0000000146af7648));
      auVar2._12_4_ = -(uint)(fRam0000000146af9f5c < (float)((uint)fVar13 & uRam0000000146af764c));
      iVar3 = movmskps(local_e0,auVar2);
      if (iVar3 == 0) {
        local_a8 = _DAT_1468b5b70;
        uStack_a0 = uRam00000001468b5b78;
        local_88 = _DAT_1468b5b90;
        fStack_84 = fRam00000001468b5b94;
        fStack_80 = fRam00000001468b5b98;
        local_98 = _DAT_1468b5b80;
        uStack_90 = uRam00000001468b5b88;
        fVar19 = fRam00000001468b5b9c;
      }
      else {
        fVar15 = *(float *)(param_1 + 0x210) * _DAT_146af9f40;
        fVar16 = *(float *)(param_1 + 0x214) * fRam0000000146af9f44;
        fVar17 = *(float *)(param_1 + 0x218) * fRam0000000146af9f48;
        fVar18 = *(float *)(param_1 + 0x21c) * fRam0000000146af9f4c;
        auVar7 = rcpps(auVar7,auVar1);
        fVar6 = auVar7._0_4_;
        fVar8 = auVar7._4_4_;
        fVar9 = auVar7._8_4_;
        fVar10 = auVar7._12_4_;
        local_a8 = CONCAT44(fVar16,fVar15);
        uStack_a0 = CONCAT44(fVar18,fVar17);
        fVar6 = (fVar6 + fVar6) - fVar6 * fVar6 * fVar19;
        fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar11;
        fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar12;
        fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar13;
        fVar6 = (fVar6 + fVar6) - fVar6 * fVar6 * fVar19;
        fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar11;
        fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar12;
        fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar13;
        local_88 = (float)(((uint)fVar6 &
                            -(uint)((float)((uint)fVar19 & _DAT_146af7640) <= _DAT_146af9f50) ^
                           (uint)fVar6) & _DAT_146af7650);
        fStack_84 = (float)(((uint)fVar8 &
                             -(uint)((float)((uint)fVar11 & uRam0000000146af7644) <=
                                    fRam0000000146af9f54) ^ (uint)fVar8) & uRam0000000146af7654);
        fStack_80 = (float)(((uint)fVar9 &
                             -(uint)((float)((uint)fVar12 & uRam0000000146af7648) <=
                                    fRam0000000146af9f58) ^ (uint)fVar9) & uRam0000000146af7658);
        fVar19 = (float)(((uint)fVar10 &
                          -(uint)((float)((uint)fVar13 & uRam0000000146af764c) <=
                                 fRam0000000146af9f5c) ^ (uint)fVar10) & uRam0000000146af765c);
        fVar8 = *(float *)(param_1 + 0x220) * local_88;
        fVar9 = *(float *)(param_1 + 0x224) * fStack_84;
        fVar10 = *(float *)(param_1 + 0x228) * fStack_80;
        fVar14 = *(float *)(param_1 + 0x22c) * fVar19;
        fVar11 = fVar10 * fVar16 - fVar9 * fVar17;
        fVar12 = fVar8 * fVar17 - fVar10 * fVar15;
        fVar13 = fVar9 * fVar15 - fVar8 * fVar16;
        fVar6 = fVar14 * fVar18 - fVar14 * fVar18;
        fVar11 = fVar11 + fVar11;
        fVar12 = fVar12 + fVar12;
        fVar13 = fVar13 + fVar13;
        fVar6 = fVar6 + fVar6;
        local_98 = CONCAT44((uint)(0.0 - ((fVar11 * fVar17 - fVar13 * fVar15) +
                                         fVar18 * fVar12 + fVar9)) & uRam0000000146af7654,
                            (uint)(0.0 - ((fVar13 * fVar16 - fVar12 * fVar17) +
                                         fVar18 * fVar11 + fVar8)) & _DAT_146af7650);
        uStack_90 = CONCAT44((uint)(0.0 - ((fVar6 * fVar18 - fVar6 * fVar18) +
                                          fVar18 * fVar6 + fVar14)) & uRam0000000146af765c,
                             (uint)(0.0 - ((fVar12 * fVar15 - fVar11 * fVar16) +
                                          fVar18 * fVar13 + fVar10)) & uRam0000000146af7658);
      }
      uStack_7c = CONCAT44(uStack_7c._4_4_,fVar19);
      puVar4 = (undefined4 *)FBox::TransformBy(&local_f8,local_118,&local_a8);
      local_f8 = *puVar4;
      uStack_f4 = puVar4[1];
      uStack_f0 = puVar4[2];
      uStack_ec = puVar4[3];
      local_e8 = *(ulonglong *)(puVar4 + 4);
      local_e0 = puVar4[6];
    }
    pfVar5 = (float *)UStaticMesh::GetBounds(*(undefined8 *)(param_1 + 0x728),local_118);
    local_98 = local_e8;
    fStack_104 = pfVar5[2] + pfVar5[5];
    fStack_110 = pfVar5[2] - pfVar5[5];
    fStack_10c = *pfVar5 + pfVar5[3];
    fStack_108 = pfVar5[1] + pfVar5[4];
    local_88 = pfVar5[1] - pfVar5[4];
    local_a8 = CONCAT44(uStack_f4,local_f8);
    uStack_a0 = CONCAT44(uStack_ec,uStack_f0);
    local_100 = CONCAT31(local_100._1_3_,1);
    local_74 = local_100;
    puStack_130 = &local_a8;
    uStack_90 = CONCAT44(*pfVar5 - pfVar5[3],local_e0);
    uStack_7c = CONCAT44(fStack_104,fStack_108);
    local_148 = &local_128;
    local_138 = FUN_1424bed70;
    local_b0 = fStack_110;
    fStack_84 = fStack_110;
    fStack_80 = fStack_10c;
    FUN_1424c5c20(param_1,&local_d8,0,&local_138);
    *param_2 = local_128;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_120;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_120._4_4_;
  }
  return param_2;
}



// FUNCTION 1424c8960 FUN_1424c8960 body=761 status=ok
// SIG undefined FUN_1424c8960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1424c8960(longlong param_1,undefined8 *param_2,undefined8 *param_3,float param_4,char param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  float *pfVar4;
  undefined8 *puVar5;
  longlong lVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined8 *puStack_c0;
  undefined8 local_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_1 + 0x840) == 0) || (*(int *)(*(longlong *)(param_1 + 0x840) + 8) == 0))
  {
    local_118 = (undefined8 *)CONCAT71(local_118._1_7_,param_5);
    FUN_1424f6500(param_1);
  }
  else {
    uVar1 = *param_3;
    local_d8 = 0;
    local_108 = (float)uVar1;
    local_d0 = 0;
    fStack_9c = local_108 + param_4;
    fStack_100 = *(float *)(param_3 + 1);
    local_f8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    fStack_94 = fStack_100 + param_4;
    fStack_104 = local_f8._4_4_;
    fStack_a0 = fStack_100 - param_4;
    puStack_c0 = (undefined8 *)CONCAT44(puStack_c0._4_4_,fStack_94);
    fStack_98 = local_f8._4_4_ + param_4;
    local_90 = CONCAT31(local_90._1_3_,1);
    local_a8 = CONCAT44(local_f8._4_4_ - param_4,local_108 - param_4);
    uStack_f0 = CONCAT44(uStack_f0._4_4_,fStack_a0);
    fStack_fc = param_4;
    local_f8 = uVar1;
    if (param_5 == '\0') {
      puVar5 = (undefined8 *)FBox::TransformBy(&local_a8,&local_c8);
      local_a8 = *puVar5;
      fStack_a0 = *(float *)(puVar5 + 1);
      fStack_9c = *(float *)((longlong)puVar5 + 0xc);
      fStack_98 = (float)puVar5[2];
      fStack_94 = (float)((ulonglong)puVar5[2] >> 0x20);
      local_90 = *(undefined4 *)(puVar5 + 3);
    }
    else {
      auVar8 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar12 = auVar8._0_4_;
      fVar13 = auVar8._4_4_;
      fVar14 = auVar8._8_4_;
      fVar15 = auVar8._12_4_;
      auVar2._4_4_ = -(uint)(fRam0000000146af9f54 < (float)((uint)fVar13 & uRam0000000146af7644));
      auVar2._0_4_ = -(uint)(_DAT_146af9f50 < (float)((uint)fVar12 & _DAT_146af7640));
      auVar2._8_4_ = -(uint)(fRam0000000146af9f58 < (float)((uint)fVar14 & uRam0000000146af7648));
      auVar2._12_4_ = -(uint)(fRam0000000146af9f5c < (float)((uint)fVar15 & uRam0000000146af764c));
      iVar3 = movmskps(fStack_94,auVar2);
      if (iVar3 == 0) {
        local_88 = _DAT_1468b5b70;
        uStack_80 = uRam00000001468b5b78;
        local_68 = _DAT_1468b5b90;
        fStack_64 = fRam00000001468b5b94;
        fStack_60 = fRam00000001468b5b98;
        fStack_5c = fRam00000001468b5b9c;
        local_78 = _DAT_1468b5b80;
        uStack_70 = uRam00000001468b5b88;
      }
      else {
        fVar16 = *(float *)(param_1 + 0x210) * _DAT_146af9f40;
        fVar17 = *(float *)(param_1 + 0x214) * fRam0000000146af9f44;
        fVar18 = *(float *)(param_1 + 0x218) * fRam0000000146af9f48;
        fVar19 = *(float *)(param_1 + 0x21c) * fRam0000000146af9f4c;
        auVar8 = rcpps(ZEXT416((uint)fStack_a0),auVar8);
        fVar7 = auVar8._0_4_;
        fVar9 = auVar8._4_4_;
        fVar10 = auVar8._8_4_;
        fVar11 = auVar8._12_4_;
        local_88 = CONCAT44(fVar17,fVar16);
        uStack_80 = CONCAT44(fVar19,fVar18);
        fVar7 = (fVar7 + fVar7) - fVar7 * fVar7 * fVar12;
        fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar13;
        fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar14;
        fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar15;
        fVar7 = (fVar7 + fVar7) - fVar7 * fVar7 * fVar12;
        fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar13;
        fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar14;
        fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar15;
        local_68 = (float)(((uint)fVar7 &
                            -(uint)((float)((uint)fVar12 & _DAT_146af7640) <= _DAT_146af9f50) ^
                           (uint)fVar7) & _DAT_146af7650);
        fStack_64 = (float)(((uint)fVar9 &
                             -(uint)((float)((uint)fVar13 & uRam0000000146af7644) <=
                                    fRam0000000146af9f54) ^ (uint)fVar9) & uRam0000000146af7654);
        fStack_60 = (float)(((uint)fVar10 &
                             -(uint)((float)((uint)fVar14 & uRam0000000146af7648) <=
                                    fRam0000000146af9f58) ^ (uint)fVar10) & uRam0000000146af7658);
        fStack_5c = (float)(((uint)fVar11 &
                             -(uint)((float)((uint)fVar15 & uRam0000000146af764c) <=
                                    fRam0000000146af9f5c) ^ (uint)fVar11) & uRam0000000146af765c);
        fVar7 = *(float *)(param_1 + 0x220) * local_68;
        fVar9 = *(float *)(param_1 + 0x224) * fStack_64;
        fVar10 = *(float *)(param_1 + 0x228) * fStack_60;
        fVar11 = *(float *)(param_1 + 0x22c) * fStack_5c;
        fVar12 = fVar10 * fVar17 - fVar9 * fVar18;
        fVar13 = fVar7 * fVar18 - fVar10 * fVar16;
        fVar14 = fVar9 * fVar16 - fVar7 * fVar17;
        fVar15 = fVar11 * fVar19 - fVar11 * fVar19;
        fVar12 = fVar12 + fVar12;
        fVar13 = fVar13 + fVar13;
        fVar14 = fVar14 + fVar14;
        fVar15 = fVar15 + fVar15;
        local_78 = CONCAT44((uint)(0.0 - ((fVar12 * fVar18 - fVar14 * fVar16) +
                                         fVar19 * fVar13 + fVar9)) & uRam0000000146af7654,
                            (uint)(0.0 - ((fVar14 * fVar17 - fVar13 * fVar18) +
                                         fVar19 * fVar12 + fVar7)) & _DAT_146af7650);
        uStack_70 = CONCAT44((uint)(0.0 - ((fVar15 * fVar19 - fVar15 * fVar19) +
                                          fVar19 * fVar15 + fVar11)) & uRam0000000146af765c,
                             (uint)(0.0 - ((fVar13 * fVar16 - fVar12 * fVar17) +
                                          fVar19 * fVar14 + fVar10)) & uRam0000000146af7658);
      }
      pfVar4 = (float *)FSphere::TransformBy(&local_108,&local_c8,&local_88);
      local_108 = *pfVar4;
      fStack_104 = pfVar4[1];
      fStack_100 = pfVar4[2];
      fStack_fc = pfVar4[3];
    }
    lVar6 = UStaticMesh::GetBounds(*(undefined8 *)(param_1 + 0x728),&local_c8);
    local_f8 = CONCAT44(fStack_104,local_108);
    uStack_f0 = CONCAT44(fStack_fc,fStack_100);
    local_e8 = *(undefined4 *)(lVar6 + 0x18);
    puStack_c0 = &local_f8;
    local_118 = &local_d8;
    local_c8 = FUN_1424bedf0;
    FUN_1424c5c20(param_1,&local_a8,0,&local_c8);
    *param_2 = local_d8;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_d0;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_d0._4_4_;
  }
  return param_2;
}



// FUNCTION 1424c8c60 FUN_1424c8c60 body=7 status=ok
// SIG undefined FUN_1424c8c60(void)

undefined4 FUN_1424c8c60(void)

{
  return DAT_146532b9c;
}



// FUNCTION 1424c8c70 FUN_1424c8c70 body=408 status=ok
// SIG undefined FUN_1424c8c70(void)

void FUN_1424c8c70(longlong param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_50;
  
  if (*(int *)(param_1 + 0x860) == *(int *)(param_1 + 0x7b0)) {
    if (*(int *)(*(longlong *)(param_1 + 0x840) + 8) != 0) {
      FUN_1424c4850(param_1,param_2,0,param_3);
      return;
    }
  }
  else {
    local_50 = CONCAT31(local_50._1_3_,1);
    fVar4 = (param_2[3] - *param_2) * -0.25;
    fVar3 = (param_2[5] - param_2[2]) * -0.25;
    fVar2 = (param_2[4] - param_2[1]) * -0.25;
    fVar6 = param_2[3] + fVar4;
    fVar7 = param_2[5] + fVar3;
    fVar3 = param_2[2] - fVar3;
    fVar5 = param_2[4] + fVar2;
    fVar4 = *param_2 - fVar4;
    fVar2 = param_2[1] - fVar2;
    if (*(char *)(param_1 + 0x914) == '\0') {
      *(ulonglong *)(param_1 + 0x8fc) = CONCAT44(fVar2,fVar4);
      *(ulonglong *)(param_1 + 0x904) = CONCAT44(fVar6,fVar3);
      *(ulonglong *)(param_1 + 0x90c) = CONCAT44(fVar7,fVar5);
      *(undefined4 *)(param_1 + 0x914) = local_50;
    }
    else {
      if (*(float *)(param_1 + 0x8fc) <= fVar4) {
        fVar4 = *(float *)(param_1 + 0x8fc);
      }
      if (*(float *)(param_1 + 0x904) <= fVar3) {
        fVar3 = *(float *)(param_1 + 0x904);
      }
      if (fVar5 <= *(float *)(param_1 + 0x90c)) {
        fVar5 = *(float *)(param_1 + 0x90c);
      }
      fVar1 = *(float *)(param_1 + 0x900);
      if (fVar2 <= *(float *)(param_1 + 0x900)) {
        fVar1 = fVar2;
      }
      *(float *)(param_1 + 0x8fc) = fVar4;
      *(float *)(param_1 + 0x904) = fVar3;
      *(float *)(param_1 + 0x90c) = fVar5;
      *(float *)(param_1 + 0x900) = fVar1;
      fVar5 = *(float *)(param_1 + 0x908);
      if (*(float *)(param_1 + 0x908) <= fVar6) {
        fVar5 = fVar6;
      }
      *(float *)(param_1 + 0x908) = fVar5;
      fVar5 = *(float *)(param_1 + 0x910);
      if (*(float *)(param_1 + 0x910) <= fVar7) {
        fVar5 = fVar7;
      }
      *(float *)(param_1 + 0x910) = fVar5;
    }
  }
  return;
}



// FUNCTION 1424c8e40 FUN_1424c8e40 body=331 status=ok
// SIG undefined FUN_1424c8e40(void)

int FUN_1424c8e40(longlong param_1,float *param_2)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [12];
  float local_5c;
  float local_58;
  float local_54;
  
  iVar3 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_1424c4850(param_1,param_2,0,&local_78);
  UStaticMesh::GetBounds(*(undefined8 *)(param_1 + 0x728),local_68);
  lVar5 = (longlong)(int)local_70 * 0x30 + local_78;
  if (local_78 != lVar5) {
    lVar2 = local_78;
    iVar4 = iVar3;
    do {
      fVar8 = *(float *)(lVar2 + 0x10) - local_5c;
      fVar6 = *(float *)(lVar2 + 0x14) - local_58;
      fVar7 = *(float *)(lVar2 + 0x18) - local_54;
      if ((((*(float *)(lVar2 + 0x10) + local_5c < *param_2) ||
           (param_2[3] <= fVar8 && fVar8 != param_2[3])) ||
          (*(float *)(lVar2 + 0x14) + local_58 < param_2[1])) ||
         (((param_2[4] <= fVar6 && fVar6 != param_2[4] ||
           (*(float *)(lVar2 + 0x18) + local_54 < param_2[2])) ||
          (param_2[5] <= fVar7 && fVar7 != param_2[5])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      iVar3 = iVar4 + 1;
      if (!bVar1) {
        iVar3 = iVar4;
      }
      lVar2 = lVar2 + 0x30;
      iVar4 = iVar3;
    } while (lVar2 != lVar5);
  }
  if (local_78 != 0) {
    FMemory::Free(local_78);
  }
  return iVar3;
}



// FUNCTION 1424c8f90 FUN_1424c8f90 body=421 status=ok
// SIG undefined FUN_1424c8f90(void)

int FUN_1424c8f90(longlong param_1,float *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  float local_78;
  undefined8 local_74;
  float local_6c;
  undefined1 local_68;
  undefined1 local_60 [24];
  float local_48;
  
  fVar5 = param_2[3];
  iVar1 = 0;
  local_6c = param_2[2] + fVar5;
  local_78 = param_2[2] - fVar5;
  local_90 = 0;
  local_88 = 0;
  fVar7 = *param_2 + fVar5;
  local_80 = CONCAT44(param_2[1] - fVar5,*param_2 - fVar5);
  local_74 = CONCAT44(param_2[1] + fVar5,fVar7);
  local_68 = 1;
  FUN_1424c4850(fVar7,&local_80,0,&local_90);
  UStaticMesh::GetBounds(*(undefined8 *)(param_1 + 0x728),local_60);
  lVar4 = (longlong)(int)local_88 * 0x30 + local_90;
  if (local_90 != lVar4) {
    local_48 = param_2[3] + 0.0001 + local_48;
    if (local_48 <= 0.0) {
      local_48 = 0.0;
    }
    lVar2 = local_90;
    iVar3 = iVar1;
    do {
      fVar7 = *param_2 - *(float *)(lVar2 + 0x10);
      fVar6 = param_2[1] - *(float *)(lVar2 + 0x14);
      fVar5 = param_2[2] - *(float *)(lVar2 + 0x18);
      iVar1 = iVar3 + 1;
      if (local_48 * local_48 < fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5) {
        iVar1 = iVar3;
      }
      lVar2 = lVar2 + 0x30;
      iVar3 = iVar1;
    } while (lVar2 != lVar4);
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return iVar1;
}



// FUNCTION 1424c9180 FUN_1424c9180 body=316 status=ok
// SIG undefined FUN_1424c9180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1424c9180(float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  local_40 = 0xbf800000;
  local_50 = _DAT_1468b5d90;
  local_58 = 0x44fa0000;
  local_54 = 0;
  local_44 = param_8;
  local_48 = DAT_1468b5d98;
  FUN_1424d11a0(&local_58,param_7,param_3,param_5,param_6,param_7);
  FUN_1424be650(&local_58,&local_38,param_2,param_3,param_4);
  fVar1 = 0.0;
  if (0.0 <= local_1c) {
    fVar1 = local_1c;
  }
  *param_1 = local_2c * fVar1 + local_38;
  param_1[1] = local_28 * fVar1 + local_34;
  param_1[2] = (local_20 * 0.5 * fVar1 + local_24) * fVar1 + local_30;
  return param_1;
}



// FUNCTION 1424c92c0 FUN_1424c92c0 body=88 status=ok
// SIG undefined FUN_1424c92c0(void)

void FUN_1424c92c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1424f8e00();
  if (*(longlong *)(param_1 + 0x840) != 0) {
    *(longlong *)(param_2 + 8) =
         *(longlong *)(param_2 + 8) +
         (ulonglong)(uint)(*(int *)(*(longlong *)(param_1 + 0x840) + 0xc) << 6);
  }
  lVar1 = (ulonglong)(uint)(*(int *)(param_1 + 0x85c) << 2) + *(longlong *)(param_2 + 8);
  *(longlong *)(param_2 + 8) = lVar1;
  *(ulonglong *)(param_2 + 8) = (ulonglong)(uint)(*(int *)(param_1 + 0x8ac) * 0x1c) + lVar1;
  return;
}



// FUNCTION 1424c9450 FUN_1424c9450 body=104 status=ok
// SIG undefined FUN_1424c9450(void)

undefined8 * FUN_1424c9450(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [32];
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  uVar1 = *(uint *)(*(longlong *)(param_3 + 0x10) + 0x2c);
  uVar3 = uVar1 >> 4;
  if (*(char *)(param_1 + 0x518) != '\0') {
    uVar3 = uVar1 >> 5;
  }
  if ((uVar3 & 1) != 0) {
    puVar4 = (undefined8 *)FUN_1428201a0(param_1,local_res8,param_3);
    uVar2 = *puVar4;
    *param_2 = uVar2;
    *(uint *)((longlong)param_2 + 4) = (uint)((ulonglong)uVar2 >> 0x20) & 0xfffffeff | 0x200;
  }
  return param_2;
}



// FUNCTION 1424c94c0 FUN_1424c94c0 body=58 status=ok
// SIG undefined FUN_1424c94c0(void)

undefined8 * FUN_1424c94c0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  if ((*(byte *)(*(longlong *)(param_3 + 0x10) + 0x2c) & 8) != 0) {
    puVar1 = (undefined8 *)FUN_1428201a0(param_1,local_res10);
    *param_2 = *puVar1;
  }
  return param_2;
}



// FUNCTION 1424c9500 FUN_1424c9500 body=333 status=ok
// SIG undefined FUN_1424c9500(void)

void FUN_1424c9500(longlong *param_1,undefined8 param_2,longlong *param_3,char param_4,byte param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  puVar8 = (undefined4 *)0x0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_3;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        puVar6 = (undefined4 *)(*param_1 + (longlong)iVar4 * 0x28);
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x28) == lVar3) {
          if (iVar4 != -1) goto LAB_1424c9593;
          break;
        }
        iVar4 = puVar6[8];
      } while (iVar4 != -1);
    }
  }
  puVar6 = puVar8;
LAB_1424c9593:
  puVar7 = puVar6 + 6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar7 = puVar8;
  }
  if (puVar7 != (undefined4 *)0x0) {
    if (param_4 == '\0') {
      puVar8 = (undefined4 *)(ulonglong)((param_5 ^ 1) + 1);
    }
    local_28 = *param_3;
    local_20 = param_3[1];
    local_18 = param_3[2];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    FUN_1428aff50(param_2,&local_28,puVar8,*puVar7);
    if (param_5 != 0) {
      FUN_1424ce330(param_1,param_3);
    }
  }
  plVar5 = (longlong *)param_3[2];
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
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1424c9660 FUN_1424c9660 body=506 status=ok
// SIG undefined FUN_1424c9660(void)

void FUN_1424c9660(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar9 = 0;
  param_1[0x12] = 0;
  if (param_1[0x13] != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  iVar8 = *param_1;
  iVar7 = param_1[0x16];
  if (iVar7 < iVar8) {
    param_1[0x16] = iVar8;
    if (param_1[0x17] < iVar8) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x14,iVar7);
    }
  }
  else if ((iVar8 < iVar7) && (iVar8 != iVar7)) {
    param_1[0x16] = iVar8;
    TArray<FVector,FDefaultAllocator>::ResizeShrink(param_1 + 0x14);
  }
  uVar11 = param_1[0xe];
  param_1[0x12] = 0;
  if (param_1[0x13] != (int)((float)*param_1 * (float)param_1[0xf])) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x10);
  }
  uVar12 = uVar9;
  uVar13 = uVar9;
  if (0 < *param_1) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x14);
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10 + uVar13);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      puVar1 = (undefined4 *)(uVar12 + lVar3);
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      *(undefined4 *)(uVar12 + 8 + lVar3) = uVar5;
      if ((1.0 <= (float)param_1[0xf]) ||
         (uVar11 = uVar11 * 0xbb38435 + 0x3619636b, fVar6 = (float)(uVar11 & 0x7fffff | 0x3f800000),
         fVar6 - (float)(int)fVar6 <= (float)param_1[0xf])) {
        iVar8 = param_1[0x12];
        param_1[0x12] = iVar8 + 1;
        if (param_1[0x13] < iVar8 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar8);
        }
        *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar8 * 4) = (int)uVar9;
      }
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar10;
      uVar12 = uVar12 + 0xc;
      uVar13 = uVar13 + 0x30;
    } while ((int)uVar10 < *param_1);
  }
  iVar8 = param_1[0x12];
  iVar7 = iVar8 / param_1[0x1d];
  param_1[1] = iVar8;
  param_1[0xb] = param_1[0x1f];
  if (iVar7 < param_1[0x1f]) {
    if (iVar7 < param_1[0x1e]) {
      iVar7 = 0;
    }
    param_1[0xb] = iVar7;
  }
  iVar7 = param_1[0x20];
  param_1[10] = iVar7;
  param_1[0xc] = param_1[0x1c];
  if (iVar8 / param_1[0x1c] < iVar7) {
    iVar8 = iVar8 / iVar7;
    if (iVar8 < 1) {
      param_1[0xc] = 1;
      return;
    }
    iVar7 = 0x400;
    if (iVar8 < 0x400) {
      iVar7 = iVar8;
    }
    param_1[0xc] = iVar7;
  }
  return;
}



// FUNCTION 1424c9860 FUN_1424c9860 body=61 status=ok
// SIG undefined FUN_1424c9860(void)

void FUN_1424c9860(void)

{
  longlong lVar1;
  
  if (DAT_146af7620 == 0) {
    lVar1 = operator_new(0x268);
    if (lVar1 != 0) {
      DAT_146af7620 = FUN_1424b4510(lVar1);
      return;
    }
    DAT_146af7620 = 0;
  }
  return;
}



// FUNCTION 1424c98a0 FUN_1424c98a0 body=53 status=ok
// SIG undefined FUN_1424c98a0(void)

void FUN_1424c98a0(void)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 == (LPVOID)0x0) {
    lVar2 = operator_new(0xc0);
    if (lVar2 != 0) {
      FUN_1424b5210(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1424c98e0 FUN_1424c98e0 body=102 status=ok
// SIG undefined FUN_1424c98e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424c98e0(longlong param_1)

{
  undefined1 auStack_148 [32];
  undefined1 local_128 [256];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_28 = 0;
  FUN_1424b8850(param_1 + -0xd0,param_1 + 0x7f8,local_128);
  FUN_1419f1da0(param_1,local_128);
  return;
}



// FUNCTION 1424c9950 FUN_1424c9950 body=361 status=ok
// SIG undefined FUN_1424c9950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424c9950(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  undefined1 local_128 [4];
  undefined2 auStack_124 [126];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_28 = 0;
  FUN_1424b8a70(param_1,param_1 + 0x7f8,local_128);
  puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_138,param_1 + 0x938,9);
  lVar4 = (longlong)(int)local_28;
  iVar2 = (int)local_28 + 1;
  if (local_28._4_4_ < iVar2) {
    uVar3 = local_28 & 0xffffffff;
    local_28._0_4_ = iVar2;
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_128,uVar3);
    iVar2 = (int)local_28;
  }
  local_28._0_4_ = iVar2;
  local_128[lVar4 * 8] = *puVar1;
  lVar4 = lVar4 * 8;
  local_128[lVar4 + 1] = puVar1[1];
  local_128[lVar4 + 2] = puVar1[2];
  local_128[lVar4 + 3] = puVar1[3];
  *(undefined2 *)(local_128 + lVar4 + 4) = *(undefined2 *)(puVar1 + 4);
  *(undefined2 *)(local_128 + lVar4 + 6) = *(undefined2 *)(puVar1 + 6);
  puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_138,param_1 + 0x948,10);
  iVar2 = (int)local_28;
  lVar4 = (longlong)(int)local_28;
  local_28._0_4_ = (int)local_28 + 1;
  if (local_28._4_4_ < (int)local_28) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_128,iVar2);
  }
  local_128[lVar4 * 8] = *puVar1;
  lVar4 = lVar4 * 8;
  local_128[lVar4 + 1] = puVar1[1];
  local_128[lVar4 + 2] = puVar1[2];
  local_128[lVar4 + 3] = puVar1[3];
  *(undefined2 *)(local_128 + lVar4 + 4) = *(undefined2 *)(puVar1 + 4);
  *(undefined2 *)(local_128 + lVar4 + 6) = *(undefined2 *)(puVar1 + 6);
  FUN_1419f1da0(param_1,local_128);
  return;
}



// FUNCTION 1424c9ac0 FUN_1424c9ac0 body=95 status=ok
// SIG undefined FUN_1424c9ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424c9ac0(longlong param_1)

{
  undefined1 auStack_148 [32];
  undefined1 local_128 [256];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_28 = 0;
  FUN_1424b8a70(param_1,param_1 + 0x6b8,local_128);
  FUN_1419f1da0(param_1,local_128);
  return;
}



// FUNCTION 1424c9b20 FUN_1424c9b20 body=1210 status=ok
// SIG undefined FUN_1424c9b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424c9b20(longlong param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 **ppuVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined1 auStack_298 [32];
  undefined2 local_278 [2];
  undefined1 local_274 [12];
  undefined8 *local_268;
  undefined4 local_260;
  undefined4 local_25c;
  byte local_258 [256];
  undefined8 local_158;
  undefined1 local_148 [4];
  undefined2 auStack_144 [126];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  plVar6 = (longlong *)(param_1 + 0x6a8);
  iVar5 = 0;
  lVar8 = *(longlong *)(param_1 + 0x698);
  if (lVar8 != *plVar6) {
    local_48 = 0;
    puVar2 = (undefined1 *)FUN_1419e2380(param_1,&local_268,(longlong *)(param_1 + 0x698),0);
    uVar1 = local_48;
    lVar8 = (longlong)(int)local_48;
    iVar4 = (int)local_48 + 1;
    local_48 = CONCAT44(local_48._4_4_,iVar4);
    if (local_48._4_4_ < iVar4) {
      TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar1 & 0xffffffff);
    }
    local_148[lVar8 * 8] = *puVar2;
    lVar8 = lVar8 * 8;
    local_148[lVar8 + 1] = puVar2[1];
    local_148[lVar8 + 2] = puVar2[2];
    local_148[lVar8 + 3] = puVar2[3];
    *(undefined2 *)(local_148 + lVar8 + 4) = *(undefined2 *)(puVar2 + 4);
    *(undefined2 *)(local_148 + lVar8 + 6) = *(undefined2 *)(puVar2 + 6);
    FUN_1419f2190(param_1,local_148);
    lVar8 = *(longlong *)(param_1 + 0x698);
  }
  local_158 = 0;
  if (lVar8 != 0) {
    pbVar3 = (byte *)FUN_1419e2500(param_1,&local_268,param_1 + 0x698,0);
    uVar1 = local_158;
    lVar8 = (longlong)(int)local_158;
    iVar4 = (int)local_158 + 1;
    local_158 = CONCAT44(local_158._4_4_,iVar4);
    if (local_158._4_4_ < iVar4) {
      TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_258,uVar1 & 0xffffffff);
    }
    local_258[lVar8 * 8] = *pbVar3;
    lVar8 = lVar8 * 8;
    local_258[lVar8 + 1] = pbVar3[1];
    local_258[lVar8 + 2] = pbVar3[2];
    local_258[lVar8 + 3] = pbVar3[3];
    *(undefined2 *)(local_258 + lVar8 + 4) = *(undefined2 *)(pbVar3 + 4);
    *(undefined2 *)(local_258 + lVar8 + 6) = *(undefined2 *)(pbVar3 + 6);
    *(uint *)(param_1 + 0x690) = (uint)local_258[(longlong)((int)local_158 + -1) * 8];
  }
  local_268 = (undefined8 *)0x2;
  puVar9 = local_278;
  local_278[0] = 0x201;
  plVar10 = plVar6;
  do {
    if (*plVar6 != 0) {
      pbVar3 = (byte *)FUN_1419e2500(param_1,local_274,plVar10,*(undefined1 *)puVar9);
      uVar1 = local_158;
      lVar8 = (longlong)(int)local_158;
      iVar4 = (int)local_158 + 1;
      local_158 = CONCAT44(local_158._4_4_,iVar4);
      if (local_158._4_4_ < iVar4) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_258,uVar1 & 0xffffffff);
      }
      lVar8 = lVar8 * 8;
      local_258[lVar8] = *pbVar3;
      local_258[lVar8 + 1] = pbVar3[1];
      local_258[lVar8 + 2] = pbVar3[2];
      local_258[lVar8 + 3] = pbVar3[3];
      *(undefined2 *)(local_258 + lVar8 + 4) = *(undefined2 *)(pbVar3 + 4);
      *(undefined2 *)(local_258 + lVar8 + 6) = *(undefined2 *)(pbVar3 + 6);
    }
    plVar10 = plVar10 + 2;
    plVar6 = plVar6 + 2;
    puVar9 = (undefined2 *)((longlong)puVar9 + 1);
    local_268 = (undefined8 *)((longlong)local_268 + -1);
  } while (local_268 != (undefined8 *)0x0);
  ppuVar7 = (undefined8 **)(param_1 + 0x710);
  if (*ppuVar7 == (undefined8 *)0x0) {
    local_260 = 0;
    local_268 = &DAT_146ac3d70;
    ppuVar7 = &local_268;
    local_25c = 0x80000;
  }
  pbVar3 = (byte *)FUN_1419e2500(param_1,local_274,ppuVar7,3);
  uVar1 = local_158;
  lVar8 = (longlong)(int)local_158;
  iVar4 = (int)local_158 + 1;
  local_158._0_4_ = iVar4;
  if (local_158._4_4_ < iVar4) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_258,uVar1 & 0xffffffff);
  }
  local_258[lVar8 * 8] = *pbVar3;
  lVar8 = lVar8 * 8;
  plVar6 = (longlong *)(param_1 + 0x720);
  local_258[lVar8 + 1] = pbVar3[1];
  local_258[lVar8 + 2] = pbVar3[2];
  local_258[lVar8 + 3] = pbVar3[3];
  *(undefined2 *)(local_258 + lVar8 + 4) = *(undefined2 *)(pbVar3 + 4);
  *(undefined2 *)(local_258 + lVar8 + 6) = *(undefined2 *)(pbVar3 + 6);
  if ((*plVar6 != 0) || (plVar6 = (longlong *)(param_1 + 0x698), *plVar6 != 0)) {
    pbVar3 = (byte *)FUN_1419e2500(param_1,local_274,plVar6,4);
    iVar4 = (int)local_158;
    lVar8 = (longlong)(int)local_158;
    local_158._0_4_ = (int)local_158 + 1;
    if (local_158._4_4_ < (int)local_158) {
      TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_258,iVar4);
    }
    local_258[lVar8 * 8] = *pbVar3;
    lVar8 = lVar8 * 8;
    local_258[lVar8 + 1] = pbVar3[1];
    local_258[lVar8 + 2] = pbVar3[2];
    local_258[lVar8 + 3] = pbVar3[3];
    *(undefined2 *)(local_258 + lVar8 + 4) = *(undefined2 *)(pbVar3 + 4);
    *(undefined2 *)(local_258 + lVar8 + 6) = *(undefined2 *)(pbVar3 + 6);
  }
  iVar4 = *(int *)(param_1 + 0x708);
  *(uint *)(param_1 + 0x694) = (uint)local_258[(longlong)((int)local_158 + -1) * 8];
  if (iVar4 != 0) {
    if (0 < iVar4) {
      do {
        pbVar3 = (byte *)FUN_1419e2500(param_1,local_274,param_1 + 0x6c8 + (longlong)iVar5 * 0x10,
                                       iVar5 + 5);
        iVar4 = (int)local_158;
        lVar8 = (longlong)(int)local_158;
        local_158._0_4_ = (int)local_158 + 1;
        if (local_158._4_4_ < (int)local_158) {
          TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_258,iVar4);
        }
        lVar8 = lVar8 * 8;
        iVar5 = iVar5 + 1;
        local_258[lVar8] = *pbVar3;
        local_258[lVar8 + 1] = pbVar3[1];
        local_258[lVar8 + 2] = pbVar3[2];
        local_258[lVar8 + 3] = pbVar3[3];
        *(undefined2 *)(local_258 + lVar8 + 4) = *(undefined2 *)(pbVar3 + 4);
        iVar4 = *(int *)(param_1 + 0x708);
        *(undefined2 *)(local_258 + lVar8 + 6) = *(undefined2 *)(pbVar3 + 6);
      } while (iVar5 < iVar4);
    }
    for (; iVar4 < 4; iVar4 = iVar4 + 1) {
      pbVar3 = (byte *)FUN_1419e2500(param_1,local_274,
                                     param_1 + 0x6b8 + (longlong)*(int *)(param_1 + 0x708) * 0x10,
                                     iVar4 + 5);
      iVar5 = (int)local_158;
      lVar8 = (longlong)(int)local_158;
      local_158._0_4_ = (int)local_158 + 1;
      if (local_158._4_4_ < (int)local_158) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_258,iVar5);
      }
      lVar8 = lVar8 * 8;
      local_258[lVar8] = *pbVar3;
      local_258[lVar8 + 1] = pbVar3[1];
      local_258[lVar8 + 2] = pbVar3[2];
      local_258[lVar8 + 3] = pbVar3[3];
      *(undefined2 *)(local_258 + lVar8 + 4) = *(undefined2 *)(pbVar3 + 4);
      *(undefined2 *)(local_258 + lVar8 + 6) = *(undefined2 *)(pbVar3 + 6);
    }
  }
  FUN_1419f1da0(param_1,local_258);
  return;
}



// FUNCTION 1424c9fe0 InternalGetFactoryUserData body=12 status=ok
// SIG undefined InternalGetFactoryUserData(void)

longlong FGPUSkinCache::InternalGetFactoryUserData(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x10);
}



// FUNCTION 1424c9ff0 FUN_1424c9ff0 body=612 status=ok
// SIG undefined FUN_1424c9ff0(void)

void FUN_1424c9ff0(longlong param_1,longlong *param_2,longlong *param_3,ulonglong *param_4)

{
  bool bVar1;
  bool bVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong local_res8;
  ulonglong local_res10;
  undefined1 local_res18 [8];
  ulonglong local_res20;
  
  iVar6 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x7a0,*param_3);
  if (param_4 == (ulonglong *)0x0) {
    local_res8 = 0;
    puVar3 = &local_res8;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    local_res10 = *param_4;
    if (local_res10 != 0) {
      LOCK();
      *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
      UNLOCK();
    }
    puVar3 = &local_res10;
    bVar2 = true;
    bVar1 = false;
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x7d8,puVar3);
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  }
  if (bVar2) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  *(undefined2 *)(param_1 + 0x664) = 0xc00;
  *(longlong *)(param_1 + 0x658) = param_1 + 0x770;
  *(undefined1 *)(param_1 + 0x667) = 2;
  if (param_4 == (ulonglong *)0x0) {
    puVar3 = (ulonglong *)(**(code **)(*param_2 + 0x80))(param_2,local_res18);
    bVar2 = false;
    bVar1 = true;
    uVar4 = *puVar3;
  }
  else {
    uVar4 = param_4[2];
    if (uVar4 != 0) {
      LOCK();
      *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
      UNLOCK();
    }
    bVar2 = true;
    bVar1 = false;
    local_res20 = uVar4;
  }
  *(ulonglong *)(param_1 + 0x720) = uVar4;
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  if (bVar2) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
  }
  *(longlong *)(param_1 + 0x718) = param_3[2];
  *(longlong *)(param_1 + 0x668) = param_2[0xd2];
  *(int *)(param_1 + 0x670) = (int)param_2[0xd3];
  *(undefined1 *)(param_1 + 0x674) = *(undefined1 *)((longlong)param_2 + 0x69c);
  *(undefined1 *)(param_1 + 0x675) = *(undefined1 *)((longlong)param_2 + 0x69d);
  *(undefined1 *)(param_1 + 0x676) = *(undefined1 *)((longlong)param_2 + 0x69e);
  *(undefined1 *)(param_1 + 0x677) = *(undefined1 *)((longlong)param_2 + 0x69f);
  *(longlong *)(param_1 + 0x678) = param_2[0xd4];
  *(int *)(param_1 + 0x680) = (int)param_2[0xd5];
  *(undefined1 *)(param_1 + 0x684) = *(undefined1 *)((longlong)param_2 + 0x6ac);
  *(undefined1 *)(param_1 + 0x685) = *(undefined1 *)((longlong)param_2 + 0x6ad);
  *(undefined1 *)(param_1 + 0x686) = *(undefined1 *)((longlong)param_2 + 0x6ae);
  *(undefined1 *)(param_1 + 0x687) = *(undefined1 *)((longlong)param_2 + 0x6af);
  if (param_4 != (ulonglong *)0x0) {
    *(undefined4 *)(param_1 + 0x674) = 0x60e1000;
    *(longlong *)(param_1 + 0x668) = param_1 + 0x7a8;
    *(longlong *)(param_1 + 0x678) = param_1 + 0x7a8;
    *(undefined4 *)(param_1 + 0x684) = 0x60e1008;
  }
  FRenderResource::UpdateRHI(param_1);
  *(undefined8 *)(param_1 + 0x7e0) = 0xffffffffffffffff;
  if (0 < *(int *)(param_1 + 0x330)) {
    plVar5 = (longlong *)(param_1 + 0x30);
    do {
      if (*(longlong *)(*plVar5 + 0x30) == *param_3) {
        *(int *)(param_1 + 0x7e0) = iVar6;
      }
      if ((param_4 != (ulonglong *)0x0) && (*(ulonglong *)(*plVar5 + 0x30) == *param_4)) {
        *(int *)(param_1 + 0x7e4) = iVar6;
      }
      iVar6 = iVar6 + 1;
      plVar5 = plVar5 + 3;
    } while (iVar6 < *(int *)(param_1 + 0x330));
  }
  return;
}



// FUNCTION 1424ca260 FUN_1424ca260 body=1430 status=ok
// SIG undefined FUN_1424ca260(void)

undefined8 * FUN_1424ca260(undefined8 *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  
  iVar5 = _isnan((double)param_4);
  if ((iVar5 == 0) && (iVar5 = _finite((double)param_4), iVar5 != 0)) {
    fVar1 = param_3[2];
    fVar2 = param_2[2];
    fVar3 = param_2[2];
    *param_1 = CONCAT44((param_3[1] - param_2[1]) * param_4 + param_2[1],
                        (*param_3 - *param_2) * param_4 + *param_2);
    *(float *)(param_1 + 1) = (fVar1 - fVar2) * param_4 + fVar3;
    fVar1 = param_3[5];
    fVar2 = param_2[5];
    fVar3 = param_2[5];
    *(ulonglong *)((longlong)param_1 + 0xc) =
         CONCAT44((param_3[4] - param_2[4]) * param_4 + param_2[4],
                  (param_3[3] - param_2[3]) * param_4 + param_2[3]);
    *(float *)((longlong)param_1 + 0x14) = (fVar1 - fVar2) * param_4 + fVar3;
    fVar1 = param_3[8];
    fVar2 = param_2[8];
    fVar3 = param_2[8];
    param_1[3] = CONCAT44((param_3[7] - param_2[7]) * param_4 + param_2[7],
                          (param_3[6] - param_2[6]) * param_4 + param_2[6]);
    *(float *)(param_1 + 4) = (fVar1 - fVar2) * param_4 + fVar3;
    fVar1 = param_3[0xb];
    fVar2 = param_2[0xb];
    fVar3 = param_2[0xb];
    *(ulonglong *)((longlong)param_1 + 0x24) =
         CONCAT44((param_3[10] - param_2[10]) * param_4 + param_2[10],
                  (param_3[9] - param_2[9]) * param_4 + param_2[9]);
    *(float *)((longlong)param_1 + 0x2c) = (fVar1 - fVar2) * param_4 + fVar3;
    fVar1 = param_3[0xd];
    fVar2 = param_2[0xd];
    fVar3 = param_2[0xd];
    *(float *)(param_1 + 6) = (param_3[0xc] - param_2[0xc]) * param_4 + param_2[0xc];
    *(float *)((longlong)param_1 + 0x34) = (fVar1 - fVar2) * param_4 + fVar3;
    pbVar7 = (byte *)((longlong)param_3 + 0x72);
    uVar10 = 0;
    fVar1 = param_3[0xf];
    fVar2 = param_2[0xf];
    fVar3 = param_2[0xf];
    *(float *)(param_1 + 7) = (param_3[0xe] - param_2[0xe]) * param_4 + param_2[0xe];
    *(float *)((longlong)param_1 + 0x3c) = (fVar1 - fVar2) * param_4 + fVar3;
    fVar1 = param_3[0x11];
    fVar2 = param_2[0x11];
    fVar3 = param_2[0x11];
    *(float *)(param_1 + 8) = (param_3[0x10] - param_2[0x10]) * param_4 + param_2[0x10];
    *(float *)((longlong)param_1 + 0x44) = (fVar1 - fVar2) * param_4 + fVar3;
    fVar1 = param_3[0x13];
    fVar2 = param_2[0x13];
    fVar3 = param_2[0x13];
    *(float *)(param_1 + 9) = (param_3[0x12] - param_2[0x12]) * param_4 + param_2[0x12];
    *(float *)((longlong)param_1 + 0x4c) = (fVar1 - fVar2) * param_4 + fVar3;
    fVar1 = param_3[0x15];
    fVar2 = param_2[0x15];
    fVar3 = param_2[0x15];
    *(float *)(param_1 + 10) = (param_3[0x14] - param_2[0x14]) * param_4 + param_2[0x14];
    *(float *)((longlong)param_1 + 0x54) = (fVar1 - fVar2) * param_4 + fVar3;
    fVar1 = param_3[0x17];
    fVar2 = param_2[0x17];
    fVar3 = param_2[0x17];
    *(float *)(param_1 + 0xb) = (param_3[0x16] - param_2[0x16]) * param_4 + param_2[0x16];
    *(float *)((longlong)param_1 + 0x5c) = (fVar1 - fVar2) * param_4 + fVar3;
    fVar1 = param_3[0x19];
    fVar2 = param_2[0x19];
    fVar3 = param_2[0x19];
    *(float *)(param_1 + 0xc) = (param_3[0x18] - param_2[0x18]) * param_4 + param_2[0x18];
    *(float *)((longlong)param_1 + 100) = (fVar1 - fVar2) * param_4 + fVar3;
    fVar1 = param_3[0x1b];
    fVar2 = param_2[0x1b];
    fVar3 = param_2[0x1b];
    lVar9 = (longlong)param_2 - (longlong)param_3;
    lVar8 = (longlong)param_1 - (longlong)param_3;
    *(float *)(param_1 + 0xd) = (param_3[0x1a] - param_2[0x1a]) * param_4 + param_2[0x1a];
    *(float *)((longlong)param_1 + 0x6c) = (fVar1 - fVar2) * param_4 + fVar3;
    do {
      iVar5 = (int)(((float)*pbVar7 - (float)pbVar7[lVar9]) * param_4 + (float)pbVar7[lVar9]);
      if (iVar5 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0xff;
        if (iVar5 < 0xff) {
          iVar6 = iVar5;
        }
      }
      pbVar7[lVar8] = (byte)iVar6;
      iVar5 = (int)(((float)pbVar7[-1] - (float)pbVar7[lVar9 + -1]) * param_4 +
                   (float)pbVar7[lVar9 + -1]);
      if (iVar5 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0xff;
        if (iVar5 < 0xff) {
          iVar6 = iVar5;
        }
      }
      pbVar7[lVar8 + -1] = (byte)iVar6;
      iVar5 = (int)(((float)pbVar7[-2] - (float)pbVar7[lVar9 + -2]) * param_4 +
                   (float)pbVar7[lVar9 + -2]);
      if (iVar5 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0xff;
        if (iVar5 < 0xff) {
          iVar6 = iVar5;
        }
      }
      pbVar7[lVar8 + -2] = (byte)iVar6;
      iVar5 = (int)(((float)pbVar7[1] - (float)pbVar7[lVar9 + 1]) * param_4 +
                   (float)pbVar7[lVar9 + 1]);
      if (iVar5 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0xff;
        if (iVar5 < 0xff) {
          iVar6 = iVar5;
        }
      }
      pbVar7[lVar8 + 1] = (byte)iVar6;
      iVar5 = (int)(((float)pbVar7[4] - (float)pbVar7[lVar9 + 4]) * param_4 +
                   (float)pbVar7[lVar9 + 4]);
      if (iVar5 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0xff;
        if (iVar5 < 0xff) {
          iVar6 = iVar5;
        }
      }
      pbVar7[lVar8 + 4] = (byte)iVar6;
      iVar5 = (int)(((float)pbVar7[3] - (float)pbVar7[lVar9 + 3]) * param_4 +
                   (float)pbVar7[lVar9 + 3]);
      if (iVar5 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0xff;
        if (iVar5 < 0xff) {
          iVar6 = iVar5;
        }
      }
      pbVar7[lVar8 + 3] = (byte)iVar6;
      iVar5 = (int)(((float)pbVar7[2] - (float)pbVar7[lVar9 + 2]) * param_4 +
                   (float)pbVar7[lVar9 + 2]);
      if (iVar5 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0xff;
        if (iVar5 < 0xff) {
          iVar6 = iVar5;
        }
      }
      pbVar7[lVar8 + 2] = (byte)iVar6;
      iVar5 = (int)(((float)pbVar7[5] - (float)pbVar7[lVar9 + 5]) * param_4 +
                   (float)pbVar7[lVar9 + 5]);
      if (iVar5 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0xff;
        if (iVar5 < 0xff) {
          iVar6 = iVar5;
        }
      }
      pbVar7[lVar8 + 5] = (byte)iVar6;
      uVar10 = uVar10 + 2;
      pbVar7 = pbVar7 + 8;
    } while (uVar10 < 2);
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 2);
    *param_1 = *(undefined8 *)param_3;
    param_1[1] = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 6);
    param_1[2] = *(undefined8 *)(param_3 + 4);
    param_1[3] = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 10);
    param_1[4] = *(undefined8 *)(param_3 + 8);
    param_1[5] = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0xe);
    param_1[6] = *(undefined8 *)(param_3 + 0xc);
    param_1[7] = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0x12);
    param_1[8] = *(undefined8 *)(param_3 + 0x10);
    param_1[9] = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0x16);
    param_1[10] = *(undefined8 *)(param_3 + 0x14);
    param_1[0xb] = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0x1a);
    param_1[0xc] = *(undefined8 *)(param_3 + 0x18);
    param_1[0xd] = uVar4;
    param_1[0xe] = *(undefined8 *)(param_3 + 0x1c);
  }
  return param_1;
}



// FUNCTION 1424ca800 IsEntryValid body=24 status=ok
// SIG undefined IsEntryValid(void)

undefined8 FGPUSkinCache::IsEntryValid(longlong param_1,int param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x20) >> 8),
                  *(int *)((longlong)param_2 * 0x140 + 0x40 + *(longlong *)(param_1 + 0x20)) ==
                  param_2);
}



// FUNCTION 1424ca820 IsValid body=24 status=ok
// SIG undefined IsValid(void)

undefined1 FHDRLoadHelper::IsValid(longlong *param_1)

{
  if (((*param_1 != 0) && ((int)param_1[1] != 0)) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1424ca840 FUN_1424ca840 body=11 status=ok
// SIG undefined FUN_1424ca840(void)

bool FUN_1424ca840(longlong param_1)

{
  return 0.0 < *(float *)(param_1 + 0x1c);
}



// FUNCTION 1424ca860 ModifyCompilationEnvironment body=138 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FRecomputeTangentsPerTrianglePassCS<1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MERGE_DUPLICATED_VERTICES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZEX",0x40);
  FUN_141a172f0(param_2,L"INTERMEDIATE_ACCUM_BUFFER_NUM_INTS",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"FULL_PRECISION_UV",1);
  return;
}



// FUNCTION 1424ca8f0 ModifyCompilationEnvironment body=138 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FRecomputeTangentsPerTrianglePassCS<2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MERGE_DUPLICATED_VERTICES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZEX",0x40);
  FUN_141a172f0(param_2,L"INTERMEDIATE_ACCUM_BUFFER_NUM_INTS",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"FULL_PRECISION_UV",0);
  return;
}



// FUNCTION 1424ca980 ModifyCompilationEnvironment body=141 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FRecomputeTangentsPerTrianglePassCS<3>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MERGE_DUPLICATED_VERTICES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZEX",0x40);
  FUN_141a172f0(param_2,L"INTERMEDIATE_ACCUM_BUFFER_NUM_INTS",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"FULL_PRECISION_UV",1);
  return;
}



// FUNCTION 1424caa10 ModifyCompilationEnvironment body=138 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FRecomputeTangentsPerTrianglePassCS<4>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MERGE_DUPLICATED_VERTICES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZEX",0x40);
  FUN_141a172f0(param_2,L"INTERMEDIATE_ACCUM_BUFFER_NUM_INTS",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"FULL_PRECISION_UV",0);
  return;
}



// FUNCTION 1424caaa0 ModifyCompilationEnvironment body=141 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FRecomputeTangentsPerTrianglePassCS<5>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MERGE_DUPLICATED_VERTICES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZEX",0x40);
  FUN_141a172f0(param_2,L"INTERMEDIATE_ACCUM_BUFFER_NUM_INTS",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"FULL_PRECISION_UV",1);
  return;
}



// FUNCTION 1424cab30 ModifyCompilationEnvironment body=141 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FRecomputeTangentsPerTrianglePassCS<6>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MERGE_DUPLICATED_VERTICES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZEX",0x40);
  FUN_141a172f0(param_2,L"INTERMEDIATE_ACCUM_BUFFER_NUM_INTS",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"FULL_PRECISION_UV",0);
  return;
}



// FUNCTION 1424cabc0 ModifyCompilationEnvironment body=144 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FRecomputeTangentsPerTrianglePassCS<7>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MERGE_DUPLICATED_VERTICES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZEX",0x40);
  FUN_141a172f0(param_2,L"INTERMEDIATE_ACCUM_BUFFER_NUM_INTS",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"FULL_PRECISION_UV",1);
  return;
}



// FUNCTION 1424cac50 ModifyCompilationEnvironment body=135 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FRecomputeTangentsPerTrianglePassCS<0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MERGE_DUPLICATED_VERTICES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZEX",0x40);
  FUN_141a172f0(param_2,L"INTERMEDIATE_ACCUM_BUFFER_NUM_INTS",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"FULL_PRECISION_UV",0);
  return;
}



// FUNCTION 1424cace0 FUN_1424cace0 body=200 status=ok
// SIG undefined FUN_1424cace0(void)

void FUN_1424cace0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res18 [16];
  longlong local_38 [4];
  longlong *local_18;
  longlong *local_10;
  
  FUN_1424cb370();
  local_38[3] = 2;
  local_38[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],&DAT_1450c759c,4);
  local_38[0] = 0;
  local_38[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"GPUSKIN_APEX_CLOTH",0x26);
  local_18 = local_38;
  local_10 = local_38 + 2;
  FUN_140497620(param_3 + 0x200,local_res18,&local_18,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424cadb0 FUN_1424cadb0 body=200 status=ok
// SIG undefined FUN_1424cadb0(void)

void FUN_1424cadb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res18 [16];
  longlong local_38 [4];
  longlong *local_18;
  longlong *local_10;
  
  FUN_1424cb450();
  local_38[3] = 2;
  local_38[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],&DAT_1450c767c,4);
  local_38[0] = 0;
  local_38[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"GPUSKIN_APEX_CLOTH",0x26);
  local_18 = local_38;
  local_10 = local_38 + 2;
  FUN_140497620(param_3 + 0x200,local_res18,&local_18,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424cae80 ModifyCompilationEnvironment body=131 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TGPUSkinCacheCS<1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_MORPH_BLEND",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_APEX_CLOTH",0);
  FUN_141a172f0(param_2,L"GPUSKIN_RWBUFFER_OFFSET_TANGENT_X",0);
  FUN_141a172f0(param_2,L"GPUSKIN_RWBUFFER_OFFSET_TANGENT_Z",1);
  return;
}



// FUNCTION 1424caf10 ModifyCompilationEnvironment body=131 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TGPUSkinCacheCS<2>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_MORPH_BLEND",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_APEX_CLOTH",1);
  FUN_141a172f0(param_2,L"GPUSKIN_RWBUFFER_OFFSET_TANGENT_X",0);
  FUN_141a172f0(param_2,L"GPUSKIN_RWBUFFER_OFFSET_TANGENT_Z",1);
  return;
}



// FUNCTION 1424cafa0 ModifyCompilationEnvironment body=131 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TGPUSkinCacheCS<4>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_MORPH_BLEND",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_APEX_CLOTH",0);
  FUN_141a172f0(param_2,L"GPUSKIN_RWBUFFER_OFFSET_TANGENT_X",0);
  FUN_141a172f0(param_2,L"GPUSKIN_RWBUFFER_OFFSET_TANGENT_Z",1);
  return;
}



// FUNCTION 1424cb030 ModifyCompilationEnvironment body=134 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TGPUSkinCacheCS<5>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_MORPH_BLEND",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_APEX_CLOTH",0);
  FUN_141a172f0(param_2,L"GPUSKIN_RWBUFFER_OFFSET_TANGENT_X",0);
  FUN_141a172f0(param_2,L"GPUSKIN_RWBUFFER_OFFSET_TANGENT_Z",1);
  return;
}



// FUNCTION 1424cb0c0 ModifyCompilationEnvironment body=134 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TGPUSkinCacheCS<6>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_MORPH_BLEND",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_APEX_CLOTH",1);
  FUN_141a172f0(param_2,L"GPUSKIN_RWBUFFER_OFFSET_TANGENT_X",0);
  FUN_141a172f0(param_2,L"GPUSKIN_RWBUFFER_OFFSET_TANGENT_Z",1);
  return;
}



// FUNCTION 1424cb150 ModifyCompilationEnvironment body=128 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TGPUSkinCacheCS<0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_MORPH_BLEND",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_APEX_CLOTH",0);
  FUN_141a172f0(param_2,L"GPUSKIN_RWBUFFER_OFFSET_TANGENT_X",0);
  FUN_141a172f0(param_2,L"GPUSKIN_RWBUFFER_OFFSET_TANGENT_Z",1);
  return;
}



// FUNCTION 1424cb1d0 FUN_1424cb1d0 body=200 status=ok
// SIG undefined FUN_1424cb1d0(void)

void FUN_1424cb1d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res18 [16];
  longlong local_38 [4];
  longlong *local_18;
  longlong *local_10;
  
  FUN_1424cb370();
  local_38[3] = 2;
  local_38[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],&DAT_1450c750c,4);
  local_38[0] = 0;
  local_38[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"GPUSKIN_MORPH_BLEND",0x28);
  local_18 = local_38;
  local_10 = local_38 + 2;
  FUN_140497620(param_3 + 0x200,local_res18,&local_18,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424cb2a0 FUN_1424cb2a0 body=200 status=ok
// SIG undefined FUN_1424cb2a0(void)

void FUN_1424cb2a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res18 [16];
  longlong local_38 [4];
  longlong *local_18;
  longlong *local_10;
  
  FUN_1424cb450();
  local_38[3] = 2;
  local_38[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],&DAT_1450c733c,4);
  local_38[0] = 0;
  local_38[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"GPUSKIN_MORPH_BLEND",0x28);
  local_18 = local_38;
  local_10 = local_38 + 2;
  FUN_140497620(param_3 + 0x200,local_res18,&local_18,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424cb370 FUN_1424cb370 body=212 status=ok
// SIG undefined FUN_1424cb370(void)

void FUN_1424cb370(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = FUN_1419ef5f0();
  if (iVar2 == 0) {
    lVar5 = 0x4b;
  }
  else {
    lVar5 = 0;
    if (iVar2 - 1U < 3) {
      lVar5 = 0x100;
    }
  }
  FUN_141a172f0(param_3,L"MAX_SHADER_BONES",lVar5);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",1);
  lVar5 = DAT_146af7a40;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar4 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_1424cb408;
  }
  lVar4 = 0;
LAB_1424cb408:
  FUN_141a172f0(param_3,L"GPUSKIN_LIMIT_2BONE_INFLUENCES",*(int *)(lVar4 + lVar5) != 0);
  FUN_141a172f0(param_3,L"GPUSKIN_USE_BRANCH",1);
  return;
}



// FUNCTION 1424cb450 FUN_1424cb450 body=209 status=ok
// SIG undefined FUN_1424cb450(void)

void FUN_1424cb450(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = FUN_1419ef5f0();
  if (iVar2 == 0) {
    lVar5 = 0x4b;
  }
  else {
    lVar5 = 0;
    if (iVar2 - 1U < 3) {
      lVar5 = 0x100;
    }
  }
  FUN_141a172f0(param_3,L"MAX_SHADER_BONES",lVar5);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",0);
  lVar5 = DAT_146af7a40;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar4 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_1424cb4e5;
  }
  lVar4 = 0;
LAB_1424cb4e5:
  FUN_141a172f0(param_3,L"GPUSKIN_LIMIT_2BONE_INFLUENCES",*(int *)(lVar4 + lVar5) != 0);
  FUN_141a172f0(param_3,L"GPUSKIN_USE_BRANCH",1);
  return;
}



// FUNCTION 1424cb530 FUN_1424cb530 body=492 status=ok
// SIG undefined FUN_1424cb530(void)

void FUN_1424cb530(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 local_res18 [16];
  longlong local_58 [4];
  longlong *local_38;
  longlong *local_30;
  
  local_58[1] = 0x14;
  local_58[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_58[0],0x14,"MANUAL_VERTEX_FETCH",0x14,0x3f);
  piVar2 = (int *)TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
                  ::FindId(param_3 + 0x200,local_res18,local_58);
  iVar1 = *piVar2;
  if (local_58[0] != 0) {
    FMemory::Free(local_58[0]);
  }
  if (iVar1 == -1) {
    local_58[2] = 0;
    local_58[3] = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 2,0);
    FGenericPlatformString::Memcpy(local_58[2],&DAT_1450c7c24,4);
    local_58[0] = 0;
    local_58[1] = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"MANUAL_VERTEX_FETCH",0x28);
    local_38 = local_58;
    local_30 = local_58 + 2;
    FUN_140497620(param_3 + 0x200,local_res18,&local_38,0);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_58[2] != 0) {
      FMemory::Free();
    }
  }
  FUN_1424cb720(param_1,param_2,param_3);
  local_58[0] = 0;
  local_58[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],&DAT_1450c7ccc,4);
  local_58[2] = 0;
  local_58[3] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 2,0);
  FGenericPlatformString::Memcpy(local_58[2],L"GPUSKIN_PASS_THROUGH",0x2a);
  local_38 = local_58 + 2;
  local_30 = local_58;
  FUN_140497620(param_3 + 0x200,local_res18,&local_38,0);
  if (local_58[2] != 0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424cb720 FUN_1424cb720 body=233 status=ok
// SIG undefined FUN_1424cb720(void)

void FUN_1424cb720(uint param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 local_res18 [16];
  longlong local_18 [2];
  
  FUN_1404a3a40(param_3,L"VF_SUPPORTS_SPEEDTREE_WIND",&DAT_143f591f0);
  local_18[1] = 0x14;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x14,"MANUAL_VERTEX_FETCH",0x14,0x3f);
  piVar3 = (int *)TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
                  ::FindId(param_3 + 0x200,local_res18,local_18);
  iVar1 = *piVar3;
  if (local_18[0] != 0) {
    FMemory::Free(local_18[0]);
  }
  if ((iVar1 == -1) && ((0x1d < param_1 || ((0x25e2efcaU >> (param_1 & 0x1f) & 1) == 0)))) {
    if ((param_1 < 0x1c) &&
       (((0x8051000U >> (param_1 & 0x1f) & 1) != 0 &&
        (uVar2 = RHIGetShaderLanguageVersion(param_1), uVar2 < 2)))) {
      return;
    }
    FUN_1404a3a40(param_3,L"MANUAL_VERTEX_FETCH",&DAT_143f591f0);
  }
  return;
}



// FUNCTION 1424cb810 FUN_1424cb810 body=43 status=ok
// SIG undefined FUN_1424cb810(void)

void FUN_1424cb810(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"RADIX_SORT_CLEAR_OFFSETS",1);
  SetRadixSortShaderCompilerEnvironment(param_2);
  return;
}



// FUNCTION 1424cb840 ModifyCompilationEnvironment body=114 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FRadixSortDownsweepCS::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"RADIX_SORT_DOWNSWEEP",1);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  SetRadixSortShaderCompilerEnvironment(param_2);
  return;
}



// FUNCTION 1424cb8c0 FUN_1424cb8c0 body=43 status=ok
// SIG undefined FUN_1424cb8c0(void)

void FUN_1424cb8c0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"RADIX_SORT_SPINE",1);
  SetRadixSortShaderCompilerEnvironment(param_2);
  return;
}



// FUNCTION 1424cb8f0 FUN_1424cb8f0 body=43 status=ok
// SIG undefined FUN_1424cb8f0(void)

void FUN_1424cb8f0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"RADIX_SORT_UPSWEEP",1);
  SetRadixSortShaderCompilerEnvironment(param_2);
  return;
}



// FUNCTION 1424cb920 ModifyCompilationEnvironment body=130 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FRecomputeTangentsPerVertexPassCS::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GPUSKIN_USE_EXTRA_INFLUENCES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZEX",0x40);
  FUN_141a172f0(param_2,L"GPUSKIN_RWBUFFER_OFFSET_TANGENT_X",0);
  FUN_141a172f0(param_2,L"GPUSKIN_RWBUFFER_OFFSET_TANGENT_Z",1);
  FUN_141a172f0(param_2,L"INTERMEDIATE_ACCUM_BUFFER_NUM_INTS",8);
  return;
}



// FUNCTION 1424cb9b0 OldDecompressScanline body=182 status=ok
// SIG undefined OldDecompressScanline(void)

void FHDRLoadHelper::OldDecompressScanline(char *param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  char *pcVar5;
  int iVar6;
  byte bVar7;
  
  bVar7 = 0;
  while (param_3 != 0) {
    pcVar5 = (char *)*param_2;
    cVar1 = *pcVar5;
    *param_2 = pcVar5 + 1;
    cVar2 = pcVar5[1];
    *param_2 = pcVar5 + 2;
    cVar3 = pcVar5[2];
    *param_2 = pcVar5 + 3;
    bVar4 = pcVar5[3];
    *param_2 = pcVar5 + 4;
    *param_1 = cVar1;
    param_1[1] = cVar2;
    param_1[2] = cVar3;
    param_1[3] = bVar4;
    param_1 = param_1 + 4;
    if (((cVar1 == '\x01') && (cVar2 == '\x01')) && (cVar3 == '\x01')) {
      for (iVar6 = (uint)bVar4 << (bVar7 & 0x1f); 0 < iVar6; iVar6 = iVar6 + -1) {
        param_1[0] = '\x01';
        param_1[1] = '\x01';
        param_3 = param_3 + -1;
        param_1[2] = '\x01';
        param_1[3] = bVar4;
        param_1 = param_1 + 4;
      }
      bVar7 = bVar7 + 8;
    }
    else {
      bVar7 = 0;
      param_3 = param_3 + -1;
    }
  }
  return;
}



// FUNCTION 1424cba70 FUN_1424cba70 body=367 status=ok
// SIG undefined FUN_1424cba70(void)

void FUN_1424cba70(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  
  if ((*(byte *)(param_1 + 1) & 0x30) != 0) goto LAB_1424cbb73;
  bVar5 = false;
  if ((*(byte *)(param_1 + 0x116) & 1) != 0) {
    if (param_1[0x24] == 0) {
      lVar4 = FUN_1423407b0();
      if (lVar4 == 0) goto LAB_1424cbb02;
    }
    lVar4 = param_1[0x24];
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    cVar3 = UWorld::IsGameWorld(lVar4);
    if (cVar3 != '\0') {
      fVar6 = *DAT_146af9e80;
      if (0.0 <= fVar6) {
        if (1.0 <= fVar6) {
          fVar6 = 1.0;
        }
      }
      else {
        fVar6 = 0.0;
      }
      bVar5 = fVar6 < 1.0;
      *(float *)((longlong)param_1 + 0x8b4) = fVar6;
    }
  }
LAB_1424cbb02:
  if (*(float *)((longlong)param_1 + 0x8b4) == 0.0) {
    (**(code **)(*param_1 + 0x9a0))(param_1);
  }
  else {
    if (bVar5 == false) {
      lVar4 = param_1[0x102];
      param_1[0x102] = 0;
      FUN_1424fbbf0(param_1,1,lVar4,0);
      *(undefined4 *)((longlong)param_1 + 0x864) =
           *(undefined4 *)(*(longlong *)(param_1[0xfd] + 0x120) + 0x30);
      *(int *)(param_1 + 0x11f) = (int)param_1[0x10c];
    }
    FUN_1424bd460(param_1,1,bVar5);
  }
LAB_1424cbb73:
  plVar1 = (longlong *)param_1[0x102];
  param_1[0x102] = 0;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)plVar1[4];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)plVar1[2];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    FMemory::operator_delete(plVar1,0x38);
    return;
  }
  return;
}



// FUNCTION 1424cbbe0 FUN_1424cbbe0 body=1849 status=ok
// SIG undefined FUN_1424cbbe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424cbbe0(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
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
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  float *pfVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar20 [16];
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
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined4 local_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
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
  undefined1 local_128 [28];
  undefined1 local_10c [36];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if (param_2 == -1) {
    *(undefined8 *)(param_1 + 0x908) = _DAT_1468b5d90;
    uVar13 = DAT_1468b5d98;
    *(undefined4 *)(param_1 + 0x910) = DAT_1468b5d98;
    *(undefined8 *)(param_1 + 0x8fc) = *(undefined8 *)(param_1 + 0x908);
    *(undefined4 *)(param_1 + 0x904) = uVar13;
    *(undefined1 *)(param_1 + 0x914) = 0;
    FUN_142252d00();
  }
  else if ((*(longlong *)(param_1 + 0x728) != 0) &&
          (uVar13 = FUN_142250c70(), fVar37 = fRam0000000146af9f38, fVar35 = fRam0000000146af9f34,
          fVar31 = _DAT_146af9f30, fVar51 = fRam0000000146af9d18, fVar50 = fRam0000000146af9d14,
          fVar49 = _DAT_146af9d10, (char)uVar13 != '\0')) {
    fVar19 = *(float *)(param_1 + 0x210);
    fVar28 = *(float *)(param_1 + 0x214);
    fVar21 = *(float *)(param_1 + 0x218);
    fVar22 = *(float *)(param_1 + 0x21c);
    auVar17 = *(undefined1 (*) [16])(param_1 + 0x230);
    fVar2 = auVar17._0_4_;
    fVar4 = auVar17._4_4_;
    fVar6 = auVar17._8_4_;
    fVar8 = auVar17._12_4_;
    pfVar16 = (float *)((longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x7a8));
    auVar1 = *(undefined1 (*) [16])(pfVar16 + 8);
    fVar3 = auVar1._0_4_;
    fVar5 = auVar1._4_4_;
    fVar7 = auVar1._8_4_;
    fVar23 = *pfVar16;
    fVar24 = pfVar16[1];
    fVar9 = pfVar16[2];
    fVar39 = pfVar16[3];
    fVar46 = pfVar16[4];
    fVar47 = pfVar16[5];
    fVar48 = pfVar16[6];
    auVar17 = minps(auVar1,auVar17);
    auVar18._4_4_ = -(uint)(auVar17._4_4_ < fRam0000000146af9f34);
    auVar18._0_4_ = -(uint)(auVar17._0_4_ < _DAT_146af9f30);
    auVar18._8_4_ = -(uint)(auVar17._8_4_ < fRam0000000146af9f38);
    auVar18._12_4_ = -(uint)(auVar17._12_4_ < fRam0000000146af9f3c);
    iVar14 = movmskps(uVar13,auVar18);
    if (iVar14 == 0) {
      fVar46 = fVar46 * fVar2;
      fVar47 = fVar47 * fVar4;
      fVar48 = fVar48 * fVar6;
      fVar35 = pfVar16[7] * fVar8;
      local_e8 = fVar39 * fVar19 * _DAT_146af9f10 + fVar23 * fVar22 +
                 fVar9 * fVar28 * _DAT_146af9f00 + fVar24 * fVar21 * _DAT_146af9ef0;
      fStack_e4 = fVar9 * fVar19 * fRam0000000146af9f14 + fVar24 * fVar22 +
                  fVar39 * fVar28 * fRam0000000146af9f04 + fVar23 * fVar21 * fRam0000000146af9ef4;
      fStack_e0 = fVar24 * fVar19 * fRam0000000146af9f18 + fVar9 * fVar22 +
                  fVar23 * fVar28 * fRam0000000146af9f08 + fVar39 * fVar21 * fRam0000000146af9ef8;
      fStack_dc = fVar23 * fVar19 * fRam0000000146af9f1c + fVar39 * fVar22 +
                  fVar24 * fVar28 * fRam0000000146af9f0c + fVar9 * fVar21 * fRam0000000146af9efc;
      fVar49 = fVar48 * fVar28 - fVar47 * fVar21;
      fVar50 = fVar46 * fVar21 - fVar48 * fVar19;
      fVar51 = fVar47 * fVar19 - fVar46 * fVar28;
      fVar31 = fVar35 * fVar22 - fVar35 * fVar22;
      fVar49 = fVar49 + fVar49;
      fVar50 = fVar50 + fVar50;
      fVar51 = fVar51 + fVar51;
      fVar31 = fVar31 + fVar31;
      local_d8._4_4_ =
           (fVar49 * fVar21 - fVar51 * fVar19) + fVar50 * fVar22 + fVar47 +
           *(float *)(param_1 + 0x224);
      local_d8._0_4_ =
           (fVar51 * fVar28 - fVar50 * fVar21) + fVar49 * fVar22 + fVar46 +
           *(float *)(param_1 + 0x220);
      fStack_d0 = (fVar50 * fVar19 - fVar49 * fVar28) + fVar51 * fVar22 + fVar48 +
                  *(float *)(param_1 + 0x228);
      fStack_cc = (fVar31 * fVar22 - fVar31 * fVar22) + fVar31 * fVar22 + fVar35 +
                  *(float *)(param_1 + 0x22c);
    }
    else {
      fVar10 = *(float *)(param_1 + 0x220);
      fVar11 = *(float *)(param_1 + 0x224);
      fVar12 = *(float *)(param_1 + 0x228);
      fVar25 = fVar28 + fVar28;
      fVar29 = fVar21 + fVar21;
      fVar32 = fVar19 * (fVar19 + fVar19);
      fVar26 = (fVar19 + fVar19) * fVar22;
      fVar27 = fVar24 + fVar24;
      fVar30 = fVar9 + fVar9;
      fVar43 = (fVar29 * fVar22 + fVar25 * fVar19) * fVar2;
      fVar44 = (fVar26 + fVar29 * fVar28) * fVar4;
      fVar45 = (fVar25 * fVar22 + fVar29 * fVar19) * fVar6;
      fVar34 = fVar4 * (fVar25 * fVar19 - fVar29 * fVar22);
      fVar36 = fVar6 * (fVar29 * fVar28 - fVar26);
      fVar38 = fVar2 * (fVar29 * fVar19 - fVar25 * fVar22);
      fVar33 = fVar23 * (fVar23 + fVar23);
      fVar19 = (float)((uint)((_DAT_146af9d10 - (fVar21 * fVar29 + fVar28 * fVar25)) * fVar2) &
                      _DAT_146af7650);
      fVar21 = (float)((uint)((fRam0000000146af9d14 - (fVar21 * fVar29 + fVar32)) * fVar4) &
                      uRam0000000146af7654);
      fVar25 = (float)((uint)((fRam0000000146af9d18 - (fVar28 * fVar25 + fVar32)) * fVar6) &
                      uRam0000000146af7658);
      fVar26 = (float)((uint)((fRam0000000146af9d1c - (fVar32 + fVar32)) * fVar8) &
                      uRam0000000146af765c);
      fVar28 = (fVar23 + fVar23) * fVar39;
      fVar40 = (fVar30 * fVar39 + fVar27 * fVar23) * fVar3;
      fVar41 = (fVar28 + fVar30 * fVar24) * fVar5;
      fVar42 = (fVar27 * fVar39 + fVar30 * fVar23) * fVar7;
      fVar29 = fVar5 * (fVar27 * fVar23 - fVar30 * fVar39);
      fVar32 = fVar7 * (fVar30 * fVar24 - fVar28);
      fVar39 = fVar3 * (fVar30 * fVar23 - fVar27 * fVar39);
      fVar28 = (float)((uint)((_DAT_146af9d10 - (fVar9 * fVar30 + fVar24 * fVar27)) * fVar3) &
                      _DAT_146af7650);
      fVar22 = (float)((uint)((fRam0000000146af9d14 - (fVar9 * fVar30 + fVar33)) * fVar5) &
                      uRam0000000146af7654);
      fVar23 = (float)((uint)((fRam0000000146af9d18 - (fVar24 * fVar27 + fVar33)) * fVar7) &
                      uRam0000000146af7658);
      fVar24 = (float)((uint)((fRam0000000146af9d1c - (fVar33 + fVar33)) * auVar1._12_4_) &
                      uRam0000000146af765c);
      local_168 = fVar40 * fVar34 + fVar28 * fVar19 + fVar39 * fVar45 + fVar24 * fVar10;
      fStack_164 = fVar40 * fVar21 + fVar28 * fVar43 + fVar39 * fVar36 + fVar24 * fVar11;
      fStack_160 = fVar40 * fVar44 + fVar28 * fVar38 + fVar39 * fVar25 + fVar24 * fVar12;
      fStack_15c = fVar40 * fVar26 + fVar28 * fVar26 + fVar39 * fVar26 +
                   fVar24 * fRam0000000146af9d1c;
      local_158 = fVar22 * fVar34 + fVar29 * fVar19 + fVar41 * fVar45 + fVar24 * fVar10;
      fStack_154 = fVar22 * fVar21 + fVar29 * fVar43 + fVar41 * fVar36 + fVar24 * fVar11;
      fStack_150 = fVar22 * fVar44 + fVar29 * fVar38 + fVar41 * fVar25 + fVar24 * fVar12;
      fStack_14c = fVar22 * fVar26 + fVar29 * fVar26 + fVar41 * fVar26 +
                   fVar24 * fRam0000000146af9d1c;
      local_148 = fVar32 * fVar34 + fVar42 * fVar19 + fVar23 * fVar45 + fVar24 * fVar10;
      fStack_144 = fVar32 * fVar21 + fVar42 * fVar43 + fVar23 * fVar36 + fVar24 * fVar11;
      fStack_140 = fVar32 * fVar44 + fVar42 * fVar38 + fVar23 * fVar25 + fVar24 * fVar12;
      fStack_13c = fVar32 * fVar26 + fVar42 * fVar26 + fVar23 * fVar26 +
                   fVar24 * fRam0000000146af9d1c;
      local_138 = fVar47 * fVar34 + fVar46 * fVar19 + fVar48 * fVar45 +
                  fRam0000000146af9d1c * fVar10;
      fStack_134 = fVar47 * fVar21 + fVar46 * fVar43 + fVar48 * fVar36 +
                   fRam0000000146af9d1c * fVar11;
      fStack_130 = fVar47 * fVar44 + fVar46 * fVar38 + fVar48 * fVar25 +
                   fRam0000000146af9d1c * fVar12;
      fStack_12c = fVar47 * fVar26 + fVar46 * fVar26 + fVar48 * fVar26 +
                   fRam0000000146af9d1c * fRam0000000146af9d1c;
      FMatrix::RemoveScaling(&local_168);
      fVar49 = (float)(-(uint)(fVar31 <= fVar2 * fVar3) & (_DAT_146af9f20 ^ (uint)fVar49) ^
                      _DAT_146af9f20);
      fVar50 = (float)(-(uint)(fVar35 <= fVar4 * fVar5) & (uRam0000000146af9f24 ^ (uint)fVar50) ^
                      uRam0000000146af9f24);
      fVar51 = (float)(-(uint)(fVar37 <= fVar6 * fVar7) & (uRam0000000146af9f28 ^ (uint)fVar51) ^
                      uRam0000000146af9f28);
      local_168 = local_168 * fVar49;
      fStack_160 = fStack_160 * fVar49;
      fStack_164 = fStack_164 * fVar49;
      fStack_150 = fStack_150 * fVar50;
      fStack_154 = fStack_154 * fVar50;
      local_158 = local_158 * fVar50;
      fStack_140 = fStack_140 * fVar51;
      local_148 = local_148 * fVar51;
      fStack_144 = fStack_144 * fVar51;
      FQuat::FQuat(&local_188,&local_168);
      local_198 = 0x322bcc77;
      auVar20._0_4_ = local_188 * local_188 + fStack_180 * fStack_180;
      auVar20._4_4_ = fStack_184 * fStack_184 + fStack_17c * fStack_17c;
      auVar20._8_4_ = fStack_180 * fStack_180 + local_188 * local_188;
      auVar20._12_4_ = fStack_17c * fStack_17c + fStack_184 * fStack_184;
      fVar35 = auVar20._4_4_ + auVar20._0_4_;
      fVar37 = auVar20._8_4_ + auVar20._4_4_;
      fVar19 = auVar20._12_4_ + auVar20._8_4_;
      fVar28 = auVar20._0_4_ + auVar20._12_4_;
      auVar17._4_4_ = fVar37;
      auVar17._0_4_ = fVar35;
      auVar17._8_4_ = fVar19;
      auVar17._12_4_ = fVar28;
      auVar17 = rsqrtps(auVar20,auVar17);
      fVar49 = auVar17._0_4_;
      fVar50 = auVar17._4_4_;
      fVar51 = auVar17._8_4_;
      fVar31 = auVar17._12_4_;
      fVar49 = (_DAT_146af9ce0 - fVar49 * fVar49 * fVar35 * _DAT_146af9ce0) * fVar49 + fVar49;
      fVar50 = (fRam0000000146af9ce4 - fVar50 * fVar50 * fVar37 * fRam0000000146af9ce4) * fVar50 +
               fVar50;
      fVar51 = (fRam0000000146af9ce8 - fVar51 * fVar51 * fVar19 * fRam0000000146af9ce8) * fVar51 +
               fVar51;
      fVar31 = (fRam0000000146af9cec - fVar31 * fVar31 * fVar28 * fRam0000000146af9cec) * fVar31 +
               fVar31;
      local_d8._4_4_ = fStack_134;
      local_d8._0_4_ = local_138;
      fStack_d0 = fStack_130;
      local_e8 = (float)(((uint)(((_DAT_146af9ce0 - fVar49 * fVar49 * fVar35 * _DAT_146af9ce0) *
                                  fVar49 + fVar49) * local_188) ^ _DAT_146af9cd0) &
                         -(uint)(1e-08 <= fVar35) ^ _DAT_146af9cd0);
      fStack_e4 = (float)(((uint)(((fRam0000000146af9ce4 -
                                   fVar50 * fVar50 * fVar37 * fRam0000000146af9ce4) * fVar50 +
                                  fVar50) * fStack_184) ^ uRam0000000146af9cd4) &
                          -(uint)(1e-08 <= fVar37) ^ uRam0000000146af9cd4);
      fStack_e0 = (float)(((uint)(((fRam0000000146af9ce8 -
                                   fVar51 * fVar51 * fVar19 * fRam0000000146af9ce8) * fVar51 +
                                  fVar51) * fStack_180) ^ uRam0000000146af9cd8) &
                          -(uint)(1e-08 <= fVar19) ^ uRam0000000146af9cd8);
      fStack_dc = (float)(((uint)(((fRam0000000146af9cec -
                                   fVar31 * fVar31 * fVar28 * fRam0000000146af9cec) * fVar31 +
                                  fVar31) * fStack_17c) ^ uRam0000000146af9cdc) &
                          -(uint)(1e-08 <= fVar28) ^ uRam0000000146af9cdc);
      fStack_cc = 0.0;
    }
    fStack_bc = fVar8 * auVar1._12_4_;
    fStack_c0 = fVar6 * fVar7;
    fStack_c4 = fVar4 * fVar5;
    local_c8 = fVar2 * fVar3;
    uVar15 = UStaticMesh::GetBounds(*(undefined8 *)(param_1 + 0x728),local_128);
    pfVar16 = (float *)FBoxSphereBounds::TransformBy(uVar15,local_10c,&local_e8);
    fVar31 = *pfVar16 + pfVar16[3];
    fVar35 = pfVar16[1] + pfVar16[4];
    fVar49 = *pfVar16 - pfVar16[3];
    fVar50 = pfVar16[1] - pfVar16[4];
    fVar37 = pfVar16[2] + pfVar16[5];
    fVar51 = pfVar16[2] - pfVar16[5];
    local_170 = CONCAT31(local_170._1_3_,1);
    if (*(char *)(param_1 + 0x914) == '\0') {
      *(ulonglong *)(param_1 + 0x8fc) = CONCAT44(fVar50,fVar49);
      *(ulonglong *)(param_1 + 0x904) = CONCAT44(fVar31,fVar51);
      *(ulonglong *)(param_1 + 0x90c) = CONCAT44(fVar37,fVar35);
      *(undefined4 *)(param_1 + 0x914) = local_170;
    }
    else {
      if (*(float *)(param_1 + 0x8fc) <= fVar49) {
        fVar49 = *(float *)(param_1 + 0x8fc);
      }
      if (*(float *)(param_1 + 0x900) <= fVar50) {
        fVar50 = *(float *)(param_1 + 0x900);
      }
      if (*(float *)(param_1 + 0x904) <= fVar51) {
        fVar51 = *(float *)(param_1 + 0x904);
      }
      if (fVar31 <= *(float *)(param_1 + 0x908)) {
        fVar31 = *(float *)(param_1 + 0x908);
      }
      if (fVar35 <= *(float *)(param_1 + 0x90c)) {
        fVar35 = *(float *)(param_1 + 0x90c);
      }
      if (fVar37 <= *(float *)(param_1 + 0x910)) {
        fVar37 = *(float *)(param_1 + 0x910);
      }
      *(float *)(param_1 + 0x8fc) = fVar49;
      *(float *)(param_1 + 0x900) = fVar50;
      *(float *)(param_1 + 0x904) = fVar51;
      *(float *)(param_1 + 0x908) = fVar31;
      *(float *)(param_1 + 0x90c) = fVar35;
      *(float *)(param_1 + 0x910) = fVar37;
    }
  }
  return;
}



// FUNCTION 1424cc320 PointInTriangle body=989 status=ok
// SIG undefined PointInTriangle(void)

undefined8
FGeomTools::PointInTriangle
          (float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar11 = *param_1;
  fVar10 = param_1[2];
  fVar8 = *param_2 - fVar11;
  fVar12 = param_1[1];
  fVar4 = param_2[2] - fVar10;
  fVar6 = param_2[1] - fVar12;
  if ((uint)((fVar4 * (*param_4 - fVar11) - fVar8 * (param_4[2] - fVar10)) *
             ((fVar1 - fVar11) * fVar4 - fVar8 * (fVar3 - fVar10)) +
             (fVar6 * (param_4[2] - fVar10) - fVar4 * (param_4[1] - fVar12)) *
             (fVar6 * (fVar3 - fVar10) - fVar4 * (fVar2 - fVar12)) +
             (fVar8 * (param_4[1] - fVar12) - fVar6 * (*param_4 - fVar11)) *
             (fVar8 * (fVar2 - fVar12) - (fVar1 - fVar11) * fVar6) + param_5) < 0x80000000) {
    fVar4 = param_2[1];
    fVar6 = param_2[2];
    fVar7 = param_3[1] - fVar4;
    fVar8 = *param_2;
    fVar5 = param_3[2] - fVar6;
    fVar9 = *param_3 - fVar8;
    if ((uint)((fVar7 * (param_4[2] - fVar6) - fVar5 * (param_4[1] - fVar4)) *
               (fVar7 * (fVar10 - fVar6) - fVar5 * (fVar12 - fVar4)) +
               (fVar5 * (*param_4 - fVar8) - fVar9 * (param_4[2] - fVar6)) *
               (fVar5 * (fVar11 - fVar8) - fVar9 * (fVar10 - fVar6)) +
               (fVar9 * (param_4[1] - fVar4) - fVar7 * (*param_4 - fVar8)) *
               (fVar9 * (fVar12 - fVar4) - fVar7 * (fVar11 - fVar8)) + param_5) < 0x80000000) {
      fVar12 = fVar12 - fVar2;
      fVar10 = fVar10 - fVar3;
      fVar11 = fVar11 - fVar1;
      if ((uint)((fVar12 * (param_4[2] - fVar3) - fVar10 * (param_4[1] - fVar2)) *
                 (fVar12 * (param_2[2] - fVar3) - fVar10 * (param_2[1] - fVar2)) +
                 (fVar10 * (*param_4 - fVar1) - fVar11 * (param_4[2] - fVar3)) *
                 (fVar10 * (*param_2 - fVar1) - fVar11 * (param_2[2] - fVar3)) +
                 (fVar11 * (param_4[1] - fVar2) - fVar12 * (*param_4 - fVar1)) *
                 (fVar11 * (param_2[1] - fVar2) - fVar12 * (*param_2 - fVar1)) + param_5) <
          0x80000000) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1424cc700 PostDuplicate body=56 status=ok
// SIG undefined PostDuplicate(void)

void UHierarchicalInstancedStaticMeshComponent::PostDuplicate(longlong param_1,char param_2)

{
  UInstancedStaticMeshComponent::PostDuplicate();
  if (((*(byte *)(param_1 + 8) & 0x30) == 0) && (param_2 != '\0')) {
    FUN_1424bd460(param_1,0,0);
  }
  return;
}



// FUNCTION 1424cc740 FUN_1424cc740 body=81 status=ok
// SIG undefined FUN_1424cc740(void)

void FUN_1424cc740(longlong param_1,int param_2)

{
  FUN_1424fff40();
  if (*(int *)(param_1 + 0x7d4) < *(int *)(param_1 + 2000) + param_2) {
    TArray<float,FDefaultAllocator>::ResizeTo();
  }
  if (*(int *)(param_1 + 0x8ac) < *(int *)(param_1 + 0x8a8) + param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo();
  }
  return;
}



// FUNCTION 1424cc7a0 FUN_1424cc7a0 body=86 status=ok
// SIG undefined FUN_1424cc7a0(void)

void FUN_1424cc7a0(longlong param_1,longlong param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((((param_2 != 0) || (*(int *)(param_1 + 0x860) != *(int *)(param_1 + 0x7b0))) &&
      (*(longlong *)(param_1 + 0x728) != 0)) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x728) + 8) >> 10 & 1) == 0)) {
    FUN_1417510e0();
    FUN_1424bc050(param_1);
  }
  return;
}



// FUNCTION 1424cc800 PrintLevel body=170 status=ok
// SIG undefined PrintLevel(void)

char PrintLevel(longlong *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  
  lVar3 = (longlong)param_2 * 0x40 + *param_1;
  if (param_3 != param_4) {
    iVar2 = *(int *)(lVar3 + 0xc);
    if (iVar2 < 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\0';
      if (iVar2 <= *(int *)(lVar3 + 0x1c)) {
        do {
          cVar1 = PrintLevel(param_1,iVar2,param_3,param_4 + 1,param_2);
          if ((cVar1 != '\0') || (cVar4 != '\0')) {
            cVar4 = '\x01';
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 <= *(int *)(lVar3 + 0x1c));
      }
    }
    return cVar4;
  }
  return '\x01';
}



// FUNCTION 1424cc8b0 FUN_1424cc8b0 body=2213 status=ok
// SIG undefined FUN_1424cc8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424cc8b0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,longlong *param_6,longlong param_7,longlong param_8,
                  longlong *param_9,undefined8 *param_10,undefined4 param_11,undefined4 param_12,
                  int param_13,longlong *param_14)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int *piVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  float fVar24;
  undefined1 auStack_268 [32];
  longlong local_248;
  undefined8 *local_240;
  undefined4 local_238;
  undefined4 local_230;
  longlong local_228;
  undefined8 local_220;
  int local_218;
  undefined4 local_214;
  undefined4 local_210;
  longlong local_208;
  longlong *local_200;
  undefined **local_1f8;
  undefined **local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  int local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  longlong *local_180;
  undefined8 local_178;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [64];
  undefined8 local_118;
  undefined ***local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_210 = *(undefined4 *)(param_5 + 0x38);
  local_200 = param_6;
  local_1c8 = param_7;
  local_180 = param_9;
  local_188 = param_14;
  local_208 = param_3;
  local_1a8 = param_4;
  local_178 = param_2;
  FUN_1419f0c40(param_3,local_d8,1);
  local_214 = *(undefined4 *)(param_5 + 0x10);
  plVar16 = (longlong *)param_6[8];
  local_1d0 = (**(code **)(*param_6 + 0x58))(param_6);
  uVar22 = 0;
  local_1b0 = *(longlong **)(*plVar16 + (longlong)local_1d0 * 8);
  if (*(int *)(param_1 + 0x40) < DAT_146af9f90) {
    *(int *)(param_1 + 0x40) = DAT_146af9f90;
    uVar15 = uVar22;
    uVar21 = uVar22;
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        uVar19 = (int)uVar21 + 1;
        *(undefined4 *)(*(longlong *)(uVar15 + *(longlong *)(param_1 + 0x20)) + 0x60) = 0xffffffff;
        uVar15 = uVar15 + 8;
        uVar21 = (ulonglong)uVar19;
      } while ((int)uVar19 < *(int *)(param_1 + 0x28));
    }
    if (0 < *(int *)(param_1 + 0x50)) {
      lVar23 = 0;
      do {
        plVar16 = (longlong *)(*(longlong *)(param_1 + 0x48) + lVar23);
        if (*plVar16 != 0) {
          piVar1 = (int *)(*plVar16 + 8);
          LOCK();
          iVar8 = *piVar1;
          if (iVar8 == 0) {
            *piVar1 = 0;
            iVar8 = 0;
          }
          UNLOCK();
          if ((iVar8 == 1) && (lVar11 = *plVar16, *(char *)(lVar11 + 0x11) != '\0')) {
            if (DAT_146ab62f3 != '\0') {
              (**(code **)(*DAT_146ab6358 + 0x6a8))();
            }
            *(undefined1 *)(lVar11 + 0x11) = 0;
          }
        }
        *(undefined4 *)(plVar16 + 3) = 0;
        TRefCountPtr<FRHIIndexBuffer>::operator=(plVar16);
        TRefCountPtr<FRHITexture>::operator=(plVar16 + 1);
        TRefCountPtr<FRHIIndexBuffer>::operator=(plVar16 + 2);
        uVar19 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar19;
        lVar23 = lVar23 + 0x28;
        param_9 = local_180;
        param_14 = local_188;
        param_7 = local_1c8;
      } while ((int)uVar19 < *(int *)(param_1 + 0x50));
    }
    FUN_1424d2070(param_1 + 0x48,0,0);
    param_6 = local_200;
  }
  puVar17 = (undefined8 *)*param_14;
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
    lVar23 = local_208;
LAB_1424ccb1c:
    if (puVar17 != (undefined8 *)0x0) goto LAB_1424cccc9;
  }
  else {
    if ((longlong *)puVar17[6] == param_6) {
      iVar8 = (**(code **)(*(longlong *)puVar17[6] + 0x58))();
      lVar23 = local_208;
      piVar1 = (int *)(puVar17 + 0xc);
      puVar17 = (undefined8 *)*param_14;
      if (iVar8 == *piVar1) {
        lVar11 = (longlong)param_13 * 0x140;
        if ((*(int *)(lVar11 + 0x40 + puVar17[4]) != param_13) ||
           (*(longlong *)(lVar11 + 0x20 + puVar17[4]) != local_208)) {
          local_220 = local_1a8;
          local_228 = local_208;
          local_230 = local_214;
          local_238 = local_210;
          local_240 = (undefined8 *)param_8;
          local_248 = param_7;
          FUN_1424d3a70(puVar17,param_13,*puVar17,(longlong)param_13 * 0x108 + *local_1b0);
          puVar17 = (undefined8 *)*param_14;
        }
        goto LAB_1424ccb1c;
      }
    }
    if (puVar17 != (undefined8 *)0x0) {
      FUN_1424cdf70(puVar17);
    }
    *param_14 = 0;
    lVar23 = local_208;
  }
  iVar8 = *(int *)(lVar23 + 0x6b0);
  iVar20 = DAT_146532be4;
  if (0 < DAT_146af7638) {
    iVar20 = 1;
  }
  uVar22 = (ulonglong)(uint)(iVar8 * 8);
  if (iVar20 < 1) {
    uVar22 = 0;
  }
  lVar23 = uVar22 + (uint)(iVar8 * 0x18);
  if (*(char *)(param_1 + 0x44) != '\0') {
    lVar11 = 0;
    fVar24 = DAT_146532bf0 * 1024.0 * 1024.0;
    if ((9.223372e+18 <= fVar24) && (fVar24 = fVar24 - 9.223372e+18, fVar24 < 9.223372e+18)) {
      lVar11 = -0x8000000000000000;
    }
    if ((ulonglong)((longlong)fVar24 + lVar11) <=
        (ulonglong)(*(longlong *)(param_1 + 0x30) + lVar23)) {
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + lVar23;
      return;
    }
  }
  lVar12 = operator_new(0x80);
  lVar11 = 0;
  if (lVar12 != 0) {
    lVar11 = FUN_1424b4fc0(lVar12,iVar8,0 < iVar20);
  }
  local_218 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = local_218 + 1;
  if (*(int *)(param_1 + 0x1c) < local_218 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,local_218);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)local_218 * 8) = lVar11;
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + lVar23;
  if (lVar11 == 0) {
    return;
  }
  lVar12 = operator_new(0x68);
  plVar16 = local_200;
  lVar23 = 0;
  if (lVar12 != 0) {
    lVar23 = FUN_1424b4170(lVar12,param_1,local_200,lVar11);
  }
  *param_14 = lVar23;
  *(longlong **)(lVar23 + 0x30) = plVar16;
  local_220 = local_1a8;
  local_228 = local_208;
  local_230 = local_214;
  local_238 = local_210;
  local_240 = (undefined8 *)param_8;
  local_248 = local_1c8;
  FUN_1424d3a70(*param_14,param_13,lVar11,(longlong)param_13 * 0x108 + *local_1b0);
  iVar8 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar8 + 1;
  if (*(int *)(param_1 + 0x2c) < iVar8 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar8);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8) = *param_14;
LAB_1424cccc9:
  if (local_1c8 != 0) {
    piVar14 = *(int **)(local_1c8 + 0x40);
    piVar1 = piVar14 + *(int *)(local_1c8 + 0x48);
    for (; piVar14 != piVar1; piVar14 = piVar14 + 1) {
      if (*piVar14 == param_13) {
        *(undefined8 *)(*param_14 + 0x48) = *(undefined8 *)(local_1c8 + 0x50);
        *(undefined4 *)(*(longlong *)(*param_14 + 0x20) + 0x7c + (longlong)param_13 * 0x140) =
             *(undefined4 *)(param_5 + 0x10);
        lVar23 = FUN_1427dcb60(local_200,local_1d0);
        iVar8 = *(int *)(lVar23 + 0x58);
        *(uint *)(*(longlong *)(*param_14 + 0x20) + 0x78 + (longlong)param_13 * 0x140) =
             (uint)(*(int *)(param_5 + 0x10) * iVar8) >> 2;
        *(int *)(*param_14 + 0x38) = iVar8;
        TRefCountPtr<FRHIIndexBuffer>::operator=(*param_14 + 0x40,*(undefined8 *)(lVar23 + 0x38));
        uVar10 = 1;
        goto LAB_1424cccfb;
      }
    }
  }
  uVar10 = 0;
LAB_1424cccfb:
  local_1e8 = 0;
  local_1f8 = &PTR_FUN_1450cd7b8;
  local_1e0 = 0;
  local_1f0 = &PTR_GetBoundProgramCounterForTimerManager_1450cd7f0;
  local_1d8 = 1;
  local_198 = 0;
  uStack_190 = 0;
  if (param_8 != 0) {
    local_1a0 = *(longlong *)(param_8 + 0x38);
    if (local_1a0 != 0) {
      LOCK();
      *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(*param_14 + 0x50,&local_1a0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
    uVar19 = *(uint *)(param_9 + 1);
    if ((uint)local_1e0 < uVar19) {
      uVar9 = (uint)local_1e0;
      iVar8 = local_1e0._4_4_;
      if (local_1e0._4_4_ < (int)uVar19) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (&local_1e8,uVar19);
        uVar9 = (uint)local_1e0;
        iVar8 = local_1e0._4_4_;
      }
      local_1e0 = CONCAT44(local_1e0._4_4_,uVar19);
      if (iVar8 < (int)uVar19) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_1e8,uVar9);
      }
    }
    else if ((uVar19 < (uint)local_1e0) && (iVar8 = (uint)local_1e0 - uVar19, iVar8 != 0)) {
      iVar20 = ((uint)local_1e0 - iVar8) - uVar19;
      if (iVar20 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(local_1e8 + (longlong)(int)uVar19 * 0x18),
                   (void *)(local_1e8 + (longlong)(int)(iVar8 + uVar19) * 0x18),
                   (longlong)iVar20 * 0x18);
      }
      local_1e0 = CONCAT44(local_1e0._4_4_,(uint)local_1e0 - iVar8);
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(&local_1e8);
    }
    lVar23 = 0;
    iVar8 = 0;
    if (0 < (int)param_9[1]) {
      do {
        lVar11 = lVar23 + 0xc;
        puVar3 = (undefined4 *)(*param_9 + -0xc + lVar11);
        uVar10 = puVar3[1];
        uStack_168 = *(undefined4 *)(*param_9 + -4 + lVar11);
        uVar4 = *(undefined8 *)(lVar23 + param_9[2]);
        uStack_15c = *(undefined4 *)(lVar23 + 8 + param_9[2]);
        uStack_164 = (undefined4)uVar4;
        uStack_160 = (undefined4)((ulonglong)uVar4 >> 0x20);
        iVar20 = iVar8 + 1;
        puVar2 = (undefined4 *)((ulonglong)(uint)(iVar8 * 0x18) + local_1e8);
        *puVar2 = *puVar3;
        puVar2[1] = uVar10;
        puVar2[2] = uStack_168;
        puVar2[3] = uStack_164;
        *(ulonglong *)((ulonglong)(uint)(iVar8 * 0x18) + 0x10 + local_1e8) =
             CONCAT44(uStack_15c,uStack_160);
        lVar23 = lVar11;
        iVar8 = iVar20;
      } while (iVar20 < (int)param_9[1]);
    }
    local_110 = &local_1f0;
    local_118 = 0;
    local_f4 = 0;
    local_108 = 1;
    local_104 = _DAT_1468b5d78;
    uStack_100 = uRam00000001468b5d7c;
    uStack_fc = uRam00000001468b5d80;
    uStack_f8 = uRam00000001468b5d84;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    uVar10 = (*(code *)local_1f0[1])(&local_1f0);
    local_240 = &local_118;
    local_248._0_4_ = 0x201;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_1c0,&DAT_146ab6e78,uVar10);
    uVar4 = local_1c0;
    local_198 = local_1c0;
    local_1c0 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1c0);
    local_240 = (undefined8 *)CONCAT71(local_240._1_7_,0x11);
    local_248 = CONCAT44(local_248._4_4_,8);
    (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,&local_1b8,&DAT_146ab6e78,uVar4);
    uVar4 = local_1b8;
    uStack_190 = local_1b8;
    local_1b8 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(*param_14 + 0x58,uVar4);
    lVar11 = (longlong)param_13 * 0x140;
    *(undefined4 *)(*(longlong *)(*param_14 + 0x20) + 0x80 + lVar11) = param_11;
    uVar4 = param_10[1];
    lVar23 = *(longlong *)(*param_14 + 0x20);
    puVar17 = (undefined8 *)(lVar23 + 0x90 + lVar11);
    *puVar17 = *param_10;
    puVar17[1] = uVar4;
    uVar4 = param_10[3];
    puVar17 = (undefined8 *)(lVar23 + 0xa0 + lVar11);
    *puVar17 = param_10[2];
    puVar17[1] = uVar4;
    uVar10 = *(undefined4 *)((longlong)param_10 + 0x24);
    uVar5 = *(undefined4 *)(param_10 + 5);
    uVar6 = *(undefined4 *)((longlong)param_10 + 0x2c);
    puVar2 = (undefined4 *)(lVar23 + 0xb0 + lVar11);
    *puVar2 = *(undefined4 *)(param_10 + 4);
    puVar2[1] = uVar10;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    uVar10 = *(undefined4 *)((longlong)param_10 + 0x34);
    uVar5 = *(undefined4 *)(param_10 + 7);
    uVar6 = *(undefined4 *)((longlong)param_10 + 0x3c);
    puVar2 = (undefined4 *)(lVar23 + 0xc0 + lVar11);
    *puVar2 = *(undefined4 *)(param_10 + 6);
    puVar2[1] = uVar10;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    lVar23 = *(longlong *)(*param_14 + 0x20);
    puVar13 = (undefined8 *)FMatrix::Inverse(param_10,local_158);
    uVar10 = 2;
    uVar4 = puVar13[1];
    puVar17 = (undefined8 *)(lVar23 + 0xd0 + lVar11);
    *puVar17 = *puVar13;
    puVar17[1] = uVar4;
    uVar4 = puVar13[3];
    puVar17 = (undefined8 *)(lVar23 + 0xe0 + lVar11);
    *puVar17 = puVar13[2];
    puVar17[1] = uVar4;
    uVar5 = *(undefined4 *)((longlong)puVar13 + 0x24);
    uVar6 = *(undefined4 *)(puVar13 + 5);
    uVar7 = *(undefined4 *)((longlong)puVar13 + 0x2c);
    puVar2 = (undefined4 *)(lVar23 + 0xf0 + lVar11);
    *puVar2 = *(undefined4 *)(puVar13 + 4);
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    uVar4 = puVar13[7];
    puVar17 = (undefined8 *)(lVar23 + 0x100 + lVar11);
    *puVar17 = puVar13[6];
    puVar17[1] = uVar4;
  }
  uVar4 = local_178;
  lVar18 = (longlong)param_13 * 0x140;
  local_248 = CONCAT44(local_248._4_4_,param_12);
  *(undefined4 *)(*(longlong *)(*param_14 + 0x20) + 0x44 + lVar18) = uVar10;
  lVar23 = *param_14;
  FUN_1424c1b10(param_1,local_178,lVar23,param_13);
  lVar11 = *(longlong *)(lVar23 + 0x20);
  lVar12 = *(longlong *)(lVar11 + 0x28 + lVar18);
  if (*(int *)(lVar12 + 0x7e0) == -1) {
    FUN_1424c9ff0(lVar12,*(undefined8 *)(lVar11 + 0x20 + lVar18),
                  *(undefined8 *)(lVar11 + 0x120 + lVar18),*(undefined8 *)(lVar11 + 0x118 + lVar18))
    ;
    lVar11 = *(longlong *)(lVar23 + 0x20);
  }
  if (*(longlong *)(lVar11 + 0x30 + lVar18) != 0) {
    FUN_1424c1150(param_1,uVar4,lVar23,param_13);
  }
  lVar23 = *(longlong *)(*param_14 + 0x20);
  lVar11 = *(longlong *)(lVar18 + 0x28 + lVar23);
  if (*(int *)(lVar11 + 0x7e0) == -1) {
    FUN_1424c9ff0(lVar11,*(undefined8 *)(lVar18 + 0x20 + lVar23),
                  *(undefined8 *)(lVar18 + 0x120 + lVar23),*(undefined8 *)(lVar18 + 0x118 + lVar23))
    ;
  }
  if (local_1e8 != 0) {
    FMemory::Free();
  }
  local_1f8 = &PTR_FUN_143f48658;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_190);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
  return;
}



// FUNCTION 1424cd160 ProjectEdges body=927 status=ok
// SIG undefined ProjectEdges(void)

void FGeomTools::ProjectEdges(longlong *param_1,float *param_2,longlong *param_3,float *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_148;
  float local_140;
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
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  
  local_148 = *(undefined8 *)param_4;
  local_140 = param_4[2];
  FVector::FindBestAxisVectors(&local_148,&local_f8,&local_e8);
  fStack_104 = param_4[3];
  local_118 = *param_4;
  fStack_114 = param_4[1];
  fStack_110 = param_4[2];
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fStack_100 = local_140 * fStack_104;
  local_108 = (float)local_148 * fStack_104;
  fStack_104 = local_148._4_4_ * fStack_104;
  *param_2 = local_f8;
  param_2[1] = local_f4;
  param_2[2] = local_f0;
  param_2[3] = 0.0;
  param_2[4] = local_e8;
  param_2[5] = local_e4;
  param_2[6] = local_e0;
  param_2[7] = 0.0;
  local_138 = local_f8;
  fStack_134 = local_f4;
  fStack_130 = local_f0;
  uStack_12c = 0;
  local_128 = local_e8;
  fStack_124 = local_e4;
  fStack_120 = local_e0;
  uStack_11c = 0;
  param_2[8] = fVar2;
  param_2[9] = fVar3;
  param_2[10] = fVar4;
  param_2[0xb] = 0.0;
  uStack_10c = 0;
  param_2[0xc] = local_108;
  param_2[0xd] = fStack_104;
  param_2[0xe] = fStack_100;
  param_2[0xf] = 1.0;
  iVar5 = (int)param_3[1] + (int)param_1[1];
  *(int *)(param_1 + 1) = iVar5;
  uStack_fc = 0x3f800000;
  if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1);
  }
  iVar5 = 0;
  if (0 < (int)param_3[1]) {
    lVar6 = 0;
    lVar7 = 0;
    fStack_cc = 1.0;
    fStack_bc = 1.0;
    do {
      lVar1 = *param_3;
      FMatrix::InverseFast(param_2,&local_138);
      local_d8 = *(float *)(lVar6 + lVar1);
      fStack_d4 = *(float *)(lVar6 + 4 + lVar1);
      fStack_d0 = *(float *)(lVar6 + 8 + lVar1);
      local_b8 = 0;
      *(float *)(*param_1 + lVar7) =
           fStack_cc * local_108 + fStack_d0 * local_118 +
           fStack_d4 * local_128 + local_d8 * local_138;
      *(float *)(*param_1 + 4 + lVar7) =
           fStack_cc * fStack_104 + fStack_d0 * fStack_114 +
           fStack_d4 * fStack_124 + local_d8 * fStack_134;
      lVar1 = *param_3;
      FMatrix::InverseFast(param_2,&local_138);
      local_c8 = *(float *)(lVar6 + 0xc + lVar1);
      iVar5 = iVar5 + 1;
      fStack_c4 = *(float *)(lVar6 + 0x10 + lVar1);
      fStack_c0 = *(float *)(lVar6 + 0x14 + lVar1);
      lVar6 = lVar6 + 0x18;
      local_b8 = 0;
      *(float *)(*param_1 + 8 + lVar7) =
           fStack_bc * local_108 + fStack_c0 * local_118 +
           fStack_c4 * local_128 + local_c8 * local_138;
      *(float *)(*param_1 + 0xc + lVar7) =
           fStack_bc * fStack_104 + fStack_c0 * fStack_114 +
           fStack_c4 * fStack_124 + local_c8 * fStack_134;
      lVar7 = lVar7 + 0x10;
    } while (iVar5 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 1424cd500 FUN_1424cd500 body=56 status=ok
// SIG undefined FUN_1424cd500(void)

void FUN_1424cd500(void)

{
  longlong lVar1;
  
  lVar1 = DAT_146af7620;
  if (DAT_146af7620 != 0) {
    FUN_1424b5ea0(DAT_146af7620);
    FMemory::operator_delete(lVar1,0x268);
    DAT_146af7620 = 0;
  }
  return;
}



// FUNCTION 1424cd540 FUN_1424cd540 body=380 status=ok
// SIG undefined FUN_1424cd540(void)

void FUN_1424cd540(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = -1;
  uVar4 = AUGCompanionAIController::GetPrivateStaticClass();
  FUN_1417a5560(uVar4,&local_28,1,0x10,0);
  uVar7 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    lVar5 = local_28;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)uVar7 <= local_18)) {
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
        return;
      }
      lVar1 = *(longlong *)(lVar5 + (longlong)local_18 * 8);
      if (lVar1 != 0) {
        cVar2 = UObjectBaseUtility::IsTemplate(lVar1,0x30);
        if (cVar2 == '\0') {
          uVar3 = *(uint *)(lVar1 + 0xc);
          lVar5 = 0;
          if ((int)uVar3 < (int)DAT_1469e91c4) {
            uVar6 = uVar3 & 0xffff;
            if ((int)uVar3 < 0) {
              uVar3 = uVar3 + 0xffff;
              uVar6 = uVar6 - 0x10000;
            }
            lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                    (longlong)(int)uVar6 * 0x18;
          }
          if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
            if ((*(longlong *)(lVar1 + 0x728) != 0) &&
               ((*(uint *)(*(longlong *)(lVar1 + 0x728) + 8) >> 10 & 1) == 0)) {
              FUN_1417510e0();
              FUN_1424bc050(lVar1);
            }
            FUN_1423424e0(lVar1);
          }
        }
        uVar7 = local_20 & 0xffffffff;
        lVar5 = local_28;
      }
      local_18 = local_18 + 1;
    } while ((int)uVar7 <= local_18);
    do {
      if (*(longlong *)(lVar5 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)uVar7);
  } while( true );
}



// FUNCTION 1424cd6c0 RegisterHardwareInfo body=54 status=ok
// SIG undefined RegisterHardwareInfo(void)

void FHardwareInfo::RegisterHardwareInfo(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined1 local_res10 [24];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = &local_res8;
  local_res8 = param_1;
  local_10 = param_2;
  FUN_14090fe80(&DAT_146532ca0,local_res10,&local_18,0);
  return;
}



// FUNCTION 1424cd700 Rehash body=533 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FKey,float>,TDefaultMapHashableKeyFuncs<FKey,float,0>,FDefaultSetAllocator>::Rehash
               (longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
      uVar12 = 0;
      uVar13 = (ulonglong)uVar10;
      do {
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar11 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar10 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar5) goto LAB_1424cd83f;
        uVar10 = puVar14[lVar6 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      iVar9 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_44 = (iStack_40 - iVar9) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_1424cd83f:
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
        lVar6 = *param_1;
        lVar8 = (longlong)iStack_1c;
        uVar4 = *(undefined8 *)(lVar6 + lVar8 * 0x28);
        uVar10 = (int)((ulonglong)uVar4 >> 0x20) + (int)uVar4 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x24 + lVar8 * 0x28) = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x20 + lVar8 * 0x28) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
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



// FUNCTION 1424cd920 Release body=35 status=ok
// SIG undefined Release(void)

void FGPUSkinCache::Release(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_1424cdf70();
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1424cd950 ReleaseBoneData body=507 status=ok
// SIG undefined ReleaseBoneData(void)

void FGPUBaseSkinVertexFactory::FShaderDataType::ReleaseBoneData(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong lStack_40;
  uint local_38;
  uint local_34;
  
  IsInRenderingThread();
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  plVar6 = (longlong *)(param_1 + 8);
  lVar10 = 2;
  do {
    lVar5 = plVar6[-1];
    if ((lVar5 != 0) && (*plVar6 != 0)) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
      lVar3 = *plVar6;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      local_58 = lVar5;
      local_50 = lVar3;
      IsInRenderingThread();
      lVar5 = local_58;
      if (DAT_146af8e38 != '\0') {
        local_48 = 0;
        lStack_40 = 0;
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_48,local_58);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&lStack_40,lVar3);
        uVar7 = *(uint *)(lVar5 + 0x18);
        uVar9 = 0x11;
        local_34 = DAT_1464aaa90;
        uVar8 = 0;
        do {
          uVar4 = uVar9 + (int)uVar8 >> 1;
          if (*(uint *)(&DAT_146532ba0 + (ulonglong)(uVar4 - 1) * 4) < uVar7) {
            uVar8 = (ulonglong)uVar4;
            uVar4 = uVar9;
          }
          uVar9 = uVar4;
        } while (1 < uVar9 - (int)uVar8);
        lVar5 = ((longlong)(int)(DAT_1464aaa90 % 3) * 0x11 + uVar8) * 0x10;
        iVar2 = *(int *)(&DAT_146af8ad8 + lVar5);
        *(int *)(&DAT_146af8ad8 + lVar5) = iVar2 + 1;
        local_38 = uVar7;
        if (*(int *)(&DAT_146af8adc + lVar5) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&DAT_146af8ad0 + lVar5,iVar2);
        }
        plVar1 = (longlong *)(*(longlong *)(&DAT_146af8ad0 + lVar5) + (longlong)iVar2 * 0x18);
        *plVar1 = local_48;
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
          uVar7 = local_38;
        }
        plVar1[1] = lStack_40;
        if (lStack_40 != 0) {
          LOCK();
          *(int *)(lStack_40 + 8) = *(int *)(lStack_40 + 8) + 1;
          UNLOCK();
          uVar7 = local_38;
        }
        *(uint *)((longlong)plVar1 + 0x14) = local_34;
        *(uint *)(plVar1 + 2) = uVar7;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&lStack_40);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_50);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 8);
    param_1 = param_1 + 0x10;
    plVar6 = plVar6 + 2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return;
}



// FUNCTION 1424cdb50 ReleaseClothSimulData body=635 status=ok
// SIG undefined ReleaseClothSimulData(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::ReleaseClothSimulData(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong lStack_40;
  uint local_38;
  uint local_34;
  
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,0);
  uVar10 = 0;
  plVar3 = param_1;
  do {
    local_58 = plVar3[2];
    if ((local_58 != 0) && (plVar3[3] != 0)) {
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
      UNLOCK();
      lVar6 = plVar3[3];
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      local_50 = lVar6;
      IsInRenderingThread();
      lVar4 = local_58;
      if (DAT_146af9478 != '\0') {
        local_48 = 0;
        lStack_40 = 0;
        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_48,local_58);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&lStack_40,lVar6);
        uVar9 = *(uint *)(lVar4 + 0x18);
        uVar8 = 0x11;
        local_34 = DAT_1464aaa90;
        uVar7 = 0;
        do {
          uVar5 = uVar8 + (int)uVar7 >> 1;
          if (*(uint *)(&DAT_146532ba0 + (ulonglong)(uVar5 - 1) * 4) < uVar9) {
            uVar7 = (ulonglong)uVar5;
            uVar5 = uVar8;
          }
          uVar8 = uVar5;
        } while (1 < uVar8 - (int)uVar7);
        lVar6 = ((longlong)(int)(DAT_1464aaa90 % 3) * 0x11 + uVar7) * 0x10;
        iVar2 = *(int *)(&DAT_146af9118 + lVar6);
        *(int *)(&DAT_146af9118 + lVar6) = iVar2 + 1;
        local_38 = uVar9;
        if (*(int *)(&DAT_146af911c + lVar6) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&DAT_146af9110 + lVar6,iVar2);
        }
        plVar1 = (longlong *)(*(longlong *)(&DAT_146af9110 + lVar6) + (longlong)iVar2 * 0x18);
        *plVar1 = local_48;
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
          uVar9 = local_38;
        }
        plVar1[1] = lStack_40;
        if (lStack_40 != 0) {
          LOCK();
          *(int *)(lStack_40 + 8) = *(int *)(lStack_40 + 8) + 1;
          UNLOCK();
          uVar9 = local_38;
        }
        *(uint *)((longlong)plVar1 + 0x14) = local_34;
        *(uint *)(plVar1 + 2) = uVar9;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&lStack_40);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_50);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + (uVar10 + 1) * 2,0);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + (uVar10 + 1) * 2 + 1);
    }
    uVar9 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar9;
    plVar3 = plVar3 + 2;
  } while (uVar9 < 2);
  param_1[6] = -1;
  lVar6 = _DAT_1464aa7d8;
  param_1[8] = _DAT_1464aa7d0;
  param_1[9] = lVar6;
  lVar6 = _DAT_1464aa7e8;
  param_1[10] = _DAT_1464aa7e0;
  param_1[0xb] = lVar6;
  lVar6 = _DAT_1464aa7f8;
  param_1[0xc] = _DAT_1464aa7f0;
  param_1[0xd] = lVar6;
  lVar6 = lRam00000001464aa808;
  param_1[0xe] = _DAT_1464aa800;
  param_1[0xf] = lVar6;
  lVar6 = _DAT_1464aa7d8;
  param_1[0x10] = _DAT_1464aa7d0;
  param_1[0x11] = lVar6;
  lVar6 = _DAT_1464aa7e8;
  param_1[0x12] = _DAT_1464aa7e0;
  param_1[0x13] = lVar6;
  lVar6 = _DAT_1464aa7f8;
  param_1[0x14] = _DAT_1464aa7f0;
  param_1[0x15] = lVar6;
  lVar6 = lRam00000001464aa808;
  param_1[0x16] = _DAT_1464aa800;
  param_1[0x17] = lVar6;
  return;
}



// FUNCTION 1424cddd0 FUN_1424cddd0 body=38 status=ok
// SIG undefined FUN_1424cddd0(void)

void FUN_1424cddd0(longlong param_1)

{
  FGPUBaseSkinVertexFactory::FShaderDataType::ReleaseBoneData(param_1 + 0x658);
  FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::ReleaseClothSimulData(param_1 + -0xc0);
  return;
}



// FUNCTION 1424cde10 FUN_1424cde10 body=349 status=ok
// SIG undefined FUN_1424cde10(void)

void FUN_1424cde10(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong local_28;
  longlong lStack_20;
  uint local_18;
  uint local_14;
  
  IsInRenderingThread();
  if (*(char *)(param_1 + 0x488) != '\0') {
    local_28 = 0;
    lStack_20 = 0;
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_28,*param_2);
    TRefCountPtr<FRHIIndexBuffer>::operator=(&lStack_20,param_2[1]);
    uVar6 = 0x11;
    local_14 = DAT_1464aaa90;
    uVar4 = *(uint *)(*param_2 + 0x18);
    uVar5 = 0;
    do {
      uVar2 = uVar6 + (int)uVar5 >> 1;
      if (*(uint *)(&DAT_146532ba0 + (ulonglong)(uVar2 - 1) * 4) < uVar4) {
        uVar5 = (ulonglong)uVar2;
        uVar2 = uVar6;
      }
      uVar6 = uVar2;
    } while (1 < uVar6 - (int)uVar5);
    plVar3 = (longlong *)
             ((uVar5 + (longlong)(int)(DAT_1464aaa90 % 3) * 0x11 + 0x12) * 0x10 + param_1);
    iVar1 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar1 + 1;
    local_18 = uVar4;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar3,iVar1);
    }
    plVar3 = (longlong *)(*plVar3 + (longlong)iVar1 * 0x18);
    *plVar3 = local_28;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      uVar4 = local_18;
    }
    plVar3[1] = lStack_20;
    if (lStack_20 != 0) {
      LOCK();
      *(int *)(lStack_20 + 8) = *(int *)(lStack_20 + 8) + 1;
      UNLOCK();
      uVar4 = local_18;
    }
    *(uint *)((longlong)plVar3 + 0x14) = local_14;
    *(uint *)(plVar3 + 2) = uVar4;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&lStack_20);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_28);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2);
  return;
}



// FUNCTION 1424cdf70 FUN_1424cdf70 body=772 status=ok
// SIG undefined FUN_1424cdf70(void)

void FUN_1424cdf70(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  bool bVar17;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = param_1[1];
  if (plVar2 != (longlong *)0x0) {
    uVar11 = 0;
    uVar7 = (ulonglong)(uint)((int)plVar2[0xf] * 8);
    if (*(char *)((longlong)plVar2 + 0x7c) == '\0') {
      uVar7 = uVar11;
    }
    *(longlong *)(lVar3 + 0x30) =
         *(longlong *)(lVar3 + 0x30) - (uVar7 + (uint)((int)plVar2[0xf] * 0x18));
    lVar8 = (longlong)*(int *)(lVar3 + 0x18);
    if (*(int *)(lVar3 + 0x18) != 0) {
      bVar17 = (longlong *)**(longlong **)(lVar3 + 0x10) != plVar2;
      uVar7 = uVar11;
      uVar15 = uVar11;
      do {
        iVar12 = (int)uVar7;
        uVar11 = uVar11 + 1;
        uVar7 = (ulonglong)(iVar12 + 1);
        if ((longlong)uVar11 < lVar8) {
          plVar9 = (longlong *)(*(longlong *)(lVar3 + 0x10) + uVar11 * 8);
          do {
            if (bVar17 != ((longlong *)*plVar9 != plVar2)) break;
            uVar7 = (ulonglong)((int)uVar7 + 1);
            uVar11 = uVar11 + 1;
            plVar9 = plVar9 + 1;
          } while ((longlong)uVar11 < lVar8);
        }
        iVar16 = (int)uVar7 - iVar12;
        if (bVar17 != false) {
          iVar6 = (int)uVar15;
          if (iVar6 != iVar12) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar6 * 8),
                       (void *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar12 * 8),
                       (longlong)iVar16 << 3);
          }
          uVar15 = (ulonglong)(uint)(iVar6 + iVar16);
        }
        bVar17 = (bool)(bVar17 ^ 1);
      } while ((longlong)uVar11 < lVar8);
      *(int *)(lVar3 + 0x18) = (int)uVar15;
    }
    FUN_1424ce480(plVar2,lVar3,0);
    lVar8 = 2;
    lVar13 = 2;
    plVar9 = plVar2;
    do {
      if (*plVar9 != 0) {
        piVar1 = (int *)(*plVar9 + 8);
        LOCK();
        iVar12 = *piVar1;
        if (iVar12 == 0) {
          *piVar1 = 0;
          iVar12 = 0;
        }
        UNLOCK();
        if ((iVar12 == 1) && (lVar4 = *plVar9, *(char *)(lVar4 + 0x11) != '\0')) {
          if (DAT_146ab62f3 != '\0') {
            (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar4);
          }
          *(undefined1 *)(lVar4 + 0x11) = 0;
        }
      }
      *(undefined4 *)(plVar9 + 3) = 0;
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar9,0);
      TRefCountPtr<FRHITexture>::operator=(plVar9 + 1);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar9 + 2);
      plVar9 = plVar9 + 5;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    plVar9 = plVar2 + 10;
    if (*(char *)((longlong)plVar2 + 0x7c) != '\0') {
      FUN_141ace450(plVar9);
    }
    FUN_141ace450(plVar9);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar2 + 0xc);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar2 + 0xb);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar9);
    do {
      plVar14 = plVar9 + -5;
      FUN_141ace450(plVar14);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar9 + -3);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar9 + -4);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar14);
      lVar8 = lVar8 + -1;
      plVar9 = plVar14;
    } while (lVar8 != 0);
    FMemory::operator_delete(plVar2,0x80);
    *param_1 = 0;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0x20);
  iVar12 = *(int *)(lVar3 + 0x28);
  puVar10 = puVar5;
  do {
    if (puVar10 == puVar5 + iVar12) {
LAB_1424ce22a:
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
      TArray<FGPUSkinCacheEntry::FSectionDispatchData,FDefaultAllocator>::
      ~TArray<FGPUSkinCacheEntry::FSectionDispatchData,FDefaultAllocator>(param_1 + 4);
      if (param_1[2] != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(param_1,0x68);
      return;
    }
    if ((longlong *)*puVar10 == param_1) {
      iVar16 = (int)((longlong)puVar10 - (longlong)puVar5 >> 3);
      if (iVar16 != -1) {
        iVar6 = (iVar12 - iVar16) + -1;
        if (0 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (puVar5 + iVar16,puVar5 + (iVar12 - iVar6),(longlong)iVar6 << 3);
          iVar12 = *(int *)(lVar3 + 0x28);
        }
        *(int *)(lVar3 + 0x28) = iVar12 + -1;
      }
      goto LAB_1424ce22a;
    }
    puVar10 = puVar10 + 1;
  } while( true );
}



// FUNCTION 1424ce280 Remove body=171 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<unsigned_int,FFoliageOcclusionResults>,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar2 + 0x2c + lVar6 * 0x30));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar2 + 0x28 + lVar6 * 0x30);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x28 + (longlong)iVar1 * 0x30);
      iVar1 = *piVar5;
    }
  }
  if (*(longlong *)(lVar6 * 0x30 + *param_1 + 8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 1424ce330 FUN_1424ce330 body=325 status=ok
// SIG undefined FUN_1424ce330(void)

undefined8 FUN_1424ce330(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar5 = *param_2;
  uVar10 = (longlong)(int)param_1[9] - 1;
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar9 +
                  ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) & uVar10) * 4);
  if (iVar8 != -1) {
    lVar6 = *param_1;
    do {
      lVar7 = (longlong)iVar8;
      if (*(longlong *)(lVar6 + lVar7 * 0x28) == lVar5) {
        uVar10 = (longlong)*(int *)(lVar6 + 0x24 + lVar7 * 0x28) & uVar10;
        puVar3 = (undefined4 *)((longlong)plVar9 + uVar10 * 4);
        iVar4 = *(int *)((longlong)plVar9 + uVar10 * 4);
        goto joined_r0x0001424ce3d1;
      }
      iVar8 = *(int *)(lVar6 + 0x20 + lVar7 * 0x28);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x0001424ce3d1:
  if (iVar4 == -1) {
LAB_1424ce400:
    plVar9 = *(longlong **)(*param_1 + 0x10 + lVar7 * 0x28);
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
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar8,1);
    return 1;
  }
  if (iVar4 == iVar8) {
    *puVar3 = *(undefined4 *)(lVar6 + 0x20 + lVar7 * 0x28);
    goto LAB_1424ce400;
  }
  lVar5 = (longlong)iVar4 * 5 + 4;
  iVar4 = *(int *)(lVar6 + lVar5 * 8);
  puVar3 = (undefined4 *)(lVar6 + lVar5 * 8);
  goto joined_r0x0001424ce3d1;
}



// FUNCTION 1424ce480 FUN_1424ce480 body=794 status=ok
// SIG undefined FUN_1424ce480(void)

void FUN_1424ce480(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = 0;
  if ((lVar1 != 0) && (lVar6 = (longlong)(int)param_2[1], (int)param_2[1] != 0)) {
    bVar9 = *(longlong *)*param_2 != lVar1;
    uVar3 = uVar2;
    uVar8 = uVar2;
    do {
      iVar5 = (int)uVar3;
      uVar2 = uVar2 + 1;
      uVar3 = (ulonglong)(iVar5 + 1);
      if ((longlong)uVar2 < lVar6) {
        do {
          if (bVar9 != (*(longlong *)(*param_2 + uVar2 * 8) != lVar1)) break;
          uVar3 = (ulonglong)((int)uVar3 + 1);
          uVar2 = uVar2 + 1;
        } while ((longlong)uVar2 < lVar6);
      }
      iVar4 = (int)uVar3 - iVar5;
      if (bVar9 != false) {
        iVar7 = (int)uVar8;
        if (iVar7 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 + (longlong)iVar7 * 8),
                     (void *)(*param_2 + (longlong)iVar5 * 8),(longlong)iVar4 << 3);
        }
        uVar8 = (ulonglong)(uint)(iVar7 + iVar4);
      }
      bVar9 = (bool)(bVar9 ^ 1);
    } while ((longlong)uVar2 < lVar6);
    *(int *)(param_2 + 1) = (int)uVar8;
  }
  uVar3 = 0;
  uVar2 = param_1 + 0x50U;
  if (*(char *)(param_1 + 0x7c) == '\0') {
    uVar2 = uVar3;
  }
  if (((uVar2 != 0) && (lVar1 = *(longlong *)(uVar2 + 8), lVar1 != 0)) &&
     (lVar6 = (longlong)(int)param_2[1], (int)param_2[1] != 0)) {
    bVar9 = *(longlong *)*param_2 != lVar1;
    uVar2 = uVar3;
    uVar8 = uVar3;
    do {
      iVar5 = (int)uVar2;
      uVar3 = uVar3 + 1;
      uVar2 = (ulonglong)(iVar5 + 1);
      if ((longlong)uVar3 < lVar6) {
        do {
          if (bVar9 != (*(longlong *)(*param_2 + uVar3 * 8) != lVar1)) break;
          uVar2 = (ulonglong)((int)uVar2 + 1);
          uVar3 = uVar3 + 1;
        } while ((longlong)uVar3 < lVar6);
      }
      iVar4 = (int)uVar2 - iVar5;
      if (bVar9 != false) {
        iVar7 = (int)uVar8;
        if (iVar7 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 + (longlong)iVar7 * 8),
                     (void *)(*param_2 + (longlong)iVar5 * 8),(longlong)iVar4 << 3);
        }
        uVar8 = (ulonglong)(uint)(iVar7 + iVar4);
      }
      bVar9 = (bool)(bVar9 ^ 1);
    } while ((longlong)uVar3 < lVar6);
    *(int *)(param_2 + 1) = (int)uVar8;
  }
  uVar2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((lVar1 != 0) && (lVar6 = (longlong)(int)param_2[1], (int)param_2[1] != 0)) {
    bVar9 = *(longlong *)*param_2 != lVar1;
    uVar3 = uVar2;
    uVar8 = uVar2;
    do {
      iVar5 = (int)uVar3;
      uVar2 = uVar2 + 1;
      uVar3 = (ulonglong)(iVar5 + 1);
      if ((longlong)uVar2 < lVar6) {
        do {
          if (bVar9 != (*(longlong *)(*param_2 + uVar2 * 8) != lVar1)) break;
          uVar3 = (ulonglong)((int)uVar3 + 1);
          uVar2 = uVar2 + 1;
        } while ((longlong)uVar2 < lVar6);
      }
      iVar4 = (int)uVar3 - iVar5;
      if (bVar9 != false) {
        iVar7 = (int)uVar8;
        if (iVar7 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 + (longlong)iVar7 * 8),
                     (void *)(*param_2 + (longlong)iVar5 * 8),(longlong)iVar4 << 3);
        }
        uVar8 = (ulonglong)(uint)(iVar7 + iVar4);
      }
      bVar9 = (bool)(bVar9 ^ 1);
    } while ((longlong)uVar2 < lVar6);
    *(int *)(param_2 + 1) = (int)uVar8;
  }
  uVar3 = 0;
  uVar2 = param_1 + 0x50U;
  if (*(char *)(param_1 + 0x7c) == '\0') {
    uVar2 = uVar3;
  }
  if (((uVar2 != 0) && (lVar1 = *(longlong *)(uVar2 + 8), lVar1 != 0)) &&
     (lVar6 = (longlong)(int)param_2[1], (int)param_2[1] != 0)) {
    bVar9 = *(longlong *)*param_2 != lVar1;
    uVar2 = uVar3;
    uVar8 = uVar3;
    do {
      iVar5 = (int)uVar2;
      uVar3 = uVar3 + 1;
      uVar2 = (ulonglong)(iVar5 + 1);
      if ((longlong)uVar3 < lVar6) {
        do {
          if (bVar9 != (*(longlong *)(*param_2 + uVar3 * 8) != lVar1)) break;
          uVar2 = (ulonglong)((int)uVar2 + 1);
          uVar3 = uVar3 + 1;
        } while ((longlong)uVar3 < lVar6);
      }
      iVar4 = (int)uVar2 - iVar5;
      if (bVar9 != false) {
        iVar7 = (int)uVar8;
        if (iVar7 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 + (longlong)iVar7 * 8),
                     (void *)(*param_2 + (longlong)iVar5 * 8),(longlong)iVar4 << 3);
        }
        uVar8 = (ulonglong)(uint)(iVar7 + iVar4);
      }
      bVar9 = (bool)(bVar9 ^ 1);
    } while ((longlong)uVar3 < lVar6);
    *(int *)(param_2 + 1) = (int)uVar8;
  }
  return;
}



// FUNCTION 1424ce7a0 FUN_1424ce7a0 body=216 status=ok
// SIG undefined FUN_1424ce7a0(void)

void FUN_1424ce7a0(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_3 != 0) {
    lVar2 = *param_1 + (longlong)param_2 * 0x28;
    iVar3 = param_3;
    do {
      FUN_141ace450(lVar2);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 0x10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2);
      lVar2 = lVar2 + 0x28;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x28),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x28),(longlong)iVar1 * 0x28);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1424ce880 FUN_1424ce880 body=86 status=ok
// SIG undefined FUN_1424ce880(void)

undefined1 FUN_1424ce880(longlong param_1,int param_2)

{
  int local_res10 [6];
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x7b0))) {
    local_res10[0] = param_2;
    FUN_1424ce9d0(param_1,local_res10,1);
    if (*(char *)(param_1 + 0x8f3) != '\0') {
      FUN_1424bd460(param_1,1,0);
    }
    FUN_1423424e0(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 1424ce8e0 FUN_1424ce8e0 body=233 status=ok
// SIG undefined FUN_1424ce8e0(void)

undefined8 FUN_1424ce8e0(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  int *local_18;
  int local_10;
  
  local_10 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_10;
  if (local_10 == 0) {
    return 1;
  }
  _Src = (void *)*param_2;
  local_18 = (int *)0x0;
  TArray<int,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
  piVar1 = local_18;
  _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 << 2);
  iVar2 = local_10;
  AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<int>_>_>
            (piVar1,(longlong)local_10,local_res10[0],local_res10);
  if ((((*piVar1 < 0) || (*(int *)(param_1 + 0x7b0) <= *piVar1)) || (piVar1[iVar2 + -1] < 0)) ||
     (*(int *)(param_1 + 0x7b0) <= piVar1[iVar2 + -1])) {
    uVar4 = 0;
  }
  else {
    FUN_1424ce9d0(param_1,piVar1,iVar2);
    if (*(char *)(param_1 + 0x8f3) != '\0') {
      FUN_1424bd460(param_1,1,0);
    }
    FUN_1423424e0(param_1);
    uVar4 = 1;
  }
  FMemory::Free(piVar1);
  return uVar4;
}



// FUNCTION 1424ce9d0 FUN_1424ce9d0 body=682 status=ok
// SIG undefined FUN_1424ce9d0(void)

void FUN_1424ce9d0(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (((char)param_1[0x11e] != '\0') && (0 < param_3)) {
    *(undefined1 *)((longlong)param_1 + 0x8f2) = 1;
  }
  if (0 < param_3) {
    lVar7 = 0;
    do {
      iVar2 = *(int *)(param_2 + lVar7 * 4);
      lVar4 = (longlong)iVar2;
      (**(code **)(*param_1 + 0x9c8))(param_1,iVar2);
      if ((-1 < iVar2) && (iVar5 = (int)param_1[0xfa], iVar2 < iVar5)) {
        if (*(int *)(lVar4 * 4 + param_1[0xf9]) != -1) {
          FInstanceUpdateCmdBuffer::HideInstance(param_1 + 0xff);
          iVar5 = (int)param_1[0xfa];
        }
        iVar3 = (iVar5 - iVar2) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[0xf9] + lVar4 * 4),
                     (void *)(param_1[0xf9] + (longlong)(iVar5 - iVar3) * 4),(longlong)iVar3 << 2);
          iVar5 = (int)param_1[0xfa];
        }
        *(int *)(param_1 + 0xfa) = iVar5 + -1;
      }
      iVar5 = (int)param_1[0xf6];
      iVar3 = (iVar5 - iVar2) + -1;
      if (0 < iVar3) {
        iVar3 = 1;
      }
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar4 * 0x30 + param_1[0xf5]),
                   (void *)((longlong)(iVar5 - iVar3) * 0x30 + param_1[0xf5]),(longlong)iVar3 * 0x30
                  );
        iVar5 = (int)param_1[0xf6];
      }
      *(int *)(param_1 + 0xf6) = iVar5 + -1;
      if ((*(byte *)(param_1 + 0x17) & 4) != 0) {
        plVar1 = param_1 + 0x103;
        lVar4 = lVar4 * 8;
        if (*(longlong *)(lVar4 + *plVar1) != 0) {
          FUN_1426adfd0();
          lVar6 = *(longlong *)(lVar4 + *plVar1);
          if (lVar6 != 0) {
            FUN_14061f570(lVar6);
            FMemory::operator_delete(lVar6,0x1b0);
          }
        }
        if (iVar2 == (int)param_1[0xf6]) {
          iVar5 = (int)param_1[0x104];
          iVar3 = (iVar5 - iVar2) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar4 + *plVar1),(void *)(*plVar1 + (longlong)(iVar2 + 1) * 8),
                       (longlong)iVar3 << 3);
            iVar5 = (int)param_1[0x104];
          }
          *(int *)(param_1 + 0x104) = iVar5 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        }
        else {
          lVar6 = *plVar1;
          if (*(longlong *)(lVar6 + (longlong)(int)param_1[0xf6] * 8) != 0) {
            FUN_1426adfd0();
            lVar6 = *plVar1;
          }
          iVar5 = (int)param_1[0x104];
          iVar3 = (iVar5 - iVar2) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar4 + lVar6),(void *)(lVar6 + (longlong)(iVar5 - iVar3) * 8),
                       (longlong)iVar3 << 3);
            iVar5 = (int)param_1[0x104];
          }
          *(int *)(param_1 + 0x104) = iVar5 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
          if (*(longlong *)(lVar4 + *plVar1) != 0) {
            FUN_1424faec0(param_1,iVar2);
          }
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_3);
  }
  if (*(int *)((longlong)param_1 + 0x7b4) == (int)param_1[0xf6]) {
    return;
  }
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
  ResizeTo();
  return;
}



// FUNCTION 1424cec80 ResizeBuffer body=186 status=ok
// SIG undefined ResizeBuffer(void)

void TSkeletalMeshVertexData<FClothSimulEntry>::ResizeBuffer(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 < param_2) {
    if (*(int *)(param_1 + 0x1c) < (int)param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x10,param_2);
      uVar3 = *(uint *)(param_1 + 0x18);
    }
    iVar4 = *(int *)(param_1 + 0x18);
    iVar5 = (iVar4 - uVar3) + param_2;
    *(int *)(param_1 + 0x18) = iVar5;
    if (*(int *)(param_1 + 0x1c) < iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x10,iVar4);
      return;
    }
  }
  else if (param_2 < uVar3) {
    iVar4 = uVar3 - param_2;
    if (iVar4 != 0) {
      iVar5 = *(int *)(param_1 + 0x18);
      iVar2 = (iVar5 - iVar4) - param_2;
      if (iVar2 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x10);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(lVar1 + (longlong)(int)param_2 * 0x18),
                   (void *)(lVar1 + (longlong)(int)uVar3 * 0x18),(longlong)iVar2 * 0x18);
        iVar5 = *(int *)(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x18) = iVar5 - iVar4;
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x10));
    }
  }
  return;
}



// FUNCTION 1424ced40 ResizeForCopy body=14 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FVertexStreamComponent,TFixedAllocator<4>_>::ResizeForCopy(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return;
}



// FUNCTION 1424ced50 FUN_1424ced50 body=139 status=ok
// SIG undefined FUN_1424ced50(void)

void FUN_1424ced50(longlong param_1,uint param_2,uint param_3)

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
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      uVar2 = (uint)(uVar3 >> 4);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (uVar2 < 3) {
      if (lVar1 == 0) goto LAB_1424cedc8;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_1424cedc8;
      lVar5 = (longlong)(int)uVar2 << 4;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
  }
LAB_1424cedc8:
  *(uint *)(param_1 + 0x2c) = uVar2;
  return;
}



// FUNCTION 1424cede0 FUN_1424cede0 body=138 status=ok
// SIG undefined FUN_1424cede0(void)

void FUN_1424cede0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x4d0,0);
  iVar4 = (int)(uVar3 / 0x4d0);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x4d0,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1424cee70 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<FDeployedUnitDescriptor,TSizedDefaultAllocator<32>_>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x4d0,0);
    iVar3 = (int)(uVar1 / 0x4d0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x4d0,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1424ceef0 FUN_1424ceef0 body=4446 status=ok
// SIG undefined FUN_1424ceef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1424ceef0(undefined8 param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  void *pvVar16;
  void *_Src;
  int iVar17;
  int iVar18;
  int *piVar19;
  undefined8 **ppuVar20;
  undefined1 *puVar21;
  longlong lVar22;
  size_t _Size;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_228 [32];
  int local_208;
  undefined8 *local_200;
  undefined1 local_1f8;
  undefined1 local_1f7 [7];
  ulonglong local_1f0;
  int local_1e8;
  int *local_1e0;
  undefined8 local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  void *local_1a0;
  undefined8 local_198;
  void *local_190;
  undefined8 local_188;
  int *local_180;
  undefined8 local_178;
  undefined8 *local_170 [11];
  longlong lStack_118;
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
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
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  piVar12 = (int *)0x0;
  local_1e0 = (int *)0x0;
  local_1d8 = 0;
  local_180 = (int *)0x0;
  local_178 = 0;
  local_190 = (void *)0x0;
  local_188 = 0;
  local_1a0 = (void *)0x0;
  local_198 = 0;
  local_1f0 = CONCAT44(local_1f0._4_4_,param_2);
  iVar18 = 0x3819ffe4;
  local_170[10] = (undefined8 *)0x0;
  lStack_118 = 0;
  local_170[8] = (undefined8 *)0x0;
  local_170[9] = (undefined8 *)0x0;
  local_170[6] = (undefined8 *)0x0;
  local_170[7] = (undefined8 *)0x0;
  local_170[4] = (undefined8 *)0x0;
  local_170[5] = (undefined8 *)0x0;
  local_170[2] = (undefined8 *)0x0;
  local_170[3] = (undefined8 *)0x0;
  local_170[0] = (undefined8 *)0x0;
  local_170[1] = (undefined8 *)0x0;
  local_1e8 = param_3;
  iVar9 = FUN_1419ef5f0((&DAT_1464c9c48)[param_3]);
  if (iVar9 < 3) {
LAB_1424cfbc6:
    local_1f8 = 0;
  }
  else {
    piVar19 = piVar12;
    iVar9 = 0;
    iVar11 = 0;
    if (0 < param_2) {
      TArray<float,FDefaultAllocator>::ResizeTo(&local_1e0,param_2);
      piVar19 = local_1e0;
      iVar9 = (int)local_1d8;
      iVar11 = local_1d8._4_4_;
    }
    param_2 = param_2 + iVar9;
    local_1d8 = CONCAT44(local_1d8._4_4_,param_2);
    if (iVar11 < param_2) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1e0,iVar9);
      piVar19 = local_1e0;
      param_2 = (int)local_1d8;
    }
    uVar23 = local_1f0;
    iVar9 = (int)local_1f0;
    lVar22 = (longlong)(int)local_1f0;
    if (0 < (int)local_1f0) {
      lVar13 = 0;
      do {
        iVar18 = iVar18 * 0xbb38435 + 0x3619636b;
        piVar19[lVar13] = iVar18;
        lVar13 = lVar13 + 1;
      } while (lVar13 < lVar22);
    }
    local_178 = CONCAT44(local_178._4_4_,param_2);
    iVar18 = 0;
    if (param_2 != 0) {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_180,param_2,0);
      piVar12 = local_180;
      _guard_xfg_dispatch_icall_nop(local_180,piVar19,(longlong)param_2 << 2);
      iVar18 = (int)local_178;
    }
    AlgoImpl::
    IntroSortInternal<unsigned_int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,TLess<unsigned_int>_>_>
              (piVar12,(longlong)iVar18,local_1f7[0],local_1f7);
    lVar13 = 0;
    iVar18 = iVar9 * 4;
    do {
      local_200 = &local_88;
      local_74 = _DAT_1468b5d78;
      uStack_70 = uRam00000001468b5d7c;
      uStack_6c = uRam00000001468b5d80;
      uStack_68 = uRam00000001468b5d84;
      local_78 = 1;
      local_88 = 0;
      uStack_80 = 0;
      local_64 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_208 = 0x209;
      (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_1d0,param_1,iVar18);
      ppuVar20 = local_170 + lVar13 + 10;
      if (ppuVar20 == &local_1d0) {
LAB_1424cf195:
        puVar1 = local_1d0;
        if (local_1d0 != (undefined8 *)0x0) {
          LOCK();
          piVar12 = (int *)(local_1d0 + 1);
          iVar11 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(local_1d0 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar24 = *(int *)((longlong)puVar1 + 0xc) == 0;
              if (bVar24) {
                *(int *)((longlong)puVar1 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar24) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar10 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar14 + 8) = puVar1;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar1)(puVar1,1);
            }
          }
        }
      }
      else {
        puVar1 = *ppuVar20;
        *ppuVar20 = local_1d0;
        local_1d0 = (undefined8 *)0x0;
        if (puVar1 != (undefined8 *)0x0) {
          LOCK();
          piVar12 = (int *)(puVar1 + 1);
          iVar11 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(puVar1 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar24 = *(int *)((longlong)puVar1 + 0xc) == 0;
              if (bVar24) {
                *(int *)((longlong)puVar1 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar24) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar10 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar14 + 8) = puVar1;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar1)(puVar1,1);
            }
          }
          goto LAB_1424cf195;
        }
      }
      puVar1 = *ppuVar20;
      local_200 = (undefined8 *)CONCAT71(local_200._1_7_,0x1c);
      local_208 = 4;
      (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,&local_1c8,param_1,puVar1);
      ppuVar20 = local_170 + lVar13 + 6;
      if (ppuVar20 == &local_1c8) {
LAB_1424cf309:
        puVar2 = local_1c8;
        if (local_1c8 != (undefined8 *)0x0) {
          LOCK();
          piVar12 = (int *)(local_1c8 + 1);
          iVar11 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(local_1c8 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar24 = *(int *)((longlong)puVar2 + 0xc) == 0;
              if (bVar24) {
                *(int *)((longlong)puVar2 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar24) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar10 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar14 + 8) = puVar2;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar2)(puVar2,1);
            }
          }
        }
      }
      else {
        puVar2 = *ppuVar20;
        *ppuVar20 = local_1c8;
        local_1c8 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
          LOCK();
          piVar12 = (int *)(puVar2 + 1);
          iVar11 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(puVar2 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar24 = *(int *)((longlong)puVar2 + 0xc) == 0;
              if (bVar24) {
                *(int *)((longlong)puVar2 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar24) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar10 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar14 + 8) = puVar2;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar2)(puVar2,1);
            }
          }
          goto LAB_1424cf309;
        }
      }
      local_208 = CONCAT31(local_208._1_3_,0x1c);
      (**(code **)(*DAT_146ab6358 + 0x608))(DAT_146ab6358,&local_1c0,param_1,puVar1);
      ppuVar20 = local_170 + lVar13 + 2;
      if (ppuVar20 == &local_1c0) {
LAB_1424cf472:
        puVar1 = local_1c0;
        if (local_1c0 != (undefined8 *)0x0) {
          LOCK();
          piVar12 = (int *)(local_1c0 + 1);
          iVar11 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(local_1c0 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar24 = *(int *)((longlong)puVar1 + 0xc) == 0;
              if (bVar24) {
                *(int *)((longlong)puVar1 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar24) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar10 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar14 + 8) = puVar1;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar1)(puVar1,1);
            }
          }
        }
      }
      else {
        puVar1 = *ppuVar20;
        *ppuVar20 = local_1c0;
        local_1c0 = (undefined8 *)0x0;
        if (puVar1 != (undefined8 *)0x0) {
          LOCK();
          piVar12 = (int *)(puVar1 + 1);
          iVar11 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(puVar1 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar24 = *(int *)((longlong)puVar1 + 0xc) == 0;
              if (bVar24) {
                *(int *)((longlong)puVar1 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar24) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar10 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar14 + 8) = puVar1;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar1)(puVar1,1);
            }
          }
          goto LAB_1424cf472;
        }
      }
      local_200 = &local_88;
      local_208 = 0x209;
      (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_1b8,param_1,iVar18);
      ppuVar20 = local_170 + lVar13 + 8;
      if (ppuVar20 == &local_1b8) {
LAB_1424cf5ea:
        puVar1 = local_1b8;
        if (local_1b8 != (undefined8 *)0x0) {
          LOCK();
          piVar12 = (int *)(local_1b8 + 1);
          iVar11 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(local_1b8 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar24 = *(int *)((longlong)puVar1 + 0xc) == 0;
              if (bVar24) {
                *(int *)((longlong)puVar1 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar24) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar10 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar14 + 8) = puVar1;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar1)(puVar1,1);
            }
          }
        }
      }
      else {
        puVar1 = *ppuVar20;
        *ppuVar20 = local_1b8;
        local_1b8 = (undefined8 *)0x0;
        if (puVar1 != (undefined8 *)0x0) {
          LOCK();
          piVar12 = (int *)(puVar1 + 1);
          iVar11 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(puVar1 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar24 = *(int *)((longlong)puVar1 + 0xc) == 0;
              if (bVar24) {
                *(int *)((longlong)puVar1 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar24) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar10 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar14 + 8) = puVar1;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar1)(puVar1,1);
            }
          }
          goto LAB_1424cf5ea;
        }
      }
      puVar1 = *ppuVar20;
      local_200 = (undefined8 *)CONCAT71(local_200._1_7_,0x1c);
      local_208 = 4;
      (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,&local_1b0,param_1,puVar1);
      ppuVar20 = local_170 + lVar13 + 4;
      if (ppuVar20 == &local_1b0) {
LAB_1424cf75e:
        puVar2 = local_1b0;
        if (local_1b0 != (undefined8 *)0x0) {
          LOCK();
          piVar12 = (int *)(local_1b0 + 1);
          iVar11 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(local_1b0 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar24 = *(int *)((longlong)puVar2 + 0xc) == 0;
              if (bVar24) {
                *(int *)((longlong)puVar2 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar24) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar10 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar14 + 8) = puVar2;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar2)(puVar2,1);
            }
          }
        }
      }
      else {
        puVar2 = *ppuVar20;
        *ppuVar20 = local_1b0;
        local_1b0 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
          LOCK();
          piVar12 = (int *)(puVar2 + 1);
          iVar11 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(puVar2 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar24 = *(int *)((longlong)puVar2 + 0xc) == 0;
              if (bVar24) {
                *(int *)((longlong)puVar2 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar24) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar10 == 0) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar14 + 8) = puVar2;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar2)(puVar2,1);
            }
          }
          goto LAB_1424cf75e;
        }
      }
      local_208 = CONCAT31(local_208._1_3_,0x1c);
      (**(code **)(*DAT_146ab6358 + 0x608))(DAT_146ab6358,&local_1a8,param_1,puVar1);
      lVar14 = 0;
      ppuVar20 = local_170 + lVar13;
      if (ppuVar20 == &local_1a8) {
LAB_1424cf8c2:
        puVar1 = local_1a8;
        if (local_1a8 != (undefined8 *)0x0) {
          LOCK();
          piVar12 = (int *)(local_1a8 + 1);
          iVar11 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(local_1a8 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar24 = *(int *)((longlong)puVar1 + 0xc) == 0;
              if (bVar24) {
                *(int *)((longlong)puVar1 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar24) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar10 != 0) {
                  lVar14 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar14 + 8) = puVar1;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar1)(puVar1,1);
            }
          }
        }
      }
      else {
        puVar1 = *ppuVar20;
        *ppuVar20 = local_1a8;
        local_1a8 = (undefined8 *)0x0;
        if (puVar1 != (undefined8 *)0x0) {
          LOCK();
          piVar12 = (int *)(puVar1 + 1);
          iVar11 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(puVar1 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar24 = *(int *)((longlong)puVar1 + 0xc) == 0;
              if (bVar24) {
                *(int *)((longlong)puVar1 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar24) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar15 = lVar14;
                if (uVar10 != 0) {
                  lVar15 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar15 + 8) = puVar1;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar1)(puVar1,1);
            }
          }
          goto LAB_1424cf8c2;
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < 2);
    local_200._0_4_ = 1;
    local_208 = iVar18;
    pvVar16 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))(DAT_146ab6358,param_1,local_170[10],0);
    _Size = (size_t)iVar18;
    _guard_xfg_dispatch_icall_nop(pvVar16,local_1e0,_Size);
    (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,param_1,local_170[10]);
    local_200._0_4_ = 1;
    local_208 = iVar18;
    pvVar16 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))(DAT_146ab6358,param_1,local_170[8],0);
    _guard_xfg_dispatch_icall_nop(pvVar16,local_1e0,_Size);
    (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,param_1,local_170[8]);
    local_108 = local_170[6];
    local_f8 = local_170[2];
    local_e8 = local_170[4];
    uVar3 = local_e8;
    local_d8 = local_170[0];
    puVar1 = local_d8;
    uStack_100 = local_170[7];
    uStack_f0 = local_170[3];
    uStack_e0 = local_170[5];
    uVar6 = uStack_e0;
    uStack_d0 = local_170[1];
    uVar7 = uStack_d0;
    local_c8 = local_170[6];
    uStack_c0 = local_170[7];
    local_e8._0_4_ = SUB84(local_170[4],0);
    local_e8._4_4_ = (undefined4)((ulonglong)local_170[4] >> 0x20);
    uStack_e0._0_4_ = SUB84(local_170[5],0);
    uStack_e0._4_4_ = (undefined4)((ulonglong)local_170[5] >> 0x20);
    local_b8 = local_170[2];
    uStack_b0 = local_170[3];
    local_d8._0_4_ = SUB84(local_170[0],0);
    local_d8._4_4_ = (undefined4)((ulonglong)local_170[0] >> 0x20);
    uStack_d0._0_4_ = SUB84(local_170[1],0);
    uStack_d0._4_4_ = (undefined4)((ulonglong)local_170[1] >> 0x20);
    local_200 = (undefined8 *)CONCAT44(local_200._4_4_,local_1e8);
    local_98 = (undefined4)local_d8;
    uStack_94 = local_d8._4_4_;
    uStack_90 = (undefined4)uStack_d0;
    uStack_8c = uStack_d0._4_4_;
    local_208 = iVar9;
    local_a8 = (undefined4)local_e8;
    uStack_a4 = local_e8._4_4_;
    uStack_a0 = (undefined4)uStack_e0;
    uStack_9c = uStack_e0._4_4_;
    local_e8 = uVar3;
    uStack_e0 = uVar6;
    local_d8 = puVar1;
    uStack_d0 = uVar7;
    iVar11 = FUN_1424d3fe0(param_1,&local_c8,0,0xffffffff);
    if (0 < iVar9) {
      TArray<float,FDefaultAllocator>::ResizeTo(&local_190,uVar23 & 0xffffffff);
    }
    iVar17 = iVar9 + (int)local_188;
    local_188 = CONCAT44(local_188._4_4_,iVar17);
    if (local_188._4_4_ < iVar17) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_190);
    }
    if (0 < iVar9) {
      TArray<float,FDefaultAllocator>::ResizeTo(&local_1a0,uVar23 & 0xffffffff);
    }
    iVar17 = iVar9 + (int)local_198;
    local_198 = CONCAT44(local_198._4_4_,iVar17);
    if (local_198._4_4_ < iVar17) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1a0);
    }
    uVar3 = local_170[(longlong)iVar11 + 10];
    local_200 = (undefined8 *)((ulonglong)local_200 & 0xffffffff00000000);
    local_208 = iVar18;
    pvVar16 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))(DAT_146ab6358,param_1,uVar3,0);
    pvVar5 = local_190;
    _guard_xfg_dispatch_icall_nop(local_190,pvVar16,_Size);
    (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,param_1,uVar3);
    uVar3 = local_170[(longlong)iVar11 + 8];
    local_200 = (undefined8 *)((ulonglong)local_200 & 0xffffffff00000000);
    local_208 = iVar18;
    _Src = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))(DAT_146ab6358,param_1,uVar3,0);
    pvVar16 = local_1a0;
    _guard_xfg_dispatch_icall_nop(local_1a0,_Src,_Size);
    (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,param_1,uVar3);
    local_1f8 = 1;
    if (0 < iVar9) {
      lVar13 = 0;
      piVar12 = local_180;
      do {
        piVar19 = (int *)(((longlong)pvVar16 - (longlong)local_180) + (longlong)piVar12);
        if ((*(int *)((longlong)piVar19 + ((longlong)pvVar5 - (longlong)pvVar16)) != *piVar12) ||
           (*piVar19 != *piVar12)) goto LAB_1424cfbc6;
        lVar13 = lVar13 + 1;
        piVar12 = piVar12 + 1;
      } while (lVar13 < lVar22);
    }
  }
  ppuVar20 = local_170 + 2;
  lVar22 = 2;
  local_1f0 = 2;
  do {
    puVar1 = ppuVar20[0xffffffffffffffff];
    ppuVar20 = ppuVar20 + 0xffffffffffffffff;
    lVar22 = lVar22 + -1;
    if (puVar1 != (undefined8 *)0x0) {
      LOCK();
      piVar12 = (int *)(puVar1 + 1);
      iVar9 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        if ((*(char *)(puVar1 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')
            ))) {
          LOCK();
          bVar24 = *(int *)((longlong)puVar1 + 0xc) == 0;
          if (bVar24) {
            *(int *)((longlong)puVar1 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar24) {
            uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar10 == 0) {
              lVar13 = 0;
            }
            else {
              lVar13 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar13 + 8) = puVar1;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar1)(puVar1,1);
        }
      }
    }
  } while (lVar22 != 0);
  lVar22 = 2;
  ppuVar20 = local_170 + 4;
  do {
    puVar1 = ppuVar20[0xffffffffffffffff];
    ppuVar20 = ppuVar20 + 0xffffffffffffffff;
    lVar22 = lVar22 + -1;
    if (puVar1 != (undefined8 *)0x0) {
      LOCK();
      piVar12 = (int *)(puVar1 + 1);
      iVar9 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        if ((*(char *)(puVar1 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')
            ))) {
          LOCK();
          bVar24 = *(int *)((longlong)puVar1 + 0xc) == 0;
          if (bVar24) {
            *(int *)((longlong)puVar1 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar24) {
            uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar10 == 0) {
              lVar13 = 0;
            }
            else {
              lVar13 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar13 + 8) = puVar1;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar1)(puVar1,1);
        }
      }
    }
  } while (lVar22 != 0);
  lVar22 = 2;
  ppuVar20 = local_170 + 6;
  do {
    puVar1 = ppuVar20[0xffffffffffffffff];
    ppuVar20 = ppuVar20 + 0xffffffffffffffff;
    lVar22 = lVar22 + -1;
    if (puVar1 != (undefined8 *)0x0) {
      LOCK();
      piVar12 = (int *)(puVar1 + 1);
      iVar9 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        if ((*(char *)(puVar1 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')
            ))) {
          LOCK();
          bVar24 = *(int *)((longlong)puVar1 + 0xc) == 0;
          if (bVar24) {
            *(int *)((longlong)puVar1 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar24) {
            uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar10 == 0) {
              lVar13 = 0;
            }
            else {
              lVar13 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar13 + 8) = puVar1;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar1)(puVar1,1);
        }
      }
    }
  } while (lVar22 != 0);
  lVar22 = 2;
  ppuVar20 = local_170 + 8;
  do {
    puVar1 = ppuVar20[0xffffffffffffffff];
    ppuVar20 = ppuVar20 + 0xffffffffffffffff;
    lVar22 = lVar22 + -1;
    if (puVar1 != (undefined8 *)0x0) {
      LOCK();
      piVar12 = (int *)(puVar1 + 1);
      iVar9 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        if ((*(char *)(puVar1 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')
            ))) {
          LOCK();
          bVar24 = *(int *)((longlong)puVar1 + 0xc) == 0;
          if (bVar24) {
            *(int *)((longlong)puVar1 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar24) {
            uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar10 == 0) {
              lVar13 = 0;
            }
            else {
              lVar13 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar13 + 8) = puVar1;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar1)(puVar1,1);
        }
      }
    }
  } while (lVar22 != 0);
  lVar22 = 2;
  ppuVar20 = local_170 + 10;
  do {
    puVar1 = ppuVar20[0xffffffffffffffff];
    ppuVar20 = ppuVar20 + 0xffffffffffffffff;
    lVar22 = lVar22 + -1;
    if (puVar1 != (undefined8 *)0x0) {
      LOCK();
      piVar12 = (int *)(puVar1 + 1);
      iVar9 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        if ((*(char *)(puVar1 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')
            ))) {
          LOCK();
          bVar24 = *(int *)((longlong)puVar1 + 0xc) == 0;
          if (bVar24) {
            *(int *)((longlong)puVar1 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar24) {
            uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar10 == 0) {
              lVar13 = 0;
            }
            else {
              lVar13 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar13 + 8) = puVar1;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar1)(puVar1,1);
        }
      }
    }
  } while (lVar22 != 0);
  puVar21 = local_110;
  uVar23 = local_1f0;
  do {
    puVar1 = *(undefined8 **)(puVar21 + -8);
    puVar21 = puVar21 + -8;
    uVar23 = uVar23 + -1;
    if (puVar1 != (undefined8 *)0x0) {
      LOCK();
      piVar12 = (int *)(puVar1 + 1);
      iVar9 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        if ((*(char *)(puVar1 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')
            ))) {
          LOCK();
          bVar24 = *(int *)((longlong)puVar1 + 0xc) == 0;
          if (bVar24) {
            *(int *)((longlong)puVar1 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar24) {
            uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar10 == 0) {
              lVar22 = 0;
            }
            else {
              lVar22 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar22 + 8) = puVar1;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar1)(puVar1,1);
        }
      }
    }
    uVar4 = local_1f8;
  } while (uVar23 != 0);
  if (local_1a0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_190 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_180 != (int *)0x0) {
    FMemory::Free();
  }
  if (local_1e0 != (int *)0x0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 1424d0050 FUN_1424d0050 body=659 status=ok
// SIG undefined FUN_1424d0050(void)

void FUN_1424d0050(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_146afbc28) {
    _Init_thread_header(&DAT_146afbc28);
    if (DAT_146afbc28 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146afbc20 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GPUSort.DebugOffsets");
      _Init_thread_footer(&DAT_146afbc28);
    }
  }
  if (*piVar5 < DAT_146afbc38) {
    _Init_thread_header(&DAT_146afbc38);
    if (DAT_146afbc38 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146afbc30 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GPUSort.DebugSort");
      _Init_thread_footer(&DAT_146afbc38);
    }
  }
  plVar3 = DAT_146afbc20;
  iVar1 = *(int *)(DAT_146af7af8 + 4);
  iVar2 = *(int *)(DAT_146af7b98 + 4);
  FString::PrintfImpl(&local_38,&DAT_143f3edc0,1);
  puVar4 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  (**(code **)(*plVar3 + 0x60))(plVar3,puVar4,0x8000000);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar3 = DAT_146afbc30;
  FString::PrintfImpl(&local_28,&DAT_143f3edc0,1);
  puVar4 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar4 = local_28;
  }
  (**(code **)(*plVar3 + 0x60))(plVar3,puVar4,0x8000000);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1424ceef0(param_1,param_2,param_3);
  plVar3 = DAT_146afbc20;
  FString::PrintfImpl(&local_28,&DAT_143f3edc0,iVar1 != 0);
  puVar4 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar4 = local_28;
  }
  (**(code **)(*plVar3 + 0x60))(plVar3,puVar4,0x8000000);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar3 = DAT_146afbc30;
  FString::PrintfImpl(&local_38,&DAT_143f3edc0,iVar2 != 0);
  puVar4 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  (**(code **)(*plVar3 + 0x60))(plVar3,puVar4,0x8000000);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424d0300 FUN_1424d0300 body=74 status=ok
// SIG undefined FUN_1424d0300(void)

void FUN_1424d0300(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 8);
  FUN_1419e0a40(param_2,param_1 + 0x10);
  FUN_1419e0b60(param_2,param_1 + 0x16);
  FUN_1419e0b60(param_2,param_1 + 0x1a);
  return;
}



// FUNCTION 1424d0350 FUN_1424d0350 body=50 status=ok
// SIG undefined FUN_1424d0350(void)

void FUN_1424d0350(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 8);
  FUN_1419e0b60(param_2,param_1 + 0x10);
  return;
}



// FUNCTION 1424d0390 FUN_1424d0390 body=158 status=ok
// SIG undefined FUN_1424d0390(void)

void FUN_1424d0390(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 8);
  FUN_1419e0a40(param_2,param_1 + 0x10);
  FUN_1419e0b60(param_2,param_1 + 0x16);
  FUN_1419e0b60(param_2,param_1 + 0x1a);
  FUN_1419e0b60(param_2,param_1 + 0x20);
  FUN_1419e0b60(param_2,param_1 + 0x24);
  FUN_1419e0a40(param_2,param_1 + 0x28);
  FUN_1419e0a40(param_2,param_1 + 0x2e);
  FUN_1419e0a40(param_2,param_1 + 0x34);
  FUN_1419e0b60(param_2,param_1 + 0x3a);
  FUN_1419e0a40(param_2,param_1 + 0x3e);
  return;
}



// FUNCTION 1424d0430 FUN_1424d0430 body=649 status=ok
// SIG undefined FUN_1424d0430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424d0430(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *local_78;
  longlong *local_70;
  longlong local_68 [3];
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined1 local_40;
  longlong local_3c;
  undefined4 local_34;
  longlong local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464af950);
  if (((*(char *)(param_1 + 0x8f0) != '\0') && ((*(byte *)(param_2 + 0x28) & 2) != 0)) &&
     (*(longlong *)(param_2 + 0x70) != 0)) {
    iVar9 = 100;
    iVar6 = *(int *)(param_1 + 0x940);
    while (0 < iVar6) {
      plVar7 = (longlong *)FTaskGraphInterface::Get();
      (**(code **)(*plVar7 + 0x48))(plVar7,param_1 + 0x918,0xff);
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) break;
      iVar6 = *(int *)(param_1 + 0x940);
    }
  }
  FUN_1425053b0(param_1,param_2);
  plVar7 = (longlong *)0x0;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    plVar8 = (longlong *)operator_new(0x10);
    plVar10 = plVar7;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      plVar8[1] = 0;
      plVar10 = plVar8;
    }
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_DestroyObject_14413b698;
      plVar8[2] = (longlong)plVar10;
      plVar7 = plVar8;
    }
    local_78 = plVar10;
    local_70 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_78,plVar10,plVar10);
    if ((longlong **)(param_1 + 0x840) != &local_78) {
      *(longlong **)(param_1 + 0x840) = plVar10;
      local_78 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x848,&local_70);
      plVar7 = local_70;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      lVar4 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  if (((*(byte *)(param_2 + 0x28) & 1) == 0) ||
     (iVar6 = FArchive::CustomVer(param_2,&DAT_1464af950), 0xd < iVar6)) {
    FUN_1424bd7e0(*(undefined8 *)(param_1 + 0x840),param_2,0);
  }
  else {
    local_68[0] = 0;
    local_68[1] = 0;
    FUN_1424bd9e0(local_68,param_2,0);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(char *)(param_1 + 0x880) == '\0')) {
    if (*(int *)(*(undefined8 **)(param_1 + 0x840) + 1) < 1) {
      local_28 = DAT_1468b5d98;
      local_34 = DAT_1468b5d98;
      plVar7 = &local_3c;
      local_30 = _DAT_1468b5d90;
      local_3c = _DAT_1468b5d90;
      local_24 = 0;
    }
    else {
      puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0x840);
      local_40 = 1;
      uStack_50 = *(undefined4 *)(puVar2 + 1);
      local_68[2] = *puVar2;
      uStack_44 = *(undefined4 *)(puVar2 + 3);
      plVar7 = local_68 + 2;
      uStack_4c = puVar2[2];
    }
    lVar3 = plVar7[1];
    lVar4 = plVar7[2];
    lVar5 = plVar7[3];
    *(longlong *)(param_1 + 0x868) = *plVar7;
    *(longlong *)(param_1 + 0x870) = lVar3;
    *(longlong *)(param_1 + 0x878) = lVar4;
    *(int *)(param_1 + 0x880) = (int)lVar5;
  }
  return;
}



// FUNCTION 1424d06c0 FUN_1424d06c0 body=276 status=ok
// SIG undefined FUN_1424d06c0(void)

void FUN_1424d06c0(longlong param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  
  fVar4 = param_3[2] - param_2[2];
  fVar2 = (param_3[1] - param_2[1]) * (param_3[1] - param_2[1]) +
          (*param_3 - *param_2) * (*param_3 - *param_2) + fVar4 * fVar4;
  fVar1 = fVar4;
  if ((fVar2 != 1.0) && (fVar1 = DAT_1468b5d98, 1e-08 <= fVar2)) {
    auVar3 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar1 = auVar3._0_4_;
    fVar1 = fVar1 + fVar1 * (0.5 - fVar2 * 0.5 * fVar1 * fVar1);
    fVar1 = fVar4 * (fVar1 + fVar1 * (0.5 - fVar2 * 0.5 * fVar1 * fVar1));
  }
  fVar2 = -1.0;
  if ((-1.0 <= fVar1) && (fVar2 = fVar1, 1.0 <= fVar1)) {
    fVar2 = 1.0;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar2);
  *(float *)(param_1 + 0x18) = ((1.5707964 - fVar1) + fVar1 * param_4) * 57.295776;
  return;
}



// FUNCTION 1424d07e0 FUN_1424d07e0 body=315 status=ok
// SIG undefined FUN_1424d07e0(void)

void FUN_1424d07e0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *param_1;
  fVar4 = fVar2 * fVar2;
  fVar1 = SQRT((param_3[1] - param_2[1]) * (param_3[1] - param_2[1]) +
               (*param_3 - *param_2) * (*param_3 - *param_2));
  fVar3 = fVar1 * param_4;
  fVar2 = fVar4 * fVar2 * fVar2 -
          (fVar3 * fVar1 - ((param_3[2] - param_2[2]) + (param_3[2] - param_2[2])) * fVar2 * fVar2)
          * param_4;
  if (fVar2 <= 0.0) {
    FUN_1424d0920();
    return;
  }
  fVar2 = SQRT(fVar2);
  fVar3 = 1.0 / fVar3;
  fVar1 = _guard_xfg_dispatch_icall_nop(-((fVar4 - fVar2) * fVar3));
  fVar2 = _guard_xfg_dispatch_icall_nop(-((fVar4 + fVar2) * fVar3));
  if (fVar2 <= fVar1) {
    fVar1 = fVar2;
  }
  param_1[6] = fVar1 * 57.295776;
  return;
}



// FUNCTION 1424d0920 FUN_1424d0920 body=283 status=ok
// SIG undefined FUN_1424d0920(void)

void FUN_1424d0920(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = -param_4;
  fVar6 = param_3[2] - param_2[2];
  fVar2 = (param_3[1] - param_2[1]) * (param_3[1] - param_2[1]) +
          (*param_3 - *param_2) * (*param_3 - *param_2);
  fVar3 = param_4 * -4.0 * fVar6 * fVar5 * fVar6 - fVar5 * fVar5 * fVar2 * -4.0;
  fVar1 = 0.0;
  if (0.0 <= fVar3) {
    fVar3 = SQRT(fVar3);
    fVar4 = fVar6 * fVar5 + fVar3 * 0.5;
    fVar3 = ((fVar5 + fVar5) * fVar6 - fVar3) * 0.5;
    fVar1 = fVar3;
    if (((0.0 <= fVar4) && (fVar1 = fVar4, 0.0 <= fVar3)) && (fVar1 = fVar3, fVar4 <= fVar3)) {
      fVar1 = fVar4;
    }
  }
  *param_1 = SQRT(fVar1);
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar1 / (fVar5 * SQRT(fVar2)));
  param_1[6] = fVar1 * 57.295776;
  return;
}



// FUNCTION 1424d0a40 FUN_1424d0a40 body=659 status=ok
// SIG undefined FUN_1424d0a40(void)

void FUN_1424d0a40(longlong param_1,int param_2,uint *param_3)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar6 = *param_3;
  lVar5 = (longlong)param_2;
  uVar3 = (ushort)(uVar6 >> 0x10);
  uVar4 = uVar6 >> 0x17 & 0xff;
  if (uVar4 < 0x71) {
    *(ushort *)(lVar2 + lVar5 * 8) = uVar3 & 0x8000;
    iVar1 = -uVar4 + 0x7e;
    if (iVar1 < 0x19) {
      uVar6 = uVar6 & 0x7fffff | 0x800000;
      uVar3 = (ushort)(uVar6 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar3 & 0x8000;
      *(ushort *)(lVar2 + lVar5 * 8) = uVar3;
      if ((uVar6 >> ((char)-uVar4 + 0x7dU & 0x1f) & 1) != 0) {
        uVar3 = uVar3 + 1;
        goto LAB_1424d0b34;
      }
    }
  }
  else if (uVar4 < 0x8f) {
    uVar3 = ((uVar3 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar6 >> 0xd) & 0x3ff | uVar3 & 0x8000;
LAB_1424d0b34:
    *(ushort *)(lVar2 + lVar5 * 8) = uVar3;
  }
  else {
    *(ushort *)(lVar2 + lVar5 * 8) =
         uVar3 & 0x8000 | *(ushort *)(lVar2 + lVar5 * 8) & 0x7bff | 0x7bff;
  }
  uVar6 = param_3[1];
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar3 = (ushort)(uVar6 >> 0x10);
  uVar4 = uVar6 >> 0x17 & 0xff;
  if (uVar4 < 0x71) {
    *(ushort *)(lVar2 + 2 + lVar5 * 8) = uVar3 & 0x8000;
    iVar1 = -uVar4 + 0x7e;
    if (iVar1 < 0x19) {
      uVar6 = uVar6 & 0x7fffff | 0x800000;
      uVar3 = (ushort)(uVar6 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar3 & 0x8000;
      *(ushort *)(lVar2 + 2 + lVar5 * 8) = uVar3;
      if ((uVar6 >> ((char)-uVar4 + 0x7dU & 0x1f) & 1) != 0) {
        uVar3 = uVar3 + 1;
        goto LAB_1424d0bef;
      }
    }
  }
  else if (uVar4 < 0x8f) {
    uVar3 = ((uVar3 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar6 >> 0xd) & 0x3ff | uVar3 & 0x8000;
LAB_1424d0bef:
    *(ushort *)(lVar2 + 2 + lVar5 * 8) = uVar3;
  }
  else {
    *(ushort *)(lVar2 + 2 + lVar5 * 8) =
         uVar3 & 0x8000 | *(ushort *)(lVar2 + 2 + lVar5 * 8) & 0x7bff | 0x7bff;
  }
  uVar6 = param_3[2];
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar3 = (ushort)(uVar6 >> 0x10);
  uVar4 = uVar6 >> 0x17 & 0xff;
  if (uVar4 < 0x71) {
    *(ushort *)(lVar2 + 4 + lVar5 * 8) = uVar3 & 0x8000;
    iVar1 = -uVar4 + 0x7e;
    if (0x18 < iVar1) goto LAB_1424d0cab;
    uVar6 = uVar6 & 0x7fffff | 0x800000;
    uVar3 = (ushort)(uVar6 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar3 & 0x8000;
    *(ushort *)(lVar2 + 4 + lVar5 * 8) = uVar3;
    if ((uVar6 >> ((char)-uVar4 + 0x7dU & 0x1f) & 1) == 0) goto LAB_1424d0cab;
    uVar3 = uVar3 + 1;
  }
  else {
    if (0x8e < uVar4) {
      *(ushort *)(lVar2 + 4 + lVar5 * 8) =
           uVar3 & 0x8000 | *(ushort *)(lVar2 + 4 + lVar5 * 8) & 0x7bff | 0x7bff;
      goto LAB_1424d0cab;
    }
    uVar3 = ((uVar3 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar6 >> 0xd) & 0x3ff | uVar3 & 0x8000;
  }
  *(ushort *)(lVar2 + 4 + lVar5 * 8) = uVar3;
LAB_1424d0cab:
  *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 6 + lVar5 * 8) = 0x3c00;
  return;
}



// FUNCTION 1424d0ce0 FUN_1424d0ce0 body=832 status=ok
// SIG undefined FUN_1424d0ce0(void)

void FUN_1424d0ce0(longlong param_1,int param_2,uint *param_3)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar6 = *param_3;
  lVar5 = (longlong)param_2;
  uVar3 = (ushort)(uVar6 >> 0x10);
  uVar4 = uVar6 >> 0x17 & 0xff;
  if (uVar4 < 0x71) {
    *(ushort *)(lVar2 + lVar5 * 8) = uVar3 & 0x8000;
    iVar1 = -uVar4 + 0x7e;
    if (iVar1 < 0x19) {
      uVar6 = uVar6 & 0x7fffff | 0x800000;
      uVar3 = (ushort)(uVar6 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar3 & 0x8000;
      *(ushort *)(lVar2 + lVar5 * 8) = uVar3;
      if ((uVar6 >> ((char)-uVar4 + 0x7dU & 0x1f) & 1) != 0) {
        uVar3 = uVar3 + 1;
        goto LAB_1424d0dd4;
      }
    }
  }
  else if (uVar4 < 0x8f) {
    uVar3 = ((uVar3 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar6 >> 0xd) & 0x3ff | uVar3 & 0x8000;
LAB_1424d0dd4:
    *(ushort *)(lVar2 + lVar5 * 8) = uVar3;
  }
  else {
    *(ushort *)(lVar2 + lVar5 * 8) =
         uVar3 & 0x8000 | *(ushort *)(lVar2 + lVar5 * 8) & 0x7bff | 0x7bff;
  }
  uVar6 = param_3[1];
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar3 = (ushort)(uVar6 >> 0x10);
  uVar4 = uVar6 >> 0x17 & 0xff;
  if (uVar4 < 0x71) {
    *(ushort *)(lVar2 + 2 + lVar5 * 8) = uVar3 & 0x8000;
    iVar1 = -uVar4 + 0x7e;
    if (iVar1 < 0x19) {
      uVar6 = uVar6 & 0x7fffff | 0x800000;
      uVar3 = (ushort)(uVar6 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar3 & 0x8000;
      *(ushort *)(lVar2 + 2 + lVar5 * 8) = uVar3;
      if ((uVar6 >> ((char)-uVar4 + 0x7dU & 0x1f) & 1) != 0) {
        uVar3 = uVar3 + 1;
        goto LAB_1424d0e8f;
      }
    }
  }
  else if (uVar4 < 0x8f) {
    uVar3 = ((uVar3 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar6 >> 0xd) & 0x3ff | uVar3 & 0x8000;
LAB_1424d0e8f:
    *(ushort *)(lVar2 + 2 + lVar5 * 8) = uVar3;
  }
  else {
    *(ushort *)(lVar2 + 2 + lVar5 * 8) =
         uVar3 & 0x8000 | *(ushort *)(lVar2 + 2 + lVar5 * 8) & 0x7bff | 0x7bff;
  }
  uVar6 = param_3[2];
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar3 = (ushort)(uVar6 >> 0x10);
  uVar4 = uVar6 >> 0x17 & 0xff;
  if (uVar4 < 0x71) {
    *(ushort *)(lVar2 + 4 + lVar5 * 8) = uVar3 & 0x8000;
    iVar1 = -uVar4 + 0x7e;
    if (0x18 < iVar1) goto LAB_1424d0f51;
    uVar6 = uVar6 & 0x7fffff | 0x800000;
    uVar3 = (ushort)(uVar6 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar3 & 0x8000;
    *(ushort *)(lVar2 + 4 + lVar5 * 8) = uVar3;
    if ((uVar6 >> ((char)-uVar4 + 0x7dU & 0x1f) & 1) == 0) goto LAB_1424d0f51;
    uVar3 = uVar3 + 1;
  }
  else {
    if (0x8e < uVar4) {
      *(ushort *)(lVar2 + 4 + lVar5 * 8) =
           uVar3 & 0x8000 | *(ushort *)(lVar2 + 4 + lVar5 * 8) & 0x7bff | 0x7bff;
      goto LAB_1424d0f51;
    }
    uVar3 = ((uVar3 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar6 >> 0xd) & 0x3ff | uVar3 & 0x8000;
  }
  *(ushort *)(lVar2 + 4 + lVar5 * 8) = uVar3;
LAB_1424d0f51:
  uVar6 = param_3[3];
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar3 = (ushort)(uVar6 >> 0x10);
  uVar4 = uVar6 >> 0x17 & 0xff;
  if (uVar4 < 0x71) {
    *(ushort *)(lVar2 + 6 + lVar5 * 8) = uVar3 & 0x8000;
    iVar1 = -uVar4 + 0x7e;
    if (0x18 < iVar1) {
      return;
    }
    uVar6 = uVar6 & 0x7fffff | 0x800000;
    uVar3 = (ushort)(uVar6 >> ((byte)iVar1 & 0x1f)) & 0x3ff | uVar3 & 0x8000;
    *(ushort *)(lVar2 + 6 + lVar5 * 8) = uVar3;
    if ((uVar6 >> ((char)-uVar4 + 0x7dU & 0x1f) & 1) == 0) {
      return;
    }
    uVar3 = uVar3 + 1;
  }
  else {
    if (0x8e < uVar4) {
      *(ushort *)(lVar2 + 6 + lVar5 * 8) =
           uVar3 & 0x8000 | *(ushort *)(lVar2 + 6 + lVar5 * 8) & 0x7bff | 0x7bff;
      return;
    }
    uVar3 = ((uVar3 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar6 >> 0xd) & 0x3ff | uVar3 & 0x8000;
  }
  *(ushort *)(lVar2 + 6 + lVar5 * 8) = uVar3;
  return;
}



// FUNCTION 1424d1020 FUN_1424d1020 body=382 status=ok
// SIG undefined FUN_1424d1020(void)

void FUN_1424d1020(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x698) = *param_2;
  *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x6a4) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x6a5) = *(undefined1 *)((longlong)param_2 + 0xd);
  *(undefined1 *)(param_1 + 0x6a6) = *(undefined1 *)((longlong)param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x6a7) = *(undefined1 *)((longlong)param_2 + 0xf);
  *(undefined8 *)(param_1 + 0x6a8) = param_2[2];
  *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)(param_1 + 0x6b4) = *(undefined1 *)((longlong)param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x6b5) = *(undefined1 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)(param_1 + 0x6b6) = *(undefined1 *)((longlong)param_2 + 0x1e);
  *(undefined1 *)(param_1 + 0x6b7) = *(undefined1 *)((longlong)param_2 + 0x1f);
  *(undefined8 *)(param_1 + 0x6b8) = param_2[4];
  *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 0x6c4) = *(undefined1 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0x6c5) = *(undefined1 *)((longlong)param_2 + 0x2d);
  *(undefined1 *)(param_1 + 0x6c6) = *(undefined1 *)((longlong)param_2 + 0x2e);
  *(undefined1 *)(param_1 + 0x6c7) = *(undefined1 *)((longlong)param_2 + 0x2f);
  TArray<FVertexStreamComponent,TFixedAllocator<4>_>::operator=(param_1 + 0x6c8,param_2 + 6);
  *(undefined8 *)(param_1 + 0x710) = param_2[0xf];
  *(undefined4 *)(param_1 + 0x718) = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x71c) = *(undefined1 *)((longlong)param_2 + 0x84);
  *(undefined1 *)(param_1 + 0x71d) = *(undefined1 *)((longlong)param_2 + 0x85);
  *(undefined1 *)(param_1 + 0x71e) = *(undefined1 *)((longlong)param_2 + 0x86);
  *(undefined1 *)(param_1 + 0x71f) = *(undefined1 *)((longlong)param_2 + 0x87);
  *(undefined8 *)(param_1 + 0x720) = param_2[0x11];
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_2 + 0x12);
  *(undefined1 *)(param_1 + 0x72c) = *(undefined1 *)((longlong)param_2 + 0x94);
  *(undefined1 *)(param_1 + 0x72d) = *(undefined1 *)((longlong)param_2 + 0x95);
  *(undefined1 *)(param_1 + 0x72e) = *(undefined1 *)((longlong)param_2 + 0x96);
  *(undefined1 *)(param_1 + 0x72f) = *(undefined1 *)((longlong)param_2 + 0x97);
  FRenderResource::UpdateRHI(param_1);
  return;
}



// FUNCTION 1424d11a0 FUN_1424d11a0 body=580 status=ok
// SIG undefined FUN_1424d11a0(void)

void FUN_1424d11a0(float *param_1,float *param_2,float *param_3,float param_4,float param_5,
                  float param_6)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0.0 < param_5) {
    *param_1 = param_5;
    if (0.0 < param_6) {
      fVar1 = 0.0;
      if ((0.0 <= param_6) && (fVar1 = param_6, 1.0 <= param_6)) {
        fVar1 = 1.0;
      }
      FUN_1424d06c0(param_1,param_2,param_3,fVar1);
    }
    else {
      fVar5 = param_5 * param_5;
      fVar4 = SQRT((param_3[1] - param_2[1]) * (param_3[1] - param_2[1]) +
                   (*param_3 - *param_2) * (*param_3 - *param_2));
      fVar1 = ((param_3[2] - param_2[2]) + (param_3[2] - param_2[2])) * param_5 * param_5;
      fVar3 = fVar5 * param_5 * param_5 - (fVar4 * param_4 * fVar4 - fVar1) * param_4;
      if (0.0 < fVar3) {
        fVar3 = SQRT(fVar3);
        fVar4 = 1.0 / (fVar4 * param_4);
        fVar1 = _guard_xfg_dispatch_icall_nop(-((fVar5 - fVar3) * fVar4));
        fVar4 = _guard_xfg_dispatch_icall_nop(-((fVar5 + fVar3) * fVar4));
        if (fVar4 <= fVar1) {
          fVar1 = fVar4;
        }
        param_1[6] = fVar1 * 57.295776;
      }
      else {
        FUN_1424d0920(param_1,fVar1,fVar4,param_4);
      }
    }
  }
  else if (0.0 < param_6) {
    fVar1 = 0.0;
    if ((0.0 <= param_6) && (fVar1 = param_6, 1.0 <= param_6)) {
      fVar1 = 1.0;
    }
    FUN_1424d06c0(param_1,param_2,param_3,fVar1);
    fVar4 = SQRT((param_3[1] - param_2[1]) * (param_3[1] - param_2[1]) +
                 (*param_3 - *param_2) * (*param_3 - *param_2));
    uVar2 = __libm_sse2_sincosf_(param_1[6] * 0.017453292);
    fVar1 = (float)((ulonglong)uVar2 >> 0x20);
    *param_1 = (fVar4 / SQRT(((param_3[2] - param_2[2]) * fVar1 - (float)uVar2 * fVar4) /
                             (param_4 * 0.5 * fVar1))) / fVar1;
  }
  else {
    FUN_1424d0920(param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 1424d13f0 FUN_1424d13f0 body=808 status=ok
// SIG undefined FUN_1424d13f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424d13f0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined1 local_res18 [8];
  
  lVar2 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar6 = 0;
  if (*(longlong *)(lVar2 + 0x38) != 0) {
    FUN_141aaccb0(param_2,*(longlong *)(lVar2 + 0x38),param_1 + 8,param_4 + 0x7f0,0);
  }
  lVar2 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  lVar2 = *(longlong *)(lVar2 + 0x38);
  if (lVar2 == 0) {
    return;
  }
  local_res18[0] = 0;
  if (*(int *)(param_5 + 0x1a38) < 2) {
    uVar3 = *(undefined8 *)(param_4 + 0x688);
    if (0 < *(int *)(param_3 + 0x10)) {
      uVar10 = uVar6;
      do {
        iVar7 = (int)uVar10;
        if (*(undefined **)(*(longlong *)(param_3 + 8) + uVar6 * 8) == &DAT_146af7b00) {
          if (iVar7 != -1) {
            puVar11 = *(undefined4 **)(*(longlong *)(param_3 + 0x18) + (longlong)iVar7 * 8);
            *puVar11 = *(undefined4 *)(param_3 + 0xb8);
            goto LAB_1424d1616;
          }
          break;
        }
        uVar10 = (ulonglong)(iVar7 + 1);
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)*(int *)(param_3 + 0x10));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146afbc50) &&
       (_Init_thread_header(&DAT_146afbc50), DAT_146afbc50 == -1)) {
      _DAT_146afbc48 = 0;
      DAT_146afbc4c = 0;
      DAT_146afbc4e = 0;
      _Init_thread_footer(&DAT_146afbc50);
    }
    puVar11 = (undefined4 *)&DAT_146afbc48;
LAB_1424d1616:
    if (*(char *)((longlong)puVar11 + 6) == '\0') goto LAB_1424d1682;
    uVar1 = *(ushort *)(puVar11 + 1);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb388;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar3;
  }
  else {
    if (*(short *)(param_1 + 0x18) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x16);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar3 = *(undefined8 *)(param_4 + 0x660 + (ulonglong)*(uint *)(param_4 + 0x678) * 0x10);
      puVar5 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      *puVar8 = &PTR_LAB_144165218;
      puVar8[2] = lVar2;
      puVar8[4] = uVar3;
    }
    if (*(short *)(param_1 + 0x1c) == 0) goto LAB_1424d1682;
    local_res18[0] = 1;
    plVar9 = (longlong *)
             (((ulonglong)((uint)(*(int *)(param_4 + 0x680) - *(int *)(param_4 + 0x67c)) < 2) ^
              (ulonglong)*(uint *)(param_4 + 0x678)) * 0x10 + param_4 + 0x658);
    if (*plVar9 == 0) {
      plVar9 = (longlong *)((ulonglong)*(uint *)(param_4 + 0x678) * 0x10 + param_4 + 0x658);
    }
    lVar4 = plVar9[1];
    uVar1 = *(ushort *)(param_1 + 0x1a);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144165218;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = lVar4;
  }
  puVar8[2] = lVar2;
LAB_1424d1682:
  FUN_141aaccb0(param_2,lVar2,param_1 + 0x10,local_res18,0);
  return;
}



// FUNCTION 1424d1720 FUN_1424d1720 body=166 status=ok
// SIG undefined FUN_1424d1720(void)

void FUN_1424d1720(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  if (*(longlong *)(lVar1 + 0x38) != 0) {
    FUN_141aaccb0(param_2,*(longlong *)(lVar1 + 0x38),param_1 + 8,param_4 + 0x8e0,0);
  }
  FUN_1424d34d0(**(undefined8 **)(param_6 + 0x50),
                *(undefined4 *)(*(undefined8 **)(param_6 + 0x50) + 1),param_2,param_3);
  return;
}



// FUNCTION 1424d17d0 FUN_1424d17d0 body=458 status=ok
// SIG undefined FUN_1424d17d0(void)

void FUN_1424d17d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  lVar2 = *(longlong *)(lVar2 + 0x38);
  uVar1 = *(undefined4 *)(param_4 + 0x690);
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar3 = *(longlong **)(param_6 + 0x50);
  uVar4 = *(undefined8 *)(*plVar3 + 0x30);
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
  *(undefined4 *)(puVar6 + 2) = uVar1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_143f489e0;
  *(undefined4 *)(puVar6 + 4) = 0;
  puVar6[3] = uVar4;
  uVar1 = *(undefined4 *)(param_4 + 0x694);
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar4 = *(undefined8 *)(plVar3[1] + 0x30);
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
  *puVar6 = &PTR_LAB_143f489e0;
  *(undefined4 *)(puVar6 + 2) = uVar1;
  puVar6[3] = uVar4;
  *(undefined4 *)(puVar6 + 4) = 0;
  if (lVar2 != 0) {
    SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
              (param_2,lVar2,param_1 + 8,plVar3 + 2,0);
    SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
              (param_2,lVar2,param_1 + 0xe,(longlong)plVar3 + 0x1c,0);
    SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
              (param_2,lVar2,param_1 + 0x14,plVar3 + 5,0);
    SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
              (param_2,lVar2,param_1 + 0x1a,(longlong)plVar3 + 0x34,0);
    FUN_1404986d0(param_2,lVar2,param_1 + 0x20,plVar3 + 8,0);
  }
  return;
}



// FUNCTION 1424d19a0 FUN_1424d19a0 body=1730 status=ok
// SIG undefined FUN_1424d19a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424d19a0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  ulonglong param_5,longlong param_6,undefined4 param_7)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  void *_Dst;
  ulonglong uVar21;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  lVar7 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  lVar7 = *(longlong *)(lVar7 + 0x38);
  if (lVar7 != 0) {
    uVar21 = param_5;
    FUN_1424d13f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    (**(code **)(*param_4 + 0x70))(param_4);
    plVar1 = param_4 + -0x18;
    lVar8 = param_4[-0x17];
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    uVar13 = 0;
    local_68 = lVar8;
    if (0 < *(int *)(param_3 + 0x10)) {
      uVar16 = uVar13;
      do {
        iVar15 = (int)uVar16;
        if (*(undefined **)(*(longlong *)(param_3 + 8) + uVar13 * 8) == &DAT_146af7a60) {
          if (iVar15 != -1) {
            puVar20 = *(undefined4 **)(*(longlong *)(param_3 + 0x18) + (longlong)iVar15 * 8);
            *puVar20 = *(undefined4 *)(param_3 + 0xb8);
            goto LAB_1424d1ab2;
          }
          break;
        }
        uVar16 = (ulonglong)(iVar15 + 1);
        uVar13 = uVar13 + 1;
      } while ((longlong)uVar13 < (longlong)*(int *)(param_3 + 0x10));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146afbc60) &&
       (_Init_thread_header(&DAT_146afbc60), DAT_146afbc60 == -1)) {
      _DAT_146afbc58 = 0;
      DAT_146afbc5c = 0;
      DAT_146afbc5e = 0;
      _Init_thread_footer(&DAT_146afbc60);
    }
    puVar20 = (undefined4 *)&DAT_146afbc58;
LAB_1424d1ab2:
    if (*(char *)((longlong)puVar20 + 6) != '\0') {
      uVar3 = *(ushort *)(puVar20 + 1);
      puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar17 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar17 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar14;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar17;
      *(undefined8 **)(param_2 + 8) = puVar17 + 1;
      puVar17[1] = 0;
      *puVar17 = &PTR_LAB_144dcb388;
      puVar17[2] = lVar7;
      *(uint *)(puVar17 + 3) = (uint)uVar3;
      puVar17[4] = lVar8;
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_68);
    bVar10 = true;
    iVar15 = *(int *)(*(longlong *)(param_5 + 0x10) + 0x5c);
    if (*(short *)(param_1 + 0x22) != 0) {
      if ((int)param_4[-0x12] == -1) {
        uVar13 = 1;
      }
      else if (*(int *)((longlong)param_4 + -0x8c) == -1) {
        uVar13 = 0;
      }
      else {
        uVar13 = (ulonglong)
                 ((uint)(iVar15 - *(int *)((longlong)param_4 + -0x8c)) <
                 (uint)(iVar15 - (int)param_4[-0x12]));
      }
      uVar3 = *(ushort *)(param_1 + 0x20);
      puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      lVar8 = param_4[uVar13 * 2 + -0x15];
      puVar14 = puVar17 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar17 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar14;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar17;
      *(undefined8 **)(param_2 + 8) = puVar17 + 1;
      puVar17[1] = 0;
      *(uint *)(puVar17 + 3) = (uint)uVar3;
      *puVar17 = &PTR_LAB_144165218;
      puVar17[2] = lVar7;
      puVar17[4] = lVar8;
    }
    uVar12 = 0;
    if (*(short *)(param_1 + 0x26) != 0) {
      iVar5 = (int)param_4[-0x12];
      if (iVar5 == -1) {
        uVar12 = 1;
      }
      else {
        iVar6 = *(int *)((longlong)param_4 + -0x8c);
        if (iVar6 != -1) {
          bVar9 = (uint)(iVar15 - iVar6) < (uint)(iVar15 - iVar5);
          uVar12 = (uint)bVar9;
          if ((iVar6 != -1) &&
             (uVar19 = iVar5 - iVar6 >> 0x1f, (iVar5 - iVar6 ^ uVar19) - uVar19 < 3)) {
            uVar12 = (uint)!bVar9;
          }
        }
      }
      uVar3 = *(ushort *)(param_1 + 0x24);
      puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      lVar8 = param_4[(longlong)(int)uVar12 * 2 + -0x15];
      puVar14 = puVar17 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar17 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar14;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar17;
      *(undefined8 **)(param_2 + 8) = puVar17 + 1;
      puVar17[1] = 0;
      *(uint *)(puVar17 + 3) = (uint)uVar3;
      *puVar17 = &PTR_LAB_144165218;
      puVar17[2] = lVar7;
      puVar17[4] = lVar8;
    }
    uVar13 = 0;
    if ((int)param_4[-0x12] == -1) {
      uVar13 = 1;
    }
    else if (*(int *)((longlong)param_4 + -0x8c) != -1) {
      uVar13 = (ulonglong)
               ((uint)(iVar15 - *(int *)((longlong)param_4 + -0x8c)) <
               (uint)(iVar15 - (int)param_4[-0x12]));
    }
    uVar21 = uVar21 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,lVar7,param_1 + 0x28,plVar1 + (uVar13 + 1) * 8,uVar21);
    iVar5 = (int)param_4[-0x12];
    if (iVar5 == -1) {
      uVar12 = 1;
    }
    else {
      iVar6 = *(int *)((longlong)param_4 + -0x8c);
      uVar12 = 0;
      if (((iVar6 != -1) &&
          (uVar12 = (uint)((uint)(iVar15 - iVar6) < (uint)(iVar15 - iVar5)), iVar6 != -1)) &&
         (uVar19 = iVar5 - iVar6 >> 0x1f, (iVar5 - iVar6 ^ uVar19) - uVar19 < 3)) {
        uVar12 = 1 - uVar12;
      }
    }
    uVar21 = uVar21 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,lVar7,param_1 + 0x2e,plVar1 + ((longlong)(int)uVar12 + 1) * 8,uVar21);
    FUN_1404986d0(param_2,lVar7,param_1 + 0x34,plVar1,uVar21 & 0xffffffff00000000);
    if (*(short *)(param_1 + 0x3c) != 0) {
      cVar11 = (**(code **)(*param_4 + 0x70))(param_4);
      lVar8 = param_4[0x12f];
      if (cVar11 == '\0') {
        if (lVar8 != 0) {
          LOCK();
          *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
          UNLOCK();
        }
        bVar10 = false;
        bVar9 = true;
        local_60 = lVar8;
      }
      else {
        if (lVar8 != 0) {
          LOCK();
          *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
          UNLOCK();
        }
        bVar9 = false;
        local_58 = lVar8;
      }
      uVar3 = *(ushort *)(param_1 + 0x3a);
      puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar17 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar17 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar14;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar17;
      *(undefined8 **)(param_2 + 8) = puVar17 + 1;
      puVar17[1] = 0;
      *puVar17 = &PTR_LAB_144165218;
      puVar17[2] = lVar7;
      *(uint *)(puVar17 + 3) = (uint)uVar3;
      puVar17[4] = lVar8;
      if (bVar9) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_60);
      }
      if (bVar10) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
      }
      cVar11 = (**(code **)(*param_4 + 0x70))(param_4);
      puVar18 = (ulonglong *)param_4[0x130];
      puVar2 = puVar18 + (int)param_4[0x131];
      if (cVar11 == '\0') {
        if (puVar18 != puVar2) {
          do {
            uVar21 = *puVar18;
            if (uVar21 >> 0x20 == (ulonglong)*(uint *)(param_6 + 0x48)) goto LAB_1424d1f1a;
            puVar18 = puVar18 + 1;
          } while (puVar18 != puVar2);
        }
      }
      else if (puVar18 != puVar2) {
        do {
          uVar21 = *puVar18;
          if (uVar21 >> 0x20 == (ulonglong)*(uint *)(param_6 + 0x48)) goto LAB_1424d1f1a;
          puVar18 = puVar18 + 1;
        } while (puVar18 != puVar2);
      }
      uVar21 = 0;
LAB_1424d1f1a:
      local_50 = *(undefined4 *)(param_6 + 0x48);
      local_48 = 0;
      local_4c = (undefined4)uVar21;
      uVar12 = (uint)*(ushort *)(param_1 + 0x42);
      if (0xf < *(ushort *)(param_1 + 0x42)) {
        uVar12 = 0x10;
      }
      uVar21 = (ulonglong)uVar12;
      if (uVar12 != 0) {
        uVar3 = *(ushort *)(param_1 + 0x40);
        uVar4 = *(ushort *)(param_1 + 0x3e);
        _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar13 = uVar21 + (longlong)_Dst;
        if (*(ulonglong *)(param_2 + 0x38) < uVar13) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar12 + 0x10);
          _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
          uVar13 = (longlong)_Dst + uVar21;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar13;
        _guard_xfg_dispatch_icall_nop(_Dst,&local_50,uVar21);
        puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar17 + 6;
        if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
          puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar14 = puVar17 + 6;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar14;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar17;
        *(undefined8 **)(param_2 + 8) = puVar17 + 1;
        puVar17[1] = 0;
        *puVar17 = &PTR_LAB_143f4d340;
        puVar17[2] = lVar7;
        puVar17[3] = _Dst;
        *(uint *)(puVar17 + 4) = (uint)uVar4;
        *(uint *)((longlong)puVar17 + 0x24) = (uint)uVar3;
        *(uint *)(puVar17 + 5) = uVar12;
      }
    }
  }
  return;
}



// FUNCTION 1424d2070 FUN_1424d2070 body=133 status=ok
// SIG undefined FUN_1424d2070(void)

void FUN_1424d2070(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)param_1[1];
  iVar3 = (int)param_2;
  if (iVar2 < iVar3) {
    iVar4 = iVar3 - iVar2;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x28);
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[4] = 0;
      puVar1 = puVar1 + 5;
    }
  }
  else if (iVar3 < iVar2) {
    FUN_1424ce7a0(param_1,param_2,iVar2 - iVar3,param_3);
    return;
  }
  return;
}



// FUNCTION 1424d2100 SetParameters body=1548 status=ok
// SIG undefined SetParameters(void)

void FBaseGPUSkinCacheCS::SetParameters
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  lVar2 = CONCAT44(param_5._4_4_,(undefined4)param_5);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xc0,lVar2 + 0x50,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xcc,lVar2 + 0x54,0);
  uVar4 = *(undefined8 *)(param_3 + 8);
  if (*(short *)(param_1 + 0xe2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe0);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x60);
  if (*(short *)(param_1 + 0xe6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe4);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x70);
  if (*(short *)(param_1 + 0xea) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe8);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xf4,lVar2 + 0x78,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xfa,param_4 + 0x38,0);
  uVar4 = *(undefined8 *)(param_4 + 0x40);
  if (*(short *)(param_1 + 0x102) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x100);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xee) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xec);
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
    puVar6[4] = param_6;
    *puVar6 = &PTR_LAB_144d91e40;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xf2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xf0);
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
    puVar6[4] = param_7;
    *puVar6 = &PTR_LAB_144d91e40;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
  }
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd2,lVar2 + 0x4c,0);
  if (*(int *)(lVar2 + 0x44) == 1) {
    uVar4 = *(undefined8 *)(param_4 + 0x48);
    if (*(short *)(param_1 + 0x106) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x104);
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
      puVar6[2] = uVar3;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar3,param_1 + 0x108,lVar2 + 0x7c,0);
  }
  if (*(int *)(lVar2 + 0x44) == 2) {
    uVar4 = *(undefined8 *)(param_4 + 0x50);
    if (*(short *)(param_1 + 0x110) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x10e);
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
      puVar6[2] = uVar3;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
    uVar4 = *(undefined8 *)(param_4 + 0x58);
    if (*(short *)(param_1 + 0x114) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x112);
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
      puVar6[2] = uVar3;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar3,param_1 + 0x116,lVar2 + 0x80,0);
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,uVar3,param_1 + 0x11c,lVar2 + 0x90,0);
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,uVar3,param_1 + 0x122,lVar2 + 0xd0,0);
  }
  param_5._0_4_ = *(undefined4 *)(DAT_146af7888 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0xc6,&param_5,0);
  return;
}



// FUNCTION 1424d2710 SetParameters body=1386 status=ok
// SIG undefined SetParameters(void)

void FBaseRecomputeTangents::SetParameters
               (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
               longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xc4,param_4 + 0x114,0);
  uVar4 = *(undefined8 *)(*(longlong *)(param_4 + 0x120) + 0x10);
  if (*(short *)(param_1 + 0xcc) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xca);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_4 + 0x118) + 0x10);
  if (*(short *)(param_1 + 0xd0) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xce);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x68);
  if (*(short *)(param_1 + 0xfa) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xf8);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd2,param_4 + 0x4c,0);
  uVar4 = *(undefined8 *)(param_4 + 0x30);
  if (*(short *)(param_1 + 0xda) != 0) {
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xdc,param_4 + 0x110,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xe2,param_4 + 0x54,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xe8,param_4 + 0x58,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xee,param_4 + 0x5c,0);
  uVar4 = *(undefined8 *)(param_4 + 0x60);
  if (*(short *)(param_1 + 0xf6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xf4);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x68);
  if (*(short *)(param_1 + 0xf6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xf4);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(param_5 + 8);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
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
    *puVar6 = &PTR_LAB_144d91e40;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  if (DAT_146af763c == 0) {
    uVar4 = *(undefined8 *)(param_4 + 0x138);
    if (*(short *)(param_1 + 0xfe) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xfc);
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
      puVar6[2] = uVar3;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
    uVar4 = *(undefined8 *)(param_4 + 0x130);
    if (*(short *)(param_1 + 0x102) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x100);
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
      puVar6[2] = uVar3;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
  }
  return;
}



// FUNCTION 1424d2c80 FUN_1424d2c80 body=790 status=ok
// SIG undefined FUN_1424d2c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424d2c80(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = 0;
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar8 = uVar4;
    do {
      iVar7 = (int)uVar8;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146af9480) {
        if (iVar7 != -1) {
          puVar9 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 8);
          *puVar9 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_1424d2d23;
        }
        break;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146afbc70) && (_Init_thread_header(&DAT_146afbc70), DAT_146afbc70 == -1))
  {
    _DAT_146afbc68 = 0;
    _DAT_146afbc6c = 0;
    DAT_146afbc6e = 0;
    _Init_thread_footer(&DAT_146afbc70);
  }
  puVar9 = (undefined4 *)&DAT_146afbc68;
LAB_1424d2d23:
  FUN_141b51b30(param_2,uVar3,puVar9,param_6);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
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
    puVar6[4] = param_7;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = param_3;
  }
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = param_4;
  }
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
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
    puVar6[4] = param_5;
    *puVar6 = &PTR_LAB_144dcb360;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
  }
  return;
}



// FUNCTION 1424d2fa0 SetParameters body=433 status=ok
// SIG undefined SetParameters(void)

void FRecomputeTangentsPerVertexPassCS::SetParameters
               (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
               longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 200,param_4 + 0x4c,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xce,param_4 + 0x50,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd4,param_4 + 0x54,0);
  uVar4 = *(undefined8 *)(param_5 + 8);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
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
    *puVar6 = &PTR_LAB_144d91e40;
    puVar6[2] = uVar3;
    puVar6[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_4 + 0x118) + 8);
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
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
    *puVar6 = &PTR_LAB_144d91e40;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  return;
}



// FUNCTION 1424d3160 FUN_1424d3160 body=607 status=ok
// SIG undefined FUN_1424d3160(void)

void FUN_1424d3160(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_98;
  undefined8 uStack_90;
  
  iVar1 = *(int *)(param_2 + 0x30);
  if (0 < *(int *)(param_1 + 0x760)) {
    uVar9 = 0;
    local_98 = 0;
    uStack_90 = 0;
    lVar4 = FUN_1423d3320(0,*(undefined8 *)(param_1 + 0x758),&local_98);
    if ((lVar4 != 0) && (uVar10 = uVar9, uVar11 = uVar9, 0 < iVar1)) {
      do {
        iVar8 = (int)uVar9;
        iVar6 = iVar8;
        if ((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 2000))) {
          iVar6 = *(int *)(*(longlong *)(param_1 + 0x7c8) + uVar10 * 4);
        }
        if (iVar6 != -1) {
          fVar15 = -1.0;
          fVar14 = -1.0;
          fVar12 = -1.0;
          fVar13 = -1.0;
          if ((-1 < iVar8) && (iVar8 < *(int *)(lVar4 + 0x28))) {
            lVar2 = *(longlong *)(lVar4 + 0x20);
            fVar15 = *(float *)(lVar2 + uVar11);
            fVar14 = *(float *)(lVar2 + 4 + uVar11);
            fVar12 = *(float *)(lVar2 + 8 + uVar11);
            fVar13 = *(float *)(lVar2 + 0xc + uVar11);
          }
          lVar2 = *(longlong *)(param_2 + 0x28);
          (**(code **)(**(longlong **)(param_2 + 0x20) + 0x28))();
          (**(code **)(**(longlong **)(param_2 + 0x20) + 0x20))();
          iVar5 = (int)(fVar15 * 32767.0);
          if (iVar5 < -0x8000) {
            iVar3 = -0x8000;
          }
          else {
            iVar3 = 0x7fff;
            if (iVar5 < 0x7fff) {
              iVar3 = iVar5;
            }
          }
          lVar7 = (longlong)iVar6;
          iVar6 = (int)(fVar14 * 32767.0);
          *(short *)(lVar2 + lVar7 * 8) = (short)iVar3;
          if (iVar6 < -0x8000) {
            iVar5 = -0x8000;
          }
          else {
            iVar5 = 0x7fff;
            if (iVar6 < 0x7fff) {
              iVar5 = iVar6;
            }
          }
          *(short *)(lVar2 + 2 + lVar7 * 8) = (short)iVar5;
          iVar6 = (int)(fVar12 * 32767.0);
          if (iVar6 < -0x8000) {
            iVar5 = -0x8000;
          }
          else {
            iVar5 = 0x7fff;
            if (iVar6 < 0x7fff) {
              iVar5 = iVar6;
            }
          }
          *(short *)(lVar2 + 4 + lVar7 * 8) = (short)iVar5;
          iVar6 = (int)(fVar13 * 32767.0);
          if (iVar6 < -0x8000) {
            iVar5 = -0x8000;
          }
          else {
            iVar5 = 0x7fff;
            if (iVar6 < 0x7fff) {
              iVar5 = iVar6;
            }
          }
          *(short *)(lVar2 + 6 + lVar7 * 8) = (short)iVar5;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + 0x10;
      } while ((longlong)uVar10 < (longlong)iVar1);
    }
  }
  return;
}



// FUNCTION 1424d33c0 SetRadixSortShaderCompilerEnvironment body=157 status=ok
// SIG undefined SetRadixSortShaderCompilerEnvironment(void)

void SetRadixSortShaderCompilerEnvironment(longlong param_1)

{
  int iVar1;
  
  FUN_141a172f0(param_1,L"RADIX_BITS",4);
  FUN_141a172f0(param_1,L"THREAD_COUNT",0x80);
  FUN_141a172f0(param_1,L"KEYS_PER_LOOP",8);
  FUN_141a172f0(param_1,L"MAX_GROUP_COUNT",0x40);
  iVar1 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_1 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 1424d3460 FUN_1424d3460 body=111 status=ok
// SIG undefined FUN_1424d3460(void)

void FUN_1424d3460(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  plVar1 = (longlong *)(param_1 + 0x28);
  if (iVar2 < param_2) {
    *(int *)(param_1 + 0x30) = param_2;
    if (*(int *)(param_1 + 0x34) < param_2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar1 + (longlong)iVar2 * 8),0,(longlong)(param_2 - iVar2) << 3);
    return;
  }
  if ((param_2 < iVar2) && (param_2 != iVar2)) {
    *(int *)(param_1 + 0x30) = param_2;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  return;
}



// FUNCTION 1424d34d0 FUN_1424d34d0 body=487 status=ok
// SIG undefined FUN_1424d34d0(void)

void FUN_1424d34d0(longlong param_1,int param_2,longlong param_3,longlong param_4,longlong param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  uVar1 = *(undefined4 *)(param_5 + 0x7e0);
  lVar7 = (longlong)param_2 * 0x140 + *(longlong *)(param_1 + 0x20);
  puVar6 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = **(undefined8 **)(lVar7 + 0x120);
  puVar5 = puVar6 + 5;
  if (*(undefined8 **)(param_3 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
    puVar6 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
  }
  *(undefined8 **)(param_3 + 0x30) = puVar5;
  *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  **(undefined8 **)(param_3 + 8) = puVar6;
  *(undefined8 **)(param_3 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_143f489e0;
  *(undefined4 *)(puVar6 + 2) = uVar1;
  puVar6[3] = uVar3;
  *(undefined4 *)(puVar6 + 4) = 0;
  iVar2 = *(int *)(param_5 + 0x7e4);
  if ((-1 < iVar2) && (*(undefined8 **)(lVar7 + 0x118) != (undefined8 *)0x0)) {
    uVar3 = **(undefined8 **)(lVar7 + 0x118);
    puVar6 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_3 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar5;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar6;
    *(undefined8 **)(param_3 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f489e0;
    *(int *)(puVar6 + 2) = iVar2;
    puVar6[3] = uVar3;
    *(undefined4 *)(puVar6 + 4) = 0;
  }
  lVar4 = *(longlong *)(param_4 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  lVar4 = *(longlong *)(lVar4 + 0x38);
  if ((lVar4 != 0) && (param_7._2_2_ != 0)) {
    puVar6 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar3 = *(undefined8 *)(*(longlong *)(lVar7 + 0x128) + 0x10);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_3 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar5;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar6;
    *(undefined8 **)(param_3 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144165218;
    puVar6[2] = lVar4;
    *(uint *)(puVar6 + 3) = (uint)(ushort)param_7;
    puVar6[4] = uVar3;
  }
  return;
}



// FUNCTION 1424d36c0 FUN_1424d36c0 body=943 status=ok
// SIG undefined FUN_1424d36c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424d36c0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  float local_e8;
  float local_dc;
  uint local_d8;
  float fStack_d4;
  float fStack_d0;
  uint uStack_cc;
  float local_c8;
  uint uStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float local_b8;
  float fStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  undefined1 local_98 [128];
  
  plVar3 = *(longlong **)(param_1 + 0x490);
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  iVar9 = 0;
  iVar12 = 0;
  if (((int)plVar3[1] != 0) && (iVar9 = 0, iVar12 = 0, *(int *)(param_2 + 0x8b8) != 0)) {
    iVar10 = *(int *)(*plVar3 + 0xc);
    iVar7 = *(int *)(*plVar3 + 0x1c);
    iVar12 = 0;
    while (((iVar6 = iVar7, iVar5 = iVar10, -1 < iVar5 && (-1 < iVar6)) &&
           (iVar6 - iVar5 < *(int *)(param_2 + 0x8b8)))) {
      *(int *)(param_1 + 0x4b0) = iVar5;
      *(int *)(param_1 + 0x4b4) = iVar6;
      iVar10 = *(int *)((longlong)iVar5 * 0x40 + 0xc + *plVar3);
      iVar9 = iVar6;
      iVar12 = iVar5;
      iVar7 = *(int *)((longlong)iVar6 * 0x40 + 0x1c + *plVar3);
    }
  }
  iVar10 = (iVar9 - iVar12) + 1;
  if (iVar10 < 2) {
    *(undefined8 *)(param_1 + 0x4b0) = 0xffffffffffffffff;
  }
  else {
    plVar3 = (longlong *)(param_1 + 0x4b8);
    if (*(int *)(param_1 + 0x4c4) < iVar10) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                (plVar3);
      iVar9 = *(int *)(param_1 + 0x4b4);
      iVar12 = *(int *)(param_1 + 0x4b0);
    }
    fVar1 = *(float *)(param_2 + 0x210);
    fVar2 = *(float *)(param_2 + 0x214);
    fVar14 = *(float *)(param_2 + 0x218);
    fVar15 = *(float *)(param_2 + 0x21c);
    fVar16 = fVar2 + fVar2;
    fVar18 = fVar14 + fVar14;
    fVar19 = fVar1 * (fVar1 + fVar1);
    fVar17 = (fVar1 + fVar1) * fVar15;
    fVar20 = *(float *)(param_2 + 0x230);
    fVar21 = *(float *)(param_2 + 0x234);
    fVar22 = *(float *)(param_2 + 0x238);
    fStack_d4 = (fVar18 * fVar15 + fVar1 * fVar16) * fVar20;
    fStack_c0 = (fVar17 + fVar2 * fVar18) * fVar21;
    local_b8 = (fVar16 * fVar15 + fVar1 * fVar18) * fVar22;
    local_c8 = fVar21 * (fVar1 * fVar16 - fVar18 * fVar15);
    fStack_b4 = fVar22 * (fVar2 * fVar18 - fVar17);
    fStack_d0 = fVar20 * (fVar1 * fVar18 - fVar16 * fVar15);
    local_d8 = (uint)((_DAT_146af9d10 - (fVar14 * fVar18 + fVar2 * fVar16)) * fVar20) &
               _DAT_146af7650;
    uStack_c4 = (uint)((fRam0000000146af9d14 - (fVar14 * fVar18 + fVar19)) * fVar21) &
                uRam0000000146af7654;
    uStack_b0 = (uint)((fRam0000000146af9d18 - (fVar2 * fVar16 + fVar19)) * fVar22) &
                uRam0000000146af7658;
    uStack_cc = (uint)((fRam0000000146af9d1c - (fVar19 + fVar19)) * *(float *)(param_2 + 0x23c)) &
                uRam0000000146af765c;
    local_a8 = *(undefined4 *)(param_2 + 0x220);
    uStack_a4 = *(undefined4 *)(param_2 + 0x224);
    uStack_a0 = *(undefined4 *)(param_2 + 0x228);
    fStack_9c = fRam0000000146af9d1c;
    if (iVar12 <= iVar9) {
      lVar13 = (longlong)iVar12 << 6;
      uStack_bc = uStack_cc;
      uStack_ac = uStack_cc;
      do {
        lVar4 = **(longlong **)(param_1 + 0x490);
        local_10c = *(undefined8 *)(lVar4 + lVar13);
        local_104 = *(undefined4 *)(lVar4 + 8 + lVar13);
        local_100 = *(undefined8 *)(lVar4 + 0x10 + lVar13);
        local_f8 = *(undefined4 *)(lVar4 + 0x18 + lVar13);
        local_f4 = 1;
        pfVar8 = (float *)FBox::TransformBy(&local_10c,local_98,&local_d8);
        iVar9 = *(int *)(param_1 + 0x4c0);
        fVar1 = *pfVar8;
        fVar2 = pfVar8[1];
        fVar22 = pfVar8[3] - fVar1;
        fVar21 = pfVar8[4] - fVar2;
        fVar20 = pfVar8[5] - pfVar8[2];
        fVar14 = fVar20 * 0.5;
        fVar15 = fVar14 + pfVar8[2];
        *(int *)(param_1 + 0x4c0) = iVar9 + 1;
        local_e8 = fVar14;
        local_dc = fVar15;
        if (*(int *)(param_1 + 0x4c4) < iVar9 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
          ResizeGrow(plVar3,iVar9);
        }
        lVar4 = *plVar3;
        iVar12 = iVar12 + 1;
        lVar13 = lVar13 + 0x40;
        lVar11 = (longlong)iVar9 * 0x1c;
        *(undefined8 *)(lVar11 + lVar4) = CONCAT44(fVar21 * 0.5 + fVar2,fVar22 * 0.5 + fVar1);
        ((undefined8 *)(lVar11 + lVar4))[1] = CONCAT44(fVar22 * 0.5,fVar15);
        *(ulonglong *)(lVar11 + 0x10 + lVar4) = CONCAT44(fVar14,fVar21 * 0.5);
        *(float *)(lVar11 + 0x18 + lVar4) =
             SQRT((fVar22 * fVar22 + fVar21 * fVar21 + fVar20 * fVar20) * 0.25);
      } while (iVar12 <= *(int *)(param_1 + 0x4b4));
    }
  }
  return;
}



// FUNCTION 1424d3a70 FUN_1424d3a70 body=460 status=ok
// SIG undefined FUN_1424d3a70(void)

void FUN_1424d3a70(longlong param_1,int param_2,undefined8 param_3,longlong param_4,longlong param_5
                  ,longlong param_6,undefined4 param_7,undefined4 param_8,longlong *param_9,
                  longlong param_10)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  plVar4 = param_9;
  puVar10 = (undefined8 *)((longlong)param_2 * 0x140 + *(longlong *)(param_1 + 0x20));
  *puVar10 = param_3;
  *(int *)(puVar10 + 8) = param_2;
  puVar10[7] = param_4;
  lVar3 = *(longlong *)
           (**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x40) +
           (longlong)*(int *)(param_1 + 0x60) * 8);
  *(undefined4 *)(puVar10 + 10) = param_7;
  if (param_5 != 0) {
    piVar8 = *(int **)(param_5 + 0x40);
    piVar1 = piVar8 + *(int *)(param_5 + 0x48);
    for (; piVar8 != piVar1; piVar8 = piVar8 + 1) {
      if (*piVar8 == param_2) {
        *(undefined4 *)((longlong)puVar10 + 0x7c) = *(undefined4 *)(param_4 + 0x10);
        uVar6 = 1;
        goto LAB_1424d3af5;
      }
    }
  }
  uVar6 = 0;
LAB_1424d3af5:
  if (param_6 != 0) {
    uVar6 = 2;
  }
  *(undefined4 *)((longlong)puVar10 + 0x44) = uVar6;
  *(undefined4 *)((longlong)puVar10 + 0x54) = param_8;
  *(undefined4 *)((longlong)puVar10 + 0x4c) = *(undefined4 *)(param_4 + 0x10);
  puVar9 = (undefined8 *)(**(code **)(*param_9 + 0x80))(param_9,&param_5);
  TRefCountPtr<FRHIIndexBuffer>::operator=(puVar10 + 0xc,*puVar9);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
  puVar9 = (undefined8 *)(**(code **)(*plVar4 + 0x88))(plVar4,&param_5);
  TRefCountPtr<FRHIIndexBuffer>::operator=(puVar10 + 0xd,*puVar9);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
  uVar6 = (**(code **)(*plVar4 + 0x98))(plVar4);
  *(undefined4 *)(puVar10 + 0xb) = uVar6;
  puVar9 = (undefined8 *)(**(code **)(*plVar4 + 0x78))(plVar4,&param_5);
  TRefCountPtr<FRHIIndexBuffer>::operator=(puVar10 + 0xe,*puVar9);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
  uVar5 = (**(code **)(*plVar4 + 0x70))(plVar4);
  *(undefined1 *)(puVar10 + 9) = uVar5;
  iVar7 = *(int *)(param_1 + 0x38);
  iVar2 = *(int *)(param_4 + 0x10);
  puVar10[4] = plVar4;
  *(uint *)(puVar10 + 0xf) = (uint)(iVar7 * iVar2) >> 2;
  puVar10[5] = param_10;
  *(undefined8 *)(param_10 + 0x7e0) = 0xffffffffffffffff;
  iVar7 = DAT_146532be4;
  if (0 < DAT_146af7638) {
    iVar7 = 1;
  }
  if ((0 < iVar7) &&
     (((*(char *)(param_4 + 0xc) != '\0' || (iVar7 == 1)) &&
      (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x38), puVar10[6] = lVar3, lVar3 != 0))))
  {
    *(undefined4 *)((longlong)puVar10 + 0x114) = *(undefined4 *)(param_4 + 8);
    *(undefined4 *)(puVar10 + 0x22) = *(undefined4 *)(param_4 + 4);
  }
  return;
}



// FUNCTION 1424d3c40 FUN_1424d3c40 body=118 status=ok
// SIG undefined FUN_1424d3c40(void)

undefined8 FUN_1424d3c40(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_1419ef5f0();
  if (1 < iVar2) {
    cVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 200))(param_2), cVar1 == '\0')) {
      return 0;
    }
    cVar1 = FUN_1424d3df0(param_1,param_2,param_3);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1424d3cc0 FUN_1424d3cc0 body=55 status=ok
// SIG undefined FUN_1424d3cc0(void)

ulonglong FUN_1424d3cc0(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1419ef5f0();
  if (1 < (int)uVar1) {
    uVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    if ((char)uVar1 == '\0') {
      uVar1 = (**(code **)(*param_2 + 200))(param_2);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1424d3d00 ShouldCompilePermutation body=69 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8 TGPUSkinCacheCS<1>::ShouldCompilePermutation(undefined4 *param_1)

{
  int iVar1;
  
  if ((DAT_146af7634 != 0) || (DAT_146af7638 != 0)) {
    if ((DAT_146ab62cc < 0x1d) && ((0x18151041U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
      iVar1 = FUN_1419ef5f0(*param_1);
      if (2 < iVar1) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1424d3d50 ShouldCompilePermutation body=108 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8
FSplineMeshVertexFactory::ShouldCompilePermutation
          (undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x128))(param_2);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 200))(param_2), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = FUN_1424d3df0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 1424d3dc0 FUN_1424d3dc0 body=45 status=ok
// SIG undefined FUN_1424d3dc0(void)

ulonglong FUN_1424d3dc0(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x128))(param_2);
  if ((char)uVar1 == '\0') {
    uVar1 = (**(code **)(*param_2 + 200))(param_2);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1424d3df0 FUN_1424d3df0 body=175 status=ok
// SIG undefined FUN_1424d3df0(void)

undefined8 FUN_1424d3df0(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = DAT_146af7a40;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    lVar5 = 4;
  }
  else {
    lVar5 = 0;
  }
  iVar4 = FUN_1419ef5f0(param_1);
  if ((0 < iVar4) && (*(int *)(lVar5 + lVar1) == 0)) {
    cVar2 = (**(code **)(*param_2 + 0xd0))(param_2);
    if ((cVar2 == '\0') && (cVar2 = (**(code **)(*param_2 + 200))(param_2), cVar2 == '\0')) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1424d3ee0 FUN_1424d3ee0 body=159 status=ok
// SIG undefined FUN_1424d3ee0(void)

undefined8 FUN_1424d3ee0(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  if (((((DAT_146af7634 != 0) || (DAT_146af7638 != 0)) && (DAT_146ab62cc < 0x1d)) &&
      (((0x18151041U >> (DAT_146ab62cc & 0x1f) & 1) != 0 &&
       (iVar2 = FUN_1419ef5f0(param_1), 2 < iVar2)))) &&
     (cVar1 = BuildSettings::IsPromotedBuild(param_1,param_2,param_3), cVar1 != '\0')) {
    cVar1 = (**(code **)(*param_2 + 0xd0))(param_2);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 200))(param_2), cVar1 == '\0')) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1424d3f80 FUN_1424d3f80 body=55 status=ok
// SIG undefined FUN_1424d3f80(void)

undefined1 FUN_1424d3f80(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x158))(param_2);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_2 + 200))(param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1424d3fe0 FUN_1424d3fe0 body=5812 status=ok
// SIG undefined FUN_1424d3fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1424d3fe0(longlong param_1,longlong param_2,uint param_3,uint param_4,int param_5,
                  uint param_6)

{
  void *_Dst;
  short sVar1;
  ushort uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  void *pvVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ulonglong *puVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  int iVar25;
  longlong *plVar26;
  ulonglong uVar27;
  longlong lVar28;
  bool bVar29;
  uint local_res18;
  undefined8 in_stack_fffffffffffffe48;
  undefined8 uVar30;
  undefined4 uVar31;
  undefined8 **in_stack_fffffffffffffe50;
  longlong local_198;
  undefined8 *local_190;
  ulonglong *local_188;
  int local_180;
  int local_17c;
  int local_178;
  longlong local_170;
  undefined8 *local_168;
  ulonglong local_160;
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  undefined8 *local_128;
  undefined8 local_120;
  longlong local_118;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  void *local_a0;
  int local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined *local_60;
  undefined4 local_58;
  
  plVar13 = (longlong *)0x0;
  local_168 = (undefined8 *)0x0;
  local_17c = *(int *)(DAT_146af7af8 + 4);
  local_130 = *(int *)(DAT_146af7b98 + 4);
  uVar16 = param_5 >> 0x1f & 0x3ff;
  uVar5 = param_5 + uVar16;
  iStack_fc = (uVar5 & 0x3ff) - uVar16;
  iStack_100 = (int)uVar5 >> 10;
  if (iStack_100 < 0x41) {
    local_180 = iStack_100;
    if (iStack_100 == 0) {
      local_180 = 1;
    }
  }
  else {
    local_180 = 0x40;
  }
  local_108 = 0;
  iStack_104 = iStack_100 / local_180;
  iStack_100 = iStack_100 % local_180;
  local_f8 = local_180;
  lVar7 = FUN_1419ef210((&DAT_1464c9c48)[(int)param_6]);
  local_88 = 0;
  local_90 = &DAT_146af9510;
  plVar26 = (longlong *)(lVar7 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar26,&local_140,&local_90);
  plVar12 = plVar13;
  if (local_140 != -1) {
    plVar12 = (longlong *)((longlong)local_140 * 0x20 + *plVar26);
  }
  local_78 = 0;
  plVar19 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar19 = plVar13;
  }
  local_80 = &DAT_146af9660;
  lVar7 = *plVar19;
  local_c0 = lVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar26,&local_13c,&local_80);
  plVar12 = plVar13;
  if (local_13c != -1) {
    plVar12 = (longlong *)((longlong)local_13c * 0x20 + *plVar26);
  }
  local_68 = 0;
  plVar19 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar19 = plVar13;
  }
  local_70 = &DAT_146af97b0;
  lVar21 = *plVar19;
  local_d0 = lVar21;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar26,&local_138,&local_70);
  plVar12 = plVar13;
  if (local_138 != -1) {
    plVar12 = (longlong *)((longlong)local_138 * 0x20 + *plVar26);
  }
  local_58 = 0;
  plVar19 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar19 = plVar13;
  }
  local_60 = &DAT_146af9900;
  lVar20 = *plVar19;
  local_c8 = lVar20;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar26,&local_134,&local_60);
  if (local_134 != -1) {
    plVar13 = (longlong *)((longlong)local_134 * 0x20 + *plVar26);
  }
  plVar26 = plVar13 + 2;
  sVar1 = *(short *)(lVar21 + 0xc2);
  if (plVar13 == (longlong *)0x0) {
    plVar26 = (longlong *)0x0;
  }
  param_6 = 0xf;
  local_178 = 0;
  local_d8 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar28 = *plVar26;
  local_res18 = param_3;
  local_b8 = lVar28;
  do {
    if ((param_4 & param_6) != 0) {
      uVar5 = (uint)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
      if (sVar1 == 0) {
        lVar9 = (ulonglong)uVar5 << 0x20;
        (**(code **)(*DAT_146ab6358 + 0x110))
                  (DAT_146ab6358,&local_128,&local_108,&DAT_146af94a8,lVar9);
        puVar11 = local_128;
        uVar31 = (undefined4)((ulonglong)lVar9 >> 0x20);
        local_190 = local_128;
        if (local_128 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_128 + 1) = *(int *)(local_128 + 1) + 1;
          UNLOCK();
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
        puVar23 = local_168;
        local_168 = puVar11;
        lVar9 = 0;
        local_190 = (undefined8 *)0x0;
        if (puVar23 != (undefined8 *)0x0) {
          LOCK();
          piVar8 = (int *)(puVar23 + 1);
          iVar6 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            if ((*(char *)(puVar23 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar29 = *(int *)((longlong)puVar23 + 0xc) == 0;
              if (bVar29) {
                *(int *)((longlong)puVar23 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar29) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar5 != 0) {
                  lVar9 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar9 + 8) = puVar23;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar23)(puVar23);
            }
          }
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_190);
      }
      else {
        in_stack_fffffffffffffe50 =
             (undefined8 **)CONCAT44((int)((ulonglong)in_stack_fffffffffffffe50 >> 0x20),1);
        uVar30 = CONCAT44(uVar5,0x20);
        piVar8 = (int *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                  (DAT_146ab6358,&DAT_146ab6e78,DAT_146532c90,0,uVar30,
                                   in_stack_fffffffffffffe50);
        uVar31 = (undefined4)((ulonglong)uVar30 >> 0x20);
        *piVar8 = local_108;
        piVar8[1] = iStack_104;
        piVar8[2] = iStack_100;
        piVar8[3] = iStack_fc;
        piVar8[4] = local_f8;
        piVar8[5] = iStack_f4;
        piVar8[6] = iStack_f0;
        piVar8[7] = iStack_ec;
        (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,DAT_146532c90);
      }
      puVar18 = (ulonglong *)(param_1 + 0x30);
      puVar23 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      local_e8 = DAT_146532c50;
      puVar11 = puVar23 + 1;
      local_188 = puVar18;
      if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 1;
      }
      *puVar18 = (ulonglong)puVar11;
      *puVar23 = local_e8;
      puVar14 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar14 + 6;
      if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18);
        puVar14 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar14 + 6;
      }
      *puVar18 = (ulonglong)puVar11;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar14;
      *(undefined8 **)(param_1 + 8) = puVar14 + 1;
      puVar14[1] = 0;
      *puVar14 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar14 + 2) = 1;
      puVar14[3] = puVar23;
      *(undefined4 *)(puVar14 + 4) = 2;
      *(undefined4 *)((longlong)puVar14 + 0x24) = 3;
      puVar14[5] = 0;
      lVar9 = *(longlong *)(lVar7 + 0x48);
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      uVar30 = *(undefined8 *)(lVar9 + 0x60);
      FRHIComputeShader::UpdateStats(uVar30);
      puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar23 + 3;
      if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 3;
      }
      *puVar18 = (ulonglong)puVar11;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar23;
      *(undefined8 **)(param_1 + 8) = puVar23 + 1;
      puVar23[1] = 0;
      *puVar23 = &PTR_LAB_144d91e50;
      puVar23[2] = uVar30;
      uVar30 = DAT_146532c50;
      lVar9 = *(longlong *)(lVar7 + 0x48);
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      uVar3 = *(undefined8 *)(lVar9 + 0x60);
      if (*(short *)(lVar7 + 0xc2) != 0) {
        uVar2 = *(ushort *)(lVar7 + 0xc0);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar18);
          puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar23 + 5;
        }
        *puVar18 = (ulonglong)puVar11;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar23;
        *(undefined8 **)(param_1 + 8) = puVar23 + 1;
        puVar23[1] = 0;
        *puVar23 = &PTR_LAB_144d91e40;
        puVar23[4] = uVar30;
        puVar23[2] = uVar3;
        *(uint *)(puVar23 + 3) = (uint)uVar2;
      }
      uVar30 = CONCAT44(uVar31,1);
      DispatchComputeShader(param_1,lVar7,1,1,uVar30);
      uVar31 = (undefined4)((ulonglong)uVar30 >> 0x20);
      lVar9 = *(longlong *)(lVar7 + 0x48);
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      uVar30 = *(undefined8 *)(lVar9 + 0x60);
      if (*(short *)(lVar7 + 0xc2) != 0) {
        uVar2 = *(ushort *)(lVar7 + 0xc0);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar18);
          puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar23 + 5;
        }
        *puVar18 = (ulonglong)puVar11;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar23;
        *(undefined8 **)(param_1 + 8) = puVar23 + 1;
        puVar23[1] = 0;
        puVar23[2] = uVar30;
        *puVar23 = &PTR_LAB_144d91e40;
        puVar23[4] = 0;
        *(uint *)(puVar23 + 3) = (uint)uVar2;
      }
      puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      local_e0 = DAT_146532c50;
      puVar11 = puVar23 + 1;
      if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18,0x10);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 1;
      }
      *puVar18 = (ulonglong)puVar11;
      *puVar23 = local_e0;
      puVar14 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar14 + 6;
      if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18,0x38);
        puVar14 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar14 + 6;
      }
      *puVar18 = (ulonglong)puVar11;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar14;
      *(undefined8 **)(param_1 + 8) = puVar14 + 1;
      puVar14[1] = 0;
      *puVar14 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar14 + 2) = 1;
      puVar14[3] = puVar23;
      *(undefined4 *)(puVar14 + 4) = 2;
      *(undefined4 *)((longlong)puVar14 + 0x24) = 3;
      puVar14[5] = 0;
      lVar9 = *(longlong *)(lVar21 + 0x48);
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      uVar30 = *(undefined8 *)(lVar9 + 0x60);
      FRHIComputeShader::UpdateStats(uVar30);
      puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar23 + 3;
      if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18,0x20);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 3;
      }
      *puVar18 = (ulonglong)puVar11;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar23;
      *(undefined8 **)(param_1 + 8) = puVar23 + 1;
      puVar23[1] = 0;
      *puVar23 = &PTR_LAB_144d91e50;
      puVar23[2] = uVar30;
      uVar30 = DAT_146532c50;
      lVar9 = *(longlong *)(lVar21 + 0x48);
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      uVar3 = *(undefined8 *)(lVar9 + 0x60);
      if (*(short *)(lVar21 + 0xca) != 0) {
        uVar2 = *(ushort *)(lVar21 + 200);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar18,0x30);
          puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar23 + 5;
        }
        *puVar18 = (ulonglong)puVar11;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar23;
        *(undefined8 **)(param_1 + 8) = puVar23 + 1;
        puVar23[1] = 0;
        *puVar23 = &PTR_LAB_144d91e40;
        puVar23[4] = uVar30;
        puVar23[2] = uVar3;
        *(uint *)(puVar23 + 3) = (uint)uVar2;
      }
      lVar9 = *(longlong *)(lVar21 + 0x48);
      local_190 = DAT_146532c98;
      uVar30 = *(undefined8 *)(param_2 + (longlong)(int)local_res18 * 8);
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      lVar15 = 0;
      uVar3 = *(undefined8 *)(lVar9 + 0x60);
      if (0 < *(int *)(lVar21 + 0x10)) {
        do {
          if (*(undefined **)(*(longlong *)(lVar21 + 8) + lVar15 * 8) == &DAT_146af9480) {
            if (lVar15 != -1) {
              puVar22 = *(undefined4 **)(*(longlong *)(lVar21 + 0x18) + lVar15 * 8);
              *puVar22 = *(undefined4 *)(lVar21 + 0xb8);
              goto LAB_1424d4895;
            }
            break;
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < *(int *)(lVar21 + 0x10));
      }
      if ((*(int *)(*local_d8 + 0x38) < DAT_146afbc70) &&
         (_Init_thread_header(&DAT_146afbc70), DAT_146afbc70 == -1)) {
        _DAT_146afbc68 = 0;
        _DAT_146afbc6c = 0;
        DAT_146afbc6e = 0;
        _Init_thread_footer(&DAT_146afbc70);
      }
      puVar22 = (undefined4 *)&DAT_146afbc68;
LAB_1424d4895:
      FUN_141b51b30(param_1,uVar3,puVar22,&local_168);
      if (*(short *)(lVar21 + 0xc6) != 0) {
        uVar2 = *(ushort *)(lVar21 + 0xc4);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar18);
          puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar23 + 5;
        }
        *puVar18 = (ulonglong)puVar11;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar23;
        *(undefined8 **)(param_1 + 8) = puVar23 + 1;
        puVar23[1] = 0;
        *puVar23 = &PTR_LAB_144dcb360;
        puVar23[4] = uVar30;
        puVar23[2] = uVar3;
        *(uint *)(puVar23 + 3) = (uint)uVar2;
      }
      if (*(short *)(lVar21 + 0xc2) != 0) {
        uVar2 = *(ushort *)(lVar21 + 0xc0);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar18);
          puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar23 + 5;
        }
        *puVar18 = (ulonglong)puVar11;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar23;
        *(undefined8 **)(param_1 + 8) = puVar23 + 1;
        puVar23[1] = 0;
        *puVar23 = &PTR_LAB_144dcb360;
        puVar23[4] = local_190;
        puVar23[2] = uVar3;
        *(uint *)(puVar23 + 3) = (uint)uVar2;
      }
      uVar30 = CONCAT44(uVar31,1);
      DispatchComputeShader(param_1,lVar21,local_180,1,uVar30);
      uVar31 = (undefined4)((ulonglong)uVar30 >> 0x20);
      lVar9 = *(longlong *)(lVar21 + 0x48);
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      uVar30 = *(undefined8 *)(lVar9 + 0x60);
      if (*(short *)(lVar21 + 0xc2) != 0) {
        uVar2 = *(ushort *)(lVar21 + 0xc0);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar18,0x30);
          puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar23 + 5;
        }
        *puVar18 = (ulonglong)puVar11;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar23;
        *(undefined8 **)(param_1 + 8) = puVar23 + 1;
        puVar23[1] = 0;
        *puVar23 = &PTR_LAB_144dcb360;
        puVar23[2] = uVar30;
        *(uint *)(puVar23 + 3) = (uint)uVar2;
        puVar23[4] = 0;
      }
      if (*(short *)(lVar21 + 0xc6) != 0) {
        uVar2 = *(ushort *)(lVar21 + 0xc4);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar18,0x30);
          puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar23 + 5;
        }
        *puVar18 = (ulonglong)puVar11;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar23;
        *(undefined8 **)(param_1 + 8) = puVar23 + 1;
        puVar23[1] = 0;
        *puVar23 = &PTR_LAB_144dcb360;
        puVar23[2] = uVar30;
        *(uint *)(puVar23 + 3) = (uint)uVar2;
        puVar23[4] = 0;
      }
      if (*(short *)(lVar21 + 0xca) != 0) {
        uVar2 = *(ushort *)(lVar21 + 200);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar18,0x30);
          puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar23 + 5;
        }
        *puVar18 = (ulonglong)puVar11;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar23;
        *(undefined8 **)(param_1 + 8) = puVar23 + 1;
        puVar23[1] = 0;
        puVar23[2] = uVar30;
        *puVar23 = &PTR_LAB_144d91e40;
        puVar23[4] = 0;
        *(uint *)(puVar23 + 3) = (uint)uVar2;
      }
      puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      local_a8 = DAT_146532c58;
      local_b0 = DAT_146532c50;
      puVar11 = puVar23 + 2;
      if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18,0x18);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 2;
      }
      *puVar18 = (ulonglong)puVar11;
      *puVar23 = local_b0;
      puVar23[1] = local_a8;
      puVar14 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar14 + 6;
      if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18,0x38);
        puVar14 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar14 + 6;
      }
      *puVar18 = (ulonglong)puVar11;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar14;
      *(undefined8 **)(param_1 + 8) = puVar14 + 1;
      puVar14[1] = 0;
      *puVar14 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar14 + 2) = 2;
      puVar14[3] = puVar23;
      *(undefined4 *)(puVar14 + 4) = 2;
      *(undefined4 *)((longlong)puVar14 + 0x24) = 3;
      puVar14[5] = 0;
      if (local_17c != 0) {
        local_150 = (undefined8 *)0x0;
        local_148 = 0;
        TArray<float,FDefaultAllocator>::ResizeTo(&local_150,0x400);
        iVar6 = (int)local_148 + 0x400;
        local_148 = CONCAT44(local_148._4_4_,iVar6);
        if (local_148._4_4_ < iVar6) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_150);
        }
        uVar30 = CONCAT44(uVar31,0x1000);
        pvVar10 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                    (DAT_146ab6358,&DAT_146ab6e78,DAT_146532c30,0,uVar30,
                                     (ulonglong)in_stack_fffffffffffffe50 & 0xffffffff00000000);
        _guard_xfg_dispatch_icall_nop(local_150,pvVar10,0x1000);
        (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,DAT_146532c30);
        local_198 = 0x40;
        puVar11 = local_150;
        do {
          local_158 = 0;
          local_158._4_4_ = 0;
          local_160 = 0;
          local_170 = 0x10;
          uVar24 = 0;
          uVar27 = 0;
          iVar6 = local_158._4_4_;
          do {
            local_190 = puVar11;
            FString::PrintfImpl(&local_a0,L" %04d",*(undefined4 *)puVar11);
            pvVar10 = local_a0;
            iVar17 = 0;
            if (local_98 != 0) {
              iVar17 = local_98 + -1;
            }
            if (iVar17 != 0) {
              iVar25 = (int)uVar27;
              uVar5 = (uint)(iVar25 == 0) + iVar25 + iVar17;
              local_158 = CONCAT44(local_158._4_4_,uVar5);
              if (iVar6 < (int)uVar5) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_160,uVar27);
                uVar24 = local_160;
                iVar6 = local_158._4_4_;
                uVar5 = (uint)local_158;
              }
              uVar27 = (ulonglong)uVar5;
              _Dst = (void *)(uVar24 + ((longlong)iVar25 - (ulonglong)(iVar25 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(_Dst,pvVar10,(longlong)iVar17 * 2);
              *(undefined2 *)((longlong)iVar17 * 2 + (longlong)_Dst) = 0;
              puVar11 = local_190;
            }
            if (local_a0 != (void *)0x0) {
              FMemory::Free(local_a0);
            }
            puVar11 = (undefined8 *)((longlong)puVar11 + 4);
            local_170 = local_170 + -1;
          } while (local_170 != 0);
          local_190 = puVar11;
          if (local_160 != 0) {
            FMemory::Free(local_160);
          }
          lVar28 = local_b8;
          lVar7 = local_c0;
          lVar20 = local_c8;
          lVar21 = local_d0;
          uVar31 = (undefined4)((ulonglong)uVar30 >> 0x20);
          local_198 = local_198 + -1;
        } while (local_198 != 0);
        puVar18 = local_188;
        if (local_150 != (undefined8 *)0x0) {
          FMemory::Free();
          puVar18 = local_188;
        }
      }
      lVar9 = *(longlong *)(lVar20 + 0x48);
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      uVar30 = *(undefined8 *)(lVar9 + 0x60);
      FRHIComputeShader::UpdateStats(uVar30);
      puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar23 + 3;
      if ((undefined8 *)puVar18[1] < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 3;
      }
      *puVar18 = (ulonglong)puVar11;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar23;
      *(undefined8 **)(param_1 + 8) = puVar23 + 1;
      puVar23[1] = 0;
      *puVar23 = &PTR_LAB_144d91e50;
      puVar23[2] = uVar30;
      lVar9 = *(longlong *)(lVar20 + 0x48);
      local_188 = (ulonglong *)DAT_146532c58;
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      uVar30 = *(undefined8 *)(lVar9 + 0x60);
      if (*(short *)(lVar20 + 0xc6) != 0) {
        uVar2 = *(ushort *)(lVar20 + 0xc4);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 5;
        if ((undefined8 *)puVar18[1] < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar18);
          puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar23 + 5;
        }
        *puVar18 = (ulonglong)puVar11;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar23;
        *(undefined8 **)(param_1 + 8) = puVar23 + 1;
        puVar23[1] = 0;
        *puVar23 = &PTR_LAB_144d91e40;
        puVar23[4] = local_188;
        puVar23[2] = uVar30;
        *(uint *)(puVar23 + 3) = (uint)uVar2;
      }
      lVar9 = *(longlong *)(lVar20 + 0x48);
      local_188 = (ulonglong *)DAT_146532c40;
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      uVar30 = *(undefined8 *)(lVar9 + 0x60);
      if (*(short *)(lVar20 + 0xc2) != 0) {
        uVar2 = *(ushort *)(lVar20 + 0xc0);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 5;
        if ((undefined8 *)puVar18[1] < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar18);
          puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar23 + 5;
        }
        *puVar18 = (ulonglong)puVar11;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar23;
        *(undefined8 **)(param_1 + 8) = puVar23 + 1;
        puVar23[1] = 0;
        *puVar23 = &PTR_LAB_144dcb360;
        puVar23[4] = local_188;
        puVar23[2] = uVar30;
        *(uint *)(puVar23 + 3) = (uint)uVar2;
      }
      DispatchComputeShader(param_1,lVar20,1,1,CONCAT44(uVar31,1));
      lVar9 = *(longlong *)(lVar20 + 0x48);
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      uVar30 = *(undefined8 *)(lVar9 + 0x60);
      if (*(short *)(lVar20 + 0xc2) != 0) {
        uVar2 = *(ushort *)(lVar20 + 0xc0);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 5;
        if ((undefined8 *)puVar18[1] < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar18,0x30);
          puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar23 + 5;
        }
        *puVar18 = (ulonglong)puVar11;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar23;
        *(undefined8 **)(param_1 + 8) = puVar23 + 1;
        puVar23[1] = 0;
        *puVar23 = &PTR_LAB_144dcb360;
        puVar23[2] = uVar30;
        *(uint *)(puVar23 + 3) = (uint)uVar2;
        puVar23[4] = 0;
      }
      if (*(short *)(lVar20 + 0xc6) != 0) {
        uVar2 = *(ushort *)(lVar20 + 0xc4);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 5;
        if ((undefined8 *)puVar18[1] < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar18,0x30);
          puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar23 + 5;
        }
        *puVar18 = (ulonglong)puVar11;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar23;
        *(undefined8 **)(param_1 + 8) = puVar23 + 1;
        puVar23[1] = 0;
        *puVar23 = &PTR_LAB_144d91e40;
        puVar23[2] = uVar30;
        *(uint *)(puVar23 + 3) = (uint)uVar2;
        puVar23[4] = 0;
      }
      if (local_17c != 0) {
        FUN_1424c2b20(&PTR_PTR_146532c00);
      }
      puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      local_188 = (ulonglong *)DAT_146532c58;
      puVar11 = puVar23 + 1;
      if ((undefined8 *)puVar18[1] < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 1;
      }
      *puVar18 = (ulonglong)puVar11;
      *puVar23 = local_188;
      puVar14 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar14 + 6;
      if ((undefined8 *)puVar18[1] < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18);
        puVar14 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar14 + 6;
      }
      *puVar18 = (ulonglong)puVar11;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar14;
      *(undefined8 **)(param_1 + 8) = puVar14 + 1;
      puVar14[1] = 0;
      *puVar14 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar14 + 2) = 1;
      puVar14[3] = puVar23;
      *(undefined4 *)(puVar14 + 4) = 0;
      puVar14[5] = 0;
      *(undefined4 *)((longlong)puVar14 + 0x24) = 3;
      puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      local_190 = (undefined8 *)(param_2 + 0x10 + ((longlong)(int)local_res18 ^ 1U) * 8);
      local_120 = *local_190;
      plVar13 = (longlong *)(param_2 + (((longlong)(int)local_res18 ^ 1U) + 6) * 8);
      local_118 = *plVar13;
      puVar11 = puVar23 + 2;
      if ((undefined8 *)puVar18[1] < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 2;
      }
      *puVar18 = (ulonglong)puVar11;
      *puVar23 = local_120;
      puVar23[1] = local_118;
      puVar14 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar14 + 6;
      if ((undefined8 *)puVar18[1] < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18);
        puVar14 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar14 + 6;
      }
      *puVar18 = (ulonglong)puVar11;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar14;
      *(undefined8 **)(param_1 + 8) = puVar14 + 1;
      puVar14[1] = 0;
      *puVar14 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar14 + 2) = 2;
      puVar14[3] = puVar23;
      *(undefined4 *)(puVar14 + 4) = 2;
      *(undefined4 *)((longlong)puVar14 + 0x24) = 3;
      puVar14[5] = 0;
      lVar9 = *(longlong *)(lVar28 + 0x48);
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      uVar30 = *(undefined8 *)(lVar9 + 0x60);
      FRHIComputeShader::UpdateStats(uVar30);
      puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar23 + 3;
      if ((undefined8 *)puVar18[1] < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18,0x20);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 3;
      }
      *puVar18 = (ulonglong)puVar11;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar23;
      *(undefined8 **)(param_1 + 8) = puVar23 + 1;
      puVar23[1] = 0;
      *puVar23 = &PTR_LAB_144d91e50;
      puVar23[2] = uVar30;
      lVar9 = *(longlong *)(lVar28 + 0x48);
      local_170 = *plVar13;
      uVar30 = *local_190;
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      uVar3 = *(undefined8 *)(lVar9 + 0x60);
      if (*(short *)(lVar28 + 0xd2) != 0) {
        uVar2 = *(ushort *)(lVar28 + 0xd0);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 5;
        if ((undefined8 *)puVar18[1] < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar18,0x30);
          puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar23 + 5;
        }
        *puVar18 = (ulonglong)puVar11;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar23;
        *(undefined8 **)(param_1 + 8) = puVar23 + 1;
        puVar23[1] = 0;
        *puVar23 = &PTR_LAB_144d91e40;
        puVar23[4] = uVar30;
        puVar23[2] = uVar3;
        *(uint *)(puVar23 + 3) = (uint)uVar2;
      }
      if (*(short *)(lVar28 + 0xd6) != 0) {
        uVar2 = *(ushort *)(lVar28 + 0xd4);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 5;
        if ((undefined8 *)puVar18[1] < puVar11) {
          FMemStackBase::AllocateNewChunk(puVar18,0x30);
          puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar23 + 5;
        }
        *puVar18 = (ulonglong)puVar11;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar23;
        *(undefined8 **)(param_1 + 8) = puVar23 + 1;
        puVar23[1] = 0;
        *puVar23 = &PTR_LAB_144d91e40;
        puVar23[4] = local_170;
        puVar23[2] = uVar3;
        *(uint *)(puVar23 + 3) = (uint)uVar2;
      }
      in_stack_fffffffffffffe50 = &local_168;
      uVar30 = DAT_146532c48;
      FUN_1424d2c80(lVar28,param_1,*(undefined8 *)(param_2 + (longlong)(int)local_res18 * 8),
                    *(undefined8 *)(param_2 + 0x20 + (longlong)(int)local_res18 * 8),DAT_146532c48,
                    in_stack_fffffffffffffe50,DAT_146532c98);
      in_stack_fffffffffffffe48 = CONCAT44((int)((ulonglong)uVar30 >> 0x20),1);
      DispatchComputeShader(param_1,lVar28,local_180,1,in_stack_fffffffffffffe48);
      FRadixSortDownsweepCS::UnbindBuffers(lVar28,param_1);
      puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar23 + 2;
      if ((undefined8 *)puVar18[1] < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18,0x18);
        puVar23 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar23 + 2;
      }
      *puVar18 = (ulonglong)puVar11;
      *puVar23 = local_120;
      puVar23[1] = local_118;
      puVar14 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar14 + 6;
      if ((undefined8 *)puVar18[1] < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18,0x38);
        puVar14 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar14 + 6;
      }
      *puVar18 = (ulonglong)puVar11;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar14;
      *(undefined8 **)(param_1 + 8) = puVar14 + 1;
      puVar14[3] = puVar23;
      local_res18 = local_res18 ^ 1;
      puVar14[1] = 0;
      *(undefined4 *)(puVar14 + 2) = 2;
      *puVar14 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar14 + 4) = 2;
      *(undefined4 *)((longlong)puVar14 + 0x24) = 3;
      puVar14[5] = 0;
      param_3 = local_res18;
      if ((local_130 != 0) || (local_17c != 0)) break;
    }
    local_108 = local_108 + 4;
    local_178 = local_178 + 1;
    param_6 = param_6 << 4;
  } while (local_178 < 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
  return param_3;
}



// FUNCTION 1424d56a0 FUN_1424d56a0 body=113 status=ok
// SIG undefined FUN_1424d56a0(void)

void FUN_1424d56a0(longlong param_1,int param_2)

{
  undefined1 local_res10 [8];
  
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x94)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x88,0);
  }
  FUN_1424d5720(param_1,0,param_2 + -1);
  AlgoImpl::
  IntroSortInternal<FClusterBuilder::FRunPair,FIdentityFunctor,TDereferenceWrapper<FClusterBuilder::FRunPair,TLess<FClusterBuilder::FRunPair>_>_>
            (*(undefined8 *)(param_1 + 0x88),(longlong)*(int *)(param_1 + 0x90),local_res10[0],
             local_res10);
  return;
}



// FUNCTION 1424d5720 FUN_1424d5720 body=843 status=ok
// SIG undefined FUN_1424d5720(void)

void FUN_1424d5720(longlong param_1,int param_2,uint param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  undefined1 uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  char cVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int local_res8;
  uint uStackX_c;
  int local_res10;
  uint local_res18;
  uint local_res20;
  float fStack_c0;
  
  local_res10._0_1_ = (undefined1)param_2;
  uVar11 = (undefined1)local_res10;
  uVar13 = (ulonglong)(int)param_3;
  uVar15 = uVar13;
  local_res10 = param_2;
  local_res18 = param_3;
  while( true ) {
    iVar7 = local_res10;
    uStackX_c = ((int)uVar15 - local_res10) + 1;
    bVar9 = false;
    lVar22 = (longlong)local_res10;
    fStack_c0 = DAT_1468b5d94;
    fVar25 = DAT_1468b5d98;
    fVar26 = DAT_1468b5d90;
    fVar24 = DAT_1468b5d90;
    fVar27 = DAT_1468b5d94;
    fVar28 = DAT_1468b5d98;
    if (lVar22 <= (longlong)uVar13) {
      lVar20 = *(longlong *)(param_1 + 0x50);
      lVar21 = (uVar13 - lVar22) + 1;
      piVar19 = (int *)(*(longlong *)(param_1 + 0x40) + lVar22 * 4);
      do {
        lVar14 = (longlong)*piVar19;
        if (bVar9) {
          fVar2 = *(float *)(lVar20 + lVar14 * 0xc);
          if (fVar2 < fVar24) {
            fVar24 = fVar2;
          }
          fVar3 = *(float *)(lVar20 + 4 + lVar14 * 0xc);
          if (fVar3 < fVar27) {
            fVar27 = fVar3;
          }
          fVar4 = *(float *)(lVar20 + 8 + lVar14 * 0xc);
          if (fVar4 < fVar28) {
            fVar28 = fVar4;
          }
          if (fVar26 < fVar2) {
            fVar26 = fVar2;
          }
          if (fStack_c0 < fVar3) {
            fStack_c0 = fVar3;
          }
          if (fVar25 < fVar4) {
            fVar25 = fVar4;
          }
        }
        else {
          uVar6 = *(undefined8 *)(lVar20 + lVar14 * 0xc);
          bVar9 = true;
          fVar25 = *(float *)(lVar20 + 8 + lVar14 * 0xc);
          fVar26 = (float)uVar6;
          fStack_c0 = (float)((ulonglong)uVar6 >> 0x20);
          fVar24 = fVar26;
          fVar27 = fStack_c0;
          fVar28 = fVar25;
        }
        piVar19 = piVar19 + 1;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    local_res20 = uStackX_c;
    if ((int)uStackX_c <= *(int *)(param_1 + 0x24)) break;
    plVar1 = (longlong *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0xa4)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
    fVar26 = fVar26 - fVar24;
    fStack_c0 = fStack_c0 - fVar27;
    fVar24 = fStack_c0;
    if (fStack_c0 <= fVar26) {
      fVar24 = fVar26;
    }
    cVar23 = fVar26 < fStack_c0;
    uVar10 = uStackX_c;
    lVar20 = lVar22;
    if (fVar24 < fVar25 - fVar28) {
      cVar23 = '\x02';
    }
    for (; lVar20 <= (longlong)uVar13; lVar20 = lVar20 + 1) {
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x40) + lVar20 * 4);
      puVar16 = (undefined4 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar7 * 0xc);
      if (cVar23 != '\0') {
        if (cVar23 == '\x01') {
          puVar16 = puVar16 + 1;
        }
        else {
          puVar16 = puVar16 + 2;
        }
      }
      iVar8 = *(int *)(param_1 + 0xa0);
      uVar5 = *puVar16;
      *(int *)(param_1 + 0xa0) = iVar8 + 1;
      if (*(int *)(param_1 + 0xa4) < iVar8 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
      }
      *(ulonglong *)(*plVar1 + (longlong)iVar8 * 8) = CONCAT44(iVar7,uVar5);
      uVar10 = local_res20;
      iVar7 = local_res10;
    }
    FUN_1424b2510(*plVar1,(longlong)*(int *)(param_1 + 0xa0),uVar11,&local_res8);
    for (lVar20 = lVar22; lVar20 <= (longlong)uVar13; lVar20 = lVar20 + 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + lVar20 * 4) =
           *(undefined4 *)(*plVar1 + 4 + (lVar20 - lVar22) * 8);
    }
    iVar12 = (int)uVar10 / 2;
    iVar18 = iVar12 + iVar7 + -1;
    iVar8 = (local_res18 - iVar12) + 1;
    iVar17 = iVar8;
    if ((uVar10 & 1) != 0) {
      lVar20 = (longlong)iVar12;
      lVar22 = *plVar1;
      fVar25 = *(float *)(lVar22 + lVar20 * 8);
      iVar17 = local_res18 - iVar12;
      if (fVar25 - *(float *)(lVar22 + -8 + lVar20 * 8) <
          *(float *)(lVar22 + 8 + lVar20 * 8) - fVar25) {
        iVar17 = iVar8;
        iVar18 = iVar12 + iVar7;
      }
    }
    FUN_1424d5720(param_1,local_res10,iVar18);
    uVar15 = (ulonglong)local_res18;
    local_res10 = iVar17;
  }
  iVar7 = *(int *)(param_1 + 0x90);
  *(int *)(param_1 + 0x90) = iVar7 + 1;
  local_res8 = local_res10;
  if (*(int *)(param_1 + 0x94) < iVar7 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x88,iVar7);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar7 * 8) =
       CONCAT44(uStackX_c,local_res8);
  return;
}



// FUNCTION 1424d5a70 FUN_1424d5a70 body=221 status=ok
// SIG undefined FUN_1424d5a70(void)

void FUN_1424d5a70(longlong param_1)

{
  BOOL BVar1;
  LPVOID pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if (*(longlong **)(param_1 + 600) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 600) + 0x60))();
  }
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
  }
  uVar3 = 0;
  uVar4 = (longlong)DAT_146af9c18 & 0x1fffffffffffffff;
  if (DAT_146af9c10 + DAT_146af9c18 < DAT_146af9c10) {
    uVar4 = uVar3;
  }
  plVar5 = DAT_146af9c10;
  if (uVar4 != 0) {
    do {
      if ((*(byte *)(*plVar5 + 0xb8) & 1) != 0) {
        FUN_14370d450(*plVar5 + 0x78);
      }
      plVar5 = plVar5 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af9c20);
  pvVar2 = TlsGetValue(DAT_146b8198c);
  FUN_14370d450(pvVar2);
  FUN_143712ff0(*(undefined8 *)(param_1 + 0x250));
  *(undefined1 *)(param_1 + 0x262) = 1;
  return;
}



// FUNCTION 1424d5b50 FUN_1424d5b50 body=12 status=ok
// SIG undefined FUN_1424d5b50(void)

void FUN_1424d5b50(void)

{
  FUN_1424d5a70(DAT_146af7620);
  return;
}



// FUNCTION 1424d5b60 FUN_1424d5b60 body=935 status=ok
// SIG undefined FUN_1424d5b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424d5b60(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  char cVar11;
  float fVar12;
  float fVar13;
  undefined8 *puVar14;
  uint uVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong lVar21;
  void *pvVar22;
  int iVar23;
  undefined8 uVar24;
  uint uVar25;
  void *pvVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  void *local_198;
  uint local_190;
  uint local_18c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  int local_168 [2];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined1 local_a8 [128];
  
  uVar10 = uRam0000000146af9d1c;
  pvVar22 = (void *)0x0;
  uVar25 = 0;
  uVar15 = 0x238946;
  uVar27 = _DAT_146af9d10 & _DAT_146af7650;
  uVar28 = uRam0000000146af9d14 & uRam0000000146af7654;
  uVar29 = uRam0000000146af9d18 & uRam0000000146af7658;
  uVar30 = uRam0000000146af9d1c & uRam0000000146af765c;
  local_198 = (void *)0x0;
  local_18c = 0;
  pvVar16 = pvVar22;
  pvVar17 = pvVar22;
  pvVar18 = pvVar22;
  pvVar26 = pvVar22;
  do {
    uVar9 = uRam00000001468b5b98;
    uVar8 = _DAT_1468b5b90;
    uVar7 = uRam00000001468b5b88;
    uVar6 = _DAT_1468b5b80;
    uVar5 = uRam00000001468b5b78;
    uVar24 = _DAT_1468b5b70;
    lVar21 = (longlong)(int)pvVar17;
    local_190 = (int)pvVar17 + 1;
    uVar4 = local_190;
    if ((int)pvVar16 < (int)local_190) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_198,pvVar17);
      pvVar16 = (void *)(ulonglong)local_18c;
      pvVar26 = local_198;
      uVar4 = local_190;
    }
    pvVar17 = (void *)(ulonglong)uVar4;
    puVar14 = (undefined8 *)((longlong)pvVar26 + lVar21 * 0x30);
    *puVar14 = uVar24;
    puVar14[1] = uVar5;
    puVar14 = (undefined8 *)((longlong)pvVar26 + lVar21 * 0x30 + 0x10);
    *puVar14 = uVar6;
    puVar14[1] = uVar7;
    puVar14 = (undefined8 *)((longlong)pvVar26 + lVar21 * 0x30 + 0x20);
    *puVar14 = uVar8;
    puVar14[1] = uVar9;
    puVar1 = (undefined4 *)((longlong)pvVar18 + (longlong)pvVar26);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = uVar10;
    puVar2 = (uint *)((longlong)pvVar18 + 0x20U + (longlong)pvVar26);
    *puVar2 = uVar27;
    puVar2[1] = uVar28;
    puVar2[2] = uVar29;
    puVar2[3] = uVar30;
    uVar15 = uVar15 * 0xbb38435 + 0x3619636b;
    fVar12 = (float)(uVar15 & 0x7fffff | 0x3f800000);
    uVar15 = uVar15 * 0xbb38435 + 0x3619636b;
    fVar13 = (float)(uVar15 & 0x7fffff | 0x3f800000);
    puVar14 = (undefined8 *)((longlong)pvVar18 + 0x10U + (longlong)pvVar26);
    *puVar14 = CONCAT44((fVar12 - (float)(int)fVar12) * 10000.0,
                        (fVar13 - (float)(int)fVar13) * 10000.0);
    puVar14[1] = 0;
    pvVar18 = (void *)((longlong)pvVar18 + 0x30);
  } while ((longlong)pvVar18 < 48000);
  local_170 = CONCAT31(local_170._1_3_,1);
  local_178 = 0x42c80000;
  uStack_174 = 0x42c80000;
  local_198 = (void *)0x0;
  local_18c = 0;
  pvVar16 = pvVar17;
  pvVar18 = pvVar22;
  if (0 < (int)uVar4) {
    local_190 = uVar4;
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_198,0);
    pvVar16 = (void *)(ulonglong)local_190;
    pvVar18 = local_198;
    if (0 < (int)uVar4) {
      lVar21 = (longlong)pvVar26 - (longlong)local_198;
      puVar14 = (undefined8 *)((longlong)local_198 + 0x10);
      do {
        puVar3 = (undefined8 *)(lVar21 + -0x10 + (longlong)puVar14);
        uVar24 = puVar3[1];
        puVar14[-2] = *puVar3;
        puVar14[-1] = uVar24;
        uVar24 = ((undefined8 *)(lVar21 + (longlong)puVar14))[1];
        *puVar14 = *(undefined8 *)(lVar21 + (longlong)puVar14);
        puVar14[1] = uVar24;
        puVar3 = (undefined8 *)(lVar21 + 0x10 + (longlong)puVar14);
        uVar24 = puVar3[1];
        puVar14[2] = *puVar3;
        puVar14[3] = uVar24;
        puVar14 = puVar14 + 6;
        pvVar17 = (void *)((longlong)pvVar17 - 1);
      } while (pvVar17 != (void *)0x0);
    }
  }
  local_198 = (void *)0x0;
  iVar23 = (int)pvVar16;
  local_108 = pvVar22;
  local_190 = iVar23;
  if (iVar23 != 0) {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_198,pvVar16,0);
    pvVar16 = local_198;
    _guard_xfg_dispatch_icall_nop(local_198,pvVar18,(longlong)iVar23 * 0x30);
    local_108 = pvVar16;
    uVar25 = local_18c;
  }
  uVar10 = local_190;
  puVar14 = (undefined8 *)FUN_1424b3d30(local_a8,0x10);
  local_150 = CONCAT44(uStack_174,local_178);
  local_148 = local_170;
  local_12c = 0x3f800000;
  local_160 = 0xc2c80000c2c80000;
  uStack_158 = 0x42c80000c2c80000;
  local_138 = 0;
  local_130 = 1;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_f8 = *puVar14;
  uStack_f0 = puVar14[1];
  local_e8 = *(undefined4 *)(puVar14 + 2);
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = (longlong *)0x0;
  local_b8 = 0;
  local_168[0] = uVar10;
  local_100 = uVar10;
  local_fc = uVar25;
  FUN_1424bab80(local_168);
  plVar19 = local_c0;
  do {
    plVar20 = plVar19;
    if ((int)pvVar22 == 0) {
      cVar11 = '\x01';
    }
    else {
      lVar21 = *plVar19;
      uVar24 = 0;
      cVar11 = '\0';
      iVar23 = *(int *)(lVar21 + 0xc);
      if ((-1 < iVar23) && (iVar23 <= *(int *)(lVar21 + 0x1c))) {
        do {
          cVar11 = PrintLevel(plVar19,iVar23,pvVar22,1,0);
          if ((cVar11 != '\0') || ((char)uVar24 != '\0')) {
            uVar24 = 1;
          }
          cVar11 = (char)uVar24;
          iVar23 = iVar23 + 1;
          plVar20 = local_c0;
        } while (iVar23 <= *(int *)(lVar21 + 0x1c));
      }
    }
    pvVar22 = (void *)(ulonglong)((int)pvVar22 + 1);
    plVar19 = plVar20;
  } while (cVar11 != '\0');
  FUN_1424b5b70(local_168);
  if (pvVar18 != (void *)0x0) {
    FMemory::Free(pvVar18);
  }
  if (pvVar26 != (void *)0x0) {
    FMemory::Free(pvVar26);
  }
  return;
}


